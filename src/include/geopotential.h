#include"triangle.h"
#include<array>
#include"vec_t.h"

//author: himisawww (https://github.com/himisawww)
//notes on algorithms: https://bridge.kamine.cloud/archives/722
namespace geopotential{

typedef vec_t<double> vec;

class trig{
public:
    vec p1,p2,p3;
    trig(const CLTriangle &ctrig){
        p1.x=ctrig.v[0].x;
        p1.y=ctrig.v[0].y;
        p1.z=ctrig.v[0].z;
        p2.x=ctrig.v[1].x;
        p2.y=ctrig.v[1].y;
        p2.z=ctrig.v[1].z;
        p3.x=ctrig.v[2].x;
        p3.y=ctrig.v[2].y;
        p3.z=ctrig.v[2].z;
    }

    //integrator of solid angle
    double solid_angle(const vec &r) const;

    //integrator of precise {potential, gravity} upon spatial point r={rx,ry,rz}
    //assume G = density = 1
    std::pair<double,vec> gravity(const vec &r) const;

    //integrators
    double m() const;
    double cx() const;
    double cy() const;
    double cz() const;
    double j2() const;
    double c21() const;
    double c22() const;
    double s21() const;
    double s22() const;
    double j3() const;
    double c31() const;
    double c32() const;
    double c33() const;
    double s31() const;
    double s32() const;
    double s33() const;
    double j4() const;
    double c41() const;
    double c42() const;
    double c43() const;
    double c44() const;
    double s41() const;
    double s42() const;
    double s43() const;
    double s44() const;
    double j5() const;
    double c51() const;
    double c52() const;
    double c53() const;
    double c54() const;
    double c55() const;
    double s51() const;
    double s52() const;
    double s53() const;
    double s54() const;
    double s55() const;
    double j6() const;
    double c61() const;
    double c62() const;
    double c63() const;
    double c64() const;
    double c65() const;
    double c66() const;
    double s61() const;
    double s62() const;
    double s63() const;
    double s64() const;
    double s65() const;
    double s66() const;
};

class trigmesh:public std::vector<trig>{
public:
    vec offset;
    double volume;
    double ref_radius;
    std::string error_msg;
    bool initialized;

    trigmesh():initialized(false){}

    template<typename... Args>
    auto integrate_multiple(Args... args) const{
        std::array<double,sizeof...(Args)> result{};
        for(const auto &t:*this){
            double *presult=result.data();
            ((*presult+++=(t.*args)()),...);
        }
        return result;
    }

    bool initialize();
    // 2 <= degree <= 6
    // return { jn, cn1, cn2, ... cnn, sn1, sn2, ... snn }
    std::vector<double> integrate_geopotential(int degree) const;

    //solid angle when observed from point r={rx,ry,rz}
    //Note: backward faces contribute negatively; 
    //      this is to determine if the mesh is a closure && if r is inside the mesh
    double solid_angle(const vec &r) const;

    //precise {potential, gravity} upon spatial point r={rx,ry,rz}
    //assume G = density = 1
    std::pair<double,vec> gravity(const vec &r) const;
};



}
