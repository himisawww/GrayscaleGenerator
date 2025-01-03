#include"geopotential.h"
#include"mesh.h"

using namespace geopotential;

constexpr double pi=3.14159265358979323;

bool trigmesh::initialize(){
    for(int i=0;i<2;++i){
        auto mxyz=integrate_multiple(&trig::m,&trig::cx,&trig::cy,&trig::cz);
        volume=mxyz[0];
        if(!(volume>0&&volume!=INFINITY)){
            error_msg+="Non-finite-positive volume. Check model normals.\n";
            return false;
        }
        offset.x=mxyz[1]/volume;
        offset.y=mxyz[2]/volume;
        offset.z=mxyz[3]/volume;
        if(i)break;
        for(auto &t:*this){
            t.p1-=offset;
            t.p2-=offset;
            t.p3-=offset;
        }
    }
    ref_radius=std::cbrt(volume*3/(4*pi));
    if(!(offset.norm()<1e-12*ref_radius)){
        error_msg+="Cannot eliminate barycentric offset. Is the model a closure?\n";
        return false;
    }
    double sa0=solid_angle(vec(0))/(4*pi);
    sa0-=std::round(sa0);
    if(!(std::abs(sa0)<1e-12)){
        error_msg+="Solid angle is not multiple of 4pi. Is the model a closure?\n";
        return false;
    }
    initialized=true;
    return true;
}

static std::string double_string(double x){
    char buf[32];
    sprintf(buf,"%.17e",x);
    return buf;
}
static std::string integer_string(int n){
    char buf[32];
    sprintf(buf,"%d",n);
    return buf;
}

//the normalization convention used by principia is differed from us...
static double principia_factor(int n,int m){
    double factor=1/double(2*n+1);
    for(int k=n-m;k<n+m;)factor*=++k;
    return m==0?-std::sqrt(factor):std::sqrt(factor/2);
}

std::string Mesh::makeGeopotential(int max_degree) const{
    if(max_degree<2||6<max_degree)
        return "MaxDegree should be in [2,6]";

    trigmesh gpmesh;
    for(auto &t:triangles)
        gpmesh.emplace_back(t);

    if(!gpmesh.initialize())
        return gpmesh.error_msg;

    std::string result("    reference_radius        = ");
    result+=double_string(gpmesh.ref_radius);
    result+=" km\n";
    for(int n=2;n<=max_degree;++n){
        auto data=gpmesh.integrate_geopotential(n);
        if(data.size()!=n*2+1)
            return "Degree not implemented";
        result+="    geopotential_row {\n";
        result+="      degree = ";
        result+=integer_string(n);
        result+="\n";
        for(int m=0;m<=n;++m){
            double pfactor=principia_factor(n,m);
            result+="      geopotential_column {\n";
            result+="        order = ";
            result+=integer_string(m);
            result+="\n";
            result+="        cos   = ";
            result+=double_string(pfactor*data[m]);
            result+="\n";
            result+="        sin   = ";
            result+=double_string(pfactor*(m==0?0:data[m+n]));
            result+="\n";
            result+="      }\n";
        }
        result+="    }\n";
    }
    return result;
}

double trig::solid_angle(const vec &r) const{
    vec r1=p1-r;
    vec r2=p2-r;
    vec r3=p3-r;
    double r1n=r1.norm();
    double r2n=r2.norm();
    double r3n=r3.norm();
    double r123=r1%(r2*r3);
    double L=2*std::atan2(r123,r1n*r2n*r3n+r1n*(r2%r3)+r2n*(r3%r1)+r3n*(r1%r2));
    return L;
}

double trigmesh::solid_angle(const vec &r) const{
    double result=0;
    for(const auto &t:*this)
        result+=t.solid_angle(r);
    return result;
}

std::pair<double,vec> trigmesh::gravity(const vec &r) const{
    std::pair<double,vec> result(0,0);
    for(const auto &t:*this){
        auto tr=t.gravity(r);
        result.first+=tr.first;
        result.second+=tr.second;
    }
    return result;
}

std::pair<double,vec> trig::gravity(const vec &r) const{
    std::pair<double,vec> result(0,0);
    vec e1=p2-p1;
    vec e2=p3-p2;
    vec e3=p1-p3;
    vec n=e1*e2;
    double n2=n.normsqr();
    if(n2>0){
        auto lnterm=[](const vec &r1,const double &r1n,
                       const vec &r2,const double &r2n,
                       const vec &e1,const vec &e2){
            double e12=e1%e1;
            double e1n=std::sqrt(e12);
            double e1_r1=e1%r1;
            double e1nr1=e1n*r1n;
            double e1_r2=e1%r2;
            double e1nr2=e1n*r2n;
            double lnu=e1_r1+e1nr1;
            double lnd=e1_r2+e1nr2;
            return e1n>0&&lnu>0&&lnd>0?
                std::log(lnu/lnd)*(e1%e2*e1_r1-r1%e2*e12)/e1n
                :0;
        };
        vec r1=p1-r;
        vec r2=p2-r;
        vec r3=p3-r;
        double r1n=r1.norm();
        double r2n=r2.norm();
        double r3n=r3.norm();
        double r123=r1%(r2*r3);
        double L=2*std::atan2(r123,r1n*r2n*r3n+r1n*(r2%r3)+r2n*(r3%r1)+r3n*(r1%r2));
        L*=r123;
        L+=lnterm(r1,r1n,r2,r2n,e1,e2);
        L+=lnterm(r2,r2n,r3,r3n,e2,e3);
        L+=lnterm(r3,r3n,r1,r1n,e3,e1);
        L/=n2;
        result.first+=L*r123/2;
        result.second+=L*n;
    }

    return result;
}

std::vector<double> trigmesh::integrate_geopotential(int d) const{
    std::vector<double> result;
    if(initialized)switch(d)
    {
    case 2:{
        auto gp=integrate_multiple(&trig::j2,&trig::c21,&trig::c22,&trig::s21,&trig::s22);
        result.assign(gp.begin(),gp.end());
        break;
    }
    case 3:{
        auto gp=integrate_multiple(&trig::j3,&trig::c31,&trig::c32,&trig::c33,&trig::s31,&trig::s32,&trig::s33);
        result.assign(gp.begin(),gp.end());
        break;
    }
    case 4:{
        auto gp=integrate_multiple(&trig::j4,&trig::c41,&trig::c42,&trig::c43,&trig::c44,&trig::s41,&trig::s42,&trig::s43,&trig::s44);
        result.assign(gp.begin(),gp.end());
        break;
    }
    case 5:{
        auto gp=integrate_multiple(&trig::j5,&trig::c51,&trig::c52,&trig::c53,&trig::c54,&trig::c55,&trig::s51,&trig::s52,&trig::s53,&trig::s54,&trig::s55);
        result.assign(gp.begin(),gp.end());
        break;
    }
    case 6:{
        auto gp=integrate_multiple(&trig::j6,&trig::c61,&trig::c62,&trig::c63,&trig::c64,&trig::c65,&trig::c66,&trig::s61,&trig::s62,&trig::s63,&trig::s64,&trig::s65,&trig::s66);
        result.assign(gp.begin(),gp.end());
        break;
    }
    default:
        break;
    }
    double multiplier=std::pow(ref_radius,double(-d))/volume;
    for(auto &c:result)
        c*=multiplier;
    return result;
}
