//Generated, Do Not Edit

#include"geopotential.h"

namespace geopotential{

double trig::m() const{
    return ((p3.x*(p1.y-p2.y)+p1.x*(p2.y-p3.y)+p2.x*(-p1.y+p3.y))*(p1.z+p2.z+p3.z))/double(6);
}

double trig::cx() const{
    double p10_2=p1.x*p1.x;
    double p20_2=p2.x*p2.x;
    double p30_2=p3.x*p3.x;
    return ((p10_2+p20_2+p2.x*p3.x+p30_2+p1.x*(p2.x+p3.x))*(p3.y*
        (p1.z-p2.z)+p1.y*(p2.z-p3.z)+p2.y*(-p1.z+p3.z)))/double(24);
}

double trig::cy() const{
    double p11_2=p1.y*p1.y;
    double p21_2=p2.y*p2.y;
    double p31_2=p3.y*p3.y;
    return ((p11_2+p21_2+p2.y*p3.y+p31_2+p1.y*(p2.y+p3.y))*(p3.x*
        (-p1.z+p2.z)+p2.x*(p1.z-p3.z)+p1.x*(-p2.z+p3.z)))/double(24);
}

double trig::cz() const{
    double p12_2=p1.z*p1.z;
    double p22_2=p2.z*p2.z;
    double p32_2=p3.z*p3.z;
    return ((p3.x*(p1.y-p2.y)+p1.x*(p2.y-p3.y)+p2.x*(-p1.y+p3.y))*
        (p12_2+p22_2+p2.z*p3.z+p32_2+p1.z*(p2.z+p3.z)))/double(24);
}

double trig::j2() const{
    double p30_2=p3.x*p3.x;
    double p11_2=p1.y*p1.y;
    double p21_2=p2.y*p2.y;
    double p31_2=p3.y*p3.y;
    double p12_2=p1.z*p1.z;
    double p22_2=p2.z*p2.z;
    double p32_2=p3.z*p3.z;
    double p20_2=p2.x*p2.x;
    double p20_3=p2.x*p20_2;
    double p10_2=p1.x*p1.x;
    double p10_3=p1.x*p10_2;
    double c_0=p30_2;
    double c_1=p11_2;
    double c_2=p21_2;
    double c_3=2*p2.y*p3.y;
    double c_4=p31_2;
    double c_5=p12_2;
    double c_6=-(2*c_5);
    double c_7=p22_2;
    double c_8=-(4*p2.z*p3.z);
    double c_9=p32_2;
    double c_10=p20_2;
    double c_11=2*p1.y*p2.y;
    double c_12=2*p1.y*p3.y;
    double c_13=-(4*p1.z*p2.z);
    double c_14=-(2*c_7);
    double c_15=-(4*p1.z*p3.z);
    double c_16=-(2*c_9);
    return ((p3.y*(p1.z-p2.z)+p1.y*(p2.z-p3.z)+p2.y*(-p1.z+p3.z))*(p10_3+p20_3+c_10*p3.x+p10_2*
        (p2.x+p3.x)+p3.x*(c_0+c_1+p1.y*p2.y+c_2+c_12+c_3+3*c_4+c_6-2*p1.z*p2.z+c_14+c_15+c_8-6*c_9)+p2.x*
        (c_0+c_1+c_11+3*c_2+p1.y*p3.y+c_3+c_4+c_6+c_13-6*c_7-2*p1.z*p3.z+c_8+c_16)+p1.x*(c_10+p2.x*
        p3.x+c_0+3*c_1+c_11+c_2+c_12+p2.y*p3.y+c_4-6*c_5+c_13+c_14+c_15-2*p2.z*p3.z+c_16)))/double(120);
}

double trig::c21() const{
    double p10_2=p1.x*p1.x;
    double p20_2=p2.x*p2.x;
    double p30_2=p3.x*p3.x;
    double c_0=2*p1.z;
    return ((p3.y*(p1.z-p2.z)+p1.y*(p2.z-p3.z)+p2.y*(-p1.z+p3.z))*(p10_2*(3*
        p1.z+p2.z+p3.z)+p20_2*(p1.z+3*p2.z+p3.z)+p30_2*(p1.z+p2.z+3*p3.z)+p2.x*p3.x*(p1.z+2*
        (p2.z+p3.z))+p1.x*(p2.x*(c_0+2*p2.z+p3.z)+p3.x*(c_0+p2.z+2*p3.z))))/double(120);
}

double trig::c22() const{
    double p30_2=p3.x*p3.x;
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p10_2=p1.x*p1.x;
    double p20_2=p2.x*p2.x;
    double c_0=p30_2;
    double c_1=p11_2;
    double c_2=p21_2;
    double c_3=p31_2;
    double c_4=2*p1.y;
    return -(((c_0*p1.y-p11_3+c_0*p2.y-c_1*p2.y-p1.y*c_2-p21_3+3*c_0*p3.y-c_1*p3.y-p1.y*p2.y*p3.y-c_2*p3.y-p1.y*
        c_3-p2.y*c_3-p31_3+p10_2*(3*p1.y+p2.y+p3.y)+p20_2*(p1.y+3*p2.y+p3.y)+p2.x*p3.x*(p1.y+2*(p2.y+p3.y))+p1.x*(p2.x*
        (c_4+2*p2.y+p3.y)+p3.x*(c_4+p2.y+2*p3.y)))*(p3.x*(p1.z-p2.z)+p1.x*(p2.z-p3.z)+p2.x*(-p1.z+p3.z)))/double(240));
}

double trig::s21() const{
    double p11_2=p1.y*p1.y;
    double p21_2=p2.y*p2.y;
    double p31_2=p3.y*p3.y;
    double c_0=2*p1.z;
    return ((p3.x*(-p1.z+p2.z)+p2.x*(p1.z-p3.z)+p1.x*(-p2.z+p3.z))*(p11_2*(3*
        p1.z+p2.z+p3.z)+p21_2*(p1.z+3*p2.z+p3.z)+p31_2*(p1.z+p2.z+3*p3.z)+p2.y*p3.y*(p1.z+2*
        (p2.z+p3.z))+p1.y*(p2.y*(c_0+2*p2.z+p3.z)+p3.y*(c_0+p2.z+2*p3.z))))/double(120);
}

double trig::s22() const{
    double p10_2=p1.x*p1.x;
    double p20_2=p2.x*p2.x;
    double p30_2=p3.x*p3.x;
    double c_0=2*p1.y;
    return ((p10_2*(3*p1.y+p2.y+p3.y)+p20_2*(p1.y+3*p2.y+p3.y)+p30_2*(p1.y+p2.y+3*
        p3.y)+p2.x*p3.x*(p1.y+2*(p2.y+p3.y))+p1.x*(p2.x*(c_0+2*p2.y+p3.y)+p3.x*(c_0+p2.y+2*
        p3.y)))*(p3.y*(p1.z-p2.z)+p1.y*(p2.z-p3.z)+p2.y*(-p1.z+p3.z)))/double(240);
}

double trig::j3() const{
    double p12_2=p1.z*p1.z;
    double p12_3=p1.z*p12_2;
    double p12_4=p1.z*p12_3;
    double p30_2=p3.x*p3.x;
    double p11_2=p1.y*p1.y;
    double p21_2=p2.y*p2.y;
    double p31_2=p3.y*p3.y;
    double p22_2=p2.z*p2.z;
    double p22_3=p2.z*p22_2;
    double p22_4=p2.z*p22_3;
    double p32_2=p3.z*p3.z;
    double p32_3=p3.z*p32_2;
    double p32_4=p3.z*p32_3;
    double p10_2=p1.x*p1.x;
    double p20_2=p2.x*p2.x;
    double c_0=p12_2;
    double c_1=p30_2;
    double c_2=p11_2;
    double c_3=p21_2;
    double c_4=p31_2;
    double c_5=p22_2;
    double c_6=p12_3;
    double c_7=p22_3;
    double c_8=p32_2;
    double c_9=p32_3;
    double c_10=p2.z+p3.z;
    double c_11=3*c_5;
    double c_12=3*c_0;
    double c_13=2*p2.z*p3.z;
    double c_14=3*c_8;
    return ((p3.x*(p1.y-p2.y)+p1.x*(p2.y-p3.y)+p2.x*(-p1.y+p3.y))*(c_1*c_0+6*c_2*c_0+3*p1.y*p2.y*c_0+c_3*c_0+3*p1.y*
        p3.y*c_0+p2.y*p3.y*c_0+c_4*c_0-2*p12_4+c_1*p1.z*p2.z+3*c_2*p1.z*p2.z+4*p1.y*p2.y*p1.z*p2.z+3*c_3*p1.z*p2.z+2*
        p1.y*p3.y*p1.z*p2.z+2*p2.y*p3.y*p1.z*p2.z+c_4*p1.z*p2.z-2*c_6*p2.z+c_1*c_5+c_2*c_5+3*p1.y*p2.y*c_5+6*c_3*c_5+p1.y*
        p3.y*c_5+3*p2.y*p3.y*c_5+c_4*c_5-2*c_0*c_5-2*p1.z*c_7-2*p22_4+3*c_1*p1.z*p3.z+3*c_2*p1.z*p3.z+2*p1.y*p2.y*p1.z*
        p3.z+c_3*p1.z*p3.z+4*p1.y*p3.y*p1.z*p3.z+2*p2.y*p3.y*p1.z*p3.z+3*c_4*p1.z*p3.z-2*c_6*p3.z+3*c_1*p2.z*p3.z+c_2*
        p2.z*p3.z+2*p1.y*p2.y*p2.z*p3.z+3*c_3*p2.z*p3.z+2*p1.y*p3.y*p2.z*p3.z+4*p2.y*p3.y*p2.z*p3.z+3*c_4*p2.z*p3.z-2*
        c_0*p2.z*p3.z-2*p1.z*c_5*p3.z-2*c_7*p3.z+6*c_1*c_8+c_2*c_8+p1.y*p2.y*c_8+c_3*c_8+3*p1.y*p3.y*c_8+3*p2.y*p3.y*
        c_8+6*c_4*c_8-2*c_0*c_8-2*p1.z*p2.z*c_8-2*c_5*c_8-2*p1.z*c_9-2*p2.z*c_9-2*p32_4+p2.x*p3.x*(c_0+c_11+4*p2.z*p3.z+c_14+2*
        p1.z*c_10)+p10_2*(6*c_0+c_5+p2.z*p3.z+c_8+3*p1.z*c_10)+p20_2*(c_0+6*c_5+3*p2.z*p3.z+c_8+p1.z*(3*p2.z+p3.z))+p1.x*
        (p2.x*(c_12+4*p1.z*p2.z+c_11+2*p1.z*p3.z+c_13+c_8)+p3.x*(c_12+2*p1.z*p2.z+c_5+4*p1.z*p3.z+c_13+c_14))))/double(240);
}

double trig::c31() const{
    double p30_2=p3.x*p3.x;
    double p11_2=p1.y*p1.y;
    double p21_2=p2.y*p2.y;
    double p31_2=p3.y*p3.y;
    double p12_2=p1.z*p1.z;
    double p22_2=p2.z*p2.z;
    double p32_2=p3.z*p3.z;
    double p20_2=p2.x*p2.x;
    double p20_3=p2.x*p20_2;
    double p20_4=p2.x*p20_3;
    double p10_2=p1.x*p1.x;
    double p10_3=p1.x*p10_2;
    double p10_4=p1.x*p10_3;
    double c_0=p30_2;
    double c_1=3*c_0;
    double c_2=p11_2;
    double c_3=p21_2;
    double c_4=p31_2;
    double c_5=p12_2;
    double c_6=-(4*c_5);
    double c_7=p22_2;
    double c_8=p32_2;
    double c_9=3*p2.y*p3.y;
    double c_10=-(12*p2.z*p3.z);
    double c_11=p20_2;
    double c_12=-(12*p1.z*p2.z);
    double c_13=-(4*c_7);
    double c_14=-(12*p1.z*p3.z);
    double c_15=-(4*c_8);
    double c_16=p20_3;
    double c_17=3*c_4;
    double c_18=-(8*p1.z*p2.z);
    double c_19=-(12*c_8);
    double c_20=3*c_2;
    double c_21=3*c_3;
    double c_22=2*p2.y*p3.y;
    double c_23=-(12*c_5);
    double c_24=-(12*c_7);
    double c_25=-(8*p1.z*p3.z);
    double c_26=-(8*p2.z*p3.z);
    return ((p3.y*(-p1.z+p2.z)+p2.y*(p1.z-p3.z)+p1.y*(-p2.z+p3.z))*(3*p10_4+3*p20_4+3*c_16*p3.x+3*p10_3*
        (p2.x+p3.x)+c_0*(c_1+c_2+c_3+c_9+6*c_4+p1.y*(p2.y+3*p3.y)+c_6-4*p1.z*p2.z+c_13+c_14+c_10-24*c_8)+p2.x*
        p3.x*(c_1+c_2+c_21+4*p2.y*p3.y+c_17+2*p1.y*(p2.y+p3.y)+c_6+c_18+c_24+c_25-16*p2.z*p3.z+c_19)+c_11*(c_1+c_2+6*
        c_3+c_9+c_4+p1.y*(3*p2.y+p3.y)+c_6+c_12-24*c_7-4*p1.z*p3.z+c_10+c_15)+p10_2*(3*c_11+3*p2.x*p3.x+c_1+6*
        c_2+3*p1.y*p2.y+c_3+3*p1.y*p3.y+p2.y*p3.y+c_4-24*c_5+c_12+c_13+c_14-4*p2.z*p3.z+c_15)+p1.x*(3*c_16+3*
        c_11*p3.x+p3.x*(c_1+c_20+2*p1.y*p2.y+c_3+4*p1.y*p3.y+c_22+c_17+c_23+c_18+c_13-16*p1.z*p3.z+c_26+c_19)+p2.x*
        (c_1+c_20+4*p1.y*p2.y+c_21+2*p1.y*p3.y+c_22+c_4+c_23-16*p1.z*p2.z+c_24+c_25+c_26+c_15))))/double(1440);
}

double trig::c32() const{
    double p11_2=p1.y*p1.y;
    double p21_2=p2.y*p2.y;
    double p31_2=p3.y*p3.y;
    double p20_2=p2.x*p2.x;
    double p20_3=p2.x*p20_2;
    double p30_2=p3.x*p3.x;
    double p10_2=p1.x*p1.x;
    double p10_3=p1.x*p10_2;
    double c_0=3*p1.z;
    double c_1=2*p3.z;
    double c_2=p11_2;
    double c_3=p21_2;
    double c_4=p31_2;
    double c_5=p20_2;
    double c_6=3*p2.z;
    double c_7=2*p1.z;
    double c_8=2*p2.y*p3.y*p1.z;
    double c_9=3*c_4*p3.z;
    double c_10=2*p2.z;
    double c_11=c_0+c_10+p3.z;
    double c_12=p30_2;
    double c_13=3*p3.z;
    double c_14=p1.z+p2.z+p3.z;
    double c_15=c_7+c_6+p3.z;
    double c_16=3*c_3*p2.z;
    double c_17=c_0+p2.z+c_1;
    double c_18=c_7+p2.z+c_13;
    return ((p3.y*(-p1.z+p2.z)+p2.y*(p1.z-p3.z)+p1.y*(-p2.z+p3.z))*(-(p10_3*(4*p1.z+p2.z+p3.z))-p20_3*(p1.z+4*
        p2.z+p3.z)-c_5*p3.x*(p1.z+c_6+c_1)-p10_2*(p2.x*c_11+p3.x*c_17)+p1.x*(12*c_2*p1.z+6*p1.y*p2.y*p1.z+2*c_3*p1.z+6*p1.y*
        p3.y*p1.z+c_8+2*c_4*p1.z+3*c_2*p2.z+4*p1.y*p2.y*p2.z+c_16+2*p1.y*p3.y*p2.z+2*p2.y*p3.y*p2.z+c_4*p2.z+3*c_2*
        p3.z+2*p1.y*p2.y*p3.z+c_3*p3.z+4*p1.y*p3.y*p3.z+2*p2.y*p3.y*p3.z+c_9-2*p2.x*p3.x*c_14-c_5*c_15-c_12*c_18)+p2.x*
        (3*c_3*p1.z+c_8+c_4*p1.z+12*c_3*p2.z+6*p2.y*p3.y*p2.z+2*c_4*p2.z+3*c_3*p3.z+4*p2.y*p3.y*p3.z+c_9+c_2*c_11-c_12*
        (p1.z+c_10+c_13)+2*p1.y*(p3.y*c_14+p2.y*c_15))+p3.x*(c_3*p1.z+c_8+3*c_4*p1.z+c_16+4*p2.y*p3.y*p2.z+3*c_4*p2.z+2*c_3*
        p3.z+6*p2.y*p3.y*p3.z+12*c_4*p3.z+c_2*c_17-c_12*(p1.z+p2.z+4*p3.z)+2*p1.y*(p2.y*c_14+p3.y*c_18))))/double(1440);
}

double trig::c33() const{
    double p30_2=p3.x*p3.x;
    double p11_2=p1.y*p1.y;
    double p21_2=p2.y*p2.y;
    double p31_2=p3.y*p3.y;
    double p20_2=p2.x*p2.x;
    double p20_3=p2.x*p20_2;
    double p20_4=p2.x*p20_3;
    double p10_2=p1.x*p1.x;
    double p10_3=p1.x*p10_2;
    double p10_4=p1.x*p10_3;
    double c_0=p30_2;
    double c_1=p11_2;
    double c_2=p21_2;
    double c_3=p31_2;
    double c_4=p20_2;
    double c_5=-c_1;
    double c_6=-c_3;
    double c_7=-c_2;
    double c_8=-(3*p2.y*p3.y);
    double c_9=p20_3;
    double c_10=-(3*c_2);
    double c_11=-(3*c_1);
    double c_12=-(2*p2.y*p3.y);
    double c_13=-(3*c_3);
    return ((p10_4+p20_4+c_9*p3.x+p10_3*(p2.x+p3.x)+p10_2*(c_4+p2.x*p3.x+c_0-6*c_1-3*p1.y*p2.y+c_7-3*p1.y*p3.y-p2.y*
        p3.y+c_6)+p2.x*p3.x*(c_0+c_5+c_10-4*p2.y*p3.y+c_13-2*p1.y*(p2.y+p3.y))+c_4*(c_0+c_5-6*c_2+c_8+c_6-p1.y*(3*p2.y+p3.y))+c_0*
        (c_0+c_5+c_7+c_8-6*c_3-p1.y*(p2.y+3*p3.y))+p1.x*(c_9+c_4*p3.x+p2.x*(c_0+c_11+c_10+c_12+c_6-2*p1.y*(2*p2.y+p3.y))+p3.x*
        (c_0+c_11+c_7+c_12+c_13-2*p1.y*(p2.y+2*p3.y))))*(p3.y*(p1.z-p2.z)+p1.y*(p2.z-p3.z)+p2.y*(-p1.z+p3.z)))/double(2880);
}

double trig::s31() const{
    double p30_2=p3.x*p3.x;
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p11_4=p1.y*p11_3;
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p21_4=p2.y*p21_3;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p31_4=p3.y*p31_3;
    double p12_2=p1.z*p1.z;
    double p22_2=p2.z*p2.z;
    double p32_2=p3.z*p3.z;
    double p10_2=p1.x*p1.x;
    double p20_2=p2.x*p2.x;
    double c_0=p30_2;
    double c_1=p11_2;
    double c_2=p21_2;
    double c_3=p11_3;
    double c_4=p21_3;
    double c_5=p31_2;
    double c_6=p31_3;
    double c_7=p2.y+p3.y;
    double c_8=3*c_2;
    double c_9=3*c_1;
    double c_10=2*p2.y*p3.y;
    double c_11=3*c_5;
    double c_12=p12_2;
    double c_13=p22_2;
    double c_14=p32_2;
    return ((c_0*c_1+3*p11_4+c_0*p1.y*p2.y+3*c_3*p2.y+c_0*c_2+3*c_1*c_2+3*p1.y*c_4+3*p21_4+3*c_0*p1.y*p3.y+3*c_3*
        p3.y+3*c_0*p2.y*p3.y+3*c_1*p2.y*p3.y+3*p1.y*c_2*p3.y+3*c_4*p3.y+6*c_0*c_5+3*c_1*c_5+3*p1.y*p2.y*c_5+3*c_2*c_5+3*
        p1.y*c_6+3*p2.y*c_6+3*p31_4+p2.x*p3.x*(c_1+c_8+4*p2.y*p3.y+c_11+2*p1.y*c_7)+p10_2*(6*c_1+c_2+p2.y*p3.y+c_5+3*
        p1.y*c_7)+p20_2*(c_1+6*c_2+3*p2.y*p3.y+c_5+p1.y*(3*p2.y+p3.y))+p1.x*(p2.x*(c_9+4*p1.y*p2.y+c_8+2*p1.y*
        p3.y+c_10+c_5)+p3.x*(c_9+2*p1.y*p2.y+c_2+4*p1.y*p3.y+c_10+c_11))-24*c_1*c_12-12*p1.y*p2.y*c_12-4*c_2*c_12-12*p1.y*
        p3.y*c_12-4*p2.y*p3.y*c_12-4*c_5*c_12-12*c_1*p1.z*p2.z-16*p1.y*p2.y*p1.z*p2.z-12*c_2*p1.z*p2.z-8*p1.y*p3.y*
        p1.z*p2.z-8*p2.y*p3.y*p1.z*p2.z-4*c_5*p1.z*p2.z-4*c_1*c_13-12*p1.y*p2.y*c_13-24*c_2*c_13-4*p1.y*p3.y*
        c_13-12*p2.y*p3.y*c_13-4*c_5*c_13-12*c_1*p1.z*p3.z-8*p1.y*p2.y*p1.z*p3.z-4*c_2*p1.z*p3.z-16*p1.y*p3.y*p1.z*
        p3.z-8*p2.y*p3.y*p1.z*p3.z-12*c_5*p1.z*p3.z-4*c_1*p2.z*p3.z-8*p1.y*p2.y*p2.z*p3.z-12*c_2*p2.z*p3.z-8*p1.y*
        p3.y*p2.z*p3.z-16*p2.y*p3.y*p2.z*p3.z-12*c_5*p2.z*p3.z-4*c_1*c_14-4*p1.y*p2.y*c_14-4*c_2*c_14-12*p1.y*
        p3.y*c_14-12*p2.y*p3.y*c_14-24*c_5*c_14)*(p3.x*(p1.z-p2.z)+p1.x*(p2.z-p3.z)+p2.x*(-p1.z+p3.z)))/double(1440);
}

double trig::s32() const{
    double p10_2=p1.x*p1.x;
    double p20_2=p2.x*p2.x;
    double p30_2=p3.x*p3.x;
    double c_0=3*p1.z;
    double c_1=3*p2.z;
    double c_2=2*p3.z;
    double c_3=p1.z+c_1+c_2;
    double c_4=2*p2.z;
    double c_5=2*p1.z;
    double c_6=3*p3.z;
    double c_7=p1.z+c_4+c_6;
    double c_8=p1.z+p2.z+p3.z;
    double c_9=c_0+c_4+p3.z;
    double c_10=c_5+c_1+p3.z;
    double c_11=c_0+p2.z+c_2;
    double c_12=c_5+p2.z+c_6;
    return ((p3.y*(p1.z-p2.z)+p1.y*(p2.z-p3.z)+p2.y*(-p1.z+p3.z))*(p10_2*(3*p1.y*(4*
        p1.z+p2.z+p3.z)+p2.y*c_9+p3.y*c_11)+p20_2*(p1.y*c_10+3*p2.y*(p1.z+4*p2.z+p3.z)+p3.y*c_3)+2*p2.x*
        p3.x*(p1.y*c_8+p2.y*c_3+p3.y*c_7)+p30_2*(p1.y*c_12+p2.y*c_7+3*p3.y*(p1.z+p2.z+4*p3.z))+2*
        p1.x*(p2.x*(p3.y*c_8+p1.y*c_9+p2.y*c_10)+p3.x*(p2.y*c_8+p1.y*c_11+p3.y*c_12))))/double(1440);
}

double trig::s33() const{
    double p30_2=p3.x*p3.x;
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p11_4=p1.y*p11_3;
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p21_4=p2.y*p21_3;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p31_4=p3.y*p31_3;
    double p10_2=p1.x*p1.x;
    double p20_2=p2.x*p2.x;
    double c_0=p30_2;
    double c_1=p11_2;
    double c_2=p21_2;
    double c_3=p11_3;
    double c_4=p21_3;
    double c_5=p31_2;
    double c_6=p31_3;
    double c_7=p2.y+p3.y;
    double c_8=3*c_2;
    double c_9=3*c_1;
    double c_10=2*p2.y*p3.y;
    double c_11=3*c_5;
    return -(((c_0*c_1-p11_4+c_0*p1.y*p2.y-c_3*p2.y+c_0*c_2-c_1*c_2-p1.y*c_4-p21_4+3*c_0*p1.y*p3.y-c_3*p3.y+3*c_0*
        p2.y*p3.y-c_1*p2.y*p3.y-p1.y*c_2*p3.y-c_4*p3.y+6*c_0*c_5-c_1*c_5-p1.y*p2.y*c_5-c_2*c_5-p1.y*c_6-p2.y*
        c_6-p31_4+p2.x*p3.x*(c_1+c_8+4*p2.y*p3.y+c_11+2*p1.y*c_7)+p10_2*(6*c_1+c_2+p2.y*p3.y+c_5+3*p1.y*c_7)+p20_2*(c_1+6*
        c_2+3*p2.y*p3.y+c_5+p1.y*(3*p2.y+p3.y))+p1.x*(p2.x*(c_9+4*p1.y*p2.y+c_8+2*p1.y*p3.y+c_10+c_5)+p3.x*(c_9+2*
        p1.y*p2.y+c_2+4*p1.y*p3.y+c_10+c_11)))*(p3.x*(p1.z-p2.z)+p1.x*(p2.z-p3.z)+p2.x*(-p1.z+p3.z)))/double(2880));
}

double trig::j4() const{
    double p30_2=p3.x*p3.x;
    double p30_3=p3.x*p30_2;
    double p30_4=p3.x*p30_3;
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p11_4=p1.y*p11_3;
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p21_4=p2.y*p21_3;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p31_4=p3.y*p31_3;
    double p12_2=p1.z*p1.z;
    double p12_3=p1.z*p12_2;
    double p12_4=p1.z*p12_3;
    double p22_2=p2.z*p2.z;
    double p22_3=p2.z*p22_2;
    double p22_4=p2.z*p22_3;
    double p32_2=p3.z*p3.z;
    double p32_3=p3.z*p32_2;
    double p32_4=p3.z*p32_3;
    double p20_2=p2.x*p2.x;
    double p20_3=p2.x*p20_2;
    double p20_4=p2.x*p20_3;
    double p20_5=p2.x*p20_4;
    double p10_2=p1.x*p1.x;
    double p10_3=p1.x*p10_2;
    double p10_4=p1.x*p10_3;
    double p10_5=p1.x*p10_4;
    double c_0=p30_2;
    double c_1=3*c_0;
    double c_2=p11_2;
    double c_3=p21_2;
    double c_4=p31_2;
    double c_5=p12_2;
    double c_6=-(4*c_5);
    double c_7=p22_2;
    double c_8=p32_2;
    double c_9=p20_2;
    double c_10=-(16*p1.z*p2.z);
    double c_11=-(4*c_8);
    double c_12=p20_4;
    double c_13=p20_3;
    double c_14=p11_3;
    double c_15=p21_3;
    double c_16=p31_3;
    double c_17=p12_3;
    double c_18=p22_3;
    double c_19=p32_3;
    double c_20=-(4*c_7);
    double c_21=3*c_2;
    double c_22=4*p2.y*p3.y;
    double c_23=3*c_4;
    double c_24=-(12*c_5);
    double c_25=-(16*p1.z*p3.z);
    double c_26=-(16*p2.z*p3.z);
    double c_27=-(12*c_8);
    double c_28=6*c_3;
    double c_29=3*p2.y*p3.y;
    double c_30=-(24*c_7);
    double c_31=-(8*p1.z*p3.z);
    double c_32=-(12*p2.z*p3.z);
    double c_33=3*p1.y*p2.y;
    double c_34=-(12*p1.z*p2.z);
    double c_35=-(24*p1.z*p3.z);
    double c_36=6*c_2;
    double c_37=3*c_3;
    double c_38=2*p2.y*p3.y;
    double c_39=-(24*c_5);
    double c_40=-(24*p1.z*p2.z);
    double c_41=-(12*c_7);
    double c_42=-(8*p2.z*p3.z);
    double c_43=p30_4;
    double c_44=3*c_43;
    double c_45=p11_4;
    double c_46=p21_4;
    double c_47=p31_4;
    double c_48=3*c_47;
    double c_49=-(12*c_3*c_5);
    double c_50=p12_4;
    double c_51=-(8*c_4*p1.z*p2.z);
    double c_52=24*c_5*c_7;
    double c_53=p22_4;
    double c_54=-(16*p2.y*p3.y*p1.z*p3.z);
    double c_55=-(24*c_4*c_8);
    double c_56=16*p1.z*p2.z*c_8;
    double c_57=p32_4;
    double c_58=8*c_57;
    double c_59=3*p1.y*p3.y;
    double c_60=6*p2.y*p3.y;
    double c_61=6*c_4;
    double c_62=-(8*p1.z*p2.z);
    double c_63=-(12*p1.z*p3.z);
    double c_64=-(24*p2.z*p3.z);
    double c_65=-(24*c_8);
    double c_66=3*c_7;
    double c_67=3*c_5;
    double c_68=3*c_45;
    double c_69=3*c_46;
    double c_70=9*c_3*c_4;
    double c_71=-(8*p2.y*p3.y*c_5);
    double c_72=-(12*c_4*c_5);
    double c_73=8*c_50;
    double c_74=-(16*p2.y*p3.y*p1.z*p2.z);
    double c_75=-(24*c_3*c_7);
    double c_76=-(12*c_4*c_7);
    double c_77=8*c_53;
    double c_78=-(8*c_3*p1.z*p3.z);
    double c_79=-(48*p2.y*p3.y*p2.z*p3.z);
    double c_80=16*c_5*p2.z*p3.z;
    double c_81=16*p1.z*c_7*p3.z;
    double c_82=-(12*c_3*c_8);
    double c_83=24*c_5*c_8;
    double c_84=24*c_7*c_8;
    double c_85=6*c_5;
    double c_86=2*p2.z*p3.z;
    double c_87=3*c_8;
    double c_88=4*p2.z*p3.z;
    double c_89=p2.z+p3.z;
    double c_90=4*p1.z*c_89;
    double c_91=c_67+c_66+c_88+c_87+c_90;
    double c_92=3*p2.z*p3.z;
    return ((p3.y*(-p1.z+p2.z)+p2.y*(p1.z-p3.z)+p1.y*(-p2.z+p3.z))*(3*p10_5+3*p20_5+3*c_12*p3.x+3*p10_4*(p2.x+p3.x)+c_9*
        p3.x*(c_1+c_2+c_33+c_28+2*p1.y*p3.y+c_60+c_23+c_6+c_34+c_30+c_31+c_64+c_27)+c_13*(c_1+c_2+10*c_3+c_22+c_4+p1.y*(4*
        p2.y+p3.y)+c_6+c_10-40*c_7-4*p1.z*p3.z+c_26+c_11)+p10_3*(3*c_9+3*p2.x*p3.x+c_1+10*c_2+4*p1.y*p2.y+c_3+4*p1.y*p3.y+p2.y*
        p3.y+c_4-40*c_5+c_10+c_20+c_25-4*p2.z*p3.z+c_11)+p1.x*(3*c_12+3*c_13*p3.x+c_44+15*c_45+12*c_14*p2.y+9*c_2*c_3+6*p1.y*
        c_15+c_69+12*c_14*p3.y+9*c_2*p2.y*p3.y+6*p1.y*c_3*p3.y+3*c_15*p3.y+9*c_2*c_4+6*p1.y*p2.y*c_4+3*c_3*c_4+6*p1.y*c_16+3*p2.y*
        c_16+c_48-120*c_2*c_5-48*p1.y*p2.y*c_5+c_49-48*p1.y*p3.y*c_5-12*p2.y*p3.y*c_5+c_72+40*c_50-48*c_2*p1.z*p2.z-48*p1.y*
        p2.y*p1.z*p2.z-24*c_3*p1.z*p2.z-24*p1.y*p3.y*p1.z*p2.z+c_74+c_51+32*c_17*p2.z-12*c_2*c_7-24*p1.y*p2.y*c_7+c_75-8*
        p1.y*p3.y*c_7-12*p2.y*p3.y*c_7-4*c_4*c_7+c_52+16*p1.z*c_18+c_77-48*c_2*p1.z*p3.z-24*p1.y*p2.y*p1.z*p3.z+c_78-48*p1.y*
        p3.y*p1.z*p3.z+c_54-24*c_4*p1.z*p3.z+32*c_17*p3.z-12*c_2*p2.z*p3.z-16*p1.y*p2.y*p2.z*p3.z-12*c_3*p2.z*p3.z-16*
        p1.y*p3.y*p2.z*p3.z-16*p2.y*p3.y*p2.z*p3.z-12*c_4*p2.z*p3.z+24*c_5*p2.z*p3.z+c_81+8*c_18*p3.z-12*c_2*c_8-8*p1.y*
        p2.y*c_8-4*c_3*c_8-24*p1.y*p3.y*c_8-12*p2.y*p3.y*c_8+c_55+c_83+c_56+8*c_7*c_8+16*p1.z*c_19+8*p2.z*c_19+c_58+c_0*
        (c_21+c_3+c_29+c_61+2*p1.y*(p2.y+3*p3.y)+c_24+c_62+c_20+c_35+c_32+c_65)+p2.x*p3.x*(c_1+c_21+c_37+c_22+c_23+4*p1.y*
        (p2.y+p3.y)+c_24+c_10+c_41+c_25+c_26+c_27)+c_9*(c_1+c_21+c_28+c_29+c_4+2*p1.y*(3*p2.y+p3.y)+c_24+c_40+c_30+c_31+c_32+c_11))+p10_2*(3*c_13+3*
        c_9*p3.x+p3.x*(c_1+c_36+c_33+c_3+6*p1.y*p3.y+c_38+c_23+c_39+c_34+c_20+c_35+c_42+c_27)+p2.x*(c_1+c_36+6*p1.y*
        p2.y+c_37+c_59+c_38+c_4+c_39+c_40+c_41+c_63+c_42+c_11))+p2.x*(c_44+c_68+15*c_46+12*c_15*p3.y+c_70+6*p2.y*c_16+c_48+3*c_14*(2*
        p2.y+p3.y)+c_49+c_71-4*c_4*c_5+c_73-48*c_3*p1.z*p2.z-24*p2.y*p3.y*p1.z*p2.z+c_51+16*c_17*p2.z-120*c_3*c_7-48*p2.y*p3.y*
        c_7+c_76+c_52+32*p1.z*c_18+40*c_53-12*c_3*p1.z*p3.z+c_54-12*c_4*p1.z*p3.z+8*c_17*p3.z-48*c_3*p2.z*p3.z+c_79-24*c_4*p2.z*
        p3.z+c_80+24*p1.z*c_7*p3.z+32*c_18*p3.z+c_82-24*p2.y*p3.y*c_8+c_55+8*c_5*c_8+c_56+c_84+8*p1.z*c_19+16*p2.z*c_19+c_58+c_0*
        (c_2+2*p1.y*p2.y+c_37+c_59+c_60+c_61+c_6+c_62+c_41+c_63+c_64+c_65)+c_2*(9*c_3+c_60+c_23-4*(c_85+6*p1.z*p2.z+c_66+3*p1.z*
        p3.z+c_86+c_8))+p1.y*(12*c_15+9*c_3*p3.y+6*p2.y*c_4+3*c_16-4*p3.y*c_91-8*p2.y*(c_67+6*c_7+c_92+c_8+2*p1.z*(3*
        p2.z+p3.z))))+p3.x*(c_44+c_68+c_69+6*c_15*p3.y+c_70+12*p2.y*c_16+15*c_47+3*c_14*(p2.y+2*p3.y)-4*c_3*c_5+c_71+c_72+c_73-12*c_3*p1.z*
        p2.z+c_74-12*c_4*p1.z*p2.z+8*c_17*p2.z+c_75-24*p2.y*p3.y*c_7+c_76+8*c_5*c_7+8*p1.z*c_18+c_77+c_78-24*p2.y*p3.y*p1.z*
        p3.z-48*c_4*p1.z*p3.z+16*c_17*p3.z-24*c_3*p2.z*p3.z+c_79-48*c_4*p2.z*p3.z+c_80+c_81+16*c_18*p3.z+c_82-48*p2.y*p3.y*
        c_8-120*c_4*c_8+c_83+24*p1.z*p2.z*c_8+c_84+32*p1.z*c_19+32*p2.z*c_19+40*c_57+c_0*(c_2+c_3+c_22+p1.y*(p2.y+4*p3.y)+2*(5*
        c_4-2*c_5-2*p1.z*p2.z-2*c_7+c_31+c_42-20*c_8))+c_2*(c_37+c_60+9*c_4-4*(c_85+3*p1.z*p2.z+c_7+6*p1.z*p3.z+c_86+c_87))+p1.y*
        (3*c_15+6*c_3*p3.y+9*p2.y*c_4+12*c_16-4*p2.y*c_91-8*p3.y*(c_67+c_7+c_92+6*c_8+2*p1.z*(p2.z+3*p3.z))))))/double(1680);
}

double trig::c41() const{
    double p11_2=p1.y*p1.y;
    double p21_2=p2.y*p2.y;
    double p31_2=p3.y*p3.y;
    double p12_2=p1.z*p1.z;
    double p12_3=p1.z*p12_2;
    double p22_2=p2.z*p2.z;
    double p22_3=p2.z*p22_2;
    double p32_2=p3.z*p3.z;
    double p32_3=p3.z*p32_2;
    double p30_2=p3.x*p3.x;
    double p20_2=p2.x*p2.x;
    double p20_3=p2.x*p20_2;
    double p20_4=p2.x*p20_3;
    double p10_2=p1.x*p1.x;
    double p10_3=p1.x*p10_2;
    double p10_4=p1.x*p10_3;
    double c_0=4*p1.z;
    double c_1=2*p3.z;
    double c_2=p11_2;
    double c_3=p21_2;
    double c_4=p31_2;
    double c_5=p12_2;
    double c_6=p22_2;
    double c_7=p32_2;
    double c_8=3*p1.z;
    double c_9=p30_2;
    double c_10=3*p2.y*p3.y*p1.z;
    double c_11=p12_3;
    double c_12=3*c_3*p2.z;
    double c_13=p22_3;
    double c_14=-(4*c_13);
    double c_15=-(12*p1.z*p2.z*p3.z);
    double c_16=p32_3;
    double c_17=3*p3.z;
    double c_18=c_8+p2.z+c_17;
    double c_19=2*p2.z;
    double c_20=2*p1.z;
    double c_21=3*c_3*p1.z;
    double c_22=3*c_4*p1.z;
    double c_23=-(4*c_11);
    double c_24=6*c_4*p2.z;
    double c_25=-(12*p1.z*c_6);
    double c_26=12*p2.y*p3.y*p3.z;
    double c_27=-(12*p1.z*c_7);
    double c_28=-(24*p2.z*c_7);
    double c_29=4*p3.z;
    double c_30=p2.z+p3.z;
    double c_31=p20_2;
    double c_32=12*p2.y*p3.y*p2.z;
    double c_33=6*c_3*p3.z;
    double c_34=3*c_4*p3.z;
    double c_35=-(24*c_6*p3.z);
    double c_36=-(4*c_16);
    double c_37=3*p2.z;
    double c_38=c_8+c_37+p3.z;
    double c_39=4*p2.z;
    double c_40=p20_3;
    double c_41=c_20+c_39+p3.z;
    double c_42=c_20+c_37+c_1;
    double c_43=4*p2.y*p3.y*p1.z;
    double c_44=6*c_4*p1.z;
    double c_45=3*c_4*p2.z;
    double c_46=-(12*c_5*p2.z);
    double c_47=6*p2.y*p3.y*p3.z;
    double c_48=12*c_4*p3.z;
    double c_49=-(24*c_5*p3.z);
    double c_50=-(16*p1.z*p2.z*p3.z);
    double c_51=-(24*p1.z*c_7);
    double c_52=-(12*p2.z*c_7);
    double c_53=-(16*c_16);
    double c_54=c_0+p2.z+c_1;
    double c_55=c_20+p2.z+c_29;
    double c_56=6*c_3*p1.z;
    double c_57=-(16*c_11);
    double c_58=12*c_3*p2.z;
    double c_59=6*p2.y*p3.y*p2.z;
    double c_60=-(24*c_5*p2.z);
    double c_61=-(24*p1.z*c_6);
    double c_62=-(16*c_13);
    double c_63=3*c_3*p3.z;
    double c_64=-(12*c_5*p3.z);
    double c_65=-(12*c_6*p3.z);
    double c_66=c_0+c_19+p3.z;
    return ((p3.y*(-p1.z+p2.z)+p2.y*(p1.z-p3.z)+p1.y*(-p2.z+p3.z))*(3*p10_4*(5*p1.z+p2.z+p3.z)+3*p20_4*(p1.z+5*
        p2.z+p3.z)+3*c_40*p3.x*(p1.z+c_39+c_1)+3*p10_3*(p2.x*c_66+p3.x*c_54)+p10_2*(9*p2.x*p3.x*p1.z+30*c_2*p1.z+12*p1.y*p2.y*
        p1.z+c_21+12*p1.y*p3.y*p1.z+c_10+c_22-40*c_11+6*c_2*p2.z+6*p1.y*p2.y*p2.z+c_12+3*p1.y*p3.y*p2.z+2*p2.y*p3.y*p2.z+c_4*
        p2.z+c_60+c_25+c_14+6*c_2*p3.z+3*p1.y*p2.y*p3.z+c_3*p3.z+6*p1.y*p3.y*p3.z+2*p2.y*p3.y*p3.z+c_34+c_49+c_15-4*c_6*
        p3.z+c_27-4*p2.z*c_7+c_36+6*p2.x*p3.x*c_30+3*c_31*c_38+3*c_9*c_18)+c_9*(c_3*p1.z+c_10+c_44+c_23+c_12+c_59+c_24-4*c_5*p2.z-4*
        p1.z*c_6+c_14+c_63+c_26+30*c_4*p3.z+c_64+c_15+c_65+c_51+c_28-40*c_16+c_2*c_18+p1.y*p2.y*(c_20+c_19+c_17)+3*p1.y*p3.y*
        c_55+3*c_9*(p1.z+p2.z+5*p3.z))+p2.x*p3.x*(c_21+c_43+c_22+c_23+c_58+c_32+c_24-8*c_5*p2.z+c_25+c_62+c_33+c_26+c_48-8*c_5*
        p3.z+c_50+c_35+c_27+c_28+c_53+3*c_9*(p1.z+c_19+c_29)+p1.y*(4*p2.y*p1.z+4*p3.y*p1.z+6*p2.y*p2.z+4*p3.y*p2.z+4*p2.y*
        p3.z+6*p3.y*p3.z)+c_2*(c_8+2*c_30))+c_31*(c_56+c_10+c_4*p1.z+c_23+30*c_3*p2.z+c_32+c_45+c_46+c_61-40*c_13+c_33+c_47+c_34-4*
        c_5*p3.z+c_15+c_35-4*p1.z*c_7+c_52+c_36+c_2*c_38+3*p1.y*p2.y*c_41+p1.y*p3.y*c_42+3*c_9*(p1.z+3*c_30))+p1.x*(3*c_40*c_41+3*
        c_31*p3.x*c_42+p3.x*(6*p1.y*p2.y*p1.z+2*c_3*p1.z+c_43+c_44+c_57+c_12+4*p2.y*p3.y*p2.z+c_45+c_46-8*p1.z*c_6+c_14+2*
        c_3*p3.z+c_47+c_48+c_49+c_50-8*c_6*p3.z+c_51+c_52+c_53+4*p1.y*p2.y*c_30+3*c_2*c_54+4*p1.y*p3.y*c_18+3*c_9*c_55)+p2.x*
        (c_56+6*p1.y*p3.y*p1.z+c_43+2*c_4*p1.z+c_57+c_58+c_59+2*c_4*p2.z+c_60+c_61+c_62+c_63+4*p2.y*p3.y*p3.z+c_34+c_64+c_50+c_65-8*
        p1.z*c_7-8*p2.z*c_7+c_36+4*p1.y*p3.y*c_30+3*c_2*c_66+4*p1.y*p2.y*c_38+c_9*(6*p1.z+6*p2.z+9*p3.z)))))/double(3360);
}

double trig::c42() const{
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p11_4=p1.y*p11_3;
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p21_4=p2.y*p21_3;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p31_4=p3.y*p31_3;
    double p12_2=p1.z*p1.z;
    double p12_3=p1.z*p12_2;
    double p30_2=p3.x*p3.x;
    double p30_3=p3.x*p30_2;
    double p30_4=p3.x*p30_3;
    double p22_2=p2.z*p2.z;
    double p22_3=p2.z*p22_2;
    double p32_2=p3.z*p3.z;
    double p32_3=p3.z*p32_2;
    double p20_2=p2.x*p2.x;
    double p20_3=p2.x*p20_2;
    double p20_4=p2.x*p20_3;
    double p10_2=p1.x*p1.x;
    double p10_3=p1.x*p10_2;
    double p10_4=p1.x*p10_3;
    double c_0=p11_3;
    double c_1=p11_2;
    double c_2=p21_2;
    double c_3=p21_3;
    double c_4=p31_2;
    double c_5=p31_3;
    double c_6=p12_3;
    double c_7=p30_4;
    double c_8=p11_4;
    double c_9=p21_4;
    double c_10=p31_4;
    double c_11=p30_2;
    double c_12=p12_2;
    double c_13=p22_2;
    double c_14=p22_3;
    double c_15=p32_2;
    double c_16=p32_3;
    double c_17=4*p1.z;
    double c_18=2*p3.z;
    double c_19=2*p2.z;
    double c_20=3*p1.z;
    double c_21=p2.z+p3.z;
    double c_22=p20_2;
    double c_23=3*p2.z*c_15;
    double c_24=3*p2.z;
    double c_25=p20_3;
    double c_26=4*p2.z;
    double c_27=2*p1.z;
    double c_28=3*c_13*p3.z;
    double c_29=3*p3.z;
    double c_30=3*c_13;
    double c_31=-c_14;
    double c_32=4*p3.z;
    double c_33=2*p2.z*p3.z;
    double c_34=3*c_15;
    return ((p3.x*(-p1.y+p2.y)+p2.x*(p1.y-p3.y)+p1.x*(-p2.y+p3.y))*(c_7*p1.z-5*c_8*p1.z-4*c_0*p2.y*p1.z-3*c_1*c_2*
        p1.z-2*p1.y*c_3*p1.z-c_9*p1.z-4*c_0*p3.y*p1.z-3*c_1*p2.y*p3.y*p1.z-2*p1.y*c_2*p3.y*p1.z-c_3*p3.y*p1.z-3*c_1*c_4*p1.z-2*
        p1.y*p2.y*c_4*p1.z-c_2*c_4*p1.z-2*p1.y*c_5*p1.z-p2.y*c_5*p1.z-c_10*p1.z-c_11*c_6+10*c_1*c_6+4*p1.y*p2.y*c_6+c_2*
        c_6+4*p1.y*p3.y*c_6+p2.y*p3.y*c_6+c_4*c_6+c_7*p2.z-c_8*p2.z-2*c_0*p2.y*p2.z-3*c_1*c_2*p2.z-4*p1.y*c_3*p2.z-5*c_9*p2.z-c_0*
        p3.y*p2.z-2*c_1*p2.y*p3.y*p2.z-3*p1.y*c_2*p3.y*p2.z-4*c_3*p3.y*p2.z-c_1*c_4*p2.z-2*p1.y*p2.y*c_4*p2.z-3*c_2*
        c_4*p2.z-p1.y*c_5*p2.z-2*p2.y*c_5*p2.z-c_10*p2.z-c_11*c_12*p2.z+6*c_1*c_12*p2.z+6*p1.y*p2.y*c_12*p2.z+3*c_2*c_12*p2.z+3*
        p1.y*p3.y*c_12*p2.z+2*p2.y*p3.y*c_12*p2.z+c_4*c_12*p2.z-c_11*p1.z*c_13+3*c_1*p1.z*c_13+6*p1.y*p2.y*p1.z*c_13+6*
        c_2*p1.z*c_13+2*p1.y*p3.y*p1.z*c_13+3*p2.y*p3.y*p1.z*c_13+c_4*p1.z*c_13-c_11*c_14+c_1*c_14+4*p1.y*p2.y*c_14+10*c_2*
        c_14+p1.y*p3.y*c_14+4*p2.y*p3.y*c_14+c_4*c_14+5*c_7*p3.z-c_8*p3.z-c_0*p2.y*p3.z-c_1*c_2*p3.z-p1.y*c_3*p3.z-c_9*p3.z-2*
        c_0*p3.y*p3.z-2*c_1*p2.y*p3.y*p3.z-2*p1.y*c_2*p3.y*p3.z-2*c_3*p3.y*p3.z-3*c_1*c_4*p3.z-3*p1.y*p2.y*c_4*p3.z-3*c_2*
        c_4*p3.z-4*p1.y*c_5*p3.z-4*p2.y*c_5*p3.z-5*c_10*p3.z-3*c_11*c_12*p3.z+6*c_1*c_12*p3.z+3*p1.y*p2.y*c_12*p3.z+c_2*c_12*
        p3.z+6*p1.y*p3.y*c_12*p3.z+2*p2.y*p3.y*c_12*p3.z+3*c_4*c_12*p3.z-3*c_11*p1.z*p2.z*p3.z+3*c_1*p1.z*p2.z*p3.z+4*p1.y*
        p2.y*p1.z*p2.z*p3.z+3*c_2*p1.z*p2.z*p3.z+4*p1.y*p3.y*p1.z*p2.z*p3.z+4*p2.y*p3.y*p1.z*p2.z*p3.z+3*c_4*p1.z*
        p2.z*p3.z-3*c_11*c_13*p3.z+c_1*c_13*p3.z+3*p1.y*p2.y*c_13*p3.z+6*c_2*c_13*p3.z+2*p1.y*p3.y*c_13*p3.z+6*p2.y*p3.y*
        c_13*p3.z+3*c_4*c_13*p3.z-6*c_11*p1.z*c_15+3*c_1*p1.z*c_15+2*p1.y*p2.y*p1.z*c_15+c_2*p1.z*c_15+6*p1.y*p3.y*p1.z*c_15+3*
        p2.y*p3.y*p1.z*c_15+6*c_4*p1.z*c_15-6*c_11*p2.z*c_15+c_1*p2.z*c_15+2*p1.y*p2.y*p2.z*c_15+3*c_2*p2.z*c_15+3*p1.y*p3.y*
        p2.z*c_15+6*p2.y*p3.y*p2.z*c_15+6*c_4*p2.z*c_15-10*c_11*c_16+c_1*c_16+p1.y*p2.y*c_16+c_2*c_16+4*p1.y*p3.y*c_16+4*p2.y*
        p3.y*c_16+10*c_4*c_16+p10_4*(5*p1.z+p2.z+p3.z)+p20_4*(p1.z+5*p2.z+p3.z)+c_25*p3.x*(p1.z+c_26+c_18)+p10_3*(p2.x*
        (c_17+c_19+p3.z)+p3.x*(c_17+p2.z+c_18))+p2.x*p3.x*(-c_6-2*c_12*c_21+c_11*(p1.z+c_19+c_32)-p1.z*(c_30+4*p2.z*p3.z+c_34)-2*(2*
        c_14+c_28+c_23+2*c_16))+p10_2*(-10*c_6-6*c_12*p2.z-3*p1.z*c_13+c_31-6*c_12*p3.z-3*p1.z*p2.z*p3.z-c_13*p3.z-3*p1.z*
        c_15-p2.z*c_15-c_16+c_22*(c_20+c_24+p3.z)+c_11*(c_20+p2.z+c_29)+p2.x*p3.x*(c_20+2*c_21))-c_22*(c_6+10*c_14+6*c_13*p3.z+c_23+c_16+c_12*
        (c_24+p3.z)+p1.z*(6*c_13+3*p2.z*p3.z+c_15)-c_11*(p1.z+3*c_21))+p1.x*(c_25*(c_27+c_26+p3.z)+c_22*p3.x*
        (c_27+c_24+c_18)-p2.x*(4*c_6+4*c_14+c_28+2*p2.z*c_15+c_16+3*c_12*(c_19+p3.z)-c_11*(c_27+c_19+c_29)+2*p1.z*(c_30+c_33+c_15))+p3.x*(-4*
        c_6+c_31-2*c_13*p3.z-3*p2.z*c_15-4*c_16-3*c_12*(p2.z+c_18)+c_11*(c_27+p2.z+c_32)-2*p1.z*(c_13+c_33+c_34)))))/double(5040);
}

double trig::c43() const{
    double p21_2=p2.y*p2.y;
    double p31_2=p3.y*p3.y;
    double p30_2=p3.x*p3.x;
    double p11_2=p1.y*p1.y;
    double p20_2=p2.x*p2.x;
    double p20_3=p2.x*p20_2;
    double p20_4=p2.x*p20_3;
    double p10_2=p1.x*p1.x;
    double p10_3=p1.x*p10_2;
    double p10_4=p1.x*p10_3;
    double c_0=4*p1.z;
    double c_1=2*p3.z;
    double c_2=p21_2;
    double c_3=p31_2;
    double c_4=2*p2.z;
    double c_5=3*p3.z;
    double c_6=2*p1.z;
    double c_7=p30_2;
    double c_8=p11_2;
    double c_9=3*p2.y*p3.y*p1.z;
    double c_10=3*c_2*p2.z;
    double c_11=3*p1.z;
    double c_12=c_11+p2.z+c_5;
    double c_13=3*c_2*p1.z;
    double c_14=3*c_3*p1.z;
    double c_15=6*c_3*p2.z;
    double c_16=12*p2.y*p3.y*p3.z;
    double c_17=4*p3.z;
    double c_18=p2.z+p3.z;
    double c_19=2*c_18;
    double c_20=c_11+c_19;
    double c_21=p20_2;
    double c_22=12*p2.y*p3.y*p2.z;
    double c_23=6*c_2*p3.z;
    double c_24=3*c_3*p3.z;
    double c_25=3*p2.z;
    double c_26=c_11+c_25+p3.z;
    double c_27=4*p2.z;
    double c_28=p20_3;
    double c_29=c_6+c_27+p3.z;
    double c_30=c_6+c_25+c_1;
    double c_31=6*c_2*p1.z;
    double c_32=4*p2.y*p3.y*p1.z;
    double c_33=12*c_2*p2.z;
    double c_34=6*p2.y*p3.y*p2.z;
    double c_35=3*c_2*p3.z;
    double c_36=c_0+c_4+p3.z;
    double c_37=c_6+c_4+c_5;
    double c_38=6*c_3*p1.z;
    double c_39=3*c_3*p2.z;
    double c_40=6*p2.y*p3.y*p3.z;
    double c_41=12*c_3*p3.z;
    double c_42=c_0+p2.z+c_1;
    double c_43=c_6+p2.z+c_17;
    return ((p3.y*(-p1.z+p2.z)+p2.y*(p1.z-p3.z)+p1.y*(-p2.z+p3.z))*(-(p10_4*(5*p1.z+p2.z+p3.z))-p20_4*(p1.z+5*
        p2.z+p3.z)-c_28*p3.x*(p1.z+c_27+c_1)-p10_3*(p2.x*c_36+p3.x*c_42)+c_7*(c_2*p1.z+c_9+c_38+c_10+c_34+c_15+c_35+c_16+30*
        c_3*p3.z+c_8*c_12+p1.y*p2.y*c_37+3*p1.y*p3.y*c_43-c_7*(p1.z+p2.z+5*p3.z))+p10_2*(30*c_8*p1.z+12*p1.y*
        p2.y*p1.z+c_13+12*p1.y*p3.y*p1.z+c_9+c_14+6*c_8*p2.z+6*p1.y*p2.y*p2.z+c_10+3*p1.y*p3.y*p2.z+2*p2.y*p3.y*
        p2.z+c_3*p2.z+6*c_8*p3.z+3*p1.y*p2.y*p3.z+c_2*p3.z+6*p1.y*p3.y*p3.z+2*p2.y*p3.y*p3.z+c_24-c_21*c_26-c_7*
        c_12-p2.x*p3.x*c_20)+p2.x*p3.x*(c_13+c_32+c_14+c_33+c_22+c_15+c_23+c_16+c_41-c_7*(p1.z+c_4+c_17)+p1.y*(4*p2.y*
        p1.z+4*p3.y*p1.z+6*p2.y*p2.z+4*p3.y*p2.z+4*p2.y*p3.z+6*p3.y*p3.z)+c_8*c_20)+c_21*(c_31+c_9+c_3*p1.z+30*c_2*
        p2.z+c_22+c_39+c_23+c_40+c_24+c_8*c_26+3*p1.y*p2.y*c_29+p1.y*p3.y*c_30-c_7*(p1.z+3*c_18))+p1.x*(-(c_28*c_29)-c_21*
        p3.x*c_30+p2.x*(c_31+6*p1.y*p3.y*p1.z+c_32+2*c_3*p1.z+c_33+c_34+2*c_3*p2.z+c_35+4*p2.y*p3.y*p3.z+c_24+4*
        p1.y*p3.y*c_18+3*c_8*c_36+4*p1.y*p2.y*c_26-c_7*c_37)+p3.x*(6*p1.y*p2.y*p1.z+2*c_2*p1.z+c_32+c_38+c_10+4*
        p2.y*p3.y*p2.z+c_39+2*c_2*p3.z+c_40+c_41+4*p1.y*p2.y*c_18+3*c_8*c_42+4*p1.y*p3.y*c_12-c_7*c_43))))/double(20160);
}

double trig::c44() const{
    double p30_2=p3.x*p3.x;
    double p30_3=p3.x*p30_2;
    double p30_4=p3.x*p30_3;
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p11_4=p1.y*p11_3;
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p21_4=p2.y*p21_3;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p31_4=p3.y*p31_3;
    double p20_2=p2.x*p2.x;
    double p20_3=p2.x*p20_2;
    double p20_4=p2.x*p20_3;
    double p20_5=p2.x*p20_4;
    double p10_2=p1.x*p1.x;
    double p10_3=p1.x*p10_2;
    double p10_4=p1.x*p10_3;
    double p10_5=p1.x*p10_4;
    double c_0=p30_2;
    double c_1=p11_2;
    double c_2=p21_2;
    double c_3=p31_2;
    double c_4=-c_3;
    double c_5=p20_2;
    double c_6=-c_1;
    double c_7=2*p2.y*p3.y;
    double c_8=3*c_2;
    double c_9=p21_3;
    double c_10=p31_3;
    double c_11=p20_3;
    double c_12=2*p2.y;
    double c_13=c_12+p3.y;
    double c_14=-(6*c_1);
    double c_15=-c_2;
    double c_16=-(2*p2.y*p3.y);
    double c_17=2*p3.y;
    double c_18=p20_4;
    double c_19=p30_4;
    double c_20=p11_4;
    double c_21=p11_3;
    double c_22=p21_4;
    double c_23=p31_4;
    double c_24=-(3*c_2);
    double c_25=-(4*p2.y*p3.y);
    double c_26=-(3*c_3);
    double c_27=-(3*c_1);
    double c_28=3*p2.y;
    double c_29=6*c_3;
    double c_30=3*c_2*c_3;
    double c_31=p2.y+c_17;
    return ((p10_5+p20_5+c_18*p3.x+p10_4*(p2.x+p3.x)+p10_3*(c_5+p2.x*p3.x+c_0-10*c_1-4*p1.y*p2.y+c_15-4*p1.y*p3.y-p2.y*
        p3.y+c_4)+c_11*(c_0+c_6-10*c_2+c_25+c_4-p1.y*(4*p2.y+p3.y))+c_5*p3.x*(c_0+c_6-p1.y*(c_28+c_17)-3*(2*
        c_2+c_7+c_3))+p2.x*(c_19+c_20+5*c_22+4*c_9*p3.y+c_30+2*p2.y*c_10+c_23+c_21*c_13+c_1*(c_8+c_7+c_3)-c_0*(c_1+2*p1.y*p2.y+c_8+3*
        p1.y*p3.y+6*p2.y*p3.y+c_29)+p1.y*(4*c_9+3*c_2*p3.y+2*p2.y*c_3+c_10))+p10_2*(c_11+c_5*p3.x+p2.x*(c_0+c_14+c_24+c_16+c_4-3*
        p1.y*c_13)+p3.x*(c_0+c_14+c_15+c_16+c_26-3*p1.y*c_31))+p1.x*(c_18+c_11*p3.x+c_19+5*c_20+4*c_21*p2.y+3*
        c_1*c_2+2*p1.y*c_9+c_22+4*c_21*p3.y+3*c_1*p2.y*p3.y+2*p1.y*c_2*p3.y+c_9*p3.y+3*c_1*c_3+2*p1.y*p2.y*c_3+c_2*
        c_3+2*p1.y*c_10+p2.y*c_10+c_23+p2.x*p3.x*(c_0+c_27+c_24+c_25+c_26-4*p1.y*(p2.y+p3.y))+c_5*(c_0+c_27-6*c_2-3*p2.y*
        p3.y+c_4-2*p1.y*(c_28+p3.y))-c_0*(3*c_1+c_2+3*p2.y*p3.y+c_29+2*p1.y*(p2.y+3*p3.y)))+p3.x*(c_19+c_20+c_22+2*c_9*
        p3.y+c_30+4*p2.y*c_10+5*c_23+c_21*c_31+c_1*(c_2+c_7+3*c_3)+p1.y*(c_9+2*c_2*p3.y+3*p2.y*c_3+4*c_10)-c_0*(c_1+c_2+4*
        p2.y*p3.y+10*c_3+p1.y*(p2.y+4*p3.y))))*(p3.y*(p1.z-p2.z)+p1.y*(p2.z-p3.z)+p2.y*(-p1.z+p3.z)))/double(40320);
}

double trig::s41() const{
    double p30_2=p3.x*p3.x;
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p11_4=p1.y*p11_3;
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p21_4=p2.y*p21_3;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p31_4=p3.y*p31_3;
    double p12_2=p1.z*p1.z;
    double p12_3=p1.z*p12_2;
    double p22_2=p2.z*p2.z;
    double p22_3=p2.z*p22_2;
    double p32_2=p3.z*p3.z;
    double p32_3=p3.z*p32_2;
    double p10_2=p1.x*p1.x;
    double p20_2=p2.x*p2.x;
    double c_0=p30_2;
    double c_1=p11_2;
    double c_2=p21_2;
    double c_3=p11_3;
    double c_4=p21_3;
    double c_5=p31_2;
    double c_6=p31_3;
    double c_7=p12_3;
    double c_8=p11_4;
    double c_9=p21_4;
    double c_10=p31_4;
    double c_11=p12_2;
    double c_12=p22_2;
    double c_13=p22_3;
    double c_14=p32_2;
    double c_15=p32_3;
    double c_16=p2.z+p3.z;
    double c_17=3*p1.z;
    double c_18=2*c_16;
    double c_19=c_17+c_18;
    double c_20=2*p2.z;
    double c_21=4*p1.z;
    double c_22=2*p3.z;
    double c_23=3*p2.z;
    double c_24=c_17+c_23+p3.z;
    double c_25=4*p2.z;
    double c_26=p1.z+c_25+c_22;
    double c_27=3*c_16;
    double c_28=p1.z+c_27;
    double c_29=2*p1.z;
    double c_30=c_21+c_20+p3.z;
    double c_31=c_29+c_25+p3.z;
    double c_32=c_29+c_23+c_22;
    double c_33=3*p3.z;
    double c_34=c_21+p2.z+c_22;
    double c_35=c_17+p2.z+c_33;
    double c_36=c_29+c_20+c_33;
    double c_37=4*p3.z;
    return ((p3.x*(p1.z-p2.z)+p1.x*(p2.z-p3.z)+p2.x*(-p1.z+p3.z))*(3*c_0*c_1*p1.z+15*c_8*p1.z+2*c_0*p1.y*p2.y*p1.z+12*
        c_3*p2.y*p1.z+c_0*c_2*p1.z+9*c_1*c_2*p1.z+6*p1.y*c_4*p1.z+3*c_9*p1.z+6*c_0*p1.y*p3.y*p1.z+12*c_3*p3.y*p1.z+3*
        c_0*p2.y*p3.y*p1.z+9*c_1*p2.y*p3.y*p1.z+6*p1.y*c_2*p3.y*p1.z+3*c_4*p3.y*p1.z+6*c_0*c_5*p1.z+9*c_1*c_5*p1.z+6*
        p1.y*p2.y*c_5*p1.z+3*c_2*c_5*p1.z+6*p1.y*c_6*p1.z+3*p2.y*c_6*p1.z+3*c_10*p1.z-40*c_1*c_7-16*p1.y*p2.y*c_7-4*c_2*
        c_7-16*p1.y*p3.y*c_7-4*p2.y*p3.y*c_7-4*c_5*c_7+c_0*c_1*p2.z+3*c_8*p2.z+2*c_0*p1.y*p2.y*p2.z+6*c_3*p2.y*p2.z+3*c_0*
        c_2*p2.z+9*c_1*c_2*p2.z+12*p1.y*c_4*p2.z+15*c_9*p2.z+3*c_0*p1.y*p3.y*p2.z+3*c_3*p3.y*p2.z+6*c_0*p2.y*p3.y*p2.z+6*
        c_1*p2.y*p3.y*p2.z+9*p1.y*c_2*p3.y*p2.z+12*c_4*p3.y*p2.z+6*c_0*c_5*p2.z+3*c_1*c_5*p2.z+6*p1.y*p2.y*c_5*p2.z+9*
        c_2*c_5*p2.z+3*p1.y*c_6*p2.z+6*p2.y*c_6*p2.z+3*c_10*p2.z-24*c_1*c_11*p2.z-24*p1.y*p2.y*c_11*p2.z-12*c_2*c_11*p2.z-12*
        p1.y*p3.y*c_11*p2.z-8*p2.y*p3.y*c_11*p2.z-4*c_5*c_11*p2.z-12*c_1*p1.z*c_12-24*p1.y*p2.y*p1.z*c_12-24*c_2*p1.z*
        c_12-8*p1.y*p3.y*p1.z*c_12-12*p2.y*p3.y*p1.z*c_12-4*c_5*p1.z*c_12-4*c_1*c_13-16*p1.y*p2.y*c_13-40*c_2*c_13-4*p1.y*
        p3.y*c_13-16*p2.y*p3.y*c_13-4*c_5*c_13+3*c_0*c_1*p3.z+3*c_8*p3.z+3*c_0*p1.y*p2.y*p3.z+3*c_3*p2.y*p3.z+3*c_0*c_2*
        p3.z+3*c_1*c_2*p3.z+3*p1.y*c_4*p3.z+3*c_9*p3.z+12*c_0*p1.y*p3.y*p3.z+6*c_3*p3.y*p3.z+12*c_0*p2.y*p3.y*p3.z+6*c_1*
        p2.y*p3.y*p3.z+6*p1.y*c_2*p3.y*p3.z+6*c_4*p3.y*p3.z+30*c_0*c_5*p3.z+9*c_1*c_5*p3.z+9*p1.y*p2.y*c_5*p3.z+9*c_2*c_5*
        p3.z+12*p1.y*c_6*p3.z+12*p2.y*c_6*p3.z+15*c_10*p3.z-24*c_1*c_11*p3.z-12*p1.y*p2.y*c_11*p3.z-4*c_2*c_11*p3.z-24*
        p1.y*p3.y*c_11*p3.z-8*p2.y*p3.y*c_11*p3.z-12*c_5*c_11*p3.z-12*c_1*p1.z*p2.z*p3.z-16*p1.y*p2.y*p1.z*p2.z*p3.z-12*
        c_2*p1.z*p2.z*p3.z-16*p1.y*p3.y*p1.z*p2.z*p3.z-16*p2.y*p3.y*p1.z*p2.z*p3.z-12*c_5*p1.z*p2.z*p3.z-4*c_1*c_12*
        p3.z-12*p1.y*p2.y*c_12*p3.z-24*c_2*c_12*p3.z-8*p1.y*p3.y*c_12*p3.z-24*p2.y*p3.y*c_12*p3.z-12*c_5*c_12*p3.z-12*
        c_1*p1.z*c_14-8*p1.y*p2.y*p1.z*c_14-4*c_2*p1.z*c_14-24*p1.y*p3.y*p1.z*c_14-12*p2.y*p3.y*p1.z*c_14-24*c_5*p1.z*
        c_14-4*c_1*p2.z*c_14-8*p1.y*p2.y*p2.z*c_14-12*c_2*p2.z*c_14-12*p1.y*p3.y*p2.z*c_14-24*p2.y*p3.y*p2.z*c_14-24*c_5*
        p2.z*c_14-4*c_1*c_15-4*p1.y*p2.y*c_15-4*c_2*c_15-16*p1.y*p3.y*c_15-16*p2.y*p3.y*c_15-40*c_5*c_15+p2.x*p3.x*(3*c_2*c_26+3*
        c_5*(p1.z+c_20+c_37)+p1.y*(4*p2.y*p1.z+4*p3.y*p1.z+6*p2.y*p2.z+4*p3.y*p2.z+4*p2.y*p3.z+6*p3.y*p3.z)+c_1*c_19+4*
        p2.y*p3.y*c_28)+p10_2*(6*c_1*(5*p1.z+p2.z+p3.z)+c_2*c_24+c_5*c_35+p2.y*p3.y*c_19+3*p1.y*(p2.y*c_30+p3.y*c_34))+p20_2*
        (c_1*c_24+6*c_2*(p1.z+5*p2.z+p3.z)+3*p2.y*p3.y*c_26+c_5*c_28+p1.y*(3*p2.y*c_31+p3.y*c_32))+p1.x*(p2.x*(6*
        p1.y*p3.y*p1.z+4*p1.y*p3.y*c_16+3*c_1*c_30+4*p1.y*p2.y*c_24+3*c_2*c_31+2*p2.y*p3.y*c_32+c_5*c_36)+p3.x*(6*p1.y*p2.y*
        p1.z+4*p1.y*p2.y*c_16+3*c_1*c_34+c_2*c_32+4*p1.y*p3.y*c_35+2*p2.y*p3.y*c_36+3*c_5*(c_29+p2.z+c_37)))))/double(3360);
}

double trig::s42() const{
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p12_2=p1.z*p1.z;
    double p22_2=p2.z*p2.z;
    double p32_2=p3.z*p3.z;
    double p30_2=p3.x*p3.x;
    double p20_2=p2.x*p2.x;
    double p20_3=p2.x*p20_2;
    double p20_4=p2.x*p20_3;
    double p10_2=p1.x*p1.x;
    double p10_3=p1.x*p10_2;
    double p10_4=p1.x*p10_3;
    double c_0=4*p1.y;
    double c_1=2*p3.y;
    double c_2=p11_2;
    double c_3=p21_2;
    double c_4=p31_2;
    double c_5=3*p1.y;
    double c_6=p12_2;
    double c_7=p22_2;
    double c_8=p32_2;
    double c_9=p30_2;
    double c_10=p11_3;
    double c_11=p21_3;
    double c_12=p31_3;
    double c_13=3*p3.y;
    double c_14=-(6*p3.y*p1.z*p2.z);
    double c_15=-(6*p2.y*c_7);
    double c_16=-(6*p2.y*p1.z*p3.z);
    double c_17=p20_2;
    double c_18=3*p2.y;
    double c_19=p2.y+p3.y;
    double c_20=-(6*p3.y*c_8);
    double c_21=3*p2.y*p3.y;
    double c_22=6*c_3*p3.y;
    double c_23=6*p2.y*c_4;
    double c_24=2*p2.y;
    double c_25=6*c_7;
    double c_26=2*p1.z*p3.z;
    double c_27=3*c_6;
    double c_28=3*c_8;
    double c_29=p20_3;
    double c_30=4*p2.y;
    double c_31=2*p1.y;
    double c_32=4*c_11;
    double c_33=3*c_3*p3.y;
    double c_34=-(12*p2.y*c_6);
    double c_35=-(6*p3.y*c_6);
    double c_36=-(24*p2.y*p1.z*p2.z);
    double c_37=-(6*p3.y*c_7);
    double c_38=-(12*p2.y*p2.z*p3.z);
    double c_39=3*c_3;
    double c_40=6*p1.z*p2.z;
    double c_41=3*c_7;
    double c_42=2*p2.z*p3.z;
    double c_43=4*c_10;
    double c_44=3*p2.y*c_4;
    double c_45=4*p3.y;
    double c_46=-(6*p2.y*c_6);
    double c_47=-(12*p3.y*c_6);
    double c_48=-(8*p3.y*p1.z*p2.z);
    double c_49=-(8*p2.y*p1.z*p3.z);
    double c_50=-(24*p3.y*p1.z*p3.z);
    double c_51=-(12*p3.y*p2.z*p3.z);
    double c_52=-(6*p2.y*c_8);
    double c_53=2*p2.y*p3.y;
    double c_54=3*c_4;
    double c_55=6*c_6;
    double c_56=3*p1.z*p2.z;
    return ((p3.y*(-p1.z+p2.z)+p2.y*(p1.z-p3.z)+p1.y*(-p2.z+p3.z))*(p10_4*(5*p1.y+p2.y+p3.y)+p20_4*(p1.y+5*
        p2.y+p3.y)+c_29*p3.x*(p1.y+c_30+c_1)+p10_3*(p2.x*(c_0+c_24+p3.y)+p3.x*(c_0+p2.y+c_1))+p10_2*(10*c_10+6*c_2*p2.y+3*p1.y*
        c_3+c_11+6*c_2*p3.y+3*p1.y*p2.y*p3.y+c_3*p3.y+3*p1.y*c_4+p2.y*c_4+c_12+c_17*(c_5+c_18+p3.y)+c_9*(c_5+p2.y+c_13)+p2.x*
        p3.x*(c_5+2*c_19)-60*p1.y*c_6+c_34+c_47-24*p1.y*p1.z*p2.z-12*p2.y*p1.z*p2.z+c_14-6*p1.y*c_7+c_15-2*p3.y*c_7-24*p1.y*
        p1.z*p3.z+c_16-12*p3.y*p1.z*p3.z-6*p1.y*p2.z*p3.z-4*p2.y*p2.z*p3.z-4*p3.y*p2.z*p3.z-6*p1.y*c_8-2*p2.y*
        c_8+c_20)+c_9*(c_10+c_11+c_33+c_23+10*c_12+c_2*(p2.y+c_13)+c_9*(p1.y+p2.y+5*p3.y)-2*p2.y*c_6+c_35-4*p2.y*p1.z*
        p2.z+c_14+c_15+c_37+c_16+c_50+c_38-24*p3.y*p2.z*p3.z-12*p2.y*c_8-60*p3.y*c_8+p1.y*(c_3+c_21+6*c_4-6*c_6-4*p1.z*p2.z-2*c_7-12*p1.z*
        p3.z-6*p2.z*p3.z-12*c_8))+c_17*(c_10+10*c_11+c_22+c_44+c_12+c_2*(c_18+p3.y)+c_9*(p1.y+3*c_19)+c_46-2*p3.y*c_6+c_36+c_14-60*
        p2.y*c_7-12*p3.y*c_7+c_16-4*p3.y*p1.z*p3.z-24*p2.y*p2.z*p3.z+c_51+c_52+c_20+p1.y*(6*c_3+c_21+c_4-2*
        (c_27+c_40+c_25+c_26+3*p2.z*p3.z+c_8)))+p2.x*p3.x*(c_10+c_32+c_22+c_23+2*c_2*c_19+c_9*(p1.y+c_24+c_45)-4*p2.y*(c_6+c_56+c_25+c_26+6*
        p2.z*p3.z+c_28)+4*p3.y*(c_4-c_6-p1.z*(2*p2.z+3*p3.z)-3*(c_7+c_42+2*c_8))+p1.y*(c_39+4*p2.y*p3.y+c_54-2*(c_27+c_41+4*
        p2.z*p3.z+c_28+4*p1.z*(p2.z+p3.z))))+p1.x*(c_29*(c_31+c_30+p3.y)+c_17*p3.x*(c_31+c_18+c_1)+p2.x*(c_43+c_32+c_33+2*
        p2.y*c_4+c_12+3*c_2*(c_24+p3.y)+c_9*(c_31+c_24+c_13)+c_34+c_35+c_36+c_48-24*p2.y*c_7+c_37+c_49-8*p3.y*p1.z*p3.z+c_38-8*
        p3.y*p2.z*p3.z-4*p2.y*c_8+c_20+2*p1.y*(c_39+c_53+c_4-2*(c_55+c_40+c_41+3*p1.z*p3.z+c_42+c_8)))+p3.x*(c_43+c_11+2*
        c_3*p3.y+c_44+4*c_12+3*c_2*(p2.y+c_1)+c_9*(c_31+p2.y+c_45)+c_46+c_47-8*p2.y*p1.z*p2.z+c_48+c_15-4*p3.y*c_7+c_49+c_50-8*
        p2.y*p2.z*p3.z+c_51+c_52-24*p3.y*c_8+2*p1.y*(c_3+c_53+c_54-2*(c_55+c_56+c_7+6*p1.z*p3.z+c_42+c_28))))))/double(10080);
}

double trig::s43() const{
    double p30_2=p3.x*p3.x;
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p11_4=p1.y*p11_3;
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p21_4=p2.y*p21_3;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p31_4=p3.y*p31_3;
    double p10_2=p1.x*p1.x;
    double p20_2=p2.x*p2.x;
    double c_0=p30_2;
    double c_1=p11_2;
    double c_2=p21_2;
    double c_3=p11_3;
    double c_4=p21_3;
    double c_5=p31_2;
    double c_6=p31_3;
    double c_7=p11_4;
    double c_8=p21_4;
    double c_9=p31_4;
    double c_10=p2.z+p3.z;
    double c_11=3*p1.z;
    double c_12=2*c_10;
    double c_13=c_11+c_12;
    double c_14=2*p2.z;
    double c_15=4*p1.z;
    double c_16=2*p3.z;
    double c_17=3*p2.z;
    double c_18=c_11+c_17+p3.z;
    double c_19=4*p2.z;
    double c_20=p1.z+c_19+c_16;
    double c_21=3*c_10;
    double c_22=p1.z+c_21;
    double c_23=2*p1.z;
    double c_24=c_15+c_14+p3.z;
    double c_25=c_23+c_19+p3.z;
    double c_26=c_23+c_17+c_16;
    double c_27=3*p3.z;
    double c_28=c_15+p2.z+c_16;
    double c_29=c_11+p2.z+c_27;
    double c_30=c_23+c_14+c_27;
    double c_31=4*p3.z;
    return ((p3.x*(-p1.z+p2.z)+p2.x*(p1.z-p3.z)+p1.x*(-p2.z+p3.z))*(3*c_0*c_1*p1.z-5*c_7*p1.z+2*c_0*p1.y*p2.y*
        p1.z-4*c_3*p2.y*p1.z+c_0*c_2*p1.z-3*c_1*c_2*p1.z-2*p1.y*c_4*p1.z-c_8*p1.z+6*c_0*p1.y*p3.y*p1.z-4*c_3*p3.y*p1.z+3*
        c_0*p2.y*p3.y*p1.z-3*c_1*p2.y*p3.y*p1.z-2*p1.y*c_2*p3.y*p1.z-c_4*p3.y*p1.z+6*c_0*c_5*p1.z-3*c_1*c_5*p1.z-2*
        p1.y*p2.y*c_5*p1.z-c_2*c_5*p1.z-2*p1.y*c_6*p1.z-p2.y*c_6*p1.z-c_9*p1.z+c_0*c_1*p2.z-c_7*p2.z+2*c_0*p1.y*p2.y*
        p2.z-2*c_3*p2.y*p2.z+3*c_0*c_2*p2.z-3*c_1*c_2*p2.z-4*p1.y*c_4*p2.z-5*c_8*p2.z+3*c_0*p1.y*p3.y*p2.z-c_3*p3.y*p2.z+6*
        c_0*p2.y*p3.y*p2.z-2*c_1*p2.y*p3.y*p2.z-3*p1.y*c_2*p3.y*p2.z-4*c_4*p3.y*p2.z+6*c_0*c_5*p2.z-c_1*c_5*p2.z-2*
        p1.y*p2.y*c_5*p2.z-3*c_2*c_5*p2.z-p1.y*c_6*p2.z-2*p2.y*c_6*p2.z-c_9*p2.z+3*c_0*c_1*p3.z-c_7*p3.z+3*c_0*p1.y*p2.y*
        p3.z-c_3*p2.y*p3.z+3*c_0*c_2*p3.z-c_1*c_2*p3.z-p1.y*c_4*p3.z-c_8*p3.z+12*c_0*p1.y*p3.y*p3.z-2*c_3*p3.y*p3.z+12*
        c_0*p2.y*p3.y*p3.z-2*c_1*p2.y*p3.y*p3.z-2*p1.y*c_2*p3.y*p3.z-2*c_4*p3.y*p3.z+30*c_0*c_5*p3.z-3*c_1*c_5*
        p3.z-3*p1.y*p2.y*c_5*p3.z-3*c_2*c_5*p3.z-4*p1.y*c_6*p3.z-4*p2.y*c_6*p3.z-5*c_9*p3.z+p2.x*p3.x*(3*c_2*c_20+3*c_5*
        (p1.z+c_14+c_31)+p1.y*(4*p2.y*p1.z+4*p3.y*p1.z+6*p2.y*p2.z+4*p3.y*p2.z+4*p2.y*p3.z+6*p3.y*p3.z)+c_1*c_13+4*p2.y*
        p3.y*c_22)+p10_2*(6*c_1*(5*p1.z+p2.z+p3.z)+c_2*c_18+c_5*c_29+p2.y*p3.y*c_13+3*p1.y*(p2.y*c_24+p3.y*c_28))+p20_2*
        (c_1*c_18+6*c_2*(p1.z+5*p2.z+p3.z)+3*p2.y*p3.y*c_20+c_5*c_22+p1.y*(3*p2.y*c_25+p3.y*c_26))+p1.x*(p2.x*(6*p1.y*
        p3.y*p1.z+4*p1.y*p3.y*c_10+3*c_1*c_24+4*p1.y*p2.y*c_18+3*c_2*c_25+2*p2.y*p3.y*c_26+c_5*c_30)+p3.x*(6*p1.y*p2.y*
        p1.z+4*p1.y*p2.y*c_10+3*c_1*c_28+c_2*c_26+4*p1.y*p3.y*c_29+2*p2.y*p3.y*c_30+3*c_5*(c_23+p2.z+c_31)))))/double(20160);
}

double trig::s44() const{
    double p30_2=p3.x*p3.x;
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p20_2=p2.x*p2.x;
    double p20_3=p2.x*p20_2;
    double p20_4=p2.x*p20_3;
    double p10_2=p1.x*p1.x;
    double p10_3=p1.x*p10_2;
    double p10_4=p1.x*p10_3;
    double c_0=4*p1.y;
    double c_1=2*p3.y;
    double c_2=p30_2;
    double c_3=p21_2;
    double c_4=p31_2;
    double c_5=p11_3;
    double c_6=-c_5;
    double c_7=p11_2;
    double c_8=2*p2.y;
    double c_9=p21_3;
    double c_10=p31_3;
    double c_11=-c_9;
    double c_12=3*p1.y;
    double c_13=3*p3.y;
    double c_14=p2.y+p3.y;
    double c_15=p20_2;
    double c_16=3*p2.y*c_4;
    double c_17=3*p2.y;
    double c_18=3*p2.y*p3.y;
    double c_19=p20_3;
    double c_20=4*p2.y;
    double c_21=2*p1.y;
    double c_22=3*c_3*p3.y;
    double c_23=3*c_3;
    double c_24=4*p3.y;
    double c_25=2*p2.y*p3.y;
    double c_26=3*c_4;
    return ((p10_4*(5*p1.y+p2.y+p3.y)+p20_4*(p1.y+5*p2.y+p3.y)+c_19*p3.x*(p1.y+c_20+c_1)+p10_3*(p2.x*(c_0+c_8+p3.y)+p3.x*
        (c_0+p2.y+c_1))+c_2*(c_6+c_11-3*c_3*p3.y-6*p2.y*c_4-10*c_10-c_7*(p2.y+c_13)+c_2*(p1.y+p2.y+5*p3.y)-p1.y*(c_3+c_18+6*
        c_4))+p2.x*p3.x*(c_6-2*c_7*c_14+c_2*(p1.y+c_8+c_24)-p1.y*(c_23+4*p2.y*p3.y+c_26)-2*(2*c_9+c_22+c_16+2*c_10))+p10_2*(-10*
        c_5-6*c_7*p2.y-3*p1.y*c_3+c_11-6*c_7*p3.y-3*p1.y*p2.y*p3.y-c_3*p3.y-3*p1.y*c_4-p2.y*c_4-c_10+c_15*(c_12+c_17+p3.y)+c_2*
        (c_12+p2.y+c_13)+p2.x*p3.x*(c_12+2*c_14))-c_15*(c_5+10*c_9+6*c_3*p3.y+c_16+c_10+c_7*(c_17+p3.y)+p1.y*(6*c_3+c_18+c_4)-c_2*
        (p1.y+3*c_14))+p1.x*(c_19*(c_21+c_20+p3.y)+c_15*p3.x*(c_21+c_17+c_1)-p2.x*(4*c_5+4*c_9+c_22+2*p2.y*c_4+c_10+3*c_7*
        (c_8+p3.y)-c_2*(c_21+c_8+c_13)+2*p1.y*(c_23+c_25+c_4))+p3.x*(-4*c_5+c_11-2*c_3*p3.y-3*p2.y*c_4-4*c_10-3*c_7*(p2.y+c_1)+c_2*
        (c_21+p2.y+c_24)-2*p1.y*(c_3+c_25+c_26))))*(p3.y*(p1.z-p2.z)+p1.y*(p2.z-p3.z)+p2.y*(-p1.z+p3.z)))/double(40320);
}

double trig::j5() const{
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p11_4=p1.y*p11_3;
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p21_4=p2.y*p21_3;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p31_4=p3.y*p31_3;
    double p12_2=p1.z*p1.z;
    double p12_3=p1.z*p12_2;
    double p12_4=p1.z*p12_3;
    double p12_5=p1.z*p12_4;
    double p22_2=p2.z*p2.z;
    double p22_3=p2.z*p22_2;
    double p22_4=p2.z*p22_3;
    double p22_5=p2.z*p22_4;
    double p32_2=p3.z*p3.z;
    double p32_3=p3.z*p32_2;
    double p32_4=p3.z*p32_3;
    double p32_5=p3.z*p32_4;
    double p30_2=p3.x*p3.x;
    double p30_3=p3.x*p30_2;
    double p30_4=p3.x*p30_3;
    double p20_2=p2.x*p2.x;
    double p20_3=p2.x*p20_2;
    double p20_4=p2.x*p20_3;
    double p20_5=p2.x*p20_4;
    double p10_2=p1.x*p1.x;
    double p10_3=p1.x*p10_2;
    double p10_4=p1.x*p10_3;
    double p10_5=p1.x*p10_4;
    double c_0=5*p1.z;
    double c_1=2*p3.z;
    double c_2=p11_2;
    double c_3=p21_2;
    double c_4=p31_2;
    double c_5=p12_2;
    double c_6=p22_2;
    double c_7=p32_2;
    double c_8=4*p1.z;
    double c_9=4*p2.y*p3.y*p1.z;
    double c_10=p12_3;
    double c_11=p22_3;
    double c_12=3*c_4*p3.z;
    double c_13=-(16*p1.z*p2.z*p3.z);
    double c_14=p32_3;
    double c_15=-(4*c_14);
    double c_16=2*p2.z;
    double c_17=2*p1.z;
    double c_18=5*p2.z;
    double c_19=p30_2;
    double c_20=4*p2.z;
    double c_21=3*p3.z;
    double c_22=p20_2;
    double c_23=-(4*c_10);
    double c_24=p1.z+c_16+p3.z;
    double c_25=3*p1.z;
    double c_26=3*p2.z;
    double c_27=p20_3;
    double c_28=c_25+c_20+p3.z;
    double c_29=c_25+c_26+c_1;
    double c_30=6*p2.y*p3.y*p1.z;
    double c_31=3*c_4*p1.z;
    double c_32=-(24*p1.z*p2.z*p3.z);
    double c_33=-(12*p1.z*c_7);
    double c_34=c_0+c_16+p3.z;
    double c_35=6*p2.z;
    double c_36=c_17+p2.z+p3.z;
    double c_37=c_8+c_26+p3.z;
    double c_38=-(40*c_10);
    double c_39=3*c_3*p2.z;
    double c_40=-(4*c_11);
    double c_41=12*c_4*p3.z;
    double c_42=-(16*c_14);
    double c_43=c_0+p2.z+c_1;
    double c_44=4*p3.z;
    double c_45=c_8+p2.z+c_21;
    double c_46=p11_3;
    double c_47=p21_3;
    double c_48=p31_3;
    double c_49=p11_4;
    double c_50=p21_4;
    double c_51=p31_4;
    double c_52=p12_4;
    double c_53=p22_4;
    double c_54=p32_4;
    double c_55=p20_4;
    double c_56=c_17+c_18+p3.z;
    double c_57=3*c_3*p1.z;
    double c_58=6*p2.y*p3.y*p2.z;
    double c_59=3*c_4*p2.z;
    double c_60=-(12*c_5*p2.z);
    double c_61=-(12*p1.z*c_6);
    double c_62=3*c_3*p3.z;
    double c_63=6*p2.y*p3.y*p3.z;
    double c_64=-(12*c_6*p3.z);
    double c_65=-(12*p2.z*c_7);
    double c_66=30*c_3*p2.z;
    double c_67=-(40*c_11);
    double c_68=-(12*c_5*p3.z);
    double c_69=6*p1.z;
    double c_70=p2.z+p3.z;
    double c_71=p1.z+p2.z+c_1;
    double c_72=5*p3.z;
    double c_73=c_17+p2.z+c_72;
    double c_74=c_25+p2.z+c_44;
    double c_75=6*p2.y*c_48*p1.z;
    double c_76=p12_5;
    double c_77=-(24*p2.y*p3.y*c_5*p2.z);
    double c_78=p22_5;
    double c_79=15*c_51*p3.z;
    double c_80=-(12*c_3*c_5*p3.z);
    double c_81=-(24*c_4*p1.z*p2.z*p3.z);
    double c_82=24*c_5*c_6*p3.z;
    double c_83=-(24*p2.y*p3.y*p1.z*c_7);
    double c_84=-(40*c_4*c_14);
    double c_85=16*p1.z*p2.z*c_14;
    double c_86=p32_5;
    double c_87=8*c_86;
    double c_88=p30_4;
    double c_89=p3.y*c_36;
    double c_90=p2.y*c_37;
    double c_91=c_89+c_90;
    double c_92=9*p1.z;
    double c_93=9*p3.z;
    double c_94=c_92+c_35+c_93;
    double c_95=3*c_6*p3.z;
    double c_96=c_25+c_16+c_21;
    double c_97=p1.z+c_20+c_21;
    double c_98=p1.z+c_26+c_44;
    double c_99=p1.z+c_16+c_72;
    double c_100=4*c_11;
    double c_101=10*c_14;
    double c_102=2*p2.z*p3.z;
    double c_103=3*c_6;
    double c_104=9*c_70;
    double c_105=c_69+c_104;
    double c_106=4*c_10;
    double c_107=3*p2.z*c_7;
    double c_108=3*p2.z*p3.z;
    double c_109=6*c_47*p3.y*p1.z;
    double c_110=9*c_3*c_4*p1.z;
    double c_111=-(8*p2.y*p3.y*c_10);
    double c_112=8*c_76;
    double c_113=15*c_50*p2.z;
    double c_114=-(12*c_4*c_5*p2.z);
    double c_115=-(24*p2.y*p3.y*p1.z*c_6);
    double c_116=-(12*c_4*p1.z*c_6);
    double c_117=-(40*c_3*c_11);
    double c_118=8*c_78;
    double c_119=-(24*p2.y*p3.y*c_5*p3.z);
    double c_120=-(24*c_3*p1.z*p2.z*p3.z);
    double c_121=-(48*p2.y*p3.y*p1.z*p2.z*p3.z);
    double c_122=16*c_10*p2.z*p3.z;
    double c_123=16*p1.z*c_11*p3.z;
    double c_124=-(12*c_3*p1.z*c_7);
    double c_125=24*c_5*p2.z*c_7;
    double c_126=24*p1.z*c_6*c_7;
    double c_127=p2.y*c_36;
    double c_128=p3.y*c_45;
    double c_129=c_127+c_128;
    double c_130=6*p3.z;
    double c_131=10*c_10;
    double c_132=3*c_7;
    double c_133=p1.z+p2.z+c_130;
    double c_134=4*p2.z*p3.z;
    double c_135=6*p3.y*p1.z;
    double c_136=6*p2.z*c_7;
    double c_137=p2.z+c_21;
    double c_138=3*c_5*c_137;
    double c_139=6*c_7;
    double c_140=c_6+c_108+c_139;
    double c_141=2*p1.z*c_140;
    double c_142=c_106+c_11+c_95+c_136+c_101+c_138+c_141;
    double c_143=2*c_10;
    double c_144=2*c_11;
    double c_145=2*c_14;
    double c_146=3*c_5*c_70;
    double c_147=c_103+c_134+c_132;
    double c_148=p1.z*c_147;
    double c_149=c_143+c_144+c_95+c_107+c_145+c_146+c_148;
    return ((p3.y*(-p1.z+p2.z)+p2.y*(p1.z-p3.z)+p1.y*(-p2.z+p3.z))*(3*p10_5*(c_69+p2.z+p3.z)+3*p20_5*(p1.z+c_35+p3.z)+3*
        c_55*p3.x*(p1.z+c_18+c_1)+3*p10_4*(p2.x*c_34+p3.x*c_43)+p10_3*(60*c_2*p1.z+20*p1.y*p2.y*p1.z+4*c_3*p1.z+20*p1.y*
        p3.y*p1.z+c_9+4*c_4*p1.z-80*c_10+10*c_2*p2.z+8*p1.y*p2.y*p2.z+c_39+4*p1.y*p3.y*p2.z+2*p2.y*p3.y*p2.z+c_4*p2.z-40*
        c_5*p2.z-16*p1.z*c_6+c_40+10*c_2*p3.z+4*p1.y*p2.y*p3.z+c_3*p3.z+8*p1.y*p3.y*p3.z+2*p2.y*p3.y*p3.z+c_12-40*c_5*
        p3.z+c_13-4*c_6*p3.z-16*p1.z*c_7-4*p2.z*c_7+c_15+6*p2.x*p3.x*c_36+3*c_22*c_37+3*c_19*c_45)+c_27*(10*c_3*p1.z+c_9+c_4*p1.z+c_23+60*
        c_3*p2.z+20*p2.y*p3.y*p2.z+4*c_4*p2.z-16*c_5*p2.z-40*p1.z*c_6-80*c_11+10*c_3*p3.z+8*p2.y*p3.y*p3.z+c_12-4*c_5*
        p3.z+c_13-40*c_6*p3.z-4*p1.z*c_7-16*p2.z*c_7+c_15+2*p1.y*p3.y*c_24+c_2*c_28+4*p1.y*p2.y*c_56+3*c_19*c_97)+c_22*p3.x*(6*
        c_3*p1.z+4*p1.y*p3.y*p1.z+c_30+c_31+c_23+c_66+24*p2.y*p3.y*p2.z+9*c_4*p2.z+c_60-24*p1.z*c_6+c_67+12*c_3*p3.z+18*p2.y*
        p3.y*p3.z+c_41-8*c_5*p3.z+c_32-48*c_6*p3.z+c_33-36*p2.z*c_7+c_42+6*p1.y*p3.y*c_70+6*p1.y*p2.y*c_24+c_2*c_29+3*c_19*
        c_98)+p10_2*(3*c_27*c_28+3*c_22*p3.x*c_29+p2.x*(9*c_3*p1.z+c_30+c_31+c_38+12*c_3*p2.z+c_58+2*c_4*p2.z-48*c_5*p2.z-36*p1.z*
        c_6-16*c_11+c_62+4*p2.y*p3.y*p3.z+c_12-24*c_5*p3.z+c_32+c_64+c_33-8*p2.z*c_7+c_15+6*c_2*c_34+c_19*c_94+6*p1.y*c_91)+p3.x*
        (c_57+c_30+9*c_4*p1.z+c_38+c_39+4*p2.y*p3.y*p2.z+c_59-24*c_5*p2.z+c_61+c_40+2*c_3*p3.z+c_63+c_41-48*c_5*p3.z+c_32-8*
        c_6*p3.z-36*p1.z*c_7+c_65+c_42+6*c_2*c_43+3*c_19*c_74+6*p1.y*c_129))+p1.x*(90*c_49*p1.z+60*c_46*p2.y*p1.z+36*c_2*c_3*p1.z+18*
        p1.y*c_47*p1.z+6*c_50*p1.z+60*c_46*p3.y*p1.z+36*c_2*p2.y*p3.y*p1.z+18*p1.y*c_3*p3.y*p1.z+c_109+36*c_2*c_4*p1.z+18*
        p1.y*p2.y*c_4*p1.z+6*c_3*c_4*p1.z+18*p1.y*c_48*p1.z+c_75+6*c_51*p1.z-240*c_2*c_10-80*p1.y*p2.y*c_10-16*c_3*c_10-80*
        p1.y*p3.y*c_10-16*p2.y*p3.y*c_10-16*c_4*c_10+48*c_76+15*c_49*p2.z+24*c_46*p2.y*p2.z+27*c_2*c_3*p2.z+24*p1.y*c_47*
        p2.z+c_113+12*c_46*p3.y*p2.z+18*c_2*p2.y*p3.y*p2.z+18*p1.y*c_3*p3.y*p2.z+12*c_47*p3.y*p2.z+9*c_2*c_4*p2.z+12*p1.y*p2.y*
        c_4*p2.z+9*c_3*c_4*p2.z+6*p1.y*c_48*p2.z+6*p2.y*c_48*p2.z+3*c_51*p2.z-120*c_2*c_5*p2.z-96*p1.y*p2.y*c_5*p2.z-36*
        c_3*c_5*p2.z-48*p1.y*p3.y*c_5*p2.z+c_77+c_114+40*c_52*p2.z-48*c_2*p1.z*c_6-72*p1.y*p2.y*p1.z*c_6-48*c_3*p1.z*c_6-24*
        p1.y*p3.y*p1.z*c_6+c_115-8*c_4*p1.z*c_6+32*c_10*c_6-12*c_2*c_11-32*p1.y*p2.y*c_11+c_117-8*p1.y*p3.y*c_11-16*p2.y*p3.y*
        c_11-4*c_4*c_11+24*c_5*c_11+16*p1.z*c_53+c_118+15*c_49*p3.z+12*c_46*p2.y*p3.z+9*c_2*c_3*p3.z+6*p1.y*c_47*p3.z+3*c_50*
        p3.z+24*c_46*p3.y*p3.z+18*c_2*p2.y*p3.y*p3.z+12*p1.y*c_3*p3.y*p3.z+6*c_47*p3.y*p3.z+27*c_2*c_4*p3.z+18*p1.y*p2.y*c_4*
        p3.z+9*c_3*c_4*p3.z+24*p1.y*c_48*p3.z+12*p2.y*c_48*p3.z+c_79-120*c_2*c_5*p3.z-48*p1.y*p2.y*c_5*p3.z+c_80-96*p1.y*
        p3.y*c_5*p3.z+c_119-36*c_4*c_5*p3.z+40*c_52*p3.z-48*c_2*p1.z*p2.z*p3.z-48*p1.y*p2.y*p1.z*p2.z*p3.z+c_120-48*p1.y*p3.y*
        p1.z*p2.z*p3.z-32*p2.y*p3.y*p1.z*p2.z*p3.z+c_81+32*c_10*p2.z*p3.z-12*c_2*c_6*p3.z-24*p1.y*p2.y*c_6*p3.z-24*c_3*
        c_6*p3.z-16*p1.y*p3.y*c_6*p3.z-24*p2.y*p3.y*c_6*p3.z-12*c_4*c_6*p3.z+c_82+c_123+8*c_53*p3.z-48*c_2*p1.z*c_7-24*p1.y*
        p2.y*p1.z*c_7-8*c_3*p1.z*c_7-72*p1.y*p3.y*p1.z*c_7+c_83-48*c_4*p1.z*c_7+32*c_10*c_7-12*c_2*p2.z*c_7-16*p1.y*p2.y*
        p2.z*c_7-12*c_3*p2.z*c_7-24*p1.y*p3.y*p2.z*c_7-24*p2.y*p3.y*p2.z*c_7-24*c_4*p2.z*c_7+c_125+16*p1.z*c_6*c_7+8*c_11*c_7-12*
        c_2*c_14-8*p1.y*p2.y*c_14-4*c_3*c_14-32*p1.y*p3.y*c_14-16*p2.y*p3.y*c_14+c_84+24*c_5*c_14+c_85+8*c_6*c_14+16*p1.z*c_54+8*
        p2.z*c_54+c_87+6*c_27*p3.x*c_24+3*c_55*c_56+3*c_88*c_73+2*p2.x*p3.x*(c_57+c_9+c_31-8*c_10+6*c_3*p2.z+c_58+c_59+c_60+c_61-8*
        c_11+c_62+c_63+6*c_4*p3.z+c_68+c_13+c_64+c_33+c_65-8*c_14+3*c_2*c_36+3*c_19*c_71+p1.y*(6*p2.y*p1.z+c_135+6*p2.y*p2.z+4*
        p3.y*p2.z+4*p2.y*p3.z+6*p3.y*p3.z))+c_22*(12*c_3*p1.z+c_30+2*c_4*p1.z-16*c_10+c_66+12*p2.y*p3.y*p2.z+c_59-36*c_5*
        p2.z-48*p1.z*c_6+c_67+6*c_3*p3.z+c_63+c_12+c_68+c_32-24*c_6*p3.z-8*p1.z*c_7+c_65+c_15+3*c_2*c_37+6*p1.y*p2.y*c_28+2*p1.y*
        p3.y*c_29+c_19*c_105)+c_19*(6*p2.y*p3.y*c_71+3*c_2*c_45+6*c_4*c_73+c_3*(c_17+3*c_70)+2*p1.y*(p2.y*c_96+3*p3.y*c_74)-4*
        c_142))+p2.x*(15*c_50*p1.z+12*c_47*p3.y*p1.z+c_110+c_75+3*c_51*p1.z-12*c_3*c_10+c_111-4*c_4*c_10+c_112+90*c_50*p2.z+60*c_47*
        p3.y*p2.z+36*c_3*c_4*p2.z+18*p2.y*c_48*p2.z+6*c_51*p2.z-48*c_3*c_5*p2.z+c_77-8*c_4*c_5*p2.z+16*c_52*p2.z-120*c_3*p1.z*
        c_6-48*p2.y*p3.y*p1.z*c_6+c_116+24*c_10*c_6-240*c_3*c_11-80*p2.y*p3.y*c_11-16*c_4*c_11+32*c_5*c_11+40*p1.z*c_53+48*
        c_78+15*c_50*p3.z+24*c_47*p3.y*p3.z+27*c_3*c_4*p3.z+24*p2.y*c_48*p3.z+c_79+c_80-16*p2.y*p3.y*c_5*p3.z-12*c_4*c_5*p3.z+8*
        c_52*p3.z-48*c_3*p1.z*p2.z*p3.z+c_121+c_81+c_122-120*c_3*c_6*p3.z-96*p2.y*p3.y*c_6*p3.z-36*c_4*c_6*p3.z+c_82+32*p1.z*
        c_11*p3.z+40*c_53*p3.z+c_124+c_83-24*c_4*p1.z*c_7+8*c_10*c_7-48*c_3*p2.z*c_7-72*p2.y*p3.y*p2.z*c_7-48*c_4*p2.z*c_7+16*
        c_5*p2.z*c_7+c_126+32*c_11*c_7-12*c_3*c_14-32*p2.y*p3.y*c_14+c_84+8*c_5*c_14+c_85+24*c_6*c_14+8*p1.z*c_54+16*p2.z*c_54+c_87+3*
        c_49*c_34+3*c_88*c_99+6*c_46*c_91+c_2*(9*c_3*c_28+6*p2.y*p3.y*c_29+c_4*c_94-4*(c_131+c_100+c_95+2*p2.z*c_7+c_14+6*c_5*
        (c_16+p3.z)+3*p1.z*(c_103+c_102+c_7)))+c_19*(c_2*c_96+3*c_3*c_97+6*p2.y*p3.y*c_98+6*c_4*c_99+2*p1.y*(2*p2.y*p1.z+3*p2.y*
        c_70+3*p3.y*c_71)-4*(c_10+c_100+9*c_6*p3.z+12*p2.z*c_7+c_101+c_5*(c_16+c_21)+3*p1.z*(c_6+c_102+2*c_7)))+2*p1.y*(9*c_3*p3.y*
        c_24+6*c_47*c_56+3*c_48*c_71-4*p3.y*c_149+p2.y*(c_4*c_105-4*(c_106+10*c_11+6*c_6*p3.z+c_107+c_14+3*c_5*(c_26+p3.z)+2*p1.z*
        (6*c_6+c_108+c_7)))))+p3.x*(3*c_50*p1.z+c_109+c_110+12*p2.y*c_48*p1.z+15*c_51*p1.z-4*c_3*c_10+c_111-12*c_4*c_10+c_112+c_113+24*
        c_47*p3.y*p2.z+27*c_3*c_4*p2.z+24*p2.y*c_48*p2.z+15*c_51*p2.z-12*c_3*c_5*p2.z-16*p2.y*p3.y*c_5*p2.z+c_114+8*c_52*
        p2.z-24*c_3*p1.z*c_6+c_115+c_116+8*c_10*c_6+c_117-32*p2.y*p3.y*c_11-12*c_4*c_11+8*c_5*c_11+8*p1.z*c_53+c_118+6*c_50*
        p3.z+18*c_47*p3.y*p3.z+36*c_3*c_4*p3.z+60*p2.y*c_48*p3.z+90*c_51*p3.z-8*c_3*c_5*p3.z+c_119-48*c_4*c_5*p3.z+16*c_52*
        p3.z+c_120+c_121-48*c_4*p1.z*p2.z*p3.z+c_122-48*c_3*c_6*p3.z-72*p2.y*p3.y*c_6*p3.z-48*c_4*c_6*p3.z+16*c_5*c_6*p3.z+c_123+16*
        c_53*p3.z+c_124-48*p2.y*p3.y*p1.z*c_7-120*c_4*p1.z*c_7+24*c_10*c_7-36*c_3*p2.z*c_7-96*p2.y*p3.y*p2.z*c_7-120*c_4*p2.z*
        c_7+c_125+c_126+24*c_11*c_7-16*c_3*c_14-80*p2.y*p3.y*c_14-240*c_4*c_14+32*c_5*c_14+32*p1.z*p2.z*c_14+32*c_6*c_14+40*p1.z*
        c_54+40*p2.z*c_54+48*c_86+3*c_49*c_43+3*c_88*c_133+6*c_46*c_129+c_2*(6*p2.y*p3.y*c_96+9*c_4*c_74+c_3*(c_92+9*p2.z+c_130)-4*
        (c_131+c_11+2*c_6*p3.z+c_107+4*c_14+6*c_5*(p2.z+c_1)+3*p1.z*(c_6+c_102+c_132)))+c_19*(c_2*c_74+c_3*c_98+4*p2.y*p3.y*
        c_99+10*c_4*c_133+2*p1.y*(p2.y*c_71+2*p3.y*c_73)-4*(c_10+c_11+4*c_6*p3.z+10*p2.z*c_7+20*c_14+c_5*(p2.z+c_44)+p1.z*(c_6+c_134+10*
        c_7)))+2*p1.y*(3*c_47*c_24+6*c_48*c_73+c_3*(c_135+9*p3.y*c_70)-4*p3.y*c_142+p2.y*(9*c_4*c_71-4*c_149)))))/double(2688);
}

double trig::c51() const{
    double p30_2=p3.x*p3.x;
    double p30_3=p3.x*p30_2;
    double p30_4=p3.x*p30_3;
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p11_4=p1.y*p11_3;
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p21_4=p2.y*p21_3;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p31_4=p3.y*p31_3;
    double p12_2=p1.z*p1.z;
    double p12_3=p1.z*p12_2;
    double p12_4=p1.z*p12_3;
    double p22_2=p2.z*p2.z;
    double p22_3=p2.z*p22_2;
    double p22_4=p2.z*p22_3;
    double p32_2=p3.z*p3.z;
    double p32_3=p3.z*p32_2;
    double p32_4=p3.z*p32_3;
    double p20_2=p2.x*p2.x;
    double p20_3=p2.x*p20_2;
    double p20_4=p2.x*p20_3;
    double p20_5=p2.x*p20_4;
    double p20_6=p2.x*p20_5;
    double p10_2=p1.x*p1.x;
    double p10_3=p1.x*p10_2;
    double p10_4=p1.x*p10_3;
    double p10_5=p1.x*p10_4;
    double p10_6=p1.x*p10_5;
    double c_0=p30_2;
    double c_1=5*c_0;
    double c_2=p11_2;
    double c_3=p21_2;
    double c_4=p31_2;
    double c_5=p12_2;
    double c_6=-(6*c_5);
    double c_7=p22_2;
    double c_8=p32_2;
    double c_9=-(30*p1.z*p2.z);
    double c_10=-(6*c_8);
    double c_11=p20_3;
    double c_12=p20_2;
    double c_13=3*c_4;
    double c_14=-(24*p1.z*p2.z);
    double c_15=-(6*c_7);
    double c_16=-(18*c_8);
    double c_17=10*c_2;
    double c_18=2*p2.y*p3.y;
    double c_19=-(60*c_5);
    double c_20=-(12*p2.z*p3.z);
    double c_21=p20_4;
    double c_22=p11_3;
    double c_23=p21_3;
    double c_24=p31_3;
    double c_25=p12_3;
    double c_26=p22_3;
    double c_27=p32_3;
    double c_28=3*c_3;
    double c_29=-(18*c_7);
    double c_30=6*c_2;
    double c_31=-(36*c_5);
    double c_32=3*p2.y*p3.y;
    double c_33=p30_4;
    double c_34=5*c_33;
    double c_35=p11_4;
    double c_36=p21_4;
    double c_37=p31_4;
    double c_38=3*p3.y;
    double c_39=p2.y+c_38;
    double c_40=-(12*c_4*c_5);
    double c_41=p12_4;
    double c_42=-(12*p2.y*p3.y*p1.z*p2.z);
    double c_43=-(12*c_3*c_7);
    double c_44=p22_4;
    double c_45=8*c_44;
    double c_46=-(6*c_3*p1.z*p3.z);
    double c_47=24*p1.z*c_7*p3.z;
    double c_48=48*c_5*c_8;
    double c_49=p32_4;
    double c_50=5*p2.y*p3.y;
    double c_51=-(30*p1.z*p3.z);
    double c_52=-(30*p2.z*p3.z);
    double c_53=-c_7;
    double c_54=-(3*p2.z*p3.z);
    double c_55=-(6*p1.z*p3.z);
    double c_56=-(6*p2.z*p3.z);
    double c_57=p2.y+p3.y;
    double c_58=8*c_41;
    double c_59=-(12*c_4*p1.z*p2.z);
    double c_60=-(24*p2.y*p3.y*p1.z*p3.z);
    double c_61=48*p1.z*p2.z*c_8;
    double c_62=8*p2.y*p3.y;
    double c_63=-(3*c_5);
    double c_64=-(6*p1.z*p2.z);
    double c_65=-(12*p1.z*p3.z);
    double c_66=-(24*p2.z*p3.z);
    double c_67=4*p2.y*p3.y;
    double c_68=4*p2.z*p3.z;
    double c_69=3*c_3*p3.y;
    double c_70=3*c_5;
    double c_71=3*c_8;
    double c_72=3*p3.z;
    double c_73=6*c_3*c_4;
    double c_74=3*p2.y;
    double c_75=c_74+p3.y;
    double c_76=-(12*c_3*c_5);
    double c_77=-(6*p2.y*p3.y*c_5);
    double c_78=-(24*p2.y*p3.y*p1.z*p2.z);
    double c_79=-(6*c_4*p1.z*p2.z);
    double c_80=-(12*c_4*c_7);
    double c_81=48*c_5*c_7;
    double c_82=-(12*c_3*p1.z*p3.z);
    double c_83=-(12*p2.y*p3.y*p1.z*p3.z);
    double c_84=-(48*p2.y*p3.y*p2.z*p3.z);
    double c_85=24*c_5*p2.z*p3.z;
    double c_86=48*p1.z*c_7*p3.z;
    double c_87=-(12*c_3*c_8);
    double c_88=-(12*c_4*c_8);
    double c_89=24*p1.z*p2.z*c_8;
    double c_90=48*c_7*c_8;
    double c_91=8*c_49;
    double c_92=6*c_3;
    double c_93=6*c_5;
    double c_94=6*c_7;
    double c_95=6*p1.z*p2.z;
    double c_96=4*p1.z*p3.z;
    double c_97=6*p2.z*p3.z;
    double c_98=c_70+c_95+c_94+c_96+c_97+c_71;
    double c_99=p2.z+p3.z;
    double c_100=3*p2.z*p3.z;
    double c_101=2*c_8;
    double c_102=p20_5;
    double c_103=10*c_3;
    double c_104=-(48*p1.z*p2.z);
    double c_105=-(60*c_7);
    double c_106=3*c_2;
    double c_107=5*c_37;
    double c_108=2*p3.y;
    double c_109=p2.y+c_108;
    double c_110=-(6*c_3*c_5);
    double c_111=-(12*p2.y*p3.y*c_5);
    double c_112=24*c_5*c_7;
    double c_113=48*c_5*p2.z*p3.z;
    double c_114=-(60*c_4*c_8);
    double c_115=40*c_49;
    double c_116=4*p3.y;
    double c_117=5*c_4;
    double c_118=-(3*c_7);
    double c_119=-(24*p1.z*p3.z);
    double c_120=-(30*c_8);
    double c_121=2*p2.z*p3.z;
    double c_122=3*p2.y*c_4;
    double c_123=3*c_7;
    double c_124=6*p1.z*c_99;
    double c_125=c_93+c_123+c_68+c_71+c_124;
    double c_126=p2.z+c_72;
    double c_127=-(3*p1.z*c_126);
    double c_128=c_4+c_6+c_53+c_54+c_10+c_127;
    double c_129=5*c_35;
    double c_130=5*c_36;
    double c_131=3*c_3*c_4;
    double c_132=2*p2.y;
    double c_133=c_132+p3.y;
    double c_134=-(6*c_4*c_5);
    double c_135=40*c_41;
    double c_136=-(60*c_3*c_7);
    double c_137=-(6*c_4*c_7);
    double c_138=40*c_44;
    double c_139=-(24*p2.y*p3.y*p2.z*p3.z);
    double c_140=-(6*c_3*c_8);
    double c_141=24*c_5*c_8;
    double c_142=24*c_7*c_8;
    double c_143=10*c_5;
    double c_144=8*p1.z*p2.z;
    double c_145=9*p1.z*p2.z;
    double c_146=3*p1.z*p3.z;
    double c_147=c_93+c_145+c_94+c_146+c_100+c_8;
    double c_148=-(2*c_147);
    double c_149=6*p2.y*p3.y;
    double c_150=4*p2.y;
    double c_151=2*p2.z;
    double c_152=c_151+c_72;
    double c_153=-(2*p1.z*c_152);
    double c_154=c_7+c_121+c_101;
    double c_155=-(3*c_154);
    double c_156=c_4+c_63+c_153+c_155;
    return ((p3.y*(p1.z-p2.z)+p1.y*(p2.z-p3.z)+p2.y*(-p1.z+p3.z))*(5*p10_6+5*p20_6+5*c_102*p3.x+5*p10_5*(p2.x+p3.x)+c_11*
        p3.x*(c_1+c_2+c_103+c_62+c_13+2*p1.y*c_133+c_6+c_14+c_105+c_65-48*p2.z*p3.z+c_16)+c_21*(c_1+c_2+15*c_3+c_50+c_4+p1.y*(5*
        p2.y+p3.y)+c_6+c_9-90*c_7+c_55+c_52+c_10)+p10_4*(5*c_12+5*p2.x*p3.x+c_1+15*c_2+5*p1.y*p2.y+c_3+5*p1.y*p3.y+p2.y*
        p3.y+c_4-90*c_5+c_9+c_15+c_51+c_56+c_10)+p10_3*(5*c_11+5*c_12*p3.x+p3.x*(c_1+c_17+4*p1.y*p2.y+c_3+8*p1.y*p3.y+c_18+c_13+c_19+c_14+c_15-48*
        p1.z*p3.z+c_20+c_16)+p2.x*(c_1+c_17+8*p1.y*p2.y+c_28+4*p1.y*p3.y+c_18+c_4+c_19+c_104+c_29+c_119+c_20+c_10))+p10_2*
        (5*c_21+5*c_11*p3.x+c_34+15*c_35+10*c_22*p2.y+6*c_2*c_3+3*p1.y*c_23+c_36+10*c_22*p3.y+6*c_2*p2.y*p3.y+3*p1.y*c_3*
        p3.y+c_23*p3.y+6*c_2*c_4+3*p1.y*p2.y*c_4+c_3*c_4+3*p1.y*c_24+p2.y*c_24+c_37-180*c_2*c_5-60*p1.y*p2.y*c_5+c_76-60*p1.y*
        p3.y*c_5+c_111+c_40+120*c_41-60*c_2*p1.z*p2.z-48*p1.y*p2.y*p1.z*p2.z-18*c_3*p1.z*p2.z-24*p1.y*p3.y*p1.z*p2.z+c_42+c_79+80*
        c_25*p2.z-12*c_2*c_7-18*p1.y*p2.y*c_7+c_43-6*p1.y*p3.y*c_7-6*p2.y*p3.y*c_7-2*c_4*c_7+c_81+24*p1.z*c_26+c_45-60*
        c_2*p1.z*p3.z-24*p1.y*p2.y*p1.z*p3.z+c_46-48*p1.y*p3.y*p1.z*p3.z+c_83-18*c_4*p1.z*p3.z+80*c_25*p3.z-12*c_2*p2.z*
        p3.z-12*p1.y*p2.y*p2.z*p3.z-6*c_3*p2.z*p3.z-12*p1.y*p3.y*p2.z*p3.z-8*p2.y*p3.y*p2.z*p3.z-6*c_4*p2.z*p3.z+c_113+c_47+8*
        c_26*p3.z-12*c_2*c_8-6*p1.y*p2.y*c_8-2*c_3*c_8-18*p1.y*p3.y*c_8-6*p2.y*p3.y*c_8+c_88+c_48+c_89+8*c_7*c_8+24*p1.z*
        c_27+8*p2.z*c_27+c_91+p2.x*p3.x*(c_1+c_30+c_28+c_67+c_13+6*p1.y*c_57+c_31-36*p1.z*p2.z+c_29-36*p1.z*p3.z+c_66+c_16)+c_12*
        (c_1+c_30+c_92+c_32+c_4+3*p1.y*c_75+c_31-54*p1.z*p2.z-36*c_7-18*p1.z*p3.z-18*p2.z*p3.z+c_10)+c_0*(c_30+c_3+c_32+3*
        p1.y*c_39+6*c_128))+c_0*(c_34+c_35+c_36+3*c_23*p3.y+c_73+10*p2.y*c_24+15*c_37+c_22*c_39-2*c_3*c_5+c_77+c_40+c_58-6*c_3*p1.z*
        p2.z+c_42+c_59+8*c_25*p2.z+c_43-18*p2.y*p3.y*c_7+c_80+8*c_5*c_7+8*p1.z*c_26+c_45+c_46+c_60-60*c_4*p1.z*p3.z+24*c_25*p3.z-18*
        c_3*p2.z*p3.z+c_84-60*c_4*p2.z*p3.z+c_85+c_47+24*c_26*p3.z+c_87-60*p2.y*p3.y*c_8-180*c_4*c_8+c_48+c_61+c_90+80*p1.z*
        c_27+80*p2.z*c_27+120*c_49+c_0*(c_2+c_3+c_50+15*c_4+p1.y*(p2.y+5*p3.y)+c_6+c_64+c_15+c_51+c_52-90*c_8)+c_2*(c_3+c_32+2*
        (c_13+c_6-3*p1.z*p2.z+c_53-9*p1.z*p3.z+c_54+c_10))+p1.y*(c_23+c_69+10*c_24+2*p2.y*(c_13+c_63-4*p1.z*p2.z+c_118+c_55+c_56+c_10)-6*
        p3.y*(c_70+c_7+c_68+10*c_8+2*p1.z*(p2.z+4*p3.z))))+p2.x*p3.x*(c_34+c_35+c_130+8*c_23*p3.y+9*c_3*c_4+8*p2.y*
        c_24+c_107+2*c_22*c_57+c_110-8*p2.y*p3.y*c_5+c_134+c_58-24*c_3*p1.z*p2.z+c_78+c_59+16*c_25*p2.z+c_136-48*p2.y*p3.y*c_7-18*c_4*
        c_7+c_112+32*p1.z*c_26+c_138+c_82+c_60-24*c_4*p1.z*p3.z+16*c_25*p3.z-48*c_3*p2.z*p3.z-72*p2.y*p3.y*p2.z*p3.z-48*c_4*
        p2.z*p3.z+32*c_5*p2.z*p3.z+c_86+64*c_26*p3.z-18*c_3*c_8-48*p2.y*p3.y*c_8+c_114+c_141+c_61+72*c_7*c_8+32*p1.z*c_27+64*
        p2.z*c_27+c_115+c_0*(c_2+c_28+c_62+2*p1.y*c_109+2*(c_117+c_63+c_64-9*c_7+c_65+c_66+c_120))+c_2*(c_28+c_67+c_13-2*c_125)+2*p1.y*
        (2*c_23+c_69+c_122-2*p2.y*c_98+2*p3.y*c_156))+c_12*(c_34+c_35+15*c_36+10*c_23*p3.y+c_73+3*p2.y*c_24+c_37+c_22*c_75+c_76+c_77-2*
        c_4*c_5+c_58-60*c_3*p1.z*p2.z+c_78+c_79+24*c_25*p2.z-180*c_3*c_7-60*p2.y*p3.y*c_7+c_80+c_81+80*p1.z*c_26+120*
        c_44+c_82+c_83-6*c_4*p1.z*p3.z+8*c_25*p3.z-60*c_3*p2.z*p3.z+c_84-18*c_4*p2.z*p3.z+c_85+c_86+80*c_26*p3.z+c_87-18*p2.y*p3.y*
        c_8+c_88+8*c_5*c_8+c_89+c_90+8*p1.z*c_27+24*p2.z*c_27+c_91+c_2*(c_92+c_32+c_4+c_148)+p1.y*(10*c_23+6*c_3*p3.y+c_24-2*p3.y*
        c_98+3*p2.y*(c_4-2*(c_70+c_144+10*c_7+2*p1.z*p3.z+c_68+c_8)))+c_0*(c_2+c_92+9*p2.y*p3.y+3*p1.y*c_57+6*(c_4-c_5-3*p1.z*c_99-3*
        (2*c_7+c_100+c_101))))+p1.x*(5*c_102+5*c_21*p3.x+c_11*(c_1+c_106+c_103+c_67+c_4+2*p1.y*(c_150+p3.y)-18*
        c_5+c_104+c_105+c_65+c_66+c_10)+c_12*p3.x*(c_1+c_106+c_92+c_149+c_13+p1.y*(6*p2.y+c_116)-6*c_98)+p3.x*(c_34+c_129+c_36+2*c_23*p3.y+c_131+4*
        p2.y*c_24+c_107+4*c_22*c_109+c_110+c_111-18*c_4*c_5+c_135-12*c_3*p1.z*p2.z-16*p2.y*p3.y*p1.z*p2.z+c_59+32*c_25*p2.z+c_43-12*
        p2.y*p3.y*c_7+c_137+c_112+16*p1.z*c_26+c_45-8*c_3*p1.z*p3.z+c_60-48*c_4*p1.z*p3.z+64*c_25*p3.z-12*c_3*p2.z*
        p3.z+c_139-24*c_4*p2.z*p3.z+c_113+32*p1.z*c_7*p3.z+16*c_26*p3.z+c_140-24*p2.y*p3.y*c_8+c_114+72*c_5*c_8+c_61+c_142+64*p1.z*
        c_27+32*p2.z*c_27+c_115+c_0*(c_106+c_3+c_67+2*p1.y*(p2.y+c_116)+2*(c_117-9*c_5+c_64+c_118+c_119+c_20+c_120))+3*c_2*(c_3+c_18+c_13-2*
        (c_143+4*p1.z*p2.z+c_7+8*p1.z*p3.z+c_121+c_71))+2*p1.y*(c_23+2*c_3*p3.y+c_122-2*p2.y*c_125+4*p3.y*c_128))+p2.x*
        (c_34+c_129+c_130+4*c_23*p3.y+c_131+2*p2.y*c_24+c_37+4*c_22*c_133-18*c_3*c_5+c_111+c_134+c_135-48*c_3*p1.z*p2.z+c_78-8*c_4*
        p1.z*p2.z+64*c_25*p2.z+c_136-24*p2.y*p3.y*c_7+c_137+72*c_5*c_7+64*p1.z*c_26+c_138+c_82-16*p2.y*p3.y*p1.z*p3.z-12*c_4*
        p1.z*p3.z+32*c_25*p3.z-24*c_3*p2.z*p3.z+c_139-12*c_4*p2.z*p3.z+c_113+c_86+32*c_26*p3.z+c_140-12*p2.y*p3.y*c_8+c_88+c_141+32*
        p1.z*p2.z*c_8+c_142+16*p1.z*c_27+16*p2.z*c_27+c_91+3*c_2*(c_28+c_18+c_4-2*(c_143+c_144+c_123+c_96+c_121+c_8))+2*
        p1.y*(4*c_23+c_69+c_24-2*p3.y*c_125+2*p2.y*(c_4+c_148))+c_0*(c_106+c_28+c_149+p1.y*(c_150+6*p3.y)+6*c_156)))))/double(13440);
}

double trig::c52() const{
    double p12_2=p1.z*p1.z;
    double p12_3=p1.z*p12_2;
    double p12_4=p1.z*p12_3;
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p11_4=p1.y*p11_3;
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p21_4=p2.y*p21_3;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p31_4=p3.y*p31_3;
    double p30_2=p3.x*p3.x;
    double p30_3=p3.x*p30_2;
    double p30_4=p3.x*p30_3;
    double p22_2=p2.z*p2.z;
    double p22_3=p2.z*p22_2;
    double p22_4=p2.z*p22_3;
    double p32_2=p3.z*p3.z;
    double p32_3=p3.z*p32_2;
    double p32_4=p3.z*p32_3;
    double p20_2=p2.x*p2.x;
    double p20_3=p2.x*p20_2;
    double p20_4=p2.x*p20_3;
    double p10_2=p1.x*p1.x;
    double p10_3=p1.x*p10_2;
    double p10_4=p1.x*p10_3;
    double c_0=p12_2;
    double c_1=p11_3;
    double c_2=p11_2;
    double c_3=p21_2;
    double c_4=p21_3;
    double c_5=p31_2;
    double c_6=p31_3;
    double c_7=p12_4;
    double c_8=p30_4;
    double c_9=p11_4;
    double c_10=p21_4;
    double c_11=p31_4;
    double c_12=p30_2;
    double c_13=p12_3;
    double c_14=p22_2;
    double c_15=p22_3;
    double c_16=p22_4;
    double c_17=p32_2;
    double c_18=p32_3;
    double c_19=p32_4;
    double c_20=6*c_14;
    double c_21=p2.z+p3.z;
    double c_22=-c_19;
    double c_23=3*p2.z*p3.z;
    double c_24=6*c_17;
    double c_25=6*c_0;
    double c_26=3*c_17;
    double c_27=p20_2;
    double c_28=3*p2.z;
    double c_29=c_28+p3.z;
    double c_30=-c_7;
    double c_31=3*c_14;
    double c_32=4*p2.z*p3.z;
    double c_33=3*p2.z*c_17;
    double c_34=8*p2.z*p3.z;
    double c_35=2*p2.z;
    double c_36=c_35+p3.z;
    double c_37=10*c_0;
    double c_38=2*p2.z*p3.z;
    double c_39=2*p3.z;
    double c_40=p2.z+c_39;
    double c_41=p20_3;
    double c_42=3*c_0;
    double c_43=10*c_14;
    double c_44=-(5*c_16);
    double c_45=6*p2.z*p3.z;
    double c_46=3*c_14*p3.z;
    double c_47=-5*c_7;
    double c_48=-c_16;
    double c_49=-(3*c_14*c_17);
    double c_50=-(5*c_19);
    double c_51=10*c_17;
    return ((p3.x*(-p1.y+p2.y)+p2.x*(p1.y-p3.y)+p1.x*(-p2.y+p3.y))*(c_8*c_0-15*c_9*c_0-10*c_1*p2.y*c_0-6*c_2*c_3*c_0-3*
        p1.y*c_4*c_0-c_10*c_0-10*c_1*p3.y*c_0-6*c_2*p2.y*p3.y*c_0-3*p1.y*c_3*p3.y*c_0-c_4*p3.y*c_0-6*c_2*c_5*c_0-3*p1.y*p2.y*
        c_5*c_0-c_3*c_5*c_0-3*p1.y*c_6*c_0-p2.y*c_6*c_0-c_11*c_0-c_12*c_7+15*c_2*c_7+5*p1.y*p2.y*c_7+c_3*c_7+5*p1.y*p3.y*c_7+p2.y*
        p3.y*c_7+c_5*c_7+c_8*p1.z*p2.z-5*c_9*p1.z*p2.z-8*c_1*p2.y*p1.z*p2.z-9*c_2*c_3*p1.z*p2.z-8*p1.y*c_4*p1.z*p2.z-5*
        c_10*p1.z*p2.z-4*c_1*p3.y*p1.z*p2.z-6*c_2*p2.y*p3.y*p1.z*p2.z-6*p1.y*c_3*p3.y*p1.z*p2.z-4*c_4*p3.y*p1.z*p2.z-3*
        c_2*c_5*p1.z*p2.z-4*p1.y*p2.y*c_5*p1.z*p2.z-3*c_3*c_5*p1.z*p2.z-2*p1.y*c_6*p1.z*p2.z-2*p2.y*c_6*p1.z*p2.z-c_11*
        p1.z*p2.z-c_12*c_13*p2.z+10*c_2*c_13*p2.z+8*p1.y*p2.y*c_13*p2.z+3*c_3*c_13*p2.z+4*p1.y*p3.y*c_13*p2.z+2*p2.y*p3.y*c_13*
        p2.z+c_5*c_13*p2.z+c_8*c_14-c_9*c_14-3*c_1*p2.y*c_14-6*c_2*c_3*c_14-10*p1.y*c_4*c_14-15*c_10*c_14-c_1*p3.y*c_14-3*c_2*
        p2.y*p3.y*c_14-6*p1.y*c_3*p3.y*c_14-10*c_4*p3.y*c_14-c_2*c_5*c_14-3*p1.y*p2.y*c_5*c_14-6*c_3*c_5*c_14-p1.y*c_6*c_14-3*
        p2.y*c_6*c_14-c_11*c_14-c_12*c_0*c_14+6*c_2*c_0*c_14+9*p1.y*p2.y*c_0*c_14+6*c_3*c_0*c_14+3*p1.y*p3.y*c_0*c_14+3*p2.y*p3.y*
        c_0*c_14+c_5*c_0*c_14-c_12*p1.z*c_15+3*c_2*p1.z*c_15+8*p1.y*p2.y*p1.z*c_15+10*c_3*p1.z*c_15+2*p1.y*p3.y*p1.z*c_15+4*
        p2.y*p3.y*p1.z*c_15+c_5*p1.z*c_15-c_12*c_16+c_2*c_16+5*p1.y*p2.y*c_16+15*c_3*c_16+p1.y*p3.y*c_16+5*p2.y*p3.y*c_16+c_5*
        c_16+5*c_8*p1.z*p3.z-5*c_9*p1.z*p3.z-4*c_1*p2.y*p1.z*p3.z-3*c_2*c_3*p1.z*p3.z-2*p1.y*c_4*p1.z*p3.z-c_10*p1.z*p3.z-8*
        c_1*p3.y*p1.z*p3.z-6*c_2*p2.y*p3.y*p1.z*p3.z-4*p1.y*c_3*p3.y*p1.z*p3.z-2*c_4*p3.y*p1.z*p3.z-9*c_2*c_5*p1.z*
        p3.z-6*p1.y*p2.y*c_5*p1.z*p3.z-3*c_3*c_5*p1.z*p3.z-8*p1.y*c_6*p1.z*p3.z-4*p2.y*c_6*p1.z*p3.z-5*c_11*p1.z*p3.z-3*
        c_12*c_13*p3.z+10*c_2*c_13*p3.z+4*p1.y*p2.y*c_13*p3.z+c_3*c_13*p3.z+8*p1.y*p3.y*c_13*p3.z+2*p2.y*p3.y*c_13*p3.z+3*
        c_5*c_13*p3.z+5*c_8*p2.z*p3.z-c_9*p2.z*p3.z-2*c_1*p2.y*p2.z*p3.z-3*c_2*c_3*p2.z*p3.z-4*p1.y*c_4*p2.z*p3.z-5*c_10*
        p2.z*p3.z-2*c_1*p3.y*p2.z*p3.z-4*c_2*p2.y*p3.y*p2.z*p3.z-6*p1.y*c_3*p3.y*p2.z*p3.z-8*c_4*p3.y*p2.z*p3.z-3*c_2*
        c_5*p2.z*p3.z-6*p1.y*p2.y*c_5*p2.z*p3.z-9*c_3*c_5*p2.z*p3.z-4*p1.y*c_6*p2.z*p3.z-8*p2.y*c_6*p2.z*p3.z-5*c_11*p2.z*
        p3.z-3*c_12*c_0*p2.z*p3.z+6*c_2*c_0*p2.z*p3.z+6*p1.y*p2.y*c_0*p2.z*p3.z+3*c_3*c_0*p2.z*p3.z+6*p1.y*p3.y*c_0*p2.z*
        p3.z+4*p2.y*p3.y*c_0*p2.z*p3.z+3*c_5*c_0*p2.z*p3.z-3*c_12*p1.z*c_14*p3.z+3*c_2*p1.z*c_14*p3.z+6*p1.y*p2.y*p1.z*
        c_14*p3.z+6*c_3*p1.z*c_14*p3.z+4*p1.y*p3.y*p1.z*c_14*p3.z+6*p2.y*p3.y*p1.z*c_14*p3.z+3*c_5*p1.z*c_14*p3.z-3*c_12*
        c_15*p3.z+c_2*c_15*p3.z+4*p1.y*p2.y*c_15*p3.z+10*c_3*c_15*p3.z+2*p1.y*p3.y*c_15*p3.z+8*p2.y*p3.y*c_15*p3.z+3*c_5*c_15*
        p3.z+15*c_8*c_17-c_9*c_17-c_1*p2.y*c_17-c_2*c_3*c_17-p1.y*c_4*c_17-c_10*c_17-3*c_1*p3.y*c_17-3*c_2*p2.y*p3.y*c_17-3*
        p1.y*c_3*p3.y*c_17-3*c_4*p3.y*c_17-6*c_2*c_5*c_17-6*p1.y*p2.y*c_5*c_17-6*c_3*c_5*c_17-10*p1.y*c_6*c_17-10*p2.y*c_6*c_17-15*
        c_11*c_17-6*c_12*c_0*c_17+6*c_2*c_0*c_17+3*p1.y*p2.y*c_0*c_17+c_3*c_0*c_17+9*p1.y*p3.y*c_0*c_17+3*p2.y*p3.y*c_0*c_17+6*
        c_5*c_0*c_17-6*c_12*p1.z*p2.z*c_17+3*c_2*p1.z*p2.z*c_17+4*p1.y*p2.y*p1.z*p2.z*c_17+3*c_3*p1.z*p2.z*c_17+6*p1.y*p3.y*
        p1.z*p2.z*c_17+6*p2.y*p3.y*p1.z*p2.z*c_17+6*c_5*p1.z*p2.z*c_17-6*c_12*c_14*c_17+c_2*c_14*c_17+3*p1.y*p2.y*c_14*c_17+6*
        c_3*c_14*c_17+3*p1.y*p3.y*c_14*c_17+9*p2.y*p3.y*c_14*c_17+6*c_5*c_14*c_17-10*c_12*p1.z*c_18+3*c_2*p1.z*c_18+2*p1.y*
        p2.y*p1.z*c_18+c_3*p1.z*c_18+8*p1.y*p3.y*p1.z*c_18+4*p2.y*p3.y*p1.z*c_18+10*c_5*p1.z*c_18-10*c_12*p2.z*c_18+c_2*p2.z*
        c_18+2*p1.y*p2.y*p2.z*c_18+3*c_3*p2.z*c_18+4*p1.y*p3.y*p2.z*c_18+8*p2.y*p3.y*p2.z*c_18+10*c_5*p2.z*c_18-15*c_12*
        c_19+c_2*c_19+p1.y*p2.y*c_19+c_3*c_19+5*p1.y*p3.y*c_19+5*p2.y*p3.y*c_19+15*c_5*c_19+p10_4*(15*c_0+c_14+p2.z*p3.z+c_17+5*
        p1.z*c_21)+c_41*p3.x*(c_0+c_43+c_34+c_26+2*p1.z*c_36)+p20_4*(c_0+15*c_14+5*p2.z*p3.z+c_17+p1.z*(5*p2.z+p3.z))+c_27*(c_30-15*
        c_16-10*c_15*p3.z-6*c_14*c_17-3*p2.z*c_18+c_22-c_13*c_29-c_0*(c_20+c_23+c_17)-p1.z*(10*c_15+6*c_14*p3.z+c_33+c_18)+c_12*
        (c_0+c_20+9*p2.z*p3.z+c_24+3*p1.z*c_21))+p10_2*(-15*c_7-10*c_13*p2.z-6*c_0*c_14-3*p1.z*c_15+c_48-10*c_13*p3.z-6*c_0*p2.z*
        p3.z-3*p1.z*c_14*p3.z-c_15*p3.z-6*c_0*c_17-3*p1.z*p2.z*c_17-c_14*c_17-3*p1.z*c_18-p2.z*c_18+c_22+c_12*(c_25+3*p1.z*
        p2.z+c_14+9*p1.z*p3.z+c_23+c_24)+p2.x*p3.x*(c_25+c_31+c_32+c_26+6*p1.z*c_21)+c_27*(c_25+c_20+c_23+c_17+3*p1.z*c_29))+p2.x*
        p3.x*(c_30+c_44-8*c_15*p3.z-9*c_14*c_17-8*p2.z*c_18+c_50-2*c_13*c_21-c_0*(c_31+c_32+c_26)-2*p1.z*(2*c_15+c_46+c_33+2*
        c_18)+c_12*(c_0+c_31+c_34+c_51+2*p1.z*c_40))+p10_3*(p2.x*(c_37+c_31+c_38+c_17+4*p1.z*c_36)+p3.x*(c_37+c_14+c_38+c_26+4*p1.z*
        c_40))+p1.x*(c_27*p3.x*(c_42+6*p1.z*p2.z+c_20+4*p1.z*p3.z+c_45+c_26)+c_41*(c_42+c_43+c_32+c_17+2*p1.z*(4*p2.z+p3.z))+p2.x*
        (c_47+c_44-4*c_15*p3.z+c_49-2*p2.z*c_18+c_22-4*c_13*c_36-3*c_0*(c_31+c_38+c_17)+c_12*(c_42+4*p1.z*p2.z+c_31+6*p1.z*
        p3.z+c_45+c_24)-2*p1.z*(4*c_15+c_46+2*p2.z*c_17+c_18))+p3.x*(c_47+c_48-2*c_15*p3.z+c_49-4*p2.z*c_18+c_50-4*c_13*c_40-3*c_0*
        (c_14+c_38+c_26)-2*p1.z*(c_15+2*c_14*p3.z+c_33+4*c_18)+c_12*(c_42+c_14+c_32+c_51+2*p1.z*(p2.z+4*p3.z))))))/double(13440);
}

double trig::c53() const{
    double p30_2=p3.x*p3.x;
    double p30_3=p3.x*p30_2;
    double p30_4=p3.x*p30_3;
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p11_4=p1.y*p11_3;
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p21_4=p2.y*p21_3;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p31_4=p3.y*p31_3;
    double p12_2=p1.z*p1.z;
    double p22_2=p2.z*p2.z;
    double p32_2=p3.z*p3.z;
    double p20_2=p2.x*p2.x;
    double p20_3=p2.x*p20_2;
    double p20_4=p2.x*p20_3;
    double p20_5=p2.x*p20_4;
    double p20_6=p2.x*p20_5;
    double p10_2=p1.x*p1.x;
    double p10_3=p1.x*p10_2;
    double p10_4=p1.x*p10_3;
    double p10_5=p1.x*p10_4;
    double p10_6=p1.x*p10_5;
    double c_0=p30_2;
    double c_1=p11_2;
    double c_2=p21_2;
    double c_3=p31_2;
    double c_4=p12_2;
    double c_5=20*p1.z*p2.z;
    double c_6=p22_2;
    double c_7=p32_2;
    double c_8=4*c_7;
    double c_9=-5*c_0;
    double c_10=4*c_4;
    double c_11=p20_3;
    double c_12=p20_2;
    double c_13=10*c_1;
    double c_14=2*p2.y*p3.y;
    double c_15=3*c_3;
    double c_16=40*c_4;
    double c_17=16*p1.z*p2.z;
    double c_18=4*c_6;
    double c_19=8*p2.z*p3.z;
    double c_20=12*c_7;
    double c_21=p20_4;
    double c_22=p11_3;
    double c_23=p21_3;
    double c_24=p31_3;
    double c_25=6*c_1;
    double c_26=3*c_2;
    double c_27=24*c_4;
    double c_28=12*c_6;
    double c_29=3*p2.y*p3.y;
    double c_30=12*p2.z*p3.z;
    double c_31=p30_4;
    double c_32=p11_4;
    double c_33=p21_4;
    double c_34=p31_4;
    double c_35=p2.y+p3.y;
    double c_36=4*p1.z*p3.z;
    double c_37=3*c_4;
    double c_38=6*p2.z*p3.z;
    double c_39=8*p2.y*p3.y;
    double c_40=4*p1.z*p2.z;
    double c_41=6*c_6;
    double c_42=8*p1.z*p3.z;
    double c_43=16*p2.z*p3.z;
    double c_44=3*c_6;
    double c_45=4*p2.z*p3.z;
    double c_46=3*c_7;
    double c_47=5*c_31;
    double c_48=-(3*c_32);
    double c_49=3*p2.y;
    double c_50=c_49+p3.y;
    double c_51=48*p2.y*p3.y*p1.z*p2.z;
    double c_52=24*c_2*p1.z*p3.z;
    double c_53=6*c_2;
    double c_54=6*c_3;
    double c_55=12*p1.z*p2.z;
    double c_56=24*c_6;
    double c_57=12*p1.z*p3.z;
    double c_58=24*c_7;
    double c_59=6*c_4;
    double c_60=-(9*p2.y*c_3);
    double c_61=6*p1.z*p2.z;
    double c_62=c_37+c_61+c_41+c_36+c_38+c_46;
    double c_63=-(18*c_2*c_3);
    double c_64=3*p3.y;
    double c_65=p2.y+c_64;
    double c_66=12*p2.y*p3.y*c_4;
    double c_67=24*c_3*p1.z*p2.z;
    double c_68=24*c_3*c_6;
    double c_69=48*p2.y*p3.y*p1.z*p3.z;
    double c_70=96*p2.y*p3.y*p2.z*p3.z;
    double c_71=24*c_2*c_7;
    double c_72=5*p2.y*p3.y;
    double c_73=20*p1.z*p3.z;
    double c_74=20*p2.z*p3.z;
    double c_75=-(9*p2.y*p3.y);
    double c_76=3*p2.z*p3.z;
    double c_77=6*c_7;
    double c_78=-(9*c_2*p3.y);
    double c_79=20*c_7;
    double c_80=6*p1.z*p3.z;
    double c_81=c_37+c_40+c_44+c_80+c_38+c_77;
    double c_82=p20_5;
    double c_83=10*c_2;
    double c_84=4*p2.y*p3.y;
    double c_85=32*p1.z*p2.z;
    double c_86=40*c_6;
    double c_87=3*c_1;
    double c_88=4*p1.y*p3.y;
    double c_89=12*c_4;
    double c_90=24*p1.z*p2.z;
    double c_91=16*p1.z*p3.z;
    double c_92=-(3*c_33);
    double c_93=-(15*c_34);
    double c_94=2*p3.y;
    double c_95=p2.y+c_94;
    double c_96=12*c_2*c_4;
    double c_97=24*c_2*c_6;
    double c_98=120*c_3*c_7;
    double c_99=6*p2.y*p3.y;
    double c_100=5*c_3;
    double c_101=2*c_6;
    double c_102=-3*c_23;
    double c_103=p2.z+p3.z;
    double c_104=6*p1.z*c_103;
    double c_105=c_59+c_44+c_45+c_46+c_104;
    double c_106=-(15*c_32);
    double c_107=-(15*c_33);
    double c_108=-(9*c_2*c_3);
    double c_109=-(3*c_34);
    double c_110=2*p2.y;
    double c_111=c_110+p3.y;
    double c_112=24*p2.y*p3.y*c_4;
    double c_113=12*c_3*c_4;
    double c_114=120*c_2*c_6;
    double c_115=12*c_3*c_6;
    double c_116=48*p2.y*p3.y*p2.z*p3.z;
    double c_117=12*c_2*c_7;
    double c_118=24*c_3*c_7;
    double c_119=4*p1.y*p2.y;
    double c_120=24*p1.z*p3.z;
    double c_121=24*p2.z*p3.z;
    double c_122=10*c_4;
    double c_123=2*p2.z*p3.z;
    double c_124=-(3*c_24);
    double c_125=9*p1.z*p2.z;
    double c_126=3*p1.z*p3.z;
    double c_127=c_59+c_125+c_41+c_126+c_76+c_7;
    return ((p3.y*(p1.z-p2.z)+p1.y*(p2.z-p3.z)+p2.y*(-p1.z+p3.z))*(-5*p10_6-5*p20_6-5*c_82*p3.x-5*p10_5*(p2.x+p3.x)+p10_4*
        (-5*c_12-5*p2.x*p3.x-5*c_0+15*c_1+5*p1.y*p2.y+c_2+5*p1.y*p3.y+p2.y*p3.y+c_3+60*c_4+c_5+c_18+c_73+c_45+c_8)+c_21*
        (c_9+c_1+15*c_2+c_72+c_3+p1.y*(5*p2.y+p3.y)+c_10+c_5+60*c_6+c_36+c_74+c_8)+c_11*p3.x*(c_9+c_1+c_83+c_39+c_15+2*p1.y*
        c_111+c_10+c_17+c_86+c_42+32*p2.z*p3.z+c_20)+p10_3*(-5*c_11-5*c_12*p3.x+p2.x*(c_9+c_13+8*p1.y*p2.y+c_26+c_88+c_14+c_3+c_16+c_85+c_28+c_91+c_19+c_8)+p3.x*
        (c_9+c_13+c_119+c_2+8*p1.y*p3.y+c_14+c_15+c_16+c_17+c_18+32*p1.z*p3.z+c_19+c_20))+p10_2*(-5*
        c_21-5*c_11*p3.x-5*c_31+45*c_32+30*c_22*p2.y+18*c_1*c_2+9*p1.y*c_23+3*c_33+30*c_22*p3.y+18*c_1*p2.y*p3.y+9*p1.y*c_2*
        p3.y+3*c_23*p3.y+18*c_1*c_3+9*p1.y*p2.y*c_3+3*c_2*c_3+9*p1.y*c_24+3*p2.y*c_24+3*c_34-360*c_1*c_4-120*p1.y*p2.y*c_4-24*
        c_2*c_4-120*p1.y*p3.y*c_4-24*p2.y*p3.y*c_4-24*c_3*c_4-120*c_1*p1.z*p2.z-96*p1.y*p2.y*p1.z*p2.z-36*c_2*p1.z*p2.z-48*
        p1.y*p3.y*p1.z*p2.z-24*p2.y*p3.y*p1.z*p2.z-12*c_3*p1.z*p2.z-24*c_1*c_6-36*p1.y*p2.y*c_6-24*c_2*c_6-12*p1.y*p3.y*
        c_6-12*p2.y*p3.y*c_6-4*c_3*c_6-120*c_1*p1.z*p3.z-48*p1.y*p2.y*p1.z*p3.z-12*c_2*p1.z*p3.z-96*p1.y*p3.y*p1.z*p3.z-24*
        p2.y*p3.y*p1.z*p3.z-36*c_3*p1.z*p3.z-24*c_1*p2.z*p3.z-24*p1.y*p2.y*p2.z*p3.z-12*c_2*p2.z*p3.z-24*p1.y*p3.y*
        p2.z*p3.z-16*p2.y*p3.y*p2.z*p3.z-12*c_3*p2.z*p3.z-24*c_1*c_7-12*p1.y*p2.y*c_7-4*c_2*c_7-36*p1.y*p3.y*c_7-12*
        p2.y*p3.y*c_7-24*c_3*c_7+c_12*(c_9+c_25+c_53+c_29+c_3+3*p1.y*c_50+c_27+36*p1.z*p2.z+c_56+c_57+c_30+c_8)+p2.x*p3.x*
        (c_9+c_25+c_26+c_84+c_15+6*p1.y*c_35+c_27+c_90+c_28+c_120+c_43+c_20)+c_0*(c_25+c_2+c_29+c_54+3*p1.y*c_65+c_27+c_55+c_18+36*p1.z*
        p3.z+c_30+c_58))-p2.x*p3.x*(c_47+c_48+c_107-24*c_23*p3.y-27*c_2*c_3-24*p2.y*c_24+c_93-6*c_22*c_35+c_96+16*p2.y*p3.y*
        c_4+c_113+48*c_2*p1.z*p2.z+c_51+c_67+c_114+96*p2.y*p3.y*c_6+36*c_3*c_6+c_52+c_69+48*c_3*p1.z*p3.z+96*c_2*p2.z*p3.z+144*
        p2.y*p3.y*p2.z*p3.z+96*c_3*p2.z*p3.z+36*c_2*c_7+96*p2.y*p3.y*c_7+c_98+2*p1.y*(-6*c_23+c_78+c_60-6*c_24+4*p2.y*c_62+4*
        p3.y*c_81)-c_0*(c_1+c_26+c_39+2*p1.y*c_95+2*(c_100+2*c_4+c_40+c_41+c_42+c_43+c_79))+c_1*(-9*c_2-12*p2.y*p3.y-9*c_3+4*
        c_105))-c_12*(c_47+c_48-45*c_33-30*c_23*p3.y+c_63-9*p2.y*c_24+c_109-3*c_22*c_50+24*c_2*c_4+c_66+4*c_3*c_4+120*c_2*p1.z*p2.z+c_51+12*
        c_3*p1.z*p2.z+360*c_2*c_6+120*p2.y*p3.y*c_6+c_68+c_52+24*p2.y*p3.y*p1.z*p3.z+12*c_3*p1.z*p3.z+120*c_2*p2.z*
        p3.z+c_70+36*c_3*p2.z*p3.z+c_71+36*p2.y*p3.y*c_7+c_118-c_0*(c_1+c_53+9*p2.y*p3.y+c_54+3*p1.y*c_35+c_10+c_55+c_56+c_57+36*
        p2.z*p3.z+c_58)+c_1*(-18*c_2+c_75-3*c_3+4*c_127)+p1.y*(-30*c_23-18*c_2*p3.y+c_60+c_124+4*p3.y*c_62+12*p2.y*(c_37+10*
        c_6+c_45+c_7+2*p1.z*(4*p2.z+p3.z))))-c_0*(c_47+c_48+c_92-9*c_23*p3.y+c_63-30*p2.y*c_24-45*c_34-3*c_22*c_65+4*c_2*c_4+c_66+24*
        c_3*c_4+12*c_2*p1.z*p2.z+24*p2.y*p3.y*p1.z*p2.z+c_67+c_97+36*p2.y*p3.y*c_6+c_68+12*c_2*p1.z*p3.z+c_69+120*c_3*
        p1.z*p3.z+36*c_2*p2.z*p3.z+c_70+120*c_3*p2.z*p3.z+c_71+120*p2.y*p3.y*c_7+360*c_3*c_7-c_0*(c_1+c_2+c_72+15*c_3+p1.y*
        (p2.y+5*p3.y)+c_10+c_40+c_18+c_73+c_74+60*c_7)+c_1*(-3*c_2+c_75-18*c_3+4*(c_59+3*p1.z*p2.z+c_6+9*p1.z*p3.z+c_76+c_77))+p1.y*
        (c_102+c_78+6*p3.y*(-5*c_3+c_59+c_101+c_19+c_79+4*p1.z*(p2.z+4*p3.z))+2*p2.y*(-9*c_3+2*c_81)))+p1.x*(-5*c_82-5*c_21*
        p3.x+c_11*(c_9+c_87+c_83+c_84+c_3+2*p1.y*(4*p2.y+p3.y)+c_89+c_85+c_86+c_42+c_43+c_8)+c_12*p3.x*(c_9+c_87+6*p1.y*
        p2.y+c_53+c_88+c_99+c_15+c_89+c_90+c_56+c_91+c_121+c_20)-p3.x*(c_47+c_106+c_92-6*c_23*p3.y+c_108-12*p2.y*c_24+c_93-12*c_22*
        c_95+c_96+c_112+36*c_3*c_4+24*c_2*p1.z*p2.z+32*p2.y*p3.y*p1.z*p2.z+c_67+c_97+24*p2.y*p3.y*c_6+c_115+16*c_2*p1.z*p3.z+c_69+96*
        c_3*p1.z*p3.z+24*c_2*p2.z*p3.z+c_116+48*c_3*p2.z*p3.z+c_117+48*p2.y*p3.y*c_7+c_98-3*c_1*(c_26+c_99+9*c_3-4*
        (c_122+c_40+c_6+c_42+c_123+c_46))-c_0*(c_87+c_2+c_84+2*p1.y*(p2.y+4*p3.y)+2*(c_100+c_59+c_40+c_101+c_91+c_19+c_79))+2*p1.y*(c_102-6*
        c_2*p3.y+c_60-12*c_24+4*p2.y*c_105+8*p3.y*(c_59+c_6+c_76+c_77+3*p1.z*(p2.z+3*p3.z))))-p2.x*(c_47+c_106+c_107-12*c_23*
        p3.y+c_108-6*p2.y*c_24+c_109-12*c_22*c_111+36*c_2*c_4+c_112+c_113+96*c_2*p1.z*p2.z+c_51+16*c_3*p1.z*p2.z+c_114+48*p2.y*
        p3.y*c_6+c_115+c_52+32*p2.y*p3.y*p1.z*p3.z+24*c_3*p1.z*p3.z+48*c_2*p2.z*p3.z+c_116+24*c_3*p2.z*p3.z+c_117+24*
        p2.y*p3.y*c_7+c_118-c_0*(c_87+c_119+c_26+6*p1.y*p3.y+c_99+c_54+c_89+c_17+c_28+c_120+c_121+c_58)-3*c_1*(9*c_2+c_99+c_15-4*
        (c_122+8*p1.z*p2.z+c_44+c_36+c_123+c_7))+2*p1.y*(-12*c_23+c_78+c_124+4*p3.y*c_105+p2.y*(-6*c_3+8*c_127))))))/double(322560);
}

double trig::c54() const{
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p11_4=p1.y*p11_3;
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p21_4=p2.y*p21_3;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p31_4=p3.y*p31_3;
    double p30_2=p3.x*p3.x;
    double p30_3=p3.x*p30_2;
    double p30_4=p3.x*p30_3;
    double p20_2=p2.x*p2.x;
    double p20_3=p2.x*p20_2;
    double p20_4=p2.x*p20_3;
    double p20_5=p2.x*p20_4;
    double p10_2=p1.x*p1.x;
    double p10_3=p1.x*p10_2;
    double p10_4=p1.x*p10_3;
    double p10_5=p1.x*p10_4;
    double c_0=5*p1.z;
    double c_1=2*p3.z;
    double c_2=p11_2;
    double c_3=p21_2;
    double c_4=p31_2;
    double c_5=4*p1.z;
    double c_6=2*p2.z;
    double c_7=2*p1.z;
    double c_8=5*p2.z;
    double c_9=p30_2;
    double c_10=4*p2.z;
    double c_11=3*p3.z;
    double c_12=p20_2;
    double c_13=3*p1.z;
    double c_14=3*p2.z;
    double c_15=p1.z+c_6+p3.z;
    double c_16=p1.z+c_8+c_1;
    double c_17=p1.z+c_10+c_11;
    double c_18=4*p3.z;
    double c_19=p1.z+c_14+c_18;
    double c_20=p21_4;
    double c_21=p21_3;
    double c_22=p31_3;
    double c_23=p31_4;
    double c_24=c_0+p2.z+c_1;
    double c_25=c_7+p2.z+p3.z;
    double c_26=c_5+p2.z+c_11;
    double c_27=c_13+c_14+c_1;
    double c_28=c_13+p2.z+c_18;
    double c_29=5*p3.z;
    double c_30=6*p3.z;
    double c_31=p1.z+p2.z+c_30;
    double c_32=p1.z+p2.z+c_1;
    double c_33=c_7+p2.z+c_29;
    double c_34=p2.z+p3.z;
    double c_35=3*c_3*c_4*p1.z;
    double c_36=p11_4;
    double c_37=c_0+c_6+p3.z;
    double c_38=p30_4;
    double c_39=p1.z+c_6+c_29;
    double c_40=p11_3;
    double c_41=c_5+c_14+p3.z;
    double c_42=c_13+c_10+p3.z;
    double c_43=c_13+c_6+c_11;
    double c_44=c_7+c_8+p3.z;
    double c_45=3*c_34;
    double c_46=c_7+c_45;
    double c_47=p20_3;
    double c_48=3*c_4*p3.z;
    double c_49=p3.y*c_25;
    double c_50=p2.y*c_41;
    double c_51=c_49+c_50;
    double c_52=-(3*c_3*p2.z);
    double c_53=p2.y*c_25;
    double c_54=p3.y*c_26;
    double c_55=c_53+c_54;
    double c_56=2*c_21*p3.y*p1.z;
    double c_57=2*p2.y*c_22*p1.z;
    double c_58=5*c_20*p2.z;
    double c_59=5*c_23*p3.z;
    double c_60=p20_4;
    double c_61=-3*c_3*p1.z;
    double c_62=-(4*p2.y*p3.y*p1.z);
    double c_63=-(3*c_4*p2.z);
    double c_64=-(6*p2.y*p3.y*p3.z);
    double c_65=6*p2.y*p3.y*p1.z;
    return ((p3.y*(p1.z-p2.z)+p1.y*(p2.z-p3.z)+p2.y*(-p1.z+p3.z))*(p10_5*(6*p1.z+p2.z+p3.z)+p20_5*(p1.z+6*p2.z+p3.z)+c_60*
        p3.x*c_16+p10_4*(p2.x*c_37+p3.x*c_24)+p10_3*(-60*c_2*p1.z-20*p1.y*p2.y*p1.z-4*c_3*p1.z-20*p1.y*p3.y*p1.z+c_62-4*
        c_4*p1.z-10*c_2*p2.z-8*p1.y*p2.y*p2.z+c_52-4*p1.y*p3.y*p2.z-2*p2.y*p3.y*p2.z-c_4*p2.z-10*c_2*p3.z-4*p1.y*
        p2.y*p3.z-c_3*p3.z-8*p1.y*p3.y*p3.z-2*p2.y*p3.y*p3.z-3*c_4*p3.z+2*p2.x*p3.x*c_25+c_12*c_41+c_9*c_26)-c_47*(10*c_3*
        p1.z+4*p2.y*p3.y*p1.z+c_4*p1.z+60*c_3*p2.z+20*p2.y*p3.y*p2.z+4*c_4*p2.z+10*c_3*p3.z+8*p2.y*p3.y*p3.z+c_48+2*
        p1.y*p3.y*c_15+c_2*c_42+4*p1.y*p2.y*c_44-c_9*c_17)+c_12*p3.x*(-(c_2*c_27)+c_9*c_19-2*p1.y*(2*p3.y*p1.z+3*p3.y*c_34+3*
        p2.y*c_15)-3*(2*c_3*c_16+2*p2.y*p3.y*c_17+c_4*c_19))+p3.x*(c_20*p1.z+c_56+c_35+4*p2.y*c_22*p1.z+5*c_23*p1.z+c_58+8*c_21*
        p3.y*p2.z+9*c_3*c_4*p2.z+8*p2.y*c_22*p2.z+5*c_23*p2.z+2*c_20*p3.z+6*c_21*p3.y*p3.z+12*c_3*c_4*p3.z+20*p2.y*c_22*
        p3.z+30*c_23*p3.z+c_36*c_24+c_38*c_31+2*c_40*c_55+c_2*(c_3*c_27+2*p2.y*p3.y*c_43+3*c_4*c_28)-c_9*(2*p1.y*p2.y*c_32+c_2*
        c_28+c_3*c_19+4*p1.y*p3.y*c_33+4*p2.y*p3.y*c_39+10*c_4*c_31)+2*p1.y*(c_21*c_15+3*p2.y*c_4*c_32+2*c_22*c_33+c_3*p3.y*
        c_46))+p2.x*(5*c_20*p1.z+4*c_21*p3.y*p1.z+c_35+c_57+c_23*p1.z+30*c_20*p2.z+20*c_21*p3.y*p2.z+12*c_3*c_4*p2.z+6*p2.y*
        c_22*p2.z+2*c_23*p2.z+5*c_20*p3.z+8*c_21*p3.y*p3.z+9*c_3*c_4*p3.z+8*p2.y*c_22*p3.z+c_59+c_36*c_37+c_38*c_39+2*c_40*
        c_51+c_2*(3*c_3*c_42+2*p2.y*p3.y*c_27+c_4*c_43)-c_9*(4*p1.y*p2.y*p1.z+6*p1.y*p2.y*c_34+6*p1.y*p3.y*c_32+c_2*c_43+3*c_3*
        c_17+6*p2.y*p3.y*c_19+6*c_4*c_39)+2*p1.y*(3*c_3*p3.y*c_15+2*c_21*c_44+c_22*c_32+p2.y*c_4*c_46))+p10_2*(c_47*c_42+c_12*
        p3.x*c_27-p2.x*(9*c_3*p1.z+c_65+3*c_4*p1.z+12*c_3*p2.z+6*p2.y*p3.y*p2.z+2*c_4*p2.z+3*c_3*p3.z+4*p2.y*p3.y*p3.z+c_48+6*
        c_2*c_37-c_9*c_43+6*p1.y*c_51)+p3.x*(c_61-6*p2.y*p3.y*p1.z-9*c_4*p1.z+c_52-4*p2.y*p3.y*p2.z+c_63-2*c_3*p3.z+c_64-12*
        c_4*p3.z-6*c_2*c_24+c_9*c_28-6*p1.y*c_55))+p1.x*(30*c_36*p1.z+20*c_40*p2.y*p1.z+12*c_2*c_3*p1.z+6*p1.y*c_21*p1.z+2*
        c_20*p1.z+20*c_40*p3.y*p1.z+12*c_2*p2.y*p3.y*p1.z+6*p1.y*c_3*p3.y*p1.z+c_56+12*c_2*c_4*p1.z+6*p1.y*p2.y*c_4*
        p1.z+2*c_3*c_4*p1.z+6*p1.y*c_22*p1.z+c_57+2*c_23*p1.z+5*c_36*p2.z+8*c_40*p2.y*p2.z+9*c_2*c_3*p2.z+8*p1.y*c_21*p2.z+c_58+4*
        c_40*p3.y*p2.z+6*c_2*p2.y*p3.y*p2.z+6*p1.y*c_3*p3.y*p2.z+4*c_21*p3.y*p2.z+3*c_2*c_4*p2.z+4*p1.y*p2.y*c_4*
        p2.z+3*c_3*c_4*p2.z+2*p1.y*c_22*p2.z+2*p2.y*c_22*p2.z+c_23*p2.z+5*c_36*p3.z+4*c_40*p2.y*p3.z+3*c_2*c_3*p3.z+2*p1.y*
        c_21*p3.z+c_20*p3.z+8*c_40*p3.y*p3.z+6*c_2*p2.y*p3.y*p3.z+4*p1.y*c_3*p3.y*p3.z+2*c_21*p3.y*p3.z+9*c_2*c_4*p3.z+6*
        p1.y*p2.y*c_4*p3.z+3*c_3*c_4*p3.z+8*p1.y*c_22*p3.z+4*p2.y*c_22*p3.z+c_59+2*c_47*p3.x*c_15+c_60*c_44+c_38*c_33+2*
        p2.x*p3.x*(c_61+c_62-3*c_4*p1.z-6*c_3*p2.z-6*p2.y*p3.y*p2.z+c_63-3*c_3*p3.z+c_64-6*c_4*p3.z-3*c_2*c_25+c_9*c_32-2*p1.y*
        (3*p2.y*p1.z+3*p3.y*p1.z+3*p2.y*p2.z+2*p3.y*p2.z+2*p2.y*p3.z+3*p3.y*p3.z))-c_12*(12*c_3*p1.z+c_65+2*c_4*p1.z+30*
        c_3*p2.z+12*p2.y*p3.y*p2.z+3*c_4*p2.z+6*c_3*p3.z+6*p2.y*p3.y*p3.z+c_48+3*c_2*c_41+6*p1.y*p2.y*c_42+2*p1.y*p3.y*
        c_27-c_9*c_46)-c_9*(6*p2.y*p3.y*c_32+3*c_2*c_26+6*c_4*c_33+c_3*c_46+2*p1.y*(p2.y*c_43+3*p3.y*c_28)))))/double(322560);
}

double trig::c55() const{
    double p30_2=p3.x*p3.x;
    double p30_3=p3.x*p30_2;
    double p30_4=p3.x*p30_3;
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p11_4=p1.y*p11_3;
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p21_4=p2.y*p21_3;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p31_4=p3.y*p31_3;
    double p20_2=p2.x*p2.x;
    double p20_3=p2.x*p20_2;
    double p20_4=p2.x*p20_3;
    double p20_5=p2.x*p20_4;
    double p20_6=p2.x*p20_5;
    double p10_2=p1.x*p1.x;
    double p10_3=p1.x*p10_2;
    double p10_4=p1.x*p10_3;
    double p10_5=p1.x*p10_4;
    double p10_6=p1.x*p10_5;
    double c_0=p30_2;
    double c_1=p11_2;
    double c_2=p21_2;
    double c_3=p31_2;
    double c_4=-c_1;
    double c_5=-c_3;
    double c_6=p20_2;
    double c_7=p21_3;
    double c_8=p31_3;
    double c_9=6*c_2;
    double c_10=p20_3;
    double c_11=2*p2.y;
    double c_12=c_11+p3.y;
    double c_13=-(10*c_1);
    double c_14=-c_2;
    double c_15=-(2*p2.y*p3.y);
    double c_16=-(3*c_3);
    double c_17=p30_4;
    double c_18=p11_4;
    double c_19=p21_4;
    double c_20=p31_4;
    double c_21=p11_3;
    double c_22=p2.y+p3.y;
    double c_23=6*c_2*p3.y;
    double c_24=3*c_2;
    double c_25=2*p3.y;
    double c_26=p2.y+c_25;
    double c_27=p20_4;
    double c_28=-(3*c_2);
    double c_29=-(6*c_1);
    double c_30=3*p2.y;
    double c_31=c_30+p3.y;
    double c_32=3*p2.y*p3.y;
    double c_33=6*c_3;
    double c_34=6*c_2*c_3;
    double c_35=3*p3.y;
    double c_36=p2.y+c_35;
    double c_37=6*p2.y*c_3;
    double c_38=p20_5;
    double c_39=-(10*c_2);
    double c_40=-(4*p2.y*p3.y);
    double c_41=-(3*c_1);
    double c_42=5*c_19;
    double c_43=2*p2.y*p3.y;
    double c_44=4*c_7;
    double c_45=3*c_2*p3.y;
    double c_46=5*c_18;
    double c_47=3*c_2*c_3;
    double c_48=5*c_20;
    double c_49=3*c_3;
    double c_50=3*p2.y*c_3;
    double c_51=4*c_8;
    double c_52=3*c_1;
    double c_53=4*p2.y*p3.y;
    double c_54=10*c_3;
    return ((p10_6+p20_6+c_38*p3.x+p10_5*(p2.x+p3.x)+p10_4*(c_6+p2.x*p3.x+c_0-15*c_1-5*p1.y*p2.y+c_14-5*p1.y*p3.y-p2.y*
        p3.y+c_5)+c_10*p3.x*(c_0+c_4+c_39-8*p2.y*p3.y+c_16-2*p1.y*c_12)+c_27*(c_0+c_4-15*c_2-5*p2.y*p3.y+c_5-p1.y*(5*
        p2.y+p3.y))+c_6*(c_17+c_18+15*c_19+10*c_7*p3.y+c_34+3*p2.y*c_8+c_20+c_21*c_31+c_1*(c_9+c_32+c_3)+p1.y*(10*
        c_7+c_23+c_50+c_8)-c_0*(c_1+c_9+9*p2.y*p3.y+c_33+3*p1.y*c_22))+p10_3*(c_10+c_6*p3.x+p2.x*(c_0+c_13+c_28+c_15+c_5-4*p1.y*
        c_12)+p3.x*(c_0+c_13+c_14+c_15+c_16-4*p1.y*c_26))+p2.x*p3.x*(c_17+c_18+c_42+8*c_7*p3.y+9*c_2*c_3+8*p2.y*c_8+c_48+2*c_21*
        c_22+c_1*(c_24+c_53+c_49)+p1.y*(c_44+c_23+c_37+c_51)-c_0*(c_1+c_24+8*p2.y*p3.y+c_54+2*p1.y*c_26))+p10_2*(c_27+c_10*
        p3.x+c_17+15*c_18+10*c_21*p2.y+6*c_1*c_2+3*p1.y*c_7+c_19+10*c_21*p3.y+6*c_1*p2.y*p3.y+3*p1.y*c_2*p3.y+c_7*p3.y+6*
        c_1*c_3+3*p1.y*p2.y*c_3+c_2*c_3+3*p1.y*c_8+p2.y*c_8+c_20+p2.x*p3.x*(c_0+c_29+c_28+c_40+c_16-6*p1.y*c_22)+c_6*
        (c_0+c_29-6*c_2-3*p2.y*p3.y+c_5-3*p1.y*c_31)-c_0*(6*c_1+c_2+c_32+c_33+3*p1.y*c_36))+c_0*(c_17+c_18+c_19+3*c_7*p3.y+c_34+10*
        p2.y*c_8+15*c_20+c_21*c_36+c_1*(c_2+c_32+c_33)+p1.y*(c_7+c_45+c_37+10*c_8)-c_0*(c_1+c_2+5*p2.y*p3.y+15*c_3+p1.y*
        (p2.y+5*p3.y)))+p1.x*(c_38+c_27*p3.x+c_10*(c_0+c_41+c_39+c_40+c_5-2*p1.y*(4*p2.y+p3.y))+c_6*p3.x*(c_0+c_41-2*
        p1.y*(c_30+c_25)-3*(2*c_2+c_43+c_3))+p2.x*(c_17+c_46+c_42+4*c_7*p3.y+c_47+2*p2.y*c_8+c_20+4*c_21*c_12+3*c_1*(c_24+c_43+c_3)-c_0*
        (c_52+4*p1.y*p2.y+c_24+6*p1.y*p3.y+6*p2.y*p3.y+c_33)+2*p1.y*(c_44+c_45+2*p2.y*c_3+c_8))+p3.x*(c_17+c_46+c_19+2*
        c_7*p3.y+c_47+4*p2.y*c_8+c_48+4*c_21*c_26+3*c_1*(c_2+c_43+c_49)+2*p1.y*(c_7+2*c_2*p3.y+c_50+c_51)-c_0*
        (c_52+c_2+c_53+c_54+2*p1.y*(p2.y+4*p3.y)))))*(p3.y*(p1.z-p2.z)+p1.y*(p2.z-p3.z)+p2.y*(-p1.z+p3.z)))/double(645120);
}

double trig::s51() const{
    double p30_2=p3.x*p3.x;
    double p30_3=p3.x*p30_2;
    double p30_4=p3.x*p30_3;
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p11_4=p1.y*p11_3;
    double p11_5=p1.y*p11_4;
    double p11_6=p1.y*p11_5;
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p21_4=p2.y*p21_3;
    double p21_5=p2.y*p21_4;
    double p21_6=p2.y*p21_5;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p31_4=p3.y*p31_3;
    double p31_5=p3.y*p31_4;
    double p31_6=p3.y*p31_5;
    double p12_2=p1.z*p1.z;
    double p12_3=p1.z*p12_2;
    double p12_4=p1.z*p12_3;
    double p22_2=p2.z*p2.z;
    double p22_3=p2.z*p22_2;
    double p22_4=p2.z*p22_3;
    double p32_2=p3.z*p3.z;
    double p32_3=p3.z*p32_2;
    double p32_4=p3.z*p32_3;
    double p20_2=p2.x*p2.x;
    double p20_3=p2.x*p20_2;
    double p20_4=p2.x*p20_3;
    double p10_2=p1.x*p1.x;
    double p10_3=p1.x*p10_2;
    double p10_4=p1.x*p10_3;
    double c_0=p30_4;
    double c_1=p30_2;
    double c_2=p11_2;
    double c_3=p21_2;
    double c_4=p11_4;
    double c_5=p11_3;
    double c_6=p21_3;
    double c_7=p21_4;
    double c_8=p11_5;
    double c_9=p21_5;
    double c_10=p31_2;
    double c_11=p31_3;
    double c_12=p31_4;
    double c_13=p31_5;
    double c_14=2*p2.y;
    double c_15=c_14+p3.y;
    double c_16=10*c_2;
    double c_17=2*p2.y*p3.y;
    double c_18=3*c_10;
    double c_19=p12_2;
    double c_20=p12_4;
    double c_21=p12_3;
    double c_22=p22_2;
    double c_23=p22_3;
    double c_24=p22_4;
    double c_25=p32_2;
    double c_26=p32_3;
    double c_27=p32_4;
    double c_28=6*c_2;
    double c_29=3*c_3;
    double c_30=p2.y+p3.y;
    double c_31=3*p2.y*p3.y;
    double c_32=p20_2;
    double c_33=3*p2.y;
    double c_34=c_33+p3.y;
    double c_35=6*c_3;
    double c_36=6*c_10;
    double c_37=-(12*c_3*c_19);
    double c_38=-(6*c_10*p1.z*p2.z);
    double c_39=-(12*p2.y*p3.y*p1.z*p3.z);
    double c_40=-(12*c_10*c_25);
    double c_41=6*c_22;
    double c_42=3*c_19;
    double c_43=8*p2.y*p3.y;
    double c_44=2*p3.y;
    double c_45=p2.y+c_44;
    double c_46=-(24*p2.y*p3.y*p1.z*p2.z);
    double c_47=-(12*c_3*p1.z*p3.z);
    double c_48=4*p2.y*p3.y;
    double c_49=6*c_19;
    double c_50=4*p2.z*p3.z;
    double c_51=3*c_25;
    double c_52=6*p1.z*p2.z;
    double c_53=4*p1.z*p3.z;
    double c_54=6*p2.z*p3.z;
    double c_55=c_42+c_52+c_41+c_53+c_54+c_51;
    double c_56=p20_3;
    double c_57=3*c_2;
    double c_58=10*c_3;
    double c_59=5*c_12;
    double c_60=10*c_10;
    double c_61=-(6*c_3*c_19);
    double c_62=-(12*p2.y*p3.y*c_19);
    double c_63=-(12*c_10*p1.z*p2.z);
    double c_64=-(12*c_3*c_22);
    double c_65=-(24*p2.y*p3.y*p1.z*p3.z);
    double c_66=-(60*c_10*c_25);
    double c_67=2*p2.z*p3.z;
    double c_68=3*p2.y*c_10;
    double c_69=3*c_22;
    double c_70=p2.z+p3.z;
    double c_71=6*p1.z*c_70;
    double c_72=c_49+c_69+c_50+c_51+c_71;
    double c_73=3*p3.z;
    double c_74=5*c_4;
    double c_75=5*c_7;
    double c_76=3*c_3*c_10;
    double c_77=6*p2.y*p3.y;
    double c_78=-(6*c_10*c_19);
    double c_79=-(60*c_3*c_22);
    double c_80=-(6*c_10*c_22);
    double c_81=-(24*p2.y*p3.y*p2.z*p3.z);
    double c_82=-(6*c_3*c_25);
    double c_83=10*c_19;
    double c_84=8*p1.z*p2.z;
    double c_85=3*c_3*p3.y;
    double c_86=9*p1.z*p2.z;
    double c_87=3*p1.z*p3.z;
    double c_88=3*p2.z*p3.z;
    double c_89=c_49+c_86+c_41+c_87+c_88+c_25;
    double c_90=-(2*c_89);
    return ((p3.x*(-p1.z+p2.z)+p2.x*(p1.z-p3.z)+p1.x*(-p2.z+p3.z))*(c_0*c_2+c_1*c_4+5*p11_6+c_0*p1.y*p2.y+c_1*c_5*p2.y+5*
        c_8*p2.y+c_0*c_3+c_1*c_2*c_3+5*c_4*c_3+c_1*p1.y*c_6+5*c_5*c_6+c_1*c_7+5*c_2*c_7+5*p1.y*c_9+5*p21_6+5*c_0*p1.y*p3.y+3*
        c_1*c_5*p3.y+5*c_8*p3.y+5*c_0*p2.y*p3.y+3*c_1*c_2*p2.y*p3.y+5*c_4*p2.y*p3.y+3*c_1*p1.y*c_3*p3.y+5*c_5*c_3*p3.y+3*c_1*
        c_6*p3.y+5*c_2*c_6*p3.y+5*p1.y*c_7*p3.y+5*c_9*p3.y+15*c_0*c_10+6*c_1*c_2*c_10+5*c_4*c_10+6*c_1*p1.y*p2.y*c_10+5*c_5*p2.y*
        c_10+6*c_1*c_3*c_10+5*c_2*c_3*c_10+5*p1.y*c_6*c_10+5*c_7*c_10+10*c_1*p1.y*c_11+5*c_5*c_11+10*c_1*p2.y*c_11+5*c_2*p2.y*
        c_11+5*p1.y*c_3*c_11+5*c_6*c_11+15*c_1*c_12+5*c_2*c_12+5*p1.y*p2.y*c_12+5*c_3*c_12+5*p1.y*c_13+5*p2.y*c_13+5*p31_6+p10_4*(15*
        c_2+c_3+p2.y*p3.y+c_10+5*p1.y*c_30)+c_56*p3.x*(c_2+c_58+c_43+c_18+2*p1.y*c_15)+p20_4*(c_2+15*c_3+5*p2.y*p3.y+c_10+p1.y*
        (5*p2.y+p3.y))+p10_3*(p2.x*(c_16+c_29+c_17+c_10+4*p1.y*c_15)+p3.x*(c_16+c_3+c_17+c_18+4*p1.y*c_45))-12*c_1*c_2*c_19-90*
        c_4*c_19-6*c_1*p1.y*p2.y*c_19-60*c_5*p2.y*c_19-2*c_1*c_3*c_19-36*c_2*c_3*c_19-18*p1.y*c_6*c_19-6*c_7*c_19-18*c_1*p1.y*p3.y*
        c_19-60*c_5*p3.y*c_19-6*c_1*p2.y*p3.y*c_19-36*c_2*p2.y*p3.y*c_19-18*p1.y*c_3*p3.y*c_19-6*c_6*p3.y*c_19-12*c_1*c_10*
        c_19-36*c_2*c_10*c_19-18*p1.y*p2.y*c_10*c_19-6*c_3*c_10*c_19-18*p1.y*c_11*c_19-6*p2.y*c_11*c_19-6*c_12*c_19+120*c_2*c_20+40*
        p1.y*p2.y*c_20+8*c_3*c_20+40*p1.y*p3.y*c_20+8*p2.y*p3.y*c_20+8*c_10*c_20-6*c_1*c_2*p1.z*p2.z-30*c_4*p1.z*p2.z-8*c_1*
        p1.y*p2.y*p1.z*p2.z-48*c_5*p2.y*p1.z*p2.z-6*c_1*c_3*p1.z*p2.z-54*c_2*c_3*p1.z*p2.z-48*p1.y*c_6*p1.z*p2.z-30*c_7*
        p1.z*p2.z-12*c_1*p1.y*p3.y*p1.z*p2.z-24*c_5*p3.y*p1.z*p2.z-12*c_1*p2.y*p3.y*p1.z*p2.z-36*c_2*p2.y*p3.y*p1.z*p2.z-36*
        p1.y*c_3*p3.y*p1.z*p2.z-24*c_6*p3.y*p1.z*p2.z-12*c_1*c_10*p1.z*p2.z-18*c_2*c_10*p1.z*p2.z-24*p1.y*p2.y*c_10*
        p1.z*p2.z-18*c_3*c_10*p1.z*p2.z-12*p1.y*c_11*p1.z*p2.z-12*p2.y*c_11*p1.z*p2.z-6*c_12*p1.z*p2.z+80*c_2*c_21*p2.z+64*
        p1.y*p2.y*c_21*p2.z+24*c_3*c_21*p2.z+32*p1.y*p3.y*c_21*p2.z+16*p2.y*p3.y*c_21*p2.z+8*c_10*c_21*p2.z-2*c_1*c_2*c_22-6*
        c_4*c_22-6*c_1*p1.y*p2.y*c_22-18*c_5*p2.y*c_22-12*c_1*c_3*c_22-36*c_2*c_3*c_22-60*p1.y*c_6*c_22-90*c_7*c_22-6*c_1*p1.y*
        p3.y*c_22-6*c_5*p3.y*c_22-18*c_1*p2.y*p3.y*c_22-18*c_2*p2.y*p3.y*c_22-36*p1.y*c_3*p3.y*c_22-60*c_6*p3.y*c_22-12*c_1*c_10*
        c_22-6*c_2*c_10*c_22-18*p1.y*p2.y*c_10*c_22-36*c_3*c_10*c_22-6*p1.y*c_11*c_22-18*p2.y*c_11*c_22-6*c_12*c_22+48*c_2*c_19*
        c_22+72*p1.y*p2.y*c_19*c_22+48*c_3*c_19*c_22+24*p1.y*p3.y*c_19*c_22+24*p2.y*p3.y*c_19*c_22+8*c_10*c_19*c_22+24*c_2*p1.z*
        c_23+64*p1.y*p2.y*p1.z*c_23+80*c_3*p1.z*c_23+16*p1.y*p3.y*p1.z*c_23+32*p2.y*p3.y*p1.z*c_23+8*c_10*p1.z*c_23+8*c_2*
        c_24+40*p1.y*p2.y*c_24+120*c_3*c_24+8*p1.y*p3.y*c_24+40*p2.y*p3.y*c_24+8*c_10*c_24-18*c_1*c_2*p1.z*p3.z-30*c_4*p1.z*
        p3.z-12*c_1*p1.y*p2.y*p1.z*p3.z-24*c_5*p2.y*p1.z*p3.z-6*c_1*c_3*p1.z*p3.z-18*c_2*c_3*p1.z*p3.z-12*p1.y*c_6*p1.z*
        p3.z-6*c_7*p1.z*p3.z-48*c_1*p1.y*p3.y*p1.z*p3.z-48*c_5*p3.y*p1.z*p3.z-24*c_1*p2.y*p3.y*p1.z*p3.z-36*c_2*p2.y*p3.y*
        p1.z*p3.z-24*p1.y*c_3*p3.y*p1.z*p3.z-12*c_6*p3.y*p1.z*p3.z-60*c_1*c_10*p1.z*p3.z-54*c_2*c_10*p1.z*p3.z-36*p1.y*
        p2.y*c_10*p1.z*p3.z-18*c_3*c_10*p1.z*p3.z-48*p1.y*c_11*p1.z*p3.z-24*p2.y*c_11*p1.z*p3.z-30*c_12*p1.z*p3.z+80*c_2*c_21*
        p3.z+32*p1.y*p2.y*c_21*p3.z+8*c_3*c_21*p3.z+64*p1.y*p3.y*c_21*p3.z+16*p2.y*p3.y*c_21*p3.z+24*c_10*c_21*p3.z-6*
        c_1*c_2*p2.z*p3.z-6*c_4*p2.z*p3.z-12*c_1*p1.y*p2.y*p2.z*p3.z-12*c_5*p2.y*p2.z*p3.z-18*c_1*c_3*p2.z*p3.z-18*c_2*c_3*
        p2.z*p3.z-24*p1.y*c_6*p2.z*p3.z-30*c_7*p2.z*p3.z-24*c_1*p1.y*p3.y*p2.z*p3.z-12*c_5*p3.y*p2.z*p3.z-48*c_1*p2.y*
        p3.y*p2.z*p3.z-24*c_2*p2.y*p3.y*p2.z*p3.z-36*p1.y*c_3*p3.y*p2.z*p3.z-48*c_6*p3.y*p2.z*p3.z-60*c_1*c_10*p2.z*p3.z-18*
        c_2*c_10*p2.z*p3.z-36*p1.y*p2.y*c_10*p2.z*p3.z-54*c_3*c_10*p2.z*p3.z-24*p1.y*c_11*p2.z*p3.z-48*p2.y*c_11*p2.z*
        p3.z-30*c_12*p2.z*p3.z+48*c_2*c_19*p2.z*p3.z+48*p1.y*p2.y*c_19*p2.z*p3.z+24*c_3*c_19*p2.z*p3.z+48*p1.y*p3.y*c_19*
        p2.z*p3.z+32*p2.y*p3.y*c_19*p2.z*p3.z+24*c_10*c_19*p2.z*p3.z+24*c_2*p1.z*c_22*p3.z+48*p1.y*p2.y*p1.z*c_22*p3.z+48*
        c_3*p1.z*c_22*p3.z+32*p1.y*p3.y*p1.z*c_22*p3.z+48*p2.y*p3.y*p1.z*c_22*p3.z+24*c_10*p1.z*c_22*p3.z+8*c_2*c_23*p3.z+32*
        p1.y*p2.y*c_23*p3.z+80*c_3*c_23*p3.z+16*p1.y*p3.y*c_23*p3.z+64*p2.y*p3.y*c_23*p3.z+24*c_10*c_23*p3.z-12*c_1*c_2*
        c_25-6*c_4*c_25-12*c_1*p1.y*p2.y*c_25-6*c_5*p2.y*c_25-12*c_1*c_3*c_25-6*c_2*c_3*c_25-6*p1.y*c_6*c_25-6*c_7*c_25-60*c_1*p1.y*
        p3.y*c_25-18*c_5*p3.y*c_25-60*c_1*p2.y*p3.y*c_25-18*c_2*p2.y*p3.y*c_25-18*p1.y*c_3*p3.y*c_25-18*c_6*p3.y*c_25-180*
        c_1*c_10*c_25-36*c_2*c_10*c_25-36*p1.y*p2.y*c_10*c_25-36*c_3*c_10*c_25-60*p1.y*c_11*c_25-60*p2.y*c_11*c_25-90*c_12*c_25+48*
        c_2*c_19*c_25+24*p1.y*p2.y*c_19*c_25+8*c_3*c_19*c_25+72*p1.y*p3.y*c_19*c_25+24*p2.y*p3.y*c_19*c_25+48*c_10*c_19*c_25+24*
        c_2*p1.z*p2.z*c_25+32*p1.y*p2.y*p1.z*p2.z*c_25+24*c_3*p1.z*p2.z*c_25+48*p1.y*p3.y*p1.z*p2.z*c_25+48*p2.y*p3.y*p1.z*
        p2.z*c_25+48*c_10*p1.z*p2.z*c_25+8*c_2*c_22*c_25+24*p1.y*p2.y*c_22*c_25+48*c_3*c_22*c_25+24*p1.y*p3.y*c_22*c_25+72*
        p2.y*p3.y*c_22*c_25+48*c_10*c_22*c_25+24*c_2*p1.z*c_26+16*p1.y*p2.y*p1.z*c_26+8*c_3*p1.z*c_26+64*p1.y*p3.y*p1.z*c_26+32*
        p2.y*p3.y*p1.z*c_26+80*c_10*p1.z*c_26+8*c_2*p2.z*c_26+16*p1.y*p2.y*p2.z*c_26+24*c_3*p2.z*c_26+32*p1.y*p3.y*p2.z*
        c_26+64*p2.y*p3.y*p2.z*c_26+80*c_10*p2.z*c_26+8*c_2*c_27+8*p1.y*p2.y*c_27+8*c_3*c_27+40*p1.y*p3.y*c_27+40*p2.y*p3.y*
        c_27+120*c_10*c_27+p10_2*(15*c_4+10*c_5*p2.y+6*c_2*c_3+3*p1.y*c_6+c_7+10*c_5*p3.y+6*c_2*p2.y*p3.y+3*p1.y*c_3*p3.y+c_6*p3.y+6*
        c_2*c_10+3*p1.y*p2.y*c_10+c_3*c_10+3*p1.y*c_11+p2.y*c_11+c_12+c_1*(c_28+3*p1.y*p2.y+c_3+9*p1.y*p3.y+c_31+c_36)+p2.x*
        p3.x*(c_28+c_29+c_48+c_18+6*p1.y*c_30)+c_32*(c_28+c_35+c_31+c_10+3*p1.y*c_34)-180*c_2*c_19-60*p1.y*p2.y*c_19+c_37-60*
        p1.y*p3.y*c_19+c_62-12*c_10*c_19-60*c_2*p1.z*p2.z-48*p1.y*p2.y*p1.z*p2.z-18*c_3*p1.z*p2.z-24*p1.y*p3.y*p1.z*p2.z-12*
        p2.y*p3.y*p1.z*p2.z+c_38-12*c_2*c_22-18*p1.y*p2.y*c_22+c_64-6*p1.y*p3.y*c_22-6*p2.y*p3.y*c_22-2*c_10*c_22-60*c_2*
        p1.z*p3.z-24*p1.y*p2.y*p1.z*p3.z-6*c_3*p1.z*p3.z-48*p1.y*p3.y*p1.z*p3.z+c_39-18*c_10*p1.z*p3.z-12*c_2*p2.z*p3.z-12*
        p1.y*p2.y*p2.z*p3.z-6*c_3*p2.z*p3.z-12*p1.y*p3.y*p2.z*p3.z-8*p2.y*p3.y*p2.z*p3.z-6*c_10*p2.z*p3.z-12*c_2*c_25-6*
        p1.y*p2.y*c_25-2*c_3*c_25-18*p1.y*p3.y*c_25-6*p2.y*p3.y*c_25+c_40)+c_32*(c_4+15*c_7+10*c_6*p3.y+6*c_3*c_10+3*p2.y*
        c_11+c_12+c_5*c_34+c_1*(c_2+c_35+9*p2.y*p3.y+c_36+3*p1.y*c_30)+c_37-6*p2.y*p3.y*c_19-2*c_10*c_19-60*c_3*p1.z*p2.z+c_46+c_38-180*
        c_3*c_22-60*p2.y*p3.y*c_22-12*c_10*c_22+c_47+c_39-6*c_10*p1.z*p3.z-60*c_3*p2.z*p3.z-48*p2.y*p3.y*p2.z*p3.z-18*
        c_10*p2.z*p3.z-12*c_3*c_25-18*p2.y*p3.y*c_25+c_40+c_2*(c_35+c_31+c_10+c_90)+p1.y*(10*c_6+6*c_3*p3.y+c_11-2*p3.y*c_55+3*
        p2.y*(c_10-2*(c_42+c_84+10*c_22+2*p1.z*p3.z+c_50+c_25))))+p2.x*p3.x*(c_4+c_75+8*c_6*p3.y+9*c_3*c_10+8*p2.y*c_11+c_59+2*
        c_5*c_30+c_1*(c_2+c_29+c_43+c_60+2*p1.y*c_45)+c_61-8*p2.y*p3.y*c_19+c_78-24*c_3*p1.z*p2.z+c_46+c_63+c_79-48*p2.y*p3.y*
        c_22-18*c_10*c_22+c_47+c_65-24*c_10*p1.z*p3.z-48*c_3*p2.z*p3.z-72*p2.y*p3.y*p2.z*p3.z-48*c_10*p2.z*p3.z-18*c_3*c_25-48*
        p2.y*p3.y*c_25+c_66+c_2*(c_29+c_48+c_18-2*c_72)+2*p1.y*(2*c_6+c_85+c_68-2*p2.y*c_55+2*p3.y*(c_10-3*c_19-2*p1.z*(2*
        p2.z+c_73)-3*(c_22+c_67+2*c_25))))+p1.x*(c_32*p3.x*(c_57+6*p1.y*p2.y+c_35+4*p1.y*p3.y+c_77+c_18)+c_56*(c_57+c_58+c_48+c_10+2*
        p1.y*(4*p2.y+p3.y))+p3.x*(c_74+c_7+2*c_6*p3.y+c_76+4*p2.y*c_11+c_59+4*c_5*c_45+c_1*(c_57+c_3+c_48+c_60+2*p1.y*(p2.y+4*
        p3.y))+c_61+c_62-18*c_10*c_19-12*c_3*p1.z*p2.z-16*p2.y*p3.y*p1.z*p2.z+c_63+c_64-12*p2.y*p3.y*c_22+c_80-8*c_3*p1.z*
        p3.z+c_65-48*c_10*p1.z*p3.z-12*c_3*p2.z*p3.z+c_81-24*c_10*p2.z*p3.z+c_82-24*p2.y*p3.y*c_25+c_66+3*c_2*(c_3+c_17+c_18-2*
        (c_83+4*p1.z*p2.z+c_22+8*p1.z*p3.z+c_67+c_51))+2*p1.y*(c_6+2*c_3*p3.y+c_68-2*p2.y*c_72+4*p3.y*(c_10-6*c_19-c_22-3*p2.z*
        p3.z-6*c_25-3*p1.z*(p2.z+c_73))))+p2.x*(c_74+c_75+4*c_6*p3.y+c_76+2*p2.y*c_11+c_12+4*c_5*c_15+c_1*(c_57+4*p1.y*p2.y+c_29+6*
        p1.y*p3.y+c_77+c_36)-18*c_3*c_19+c_62+c_78-48*c_3*p1.z*p2.z+c_46-8*c_10*p1.z*p2.z+c_79-24*p2.y*p3.y*c_22+c_80+c_47-16*
        p2.y*p3.y*p1.z*p3.z-12*c_10*p1.z*p3.z-24*c_3*p2.z*p3.z+c_81-12*c_10*p2.z*p3.z+c_82-12*p2.y*p3.y*c_25+c_40+3*c_2*
        (c_29+c_17+c_10-2*(c_83+c_84+c_69+c_53+c_67+c_25))+2*p1.y*(4*c_6+c_85+c_11-2*p3.y*c_72+2*p2.y*(c_10+c_90))))))/double(13440);
}

double trig::s52() const{
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p12_2=p1.z*p1.z;
    double p12_3=p1.z*p12_2;
    double p22_2=p2.z*p2.z;
    double p22_3=p2.z*p22_2;
    double p32_2=p3.z*p3.z;
    double p32_3=p3.z*p32_2;
    double p20_2=p2.x*p2.x;
    double p20_3=p2.x*p20_2;
    double p20_4=p2.x*p20_3;
    double p30_2=p3.x*p3.x;
    double p10_2=p1.x*p1.x;
    double p10_3=p1.x*p10_2;
    double p10_4=p1.x*p10_3;
    double c_0=5*p1.z;
    double c_1=5*p2.z;
    double c_2=2*p3.z;
    double c_3=2*p2.z;
    double c_4=p1.z+c_1+c_2;
    double c_5=2*p1.z;
    double c_6=c_0+c_3+p3.z;
    double c_7=c_5+p2.z+p3.z;
    double c_8=c_0+p2.z+c_2;
    double c_9=4*p1.z;
    double c_10=3*p3.z;
    double c_11=p11_2;
    double c_12=p21_2;
    double c_13=p31_2;
    double c_14=p12_3;
    double c_15=p11_3;
    double c_16=p21_3;
    double c_17=p31_3;
    double c_18=p12_2;
    double c_19=p22_2;
    double c_20=p22_3;
    double c_21=p32_2;
    double c_22=p32_3;
    double c_23=3*p2.z;
    double c_24=c_9+c_23+p3.z;
    double c_25=4*p2.z;
    double c_26=3*p1.z;
    double c_27=c_26+c_23+c_2;
    double c_28=c_9+p2.z+c_10;
    double c_29=c_26+c_3+c_10;
    double c_30=p20_2;
    double c_31=3*p2.y*c_13*p1.z;
    double c_32=-(24*p2.y*c_18*p2.z);
    double c_33=4*c_17*p3.z;
    double c_34=-(12*p3.y*p1.z*p2.z*p3.z);
    double c_35=-(6*p2.y*p1.z*c_21);
    double c_36=-(8*p3.y*c_22);
    double c_37=c_26+c_25+p3.z;
    double c_38=3*p2.y*c_37;
    double c_39=p3.y*c_27;
    double c_40=p30_2;
    double c_41=p1.z+c_25+c_10;
    double c_42=4*p3.z;
    double c_43=p1.z+c_3+p3.z;
    double c_44=c_5+c_1+p3.z;
    double c_45=p2.z+p3.z;
    double c_46=3*c_12*p3.y*p1.z;
    double c_47=-(2*p3.y*c_14);
    double c_48=-(6*p3.y*p1.z*c_19);
    double c_49=-(12*p2.y*p1.z*p2.z*p3.z);
    double c_50=p2.y*c_27;
    double c_51=p3.y*c_29;
    double c_52=p1.z+c_23+c_42;
    double c_53=p1.z+p2.z+c_2;
    double c_54=3*p2.z*c_21;
    double c_55=-(2*p2.y*c_14);
    double c_56=4*c_16*p2.z;
    double c_57=12*p2.y*c_13*p2.z;
    double c_58=-(6*p3.y*c_18*p2.z);
    double c_59=-(8*p2.y*c_20);
    double c_60=12*c_12*p3.y*p3.z;
    double c_61=-(6*p2.y*c_18*p3.z);
    double c_62=-(24*p3.y*c_18*p3.z);
    double c_63=-(24*p3.y*c_19*p3.z);
    double c_64=-(24*p2.y*p2.z*c_21);
    double c_65=p2.y*c_29;
    double c_66=c_26+p2.z+c_42;
    double c_67=3*p3.y*c_66;
    double c_68=5*p3.z;
    double c_69=p1.z+c_3+c_68;
    double c_70=3*c_45;
    double c_71=c_5+c_70;
    double c_72=4*c_14;
    double c_73=3*c_19*p3.z;
    double c_74=c_5+p2.z+c_68;
    double c_75=3*p2.z*p3.z;
    double c_76=p20_3;
    double c_77=c_17*p1.z;
    double c_78=10*c_16*p2.z;
    double c_79=c_17*p2.z;
    double c_80=-(20*p2.y*c_20);
    double c_81=3*p2.y*c_13*p3.z;
    double c_82=-(6*p3.y*c_18*p3.z);
    double c_83=-(6*p3.y*p1.z*c_21);
    double c_84=-(6*p3.y*p2.z*c_21);
    double c_85=-(2*p2.y*c_22);
    double c_86=p3.y*c_7;
    double c_87=p2.y*c_24;
    double c_88=3*c_19;
    double c_89=c_16*p1.z;
    double c_90=3*c_12*p3.y*p2.z;
    double c_91=3*p2.y*c_13*p2.z;
    double c_92=-(6*p2.y*c_18*p2.z);
    double c_93=-(6*p2.y*p1.z*c_19);
    double c_94=-(2*p3.y*c_20);
    double c_95=c_16*p3.z;
    double c_96=3*c_12*p3.y*p3.z;
    double c_97=10*c_17*p3.z;
    double c_98=-(6*p2.y*c_19*p3.z);
    double c_99=-(6*p3.y*c_19*p3.z);
    double c_100=-(6*p2.y*p2.z*c_21);
    double c_101=-(20*p3.y*c_22);
    double c_102=p2.y*c_7;
    double c_103=p3.y*c_28;
    double c_104=10*c_14;
    double c_105=2*p2.z*p3.z;
    double c_106=3*c_21;
    return ((p3.y*(-p1.z+p2.z)+p2.y*(p1.z-p3.z)+p1.y*(-p2.z+p3.z))*(p10_4*(5*p1.y*(6*p1.z+p2.z+p3.z)+p2.y*c_6+p3.y*
        c_8)+p20_4*(p1.y*c_44+5*p2.y*(p1.z+6*p2.z+p3.z)+p3.y*c_4)+2*c_76*p3.x*(p1.y*c_43+2*p2.y*c_4+p3.y*c_41)+2*p10_3*(p2.x*
        (c_86+2*p1.y*c_6+c_87)+p3.x*(c_102+2*p1.y*c_8+c_103))+p10_2*(60*c_15*p1.z+30*c_11*p2.y*p1.z+12*p1.y*c_12*p1.z+3*c_16*
        p1.z+30*c_11*p3.y*p1.z+12*p1.y*p2.y*p3.y*p1.z+c_46+12*p1.y*c_13*p1.z+c_31+3*c_17*p1.z-120*p1.y*c_14-20*p2.y*c_14-20*
        p3.y*c_14+10*c_15*p2.z+12*c_11*p2.y*p2.z+9*p1.y*c_12*p2.z+c_56+6*c_11*p3.y*p2.z+6*p1.y*p2.y*p3.y*p2.z+c_90+3*p1.y*
        c_13*p2.z+2*p2.y*c_13*p2.z+c_79-60*p1.y*c_18*p2.z+c_32-12*p3.y*c_18*p2.z-24*p1.y*p1.z*c_19-18*p2.y*p1.z*c_19+c_48-6*
        p1.y*c_20+c_59+c_94+10*c_15*p3.z+6*c_11*p2.y*p3.z+3*p1.y*c_12*p3.z+c_95+12*c_11*p3.y*p3.z+6*p1.y*p2.y*p3.y*p3.z+2*
        c_12*p3.y*p3.z+9*p1.y*c_13*p3.z+c_81+c_33-60*p1.y*c_18*p3.z-12*p2.y*c_18*p3.z+c_62-24*p1.y*p1.z*p2.z*p3.z+c_49+c_34-6*
        p1.y*c_19*p3.z+c_98-4*p3.y*c_19*p3.z-24*p1.y*p1.z*c_21+c_35-18*p3.y*p1.z*c_21-6*p1.y*p2.z*c_21-4*p2.y*p2.z*
        c_21+c_84-6*p1.y*c_22+c_85+c_36+c_30*(3*p1.y*c_24+c_38+c_39)+2*p2.x*p3.x*(3*p1.y*c_7+c_50+c_51)+c_40*(3*p1.y*c_28+c_65+c_67))+c_30*
        (10*c_16*p1.z+6*c_12*p3.y*p1.z+c_31+c_77-6*p2.y*c_14+c_47+60*c_16*p2.z+30*c_12*p3.y*p2.z+c_57+3*c_17*p2.z+c_32+c_58-60*
        p2.y*p1.z*c_19-12*p3.y*p1.z*c_19-120*p2.y*c_20-20*p3.y*c_20+10*c_16*p3.z+c_60+9*p2.y*c_13*p3.z+c_33+c_61-4*p3.y*
        c_18*p3.z-24*p2.y*p1.z*p2.z*p3.z+c_34-60*p2.y*c_19*p3.z+c_63+c_35+c_83+c_64-18*p3.y*p2.z*c_21-6*p2.y*c_22+c_36+c_15*
        c_24+c_11*(c_38+c_39)+c_40*(2*p1.y*p1.z+3*p1.y*c_45+3*p2.y*c_41+3*p3.y*c_52)+p1.y*(6*p2.y*p3.y*c_43+6*c_12*c_44+c_13*
        c_71-2*(c_72+10*c_20+6*c_19*p3.z+c_54+c_22+3*c_18*(c_23+p3.z)+2*p1.z*(6*c_19+c_75+c_21))))+2*p2.x*p3.x*(2*c_16*p1.z+c_46+c_31+2*
        c_17*p1.z+c_55+c_47+c_78+12*c_12*p3.y*p2.z+9*p2.y*c_13*p2.z+4*c_17*p2.z+c_92-4*p3.y*c_18*p2.z-12*p2.y*p1.z*
        c_19+c_48+c_80-8*p3.y*c_20+4*c_16*p3.z+9*c_12*p3.y*p3.z+12*p2.y*c_13*p3.z+c_97-4*p2.y*c_18*p3.z+c_82+c_49+c_34-24*p2.y*c_19*
        p3.z-18*p3.y*c_19*p3.z+c_35-12*p3.y*p1.z*c_21-18*p2.y*p2.z*c_21-24*p3.y*p2.z*c_21-8*p2.y*c_22+c_101+c_15*c_7+c_11*
        (c_50+c_51)+c_40*(p1.y*c_53+p2.y*c_52+2*p3.y*c_69)+p1.y*(3*c_12*c_43+3*c_13*c_53+p2.y*(4*p3.y*p1.z+6*p3.y*c_45)-2*(2*
        c_14+2*c_20+c_73+c_54+2*c_22+3*c_18*c_45+p1.z*(c_88+4*p2.z*p3.z+c_106))))+c_40*(c_89+c_46+6*p2.y*c_13*p1.z+10*c_17*p1.z+c_55-6*
        p3.y*c_14+c_56+9*c_12*p3.y*p2.z+c_57+10*c_17*p2.z-4*p2.y*c_18*p2.z+c_58+c_93+c_48+c_59-6*p3.y*c_20+3*c_16*p3.z+c_60+30*
        p2.y*c_13*p3.z+60*c_17*p3.z+c_61+c_62+c_49-24*p3.y*p1.z*p2.z*p3.z-18*p2.y*c_19*p3.z+c_63-12*p2.y*p1.z*c_21-60*
        p3.y*p1.z*c_21+c_64-60*p3.y*p2.z*c_21-20*p2.y*c_22-120*p3.y*c_22+c_15*c_28+c_11*(c_65+c_67)+c_40*(p1.y*c_74+p2.y*c_69+5*
        p3.y*(p1.z+p2.z+6*p3.z))+p1.y*(6*p2.y*p3.y*c_53+c_12*c_71-2*(c_72+c_20+c_73+6*p2.z*c_21+10*c_22+3*c_18*(p2.z+c_10)-3*
        c_13*c_74+2*p1.z*(c_19+c_75+6*c_21))))+2*p1.x*(c_76*(p3.y*c_43+p1.y*c_37+2*p2.y*c_44)+c_30*p3.x*(2*p3.y*p1.z+3*p3.y*c_45+3*
        p2.y*c_43+p1.y*c_27)+p2.x*(4*c_16*p1.z+c_46+2*p2.y*c_13*p1.z+c_77-8*p2.y*c_14-4*p3.y*c_14+c_78+6*c_12*p3.y*
        p2.z+c_91+c_79-18*p2.y*c_18*p2.z+c_58-24*p2.y*p1.z*c_19+c_48+c_80-4*p3.y*c_20+2*c_16*p3.z+c_96+c_81+2*c_17*p3.z+c_61+c_82+c_49-8*
        p3.y*p1.z*p2.z*p3.z-12*p2.y*c_19*p3.z+c_99-4*p2.y*p1.z*c_21+c_83+c_100+c_84+c_85-4*p3.y*c_22+2*c_15*c_6+3*c_11*
        (c_86+c_87)+c_40*(2*p2.y*p1.z+3*p2.y*c_45+3*p3.y*c_53+p1.y*c_29)+p1.y*(3*c_12*c_37+2*p2.y*p3.y*c_27+c_13*c_29-2*(c_104+4*
        c_20+c_73+2*p2.z*c_21+c_22+6*c_18*(c_3+p3.z)+3*p1.z*(c_88+c_105+c_21))))+p3.x*(c_89+2*c_12*p3.y*p1.z+c_31+4*c_17*p1.z-4*
        p2.y*c_14-8*p3.y*c_14+2*c_16*p2.z+c_90+c_91+2*c_17*p2.z+c_92+c_58+c_93-4*p3.y*p1.z*c_19-4*p2.y*c_20+c_94+c_95+c_96+6*p2.y*
        c_13*p3.z+c_97+c_61-18*p3.y*c_18*p3.z-8*p2.y*p1.z*p2.z*p3.z+c_34+c_98+c_99+c_35-24*p3.y*p1.z*c_21+c_100-12*p3.y*
        p2.z*c_21-4*p2.y*c_22+c_101+2*c_15*c_8+3*c_11*(c_102+c_103)+c_40*(p2.y*c_53+p1.y*c_66+2*p3.y*c_74)+p1.y*(c_12*c_27+2*p2.y*
        p3.y*c_29+3*c_13*c_66-2*(c_104+c_20+2*c_19*p3.z+c_54+4*c_22+6*c_18*(p2.z+c_2)+3*p1.z*(c_19+c_105+c_106)))))))/double(26880);
}

double trig::s53() const{
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p11_4=p1.y*p11_3;
    double p11_5=p1.y*p11_4;
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p21_4=p2.y*p21_3;
    double p21_5=p2.y*p21_4;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p31_4=p3.y*p31_3;
    double p31_5=p3.y*p31_4;
    double p12_2=p1.z*p1.z;
    double p22_2=p2.z*p2.z;
    double p32_2=p3.z*p3.z;
    double p30_2=p3.x*p3.x;
    double p30_3=p3.x*p30_2;
    double p30_4=p3.x*p30_3;
    double p20_2=p2.x*p2.x;
    double p20_3=p2.x*p20_2;
    double p20_4=p2.x*p20_3;
    double p20_5=p2.x*p20_4;
    double p10_2=p1.x*p1.x;
    double p10_3=p1.x*p10_2;
    double p10_4=p1.x*p10_3;
    double p10_5=p1.x*p10_4;
    double c_0=5*p1.y;
    double c_1=2*p3.y;
    double c_2=p11_2;
    double c_3=p21_2;
    double c_4=p31_2;
    double c_5=4*p1.y;
    double c_6=p12_2;
    double c_7=p22_2;
    double c_8=p32_2;
    double c_9=p11_3;
    double c_10=p21_3;
    double c_11=p31_3;
    double c_12=p30_2;
    double c_13=4*p2.y;
    double c_14=3*p3.y;
    double c_15=p20_2;
    double c_16=-c_9;
    double c_17=3*p2.y;
    double c_18=3*c_6;
    double c_19=p20_3;
    double c_20=3*p1.y;
    double c_21=-c_11;
    double c_22=2*p2.y;
    double c_23=24*p3.y*p1.z*p2.z;
    double c_24=24*p2.y*p1.z*p3.z;
    double c_25=24*p3.y*p1.z*p3.z;
    double c_26=12*p3.y*c_8;
    double c_27=8*p1.z*p2.z;
    double c_28=4*p1.z*p3.z;
    double c_29=-10*c_9;
    double c_30=-(4*c_11);
    double c_31=4*p3.y;
    double c_32=48*p3.y*c_8;
    double c_33=2*p2.y*p3.y;
    double c_34=10*c_6;
    double c_35=2*p2.z*p3.z;
    double c_36=3*c_8;
    double c_37=c_22+p3.y;
    double c_38=3*c_7;
    double c_39=c_34+c_27+c_38+c_28+c_35+c_8;
    double c_40=4*p2.z*p3.z;
    double c_41=6*c_6;
    double c_42=6*c_7;
    double c_43=p21_4;
    double c_44=p31_4;
    double c_45=4*p1.z*p2.z;
    double c_46=6*p2.z*p3.z;
    double c_47=10*c_7;
    double c_48=2*p1.z*p3.z;
    double c_49=c_18+c_27+c_47+c_48+c_40+c_8;
    double c_50=4*c_49;
    double c_51=6*p1.z*p2.z;
    double c_52=c_18+c_51+c_42+c_28+c_46+c_36;
    double c_53=6*c_8;
    double c_54=p2.z+p3.z;
    double c_55=3*c_3;
    double c_56=6*p1.z*p3.z;
    double c_57=c_18+c_45+c_38+c_56+c_46+c_53;
    double c_58=p11_5;
    double c_59=-5*c_58;
    double c_60=p21_5;
    double c_61=p31_5;
    double c_62=p11_4;
    double c_63=p2.y+c_1;
    double c_64=p30_4;
    double c_65=24*p2.y*c_4*p1.z*p2.z;
    double c_66=24*c_3*p3.y*p1.z*p3.z;
    double c_67=-(10*p2.y*p3.y);
    double c_68=8*p1.z*p3.z;
    double c_69=c_34+c_45+c_7+c_68+c_35+c_36;
    double c_70=-(10*c_3*p3.y);
    double c_71=6*p1.z*c_54;
    double c_72=c_41+c_38+c_40+c_36+c_71;
    double c_73=3*p2.z*p3.z;
    double c_74=10*c_8;
    double c_75=4*c_52;
    double c_76=8*p2.z*p3.z;
    double c_77=2*p3.z;
    double c_78=p2.z+c_77;
    double c_79=2*p1.z*c_78;
    double c_80=c_6+c_38+c_76+c_74+c_79;
    double c_81=2*p1.z*p2.z;
    double c_82=c_18+c_81+c_7+c_68+c_40+c_74;
    double c_83=-(5*c_60);
    double c_84=-(5*c_61);
    double c_85=p20_4;
    double c_86=2*p1.y;
    double c_87=5*p2.y;
    double c_88=5*p3.y;
    double c_89=12*c_3*p3.y*c_6;
    double c_90=12*p2.y*c_4*c_6;
    double c_91=24*c_3*p3.y*p1.z*p2.z;
    double c_92=8*c_11*p1.z*p2.z;
    double c_93=40*c_10*c_7;
    double c_94=8*c_10*p1.z*p3.z;
    double c_95=24*p2.y*c_4*p1.z*p3.z;
    double c_96=40*c_11*c_8;
    double c_97=6*p1.y;
    double c_98=-(12*p3.y*c_8);
    double c_99=9*p1.z*p2.z;
    double c_100=3*p1.z*p3.z;
    double c_101=c_41+c_99+c_42+c_100+c_73+c_8;
    double c_102=4*c_9;
    double c_103=10*c_11;
    double c_104=3*p2.y*p3.y;
    double c_105=6*c_4;
    double c_106=3*c_3*p3.y;
    double c_107=3*p2.y*c_4;
    double c_108=p2.y+p3.y;
    double c_109=-(12*p3.y*c_6);
    double c_110=-(16*p3.y*p1.z*p2.z);
    double c_111=-(16*p2.y*p1.z*p3.z);
    double c_112=-(24*p3.y*p2.z*p3.z);
    double c_113=-(12*p2.y*c_8);
    double c_114=4*p2.y*p3.y;
    double c_115=3*c_4;
    return ((p3.y*(p1.z-p2.z)+p1.y*(p2.z-p3.z)+p2.y*(-p1.z+p3.z))*(-3*p10_5*(c_97+p2.y+p3.y)-3*p20_5*(p1.y+6*p2.y+p3.y)-3*
        c_85*p3.x*(p1.y+c_87+c_1)-3*p10_4*(p2.x*(c_0+c_22+p3.y)+p3.x*(c_0+p2.y+c_1))-p10_3*(20*c_9+10*c_2*p2.y+4*p1.y*
        c_3+c_10+10*c_2*p3.y+4*p1.y*p2.y*p3.y+c_3*p3.y+4*p1.y*c_4+p2.y*c_4+c_11+6*p2.x*p3.x*(c_86+p2.y+p3.y)+3*c_15*(c_5+c_17+p3.y)+3*
        c_12*(c_5+p2.y+c_14)-240*p1.y*c_6-40*p2.y*c_6-40*p3.y*c_6-80*p1.y*p1.z*p2.z-32*p2.y*p1.z*p2.z+c_110-16*p1.y*
        c_7-12*p2.y*c_7-4*p3.y*c_7-80*p1.y*p1.z*p3.z+c_111-32*p3.y*p1.z*p3.z-16*p1.y*p2.z*p3.z-8*p2.y*p2.z*p3.z-8*p3.y*
        p2.z*p3.z-16*p1.y*c_8-4*p2.y*c_8+c_98)+c_19*(c_16-20*c_10+c_70-4*p2.y*c_4+c_21-c_2*(c_13+p3.y)-3*c_12*(p1.y+c_13+c_14)+16*
        p2.y*c_6+4*p3.y*c_6+80*p2.y*p1.z*p2.z+16*p3.y*p1.z*p2.z+240*p2.y*c_7+40*p3.y*c_7+16*p2.y*p1.z*p3.z+8*p3.y*p1.z*
        p3.z+80*p2.y*p2.z*p3.z+32*p3.y*p2.z*p3.z+16*p2.y*c_8+c_26+p1.y*(-10*c_3-4*p2.y*p3.y-c_4+c_50))+c_15*p3.x*(c_16-10*
        c_10-12*c_3*p3.y-9*p2.y*c_4+c_30-c_2*(c_17+c_1)-3*c_12*(p1.y+c_17+c_31)+12*p2.y*c_6+8*p3.y*c_6+48*p2.y*p1.z*p2.z+c_23+120*
        p2.y*c_7+48*p3.y*c_7+c_24+c_25+96*p2.y*p2.z*p3.z+72*p3.y*p2.z*p3.z+36*p2.y*c_8+c_32+p1.y*(-6*c_3-6*p2.y*p3.y-3*
        c_4+c_75))+p10_2*(-3*c_19*(c_20+c_13+p3.y)-3*c_15*p3.x*(c_20+c_17+c_1)+p2.x*(c_29-4*c_10-3*c_3*p3.y-2*p2.y*c_4+c_21-6*c_2*
        c_37-3*c_12*(c_20+c_22+c_14)+48*p2.y*c_6+24*p3.y*c_6+72*p2.y*p1.z*p2.z+c_23+48*p2.y*c_7+12*p3.y*c_7+c_24+c_25+24*p2.y*
        p2.z*p3.z+16*p3.y*p2.z*p3.z+8*p2.y*c_8+c_26-3*p1.y*(c_55+c_33+c_4-4*c_39))+p3.x*(c_29-c_10-2*c_3*p3.y-3*p2.y*c_4+c_30-6*
        c_2*c_63-3*c_12*(c_20+p2.y+c_31)+24*p2.y*c_6+48*p3.y*c_6+24*p2.y*p1.z*p2.z+c_23+12*p2.y*c_7+8*p3.y*c_7+c_24+72*p3.y*
        p1.z*p3.z+16*p2.y*p2.z*p3.z+24*p3.y*p2.z*p3.z+12*p2.y*c_8+c_32-3*p1.y*(c_3+c_33+c_115-4*c_69)))-p2.x*(c_59-30*c_60-25*
        c_43*p3.y-20*c_10*c_4-15*c_3*c_11-10*p2.y*c_44+c_84-5*c_62*c_37+3*c_64*(p1.y+c_22+c_88)+16*c_10*c_6+c_89+8*p2.y*c_4*c_6+4*
        c_11*c_6+80*c_10*p1.z*p2.z+48*c_3*p3.y*p1.z*p2.z+c_65+c_92+240*c_10*c_7+120*c_3*p3.y*c_7+48*p2.y*c_4*c_7+12*c_11*c_7+16*
        c_10*p1.z*p3.z+c_66+c_95+16*c_11*p1.z*p3.z+80*c_10*p2.z*p3.z+96*c_3*p3.y*p2.z*p3.z+72*p2.y*c_4*p2.z*p3.z+32*c_11*
        p2.z*p3.z+16*c_10*c_8+36*c_3*p3.y*c_8+48*p2.y*c_4*c_8+c_96+c_9*(-15*c_3+c_67-5*c_4+4*c_39)+c_2*(-20*c_10-15*c_3*p3.y-5*c_11+4*
        p3.y*c_72+p2.y*(-10*c_4+8*c_101))+p1.y*(-25*c_43-20*c_10*p3.y-5*c_44+4*c_4*c_57+3*c_3*(-5*c_4+c_50)+p2.y*(-10*c_11+8*p3.y*
        c_52))+c_12*(c_9+4*c_10+9*c_3*p3.y+12*p2.y*c_4+c_103+c_2*(c_22+c_14)-8*p2.y*(c_6+c_42+9*p2.z*p3.z+c_53+3*p1.z*c_54)-12*
        p3.y*c_80+p1.y*(c_55+6*p2.y*p3.y+c_105-4*c_57)))-p3.x*(c_59+c_83-10*c_43*p3.y-15*c_10*c_4-20*c_3*c_11-25*p2.y*c_44-30*
        c_61-5*c_62*c_63+3*c_64*(p1.y+p2.y+6*p3.y)+4*c_10*c_6+8*c_3*p3.y*c_6+c_90+16*c_11*c_6+16*c_10*p1.z*p2.z+c_91+c_65+16*c_11*
        p1.z*p2.z+c_93+48*c_3*p3.y*c_7+36*p2.y*c_4*c_7+16*c_11*c_7+c_94+c_66+48*p2.y*c_4*p1.z*p3.z+80*c_11*p1.z*p3.z+32*c_10*
        p2.z*p3.z+72*c_3*p3.y*p2.z*p3.z+96*p2.y*c_4*p2.z*p3.z+80*c_11*p2.z*p3.z+12*c_10*c_8+48*c_3*p3.y*c_8+120*p2.y*c_4*
        c_8+240*c_11*c_8+c_9*(-5*c_3+c_67-15*c_4+4*c_69)+c_2*(-5*c_10+c_70-15*p2.y*c_4-20*c_11+4*p2.y*c_72+8*p3.y*(c_41+c_7+c_73+c_53+3*
        p1.z*(p2.z+3*p3.z)))+p1.y*(-5*c_43-10*c_10*p3.y-25*c_44+12*c_4*c_82+c_3*(-15*c_4+c_75)+p2.y*(-20*c_11+8*p3.y*c_57))+c_12*
        (c_9+c_10+4*c_3*p3.y+10*p2.y*c_4+20*c_11+c_2*(p2.y+c_31)-4*p2.y*c_80-16*p3.y*(c_6+c_7+5*p2.z*p3.z+15*c_8+p1.z*(p2.z+5*
        p3.z))+p1.y*(c_3+c_114+10*c_4-4*c_82)))-p1.x*(-30*c_58-25*c_62*p2.y-20*c_9*c_3-15*c_2*c_10-10*p1.y*c_43+c_83-25*c_62*
        p3.y-20*c_9*p2.y*p3.y-15*c_2*c_3*p3.y-10*p1.y*c_10*p3.y-5*c_43*p3.y-20*c_9*c_4-15*c_2*p2.y*c_4-10*p1.y*c_3*c_4-5*c_10*
        c_4-15*c_2*c_11-10*p1.y*p2.y*c_11-5*c_3*c_11-10*p1.y*c_44-5*p2.y*c_44+c_84+6*c_19*p3.x*(p1.y+c_22+p3.y)+3*c_85*(c_86+c_87+p3.y)+3*
        c_64*(c_86+p2.y+c_88)+240*c_9*c_6+120*c_2*p2.y*c_6+48*p1.y*c_3*c_6+12*c_10*c_6+120*c_2*p3.y*c_6+48*p1.y*p2.y*p3.y*
        c_6+c_89+48*p1.y*c_4*c_6+c_90+12*c_11*c_6+80*c_9*p1.z*p2.z+96*c_2*p2.y*p1.z*p2.z+72*p1.y*c_3*p1.z*p2.z+32*c_10*p1.z*
        p2.z+48*c_2*p3.y*p1.z*p2.z+48*p1.y*p2.y*p3.y*p1.z*p2.z+c_91+24*p1.y*c_4*p1.z*p2.z+16*p2.y*c_4*p1.z*p2.z+c_92+16*
        c_9*c_7+36*c_2*p2.y*c_7+48*p1.y*c_3*c_7+c_93+12*c_2*p3.y*c_7+24*p1.y*p2.y*p3.y*c_7+24*c_3*p3.y*c_7+8*p1.y*c_4*c_7+12*
        p2.y*c_4*c_7+4*c_11*c_7+80*c_9*p1.z*p3.z+48*c_2*p2.y*p1.z*p3.z+24*p1.y*c_3*p1.z*p3.z+c_94+96*c_2*p3.y*p1.z*p3.z+48*
        p1.y*p2.y*p3.y*p1.z*p3.z+16*c_3*p3.y*p1.z*p3.z+72*p1.y*c_4*p1.z*p3.z+c_95+32*c_11*p1.z*p3.z+16*c_9*p2.z*p3.z+24*
        c_2*p2.y*p2.z*p3.z+24*p1.y*c_3*p2.z*p3.z+16*c_10*p2.z*p3.z+24*c_2*p3.y*p2.z*p3.z+32*p1.y*p2.y*p3.y*p2.z*p3.z+24*
        c_3*p3.y*p2.z*p3.z+24*p1.y*c_4*p2.z*p3.z+24*p2.y*c_4*p2.z*p3.z+16*c_11*p2.z*p3.z+16*c_9*c_8+12*c_2*p2.y*c_8+8*p1.y*
        c_3*c_8+4*c_10*c_8+36*c_2*p3.y*c_8+24*p1.y*p2.y*p3.y*c_8+12*c_3*p3.y*c_8+48*p1.y*c_4*c_8+24*p2.y*c_4*c_8+c_96+c_15*
        (c_102+10*c_10+6*c_3*p3.y+c_107+c_11+3*c_2*(c_17+p3.y)+c_12*(c_97+9*c_108)-36*p2.y*c_6+c_109-96*p2.y*p1.z*p2.z-24*p3.y*p1.z*
        p2.z-120*p2.y*c_7-24*p3.y*c_7-24*p2.y*p1.z*p3.z-16*p3.y*p1.z*p3.z-48*p2.y*p2.z*p3.z+c_112+c_113+c_98+2*p1.y*(6*
        c_3+c_104+c_4-4*c_101))+c_12*(c_102+c_10+c_106+6*p2.y*c_4+c_103+3*c_2*(p2.y+c_14)-4*p2.y*c_57-12*p3.y*(c_18+c_7+c_40+c_74+2*
        p1.z*(p2.z+4*p3.z))+2*p1.y*(c_3+c_104+c_105-4*(c_41+3*p1.z*p2.z+c_7+9*p1.z*p3.z+c_73+c_53)))+2*p2.x*p3.x*(2*c_9+2*
        c_10+c_106+c_107+2*c_11+3*c_2*c_108+3*c_12*(p1.y+p2.y+c_1)-12*p2.y*c_6+c_109-24*p2.y*p1.z*p2.z+c_110-24*p2.y*c_7-12*p3.y*
        c_7+c_111-24*p3.y*p1.z*p3.z-24*p2.y*p2.z*p3.z+c_112+c_113-24*p3.y*c_8+p1.y*(c_55+c_114+c_115-4*c_72)))))/double(322560);
}

double trig::s54() const{
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p30_2=p3.x*p3.x;
    double p20_2=p2.x*p2.x;
    double p20_3=p2.x*p20_2;
    double p20_4=p2.x*p20_3;
    double p10_2=p1.x*p1.x;
    double p10_3=p1.x*p10_2;
    double p10_4=p1.x*p10_3;
    double c_0=5*p1.z;
    double c_1=5*p2.z;
    double c_2=2*p3.z;
    double c_3=2*p2.z;
    double c_4=p1.z+c_1+c_2;
    double c_5=2*p1.z;
    double c_6=c_0+c_3+p3.z;
    double c_7=c_5+p2.z+p3.z;
    double c_8=c_0+p2.z+c_2;
    double c_9=4*p1.z;
    double c_10=3*p3.z;
    double c_11=p11_2;
    double c_12=p21_2;
    double c_13=p31_2;
    double c_14=p11_3;
    double c_15=p21_3;
    double c_16=p31_3;
    double c_17=3*p2.z;
    double c_18=c_9+c_17+p3.z;
    double c_19=4*p2.z;
    double c_20=3*p1.z;
    double c_21=c_20+c_17+c_2;
    double c_22=c_9+p2.z+c_10;
    double c_23=c_20+c_3+c_10;
    double c_24=3*c_12*p3.y*p1.z;
    double c_25=3*p2.y*c_13*p1.z;
    double c_26=p1.z+c_3+p3.z;
    double c_27=p2.y*c_21;
    double c_28=p3.y*c_23;
    double c_29=p30_2;
    double c_30=p1.z+p2.z+c_2;
    double c_31=4*p3.z;
    double c_32=4*c_15*p2.z;
    double c_33=p2.y*c_23;
    double c_34=c_20+p2.z+c_31;
    double c_35=3*p3.y*c_34;
    double c_36=5*p3.z;
    double c_37=p1.z+c_3+c_36;
    double c_38=c_5+p2.z+c_36;
    double c_39=p2.z+p3.z;
    double c_40=p20_2;
    double c_41=12*p2.y*c_13*p2.z;
    double c_42=12*c_12*p3.y*p3.z;
    double c_43=4*c_16*p3.z;
    double c_44=c_20+c_19+p3.z;
    double c_45=3*p2.y*c_44;
    double c_46=p3.y*c_21;
    double c_47=p1.z+c_19+c_10;
    double c_48=p1.z+c_17+c_31;
    double c_49=c_5+c_1+p3.z;
    double c_50=3*c_39;
    double c_51=c_5+c_50;
    double c_52=p20_3;
    double c_53=c_16*p1.z;
    double c_54=10*c_15*p2.z;
    double c_55=c_16*p2.z;
    double c_56=3*p2.y*c_13*p3.z;
    double c_57=p3.y*c_7;
    double c_58=p2.y*c_18;
    double c_59=c_15*p1.z;
    double c_60=3*c_12*p3.y*p2.z;
    double c_61=3*p2.y*c_13*p2.z;
    double c_62=c_15*p3.z;
    double c_63=3*c_12*p3.y*p3.z;
    double c_64=10*c_16*p3.z;
    double c_65=p2.y*c_7;
    double c_66=p3.y*c_22;
    return ((p3.y*(-p1.z+p2.z)+p2.y*(p1.z-p3.z)+p1.y*(-p2.z+p3.z))*(-(p10_4*(5*p1.y*(6*p1.z+p2.z+p3.z)+p2.y*c_6+p3.y*
        c_8))-p20_4*(p1.y*c_49+5*p2.y*(p1.z+6*p2.z+p3.z)+p3.y*c_4)-2*c_52*p3.x*(p1.y*c_26+2*p2.y*c_4+p3.y*c_47)-2*p10_3*
        (p2.x*(c_57+2*p1.y*c_6+c_58)+p3.x*(c_65+2*p1.y*c_8+c_66))+p10_2*(60*c_14*p1.z+30*c_11*p2.y*p1.z+12*p1.y*c_12*p1.z+3*
        c_15*p1.z+30*c_11*p3.y*p1.z+12*p1.y*p2.y*p3.y*p1.z+c_24+12*p1.y*c_13*p1.z+c_25+3*c_16*p1.z+10*c_14*p2.z+12*c_11*
        p2.y*p2.z+9*p1.y*c_12*p2.z+c_32+6*c_11*p3.y*p2.z+6*p1.y*p2.y*p3.y*p2.z+c_60+3*p1.y*c_13*p2.z+2*p2.y*c_13*p2.z+c_55+10*
        c_14*p3.z+6*c_11*p2.y*p3.z+3*p1.y*c_12*p3.z+c_62+12*c_11*p3.y*p3.z+6*p1.y*p2.y*p3.y*p3.z+2*c_12*p3.y*p3.z+9*
        p1.y*c_13*p3.z+c_56+c_43-c_40*(3*p1.y*c_18+c_45+c_46)-2*p2.x*p3.x*(3*p1.y*c_7+c_27+c_28)-c_29*(3*p1.y*c_22+c_33+c_35))+2*
        p2.x*p3.x*(2*c_15*p1.z+c_24+c_25+2*c_16*p1.z+c_54+12*c_12*p3.y*p2.z+9*p2.y*c_13*p2.z+4*c_16*p2.z+4*c_15*p3.z+9*
        c_12*p3.y*p3.z+12*p2.y*c_13*p3.z+c_64+c_14*c_7+p1.y*(4*p2.y*p3.y*p1.z+6*p2.y*p3.y*c_39+3*c_12*c_26+3*c_13*c_30)+c_11*
        (c_27+c_28)-c_29*(p1.y*c_30+p2.y*c_48+2*p3.y*c_37))+c_29*(c_59+c_24+6*p2.y*c_13*p1.z+10*c_16*p1.z+c_32+9*c_12*p3.y*
        p2.z+c_41+10*c_16*p2.z+3*c_15*p3.z+c_42+30*p2.y*c_13*p3.z+60*c_16*p3.z+c_14*c_22+c_11*(c_33+c_35)-c_29*(p1.y*c_38+p2.y*
        c_37+5*p3.y*(p1.z+p2.z+6*p3.z))+p1.y*(6*p2.y*p3.y*c_30+6*c_13*c_38+c_12*c_51))+c_40*(10*c_15*p1.z+6*c_12*p3.y*
        p1.z+c_25+c_53+60*c_15*p2.z+30*c_12*p3.y*p2.z+c_41+3*c_16*p2.z+10*c_15*p3.z+c_42+9*p2.y*c_13*p3.z+c_43+c_14*c_18+c_11*
        (c_45+c_46)-c_29*(2*p1.y*p1.z+3*p1.y*c_39+3*p2.y*c_47+3*p3.y*c_48)+p1.y*(6*p2.y*p3.y*c_26+6*c_12*c_49+c_13*c_51))+2*p1.x*
        (-(c_52*(p3.y*c_26+p1.y*c_44+2*p2.y*c_49))-c_40*p3.x*(2*p3.y*p1.z+3*p3.y*c_39+3*p2.y*c_26+p1.y*c_21)+p2.x*(4*c_15*
        p1.z+c_24+2*p2.y*c_13*p1.z+c_53+c_54+6*c_12*p3.y*p2.z+c_61+c_55+2*c_15*p3.z+c_63+c_56+2*c_16*p3.z+2*c_14*c_6+3*c_11*
        (c_57+c_58)-c_29*(2*p2.y*p1.z+3*p2.y*c_39+3*p3.y*c_30+p1.y*c_23)+p1.y*(3*c_12*c_44+2*p2.y*p3.y*c_21+c_13*c_23))+p3.x*
        (c_59+2*c_12*p3.y*p1.z+c_25+4*c_16*p1.z+2*c_15*p2.z+c_60+c_61+2*c_16*p2.z+c_62+c_63+6*p2.y*c_13*p3.z+c_64+2*c_14*c_8+3*
        c_11*(c_65+c_66)+p1.y*(c_12*c_21+2*p2.y*p3.y*c_23+3*c_13*c_34)-c_29*(p2.y*c_30+p1.y*c_34+2*p3.y*c_38)))))/double(322560);
}

double trig::s55() const{
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p11_4=p1.y*p11_3;
    double p11_5=p1.y*p11_4;
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p21_4=p2.y*p21_3;
    double p21_5=p2.y*p21_4;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p31_4=p3.y*p31_3;
    double p31_5=p3.y*p31_4;
    double p20_2=p2.x*p2.x;
    double p20_3=p2.x*p20_2;
    double p20_4=p2.x*p20_3;
    double p20_5=p2.x*p20_4;
    double p30_2=p3.x*p3.x;
    double p30_3=p3.x*p30_2;
    double p30_4=p3.x*p30_3;
    double p10_2=p1.x*p1.x;
    double p10_3=p1.x*p10_2;
    double p10_4=p1.x*p10_3;
    double p10_5=p1.x*p10_4;
    double c_0=5*p1.y;
    double c_1=2*p3.y;
    double c_2=p11_2;
    double c_3=p21_2;
    double c_4=p31_2;
    double c_5=4*p1.y;
    double c_6=p20_2;
    double c_7=p11_3;
    double c_8=p21_3;
    double c_9=p31_3;
    double c_10=3*p2.y;
    double c_11=p30_2;
    double c_12=4*p2.y;
    double c_13=3*p3.y;
    double c_14=2*p2.y;
    double c_15=2*p2.y*p3.y;
    double c_16=p21_4;
    double c_17=p31_4;
    double c_18=4*c_8;
    double c_19=p20_3;
    double c_20=3*p1.y;
    double c_21=3*c_3*p3.y;
    double c_22=2*p2.y*c_4;
    double c_23=c_14+p3.y;
    double c_24=3*c_3;
    double c_25=c_24+c_15+c_4;
    double c_26=-c_8;
    double c_27=-(4*c_9);
    double c_28=4*p3.y;
    double c_29=p11_5;
    double c_30=p21_5;
    double c_31=p31_5;
    double c_32=p11_4;
    double c_33=p2.y+c_1;
    double c_34=p30_4;
    double c_35=3*c_4;
    double c_36=c_3+c_15+c_35;
    double c_37=3*c_3*c_4;
    double c_38=4*p2.y*p3.y;
    double c_39=p20_4;
    double c_40=2*p1.y;
    double c_41=5*p2.y;
    double c_42=5*p3.y;
    double c_43=-(3*p2.y*c_4);
    double c_44=10*c_9;
    double c_45=4*c_7;
    double c_46=3*p2.y*c_4;
    double c_47=3*p2.y*p3.y;
    double c_48=p2.y+p3.y;
    return ((p10_5*(6*p1.y+p2.y+p3.y)+p20_5*(p1.y+6*p2.y+p3.y)+c_39*p3.x*(p1.y+c_41+c_1)+p10_4*(p2.x*(c_0+c_14+p3.y)+p3.x*
        (c_0+p2.y+c_1))+p10_3*(-20*c_7-10*c_2*p2.y-4*p1.y*c_3+c_26-10*c_2*p3.y-4*p1.y*p2.y*p3.y-c_3*p3.y-4*p1.y*
        c_4-p2.y*c_4-c_9+2*p2.x*p3.x*(c_40+p2.y+p3.y)+c_6*(c_5+c_10+p3.y)+c_11*(c_5+p2.y+c_13))+c_6*p3.x*(-c_7-10*c_8-12*
        c_3*p3.y-9*p2.y*c_4+c_27-c_2*(c_10+c_1)+c_11*(p1.y+c_10+c_28)-3*p1.y*(2*c_3+c_15+c_4))-c_19*(c_7+20*c_8+10*c_3*p3.y+4*
        p2.y*c_4+c_9+c_2*(c_12+p3.y)-c_11*(p1.y+c_12+c_13)+p1.y*(10*c_3+c_38+c_4))+p2.x*(c_29+6*c_30+5*c_16*p3.y+4*c_8*
        c_4+3*c_3*c_9+2*p2.y*c_17+c_31+c_32*c_23+c_34*(p1.y+c_14+c_42)+c_7*c_25+c_2*(c_18+c_21+c_22+c_9)+p1.y*(5*c_16+4*c_8*
        p3.y+c_37+2*p2.y*c_9+c_17)-c_11*(c_7+c_18+9*c_3*p3.y+12*p2.y*c_4+c_44+c_2*(c_14+c_13)+3*p1.y*(c_3+c_15+2*c_4)))+p10_2*(c_19*
        (c_20+c_12+p3.y)+c_6*p3.x*(c_20+c_10+c_1)-p2.x*(10*c_7+c_18+c_21+c_22+c_9+6*c_2*c_23-c_11*(c_20+c_14+c_13)+3*p1.y*
        c_25)+p3.x*(-10*c_7+c_26-2*c_3*p3.y+c_43+c_27-6*c_2*c_33+c_11*(c_20+p2.y+c_28)-3*p1.y*c_36))+p3.x*(c_29+c_30+2*c_16*
        p3.y+3*c_8*c_4+4*c_3*c_9+5*p2.y*c_17+6*c_31+c_32*c_33+c_34*(p1.y+p2.y+6*p3.y)+c_7*c_36+c_2*(c_8+2*c_3*p3.y+c_46+4*
        c_9)+p1.y*(c_16+2*c_8*p3.y+c_37+4*p2.y*c_9+5*c_17)-c_11*(c_7+c_8+4*c_3*p3.y+10*p2.y*c_4+20*c_9+c_2*(p2.y+c_28)+p1.y*
        (c_3+c_38+10*c_4)))+p1.x*(6*c_29+5*c_32*p2.y+4*c_7*c_3+3*c_2*c_8+2*p1.y*c_16+c_30+5*c_32*p3.y+4*c_7*p2.y*p3.y+3*c_2*
        c_3*p3.y+2*p1.y*c_8*p3.y+c_16*p3.y+4*c_7*c_4+3*c_2*p2.y*c_4+2*p1.y*c_3*c_4+c_8*c_4+3*c_2*c_9+2*p1.y*p2.y*c_9+c_3*
        c_9+2*p1.y*c_17+p2.y*c_17+c_31+2*c_19*p3.x*(p1.y+c_14+p3.y)+c_39*(c_40+c_41+p3.y)+c_34*(c_40+p2.y+c_42)+2*p2.x*
        p3.x*(-2*c_7-2*c_8-3*c_3*p3.y+c_43-2*c_9-3*c_2*c_48+c_11*(p1.y+p2.y+c_1)-p1.y*(c_24+c_38+c_35))-c_11*(c_45+c_8+c_21+6*
        p2.y*c_4+c_44+3*c_2*(p2.y+c_13)+2*p1.y*(c_3+c_47+6*c_4))-c_6*(c_45+10*c_8+6*c_3*p3.y+c_46+c_9+3*c_2*(c_10+p3.y)+2*
        p1.y*(6*c_3+c_47+c_4)-c_11*(c_40+3*c_48))))*(p3.y*(p1.z-p2.z)+p1.y*(p2.z-p3.z)+p2.y*(-p1.z+p3.z)))/double(645120);
}

double trig::j6() const{
    double p30_2=p3.x*p3.x;
    double p30_3=p3.x*p30_2;
    double p30_4=p3.x*p30_3;
    double p30_5=p3.x*p30_4;
    double p30_6=p3.x*p30_5;
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p11_4=p1.y*p11_3;
    double p11_5=p1.y*p11_4;
    double p11_6=p1.y*p11_5;
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p21_4=p2.y*p21_3;
    double p21_5=p2.y*p21_4;
    double p21_6=p2.y*p21_5;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p31_4=p3.y*p31_3;
    double p31_5=p3.y*p31_4;
    double p31_6=p3.y*p31_5;
    double p12_2=p1.z*p1.z;
    double p12_3=p1.z*p12_2;
    double p12_4=p1.z*p12_3;
    double p12_5=p1.z*p12_4;
    double p12_6=p1.z*p12_5;
    double p22_2=p2.z*p2.z;
    double p22_3=p2.z*p22_2;
    double p22_4=p2.z*p22_3;
    double p22_5=p2.z*p22_4;
    double p22_6=p2.z*p22_5;
    double p32_2=p3.z*p3.z;
    double p32_3=p3.z*p32_2;
    double p32_4=p3.z*p32_3;
    double p32_5=p3.z*p32_4;
    double p32_6=p3.z*p32_5;
    double p20_2=p2.x*p2.x;
    double p20_3=p2.x*p20_2;
    double p20_4=p2.x*p20_3;
    double p20_5=p2.x*p20_4;
    double p20_6=p2.x*p20_5;
    double p20_7=p2.x*p20_6;
    double p10_2=p1.x*p1.x;
    double p10_3=p1.x*p10_2;
    double p10_4=p1.x*p10_3;
    double p10_5=p1.x*p10_4;
    double p10_6=p1.x*p10_5;
    double p10_7=p1.x*p10_6;
    double c_0=p30_2;
    double c_1=5*c_0;
    double c_2=p11_2;
    double c_3=p21_2;
    double c_4=p31_2;
    double c_5=p12_2;
    double c_6=-(6*c_5);
    double c_7=p22_2;
    double c_8=p32_2;
    double c_9=-(36*p1.z*p2.z);
    double c_10=-(6*c_8);
    double c_11=p20_2;
    double c_12=3*c_4;
    double c_13=-(30*p1.z*p2.z);
    double c_14=-(6*c_7);
    double c_15=-(18*c_8);
    double c_16=15*c_2;
    double c_17=2*p2.y*p3.y;
    double c_18=-(90*c_5);
    double c_19=-(12*p2.z*p3.z);
    double c_20=p20_4;
    double c_21=p20_3;
    double c_22=p11_3;
    double c_23=p21_3;
    double c_24=p31_3;
    double c_25=p12_3;
    double c_26=p22_3;
    double c_27=p32_3;
    double c_28=3*c_3;
    double c_29=-(18*c_7);
    double c_30=10*c_2;
    double c_31=-(60*c_5);
    double c_32=3*p2.y*p3.y;
    double c_33=p30_4;
    double c_34=5*c_33;
    double c_35=p11_4;
    double c_36=p21_4;
    double c_37=p31_4;
    double c_38=3*p2.y;
    double c_39=2*p3.y;
    double c_40=p12_4;
    double c_41=p22_4;
    double c_42=-(24*c_4*p1.z*p3.z);
    double c_43=32*p1.z*c_27;
    double c_44=p32_4;
    double c_45=6*c_3;
    double c_46=-(36*c_7);
    double c_47=-(24*p1.z*p3.z);
    double c_48=2*c_7;
    double c_49=20*c_23*p3.y;
    double c_50=-(20*c_3*c_5);
    double c_51=8*c_40;
    double c_52=-(8*c_4*p1.z*p2.z);
    double c_53=-(120*p2.y*p3.y*c_7);
    double c_54=80*c_5*c_7;
    double c_55=-(16*p2.y*p3.y*p1.z*p3.z);
    double c_56=-(120*c_3*p2.z*p3.z);
    double c_57=160*c_26*p3.z;
    double c_58=-(12*c_4*c_8);
    double c_59=32*p1.z*p2.z*c_8;
    double c_60=8*c_44;
    double c_61=4*p2.y*p3.y;
    double c_62=10*c_7;
    double c_63=10*c_3;
    double c_64=12*p2.y*p3.y;
    double c_65=4*p2.y;
    double c_66=3*p3.y;
    double c_67=4*p2.z;
    double c_68=3*p3.z;
    double c_69=3*c_8;
    double c_70=3*c_5;
    double c_71=8*p2.z*p3.z;
    double c_72=2*p2.y;
    double c_73=c_72+p3.y;
    double c_74=p12_5;
    double c_75=p22_5;
    double c_76=p32_5;
    double c_77=10*p2.y*p3.y;
    double c_78=-(30*p1.z*p3.z);
    double c_79=-(60*p2.z*p3.z);
    double c_80=15*c_3;
    double c_81=2*p2.z*p3.z;
    double c_82=2*p2.z;
    double c_83=c_82+p3.z;
    double c_84=20*c_23;
    double c_85=3*c_7;
    double c_86=4*p2.z*p3.z;
    double c_87=p2.z+p3.z;
    double c_88=5*c_4;
    double c_89=10*c_5;
    double c_90=3*p2.z*p3.z;
    double c_91=5*c_37;
    double c_92=2*c_5;
    double c_93=2*c_8;
    double c_94=5*c_24;
    double c_95=3*p1.z*p2.z;
    double c_96=2*p1.z*p3.z;
    double c_97=c_92+c_95+c_48+c_96+c_81+c_8;
    double c_98=6*c_5;
    double c_99=c_67+p3.z;
    double c_100=3*p1.z*c_99;
    double c_101=c_98+c_62+c_86+c_8+c_100;
    double c_102=-(36*c_4*c_7);
    double c_103=32*p1.z*c_26;
    double c_104=48*c_5*p2.z*p3.z;
    double c_105=144*c_7*c_8;
    double c_106=-(6*p1.z*p3.z);
    double c_107=-c_5;
    double c_108=c_67+c_68;
    double c_109=-(p1.z*c_108);
    double c_110=5*c_7;
    double c_111=6*p2.z*p3.z;
    double c_112=c_110+c_111+c_69;
    double c_113=-(2*c_112);
    double c_114=6*c_7;
    double c_115=4*p1.z*p3.z;
    double c_116=-(2*c_7);
    double c_117=-(3*p2.z*p3.z);
    double c_118=10*c_8;
    double c_119=p21_5;
    double c_120=p31_5;
    double c_121=2*p3.z;
    double c_122=p2.z+c_121;
    double c_123=4*p1.z*c_122;
    double c_124=c_70+c_85+c_71+c_118+c_123;
    double c_125=8*p1.z*p2.z;
    double c_126=c_70+c_125+c_62+c_115+c_71+c_69;
    double c_127=5*c_41;
    double c_128=8*c_26*p3.z;
    double c_129=8*p2.z*c_27;
    double c_130=3*c_7*p3.z;
    double c_131=15*c_7;
    double c_132=5*p2.z*p3.z;
    double c_133=5*p2.z;
    double c_134=c_133+p3.z;
    double c_135=2*p1.z*c_134;
    double c_136=c_70+c_131+c_132+c_8+c_135;
    double c_137=2*p1.z*c_87;
    double c_138=c_5+c_48+c_90+c_93+c_137;
    double c_139=5*c_40;
    double c_140=3*p2.z;
    double c_141=c_140+p3.z;
    double c_142=3*p2.z*c_8;
    double c_143=p30_6;
    double c_144=5*c_143;
    double c_145=p11_6;
    double c_146=5*c_145;
    double c_147=p21_6;
    double c_148=20*c_23*c_24;
    double c_149=p31_6;
    double c_150=p11_5;
    double c_151=p2.y+c_39;
    double c_152=-(18*c_3*c_4*c_5);
    double c_153=16*p2.y*p3.y*c_40;
    double c_154=p12_6;
    double c_155=-(16*c_154);
    double c_156=-(72*p2.y*c_24*c_7);
    double c_157=24*c_4*c_5*c_7;
    double c_158=p22_6;
    double c_159=-(216*c_3*c_4*p2.z*p3.z);
    double c_160=96*p2.y*p3.y*c_5*p2.z*p3.z;
    double c_161=-(32*c_40*p2.z*p3.z);
    double c_162=96*c_4*c_26*p3.z;
    double c_163=-(72*c_23*p3.y*c_8);
    double c_164=24*c_3*c_5*c_8;
    double c_165=288*p2.y*p3.y*c_7*c_8;
    double c_166=-(48*c_5*c_7*c_8);
    double c_167=96*c_3*p2.z*c_27;
    double c_168=-(64*c_26*c_27);
    double c_169=p32_6;
    double c_170=6*p2.y*p3.y;
    double c_171=-(36*p1.z*p3.z);
    double c_172=-(36*p2.z*p3.z);
    double c_173=15*c_4;
    double c_174=15*c_5;
    double c_175=10*c_3*p3.y;
    double c_176=8*p1.z*c_87;
    double c_177=c_89+c_85+c_86+c_69+c_176;
    double c_178=p2.z+c_68;
    double c_179=5*c_36;
    double c_180=2*p1.z*p2.z;
    double c_181=3*p1.z*p3.z;
    double c_182=c_92+c_180+c_7+c_181+c_81+c_93;
    double c_183=15*c_40;
    double c_184=3*c_7*c_8;
    double c_185=5*c_44;
    double c_186=-(20*c_4*c_5);
    double c_187=-(20*c_4*c_7);
    double c_188=8*c_41;
    double c_189=-(120*c_4*p2.z*p3.z);
    double c_190=32*c_5*p2.z*p3.z;
    double c_191=32*p1.z*c_7*p3.z;
    double c_192=80*c_5*c_8;
    double c_193=80*c_7*c_8;
    double c_194=160*p2.z*c_27;
    double c_195=10*c_4;
    double c_196=-(6*p1.z*p2.z);
    double c_197=4*p3.z;
    double c_198=20*c_24;
    double c_199=-(8*p2.z*p3.z);
    double c_200=15*c_8;
    double c_201=5*p3.z;
    double c_202=p2.z+c_201;
    double c_203=2*p1.z*c_202;
    double c_204=c_70+c_7+c_132+c_200+c_203;
    double c_205=6*c_7*c_8;
    double c_206=6*c_8;
    double c_207=25*c_37;
    double c_208=9*c_7*c_8;
    double c_209=8*c_25*c_87;
    double c_210=c_85+c_86+c_69;
    double c_211=3*c_5*c_210;
    double c_212=2*c_26;
    double c_213=2*c_27;
    double c_214=c_212+c_130+c_142+c_213;
    double c_215=4*p1.z*c_214;
    double c_216=c_139+c_127+c_128+c_208+c_129+c_185+c_209+c_211+c_215;
    double c_217=p20_5;
    double c_218=c_65+p3.y;
    double c_219=-(72*p1.z*p2.z);
    double c_220=-(24*p2.z*p3.z);
    double c_221=3*p1.y*p2.y;
    double c_222=2*c_3;
    double c_223=2*p1.y*p3.y;
    double c_224=-(12*c_5);
    double c_225=-(18*p1.z*p2.z);
    double c_226=-(12*p1.z*p3.z);
    double c_227=4*p2.y*c_24;
    double c_228=-(12*c_3*c_5);
    double c_229=-(18*c_4*p1.z*p2.z);
    double c_230=-(12*c_3*c_7);
    double c_231=48*c_5*c_7;
    double c_232=-(36*p2.y*p3.y*p1.z*p3.z);
    double c_233=160*c_25*p3.z;
    double c_234=-(24*c_4*p2.z*p3.z);
    double c_235=-(24*p2.y*p3.y*c_8);
    double c_236=-(60*c_4*c_8);
    double c_237=72*p1.z*p2.z*c_8;
    double c_238=32*p2.z*c_27;
    double c_239=40*c_44;
    double c_240=6*c_2;
    double c_241=4*p3.y;
    double c_242=p2.y+c_241;
    double c_243=-(36*c_5);
    double c_244=-(60*c_8);
    double c_245=5*p1.z*c_122;
    double c_246=c_174+c_7+c_81+c_69+c_245;
    double c_247=-(10*c_5);
    double c_248=-c_7;
    double c_249=-(4*p1.z*c_178);
    double c_250=c_4+c_247+c_248+c_117+c_10+c_249;
    double c_251=15*c_35;
    double c_252=4*c_23*p3.y;
    double c_253=3*c_3*c_4;
    double c_254=-(24*p2.y*p3.y*c_5);
    double c_255=-(12*c_4*c_5);
    double c_256=120*c_40;
    double c_257=160*c_25*p2.z;
    double c_258=-(6*c_4*c_7);
    double c_259=40*c_41;
    double c_260=-(24*p2.y*p3.y*p2.z*p3.z);
    double c_261=96*c_5*p2.z*p3.z;
    double c_262=72*p1.z*c_7*p3.z;
    double c_263=32*c_26*p3.z;
    double c_264=-(6*c_3*c_8);
    double c_265=48*c_5*c_8;
    double c_266=24*c_7*c_8;
    double c_267=2*c_2;
    double c_268=2*c_4;
    double c_269=c_72+c_66;
    double c_270=5*p1.z*c_83;
    double c_271=c_174+c_85+c_81+c_8+c_270;
    double c_272=4*c_23;
    double c_273=4*p1.z*c_141;
    double c_274=c_89+c_114+c_90+c_8+c_273;
    double c_275=p20_6;
    double c_276=5*c_147;
    double c_277=5*c_149;
    double c_278=-(48*c_23*p3.y*p1.z*p2.z);
    double c_279=-(12*c_37*p1.z*p2.z);
    double c_280=96*c_3*c_25*p2.z;
    double c_281=-(90*c_36*c_7);
    double c_282=64*p2.y*p3.y*p1.z*c_26;
    double c_283=-(64*c_25*c_26);
    double c_284=120*c_3*c_41;
    double c_285=-(16*c_158);
    double c_286=-(12*c_36*p1.z*p3.z);
    double c_287=-(48*p2.y*c_24*p1.z*p3.z);
    double c_288=96*c_4*c_25*p3.z;
    double c_289=96*c_3*p1.z*c_7*p3.z;
    double c_290=-(32*p1.z*c_41*p3.z);
    double c_291=-(90*c_37*c_8);
    double c_292=96*c_4*p1.z*p2.z*c_8;
    double c_293=64*p2.y*p3.y*p1.z*c_27;
    double c_294=-(64*c_25*c_27);
    double c_295=120*c_4*c_44;
    double c_296=-(32*p1.z*p2.z*c_44);
    double c_297=-(16*c_169);
    double c_298=-(48*p1.z*p2.z);
    double c_299=-(60*c_7);
    double c_300=3*c_2;
    double c_301=-(18*c_5);
    double c_302=-(60*p1.z*p2.z);
    double c_303=-(90*c_7);
    double c_304=5*p2.y*p3.y;
    double c_305=p2.y+p3.y;
    double c_306=-(48*p2.y*p3.y*p1.z*p2.z);
    double c_307=-(24*c_4*p1.z*p2.z);
    double c_308=-(60*c_3*c_7);
    double c_309=-(24*c_3*p1.z*p3.z);
    double c_310=96*p1.z*c_7*p3.z;
    double c_311=96*p1.z*p2.z*c_8;
    double c_312=8*p2.y*p3.y;
    double c_313=-(12*p1.z*p2.z);
    double c_314=3*c_3*p3.y;
    double c_315=3*p2.y*c_4;
    double c_316=5*c_35;
    double c_317=15*c_37;
    double c_318=p2.y+c_66;
    double c_319=-(36*c_4*c_5);
    double c_320=40*c_40;
    double c_321=32*c_25*p2.z;
    double c_322=24*c_5*c_7;
    double c_323=-(120*c_4*p1.z*p3.z);
    double c_324=48*p1.z*c_7*p3.z;
    double c_325=-(180*c_4*c_8);
    double c_326=144*c_5*c_8;
    double c_327=160*p1.z*c_27;
    double c_328=120*c_44;
    double c_329=-(2*c_8);
    double c_330=-(2*p1.z*c_87);
    double c_331=c_4+c_107+c_116+c_117+c_329+c_330;
    double c_332=4*p1.z*c_178;
    double c_333=c_89+c_7+c_90+c_206+c_332;
    double c_334=10*c_24;
    double c_335=p2.z+c_197;
    double c_336=3*p1.z*c_335;
    double c_337=c_98+c_7+c_86+c_118+c_336;
    double c_338=15*c_36;
    double c_339=10*c_23*p3.y;
    double c_340=c_38+p3.y;
    double c_341=-(36*c_3*c_5);
    double c_342=-(6*c_4*c_5);
    double c_343=-(120*c_3*p1.z*p2.z);
    double c_344=-(12*c_4*p1.z*p2.z);
    double c_345=-(180*c_3*c_7);
    double c_346=-(12*c_4*c_7);
    double c_347=144*c_5*c_7;
    double c_348=160*p1.z*c_26;
    double c_349=120*c_41;
    double c_350=-(24*p2.y*p3.y*p1.z*p3.z);
    double c_351=32*c_25*p3.z;
    double c_352=72*c_5*p2.z*p3.z;
    double c_353=24*c_5*c_8;
    double c_354=48*p1.z*p2.z*c_8;
    double c_355=48*c_7*c_8;
    double c_356=-(2*c_274);
    double c_357=10*c_23;
    double c_358=-(2*c_101);
    return ((p3.y*(p1.z-p2.z)+p1.y*(p2.z-p3.z)+p2.y*(-p1.z+p3.z))*(5*p10_7+5*p20_7+5*c_275*p3.x+5*p10_6*(p2.x+p3.x)+c_20*
        p3.x*(c_1+c_2+5*p1.y*p2.y+c_80+c_223+c_77+c_12+c_6+c_13+c_303+c_226+c_79+c_15)+c_217*(c_1+c_2+21*c_3+c_170+c_4+p1.y*(6*
        p2.y+p3.y)+c_6+c_9-126*c_7+c_106+c_172+c_10)+p10_5*(5*c_11+5*p2.x*p3.x+c_1+21*c_2+6*p1.y*p2.y+c_3+6*p1.y*p3.y+p2.y*
        p3.y+c_4-126*c_5+c_9+c_14+c_171-6*p2.z*p3.z+c_10)+p10_4*(5*c_21+5*c_11*p3.x+p3.x*(c_1+c_16+c_3+c_17+c_12+5*p1.y*c_151+c_18+c_13+c_14-60*
        p1.z*p3.z+c_19+c_15)+p2.x*(c_1+c_16+c_28+c_17+c_4+5*p1.y*c_73+c_18+c_302+c_29+c_78+c_19+c_10))+p10_3*(5*c_20+5*c_21*
        p3.x+c_34+35*c_35+20*c_22*p2.y+10*c_2*c_3+4*p1.y*c_23+c_36+20*c_22*p3.y+10*c_2*p2.y*p3.y+4*p1.y*c_3*p3.y+c_23*p3.y+10*
        c_2*c_4+4*p1.y*p2.y*c_4+c_3*c_4+4*p1.y*c_24+p2.y*c_24+c_37-420*c_2*c_5-120*p1.y*p2.y*c_5+c_50-120*p1.y*p3.y*c_5-20*p2.y*
        p3.y*c_5+c_186+280*c_40-120*c_2*p1.z*p2.z-80*p1.y*p2.y*p1.z*p2.z-24*c_3*p1.z*p2.z-40*p1.y*p3.y*p1.z*p2.z-16*p2.y*
        p3.y*p1.z*p2.z+c_52+c_257-20*c_2*c_7-24*p1.y*p2.y*c_7+c_230-8*p1.y*p3.y*c_7-6*p2.y*p3.y*c_7-2*c_4*c_7+c_54+c_103+c_188-120*
        c_2*p1.z*p3.z-40*p1.y*p2.y*p1.z*p3.z-8*c_3*p1.z*p3.z-80*p1.y*p3.y*p1.z*p3.z+c_55+c_42+c_233-20*c_2*p2.z*p3.z-16*
        p1.y*p2.y*p2.z*p3.z-6*c_3*p2.z*p3.z-16*p1.y*p3.y*p2.z*p3.z-8*p2.y*p3.y*p2.z*p3.z-6*c_4*p2.z*p3.z+80*c_5*p2.z*
        p3.z+c_191+c_128-20*c_2*c_8-8*p1.y*p2.y*c_8-2*c_3*c_8-24*p1.y*p3.y*c_8-6*p2.y*p3.y*c_8+c_58+c_192+c_59+8*c_7*
        c_8+c_43+c_129+c_60+p2.x*p3.x*(c_1+c_30+c_28+c_61+c_12+8*p1.y*c_305+c_31+c_298+c_29-48*p1.z*p3.z+c_220+c_15)+c_11*(c_1+c_30+c_45+c_32+c_4+4*
        p1.y*c_340+c_31+c_219+c_46+c_47-18*p2.z*p3.z+c_10)+c_0*(c_30+c_3+c_32+4*p1.y*c_318+6*c_250))+c_11*p3.x*(c_34+c_35+c_338+c_49+18*
        c_3*c_4+12*p2.y*c_24+c_91+c_22*(c_38+c_39)+c_228-12*p2.y*p3.y*c_5+c_342+c_51-60*c_3*p1.z*p2.z+c_306+c_229+24*c_25*
        p2.z+c_345+c_53+c_102+c_231+80*p1.z*c_26+c_349+c_309+c_232+c_42+16*c_25*p3.z+c_56-144*p2.y*p3.y*p2.z*p3.z-72*c_4*p2.z*
        p3.z+c_104+c_310+c_57-36*c_3*c_8-72*p2.y*p3.y*c_8+c_236+c_353+c_237+c_105+c_43+96*p2.z*c_27+c_239+c_0*(c_2+c_221+c_45+4*p1.y*
        p3.y+c_64+c_195+c_6+c_225+c_46+c_47-72*p2.z*p3.z+c_244)+3*c_2*(c_222+c_17+c_4-2*c_97)+p1.y*(c_357+12*c_3*p3.y+9*p2.y*
        c_4-6*p2.y*(c_70+c_62+c_71+c_69+4*p1.z*c_83)+4*(c_24-3*p3.y*c_138)))+c_21*(c_34+c_35+35*c_36+c_49+10*c_3*c_4+c_227+c_37+c_22*
        c_218+c_50-8*p2.y*p3.y*c_5-2*c_4*c_5+c_51+c_343-40*p2.y*p3.y*p1.z*p2.z+c_52+c_321-420*c_3*c_7+c_53+c_187+c_54+c_348+280*c_41-20*
        c_3*p1.z*p3.z+c_55-6*c_4*p1.z*p3.z+8*c_25*p3.z+c_56-80*p2.y*p3.y*p2.z*p3.z+c_234+c_190+80*p1.z*c_7*p3.z+c_57-20*
        c_3*c_8+c_235+c_58+8*c_5*c_8+c_59+c_193+8*p1.z*c_27+c_238+c_60+c_2*(c_63+c_61+c_4+c_358)+c_0*(c_2+c_63+c_64+p1.y*(c_65+c_66)+6*
        (c_4+c_107+c_109+c_113))+p1.y*(c_84+c_175+c_24-2*p3.y*c_126+4*p2.y*(c_4-2*c_136)))+p2.x*(c_144+c_146+35*c_147+30*c_119*p3.y+25*
        c_36*c_4+c_148+15*c_3*c_37+10*p2.y*c_120+c_277+5*c_150*c_73-30*c_36*c_5-24*c_23*p3.y*c_5+c_152-12*p2.y*c_24*c_5-6*c_37*
        c_5+24*c_3*c_40+c_153+8*c_4*c_40+c_155-180*c_36*p1.z*p2.z-120*c_23*p3.y*p1.z*p2.z-72*c_3*c_4*p1.z*p2.z-36*p2.y*c_24*p1.z*
        p2.z+c_279+c_280+48*p2.y*p3.y*c_25*p2.z+16*c_4*c_25*p2.z-32*c_74*p2.z-630*c_36*c_7-360*c_23*p3.y*c_7-180*c_3*c_4*c_7+c_156-18*
        c_37*c_7+240*c_3*c_5*c_7+96*p2.y*p3.y*c_5*c_7+c_157-48*c_40*c_7+480*c_3*p1.z*c_26+160*p2.y*p3.y*p1.z*c_26+32*c_4*
        p1.z*c_26+c_283+840*c_3*c_41+240*p2.y*p3.y*c_41+40*c_4*c_41-80*c_5*c_41-96*p1.z*c_75-112*c_158-30*c_36*p1.z*p3.z-48*c_23*p3.y*
        p1.z*p3.z-54*c_3*c_4*p1.z*p3.z+c_287-30*c_37*p1.z*p3.z+24*c_3*c_25*p3.z+32*p2.y*p3.y*c_25*p3.z+24*c_4*c_25*p3.z-16*
        c_74*p3.z-180*c_36*p2.z*p3.z-240*c_23*p3.y*p2.z*p3.z+c_159-144*p2.y*c_24*p2.z*p3.z-60*c_37*p2.z*p3.z+96*c_3*c_5*p2.z*
        p3.z+c_160+48*c_4*c_5*p2.z*p3.z+c_161+240*c_3*p1.z*c_7*p3.z+192*p2.y*p3.y*p1.z*c_7*p3.z+72*c_4*p1.z*c_7*p3.z-48*c_25*
        c_7*p3.z+480*c_3*c_26*p3.z+320*p2.y*p3.y*c_26*p3.z+c_162-64*c_5*c_26*p3.z-80*p1.z*c_41*p3.z-96*c_75*p3.z-30*c_36*
        c_8+c_163-108*c_3*c_4*c_8-120*p2.y*c_24*c_8+c_291+c_164+48*p2.y*p3.y*c_5*c_8+48*c_4*c_5*c_8-16*c_40*c_8+96*c_3*p1.z*p2.z*c_8+144*
        p2.y*p3.y*p1.z*p2.z*c_8+c_292-32*c_25*p2.z*c_8+240*c_3*c_7*c_8+c_165+144*c_4*c_7*c_8+c_166-64*p1.z*c_26*c_8-80*c_41*c_8+24*
        c_3*p1.z*c_27+c_293+80*c_4*p1.z*c_27-16*c_25*c_27+c_167+192*p2.y*p3.y*p2.z*c_27+160*c_4*p2.z*c_27-32*c_5*p2.z*c_27-48*
        p1.z*c_7*c_27+c_168+24*c_3*c_44+80*p2.y*p3.y*c_44+c_295-16*c_5*c_44+c_296-48*c_7*c_44-16*p1.z*c_76-32*p2.z*c_76+c_297+c_33*
        (c_2+2*p1.y*p2.y+c_28+5*p1.y*p3.y+c_77+c_173+c_6+c_313+c_29+c_78+c_79-90*c_8)+c_35*(c_80+c_77+c_88-6*c_271)+c_22*(c_84+15*
        c_3*p3.y+c_94-6*p3.y*c_177+2*p2.y*(c_88-6*c_274))+c_2*(25*c_36+c_49+c_91-18*c_4*c_182+2*p2.y*(c_94-18*p3.y*c_97)+8*(c_183+c_127+4*
        c_26*p3.z+c_184+2*p2.z*c_27+c_44+10*c_25*c_83+6*c_5*(c_85+c_81+c_8)+3*p1.z*(4*c_26+c_130+2*p2.z*c_8+c_27))+3*c_3*
        (c_88-6*c_101))+c_0*(c_35+c_179+12*c_23*p3.y+c_317+c_22*c_269+c_255+c_51+c_307+16*c_25*p2.z+c_102+c_322+c_103+c_259-60*c_4*p1.z*
        p3.z+24*c_25*p3.z+c_189+c_104+c_262+96*c_26*p3.z+c_325+c_265+c_311+c_105+80*p1.z*c_27+c_194+c_328+3*c_2*(c_3+c_17+c_268-4*
        c_5-4*p1.z*p2.z+c_116+c_106-4*p2.z*p3.z-4*c_8)+6*c_3*(c_12+c_107+c_109+c_113)+4*p2.y*p3.y*(c_88-3*(c_5+c_95+c_114+c_115+12*
        p2.z*p3.z+c_118))+p1.y*(c_272+9*c_3*p3.y+c_334+12*p2.y*c_331-6*p3.y*c_124))+p1.y*(30*c_119+25*c_36*p3.y+5*c_120-6*c_24*
        c_124+3*c_3*(c_94-6*p3.y*c_126)+8*p3.y*c_216+4*c_23*(c_88-6*c_136)+2*p2.y*(c_91-18*c_4*c_138+8*(c_139+15*c_41+10*c_26*p3.z+c_205+3*
        p2.z*c_27+c_44+4*c_25*c_141+3*c_5*(c_114+c_90+c_8)+2*p1.z*(10*c_26+6*c_7*p3.z+c_142+c_27)))))+p3.x*(c_144+c_146+c_276+10*
        c_119*p3.y+15*c_36*c_4+c_148+25*c_3*c_37+30*p2.y*c_120+35*c_149+5*c_150*c_151-6*c_36*c_5-12*c_23*p3.y*c_5+c_152-24*p2.y*
        c_24*c_5-30*c_37*c_5+8*c_3*c_40+c_153+24*c_4*c_40+c_155-30*c_36*p1.z*p2.z+c_278-54*c_3*c_4*p1.z*p2.z-48*p2.y*c_24*p1.z*p2.z-30*
        c_37*p1.z*p2.z+24*c_3*c_25*p2.z+32*p2.y*p3.y*c_25*p2.z+24*c_4*c_25*p2.z-16*c_74*p2.z+c_281-120*c_23*p3.y*c_7-108*
        c_3*c_4*c_7+c_156-30*c_37*c_7+48*c_3*c_5*c_7+48*p2.y*p3.y*c_5*c_7+c_157-16*c_40*c_7+80*c_3*p1.z*c_26+c_282+24*c_4*p1.z*c_26-16*
        c_25*c_26+c_284+80*p2.y*p3.y*c_41+24*c_4*c_41-16*c_5*c_41-16*p1.z*c_75+c_285+c_286-36*c_23*p3.y*p1.z*p3.z-72*c_3*c_4*
        p1.z*p3.z-120*p2.y*c_24*p1.z*p3.z-180*c_37*p1.z*p3.z+16*c_3*c_25*p3.z+48*p2.y*p3.y*c_25*p3.z+c_288-32*c_74*p3.z-60*c_36*
        p2.z*p3.z-144*c_23*p3.y*p2.z*p3.z+c_159-240*p2.y*c_24*p2.z*p3.z-180*c_37*p2.z*p3.z+48*c_3*c_5*p2.z*p3.z+c_160+96*
        c_4*c_5*p2.z*p3.z+c_161+c_289+144*p2.y*p3.y*p1.z*c_7*p3.z+96*c_4*p1.z*c_7*p3.z-32*c_25*c_7*p3.z+160*c_3*c_26*p3.z+192*
        p2.y*p3.y*c_26*p3.z+c_162-32*c_5*c_26*p3.z+c_290-32*c_75*p3.z-18*c_36*c_8+c_163-180*c_3*c_4*c_8-360*p2.y*c_24*c_8-630*c_37*
        c_8+c_164+96*p2.y*p3.y*c_5*c_8+240*c_4*c_5*c_8-48*c_40*c_8+72*c_3*p1.z*p2.z*c_8+192*p2.y*p3.y*p1.z*p2.z*c_8+240*c_4*p1.z*
        p2.z*c_8-48*c_25*p2.z*c_8+144*c_3*c_7*c_8+c_165+240*c_4*c_7*c_8+c_166-48*p1.z*c_26*c_8-48*c_41*c_8+32*c_3*p1.z*c_27+160*
        p2.y*p3.y*p1.z*c_27+480*c_4*p1.z*c_27+c_294+c_167+320*p2.y*p3.y*p2.z*c_27+480*c_4*p2.z*c_27-64*c_5*p2.z*c_27-64*p1.z*
        c_7*c_27+c_168+40*c_3*c_44+240*p2.y*p3.y*c_44+840*c_4*c_44-80*c_5*c_44-80*p1.z*p2.z*c_44-80*c_7*c_44-96*p1.z*c_76-96*p2.z*
        c_76-112*c_169+c_33*(c_2+c_3+c_170+21*c_4+p1.y*(p2.y+6*p3.y)+c_6+c_196+c_14+c_171+c_172-126*c_8)+c_35*(5*c_3+c_77+c_173-6*
        c_246)+c_22*(5*c_23+c_175+15*p2.y*c_4+c_198-6*p2.y*c_177-12*p3.y*c_333)+c_2*(c_179+c_339+c_207-18*c_4*c_337+3*c_3*(c_88-6*c_97)+4*
        p2.y*(c_94-9*p3.y*c_182)+8*(c_183+c_41+2*c_26*p3.z+c_184+4*p2.z*c_27+c_185+10*c_25*c_122+6*c_5*(c_7+c_81+c_69)+3*p1.z*(c_26+2*
        c_7*p3.z+c_142+4*c_27)))+c_0*(c_35+c_36+c_252+20*p2.y*c_24+35*c_37+c_22*c_242+c_186+c_51-20*c_4*p1.z*p2.z+8*c_25*
        p2.z+c_187+8*c_5*c_7+8*p1.z*c_26+c_188+c_323+c_351+c_189+c_190+c_191+c_263-420*c_4*c_8+c_192+80*p1.z*p2.z*c_8+c_193+c_327+c_194+280*
        c_44+c_2*(c_3+c_61+c_195+c_224+c_196+c_116+c_47+c_199-20*c_8)-8*p2.y*p3.y*(c_5+c_180+c_85+5*p1.z*p3.z+10*p2.z*p3.z+c_200)+2*
        c_3*(c_88+c_107-p1.z*(c_140+c_197)-2*(c_85+c_111+5*c_8))+p1.y*(c_23+4*c_3*p3.y+c_198+2*p2.y*(c_88-3*c_5-3*c_7+c_199-10*
        c_8-4*p1.z*c_122)-8*p3.y*c_204))+p1.y*(5*c_119+10*c_36*p3.y+30*c_120-24*c_24*c_204+3*c_23*(c_88-2*c_126)+16*p3.y*(c_139+c_41+3*
        c_26*p3.z+c_205+10*p2.z*c_27+15*c_44+4*c_25*c_178+3*c_5*(c_7+c_90+c_206)+2*p1.z*(c_26+c_130+6*p2.z*c_8+10*c_27))+4*c_3*
        (c_94-9*p3.y*c_138)+p2.y*(c_207-18*c_4*c_124+8*c_216)))+p10_2*(5*c_217+5*c_20*p3.x+c_21*(c_1+c_240+c_63+c_61+c_4+3*p1.y*
        c_218+c_243+c_219+c_299-18*p1.z*p3.z+c_220+c_10)+c_11*p3.x*(c_1+3*(c_267+c_221+c_222+c_223+c_17+c_4+c_224+c_225-12*c_7+c_226+c_19+c_10))+p3.x*
        (c_34+c_251+c_36+2*c_23*p3.y+c_253+c_227+c_91+10*c_22*c_151+c_228+c_254+c_319+c_256-18*c_3*p1.z*p2.z-24*p2.y*
        p3.y*p1.z*p2.z+c_229+80*c_25*p2.z+c_230-12*p2.y*p3.y*c_7+c_258+c_231+24*p1.z*c_26+c_188-12*c_3*p1.z*p3.z+c_232-72*c_4*
        p1.z*p3.z+c_233-12*c_3*p2.z*p3.z+c_260+c_234+c_261+c_324+16*c_26*p3.z+c_264+c_235+c_236+c_326+c_237+c_266+96*p1.z*c_27+c_238+c_239+c_0*
        (c_240+c_3+c_61+c_195+3*p1.y*c_242+c_243+c_225+c_14-72*p1.z*p3.z+c_220+c_244)+6*c_2*(c_3+c_17+c_12-2*c_246)+3*p1.y*
        (c_23+2*c_3*p3.y+c_315-2*p2.y*c_177+4*p3.y*c_250))+p2.x*(c_34+c_251+c_179+c_252+c_253+2*p2.y*c_24+c_37+10*c_22*
        c_73+c_341+c_254+c_255+c_256-72*c_3*p1.z*p2.z-36*p2.y*p3.y*p1.z*p2.z+c_344+c_257+c_308-24*p2.y*p3.y*c_7+c_258+c_347+96*p1.z*
        c_26+c_259-18*c_3*p1.z*p3.z+c_350-18*c_4*p1.z*p3.z+80*c_25*p3.z-24*c_3*p2.z*p3.z+c_260-12*c_4*p2.z*p3.z+c_261+c_262+c_263+c_264-12*
        p2.y*p3.y*c_8+c_58+c_265+c_354+c_266+24*p1.z*c_27+16*p2.z*c_27+c_60+3*c_0*(c_267+c_3+c_17+c_268+p1.y*c_269-6*c_182)+6*
        c_2*(c_28+c_17+c_4-2*c_271)+3*p1.y*(c_272+c_314+c_24-2*p3.y*c_177+2*p2.y*(c_4+c_356))))+p1.x*(5*c_275+5*c_217*p3.x+c_144+35*
        c_145+30*c_150*p2.y+25*c_35*c_3+20*c_22*c_23+15*c_2*c_36+10*p1.y*c_119+c_276+30*c_150*p3.y+25*c_35*p2.y*p3.y+20*c_22*c_3*
        p3.y+15*c_2*c_23*p3.y+10*p1.y*c_36*p3.y+5*c_119*p3.y+25*c_35*c_4+20*c_22*p2.y*c_4+15*c_2*c_3*c_4+10*p1.y*c_23*c_4+5*c_36*
        c_4+20*c_22*c_24+15*c_2*p2.y*c_24+10*p1.y*c_3*c_24+5*c_23*c_24+15*c_2*c_37+10*p1.y*p2.y*c_37+5*c_3*c_37+10*p1.y*c_120+5*
        p2.y*c_120+c_277-630*c_35*c_5-360*c_22*p2.y*c_5-180*c_2*c_3*c_5-72*p1.y*c_23*c_5-18*c_36*c_5-360*c_22*p3.y*c_5-180*c_2*p2.y*
        p3.y*c_5-72*p1.y*c_3*p3.y*c_5-18*c_23*p3.y*c_5-180*c_2*c_4*c_5-72*p1.y*p2.y*c_4*c_5+c_152-72*p1.y*c_24*c_5-18*p2.y*c_24*
        c_5-18*c_37*c_5+840*c_2*c_40+240*p1.y*p2.y*c_40+40*c_3*c_40+240*p1.y*p3.y*c_40+40*p2.y*p3.y*c_40+40*c_4*c_40-112*c_154-180*
        c_35*p1.z*p2.z-240*c_22*p2.y*p1.z*p2.z-216*c_2*c_3*p1.z*p2.z-144*p1.y*c_23*p1.z*p2.z-60*c_36*p1.z*p2.z-120*c_22*
        p3.y*p1.z*p2.z-144*c_2*p2.y*p3.y*p1.z*p2.z-108*p1.y*c_3*p3.y*p1.z*p2.z+c_278-72*c_2*c_4*p1.z*p2.z-72*p1.y*p2.y*c_4*
        p1.z*p2.z-36*c_3*c_4*p1.z*p2.z-36*p1.y*c_24*p1.z*p2.z-24*p2.y*c_24*p1.z*p2.z+c_279+480*c_2*c_25*p2.z+320*p1.y*p2.y*
        c_25*p2.z+c_280+160*p1.y*p3.y*c_25*p2.z+64*p2.y*p3.y*c_25*p2.z+32*c_4*c_25*p2.z-96*c_74*p2.z-30*c_35*c_7-72*c_22*p2.y*
        c_7-108*c_2*c_3*c_7-120*p1.y*c_23*c_7+c_281-24*c_22*p3.y*c_7-54*c_2*p2.y*p3.y*c_7-72*p1.y*c_3*p3.y*c_7-60*c_23*p3.y*c_7-18*
        c_2*c_4*c_7-36*p1.y*p2.y*c_4*c_7-36*c_3*c_4*c_7-12*p1.y*c_24*c_7-18*p2.y*c_24*c_7-6*c_37*c_7+240*c_2*c_5*c_7+288*p1.y*
        p2.y*c_5*c_7+144*c_3*c_5*c_7+96*p1.y*p3.y*c_5*c_7+72*p2.y*p3.y*c_5*c_7+c_157-80*c_40*c_7+96*c_2*p1.z*c_26+192*p1.y*p2.y*
        p1.z*c_26+160*c_3*p1.z*c_26+48*p1.y*p3.y*p1.z*c_26+c_282+16*c_4*p1.z*c_26+c_283+24*c_2*c_41+80*p1.y*p2.y*c_41+c_284+16*
        p1.y*p3.y*c_41+40*p2.y*p3.y*c_41+8*c_4*c_41-48*c_5*c_41-32*p1.z*c_75+c_285-180*c_35*p1.z*p3.z-120*c_22*p2.y*p1.z*p3.z-72*
        c_2*c_3*p1.z*p3.z-36*p1.y*c_23*p1.z*p3.z+c_286-240*c_22*p3.y*p1.z*p3.z-144*c_2*p2.y*p3.y*p1.z*p3.z-72*p1.y*c_3*
        p3.y*p1.z*p3.z-24*c_23*p3.y*p1.z*p3.z-216*c_2*c_4*p1.z*p3.z-108*p1.y*p2.y*c_4*p1.z*p3.z-36*c_3*c_4*p1.z*p3.z-144*p1.y*
        c_24*p1.z*p3.z+c_287-60*c_37*p1.z*p3.z+480*c_2*c_25*p3.z+160*p1.y*p2.y*c_25*p3.z+32*c_3*c_25*p3.z+320*p1.y*p3.y*c_25*
        p3.z+64*p2.y*p3.y*c_25*p3.z+c_288-96*c_74*p3.z-30*c_35*p2.z*p3.z-48*c_22*p2.y*p2.z*p3.z-54*c_2*c_3*p2.z*p3.z-48*
        p1.y*c_23*p2.z*p3.z-30*c_36*p2.z*p3.z-48*c_22*p3.y*p2.z*p3.z-72*c_2*p2.y*p3.y*p2.z*p3.z-72*p1.y*c_3*p3.y*p2.z*
        p3.z-48*c_23*p3.y*p2.z*p3.z-54*c_2*c_4*p2.z*p3.z-72*p1.y*p2.y*c_4*p2.z*p3.z-54*c_3*c_4*p2.z*p3.z-48*p1.y*c_24*p2.z*
        p3.z-48*p2.y*c_24*p2.z*p3.z-30*c_37*p2.z*p3.z+240*c_2*c_5*p2.z*p3.z+192*p1.y*p2.y*c_5*p2.z*p3.z+72*c_3*c_5*p2.z*p3.z+192*
        p1.y*p3.y*c_5*p2.z*p3.z+c_160+72*c_4*c_5*p2.z*p3.z-80*c_40*p2.z*p3.z+96*c_2*p1.z*c_7*p3.z+144*p1.y*p2.y*p1.z*
        c_7*p3.z+c_289+96*p1.y*p3.y*p1.z*c_7*p3.z+96*p2.y*p3.y*p1.z*c_7*p3.z+48*c_4*p1.z*c_7*p3.z-64*c_25*c_7*p3.z+24*c_2*c_26*
        p3.z+64*p1.y*p2.y*c_26*p3.z+80*c_3*c_26*p3.z+32*p1.y*p3.y*c_26*p3.z+64*p2.y*p3.y*c_26*p3.z+24*c_4*c_26*p3.z-48*c_5*
        c_26*p3.z+c_290-16*c_75*p3.z-30*c_35*c_8-24*c_22*p2.y*c_8-18*c_2*c_3*c_8-12*p1.y*c_23*c_8-6*c_36*c_8-72*c_22*p3.y*c_8-54*
        c_2*p2.y*p3.y*c_8-36*p1.y*c_3*p3.y*c_8-18*c_23*p3.y*c_8-108*c_2*c_4*c_8-72*p1.y*p2.y*c_4*c_8-36*c_3*c_4*c_8-120*p1.y*c_24*
        c_8-60*p2.y*c_24*c_8+c_291+240*c_2*c_5*c_8+96*p1.y*p2.y*c_5*c_8+c_164+288*p1.y*p3.y*c_5*c_8+72*p2.y*p3.y*c_5*c_8+144*c_4*
        c_5*c_8-80*c_40*c_8+96*c_2*p1.z*p2.z*c_8+96*p1.y*p2.y*p1.z*p2.z*c_8+48*c_3*p1.z*p2.z*c_8+144*p1.y*p3.y*p1.z*p2.z*
        c_8+96*p2.y*p3.y*p1.z*p2.z*c_8+c_292-64*c_25*p2.z*c_8+24*c_2*c_7*c_8+48*p1.y*p2.y*c_7*c_8+48*c_3*c_7*c_8+48*p1.y*p3.y*
        c_7*c_8+72*p2.y*p3.y*c_7*c_8+48*c_4*c_7*c_8+c_166-32*p1.z*c_26*c_8-16*c_41*c_8+96*c_2*p1.z*c_27+48*p1.y*p2.y*p1.z*c_27+16*
        c_3*p1.z*c_27+192*p1.y*p3.y*p1.z*c_27+c_293+160*c_4*p1.z*c_27+c_294+24*c_2*p2.z*c_27+32*p1.y*p2.y*p2.z*c_27+24*c_3*p2.z*
        c_27+64*p1.y*p3.y*p2.z*c_27+64*p2.y*p3.y*p2.z*c_27+80*c_4*p2.z*c_27-48*c_5*p2.z*c_27-32*p1.z*c_7*c_27-16*c_26*c_27+24*
        c_2*c_44+16*p1.y*p2.y*c_44+8*c_3*c_44+80*p1.y*p3.y*c_44+40*p2.y*p3.y*c_44+c_295-48*c_5*c_44+c_296-16*c_7*c_44-32*p1.z*
        c_76-16*p2.z*c_76+c_297+c_21*p3.x*(c_1+c_300+c_63+c_312+c_12+4*p1.y*c_73+c_301+c_298+c_299+c_47-48*p2.z*p3.z+c_15)+c_20*
        (c_1+c_300+c_80+c_304+c_4+2*p1.y*(5*p2.y+p3.y)+c_301+c_302+c_303+c_226-30*p2.z*p3.z+c_10)+c_33*(c_300+c_3+c_304+c_173+2*p1.y*
        (p2.y+5*p3.y)-6*c_204)+p2.x*p3.x*(c_34+c_316+c_179+8*c_23*p3.y+9*c_3*c_4+8*p2.y*c_24+c_91+8*c_22*c_305-18*c_3*c_5+c_254-18*
        c_4*c_5+c_320-48*c_3*p1.z*p2.z+c_306+c_307+64*c_25*p2.z+c_308-48*p2.y*p3.y*c_7-18*c_4*c_7+72*c_5*c_7+64*p1.z*c_26+c_259+c_309-48*
        p2.y*p3.y*p1.z*p3.z-48*c_4*p1.z*p3.z+64*c_25*p3.z-48*c_3*p2.z*p3.z-72*p2.y*p3.y*p2.z*p3.z-48*c_4*p2.z*
        p3.z+c_261+c_310+64*c_26*p3.z-18*c_3*c_8-48*p2.y*p3.y*c_8+c_236+72*c_5*c_8+c_311+72*c_7*c_8+64*p1.z*c_27+64*p2.z*c_27+c_239+c_0*
        (c_300+c_28+c_312+4*p1.y*c_151+2*(c_88-9*c_5+c_313-9*c_7+c_47+c_220-30*c_8))+4*p1.y*(2*c_23+c_314+c_315+2*c_24-6*p2.y*c_97-6*
        p3.y*c_182)+3*c_2*(c_28+c_61+c_12-2*c_177))+c_0*(c_316+c_36+3*c_23*p3.y+10*p2.y*c_24+c_317+4*c_22*c_318+c_319+c_320+c_307+c_321+c_346+c_322+16*
        p1.z*c_26+c_188+c_323+96*c_25*p3.z-60*c_4*p2.z*p3.z+c_352+c_324+24*c_26*p3.z+c_325+c_326+c_311+c_355+c_327+80*
        p2.z*c_27+c_328+6*c_3*c_331-6*p2.y*p3.y*c_124+3*c_2*(c_3+c_32+6*c_4-2*c_333)+2*p1.y*(c_23+c_314+c_334+6*p2.y*(c_4-2*
        c_5-2*p1.z*p2.z+c_248-3*p1.z*p3.z-2*p2.z*p3.z+c_329)-6*p3.y*c_337))+c_11*(c_34+c_316+c_338+c_339+6*c_3*c_4+3*p2.y*
        c_24+c_37+4*c_22*c_340+c_341-18*p2.y*p3.y*c_5+c_342+c_320+c_343+c_306+c_344+96*c_25*p2.z+c_345-60*p2.y*p3.y*
        c_7+c_346+c_347+c_348+c_349+c_309+c_350-12*c_4*p1.z*p3.z+c_351-60*c_3*p2.z*p3.z-48*p2.y*p3.y*p2.z*p3.z-18*c_4*p2.z*p3.z+c_352+c_310+80*c_26*
        p3.z-12*c_3*c_8-18*p2.y*p3.y*c_8+c_58+c_353+c_354+c_355+16*p1.z*c_27+24*p2.z*c_27+c_60+3*c_0*(c_2+c_222+c_32+c_268+2*p1.y*
        c_305-6*c_138)+3*c_2*(c_45+c_32+c_4+c_356)+2*p1.y*(c_357+6*c_3*p3.y+c_24-6*p3.y*c_97+3*p2.y*(c_4+c_358))))))/double(8064);
}

double trig::c61() const{
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p21_4=p2.y*p21_3;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p31_4=p3.y*p31_3;
    double p12_2=p1.z*p1.z;
    double p12_3=p1.z*p12_2;
    double p12_4=p1.z*p12_3;
    double p12_5=p1.z*p12_4;
    double p22_2=p2.z*p2.z;
    double p22_3=p2.z*p22_2;
    double p22_4=p2.z*p22_3;
    double p22_5=p2.z*p22_4;
    double p32_2=p3.z*p3.z;
    double p32_3=p3.z*p32_2;
    double p32_4=p3.z*p32_3;
    double p32_5=p3.z*p32_4;
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p11_4=p1.y*p11_3;
    double p30_2=p3.x*p3.x;
    double p30_3=p3.x*p30_2;
    double p30_4=p3.x*p30_3;
    double p20_2=p2.x*p2.x;
    double p20_3=p2.x*p20_2;
    double p20_4=p2.x*p20_3;
    double p20_5=p2.x*p20_4;
    double p20_6=p2.x*p20_5;
    double p10_2=p1.x*p1.x;
    double p10_3=p1.x*p10_2;
    double p10_4=p1.x*p10_3;
    double p10_5=p1.x*p10_4;
    double p10_6=p1.x*p10_5;
    double c_0=6*p1.z;
    double c_1=2*p3.z;
    double c_2=p21_2;
    double c_3=p31_2;
    double c_4=p12_2;
    double c_5=p22_2;
    double c_6=p32_2;
    double c_7=6*p2.z;
    double c_8=2*p1.z;
    double c_9=5*p2.z;
    double c_10=p11_2;
    double c_11=5*p2.y*p3.y*p1.z;
    double c_12=p12_3;
    double c_13=p22_3;
    double c_14=3*c_3*p3.z;
    double c_15=-(30*p1.z*p2.z*p3.z);
    double c_16=p32_3;
    double c_17=-(6*c_16);
    double c_18=p30_2;
    double c_19=5*p1.z;
    double c_20=3*p3.z;
    double c_21=-(6*c_12);
    double c_22=3*p1.z;
    double c_23=p2.z+p3.z;
    double c_24=p20_3;
    double c_25=4*p2.z;
    double c_26=p20_2;
    double c_27=4*p1.z;
    double c_28=3*p2.z;
    double c_29=8*p2.y*p3.y*p1.z;
    double c_30=-(48*p1.z*p2.z*p3.z);
    double c_31=2*p2.z;
    double c_32=c_0+c_31+p3.z;
    double c_33=c_19+c_28+p3.z;
    double c_34=-(120*c_12);
    double c_35=3*c_2*p2.z;
    double c_36=-(6*c_13);
    double c_37=12*c_3*p3.z;
    double c_38=-(24*c_16);
    double c_39=c_0+p2.z+c_1;
    double c_40=c_19+p2.z+c_20;
    double c_41=p21_4;
    double c_42=p21_3;
    double c_43=p31_3;
    double c_44=p31_4;
    double c_45=p12_4;
    double c_46=p22_4;
    double c_47=p32_4;
    double c_48=c_27+c_31+c_20;
    double c_49=4*p3.z;
    double c_50=c_27+p2.z+c_49;
    double c_51=10*c_16;
    double c_52=5*p3.z;
    double c_53=4*c_12;
    double c_54=c_22+p2.z+c_52;
    double c_55=6*p3.z;
    double c_56=7*p3.z;
    double c_57=p1.z+p2.z+c_56;
    double c_58=c_8+c_31+c_52;
    double c_59=c_8+p2.z+c_55;
    double c_60=p11_4;
    double c_61=p11_3;
    double c_62=3*c_42*p3.y*p1.z;
    double c_63=p12_5;
    double c_64=5*c_41*p2.z;
    double c_65=-(12*c_3*c_4*p2.z);
    double c_66=-(18*p2.y*p3.y*p1.z*c_5);
    double c_67=-(20*c_2*c_13);
    double c_68=p22_5;
    double c_69=8*c_68;
    double c_70=-(24*p2.y*p3.y*c_4*p3.z);
    double c_71=-(18*c_2*p1.z*p2.z*p3.z);
    double c_72=24*p1.z*c_13*p3.z;
    double c_73=48*c_4*p2.z*c_6;
    double c_74=p32_5;
    double c_75=p20_4;
    double c_76=c_22+c_9+p3.z;
    double c_77=c_22+c_25+c_1;
    double c_78=p30_4;
    double c_79=c_3*p1.z;
    double c_80=4*p2.y*p3.y*p2.z;
    double c_81=c_3*p2.z;
    double c_82=2*c_2*p3.z;
    double c_83=2*p2.y*p3.y*p3.z;
    double c_84=-(12*c_4*p3.z);
    double c_85=-(12*c_5*p3.z);
    double c_86=-(6*p1.z*c_6);
    double c_87=-(6*p2.z*c_6);
    double c_88=p1.z+p2.z+p3.z;
    double c_89=c_27+c_25+p3.z;
    double c_90=c_27+c_28+c_1;
    double c_91=c_22+c_31+c_49;
    double c_92=p2.y*c_48;
    double c_93=3*p3.y*c_50;
    double c_94=c_92+c_93;
    double c_95=10*c_12;
    double c_96=3*c_5*p3.z;
    double c_97=6*p2.z*c_6;
    double c_98=p2.z+c_20;
    double c_99=6*c_4*c_98;
    double c_100=3*p2.z*p3.z;
    double c_101=6*c_6;
    double c_102=c_5+c_100+c_101;
    double c_103=3*p1.z*c_102;
    double c_104=3*c_3*p1.z;
    double c_105=-(20*c_12);
    double c_106=2*c_3*p2.z;
    double c_107=-(24*c_4*p2.z);
    double c_108=-(18*p1.z*c_6);
    double c_109=-(12*p2.z*c_6);
    double c_110=8*p2.y*p1.z;
    double c_111=6*p3.y*p3.z;
    double c_112=2*c_23;
    double c_113=c_19+c_112;
    double c_114=8*c_63;
    double c_115=-(24*p2.y*p3.y*c_4*p2.z);
    double c_116=-(12*c_2*c_4*p3.z);
    double c_117=48*c_4*c_5*p3.z;
    double c_118=p1.z+c_31+c_55;
    double c_119=8*p3.y*p1.z;
    double c_120=6*p2.y*p2.z;
    double c_121=4*p3.y*p2.z;
    double c_122=4*p2.y*p3.z;
    double c_123=c_110+c_119+c_120+c_121+c_122+c_111;
    double c_124=4*c_13;
    double c_125=4*p2.z*p3.z;
    double c_126=p1.z+c_28+c_52;
    double c_127=4*c_23;
    double c_128=p1.z+c_127;
    double c_129=3*c_5;
    double c_130=10*c_6;
    double c_131=c_8+c_9+c_1;
    double c_132=c_8+c_25+c_20;
    double c_133=2*p2.z*p3.z;
    double c_134=2*c_6;
    double c_135=c_5+c_133+c_134;
    double c_136=c_8+c_28+c_49;
    double c_137=4*c_16;
    double c_138=6*c_2*c_3*p1.z;
    double c_139=3*p2.y*c_43*p1.z;
    double c_140=-(6*p2.y*p3.y*c_12);
    double c_141=-(12*c_3*p1.z*c_5);
    double c_142=5*c_44*p3.z;
    double c_143=-(48*p2.y*p3.y*p1.z*p2.z*p3.z);
    double c_144=-(18*c_3*p1.z*p2.z*p3.z);
    double c_145=24*c_12*p2.z*p3.z;
    double c_146=-(12*c_2*p1.z*c_6);
    double c_147=-(18*p2.y*p3.y*p1.z*c_6);
    double c_148=48*p1.z*c_5*c_6;
    double c_149=-(20*c_3*c_16);
    double c_150=24*p1.z*p2.z*c_16;
    double c_151=8*c_74;
    double c_152=10*c_13;
    double c_153=6*c_5*p3.z;
    double c_154=p1.z+c_9+c_20;
    double c_155=6*c_5;
    double c_156=9*c_5*p3.z;
    double c_157=9*p2.z*c_6;
    double c_158=5*c_16;
    double c_159=c_8+c_7+p3.z;
    double c_160=12*c_5*p3.z;
    double c_161=9*p2.z;
    double c_162=c_161+c_55;
    double c_163=c_4*c_162;
    double c_164=2*c_5;
    double c_165=c_164+c_133+c_6;
    double c_166=6*p1.z*c_165;
    double c_167=c_53+c_152+c_160+c_157+c_137+c_163+c_166;
    double c_168=p20_5;
    double c_169=60*c_2*p2.z;
    double c_170=-(120*c_13);
    double c_171=2*c_3*p1.z;
    double c_172=3*c_3*p2.z;
    double c_173=-(24*p1.z*c_5);
    double c_174=-(20*c_13);
    double c_175=4*c_3*p3.z;
    double c_176=-(24*p1.z*p2.z*p3.z);
    double c_177=-(12*p1.z*c_6);
    double c_178=-(18*p2.z*c_6);
    double c_179=-(8*c_16);
    double c_180=8*c_42*p3.y*p1.z;
    double c_181=30*c_41*p2.z;
    double c_182=-(48*p2.y*p3.y*p1.z*c_5);
    double c_183=-(120*c_2*c_13);
    double c_184=48*c_68;
    double c_185=-(48*c_2*p1.z*p2.z*p3.z);
    double c_186=64*p1.z*c_13*p3.z;
    double c_187=5*p3.y*p1.z;
    double c_188=2*p3.y*c_23;
    double c_189=2*p2.y*c_33;
    double c_190=c_187+c_188+c_189;
    double c_191=12*p2.z*c_6;
    double c_192=9*p3.z;
    double c_193=c_7+c_192;
    double c_194=c_4*c_193;
    double c_195=6*p1.z*c_135;
    double c_196=3*p2.z*c_6;
    double c_197=c_28+p3.z;
    double c_198=6*c_4*c_197;
    double c_199=c_155+c_100+c_6;
    double c_200=3*p1.z*c_199;
    double c_201=c_95+c_152+c_153+c_196+c_16+c_198+c_200;
    double c_202=12*c_4*c_23;
    double c_203=3*c_6;
    double c_204=c_129+c_125+c_203;
    double c_205=3*p1.z*c_204;
    double c_206=c_95+c_124+c_153+c_97+c_137+c_202+c_205;
    double c_207=8*p2.y*c_43*p1.z;
    double c_208=-(16*p2.y*p3.y*c_12);
    double c_209=48*c_63;
    double c_210=30*c_44*p3.z;
    double c_211=-(48*c_3*p1.z*p2.z*p3.z);
    double c_212=64*c_12*p2.z*p3.z;
    double c_213=-(48*p2.y*p3.y*p1.z*c_6);
    double c_214=-(120*c_3*c_16);
    double c_215=64*p1.z*p2.z*c_16;
    double c_216=48*c_74;
    double c_217=5*p2.y*p1.z;
    double c_218=2*p2.y*c_23;
    double c_219=2*p3.y*c_40;
    double c_220=c_217+c_218+c_219;
    double c_221=20*c_12;
    double c_222=p2.z+c_1;
    double c_223=8*p3.z;
    double c_224=4*c_5*p3.z;
    double c_225=10*p2.z*c_6;
    double c_226=20*c_16;
    double c_227=p2.z+c_49;
    double c_228=3*c_4*c_227;
    double c_229=c_5+c_125+c_130;
    double c_230=2*p1.z*c_229;
    double c_231=c_53+c_13+c_224+c_225+c_226+c_228+c_230;
    double c_232=-(10*c_16);
    double c_233=3*c_3*c_91;
    double c_234=-(2*c_206);
    return ((p3.y*(p1.z-p2.z)+p1.y*(p2.z-p3.z)+p2.y*(-p1.z+p3.z))*(5*p10_6*(7*p1.z+p2.z+p3.z)+5*p20_6*(p1.z+7*p2.z+p3.z)+5*
        c_168*p3.x*(p1.z+c_7+c_1)+5*p10_5*(p2.x*c_32+p3.x*c_39)+c_75*(15*c_2*p1.z+c_11+c_79+c_21+105*c_2*p2.z+30*p2.y*
        p3.y*p2.z+5*c_3*p2.z-30*c_4*p2.z-90*p1.z*c_5-210*c_13+15*c_2*p3.z+10*p2.y*p3.y*p3.z+c_14-6*c_4*p3.z+c_15-90*c_5*
        p3.z+c_86-30*p2.z*c_6+c_17+c_10*c_76+5*p1.y*p2.y*c_159+p1.y*p3.y*c_131+5*c_18*c_154)+p10_4*(105*c_10*p1.z+30*p1.y*p2.y*p1.z+5*
        c_2*p1.z+30*p1.y*p3.y*p1.z+c_11+5*c_3*p1.z-210*c_12+15*c_10*p2.z+10*p1.y*p2.y*p2.z+c_35+5*p1.y*p3.y*p2.z+2*p2.y*
        p3.y*p2.z+c_81-90*c_4*p2.z-30*p1.z*c_5+c_36+15*c_10*p3.z+5*p1.y*p2.y*p3.z+c_2*p3.z+10*p1.y*p3.y*p3.z+c_83+c_14-90*
        c_4*p3.z+c_15-6*c_5*p3.z-30*p1.z*c_6+c_87+c_17+5*c_26*c_33+5*c_18*c_40+5*p2.x*p3.x*c_113)+c_24*p3.x*(10*c_2*
        p1.z+c_29+c_104+c_21+c_169+40*p2.y*p3.y*p2.z+12*c_3*p2.z+c_107-60*p1.z*c_5+c_170+20*c_2*p3.z+24*p2.y*p3.y*p3.z+c_37+c_84+c_30-120*
        c_5*p3.z+c_108-72*p2.z*c_6+c_38+c_10*c_77+p1.y*(c_110+4*p3.y*p1.z+20*p2.y*p2.z+8*p3.y*p2.z+8*p2.y*p3.z+c_111)+5*c_18*
        c_128)+p10_3*(5*c_24*c_89+5*c_26*p3.x*c_90+p2.x*(12*c_2*p1.z+c_29+4*c_3*p1.z+c_34+12*c_2*p2.z+6*p2.y*p3.y*p2.z+c_106-120*
        c_4*p2.z-72*p1.z*c_5-24*c_13+3*c_2*p3.z+4*p2.y*p3.y*p3.z+c_14-60*c_4*p3.z+c_30-18*c_5*p3.z-24*p1.z*c_6+c_109+c_17+10*
        c_10*c_32+5*c_18*c_48+4*p1.y*c_190)+p3.x*(4*c_2*p1.z+c_29+12*c_3*p1.z+c_34+c_35+c_80+c_172-60*c_4*p2.z+c_173+c_36+c_82+6*
        p2.y*p3.y*p3.z+c_37-120*c_4*p3.z+c_30+c_85-72*p1.z*c_6+c_178+c_38+10*c_10*c_39+5*c_18*c_50+4*p1.y*c_220))+c_18*(c_41*
        p1.z+c_62+c_138+10*p2.y*c_43*p1.z+15*c_44*p1.z-2*c_2*c_12+c_140-12*c_3*c_12+c_114+c_64+12*c_42*p3.y*p2.z+18*c_2*c_3*p2.z+20*
        p2.y*c_43*p2.z+15*c_44*p2.z-6*c_2*c_4*p2.z-12*p2.y*p3.y*c_4*p2.z+c_65+8*c_45*p2.z-12*c_2*p1.z*c_5+c_66+c_141+8*
        c_12*c_5+c_67-24*p2.y*p3.y*c_13-12*c_3*c_13+8*c_4*c_13+8*p1.z*c_46+c_69+3*c_41*p3.z+12*c_42*p3.y*p3.z+30*c_2*c_3*p3.z+60*
        p2.y*c_43*p3.z+105*c_44*p3.z-6*c_2*c_4*p3.z+c_70-60*c_3*c_4*p3.z+24*c_45*p3.z+c_71+c_143-60*c_3*p1.z*p2.z*p3.z+c_145-36*
        c_2*c_5*p3.z-72*p2.y*p3.y*c_5*p3.z-60*c_3*c_5*p3.z+24*c_4*c_5*p3.z+c_72+24*c_46*p3.z+c_146-60*p2.y*p3.y*p1.z*c_6-180*
        c_3*p1.z*c_6+48*c_12*c_6-36*c_2*p2.z*c_6-120*p2.y*p3.y*p2.z*c_6-180*c_3*p2.z*c_6+c_73+c_148+48*c_13*c_6-20*c_2*c_16-120*
        p2.y*p3.y*c_16-420*c_3*c_16+80*c_4*c_16+80*p1.z*p2.z*c_16+80*c_5*c_16+120*p1.z*c_47+120*p2.z*c_47+168*c_74+c_60*c_40+5*
        c_78*c_57+c_61*c_94+c_10*(3*c_2*c_88+3*p2.y*p3.y*c_91-2*(c_95+c_13+c_96+c_97+c_51+c_99-3*c_3*c_54+c_103))+p1.y*(c_42*c_132+3*
        c_2*p3.y*c_136+10*c_43*c_59-2*p2.y*(c_53+c_124+c_156+c_191+c_51-3*c_3*c_58+c_194+c_195)-6*p3.y*c_231)+c_18*(c_10*c_54+c_2*
        c_126+5*p2.y*p3.y*c_118+15*c_3*c_57+p1.y*(p2.y*c_58+5*p3.y*c_59)-6*(c_12+c_13+5*c_5*p3.z+15*p2.z*c_6+35*c_16+c_4*
        (p2.z+c_52)+p1.z*(c_5+5*p2.z*p3.z+15*c_6))))+p10_2*(105*c_60*p1.z+60*c_61*p2.y*p1.z+30*c_10*c_2*p1.z+12*p1.y*c_42*p1.z+3*c_41*
        p1.z+60*c_61*p3.y*p1.z+30*c_10*p2.y*p3.y*p1.z+12*p1.y*c_2*p3.y*p1.z+c_62+30*c_10*c_3*p1.z+12*p1.y*p2.y*c_3*p1.z+3*
        c_2*c_3*p1.z+12*p1.y*c_43*p1.z+c_139+3*c_44*p1.z-420*c_10*c_12-120*p1.y*p2.y*c_12-20*c_2*c_12-120*p1.y*p3.y*c_12-20*
        p2.y*p3.y*c_12-20*c_3*c_12+168*c_63+15*c_60*p2.z+20*c_61*p2.y*p2.z+18*c_10*c_2*p2.z+12*p1.y*c_42*p2.z+c_64+10*c_61*
        p3.y*p2.z+12*c_10*p2.y*p3.y*p2.z+9*p1.y*c_2*p3.y*p2.z+4*c_42*p3.y*p2.z+6*c_10*c_3*p2.z+6*p1.y*p2.y*c_3*p2.z+3*c_2*
        c_3*p2.z+3*p1.y*c_43*p2.z+2*p2.y*c_43*p2.z+c_44*p2.z-180*c_10*c_4*p2.z-120*p1.y*p2.y*c_4*p2.z-36*c_2*c_4*p2.z-60*p1.y*
        p3.y*c_4*p2.z+c_115+c_65+120*c_45*p2.z-60*c_10*p1.z*c_5-72*p1.y*p2.y*p1.z*c_5-36*c_2*p1.z*c_5-24*p1.y*p3.y*p1.z*
        c_5+c_66-6*c_3*p1.z*c_5+80*c_12*c_5-12*c_10*c_13-24*p1.y*p2.y*c_13+c_67-6*p1.y*p3.y*c_13-8*p2.y*p3.y*c_13-2*c_3*c_13+48*
        c_4*c_13+24*p1.z*c_46+c_69+15*c_60*p3.z+10*c_61*p2.y*p3.z+6*c_10*c_2*p3.z+3*p1.y*c_42*p3.z+c_41*p3.z+20*c_61*p3.y*p3.z+12*
        c_10*p2.y*p3.y*p3.z+6*p1.y*c_2*p3.y*p3.z+2*c_42*p3.y*p3.z+18*c_10*c_3*p3.z+9*p1.y*p2.y*c_3*p3.z+3*c_2*c_3*p3.z+12*
        p1.y*c_43*p3.z+4*p2.y*c_43*p3.z+c_142-180*c_10*c_4*p3.z-60*p1.y*p2.y*c_4*p3.z+c_116-120*p1.y*p3.y*c_4*p3.z+c_70-36*
        c_3*c_4*p3.z+120*c_45*p3.z-60*c_10*p1.z*p2.z*p3.z-48*p1.y*p2.y*p1.z*p2.z*p3.z+c_71-48*p1.y*p3.y*p1.z*p2.z*
        p3.z-24*p2.y*p3.y*p1.z*p2.z*p3.z+c_144+80*c_12*p2.z*p3.z-12*c_10*c_5*p3.z-18*p1.y*p2.y*c_5*p3.z-12*c_2*c_5*p3.z-12*
        p1.y*p3.y*c_5*p3.z-12*p2.y*p3.y*c_5*p3.z-6*c_3*c_5*p3.z+c_117+c_72+8*c_46*p3.z-60*c_10*p1.z*c_6-24*p1.y*p2.y*p1.z*
        c_6-6*c_2*p1.z*c_6-72*p1.y*p3.y*p1.z*c_6+c_147-36*c_3*p1.z*c_6+80*c_12*c_6-12*c_10*p2.z*c_6-12*p1.y*p2.y*p2.z*c_6-6*c_2*
        p2.z*c_6-18*p1.y*p3.y*p2.z*c_6-12*p2.y*p3.y*p2.z*c_6-12*c_3*p2.z*c_6+c_73+24*p1.z*c_5*c_6+8*c_13*c_6-12*c_10*c_16-6*
        p1.y*p2.y*c_16-2*c_2*c_16-24*p1.y*p3.y*c_16-8*p2.y*p3.y*c_16+c_149+48*c_4*c_16+c_150+8*c_5*c_16+24*p1.z*c_47+8*p2.z*
        c_47+c_151+5*c_75*c_76+5*c_24*p3.x*c_77+5*c_78*c_54+3*c_26*(6*c_2*p1.z+3*p2.y*p3.y*p1.z+c_79+c_105+10*c_2*p2.z+c_80+c_81-36*
        c_4*p2.z-36*p1.z*c_5+c_174+c_82+c_83+c_3*p3.z+c_84-18*p1.z*p2.z*p3.z+c_85+c_86+c_87-2*c_16+5*c_18*c_88+2*c_10*c_33+3*p1.y*
        p2.y*c_89+p1.y*p3.y*c_90)+3*c_18*(c_2*c_88+2*c_10*c_40+p2.y*p3.y*c_91+p1.y*c_94-2*(c_95+c_13+c_96+c_97+c_51+c_99-c_3*
        c_54+c_103))+p2.x*(5*p30_3*c_91+3*p3.x*(c_104+c_105+c_106+c_107-18*p1.z*c_5-8*c_13+c_175-24*c_4*p3.z+c_176+c_85+c_108+c_109+c_179+4*
        p2.y*p3.y*c_88+c_2*c_77+p1.y*c_123+2*c_10*c_113)))+p2.x*p3.x*(5*c_41*p1.z+c_180+9*c_2*c_3*p1.z+c_207+5*c_44*p1.z-6*
        c_2*c_12-8*p2.y*p3.y*c_12-6*c_3*c_12+c_114+c_181+40*c_42*p3.y*p2.z+36*c_2*c_3*p2.z+24*p2.y*c_43*p2.z+10*c_44*p2.z-24*
        c_2*c_4*p2.z+c_115+c_65+16*c_45*p2.z-60*c_2*p1.z*c_5+c_182-18*c_3*p1.z*c_5+24*c_12*c_5+c_183-80*p2.y*p3.y*c_13-24*c_3*
        c_13+32*c_4*c_13+40*p1.z*c_46+c_184+10*c_41*p3.z+24*c_42*p3.y*p3.z+36*c_2*c_3*p3.z+40*p2.y*c_43*p3.z+c_210+c_116+c_70-24*
        c_3*c_4*p3.z+16*c_45*p3.z+c_185-72*p2.y*p3.y*p1.z*p2.z*p3.z+c_211+32*c_12*p2.z*p3.z-120*c_2*c_5*p3.z-144*p2.y*p3.y*
        c_5*p3.z-72*c_3*c_5*p3.z+c_117+c_186+80*c_46*p3.z-18*c_2*p1.z*c_6+c_213-60*c_3*p1.z*c_6+24*c_12*c_6-72*c_2*p2.z*c_6-144*
        p2.y*p3.y*p2.z*c_6-120*c_3*p2.z*c_6+c_73+72*p1.z*c_5*c_6+96*c_13*c_6-24*c_2*c_16-80*p2.y*p3.y*c_16+c_214+32*c_4*
        c_16+c_215+96*c_5*c_16+40*p1.z*c_47+80*p2.z*c_47+c_216+5*c_78*c_118+c_61*c_123+c_60*c_113+c_10*(12*p2.y*p3.y*c_88+3*c_2*
        c_77+c_233+c_234)+c_18*(c_10*c_91+8*p2.y*p3.y*c_126+10*c_3*c_118+3*c_2*c_128+p1.y*(4*p3.y*c_58+p2.y*(c_27+c_7+c_223))-6*(c_12+2*c_4*
        c_222+p1.z*(c_129+8*p2.z*p3.z+c_130)+4*(c_13+c_96+5*p2.z*c_6+c_158)))+2*p1.y*(2*c_42*c_131+3*c_2*p3.y*c_132+2*p3.y*(-4*
        c_12-4*c_13-9*c_5*p3.z+c_109+c_232-3*c_4*(c_31+c_20)+c_3*c_58-6*p1.z*c_135)+p2.y*(3*c_3*c_136-2*c_167)))+c_26*(15*c_41*p1.z+10*
        c_42*p3.y*p1.z+c_138+c_139+c_44*p1.z-12*c_2*c_12+c_140-2*c_3*c_12+c_114+105*c_41*p2.z+60*c_42*p3.y*p2.z+30*c_2*c_3*
        p2.z+12*p2.y*c_43*p2.z+3*c_44*p2.z-60*c_2*c_4*p2.z+c_115-6*c_3*c_4*p2.z+24*c_45*p2.z-180*c_2*p1.z*c_5-60*p2.y*p3.y*
        p1.z*c_5+c_141+48*c_12*c_5-420*c_2*c_13-120*p2.y*p3.y*c_13-20*c_3*c_13+80*c_4*c_13+120*p1.z*c_46+168*c_68+15*c_41*p3.z+20*
        c_42*p3.y*p3.z+18*c_2*c_3*p3.z+12*p2.y*c_43*p3.z+c_142+c_116-12*p2.y*p3.y*c_4*p3.z-6*c_3*c_4*p3.z+8*c_45*p3.z-60*c_2*
        p1.z*p2.z*p3.z+c_143+c_144+c_145-180*c_2*c_5*p3.z-120*p2.y*p3.y*c_5*p3.z-36*c_3*c_5*p3.z+c_117+80*p1.z*c_13*p3.z+120*
        c_46*p3.z+c_146+c_147-12*c_3*p1.z*c_6+8*c_12*c_6-60*c_2*p2.z*c_6-72*p2.y*p3.y*p2.z*c_6-36*c_3*p2.z*c_6+24*c_4*p2.z*
        c_6+c_148+80*c_13*c_6-12*c_2*c_16-24*p2.y*p3.y*c_16+c_149+8*c_4*c_16+c_150+48*c_5*c_16+8*p1.z*c_47+24*p2.z*c_47+c_151+c_60*c_33+5*
        c_78*c_126+c_61*(3*p2.y*c_89+p3.y*c_90)+c_10*(3*c_3*c_88+6*c_2*c_76+3*p2.y*p3.y*c_77-2*c_201)+3*c_18*(c_10*c_88+2*c_2*
        c_154+3*p2.y*p3.y*c_128+p1.y*(p2.y*c_132+p3.y*c_136)-2*(c_12+3*c_4*c_23-c_3*c_126+p1.z*(c_155+9*p2.z*p3.z+c_101)+2*(5*
        c_13+c_156+c_157+c_158)))+p1.y*(10*c_42*c_159+6*c_2*p3.y*c_131+c_43*c_136-2*p3.y*c_167+3*p2.y*(c_3*c_132-2*(c_53+20*c_13+10*
        c_5*p3.z+4*p2.z*c_6+c_16+3*c_4*(c_25+p3.z)+2*p1.z*(10*c_5+c_125+c_6)))))+p1.x*(5*c_168*c_159+5*c_75*p3.x*c_131+c_24*(20*
        c_2*p1.z+c_29+c_171-24*c_12+c_169+20*p2.y*p3.y*p2.z+4*c_3*p2.z-72*c_4*p2.z-120*p1.z*c_5+c_170+10*c_2*p3.z+8*p2.y*p3.y*
        p3.z+c_14-18*c_4*p3.z+c_30-60*c_5*p3.z+c_177-24*p2.z*c_6+c_17+3*c_10*c_89+8*p1.y*p2.y*c_76+2*p1.y*p3.y*c_77+5*c_18*
        c_132)+c_26*p3.x*(5*c_18*c_136+3*(c_171-8*c_12+c_172-18*c_4*p2.z+c_173+c_174+c_175+c_84+c_176-24*c_5*p3.z+c_177+c_178+c_179+4*
        p1.y*p3.y*c_88+c_10*c_90+2*c_2*c_131+2*p2.y*p3.y*c_132+p1.y*p2.y*(c_0+8*p2.z+c_49)))+p2.x*(10*c_41*p1.z+c_180+c_138+4*
        p2.y*c_43*p1.z+2*c_44*p1.z-24*c_2*c_12+c_208-8*c_3*c_12+c_209+c_181+20*c_42*p3.y*p2.z+12*c_2*c_3*p2.z+6*p2.y*c_43*p2.z+2*
        c_44*p2.z-72*c_2*c_4*p2.z-36*p2.y*p3.y*c_4*p2.z+c_65+80*c_45*p2.z-120*c_2*p1.z*c_5+c_182+c_141+96*c_12*c_5+c_183-40*
        p2.y*p3.y*c_13-8*c_3*c_13+96*c_4*c_13+80*p1.z*c_46+c_184+5*c_41*p3.z+8*c_42*p3.y*p3.z+9*c_2*c_3*p3.z+8*p2.y*c_43*p3.z+c_142-18*
        c_2*c_4*p3.z+c_70-18*c_3*c_4*p3.z+40*c_45*p3.z+c_185+c_143-24*c_3*p1.z*p2.z*p3.z+c_212-60*c_2*c_5*p3.z-48*p2.y*
        p3.y*c_5*p3.z-18*c_3*c_5*p3.z+72*c_4*c_5*p3.z+c_186+40*c_46*p3.z+c_146-24*p2.y*p3.y*p1.z*c_6-24*c_3*p1.z*c_6+32*c_12*
        c_6-24*c_2*p2.z*c_6-36*p2.y*p3.y*p2.z*c_6-24*c_3*p2.z*c_6+c_73+c_148+32*c_13*c_6-6*c_2*c_16-16*p2.y*p3.y*c_16+c_149+24*
        c_4*c_16+32*p1.z*p2.z*c_16+24*c_5*c_16+16*p1.z*c_47+16*p2.z*c_47+c_151+5*c_60*c_32+5*c_78*c_58+4*c_61*c_190+3*c_10*(3*c_2*
        c_89+2*p2.y*p3.y*c_90+c_3*c_48-2*(c_221+c_124+c_96+2*p2.z*c_6+c_16+10*c_4*(c_31+p3.z)+4*p1.z*(c_129+c_133+c_6)))+3*c_18*(c_10*
        c_48+c_2*c_132+2*p2.y*p3.y*c_136+p1.y*(4*p2.y*c_88+2*p3.y*c_91)-2*(c_53+c_124+c_156+c_191+c_51-c_3*c_58+c_194+c_195))+2*
        p1.y*(6*p2.y*c_3*c_88+4*c_42*c_76+3*c_2*p3.y*c_77+c_43*c_91-4*p2.y*c_201-2*p3.y*c_206))+p3.x*(2*c_41*p1.z+4*c_42*p3.y*
        p1.z+c_138+c_207+10*c_44*p1.z-8*c_2*c_12+c_208-24*c_3*c_12+c_209+c_64+8*c_42*p3.y*p2.z+9*c_2*c_3*p2.z+8*p2.y*c_43*p2.z+5*
        c_44*p2.z-18*c_2*c_4*p2.z+c_115-18*c_3*c_4*p2.z+40*c_45*p2.z-24*c_2*p1.z*c_5-24*p2.y*p3.y*p1.z*c_5+c_141+32*c_12*
        c_5+c_67-16*p2.y*p3.y*c_13-6*c_3*c_13+24*c_4*c_13+16*p1.z*c_46+c_69+2*c_41*p3.z+6*c_42*p3.y*p3.z+12*c_2*c_3*p3.z+20*p2.y*c_43*
        p3.z+c_210+c_116-36*p2.y*p3.y*c_4*p3.z-72*c_3*c_4*p3.z+80*c_45*p3.z-24*c_2*p1.z*p2.z*p3.z+c_143+c_211+c_212-24*c_2*
        c_5*p3.z-36*p2.y*p3.y*c_5*p3.z-24*c_3*c_5*p3.z+c_117+32*p1.z*c_13*p3.z+16*c_46*p3.z+c_146+c_213-120*c_3*p1.z*c_6+96*
        c_12*c_6-18*c_2*p2.z*c_6-48*p2.y*p3.y*p2.z*c_6-60*c_3*p2.z*c_6+72*c_4*p2.z*c_6+c_148+24*c_13*c_6-8*c_2*c_16-40*p2.y*p3.y*
        c_16+c_214+96*c_4*c_16+c_215+32*c_5*c_16+80*p1.z*c_47+40*p2.z*c_47+c_216+5*c_60*c_39+5*c_78*c_59+4*c_61*c_220+3*c_10*(c_2*
        c_90+2*p2.y*p3.y*c_48+3*c_3*c_50-2*(c_221+c_13+2*c_5*p3.z+c_196+c_137+10*c_4*c_222+4*p1.z*(c_5+c_133+c_203)))+c_18*(3*c_10*
        c_50+c_2*c_136+4*p2.y*p3.y*c_58+10*c_3*c_59+p1.y*(8*p3.y*c_54+p2.y*(c_0+c_25+c_223))-6*c_231)+2*p1.y*(6*c_2*p3.y*c_88+c_42*
        c_77+4*p3.y*(-10*c_12-c_13-3*c_5*p3.z+c_87+c_232-6*c_4*c_98+c_3*c_54-3*p1.z*c_102)+p2.y*(c_233+c_234))))))/double(24192);
}

double trig::c62() const{
    double p30_2=p3.x*p3.x;
    double p30_3=p3.x*p30_2;
    double p30_4=p3.x*p30_3;
    double p30_5=p3.x*p30_4;
    double p30_6=p3.x*p30_5;
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p11_4=p1.y*p11_3;
    double p11_5=p1.y*p11_4;
    double p11_6=p1.y*p11_5;
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p21_4=p2.y*p21_3;
    double p21_5=p2.y*p21_4;
    double p21_6=p2.y*p21_5;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p31_4=p3.y*p31_3;
    double p31_5=p3.y*p31_4;
    double p31_6=p3.y*p31_5;
    double p12_2=p1.z*p1.z;
    double p12_3=p1.z*p12_2;
    double p12_4=p1.z*p12_3;
    double p22_2=p2.z*p2.z;
    double p22_3=p2.z*p22_2;
    double p22_4=p2.z*p22_3;
    double p32_2=p3.z*p3.z;
    double p32_3=p3.z*p32_2;
    double p32_4=p3.z*p32_3;
    double p20_2=p2.x*p2.x;
    double p20_3=p2.x*p20_2;
    double p20_4=p2.x*p20_3;
    double p20_5=p2.x*p20_4;
    double p20_6=p2.x*p20_5;
    double p20_7=p2.x*p20_6;
    double p10_2=p1.x*p1.x;
    double p10_3=p1.x*p10_2;
    double p10_4=p1.x*p10_3;
    double p10_5=p1.x*p10_4;
    double p10_6=p1.x*p10_5;
    double p10_7=p1.x*p10_6;
    double c_0=p30_2;
    double c_1=15*c_0;
    double c_2=p11_2;
    double c_3=p21_2;
    double c_4=p31_2;
    double c_5=p12_2;
    double c_6=-(16*c_5);
    double c_7=p22_2;
    double c_8=p32_2;
    double c_9=-(96*p1.z*p2.z);
    double c_10=-(16*c_8);
    double c_11=p20_2;
    double c_12=3*c_4;
    double c_13=-(80*p1.z*p2.z);
    double c_14=-(16*c_7);
    double c_15=-(48*c_8);
    double c_16=15*c_2;
    double c_17=2*p2.y*p3.y;
    double c_18=-(240*c_5);
    double c_19=-(32*p2.z*p3.z);
    double c_20=p20_4;
    double c_21=p20_3;
    double c_22=p11_3;
    double c_23=p21_3;
    double c_24=p31_3;
    double c_25=p12_3;
    double c_26=p22_3;
    double c_27=p32_3;
    double c_28=10*c_2;
    double c_29=3*p2.y*p3.y;
    double c_30=p30_4;
    double c_31=p11_4;
    double c_32=p21_4;
    double c_33=p31_4;
    double c_34=p12_4;
    double c_35=-(160*c_5*c_7);
    double c_36=p22_4;
    double c_37=-(64*p1.z*p2.z*c_8);
    double c_38=p32_4;
    double c_39=-(16*c_38);
    double c_40=4*p2.y;
    double c_41=3*p3.y;
    double c_42=6*p2.y*p3.y;
    double c_43=6*c_8;
    double c_44=-15*c_30;
    double c_45=20*c_23*p3.y;
    double c_46=3*p2.y;
    double c_47=2*p3.y;
    double c_48=-(16*c_34);
    double c_49=-(320*c_26*p3.z);
    double c_50=-(64*p1.z*c_27);
    double c_51=3*c_3;
    double c_52=12*p2.z*p3.z;
    double c_53=p20_5;
    double c_54=10*c_3;
    double c_55=4*p2.y*p3.y;
    double c_56=c_40+p3.y;
    double c_57=-(192*p1.z*p2.z);
    double c_58=2*c_3;
    double c_59=2*p1.y*p3.y;
    double c_60=-(32*p1.z*p3.z);
    double c_61=2*p2.y;
    double c_62=c_61+p3.y;
    double c_63=2*c_2;
    double c_64=-(32*c_5);
    double c_65=-(48*p1.z*p3.z);
    double c_66=15*c_30;
    double c_67=-(15*c_31);
    double c_68=-(3*c_3*c_4);
    double c_69=p2.y+c_47;
    double c_70=4*c_24;
    double c_71=240*c_34;
    double c_72=192*c_5*p2.z*p3.z;
    double c_73=48*c_7*c_8;
    double c_74=6*c_2;
    double c_75=4*p3.y;
    double c_76=10*c_8;
    double c_77=2*p1.y*p2.y;
    double c_78=10*p2.y*p3.y;
    double c_79=-(32*p1.z*p2.z);
    double c_80=-(48*c_7);
    double c_81=-(80*p1.z*p3.z);
    double c_82=-(160*p2.z*p3.z);
    double c_83=18*c_3*c_4;
    double c_84=2*c_4;
    double c_85=4*c_23;
    double c_86=-(64*p1.z*c_26);
    double c_87=-(96*c_5*p2.z*p3.z);
    double c_88=-(288*c_7*c_8);
    double c_89=15*c_4;
    double c_90=10*c_5;
    double c_91=3*c_7;
    double c_92=4*p2.z*p3.z;
    double c_93=6*c_7;
    double c_94=3*p2.z*p3.z;
    double c_95=15*c_33;
    double c_96=3*p1.z*p3.z;
    double c_97=2*p2.z*p3.z;
    double c_98=2*c_5;
    double c_99=3*p1.z*p2.z;
    double c_100=2*p2.z;
    double c_101=c_100+p3.z;
    double c_102=6*c_5;
    double c_103=10*c_7;
    double c_104=p21_5;
    double c_105=p31_5;
    double c_106=15*c_24;
    double c_107=3*c_5;
    double c_108=4*p1.z*p3.z;
    double c_109=8*p2.z*p3.z;
    double c_110=3*c_8;
    double c_111=5*c_36;
    double c_112=p2.z+p3.z;
    double c_113=3*c_7*p3.z;
    double c_114=2*c_7;
    double c_115=2*c_8;
    double c_116=5*c_34;
    double c_117=3*p2.z;
    double c_118=c_117+p3.z;
    double c_119=3*p2.z*c_8;
    double c_120=p30_6;
    double c_121=-15*c_120;
    double c_122=p11_6;
    double c_123=15*c_122;
    double c_124=p21_6;
    double c_125=60*c_23*c_24;
    double c_126=p31_6;
    double c_127=p11_5;
    double c_128=-(48*c_3*c_4*c_5);
    double c_129=32*p2.y*p3.y*c_34;
    double c_130=-(192*p2.y*c_24*c_7);
    double c_131=48*c_4*c_5*c_7;
    double c_132=-(576*c_3*c_4*p2.z*p3.z);
    double c_133=192*p2.y*p3.y*c_5*p2.z*p3.z;
    double c_134=192*c_4*c_26*p3.z;
    double c_135=-(192*c_23*p3.y*c_8);
    double c_136=48*c_3*c_5*c_8;
    double c_137=576*p2.y*p3.y*c_7*c_8;
    double c_138=192*c_3*p2.z*c_27;
    double c_139=-(96*p1.z*p3.z);
    double c_140=-(96*p2.z*p3.z);
    double c_141=10*c_3*c_4;
    double c_142=20*p2.y*c_24;
    double c_143=p2.y+c_75;
    double c_144=10*c_4;
    double c_145=-(16*c_36);
    double c_146=-(64*c_5*p2.z*p3.z);
    double c_147=-(64*p1.z*c_7*p3.z);
    double c_148=-(160*c_5*c_8);
    double c_149=-(160*c_7*c_8);
    double c_150=-(320*p2.z*c_27);
    double c_151=15*c_3;
    double c_152=30*p2.y*p3.y;
    double c_153=15*c_5;
    double c_154=2*p3.z;
    double c_155=p2.z+c_154;
    double c_156=15*c_32;
    double c_157=4*p3.z;
    double c_158=p2.z+c_157;
    double c_159=3*p1.z*c_158;
    double c_160=c_102+c_7+c_92+c_76+c_159;
    double c_161=2*p1.z*p3.z;
    double c_162=c_98+c_99+c_114+c_161+c_97+c_8;
    double c_163=5*c_24;
    double c_164=2*p1.z*p2.z;
    double c_165=c_98+c_164+c_7+c_96+c_97+c_115;
    double c_166=15*c_34;
    double c_167=3*c_7*c_8;
    double c_168=5*c_38;
    double c_169=3*p3.z;
    double c_170=p2.z+c_169;
    double c_171=4*p1.z*c_170;
    double c_172=c_90+c_7+c_94+c_43+c_171;
    double c_173=45*c_4;
    double c_174=8*p1.z*c_112;
    double c_175=c_90+c_91+c_92+c_110+c_174;
    double c_176=5*p2.z*p3.z;
    double c_177=8*p1.z*p2.z;
    double c_178=c_107+c_177+c_103+c_108+c_109+c_110;
    double c_179=6*c_7*c_8;
    double c_180=2*p1.z*c_112;
    double c_181=c_5+c_114+c_94+c_115+c_180;
    double c_182=75*c_33;
    double c_183=4*p1.z*c_155;
    double c_184=c_107+c_91+c_109+c_76+c_183;
    double c_185=8*c_26*p3.z;
    double c_186=9*c_7*c_8;
    double c_187=8*p2.z*c_27;
    double c_188=8*c_25*c_112;
    double c_189=c_91+c_92+c_110;
    double c_190=3*c_5*c_189;
    double c_191=2*c_26;
    double c_192=2*c_27;
    double c_193=c_191+c_113+c_119+c_192;
    double c_194=4*p1.z*c_193;
    double c_195=c_116+c_111+c_185+c_186+c_187+c_168+c_188+c_190+c_194;
    double c_196=p20_6;
    double c_197=15*c_124;
    double c_198=15*c_126;
    double c_199=-(128*c_23*p3.y*p1.z*p2.z);
    double c_200=-(32*c_33*p1.z*p2.z);
    double c_201=192*c_3*c_25*p2.z;
    double c_202=-(240*c_32*c_7);
    double c_203=128*p2.y*p3.y*p1.z*c_26;
    double c_204=240*c_3*c_36;
    double c_205=-(32*c_32*p1.z*p3.z);
    double c_206=-(128*p2.y*c_24*p1.z*p3.z);
    double c_207=192*c_4*c_25*p3.z;
    double c_208=192*c_3*p1.z*c_7*p3.z;
    double c_209=-(240*c_33*c_8);
    double c_210=192*c_4*p1.z*p2.z*c_8;
    double c_211=128*p2.y*p3.y*p1.z*c_27;
    double c_212=240*c_4*c_38;
    double c_213=-(160*p1.z*p3.z);
    double c_214=-(240*c_8);
    double c_215=3*c_2;
    double c_216=5*p2.y*p3.y;
    double c_217=-(48*c_5);
    double c_218=-(160*p1.z*p2.z);
    double c_219=-(240*c_7);
    double c_220=-(80*p2.z*p3.z);
    double c_221=-15*c_0;
    double c_222=-(3*c_4);
    double c_223=128*p1.z*p2.z;
    double c_224=48*c_8;
    double c_225=p2.y+c_41;
    double c_226=6*c_4;
    double c_227=3*c_3*p3.y;
    double c_228=10*c_24;
    double c_229=-(64*c_25*p2.z);
    double c_230=-(48*c_5*c_7);
    double c_231=-(192*p1.z*p2.z*c_8);
    double c_232=-(320*p1.z*c_27);
    double c_233=-(240*c_38);
    double c_234=5*c_31;
    double c_235=5*c_32;
    double c_236=5*c_33;
    double c_237=p2.y+p3.y;
    double c_238=3*p2.y*c_4;
    double c_239=-(80*c_34);
    double c_240=-(80*c_36);
    double c_241=-(192*p1.z*c_7*p3.z);
    double c_242=-(80*c_38);
    double c_243=-(3*c_3);
    double c_244=-(8*p2.y*p3.y);
    double c_245=6*c_3*c_4;
    double c_246=c_46+p3.y;
    double c_247=6*c_3;
    double c_248=10*c_23;
    double c_249=-(320*p1.z*c_26);
    double c_250=-(240*c_36);
    double c_251=-(64*c_25*p3.z);
    double c_252=-(144*c_5*p2.z*p3.z);
    double c_253=-(48*c_5*c_8);
    double c_254=-(96*c_7*c_8);
    return ((p3.y*(-p1.z+p2.z)+p2.y*(p1.z-p3.z)+p1.y*(-p2.z+p3.z))*(-15*p10_7-15*p20_7-15*c_196*p3.x-15*p10_6*(p2.x+p3.x)-c_20*
        p3.x*(c_1+c_2+5*p1.y*p2.y+c_151+c_59+c_78+c_12+c_6+c_13+c_219+c_60+c_82+c_15)-c_53*(c_1+c_2+21*c_3+c_42+c_4+p1.y*(6*
        p2.y+p3.y)+c_6+c_9-336*c_7-16*p1.z*p3.z+c_140+c_10)-p10_5*(15*c_11+15*p2.x*p3.x+c_1+21*c_2+6*p1.y*p2.y+c_3+6*p1.y*
        p3.y+p2.y*p3.y+c_4-336*c_5+c_9+c_14+c_139-16*p2.z*p3.z+c_10)-p10_4*(15*c_21+15*c_11*p3.x+p3.x*(c_1+c_16+c_3+c_17+c_12+5*p1.y*
        c_69+c_18+c_13+c_14+c_213+c_19+c_15)+p2.x*(c_1+c_16+c_51+c_17+c_4+5*p1.y*c_62+c_18+c_218+c_80+c_81+c_19+c_10))+p10_3*(-15*
        c_20-15*c_21*p3.x-15*c_30+35*c_31+20*c_22*p2.y+10*c_2*c_3+4*p1.y*c_23+c_32+20*c_22*p3.y+10*c_2*p2.y*p3.y+4*p1.y*c_3*p3.y+c_23*
        p3.y+10*c_2*c_4+4*p1.y*p2.y*c_4+c_3*c_4+4*p1.y*c_24+p2.y*c_24+c_33-560*c_34-320*c_25*p2.z+c_35+c_86+c_145-320*c_25*
        p3.z-160*c_5*p2.z*p3.z+c_147-16*c_26*p3.z+c_148+c_37-16*c_7*c_8+c_50-16*p2.z*c_27+c_39-c_11*(c_1+c_28+c_247+c_29+c_4+4*p1.y*
        c_246-160*c_5+c_57-96*c_7-64*p1.z*p3.z-48*p2.z*p3.z+c_10)+p2.x*p3.x*(c_221-10*c_2+c_243-4*p2.y*p3.y+c_222-8*p1.y*
        c_237+160*c_5+c_223+48*c_7+128*p1.z*p3.z+64*p2.z*p3.z+c_224)-c_0*(c_28+c_3+c_29+c_226+4*p1.y*c_225-16*c_172))+c_21*(c_44+c_31+35*
        c_32+c_45+c_141+4*p2.y*c_24+c_33+c_22*c_56+c_2*(c_54+c_55+c_4)+p1.y*(20*c_23+10*c_3*p3.y+4*p2.y*c_4+c_24)+c_48+c_229+c_35+c_249-560*
        c_36-16*c_25*p3.z+c_146-160*p1.z*c_7*p3.z+c_49-16*c_5*c_8+c_37+c_149-16*p1.z*c_27-64*p2.z*c_27+c_39-c_0*(c_2+p1.y*
        (c_40+c_41)+2*(5*c_3+c_42+c_12-8*(c_5+4*p1.z*p2.z+c_103+c_96+c_52+c_43))))+c_11*p3.x*(c_44+c_31+c_156+c_45+c_83+12*p2.y*
        c_24+c_236+c_22*(c_46+c_47)+3*c_2*(c_58+c_17+c_4)+p1.y*(c_248+12*c_3*p3.y+9*p2.y*c_4+c_70)+c_48-48*c_25*p2.z-96*c_5*c_7-160*
        p1.z*c_26+c_250-32*c_25*p3.z+c_87+c_241+c_49+c_253-144*p1.z*p2.z*c_8+c_88+c_50-192*p2.z*c_27+c_242-c_0*(c_2+p1.y*(c_46+c_75)+2*
        (c_51+c_42+5*c_4-8*(c_5+c_99+c_93+c_108+c_52+c_76))))-p10_2*(15*c_53+15*c_20*p3.x+c_21*(c_1+c_74+c_54+c_55+c_4+3*p1.y*
        c_56-96*c_5+c_57-160*c_7+c_65-64*p2.z*p3.z+c_10)+3*c_11*p3.x*(5*c_0+c_63+3*p1.y*p2.y+c_58+c_59+c_17+c_4+c_64-48*p1.z*p2.z-32*
        c_7+c_60+c_19+c_10)+p2.x*(c_66+c_67-5*c_32-4*c_23*p3.y+c_68-2*p2.y*c_24-c_33-10*c_22*c_62-6*c_2*(c_51+c_17+c_4)-3*p1.y*
        (c_85+c_227+2*p2.y*c_4+c_24)+c_71+320*c_25*p2.z+288*c_5*c_7+192*p1.z*c_26+80*c_36+160*c_25*p3.z+c_72+144*p1.z*c_7*p3.z+64*
        c_26*p3.z+96*c_5*c_8+96*p1.z*p2.z*c_8+c_73+48*p1.z*c_27+32*p2.z*c_27+16*c_38+3*c_0*(c_63+c_77+c_3+3*p1.y*
        p3.y+c_17+c_84+c_64+c_79+c_14+c_65+c_19-32*c_8))+p3.x*(c_66+c_67-c_32-2*c_23*p3.y+c_68-4*p2.y*c_24-5*c_33-10*c_22*c_69-6*c_2*(c_3+c_17+c_12)-3*
        p1.y*(c_23+2*c_3*p3.y+c_238+c_70)+c_71+160*c_25*p2.z+96*c_5*c_7+48*p1.z*c_26+16*c_36+320*c_25*p3.z+c_72+96*p1.z*c_7*
        p3.z+32*c_26*p3.z+288*c_5*c_8+144*p1.z*p2.z*c_8+c_73+192*p1.z*c_27+64*p2.z*c_27+80*c_38+c_0*(c_74+c_3+c_55+c_144+3*p1.y*
        c_143-16*c_160)))+p2.x*(c_121+c_123+105*c_124+90*c_104*p3.y+75*c_32*c_4+c_125+45*c_3*c_33+30*p2.y*c_105+c_198+15*c_127*c_62-80*
        c_32*c_5-64*c_23*p3.y*c_5+c_128-32*p2.y*c_24*c_5-16*c_33*c_5+48*c_3*c_34+c_129+16*c_4*c_34-480*c_32*p1.z*p2.z-320*c_23*p3.y*
        p1.z*p2.z-192*c_3*c_4*p1.z*p2.z-96*p2.y*c_24*p1.z*p2.z+c_200+c_201+96*p2.y*p3.y*c_25*p2.z+32*c_4*c_25*p2.z-1680*c_32*
        c_7-960*c_23*p3.y*c_7-480*c_3*c_4*c_7+c_130-48*c_33*c_7+480*c_3*c_5*c_7+192*p2.y*p3.y*c_5*c_7+c_131+960*c_3*p1.z*c_26+320*
        p2.y*p3.y*p1.z*c_26+64*c_4*p1.z*c_26+1680*c_3*c_36+480*p2.y*p3.y*c_36+80*c_4*c_36-80*c_32*p1.z*p3.z-128*c_23*p3.y*p1.z*
        p3.z-144*c_3*c_4*p1.z*p3.z+c_206-80*c_33*p1.z*p3.z+48*c_3*c_25*p3.z+64*p2.y*p3.y*c_25*p3.z+48*c_4*c_25*p3.z-480*c_32*
        p2.z*p3.z-640*c_23*p3.y*p2.z*p3.z+c_132-384*p2.y*c_24*p2.z*p3.z-160*c_33*p2.z*p3.z+192*c_3*c_5*p2.z*p3.z+c_133+96*
        c_4*c_5*p2.z*p3.z+480*c_3*p1.z*c_7*p3.z+384*p2.y*p3.y*p1.z*c_7*p3.z+144*c_4*p1.z*c_7*p3.z+960*c_3*c_26*p3.z+640*p2.y*
        p3.y*c_26*p3.z+c_134-80*c_32*c_8+c_135-288*c_3*c_4*c_8-320*p2.y*c_24*c_8+c_209+c_136+96*p2.y*p3.y*c_5*c_8+96*c_4*c_5*
        c_8+192*c_3*p1.z*p2.z*c_8+288*p2.y*p3.y*p1.z*p2.z*c_8+c_210+480*c_3*c_7*c_8+c_137+288*c_4*c_7*c_8+48*c_3*p1.z*c_27+c_211+160*
        c_4*p1.z*c_27+c_138+384*p2.y*p3.y*p2.z*c_27+320*c_4*p2.z*c_27+48*c_3*c_38+160*p2.y*p3.y*c_38+c_212-c_30*(c_2+c_77+c_51+5*
        p1.y*p3.y+c_78+c_89+c_6+c_79+c_80+c_81+c_82+c_214)+c_0*(c_31+c_235+12*c_23*p3.y+c_83+c_142+c_95+c_22*(c_61+c_41)+3*c_2*
        (c_3+c_17+c_84)+p1.y*(c_85+9*c_3*p3.y+12*p2.y*c_4+c_228)+c_48-32*c_25*p2.z+c_230+c_86+c_240-48*c_25*p3.z+c_87-144*p1.z*c_7*
        p3.z-192*c_26*p3.z-96*c_5*c_8+c_231+c_88-160*p1.z*c_27+c_150+c_233)+c_31*(45*c_3+c_152+c_89-16*(c_153+c_91+c_97+c_8+5*p1.z*
        c_101))+c_22*(60*c_23+45*c_3*p3.y+30*p2.y*c_4+c_106-16*p3.y*c_175-32*p2.y*(c_90+c_93+c_94+c_8+4*p1.z*c_118))+c_2*(75*c_32+60*
        c_23*p3.y+c_95-48*c_4*c_165+6*p2.y*(c_163-16*p3.y*c_162)+16*(c_166+c_111+4*c_26*p3.z+c_167+2*p2.z*c_27+c_38+10*c_25*c_101+6*
        c_5*(c_91+c_97+c_8)+3*p1.z*(4*c_26+c_113+2*p2.z*c_8+c_27))+3*c_3*(c_89-16*(c_102+c_103+c_92+c_8+3*p1.z*(4*p2.z+p3.z))))+p1.y*
        (90*c_104+75*c_32*p3.y+15*c_105-16*c_24*c_184+3*c_3*(c_106-16*p3.y*c_178)+16*p3.y*c_195+4*c_23*(c_89-16*(c_107+15*
        c_7+c_176+c_8+2*p1.z*(5*p2.z+p3.z)))+2*p2.y*(c_95-48*c_4*c_181+16*(c_116+15*c_36+10*c_26*p3.z+c_179+3*p2.z*c_27+c_38+4*c_25*
        c_118+3*c_5*(c_93+c_94+c_8)+2*p1.z*(10*c_26+6*c_7*p3.z+c_119+c_27)))))+p3.x*(c_121+c_123+c_197+30*c_104*p3.y+45*c_32*c_4+c_125+75*
        c_3*c_33+90*p2.y*c_105+105*c_126+15*c_127*c_69-16*c_32*c_5-32*c_23*p3.y*c_5+c_128-64*p2.y*c_24*c_5-80*c_33*c_5+16*c_3*
        c_34+c_129+48*c_4*c_34-80*c_32*p1.z*p2.z+c_199-144*c_3*c_4*p1.z*p2.z-128*p2.y*c_24*p1.z*p2.z-80*c_33*p1.z*p2.z+48*c_3*
        c_25*p2.z+64*p2.y*p3.y*c_25*p2.z+48*c_4*c_25*p2.z+c_202-320*c_23*p3.y*c_7-288*c_3*c_4*c_7+c_130-80*c_33*c_7+96*c_3*c_5*c_7+96*
        p2.y*p3.y*c_5*c_7+c_131+160*c_3*p1.z*c_26+c_203+48*c_4*p1.z*c_26+c_204+160*p2.y*p3.y*c_36+48*c_4*c_36+c_205-96*c_23*
        p3.y*p1.z*p3.z-192*c_3*c_4*p1.z*p3.z-320*p2.y*c_24*p1.z*p3.z-480*c_33*p1.z*p3.z+32*c_3*c_25*p3.z+96*p2.y*p3.y*c_25*
        p3.z+c_207-160*c_32*p2.z*p3.z-384*c_23*p3.y*p2.z*p3.z+c_132-640*p2.y*c_24*p2.z*p3.z-480*c_33*p2.z*p3.z+96*c_3*c_5*p2.z*
        p3.z+c_133+192*c_4*c_5*p2.z*p3.z+c_208+288*p2.y*p3.y*p1.z*c_7*p3.z+192*c_4*p1.z*c_7*p3.z+320*c_3*c_26*p3.z+384*p2.y*
        p3.y*c_26*p3.z+c_134-48*c_32*c_8+c_135-480*c_3*c_4*c_8-960*p2.y*c_24*c_8-1680*c_33*c_8+c_136+192*p2.y*p3.y*c_5*c_8+480*c_4*
        c_5*c_8+144*c_3*p1.z*p2.z*c_8+384*p2.y*p3.y*p1.z*p2.z*c_8+480*c_4*p1.z*p2.z*c_8+288*c_3*c_7*c_8+c_137+480*c_4*c_7*c_8+64*
        c_3*p1.z*c_27+320*p2.y*p3.y*p1.z*c_27+960*c_4*p1.z*c_27+c_138+640*p2.y*p3.y*p2.z*c_27+960*c_4*p2.z*c_27+80*c_3*
        c_38+480*p2.y*p3.y*c_38+1680*c_4*c_38-c_30*(c_2+c_3+c_42+21*c_4+p1.y*(p2.y+6*p3.y)+c_6-16*p1.z*p2.z+c_14+c_139+c_140-336*
        c_8)+c_0*(c_31+c_32+4*c_23*p3.y+c_141+c_142+35*c_33+c_22*c_143+c_2*(c_3+c_55+c_144)+p1.y*(c_23+4*c_3*p3.y+10*p2.y*c_4+20*
        c_24)+c_48-16*c_25*p2.z-16*c_5*c_7-16*p1.z*c_26+c_145+c_251+c_146+c_147-64*c_26*p3.z+c_148-160*p1.z*p2.z*c_8+c_149+c_232+c_150-560*
        c_38)+c_31*(c_151+c_152+c_173-16*(c_153+c_7+c_97+c_110+5*p1.z*c_155))+c_2*(c_156+30*c_23*p3.y+c_182-48*c_4*c_160+3*c_3*
        (c_89-16*c_162)+12*p2.y*(c_163-8*p3.y*c_165)+16*(c_166+c_36+2*c_26*p3.z+c_167+4*p2.z*c_27+c_168+10*c_25*c_155+6*c_5*(c_7+c_97+c_110)+3*
        p1.z*(c_26+2*c_7*p3.z+c_119+4*c_27)))+c_22*(15*c_23+30*c_3*p3.y+60*c_24-32*p3.y*c_172+p2.y*(c_173-16*c_175))+p1.y*
        (15*c_104+30*c_32*p3.y+90*c_105-64*c_24*(c_107+c_7+c_176+15*c_8+2*p1.z*(p2.z+5*p3.z))+c_23*(c_173-16*c_178)+32*p3.y*
        (c_116+c_36+3*c_26*p3.z+c_179+10*p2.z*c_27+15*c_38+4*c_25*c_170+3*c_5*(c_7+c_94+c_43)+2*p1.z*(c_26+c_113+6*p2.z*c_8+10*c_27))+12*
        c_3*(c_163-8*p3.y*c_181)+p2.y*(c_182-48*c_4*c_184+16*c_195)))+p1.x*(-15*c_196-15*c_53*p3.x-15*c_120+105*c_122+90*c_127*p2.y+75*
        c_31*c_3+60*c_22*c_23+45*c_2*c_32+30*p1.y*c_104+c_197+90*c_127*p3.y+75*c_31*p2.y*p3.y+60*c_22*c_3*p3.y+45*c_2*c_23*
        p3.y+30*p1.y*c_32*p3.y+15*c_104*p3.y+75*c_31*c_4+60*c_22*p2.y*c_4+45*c_2*c_3*c_4+30*p1.y*c_23*c_4+15*c_32*c_4+60*c_22*c_24+45*
        c_2*p2.y*c_24+30*p1.y*c_3*c_24+15*c_23*c_24+45*c_2*c_33+30*p1.y*p2.y*c_33+15*c_3*c_33+30*p1.y*c_105+15*p2.y*c_105+c_198-1680*
        c_31*c_5-960*c_22*p2.y*c_5-480*c_2*c_3*c_5-192*p1.y*c_23*c_5-48*c_32*c_5-960*c_22*p3.y*c_5-480*c_2*p2.y*p3.y*c_5-192*
        p1.y*c_3*p3.y*c_5-48*c_23*p3.y*c_5-480*c_2*c_4*c_5-192*p1.y*p2.y*c_4*c_5+c_128-192*p1.y*c_24*c_5-48*p2.y*c_24*c_5-48*c_33*
        c_5+1680*c_2*c_34+480*p1.y*p2.y*c_34+80*c_3*c_34+480*p1.y*p3.y*c_34+80*p2.y*p3.y*c_34+80*c_4*c_34-480*c_31*p1.z*p2.z-640*
        c_22*p2.y*p1.z*p2.z-576*c_2*c_3*p1.z*p2.z-384*p1.y*c_23*p1.z*p2.z-160*c_32*p1.z*p2.z-320*c_22*p3.y*p1.z*p2.z-384*
        c_2*p2.y*p3.y*p1.z*p2.z-288*p1.y*c_3*p3.y*p1.z*p2.z+c_199-192*c_2*c_4*p1.z*p2.z-192*p1.y*p2.y*c_4*p1.z*p2.z-96*
        c_3*c_4*p1.z*p2.z-96*p1.y*c_24*p1.z*p2.z-64*p2.y*c_24*p1.z*p2.z+c_200+960*c_2*c_25*p2.z+640*p1.y*p2.y*c_25*p2.z+c_201+320*
        p1.y*p3.y*c_25*p2.z+128*p2.y*p3.y*c_25*p2.z+64*c_4*c_25*p2.z-80*c_31*c_7-192*c_22*p2.y*c_7-288*c_2*c_3*c_7-320*
        p1.y*c_23*c_7+c_202-64*c_22*p3.y*c_7-144*c_2*p2.y*p3.y*c_7-192*p1.y*c_3*p3.y*c_7-160*c_23*p3.y*c_7-48*c_2*c_4*c_7-96*p1.y*
        p2.y*c_4*c_7-96*c_3*c_4*c_7-32*p1.y*c_24*c_7-48*p2.y*c_24*c_7-16*c_33*c_7+480*c_2*c_5*c_7+576*p1.y*p2.y*c_5*c_7+288*c_3*
        c_5*c_7+192*p1.y*p3.y*c_5*c_7+144*p2.y*p3.y*c_5*c_7+c_131+192*c_2*p1.z*c_26+384*p1.y*p2.y*p1.z*c_26+320*c_3*p1.z*c_26+96*
        p1.y*p3.y*p1.z*c_26+c_203+32*c_4*p1.z*c_26+48*c_2*c_36+160*p1.y*p2.y*c_36+c_204+32*p1.y*p3.y*c_36+80*p2.y*p3.y*c_36+16*
        c_4*c_36-480*c_31*p1.z*p3.z-320*c_22*p2.y*p1.z*p3.z-192*c_2*c_3*p1.z*p3.z-96*p1.y*c_23*p1.z*p3.z+c_205-640*c_22*p3.y*
        p1.z*p3.z-384*c_2*p2.y*p3.y*p1.z*p3.z-192*p1.y*c_3*p3.y*p1.z*p3.z-64*c_23*p3.y*p1.z*p3.z-576*c_2*c_4*p1.z*
        p3.z-288*p1.y*p2.y*c_4*p1.z*p3.z-96*c_3*c_4*p1.z*p3.z-384*p1.y*c_24*p1.z*p3.z+c_206-160*c_33*p1.z*p3.z+960*c_2*c_25*
        p3.z+320*p1.y*p2.y*c_25*p3.z+64*c_3*c_25*p3.z+640*p1.y*p3.y*c_25*p3.z+128*p2.y*p3.y*c_25*p3.z+c_207-80*c_31*p2.z*p3.z-128*
        c_22*p2.y*p2.z*p3.z-144*c_2*c_3*p2.z*p3.z-128*p1.y*c_23*p2.z*p3.z-80*c_32*p2.z*p3.z-128*c_22*p3.y*p2.z*p3.z-192*
        c_2*p2.y*p3.y*p2.z*p3.z-192*p1.y*c_3*p3.y*p2.z*p3.z-128*c_23*p3.y*p2.z*p3.z-144*c_2*c_4*p2.z*p3.z-192*p1.y*p2.y*
        c_4*p2.z*p3.z-144*c_3*c_4*p2.z*p3.z-128*p1.y*c_24*p2.z*p3.z-128*p2.y*c_24*p2.z*p3.z-80*c_33*p2.z*p3.z+480*c_2*c_5*
        p2.z*p3.z+384*p1.y*p2.y*c_5*p2.z*p3.z+144*c_3*c_5*p2.z*p3.z+384*p1.y*p3.y*c_5*p2.z*p3.z+c_133+144*c_4*c_5*p2.z*
        p3.z+192*c_2*p1.z*c_7*p3.z+288*p1.y*p2.y*p1.z*c_7*p3.z+c_208+192*p1.y*p3.y*p1.z*c_7*p3.z+192*p2.y*p3.y*p1.z*c_7*p3.z+96*
        c_4*p1.z*c_7*p3.z+48*c_2*c_26*p3.z+128*p1.y*p2.y*c_26*p3.z+160*c_3*c_26*p3.z+64*p1.y*p3.y*c_26*p3.z+128*p2.y*p3.y*
        c_26*p3.z+48*c_4*c_26*p3.z-80*c_31*c_8-64*c_22*p2.y*c_8-48*c_2*c_3*c_8-32*p1.y*c_23*c_8-16*c_32*c_8-192*c_22*p3.y*c_8-144*
        c_2*p2.y*p3.y*c_8-96*p1.y*c_3*p3.y*c_8-48*c_23*p3.y*c_8-288*c_2*c_4*c_8-192*p1.y*p2.y*c_4*c_8-96*c_3*c_4*c_8-320*p1.y*
        c_24*c_8-160*p2.y*c_24*c_8+c_209+480*c_2*c_5*c_8+192*p1.y*p2.y*c_5*c_8+c_136+576*p1.y*p3.y*c_5*c_8+144*p2.y*p3.y*c_5*
        c_8+288*c_4*c_5*c_8+192*c_2*p1.z*p2.z*c_8+192*p1.y*p2.y*p1.z*p2.z*c_8+96*c_3*p1.z*p2.z*c_8+288*p1.y*p3.y*p1.z*p2.z*
        c_8+192*p2.y*p3.y*p1.z*p2.z*c_8+c_210+48*c_2*c_7*c_8+96*p1.y*p2.y*c_7*c_8+96*c_3*c_7*c_8+96*p1.y*p3.y*c_7*c_8+144*p2.y*
        p3.y*c_7*c_8+96*c_4*c_7*c_8+192*c_2*p1.z*c_27+96*p1.y*p2.y*p1.z*c_27+32*c_3*p1.z*c_27+384*p1.y*p3.y*p1.z*c_27+c_211+320*
        c_4*p1.z*c_27+48*c_2*p2.z*c_27+64*p1.y*p2.y*p2.z*c_27+48*c_3*p2.z*c_27+128*p1.y*p3.y*p2.z*c_27+128*p2.y*p3.y*p2.z*
        c_27+160*c_4*p2.z*c_27+48*c_2*c_38+32*p1.y*p2.y*c_38+16*c_3*c_38+160*p1.y*p3.y*c_38+80*p2.y*p3.y*c_38+c_212-c_30*
        (c_215+c_3+c_216+c_89+2*p1.y*(p2.y+5*p3.y)+c_217+c_79+c_14+c_213+c_220+c_214)-c_20*(c_1+c_215+c_151+c_216+c_4+2*p1.y*(5*
        p2.y+p3.y)+c_217+c_218+c_219+c_60+c_220+c_10)+c_21*p3.x*(c_221-3*c_2-10*c_3+c_244+c_222-4*p1.y*c_62+48*c_5+c_223+160*c_7+64*p1.z*p3.z+128*
        p2.z*p3.z+c_224)+c_0*(c_234+c_32+3*c_23*p3.y+c_245+10*p2.y*c_24+c_95+4*c_22*c_225+3*c_2*(c_3+c_29+c_226)+2*p1.y*
        (c_23+c_227+6*p2.y*c_4+c_228)+c_239+c_229+c_230-32*p1.z*c_26+c_145-192*c_25*p3.z+c_252-96*p1.z*c_7*p3.z-48*c_26*p3.z-288*c_5*
        c_8+c_231+c_254+c_232-160*p2.z*c_27+c_233)+p2.x*p3.x*(c_44+c_234+c_235+8*c_23*p3.y+9*c_3*c_4+8*p2.y*c_24+c_236+8*c_22*c_237+3*
        c_2*(c_51+c_55+c_12)+4*p1.y*(2*c_23+c_227+c_238+2*c_24)+c_239-128*c_25*p2.z-144*c_5*c_7-128*p1.z*c_26+c_240-128*c_25*p3.z-192*
        c_5*p2.z*p3.z+c_241-128*c_26*p3.z-144*c_5*c_8+c_231-144*c_7*c_8-128*p1.z*c_27-128*p2.z*c_27+c_242+c_0*(-3*c_2+c_243+c_244-10*
        c_4-4*p1.y*c_69+16*c_184))+c_11*(c_44+c_234+c_156+10*c_23*p3.y+c_245+3*p2.y*c_24+c_33+4*c_22*c_246+3*c_2*(c_247+c_29+c_4)+2*
        p1.y*(c_248+6*c_3*p3.y+c_238+c_24)+c_239-192*c_25*p2.z-288*c_5*c_7+c_249+c_250+c_251+c_252+c_241-160*c_26*p3.z+c_253-96*
        p1.z*p2.z*c_8+c_254-32*p1.z*c_27-48*p2.z*c_27+c_39-3*c_0*(c_2+c_58+c_29+2*p1.y*c_237+2*(c_4-8*c_181))))))/double(483840);
}

double trig::c63() const{
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p21_4=p2.y*p21_3;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p31_4=p3.y*p31_3;
    double p12_2=p1.z*p1.z;
    double p12_3=p1.z*p12_2;
    double p22_2=p2.z*p2.z;
    double p22_3=p2.z*p22_2;
    double p32_2=p3.z*p3.z;
    double p32_3=p3.z*p32_2;
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p11_4=p1.y*p11_3;
    double p30_2=p3.x*p3.x;
    double p30_3=p3.x*p30_2;
    double p30_4=p3.x*p30_3;
    double p20_2=p2.x*p2.x;
    double p20_3=p2.x*p20_2;
    double p20_4=p2.x*p20_3;
    double p20_5=p2.x*p20_4;
    double p20_6=p2.x*p20_5;
    double p10_2=p1.x*p1.x;
    double p10_3=p1.x*p10_2;
    double p10_4=p1.x*p10_3;
    double p10_5=p1.x*p10_4;
    double p10_6=p1.x*p10_5;
    double c_0=6*p1.z;
    double c_1=2*p3.z;
    double c_2=p21_2;
    double c_3=p31_2;
    double c_4=p12_2;
    double c_5=p22_2;
    double c_6=p32_2;
    double c_7=6*p2.z;
    double c_8=2*p1.z;
    double c_9=5*p2.z;
    double c_10=p11_2;
    double c_11=5*p2.y*p3.y*p1.z;
    double c_12=p12_3;
    double c_13=p22_3;
    double c_14=3*c_3*p3.z;
    double c_15=20*p1.z*p2.z*p3.z;
    double c_16=p32_3;
    double c_17=4*c_16;
    double c_18=p30_2;
    double c_19=5*p1.z;
    double c_20=3*p3.z;
    double c_21=4*c_12;
    double c_22=3*p1.z;
    double c_23=p2.z+p3.z;
    double c_24=p20_3;
    double c_25=4*p2.z;
    double c_26=p20_2;
    double c_27=4*p1.z;
    double c_28=3*p2.z;
    double c_29=8*p2.y*p3.y*p1.z;
    double c_30=32*p1.z*p2.z*p3.z;
    double c_31=2*p2.z;
    double c_32=c_0+c_31+p3.z;
    double c_33=c_19+c_28+p3.z;
    double c_34=80*c_12;
    double c_35=3*c_2*p2.z;
    double c_36=4*c_13;
    double c_37=12*c_3*p3.z;
    double c_38=16*c_16;
    double c_39=c_0+p2.z+c_1;
    double c_40=c_19+p2.z+c_20;
    double c_41=p11_3;
    double c_42=p21_3;
    double c_43=p31_3;
    double c_44=p11_4;
    double c_45=p21_4;
    double c_46=p31_4;
    double c_47=p20_4;
    double c_48=c_22+c_9+p3.z;
    double c_49=c_22+c_25+c_1;
    double c_50=3*c_3*p1.z;
    double c_51=3*c_3*p2.z;
    double c_52=6*p2.y*p3.y*p3.z;
    double c_53=12*p1.z*c_6;
    double c_54=12*p2.z*c_6;
    double c_55=c_27+c_25+p3.z;
    double c_56=c_27+c_28+c_1;
    double c_57=40*c_12;
    double c_58=12*c_2*p2.z;
    double c_59=12*p2.y*p3.y*p2.z;
    double c_60=16*c_13;
    double c_61=6*c_2*p3.z;
    double c_62=24*c_5*p3.z;
    double c_63=4*p3.z;
    double c_64=2*c_23;
    double c_65=c_19+c_64;
    double c_66=c_27+c_31+c_20;
    double c_67=p1.z+p2.z+p3.z;
    double c_68=c_22+c_31+c_63;
    double c_69=5*p3.z;
    double c_70=c_22+p2.z+c_69;
    double c_71=c_27+p2.z+c_63;
    double c_72=9*c_42*p3.y*p1.z;
    double c_73=15*c_45*p2.z;
    double c_74=-(24*c_3*c_4*p2.z);
    double c_75=-(36*p2.y*p3.y*p1.z*c_5);
    double c_76=-(40*c_2*c_13);
    double c_77=-(48*p2.y*p3.y*c_4*p3.z);
    double c_78=-(36*c_2*p1.z*p2.z*p3.z);
    double c_79=p30_4;
    double c_80=p2.y*c_66;
    double c_81=3*p3.y*c_71;
    double c_82=c_80+c_81;
    double c_83=6*p3.z;
    double c_84=10*c_12;
    double c_85=3*c_5*p3.z;
    double c_86=6*p2.z*c_6;
    double c_87=10*c_16;
    double c_88=p2.z+c_20;
    double c_89=6*c_4*c_88;
    double c_90=3*p2.z*p3.z;
    double c_91=6*c_6;
    double c_92=c_5+c_90+c_91;
    double c_93=3*p1.z*c_92;
    double c_94=c_84+c_13+c_85+c_86+c_87+c_89+c_93;
    double c_95=c_8+c_31+c_69;
    double c_96=c_8+p2.z+c_83;
    double c_97=4*c_5*p3.z;
    double c_98=-(48*p2.y*p3.y*c_4*p2.z);
    double c_99=-(24*c_2*c_4*p3.z);
    double c_100=p1.z+c_31+c_83;
    double c_101=p2.y*c_56;
    double c_102=p3.y*c_66;
    double c_103=c_101+c_102;
    double c_104=4*p2.z*p3.z;
    double c_105=p1.z+c_28+c_69;
    double c_106=4*c_23;
    double c_107=p1.z+c_106;
    double c_108=3*c_5;
    double c_109=10*c_6;
    double c_110=c_8+c_9+c_1;
    double c_111=c_8+c_25+c_20;
    double c_112=9*c_5*p3.z;
    double c_113=9*p3.z;
    double c_114=c_7+c_113;
    double c_115=c_4*c_114;
    double c_116=2*p2.z*p3.z;
    double c_117=2*c_6;
    double c_118=c_5+c_116+c_117;
    double c_119=6*p1.z*c_118;
    double c_120=c_21+c_36+c_112+c_54+c_87+c_115+c_119;
    double c_121=c_8+c_28+c_63;
    double c_122=12*c_5*p3.z;
    double c_123=18*c_2*c_3*p1.z;
    double c_124=9*p2.y*c_43*p1.z;
    double c_125=-(12*p2.y*p3.y*c_12);
    double c_126=-(24*c_3*p1.z*c_5);
    double c_127=15*c_46*p3.z;
    double c_128=-(96*p2.y*p3.y*p1.z*p2.z*p3.z);
    double c_129=-(36*c_3*p1.z*p2.z*p3.z);
    double c_130=-(24*c_2*p1.z*c_6);
    double c_131=-(36*p2.y*p3.y*p1.z*c_6);
    double c_132=-(40*c_3*c_16);
    double c_133=10*c_13;
    double c_134=6*c_5*p3.z;
    double c_135=p1.z+c_9+c_20;
    double c_136=6*c_5;
    double c_137=9*p2.z*c_6;
    double c_138=5*c_16;
    double c_139=c_8+c_7+p3.z;
    double c_140=9*p2.z;
    double c_141=c_140+c_83;
    double c_142=c_4*c_141;
    double c_143=2*c_5;
    double c_144=c_143+c_116+c_6;
    double c_145=6*p1.z*c_144;
    double c_146=c_21+c_133+c_122+c_137+c_17+c_142+c_145;
    double c_147=4*p2.z*c_6;
    double c_148=p20_5;
    double c_149=60*c_2*p2.z;
    double c_150=48*c_4*p2.z;
    double c_151=80*c_13;
    double c_152=12*c_2*p1.z;
    double c_153=12*p2.y*p3.y*p1.z;
    double c_154=16*c_12;
    double c_155=30*c_2*p2.z;
    double c_156=48*p1.z*c_5;
    double c_157=40*c_13;
    double c_158=24*c_4*p3.z;
    double c_159=48*p1.z*p2.z*p3.z;
    double c_160=24*c_42*p3.y*p1.z;
    double c_161=90*c_45*p2.z;
    double c_162=-(96*p2.y*p3.y*p1.z*c_5);
    double c_163=-(240*c_2*c_13);
    double c_164=-(96*c_2*p1.z*p2.z*p3.z);
    double c_165=5*p3.y*p1.z;
    double c_166=2*p3.y*c_23;
    double c_167=2*p2.y*c_33;
    double c_168=c_165+c_166+c_167;
    double c_169=12*c_4*c_23;
    double c_170=3*c_6;
    double c_171=c_108+c_104+c_170;
    double c_172=3*p1.z*c_171;
    double c_173=c_84+c_36+c_134+c_86+c_17+c_169+c_172;
    double c_174=9*c_3*c_67;
    double c_175=3*p2.z*c_6;
    double c_176=c_28+p3.z;
    double c_177=6*c_4*c_176;
    double c_178=c_136+c_90+c_6;
    double c_179=3*p1.z*c_178;
    double c_180=c_84+c_133+c_134+c_175+c_16+c_177+c_179;
    double c_181=-(4*c_180);
    double c_182=24*p2.y*c_43*p1.z;
    double c_183=-(32*p2.y*p3.y*c_12);
    double c_184=90*c_46*p3.z;
    double c_185=-(96*c_3*p1.z*p2.z*p3.z);
    double c_186=-(96*p2.y*p3.y*p1.z*c_6);
    double c_187=-(240*c_3*c_16);
    double c_188=5*p2.y*p1.z;
    double c_189=2*p2.y*c_23;
    double c_190=2*p3.y*c_40;
    double c_191=c_188+c_189+c_190;
    double c_192=20*c_12;
    double c_193=p2.z+c_1;
    double c_194=8*p3.z;
    double c_195=8*c_5*p3.z;
    double c_196=20*p2.z*c_6;
    double c_197=p2.z+c_63;
    double c_198=c_5+c_104+c_109;
    double c_199=9*c_3*c_68;
    double c_200=-(4*c_173);
    return ((p3.y*(p1.z-p2.z)+p1.y*(p2.z-p3.z)+p2.y*(-p1.z+p3.z))*(-5*p10_6*(7*p1.z+p2.z+p3.z)-5*p20_6*(p1.z+7*
        p2.z+p3.z)-5*c_148*p3.x*(p1.z+c_7+c_1)-5*p10_5*(p2.x*c_32+p3.x*c_39)+c_47*(15*c_2*p1.z+c_11+c_3*p1.z+c_21+105*c_2*p2.z+30*
        p2.y*p3.y*p2.z+5*c_3*p2.z+20*c_4*p2.z+60*p1.z*c_5+140*c_13+15*c_2*p3.z+10*p2.y*p3.y*p3.z+c_14+4*c_4*p3.z+c_15+60*c_5*
        p3.z+4*p1.z*c_6+c_196+c_17+c_10*c_48+5*p1.y*p2.y*c_139+p1.y*p3.y*c_110-5*c_18*c_135)+p10_4*(105*c_10*p1.z+30*p1.y*p2.y*
        p1.z+5*c_2*p1.z+30*p1.y*p3.y*p1.z+c_11+5*c_3*p1.z+140*c_12+15*c_10*p2.z+10*p1.y*p2.y*p2.z+c_35+5*p1.y*p3.y*p2.z+2*
        p2.y*p3.y*p2.z+c_3*p2.z+60*c_4*p2.z+20*p1.z*c_5+c_36+15*c_10*p3.z+5*p1.y*p2.y*p3.z+c_2*p3.z+10*p1.y*p3.y*p3.z+2*
        p2.y*p3.y*p3.z+c_14+60*c_4*p3.z+c_15+c_97+20*p1.z*c_6+c_147+c_17-5*c_26*c_33-5*c_18*c_40-5*p2.x*p3.x*c_65)+c_24*p3.x*
        (10*c_2*p1.z+c_29+c_50+c_21+c_149+40*p2.y*p3.y*p2.z+12*c_3*p2.z+16*c_4*p2.z+40*p1.z*c_5+c_151+20*c_2*p3.z+24*p2.y*p3.y*
        p3.z+c_37+8*c_4*p3.z+c_30+80*c_5*p3.z+c_53+48*p2.z*c_6+c_38+c_10*c_49+p1.y*(8*p2.y*p1.z+4*p3.y*p1.z+20*p2.y*p2.z+8*
        p3.y*p2.z+8*p2.y*p3.z+6*p3.y*p3.z)-5*c_18*c_107)+p10_3*(-5*c_24*c_55-5*c_26*p3.x*c_56+p2.x*(c_152+c_29+4*c_3*
        p1.z+c_34+c_58+6*p2.y*p3.y*p2.z+2*c_3*p2.z+80*c_4*p2.z+c_156+c_60+3*c_2*p3.z+4*p2.y*p3.y*p3.z+c_14+40*c_4*p3.z+c_30+c_122+16*
        p1.z*c_6+8*p2.z*c_6+c_17+10*c_10*c_32-5*c_18*c_66+4*p1.y*c_168)+p3.x*(4*c_2*p1.z+c_29+12*c_3*p1.z+c_34+c_35+4*p2.y*p3.y*
        p2.z+c_51+40*c_4*p2.z+16*p1.z*c_5+c_36+2*c_2*p3.z+c_52+c_37+80*c_4*p3.z+c_30+c_195+48*p1.z*c_6+c_54+c_38+10*c_10*c_39-5*
        c_18*c_71+4*p1.y*c_191))+p10_2*(315*c_44*p1.z+180*c_41*p2.y*p1.z+90*c_10*c_2*p1.z+36*p1.y*c_42*p1.z+9*c_45*p1.z+180*
        c_41*p3.y*p1.z+90*c_10*p2.y*p3.y*p1.z+36*p1.y*c_2*p3.y*p1.z+c_72+90*c_10*c_3*p1.z+36*p1.y*p2.y*c_3*p1.z+9*c_2*c_3*
        p1.z+36*p1.y*c_43*p1.z+c_124+9*c_46*p1.z-840*c_10*c_12-240*p1.y*p2.y*c_12-40*c_2*c_12-240*p1.y*p3.y*c_12-40*p2.y*p3.y*
        c_12-40*c_3*c_12+45*c_44*p2.z+60*c_41*p2.y*p2.z+54*c_10*c_2*p2.z+36*p1.y*c_42*p2.z+c_73+30*c_41*p3.y*p2.z+36*c_10*p2.y*
        p3.y*p2.z+27*p1.y*c_2*p3.y*p2.z+12*c_42*p3.y*p2.z+18*c_10*c_3*p2.z+18*p1.y*p2.y*c_3*p2.z+9*c_2*c_3*p2.z+9*p1.y*c_43*
        p2.z+6*p2.y*c_43*p2.z+3*c_46*p2.z-360*c_10*c_4*p2.z-240*p1.y*p2.y*c_4*p2.z-72*c_2*c_4*p2.z-120*p1.y*p3.y*c_4*
        p2.z+c_98+c_74-120*c_10*p1.z*c_5-144*p1.y*p2.y*p1.z*c_5-72*c_2*p1.z*c_5-48*p1.y*p3.y*p1.z*c_5+c_75-12*c_3*p1.z*c_5-24*c_10*
        c_13-48*p1.y*p2.y*c_13+c_76-12*p1.y*p3.y*c_13-16*p2.y*p3.y*c_13-4*c_3*c_13+45*c_44*p3.z+30*c_41*p2.y*p3.z+18*c_10*
        c_2*p3.z+9*p1.y*c_42*p3.z+3*c_45*p3.z+60*c_41*p3.y*p3.z+36*c_10*p2.y*p3.y*p3.z+18*p1.y*c_2*p3.y*p3.z+6*c_42*p3.y*
        p3.z+54*c_10*c_3*p3.z+27*p1.y*p2.y*c_3*p3.z+9*c_2*c_3*p3.z+36*p1.y*c_43*p3.z+12*p2.y*c_43*p3.z+c_127-360*c_10*c_4*
        p3.z-120*p1.y*p2.y*c_4*p3.z+c_99-240*p1.y*p3.y*c_4*p3.z+c_77-72*c_3*c_4*p3.z-120*c_10*p1.z*p2.z*p3.z-96*p1.y*p2.y*p1.z*
        p2.z*p3.z+c_78-96*p1.y*p3.y*p1.z*p2.z*p3.z-48*p2.y*p3.y*p1.z*p2.z*p3.z+c_129-24*c_10*c_5*p3.z-36*p1.y*p2.y*c_5*
        p3.z-24*c_2*c_5*p3.z-24*p1.y*p3.y*c_5*p3.z-24*p2.y*p3.y*c_5*p3.z-12*c_3*c_5*p3.z-120*c_10*p1.z*c_6-48*p1.y*p2.y*
        p1.z*c_6-12*c_2*p1.z*c_6-144*p1.y*p3.y*p1.z*c_6+c_131-72*c_3*p1.z*c_6-24*c_10*p2.z*c_6-24*p1.y*p2.y*p2.z*c_6-12*c_2*
        p2.z*c_6-36*p1.y*p3.y*p2.z*c_6-24*p2.y*p3.y*p2.z*c_6-24*c_3*p2.z*c_6-24*c_10*c_16-12*p1.y*p2.y*c_16-4*c_2*c_16-48*p1.y*
        p3.y*c_16-16*p2.y*p3.y*c_16+c_132-5*c_47*c_48-5*c_24*p3.x*c_49-5*c_79*c_70+c_26*(18*c_2*p1.z+9*p2.y*p3.y*
        p1.z+c_50+c_57+c_155+c_59+c_51+72*c_4*p2.z+72*p1.z*c_5+c_157+c_61+c_52+c_14+c_158+36*p1.z*p2.z*p3.z+c_62+c_53+c_54+c_17-15*c_18*c_67+6*
        c_10*c_33+9*p1.y*p2.y*c_55+3*p1.y*p3.y*c_56)+p2.x*p3.x*(9*c_2*p1.z+c_153+9*c_3*p1.z+c_57+c_58+c_59+6*c_3*p2.z+c_150+36*
        p1.z*c_5+c_60+c_61+12*p2.y*p3.y*p3.z+c_37+48*c_4*p3.z+c_159+c_62+36*p1.z*c_6+24*p2.z*c_6+c_38-5*c_18*c_68+6*c_10*c_65+6*
        p1.y*c_103)+c_18*(3*c_2*c_67+6*c_10*c_40+3*p2.y*p3.y*c_68+6*c_3*c_70+3*p1.y*c_82+4*c_94))+c_18*(3*c_45*p1.z+c_72+c_123+30*
        p2.y*c_43*p1.z+45*c_46*p1.z-4*c_2*c_12+c_125-24*c_3*c_12+c_73+36*c_42*p3.y*p2.z+54*c_2*c_3*p2.z+60*p2.y*c_43*p2.z+45*
        c_46*p2.z-12*c_2*c_4*p2.z-24*p2.y*p3.y*c_4*p2.z+c_74-24*c_2*p1.z*c_5+c_75+c_126+c_76-48*p2.y*p3.y*c_13-24*c_3*c_13+9*
        c_45*p3.z+36*c_42*p3.y*p3.z+90*c_2*c_3*p3.z+180*p2.y*c_43*p3.z+315*c_46*p3.z-12*c_2*c_4*p3.z+c_77-120*c_3*c_4*
        p3.z+c_78+c_128-120*c_3*p1.z*p2.z*p3.z-72*c_2*c_5*p3.z-144*p2.y*p3.y*c_5*p3.z-120*c_3*c_5*p3.z+c_130-120*p2.y*p3.y*p1.z*
        c_6-360*c_3*p1.z*c_6-72*c_2*p2.z*c_6-240*p2.y*p3.y*p2.z*c_6-360*c_3*p2.z*c_6-40*c_2*c_16-240*p2.y*p3.y*c_16-840*c_3*c_16+3*
        c_44*c_40-5*c_79*(p1.z+p2.z+7*p3.z)+3*c_41*c_82+c_18*(15*c_3*p1.z+c_21+15*c_3*p2.z+4*c_4*p2.z+4*p1.z*c_5+c_36+105*c_3*
        p3.z+20*c_4*p3.z+c_15+20*c_5*p3.z+60*p1.z*c_6+60*p2.z*c_6+140*c_16+c_10*c_70+p1.y*p2.y*c_95+c_2*c_105+5*p1.y*p3.y*c_96+5*
        p2.y*p3.y*c_100)+c_10*(9*c_2*c_67+9*p2.y*p3.y*c_68+18*c_3*c_70-4*c_94)+p1.y*(3*c_42*c_111+9*c_2*p3.y*c_121+18*p2.y*c_3*
        c_95+30*c_43*c_96-4*p2.y*c_120-12*p3.y*(c_21+c_13+c_97+10*p2.z*c_6+20*c_16+3*c_4*c_197+2*p1.z*c_198)))+p2.x*p3.x*(15*
        c_45*p1.z+c_160+27*c_2*c_3*p1.z+c_182+15*c_46*p1.z-12*c_2*c_12-16*p2.y*p3.y*c_12-12*c_3*c_12+c_161+120*c_42*p3.y*p2.z+108*
        c_2*c_3*p2.z+72*p2.y*c_43*p2.z+30*c_46*p2.z-48*c_2*c_4*p2.z+c_98+c_74-120*c_2*p1.z*c_5+c_162-36*c_3*p1.z*c_5+c_163-160*
        p2.y*p3.y*c_13-48*c_3*c_13+30*c_45*p3.z+72*c_42*p3.y*p3.z+108*c_2*c_3*p3.z+120*p2.y*c_43*p3.z+c_184+c_99+c_77-48*c_3*
        c_4*p3.z+c_164-144*p2.y*p3.y*p1.z*p2.z*p3.z+c_185-240*c_2*c_5*p3.z-288*p2.y*p3.y*c_5*p3.z-144*c_3*c_5*p3.z-36*c_2*p1.z*
        c_6+c_186-120*c_3*p1.z*c_6-144*c_2*p2.z*c_6-288*p2.y*p3.y*p2.z*c_6-240*c_3*p2.z*c_6-48*c_2*c_16-160*p2.y*p3.y*c_16+c_187-5*
        c_79*c_100+3*c_44*c_65+6*c_41*c_103+c_10*(36*p2.y*p3.y*c_67+9*c_2*c_49+c_199+c_200)+c_18*(c_10*c_68+8*p2.y*p3.y*
        c_105+10*c_3*c_100+3*c_2*c_107+p1.y*(4*p3.y*c_95+p2.y*(c_27+c_7+c_194))+4*(c_12+2*c_4*c_193+p1.z*(c_108+8*p2.z*p3.z+c_109)+4*
        (c_13+c_85+5*p2.z*c_6+c_138)))+p1.y*(12*c_42*c_110+18*c_2*p3.y*c_111+12*c_43*c_95-8*p3.y*c_120+p2.y*(18*c_3*c_121-8*
        c_146)))+c_26*(45*c_45*p1.z+30*c_42*p3.y*p1.z+c_123+c_124+3*c_46*p1.z-24*c_2*c_12+c_125-4*c_3*c_12+315*c_45*p2.z+180*c_42*p3.y*
        p2.z+90*c_2*c_3*p2.z+36*p2.y*c_43*p2.z+9*c_46*p2.z-120*c_2*c_4*p2.z+c_98-12*c_3*c_4*p2.z-360*c_2*p1.z*c_5-120*p2.y*
        p3.y*p1.z*c_5+c_126-840*c_2*c_13-240*p2.y*p3.y*c_13-40*c_3*c_13+45*c_45*p3.z+60*c_42*p3.y*p3.z+54*c_2*c_3*p3.z+36*p2.y*
        c_43*p3.z+c_127+c_99-24*p2.y*p3.y*c_4*p3.z-12*c_3*c_4*p3.z-120*c_2*p1.z*p2.z*p3.z+c_128+c_129-360*c_2*c_5*p3.z-240*
        p2.y*p3.y*c_5*p3.z-72*c_3*c_5*p3.z+c_130+c_131-24*c_3*p1.z*c_6-120*c_2*p2.z*c_6-144*p2.y*p3.y*p2.z*c_6-72*c_3*p2.z*c_6-24*
        c_2*c_16-48*p2.y*p3.y*c_16+c_132+3*c_44*c_33-5*c_79*c_105+3*c_41*(3*p2.y*c_55+p3.y*c_56)+c_10*(c_174+18*c_2*c_48+9*p2.y*
        p3.y*c_49+c_181)+c_18*(3*c_10*c_67+6*c_2*c_135+6*c_3*c_105+9*p2.y*p3.y*c_107+3*p1.y*(p2.y*c_111+p3.y*c_121)+4*(c_12+3*
        c_4*c_23+p1.z*(c_136+9*p2.z*p3.z+c_91)+2*(5*c_13+c_112+c_137+c_138)))+p1.y*(30*c_42*c_139+18*c_2*p3.y*c_110+3*c_43*c_121-4*
        p3.y*c_146+3*p2.y*(3*c_3*c_111-4*(c_21+20*c_13+10*c_5*p3.z+c_147+c_16+3*c_4*(c_25+p3.z)+2*p1.z*(10*c_5+c_104+c_6)))))+p1.x*
        (-5*c_148*c_139-5*c_47*p3.x*c_110+c_24*(20*c_2*p1.z+c_29+2*c_3*p1.z+c_154+c_149+20*p2.y*p3.y*p2.z+4*c_3*p2.z+c_150+80*
        p1.z*c_5+c_151+10*c_2*p3.z+8*p2.y*p3.y*p3.z+c_14+12*c_4*p3.z+c_30+40*c_5*p3.z+8*p1.z*c_6+16*p2.z*c_6+c_17+3*c_10*c_55+8*
        p1.y*p2.y*c_48+2*p1.y*p3.y*c_49-5*c_18*c_111)+c_26*p3.x*(c_152+c_153+6*c_3*p1.z+c_154+c_155+24*p2.y*p3.y*p2.z+9*c_3*
        p2.z+36*c_4*p2.z+c_156+c_157+12*c_2*p3.z+18*p2.y*p3.y*p3.z+c_37+c_158+c_159+48*c_5*p3.z+24*p1.z*c_6+36*p2.z*c_6+c_38+3*
        c_10*c_56-5*c_18*c_121+6*p1.y*(2*p3.y*c_67+p2.y*c_49))+p2.x*(30*c_45*p1.z+c_160+c_123+12*p2.y*c_43*p1.z+6*c_46*p1.z-48*
        c_2*c_12+c_183-16*c_3*c_12+c_161+60*c_42*p3.y*p2.z+36*c_2*c_3*p2.z+18*p2.y*c_43*p2.z+6*c_46*p2.z-144*c_2*c_4*p2.z-72*
        p2.y*p3.y*c_4*p2.z+c_74-240*c_2*p1.z*c_5+c_162+c_126+c_163-80*p2.y*p3.y*c_13-16*c_3*c_13+15*c_45*p3.z+24*c_42*p3.y*
        p3.z+27*c_2*c_3*p3.z+24*p2.y*c_43*p3.z+c_127-36*c_2*c_4*p3.z+c_77-36*c_3*c_4*p3.z+c_164+c_128-48*c_3*p1.z*p2.z*p3.z-120*
        c_2*c_5*p3.z-96*p2.y*p3.y*c_5*p3.z-36*c_3*c_5*p3.z+c_130-48*p2.y*p3.y*p1.z*c_6-48*c_3*p1.z*c_6-48*c_2*p2.z*c_6-72*p2.y*
        p3.y*p2.z*c_6-48*c_3*p2.z*c_6-12*c_2*c_16-32*p2.y*p3.y*c_16+c_132+15*c_44*c_32-5*c_79*c_95+12*c_41*c_168+3*c_10*(9*c_2*
        c_55+6*p2.y*p3.y*c_56+3*c_3*c_66-4*(c_192+c_36+c_85+2*p2.z*c_6+c_16+10*c_4*(c_31+p3.z)+4*p1.z*(c_108+c_116+c_6)))+c_18*(3*
        c_10*c_66+3*c_2*c_111+6*p2.y*p3.y*c_121+6*c_3*c_95+6*p1.y*(2*p2.y*c_67+p3.y*c_68)+4*c_120)+2*p1.y*(12*c_42*c_48+9*c_2*
        p3.y*c_49+3*c_43*c_68-4*p3.y*c_173+2*p2.y*(c_174+c_181)))+p3.x*(6*c_45*p1.z+12*c_42*p3.y*p1.z+c_123+c_182+30*c_46*p1.z-16*
        c_2*c_12+c_183-48*c_3*c_12+c_73+24*c_42*p3.y*p2.z+27*c_2*c_3*p2.z+24*p2.y*c_43*p2.z+15*c_46*p2.z-36*c_2*c_4*p2.z+c_98-36*
        c_3*c_4*p2.z-48*c_2*p1.z*c_5-48*p2.y*p3.y*p1.z*c_5+c_126+c_76-32*p2.y*p3.y*c_13-12*c_3*c_13+6*c_45*p3.z+18*c_42*p3.y*
        p3.z+36*c_2*c_3*p3.z+60*p2.y*c_43*p3.z+c_184+c_99-72*p2.y*p3.y*c_4*p3.z-144*c_3*c_4*p3.z-48*c_2*p1.z*p2.z*
        p3.z+c_128+c_185-48*c_2*c_5*p3.z-72*p2.y*p3.y*c_5*p3.z-48*c_3*c_5*p3.z+c_130+c_186-240*c_3*p1.z*c_6-36*c_2*p2.z*c_6-96*p2.y*
        p3.y*p2.z*c_6-120*c_3*p2.z*c_6-16*c_2*c_16-80*p2.y*p3.y*c_16+c_187+15*c_44*c_39-5*c_79*c_96+12*c_41*c_191+3*c_10*(3*c_2*c_56+6*
        p2.y*p3.y*c_66+9*c_3*c_71-4*(c_192+c_13+2*c_5*p3.z+c_175+c_17+10*c_4*c_193+4*p1.z*(c_5+c_116+c_170)))+c_18*(3*c_10*c_71+c_2*
        c_121+4*p2.y*p3.y*c_95+p1.y*(8*p3.y*c_70+p2.y*(c_0+c_25+c_194))+2*(8*c_12+2*c_13+c_195+c_196+40*c_16+6*c_4*c_197+5*c_3*
        c_96+4*p1.z*c_198))+2*p1.y*(18*c_2*p3.y*c_67+3*c_42*c_49+12*c_43*c_70-8*p3.y*c_94+p2.y*(c_199+c_200))))))/double(967680);
}

double trig::c64() const{
    double p30_2=p3.x*p3.x;
    double p30_3=p3.x*p30_2;
    double p30_4=p3.x*p30_3;
    double p30_5=p3.x*p30_4;
    double p30_6=p3.x*p30_5;
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p11_4=p1.y*p11_3;
    double p11_5=p1.y*p11_4;
    double p11_6=p1.y*p11_5;
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p21_4=p2.y*p21_3;
    double p21_5=p2.y*p21_4;
    double p21_6=p2.y*p21_5;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p31_4=p3.y*p31_3;
    double p31_5=p3.y*p31_4;
    double p31_6=p3.y*p31_5;
    double p12_2=p1.z*p1.z;
    double p22_2=p2.z*p2.z;
    double p32_2=p3.z*p3.z;
    double p20_2=p2.x*p2.x;
    double p20_3=p2.x*p20_2;
    double p20_4=p2.x*p20_3;
    double p20_5=p2.x*p20_4;
    double p20_6=p2.x*p20_5;
    double p20_7=p2.x*p20_6;
    double p10_2=p1.x*p1.x;
    double p10_3=p1.x*p10_2;
    double p10_4=p1.x*p10_3;
    double p10_5=p1.x*p10_4;
    double p10_6=p1.x*p10_5;
    double p10_7=p1.x*p10_6;
    double c_0=p30_2;
    double c_1=3*c_0;
    double c_2=p11_2;
    double c_3=-c_2;
    double c_4=p21_2;
    double c_5=p31_2;
    double c_6=p12_2;
    double c_7=-(2*c_6);
    double c_8=p22_2;
    double c_9=p32_2;
    double c_10=-c_5;
    double c_11=-(12*p1.z*p2.z);
    double c_12=-(2*c_9);
    double c_13=p20_2;
    double c_14=-c_4;
    double c_15=-(3*c_5);
    double c_16=-(10*p1.z*p2.z);
    double c_17=-(2*c_8);
    double c_18=-(6*c_9);
    double c_19=-(15*c_2);
    double c_20=-(2*p2.y*p3.y);
    double c_21=-(30*c_6);
    double c_22=-(4*p2.z*p3.z);
    double c_23=2*p3.y;
    double c_24=3*p2.y;
    double c_25=3*p1.z*p2.z;
    double c_26=p21_3;
    double c_27=6*c_8;
    double c_28=6*c_9;
    double c_29=p20_3;
    double c_30=p30_4;
    double c_31=3*c_30;
    double c_32=p11_4;
    double c_33=-c_32;
    double c_34=p21_4;
    double c_35=-(20*c_26*p3.y);
    double c_36=p31_3;
    double c_37=p31_4;
    double c_38=p11_3;
    double c_39=120*p2.y*p3.y*c_8;
    double c_40=120*c_4*p2.z*p3.z;
    double c_41=6*c_6;
    double c_42=4*p2.y;
    double c_43=6*p2.y*p3.y;
    double c_44=10*c_8;
    double c_45=3*p1.z*p3.z;
    double c_46=12*p2.z*p3.z;
    double c_47=20*c_8;
    double c_48=16*p2.z*p3.z;
    double c_49=2*p2.z;
    double c_50=c_49+p3.z;
    double c_51=8*p1.z*c_50;
    double c_52=3*c_6;
    double c_53=p20_4;
    double c_54=-c_37;
    double c_55=20*c_4*c_6;
    double c_56=8*c_5*p1.z*p2.z;
    double c_57=16*p2.y*p3.y*p1.z*p3.z;
    double c_58=24*c_5*p1.z*p3.z;
    double c_59=12*c_5*c_9;
    double c_60=-(3*c_4);
    double c_61=-(4*p2.y*p3.y);
    double c_62=-(6*c_8);
    double c_63=-(10*c_2);
    double c_64=-(20*c_6);
    double c_65=3*p3.y;
    double c_66=3*c_5;
    double c_67=2*p2.y;
    double c_68=c_67+p3.y;
    double c_69=3*c_4;
    double c_70=2*c_6;
    double c_71=4*p1.z*p2.z;
    double c_72=2*p2.z*p3.z;
    double c_73=10*c_6;
    double c_74=3*c_8;
    double c_75=4*p2.z*p3.z;
    double c_76=p2.z+p3.z;
    double c_77=3*p2.z*p3.z;
    double c_78=2*c_8;
    double c_79=2*p1.z*p3.z;
    double c_80=c_70+c_25+c_78+c_79+c_72+c_9;
    double c_81=p21_5;
    double c_82=p31_5;
    double c_83=10*c_9;
    double c_84=3*c_36;
    double c_85=4*p1.z*p3.z;
    double c_86=8*p2.z*p3.z;
    double c_87=3*c_9;
    double c_88=2*c_9;
    double c_89=15*c_8;
    double c_90=5*p2.z*p3.z;
    double c_91=5*p2.z;
    double c_92=c_91+p3.z;
    double c_93=2*p1.z*c_92;
    double c_94=c_52+c_89+c_90+c_9+c_93;
    double c_95=2*p2.y*p3.y;
    double c_96=-3*c_5;
    double c_97=2*p1.z*p2.z;
    double c_98=p20_6;
    double c_99=p20_5;
    double c_100=p30_6;
    double c_101=3*c_100;
    double c_102=p11_6;
    double c_103=p11_5;
    double c_104=p21_6;
    double c_105=p31_6;
    double c_106=3*c_105;
    double c_107=-(6*c_4*c_5*c_6);
    double c_108=-(4*c_37*p1.z*p2.z);
    double c_109=-(16*p2.y*c_36*p1.z*p3.z);
    double c_110=-(30*c_37*c_9);
    double c_111=-(16*p1.z*p2.z);
    double c_112=-(8*p1.z*p3.z);
    double c_113=-(3*c_2);
    double c_114=-(15*c_4);
    double c_115=-(6*c_6);
    double c_116=-(20*p1.z*p2.z);
    double c_117=-(30*c_8);
    double c_118=-(4*p1.z*p3.z);
    double c_119=15*c_5;
    double c_120=10*p2.z*p3.z;
    double c_121=30*c_9;
    double c_122=-(5*c_34);
    double c_123=-(5*c_37);
    double c_124=p2.y+p3.y;
    double c_125=48*p2.y*p3.y*p1.z*p2.z;
    double c_126=24*c_4*p1.z*p3.z;
    double c_127=60*c_5*c_9;
    double c_128=3*c_2;
    double c_129=p2.y+c_23;
    double c_130=8*p1.z*p2.z;
    double c_131=16*p1.z*p3.z;
    double c_132=-(5*c_32);
    double c_133=-(15*c_34);
    double c_134=c_24+p3.y;
    double c_135=6*c_5*c_6;
    double c_136=120*c_4*p1.z*p2.z;
    double c_137=180*c_4*c_8;
    double c_138=2*c_4;
    double c_139=3*p2.y*p3.y;
    double c_140=2*p1.z*c_76;
    double c_141=3*p2.z;
    double c_142=c_141+p3.z;
    double c_143=4*p1.z*c_142;
    double c_144=c_73+c_27+c_77+c_9+c_143;
    double c_145=-10*c_26;
    double c_146=-(3*p2.y*c_5);
    double c_147=4*p2.z;
    double c_148=c_147+p3.z;
    double c_149=3*p1.z*c_148;
    double c_150=c_41+c_44+c_75+c_9+c_149;
    double c_151=-c_34;
    double c_152=-(15*c_37);
    double c_153=p2.y+c_65;
    double c_154=-c_6;
    double c_155=-(3*p2.z*p3.z);
    double c_156=-(2*p1.z*c_76);
    double c_157=c_5+c_154+c_17+c_155+c_12+c_156;
    double c_158=2*p3.z;
    double c_159=p2.z+c_158;
    double c_160=4*p1.z*c_159;
    double c_161=c_52+c_74+c_86+c_83+c_160;
    double c_162=15*c_9;
    double c_163=3*p3.z;
    double c_164=p2.z+c_163;
    double c_165=4*p1.z*c_164;
    double c_166=-(3*c_4*p3.y);
    double c_167=-(10*c_36);
    double c_168=-(2*p2.z*p3.z);
    double c_169=-(10*c_4);
    double c_170=c_42+p3.y;
    double c_171=-(24*p1.z*p2.z);
    double c_172=-(20*c_8);
    double c_173=-(6*p1.z*p3.z);
    double c_174=-(8*p2.z*p3.z);
    double c_175=-(2*p1.y*p3.y);
    double c_176=-(4*c_6);
    double c_177=36*c_4*c_6;
    double c_178=24*p2.y*p3.y*c_6;
    double c_179=12*c_5*p1.z*p2.z;
    double c_180=60*c_4*c_8;
    double c_181=24*p2.y*p3.y*p1.z*p3.z;
    double c_182=c_67+c_65;
    double c_183=15*c_6;
    double c_184=5*p1.z*c_50;
    double c_185=c_183+c_74+c_72+c_9+c_184;
    double c_186=-(2*c_185);
    double c_187=-4*c_26;
    double c_188=20*c_6;
    double c_189=-(15*c_32);
    double c_190=-(3*c_4*c_5);
    double c_191=-(4*p2.y*c_36);
    double c_192=12*c_4*c_6;
    double c_193=18*c_5*p1.z*p2.z;
    double c_194=12*c_4*c_8;
    double c_195=6*c_5*c_8;
    double c_196=36*p2.y*p3.y*p1.z*p3.z;
    double c_197=24*p2.y*p3.y*p2.z*p3.z;
    double c_198=24*c_5*p2.z*p3.z;
    double c_199=6*c_4*c_9;
    double c_200=24*p2.y*p3.y*c_9;
    double c_201=-c_26;
    double c_202=16*p1.z*c_76;
    double c_203=4*p3.y;
    double c_204=5*c_5;
    double c_205=4*p3.z;
    double c_206=p2.z+c_205;
    double c_207=3*p1.z*c_206;
    double c_208=3*c_102;
    double c_209=3*c_104;
    double c_210=12*c_26*c_36;
    double c_211=-(16*c_26*p3.y*p1.z*p2.z);
    double c_212=-(30*c_34*c_8);
    double c_213=-(24*p2.y*c_36*c_8);
    double c_214=-(4*c_34*p1.z*p3.z);
    double c_215=-(72*c_4*c_5*p2.z*p3.z);
    double c_216=-(24*c_26*p3.y*c_9);
    double c_217=5*p1.z*c_159;
    double c_218=c_183+c_8+c_72+c_87+c_217;
    double c_219=-(2*c_218);
    double c_220=8*p1.z*c_76;
    double c_221=c_73+c_74+c_75+c_87+c_220;
    double c_222=-c_8;
    double c_223=-(2*p1.z*p2.z);
    double c_224=-(3*p1.z*p3.z);
    double c_225=c_5+c_7+c_223+c_222+c_224+c_168+c_12;
    double c_226=c_41+c_8+c_75+c_83+c_207;
    double c_227=-(2*c_80);
    double c_228=5*p3.z;
    double c_229=p2.z+c_228;
    double c_230=2*p1.z*c_229;
    double c_231=c_52+c_8+c_90+c_162+c_230;
    double c_232=9*c_5;
    double c_233=-(4*c_26*p3.y);
    double c_234=-(20*p2.y*c_36);
    double c_235=p2.y+c_203;
    double c_236=5*p1.z*p3.z;
    double c_237=c_6+c_97+c_74+c_236+c_120+c_162;
    double c_238=6*p2.z*p3.z;
    double c_239=-5*c_5;
    double c_240=8*p1.z*p3.z;
    return ((p3.y*(-p1.z+p2.z)+p2.y*(p1.z-p3.z)+p1.y*(-p2.z+p3.z))*(3*p10_7+3*p20_7+3*c_98*p3.x+3*p10_6*(p2.x+p3.x)+c_53*
        p3.x*(c_1+c_3-5*p1.y*p2.y+c_114+c_175-10*p2.y*p3.y+c_15+c_7+c_16+c_117+c_118-20*p2.z*p3.z+c_18)+c_99*(c_1+c_3-21*c_4-6*
        p2.y*p3.y+c_10-p1.y*(6*p2.y+p3.y)+c_7+c_11-42*c_8-2*p1.z*p3.z-12*p2.z*p3.z+c_12)+p10_5*(3*c_13+3*p2.x*p3.x+c_1-21*
        c_2-6*p1.y*p2.y+c_14-6*p1.y*p3.y-p2.y*p3.y+c_10-42*c_6+c_11+c_17-12*p1.z*p3.z+c_168+c_12)+p10_4*(3*c_29+3*c_13*p3.x+p3.x*
        (c_1+c_19+c_14+c_20+c_15-5*p1.y*c_129+c_21+c_16+c_17-20*p1.z*p3.z+c_22+c_18)+p2.x*(c_1+c_19+c_60+c_20+c_10-5*p1.y*
        c_68+c_21+c_116+c_62-10*p1.z*p3.z+c_22+c_12))+c_13*p3.x*(c_31+c_33+c_133+c_35-18*c_4*c_5-12*p2.y*c_36+c_123-c_38*(c_24+c_23)+c_192+12*
        p2.y*p3.y*c_6+c_135+60*c_4*p1.z*p2.z+c_125+c_193+c_137+c_39+36*c_5*c_8+c_126+c_196+c_58+c_40+144*p2.y*p3.y*p2.z*
        p3.z+72*c_5*p2.z*p3.z+36*c_4*c_9+72*p2.y*p3.y*c_9+c_127-3*c_2*(c_138+c_95+c_5+c_227)-c_0*(c_2+p1.y*(c_24+c_203)+2*
        (c_69+c_43+c_204+c_6+c_25+c_27+c_85+c_46+c_83))+p1.y*(c_145-12*c_4*p3.y+4*p3.y*(c_10+c_52+c_27+9*p2.z*p3.z+c_28+6*p1.z*c_76)+3*
        p2.y*(c_96+c_41+c_47+c_48+c_28+c_51)))+c_29*(c_31+c_33-35*c_34+c_35-10*c_4*c_5+c_191+c_54-c_38*c_170+c_55+8*p2.y*p3.y*c_6+2*c_5*
        c_6+c_136+40*p2.y*p3.y*p1.z*p2.z+c_56+420*c_4*c_8+c_39+20*c_5*c_8+20*c_4*p1.z*p3.z+c_57+6*c_5*p1.z*p3.z+c_40+80*p2.y*
        p3.y*p2.z*p3.z+c_198+20*c_4*c_9+c_200+c_59+c_2*(-10*c_4+c_61+c_10+2*(c_41+12*p1.z*p2.z+c_44+c_45+c_75+c_9))-c_0*(c_2+p1.y*
        (c_42+c_65)+2*(5*c_4+c_43+c_66+c_6+c_71+c_44+c_45+c_46+c_28))+p1.y*(-20*c_26-10*c_4*p3.y-4*p2.y*c_5+p3.y*
        (c_10+c_41+c_47+c_48+c_28+c_51)+8*p2.y*c_94))+p10_3*(3*c_53+3*c_29*p3.x+c_31-35*c_32-20*c_38*p2.y-10*c_2*c_4-4*p1.y*c_26+c_151-20*c_38*p3.y-10*
        c_2*p2.y*p3.y-4*p1.y*c_4*p3.y-c_26*p3.y-10*c_2*c_5-4*p1.y*p2.y*c_5-c_4*c_5-4*p1.y*c_36-p2.y*c_36+c_54+420*c_2*
        c_6+120*p1.y*p2.y*c_6+c_55+120*p1.y*p3.y*c_6+20*p2.y*p3.y*c_6+20*c_5*c_6+120*c_2*p1.z*p2.z+80*p1.y*p2.y*p1.z*p2.z+24*
        c_4*p1.z*p2.z+40*p1.y*p3.y*p1.z*p2.z+16*p2.y*p3.y*p1.z*p2.z+c_56+20*c_2*c_8+24*p1.y*p2.y*c_8+c_194+8*p1.y*p3.y*c_8+6*
        p2.y*p3.y*c_8+2*c_5*c_8+120*c_2*p1.z*p3.z+40*p1.y*p2.y*p1.z*p3.z+8*c_4*p1.z*p3.z+80*p1.y*p3.y*p1.z*p3.z+c_57+c_58+20*
        c_2*p2.z*p3.z+16*p1.y*p2.y*p2.z*p3.z+6*c_4*p2.z*p3.z+16*p1.y*p3.y*p2.z*p3.z+8*p2.y*p3.y*p2.z*p3.z+6*c_5*
        p2.z*p3.z+20*c_2*c_9+8*p1.y*p2.y*c_9+2*c_4*c_9+24*p1.y*p3.y*c_9+6*p2.y*p3.y*c_9+c_59+p2.x*p3.x*(c_1+c_63+c_60+c_61+c_15-8*
        p1.y*c_124+c_64+c_111+c_62-16*p1.z*p3.z+c_174+c_18)+c_13*(c_1+c_63-6*c_4-3*p2.y*p3.y+c_10-4*p1.y*c_134+c_64+c_171-12*
        c_8+c_112-6*p2.z*p3.z+c_12)-c_0*(10*c_2+c_4+c_139+4*p1.y*c_153+2*(c_66+c_73+c_8+c_77+c_28+c_165)))+p2.x*(c_101+c_208+21*
        c_104+18*c_81*p3.y+15*c_34*c_5+c_210+9*c_4*c_37+6*p2.y*c_82+c_106+3*c_103*c_68-10*c_34*c_6-8*c_26*p3.y*c_6+c_107-4*p2.y*c_36*
        c_6-2*c_37*c_6-60*c_34*p1.z*p2.z-40*c_26*p3.y*p1.z*p2.z-24*c_4*c_5*p1.z*p2.z-12*p2.y*c_36*p1.z*p2.z+c_108-210*c_34*
        c_8-120*c_26*p3.y*c_8-60*c_4*c_5*c_8+c_213-6*c_37*c_8-10*c_34*p1.z*p3.z-16*c_26*p3.y*p1.z*p3.z-18*c_4*c_5*p1.z*p3.z+c_109-10*
        c_37*p1.z*p3.z-60*c_34*p2.z*p3.z-80*c_26*p3.y*p2.z*p3.z+c_215-48*p2.y*c_36*p2.z*p3.z-20*c_37*p2.z*p3.z-10*c_34*
        c_9+c_216-36*c_4*c_5*c_9-40*p2.y*c_36*c_9+c_110-c_30*(c_2+2*p1.y*p2.y+c_69+5*p1.y*p3.y+10*p2.y*p3.y+c_119+c_70+c_71+c_27+10*
        p1.z*p3.z+20*p2.z*p3.z+c_121)+c_32*(9*c_4+c_43+c_66+c_186)+c_38*(12*c_26+9*c_4*p3.y+6*p2.y*c_5+c_84-2*p3.y*c_221-4*
        p2.y*c_144)+3*c_2*(5*c_34+4*c_26*p3.y+c_37-2*c_5*(c_70+c_97+c_8+c_45+c_72+c_88)+2*p2.y*(c_36-2*p3.y*c_80)+c_4*(c_66-2*
        c_150))+p1.y*(18*c_81+15*c_34*p3.y+3*c_82-2*c_36*(c_52+c_71+c_74+c_240+c_86+c_83)+3*c_4*(c_84-2*p3.y*(c_52+c_130+c_44+c_85+c_86+c_87))+6*
        p2.y*(c_37-2*c_5*(c_6+c_78+c_77+c_88+c_140))+4*c_26*(c_66-2*c_94))+c_0*(c_33+c_122-12*c_26*p3.y+c_234+c_152-c_38*c_182-3*
        c_2*(c_4+c_95+2*c_5+c_176-4*p1.z*p2.z+c_17+c_173+c_22-4*c_9)+6*c_4*(c_96+c_6+c_71+c_44+c_45+c_46+c_28)+12*p2.y*p3.y*
        (c_6+c_25+c_27+c_85+c_46+c_83)+12*c_5*c_237+p1.y*(c_187-9*c_4*p3.y+c_167-12*p2.y*c_157+6*p3.y*c_161)))+p1.x*(3*c_98+3*c_99*
        p3.x+c_101+21*c_102+18*c_103*p2.y+15*c_32*c_4+12*c_38*c_26+9*c_2*c_34+6*p1.y*c_81+c_209+18*c_103*p3.y+15*c_32*p2.y*p3.y+12*
        c_38*c_4*p3.y+9*c_2*c_26*p3.y+6*p1.y*c_34*p3.y+3*c_81*p3.y+15*c_32*c_5+12*c_38*p2.y*c_5+9*c_2*c_4*c_5+6*p1.y*c_26*c_5+3*
        c_34*c_5+12*c_38*c_36+9*c_2*p2.y*c_36+6*p1.y*c_4*c_36+3*c_26*c_36+9*c_2*c_37+6*p1.y*p2.y*c_37+3*c_4*c_37+6*p1.y*c_82+3*p2.y*
        c_82+c_106-210*c_32*c_6-120*c_38*p2.y*c_6-60*c_2*c_4*c_6-24*p1.y*c_26*c_6-6*c_34*c_6-120*c_38*p3.y*c_6-60*c_2*p2.y*p3.y*
        c_6-24*p1.y*c_4*p3.y*c_6-6*c_26*p3.y*c_6-60*c_2*c_5*c_6-24*p1.y*p2.y*c_5*c_6+c_107-24*p1.y*c_36*c_6-6*p2.y*c_36*c_6-6*c_37*
        c_6-60*c_32*p1.z*p2.z-80*c_38*p2.y*p1.z*p2.z-72*c_2*c_4*p1.z*p2.z-48*p1.y*c_26*p1.z*p2.z-20*c_34*p1.z*p2.z-40*c_38*
        p3.y*p1.z*p2.z-48*c_2*p2.y*p3.y*p1.z*p2.z-36*p1.y*c_4*p3.y*p1.z*p2.z+c_211-24*c_2*c_5*p1.z*p2.z-24*p1.y*p2.y*
        c_5*p1.z*p2.z-12*c_4*c_5*p1.z*p2.z-12*p1.y*c_36*p1.z*p2.z-8*p2.y*c_36*p1.z*p2.z+c_108-10*c_32*c_8-24*c_38*p2.y*c_8-36*
        c_2*c_4*c_8-40*p1.y*c_26*c_8+c_212-8*c_38*p3.y*c_8-18*c_2*p2.y*p3.y*c_8-24*p1.y*c_4*p3.y*c_8-20*c_26*p3.y*c_8-6*c_2*c_5*
        c_8-12*p1.y*p2.y*c_5*c_8-12*c_4*c_5*c_8-4*p1.y*c_36*c_8-6*p2.y*c_36*c_8-2*c_37*c_8-60*c_32*p1.z*p3.z-40*c_38*p2.y*p1.z*
        p3.z-24*c_2*c_4*p1.z*p3.z-12*p1.y*c_26*p1.z*p3.z+c_214-80*c_38*p3.y*p1.z*p3.z-48*c_2*p2.y*p3.y*p1.z*p3.z-24*p1.y*
        c_4*p3.y*p1.z*p3.z-8*c_26*p3.y*p1.z*p3.z-72*c_2*c_5*p1.z*p3.z-36*p1.y*p2.y*c_5*p1.z*p3.z-12*c_4*c_5*p1.z*p3.z-48*
        p1.y*c_36*p1.z*p3.z+c_109-20*c_37*p1.z*p3.z-10*c_32*p2.z*p3.z-16*c_38*p2.y*p2.z*p3.z-18*c_2*c_4*p2.z*p3.z-16*p1.y*
        c_26*p2.z*p3.z-10*c_34*p2.z*p3.z-16*c_38*p3.y*p2.z*p3.z-24*c_2*p2.y*p3.y*p2.z*p3.z-24*p1.y*c_4*p3.y*p2.z*p3.z-16*
        c_26*p3.y*p2.z*p3.z-18*c_2*c_5*p2.z*p3.z-24*p1.y*p2.y*c_5*p2.z*p3.z-18*c_4*c_5*p2.z*p3.z-16*p1.y*c_36*p2.z*p3.z-16*
        p2.y*c_36*p2.z*p3.z-10*c_37*p2.z*p3.z-10*c_32*c_9-8*c_38*p2.y*c_9-6*c_2*c_4*c_9-4*p1.y*c_26*c_9-2*c_34*c_9-24*c_38*
        p3.y*c_9-18*c_2*p2.y*p3.y*c_9-12*p1.y*c_4*p3.y*c_9-6*c_26*p3.y*c_9-36*c_2*c_5*c_9-24*p1.y*p2.y*c_5*c_9-12*c_4*c_5*c_9-40*
        p1.y*c_36*c_9-20*p2.y*c_36*c_9+c_110+c_29*p3.x*(c_1+c_113+c_169-8*p2.y*p3.y+c_15-4*p1.y*c_68+c_115+c_111+c_172+c_112-16*
        p2.z*p3.z+c_18)+c_53*(c_1+c_113+c_114-5*p2.y*p3.y+c_10-2*p1.y*(5*p2.y+p3.y)+c_115+c_116+c_117+c_118-10*p2.z*p3.z+c_12)-c_30*
        (c_128+c_4+5*p2.y*p3.y+c_119+2*p1.y*(p2.y+5*p3.y)+c_41+c_71+c_78+20*p1.z*p3.z+c_120+c_121)+p2.x*p3.x*(c_31+c_132+c_122-8*
        c_26*p3.y-9*c_4*c_5-8*p2.y*c_36+c_123-8*c_38*c_124+18*c_4*c_6+c_178+18*c_5*c_6+48*c_4*p1.z*p2.z+c_125+24*c_5*p1.z*
        p2.z+c_180+48*p2.y*p3.y*c_8+18*c_5*c_8+c_126+48*p2.y*p3.y*p1.z*p3.z+48*c_5*p1.z*p3.z+48*c_4*p2.z*p3.z+72*p2.y*p3.y*
        p2.z*p3.z+48*c_5*p2.z*p3.z+18*c_4*c_9+48*p2.y*p3.y*c_9+c_127+3*c_2*(-3*c_4+c_61+c_15+c_188+16*p1.z*p2.z+c_27+c_131+c_86+c_28)-c_0*
        (c_128+c_69+8*p2.y*p3.y+10*c_5+4*p1.y*c_129+c_41+c_130+c_27+c_131+c_48+20*c_9)+4*p1.y*(-2*c_26+c_166+c_146+6*
        p2.y*c_80+2*p3.y*(c_10+c_41+6*p1.z*p2.z+c_74+9*p1.z*p3.z+c_238+c_28)))+c_13*(c_31+c_132+c_133-10*c_26*p3.y-6*c_4*c_5-3*
        p2.y*c_36+c_54-4*c_38*c_134+c_177+18*p2.y*p3.y*c_6+c_135+c_136+c_125+c_179+c_137+60*p2.y*p3.y*c_8+12*c_5*c_8+c_126+c_181+12*
        c_5*p1.z*p3.z+60*c_4*p2.z*p3.z+48*p2.y*p3.y*p2.z*p3.z+18*c_5*p2.z*p3.z+12*c_4*c_9+18*p2.y*p3.y*c_9+c_59-3*c_0*
        (c_2+c_138+c_139+2*p1.y*c_124+2*(c_5+c_6+c_78+c_77+c_88+c_140))-3*c_2*(6*c_4+c_139+c_5-2*c_144)+2*p1.y*(c_145-6*c_4*p3.y+c_146-c_36+6*
        p3.y*c_80+6*p2.y*c_150))+c_0*(-5*c_32+c_151-3*c_26*p3.y-10*p2.y*c_36+c_152-4*c_38*c_153-6*c_4*c_157+6*p2.y*p3.y*
        c_161+12*c_5*c_231-3*c_2*(c_4+c_139+6*c_5-2*(c_73+c_8+c_77+c_28+c_165))+2*p1.y*(c_201+c_166+c_167-6*p2.y*c_225+6*p3.y*c_226)))+p10_2*
        (3*c_99+3*c_53*p3.x+c_29*(c_1-6*c_2+c_169+c_61+c_10-3*p1.y*c_170-12*c_6+c_171+c_172+c_173+c_174+c_12)+3*c_13*p3.x*(c_0-2*
        c_2-3*p1.y*p2.y-2*c_4+c_175+c_20+c_10+c_176-6*p1.z*p2.z-4*c_8+c_118+c_22+c_12)+p2.x*(c_31+c_189+c_122+c_233+c_190-2*p2.y*
        c_36+c_54-10*c_38*c_68+c_177+c_178+12*c_5*c_6+72*c_4*p1.z*p2.z+36*p2.y*p3.y*p1.z*p2.z+c_179+c_180+24*p2.y*p3.y*
        c_8+c_195+18*c_4*p1.z*p3.z+c_181+18*c_5*p1.z*p3.z+24*c_4*p2.z*p3.z+c_197+12*c_5*p2.z*p3.z+c_199+12*p2.y*p3.y*c_9+c_59-3*c_0*
        (2*c_2+c_4+c_95+p1.y*c_182+2*(c_5+c_70+c_97+c_8+c_45+c_72+c_88))-6*c_2*(c_69+c_95+c_5+c_186)+3*p1.y*(c_187+c_166-2*p2.y*
        c_5+p3.y*(c_10+c_188+c_27+c_86+c_28+c_202)+4*p2.y*c_144))+p3.x*(c_31+c_189+c_151-2*c_26*p3.y+c_190+c_191+c_123-10*c_38*
        c_129+c_192+c_178+36*c_5*c_6+18*c_4*p1.z*p2.z+24*p2.y*p3.y*p1.z*p2.z+c_193+c_194+12*p2.y*p3.y*c_8+c_195+12*c_4*p1.z*p3.z+c_196+72*
        c_5*p1.z*p3.z+12*c_4*p2.z*p3.z+c_197+c_198+c_199+c_200+c_127-6*c_2*(c_4+c_95+c_66+c_219)+3*p1.y*(c_201-2*c_4*p3.y+p2.y*
        (c_96+c_188+c_27+c_86+c_28+c_202)+4*p3.y*(c_10+c_73+c_8+c_77+c_28+c_165))-c_0*(6*c_2+c_4+4*p2.y*p3.y+3*p1.y*c_235+2*
        (c_204+c_41+c_8+c_75+c_83+c_207))))+p3.x*(c_101+c_208+c_209+6*c_81*p3.y+9*c_34*c_5+c_210+15*c_4*c_37+18*p2.y*c_82+21*c_105+3*
        c_103*c_129-2*c_34*c_6-4*c_26*p3.y*c_6+c_107-8*p2.y*c_36*c_6-10*c_37*c_6-10*c_34*p1.z*p2.z+c_211-18*c_4*c_5*p1.z*p2.z-16*
        p2.y*c_36*p1.z*p2.z-10*c_37*p1.z*p2.z+c_212-40*c_26*p3.y*c_8-36*c_4*c_5*c_8+c_213-10*c_37*c_8+c_214-12*c_26*p3.y*p1.z*
        p3.z-24*c_4*c_5*p1.z*p3.z-40*p2.y*c_36*p1.z*p3.z-60*c_37*p1.z*p3.z-20*c_34*p2.z*p3.z-48*c_26*p3.y*p2.z*p3.z+c_215-80*
        p2.y*c_36*p2.z*p3.z-60*c_37*p2.z*p3.z-6*c_34*c_9+c_216-60*c_4*c_5*c_9-120*p2.y*c_36*c_9-210*c_37*c_9-c_30*(c_2+c_4+c_43+21*
        c_5+p1.y*(p2.y+6*p3.y)+c_70+c_97+c_78+12*p1.z*p3.z+c_46+42*c_9)+c_32*(c_69+c_43+c_232+c_219)+c_38*(3*c_26+6*c_4*p3.y+9*
        p2.y*c_5-2*p2.y*c_221+4*p3.y*(c_66-10*c_6+c_222+c_155+c_18-4*p1.z*c_164))+3*c_2*(c_34+2*c_26*p3.y+5*c_37+4*p2.y*p3.y*
        c_225-2*c_5*c_226+c_4*(c_66+c_227))+p1.y*(3*c_81+6*c_34*p3.y+18*c_82+12*c_4*p3.y*c_157-8*c_36*c_231+c_26*(c_232-2*(c_52+c_44+c_86+c_87+4*
        p1.z*c_50))+3*p2.y*c_5*(c_204-2*c_161))+c_0*(c_33+c_151+c_233+c_234-35*c_37-c_38*c_235+2*c_4*(c_239+c_6+c_25+c_27+c_85+c_46+c_83)+8*
        p2.y*p3.y*c_237+20*c_5*(c_6+c_8+c_238+21*c_9+p1.z*(p2.z+6*p3.z))+c_2*(c_14+c_61+2*(c_239+c_41+c_8+c_75+c_83+c_207))+p1.y*
        (c_201-4*c_4*p3.y-20*c_36+2*p2.y*(c_239+c_52+c_71+c_74+c_240+c_86+c_83)+8*p3.y*c_231)))))/double(2903040);
}

double trig::c65() const{
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p21_4=p2.y*p21_3;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p31_4=p3.y*p31_3;
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p11_4=p1.y*p11_3;
    double p30_2=p3.x*p3.x;
    double p30_3=p3.x*p30_2;
    double p30_4=p3.x*p30_3;
    double p20_2=p2.x*p2.x;
    double p20_3=p2.x*p20_2;
    double p20_4=p2.x*p20_3;
    double p20_5=p2.x*p20_4;
    double p20_6=p2.x*p20_5;
    double p10_2=p1.x*p1.x;
    double p10_3=p1.x*p10_2;
    double p10_4=p1.x*p10_3;
    double p10_5=p1.x*p10_4;
    double p10_6=p1.x*p10_5;
    double c_0=6*p1.z;
    double c_1=2*p3.z;
    double c_2=p21_2;
    double c_3=p31_2;
    double c_4=6*p2.z;
    double c_5=2*p1.z;
    double c_6=5*p2.z;
    double c_7=p11_2;
    double c_8=p30_2;
    double c_9=5*p1.z;
    double c_10=3*p3.z;
    double c_11=3*p1.z;
    double c_12=p2.z+p3.z;
    double c_13=p21_4;
    double c_14=p21_3;
    double c_15=p31_3;
    double c_16=p31_4;
    double c_17=c_9+p2.z+c_10;
    double c_18=2*p2.z;
    double c_19=4*p1.z;
    double c_20=4*p3.z;
    double c_21=4*p2.z;
    double c_22=3*p2.z;
    double c_23=5*p3.z;
    double c_24=c_11+p2.z+c_23;
    double c_25=c_5+c_18+c_23;
    double c_26=6*p3.z;
    double c_27=c_5+p2.z+c_26;
    double c_28=7*p3.z;
    double c_29=p1.z+p2.z+c_28;
    double c_30=p20_3;
    double c_31=p20_2;
    double c_32=3*c_3*p3.z;
    double c_33=c_0+c_18+p3.z;
    double c_34=c_19+c_18+c_10;
    double c_35=c_9+c_22+p3.z;
    double c_36=-(8*p2.y*p3.y*p1.z);
    double c_37=-(3*c_2*p2.z);
    double c_38=-(12*c_3*p3.z);
    double c_39=c_0+p2.z+c_1;
    double c_40=c_19+p2.z+c_20;
    double c_41=6*c_2*c_3*p1.z;
    double c_42=p11_4;
    double c_43=p30_4;
    double c_44=p1.z+c_22+c_23;
    double c_45=p11_3;
    double c_46=c_19+c_21+p3.z;
    double c_47=c_19+c_22+c_1;
    double c_48=p1.z+p2.z+p3.z;
    double c_49=c_11+c_6+p3.z;
    double c_50=c_11+c_21+c_1;
    double c_51=c_5+c_4+p3.z;
    double c_52=c_5+c_6+c_1;
    double c_53=c_5+c_21+c_10;
    double c_54=c_5+c_22+c_20;
    double c_55=p1.z+c_6+c_10;
    double c_56=4*c_12;
    double c_57=p1.z+c_56;
    double c_58=p20_5;
    double c_59=p20_4;
    double c_60=8*p2.y*p3.y*p1.z;
    double c_61=5*c_16*p3.z;
    double c_62=5*p3.y*p1.z;
    double c_63=2*p3.y*c_12;
    double c_64=2*p2.y*c_35;
    double c_65=c_62+c_63+c_64;
    double c_66=c_11+c_18+c_20;
    double c_67=5*c_13*p2.z;
    double c_68=5*p2.y*p1.z;
    double c_69=2*p2.y*c_12;
    double c_70=2*p3.y*c_17;
    double c_71=c_68+c_69+c_70;
    double c_72=8*c_14*p3.y*p1.z;
    double c_73=8*p2.y*c_15*p1.z;
    double c_74=30*c_13*p2.z;
    double c_75=30*c_16*p3.z;
    double c_76=p1.z+c_18+c_26;
    double c_77=4*p3.y*p2.z;
    double c_78=4*p2.y*p3.z;
    double c_79=2*c_12;
    double c_80=c_9+c_79;
    double c_81=8*p3.z;
    double c_82=3*c_14*p3.y*p1.z;
    double c_83=3*p2.y*c_15*p1.z;
    double c_84=c_3*p1.z;
    double c_85=c_2*c_48;
    double c_86=p2.y*p3.y*c_66;
    double c_87=2*c_3*c_24;
    double c_88=4*p2.y*p3.y*c_48;
    double c_89=c_2*c_50;
    double c_90=c_3*c_66;
    double c_91=8*p2.y*p1.z;
    double c_92=8*p3.y*p1.z;
    double c_93=6*p2.y*p2.z;
    double c_94=6*p3.y*p3.z;
    double c_95=c_91+c_92+c_93+c_77+c_78+c_94;
    return ((p3.y*(p1.z-p2.z)+p1.y*(p2.z-p3.z)+p2.y*(-p1.z+p3.z))*(p10_6*(7*p1.z+p2.z+p3.z)+p20_6*(p1.z+7*p2.z+p3.z)+c_58*
        p3.x*(p1.z+c_4+c_1)+p10_5*(p2.x*c_33+p3.x*c_39)-c_59*(15*c_2*p1.z+5*p2.y*p3.y*p1.z+c_84+105*c_2*p2.z+30*p2.y*
        p3.y*p2.z+5*c_3*p2.z+15*c_2*p3.z+10*p2.y*p3.y*p3.z+c_32+c_7*c_49+5*p1.y*p2.y*c_51+p1.y*p3.y*c_52-c_8*c_55)+p10_4*
        (-105*c_7*p1.z-30*p1.y*p2.y*p1.z-5*c_2*p1.z-30*p1.y*p3.y*p1.z-5*p2.y*p3.y*p1.z-5*c_3*p1.z-15*c_7*p2.z-10*p1.y*p2.y*
        p2.z+c_37-5*p1.y*p3.y*p2.z-2*p2.y*p3.y*p2.z-c_3*p2.z-15*c_7*p3.z-5*p1.y*p2.y*p3.z-c_2*p3.z-10*p1.y*p3.y*p3.z-2*
        p2.y*p3.y*p3.z-3*c_3*p3.z+c_31*c_35+c_8*c_17+p2.x*p3.x*c_80)+c_30*p3.x*(-10*c_2*p1.z+c_36-3*c_3*p1.z-60*c_2*p2.z-40*
        p2.y*p3.y*p2.z-12*c_3*p2.z-20*c_2*p3.z-24*p2.y*p3.y*p3.z+c_38-c_7*c_50-2*p1.y*(4*p2.y*p1.z+2*p3.y*p1.z+10*p2.y*
        p2.z+c_77+c_78+3*p3.y*p3.z)+c_8*c_57)+c_8*(c_13*p1.z+c_82+c_41+10*p2.y*c_15*p1.z+15*c_16*p1.z+c_67+12*c_14*p3.y*p2.z+18*
        c_2*c_3*p2.z+20*p2.y*c_15*p2.z+15*c_16*p2.z+3*c_13*p3.z+12*c_14*p3.y*p3.z+30*c_2*c_3*p3.z+60*p2.y*c_15*p3.z+105*
        c_16*p3.z+c_42*c_17+c_43*c_29+c_45*(p2.y*c_34+3*p3.y*c_40)+3*c_7*(c_85+c_86+c_87)+p1.y*(c_14*c_53+3*c_2*p3.y*c_54+6*p2.y*
        c_3*c_25+10*c_15*c_27)-c_8*(c_7*c_24+p1.y*p2.y*c_25+c_2*c_44+5*p1.y*p3.y*c_27+5*p2.y*p3.y*c_76+15*c_3*c_29))+p10_3*(c_30*
        c_46+c_31*p3.x*c_47-p2.x*(12*c_2*p1.z+c_60+4*c_3*p1.z+12*c_2*p2.z+6*p2.y*p3.y*p2.z+2*c_3*p2.z+3*c_2*p3.z+4*p2.y*
        p3.y*p3.z+c_32+10*c_7*c_33-c_8*c_34+4*p1.y*c_65)+p3.x*(-4*c_2*p1.z+c_36-12*c_3*p1.z+c_37-4*p2.y*p3.y*p2.z-3*c_3*p2.z-2*
        c_2*p3.z-6*p2.y*p3.y*p3.z+c_38-10*c_7*c_39+c_8*c_40-4*p1.y*c_71))+c_31*(15*c_13*p1.z+10*c_14*p3.y*p1.z+c_41+c_83+c_16*
        p1.z+105*c_13*p2.z+60*c_14*p3.y*p2.z+30*c_2*c_3*p2.z+12*p2.y*c_15*p2.z+3*c_16*p2.z+15*c_13*p3.z+20*c_14*p3.y*p3.z+18*
        c_2*c_3*p3.z+12*p2.y*c_15*p3.z+c_61+c_42*c_35+c_43*c_44+c_45*(3*p2.y*c_46+p3.y*c_47)+3*c_7*(c_3*c_48+2*c_2*c_49+p2.y*
        p3.y*c_50)+p1.y*(10*c_14*c_51+6*c_2*p3.y*c_52+3*p2.y*c_3*c_53+c_15*c_54)-3*c_8*(c_7*c_48+2*c_2*c_55+2*c_3*c_44+3*p2.y*p3.y*
        c_57+p1.y*(p2.y*c_53+p3.y*c_54)))+p1.x*(c_58*c_51+c_59*p3.x*c_52-c_30*(20*c_2*p1.z+c_60+2*c_3*p1.z+60*c_2*p2.z+20*p2.y*
        p3.y*p2.z+4*c_3*p2.z+10*c_2*p3.z+8*p2.y*p3.y*p3.z+c_32+3*c_7*c_46+8*p1.y*p2.y*c_49+2*p1.y*p3.y*c_50-c_8*c_53)+c_31*
        p3.x*(c_8*c_54-3*(4*p1.y*p3.y*c_48+c_7*c_47+2*c_2*c_52+2*p2.y*p3.y*c_53+c_3*c_54+p1.y*p2.y*(c_0+8*p2.z+c_20)))+p2.x*
        (10*c_13*p1.z+c_72+c_41+4*p2.y*c_15*p1.z+2*c_16*p1.z+c_74+20*c_14*p3.y*p2.z+12*c_2*c_3*p2.z+6*p2.y*c_15*p2.z+2*c_16*
        p2.z+5*c_13*p3.z+8*c_14*p3.y*p3.z+9*c_2*c_3*p3.z+8*p2.y*c_15*p3.z+c_61+5*c_42*c_33+c_43*c_25+4*c_45*c_65+3*c_7*(3*c_2*
        c_46+2*p2.y*p3.y*c_47+c_3*c_34)+2*p1.y*(6*p2.y*c_3*c_48+4*c_14*c_49+3*c_2*p3.y*c_50+c_15*c_66)-3*c_8*(4*p1.y*p2.y*c_48+c_7*
        c_34+c_2*c_53+2*p1.y*p3.y*c_66+2*p2.y*p3.y*c_54+2*c_3*c_25))+p3.x*(2*c_13*p1.z+4*c_14*p3.y*p1.z+c_41+c_73+10*c_16*
        p1.z+c_67+8*c_14*p3.y*p2.z+9*c_2*c_3*p2.z+8*p2.y*c_15*p2.z+5*c_16*p2.z+2*c_13*p3.z+6*c_14*p3.y*p3.z+12*c_2*c_3*p3.z+20*
        p2.y*c_15*p3.z+c_75+5*c_42*c_39+c_43*c_27+4*c_45*c_71+3*c_7*(c_2*c_47+2*p2.y*p3.y*c_34+3*c_3*c_40)+2*p1.y*(6*c_2*p3.y*
        c_48+c_14*c_50+3*p2.y*c_3*c_66+4*c_15*c_24)-c_8*(3*c_7*c_40+c_2*c_54+8*p1.y*p3.y*c_24+4*p2.y*p3.y*c_25+10*c_3*c_27+p1.y*
        p2.y*(c_0+c_21+c_81))))+p2.x*p3.x*(5*c_13*p1.z+c_72+9*c_2*c_3*p1.z+c_73+5*c_16*p1.z+c_74+40*c_14*p3.y*p2.z+36*c_2*c_3*
        p2.z+24*p2.y*c_15*p2.z+10*c_16*p2.z+10*c_13*p3.z+24*c_14*p3.y*p3.z+36*c_2*c_3*p3.z+40*p2.y*c_15*p3.z+c_75+c_43*c_76+c_45*
        c_95+c_42*c_80+3*c_7*(c_88+c_89+c_90)+2*p1.y*(2*c_14*c_52+3*c_2*p3.y*c_53+3*p2.y*c_3*c_54+2*c_15*c_25)-c_8*(c_7*c_66+8*
        p2.y*p3.y*c_44+10*c_3*c_76+3*c_2*c_57+p1.y*(4*p3.y*c_25+p2.y*(c_19+c_4+c_81))))+p10_2*(105*c_42*p1.z+60*c_45*p2.y*p1.z+30*
        c_7*c_2*p1.z+12*p1.y*c_14*p1.z+3*c_13*p1.z+60*c_45*p3.y*p1.z+30*c_7*p2.y*p3.y*p1.z+12*p1.y*c_2*p3.y*p1.z+c_82+30*
        c_7*c_3*p1.z+12*p1.y*p2.y*c_3*p1.z+3*c_2*c_3*p1.z+12*p1.y*c_15*p1.z+c_83+3*c_16*p1.z+15*c_42*p2.z+20*c_45*p2.y*
        p2.z+18*c_7*c_2*p2.z+12*p1.y*c_14*p2.z+c_67+10*c_45*p3.y*p2.z+12*c_7*p2.y*p3.y*p2.z+9*p1.y*c_2*p3.y*p2.z+4*c_14*p3.y*
        p2.z+6*c_7*c_3*p2.z+6*p1.y*p2.y*c_3*p2.z+3*c_2*c_3*p2.z+3*p1.y*c_15*p2.z+2*p2.y*c_15*p2.z+c_16*p2.z+15*c_42*p3.z+10*
        c_45*p2.y*p3.z+6*c_7*c_2*p3.z+3*p1.y*c_14*p3.z+c_13*p3.z+20*c_45*p3.y*p3.z+12*c_7*p2.y*p3.y*p3.z+6*p1.y*c_2*p3.y*
        p3.z+2*c_14*p3.y*p3.z+18*c_7*c_3*p3.z+9*p1.y*p2.y*c_3*p3.z+3*c_2*c_3*p3.z+12*p1.y*c_15*p3.z+4*p2.y*c_15*p3.z+c_61+c_59*
        c_49+c_30*p3.x*c_50+c_43*c_24-3*c_31*(6*c_2*p1.z+3*p2.y*p3.y*p1.z+c_84+10*c_2*p2.z+4*p2.y*p3.y*p2.z+c_3*p2.z+2*
        c_2*p3.z+2*p2.y*p3.y*p3.z+c_3*p3.z-c_8*c_48+2*c_7*c_35+3*p1.y*p2.y*c_46+p1.y*p3.y*c_47)-3*c_8*(c_85+2*c_7*c_17+p1.y*
        p2.y*c_34+3*p1.y*p3.y*c_40+c_86+c_87)+p2.x*(p30_3*c_66-3*p3.x*(c_88+c_89+c_90+p1.y*c_95+2*c_7*c_80)))))/double(5806080);
}

double trig::c66() const{
    double p30_2=p3.x*p3.x;
    double p30_3=p3.x*p30_2;
    double p30_4=p3.x*p30_3;
    double p30_5=p3.x*p30_4;
    double p30_6=p3.x*p30_5;
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p11_4=p1.y*p11_3;
    double p11_5=p1.y*p11_4;
    double p11_6=p1.y*p11_5;
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p21_4=p2.y*p21_3;
    double p21_5=p2.y*p21_4;
    double p21_6=p2.y*p21_5;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p31_4=p3.y*p31_3;
    double p31_5=p3.y*p31_4;
    double p31_6=p3.y*p31_5;
    double p20_2=p2.x*p2.x;
    double p20_3=p2.x*p20_2;
    double p20_4=p2.x*p20_3;
    double p20_5=p2.x*p20_4;
    double p20_6=p2.x*p20_5;
    double p20_7=p2.x*p20_6;
    double p10_2=p1.x*p1.x;
    double p10_3=p1.x*p10_2;
    double p10_4=p1.x*p10_3;
    double p10_5=p1.x*p10_4;
    double p10_6=p1.x*p10_5;
    double p10_7=p1.x*p10_6;
    double c_0=p30_2;
    double c_1=p11_2;
    double c_2=p21_2;
    double c_3=p31_2;
    double c_4=-c_1;
    double c_5=-c_3;
    double c_6=10*c_2;
    double c_7=p21_3;
    double c_8=p31_3;
    double c_9=p20_2;
    double c_10=p30_4;
    double c_11=p11_4;
    double c_12=p21_4;
    double c_13=20*c_7*p3.y;
    double c_14=p31_4;
    double c_15=p11_3;
    double c_16=12*p2.y*p3.y;
    double c_17=p20_3;
    double c_18=-(15*c_1);
    double c_19=-c_2;
    double c_20=-(2*p2.y*p3.y);
    double c_21=-(3*c_3);
    double c_22=2*p3.y;
    double c_23=p20_4;
    double c_24=-(3*c_2);
    double c_25=-(10*c_1);
    double c_26=3*p2.y;
    double c_27=6*c_3;
    double c_28=2*p2.y;
    double c_29=c_28+p3.y;
    double c_30=2*p2.y*p3.y;
    double c_31=3*c_2;
    double c_32=p21_5;
    double c_33=p31_5;
    double c_34=5*c_12;
    double c_35=18*c_2*c_3;
    double c_36=3*p3.y;
    double c_37=4*c_7;
    double c_38=p30_6;
    double c_39=p11_6;
    double c_40=-c_39;
    double c_41=p21_6;
    double c_42=-(4*c_7*c_8);
    double c_43=p31_6;
    double c_44=p11_5;
    double c_45=p2.y+c_22;
    double c_46=4*c_8;
    double c_47=3*c_2*c_3;
    double c_48=4*p2.y*c_8;
    double c_49=5*c_14;
    double c_50=4*c_7*p3.y;
    double c_51=10*c_2*c_3;
    double c_52=20*p2.y*c_8;
    double c_53=4*p2.y*p3.y;
    double c_54=10*c_3;
    double c_55=p20_6;
    double c_56=p20_5;
    double c_57=-c_41;
    double c_58=-c_43;
    double c_59=-(3*c_1);
    double c_60=-(15*c_2);
    double c_61=15*c_3;
    double c_62=15*c_14;
    double c_63=p2.y+c_36;
    double c_64=3*p2.y*p3.y;
    double c_65=3*c_2*p3.y;
    double c_66=10*c_8;
    double c_67=5*c_11;
    double c_68=15*c_12;
    double c_69=6*c_2*c_3;
    double c_70=c_26+p3.y;
    double c_71=6*c_2;
    double c_72=10*c_7;
    double c_73=3*p2.y*c_3;
    double c_74=2*c_2;
    double c_75=2*c_3;
    double c_76=p2.y+p3.y;
    double c_77=3*c_3;
    double c_78=3*c_1;
    double c_79=-(10*c_2);
    double c_80=-(4*p2.y*p3.y);
    double c_81=4*p2.y;
    double c_82=c_81+p3.y;
    double c_83=3*p1.y*p2.y;
    double c_84=2*p2.y*c_8;
    double c_85=c_31+c_30+c_3;
    double c_86=2*c_1;
    double c_87=2*p1.y*p2.y;
    double c_88=3*p1.y*p3.y;
    double c_89=2*p2.y*c_3;
    double c_90=c_37+c_65+c_89+c_8;
    double c_91=15*c_11;
    double c_92=2*c_7*p3.y;
    double c_93=c_2+c_30+c_77;
    double c_94=2*c_2*p3.y;
    double c_95=c_7+c_94+c_73+c_46;
    double c_96=4*p3.y;
    double c_97=p2.y+c_96;
    return ((p10_7+p20_7+c_55*p3.x+p10_6*(p2.x+p3.x)+c_23*p3.x*(c_0+c_4-5*p1.y*p2.y+c_60-2*p1.y*p3.y-10*p2.y*p3.y+c_21)+p10_5*
        (c_9+p2.x*p3.x+c_0-21*c_1-6*p1.y*p2.y+c_19-6*p1.y*p3.y-p2.y*p3.y+c_5)+c_56*(c_0+c_4-21*c_2-6*p2.y*p3.y+c_5-p1.y*
        (6*p2.y+p3.y))+c_17*(c_10+c_11+35*c_12+c_13+c_51+c_48+c_14+c_15*c_82+c_1*(c_6+c_53+c_3)-c_0*(c_1+4*p1.y*p2.y+c_6+c_88+c_16+c_27)+p1.y*
        (20*c_7+10*c_2*p3.y+4*p2.y*c_3+c_8))+c_9*p3.x*(c_10+c_11+c_68+c_13+c_35+12*p2.y*c_8+c_49+c_15*(c_26+c_22)+3*c_1*
        (c_74+c_30+c_3)-c_0*(c_1+c_83+c_71+4*p1.y*p3.y+c_16+c_54)+p1.y*(c_72+12*c_2*p3.y+9*p2.y*c_3+c_46))+p10_4*(c_17+c_9*p3.x+p2.x*
        (c_0+c_18+c_24+c_20+c_5-5*p1.y*c_29)+p3.x*(c_0+c_18+c_19+c_20+c_21-5*p1.y*c_45))+p10_3*(c_23+c_17*p3.x+c_10+35*c_11+20*
        c_15*p2.y+10*c_1*c_2+4*p1.y*c_7+c_12+20*c_15*p3.y+10*c_1*p2.y*p3.y+4*p1.y*c_2*p3.y+c_7*p3.y+10*c_1*c_3+4*p1.y*p2.y*
        c_3+c_2*c_3+4*p1.y*c_8+p2.y*c_8+c_14+p2.x*p3.x*(c_0+c_25+c_24+c_80+c_21-8*p1.y*c_76)+c_9*(c_0+c_25-6*c_2-3*p2.y*p3.y+c_5-4*
        p1.y*c_70)-c_0*(10*c_1+c_2+c_64+c_27+4*p1.y*c_63))+p2.x*(c_38+c_40-7*c_41-6*c_32*p3.y-5*c_12*c_3+c_42-3*c_2*c_14-2*p2.y*
        c_33+c_58-c_44*c_29-c_11*c_85-c_10*(c_1+c_87+c_31+5*p1.y*p3.y+10*p2.y*p3.y+c_61)-c_15*c_90-c_1*(c_34+c_50+c_47+c_84+c_14)-p1.y*
        (6*c_32+5*c_12*p3.y+4*c_7*c_3+3*c_2*c_8+2*p2.y*c_14+c_33)+c_0*(c_11+c_34+12*c_7*p3.y+c_35+c_52+c_62+c_15*(c_28+c_36)+3*c_1*
        (c_2+c_30+c_75)+p1.y*(c_37+9*c_2*p3.y+12*p2.y*c_3+c_66)))+p3.x*(c_38+c_40+c_57-2*c_32*p3.y-3*c_12*c_3+c_42-5*c_2*c_14-6*p2.y*
        c_33-7*c_43-c_44*c_45-c_11*c_93-c_15*c_95-c_1*(c_12+c_92+c_47+c_48+c_49)-p1.y*(c_32+2*c_12*p3.y+3*c_7*c_3+4*c_2*c_8+5*p2.y*
        c_14+6*c_33)-c_10*(c_1+c_2+6*p2.y*p3.y+21*c_3+p1.y*(p2.y+6*p3.y))+c_0*(c_11+c_12+c_50+c_51+c_52+35*c_14+c_15*c_97+c_1*
        (c_2+c_53+c_54)+p1.y*(c_7+4*c_2*p3.y+10*p2.y*c_3+20*c_8)))+p1.x*(c_55+c_56*p3.x+c_38-7*c_39-6*c_44*p2.y-5*c_11*c_2-4*c_15*c_7-3*
        c_1*c_12-2*p1.y*c_32+c_57-6*c_44*p3.y-5*c_11*p2.y*p3.y-4*c_15*c_2*p3.y-3*c_1*c_7*p3.y-2*p1.y*c_12*p3.y-c_32*p3.y-5*c_11*
        c_3-4*c_15*p2.y*c_3-3*c_1*c_2*c_3-2*p1.y*c_7*c_3-c_12*c_3-4*c_15*c_8-3*c_1*p2.y*c_8-2*p1.y*c_2*c_8-c_7*c_8-3*c_1*c_14-2*
        p1.y*p2.y*c_14-c_2*c_14-2*p1.y*c_33-p2.y*c_33+c_58+c_17*p3.x*(c_0+c_59+c_79-8*p2.y*p3.y+c_21-4*p1.y*c_29)+c_23*(c_0+c_59+c_60-5*
        p2.y*p3.y+c_5-2*p1.y*(5*p2.y+p3.y))-c_10*(c_78+c_2+5*p2.y*p3.y+c_61+2*p1.y*(p2.y+5*p3.y))+c_0*(c_67+c_12+3*c_7*
        p3.y+c_69+10*p2.y*c_8+c_62+4*c_15*c_63+3*c_1*(c_2+c_64+c_27)+2*p1.y*(c_7+c_65+6*p2.y*c_3+c_66))+c_9*(c_10+c_67+c_68+10*c_7*
        p3.y+c_69+3*p2.y*c_8+c_14+4*c_15*c_70+3*c_1*(c_71+c_64+c_3)+2*p1.y*(c_72+6*c_2*p3.y+c_73+c_8)-3*c_0*(c_1+c_74+c_64+c_75+2*
        p1.y*c_76))+p2.x*p3.x*(c_10+c_67+c_34+8*c_7*p3.y+9*c_2*c_3+8*p2.y*c_8+c_49+8*c_15*c_76+3*c_1*(c_31+c_53+c_77)+4*p1.y*(2*
        c_7+c_65+c_73+2*c_8)-c_0*(c_78+c_31+8*p2.y*p3.y+c_54+4*p1.y*c_45)))+p10_2*(c_56+c_23*p3.x+c_17*(c_0-6*c_1+c_79+c_80+c_5-3*p1.y*
        c_82)+c_9*p3.x*(c_0-3*(c_86+c_83+c_74+2*p1.y*p3.y+c_30+c_3))+p2.x*(c_10+c_91+c_34+c_50+c_47+c_84+c_14+10*c_15*c_29+6*c_1*
        c_85-3*c_0*(c_86+c_87+c_2+c_88+c_30+c_75)+3*p1.y*c_90)+p3.x*(c_10+c_91+c_12+c_92+c_47+c_48+c_49+10*c_15*c_45+6*c_1*c_93+3*p1.y*
        c_95-c_0*(6*c_1+c_2+c_53+c_54+3*p1.y*c_97))))*(p3.y*(p1.z-p2.z)+p1.y*(p2.z-p3.z)+p2.y*(-p1.z+p3.z)))/double(11612160);
}

double trig::s61() const{
    double p30_2=p3.x*p3.x;
    double p30_3=p3.x*p30_2;
    double p30_4=p3.x*p30_3;
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p11_4=p1.y*p11_3;
    double p11_5=p1.y*p11_4;
    double p11_6=p1.y*p11_5;
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p21_4=p2.y*p21_3;
    double p21_5=p2.y*p21_4;
    double p21_6=p2.y*p21_5;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p31_4=p3.y*p31_3;
    double p31_5=p3.y*p31_4;
    double p31_6=p3.y*p31_5;
    double p12_2=p1.z*p1.z;
    double p12_3=p1.z*p12_2;
    double p12_4=p1.z*p12_3;
    double p12_5=p1.z*p12_4;
    double p22_2=p2.z*p2.z;
    double p22_3=p2.z*p22_2;
    double p22_4=p2.z*p22_3;
    double p22_5=p2.z*p22_4;
    double p32_2=p3.z*p3.z;
    double p32_3=p3.z*p32_2;
    double p32_4=p3.z*p32_3;
    double p32_5=p3.z*p32_4;
    double p20_2=p2.x*p2.x;
    double p20_3=p2.x*p20_2;
    double p20_4=p2.x*p20_3;
    double p10_2=p1.x*p1.x;
    double p10_3=p1.x*p10_2;
    double p10_4=p1.x*p10_3;
    double c_0=p30_4;
    double c_1=p30_2;
    double c_2=p11_2;
    double c_3=p21_2;
    double c_4=p11_4;
    double c_5=p11_3;
    double c_6=p21_3;
    double c_7=p21_4;
    double c_8=p11_5;
    double c_9=p21_5;
    double c_10=p31_2;
    double c_11=p31_3;
    double c_12=p31_4;
    double c_13=p31_5;
    double c_14=p12_3;
    double c_15=p12_5;
    double c_16=p11_6;
    double c_17=p21_6;
    double c_18=p31_6;
    double c_19=p12_2;
    double c_20=p12_4;
    double c_21=p22_2;
    double c_22=p22_3;
    double c_23=p22_4;
    double c_24=p22_5;
    double c_25=p32_2;
    double c_26=p32_3;
    double c_27=p32_4;
    double c_28=p32_5;
    double c_29=2*p1.z;
    double c_30=5*p2.z;
    double c_31=6*p2.z;
    double c_32=2*p3.z;
    double c_33=3*p1.z;
    double c_34=p1.z+c_31+c_32;
    double c_35=3*p3.z;
    double c_36=p1.z+c_30+c_35;
    double c_37=5*p1.z;
    double c_38=p2.z+p3.z;
    double c_39=6*p1.z;
    double c_40=3*p2.z;
    double c_41=c_37+c_40+p3.z;
    double c_42=4*p2.z;
    double c_43=c_33+c_30+p3.z;
    double c_44=4*p1.z;
    double c_45=c_33+c_42+c_32;
    double c_46=p1.z+p2.z+p3.z;
    double c_47=c_37+p2.z+c_35;
    double c_48=2*p2.z;
    double c_49=4*p3.z;
    double c_50=c_33+c_48+c_49;
    double c_51=8*p2.y*p1.z;
    double c_52=6*p3.y*p3.z;
    double c_53=2*c_38;
    double c_54=c_37+c_53;
    double c_55=c_39+c_48+p3.z;
    double c_56=c_44+c_42+p3.z;
    double c_57=c_44+c_40+c_32;
    double c_58=c_44+c_48+c_35;
    double c_59=c_39+p2.z+c_32;
    double c_60=c_44+p2.z+c_49;
    double c_61=-(24*p2.y*p3.y*c_19*p2.z);
    double c_62=-(12*c_10*c_19*p2.z);
    double c_63=-(12*c_3*c_19*p3.z);
    double c_64=-(24*p2.y*p3.y*c_19*p3.z);
    double c_65=8*p3.y*p1.z;
    double c_66=6*p2.y*p2.z;
    double c_67=4*p3.y*p2.z;
    double c_68=4*p2.y*p3.z;
    double c_69=c_51+c_65+c_66+c_67+c_68+c_52;
    double c_70=5*p3.z;
    double c_71=4*c_38;
    double c_72=p1.z+c_71;
    double c_73=c_29+c_30+c_32;
    double c_74=c_29+c_48+c_70;
    double c_75=4*c_26;
    double c_76=6*p3.z;
    double c_77=2*p2.z*p3.z;
    double c_78=p20_2;
    double c_79=3*p2.y*c_11*p1.z;
    double c_80=5*c_12*p3.z;
    double c_81=-(18*c_10*p1.z*p2.z*p3.z);
    double c_82=-(18*p2.y*p3.y*p1.z*c_25);
    double c_83=-(20*c_10*c_26);
    double c_84=p1.z+c_40+c_70;
    double c_85=c_29+c_42+c_35;
    double c_86=c_29+c_40+c_49;
    double c_87=10*c_14;
    double c_88=10*c_22;
    double c_89=6*c_21*p3.z;
    double c_90=c_29+c_31+p3.z;
    double c_91=4*c_14;
    double c_92=12*c_21*p3.z;
    double c_93=9*p2.z*c_25;
    double c_94=9*p2.z;
    double c_95=c_94+c_76;
    double c_96=c_19*c_95;
    double c_97=2*c_21;
    double c_98=c_97+c_77+c_25;
    double c_99=6*p1.z*c_98;
    double c_100=c_91+c_88+c_92+c_93+c_75+c_96+c_99;
    double c_101=4*p2.z*p3.z;
    double c_102=p20_3;
    double c_103=c_10*c_85;
    double c_104=8*c_6*p3.y*p1.z;
    double c_105=6*c_3*c_10*p1.z;
    double c_106=30*c_7*p2.z;
    double c_107=-(48*p2.y*p3.y*p1.z*c_21);
    double c_108=-(12*c_10*p1.z*c_21);
    double c_109=-(120*c_3*c_22);
    double c_110=-(48*c_3*p1.z*p2.z*p3.z);
    double c_111=-(48*p2.y*p3.y*p1.z*p2.z*p3.z);
    double c_112=-(12*c_3*p1.z*c_25);
    double c_113=5*p3.y*p1.z;
    double c_114=2*p3.y*c_38;
    double c_115=2*p2.y*c_41;
    double c_116=c_113+c_114+c_115;
    double c_117=3*c_3*c_56;
    double c_118=2*p2.y*p3.y*c_57;
    double c_119=c_10*c_58;
    double c_120=4*c_22;
    double c_121=3*c_21;
    double c_122=3*p2.z*c_25;
    double c_123=c_40+p3.z;
    double c_124=6*c_19*c_123;
    double c_125=6*c_21;
    double c_126=3*p2.z*p3.z;
    double c_127=c_125+c_126+c_25;
    double c_128=3*p1.z*c_127;
    double c_129=c_87+c_88+c_89+c_122+c_26+c_124+c_128;
    double c_130=6*p2.z*c_25;
    double c_131=12*c_19*c_38;
    double c_132=3*c_25;
    double c_133=c_121+c_101+c_132;
    double c_134=3*p1.z*c_133;
    double c_135=c_87+c_120+c_89+c_130+c_75+c_131+c_134;
    double c_136=8*p2.y*c_11*p1.z;
    double c_137=-(16*p2.y*p3.y*c_14);
    double c_138=5*c_7*p2.z;
    double c_139=-(20*c_3*c_22);
    double c_140=30*c_12*p3.z;
    double c_141=-(48*c_10*p1.z*p2.z*p3.z);
    double c_142=-(48*p2.y*p3.y*p1.z*c_25);
    double c_143=-(120*c_10*c_26);
    double c_144=5*p2.y*p1.z;
    double c_145=2*p2.y*c_38;
    double c_146=2*p3.y*c_47;
    double c_147=c_144+c_145+c_146;
    double c_148=c_33+p2.z+c_70;
    double c_149=8*p3.z;
    double c_150=c_3*c_57;
    double c_151=2*p2.y*p3.y*c_58;
    double c_152=3*c_10*c_60;
    double c_153=20*c_14;
    double c_154=-(10*c_26);
    double c_155=3*c_10*c_50;
    double c_156=-(2*c_135);
    return ((p3.x*(-p1.z+p2.z)+p2.x*(p1.z-p3.z)+p1.x*(-p2.z+p3.z))*(3*c_0*c_2*p1.z+5*c_1*c_4*p1.z+35*c_16*p1.z+2*c_0*
        p1.y*p2.y*p1.z+4*c_1*c_5*p2.y*p1.z+30*c_8*p2.y*p1.z+c_0*c_3*p1.z+3*c_1*c_2*c_3*p1.z+25*c_4*c_3*p1.z+2*c_1*p1.y*c_6*p1.z+20*
        c_5*c_6*p1.z+c_1*c_7*p1.z+15*c_2*c_7*p1.z+10*p1.y*c_9*p1.z+5*c_17*p1.z+10*c_0*p1.y*p3.y*p1.z+12*c_1*c_5*p3.y*p1.z+30*
        c_8*p3.y*p1.z+5*c_0*p2.y*p3.y*p1.z+9*c_1*c_2*p2.y*p3.y*p1.z+25*c_4*p2.y*p3.y*p1.z+6*c_1*p1.y*c_3*p3.y*p1.z+20*
        c_5*c_3*p3.y*p1.z+3*c_1*c_6*p3.y*p1.z+15*c_2*c_6*p3.y*p1.z+10*p1.y*c_7*p3.y*p1.z+5*c_9*p3.y*p1.z+15*c_0*c_10*p1.z+18*
        c_1*c_2*c_10*p1.z+25*c_4*c_10*p1.z+12*c_1*p1.y*p2.y*c_10*p1.z+20*c_5*p2.y*c_10*p1.z+6*c_1*c_3*c_10*p1.z+15*c_2*c_3*c_10*
        p1.z+10*p1.y*c_6*c_10*p1.z+5*c_7*c_10*p1.z+20*c_1*p1.y*c_11*p1.z+20*c_5*c_11*p1.z+10*c_1*p2.y*c_11*p1.z+15*c_2*p2.y*
        c_11*p1.z+10*p1.y*c_3*c_11*p1.z+5*c_6*c_11*p1.z+15*c_1*c_12*p1.z+15*c_2*c_12*p1.z+10*p1.y*p2.y*c_12*p1.z+5*c_3*c_12*
        p1.z+10*p1.y*c_13*p1.z+5*p2.y*c_13*p1.z+5*c_18*p1.z-20*c_1*c_2*c_14-210*c_4*c_14-8*c_1*p1.y*p2.y*c_14-120*c_5*p2.y*c_14-2*
        c_1*c_3*c_14-60*c_2*c_3*c_14-24*p1.y*c_6*c_14-6*c_7*c_14-24*c_1*p1.y*p3.y*c_14-120*c_5*p3.y*c_14-6*c_1*p2.y*p3.y*c_14-60*
        c_2*p2.y*p3.y*c_14-24*p1.y*c_3*p3.y*c_14-6*c_6*p3.y*c_14-12*c_1*c_10*c_14-60*c_2*c_10*c_14-24*p1.y*p2.y*c_10*c_14-6*c_3*
        c_10*c_14-24*p1.y*c_11*c_14-6*p2.y*c_11*c_14-6*c_12*c_14+168*c_2*c_15+48*p1.y*p2.y*c_15+8*c_3*c_15+48*p1.y*p3.y*c_15+8*p2.y*
        p3.y*c_15+8*c_10*c_15+c_0*c_2*p2.z+c_1*c_4*p2.z+5*c_16*p2.z+2*c_0*p1.y*p2.y*p2.z+2*c_1*c_5*p2.y*p2.z+10*c_8*p2.y*
        p2.z+3*c_0*c_3*p2.z+3*c_1*c_2*c_3*p2.z+15*c_4*c_3*p2.z+4*c_1*p1.y*c_6*p2.z+20*c_5*c_6*p2.z+5*c_1*c_7*p2.z+25*c_2*c_7*p2.z+30*
        p1.y*c_9*p2.z+35*c_17*p2.z+5*c_0*p1.y*p3.y*p2.z+3*c_1*c_5*p3.y*p2.z+5*c_8*p3.y*p2.z+10*c_0*p2.y*p3.y*p2.z+6*c_1*
        c_2*p2.y*p3.y*p2.z+10*c_4*p2.y*p3.y*p2.z+9*c_1*p1.y*c_3*p3.y*p2.z+15*c_5*c_3*p3.y*p2.z+12*c_1*c_6*p3.y*p2.z+20*c_2*
        c_6*p3.y*p2.z+25*p1.y*c_7*p3.y*p2.z+30*c_9*p3.y*p2.z+15*c_0*c_10*p2.z+6*c_1*c_2*c_10*p2.z+5*c_4*c_10*p2.z+12*c_1*p1.y*
        p2.y*c_10*p2.z+10*c_5*p2.y*c_10*p2.z+18*c_1*c_3*c_10*p2.z+15*c_2*c_3*c_10*p2.z+20*p1.y*c_6*c_10*p2.z+25*c_7*c_10*p2.z+10*
        c_1*p1.y*c_11*p2.z+5*c_5*c_11*p2.z+20*c_1*p2.y*c_11*p2.z+10*c_2*p2.y*c_11*p2.z+15*p1.y*c_3*c_11*p2.z+20*c_6*c_11*
        p2.z+15*c_1*c_12*p2.z+5*c_2*c_12*p2.z+10*p1.y*p2.y*c_12*p2.z+15*c_3*c_12*p2.z+5*p1.y*c_13*p2.z+10*p2.y*c_13*p2.z+5*c_18*
        p2.z-12*c_1*c_2*c_19*p2.z-90*c_4*c_19*p2.z-12*c_1*p1.y*p2.y*c_19*p2.z-120*c_5*p2.y*c_19*p2.z-6*c_1*c_3*c_19*p2.z-108*
        c_2*c_3*c_19*p2.z-72*p1.y*c_6*c_19*p2.z-30*c_7*c_19*p2.z-18*c_1*p1.y*p3.y*c_19*p2.z-60*c_5*p3.y*c_19*p2.z-12*c_1*p2.y*
        p3.y*c_19*p2.z-72*c_2*p2.y*p3.y*c_19*p2.z-54*p1.y*c_3*p3.y*c_19*p2.z-24*c_6*p3.y*c_19*p2.z-12*c_1*c_10*c_19*p2.z-36*c_2*
        c_10*c_19*p2.z-36*p1.y*p2.y*c_10*c_19*p2.z-18*c_3*c_10*c_19*p2.z-18*p1.y*c_11*c_19*p2.z-12*p2.y*c_11*c_19*p2.z-6*c_12*
        c_19*p2.z+120*c_2*c_20*p2.z+80*p1.y*p2.y*c_20*p2.z+24*c_3*c_20*p2.z+40*p1.y*p3.y*c_20*p2.z+16*p2.y*p3.y*c_20*p2.z+8*
        c_10*c_20*p2.z-6*c_1*c_2*p1.z*c_21-30*c_4*p1.z*c_21-12*c_1*p1.y*p2.y*p1.z*c_21-72*c_5*p2.y*p1.z*c_21-12*c_1*c_3*p1.z*
        c_21-108*c_2*c_3*p1.z*c_21-120*p1.y*c_6*p1.z*c_21-90*c_7*p1.z*c_21-12*c_1*p1.y*p3.y*p1.z*c_21-24*c_5*p3.y*p1.z*c_21-18*
        c_1*p2.y*p3.y*p1.z*c_21-54*c_2*p2.y*p3.y*p1.z*c_21-72*p1.y*c_3*p3.y*p1.z*c_21-60*c_6*p3.y*p1.z*c_21-12*c_1*c_10*p1.z*
        c_21-18*c_2*c_10*p1.z*c_21-36*p1.y*p2.y*c_10*p1.z*c_21-36*c_3*c_10*p1.z*c_21-12*p1.y*c_11*p1.z*c_21-18*p2.y*c_11*p1.z*
        c_21-6*c_12*p1.z*c_21+80*c_2*c_14*c_21+96*p1.y*p2.y*c_14*c_21+48*c_3*c_14*c_21+32*p1.y*p3.y*c_14*c_21+24*p2.y*p3.y*c_14*
        c_21+8*c_10*c_14*c_21-2*c_1*c_2*c_22-6*c_4*c_22-8*c_1*p1.y*p2.y*c_22-24*c_5*p2.y*c_22-20*c_1*c_3*c_22-60*c_2*c_3*c_22-120*p1.y*
        c_6*c_22-210*c_7*c_22-6*c_1*p1.y*p3.y*c_22-6*c_5*p3.y*c_22-24*c_1*p2.y*p3.y*c_22-24*c_2*p2.y*p3.y*c_22-60*p1.y*c_3*p3.y*
        c_22-120*c_6*p3.y*c_22-12*c_1*c_10*c_22-6*c_2*c_10*c_22-24*p1.y*p2.y*c_10*c_22-60*c_3*c_10*c_22-6*p1.y*c_11*c_22-24*p2.y*
        c_11*c_22-6*c_12*c_22+48*c_2*c_19*c_22+96*p1.y*p2.y*c_19*c_22+80*c_3*c_19*c_22+24*p1.y*p3.y*c_19*c_22+32*p2.y*p3.y*c_19*
        c_22+8*c_10*c_19*c_22+24*c_2*p1.z*c_23+80*p1.y*p2.y*p1.z*c_23+120*c_3*p1.z*c_23+16*p1.y*p3.y*p1.z*c_23+40*p2.y*p3.y*p1.z*
        c_23+8*c_10*p1.z*c_23+8*c_2*c_24+48*p1.y*p2.y*c_24+168*c_3*c_24+8*p1.y*p3.y*c_24+48*p2.y*p3.y*c_24+8*c_10*c_24+5*c_0*
        c_2*p3.z+3*c_1*c_4*p3.z+5*c_16*p3.z+5*c_0*p1.y*p2.y*p3.z+3*c_1*c_5*p2.y*p3.z+5*c_8*p2.y*p3.z+5*c_0*c_3*p3.z+3*c_1*c_2*
        c_3*p3.z+5*c_4*c_3*p3.z+3*c_1*p1.y*c_6*p3.z+5*c_5*c_6*p3.z+3*c_1*c_7*p3.z+5*c_2*c_7*p3.z+5*p1.y*c_9*p3.z+5*c_17*p3.z+30*
        c_0*p1.y*p3.y*p3.z+12*c_1*c_5*p3.y*p3.z+10*c_8*p3.y*p3.z+30*c_0*p2.y*p3.y*p3.z+12*c_1*c_2*p2.y*p3.y*p3.z+10*c_4*
        p2.y*p3.y*p3.z+12*c_1*p1.y*c_3*p3.y*p3.z+10*c_5*c_3*p3.y*p3.z+12*c_1*c_6*p3.y*p3.z+10*c_2*c_6*p3.y*p3.z+10*p1.y*c_7*
        p3.y*p3.z+10*c_9*p3.y*p3.z+105*c_0*c_10*p3.z+30*c_1*c_2*c_10*p3.z+15*c_4*c_10*p3.z+30*c_1*p1.y*p2.y*c_10*p3.z+15*c_5*
        p2.y*c_10*p3.z+30*c_1*c_3*c_10*p3.z+15*c_2*c_3*c_10*p3.z+15*p1.y*c_6*c_10*p3.z+15*c_7*c_10*p3.z+60*c_1*p1.y*c_11*p3.z+20*
        c_5*c_11*p3.z+60*c_1*p2.y*c_11*p3.z+20*c_2*p2.y*c_11*p3.z+20*p1.y*c_3*c_11*p3.z+20*c_6*c_11*p3.z+105*c_1*c_12*p3.z+25*
        c_2*c_12*p3.z+25*p1.y*p2.y*c_12*p3.z+25*c_3*c_12*p3.z+30*p1.y*c_13*p3.z+30*p2.y*c_13*p3.z+35*c_18*p3.z-36*c_1*c_2*c_19*
        p3.z-90*c_4*c_19*p3.z-18*c_1*p1.y*p2.y*c_19*p3.z-60*c_5*p2.y*c_19*p3.z-6*c_1*c_3*c_19*p3.z-36*c_2*c_3*c_19*p3.z-18*
        p1.y*c_6*c_19*p3.z-6*c_7*c_19*p3.z-72*c_1*p1.y*p3.y*c_19*p3.z-120*c_5*p3.y*c_19*p3.z-24*c_1*p2.y*p3.y*c_19*p3.z-72*c_2*
        p2.y*p3.y*c_19*p3.z-36*p1.y*c_3*p3.y*c_19*p3.z-12*c_6*p3.y*c_19*p3.z-60*c_1*c_10*c_19*p3.z-108*c_2*c_10*c_19*p3.z-54*
        p1.y*p2.y*c_10*c_19*p3.z-18*c_3*c_10*c_19*p3.z-72*p1.y*c_11*c_19*p3.z-24*p2.y*c_11*c_19*p3.z-30*c_12*c_19*p3.z+120*c_2*
        c_20*p3.z+40*p1.y*p2.y*c_20*p3.z+8*c_3*c_20*p3.z+80*p1.y*p3.y*c_20*p3.z+16*p2.y*p3.y*c_20*p3.z+24*c_10*c_20*p3.z-18*
        c_1*c_2*p1.z*p2.z*p3.z-30*c_4*p1.z*p2.z*p3.z-24*c_1*p1.y*p2.y*p1.z*p2.z*p3.z-48*c_5*p2.y*p1.z*p2.z*p3.z-18*c_1*c_3*
        p1.z*p2.z*p3.z-54*c_2*c_3*p1.z*p2.z*p3.z-48*p1.y*c_6*p1.z*p2.z*p3.z-30*c_7*p1.z*p2.z*p3.z-48*c_1*p1.y*p3.y*p1.z*
        p2.z*p3.z-48*c_5*p3.y*p1.z*p2.z*p3.z-48*c_1*p2.y*p3.y*p1.z*p2.z*p3.z-72*c_2*p2.y*p3.y*p1.z*p2.z*p3.z-72*p1.y*
        c_3*p3.y*p1.z*p2.z*p3.z-48*c_6*p3.y*p1.z*p2.z*p3.z-60*c_1*c_10*p1.z*p2.z*p3.z-54*c_2*c_10*p1.z*p2.z*p3.z-72*p1.y*
        p2.y*c_10*p1.z*p2.z*p3.z-54*c_3*c_10*p1.z*p2.z*p3.z-48*p1.y*c_11*p1.z*p2.z*p3.z-48*p2.y*c_11*p1.z*p2.z*p3.z-30*c_12*
        p1.z*p2.z*p3.z+80*c_2*c_14*p2.z*p3.z+64*p1.y*p2.y*c_14*p2.z*p3.z+24*c_3*c_14*p2.z*p3.z+64*p1.y*p3.y*c_14*p2.z*
        p3.z+32*p2.y*p3.y*c_14*p2.z*p3.z+24*c_10*c_14*p2.z*p3.z-6*c_1*c_2*c_21*p3.z-6*c_4*c_21*p3.z-18*c_1*p1.y*p2.y*c_21*p3.z-18*
        c_5*p2.y*c_21*p3.z-36*c_1*c_3*c_21*p3.z-36*c_2*c_3*c_21*p3.z-60*p1.y*c_6*c_21*p3.z-90*c_7*c_21*p3.z-24*c_1*p1.y*p3.y*
        c_21*p3.z-12*c_5*p3.y*c_21*p3.z-72*c_1*p2.y*p3.y*c_21*p3.z-36*c_2*p2.y*p3.y*c_21*p3.z-72*p1.y*c_3*p3.y*c_21*p3.z-120*
        c_6*p3.y*c_21*p3.z-60*c_1*c_10*c_21*p3.z-18*c_2*c_10*c_21*p3.z-54*p1.y*p2.y*c_10*c_21*p3.z-108*c_3*c_10*c_21*p3.z-24*
        p1.y*c_11*c_21*p3.z-72*p2.y*c_11*c_21*p3.z-30*c_12*c_21*p3.z+48*c_2*c_19*c_21*p3.z+72*p1.y*p2.y*c_19*c_21*p3.z+48*c_3*
        c_19*c_21*p3.z+48*p1.y*p3.y*c_19*c_21*p3.z+48*p2.y*p3.y*c_19*c_21*p3.z+24*c_10*c_19*c_21*p3.z+24*c_2*p1.z*c_22*p3.z+64*
        p1.y*p2.y*p1.z*c_22*p3.z+80*c_3*p1.z*c_22*p3.z+32*p1.y*p3.y*p1.z*c_22*p3.z+64*p2.y*p3.y*p1.z*c_22*p3.z+24*c_10*
        p1.z*c_22*p3.z+8*c_2*c_23*p3.z+40*p1.y*p2.y*c_23*p3.z+120*c_3*c_23*p3.z+16*p1.y*p3.y*c_23*p3.z+80*p2.y*p3.y*c_23*p3.z+24*
        c_10*c_23*p3.z-36*c_1*c_2*p1.z*c_25-30*c_4*p1.z*c_25-24*c_1*p1.y*p2.y*p1.z*c_25-24*c_5*p2.y*p1.z*c_25-12*c_1*c_3*
        p1.z*c_25-18*c_2*c_3*p1.z*c_25-12*p1.y*c_6*p1.z*c_25-6*c_7*p1.z*c_25-120*c_1*p1.y*p3.y*p1.z*c_25-72*c_5*p3.y*p1.z*c_25-60*
        c_1*p2.y*p3.y*p1.z*c_25-54*c_2*p2.y*p3.y*p1.z*c_25-36*p1.y*c_3*p3.y*p1.z*c_25-18*c_6*p3.y*p1.z*c_25-180*c_1*c_10*
        p1.z*c_25-108*c_2*c_10*p1.z*c_25-72*p1.y*p2.y*c_10*p1.z*c_25-36*c_3*c_10*p1.z*c_25-120*p1.y*c_11*p1.z*c_25-60*p2.y*c_11*
        p1.z*c_25-90*c_12*p1.z*c_25+80*c_2*c_14*c_25+32*p1.y*p2.y*c_14*c_25+8*c_3*c_14*c_25+96*p1.y*p3.y*c_14*c_25+24*p2.y*p3.y*
        c_14*c_25+48*c_10*c_14*c_25-12*c_1*c_2*p2.z*c_25-6*c_4*p2.z*c_25-24*c_1*p1.y*p2.y*p2.z*c_25-12*c_5*p2.y*p2.z*c_25-36*c_1*
        c_3*p2.z*c_25-18*c_2*c_3*p2.z*c_25-24*p1.y*c_6*p2.z*c_25-30*c_7*p2.z*c_25-60*c_1*p1.y*p3.y*p2.z*c_25-18*c_5*p3.y*p2.z*
        c_25-120*c_1*p2.y*p3.y*p2.z*c_25-36*c_2*p2.y*p3.y*p2.z*c_25-54*p1.y*c_3*p3.y*p2.z*c_25-72*c_6*p3.y*p2.z*c_25-180*c_1*
        c_10*p2.z*c_25-36*c_2*c_10*p2.z*c_25-72*p1.y*p2.y*c_10*p2.z*c_25-108*c_3*c_10*p2.z*c_25-60*p1.y*c_11*p2.z*c_25-120*p2.y*
        c_11*p2.z*c_25-90*c_12*p2.z*c_25+48*c_2*c_19*p2.z*c_25+48*p1.y*p2.y*c_19*p2.z*c_25+24*c_3*c_19*p2.z*c_25+72*p1.y*p3.y*
        c_19*p2.z*c_25+48*p2.y*p3.y*c_19*p2.z*c_25+48*c_10*c_19*p2.z*c_25+24*c_2*p1.z*c_21*c_25+48*p1.y*p2.y*p1.z*c_21*c_25+48*
        c_3*p1.z*c_21*c_25+48*p1.y*p3.y*p1.z*c_21*c_25+72*p2.y*p3.y*p1.z*c_21*c_25+48*c_10*p1.z*c_21*c_25+8*c_2*c_22*c_25+32*p1.y*
        p2.y*c_22*c_25+80*c_3*c_22*c_25+24*p1.y*p3.y*c_22*c_25+96*p2.y*p3.y*c_22*c_25+48*c_10*c_22*c_25-20*c_1*c_2*c_26-6*c_4*
        c_26-20*c_1*p1.y*p2.y*c_26-6*c_5*p2.y*c_26-20*c_1*c_3*c_26-6*c_2*c_3*c_26-6*p1.y*c_6*c_26-6*c_7*c_26-120*c_1*p1.y*p3.y*c_26-24*
        c_5*p3.y*c_26-120*c_1*p2.y*p3.y*c_26-24*c_2*p2.y*p3.y*c_26-24*p1.y*c_3*p3.y*c_26-24*c_6*p3.y*c_26-420*c_1*c_10*c_26-60*
        c_2*c_10*c_26-60*p1.y*p2.y*c_10*c_26-60*c_3*c_10*c_26-120*p1.y*c_11*c_26-120*p2.y*c_11*c_26-210*c_12*c_26+48*c_2*c_19*c_26+24*
        p1.y*p2.y*c_19*c_26+8*c_3*c_19*c_26+96*p1.y*p3.y*c_19*c_26+32*p2.y*p3.y*c_19*c_26+80*c_10*c_19*c_26+24*c_2*p1.z*p2.z*
        c_26+32*p1.y*p2.y*p1.z*p2.z*c_26+24*c_3*p1.z*p2.z*c_26+64*p1.y*p3.y*p1.z*p2.z*c_26+64*p2.y*p3.y*p1.z*p2.z*c_26+80*
        c_10*p1.z*p2.z*c_26+8*c_2*c_21*c_26+24*p1.y*p2.y*c_21*c_26+48*c_3*c_21*c_26+32*p1.y*p3.y*c_21*c_26+96*p2.y*p3.y*c_21*
        c_26+80*c_10*c_21*c_26+24*c_2*p1.z*c_27+16*p1.y*p2.y*p1.z*c_27+8*c_3*p1.z*c_27+80*p1.y*p3.y*p1.z*c_27+40*p2.y*p3.y*p1.z*
        c_27+120*c_10*p1.z*c_27+8*c_2*p2.z*c_27+16*p1.y*p2.y*p2.z*c_27+24*c_3*p2.z*c_27+40*p1.y*p3.y*p2.z*c_27+80*p2.y*p3.y*
        p2.z*c_27+120*c_10*p2.z*c_27+8*c_2*c_28+8*p1.y*p2.y*c_28+8*c_3*c_28+48*p1.y*p3.y*c_28+48*p2.y*p3.y*c_28+168*c_10*c_28+p20_4*
        (c_2*c_43+5*p1.y*p2.y*c_90+15*c_3*(p1.z+7*p2.z+p3.z)+p1.y*p3.y*c_73+5*p2.y*p3.y*c_34+c_10*c_36)+c_102*p3.x*(c_2*
        c_45+10*c_3*c_34+8*p2.y*p3.y*c_36+p1.y*(c_51+4*p3.y*p1.z+20*p2.y*p2.z+8*p3.y*p2.z+8*p2.y*p3.z+c_52)+3*c_10*c_72)+p10_4*
        (15*c_2*(7*p1.z+p2.z+p3.z)+c_3*c_41+c_10*c_47+p2.y*p3.y*c_54+5*p1.y*(p2.y*c_55+p3.y*c_59))+p10_2*(105*c_4*p1.z+60*c_5*
        p2.y*p1.z+30*c_2*c_3*p1.z+12*p1.y*c_6*p1.z+3*c_7*p1.z+60*c_5*p3.y*p1.z+30*c_2*p2.y*p3.y*p1.z+12*p1.y*c_3*p3.y*p1.z+3*
        c_6*p3.y*p1.z+30*c_2*c_10*p1.z+12*p1.y*p2.y*c_10*p1.z+3*c_3*c_10*p1.z+12*p1.y*c_11*p1.z+c_79+3*c_12*p1.z-420*c_2*
        c_14-120*p1.y*p2.y*c_14-20*c_3*c_14-120*p1.y*p3.y*c_14-20*p2.y*p3.y*c_14-20*c_10*c_14+15*c_4*p2.z+20*c_5*p2.y*p2.z+18*c_2*
        c_3*p2.z+12*p1.y*c_6*p2.z+c_138+10*c_5*p3.y*p2.z+12*c_2*p2.y*p3.y*p2.z+9*p1.y*c_3*p3.y*p2.z+4*c_6*p3.y*p2.z+6*c_2*
        c_10*p2.z+6*p1.y*p2.y*c_10*p2.z+3*c_3*c_10*p2.z+3*p1.y*c_11*p2.z+2*p2.y*c_11*p2.z+c_12*p2.z-180*c_2*c_19*p2.z-120*
        p1.y*p2.y*c_19*p2.z-36*c_3*c_19*p2.z-60*p1.y*p3.y*c_19*p2.z+c_61+c_62-60*c_2*p1.z*c_21-72*p1.y*p2.y*p1.z*c_21-36*c_3*
        p1.z*c_21-24*p1.y*p3.y*p1.z*c_21-18*p2.y*p3.y*p1.z*c_21-6*c_10*p1.z*c_21-12*c_2*c_22-24*p1.y*p2.y*c_22+c_139-6*p1.y*p3.y*
        c_22-8*p2.y*p3.y*c_22-2*c_10*c_22+15*c_4*p3.z+10*c_5*p2.y*p3.z+6*c_2*c_3*p3.z+3*p1.y*c_6*p3.z+c_7*p3.z+20*c_5*p3.y*
        p3.z+12*c_2*p2.y*p3.y*p3.z+6*p1.y*c_3*p3.y*p3.z+2*c_6*p3.y*p3.z+18*c_2*c_10*p3.z+9*p1.y*p2.y*c_10*p3.z+3*c_3*c_10*
        p3.z+12*p1.y*c_11*p3.z+4*p2.y*c_11*p3.z+c_80-180*c_2*c_19*p3.z-60*p1.y*p2.y*c_19*p3.z+c_63-120*p1.y*p3.y*c_19*p3.z+c_64-36*
        c_10*c_19*p3.z-60*c_2*p1.z*p2.z*p3.z-48*p1.y*p2.y*p1.z*p2.z*p3.z-18*c_3*p1.z*p2.z*p3.z-48*p1.y*p3.y*p1.z*
        p2.z*p3.z-24*p2.y*p3.y*p1.z*p2.z*p3.z+c_81-12*c_2*c_21*p3.z-18*p1.y*p2.y*c_21*p3.z-12*c_3*c_21*p3.z-12*p1.y*p3.y*c_21*
        p3.z-12*p2.y*p3.y*c_21*p3.z-6*c_10*c_21*p3.z-60*c_2*p1.z*c_25-24*p1.y*p2.y*p1.z*c_25-6*c_3*p1.z*c_25-72*p1.y*p3.y*
        p1.z*c_25+c_82-36*c_10*p1.z*c_25-12*c_2*p2.z*c_25-12*p1.y*p2.y*p2.z*c_25-6*c_3*p2.z*c_25-18*p1.y*p3.y*p2.z*c_25-12*p2.y*
        p3.y*p2.z*c_25-12*c_10*p2.z*c_25-12*c_2*c_26-6*p1.y*p2.y*c_26-2*c_3*c_26-24*p1.y*p3.y*c_26-8*p2.y*p3.y*c_26+c_83+3*
        c_78*(c_10*c_46+2*c_2*c_41+3*p1.y*p2.y*c_56+2*c_3*c_43+p1.y*p3.y*c_57+p2.y*p3.y*c_45)+3*c_1*(c_3*c_46+2*c_2*c_47+p1.y*p2.y*
        c_58+3*p1.y*p3.y*c_60+p2.y*p3.y*c_50+2*c_10*c_148)+3*p2.x*p3.x*(4*p2.y*p3.y*c_46+c_3*c_45+c_10*c_50+p1.y*c_69+2*c_2*
        c_54))+p10_3*(p2.x*(10*c_2*c_55+c_117+c_118+c_119+4*p1.y*c_116)+p3.x*(10*c_2*c_59+c_150+c_151+c_152+4*p1.y*c_147))+p2.x*p3.x*
        (5*c_7*p1.z+c_104+9*c_3*c_10*p1.z+c_136+5*c_12*p1.z-6*c_3*c_14-8*p2.y*p3.y*c_14-6*c_10*c_14+c_106+40*c_6*p3.y*p2.z+36*
        c_3*c_10*p2.z+24*p2.y*c_11*p2.z+10*c_12*p2.z-24*c_3*c_19*p2.z+c_61+c_62-60*c_3*p1.z*c_21+c_107-18*c_10*p1.z*c_21+c_109-80*
        p2.y*p3.y*c_22-24*c_10*c_22+10*c_7*p3.z+24*c_6*p3.y*p3.z+36*c_3*c_10*p3.z+40*p2.y*c_11*p3.z+c_140+c_63+c_64-24*c_10*c_19*
        p3.z+c_110-72*p2.y*p3.y*p1.z*p2.z*p3.z+c_141-120*c_3*c_21*p3.z-144*p2.y*p3.y*c_21*p3.z-72*c_10*c_21*p3.z-18*c_3*p1.z*
        c_25+c_142-60*c_10*p1.z*c_25-72*c_3*p2.z*c_25-144*p2.y*p3.y*p2.z*c_25-120*c_10*p2.z*c_25-24*c_3*c_26-80*p2.y*p3.y*
        c_26+c_143+c_5*c_69+c_4*c_54+c_1*(c_2*c_50+8*p2.y*p3.y*c_84+10*c_10*(p1.z+c_48+c_76)+3*c_3*c_72+p1.y*(4*p3.y*c_74+p2.y*
        (c_44+c_31+c_149)))+c_2*(12*p2.y*p3.y*c_46+3*c_3*c_45+c_155+c_156)+2*p1.y*(2*c_6*c_73+3*c_3*p3.y*c_85+2*p3.y*(-4*c_14-4*c_22-9*c_21*
        p3.z-12*p2.z*c_25+c_154-3*c_19*(c_48+c_35)+c_10*c_74-6*p1.z*(c_21+c_77+2*c_25))+p2.y*(3*c_10*c_86-2*c_100)))+c_78*(15*c_7*
        p1.z+10*c_6*p3.y*p1.z+c_105+c_79+c_12*p1.z-12*c_3*c_14-6*p2.y*p3.y*c_14-2*c_10*c_14+105*c_7*p2.z+60*c_6*p3.y*p2.z+30*
        c_3*c_10*p2.z+12*p2.y*c_11*p2.z+3*c_12*p2.z-60*c_3*c_19*p2.z+c_61-6*c_10*c_19*p2.z-180*c_3*p1.z*c_21-60*p2.y*p3.y*p1.z*
        c_21+c_108-420*c_3*c_22-120*p2.y*p3.y*c_22-20*c_10*c_22+15*c_7*p3.z+20*c_6*p3.y*p3.z+18*c_3*c_10*p3.z+12*p2.y*c_11*
        p3.z+c_80+c_63-12*p2.y*p3.y*c_19*p3.z-6*c_10*c_19*p3.z-60*c_3*p1.z*p2.z*p3.z+c_111+c_81-180*c_3*c_21*p3.z-120*p2.y*p3.y*c_21*
        p3.z-36*c_10*c_21*p3.z+c_112+c_82-12*c_10*p1.z*c_25-60*c_3*p2.z*c_25-72*p2.y*p3.y*p2.z*c_25-36*c_10*p2.z*c_25-12*c_3*
        c_26-24*p2.y*p3.y*c_26+c_83+c_4*c_41+c_5*(3*p2.y*c_56+p3.y*c_57)+3*c_1*(c_2*c_46+2*c_3*c_36+2*c_10*c_84+3*p2.y*p3.y*c_72+p1.y*
        (p2.y*c_85+p3.y*c_86))+c_2*(3*c_10*c_46+6*c_3*c_43+3*p2.y*p3.y*c_45-2*c_129)+p1.y*(10*c_6*c_90+6*c_3*p3.y*c_73+c_11*
        c_86-2*p3.y*c_100+3*p2.y*(c_103-2*(c_91+20*c_22+10*c_21*p3.z+4*p2.z*c_25+c_26+3*c_19*(c_42+p3.z)+2*p1.z*(10*c_21+c_101+c_25)))))+p1.x*
        (c_102*(3*c_2*c_56+8*p1.y*p2.y*c_43+10*c_3*c_90+2*p1.y*p3.y*c_45+4*p2.y*p3.y*c_73+c_103)+3*c_78*p3.x*(4*p1.y*
        p3.y*c_46+c_2*c_57+2*c_3*c_73+2*p2.y*p3.y*c_85+c_10*c_86+p1.y*p2.y*(c_39+8*p2.z+c_49))+p2.x*(10*c_7*p1.z+c_104+c_105+4*
        p2.y*c_11*p1.z+2*c_12*p1.z-24*c_3*c_14+c_137-8*c_10*c_14+c_106+20*c_6*p3.y*p2.z+12*c_3*c_10*p2.z+6*p2.y*c_11*p2.z+2*c_12*
        p2.z-72*c_3*c_19*p2.z-36*p2.y*p3.y*c_19*p2.z+c_62-120*c_3*p1.z*c_21+c_107+c_108+c_109-40*p2.y*p3.y*c_22-8*c_10*c_22+5*
        c_7*p3.z+8*c_6*p3.y*p3.z+9*c_3*c_10*p3.z+8*p2.y*c_11*p3.z+c_80-18*c_3*c_19*p3.z+c_64-18*c_10*c_19*p3.z+c_110+c_111-24*c_10*
        p1.z*p2.z*p3.z-60*c_3*c_21*p3.z-48*p2.y*p3.y*c_21*p3.z-18*c_10*c_21*p3.z+c_112-24*p2.y*p3.y*p1.z*c_25-24*c_10*p1.z*
        c_25-24*c_3*p2.z*c_25-36*p2.y*p3.y*p2.z*c_25-24*c_10*p2.z*c_25-6*c_3*c_26-16*p2.y*p3.y*c_26+c_83+5*c_4*c_55+4*c_5*c_116+3*
        c_1*(4*p1.y*p2.y*c_46+c_2*c_58+c_3*c_85+2*p1.y*p3.y*c_50+2*p2.y*p3.y*c_86+2*c_10*c_74)+3*c_2*(c_117+c_118+c_119-2*
        (c_153+c_120+3*c_21*p3.z+2*p2.z*c_25+c_26+10*c_19*(c_48+p3.z)+4*p1.z*(c_121+c_77+c_25)))+2*p1.y*(6*p2.y*c_10*c_46+4*c_6*c_43+3*
        c_3*p3.y*c_45+c_11*c_50-4*p2.y*c_129-2*p3.y*c_135))+p3.x*(2*c_7*p1.z+4*c_6*p3.y*p1.z+c_105+c_136+10*c_12*p1.z-8*c_3*
        c_14+c_137-24*c_10*c_14+c_138+8*c_6*p3.y*p2.z+9*c_3*c_10*p2.z+8*p2.y*c_11*p2.z+5*c_12*p2.z-18*c_3*c_19*p2.z+c_61-18*c_10*c_19*
        p2.z-24*c_3*p1.z*c_21-24*p2.y*p3.y*p1.z*c_21+c_108+c_139-16*p2.y*p3.y*c_22-6*c_10*c_22+2*c_7*p3.z+6*c_6*p3.y*p3.z+12*
        c_3*c_10*p3.z+20*p2.y*c_11*p3.z+c_140+c_63-36*p2.y*p3.y*c_19*p3.z-72*c_10*c_19*p3.z-24*c_3*p1.z*p2.z*p3.z+c_111+c_141-24*
        c_3*c_21*p3.z-36*p2.y*p3.y*c_21*p3.z-24*c_10*c_21*p3.z+c_112+c_142-120*c_10*p1.z*c_25-18*c_3*p2.z*c_25-48*p2.y*p3.y*
        p2.z*c_25-60*c_10*p2.z*c_25-8*c_3*c_26-40*p2.y*p3.y*c_26+c_143+5*c_4*c_59+4*c_5*c_147+c_1*(3*c_2*c_60+c_3*c_86+8*p1.y*p3.y*
        c_148+4*p2.y*p3.y*c_74+10*c_10*(c_29+p2.z+c_76)+p1.y*p2.y*(c_39+c_42+c_149))+3*c_2*(c_150+c_151+c_152-2*(c_153+c_22+2*c_21*
        p3.z+c_122+c_75+10*c_19*(p2.z+c_32)+4*p1.z*(c_21+c_77+c_132)))+2*p1.y*(6*c_3*p3.y*c_46+c_6*c_45+4*p3.y*(-10*c_14-c_22-3*
        c_21*p3.z-6*p2.z*c_25+c_154-6*c_19*(p2.z+c_35)+c_10*c_148-3*p1.z*(c_21+c_126+6*c_25))+p2.y*(c_155+c_156))))))/double(24192);
}

double trig::s62() const{
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p11_4=p1.y*p11_3;
    double p11_5=p1.y*p11_4;
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p21_4=p2.y*p21_3;
    double p21_5=p2.y*p21_4;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p31_4=p3.y*p31_3;
    double p31_5=p3.y*p31_4;
    double p12_2=p1.z*p1.z;
    double p12_3=p1.z*p12_2;
    double p12_4=p1.z*p12_3;
    double p22_2=p2.z*p2.z;
    double p22_3=p2.z*p22_2;
    double p22_4=p2.z*p22_3;
    double p32_2=p3.z*p3.z;
    double p32_3=p3.z*p32_2;
    double p32_4=p3.z*p32_3;
    double p30_2=p3.x*p3.x;
    double p30_3=p3.x*p30_2;
    double p30_4=p3.x*p30_3;
    double p20_2=p2.x*p2.x;
    double p20_3=p2.x*p20_2;
    double p20_4=p2.x*p20_3;
    double p20_5=p2.x*p20_4;
    double p20_6=p2.x*p20_5;
    double p10_2=p1.x*p1.x;
    double p10_3=p1.x*p10_2;
    double p10_4=p1.x*p10_3;
    double p10_5=p1.x*p10_4;
    double p10_6=p1.x*p10_5;
    double c_0=6*p1.y;
    double c_1=2*p3.y;
    double c_2=p11_2;
    double c_3=p21_2;
    double c_4=p31_2;
    double c_5=5*p1.y;
    double c_6=p12_2;
    double c_7=p22_2;
    double c_8=p32_2;
    double c_9=p11_3;
    double c_10=2*p2.y;
    double c_11=p30_2;
    double c_12=p2.y+p3.y;
    double c_13=p21_3;
    double c_14=p31_3;
    double c_15=3*c_14;
    double c_16=3*c_8;
    double c_17=10*c_7;
    double c_18=3*c_9;
    double c_19=5*p2.y;
    double c_20=3*p3.y;
    double c_21=-(40*p3.y*p1.z*p2.z);
    double c_22=-(40*p2.y*p1.z*p3.z);
    double c_23=-(24*p3.y*c_8);
    double c_24=3*c_6;
    double c_25=15*c_7;
    double c_26=p20_2;
    double c_27=3*p2.y;
    double c_28=p12_4;
    double c_29=p12_3;
    double c_30=p22_3;
    double c_31=p22_4;
    double c_32=p32_3;
    double c_33=p32_4;
    double c_34=30*c_3;
    double c_35=15*p2.y*p3.y;
    double c_36=9*p2.y*c_4;
    double c_37=4*p1.z*p2.z;
    double c_38=3*p1.z*p3.z;
    double c_39=12*p2.z*p3.z;
    double c_40=6*c_8;
    double c_41=c_6+c_37+c_17+c_38+c_39+c_40;
    double c_42=6*c_7;
    double c_43=4*p1.z*p3.z;
    double c_44=3*p2.z*p3.z;
    double c_45=5*c_14;
    double c_46=3*p1.z*p2.z;
    double c_47=2*c_7;
    double c_48=2*p1.z*p3.z;
    double c_49=5*c_4;
    double c_50=p21_4;
    double c_51=p31_4;
    double c_52=2*c_8;
    double c_53=p2.z+p3.z;
    double c_54=2*p1.z*c_53;
    double c_55=c_6+c_47+c_44+c_52+c_54;
    double c_56=8*p1.z*p2.z;
    double c_57=8*p2.z*p3.z;
    double c_58=c_24+c_56+c_17+c_43+c_57+c_16;
    double c_59=3*p2.z;
    double c_60=c_59+p3.z;
    double c_61=5*p2.z*p3.z;
    double c_62=5*p2.z;
    double c_63=c_62+p3.z;
    double c_64=2*p1.z*c_63;
    double c_65=c_24+c_25+c_61+c_8+c_64;
    double c_66=-(8*c_65);
    double c_67=p20_3;
    double c_68=4*p1.y;
    double c_69=9*c_3*p3.y;
    double c_70=c_10+p3.y;
    double c_71=3*c_4;
    double c_72=2*p2.z*p3.z;
    double c_73=60*c_9;
    double c_74=3*c_13;
    double c_75=-(64*p3.y*p1.z*p2.z);
    double c_76=-(24*p2.y*c_7);
    double c_77=-(64*p2.y*p1.z*p3.z);
    double c_78=6*p2.y*p3.y;
    double c_79=9*c_4;
    double c_80=15*c_6;
    double c_81=p11_5;
    double c_82=5*c_81;
    double c_83=p21_5;
    double c_84=p31_5;
    double c_85=p11_4;
    double c_86=p30_4;
    double c_87=-(96*p2.y*c_4*p1.z*p2.z);
    double c_88=48*p3.y*c_29*p2.z;
    double c_89=-(96*c_3*p3.y*p1.z*p3.z);
    double c_90=48*p2.y*c_29*p3.z;
    double c_91=192*p3.y*p1.z*c_7*p3.z;
    double c_92=192*p2.y*p1.z*p2.z*c_8;
    double c_93=10*c_6;
    double c_94=5*c_13;
    double c_95=15*c_3*p3.y;
    double c_96=6*c_6;
    double c_97=4*p2.z*p3.z;
    double c_98=10*c_8;
    double c_99=2*c_6;
    double c_100=3*c_7;
    double c_101=2*p3.z;
    double c_102=p2.z+c_101;
    double c_103=5*c_28;
    double c_104=6*c_7*c_8;
    double c_105=3*p3.z;
    double c_106=p2.z+c_105;
    double c_107=5*p3.y;
    double c_108=2*p1.z*p2.z;
    double c_109=10*p2.z*p3.z;
    double c_110=15*c_8;
    double c_111=3*c_3;
    double c_112=5*p3.z;
    double c_113=p2.z+c_112;
    double c_114=2*p1.z*c_113;
    double c_115=c_24+c_7+c_61+c_110+c_114;
    double c_116=c_99+c_108+c_7+c_38+c_72+c_52;
    double c_117=c_99+c_46+c_47+c_48+c_72+c_8;
    double c_118=p2.y+c_1;
    double c_119=9*c_3;
    double c_120=24*p2.y*p3.y;
    double c_121=30*c_4;
    double c_122=15*p2.y*c_4;
    double c_123=c_6+c_46+c_42+c_43+c_39+c_98;
    double c_124=5*p1.z*p3.z;
    double c_125=c_6+c_108+c_100+c_124+c_109+c_110;
    double c_126=4*p1.z*c_102;
    double c_127=c_24+c_100+c_57+c_98+c_126;
    double c_128=15*c_4;
    double c_129=-(8*c_58);
    double c_130=3*c_7*p3.z;
    double c_131=3*p2.z*c_8;
    double c_132=5*p1.z*p2.z;
    double c_133=c_6+c_132+c_25+c_48+c_109+c_16;
    double c_134=-(4*p3.y*c_41);
    double c_135=5*c_31;
    double c_136=15*c_33;
    double c_137=2*p2.z;
    double c_138=10*c_32;
    double c_139=25*c_51;
    double c_140=15*c_31;
    double c_141=18*c_7*c_8;
    double c_142=5*c_33;
    double c_143=10*c_30;
    double c_144=5*c_83;
    double c_145=5*c_84;
    double c_146=p20_4;
    double c_147=3*p1.y;
    double c_148=4*p2.y;
    double c_149=-(48*c_3*p3.y*c_6);
    double c_150=-(48*p2.y*c_4*c_6);
    double c_151=-(72*c_3*p3.y*p1.z*p2.z);
    double c_152=-(24*c_14*p1.z*p2.z);
    double c_153=-(80*c_13*c_7);
    double c_154=96*p3.y*c_6*c_7;
    double c_155=48*p3.y*p1.z*c_30;
    double c_156=80*p2.y*c_31;
    double c_157=-(24*c_13*p1.z*p3.z);
    double c_158=-(72*p2.y*c_4*p1.z*p3.z);
    double c_159=192*p2.y*c_6*p2.z*p3.z;
    double c_160=192*p3.y*c_6*p2.z*p3.z;
    double c_161=144*p2.y*p1.z*c_7*p3.z;
    double c_162=-(80*c_14*c_8);
    double c_163=96*p2.y*c_6*c_8;
    double c_164=144*p3.y*p1.z*p2.z*c_8;
    double c_165=48*p2.y*p1.z*c_32;
    double c_166=80*p3.y*c_33;
    double c_167=10*c_13;
    double c_168=6*c_3*p3.y;
    double c_169=3*p2.y*c_4;
    double c_170=c_27+p3.y;
    double c_171=-(16*p3.y*c_7);
    double c_172=-(16*p3.y*p1.z*p3.z);
    double c_173=-(32*p2.y*p2.z*p3.z);
    double c_174=-(16*p3.y*p2.z*p3.z);
    double c_175=-(8*p2.y*c_8);
    double c_176=9*p2.y*p3.y;
    double c_177=4*p1.z*c_60;
    double c_178=c_93+c_42+c_44+c_8+c_177;
    double c_179=-(8*c_178);
    double c_180=10*c_9;
    double c_181=3*c_3*p3.y;
    double c_182=6*p2.y*c_4;
    double c_183=10*c_14;
    double c_184=p2.y+c_20;
    double c_185=4*p3.z;
    double c_186=p2.z+c_185;
    double c_187=3*p1.z*c_186;
    double c_188=c_96+c_7+c_97+c_98+c_187;
    double c_189=4*p1.z*c_106;
    double c_190=c_93+c_7+c_44+c_40+c_189;
    double c_191=-(8*c_190);
    double c_192=4*p3.y;
    double c_193=8*p1.z*c_53;
    double c_194=c_93+c_100+c_97+c_16+c_193;
    double c_195=-(8*c_194);
    double c_196=p20_5;
    double c_197=6*p2.y;
    double c_198=2*p1.y;
    double c_199=30*c_3*p3.y;
    double c_200=12*p2.y*p3.y;
    double c_201=4*p2.z;
    double c_202=c_201+p3.z;
    double c_203=3*p1.z*c_202;
    double c_204=c_96+c_17+c_97+c_8+c_203;
    double c_205=-(8*c_204);
    double c_206=4*c_14;
    double c_207=6*p3.y;
    double c_208=c_137+p3.z;
    double c_209=6*c_3;
    double c_210=-(8*c_117);
    double c_211=25*c_50*p3.y;
    double c_212=15*c_3;
    double c_213=5*p1.z*c_208;
    double c_214=c_80+c_100+c_72+c_8+c_213;
    double c_215=-(8*c_214);
    double c_216=4*c_9;
    double c_217=4*c_13;
    double c_218=6*c_4;
    double c_219=-(4*c_55);
    double c_220=25*c_50;
    double c_221=5*c_51;
    double c_222=-(24*p3.y*c_117);
    double c_223=4*c_30;
    double c_224=c_49+c_205;
    double c_225=30*c_81;
    double c_226=128*p3.y*c_29*p2.z;
    double c_227=128*p2.y*c_29*p3.z;
    double c_228=5*c_3;
    double c_229=10*p2.y*p3.y;
    double c_230=5*p1.z*c_102;
    double c_231=c_80+c_7+c_72+c_16+c_230;
    double c_232=-(8*c_231);
    double c_233=5*c_50;
    double c_234=c_49+c_210;
    double c_235=15*c_28;
    double c_236=3*c_7*c_8;
    double c_237=4*c_32;
    double c_238=12*c_9;
    double c_239=12*c_3*p3.y;
    return ((p3.y*(p1.z-p2.z)+p1.y*(p2.z-p3.z)+p2.y*(-p1.z+p3.z))*(5*p10_6*(7*p1.y+p2.y+p3.y)+5*p20_6*(p1.y+7*p2.y+p3.y)+5*
        c_196*p3.x*(p1.y+c_197+c_1)+5*p10_5*(p2.x*(c_0+c_10+p3.y)+p3.x*(c_0+p2.y+c_1))+p10_4*(105*c_9+45*c_2*p2.y+15*p1.y*
        c_3+c_74+45*c_2*p3.y+15*p1.y*p2.y*p3.y+c_181+15*p1.y*c_4+c_169+c_15+5*c_26*(c_5+c_27+p3.y)+5*c_11*(c_5+p2.y+c_20)+5*p2.x*
        p3.x*(c_5+2*c_12)-840*p1.y*c_6-120*p2.y*c_6-120*p3.y*c_6-240*p1.y*p1.z*p2.z-80*p2.y*p1.z*p2.z+c_21-40*p1.y*c_7+c_76-8*
        p3.y*c_7-240*p1.y*p1.z*p3.z+c_22-80*p3.y*p1.z*p3.z-40*p1.y*p2.z*p3.z-16*p2.y*p2.z*p3.z+c_174-40*p1.y*
        c_8+c_175+c_23)+c_67*p3.x*(c_18+6*c_2*c_70+5*c_11*(p1.y+4*c_12)+p1.y*(c_34+c_120+c_79+c_129)+4*(15*c_13+c_95+c_36+c_15-8*p2.y*
        c_133+c_134))+c_146*(c_18+105*c_13+45*c_3*p3.y+c_122+c_15+3*c_2*(c_19+p3.y)+5*c_11*(p1.y+c_19+c_20)-40*p2.y*c_6-8*p3.y*c_6-240*p2.y*
        p1.z*p2.z+c_21-840*p2.y*c_7-120*p3.y*c_7+c_22+c_172-240*p2.y*p2.z*p3.z-80*p3.y*p2.z*p3.z-40*p2.y*c_8+c_23+p1.y*(45*
        c_3+c_35+c_71+c_66))+c_26*(c_82+105*c_83+75*c_50*p3.y+50*c_13*c_4+30*c_3*c_14+15*p2.y*c_51+c_145+5*c_85*c_170+5*c_86*
        (p1.y+c_27+c_107)-80*c_13*c_6+c_149-24*p2.y*c_4*c_6-8*c_14*c_6+48*p2.y*c_28+16*p3.y*c_28-480*c_13*p1.z*p2.z-240*c_3*p3.y*p1.z*
        p2.z+c_87+c_152+192*p2.y*c_29*p2.z+c_88-1680*c_13*c_7-720*c_3*p3.y*c_7-240*p2.y*c_4*c_7-48*c_14*c_7+480*p2.y*c_6*c_7+c_154+960*
        p2.y*p1.z*c_30+160*p3.y*p1.z*c_30+1680*p2.y*c_31+240*p3.y*c_31-80*c_13*p1.z*p3.z+c_89+c_158-32*c_14*p1.z*p3.z+c_90+32*
        p3.y*c_29*p3.z-480*c_13*p2.z*p3.z-480*c_3*p3.y*p2.z*p3.z-288*p2.y*c_4*p2.z*p3.z-96*c_14*p2.z*p3.z+c_159+96*p3.y*
        c_6*p2.z*p3.z+480*p2.y*p1.z*c_7*p3.z+c_91+960*p2.y*c_30*p3.z+320*p3.y*c_30*p3.z-80*c_13*c_8-144*c_3*p3.y*c_8-144*p2.y*
        c_4*c_8+c_162+48*p2.y*c_6*c_8+48*p3.y*c_6*c_8+c_92+c_164+480*p2.y*c_7*c_8+288*p3.y*c_7*c_8+c_165+64*p3.y*p1.z*c_32+192*
        p2.y*p2.z*c_32+192*p3.y*p2.z*c_32+48*p2.y*c_33+c_166+c_9*(c_34+c_35+c_49+c_179)+3*c_11*(c_9+3*c_2*c_12+2*(c_94+c_69+c_36+c_45-4*
        p2.y*c_41-4*p3.y*c_123)+p1.y*(c_209+c_176+c_218-8*c_55))+c_2*(50*c_13+c_199+c_45+c_222+3*p2.y*c_224)+p1.y*(75*c_50+50*
        c_13*p3.y+c_221-24*c_4*c_55+3*p2.y*(c_45-8*p3.y*c_58)+16*(c_103+c_140+10*c_30*p3.z+c_104+3*p2.z*c_32+c_33+4*c_29*c_60+3*c_6*
        (c_42+c_44+c_8)+2*p1.z*(c_143+6*c_7*p3.z+c_131+c_32))+6*c_3*(c_49+c_66)))+p10_3*(5*c_67*(c_68+c_148+p3.y)+5*c_26*p3.x*
        (c_68+c_27+c_1)+p2.x*(c_73+12*c_13+c_69+c_182+c_15+30*c_2*c_70+5*c_11*(c_68+c_10+c_20)-160*p2.y*c_6-80*p3.y*c_6-192*p2.y*p1.z*
        p2.z+c_75-96*p2.y*c_7-24*p3.y*c_7+c_77-64*p3.y*p1.z*p3.z-48*p2.y*p2.z*p3.z-32*p3.y*p2.z*p3.z-16*p2.y*c_8+c_23+4*p1.y*
        (c_119+c_78+c_71+c_215))+p3.x*(c_73+c_74+c_168+c_36+12*c_14+30*c_2*c_118+5*c_11*(c_68+p2.y+c_192)-80*p2.y*c_6-160*p3.y*
        c_6-64*p2.y*p1.z*p2.z+c_75+c_76+c_171+c_77-192*p3.y*p1.z*p3.z+c_173-48*p3.y*p2.z*p3.z-24*p2.y*c_8-96*p3.y*c_8+4*p1.y*
        (c_111+c_78+c_79+c_232)))+c_11*(c_82+c_144+15*c_50*p3.y+30*c_13*c_4+50*c_3*c_14+75*p2.y*c_51+105*c_84+5*c_85*c_184+5*c_86*
        (p1.y+p2.y+7*p3.y)-8*c_13*c_6-24*c_3*p3.y*c_6+c_150-80*c_14*c_6+16*p2.y*c_28+48*p3.y*c_28-32*c_13*p1.z*p2.z+c_151+c_87-80*c_14*
        p1.z*p2.z+32*p2.y*c_29*p2.z+c_88+c_153-144*c_3*p3.y*c_7-144*p2.y*c_4*c_7-80*c_14*c_7+48*p2.y*c_6*c_7+48*p3.y*c_6*c_7+64*
        p2.y*p1.z*c_30+c_155+c_156+48*p3.y*c_31+c_157+c_89-240*p2.y*c_4*p1.z*p3.z-480*c_14*p1.z*p3.z+c_90+192*p3.y*c_29*p3.z-96*
        c_13*p2.z*p3.z-288*c_3*p3.y*p2.z*p3.z-480*p2.y*c_4*p2.z*p3.z-480*c_14*p2.z*p3.z+96*p2.y*c_6*p2.z*p3.z+c_160+c_161+c_91+192*
        p2.y*c_30*p3.z+192*p3.y*c_30*p3.z-48*c_13*c_8-240*c_3*p3.y*c_8-720*p2.y*c_4*c_8-1680*c_14*c_8+c_163+480*p3.y*
        c_6*c_8+c_92+480*p3.y*p1.z*p2.z*c_8+288*p2.y*c_7*c_8+480*p3.y*c_7*c_8+160*p2.y*p1.z*c_32+960*p3.y*p1.z*c_32+320*p2.y*
        p2.z*c_32+960*p3.y*p2.z*c_32+240*p2.y*c_33+1680*p3.y*c_33+c_9*(c_228+c_35+c_121+c_191)+c_2*(c_94+c_95+50*c_14-24*p3.y*c_188+6*
        p2.y*(c_49-4*c_116))+p1.y*(c_233+15*c_13*p3.y+50*p2.y*c_14+75*c_51-24*p2.y*p3.y*c_127-48*c_4*c_115+16*(c_103+c_31+3*c_30*
        p3.z+c_104+10*p2.z*c_32+c_136+4*c_29*c_106+3*c_6*(c_7+c_44+c_40)+2*p1.z*(c_30+c_130+6*p2.z*c_8+c_138))+6*c_3*(c_49+c_219))+c_11*
        (c_18+c_74+c_95+45*p2.y*c_4+105*c_14+3*c_2*(p2.y+c_107)-8*p2.y*c_125-40*p3.y*(c_6+c_7+6*p2.z*p3.z+21*c_8+p1.z*
        (p2.z+6*p3.z))+p1.y*(c_111+c_35+45*c_4-8*c_115)))+p2.x*p3.x*(c_82+10*c_85*c_12+5*c_86*(p1.y+c_10+c_207)+c_9*(c_212+20*p2.y*
        p3.y+c_128+c_195)+2*c_2*(c_167+c_95+c_183-24*p3.y*c_116+3*p2.y*c_234)+c_11*(c_18+6*c_2*c_118+p1.y*(c_119+c_120+c_121-8*
        (c_24+c_37+c_100+8*p1.z*p3.z+c_57+c_98))+4*(c_74+c_69+c_122+15*c_14-4*p2.y*c_123-8*p3.y*c_125))+p1.y*(c_220+40*c_13*p3.y+c_139-24*
        c_4*c_127+3*c_3*(c_128+c_129)+16*(c_103+c_135+8*c_30*p3.z+9*c_7*c_8+8*p2.z*c_32+c_142+8*c_29*c_53+3*c_6*(c_100+c_97+c_16)+4*
        p1.z*(2*c_30+c_130+c_131+2*c_32))+8*p2.y*(c_45-12*p3.y*c_55))+2*(15*c_83+c_211+15*c_84-16*c_14*c_125+2*c_13*(c_128-8*c_133)+6*
        c_3*(c_45+c_134)+16*p3.y*(c_28+c_135+12*c_30*p3.z+c_141+20*p2.z*c_32+c_136+c_29*(c_137+c_105)+3*c_6*(c_7+c_72+c_52)+p1.z*
        (c_223+9*c_7*p3.z+12*p2.z*c_8+c_138))+p2.y*(c_139-24*c_4*c_123+16*(c_28+c_140+20*c_30*p3.z+c_141+12*p2.z*c_32+c_142+c_29*
        (c_59+c_101)+3*c_6*(c_47+c_72+c_8)+p1.z*(c_143+12*c_7*p3.z+9*p2.z*c_8+c_237)))))+p10_2*(105*c_81+75*c_85*p2.y+50*c_9*c_3+30*c_2*
        c_13+15*p1.y*c_50+c_144+75*c_85*p3.y+50*c_9*p2.y*p3.y+30*c_2*c_3*p3.y+15*p1.y*c_13*p3.y+5*c_50*p3.y+50*c_9*c_4+30*c_2*
        p2.y*c_4+15*p1.y*c_3*c_4+5*c_13*c_4+30*c_2*c_14+15*p1.y*p2.y*c_14+5*c_3*c_14+15*p1.y*c_51+5*p2.y*c_51+c_145+5*c_146*
        (c_147+c_19+p3.y)+5*c_67*p3.x*(c_147+c_148+c_1)+5*c_86*(c_147+p2.y+c_107)-1680*c_9*c_6-720*c_2*p2.y*c_6-240*p1.y*c_3*c_6-48*c_13*
        c_6-720*c_2*p3.y*c_6-240*p1.y*p2.y*p3.y*c_6+c_149-240*p1.y*c_4*c_6+c_150-48*c_14*c_6+1680*p1.y*c_28+240*p2.y*c_28+240*p3.y*
        c_28-480*c_9*p1.z*p2.z-480*c_2*p2.y*p1.z*p2.z-288*p1.y*c_3*p1.z*p2.z-96*c_13*p1.z*p2.z-240*c_2*p3.y*p1.z*p2.z-192*
        p1.y*p2.y*p3.y*p1.z*p2.z+c_151-96*p1.y*c_4*p1.z*p2.z-48*p2.y*c_4*p1.z*p2.z+c_152+960*p1.y*c_29*p2.z+320*p2.y*c_29*
        p2.z+160*p3.y*c_29*p2.z-80*c_9*c_7-144*c_2*p2.y*c_7-144*p1.y*c_3*c_7+c_153-48*c_2*p3.y*c_7-72*p1.y*p2.y*p3.y*c_7-48*
        c_3*p3.y*c_7-24*p1.y*c_4*c_7-24*p2.y*c_4*c_7-8*c_14*c_7+480*p1.y*c_6*c_7+288*p2.y*c_6*c_7+c_154+192*p1.y*p1.z*c_30+192*p2.y*
        p1.z*c_30+c_155+48*p1.y*c_31+c_156+16*p3.y*c_31-480*c_9*p1.z*p3.z-240*c_2*p2.y*p1.z*p3.z-96*p1.y*c_3*p1.z*p3.z+c_157-480*
        c_2*p3.y*p1.z*p3.z-192*p1.y*p2.y*p3.y*p1.z*p3.z-48*c_3*p3.y*p1.z*p3.z-288*p1.y*c_4*p1.z*p3.z+c_158-96*c_14*
        p1.z*p3.z+960*p1.y*c_29*p3.z+160*p2.y*c_29*p3.z+320*p3.y*c_29*p3.z-80*c_9*p2.z*p3.z-96*c_2*p2.y*p2.z*p3.z-72*p1.y*
        c_3*p2.z*p3.z-32*c_13*p2.z*p3.z-96*c_2*p3.y*p2.z*p3.z-96*p1.y*p2.y*p3.y*p2.z*p3.z-48*c_3*p3.y*p2.z*p3.z-72*p1.y*
        c_4*p2.z*p3.z-48*p2.y*c_4*p2.z*p3.z-32*c_14*p2.z*p3.z+480*p1.y*c_6*p2.z*p3.z+c_159+c_160+192*p1.y*p1.z*c_7*p3.z+c_161+96*
        p3.y*p1.z*c_7*p3.z+48*p1.y*c_30*p3.z+64*p2.y*c_30*p3.z+32*p3.y*c_30*p3.z-80*c_9*c_8-48*c_2*p2.y*c_8-24*p1.y*c_3*
        c_8-8*c_13*c_8-144*c_2*p3.y*c_8-72*p1.y*p2.y*p3.y*c_8-24*c_3*p3.y*c_8-144*p1.y*c_4*c_8-48*p2.y*c_4*c_8+c_162+480*p1.y*
        c_6*c_8+c_163+288*p3.y*c_6*c_8+192*p1.y*p1.z*p2.z*c_8+96*p2.y*p1.z*p2.z*c_8+c_164+48*p1.y*c_7*c_8+48*p2.y*c_7*c_8+48*
        p3.y*c_7*c_8+192*p1.y*p1.z*c_32+c_165+192*p3.y*p1.z*c_32+48*p1.y*p2.z*c_32+32*p2.y*p2.z*c_32+64*p3.y*p2.z*c_32+48*p1.y*
        c_33+16*p2.y*c_33+c_166+3*c_26*(c_180+c_167+c_168+c_169+c_14+5*c_11*(p1.y+p2.y+p3.y)+6*c_2*c_170-48*p2.y*c_6-16*p3.y*c_6-96*
        p2.y*p1.z*p2.z-24*p3.y*p1.z*p2.z-80*p2.y*c_7+c_171-24*p2.y*p1.z*p3.z+c_172+c_173+c_174+c_175-8*p3.y*c_8+p1.y*(18*
        c_3+c_176+c_71+c_179))+3*c_11*(c_180+c_13+c_181+c_182+c_183+6*c_2*c_184-8*p2.y*c_116-8*p3.y*c_188+p1.y*(c_111+c_176+18*
        c_4+c_191))+p2.x*(5*p30_3*(c_147+c_10+c_192)+3*p3.x*(c_180+c_217+c_168+c_182+c_206+12*c_2*c_12-16*p2.y*c_117-16*p3.y*c_116+p1.y*
        (c_119+c_200+c_79+c_195))))+p1.x*(5*c_196*(c_198+c_197+p3.y)+5*c_146*p3.x*(c_198+c_19+c_1)+c_67*(c_238+60*c_13+c_199+12*p2.y*
        c_4+c_15+9*c_2*(c_148+p3.y)+5*c_11*(c_198+c_148+c_20)-96*p2.y*c_6-24*p3.y*c_6-320*p2.y*p1.z*p2.z+c_75-480*p2.y*c_7-80*
        p3.y*c_7+c_77-32*p3.y*p1.z*p3.z-160*p2.y*p2.z*p3.z-64*p3.y*p2.z*p3.z-32*p2.y*c_8+c_23+2*p1.y*(c_34+c_200+c_71+c_205))+c_26*
        p3.x*(5*c_11*(c_198+c_27+c_192)+3*(c_216+c_167+c_239+c_36+c_206+c_2*(9*p2.y+c_207)-16*p3.y*c_55-8*p2.y*(c_24+c_17+c_57+c_16+4*
        p1.z*c_208)+2*p1.y*(c_209+c_78+c_71+c_210)))+p2.x*(c_225+30*c_83+c_211+20*c_13*c_4+15*c_3*c_14+10*p2.y*c_51+c_145+25*
        c_85*c_70+5*c_86*(c_198+c_10+c_107)-96*c_13*c_6-72*c_3*p3.y*c_6+c_150-24*c_14*c_6+160*p2.y*c_28+80*p3.y*c_28-320*c_13*p1.z*
        p2.z-192*c_3*p3.y*p1.z*p2.z+c_87-32*c_14*p1.z*p2.z+384*p2.y*c_29*p2.z+c_226-480*c_13*c_7-240*c_3*p3.y*c_7-96*p2.y*c_4*
        c_7-24*c_14*c_7+576*p2.y*c_6*c_7+144*p3.y*c_6*c_7+640*p2.y*p1.z*c_30+128*p3.y*p1.z*c_30+480*p2.y*c_31+80*p3.y*c_31-64*
        c_13*p1.z*p3.z+c_89-96*p2.y*c_4*p1.z*p3.z-64*c_14*p1.z*p3.z+c_227+128*p3.y*c_29*p3.z-160*c_13*p2.z*p3.z-192*c_3*p3.y*
        p2.z*p3.z-144*p2.y*c_4*p2.z*p3.z-64*c_14*p2.z*p3.z+288*p2.y*c_6*p2.z*p3.z+c_160+384*p2.y*p1.z*c_7*p3.z+c_91+320*p2.y*
        c_30*p3.z+128*p3.y*c_30*p3.z-32*c_13*c_8-72*c_3*p3.y*c_8-96*p2.y*c_4*c_8+c_162+c_163+144*p3.y*c_6*c_8+c_92+192*p3.y*
        p1.z*p2.z*c_8+192*p2.y*c_7*c_8+144*p3.y*c_7*c_8+64*p2.y*p1.z*c_32+128*p3.y*p1.z*c_32+96*p2.y*p2.z*c_32+128*p3.y*p2.z*
        c_32+32*p2.y*c_33+c_166+4*c_9*(c_212+c_229+c_49+c_215)+3*c_11*(c_216+c_217+c_69+c_183+c_2*(c_197+9*p3.y)-8*p3.y*c_127+2*p1.y*
        (c_111+c_78+c_218-8*c_116)+4*p2.y*(c_71+c_219))+3*c_2*(20*c_13+c_95+c_45-8*p3.y*c_194+2*p2.y*(c_49+c_179))+2*p1.y*(c_220+20*
        c_13*p3.y+c_221-24*c_4*c_116+2*p2.y*(c_45+c_222)+16*(c_235+c_135+4*c_30*p3.z+c_236+2*p2.z*c_32+c_33+10*c_29*c_208+6*c_6*
        (c_100+c_72+c_8)+3*p1.z*(c_223+c_130+2*p2.z*c_8+c_32))+3*c_3*c_224))+p3.x*(c_225+c_144+10*c_50*p3.y+15*c_13*c_4+20*c_3*c_14+25*
        p2.y*c_51+30*c_84+25*c_85*c_118+5*c_86*(c_198+p2.y+c_207)-24*c_13*c_6+c_149-72*p2.y*c_4*c_6-96*c_14*c_6+80*p2.y*c_28+160*p3.y*
        c_28-64*c_13*p1.z*p2.z-96*c_3*p3.y*p1.z*p2.z+c_87-64*c_14*p1.z*p2.z+128*p2.y*c_29*p2.z+c_226+c_153-96*c_3*p3.y*c_7-72*
        p2.y*c_4*c_7-32*c_14*c_7+144*p2.y*c_6*c_7+c_154+128*p2.y*p1.z*c_30+64*p3.y*p1.z*c_30+c_156+32*p3.y*c_31-32*c_13*p1.z*
        p3.z+c_89-192*p2.y*c_4*p1.z*p3.z-320*c_14*p1.z*p3.z+c_227+384*p3.y*c_29*p3.z-64*c_13*p2.z*p3.z-144*c_3*p3.y*p2.z*
        p3.z-192*p2.y*c_4*p2.z*p3.z-160*c_14*p2.z*p3.z+c_159+288*p3.y*c_6*p2.z*p3.z+192*p2.y*p1.z*c_7*p3.z+c_91+128*p2.y*c_30*
        p3.z+96*p3.y*c_30*p3.z-24*c_13*c_8-96*c_3*p3.y*c_8-240*p2.y*c_4*c_8-480*c_14*c_8+144*p2.y*c_6*c_8+576*p3.y*c_6*c_8+c_92+384*
        p3.y*p1.z*p2.z*c_8+144*p2.y*c_7*c_8+192*p3.y*c_7*c_8+128*p2.y*p1.z*c_32+640*p3.y*p1.z*c_32+128*p2.y*p2.z*c_32+320*
        p3.y*p2.z*c_32+80*p2.y*c_33+480*p3.y*c_33+4*c_9*(c_228+c_229+c_128+c_232)+3*c_2*(c_94+10*c_3*p3.y+c_122+20*c_14-8*p2.y*
        c_194-16*p3.y*c_190)+2*p1.y*(c_233+10*c_13*p3.y+c_139-24*c_4*c_188+3*c_3*c_234+4*p2.y*(c_45-12*p3.y*c_116)+16*(c_235+c_31+2*
        c_30*p3.z+c_236+4*p2.z*c_32+c_142+10*c_29*c_102+6*c_6*(c_7+c_72+c_16)+3*p1.z*(c_30+2*c_7*p3.z+c_131+c_237)))+c_11*(c_238+c_74+c_239+60*
        c_14+9*c_2*(p2.y+c_192)-32*p3.y*c_115+p2.y*(c_121-8*c_127)+2*p1.y*(c_111+c_200+c_121-8*c_188))))))/double(483840);
}

double trig::s63() const{
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p11_4=p1.y*p11_3;
    double p11_5=p1.y*p11_4;
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p21_4=p2.y*p21_3;
    double p21_5=p2.y*p21_4;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p31_4=p3.y*p31_3;
    double p31_5=p3.y*p31_4;
    double p12_2=p1.z*p1.z;
    double p12_3=p1.z*p12_2;
    double p22_2=p2.z*p2.z;
    double p22_3=p2.z*p22_2;
    double p32_2=p3.z*p3.z;
    double p32_3=p3.z*p32_2;
    double p20_2=p2.x*p2.x;
    double p20_3=p2.x*p20_2;
    double p20_4=p2.x*p20_3;
    double p20_5=p2.x*p20_4;
    double p30_2=p3.x*p3.x;
    double p30_3=p3.x*p30_2;
    double p30_4=p3.x*p30_3;
    double p10_2=p1.x*p1.x;
    double p10_3=p1.x*p10_2;
    double p10_4=p1.x*p10_3;
    double p10_5=p1.x*p10_4;
    double c_0=6*p1.z;
    double c_1=6*p2.z;
    double c_2=2*p3.z;
    double c_3=2*p1.z;
    double c_4=p1.z+c_1+c_2;
    double c_5=5*p2.z;
    double c_6=2*p2.z;
    double c_7=c_0+c_6+p3.z;
    double c_8=p2.z+p3.z;
    double c_9=c_0+p2.z+c_2;
    double c_10=5*p1.z;
    double c_11=3*p3.z;
    double c_12=p11_2;
    double c_13=p21_2;
    double c_14=p31_2;
    double c_15=p12_3;
    double c_16=p11_3;
    double c_17=p21_3;
    double c_18=p31_3;
    double c_19=p12_2;
    double c_20=p22_2;
    double c_21=p22_3;
    double c_22=p32_2;
    double c_23=p32_3;
    double c_24=3*p2.z;
    double c_25=c_10+c_24+p3.z;
    double c_26=4*p1.z;
    double c_27=c_26+c_24+c_2;
    double c_28=c_10+p2.z+c_11;
    double c_29=c_26+c_6+c_11;
    double c_30=p20_2;
    double c_31=4*c_18*p1.z;
    double c_32=-(48*p3.y*p1.z*c_22);
    double c_33=4*p2.z;
    double c_34=p30_2;
    double c_35=4*p3.z;
    double c_36=c_3+c_5+c_2;
    double c_37=c_3+c_24+c_35;
    double c_38=4*p2.y*c_14*p1.z;
    double c_39=60*c_13*p3.y*p2.z;
    double c_40=-(80*p2.y*c_19*p2.z);
    double c_41=-(80*p3.y*c_21);
    double c_42=20*c_17*p3.z;
    double c_43=4*c_18*p3.z;
    double c_44=-(32*p3.y*p1.z*p2.z*p3.z);
    double c_45=-(240*p2.y*c_20*p3.z);
    double c_46=-(16*p2.y*p1.z*c_22);
    double c_47=-(16*p3.y*c_23);
    double c_48=c_26+c_33+p3.z;
    double c_49=3*p1.z;
    double c_50=c_49+c_33+c_2;
    double c_51=c_3+c_33+c_11;
    double c_52=p1.z+c_5+c_11;
    double c_53=4*c_8;
    double c_54=p1.z+c_53;
    double c_55=c_3+c_1+p3.z;
    double c_56=4*c_15;
    double c_57=p1.z+p2.z+p3.z;
    double c_58=2*p3.y*c_57;
    double c_59=p2.y*c_50;
    double c_60=p20_3;
    double c_61=c_49+c_5+p3.z;
    double c_62=4*p2.y*c_61;
    double c_63=p3.y*c_50;
    double c_64=-(80*p2.y*c_15);
    double c_65=5*p3.y*p1.z;
    double c_66=2*p3.y*c_8;
    double c_67=2*p2.y*c_25;
    double c_68=2*p2.z*p3.z;
    double c_69=9*p2.y*c_14*p1.z;
    double c_70=-(80*p3.y*c_15);
    double c_71=4*c_17*p2.z;
    double c_72=6*p2.y*c_14*p2.z;
    double c_73=4*c_18*p2.z;
    double c_74=-(48*p2.y*c_19*p2.z);
    double c_75=-(48*p3.y*c_19*p2.z);
    double c_76=-(16*p2.y*c_21);
    double c_77=6*c_13*p3.y*p3.z;
    double c_78=12*p2.y*c_14*p3.z;
    double c_79=20*c_18*p3.z;
    double c_80=-(48*p2.y*c_19*p3.z);
    double c_81=-(72*p3.y*p1.z*p2.z*p3.z);
    double c_82=-(24*p3.y*c_20*p3.z);
    double c_83=-(36*p2.y*p1.z*c_22);
    double c_84=-(24*p2.y*p2.z*c_22);
    double c_85=-(48*p3.y*p2.z*c_22);
    double c_86=-(16*p2.y*c_23);
    double c_87=-(80*p3.y*c_23);
    double c_88=5*p2.y*p1.z;
    double c_89=2*p2.y*c_8;
    double c_90=2*p3.y*c_28;
    double c_91=c_26+p2.z+c_35;
    double c_92=c_49+c_6+c_35;
    double c_93=5*p3.z;
    double c_94=20*c_15;
    double c_95=4*c_23;
    double c_96=p11_4;
    double c_97=p21_4;
    double c_98=p31_4;
    double c_99=p11_5;
    double c_100=p21_5;
    double c_101=p31_5;
    double c_102=p20_4;
    double c_103=c_49+p2.z+c_93;
    double c_104=6*p3.z;
    double c_105=20*c_17*p1.z;
    double c_106=12*c_13*p3.y*p1.z;
    double c_107=6*p2.y*c_14*p1.z;
    double c_108=60*c_17*p2.z;
    double c_109=-(144*p2.y*c_19*p2.z);
    double c_110=-(240*p2.y*p1.z*c_20);
    double c_111=-(48*p3.y*p1.z*c_20);
    double c_112=-(240*p2.y*c_21);
    double c_113=-(24*p3.y*c_19*p3.z);
    double c_114=-(96*p2.y*p1.z*p2.z*p3.z);
    double c_115=-(48*p3.y*p1.z*p2.z*p3.z);
    double c_116=-(24*p2.y*p1.z*c_22);
    double c_117=3*p2.y*c_48;
    double c_118=p3.y*c_27;
    double c_119=10*c_21;
    double c_120=3*p2.z*c_22;
    double c_121=4*c_17*p1.z;
    double c_122=6*c_13*p3.y*p1.z;
    double c_123=-(16*p2.y*c_15);
    double c_124=-(16*p3.y*c_15);
    double c_125=12*c_13*p3.y*p2.z;
    double c_126=-(24*p3.y*c_19*p2.z);
    double c_127=-(48*p2.y*p1.z*c_20);
    double c_128=-(24*p3.y*p1.z*c_20);
    double c_129=-(16*p3.y*c_21);
    double c_130=4*c_17*p3.z;
    double c_131=-(24*p2.y*c_19*p3.z);
    double c_132=-(48*p2.y*p1.z*p2.z*p3.z);
    double c_133=-(48*p2.y*c_20*p3.z);
    double c_134=p2.y*c_27;
    double c_135=p3.y*c_29;
    double c_136=c_3+c_6+c_93;
    double c_137=10*c_15;
    double c_138=4*c_21;
    double c_139=6*c_20*p3.z;
    double c_140=3*c_20;
    double c_141=4*p2.z*p3.z;
    double c_142=3*c_22;
    double c_143=p2.y*c_29;
    double c_144=3*p3.y*c_91;
    double c_145=3*c_20*p3.z;
    double c_146=6*p2.z*c_22;
    double c_147=10*c_23;
    double c_148=3*p2.z*p3.z;
    double c_149=c_3+p2.z+c_104;
    double c_150=-(10*c_97*p3.y*p1.z);
    double c_151=16*c_18*c_15;
    double c_152=-(30*c_100*p2.z);
    double c_153=24*p2.y*c_14*c_19*p2.z;
    double c_154=48*c_13*p3.y*p1.z*c_20;
    double c_155=80*c_17*c_21;
    double c_156=24*c_13*p3.y*c_19*p3.z;
    double c_157=32*c_17*p1.z*p2.z*p3.z;
    double c_158=c_88+c_89+c_90;
    double c_159=p30_4;
    double c_160=2*c_20*p3.z;
    double c_161=p2.z+c_2;
    double c_162=10*c_19*c_161;
    double c_163=c_20+c_68+c_142;
    double c_164=4*p1.z*c_163;
    double c_165=c_94+c_21+c_160+c_120+c_95+c_162+c_164;
    double c_166=4*c_20*p3.z;
    double c_167=10*p2.z*c_22;
    double c_168=20*c_23;
    double c_169=p2.z+c_35;
    double c_170=3*c_19*c_169;
    double c_171=10*c_22;
    double c_172=c_20+c_141+c_171;
    double c_173=2*p1.z*c_172;
    double c_174=c_56+c_21+c_166+c_167+c_168+c_170+c_173;
    double c_175=12*c_20*p3.z;
    double c_176=9*p2.z*c_22;
    double c_177=9*p2.z;
    double c_178=c_177+c_104;
    double c_179=c_19*c_178;
    double c_180=2*c_20;
    double c_181=c_180+c_68+c_22;
    double c_182=6*p1.z*c_181;
    double c_183=c_56+c_119+c_175+c_176+c_95+c_179+c_182;
    double c_184=9*c_20*p3.z;
    double c_185=12*p2.z*c_22;
    double c_186=9*p3.z;
    double c_187=c_1+c_186;
    double c_188=c_19*c_187;
    double c_189=2*c_22;
    double c_190=c_20+c_68+c_189;
    double c_191=6*p1.z*c_190;
    double c_192=c_56+c_138+c_184+c_185+c_147+c_188+c_191;
    double c_193=p2.z+c_11;
    double c_194=6*c_19*c_193;
    double c_195=6*c_22;
    double c_196=c_20+c_148+c_195;
    double c_197=3*p1.z*c_196;
    double c_198=c_137+c_21+c_145+c_146+c_147+c_194+c_197;
    double c_199=12*c_19*c_8;
    double c_200=c_140+c_141+c_142;
    double c_201=3*p1.z*c_200;
    double c_202=c_137+c_138+c_139+c_146+c_95+c_199+c_201;
    double c_203=p1.z+c_24+c_93;
    double c_204=p2.y*c_92;
    double c_205=4*p3.y*c_103;
    double c_206=7*p3.z;
    double c_207=p1.z+p2.z+c_206;
    double c_208=p1.z+c_6+c_104;
    double c_209=-(10*p2.y*c_98*p1.z);
    double c_210=16*c_17*c_15;
    double c_211=-(60*c_13*c_18*p2.z);
    double c_212=16*c_18*c_21;
    double c_213=-(60*c_17*c_14*p3.z);
    double c_214=-(30*c_101*p3.z);
    double c_215=32*c_18*p1.z*p2.z*p3.z;
    double c_216=144*p2.y*c_14*c_20*p3.z;
    double c_217=48*p2.y*c_14*p1.z*c_22;
    double c_218=144*c_13*p3.y*p2.z*c_22;
    double c_219=16*c_17*c_23;
    double c_220=80*c_18*c_23;
    double c_221=c_65+c_66+c_67;
    double c_222=2*p2.z*c_22;
    double c_223=c_6+p3.z;
    double c_224=10*c_19*c_223;
    double c_225=c_140+c_68+c_22;
    double c_226=4*p1.z*c_225;
    double c_227=c_94+c_138+c_145+c_222+c_23+c_224+c_226;
    double c_228=c_24+p3.z;
    double c_229=6*c_19*c_228;
    double c_230=6*c_20;
    double c_231=c_230+c_148+c_22;
    double c_232=3*p1.z*c_231;
    double c_233=c_137+c_119+c_139+c_120+c_23+c_229+c_232;
    double c_234=20*c_21;
    double c_235=10*c_20*p3.z;
    double c_236=4*p2.z*c_22;
    double c_237=c_33+p3.z;
    double c_238=3*c_19*c_237;
    double c_239=10*c_20;
    double c_240=c_239+c_141+c_22;
    double c_241=2*p1.z*c_240;
    double c_242=c_56+c_234+c_235+c_236+c_23+c_238+c_241;
    double c_243=2*p2.y*c_57;
    double c_244=p3.y*c_92;
    double c_245=5*c_14*c_208;
    double c_246=2*c_19*c_161;
    double c_247=8*p2.z*p3.z;
    double c_248=c_140+c_247+c_171;
    double c_249=p1.z*c_248;
    double c_250=5*p2.z*c_22;
    double c_251=5*c_23;
    double c_252=c_21+c_145+c_250+c_251;
    double c_253=4*c_252;
    double c_254=c_15+c_246+c_249+c_253;
    return ((p3.y*(p1.z-p2.z)+p1.y*(p2.z-p3.z)+p2.y*(-p1.z+p3.z))*(-3*p10_5*(6*p1.y*(7*p1.z+p2.z+p3.z)+p2.y*c_7+p3.y*
        c_9)-3*p20_5*(p1.y*c_55+6*p2.y*(p1.z+7*p2.z+p3.z)+p3.y*c_4)-3*c_102*p3.x*(p1.y*c_36+5*p2.y*c_4+2*p3.y*c_52)-3*p10_4*
        (p2.x*(c_65+c_66+5*p1.y*c_7+c_67)+p3.x*(c_88+c_89+5*p1.y*c_9+c_90))-p10_3*(140*c_16*p1.z+60*c_12*p2.y*p1.z+20*p1.y*c_13*
        p1.z+c_121+60*c_12*p3.y*p1.z+20*p1.y*p2.y*p3.y*p1.z+4*c_13*p3.y*p1.z+20*p1.y*c_14*p1.z+c_38+c_31-560*p1.y*
        c_15+c_64+c_70+20*c_16*p2.z+20*c_12*p2.y*p2.z+12*p1.y*c_13*p2.z+c_71+10*c_12*p3.y*p2.z+8*p1.y*p2.y*p3.y*p2.z+3*c_13*p3.y*
        p2.z+4*p1.y*c_14*p2.z+2*p2.y*c_14*p2.z+c_18*p2.z-240*p1.y*c_19*p2.z+c_40-40*p3.y*c_19*p2.z-80*p1.y*p1.z*c_20+c_127-16*
        p3.y*p1.z*c_20-16*p1.y*c_21+c_76-4*p3.y*c_21+20*c_16*p3.z+10*c_12*p2.y*p3.z+4*p1.y*c_13*p3.z+c_17*p3.z+20*c_12*p3.y*
        p3.z+8*p1.y*p2.y*p3.y*p3.z+2*c_13*p3.y*p3.z+12*p1.y*c_14*p3.z+3*p2.y*c_14*p3.z+c_43-240*p1.y*c_19*p3.z-40*p2.y*c_19*
        p3.z-80*p3.y*c_19*p3.z-80*p1.y*p1.z*p2.z*p3.z-32*p2.y*p1.z*p2.z*p3.z+c_44-16*p1.y*c_20*p3.z-12*p2.y*c_20*p3.z-8*
        p3.y*c_20*p3.z-80*p1.y*p1.z*c_22+c_46+c_32-16*p1.y*p2.z*c_22-8*p2.y*p2.z*c_22-12*p3.y*p2.z*c_22-16*p1.y*c_23-4*p2.y*
        c_23+c_47+3*c_30*(4*p1.y*c_25+c_117+c_118)+6*p2.x*p3.x*(10*p1.y*p1.z+4*p1.y*c_8+c_134+c_135)+3*c_34*(4*p1.y*
        c_28+c_143+c_144))-c_30*p3.x*(10*c_17*p1.z+c_106+c_69+c_31-12*p2.y*c_15-8*p3.y*c_15+c_108+c_39+36*p2.y*c_14*p2.z+12*c_18*p2.z+c_74+c_126-120*
        p2.y*p1.z*c_20+c_111+c_112+c_41+c_42+36*c_13*p3.y*p3.z+36*p2.y*c_14*p3.z+c_79+c_131+c_113+c_114+c_81+c_45-144*
        p3.y*c_20*p3.z+c_83+c_32-144*p2.y*p2.z*c_22-144*p3.y*p2.z*c_22-48*p2.y*c_23+c_87+c_16*c_27+3*c_12*(c_58+c_59)+3*c_34*(p1.y*
        c_37+4*p3.y*c_203+3*p2.y*c_54)+p1.y*(6*c_13*c_36+6*p2.y*p3.y*c_51+3*c_14*c_37-4*c_183))-c_60*(c_105+10*c_13*p3.y*
        p1.z+c_38+c_18*p1.z+c_123-4*p3.y*c_15+140*c_17*p2.z+c_39+20*p2.y*c_14*p2.z+c_73+c_40-16*p3.y*c_19*p2.z+c_110-40*p3.y*p1.z*
        c_20-560*p2.y*c_21+c_41+c_42+20*c_13*p3.y*p3.z+c_78+c_43-16*p2.y*c_19*p3.z-8*p3.y*c_19*p3.z-80*p2.y*p1.z*p2.z*
        p3.z+c_44+c_45-80*p3.y*c_20*p3.z+c_46-12*p3.y*p1.z*c_22-80*p2.y*p2.z*c_22+c_85+c_86+c_47+c_16*c_48+c_12*(c_62+c_63)+3*c_34*(p1.y*
        c_51+4*p2.y*c_52+3*p3.y*c_54)+p1.y*(10*c_13*c_55+4*p2.y*p3.y*c_36+c_14*c_51-4*c_242))-p10_2*(9*c_30*p3.x*(c_58+p1.y*
        c_27+c_59)+3*c_60*(3*p1.y*c_48+c_62+c_63)+p2.x*(12*c_17*p1.z+9*c_13*p3.y*p1.z+c_107+3*c_18*p1.z+c_64-40*p3.y*c_15+20*c_17*
        p2.z+c_125+c_72+2*c_18*p2.z+c_109+c_75-144*p2.y*p1.z*c_20-36*p3.y*p1.z*c_20-80*p2.y*c_21+c_129+c_130+c_77+6*p2.y*c_14*
        p3.z+c_43+c_80-48*p3.y*c_19*p3.z-72*p2.y*p1.z*p2.z*p3.z+c_115+c_133+c_82+c_116-36*p3.y*p1.z*c_22+c_84-24*p3.y*p2.z*c_22-8*
        p2.y*c_23+c_47+10*c_16*c_7+6*c_12*c_221+9*c_34*(c_243+p1.y*c_29+c_244)+3*p1.y*(3*c_13*c_48+2*p2.y*p3.y*c_27+c_14*c_29-4*
        c_227))+p3.x*(3*c_17*p1.z+c_122+c_69+12*c_18*p1.z-40*p2.y*c_15+c_70+c_71+6*c_13*p3.y*p2.z+c_72+c_73+c_74+c_75-36*p2.y*
        p1.z*c_20+c_128+c_76-8*p3.y*c_21+2*c_17*p3.z+c_77+c_78+c_79+c_80-144*p3.y*c_19*p3.z+c_132+c_81-24*p2.y*c_20*p3.z+c_82+c_83-144*
        p3.y*p1.z*c_22+c_84+c_85+c_86+c_87+10*c_16*c_9+6*c_12*c_158+3*c_34*(3*p1.y*c_91+c_204+c_205)+3*p1.y*(c_13*c_27+2*p2.y*
        p3.y*c_29+3*c_14*c_91-4*c_165)))-p1.x*(-210*c_99*p1.z-150*c_96*p2.y*p1.z-100*c_16*c_13*p1.z-60*c_12*c_17*p1.z-30*p1.y*
        c_97*p1.z-10*c_100*p1.z-150*c_96*p3.y*p1.z-100*c_16*p2.y*p3.y*p1.z-60*c_12*c_13*p3.y*p1.z-30*p1.y*c_17*p3.y*p1.z+c_150-100*
        c_16*c_14*p1.z-60*c_12*p2.y*c_14*p1.z-30*p1.y*c_13*c_14*p1.z-10*c_17*c_14*p1.z-60*c_12*c_18*p1.z-30*p1.y*p2.y*
        c_18*p1.z-10*c_13*c_18*p1.z-30*p1.y*c_98*p1.z+c_209-10*c_101*p1.z+560*c_16*c_15+240*c_12*p2.y*c_15+80*p1.y*c_13*c_15+c_210+240*
        c_12*p3.y*c_15+80*p1.y*p2.y*p3.y*c_15+16*c_13*p3.y*c_15+80*p1.y*c_14*c_15+16*p2.y*c_14*c_15+c_151-30*c_99*p2.z-50*
        c_96*p2.y*p2.z-60*c_16*c_13*p2.z-60*c_12*c_17*p2.z-50*p1.y*c_97*p2.z+c_152-25*c_96*p3.y*p2.z-40*c_16*p2.y*p3.y*p2.z-45*
        c_12*c_13*p3.y*p2.z-40*p1.y*c_17*p3.y*p2.z-25*c_97*p3.y*p2.z-20*c_16*c_14*p2.z-30*c_12*p2.y*c_14*p2.z-30*p1.y*c_13*
        c_14*p2.z-20*c_17*c_14*p2.z-15*c_12*c_18*p2.z-20*p1.y*p2.y*c_18*p2.z-15*c_13*c_18*p2.z-10*p1.y*c_98*p2.z-10*p2.y*c_98*
        p2.z-5*c_101*p2.z+240*c_16*c_19*p2.z+240*c_12*p2.y*c_19*p2.z+144*p1.y*c_13*c_19*p2.z+48*c_17*c_19*p2.z+120*c_12*p3.y*
        c_19*p2.z+96*p1.y*p2.y*p3.y*c_19*p2.z+36*c_13*p3.y*c_19*p2.z+48*p1.y*c_14*c_19*p2.z+c_153+12*c_18*c_19*p2.z+80*c_16*
        p1.z*c_20+144*c_12*p2.y*p1.z*c_20+144*p1.y*c_13*p1.z*c_20+80*c_17*p1.z*c_20+48*c_12*p3.y*p1.z*c_20+72*p1.y*p2.y*p3.y*
        p1.z*c_20+c_154+24*p1.y*c_14*p1.z*c_20+24*p2.y*c_14*p1.z*c_20+8*c_18*p1.z*c_20+16*c_16*c_21+48*c_12*p2.y*c_21+80*p1.y*
        c_13*c_21+c_155+12*c_12*p3.y*c_21+32*p1.y*p2.y*p3.y*c_21+40*c_13*p3.y*c_21+8*p1.y*c_14*c_21+16*p2.y*c_14*c_21+4*c_18*
        c_21-30*c_99*p3.z-25*c_96*p2.y*p3.z-20*c_16*c_13*p3.z-15*c_12*c_17*p3.z-10*p1.y*c_97*p3.z-5*c_100*p3.z-50*c_96*p3.y*p3.z-40*
        c_16*p2.y*p3.y*p3.z-30*c_12*c_13*p3.y*p3.z-20*p1.y*c_17*p3.y*p3.z-10*c_97*p3.y*p3.z-60*c_16*c_14*p3.z-45*c_12*p2.y*
        c_14*p3.z-30*p1.y*c_13*c_14*p3.z-15*c_17*c_14*p3.z-60*c_12*c_18*p3.z-40*p1.y*p2.y*c_18*p3.z-20*c_13*c_18*p3.z-50*
        p1.y*c_98*p3.z-25*p2.y*c_98*p3.z+c_214+240*c_16*c_19*p3.z+120*c_12*p2.y*c_19*p3.z+48*p1.y*c_13*c_19*p3.z+12*c_17*c_19*
        p3.z+240*c_12*p3.y*c_19*p3.z+96*p1.y*p2.y*p3.y*c_19*p3.z+c_156+144*p1.y*c_14*c_19*p3.z+36*p2.y*c_14*c_19*p3.z+48*c_18*
        c_19*p3.z+80*c_16*p1.z*p2.z*p3.z+96*c_12*p2.y*p1.z*p2.z*p3.z+72*p1.y*c_13*p1.z*p2.z*p3.z+c_157+96*c_12*p3.y*p1.z*
        p2.z*p3.z+96*p1.y*p2.y*p3.y*p1.z*p2.z*p3.z+48*c_13*p3.y*p1.z*p2.z*p3.z+72*p1.y*c_14*p1.z*p2.z*p3.z+48*p2.y*c_14*
        p1.z*p2.z*p3.z+c_215+16*c_16*c_20*p3.z+36*c_12*p2.y*c_20*p3.z+48*p1.y*c_13*c_20*p3.z+40*c_17*c_20*p3.z+24*c_12*p3.y*
        c_20*p3.z+48*p1.y*p2.y*p3.y*c_20*p3.z+48*c_13*p3.y*c_20*p3.z+24*p1.y*c_14*c_20*p3.z+36*p2.y*c_14*c_20*p3.z+16*c_18*c_20*
        p3.z+80*c_16*p1.z*c_22+48*c_12*p2.y*p1.z*c_22+24*p1.y*c_13*p1.z*c_22+8*c_17*p1.z*c_22+144*c_12*p3.y*p1.z*c_22+72*
        p1.y*p2.y*p3.y*p1.z*c_22+24*c_13*p3.y*p1.z*c_22+144*p1.y*c_14*p1.z*c_22+c_217+80*c_18*p1.z*c_22+16*c_16*p2.z*c_22+24*c_12*
        p2.y*p2.z*c_22+24*p1.y*c_13*p2.z*c_22+16*c_17*p2.z*c_22+36*c_12*p3.y*p2.z*c_22+48*p1.y*p2.y*p3.y*p2.z*c_22+36*c_13*
        p3.y*p2.z*c_22+48*p1.y*c_14*p2.z*c_22+48*p2.y*c_14*p2.z*c_22+40*c_18*p2.z*c_22+16*c_16*c_23+12*c_12*p2.y*c_23+8*p1.y*
        c_13*c_23+4*c_17*c_23+48*c_12*p3.y*c_23+32*p1.y*p2.y*p3.y*c_23+16*c_13*p3.y*c_23+80*p1.y*c_14*c_23+40*p2.y*c_14*c_23+c_220+3*
        c_102*(2*p1.y*c_61+5*p2.y*c_55+p3.y*c_36)+6*c_60*p3.x*(p1.y*c_50+2*p2.y*c_36+p3.y*c_51)+3*c_159*(2*p1.y*c_103+p2.y*
        c_136+5*p3.y*c_149)+c_30*(c_105+c_106+c_107+2*c_18*p1.z-48*p2.y*c_15+c_124+c_108+30*c_13*p3.y*p2.z+12*p2.y*c_14*p2.z+3*
        c_18*p2.z+c_109-36*p3.y*c_19*p2.z+c_110+c_111+c_112-40*p3.y*c_21+10*c_17*p3.z+12*c_13*p3.y*p3.z+9*p2.y*c_14*p3.z+c_43-36*
        p2.y*c_19*p3.z+c_113+c_114+c_115-120*p2.y*c_20*p3.z-48*p3.y*c_20*p3.z+c_116-24*p3.y*p1.z*c_22-48*p2.y*p2.z*c_22-36*
        p3.y*p2.z*c_22-12*p2.y*c_23+c_47+4*c_16*c_25+3*c_12*(c_117+c_118)+9*c_34*(2*p1.y*c_57+p2.y*c_51+p3.y*c_37)+2*p1.y*(3*c_14*
        c_57+6*c_13*c_61+3*p2.y*p3.y*c_50-4*c_233))+2*p2.x*p3.x*(c_121+c_122+c_107+c_31+c_123+c_124+10*c_17*p2.z+c_125+9*p2.y*c_14*
        p2.z+c_73-36*p2.y*c_19*p2.z+c_126+c_127+c_128-40*p2.y*c_21+c_129+c_130+9*c_13*p3.y*p3.z+c_78+10*c_18*p3.z+c_131-36*
        p3.y*c_19*p3.z+c_132+c_115+c_133-36*p3.y*c_20*p3.z+c_116+c_32-36*p2.y*p2.z*c_22+c_85+c_86-40*p3.y*c_23+2*c_16*(c_10+2*c_8)+3*
        c_12*(c_134+c_135)+3*c_34*(p1.y*c_92+p2.y*c_37+2*p3.y*c_136)+p1.y*(12*p2.y*p3.y*c_57+3*c_13*c_50+3*c_14*c_92-4*c_202))+c_34*
        (4*c_16*c_28+c_17*c_51+3*c_13*p3.y*c_37+6*p2.y*c_14*c_136+3*c_12*(c_143+c_144)-4*p2.y*c_192+2*p1.y*(3*c_13*c_57+3*p2.y*
        p3.y*c_92+6*c_14*c_103-4*c_198)+2*p3.y*(5*c_14*c_149-6*c_174)))-p3.x*(-5*c_100*p1.z+c_150-15*c_17*c_14*p1.z-20*c_13*c_18*
        p1.z-25*p2.y*c_98*p1.z-30*c_101*p1.z+4*c_17*c_15+8*c_13*p3.y*c_15+12*p2.y*c_14*c_15+c_151+c_152-50*c_97*p3.y*p2.z-60*
        c_17*c_14*p2.z+c_211-50*p2.y*c_98*p2.z-30*c_101*p2.z+16*c_17*c_19*p2.z+24*c_13*p3.y*c_19*p2.z+c_153+16*c_18*c_19*p2.z+40*
        c_17*p1.z*c_20+c_154+36*p2.y*c_14*p1.z*c_20+16*c_18*p1.z*c_20+c_155+80*c_13*p3.y*c_21+48*p2.y*c_14*c_21+c_212-10*c_100*
        p3.z-30*c_97*p3.y*p3.z+c_213-100*c_13*c_18*p3.z-150*p2.y*c_98*p3.z-210*c_101*p3.z+8*c_17*c_19*p3.z+c_156+48*p2.y*c_14*c_19*
        p3.z+80*c_18*c_19*p3.z+c_157+72*c_13*p3.y*p1.z*p2.z*p3.z+96*p2.y*c_14*p1.z*p2.z*p3.z+80*c_18*p1.z*p2.z*p3.z+80*
        c_17*c_20*p3.z+144*c_13*p3.y*c_20*p3.z+c_216+80*c_18*c_20*p3.z+12*c_17*p1.z*c_22+48*c_13*p3.y*p1.z*c_22+120*p2.y*c_14*
        p1.z*c_22+240*c_18*p1.z*c_22+48*c_17*p2.z*c_22+c_218+240*p2.y*c_14*p2.z*c_22+240*c_18*p2.z*c_22+c_219+80*c_13*p3.y*c_23+240*
        p2.y*c_14*c_23+560*c_18*c_23-5*c_99*c_9-5*c_96*c_158+3*c_159*(p1.y*c_149+p2.y*c_208+6*p3.y*c_207)+c_16*(-5*c_13*c_27-10*
        p2.y*p3.y*c_29-15*c_14*c_91+4*c_165)+p1.y*(-5*c_97*c_36-10*c_17*p3.y*c_51-25*c_98*c_149+12*c_14*c_174+c_13*(-15*c_14*c_37+4*
        c_183)+p2.y*(-20*c_18*c_136+8*p3.y*c_192))+c_12*(-30*c_13*p3.y*c_57-5*c_17*c_50-20*c_18*c_103+8*p3.y*c_198+p2.y*(-15*c_14*
        c_92+4*c_202))+c_34*(c_16*c_91+4*c_13*p3.y*c_203+c_17*c_54+c_12*(c_204+c_205)+p1.y*(c_13*c_37+4*p2.y*p3.y*c_136+10*c_14*c_149-4*
        c_174)+4*p3.y*(5*c_14*c_207-4*(c_15+c_21+5*c_20*p3.z+15*p2.z*c_22+35*c_23+c_19*(p2.z+c_93)+p1.z*(c_20+5*p2.z*p3.z+15*
        c_22)))+2*p2.y*(c_245-2*c_254)))-p2.x*(-30*c_100*p1.z-25*c_97*p3.y*p1.z-20*c_17*c_14*p1.z-15*c_13*c_18*p1.z+c_209-5*c_101*
        p1.z+c_210+12*c_13*p3.y*c_15+8*p2.y*c_14*c_15+4*c_18*c_15-210*c_100*p2.z-150*c_97*p3.y*p2.z-100*c_17*c_14*p2.z+c_211-30*
        p2.y*c_98*p2.z-10*c_101*p2.z+80*c_17*c_19*p2.z+48*c_13*p3.y*c_19*p2.z+c_153+8*c_18*c_19*p2.z+240*c_17*p1.z*c_20+120*c_13*
        p3.y*p1.z*c_20+48*p2.y*c_14*p1.z*c_20+12*c_18*p1.z*c_20+560*c_17*c_21+240*c_13*p3.y*c_21+80*p2.y*c_14*c_21+c_212-30*
        c_100*p3.z-50*c_97*p3.y*p3.z+c_213-60*c_13*c_18*p3.z-50*p2.y*c_98*p3.z+c_214+16*c_17*c_19*p3.z+c_156+24*p2.y*c_14*c_19*
        p3.z+16*c_18*c_19*p3.z+80*c_17*p1.z*p2.z*p3.z+96*c_13*p3.y*p1.z*p2.z*p3.z+72*p2.y*c_14*p1.z*p2.z*p3.z+c_215+240*c_17*
        c_20*p3.z+240*c_13*p3.y*c_20*p3.z+c_216+48*c_18*c_20*p3.z+16*c_17*p1.z*c_22+36*c_13*p3.y*p1.z*c_22+c_217+40*c_18*p1.z*
        c_22+80*c_17*p2.z*c_22+c_218+144*p2.y*c_14*p2.z*c_22+80*c_18*p2.z*c_22+c_219+48*c_13*p3.y*c_23+80*p2.y*c_14*c_23+c_220-5*
        c_99*c_7-5*c_96*c_221+3*c_159*(p1.y*c_136+2*p2.y*c_203+5*p3.y*c_208)+c_16*(-15*c_13*c_48-10*p2.y*p3.y*c_27-5*c_14*c_29+4*
        c_227)+c_12*(-20*c_17*c_61-15*c_13*p3.y*c_50-5*c_18*c_92+4*p3.y*c_202+p2.y*(-30*c_14*c_57+8*c_233))+p1.y*(-25*c_97*c_55-20*c_17*
        p3.y*c_36-5*c_98*c_136+4*c_14*c_192+p2.y*(-10*c_18*c_37+8*p3.y*c_183)+3*c_13*(-5*c_14*c_51+4*c_242))+c_34*(c_16*c_29+4*c_17*
        c_52+9*c_13*p3.y*c_54+3*c_12*(c_243+c_244)+p1.y*(3*c_13*c_51+6*p2.y*p3.y*c_37+6*c_14*c_136-4*c_192)+2*p3.y*(c_245-6*c_254)+4*
        p2.y*(3*c_14*c_203-2*(c_15+3*c_19*c_8+p1.z*(c_230+9*p2.z*p3.z+c_195)+2*(5*c_21+c_184+c_176+c_251)))))))/double(967680);
}

double trig::s64() const{
    double p12_2=p1.z*p1.z;
    double p22_2=p2.z*p2.z;
    double p32_2=p3.z*p3.z;
    double p30_2=p3.x*p3.x;
    double p30_3=p3.x*p30_2;
    double p30_4=p3.x*p30_3;
    double p20_2=p2.x*p2.x;
    double p20_3=p2.x*p20_2;
    double p20_4=p2.x*p20_3;
    double p20_5=p2.x*p20_4;
    double p20_6=p2.x*p20_5;
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p21_4=p2.y*p21_3;
    double p21_5=p2.y*p21_4;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p31_4=p3.y*p31_3;
    double p31_5=p3.y*p31_4;
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p11_4=p1.y*p11_3;
    double p11_5=p1.y*p11_4;
    double p10_2=p1.x*p1.x;
    double p10_3=p1.x*p10_2;
    double p10_4=p1.x*p10_3;
    double p10_5=p1.x*p10_4;
    double p10_6=p1.x*p10_5;
    double c_0=6*p1.y;
    double c_1=2*p3.y;
    double c_2=5*p1.y;
    double c_3=p12_2;
    double c_4=p22_2;
    double c_5=p32_2;
    double c_6=p30_2;
    double c_7=p2.y+p3.y;
    double c_8=10*c_4;
    double c_9=3*c_5;
    double c_10=3*p3.y;
    double c_11=5*p3.y*p1.z*p2.z;
    double c_12=5*p2.y*p1.z*p3.z;
    double c_13=3*p3.y*c_5;
    double c_14=3*c_3;
    double c_15=15*c_4;
    double c_16=p20_2;
    double c_17=3*p2.y;
    double c_18=p21_3;
    double c_19=p21_2;
    double c_20=p31_2;
    double c_21=p31_3;
    double c_22=4*p1.z*p2.z;
    double c_23=3*p1.z*p3.z;
    double c_24=12*p2.z*p3.z;
    double c_25=6*c_5;
    double c_26=c_3+c_22+c_8+c_23+c_24+c_25;
    double c_27=6*c_4;
    double c_28=4*p1.z*p3.z;
    double c_29=3*p2.z*p3.z;
    double c_30=-c_20;
    double c_31=6*c_3;
    double c_32=p21_4;
    double c_33=p2.z+p3.z;
    double c_34=8*p2.z*p3.z;
    double c_35=2*p2.z;
    double c_36=c_35+p3.z;
    double c_37=4*p1.z*c_36;
    double c_38=5*p2.z*p3.z;
    double c_39=5*p2.z;
    double c_40=c_39+p3.z;
    double c_41=2*p1.z*c_40;
    double c_42=p11_5;
    double c_43=-c_42;
    double c_44=p11_4;
    double c_45=p30_4;
    double c_46=2*p2.y;
    double c_47=p11_3;
    double c_48=10*c_3;
    double c_49=4*p2.z*p3.z;
    double c_50=p11_2;
    double c_51=2*c_5;
    double c_52=p21_5;
    double c_53=p31_4;
    double c_54=p31_5;
    double c_55=5*p1.z*p2.z;
    double c_56=2*p1.z*p3.z;
    double c_57=10*p2.z*p3.z;
    double c_58=3*p1.z*p2.z;
    double c_59=10*c_5;
    double c_60=c_3+c_58+c_27+c_28+c_24+c_59;
    double c_61=2*p1.z*p2.z;
    double c_62=3*c_4;
    double c_63=5*p1.z*p3.z;
    double c_64=15*c_5;
    double c_65=c_3+c_61+c_62+c_63+c_57+c_64;
    double c_66=-2*c_20;
    double c_67=9*p2.z*p3.z;
    double c_68=6*p1.z*c_33;
    double c_69=-3*c_20;
    double c_70=2*p3.z;
    double c_71=p2.z+c_70;
    double c_72=4*p1.z*c_71;
    double c_73=c_14+c_62+c_34+c_59+c_72;
    double c_74=p20_3;
    double c_75=4*p1.y;
    double c_76=2*p2.z*p3.z;
    double c_77=8*p3.y*p1.z*p2.z;
    double c_78=3*p2.y*c_4;
    double c_79=8*p2.y*p1.z*p3.z;
    double c_80=15*c_3;
    double c_81=12*p2.y*c_20*p1.z*p2.z;
    double c_82=12*c_19*p3.y*p1.z*p3.z;
    double c_83=-(3*p2.y*p3.y);
    double c_84=6*p2.z*p3.z;
    double c_85=6*p1.z*p3.z;
    double c_86=2*c_4;
    double c_87=2*p1.z*c_33;
    double c_88=5*p3.z;
    double c_89=p2.z+c_88;
    double c_90=2*p1.z*c_89;
    double c_91=c_14+c_4+c_38+c_64+c_90;
    double c_92=p20_4;
    double c_93=5*p2.y;
    double c_94=3*p1.y;
    double c_95=4*p2.y;
    double c_96=5*p3.y;
    double c_97=2*p3.y*c_4;
    double c_98=2*p3.y*p1.z*p3.z;
    double c_99=4*p2.y*p2.z*p3.z;
    double c_100=2*p3.y*p2.z*p3.z;
    double c_101=p2.y*c_5;
    double c_102=2*c_3;
    double c_103=c_102+c_61+c_4+c_23+c_76+c_51;
    double c_104=4*p3.z;
    double c_105=p2.z+c_104;
    double c_106=3*p1.z*c_105;
    double c_107=c_31+c_4+c_49+c_59+c_106;
    double c_108=4*p3.y;
    double c_109=p20_5;
    double c_110=6*p2.y;
    double c_111=2*p1.y;
    double c_112=4*p2.z;
    double c_113=c_112+p3.z;
    double c_114=3*p1.z*c_113;
    double c_115=c_102+c_58+c_86+c_56+c_76+c_5;
    double c_116=c_3+c_86+c_29+c_51+c_87;
    double c_117=c_14+c_8+c_34+c_9+c_37;
    double c_118=-(5*c_32*p3.y);
    double c_119=-c_54;
    double c_120=6*p2.y*c_20*c_3;
    double c_121=10*c_21*c_5;
    double c_122=-(2*p2.z*p3.z);
    double c_123=-c_5;
    double c_124=-(3*c_19*p3.y);
    double c_125=8*p1.z*c_33;
    double c_126=3*p2.z;
    double c_127=c_126+p3.z;
    double c_128=4*p1.z*c_127;
    double c_129=-5*c_32;
    double c_130=6*p1.z*p2.z;
    double c_131=9*p1.z*p3.z;
    double c_132=c_30+c_31+c_8+c_49+c_5+c_114;
    double c_133=-6*c_42;
    double c_134=-c_52;
    double c_135=-(5*p2.y*c_53);
    double c_136=6*p3.y;
    double c_137=6*c_19*p3.y*c_3;
    double c_138=10*c_18*c_4;
    double c_139=2*p2.y*p3.y;
    double c_140=-(15*c_3);
    double c_141=-c_18;
    double c_142=3*p3.z;
    double c_143=p2.z+c_142;
    double c_144=4*p1.z*c_143;
    double c_145=-c_32;
    double c_146=-(5*c_53);
    double c_147=9*p1.z*p2.z;
    return ((p3.y*(p1.z-p2.z)+p1.y*(p2.z-p3.z)+p2.y*(-p1.z+p3.z))*(-(p10_6*(7*p1.y+p2.y+p3.y))-p20_6*(p1.y+7*
        p2.y+p3.y)-c_109*p3.x*(p1.y+c_110+c_1)-p10_5*(p2.x*(c_0+c_46+p3.y)+p3.x*(c_0+p2.y+c_1))+p10_4*(-(c_16*(c_2+c_17+p3.y))-c_6*
        (c_2+p2.y+c_10)-p2.x*p3.x*(c_2+2*c_7)+105*p1.y*c_3+15*p2.y*c_3+15*p3.y*c_3+30*p1.y*p1.z*p2.z+10*p2.y*p1.z*p2.z+c_11+5*
        p1.y*c_4+c_78+p3.y*c_4+30*p1.y*p1.z*p3.z+c_12+10*p3.y*p1.z*p3.z+5*p1.y*p2.z*p3.z+2*p2.y*p2.z*p3.z+c_100+5*p1.y*
        c_5+c_101+c_13)+c_74*p3.x*(-(c_6*(p1.y+4*c_7))+4*p2.y*(c_3+c_55+c_15+c_56+c_57+c_9)+2*p3.y*c_26+p1.y*c_117)+c_92*(-(c_6*
        (p1.y+c_93+c_10))+5*p2.y*c_3+p3.y*c_3+30*p2.y*p1.z*p2.z+c_11+105*p2.y*c_4+15*p3.y*c_4+c_12+c_98+30*p2.y*p2.z*p3.z+10*
        p3.y*p2.z*p3.z+5*p2.y*c_5+c_13+p1.y*(c_14+c_15+c_38+c_5+c_41))-c_16*(c_43-21*c_52-15*c_32*p3.y-10*c_18*c_20-6*c_19*c_21-3*
        p2.y*c_53+c_119-c_44*(c_17+p3.y)+c_45*(p1.y+c_17+c_96)+10*c_18*c_3+c_137+3*p2.y*c_20*c_3+c_21*c_3+60*c_18*p1.z*p2.z+30*c_19*
        p3.y*p1.z*p2.z+c_81+3*c_21*p1.z*p2.z+210*c_18*c_4+90*c_19*p3.y*c_4+30*p2.y*c_20*c_4+6*c_21*c_4+10*c_18*p1.z*p3.z+c_82+9*
        p2.y*c_20*p1.z*p3.z+4*c_21*p1.z*p3.z+60*c_18*p2.z*p3.z+60*c_19*p3.y*p2.z*p3.z+36*p2.y*c_20*p2.z*p3.z+12*c_21*
        p2.z*p3.z+10*c_18*c_5+18*c_19*p3.y*c_5+18*p2.y*c_20*c_5+c_121+c_47*(-6*c_19+c_83+c_30+c_48+12*p1.z*p2.z+c_27+c_28+c_29+c_5)-3*
        c_6*(p2.y*c_26+p3.y*c_60+p1.y*c_116)+c_50*(-10*c_18-6*c_19*p3.y+p3.y*(c_30+c_31+c_147+c_27+c_85+c_84+c_9)+3*p2.y*
        c_132)+p1.y*(-15*c_32-10*c_18*p3.y+c_20*(c_30+c_14+c_27+c_67+c_25+c_68)+3*p2.y*p3.y*(c_30+c_14+c_8+c_34+c_9+c_37)+6*c_19*
        (c_30+c_14+c_15+c_38+c_5+c_41)))-p2.x*p3.x*(c_43-2*c_44*c_7+c_45*(p1.y+c_46+c_136)+c_47*(-3*c_19-4*p2.y*p3.y-3*c_20+c_48+8*p1.z*
        p2.z+c_62+8*p1.z*p3.z+c_49+c_9)-2*c_50*(2*c_18+3*c_19*p3.y+2*c_21+3*p2.y*(c_20-2*c_3-3*p1.z*p2.z-2*c_4-2*p1.z*
        p3.z+c_122+c_123)-3*p3.y*c_103)+2*(-3*c_52+c_118+c_135-3*c_54+2*c_18*(c_69+c_3+c_55+c_15+c_56+c_57+c_9)+3*c_19*p3.y*
        (c_66+c_3+c_22+c_8+c_23+c_24+c_25)+3*p2.y*c_20*c_60+2*c_21*c_65)-c_6*(2*p2.y*c_60+4*p3.y*c_65+p1.y*c_73)+p1.y*(c_129-8*c_18*p3.y+c_146+4*
        p2.y*p3.y*(c_66+c_14+c_27+c_67+c_25+c_68)+3*c_19*(c_69+c_14+c_8+c_34+c_9+c_37)+3*c_20*c_73))+p10_3*(-(c_74*(c_75+c_95+p3.y))-c_16*
        p3.x*(c_75+c_17+c_1)+p2.x*(-(c_6*(c_75+c_46+c_10))+20*p2.y*c_3+10*p3.y*c_3+24*p2.y*p1.z*p2.z+c_77+12*p2.y*c_4+3*
        p3.y*c_4+c_79+8*p3.y*p1.z*p3.z+6*p2.y*p2.z*p3.z+4*p3.y*p2.z*p3.z+2*p2.y*c_5+c_13+4*p1.y*(c_80+c_62+c_76+c_5+5*p1.z*
        c_36))+p3.x*(-(c_6*(c_75+p2.y+c_108))+10*p2.y*c_3+20*p3.y*c_3+8*p2.y*p1.z*p2.z+c_77+c_78+c_97+c_79+24*p3.y*p1.z*
        p3.z+c_99+6*p3.y*p2.z*p3.z+3*p2.y*c_5+12*p3.y*c_5+4*p1.y*(c_80+c_4+c_76+c_9+5*p1.z*c_71)))-c_6*(c_43+c_134-3*c_32*p3.y-6*c_18*
        c_20-10*c_19*c_21-15*p2.y*c_53-21*c_54-c_44*(p2.y+c_10)+c_45*(p1.y+p2.y+7*p3.y)+c_18*c_3+3*c_19*p3.y*c_3+c_120+10*c_21*
        c_3+4*c_18*p1.z*p2.z+9*c_19*p3.y*p1.z*p2.z+c_81+10*c_21*p1.z*p2.z+c_138+18*c_19*p3.y*c_4+18*p2.y*c_20*c_4+10*c_21*c_4+3*
        c_18*p1.z*p3.z+c_82+30*p2.y*c_20*p1.z*p3.z+60*c_21*p1.z*p3.z+12*c_18*p2.z*p3.z+36*c_19*p3.y*p2.z*p3.z+60*p2.y*
        c_20*p2.z*p3.z+60*c_21*p2.z*p3.z+6*c_18*c_5+30*c_19*p3.y*c_5+90*p2.y*c_20*c_5+210*c_21*c_5+c_47*(-c_19+c_83-6*c_20+c_48+c_22+c_4+12*
        p1.z*p3.z+c_29+c_25)+c_50*(c_141+c_124-10*c_21+p2.y*(-6*c_20+c_31+c_130+c_62+c_131+c_84+c_25)+3*p3.y*c_107)-c_6*
        (p2.y*c_65+5*p3.y*(c_3+p1.z*p2.z+c_4+c_85+c_84+21*c_5)+p1.y*c_91)+p1.y*(c_145-3*c_18*p3.y-15*c_53+3*c_19*
        (c_66+c_3+c_86+c_29+c_51+c_87)+p2.y*p3.y*(-10*c_20+9*c_3+9*c_4+24*p2.z*p3.z+30*c_5+12*p1.z*c_71)+6*c_20*c_91))+p10_2*(21*c_42+15*c_44*p2.y+10*
        c_47*c_19+6*c_50*c_18+3*p1.y*c_32+c_52+15*c_44*p3.y+10*c_47*p2.y*p3.y+6*c_50*c_19*p3.y+3*p1.y*c_18*p3.y+c_32*p3.y+10*
        c_47*c_20+6*c_50*p2.y*c_20+3*p1.y*c_19*c_20+c_18*c_20+6*c_50*c_21+3*p1.y*p2.y*c_21+c_19*c_21+3*p1.y*c_53+p2.y*c_53+c_54-c_92*
        (c_94+c_93+p3.y)-c_74*p3.x*(c_94+c_95+c_1)-c_45*(c_94+p2.y+c_96)-210*c_47*c_3-90*c_50*p2.y*c_3-30*p1.y*c_19*c_3-6*
        c_18*c_3-90*c_50*p3.y*c_3-30*p1.y*p2.y*p3.y*c_3-6*c_19*p3.y*c_3-30*p1.y*c_20*c_3-6*p2.y*c_20*c_3-6*c_21*c_3-60*c_47*p1.z*
        p2.z-60*c_50*p2.y*p1.z*p2.z-36*p1.y*c_19*p1.z*p2.z-12*c_18*p1.z*p2.z-30*c_50*p3.y*p1.z*p2.z-24*p1.y*p2.y*p3.y*
        p1.z*p2.z-9*c_19*p3.y*p1.z*p2.z-12*p1.y*c_20*p1.z*p2.z-6*p2.y*c_20*p1.z*p2.z-3*c_21*p1.z*p2.z-10*c_47*c_4-18*c_50*
        p2.y*c_4-18*p1.y*c_19*c_4-10*c_18*c_4-6*c_50*p3.y*c_4-9*p1.y*p2.y*p3.y*c_4-6*c_19*p3.y*c_4-3*p1.y*c_20*c_4-3*p2.y*c_20*
        c_4-c_21*c_4-60*c_47*p1.z*p3.z-30*c_50*p2.y*p1.z*p3.z-12*p1.y*c_19*p1.z*p3.z-3*c_18*p1.z*p3.z-60*c_50*p3.y*p1.z*
        p3.z-24*p1.y*p2.y*p3.y*p1.z*p3.z-6*c_19*p3.y*p1.z*p3.z-36*p1.y*c_20*p1.z*p3.z-9*p2.y*c_20*p1.z*p3.z-12*c_21*p1.z*
        p3.z-10*c_47*p2.z*p3.z-12*c_50*p2.y*p2.z*p3.z-9*p1.y*c_19*p2.z*p3.z-4*c_18*p2.z*p3.z-12*c_50*p3.y*p2.z*p3.z-12*
        p1.y*p2.y*p3.y*p2.z*p3.z-6*c_19*p3.y*p2.z*p3.z-9*p1.y*c_20*p2.z*p3.z-6*p2.y*c_20*p2.z*p3.z-4*c_21*p2.z*p3.z-10*c_47*
        c_5-6*c_50*p2.y*c_5-3*p1.y*c_19*c_5-c_18*c_5-18*c_50*p3.y*c_5-9*p1.y*p2.y*p3.y*c_5-3*c_19*p3.y*c_5-18*p1.y*c_20*c_5-6*
        p2.y*c_20*c_5-10*c_21*c_5+3*c_16*(-(c_6*(p1.y+p2.y+p3.y))+6*p2.y*c_3+2*p3.y*c_3+12*p2.y*p1.z*p2.z+3*p3.y*p1.z*p2.z+10*
        p2.y*c_4+c_97+3*p2.y*p1.z*p3.z+c_98+c_99+c_100+c_101+p3.y*c_5+p1.y*(c_48+c_27+c_29+c_5+c_128))+3*c_6*(p2.y*c_103+p1.y*
        (c_48+c_4+c_29+c_25+c_144)+p3.y*c_107)+p2.x*p3.x*(-(c_6*(c_94+c_46+c_108))+3*p1.y*(c_48+c_62+c_49+c_9+c_125)+6*(p2.y*
        c_115+p3.y*c_103)))-p1.x*(c_109*(c_111+c_110+p3.y)+c_92*p3.x*(c_111+c_93+c_1)+c_74*(c_6*(c_111+c_95+c_10)-12*p2.y*c_3-3*p3.y*
        c_3-40*p2.y*p1.z*p2.z-8*p3.y*p1.z*p2.z-60*p2.y*c_4-10*p3.y*c_4-8*p2.y*p1.z*p3.z-4*p3.y*p1.z*p3.z-20*p2.y*p2.z*
        p3.z-8*p3.y*p2.z*p3.z-4*p2.y*c_5-3*p3.y*c_5-2*p1.y*(c_31+c_8+c_49+c_5+c_114))+c_16*p3.x*(c_6*(c_111+c_17+c_108)-3*(2*
        p1.y*c_115+2*p3.y*c_116+p2.y*c_117))+p2.x*(c_133-6*c_52+c_118-4*c_18*c_20-3*c_19*c_21-2*p2.y*c_53+c_119-5*c_44*(c_46+p3.y)+c_45*
        (c_111+c_46+c_96)+12*c_18*c_3+9*c_19*p3.y*c_3+c_120+3*c_21*c_3+40*c_18*p1.z*p2.z+24*c_19*p3.y*p1.z*p2.z+c_81+4*c_21*
        p1.z*p2.z+60*c_18*c_4+30*c_19*p3.y*c_4+12*p2.y*c_20*c_4+3*c_21*c_4+8*c_18*p1.z*p3.z+c_82+12*p2.y*c_20*p1.z*p3.z+8*c_21*
        p1.z*p3.z+20*c_18*p2.z*p3.z+24*c_19*p3.y*p2.z*p3.z+18*p2.y*c_20*p2.z*p3.z+8*c_21*p2.z*p3.z+4*c_18*c_5+9*c_19*
        p3.y*c_5+12*p2.y*c_20*c_5+c_121-4*c_47*(3*c_19+c_139+c_20+c_140-10*p1.z*p2.z-3*c_4-5*p1.z*p3.z+c_122+c_123)+3*c_50*(-4*
        c_18+c_124+p3.y*(c_30+c_48+c_62+c_49+c_9+c_125)+2*p2.y*(c_30+c_48+c_27+c_29+c_5+c_128))+2*p1.y*(c_129-4*c_18*p3.y-2*p2.y*c_21+6*
        p2.y*p3.y*c_115+c_20*(c_30+c_31+c_130+c_62+c_131+c_84+c_25)+3*c_19*c_132)-3*c_6*(2*p1.y*c_103+2*p2.y*c_116+p3.y*c_73))+p3.x*
        (c_133+c_134-2*c_32*p3.y-3*c_18*c_20-4*c_19*c_21+c_135-6*c_54-5*c_44*(p2.y+c_1)+c_45*(c_111+p2.y+c_136)+3*c_18*c_3+c_137+9*
        p2.y*c_20*c_3+12*c_21*c_3+8*c_18*p1.z*p2.z+12*c_19*p3.y*p1.z*p2.z+c_81+8*c_21*p1.z*p2.z+c_138+12*c_19*p3.y*c_4+9*
        p2.y*c_20*c_4+4*c_21*c_4+4*c_18*p1.z*p3.z+c_82+24*p2.y*c_20*p1.z*p3.z+40*c_21*p1.z*p3.z+8*c_18*p2.z*p3.z+18*c_19*p3.y*
        p2.z*p3.z+24*p2.y*c_20*p2.z*p3.z+20*c_21*p2.z*p3.z+3*c_18*c_5+12*c_19*p3.y*c_5+30*p2.y*c_20*c_5+60*c_21*c_5-4*c_47*
        (c_19+c_139+3*c_20+c_140-5*p1.z*p2.z-c_4-10*p1.z*p3.z+c_122-3*c_5)+3*c_50*(c_141-2*c_19*p3.y+p2.y*(c_69+c_48+c_62+c_49+c_9+c_125)+2*
        p3.y*(c_66+c_48+c_4+c_29+c_25+c_144))+2*p1.y*(c_145-2*c_18*p3.y+c_146+c_19*(c_69+c_31+c_147+c_27+c_85+c_84+c_9)+2*
        p2.y*p3.y*(c_66+c_31+c_130+c_62+c_131+c_84+c_25)+3*c_20*c_107)-c_6*(p2.y*c_73+2*p1.y*c_107+4*p3.y*c_91)))))/double(1451520);
}

double trig::s65() const{
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p11_4=p1.y*p11_3;
    double p11_5=p1.y*p11_4;
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p21_4=p2.y*p21_3;
    double p21_5=p2.y*p21_4;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p31_4=p3.y*p31_3;
    double p31_5=p3.y*p31_4;
    double p20_2=p2.x*p2.x;
    double p20_3=p2.x*p20_2;
    double p20_4=p2.x*p20_3;
    double p20_5=p2.x*p20_4;
    double p30_2=p3.x*p3.x;
    double p30_3=p3.x*p30_2;
    double p30_4=p3.x*p30_3;
    double p10_2=p1.x*p1.x;
    double p10_3=p1.x*p10_2;
    double p10_4=p1.x*p10_3;
    double p10_5=p1.x*p10_4;
    double c_0=6*p1.z;
    double c_1=6*p2.z;
    double c_2=2*p3.z;
    double c_3=2*p1.z;
    double c_4=p1.z+c_1+c_2;
    double c_5=5*p2.z;
    double c_6=2*p2.z;
    double c_7=c_0+c_6+p3.z;
    double c_8=p2.z+p3.z;
    double c_9=c_0+p2.z+c_2;
    double c_10=5*p1.z;
    double c_11=3*p3.z;
    double c_12=p11_2;
    double c_13=p21_2;
    double c_14=p31_2;
    double c_15=p11_3;
    double c_16=p21_3;
    double c_17=p31_3;
    double c_18=3*p2.z;
    double c_19=c_10+c_18+p3.z;
    double c_20=4*p1.z;
    double c_21=c_20+c_18+c_2;
    double c_22=c_10+p2.z+c_11;
    double c_23=c_20+c_6+c_11;
    double c_24=p20_2;
    double c_25=-(4*c_17*p1.z);
    double c_26=4*p2.z;
    double c_27=c_3+c_5+c_2;
    double c_28=4*p3.z;
    double c_29=p30_2;
    double c_30=c_3+c_18+c_28;
    double c_31=-(4*p2.y*c_14*p1.z);
    double c_32=-(60*c_13*p3.y*p2.z);
    double c_33=-(20*c_16*p3.z);
    double c_34=-(4*c_17*p3.z);
    double c_35=c_20+c_26+p3.z;
    double c_36=3*p1.z;
    double c_37=c_36+c_26+c_2;
    double c_38=c_3+c_1+p3.z;
    double c_39=c_3+c_26+c_11;
    double c_40=p1.z+c_5+c_11;
    double c_41=4*c_8;
    double c_42=p1.z+c_41;
    double c_43=p1.z+p2.z+p3.z;
    double c_44=2*p3.y*c_43;
    double c_45=p2.y*c_37;
    double c_46=p20_3;
    double c_47=c_36+c_5+p3.z;
    double c_48=4*p2.y*c_47;
    double c_49=p3.y*c_37;
    double c_50=5*p3.y*p1.z;
    double c_51=2*p3.y*c_8;
    double c_52=2*p2.y*c_19;
    double c_53=-(9*p2.y*c_14*p1.z);
    double c_54=-(4*c_16*p2.z);
    double c_55=-(6*p2.y*c_14*p2.z);
    double c_56=-(4*c_17*p2.z);
    double c_57=-(6*c_13*p3.y*p3.z);
    double c_58=-(12*p2.y*c_14*p3.z);
    double c_59=-(20*c_17*p3.z);
    double c_60=5*p2.y*p1.z;
    double c_61=2*p2.y*c_8;
    double c_62=2*p3.y*c_22;
    double c_63=c_20+p2.z+c_28;
    double c_64=c_36+c_6+c_28;
    double c_65=5*p3.z;
    double c_66=p11_4;
    double c_67=p21_4;
    double c_68=p31_4;
    double c_69=p11_5;
    double c_70=p21_5;
    double c_71=p31_5;
    double c_72=p20_4;
    double c_73=c_36+p2.z+c_65;
    double c_74=-20*c_16*p1.z;
    double c_75=-(12*c_13*p3.y*p1.z);
    double c_76=-(6*p2.y*c_14*p1.z);
    double c_77=-(60*c_16*p2.z);
    double c_78=3*p2.y*c_35;
    double c_79=p3.y*c_21;
    double c_80=-(6*c_13*p3.y*p1.z);
    double c_81=-(12*c_13*p3.y*p2.z);
    double c_82=-(4*c_16*p3.z);
    double c_83=p2.y*c_21;
    double c_84=p3.y*c_23;
    double c_85=2*p2.y*p1.z;
    double c_86=c_3+c_6+c_65;
    double c_87=6*p3.z;
    double c_88=c_3+p2.z+c_87;
    double c_89=p2.y*c_23;
    double c_90=3*p3.y*c_63;
    double c_91=2*p2.y*c_68*p1.z;
    double c_92=6*c_71*p3.z;
    double c_93=c_50+c_51+c_52;
    double c_94=3*c_13*c_35;
    double c_95=2*p2.y*p3.y*c_21;
    double c_96=c_14*c_23;
    double c_97=c_94+c_95+c_96;
    double c_98=p30_4;
    double c_99=p1.z+c_18+c_65;
    double c_100=p1.z+c_6+c_87;
    double c_101=2*p2.y*c_43;
    double c_102=p3.y*c_64;
    double c_103=2*c_67*p3.y*p1.z;
    double c_104=6*c_70*p2.z;
    double c_105=12*c_13*c_17*p2.z;
    double c_106=12*c_16*c_14*p3.z;
    double c_107=c_60+c_61+c_62;
    double c_108=c_13*c_21;
    double c_109=2*p2.y*p3.y*c_23;
    double c_110=3*c_14*c_63;
    double c_111=c_108+c_109+c_110;
    double c_112=7*p3.z;
    double c_113=p1.z+p2.z+c_112;
    double c_114=p2.y*c_64;
    double c_115=4*p3.y*c_73;
    return ((p3.y*(p1.z-p2.z)+p1.y*(p2.z-p3.z)+p2.y*(-p1.z+p3.z))*(p10_5*(6*p1.y*(7*p1.z+p2.z+p3.z)+p2.y*c_7+p3.y*
        c_9)+p20_5*(p1.y*c_38+6*p2.y*(p1.z+7*p2.z+p3.z)+p3.y*c_4)+c_72*p3.x*(p1.y*c_27+5*p2.y*c_4+2*p3.y*c_40)+p10_4*(p2.x*
        (c_50+c_51+5*p1.y*c_7+c_52)+p3.x*(c_60+c_61+5*p1.y*c_9+c_62))+p10_3*(-140*c_15*p1.z-60*c_12*p2.y*p1.z-20*p1.y*c_13*p1.z-4*
        c_16*p1.z-60*c_12*p3.y*p1.z-20*p1.y*p2.y*p3.y*p1.z-4*c_13*p3.y*p1.z-20*p1.y*c_14*p1.z+c_31+c_25-20*c_15*p2.z-20*c_12*
        p2.y*p2.z-12*p1.y*c_13*p2.z+c_54-10*c_12*p3.y*p2.z-8*p1.y*p2.y*p3.y*p2.z-3*c_13*p3.y*p2.z-4*p1.y*c_14*p2.z-2*
        p2.y*c_14*p2.z-c_17*p2.z-20*c_15*p3.z-10*c_12*p2.y*p3.z-4*p1.y*c_13*p3.z-c_16*p3.z-20*c_12*p3.y*p3.z-8*p1.y*p2.y*
        p3.y*p3.z-2*c_13*p3.y*p3.z-12*p1.y*c_14*p3.z-3*p2.y*c_14*p3.z+c_34+c_24*(4*p1.y*c_19+c_78+c_79)+2*p2.x*p3.x*(10*p1.y*
        p1.z+4*p1.y*c_8+c_83+c_84)+c_29*(4*p1.y*c_22+c_89+c_90))+c_24*p3.x*(-10*c_16*p1.z+c_75+c_53+c_25+c_77+c_32-36*p2.y*c_14*
        p2.z-12*c_17*p2.z+c_33-36*c_13*p3.y*p3.z-36*p2.y*c_14*p3.z+c_59-c_15*c_21-3*c_12*(c_44+c_45)-3*p1.y*(2*c_13*c_27+2*p2.y*
        p3.y*c_39+c_14*c_30)+c_29*(p1.y*c_30+4*p3.y*c_99+3*p2.y*c_42))+c_46*(c_74-10*c_13*p3.y*p1.z+c_31-c_17*p1.z-140*c_16*
        p2.z+c_32-20*p2.y*c_14*p2.z+c_56+c_33-20*c_13*p3.y*p3.z+c_58+c_34-c_15*c_35-c_12*(c_48+c_49)-p1.y*(10*c_13*c_38+4*p2.y*p3.y*
        c_27+c_14*c_39)+c_29*(p1.y*c_39+4*p2.y*c_40+3*p3.y*c_42))+p10_2*(3*c_24*p3.x*(c_44+p1.y*c_21+c_45)+c_46*(3*p1.y*
        c_35+c_48+c_49)+p2.x*(-12*c_16*p1.z-9*c_13*p3.y*p1.z+c_76-3*c_17*p1.z-20*c_16*p2.z+c_81+c_55-2*c_17*p2.z+c_82+c_57-6*p2.y*c_14*
        p3.z+c_34-10*c_15*c_7-6*c_12*c_93-3*p1.y*c_97+3*c_29*(c_101+p1.y*c_23+c_102))+p3.x*(-3*c_16*p1.z+c_80+c_53-12*c_17*p1.z+c_54-6*
        c_13*p3.y*p2.z+c_55+c_56-2*c_16*p3.z+c_57+c_58+c_59-10*c_15*c_9-6*c_12*c_107-3*p1.y*c_111+c_29*(3*p1.y*c_63+c_114+c_115)))+p1.x*
        (42*c_69*p1.z+30*c_66*p2.y*p1.z+20*c_15*c_13*p1.z+12*c_12*c_16*p1.z+6*p1.y*c_67*p1.z+2*c_70*p1.z+30*c_66*
        p3.y*p1.z+20*c_15*p2.y*p3.y*p1.z+12*c_12*c_13*p3.y*p1.z+6*p1.y*c_16*p3.y*p1.z+c_103+20*c_15*c_14*p1.z+12*c_12*p2.y*c_14*
        p1.z+6*p1.y*c_13*c_14*p1.z+2*c_16*c_14*p1.z+12*c_12*c_17*p1.z+6*p1.y*p2.y*c_17*p1.z+2*c_13*c_17*p1.z+6*p1.y*c_68*
        p1.z+c_91+2*c_71*p1.z+6*c_69*p2.z+10*c_66*p2.y*p2.z+12*c_15*c_13*p2.z+12*c_12*c_16*p2.z+10*p1.y*c_67*p2.z+c_104+5*c_66*
        p3.y*p2.z+8*c_15*p2.y*p3.y*p2.z+9*c_12*c_13*p3.y*p2.z+8*p1.y*c_16*p3.y*p2.z+5*c_67*p3.y*p2.z+4*c_15*c_14*p2.z+6*c_12*
        p2.y*c_14*p2.z+6*p1.y*c_13*c_14*p2.z+4*c_16*c_14*p2.z+3*c_12*c_17*p2.z+4*p1.y*p2.y*c_17*p2.z+3*c_13*c_17*p2.z+2*
        p1.y*c_68*p2.z+2*p2.y*c_68*p2.z+c_71*p2.z+6*c_69*p3.z+5*c_66*p2.y*p3.z+4*c_15*c_13*p3.z+3*c_12*c_16*p3.z+2*p1.y*c_67*
        p3.z+c_70*p3.z+10*c_66*p3.y*p3.z+8*c_15*p2.y*p3.y*p3.z+6*c_12*c_13*p3.y*p3.z+4*p1.y*c_16*p3.y*p3.z+2*c_67*p3.y*p3.z+12*
        c_15*c_14*p3.z+9*c_12*p2.y*c_14*p3.z+6*p1.y*c_13*c_14*p3.z+3*c_16*c_14*p3.z+12*c_12*c_17*p3.z+8*p1.y*p2.y*c_17*
        p3.z+4*c_13*c_17*p3.z+10*p1.y*c_68*p3.z+5*p2.y*c_68*p3.z+c_92+c_72*(2*p1.y*c_47+5*p2.y*c_38+p3.y*c_27)+2*c_46*p3.x*(p1.y*
        c_37+2*p2.y*c_27+p3.y*c_39)+c_98*(2*p1.y*c_73+p2.y*c_86+5*p3.y*c_88)+c_24*(c_74+c_75+c_76-2*c_17*p1.z+c_77-30*c_13*p3.y*
        p2.z-12*p2.y*c_14*p2.z-3*c_17*p2.z-10*c_16*p3.z-12*c_13*p3.y*p3.z-9*p2.y*c_14*p3.z+c_34-4*c_15*c_19+3*c_29*(c_85+2*
        p3.y*p1.z+4*p2.y*p2.z+3*p3.y*p2.z+3*p2.y*p3.z+4*p3.y*p3.z+2*p1.y*c_43)-3*c_12*(c_78+c_79)-6*p1.y*(c_14*c_43+2*c_13*
        c_47+p2.y*p3.y*c_37))+2*p2.x*p3.x*(-4*c_16*p1.z+c_80+c_76+c_25-10*c_16*p2.z+c_81-9*p2.y*c_14*p2.z+c_56+c_82-9*c_13*p3.y*
        p3.z+c_58-10*c_17*p3.z-2*c_15*(c_10+2*c_8)-3*c_12*(c_83+c_84)+c_29*(c_85+4*p3.y*p1.z+3*p2.y*p2.z+4*p3.y*p2.z+4*p2.y*
        p3.z+10*p3.y*p3.z+p1.y*c_64)-3*p1.y*(4*p2.y*p3.y*c_43+c_13*c_37+c_14*c_64))-c_29*(4*c_15*c_22+c_16*c_39+3*c_13*p3.y*c_30+6*
        p2.y*c_14*c_86+10*c_17*c_88+3*c_12*(c_89+c_90)+6*p1.y*(c_13*c_43+p2.y*p3.y*c_64+2*c_14*c_73)))+p2.x*(6*c_70*p1.z+5*c_67*
        p3.y*p1.z+4*c_16*c_14*p1.z+3*c_13*c_17*p1.z+c_91+c_71*p1.z+42*c_70*p2.z+30*c_67*p3.y*p2.z+20*c_16*c_14*p2.z+c_105+6*
        p2.y*c_68*p2.z+2*c_71*p2.z+6*c_70*p3.z+10*c_67*p3.y*p3.z+c_106+12*c_13*c_17*p3.z+10*p2.y*c_68*p3.z+c_92+c_69*c_7+c_66*
        c_93+c_15*c_97+c_12*(6*p2.y*c_14*c_43+4*c_16*c_47+3*c_13*p3.y*c_37+c_17*c_64)+p1.y*(5*c_67*c_38+4*c_16*p3.y*c_27+3*c_13*c_14*
        c_39+2*p2.y*c_17*c_30+c_68*c_86)+c_98*(p1.y*c_86+2*p2.y*c_99+5*p3.y*c_100)-c_29*(c_15*c_23+4*c_16*c_40+12*p2.y*c_14*c_99+10*
        c_17*c_100+9*c_13*p3.y*c_42+3*c_12*(c_101+c_102)+3*p1.y*(c_13*c_39+2*p2.y*p3.y*c_30+2*c_14*c_86)))+p3.x*(c_70*p1.z+c_103+3*
        c_16*c_14*p1.z+4*c_13*c_17*p1.z+5*p2.y*c_68*p1.z+6*c_71*p1.z+c_104+10*c_67*p3.y*p2.z+12*c_16*c_14*p2.z+c_105+10*
        p2.y*c_68*p2.z+6*c_71*p2.z+2*c_70*p3.z+6*c_67*p3.y*p3.z+c_106+20*c_13*c_17*p3.z+30*p2.y*c_68*p3.z+42*c_71*p3.z+c_69*
        c_9+c_66*c_107+c_15*c_111+c_12*(6*c_13*p3.y*c_43+c_16*c_37+3*p2.y*c_14*c_64+4*c_17*c_73)+p1.y*(c_67*c_27+2*c_16*p3.y*c_39+3*c_13*
        c_14*c_30+4*p2.y*c_17*c_86+5*c_68*c_88)+c_98*(p1.y*c_88+p2.y*c_100+6*p3.y*c_113)-c_29*(c_15*c_63+4*c_13*p3.y*c_99+10*
        p2.y*c_14*c_100+20*c_17*c_113+c_16*c_42+c_12*(c_114+c_115)+p1.y*(c_13*c_30+4*p2.y*p3.y*c_86+10*c_14*c_88)))))/double(5806080);
}

double trig::s66() const{
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p21_4=p2.y*p21_3;
    double p21_5=p2.y*p21_4;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p31_4=p3.y*p31_3;
    double p31_5=p3.y*p31_4;
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p11_4=p1.y*p11_3;
    double p11_5=p1.y*p11_4;
    double p30_2=p3.x*p3.x;
    double p30_3=p3.x*p30_2;
    double p30_4=p3.x*p30_3;
    double p20_2=p2.x*p2.x;
    double p20_3=p2.x*p20_2;
    double p20_4=p2.x*p20_3;
    double p20_5=p2.x*p20_4;
    double p20_6=p2.x*p20_5;
    double p10_2=p1.x*p1.x;
    double p10_3=p1.x*p10_2;
    double p10_4=p1.x*p10_3;
    double p10_5=p1.x*p10_4;
    double p10_6=p1.x*p10_5;
    double c_0=6*p1.y;
    double c_1=2*p3.y;
    double c_2=5*p2.y;
    double c_3=p21_2;
    double c_4=p31_2;
    double c_5=p11_3;
    double c_6=p11_2;
    double c_7=p21_3;
    double c_8=p31_3;
    double c_9=p30_2;
    double c_10=5*p1.y;
    double c_11=3*p3.y;
    double c_12=2*p2.y;
    double c_13=p2.y+p3.y;
    double c_14=p20_3;
    double c_15=p20_2;
    double c_16=4*p1.y;
    double c_17=3*p2.y;
    double c_18=c_12+p3.y;
    double c_19=-c_7;
    double c_20=2*p2.y*p3.y;
    double c_21=3*c_4;
    double c_22=3*c_3*p3.y;
    double c_23=p21_4;
    double c_24=p31_4;
    double c_25=5*c_3*p3.y;
    double c_26=5*p2.y*p3.y;
    double c_27=p11_5;
    double c_28=p11_4;
    double c_29=p21_5;
    double c_30=p31_5;
    double c_31=p20_4;
    double c_32=3*p1.y;
    double c_33=4*p2.y;
    double c_34=p30_4;
    double c_35=5*p3.y;
    double c_36=-(3*p2.y*c_4);
    double c_37=-c_8;
    double c_38=3*p2.y*p3.y;
    double c_39=6*p2.y*c_4;
    double c_40=10*c_8;
    double c_41=p2.y+c_11;
    double c_42=6*c_4;
    double c_43=c_3+c_38+c_42;
    double c_44=-10*c_5;
    double c_45=4*p3.y;
    double c_46=3*c_3;
    double c_47=3*p2.y*c_4;
    double c_48=4*p2.y*p3.y;
    double c_49=c_46+c_48+c_21;
    double c_50=4*c_7;
    double c_51=6*c_7*c_4;
    double c_52=p2.y+c_1;
    double c_53=8*p2.y*p3.y;
    double c_54=5*p2.y*c_4;
    double c_55=6*c_3*c_8;
    double c_56=c_17+p3.y;
    double c_57=6*c_3;
    double c_58=c_57+c_38+c_4;
    double c_59=6*c_3*p3.y;
    double c_60=6*c_3*c_4;
    double c_61=5*c_7;
    double c_62=5*c_8;
    double c_63=p20_5;
    double c_64=6*p2.y;
    double c_65=2*p1.y;
    double c_66=-(10*c_7);
    double c_67=-(4*c_8);
    double c_68=10*c_3;
    double c_69=5*c_23*p3.y;
    double c_70=c_46+c_20+c_4;
    double c_71=2*p2.y*c_4;
    double c_72=5*c_23;
    double c_73=4*c_5;
    double c_74=9*c_3*p3.y;
    double c_75=6*c_27;
    double c_76=5*p2.y*c_24;
    double c_77=6*p3.y;
    double c_78=c_3+c_20+c_21;
    double c_79=4*c_8;
    double c_80=3*c_3*c_4;
    double c_81=5*c_24;
    double c_82=10*c_4;
    return ((p10_6*(7*p1.y+p2.y+p3.y)+p20_6*(p1.y+7*p2.y+p3.y)+c_63*p3.x*(p1.y+c_64+c_1)+p10_5*(p2.x*(c_0+c_12+p3.y)+p3.x*
        (c_0+p2.y+c_1))-c_31*(c_5+35*c_7+15*c_3*p3.y+c_54+c_8+c_6*(c_2+p3.y)-c_9*(p1.y+c_2+c_11)+p1.y*(15*c_3+c_26+c_4))+p10_4*
        (-35*c_5-15*c_6*p2.y-5*p1.y*c_3+c_19-15*c_6*p3.y-5*p1.y*p2.y*p3.y-c_3*p3.y-5*p1.y*c_4-p2.y*c_4+c_37+c_15*(c_10+c_17+p3.y)+c_9*
        (c_10+p2.y+c_11)+p2.x*p3.x*(c_10+2*c_13))+c_14*p3.x*(-c_5-2*c_6*c_18-p1.y*(c_68+c_53+c_21)-4*(c_61+c_25+c_47+c_8)+c_9*
        (p1.y+4*c_13))+p10_3*(c_14*(c_16+c_33+p3.y)+c_15*p3.x*(c_16+c_17+c_1)-p2.x*(20*c_5+c_50+c_22+c_71+c_8+10*c_6*c_18-c_9*
        (c_16+c_12+c_11)+4*p1.y*c_70)+p3.x*(-20*c_5+c_19-2*c_3*p3.y+c_36+c_67-10*c_6*c_52+c_9*(c_16+p2.y+c_45)-4*p1.y*c_78))+c_9*
        (c_27+c_29+3*c_23*p3.y+c_51+10*c_3*c_8+15*p2.y*c_24+21*c_30+c_28*c_41+c_34*(p1.y+p2.y+7*p3.y)+c_5*c_43+c_6*
        (c_7+c_22+c_39+c_40)+p1.y*(c_23+3*c_7*p3.y+c_60+10*p2.y*c_8+15*c_24)-c_9*(c_5+c_7+c_25+15*p2.y*c_4+35*c_8+c_6*(p2.y+c_35)+p1.y*
        (c_3+c_26+15*c_4)))+p10_2*(21*c_27+15*c_28*p2.y+10*c_5*c_3+6*c_6*c_7+3*p1.y*c_23+c_29+15*c_28*p3.y+10*c_5*p2.y*p3.y+6*c_6*c_3*
        p3.y+3*p1.y*c_7*p3.y+c_23*p3.y+10*c_5*c_4+6*c_6*p2.y*c_4+3*p1.y*c_3*c_4+c_7*c_4+6*c_6*c_8+3*p1.y*p2.y*c_8+c_3*c_8+3*
        p1.y*c_24+p2.y*c_24+c_30+c_31*(c_32+c_2+p3.y)+c_14*p3.x*(c_32+c_33+c_1)+c_34*(c_32+p2.y+c_35)+c_15*(c_44+c_66-6*c_3*
        p3.y+c_36+c_37+3*c_9*(p1.y+p2.y+p3.y)-6*c_6*c_56-3*p1.y*c_58)-c_9*(10*c_5+c_7+c_22+c_39+c_40+6*c_6*c_41+3*p1.y*c_43)+p2.x*p3.x*
        (c_44-12*c_6*c_13+c_9*(c_32+c_12+c_45)-3*p1.y*c_49-2*(2*c_7+c_22+c_47+2*c_8)))+p2.x*p3.x*(c_27+2*c_28*c_13+c_34*
        (p1.y+c_12+c_77)+c_5*c_49+c_6*(c_50+c_59+c_39+c_79)+p1.y*(c_72+8*c_7*p3.y+9*c_3*c_4+8*p2.y*c_8+c_81)+2*(3*c_29+c_69+c_51+c_55+c_76+3*
        c_30)-c_9*(c_5+2*c_6*c_52+p1.y*(c_46+c_53+c_82)+4*(c_7+c_22+c_54+c_62)))+c_15*(c_27+21*c_29+15*c_23*p3.y+10*c_7*c_4+c_55+3*
        p2.y*c_24+c_30+c_28*c_56+c_34*(p1.y+c_17+c_35)+c_5*c_58+c_6*(10*c_7+c_59+c_47+c_8)+p1.y*(15*c_23+10*c_7*p3.y+c_60+3*p2.y*
        c_8+c_24)-c_9*(c_5+3*c_6*c_13+p1.y*(c_57+9*p2.y*p3.y+c_42)+2*(c_61+c_74+9*p2.y*c_4+c_62)))+p1.x*(c_63*(c_65+c_64+p3.y)+c_31*
        p3.x*(c_65+c_2+c_1)+c_15*p3.x*(-4*c_5+c_66-12*c_3*p3.y-9*p2.y*c_4+c_67-3*c_6*(c_17+c_1)+c_9*(c_65+c_17+c_45)-6*p1.y*(2*
        c_3+c_20+c_4))-c_14*(c_73+20*c_7+10*c_3*p3.y+4*p2.y*c_4+c_8+3*c_6*(c_33+p3.y)-c_9*(c_65+c_33+c_11)+2*p1.y*(c_68+c_48+c_4))+p2.x*
        (c_75+6*c_29+c_69+4*c_7*c_4+3*c_3*c_8+2*p2.y*c_24+c_30+5*c_28*c_18+c_34*(c_65+c_12+c_35)+4*c_5*c_70+3*c_6*(c_50+c_22+c_71+c_8)+2*
        p1.y*(c_72+4*c_7*p3.y+c_80+2*p2.y*c_8+c_24)-c_9*(c_73+c_50+c_74+12*p2.y*c_4+c_40+c_6*(c_64+9*p3.y)+6*p1.y*
        (c_3+c_20+2*c_4)))+p3.x*(c_75+c_29+2*c_23*p3.y+3*c_7*c_4+4*c_3*c_8+c_76+6*c_30+5*c_28*c_52+c_34*(c_65+p2.y+c_77)+4*c_5*c_78+3*
        c_6*(c_7+2*c_3*p3.y+c_47+c_79)+2*p1.y*(c_23+2*c_7*p3.y+c_80+4*p2.y*c_8+c_81)-c_9*(c_73+c_7+4*c_3*p3.y+10*p2.y*c_4+20*c_8+3*
        c_6*(p2.y+c_45)+2*p1.y*(c_3+c_48+c_82)))))*(p3.y*(p1.z-p2.z)+p1.y*(p2.z-p3.z)+p2.y*(-p1.z+p3.z)))/double(11612160);
}

}