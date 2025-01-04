//Generated, Do Not Edit

#include"geopotential.h"

namespace geopotential{

double trig::m() const{
    return (-(p3.x*p2.y*p1.z)+p2.x*p3.y*p1.z+p3.x*p1.y*
        p2.z-p1.x*p3.y*p2.z-p2.x*p1.y*p3.z+p1.x*p2.y*p3.z)/double(6);
}

double trig::cx() const{
    double p30_2=p3.x*p3.x;
    double p10_2=p1.x*p1.x;
    double p20_2=p2.x*p2.x;
    double c_0=3*p1.z;
    double c_1=c_0+p3.z;
    double c_2=-(p2.y*c_1);
    double c_3=3*p2.z;
    double c_4=c_0+p2.z;
    double c_5=p3.y*c_4;
    double c_6=-p3.z;
    double c_7=3*p3.z;
    double c_8=p1.z+c_3;
    double c_9=p3.y*c_8;
    double c_10=-c_9;
    double c_11=p1.z+c_6;
    double c_12=c_3+p3.z;
    double c_13=p1.y*c_12;
    double c_14=-p2.z;
    double c_15=p1.z+c_7;
    double c_16=p2.y*c_15;
    double c_17=p2.z+c_7;
    double c_18=-(p1.y*c_17);
    return (p2.x*p3.x*(c_5+3*p1.y*(p2.z+c_6)+c_2)+p30_2*(p3.y*(-p1.z+p2.z)+c_2+c_13)+p10_2*(c_10+p1.y*(c_14+p3.z)+c_16)+p20_2*
        (c_5+p2.y*c_11+c_18)+p1.x*(p3.x*(c_10-3*p2.y*c_11+c_13)+p2.x*(3*p3.y*(p1.z+c_14)+c_16+c_18)))/double(72);
}

double trig::cy() const{
    double p11_2=p1.y*p1.y;
    double p31_2=p3.y*p3.y;
    double p21_2=p2.y*p2.y;
    double c_0=3*p1.z;
    double c_1=c_0+p2.z;
    double c_2=p11_2;
    double c_3=-p2.z;
    double c_4=3*p2.z;
    double c_5=p31_2;
    double c_6=c_4+p3.z;
    double c_7=p21_2;
    double c_8=3*p3.z;
    double c_9=p2.z+c_8;
    double c_10=c_0+p3.z;
    double c_11=-p1.z;
    double c_12=c_11+p3.z;
    double c_13=p1.z+c_8;
    return (p3.x*(c_5*(p1.z+c_3)-c_7*c_1-p2.y*p3.y*c_1+c_2*(p1.z+c_4)+p1.y*(-3*p2.y*p1.z+p3.y*p1.z+3*
        p2.y*p2.z+3*p3.y*p2.z))+p1.x*(c_2*(p2.z-p3.z)+3*p2.y*p3.y*(c_3+p3.z)-p1.y*p3.y*c_6-c_5*c_6+p1.y*p2.y*
        c_9+c_7*c_9)+p2.x*(c_7*c_12+p2.y*p3.y*c_10+c_5*c_10-c_2*c_13-p1.y*(3*p3.y*c_12+p2.y*c_13)))/double(72);
}

double trig::cz() const{
    double p12_2=p1.z*p1.z;
    double p22_2=p2.z*p2.z;
    double p32_2=p3.z*p3.z;
    double c_0=p12_2;
    double c_1=p22_2;
    double c_2=-(3*p2.z*p3.z);
    double c_3=p32_2;
    double c_4=-(3*c_1);
    double c_5=-3*p2.z;
    double c_6=c_5+p3.z;
    double c_7=p1.z*c_6;
    double c_8=c_0+c_4+c_2+c_3+c_7;
    double c_9=-(3*p3.z);
    double c_10=p2.z+c_9;
    double c_11=p1.z*c_10;
    double c_12=-(3*c_3);
    double c_13=c_0+c_1+c_11+c_2+c_12;
    double c_14=p2.z+p3.z;
    return (-(p1.x*p2.y*c_13)-p3.x*p1.y*c_8+p1.x*p3.y*c_8+p3.x*p2.y*(-3*c_0+c_1+p2.z*
        p3.z+c_3-3*p1.z*c_14)+p2.x*(p1.y*c_13+p3.y*(3*c_0-c_1-p2.z*p3.z-c_3+3*p1.z*c_14)))/double(72);
}

double trig::j2() const{
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
    double p10_2=p1.x*p1.x;
    double p30_2=p3.x*p3.x;
    double p30_3=p3.x*p30_2;
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p20_2=p2.x*p2.x;
    double p20_3=p2.x*p20_2;
    double c_0=2*p3.y*p2.z;
    double c_1=-3*p2.y*p1.z;
    double c_2=-(2*p3.y*p1.z);
    double c_3=3*p1.y*p2.z;
    double c_4=2*p1.y*p3.z;
    double c_5=3*p3.y*p1.z;
    double c_6=-(3*p1.y*p3.z);
    double c_7=-(2*p2.y*p3.z);
    double c_8=-(2*p1.y*p2.z);
    double c_9=-(3*p3.y*p2.z);
    double c_10=3*p2.y*p3.z;
    double c_11=p21_3;
    double c_12=p21_2;
    double c_13=p31_2;
    double c_14=p31_3;
    double c_15=p12_2;
    double c_16=p22_2;
    double c_17=p32_2;
    double c_18=2*p3.y*p1.z;
    double c_19=3*p3.y*p2.z;
    double c_20=p12_3;
    double c_21=p10_2;
    double c_22=p22_3;
    double c_23=2*p1.z;
    double c_24=3*p2.z;
    double c_25=c_23+c_24;
    double c_26=p32_3;
    double c_27=p30_2;
    double c_28=p11_3;
    double c_29=2*p2.y*p1.z;
    double c_30=p11_2;
    double c_31=-p2.z;
    double c_32=p1.z+c_31;
    double c_33=-p1.z;
    double c_34=4*c_20;
    double c_35=-p3.z;
    double c_36=p1.z+c_35;
    double c_37=-(6*p1.z*p2.z*p3.z);
    double c_38=-(6*c_16*p3.z);
    double c_39=-(6*p2.z*c_17);
    double c_40=c_33+p3.z;
    double c_41=3*p3.z;
    double c_42=c_23+c_41;
    double c_43=3*p3.y*p3.z;
    double c_44=4*c_22;
    double c_45=-(6*c_26);
    double c_46=2*p2.z;
    double c_47=c_46+c_41;
    return (p20_3*(c_5+c_8+c_0+2*p2.y*c_36+c_6)+p30_3*(c_1+c_2+c_3+c_0+c_4+c_7)+p1.x*c_27*(c_1+c_2+c_3+c_9+c_4+c_10)+p20_2*
        (p3.x*(c_1+c_5+c_3+c_0+c_6+c_7)+p1.x*(c_29+c_5+c_8+c_9+c_6+c_10))+p3.x*(-3*c_11*p1.z-3*c_12*p3.y*p1.z-3*p2.y*c_13*
        p1.z+2*c_14*p1.z+6*p2.y*c_20-2*c_11*p2.z-2*c_12*p3.y*p2.z-2*p2.y*c_13*p2.z-2*c_14*p2.z+6*p2.y*c_15*p2.z+6*p2.y*
        p1.z*c_16-4*p2.y*c_22+c_28*c_25+c_30*(c_1+c_18+3*p2.y*p2.z+c_19)+6*p2.y*c_15*p3.z+6*p2.y*p1.z*p2.z*p3.z-4*
        p2.y*c_16*p3.z+6*p2.y*p1.z*c_17-4*p2.y*p2.z*c_17-4*p2.y*c_26-c_21*(3*p2.y*p1.z+c_18+c_19-3*p2.y*p3.z)+p1.y*(c_34-3*
        c_12*c_32+3*c_21*p2.z-6*c_15*p2.z-6*p1.z*c_16-6*c_22+3*p2.y*p3.y*(c_33+p2.z)+c_13*c_25+2*c_21*p3.z+4*c_15*
        p3.z+c_37+c_38+4*p1.z*c_17+c_39+4*c_26))+p2.x*(-3*c_27*p2.y*p1.z-2*c_11*p1.z+3*c_27*p3.y*p1.z+3*c_12*p3.y*p1.z+3*p2.y*
        c_13*p1.z+3*c_14*p1.z-6*p3.y*c_20+2*c_27*p3.y*p2.z-6*p3.y*c_15*p2.z-6*p3.y*p1.z*c_16+4*p3.y*c_22-2*c_27*p2.y*
        p3.z+2*c_11*p3.z+2*c_12*p3.y*p3.z+2*p2.y*c_13*p3.z+2*c_14*p3.z-6*p3.y*c_15*p3.z-6*p3.y*p1.z*p2.z*p3.z+4*
        p3.y*c_16*p3.z-6*p3.y*p1.z*c_17+4*p3.y*p2.z*c_17+4*p3.y*c_26-c_28*c_42+c_21*(c_29+c_5+c_9+c_10)-c_30*(c_29-3*p3.y*
        p1.z+c_10+c_43)+3*p1.x*p3.x*(p3.y*c_32+p2.y*c_40)-p1.y*(c_34+2*c_21*p2.z-3*p1.x*p3.x*p2.z-3*c_27*p2.z+4*c_15*
        p2.z+4*p1.z*c_16+c_44-3*c_13*c_36+3*c_21*p3.z+3*p1.x*p3.x*p3.z+3*c_27*p3.z-6*c_15*p3.z+c_37+c_38-6*p1.z*c_17+c_39+c_45+3*
        p2.y*p3.y*c_40+c_12*c_42))+p1.x*(-4*p3.y*c_20+2*c_28*p2.z-3*c_30*p3.y*p2.z-3*p1.y*c_13*p2.z-3*c_14*p2.z+6*
        p3.y*c_15*p2.z+6*p3.y*p1.z*c_16+6*p3.y*c_22-2*c_28*p3.z-2*c_30*p3.y*p3.z-2*p1.y*c_13*p3.z-2*c_14*p3.z-4*p3.y*
        c_15*p3.z+6*p3.y*p1.z*p2.z*p3.z+6*p3.y*c_16*p3.z-4*p3.y*p1.z*c_17+6*p3.y*p2.z*c_17-4*p3.y*c_26+c_11*c_47+c_21*
        (c_29+c_2+c_8+c_9+c_4+c_10)+c_12*(2*p1.y*p2.z+c_9+3*p1.y*p3.z+c_43)+p2.y*(c_34-3*c_13*p2.z+c_44+c_15*(4*p2.z-6*
        p3.z)+3*c_13*p3.z+c_38+c_39+c_45+3*p1.y*p3.y*(c_31+p3.z)+c_30*c_47+p1.z*(4*c_16-6*p2.z*p3.z-6*c_17))))/double(360);
}

double trig::c21() const{
    double p22_2=p2.z*p2.z;
    double p32_2=p3.z*p3.z;
    double p12_2=p1.z*p1.z;
    double p10_2=p1.x*p1.x;
    double p20_2=p2.x*p2.x;
    double p30_2=p3.x*p3.x;
    double c_0=p22_2;
    double c_1=-(3*p2.z*p3.z);
    double c_2=p32_2;
    double c_3=-p3.z;
    double c_4=p12_2;
    double c_5=2*p2.z;
    double c_6=c_5+p3.z;
    double c_7=p2.z+c_3;
    double c_8=p2.z+p3.z;
    double c_9=3*c_4;
    double c_10=-(3*c_0);
    double c_11=3*p1.z*c_6;
    double c_12=-(3*c_2);
    double c_13=2*p3.z;
    double c_14=p2.z+c_13;
    double c_15=p1.z+c_3;
    double c_16=-3*c_4;
    double c_17=3*c_0;
    double c_18=-p2.z;
    double c_19=p1.z+c_18;
    double c_20=2*p1.z;
    double c_21=-(6*p1.z*p3.z);
    double c_22=6*p2.z*p3.z;
    return (p10_2*(-(p1.y*c_7*(3*p1.z+p2.z+p3.z))-p2.y*(p1.z*p2.z+c_0+c_21+c_1+c_12)+p3.y*(-6*p1.z*p2.z+c_10+p1.z*
        p3.z+c_1+c_2))+p20_2*(p2.y*c_15*(p1.z+3*p2.z+p3.z)+p3.y*(c_9-p3.z*c_8+c_11)+p1.y*(c_4+p1.z*(p2.z-3*p3.z)-3*p3.z*
        c_6))+p2.x*p3.x*(3*p1.y*c_7*(p1.z+2*c_8)-p2.y*(c_9+c_10+c_2+c_11)+p3.y*(c_9+c_0+c_12+3*p1.z*c_14))+p30_2*(-(p3.y*c_19*
        (p1.z+p2.z+3*p3.z))+p2.y*(c_16+p2.z*c_8-3*p1.z*c_14)-p1.y*(c_4+p1.z*(-3*p2.z+p3.z)-3*p2.z*c_14))+p1.x*(p3.x*
        (-3*p2.y*c_15*(c_20+p2.z+c_13)-p3.y*(c_4+3*p1.z*p2.z+c_17+c_22+c_12)+p1.y*(c_16+6*p1.z*p2.z+c_17+3*p2.z*p3.z+c_2))+p2.x*
        (3*p3.y*c_19*(c_20+c_5+p3.z)+p1.y*(c_9-c_0+c_21+c_1+c_12)+p2.y*(c_4+c_10+3*p1.z*p3.z+c_22+3*c_2))))/double(360);
}

double trig::c22() const{
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p10_2=p1.x*p1.x;
    double p30_2=p3.x*p3.x;
    double p30_3=p3.x*p30_2;
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p20_2=p2.x*p2.x;
    double p20_3=p2.x*p20_2;
    double c_0=2*p3.y*p2.z;
    double c_1=-3*p2.y*p1.z;
    double c_2=-(2*p3.y*p1.z);
    double c_3=3*p1.y*p2.z;
    double c_4=2*p1.y*p3.z;
    double c_5=3*p3.y*p1.z;
    double c_6=-(3*p1.y*p3.z);
    double c_7=-(2*p2.y*p3.z);
    double c_8=-(2*p1.y*p2.z);
    double c_9=-(3*p3.y*p2.z);
    double c_10=3*p2.y*p3.z;
    double c_11=p21_3;
    double c_12=p21_2;
    double c_13=p31_2;
    double c_14=p31_3;
    double c_15=3*p2.y*p1.z;
    double c_16=-p2.z;
    double c_17=p1.z+c_16;
    double c_18=2*p1.z;
    double c_19=3*p2.z;
    double c_20=c_18+c_19;
    double c_21=p10_2;
    double c_22=p30_2;
    double c_23=p11_3;
    double c_24=2*p2.y*p1.z;
    double c_25=p11_2;
    double c_26=-p3.z;
    double c_27=p1.z+c_26;
    double c_28=-p1.z;
    double c_29=c_28+p3.z;
    double c_30=3*p3.z;
    double c_31=c_18+c_30;
    double c_32=3*p3.y*p2.z;
    double c_33=-(3*p2.y*p3.z);
    double c_34=p2.z+c_26;
    double c_35=2*p3.z;
    double c_36=c_19+c_35;
    return (p20_3*(c_5+c_8+c_0+2*p2.y*c_27+c_6)+p30_3*(c_1+c_2+c_3+c_0+c_4+c_7)+p1.x*c_22*(c_1+c_2+c_3+c_9+c_4+c_10)+p20_2*
        (p3.x*(c_1+c_5+c_3+c_0+c_6+c_7)+p1.x*(c_24+c_5+c_8+c_9+c_6+c_10))+p3.x*(3*c_11*p1.z+3*c_12*p3.y*p1.z+3*p2.y*c_13*p1.z-2*
        c_14*p1.z+2*c_11*p2.z+2*c_12*p3.y*p2.z+2*p2.y*c_13*p2.z+2*c_14*p2.z-c_23*c_20+c_25*(c_15+c_2-3*p2.y*p2.z+c_9)-c_21*
        (c_15+2*p3.y*p1.z+c_32+c_33)+p1.y*(3*c_12*c_17+3*p2.y*p3.y*c_17-c_13*c_20+c_21*c_36))+p2.x*(-3*c_22*p2.y*p1.z+2*
        c_11*p1.z+3*c_22*p3.y*p1.z-3*c_12*p3.y*p1.z-3*p2.y*c_13*p1.z-3*c_14*p1.z+2*c_22*p3.y*p2.z-2*c_22*p2.y*p3.z-2*c_11*
        p3.z-2*c_12*p3.y*p3.z-2*p2.y*c_13*p3.z-2*c_14*p3.z+c_23*c_31+c_21*(c_24+c_5+c_9+c_10)+c_25*(c_24-3*p3.y*p1.z+c_10+3*
        p3.y*p3.z)+3*p1.x*p3.x*(p3.y*c_17+p2.y*c_29)+p1.y*(-2*c_21*p2.z+3*p1.x*p3.x*p2.z+3*c_22*p2.z-3*c_13*c_27-3*
        c_21*p3.z-3*p1.x*p3.x*p3.z-3*c_22*p3.z+3*p2.y*p3.y*c_29+c_12*c_31))+p1.x*(-2*c_11*p2.z+3*c_12*p3.y*p2.z+3*p2.y*c_13*
        p2.z+3*c_14*p2.z-2*c_23*c_34-3*c_11*p3.z-3*c_12*p3.y*p3.z-3*p2.y*c_13*p3.z+2*c_14*p3.z+c_21*(c_24+c_2+c_8+c_9+c_4+c_10)+c_25*
        (-2*p2.y*p2.z+c_32+c_33+2*p3.y*p3.z)+p1.y*(3*p2.y*p3.y*c_34+c_13*c_36-c_12*(2*p2.z+c_30))))/double(720);
}

double trig::s21() const{
    double p22_2=p2.z*p2.z;
    double p32_2=p3.z*p3.z;
    double p12_2=p1.z*p1.z;
    double p31_2=p3.y*p3.y;
    double p11_2=p1.y*p1.y;
    double p21_2=p2.y*p2.y;
    double c_0=-p3.z;
    double c_1=p1.z+c_0;
    double c_2=p22_2;
    double c_3=p32_2;
    double c_4=p12_2;
    double c_5=-(3*c_2);
    double c_6=3*c_4;
    double c_7=2*p3.z;
    double c_8=p31_2;
    double c_9=p11_2;
    double c_10=p21_2;
    double c_11=p2.z+p3.z;
    double c_12=2*p2.z;
    double c_13=c_12+p3.z;
    double c_14=-(3*c_3);
    double c_15=p2.z+c_7;
    double c_16=3*p1.z*c_15;
    double c_17=-p2.z;
    double c_18=p1.z+c_17;
    double c_19=2*p1.z;
    double c_20=3*c_2;
    double c_21=6*p2.z*p3.z;
    double c_22=p2.z+c_0;
    double c_23=-(3*p2.z*p3.z);
    double c_24=-c_3;
    double c_25=-3*c_4;
    double c_26=3*p2.z*p3.z;
    double c_27=3*c_3;
    return (p2.x*(-(c_10*c_1*(p1.z+3*p2.z+p3.z))+3*p1.y*p3.y*c_1*(c_19+p2.z+c_7)+c_9*(c_2+p1.z*(p2.z-6*p3.z)+c_23+c_14)-p1.y*
        p2.y*(c_4+c_5+3*p1.z*p3.z+c_21+c_27)+p2.y*p3.y*(c_6+c_5+c_3+3*p1.z*c_13)+c_8*(c_6-p2.z*c_11+c_16))+p3.x*(c_8*
        c_18*(p1.z+p2.z+3*p3.z)+c_9*(6*p1.z*p2.z+c_20-p1.z*p3.z+c_26+c_24)+c_10*(c_25+p3.z*c_11-3*p1.z*c_13)-p2.y*p3.y*
        (c_6+c_2+c_14+c_16)+p1.y*(-3*p2.y*c_18*(c_19+c_12+p3.z)+p3.y*(c_4+3*p1.z*p2.z+c_20+c_21+c_14)))+p1.x*(c_9*c_22*(3*
        p1.z+p2.z+p3.z)-3*p2.y*p3.y*c_22*(p1.z+2*c_11)-c_10*(c_4+p1.z*(p2.z-3*p3.z)-3*p3.z*c_13)+c_8*(c_4+p1.z*(-3*
        p2.z+p3.z)-3*p2.z*c_15)+p1.y*(p3.y*(c_6-6*p1.z*p2.z+c_5+c_23+c_24)+p2.y*(c_25+c_2+6*p1.z*p3.z+c_26+c_27))))/double(360);
}

double trig::s22() const{
    double p31_2=p3.y*p3.y;
    double p21_2=p2.y*p2.y;
    double p11_2=p1.y*p1.y;
    double p10_2=p1.x*p1.x;
    double p30_2=p3.x*p3.x;
    double p20_2=p2.x*p2.x;
    double c_0=6*p1.z;
    double c_1=p31_2;
    double c_2=3*p2.z;
    double c_3=p21_2;
    double c_4=3*p3.z;
    double c_5=3*p1.z;
    double c_6=p11_2;
    double c_7=p1.z+c_2+p3.z;
    double c_8=c_0+p2.z+c_4;
    double c_9=-p2.z;
    double c_10=6*p2.z;
    double c_11=p1.z+p2.z+c_4;
    double c_12=c_5+p2.z+p3.z;
    double c_13=c_0+c_2+p3.z;
    double c_14=6*p3.z;
    double c_15=-(2*p3.z);
    double c_16=p1.z+p2.z+c_15;
    double c_17=-p3.z;
    double c_18=c_5+c_10+p3.z;
    double c_19=p1.z+c_10+c_4;
    double c_20=p1.z+c_9;
    double c_21=-(2*p2.z);
    double c_22=p1.z+c_21+p3.z;
    double c_23=c_5+p2.z+c_14;
    double c_24=p1.z+c_2+c_14;
    return (p2.x*p3.x*(3*p1.y*p3.y*c_16+3*c_6*(p2.z+c_17)-3*p1.y*p2.y*c_22-c_3*c_13+c_1*c_8)+p10_2*(3*p2.y*
        p3.y*(c_9+p3.z)-c_1*c_7-p1.y*p3.y*c_18+c_3*c_11+p1.y*p2.y*c_23)+p30_2*(c_6*c_7-p2.y*(p2.y*c_12+p3.y*
        c_8)+p1.y*(-3*p2.y*c_20+p3.y*c_19))+p20_2*(-(c_6*c_11)+p3.y*(p3.y*c_12+p2.y*c_13)-p1.y*(3*p3.y*(-p1.z+p3.z)+p2.y*
        c_24))+p1.x*(p3.x*(-3*p2.y*p3.y*c_16-3*c_3*(p1.z+c_17)+3*p1.y*p2.y*(-2*p1.z+p2.z+p3.z)+c_6*c_18-c_1*
        c_19)+p2.x*(3*c_1*c_20+3*p1.y*p3.y*(2*p1.z+c_9+c_17)+3*p2.y*p3.y*c_22-c_6*c_23+c_3*c_24)))/double(720);
}

double trig::j3() const{
    double p12_2=p1.z*p1.z;
    double p12_3=p1.z*p12_2;
    double p12_4=p1.z*p12_3;
    double p22_2=p2.z*p2.z;
    double p22_3=p2.z*p22_2;
    double p22_4=p2.z*p22_3;
    double p32_2=p3.z*p3.z;
    double p32_3=p3.z*p32_2;
    double p32_4=p3.z*p32_3;
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p20_2=p2.x*p2.x;
    double p20_3=p2.x*p20_2;
    double p30_2=p3.x*p3.x;
    double p10_2=p1.x*p1.x;
    double p10_3=p1.x*p10_2;
    double c_0=p12_2;
    double c_1=p22_2;
    double c_2=p32_2;
    double c_3=-p3.z;
    double c_4=p2.z+c_3;
    double c_5=-c_2;
    double c_6=-(2*c_1);
    double c_7=3*p2.z;
    double c_8=p11_2;
    double c_9=p12_4;
    double c_10=p21_3;
    double c_11=p21_2;
    double c_12=p31_2;
    double c_13=p31_3;
    double c_14=p12_3;
    double c_15=p11_3;
    double c_16=p22_3;
    double c_17=p22_4;
    double c_18=p32_3;
    double c_19=p32_4;
    double c_20=p1.z+c_3;
    double c_21=3*p2.z*p3.z;
    double c_22=p2.z+p3.z;
    double c_23=p20_2;
    double c_24=-p2.z;
    double c_25=p1.z+c_24;
    double c_26=2*p1.z;
    double c_27=p1.z*c_22;
    double c_28=(c_22*c_22);
    double c_29=-c_28;
    double c_30=2*p3.z;
    double c_31=-2*c_0;
    double c_32=p2.z*p3.z;
    double c_33=c_7+p3.z;
    double c_34=p1.z*c_33;
    double c_35=3*p1.z;
    double c_36=-c_1;
    double c_37=2*p2.z*p3.z;
    double c_38=2*c_0;
    double c_39=-(p2.z*p3.z);
    double c_40=3*p3.z;
    double c_41=-(6*p3.y*c_9);
    double c_42=6*p3.y*c_17;
    double c_43=3*c_11*p3.y*p1.z*p3.z;
    double c_44=-(6*p3.y*c_14*p3.z);
    double c_45=3*c_11*p3.y*p2.z*p3.z;
    double c_46=6*p3.y*c_16*p3.z;
    double c_47=-(6*p3.y*c_0*c_2);
    double c_48=6*p3.y*c_1*c_2;
    double c_49=-(6*p3.y*p1.z*c_18);
    double c_50=6*p3.y*p2.z*c_18;
    double c_51=-(3*p2.z*p3.z);
    double c_52=-(3*c_2);
    double c_53=c_35+p2.z+c_30;
    double c_54=2*p1.z*p3.z;
    double c_55=c_0+c_36+c_54+c_37+c_2;
    double c_56=p2.y*c_55;
    double c_57=p30_2;
    double c_58=p1.z+p2.z+p3.z;
    double c_59=c_26+p2.z+c_40;
    double c_60=c_0+c_6+c_21+c_2+c_27;
    double c_61=2*p1.z*c_22;
    double c_62=-(2*c_2);
    double c_63=p2.z+c_40;
    double c_64=6*p2.y*c_9;
    double c_65=-(3*p2.y*c_12*p1.z*p2.z);
    double c_66=6*p2.y*c_14*p2.z;
    double c_67=-(3*p2.y*c_12*c_1);
    double c_68=6*p2.y*c_0*c_1;
    double c_69=6*p2.y*p1.z*c_16;
    double c_70=-(3*p2.y*c_12*p2.z*p3.z);
    double c_71=-(6*p2.y*c_16*p3.z);
    double c_72=3*c_11*p3.y*c_2;
    double c_73=-(6*p2.y*c_1*c_2);
    double c_74=-(6*p2.y*p2.z*c_18);
    double c_75=-(6*p2.y*c_19);
    double c_76=9*p1.z*p2.z;
    double c_77=2*p2.z;
    double c_78=c_35+c_77+p3.z;
    double c_79=2*p1.z*p2.z;
    double c_80=c_0+c_79+c_1+c_37+c_5;
    double c_81=3*c_1;
    double c_82=-(p1.z*p3.z);
    double c_83=c_26+c_7+p3.z;
    double c_84=c_0+c_1+c_21+c_62+c_27;
    return (p20_3*(2*p2.y*c_20*(p1.z+4*p2.z+p3.z)+p1.y*(c_0+c_6+p1.z*(p2.z-3*p3.z)-9*p2.z*p3.z+c_52)+p3.y*(3*c_0+c_76+2*
        c_1+3*p1.z*p3.z+c_39+c_5))+p10_3*(-2*p1.y*c_4*(4*p1.z+p2.z+p3.z)+p3.y*(c_31-9*p1.z*p2.z-3*c_1+p1.z*p3.z+c_51+c_2)+p2.y*
        (c_38-p1.z*p2.z+c_36+9*p1.z*p3.z+c_21+3*c_2))-3*c_23*p3.x*(-(p1.y*c_4*(p1.z+c_7+c_30))-p3.y*(c_0+c_1+c_5+c_61)+p2.y*
        (c_0+c_6+c_32+c_2+c_34))+p1.x*(-6*c_8*p2.y*c_0-3*p1.y*c_11*c_0-c_10*c_0+6*c_8*p3.y*c_0+3*p1.y*c_12*c_0+c_13*
        c_0+c_64+c_41+8*c_15*p1.z*p2.z+3*c_8*p2.y*p1.z*p2.z-c_10*p1.z*p2.z-9*c_8*p3.y*p1.z*p2.z-6*p1.y*p2.y*p3.y*p1.z*p2.z-3*
        c_11*p3.y*p1.z*p2.z-6*p1.y*c_12*p1.z*p2.z+c_65-3*c_13*p1.z*p2.z+c_66+6*p3.y*c_14*p2.z+2*c_15*c_1+3*c_8*p2.y*c_1+3*
        p1.y*c_11*c_1+2*c_10*c_1-3*c_8*p3.y*c_1-6*p1.y*p2.y*p3.y*c_1-9*c_11*p3.y*c_1-3*p1.y*c_12*c_1-6*p2.y*c_12*c_1-3*c_13*
        c_1+c_68+6*p3.y*c_0*c_1+c_69+6*p3.y*p1.z*c_16+6*p2.y*c_17+c_42-8*c_15*p1.z*p3.z+9*c_8*p2.y*p1.z*p3.z+6*p1.y*c_11*p1.z*
        p3.z+3*c_10*p1.z*p3.z-3*c_8*p3.y*p1.z*p3.z+6*p1.y*p2.y*p3.y*p1.z*p3.z+c_43+3*p2.y*c_12*p1.z*p3.z+c_13*p1.z*p3.z-6*
        p2.y*c_14*p3.z+c_44+3*c_8*p2.y*p2.z*p3.z+6*p1.y*c_11*p2.z*p3.z+9*c_10*p2.z*p3.z-3*c_8*p3.y*p2.z*p3.z+c_45-6*p1.y*
        c_12*p2.z*p3.z+c_70-9*c_13*p2.z*p3.z-6*p2.y*c_0*p2.z*p3.z+6*p3.y*c_0*p2.z*p3.z-6*p2.y*p1.z*c_1*p3.z+6*p3.y*
        p1.z*c_1*p3.z+c_71+c_46-2*c_15*c_2+3*c_8*p2.y*c_2+3*p1.y*c_11*c_2+3*c_10*c_2-3*c_8*p3.y*c_2+6*p1.y*p2.y*p3.y*c_2+6*c_11*
        p3.y*c_2-3*p1.y*c_12*c_2+9*p2.y*c_12*c_2-2*c_13*c_2-6*p2.y*c_0*c_2+c_47-6*p2.y*p1.z*p2.z*c_2+6*p3.y*p1.z*p2.z*
        c_2+c_73+c_48-6*p2.y*p1.z*c_18+c_49+c_74+c_50+c_75-6*p3.y*c_19+6*p2.x*p3.x*c_58*(p3.y*c_25+p1.y*c_4+p2.y*(-p1.z+p3.z))-3*
        c_57*(p2.y*c_20*c_59+p3.y*c_84+p1.y*(c_0-2*p1.z*p2.z+c_29))+3*c_23*(p3.y*c_25*c_83+p2.y*c_60+p1.y*(c_0-2*p1.z*p3.z+c_29)))+3*
        p10_2*(p3.x*(-(p2.y*c_20*c_53)-p3.y*c_80+p1.y*(c_31+c_1+c_32+c_2+c_34))+p2.x*(p3.y*c_25*c_78+c_56+p1.y*
        (c_38+c_36+c_39+c_5-p1.z*c_63)))+p2.x*(-2*c_10*c_0+3*c_11*p3.y*c_0+3*p2.y*c_12*c_0+3*c_13*c_0+c_41-8*c_10*p1.z*p2.z+9*c_11*p3.y*
        p1.z*p2.z+6*p2.y*c_12*p1.z*p2.z+3*c_13*p1.z*p2.z-6*p3.y*c_14*p2.z-6*c_11*p3.y*c_1+c_67-c_13*c_1-6*p3.y*c_0*c_1-6*
        p3.y*p1.z*c_16+c_42+c_43+6*p2.y*c_12*p1.z*p3.z+9*c_13*p1.z*p3.z+c_44+8*c_10*p2.z*p3.z+c_45-c_13*p2.z*p3.z-6*p3.y*c_0*
        p2.z*p3.z-6*p3.y*p1.z*c_1*p3.z+c_46+2*c_10*c_2+c_72+3*p2.y*c_12*c_2+2*c_13*c_2+c_47-6*p3.y*p1.z*p2.z*c_2+c_48+c_49+c_50+6*
        p3.y*c_19+c_15*(c_31+c_1+p1.z*(p2.z-9*p3.z)+c_51+c_52)-3*c_8*(-(p3.y*c_20*c_53)+c_56)-3*p1.y*(2*c_9-c_57*p1.z*
        p2.z+2*c_14*p2.z-2*c_57*c_1+2*c_0*c_1+2*p1.z*c_16+2*c_17+c_57*p1.z*p3.z-2*c_14*p3.z-c_57*p2.z*p3.z-2*c_0*p2.z*p3.z-2*
        p1.z*c_1*p3.z-2*c_16*p3.z+3*c_57*c_2-2*c_0*c_2-2*p1.z*p2.z*c_2-2*c_1*c_2-2*p1.z*c_18-2*p2.z*c_18-2*c_19-2*p2.y*p3.y*c_20*
        c_58-c_12*c_20*c_59+c_11*c_60)+3*c_57*(-(p2.y*(c_0+c_36+c_2+c_61))+p3.y*(c_0+c_1+c_32+c_62+p1.z*c_63)))+p3.x*(-3*c_10*
        c_0-3*c_11*p3.y*c_0-3*p2.y*c_12*c_0+2*c_13*c_0+c_64-9*c_10*p1.z*p2.z-6*c_11*p3.y*p1.z*p2.z+c_65+c_66-2*c_10*c_1-3*c_11*
        p3.y*c_1+c_67-2*c_13*c_1+c_68+c_69-6*p2.y*c_17-3*c_10*p1.z*p3.z-6*c_11*p3.y*p1.z*p3.z-9*p2.y*c_12*p1.z*p3.z+8*c_13*p1.z*
        p3.z+6*p2.y*c_14*p3.z+c_10*p2.z*p3.z+c_70-8*c_13*p2.z*p3.z+6*p2.y*c_0*p2.z*p3.z+6*p2.y*p1.z*c_1*p3.z+c_71+c_10*
        c_2+c_72+6*p2.y*c_12*c_2+6*p2.y*c_0*c_2+6*p2.y*p1.z*p2.z*c_2+c_73+6*p2.y*p1.z*c_18+c_74+c_75+c_15*(c_38+c_76+c_81+c_82+c_21+c_5)+3*
        c_8*(-(p2.y*c_25*c_78)+p3.y*c_80)+c_57*(-2*p3.y*c_25*(p1.z+p2.z+4*p3.z)+p1.y*(-c_0+3*p1.z*p2.z+c_81+c_82+9*
        p2.z*p3.z+2*c_2)+p2.y*(-3*c_0+c_1+c_32+c_62-3*p1.z*c_63))-3*p1.y*(2*p2.y*p3.y*c_25*c_58+c_11*c_25*c_83-c_12*c_84+2*
        (-c_9+c_17+c_14*c_4+c_16*p3.z+c_1*c_2+p2.z*c_18-c_19+c_0*(c_1+c_32+c_5)+p1.z*(c_16+c_1*p3.z+p2.z*c_2-c_18)))))/double(720);
}

double trig::c31() const{
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p12_2=p1.z*p1.z;
    double p12_3=p1.z*p12_2;
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
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
    double c_0=p1.z+p2.z;
    double c_1=p3.y*c_0;
    double c_2=p1.z+p3.z;
    double c_3=-p3.z;
    double c_4=p11_2;
    double c_5=p12_3;
    double c_6=p21_2;
    double c_7=p21_3;
    double c_8=p31_2;
    double c_9=p31_3;
    double c_10=p12_2;
    double c_11=p22_2;
    double c_12=p22_3;
    double c_13=p11_3;
    double c_14=p32_2;
    double c_15=p32_3;
    double c_16=p1.z+c_3;
    double c_17=p2.y*c_16;
    double c_18=-p2.z;
    double c_19=c_18+p3.z;
    double c_20=p1.y*c_19;
    double c_21=p2.z+p3.z;
    double c_22=-(p1.y*c_21);
    double c_23=c_1+c_17+c_22;
    double c_24=p2.y*c_2;
    double c_25=p1.z+c_18;
    double c_26=p3.y*c_25;
    double c_27=c_26+c_24+c_22;
    double c_28=-c_1;
    double c_29=-p1.z;
    double c_30=p30_2;
    double c_31=3*c_6*p3.y*p2.z;
    double c_32=3*p2.y*c_8*p2.z;
    double c_33=-(12*p2.y*c_10*p2.z);
    double c_34=-(12*p2.y*p1.z*c_11);
    double c_35=12*p2.y*c_11*p3.z;
    double c_36=12*p2.y*p2.z*c_14;
    double c_37=3*p2.z;
    double c_38=p20_2;
    double c_39=-(3*c_6*p3.y*p3.z);
    double c_40=-(3*p2.y*c_8*p3.z);
    double c_41=12*p3.y*c_10*p3.z;
    double c_42=-(12*p3.y*c_11*p3.z);
    double c_43=12*p3.y*p1.z*c_14;
    double c_44=-(12*p3.y*p2.z*c_14);
    double c_45=2*p1.z;
    double c_46=c_29+p3.z;
    double c_47=2*p3.z;
    double c_48=-(9*c_30*p2.z);
    double c_49=12*c_10*p2.z;
    double c_50=12*p1.z*c_11;
    double c_51=-(12*c_10*p3.z);
    double c_52=-(12*p1.z*c_14);
    double c_53=2*p2.z;
    double c_54=3*p3.z;
    double c_55=-(12*p2.y*c_5);
    double c_56=12*p3.y*c_5;
    double c_57=-(c_9*p2.z);
    double c_58=4*p3.y*c_12;
    double c_59=p2.z+c_3;
    double c_60=c_7*p3.z;
    double c_61=-(24*p2.y*p1.z*p2.z*p3.z);
    double c_62=24*p3.y*p1.z*p2.z*p3.z;
    double c_63=-(4*p2.y*c_15);
    double c_64=c_28+c_24+c_20;
    double c_65=c_29+p2.z;
    double c_66=p3.y*c_65;
    double c_67=c_66+c_17+c_20;
    double c_68=p20_3;
    double c_69=3*c_7*p1.z;
    double c_70=3*c_6*p3.y*p1.z;
    double c_71=c_9*p1.z;
    double c_72=-(4*p3.y*c_5);
    double c_73=-(24*p2.y*c_10*p2.z);
    double c_74=-(12*p3.y*c_12);
    double c_75=-(3*c_7*p3.z);
    double c_76=-(12*p2.y*c_10*p3.z);
    double c_77=-(24*p3.y*p1.z*p2.z*p3.z);
    double c_78=12*c_12;
    double c_79=-(9*c_30*p3.z);
    double c_80=-(3*p2.y*c_8*p1.z);
    double c_81=-(3*c_9*p1.z);
    double c_82=4*p2.y*c_5;
    double c_83=6*p2.y*c_8*p2.z;
    double c_84=3*c_9*p2.z;
    double c_85=12*p3.y*c_10*p2.z;
    double c_86=-(12*p3.y*p1.z*c_11);
    double c_87=-(6*c_6*p3.y*p3.z);
    double c_88=24*p3.y*c_10*p3.z;
    double c_89=24*p2.y*p1.z*p2.z*p3.z;
    double c_90=-(24*p3.y*c_11*p3.z);
    double c_91=12*p2.y*p1.z*c_14;
    double c_92=24*p2.y*p2.z*c_14;
    double c_93=12*p2.y*c_15;
    double c_94=8*p1.z;
    double c_95=-3*p1.z;
    double c_96=-32*c_5;
    double c_97=6*p2.y*p3.y*c_25;
    double c_98=24*p1.z*p2.z*p3.z;
    double c_99=12*c_11*p3.z;
    double c_100=12*p2.z*c_14;
    double c_101=6*p1.z;
    double c_102=-(3*c_21);
    double c_103=c_101+c_102;
    return (9*p10_4*(c_1+p1.y*c_59-p2.y*c_2)+9*c_68*p3.x*c_64-9*p20_4*c_23+p10_2*(-6*c_4*p2.y*p1.z-3*p1.y*c_6*p1.z-c_7*p1.z+6*
        c_4*p3.y*p1.z+3*p1.y*c_8*p1.z+c_71-8*p2.y*c_5+8*p3.y*c_5-2*c_13*p2.z-3*c_4*p2.y*p2.z-3*p1.y*c_6*p2.z-2*c_7*p2.z+9*
        c_4*p3.y*p2.z+6*p1.y*p2.y*p3.y*p2.z+c_31+6*p1.y*c_8*p2.z+c_32+c_84-24*p1.y*c_10*p2.z+c_33-36*p3.y*c_10*p2.z-12*
        p1.y*p1.z*c_11+c_34-24*p3.y*p1.z*c_11-4*p1.y*c_12-8*p2.y*c_12+c_74+2*c_13*p3.z-9*c_4*p2.y*p3.z-6*p1.y*c_6*p3.z+c_75+3*
        c_4*p3.y*p3.z-6*p1.y*p2.y*p3.y*p3.z+c_39+3*p1.y*c_8*p3.z+c_40+2*c_9*p3.z+24*p1.y*c_10*p3.z+36*p2.y*c_10*
        p3.z+c_41+c_89+c_77+c_35+c_42+12*p1.y*p1.z*c_14+24*p2.y*p1.z*c_14+c_43+c_36+c_44+4*p1.y*c_15+c_93+8*p3.y*c_15+9*p2.x*p3.x*c_67+9*
        c_30*c_23-9*c_38*c_27)-9*p10_3*(p2.x*c_27+p3.x*(c_28+p2.y*c_46+p1.y*c_21))+c_30*(c_69+6*c_6*p3.y*p1.z+9*p2.y*c_8*p1.z-2*
        c_9*p1.z+c_55+c_72+2*c_7*p2.z+c_31+c_32+2*c_9*p2.z+c_33+c_34+8*p2.y*c_12+c_58+c_60+3*c_6*p3.y*p3.z+6*p2.y*c_8*p3.z-24*
        p2.y*c_10*p3.z-12*p3.y*c_10*p3.z+c_61+c_35+12*p3.y*c_11*p3.z-36*p2.y*p1.z*c_14-24*p3.y*p1.z*c_14+c_36+24*p3.y*
        p2.z*c_14+8*p2.y*c_15-c_13*(c_45+c_37+p3.z)+9*c_30*(c_26+c_24)+3*c_4*(p2.y*c_25-p3.y*(p1.z+c_53+p3.z))+p1.y*(-8*c_5+3*c_6*
        c_25+c_97+c_48+c_49+c_50+c_78+c_79+c_51+c_98+24*c_11*p3.z+c_52+36*p2.z*c_14-8*c_15-3*c_8*(p1.z+c_37+c_47)))+c_38*(2*c_7*
        p1.z-9*c_6*p3.y*p1.z-6*p2.y*c_8*p1.z+c_81+c_82+c_56-6*c_6*p3.y*p2.z-3*p2.y*c_8*p2.z+c_57+12*p2.y*c_10*p2.z+24*p3.y*c_10*
        p2.z+24*p2.y*p1.z*c_11+36*p3.y*p1.z*c_11-8*p3.y*c_12-2*c_7*p3.z+c_39+c_40-2*c_9*p3.z+c_41+c_62-24*p2.y*c_11*
        p3.z+c_42+c_43-12*p2.y*p2.z*c_14+c_44+c_63-8*p3.y*c_15+c_13*(c_45+p2.z+c_54)+9*c_30*(c_28+c_24)+3*c_4*(p3.y*c_46+p2.y*
        (p1.z+p2.z+c_47))+p1.y*(8*c_5+c_48+c_49+c_50+8*c_12-3*c_8*c_16+9*c_30*p3.z+c_51-24*p1.z*p2.z*p3.z-36*c_11*p3.z+c_52-24*p2.z*
        c_14-12*c_15+6*p2.y*p3.y*c_46+3*c_6*(p1.z+c_53+c_54)))+p2.x*p3.x*(9*c_7*p1.z+c_70+c_80-9*c_9*p1.z+c_55+c_56+8*c_7*
        p2.z+c_31+c_57+c_73+c_85-36*p2.y*p1.z*c_11+12*p3.y*p1.z*c_11+32*p2.y*c_12+c_58-3*c_13*c_59+c_60+c_40-8*c_9*p3.z+c_76+c_88+c_61+c_62+c_35-12*
        p2.y*p1.z*c_14+36*p3.y*p1.z*c_14+c_44+c_63-32*p3.y*c_15+3*c_4*(-(p3.y*(p1.z+p2.z-2*p3.z))+p2.y*(p1.z-2*
        p2.z+p3.z))+9*c_30*c_64+3*p1.y*(-(c_8*(c_45+p2.z-3*p3.z))+c_6*(c_45-3*p2.z+p3.z)+2*p2.y*p3.y*c_19+4*c_59*(c_10+3*c_11+4*
        p2.z*p3.z+3*c_14+2*p1.z*c_21)))+p1.x*(9*c_38*p3.x*c_67-9*c_68*c_27+p3.x*(c_69+c_70+3*p2.y*c_8*p1.z+c_71-36*p2.y*
        c_5+c_72+c_31+c_83+9*c_9*p2.z+c_73-12*p3.y*c_10*p2.z+c_34+c_86+c_74+9*c_30*(c_1+c_17)+c_75+c_87-9*p2.y*c_8*p3.z+8*c_9*
        p3.z+c_76+c_77+c_35+c_90+c_91+c_43+c_92-36*p3.y*p2.z*c_14+36*p2.y*c_15+32*p3.y*c_15-c_13*(c_94+9*p2.z+p3.z)-3*c_4*(c_1+p2.y*
        (c_95+c_53+p3.z))+p1.y*(c_96+c_48+3*c_8*p2.z+c_78+6*p2.y*p3.y*c_16+12*c_10*(c_37+c_3)+c_79+3*c_8*p3.z+c_99+c_100+4*c_15+24*
        p1.z*p2.z*c_21+c_6*c_103))+p2.x*(-(c_7*p1.z)-3*c_6*p3.y*p1.z+c_80+c_81+c_82+36*p3.y*c_5-8*c_7*p2.z+9*c_6*p3.y*
        p2.z+c_83+c_84+c_85+c_34+c_86-32*p2.y*c_12-36*p3.y*c_12+9*c_30*(c_66+c_17)-9*c_7*p3.z+c_87+c_40+12*p2.y*c_10*p3.z+c_88+c_89+36*
        p2.y*c_11*p3.z+c_90+c_91+c_43+c_92+c_44+c_93+c_13*(c_94+p2.z+9*p3.z)+3*c_4*(c_24+p3.y*(c_95+p2.z+c_47))-p1.y*(c_96+c_97+9*
        c_30*p2.z-12*c_10*p2.z+4*c_12+c_79+36*c_10*p3.z+c_98+c_99+24*p1.z*c_14+c_100+12*c_15+3*c_6*c_21+c_8*c_103))))/double(4320);
}

double trig::c32() const{
    double p12_2=p1.z*p1.z;
    double p22_2=p2.z*p2.z;
    double p32_2=p3.z*p3.z;
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p20_2=p2.x*p2.x;
    double p20_3=p2.x*p20_2;
    double p30_2=p3.x*p3.x;
    double p10_2=p1.x*p1.x;
    double p10_3=p1.x*p10_2;
    double c_0=p12_2;
    double c_1=p22_2;
    double c_2=p32_2;
    double c_3=-p3.z;
    double c_4=p2.z+c_3;
    double c_5=-c_2;
    double c_6=-(2*c_1);
    double c_7=3*p2.z;
    double c_8=p11_2;
    double c_9=p21_3;
    double c_10=p21_2;
    double c_11=p31_2;
    double c_12=p31_3;
    double c_13=p11_3;
    double c_14=p1.z+c_3;
    double c_15=3*p2.z*p3.z;
    double c_16=p2.z+p3.z;
    double c_17=p20_2;
    double c_18=-p2.z;
    double c_19=p1.z+c_18;
    double c_20=2*p1.z;
    double c_21=p1.z*c_16;
    double c_22=(c_16*c_16);
    double c_23=-c_22;
    double c_24=3*p2.y*c_11*p1.z*p2.z;
    double c_25=3*p2.y*c_11*p2.z*p3.z;
    double c_26=-2*c_0;
    double c_27=-(3*c_1);
    double c_28=-(3*p2.z*p3.z);
    double c_29=p1.z+p2.z+p3.z;
    double c_30=c_20+c_7+p3.z;
    double c_31=-(2*c_2);
    double c_32=c_0+c_1+c_15+c_31+c_21;
    double c_33=p30_2;
    double c_34=p2.z*p3.z;
    double c_35=3*p3.z;
    double c_36=3*p1.z;
    double c_37=2*p3.z;
    double c_38=2*p1.z*p2.z;
    double c_39=2*p2.z*p3.z;
    double c_40=c_0+c_38+c_1+c_39+c_5;
    double c_41=-(p3.y*c_40);
    double c_42=c_7+p3.z;
    double c_43=p1.z*c_42;
    double c_44=2*p2.z;
    double c_45=c_36+c_44+p3.z;
    double c_46=-c_1;
    double c_47=2*c_0;
    double c_48=-(p2.z*p3.z);
    double c_49=p2.z+c_35;
    double c_50=3*p2.y*c_11*c_1;
    double c_51=-(3*c_10*p3.y*p1.z*p3.z);
    double c_52=-(3*c_10*p3.y*p2.z*p3.z);
    double c_53=-(3*c_10*p3.y*c_2);
    double c_54=-(p1.z*p2.z);
    double c_55=9*p1.z*p3.z;
    double c_56=3*c_2;
    double c_57=c_47+c_54+c_46+c_55+c_15+c_56;
    double c_58=c_36+p2.z+c_37;
    double c_59=2*p1.z*p3.z;
    double c_60=c_0+c_46+c_59+c_39+c_2;
    double c_61=p2.y*c_60;
    double c_62=c_20+p2.z+c_35;
    double c_63=c_0+c_6+c_15+c_2+c_21;
    double c_64=2*p1.z*c_16;
    return (p20_3*(2*p2.y*c_14*(p1.z+4*p2.z+p3.z)+p1.y*(c_0+c_6+p1.z*(p2.z-3*p3.z)-9*p2.z*p3.z-3*c_2)+p3.y*(3*c_0+9*
        p1.z*p2.z+2*c_1+3*p1.z*p3.z+c_48+c_5))+p10_3*(-2*p1.y*c_4*(4*p1.z+p2.z+p3.z)+p3.y*(c_26-9*p1.z*p2.z+c_27+p1.z*
        p3.z+c_28+c_2)+p2.y*c_57)-3*c_17*p3.x*(-(p1.y*c_4*(p1.z+c_7+c_37))-p3.y*(c_0+c_1+c_5+c_64)+p2.y*(c_0+c_6+c_34+c_2+c_43))+p1.x*
        (6*c_8*p2.y*c_0+3*p1.y*c_10*c_0+c_9*c_0-6*c_8*p3.y*c_0-3*p1.y*c_11*c_0-c_12*c_0-8*c_13*p1.z*p2.z-3*c_8*p2.y*p1.z*
        p2.z+c_9*p1.z*p2.z+9*c_8*p3.y*p1.z*p2.z+6*p1.y*p2.y*p3.y*p1.z*p2.z+3*c_10*p3.y*p1.z*p2.z+6*p1.y*c_11*p1.z*
        p2.z+c_24+3*c_12*p1.z*p2.z-2*c_13*c_1-3*c_8*p2.y*c_1-3*p1.y*c_10*c_1-2*c_9*c_1+3*c_8*p3.y*c_1+6*p1.y*p2.y*p3.y*c_1+9*c_10*
        p3.y*c_1+3*p1.y*c_11*c_1+6*p2.y*c_11*c_1+3*c_12*c_1+8*c_13*p1.z*p3.z-9*c_8*p2.y*p1.z*p3.z-6*p1.y*c_10*p1.z*p3.z-3*
        c_9*p1.z*p3.z+3*c_8*p3.y*p1.z*p3.z-6*p1.y*p2.y*p3.y*p1.z*p3.z+c_51-3*p2.y*c_11*p1.z*p3.z-c_12*p1.z*p3.z-3*c_8*
        p2.y*p2.z*p3.z-6*p1.y*c_10*p2.z*p3.z-9*c_9*p2.z*p3.z+3*c_8*p3.y*p2.z*p3.z+c_52+6*p1.y*c_11*p2.z*p3.z+c_25+9*c_12*
        p2.z*p3.z+2*c_13*c_2-3*c_8*p2.y*c_2-3*p1.y*c_10*c_2-3*c_9*c_2+3*c_8*p3.y*c_2-6*p1.y*p2.y*p3.y*c_2-6*c_10*p3.y*c_2+3*
        p1.y*c_11*c_2-9*p2.y*c_11*c_2+2*c_12*c_2+6*p2.x*p3.x*c_29*(p3.y*c_19+p1.y*c_4+p2.y*(-p1.z+p3.z))-3*c_33*(p2.y*c_14*
        c_62+p3.y*c_32+p1.y*(c_0-2*p1.z*p2.z+c_23))+3*c_17*(p3.y*c_19*c_30+p2.y*c_63+p1.y*(c_0-2*p1.z*p3.z+c_23)))+p3.x*(3*c_9*
        c_0+3*c_10*p3.y*c_0+3*p2.y*c_11*c_0-2*c_12*c_0+9*c_9*p1.z*p2.z+6*c_10*p3.y*p1.z*p2.z+c_24+2*c_9*c_1+3*c_10*p3.y*
        c_1+c_50+2*c_12*c_1+3*c_9*p1.z*p3.z+6*c_10*p3.y*p1.z*p3.z+9*p2.y*c_11*p1.z*p3.z-8*c_12*p1.z*p3.z-c_9*p2.z*p3.z+c_25+8*
        c_12*p2.z*p3.z-c_9*c_2+c_53-6*p2.y*c_11*c_2+c_13*(c_26+c_27+c_28+c_2+p1.z*(-9*p2.z+p3.z))+3*c_8*(p2.y*c_19*c_45+c_41)+3*
        p1.y*(2*p2.y*p3.y*c_19*c_29+c_10*c_19*c_30-c_11*c_32)+c_33*(-2*p3.y*c_19*(p1.z+p2.z+4*p3.z)+p1.y*(-c_0+3*p1.z*p2.z+3*
        c_1-p1.z*p3.z+9*p2.z*p3.z+2*c_2)+p2.y*(-3*c_0+c_1+c_34+c_31-3*p1.z*c_49)))+3*p10_2*(p3.x*(-(p2.y*c_14*c_58)+c_41+p1.y*
        (c_26+c_1+c_34+c_2+c_43))+p2.x*(p3.y*c_19*c_45+c_61+p1.y*(c_47+c_46+c_48+c_5-p1.z*c_49)))+p2.x*(2*c_9*c_0-3*c_10*p3.y*
        c_0-3*p2.y*c_11*c_0-3*c_12*c_0+8*c_9*p1.z*p2.z-9*c_10*p3.y*p1.z*p2.z-6*p2.y*c_11*p1.z*p2.z-3*c_12*p1.z*p2.z+6*c_10*
        p3.y*c_1+c_50+c_12*c_1+c_51-6*p2.y*c_11*p1.z*p3.z-9*c_12*p1.z*p3.z-8*c_9*p2.z*p3.z+c_52+c_12*p2.z*p3.z-2*c_9*
        c_2+c_53-3*p2.y*c_11*c_2-2*c_12*c_2+c_13*c_57+3*c_8*(-(p3.y*c_14*c_58)+c_61)+3*p1.y*(-2*p2.y*p3.y*c_14*c_29-c_11*c_14*c_62+c_33*
        c_4*(p1.z+c_44+c_35)+c_10*c_63)+3*c_33*(-(p2.y*(c_0+c_46+c_2+c_64))+p3.y*(c_0+c_1+c_34+c_31+p1.z*c_49))))/double(4320);
}

double trig::c33() const{
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p30_2=p3.x*p3.x;
    double p20_2=p2.x*p2.x;
    double p20_3=p2.x*p20_2;
    double p20_4=p2.x*p20_3;
    double p10_2=p1.x*p1.x;
    double p10_3=p1.x*p10_2;
    double p10_4=p1.x*p10_3;
    double c_0=p1.z+p2.z;
    double c_1=p3.y*c_0;
    double c_2=p1.z+p3.z;
    double c_3=-p3.z;
    double c_4=p21_3;
    double c_5=p21_2;
    double c_6=p31_3;
    double c_7=p2.z+c_3;
    double c_8=p31_2;
    double c_9=p1.y*c_7;
    double c_10=-(p2.y*c_2);
    double c_11=c_1+c_9+c_10;
    double c_12=2*p1.z;
    double c_13=-p2.z;
    double c_14=c_13+p3.z;
    double c_15=p11_2;
    double c_16=p11_3;
    double c_17=3*c_5*p3.y*p2.z;
    double c_18=-(3*p2.y*c_8*p3.z);
    double c_19=p30_2;
    double c_20=p1.z+c_3;
    double c_21=p2.y*c_20;
    double c_22=p2.z+p3.z;
    double c_23=-(p1.y*c_22);
    double c_24=c_1+c_21+c_23;
    double c_25=p1.z+c_13;
    double c_26=p3.y*c_25;
    double c_27=p2.y*c_2;
    double c_28=c_26+c_27+c_23;
    double c_29=-c_1;
    double c_30=-p1.z;
    double c_31=c_30+p3.z;
    double c_32=p2.y*c_31;
    double c_33=3*p2.y*c_8*p2.z;
    double c_34=c_4*p3.z;
    double c_35=3*p2.z;
    double c_36=p20_2;
    double c_37=-(c_6*p2.z);
    double c_38=-(3*c_5*p3.y*p3.z);
    double c_39=2*p3.z;
    double c_40=2*p2.z;
    double c_41=3*p3.z;
    double c_42=c_26+c_9+c_32;
    double c_43=p20_3;
    double c_44=3*c_4*p1.z;
    double c_45=3*c_5*p3.y*p1.z;
    double c_46=c_6*p1.z;
    double c_47=-(3*c_4*p3.z);
    double c_48=-(3*p2.y*c_8*p1.z);
    double c_49=-(3*c_6*p1.z);
    double c_50=6*p2.y*c_8*p2.z;
    double c_51=3*c_6*p2.z;
    double c_52=-(6*c_5*p3.y*p3.z);
    double c_53=8*p1.z;
    double c_54=2*p2.y*p3.y*c_25;
    double c_55=c_12+c_13+c_3;
    double c_56=-3*p1.z;
    return (3*c_43*p3.x*c_11+3*p10_4*(c_29+c_27+p1.y*c_14)+3*p20_4*c_24+p2.x*p3.x*(9*c_4*p1.z+c_45+c_48-9*c_6*p1.z+8*c_4*
        p2.z+c_17+c_37-3*c_16*c_7+c_34+c_18-8*c_6*p3.z+3*c_19*c_11+3*c_15*(-(p3.y*(p1.z+p2.z-2*p3.z))+p2.y*(p1.z-2*p2.z+p3.z))+3*
        p1.y*(-(c_8*(c_12+p2.z-3*p3.z))+c_5*(c_12-3*p2.z+p3.z)+2*p2.y*p3.y*c_14))+p10_2*(-6*c_15*p2.y*p1.z-3*p1.y*c_5*p1.z-c_4*
        p1.z+6*c_15*p3.y*p1.z+3*p1.y*c_8*p1.z+c_46-2*c_16*p2.z-3*c_15*p2.y*p2.z-3*p1.y*c_5*p2.z-2*c_4*p2.z+9*c_15*p3.y*
        p2.z+6*p1.y*p2.y*p3.y*p2.z+c_17+6*p1.y*c_8*p2.z+c_33+c_51+2*c_16*p3.z-9*c_15*p2.y*p3.z-6*p1.y*c_5*p3.z+c_47+3*c_15*
        p3.y*p3.z-6*p1.y*p2.y*p3.y*p3.z+c_38+3*p1.y*c_8*p3.z+c_18+2*c_6*p3.z+3*p2.x*p3.x*c_42-3*c_19*c_24+3*c_36*c_28)+3*
        p10_3*(p2.x*c_28+p3.x*(c_29+c_32+p1.y*c_22))+c_19*(c_44+6*c_5*p3.y*p1.z+9*p2.y*c_8*p1.z-2*c_6*p1.z+2*c_4*p2.z+c_17+c_33+2*
        c_6*p2.z+c_34+3*c_5*p3.y*p3.z+6*p2.y*c_8*p3.z-c_16*(c_12+c_35+p3.z)-3*c_19*(c_26+c_27)+3*c_15*(p2.y*c_25-p3.y*
        (p1.z+c_40+p3.z))+3*p1.y*(c_5*c_25+c_54+c_19*c_22-c_8*(p1.z+c_35+c_39)))+c_36*(2*c_4*p1.z-9*c_5*p3.y*p1.z-6*p2.y*c_8*p1.z+c_49-6*
        c_5*p3.y*p2.z-3*p2.y*c_8*p2.z+c_37-2*c_4*p3.z+c_38+c_18-2*c_6*p3.z+c_16*(c_12+p2.z+c_41)-3*c_19*(c_29+c_27)+3*c_15*
        (p3.y*c_31+p2.y*(p1.z+p2.z+c_39))+3*p1.y*(c_19*c_7+2*p2.y*p3.y*c_31+c_8*c_31+c_5*(p1.z+c_40+c_41)))+p1.x*(3*c_36*p3.x*
        c_42+3*c_43*c_28+p3.x*(c_44+c_45+3*p2.y*c_8*p1.z+c_46+c_17+c_50+9*c_6*p2.z-3*c_19*(c_1+c_21)+c_47+c_52-9*p2.y*c_8*p3.z+8*
        c_6*p3.z-c_16*(c_53+9*p2.z+p3.z)+3*p1.y*(2*p2.y*p3.y*c_20+c_5*c_55+(c_19+c_8)*c_22)-3*c_15*(c_1+p2.y*(c_56+c_40+p3.z)))+p2.x*
        (-(c_4*p1.z)-3*c_5*p3.y*p1.z+c_48+c_49-8*c_4*p2.z+9*c_5*p3.y*p2.z+c_50+c_51-9*c_4*p3.z+c_52+c_18+c_16*(c_53+p2.z+9*
        p3.z)+3*c_19*(c_26+c_32)-3*p1.y*(c_54+c_8*c_55+c_19*c_14+c_5*c_22)+3*c_15*(c_27+p3.y*(c_56+p2.z+c_39)))))/double(8640);
}

double trig::s31() const{
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p21_4=p2.y*p21_3;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p31_4=p3.y*p31_3;
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p11_4=p1.y*p11_3;
    double p12_2=p1.z*p1.z;
    double p12_3=p1.z*p12_2;
    double p22_2=p2.z*p2.z;
    double p22_3=p2.z*p22_2;
    double p32_2=p3.z*p3.z;
    double p32_3=p3.z*p32_2;
    double p20_2=p2.x*p2.x;
    double p20_3=p2.x*p20_2;
    double p30_2=p3.x*p3.x;
    double p10_2=p1.x*p1.x;
    double p10_3=p1.x*p10_2;
    double c_0=-p3.z;
    double c_1=p2.z+c_0;
    double c_2=2*p1.z;
    double c_3=8*p1.z;
    double c_4=p21_2;
    double c_5=p31_2;
    double c_6=p11_2;
    double c_7=2*p2.z;
    double c_8=3*p3.z;
    double c_9=8*p2.z;
    double c_10=9*p3.z;
    double c_11=3*p1.z;
    double c_12=c_11+c_7+p3.z;
    double c_13=p12_3;
    double c_14=p11_3;
    double c_15=p21_3;
    double c_16=p31_3;
    double c_17=p12_2;
    double c_18=p22_2;
    double c_19=p22_3;
    double c_20=p11_4;
    double c_21=p21_4;
    double c_22=p31_4;
    double c_23=p32_2;
    double c_24=p32_3;
    double c_25=-p1.z;
    double c_26=c_25+p3.z;
    double c_27=3*p2.z;
    double c_28=2*p3.z;
    double c_29=p20_2;
    double c_30=-(3*p2.z);
    double c_31=p2.z+p3.z;
    double c_32=-2*p1.z;
    double c_33=c_32+p2.z+p3.z;
    double c_34=p1.z+c_7+c_8;
    double c_35=-p2.z;
    double c_36=-(2*p3.z);
    double c_37=p1.z+p2.z+c_36;
    double c_38=p1.z+c_0;
    double c_39=p1.z+c_7+p3.z;
    double c_40=c_2+c_27+p3.z;
    double c_41=c_25+p2.z;
    double c_42=c_5*c_41;
    double c_43=p1.z+p2.z+c_28;
    double c_44=c_2+p2.z+c_8;
    double c_45=-(2*p2.z);
    double c_46=9*c_15*p3.y*p2.z;
    double c_47=9*c_4*c_5*p2.z;
    double c_48=9*p2.y*c_16*p2.z;
    double c_49=9*c_22*p2.z;
    double c_50=-(12*p2.y*p3.y*c_17*p2.z);
    double c_51=p1.z+p2.z;
    double c_52=p1.z+c_35;
    double c_53=12*c_5*c_17*p3.z;
    double c_54=12*p2.y*p3.y*p2.z*c_23;
    double c_55=p30_2;
    double c_56=p1.z+c_27+c_28;
    double c_57=9*p1.z;
    double c_58=9*p2.z;
    double c_59=8*p3.z;
    double c_60=2*p2.z*p3.z;
    double c_61=9*c_21*p1.z;
    double c_62=-(9*c_22*p1.z);
    double c_63=-(12*c_4*c_17*p2.z);
    double c_64=-(9*c_21*p3.z);
    double c_65=-(9*c_15*p3.y*p3.z);
    double c_66=-(9*c_4*c_5*p3.z);
    double c_67=-(9*p2.y*c_16*p3.z);
    double c_68=12*p2.y*p3.y*c_17*p3.z;
    double c_69=-(12*p2.y*p3.y*c_18*p3.z);
    double c_70=-(12*c_5*c_18*p3.z);
    double c_71=12*c_4*p2.z*c_23;
    double c_72=p1.z+p3.z;
    double c_73=p2.y*c_72;
    double c_74=-(3*p3.z);
    double c_75=p1.z+c_45+p3.z;
    double c_76=-3*c_5;
    double c_77=3*c_17;
    double c_78=3*c_23;
    return (p10_3*(2*c_6*c_1+3*p2.y*p3.y*c_1+c_5*c_40+p1.y*p3.y*(c_3+c_58+p3.z)-c_4*c_44-p1.y*p2.y*(c_3+p2.z+c_10))+p20_3*
        (-2*c_4*c_38+3*p1.y*p3.y*c_26-c_5*c_12-p2.y*p3.y*(c_57+c_9+p3.z)+c_6*c_34+p1.y*p2.y*(p1.z+c_9+c_10))-3*c_29*p3.x*(c_6*
        c_1-(p2.y-p3.y)*(p3.y*(c_2+p2.z+p3.z)+p2.y*c_12)+p1.y*(p3.y*c_37-p2.y*(p1.z+c_30+c_28)))+p1.x*(-32*p1.y*p2.y*c_13-8*
        c_4*c_13+32*p1.y*p3.y*c_13+8*c_5*c_13-9*c_20*p2.z-9*c_14*p2.y*p2.z-9*c_6*c_4*p2.z-9*p1.y*c_15*p2.z-9*c_21*p2.z+9*c_14*
        p3.y*p2.z+9*c_6*p2.y*p3.y*p2.z+9*p1.y*c_4*p3.y*p2.z+c_46+9*c_6*c_5*p2.z+9*p1.y*p2.y*c_5*p2.z+c_47+9*p1.y*c_16*
        p2.z+c_48+c_49+24*c_6*c_17*p2.z-12*p1.y*p2.y*c_17*p2.z+c_63-36*p1.y*p3.y*c_17*p2.z+c_50-12*c_5*c_17*p2.z+12*c_6*p1.z*c_18-12*
        c_4*p1.z*c_18-24*p1.y*p3.y*p1.z*c_18-24*p2.y*p3.y*p1.z*c_18-12*c_5*p1.z*c_18+4*c_6*c_19+4*p1.y*p2.y*c_19-8*c_4*c_19-12*
        p1.y*p3.y*c_19-36*p2.y*p3.y*c_19-12*c_5*c_19+9*c_20*p3.z-9*c_14*p2.y*p3.z-9*c_6*c_4*p3.z-9*p1.y*c_15*p3.z+c_64+9*
        c_14*p3.y*p3.z-9*c_6*p2.y*p3.y*p3.z-9*p1.y*c_4*p3.y*p3.z+c_65+9*c_6*c_5*p3.z-9*p1.y*p2.y*c_5*p3.z+c_66+9*p1.y*c_16*
        p3.z+c_67+9*c_22*p3.z-24*c_6*c_17*p3.z+36*p1.y*p2.y*c_17*p3.z+12*c_4*c_17*p3.z+12*p1.y*p3.y*c_17*p3.z+c_68+c_53+24*p1.y*
        p2.y*p1.z*p2.z*p3.z+24*c_4*p1.z*p2.z*p3.z-24*p1.y*p3.y*p1.z*p2.z*p3.z-24*c_5*p1.z*p2.z*p3.z+12*p1.y*p2.y*c_18*
        p3.z+36*c_4*c_18*p3.z-12*p1.y*p3.y*c_18*p3.z+c_69-24*c_5*c_18*p3.z-12*c_6*p1.z*c_23+24*p1.y*p2.y*p1.z*c_23+12*c_4*
        p1.z*c_23+24*p2.y*p3.y*p1.z*c_23+12*c_5*p1.z*c_23+12*p1.y*p2.y*p2.z*c_23+24*c_4*p2.z*c_23-12*p1.y*p3.y*p2.z*c_23+c_54-36*
        c_5*p2.z*c_23-4*c_6*c_24+12*p1.y*p2.y*c_24+12*c_4*c_24-4*p1.y*p3.y*c_24+36*p2.y*p3.y*c_24+8*c_5*c_24-6*p2.x*p3.x*
        (p1.y+p2.y+p3.y)*(p3.y*c_52+p1.y*c_1+p2.y*c_26)-3*c_55*(-(p2.y*p3.y*(c_2+p2.z+c_74))+c_4*c_26+p1.y*p3.y*c_31+p1.y*p2.y*
        c_33+c_6*c_39-c_5*c_56)+3*c_29*(c_42-p2.y*p3.y*(c_2+c_30+p3.z)+p1.y*p2.y*c_31+p1.y*p3.y*c_33+c_6*c_43-c_4*c_34))+3*p10_2*
        (p3.x*(p1.y*p3.y*c_51+p1.y*p2.y*(c_11+c_35+c_36)+p2.y*p3.y*c_37+c_4*c_38+c_5*c_39-c_6*c_40)+p2.x*(c_42-p2.y*p3.y*
        c_75-c_4*c_43+c_6*c_44-p1.y*(p3.y*(c_11+c_45+c_0)+c_73)))+p3.x*(c_61+9*c_15*p3.y*p1.z+9*c_4*c_5*p1.z+9*p2.y*c_16*p1.z+c_62-12*
        c_4*c_13-12*p2.y*p3.y*c_13+4*c_5*c_13+9*c_21*p2.z+c_46+c_47+c_48+c_49-24*c_4*c_17*p2.z+c_50-36*c_4*p1.z*c_18-12*p2.y*
        p3.y*p1.z*c_18+8*c_4*c_19-4*p2.y*p3.y*c_19-4*c_5*c_19-9*c_20*c_51+9*c_14*(p2.y*c_52-p3.y*c_51)-12*c_4*c_17*p3.z-24*p2.y*
        p3.y*c_17*p3.z+c_53-24*c_4*p1.z*p2.z*p3.z-24*p2.y*p3.y*p1.z*p2.z*p3.z+12*c_4*c_18*p3.z+c_70-12*c_4*p1.z*c_23-36*p2.y*
        p3.y*p1.z*c_23+24*c_5*p1.z*c_23+c_71+c_54-24*c_5*p2.z*c_23+8*c_4*c_24+32*p2.y*p3.y*c_24+c_55*(3*p1.y*p2.y*c_52+2*c_5*
        c_52+c_4*(c_11+p2.z+c_28)-c_6*c_56+p2.y*p3.y*(c_57+p2.z+c_59)-p1.y*p3.y*(p1.z+c_58+c_59))+p1.y*(9*c_15*c_52+9*c_4*p3.y*
        c_52-9*c_16*c_51+4*p3.y*(c_13+3*c_17*p2.z+3*c_19+6*c_18*p3.z+9*p2.z*c_23-8*c_24+3*p1.z*(c_18+c_60-c_23))-3*p2.y*c_52*
        (c_76+4*(c_77+4*p1.z*p2.z+3*c_18+2*p1.z*p3.z+c_60+c_23)))+c_6*(9*c_4*c_52+9*p2.y*p3.y*c_52-9*c_5*c_51-4*(2*c_13-3*c_19-3*c_18*
        p3.z-3*p2.z*c_23+2*c_24+c_17*(-9*p2.z+c_8)+p1.z*(-6*c_18-6*p2.z*p3.z+c_78))))+p2.x*(6*c_55*c_4*p1.z+c_61+3*c_55*p2.y*
        p3.y*p1.z-9*c_15*p3.y*p1.z-9*c_55*c_5*p1.z-9*c_4*c_5*p1.z-9*p2.y*c_16*p1.z+c_62-4*c_4*c_13+12*p2.y*p3.y*c_13+12*c_5*
        c_13+3*c_55*c_4*p2.z-3*c_55*c_5*p2.z+c_63+24*p2.y*p3.y*c_17*p2.z+12*c_5*c_17*p2.z-24*c_4*p1.z*c_18+36*p2.y*p3.y*p1.z*
        c_18+12*c_5*p1.z*c_18-32*p2.y*p3.y*c_19-8*c_5*c_19+3*c_55*c_4*p3.z+c_64+3*c_55*p2.y*p3.y*p3.z+c_65-6*c_55*c_5*p3.z+c_66+c_67-9*
        c_22*p3.z+c_68+24*c_5*c_17*p3.z+24*p2.y*p3.y*p1.z*p2.z*p3.z+24*c_5*p1.z*p2.z*p3.z+24*c_4*c_18*p3.z+c_69+c_70+12*
        p2.y*p3.y*p1.z*c_23+36*c_5*p1.z*c_23+c_71-12*c_5*p2.z*c_23+4*c_4*c_24+4*p2.y*p3.y*c_24-8*c_5*c_24+9*c_20*c_72+9*c_14*(p3.y*
        c_26+c_73)+c_6*(8*c_13-3*c_55*p2.z+12*c_17*p2.z+12*p1.z*c_18+8*c_19-9*c_5*c_38+3*c_55*p3.z-36*c_17*p3.z-24*p1.z*p2.z*
        p3.z-12*c_18*p3.z-24*p1.z*c_23-12*p2.z*c_23-12*c_24+9*p2.y*p3.y*c_26+9*c_4*c_72)+p1.y*(9*c_4*p3.y*c_26+9*c_15*c_72+3*c_55*
        (-(p3.y*(p1.z+c_7+c_74))+p2.y*c_75)+3*p3.y*c_38*(c_76+4*(c_77+2*p1.z*p2.z+c_18+4*p1.z*p3.z+c_60+c_78))-p2.y*(9*c_5*
        c_38+4*(c_13-3*p1.z*c_18-8*c_19+3*c_17*p3.z+6*p1.z*p2.z*p3.z+9*c_18*p3.z+3*p1.z*c_23+6*p2.z*c_23+3*c_24)))))/double(4320);
}

double trig::s32() const{
    double p12_2=p1.z*p1.z;
    double p22_2=p2.z*p2.z;
    double p32_2=p3.z*p3.z;
    double p31_2=p3.y*p3.y;
    double p11_2=p1.y*p1.y;
    double p21_2=p2.y*p2.y;
    double p10_2=p1.x*p1.x;
    double p30_2=p3.x*p3.x;
    double p20_2=p2.x*p2.x;
    double c_0=2*p1.z;
    double c_1=p12_2;
    double c_2=p22_2;
    double c_3=p32_2;
    double c_4=2*p3.z;
    double c_5=c_0+p2.z+c_4;
    double c_6=3*p3.z;
    double c_7=p1.z+p2.z+c_6;
    double c_8=2*p2.z;
    double c_9=c_0+c_8+p3.z;
    double c_10=3*p2.z;
    double c_11=p1.z+c_10+p3.z;
    double c_12=p2.z+p3.z;
    double c_13=2*c_12;
    double c_14=p1.z+c_13;
    double c_15=p31_2;
    double c_16=p1.z+p2.z+p3.z;
    double c_17=p11_2;
    double c_18=3*p1.z;
    double c_19=c_18+p2.z+p3.z;
    double c_20=p21_2;
    double c_21=-(3*c_2);
    double c_22=p1.z*p3.z;
    double c_23=c_1+c_21+c_22+c_3;
    double c_24=-p3.z;
    double c_25=p1.z*p2.z;
    double c_26=-(3*c_3);
    double c_27=c_1+c_25+c_2+c_26;
    return (-(p10_2*(p3.y*p2.z-p2.y*p3.z)*(2*p1.y*c_19+p2.y*c_9+p3.y*c_5))+2*p2.x*p3.x*(c_17*(p2.z+c_24)*c_16-c_20*
        p1.z*c_11+c_15*p1.z*c_7+p1.y*p3.y*c_27-p1.y*p2.y*c_23)+p30_2*(-(p2.y*p1.z)+p1.y*p2.z)*(p1.y*c_5+2*p3.y*
        c_7+p2.y*c_14)+p20_2*(p3.y*p1.z-p1.y*p3.z)*(p1.y*c_9+2*p2.y*c_11+p3.y*c_14)+2*p1.x*(p2.x*(c_15*(p1.z-p2.z)*
        c_16-c_17*p3.z*c_19+c_20*p3.z*c_11+p1.y*p3.y*(3*c_1-c_2-p2.z*p3.z-c_3)+p2.y*p3.y*c_23)+p3.x*(-(c_20*
        (p1.z+c_24)*c_16)+c_17*p2.z*c_19-c_15*p2.z*c_7-p2.y*p3.y*c_27+p1.y*p2.y*(-3*c_1+c_2+p2.z*p3.z+c_3))))/double(1440);
}

double trig::s33() const{
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p21_4=p2.y*p21_3;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p31_4=p3.y*p31_3;
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p11_4=p1.y*p11_3;
    double p20_2=p2.x*p2.x;
    double p20_3=p2.x*p20_2;
    double p30_2=p3.x*p3.x;
    double p30_3=p3.x*p30_2;
    double p10_2=p1.x*p1.x;
    double p10_3=p1.x*p10_2;
    double c_0=p1.z+p2.z;
    double c_1=p21_2;
    double c_2=-p2.z;
    double c_3=p1.z+c_2;
    double c_4=p31_2;
    double c_5=p21_3;
    double c_6=p31_3;
    double c_7=-p1.z;
    double c_8=c_7+p2.z;
    double c_9=p11_2;
    double c_10=2*p3.z;
    double c_11=8*p3.z;
    double c_12=3*p2.z;
    double c_13=9*p2.z;
    double c_14=2*p1.z;
    double c_15=8*p1.z;
    double c_16=-p3.z;
    double c_17=p2.z+c_16;
    double c_18=3*p1.z;
    double c_19=p11_4;
    double c_20=p11_3;
    double c_21=p21_4;
    double c_22=p31_4;
    double c_23=c_7+p3.z;
    double c_24=2*p2.z;
    double c_25=p1.z+c_12+c_10;
    double c_26=p20_2;
    double c_27=-(3*p2.z);
    double c_28=p2.z+p3.z;
    double c_29=-2*p1.z;
    double c_30=c_29+p2.z+p3.z;
    double c_31=3*p3.z;
    double c_32=c_18+c_24+p3.z;
    double c_33=9*p1.z;
    double c_34=p1.z+c_24+c_31;
    double c_35=8*p2.z;
    double c_36=9*p3.z;
    double c_37=-(2*p3.z);
    double c_38=p1.z+p2.z+c_37;
    double c_39=p1.z+c_16;
    double c_40=p1.z+c_24+p3.z;
    double c_41=c_14+c_12+p3.z;
    double c_42=c_4*c_8;
    double c_43=p1.z+p2.z+c_10;
    double c_44=c_14+p2.z+c_31;
    double c_45=-(2*p2.z);
    double c_46=-(c_22*p3.z);
    double c_47=p1.z+p3.z;
    double c_48=p2.y*c_47;
    double c_49=p30_2;
    double c_50=-p3.y;
    double c_51=p2.y+c_50;
    double c_52=c_14+p2.z+p3.z;
    double c_53=c_18+p2.z+c_10;
    double c_54=-(3*p3.z);
    double c_55=p1.z+c_45+p3.z;
    return (3*p3.x*(c_22*c_8-c_19*c_0+c_21*c_0+c_5*p3.y*c_0+c_1*c_4*c_0+p2.y*c_6*c_0+c_20*(p2.y*c_3-p3.y*c_0)+c_9*(c_1*
        c_3+p2.y*p3.y*c_3-c_4*c_0)+p1.y*(c_5*c_3+c_1*p3.y*c_3+p2.y*c_4*c_3-c_6*c_0))+p30_3*(-3*p1.y*p2.y*c_3+2*c_4*c_8-c_1*
        c_53+c_9*c_25-p2.y*p3.y*(c_33+p2.z+c_11)+p1.y*p3.y*(p1.z+c_13+c_11))+p10_3*(-2*c_9*c_17+3*p2.y*p3.y*(c_2+p3.z)-c_4*
        c_41-p1.y*p3.y*(c_15+c_13+p3.z)+c_1*c_44+p1.y*p2.y*(c_15+p2.z+c_36))+3*c_26*p3.x*(c_9*c_17-c_51*(p3.y*c_52+p2.y*
        c_32)+p1.y*(p3.y*c_38-p2.y*(p1.z+c_27+c_10)))-3*p1.x*(c_19*p2.z+c_20*p2.y*p2.z+c_9*c_1*p2.z+p1.y*c_5*p2.z+c_21*
        p2.z-c_20*p3.y*p2.z-c_9*p2.y*p3.y*p2.z-p1.y*c_1*p3.y*p2.z-c_5*p3.y*p2.z-c_9*c_4*p2.z-p1.y*p2.y*c_4*p2.z-c_1*
        c_4*p2.z-p1.y*c_6*p2.z-p2.y*c_6*p2.z-c_22*p2.z-c_19*p3.z+c_20*p2.y*p3.z+c_9*c_1*p3.z+p1.y*c_5*p3.z+c_21*p3.z-c_20*
        p3.y*p3.z+c_9*p2.y*p3.y*p3.z+p1.y*c_1*p3.y*p3.z+c_5*p3.y*p3.z-c_9*c_4*p3.z+p1.y*p2.y*c_4*p3.z+c_1*c_4*
        p3.z-p1.y*c_6*p3.z+p2.y*c_6*p3.z+c_46-2*p2.x*p3.x*(p1.y+p2.y+p3.y)*(p3.y*c_3+p1.y*c_17+p2.y*c_23)-c_49*(-(p2.y*
        p3.y*(c_14+p2.z+c_54))+c_1*c_23+p1.y*p3.y*c_28+p1.y*p2.y*c_30+c_9*c_40-c_4*c_25)+c_26*(c_42-p2.y*p3.y*
        (c_14+c_27+p3.z)+p1.y*p2.y*c_28+p1.y*p3.y*c_30+c_9*c_43-c_1*c_34))+p20_3*(2*c_1*c_39+c_4*c_32+p2.y*p3.y*(c_33+c_35+p3.z)-c_9*
        c_34-p1.y*(3*p3.y*c_23+p2.y*(p1.z+c_35+c_36)))-3*p10_2*(p3.x*(p1.y*p3.y*c_0+p1.y*p2.y*(c_18+c_2+c_37)+p2.y*p3.y*
        c_38+c_1*c_39+c_4*c_40-c_9*c_41)+p2.x*(c_42-p2.y*p3.y*c_55-c_1*c_43+c_9*c_44-p1.y*(p3.y*(c_18+c_45+c_16)+c_48)))+3*
        p2.x*(c_21*p1.z-c_5*p3.y*p1.z-c_1*c_4*p1.z-p2.y*c_6*p1.z-c_22*p1.z-c_21*p3.z-c_5*p3.y*p3.z-c_1*c_4*p3.z-p2.y*
        c_6*p3.z+c_46+c_19*c_47+c_20*(p3.y*c_23+c_48)+c_9*(c_49*c_17+p2.y*p3.y*c_23+c_4*c_23+c_1*c_47)-c_49*c_51*(p2.y*c_52+p3.y*
        c_53)+p1.y*(c_1*p3.y*c_23+p2.y*c_4*c_23+c_6*c_23+c_5*c_47+c_49*(p3.y*(p1.z+c_24+c_54)-p2.y*c_55))))/double(8640);
}

double trig::j4() const{
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
    double c_0=-(4*p1.y*p2.z);
    double c_1=p11_2;
    double c_2=p21_2;
    double c_3=p21_3;
    double c_4=p31_2;
    double c_5=p31_3;
    double c_6=p12_2;
    double c_7=p22_2;
    double c_8=p22_3;
    double c_9=p32_2;
    double c_10=p32_3;
    double c_11=-p3.z;
    double c_12=p1.z+c_11;
    double c_13=3*p2.y*p1.z;
    double c_14=-(3*p1.y*p2.z);
    double c_15=4*p2.y*p1.z;
    double c_16=3*p3.y*p1.z;
    double c_17=-(3*p3.y*p2.z);
    double c_18=-(3*p1.y*p3.z);
    double c_19=3*p2.y*p3.z;
    double c_20=c_15+c_16+c_0+c_17+c_18+c_19;
    double c_21=-(4*p3.y*p1.z);
    double c_22=4*p1.y*p3.z;
    double c_23=p12_3;
    double c_24=p30_2;
    double c_25=-(3*p3.y*p1.z);
    double c_26=-(4*p3.y*p2.z);
    double c_27=4*p2.y*p3.z;
    double c_28=-p1.z;
    double c_29=c_28+p3.z;
    double c_30=2*p1.z;
    double c_31=9*p3.z;
    double c_32=p20_2;
    double c_33=-(9*p2.y*c_4*p1.z);
    double c_34=12*p3.y*c_23;
    double c_35=p11_3;
    double c_36=3*p1.y*p3.z;
    double c_37=c_13+c_25+c_14+c_26+c_36+c_27;
    double c_38=p2.z+c_11;
    double c_39=p30_4;
    double c_40=p21_5;
    double c_41=p21_4;
    double c_42=p31_4;
    double c_43=p31_5;
    double c_44=p12_4;
    double c_45=p22_4;
    double c_46=p32_4;
    double c_47=4*p1.z;
    double c_48=3*p3.z;
    double c_49=16*c_6*p2.z;
    double c_50=16*p1.z*c_7;
    double c_51=-(36*p1.z*p2.z*p3.z);
    double c_52=-(12*c_10);
    double c_53=9*p2.y*p3.y*c_29;
    double c_54=c_47+c_48;
    double c_55=2*p2.z;
    double c_56=-(3*p3.z);
    double c_57=-(2*p2.z);
    double c_58=p1.z+c_57+p3.z;
    double c_59=3*p1.z*p2.z;
    double c_60=3*c_9;
    double c_61=p12_5;
    double c_62=p22_5;
    double c_63=p32_5;
    double c_64=-(2*p3.z);
    double c_65=p1.z+p2.z+c_64;
    double c_66=-(3*p2.z);
    double c_67=6*p2.z*p3.z;
    double c_68=-3*c_4;
    double c_69=3*c_7;
    double c_70=9*c_4*c_12;
    double c_71=4*c_23;
    double c_72=3*c_10;
    double c_73=3*p2.z;
    double c_74=p20_3;
    double c_75=p2.y*c_12;
    double c_76=-(3*c_5*p1.z);
    double c_77=3*c_5*p2.z;
    double c_78=-(36*p3.y*p1.z*c_7);
    double c_79=c_28+p2.z;
    double c_80=p3.y*c_79;
    double c_81=-(3*p2.y*c_4*p3.z);
    double c_82=12*p3.y*p1.z*c_9;
    double c_83=-(12*p3.y*p2.z*c_9);
    double c_84=12*p2.y*c_10;
    double c_85=-(4*p2.z);
    double c_86=3*c_2*p3.y*p2.z;
    double c_87=6*p2.y*c_4*p2.z;
    double c_88=-(36*p2.y*c_6*p2.z);
    double c_89=-(12*p3.y*c_8);
    double c_90=-p2.z;
    double c_91=-(3*c_3*p3.z);
    double c_92=-(6*c_2*p3.y*p3.z);
    double c_93=12*p2.y*c_7*p3.z;
    double c_94=-(24*p3.y*c_7*p3.z);
    double c_95=36*p2.y*p1.z*c_9;
    double c_96=24*p2.y*p2.z*c_9;
    double c_97=10*p1.z;
    double c_98=2*p3.z;
    double c_99=4*p3.y*p1.z;
    double c_100=3*p3.y*p2.z;
    double c_101=-(3*p2.y*p3.z);
    double c_102=-80*c_23;
    double c_103=-(9*c_24*p2.z);
    double c_104=3*p1.z;
    double c_105=-(4*p3.z);
    double c_106=36*p1.z*p2.z*p3.z;
    double c_107=12*c_7*p3.z;
    double c_108=12*p2.z*c_9;
    double c_109=6*p1.z;
    double c_110=9*p2.z;
    double c_111=9*p1.z;
    double c_112=-(8*c_3*c_23);
    double c_113=p11_5;
    double c_114=p11_4;
    double c_115=12*c_2*p3.y*c_6*p3.z;
    double c_116=36*p2.y*c_4*p1.z*c_9;
    double c_117=-(4*p1.y*p3.z);
    double c_118=p20_4;
    double c_119=c_90+p3.z;
    double c_120=p1.y*c_119;
    double c_121=c_80+c_75+c_120;
    double c_122=-4*c_3*p1.z;
    double c_123=16*p2.y*c_23;
    double c_124=36*p3.y*c_6*p2.z;
    double c_125=c_80+c_75;
    double c_126=9*c_24*c_125;
    double c_127=24*p3.y*c_6*p3.z;
    double c_128=36*p2.y*p1.z*p2.z*p3.z;
    double c_129=c_30+c_55+c_48;
    double c_130=9*c_24*p2.z;
    double c_131=16*c_8;
    double c_132=-(9*c_24*p3.z);
    double c_133=24*p1.z*c_9;
    double c_134=12*c_10;
    double c_135=p2.z+p3.z;
    double c_136=c_30+p2.z+c_56;
    double c_137=8*p1.z;
    double c_138=3*c_6;
    double c_139=6*c_9;
    double c_140=8*c_23;
    double c_141=18*c_7*p3.z;
    double c_142=p2.z+c_98;
    double c_143=p2.z+c_48;
    double c_144=-(3*c_135);
    double c_145=c_109+c_144;
    double c_146=9*p2.z*c_9;
    double c_147=8*c_5*c_23;
    double c_148=-(12*p2.y*c_4*c_6*p2.z);
    double c_149=-(36*c_2*p3.y*p1.z*c_7);
    double c_150=-(8*c_5*c_8);
    double c_151=-(24*p2.y*c_4*c_7*p3.z);
    double c_152=24*c_2*p3.y*p2.z*c_9;
    double c_153=8*c_3*c_10;
    double c_154=p1.z+c_90;
    double c_155=c_47+c_73;
    double c_156=3*c_8;
    double c_157=6*c_7*p3.z;
    double c_158=2*p2.z*p3.z;
    double c_159=6*c_6;
    double c_160=3*p1.z*p3.z;
    double c_161=9*c_7*p3.z;
    double c_162=6*p1.z*p2.z;
    double c_163=6*c_7;
    double c_164=2*p1.z*p3.z;
    double c_165=3*p2.z*p3.z;
    double c_166=4*p3.z;
    double c_167=3*c_7*p3.z;
    double c_168=3*p2.z*c_9;
    double c_169=4*p2.z*p3.z;
    double c_170=4*p1.z*c_135;
    double c_171=c_138+c_69+c_169+c_60+c_170;
    double c_172=4*c_171;
    double c_173=c_68+c_172;
    double c_174=4*p2.z;
    double c_175=8*p3.z;
    double c_176=-8*c_23;
    double c_177=9*p2.y*p3.y*c_154;
    double c_178=10*p3.z;
    double c_179=c_30+c_110+c_178;
    double c_180=9*p2.z*p3.z;
    double c_181=-(4*c_9);
    double c_182=c_7+c_165+c_139;
    return (-3*p20_5*(c_16+c_0+4*p3.y*p2.z+4*p2.y*c_12+c_18)-3*p10_5*(c_15+c_21+c_0+c_17+c_22+c_19)+3*c_118*p3.x*c_37+p10_3*(-20*
        c_1*p2.y*p1.z-8*p1.y*c_2*p1.z-2*c_3*p1.z+20*c_1*p3.y*p1.z+8*p1.y*c_4*p1.z+2*c_5*p1.z-4*c_1*p2.y*p2.z-4*p1.y*c_2*
        p2.z-2*c_3*p2.z+18*c_1*p3.y*p2.z+9*p1.y*p2.y*p3.y*p2.z+c_86+9*p1.y*c_4*p2.z+3*p2.y*c_4*p2.z+c_77-80*p1.y*c_6*p2.z-16*
        p2.y*c_6*p2.z-72*p3.y*c_6*p2.z-32*p1.y*p1.z*c_7-16*p2.y*p1.z*c_7+c_78-8*p1.y*c_8-8*p2.y*c_8+c_89-18*c_1*p2.y*p3.z-9*
        p1.y*c_2*p3.z+c_91+4*c_1*p3.y*p3.z-9*p1.y*p2.y*p3.y*p3.z-3*c_2*p3.y*p3.z+4*p1.y*c_4*p3.z+c_81+2*c_5*p3.z+80*p1.y*
        c_6*p3.z+72*p2.y*c_6*p3.z+16*p3.y*c_6*p3.z+c_128-36*p3.y*p1.z*p2.z*p3.z+c_93-12*p3.y*c_7*p3.z+32*p1.y*p1.z*
        c_9+c_95+16*p3.y*p1.z*c_9+12*p2.y*p2.z*c_9+c_83+8*p1.y*c_10+c_84+8*p3.y*c_10+9*p2.x*p3.x*(-(p3.y*p1.z)-p1.y*p2.z+p3.y*
        p2.z+c_75+p1.y*p3.z)+3*c_24*(c_13+c_99+c_14+c_100+c_117+c_101)-3*c_32*c_20)-3*p10_4*(p2.x*c_20+p3.x*(-3*p2.y*p1.z+c_21+3*
        p1.y*p2.z+c_17+c_22+c_19))+c_74*(-18*c_2*p3.y*p1.z+c_33+c_76+8*p2.y*c_23+c_34-20*c_2*p3.y*p2.z-8*p2.y*c_4*p2.z-2*c_5*
        p2.z+32*p2.y*c_6*p2.z+c_124+80*p2.y*p1.z*c_7+72*p3.y*p1.z*c_7-4*c_2*p3.y*p3.z-4*p2.y*c_4*p3.z-2*c_5*p3.z+12*p3.y*c_6*
        p3.z+36*p3.y*p1.z*p2.z*p3.z-80*p2.y*c_7*p3.z-16*p3.y*c_7*p3.z+c_82-32*p2.y*p2.z*c_9-16*p3.y*p2.z*c_9-8*p2.y*c_10-8*
        p3.y*c_10+c_35*c_129+3*c_24*(c_13+c_25+c_26+c_27)+c_1*(3*p3.y*c_29+p2.y*(c_47+8*p2.z+c_31))+p1.y*(c_140+c_103+c_49+c_50-3*
        c_4*c_12+9*c_24*p3.z-12*c_6*p3.z+c_51-72*c_7*p3.z-12*p1.z*c_9-36*p2.z*c_9+c_52+c_53+2*c_2*(c_30+10*p2.z+c_31)))+c_32*p3.x*
        (18*c_3*p1.z+c_33-9*c_5*p1.z-12*p2.y*c_23+c_34+20*c_3*p2.z-6*p2.y*c_4*p2.z-4*c_5*p2.z+c_88+24*p3.y*c_6*p2.z-72*p2.y*
        p1.z*c_7+36*p3.y*p1.z*c_7+80*p2.y*c_8+16*p3.y*c_8-3*c_35*c_38+4*c_3*p3.z-6*p2.y*c_4*p3.z-8*c_5*p3.z-12*p2.y*c_6*
        p3.z+c_127-36*p2.y*p1.z*p2.z*p3.z+48*p3.y*p1.z*p2.z*p3.z-12*p2.y*p1.z*c_9+36*p3.y*p1.z*c_9-24*p2.y*p2.z*c_9-24*p3.y*
        p2.z*c_9-16*p2.y*c_10-32*p3.y*c_10+3*c_24*c_37+3*c_1*(-(p3.y*c_65)+p2.y*(p1.z+c_66+c_98))+3*p1.y*(-(p2.y*p3.y*
        (p1.z+c_73+c_105))-c_4*c_136+3*c_2*c_58+4*c_38*(c_6+c_59+c_163+c_164+c_67+c_60)))+p2.x*(9*c_39*p2.y*p1.z+9*c_24*c_3*p1.z+12*c_40*
        p1.z-9*c_39*p3.y*p1.z+9*c_24*c_2*p3.y*p1.z-9*c_41*p3.y*p1.z-9*c_3*c_4*p1.z-18*c_24*c_5*p1.z-9*c_2*c_5*p1.z-9*p2.y*c_42*
        p1.z-9*c_43*p1.z-12*c_24*p2.y*c_23+c_112+12*c_24*p3.y*c_23+12*c_2*p3.y*c_23+12*p2.y*c_4*c_23+12*c_5*c_23-24*p3.y*c_61+8*
        c_24*c_3*p2.z-12*c_39*p3.y*p2.z+6*c_24*c_2*p3.y*p2.z-4*c_24*c_5*p2.z-24*c_24*p2.y*c_6*p2.z-32*c_3*c_6*p2.z+12*c_24*p3.y*
        c_6*p2.z+36*c_2*p3.y*c_6*p2.z+24*p2.y*c_4*c_6*p2.z+12*c_5*c_6*p2.z-24*p3.y*c_44*p2.z-36*c_24*p2.y*p1.z*c_7-80*c_3*
        p1.z*c_7+12*c_24*p3.y*p1.z*c_7+72*c_2*p3.y*p1.z*c_7+36*p2.y*c_4*p1.z*c_7+12*c_5*p1.z*c_7-24*p3.y*c_23*c_7+32*c_24*p2.y*
        c_8+16*c_24*p3.y*c_8-80*c_2*p3.y*c_8-32*p2.y*c_4*c_8+c_150-24*p3.y*c_6*c_8-24*p3.y*p1.z*c_45+32*p3.y*c_62+12*c_39*p2.y*
        p3.z+4*c_24*c_3*p3.z-12*c_40*p3.z+6*c_24*c_2*p3.y*p3.z-12*c_41*p3.y*p3.z-12*c_3*c_4*p3.z-20*c_24*c_5*p3.z-12*c_2*c_5*
        p3.z-12*p2.y*c_42*p3.z-12*c_43*p3.z-24*c_24*p2.y*c_6*p3.z+36*c_24*p3.y*c_6*p3.z+c_115+24*p2.y*c_4*c_6*p3.z+36*c_5*c_6*
        p3.z-24*p3.y*c_44*p3.z-48*c_24*p2.y*p1.z*p2.z*p3.z+36*c_24*p3.y*p1.z*p2.z*p3.z+36*c_2*p3.y*p1.z*p2.z*p3.z+48*p2.y*
        c_4*p1.z*p2.z*p3.z+36*c_5*p1.z*p2.z*p3.z-24*p3.y*c_23*p2.z*p3.z+24*c_24*p2.y*c_7*p3.z+80*c_3*c_7*p3.z+24*c_24*p3.y*
        c_7*p3.z+c_151-16*c_5*c_7*p3.z-24*p3.y*c_6*c_7*p3.z-24*p3.y*p1.z*c_8*p3.z+32*p3.y*c_45*p3.z-36*c_24*p2.y*p1.z*c_9+72*
        c_24*p3.y*p1.z*c_9+12*c_2*p3.y*p1.z*c_9+c_116+72*c_5*p1.z*c_9-24*p3.y*c_23*c_9+32*c_3*p2.z*c_9+c_152-16*c_5*p2.z*c_9-24*
        p3.y*c_6*p2.z*c_9-24*p3.y*p1.z*c_7*c_9+32*p3.y*c_8*c_9-16*c_24*p2.y*c_10+c_153-80*c_24*p3.y*c_10+16*c_2*p3.y*c_10+16*
        p2.y*c_4*c_10-24*p3.y*c_6*c_10-24*p3.y*p1.z*p2.z*c_10+32*p3.y*c_7*c_10-24*p3.y*p1.z*c_46+32*p3.y*p2.z*c_46+32*p3.y*
        c_63+3*c_113*c_54+3*c_114*(c_15+c_25+c_19+3*p3.y*p3.z)+c_35*(-3*c_24*p2.z+c_49+c_50+8*c_8-9*c_4*c_12+3*c_24*p3.z-72*c_6*
        p3.z+c_51-12*c_7*p3.z-36*p1.z*c_9-12*p2.z*c_9+c_52+c_53+3*c_2*c_54)+c_1*(9*c_2*p3.y*c_29+3*c_3*c_54+3*c_24*(-(p3.y*
        (p1.z+c_55+c_56))+p2.y*c_58)+3*p3.y*c_12*(c_68+4*(c_159+c_59+c_7+6*p1.z*p3.z+c_158+c_60))-p2.y*(c_70+4*(c_71-6*p1.z*c_7-8*c_8+9*c_6*
        p3.z+12*p1.z*p2.z*p3.z+c_161+6*p1.z*c_9+6*p2.z*c_9+c_72)))+p1.y*(-9*c_42*p1.z+36*c_4*c_23-32*c_61+24*c_4*c_6*p2.z-32*
        c_44*p2.z+12*c_4*p1.z*c_7-32*c_23*c_7-32*c_6*c_8-32*p1.z*c_45-32*c_62-9*c_39*c_38+9*c_42*p3.z+36*c_4*c_6*p3.z+24*c_44*p3.z+12*
        c_4*p1.z*p2.z*p3.z+24*c_23*p2.z*p3.z-12*c_4*c_7*p3.z+24*c_6*c_7*p3.z+24*p1.z*c_8*p3.z+24*c_45*p3.z+24*c_23*c_9-36*
        c_4*p2.z*c_9+24*c_6*p2.z*c_9+24*p1.z*c_7*c_9+24*c_8*c_9-72*c_4*c_10+24*c_6*c_10+24*p1.z*p2.z*c_10+24*c_7*c_10+24*p1.z*
        c_46+24*p2.z*c_46+24*c_63+9*c_3*p3.y*c_29+3*c_41*c_54+3*c_24*(-3*c_4*c_65+c_2*(c_30+c_66+p3.z)+p2.y*p3.y*(p1.z+c_85+c_48)+4*
        c_38*(c_6+2*p1.z*p2.z+c_69+c_160+c_67+c_139))+3*p2.y*p3.y*c_12*c_173-c_2*(c_70+4*(c_71-20*c_8+c_141+c_146+c_72+3*c_6*(c_55+p3.z)+3*
        p1.z*p3.z*(c_73+p3.z)))))+p10_2*(-3*c_74*c_20+9*c_32*p3.x*c_121+p2.x*(c_122-3*c_2*p3.y*p1.z-3*p2.y*c_4*
        p1.z+c_76+c_123+72*p3.y*c_23-8*c_3*p2.z+9*c_2*p3.y*p2.z+c_87+c_77-24*p2.y*p1.z*c_7+c_78-32*p2.y*c_8-36*p3.y*c_8+c_126-9*c_3*
        p3.z+c_92+c_81+36*p2.y*c_6*p3.z+36*p3.y*c_6*p3.z+48*p2.y*p1.z*p2.z*p3.z-12*p3.y*p1.z*p2.z*p3.z+36*p2.y*c_7*p3.z+c_94+24*
        p2.y*p1.z*c_9+c_82+c_96+c_83+c_84+9*c_1*p3.y*(-2*p1.z+p2.z+p3.z)+2*c_35*(c_97+c_55+c_31)-p1.y*(c_102+c_130+24*p1.z*
        c_7+c_131+c_4*(c_111-6*p2.z+c_56)+c_132+72*c_6*p3.z+c_106+c_107+36*p1.z*c_9+c_108+c_134+3*p2.y*p3.y*(c_104+c_85+p3.z)+c_2*
        (c_109+6*p2.z+c_31)))+p3.x*(3*c_3*p1.z+3*c_2*p3.y*p1.z+3*p2.y*c_4*p1.z+4*c_5*p1.z-72*p2.y*c_23-16*p3.y*c_23+c_86+c_87+9*
        c_5*p2.z+c_88-36*p3.y*c_6*p2.z-12*p2.y*p1.z*c_7-24*p3.y*p1.z*c_7+c_89+9*c_1*p2.y*(c_30+c_90+c_11)+c_91+c_92-9*p2.y*
        c_4*p3.z+8*c_5*p3.z+12*p2.y*p1.z*p2.z*p3.z-48*p3.y*p1.z*p2.z*p3.z+c_93+c_94+c_95+24*p3.y*p1.z*c_9+c_96-36*p3.y*p2.z*
        c_9+36*p2.y*c_10+32*p3.y*c_10-2*c_35*(c_97+c_110+c_98)+3*c_24*(c_13+c_99+c_100+c_101)+p1.y*(c_102+c_103+72*c_6*p2.z+36*
        p1.z*c_7+12*c_8+3*p2.y*p3.y*(c_104+p2.z+c_105)-12*c_24*p3.z+c_106+c_107+c_133+c_108+16*c_10+c_4*(c_109+c_110+6*p3.z)+c_2*
        (c_111-3*c_142))))+p1.x*(-80*c_1*p2.y*c_23-32*p1.y*c_2*c_23+c_112+80*c_1*p3.y*c_23+32*p1.y*c_4*c_23+c_147+32*p2.y*c_61-32*
        p3.y*c_61-12*c_113*p2.z-12*c_114*p2.y*p2.z-12*c_35*c_2*p2.z-12*c_1*c_3*p2.z-12*p1.y*c_41*p2.z-12*c_40*p2.z+9*c_114*p3.y*
        p2.z+9*c_35*p2.y*p3.y*p2.z+9*c_1*c_2*p3.y*p2.z+9*p1.y*c_3*p3.y*p2.z+9*c_41*p3.y*p2.z+9*c_35*c_4*p2.z+9*c_1*p2.y*c_4*
        p2.z+9*p1.y*c_2*c_4*p2.z+9*c_3*c_4*p2.z+9*c_1*c_5*p2.z+9*p1.y*p2.y*c_5*p2.z+9*c_2*c_5*p2.z+9*p1.y*c_42*p2.z+9*p2.y*
        c_42*p2.z+9*c_43*p2.z+80*c_35*c_6*p2.z-24*p1.y*c_2*c_6*p2.z-16*c_3*c_6*p2.z-72*c_1*p3.y*c_6*p2.z-36*p1.y*p2.y*p3.y*
        c_6*p2.z-12*c_2*p3.y*c_6*p2.z-36*p1.y*c_4*c_6*p2.z+c_148-12*c_5*c_6*p2.z+32*p2.y*c_44*p2.z+24*p3.y*c_44*p2.z+32*c_35*
        p1.z*c_7+24*c_1*p2.y*p1.z*c_7-16*c_3*p1.z*c_7-36*c_1*p3.y*p1.z*c_7-48*p1.y*p2.y*p3.y*p1.z*c_7+c_149-24*p1.y*c_4*p1.z*
        c_7-24*p2.y*c_4*p1.z*c_7-12*c_5*p1.z*c_7+32*p2.y*c_23*c_7+24*p3.y*c_23*c_7+8*c_35*c_8+16*c_1*p2.y*c_8+16*p1.y*c_2*c_8-12*
        c_1*p3.y*c_8-36*p1.y*p2.y*p3.y*c_8-72*c_2*p3.y*c_8-12*p1.y*c_4*c_8-36*p2.y*c_4*c_8-12*c_5*c_8+32*p2.y*c_6*c_8+24*p3.y*
        c_6*c_8+32*p2.y*p1.z*c_45+24*p3.y*p1.z*c_45+32*p2.y*c_62+24*p3.y*c_62+12*c_113*p3.z-9*c_114*p2.y*p3.z-9*c_35*c_2*p3.z-9*
        c_1*c_3*p3.z-9*p1.y*c_41*p3.z-9*c_40*p3.z+12*c_114*p3.y*p3.z-9*c_35*p2.y*p3.y*p3.z-9*c_1*c_2*p3.y*p3.z-9*p1.y*c_3*
        p3.y*p3.z-9*c_41*p3.y*p3.z+12*c_35*c_4*p3.z-9*c_1*p2.y*c_4*p3.z-9*p1.y*c_2*c_4*p3.z-9*c_3*c_4*p3.z+12*c_1*c_5*p3.z-9*
        p1.y*p2.y*c_5*p3.z-9*c_2*c_5*p3.z+12*p1.y*c_42*p3.z-9*p2.y*c_42*p3.z+12*c_43*p3.z-80*c_35*c_6*p3.z+72*c_1*p2.y*c_6*
        p3.z+36*p1.y*c_2*c_6*p3.z+12*c_3*c_6*p3.z+36*p1.y*p2.y*p3.y*c_6*p3.z+c_115+24*p1.y*c_4*c_6*p3.z+12*p2.y*c_4*c_6*p3.z+16*
        c_5*c_6*p3.z-24*p2.y*c_44*p3.z-32*p3.y*c_44*p3.z+36*c_1*p2.y*p1.z*p2.z*p3.z+48*p1.y*c_2*p1.z*p2.z*p3.z+36*c_3*
        p1.z*p2.z*p3.z-36*c_1*p3.y*p1.z*p2.z*p3.z+12*c_2*p3.y*p1.z*p2.z*p3.z-48*p1.y*c_4*p1.z*p2.z*p3.z-12*p2.y*c_4*
        p1.z*p2.z*p3.z-36*c_5*p1.z*p2.z*p3.z-24*p2.y*c_23*p2.z*p3.z+24*p3.y*c_23*p2.z*p3.z+12*c_1*p2.y*c_7*p3.z+36*p1.y*c_2*
        c_7*p3.z+72*c_3*c_7*p3.z-12*c_1*p3.y*c_7*p3.z-12*p1.y*p2.y*p3.y*c_7*p3.z-24*p1.y*c_4*c_7*p3.z-36*p2.y*c_4*c_7*p3.z-36*
        c_5*c_7*p3.z-24*p2.y*c_6*c_7*p3.z+24*p3.y*c_6*c_7*p3.z-24*p2.y*p1.z*c_8*p3.z+24*p3.y*p1.z*c_8*p3.z-24*p2.y*c_45*
        p3.z+24*p3.y*c_45*p3.z-32*c_35*p1.z*c_9+36*c_1*p2.y*p1.z*c_9+24*p1.y*c_2*p1.z*c_9+12*c_3*p1.z*c_9-24*c_1*p3.y*p1.z*
        c_9+48*p1.y*p2.y*p3.y*p1.z*c_9+24*c_2*p3.y*p1.z*c_9+c_116+16*c_5*p1.z*c_9-24*p2.y*c_23*c_9-32*p3.y*c_23*c_9+12*c_1*p2.y*
        p2.z*c_9+24*p1.y*c_2*p2.z*c_9+36*c_3*p2.z*c_9-12*c_1*p3.y*p2.z*c_9+12*p1.y*p2.y*p3.y*p2.z*c_9+36*c_2*p3.y*p2.z*c_9-36*
        p1.y*c_4*p2.z*c_9-72*c_5*p2.z*c_9-24*p2.y*c_6*p2.z*c_9+24*p3.y*c_6*p2.z*c_9-24*p2.y*p1.z*c_7*c_9+24*p3.y*p1.z*c_7*
        c_9-24*p2.y*c_8*c_9+24*p3.y*c_8*c_9-8*c_35*c_10+12*c_1*p2.y*c_10+12*p1.y*c_2*c_10+12*c_3*c_10-16*c_1*p3.y*c_10+36*p1.y*
        p2.y*p3.y*c_10+36*c_2*p3.y*c_10-16*p1.y*c_4*c_10+72*p2.y*c_4*c_10-24*p2.y*c_6*c_10-32*p3.y*c_6*c_10-24*p2.y*p1.z*p2.z*
        c_10+24*p3.y*p1.z*p2.z*c_10-24*p2.y*c_7*c_10+24*p3.y*c_7*c_10-24*p2.y*p1.z*c_46-32*p3.y*p1.z*c_46-24*p2.y*p2.z*c_46+24*
        p3.y*p2.z*c_46-24*p2.y*c_63-32*p3.y*c_63+3*c_39*(c_99+c_14+c_100+3*p2.y*c_12+c_117)-3*c_118*c_20+9*c_74*p3.x*c_121+3*p2.x*
        p3.x*(3*c_24+3*c_1+3*c_2+4*p2.y*p3.y+3*c_4+4*p1.y*(p2.y+p3.y)-12*c_6-16*p1.z*p2.z-12*c_7-16*p1.z*p3.z-16*p2.z*
        p3.z-12*c_9)*c_121+c_32*(c_122-9*c_2*p3.y*p1.z-6*p2.y*c_4*p1.z+c_76+c_123+36*p3.y*c_23-20*c_3*p2.z+18*c_2*p3.y*p2.z+9*p2.y*
        c_4*p2.z+c_77+24*p2.y*c_6*p2.z+c_124-80*p2.y*c_8-72*p3.y*c_8+c_126-18*c_3*p3.z-9*c_2*p3.y*p3.z+c_81+12*p2.y*c_6*
        p3.z+c_127+c_128+12*p3.y*p1.z*p2.z*p3.z+72*p2.y*c_7*p3.z-36*p3.y*c_7*p3.z+12*p2.y*p1.z*c_9+c_82+36*p2.y*p2.z*c_9+c_83+c_84+c_35*
        (c_137+c_174+c_31)+3*c_1*(p3.y*(-3*p1.z+p2.z+c_98)+p2.y*c_129)-p1.y*(-32*c_23+c_130-24*c_6*p2.z+c_131+3*p2.y*
        p3.y*(c_47+c_66+c_11)+c_132+36*c_6*p3.z+48*p1.z*p2.z*p3.z+36*c_7*p3.z+c_133+24*p2.z*c_9+c_134+c_4*c_145))-c_24*(-3*c_2*p3.y*
        c_136-9*p2.y*c_4*c_65-3*c_3*c_12+c_35*(c_137+c_110+c_166)+c_1*(-9*p2.y*p1.z+6*p3.y*p1.z+6*p2.y*p2.z+9*p3.y*p2.z+c_19+6*
        p3.y*p3.z)+12*p2.y*c_12*(c_138+c_7+c_165+c_139+2*p1.z*c_143)+2*p3.y*(c_140+6*c_8+c_141+36*p2.z*c_9-40*c_10+6*c_6*c_142+6*
        p1.z*p2.z*c_143-c_4*c_179)-p1.y*(3*p2.y*p3.y*(c_47+c_90+c_56)+c_2*c_145+4*(c_176+c_156+c_6*(c_110-6*p3.z)+c_157+c_146+4*
        c_10+6*p1.z*p2.z*c_142))))+p3.x*(9*c_40*p1.z+9*c_41*p3.y*p1.z+9*c_3*c_4*p1.z+9*c_2*c_5*p1.z+9*p2.y*c_42*p1.z-12*c_43*
        p1.z-12*c_3*c_23-12*c_2*p3.y*c_23-12*p2.y*c_4*c_23+c_147+24*p2.y*c_61+12*c_40*p2.z+12*c_41*p3.y*p2.z+12*c_3*c_4*p2.z+12*
        c_2*c_5*p2.z+12*p2.y*c_42*p2.z+12*c_43*p2.z-36*c_3*c_6*p2.z-24*c_2*p3.y*c_6*p2.z+c_148+24*p2.y*c_44*p2.z-72*c_3*p1.z*
        c_7+c_149-12*p2.y*c_4*p1.z*c_7+24*p2.y*c_23*c_7-16*c_2*p3.y*c_8-16*p2.y*c_4*c_8+c_150+24*p2.y*c_6*c_8+24*p2.y*p1.z*c_45-32*
        p2.y*c_62-3*c_113*c_155+3*c_114*(c_13+c_21-3*p2.y*p2.z+c_17)-12*c_3*c_6*p3.z-24*c_2*p3.y*c_6*p3.z-36*p2.y*c_4*c_6*
        p3.z+32*c_5*c_6*p3.z+24*p2.y*c_44*p3.z-36*c_3*p1.z*p2.z*p3.z-48*c_2*p3.y*p1.z*p2.z*p3.z-36*p2.y*c_4*p1.z*p2.z*p3.z+24*
        p2.y*c_23*p2.z*p3.z+16*c_3*c_7*p3.z+c_151-32*c_5*c_7*p3.z+24*p2.y*c_6*c_7*p3.z+24*p2.y*p1.z*c_8*p3.z-32*p2.y*c_45*
        p3.z-12*c_3*p1.z*c_9-36*c_2*p3.y*p1.z*c_9-72*p2.y*c_4*p1.z*c_9+80*c_5*p1.z*c_9+24*p2.y*c_23*c_9+16*c_3*p2.z*c_9+c_152-80*
        c_5*p2.z*c_9+24*p2.y*c_6*p2.z*c_9+24*p2.y*p1.z*c_7*c_9-32*p2.y*c_8*c_9+c_153+32*c_2*p3.y*c_10+80*p2.y*c_4*c_10+24*p2.y*
        c_6*c_10+24*p2.y*p1.z*p2.z*c_10-32*p2.y*c_7*c_10+24*p2.y*p1.z*c_46-32*p2.y*p2.z*c_46-32*p2.y*c_63+3*c_39*
        (c_13+c_99+c_14+c_26+c_117+c_27)+c_35*(9*c_2*c_154+c_177-3*c_4*c_155+4*(c_156+2*c_6*(c_110+c_64)+c_167+c_168-2*c_10+p1.z*(9*c_7+c_180+c_181)))+c_1*
        (9*c_3*c_154+9*c_2*p3.y*c_154-3*c_5*c_155+4*p3.y*(c_71+9*c_6*p2.z+c_156+c_157+c_146-8*c_10+6*p1.z*(c_7+c_158-c_9))-3*
        p2.y*c_154*(c_68+4*(c_159+c_162+c_69+c_160+c_158+c_9)))+p1.y*(9*c_41*c_154+9*c_3*p3.y*c_154-3*c_42*c_155+4*c_4*(c_71+c_156+c_161+18*
        p2.z*c_9-20*c_10+3*c_6*c_142+3*p1.z*p2.z*c_143)-3*c_2*c_154*(c_68+4*(c_138+c_162+c_163+c_164+c_165+c_9))+8*(4*c_61-3*
        c_62-3*c_45*p3.z-3*c_8*c_9-3*c_7*c_10-3*p2.z*c_46+4*c_63+c_44*(-3*p2.z+c_166)+c_23*(-3*c_7-3*p2.z*p3.z+4*c_9)-c_6*
        (c_156+c_167+c_168-4*c_10)-p1.z*(3*c_45+3*c_8*p3.z+3*c_7*c_9+3*p2.z*c_10-4*c_46))-3*p2.y*p3.y*c_154*c_173)+c_24*(-(c_35*
        (c_30+c_73+c_98))+c_2*p3.y*(c_111+c_174+c_175)+c_3*(c_104+2*c_135)-8*p3.y*c_154*(c_6+c_7+c_169+10*c_9+p1.z*(p2.z+c_166))+c_1*(3*p2.y*
        c_154-p3.y*(c_47+c_110+c_175))+p1.y*(c_176+3*c_2*c_154+c_177+4*c_6*(c_73+c_105)-2*c_4*c_179+4*p1.z*(c_69+c_180+c_181)+12*
        p2.z*c_182)+2*p2.y*(-6*c_23-6*c_6*c_143+4*p2.z*(c_7+c_158+2*c_9)-6*p1.z*c_182+c_4*(c_111+2*(p2.z+5*p3.z))))))/double(5040);
}

double trig::c41() const{
    double p12_2=p1.z*p1.z;
    double p12_3=p1.z*p12_2;
    double p12_4=p1.z*p12_3;
    double p22_2=p2.z*p2.z;
    double p22_3=p2.z*p22_2;
    double p22_4=p2.z*p22_3;
    double p32_2=p3.z*p3.z;
    double p32_3=p3.z*p32_2;
    double p32_4=p3.z*p32_3;
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p20_2=p2.x*p2.x;
    double p20_3=p2.x*p20_2;
    double p20_4=p2.x*p20_3;
    double p30_2=p3.x*p3.x;
    double p10_2=p1.x*p1.x;
    double p10_3=p1.x*p10_2;
    double p10_4=p1.x*p10_3;
    double c_0=p12_2;
    double c_1=p22_2;
    double c_2=p32_2;
    double c_3=-p3.z;
    double c_4=3*c_0;
    double c_5=4*p2.z;
    double c_6=c_5+p3.z;
    double c_7=3*p1.z*c_6;
    double c_8=p2.z+c_3;
    double c_9=-c_2;
    double c_10=3*p2.z*p3.z;
    double c_11=5*c_2;
    double c_12=-(5*c_1);
    double c_13=-(3*p2.z*p3.z);
    double c_14=-(3*c_2);
    double c_15=p1.z+c_3;
    double c_16=2*p3.z;
    double c_17=3*p1.z*p2.z;
    double c_18=4*p1.z;
    double c_19=2*p2.z;
    double c_20=2*c_0;
    double c_21=-c_1;
    double c_22=2*p2.z*p3.z;
    double c_23=p12_4;
    double c_24=p11_2;
    double c_25=p21_2;
    double c_26=p31_2;
    double c_27=p12_3;
    double c_28=p11_3;
    double c_29=p21_3;
    double c_30=p31_3;
    double c_31=p22_3;
    double c_32=p22_4;
    double c_33=p32_3;
    double c_34=p32_4;
    double c_35=-p2.z;
    double c_36=3*p1.z;
    double c_37=3*p3.z;
    double c_38=p1.z*p3.z;
    double c_39=-(2*c_2);
    double c_40=p1.z+c_35;
    double c_41=3*p2.z;
    double c_42=2*p1.z*p3.z;
    double c_43=-(2*c_1);
    double c_44=-(2*p2.z*p3.z);
    double c_45=p20_2;
    double c_46=p30_2;
    double c_47=2*p1.z*p2.z;
    double c_48=2*c_1;
    double c_49=3*p1.z*p3.z;
    double c_50=p2.z*p3.z;
    double c_51=2*p1.z;
    double c_52=c_19+c_37;
    double c_53=p2.z+p3.z;
    double c_54=2*c_53;
    double c_55=c_36+c_54;
    double c_56=c_41+p3.z;
    double c_57=12*p3.y*c_23;
    double c_58=-(24*p2.y*c_27*p2.z);
    double c_59=24*p3.y*c_27*p3.z;
    double c_60=24*p3.y*c_0*p2.z*p3.z;
    double c_61=-(3*c_25*p3.y*c_2);
    double c_62=12*p2.y*c_1*c_2;
    double c_63=-(12*p3.y*c_1*c_2);
    double c_64=-(4*p2.y*c_34);
    double c_65=2*c_2;
    double c_66=4*p3.z;
    double c_67=5*c_1;
    double c_68=8*p2.z*p3.z;
    double c_69=p2.z+c_66;
    double c_70=4*c_0;
    double c_71=3*p1.z*c_53;
    double c_72=3*c_1;
    double c_73=3*c_2;
    double c_74=-(12*p2.y*c_23);
    double c_75=3*p2.y*c_26*c_1;
    double c_76=4*p3.y*c_32;
    double c_77=-(24*p2.y*c_0*p2.z*p3.z);
    double c_78=p2.z+c_37;
    double c_79=-(3*c_1);
    double c_80=-(12*p2.z*p3.z);
    double c_81=-(p2.z*p3.z);
    double c_82=3*p1.z*c_69;
    double c_83=c_51+c_41+c_16;
    double c_84=c_51+c_19+c_37;
    double c_85=-3*p2.z;
    double c_86=5*p3.z;
    double c_87=-p1.z;
    double c_88=c_87+p2.z;
    double c_89=p3.y*c_88;
    double c_90=p2.y*c_15;
    double c_91=c_35+p3.z;
    double c_92=p1.y*c_91;
    double c_93=c_89+c_90+c_92;
    double c_94=p20_3;
    double c_95=5*c_0;
    double c_96=-(10*c_1);
    double c_97=-(6*p2.y*c_26*c_0);
    double c_98=4*p2.y*c_23;
    double c_99=24*p3.y*c_27*p2.z;
    double c_100=-(12*p2.y*c_0*c_1);
    double c_101=-(24*p3.y*p1.z*c_31);
    double c_102=-(9*c_25*p3.y*p1.z*p3.z);
    double c_103=-(9*p2.y*c_26*p1.z*p3.z);
    double c_104=-(9*c_30*p1.z*p3.z);
    double c_105=6*p2.y*c_26*p2.z*p3.z;
    double c_106=9*c_30*p2.z*p3.z;
    double c_107=-(9*p2.y*c_26*c_2);
    double c_108=24*p3.y*c_0*c_2;
    double c_109=24*p2.y*p1.z*p2.z*c_2;
    double c_110=-(24*p3.y*c_1*c_2);
    double c_111=12*p3.y*p1.z*c_33;
    double c_112=24*p2.y*p2.z*c_33;
    double c_113=-(12*p3.y*p2.z*c_33);
    double c_114=12*p2.y*c_34;
    double c_115=10*c_0;
    double c_116=c_20+c_21+c_49+c_22+c_2;
    double c_117=p2.y*c_116;
    double c_118=27*c_46*c_2;
    double c_119=-(24*p1.z*p2.z*c_2);
    double c_120=-(12*p2.z*c_33);
    double c_121=-(12*c_34);
    double c_122=c_36+c_41+p3.z;
    double c_123=-(2*p1.z*p3.z);
    double c_124=c_0+c_43+c_123+c_13+c_9;
    double c_125=9*p2.z*p3.z;
    double c_126=9*c_2;
    double c_127=6*c_25*p3.y*c_0;
    double c_128=-(4*p3.y*c_23);
    double c_129=9*c_29*p1.z*p2.z;
    double c_130=9*c_25*p3.y*p1.z*p2.z;
    double c_131=9*p2.y*c_26*p1.z*p2.z;
    double c_132=9*c_25*p3.y*c_1;
    double c_133=-(24*p2.y*c_0*c_1);
    double c_134=-(12*p2.y*p1.z*c_31);
    double c_135=-(12*p3.y*c_32);
    double c_136=-(24*p2.y*c_27*p3.z);
    double c_137=-(9*c_29*p2.z*p3.z);
    double c_138=-(6*c_25*p3.y*p2.z*p3.z);
    double c_139=-(24*p3.y*p1.z*c_1*p3.z);
    double c_140=12*p2.y*c_31*p3.z;
    double c_141=-(24*p3.y*c_31*p3.z);
    double c_142=12*p3.y*c_0*c_2;
    double c_143=24*p2.y*c_1*c_2;
    double c_144=24*p2.y*p1.z*c_33;
    double c_145=-10*c_0;
    double c_146=8*p1.z*p3.z;
    double c_147=12*p2.z*p3.z;
    double c_148=-(10*c_2);
    double c_149=-(2*p1.z*p2.z);
    double c_150=-(3*p1.z*p2.z);
    double c_151=c_20+c_17+c_1+c_22+c_9;
    double c_152=c_36+p2.z+c_37;
    double c_153=-3*c_0;
    double c_154=6*c_2;
    return (-3*p10_4*(-3*p1.y*c_8*(5*p1.z+p2.z+p3.z)+p3.y*(-5*c_0-12*p1.z*p2.z+c_79+c_38+c_13+c_2)+p2.y*(c_95-p1.z*p2.z+c_21+12*
        p1.z*p3.z+c_10+c_73))-3*p20_4*(3*p2.y*c_15*(p1.z+5*p2.z+p3.z)+p1.y*(c_0+c_12+p1.z*(p2.z-3*p3.z)+c_80+c_14)+p3.y*
        (c_4+c_67+c_81+c_9+c_7))+3*c_94*p3.x*(p2.y*(c_4+c_96+c_68+c_11+c_7)-3*(p1.y*c_8*(p1.z+c_5+c_16)+p3.y*(c_0+c_17+c_48+c_42+c_9)))-3*
        p10_3*(p3.x*p1.y*(c_145+12*p1.z*p2.z+c_72+c_146+c_10+c_11)+p2.x*p1.y*(c_115+c_12+c_13+c_14-4*p1.z*c_52)-3*p3.x*
        (p2.y*c_15*(c_18+p2.z+c_16)+p3.y*c_151)+3*p2.x*(p3.y*c_40*(c_18+c_19+p3.z)+c_117))+p10_2*(-20*p2.y*c_23+20*p3.y*c_23-10*
        c_28*p1.z*p2.z-6*c_24*p2.y*p1.z*p2.z-3*p1.y*c_25*p1.z*p2.z-c_29*p1.z*p2.z+36*c_24*p3.y*p1.z*p2.z+18*p1.y*p2.y*
        p3.y*p1.z*p2.z+6*c_25*p3.y*p1.z*p2.z+18*p1.y*c_26*p1.z*p2.z+6*p2.y*c_26*p1.z*p2.z+6*c_30*p1.z*p2.z-40*p1.y*c_27*
        p2.z+c_58-48*p3.y*c_27*p2.z-2*c_28*c_1-3*c_24*p2.y*c_1-3*p1.y*c_25*c_1-2*c_29*c_1+9*c_24*p3.y*c_1+12*p1.y*p2.y*p3.y*
        c_1+c_132+6*p1.y*c_26*c_1+6*p2.y*c_26*c_1+3*c_30*c_1-24*p1.y*c_0*c_1+c_133-36*p3.y*c_0*c_1-12*p1.y*p1.z*c_31-20*p2.y*p1.z*
        c_31+c_101-4*p1.y*c_32-12*p2.y*c_32+c_135+10*c_28*p1.z*p3.z-36*c_24*p2.y*p1.z*p3.z-18*p1.y*c_25*p1.z*p3.z-6*c_29*p1.z*
        p3.z+6*c_24*p3.y*p1.z*p3.z-18*p1.y*p2.y*p3.y*p1.z*p3.z-6*c_25*p3.y*p1.z*p3.z+3*p1.y*c_26*p1.z*p3.z-6*p2.y*c_26*
        p1.z*p3.z+c_30*p1.z*p3.z+40*p1.y*c_27*p3.z+48*p2.y*c_27*p3.z+c_59-9*c_24*p2.y*p2.z*p3.z-12*p1.y*c_25*p2.z*p3.z+c_137+9*
        c_24*p3.y*p2.z*p3.z-3*c_25*p3.y*p2.z*p3.z+12*p1.y*c_26*p2.z*p3.z+3*p2.y*c_26*p2.z*p3.z+c_106+36*p2.y*c_0*p2.z*
        p3.z-36*p3.y*c_0*p2.z*p3.z+24*p2.y*p1.z*c_1*p3.z+c_139+c_140-12*p3.y*c_31*p3.z+2*c_28*c_2-9*c_24*p2.y*c_2-6*p1.y*c_25*
        c_2-3*c_29*c_2+3*c_24*p3.y*c_2-12*p1.y*p2.y*p3.y*c_2-6*c_25*p3.y*c_2+3*p1.y*c_26*c_2+c_107+2*c_30*c_2+24*p1.y*c_0*c_2+36*
        p2.y*c_0*c_2+c_108+c_109-24*p3.y*p1.z*p2.z*c_2+c_62+c_63+12*p1.y*p1.z*c_33+c_144+20*p3.y*p1.z*c_33+12*p2.y*p2.z*
        c_33+c_113+4*p1.y*c_34+c_114+12*p3.y*c_34+9*p2.x*p3.x*c_93*c_55+9*c_46*(p2.y*c_15*c_152+p3.y*(c_20+c_47+c_1+c_38+c_10+c_39)+p1.y*
        (c_20+c_21+c_44+c_39-p1.z*c_56))-9*c_45*(p3.y*c_40*c_122+p2.y*(c_20+p1.z*p2.z+c_43+c_42+c_10+c_2)+p1.y*(c_20+c_43+c_44+c_9-p1.z*
        c_78)))+c_45*(2*c_29*c_0-9*c_25*p3.y*c_0+c_97-3*c_30*c_0+c_98+c_57+10*c_29*p1.z*p2.z-36*c_25*p3.y*p1.z*p2.z-18*
        p2.y*c_26*p1.z*p2.z-6*c_30*p1.z*p2.z+12*p2.y*c_27*p2.z+c_99+24*p2.y*c_0*c_1+36*p3.y*c_0*c_1+40*p2.y*p1.z*c_31+48*
        p3.y*p1.z*c_31-20*p3.y*c_32+c_102-12*p2.y*c_26*p1.z*p3.z+c_104+12*p3.y*c_27*p3.z-10*c_29*p2.z*p3.z+c_138-3*p2.y*c_26*
        p2.z*p3.z-c_30*p2.z*p3.z+c_60+36*p3.y*p1.z*c_1*p3.z-40*p2.y*c_31*p3.z+c_141-2*c_29*c_2+c_61-3*p2.y*c_26*c_2-2*c_30*
        c_2+c_142+24*p3.y*p1.z*p2.z*c_2-24*p2.y*c_1*c_2+c_110+c_111-12*p2.y*p2.z*c_33-20*p3.y*p2.z*c_33+c_64-12*p3.y*c_34+c_28*
        (c_20+3*p3.z*(c_19+p3.z)+p1.z*(p2.z+9*p3.z))+9*c_46*(-(p3.y*(c_0+c_47+c_48+c_49+c_50+c_39))+p2.y*(c_0+c_17+c_43+c_42+c_50+c_65))+p1.y*
        (12*c_23-9*c_46*p1.z*p2.z+20*c_27*p2.z-27*c_46*c_1+24*c_0*c_1+24*p1.z*c_31+20*c_32+9*c_46*p1.z*p3.z-12*c_27*
        p3.z-24*c_0*p2.z*p3.z-36*p1.z*c_1*p3.z-48*c_31*p3.z+c_118-12*c_0*c_2+c_119-36*c_1*c_2-12*p1.z*c_33-24*p2.z*c_33+c_121-6*
        p2.y*p3.y*c_15*c_83-3*c_26*c_15*c_84+3*c_25*(c_0+3*p3.z*c_6+p1.z*c_52))+3*c_24*(-(p3.y*c_15*c_55)+p2.y*(c_0+2*p3.z*c_56+p1.z*
        c_69)))+p2.x*p3.x*(9*c_29*c_0+3*c_25*p3.y*c_0-3*p2.y*c_26*c_0-9*c_30*c_0+c_74+c_57+36*c_29*p1.z*p2.z+c_130-6*p2.y*c_26*
        p1.z*p2.z-9*c_30*p1.z*p2.z+c_58+12*p3.y*c_27*p2.z+10*c_29*c_1+6*c_25*p3.y*c_1+c_75+c_30*c_1-36*p2.y*c_0*c_1+12*p3.y*
        c_0*c_1-48*p2.y*p1.z*c_31+12*p3.y*p1.z*c_31+60*p2.y*c_32+c_76+9*c_29*p1.z*p3.z+6*c_25*p3.y*p1.z*p3.z+c_103-36*c_30*p1.z*
        p3.z-12*p2.y*c_27*p3.z+c_59+c_77+c_60-36*p2.y*p1.z*c_1*p3.z+24*p3.y*p1.z*c_1*p3.z+32*p2.y*c_31*p3.z-c_29*c_2+c_61-6*
        p2.y*c_26*c_2-10*c_30*c_2-12*p2.y*c_0*c_2+36*p3.y*c_0*c_2-24*p2.y*p1.z*p2.z*c_2+36*p3.y*p1.z*p2.z*c_2+c_62+c_63-12*
        p2.y*p1.z*c_33+48*p3.y*p1.z*c_33-32*p3.y*p2.z*c_33+c_64-60*p3.y*c_34-3*c_28*c_8*c_55+3*c_24*(p2.y*(c_4+c_149-6*c_1+c_49+c_65)+p3.y*
        (c_153+c_150+c_43+c_42+c_154))+3*c_46*(-3*p1.y*c_8*(p1.z+c_19+c_66)+3*p2.y*(c_0+c_47+c_21+c_49+c_65)-p3.y*
        (c_4+c_67+c_68+c_148+c_82))+3*p1.y*(-2*p2.y*p3.y*c_8*(p1.z+3*c_53)-c_26*(c_70+c_71+2*(c_1-6*c_2))+c_25*(c_70+c_71+2*(-6*c_1+c_2))+4*
        c_8*(c_27+4*c_31+6*c_1*p3.z+6*p2.z*c_2+4*c_33+2*c_0*c_53+p1.z*(c_72+4*p2.z*p3.z+c_73))))+c_46*(3*c_29*c_0+c_127+9*p2.y*
        c_26*c_0-2*c_30*c_0+c_74+c_128+c_129+12*c_25*p3.y*p1.z*p2.z+c_131-12*p2.y*c_27*p2.z+2*c_29*c_1+3*c_25*p3.y*c_1+c_75+2*c_30*
        c_1+c_100+c_134+12*p2.y*c_32+c_76+6*c_29*p1.z*p3.z+18*c_25*p3.y*p1.z*p3.z+36*p2.y*c_26*p1.z*p3.z-10*c_30*p1.z*p3.z+c_136-12*
        p3.y*c_27*p3.z+c_29*p2.z*p3.z+3*c_25*p3.y*p2.z*p3.z+c_105+10*c_30*p2.z*p3.z+c_77-24*p2.y*p1.z*c_1*p3.z+20*
        p2.y*c_31*p3.z+12*p3.y*c_31*p3.z-36*p2.y*c_0*c_2-24*p3.y*c_0*c_2-36*p2.y*p1.z*p2.z*c_2+c_143+24*p3.y*c_1*c_2-48*p2.y*
        p1.z*c_33-40*p3.y*p1.z*c_33+c_112+40*p3.y*p2.z*c_33+20*p2.y*c_34-c_28*(c_20+p1.z*(9*p2.z+p3.z)+3*p2.z*(p2.z+c_16))+3*
        c_24*(p2.y*c_40*c_55-p3.y*(c_0+p1.z*c_6+2*p2.z*c_78))+3*c_46*(3*p3.y*c_40*(p1.z+p2.z+c_86)+p1.y*(c_0+c_79+c_80-5*c_2+p1.z*
        (c_85+p3.z))+p2.y*(c_4+c_21+c_81+c_11+c_82))+p1.y*(3*c_25*c_40*c_83+6*p2.y*p3.y*c_40*c_84-3*c_26*(c_0+p1.z*(c_41+c_16)+3*
        p2.z*c_69)-4*(3*c_23-3*c_32-6*c_31*p3.z-9*c_1*c_2+c_120+5*c_34+c_27*(c_85+c_86)-3*c_0*(c_1+c_22+c_39)-3*p1.z*(c_31+2*c_1*
        p3.z+3*p2.z*c_2-2*c_33))))+p1.x*(9*c_45*p3.x*c_83*c_93-3*c_94*(3*p3.y*c_40*(c_51+c_5+p3.z)+3*p1.y*c_124+p2.y*(c_95+8*p1.z*
        p2.z+c_96+c_49+c_147+c_73))+p2.x*(c_29*c_0-6*c_25*p3.y*c_0+c_97-6*c_30*c_0+c_98+48*p3.y*c_23+c_99-10*c_29*c_1+36*c_25*p3.y*
        c_1+18*p2.y*c_26*c_1+6*c_30*c_1+c_100-32*p2.y*p1.z*c_31+c_101-60*p2.y*c_32-48*p3.y*c_32-9*c_29*p1.z*p3.z+c_102+c_103+c_104+12*
        p2.y*c_27*p3.z+36*p3.y*c_27*p3.z-36*c_29*p2.z*p3.z-9*c_25*p3.y*p2.z*p3.z+c_105+c_106+24*p2.y*c_0*p2.z*p3.z+12*
        p3.y*c_0*p2.z*p3.z+36*p2.y*p1.z*c_1*p3.z-12*p3.y*p1.z*c_1*p3.z+48*p2.y*c_31*p3.z-36*p3.y*c_31*p3.z-9*c_29*c_2-12*
        c_25*p3.y*c_2+c_107+12*p2.y*c_0*c_2+c_108+c_109+36*p2.y*c_1*c_2+c_110+12*p2.y*p1.z*c_33+c_111+c_112+c_113+c_114+9*c_46*
        (c_89+c_90)*c_84+c_28*(c_115+c_21+36*p1.z*p3.z+c_125+c_126)+3*c_24*(c_117+p3.y*(-12*c_0+c_48+c_49+c_10+4*c_2))+p1.y*(60*c_23-18*
        c_46*p1.z*p2.z+32*c_27*p2.z-18*c_46*c_1+12*c_0*c_1-4*c_32+18*c_46*p1.z*p3.z-48*c_27*p3.z-9*c_46*p2.z*p3.z-36*c_0*p2.z*
        p3.z-24*p1.z*c_1*p3.z-12*c_31*p3.z+c_118-36*c_0*c_2+c_119-12*c_1*c_2-24*p1.z*c_33+c_120+c_121-6*p2.y*p3.y*c_40*c_122+3*
        c_25*c_124+c_26*(-18*c_0+6*c_1-6*p1.z*p3.z+c_125+c_126)))+p3.x*(6*c_29*c_0+c_127+6*p2.y*c_26*c_0-c_30*c_0-48*p2.y*
        c_23+c_128+c_129+c_130+c_131+9*c_30*p1.z*p2.z-36*p2.y*c_27*p2.z-12*p3.y*c_27*p2.z+c_132+12*p2.y*c_26*c_1+9*c_30*c_1+c_133-12*p3.y*
        c_0*c_1+c_134-12*p3.y*p1.z*c_31+c_135+c_136+c_137+c_138+9*p2.y*c_26*p2.z*p3.z+36*c_30*p2.z*p3.z-12*p2.y*c_0*p2.z*p3.z-24*
        p3.y*c_0*p2.z*p3.z+c_139+c_140+c_141-6*c_29*c_2-18*c_25*p3.y*c_2-36*p2.y*c_26*c_2+10*c_30*c_2+c_142+12*p2.y*p1.z*p2.z*
        c_2-36*p3.y*p1.z*p2.z*c_2+c_143-36*p3.y*c_1*c_2+c_144+32*p3.y*p1.z*c_33+36*p2.y*p2.z*c_33-48*p3.y*p2.z*c_33+48*p2.y*
        c_34+60*p3.y*c_34+c_28*(c_145-36*p1.z*p2.z-9*c_1-9*p2.z*p3.z+c_2)+3*c_46*(3*p2.y*c_15*(c_51+p2.z+c_66)+p3.y*
        (c_95+c_17+c_72+c_146+c_147+c_148)+3*p1.y*(c_0+c_149+c_21+c_13+c_39))+3*c_24*(p2.y*(12*c_0+c_150-4*c_1+c_13+c_39)-p3.y*c_151)+p1.y*(6*
        p2.y*p3.y*c_15*c_152+3*c_25*(6*c_0+c_47+c_79+c_13+c_39)+c_26*(c_153+6*p1.z*p2.z+c_72+c_125+c_154)+4*(-15*c_23+3*c_32+4*c_27*
        (c_41-2*p3.z)+3*c_31*p3.z+3*c_1*c_2+3*p2.z*c_33+c_34+c_0*(9*c_1+c_125+c_14)+6*p1.z*p2.z*(c_1+c_50+c_2))))))/double(10080);
}

double trig::c42() const{
    double p12_2=p1.z*p1.z;
    double p12_3=p1.z*p12_2;
    double p22_2=p2.z*p2.z;
    double p22_3=p2.z*p22_2;
    double p32_2=p3.z*p3.z;
    double p32_3=p3.z*p32_2;
    double p30_2=p3.x*p3.x;
    double p30_3=p3.x*p30_2;
    double p30_4=p3.x*p30_3;
    double p30_5=p3.x*p30_4;
    double p10_2=p1.x*p1.x;
    double p10_3=p1.x*p10_2;
    double p10_4=p1.x*p10_3;
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
    double p20_2=p2.x*p2.x;
    double p20_3=p2.x*p20_2;
    double p20_4=p2.x*p20_3;
    double p20_5=p2.x*p20_4;
    double c_0=4*p3.y*p1.z;
    double c_1=-(3*p1.y*p2.z);
    double c_2=-(4*p1.y*p3.z);
    double c_3=-(4*p3.y*p2.z);
    double c_4=4*p2.y*p3.z;
    double c_5=-4*p2.y*p1.z;
    double c_6=-(3*p3.y*p1.z);
    double c_7=4*p1.y*p2.z;
    double c_8=3*p3.y*p2.z;
    double c_9=3*p1.y*p3.z;
    double c_10=3*p2.y*p1.z;
    double c_11=p12_3;
    double c_12=p12_2;
    double c_13=p22_2;
    double c_14=p32_2;
    double c_15=p32_3;
    double c_16=-p3.z;
    double c_17=p1.z+c_16;
    double c_18=-(3*p2.y*p3.z);
    double c_19=c_5+c_6+c_7+c_8+c_9+c_18;
    double c_20=c_10+c_6+c_1+c_3+c_9+c_4;
    double c_21=p30_2;
    double c_22=p10_2;
    double c_23=3*p2.y*c_17;
    double c_24=c_0+c_1+c_8+c_23+c_2;
    double c_25=p22_3;
    double c_26=-(3*p2.y*p1.z*c_13);
    double c_27=-(9*p2.y*c_12*p3.z);
    double c_28=c_22*c_24;
    double c_29=p30_4;
    double c_30=p21_3;
    double c_31=p21_2;
    double c_32=p31_2;
    double c_33=p31_3;
    double c_34=p2.y*c_17;
    double c_35=p21_5;
    double c_36=p21_4;
    double c_37=p31_4;
    double c_38=p31_5;
    double c_39=4*p2.y*p1.z;
    double c_40=3*p2.y*p3.z;
    double c_41=-p1.z;
    double c_42=c_41+p2.z;
    double c_43=p3.y*c_42;
    double c_44=c_43+c_34;
    double c_45=3*c_13;
    double c_46=4*p1.z;
    double c_47=3*p3.z;
    double c_48=c_46+c_47;
    double c_49=3*c_15;
    double c_50=6*c_12;
    double c_51=2*p2.z*p3.z;
    double c_52=3*c_14;
    double c_53=4*c_11;
    double c_54=-(6*p1.z*c_13);
    double c_55=-(8*c_25);
    double c_56=3*c_32*c_17;
    double c_57=9*c_12*p3.z;
    double c_58=12*p1.z*p2.z*p3.z;
    double c_59=9*c_13*p3.z;
    double c_60=6*p1.z*c_14;
    double c_61=6*p2.z*c_14;
    double c_62=p10_4;
    double c_63=p10_3;
    double c_64=p30_3;
    double c_65=-c_32;
    double c_66=3*c_12;
    double c_67=4*p2.z*p3.z;
    double c_68=p2.z+p3.z;
    double c_69=4*p1.z*c_68;
    double c_70=9*p2.z*c_14;
    double c_71=3*p2.z;
    double c_72=3*p2.z*p3.z;
    double c_73=6*c_14;
    double c_74=-p2.z;
    double c_75=9*p3.y*c_12*p2.z;
    double c_76=-(9*p3.y*c_13*p3.z);
    double c_77=3*p3.y*p1.z*c_14;
    double c_78=9*p2.y*p2.z*c_14;
    double c_79=p3.y*p1.z;
    double c_80=-c_79;
    double c_81=-(p1.y*p2.z);
    double c_82=p3.y*p2.z;
    double c_83=p1.y*p3.z;
    double c_84=c_80+c_81+c_82+c_34+c_83;
    double c_85=2*p2.z;
    double c_86=c_85+p3.z;
    double c_87=3*p3.y*c_11;
    double c_88=-(3*p1.y*c_12*p3.z);
    double c_89=6*p3.y*c_12*p3.z;
    double c_90=-(9*p1.y*p2.z*c_14);
    double c_91=c_21*c_20;
    double c_92=-(20*c_25);
    double c_93=4*c_15;
    double c_94=c_71+p3.z;
    double c_95=2*c_33*c_25;
    double c_96=p11_5;
    double c_97=p11_4;
    double c_98=6*p2.y*c_32*c_13*p3.z;
    double c_99=-(6*c_31*p3.y*p2.z*c_14);
    double c_100=-(2*c_30*c_15);
    double c_101=p11_3;
    double c_102=p1.z+c_74;
    double c_103=c_46+c_71;
    double c_104=2*p3.z;
    double c_105=p2.z+c_104;
    double c_106=3*c_25;
    double c_107=6*c_13*p3.z;
    double c_108=p11_2;
    double c_109=9*c_12*p2.z;
    double c_110=-(8*c_15);
    double c_111=-c_14;
    double c_112=c_13+c_51+c_111;
    double c_113=6*p1.z*c_112;
    double c_114=c_65+c_66+c_45+c_67+c_52+c_69;
    double c_115=6*c_13;
    double c_116=p2.z+c_47;
    double c_117=3*c_13*p3.z;
    double c_118=3*p2.z*c_14;
    double c_119=9*p2.z*p3.z;
    double c_120=2*c_30*c_11;
    double c_121=-(2*c_33*c_11);
    double c_122=3*p2.y*c_32*c_12*p2.z;
    double c_123=9*c_31*p3.y*p1.z*c_13;
    double c_124=-(3*c_31*p3.y*c_12*p3.z);
    double c_125=-(9*p2.y*c_32*p1.z*c_14);
    double c_126=-(3*p3.y*p2.z);
    double c_127=c_74+p3.z;
    double c_128=4*p3.z;
    double c_129=c_71+c_128;
    double c_130=p2.z+c_16;
    double c_131=4*p2.z;
    double c_132=c_131+c_47;
    double c_133=8*c_11;
    double c_134=-(4*c_25);
    double c_135=6*p2.z;
    double c_136=-(9*p3.z);
    double c_137=c_135+c_136;
    double c_138=c_12*c_137;
    double c_139=-(9*c_13*p3.z);
    double c_140=-(6*p2.z*c_14);
    double c_141=-(3*c_15);
    double c_142=-(6*p1.z*p3.z*c_86);
    double c_143=-8*c_11;
    double c_144=9*p2.z;
    double c_145=-(6*p3.z);
    double c_146=c_144+c_145;
    double c_147=c_12*c_146;
    double c_148=6*p1.z*p2.z*c_105;
    double c_149=-(c_32*c_129);
    double c_150=-(3*c_32*c_130);
    double c_151=-(3*c_13*p3.z);
    double c_152=-(3*p2.z*c_14);
    double c_153=-20*c_11;
    double c_154=18*c_12*p2.z;
    double c_155=9*c_13;
    double c_156=c_155+c_119+c_73;
    double c_157=p1.z*c_156;
    double c_158=10*c_12;
    double c_159=p2.z*p3.z;
    double c_160=c_158+c_13+c_159+c_14+c_69;
    double c_161=-(4*c_14);
    return (p1.x*c_29*c_24+p30_5*(c_10+c_0+c_1+c_3+c_2+c_4)+p20_5*(c_5+c_6+c_7+c_3+c_9+c_4)+p20_4*(p1.x*c_19+p3.x*c_20)+p20_3*
        (2*p1.y*c_11+2*p2.y*c_11+c_87+4*p1.y*c_12*p2.z+8*p2.y*c_12*p2.z+c_75+4*p1.y*p1.z*c_13+20*p2.y*p1.z*c_13+18*p3.y*p1.z*
        c_13+c_88+3*p3.y*c_12*p3.z-9*p1.y*p1.z*p2.z*p3.z+9*p3.y*p1.z*p2.z*p3.z-18*p1.y*c_13*p3.z-20*p2.y*c_13*p3.z-4*
        p3.y*c_13*p3.z-3*p1.y*p1.z*c_14+c_77+c_90-8*p2.y*p2.z*c_14-4*p3.y*p2.z*c_14-3*p1.y*c_15-2*p2.y*c_15-2*p3.y*c_15+3*
        p1.x*p3.x*c_84+c_22*c_19+c_91)+p1.x*c_21*(-9*p2.y*c_11-4*p3.y*c_11-6*p2.y*c_12*p2.z-3*p3.y*c_12*p2.z+c_26-3*p3.y*p1.z*
        c_13-3*p3.y*c_25+c_27-6*p3.y*c_12*p3.z-3*p2.y*p1.z*p2.z*p3.z-9*p3.y*p1.z*p2.z*p3.z+3*p2.y*c_13*p3.z+c_76+c_78-18*
        p3.y*p2.z*c_14+18*p2.y*c_15+20*p3.y*c_15+c_28+p1.y*(c_143+c_106+c_147+c_107+c_70+c_93+c_148))+c_64*(-3*p2.y*c_11-2*p3.y*
        c_11-3*p2.y*c_12*p2.z+c_26+2*p2.y*c_25+2*p3.y*c_25+c_27-8*p3.y*c_12*p3.z-9*p2.y*p1.z*p2.z*p3.z+4*p2.y*c_13*p3.z+8*
        p3.y*c_13*p3.z-18*p2.y*p1.z*c_14-20*p3.y*p1.z*c_14+4*p2.y*p2.z*c_14+20*p3.y*p2.z*c_14+c_28+p1.y*(-2*c_11+c_12*
        (c_71-4*p3.z)+p1.z*(c_45+c_119+c_161)+3*p2.z*(c_13+c_72+c_73)))+p2.x*(3*c_29*p2.y*p1.z-4*c_35*p1.z-3*c_29*p3.y*p1.z+3*
        c_36*p3.y*p1.z+3*c_30*c_32*p1.z+3*c_31*c_33*p1.z+3*p2.y*c_37*p1.z+3*c_38*p1.z-3*c_21*p2.y*c_11+c_120+3*c_21*p3.y*c_11-3*
        c_31*p3.y*c_11-3*p2.y*c_32*c_11-3*c_33*c_11-4*c_29*p3.y*p2.z-6*c_21*p2.y*c_12*p2.z+8*c_30*c_12*p2.z+3*c_21*p3.y*c_12*
        p2.z-9*c_31*p3.y*c_12*p2.z-6*p2.y*c_32*c_12*p2.z-3*c_33*c_12*p2.z-9*c_21*p2.y*p1.z*c_13+20*c_30*p1.z*c_13+3*c_21*
        p3.y*p1.z*c_13-18*c_31*p3.y*p1.z*c_13-9*p2.y*c_32*p1.z*c_13-3*c_33*p1.z*c_13+8*c_21*p2.y*c_25+4*c_21*p3.y*c_25+20*c_31*
        p3.y*c_25+8*p2.y*c_32*c_25+c_95+3*c_63*p3.x*c_44+4*c_29*p2.y*p3.z+4*c_35*p3.z+4*c_36*p3.y*p3.z+4*c_30*c_32*p3.z+4*c_31*
        c_33*p3.z+4*p2.y*c_37*p3.z+4*c_38*p3.z-6*c_21*p2.y*c_12*p3.z+9*c_21*p3.y*c_12*p3.z+c_124-6*p2.y*c_32*c_12*p3.z-9*
        c_33*c_12*p3.z-12*c_21*p2.y*p1.z*p2.z*p3.z+9*c_21*p3.y*p1.z*p2.z*p3.z-9*c_31*p3.y*p1.z*p2.z*p3.z-12*p2.y*c_32*p1.z*
        p2.z*p3.z-9*c_33*p1.z*p2.z*p3.z+6*c_21*p2.y*c_13*p3.z-20*c_30*c_13*p3.z+6*c_21*p3.y*c_13*p3.z+c_98+4*c_33*c_13*
        p3.z-9*c_21*p2.y*p1.z*c_14+18*c_21*p3.y*p1.z*c_14-3*c_31*p3.y*p1.z*c_14+c_125-18*c_33*p1.z*c_14-8*c_30*p2.z*c_14+c_99+4*
        c_33*p2.z*c_14-4*c_21*p2.y*c_15+c_100-20*c_21*p3.y*c_15-4*c_31*p3.y*c_15-4*p2.y*c_32*c_15-c_96*c_48-c_62*(c_39+3*p3.y*
        p1.z+c_126+c_40)-c_97*(c_39+c_6+c_40+3*p3.y*p3.z)-3*p1.x*p3.x*c_44*(-c_21+c_66+c_45+c_67+c_52+c_69)+c_101*(-4*c_12*p2.z-4*
        p1.z*c_13-2*c_25+3*p2.y*p3.y*c_17+c_56+18*c_12*p3.z+9*p1.z*p2.z*p3.z+c_117+9*p1.z*c_14+c_118+c_49-c_31*c_48)+c_22*(3*
        c_21*c_44+3*p3.y*c_102*(c_50+6*p1.z*p2.z+c_45+3*p1.z*p3.z+c_51+c_14)+p2.y*(c_53+c_54+c_55+c_57+c_58+c_59+c_60+c_61+c_49))+c_108*
        (3*c_31*p3.y*c_17-c_30*c_48-3*p3.y*c_17*(c_65+c_50+3*p1.z*p2.z+c_13+6*p1.z*p3.z+c_51+c_52)+p2.y*
        (c_53+c_54+c_55+c_56+c_57+c_58+c_59+c_60+c_61+c_49))+p1.y*(20*c_22*c_11+4*c_62*p2.z-3*c_63*p3.x*p2.z-3*c_22*c_21*p2.z-3*p1.x*c_64*p2.z-3*
        c_29*p2.z+9*p1.x*p3.x*c_12*p2.z+3*c_21*c_12*p2.z-6*c_22*p1.z*c_13+12*p1.x*p3.x*p1.z*c_13+6*c_21*p1.z*c_13-4*c_22*
        c_25+9*p1.x*p3.x*c_25+9*c_21*c_25+3*c_30*p3.y*c_17+3*c_37*c_17+3*c_62*p3.z+3*c_63*p3.x*p3.z+3*c_22*c_21*p3.z+3*p1.x*
        c_64*p3.z+3*c_29*p3.z-18*c_22*c_12*p3.z-9*p1.x*p3.x*c_12*p3.z-3*c_21*c_12*p3.z-9*c_22*p1.z*p2.z*p3.z+3*c_21*p1.z*p2.z*
        p3.z-3*c_22*c_13*p3.z+3*p1.x*p3.x*c_13*p3.z+9*c_21*c_13*p3.z-9*c_22*p1.z*c_14-12*p1.x*p3.x*p1.z*c_14-9*c_21*p1.z*
        c_14-3*c_22*p2.z*c_14-3*p1.x*p3.x*p2.z*c_14-3*c_22*c_15-9*p1.x*p3.x*c_15-18*c_21*c_15-c_36*c_48-3*p2.y*p3.y*c_17*
        c_114+c_31*(c_53+c_92+c_56+18*c_13*p3.z+c_70+c_49+3*c_12*c_86+3*p1.z*p3.z*c_94)-3*c_32*c_17*(c_66+c_13+c_72+c_73+2*p1.z*
        c_116)))+p20_2*(c_63*c_19+3*c_22*p3.x*(c_43+c_34+p1.y*c_127)+p1.x*(4*p2.y*c_11+9*p3.y*c_11+6*p2.y*c_12*p2.z+c_75-20*p2.y*
        c_25-18*p3.y*c_25+3*p2.y*c_12*p3.z+c_89+9*p2.y*p1.z*p2.z*p3.z+3*p3.y*p1.z*p2.z*p3.z+18*p2.y*c_13*p3.z+c_76+3*p2.y*
        p1.z*c_14+c_77+c_78-3*p3.y*p2.z*c_14+3*p2.y*c_15+3*c_21*c_84+p1.y*(c_133+c_134+c_138+c_139+c_140+c_141+c_142))+p3.x*(c_87+3*
        p1.y*c_12*p2.z+6*p3.y*c_12*p2.z+9*p1.y*p1.z*c_13+9*p3.y*p1.z*c_13+18*p1.y*c_25+4*p3.y*c_25+c_88+c_89-3*p1.y*p1.z*
        p2.z*p3.z+12*p3.y*p1.z*p2.z*p3.z-6*p1.y*p1.z*c_14+9*p3.y*p1.z*c_14+c_90-6*p3.y*p2.z*c_14-9*p1.y*c_15-8*p3.y*
        c_15+c_91-p2.y*(3*c_11+c_92+c_61+c_93+3*c_12*c_94+3*p1.z*(c_115+c_72+c_14))))+p3.x*(-3*c_35*p1.z-3*c_36*p3.y*p1.z-3*c_30*
        c_32*p1.z-3*c_31*c_33*p1.z-3*p2.y*c_37*p1.z+4*c_38*p1.z+3*c_30*c_11+3*c_31*p3.y*c_11+3*p2.y*c_32*c_11+c_121-4*c_35*p2.z-4*
        c_36*p3.y*p2.z-4*c_30*c_32*p2.z-4*c_31*c_33*p2.z-4*p2.y*c_37*p2.z-4*c_38*p2.z+9*c_30*c_12*p2.z+6*c_31*p3.y*c_12*
        p2.z+c_122+18*c_30*p1.z*c_13+c_123+3*p2.y*c_32*p1.z*c_13+4*c_31*p3.y*c_25+4*p2.y*c_32*c_25+c_95+c_96*c_103+c_97*(-3*p2.y*
        p1.z+c_0+3*p2.y*p2.z+c_8)+3*c_30*c_12*p3.z+6*c_31*p3.y*c_12*p3.z+9*p2.y*c_32*c_12*p3.z-8*c_33*c_12*p3.z+9*c_30*p1.z*
        p2.z*p3.z+12*c_31*p3.y*p1.z*p2.z*p3.z+9*p2.y*c_32*p1.z*p2.z*p3.z-4*c_30*c_13*p3.z+c_98+8*c_33*c_13*p3.z+3*c_30*
        p1.z*c_14+9*c_31*p3.y*p1.z*c_14+18*p2.y*c_32*p1.z*c_14-20*c_33*p1.z*c_14-4*c_30*p2.z*c_14+c_99+20*c_33*p2.z*c_14+c_100-8*
        c_31*p3.y*c_15-20*p2.y*c_32*c_15+c_62*(c_10+c_0+c_8+c_18)+c_101*(-3*c_31*c_102-18*c_12*p2.z-9*p1.z*c_13-3*c_25+3*p2.y*
        p3.y*c_42+c_32*c_103+4*c_12*p3.z-9*p1.z*p2.z*p3.z+c_151+4*p1.z*c_14+c_152+2*c_15)-c_22*(3*p2.y*c_17*(c_50+c_13+c_51+c_52+3*
        p1.z*c_105)+p3.y*(c_53+c_109+c_106+c_107+c_70+c_110+c_113))-c_108*(3*c_30*c_102+3*c_31*p3.y*c_102-3*p2.y*c_102*
        (c_65+c_50+c_45+c_51+c_14+3*p1.z*c_86)+p3.y*(c_53+c_109+c_106-c_32*c_103+c_107+c_70+c_110+c_113))+p1.y*(-3*c_36*c_102+3*c_30*p3.y*
        c_42+c_37*c_103+3*p2.y*p3.y*c_102*c_114+3*c_31*c_102*(c_65+c_66+c_115+c_72+c_14+2*p1.z*c_94)-c_32*(c_53+c_106+c_59+18*p2.z*
        c_14-20*c_15+3*c_12*c_105+3*p1.z*p2.z*c_116)+c_22*(c_153+c_154+c_106+c_117+c_118+c_93-c_22*c_129+c_157)))+p1.x*(c_120+c_121+4*
        c_35*p2.z-3*c_36*p3.y*p2.z-3*c_30*c_32*p2.z-3*c_31*c_33*p2.z-3*p2.y*c_37*p2.z-3*c_38*p2.z+4*c_30*c_12*p2.z+3*c_31*
        p3.y*c_12*p2.z+c_122+3*c_33*c_12*p2.z+4*c_30*p1.z*c_13+c_123+6*p2.y*c_32*p1.z*c_13+3*c_33*p1.z*c_13+18*c_31*p3.y*c_25+9*
        p2.y*c_32*c_25+3*c_33*c_25+4*c_96*c_130+3*c_35*p3.z+3*c_36*p3.y*p3.z+3*c_30*c_32*p3.z+3*c_31*c_33*p3.z+3*p2.y*c_37*
        p3.z-4*c_38*p3.z-3*c_30*c_12*p3.z+c_124-3*p2.y*c_32*c_12*p3.z-4*c_33*c_12*p3.z-9*c_30*p1.z*p2.z*p3.z-3*c_31*p3.y*p1.z*
        p2.z*p3.z+3*p2.y*c_32*p1.z*p2.z*p3.z+9*c_33*p1.z*p2.z*p3.z-18*c_30*c_13*p3.z+9*p2.y*c_32*c_13*p3.z+9*c_33*c_13*
        p3.z-3*c_30*p1.z*c_14-6*c_31*p3.y*p1.z*c_14+c_125-4*c_33*p1.z*c_14-9*c_30*p2.z*c_14-9*c_31*p3.y*p2.z*c_14+18*c_33*p2.z*
        c_14-3*c_30*c_15-9*c_31*p3.y*c_15-18*p2.y*c_32*c_15+c_62*(c_5+c_0+c_7+c_8+c_2+c_18)+c_97*(4*p2.y*p2.z+c_126+c_40-4*p3.y*
        p3.z)+c_101*(3*p2.y*p3.y*c_127+c_31*c_132+c_149-2*c_130*c_160)+p1.y*(3*c_30*p3.y*c_127+c_36*c_132+3*p2.y*p3.y*c_130*
        c_114+c_31*(c_133+c_134+c_138+c_150+c_139+c_140+c_141+c_142)+c_32*(c_143+c_106+c_147+c_107+c_70+c_93+c_148+c_149))+c_108*(3*c_31*
        p3.y*c_127+c_30*c_132+p2.y*(20*c_11+c_134+c_150-18*c_12*p3.z+c_151+c_152+c_141-3*p1.z*(2*c_13+c_72+c_52))+p3.y*
        (c_153+c_154+c_106+c_117+c_118+c_93+c_149+c_157))+c_22*(-2*p1.y*c_130*c_160-p3.y*(c_106+2*c_12*(c_144-2*p3.z)+c_117+c_118-2*c_15+p1.z*
        (c_155+c_119+c_161))+p2.y*(-2*c_25+c_117+c_118+c_49+c_12*(-4*p2.z+18*p3.z)+p1.z*(-4*c_13+c_119+9*c_14)))))/double(15120);
}

double trig::c43() const{
    double p12_2=p1.z*p1.z;
    double p22_2=p2.z*p2.z;
    double p32_2=p3.z*p3.z;
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p20_2=p2.x*p2.x;
    double p20_3=p2.x*p20_2;
    double p20_4=p2.x*p20_3;
    double p30_2=p3.x*p3.x;
    double p10_2=p1.x*p1.x;
    double p10_3=p1.x*p10_2;
    double p10_4=p1.x*p10_3;
    double c_0=p12_2;
    double c_1=p22_2;
    double c_2=p32_2;
    double c_3=-p3.z;
    double c_4=3*c_0;
    double c_5=4*p2.z;
    double c_6=c_5+p3.z;
    double c_7=3*p1.z*c_6;
    double c_8=p2.z+c_3;
    double c_9=-c_2;
    double c_10=3*p2.z*p3.z;
    double c_11=5*c_2;
    double c_12=-(5*c_1);
    double c_13=-(3*p2.z*p3.z);
    double c_14=-(3*c_2);
    double c_15=p1.z+c_3;
    double c_16=2*p3.z;
    double c_17=3*p1.z*p2.z;
    double c_18=4*p1.z;
    double c_19=2*p2.z;
    double c_20=2*c_0;
    double c_21=-c_1;
    double c_22=2*p2.z*p3.z;
    double c_23=p11_2;
    double c_24=p21_2;
    double c_25=p31_2;
    double c_26=p11_3;
    double c_27=p21_3;
    double c_28=p31_3;
    double c_29=-p2.z;
    double c_30=p1.z+c_29;
    double c_31=3*p1.z;
    double c_32=3*p3.z;
    double c_33=p1.z*p3.z;
    double c_34=-(2*c_2);
    double c_35=3*p2.z;
    double c_36=2*p1.z*p3.z;
    double c_37=-(2*c_1);
    double c_38=-(2*p2.z*p3.z);
    double c_39=p20_2;
    double c_40=p30_2;
    double c_41=2*p1.z*p2.z;
    double c_42=2*c_1;
    double c_43=3*p1.z*p3.z;
    double c_44=p2.z*p3.z;
    double c_45=2*p1.z;
    double c_46=p2.z+p3.z;
    double c_47=c_19+c_32;
    double c_48=2*c_46;
    double c_49=c_31+c_48;
    double c_50=c_35+p3.z;
    double c_51=p2.z+c_32;
    double c_52=3*c_1;
    double c_53=4*p3.z;
    double c_54=p2.z+c_53;
    double c_55=c_45+c_35+c_16;
    double c_56=c_45+c_19+c_32;
    double c_57=3*p2.y*c_25*c_1;
    double c_58=-(3*c_24*p3.y*c_2);
    double c_59=2*c_2;
    double c_60=-3*c_0;
    double c_61=5*c_1;
    double c_62=8*p2.z*p3.z;
    double c_63=3*c_46;
    double c_64=p1.z+c_63;
    double c_65=4*c_0;
    double c_66=3*p1.z*c_46;
    double c_67=p3.y*c_30;
    double c_68=p1.y*c_8;
    double c_69=-p1.z;
    double c_70=c_69+p3.z;
    double c_71=p2.y*c_70;
    double c_72=c_67+c_68+c_71;
    double c_73=p20_3;
    double c_74=5*c_0;
    double c_75=-(10*c_1);
    double c_76=12*p2.z*p3.z;
    double c_77=3*c_2;
    double c_78=-(6*p2.y*c_25*c_0);
    double c_79=-(9*c_24*p3.y*p1.z*p3.z);
    double c_80=-(9*p2.y*c_25*p1.z*p3.z);
    double c_81=-(9*c_28*p1.z*p3.z);
    double c_82=6*p2.y*c_25*p2.z*p3.z;
    double c_83=9*c_28*p2.z*p3.z;
    double c_84=-(9*p2.y*c_25*c_2);
    double c_85=10*c_0;
    double c_86=c_31+c_35+p3.z;
    double c_87=-(2*p1.z*p3.z);
    double c_88=c_0+c_37+c_87+c_13+c_9;
    double c_89=c_20+c_21+c_43+c_22+c_2;
    double c_90=p2.y*c_89;
    double c_91=-(6*c_24*p3.y*c_0);
    double c_92=-(9*c_28*p1.z*p2.z);
    double c_93=-(10*c_28*c_2);
    double c_94=9*p2.z*p3.z;
    double c_95=8*p1.z*p3.z;
    double c_96=-(10*c_2);
    double c_97=-(2*p1.z*p2.z);
    double c_98=c_31+p2.z+c_32;
    double c_99=-(3*c_1);
    double c_100=-c_0;
    double c_101=c_20+c_17+c_1+c_22+c_9;
    double c_102=6*c_2;
    return (p10_4*(-3*p1.y*c_8*(5*p1.z+p2.z+p3.z)+p3.y*(-5*c_0-12*p1.z*p2.z+c_99+c_33+c_13+c_2)+p2.y*(c_74-p1.z*p2.z+c_21+12*
        p1.z*p3.z+c_10+c_77))+p20_4*(3*p2.y*c_15*(p1.z+5*p2.z+p3.z)+p1.y*(c_0+c_12+p1.z*(p2.z-3*p3.z)-12*p2.z*
        p3.z+c_14)+p3.y*(c_4+c_61-p2.z*p3.z+c_9+c_7))-c_73*p3.x*(p2.y*(c_4+c_75+c_62+c_11+c_7)-3*(p1.y*c_8*(p1.z+c_5+c_16)+p3.y*
        (c_0+c_17+c_42+c_36+c_9)))+p10_3*(p3.x*p1.y*(-10*c_0+12*p1.z*p2.z+c_52+c_95+c_10+c_11)+p2.x*p1.y*(c_85+c_12+c_13+c_14-4*
        p1.z*c_47)-3*p3.x*(p2.y*c_15*(c_18+p2.z+c_16)+p3.y*c_101)+3*p2.x*(p3.y*c_30*(c_18+c_19+p3.z)+c_90))+p10_2*(-10*c_26*p1.z*
        p2.z-6*c_23*p2.y*p1.z*p2.z-3*p1.y*c_24*p1.z*p2.z-c_27*p1.z*p2.z+36*c_23*p3.y*p1.z*p2.z+18*p1.y*p2.y*p3.y*p1.z*
        p2.z+6*c_24*p3.y*p1.z*p2.z+18*p1.y*c_25*p1.z*p2.z+6*p2.y*c_25*p1.z*p2.z+6*c_28*p1.z*p2.z-2*c_26*c_1-3*c_23*p2.y*
        c_1-3*p1.y*c_24*c_1-2*c_27*c_1+9*c_23*p3.y*c_1+12*p1.y*p2.y*p3.y*c_1+9*c_24*p3.y*c_1+6*p1.y*c_25*c_1+6*p2.y*c_25*
        c_1+3*c_28*c_1+10*c_26*p1.z*p3.z-36*c_23*p2.y*p1.z*p3.z-18*p1.y*c_24*p1.z*p3.z-6*c_27*p1.z*p3.z+6*c_23*p3.y*p1.z*
        p3.z-18*p1.y*p2.y*p3.y*p1.z*p3.z-6*c_24*p3.y*p1.z*p3.z+3*p1.y*c_25*p1.z*p3.z-6*p2.y*c_25*p1.z*p3.z+c_28*p1.z*
        p3.z-9*c_23*p2.y*p2.z*p3.z-12*p1.y*c_24*p2.z*p3.z-9*c_27*p2.z*p3.z+9*c_23*p3.y*p2.z*p3.z-3*c_24*p3.y*p2.z*p3.z+12*
        p1.y*c_25*p2.z*p3.z+3*p2.y*c_25*p2.z*p3.z+c_83+2*c_26*c_2-9*c_23*p2.y*c_2-6*p1.y*c_24*c_2-3*c_27*c_2+3*c_23*p3.y*c_2-12*
        p1.y*p2.y*p3.y*c_2-6*c_24*p3.y*c_2+3*p1.y*c_25*c_2+c_84+2*c_28*c_2+3*p2.x*p3.x*c_72*c_49-3*c_40*(p2.y*c_15*c_98+p3.y*
        (c_20+c_41+c_1+c_33+c_10+c_34)+p1.y*(c_20+c_21+c_38+c_34-p1.z*c_50))+3*c_39*(p3.y*c_30*c_86+p2.y*(c_20+p1.z*
        p2.z+c_37+c_36+c_10+c_2)+p1.y*(c_20+c_37+c_38+c_9-p1.z*c_51)))+c_39*(2*c_27*c_0-9*c_24*p3.y*c_0+c_78-3*c_28*c_0+10*c_27*p1.z*
        p2.z-36*c_24*p3.y*p1.z*p2.z-18*p2.y*c_25*p1.z*p2.z-6*c_28*p1.z*p2.z+c_79-12*p2.y*c_25*p1.z*p3.z+c_81-10*c_27*p2.z*
        p3.z-6*c_24*p3.y*p2.z*p3.z-3*p2.y*c_25*p2.z*p3.z-c_28*p2.z*p3.z-2*c_27*c_2+c_58-3*p2.y*c_25*c_2-2*c_28*c_2+c_26*(c_20+3*
        p3.z*(c_19+p3.z)+p1.z*(p2.z+9*p3.z))-3*c_40*(-(p3.y*(c_0+c_41+c_42+c_43+c_44+c_34))+p2.y*(c_0+c_17+c_37+c_36+c_44+c_59))+3*
        p1.y*(-2*p2.y*p3.y*c_15*c_55-c_25*c_15*c_56+c_40*c_8*c_64+c_24*(c_0+3*p3.z*c_6+p1.z*c_47))+3*c_23*(-(p3.y*c_15*
        c_49)+p2.y*(c_0+2*p3.z*c_50+p1.z*c_54)))+c_40*(3*c_27*c_0+6*c_24*p3.y*c_0+9*p2.y*c_25*c_0-2*c_28*c_0+9*c_27*p1.z*p2.z+12*
        c_24*p3.y*p1.z*p2.z+9*p2.y*c_25*p1.z*p2.z+2*c_27*c_1+3*c_24*p3.y*c_1+c_57+2*c_28*c_1+6*c_27*p1.z*p3.z+18*c_24*p3.y*
        p1.z*p3.z+36*p2.y*c_25*p1.z*p3.z-10*c_28*p1.z*p3.z+c_27*p2.z*p3.z+3*c_24*p3.y*p2.z*p3.z+c_82+10*c_28*p2.z*p3.z-c_26*
        (c_20+p1.z*(9*p2.z+p3.z)+3*p2.z*(p2.z+c_16))+3*c_23*(p2.y*c_30*c_49-p3.y*(c_0+p1.z*c_6+2*p2.z*c_51))+c_40*(-3*
        p3.y*c_30*(p1.z+p2.z+5*p3.z)+p1.y*(c_100+c_17+c_52-p1.z*p3.z+c_76+c_11)+p2.y*(c_60+c_1+c_44-5*c_2-3*p1.z*c_54))+3*p1.y*
        (c_24*c_30*c_55+2*p2.y*p3.y*c_30*c_56-c_25*(c_0+p1.z*(c_35+c_16)+3*p2.z*c_54)))+p2.x*p3.x*(9*c_27*c_0+3*c_24*p3.y*
        c_0-3*p2.y*c_25*c_0-9*c_28*c_0+36*c_27*p1.z*p2.z+9*c_24*p3.y*p1.z*p2.z-6*p2.y*c_25*p1.z*p2.z+c_92+10*c_27*c_1+6*c_24*
        p3.y*c_1+c_57+c_28*c_1+9*c_27*p1.z*p3.z+6*c_24*p3.y*p1.z*p3.z+c_80-36*c_28*p1.z*p3.z-c_27*c_2+c_58-6*p2.y*c_25*c_2+c_93-3*
        c_26*c_8*c_49+3*c_23*(p2.y*(c_4+c_97-6*c_1+c_43+c_59)+p3.y*(c_60-3*p1.z*p2.z+c_37+c_36+c_102))+c_40*(3*p1.y*c_8*
        (p1.z+c_19+c_53)-3*p2.y*(c_0+c_41+c_21+c_43+c_59)+p3.y*(c_4+c_61+c_62+c_96+3*p1.z*c_54))+3*p1.y*(-2*p2.y*p3.y*c_8*c_64-c_25*
        (c_65+c_66+2*(c_1-6*c_2))+c_24*(c_65+c_66+2*(-6*c_1+c_2))))+p1.x*(3*c_39*p3.x*c_55*c_72+c_73*(3*p3.y*c_30*(c_45+c_5+p3.z)+3*
        p1.y*c_88+p2.y*(c_74+8*p1.z*p2.z+c_75+c_43+c_76+c_77))+p2.x*(c_27*c_0+c_91+c_78-6*c_28*c_0-10*c_27*c_1+36*c_24*p3.y*
        c_1+18*p2.y*c_25*c_1+6*c_28*c_1-9*c_27*p1.z*p3.z+c_79+c_80+c_81-36*c_27*p2.z*p3.z-9*c_24*p3.y*p2.z*p3.z+c_82+c_83-9*
        c_27*c_2-12*c_24*p3.y*c_2+c_84+c_26*(c_85+c_21+36*p1.z*p3.z+c_94+9*c_2)+3*c_40*c_56*(c_67+c_71)+3*p1.y*(-2*p2.y*p3.y*c_30*
        c_86+c_40*c_8*c_56+c_24*c_88+c_25*(-6*c_0+c_42+c_87+c_10+c_77))+3*c_23*(c_90+p3.y*(-12*c_0+c_42+c_43+c_10+4*c_2)))-p3.x*(-6*
        c_27*c_0+c_91+c_78+c_28*c_0-9*c_27*p1.z*p2.z-9*c_24*p3.y*p1.z*p2.z-9*p2.y*c_25*p1.z*p2.z+c_92-9*c_24*p3.y*c_1-12*
        p2.y*c_25*c_1-9*c_28*c_1+9*c_27*p2.z*p3.z+6*c_24*p3.y*p2.z*p3.z-9*p2.y*c_25*p2.z*p3.z-36*c_28*p2.z*p3.z+6*c_27*c_2+18*
        c_24*p3.y*c_2+36*p2.y*c_25*c_2+c_93+c_26*(c_85+36*p1.z*p2.z+9*c_1+c_94+c_9)+c_40*(3*p2.y*c_15*(c_45+p2.z+c_53)+p3.y*
        (c_74+c_17+c_52+c_95+c_76+c_96)+3*p1.y*(c_0+c_97+c_21+c_13+c_34))-3*p1.y*(2*p2.y*p3.y*c_15*c_98+c_24*(6*c_0+c_41+c_99+c_13+c_34)+c_25*
        (c_100+c_41+c_1+c_10+c_59))+c_23*(3*p3.y*c_101+p2.y*(-36*c_0+9*p1.z*p2.z+12*c_1+c_94+c_102)))))/double(60480);
}

double trig::c44() const{
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
    double c_0=3*p3.y*p1.z;
    double c_1=4*p3.y*p2.z;
    double c_2=-(3*p1.y*p3.z);
    double c_3=-(4*p1.y*p2.z);
    double c_4=4*p2.y*p1.z;
    double c_5=-(3*p3.y*p2.z);
    double c_6=3*p2.y*p3.z;
    double c_7=-3*p2.y*p1.z;
    double c_8=-(4*p3.y*p1.z);
    double c_9=3*p1.y*p2.z;
    double c_10=4*p1.y*p3.z;
    double c_11=p11_2;
    double c_12=p21_2;
    double c_13=p21_3;
    double c_14=p31_2;
    double c_15=p31_3;
    double c_16=c_4+c_0+c_3+c_5+c_2+c_6;
    double c_17=c_7+c_8+c_9+c_5+c_10+c_6;
    double c_18=p20_2;
    double c_19=-p3.z;
    double c_20=p30_2;
    double c_21=p11_3;
    double c_22=2*p1.z;
    double c_23=-(4*p2.y*p3.z);
    double c_24=-p1.z;
    double c_25=c_24+p3.z;
    double c_26=p2.z+c_19;
    double c_27=9*p3.z;
    double c_28=8*p2.z;
    double c_29=9*p1.z;
    double c_30=p11_4;
    double c_31=p21_4;
    double c_32=p31_4;
    double c_33=p11_5;
    double c_34=p21_5;
    double c_35=p31_5;
    double c_36=p20_4;
    double c_37=p20_3;
    double c_38=p2.y*c_25;
    double c_39=-p2.z;
    double c_40=p1.z+c_39;
    double c_41=p3.y*c_40;
    double c_42=p1.y*c_26;
    double c_43=c_41+c_42+c_38;
    double c_44=-(3*p3.z);
    double c_45=c_22+p2.z+c_44;
    double c_46=-(2*p3.z);
    double c_47=p1.z+p2.z+c_46;
    double c_48=p1.z+c_19;
    double c_49=4*p3.z;
    double c_50=9*p2.z;
    double c_51=3*p3.z;
    double c_52=-(20*c_13*p2.z);
    double c_53=3*c_15*p2.z;
    double c_54=-(3*p2.y*c_14*p3.z);
    double c_55=8*p1.z;
    double c_56=-2*p1.z;
    double c_57=c_56+p2.z+p3.z;
    double c_58=-4*p1.z;
    double c_59=3*p2.z;
    double c_60=2*p3.z;
    double c_61=2*p2.z;
    double c_62=c_22+c_61+c_51;
    double c_63=4*p1.z;
    double c_64=p30_4;
    double c_65=c_7+c_0+c_1+c_23;
    double c_66=-(3*p3.y*p1.z);
    double c_67=3*c_20*c_26;
    double c_68=3*c_14*c_25;
    double c_69=c_63+c_51;
    double c_70=-(2*p2.z);
    double c_71=p1.z+c_70+p3.z;
    double c_72=-(3*p2.z);
    double c_73=c_29+c_28+c_49;
    double c_74=p2.z+p3.z;
    double c_75=-4*c_13*p1.z;
    double c_76=-(3*c_15*p1.z);
    double c_77=6*p2.y*c_14*p2.z;
    double c_78=c_41+c_38;
    double c_79=3*c_20*c_78;
    double c_80=3*p1.z;
    double c_81=-(4*p2.z);
    double c_82=3*c_12*p3.y*p2.z;
    double c_83=-(3*c_13*p3.z);
    double c_84=-(6*c_12*p3.y*p3.z);
    double c_85=8*c_15*p3.z;
    double c_86=10*p1.z;
    double c_87=3*p2.y*p1.z;
    double c_88=-(4*p3.z);
    double c_89=4*p3.y*p1.z;
    double c_90=3*p3.y*p2.z;
    double c_91=c_63+c_59;
    double c_92=c_24+p2.z;
    double c_93=10*p3.z;
    double c_94=c_22+c_50+c_93;
    double c_95=4*p2.z;
    double c_96=8*p3.z;
    double c_97=2*c_74;
    double c_98=c_80+c_97;
    double c_99=5*p3.z;
    double c_100=p2.z+c_99;
    double c_101=2*c_100;
    double c_102=c_29+c_101;
    return (p20_5*(c_0+c_3+c_1+4*p2.y*c_48+c_2)+c_36*p3.x*(c_7+c_0+c_9+c_1+c_2+c_23)+p10_5*(c_4+c_8+c_3+c_5+c_10+c_6)+p10_4*(p2.x*
        c_16+p3.x*c_17)+p10_3*(-20*c_11*p2.y*p1.z-8*p1.y*c_12*p1.z-2*c_13*p1.z+20*c_11*p3.y*p1.z+8*p1.y*c_14*p1.z+2*c_15*
        p1.z-4*c_11*p2.y*p2.z-4*p1.y*c_12*p2.z-2*c_13*p2.z+18*c_11*p3.y*p2.z+9*p1.y*p2.y*p3.y*p2.z+c_82+9*p1.y*c_14*p2.z+3*
        p2.y*c_14*p2.z+c_53-18*c_11*p2.y*p3.z-9*p1.y*c_12*p3.z+c_83+4*c_11*p3.y*p3.z-9*p1.y*p2.y*p3.y*p3.z-3*c_12*p3.y*
        p3.z+4*p1.y*c_14*p3.z+c_54+2*c_15*p3.z+c_18*c_16+c_20*c_17+3*p2.x*p3.x*(p3.y*p1.z+p1.y*p2.z-p3.y*p2.z-p1.y*
        p3.z+c_38))-c_18*p3.x*(-18*c_13*p1.z+9*p2.y*c_14*p1.z+9*c_15*p1.z+c_52+c_77+4*c_15*p2.z+3*c_21*c_26-4*c_13*p3.z+6*p2.y*c_14*
        p3.z+c_85+c_20*(c_87+c_66-3*p1.y*p2.z-4*p3.y*p2.z+3*p1.y*p3.z+4*p2.y*p3.z)+3*p1.y*(p2.y*p3.y*(p1.z+c_59+c_88)+c_14*
        c_45-3*c_12*c_71)+c_11*(3*p3.y*c_47-3*p2.y*(p1.z+c_72+c_60)))+c_37*(c_21*c_62+c_20*c_65+c_11*(3*p3.y*c_25+p2.y*(c_63+c_28+c_27))+p1.y*
        (c_67+9*p2.y*p3.y*c_25+c_68+2*c_12*(c_22+10*p2.z+c_27))-p3.y*(p2.y*p3.y*c_73+c_14*c_98+2*c_12*(c_29+2*(5*
        p2.z+p3.z))))+p1.x*(4*c_33*p2.z+4*c_30*p2.y*p2.z+4*c_21*c_12*p2.z+4*c_11*c_13*p2.z+4*p1.y*c_31*p2.z+4*c_34*p2.z-3*c_30*
        p3.y*p2.z-3*c_21*p2.y*p3.y*p2.z-3*c_11*c_12*p3.y*p2.z-3*p1.y*c_13*p3.y*p2.z-3*c_31*p3.y*p2.z-3*c_21*c_14*p2.z-3*c_11*
        p2.y*c_14*p2.z-3*p1.y*c_12*c_14*p2.z-3*c_13*c_14*p2.z-3*c_11*c_15*p2.z-3*p1.y*p2.y*c_15*p2.z-3*c_12*c_15*p2.z-3*
        p1.y*c_32*p2.z-3*p2.y*c_32*p2.z-3*c_35*p2.z-4*c_33*p3.z+3*c_30*p2.y*p3.z+3*c_21*c_12*p3.z+3*c_11*c_13*p3.z+3*p1.y*c_31*
        p3.z+3*c_34*p3.z-4*c_30*p3.y*p3.z+3*c_21*p2.y*p3.y*p3.z+3*c_11*c_12*p3.y*p3.z+3*p1.y*c_13*p3.y*p3.z+3*c_31*p3.y*
        p3.z-4*c_21*c_14*p3.z+3*c_11*p2.y*c_14*p3.z+3*p1.y*c_12*c_14*p3.z+3*c_13*c_14*p3.z-4*c_11*c_15*p3.z+3*p1.y*p2.y*c_15*
        p3.z+3*c_12*c_15*p3.z-4*p1.y*c_32*p3.z+3*p2.y*c_32*p3.z-4*c_35*p3.z+c_36*c_16+c_64*c_17+3*c_37*p3.x*c_43+3*p2.x*p3.x*
        (c_20-3*c_11-3*c_12-4*p2.y*p3.y-3*c_14-4*p1.y*(p2.y+p3.y))*c_43-c_20*(-3*c_12*p3.y*c_45-9*p2.y*c_14*c_47-3*c_13*c_48+c_21*
        (c_55+c_50+c_49)-2*c_15*c_94+c_11*(-9*p2.y*p1.z+6*p3.y*p1.z+6*p2.y*p2.z+9*p3.y*p2.z+c_6+6*p3.y*p3.z)+3*p1.y*p2.y*
        (p2.y*c_57+p3.y*(c_58+p2.z+c_51)))+c_18*(c_75-9*c_12*p3.y*p1.z-6*p2.y*c_14*p1.z+c_76+c_52+18*c_12*p3.y*p2.z+9*p2.y*c_14*
        p2.z+c_53-18*c_13*p3.z-9*c_12*p3.y*p3.z+c_54+c_21*(c_55+c_95+c_27)+c_79+3*p1.y*(c_20*c_26+c_14*c_57+p2.y*p3.y*
        (c_58+c_59+p3.z))+3*c_11*(p3.y*(-3*p1.z+p2.z+c_60)+p2.y*c_62)))+p2.x*(-4*c_34*p1.z+3*c_31*p3.y*p1.z+3*c_13*c_14*p1.z+3*c_12*
        c_15*p1.z+3*p2.y*c_32*p1.z+3*c_35*p1.z+4*c_34*p3.z+4*c_31*p3.y*p3.z+4*c_13*c_14*p3.z+4*c_12*c_15*p3.z+4*p2.y*c_32*
        p3.z+4*c_35*p3.z-c_33*c_69+c_64*c_65-c_30*(c_4+c_66+c_6+3*p3.y*p3.z)-c_21*(c_67+3*p2.y*p3.y*c_25+c_68+c_12*c_69)+c_11*(3*c_12*
        p3.y*c_48+3*p2.y*c_14*c_48+3*c_15*c_48-c_13*c_69+3*c_20*(-(p3.y*(p1.z+c_61+c_44))+p2.y*c_71))+p1.y*(3*c_13*p3.y*c_48+3*
        c_12*c_14*c_48+3*p2.y*c_15*c_48+3*c_32*c_48+3*c_64*c_26-c_31*c_69+3*c_20*(-3*c_14*c_47+c_12*(c_22+c_72+p3.z)+p2.y*p3.y*
        (p1.z+c_81+c_51)))+c_20*(c_13*c_73+c_12*(9*p3.y*p1.z+6*p3.y*c_74)-2*c_15*c_102))+p10_2*(c_37*c_16+3*c_18*p3.x*c_43+p2.x*
        (c_75-3*c_12*p3.y*p1.z-3*p2.y*c_14*p1.z+c_76-8*c_13*p2.z+9*c_12*p3.y*p2.z+c_77+c_53-9*c_13*p3.z+c_84+c_54+9*c_11*p3.y*
        c_57+2*c_21*(c_86+c_61+c_27)+c_79-3*p1.y*(c_14*(c_80+c_70+c_19)+p2.y*p3.y*(c_80+c_81+p3.z)+c_20*(c_39+p3.z)+c_12*c_62))+p3.x*
        (3*c_13*p1.z+3*c_12*p3.y*p1.z+3*p2.y*c_14*p1.z+4*c_15*p1.z+c_82+c_77+9*c_15*p2.z+9*c_11*p2.y*(c_22+c_39+c_19)+c_83+c_84-9*
        p2.y*c_14*p3.z+c_85-2*c_21*(c_86+c_50+c_60)-c_20*(c_87+c_89+c_90-3*p2.y*p3.z)+p1.y*(3*p2.y*p3.y*(c_80+p2.z+c_88)+c_20*
        (c_59+c_49)+c_14*(6*p1.z+c_50+6*p3.z)+c_12*(c_29-3*(p2.z+c_60)))))+p3.x*(-3*c_34*p1.z-3*c_31*p3.y*p1.z-3*c_13*c_14*
        p1.z-3*c_12*c_15*p1.z-3*p2.y*c_32*p1.z+4*c_35*p1.z-4*c_34*p2.z-4*c_31*p3.y*p2.z-4*c_13*c_14*p2.z-4*c_12*c_15*p2.z-4*
        p2.y*c_32*p2.z-4*c_35*p2.z+c_33*c_91+c_30*(c_7+c_89+3*p2.y*p2.z+c_90)+c_21*(-3*c_12*c_40+3*p2.y*p3.y*c_92+c_14*c_91)+c_11*
        (-3*c_13*c_40+3*c_12*p3.y*c_92+3*p2.y*c_14*c_92+c_15*c_91)+p1.y*(-3*c_31*c_40+3*c_13*p3.y*c_92+3*c_12*c_14*c_92+3*p2.y*c_15*
        c_92+c_32*c_91)+c_64*(c_7+c_8+c_9+c_1+c_10+c_23)+c_20*(-(c_21*(c_22+c_59+c_60))+c_11*(3*p2.y*c_40-p3.y*(c_63+c_50+c_96))+p1.y*
        (3*c_12*c_40+9*p2.y*p3.y*c_40-2*c_14*c_94)+p2.y*(p2.y*p3.y*(c_29+c_95+c_96)+c_12*c_98+2*c_14*c_102))))/double(120960);
}

double trig::s41() const{
    double p22_2=p2.z*p2.z;
    double p22_3=p2.z*p22_2;
    double p22_4=p2.z*p22_3;
    double p32_2=p3.z*p3.z;
    double p32_3=p3.z*p32_2;
    double p32_4=p3.z*p32_3;
    double p12_2=p1.z*p1.z;
    double p12_3=p1.z*p12_2;
    double p12_4=p1.z*p12_3;
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p21_4=p2.y*p21_3;
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p11_4=p1.y*p11_3;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p31_4=p3.y*p31_3;
    double p30_2=p3.x*p3.x;
    double p30_3=p3.x*p30_2;
    double p10_2=p1.x*p1.x;
    double p20_2=p2.x*p2.x;
    double p20_3=p2.x*p20_2;
    double c_0=p22_2;
    double c_1=p32_2;
    double c_2=p12_2;
    double c_3=6*p2.z;
    double c_4=-p2.z;
    double c_5=p1.z+c_4;
    double c_6=p21_2;
    double c_7=2*p1.z;
    double c_8=2*p2.z;
    double c_9=3*p3.z;
    double c_10=c_7+c_8+c_9;
    double c_11=p11_2;
    double c_12=c_3+p3.z;
    double c_13=p1.z*c_12;
    double c_14=p31_2;
    double c_15=2*p3.z;
    double c_16=4*p3.z;
    double c_17=p2.z+c_16;
    double c_18=2*c_1;
    double c_19=2*c_0;
    double c_20=3*p2.z*p3.z;
    double c_21=-p3.z;
    double c_22=p1.z+c_21;
    double c_23=9*c_2;
    double c_24=9*p2.z*p3.z;
    double c_25=3*c_1;
    double c_26=3*c_2;
    double c_27=6*p3.z;
    double c_28=3*p2.z;
    double c_29=-c_2;
    double c_30=10*c_0;
    double c_31=p30_2;
    double c_32=p12_4;
    double c_33=p21_4;
    double c_34=p21_3;
    double c_35=p31_3;
    double c_36=p31_4;
    double c_37=p12_3;
    double c_38=p22_3;
    double c_39=p22_4;
    double c_40=p32_3;
    double c_41=p32_4;
    double c_42=-c_0;
    double c_43=c_7+c_28+c_15;
    double c_44=p2.z+p3.z;
    double c_45=p10_2;
    double c_46=3*p1.z;
    double c_47=2*c_2;
    double c_48=p2.z+c_15;
    double c_49=3*p1.z*p3.z;
    double c_50=2*c_44;
    double c_51=c_46+c_50;
    double c_52=c_46+p2.z+c_9;
    double c_53=2*p2.z*p3.z;
    double c_54=c_47+c_42+c_49+c_53+c_1;
    double c_55=p2.y*c_54;
    double c_56=-(6*c_0);
    double c_57=4*p2.z;
    double c_58=c_57+p3.z;
    double c_59=4*p2.z*p3.z;
    double c_60=p2.z+c_27;
    double c_61=p1.z*c_60;
    double c_62=4*c_2;
    double c_63=3*p1.z*c_44;
    double c_64=-6*c_2;
    double c_65=-(2*p1.z*p2.z);
    double c_66=3*c_0;
    double c_67=p2.z+c_21;
    double c_68=3*p1.z*p2.z;
    double c_69=2*p1.z*p3.z;
    double c_70=-c_1;
    double c_71=c_8+p3.z;
    double c_72=-(3*p1.z*p2.z);
    double c_73=12*c_14*c_32;
    double c_74=-(24*c_6*c_2*c_0);
    double c_75=-(12*c_14*c_39);
    double c_76=-(9*c_34*p3.y*p1.z*p3.z);
    double c_77=12*p2.y*p3.y*c_37*p3.z;
    double c_78=-(9*c_33*c_1);
    double c_79=p11_4;
    double c_80=p11_3;
    double c_81=-(3*p2.z*p3.z);
    double c_82=c_8+c_9;
    double c_83=5*p1.z;
    double c_84=c_83+p2.z+p3.z;
    double c_85=9*p2.z;
    double c_86=9*p3.z;
    double c_87=-10*c_2;
    double c_88=10*c_2;
    double c_89=-2*c_2;
    double c_90=c_28+p3.z;
    double c_91=-(2*c_0);
    double c_92=-(2*p2.z*p3.z);
    double c_93=-(2*c_1);
    double c_94=-(2*p1.z*p3.z);
    double c_95=9*c_0;
    double c_96=-(3*c_1);
    double c_97=p2.z*p3.z;
    double c_98=3*c_38*p3.z;
    double c_99=3*c_0*c_1;
    double c_100=3*p2.z*c_40;
    double c_101=c_0+c_97+c_1;
    double c_102=9*c_33*c_2;
    double c_103=-(9*c_36*c_2);
    double c_104=-(12*c_6*c_32);
    double c_105=9*p2.y*c_35*p1.z*p2.z;
    double c_106=-(12*p2.y*p3.y*c_37*p2.z);
    double c_107=18*c_6*c_14*c_0;
    double c_108=9*c_36*c_0;
    double c_109=-(18*c_6*c_14*c_1);
    double c_110=24*c_14*c_2*c_1;
    double c_111=24*c_6*c_0*c_1;
    double c_112=-(24*c_14*c_0*c_1);
    double c_113=12*c_6*c_41;
    double c_114=5*c_2;
    double c_115=12*p1.z*p2.z;
    double c_116=4*p1.z;
    double c_117=12*c_39;
    double c_118=-(12*c_41);
    double c_119=c_46+c_28+p3.z;
    double c_120=2*p1.z*p2.z;
    double c_121=8*p1.z*p3.z;
    double c_122=-(10*c_1);
    double c_123=12*c_2;
    double c_124=c_47+c_68+c_0+c_53+c_70;
    return (p30_3*(2*c_14*c_5*(p1.z+p2.z+5*p3.z)-c_11*(c_66+c_24+c_18+c_13)+p2.y*p3.y*(c_23+c_42+10*c_1+9*p1.z*c_17)+c_6*
        (c_26+p3.z*c_48+p1.z*(c_3+c_86))+p1.y*(3*p2.y*c_5*c_10+p3.y*(c_2-9*p1.z*p2.z-9*c_0-36*p2.z*p3.z+c_122)))-3*p1.x*c_31*(-(c_6*
        c_22*c_10)+c_11*(c_19+c_59+c_1+c_13)-c_14*(c_2+p1.z*(c_28+c_15)+3*p2.z*c_17)-p2.y*p3.y*(c_62+c_63+2*(c_0-6*c_1))+p1.y*
        (p3.y*(c_29+c_120+c_0+c_20+c_18)+p2.y*(c_64+c_19+c_94+c_20+c_25)))+p20_3*(-2*c_6*c_22*(p1.z+5*p2.z+p3.z)-p2.y*p3.y*
        (c_23+c_30+c_70+9*p1.z*c_58)+c_11*(c_19+c_24+c_25+c_61)-c_14*(c_26+p2.z*c_71+p1.z*(c_85+c_27))+p1.y*(-3*p3.y*c_22*c_43+p2.y*
        (c_29+c_30+9*p1.z*p3.z+36*p2.z*p3.z+9*c_1)))+p2.x*(6*c_31*c_6*c_2+c_102+3*c_31*p2.y*p3.y*c_2-9*c_34*p3.y*c_2-9*c_31*c_14*
        c_2-9*c_6*c_14*c_2-9*p2.y*c_35*c_2+c_103-4*c_6*c_32+12*p2.y*p3.y*c_32+c_73+18*c_31*c_6*p1.z*p2.z+45*c_33*p1.z*p2.z+6*c_31*
        p2.y*p3.y*p1.z*p2.z-36*c_34*p3.y*p1.z*p2.z-9*c_31*c_14*p1.z*p2.z-27*c_6*c_14*p1.z*p2.z-18*p2.y*c_35*p1.z*p2.z-9*c_36*
        p1.z*p2.z-12*c_6*c_37*p2.z+24*p2.y*p3.y*c_37*p2.z+12*c_14*c_37*p2.z-3*c_31*p2.y*p3.y*c_0+30*c_34*p3.y*c_0-3*c_31*
        c_14*c_0+c_107+9*p2.y*c_35*c_0+3*c_36*c_0+c_74+36*p2.y*p3.y*c_2*c_0+12*c_14*c_2*c_0-40*c_6*p1.z*c_38+48*p2.y*p3.y*p1.z*
        c_38+12*c_14*p1.z*c_38-60*p2.y*p3.y*c_39+c_75+12*c_31*c_6*p1.z*p3.z+9*c_31*p2.y*p3.y*p1.z*p3.z+c_76-36*c_31*c_14*p1.z*
        p3.z-18*c_6*c_14*p1.z*p3.z-27*p2.y*c_35*p1.z*p3.z-36*c_36*p1.z*p3.z+c_77+24*c_14*c_37*p3.z+3*c_31*c_6*p2.z*p3.z-45*c_33*
        p2.z*p3.z-24*c_34*p3.y*p2.z*p3.z-6*c_31*c_14*p2.z*p3.z-9*c_6*c_14*p2.z*p3.z+3*c_36*p2.z*p3.z+24*p2.y*p3.y*c_2*
        p2.z*p3.z+24*c_14*c_2*p2.z*p3.z+36*p2.y*p3.y*p1.z*c_0*p3.z+24*c_14*p1.z*c_0*p3.z+40*c_6*c_38*p3.z-32*p2.y*p3.y*c_38*
        p3.z-20*c_14*c_38*p3.z+3*c_31*c_6*c_1+c_78+6*c_31*p2.y*p3.y*c_1-15*c_34*p3.y*c_1+c_109-18*p2.y*c_35*c_1-15*c_36*c_1+12*p2.y*
        p3.y*c_2*c_1+36*c_14*c_2*c_1+24*p2.y*p3.y*p1.z*p2.z*c_1+36*c_14*p1.z*p2.z*c_1+c_111-12*p2.y*p3.y*c_0*c_1+c_112+12*
        p2.y*p3.y*p1.z*c_40+48*c_14*p1.z*c_40+12*c_6*p2.z*c_40-24*c_14*p2.z*c_40+4*c_6*c_41+4*p2.y*p3.y*c_41-20*c_14*c_41+3*c_79*
        (c_114-p1.z*p2.z+c_42+12*p1.z*p3.z+c_20+c_25)+9*c_80*(-(p3.y*c_22*(c_116+p2.z+c_15))+c_55)+6*p1.x*p3.x*(c_6*c_22*c_43-c_14*
        c_5*c_10+p2.y*p3.y*c_67*(p1.z+3*c_44))+c_11*(20*c_32+6*c_45*p1.z*p2.z-18*p1.x*p3.x*p1.z*p2.z-6*c_31*p1.z*p2.z+24*
        c_37*p2.z+3*c_45*c_0-12*p1.x*p3.x*c_0-6*c_31*c_0+24*c_2*c_0+20*p1.z*c_38+c_117+36*c_45*p1.z*p3.z+18*p1.x*p3.x*p1.z*
        p3.z+6*c_31*p1.z*p3.z-48*c_37*p3.z+9*c_45*p2.z*p3.z-3*c_31*p2.z*p3.z-36*c_2*p2.z*p3.z-24*p1.z*c_0*p3.z-12*c_38*p3.z+9*
        c_45*c_1+12*p1.x*p3.x*c_1+9*c_31*c_1-36*c_2*c_1-24*p1.z*p2.z*c_1-12*c_0*c_1-24*p1.z*c_40-12*p2.z*c_40+c_118-9*c_14*c_22*
        c_52-9*p2.y*p3.y*c_22*c_51+9*c_6*(c_47+c_91+c_20+c_1+p1.z*c_48))-3*c_45*(p2.y*p3.y*(c_26+c_65+c_56+c_49+c_18)+c_14*c_5*
        c_51+c_6*(c_2+2*p3.z*c_90+p1.z*c_17))-p1.y*(-15*c_34*c_2+18*c_6*p3.y*c_2+18*p2.y*c_14*c_2+18*c_35*c_2+4*p2.y*c_32-48*p3.y*
        c_32-24*c_34*p1.z*p2.z+27*c_6*p3.y*p1.z*p2.z+18*p2.y*c_14*p1.z*p2.z+9*c_35*p1.z*p2.z-36*p3.y*c_37*p2.z+30*c_34*c_0-12*
        p2.y*c_2*c_0-24*p3.y*c_2*c_0-32*p2.y*p1.z*c_38-12*p3.y*p1.z*c_38-60*p2.y*c_39-9*c_34*p1.z*p3.z+9*p2.y*c_14*p1.z*
        p3.z+18*c_35*p1.z*p3.z+12*p2.y*c_37*p3.z-24*p3.y*c_37*p3.z-36*c_34*p2.z*p3.z-27*c_6*p3.y*p2.z*p3.z-18*p2.y*c_14*p2.z*
        p3.z-9*c_35*p2.z*p3.z+24*p2.y*c_2*p2.z*p3.z-12*p3.y*c_2*p2.z*p3.z+36*p2.y*p1.z*c_0*p3.z+48*p2.y*c_38*p3.z+12*p3.y*
        c_38*p3.z-9*c_34*c_1-18*c_6*p3.y*c_1-27*p2.y*c_14*c_1-36*c_35*c_1+12*p2.y*c_2*c_1+24*p2.y*p1.z*p2.z*c_1+12*p3.y*p1.z*
        p2.z*c_1+36*p2.y*c_0*c_1+24*p3.y*c_0*c_1+12*p2.y*p1.z*c_40+24*p3.y*p1.z*c_40+24*p2.y*p2.z*c_40+36*p3.y*p2.z*c_40+12*
        p2.y*c_41+48*p3.y*c_41-6*p1.x*p3.x*(p2.y*c_5*c_119-p3.y*c_22*c_52)+3*c_45*(p3.y*(c_123+c_72-4*c_0+c_81+c_93)+c_55)+c_31*
        (3*p3.y*(c_47+c_68+4*c_0+c_20-12*c_1)-3*p2.y*(c_47+c_56+c_49+c_92+c_25))))+3*p20_2*(p1.x*(-(c_14*c_5*c_43)-c_6*(c_2+3*p3.z*
        c_58+p1.z*c_82)+c_11*(c_0+c_59+c_18+c_61)-p2.y*p3.y*(c_62+c_63+2*(-6*c_0+c_1))+p1.y*(p2.y*(c_29+c_19+c_69+c_20+c_1)+p3.y*
        (c_64+c_65+c_66+c_20+c_18)))+p3.x*(-(c_11*c_67*c_43)-p2.y*p3.y*(c_2+c_68+c_19+c_69+c_70)+c_6*(c_26+p3.z*c_71+3*p1.z*c_58)-c_14*
        (c_47+p2.z*c_44+p1.z*(c_57+c_27))+p1.y*(p2.y*(c_47-12*c_0+c_49+c_20+4*c_1)+p3.y*(c_89+c_72-3*c_0+c_53+6*c_1))))+p1.x*
        (3*c_33*c_2-3*c_36*c_2+c_104+c_73+3*c_33*p1.z*p2.z+9*c_34*p3.y*p1.z*p2.z+9*c_6*c_14*p1.z*p2.z+c_105+9*c_36*p1.z*p2.z-20*
        c_6*c_37*p2.z+c_106-12*c_14*c_37*p2.z-15*c_33*c_0+36*c_34*p3.y*c_0+27*c_6*c_14*c_0+18*p2.y*c_35*c_0+c_108+c_74-24*p2.y*
        p3.y*c_2*c_0-12*c_14*c_2*c_0-24*c_6*p1.z*c_38-36*p2.y*p3.y*p1.z*c_38-12*c_14*p1.z*c_38-20*c_6*c_39-48*p2.y*p3.y*c_39+c_75-9*
        c_33*p1.z*p3.z+c_76-9*c_6*c_14*p1.z*p3.z-9*p2.y*c_35*p1.z*p3.z-3*c_36*p1.z*p3.z+12*c_6*c_37*p3.z+c_77+20*c_14*c_37*
        p3.z-36*c_33*p2.z*p3.z-18*c_34*p3.y*p2.z*p3.z+18*p2.y*c_35*p2.z*p3.z+36*c_36*p2.z*p3.z+24*c_6*c_2*p2.z*p3.z-24*c_14*
        c_2*p2.z*p3.z+36*c_6*p1.z*c_0*p3.z-12*p2.y*p3.y*p1.z*c_0*p3.z-24*c_14*p1.z*c_0*p3.z+48*c_6*c_38*p3.z-24*p2.y*p3.y*
        c_38*p3.z-24*c_14*c_38*p3.z+c_78-18*c_34*p3.y*c_1-27*c_6*c_14*c_1-36*p2.y*c_35*c_1+15*c_36*c_1+12*c_6*c_2*c_1+24*p2.y*
        p3.y*c_2*c_1+c_110+24*c_6*p1.z*p2.z*c_1+12*p2.y*p3.y*p1.z*p2.z*c_1-36*c_14*p1.z*p2.z*c_1+36*c_6*c_0*c_1-36*c_14*c_0*c_1+12*
        c_6*p1.z*c_40+36*p2.y*p3.y*p1.z*c_40+24*c_14*p1.z*c_40+24*c_6*p2.z*c_40+24*p2.y*p3.y*p2.z*c_40-48*c_14*p2.z*c_40+c_113+48*
        p2.y*p3.y*c_41+20*c_14*c_41-9*c_79*c_67*c_84+3*c_80*(p3.y*(c_87+c_115+c_66+c_121+c_20+5*c_1)+p2.y*(c_88-5*c_0+c_81+c_96-4*
        p1.z*c_82))+c_45*(2*c_11*c_67*c_84+3*p2.y*p3.y*c_67*c_51+c_14*(c_47+p1.z*(c_85+p3.z)+3*p2.z*c_48)-c_6*(c_47+3*p3.z*
        c_71+p1.z*(p2.z+c_86))+p1.y*(p2.y*(c_87+c_0-36*p1.z*p3.z-9*p2.z*p3.z-9*c_1)+p3.y*(c_88+36*p1.z*p2.z+c_95+c_24+c_70)))+c_11*
        (9*p2.y*p3.y*c_67*c_51+9*c_14*(c_89+c_0+c_53+c_18+p1.z*c_90)+9*c_6*(c_47+c_91+c_92+c_70-p1.z*(p2.z+c_9))+4*(c_39+10*
        c_37*c_67-c_41+6*c_2*(c_0+c_70)+3*p1.z*(c_38-c_40)))+p1.y*(9*c_6*p3.y*c_67*c_43-9*c_35*(c_2+c_65+c_42+c_81+c_93)+9*c_34*
        (c_2+c_91+c_94+c_81+c_70)-4*p3.y*(-15*c_32+3*c_39+4*c_37*(c_28-2*p3.z)+c_98+c_99+c_100+c_41+c_2*(c_95+c_24+c_96)+6*p1.z*p2.z*
        c_101)+p2.y*(-60*c_32+c_37*(-32*p2.z+48*p3.z)-12*c_2*(c_0+c_81+c_96)+9*c_14*(c_19+c_97+c_96)+4*(c_39+c_98+c_99+c_100+3*c_41)+6*
        p1.z*(3*c_14*c_67+4*p3.z*c_101))))+p3.x*(9*c_45*c_6*c_2+c_102+9*c_45*p2.y*p3.y*c_2+9*c_34*p3.y*c_2+3*c_45*c_14*c_2+9*c_6*
        c_14*c_2+9*p2.y*c_35*c_2+c_103+c_104-12*p2.y*p3.y*c_32+4*c_14*c_32+6*c_45*c_6*p1.z*p2.z+36*c_33*p1.z*p2.z+9*c_45*p2.y*
        p3.y*p1.z*p2.z+27*c_34*p3.y*p1.z*p2.z+12*c_45*c_14*p1.z*p2.z+18*c_6*c_14*p1.z*p2.z+c_105-24*c_6*c_37*p2.z+c_106+15*c_33*
        c_0+6*c_45*p2.y*p3.y*c_0+18*c_34*p3.y*c_0+6*c_45*c_14*c_0+c_107+15*p2.y*c_35*c_0+c_108-36*c_6*c_2*c_0-12*p2.y*p3.y*c_2*
        c_0-48*c_6*p1.z*c_38-12*p2.y*p3.y*p1.z*c_38+20*c_6*c_39-4*p2.y*p3.y*c_39-4*c_14*c_39-3*c_45*c_6*p1.z*p3.z+9*c_33*p1.z*
        p3.z-6*c_45*p2.y*p3.y*p1.z*p3.z+18*c_34*p3.y*p1.z*p3.z+3*c_45*c_14*p1.z*p3.z+27*c_6*c_14*p1.z*p3.z+36*p2.y*c_35*
        p1.z*p3.z-45*c_36*p1.z*p3.z-12*c_6*c_37*p3.z-24*p2.y*p3.y*c_37*p3.z+12*c_14*c_37*p3.z-6*c_45*c_6*p2.z*p3.z-3*c_33*p2.z*
        p3.z+18*c_45*c_14*p2.z*p3.z+9*c_6*c_14*p2.z*p3.z+24*p2.y*c_35*p2.z*p3.z+45*c_36*p2.z*p3.z-24*c_6*c_2*p2.z*p3.z-24*
        p2.y*p3.y*c_2*p2.z*p3.z-36*c_6*p1.z*c_0*p3.z-24*p2.y*p3.y*p1.z*c_0*p3.z+24*c_6*c_38*p3.z-12*c_14*c_38*p3.z-6*c_45*
        c_6*c_1-3*c_33*c_1-18*c_45*p2.y*p3.y*c_1-9*c_34*p3.y*c_1+c_109-30*p2.y*c_35*c_1-12*c_6*c_2*c_1-36*p2.y*p3.y*c_2*c_1+c_110-24*
        c_6*p1.z*p2.z*c_1-36*p2.y*p3.y*p1.z*p2.z*c_1+c_111+12*p2.y*p3.y*c_0*c_1+c_112-12*c_6*p1.z*c_40-48*p2.y*p3.y*p1.z*
        c_40+40*c_14*p1.z*c_40+20*c_6*p2.z*c_40+32*p2.y*p3.y*p2.z*c_40-40*c_14*p2.z*c_40+c_113+60*p2.y*p3.y*c_41-3*c_79*
        (c_114+c_115+c_66-p1.z*p3.z+c_20+c_70)+9*c_80*(p2.y*c_5*(c_116+c_8+p3.z)-p3.y*c_124)+c_11*(-20*c_32-36*c_45*p1.z*p2.z+48*c_37*
        p2.z-9*c_45*c_0+36*c_2*c_0+24*p1.z*c_38+c_117-6*c_45*p1.z*p3.z-24*c_37*p3.z-9*c_45*p2.z*p3.z+36*c_2*p2.z*p3.z+24*p1.z*
        c_0*p3.z+12*c_38*p3.z-3*c_45*c_1-24*c_2*c_1+24*p1.z*p2.z*c_1+12*c_0*c_1-20*p1.z*c_40+12*p2.z*c_40+c_118+9*c_6*c_5*c_119-9*
        c_14*(c_47+c_120+c_0+p1.z*p3.z+c_20+c_93)+9*p2.y*p3.y*c_5*c_51)+p1.y*(9*c_34*c_5*(c_7+c_57+p3.z)+9*c_6*p3.y*c_5*c_43-3*
        c_35*(c_114+c_68+c_66+c_121+12*p2.z*p3.z+c_122)+3*c_45*(p2.y*(c_123+c_91-3*p1.z*p3.z+c_81-4*c_1)+p3.y*c_124)+4*p3.y*(c_32+3*
        c_37*p2.z+3*c_2*(c_0+c_53+c_70)+p1.z*(3*c_38+6*c_0*p3.z+9*p2.z*c_1-8*c_40)+3*(c_39+2*c_38*p3.z+c_99+4*p2.z*c_40-5*c_41))-3*
        p2.y*c_5*(-3*c_14*c_10+4*(4*c_37+4*c_38+3*c_0*p3.z+2*p2.z*c_1+c_40+3*c_2*c_71+2*p1.z*(c_66+c_53+c_1))))))/double(10080);
}

double trig::s42() const{
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p11_4=p1.y*p11_3;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p31_4=p3.y*p31_3;
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p21_4=p2.y*p21_3;
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
    double c_0=6*p1.z;
    double c_1=3*p3.z;
    double c_2=5*p2.z;
    double c_3=c_0+c_2+c_1;
    double c_4=p11_2;
    double c_5=-p3.z;
    double c_6=p2.z+c_5;
    double c_7=p31_2;
    double c_8=p21_2;
    double c_9=3*p1.z;
    double c_10=15*p1.z;
    double c_11=p11_3;
    double c_12=p12_3;
    double c_13=p21_3;
    double c_14=p21_4;
    double c_15=p31_3;
    double c_16=p31_4;
    double c_17=p12_2;
    double c_18=p22_2;
    double c_19=p22_3;
    double c_20=p11_4;
    double c_21=p32_2;
    double c_22=p32_3;
    double c_23=-p1.z;
    double c_24=c_23+p3.z;
    double c_25=2*p1.z;
    double c_26=3*p2.z;
    double c_27=2*p3.z;
    double c_28=c_25+c_26+c_27;
    double c_29=c_23+p2.z;
    double c_30=-3*p1.z;
    double c_31=2*p2.z;
    double c_32=c_25+c_31+c_1;
    double c_33=-p2.z;
    double c_34=-(3*p3.z);
    double c_35=-(2*p3.z);
    double c_36=p1.z+p2.z+c_35;
    double c_37=5*p1.z;
    double c_38=6*p2.z;
    double c_39=c_37+c_38+c_1;
    double c_40=4*p1.z;
    double c_41=6*p3.z;
    double c_42=c_37+c_26+c_41;
    double c_43=p1.z+c_5;
    double c_44=c_9+c_26+p3.z;
    double c_45=15*p2.z;
    double c_46=12*p3.z;
    double c_47=p20_2;
    double c_48=p30_2;
    double c_49=c_9+p2.z+c_1;
    double c_50=3*p3.y*c_24;
    double c_51=p2.z+p3.z;
    double c_52=-(3*p2.z);
    double c_53=-(6*p2.y*c_15*p1.z);
    double c_54=3*c_8*c_7*p2.z;
    double c_55=-(c_16*p2.z);
    double c_56=12*c_7*c_17*p2.z;
    double c_57=-(3*c_8*c_7*p3.z);
    double c_58=-(6*c_7*c_18*p3.z);
    double c_59=-(2*p2.z);
    double c_60=p1.z+c_59+p3.z;
    double c_61=5*p3.z;
    double c_62=c_0+c_26+c_61;
    double c_63=c_25+p2.z+c_34;
    double c_64=c_25+c_52+p3.z;
    double c_65=-(4*p2.z);
    double c_66=p1.z+c_52+c_27;
    double c_67=-(4*p3.z);
    double c_68=6*c_18;
    double c_69=4*p2.z*p3.z;
    double c_70=6*c_12;
    double c_71=p1.z+c_31+c_34;
    double c_72=6*c_22;
    double c_73=6*c_21;
    double c_74=6*c_13*p3.y*p1.z;
    double c_75=c_14*p3.z;
    double c_76=-(12*c_8*c_17*p3.z);
    double c_77=6*c_8*p2.z*c_21;
    double c_78=p1.z+c_33;
    double c_79=12*p1.z;
    double c_80=3*c_51;
    double c_81=p1.z+c_80;
    double c_82=3*p2.y*c_78;
    double c_83=12*p2.z;
    double c_84=15*p3.z;
    double c_85=-c_21;
    double c_86=6*c_17;
    double c_87=8*p2.z*p3.z;
    double c_88=8*p1.z*c_51;
    double c_89=3*c_19;
    double c_90=18*p2.z*c_21;
    double c_91=p3.y*c_78;
    double c_92=p1.y*c_6;
    double c_93=p2.y*c_24;
    double c_94=c_91+c_92+c_93;
    double c_95=p20_3;
    double c_96=3*c_7*c_29;
    double c_97=c_9+c_65+p3.z;
    double c_98=c_9+c_2+c_41;
    double c_99=-(6*c_8*c_7*p2.z);
    double c_100=12*c_7*p1.z*c_18;
    double c_101=-(15*c_16*p3.z);
    double c_102=12*p2.y*p3.y*c_17*p3.z;
    double c_103=36*c_7*p1.z*p2.z*p3.z;
    double c_104=-(20*c_7*c_22);
    double c_105=c_10+c_83+p3.z;
    double c_106=8*p3.y*p1.z;
    double c_107=6*p3.y*p2.z;
    double c_108=-4*p1.z;
    double c_109=c_108+c_26+p3.z;
    double c_110=c_9+p2.z+c_67;
    double c_111=c_9+c_38+c_61;
    double c_112=-2*p1.z;
    double c_113=c_112+p2.z+p3.z;
    double c_114=3*c_7*c_43;
    double c_115=c_30+p2.z+c_27;
    double c_116=-(6*c_18*p3.z);
    double c_117=-(6*p2.z*c_21);
    double c_118=-6*p2.z;
    double c_119=4*p3.z;
    double c_120=c_7*c_63;
    double c_121=-(c_14*p1.z);
    double c_122=-(3*c_13*p3.y*p1.z);
    double c_123=-(9*c_48*c_7*p1.z);
    double c_124=-(3*c_8*c_7*p1.z);
    double c_125=-(3*p2.y*c_15*p1.z);
    double c_126=-(3*c_16*p1.z);
    double c_127=18*p2.y*p3.y*c_12;
    double c_128=6*p2.y*c_15*p2.z;
    double c_129=3*c_16*p2.z;
    double c_130=-(6*c_8*c_17*p2.z);
    double c_131=-(6*c_8*c_7*p3.z);
    double c_132=-(3*p2.y*c_15*p3.z);
    double c_133=18*p2.y*p3.y*c_17*p3.z;
    double c_134=12*p2.y*p3.y*p1.z*p2.z*p3.z;
    double c_135=12*c_8*p1.z*c_21;
    double c_136=18*c_7*p1.z*c_21;
    double c_137=12*p2.y*p3.y*p2.z*c_21;
    double c_138=-(18*c_7*p2.z*c_21);
    double c_139=18*p2.y*p3.y*c_22;
    double c_140=c_10+p2.z+c_46;
    double c_141=3*c_8*c_78;
    double c_142=c_30+c_31+p3.z;
    double c_143=-9*p1.z;
    double c_144=10*c_12;
    double c_145=-(6*c_22);
    double c_146=-(6*c_21);
    double c_147=4*p2.z;
    double c_148=-24*c_12;
    double c_149=-(6*c_17*c_51);
    double c_150=p2.z*p3.z;
    double c_151=c_18+c_150+c_21;
    double c_152=4*p1.z*c_151;
    double c_153=c_18*p3.z;
    double c_154=p2.z*c_21;
    double c_155=c_19+c_153+c_154+c_22;
    double c_156=6*c_155;
    return (-(c_95*p3.x*(p2.y*p3.y*(c_0+8*p2.z)+3*p1.y*p3.y*c_36+3*c_4*c_6-3*p1.y*p2.y*(p1.z+c_65+c_1)-2*c_8*c_3+c_7*
        c_3))+p10_4*(5*c_4*c_6+3*p2.y*p3.y*c_6+c_7*c_44+p1.y*p3.y*c_105-c_8*c_49-p1.y*p2.y*c_140)+p10_2*(-10*c_11*p2.y*p1.z-6*c_4*
        c_8*p1.z-3*p1.y*c_13*p1.z+c_121+10*c_11*p3.y*p1.z+6*c_4*c_7*p1.z+3*p1.y*c_15*p1.z+c_16*p1.z-20*p1.y*p2.y*c_12-4*c_8*
        c_12+20*p1.y*p3.y*c_12+4*c_7*c_12-5*c_20*p2.z-6*c_11*p2.y*p2.z-6*c_4*c_8*p2.z-5*p1.y*c_13*p2.z-3*c_14*p2.z+12*c_11*p3.y*
        p2.z+9*c_4*p2.y*p3.y*p2.z+6*p1.y*c_8*p3.y*p2.z+3*c_13*p3.y*p2.z+9*c_4*c_7*p2.z+6*p1.y*p2.y*c_7*p2.z+c_54+6*p1.y*
        c_15*p2.z+3*p2.y*c_15*p2.z+c_129-12*p1.y*p2.y*c_17*p2.z+c_130-72*p1.y*p3.y*c_17*p2.z-18*p2.y*p3.y*c_17*p2.z-18*c_7*
        c_17*p2.z-6*p1.y*p2.y*p1.z*c_18-6*c_8*p1.z*c_18-36*p1.y*p3.y*p1.z*c_18-24*p2.y*p3.y*p1.z*c_18-12*c_7*p1.z*c_18-2*
        p1.y*p2.y*c_19-4*c_8*c_19-12*p1.y*p3.y*c_19-18*p2.y*p3.y*c_19-6*c_7*c_19+5*c_20*p3.z-12*c_11*p2.y*p3.z-9*c_4*c_8*p3.z-6*
        p1.y*c_13*p3.z-3*c_14*p3.z+6*c_11*p3.y*p3.z-9*c_4*p2.y*p3.y*p3.z-6*p1.y*c_8*p3.y*p3.z-3*c_13*p3.y*p3.z+6*c_4*c_7*
        p3.z-6*p1.y*p2.y*c_7*p3.z+c_57+5*p1.y*c_15*p3.z+c_132+3*c_16*p3.z+72*p1.y*p2.y*c_17*p3.z+18*c_8*c_17*p3.z+12*p1.y*
        p3.y*c_17*p3.z+c_133+6*c_7*c_17*p3.z+36*p1.y*p2.y*p1.z*p2.z*p3.z+24*c_8*p1.z*p2.z*p3.z-36*p1.y*p3.y*p1.z*p2.z*
        p3.z-24*c_7*p1.z*p2.z*p3.z+12*p1.y*p2.y*c_18*p3.z+18*c_8*c_18*p3.z-12*p1.y*p3.y*c_18*p3.z-6*p2.y*p3.y*c_18*p3.z-12*
        c_7*c_18*p3.z+36*p1.y*p2.y*p1.z*c_21+c_135+6*p1.y*p3.y*p1.z*c_21+24*p2.y*p3.y*p1.z*c_21+6*c_7*p1.z*c_21+12*p1.y*p2.y*
        p2.z*c_21+12*c_8*p2.z*c_21-12*p1.y*p3.y*p2.z*c_21+6*p2.y*p3.y*p2.z*c_21+c_138+12*p1.y*p2.y*c_22+6*c_8*c_22+2*p1.y*
        p3.y*c_22+c_139+4*c_7*c_22-3*p2.x*p3.x*(3*p1.y+2*(p2.y+p3.y))*c_94-3*c_48*(-(p2.y*p3.y*c_63)+c_8*c_24+p1.y*p3.y*
        c_24+p1.y*p2.y*c_115+c_4*c_28-c_7*c_28)+3*c_47*(p1.y*p2.y*c_29+c_7*c_29-p2.y*p3.y*c_64+p1.y*p3.y*c_142+c_4*c_32-c_8*c_32))+p10_3*
        (p3.x*(p1.y*(c_106+c_107+3*p2.y*(c_40+c_33+c_34))+3*p2.y*p3.y*c_36+3*c_8*c_43-2*c_4*c_39+c_7*c_39)+p2.x*(c_96-3*p2.y*
        p3.y*c_60+3*p1.y*p3.y*c_109-2*p1.y*p2.y*(c_40+c_1)+2*c_4*c_42-c_8*c_42))+p20_4*(-5*c_8*c_43-c_7*c_44-p2.y*p3.y*
        (c_79+c_45+p3.z)+c_4*c_81+p1.y*(c_50+p2.y*(p1.z+c_45+c_46)))+c_47*(9*c_48*c_8*p1.z+5*c_14*p1.z-12*c_13*p3.y*p1.z+c_123-9*c_8*
        c_7*p1.z+c_53+c_126+12*p2.y*p3.y*c_12+6*c_7*c_12+6*c_48*c_8*p2.z-3*c_48*p2.y*p3.y*p2.z-10*c_13*p3.y*p2.z-6*c_48*c_7*
        p2.z+c_99-3*p2.y*c_15*p2.z+c_55+36*p2.y*p3.y*c_17*p2.z+c_56+72*p2.y*p3.y*p1.z*c_18+18*c_7*p1.z*c_18-20*p2.y*p3.y*c_19-4*
        c_7*c_19+6*c_48*c_8*p3.z-5*c_14*p3.z+3*c_48*p2.y*p3.y*p3.z-6*c_13*p3.y*p3.z-6*c_48*c_7*p3.z+c_131-5*p2.y*c_15*p3.z-3*
        c_16*p3.z+c_102+12*c_7*c_17*p3.z+36*p2.y*p3.y*p1.z*p2.z*p3.z+24*c_7*p1.z*p2.z*p3.z-12*p2.y*p3.y*c_18*p3.z+c_58+12*
        p2.y*p3.y*p1.z*c_21+c_136-6*p2.y*p3.y*p2.z*c_21-6*c_7*p2.z*c_21-2*p2.y*p3.y*c_22-4*c_7*c_22+c_20*c_49+c_11*(c_50+p2.y*
        c_42)+c_4*(4*c_12-3*c_48*p2.z+6*c_17*p2.z+6*p1.z*c_18+4*c_19-3*c_7*c_43+3*c_48*p3.z-18*c_17*p3.z-24*p1.z*p2.z*p3.z-18*
        c_18*p3.z-12*p1.z*c_21-12*p2.z*c_21+c_145+6*p2.y*p3.y*c_24+c_8*(c_0+c_38+9*p3.z))+p1.y*(9*c_8*p3.y*c_24+2*c_13*c_98+3*
        p3.y*c_43*(-c_7+c_86+c_68+c_87+c_73+c_88)+3*c_48*(-(p3.y*c_71)+p2.y*c_66)-2*p2.y*(-c_12-10*c_19-3*c_17*(p2.z+c_35)+c_114+36*
        c_18*p3.z+c_90+c_72-6*p1.z*(c_18-3*p2.z*p3.z+c_85))))+p2.x*p3.x*(12*c_14*p1.z+c_74+c_53-12*c_16*p1.z-12*c_8*c_12+12*
        c_7*c_12+15*c_14*p2.z+8*c_13*p3.y*p2.z+c_54+c_55-36*c_8*c_17*p2.z+c_56-72*c_8*p1.z*c_18+c_100+20*c_8*c_19-2*c_7*c_19-3*c_20*
        c_6+c_75+c_57-8*p2.y*c_15*p3.z+c_101+c_76+36*c_7*c_17*p3.z-36*c_8*p1.z*p2.z*p3.z+c_103+12*c_8*c_18*p3.z+c_58-12*c_8*
        p1.z*c_21+72*c_7*p1.z*c_21+c_77-12*c_7*p2.z*c_21+2*c_8*c_22+c_104+3*c_11*(-(p3.y*c_36)+p2.y*c_60)+c_48*(-3*p1.y*p3.y*
        (p1.z+c_26+c_67)-3*c_4*c_6+3*p1.y*p2.y*c_60+c_8*c_62-2*c_7*c_62+p2.y*p3.y*(c_0+8*p3.z))+3*c_4*(-c_120+c_8*c_64+2*p2.y*p3.y*
        (c_33+p3.z)+2*c_6*(3*c_17+3*c_18+c_69+3*c_21+4*p1.z*c_51))+3*p1.y*(c_13*c_97+c_8*p3.y*c_66+p3.y*(c_70+6*c_19-c_7*c_110+4*c_18*
        p3.z+c_117-24*c_22+c_17*(c_38+c_119)+p1.z*(c_68+c_69+c_146))-p2.y*(c_70-24*c_19+c_7*c_71+c_116+4*p2.z*c_21+c_72+c_17*
        (c_147+c_41)+p1.z*(-6*c_18+c_69+c_73))))+c_48*(3*c_14*p1.z+c_74+9*c_8*c_7*p1.z+12*p2.y*c_15*p1.z-5*c_16*p1.z-6*c_8*c_12-12*
        p2.y*p3.y*c_12+3*c_14*p2.z+5*c_13*p3.y*p2.z+6*c_8*c_7*p2.z+c_128+5*c_16*p2.z-12*c_8*c_17*p2.z-12*p2.y*p3.y*c_17*p2.z-18*
        c_8*p1.z*c_18-12*p2.y*p3.y*p1.z*c_18+4*c_8*c_19+2*p2.y*p3.y*c_19+c_75+3*c_13*p3.y*p3.z+6*c_8*c_7*p3.z+10*p2.y*c_15*
        p3.z+c_76-36*p2.y*p3.y*c_17*p3.z-24*c_8*p1.z*p2.z*p3.z-36*p2.y*p3.y*p1.z*p2.z*p3.z+6*c_8*c_18*p3.z+6*p2.y*p3.y*
        c_18*p3.z-18*c_8*p1.z*c_21-72*p2.y*p3.y*p1.z*c_21+c_77+c_137+4*c_8*c_22+20*p2.y*p3.y*c_22-c_20*c_44+c_11*(c_82-p3.y*
        c_39)+c_48*(5*c_7*c_78+c_8*c_49+p2.y*p3.y*(c_79+p2.z+c_84)-c_4*c_81+p1.y*(c_82-p3.y*(p1.z+c_83+c_84)))+c_4*(c_141+6*p2.y*
        p3.y*c_78-3*c_7*c_28+2*(-2*c_12+c_89+c_17*(9*p2.z+c_34)+6*c_18*p3.z+9*p2.z*c_21-2*c_22+3*p1.z*(2*c_18+c_69+c_85)))+p1.y*(3*
        c_13*c_78+6*c_8*p3.y*c_78-3*p2.y*c_78*(-3*c_7+c_86+c_68+c_87+c_73+c_88)-2*p3.y*(c_12+c_17*(c_118+c_1)+c_7*c_111-6*p1.z*(c_18+3*
        p2.z*p3.z+c_85)-2*(c_89+9*c_18*p3.z+c_90-5*c_22))))+p1.x*(-3*c_47*p3.x*(2*p1.y+3*p2.y+2*p3.y)*c_94+c_95*(c_96-3*p2.y*
        p3.y*c_97+c_4*c_98-2*c_8*c_98+p1.y*(8*p2.y*p2.z+6*p2.y*p3.z+3*p3.y*c_113))-p3.x*(-3*c_14*p1.z+c_122+c_124+c_125-c_16*
        p1.z+18*c_8*c_12+c_127-2*c_7*c_12-3*c_13*p3.y*p2.z+c_99-9*p2.y*c_15*p2.z-12*c_16*p2.z+24*c_8*c_17*p2.z+18*p2.y*p3.y*
        c_17*p2.z+c_56+18*c_8*p1.z*c_18+18*p2.y*p3.y*p1.z*c_18+c_100+18*p2.y*p3.y*c_19+12*c_7*c_19+3*c_14*p3.z+6*c_13*p3.y*
        p3.z+9*c_8*c_7*p3.z+12*p2.y*c_15*p3.z+c_101+6*c_8*c_17*p3.z+c_102-6*c_7*c_17*p3.z+c_134+c_103-18*c_8*c_18*p3.z+12*p2.y*p3.y*
        c_18*p3.z+36*c_7*c_18*p3.z-6*c_8*p1.z*c_21-18*p2.y*p3.y*p1.z*c_21-12*c_7*p1.z*c_21-24*c_8*p2.z*c_21-18*p2.y*p3.y*
        p2.z*c_21+72*c_7*p2.z*c_21-18*c_8*c_22-72*p2.y*p3.y*c_22+c_104+c_20*c_105+c_11*(c_106+c_107+3*p2.y*c_109)+c_48*(-3*p2.y*
        p3.y*c_110-3*c_8*c_43+c_4*c_111-2*c_7*c_111+p1.y*(c_107+8*p3.y*p3.z+3*p2.y*c_113))+c_4*(c_114+3*p2.y*p3.y*c_115+c_8*
        (c_143+c_38+c_1)+2*(c_144-6*c_19+c_116+c_117+c_22+6*c_17*(c_118+p3.z)-3*p1.z*(c_68+6*p2.z*p3.z+c_85)))-p1.y*(6*c_8*p3.y*c_43+2*
        c_15*(c_26+c_119)+c_13*(c_0-3*c_51)+3*p2.y*(c_148+c_120+c_149+c_152+c_156)))+p2.x*(6*c_48*c_8*p1.z+c_121+3*c_48*p2.y*p3.y*
        p1.z+c_122+c_123+c_124+c_125+c_126-2*c_8*c_12+c_127+18*c_7*c_12-15*c_14*p2.z+6*c_48*p2.y*p3.y*p2.z+12*c_13*p3.y*p2.z+9*
        c_48*c_7*p2.z+9*c_8*c_7*p2.z+c_128+c_129+c_130+12*p2.y*p3.y*c_17*p2.z+6*c_7*c_17*p2.z-12*c_8*p1.z*c_18-18*p2.y*p3.y*p1.z*
        c_18-6*c_7*p1.z*c_18-20*c_8*c_19-72*p2.y*p3.y*c_19-18*c_7*c_19-6*c_48*c_8*p3.z-12*c_14*p3.z-9*c_48*p2.y*p3.y*p3.z-9*
        c_13*p3.y*p3.z+c_131+c_132+12*c_8*c_17*p3.z+c_133+24*c_7*c_17*p3.z+36*c_8*p1.z*p2.z*p3.z+c_134+72*c_8*c_18*p3.z-18*p2.y*
        p3.y*c_18*p3.z-24*c_7*c_18*p3.z+c_135+18*p2.y*p3.y*p1.z*c_21+c_136+36*c_8*p2.z*c_21+c_137+c_138+12*c_8*c_22+c_139+c_20*
        c_140+c_11*(3*p3.y*(c_108+p2.z+c_1)+p2.y*(8*p1.z+c_41))+c_4*(c_141+3*p2.y*p3.y*c_142+c_7*(c_143+c_26+c_41)+2*(c_144+c_19+6*
        c_17*(p2.z-6*p3.z)-3*c_48*c_6+c_116+c_117+c_145+3*p1.z*(c_18-6*p2.z*p3.z+c_146)))+p1.y*(6*p2.y*c_7*c_29+c_48*(6*p2.y*
        c_78-3*p3.y*c_63)-3*c_8*p3.y*c_64-2*c_13*(c_147+c_1)-3*p3.y*(c_148+c_7*(c_25+c_33+c_5)+c_149+c_152+c_156)))))/double(30240);
}

double trig::s43() const{
    double p22_2=p2.z*p2.z;
    double p32_2=p3.z*p3.z;
    double p12_2=p1.z*p1.z;
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p21_4=p2.y*p21_3;
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p11_4=p1.y*p11_3;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p31_4=p3.y*p31_3;
    double p10_2=p1.x*p1.x;
    double p30_2=p3.x*p3.x;
    double p30_3=p3.x*p30_2;
    double p20_2=p2.x*p2.x;
    double p20_3=p2.x*p20_2;
    double c_0=p22_2;
    double c_1=p32_2;
    double c_2=p12_2;
    double c_3=6*p3.z;
    double c_4=-p3.z;
    double c_5=p1.z+c_4;
    double c_6=p21_2;
    double c_7=2*p1.z;
    double c_8=2*p2.z;
    double c_9=p11_2;
    double c_10=2*c_0;
    double c_11=p31_2;
    double c_12=3*p2.z;
    double c_13=2*p3.z;
    double c_14=3*p2.z*p3.z;
    double c_15=3*c_1;
    double c_16=9*p2.z*p3.z;
    double c_17=2*c_1;
    double c_18=6*p2.z;
    double c_19=c_18+p3.z;
    double c_20=p1.z*c_19;
    double c_21=9*c_2;
    double c_22=4*p3.z;
    double c_23=p2.z+c_22;
    double c_24=3*c_2;
    double c_25=-p2.z;
    double c_26=p1.z+c_25;
    double c_27=3*p3.z;
    double c_28=c_7+c_8+c_27;
    double c_29=-c_2;
    double c_30=10*c_1;
    double c_31=p10_2;
    double c_32=p21_4;
    double c_33=p21_3;
    double c_34=p31_3;
    double c_35=p31_4;
    double c_36=-c_1;
    double c_37=3*p1.z;
    double c_38=p2.z+p3.z;
    double c_39=2*c_2;
    double c_40=c_8+p3.z;
    double c_41=3*c_0;
    double c_42=4*p2.z;
    double c_43=c_7+c_12+c_13;
    double c_44=3*p1.z*p2.z;
    double c_45=-(3*p2.z*p3.z);
    double c_46=2*p2.z*p3.z;
    double c_47=c_39+c_44+c_0+c_46+c_36;
    double c_48=p30_2;
    double c_49=3*c_32*c_2;
    double c_50=-(3*c_35*c_2);
    double c_51=6*c_6*c_11*c_0;
    double c_52=-(6*c_6*c_11*c_1);
    double c_53=p11_4;
    double c_54=5*c_2;
    double c_55=-c_0;
    double c_56=p11_3;
    double c_57=4*p1.z;
    double c_58=2*c_38;
    double c_59=c_37+c_58;
    double c_60=-(2*c_0);
    double c_61=p2.z+c_13;
    double c_62=3*p1.z*p3.z;
    double c_63=c_37+c_12+p3.z;
    double c_64=c_37+p2.z+c_27;
    double c_65=12*c_2;
    double c_66=-(2*c_1);
    double c_67=c_39+c_55+c_62+c_46+c_1;
    double c_68=p2.y*c_67;
    double c_69=-(6*c_0);
    double c_70=c_42+p3.z;
    double c_71=4*p2.z*p3.z;
    double c_72=p2.z+c_3;
    double c_73=p1.z*c_72;
    double c_74=4*c_2;
    double c_75=3*p1.z*c_38;
    double c_76=-6*c_2;
    double c_77=-(2*p1.z*p2.z);
    double c_78=p2.z+c_4;
    double c_79=2*p1.z*p3.z;
    double c_80=-(3*p1.z*p2.z);
    double c_81=-(3*c_0);
    double c_82=3*p2.y*c_34*p1.z*p2.z;
    double c_83=3*c_35*c_0;
    double c_84=-(3*c_33*p3.y*p1.z*p3.z);
    double c_85=-(3*c_32*c_1);
    double c_86=-(2*p1.z*p3.z);
    double c_87=2*p1.z*p2.z;
    double c_88=c_29+c_87+c_0+c_14+c_17;
    double c_89=-2*c_2;
    double c_90=c_12+p3.z;
    double c_91=-(2*p2.z*p3.z);
    double c_92=8*p1.z*p3.z;
    double c_93=c_8+c_27;
    double c_94=5*p1.z;
    double c_95=c_94+p2.z+p3.z;
    double c_96=9*p2.z;
    double c_97=9*p3.z;
    double c_98=-10*c_2;
    double c_99=10*c_2;
    return (p20_3*(2*c_6*c_5*(p1.z+5*p2.z+p3.z)+p2.y*p3.y*(c_21+10*c_0+c_36+9*p1.z*c_70)-c_9*(c_10+c_16+c_15+c_73)+c_11*
        (c_24+p2.z*c_40+p1.z*(c_96+c_3))+p1.y*(3*p3.y*c_5*c_43+p2.y*(c_2-10*c_0-9*p1.z*p3.z-36*p2.z*p3.z-9*c_1)))+3*p1.x*c_48*
        (-(c_6*c_5*c_28)+c_9*(c_10+c_71+c_1+c_20)-c_11*(c_2+p1.z*(c_12+c_13)+3*p2.z*c_23)-p2.y*p3.y*(c_74+c_75+2*(c_0-6*c_1))+p1.y*
        (p3.y*c_88+p2.y*(c_76+c_10+c_86+c_14+c_15)))+p30_3*(-2*c_11*c_26*(p1.z+p2.z+5*p3.z)+c_9*(c_41+c_16+c_17+c_20)-p2.y*p3.y*
        (c_21+c_55+c_30+9*p1.z*c_23)-c_6*(c_24+p3.z*c_61+p1.z*(c_18+c_97))+p1.y*(-3*p2.y*c_26*c_28+p3.y*(c_29+9*p1.z*p2.z+9*c_0+36*
        p2.z*p3.z+c_30)))+p3.x*(-9*c_31*c_6*c_2+c_49-9*c_31*p2.y*p3.y*c_2+3*c_33*p3.y*c_2-3*c_31*c_11*c_2+3*c_6*c_11*c_2+3*
        p2.y*c_34*c_2+c_50-6*c_31*c_6*p1.z*p2.z+12*c_32*p1.z*p2.z-9*c_31*p2.y*p3.y*p1.z*p2.z+9*c_33*p3.y*p1.z*p2.z-12*c_31*
        c_11*p1.z*p2.z+6*c_6*c_11*p1.z*p2.z+c_82+5*c_32*c_0-6*c_31*p2.y*p3.y*c_0+6*c_33*p3.y*c_0-6*c_31*c_11*c_0+c_51+5*p2.y*c_34*
        c_0+c_83+3*c_31*c_6*p1.z*p3.z+3*c_32*p1.z*p3.z+6*c_31*p2.y*p3.y*p1.z*p3.z+6*c_33*p3.y*p1.z*p3.z-3*c_31*c_11*p1.z*
        p3.z+9*c_6*c_11*p1.z*p3.z+12*p2.y*c_34*p1.z*p3.z-15*c_35*p1.z*p3.z+6*c_31*c_6*p2.z*p3.z-c_32*p2.z*p3.z-18*c_31*c_11*
        p2.z*p3.z+3*c_6*c_11*p2.z*p3.z+8*p2.y*c_34*p2.z*p3.z+15*c_35*p2.z*p3.z+6*c_31*c_6*c_1-c_32*c_1+18*c_31*p2.y*p3.y*
        c_1-3*c_33*p3.y*c_1+c_52-10*p2.y*c_34*c_1+c_53*(-5*c_2+c_81+c_45+c_1+p1.z*(-12*p2.z+p3.z))+3*c_56*(p2.y*c_26*(c_57+c_8+p3.z)-p3.y*
        c_47)+3*c_9*(c_6*c_26*c_63+p2.y*p3.y*c_26*c_59-c_11*(c_39+c_0+c_14+c_66+p1.z*c_40)+c_31*(c_41+c_14+c_1+2*p1.z*
        c_19))-p1.y*(-3*c_33*c_26*(c_7+c_42+p3.z)-3*c_6*p3.y*c_26*c_43-3*p2.y*c_11*c_26*c_28+c_34*(c_54+c_44+c_41+c_92+12*p2.z*p3.z-10*
        c_1)+3*c_31*(p2.y*(c_65+c_60-3*p1.z*p3.z+c_45-4*c_1)+p3.y*c_47)))+p2.x*(-6*c_48*c_6*c_2+c_49-3*c_48*p2.y*p3.y*c_2-3*
        c_33*p3.y*c_2+9*c_48*c_11*c_2-3*c_6*c_11*c_2-3*p2.y*c_34*c_2+c_50-18*c_48*c_6*p1.z*p2.z+15*c_32*p1.z*p2.z-6*c_48*p2.y*
        p3.y*p1.z*p2.z-12*c_33*p3.y*p1.z*p2.z+9*c_48*c_11*p1.z*p2.z-9*c_6*c_11*p1.z*p2.z-6*p2.y*c_34*p1.z*p2.z-3*c_35*p1.z*
        p2.z+3*c_48*p2.y*p3.y*c_0+10*c_33*p3.y*c_0+3*c_48*c_11*c_0+c_51+3*p2.y*c_34*c_0+c_35*c_0-12*c_48*c_6*p1.z*p3.z-9*c_48*
        p2.y*p3.y*p1.z*p3.z+c_84+36*c_48*c_11*p1.z*p3.z-6*c_6*c_11*p1.z*p3.z-9*p2.y*c_34*p1.z*p3.z-12*c_35*p1.z*p3.z-3*
        c_48*c_6*p2.z*p3.z-15*c_32*p2.z*p3.z-8*c_33*p3.y*p2.z*p3.z+6*c_48*c_11*p2.z*p3.z-3*c_6*c_11*p2.z*p3.z+c_35*p2.z*p3.z-3*
        c_48*c_6*c_1+c_85-6*c_48*p2.y*p3.y*c_1-5*c_33*p3.y*c_1+c_52-6*p2.y*c_34*c_1-5*c_35*c_1+c_53*(c_54-p1.z*p2.z+c_55+12*
        p1.z*p3.z+c_14+c_15)+3*c_56*(-(p3.y*c_5*(c_57+p2.z+c_13))+c_68)-6*p1.x*p3.x*(c_6*c_5*c_43-c_11*c_26*c_28+p2.y*p3.y*c_78*
        (p1.z+3*c_38))+3*c_9*(-2*c_31*p1.z*p2.z+6*p1.x*p3.x*p1.z*p2.z+2*c_48*p1.z*p2.z-c_31*c_0+4*p1.x*p3.x*c_0+2*c_48*c_0-12*
        c_31*p1.z*p3.z-6*p1.x*p3.x*p1.z*p3.z-2*c_48*p1.z*p3.z-3*c_31*p2.z*p3.z+c_48*p2.z*p3.z-3*c_31*c_1-4*p1.x*p3.x*
        c_1-3*c_48*c_1-c_11*c_5*c_64-p2.y*p3.y*c_5*c_59+c_6*(c_39+c_60+c_14+c_1+p1.z*c_61))+3*c_31*(p2.y*p3.y*(c_24+c_77+c_69+c_62+c_17)+c_11*
        c_26*c_59+c_6*(c_2+2*p3.z*c_90+p1.z*c_23))+p1.y*(5*c_33*c_2-6*c_6*p3.y*c_2-6*p2.y*c_11*c_2-6*c_34*c_2+8*c_33*
        p1.z*p2.z-9*c_6*p3.y*p1.z*p2.z-6*p2.y*c_11*p1.z*p2.z-3*c_34*p1.z*p2.z-10*c_33*c_0+3*c_33*p1.z*p3.z-3*p2.y*c_11*
        p1.z*p3.z-6*c_34*p1.z*p3.z+12*c_33*p2.z*p3.z+9*c_6*p3.y*p2.z*p3.z+6*p2.y*c_11*p2.z*p3.z+3*c_34*p2.z*p3.z+3*c_33*c_1+6*
        c_6*p3.y*c_1+9*p2.y*c_11*c_1+12*c_34*c_1-6*p1.x*p3.x*(p2.y*c_26*c_63-p3.y*c_5*c_64)+3*c_31*(p3.y*(c_65+c_80-4*
        c_0+c_45+c_66)+c_68)+c_48*(3*p3.y*(c_39+c_44+4*c_0+c_14-12*c_1)-3*p2.y*(c_39+c_69+c_62+c_91+c_15))))-3*p20_2*(p1.x*(-(c_11*c_26*
        c_43)-c_6*(c_2+3*p3.z*c_70+p1.z*c_93)+c_9*(c_0+c_71+c_17+c_73)-p2.y*p3.y*(c_74+c_75+2*(-6*c_0+c_1))+p1.y*(p2.y*
        (c_29+c_10+c_79+c_14+c_1)+p3.y*(c_76+c_77+c_41+c_14+c_17)))+p3.x*(-(c_9*c_78*c_43)-p2.y*p3.y*(c_2+c_44+c_10+c_79+c_36)+c_6*(c_24+p3.z*
        c_40+3*p1.z*c_70)-c_11*(c_39+p2.z*c_38+p1.z*(c_42+c_3))+p1.y*(p2.y*(c_39-12*c_0+c_62+c_14+4*c_1)+p3.y*(c_89+c_80+c_81+c_46+6*
        c_1))))+p1.x*(c_32*c_2-c_35*c_2+c_32*p1.z*p2.z+3*c_33*p3.y*p1.z*p2.z+3*c_6*c_11*p1.z*p2.z+c_82+3*c_35*p1.z*p2.z-5*
        c_32*c_0+12*c_33*p3.y*c_0+9*c_6*c_11*c_0+6*p2.y*c_34*c_0+c_83-3*c_32*p1.z*p3.z+c_84-3*c_6*c_11*p1.z*p3.z-3*p2.y*c_34*
        p1.z*p3.z-c_35*p1.z*p3.z-12*c_32*p2.z*p3.z-6*c_33*p3.y*p2.z*p3.z+6*p2.y*c_34*p2.z*p3.z+12*c_35*p2.z*p3.z+c_85-6*
        c_33*p3.y*c_1-9*c_6*c_11*c_1-12*p2.y*c_34*c_1+5*c_35*c_1-3*c_53*c_78*c_95+3*p1.y*(c_6*p3.y*c_78*c_43+p2.y*c_11*c_78*c_28+c_33*
        (c_2+c_60+c_86+c_45+c_36)+c_34*c_88)+3*c_9*(p2.y*p3.y*c_78*c_59+c_11*(c_89+c_0+c_46+c_17+p1.z*c_90)+c_6*(c_39+c_60+c_91+c_36-p1.z*
        (p2.z+c_27)))+c_56*(p3.y*(c_98+12*p1.z*p2.z+c_41+c_92+c_14+5*c_1)+p2.y*(c_99-5*c_0+c_45-3*c_1-4*p1.z*c_93))+c_31*
        (-2*c_9*c_78*c_95-3*p2.y*p3.y*c_78*c_59-c_11*(c_39+p1.z*(c_96+p3.z)+3*p2.z*c_61)+c_6*(c_39+3*p3.z*c_40+p1.z*
        (p2.z+c_97))+p1.y*(p3.y*(c_98-36*p1.z*p2.z-9*c_0-9*p2.z*p3.z+c_1)+p2.y*(c_99+c_55+36*p1.z*p3.z+c_16+9*c_1)))))/double(60480);
}

double trig::s44() const{
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p11_4=p1.y*p11_3;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p31_4=p3.y*p31_3;
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p21_4=p2.y*p21_3;
    double p30_2=p3.x*p3.x;
    double p20_2=p2.x*p2.x;
    double p20_3=p2.x*p20_2;
    double p20_4=p2.x*p20_3;
    double p10_2=p1.x*p1.x;
    double p10_3=p1.x*p10_2;
    double p10_4=p1.x*p10_3;
    double c_0=6*p1.z;
    double c_1=3*p3.z;
    double c_2=5*p2.z;
    double c_3=c_0+c_2+c_1;
    double c_4=p11_2;
    double c_5=-p3.z;
    double c_6=p2.z+c_5;
    double c_7=p31_2;
    double c_8=p21_2;
    double c_9=3*p1.z;
    double c_10=15*p1.z;
    double c_11=p11_3;
    double c_12=p21_3;
    double c_13=p21_4;
    double c_14=p31_3;
    double c_15=p31_4;
    double c_16=p11_4;
    double c_17=-p2.z;
    double c_18=-p1.z;
    double c_19=c_18+p3.z;
    double c_20=2*p1.z;
    double c_21=3*p2.z;
    double c_22=2*p3.z;
    double c_23=c_20+c_21+c_22;
    double c_24=c_18+p2.z;
    double c_25=-3*p1.z;
    double c_26=2*p2.z;
    double c_27=c_20+c_26+c_1;
    double c_28=3*c_8*c_7*p2.z;
    double c_29=-(3*c_8*c_7*p3.z);
    double c_30=-(2*p3.z);
    double c_31=p1.z+p2.z+c_30;
    double c_32=-(3*p3.z);
    double c_33=c_20+p2.z+c_32;
    double c_34=-(3*p2.z);
    double c_35=c_20+c_34+p3.z;
    double c_36=c_17+p3.z;
    double c_37=-(4*p2.z);
    double c_38=p30_2;
    double c_39=-(4*p3.z);
    double c_40=3*c_4*c_6;
    double c_41=-(2*p2.z);
    double c_42=p1.z+c_41+p3.z;
    double c_43=5*p3.z;
    double c_44=c_0+c_21+c_43;
    double c_45=c_9+c_21+p3.z;
    double c_46=15*p2.z;
    double c_47=12*p3.z;
    double c_48=p1.z+c_5;
    double c_49=5*p1.z;
    double c_50=6*p2.z;
    double c_51=c_49+c_50+c_1;
    double c_52=p1.z+c_17;
    double c_53=6*p3.z;
    double c_54=c_49+c_21+c_53;
    double c_55=p20_2;
    double c_56=-(6*p2.y*c_14*p1.z);
    double c_57=-(c_15*p2.z);
    double c_58=c_9+p2.z+c_1;
    double c_59=3*p3.y*c_19;
    double c_60=p2.z+p3.z;
    double c_61=2*c_60;
    double c_62=c_9+c_61;
    double c_63=p1.z+c_26+c_32;
    double c_64=p1.z+c_34+c_22;
    double c_65=6*c_12*p3.y*p1.z;
    double c_66=c_13*p3.z;
    double c_67=-(c_7*c_23);
    double c_68=12*p1.z;
    double c_69=3*c_60;
    double c_70=p1.z+c_69;
    double c_71=12*p2.z;
    double c_72=15*p3.z;
    double c_73=p3.y*c_52;
    double c_74=p1.y*c_6;
    double c_75=p2.y*c_19;
    double c_76=c_73+c_74+c_75;
    double c_77=p20_3;
    double c_78=c_9+c_37+p3.z;
    double c_79=c_9+c_2+c_53;
    double c_80=6*p2.y*p3.z;
    double c_81=-(3*c_15*p1.z);
    double c_82=6*p2.y*c_14*p2.z;
    double c_83=3*c_15*p2.z;
    double c_84=-(6*c_8*c_7*p3.z);
    double c_85=-(3*p2.y*c_14*p3.z);
    double c_86=c_10+p2.z+c_47;
    double c_87=c_8*c_52;
    double c_88=c_25+c_26+p3.z;
    double c_89=c_25+p2.z+c_22;
    double c_90=-2*p1.z;
    double c_91=c_90+p2.z+p3.z;
    double c_92=-4*p1.z;
    double c_93=c_92+p2.z+c_1;
    double c_94=3*c_13*p1.z;
    double c_95=c_15*p1.z;
    double c_96=3*c_12*p3.y*p2.z;
    double c_97=6*c_8*c_7*p2.z;
    double c_98=-(3*c_13*p3.z);
    double c_99=-(6*c_12*p3.y*p3.z);
    double c_100=c_10+c_71+p3.z;
    double c_101=c_7*c_19;
    double c_102=4*p3.z;
    double c_103=c_9+p2.z+c_39;
    double c_104=-(3*c_8*c_48);
    double c_105=c_9+c_50+c_43;
    return (c_77*p3.x*(p2.y*p3.y*(c_0+8*p2.z)+3*p1.y*p3.y*c_31+c_40-3*p1.y*p2.y*(p1.z+c_37+c_1)-2*c_8*c_3+c_7*c_3)+p10_4*
        (-5*c_4*c_6+3*p2.y*p3.y*c_36-c_7*c_45-p1.y*p3.y*c_100+c_8*c_58+p1.y*p2.y*c_86)+p10_2*(-10*c_11*p2.y*p1.z-6*c_4*c_8*
        p1.z-3*p1.y*c_12*p1.z-c_13*p1.z+10*c_11*p3.y*p1.z+6*c_4*c_7*p1.z+3*p1.y*c_14*p1.z+c_95-5*c_16*p2.z-6*c_11*p2.y*p2.z-6*
        c_4*c_8*p2.z-5*p1.y*c_12*p2.z-3*c_13*p2.z+12*c_11*p3.y*p2.z+9*c_4*p2.y*p3.y*p2.z+6*p1.y*c_8*p3.y*p2.z+c_96+9*
        c_4*c_7*p2.z+6*p1.y*p2.y*c_7*p2.z+c_28+6*p1.y*c_14*p2.z+3*p2.y*c_14*p2.z+c_83+5*c_16*p3.z-12*c_11*p2.y*p3.z-9*c_4*
        c_8*p3.z-6*p1.y*c_12*p3.z+c_98+6*c_11*p3.y*p3.z-9*c_4*p2.y*p3.y*p3.z-6*p1.y*c_8*p3.y*p3.z-3*c_12*p3.y*p3.z+6*c_4*
        c_7*p3.z-6*p1.y*p2.y*c_7*p3.z+c_29+5*p1.y*c_14*p3.z+c_85+3*c_15*p3.z+3*p2.x*p3.x*(3*p1.y+2*(p2.y+p3.y))*c_76+3*c_38*
        (-(p2.y*p3.y*c_33)+c_8*c_19+p1.y*p3.y*c_19+p1.y*p2.y*c_89+c_4*c_23+c_67)-3*c_55*(p1.y*p2.y*c_24+c_7*c_24-p2.y*p3.y*
        c_35+p1.y*p3.y*c_88+c_4*c_27-c_8*c_27))+p2.x*p3.x*(12*c_13*p1.z+c_65+c_56-12*c_15*p1.z+15*c_13*p2.z+8*c_12*p3.y*
        p2.z+c_28+c_57-3*c_16*c_6+c_66+c_29-8*p2.y*c_14*p3.z-15*c_15*p3.z+3*c_11*(-(p3.y*c_31)+p2.y*c_42)+3*c_4*(-(c_7*c_33)+c_8*
        c_35+2*p2.y*p3.y*c_36)+3*p1.y*(-(c_14*c_103)-p2.y*c_7*c_63+c_12*c_78+c_8*p3.y*c_64)+c_38*(3*p1.y*p3.y*(p1.z+c_21+c_39)+c_40-3*
        p1.y*p2.y*c_42-2*p2.y*p3.y*(c_9+c_102)-c_8*c_44+2*c_7*c_44))+p20_4*(5*c_8*c_48+c_7*c_45+p2.y*p3.y*(c_68+c_46+p3.z)-c_4*
        c_70-p1.y*(c_59+p2.y*(p1.z+c_46+c_47)))+p10_3*(p3.x*(-2*p1.y*p3.y*(4*p1.z+c_21)-3*p2.y*p3.y*c_31+c_104+3*p1.y*
        p2.y*c_93+2*c_4*c_51-c_7*c_51)+p2.x*(3*c_7*c_52+3*p2.y*p3.y*c_42-2*c_4*c_54+c_8*c_54+p1.y*(8*p2.y*p1.z+12*p3.y*
        p1.z-9*p3.y*p2.z+c_80-3*p3.y*p3.z)))+c_55*(5*c_13*p1.z-12*c_12*p3.y*p1.z-9*c_8*c_7*p1.z+c_56+c_81-10*c_12*p3.y*p2.z-6*
        c_8*c_7*p2.z-3*p2.y*c_14*p2.z+c_57-5*c_13*p3.z+c_99+c_84-5*p2.y*c_14*p3.z-3*c_15*p3.z+c_16*c_58+3*c_4*(c_38*c_6+2*p2.y*
        p3.y*c_19+c_101+c_8*c_27)+c_11*(c_59+p2.y*c_54)+c_38*(3*p2.y*p3.y*c_6-3*c_8*c_62+3*c_7*c_62)+p1.y*(9*c_8*p3.y*c_19+6*
        p2.y*c_7*c_19+3*c_14*c_19+2*c_12*c_79+c_38*(3*p3.y*c_63-3*p2.y*c_64)))+c_38*(c_94+c_65+9*c_8*c_7*p1.z+12*p2.y*c_14*p1.z-5*
        c_15*p1.z+3*c_13*p2.z+5*c_12*p3.y*p2.z+c_97+c_82+5*c_15*p2.z+c_66+3*c_12*p3.y*p3.z+6*c_8*c_7*p3.z+10*p2.y*c_14*
        p3.z-c_16*c_45+3*c_4*(c_87+2*p2.y*p3.y*c_52+c_67)+c_11*(3*p2.y*c_52-p3.y*c_51)+p1.y*(3*c_12*c_52+6*c_8*p3.y*c_52+9*p2.y*
        c_7*c_52-2*c_14*c_105)+c_38*(5*c_7*c_24-c_8*c_58-p2.y*p3.y*(c_68+p2.z+c_72)+c_4*c_70+p1.y*(-3*p2.y*c_52+p3.y*
        (p1.z+c_71+c_72))))+p1.x*(3*c_55*p3.x*(2*p1.y+3*p2.y+2*p3.y)*c_76-c_77*(3*c_7*c_24-3*p2.y*p3.y*c_78+c_4*c_79-2*c_8*c_79+p1.y*(8*
        p2.y*p2.z+c_80+3*p3.y*c_91))+p2.x*(-(c_13*p1.z)-3*c_12*p3.y*p1.z-3*c_8*c_7*p1.z-3*p2.y*c_14*p1.z+c_81-15*c_13*p2.z+12*
        c_12*p3.y*p2.z+9*c_8*c_7*p2.z+c_82+c_83-3*c_38*(2*p2.y+3*p3.y)*(p3.y*c_24+p2.y*c_48)-12*c_13*p3.z-9*c_12*p3.y*
        p3.z+c_84+c_85+c_16*c_86+3*c_4*(c_87+2*c_38*c_6+p2.y*p3.y*c_88+c_7*c_89)+p1.y*(6*p2.y*c_7*c_24+c_38*(-6*p2.y*c_52+3*p3.y*
        c_33)-3*c_8*p3.y*c_35+3*c_14*c_91-2*c_12*(4*p2.z+c_1))+c_11*(3*p3.y*c_93+p2.y*(8*p1.z+c_53)))+p3.x*(c_94+3*c_12*p3.y*
        p1.z+3*c_8*c_7*p1.z+3*p2.y*c_14*p1.z+c_95+c_96+c_97+9*p2.y*c_14*p2.z+12*c_15*p2.z+c_98+c_99-9*c_8*c_7*p3.z-12*p2.y*
        c_14*p3.z+15*c_15*p3.z-c_16*c_100+c_11*(12*p2.y*p1.z-8*p3.y*p1.z-9*p2.y*p2.z-6*p3.y*p2.z-3*p2.y*p3.z)+3*c_4*(p2.y*
        p3.y*(c_9+c_17+c_30)+c_8*(c_9+c_41+c_5)+c_101)+p1.y*(3*p2.y*c_7*c_33+6*c_8*p3.y*c_48+2*c_14*(c_21+c_102)+c_12*(c_0-3*
        c_60))+c_38*(-3*p2.y*p3.y*c_103+c_104+c_4*c_105-2*c_7*c_105+p1.y*(6*p3.y*p2.z+8*p3.y*p3.z+3*p2.y*c_91)))))/double(120960);
}

double trig::j5() const{
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
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p21_4=p2.y*p21_3;
    double p21_5=p2.y*p21_4;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p31_4=p3.y*p31_3;
    double p31_5=p3.y*p31_4;
    double p30_2=p3.x*p3.x;
    double p30_3=p3.x*p30_2;
    double p30_4=p3.x*p30_3;
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p11_4=p1.y*p11_3;
    double p11_5=p1.y*p11_4;
    double p20_2=p2.x*p2.x;
    double p20_3=p2.x*p20_2;
    double p20_4=p2.x*p20_3;
    double p20_5=p2.x*p20_4;
    double p10_2=p1.x*p1.x;
    double p10_3=p1.x*p10_2;
    double p10_4=p1.x*p10_3;
    double p10_5=p1.x*p10_4;
    double c_0=p12_2;
    double c_1=p22_2;
    double c_2=p32_2;
    double c_3=-p3.z;
    double c_4=p2.z+c_3;
    double c_5=3*c_0;
    double c_6=5*p2.z;
    double c_7=c_6+p3.z;
    double c_8=3*p1.z*c_7;
    double c_9=2*p2.z;
    double c_10=-(3*c_1);
    double c_11=3*c_2;
    double c_12=-(3*p2.z*p3.z);
    double c_13=-(3*c_2);
    double c_14=p1.z+c_3;
    double c_15=5*p1.z;
    double c_16=2*p3.z;
    double c_17=10*c_0;
    double c_18=3*c_1;
    double c_19=6*p2.z*p3.z;
    double c_20=3*p2.z*p3.z;
    double c_21=7*c_2;
    double c_22=p2.z+p3.z;
    double c_23=p12_4;
    double c_24=p21_2;
    double c_25=p31_2;
    double c_26=p31_3;
    double c_27=p12_3;
    double c_28=p22_3;
    double c_29=p32_3;
    double c_30=p32_4;
    double c_31=10*c_1;
    double c_32=p30_2;
    double c_33=p22_4;
    double c_34=9*c_2;
    double c_35=c_9+p3.z;
    double c_36=6*p1.z*c_35;
    double c_37=-(9*p2.y*c_25*c_0);
    double c_38=12*p3.y*c_23;
    double c_39=p21_3;
    double c_40=72*p3.y*p1.z*c_1*p3.z;
    double c_41=p11_3;
    double c_42=3*p1.z;
    double c_43=3*p2.z;
    double c_44=c_42+c_43+c_16;
    double c_45=p11_2;
    double c_46=9*p1.z*c_22;
    double c_47=9*c_1;
    double c_48=8*p2.z*p3.z;
    double c_49=5*p1.z*p2.z;
    double c_50=-(6*c_2);
    double c_51=2*c_1;
    double c_52=2*p2.z*p3.z;
    double c_53=2*p1.z;
    double c_54=-p2.z;
    double c_55=p20_2;
    double c_56=p1.z+c_54;
    double c_57=3*p1.z*p2.z;
    double c_58=-(6*c_1);
    double c_59=9*p1.z*p3.z;
    double c_60=9*p2.z*p3.z;
    double c_61=3*p3.z;
    double c_62=4*p1.z;
    double c_63=3*p1.z*p3.z;
    double c_64=c_43+c_16;
    double c_65=p11_4;
    double c_66=p12_6;
    double c_67=p21_5;
    double c_68=p21_4;
    double c_69=p31_4;
    double c_70=p31_5;
    double c_71=p12_5;
    double c_72=p11_5;
    double c_73=p22_5;
    double c_74=p22_6;
    double c_75=p32_5;
    double c_76=p32_6;
    double c_77=p20_3;
    double c_78=p1.z+c_9+p3.z;
    double c_79=-p1.z;
    double c_80=c_79+p2.z;
    double c_81=p3.y*c_80;
    double c_82=p2.y*c_14;
    double c_83=c_54+p3.z;
    double c_84=p1.y*c_83;
    double c_85=c_81+c_82+c_84;
    double c_86=c_53+p2.z+p3.z;
    double c_87=-(10*c_2);
    double c_88=5*p3.z;
    double c_89=5*p2.z*p3.z;
    double c_90=p20_4;
    double c_91=-(10*c_1);
    double c_92=-(12*p2.z*p3.z);
    double c_93=7*c_0;
    double c_94=36*p3.y*c_0*c_1;
    double c_95=-(18*c_24*p3.y*p1.z*p3.z);
    double c_96=-(9*c_26*p1.z*p3.z);
    double c_97=9*c_26*p2.z*p3.z;
    double c_98=36*p3.y*c_0*p2.z*p3.z;
    double c_99=-(9*p2.y*c_25*c_2);
    double c_100=36*p2.y*p1.z*p2.z*c_2;
    double c_101=-(36*p3.y*c_1*c_2);
    double c_102=12*p3.y*p1.z*c_29;
    double c_103=-(12*p3.y*p2.z*c_29);
    double c_104=12*p2.y*c_30;
    double c_105=8*p1.z*p2.z;
    double c_106=3*c_22;
    double c_107=c_53+c_106;
    double c_108=20*c_33;
    double c_109=6*c_0;
    double c_110=-c_2;
    double c_111=-(3*p1.z*p2.z);
    double c_112=4*c_2;
    double c_113=2*c_0;
    double c_114=p2.z+c_61;
    double c_115=3*p1.z*c_114;
    double c_116=c_113+c_51+c_60+c_11+c_115;
    double c_117=4*c_0;
    double c_118=-(12*c_2);
    double c_119=c_117+c_49+c_18+c_63+c_12+c_118;
    double c_120=18*p2.z*p3.z;
    double c_121=9*p1.z*p2.z;
    double c_122=5*p1.z*p3.z;
    double c_123=45*p2.z*p3.z;
    double c_124=-12*c_0;
    double c_125=2*c_2;
    double c_126=-(4*p2.z*p3.z);
    double c_127=2*p1.z*c_22;
    double c_128=c_109+c_10+c_126+c_13+c_127;
    double c_129=-c_1;
    double c_130=c_1+c_52+c_11;
    double c_131=p2.z*p3.z;
    double c_132=-(5*c_2);
    double c_133=p1.z*c_22;
    double c_134=6*c_2;
    double c_135=9*c_0;
    double c_136=-(9*c_26*c_0);
    double c_137=20*p2.y*c_23;
    double c_138=9*c_24*p3.y*p1.z*p2.z;
    double c_139=24*p3.y*c_27*p2.z;
    double c_140=-(18*c_39*p1.z*p3.z);
    double c_141=72*p2.y*c_0*p2.z*p3.z;
    double c_142=72*p2.y*p1.z*c_1*p3.z;
    double c_143=-(36*p3.y*p1.z*c_1*p3.z);
    double c_144=36*p3.y*c_0*c_2;
    double c_145=c_81+c_82;
    double c_146=15*c_0;
    double c_147=9*c_32*p2.z*p3.z;
    double c_148=72*c_0*p2.z*p3.z;
    double c_149=-(27*c_32*c_2);
    double c_150=12*p2.z*c_29;
    double c_151=12*c_30;
    double c_152=-(p2.z*p3.z);
    double c_153=9*c_24*p3.y*c_1;
    double c_154=9*c_26*c_1;
    double c_155=-(36*p2.y*c_0*c_1);
    double c_156=-(36*p3.y*c_0*c_1);
    double c_157=-(24*p3.y*p1.z*c_28);
    double c_158=-(12*p3.y*c_33);
    double c_159=-(9*p2.y*c_25*p1.z*p3.z);
    double c_160=-(9*c_39*p2.z*p3.z);
    double c_161=9*p2.y*c_25*p2.z*p3.z;
    double c_162=-(72*p3.y*c_0*p2.z*p3.z);
    double c_163=12*p2.y*c_28*p3.z;
    double c_164=-(18*c_24*p3.y*c_2);
    double c_165=36*p2.y*c_0*c_2;
    double c_166=36*p2.y*p2.z*c_29;
    double c_167=4*p3.z;
    double c_168=8*p1.z*p3.z;
    double c_169=12*p2.z*p3.z;
    double c_170=-(9*p2.z*p3.z);
    double c_171=c_43+p3.z;
    double c_172=12*c_0;
    double c_173=3*p1.z*c_4;
    double c_174=-(5*p2.z*p3.z);
    double c_175=3*c_33;
    double c_176=3*c_28*p3.z;
    double c_177=5*c_30;
    double c_178=p30_4;
    double c_179=12*c_26*c_23;
    double c_180=45*c_68*p3.y*c_1;
    double c_181=-(12*c_26*c_33);
    double c_182=-(9*c_68*p3.y*p1.z*p3.z);
    double c_183=12*c_24*p3.y*c_27*p3.z;
    double c_184=-(27*c_39*c_25*c_2);
    double c_185=36*p2.y*c_25*c_0*c_2;
    double c_186=36*c_24*p3.y*p1.z*p2.z*c_2;
    double c_187=-(36*p2.y*c_25*c_1*c_2);
    double c_188=-(p1.z*p2.z);
    double c_189=15*p1.z*p3.z;
    double c_190=c_135+c_188+c_129+c_189+c_20+c_11;
    double c_191=c_15+p2.z+c_16;
    double c_192=12*p1.z*p3.z;
    double c_193=c_17+c_10+c_192+c_19+c_11;
    double c_194=p2.y*c_193;
    double c_195=-(9*c_32*p1.z*p2.z);
    double c_196=40*c_0*c_1;
    double c_197=9*c_32*p1.z*p3.z;
    double c_198=-(36*p1.z*p2.z*c_2);
    double c_199=-(12*c_30);
    double c_200=c_62+p2.z+c_61;
    double c_201=6*p1.z*p3.z;
    double c_202=c_135+c_105+c_91+c_201+c_169+c_11;
    double c_203=4*c_1;
    double c_204=-(3*p1.z*p3.z);
    double c_205=c_42+p2.z+c_167;
    double c_206=4*c_29;
    double c_207=p2.z+c_16;
    double c_208=c_42+c_9+c_61;
    double c_209=5*c_23;
    double c_210=-(2*p2.z*p3.z);
    double c_211=9*c_1*p3.z;
    double c_212=6*p2.z*c_2;
    double c_213=3*c_1*c_2;
    double c_214=-5*c_1;
    double c_215=c_214+c_89+c_2;
    double c_216=3*c_215;
    double c_217=c_93+c_8+c_216;
    double c_218=-(12*c_1);
    double c_219=c_0+c_1+c_131+c_132+c_133;
    double c_220=10*c_29;
    double c_221=c_9+c_61;
    double c_222=p1.z+p2.z+c_16;
    double c_223=3*c_1*p3.z;
    double c_224=3*p2.z*c_2;
    double c_225=9*p2.z*c_2;
    double c_226=3*c_29;
    double c_227=6*c_1*c_2;
    double c_228=3*p2.z*c_29;
    double c_229=-(12*c_39*c_23);
    double c_230=9*p2.y*c_69*p1.z*p2.z;
    double c_231=-(12*p2.y*c_25*c_27*p2.z);
    double c_232=30*c_39*c_25*c_1;
    double c_233=27*c_24*c_26*c_1;
    double c_234=-(36*c_24*p3.y*c_0*c_1);
    double c_235=-(36*p2.y*c_25*p1.z*c_1*p3.z);
    double c_236=-(30*c_24*c_26*c_2);
    double c_237=-(45*p2.y*c_69*c_2);
    double c_238=36*c_24*p3.y*c_1*c_2;
    double c_239=12*c_39*c_30;
    double c_240=-(p1.z*p3.z);
    double c_241=c_15+c_9+p3.z;
    double c_242=12*p1.z*p2.z;
    double c_243=c_17+c_242+c_18+c_19+c_13;
    double c_244=-(p3.y*c_243);
    double c_245=p2.z+c_88;
    double c_246=3*p1.z*c_245;
    double c_247=c_62+c_43+p3.z;
    double c_248=c_17+c_121+c_18+c_63+c_60+c_50;
    double c_249=-3*p2.z;
    double c_250=c_249+p3.z;
    double c_251=4*p2.z;
    double c_252=c_42+c_251+p3.z;
    double c_253=6*p1.z*p2.z;
    double c_254=c_135+c_253+c_18+c_168+c_169+c_87;
    double c_255=c_1+c_52+c_110;
    double c_256=9*c_0*c_255;
    double c_257=3*c_28;
    double c_258=-(8*c_29);
    double c_259=10*c_27;
    double c_260=4*c_28;
    double c_261=c_18+c_52+c_2;
    double c_262=c_53+c_6+p3.z;
    double c_263=c_1+c_89+c_132;
    double c_264=3*c_263;
    double c_265=c_93+c_246+c_264;
    double c_266=3*c_27*c_114;
    double c_267=c_1+c_20+c_125;
    double c_268=3*c_0*c_267;
    double c_269=18*p2.z*c_2;
    double c_270=-(10*c_29);
    double c_271=c_257+c_211+c_269+c_270;
    double c_272=p1.z*c_271;
    double c_273=10*p2.z*c_29;
    double c_274=-(15*c_30);
    double c_275=c_33+c_176+c_227+c_273+c_274;
    double c_276=3*c_275;
    double c_277=c_209+c_266+c_268+c_272+c_276;
    double c_278=-(5*c_30);
    double c_279=4*c_27;
    double c_280=10*c_28;
    double c_281=6*c_1*p3.z;
    double c_282=6*c_1;
    double c_283=-3*c_25*c_222;
    double c_284=2*c_27;
    double c_285=2*c_28;
    double c_286=2*c_29;
    double c_287=3*c_0*c_22;
    double c_288=4*p2.z*p3.z;
    double c_289=c_18+c_288+c_11;
    double c_290=p1.z*c_289;
    double c_291=c_284+c_285+c_223+c_224+c_286+c_287+c_290;
    double c_292=4*c_291;
    double c_293=c_283+c_292;
    double c_294=3*p1.z*c_171;
    double c_295=c_113+c_18+c_60+c_125+c_294;
    double c_296=10*c_2;
    double c_297=36*p2.z*p3.z;
    double c_298=c_1+c_20+c_134;
    double c_299=15*c_2;
    double c_300=c_0+c_121+c_47+c_122+c_123+c_299;
    double c_301=-3*c_1;
    return (-3*p10_5*(-4*p1.y*c_4*(6*p1.z+p2.z+p3.z)+p3.y*(-9*c_0-15*p1.z*p2.z+c_10+p1.z*p3.z+c_12+c_2)+p2.y*c_190)+3*c_90*
        p3.x*(-3*p1.y*c_4*(p1.z+c_6+c_16)-p3.y*(c_5+c_31+c_13+c_36)+p2.y*(c_5-15*c_1+15*p2.z*p3.z+c_21+c_8))-3*p20_5*(4*p2.y*
        c_14*(p1.z+6*p2.z+p3.z)+p3.y*(c_5+c_47+c_152+c_110+c_8)+p1.y*(c_0+p1.z*(p2.z-3*p3.z)-3*(c_18+c_89+c_2)))-3*p10_4*(p2.x*
        (3*p3.y*c_56*c_241+c_194+p1.y*(c_146-7*c_1+c_12+c_13-15*p1.z*c_22))+p3.x*(-3*p2.y*c_14*c_191+c_244+p1.y*(-15*c_0+c_18+c_20+c_21+15*
        p1.z*c_22)))+c_77*(-18*c_24*p3.y*c_0+c_37-3*c_26*c_0+8*p2.y*c_23+c_38-90*c_24*p3.y*p1.z*p2.z-36*p2.y*c_25*p1.z*
        p2.z-9*c_26*p1.z*p2.z+32*p2.y*c_27*p2.z+36*p3.y*c_27*p2.z-30*c_24*p3.y*c_1-10*p2.y*c_25*c_1-2*c_26*c_1+80*p2.y*c_0*
        c_1+72*p3.y*c_0*c_1+160*p2.y*p1.z*c_28+120*p3.y*p1.z*c_28-20*p3.y*c_33+c_95-18*p2.y*c_25*p1.z*p3.z+c_96+12*p3.y*c_27*
        p3.z-10*c_24*p3.y*p2.z*p3.z-8*p2.y*c_25*p2.z*p3.z-3*c_26*p2.z*p3.z+c_98+c_40-160*p2.y*c_28*p3.z-40*p3.y*c_28*p3.z-2*
        c_24*p3.y*c_2-3*p2.y*c_25*c_2-2*c_26*c_2+12*p3.y*c_0*c_2+36*p3.y*p1.z*p2.z*c_2-80*p2.y*c_1*c_2-40*p3.y*c_1*c_2+c_102-32*
        p2.y*p2.z*c_29-28*p3.y*p2.z*c_29-8*p2.y*c_30-12*p3.y*c_30+c_41*c_116+c_45*(-3*p3.y*c_14*c_44+p2.y*(c_5+c_105+c_31+18*p1.z*
        p3.z+c_297+c_34))+p1.y*(12*c_23+c_195+28*c_27*p2.z-36*c_32*c_1+c_196+40*p1.z*c_28+c_108+c_197-12*c_27*p3.z+c_147-36*c_0*
        p2.z*p3.z-72*p1.z*c_1*p3.z-120*c_28*p3.z+27*c_32*c_2-12*c_0*c_2+c_198-72*c_1*c_2-12*p1.z*c_29-36*p2.z*c_29+c_199-18*p2.y*
        p3.y*c_14*c_78+2*c_24*(c_0+c_49+15*c_1+c_59+c_123+c_34)-3*c_25*c_14*c_107)+3*c_32*(-(p3.y*(c_5+c_31+c_20+c_50+c_46))+p2.y*
        (c_5+c_91+c_48+c_34+c_36)))+c_55*p3.x*(18*c_39*c_0+c_37+c_136-12*p2.y*c_23+c_38+90*c_39*p1.z*p2.z-27*p2.y*c_25*p1.z*p2.z-18*
        c_26*p1.z*p2.z-36*p2.y*c_27*p2.z+c_139+30*c_39*c_1-6*p2.y*c_25*c_1-3*c_26*c_1-72*p2.y*c_0*c_1+c_94-120*p2.y*p1.z*c_28+48*
        p3.y*p1.z*c_28+180*p2.y*c_33+20*p3.y*c_33+18*c_39*p1.z*p3.z-27*p2.y*c_25*p1.z*p3.z-36*c_26*p1.z*p3.z-12*p2.y*c_27*
        p3.z+24*p3.y*c_27*p3.z+10*c_39*p2.z*p3.z-9*p2.y*c_25*p2.z*p3.z-8*c_26*p2.z*p3.z-36*p2.y*c_0*p2.z*p3.z+48*p3.y*
        c_0*p2.z*p3.z-72*p2.y*p1.z*c_1*p3.z+c_40+40*p2.y*c_28*p3.z+2*c_39*c_2-6*p2.y*c_25*c_2-10*c_26*c_2-12*p2.y*c_0*c_2+c_144-36*
        p2.y*p1.z*p2.z*c_2+72*p3.y*p1.z*p2.z*c_2-24*p2.y*c_1*c_2+c_101-12*p2.y*p1.z*c_29+48*p3.y*p1.z*c_29-36*p2.y*p2.z*
        c_29-64*p3.y*p2.z*c_29-20*p2.y*c_30-60*p3.y*c_30-3*c_41*c_4*c_44+3*c_45*(p2.y*(c_5+c_111+c_218+c_122+c_20+c_112)+p3.y*(-3*
        c_0-4*p1.z*p2.z+c_10+2*p1.z*p3.z+c_52+c_134))+3*c_32*(-3*p1.y*c_4*(p1.z+c_43+c_167)+p2.y*(c_5+c_58+c_20+c_296+c_46)-p3.y*
        (c_5+c_47+c_48+c_87+6*p1.z*c_207))+3*p1.y*(-(c_25*c_119)-2*p2.y*p3.y*(c_0+c_57+c_282+c_240+c_12+c_50)+6*c_24*(c_0-5*
        c_1+c_131+c_2+c_133)+4*c_4*(c_27+c_280+12*c_1*p3.z+c_225+c_206+c_0*c_64+3*p1.z*(c_51+c_52+c_2))))+p10_3*(-30*c_45*p2.y*c_0-10*p1.y*
        c_24*c_0-2*c_39*c_0+30*c_45*p3.y*c_0+10*p1.y*c_25*c_0+2*c_26*c_0-20*p2.y*c_23+20*p3.y*c_23-10*c_45*p2.y*p1.z*p2.z-8*
        p1.y*c_24*p1.z*p2.z-3*c_39*p1.z*p2.z+90*c_45*p3.y*p1.z*p2.z+36*p1.y*p2.y*p3.y*p1.z*p2.z+c_138+36*p1.y*c_25*p1.z*
        p2.z+9*p2.y*c_25*p1.z*p2.z+9*c_26*p1.z*p2.z-160*p1.y*c_27*p2.z-40*p2.y*c_27*p2.z-120*p3.y*c_27*p2.z-2*c_45*p2.y*c_1-3*
        p1.y*c_24*c_1-2*c_39*c_1+18*c_45*p3.y*c_1+18*p1.y*p2.y*p3.y*c_1+c_153+9*p1.y*c_25*c_1+6*p2.y*c_25*c_1+3*c_26*c_1-80*p1.y*
        c_0*c_1-40*p2.y*c_0*c_1-72*p3.y*c_0*c_1-32*p1.y*p1.z*c_28-28*p2.y*p1.z*c_28-36*p3.y*p1.z*c_28-8*p1.y*c_33-12*p2.y*
        c_33+c_158-90*c_45*p2.y*p1.z*p3.z-36*p1.y*c_24*p1.z*p3.z-9*c_39*p1.z*p3.z+10*c_45*p3.y*p1.z*p3.z-36*p1.y*p2.y*p3.y*
        p1.z*p3.z-9*c_24*p3.y*p1.z*p3.z+8*p1.y*c_25*p1.z*p3.z+c_159+3*c_26*p1.z*p3.z+160*p1.y*c_27*p3.z+120*p2.y*c_27*p3.z+40*
        p3.y*c_27*p3.z-18*c_45*p2.y*p2.z*p3.z-18*p1.y*c_24*p2.z*p3.z+c_160+18*c_45*p3.y*p2.z*p3.z-3*c_24*p3.y*p2.z*p3.z+18*
        p1.y*c_25*p2.z*p3.z+3*p2.y*c_25*p2.z*p3.z+c_97+c_141+c_162+36*p2.y*p1.z*c_1*p3.z+c_143+c_163-12*p3.y*c_28*p3.z-18*
        c_45*p2.y*c_2-9*p1.y*c_24*c_2-3*c_39*c_2+2*c_45*p3.y*c_2-18*p1.y*p2.y*p3.y*c_2-6*c_24*p3.y*c_2+3*p1.y*c_25*c_2+c_99+2*
        c_26*c_2+80*p1.y*c_0*c_2+72*p2.y*c_0*c_2+40*p3.y*c_0*c_2+c_100-36*p3.y*p1.z*p2.z*c_2+12*p2.y*c_1*c_2-12*p3.y*c_1*c_2+32*
        p1.y*p1.z*c_29+36*p2.y*p1.z*c_29+28*p3.y*p1.z*c_29+12*p2.y*p2.z*c_29+c_103+8*p1.y*c_30+c_104+12*p3.y*c_30+18*p2.x*
        p3.x*c_86*c_85-3*c_55*(3*p3.y*c_56*c_247+p2.y*(c_17+c_57+c_58+c_59+c_60+c_11)+p1.y*(c_17-4*p1.z*c_221-3*c_261))+3*c_32*(3*
        p2.y*c_14*c_200+p3.y*c_248+p1.y*(c_17-4*p1.z*c_64-3*c_130)))+p1.x*(45*c_65*p2.y*c_0+30*c_41*c_24*c_0+18*c_45*c_39*c_0+9*p1.y*
        c_68*c_0+3*c_67*c_0-45*c_65*p3.y*c_0-30*c_41*c_25*c_0-18*c_45*c_26*c_0-9*p1.y*c_69*c_0-3*c_70*c_0-180*c_45*p2.y*c_23-60*
        p1.y*c_24*c_23+c_229+180*c_45*p3.y*c_23+60*p1.y*c_25*c_23+c_179+40*p2.y*c_66-40*p3.y*c_66-72*c_72*p1.z*p2.z-45*c_65*p2.y*
        p1.z*p2.z-24*c_41*c_24*p1.z*p2.z-9*c_45*c_39*p1.z*p2.z+3*c_67*p1.z*p2.z+45*c_65*p3.y*p1.z*p2.z+36*c_41*p2.y*p3.y*
        p1.z*p2.z+27*c_45*c_24*p3.y*p1.z*p2.z+18*p1.y*c_39*p3.y*p1.z*p2.z+9*c_68*p3.y*p1.z*p2.z+36*c_41*c_25*p1.z*p2.z+27*c_45*
        p2.y*c_25*p1.z*p2.z+18*p1.y*c_24*c_25*p1.z*p2.z+9*c_39*c_25*p1.z*p2.z+27*c_45*c_26*p1.z*p2.z+18*p1.y*p2.y*c_26*
        p1.z*p2.z+9*c_24*c_26*p1.z*p2.z+18*p1.y*c_69*p1.z*p2.z+c_230+9*c_70*p1.z*p2.z+160*c_41*c_27*p2.z-40*c_45*p2.y*c_27*
        p2.z-64*p1.y*c_24*c_27*p2.z-28*c_39*c_27*p2.z-120*c_45*p3.y*c_27*p2.z-48*p1.y*p2.y*p3.y*c_27*p2.z-12*c_24*p3.y*c_27*p2.z-48*
        p1.y*c_25*c_27*p2.z+c_231-12*c_26*c_27*p2.z+40*p2.y*c_71*p2.z+24*p3.y*c_71*p2.z-12*c_72*c_1-21*c_65*p2.y*c_1-27*c_41*
        c_24*c_1-30*c_45*c_39*c_1-30*p1.y*c_68*c_1-27*c_67*c_1+9*c_65*p3.y*c_1+18*c_41*p2.y*p3.y*c_1+27*c_45*c_24*p3.y*c_1+36*
        p1.y*c_39*p3.y*c_1+c_180+9*c_41*c_25*c_1+18*c_45*p2.y*c_25*c_1+27*p1.y*c_24*c_25*c_1+36*c_39*c_25*c_1+9*c_45*c_26*c_1+18*p1.y*
        p2.y*c_26*c_1+c_233+9*p1.y*c_69*c_1+18*p2.y*c_69*c_1+9*c_70*c_1+80*c_41*c_0*c_1+24*c_45*p2.y*c_0*c_1-36*p1.y*c_24*c_0*c_1-40*
        c_39*c_0*c_1-72*c_45*p3.y*c_0*c_1-72*p1.y*p2.y*p3.y*c_0*c_1+c_234-36*p1.y*c_25*c_0*c_1-24*p2.y*c_25*c_0*c_1-12*c_26*c_0*
        c_1+40*p2.y*c_23*c_1+24*p3.y*c_23*c_1+32*c_41*p1.z*c_28+36*c_45*p2.y*p1.z*c_28-40*c_39*p1.z*c_28-36*c_45*p3.y*p1.z*
        c_28-72*p1.y*p2.y*p3.y*p1.z*c_28-72*c_24*p3.y*p1.z*c_28-24*p1.y*c_25*p1.z*c_28-36*p2.y*c_25*p1.z*c_28-12*c_26*p1.z*c_28+40*
        p2.y*c_27*c_28+24*p3.y*c_27*c_28+8*c_41*c_33+20*c_45*p2.y*c_33+20*p1.y*c_24*c_33-20*c_39*c_33-12*c_45*p3.y*c_33-48*p1.y*
        p2.y*p3.y*c_33-120*c_24*p3.y*c_33-12*p1.y*c_25*c_33-48*p2.y*c_25*c_33+c_181+40*p2.y*c_0*c_33+24*p3.y*c_0*c_33+40*p2.y*
        p1.z*c_73+24*p3.y*p1.z*c_73+40*p2.y*c_74+24*p3.y*c_74+72*c_72*p1.z*p3.z-45*c_65*p2.y*p1.z*p3.z-36*c_41*c_24*p1.z*
        p3.z-27*c_45*c_39*p1.z*p3.z-18*p1.y*c_68*p1.z*p3.z-9*c_67*p1.z*p3.z+45*c_65*p3.y*p1.z*p3.z-36*c_41*p2.y*p3.y*p1.z*
        p3.z-27*c_45*c_24*p3.y*p1.z*p3.z-18*p1.y*c_39*p3.y*p1.z*p3.z+c_182+24*c_41*c_25*p1.z*p3.z-27*c_45*p2.y*c_25*p1.z*p3.z-18*
        p1.y*c_24*c_25*p1.z*p3.z-9*c_39*c_25*p1.z*p3.z+9*c_45*c_26*p1.z*p3.z-18*p1.y*p2.y*c_26*p1.z*p3.z-9*c_24*c_26*p1.z*
        p3.z-9*p2.y*c_69*p1.z*p3.z-3*c_70*p1.z*p3.z-160*c_41*c_27*p3.z+120*c_45*p2.y*c_27*p3.z+48*p1.y*c_24*c_27*p3.z+12*
        c_39*c_27*p3.z+40*c_45*p3.y*c_27*p3.z+48*p1.y*p2.y*p3.y*c_27*p3.z+c_183+64*p1.y*c_25*c_27*p3.z+12*p2.y*c_25*c_27*p3.z+28*
        c_26*c_27*p3.z-24*p2.y*c_71*p3.z-40*p3.y*c_71*p3.z-9*c_65*p2.y*p2.z*p3.z-18*c_41*c_24*p2.z*p3.z-27*c_45*c_39*p2.z*
        p3.z-36*p1.y*c_68*p2.z*p3.z-45*c_67*p2.z*p3.z+9*c_65*p3.y*p2.z*p3.z-9*c_45*c_24*p3.y*p2.z*p3.z-18*p1.y*c_39*p3.y*
        p2.z*p3.z-27*c_68*p3.y*p2.z*p3.z+18*c_41*c_25*p2.z*p3.z+9*c_45*p2.y*c_25*p2.z*p3.z-9*c_39*c_25*p2.z*p3.z+27*c_45*c_26*
        p2.z*p3.z+18*p1.y*p2.y*c_26*p2.z*p3.z+9*c_24*c_26*p2.z*p3.z+36*p1.y*c_69*p2.z*p3.z+27*p2.y*c_69*p2.z*p3.z+45*c_70*
        p2.z*p3.z+72*c_45*p2.y*c_0*p2.z*p3.z+72*p1.y*c_24*c_0*p2.z*p3.z+36*c_39*c_0*p2.z*p3.z-72*c_45*p3.y*c_0*p2.z*p3.z+12*
        c_24*p3.y*c_0*p2.z*p3.z-72*p1.y*c_25*c_0*p2.z*p3.z-12*p2.y*c_25*c_0*p2.z*p3.z-36*c_26*c_0*p2.z*p3.z-24*p2.y*c_23*
        p2.z*p3.z+24*p3.y*c_23*p2.z*p3.z+36*c_45*p2.y*p1.z*c_1*p3.z+72*p1.y*c_24*p1.z*c_1*p3.z+72*c_39*p1.z*c_1*p3.z-36*
        c_45*p3.y*p1.z*c_1*p3.z-24*p1.y*p2.y*p3.y*p1.z*c_1*p3.z-48*p1.y*c_25*p1.z*c_1*p3.z+c_235-36*c_26*p1.z*c_1*p3.z-24*
        p2.y*c_27*c_1*p3.z+24*p3.y*c_27*c_1*p3.z+12*c_45*p2.y*c_28*p3.z+48*p1.y*c_24*c_28*p3.z+120*c_39*c_28*p3.z-12*c_45*p3.y*
        c_28*p3.z-24*p1.y*p2.y*p3.y*c_28*p3.z-24*c_24*p3.y*c_28*p3.z-24*p1.y*c_25*c_28*p3.z-60*p2.y*c_25*c_28*p3.z-36*c_26*c_28*
        p3.z-24*p2.y*c_0*c_28*p3.z+24*p3.y*c_0*c_28*p3.z-24*p2.y*p1.z*c_33*p3.z+24*p3.y*p1.z*c_33*p3.z-24*p2.y*c_73*p3.z+24*
        p3.y*c_73*p3.z+12*c_72*c_2-9*c_65*p2.y*c_2-9*c_41*c_24*c_2-9*c_45*c_39*c_2-9*p1.y*c_68*c_2-9*c_67*c_2+21*c_65*p3.y*c_2-18*
        c_41*p2.y*p3.y*c_2-18*c_45*c_24*p3.y*c_2-18*p1.y*c_39*p3.y*c_2-18*c_68*p3.y*c_2+27*c_41*c_25*c_2-27*c_45*p2.y*c_25*
        c_2-27*p1.y*c_24*c_25*c_2+c_184+30*c_45*c_26*c_2-36*p1.y*p2.y*c_26*c_2-36*c_24*c_26*c_2+30*p1.y*c_69*c_2+c_237+27*c_70*c_2-80*
        c_41*c_0*c_2+72*c_45*p2.y*c_0*c_2+36*p1.y*c_24*c_0*c_2+12*c_39*c_0*c_2-24*c_45*p3.y*c_0*c_2+72*p1.y*p2.y*p3.y*c_0*c_2+24*
        c_24*p3.y*c_0*c_2+36*p1.y*c_25*c_0*c_2+c_185+40*c_26*c_0*c_2-24*p2.y*c_23*c_2-40*p3.y*c_23*c_2+36*c_45*p2.y*p1.z*p2.z*
        c_2+48*p1.y*c_24*p1.z*p2.z*c_2+36*c_39*p1.z*p2.z*c_2-36*c_45*p3.y*p1.z*p2.z*c_2+24*p1.y*p2.y*p3.y*p1.z*p2.z*c_2+c_186-72*
        p1.y*c_25*p1.z*p2.z*c_2-72*c_26*p1.z*p2.z*c_2-24*p2.y*c_27*p2.z*c_2+24*p3.y*c_27*p2.z*c_2+12*c_45*p2.y*c_1*c_2+36*
        p1.y*c_24*c_1*c_2+72*c_39*c_1*c_2-12*c_45*p3.y*c_1*c_2+c_238-36*p1.y*c_25*c_1*c_2+c_187-72*c_26*c_1*c_2-24*p2.y*c_0*c_1*c_2+24*
        p3.y*c_0*c_1*c_2-24*p2.y*p1.z*c_28*c_2+24*p3.y*p1.z*c_28*c_2-24*p2.y*c_33*c_2+24*p3.y*c_33*c_2-32*c_41*p1.z*c_29+36*
        c_45*p2.y*p1.z*c_29+24*p1.y*c_24*p1.z*c_29+12*c_39*p1.z*c_29-36*c_45*p3.y*p1.z*c_29+72*p1.y*p2.y*p3.y*p1.z*c_29+36*
        c_24*p3.y*p1.z*c_29+72*p2.y*c_25*p1.z*c_29+40*c_26*p1.z*c_29-24*p2.y*c_27*c_29-40*p3.y*c_27*c_29+12*c_45*p2.y*p2.z*c_29+24*
        p1.y*c_24*p2.z*c_29+36*c_39*p2.z*c_29-12*c_45*p3.y*p2.z*c_29+24*p1.y*p2.y*p3.y*p2.z*c_29+60*c_24*p3.y*p2.z*c_29-48*
        p1.y*c_25*p2.z*c_29+24*p2.y*c_25*p2.z*c_29-120*c_26*p2.z*c_29-24*p2.y*c_0*p2.z*c_29+24*p3.y*c_0*p2.z*c_29-24*p2.y*
        p1.z*c_1*c_29+24*p3.y*p1.z*c_1*c_29-24*p2.y*c_28*c_29+24*p3.y*c_28*c_29-8*c_41*c_30+12*c_45*p2.y*c_30+12*p1.y*c_24*c_30+c_239-20*
        c_45*p3.y*c_30+48*p1.y*p2.y*p3.y*c_30+48*c_24*p3.y*c_30-20*p1.y*c_25*c_30+120*p2.y*c_25*c_30+20*c_26*c_30-24*p2.y*
        c_0*c_30-40*p3.y*c_0*c_30-24*p2.y*p1.z*p2.z*c_30+24*p3.y*p1.z*p2.z*c_30-24*p2.y*c_1*c_30+24*p3.y*c_1*c_30-24*p2.y*p1.z*
        c_75-40*p3.y*p1.z*c_75-24*p2.y*p2.z*c_75+24*p3.y*p2.z*c_75-24*p2.y*c_76-40*p3.y*c_76+18*c_77*p3.x*c_78*c_85+6*p2.x*
        p3.x*c_85*(3*c_24*p1.z+4*p2.y*p3.y*p1.z+3*c_25*p1.z-8*c_27+6*c_24*p2.z+6*p2.y*p3.y*p2.z+3*c_25*p2.z-12*c_0*p2.z-12*
        p1.z*c_1-8*c_28+3*c_24*p3.z+6*p2.y*p3.y*p3.z+6*c_25*p3.z-12*c_0*p3.z-16*p1.z*p2.z*p3.z-12*c_1*p3.z-12*p1.z*c_2-12*
        p2.z*c_2+c_258+3*c_45*c_86+3*c_32*c_222+p1.y*(6*p2.y*p1.z+6*p3.y*p1.z+6*p2.y*p2.z+4*p3.y*p2.z+4*p2.y*p3.z+6*p3.y*
        p3.z))+3*c_178*(3*p2.y*c_14*(c_53+p2.z+c_88)+p1.y*(c_5-6*p1.z*p2.z+c_10+c_92+c_87)+p3.y*c_265)-3*c_90*(3*p3.y*c_56*c_262+p1.y*
        (c_5+c_91-6*p1.z*p3.z+c_92+c_13)+p2.y*c_217)+c_55*(-2*c_39*c_0-18*c_24*p3.y*c_0-12*p2.y*c_25*c_0-6*c_26*c_0+c_137+48*
        p3.y*c_23-10*c_39*p1.z*p2.z-18*c_24*p3.y*p1.z*p2.z-9*p2.y*c_25*p1.z*p2.z-3*c_26*p1.z*p2.z+36*p2.y*c_27*p2.z+60*p3.y*
        c_27*p2.z-30*c_39*c_1+90*c_24*p3.y*c_1+36*p2.y*c_25*c_1+c_154+24*p2.y*c_0*c_1+c_94-40*p2.y*p1.z*c_28+c_157-180*p2.y*c_33-120*
        p3.y*c_33+c_140+c_95-15*p2.y*c_25*p1.z*p3.z+c_96+12*p2.y*c_27*p3.z+36*p3.y*c_27*p3.z-90*c_39*p2.z*p3.z-18*c_24*
        p3.y*p2.z*p3.z+c_161+c_97+36*p2.y*c_0*p2.z*p3.z+c_98+c_142+120*p2.y*c_28*p3.z-72*p3.y*c_28*p3.z-18*c_39*c_2+c_164+c_99+12*
        p2.y*c_0*c_2+24*p3.y*c_0*c_2+c_100+12*p3.y*p1.z*p2.z*c_2+72*p2.y*c_1*c_2+c_101+12*p2.y*p1.z*c_29+c_102+c_166+c_103+c_104+c_41*
        (c_17+c_105+c_18+36*p1.z*p3.z+c_120+c_34)+9*c_32*c_145*c_107-p1.y*(-60*c_23+18*c_32*p1.z*p2.z-64*c_27*p2.z+27*c_32*
        c_1-36*c_0*c_1+c_108-18*c_32*p1.z*p3.z+48*c_27*p3.z+c_148+72*p1.z*c_1*p3.z+48*c_28*p3.z+c_149+36*c_0*c_2+48*p1.z*p2.z*
        c_2+36*c_1*c_2+24*p1.z*c_29+24*p2.z*c_29+c_151+3*c_25*c_128+6*p2.y*p3.y*(c_109+c_58+c_12+c_110+p1.z*c_171))+3*c_45*(p3.y*
        (c_124+c_111+c_18+c_63+c_89+c_112)+p2.y*c_116))-c_32*(-3*c_24*p3.y*c_119+c_41*(c_17+36*p1.z*p2.z+c_47+c_168+c_120+c_11)-2*
        c_26*c_300-3*c_39*c_14*c_107+3*c_45*(p3.y*(c_113+c_121+c_18+c_63+c_60+c_125)+p2.y*(c_124+c_57+c_203+c_204+c_89+c_11))+4*p3.y*
        c_277-p1.y*(3*c_24*c_128+6*p2.y*p3.y*(c_109+c_129+c_12+c_50+p1.z*c_114)+4*(-15*c_23+c_175+4*c_27*(c_43-4*p3.z)+6*c_28*p3.z+9*
        c_1*c_2+c_150+c_177+c_256+6*p1.z*p2.z*c_130))-6*p2.y*(3*c_25*c_219-2*c_14*(c_279+c_28+c_223+c_212+c_220+3*c_0*c_114+2*p1.z*
        c_298))))+p10_2*(9*c_55*p3.x*c_44*c_85-3*c_77*(3*p3.y*c_56*c_252+p2.y*c_202+p1.y*(c_109+c_91+c_170+c_13-3*p1.z*c_114))+p2.x*
        (-3*c_39*c_0-9*c_24*p3.y*c_0+c_37+c_136+c_137+120*p3.y*c_23-8*c_39*p1.z*p2.z+c_138+6*p2.y*c_25*p1.z*p2.z+3*c_26*p1.z*
        p2.z+c_139-10*c_39*c_1+36*c_24*p3.y*c_1+18*p2.y*c_25*c_1+6*c_26*c_1+c_155+c_156-64*p2.y*p1.z*c_28-60*p3.y*p1.z*c_28-60*
        p2.y*c_33-48*p3.y*c_33+c_140-15*c_24*p3.y*p1.z*p3.z-12*p2.y*c_25*p1.z*p3.z+c_96+48*p2.y*c_27*p3.z+72*p3.y*c_27*p3.z-36*
        c_39*p2.z*p3.z-9*c_24*p3.y*p2.z*p3.z+6*p2.y*c_25*p2.z*p3.z+c_97+c_141+c_142+c_143+48*p2.y*c_28*p3.z-36*p3.y*c_28*
        p3.z-9*c_39*c_2-12*c_24*p3.y*c_2+c_99+c_165+c_144+48*p2.y*p1.z*p2.z*c_2-12*p3.y*p1.z*p2.z*c_2+36*p2.y*c_1*c_2-24*p3.y*
        c_1*c_2+24*p2.y*p1.z*c_29+c_102+24*p2.y*p2.z*c_29+c_103+c_104+9*c_32*c_145*c_208+18*c_45*p3.y*(-5*c_0+c_1+c_131+c_2+c_133)+2*
        c_41*(c_146+c_1+c_60+c_34+5*p1.z*(p2.z+9*p3.z))-p1.y*(-180*c_23+27*c_32*p1.z*p2.z-40*c_27*p2.z+18*c_32*c_1+24*c_0*c_1+36*
        p1.z*c_28+c_108-27*c_32*p1.z*p3.z+120*c_27*p3.z+c_147+c_148+36*p1.z*c_1*p3.z+12*c_28*p3.z+c_149+72*c_0*c_2+36*p1.z*
        p2.z*c_2+12*c_1*c_2+36*p1.z*c_29+c_150+c_151+3*c_25*(c_172+c_111-4*c_1+c_63+c_174+c_13)+6*p2.y*p3.y*(c_109+c_111+c_58+c_63+c_152+c_2)+3*
        c_24*c_116))+p3.x*(9*c_39*c_0+9*c_24*p3.y*c_0+9*p2.y*c_25*c_0+3*c_26*c_0-120*p2.y*c_23-20*p3.y*c_23+9*c_39*p1.z*
        p2.z+12*c_24*p3.y*p1.z*p2.z+15*p2.y*c_25*p1.z*p2.z+18*c_26*p1.z*p2.z-72*p2.y*c_27*p2.z-48*p3.y*c_27*p2.z+c_153+12*
        p2.y*c_25*c_1+c_154+c_155+c_156-12*p2.y*p1.z*c_28+c_157+c_158-3*c_39*p1.z*p3.z-6*c_24*p3.y*p1.z*p3.z+c_159+8*c_26*p1.z*
        p3.z-24*p2.y*c_27*p3.z+c_160-6*c_24*p3.y*p2.z*p3.z+c_161+36*c_26*p2.z*p3.z+c_162+12*p2.y*p1.z*c_1*p3.z-48*p3.y*p1.z*
        c_1*p3.z+c_163-24*p3.y*c_28*p3.z-6*c_39*c_2+c_164-36*p2.y*c_25*c_2+10*c_26*c_2+c_165+c_144+c_100-72*p3.y*p1.z*p2.z*c_2+24*
        p2.y*c_1*c_2+c_101+60*p2.y*p1.z*c_29+64*p3.y*p1.z*c_29+c_166-48*p3.y*p2.z*c_29+48*p2.y*c_30+60*p3.y*c_30+18*c_45*
        p2.y*(5*c_0+c_129+c_152+c_110-p1.z*c_22)-2*c_41*(c_146+c_47+c_60+c_2+5*p1.z*(9*p2.z+p3.z))+3*c_32*(3*p2.y*c_14*c_205+p3.y*
        c_254+p1.y*(c_109+c_10+c_170+c_87-3*p1.z*c_171))+p1.y*(6*p2.y*p3.y*(c_109+c_1+c_173+c_152+c_50)+3*c_24*(c_172+c_10+c_173+c_174-4*
        c_2)+3*c_25*c_295+4*(-45*c_23+c_175+10*c_27*(c_43+c_3)+c_176+c_213+c_228+c_177+6*c_0*(c_18+c_20+c_2)+9*p1.z*(c_28+c_1*
        p3.z+p2.z*c_2+c_29)))))+p2.x*(9*c_178*p2.y*c_0+9*c_32*c_39*c_0+12*c_67*c_0-9*c_178*p3.y*c_0+9*c_32*c_24*p3.y*c_0-9*c_68*p3.y*
        c_0-9*c_39*c_25*c_0-18*c_32*c_26*c_0-9*c_24*c_26*c_0-9*p2.y*c_69*c_0-9*c_70*c_0-12*c_32*p2.y*c_23-8*c_39*c_23+12*c_32*p3.y*
        c_23+12*c_24*p3.y*c_23+12*p2.y*c_25*c_23+c_179-24*p3.y*c_66+18*c_178*p2.y*p1.z*p2.z+36*c_32*c_39*p1.z*p2.z+72*c_67*p1.z*
        p2.z-9*c_178*p3.y*p1.z*p2.z+27*c_32*c_24*p3.y*p1.z*p2.z-45*c_68*p3.y*p1.z*p2.z-36*c_39*c_25*p1.z*p2.z-18*c_32*c_26*
        p1.z*p2.z-27*c_24*c_26*p1.z*p2.z-18*p2.y*c_69*p1.z*p2.z-9*c_70*p1.z*p2.z-24*c_32*p2.y*c_27*p2.z-32*c_39*c_27*p2.z+12*
        c_32*p3.y*c_27*p2.z+36*c_24*p3.y*c_27*p2.z+24*p2.y*c_25*c_27*p2.z+12*c_26*c_27*p2.z-24*p3.y*c_71*p2.z-9*c_178*p2.y*
        c_1+10*c_32*c_39*c_1-21*c_178*p3.y*c_1+6*c_32*c_24*p3.y*c_1+c_180+c_232-2*c_32*c_26*c_1+18*c_24*c_26*c_1+9*p2.y*c_69*c_1+3*c_70*
        c_1-36*c_32*p2.y*c_0*c_1-80*c_39*c_0*c_1+12*c_32*p3.y*c_0*c_1+72*c_24*p3.y*c_0*c_1+36*p2.y*c_25*c_0*c_1+12*c_26*c_0*c_1-24*
        p3.y*c_23*c_1-48*c_32*p2.y*p1.z*c_28-160*c_39*p1.z*c_28+12*c_32*p3.y*p1.z*c_28+120*c_24*p3.y*p1.z*c_28+48*p2.y*c_25*
        p1.z*c_28+12*c_26*p1.z*c_28-24*p3.y*c_27*c_28+60*c_32*p2.y*c_33+20*c_32*p3.y*c_33-180*c_24*p3.y*c_33-60*p2.y*c_25*
        c_33+c_181-24*p3.y*c_0*c_33-24*p3.y*p1.z*c_73+40*p3.y*c_74+36*c_178*p2.y*p1.z*p3.z+18*c_32*c_39*p1.z*p3.z-45*c_178*p3.y*p1.z*
        p3.z+27*c_32*c_24*p3.y*p1.z*p3.z+c_182-18*c_39*c_25*p1.z*p3.z-90*c_32*c_26*p1.z*p3.z-27*c_24*c_26*p1.z*p3.z-36*p2.y*
        c_69*p1.z*p3.z-45*c_70*p1.z*p3.z-24*c_32*p2.y*c_27*p3.z+36*c_32*p3.y*c_27*p3.z+c_183+24*p2.y*c_25*c_27*p3.z+36*c_26*
        c_27*p3.z-24*p3.y*c_71*p3.z+8*c_32*c_39*p2.z*p3.z-72*c_67*p2.z*p3.z-45*c_178*p3.y*p2.z*p3.z+9*c_32*c_24*p3.y*p2.z*
        p3.z-45*c_68*p3.y*p2.z*p3.z-24*c_39*c_25*p2.z*p3.z-10*c_32*c_26*p2.z*p3.z-9*c_24*c_26*p2.z*p3.z+3*c_70*p2.z*p3.z-48*
        c_32*p2.y*c_0*p2.z*p3.z+36*c_32*p3.y*c_0*p2.z*p3.z+36*c_24*p3.y*c_0*p2.z*p3.z+48*p2.y*c_25*c_0*p2.z*p3.z+36*c_26*c_0*
        p2.z*p3.z-24*p3.y*c_23*p2.z*p3.z-72*c_32*p2.y*p1.z*c_1*p3.z+36*c_32*p3.y*p1.z*c_1*p3.z+72*c_24*p3.y*p1.z*c_1*p3.z+72*
        p2.y*c_25*p1.z*c_1*p3.z+36*c_26*p1.z*c_1*p3.z-24*p3.y*c_27*c_1*p3.z+64*c_32*p2.y*c_28*p3.z+160*c_39*c_28*p3.z+36*
        c_32*p3.y*c_28*p3.z-40*c_24*p3.y*c_28*p3.z-64*p2.y*c_25*c_28*p3.z-28*c_26*c_28*p3.z-24*p3.y*c_0*c_28*p3.z-24*p3.y*p1.z*
        c_33*p3.z+40*p3.y*c_73*p3.z+30*c_178*p2.y*c_2+3*c_32*c_39*c_2-12*c_67*c_2+45*c_178*p3.y*c_2+6*c_32*c_24*p3.y*c_2-21*c_68*
        p3.y*c_2+c_184-30*c_32*c_26*c_2+c_236-30*p2.y*c_69*c_2-27*c_70*c_2-36*c_32*p2.y*c_0*c_2+72*c_32*p3.y*c_0*c_2+12*c_24*p3.y*
        c_0*c_2+c_185+72*c_26*c_0*c_2-24*p3.y*c_23*c_2-72*c_32*p2.y*p1.z*p2.z*c_2+72*c_32*p3.y*p1.z*p2.z*c_2+c_186+72*p2.y*c_25*
        p1.z*p2.z*c_2+72*c_26*p1.z*p2.z*c_2-24*p3.y*c_27*p2.z*c_2+36*c_32*p2.y*c_1*c_2+80*c_39*c_1*c_2+24*c_32*p3.y*c_1*c_2+24*
        c_24*p3.y*c_1*c_2+c_187-40*c_26*c_1*c_2-24*p3.y*c_0*c_1*c_2-24*p3.y*p1.z*c_28*c_2+40*p3.y*c_33*c_2-48*c_32*p2.y*p1.z*c_29+120*
        c_32*p3.y*p1.z*c_29+12*c_24*p3.y*p1.z*c_29+48*p2.y*c_25*p1.z*c_29+120*c_26*p1.z*c_29-24*p3.y*c_27*c_29+32*c_39*p2.z*
        c_29-40*c_32*p3.y*p2.z*c_29+36*c_24*p3.y*p2.z*c_29-40*c_26*p2.z*c_29-24*p3.y*c_0*p2.z*c_29-24*p3.y*p1.z*c_1*c_29+40*
        p3.y*c_28*c_29-20*c_32*p2.y*c_30+8*c_39*c_30-180*c_32*p3.y*c_30+20*c_24*p3.y*c_30+20*p2.y*c_25*c_30-20*c_26*c_30-24*p3.y*
        c_0*c_30-24*p3.y*p1.z*p2.z*c_30+40*p3.y*c_1*c_30-24*p3.y*p1.z*c_75+40*p3.y*p2.z*c_75+40*p3.y*c_76+3*c_72*c_190+3*c_65*
        (-3*p3.y*c_14*c_191+c_194)+c_41*(20*c_23+c_195+40*c_27*p2.z-6*c_32*c_1+c_196+28*p1.z*c_28+12*c_33+c_197-120*c_27*p3.z-3*c_32*
        p2.z*p3.z-72*c_0*p2.z*p3.z-36*p1.z*c_1*p3.z-12*c_28*p3.z+9*c_32*c_2-72*c_0*c_2+c_198-12*c_1*c_2-36*p1.z*c_29-12*p2.z*
        c_29+c_199-18*p2.y*p3.y*c_14*c_86-9*c_25*c_14*c_200+3*c_24*(c_17+c_58+c_60+c_11+c_115))+c_45*(-9*c_24*p3.y*c_14*c_44+3*c_39*
        c_202+3*c_32*(-(p3.y*(c_5+c_49+c_203+c_204+c_20+c_118))+p2.y*(c_5-2*p1.z*p2.z+c_58+4*p1.z*p3.z+c_210+c_11))+3*p3.y*c_14*(-3*
        c_25*c_205+4*(c_259+c_28+2*c_1*p3.z+c_224+c_206+6*c_0*c_207+3*p1.z*c_130))-p2.y*(9*c_25*c_14*c_208+4*(c_209+12*c_27*p3.z-9*
        c_0*(c_1+c_210+c_110)+2*p1.z*(-8*c_28+c_211+c_212+c_226)+3*(-5*c_33+4*c_28*p3.z+c_213+2*p2.z*c_29+c_30))))+p1.y*(-18*c_69*
        c_0+48*c_25*c_23-40*c_66-9*c_69*p1.z*p2.z+36*c_25*c_27*p2.z-40*c_71*p2.z+24*c_25*c_0*c_1-40*c_23*c_1+12*c_25*p1.z*c_28-40*
        c_27*c_28-40*c_0*c_33-40*p1.z*c_73-40*c_74-27*c_69*p1.z*p3.z+60*c_25*c_27*p3.z+24*c_71*p3.z+9*c_69*p2.z*p3.z+36*c_25*c_0*
        p2.z*p3.z+24*c_23*p2.z*p3.z+12*c_25*p1.z*c_1*p3.z+24*c_27*c_1*p3.z-12*c_25*c_28*p3.z+24*c_0*c_28*p3.z+24*p1.z*c_33*p3.z+24*
        c_73*p3.z+45*c_69*c_2+36*c_25*c_0*c_2+24*c_23*c_2+24*c_27*p2.z*c_2-36*c_25*c_1*c_2+24*c_0*c_1*c_2+24*p1.z*c_28*c_2+24*
        c_33*c_2-24*c_25*p1.z*c_29+24*c_27*c_29-72*c_25*p2.z*c_29+24*c_0*p2.z*c_29+24*p1.z*c_1*c_29+24*c_28*c_29-120*c_25*c_30+24*c_0*
        c_30+24*p1.z*p2.z*c_30+24*c_1*c_30+24*p1.z*c_75+24*p2.z*c_75+24*c_76-18*c_39*p3.y*c_14*c_78-9*c_178*c_4*(p1.z+c_9+c_88)+3*
        c_68*c_217+3*c_32*(c_24*(c_117+c_57+c_218+c_122+c_12+c_11)+2*p2.y*p3.y*(c_0+c_188+c_58+c_63+c_12+c_134)-6*c_25*c_219+4*c_4*
        (c_27+c_260+c_211+12*p2.z*c_2+c_220+c_0*c_221+3*p1.z*(c_1+c_52+c_125)))+6*p2.y*p3.y*c_14*c_293-c_24*(9*c_25*c_14*c_107+4*(c_209+3*
        c_27*c_171+3*c_0*(c_51+c_20+c_2)+p1.z*(-10*c_28+18*c_1*p3.z+c_225+c_226)+3*(-15*c_33+10*c_28*p3.z+c_227+c_228+c_30)))))+p3.x*
        (9*c_67*c_0+9*c_68*p3.y*c_0+9*c_39*c_25*c_0+9*c_24*c_26*c_0+9*p2.y*c_69*c_0-12*c_70*c_0+c_229-12*c_24*p3.y*c_23-12*p2.y*
        c_25*c_23+8*c_26*c_23+24*p2.y*c_66+45*c_67*p1.z*p2.z+36*c_68*p3.y*p1.z*p2.z+27*c_39*c_25*p1.z*p2.z+18*c_24*c_26*p1.z*
        p2.z+c_230-36*c_39*c_27*p2.z-24*c_24*p3.y*c_27*p2.z+c_231+24*p2.y*c_71*p2.z+27*c_67*c_1+30*c_68*p3.y*c_1+c_232+c_233+21*
        p2.y*c_69*c_1+12*c_70*c_1-72*c_39*c_0*c_1+c_234-12*p2.y*c_25*c_0*c_1+24*p2.y*c_23*c_1-120*c_39*p1.z*c_28-48*c_24*p3.y*p1.z*
        c_28-12*p2.y*c_25*p1.z*c_28+24*p2.y*c_27*c_28+20*c_39*c_33-20*c_24*p3.y*c_33-20*p2.y*c_25*c_33-8*c_26*c_33+24*p2.y*c_0*
        c_33+24*p2.y*p1.z*c_73-40*p2.y*c_74+9*c_67*p1.z*p3.z+18*c_68*p3.y*p1.z*p3.z+27*c_39*c_25*p1.z*p3.z+36*c_24*c_26*p1.z*
        p3.z+45*p2.y*c_69*p1.z*p3.z-72*c_70*p1.z*p3.z-12*c_39*c_27*p3.z-24*c_24*p3.y*c_27*p3.z-36*p2.y*c_25*c_27*p3.z+32*c_26*
        c_27*p3.z+24*p2.y*c_71*p3.z-3*c_67*p2.z*p3.z+9*c_39*c_25*p2.z*p3.z+24*c_24*c_26*p2.z*p3.z+45*p2.y*c_69*p2.z*p3.z+72*
        c_70*p2.z*p3.z-36*c_39*c_0*p2.z*p3.z-48*c_24*p3.y*c_0*p2.z*p3.z-36*p2.y*c_25*c_0*p2.z*p3.z+24*p2.y*c_23*p2.z*p3.z-72*
        c_39*p1.z*c_1*p3.z-72*c_24*p3.y*p1.z*c_1*p3.z+c_235+24*p2.y*c_27*c_1*p3.z+40*c_39*c_28*p3.z-36*p2.y*c_25*c_28*p3.z-32*
        c_26*c_28*p3.z+24*p2.y*c_0*c_28*p3.z+24*p2.y*p1.z*c_33*p3.z-40*p2.y*c_73*p3.z-3*c_67*c_2-9*c_68*p3.y*c_2-18*c_39*
        c_25*c_2+c_236+c_237-12*c_39*c_0*c_2-36*c_24*p3.y*c_0*c_2-72*p2.y*c_25*c_0*c_2+80*c_26*c_0*c_2+24*p2.y*c_23*c_2-36*c_39*p1.z*
        p2.z*c_2-72*c_24*p3.y*p1.z*p2.z*c_2-72*p2.y*c_25*p1.z*p2.z*c_2+24*p2.y*c_27*p2.z*c_2+40*c_39*c_1*c_2+c_238-24*p2.y*c_25*
        c_1*c_2-80*c_26*c_1*c_2+24*p2.y*c_0*c_1*c_2+24*p2.y*p1.z*c_28*c_2-40*p2.y*c_33*c_2-12*c_39*p1.z*c_29-48*c_24*p3.y*p1.z*
        c_29-120*p2.y*c_25*p1.z*c_29+160*c_26*p1.z*c_29+24*p2.y*c_27*c_29+28*c_39*p2.z*c_29+64*c_24*p3.y*p2.z*c_29+40*p2.y*c_25*
        p2.z*c_29-160*c_26*p2.z*c_29+24*p2.y*c_0*p2.z*c_29+24*p2.y*p1.z*c_1*c_29-40*p2.y*c_28*c_29+c_239+60*c_24*p3.y*c_30+180*
        p2.y*c_25*c_30+24*p2.y*c_0*c_30+24*p2.y*p1.z*p2.z*c_30-40*p2.y*c_1*c_30+24*p2.y*p1.z*c_75-40*p2.y*p2.z*c_75-40*p2.y*
        c_76-3*c_72*(c_135+15*p1.z*p2.z+c_18+c_240+c_20+c_110)+3*c_65*(3*p2.y*c_56*c_241+c_244)+3*c_178*(4*p3.y*c_56*(p1.z+p2.z+6*
        p3.z)+p2.y*(c_5+c_129+c_152+c_34+c_246)+p1.y*(c_0+p1.z*c_250-3*(c_1+c_89+c_11)))+c_41*(18*p2.y*p3.y*c_56*c_86+9*c_24*c_56*
        c_247-3*c_25*c_248+4*(-5*c_23-10*c_27*c_250+2*c_0*(c_47+c_60+c_132)+p1.z*(9*c_28+c_211+c_225-7*c_29)+3*(c_33+c_28*p3.z+c_1*
        c_2+p2.z*c_29-c_30)))+c_45*(9*c_39*c_56*c_252+9*c_24*p3.y*c_56*c_44-3*c_26*c_254+4*p3.y*(c_209+12*c_27*p2.z+c_256+2*p1.z*
        (c_257+c_281+c_225+c_258)+3*(c_33+2*c_28*p3.z+c_213+4*p2.z*c_29+c_278))-3*p2.y*c_56*(-3*c_25*c_208+4*(c_259+c_260+c_223+2*p2.z*
        c_2+c_29+6*c_0*c_35+3*p1.z*c_261)))+p1.y*(18*c_39*p3.y*c_56*c_78+9*c_68*c_56*c_262-3*c_69*c_265+4*c_25*c_277+8*(5*c_66-3*c_74-3*
        c_73*p3.z-3*c_33*c_2-3*c_28*c_29-3*c_1*c_30-3*p2.z*c_75+5*c_76+c_71*(c_249+c_88)+c_23*(c_301+c_12+5*c_2)-c_27*(c_257+c_223+c_224-5*
        c_29)-c_0*(c_175+c_176+c_213+c_228+c_278)-p1.z*(3*c_73+3*c_33*p3.z+3*c_28*c_2+3*c_1*c_29+3*p2.z*c_30-5*c_75))-3*c_24*
        c_56*(-3*c_25*c_107+4*(c_279+c_280+c_281+c_224+c_29+3*c_0*c_171+2*p1.z*(c_282+c_20+c_2)))-6*p2.y*p3.y*c_56*c_293)+c_32*(c_39*
        (c_5+c_51+c_20+c_125+c_46)-c_41*c_295+c_24*p3.y*(c_135+c_18+c_48+c_296+18*p1.z*c_207)+c_45*(3*p2.y*c_56*c_208-p3.y*(c_5+18*
        p1.z*p2.z+c_47+c_168+c_297+c_296))-8*p3.y*(c_23+4*c_27*p3.z+10*c_0*c_2+20*p1.z*c_29-p2.z*(c_28+4*c_1*p3.z+10*p2.z*c_2+20*
        c_29))+2*p2.y*(-6*c_23+6*c_33+14*c_28*p3.z+20*c_1*c_2+20*p2.z*c_29+10*c_30-6*c_27*c_114-6*c_0*c_298-6*p1.z*
        (c_28+c_223+c_212+c_220)+c_25*(c_135+c_1+c_89+c_299+9*p1.z*c_245))+p1.y*(18*p2.y*p3.y*c_56*c_222+3*c_24*c_56*c_107-2*(c_25*c_300+2*(3*c_23-3*
        c_33-9*c_28*p3.z-18*c_1*c_2-30*p2.z*c_29+c_177+c_27*(c_249+7*p3.z)+c_0*(c_301+c_170+c_296)-p1.z*c_271))))))/double(8064);
}

double trig::c51() const{
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p11_4=p1.y*p11_3;
    double p11_5=p1.y*p11_4;
    double p12_2=p1.z*p1.z;
    double p12_3=p1.z*p12_2;
    double p12_4=p1.z*p12_3;
    double p12_5=p1.z*p12_4;
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p21_4=p2.y*p21_3;
    double p21_5=p2.y*p21_4;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p31_4=p3.y*p31_3;
    double p31_5=p3.y*p31_4;
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
    double p20_6=p2.x*p20_5;
    double p10_2=p1.x*p1.x;
    double p10_3=p1.x*p10_2;
    double p10_4=p1.x*p10_3;
    double p10_5=p1.x*p10_4;
    double p10_6=p1.x*p10_5;
    double c_0=-(5*p1.y*p2.z);
    double c_1=5*p2.y*p1.z;
    double c_2=3*p3.y*p1.z;
    double c_3=-(3*p3.y*p2.z);
    double c_4=-(3*p1.y*p3.z);
    double c_5=3*p2.y*p3.z;
    double c_6=-(5*p3.y*p1.z);
    double c_7=5*p1.y*p3.z;
    double c_8=p11_2;
    double c_9=p12_3;
    double c_10=p21_2;
    double c_11=p21_3;
    double c_12=p31_2;
    double c_13=p31_3;
    double c_14=p12_2;
    double c_15=p22_2;
    double c_16=p22_3;
    double c_17=p11_3;
    double c_18=p32_2;
    double c_19=p32_3;
    double c_20=3*p2.y*p1.z;
    double c_21=-(3*p1.y*p2.z);
    double c_22=c_1+c_2+c_0+c_3+c_4+c_5;
    double c_23=-p3.z;
    double c_24=p30_2;
    double c_25=-(3*p3.y*p1.z);
    double c_26=-(5*p3.y*p2.z);
    double c_27=3*p1.y*p3.z;
    double c_28=5*p2.y*p3.z;
    double c_29=c_20+c_25+c_21+c_26+c_27+c_28;
    double c_30=-(3*p3.z);
    double c_31=2*p1.z;
    double c_32=3*p3.z;
    double c_33=p2.z+c_23;
    double c_34=-(18*p3.y*c_9);
    double c_35=-p1.z;
    double c_36=c_35+p3.z;
    double c_37=p1.z+c_23;
    double c_38=6*p3.z;
    double c_39=p11_4;
    double c_40=p12_5;
    double c_41=p21_4;
    double c_42=p21_5;
    double c_43=p31_4;
    double c_44=p31_5;
    double c_45=p12_4;
    double c_46=p22_4;
    double c_47=p22_5;
    double c_48=p11_5;
    double c_49=p32_4;
    double c_50=p32_5;
    double c_51=5*p3.y*p1.z;
    double c_52=3*p3.y*p2.z;
    double c_53=-(5*p1.y*p3.z);
    double c_54=p20_4;
    double c_55=p20_3;
    double c_56=p2.y*c_36;
    double c_57=-p2.z;
    double c_58=p1.z+c_57;
    double c_59=p3.y*c_58;
    double c_60=p1.y*c_33;
    double c_61=c_59+c_60+c_56;
    double c_62=p20_2;
    double c_63=3*c_13*p1.z;
    double c_64=-(3*c_13*p2.z);
    double c_65=-(54*p3.y*c_14*p2.z);
    double c_66=3*p2.y*c_12*p3.z;
    double c_67=-(18*p3.y*p1.z*c_18);
    double c_68=18*p3.y*p2.z*c_18;
    double c_69=-(18*p2.y*c_19);
    double c_70=p2.z+p3.z;
    double c_71=5*c_24*p2.z;
    double c_72=-(5*c_24*p3.z);
    double c_73=6*c_19;
    double c_74=3*p1.z;
    double c_75=2*p2.z;
    double c_76=c_31+p2.z+c_30;
    double c_77=10*p1.z;
    double c_78=9*p2.z;
    double c_79=5*p1.z;
    double c_80=-2*p1.z;
    double c_81=c_80+p2.z+p3.z;
    double c_82=-(2*p3.z);
    double c_83=3*c_16;
    double c_84=3*p2.z;
    double c_85=p1.z+p2.z+c_82;
    double c_86=3*p2.z*p3.z;
    double c_87=6*c_18;
    double c_88=p30_4;
    double c_89=4*c_11*c_9;
    double c_90=-(18*c_10*p3.y*c_14*p3.z);
    double c_91=-(36*p2.y*c_12*p1.z*c_18);
    double c_92=6*p2.y*p3.y*c_37;
    double c_93=36*c_14*p3.z;
    double c_94=36*p1.z*p2.z*p3.z;
    double c_95=18*c_15*p3.z;
    double c_96=18*p1.z*c_18;
    double c_97=12*p2.z*c_18;
    double c_98=c_74+c_75+c_32;
    double c_99=3*p3.y*c_36;
    double c_100=5*p2.z;
    double c_101=8*p2.z*p3.z;
    double c_102=p1.z+c_75+c_30;
    double c_103=2*p3.z;
    double c_104=9*p2.z*c_18;
    double c_105=3*c_70;
    double c_106=c_31+c_105;
    double c_107=-c_12;
    double c_108=6*c_15;
    double c_109=3*c_18;
    double c_110=c_12*c_85;
    double c_111=-(2*p2.z);
    double c_112=3*c_12*c_37;
    double c_113=3*c_19;
    double c_114=15*c_41*p3.y*p2.z;
    double c_115=18*c_13*c_14*p2.z;
    double c_116=120*p2.y*p1.z*c_46;
    double c_117=-(18*c_11*c_14*p3.z);
    double c_118=72*p2.y*c_14*c_15*p3.z;
    double c_119=-(48*p3.y*p1.z*c_16*p3.z);
    double c_120=-(120*p2.y*c_46*p3.z);
    double c_121=-(18*c_10*p3.y*p1.z*c_18);
    double c_122=-(72*p3.y*c_14*p2.z*c_18);
    double c_123=48*p2.y*p1.z*p2.z*c_19;
    double c_124=p3.y*c_85;
    double c_125=-c_124;
    double c_126=p1.z+c_111+p3.z;
    double c_127=c_12*c_76;
    double c_128=-c_127;
    double c_129=-(3*p2.z);
    double c_130=c_57+p3.z;
    double c_131=2*p2.y*p3.y*c_130;
    double c_132=6*c_14;
    double c_133=-(4*p2.z);
    double c_134=p1.z+c_129+c_103;
    double c_135=6*c_9;
    double c_136=2*p1.z*p2.z*p3.z;
    double c_137=4*p1.z;
    double c_138=-(5*p2.z);
    double c_139=9*p2.z*p3.z;
    double c_140=3*p1.z*c_70;
    double c_141=c_14+c_108+c_139+c_87+c_140;
    double c_142=c_75+c_32;
    double c_143=9*p3.z;
    double c_144=5*p3.z;
    double c_145=3*c_15;
    double c_146=4*p2.z*p3.z;
    double c_147=6*c_15*p3.z;
    double c_148=-(4*p3.z);
    double c_149=p2.y*c_126;
    double c_150=4*p3.z;
    double c_151=-(5*p3.z);
    double c_152=c_31+c_129+p3.z;
    double c_153=c_10*c_152;
    double c_154=10*c_18;
    double c_155=10*c_19;
    double c_156=-(3*c_10*p3.y*p2.z);
    double c_157=72*p2.y*c_14*p2.z;
    double c_158=54*p3.y*p1.z*c_15;
    double c_159=18*p3.y*c_16;
    double c_160=3*c_11*p3.z;
    double c_161=9*p2.y*c_12*p3.z;
    double c_162=-(18*p2.y*c_15*p3.z);
    double c_163=-(54*p3.y*p1.z*c_18);
    double c_164=54*p3.y*p2.z*c_18;
    double c_165=-(3*p2.y*p3.z);
    double c_166=18*p2.z*c_18;
    double c_167=15*p2.z;
    double c_168=-(60*p2.y*c_9);
    double c_169=-(6*p2.y*c_12*p2.z);
    double c_170=6*c_10*p3.y*p3.z;
    double c_171=-(108*p2.y*p1.z*p2.z*p3.z);
    double c_172=36*p3.y*c_15*p3.z;
    double c_173=-(36*p2.y*p2.z*c_18);
    double c_174=c_137+p2.z+c_32;
    double c_175=c_59+c_56;
    double c_176=15*c_24*c_175;
    double c_177=16*p1.z;
    double c_178=6*p2.z*c_18;
    double c_179=p2.z+c_32;
    double c_180=-(4*c_13*c_9);
    double c_181=18*p2.y*c_12*c_14*p2.z;
    double c_182=36*c_10*p3.y*p1.z*c_15;
    double c_183=18*p2.y*c_12*p1.z*c_15;
    double c_184=4*c_13*c_16;
    double c_185=-(15*p2.y*c_43*p3.z);
    double c_186=12*p2.y*c_12*c_15*p3.z;
    double c_187=-(12*c_10*p3.y*p2.z*c_18);
    double c_188=-(4*c_11*c_19);
    double c_189=-(120*p3.y*p1.z*c_49);
    double c_190=120*p3.y*p2.z*c_49;
    double c_191=c_137+c_84+p3.z;
    double c_192=-3*p2.y*p1.z;
    double c_193=6*p2.z;
    double c_194=12*c_14;
    double c_195=12*p1.z*c_70;
    double c_196=9*c_15*p3.z;
    double c_197=6*p2.z*p3.z;
    double c_198=-c_18;
    double c_199=9*p1.z;
    double c_200=c_35+p2.z;
    double c_201=3*c_14;
    double c_202=4*p1.z*p2.z;
    double c_203=30*p2.z*c_18;
    double c_204=-(10*c_19);
    double c_205=c_84+c_103;
    double c_206=p2.z+c_150;
    double c_207=-3*c_12;
    double c_208=6*p1.z*p2.z;
    double c_209=4*p1.z*p3.z;
    double c_210=c_201+c_208+c_108+c_209+c_197+c_109;
    double c_211=2*c_210;
    double c_212=2*p2.z*p3.z;
    double c_213=9*c_15*c_18;
    double c_214=3*p2.y*p2.z;
    double c_215=-3*c_10*c_58;
    double c_216=-(5*c_19);
    double c_217=3*c_9;
    double c_218=c_15+c_146+c_154;
    double c_219=p20_5;
    double c_220=5*c_24;
    double c_221=3*c_12;
    double c_222=-(3*c_13*p1.z);
    double c_223=-(40*c_11*p2.z);
    double c_224=3*c_13*p2.z;
    double c_225=-(240*p2.y*c_16);
    double c_226=18*p2.y*c_14*p3.z;
    double c_227=72*p2.y*p1.z*p2.z*p3.z;
    double c_228=36*p3.y*p1.z*p2.z*p3.z;
    double c_229=18*p2.y*p1.z*c_18;
    double c_230=18*p2.y*c_19;
    double c_231=15*p3.z;
    double c_232=-3*p1.z;
    double c_233=20*c_16;
    double c_234=c_42*p1.z;
    double c_235=3*c_11*c_12*p1.z;
    double c_236=3*c_44*p1.z;
    double c_237=6*c_11*c_9;
    double c_238=-(18*c_10*p3.y*c_9);
    double c_239=8*p2.y*c_40;
    double c_240=24*c_42*p2.z;
    double c_241=-(3*c_44*p2.z);
    double c_242=-(18*c_10*p3.y*c_14*p2.z);
    double c_243=-(24*p2.y*c_9*c_15);
    double c_244=-(24*p3.y*c_14*c_16);
    double c_245=-(192*p2.y*c_47);
    double c_246=3*p2.y*c_43*p3.z;
    double c_247=24*p2.y*c_45*p3.z;
    double c_248=-(72*c_11*p1.z*p2.z*p3.z);
    double c_249=-(36*c_10*p3.y*p1.z*p2.z*p3.z);
    double c_250=48*p2.y*c_9*p2.z*p3.z;
    double c_251=48*p3.y*c_9*p2.z*p3.z;
    double c_252=96*p2.y*p1.z*c_16*p3.z;
    double c_253=-(18*c_11*p1.z*c_18);
    double c_254=-(36*c_13*p1.z*c_18);
    double c_255=24*p2.y*c_9*c_18;
    double c_256=36*c_13*p2.z*c_18;
    double c_257=48*p2.y*c_14*p2.z*c_18;
    double c_258=72*p2.y*p1.z*c_15*c_18;
    double c_259=-(36*p2.y*c_12*c_19);
    double c_260=24*p2.y*c_14*c_19;
    double c_261=24*p2.y*p1.z*c_49;
    double c_262=24*p3.y*p1.z*c_49;
    double c_263=-(24*p3.y*p2.z*c_49);
    double c_264=24*p2.y*c_50;
    double c_265=c_137+c_57+c_30;
    double c_266=c_31+c_57+c_23;
    double c_267=72*p1.z*p2.z*p3.z;
    double c_268=6*p1.z*p3.z;
    double c_269=c_107+c_201+c_202+c_145+c_268+c_197+c_87;
    double c_270=4*p2.z;
    double c_271=2*c_18;
    double c_272=c_15+c_212+c_271;
    double c_273=c_74+c_57+c_82;
    double c_274=8*p2.z;
    double c_275=c_74+c_133+p3.z;
    double c_276=10*c_9;
    double c_277=-(9*p1.z*c_15);
    double c_278=-(8*c_16);
    double c_279=15*c_88*c_33;
    double c_280=-(3*c_43*p3.z);
    double c_281=-(72*c_14*c_15*p3.z);
    double c_282=36*c_12*p2.z*c_18;
    double c_283=36*c_12*c_19;
    double c_284=-(48*p1.z*p2.z*c_19);
    double c_285=-(24*c_50);
    double c_286=c_100+c_32;
    double c_287=c_137+c_129+c_23;
    double c_288=-(10*c_16);
    double c_289=c_84+p3.z;
    double c_290=-3*c_42*p1.z;
    double c_291=-(3*c_10*c_13*p1.z);
    double c_292=-(c_44*p1.z);
    double c_293=18*p2.y*c_12*c_9;
    double c_294=-(6*c_13*c_9);
    double c_295=-(8*p3.y*c_40);
    double c_296=-(3*c_41*p3.y*p2.z);
    double c_297=-(9*c_10*c_13*p2.z);
    double c_298=-(24*p3.y*c_45*p2.z);
    double c_299=36*c_11*p1.z*c_15;
    double c_300=18*c_13*p1.z*c_15;
    double c_301=-(24*p3.y*c_9*c_15);
    double c_302=36*c_10*p3.y*c_16;
    double c_303=18*c_13*c_16;
    double c_304=-(24*p2.y*p1.z*c_46);
    double c_305=-(24*p3.y*p1.z*c_46);
    double c_306=-(24*p3.y*c_47);
    double c_307=3*c_42*p3.z;
    double c_308=9*c_11*c_12*p3.z;
    double c_309=-(24*c_44*p3.z);
    double c_310=18*p2.y*c_12*c_14*p3.z;
    double c_311=36*p2.y*c_12*p1.z*p2.z*p3.z;
    double c_312=72*c_13*p1.z*p2.z*p3.z;
    double c_313=-(48*p2.y*c_9*p2.z*p3.z);
    double c_314=-(48*p3.y*c_9*p2.z*p3.z);
    double c_315=-(36*c_11*c_15*p3.z);
    double c_316=54*p2.y*c_12*c_15*p3.z;
    double c_317=-(48*p3.y*c_14*c_15*p3.z);
    double c_318=24*p2.y*c_46*p3.z;
    double c_319=24*p3.y*c_9*c_18;
    double c_320=-(54*c_10*p3.y*p2.z*c_18);
    double c_321=-(72*p3.y*p1.z*c_15*c_18);
    double c_322=-(72*p3.y*c_16*c_18);
    double c_323=-(18*c_11*c_19);
    double c_324=-(96*p3.y*p1.z*p2.z*c_19);
    double c_325=72*p2.y*c_15*c_19;
    double c_326=192*p3.y*c_50;
    double c_327=24*p1.z;
    double c_328=3*p2.y*c_37;
    double c_329=c_51+c_21+c_52+c_328+c_53;
    double c_330=-(5*c_88*c_329);
    double c_331=-5*p1.z;
    double c_332=8*p1.z;
    double c_333=c_78+c_23;
    double c_334=-(3*c_19);
    double c_335=-(2*c_18);
    double c_336=-30*c_9;
    double c_337=9*c_14*c_33;
    double c_338=3*c_16*c_18;
    double c_339=9*c_16;
    double c_340=c_15*p3.z;
    double c_341=p2.z*c_18;
    double c_342=6*c_16;
    double c_343=5*p2.z*c_18;
    double c_344=c_74+p2.z+c_148;
    double c_345=-(3*c_11*c_37);
    double c_346=7*p3.z;
    double c_347=16*p3.z;
    double c_348=12*c_15*p3.z;
    double c_349=c_232+p2.z+c_103;
    double c_350=c_84+c_144;
    return (5*p20_6*(c_2+c_0+5*p3.y*p2.z+5*p2.y*c_37+c_4)+5*p10_6*(c_1+c_6+c_0+c_3+c_7+c_5)-5*c_219*p3.x*c_29+5*p10_5*(p2.x*
        c_22+p3.x*(c_192+c_6+3*p1.y*p2.z+c_3+c_7+c_5))+p10_4*(45*c_8*p2.y*p1.z+15*p1.y*c_10*p1.z+3*c_11*p1.z-45*c_8*p3.y*p1.z-15*
        p1.y*c_12*p1.z+c_222-30*p2.y*c_9+30*p3.y*c_9-5*c_17*p2.z+5*c_8*p2.y*p2.z+5*p1.y*c_10*p2.z+2*c_11*p2.z-30*c_8*p3.y*
        p2.z-12*p1.y*p2.y*p3.y*p2.z+c_156-12*p1.y*c_12*p2.z-3*p2.y*c_12*p2.z+c_64+270*p1.y*c_14*p2.z+30*p2.y*c_14*p2.z+180*
        p3.y*c_14*p2.z+90*p1.y*p1.z*c_15+30*p2.y*p1.z*c_15+72*p3.y*p1.z*c_15+18*p1.y*c_16+12*p2.y*c_16+c_159+5*c_17*p3.z+30*
        c_8*p2.y*p3.z+12*p1.y*c_10*p3.z+c_160-5*c_8*p3.y*p3.z+12*p1.y*p2.y*p3.y*p3.z+3*c_10*p3.y*p3.z-5*p1.y*c_12*p3.z+c_66-2*
        c_13*p3.z-270*p1.y*c_14*p3.z-180*p2.y*c_14*p3.z-30*p3.y*c_14*p3.z-72*p2.y*p1.z*p2.z*p3.z+72*p3.y*p1.z*p2.z*
        p3.z+c_162+18*p3.y*c_15*p3.z-90*p1.y*p1.z*c_18-72*p2.y*p1.z*c_18-30*p3.y*p1.z*c_18-18*p2.y*p2.z*c_18+c_68-18*p1.y*
        c_19+c_69-12*p3.y*c_19-5*c_24*(c_20+c_51+c_21+c_52+c_53+c_165)+5*c_62*c_22+15*p2.x*p3.x*(p3.y*p1.z+p1.y*p2.z-p3.y*p2.z-p1.y*
        p3.z+c_56))+c_55*p3.x*(-30*c_11*p1.z+6*c_10*p3.y*p1.z+15*p2.y*c_12*p1.z+9*c_13*p1.z+18*p2.y*c_9+c_34+c_223+10*c_10*
        p3.y*p2.z+16*p2.y*c_12*p2.z+7*c_13*p2.z+c_157+c_65+180*p2.y*p1.z*c_15-108*p3.y*p1.z*c_15+c_225-60*p3.y*c_16+3*c_17*
        c_33-10*c_11*p3.z+c_161+8*c_13*p3.z+c_226-36*p3.y*c_14*p3.z+c_227-108*p3.y*p1.z*p2.z*p3.z+60*p2.y*c_15*p3.z+c_229+c_163+96*
        p2.y*p2.z*c_18+c_164+42*p2.y*c_19+48*p3.y*c_19-5*c_24*c_29-3*c_8*(c_125+p2.y*(p1.z+c_133+c_32))-3*p1.y*(c_128-2*p2.y*
        p3.y*c_102+2*c_10*(c_31+c_138+c_32)+6*c_33*(c_14+c_202+10*c_15+2*p1.z*p3.z+c_101+c_109)))+c_54*(5*c_11*p1.z+30*c_10*p3.y*
        p1.z+12*p2.y*c_12*p1.z+c_63-18*p2.y*c_9+c_34+45*c_10*p3.y*p2.z+15*p2.y*c_12*p2.z+c_224-90*p2.y*c_14*p2.z-72*p3.y*c_14*
        p2.z-270*p2.y*p1.z*c_15-180*p3.y*p1.z*c_15-30*p3.y*c_16-5*c_11*p3.z+5*c_10*p3.y*p3.z+5*p2.y*c_12*p3.z+2*c_13*p3.z-18*
        p3.y*c_14*p3.z-72*p3.y*p1.z*p2.z*p3.z+270*p2.y*c_15*p3.z+30*p3.y*c_15*p3.z+c_67+90*p2.y*p2.z*c_18+30*p3.y*p2.z*
        c_18+c_230+12*p3.y*c_19-5*c_24*(c_20+c_25+c_26+c_28)-c_17*c_106-c_8*(c_99+p2.y*(c_79+c_167+12*p3.z))+p1.y*(12*p2.y*p3.y*
        c_37-5*c_10*(p1.z+c_78+c_38)+3*(-4*c_9+c_71+10*c_16+c_12*c_37+c_72+60*c_15*p3.z+24*p2.z*c_18+c_73+c_14*(-10*p2.z+c_38)+p1.z*
        (-10*c_15+24*p2.z*p3.z+c_87))))+p10_2*(15*c_39*p2.y*p1.z+10*c_17*c_10*p1.z+6*c_8*c_11*p1.z+3*p1.y*c_41*p1.z+c_234-15*
        c_39*p3.y*p1.z-10*c_17*c_12*p1.z-6*c_8*c_13*p1.z-3*p1.y*c_43*p1.z+c_292+60*c_8*p2.y*c_9+20*p1.y*c_10*c_9+c_89-60*c_8*p3.y*
        c_9-20*p1.y*c_12*c_9+c_180-72*p2.y*c_40+72*p3.y*c_40+9*c_48*p2.z+10*c_39*p2.y*p2.z+10*c_17*c_10*p2.z+9*c_8*c_11*p2.z+7*
        p1.y*c_41*p2.z+4*c_42*p2.z-15*c_39*p3.y*p2.z-12*c_17*p2.y*p3.y*p2.z-9*c_8*c_10*p3.y*p2.z-6*p1.y*c_11*p3.y*p2.z+c_296-12*
        c_17*c_12*p2.z-9*c_8*p2.y*c_12*p2.z-6*p1.y*c_10*c_12*p2.z-3*c_11*c_12*p2.z-9*c_8*c_13*p2.z-6*p1.y*p2.y*c_13*
        p2.z-3*c_10*c_13*p2.z-6*p1.y*c_43*p2.z-3*p2.y*c_43*p2.z+c_241-60*c_17*c_14*p2.z+12*p1.y*c_10*c_14*p2.z+6*c_11*c_14*p2.z+180*
        c_8*p3.y*c_14*p2.z+72*p1.y*p2.y*p3.y*c_14*p2.z+18*c_10*p3.y*c_14*p2.z+72*p1.y*c_12*c_14*p2.z+c_181+c_115-120*p1.y*
        c_45*p2.z-80*p2.y*c_45*p2.z-120*p3.y*c_45*p2.z-20*c_17*p1.z*c_15-12*c_8*p2.y*p1.z*c_15+4*c_11*p1.z*c_15+72*c_8*p3.y*
        p1.z*c_15+72*p1.y*p2.y*p3.y*p1.z*c_15+c_182+36*p1.y*c_12*p1.z*c_15+24*p2.y*c_12*p1.z*c_15+12*c_13*p1.z*c_15-80*p1.y*
        c_9*c_15-80*p2.y*c_9*c_15-96*p3.y*c_9*c_15-4*c_17*c_16-6*c_8*p2.y*c_16-4*p1.y*c_10*c_16+18*c_8*p3.y*c_16+36*p1.y*p2.y*p3.y*
        c_16+c_302+12*p1.y*c_12*c_16+18*p2.y*c_12*c_16+6*c_13*c_16-48*p1.y*c_14*c_16-72*p2.y*c_14*c_16-72*p3.y*c_14*c_16-24*p1.y*
        p1.z*c_46-56*p2.y*p1.z*c_46-48*p3.y*p1.z*c_46-8*p1.y*c_47-32*p2.y*c_47+c_306-9*c_48*p3.z+15*c_39*p2.y*p3.z+12*c_17*
        c_10*p3.z+9*c_8*c_11*p3.z+6*p1.y*c_41*p3.z+c_307-10*c_39*p3.y*p3.z+12*c_17*p2.y*p3.y*p3.z+9*c_8*c_10*p3.y*p3.z+6*p1.y*
        c_11*p3.y*p3.z+3*c_41*p3.y*p3.z-10*c_17*c_12*p3.z+9*c_8*p2.y*c_12*p3.z+6*p1.y*c_10*c_12*p3.z+3*c_11*c_12*p3.z-9*c_8*
        c_13*p3.z+6*p1.y*p2.y*c_13*p3.z+3*c_10*c_13*p3.z-7*p1.y*c_43*p3.z+c_246-4*c_44*p3.z+60*c_17*c_14*p3.z-180*c_8*p2.y*
        c_14*p3.z-72*p1.y*c_10*c_14*p3.z+c_117-72*p1.y*p2.y*p3.y*c_14*p3.z+c_90-12*p1.y*c_12*c_14*p3.z-18*p2.y*c_12*c_14*p3.z-6*
        c_13*c_14*p3.z+120*p1.y*c_45*p3.z+120*p2.y*c_45*p3.z+80*p3.y*c_45*p3.z-72*c_8*p2.y*p1.z*p2.z*p3.z-72*p1.y*c_10*
        p1.z*p2.z*p3.z-36*c_11*p1.z*p2.z*p3.z+72*c_8*p3.y*p1.z*p2.z*p3.z-12*c_10*p3.y*p1.z*p2.z*p3.z+72*p1.y*c_12*p1.z*
        p2.z*p3.z+12*p2.y*c_12*p1.z*p2.z*p3.z+36*c_13*p1.z*p2.z*p3.z+96*p2.y*c_9*p2.z*p3.z-96*p3.y*c_9*p2.z*p3.z-18*c_8*
        p2.y*c_15*p3.z-36*p1.y*c_10*c_15*p3.z+c_315+18*c_8*p3.y*c_15*p3.z+12*p1.y*p2.y*p3.y*c_15*p3.z+24*p1.y*c_12*c_15*p3.z+18*
        p2.y*c_12*c_15*p3.z+18*c_13*c_15*p3.z+c_118-72*p3.y*c_14*c_15*p3.z+48*p2.y*p1.z*c_16*p3.z+c_119+c_318-24*p3.y*c_46*
        p3.z+20*c_17*p1.z*c_18-72*c_8*p2.y*p1.z*c_18-36*p1.y*c_10*p1.z*c_18-12*c_11*p1.z*c_18+12*c_8*p3.y*p1.z*c_18-72*p1.y*
        p2.y*p3.y*p1.z*c_18-24*c_10*p3.y*p1.z*c_18+c_91-4*c_13*p1.z*c_18+80*p1.y*c_9*c_18+96*p2.y*c_9*c_18+80*p3.y*c_9*c_18-18*c_8*
        p2.y*p2.z*c_18-24*p1.y*c_10*p2.z*c_18-18*c_11*p2.z*c_18+18*c_8*p3.y*p2.z*c_18-12*p1.y*p2.y*p3.y*p2.z*c_18-18*c_10*
        p3.y*p2.z*c_18+36*p1.y*c_12*p2.z*c_18+c_256+72*p2.y*c_14*p2.z*c_18+c_122+48*p2.y*p1.z*c_15*c_18-48*p3.y*p1.z*c_15*
        c_18+24*p2.y*c_16*c_18-24*p3.y*c_16*c_18+4*c_17*c_19-18*c_8*p2.y*c_19-12*p1.y*c_10*c_19-6*c_11*c_19+6*c_8*p3.y*c_19-36*p1.y*
        p2.y*p3.y*c_19-18*c_10*p3.y*c_19+4*p1.y*c_12*c_19+c_259+48*p1.y*c_14*c_19+72*p2.y*c_14*c_19+72*p3.y*c_14*c_19+c_123-48*
        p3.y*p1.z*p2.z*c_19+24*p2.y*c_15*c_19-24*p3.y*c_15*c_19+24*p1.y*p1.z*c_49+48*p2.y*p1.z*c_49+56*p3.y*p1.z*c_49+24*p2.y*
        p2.z*c_49+c_263+8*p1.y*c_50+c_264+32*p3.y*c_50+c_330+5*c_54*c_22+15*c_55*p3.x*c_61+3*p2.x*p3.x*(c_220+6*c_8+3*c_10+4*p2.y*
        p3.y+c_221+6*p1.y*(p2.y+p3.y)-36*c_14-36*p1.z*p2.z-18*c_15-36*p1.z*p3.z-24*p2.z*p3.z-18*c_18)*c_61+c_62*(10*c_11*
        p1.z+9*c_10*p3.y*p1.z+6*p2.y*c_12*p1.z+c_63+c_168-108*p3.y*c_9+20*c_11*p2.z-18*c_10*p3.y*p2.z-9*p2.y*c_12*p2.z+c_64-54*
        p2.y*c_14*p2.z+c_65+36*p2.y*p1.z*c_15+c_158+120*p2.y*c_16+108*p3.y*c_16+18*c_11*p3.z+9*c_10*p3.y*p3.z+c_66-54*p2.y*c_14*
        p3.z-54*p3.y*c_14*p3.z+c_171-108*p2.y*c_15*p3.z+54*p3.y*c_15*p3.z-36*p2.y*p1.z*c_18+c_67-54*p2.y*p2.z*c_18+c_68+c_69-2*
        c_17*(c_77+c_100+c_143)+c_176-3*c_8*(2*p2.y*p1.z+3*p2.y*c_70+3*p3.y*c_81)+3*p1.y*(-40*c_9+6*p2.y*p3.y*c_58+c_71-12*
        c_14*p2.z+18*p1.z*c_15+c_233+c_12*(c_74+c_111+c_23)+c_72+c_93+c_94+c_95+c_96+c_97+c_73+c_10*c_98))+c_24*(-3*c_10*p3.y*c_76+c_345+2*
        c_17*(c_77+c_78+c_144)-2*c_13*(c_79+c_78+10*p3.z)+c_8*(6*p3.y*p1.z+9*p3.y*c_70+9*p2.y*c_81)+6*p3.y*(c_276+c_83+c_196+c_166-20*
        c_19+9*c_14*c_70+6*p1.z*(c_15+c_86+c_198))-3*p1.y*(c_10*c_273+c_92+c_12*(c_74+c_84+c_103)+2*(-20*c_9+c_83+6*c_14*
        (c_84+c_23)+c_147+c_104+c_155+9*p1.z*(c_70*c_70)))-9*p2.y*(c_110-2*c_37*(c_132+c_15+c_86+c_87+3*p1.z*c_179))))+c_62*(-15*c_88*
        p2.y*p1.z-18*c_24*c_11*p1.z-9*c_42*p1.z+15*c_88*p3.y*p1.z-9*c_24*c_10*p3.y*p1.z+15*c_41*p3.y*p1.z+9*c_24*p2.y*c_12*
        p1.z+12*c_11*c_12*p1.z+18*c_24*c_13*p1.z+9*c_10*c_13*p1.z+6*p2.y*c_43*p1.z+c_236+18*c_24*p2.y*c_9+c_89-18*c_24*p3.y*
        c_9+c_238-12*p2.y*c_12*c_9+c_294+c_239+24*p3.y*c_40-20*c_24*c_11*p2.z+25*c_88*p3.y*p2.z-6*c_24*c_10*p3.y*p2.z+c_114+9*c_24*
        p2.y*c_12*p2.z+10*c_11*c_12*p2.z+10*c_24*c_13*p2.z+6*c_10*c_13*p2.z+3*p2.y*c_43*p2.z+c_44*p2.z+54*c_24*p2.y*c_14*p2.z+20*
        c_11*c_14*p2.z-36*c_24*p3.y*c_14*p2.z-72*c_10*p3.y*c_14*p2.z-36*p2.y*c_12*c_14*p2.z-12*c_13*c_14*p2.z+24*p2.y*c_45*
        p2.z+48*p3.y*c_45*p2.z+108*c_24*p2.y*p1.z*c_15+60*c_11*p1.z*c_15-54*c_24*p3.y*p1.z*c_15-180*c_10*p3.y*p1.z*c_15-72*p2.y*
        c_12*p1.z*c_15-18*c_13*p1.z*c_15+48*p2.y*c_9*c_15+72*p3.y*c_9*c_15-120*c_24*p2.y*c_16-60*c_24*p3.y*c_16+60*c_10*p3.y*
        c_16+20*p2.y*c_12*c_16+c_184+80*p2.y*c_14*c_16+96*p3.y*c_14*c_16+c_116+120*p3.y*p1.z*c_46-72*p3.y*c_47-25*c_88*p2.y*p3.z-10*
        c_24*c_11*p3.z+9*c_42*p3.z-9*c_24*c_10*p3.y*p3.z+10*c_41*p3.y*p3.z+6*c_24*p2.y*c_12*p3.z+10*c_11*c_12*p3.z+20*c_24*
        c_13*p3.z+9*c_10*c_13*p3.z+7*p2.y*c_43*p3.z+4*c_44*p3.z+36*c_24*p2.y*c_14*p3.z-54*c_24*p3.y*c_14*p3.z+c_90-24*p2.y*c_12*
        c_14*p3.z-18*c_13*c_14*p3.z+24*p3.y*c_45*p3.z+108*c_24*p2.y*p1.z*p2.z*p3.z-108*c_24*p3.y*p1.z*p2.z*p3.z-72*c_10*
        p3.y*p1.z*p2.z*p3.z-72*p2.y*c_12*p1.z*p2.z*p3.z-36*c_13*p1.z*p2.z*p3.z+c_251-36*c_24*p2.y*c_15*p3.z-60*c_11*c_15*
        p3.z-54*c_24*p3.y*c_15*p3.z+c_186+6*c_13*c_15*p3.z+72*p3.y*c_14*c_15*p3.z+96*p3.y*p1.z*c_16*p3.z+c_120-80*p3.y*c_46*
        p3.z+54*c_24*p2.y*p1.z*c_18-108*c_24*p3.y*p1.z*c_18+c_121+c_91+c_254+c_319+54*c_24*p2.y*p2.z*c_18-20*c_11*p2.z*c_18+36*c_24*
        p3.y*p2.z*c_18+c_187+4*c_13*p2.z*c_18+48*p3.y*c_14*p2.z*c_18+72*p3.y*p1.z*c_15*c_18-80*p2.y*c_16*c_18-80*p3.y*c_16*
        c_18+60*c_24*p2.y*c_19+c_188+120*c_24*p3.y*c_19-6*c_10*p3.y*c_19-4*p2.y*c_12*c_19+24*p3.y*c_14*c_19+48*p3.y*p1.z*p2.z*
        c_19-48*p2.y*c_15*c_19-72*p3.y*c_15*c_19+c_262-24*p2.y*p2.z*c_49-56*p3.y*p2.z*c_49-8*p2.y*c_50-32*p3.y*c_50-c_48*c_174+c_17*
        (3*c_24*p2.z-4*c_14*p2.z-6*p1.z*c_15-4*c_16+c_92+c_112-3*c_24*p3.z+c_93+c_94+c_95+c_96+c_97+c_73-3*c_10*c_98)-c_39*(c_99+p2.y*
        (7*p1.z+c_84+c_38))+c_8*(9*c_10*p3.y*c_37+6*p2.y*c_12*c_37-2*c_11*(c_79+c_100+c_38)-3*p3.y*c_37*(c_107+c_194+c_108+c_101+c_87+c_195)+c_24*
        (3*p3.y*c_102-3*p2.y*c_134)+4*p2.y*(c_9-5*c_16+9*c_14*p3.z+c_95+c_104+c_113-3*p1.z*(c_15-6*p2.z*
        p3.z+c_335)))+p1.y*(3*c_43*p1.z-18*c_12*c_9+32*c_40-24*c_12*c_14*p2.z+56*c_45*p2.z-18*c_12*p1.z*c_15+72*c_9*c_15+80*c_14*c_16+80*
        p1.z*c_46+72*c_47+12*c_11*p3.y*c_37+c_279+c_280-18*c_12*c_14*p3.z-24*c_45*p3.z-12*c_12*p1.z*p2.z*p3.z-48*c_9*p2.z*p3.z+18*
        c_12*c_15*p3.z+c_281-96*p1.z*c_16*p3.z-120*c_46*p3.z-24*c_9*c_18+c_282-48*c_14*p2.z*c_18-72*p1.z*c_15*c_18-96*c_16*
        c_18+c_283-24*c_14*c_19+c_284-72*c_15*c_19-24*p1.z*c_49-48*p2.z*c_49+c_285-5*c_41*c_106-6*p2.y*p3.y*c_37*(c_107+c_211)-9*c_24*
        (-c_110+c_10*c_126+c_131+2*c_33*c_141)+3*c_10*(c_112+2*(c_9+c_288+30*c_15*p3.z+c_97+c_113+3*p1.z*p3.z*(c_270+p3.z)+c_14*
        c_142))))-p2.x*p3.x*(15*c_42*p1.z+9*c_41*p3.y*p1.z+c_235+c_291-9*p2.y*c_43*p1.z-15*c_44*p1.z-18*c_11*c_9-6*c_10*p3.y*c_9+6*
        p2.y*c_12*c_9+18*c_13*c_9+24*p2.y*c_40-24*p3.y*c_40+c_240+c_114+8*c_11*c_12*p2.z+3*c_10*c_13*p2.z-c_44*p2.z-72*c_11*c_14*
        p2.z+c_242+12*p2.y*c_12*c_14*p2.z+c_115+48*p2.y*c_45*p2.z+c_298-180*c_11*p1.z*c_15-36*c_10*p3.y*p1.z*c_15+c_183+c_300+72*
        p2.y*c_9*c_15+c_301-20*c_10*p3.y*c_16-16*p2.y*c_12*c_16-6*c_13*c_16+96*p2.y*c_14*c_16+c_244+c_116+c_305+c_245-8*p3.y*
        c_47-3*c_48*c_33+c_42*p3.z-3*c_11*c_12*p3.z-8*c_10*c_13*p3.z+c_185+c_309+c_117-12*c_10*p3.y*c_14*p3.z+c_310+72*c_13*c_14*
        p3.z+c_247-48*p3.y*c_45*p3.z+c_248+c_249+c_311+c_312+c_250+c_314+20*c_11*c_15*p3.z-18*p2.y*c_12*c_15*p3.z-16*c_13*c_15*
        p3.z+c_118+c_317+c_252+c_119+c_120+c_253+c_121+36*p2.y*c_12*p1.z*c_18+180*c_13*p1.z*c_18+c_255-72*p3.y*c_9*c_18+16*c_11*p2.z*
        c_18+18*c_10*p3.y*p2.z*c_18-20*c_13*p2.z*c_18+c_257+c_122+c_258+c_321-64*p2.y*c_16*c_18+24*p3.y*c_16*c_18+6*c_11*c_19+16*c_10*
        p3.y*c_19+20*p2.y*c_12*c_19+c_260-96*p3.y*c_14*c_19+c_123+c_324-24*p2.y*c_15*c_19+64*p3.y*c_15*c_19+c_261+c_189+c_190+8*
        p2.y*c_50+c_326+5*c_88*c_29+3*c_39*(c_125+c_149)+3*c_17*(c_128+c_153+c_131+2*c_33*(c_132+c_145+c_146+c_109+6*p1.z*c_70))+3*c_8*
        (-(c_13*c_344)+c_11*c_275+c_10*p3.y*c_134+2*p3.y*(c_135+6*c_14*p2.z+5*p1.z*c_15+c_83+c_136+2*c_15*p3.z-9*p1.z*c_18-3*p2.z*
        c_18-12*c_19)-p2.y*(c_12*c_102+2*(c_135+c_277-12*c_16+6*c_14*p3.z+c_136-3*c_15*p3.z+5*p1.z*c_18+2*p2.z*c_18+c_113)))+3*
        p1.y*(-(c_43*(c_137+p2.z+c_151))-2*p2.y*c_13*c_85+c_41*(c_137+c_138+p3.z)+2*c_11*p3.y*c_126+4*p2.y*p3.y*c_33*c_141+2*c_12*
        (c_135+2*p1.z*p2.z*c_142+c_14*(c_100+c_143)+3*(c_16+c_340-2*p2.z*c_18+c_204))-c_10*(12*c_9+3*c_12*c_33+4*p1.z*p3.z*c_205+2*
        c_14*(c_78+c_144)+6*(-10*c_16-2*c_15*p3.z+c_341+c_19))-8*c_33*(c_45+5*c_46+8*c_16*p3.z+c_213+8*p2.z*c_19+5*c_49+2*c_9*
        c_70+c_14*(c_145+c_146+c_109)+p1.z*(4*c_16+c_147+c_178+4*c_19)))+c_24*(-3*c_17*c_33+c_11*(c_199+c_274+c_346)+c_10*p3.y*(15*
        p1.z+c_78+c_347)+3*c_8*(-(p3.y*(p1.z+c_84+c_148))+c_149)+2*p3.y*(9*c_9+21*c_16+48*c_15*p3.z+c_203-120*c_19+9*c_14*c_206-5*c_12*
        (c_74+p2.z+c_150)+9*p1.z*c_218)+3*p1.y*(-2*c_12*(c_31+c_84+c_151)+c_153+2*p2.y*p3.y*c_134+6*c_33*(c_14+c_145+c_101+c_154+2*
        p1.z*(p2.z+c_103)))+2*p2.y*(c_12*(c_74+c_144)-3*(c_217+c_278-9*c_15*p3.z+c_155+c_14*(c_193+c_143)+9*p1.z*c_272))))+p10_3*(5*
        c_55*c_22+15*c_62*p3.x*c_61+p3.x*(-3*c_11*p1.z-3*c_10*p3.y*p1.z-3*p2.y*c_12*p1.z-7*c_13*p1.z+180*p2.y*c_9+60*p3.y*
        c_9+c_156+c_169-9*c_13*p2.z+c_157+108*p3.y*c_14*p2.z+18*p2.y*p1.z*c_15+c_158+c_159+c_160+c_170+c_161-8*c_13*p3.z-36*p2.y*c_14*
        p3.z-36*p2.y*p1.z*p2.z*p3.z+108*p3.y*p1.z*p2.z*p3.z+c_162+c_172-90*p2.y*p1.z*c_18+c_163+c_173+c_164-54*p2.y*c_19-48*
        p3.y*c_19+10*c_17*c_191-2*c_8*(15*p2.y*p1.z+c_51-6*p2.y*p2.z+c_52-9*p2.y*p3.z)-5*c_24*(c_20+c_51+c_52+c_165)-p1.y*
        (-240*c_9-15*c_24*p2.z+180*c_14*p2.z+72*p1.z*c_15+18*c_16+3*c_10*c_265+6*p2.y*p3.y*c_76-25*c_24*p3.z+60*c_14*p3.z+c_267+c_95+96*
        p1.z*c_18+c_166+42*c_19+c_12*(c_177+c_167+c_143)))+p2.x*(7*c_11*p1.z+3*c_10*p3.y*p1.z+3*p2.y*c_12*p1.z+c_63+c_168-180*
        p3.y*c_9+8*c_11*p2.z-9*c_10*p3.y*p2.z+c_169+c_64+36*p3.y*c_14*p2.z+54*p2.y*p1.z*c_15+90*p3.y*p1.z*c_15+48*p2.y*
        c_16+54*p3.y*c_16+9*c_11*p3.z+c_170+c_66-108*p2.y*c_14*p3.z-72*p3.y*c_14*p3.z+c_171+c_228-54*p2.y*c_15*p3.z+c_172-54*p2.y*
        p1.z*c_18+c_67+c_173+c_68+c_69-10*c_17*c_174+2*c_8*(c_1+15*p3.y*p1.z-9*p3.y*p2.z+c_5-6*p3.y*p3.z)+c_176+p1.y*(6*p2.y*
        p3.y*c_152+c_10*(c_177+c_78+c_231)+3*(-80*c_9+c_71+14*c_16+c_12*c_287+c_72+c_147+c_178+c_73+20*c_14*c_179+8*p1.z*(4*
        c_15+c_86+c_109)))))+c_24*(c_290-6*c_41*p3.y*p1.z-9*c_11*c_12*p1.z-12*c_10*c_13*p1.z-15*p2.y*c_43*p1.z+9*c_44*p1.z+c_237+12*c_10*
        p3.y*c_9+c_293+c_180-24*p2.y*c_40+c_295-4*c_42*p2.z-7*c_41*p3.y*p2.z-9*c_11*c_12*p2.z-10*c_10*c_13*p2.z-10*p2.y*c_43*
        p2.z-9*c_44*p2.z+18*c_11*c_14*p2.z+24*c_10*p3.y*c_14*p2.z+c_181-24*p2.y*c_45*p2.z+c_299+c_182+c_183+c_243+4*c_10*p3.y*c_16+6*
        p2.y*c_12*c_16+c_184-24*p2.y*c_14*c_16+c_304+32*p2.y*c_47+8*p3.y*c_47-c_42*p3.z-3*c_41*p3.y*p3.z-6*c_11*c_12*p3.z-10*
        c_10*c_13*p3.z+c_185+12*c_11*c_14*p3.z+36*c_10*p3.y*c_14*p3.z+72*p2.y*c_12*c_14*p3.z-20*c_13*c_14*p3.z-48*p2.y*c_45*
        p3.z-24*p3.y*c_45*p3.z+36*c_11*p1.z*p2.z*p3.z+72*c_10*p3.y*p1.z*p2.z*p3.z+72*p2.y*c_12*p1.z*p2.z*p3.z+c_313-4*c_11*c_15*
        p3.z+c_186+20*c_13*c_15*p3.z-48*p2.y*c_14*c_15*p3.z-48*p2.y*p1.z*c_16*p3.z+56*p2.y*c_46*p3.z+24*p3.y*c_46*p3.z+18*
        c_11*p1.z*c_18+72*c_10*p3.y*p1.z*c_18+180*p2.y*c_12*p1.z*c_18-60*c_13*p1.z*c_18-72*p2.y*c_9*c_18-48*p3.y*c_9*c_18-6*c_11*
        p2.z*c_18+c_187+60*c_13*p2.z*c_18-72*p2.y*c_14*p2.z*c_18-72*p2.y*p1.z*c_15*c_18+72*p2.y*c_16*c_18+48*p3.y*c_16*
        c_18+c_188-20*c_10*p3.y*c_19-60*p2.y*c_12*c_19-96*p2.y*c_14*c_19-80*p3.y*c_14*c_19-96*p2.y*p1.z*p2.z*c_19+80*p2.y*c_15*c_19+80*
        p3.y*c_15*c_19-120*p2.y*p1.z*c_49+c_189+80*p2.y*p2.z*c_49+c_190+72*p2.y*c_50+c_48*c_191-5*c_88*(c_20+c_51+c_21+c_26+c_53+c_28)+c_39*
        (c_192+7*p3.y*p1.z+c_214+6*p3.y*p2.z+3*p3.y*p3.z)-c_8*(3*c_11*c_58+6*c_10*p3.y*c_58-2*c_13*(c_79+c_193+c_144)-3*
        p2.y*c_58*(c_207+c_194+c_108+c_101+c_87+c_195)+4*p3.y*(c_9+9*c_14*p2.z+c_83+c_196+c_166+c_216+3*p1.z*(2*c_15+c_197+c_198)))+c_17*
        (c_215+6*p2.y*p3.y*c_200+c_12*(c_199+c_78+c_38)-2*(c_83+2*c_14*c_333+c_147+c_104-2*c_19+3*p1.z*(c_145+c_197+c_198)))+p1.y*
        (-3*c_41*c_58+6*c_11*p3.y*c_200+12*p2.y*p3.y*c_58*c_269+5*c_43*c_106-6*c_12*(c_9+c_83+c_348+c_203+c_204+c_14*c_205+3*
        p1.z*p2.z*c_206)+3*c_10*c_58*(c_207+c_211)+8*(-4*c_40+c_45*(c_84-7*p3.z)+3*c_9*(c_15+c_212-3*c_18)+c_14*(c_83+c_147+c_104+c_204)+p1.z*
        (3*c_46+6*c_16*p3.z+c_213+12*p2.z*c_19-10*c_49)+3*(c_47+2*c_46*p3.z+c_338+4*c_15*c_19+5*p2.z*c_49-3*c_50)))+c_24*
        (-(c_11*c_98)+c_8*(c_192+c_51+c_214+12*p3.y*p2.z+15*p3.y*p3.z)+c_17*c_106-c_10*p3.y*(12*p1.z+5*c_179)+p3.y*c_58*(-5*
        c_12+18*(c_14+c_15+5*p2.z*p3.z+15*c_18+p1.z*(p2.z+c_144)))+p1.y*(c_215-12*p2.y*p3.y*c_58+5*c_12*(p1.z+c_193+c_143)+6*(2*c_9-3*
        c_16-12*c_15*p3.z-30*p2.z*c_18+c_216+c_14*(-3*p2.z+c_144)+p1.z*(-3*c_15-12*p2.z*p3.z+5*c_18)))+p2.y*(-5*c_12*(6*
        p1.z+p2.z+c_143)+6*(c_217-2*c_16-5*c_15*p3.z-5*p2.z*c_18+5*c_19+3*c_14*c_206+3*p1.z*c_218))))+p1.x*(5*c_219*c_22+15*c_54*p3.x*
        c_61+3*c_62*p3.x*c_61*(c_220+3*c_8+6*c_10+6*p2.y*p3.y+c_221+p1.y*(6*p2.y+4*p3.y)-6*c_210)-c_55*(-10*c_11*p1.z-18*c_10*
        p3.y*p1.z-9*p2.y*c_12*p1.z+c_222+42*p2.y*c_9+54*p3.y*c_9+c_223+30*c_10*p3.y*p2.z+12*p2.y*c_12*p2.z+c_224+96*p2.y*c_14*
        p2.z+90*p3.y*c_14*p2.z+60*p2.y*p1.z*c_15+36*p3.y*p1.z*c_15+c_225-180*p3.y*c_16+15*c_24*(p3.y*c_200+p2.y*c_37)-30*c_11*
        p3.z-12*c_10*p3.y*p3.z-3*p2.y*c_12*p3.z+c_226+36*p3.y*c_14*p3.z+c_227+c_228+180*p2.y*c_15*p3.z-72*p3.y*c_15*p3.z+c_229+18*
        p3.y*p1.z*c_18+72*p2.y*p2.z*c_18-18*p3.y*p2.z*c_18+c_230+c_17*(c_332+7*p2.z+c_143)+c_8*(3*p3.y*c_349+p2.y*(c_199+16*
        p2.z+c_231))+p1.y*(6*p2.y*p3.y*(c_232+c_75+p3.z)+2*c_10*c_286-3*(-16*c_9+c_71+c_233+c_12*c_266-18*c_14*c_33+c_72+36*c_15*
        p3.z+c_166+c_73+12*p1.z*p3.z*c_289)))+p2.x*(c_234+3*c_41*p3.y*p1.z+c_235+3*c_10*c_13*p1.z+3*p2.y*c_43*p1.z+c_236+c_237+c_238-18*
        p2.y*c_12*c_9-18*c_13*c_9+c_239+120*p3.y*c_40+c_240-15*c_41*p3.y*p2.z-12*c_11*c_12*p2.z+c_297-6*p2.y*c_43*
        p2.z+c_241+16*c_11*c_14*p2.z+c_242-12*p2.y*c_12*c_14*p2.z-6*c_13*c_14*p2.z+72*p3.y*c_45*p2.z+20*c_11*p1.z*c_15+c_182+c_183+6*
        c_13*p1.z*c_15+c_243+24*p3.y*c_9*c_15+180*c_10*p3.y*c_16+72*p2.y*c_12*c_16+c_303-64*p2.y*c_14*c_16+c_244-120*p2.y*p1.z*
        c_46-72*p3.y*p1.z*c_46+c_245-120*p3.y*c_47+15*c_42*p3.z+12*c_41*p3.y*p3.z+c_308+6*c_10*c_13*p3.z+c_246+c_117-24*c_10*p3.y*
        c_14*p3.z-30*p2.y*c_12*c_14*p3.z-36*c_13*c_14*p3.z+c_247+96*p3.y*c_45*p3.z+c_248+c_249-12*p2.y*c_12*p1.z*p2.z*
        p3.z+c_250+c_251-180*c_11*c_15*p3.z+c_316+36*c_13*c_15*p3.z+c_118+c_252+c_119+120*p2.y*c_46*p3.z-96*p3.y*c_46*p3.z+c_253-30*
        c_10*p3.y*p1.z*c_18+c_91+c_254+c_255+72*p3.y*c_9*c_18-72*c_11*p2.z*c_18+c_320+c_256+c_257+24*p3.y*c_14*p2.z*c_18+c_258-24*
        p3.y*p1.z*c_15*c_18+96*p2.y*c_16*c_18+c_322+c_323-36*c_10*p3.y*c_19+c_259+c_260+48*p3.y*c_14*c_19+c_123+c_325-48*p3.y*c_15*
        c_19+c_261+c_262+48*p2.y*p2.z*c_49+c_263+c_264-c_48*(c_327+p2.z+c_231)+c_17*(9*c_24*p2.z-20*c_14*p2.z-16*p1.z*c_15-6*c_16+3*
        c_12*c_265+c_10*(-8*p1.z+c_84+c_30)+6*p2.y*p3.y*c_266-9*c_24*p3.z+180*c_14*p3.z+c_267+c_95+72*p1.z*c_18+c_166+18*c_19)+15*
        c_88*c_175-3*c_39*(p2.y*(c_79+c_32)+p3.y*(c_331+p2.z+c_150))-9*c_24*(c_10*p3.y*c_85+c_11*c_37+2*p3.y*c_58*c_269-2*p2.y*
        (c_217+c_12*c_130+p1.z*p2.z*c_205+c_14*(c_270+c_32)-3*p3.z*c_272))+c_8*(9*c_10*p3.y*c_58+3*c_13*c_273+c_11*(c_232+c_274+c_32)-3*
        c_24*(-3*p3.y*c_85+p2.y*c_275)+6*p3.y*(c_336-6*c_14*p2.z+c_83+4*c_15*p3.z+c_343+c_73+3*p1.z*(c_15+c_212+c_109))+p2.y*
        (c_12*(c_199-6*p2.z+c_30)+2*(c_276+c_277+c_278+18*c_14*p3.z+18*p1.z*p2.z*p3.z+c_196+9*p1.z*c_18+c_178+c_113)))+p1.y*(6*
        c_43*p1.z-72*c_12*c_9+192*c_40-3*c_43*p2.z-18*c_12*c_14*p2.z+120*c_45*p2.z+12*c_12*p1.z*c_15+64*c_9*c_15+18*c_12*c_16+24*
        c_14*c_16-8*c_47+c_279+c_280-54*c_12*c_14*p3.z-120*c_45*p3.z+12*c_12*p1.z*p2.z*p3.z-96*c_9*p2.z*p3.z+30*c_12*c_15*
        p3.z+c_281-48*p1.z*c_16*p3.z-24*c_46*p3.z-96*c_9*c_18+c_282-72*c_14*p2.z*c_18-48*p1.z*c_15*c_18-24*c_16*c_18+c_283-72*c_14*
        c_19+c_284-24*c_15*c_19-48*p1.z*c_49-24*p2.z*c_49+c_285+6*c_11*p3.y*c_126+3*c_41*c_286-6*p2.y*p3.y*c_58*(c_107+2*(c_132+9*p1.z*
        p2.z+c_108+3*p1.z*p3.z+c_86+c_18))-3*c_24*(2*p2.y*p3.y*c_58-6*c_12*c_37+c_10*c_287+6*c_33*(c_201+c_202+c_145+c_268+c_197+c_87))+c_10*
        (3*c_12*c_152+2*(8*c_9+c_288+c_337-18*c_15*p3.z-9*p2.z*c_18+c_334-6*p1.z*p3.z*c_289))))+p3.x*(c_290-3*c_41*p3.y*
        p1.z-3*c_11*c_12*p1.z+c_291-3*p2.y*c_43*p1.z+c_292+18*c_11*c_9+18*c_10*p3.y*c_9+c_293+c_294-120*p2.y*c_40+c_295+c_296-6*
        c_11*c_12*p2.z+c_297-12*p2.y*c_43*p2.z-15*c_44*p2.z+36*c_11*c_14*p2.z+30*c_10*p3.y*c_14*p2.z+24*p2.y*c_12*c_14*p2.z+c_115-96*
        p2.y*c_45*p2.z+c_298+c_299+c_182+30*p2.y*c_12*p1.z*c_15+c_300-72*p2.y*c_9*c_15+c_301+c_302+36*p2.y*c_12*c_16+c_303-48*
        p2.y*c_14*c_16+c_244+c_304+c_305+c_306+c_307+6*c_41*p3.y*p3.z+c_308+12*c_10*c_13*p3.z+15*p2.y*c_43*p3.z+c_309+6*c_11*
        c_14*p3.z+12*c_10*p3.y*c_14*p3.z+c_310-16*c_13*c_14*p3.z-72*p2.y*c_45*p3.z+12*c_10*p3.y*p1.z*p2.z*
        p3.z+c_311+c_312+c_313+c_314+c_315+c_316+72*c_13*c_15*p3.z-24*p2.y*c_14*c_15*p3.z+c_317+c_119+c_318-48*p3.y*c_46*p3.z-6*c_11*p1.z*c_18+c_121+c_91-20*
        c_13*p1.z*c_18-24*p2.y*c_9*c_18+c_319-36*c_11*p2.z*c_18+c_320+180*c_13*p2.z*c_18+c_122+24*p2.y*p1.z*c_15*c_18+c_321+48*
        p2.y*c_16*c_18+c_322+c_323-72*c_10*p3.y*c_19-180*p2.y*c_12*c_19+c_260+64*p3.y*c_14*c_19+c_123+c_324+c_325-96*p3.y*c_15*
        c_19+72*p2.y*p1.z*c_49+120*p3.y*p1.z*c_49+96*p2.y*p2.z*c_49-120*p3.y*p2.z*c_49+120*p2.y*c_50+c_326+c_48*
        (c_327+c_167+p3.z)+c_330+3*c_39*(p3.y*(c_79+c_84)+p2.y*(c_331+c_270+p3.z))+c_17*(c_12*(c_332+c_84+c_30)+6*p2.y*p3.y*c_81+3*c_10*(-4*
        p1.z+c_84+p3.z)-2*(c_339+10*c_14*c_333+c_196+c_104+c_334+4*p1.z*(9*c_15+c_139+c_335)))-c_8*(3*c_10*p3.y*c_273+9*p2.y*c_12*
        c_37+c_13*(c_232+c_84+8*p3.z)+c_11*(c_199-3*(c_75+p3.z))+2*p3.y*(c_276+18*c_14*p2.z+c_83+c_147+c_104-8*c_19+9*p1.z*
        (c_15+c_212+c_198))+6*p2.y*(c_336+c_342-6*c_14*p3.z+5*c_15*p3.z+4*p2.z*c_18+c_113+3*p1.z*(c_145+c_212+c_18)))+p1.y*(6*c_11*p3.y*
        c_36+3*c_41*c_81-3*c_43*c_350+2*c_12*(-8*c_9+c_83+c_337+c_196+c_166+c_155+6*p1.z*p2.z*c_179)-6*p2.y*(c_13*c_85-2*p3.y*c_37*
        (c_132+3*p1.z*p2.z+c_15+9*p1.z*p3.z+c_86+c_87))+8*(-24*c_40+3*c_47+15*c_45*c_33+3*c_46*p3.z+c_338+3*c_15*c_19+3*p2.z*c_49+c_50+4*
        c_9*(c_145+c_86+c_335)+c_14*(c_339+c_196+c_104+c_334)+6*p1.z*p2.z*(c_16+c_340+c_341+c_19))-3*c_10*(c_127+2*(-12*
        c_9+c_342+c_147+c_343+c_113+2*p1.z*p3.z*c_70-3*c_14*c_289)))+c_24*(-3*c_10*p3.y*c_344+c_345-10*c_13*(p1.z+c_84+c_150)+c_17*
        (c_332+c_78+c_346)+c_8*(p2.y*(-9*p1.z+c_193+c_32)+p3.y*(c_199+c_167+c_347))+6*p3.y*(7*c_9+c_83+c_348+c_203-40*c_19+c_14*(c_84+c_347)+p1.z*
        (c_145+12*p2.z*p3.z+c_154))+p1.y*(48*c_9-54*c_14*c_33+3*c_10*c_81+6*p2.y*p3.y*c_349-36*p1.z*p2.z*c_179+2*c_12*
        c_350-6*(c_83+c_196+c_166+c_155))-6*p2.y*(c_12*(c_74+c_75+c_151)-3*c_37*(c_201+c_15+c_146+c_154+2*p1.z*c_206))))))/double(40320);
}

double trig::c52() const{
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
    double p10_2=p1.x*p1.x;
    double p10_3=p1.x*p10_2;
    double p10_4=p1.x*p10_3;
    double p10_5=p1.x*p10_4;
    double c_0=p12_2;
    double c_1=p22_2;
    double c_2=p32_2;
    double c_3=-p3.z;
    double c_4=p2.z+c_3;
    double c_5=5*p2.z;
    double c_6=-(3*c_2);
    double c_7=3*c_0;
    double c_8=15*p2.z*p3.z;
    double c_9=c_5+p3.z;
    double c_10=p1.z+c_3;
    double c_11=2*p3.z;
    double c_12=3*c_1;
    double c_13=-(3*p2.z*p3.z);
    double c_14=5*p1.z;
    double c_15=2*p2.z;
    double c_16=10*c_0;
    double c_17=-(3*c_1);
    double c_18=6*p2.z*p3.z;
    double c_19=3*c_2;
    double c_20=3*p2.z*p3.z;
    double c_21=p2.z+p3.z;
    double c_22=p12_4;
    double c_23=p12_3;
    double c_24=p22_3;
    double c_25=p22_4;
    double c_26=p32_3;
    double c_27=p32_4;
    double c_28=10*c_1;
    double c_29=c_15+p3.z;
    double c_30=6*p1.z*c_29;
    double c_31=3*p3.y*c_22;
    double c_32=-(3*p1.y*c_23*p3.z);
    double c_33=18*p3.y*p1.z*c_1*p3.z;
    double c_34=-(9*p1.y*p1.z*p2.z*c_2);
    double c_35=p30_2;
    double c_36=3*p2.z;
    double c_37=9*p1.z*c_21;
    double c_38=9*c_1;
    double c_39=8*p2.z*p3.z;
    double c_40=-p2.z;
    double c_41=p20_2;
    double c_42=p1.z+c_40;
    double c_43=12*p1.z*p3.z;
    double c_44=-(6*c_1);
    double c_45=4*p1.z;
    double c_46=3*p3.z;
    double c_47=3*p1.z*p3.z;
    double c_48=9*p2.z*p3.z;
    double c_49=-(6*c_2);
    double c_50=p11_4;
    double c_51=p11_3;
    double c_52=p11_2;
    double c_53=p21_2;
    double c_54=p21_3;
    double c_55=p31_2;
    double c_56=p31_3;
    double c_57=p21_5;
    double c_58=p21_4;
    double c_59=p31_4;
    double c_60=p31_5;
    double c_61=p11_5;
    double c_62=p20_3;
    double c_63=-p1.z;
    double c_64=c_63+p2.z;
    double c_65=p3.y*c_64;
    double c_66=p2.y*c_10;
    double c_67=c_40+p3.z;
    double c_68=p1.y*c_67;
    double c_69=c_65+c_66+c_68;
    double c_70=3*p2.z*c_2;
    double c_71=2*p1.z;
    double c_72=-(10*c_2);
    double c_73=5*p3.z;
    double c_74=9*p3.y*c_0*c_1;
    double c_75=9*p3.y*c_0*p2.z*p3.z;
    double c_76=9*p2.y*p1.z*p2.z*c_2;
    double c_77=-(9*p3.y*c_1*c_2);
    double c_78=3*p3.y*p1.z*c_26;
    double c_79=-(3*p3.y*p2.z*c_26);
    double c_80=3*p2.y*c_27;
    double c_81=4*p2.z;
    double c_82=-c_2;
    double c_83=2*p2.z*p3.z;
    double c_84=p20_4;
    double c_85=-(10*c_1);
    double c_86=-(12*p2.z*p3.z);
    double c_87=7*c_0;
    double c_88=3*p1.z*c_9;
    double c_89=5*p2.z*p3.z;
    double c_90=15*c_22;
    double c_91=-(9*c_1*c_2);
    double c_92=c_1+c_83+c_19;
    double c_93=3*c_1*p3.z;
    double c_94=p2.z+c_46;
    double c_95=6*c_1*c_2;
    double c_96=3*p1.z;
    double c_97=9*c_0;
    double c_98=8*p1.z*p2.z;
    double c_99=5*p2.y*c_22;
    double c_100=6*p3.y*c_23*p2.z;
    double c_101=18*p2.y*c_0*p2.z*p3.z;
    double c_102=18*p2.y*p1.z*c_1*p3.z;
    double c_103=-(9*p3.y*p1.z*c_1*p3.z);
    double c_104=9*p3.y*c_0*c_2;
    double c_105=p3.y*p1.z;
    double c_106=-c_105;
    double c_107=-(p1.y*p2.z);
    double c_108=p3.y*p2.z;
    double c_109=p1.y*p3.z;
    double c_110=c_106+c_107+c_108+c_66+c_109;
    double c_111=-(5*c_25);
    double c_112=-(3*p3.z);
    double c_113=-(3*c_27);
    double c_114=-(9*p2.y*c_0*c_1);
    double c_115=-(9*p3.y*c_0*c_1);
    double c_116=-(6*p3.y*p1.z*c_24);
    double c_117=-(3*p3.y*c_25);
    double c_118=-(18*p3.y*c_0*p2.z*p3.z);
    double c_119=3*p2.y*c_24*p3.z;
    double c_120=9*p2.y*c_0*c_2;
    double c_121=9*p2.y*p2.z*c_26;
    double c_122=3*c_24*p3.z;
    double c_123=5*c_27;
    double c_124=c_1*p3.z;
    double c_125=p2.z*c_2;
    double c_126=c_24+c_124+c_125+c_26;
    double c_127=4*p3.z;
    double c_128=12*p2.z*p3.z;
    double c_129=c_36+p3.z;
    double c_130=3*c_54*c_22;
    double c_131=-(3*p2.y*c_59*p1.z*p2.z);
    double c_132=3*p2.y*c_55*c_23*p2.z;
    double c_133=-(9*c_53*c_56*c_1);
    double c_134=9*c_53*p3.y*c_0*c_1;
    double c_135=9*p2.y*c_55*p1.z*c_1*p3.z;
    double c_136=15*p2.y*c_59*c_2;
    double c_137=-(9*c_53*p3.y*c_1*c_2);
    double c_138=-(3*c_54*c_27);
    double c_139=15*p1.z*p2.z;
    double c_140=-(p1.z*p3.z);
    double c_141=c_97+c_139+c_12+c_140+c_20+c_82;
    double c_142=5*c_22;
    double c_143=-(3*c_25);
    double c_144=-(3*c_24*p3.z);
    double c_145=-(3*c_1*c_2);
    double c_146=-(3*p2.z*c_26);
    double c_147=c_71+p2.z+p3.z;
    double c_148=c_45+c_36+p3.z;
    double c_149=9*p1.z*p2.z;
    double c_150=c_16+c_149+c_12+c_47+c_48+c_49;
    double c_151=c_14+c_15+p3.z;
    double c_152=12*p1.z*p2.z;
    double c_153=c_16+c_152+c_12+c_18+c_6;
    double c_154=p3.y*c_153;
    double c_155=p30_4;
    double c_156=9*c_2;
    double c_157=p2.z+c_73;
    double c_158=3*p1.z*c_157;
    double c_159=3*c_25;
    double c_160=-(5*c_27);
    double c_161=3*c_24;
    double c_162=9*c_1*p3.z;
    double c_163=18*p2.z*c_2;
    double c_164=-(10*c_26);
    double c_165=c_161+c_162+c_163+c_164;
    double c_166=p1.z*c_165;
    double c_167=3*c_22;
    double c_168=3*c_23*c_94;
    double c_169=6*c_2;
    double c_170=c_1+c_20+c_169;
    double c_171=6*p2.z*c_2;
    double c_172=10*c_26;
    double c_173=c_96+c_81+p3.z;
    double c_174=c_96+c_36+c_11;
    double c_175=c_96+c_15+c_46;
    double c_176=c_12+c_83+c_2;
    double c_177=6*p1.z*p2.z;
    double c_178=8*p1.z*p3.z;
    double c_179=c_97+c_177+c_12+c_178+c_128+c_72;
    double c_180=c_1+c_83+c_82;
    double c_181=6*c_1*p3.z;
    double c_182=3*c_1*c_2;
    double c_183=p1.z+c_15+p3.z;
    double c_184=c_71+c_5+p3.z;
    double c_185=2*c_23;
    double c_186=2*c_24;
    double c_187=2*c_26;
    double c_188=3*c_0*c_21;
    double c_189=p1.z+p2.z+c_11;
    double c_190=4*p2.z*p3.z;
    double c_191=c_12+c_190+c_19;
    double c_192=p1.z*c_191;
    double c_193=4*c_23;
    double c_194=10*c_24;
    double c_195=6*c_1;
    double c_196=c_195+c_20+c_2;
    double c_197=3*c_21;
    double c_198=c_71+c_197;
    double c_199=2*c_2;
    double c_200=c_1+c_20+c_199;
    double c_201=3*c_0*c_200;
    double c_202=10*p2.z*c_26;
    double c_203=-(15*c_27);
    double c_204=c_25+c_122+c_95+c_202+c_203;
    double c_205=3*c_204;
    double c_206=-(5*c_2);
    double c_207=c_1+c_89+c_206;
    double c_208=3*c_207;
    double c_209=c_87+c_158+c_208;
    double c_210=-(3*c_56*c_22);
    double c_211=-(15*c_58*p3.y*c_1);
    double c_212=-(10*c_54*c_55*c_1);
    double c_213=3*c_56*c_25;
    double c_214=3*c_58*p3.y*p1.z*p3.z;
    double c_215=-(3*c_53*p3.y*c_23*p3.z);
    double c_216=9*c_54*c_55*c_2;
    double c_217=10*c_53*c_56*c_2;
    double c_218=-(9*p2.y*c_55*c_0*c_2);
    double c_219=-(9*c_53*p3.y*p1.z*p2.z*c_2);
    double c_220=9*p2.y*c_55*c_1*c_2;
    double c_221=-9*c_0;
    double c_222=-(15*p3.z);
    double c_223=p2.z+c_222;
    double c_224=p1.z*c_223;
    double c_225=c_221+c_1+c_224+c_13+c_6;
    double c_226=c_14+p2.z+c_11;
    double c_227=c_16+c_17+c_43+c_18+c_19;
    double c_228=3*p2.z*c_26;
    double c_229=3*c_27;
    double c_230=c_45+p2.z+c_46;
    double c_231=3*p1.z*c_94;
    double c_232=10*c_2;
    double c_233=p2.z+c_11;
    double c_234=6*p1.z*c_233;
    double c_235=7*c_1;
    double c_236=9*c_24*p3.z;
    double c_237=-(10*p2.z*c_26);
    double c_238=3*c_0*c_170;
    double c_239=c_24+c_93+c_171+c_172;
    double c_240=3*p1.z*c_239;
    double c_241=6*p1.z*p3.z;
    double c_242=c_97+c_98+c_85+c_241+c_128+c_19;
    double c_243=10*c_23;
    double c_244=c_96+p2.z+c_127;
    double c_245=-(2*p2.z*p3.z);
    double c_246=c_1+c_245+c_82;
    double c_247=-5*c_1;
    double c_248=c_247+c_89+c_2;
    double c_249=3*c_248;
    double c_250=c_87+c_88+c_249;
    double c_251=-(c_55*c_189);
    double c_252=c_185+c_186+c_93+c_70+c_187+c_188+c_251+c_192;
    double c_253=3*c_23*c_129;
    double c_254=9*p2.z*c_2;
    double c_255=3*c_26;
    double c_256=c_71+p2.z+c_73;
    double c_257=4*c_24;
    double c_258=3*c_0*c_94;
    double c_259=2*p1.z*c_170;
    double c_260=c_193+c_24+c_93+c_171+c_172+c_258+c_259;
    return (p10_5*(4*p1.y*c_4*(6*p1.z+p2.z+p3.z)+p2.y*c_225+p3.y*c_141)+p20_5*(-4*p2.y*c_10*(p1.z+6*p2.z+p3.z)+p1.y*
        (-c_0-p1.z*p2.z+c_38+c_47+c_8+c_19)+p3.y*(-3*c_0-9*c_1+p2.z*p3.z+c_2-3*p1.z*c_9))+c_84*p3.x*(-3*p1.y*c_4*(p1.z+c_5+c_11)-p3.y*
        (c_7+c_28+c_6+c_30)+p2.y*(c_7-15*c_1+c_8+7*c_2+c_88))+p10_4*(p3.x*(3*p2.y*c_10*c_226+c_154+p1.y*(15*c_0+c_17+c_13-7*c_2-15*
        p1.z*c_21))+p2.x*(-3*p3.y*c_42*c_151-p2.y*c_227+p1.y*(-15*c_0+c_235+c_20+c_19+15*p1.z*c_21)))+c_62*(3*p1.y*c_22+2*p2.y*
        c_22+c_31+7*p1.y*c_23*p2.z+8*p2.y*c_23*p2.z+9*p3.y*c_23*p2.z+10*p1.y*c_0*c_1+20*p2.y*c_0*c_1+18*p3.y*c_0*c_1+10*p1.y*
        p1.z*c_24+40*p2.y*p1.z*c_24+30*p3.y*p1.z*c_24+5*p1.y*c_25-5*p3.y*c_25+c_32+3*p3.y*c_23*p3.z-9*p1.y*c_0*p2.z*p3.z+c_75-18*
        p1.y*p1.z*c_1*p3.z+c_33-30*p1.y*c_24*p3.z-40*p2.y*c_24*p3.z-10*p3.y*c_24*p3.z-3*p1.y*c_0*c_2+3*p3.y*c_0*c_2+c_34+9*
        p3.y*p1.z*p2.z*c_2-18*p1.y*c_1*c_2-20*p2.y*c_1*c_2-10*p3.y*c_1*c_2-3*p1.y*p1.z*c_26+c_78-9*p1.y*p2.z*c_26-8*p2.y*
        p2.z*c_26-7*p3.y*p2.z*c_26-3*p1.y*c_27-2*p2.y*c_27-3*p3.y*c_27+c_35*(-3*p1.y*c_4*(p1.z+c_81+c_46)-p3.y*
        (c_7+c_28+c_20+c_49+c_37)+p2.y*(c_7+c_85+c_39+c_156+c_30)))+c_41*p3.x*(c_31+3*p1.y*c_23*p2.z+c_100+9*p1.y*c_0*c_1+c_74+18*p1.y*p1.z*c_24+12*
        p3.y*p1.z*c_24+30*p1.y*c_25+5*p3.y*c_25+c_32+6*p3.y*c_23*p3.z-3*p1.y*c_0*p2.z*p3.z+12*p3.y*c_0*p2.z*p3.z+c_33+6*
        p1.y*c_24*p3.z-6*p1.y*c_0*c_2+c_104+c_34+18*p3.y*p1.z*p2.z*c_2-9*p1.y*c_1*c_2+c_77-9*p1.y*p1.z*c_26+12*p3.y*p1.z*c_26-15*
        p1.y*p2.z*c_26-16*p3.y*p2.z*c_26-12*p1.y*c_27-15*p3.y*c_27-p2.y*(c_167-45*c_25-10*c_24*p3.z+c_95+9*p2.z*c_26+c_123+c_253+3*
        c_0*c_196+3*p1.z*(c_194+c_181+c_70+c_26))+c_35*(-3*p1.y*c_4*(p1.z+c_36+c_127)+p2.y*(c_7+c_44+c_20+c_232+c_37)-p3.y*
        (c_7+c_38+c_39+c_72+c_234)))+p10_3*(-5*p2.y*c_22+5*p3.y*c_22-40*p1.y*c_23*p2.z-10*p2.y*c_23*p2.z-30*p3.y*c_23*p2.z-20*
        p1.y*c_0*c_1-10*p2.y*c_0*c_1-18*p3.y*c_0*c_1-8*p1.y*p1.z*c_24-7*p2.y*p1.z*c_24-9*p3.y*p1.z*c_24-2*p1.y*c_25-3*p2.y*
        c_25+c_117+40*p1.y*c_23*p3.z+30*p2.y*c_23*p3.z+10*p3.y*c_23*p3.z+c_101+c_118+9*p2.y*p1.z*c_1*p3.z+c_103+c_119-3*p3.y*c_24*
        p3.z+20*p1.y*c_0*c_2+18*p2.y*c_0*c_2+10*p3.y*c_0*c_2+c_76-9*p3.y*p1.z*p2.z*c_2+3*p2.y*c_1*c_2-3*p3.y*c_1*c_2+8*p1.y*
        p1.z*c_26+9*p2.y*p1.z*c_26+7*p3.y*p1.z*c_26+3*p2.y*p2.z*c_26+c_79+2*p1.y*c_27+c_80+3*p3.y*c_27+6*p2.x*p3.x*c_147*c_69+c_41*
        (-3*p3.y*c_42*c_148+p1.y*(-10*c_0+c_98+c_38+c_43+c_18+c_19)-p2.y*(c_16+3*p1.z*p2.z+c_44+9*p1.z*p3.z+c_48+c_19))+c_35*
        (3*p2.y*c_10*c_230+p3.y*c_150+p1.y*(c_16-4*p1.z*(c_36+c_11)-3*c_92)))+p1.x*(-15*c_50*p2.y*c_0-10*c_51*c_53*c_0-6*c_52*c_54*
        c_0-3*p1.y*c_58*c_0-c_57*c_0+15*c_50*p3.y*c_0+10*c_51*c_55*c_0+6*c_52*c_56*c_0+3*p1.y*c_59*c_0+c_60*c_0+45*c_52*p2.y*c_22+15*
        p1.y*c_53*c_22+c_130-45*c_52*p3.y*c_22-15*p1.y*c_55*c_22+c_210+24*c_61*p1.z*p2.z+15*c_50*p2.y*p1.z*p2.z+8*c_51*c_53*
        p1.z*p2.z+3*c_52*c_54*p1.z*p2.z-c_57*p1.z*p2.z-15*c_50*p3.y*p1.z*p2.z-12*c_51*p2.y*p3.y*p1.z*p2.z-9*c_52*c_53*p3.y*
        p1.z*p2.z-6*p1.y*c_54*p3.y*p1.z*p2.z-3*c_58*p3.y*p1.z*p2.z-12*c_51*c_55*p1.z*p2.z-9*c_52*p2.y*c_55*p1.z*p2.z-6*p1.y*
        c_53*c_55*p1.z*p2.z-3*c_54*c_55*p1.z*p2.z-9*c_52*c_56*p1.z*p2.z-6*p1.y*p2.y*c_56*p1.z*p2.z-3*c_53*c_56*p1.z*p2.z-6*
        p1.y*c_59*p1.z*p2.z+c_131-3*c_60*p1.z*p2.z-40*c_51*c_23*p2.z+10*c_52*p2.y*c_23*p2.z+16*p1.y*c_53*c_23*p2.z+7*c_54*c_23*
        p2.z+30*c_52*p3.y*c_23*p2.z+12*p1.y*p2.y*p3.y*c_23*p2.z+3*c_53*p3.y*c_23*p2.z+12*p1.y*c_55*c_23*p2.z+c_132+3*c_56*
        c_23*p2.z+4*c_61*c_1+7*c_50*p2.y*c_1+9*c_51*c_53*c_1+10*c_52*c_54*c_1+10*p1.y*c_58*c_1+9*c_57*c_1-3*c_50*p3.y*c_1-6*c_51*p2.y*
        p3.y*c_1-9*c_52*c_53*p3.y*c_1-12*p1.y*c_54*p3.y*c_1+c_211-3*c_51*c_55*c_1-6*c_52*p2.y*c_55*c_1-9*p1.y*c_53*c_55*c_1-12*
        c_54*c_55*c_1-3*c_52*c_56*c_1-6*p1.y*p2.y*c_56*c_1+c_133-3*p1.y*c_59*c_1-6*p2.y*c_59*c_1-3*c_60*c_1-20*c_51*c_0*c_1-6*c_52*
        p2.y*c_0*c_1+9*p1.y*c_53*c_0*c_1+10*c_54*c_0*c_1+18*c_52*p3.y*c_0*c_1+18*p1.y*p2.y*p3.y*c_0*c_1+c_134+9*p1.y*c_55*c_0*c_1+6*
        p2.y*c_55*c_0*c_1+3*c_56*c_0*c_1-8*c_51*p1.z*c_24-9*c_52*p2.y*p1.z*c_24+10*c_54*p1.z*c_24+9*c_52*p3.y*p1.z*c_24+18*p1.y*
        p2.y*p3.y*p1.z*c_24+18*c_53*p3.y*p1.z*c_24+6*p1.y*c_55*p1.z*c_24+9*p2.y*c_55*p1.z*c_24+3*c_56*p1.z*c_24-2*c_51*c_25-5*
        c_52*p2.y*c_25-5*p1.y*c_53*c_25+5*c_54*c_25+3*c_52*p3.y*c_25+12*p1.y*p2.y*p3.y*c_25+30*c_53*p3.y*c_25+3*p1.y*c_55*
        c_25+12*p2.y*c_55*c_25+c_213-24*c_61*p1.z*p3.z+15*c_50*p2.y*p1.z*p3.z+12*c_51*c_53*p1.z*p3.z+9*c_52*c_54*p1.z*p3.z+6*p1.y*
        c_58*p1.z*p3.z+3*c_57*p1.z*p3.z-15*c_50*p3.y*p1.z*p3.z+12*c_51*p2.y*p3.y*p1.z*p3.z+9*c_52*c_53*p3.y*p1.z*p3.z+6*
        p1.y*c_54*p3.y*p1.z*p3.z+c_214-8*c_51*c_55*p1.z*p3.z+9*c_52*p2.y*c_55*p1.z*p3.z+6*p1.y*c_53*c_55*p1.z*p3.z+3*c_54*c_55*
        p1.z*p3.z-3*c_52*c_56*p1.z*p3.z+6*p1.y*p2.y*c_56*p1.z*p3.z+3*c_53*c_56*p1.z*p3.z+3*p2.y*c_59*p1.z*p3.z+c_60*p1.z*
        p3.z+40*c_51*c_23*p3.z-30*c_52*p2.y*c_23*p3.z-12*p1.y*c_53*c_23*p3.z-3*c_54*c_23*p3.z-10*c_52*p3.y*c_23*p3.z-12*p1.y*
        p2.y*p3.y*c_23*p3.z+c_215-16*p1.y*c_55*c_23*p3.z-3*p2.y*c_55*c_23*p3.z-7*c_56*c_23*p3.z+3*c_50*p2.y*p2.z*p3.z+6*c_51*
        c_53*p2.z*p3.z+9*c_52*c_54*p2.z*p3.z+12*p1.y*c_58*p2.z*p3.z+15*c_57*p2.z*p3.z-3*c_50*p3.y*p2.z*p3.z+3*c_52*c_53*p3.y*
        p2.z*p3.z+6*p1.y*c_54*p3.y*p2.z*p3.z+9*c_58*p3.y*p2.z*p3.z-6*c_51*c_55*p2.z*p3.z-3*c_52*p2.y*c_55*p2.z*p3.z+3*
        c_54*c_55*p2.z*p3.z-9*c_52*c_56*p2.z*p3.z-6*p1.y*p2.y*c_56*p2.z*p3.z-3*c_53*c_56*p2.z*p3.z-12*p1.y*c_59*p2.z*p3.z-9*
        p2.y*c_59*p2.z*p3.z-15*c_60*p2.z*p3.z-18*c_52*p2.y*c_0*p2.z*p3.z-18*p1.y*c_53*c_0*p2.z*p3.z-9*c_54*c_0*p2.z*p3.z+18*
        c_52*p3.y*c_0*p2.z*p3.z-3*c_53*p3.y*c_0*p2.z*p3.z+18*p1.y*c_55*c_0*p2.z*p3.z+3*p2.y*c_55*c_0*p2.z*p3.z+9*c_56*c_0*
        p2.z*p3.z-9*c_52*p2.y*p1.z*c_1*p3.z-18*p1.y*c_53*p1.z*c_1*p3.z-18*c_54*p1.z*c_1*p3.z+9*c_52*p3.y*p1.z*c_1*p3.z+6*
        p1.y*p2.y*p3.y*p1.z*c_1*p3.z+12*p1.y*c_55*p1.z*c_1*p3.z+c_135+9*c_56*p1.z*c_1*p3.z-3*c_52*p2.y*c_24*p3.z-12*p1.y*c_53*
        c_24*p3.z-30*c_54*c_24*p3.z+3*c_52*p3.y*c_24*p3.z+6*p1.y*p2.y*p3.y*c_24*p3.z+6*c_53*p3.y*c_24*p3.z+6*p1.y*c_55*c_24*
        p3.z+15*p2.y*c_55*c_24*p3.z+9*c_56*c_24*p3.z-4*c_61*c_2+3*c_50*p2.y*c_2+3*c_51*c_53*c_2+3*c_52*c_54*c_2+3*p1.y*c_58*c_2+3*
        c_57*c_2-7*c_50*p3.y*c_2+6*c_51*p2.y*p3.y*c_2+6*c_52*c_53*p3.y*c_2+6*p1.y*c_54*p3.y*c_2+6*c_58*p3.y*c_2-9*c_51*c_55*c_2+9*
        c_52*p2.y*c_55*c_2+9*p1.y*c_53*c_55*c_2+c_216-10*c_52*c_56*c_2+12*p1.y*p2.y*c_56*c_2+12*c_53*c_56*c_2-10*p1.y*c_59*c_2+c_136-9*
        c_60*c_2+20*c_51*c_0*c_2-18*c_52*p2.y*c_0*c_2-9*p1.y*c_53*c_0*c_2-3*c_54*c_0*c_2+6*c_52*p3.y*c_0*c_2-18*p1.y*p2.y*p3.y*
        c_0*c_2-6*c_53*p3.y*c_0*c_2-9*p1.y*c_55*c_0*c_2+c_218-10*c_56*c_0*c_2-9*c_52*p2.y*p1.z*p2.z*c_2-12*p1.y*c_53*p1.z*p2.z*
        c_2-9*c_54*p1.z*p2.z*c_2+9*c_52*p3.y*p1.z*p2.z*c_2-6*p1.y*p2.y*p3.y*p1.z*p2.z*c_2+c_219+18*p1.y*c_55*p1.z*p2.z*c_2+18*
        c_56*p1.z*p2.z*c_2-3*c_52*p2.y*c_1*c_2-9*p1.y*c_53*c_1*c_2-18*c_54*c_1*c_2+3*c_52*p3.y*c_1*c_2+c_137+9*p1.y*c_55*c_1*
        c_2+c_220+18*c_56*c_1*c_2+8*c_51*p1.z*c_26-9*c_52*p2.y*p1.z*c_26-6*p1.y*c_53*p1.z*c_26-3*c_54*p1.z*c_26+9*c_52*p3.y*p1.z*
        c_26-18*p1.y*p2.y*p3.y*p1.z*c_26-9*c_53*p3.y*p1.z*c_26-18*p2.y*c_55*p1.z*c_26-10*c_56*p1.z*c_26-3*c_52*p2.y*p2.z*c_26-6*
        p1.y*c_53*p2.z*c_26-9*c_54*p2.z*c_26+3*c_52*p3.y*p2.z*c_26-6*p1.y*p2.y*p3.y*p2.z*c_26-15*c_53*p3.y*p2.z*c_26+12*
        p1.y*c_55*p2.z*c_26-6*p2.y*c_55*p2.z*c_26+30*c_56*p2.z*c_26+2*c_51*c_27-3*c_52*p2.y*c_27-3*p1.y*c_53*c_27+c_138+5*c_52*p3.y*
        c_27-12*p1.y*p2.y*p3.y*c_27-12*c_53*p3.y*c_27+5*p1.y*c_55*c_27-30*p2.y*c_55*c_27-5*c_56*c_27+6*c_62*p3.x*c_183*c_69-6*
        p2.x*p3.x*c_69*(c_185+c_186+c_93+c_70+c_187+c_188-c_35*c_189+c_192)+c_155*(3*p2.y*c_10*c_256+p1.y*(c_7-6*p1.z*
        p2.z+c_17+c_86+c_72)+p3.y*c_209)+c_41*(c_99+12*p3.y*c_22+9*p2.y*c_23*p2.z+15*p3.y*c_23*p2.z+6*p2.y*c_0*c_1+c_74-10*p2.y*p1.z*
        c_24+c_116-45*p2.y*c_25-30*p3.y*c_25+3*p2.y*c_23*p3.z+9*p3.y*c_23*p3.z+9*p2.y*c_0*p2.z*p3.z+c_75+c_102+30*p2.y*c_24*p3.z-18*
        p3.y*c_24*p3.z+3*p2.y*c_0*c_2+6*p3.y*c_0*c_2+c_76+3*p3.y*p1.z*p2.z*c_2+18*p2.y*c_1*c_2+c_77+3*p2.y*p1.z*
        c_26+c_78+c_121+c_79+c_80+3*c_35*c_110*c_198+p1.y*(c_90+c_111+4*c_23*(c_81+c_112)-12*c_24*p3.z+c_91-6*p2.z*c_26+c_113+9*c_0*c_246-6*p1.z*
        p3.z*c_176))-c_84*(3*p3.y*c_42*c_184+p1.y*(c_7+c_85-6*p1.z*p3.z+c_86+c_6)+p2.y*c_250)-c_35*(p1.y*(c_90+c_143-4*c_23*(c_36-4*
        p3.z)-6*c_24*p3.z+c_91-12*p2.z*c_26+c_160-9*c_0*c_180-6*p1.z*p2.z*c_92)+3*p2.y*c_10*c_260+p3.y*(c_142+c_168+c_201+c_166+c_205)))+p10_2*
        (3*c_41*p3.x*c_174*c_69+c_62*(-3*p3.y*c_42*c_173-p2.y*c_242+p1.y*(-6*c_0+c_28+c_48+c_19+c_231))+p2.x*(c_99+30*
        p3.y*c_22+c_100+c_114+c_115-16*p2.y*p1.z*c_24-15*p3.y*p1.z*c_24-15*p2.y*c_25-12*p3.y*c_25+12*p2.y*c_23*p3.z+18*p3.y*
        c_23*p3.z+c_101+c_102+c_103+12*p2.y*c_24*p3.z-9*p3.y*c_24*p3.z+c_120+c_104+12*p2.y*p1.z*p2.z*c_2-3*p3.y*p1.z*p2.z*
        c_2+9*p2.y*c_1*c_2-6*p3.y*c_1*c_2+6*p2.y*p1.z*c_26+c_78+6*p2.y*p2.z*c_26+c_79+c_80+3*c_35*c_175*c_110+p1.y*(45*c_22+c_111+10*
        c_23*(p2.z+c_112)+c_144+c_145+c_146+c_113-6*c_0*(c_1+c_20+c_19)-9*p1.z*c_126))+p3.x*(-30*p2.y*c_22-5*p3.y*c_22-18*p2.y*
        c_23*p2.z-12*p3.y*c_23*p2.z+c_114+c_115-3*p2.y*p1.z*c_24+c_116+c_117-6*p2.y*c_23*p3.z+c_118+3*p2.y*p1.z*c_1*p3.z-12*
        p3.y*p1.z*c_1*p3.z+c_119-6*p3.y*c_24*p3.z+c_120+c_104+c_76-18*p3.y*p1.z*p2.z*c_2+6*p2.y*c_1*c_2+c_77+15*p2.y*p1.z*c_26+16*
        p3.y*p1.z*c_26+c_121-12*p3.y*p2.z*c_26+12*p2.y*c_27+15*p3.y*c_27+p1.y*(-45*c_22+c_159+10*c_23*(c_36+c_3)+c_122+c_182+c_228+c_123+6*
        c_0*(c_12+c_20+c_2)+9*p1.z*c_126)+c_35*(3*p2.y*c_10*c_244+p3.y*c_179+p1.y*(6*c_0+c_17-9*p2.z*p3.z+c_72-3*p1.z*
        c_129))))+p3.x*(-3*c_57*c_0-3*c_58*p3.y*c_0-3*c_54*c_55*c_0-3*c_53*c_56*c_0-3*p2.y*c_59*c_0+4*c_60*c_0+c_130+3*c_53*p3.y*
        c_22+3*p2.y*c_55*c_22-2*c_56*c_22-15*c_57*p1.z*p2.z-12*c_58*p3.y*p1.z*p2.z-9*c_54*c_55*p1.z*p2.z-6*c_53*c_56*p1.z*
        p2.z+c_131+9*c_54*c_23*p2.z+6*c_53*p3.y*c_23*p2.z+c_132-9*c_57*c_1-10*c_58*p3.y*c_1+c_212+c_133-7*p2.y*c_59*c_1-4*c_60*c_1+18*
        c_54*c_0*c_1+c_134+3*p2.y*c_55*c_0*c_1+30*c_54*p1.z*c_24+12*c_53*p3.y*p1.z*c_24+3*p2.y*c_55*p1.z*c_24-5*c_54*c_25+5*c_53*
        p3.y*c_25+5*p2.y*c_55*c_25+2*c_56*c_25-3*c_57*p1.z*p3.z-6*c_58*p3.y*p1.z*p3.z-9*c_54*c_55*p1.z*p3.z-12*c_53*c_56*p1.z*
        p3.z-15*p2.y*c_59*p1.z*p3.z+24*c_60*p1.z*p3.z+3*c_54*c_23*p3.z+6*c_53*p3.y*c_23*p3.z+9*p2.y*c_55*c_23*p3.z-8*c_56*c_23*
        p3.z+c_57*p2.z*p3.z-3*c_54*c_55*p2.z*p3.z-8*c_53*c_56*p2.z*p3.z-15*p2.y*c_59*p2.z*p3.z-24*c_60*p2.z*p3.z+9*c_54*c_0*
        p2.z*p3.z+12*c_53*p3.y*c_0*p2.z*p3.z+9*p2.y*c_55*c_0*p2.z*p3.z+18*c_54*p1.z*c_1*p3.z+18*c_53*p3.y*p1.z*c_1*p3.z+c_135-10*
        c_54*c_24*p3.z+9*p2.y*c_55*c_24*p3.z+8*c_56*c_24*p3.z+c_57*c_2+3*c_58*p3.y*c_2+6*c_54*c_55*c_2+c_217+c_136+3*c_54*c_0*
        c_2+9*c_53*p3.y*c_0*c_2+18*p2.y*c_55*c_0*c_2-20*c_56*c_0*c_2+9*c_54*p1.z*p2.z*c_2+18*c_53*p3.y*p1.z*p2.z*c_2+18*p2.y*
        c_55*p1.z*p2.z*c_2-10*c_54*c_1*c_2+c_137+6*p2.y*c_55*c_1*c_2+20*c_56*c_1*c_2+3*c_54*p1.z*c_26+12*c_53*p3.y*p1.z*c_26+30*p2.y*
        c_55*p1.z*c_26-40*c_56*p1.z*c_26-7*c_54*p2.z*c_26-16*c_53*p3.y*p2.z*c_26-10*p2.y*c_55*p2.z*c_26+40*c_56*p2.z*c_26+c_138-15*
        c_53*p3.y*c_27-45*p2.y*c_55*c_27+c_61*c_141+c_51*(c_142-30*c_23*p2.z-18*c_0*c_1-9*p1.z*c_24+c_143+10*c_23*p3.z-18*c_0*
        p2.z*p3.z-9*p1.z*c_1*p3.z+c_144+10*c_0*c_2-9*p1.z*p2.z*c_2+c_145+7*p1.z*c_26+c_146+c_229-6*p2.y*p3.y*c_42*c_147-3*c_53*
        c_42*c_148+c_55*c_150)+c_50*(-3*p2.y*c_42*c_151+c_154)+c_155*(4*p3.y*c_42*(p1.z+p2.z+6*p3.z)+p2.y*(c_7-c_1-p2.z*
        p3.z+c_156+c_158)+p1.y*(c_0+p1.z*(-3*p2.z+p3.z)-3*(c_1+c_89+c_19)))+c_35*(p1.y*(-3*c_22+c_159+c_23*(c_36-7*p3.z)+c_236+18*c_1*c_2+30*
        p2.z*c_26+c_160+c_0*(c_12+c_48+c_72)+c_166)-p2.y*(c_167+c_143-7*c_24*p3.z-10*c_1*c_2+c_237+c_160+c_168+c_238+c_240)+2*p3.y*
        (-c_22-4*c_23*p3.z-10*c_0*c_2-20*p1.z*c_26+p2.z*(c_24+4*c_1*p3.z+10*p2.z*c_2+20*c_26)))-c_52*(3*c_54*c_42*c_173+3*c_53*
        p3.y*c_42*c_174-3*p2.y*c_42*(c_243+c_257+c_93+2*p2.z*c_2+c_26+6*c_0*c_29-c_55*c_175+3*p1.z*c_176)+p3.y*(c_142+12*c_23*p2.z-c_55*
        c_179+9*c_0*c_180+2*p1.z*(c_161+c_181+c_254-8*c_26)+3*(c_25+2*c_24*p3.z+c_182+4*p2.z*c_26+c_160)))-p1.y*(6*c_54*p3.y*
        c_42*c_183+3*c_58*c_42*c_184-6*p2.y*p3.y*c_42*c_252-3*c_53*c_42*(c_193+c_194+c_181+c_70+c_26+3*c_0*c_129+2*p1.z*c_196-c_55*
        c_198)+c_55*(c_142+c_168+c_201+c_166+c_205-c_55*c_209)))+p2.x*(-4*c_57*c_0+3*c_58*p3.y*c_0+3*c_54*c_55*c_0+3*c_53*c_56*c_0+3*p2.y*
        c_59*c_0+3*c_60*c_0+2*c_54*c_22-3*c_53*p3.y*c_22-3*p2.y*c_55*c_22+c_210-24*c_57*p1.z*p2.z+15*c_58*p3.y*p1.z*p2.z+12*c_54*
        c_55*p1.z*p2.z+9*c_53*c_56*p1.z*p2.z+6*p2.y*c_59*p1.z*p2.z+3*c_60*p1.z*p2.z+8*c_54*c_23*p2.z-9*c_53*p3.y*c_23*p2.z-6*
        p2.y*c_55*c_23*p2.z-3*c_56*c_23*p2.z+c_211+c_212-6*c_53*c_56*c_1-3*p2.y*c_59*c_1-c_60*c_1+20*c_54*c_0*c_1-18*c_53*p3.y*
        c_0*c_1-9*p2.y*c_55*c_0*c_1-3*c_56*c_0*c_1+40*c_54*p1.z*c_24-30*c_53*p3.y*p1.z*c_24-12*p2.y*c_55*p1.z*c_24-3*c_56*p1.z*
        c_24+45*c_53*p3.y*c_25+15*p2.y*c_55*c_25+c_213+c_214+6*c_54*c_55*p1.z*p3.z+9*c_53*c_56*p1.z*p3.z+12*p2.y*c_59*p1.z*p3.z+15*
        c_60*p1.z*p3.z+c_215-6*p2.y*c_55*c_23*p3.z-9*c_56*c_23*p3.z+24*c_57*p2.z*p3.z+15*c_58*p3.y*p2.z*p3.z+8*c_54*c_55*p2.z*
        p3.z+3*c_53*c_56*p2.z*p3.z-c_60*p2.z*p3.z-9*c_53*p3.y*c_0*p2.z*p3.z-12*p2.y*c_55*c_0*p2.z*p3.z-9*c_56*c_0*p2.z*
        p3.z-18*c_53*p3.y*p1.z*c_1*p3.z-18*p2.y*c_55*p1.z*c_1*p3.z-9*c_56*p1.z*c_1*p3.z-40*c_54*c_24*p3.z+10*c_53*p3.y*c_24*
        p3.z+16*p2.y*c_55*c_24*p3.z+7*c_56*c_24*p3.z+4*c_57*c_2+7*c_58*p3.y*c_2+c_216+c_217+10*p2.y*c_59*c_2+9*c_60*c_2-3*c_53*p3.y*
        c_0*c_2+c_218-18*c_56*c_0*c_2+c_219-18*p2.y*c_55*p1.z*p2.z*c_2-18*c_56*p1.z*p2.z*c_2-20*c_54*c_1*c_2-6*c_53*p3.y*c_1*
        c_2+c_220+10*c_56*c_1*c_2-3*c_53*p3.y*p1.z*c_26-12*p2.y*c_55*p1.z*c_26-30*c_56*p1.z*c_26-8*c_54*p2.z*c_26-9*c_53*p3.y*p2.z*
        c_26+10*c_56*p2.z*c_26-2*c_54*c_27-5*c_53*p3.y*c_27-5*p2.y*c_55*c_27+5*c_56*c_27+c_61*c_225-c_50*(-3*p3.y*c_10*c_226+p2.y*
        c_227)+c_51*(-5*c_22-10*c_23*p2.z-10*c_0*c_1-7*p1.z*c_24+c_143+30*c_23*p3.z+18*c_0*p2.z*p3.z+9*p1.z*c_1*p3.z+c_122+18*c_0*
        c_2+9*p1.z*p2.z*c_2+c_182+9*p1.z*c_26+c_228+c_229+6*p2.y*p3.y*c_10*c_147+3*c_55*c_10*c_230-c_53*(c_16+c_44+c_48+c_19+c_231))+c_155*
        (p2.y*(c_7+c_17+c_232+c_234)-p3.y*(c_7+c_235+c_8-15*c_2+c_158))+c_35*(-(p2.y*(c_167-15*c_25-16*c_24*p3.z+c_91+c_123+6*
        c_23*c_21+3*c_0*c_191+6*p1.z*(c_186+c_93+c_70+c_187)))+p3.y*(c_167+5*c_25+c_236+c_95+c_237-45*c_27+c_168+c_238+c_240))+c_52*(3*
        c_53*p3.y*c_10*c_174-c_54*c_242-3*p3.y*c_10*(c_243+c_24+2*c_1*p3.z+c_70+4*c_26+6*c_0*c_233-c_55*c_244+3*p1.z*c_92)+p2.y*
        (c_142+12*c_23*p3.z+3*c_55*c_10*c_175-9*c_0*c_246+2*p1.z*(-8*c_24+c_162+c_171+c_255)+3*(-5*c_25+4*c_24*p3.z+c_182+2*p2.z*
        c_26+c_27)))+p1.y*(6*c_54*p3.y*c_10*c_183-c_58*c_250-6*p2.y*p3.y*c_10*c_252+c_53*(c_142+c_253+3*c_0*(2*c_1+c_20+c_2)+p1.z*(-10*
        c_24+18*c_1*p3.z+c_254+c_255)+3*(-15*c_25+10*c_24*p3.z+c_95+c_228+c_27)+3*c_55*c_10*c_198)+3*(c_59*c_10*c_256+c_35*c_4*
        (c_23+c_257+c_162+12*p2.z*c_2+c_172+c_0*(c_15+c_46)-c_35*(p1.z+c_15+c_73)+3*p1.z*(c_1+c_83+c_199))-c_55*c_10*c_260))))/double(40320);
}

double trig::c53() const{
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p11_4=p1.y*p11_3;
    double p11_5=p1.y*p11_4;
    double p12_2=p1.z*p1.z;
    double p12_3=p1.z*p12_2;
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p21_4=p2.y*p21_3;
    double p21_5=p2.y*p21_4;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p31_4=p3.y*p31_3;
    double p31_5=p3.y*p31_4;
    double p22_2=p2.z*p2.z;
    double p22_3=p2.z*p22_2;
    double p32_2=p3.z*p3.z;
    double p32_3=p3.z*p32_2;
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
    double c_0=-(5*p1.y*p2.z);
    double c_1=p11_2;
    double c_2=p12_3;
    double c_3=p21_2;
    double c_4=p21_3;
    double c_5=p31_2;
    double c_6=p31_3;
    double c_7=p12_2;
    double c_8=p22_2;
    double c_9=p22_3;
    double c_10=p11_3;
    double c_11=p32_2;
    double c_12=p32_3;
    double c_13=-p3.z;
    double c_14=p1.z+c_13;
    double c_15=3*p2.y*p1.z;
    double c_16=-(3*p1.y*p2.z);
    double c_17=5*p2.y*p1.z;
    double c_18=3*p3.y*p1.z;
    double c_19=-(3*p3.y*p2.z);
    double c_20=-(3*p1.y*p3.z);
    double c_21=3*p2.y*p3.z;
    double c_22=c_17+c_18+c_0+c_19+c_20+c_21;
    double c_23=-(5*p3.y*p1.z);
    double c_24=5*p1.y*p3.z;
    double c_25=p30_2;
    double c_26=-(3*p3.y*p1.z);
    double c_27=-(5*p3.y*p2.z);
    double c_28=5*p2.y*p3.z;
    double c_29=12*p3.y*c_2;
    double c_30=3*p1.y*p3.z;
    double c_31=c_15+c_26+c_16+c_27+c_30+c_28;
    double c_32=2*p1.z;
    double c_33=-(3*p3.z);
    double c_34=3*p3.z;
    double c_35=p2.z+c_13;
    double c_36=p20_3;
    double c_37=p20_2;
    double c_38=-p1.z;
    double c_39=p2.y*c_14;
    double c_40=-(3*c_3*p3.y*p2.z);
    double c_41=-(48*p2.y*c_7*p2.z);
    double c_42=-(12*p3.y*c_9);
    double c_43=3*c_4*p3.z;
    double c_44=9*p2.y*c_5*p3.z;
    double c_45=12*p2.y*c_8*p3.z;
    double c_46=36*p3.y*p1.z*c_11;
    double c_47=-(36*p3.y*p2.z*c_11);
    double c_48=5*p3.y*p1.z;
    double c_49=3*p3.y*p2.z;
    double c_50=-(3*p2.y*p3.z);
    double c_51=c_32+p2.z+c_33;
    double c_52=48*p1.z*p2.z*p3.z;
    double c_53=15*p2.z;
    double c_54=3*c_6*p1.z;
    double c_55=-(6*p2.y*c_5*p2.z);
    double c_56=-(3*c_6*p2.z);
    double c_57=c_38+p2.z;
    double c_58=p3.y*c_57;
    double c_59=6*c_3*p3.y*p3.z;
    double c_60=3*p2.y*c_5*p3.z;
    double c_61=-(24*p3.y*c_8*p3.z);
    double c_62=12*p3.y*p1.z*c_11;
    double c_63=24*p2.y*p2.z*c_11;
    double c_64=-(12*p3.y*p2.z*c_11);
    double c_65=12*p2.y*c_12;
    double c_66=4*p1.z;
    double c_67=-(15*c_25*p2.z);
    double c_68=-(3*p2.z);
    double c_69=16*p1.z;
    double c_70=9*p2.z;
    double c_71=p11_4;
    double c_72=p21_4;
    double c_73=p21_5;
    double c_74=p31_4;
    double c_75=p31_5;
    double c_76=p11_5;
    double c_77=-(5*p1.y*p3.z);
    double c_78=p20_4;
    double c_79=-p2.z;
    double c_80=c_38+p3.z;
    double c_81=c_79+p3.z;
    double c_82=p1.y*c_81;
    double c_83=c_58+c_39+c_82;
    double c_84=40*p2.y*c_2;
    double c_85=36*p3.y*c_7*p2.z;
    double c_86=-(36*p3.y*p1.z*c_8);
    double c_87=c_58+c_39;
    double c_88=15*c_25*c_87;
    double c_89=72*p2.y*p1.z*p2.z*p3.z;
    double c_90=9*p3.z;
    double c_91=p2.z+p3.z;
    double c_92=p1.z+c_79;
    double c_93=15*c_25*p3.z;
    double c_94=-(12*c_12);
    double c_95=9*p1.z;
    double c_96=-(2*p3.z);
    double c_97=p1.z+p2.z+c_96;
    double c_98=10*p1.z;
    double c_99=5*p1.z;
    double c_100=-2*p1.z;
    double c_101=c_100+p2.z+p3.z;
    double c_102=3*p2.z*p3.z;
    double c_103=3*p2.z;
    double c_104=6*p3.z;
    double c_105=3*c_9;
    double c_106=p30_4;
    double c_107=8*c_4*c_2;
    double c_108=-(36*c_3*p3.y*c_7*p3.z);
    double c_109=-(72*p2.y*c_5*p1.z*c_11);
    double c_110=c_66+p2.z+c_34;
    double c_111=12*c_12;
    double c_112=3*p1.z;
    double c_113=2*p2.z;
    double c_114=3*p3.y*c_80;
    double c_115=5*p2.z;
    double c_116=p1.z+c_113+c_33;
    double c_117=2*p3.z;
    double c_118=9*c_5*c_14;
    double c_119=9*p2.z*c_11;
    double c_120=6*c_7;
    double c_121=3*c_11;
    double c_122=3*c_91;
    double c_123=c_32+c_122;
    double c_124=-3*c_5;
    double c_125=3*c_7;
    double c_126=4*p1.z*p2.z;
    double c_127=3*c_8;
    double c_128=6*p2.z*p3.z;
    double c_129=6*c_11;
    double c_130=6*c_8;
    double c_131=12*p2.z*c_11;
    double c_132=3*c_12;
    double c_133=-(9*c_3*c_6*p2.z);
    double c_134=3*c_75*p2.z;
    double c_135=36*c_3*p3.y*c_7*p2.z;
    double c_136=72*c_3*p3.y*p1.z*c_8;
    double c_137=-(36*c_6*p1.z*c_8);
    double c_138=12*c_6*c_9;
    double c_139=9*c_4*c_5*p3.z;
    double c_140=-(36*p2.y*c_5*c_7*p3.z);
    double c_141=36*p2.y*c_5*c_8*p3.z;
    double c_142=-(36*c_3*p3.y*p2.z*c_11);
    double c_143=-(12*c_4*c_12);
    double c_144=p3.y*c_97;
    double c_145=-c_144;
    double c_146=-(2*p2.z);
    double c_147=p1.z+c_146+p3.z;
    double c_148=c_32+c_68+p3.z;
    double c_149=6*p2.y*p3.y*c_81;
    double c_150=4*p2.z*p3.z;
    double c_151=6*p1.z*c_91;
    double c_152=c_120+c_127+c_150+c_121+c_151;
    double c_153=-(4*p2.z);
    double c_154=p1.z+c_68+c_117;
    double c_155=6*c_2;
    double c_156=2*p2.z*p3.z;
    double c_157=-(5*p2.z);
    double c_158=9*p2.z*p3.z;
    double c_159=3*p1.z*c_91;
    double c_160=c_7+c_130+c_158+c_129+c_159;
    double c_161=c_113+c_34;
    double c_162=5*p3.z;
    double c_163=3*c_10*c_35;
    double c_164=-(4*p3.z);
    double c_165=p2.y*c_147;
    double c_166=4*p3.z;
    double c_167=-(5*p3.z);
    double c_168=8*p2.z*p3.z;
    double c_169=10*c_11;
    double c_170=-(8*c_9);
    double c_171=10*c_12;
    double c_172=6*p2.z;
    double c_173=-(8*c_6*c_2);
    double c_174=36*p2.y*c_5*c_7*p2.z;
    double c_175=8*c_6*c_9;
    double c_176=-(3*c_73*p3.z);
    double c_177=24*p2.y*c_5*c_8*p3.z;
    double c_178=36*c_4*p1.z*c_11;
    double c_179=-(24*c_3*p3.y*p2.z*c_11);
    double c_180=-(8*c_4*c_12);
    double c_181=c_66+c_103+p3.z;
    double c_182=7*p1.z;
    double c_183=c_112+c_103+c_117;
    double c_184=6*c_8*p3.z;
    double c_185=-c_11;
    double c_186=12*c_8*p3.z;
    double c_187=-(10*c_12);
    double c_188=c_103+c_117;
    double c_189=p2.z+c_166;
    double c_190=6*p1.z*p2.z;
    double c_191=4*p1.z*p3.z;
    double c_192=c_125+c_190+c_130+c_191+c_128+c_121;
    double c_193=4*c_192;
    double c_194=6*p1.z*p3.z;
    double c_195=c_125+c_126+c_127+c_194+c_128+c_129;
    double c_196=18*p1.z*p2.z*p3.z;
    double c_197=9*c_8*p3.z;
    double c_198=18*p2.z*c_11;
    double c_199=-9*c_5;
    double c_200=4*c_152;
    double c_201=c_112+c_113+c_34;
    double c_202=-3*p2.y*p1.z;
    double c_203=p2.z+c_34;
    double c_204=30*p2.z*c_11;
    double c_205=3*c_2;
    double c_206=5*c_12;
    double c_207=c_8+c_150+c_169;
    double c_208=p20_5;
    double c_209=-5*c_25;
    double c_210=3*c_5;
    double c_211=24*p1.z*p2.z;
    double c_212=12*c_11;
    double c_213=10*c_4*p1.z;
    double c_214=24*p3.y*c_7*p3.z;
    double c_215=48*p2.y*p1.z*p2.z*p3.z;
    double c_216=15*c_25*p2.z;
    double c_217=-(15*c_25*p3.z);
    double c_218=72*p1.z*p2.z*p3.z;
    double c_219=-3*p1.z;
    double c_220=15*p3.z;
    double c_221=15*c_106*p2.y*p1.z;
    double c_222=3*c_73*p1.z;
    double c_223=-(15*c_106*p3.y*p1.z);
    double c_224=-(9*c_25*c_3*p3.y*p1.z);
    double c_225=18*c_25*c_6*p1.z;
    double c_226=9*c_3*c_6*p1.z;
    double c_227=9*c_75*p1.z;
    double c_228=12*c_4*c_2;
    double c_229=-(36*c_3*p3.y*c_2);
    double c_230=-(36*c_6*c_2);
    double c_231=-(45*c_72*p3.y*p2.z);
    double c_232=-(9*c_75*p2.z);
    double c_233=-(24*p2.y*c_5*c_7*p2.z);
    double c_234=36*p2.y*c_5*p1.z*c_8;
    double c_235=9*p2.y*c_74*p3.z;
    double c_236=-(36*c_4*c_7*p3.z);
    double c_237=72*c_25*p3.y*p1.z*c_11;
    double c_238=-(72*c_6*p1.z*c_11);
    double c_239=72*c_6*p2.z*c_11;
    double c_240=-(72*p2.y*c_5*c_12);
    double c_241=-(40*c_7*p2.z);
    double c_242=-(12*c_9);
    double c_243=36*c_8*p3.z;
    double c_244=36*p2.z*c_11;
    double c_245=8*p1.z;
    double c_246=-9*p1.z;
    double c_247=c_112+c_153+p3.z;
    double c_248=10*c_2;
    double c_249=6*c_7*p2.z;
    double c_250=-(5*p2.z*c_11);
    double c_251=c_115+c_34;
    double c_252=-4*p1.z;
    double c_253=-(10*c_9);
    double c_254=6*p1.z;
    double c_255=6*p2.z*c_11;
    double c_256=-9*c_73*p1.z;
    double c_257=-(9*c_4*c_5*p1.z);
    double c_258=-(3*c_75*p1.z);
    double c_259=36*c_4*c_2;
    double c_260=36*p2.y*c_5*c_2;
    double c_261=-(12*c_6*c_2);
    double c_262=-(9*c_72*p3.y*p2.z);
    double c_263=-(27*c_3*c_6*p2.z);
    double c_264=36*c_6*c_7*p2.z;
    double c_265=72*c_4*p1.z*c_8;
    double c_266=72*c_3*p3.y*c_9;
    double c_267=36*c_6*c_9;
    double c_268=9*c_73*p3.z;
    double c_269=27*c_4*c_5*p3.z;
    double c_270=45*p2.y*c_74*p3.z;
    double c_271=24*c_3*p3.y*c_7*p3.z;
    double c_272=-(72*c_4*c_8*p3.z);
    double c_273=108*p2.y*c_5*c_8*p3.z;
    double c_274=-(36*c_3*p3.y*p1.z*c_11);
    double c_275=-(108*c_3*p3.y*p2.z*c_11);
    double c_276=-(36*c_4*c_12);
    double c_277=24*p1.z;
    double c_278=3*p2.y*c_14;
    double c_279=c_48+c_16+c_49+c_278+c_77;
    double c_280=5*c_106*c_279;
    double c_281=-5*p1.z;
    double c_282=4*p2.z;
    double c_283=c_252+c_103+p3.z;
    double c_284=c_70+c_13;
    double c_285=-(3*c_12);
    double c_286=-32*c_2;
    double c_287=-12*c_2;
    double c_288=c_103+p3.z;
    double c_289=3*p1.z*c_203;
    double c_290=c_120+c_8+c_102+c_129+c_289;
    double c_291=c_112+p2.z+c_164;
    double c_292=-(3*c_4*c_14);
    double c_293=7*p3.z;
    double c_294=12*c_9;
    double c_295=36*c_7*c_35;
    double c_296=c_219+p2.z+c_117;
    double c_297=24*p1.z*p2.z*c_203;
    double c_298=16*p3.z;
    double c_299=6*c_9;
    double c_300=-(80*c_12);
    double c_301=24*p2.z*p3.z;
    double c_302=c_112+c_79+c_96;
    double c_303=c_112+c_146+c_13;
    double c_304=30*c_2;
    double c_305=6*c_7*p3.z;
    double c_306=-(5*c_8*p3.z);
    return (-5*p20_6*(c_18+c_0+5*p3.y*p2.z+5*p2.y*c_14+c_20)-5*p10_6*(c_17+c_23+c_0+c_19+c_24+c_21)+5*c_208*p3.x*c_31+p10_4*(45*
        c_1*p2.y*p1.z+15*p1.y*c_3*p1.z+3*c_4*p1.z-45*c_1*p3.y*p1.z-15*p1.y*c_5*p1.z-3*c_6*p1.z+20*p2.y*c_2-20*p3.y*c_2-5*
        c_10*p2.z+5*c_1*p2.y*p2.z+5*p1.y*c_3*p2.z+2*c_4*p2.z-30*c_1*p3.y*p2.z-12*p1.y*p2.y*p3.y*p2.z+c_40-12*p1.y*c_5*p2.z-3*
        p2.y*c_5*p2.z+c_56-180*p1.y*c_7*p2.z-20*p2.y*c_7*p2.z-120*p3.y*c_7*p2.z-60*p1.y*p1.z*c_8-20*p2.y*p1.z*c_8-48*p3.y*
        p1.z*c_8-12*p1.y*c_9-8*p2.y*c_9+c_42+5*c_10*p3.z+30*c_1*p2.y*p3.z+12*p1.y*c_3*p3.z+c_43-5*c_1*p3.y*p3.z+12*p1.y*p2.y*
        p3.y*p3.z+3*c_3*p3.y*p3.z-5*p1.y*c_5*p3.z+c_60-2*c_6*p3.z+180*p1.y*c_7*p3.z+120*p2.y*c_7*p3.z+20*p3.y*c_7*p3.z+c_215-48*
        p3.y*p1.z*p2.z*p3.z+c_45-12*p3.y*c_8*p3.z+60*p1.y*p1.z*c_11+48*p2.y*p1.z*c_11+20*p3.y*p1.z*c_11+12*p2.y*p2.z*
        c_11+c_64+12*p1.y*c_12+c_65+8*p3.y*c_12+15*p2.x*p3.x*(-(p3.y*p1.z)-p1.y*p2.z+p3.y*p2.z+c_39+p1.y*p3.z)+5*c_25*
        (c_15+c_48+c_16+c_49+c_77+c_50)-5*c_37*c_22)-5*p10_5*(p2.x*c_22+p3.x*(c_202+c_23+3*p1.y*p2.z+c_19+c_24+c_21))+c_78*(5*c_4*p1.z+30*
        c_3*p3.y*p1.z+12*p2.y*c_5*p1.z+c_54+12*p2.y*c_2+c_29+45*c_3*p3.y*p2.z+15*p2.y*c_5*p2.z+3*c_6*p2.z+60*p2.y*c_7*
        p2.z+48*p3.y*c_7*p2.z+180*p2.y*p1.z*c_8+120*p3.y*p1.z*c_8+20*p3.y*c_9-5*c_4*p3.z+5*c_3*p3.y*p3.z+5*p2.y*c_5*p3.z+2*
        c_6*p3.z+12*p3.y*c_7*p3.z+48*p3.y*p1.z*p2.z*p3.z-180*p2.y*c_8*p3.z-20*p3.y*c_8*p3.z+c_62-60*p2.y*p2.z*c_11-20*p3.y*
        p2.z*c_11-12*p2.y*c_12-8*p3.y*c_12+5*c_25*(c_15+c_26+c_27+c_28)-c_10*c_123-p1.y*(-8*c_2+c_216-20*c_7*p2.z-20*p1.z*c_8+20*
        c_9-12*p2.y*p3.y*c_14-3*c_5*c_14+c_217+12*c_7*p3.z+c_52+120*c_8*p3.z+12*p1.z*c_11+48*p2.z*c_11+c_111+5*c_3*(p1.z+c_70+c_104))-c_1*
        (c_114+p2.y*(c_99+c_53+12*p3.z)))+c_36*p3.x*(-30*c_4*p1.z+6*c_3*p3.y*p1.z+15*p2.y*c_5*p1.z+9*c_6*p1.z-12*p2.y*
        c_2+c_29-40*c_4*p2.z+10*c_3*p3.y*p2.z+16*p2.y*c_5*p2.z+7*c_6*p2.z+c_41+c_85-120*p2.y*p1.z*c_8+72*p3.y*p1.z*c_8+160*
        p2.y*c_9+40*p3.y*c_9+c_163-10*c_4*p3.z+c_44+8*c_6*p3.z-12*p2.y*c_7*p3.z+c_214-48*p2.y*p1.z*p2.z*p3.z+72*p3.y*p1.z*p2.z*
        p3.z-40*p2.y*c_8*p3.z-12*p2.y*p1.z*c_11+c_46-64*p2.y*p2.z*c_11+c_47-28*p2.y*c_12-32*p3.y*c_12+5*c_25*c_31-3*c_1*
        (c_145+p2.y*(p1.z+c_153+c_34))+3*p1.y*(c_5*c_51+2*p2.y*p3.y*c_116-2*c_3*(c_32+c_157+c_34)+4*c_35*(c_7+c_126+10*c_8+2*p1.z*
        p3.z+c_168+c_121)))+p10_3*(-5*c_36*c_22+15*c_37*p3.x*c_83+p3.x*(-3*c_4*p1.z-3*c_3*p3.y*p1.z-3*p2.y*c_5*p1.z-7*c_6*p1.z-120*
        p2.y*c_2-40*p3.y*c_2+c_40+c_55-9*c_6*p2.z+c_41-72*p3.y*c_7*p2.z-12*p2.y*p1.z*c_8+c_86+c_42+c_43+c_59+c_44-8*c_6*p3.z+24*
        p2.y*c_7*p3.z+24*p2.y*p1.z*p2.z*p3.z-72*p3.y*p1.z*p2.z*p3.z+c_45+c_61+60*p2.y*p1.z*c_11+c_46+c_63+c_47+36*p2.y*
        c_12+32*p3.y*c_12+10*c_10*c_181-2*c_1*(15*p2.y*p1.z+c_48-6*p2.y*p2.z+c_49-9*p2.y*p3.z)+5*c_25*(c_15+c_48+c_49+c_50)+p1.y*
        (-160*c_2+c_67+120*c_7*p2.z+48*p1.z*c_8+c_294-6*p2.y*p3.y*c_51-25*c_25*p3.z+40*c_7*p3.z+c_52+c_186+64*p1.z*c_11+c_131+28*
        c_12+3*c_3*(c_252+p2.z+c_34)-c_5*(c_69+c_53+c_90)))+p2.x*(7*c_4*p1.z+3*c_3*p3.y*p1.z+3*p2.y*c_5*p1.z+c_54+c_84+120*p3.y*
        c_2+8*c_4*p2.z-9*c_3*p3.y*p2.z+c_55+c_56-24*p3.y*c_7*p2.z-36*p2.y*p1.z*c_8-60*p3.y*p1.z*c_8-32*p2.y*c_9-36*p3.y*c_9+c_88+9*
        c_4*p3.z+c_59+c_60+72*p2.y*c_7*p3.z+48*p3.y*c_7*p3.z+c_89-24*p3.y*p1.z*p2.z*p3.z+36*p2.y*c_8*p3.z+c_61+36*p2.y*
        p1.z*c_11+c_62+c_63+c_64+c_65-10*c_10*c_110+2*c_1*(c_17+15*p3.y*p1.z-9*p3.y*p2.z+c_21-6*p3.y*p3.z)+p1.y*(160*c_2+c_67+c_241-64*
        p1.z*c_8-28*c_9+3*c_5*(c_66+c_68+c_13)+c_93-120*c_7*p3.z-48*p1.z*p2.z*p3.z-12*c_8*p3.z-48*p1.z*c_11-12*p2.z*
        c_11+c_94+6*p2.y*p3.y*c_148+c_3*(c_69+c_70+c_220))))+p10_2*(45*c_71*p2.y*p1.z+30*c_10*c_3*p1.z+18*c_1*c_4*p1.z+9*p1.y*c_72*
        p1.z+c_222-45*c_71*p3.y*p1.z-30*c_10*c_5*p1.z-18*c_1*c_6*p1.z-9*p1.y*c_74*p1.z+c_258+120*c_1*p2.y*c_2+40*p1.y*c_3*
        c_2+c_107-120*c_1*p3.y*c_2-40*p1.y*c_5*c_2+c_173+27*c_76*p2.z+30*c_71*p2.y*p2.z+30*c_10*c_3*p2.z+27*c_1*c_4*p2.z+21*p1.y*c_72*
        p2.z+12*c_73*p2.z-45*c_71*p3.y*p2.z-36*c_10*p2.y*p3.y*p2.z-27*c_1*c_3*p3.y*p2.z-18*p1.y*c_4*p3.y*p2.z+c_262-36*c_10*
        c_5*p2.z-27*c_1*p2.y*c_5*p2.z-18*p1.y*c_3*c_5*p2.z-9*c_4*c_5*p2.z-27*c_1*c_6*p2.z-18*p1.y*p2.y*c_6*p2.z+c_133-18*p1.y*
        c_74*p2.z-9*p2.y*c_74*p2.z+c_232-120*c_10*c_7*p2.z+24*p1.y*c_3*c_7*p2.z+12*c_4*c_7*p2.z+360*c_1*p3.y*c_7*p2.z+144*
        p1.y*p2.y*p3.y*c_7*p2.z+c_135+144*p1.y*c_5*c_7*p2.z+c_174+c_264-40*c_10*p1.z*c_8-24*c_1*p2.y*p1.z*c_8+8*c_4*p1.z*c_8+144*
        c_1*p3.y*p1.z*c_8+144*p1.y*p2.y*p3.y*p1.z*c_8+c_136+72*p1.y*c_5*p1.z*c_8+48*p2.y*c_5*p1.z*c_8+24*c_6*p1.z*c_8-8*c_10*
        c_9-12*c_1*p2.y*c_9-8*p1.y*c_3*c_9+36*c_1*p3.y*c_9+72*p1.y*p2.y*p3.y*c_9+c_266+24*p1.y*c_5*c_9+36*p2.y*c_5*c_9+c_138-27*
        c_76*p3.z+45*c_71*p2.y*p3.z+36*c_10*c_3*p3.z+27*c_1*c_4*p3.z+18*p1.y*c_72*p3.z+c_268-30*c_71*p3.y*p3.z+36*c_10*p2.y*
        p3.y*p3.z+27*c_1*c_3*p3.y*p3.z+18*p1.y*c_4*p3.y*p3.z+9*c_72*p3.y*p3.z-30*c_10*c_5*p3.z+27*c_1*p2.y*c_5*p3.z+18*p1.y*
        c_3*c_5*p3.z+c_139-27*c_1*c_6*p3.z+18*p1.y*p2.y*c_6*p3.z+9*c_3*c_6*p3.z-21*p1.y*c_74*p3.z+c_235-12*c_75*p3.z+120*c_10*
        c_7*p3.z-360*c_1*p2.y*c_7*p3.z-144*p1.y*c_3*c_7*p3.z+c_236-144*p1.y*p2.y*p3.y*c_7*p3.z+c_108-24*p1.y*c_5*c_7*p3.z+c_140-12*
        c_6*c_7*p3.z-144*c_1*p2.y*p1.z*p2.z*p3.z-144*p1.y*c_3*p1.z*p2.z*p3.z-72*c_4*p1.z*p2.z*p3.z+144*c_1*p3.y*p1.z*
        p2.z*p3.z-24*c_3*p3.y*p1.z*p2.z*p3.z+144*p1.y*c_5*p1.z*p2.z*p3.z+24*p2.y*c_5*p1.z*p2.z*p3.z+72*c_6*p1.z*p2.z*
        p3.z-36*c_1*p2.y*c_8*p3.z-72*p1.y*c_3*c_8*p3.z+c_272+36*c_1*p3.y*c_8*p3.z+24*p1.y*p2.y*p3.y*c_8*p3.z+48*p1.y*c_5*c_8*
        p3.z+c_141+36*c_6*c_8*p3.z+40*c_10*p1.z*c_11-144*c_1*p2.y*p1.z*c_11-72*p1.y*c_3*p1.z*c_11-24*c_4*p1.z*c_11+24*c_1*p3.y*
        p1.z*c_11-144*p1.y*p2.y*p3.y*p1.z*c_11-48*c_3*p3.y*p1.z*c_11+c_109-8*c_6*p1.z*c_11-36*c_1*p2.y*p2.z*c_11-48*p1.y*c_3*
        p2.z*c_11-36*c_4*p2.z*c_11+36*c_1*p3.y*p2.z*c_11-24*p1.y*p2.y*p3.y*p2.z*c_11+c_142+72*p1.y*c_5*p2.z*c_11+c_239+8*c_10*
        c_12-36*c_1*p2.y*c_12-24*p1.y*c_3*c_12+c_143+12*c_1*p3.y*c_12-72*p1.y*p2.y*p3.y*c_12-36*c_3*p3.y*c_12+8*p1.y*c_5*
        c_12+c_240+c_280-5*c_78*c_22+3*p2.x*p3.x*(c_209+6*c_1+3*c_3+4*p2.y*p3.y+c_210+6*p1.y*(p2.y+p3.y)+24*c_7+c_211+12*c_8+24*p1.z*
        p3.z+16*p2.z*p3.z+c_212)*(p3.y*c_92+p1.y*c_35+p2.y*c_80)+15*c_36*p3.x*c_83+c_37*(c_213+9*c_3*p3.y*p1.z+6*p2.y*c_5*
        p1.z+c_54+c_84+72*p3.y*c_2+20*c_4*p2.z-18*c_3*p3.y*p2.z-9*p2.y*c_5*p2.z+c_56+36*p2.y*c_7*p2.z+c_85-24*p2.y*p1.z*c_8+c_86-80*
        p2.y*c_9-72*p3.y*c_9+c_88+18*c_4*p3.z+9*c_3*p3.y*p3.z+c_60+36*p2.y*c_7*p3.z+36*p3.y*c_7*p3.z+c_89+72*p2.y*c_8*
        p3.z-36*p3.y*c_8*p3.z+24*p2.y*p1.z*c_11+c_62+36*p2.y*p2.z*c_11+c_64+c_65-2*c_10*(c_98+c_115+c_90)-3*c_1*(2*p2.y*p1.z+3*p2.y*
        c_91+3*p3.y*c_101)+p1.y*(80*c_2+18*p2.y*p3.y*c_92+c_67+24*c_7*p2.z-36*p1.z*c_8-40*c_9+c_5*(c_95-6*p2.z+c_33)+c_93-72*
        c_7*p3.z-72*p1.z*p2.z*p3.z-36*c_8*p3.z-36*p1.z*c_11-24*p2.z*c_11+c_94+c_3*(c_95+c_172+c_90)))+c_25*(-3*c_3*p3.y*c_51-9*
        p2.y*c_5*c_97+c_292+2*c_10*(c_98+c_70+c_162)-2*c_6*(c_99+c_70+10*p3.z)+c_1*(6*p3.y*p1.z+9*p3.y*c_91+9*p2.y*c_101)-12*p2.y*
        c_14*c_290-4*p3.y*(c_248+c_105+c_197+c_198-20*c_12+9*c_7*c_91+6*p1.z*(c_8+c_102+c_185))+p1.y*(-18*p2.y*p3.y*c_14-3*c_5*
        c_183+c_3*(c_246+c_103+c_104)+4*(-20*c_2+c_105+6*c_7*(c_103+c_13)+c_184+c_119+c_171+9*p1.z*(c_91*c_91)))))+c_37*(c_221-18*c_25*c_4*
        p1.z-27*c_73*p1.z+c_223+c_224+45*c_72*p3.y*p1.z+9*c_25*p2.y*c_5*p1.z+36*c_4*c_5*p1.z+c_225+27*c_3*c_6*p1.z+18*p2.y*c_74*
        p1.z+c_227-12*c_25*p2.y*c_2+c_107+12*c_25*p3.y*c_2+c_229-24*p2.y*c_5*c_2+c_261-20*c_25*c_4*p2.z-25*c_106*p3.y*p2.z-6*c_25*
        c_3*p3.y*p2.z+45*c_72*p3.y*p2.z+9*c_25*p2.y*c_5*p2.z+30*c_4*c_5*p2.z+10*c_25*c_6*p2.z+18*c_3*c_6*p2.z+9*p2.y*c_74*
        p2.z+c_134-36*c_25*p2.y*c_7*p2.z+40*c_4*c_7*p2.z+24*c_25*p3.y*c_7*p2.z-144*c_3*p3.y*c_7*p2.z-72*p2.y*c_5*c_7*p2.z-24*
        c_6*c_7*p2.z-72*c_25*p2.y*p1.z*c_8+120*c_4*p1.z*c_8+36*c_25*p3.y*p1.z*c_8-360*c_3*p3.y*p1.z*c_8-144*p2.y*c_5*p1.z*
        c_8+c_137+80*c_25*p2.y*c_9+40*c_25*p3.y*c_9+120*c_3*p3.y*c_9+40*p2.y*c_5*c_9+c_175+25*c_106*p2.y*p3.z-10*c_25*c_4*p3.z+27*c_73*
        p3.z-9*c_25*c_3*p3.y*p3.z+30*c_72*p3.y*p3.z+6*c_25*p2.y*c_5*p3.z+30*c_4*c_5*p3.z+20*c_25*c_6*p3.z+27*c_3*c_6*p3.z+21*
        p2.y*c_74*p3.z+12*c_75*p3.z-24*c_25*p2.y*c_7*p3.z+36*c_25*p3.y*c_7*p3.z+c_108-48*p2.y*c_5*c_7*p3.z-36*c_6*c_7*p3.z-72*
        c_25*p2.y*p1.z*p2.z*p3.z+72*c_25*p3.y*p1.z*p2.z*p3.z-144*c_3*p3.y*p1.z*p2.z*p3.z-144*p2.y*c_5*p1.z*p2.z*p3.z-72*
        c_6*p1.z*p2.z*p3.z+24*c_25*p2.y*c_8*p3.z-120*c_4*c_8*p3.z+36*c_25*p3.y*c_8*p3.z+c_177+12*c_6*c_8*p3.z-36*c_25*p2.y*
        p1.z*c_11+c_237+c_274+c_109+c_238-36*c_25*p2.y*p2.z*c_11-40*c_4*p2.z*c_11-24*c_25*p3.y*p2.z*c_11+c_179+8*c_6*p2.z*c_11-40*
        c_25*p2.y*c_12+c_180-80*c_25*p3.y*c_12-12*c_3*p3.y*c_12-8*p2.y*c_5*c_12-3*c_76*c_110+c_10*(3*c_25*p2.z-8*c_7*p2.z-12*p1.z*
        c_8+c_170+18*p2.y*p3.y*c_14+c_118-3*c_25*p3.z+72*c_7*p3.z+c_218+c_243+36*p1.z*c_11+24*p2.z*c_11+c_111-9*c_3*c_201)-3*c_71*
        (c_114+p2.y*(c_182+c_103+c_104))+c_1*(27*c_3*p3.y*c_14-6*c_4*(c_99+c_115+c_104)+c_25*(3*p3.y*c_116-3*p2.y*c_154)+2*p2.y*
        (c_118+4*(c_2-3*p1.z*c_8-5*c_9+9*c_7*p3.z+c_196+18*c_8*p3.z+6*p1.z*c_11+c_119+c_132))-3*p3.y*c_14*(c_124+c_200))-3*p1.y*(-12*
        c_4*p3.y*c_14+5*c_106*c_35+5*c_72*c_123+2*p2.y*p3.y*c_14*(c_124+c_193)+c_5*c_14*(c_124+4*c_195)+c_25*(-3*c_5*c_97+3*c_3*
        c_147+c_149-4*c_35*c_160)-c_3*(c_118+4*(c_2+c_253+30*c_8*p3.z+c_131+c_132+3*p1.z*p3.z*(c_282+p3.z)+c_7*c_161))))+p2.x*p3.x*
        (-45*c_73*p1.z-27*c_72*p3.y*p1.z+c_257+c_226+27*p2.y*c_74*p1.z+45*c_75*p1.z+c_259+12*c_3*p3.y*c_2-12*p2.y*c_5*c_2+c_230-72*
        c_73*p2.z+c_231-24*c_4*c_5*p2.z+c_133+c_134+144*c_4*c_7*p2.z+c_135+c_233-36*c_6*c_7*p2.z+360*c_4*p1.z*c_8+c_136-36*p2.y*
        c_5*p1.z*c_8+c_137+40*c_3*p3.y*c_9+32*p2.y*c_5*c_9+c_138+9*c_76*c_35+c_176+c_139+24*c_3*c_6*p3.z+c_270+72*c_75*p3.z+36*c_4*
        c_7*p3.z+c_271+c_140-144*c_6*c_7*p3.z+144*c_4*p1.z*p2.z*p3.z+72*c_3*p3.y*p1.z*p2.z*p3.z-72*p2.y*c_5*p1.z*p2.z*
        p3.z-144*c_6*p1.z*p2.z*p3.z-40*c_4*c_8*p3.z+c_141+32*c_6*c_8*p3.z+c_178+36*c_3*p3.y*p1.z*c_11+c_109-360*c_6*p1.z*c_11-32*c_4*
        p2.z*c_11+c_142+40*c_6*p2.z*c_11+c_143-32*c_3*p3.y*c_12-40*p2.y*c_5*c_12+5*c_106*c_31-9*c_71*(c_145+c_165)-3*c_10*(-3*c_5*
        c_51+3*c_3*c_148+c_149+4*c_35*c_152)-3*c_1*(-3*c_6*c_291-3*p2.y*c_5*c_116+3*c_4*c_247+3*c_3*p3.y*c_154+4*p3.y*(c_155+c_249+c_105+2*
        c_8*p3.z-3*p2.z*c_11+c_94+p1.z*(5*c_8+c_156-9*c_11))-4*p2.y*(c_155+c_242+c_305-3*c_8*p3.z+2*p2.z*c_11+c_132+p1.z*
        (-9*c_8+c_156+5*c_11)))-3*p1.y*(-3*c_74*(c_66+p2.z+c_167)-6*p2.y*c_6*c_97+3*c_72*(c_66+c_157+p3.z)+6*c_4*p3.y*c_147+8*p2.y*
        p3.y*c_35*c_160+4*c_5*(c_155+2*p1.z*p2.z*c_161+c_7*(c_115+c_90)+3*(c_9+c_8*p3.z-2*p2.z*c_11+c_187))-c_3*(24*c_2+9*c_5*c_35+8*
        p1.z*p3.z*c_188+4*c_7*(c_70+c_162)+12*(-10*c_9-2*c_8*p3.z+p2.z*c_11+c_12)))+c_25*(c_163-c_4*(c_95+8*p2.z+c_293)-c_3*p3.y*
        (15*p1.z+c_70+c_298)-3*c_1*(-(p3.y*(p1.z+c_103+c_164))+c_165)+2*p3.y*(c_155+14*c_9+32*c_8*p3.z+20*p2.z*c_11+c_300+6*c_7*
        c_189+5*c_5*(c_112+p2.z+c_166)+6*p1.z*c_207)-3*p1.y*(-2*c_5*(c_32+c_103+c_167)+c_3*c_148+2*p2.y*p3.y*c_154-4*c_35*
        (c_7+c_127+c_168+c_169+2*p1.z*(p2.z+c_117)))-2*p2.y*(c_5*(c_112+c_162)+2*(c_205+c_170-9*c_8*p3.z+c_171+c_7*(c_172+c_90)+9*p1.z*
        (c_8+c_156+2*c_11)))))+c_25*(c_256-18*c_72*p3.y*p1.z-27*c_4*c_5*p1.z-36*c_3*c_6*p1.z-45*p2.y*c_74*p1.z+27*c_75*p1.z+c_228+24*
        c_3*p3.y*c_2+c_260+c_173-12*c_73*p2.z-21*c_72*p3.y*p2.z-27*c_4*c_5*p2.z-30*c_3*c_6*p2.z-30*p2.y*c_74*p2.z-27*c_75*p2.z+36*
        c_4*c_7*p2.z+48*c_3*p3.y*c_7*p2.z+c_174+c_265+c_136+c_234+8*c_3*p3.y*c_9+12*p2.y*c_5*c_9+c_175+c_176-9*c_72*p3.y*p3.z-18*
        c_4*c_5*p3.z-30*c_3*c_6*p3.z-45*p2.y*c_74*p3.z+24*c_4*c_7*p3.z+72*c_3*p3.y*c_7*p3.z+144*p2.y*c_5*c_7*p3.z-40*c_6*
        c_7*p3.z+72*c_4*p1.z*p2.z*p3.z+144*c_3*p3.y*p1.z*p2.z*p3.z+144*p2.y*c_5*p1.z*p2.z*p3.z-8*c_4*c_8*p3.z+c_177+40*c_6*
        c_8*p3.z+c_178+144*c_3*p3.y*p1.z*c_11+360*p2.y*c_5*p1.z*c_11-120*c_6*p1.z*c_11-12*c_4*p2.z*c_11+c_179+120*c_6*p2.z*
        c_11+c_180-40*c_3*p3.y*c_12-120*p2.y*c_5*c_12+3*c_76*c_181+5*c_106*(c_15+c_48+c_16+c_27+c_77+c_28)+c_71*(-9*p2.y*c_92+3*p3.y*
        (c_182+c_172+c_34))+c_10*(-9*c_3*c_92-18*p2.y*p3.y*c_92+9*c_5*c_183-4*(c_105+2*c_7*c_284+c_184+c_119-2*c_12+3*p1.z*(c_127+c_128+c_185)))-3*
        p1.y*(3*c_72*c_92+6*c_4*p3.y*c_92-5*c_74*c_123+4*c_5*(c_2+c_105+c_186+c_204+c_187+c_7*c_188+3*p1.z*p2.z*c_189)-c_3*
        c_92*(c_199+c_193)-4*p2.y*p3.y*c_92*(c_124+2*c_195))-c_1*(9*c_4*c_92+18*c_3*p3.y*c_92-6*c_6*(c_99+c_172+c_162)+8*p3.y*(c_2+9*
        c_7*p2.z+6*p1.z*c_8+c_105+c_196+c_197-3*p1.z*c_11+c_198-5*c_12)-3*p2.y*c_92*(c_199+c_200))+c_25*(-(c_4*c_201)+c_1*(c_202+c_48+3*
        p2.y*p2.z+12*p3.y*p2.z+15*p3.y*p3.z)+c_10*c_123-c_3*p3.y*(12*p1.z+5*c_203)-p3.y*c_92*(5*c_5+12*(c_7+c_8+5*p2.z*
        p3.z+15*c_11+p1.z*(p2.z+c_162)))+p1.y*(-3*c_3*c_92-12*p2.y*p3.y*c_92+5*c_5*(p1.z+c_172+c_90)+4*(-2*c_2+c_105+c_7*
        (c_103+c_167)+c_186+c_204+c_206+p1.z*(c_127+12*p2.z*p3.z-5*c_11)))-p2.y*(5*c_5*(c_254+p2.z+c_90)+4*(c_205-2*c_9+c_306+c_250+c_206+3*
        c_7*c_189+3*p1.z*c_207))))+p1.x*(-5*c_208*c_22+15*c_78*p3.x*c_83-3*c_37*p3.x*(c_209+3*c_1+6*p1.y*p2.y+6*c_3+4*p1.y*p3.y+6*
        p2.y*p3.y+c_210+12*c_7+c_211+24*c_8+16*p1.z*p3.z+c_301+c_212)*c_83+c_36*(c_213+18*c_3*p3.y*p1.z+9*p2.y*c_5*p1.z+c_54+28*
        p2.y*c_2+36*p3.y*c_2+40*c_4*p2.z-30*c_3*p3.y*p2.z-12*p2.y*c_5*p2.z+c_56+64*p2.y*c_7*p2.z+60*p3.y*c_7*p2.z+40*p2.y*
        p1.z*c_8+24*p3.y*p1.z*c_8-160*p2.y*c_9-120*p3.y*c_9+c_88+30*c_4*p3.z+12*c_3*p3.y*p3.z+c_60+12*p2.y*c_7*p3.z+c_214+c_215+24*
        p3.y*p1.z*p2.z*p3.z+120*p2.y*c_8*p3.z-48*p3.y*c_8*p3.z+12*p2.y*p1.z*c_11+c_62+48*p2.y*p2.z*c_11+c_64+c_65-c_10*
        (c_245+7*p2.z+c_90)-p1.y*(c_286+c_216-36*c_7*p2.z+40*c_9+c_217+36*c_7*p3.z+c_218+72*c_8*p3.z+24*p1.z*c_11+c_244+c_111+3*
        c_5*c_101+6*p2.y*p3.y*(c_219+c_113+p3.z)+2*c_3*c_251)-c_1*(3*p3.y*c_296+p2.y*(c_95+16*p2.z+c_220)))+p2.x*(c_221-9*c_25*
        c_4*p1.z+c_222+c_223+c_224+9*c_72*p3.y*p1.z+9*c_4*c_5*p1.z+c_225+c_226+9*p2.y*c_74*p1.z+c_227-36*c_25*p2.y*c_2+c_228+36*
        c_25*p3.y*c_2+c_229-36*p2.y*c_5*c_2+c_230+72*c_73*p2.z+15*c_106*p3.y*p2.z-9*c_25*c_3*p3.y*p2.z+c_231-18*c_25*p2.y*c_5*
        p2.z-36*c_4*c_5*p2.z-18*c_25*c_6*p2.z+c_263-18*p2.y*c_74*p2.z+c_232-48*c_25*p2.y*c_7*p2.z+32*c_4*c_7*p2.z+12*c_25*p3.y*c_7*
        p2.z-36*c_3*p3.y*c_7*p2.z+c_233-12*c_6*c_7*p2.z-36*c_25*p2.y*p1.z*c_8+40*c_4*p1.z*c_8-12*c_25*p3.y*p1.z*c_8+c_136+c_234+12*
        c_6*p1.z*c_8-36*c_25*p3.y*c_9+360*c_3*p3.y*c_9+144*p2.y*c_5*c_9+c_267-15*c_106*p2.y*p3.z+9*c_25*c_4*p3.z+45*c_73*
        p3.z+18*c_25*c_3*p3.y*p3.z+36*c_72*p3.y*p3.z+18*c_25*p2.y*c_5*p3.z+c_269+18*c_3*c_6*p3.z+c_235-36*c_25*p2.y*c_7*p3.z+c_236+72*
        c_25*p3.y*c_7*p3.z-48*c_3*p3.y*c_7*p3.z-60*p2.y*c_5*c_7*p3.z-72*c_6*c_7*p3.z-24*c_25*p2.y*p1.z*p2.z*p3.z-144*
        c_4*p1.z*p2.z*p3.z-72*c_3*p3.y*p1.z*p2.z*p3.z-24*p2.y*c_5*p1.z*p2.z*p3.z+36*c_25*p2.y*c_8*p3.z-360*c_4*c_8*p3.z-72*
        c_25*p3.y*c_8*p3.z+c_273+72*c_6*c_8*p3.z-36*c_4*p1.z*c_11+c_237-60*c_3*p3.y*p1.z*c_11+c_109+c_238+72*c_25*p2.y*p2.z*
        c_11-144*c_4*p2.z*c_11-72*c_25*p3.y*p2.z*c_11+c_275+c_239+72*c_25*p2.y*c_12+c_276-72*c_3*p3.y*c_12+c_240-3*c_76*(c_277+p2.z+c_220)+c_10*
        (9*c_25*p2.z+c_241-32*p1.z*c_8+c_242+9*c_5*(c_66+c_79+c_33)+18*p2.y*p3.y*(c_32+c_79+c_13)-9*c_25*p3.z+360*c_7*
        p3.z+144*p1.z*p2.z*p3.z+c_243+144*p1.z*c_11+c_244+36*c_12-3*c_3*(c_245+c_68+c_34))-9*c_71*(p2.y*(c_99+c_34)+p3.y*
        (c_281+p2.z+c_166))+c_1*(27*c_3*p3.y*c_92+9*c_6*c_302+9*p2.y*c_5*c_303+c_4*(c_246+24*p2.z+c_90)-3*c_25*(-3*p3.y*c_97+p2.y*c_247)+4*
        p2.y*(c_248+c_170+18*c_7*p3.z+c_197+c_255+c_132-9*p1.z*(c_8-2*p2.z*p3.z+c_185))-12*p3.y*(c_304+c_249-3*c_9-4*c_8*p3.z+c_250-6*
        c_12-3*p1.z*(c_8+c_156+c_121)))+p1.y*(-15*c_106*c_35+18*c_4*p3.y*c_147+9*c_72*c_251-6*p2.y*p3.y*c_92*(c_124+4*(c_120+9*
        p1.z*p2.z+c_130+3*p1.z*p3.z+c_102+c_11))+3*c_25*(2*p2.y*p3.y*c_57+6*c_5*c_14+c_3*c_283+4*c_35*c_195)+c_3*(9*c_5*c_148+4*
        (8*c_2+c_253+9*c_7*c_35-18*c_8*p3.z-9*p2.z*c_11+c_285-6*p1.z*p3.z*c_288))+3*c_5*(c_5*(c_254-3*c_91)+4*(c_287+c_105+5*c_8*
        p3.z+c_255+6*c_12+2*p1.z*p2.z*c_91-3*c_7*c_203))))+p3.x*(c_256-9*c_72*p3.y*p1.z+c_257-9*c_3*c_6*p1.z-9*p2.y*c_74*
        p1.z+c_258+c_259+36*c_3*p3.y*c_2+c_260+c_261+c_262-18*c_4*c_5*p2.z+c_263-36*p2.y*c_74*p2.z-45*c_75*p2.z+72*c_4*c_7*p2.z+60*c_3*
        p3.y*c_7*p2.z+48*p2.y*c_5*c_7*p2.z+c_264+c_265+c_136+60*p2.y*c_5*p1.z*c_8+36*c_6*p1.z*c_8+c_266+72*p2.y*c_5*c_9+c_267+c_268+18*
        c_72*p3.y*p3.z+c_269+36*c_3*c_6*p3.z+c_270-72*c_75*p3.z+12*c_4*c_7*p3.z+c_271+36*p2.y*c_5*c_7*p3.z-32*c_6*c_7*p3.z+24*
        c_3*p3.y*p1.z*p2.z*p3.z+72*p2.y*c_5*p1.z*p2.z*p3.z+144*c_6*p1.z*p2.z*p3.z+c_272+c_273+144*c_6*c_8*p3.z-12*c_4*
        p1.z*c_11+c_274+c_109-40*c_6*p1.z*c_11-72*c_4*p2.z*c_11+c_275+360*c_6*p2.z*c_11+c_276-144*c_3*p3.y*c_12-360*p2.y*c_5*c_12+3*
        c_76*(c_277+c_53+p3.z)+c_280+9*c_71*(p3.y*(c_99+c_103)+p2.y*(c_281+c_282+p3.z))+c_10*(3*c_5*(c_245+c_103+c_33)+18*p2.y*p3.y*
        c_101+9*c_3*c_283-4*(9*c_9+10*c_7*c_284+c_197+c_119+c_285+4*p1.z*(9*c_8+c_158-2*c_11)))+p1.y*(-18*c_4*p3.y*c_14+9*c_72*
        c_101+c_5*(c_286+c_295+c_297-9*c_5*(c_103+c_162)+4*(c_105+c_197+c_198+c_171))-3*c_3*(3*c_5*c_51+4*(c_287+c_299+c_184+5*p2.z*c_11+c_132+2*
        p1.z*p3.z*c_91-3*c_7*c_288))-6*p2.y*p3.y*(3*c_5*c_97-4*c_14*c_290))+c_25*(-3*c_3*p3.y*c_291+c_292+c_10*(c_245+c_70+c_293)+p1.y*
        (c_286+6*c_5*p2.z+c_294+c_295+10*c_5*p3.z+c_243+72*p2.z*c_11+40*c_12+3*c_3*c_101+6*p2.y*p3.y*c_296+c_297)+c_1*
        (p2.y*(c_246+c_172+c_34)+p3.y*(c_95+c_53+c_298))-2*p3.y*(14*c_2+c_299+24*c_8*p3.z+60*p2.z*c_11+c_300+5*c_5*(p1.z+c_103+c_166)+c_7*
        (c_172+32*p3.z)+p1.z*(c_130+c_301+20*c_11))-6*p2.y*(c_5*(c_112+c_113+c_167)+2*c_14*(c_125+c_8+c_150+c_169+2*p1.z*
        c_189)))-c_1*(9*c_3*p3.y*c_302+9*c_4*c_303+c_6*(c_246+c_70+24*p3.z)+4*p3.y*(c_248+18*c_7*p2.z+c_105+c_184+c_119-8*c_12+9*p1.z*
        (c_8+c_156+c_185))+3*p2.y*(c_118-4*(c_304-6*c_9+c_305+c_306-4*p2.z*c_11+c_285-3*p1.z*(c_127+c_156+c_11)))))))/double(967680);
}

double trig::c54() const{
    double p12_2=p1.z*p1.z;
    double p22_2=p2.z*p2.z;
    double p32_2=p3.z*p3.z;
    double p30_2=p3.x*p3.x;
    double p30_3=p3.x*p30_2;
    double p30_4=p3.x*p30_3;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p31_4=p3.y*p31_3;
    double p31_5=p3.y*p31_4;
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p21_4=p2.y*p21_3;
    double p21_5=p2.y*p21_4;
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p11_4=p1.y*p11_3;
    double p11_5=p1.y*p11_4;
    double p20_2=p2.x*p2.x;
    double p20_3=p2.x*p20_2;
    double p20_4=p2.x*p20_3;
    double p20_5=p2.x*p20_4;
    double p10_2=p1.x*p1.x;
    double p10_3=p1.x*p10_2;
    double p10_4=p1.x*p10_3;
    double p10_5=p1.x*p10_4;
    double c_0=p12_2;
    double c_1=p22_2;
    double c_2=p32_2;
    double c_3=-p3.z;
    double c_4=p2.z+c_3;
    double c_5=3*c_0;
    double c_6=5*p2.z;
    double c_7=c_6+p3.z;
    double c_8=3*p1.z*c_7;
    double c_9=2*p2.z;
    double c_10=-(3*c_1);
    double c_11=3*c_2;
    double c_12=-(3*p2.z*p3.z);
    double c_13=-(3*c_2);
    double c_14=p1.z+c_3;
    double c_15=5*p1.z;
    double c_16=2*p3.z;
    double c_17=10*c_0;
    double c_18=3*c_1;
    double c_19=6*p2.z*p3.z;
    double c_20=3*p2.z*p3.z;
    double c_21=7*c_2;
    double c_22=p2.z+p3.z;
    double c_23=10*c_1;
    double c_24=3*p3.z;
    double c_25=9*c_2;
    double c_26=p30_2;
    double c_27=c_9+p3.z;
    double c_28=6*p1.z*c_27;
    double c_29=p31_2;
    double c_30=2*c_1;
    double c_31=9*p1.z*c_22;
    double c_32=9*c_0;
    double c_33=8*p2.z*p3.z;
    double c_34=p21_2;
    double c_35=15*c_1;
    double c_36=5*p2.z*p3.z;
    double c_37=p21_3;
    double c_38=p31_3;
    double c_39=p11_3;
    double c_40=3*p1.z;
    double c_41=3*p2.z;
    double c_42=c_40+c_41+c_16;
    double c_43=p11_2;
    double c_44=5*p1.z*p2.z;
    double c_45=-(6*c_2);
    double c_46=9*c_1;
    double c_47=2*p1.z;
    double c_48=-p2.z;
    double c_49=p1.z+c_48;
    double c_50=3*p1.z*p3.z;
    double c_51=9*p2.z*p3.z;
    double c_52=12*p1.z*p2.z;
    double c_53=p20_2;
    double c_54=4*p1.z;
    double c_55=3*p1.z*p2.z;
    double c_56=-(6*c_1);
    double c_57=9*p1.z*p3.z;
    double c_58=2*p2.z*p3.z;
    double c_59=p30_4;
    double c_60=p21_5;
    double c_61=p21_4;
    double c_62=p31_4;
    double c_63=p31_5;
    double c_64=-9*c_0;
    double c_65=c_15+p2.z+c_16;
    double c_66=12*p1.z*p3.z;
    double c_67=c_17+c_10+c_66+c_19+c_11;
    double c_68=p2.y*c_67;
    double c_69=c_47+p2.z+p3.z;
    double c_70=c_54+p2.z+c_24;
    double c_71=p2.z+c_24;
    double c_72=3*p1.z*c_71;
    double c_73=c_40+c_9+c_24;
    double c_74=4*p3.z;
    double c_75=8*p1.z*p2.z;
    double c_76=-(10*c_1);
    double c_77=-(12*c_2);
    double c_78=p1.z+c_9+p3.z;
    double c_79=5*p3.z;
    double c_80=3*c_22;
    double c_81=c_47+c_80;
    double c_82=4*c_0;
    double c_83=-(12*c_1);
    double c_84=5*p1.z*p3.z;
    double c_85=-(p1.z*p2.z);
    double c_86=6*c_2;
    double c_87=p2.z*p3.z;
    double c_88=p1.z*c_22;
    double c_89=p11_4;
    double c_90=p11_5;
    double c_91=-(15*c_61*p3.y*c_1);
    double c_92=3*c_61*p3.y*p1.z*p3.z;
    double c_93=9*c_37*c_29*c_2;
    double c_94=p20_3;
    double c_95=p3.y*c_49;
    double c_96=p1.y*c_4;
    double c_97=-p1.z;
    double c_98=c_97+p3.z;
    double c_99=p2.y*c_98;
    double c_100=c_95+c_96+c_99;
    double c_101=p1.z+p2.z+c_16;
    double c_102=c_47+p2.z+c_79;
    double c_103=-(10*c_2);
    double c_104=7*c_0;
    double c_105=-(5*c_2);
    double c_106=p20_4;
    double c_107=-(12*p2.z*p3.z);
    double c_108=-5*c_1;
    double c_109=c_108+c_36+c_2;
    double c_110=3*c_109;
    double c_111=c_104+c_8+c_110;
    double c_112=c_82+c_44+c_18+c_50+c_12+c_77;
    double c_113=8*p1.z*p3.z;
    double c_114=9*p1.z*p2.z;
    double c_115=45*p2.z*p3.z;
    double c_116=c_0+c_1+c_87+c_105+c_88;
    double c_117=-(3*p1.z*p2.z);
    double c_118=2*c_0;
    double c_119=2*c_2;
    double c_120=6*c_0;
    double c_121=-c_1;
    double c_122=9*c_38*p2.z*p3.z;
    double c_123=-(9*p2.y*c_29*c_2);
    double c_124=18*p2.z*p3.z;
    double c_125=-(4*p2.z*p3.z);
    double c_126=2*p1.z*c_22;
    double c_127=c_120+c_10+c_125+c_13+c_126;
    double c_128=-c_2;
    double c_129=4*c_2;
    double c_130=c_118+c_30+c_51+c_11+c_72;
    double c_131=4*p2.z;
    double c_132=6*p1.z*p3.z;
    double c_133=12*p2.z*p3.z;
    double c_134=c_32+c_75+c_76+c_132+c_133+c_11;
    double c_135=9*c_34*p3.y*c_1;
    double c_136=9*c_38*c_1;
    double c_137=-(9*p2.y*c_29*p1.z*p3.z);
    double c_138=-(9*c_37*p2.z*p3.z);
    double c_139=9*p2.y*c_29*p2.z*p3.z;
    double c_140=-(18*c_34*p3.y*c_2);
    double c_141=-(p2.z*p3.z);
    double c_142=15*c_0;
    double c_143=12*c_0;
    double c_144=3*p1.z*c_4;
    double c_145=-(5*p2.z*p3.z);
    double c_146=c_41+p3.z;
    double c_147=c_40+p2.z+c_74;
    double c_148=10*c_2;
    double c_149=3*p1.z*c_146;
    double c_150=-(9*p2.y*c_29*c_0);
    double c_151=-(9*c_38*c_0);
    double c_152=9*c_34*p3.y*p1.z*p2.z;
    double c_153=-(18*c_37*p1.z*p3.z);
    double c_154=-(9*c_38*p1.z*p3.z);
    double c_155=c_95+c_99;
    double c_156=-(4*c_1);
    double c_157=c_143+c_117+c_156+c_50+c_145+c_13;
    double c_158=-(3*p2.y*c_62*p1.z*p2.z);
    double c_159=-(10*c_37*c_29*c_1);
    double c_160=-(9*c_34*c_38*c_1);
    double c_161=10*c_34*c_38*c_2;
    double c_162=15*p2.y*c_62*c_2;
    double c_163=-(p1.z*p3.z);
    double c_164=c_40+c_131+p3.z;
    double c_165=6*p1.z*p2.z;
    double c_166=c_32+c_165+c_18+c_113+c_133+c_103;
    double c_167=c_54+c_41+p3.z;
    double c_168=c_17+c_114+c_18+c_50+c_51+c_45;
    double c_169=c_15+c_9+p3.z;
    double c_170=c_17+c_52+c_18+c_19+c_13;
    double c_171=15*p2.z*p3.z;
    double c_172=-3*c_0;
    double c_173=p2.z+c_79;
    double c_174=c_47+c_6+p3.z;
    double c_175=3*p1.z*c_173;
    double c_176=c_1+c_36+c_105;
    double c_177=3*c_176;
    double c_178=c_104+c_175+c_177;
    double c_179=c_118+c_18+c_51+c_119+c_149;
    double c_180=36*p2.z*p3.z;
    double c_181=15*c_2;
    double c_182=c_0+c_114+c_46+c_84+c_115+c_181;
    double c_183=c_5+c_30+c_20+c_119+c_31;
    double c_184=p2.z+c_16;
    return (p10_5*(-4*p1.y*c_4*(6*p1.z+p2.z+p3.z)+p3.y*(c_64-15*p1.z*p2.z+c_10+p1.z*p3.z+c_12+c_2)+p2.y*(c_32+c_85+c_121+15*
        p1.z*p3.z+c_20+c_11))-c_106*p3.x*(-3*p1.y*c_4*(p1.z+c_6+c_16)-p3.y*(c_5+c_23+c_13+c_28)+p2.y*(c_5-15*c_1+c_171+c_21+c_8))+p20_5*
        (4*p2.y*c_14*(p1.z+6*p2.z+p3.z)+p3.y*(c_5+c_46+c_141+c_128+c_8)+p1.y*(c_0+p1.z*(p2.z-3*p3.z)-3*(c_18+c_36+c_2)))+p10_4*
        (p2.x*(3*p3.y*c_49*c_169+c_68+p1.y*(c_142-7*c_1+c_12+c_13-15*p1.z*c_22))+p3.x*(-3*p2.y*c_14*c_65-p3.y*c_170+p1.y*
        (-15*c_0+c_18+c_20+c_21+15*p1.z*c_22)))+c_94*(c_39*c_130+c_43*(-3*p3.y*c_14*c_42+p2.y*(c_5+c_75+c_23+18*p1.z*p3.z+c_180+c_25))+p1.y*
        (-18*p2.y*p3.y*c_14*c_78+3*c_26*c_4*(p1.z+c_131+c_24)+2*c_34*(c_0+c_44+c_35+c_57+c_115+c_25)-3*c_29*c_14*c_81)+c_26*
        (p3.y*(c_5+c_23+c_20+c_45+c_31)-p2.y*(c_5+c_76+c_33+c_25+c_28))-p3.y*(c_29*c_183+p2.y*p3.y*(c_32+c_23+c_33+c_11+18*p1.z*
        c_27)+2*c_34*(c_32+c_35+c_36+c_2+9*p1.z*c_7)))+c_53*p3.x*(18*c_37*c_0+c_150+c_151+90*c_37*p1.z*p2.z-27*p2.y*c_29*p1.z*
        p2.z-18*c_38*p1.z*p2.z+30*c_37*c_1-6*p2.y*c_29*c_1-3*c_38*c_1+18*c_37*p1.z*p3.z-27*p2.y*c_29*p1.z*p3.z-36*c_38*p1.z*p3.z+10*
        c_37*p2.z*p3.z-9*p2.y*c_29*p2.z*p3.z-8*c_38*p2.z*p3.z+2*c_37*c_2-6*p2.y*c_29*c_2-10*c_38*c_2-3*c_39*c_4*c_42+3*c_43*
        (p2.y*(c_5+c_117+c_83+c_84+c_20+c_129)+p3.y*(c_172-4*p1.z*p2.z+c_10+2*p1.z*p3.z+c_58+c_86))+3*p1.y*(-(c_29*c_112)-2*p2.y*
        p3.y*(c_0+c_55+6*c_1+c_163+c_12+c_45)+6*c_34*(c_0-5*c_1+c_87+c_2+c_88))+c_26*(3*p1.y*c_4*(p1.z+c_41+c_74)-p2.y*
        (c_5+c_56+c_20+c_148+c_31)+p3.y*(c_5+c_46+c_33+c_103+6*p1.z*c_184)))+p10_3*(-30*c_43*p2.y*c_0-10*p1.y*c_34*c_0-2*c_37*c_0+30*c_43*p3.y*
        c_0+10*p1.y*c_29*c_0+2*c_38*c_0-10*c_43*p2.y*p1.z*p2.z-8*p1.y*c_34*p1.z*p2.z-3*c_37*p1.z*p2.z+90*c_43*p3.y*p1.z*p2.z+36*
        p1.y*p2.y*p3.y*p1.z*p2.z+c_152+36*p1.y*c_29*p1.z*p2.z+9*p2.y*c_29*p1.z*p2.z+9*c_38*p1.z*p2.z-2*c_43*p2.y*c_1-3*
        p1.y*c_34*c_1-2*c_37*c_1+18*c_43*p3.y*c_1+18*p1.y*p2.y*p3.y*c_1+c_135+9*p1.y*c_29*c_1+6*p2.y*c_29*c_1+3*c_38*c_1-90*c_43*
        p2.y*p1.z*p3.z-36*p1.y*c_34*p1.z*p3.z-9*c_37*p1.z*p3.z+10*c_43*p3.y*p1.z*p3.z-36*p1.y*p2.y*p3.y*p1.z*p3.z-9*c_34*
        p3.y*p1.z*p3.z+8*p1.y*c_29*p1.z*p3.z+c_137+3*c_38*p1.z*p3.z-18*c_43*p2.y*p2.z*p3.z-18*p1.y*c_34*p2.z*p3.z+c_138+18*
        c_43*p3.y*p2.z*p3.z-3*c_34*p3.y*p2.z*p3.z+18*p1.y*c_29*p2.z*p3.z+3*p2.y*c_29*p2.z*p3.z+c_122-18*c_43*p2.y*c_2-9*
        p1.y*c_34*c_2-3*c_37*c_2+2*c_43*p3.y*c_2-18*p1.y*p2.y*p3.y*c_2-6*c_34*p3.y*c_2+3*p1.y*c_29*c_2+c_123+2*c_38*c_2+6*p2.x*
        p3.x*c_69*c_100+c_26*(-3*p2.y*c_14*c_70-p3.y*c_168+p1.y*(-10*c_0+c_52+c_18+c_113+c_19+c_25))+c_53*(3*p3.y*c_49*c_167+p2.y*
        (c_17+c_55+c_56+c_57+c_51+c_11)+p1.y*(c_17-4*p1.z*(c_9+c_24)-3*(c_18+c_58+c_2))))+p2.x*(-3*c_59*p2.y*c_0+9*c_26*c_37*c_0-4*
        c_60*c_0+3*c_59*p3.y*c_0+9*c_26*c_34*p3.y*c_0+3*c_61*p3.y*c_0+3*c_37*c_29*c_0-18*c_26*c_38*c_0+3*c_34*c_38*c_0+3*p2.y*c_62*
        c_0+3*c_63*c_0-6*c_59*p2.y*p1.z*p2.z+36*c_26*c_37*p1.z*p2.z-24*c_60*p1.z*p2.z+3*c_59*p3.y*p1.z*p2.z+27*c_26*c_34*p3.y*
        p1.z*p2.z+15*c_61*p3.y*p1.z*p2.z+12*c_37*c_29*p1.z*p2.z-18*c_26*c_38*p1.z*p2.z+9*c_34*c_38*p1.z*p2.z+6*p2.y*c_62*p1.z*
        p2.z+3*c_63*p1.z*p2.z+3*c_59*p2.y*c_1+10*c_26*c_37*c_1+7*c_59*p3.y*c_1+6*c_26*c_34*p3.y*c_1+c_91+c_159-2*c_26*c_38*c_1-6*
        c_34*c_38*c_1-3*p2.y*c_62*c_1-c_63*c_1-12*c_59*p2.y*p1.z*p3.z+18*c_26*c_37*p1.z*p3.z+15*c_59*p3.y*p1.z*p3.z+27*c_26*c_34*
        p3.y*p1.z*p3.z+c_92+6*c_37*c_29*p1.z*p3.z-90*c_26*c_38*p1.z*p3.z+9*c_34*c_38*p1.z*p3.z+12*p2.y*c_62*p1.z*p3.z+15*
        c_63*p1.z*p3.z+8*c_26*c_37*p2.z*p3.z+24*c_60*p2.z*p3.z+15*c_59*p3.y*p2.z*p3.z+9*c_26*c_34*p3.y*p2.z*p3.z+15*c_61*p3.y*
        p2.z*p3.z+8*c_37*c_29*p2.z*p3.z-10*c_26*c_38*p2.z*p3.z+3*c_34*c_38*p2.z*p3.z-c_63*p2.z*p3.z-10*c_59*p2.y*c_2+3*c_26*
        c_37*c_2+4*c_60*c_2-15*c_59*p3.y*c_2+6*c_26*c_34*p3.y*c_2+7*c_61*p3.y*c_2+c_93-30*c_26*c_38*c_2+c_161+10*p2.y*c_62*c_2+9*
        c_63*c_2+c_90*(c_64+c_1+p1.z*(p2.z-15*p3.z)+c_12+c_13)-c_89*(-3*p3.y*c_14*c_65+c_68)-c_39*(-6*p2.y*p3.y*c_14*c_69-3*c_29*c_14*
        c_70+3*c_26*c_4*c_73+c_34*(c_17+c_56+c_51+c_11+c_72))+c_43*(3*c_34*p3.y*c_14*c_42+3*p2.y*c_29*c_14*c_73+3*c_38*c_14*c_147-c_37*
        c_134+3*c_26*(-(p3.y*(c_5+c_44+4*c_1-3*p1.z*p3.z+c_20+c_77))+p2.y*(c_5-2*p1.z*p2.z+c_56+4*p1.z*p3.z-2*p2.z*
        p3.z+c_11)))+p1.y*(6*c_37*p3.y*c_14*c_78+6*p2.y*c_38*c_14*c_101+3*c_62*c_14*c_102+3*c_59*c_4*(p1.z+c_9+c_79)+3*c_34*c_29*c_14*c_81-c_61*
        c_111+3*c_26*(c_34*(c_82+c_55+c_83+c_84+c_12+c_11)+2*p2.y*p3.y*(c_0+c_85+c_56+c_50+c_12+c_86)-6*c_29*c_116)))+p1.x*(-15*
        c_89*p2.y*c_0-10*c_39*c_34*c_0-6*c_43*c_37*c_0-3*p1.y*c_61*c_0-c_60*c_0+15*c_89*p3.y*c_0+10*c_39*c_29*c_0+6*c_43*c_38*c_0+3*
        p1.y*c_62*c_0+c_63*c_0+24*c_90*p1.z*p2.z+15*c_89*p2.y*p1.z*p2.z+8*c_39*c_34*p1.z*p2.z+3*c_43*c_37*p1.z*p2.z-c_60*p1.z*
        p2.z-15*c_89*p3.y*p1.z*p2.z-12*c_39*p2.y*p3.y*p1.z*p2.z-9*c_43*c_34*p3.y*p1.z*p2.z-6*p1.y*c_37*p3.y*p1.z*p2.z-3*
        c_61*p3.y*p1.z*p2.z-12*c_39*c_29*p1.z*p2.z-9*c_43*p2.y*c_29*p1.z*p2.z-6*p1.y*c_34*c_29*p1.z*p2.z-3*c_37*c_29*p1.z*
        p2.z-9*c_43*c_38*p1.z*p2.z-6*p1.y*p2.y*c_38*p1.z*p2.z-3*c_34*c_38*p1.z*p2.z-6*p1.y*c_62*p1.z*p2.z+c_158-3*c_63*p1.z*
        p2.z+4*c_90*c_1+7*c_89*p2.y*c_1+9*c_39*c_34*c_1+10*c_43*c_37*c_1+10*p1.y*c_61*c_1+9*c_60*c_1-3*c_89*p3.y*c_1-6*c_39*p2.y*p3.y*
        c_1-9*c_43*c_34*p3.y*c_1-12*p1.y*c_37*p3.y*c_1+c_91-3*c_39*c_29*c_1-6*c_43*p2.y*c_29*c_1-9*p1.y*c_34*c_29*c_1-12*c_37*c_29*
        c_1-3*c_43*c_38*c_1-6*p1.y*p2.y*c_38*c_1+c_160-3*p1.y*c_62*c_1-6*p2.y*c_62*c_1-3*c_63*c_1-24*c_90*p1.z*p3.z+15*c_89*p2.y*
        p1.z*p3.z+12*c_39*c_34*p1.z*p3.z+9*c_43*c_37*p1.z*p3.z+6*p1.y*c_61*p1.z*p3.z+3*c_60*p1.z*p3.z-15*c_89*p3.y*p1.z*
        p3.z+12*c_39*p2.y*p3.y*p1.z*p3.z+9*c_43*c_34*p3.y*p1.z*p3.z+6*p1.y*c_37*p3.y*p1.z*p3.z+c_92-8*c_39*c_29*p1.z*p3.z+9*
        c_43*p2.y*c_29*p1.z*p3.z+6*p1.y*c_34*c_29*p1.z*p3.z+3*c_37*c_29*p1.z*p3.z-3*c_43*c_38*p1.z*p3.z+6*p1.y*p2.y*c_38*
        p1.z*p3.z+3*c_34*c_38*p1.z*p3.z+3*p2.y*c_62*p1.z*p3.z+c_63*p1.z*p3.z+3*c_89*p2.y*p2.z*p3.z+6*c_39*c_34*p2.z*p3.z+9*
        c_43*c_37*p2.z*p3.z+12*p1.y*c_61*p2.z*p3.z+15*c_60*p2.z*p3.z-3*c_89*p3.y*p2.z*p3.z+3*c_43*c_34*p3.y*p2.z*p3.z+6*p1.y*
        c_37*p3.y*p2.z*p3.z+9*c_61*p3.y*p2.z*p3.z-6*c_39*c_29*p2.z*p3.z-3*c_43*p2.y*c_29*p2.z*p3.z+3*c_37*c_29*p2.z*p3.z-9*
        c_43*c_38*p2.z*p3.z-6*p1.y*p2.y*c_38*p2.z*p3.z-3*c_34*c_38*p2.z*p3.z-12*p1.y*c_62*p2.z*p3.z-9*p2.y*c_62*p2.z*
        p3.z-15*c_63*p2.z*p3.z-4*c_90*c_2+3*c_89*p2.y*c_2+3*c_39*c_34*c_2+3*c_43*c_37*c_2+3*p1.y*c_61*c_2+3*c_60*c_2-7*c_89*p3.y*c_2+6*
        c_39*p2.y*p3.y*c_2+6*c_43*c_34*p3.y*c_2+6*p1.y*c_37*p3.y*c_2+6*c_61*p3.y*c_2-9*c_39*c_29*c_2+9*c_43*p2.y*c_29*c_2+9*p1.y*
        c_34*c_29*c_2+c_93-10*c_43*c_38*c_2+12*p1.y*p2.y*c_38*c_2+12*c_34*c_38*c_2-10*p1.y*c_62*c_2+c_162-9*c_63*c_2+6*c_94*p3.x*
        c_78*c_100+6*p2.x*p3.x*(p3.y*(c_97+p2.z)+p2.y*c_14+p1.y*(c_48+p3.z))*(3*c_34*p1.z+4*p2.y*p3.y*p1.z+3*c_29*p1.z+6*c_34*
        p2.z+6*p2.y*p3.y*p2.z+3*c_29*p2.z+3*c_34*p3.z+6*p2.y*p3.y*p3.z+6*c_29*p3.z+3*c_43*c_69-c_26*c_101+p1.y*(6*p2.y*
        p1.z+6*p3.y*p1.z+6*p2.y*p2.z+4*p3.y*p2.z+4*p2.y*p3.z+6*p3.y*p3.z))-c_59*(3*p2.y*c_14*c_102+p1.y*(c_5-6*p1.z*
        p2.z+c_10+c_107+c_103)+p3.y*c_178)+c_106*(3*p3.y*c_49*c_174+p1.y*(c_5+c_76-6*p1.z*p3.z+c_107+c_13)+p2.y*c_111)+c_26*(3*c_34*p3.y*
        c_112-c_39*(c_17+36*p1.z*p2.z+c_46+c_113+c_124+c_11)+2*c_38*c_182+3*c_37*c_14*c_81+18*p2.y*c_29*c_116+3*c_43*(p2.y*c_157-p3.y*
        (c_118+c_114+c_18+c_50+c_51+c_119))+3*p1.y*p2.y*(p2.y*c_127+2*p3.y*(c_120+c_121+c_12+c_45+p1.z*c_71)))+c_53*(-2*c_37*c_0-18*
        c_34*p3.y*c_0-12*p2.y*c_29*c_0-6*c_38*c_0-10*c_37*p1.z*p2.z-18*c_34*p3.y*p1.z*p2.z-9*p2.y*c_29*p1.z*p2.z-3*c_38*
        p1.z*p2.z-30*c_37*c_1+90*c_34*p3.y*c_1+36*p2.y*c_29*c_1+c_136+c_153-18*c_34*p3.y*p1.z*p3.z-15*p2.y*c_29*p1.z*p3.z+c_154-90*
        c_37*p2.z*p3.z-18*c_34*p3.y*p2.z*p3.z+c_139+c_122-18*c_37*c_2+c_140+c_123+c_39*(c_17+c_75+c_18+36*p1.z*p3.z+c_124+c_25)+3*
        c_26*c_155*c_81-3*p1.y*(-(c_26*c_4*c_81)+c_29*c_127+2*p2.y*p3.y*(c_120+c_56+c_12+c_128+p1.z*c_146))+3*c_43*(p3.y*(-12*
        c_0+c_117+c_18+c_50+c_36+c_129)+p2.y*c_130)))+p10_2*(3*c_53*p3.x*c_42*c_100+c_94*(3*p3.y*c_49*c_164+p2.y*c_134+p1.y*(c_120+c_76-9*
        p2.z*p3.z+c_13-3*p1.z*c_71))+p3.x*(9*c_37*c_0+9*c_34*p3.y*c_0+9*p2.y*c_29*c_0+3*c_38*c_0+9*c_37*p1.z*p2.z+12*c_34*
        p3.y*p1.z*p2.z+15*p2.y*c_29*p1.z*p2.z+18*c_38*p1.z*p2.z+c_135+12*p2.y*c_29*c_1+c_136-3*c_37*p1.z*p3.z-6*c_34*p3.y*
        p1.z*p3.z+c_137+8*c_38*p1.z*p3.z+c_138-6*c_34*p3.y*p2.z*p3.z+c_139+36*c_38*p2.z*p3.z-6*c_37*c_2+c_140-36*p2.y*c_29*c_2+10*
        c_38*c_2+18*c_43*p2.y*(5*c_0+c_121+c_141+c_128-p1.z*c_22)-2*c_39*(c_142+c_46+c_51+c_2+5*p1.z*(9*p2.z+p3.z))+3*p1.y*(2*
        p2.y*p3.y*(c_120+c_1+c_144+c_141+c_45)+c_34*(c_143+c_10+c_144+c_145-4*c_2)+c_29*c_179)+c_26*(-3*p2.y*c_14*c_147-p3.y*c_166+p1.y*
        (-6*c_0+c_18+c_51+c_148+c_149)))+p2.x*(-3*c_37*c_0-9*c_34*p3.y*c_0+c_150+c_151-8*c_37*p1.z*p2.z+c_152+6*p2.y*c_29*p1.z*
        p2.z+3*c_38*p1.z*p2.z-10*c_37*c_1+36*c_34*p3.y*c_1+18*p2.y*c_29*c_1+6*c_38*c_1+c_153-15*c_34*p3.y*p1.z*p3.z-12*p2.y*c_29*
        p1.z*p3.z+c_154-36*c_37*p2.z*p3.z-9*c_34*p3.y*p2.z*p3.z+6*p2.y*c_29*p2.z*p3.z+c_122-9*c_37*c_2-12*c_34*p3.y*c_2+c_123+3*
        c_26*c_73*c_155+18*c_43*p3.y*(-5*c_0+c_1+c_87+c_2+c_88)+2*c_39*(c_142+c_1+c_51+c_25+5*p1.z*(p2.z+9*p3.z))-3*p1.y*(-(c_26*
        c_4*c_73)+c_29*c_157+2*p2.y*p3.y*(c_120+c_117+c_56+c_50+c_141+c_2)+c_34*c_130)))+p3.x*(-3*c_60*c_0-3*c_61*p3.y*c_0-3*c_37*
        c_29*c_0-3*c_34*c_38*c_0-3*p2.y*c_62*c_0+4*c_63*c_0-15*c_60*p1.z*p2.z-12*c_61*p3.y*p1.z*p2.z-9*c_37*c_29*p1.z*p2.z-6*c_34*
        c_38*p1.z*p2.z+c_158-9*c_60*c_1-10*c_61*p3.y*c_1+c_159+c_160-7*p2.y*c_62*c_1-4*c_63*c_1-3*c_60*p1.z*p3.z-6*c_61*p3.y*
        p1.z*p3.z-9*c_37*c_29*p1.z*p3.z-12*c_34*c_38*p1.z*p3.z-15*p2.y*c_62*p1.z*p3.z+24*c_63*p1.z*p3.z+c_60*p2.z*p3.z-3*c_37*
        c_29*p2.z*p3.z-8*c_34*c_38*p2.z*p3.z-15*p2.y*c_62*p2.z*p3.z-24*c_63*p2.z*p3.z+c_60*c_2+3*c_61*p3.y*c_2+6*c_37*c_29*
        c_2+c_161+c_162+c_90*(c_32+15*p1.z*p2.z+c_18+c_163+c_20+c_128)+c_43*(-3*c_37*c_49*c_164-3*c_34*p3.y*c_49*c_42-3*p2.y*c_29*c_49*
        c_73+c_38*c_166)+c_39*(-6*p2.y*p3.y*c_49*c_69-3*c_34*c_49*c_167+c_29*c_168)+c_89*(-3*p2.y*c_49*c_169+p3.y*c_170)+c_59*(-4*
        p3.y*c_49*(p1.z+p2.z+6*p3.z)+p1.y*(-c_0+c_55+c_18+c_163+c_171+c_25)+p2.y*(c_172+c_1+c_87-9*c_2-3*p1.z*c_173))+p1.y*(-6*
        c_37*p3.y*c_49*c_78-3*c_61*c_49*c_174-6*p2.y*c_38*c_49*c_101-3*c_34*c_29*c_49*c_81+c_62*c_178)+c_26*(-(c_39*c_179)+c_43*(3*p2.y*
        c_49*c_73-p3.y*(c_5+18*p1.z*p2.z+c_46+c_113+c_180+c_148))+p1.y*(18*p2.y*p3.y*c_49*c_101-2*c_29*c_182+3*c_34*c_49*c_81)+p2.y*
        (c_34*c_183+p2.y*p3.y*(c_32+c_18+c_33+c_148+18*p1.z*c_184)+2*c_29*(c_32+c_1+c_36+c_181+9*p1.z*c_173)))))/double(967680);
}

double trig::c55() const{
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
    double c_0=3*p3.y*p1.z;
    double c_1=5*p3.y*p2.z;
    double c_2=-(3*p1.y*p3.z);
    double c_3=-(5*p1.y*p2.z);
    double c_4=5*p2.y*p1.z;
    double c_5=-(3*p3.y*p2.z);
    double c_6=3*p2.y*p3.z;
    double c_7=-3*p2.y*p1.z;
    double c_8=-(5*p3.y*p1.z);
    double c_9=3*p1.y*p2.z;
    double c_10=5*p1.y*p3.z;
    double c_11=p11_2;
    double c_12=p21_2;
    double c_13=p21_3;
    double c_14=p31_2;
    double c_15=p31_3;
    double c_16=p11_3;
    double c_17=c_4+c_0+c_3+c_5+c_2+c_6;
    double c_18=c_7+c_8+c_9+c_5+c_10+c_6;
    double c_19=-p3.z;
    double c_20=p30_2;
    double c_21=-(3*p3.z);
    double c_22=2*p1.z;
    double c_23=3*p3.z;
    double c_24=-(5*p2.y*p3.z);
    double c_25=p1.z+c_19;
    double c_26=p2.z+c_19;
    double c_27=-p1.z;
    double c_28=c_27+p3.z;
    double c_29=p21_5;
    double c_30=p21_4;
    double c_31=p31_5;
    double c_32=p31_4;
    double c_33=c_7+c_0+c_9+c_1+c_2+c_24;
    double c_34=c_22+p2.z+c_21;
    double c_35=-(2*p3.z);
    double c_36=p1.z+p2.z+c_35;
    double c_37=p3.y*c_36;
    double c_38=-c_37;
    double c_39=4*p1.z;
    double c_40=-(5*p2.z);
    double c_41=-(2*p2.z);
    double c_42=p1.z+c_41+p3.z;
    double c_43=2*p2.z;
    double c_44=p1.z+c_43+c_21;
    double c_45=3*p1.z;
    double c_46=-(4*p2.z);
    double c_47=-(3*p2.z);
    double c_48=9*p2.z;
    double c_49=-(4*p3.z);
    double c_50=p2.y*c_42;
    double c_51=3*p2.z;
    double c_52=-(5*p3.z);
    double c_53=c_22+c_47+p3.z;
    double c_54=2*p3.z;
    double c_55=p1.z+c_47+c_54;
    double c_56=p20_2;
    double c_57=c_31*p2.z;
    double c_58=p11_5;
    double c_59=p30_4;
    double c_60=c_7+c_0+c_1+c_24;
    double c_61=p11_4;
    double c_62=3*p3.y*c_28;
    double c_63=6*p3.z;
    double c_64=-p2.z;
    double c_65=c_64+p3.z;
    double c_66=p2.z+p3.z;
    double c_67=3*c_66;
    double c_68=c_22+c_67;
    double c_69=5*p1.z;
    double c_70=c_45+c_43+c_23;
    double c_71=9*p1.z;
    double c_72=-(3*c_12*c_15*p2.z);
    double c_73=3*c_13*c_14*p3.z;
    double c_74=p20_4;
    double c_75=p20_3;
    double c_76=p2.y*c_28;
    double c_77=p1.z+c_64;
    double c_78=p3.y*c_77;
    double c_79=p1.y*c_26;
    double c_80=c_78+c_79+c_76;
    double c_81=5*p3.z;
    double c_82=c_45+c_51+c_54;
    double c_83=-(3*c_15*p1.z);
    double c_84=3*c_15*p2.z;
    double c_85=-(3*p2.y*c_14*p3.z);
    double c_86=10*p1.z;
    double c_87=5*p2.z;
    double c_88=c_12*c_70;
    double c_89=-(c_29*p3.z);
    double c_90=c_27+p2.z;
    double c_91=9*p3.z;
    double c_92=6*p2.z;
    double c_93=15*p3.z;
    double c_94=3*c_12*p3.y*p2.z;
    double c_95=-(3*c_13*p3.z);
    double c_96=8*c_15*p3.z;
    double c_97=c_39+c_51+p3.z;
    double c_98=3*p2.y*p1.z;
    double c_99=5*p3.y*p1.z;
    double c_100=3*p3.y*p2.z;
    double c_101=15*p2.z;
    double c_102=6*p2.y*c_14*p2.z;
    double c_103=-(6*c_12*p3.y*p3.z);
    double c_104=c_39+p2.z+c_23;
    double c_105=c_78+c_76;
    double c_106=3*c_20*c_105;
    double c_107=16*p1.z;
    double c_108=c_20*c_26;
    double c_109=p20_5;
    double c_110=-10*c_13*p1.z;
    double c_111=-(40*c_13*p2.z);
    double c_112=3*c_20*c_26;
    double c_113=-2*p1.z;
    double c_114=c_113+p2.z+p3.z;
    double c_115=-3*p1.z;
    double c_116=c_29*p1.z;
    double c_117=3*c_12*c_15*p1.z;
    double c_118=3*c_31*p1.z;
    double c_119=-(15*c_30*p3.y*p2.z);
    double c_120=-(3*c_31*p2.z);
    double c_121=2*p2.y*p3.y;
    double c_122=3*p2.y*c_32*p3.z;
    double c_123=8*p1.z;
    double c_124=-4*p1.z;
    double c_125=4*p3.z;
    double c_126=2*c_13*p3.y*c_42;
    double c_127=c_87+c_23;
    double c_128=c_45+c_64+c_35;
    double c_129=c_45+c_41+c_19;
    double c_130=8*p2.z;
    double c_131=c_45+c_46+p3.z;
    double c_132=-3*c_29*p1.z;
    double c_133=-(3*c_13*c_14*p1.z);
    double c_134=-(c_31*p1.z);
    double c_135=-(3*c_30*p3.y*p2.z);
    double c_136=-(9*c_12*c_15*p2.z);
    double c_137=3*c_29*p3.z;
    double c_138=9*c_13*c_14*p3.z;
    double c_139=15*p2.y*c_32*p3.z;
    double c_140=24*p1.z;
    double c_141=c_59*c_18;
    double c_142=6*p2.y*p3.y*c_114;
    double c_143=c_124+c_51+p3.z;
    double c_144=-5*p1.z;
    double c_145=c_115+p2.z+c_54;
    double c_146=c_22+c_64+c_19;
    double c_147=c_51+c_81;
    double c_148=c_45+p2.z+c_49;
    double c_149=7*p3.z;
    double c_150=-9*p1.z;
    double c_151=c_150+c_92+c_23;
    double c_152=16*p3.z;
    return (p20_6*(c_0+c_3+c_1+5*p2.y*c_25+c_2)+c_109*p3.x*c_33+p10_6*(c_4+c_8+c_3+c_5+c_10+c_6)+p10_5*(p2.x*c_17+p3.x*c_18)+p10_4*
        (-45*c_11*p2.y*p1.z-15*p1.y*c_12*p1.z-3*c_13*p1.z+45*c_11*p3.y*p1.z+15*p1.y*c_14*p1.z+3*c_15*p1.z+5*c_16*p2.z-5*
        c_11*p2.y*p2.z-5*p1.y*c_12*p2.z-2*c_13*p2.z+30*c_11*p3.y*p2.z+12*p1.y*p2.y*p3.y*p2.z+c_94+12*p1.y*c_14*p2.z+3*p2.y*
        c_14*p2.z+c_84-5*c_16*p3.z-30*c_11*p2.y*p3.z-12*p1.y*c_12*p3.z+c_95+5*c_11*p3.y*p3.z-12*p1.y*p2.y*p3.y*p3.z-3*c_12*
        p3.y*p3.z+5*p1.y*c_14*p3.z+c_85+2*c_15*p3.z+c_56*c_17+c_20*c_18+3*p2.x*p3.x*(p3.y*p1.z+p1.y*p2.z-p3.y*p2.z-p1.y*
        p3.z+c_76))-c_75*p3.x*(-30*c_13*p1.z+6*c_12*p3.y*p1.z+15*p2.y*c_14*p1.z+9*c_15*p1.z+c_111+10*c_12*p3.y*p2.z+16*p2.y*c_14*
        p2.z+7*c_15*p2.z+3*c_16*c_26-10*c_13*p3.z+9*p2.y*c_14*p3.z+c_96+c_20*(c_98-3*p3.y*p1.z-3*p1.y*p2.z-5*p3.y*p2.z+3*
        p1.y*p3.z+5*p2.y*p3.z)+3*p1.y*(c_14*c_34+2*p2.y*p3.y*c_44-2*c_12*(c_22+c_40+c_23))-3*c_11*(c_38+p2.y*(p1.z+c_46+c_23)))+c_74*
        (-5*c_13*p1.z-30*c_12*p3.y*p1.z-12*p2.y*c_14*p1.z+c_83-45*c_12*p3.y*p2.z-15*p2.y*c_14*p2.z-3*c_15*p2.z+5*c_13*
        p3.z-5*c_12*p3.y*p3.z-5*p2.y*c_14*p3.z-2*c_15*p3.z+c_20*c_60+c_16*c_68+p1.y*(-12*p2.y*p3.y*c_25+c_112+3*c_14*c_28+5*c_12*
        (p1.z+c_48+c_63))+c_11*(c_62+p2.y*(c_69+c_101+12*p3.z)))+p2.x*p3.x*(-15*c_29*p1.z-9*c_30*p3.y*p1.z+c_133+c_117+9*p2.y*
        c_32*p1.z+15*c_31*p1.z-24*c_29*p2.z+c_119-8*c_13*c_14*p2.z+c_72+c_57+3*c_58*c_26+c_89+c_73+8*c_12*c_15*p3.z+c_139+24*c_31*
        p3.z+c_59*c_33+c_16*(3*c_14*c_34+6*p2.y*p3.y*c_26-3*c_12*c_53)-3*c_61*(c_38+c_50)-3*p1.y*(-(c_32*(c_39+p2.z+c_52))-2*p2.y*
        c_15*c_36+c_30*(c_39+c_40+p3.z)+c_126+3*c_12*c_14*c_65)-3*c_11*(-(c_15*c_148)-p2.y*c_14*c_44+c_13*c_131+c_12*p3.y*c_55)+c_20*
        (-3*c_16*c_26-10*c_15*(c_45+p2.z+c_125)+2*p2.y*c_14*(c_45+c_81)+c_13*(c_71+c_130+c_149)+c_12*p3.y*(15*p1.z+c_48+c_152)+3*c_11*
        (-(p3.y*(p1.z+c_51+c_49))+c_50)+3*p1.y*(-2*c_14*(c_22+c_51+c_52)+c_12*c_53+2*p2.y*p3.y*c_55)))+c_56*(-9*c_29*p1.z+15*c_30*
        p3.y*p1.z+12*c_13*c_14*p1.z+9*c_12*c_15*p1.z+6*p2.y*c_32*p1.z+c_118+15*c_30*p3.y*p2.z+10*c_13*c_14*p2.z+6*c_12*c_15*
        p2.z+3*p2.y*c_32*p2.z+c_57+9*c_29*p3.z+10*c_30*p3.y*p3.z+10*c_13*c_14*p3.z+9*c_12*c_15*p3.z+7*p2.y*c_32*p3.z+4*c_31*
        p3.z-c_58*c_104+c_59*c_60-3*c_16*(c_108+2*p2.y*p3.y*c_28+c_14*c_28+c_88)-c_61*(c_62+p2.y*(7*p1.z+c_51+c_63))+p1.y*(12*c_13*
        p3.y*c_25+9*c_12*c_14*c_25+6*p2.y*c_15*c_25+3*c_32*c_25+3*c_59*c_26+9*c_20*(-(c_14*c_36)+c_12*c_42+2*p2.y*p3.y*c_65)-5*c_30*
        c_68)+c_11*(9*c_12*p3.y*c_25+6*p2.y*c_14*c_25+3*c_15*c_25-2*c_13*(c_69+c_87+c_63)+3*c_20*(-(p3.y*c_44)+p2.y*c_55))+c_20*(-3*
        p2.y*c_14*c_82+3*c_12*p3.y*c_70+2*c_13*(c_71+5*(c_43+p3.z))-2*c_15*(c_71+5*(p2.z+c_54))))+p10_2*(15*c_61*p2.y*p1.z+10*c_16*
        c_12*p1.z+6*c_11*c_13*p1.z+3*p1.y*c_30*p1.z+c_116-15*c_61*p3.y*p1.z-10*c_16*c_14*p1.z-6*c_11*c_15*p1.z-3*p1.y*c_32*
        p1.z+c_134+9*c_58*p2.z+10*c_61*p2.y*p2.z+10*c_16*c_12*p2.z+9*c_11*c_13*p2.z+7*p1.y*c_30*p2.z+4*c_29*p2.z-15*c_61*p3.y*
        p2.z-12*c_16*p2.y*p3.y*p2.z-9*c_11*c_12*p3.y*p2.z-6*p1.y*c_13*p3.y*p2.z+c_135-12*c_16*c_14*p2.z-9*c_11*p2.y*c_14*p2.z-6*
        p1.y*c_12*c_14*p2.z-3*c_13*c_14*p2.z-9*c_11*c_15*p2.z-6*p1.y*p2.y*c_15*p2.z+c_72-6*p1.y*c_32*p2.z-3*p2.y*c_32*p2.z+c_120-9*
        c_58*p3.z+15*c_61*p2.y*p3.z+12*c_16*c_12*p3.z+9*c_11*c_13*p3.z+6*p1.y*c_30*p3.z+c_137-10*c_61*p3.y*p3.z+12*c_16*
        p2.y*p3.y*p3.z+9*c_11*c_12*p3.y*p3.z+6*p1.y*c_13*p3.y*p3.z+3*c_30*p3.y*p3.z-10*c_16*c_14*p3.z+9*c_11*p2.y*c_14*p3.z+6*
        p1.y*c_12*c_14*p3.z+c_73-9*c_11*c_15*p3.z+6*p1.y*p2.y*c_15*p3.z+3*c_12*c_15*p3.z-7*p1.y*c_32*p3.z+c_122-4*c_31*
        p3.z+c_74*c_17+c_141+3*c_75*p3.x*c_80+3*p2.x*p3.x*(c_20-6*c_11-3*c_12-4*p2.y*p3.y-3*c_14-6*p1.y*(p2.y+p3.y))*c_80+c_20*(3*
        c_12*p3.y*c_34+9*p2.y*c_14*c_36+3*c_13*c_25-2*c_16*(c_86+c_48+c_81)+2*c_15*(c_69+c_48+10*p3.z)+3*c_11*(6*p2.y*p1.z-2*p3.y*
        p1.z-3*p2.y*c_66-3*p3.y*c_66)+3*p1.y*(c_12*c_128+6*p2.y*p3.y*c_25+c_14*c_82))+c_56*(c_110-9*c_12*p3.y*p1.z-6*p2.y*c_14*
        p1.z+c_83-20*c_13*p2.z+18*c_12*p3.y*p2.z+9*p2.y*c_14*p2.z+c_84-18*c_13*p3.z-9*c_12*p3.y*p3.z+c_85+2*c_16*(c_86+c_87+c_91)+c_106+3*
        c_11*(2*p2.y*p1.z+3*p2.y*c_66+3*p3.y*c_114)-3*p1.y*(6*p2.y*p3.y*c_77+c_14*c_129+c_20*c_65+c_88)))+c_20*(c_132-6*
        c_30*p3.y*p1.z-9*c_13*c_14*p1.z-12*c_12*c_15*p1.z-15*p2.y*c_32*p1.z+9*c_31*p1.z-4*c_29*p2.z-7*c_30*p3.y*p2.z-9*c_13*
        c_14*p2.z-10*c_12*c_15*p2.z-10*p2.y*c_32*p2.z-9*c_31*p2.z+c_89-3*c_30*p3.y*p3.z-6*c_13*c_14*p3.z-10*c_12*c_15*p3.z-15*
        p2.y*c_32*p3.z+c_58*c_97+c_59*(c_7+c_8+c_9+c_1+c_10+c_24)+c_61*(c_7+7*p3.y*p1.z+3*p2.y*p2.z+6*p3.y*p2.z+3*p3.y*p3.z)+c_16*
        (-3*c_12*c_77+6*p2.y*p3.y*c_90+3*c_14*c_82)+c_11*(-3*c_13*c_77+6*c_12*p3.y*c_90+9*p2.y*c_14*c_90+2*c_15*(c_69+c_92+c_81))+p1.y*
        (-3*c_30*c_77-12*p2.y*c_15*c_77+6*c_13*p3.y*c_90+9*c_12*c_14*c_90+5*c_32*c_68)+c_20*(5*c_15*c_77+c_13*c_70+5*p2.y*c_14*
        (6*p1.z+p2.z+c_91)+c_12*p3.y*(12*p1.z+c_87+c_93)-c_16*c_68+p1.y*(3*c_12*c_77+12*p2.y*p3.y*c_77-5*c_14*(p1.z+c_92+c_91))+c_11*
        (3*p2.y*c_77-p3.y*(c_69+12*p2.z+c_93))))+p10_3*(c_75*c_17+3*c_56*p3.x*c_80+p3.x*(3*c_13*p1.z+3*c_12*p3.y*p1.z+3*
        p2.y*c_14*p1.z+7*c_15*p1.z+c_94+c_102+9*c_15*p2.z+c_95+c_103-9*p2.y*c_14*p3.z+c_96-10*c_16*c_97+2*c_11*(15*p2.y*p1.z+c_99-6*
        p2.y*p2.z+c_100-9*p2.y*p3.z)-c_20*(c_98+c_99+c_100-3*p2.y*p3.z)+p1.y*(3*c_12*(c_39+c_64+c_21)+6*p2.y*p3.y*c_34+c_20*
        c_147+c_14*(c_107+c_101+c_91)))+p2.x*(-7*c_13*p1.z-3*c_12*p3.y*p1.z-3*p2.y*c_14*p1.z+c_83-8*c_13*p2.z+9*c_12*p3.y*
        p2.z+c_102+c_84-9*c_13*p3.z+c_103+c_85+10*c_16*c_104-2*c_11*(c_4+15*p3.y*p1.z-9*p3.y*p2.z+c_6-6*p3.y*p3.z)+c_106-p1.y*(6*
        p2.y*p3.y*c_53+c_12*(c_107+c_48+c_93)-3*(c_108+c_14*c_143))))+p1.x*(c_109*c_17+3*c_74*p3.x*c_80+3*c_56*p3.x*(c_20-3*c_11-2*
        p1.y*(3*p2.y+2*p3.y)-3*(2*c_12+c_121+c_14))*c_80+c_75*(c_110-18*c_12*p3.y*p1.z-9*p2.y*c_14*p1.z+c_83+c_111+30*c_12*p3.y*
        p2.z+12*p2.y*c_14*p2.z+c_84-30*c_13*p3.z-12*c_12*p3.y*p3.z+c_85+c_16*(c_123+7*p2.z+c_91)+c_106+p1.y*(c_112+3*c_14*c_114+6*
        p2.y*p3.y*(c_115+c_43+p3.z)+2*c_12*c_127)+c_11*(3*p3.y*c_145+p2.y*(c_71+16*p2.z+c_93)))+p2.x*(c_116+3*c_30*p3.y*p1.z+3*
        c_13*c_14*p1.z+c_117+3*p2.y*c_32*p1.z+c_118+24*c_29*p2.z+c_119-12*c_13*c_14*p2.z+c_136-6*p2.y*c_32*p2.z+c_120+9*c_20*
        (c_12+c_121+2*c_14)*(p3.y*c_90+p2.y*c_25)+15*c_29*p3.z+12*c_30*p3.y*p3.z+c_138+6*c_12*c_15*p3.z+c_122-c_58*(c_140+p2.z+c_93)+3*
        c_59*c_105-c_16*(9*c_20*c_26+c_142+c_12*(c_123+c_47+c_23)+3*c_14*(c_124+p2.z+c_23))-3*c_61*(p2.y*(c_69+c_23)+p3.y*
        (c_144+p2.z+c_125))+3*p1.y*(2*p2.y*c_15*c_77+c_32*c_146+c_59*c_26+c_12*c_14*c_53+c_126+c_30*c_127+c_20*(2*p2.y*p3.y*c_77+c_12*
        (c_39+c_47+c_19)+6*c_14*c_28))+c_11*(9*c_12*p3.y*c_77+3*c_15*c_128+3*p2.y*c_14*c_129+c_13*(c_115+c_130+c_23)+3*c_20*(-3*p3.y*
        c_36+p2.y*c_131)))+p3.x*(c_132-3*c_30*p3.y*p1.z+c_133-3*c_12*c_15*p1.z-3*p2.y*c_32*p1.z+c_134+c_135-6*c_13*c_14*p2.z+c_136-12*
        p2.y*c_32*p2.z-15*c_31*p2.z+c_137+6*c_30*p3.y*p3.z+c_138+12*c_12*c_15*p3.z+c_139-24*c_31*p3.z+c_58*(c_140+c_101+p3.z)+c_141+c_16*
        (c_14*(c_123+c_51+c_21)+c_142+3*c_12*c_143)+3*c_61*(p3.y*(c_69+c_51)+p2.y*(c_144+4*p2.z+p3.z))+c_11*(c_15*
        (c_45+c_47-8*p3.z)+9*p2.y*c_14*c_28+3*c_12*p3.y*c_145+c_13*c_151)-3*p1.y*(c_12*c_14*c_34+2*p2.y*c_15*c_36+2*c_13*p3.y*c_25+c_30*
        c_146+c_32*c_147)-c_20*(-6*p2.y*c_14*(c_45+c_43+c_52)-3*c_12*p3.y*c_148-3*c_13*c_25-10*c_15*(p1.z+c_51+c_125)+c_16*
        (c_123+c_48+c_149)+p1.y*(3*c_12*c_114+6*p2.y*p3.y*c_145+2*c_14*c_147)+c_11*(p2.y*c_151+p3.y*(c_71+c_101+c_152))))))/double(1935360);
}

double trig::s51() const{
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p11_4=p1.y*p11_3;
    double p11_5=p1.y*p11_4;
    double p11_6=p1.y*p11_5;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p31_4=p3.y*p31_3;
    double p31_5=p3.y*p31_4;
    double p31_6=p3.y*p31_5;
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p21_4=p2.y*p21_3;
    double p21_5=p2.y*p21_4;
    double p21_6=p2.y*p21_5;
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
    double p20_5=p2.x*p20_4;
    double p30_2=p3.x*p3.x;
    double p30_3=p3.x*p30_2;
    double p30_4=p3.x*p30_3;
    double p10_2=p1.x*p1.x;
    double p10_3=p1.x*p10_2;
    double p10_4=p1.x*p10_3;
    double p10_5=p1.x*p10_4;
    double c_0=3*p1.z;
    double c_1=p11_2;
    double c_2=-p3.z;
    double c_3=p2.z+c_2;
    double c_4=p31_2;
    double c_5=3*p2.z;
    double c_6=p21_2;
    double c_7=4*p1.z;
    double c_8=3*p3.z;
    double c_9=24*p1.z;
    double c_10=4*p2.z;
    double c_11=24*p2.z;
    double c_12=15*p3.z;
    double c_13=-(2*p3.z);
    double c_14=p1.z+p2.z+c_13;
    double c_15=p1.z+c_2;
    double c_16=2*p3.z;
    double c_17=c_0+c_5+c_16;
    double c_18=-p2.z;
    double c_19=7*p1.z;
    double c_20=5*p2.y*p1.z;
    double c_21=5*p3.y*p1.z;
    double c_22=p11_3;
    double c_23=p21_3;
    double c_24=p21_4;
    double c_25=p31_3;
    double c_26=p31_4;
    double c_27=p12_2;
    double c_28=p22_2;
    double c_29=p22_3;
    double c_30=p11_4;
    double c_31=p32_2;
    double c_32=p32_3;
    double c_33=-p1.z;
    double c_34=c_33+p3.z;
    double c_35=p1.z+c_18;
    double c_36=3*c_4*c_35;
    double c_37=-(3*p2.z);
    double c_38=2*p2.z;
    double c_39=c_0+c_38+c_8;
    double c_40=5*p2.z;
    double c_41=6*p3.z;
    double c_42=5*p1.z;
    double c_43=6*p2.z;
    double c_44=2*p1.z;
    double c_45=p12_3;
    double c_46=p12_5;
    double c_47=p11_5;
    double c_48=p21_5;
    double c_49=p31_5;
    double c_50=p12_4;
    double c_51=p22_4;
    double c_52=p22_5;
    double c_53=p11_6;
    double c_54=p21_6;
    double c_55=p31_6;
    double c_56=p32_4;
    double c_57=p32_5;
    double c_58=p2.y*c_34;
    double c_59=p20_4;
    double c_60=-(5*p2.z);
    double c_61=7*p2.z;
    double c_62=-(3*c_6*c_15);
    double c_63=p2.z+p3.z;
    double c_64=3*c_63;
    double c_65=c_44+c_64;
    double c_66=-2*p1.z;
    double c_67=c_66+p2.z+p3.z;
    double c_68=5*p3.z;
    double c_69=p3.y*c_35;
    double c_70=p1.y*c_3;
    double c_71=c_69+c_70+c_58;
    double c_72=p30_2;
    double c_73=p20_2;
    double c_74=15*p1.z;
    double c_75=-4*p1.z;
    double c_76=c_75+p2.z+c_8;
    double c_77=c_7+c_37+c_2;
    double c_78=c_40+c_8;
    double c_79=-(3*p3.z);
    double c_80=c_44+p2.z+c_79;
    double c_81=c_44+c_37+p3.z;
    double c_82=3*c_32;
    double c_83=c_5+p3.z;
    double c_84=9*p3.z;
    double c_85=4*p3.z;
    double c_86=16*p1.z;
    double c_87=15*p2.z;
    double c_88=3*c_28;
    double c_89=-(5*p3.z);
    double c_90=-(10*c_32);
    double c_91=9*p2.y*p3.y*c_67;
    double c_92=-9*p1.z;
    double c_93=9*p1.z;
    double c_94=9*p2.z;
    double c_95=6*p1.z;
    double c_96=-12*c_45;
    double c_97=3*c_29;
    double c_98=6*p2.z*c_31;
    double c_99=-8*c_45;
    double c_100=9*c_28*p3.z;
    double c_101=p2.z+c_8;
    double c_102=c_5+c_68;
    double c_103=-(45*c_24*p2.z);
    double c_104=9*p2.y*c_25*p2.z;
    double c_105=-(60*c_6*c_29);
    double c_106=18*c_6*c_27*p3.z;
    double c_107=72*c_6*p1.z*p2.z*p3.z;
    double c_108=18*c_6*p1.z*c_31;
    double c_109=18*p2.y*p3.y*p2.z*c_31;
    double c_110=-(2*p2.z);
    double c_111=p1.z+c_110+p3.z;
    double c_112=3*c_27;
    double c_113=6*p2.z*p3.z;
    double c_114=3*c_31;
    double c_115=-(4*p3.z);
    double c_116=p1.z+c_5+c_115;
    double c_117=3*c_1*c_3;
    double c_118=p1.z+c_37+c_16;
    double c_119=c_18+p3.z;
    double c_120=6*c_29;
    double c_121=-(9*p2.z*c_31);
    double c_122=6*c_28;
    double c_123=3*c_4*c_14;
    double c_124=3*c_45;
    double c_125=9*p2.z*c_31;
    double c_126=6*c_32;
    double c_127=p20_3;
    double c_128=-(5*c_24*p1.z);
    double c_129=9*c_72*c_4*p2.z;
    double c_130=-(36*c_4*p1.z*c_28);
    double c_131=-(18*p2.y*p3.y*p1.z*c_31);
    double c_132=3*p3.y*c_34;
    double c_133=3*c_4*c_15;
    double c_134=18*p2.z*c_31;
    double c_135=p1.z+c_10+c_8;
    double c_136=6*p1.z*p2.z;
    double c_137=4*p1.z*p3.z;
    double c_138=c_112+c_136+c_122+c_137+c_113+c_114;
    double c_139=4*p2.z*p3.z;
    double c_140=18*p2.y*c_25*c_27*p2.z;
    double c_141=-(24*p2.y*p3.y*c_50*p2.z);
    double c_142=54*c_6*c_4*p1.z*c_28;
    double c_143=-(72*c_6*c_45*c_28);
    double c_144=18*c_26*c_29;
    double c_145=54*c_6*c_4*c_28*p3.z;
    double c_146=-(48*p2.y*p3.y*p1.z*c_29*p3.z);
    double c_147=80*c_4*c_27*c_32;
    double c_148=72*c_6*c_28*c_32;
    double c_149=-(120*c_4*p2.z*c_56);
    double c_150=p30_4;
    double c_151=c_33+p2.z;
    double c_152=24*p3.z;
    double c_153=c_42+c_5;
    double c_154=5*c_45;
    double c_155=6*c_28*p3.z;
    double c_156=2*p2.z*p3.z;
    double c_157=10*c_45;
    double c_158=-c_31;
    double c_159=-5*c_4;
    double c_160=6*c_27;
    double c_161=3*p2.z*p3.z;
    double c_162=-(5*c_31);
    double c_163=c_28*p3.z;
    double c_164=-c_32;
    double c_165=6*p1.z*c_63;
    double c_166=c_160+c_88+c_139+c_114+c_165;
    double c_167=6*c_31;
    double c_168=p2.z+c_85;
    double c_169=c_0+p2.z+c_85;
    double c_170=10*c_31;
    double c_171=-3*c_45;
    double c_172=c_38+c_8;
    double c_173=2*c_31;
    double c_174=p2.z+c_16;
    double c_175=4*p1.z*p2.z;
    double c_176=6*p1.z*p3.z;
    double c_177=p1.z+c_5+c_85;
    double c_178=-9*p2.z;
    double c_179=8*p3.z;
    double c_180=c_28+c_139+c_170;
    double c_181=8*p1.z*p2.z;
    double c_182=10*c_28;
    double c_183=12*c_28*p3.z;
    double c_184=30*p2.z*c_31;
    double c_185=12*p2.z*p3.z;
    double c_186=c_28+c_156+c_158;
    double c_187=-(8*c_32);
    double c_188=c_112+c_175+c_88+c_176+c_113+c_167;
    double c_189=3*c_28*c_31;
    double c_190=c_38+p3.z;
    double c_191=3*c_28*p3.z;
    double c_192=2*p3.y;
    double c_193=-(4*p2.z);
    double c_194=c_42+c_40+c_41;
    double c_195=3*p2.y*p1.z;
    double c_196=36*p2.y*p3.y*c_45;
    double c_197=-(3*c_23*p3.y*p2.z);
    double c_198=36*p2.y*p3.y*c_27*p2.z;
    double c_199=36*c_4*c_27*p2.z;
    double c_200=18*p2.y*p3.y*c_29;
    double c_201=3*c_24*p3.z;
    double c_202=9*c_6*c_4*p3.z;
    double c_203=-(18*c_6*c_28*p3.z);
    double c_204=-(18*c_6*p1.z*c_31);
    double c_205=3*p3.y*p2.z;
    double c_206=-(3*c_63);
    double c_207=c_95+c_206;
    double c_208=c_0+p2.z+c_115;
    double c_209=c_42+c_43+c_68;
    double c_210=c_92+c_5+c_41;
    double c_211=-3*p1.z;
    double c_212=16*p3.z;
    double c_213=18*c_27*p2.z;
    double c_214=9*p1.z*c_186;
    double c_215=c_157+c_213+c_97+c_155+c_125+c_187+c_214;
    double c_216=-(6*c_27*p2.z);
    double c_217=5*p2.z*c_31;
    double c_218=9*c_72*c_4*p1.z;
    double c_219=3*c_26*p1.z;
    double c_220=-(4*c_6*c_45);
    double c_221=-(3*c_26*p2.z);
    double c_222=18*c_4*p1.z*c_28;
    double c_223=3*p2.y*c_25*p3.z;
    double c_224=-(36*c_6*c_27*p3.z);
    double c_225=-(36*p2.y*p3.y*c_27*p3.z);
    double c_226=-(36*c_4*c_27*p3.z);
    double c_227=12*c_4*p1.z*p2.z*p3.z;
    double c_228=-(18*c_4*p1.z*c_31);
    double c_229=18*c_4*p2.z*c_31;
    double c_230=-(18*p2.y*p3.y*c_32);
    double c_231=3*p2.y*p3.z;
    double c_232=-20*c_45;
    double c_233=3*c_72*p2.z;
    double c_234=-(3*c_72*p3.z);
    double c_235=24*p1.z*p2.z*p3.z;
    double c_236=-30*c_45;
    double c_237=5*c_28*p3.z;
    double c_238=c_88+c_156+c_31;
    double c_239=c_0+c_193+p3.z;
    double c_240=18*c_27*p3.z;
    double c_241=-(15*c_48*p3.y*p1.z);
    double c_242=-(15*c_24*c_4*p1.z);
    double c_243=-(15*c_23*c_25*p1.z);
    double c_244=-(15*c_6*c_26*p1.z);
    double c_245=-(15*p2.y*c_49*p1.z);
    double c_246=18*c_23*p3.y*c_45;
    double c_247=18*c_6*c_4*c_45;
    double c_248=18*p2.y*c_25*c_45;
    double c_249=-(24*p2.y*p3.y*c_46);
    double c_250=18*c_26*c_27*p2.z;
    double c_251=-(24*c_4*c_50*p2.z);
    double c_252=18*c_26*p1.z*c_28;
    double c_253=-(24*c_4*c_45*c_28);
    double c_254=-(24*c_4*c_27*c_29);
    double c_255=-(24*c_4*p1.z*c_51);
    double c_256=-(25*c_55*p3.z);
    double c_257=108*c_6*c_4*p1.z*p2.z*p3.z;
    double c_258=72*c_26*p1.z*p2.z*p3.z;
    double c_259=-(48*p2.y*p3.y*c_45*p2.z*p3.z);
    double c_260=-(48*c_4*c_45*p2.z*p3.z);
    double c_261=-(48*c_4*c_27*c_28*p3.z);
    double c_262=-(48*c_4*p1.z*c_29*p3.z);
    double c_263=-(72*c_4*c_27*p2.z*c_31);
    double c_264=-(72*p2.y*p3.y*p1.z*c_28*c_31);
    double c_265=-(72*c_4*p1.z*c_28*c_31);
    double c_266=30*c_26*c_32;
    double c_267=-(96*c_4*p1.z*p2.z*c_32);
    double c_268=24*p2.y*p3.y*c_28*c_32;
    double c_269=72*c_4*c_57;
    double c_270=c_42+c_8;
    double c_271=-(6*p3.z);
    double c_272=p2.z+c_271;
    double c_273=-10*c_28;
    double c_274=p1.z+c_38+c_79;
    double c_275=p3.y*c_274;
    double c_276=-c_275;
    double c_277=10*c_27;
    double c_278=5*c_4*c_15;
    double c_279=-(9*p1.z*c_28);
    double c_280=-(8*c_29);
    double c_281=18*p1.z*p2.z*p3.z;
    double c_282=9*p1.z*c_31;
    double c_283=c_157+c_279+c_280+c_240+c_281+c_100+c_282+c_98+c_82;
    double c_284=15*c_26*p3.z;
    double c_285=p1.z+c_193+c_8;
    double c_286=6*c_166;
    double c_287=c_159+c_286;
    double c_288=18*c_28*p3.z;
    double c_289=9*c_27*c_63;
    double c_290=p2.y*c_111;
    double c_291=6*c_138;
    double c_292=c_159+c_291;
    double c_293=24*p2.z*p3.z;
    double c_294=5*c_26;
    double c_295=5*c_50;
    double c_296=2*c_29*p3.z;
    double c_297=4*p2.z*c_32;
    double c_298=c_28+c_156+c_114;
    double c_299=3*p2.z*c_31;
    double c_300=-3*c_28;
    double c_301=4*c_29*p3.z;
    double c_302=2*p2.z*c_32;
    return (c_59*p3.x*(3*p2.y*p3.y*(c_0+c_40)+3*p1.y*p3.y*c_14+c_117-5*c_6*c_17+c_4*(c_95+c_61+c_8)-3*p1.y*p2.y*(p1.z+c_60+c_85))+p10_5*
        (-9*c_1*c_3+3*p2.y*p3.y*c_119-c_4*(c_7+c_5+p3.z)-p1.y*p3.y*(c_9+c_87+p3.z)+c_6*(c_7+p2.z+c_8)+p1.y*p2.y*
        (c_9+p2.z+c_12))+p20_5*(9*c_6*c_15+c_4*(c_0+c_10+p3.z)+p2.y*p3.y*(c_74+c_11+p3.z)-c_1*c_135-p1.y*(c_132+p2.y*(p1.z+c_11+c_12)))+p10_4*
        (p3.x*(-3*p2.y*p3.y*c_14+c_62+5*c_1*c_17-c_4*(c_19+c_43+c_8)-3*p1.y*(c_20+c_21-p2.y*p2.z+c_205-4*p2.y*
        p3.z))+p2.x*(c_36+3*p2.y*p3.y*c_111-5*c_1*c_39+c_6*(c_19+c_5+c_41)+3*p1.y*(c_20+c_21-4*p3.y*p2.z+c_231-p3.y*p3.z)))+p10_3*(40*
        c_22*p2.y*p1.z+20*c_1*c_6*p1.z+8*p1.y*c_23*p1.z+2*c_24*p1.z-40*c_22*p3.y*p1.z-20*c_1*c_4*p1.z-8*p1.y*c_25*p1.z-2*c_26*
        p1.z+5*c_30*p2.z+10*c_22*p2.y*p2.z+10*c_1*c_6*p2.z+7*p1.y*c_23*p2.z+3*c_24*p2.z-30*c_22*p3.y*p2.z-18*c_1*p2.y*p3.y*
        p2.z-9*p1.y*c_6*p3.y*p2.z+c_197-18*c_1*c_4*p2.z-9*p1.y*p2.y*c_4*p2.z-3*c_6*c_4*p2.z-9*p1.y*c_25*p2.z-3*p2.y*c_25*
        p2.z+c_221+60*c_1*c_27*p2.z+20*p1.y*p2.y*c_27*p2.z+4*c_6*c_27*p2.z+180*p1.y*p3.y*c_27*p2.z+c_198+c_199+20*c_1*p1.z*c_28+16*
        p1.y*p2.y*p1.z*c_28+6*c_6*p1.z*c_28+72*p1.y*p3.y*p1.z*c_28+36*p2.y*p3.y*p1.z*c_28+c_222+4*c_1*c_29+6*p1.y*p2.y*
        c_29+4*c_6*c_29+18*p1.y*p3.y*c_29+c_200+6*c_4*c_29-5*c_30*p3.z+30*c_22*p2.y*p3.z+18*c_1*c_6*p3.z+9*p1.y*c_23*p3.z+c_201-10*
        c_22*p3.y*p3.z+18*c_1*p2.y*p3.y*p3.z+9*p1.y*c_6*p3.y*p3.z+3*c_23*p3.y*p3.z-10*c_1*c_4*p3.z+9*p1.y*p2.y*c_4*p3.z+3*
        c_6*c_4*p3.z-7*p1.y*c_25*p3.z+c_223-3*c_26*p3.z-60*c_1*c_27*p3.z-180*p1.y*p2.y*c_27*p3.z+c_224-20*p1.y*p3.y*c_27*
        p3.z+c_225-4*c_4*c_27*p3.z-72*p1.y*p2.y*p1.z*p2.z*p3.z-36*c_6*p1.z*p2.z*p3.z+72*p1.y*p3.y*p1.z*p2.z*p3.z+36*c_4*
        p1.z*p2.z*p3.z-18*p1.y*p2.y*c_28*p3.z+c_203+18*p1.y*p3.y*c_28*p3.z+6*p2.y*p3.y*c_28*p3.z+12*c_4*c_28*p3.z-20*c_1*p1.z*
        c_31-72*p1.y*p2.y*p1.z*c_31+c_204-16*p1.y*p3.y*p1.z*c_31-36*p2.y*p3.y*p1.z*c_31-6*c_4*p1.z*c_31-18*p1.y*p2.y*p2.z*
        c_31-12*c_6*p2.z*c_31+18*p1.y*p3.y*p2.z*c_31-6*p2.y*p3.y*p2.z*c_31+c_229-4*c_1*c_32-18*p1.y*p2.y*c_32-6*c_6*c_32-6*
        p1.y*p3.y*c_32+c_230-4*c_4*c_32+6*p2.x*p3.x*(2*p1.y+p2.y+p3.y)*(p3.y*p1.z+p1.y*p2.z-p3.y*p2.z-p1.y*p3.z+c_58)+c_73*
        (c_36+3*p1.y*p3.y*c_77+3*p2.y*p3.y*c_81+p1.y*p2.y*(8*p1.z+c_37+c_8)+3*c_6*c_39-2*c_1*c_194)+c_72*(2*c_1*c_209-3*(p2.y*
        p3.y*c_80+c_6*c_15+c_4*c_17)+p1.y*(p3.y*(-8*p1.z+c_37+c_8)+3*p2.y*c_76)))+p1.x*(240*c_22*p2.y*c_45+120*c_1*c_6*c_45+48*p1.y*
        c_23*c_45+12*c_24*c_45-240*c_22*p3.y*c_45-120*c_1*c_4*c_45-48*p1.y*c_25*c_45-12*c_26*c_45-192*p1.y*p2.y*c_46-32*c_6*c_46+192*
        p1.y*p3.y*c_46+32*c_4*c_46+25*c_53*p2.z+25*c_47*p2.y*p2.z+25*c_30*c_6*p2.z+25*c_22*c_23*p2.z+25*c_1*c_24*p2.z+25*p1.y*
        c_48*p2.z+25*c_54*p2.z-15*c_47*p3.y*p2.z-15*c_30*p2.y*p3.y*p2.z-15*c_22*c_6*p3.y*p2.z-15*c_1*c_23*p3.y*p2.z-15*p1.y*
        c_24*p3.y*p2.z-15*c_48*p3.y*p2.z-15*c_30*c_4*p2.z-15*c_22*p2.y*c_4*p2.z-15*c_1*c_6*c_4*p2.z-15*p1.y*c_23*c_4*p2.z-15*
        c_24*c_4*p2.z-15*c_22*c_25*p2.z-15*c_1*p2.y*c_25*p2.z-15*p1.y*c_6*c_25*p2.z-15*c_23*c_25*p2.z-15*c_1*c_26*p2.z-15*p1.y*
        p2.y*c_26*p2.z-15*c_6*c_26*p2.z-15*p1.y*c_49*p2.z-15*p2.y*c_49*p2.z-15*c_55*p2.z-270*c_30*c_27*p2.z-60*c_22*p2.y*c_27*
        p2.z+36*c_1*c_6*c_27*p2.z+54*p1.y*c_23*c_27*p2.z+30*c_24*c_27*p2.z+180*c_22*p3.y*c_27*p2.z+108*c_1*p2.y*p3.y*c_27*
        p2.z+54*p1.y*c_6*p3.y*c_27*p2.z+18*c_23*p3.y*c_27*p2.z+108*c_1*c_4*c_27*p2.z+54*p1.y*p2.y*c_4*c_27*p2.z+18*c_6*c_4*c_27*
        p2.z+54*p1.y*c_25*c_27*p2.z+c_140+c_250+120*c_1*c_50*p2.z-120*p1.y*p2.y*c_50*p2.z-56*c_6*c_50*p2.z-120*p1.y*p3.y*c_50*
        p2.z+c_141+c_251-90*c_30*p1.z*c_28-96*c_22*p2.y*p1.z*c_28-54*c_1*c_6*p1.z*c_28+30*c_24*p1.z*c_28+72*c_22*p3.y*p1.z*c_28+108*
        c_1*p2.y*p3.y*p1.z*c_28+108*p1.y*c_6*p3.y*p1.z*c_28+72*c_23*p3.y*p1.z*c_28+54*c_1*c_4*p1.z*c_28+72*p1.y*p2.y*c_4*
        p1.z*c_28+c_142+36*p1.y*c_25*p1.z*c_28+36*p2.y*c_25*p1.z*c_28+c_252+80*c_1*c_45*c_28-64*p1.y*p2.y*c_45*c_28+c_143-96*
        p1.y*p3.y*c_45*c_28-48*p2.y*p3.y*c_45*c_28+c_253-18*c_30*c_29-42*c_22*p2.y*c_29-60*c_1*c_6*c_29-60*p1.y*c_23*c_29-30*c_24*
        c_29+18*c_22*p3.y*c_29+54*c_1*p2.y*p3.y*c_29+108*p1.y*c_6*p3.y*c_29+180*c_23*p3.y*c_29+18*c_1*c_4*c_29+54*p1.y*p2.y*c_4*
        c_29+108*c_6*c_4*c_29+18*p1.y*c_25*c_29+54*p2.y*c_25*c_29+c_144+48*c_1*c_27*c_29-24*p1.y*p2.y*c_27*c_29-80*c_6*c_27*c_29-72*
        p1.y*p3.y*c_27*c_29-72*p2.y*p3.y*c_27*c_29+c_254+24*c_1*p1.z*c_51-80*c_6*p1.z*c_51-48*p1.y*p3.y*p1.z*c_51-96*p2.y*p3.y*
        p1.z*c_51+c_255+8*c_1*c_52+8*p1.y*p2.y*c_52-72*c_6*c_52-24*p1.y*p3.y*c_52-120*p2.y*p3.y*c_52-24*c_4*c_52-25*c_53*p3.z+15*
        c_47*p2.y*p3.z+15*c_30*c_6*p3.z+15*c_22*c_23*p3.z+15*c_1*c_24*p3.z+15*p1.y*c_48*p3.z+15*c_54*p3.z-25*c_47*p3.y*p3.z+15*
        c_30*p2.y*p3.y*p3.z+15*c_22*c_6*p3.y*p3.z+15*c_1*c_23*p3.y*p3.z+15*p1.y*c_24*p3.y*p3.z+15*c_48*p3.y*p3.z-25*c_30*
        c_4*p3.z+15*c_22*p2.y*c_4*p3.z+15*c_1*c_6*c_4*p3.z+15*p1.y*c_23*c_4*p3.z+15*c_24*c_4*p3.z-25*c_22*c_25*p3.z+15*c_1*p2.y*
        c_25*p3.z+15*p1.y*c_6*c_25*p3.z+15*c_23*c_25*p3.z-25*c_1*c_26*p3.z+15*p1.y*p2.y*c_26*p3.z+15*c_6*c_26*p3.z-25*p1.y*
        c_49*p3.z+15*p2.y*c_49*p3.z+c_256+270*c_30*c_27*p3.z-180*c_22*p2.y*c_27*p3.z-108*c_1*c_6*c_27*p3.z-54*p1.y*c_23*c_27*p3.z-18*
        c_24*c_27*p3.z+60*c_22*p3.y*c_27*p3.z-108*c_1*p2.y*p3.y*c_27*p3.z-54*p1.y*c_6*p3.y*c_27*p3.z-18*c_23*p3.y*c_27*
        p3.z-36*c_1*c_4*c_27*p3.z-54*p1.y*p2.y*c_4*c_27*p3.z-18*c_6*c_4*c_27*p3.z-54*p1.y*c_25*c_27*p3.z-18*p2.y*c_25*c_27*p3.z-30*
        c_26*c_27*p3.z-120*c_1*c_50*p3.z+120*p1.y*p2.y*c_50*p3.z+24*c_6*c_50*p3.z+120*p1.y*p3.y*c_50*p3.z+24*p2.y*p3.y*c_50*
        p3.z+56*c_4*c_50*p3.z-72*c_22*p2.y*p1.z*p2.z*p3.z-108*c_1*c_6*p1.z*p2.z*p3.z-108*p1.y*c_23*p1.z*p2.z*p3.z-72*c_24*
        p1.z*p2.z*p3.z+72*c_22*p3.y*p1.z*p2.z*p3.z-36*p1.y*c_6*p3.y*p1.z*p2.z*p3.z-36*c_23*p3.y*p1.z*p2.z*p3.z+108*c_1*
        c_4*p1.z*p2.z*p3.z+36*p1.y*p2.y*c_4*p1.z*p2.z*p3.z+108*p1.y*c_25*p1.z*p2.z*p3.z+36*p2.y*c_25*p1.z*p2.z*p3.z+c_258+96*
        p1.y*p2.y*c_45*p2.z*p3.z+48*c_6*c_45*p2.z*p3.z-96*p1.y*p3.y*c_45*p2.z*p3.z+c_260-18*c_22*p2.y*c_28*p3.z-54*c_1*
        c_6*c_28*p3.z-108*p1.y*c_23*c_28*p3.z-180*c_24*c_28*p3.z+18*c_22*p3.y*c_28*p3.z+18*c_1*p2.y*p3.y*c_28*p3.z-36*c_23*
        p3.y*c_28*p3.z+36*c_1*c_4*c_28*p3.z+54*p1.y*p2.y*c_4*c_28*p3.z+c_145+54*p1.y*c_25*c_28*p3.z+90*p2.y*c_25*c_28*p3.z+72*
        c_26*c_28*p3.z+72*p1.y*p2.y*c_27*c_28*p3.z+72*c_6*c_27*c_28*p3.z-72*p1.y*p3.y*c_27*c_28*p3.z-24*p2.y*p3.y*c_27*c_28*
        p3.z+c_261+48*p1.y*p2.y*p1.z*c_29*p3.z+96*c_6*p1.z*c_29*p3.z-48*p1.y*p3.y*p1.z*c_29*p3.z+c_146+c_262+24*p1.y*p2.y*c_51*
        p3.z+120*c_6*c_51*p3.z-24*p1.y*p3.y*c_51*p3.z-72*p2.y*p3.y*c_51*p3.z-48*c_4*c_51*p3.z+90*c_30*p1.z*c_31-72*c_22*p2.y*
        p1.z*c_31-54*c_1*c_6*p1.z*c_31-36*p1.y*c_23*p1.z*c_31-18*c_24*p1.z*c_31+96*c_22*p3.y*p1.z*c_31-108*c_1*p2.y*p3.y*p1.z*
        c_31-72*p1.y*c_6*p3.y*p1.z*c_31-36*c_23*p3.y*p1.z*c_31+54*c_1*c_4*p1.z*c_31-108*p1.y*p2.y*c_4*p1.z*c_31-54*c_6*c_4*
        p1.z*c_31-72*p2.y*c_25*p1.z*c_31-30*c_26*p1.z*c_31-80*c_1*c_45*c_31+96*p1.y*p2.y*c_45*c_31+24*c_6*c_45*c_31+64*p1.y*p3.y*
        c_45*c_31+48*p2.y*p3.y*c_45*c_31+72*c_4*c_45*c_31-18*c_22*p2.y*p2.z*c_31-36*c_1*c_6*p2.z*c_31-54*p1.y*c_23*p2.z*c_31-72*
        c_24*p2.z*c_31+18*c_22*p3.y*p2.z*c_31-18*c_1*p2.y*p3.y*p2.z*c_31-54*p1.y*c_6*p3.y*p2.z*c_31-90*c_23*p3.y*p2.z*c_31+54*
        c_1*c_4*p2.z*c_31-54*c_6*c_4*p2.z*c_31+108*p1.y*c_25*p2.z*c_31+36*p2.y*c_25*p2.z*c_31+180*c_26*p2.z*c_31+72*p1.y*p2.y*
        c_27*p2.z*c_31+48*c_6*c_27*p2.z*c_31-72*p1.y*p3.y*c_27*p2.z*c_31+24*p2.y*p3.y*c_27*p2.z*c_31+c_263+48*p1.y*p2.y*p1.z*
        c_28*c_31+72*c_6*p1.z*c_28*c_31-48*p1.y*p3.y*p1.z*c_28*c_31+c_265+24*p1.y*p2.y*c_29*c_31+96*c_6*c_29*c_31-24*p1.y*p3.y*
        c_29*c_31-24*p2.y*p3.y*c_29*c_31-72*c_4*c_29*c_31+18*c_30*c_32-18*c_22*p2.y*c_32-18*c_1*c_6*c_32-18*p1.y*c_23*c_32-18*c_24*
        c_32+42*c_22*p3.y*c_32-54*c_1*p2.y*p3.y*c_32-54*p1.y*c_6*p3.y*c_32-54*c_23*p3.y*c_32+60*c_1*c_4*c_32-108*p1.y*p2.y*c_4*
        c_32-108*c_6*c_4*c_32+60*p1.y*c_25*c_32-180*p2.y*c_25*c_32+c_266-48*c_1*c_27*c_32+72*p1.y*p2.y*c_27*c_32+24*c_6*c_27*c_32+24*
        p1.y*p3.y*c_27*c_32+72*p2.y*p3.y*c_27*c_32+c_147+48*p1.y*p2.y*p1.z*p2.z*c_32+48*c_6*p1.z*p2.z*c_32-48*p1.y*p3.y*p1.z*
        p2.z*c_32+48*p2.y*p3.y*p1.z*p2.z*c_32+c_267+24*p1.y*p2.y*c_28*c_32+c_148-24*p1.y*p3.y*c_28*c_32+c_268-96*c_4*c_28*c_32-24*
        c_1*p1.z*c_56+48*p1.y*p2.y*p1.z*c_56+24*c_6*p1.z*c_56+96*p2.y*p3.y*p1.z*c_56+80*c_4*p1.z*c_56+24*p1.y*p2.y*p2.z*
        c_56+48*c_6*p2.z*c_56-24*p1.y*p3.y*p2.z*c_56+72*p2.y*p3.y*p2.z*c_56+c_149-8*c_1*c_57+24*p1.y*p2.y*c_57+24*c_6*c_57-8*
        p1.y*p3.y*c_57+120*p2.y*p3.y*c_57+c_269+6*c_127*p3.x*(p1.y+2*p2.y+p3.y)*c_71-c_59*(3*c_4*c_151-3*p2.y*p3.y*(c_7+c_60+p3.z)+c_1*
        (c_0+c_61+c_41)-5*c_6*c_65+3*p1.y*(p3.y*c_67+p2.y*c_78))+c_150*(-3*p2.y*p3.y*(c_7+p2.z+c_89)+c_62+c_1*(c_0+c_43+7*
        p3.z)-5*c_4*c_65+3*p1.y*(p2.y*c_67+p3.y*c_102))+6*p2.x*p3.x*c_71*(2*c_22+2*c_23+3*c_6*p3.y+3*p2.y*c_4+2*c_25+3*c_1*
        (p2.y+p3.y)+c_72*(p1.y+p2.y+c_192)-6*p2.y*c_27-6*p3.y*c_27-12*p2.y*p1.z*p2.z-8*p3.y*p1.z*p2.z-12*p2.y*c_28-6*p3.y*c_28-8*
        p2.y*p1.z*p3.z-12*p3.y*p1.z*p3.z-12*p2.y*p2.z*p3.z-12*p3.y*p2.z*p3.z-6*p2.y*c_31-12*p3.y*c_31+p1.y*(3*c_6+4*
        p2.y*p3.y+3*c_4-2*c_166))-c_73*(9*c_72*c_6*p1.z+c_128-12*c_23*p3.y*p1.z-9*c_72*c_4*p1.z-9*c_6*c_4*p1.z-6*p2.y*c_25*p1.z-3*
        c_26*p1.z+6*c_6*c_45+c_196+18*c_4*c_45+c_103+9*c_72*p2.y*p3.y*p2.z+30*c_23*p3.y*p2.z+c_129+18*c_6*c_4*p2.z+c_104+3*c_26*
        p2.z+12*c_6*c_27*p2.z+54*p2.y*p3.y*c_27*p2.z+18*c_4*c_27*p2.z+c_105-180*p2.y*p3.y*c_29-36*c_4*c_29-9*c_72*c_6*p3.z-30*
        c_24*p3.z-9*c_72*p2.y*p3.y*p3.z-18*c_23*p3.y*p3.z-9*c_6*c_4*p3.z-3*p2.y*c_25*p3.z+c_106+30*p2.y*p3.y*c_27*p3.z+24*
        c_4*c_27*p3.z+c_107+36*p2.y*p3.y*p1.z*p2.z*p3.z+c_227+180*c_6*c_28*p3.z-36*p2.y*p3.y*c_28*p3.z-36*c_4*c_28*p3.z+c_108+24*
        p2.y*p3.y*p1.z*c_31+18*c_4*p1.z*c_31+72*c_6*p2.z*c_31+c_109-18*c_4*p2.z*c_31+18*c_6*c_32+18*p2.y*p3.y*c_32+c_30*
        (c_74+c_40+12*p3.z)+c_22*(3*p3.y*c_76+p2.y*(c_86+c_94+c_12))+c_1*(20*c_45+12*c_27*c_272-6*c_72*c_3+c_91-36*p1.z*p3.z*c_190+c_4*
        c_210+c_6*(c_93+c_43+c_84)-4*(c_29+c_100+c_98+c_82))+p1.y*(-18*c_6*p3.y*c_35-3*p2.y*c_4*c_77-3*c_25*(c_44+c_18+c_2)-2*c_23*
        c_78+3*c_72*(-(p3.y*c_80)+p2.y*c_81)-6*p3.y*(c_96+c_120+c_155+c_217+c_82+2*p1.z*p3.z*c_63-3*c_27*c_83)-2*p2.y*(c_99+10*c_29-9*
        c_27*c_3+c_288+c_125+c_82+6*p1.z*p3.z*c_83)))+c_72*(-3*c_23*p3.y*c_80-3*c_24*c_15+c_30*(c_74+12*p2.z+c_68)-5*c_26*
        (p1.z+c_43+c_84)+6*c_4*(c_45+c_97+c_183+c_184+c_90+c_27*(c_5+c_16)+3*p1.z*p2.z*c_168)+c_22*(3*p2.y*(c_75+c_5+p3.z)+p3.y*
        (c_86+c_87+c_84))-3*c_6*(c_123-2*c_15*c_188)-6*p2.y*p3.y*(-6*c_45+c_4*(c_44+c_5+c_89)-2*p1.z*p2.z*c_172-c_27*(c_40+c_84)-3*(c_29+c_163-2*
        p2.z*c_31+c_90))+c_1*(c_91+c_6*(c_92+c_43+c_8)+c_4*(c_93+c_94+c_41)+4*(c_154-3*c_29-6*c_28*p3.z+c_121+c_164+3*c_27*(-6*
        p2.z+p3.z)-9*p1.z*p2.z*c_174))-p1.y*(3*c_6*p3.y*(c_7+c_18+c_79)+c_23*c_207+6*p2.y*(c_96+c_97+c_133+c_237+c_98+c_126+2*p1.z*
        p2.z*c_63-3*c_27*c_101)+2*p3.y*(c_99+c_97+9*c_27*c_3+c_100+c_134+10*c_32+6*p1.z*p2.z*c_101+c_4*c_102))))+c_73*p3.x*(-30*c_24*
        p1.z-6*c_23*p3.y*p1.z+9*c_6*c_4*p1.z+15*p2.y*c_25*p1.z+12*c_26*p1.z+18*c_6*c_45-6*p2.y*p3.y*c_45-12*c_4*c_45+c_103-10*
        c_23*p3.y*p2.z+6*c_6*c_4*p2.z+c_104+5*c_26*p2.z+72*c_6*c_27*p2.z-18*p2.y*p3.y*c_27*p2.z-24*c_4*c_27*p2.z+180*c_6*p1.z*
        c_28-36*p2.y*p3.y*p1.z*c_28+c_130+c_105-20*p2.y*p3.y*c_29-4*c_4*c_29+3*c_30*c_3-5*c_24*p3.z+c_202+16*p2.y*c_25*
        p3.z+c_284+c_106-12*p2.y*p3.y*c_27*p3.z+c_226+c_107-36*p2.y*p3.y*p1.z*p2.z*p3.z-72*c_4*p1.z*p2.z*p3.z+c_108+c_131-72*c_4*
        p1.z*c_31+12*c_6*p2.z*c_31+c_109+12*c_4*p2.z*c_31+6*c_6*c_32+16*p2.y*p3.y*c_32+20*c_4*c_32+c_22*(3*p3.y*c_14-3*p2.y*c_118)-3*
        c_1*(-(p2.y*p3.y*c_116)-c_4*c_80+3*c_6*c_111+2*c_3*c_138)+c_72*(p2.y*p3.y*(c_211+c_5-8*p3.z)+3*p1.y*p3.y*c_116+c_117-3*
        p1.y*p2.y*c_118-3*c_6*c_39+2*c_4*(c_95+5*c_63))-3*p1.y*(-(c_25*c_208)+6*c_6*p3.y*c_119+2*c_23*(c_0+c_60+c_16)+2*p3.y*
        (c_124+c_120+c_121-12*c_32+c_27*(c_40+c_16)+p1.z*(c_122+c_156-3*c_31))-p2.y*(c_123+2*(c_124-30*c_29+c_125+c_126+c_27*(c_5+c_85)+p1.z*
        (-6*c_28+c_113+5*c_31)))))+c_127*(-12*c_72*c_6*p1.z+c_128+3*c_72*p2.y*p3.y*p1.z+30*c_23*p3.y*p1.z+c_218+18*c_6*c_4*p1.z+9*
        p2.y*c_25*p1.z+c_219+c_220-18*p2.y*p3.y*c_45-6*c_4*c_45-10*c_72*c_6*p2.z+8*c_72*p2.y*p3.y*p2.z+40*c_23*p3.y*
        p2.z+c_129+20*c_6*c_4*p2.z+8*p2.y*c_25*p2.z+2*c_26*p2.z-20*c_6*c_27*p2.z-72*p2.y*p3.y*c_27*p2.z-18*c_4*c_27*p2.z-60*c_6*p1.z*
        c_28-180*p2.y*p3.y*p1.z*c_28+c_130-10*c_72*c_6*p3.z+5*c_24*p3.z-3*c_72*p2.y*p3.y*p3.z+10*c_23*p3.y*p3.z+6*c_72*c_4*
        p3.z+10*c_6*c_4*p3.z+7*p2.y*c_25*p3.z+3*c_26*p3.z-18*p2.y*p3.y*c_27*p3.z-12*c_4*c_27*p3.z-72*p2.y*p3.y*p1.z*p2.z*
        p3.z-36*c_4*p1.z*p2.z*p3.z+60*c_6*c_28*p3.z+20*p2.y*p3.y*c_28*p3.z+4*c_4*c_28*p3.z+c_131+c_228+20*c_6*p2.z*c_31+16*p2.y*
        p3.y*p2.z*c_31+6*c_4*p2.z*c_31+4*c_6*c_32+6*p2.y*p3.y*c_32+4*c_4*c_32-c_30*c_39-c_22*(c_132+p2.y*(c_19+8*p2.z+c_84))+c_1*
        (-4*c_45+c_233+c_216-4*p1.z*c_28+9*p2.y*p3.y*c_15+c_133+c_234+c_240+36*p1.z*p2.z*p3.z+36*c_28*p3.z+12*p1.z*c_31+c_134+c_126-2*
        c_6*(c_42+10*p2.z+c_84))+p1.y*(18*c_6*p3.y*c_15-10*c_23*c_135-3*c_72*(c_276+p2.y*c_285)-3*p3.y*c_15*(-c_4+2*c_138)+p2.y*
        (9*c_4*c_15+2*(c_171+c_27*(-8*p2.z+c_84)+9*p3.z*(c_182+c_139+c_31)+p1.z*(c_273+36*p2.z*p3.z+9*c_31)))))+p3.x*(-15*c_54*
        p1.z+c_241+c_242+c_243+c_244+c_245+25*c_55*p1.z+18*c_24*c_45+c_246+c_247+c_248-18*c_26*c_45-24*c_6*c_46+c_249+8*c_4*c_46-25*
        c_54*p2.z-25*c_48*p3.y*p2.z-25*c_24*c_4*p2.z-25*c_23*c_25*p2.z-25*c_6*c_26*p2.z-25*p2.y*c_49*p2.z-25*c_55*p2.z+72*c_24*
        c_27*p2.z+54*c_23*p3.y*c_27*p2.z+36*c_6*c_4*c_27*p2.z+c_140-48*c_6*c_50*p2.z+c_141+180*c_24*p1.z*c_28+108*c_23*p3.y*p1.z*
        c_28+c_142+18*p2.y*c_25*p1.z*c_28+c_143-24*p2.y*p3.y*c_45*c_28+30*c_24*c_29+60*c_23*p3.y*c_29+60*c_6*c_4*c_29+42*p2.y*
        c_25*c_29+c_144-96*c_6*c_27*c_29-24*p2.y*p3.y*c_27*c_29-120*c_6*p1.z*c_51-24*p2.y*p3.y*p1.z*c_51+72*c_6*c_52-8*p2.y*p3.y*
        c_52-8*c_4*c_52+5*c_53*c_153-5*c_47*(c_195-5*p3.y*p1.z-3*p2.y*p2.z-3*p3.y*p2.z)+18*c_24*c_27*p3.z+36*c_23*p3.y*c_27*p3.z+54*
        c_6*c_4*c_27*p3.z+72*p2.y*c_25*c_27*p3.z-90*c_26*c_27*p3.z-24*c_6*c_50*p3.z-48*p2.y*p3.y*c_50*p3.z+24*c_4*c_50*
        p3.z+72*c_24*p1.z*p2.z*p3.z+108*c_23*p3.y*p1.z*p2.z*p3.z+c_257+72*p2.y*c_25*p1.z*p2.z*p3.z-48*c_6*c_45*p2.z*p3.z+c_259-30*
        c_24*c_28*p3.z+c_145+96*p2.y*c_25*c_28*p3.z+90*c_26*c_28*p3.z-72*c_6*c_27*c_28*p3.z-48*p2.y*p3.y*c_27*c_28*p3.z-96*
        c_6*p1.z*c_29*p3.z+c_146+80*c_6*c_51*p3.z-24*c_4*c_51*p3.z+18*c_24*p1.z*c_31+54*c_23*p3.y*p1.z*c_31+108*c_6*c_4*p1.z*
        c_31+180*p2.y*c_25*p1.z*c_31-270*c_26*p1.z*c_31-24*c_6*c_45*c_31-72*p2.y*p3.y*c_45*c_31+48*c_4*c_45*c_31-30*c_24*p2.z*c_31-54*
        c_23*p3.y*p2.z*c_31-36*c_6*c_4*p2.z*c_31+60*p2.y*c_25*p2.z*c_31+270*c_26*p2.z*c_31-48*c_6*c_27*p2.z*c_31-72*p2.y*p3.y*
        c_27*p2.z*c_31-72*c_6*p1.z*c_28*c_31+c_264+80*c_6*c_29*c_31+24*p2.y*p3.y*c_29*c_31-48*c_4*c_29*c_31-12*c_24*c_32-48*c_23*
        p3.y*c_32-120*c_6*c_4*c_32-240*p2.y*c_25*c_32-24*c_6*c_27*c_32-96*p2.y*p3.y*c_27*c_32+c_147-48*c_6*p1.z*p2.z*c_32-96*p2.y*
        p3.y*p1.z*p2.z*c_32+c_148+64*p2.y*p3.y*c_28*c_32-80*c_4*c_28*c_32-24*c_6*p1.z*c_56-120*p2.y*p3.y*p1.z*c_56+120*c_4*p1.z*
        c_56+56*c_6*p2.z*c_56+120*p2.y*p3.y*p2.z*c_56+c_149+32*c_6*c_57+192*p2.y*p3.y*c_57+c_150*(-3*p1.y*p2.y*c_35+9*c_4*
        c_151-c_6*c_169+c_1*c_177-p2.y*p3.y*(c_74+p2.z+c_152)+p1.y*p3.y*(p1.z+c_87+c_152))-c_30*(15*c_6*c_35+15*p2.y*p3.y*c_35-5*c_4*
        c_153+6*(c_154+c_97+5*c_27*(c_43+c_2)+c_191+c_299-2*c_32+p1.z*(12*c_28+c_185+c_162)))-c_22*(15*c_23*c_35+15*c_6*p3.y*c_35-5*
        c_25*c_153+6*p3.y*c_215-3*p2.y*c_35*(c_159+6*(c_277+c_181+c_88+c_137+c_156+c_31)))+c_1*(-15*c_24*c_35-15*c_23*p3.y*c_35+5*c_26*
        c_153-6*c_4*(c_157+c_97+c_100+c_134-20*c_32+c_289+6*p1.z*(c_28+c_161+c_158))+3*c_6*c_35*(c_159+6*(c_160+9*p1.z*p2.z+c_122+3*
        p1.z*p3.z+c_161+c_31))-8*(9*c_46-3*c_52-5*c_50*(c_5+c_13)-3*c_51*p3.z-3*c_29*c_31-3*c_28*c_32-3*p2.z*c_56+4*c_57-2*c_45*
        (c_122+c_113+c_162)-9*c_27*(c_29+c_163+p2.z*c_31+c_164)-p1.z*(6*c_51+6*c_29*p3.z+6*c_28*c_31+6*p2.z*c_32-7*c_56))+3*p2.y*p3.y*
        c_35*c_287)+c_72*(c_30*c_17-c_24*c_17-c_23*p3.y*(c_93+c_61+c_179)+c_22*(-3*p2.y*p1.z+7*p3.y*p1.z+3*p2.y*p2.z+9*p3.y*
        p2.z+8*p3.y*p3.z)+c_1*(4*c_45-3*c_6*c_35+9*p2.y*p3.y*c_151+2*c_27*(c_178+c_8)+2*c_4*(c_42+c_94+10*p3.z)-4*p1.z*(c_88+9*p2.z*
        p3.z+c_158)-6*p2.z*(c_28+c_161+c_167))-2*p2.y*p3.y*(-9*c_45-9*c_27*c_168+5*c_4*c_169-9*p1.z*c_180+p2.z*(c_88+8*p2.z*
        p3.z+c_170))-2*c_6*(c_171-3*c_27*c_172-9*p1.z*(c_28+c_156+c_173)+p2.z*(2*c_28+c_161+c_173)+c_4*(c_93+5*c_174))+c_4*c_35*(5*c_4+4*
        (c_27+c_28+5*p2.z*p3.z+15*c_31+p1.z*(p2.z+c_68)))+p1.y*(-3*c_23*c_35+9*c_6*p3.y*c_151+6*p2.y*c_35*(-3*
        c_4+c_112+c_175+c_88+c_176+c_113+c_167)+2*p3.y*(c_124+5*c_4*c_177+c_27*(c_178+c_179)+p1.z*(-9*c_28-36*p2.z*p3.z+c_170)-9*p2.z*c_180)))+p1.y*
        (-15*c_48*c_35-15*c_24*p3.y*c_35+5*c_49*c_153+3*c_23*c_35*(c_159+6*(c_112+c_181+c_182+2*p1.z*p3.z+c_139+c_31))+3*c_6*p3.y*
        c_35*c_292-6*c_25*(7*c_45+c_97+c_183+c_184-40*c_32+c_27*(c_5+c_212)+p1.z*(c_88+c_185+c_170))+8*p3.y*(c_46+3*c_50*p2.z+3*c_45*
        c_186+c_27*(c_97+c_155+c_125+c_187)+3*p1.z*(c_51+c_296+c_189+c_297-5*c_56)+3*(c_52+2*c_51*p3.z+3*c_29*c_31+4*c_28*c_32+5*p2.z*
        c_56-8*c_57))-3*p2.y*c_35*(c_294-6*c_4*c_188+8*(c_295+5*c_51+c_301+c_189+c_302+c_56+4*c_45*c_190+3*c_27*c_238+2*p1.z*(4*
        c_29+c_191+2*p2.z*c_31+c_32)))))+p10_2*(3*c_73*p3.x*(3*p1.y+3*p2.y+c_192)*c_71+c_127*(c_36+3*p2.y*p3.y*c_239+2*c_6*c_194+p1.y*
        (c_195+9*p3.y*p1.z-8*p2.y*p2.z-6*p3.y*p2.z-3*p2.y*p3.z-3*p3.y*p3.z)-3*c_1*c_65)+p3.x*(-3*c_24*p1.z-3*c_23*p3.y*
        p1.z-3*c_6*c_4*p1.z-3*p2.y*c_25*p1.z-5*c_26*p1.z+36*c_6*c_45+c_196+4*c_4*c_45+c_197-6*c_6*c_4*p2.z-9*p2.y*c_25*p2.z-12*c_26*
        p2.z+36*c_6*c_27*p2.z+c_198+c_199+18*c_6*p1.z*c_28+30*p2.y*p3.y*p1.z*c_28+24*c_4*p1.z*c_28+c_200+12*c_4*c_29+c_201+6*c_23*
        p3.y*p3.z+c_202+12*p2.y*c_25*p3.z-15*c_26*p3.z-12*c_6*p1.z*p2.z*p3.z+12*p2.y*p3.y*p1.z*p2.z*p3.z+72*c_4*p1.z*
        p2.z*p3.z+c_203+12*p2.y*p3.y*c_28*p3.z+36*c_4*c_28*p3.z+c_204-54*p2.y*p3.y*p1.z*c_31-12*c_4*p1.z*c_31-24*c_6*p2.z*c_31-18*
        p2.y*p3.y*p2.z*c_31+72*c_4*p2.z*c_31-18*c_6*c_32-72*p2.y*p3.y*c_32-20*c_4*c_32+5*c_30*(c_93+c_43+p3.z)+2*c_22*(-15*p2.y*
        p1.z+c_21+9*p2.y*p2.z+c_205+6*p2.y*p3.z)-3*c_1*(c_232+60*c_27*p2.z+24*p1.z*c_28+c_120+6*p2.y*p3.y*c_15+c_235+c_155+4*
        p1.z*c_31+c_98+2*c_32+c_6*c_207+c_4*c_65)+c_72*(-3*p2.y*p3.y*c_208+c_62-2*c_4*c_209+c_1*(c_95+9*c_63)+p1.y*(p2.y*c_210+p3.y*
        (c_211+c_5+c_179)))-p1.y*(3*c_6*p3.y*c_208+9*p2.y*c_4*c_14+c_25*(c_93+c_87+c_212)+c_23*(c_93-3*c_174)-2*p3.y*c_215+6*p2.y*
        (c_236+c_216+c_97+4*c_28*p3.z+c_217+c_126+3*p1.z*c_298)))+p2.x*(-6*c_72*c_6*p1.z+5*c_24*p1.z-3*c_72*p2.y*p3.y*p1.z+3*
        c_23*p3.y*p1.z+c_218+3*c_6*c_4*p1.z+3*p2.y*c_25*p1.z+c_219+c_220-36*p2.y*p3.y*c_45-36*c_4*c_45+15*c_24*p2.z-6*c_72*p2.y*
        p3.y*p2.z-12*c_23*p3.y*p2.z-9*c_72*c_4*p2.z-9*c_6*c_4*p2.z-6*p2.y*c_25*p2.z+c_221+12*c_6*p1.z*c_28+54*p2.y*p3.y*p1.z*
        c_28+c_222+20*c_6*c_29+72*p2.y*p3.y*c_29+18*c_4*c_29+6*c_72*c_6*p3.z+12*c_24*p3.z+9*c_72*p2.y*p3.y*p3.z+9*c_23*p3.y*
        p3.z+6*c_6*c_4*p3.z+c_223+c_224+c_225+c_226-72*c_6*p1.z*p2.z*p3.z-12*p2.y*p3.y*p1.z*p2.z*p3.z+c_227-72*c_6*c_28*p3.z+18*
        p2.y*p3.y*c_28*p3.z+24*c_4*c_28*p3.z-24*c_6*p1.z*c_31-30*p2.y*p3.y*p1.z*c_31+c_228-36*c_6*p2.z*c_31-12*p2.y*p3.y*
        p2.z*c_31+c_229-12*c_6*c_32+c_230-5*c_30*(c_93+p2.z+c_41)-2*c_22*(c_20-15*p3.y*p1.z+6*p3.y*p2.z+c_231+9*p3.y*p3.z)+3*c_1*
        (c_232+6*p2.y*p3.y*c_35+c_233+4*p1.z*c_28+2*c_29+c_234+60*c_27*p3.z+c_235+c_155+24*p1.z*c_31+c_98+c_126+c_4*c_207+c_6*
        c_65)+p1.y*(3*c_25*(c_0+c_110+c_2)+9*c_6*p3.y*c_111+c_23*(c_93+16*p2.z+c_12)+3*c_72*(3*p3.y*c_15+p2.y*(c_211+c_38+p3.z))+6*p3.y*
        (c_236+c_120-6*c_27*p3.z+c_237+4*p2.z*c_31+c_82+3*p1.z*c_238)+p2.y*(3*c_4*c_239-2*c_283))))-p2.x*(6*c_150*c_6*p1.z+12*
        c_72*c_24*p1.z+25*c_54*p1.z+9*c_150*p2.y*p3.y*p1.z+15*c_72*c_23*p3.y*p1.z+c_241-15*c_150*c_4*p1.z+9*c_72*c_6*c_4*p1.z+c_242-6*
        c_72*p2.y*c_25*p1.z+c_243-30*c_72*c_26*p1.z+c_244+c_245-15*c_55*p1.z-12*c_72*c_6*c_45-18*c_24*c_45-6*c_72*p2.y*p3.y*
        c_45+c_246+18*c_72*c_4*c_45+c_247+c_248+18*c_26*c_45+8*c_6*c_46+c_249-24*c_4*c_46+3*c_150*c_6*p2.z+15*c_72*c_24*p2.z+16*c_72*
        c_23*p3.y*p2.z-10*c_150*c_4*p2.z+9*c_72*c_6*c_4*p2.z-5*c_72*c_26*p2.z-36*c_72*c_6*c_27*p2.z-90*c_24*c_27*p2.z-12*c_72*p2.y*
        p3.y*c_27*p2.z+72*c_23*p3.y*c_27*p2.z+18*c_72*c_4*c_27*p2.z+54*c_6*c_4*c_27*p2.z+36*p2.y*c_25*c_27*p2.z+c_250+24*c_6*
        c_50*p2.z-48*p2.y*p3.y*c_50*p2.z+c_251-72*c_72*c_6*p1.z*c_28-270*c_24*p1.z*c_28-18*c_72*p2.y*p3.y*p1.z*c_28+180*c_23*
        p3.y*p1.z*c_28+18*c_72*c_4*p1.z*c_28+108*c_6*c_4*p1.z*c_28+54*p2.y*c_25*p1.z*c_28+c_252+48*c_6*c_45*c_28-72*p2.y*p3.y*c_45*
        c_28+c_253+20*c_72*c_6*c_29+16*c_72*p2.y*p3.y*c_29-240*c_23*p3.y*c_29+6*c_72*c_4*c_29-120*c_6*c_4*c_29-48*p2.y*c_25*c_29-12*
        c_26*c_29+80*c_6*c_27*c_29-96*p2.y*p3.y*c_27*c_29+c_254+120*c_6*p1.z*c_51-120*p2.y*p3.y*p1.z*c_51+c_255+192*p2.y*p3.y*
        c_52+32*c_4*c_52+7*c_150*c_6*p3.z+5*c_72*c_24*p3.z-25*c_54*p3.z+15*c_150*p2.y*p3.y*p3.z+9*c_72*c_23*p3.y*p3.z-25*c_48*
        p3.y*p3.z-15*c_150*c_4*p3.z+6*c_72*c_6*c_4*p3.z-25*c_24*c_4*p3.z-10*c_72*p2.y*c_25*p3.z-25*c_23*c_25*p3.z-45*c_72*c_26*
        p3.z-25*c_6*c_26*p3.z-25*p2.y*c_49*p3.z+c_256-24*c_72*c_6*c_27*p3.z-18*c_72*p2.y*p3.y*c_27*p3.z+18*c_23*p3.y*c_27*p3.z+72*
        c_72*c_4*c_27*p3.z+36*c_6*c_4*c_27*p3.z+54*p2.y*c_25*c_27*p3.z+72*c_26*c_27*p3.z-24*p2.y*p3.y*c_50*p3.z-48*c_4*c_50*
        p3.z-72*c_72*c_6*p1.z*p2.z*p3.z-36*c_72*p2.y*p3.y*p1.z*p2.z*p3.z+72*c_23*p3.y*p1.z*p2.z*p3.z+72*c_72*c_4*p1.z*p2.z*
        p3.z+c_257+108*p2.y*c_25*p1.z*p2.z*p3.z+c_258+c_259+c_260+12*c_72*c_6*c_28*p3.z+270*c_24*c_28*p3.z+18*c_72*p2.y*p3.y*
        c_28*p3.z+60*c_23*p3.y*c_28*p3.z+12*c_72*c_4*c_28*p3.z-36*c_6*c_4*c_28*p3.z-54*p2.y*c_25*c_28*p3.z-30*c_26*c_28*p3.z-72*
        p2.y*p3.y*c_27*c_28*p3.z+c_261-96*p2.y*p3.y*p1.z*c_29*p3.z+c_262-120*c_6*c_51*p3.z+120*p2.y*p3.y*c_51*p3.z+56*c_4*c_51*
        p3.z-36*c_72*c_6*p1.z*c_31-36*c_72*p2.y*p3.y*p1.z*c_31+18*c_23*p3.y*p1.z*c_31+180*c_72*c_4*p1.z*c_31+54*c_6*c_4*p1.z*
        c_31+108*p2.y*c_25*p1.z*c_31+180*c_26*p1.z*c_31-24*p2.y*p3.y*c_45*c_31-72*c_4*c_45*c_31+90*c_24*p2.z*c_31+96*c_23*p3.y*
        p2.z*c_31+54*c_6*c_4*p2.z*c_31-30*c_26*p2.z*c_31-48*p2.y*p3.y*c_27*p2.z*c_31+c_263+c_264+c_265-80*c_6*c_29*c_31+64*p2.y*p3.y*
        c_29*c_31+72*c_4*c_29*c_31-4*c_72*c_6*c_32+18*c_24*c_32-20*c_72*p2.y*p3.y*c_32+42*c_23*p3.y*c_32-60*c_72*c_4*c_32+60*c_6*
        c_4*c_32+60*p2.y*c_25*c_32+c_266-24*p2.y*p3.y*c_27*c_32-96*c_4*c_27*c_32-48*p2.y*p3.y*p1.z*p2.z*c_32+c_267-48*c_6*c_28*
        c_32+c_268+80*c_4*c_28*c_32-24*p2.y*p3.y*p1.z*c_56-120*c_4*p1.z*c_56-24*c_6*p2.z*c_56+80*c_4*p2.z*c_56-8*c_6*c_57-8*p2.y*
        p3.y*c_57+c_269+5*c_53*c_270+5*c_47*(c_20-3*p3.y*p1.z+c_231+3*p3.y*p3.z)+c_30*(-15*p2.y*p3.y*c_15+5*c_6*c_270-3*(c_157+c_72*
        p2.z-4*c_29-10*c_27*c_272+c_278-c_72*p3.z+c_155+c_98+c_126+p1.z*(c_273+c_293+24*c_31)))+c_22*(-15*c_6*p3.y*c_15+5*c_23*
        c_270+3*c_72*(c_276+c_290)+3*p3.y*c_15*(c_159+6*(c_277+c_175+c_28+8*p1.z*p3.z+c_156+c_114))-3*p2.y*(c_278+2*c_283))+c_1*(-15*c_26*
        p1.z+108*c_4*c_45-72*c_46+54*c_4*c_27*p2.z-80*c_50*p2.z+c_222-80*c_45*c_28-72*c_27*c_29-56*p1.z*c_51-32*c_52-15*c_23*p3.y*
        c_15-3*c_150*c_3+c_284+54*c_4*c_27*p3.z+120*c_50*p3.z+96*c_45*p2.z*p3.z-18*c_4*c_28*p3.z+72*c_27*c_28*p3.z+48*p1.z*c_29*
        p3.z+24*c_51*p3.z-54*c_4*p1.z*c_31+96*c_45*c_31-54*c_4*p2.z*c_31+72*c_27*p2.z*c_31+48*p1.z*c_28*c_31+24*c_29*c_31-108*c_4*
        c_32+72*c_27*c_32+48*p1.z*p2.z*c_32+24*c_28*c_32+48*p1.z*c_56+24*p2.z*c_56+24*c_57+5*c_24*c_270+3*c_72*(-3*c_4*c_14+c_6*
        c_81+p2.y*p3.y*c_285+2*c_3*c_188)+3*p2.y*p3.y*c_15*c_287-3*c_6*(c_278+2*(c_157-20*c_29+c_288+c_125+c_82+c_289-6*p1.z*(c_28-3*
        p2.z*p3.z+c_158))))+p1.y*(-15*c_24*p3.y*c_15+5*c_48*c_270+3*c_150*(-(p3.y*(p1.z+c_10+c_89))+c_290)+3*c_6*p3.y*c_15*c_292-3*
        c_23*(14*c_45-80*c_29+c_278+60*c_28*p3.z+24*p2.z*c_31+c_126+c_27*(32*p2.z+c_41)+p1.z*(20*c_28+c_293+c_167))+3*c_72*(c_23*
        c_239+3*c_6*p3.y*c_111+2*p3.y*(c_124+c_120+c_100-30*c_32+c_27*(c_10+c_8)+c_4*(c_211+c_110+c_68)+p1.z*(5*c_28+c_113-6*c_31))-2*
        p2.y*(c_124-12*c_29+3*c_4*c_3-9*c_28*p3.z+c_126+c_27*(c_38+c_68)+p1.z*(c_300+c_156+c_167)))-3*p3.y*c_15*(c_294-6*c_4*
        (c_112+c_28+c_139+c_170+2*p1.z*c_168)+8*(c_295+c_51+c_296+c_189+c_297+5*c_56+4*c_45*c_174+3*c_27*c_298+2*p1.z*(c_29+2*c_28*p3.z+c_299+4*
        c_32)))+p2.y*(-15*c_26*c_15+18*c_4*c_15*c_188+8*(c_46+3*c_50*p3.z+c_45*(c_300+c_113+c_114)+c_27*(-8*c_29+c_100+c_98+c_82)+3*
        p1.z*(-5*c_51+c_301+c_189+c_302+c_56)+3*(-8*c_52+5*c_51*p3.z+4*c_29*c_31+3*c_28*c_32+2*p2.z*c_56+c_57))))))/double(40320);
}

double trig::s52() const{
    double p12_2=p1.z*p1.z;
    double p12_3=p1.z*p12_2;
    double p12_4=p1.z*p12_3;
    double p22_2=p2.z*p2.z;
    double p22_3=p2.z*p22_2;
    double p22_4=p2.z*p22_3;
    double p32_2=p3.z*p3.z;
    double p32_3=p3.z*p32_2;
    double p32_4=p3.z*p32_3;
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
    double p20_2=p2.x*p2.x;
    double p20_3=p2.x*p20_2;
    double p20_4=p2.x*p20_3;
    double p10_2=p1.x*p1.x;
    double p10_3=p1.x*p10_2;
    double p10_4=p1.x*p10_3;
    double c_0=p12_2;
    double c_1=p22_2;
    double c_2=p32_2;
    double c_3=-(3*c_2);
    double c_4=2*p2.z;
    double c_5=3*c_0;
    double c_6=5*p2.z;
    double c_7=p21_2;
    double c_8=-p3.z;
    double c_9=c_6+p3.z;
    double c_10=p31_2;
    double c_11=c_4+p3.z;
    double c_12=6*p1.z*c_11;
    double c_13=2*p3.z;
    double c_14=c_6+c_13;
    double c_15=p11_2;
    double c_16=3*c_2;
    double c_17=3*p3.z;
    double c_18=p1.z+c_8;
    double c_19=p1.z+c_4+p3.z;
    double c_20=p2.z+c_8;
    double c_21=6*p2.z;
    double c_22=5*c_0;
    double c_23=p12_4;
    double c_24=p11_3;
    double c_25=p21_3;
    double c_26=p31_3;
    double c_27=p12_3;
    double c_28=p11_4;
    double c_29=p21_4;
    double c_30=p31_4;
    double c_31=p22_3;
    double c_32=p22_4;
    double c_33=p32_3;
    double c_34=p32_4;
    double c_35=2*p1.z;
    double c_36=c_35+p2.z+p3.z;
    double c_37=3*p1.z;
    double c_38=p2.z+p3.z;
    double c_39=6*c_0;
    double c_40=-c_1;
    double c_41=-(2*p2.z*p3.z);
    double c_42=-p2.z;
    double c_43=p1.z+c_42;
    double c_44=3*p2.z;
    double c_45=c_37+c_44+c_13;
    double c_46=-(6*c_1);
    double c_47=2*p1.z*p3.z;
    double c_48=p2.z+c_17;
    double c_49=4*p2.z;
    double c_50=6*p3.z;
    double c_51=-6*c_0;
    double c_52=3*c_1;
    double c_53=2*p2.z*p3.z;
    double c_54=c_51+c_52+c_53+c_2;
    double c_55=c_37+c_4+c_17;
    double c_56=2*p1.z*p2.z;
    double c_57=-(6*c_2);
    double c_58=(c_38*c_38);
    double c_59=3*c_58;
    double c_60=4*p3.z;
    double c_61=c_44+p3.z;
    double c_62=10*c_0;
    double c_63=6*p2.z*p3.z;
    double c_64=2*c_0;
    double c_65=4*c_0;
    double c_66=2*c_1;
    double c_67=3*p2.z*p3.z;
    double c_68=-(3*c_1);
    double c_69=p30_2;
    double c_70=9*c_7*c_10*c_1;
    double c_71=-(18*c_7*c_0*c_1);
    double c_72=18*c_7*c_1*c_2;
    double c_73=c_21+p3.z;
    double c_74=2*p1.z*c_73;
    double c_75=p2.z+c_13;
    double c_76=3*p2.z*c_75;
    double c_77=c_22+c_74+c_76;
    double c_78=3*p1.z*c_61;
    double c_79=3*p2.z*c_48;
    double c_80=c_65+c_78+c_79;
    double c_81=p2.z+c_60;
    double c_82=3*p2.z*c_81;
    double c_83=c_21+c_60;
    double c_84=p1.z*c_83;
    double c_85=c_5+c_82+c_84;
    double c_86=3*c_38;
    double c_87=c_35+c_86;
    double c_88=6*c_2;
    double c_89=5*p3.z;
    double c_90=p1.z+p2.z+c_13;
    double c_91=6*p2.y*c_26*p1.z*p2.z;
    double c_92=6*c_30*p1.z*p2.z;
    double c_93=-(6*c_29*p1.z*p3.z);
    double c_94=-(6*c_25*p3.y*p1.z*p3.z);
    double c_95=36*c_7*p1.z*c_1*p3.z;
    double c_96=-(36*c_10*p1.z*p2.z*c_2);
    double c_97=2*p1.z*c_20;
    double c_98=c_64+c_1+c_97+c_3;
    double c_99=-(2*p1.z*p2.z);
    double c_100=c_64+c_99+c_68+c_47+c_2;
    double c_101=9*p1.z*c_38;
    double c_102=p2.z+c_89;
    double c_103=4*p2.z*p3.z;
    double c_104=2*c_2;
    double c_105=c_5+c_56+c_1+c_57;
    double c_106=c_5+c_46+c_47+c_2;
    double c_107=-(p2.y*p3.y*c_20*c_87);
    double c_108=-(10*c_1);
    double c_109=-(10*c_2);
    double c_110=-(5*c_34);
    double c_111=c_27*c_38;
    double c_112=p20_2;
    double c_113=-(9*c_7*c_10*c_2);
    double c_114=18*c_10*c_0*c_2;
    double c_115=-(18*c_10*c_1*c_2);
    double c_116=3*p3.z*c_11;
    double c_117=p2.z+c_50;
    double c_118=2*p1.z*c_117;
    double c_119=c_22+c_116+c_118;
    double c_120=3*p3.z*c_61;
    double c_121=3*p1.z*c_48;
    double c_122=c_65+c_120+c_121;
    double c_123=-(6*c_69*p1.z*p2.z);
    double c_124=18*c_0*c_1;
    double c_125=-(18*c_0*c_2);
    double c_126=c_49+p3.z;
    double c_127=3*p3.z*c_126;
    double c_128=c_49+c_50;
    double c_129=p1.z*c_128;
    double c_130=c_5+c_127+c_129;
    double c_131=c_0+c_56+c_52+c_57;
    double c_132=c_0+c_46+c_47+c_16;
    double c_133=4*c_27;
    double c_134=4*c_31;
    double c_135=6*c_1*p3.z;
    double c_136=6*p2.z*c_2;
    double c_137=4*c_33;
    double c_138=6*c_0*c_38;
    double c_139=6*c_1;
    double c_140=8*p2.z*p3.z;
    double c_141=c_139+c_140+c_88;
    double c_142=p1.z*c_141;
    double c_143=-(3*c_27*c_20);
    double c_144=6*c_1*c_2;
    double c_145=p20_3;
    double c_146=2*p1.z*c_11;
    double c_147=c_5+c_108+c_2+c_146;
    double c_148=9*p2.z*p3.z;
    double c_149=3*p3.z*c_9;
    double c_150=c_6+c_17;
    double c_151=p1.z*c_150;
    double c_152=c_64+c_149+c_151;
    double c_153=-3*c_0;
    double c_154=10*c_1;
    double c_155=12*p2.z*p3.z;
    double c_156=3*c_69*c_7*c_0;
    double c_157=3*c_29*c_0;
    double c_158=3*p2.y*c_26*c_0;
    double c_159=-(12*p2.y*p3.y*c_23);
    double c_160=6*c_25*p3.y*p1.z*p2.z;
    double c_161=6*c_7*c_10*p1.z*p2.z;
    double c_162=-(12*p2.y*p3.y*c_27*p2.z);
    double c_163=-(6*c_10*c_27*p2.z);
    double c_164=-(12*p2.y*p3.y*c_0*c_1);
    double c_165=-(6*c_10*c_0*c_1);
    double c_166=-(12*p2.y*p3.y*p1.z*c_31);
    double c_167=-(6*c_10*p1.z*c_31);
    double c_168=-(6*c_10*c_32);
    double c_169=-(6*c_25*p3.y*p2.z*p3.z);
    double c_170=30*c_30*p2.z*p3.z;
    double c_171=-(18*c_10*c_0*p2.z*p3.z);
    double c_172=-(12*p2.y*p3.y*p1.z*c_1*p3.z);
    double c_173=-(18*c_10*p1.z*c_1*p3.z);
    double c_174=-(12*p2.y*p3.y*c_31*p3.z);
    double c_175=-(3*c_29*c_2);
    double c_176=15*c_30*c_2;
    double c_177=6*c_7*p1.z*c_33;
    double c_178=60*p2.y*p3.y*c_34;
    double c_179=30*c_10*c_34;
    double c_180=-15*c_0;
    double c_181=-(30*p1.z*p2.z);
    double c_182=-(6*p2.z*p3.z);
    double c_183=c_180+c_181+c_46+c_182+c_2;
    double c_184=-(3*c_69*c_1);
    double c_185=6*c_32;
    double c_186=36*c_0*p2.z*p3.z;
    double c_187=c_39+c_40+c_41+c_3;
    double c_188=-c_2;
    double c_189=12*p1.z*p2.z;
    double c_190=c_62+c_189+c_52+c_63+c_3;
    double c_191=p3.y*c_190;
    double c_192=10*c_2;
    double c_193=6*p1.z*p2.z;
    double c_194=-(6*p1.z*p2.z);
    double c_195=9*c_0;
    double c_196=6*p1.z*p3.z;
    double c_197=c_10*c_105;
    double c_198=c_31*p3.z;
    double c_199=p2.z*c_33;
    double c_200=c_1*p3.z;
    double c_201=p2.z*c_2;
    double c_202=-(3*c_25*p3.y*c_0);
    double c_203=-(9*c_69*c_10*c_0);
    double c_204=-(3*c_30*c_0);
    double c_205=12*p2.y*p3.y*c_23;
    double c_206=6*c_69*p2.y*p3.y*p1.z*p2.z;
    double c_207=-(15*c_29*c_1);
    double c_208=9*p2.y*c_26*c_1;
    double c_209=3*c_30*c_1;
    double c_210=-(30*c_7*c_32);
    double c_211=-(60*p2.y*p3.y*c_32);
    double c_212=3*c_69*c_7*p1.z*p3.z;
    double c_213=-(6*c_7*c_10*p1.z*p3.z);
    double c_214=-(6*p2.y*c_26*p1.z*p3.z);
    double c_215=6*c_7*c_27*p3.z;
    double c_216=12*p2.y*p3.y*c_27*p3.z;
    double c_217=-(30*c_29*p2.z*p3.z);
    double c_218=6*p2.y*c_26*p2.z*p3.z;
    double c_219=18*c_7*c_0*p2.z*p3.z;
    double c_220=-(18*c_10*c_31*p3.z);
    double c_221=-(9*c_25*p3.y*c_2);
    double c_222=6*c_7*c_0*c_2;
    double c_223=12*p2.y*p3.y*c_0*c_2;
    double c_224=18*c_7*p1.z*p2.z*c_2;
    double c_225=12*p2.y*p3.y*p1.z*p2.z*c_2;
    double c_226=12*p2.y*p3.y*p1.z*c_33;
    double c_227=18*c_7*p2.z*c_33;
    double c_228=12*p2.y*p3.y*p2.z*c_33;
    double c_229=6*c_7*c_34;
    double c_230=15*c_0;
    double c_231=30*p1.z*p3.z;
    double c_232=c_230+c_40+c_231+c_63+c_88;
    double c_233=-(9*c_69*p1.z*p2.z);
    double c_234=c_0+c_40;
    double c_235=-(36*c_0*p2.z*p3.z);
    double c_236=9*c_69*c_2;
    double c_237=-(6*c_34);
    double c_238=c_51+c_1+c_53+c_16;
    double c_239=-10*c_0;
    double c_240=12*p1.z*p3.z;
    double c_241=c_62+c_68+c_240+c_63+c_16;
    double c_242=-(6*p1.z*p3.z);
    double c_243=-(12*p2.z*p3.z);
    double c_244=-(2*c_2);
    double c_245=-5*c_23;
    double c_246=c_1*c_2;
    double c_247=-(2*c_27*c_38);
    double c_248=c_31+c_200+c_201+c_33;
    double c_249=p1.z*c_248;
    double c_250=c_245+c_32+c_198+c_246+c_199+c_34+c_247+c_249;
    double c_251=4*c_250;
    return (-2*c_145*p3.x*(3*c_15*c_20*c_19+3*p1.y*p3.y*(c_0+c_56+c_66+c_41+c_3)-3*p1.y*p2.y*(c_0+c_108+c_47+c_103+c_16)+p2.y*
        p3.y*(c_5+c_154+c_3+c_12)-2*c_7*(c_5+3*p1.z*c_9+p3.z*c_14)+c_10*(c_5+c_101+p2.z*(c_49+c_17)))+p20_4*(-5*c_7*c_18*
        (p1.z+c_21+p3.z)-2*p2.y*p3.y*(c_39+15*c_1+c_188+6*p1.z*c_9)-c_10*(c_5+c_12+p2.z*c_14)+c_15*(5*c_1+c_155+c_16+2*p1.z*c_48)-2*p1.y*
        (3*p3.y*c_18*c_19+p2.y*(c_0-15*c_1+c_242-30*p2.z*p3.z+c_57)))+p10_4*(6*p2.y*p3.y*c_20*c_36+5*c_15*c_20*(6*p1.z+p2.z+p3.z)+c_10*
        c_77-c_7*c_119-2*p1.y*(p3.y*c_183+p2.y*c_232))+p10_2*(-60*p1.y*p2.y*c_23-10*c_7*c_23+60*p1.y*p3.y*c_23+10*c_10*
        c_23-30*c_28*p1.z*p2.z-20*c_24*p2.y*p1.z*p2.z-12*c_15*c_7*p1.z*p2.z-6*p1.y*c_25*p1.z*p2.z-2*c_29*p1.z*p2.z+60*c_24*
        p3.y*p1.z*p2.z+36*c_15*p2.y*p3.y*p1.z*p2.z+18*p1.y*c_7*p3.y*p1.z*p2.z+c_160+36*c_15*c_10*p1.z*p2.z+18*p1.y*p2.y*
        c_10*p1.z*p2.z+c_161+18*p1.y*c_26*p1.z*p2.z+c_91+c_92-40*p1.y*p2.y*c_27*p2.z-16*c_7*c_27*p2.z-120*p1.y*p3.y*c_27*p2.z-24*
        p2.y*p3.y*c_27*p2.z-24*c_10*c_27*p2.z-5*c_28*c_1-8*c_24*p2.y*c_1-9*c_15*c_7*c_1-8*p1.y*c_25*c_1-5*c_29*c_1+12*c_24*
        p3.y*c_1+18*c_15*p2.y*p3.y*c_1+18*p1.y*c_7*p3.y*c_1+12*c_25*p3.y*c_1+9*c_15*c_10*c_1+12*p1.y*p2.y*c_10*c_1+c_70+6*p1.y*
        c_26*c_1+6*p2.y*c_26*c_1+c_209-24*p1.y*p2.y*c_0*c_1+c_71-72*p1.y*p3.y*c_0*c_1-36*p2.y*p3.y*c_0*c_1-18*c_10*c_0*c_1-12*p1.y*
        p2.y*p1.z*c_31-16*c_7*p1.z*c_31-36*p1.y*p3.y*p1.z*c_31-36*p2.y*p3.y*p1.z*c_31-12*c_10*p1.z*c_31-4*p1.y*p2.y*c_32-10*
        c_7*c_32-12*p1.y*p3.y*c_32-24*p2.y*p3.y*c_32+c_168+30*c_28*p1.z*p3.z-60*c_24*p2.y*p1.z*p3.z-36*c_15*c_7*p1.z*p3.z-18*
        p1.y*c_25*p1.z*p3.z+c_93+20*c_24*p3.y*p1.z*p3.z-36*c_15*p2.y*p3.y*p1.z*p3.z-18*p1.y*c_7*p3.y*p1.z*p3.z+c_94+12*
        c_15*c_10*p1.z*p3.z-18*p1.y*p2.y*c_10*p1.z*p3.z+c_213+6*p1.y*c_26*p1.z*p3.z+c_214+2*c_30*p1.z*p3.z+120*p1.y*p2.y*
        c_27*p3.z+24*c_7*c_27*p3.z+40*p1.y*p3.y*c_27*p3.z+24*p2.y*p3.y*c_27*p3.z+16*c_10*c_27*p3.z-12*c_24*p2.y*p2.z*p3.z-18*
        c_15*c_7*p2.z*p3.z-18*p1.y*c_25*p2.z*p3.z-12*c_29*p2.z*p3.z+12*c_24*p3.y*p2.z*p3.z-6*p1.y*c_7*p3.y*p2.z*p3.z+c_169+18*
        c_15*c_10*p2.z*p3.z+6*p1.y*p2.y*c_10*p2.z*p3.z+18*p1.y*c_26*p2.z*p3.z+c_218+12*c_30*p2.z*p3.z+72*p1.y*p2.y*
        c_0*p2.z*p3.z+36*c_7*c_0*p2.z*p3.z-72*p1.y*p3.y*c_0*p2.z*p3.z-36*c_10*c_0*p2.z*p3.z+36*p1.y*p2.y*p1.z*c_1*p3.z+c_95-36*
        p1.y*p3.y*p1.z*c_1*p3.z+c_172-24*c_10*p1.z*c_1*p3.z+12*p1.y*p2.y*c_31*p3.z+24*c_7*c_31*p3.z-12*p1.y*p3.y*c_31*
        p3.z+c_174-12*c_10*c_31*p3.z+5*c_28*c_2-12*c_24*p2.y*c_2-9*c_15*c_7*c_2-6*p1.y*c_25*c_2+c_175+8*c_24*p3.y*c_2-18*c_15*p2.y*
        p3.y*c_2-12*p1.y*c_7*p3.y*c_2-6*c_25*p3.y*c_2+9*c_15*c_10*c_2-18*p1.y*p2.y*c_10*c_2+c_113+8*p1.y*c_26*c_2-12*p2.y*c_26*
        c_2+5*c_30*c_2+72*p1.y*p2.y*c_0*c_2+18*c_7*c_0*c_2+24*p1.y*p3.y*c_0*c_2+36*p2.y*p3.y*c_0*c_2+c_114+36*p1.y*p2.y*p1.z*
        p2.z*c_2+24*c_7*p1.z*p2.z*c_2-36*p1.y*p3.y*p1.z*p2.z*c_2+c_225+c_96+12*p1.y*p2.y*c_1*c_2+c_72-12*p1.y*p3.y*c_1*
        c_2+c_115+36*p1.y*p2.y*p1.z*c_33+12*c_7*p1.z*c_33+12*p1.y*p3.y*p1.z*c_33+36*p2.y*p3.y*p1.z*c_33+16*c_10*p1.z*c_33+12*p1.y*
        p2.y*p2.z*c_33+12*c_7*p2.z*c_33-12*p1.y*p3.y*p2.z*c_33+c_228-24*c_10*p2.z*c_33+12*p1.y*p2.y*c_34+c_229+4*p1.y*p3.y*
        c_34+24*p2.y*p3.y*c_34+10*c_10*c_34-6*p2.x*p3.x*(3*c_15*c_20*c_36-c_7*c_18*c_45+c_10*c_43*c_55+c_107+p1.y*(p3.y*c_187+p2.y*
        c_54))+3*c_112*(-(c_10*c_43*c_45)-2*p2.y*p3.y*c_106+c_15*(c_59+4*p1.z*c_48)-c_7*c_130+p1.y*(-4*p2.y*c_234+2*p3.y*c_54))-3*
        c_69*(-(c_7*c_18*c_55)-2*p2.y*p3.y*c_105+c_15*(c_59+4*p1.z*c_61)-c_10*c_85+p1.y*(4*p3.y*(-c_0+c_2)+2*p2.y*c_238)))+2*
        p10_3*(p3.x*(3*c_7*c_18*c_36+3*p2.y*p3.y*c_98-2*c_15*(c_52+c_67+c_104+5*p1.z*c_61)+c_10*c_80+p1.y*(3*p2.y*(c_62+c_40-4*p1.z*
        p3.z+c_41+c_3)+c_191))+p2.x*(-3*c_10*c_43*c_36-3*p2.y*p3.y*c_100-c_7*c_122+2*c_15*(c_66+c_67+c_16+5*p1.z*c_48)+p1.y*(3*
        p3.y*(c_239+4*p1.z*p2.z+c_52+c_53+c_2)-p2.y*c_241)))+c_69*(c_156+c_157+12*c_69*p2.y*p3.y*c_0+6*c_25*p3.y*c_0+5*c_69*c_10*
        c_0+9*c_7*c_10*c_0+12*p2.y*c_26*c_0-5*c_30*c_0-6*c_7*c_23+c_159+6*c_69*c_7*p1.z*p2.z+12*c_29*p1.z*p2.z+12*c_69*p2.y*p3.y*
        p1.z*p2.z+18*c_25*p3.y*p1.z*p2.z+18*c_7*c_10*p1.z*p2.z+12*p2.y*c_26*p1.z*p2.z-12*c_7*c_27*p2.z+c_162+5*c_29*c_1-2*
        c_69*p2.y*p3.y*c_1+8*c_25*p3.y*c_1-5*c_69*c_10*c_1+c_70+8*p2.y*c_26*c_1+5*c_30*c_1+c_71+c_164-24*c_7*p1.z*c_31+c_166+10*c_7*
        c_32+4*p2.y*p3.y*c_32+12*c_69*c_7*p1.z*p3.z+6*c_29*p1.z*p3.z+60*c_69*p2.y*p3.y*p1.z*p3.z+18*c_25*p3.y*p1.z*p3.z+30*
        c_69*c_10*p1.z*p3.z+36*c_7*c_10*p1.z*p3.z+60*p2.y*c_26*p1.z*p3.z-30*c_30*p1.z*p3.z-12*c_7*c_27*p3.z-36*p2.y*p3.y*
        c_27*p3.z+2*c_69*c_7*p2.z*p3.z+2*c_29*p2.z*p3.z+6*c_25*p3.y*p2.z*p3.z-30*c_69*c_10*p2.z*p3.z+12*c_7*c_10*p2.z*p3.z+20*
        p2.y*c_26*p2.z*p3.z+c_170-24*c_7*c_0*p2.z*p3.z-36*p2.y*p3.y*c_0*p2.z*p3.z-36*c_7*p1.z*c_1*p3.z-36*p2.y*p3.y*p1.z*
        c_1*p3.z+16*c_7*c_31*p3.z+12*p2.y*p3.y*c_31*p3.z+5*c_69*c_7*c_2+30*c_69*p2.y*p3.y*c_2-18*c_7*c_0*c_2-72*p2.y*p3.y*c_0*
        c_2-36*c_7*p1.z*p2.z*c_2-72*p2.y*p3.y*p1.z*p2.z*c_2+c_72+24*p2.y*p3.y*c_1*c_2-24*c_7*p1.z*c_33-120*p2.y*p3.y*p1.z*
        c_33+16*c_7*p2.z*c_33+40*p2.y*p3.y*p2.z*c_33+10*c_7*c_34+c_178-c_28*c_77+2*c_24*(3*p2.y*c_43*c_36-p3.y*c_80)+c_15*(-10*
        c_23+c_123+24*c_27*p2.z+c_184+c_124+12*p1.z*c_31+c_185-2*c_69*p1.z*p3.z-16*c_27*p3.z-12*c_69*p2.z*p3.z+c_186+24*p1.z*c_1*
        p3.z+12*c_31*p3.z-5*c_69*c_2+c_125+36*p1.z*p2.z*c_2+18*c_1*c_2-16*p1.z*c_33+24*p2.z*c_33-10*c_34+3*c_7*c_43*c_45+6*p2.y*
        p3.y*c_43*c_55-3*c_10*c_85)+2*p1.y*(3*c_25*c_43*c_19+3*c_7*p3.y*c_43*c_87-3*p2.y*c_43*(c_133+c_134+c_135+c_136+c_137+c_138-3*
        c_10*c_90+c_142)-2*p3.y*(c_23+c_143-3*c_0*(c_1+c_67+c_244)-p1.z*(3*c_31+9*c_1*p3.z+18*p2.z*c_2-10*c_33)-3*(c_32+3*c_31*
        p3.z+c_144+10*p2.z*c_33+c_110)+c_10*(c_64+3*p2.z*c_102+p1.z*(c_44+c_89)))+c_69*(3*p2.y*c_43*c_90+p3.y*(c_0+c_194-3*(c_66+10*
        p2.z*p3.z+5*c_2)))))-2*p2.x*p3.x*(-6*c_29*c_0+c_202+c_158+6*c_30*c_0+6*c_7*c_23-6*c_10*c_23-30*c_29*p1.z*p2.z-12*c_25*p3.y*
        p1.z*p2.z+c_91+c_92+18*c_7*c_27*p2.z+c_163+c_207-10*c_25*p3.y*c_1-6*c_7*c_10*c_1-3*p2.y*c_26*c_1-c_30*c_1+36*c_7*c_0*
        c_1+c_165+60*c_7*p1.z*c_31+c_167+c_210+2*c_10*c_32+c_93+c_94+12*p2.y*c_26*p1.z*p3.z+30*c_30*p1.z*p3.z+c_215-18*c_10*c_27*
        p3.z+c_219+c_171+c_95+c_173-20*c_7*c_31*p3.z+6*c_10*c_31*p3.z+c_29*c_2+3*c_25*p3.y*c_2+6*c_7*c_10*c_2+10*p2.y*c_26*c_2+c_176+c_222-36*
        c_10*c_0*c_2+c_224+c_96-12*c_7*c_1*c_2+12*c_10*c_1*c_2+c_177-60*c_10*p1.z*c_33-6*c_7*p2.z*c_33+20*c_10*p2.z*c_33-2*
        c_7*c_34+c_179+3*c_28*c_20*c_36+c_24*(3*p3.y*c_98-3*p2.y*c_100)+c_69*(3*c_15*c_20*c_90-p2.y*p3.y*(c_5+c_68+c_192+6*p1.z*
        c_75)-c_7*(c_5+c_101+p3.z*(c_44+c_60))+2*c_10*(c_5+3*p1.z*c_102+p2.z*(c_4+c_89))+p1.y*(3*p3.y*(c_0+c_56+c_52+c_103+c_109)-3*
        p2.y*(c_0+c_68+c_47+c_41+c_104)))-3*c_15*(-c_197+c_7*c_106+c_107+2*c_20*(2*c_27+2*c_31+3*c_1*p3.z+3*p2.z*c_2+2*c_33+3*c_0*
        c_38+p1.z*(c_52+c_103+c_16)))-3*p1.y*(c_7*p3.y*c_132+c_25*c_147-c_26*(c_5+c_1+c_109+2*p1.z*c_75)+4*p3.y*(c_23+c_32+c_198-2*p2.z*
        c_33+c_110+c_111+c_0*p2.z*c_38+p1.z*(c_31+c_200-2*c_33))-p2.y*(c_10*c_131+4*(c_23-5*c_32-2*c_31*p3.z+c_199+c_34+c_111+c_0*
        p3.z*c_38+p1.z*(-2*c_31+c_201+c_33)))))+c_112*(9*c_69*c_7*c_0+5*c_29*c_0-12*c_25*p3.y*c_0+c_203-9*c_7*c_10*c_0-6*p2.y*c_26*
        c_0+c_204+c_205+6*c_10*c_23+36*c_69*c_7*p1.z*p2.z+30*c_29*p1.z*p2.z-60*c_25*p3.y*p1.z*p2.z-18*c_69*c_10*p1.z*p2.z-36*
        c_7*c_10*p1.z*p2.z-18*p2.y*c_26*p1.z*p2.z-6*c_30*p1.z*p2.z+36*p2.y*p3.y*c_27*p2.z+12*c_10*c_27*p2.z-12*c_69*p2.y*
        p3.y*c_1-9*c_69*c_10*c_1+72*p2.y*p3.y*c_0*c_1+18*c_10*c_0*c_1+120*p2.y*p3.y*p1.z*c_31+24*c_10*p1.z*c_31+c_211-10*c_10*c_32+18*
        c_69*c_7*p1.z*p3.z-12*c_25*p3.y*p1.z*p3.z-36*c_69*c_10*p1.z*p3.z-18*c_7*c_10*p1.z*p3.z-18*p2.y*c_26*p1.z*p3.z-12*
        c_30*p1.z*p3.z+c_216+12*c_10*c_27*p3.z+12*c_69*c_7*p2.z*p3.z+c_217-20*c_25*p3.y*p2.z*p3.z-12*c_69*c_10*p2.z*p3.z-12*
        c_7*c_10*p2.z*p3.z-6*p2.y*c_26*p2.z*p3.z-2*c_30*p2.z*p3.z+36*p2.y*p3.y*c_0*p2.z*p3.z+24*c_10*c_0*p2.z*p3.z+72*p2.y*
        p3.y*p1.z*c_1*p3.z+36*c_10*p1.z*c_1*p3.z-40*p2.y*p3.y*c_31*p3.z-16*c_10*c_31*p3.z+9*c_69*c_7*c_2-5*c_29*c_2+12*c_69*
        p2.y*p3.y*c_2-8*c_25*p3.y*c_2+c_113-8*p2.y*c_26*c_2-5*c_30*c_2+c_223+c_114+36*p2.y*p3.y*p1.z*p2.z*c_2+36*c_10*p1.z*p2.z*
        c_2-24*p2.y*p3.y*c_1*c_2+c_115+c_226+24*c_10*p1.z*c_33-12*p2.y*p3.y*p2.z*c_33-16*c_10*p2.z*c_33-4*p2.y*p3.y*c_34-10*
        c_10*c_34+c_28*c_119+2*c_24*(-3*p3.y*c_18*c_36+p2.y*c_122)+c_15*(10*c_23+c_123+16*c_27*p2.z-9*c_69*c_1+c_124+16*p1.z*c_31+10*
        c_32+6*c_69*p1.z*p3.z-24*c_27*p3.z+c_235-36*p1.z*c_1*p3.z-24*c_31*p3.z+c_236+c_125-24*p1.z*p2.z*c_2-18*c_1*c_2-12*p1.z*
        c_33-12*p2.z*c_33+c_237-6*p2.y*p3.y*c_18*c_45-3*c_10*c_18*c_55+3*c_7*c_130)+2*p1.y*(-9*c_7*p3.y*c_18*c_19+2*c_25*c_152+3*
        c_69*(-(p3.y*c_131)+p2.y*c_132)+3*p3.y*c_18*(c_133+c_134+c_135+c_136+c_137+c_138-c_10*c_90+c_142)-p2.y*(3*c_10*c_18*c_87+2*
        (-c_23+c_143+c_0*(-6*c_1+c_148+c_16)+p1.z*(-10*c_31+18*c_1*p3.z+9*p2.z*c_2+3*c_33)+3*(-5*c_32+10*c_31*p3.z+c_144+3*p2.z*
        c_33+c_34)))))+2*p1.x*(-3*c_112*p3.x*(-3*c_7*c_18*c_19+c_15*c_20*c_45+p1.y*p3.y*c_18*c_55-p1.y*p2.y*c_106+p2.y*p3.y*c_132+c_10*
        c_43*c_87)+c_145*(-3*c_10*c_43*c_19-3*p2.y*p3.y*c_147+c_15*(4*c_1+c_148+c_16+c_121)-2*c_7*c_152+p1.y*(3*p3.y*
        (c_153+c_99+c_66+c_53+c_2)+p2.y*(c_153+c_154+c_196+c_155+c_16)))+p3.x*(c_156+c_157+9*c_69*p2.y*p3.y*c_0+3*c_25*p3.y*c_0+4*c_69*c_10*
        c_0+3*c_7*c_10*c_0+c_158-c_30*c_0-12*c_7*c_23+c_159+2*c_10*c_23+3*c_69*c_7*p1.z*p2.z+6*c_29*p1.z*p2.z+c_206+c_160+6*c_69*c_10*
        p1.z*p2.z+c_161+c_91+c_92-18*c_7*c_27*p2.z+c_162+c_163+3*c_69*p2.y*p3.y*c_1+6*c_25*p3.y*c_1+6*c_69*c_10*c_1+c_70+c_208+6*
        c_30*c_1+c_71+c_164+c_165-12*c_7*p1.z*c_31+c_166+c_167-12*p2.y*p3.y*c_32+c_168+c_212+12*c_69*p2.y*p3.y*p1.z*p3.z+10*
        c_69*c_10*p1.z*p3.z-6*c_7*c_27*p3.z-12*p2.y*p3.y*c_27*p3.z+6*c_10*c_27*p3.z-3*c_69*c_7*p2.z*p3.z-6*c_29*p2.z*p3.z+c_169+30*
        c_69*c_10*p2.z*p3.z+12*p2.y*c_26*p2.z*p3.z+c_170-6*c_7*c_0*p2.z*p3.z-12*p2.y*p3.y*c_0*p2.z*p3.z+c_171+c_172+c_173+12*
        c_7*c_31*p3.z+c_174+c_220-6*c_69*c_7*c_2+c_175-30*c_69*p2.y*p3.y*c_2+c_221-18*c_7*c_10*c_2-30*p2.y*c_26*c_2+c_176+12*
        c_10*c_0*c_2+6*c_7*p1.z*p2.z*c_2+c_96+c_72-36*c_10*c_1*c_2+c_177+24*p2.y*p3.y*p1.z*c_33+20*c_10*p1.z*c_33+c_227+24*p2.y*
        p3.y*p2.z*c_33-60*c_10*p2.z*c_33+12*c_7*c_34+c_178+c_179+c_28*c_183+c_15*(-30*c_23+c_233+60*c_27*p2.z+c_184+36*c_0*c_1+18*
        p1.z*c_31+c_185-3*c_69*p1.z*p3.z-20*c_27*p3.z-9*c_69*p2.z*p3.z+c_186+18*p1.z*c_1*p3.z+6*c_31*p3.z-4*c_69*c_2-12*c_0*c_2+18*
        p1.z*p2.z*c_2+c_144-6*p1.z*c_33+6*p2.z*c_33-2*c_34+3*p2.y*p3.y*c_187-6*c_10*(c_0+c_188)+3*c_7*(c_39+c_68+c_41+c_188))+c_24*
        (-c_191+3*p2.y*(c_62-4*p1.z*p2.z+c_68+c_41+c_188))+p1.y*(3*c_7*p3.y*c_18*c_55+c_26*(c_153+c_193+c_52+c_155+c_192)+c_25*
        (c_195+c_193-3*(c_66+c_53+c_2))+c_69*(p3.y*(c_5+c_194+c_68+c_243+c_109)+p2.y*(c_195+c_196-3*(c_1+c_53+c_104)))+3*p2.y*
        (c_197+c_251)))+p2.x*(6*c_69*c_7*c_0+c_29*c_0+3*c_69*p2.y*p3.y*c_0+c_202+c_203-3*c_7*c_10*c_0-3*p2.y*c_26*c_0+c_204-2*c_7*
        c_23+c_205+12*c_10*c_23+9*c_69*c_7*p1.z*p2.z+c_206-6*c_7*c_27*p2.z+12*p2.y*p3.y*c_27*p2.z+6*c_10*c_27*p2.z+c_207+9*c_69*p2.y*
        p3.y*c_1+30*c_25*p3.y*c_1+9*c_69*c_10*c_1+18*c_7*c_10*c_1+c_208+c_209-12*c_7*c_0*c_1-20*c_7*p1.z*c_31-24*p2.y*p3.y*p1.z*
        c_31+c_167+c_210+c_211-12*c_10*c_32+c_212+c_93+c_94-18*c_69*c_10*p1.z*p3.z+c_213+c_214-6*c_30*p1.z*p3.z+c_215+c_216+18*c_10*
        c_27*p3.z-9*c_69*c_7*p2.z*p3.z+c_217-12*c_25*p3.y*p2.z*p3.z+18*c_69*c_10*p2.z*p3.z+c_218+6*c_30*p2.z*p3.z+c_219+12*p2.y*
        p3.y*c_0*p2.z*p3.z+6*c_10*c_0*p2.z*p3.z+c_95-6*c_10*p1.z*c_1*p3.z+60*c_7*c_31*p3.z-24*p2.y*p3.y*c_31*p3.z+c_220-9*
        c_69*c_7*c_2-6*c_29*c_2-18*c_69*p2.y*p3.y*c_2+c_221+c_113-6*p2.y*c_26*c_2+c_222+c_223+c_114+c_224+c_225+36*c_7*c_1*
        c_2+c_115+c_177+c_226+12*c_10*p1.z*c_33+c_227+c_228-12*c_10*p2.z*c_33+c_229+12*p2.y*p3.y*c_34+c_28*c_232+c_15*(30*c_23+c_233+20*c_27*
        p2.z-6*c_69*c_1+12*c_0*c_1+6*p1.z*c_31+2*c_32+6*c_7*c_234+9*c_69*p1.z*p3.z-60*c_27*p3.z-3*c_69*p2.z*p3.z+c_235-18*p1.z*
        c_1*p3.z-6*c_31*p3.z+c_236-36*c_0*c_2-18*p1.z*p2.z*c_2-6*c_1*c_2-18*p1.z*c_33-6*p2.z*c_33+c_237+3*p2.y*p3.y*c_54+3*c_10*
        c_238)+c_24*(3*p3.y*(c_239+c_1+4*p1.z*p3.z+c_53+c_16)+p2.y*c_241)+p1.y*(-3*p2.y*c_10*c_43*c_45+c_25*(c_5+c_108+c_242+c_243+c_3)-3*
        c_7*p3.y*c_106+3*c_69*(p2.y*c_43*c_45-p3.y*c_105)-3*p3.y*(c_10*(c_5+c_40+c_47+c_41+c_244)+c_251)))))/double(80640);
}

double trig::s53() const{
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p11_4=p1.y*p11_3;
    double p11_5=p1.y*p11_4;
    double p11_6=p1.y*p11_5;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p31_4=p3.y*p31_3;
    double p31_5=p3.y*p31_4;
    double p31_6=p3.y*p31_5;
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p21_4=p2.y*p21_3;
    double p21_5=p2.y*p21_4;
    double p21_6=p2.y*p21_5;
    double p12_2=p1.z*p1.z;
    double p12_3=p1.z*p12_2;
    double p22_2=p2.z*p2.z;
    double p22_3=p2.z*p22_2;
    double p32_2=p3.z*p3.z;
    double p32_3=p3.z*p32_2;
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
    double c_0=3*p1.z;
    double c_1=p11_2;
    double c_2=-p3.z;
    double c_3=p2.z+c_2;
    double c_4=p31_2;
    double c_5=3*p2.z;
    double c_6=p21_2;
    double c_7=4*p1.z;
    double c_8=3*p3.z;
    double c_9=24*p1.z;
    double c_10=4*p2.z;
    double c_11=24*p2.z;
    double c_12=15*p3.z;
    double c_13=-(2*p3.z);
    double c_14=p1.z+p2.z+c_13;
    double c_15=p1.z+c_2;
    double c_16=2*p3.z;
    double c_17=c_0+c_5+c_16;
    double c_18=-p1.z;
    double c_19=7*p1.z;
    double c_20=5*p2.y*p1.z;
    double c_21=5*p3.y*p1.z;
    double c_22=p11_3;
    double c_23=p21_3;
    double c_24=p21_4;
    double c_25=p31_3;
    double c_26=p31_4;
    double c_27=p12_2;
    double c_28=p22_2;
    double c_29=p22_3;
    double c_30=p11_4;
    double c_31=p32_2;
    double c_32=p32_3;
    double c_33=c_18+p3.z;
    double c_34=6*p2.z;
    double c_35=5*p1.z;
    double c_36=5*p2.z;
    double c_37=6*p3.z;
    double c_38=-8*p1.z;
    double c_39=-(3*p3.z);
    double c_40=-4*p1.z;
    double c_41=2*p1.z;
    double c_42=-(3*p2.z);
    double c_43=2*p2.z;
    double c_44=c_0+c_43+c_8;
    double c_45=p30_2;
    double c_46=p12_3;
    double c_47=9*p3.z;
    double c_48=p1.z+c_10+c_8;
    double c_49=8*p2.z;
    double c_50=10*c_28;
    double c_51=p20_2;
    double c_52=-(72*p2.y*p3.y*p1.z*c_28);
    double c_53=-(5*c_24*p3.z);
    double c_54=36*c_6*p1.z*c_31;
    double c_55=24*c_6*p2.z*c_31;
    double c_56=12*c_6*c_32;
    double c_57=c_41+p2.z+c_39;
    double c_58=-(2*p2.z);
    double c_59=p1.z+c_58+p3.z;
    double c_60=3*c_27;
    double c_61=6*p1.z*p2.z;
    double c_62=6*c_28;
    double c_63=4*p1.z*p3.z;
    double c_64=6*p2.z*p3.z;
    double c_65=3*c_31;
    double c_66=c_60+c_61+c_62+c_63+c_64+c_65;
    double c_67=-(4*p3.z);
    double c_68=p1.z+c_5+c_67;
    double c_69=3*c_1*c_3;
    double c_70=p1.z+c_42+c_16;
    double c_71=6*p1.z;
    double c_72=-p2.z;
    double c_73=-(5*p2.z);
    double c_74=3*c_46;
    double c_75=-(12*c_32);
    double c_76=4*p3.z;
    double c_77=p30_4;
    double c_78=p21_6;
    double c_79=p21_5;
    double c_80=p31_5;
    double c_81=p31_6;
    double c_82=3*p2.y*p3.z;
    double c_83=c_35+c_8;
    double c_84=p1.z+c_43+c_39;
    double c_85=p3.y*c_84;
    double c_86=-c_85;
    double c_87=2*p2.z*p3.z;
    double c_88=15*c_4*c_15;
    double c_89=-(8*c_29);
    double c_90=c_41+c_42+p3.z;
    double c_91=-(4*p2.z);
    double c_92=p1.z+c_91+c_8;
    double c_93=4*p1.z*p2.z;
    double c_94=-5*c_4;
    double c_95=3*c_28;
    double c_96=4*p2.z*p3.z;
    double c_97=p2.z+p3.z;
    double c_98=6*c_27;
    double c_99=6*c_31;
    double c_100=10*c_46;
    double c_101=9*p2.z*c_31;
    double c_102=3*c_32;
    double c_103=p2.y*c_59;
    double c_104=4*c_66;
    double c_105=6*p1.z*p3.z;
    double c_106=c_60+c_93+c_95+c_105+c_64+c_99;
    double c_107=8*p1.z*p3.z;
    double c_108=12*p2.z*c_31;
    double c_109=-(5*p3.z);
    double c_110=6*c_29;
    double c_111=9*c_28*p3.z;
    double c_112=5*p3.z;
    double c_113=-6*c_28;
    double c_114=p11_6;
    double c_115=p11_5;
    double c_116=-(12*c_23*p3.y*c_27*p3.z);
    double c_117=-(36*c_6*c_4*p1.z*c_31);
    double c_118=-(36*c_6*c_4*p2.z*c_31);
    double c_119=-(12*c_24*c_32);
    double c_120=p20_3;
    double c_121=p1.z+c_72;
    double c_122=p2.y*c_33;
    double c_123=p20_4;
    double c_124=c_18+p2.z;
    double c_125=3*c_4*c_124;
    double c_126=7*p2.z;
    double c_127=3*c_97;
    double c_128=c_41+c_127;
    double c_129=-2*p1.z;
    double c_130=c_129+p2.z+p3.z;
    double c_131=p3.y*c_121;
    double c_132=p1.y*c_3;
    double c_133=c_131+c_132+c_122;
    double c_134=6*p1.z*c_97;
    double c_135=c_98+c_95+c_96+c_65+c_134;
    double c_136=-(27*c_45*c_4*p1.z);
    double c_137=-(3*c_26*p1.z);
    double c_138=-(45*c_24*p2.z);
    double c_139=9*p2.y*c_25*p2.z;
    double c_140=3*c_26*p2.z;
    double c_141=36*c_4*c_27*p2.z;
    double c_142=-(120*c_6*c_29);
    double c_143=-(3*p2.y*c_25*p3.z);
    double c_144=36*c_6*c_27*p3.z;
    double c_145=144*c_6*p1.z*p2.z*p3.z;
    double c_146=36*c_4*p1.z*c_31;
    double c_147=36*p2.y*p3.y*p2.z*c_31;
    double c_148=-(36*c_4*p2.z*c_31);
    double c_149=36*p2.y*p3.y*c_32;
    double c_150=15*p1.z;
    double c_151=c_40+p2.z+c_8;
    double c_152=6*p2.z*c_31;
    double c_153=c_36+c_8;
    double c_154=18*c_28*p3.z;
    double c_155=c_5+p3.z;
    double c_156=12*c_28*p3.z;
    double c_157=c_40+c_5+p3.z;
    double c_158=16*p1.z;
    double c_159=15*p2.z;
    double c_160=9*p2.y*p3.y*c_130;
    double c_161=-9*p1.z;
    double c_162=9*p1.z;
    double c_163=9*p2.z;
    double c_164=-(6*c_28*p3.z);
    double c_165=-(9*p2.z*c_31);
    double c_166=6*c_46;
    double c_167=-(10*c_32);
    double c_168=p2.z+c_8;
    double c_169=c_5+c_112;
    double c_170=-12*c_46;
    double c_171=3*c_29;
    double c_172=6*c_32;
    double c_173=2*p3.y;
    double c_174=c_0+c_91+p3.z;
    double c_175=c_35+c_36+c_37;
    double c_176=-3*p1.z;
    double c_177=-(5*c_24*p1.z);
    double c_178=8*c_6*c_46;
    double c_179=72*p2.y*p3.y*c_46;
    double c_180=27*c_45*c_4*p2.z;
    double c_181=-(36*c_4*p1.z*c_28);
    double c_182=-(27*c_45*p2.y*p3.y*p3.z);
    double c_183=72*c_6*c_27*p3.z;
    double c_184=72*p2.y*p3.y*c_27*p3.z;
    double c_185=8*p1.z*c_28;
    double c_186=120*c_27*p3.z;
    double c_187=48*p1.z*p2.z*p3.z;
    double c_188=48*p1.z*c_31;
    double c_189=12*c_32;
    double c_190=-(3*c_97);
    double c_191=c_71+c_190;
    double c_192=c_161+c_34+c_8;
    double c_193=16*p2.z;
    double c_194=3*p3.y*c_33;
    double c_195=-(9*p1.z*c_28);
    double c_196=18*c_27*p3.z;
    double c_197=18*p1.z*p2.z*p3.z;
    double c_198=9*p1.z*c_31;
    double c_199=c_100+c_195+c_89+c_196+c_197+c_111+c_198+c_152+c_102;
    double c_200=4*c_199;
    double c_201=3*c_23*p3.y*p2.z;
    double c_202=6*c_6*c_4*p2.z;
    double c_203=-(72*p2.y*p3.y*c_27*p2.z);
    double c_204=-(72*c_4*c_27*p2.z);
    double c_205=-(36*p2.y*p3.y*c_29);
    double c_206=-(3*c_24*p3.z);
    double c_207=-(9*c_6*c_4*p3.z);
    double c_208=15*c_26*p3.z;
    double c_209=-(144*c_4*p1.z*p2.z*p3.z);
    double c_210=36*c_6*c_28*p3.z;
    double c_211=-(72*c_4*c_28*p3.z);
    double c_212=36*c_6*c_32;
    double c_213=40*c_4*c_32;
    double c_214=c_0+p2.z+c_67;
    double c_215=-(3*c_6*c_15);
    double c_216=c_35+c_34+c_112;
    double c_217=9*c_97;
    double c_218=c_71+c_217;
    double c_219=c_1*c_218;
    double c_220=c_161+c_5+c_37;
    double c_221=p2.z+c_16;
    double c_222=6*c_28*p3.z;
    double c_223=-c_31;
    double c_224=3*c_4*c_14;
    double c_225=30*c_46;
    double c_226=-(3*c_29);
    double c_227=12*c_24*c_46;
    double c_228=-(12*c_26*c_46);
    double c_229=12*p2.y*c_25*c_27*p2.z;
    double c_230=36*c_6*c_4*p1.z*c_28;
    double c_231=12*c_26*c_29;
    double c_232=-(5*p3.y*p1.z);
    double c_233=-(3*p3.y*p2.z);
    double c_234=36*c_6*c_4*c_28*p3.z;
    double c_235=24*p3.z;
    double c_236=c_35+c_5;
    double c_237=5*c_46;
    double c_238=3*c_28*p3.z;
    double c_239=3*p2.z*c_31;
    double c_240=12*p2.z*p3.z;
    double c_241=18*c_27*p2.z;
    double c_242=-(8*c_32);
    double c_243=c_28+c_87+c_223;
    double c_244=9*p1.z*c_243;
    double c_245=c_100+c_241+c_171+c_222+c_101+c_242+c_244;
    double c_246=10*c_27;
    double c_247=8*p1.z*p2.z;
    double c_248=c_94+c_104;
    double c_249=4*c_106;
    double c_250=c_94+c_249;
    double c_251=7*c_46;
    double c_252=30*p2.z*c_31;
    double c_253=16*p3.z;
    double c_254=10*c_31;
    double c_255=9*c_27*c_97;
    double c_256=3*p2.z*p3.z;
    double c_257=4*c_135;
    double c_258=c_94+c_257;
    double c_259=8*p3.z;
    double c_260=2*c_31;
    double c_261=c_0+p2.z+c_76;
    double c_262=p2.z+c_76;
    double c_263=p1.z+c_5+c_76;
    double c_264=-(36*p2.z*p3.z);
    double c_265=c_28+c_96+c_254;
    return (-3*c_123*p3.x*(3*p2.y*p3.y*(c_0+c_36)+3*p1.y*p3.y*c_14+c_69-5*c_6*c_17+c_4*(c_71+c_126+c_8)-3*p1.y*p2.y*
        (p1.z+c_73+c_76))+3*p10_5*(9*c_1*c_3+3*p2.y*p3.y*c_3+c_4*(c_7+c_5+p3.z)+p1.y*p3.y*(c_9+c_159+p3.z)-c_6*(c_7+p2.z+c_8)-p1.y*p2.y*
        (c_9+p2.z+c_12))+3*p20_5*(-9*c_6*c_15+3*p1.y*p3.y*c_33-c_4*(c_0+c_10+p3.z)-p2.y*p3.y*(c_150+c_11+p3.z)+c_1*c_48+p1.y*
        p2.y*(p1.z+c_11+c_12))+3*p10_4*(p3.x*(3*p2.y*p3.y*c_14+3*c_6*c_15-5*c_1*c_17+c_4*(c_19+c_34+c_8)+3*p1.y*(c_20+c_21-p2.y*
        p2.z+3*p3.y*p2.z-4*p2.y*p3.z))+p2.x*(c_125-3*p2.y*p3.y*c_59+5*c_1*c_44-c_6*(c_19+c_5+c_37)-3*p1.y*(c_20+c_21-4*p3.y*
        p2.z+c_82-p3.y*p3.z)))+p10_3*(-40*c_22*p2.y*p1.z-20*c_1*c_6*p1.z-8*p1.y*c_23*p1.z-2*c_24*p1.z+40*c_22*p3.y*p1.z+20*c_1*
        c_4*p1.z+8*p1.y*c_25*p1.z+2*c_26*p1.z-5*c_30*p2.z-10*c_22*p2.y*p2.z-10*c_1*c_6*p2.z-7*p1.y*c_23*p2.z-3*c_24*p2.z+30*
        c_22*p3.y*p2.z+18*c_1*p2.y*p3.y*p2.z+9*p1.y*c_6*p3.y*p2.z+c_201+18*c_1*c_4*p2.z+9*p1.y*p2.y*c_4*p2.z+3*c_6*c_4*
        p2.z+9*p1.y*c_25*p2.z+3*p2.y*c_25*p2.z+c_140-120*c_1*c_27*p2.z-40*p1.y*p2.y*c_27*p2.z-8*c_6*c_27*p2.z-360*p1.y*p3.y*c_27*
        p2.z+c_203+c_204-40*c_1*p1.z*c_28-32*p1.y*p2.y*p1.z*c_28-12*c_6*p1.z*c_28-144*p1.y*p3.y*p1.z*c_28+c_52+c_181-8*c_1*
        c_29-12*p1.y*p2.y*c_29-8*c_6*c_29-36*p1.y*p3.y*c_29+c_205-12*c_4*c_29+5*c_30*p3.z-30*c_22*p2.y*p3.z-18*c_1*c_6*p3.z-9*
        p1.y*c_23*p3.z+c_206+10*c_22*p3.y*p3.z-18*c_1*p2.y*p3.y*p3.z-9*p1.y*c_6*p3.y*p3.z-3*c_23*p3.y*p3.z+10*c_1*c_4*p3.z-9*
        p1.y*p2.y*c_4*p3.z-3*c_6*c_4*p3.z+7*p1.y*c_25*p3.z+c_143+3*c_26*p3.z+120*c_1*c_27*p3.z+360*p1.y*p2.y*c_27*p3.z+c_183+40*
        p1.y*p3.y*c_27*p3.z+c_184+8*c_4*c_27*p3.z+144*p1.y*p2.y*p1.z*p2.z*p3.z+72*c_6*p1.z*p2.z*p3.z-144*p1.y*p3.y*p1.z*
        p2.z*p3.z-72*c_4*p1.z*p2.z*p3.z+36*p1.y*p2.y*c_28*p3.z+c_210-36*p1.y*p3.y*c_28*p3.z-12*p2.y*p3.y*c_28*p3.z-24*
        c_4*c_28*p3.z+40*c_1*p1.z*c_31+144*p1.y*p2.y*p1.z*c_31+c_54+32*p1.y*p3.y*p1.z*c_31+72*p2.y*p3.y*p1.z*c_31+12*c_4*p1.z*
        c_31+36*p1.y*p2.y*p2.z*c_31+c_55-36*p1.y*p3.y*p2.z*c_31+12*p2.y*p3.y*p2.z*c_31+c_148+8*c_1*c_32+36*p1.y*p2.y*
        c_32+c_56+12*p1.y*p3.y*c_32+c_149+8*c_4*c_32-18*p2.x*p3.x*(2*p1.y+p2.y+p3.y)*(p3.y*p1.z+p1.y*p2.z-p3.y*p2.z-p1.y*
        p3.z+c_122)-3*c_45*(2*c_1*c_216-3*(p2.y*p3.y*c_57+c_6*c_15+c_4*c_17)+p1.y*(p3.y*(c_38+c_42+c_8)+3*p2.y*c_151))+3*c_51*(2*c_1*
        c_175+p1.y*(p2.y*(c_38+c_5+c_39)+3*p3.y*c_157)-3*(c_4*c_121+p2.y*p3.y*c_90+c_6*c_44)))+c_120*(36*c_45*c_6*p1.z+5*c_24*p1.z-9*
        c_45*p2.y*p3.y*p1.z-30*c_23*p3.y*p1.z+c_136-18*c_6*c_4*p1.z-9*p2.y*c_25*p1.z+c_137+c_178+36*p2.y*p3.y*c_46+12*c_4*
        c_46+30*c_45*c_6*p2.z-24*c_45*p2.y*p3.y*p2.z-40*c_23*p3.y*p2.z-27*c_45*c_4*p2.z-20*c_6*c_4*p2.z-8*p2.y*c_25*p2.z-2*c_26*
        p2.z+40*c_6*c_27*p2.z+144*p2.y*p3.y*c_27*p2.z+c_141+120*c_6*p1.z*c_28+360*p2.y*p3.y*p1.z*c_28+72*c_4*p1.z*c_28+30*
        c_45*c_6*p3.z+c_53+9*c_45*p2.y*p3.y*p3.z-10*c_23*p3.y*p3.z-18*c_45*c_4*p3.z-10*c_6*c_4*p3.z-7*p2.y*c_25*p3.z-3*c_26*
        p3.z+36*p2.y*p3.y*c_27*p3.z+24*c_4*c_27*p3.z+144*p2.y*p3.y*p1.z*p2.z*p3.z+72*c_4*p1.z*p2.z*p3.z-120*c_6*c_28*p3.z-40*
        p2.y*p3.y*c_28*p3.z-8*c_4*c_28*p3.z+36*p2.y*p3.y*p1.z*c_31+c_146-40*c_6*p2.z*c_31-32*p2.y*p3.y*p2.z*c_31-12*c_4*p2.z*
        c_31-8*c_6*c_32-12*p2.y*p3.y*c_32-8*c_4*c_32+c_30*c_44+c_22*(c_194+p2.y*(c_19+c_49+c_47))+c_1*(8*c_46-9*c_45*p2.z+12*c_27*
        p2.z+c_185-3*c_4*c_15+9*c_45*p3.z-36*c_27*p3.z-72*p1.z*p2.z*p3.z-72*c_28*p3.z-24*p1.z*c_31-36*p2.z*c_31+c_75+9*p2.y*
        p3.y*c_33+2*c_6*(c_35+10*p2.z+c_47))+p1.y*(-18*c_6*p3.y*c_15-9*p2.y*c_4*c_15+10*c_23*c_48+9*c_45*(c_86+p2.y*c_92)+4*p2.y*
        (c_74+c_27*(c_49-9*p3.z)+p1.z*(c_50+c_264-9*c_31)-9*p3.z*(c_50+c_96+c_31))+3*p3.y*c_15*(-c_4+c_104)))-c_51*p3.x*(-30*c_24*
        p1.z-6*c_23*p3.y*p1.z+9*c_6*c_4*p1.z+15*p2.y*c_25*p1.z+12*c_26*p1.z+36*c_6*c_46-12*p2.y*p3.y*c_46-24*c_4*c_46+c_138-10*
        c_23*p3.y*p2.z+c_202+c_139+5*c_26*p2.z+144*c_6*c_27*p2.z-36*p2.y*p3.y*c_27*p2.z-48*c_4*c_27*p2.z+360*c_6*p1.z*c_28+c_52-72*
        c_4*p1.z*c_28+c_142-40*p2.y*p3.y*c_29-8*c_4*c_29+3*c_30*c_3+c_53+9*c_6*c_4*p3.z+16*p2.y*c_25*p3.z+c_208+c_144-24*p2.y*
        p3.y*c_27*p3.z-72*c_4*c_27*p3.z+c_145-72*p2.y*p3.y*p1.z*p2.z*p3.z+c_209+c_54-36*p2.y*p3.y*p1.z*c_31-144*c_4*p1.z*
        c_31+c_55+c_147+24*c_4*p2.z*c_31+c_56+32*p2.y*p3.y*c_32+c_213+c_22*(3*p3.y*c_14-3*p2.y*c_70)+3*c_1*(p2.y*p3.y*c_68+c_4*
        c_57-3*c_6*c_59-4*c_3*c_66)+3*c_45*(p2.y*p3.y*(c_176+c_5-8*p3.z)+3*p1.y*p3.y*c_68+c_69-3*p1.y*p2.y*c_70-3*c_6*c_44+2*c_4*
        (c_71+5*c_97))-3*p1.y*(-(c_25*c_214)+6*c_6*p3.y*(c_72+p3.z)+2*c_23*(c_0+c_73+c_16)+4*p3.y*(c_74+c_110+c_165+c_75+c_27*
        (c_36+c_16)+p1.z*(c_62+c_87-3*c_31))-p2.y*(c_224+4*(c_74-30*c_29+c_101+c_172+c_27*(c_5+c_76)+p1.z*(c_113+c_64+5*c_31)))))+p2.x*(18*
        c_77*c_6*p1.z+12*c_45*c_24*p1.z-25*c_78*p1.z+27*c_77*p2.y*p3.y*p1.z+15*c_45*c_23*p3.y*p1.z+15*c_79*p3.y*p1.z-45*c_77*
        c_4*p1.z+9*c_45*c_6*c_4*p1.z+15*c_24*c_4*p1.z-6*c_45*p2.y*c_25*p1.z+15*c_23*c_25*p1.z-30*c_45*c_26*p1.z+15*c_6*c_26*
        p1.z+15*p2.y*c_80*p1.z+15*c_81*p1.z-24*c_45*c_6*c_46+c_227-12*c_45*p2.y*p3.y*c_46-12*c_23*p3.y*c_46+36*c_45*c_4*c_46-12*c_6*
        c_4*c_46-12*p2.y*c_25*c_46+c_228+9*c_77*c_6*p2.z+15*c_45*c_24*p2.z+16*c_45*c_23*p3.y*p2.z-30*c_77*c_4*p2.z+9*c_45*c_6*c_4*
        p2.z-5*c_45*c_26*p2.z-72*c_45*c_6*c_27*p2.z+60*c_24*c_27*p2.z-24*c_45*p2.y*p3.y*c_27*p2.z-48*c_23*p3.y*c_27*p2.z+36*
        c_45*c_4*c_27*p2.z-36*c_6*c_4*c_27*p2.z-24*p2.y*c_25*c_27*p2.z-12*c_26*c_27*p2.z-144*c_45*c_6*p1.z*c_28+180*c_24*p1.z*c_28-36*
        c_45*p2.y*p3.y*p1.z*c_28-120*c_23*p3.y*p1.z*c_28+36*c_45*c_4*p1.z*c_28-72*c_6*c_4*p1.z*c_28-36*p2.y*c_25*p1.z*c_28-12*
        c_26*p1.z*c_28+40*c_45*c_6*c_29+32*c_45*p2.y*p3.y*c_29+160*c_23*p3.y*c_29+12*c_45*c_4*c_29+80*c_6*c_4*c_29+32*p2.y*c_25*
        c_29+8*c_26*c_29+21*c_77*c_6*p3.z+5*c_45*c_24*p3.z+25*c_78*p3.z+45*c_77*p2.y*p3.y*p3.z+9*c_45*c_23*p3.y*p3.z+25*c_79*
        p3.y*p3.z-45*c_77*c_4*p3.z+6*c_45*c_6*c_4*p3.z+25*c_24*c_4*p3.z-10*c_45*p2.y*c_25*p3.z+25*c_23*c_25*p3.z-45*c_45*c_26*
        p3.z+25*c_6*c_26*p3.z+25*p2.y*c_80*p3.z+25*c_81*p3.z-48*c_45*c_6*c_27*p3.z-36*c_45*p2.y*p3.y*c_27*p3.z+c_116+144*c_45*c_4*
        c_27*p3.z-24*c_6*c_4*c_27*p3.z-36*p2.y*c_25*c_27*p3.z-48*c_26*c_27*p3.z-144*c_45*c_6*p1.z*p2.z*p3.z-72*c_45*p2.y*p3.y*
        p1.z*p2.z*p3.z-48*c_23*p3.y*p1.z*p2.z*p3.z+144*c_45*c_4*p1.z*p2.z*p3.z-72*c_6*c_4*p1.z*p2.z*p3.z-72*p2.y*c_25*
        p1.z*p2.z*p3.z-48*c_26*p1.z*p2.z*p3.z+24*c_45*c_6*c_28*p3.z-180*c_24*c_28*p3.z+36*c_45*p2.y*p3.y*c_28*p3.z-40*c_23*p3.y*
        c_28*p3.z+24*c_45*c_4*c_28*p3.z+24*c_6*c_4*c_28*p3.z+36*p2.y*c_25*c_28*p3.z+20*c_26*c_28*p3.z-72*c_45*c_6*p1.z*c_31-72*
        c_45*p2.y*p3.y*p1.z*c_31-12*c_23*p3.y*p1.z*c_31+360*c_45*c_4*p1.z*c_31+c_117-72*p2.y*c_25*p1.z*c_31-120*c_26*p1.z*
        c_31-60*c_24*p2.z*c_31-64*c_23*p3.y*p2.z*c_31+c_118+20*c_26*p2.z*c_31-8*c_45*c_6*c_32+c_119-40*c_45*p2.y*p3.y*c_32-28*c_23*
        p3.y*c_32-120*c_45*c_4*c_32-40*c_6*c_4*c_32-40*p2.y*c_25*c_32-20*c_26*c_32-5*c_114*c_83-5*c_115*(c_20-3*p3.y*p1.z+c_82+3*p3.y*
        p3.z)+c_30*(20*c_46-3*c_45*p2.z-20*c_27*p2.z-20*p1.z*c_28+c_89+15*p2.y*p3.y*c_15+c_88+3*c_45*p3.z+c_186+c_187+c_156+c_188+c_108+c_189-5*
        c_6*c_83)+c_22*(15*c_6*p3.y*c_15-5*c_23*c_83+3*c_45*(c_86+c_103)-3*p3.y*c_15*(c_94+4*(c_246+c_93+c_28+c_107+c_87+c_65))+p2.y*
        (c_88+c_200))+c_1*(15*c_23*p3.y*c_15-9*c_77*c_3-5*c_24*c_83+3*c_45*(-3*c_4*c_14+c_6*c_90+p2.y*p3.y*c_92+4*
        c_3*c_106)-3*p2.y*p3.y*c_15*c_258-3*c_4*c_15*(c_94+4*(c_98+c_28+c_256+c_99+3*p1.z*c_168))+c_6*(c_88+4*(c_100-20*
        c_29+c_154+c_101+c_102+c_255-6*p1.z*(c_28-3*p2.z*p3.z+c_223))))+p1.y*(15*c_24*p3.y*c_15-5*c_79*c_83+9*c_77*(-(p3.y*(p1.z+c_10+c_109))+c_103)-3*
        c_6*p3.y*c_15*c_248-3*p2.y*c_4*c_15*c_250-3*c_25*c_15*(c_94+4*(c_60+2*p1.z*p2.z+c_28+c_107+c_96+c_254))+c_23*(c_88+4*
        (c_251-40*c_29+30*c_28*p3.z+c_108+c_102+c_27*(c_193+c_8)+p1.z*(c_50+c_240+c_65)))+3*c_45*(-2*c_25*(c_0+c_43+c_109)+c_23*
        c_174+3*c_6*p3.y*c_59+4*p3.y*(c_74+c_110+c_111-30*c_32+c_27*(c_10+c_8)+p1.z*(5*c_28+c_64-6*c_31))-2*p2.y*(c_166+2*c_27*
        (c_43+c_112)+p1.z*(c_113+c_96+12*c_31)+3*(-8*c_29+c_4*c_3+c_164+4*c_32)))))+p1.x*(160*c_22*p2.y*c_46+80*c_1*c_6*c_46+32*p1.y*c_23*
        c_46+8*c_24*c_46-160*c_22*p3.y*c_46-80*c_1*c_4*c_46-32*p1.y*c_25*c_46-8*c_26*c_46+25*c_114*p2.z+25*c_115*p2.y*p2.z+25*c_30*
        c_6*p2.z+25*c_22*c_23*p2.z+25*c_1*c_24*p2.z+25*p1.y*c_79*p2.z+25*c_78*p2.z-15*c_115*p3.y*p2.z-15*c_30*p2.y*p3.y*p2.z-15*
        c_22*c_6*p3.y*p2.z-15*c_1*c_23*p3.y*p2.z-15*p1.y*c_24*p3.y*p2.z-15*c_79*p3.y*p2.z-15*c_30*c_4*p2.z-15*c_22*p2.y*
        c_4*p2.z-15*c_1*c_6*c_4*p2.z-15*p1.y*c_23*c_4*p2.z-15*c_24*c_4*p2.z-15*c_22*c_25*p2.z-15*c_1*p2.y*c_25*p2.z-15*p1.y*c_6*
        c_25*p2.z-15*c_23*c_25*p2.z-15*c_1*c_26*p2.z-15*p1.y*p2.y*c_26*p2.z-15*c_6*c_26*p2.z-15*p1.y*c_80*p2.z-15*p2.y*c_80*
        p2.z-15*c_81*p2.z-180*c_30*c_27*p2.z-40*c_22*p2.y*c_27*p2.z+24*c_1*c_6*c_27*p2.z+36*p1.y*c_23*c_27*p2.z+20*c_24*c_27*
        p2.z+120*c_22*p3.y*c_27*p2.z+72*c_1*p2.y*p3.y*c_27*p2.z+36*p1.y*c_6*p3.y*c_27*p2.z+12*c_23*p3.y*c_27*p2.z+72*c_1*c_4*
        c_27*p2.z+36*p1.y*p2.y*c_4*c_27*p2.z+12*c_6*c_4*c_27*p2.z+36*p1.y*c_25*c_27*p2.z+c_229+12*c_26*c_27*p2.z-60*c_30*p1.z*
        c_28-64*c_22*p2.y*p1.z*c_28-36*c_1*c_6*p1.z*c_28+20*c_24*p1.z*c_28+48*c_22*p3.y*p1.z*c_28+72*c_1*p2.y*p3.y*p1.z*c_28+72*
        p1.y*c_6*p3.y*p1.z*c_28+48*c_23*p3.y*p1.z*c_28+36*c_1*c_4*p1.z*c_28+48*p1.y*p2.y*c_4*p1.z*c_28+c_230+24*p1.y*c_25*p1.z*
        c_28+24*p2.y*c_25*p1.z*c_28+12*c_26*p1.z*c_28-12*c_30*c_29-28*c_22*p2.y*c_29-40*c_1*c_6*c_29-40*p1.y*c_23*c_29-20*c_24*
        c_29+12*c_22*p3.y*c_29+36*c_1*p2.y*p3.y*c_29+72*p1.y*c_6*p3.y*c_29+120*c_23*p3.y*c_29+12*c_1*c_4*c_29+36*p1.y*p2.y*c_4*
        c_29+72*c_6*c_4*c_29+12*p1.y*c_25*c_29+36*p2.y*c_25*c_29+c_231-25*c_114*p3.z+15*c_115*p2.y*p3.z+15*c_30*c_6*p3.z+15*c_22*
        c_23*p3.z+15*c_1*c_24*p3.z+15*p1.y*c_79*p3.z+15*c_78*p3.z-25*c_115*p3.y*p3.z+15*c_30*p2.y*p3.y*p3.z+15*c_22*c_6*p3.y*
        p3.z+15*c_1*c_23*p3.y*p3.z+15*p1.y*c_24*p3.y*p3.z+15*c_79*p3.y*p3.z-25*c_30*c_4*p3.z+15*c_22*p2.y*c_4*p3.z+15*c_1*c_6*
        c_4*p3.z+15*p1.y*c_23*c_4*p3.z+15*c_24*c_4*p3.z-25*c_22*c_25*p3.z+15*c_1*p2.y*c_25*p3.z+15*p1.y*c_6*c_25*p3.z+15*c_23*
        c_25*p3.z-25*c_1*c_26*p3.z+15*p1.y*p2.y*c_26*p3.z+15*c_6*c_26*p3.z-25*p1.y*c_80*p3.z+15*p2.y*c_80*p3.z-25*c_81*p3.z+180*
        c_30*c_27*p3.z-120*c_22*p2.y*c_27*p3.z-72*c_1*c_6*c_27*p3.z-36*p1.y*c_23*c_27*p3.z-12*c_24*c_27*p3.z+40*c_22*p3.y*
        c_27*p3.z-72*c_1*p2.y*p3.y*c_27*p3.z-36*p1.y*c_6*p3.y*c_27*p3.z+c_116-24*c_1*c_4*c_27*p3.z-36*p1.y*p2.y*c_4*c_27*p3.z-12*
        c_6*c_4*c_27*p3.z-36*p1.y*c_25*c_27*p3.z-12*p2.y*c_25*c_27*p3.z-20*c_26*c_27*p3.z-48*c_22*p2.y*p1.z*p2.z*p3.z-72*
        c_1*c_6*p1.z*p2.z*p3.z-72*p1.y*c_23*p1.z*p2.z*p3.z-48*c_24*p1.z*p2.z*p3.z+48*c_22*p3.y*p1.z*p2.z*p3.z-24*p1.y*c_6*
        p3.y*p1.z*p2.z*p3.z-24*c_23*p3.y*p1.z*p2.z*p3.z+72*c_1*c_4*p1.z*p2.z*p3.z+24*p1.y*p2.y*c_4*p1.z*p2.z*p3.z+72*
        p1.y*c_25*p1.z*p2.z*p3.z+24*p2.y*c_25*p1.z*p2.z*p3.z+48*c_26*p1.z*p2.z*p3.z-12*c_22*p2.y*c_28*p3.z-36*c_1*c_6*c_28*
        p3.z-72*p1.y*c_23*c_28*p3.z-120*c_24*c_28*p3.z+12*c_22*p3.y*c_28*p3.z+12*c_1*p2.y*p3.y*c_28*p3.z-24*c_23*p3.y*c_28*p3.z+24*
        c_1*c_4*c_28*p3.z+36*p1.y*p2.y*c_4*c_28*p3.z+c_234+36*p1.y*c_25*c_28*p3.z+60*p2.y*c_25*c_28*p3.z+48*c_26*c_28*p3.z+60*
        c_30*p1.z*c_31-48*c_22*p2.y*p1.z*c_31-36*c_1*c_6*p1.z*c_31-24*p1.y*c_23*p1.z*c_31-12*c_24*p1.z*c_31+64*c_22*p3.y*
        p1.z*c_31-72*c_1*p2.y*p3.y*p1.z*c_31-48*p1.y*c_6*p3.y*p1.z*c_31-24*c_23*p3.y*p1.z*c_31+36*c_1*c_4*p1.z*c_31-72*p1.y*
        p2.y*c_4*p1.z*c_31+c_117-48*p2.y*c_25*p1.z*c_31-20*c_26*p1.z*c_31-12*c_22*p2.y*p2.z*c_31-24*c_1*c_6*p2.z*c_31-36*p1.y*c_23*
        p2.z*c_31-48*c_24*p2.z*c_31+12*c_22*p3.y*p2.z*c_31-12*c_1*p2.y*p3.y*p2.z*c_31-36*p1.y*c_6*p3.y*p2.z*c_31-60*c_23*
        p3.y*p2.z*c_31+36*c_1*c_4*p2.z*c_31+c_118+72*p1.y*c_25*p2.z*c_31+24*p2.y*c_25*p2.z*c_31+120*c_26*p2.z*c_31+12*c_30*c_32-12*
        c_22*p2.y*c_32-12*c_1*c_6*c_32-12*p1.y*c_23*c_32+c_119+28*c_22*p3.y*c_32-36*c_1*p2.y*p3.y*c_32-36*p1.y*c_6*p3.y*c_32-36*
        c_23*p3.y*c_32+40*c_1*c_4*c_32-72*p1.y*p2.y*c_4*c_32-72*c_6*c_4*c_32+40*p1.y*c_25*c_32-120*p2.y*c_25*c_32+20*c_26*c_32-18*
        c_120*p3.x*(p1.y+2*p2.y+p3.y)*c_133+3*c_123*(c_125-3*p2.y*p3.y*(c_7+c_73+p3.z)+c_1*(c_0+c_126+c_37)-5*c_6*c_128+3*p1.y*
        (p3.y*c_130+p2.y*c_153))-3*c_77*(-3*p2.y*p3.y*(c_7+p2.z+c_109)+c_215+c_1*(c_0+c_34+7*p3.z)-5*c_4*c_128+3*p1.y*(p2.y*
        c_130+p3.y*c_169))-6*p2.x*p3.x*c_133*(2*c_22+2*c_23+3*c_6*p3.y+3*p2.y*c_4+2*c_25+3*c_1*(p2.y+p3.y)+3*c_45*(p1.y+p2.y+c_173)-12*
        p2.y*c_27-12*p3.y*c_27-24*p2.y*p1.z*p2.z-16*p3.y*p1.z*p2.z-24*p2.y*c_28-12*p3.y*c_28-16*p2.y*p1.z*p3.z-24*p3.y*
        p1.z*p3.z-24*p2.y*p2.z*p3.z-24*p3.y*p2.z*p3.z-12*p2.y*c_31-24*p3.y*c_31+p1.y*(3*c_6+4*p2.y*p3.y+3*c_4-4*c_135))+c_51*
        (27*c_45*c_6*p1.z+c_177-12*c_23*p3.y*p1.z+c_136-9*c_6*c_4*p1.z-6*p2.y*c_25*p1.z+c_137+12*c_6*c_46+c_179+36*c_4*
        c_46+c_138+27*c_45*p2.y*p3.y*p2.z+30*c_23*p3.y*p2.z+c_180+18*c_6*c_4*p2.z+c_139+c_140+24*c_6*c_27*p2.z+108*p2.y*p3.y*c_27*
        p2.z+c_141+c_142-360*p2.y*p3.y*c_29-72*c_4*c_29-27*c_45*c_6*p3.z-30*c_24*p3.z+c_182-18*c_23*p3.y*p3.z+c_207+c_143+c_144+60*
        p2.y*p3.y*c_27*p3.z+48*c_4*c_27*p3.z+c_145+72*p2.y*p3.y*p1.z*p2.z*p3.z+24*c_4*p1.z*p2.z*p3.z+360*c_6*c_28*p3.z-72*
        p2.y*p3.y*c_28*p3.z+c_211+c_54+48*p2.y*p3.y*p1.z*c_31+c_146+144*c_6*p2.z*c_31+c_147+c_148+c_212+c_149+c_30*(c_150+c_36+12*
        p3.z)+c_22*(3*p3.y*c_151+p2.y*(c_158+c_163+c_12))+c_1*(40*c_46+24*c_27*(p2.z-6*p3.z)-18*c_45*c_3+c_160-72*p1.z*p3.z*
        (c_43+p3.z)+c_4*c_220+c_6*(c_162+c_34+c_47)-8*(c_29+c_111+c_152+c_102))+p1.y*(-18*c_6*p3.y*c_121-3*p2.y*c_4*(c_7+c_42+c_2)-3*
        c_25*(c_41+c_72+c_2)-2*c_23*c_153+9*c_45*(-(p3.y*c_57)+p2.y*c_90)-12*p3.y*(c_170+c_110+c_222+5*p2.z*c_31+c_102+2*p1.z*p3.z*
        c_97-3*c_27*c_155)-4*p2.y*(-8*c_46+10*c_29-9*c_27*c_3+c_154+c_101+c_102+6*p1.z*p3.z*c_155)))-c_45*(-3*c_23*p3.y*c_57-3*c_24*
        c_15+c_30*(c_150+12*p2.z+c_112)-5*c_26*(p1.z+c_34+c_47)+12*c_4*(c_46+c_171+c_156+c_252+c_167+c_27*(c_5+c_16)+3*p1.z*p2.z*
        c_262)+c_22*(3*p2.y*c_157+p3.y*(c_158+c_159+c_47))+c_6*(-9*c_4*c_14+12*c_15*c_106)+c_1*(c_160+c_6*c_192+c_4*(c_162+c_163+c_37)+8*
        (c_237+c_226+c_164+c_165-c_32+3*c_27*(-6*p2.z+p3.z)-9*p1.z*p2.z*c_221))-6*p2.y*p3.y*(c_4*(c_41+c_5+c_109)-2*(c_166+2*
        p1.z*p2.z*(c_43+c_8)+c_27*(c_36+c_47)+3*(c_29+c_28*p3.z-2*p2.z*c_31+c_167)))-p1.y*(3*c_6*p3.y*(c_7+c_72+c_39)+c_23*c_191+2*
        p3.y*(-16*c_46+c_110+18*c_27*c_3+c_154+36*p2.z*c_31+20*c_32+12*p1.z*p2.z*c_168+c_4*c_169)+6*p2.y*(3*c_4*c_15+2*(c_170+c_171+5*
        c_28*p3.z+c_152+c_172+2*p1.z*p2.z*c_97-3*c_27*c_168)))))+p10_2*(-9*c_51*p3.x*(3*p1.y+3*p2.y+c_173)*c_133+3*c_120*(c_125-3*
        p2.y*p3.y*c_174-2*c_6*c_175+c_219+p1.y*(3*p3.y*(c_176+c_43+p3.z)+p2.y*(c_176+c_49+c_8)))+p2.x*(18*c_45*c_6*p1.z+c_177+9*
        c_45*p2.y*p3.y*p1.z-3*c_23*p3.y*p1.z+c_136-3*c_6*c_4*p1.z-3*p2.y*c_25*p1.z+c_137+c_178+c_179+72*c_4*c_46-15*c_24*
        p2.z+18*c_45*p2.y*p3.y*p2.z+12*c_23*p3.y*p2.z+c_180+9*c_6*c_4*p2.z+6*p2.y*c_25*p2.z+c_140-24*c_6*p1.z*c_28-108*p2.y*
        p3.y*p1.z*c_28+c_181-40*c_6*c_29-144*p2.y*p3.y*c_29-36*c_4*c_29-18*c_45*c_6*p3.z-12*c_24*p3.z+c_182-9*c_23*p3.y*p3.z-6*c_6*
        c_4*p3.z+c_143+c_183+c_184+72*c_4*c_27*p3.z+c_145+24*p2.y*p3.y*p1.z*p2.z*p3.z-24*c_4*p1.z*p2.z*p3.z+144*c_6*c_28*
        p3.z-36*p2.y*p3.y*c_28*p3.z-48*c_4*c_28*p3.z+48*c_6*p1.z*c_31+60*p2.y*p3.y*p1.z*c_31+c_146+72*c_6*p2.z*c_31+24*p2.y*
        p3.y*p2.z*c_31+c_148+24*c_6*c_32+c_149+5*c_30*(c_162+p2.z+c_37)+2*c_22*(c_20-15*p3.y*p1.z+6*p3.y*p2.z+c_82+9*p3.y*p3.z)-3*
        c_1*(-40*c_46+6*p2.y*p3.y*c_121+9*c_45*p2.z+c_185+4*c_29-9*c_45*p3.z+c_186+c_187+c_156+c_188+c_108+c_189+c_4*c_191+c_6*
        c_128)+p1.y*(-9*c_6*p3.y*c_59+c_25*c_192-c_23*(c_162+c_193+c_12)+9*c_45*(p2.y*(c_0+c_58+c_2)+c_194)+12*p3.y*(c_225-6*c_29+6*c_27*
        p3.z-5*c_28*p3.z-4*p2.z*c_31-3*c_32-3*p1.z*(c_95+c_87+c_31))+p2.y*(-3*c_4*c_174+c_200)))+p3.x*(3*c_24*p1.z+3*c_23*p3.y*
        p1.z+3*c_6*c_4*p1.z+3*p2.y*c_25*p1.z+5*c_26*p1.z-72*c_6*c_46-72*p2.y*p3.y*c_46-8*c_4*c_46+c_201+c_202+c_139+12*c_26*
        p2.z-72*c_6*c_27*p2.z+c_203+c_204-36*c_6*p1.z*c_28-60*p2.y*p3.y*p1.z*c_28-48*c_4*p1.z*c_28+c_205-24*c_4*c_29+c_206-6*c_23*
        p3.y*p3.z+c_207-12*p2.y*c_25*p3.z+c_208+24*c_6*p1.z*p2.z*p3.z-24*p2.y*p3.y*p1.z*p2.z*p3.z+c_209+c_210-24*p2.y*p3.y*
        c_28*p3.z+c_211+c_54+108*p2.y*p3.y*p1.z*c_31+24*c_4*p1.z*c_31+48*c_6*p2.z*c_31+c_147-144*c_4*p2.z*c_31+c_212+144*p2.y*
        p3.y*c_32+c_213-5*c_30*(c_162+c_34+p3.z)+2*c_22*(15*p2.y*p1.z+c_232-9*p2.y*p2.z+c_233-6*p2.y*p3.z)-3*c_45*(-3*p2.y*p3.y*
        c_214+c_215-2*c_4*c_216+c_219+p1.y*(p2.y*c_220+p3.y*(c_176+c_5+c_259)))+3*c_1*(6*p2.y*p3.y*c_15+c_6*c_191+c_4*c_128+4*(-10*
        c_46+30*c_27*p2.z+c_171+c_238+c_239+c_32+2*p1.z*(c_62+c_64+c_31)))+p1.y*(3*c_6*p3.y*c_214+c_25*(c_162+c_159+c_253)+c_23*
        (c_162-3*c_221)-4*p3.y*c_245+3*p2.y*(c_224-4*(c_225+6*c_27*p2.z+c_226-4*c_28*p3.z-5*p2.z*c_31-6*c_32-3*p1.z*(c_28+c_87+c_65))))))+p3.x*
        (-15*c_78*p1.z-15*c_79*p3.y*p1.z-15*c_24*c_4*p1.z-15*c_23*c_25*p1.z-15*c_6*c_26*p1.z-15*p2.y*c_80*p1.z+25*
        c_81*p1.z+c_227+12*c_23*p3.y*c_46+12*c_6*c_4*c_46+12*p2.y*c_25*c_46+c_228-25*c_78*p2.z-25*c_79*p3.y*p2.z-25*c_24*c_4*p2.z-25*
        c_23*c_25*p2.z-25*c_6*c_26*p2.z-25*p2.y*c_80*p2.z-25*c_81*p2.z+48*c_24*c_27*p2.z+36*c_23*p3.y*c_27*p2.z+24*c_6*c_4*
        c_27*p2.z+c_229+120*c_24*p1.z*c_28+72*c_23*p3.y*p1.z*c_28+c_230+12*p2.y*c_25*p1.z*c_28+20*c_24*c_29+40*c_23*p3.y*c_29+40*
        c_6*c_4*c_29+28*p2.y*c_25*c_29+c_231+5*c_114*c_236-5*c_115*(3*p2.y*p1.z+c_232-3*p2.y*p2.z+c_233)+12*c_24*c_27*p3.z+24*c_23*
        p3.y*c_27*p3.z+36*c_6*c_4*c_27*p3.z+48*p2.y*c_25*c_27*p3.z-60*c_26*c_27*p3.z+48*c_24*p1.z*p2.z*p3.z+72*c_23*p3.y*
        p1.z*p2.z*p3.z+72*c_6*c_4*p1.z*p2.z*p3.z+48*p2.y*c_25*p1.z*p2.z*p3.z-20*c_24*c_28*p3.z+c_234+64*p2.y*c_25*c_28*p3.z+60*
        c_26*c_28*p3.z+12*c_24*p1.z*c_31+36*c_23*p3.y*p1.z*c_31+72*c_6*c_4*p1.z*c_31+120*p2.y*c_25*p1.z*c_31-180*c_26*p1.z*
        c_31-20*c_24*p2.z*c_31-36*c_23*p3.y*p2.z*c_31-24*c_6*c_4*p2.z*c_31+40*p2.y*c_25*p2.z*c_31+180*c_26*p2.z*c_31-8*c_24*c_32-32*
        c_23*p3.y*c_32-80*c_6*c_4*c_32-160*p2.y*c_25*c_32-3*c_77*(-3*p1.y*p2.y*c_121+9*c_4*c_124-c_6*c_261+c_1*c_263-p2.y*p3.y*
        (c_150+p2.z+c_235)+p1.y*p3.y*(p1.z+c_159+c_235))-c_30*(15*c_6*c_121+15*p2.y*p3.y*c_121-5*c_4*c_236+4*(c_237+c_171+5*c_27*
        (c_34+c_2)+c_238+c_239-2*c_32+p1.z*(12*c_28+c_240-5*c_31)))-c_22*(15*c_23*c_121+15*c_6*p3.y*c_121-5*c_25*c_236+4*p3.y*c_245-3*
        p2.y*c_121*(c_94+4*(c_246+c_247+c_95+c_63+c_87+c_31)))+p1.y*(-15*c_79*c_121-15*c_24*p3.y*c_121+5*c_80*c_236+3*c_23*c_121*
        (c_94+4*(c_60+c_247+c_50+2*p1.z*p3.z+c_96+c_31))+3*c_6*p3.y*c_121*c_248+3*p2.y*c_4*c_121*c_250-4*c_25*(c_251+c_171+c_156+c_252-40*
        c_32+c_27*(c_5+c_253)+p1.z*(c_95+c_240+c_254)))-c_1*(15*c_24*c_121+15*c_23*p3.y*c_121-5*c_26*c_236+4*c_4*(c_100+c_171+c_111+18*
        p2.z*c_31-20*c_32+c_255+6*p1.z*(c_28+c_256+c_223))-3*c_6*c_121*(c_94+4*(c_98+9*p1.z*p2.z+c_62+3*p1.z*p3.z+c_256+c_31))-3*
        p2.y*p3.y*c_121*c_258)+c_45*(-(c_30*c_17)+c_24*c_17+c_23*p3.y*(c_162+c_126+c_259)+c_22*(3*p2.y*c_121-p3.y*
        (c_19+c_163+c_259))-c_4*c_121*(5*c_4+8*(c_27+p1.z*p2.z+c_28+5*p1.z*p3.z+5*p2.z*p3.z+15*c_31))+2*c_6*(c_4*(c_162+5*c_221)-2*(c_74+c_27*
        (c_34+c_47)+9*p1.z*(c_28+c_87+c_260)-p2.z*(2*c_28+c_256+c_260)))+c_1*(3*c_6*c_121+9*p2.y*p3.y*c_121-2*(4*c_46+6*c_27*(-3*
        p2.z+p3.z)+c_4*(c_35+c_163+10*p3.z)-4*p1.z*(c_95+9*p2.z*p3.z+c_223)-6*p2.z*(c_28+c_256+c_99)))+2*p2.y*p3.y*(5*c_4*c_261-2*
        (9*c_46+9*c_27*c_262+9*p1.z*c_265-p2.z*(c_95+8*p2.z*p3.z+c_254)))+p1.y*(3*c_23*c_121+9*c_6*p3.y*c_121-6*p2.y*c_121*(-3*
        c_4+2*c_106)-2*p3.y*(5*c_4*c_263+2*(c_74+c_27*(-9*p2.z+c_259)+p1.z*(-9*c_28+c_264+c_254)-9*p2.z*c_265))))))/double(967680);
}

double trig::s54() const{
    double p12_2=p1.z*p1.z;
    double p22_2=p2.z*p2.z;
    double p32_2=p3.z*p3.z;
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
    double p20_2=p2.x*p2.x;
    double p20_3=p2.x*p20_2;
    double p20_4=p2.x*p20_3;
    double p10_2=p1.x*p1.x;
    double p10_3=p1.x*p10_2;
    double p10_4=p1.x*p10_3;
    double c_0=p12_2;
    double c_1=p22_2;
    double c_2=p32_2;
    double c_3=-(3*c_2);
    double c_4=2*p2.z;
    double c_5=3*c_0;
    double c_6=5*p2.z;
    double c_7=p21_2;
    double c_8=-p3.z;
    double c_9=c_6+p3.z;
    double c_10=p31_2;
    double c_11=c_4+p3.z;
    double c_12=6*p1.z*c_11;
    double c_13=2*p3.z;
    double c_14=c_6+c_13;
    double c_15=p11_2;
    double c_16=3*c_2;
    double c_17=3*p3.z;
    double c_18=p1.z+c_8;
    double c_19=p1.z+c_4+p3.z;
    double c_20=p2.z+c_8;
    double c_21=6*p2.z;
    double c_22=5*c_0;
    double c_23=p30_2;
    double c_24=p21_4;
    double c_25=p21_3;
    double c_26=p31_3;
    double c_27=p31_4;
    double c_28=c_21+p3.z;
    double c_29=2*p1.z*c_28;
    double c_30=p2.z+c_13;
    double c_31=3*p2.z*c_30;
    double c_32=c_22+c_29+c_31;
    double c_33=2*p1.z;
    double c_34=c_33+p2.z+p3.z;
    double c_35=p2.z+c_17;
    double c_36=-p2.z;
    double c_37=p1.z+c_36;
    double c_38=3*p2.z;
    double c_39=3*p1.z;
    double c_40=12*p2.z*p3.z;
    double c_41=c_38+p3.z;
    double c_42=4*p3.z;
    double c_43=p2.z+p3.z;
    double c_44=5*p3.z;
    double c_45=p1.z+p2.z+c_13;
    double c_46=-(6*c_1);
    double c_47=-(30*p2.z*p3.z);
    double c_48=6*c_24*p1.z*p3.z;
    double c_49=-(30*c_27*p1.z*p3.z);
    double c_50=p11_4;
    double c_51=p11_3;
    double c_52=2*c_0;
    double c_53=2*p1.z*p3.z;
    double c_54=2*p1.z*p2.z;
    double c_55=-(6*c_2);
    double c_56=3*c_43;
    double c_57=c_33+c_56;
    double c_58=3*c_1;
    double c_59=-(10*c_1);
    double c_60=-(3*c_1);
    double c_61=9*p1.z*c_43;
    double c_62=p2.z+c_44;
    double c_63=4*p2.z*p3.z;
    double c_64=-(10*c_2);
    double c_65=-(2*p2.z*p3.z);
    double c_66=30*c_24*p1.z*p2.z;
    double c_67=-(6*c_27*p1.z*p2.z);
    double c_68=3*p3.z*c_11;
    double c_69=6*p3.z;
    double c_70=p2.z+c_69;
    double c_71=2*p1.z*c_70;
    double c_72=c_22+c_68+c_71;
    double c_73=4*c_0;
    double c_74=c_39+c_38+c_13;
    double c_75=c_39+c_4+c_17;
    double c_76=4*p2.z;
    double c_77=c_0+c_54+c_58+c_55;
    double c_78=c_0+c_46+c_53+c_16;
    double c_79=9*c_7*c_10*c_1;
    double c_80=-(9*c_7*c_10*c_2);
    double c_81=-(p2.y*p3.y*c_20*c_57);
    double c_82=6*c_0;
    double c_83=-c_1;
    double c_84=p20_2;
    double c_85=c_5+c_46+c_53+c_2;
    double c_86=c_76+p3.z;
    double c_87=3*p3.z*c_86;
    double c_88=c_76+c_69;
    double c_89=p1.z*c_88;
    double c_90=c_5+c_87+c_89;
    double c_91=-6*c_0;
    double c_92=2*p2.z*p3.z;
    double c_93=c_91+c_58+c_92+c_2;
    double c_94=c_5+c_54+c_1+c_55;
    double c_95=(c_43*c_43);
    double c_96=3*c_95;
    double c_97=p2.z+c_42;
    double c_98=3*p2.z*c_97;
    double c_99=c_21+c_42;
    double c_100=p1.z*c_99;
    double c_101=c_5+c_98+c_100;
    double c_102=2*p1.z*c_20;
    double c_103=c_52+c_1+c_102+c_3;
    double c_104=2*c_2;
    double c_105=3*p1.z*c_41;
    double c_106=3*p2.z*c_35;
    double c_107=c_73+c_105+c_106;
    double c_108=10*c_0;
    double c_109=6*p2.z*p3.z;
    double c_110=-(2*p1.z*p2.z);
    double c_111=c_52+c_110+c_60+c_53+c_2;
    double c_112=3*p3.z*c_41;
    double c_113=3*p1.z*c_35;
    double c_114=c_73+c_112+c_113;
    double c_115=2*c_1;
    double c_116=3*p2.z*p3.z;
    double c_117=p20_3;
    double c_118=2*p1.z*c_11;
    double c_119=c_5+c_59+c_2+c_118;
    double c_120=3*p3.z*c_9;
    double c_121=c_6+c_17;
    double c_122=p1.z*c_121;
    double c_123=c_52+c_120+c_122;
    double c_124=-3*c_0;
    double c_125=10*c_1;
    double c_126=3*c_25*p3.y*c_0;
    double c_127=15*c_24*c_1;
    double c_128=6*c_25*p3.y*p1.z*p3.z;
    double c_129=-(6*p2.y*c_26*p2.z*p3.z);
    double c_130=-15*c_0;
    double c_131=-(6*p2.z*p3.z);
    double c_132=c_0+c_83;
    double c_133=c_91+c_1+c_92+c_16;
    double c_134=-10*c_0;
    double c_135=12*p1.z*p3.z;
    double c_136=c_108+c_60+c_135+c_109+c_16;
    double c_137=6*p1.z*p3.z;
    double c_138=c_124+c_125+c_137+c_40+c_16;
    double c_139=-(3*p2.y*c_26*c_0);
    double c_140=-(6*p2.y*c_26*p1.z*p2.z);
    double c_141=-(9*p2.y*c_26*c_1);
    double c_142=6*c_25*p3.y*p2.z*p3.z;
    double c_143=9*c_25*p3.y*c_2;
    double c_144=-(15*c_27*c_2);
    double c_145=15*c_0;
    double c_146=-c_2;
    double c_147=12*p1.z*p2.z;
    double c_148=c_108+c_147+c_58+c_109+c_3;
    double c_149=p3.y*c_148;
    double c_150=4*p1.z*p2.z;
    double c_151=c_134+c_150+c_58+c_92+c_2;
    double c_152=9*p2.z*p3.z;
    double c_153=2*p1.z*c_30;
    double c_154=c_5+c_1+c_64+c_153;
    double c_155=3*p2.z*c_62;
    double c_156=c_38+c_44;
    double c_157=p1.z*c_156;
    double c_158=c_52+c_155+c_157;
    double c_159=-(6*p1.z*p2.z);
    double c_160=6*c_1;
    double c_161=-(12*p2.z*p3.z);
    double c_162=c_5+c_159+c_60+c_161+c_64;
    return (2*c_117*p3.x*(3*c_15*c_20*c_19+3*p1.y*p3.y*(c_0+c_54+c_115+c_65+c_3)-3*p1.y*p2.y*(c_0+c_59+c_53+c_63+c_16)+p2.y*
        p3.y*(c_5+c_125+c_3+c_12)-2*c_7*(c_5+3*p1.z*c_9+p3.z*c_14)+c_10*(c_5+c_61+p2.z*(c_76+c_17)))+p20_4*(5*c_7*c_18*(p1.z+c_21+p3.z)+2*
        p2.y*p3.y*(c_82+15*c_1+c_146+6*p1.z*c_9)+c_10*(c_5+c_12+p2.z*c_14)-c_15*(5*c_1+c_40+c_16+2*p1.z*c_35)+2*p1.y*(3*
        p3.y*c_18*c_19+p2.y*(c_0-15*c_1-6*p1.z*p3.z+c_47+c_55)))+p10_4*(-6*p2.y*p3.y*c_20*c_34-5*c_15*c_20*(6*p1.z+p2.z+p3.z)-c_10*
        c_32+c_7*c_72+2*p1.y*(p3.y*(c_130-30*p1.z*p2.z+c_46+c_131+c_2)+p2.y*(c_145+c_83+30*p1.z*p3.z+c_109+6*c_2)))+c_23*
        (-3*c_23*c_7*c_0+3*c_24*c_0-12*c_23*p2.y*p3.y*c_0+6*c_25*p3.y*c_0-5*c_23*c_10*c_0+9*c_7*c_10*c_0+12*p2.y*c_26*c_0-5*c_27*
        c_0-6*c_23*c_7*p1.z*p2.z+12*c_24*p1.z*p2.z-12*c_23*p2.y*p3.y*p1.z*p2.z+18*c_25*p3.y*p1.z*p2.z+18*c_7*c_10*p1.z*p2.z+12*
        p2.y*c_26*p1.z*p2.z+5*c_24*c_1+2*c_23*p2.y*p3.y*c_1+8*c_25*p3.y*c_1+5*c_23*c_10*c_1+c_79+8*p2.y*c_26*c_1+5*c_27*c_1-12*
        c_23*c_7*p1.z*p3.z+c_48-60*c_23*p2.y*p3.y*p1.z*p3.z+18*c_25*p3.y*p1.z*p3.z-30*c_23*c_10*p1.z*p3.z+36*c_7*c_10*p1.z*
        p3.z+60*p2.y*c_26*p1.z*p3.z+c_49-2*c_23*c_7*p2.z*p3.z+2*c_24*p2.z*p3.z+c_142+30*c_23*c_10*p2.z*p3.z+12*c_7*c_10*
        p2.z*p3.z+20*p2.y*c_26*p2.z*p3.z+30*c_27*p2.z*p3.z-5*c_23*c_7*c_2-30*c_23*p2.y*p3.y*c_2-c_50*c_32+2*c_51*(3*p2.y*c_37*
        c_34-p3.y*c_107)+c_15*(3*c_7*c_37*c_74+6*p2.y*p3.y*c_37*c_75+c_23*(c_58+c_40+5*c_2+2*p1.z*c_41)-3*c_10*c_101)-2*p1.y*(-3*
        c_25*c_37*c_19-9*p2.y*c_10*c_37*c_45-3*c_7*p3.y*c_37*c_57+2*c_26*c_158+c_23*(3*p2.y*c_37*c_45+p3.y*(c_0+c_159+c_46+c_47-15*
        c_2))))+2*p2.x*p3.x*(6*c_24*c_0+c_126+c_139-6*c_27*c_0+c_66+12*c_25*p3.y*p1.z*p2.z+c_140+c_67+c_127+10*c_25*p3.y*c_1+6*c_7*
        c_10*c_1+3*p2.y*c_26*c_1+c_27*c_1+c_48+c_128-12*p2.y*c_26*p1.z*p3.z+c_49-c_24*c_2-3*c_25*p3.y*c_2-6*c_7*c_10*c_2-10*p2.y*
        c_26*c_2+c_144-3*c_50*c_20*c_34+3*c_51*(-(p3.y*c_103)+p2.y*c_111)+3*c_15*(-(c_10*c_94)+c_7*c_85+c_81)+3*p1.y*(-(p2.y*c_10*
        c_77)+c_7*p3.y*c_78+c_25*c_119-c_26*c_154)+c_23*(3*c_15*c_20*c_45-p2.y*p3.y*(c_5+c_60+10*c_2+6*p1.z*c_30)-c_7*(c_5+c_61+p3.z*
        (c_38+c_42))+2*c_10*(c_5+3*p1.z*c_62+p2.z*(c_4+c_44))+p1.y*(3*p3.y*(c_0+c_54+c_58+c_63+c_64)-3*p2.y*(c_0+c_60+c_53+c_65+c_104))))+c_84*
        (-9*c_23*c_7*c_0+5*c_24*c_0-12*c_25*p3.y*c_0+9*c_23*c_10*c_0-9*c_7*c_10*c_0-6*p2.y*c_26*c_0-3*c_27*c_0-36*
        c_23*c_7*p1.z*p2.z+c_66-60*c_25*p3.y*p1.z*p2.z+18*c_23*c_10*p1.z*p2.z-36*c_7*c_10*p1.z*p2.z-18*p2.y*c_26*p1.z*p2.z+c_67+12*
        c_23*p2.y*p3.y*c_1+9*c_23*c_10*c_1-18*c_23*c_7*p1.z*p3.z-12*c_25*p3.y*p1.z*p3.z+36*c_23*c_10*p1.z*p3.z-18*c_7*
        c_10*p1.z*p3.z-18*p2.y*c_26*p1.z*p3.z-12*c_27*p1.z*p3.z-12*c_23*c_7*p2.z*p3.z-30*c_24*p2.z*p3.z-20*c_25*p3.y*p2.z*
        p3.z+12*c_23*c_10*p2.z*p3.z-12*c_7*c_10*p2.z*p3.z+c_129-2*c_27*p2.z*p3.z-9*c_23*c_7*c_2-5*c_24*c_2-12*c_23*p2.y*p3.y*
        c_2-8*c_25*p3.y*c_2+c_80-8*p2.y*c_26*c_2-5*c_27*c_2+c_50*c_72+2*c_51*(-3*p3.y*c_18*c_34+p2.y*c_114)+3*c_15*(-2*p2.y*p3.y*
        c_18*c_74-c_10*c_18*c_75+c_23*c_20*c_57+c_7*c_90)-2*p1.y*(9*c_7*p3.y*c_18*c_19+3*c_26*c_18*c_45+3*p2.y*c_10*c_18*c_57-2*c_25*
        c_123+3*c_23*(-(p3.y*c_77)+p2.y*c_78)))+p10_2*(-30*c_50*p1.z*p2.z-20*c_51*p2.y*p1.z*p2.z-12*c_15*c_7*p1.z*p2.z-6*p1.y*
        c_25*p1.z*p2.z-2*c_24*p1.z*p2.z+60*c_51*p3.y*p1.z*p2.z+36*c_15*p2.y*p3.y*p1.z*p2.z+18*p1.y*c_7*p3.y*p1.z*p2.z+6*
        c_25*p3.y*p1.z*p2.z+36*c_15*c_10*p1.z*p2.z+18*p1.y*p2.y*c_10*p1.z*p2.z+6*c_7*c_10*p1.z*p2.z+18*p1.y*c_26*p1.z*
        p2.z+6*p2.y*c_26*p1.z*p2.z+6*c_27*p1.z*p2.z-5*c_50*c_1-8*c_51*p2.y*c_1-9*c_15*c_7*c_1-8*p1.y*c_25*c_1-5*c_24*c_1+12*c_51*
        p3.y*c_1+18*c_15*p2.y*p3.y*c_1+18*p1.y*c_7*p3.y*c_1+12*c_25*p3.y*c_1+9*c_15*c_10*c_1+12*p1.y*p2.y*c_10*c_1+c_79+6*p1.y*
        c_26*c_1+6*p2.y*c_26*c_1+3*c_27*c_1+30*c_50*p1.z*p3.z-60*c_51*p2.y*p1.z*p3.z-36*c_15*c_7*p1.z*p3.z-18*p1.y*c_25*p1.z*
        p3.z-6*c_24*p1.z*p3.z+20*c_51*p3.y*p1.z*p3.z-36*c_15*p2.y*p3.y*p1.z*p3.z-18*p1.y*c_7*p3.y*p1.z*p3.z-6*c_25*p3.y*
        p1.z*p3.z+12*c_15*c_10*p1.z*p3.z-18*p1.y*p2.y*c_10*p1.z*p3.z-6*c_7*c_10*p1.z*p3.z+6*p1.y*c_26*p1.z*p3.z-6*p2.y*
        c_26*p1.z*p3.z+2*c_27*p1.z*p3.z-12*c_51*p2.y*p2.z*p3.z-18*c_15*c_7*p2.z*p3.z-18*p1.y*c_25*p2.z*p3.z-12*c_24*p2.z*
        p3.z+12*c_51*p3.y*p2.z*p3.z-6*p1.y*c_7*p3.y*p2.z*p3.z-6*c_25*p3.y*p2.z*p3.z+18*c_15*c_10*p2.z*p3.z+6*p1.y*p2.y*
        c_10*p2.z*p3.z+18*p1.y*c_26*p2.z*p3.z+6*p2.y*c_26*p2.z*p3.z+12*c_27*p2.z*p3.z+5*c_50*c_2-12*c_51*p2.y*c_2-9*c_15*c_7*
        c_2-6*p1.y*c_25*c_2-3*c_24*c_2+8*c_51*p3.y*c_2-18*c_15*p2.y*p3.y*c_2-12*p1.y*c_7*p3.y*c_2-6*c_25*p3.y*c_2+9*c_15*c_10*
        c_2-18*p1.y*p2.y*c_10*c_2+c_80+8*p1.y*c_26*c_2-12*p2.y*c_26*c_2+5*c_27*c_2+6*p2.x*p3.x*(3*c_15*c_20*c_34-c_7*c_18*c_74+c_10*
        c_37*c_75+c_81+p1.y*(p3.y*(c_82+c_83+c_65+c_3)+p2.y*c_93))-3*c_84*(-(c_10*c_37*c_74)-2*p2.y*p3.y*c_85+c_15*(c_96+4*p1.z*
        c_35)-c_7*c_90+p1.y*(-4*p2.y*c_132+2*p3.y*c_93))+3*c_23*(-(c_7*c_18*c_75)-2*p2.y*p3.y*c_94+c_15*(c_96+4*p1.z*c_41)-c_10*
        c_101+p1.y*(4*p3.y*(-c_0+c_2)+2*p2.y*c_133)))-2*p10_3*(p3.x*(3*c_7*c_18*c_34+3*p2.y*p3.y*c_103-2*c_15*(c_58+c_116+c_104+5*
        p1.z*c_41)+c_10*c_107+p1.y*(3*p2.y*(c_108+c_83-4*p1.z*p3.z+c_65+c_3)+c_149))+p2.x*(-3*c_10*c_37*c_34-3*p2.y*p3.y*
        c_111-c_7*c_114+2*c_15*(c_115+c_116+c_16+5*p1.z*c_35)+p1.y*(3*p3.y*c_151-p2.y*c_136)))-2*p1.x*(-3*c_84*p3.x*(-3*c_7*c_18*
        c_19+c_15*c_20*c_74+p1.y*p3.y*c_18*c_75-p1.y*p2.y*c_85+p2.y*p3.y*c_78+c_10*c_37*c_57)+c_117*(-3*c_10*c_37*c_19-3*p2.y*p3.y*
        c_119+c_15*(4*c_1+c_152+c_16+c_113)-2*c_7*c_123+p1.y*(3*p3.y*(c_124+c_110+c_115+c_92+c_2)+p2.y*c_138))+p2.x*(-(c_24*
        c_0)+c_126+3*c_7*c_10*c_0+3*p2.y*c_26*c_0+3*c_27*c_0+c_127-30*c_25*p3.y*c_1-18*c_7*c_10*c_1+c_141-3*c_27*c_1+c_48+c_128+6*c_7*c_10*
        p1.z*p3.z+6*p2.y*c_26*p1.z*p3.z+6*c_27*p1.z*p3.z+30*c_24*p2.z*p3.z+12*c_25*p3.y*p2.z*p3.z+c_129-6*c_27*p2.z*p3.z+6*
        c_24*c_2+c_143+9*c_7*c_10*c_2+6*p2.y*c_26*c_2+c_50*(c_130+c_1-30*p1.z*p3.z+c_131+c_55)-3*c_15*(2*c_7*c_132+c_23*c_20*
        c_75+p2.y*p3.y*c_93+c_10*c_133)-c_51*(3*p3.y*(c_134+c_1+4*p1.z*p3.z+c_92+c_16)+p2.y*c_136)+3*c_23*(-3*c_10*c_37*c_45+p2.y*
        p3.y*c_77+c_7*c_18*c_57)+p1.y*(3*p2.y*c_10*c_37*c_74+3*c_26*(c_5+c_83+c_53+c_65-2*c_2)+3*c_7*p3.y*c_85+c_25*c_138+3*c_23*
        (p2.y*c_37*c_74-p3.y*c_94)))+p3.x*(-3*c_24*c_0-3*c_25*p3.y*c_0-3*c_7*c_10*c_0+c_139+c_27*c_0-6*c_24*p1.z*p2.z-6*c_25*p3.y*
        p1.z*p2.z-6*c_7*c_10*p1.z*p2.z+c_140+c_67-6*c_25*p3.y*c_1-9*c_7*c_10*c_1+c_141-6*c_27*c_1+6*c_24*p2.z*p3.z+c_142-12*p2.y*
        c_26*p2.z*p3.z-30*c_27*p2.z*p3.z+3*c_24*c_2+c_143+18*c_7*c_10*c_2+30*p2.y*c_26*c_2+c_144+c_50*(c_145+30*p1.z*
        p2.z+c_160+c_109+c_146)+c_51*(c_149+3*p2.y*c_151)+c_15*(6*c_10*(c_0+c_146)+3*c_7*c_93+3*p2.y*p3.y*c_133-c_23*(9*p1.z*p2.z+c_58+3*
        p1.z*p3.z+c_152+4*c_2))+c_23*(3*c_7*c_18*c_45+3*p2.y*p3.y*c_154+2*c_10*c_158)+p1.y*(-3*c_7*p3.y*c_18*c_75+c_26*c_162-3*
        p2.y*c_10*c_94+c_25*(-9*c_0+c_159+c_160+c_109+c_16)+c_23*(p3.y*c_162+p2.y*(9*c_0+c_137-3*(c_1+c_92+c_104)))))))/double(967680);
}

double trig::s55() const{
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p11_4=p1.y*p11_3;
    double p11_5=p1.y*p11_4;
    double p11_6=p1.y*p11_5;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p31_4=p3.y*p31_3;
    double p31_5=p3.y*p31_4;
    double p31_6=p3.y*p31_5;
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p21_4=p2.y*p21_3;
    double p21_5=p2.y*p21_4;
    double p21_6=p2.y*p21_5;
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
    double c_0=3*p1.z;
    double c_1=p11_2;
    double c_2=-p3.z;
    double c_3=p2.z+c_2;
    double c_4=p31_2;
    double c_5=3*p2.z;
    double c_6=p21_2;
    double c_7=4*p1.z;
    double c_8=3*p3.z;
    double c_9=24*p1.z;
    double c_10=4*p2.z;
    double c_11=24*p2.z;
    double c_12=15*p3.z;
    double c_13=-(2*p3.z);
    double c_14=p1.z+p2.z+c_13;
    double c_15=p1.z+c_2;
    double c_16=2*p3.z;
    double c_17=c_0+c_5+c_16;
    double c_18=-p2.z;
    double c_19=7*p1.z;
    double c_20=5*p2.y*p1.z;
    double c_21=5*p3.y*p1.z;
    double c_22=p21_4;
    double c_23=p21_3;
    double c_24=p31_3;
    double c_25=p31_4;
    double c_26=-(2*p2.z);
    double c_27=p1.z+c_26+p3.z;
    double c_28=-(4*p3.z);
    double c_29=c_18+p3.z;
    double c_30=-(5*p2.z);
    double c_31=p1.z+c_5+c_28;
    double c_32=3*c_1*c_3;
    double c_33=-(3*p2.z);
    double c_34=p1.z+c_33+c_16;
    double c_35=2*p2.z;
    double c_36=c_0+c_35+c_8;
    double c_37=6*p1.z;
    double c_38=p11_4;
    double c_39=p11_3;
    double c_40=-p1.z;
    double c_41=c_40+p3.z;
    double c_42=3*p3.y*c_41;
    double c_43=p30_2;
    double c_44=9*p3.z;
    double c_45=8*p2.z;
    double c_46=-(3*p3.z);
    double c_47=p2.z+p3.z;
    double c_48=5*c_47;
    double c_49=c_37+c_48;
    double c_50=p1.z+c_10+c_8;
    double c_51=p21_6;
    double c_52=p21_5;
    double c_53=p31_5;
    double c_54=p31_6;
    double c_55=5*p1.z;
    double c_56=3*p2.y*p3.z;
    double c_57=3*c_43*c_3;
    double c_58=3*c_4*c_41;
    double c_59=c_55+c_8;
    double c_60=p1.z+c_35+c_46;
    double c_61=p3.y*c_60;
    double c_62=-c_61;
    double c_63=p30_4;
    double c_64=p2.y*c_27;
    double c_65=-(5*p3.z);
    double c_66=-(4*p2.z);
    double c_67=5*p3.z;
    double c_68=c_0+c_67;
    double c_69=15*p1.z;
    double c_70=2*p1.z;
    double c_71=p1.z+c_66+c_8;
    double c_72=p20_2;
    double c_73=p1.z+c_18;
    double c_74=3*c_4*c_73;
    double c_75=c_70+c_33+p3.z;
    double c_76=5*p2.z;
    double c_77=6*p3.z;
    double c_78=6*p2.z;
    double c_79=c_70+p2.z+c_46;
    double c_80=p11_6;
    double c_81=p11_5;
    double c_82=3*p3.y*p2.z;
    double c_83=c_55+c_5;
    double c_84=c_40+p2.z;
    double c_85=4*p3.z;
    double c_86=15*p2.z;
    double c_87=24*p3.z;
    double c_88=c_0+p2.z+c_85;
    double c_89=7*p2.z;
    double c_90=9*p1.z;
    double c_91=p1.z+c_5+c_85;
    double c_92=8*p3.z;
    double c_93=9*p2.z;
    double c_94=10*p3.z;
    double c_95=p20_3;
    double c_96=p2.y*c_41;
    double c_97=p3.y*c_73;
    double c_98=p1.y*c_3;
    double c_99=c_97+c_98+c_96;
    double c_100=p20_4;
    double c_101=-(3*c_6*c_15);
    double c_102=7*p3.z;
    double c_103=3*c_47;
    double c_104=c_70+c_103;
    double c_105=-2*p1.z;
    double c_106=c_105+p2.z+p3.z;
    double c_107=3*c_4*c_17;
    double c_108=-4*p1.z;
    double c_109=c_108+p2.z+c_8;
    double c_110=c_5+c_67;
    double c_111=-(9*c_6*c_4*p1.z);
    double c_112=-(3*c_25*p1.z);
    double c_113=3*c_25*p2.z;
    double c_114=p2.y+p3.y;
    double c_115=-(9*c_6*c_4*p3.z);
    double c_116=-(3*p2.y*c_24*p3.z);
    double c_117=-3*p1.z;
    double c_118=16*p1.z;
    double c_119=c_108+c_5+p3.z;
    double c_120=c_76+c_8;
    double c_121=2*p3.y;
    double c_122=c_0+c_66+p3.z;
    double c_123=c_55+c_76+c_77;
    double c_124=-5*c_22*p1.z;
    double c_125=2*p2.y;
    double c_126=p3.y*c_84;
    double c_127=p2.y*c_15;
    double c_128=c_126+c_127;
    double c_129=16*p2.z;
    double c_130=3*c_23*p3.y*p2.z;
    double c_131=9*p2.y*c_24*p2.z;
    double c_132=-(3*c_22*p3.z);
    double c_133=c_0+p2.z+c_28;
    double c_134=c_55+c_78+c_67;
    double c_135=-9*p1.z;
    return (c_100*p3.x*(3*p2.y*p3.y*(c_0+c_76)+3*p1.y*p3.y*c_14+c_32-5*c_6*c_17+c_4*(c_37+c_89+c_8)-3*p1.y*p2.y*
        (p1.z+c_30+c_85))+p10_5*(-9*c_1*c_3+3*p2.y*p3.y*c_29-c_4*(c_7+c_5+p3.z)-p1.y*p3.y*(c_9+c_86+p3.z)+c_6*(c_7+p2.z+c_8)+p1.y*p2.y*
        (c_9+p2.z+c_12))+p20_5*(9*c_6*c_15+c_4*(c_0+c_10+p3.z)+p2.y*p3.y*(c_69+c_11+p3.z)-c_1*c_50-p1.y*(c_42+p2.y*
        (p1.z+c_11+c_12)))+p10_4*(p3.x*(-3*p2.y*p3.y*c_14+c_101+5*c_1*c_17-c_4*(c_19+c_78+c_8)-3*p1.y*(c_20+c_21-p2.y*p2.z+c_82-4*p2.y*
        p3.z))+p2.x*(c_74+3*p2.y*p3.y*c_27-5*c_1*c_36+c_6*(c_19+c_5+c_77)+3*p1.y*(c_20+c_21-4*p3.y*p2.z+c_56-p3.y*p3.z)))+c_72*
        p3.x*(30*c_22*p1.z+6*c_23*p3.y*p1.z+c_111-15*p2.y*c_24*p1.z-12*c_25*p1.z+45*c_22*p2.z+10*c_23*p3.y*p2.z-6*c_6*c_4*
        p2.z-9*p2.y*c_24*p2.z-5*c_25*p2.z-3*c_38*c_3+5*c_22*p3.z+c_115-16*p2.y*c_24*p3.z-15*c_25*p3.z+3*c_1*(-(p2.y*p3.y*c_31)-c_4*
        c_79+3*c_6*c_27)+3*p1.y*(-(c_24*c_133)-3*p2.y*c_4*c_14+6*c_6*p3.y*c_29+2*c_23*(c_0+c_30+c_16))+3*c_39*(-(p3.y*c_14)+p2.y*
        c_34)+c_43*(p2.y*p3.y*(c_117+c_5-8*p3.z)+3*p1.y*p3.y*c_31+c_32-3*p1.y*p2.y*c_34-3*c_6*c_36+2*c_4*c_49))+c_95*(5*c_22*
        p1.z-30*c_23*p3.y*p1.z-18*c_6*c_4*p1.z-9*p2.y*c_24*p1.z+c_112-40*c_23*p3.y*p2.z-20*c_6*c_4*p2.z-8*p2.y*c_24*p2.z-2*
        c_25*p2.z-5*c_22*p3.z-10*c_23*p3.y*p3.z-10*c_6*c_4*p3.z-7*p2.y*c_24*p3.z-3*c_25*p3.z+c_38*c_36+c_39*(c_42+p2.y*
        (c_19+c_45+c_44))+c_1*(c_57+9*p2.y*p3.y*c_41+c_58+2*c_6*(c_55+10*p2.z+c_44))+c_43*(p2.y*p3.y*(c_0+c_45+c_46)+c_107-2*c_6*
        c_49)+p1.y*(-18*c_6*p3.y*c_15+9*p2.y*c_4*c_41+3*c_24*c_41+10*c_23*c_50-3*c_43*(c_62+p2.y*c_71)))+p2.x*(-5*c_51*p1.z+3*c_52*
        p3.y*p1.z+3*c_22*c_4*p1.z+3*c_23*c_24*p1.z+3*c_6*c_25*p1.z+3*p2.y*c_53*p1.z+3*c_54*p1.z+5*c_51*p3.z+5*c_52*p3.y*p3.z+5*
        c_22*c_4*p3.z+5*c_23*c_24*p3.z+5*c_6*c_25*p3.z+5*p2.y*c_53*p3.z+5*c_54*p3.z-c_80*c_59-c_81*(c_20-3*p3.y*p1.z+c_56+3*
        p3.y*p3.z)-c_38*(c_57+3*p2.y*p3.y*c_41+c_58+c_6*c_59)-c_63*(-5*c_4*c_36+3*p2.y*p3.y*c_68+c_6*(c_37+c_5+c_102))+c_39*(3*
        c_6*p3.y*c_15+3*p2.y*c_4*c_15+3*c_24*c_15-c_23*c_59+3*c_43*(c_62+c_64))+p1.y*(3*c_22*p3.y*c_15+3*c_23*c_4*c_15+3*c_6*c_24*
        c_15+3*p2.y*c_25*c_15+3*c_53*c_15-c_52*c_59-3*c_63*(-(p3.y*(p1.z+c_10+c_65))+c_64)+3*c_43*(-2*c_24*(c_0+c_35+c_65)+c_23*c_122+3*
        c_6*p3.y*c_27+6*p2.y*c_4*c_29))+c_43*(3*c_6*c_4*c_17-2*p2.y*c_24*c_68-5*c_25*(c_37+p2.z+c_44)+c_23*p3.y*(c_69+c_129+c_44)+c_22*
        (12*p1.z+5*(c_5+p3.z)))+c_1*(3*c_23*p3.y*c_15+3*c_6*c_4*c_15+3*p2.y*c_24*c_15+3*c_25*c_15+3*c_63*c_3-c_22*c_59+3*
        c_43*(-3*c_4*c_14+c_6*c_75+p2.y*p3.y*c_71)))+p10_3*(-40*c_39*p2.y*p1.z-20*c_1*c_6*p1.z-8*p1.y*c_23*p1.z-2*c_22*p1.z+40*
        c_39*p3.y*p1.z+20*c_1*c_4*p1.z+8*p1.y*c_24*p1.z+2*c_25*p1.z-5*c_38*p2.z-10*c_39*p2.y*p2.z-10*c_1*c_6*p2.z-7*p1.y*
        c_23*p2.z-3*c_22*p2.z+30*c_39*p3.y*p2.z+18*c_1*p2.y*p3.y*p2.z+9*p1.y*c_6*p3.y*p2.z+c_130+18*c_1*c_4*p2.z+9*p1.y*p2.y*
        c_4*p2.z+3*c_6*c_4*p2.z+9*p1.y*c_24*p2.z+3*p2.y*c_24*p2.z+c_113+5*c_38*p3.z-30*c_39*p2.y*p3.z-18*c_1*c_6*p3.z-9*
        p1.y*c_23*p3.z+c_132+10*c_39*p3.y*p3.z-18*c_1*p2.y*p3.y*p3.z-9*p1.y*c_6*p3.y*p3.z-3*c_23*p3.y*p3.z+10*c_1*c_4*p3.z-9*
        p1.y*p2.y*c_4*p3.z-3*c_6*c_4*p3.z+7*p1.y*c_24*p3.z+c_116+3*c_25*p3.z+6*p2.x*p3.x*(2*p1.y+p2.y+p3.y)*(p3.y*
        p1.z+p1.y*p2.z-p3.y*p2.z-p1.y*p3.z+c_96)+c_72*(c_74+3*p1.y*p3.y*(c_7+c_33+c_2)+3*p2.y*p3.y*c_75+p1.y*p2.y*(8*
        p1.z+c_33+c_8)+3*c_6*c_36-2*c_1*c_123)+c_43*(2*c_1*c_134-3*(p2.y*p3.y*c_79+c_6*c_15+c_4*c_17)+p1.y*(p3.y*(-8*p1.z+c_33+c_8)+3*p2.y*
        c_109)))+p3.x*(-3*c_51*p1.z-3*c_52*p3.y*p1.z-3*c_22*c_4*p1.z-3*c_23*c_24*p1.z-3*c_6*c_25*p1.z-3*p2.y*c_53*p1.z+5*
        c_54*p1.z-5*c_51*p2.z-5*c_52*p3.y*p2.z-5*c_22*c_4*p2.z-5*c_23*c_24*p2.z-5*c_6*c_25*p2.z-5*p2.y*c_53*p2.z-5*c_54*p2.z+c_80*
        c_83+c_81*(-3*p2.y*p1.z+c_21+3*p2.y*p2.z+c_82)+c_38*(-3*c_6*c_73+3*p2.y*p3.y*c_84+c_4*c_83)+c_39*(-3*c_23*c_73+3*c_6*
        p3.y*c_84+3*p2.y*c_4*c_84+c_24*c_83)+c_1*(-3*c_22*c_73+3*c_23*p3.y*c_84+3*c_6*c_4*c_84+3*p2.y*c_24*c_84+c_25*c_83)+p1.y*
        (-3*c_52*c_73+3*c_22*p3.y*c_84+3*c_23*c_4*c_84+3*c_6*c_24*c_84+3*p2.y*c_25*c_84+c_53*c_83)+c_63*(-3*p1.y*p2.y*c_73+9*c_4*
        c_84-c_6*c_88+c_1*c_91-p2.y*p3.y*(c_69+p2.z+c_87)+p1.y*p3.y*(p1.z+c_86+c_87))+c_43*(5*c_25*c_84-c_38*c_17+c_22*c_17+10*
        p2.y*c_24*c_88+c_23*p3.y*(c_90+c_89+c_92)+2*c_6*c_4*(c_90+c_76+c_94)+p1.y*(3*c_23*c_73+9*c_6*p3.y*c_73+18*p2.y*c_4*c_73-10*
        c_24*c_91)+c_39*(3*p2.y*c_73-p3.y*(c_19+c_93+c_92))+c_1*(3*c_6*c_73+9*p2.y*p3.y*c_73-2*c_4*(c_55+c_93+c_94))))+p1.x*(5*
        c_80*p2.z+5*c_81*p2.y*p2.z+5*c_38*c_6*p2.z+5*c_39*c_23*p2.z+5*c_1*c_22*p2.z+5*p1.y*c_52*p2.z+5*c_51*p2.z-3*c_81*p3.y*
        p2.z-3*c_38*p2.y*p3.y*p2.z-3*c_39*c_6*p3.y*p2.z-3*c_1*c_23*p3.y*p2.z-3*p1.y*c_22*p3.y*p2.z-3*c_52*p3.y*p2.z-3*c_38*
        c_4*p2.z-3*c_39*p2.y*c_4*p2.z-3*c_1*c_6*c_4*p2.z-3*p1.y*c_23*c_4*p2.z-3*c_22*c_4*p2.z-3*c_39*c_24*p2.z-3*c_1*p2.y*c_24*
        p2.z-3*p1.y*c_6*c_24*p2.z-3*c_23*c_24*p2.z-3*c_1*c_25*p2.z-3*p1.y*p2.y*c_25*p2.z-3*c_6*c_25*p2.z-3*p1.y*c_53*p2.z-3*
        p2.y*c_53*p2.z-3*c_54*p2.z-5*c_80*p3.z+3*c_81*p2.y*p3.z+3*c_38*c_6*p3.z+3*c_39*c_23*p3.z+3*c_1*c_22*p3.z+3*p1.y*
        c_52*p3.z+3*c_51*p3.z-5*c_81*p3.y*p3.z+3*c_38*p2.y*p3.y*p3.z+3*c_39*c_6*p3.y*p3.z+3*c_1*c_23*p3.y*p3.z+3*p1.y*c_22*
        p3.y*p3.z+3*c_52*p3.y*p3.z-5*c_38*c_4*p3.z+3*c_39*p2.y*c_4*p3.z+3*c_1*c_6*c_4*p3.z+3*p1.y*c_23*c_4*p3.z+3*c_22*c_4*
        p3.z-5*c_39*c_24*p3.z+3*c_1*p2.y*c_24*p3.z+3*p1.y*c_6*c_24*p3.z+3*c_23*c_24*p3.z-5*c_1*c_25*p3.z+3*p1.y*p2.y*c_25*
        p3.z+3*c_6*c_25*p3.z-5*p1.y*c_53*p3.z+3*p2.y*c_53*p3.z-5*c_54*p3.z+6*c_95*p3.x*(p1.y+c_125+p3.y)*c_99+6*p2.x*p3.x*(-2*
        c_39-2*c_23-3*c_6*p3.y-3*p2.y*c_4-2*c_24-3*c_1*c_114+c_43*(p1.y+p2.y+c_121)-p1.y*(3*c_6+4*p2.y*p3.y+3*c_4))*c_99-c_100*
        (3*c_4*c_84-3*p2.y*p3.y*(c_7+c_30+p3.z)+c_1*(c_0+c_89+c_77)-5*c_6*c_104+3*p1.y*(p3.y*c_106+p2.y*c_120))+c_63*(-3*p2.y*
        p3.y*(c_7+p2.z+c_65)+c_101+c_1*(c_0+c_78+c_102)-5*c_4*c_104+3*p1.y*(p2.y*c_106+p3.y*c_110))-c_43*(-6*p2.y*c_24*(c_70+c_5+c_65)-3*
        c_23*p3.y*c_79-9*c_6*c_4*c_14-3*c_22*c_15+c_38*(c_69+12*p2.z+c_67)-5*c_25*(p1.z+c_78+c_44)+c_1*(9*p2.y*p3.y*
        c_106+c_107+c_6*(c_135+c_78+c_8))+p1.y*(-18*p2.y*c_4*c_15+3*c_23*c_106+3*c_6*p3.y*c_109-2*c_24*c_110)+c_39*(3*p2.y*c_119+p3.y*
        (c_118+c_86+c_44)))+c_72*(c_124-12*c_23*p3.y*p1.z+c_111-6*p2.y*c_24*p1.z+c_112-45*c_22*p2.z+30*c_23*p3.y*p2.z+18*c_6*
        c_4*p2.z+c_131+c_113-9*c_43*c_114*c_128-30*c_22*p3.z-18*c_23*p3.y*p3.z+c_115+c_116+c_38*(c_69+c_76+12*p3.z)+3*c_1*(2*c_43*
        c_3+3*p2.y*p3.y*c_106+c_4*(c_117+p2.z+c_16)+c_6*c_36)+c_39*(3*p3.y*c_109+p2.y*(c_118+c_93+c_12))+p1.y*(-18*c_6*p3.y*c_73+3*
        c_24*c_106+3*p2.y*c_4*c_119-2*c_23*c_120+c_43*(3*p3.y*c_79-3*p2.y*c_75))))+p10_2*(3*c_72*p3.x*(3*p1.y+3*p2.y+c_121)*
        c_99+c_95*(c_74+3*p2.y*p3.y*c_122+2*c_6*c_123+p1.y*(3*p2.y*p1.z+9*p3.y*p1.z-8*p2.y*p2.z-6*p3.y*p2.z-3*p2.y*p3.z-3*
        p3.y*p3.z)-3*c_1*c_104)+p2.x*(c_124-3*c_23*p3.y*p1.z-3*c_6*c_4*p1.z-3*p2.y*c_24*p1.z+c_112-15*c_22*p2.z+12*c_23*p3.y*
        p2.z+9*c_6*c_4*p2.z+6*p2.y*c_24*p2.z+c_113-3*c_43*(c_125+3*p3.y)*c_128-12*c_22*p3.z-9*c_23*p3.y*p3.z-6*c_6*c_4*
        p3.z+c_116+5*c_38*(c_90+p2.z+c_77)+2*c_39*(c_20-15*p3.y*p1.z+6*p3.y*p2.z+c_56+9*p3.y*p3.z)-3*c_1*(6*p2.y*p3.y*c_73+c_6*
        c_104-3*(c_43*c_3+c_4*c_106))-p1.y*(3*c_24*(c_0+c_26+c_2)+3*p2.y*c_4*c_122+9*c_6*p3.y*c_27+c_23*(c_90+c_129+c_12)+c_43*(9*p2.y*
        p1.z+9*p3.y*c_41-3*p2.y*(c_35+p3.z))))+p3.x*(3*c_22*p1.z+3*c_23*p3.y*p1.z+3*c_6*c_4*p1.z+3*p2.y*c_24*p1.z+5*c_25*
        p1.z+c_130+6*c_6*c_4*p2.z+c_131+12*c_25*p2.z+c_132-6*c_23*p3.y*p3.z+c_115-12*p2.y*c_24*p3.z+15*c_25*p3.z-5*c_38*
        (c_90+c_78+p3.z)+2*c_39*(15*p2.y*p1.z-5*p3.y*p1.z-9*p2.y*p2.z-3*p3.y*p2.z-6*p2.y*p3.z)+3*c_1*(6*p2.y*p3.y*c_15+c_6*(c_37-3*
        c_47)+c_4*c_104)+p1.y*(3*c_6*p3.y*c_133+9*p2.y*c_4*c_14+c_24*(c_90+c_86+16*p3.z)+c_23*(c_90-3*(p2.z+c_16)))+c_43*(-3*
        p2.y*p3.y*c_133+c_101-2*c_4*c_134+c_1*(c_37+9*c_47)+p1.y*(p2.y*(c_135+c_5+c_77)+p3.y*(c_117+c_5+c_92))))))/double(1935360);
}

double trig::j6() const{
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p11_4=p1.y*p11_3;
    double p11_5=p1.y*p11_4;
    double p11_6=p1.y*p11_5;
    double p11_7=p1.y*p11_6;
    double p12_2=p1.z*p1.z;
    double p12_3=p1.z*p12_2;
    double p12_4=p1.z*p12_3;
    double p12_5=p1.z*p12_4;
    double p12_6=p1.z*p12_5;
    double p12_7=p1.z*p12_6;
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p21_4=p2.y*p21_3;
    double p21_5=p2.y*p21_4;
    double p21_6=p2.y*p21_5;
    double p21_7=p2.y*p21_6;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p31_4=p3.y*p31_3;
    double p31_5=p3.y*p31_4;
    double p31_6=p3.y*p31_5;
    double p31_7=p3.y*p31_6;
    double p22_2=p2.z*p2.z;
    double p22_3=p2.z*p22_2;
    double p22_4=p2.z*p22_3;
    double p22_5=p2.z*p22_4;
    double p22_6=p2.z*p22_5;
    double p22_7=p2.z*p22_6;
    double p32_2=p3.z*p3.z;
    double p32_3=p3.z*p32_2;
    double p32_4=p3.z*p32_3;
    double p32_5=p3.z*p32_4;
    double p32_6=p3.z*p32_5;
    double p32_7=p3.z*p32_6;
    double p30_2=p3.x*p3.x;
    double p30_3=p3.x*p30_2;
    double p30_4=p3.x*p30_3;
    double p30_5=p3.x*p30_4;
    double p30_6=p3.x*p30_5;
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
    double c_0=2*p1.z;
    double c_1=2*p2.z;
    double c_2=p1.z+c_1;
    double c_3=p3.y*c_2;
    double c_4=-p3.z;
    double c_5=p11_2;
    double c_6=p12_3;
    double c_7=p21_2;
    double c_8=p21_3;
    double c_9=p31_2;
    double c_10=p31_3;
    double c_11=p12_2;
    double c_12=p22_2;
    double c_13=p22_3;
    double c_14=p11_3;
    double c_15=p32_2;
    double c_16=p32_3;
    double c_17=-p2.z;
    double c_18=p2.z+c_4;
    double c_19=p1.y*c_18;
    double c_20=p1.z+c_17;
    double c_21=p3.y*c_20;
    double c_22=c_0+p3.z;
    double c_23=p2.y*c_22;
    double c_24=c_1+p3.z;
    double c_25=-(p1.y*c_24);
    double c_26=c_0+p2.z;
    double c_27=p3.y*c_26;
    double c_28=p1.z+c_4;
    double c_29=2*p3.z;
    double c_30=c_21+c_23+c_25;
    double c_31=-c_27;
    double c_32=-p1.z;
    double c_33=c_32+p3.z;
    double c_34=p2.y*c_33;
    double c_35=p2.z+c_29;
    double c_36=p30_2;
    double c_37=p1.z+c_29;
    double c_38=-(p2.y*c_37);
    double c_39=-(18*p3.y*c_6);
    double c_40=-(36*p3.y*c_11*p3.z);
    double c_41=c_3+c_19+c_38;
    double c_42=-(5*p2.z);
    double c_43=p20_2;
    double c_44=c_21+c_19+c_34;
    double c_45=-(3*c_7*p3.y*p2.z);
    double c_46=90*p2.y*c_11*p2.z;
    double c_47=18*p3.y*c_13;
    double c_48=-(2*p3.z);
    double c_49=p2.y*c_28;
    double c_50=3*c_8*p3.z;
    double c_51=6*c_7*p3.y*p3.z;
    double c_52=-(18*p2.y*c_12*p3.z);
    double c_53=36*p3.y*c_12*p3.z;
    double c_54=4*p3.z;
    double c_55=-(5*c_36*p2.z);
    double c_56=5*p1.z;
    double c_57=3*c_10*p1.z;
    double c_58=-(6*p2.y*c_9*p2.z);
    double c_59=-(3*c_10*p2.z);
    double c_60=3*p2.y*c_9*p3.z;
    double c_61=-(18*p3.y*p1.z*c_15);
    double c_62=-(36*p2.y*p2.z*c_15);
    double c_63=18*p3.y*p2.z*c_15;
    double c_64=-(18*p2.y*c_16);
    double c_65=14*p1.z;
    double c_66=4*p2.z;
    double c_67=3*p1.z;
    double c_68=-140*c_6;
    double c_69=30*p1.z*p2.z*p3.z;
    double c_70=6*c_12*p3.z;
    double c_71=6*p2.z*c_15;
    double c_72=3*p3.z;
    double c_73=10*p1.z;
    double c_74=p20_3;
    double c_75=p30_4;
    double c_76=p12_5;
    double c_77=p21_4;
    double c_78=p31_4;
    double c_79=p31_5;
    double c_80=p12_4;
    double c_81=p22_4;
    double c_82=p21_5;
    double c_83=p32_4;
    double c_84=p32_5;
    double c_85=8*p2.z;
    double c_86=9*p3.z;
    double c_87=3*p2.z;
    double c_88=c_0+c_66+c_72;
    double c_89=-(3*p3.z);
    double c_90=-(4*p2.z);
    double c_91=2*p1.z*p3.z;
    double c_92=p22_5;
    double c_93=4*p1.z;
    double c_94=-c_9;
    double c_95=6*c_11;
    double c_96=p1.z+p2.z+c_48;
    double c_97=10*c_12;
    double c_98=6*c_15;
    double c_99=c_9*c_28;
    double c_100=15*c_12;
    double c_101=p11_4;
    double c_102=p11_5;
    double c_103=-(36*c_7*p3.y*c_11*p3.z);
    double c_104=-(36*p2.y*c_9*c_11*p3.z);
    double c_105=-(36*c_7*p3.y*p1.z*c_15);
    double c_106=-(54*p2.y*c_9*p1.z*c_15);
    double c_107=p20_4;
    double c_108=-(p1.y*c_35);
    double c_109=c_27+c_49+c_108;
    double c_110=-(120*p2.y*c_6);
    double c_111=72*p2.y*p1.z*c_12;
    double c_112=c_93+c_1+c_72;
    double c_113=c_21+c_34;
    double c_114=15*c_36*c_113;
    double c_115=-(3*p2.z);
    double c_116=5*c_36*p2.z;
    double c_117=-(5*c_36*p3.z);
    double c_118=60*c_11*p3.z;
    double c_119=6*c_16;
    double c_120=8*p1.z;
    double c_121=c_0+p2.z+c_89;
    double c_122=9*p2.z;
    double c_123=3*p2.z*p3.z;
    double c_124=-(9*p3.z);
    double c_125=3*c_13;
    double c_126=c_93+c_87+c_29;
    double c_127=2*p2.z*p3.z;
    double c_128=p21_7;
    double c_129=p21_6;
    double c_130=p31_6;
    double c_131=p31_7;
    double c_132=p12_6;
    double c_133=p22_6;
    double c_134=p32_6;
    double c_135=6*c_13;
    double c_136=5*p2.z*p3.z;
    double c_137=20*c_6;
    double c_138=30*c_11*p2.z;
    double c_139=9*p2.z*c_15;
    double c_140=3*c_12;
    double c_141=9*c_12*p3.z;
    double c_142=18*p2.z*c_15;
    double c_143=-(20*c_16);
    double c_144=c_87+c_29;
    double c_145=6*c_11*c_144;
    double c_146=9*p2.z*p3.z;
    double c_147=-(4*c_15);
    double c_148=c_140+c_146+c_147;
    double c_149=3*p1.z*c_148;
    double c_150=c_137+c_125+c_141+c_142+c_143+c_145+c_149;
    double c_151=-(4*p3.z);
    double c_152=-(2*c_15);
    double c_153=-(8*c_16);
    double c_154=-5*c_9;
    double c_155=10*c_11;
    double c_156=4*p2.z*p3.z;
    double c_157=3*c_15;
    double c_158=6*c_12;
    double c_159=c_87+p3.z;
    double c_160=8*p3.z;
    double c_161=5*p2.z;
    double c_162=5*p2.y*p3.y*c_20;
    double c_163=15*p2.z;
    double c_164=5*p3.z;
    double c_165=28*p3.z;
    double c_166=6*p3.z;
    double c_167=2*c_11;
    double c_168=3*p1.z*p2.z;
    double c_169=2*c_12;
    double c_170=c_167+c_168+c_169+c_91+c_127+c_15;
    double c_171=3*c_13*c_15;
    double c_172=-c_15;
    double c_173=c_12+c_127+c_172;
    double c_174=3*p1.z*p3.z;
    double c_175=2*c_15;
    double c_176=3*c_12*c_15;
    double c_177=3*c_12*p3.z;
    double c_178=3*c_11;
    double c_179=8*p1.z*p2.z;
    double c_180=10*p3.z;
    double c_181=2*c_76;
    double c_182=3*c_81*p3.z;
    double c_183=p2.z+c_54;
    double c_184=-(10*c_83);
    double c_185=p12_7;
    double c_186=p22_7;
    double c_187=p32_7;
    double c_188=c_161+p3.z;
    double c_189=5*c_78;
    double c_190=p2.z+p3.z;
    double c_191=6*c_12*c_15;
    double c_192=3*p2.z*c_15;
    double c_193=8*p2.z*p3.z;
    double c_194=10*c_15;
    double c_195=5*c_80;
    double c_196=5*c_81;
    double c_197=9*c_12*c_15;
    double c_198=10*p2.z;
    double c_199=c_120+c_122+c_180;
    double c_200=9*p1.z;
    double c_201=c_67+c_1+c_54;
    double c_202=c_0+c_87+c_54;
    double c_203=2*p1.z*p2.z;
    double c_204=c_32+p2.z;
    double c_205=2*p1.z*c_190;
    double c_206=15*c_15;
    double c_207=p2.z+c_164;
    double c_208=9*c_13*p3.z;
    double c_209=4*c_13*p3.z;
    double c_210=14*p3.z;
    double c_211=p1.z*c_207;
    double c_212=c_11+c_12+c_136+c_206+c_211;
    double c_213=p2.z+c_72;
    double c_214=c_12+c_123+c_98;
    double c_215=3*c_13*p3.z;
    double c_216=10*p2.z*c_16;
    double c_217=10*c_12*c_16;
    double c_218=c_17+p3.z;
    double c_219=p2.y*c_37;
    double c_220=p1.z+c_115+c_29;
    double c_221=-(2*p2.z);
    double c_222=-(9*p2.z);
    double c_223=4*p1.z*p3.z;
    double c_224=12*p2.z*p3.z;
    double c_225=c_200+c_198+c_160;
    double c_226=2*c_13;
    double c_227=-(5*c_16);
    double c_228=15*p1.z;
    double c_229=28*p2.z;
    double c_230=c_56+c_1+c_160;
    double c_231=p3.y*c_96;
    double c_232=2*p1.z*c_35;
    double c_233=c_11+c_140+c_193+c_194+c_232;
    double c_234=p1.z+c_87+c_151;
    double c_235=c_9*c_121;
    double c_236=p1.z+c_221+p3.z;
    double c_237=c_140+c_156+c_157;
    double c_238=4*c_13;
    double c_239=8*c_13*p3.z;
    double c_240=8*p2.z*c_16;
    double c_241=5*c_83;
    double c_242=-(4*c_84);
    double c_243=p1.z*c_188;
    double c_244=c_11+c_100+c_136+c_15+c_243;
    double c_245=-(3*p2.z*c_15);
    double c_246=-(4*c_16);
    double c_247=4*c_6;
    double c_248=c_9*c_96;
    double c_249=4*c_16;
    double c_250=p2.z*p3.z;
    double c_251=3*p1.z*c_190;
    double c_252=c_11+c_158+c_146+c_98+c_251;
    double c_253=c_158+c_123+c_15;
    double c_254=10*c_13;
    double c_255=c_254+c_70+c_192+c_16;
    double c_256=15*c_81;
    double c_257=10*c_13*p3.z;
    double c_258=3*p2.z*c_16;
    double c_259=-(5*p3.z);
    double c_260=p1.z+c_42+c_54;
    double c_261=-5*p1.z;
    double c_262=3*c_11*p2.z;
    double c_263=6*p1.z*c_12;
    double c_264=2*c_6;
    double c_265=18*c_12*c_15;
    double c_266=12*c_12*p3.z;
    double c_267=p1.z+c_1+c_89;
    double c_268=2*p2.z*c_15;
    double c_269=p11_7;
    double c_270=p11_6;
    double c_271=18*p2.y*c_78*c_11*p2.z;
    double c_272=-(24*p2.y*c_9*c_80*p2.z);
    double c_273=54*c_7*c_10*p1.z*c_12;
    double c_274=-(72*c_7*p3.y*c_6*c_12);
    double c_275=-(72*p2.y*c_9*c_11*c_12*p3.z);
    double c_276=p20_5;
    double c_277=5*c_36;
    double c_278=3*c_9;
    double c_279=-(48*p1.z*p2.z);
    double c_280=-(18*c_15);
    double c_281=p20_6;
    double c_282=p30_6;
    double c_283=-(70*c_8*p2.z);
    double c_284=90*p3.y*p1.z*c_12;
    double c_285=-(420*p2.y*c_13);
    double c_286=18*p2.y*c_11*p3.z;
    double c_287=90*p2.y*p1.z*p2.z*p3.z;
    double c_288=54*p3.y*p1.z*p2.z*p3.z;
    double c_289=18*p2.y*p1.z*c_15;
    double c_290=c_120+c_198+c_86;
    double c_291=16*c_6;
    double c_292=5*c_36*p3.z;
    double c_293=-(12*p1.z*c_15);
    double c_294=-(6*c_16);
    double c_295=-3*p1.z;
    double c_296=7*p3.z;
    double c_297=p3.y*c_204;
    double c_298=p1.y*c_218;
    double c_299=p2.y+p3.y;
    double c_300=3*c_5;
    double c_301=3*c_7;
    double c_302=8*p2.y*p3.y;
    double c_303=-(24*p1.z*p3.z);
    double c_304=-(24*p2.z*p3.z);
    double c_305=c_167+c_203+c_12+c_174+c_127+c_175;
    double c_306=4*p2.y*p3.y;
    double c_307=8*p1.z*c_190;
    double c_308=c_155+c_140+c_156+c_157+c_307;
    double c_309=c_93+p2.z+c_259;
    double c_310=-(3*c_8*c_28);
    double c_311=c_93+c_122+c_210;
    double c_312=7*p2.z;
    double c_313=10*c_6;
    double c_314=15*c_12*p3.z;
    double c_315=45*p2.z*c_15;
    double c_316=-(70*c_16);
    double c_317=p2.z+c_180;
    double c_318=3*c_11*c_317;
    double c_319=c_12+c_136+c_194;
    double c_320=3*p1.z*c_319;
    double c_321=c_313+c_125+c_314+c_315+c_316+c_318+c_320;
    double c_322=36*c_7*p3.y*c_11*p2.z;
    double c_323=c_297+c_49;
    double c_324=18*p2.y*c_9*p1.z*p2.z*p3.z;
    double c_325=c_73+c_66+c_296;
    double c_326=-8*p1.z;
    double c_327=c_120+c_66+c_166;
    double c_328=c_7*c_327;
    double c_329=c_67+c_17+c_48;
    double c_330=c_0+c_17+c_4;
    double c_331=c_295+c_1+p3.z;
    double c_332=-c_231;
    double c_333=2*c_16;
    double c_334=3*p1.z*c_159;
    double c_335=c_95+c_158+c_123+c_15+c_334;
    double c_336=c_11+c_169+c_123+c_175+c_205;
    double c_337=-4*p1.z;
    double c_338=-(10*c_13);
    double c_339=c_0+c_163+c_165;
    double c_340=c_73+c_312+c_54;
    double c_341=c_337+c_87+p3.z;
    double c_342=c_326+c_161+c_72;
    double c_343=p2.y*p3.y*c_342;
    double c_344=4*p1.z*p2.z;
    double c_345=6*c_13*c_15;
    double c_346=15*p2.z*c_83;
    double c_347=-(28*c_84);
    double c_348=c_80*c_183;
    double c_349=4*c_15;
    double c_350=c_12+c_123+c_349;
    double c_351=c_6*c_350;
    double c_352=c_11*p2.z*c_214;
    double c_353=c_81+c_215+c_191+c_216+c_184;
    double c_354=p1.z*c_353;
    double c_355=c_181+c_92+c_182+c_345+c_217+c_346+c_347+c_348+c_351+c_352+c_354;
    double c_356=c_67+c_221+c_4;
    double c_357=-(12*c_11*p3.z);
    double c_358=c_0+c_87+c_259;
    double c_359=3*c_11*c_190;
    double c_360=3*p1.z*p2.z*c_190;
    double c_361=c_13+c_245+c_227;
    double c_362=2*c_361;
    double c_363=c_264+c_359+c_360+c_362;
    double c_364=15*c_83;
    double c_365=10*c_16;
    double c_366=c_13+c_177+c_71+c_365;
    double c_367=p2.z+c_48;
    double c_368=-2*p1.z;
    double c_369=c_368+p2.z+p3.z;
    double c_370=c_337+p2.z+c_72;
    double c_371=2*c_12*p3.z;
    double c_372=-4*c_6;
    double c_373=-20*c_8*p1.z;
    double c_374=-(3*c_10*p1.z);
    double c_375=30*c_7*p3.y*p2.z;
    double c_376=3*c_10*p2.z;
    double c_377=15*c_36*c_323;
    double c_378=-(3*p2.y*c_9*p3.z);
    double c_379=18*p3.y*p1.z*p2.z*p3.z;
    double c_380=180*p2.y*c_12*p3.z;
    double c_381=18*p3.y*p1.z*c_15;
    double c_382=-(18*p3.y*p2.z*c_15);
    double c_383=18*p2.y*c_16;
    double c_384=c_73+c_85+c_86;
    double c_385=-40*c_6;
    double c_386=-(8*p2.z);
    double c_387=c_67+p2.z+c_151;
    double c_388=9*c_13;
    double c_389=36*c_12*p3.z;
    double c_390=90*p2.z*c_15;
    double c_391=c_87+c_160;
    double c_392=-(8*p3.z);
    double c_393=-20*c_6;
    double c_394=20*c_16;
    double c_395=c_82*c_33;
    double c_396=c_0+c_161+c_160;
    double c_397=p2.y*c_331;
    double c_398=2*p1.z*c_183;
    double c_399=c_178+c_12+c_156+c_194+c_398;
    double c_400=c_9*c_267;
    double c_401=5*c_80*p2.z;
    double c_402=2*c_81*p3.z;
    double c_403=4*c_12*c_16;
    double c_404=5*p2.z*c_83;
    double c_405=-(8*c_84);
    double c_406=4*c_6*c_173;
    double c_407=c_125+c_70+c_139+c_153;
    double c_408=c_11*c_407;
    double c_409=2*c_13*p3.z;
    double c_410=4*p2.z*c_16;
    double c_411=-(5*c_83);
    double c_412=c_81+c_409+c_176+c_410+c_411;
    double c_413=2*p1.z*c_412;
    double c_414=c_181+c_401+c_92+c_402+c_171+c_403+c_404+c_405+c_406+c_408+c_413;
    double c_415=-(8*p3.y*c_414);
    double c_416=c_56+c_17+c_151;
    double c_417=c_56+c_115+c_48;
    double c_418=15*c_11;
    double c_419=c_12+c_172;
    double c_420=3*p1.z*c_419;
    double c_421=c_264+c_262+c_226+c_245+c_246+c_420;
    double c_422=-(10*c_16);
    double c_423=c_12+c_250+c_152;
    double c_424=15*c_80;
    double c_425=c_13+c_371+c_192+c_249;
    double c_426=c_295+p2.z+c_29;
    double c_427=c_93+c_312+c_180;
    double c_428=3*p1.z*c_213;
    double c_429=c_95+c_12+c_123+c_98+c_428;
    double c_430=c_87+c_48;
    double c_431=c_81*p3.z;
    double c_432=c_13*c_15;
    double c_433=c_12*c_16;
    double c_434=p2.z*c_83;
    double c_435=3*c_81;
    double c_436=c_295+c_42+c_160;
    double c_437=6*c_11*p2.z;
    double c_438=-10*c_6;
    double c_439=c_12*p3.z;
    double c_440=p2.z*c_15;
    double c_441=-2*c_82*p1.z;
    double c_442=-(c_79*p1.z);
    double c_443=12*p2.y*c_9*c_6;
    double c_444=-(16*p2.y*c_76);
    double c_445=c_79*p2.z;
    double c_446=80*p2.y*p1.z*c_81;
    double c_447=5*c_75*c_323;
    double c_448=-(p2.y*c_78*p3.z);
    double c_449=18*c_7*p3.y*c_11*p3.z;
    double c_450=18*p2.y*c_9*c_11*p3.z;
    double c_451=12*c_8*p1.z*c_15;
    double c_452=18*c_7*p3.y*p1.z*c_15;
    double c_453=18*p2.y*c_9*p1.z*c_15;
    double c_454=12*c_10*p1.z*c_15;
    double c_455=-(12*c_10*p2.z*c_15);
    double c_456=-(48*p2.y*p1.z*c_12*c_15);
    double c_457=12*p2.y*c_9*c_16;
    double c_458=-(8*p3.y*p1.z*c_83);
    double c_459=8*p3.y*p2.z*c_83;
    double c_460=-(8*p2.y*c_84);
    double c_461=28*p1.z;
    double c_462=15*p3.z;
    double c_463=c_56+c_90+c_4;
    double c_464=90*c_11*p3.z;
    double c_465=30*p1.z*c_15;
    double c_466=p3.y*c_426;
    double c_467=9*p1.z*p3.z;
    double c_468=6*p2.z*p3.z;
    double c_469=c_12+c_127+c_175;
    double c_470=-(80*c_80*p2.z);
    double c_471=-(12*c_9*c_13);
    double c_472=16*c_92;
    double c_473=-(5*c_75*c_18);
    double c_474=c_78*p3.z;
    double c_475=-(18*c_9*p1.z*p2.z*p3.z);
    double c_476=-(18*c_9*c_12*p3.z);
    double c_477=-(18*c_9*p2.z*c_15);
    double c_478=48*c_11*p2.z*c_15;
    double c_479=8*c_13*c_15;
    double c_480=-(12*c_9*c_16);
    double c_481=8*c_84;
    double c_482=c_93+c_198+c_296;
    double c_483=c_7*c_330;
    double c_484=6*c_11*p3.z;
    double c_485=6*p3.z*c_335;
    double c_486=c_0+c_115+p3.z;
    double c_487=c_12+c_250+c_15;
    double c_488=2*p1.z*c_487;
    double c_489=c_438+c_13+c_439+c_440+c_16+c_488;
    double c_490=6*c_489;
    double c_491=-(15*c_129*p3.y*p1.z);
    double c_492=-(15*c_82*c_9*p1.z);
    double c_493=-(15*c_77*c_10*p1.z);
    double c_494=-(15*c_8*c_78*p1.z);
    double c_495=-(15*c_7*c_79*p1.z);
    double c_496=-(15*p2.y*c_130*p1.z);
    double c_497=18*c_77*p3.y*c_6;
    double c_498=18*c_8*c_9*c_6;
    double c_499=18*c_7*c_10*c_6;
    double c_500=18*p2.y*c_78*c_6;
    double c_501=-(24*c_7*p3.y*c_76);
    double c_502=-(24*p2.y*c_9*c_76);
    double c_503=18*c_79*c_11*p2.z;
    double c_504=-(24*c_10*c_80*p2.z);
    double c_505=48*p3.y*c_132*p2.z;
    double c_506=18*c_79*p1.z*c_12;
    double c_507=-(24*c_10*c_6*c_12);
    double c_508=48*p3.y*c_76*c_12;
    double c_509=-(24*c_10*c_11*c_13);
    double c_510=48*p3.y*c_80*c_13;
    double c_511=-(24*c_10*p1.z*c_81);
    double c_512=48*p3.y*c_6*c_81;
    double c_513=48*p3.y*c_11*c_92;
    double c_514=48*p3.y*p1.z*c_133;
    double c_515=-(30*c_131*p3.z);
    double c_516=90*c_79*p1.z*p2.z*p3.z;
    double c_517=-(72*c_10*c_6*p2.z*p3.z);
    double c_518=48*p3.y*c_76*p2.z*p3.z;
    double c_519=-(144*c_7*p3.y*c_11*c_12*p3.z);
    double c_520=-(72*c_10*c_11*c_12*p3.z);
    double c_521=48*p3.y*c_80*c_12*p3.z;
    double c_522=-(72*c_10*p1.z*c_13*p3.z);
    double c_523=48*p3.y*c_6*c_13*p3.z;
    double c_524=48*p3.y*c_11*c_81*p3.z;
    double c_525=48*p3.y*p1.z*c_92*p3.z;
    double c_526=-(144*p2.y*c_9*c_11*p2.z*c_15);
    double c_527=-(144*c_10*c_11*p2.z*c_15);
    double c_528=48*p3.y*c_80*p2.z*c_15;
    double c_529=-(144*c_10*p1.z*c_12*c_15);
    double c_530=48*p3.y*c_6*c_12*c_15;
    double c_531=48*p3.y*c_11*c_13*c_15;
    double c_532=48*p3.y*p1.z*c_81*c_15;
    double c_533=84*c_79*c_16;
    double c_534=-(240*c_10*p1.z*p2.z*c_16);
    double c_535=48*p3.y*c_6*p2.z*c_16;
    double c_536=48*p3.y*c_11*c_12*c_16;
    double c_537=48*p3.y*p1.z*c_13*c_16;
    double c_538=48*p3.y*c_11*p2.z*c_83;
    double c_539=48*p3.y*p1.z*c_12*c_83;
    double c_540=112*c_10*c_84;
    double c_541=48*p3.y*p1.z*p2.z*c_84;
    double c_542=-(96*p3.y*c_187);
    double c_543=p3.y*c_33;
    double c_544=12*c_11*p2.z;
    double c_545=12*p1.z*c_12;
    double c_546=-(30*p1.z*p2.z*p3.z);
    double c_547=-(6*c_12*p3.z);
    double c_548=5*p2.y*p3.y*c_33;
    double c_549=p3.y*c_267;
    double c_550=-c_549;
    double c_551=p2.y*c_236;
    double c_552=-(8*c_13);
    double c_553=36*c_9*c_11*p3.z;
    double c_554=24*c_13*c_15;
    double c_555=24*c_12*c_16;
    double c_556=p1.z+c_90+c_72;
    double c_557=6*c_18*c_305;
    double c_558=6*c_308;
    double c_559=c_154+c_558;
    double c_560=5*c_9*c_28;
    double c_561=-(20*c_13);
    double c_562=18*c_12*p3.z;
    double c_563=3*c_16;
    double c_564=p1.z+c_66+c_259;
    double c_565=c_66+p3.z;
    double c_566=18*c_170;
    double c_567=c_154+c_566;
    double c_568=c_67+c_1+c_259;
    double c_569=c_67+c_90+p3.z;
    double c_570=3*p1.z*c_423;
    double c_571=c_264+c_262+c_226+c_177+c_422+c_570;
    double c_572=-(3*c_12*p3.z);
    double c_573=3*p1.z*c_183;
    double c_574=c_95+c_12+c_156+c_194+c_573;
    double c_575=10*c_6*c_35;
    double c_576=c_12+c_127+c_157;
    double c_577=6*c_11*c_576;
    double c_578=3*p1.z*c_425;
    double c_579=c_424+c_81+c_409+c_176+c_410+c_241+c_575+c_577+c_578;
    double c_580=5*c_81*p3.z;
    double c_581=3*c_12*c_16;
    double c_582=2*p2.z*c_83;
    double c_583=2*p2.z*c_16;
    double c_584=30*p2.z*c_15;
    double c_585=c_7*c_486;
    double c_586=10*p2.z*p3.z;
    double c_587=4*p1.z*c_24;
    double c_588=4*p1.z*c_35;
    double c_589=c_178+c_140+c_193+c_194+c_588;
    double c_590=-(6*c_9*c_589);
    double c_591=8*c_6*c_190;
    double c_592=3*c_11*c_237;
    double c_593=c_226+c_177+c_192+c_333;
    double c_594=4*p1.z*c_593;
    double c_595=c_195+c_196+c_239+c_197+c_240+c_241+c_591+c_592+c_594;
    double c_596=8*c_595;
    double c_597=c_189+c_590+c_596;
    double c_598=3*p2.z*c_83;
    double c_599=c_93+c_42+p3.z;
    double c_600=c_11*c_35;
    double c_601=p1.z*p2.z*c_35;
    double c_602=c_6+c_13+c_371+c_422+c_600+c_601;
    double c_603=3*c_11*p3.z;
    double c_604=20*p2.z*c_16;
    double c_605=c_1+c_72;
    double c_606=12*p2.z*c_15;
    double c_607=c_9*c_220;
    double c_608=3*p1.z*p3.z*c_190;
    return (15*p10_7*(c_31+c_23+2*p1.y*c_218)+15*p20_7*(c_3+2*p2.y*c_28+c_25)+15*c_281*p3.x*c_41+p10_5*(84*c_5*p2.y*p1.z+24*
        p1.y*c_7*p1.z+4*c_8*p1.z-84*c_5*p3.y*p1.z-24*p1.y*c_9*p1.z-4*c_10*p1.z-84*p2.y*c_6+84*p3.y*c_6-14*c_14*p2.z+6*c_5*p2.y*
        p2.z+6*p1.y*c_7*p2.z+2*c_8*p2.z-45*c_5*p3.y*p2.z-15*p1.y*p2.y*p3.y*p2.z+c_45-15*p1.y*c_9*p2.z-3*p2.y*c_9*p2.z+c_59+504*
        p1.y*c_11*p2.z+36*p2.y*c_11*p2.z+270*p3.y*c_11*p2.z+144*p1.y*p1.z*c_12+36*p2.y*p1.z*c_12+c_284+24*p1.y*c_13+12*
        p2.y*c_13+c_47+14*c_14*p3.z+45*c_5*p2.y*p3.z+15*p1.y*c_7*p3.z+c_50-6*c_5*p3.y*p3.z+15*p1.y*p2.y*p3.y*p3.z+3*c_7*p3.y*
        p3.z-6*p1.y*c_9*p3.z+c_60-2*c_10*p3.z-504*p1.y*c_11*p3.z-270*p2.y*c_11*p3.z+c_40-90*p2.y*p1.z*p2.z*p3.z+90*p3.y*
        p1.z*p2.z*p3.z+c_52+18*p3.y*c_12*p3.z-144*p1.y*p1.z*c_15-90*p2.y*p1.z*c_15-36*p3.y*p1.z*c_15-18*p2.y*p2.z*c_15+c_63-24*
        p1.y*c_16+c_64-12*p3.y*c_16+15*p2.x*p3.x*c_44+15*c_43*c_30-15*c_36*c_109)+15*p10_6*(p2.x*c_30+p3.x*(c_31+c_34+p1.y*
        c_35))+c_276*(14*c_8*p1.z+45*c_7*p3.y*p1.z+15*p2.y*c_9*p1.z+c_57-24*p2.y*c_6+c_39+84*c_7*p3.y*p2.z+24*p2.y*c_9*p2.z+4*c_10*
        p2.z-144*p2.y*c_11*p2.z-90*p3.y*c_11*p2.z-504*p2.y*p1.z*c_12-270*p3.y*p1.z*c_12-84*p3.y*c_13-14*c_8*p3.z+c_51+6*p2.y*
        c_9*p3.z+2*c_10*p3.z-18*p3.y*c_11*p3.z-90*p3.y*p1.z*p2.z*p3.z+504*p2.y*c_12*p3.z+c_53+c_61+144*p2.y*p2.z*c_15+36*
        p3.y*p2.z*c_15+24*p2.y*c_16+12*p3.y*c_16-c_14*c_88+15*c_36*(c_3+c_38)-3*c_5*(c_543+p2.y*(c_0+c_85+c_164))-3*p1.y*
        (c_247+c_55+c_544+c_545-28*c_13+c_292-6*c_11*p3.z+c_546-90*c_12*p3.z-6*p1.z*c_15-30*p2.z*c_15+c_294+c_548+c_9*c_33+c_7*(c_0+c_229+c_462)))+c_107*
        p3.x*(-45*c_8*p1.z+15*c_7*p3.y*p1.z+21*p2.y*c_9*p1.z+9*c_10*p1.z+18*p2.y*c_6+c_39+c_283+c_375+30*p2.y*c_9*
        p2.z+10*c_10*p2.z+c_46-72*p3.y*c_11*p2.z+270*p2.y*p1.z*c_12-180*p3.y*p1.z*c_12+c_285-120*p3.y*c_13+3*c_14*c_18-20*c_8*
        p3.z+12*p2.y*c_9*p3.z+8*c_10*p3.z+c_286+c_40+c_287-144*p3.y*p1.z*p2.z*p3.z+c_380+c_289-54*p3.y*p1.z*c_15+180*p2.y*p2.z*
        c_15+72*p3.y*p2.z*c_15+60*p2.y*c_16+48*p3.y*c_16+15*c_36*c_41-3*c_5*(c_332+p2.y*c_260)-3*p1.y*(-c_235+5*c_7*c_220+p2.y*
        p3.y*c_436+6*c_18*(c_11+5*p1.z*p2.z+c_100+c_91+c_586+c_157)))+p10_4*(15*c_43*p3.x*c_44+15*c_74*c_30+p3.x*(-3*c_8*p1.z-3*c_7*
        p3.y*p1.z-3*p2.y*c_9*p1.z-10*c_10*p1.z+270*p2.y*c_6+120*p3.y*c_6+c_45+c_58-9*c_10*p2.z+c_46+180*p3.y*c_11*p2.z+18*
        p2.y*p1.z*c_12+72*p3.y*p1.z*c_12+c_47-15*c_5*(c_27+p2.y*c_329)-15*c_36*(c_27+c_49)+c_50+c_51+9*p2.y*c_9*p3.z-8*c_10*p3.z-90*
        p2.y*c_11*p3.z-54*p2.y*p1.z*p2.z*p3.z+144*p3.y*p1.z*p2.z*p3.z+c_52+c_53-126*p2.y*p1.z*c_15-72*p3.y*p1.z*c_15+c_62+54*
        p3.y*p2.z*c_15-54*p2.y*c_16-48*p3.y*c_16+5*c_14*(c_65+c_122+c_54)-3*p1.y*(c_68+c_55+90*c_11*p2.z+30*p1.z*c_12+c_135+p2.y*
        p3.y*(c_56+c_87+c_392)+c_7*c_416-10*c_36*p3.z+c_118+c_69+c_70+60*p1.z*c_15+c_71+c_394+c_9*c_340))+p2.x*(10*c_8*p1.z+3*
        c_7*p3.y*p1.z+3*p2.y*c_9*p1.z+c_57+c_110-270*p3.y*c_6+8*c_8*p2.z-9*c_7*p3.y*p2.z+c_58+c_59+90*p3.y*c_11*p2.z+c_111+126*
        p3.y*p1.z*c_12+48*p2.y*c_13+54*p3.y*c_13+9*c_8*p3.z+c_51+c_60-180*p2.y*c_11*p3.z-90*p3.y*c_11*p3.z-144*p2.y*p1.z*
        p2.z*p3.z+c_288-54*p2.y*c_12*p3.z+c_53-72*p2.y*p1.z*c_15+c_61+c_62+c_63+c_64-5*c_14*(c_65+c_66+c_86)+c_114+15*c_5*(p3.y*
        c_356+c_23)+3*p1.y*(c_68+c_116+60*c_11*p2.z+60*p1.z*c_12+20*c_13+c_9*c_463+c_117+c_464+c_69+c_70+c_465+c_71+c_119+p2.y*p3.y*
        (c_56+c_386+c_72)+c_7*c_325)))+c_74*(-15*c_75*p2.y*p1.z-30*c_36*c_8*p1.z-14*c_82*p1.z+15*c_75*p3.y*p1.z-6*c_36*c_7*p3.y*
        p1.z+45*c_77*p3.y*p1.z+18*c_36*p2.y*c_9*p1.z+30*c_8*c_9*p1.z+18*c_36*c_10*p1.z+18*c_7*c_10*p1.z+9*p2.y*c_78*p1.z+3*c_79*
        p1.z+18*c_36*p2.y*c_6-18*c_36*p3.y*c_6-36*c_7*p3.y*c_6-18*p2.y*c_9*c_6-6*c_10*c_6+16*p2.y*c_76+24*p3.y*c_76-40*c_36*c_8*
        p2.z+30*c_75*p3.y*p2.z+70*c_77*p3.y*p2.z+24*c_36*p2.y*c_9*p2.z+40*c_8*c_9*p2.z+16*c_36*c_10*p2.z+20*c_7*c_10*p2.z+8*p2.y*
        c_78*p2.z+2*c_79*p2.z+72*c_36*p2.y*c_11*p2.z-54*c_36*p3.y*c_11*p2.z-180*c_7*p3.y*c_11*p2.z-72*p2.y*c_9*c_11*p2.z-18*
        c_10*c_11*p2.z+64*p2.y*c_80*p2.z+72*p3.y*c_80*p2.z+180*c_36*p2.y*p1.z*c_12-108*c_36*p3.y*p1.z*c_12-540*c_7*p3.y*p1.z*
        c_12-180*p2.y*c_9*p1.z*c_12-36*c_10*p1.z*c_12+160*p2.y*c_6*c_12+144*p3.y*c_6*c_12-240*c_36*p2.y*c_13-120*c_36*p3.y*c_13+320*
        p2.y*c_11*c_13+240*p3.y*c_11*c_13+560*p2.y*p1.z*c_81+360*p3.y*p1.z*c_81-112*p3.y*c_92-30*c_75*p2.y*p3.z-20*c_36*c_8*
        p3.z+14*c_82*p3.z-12*c_36*c_7*p3.y*p3.z+20*c_77*p3.y*p3.z+12*c_36*p2.y*c_9*p3.z+20*c_8*c_9*p3.z+20*c_36*c_10*p3.z+16*
        c_7*c_10*p3.z+10*p2.y*c_78*p3.z+4*c_79*p3.z+36*c_36*p2.y*c_11*p3.z-54*c_36*p3.y*c_11*p3.z+c_103+c_104-18*c_10*c_11*p3.z+24*
        p3.y*c_80*p3.z+144*c_36*p2.y*p1.z*p2.z*p3.z-162*c_36*p3.y*p1.z*p2.z*p3.z-180*c_7*p3.y*p1.z*p2.z*p3.z-144*p2.y*
        c_9*p1.z*p2.z*p3.z-54*c_10*p1.z*p2.z*p3.z+72*p3.y*c_6*p2.z*p3.z-72*c_36*p3.y*c_12*p3.z+144*p3.y*c_11*c_12*p3.z+240*
        p3.y*p1.z*c_13*p3.z-560*p2.y*c_81*p3.z-160*p3.y*c_81*p3.z+54*c_36*p2.y*p1.z*c_15-108*c_36*p3.y*p1.z*c_15+c_105+c_106-36*
        c_10*p1.z*c_15+24*p3.y*c_6*c_15+144*c_36*p2.y*p2.z*c_15+72*c_36*p3.y*p2.z*c_15+72*p3.y*c_11*p2.z*c_15+144*p3.y*p1.z*
        c_12*c_15-320*p2.y*c_13*c_15-160*p3.y*c_13*c_15+96*c_36*p2.y*c_16+120*c_36*p3.y*c_16+24*p3.y*c_11*c_16+72*p3.y*p1.z*p2.z*
        c_16-160*p2.y*c_12*c_16-128*p3.y*c_12*c_16+24*p3.y*p1.z*c_83-64*p2.y*p2.z*c_83-80*p3.y*p2.z*c_83-16*p2.y*c_84-32*p3.y*
        c_84-c_102*c_112-c_101*(3*p3.y*c_33+p2.y*c_384)+c_14*(9*p2.y*p3.y*c_28+3*c_9*c_28+3*c_36*c_18-2*c_7*c_290+c_485)+c_5*(18*
        c_7*p3.y*c_28-10*c_8*c_88-3*c_36*(c_550+p2.y*c_556)-3*p3.y*c_28*(c_94+6*c_170)+9*p2.y*(c_99+2*p3.z*(c_178+c_179+c_97+c_91+c_156+c_15)))+p1.y*
        (3*c_78*p1.z-18*c_9*c_6+32*c_76-36*c_9*c_11*p2.z+80*c_80*p2.z-36*c_9*p1.z*c_12+128*c_6*c_12+160*c_11*c_13+160*
        p1.z*c_81+112*c_92+30*c_8*p3.y*c_28+15*c_75*c_18-3*c_78*p3.z-18*c_9*c_11*p3.z-24*c_80*p3.z+c_475-72*c_6*p2.z*p3.z+36*
        c_9*c_12*p3.z-144*c_11*c_12*p3.z-240*p1.z*c_13*p3.z-360*c_81*p3.z-24*c_6*c_15+54*c_9*p2.z*c_15-72*c_11*p2.z*c_15-144*p1.z*
        c_12*c_15-240*c_13*c_15+36*c_9*c_16-24*c_11*c_16-72*p1.z*p2.z*c_16-144*c_12*c_16-24*p1.z*c_83-72*p2.z*c_83-24*c_84-5*c_77*
        (c_93+14*p2.z+c_86)-9*p2.y*p3.y*c_28*(c_94+c_95+20*c_12+16*p2.z*p3.z+c_98+8*p1.z*c_24)-3*c_36*(-(p2.y*p3.y*(p1.z+c_85+c_124))-3*
        c_9*c_96+2*c_7*(c_0+c_42+c_72)+6*c_18*(c_11+c_344+c_97+c_174+c_224+c_98))+18*c_7*(c_99+2*p3.z*c_244)))+p10_3*(70*c_101*
        p2.y*p1.z+40*c_14*c_7*p1.z+20*c_5*c_8*p1.z+8*p1.y*c_77*p1.z+2*c_82*p1.z-70*c_101*p3.y*p1.z-40*c_14*c_9*p1.z-20*c_5*
        c_10*p1.z-8*p1.y*c_78*p1.z-2*c_79*p1.z-112*p2.y*c_76+112*p3.y*c_76+14*c_102*p2.z+20*c_101*p2.y*p2.z+20*c_14*c_7*p2.z+16*
        c_5*c_8*p2.z+10*p1.y*c_77*p2.z+4*c_82*p2.z-45*c_101*p3.y*p2.z-30*c_14*p2.y*p3.y*p2.z-18*c_5*c_7*p3.y*p2.z-9*p1.y*c_8*
        p3.y*p2.z-3*c_77*p3.y*p2.z-30*c_14*c_9*p2.z-18*c_5*p2.y*c_9*p2.z-9*p1.y*c_7*c_9*p2.z-3*c_8*c_9*p2.z-18*c_5*c_10*p2.z-9*
        p1.y*p2.y*c_10*p2.z-3*c_7*c_10*p2.z-9*p1.y*c_78*p2.z-3*p2.y*c_78*p2.z-3*c_79*p2.z+540*c_5*p3.y*c_11*p2.z+180*p1.y*
        p2.y*p3.y*c_11*p2.z+c_322+180*p1.y*c_9*c_11*p2.z+36*p2.y*c_9*c_11*p2.z+36*c_10*c_11*p2.z-560*p1.y*c_80*p2.z-160*p2.y*
        c_80*p2.z-360*p3.y*c_80*p2.z+180*c_5*p3.y*p1.z*c_12+144*p1.y*p2.y*p3.y*p1.z*c_12+54*c_7*p3.y*p1.z*c_12+72*p1.y*c_9*
        p1.z*c_12+36*p2.y*c_9*p1.z*c_12+18*c_10*p1.z*c_12-320*p1.y*c_6*c_12-160*p2.y*c_6*c_12-240*p3.y*c_6*c_12+36*c_5*p3.y*
        c_13+54*p1.y*p2.y*p3.y*c_13+36*c_7*p3.y*c_13+18*p1.y*c_9*c_13+18*p2.y*c_9*c_13+6*c_10*c_13-160*p1.y*c_11*c_13-128*p2.y*c_11*
        c_13-144*p3.y*c_11*c_13-64*p1.y*p1.z*c_81-80*p2.y*p1.z*c_81-72*p3.y*p1.z*c_81-16*p1.y*c_92-32*p2.y*c_92-24*p3.y*c_92-14*
        c_102*p3.z+45*c_101*p2.y*p3.z+30*c_14*c_7*p3.z+18*c_5*c_8*p3.z+9*p1.y*c_77*p3.z+3*c_82*p3.z-20*c_101*p3.y*p3.z+30*
        c_14*p2.y*p3.y*p3.z+18*c_5*c_7*p3.y*p3.z+9*p1.y*c_8*p3.y*p3.z+3*c_77*p3.y*p3.z-20*c_14*c_9*p3.z+18*c_5*p2.y*c_9*p3.z+9*
        p1.y*c_7*c_9*p3.z+3*c_8*c_9*p3.z-16*c_5*c_10*p3.z+9*p1.y*p2.y*c_10*p3.z+3*c_7*c_10*p3.z-10*p1.y*c_78*p3.z+3*p2.y*
        c_78*p3.z-4*c_79*p3.z-540*c_5*p2.y*c_11*p3.z-180*p1.y*c_7*c_11*p3.z-36*c_8*c_11*p3.z-180*p1.y*p2.y*p3.y*c_11*
        p3.z+c_103+c_104+560*p1.y*c_80*p3.z+360*p2.y*c_80*p3.z+160*p3.y*c_80*p3.z-180*c_5*p2.y*p1.z*p2.z*p3.z-144*p1.y*c_7*p1.z*p2.z*
        p3.z-54*c_8*p1.z*p2.z*p3.z+180*c_5*p3.y*p1.z*p2.z*p3.z-18*c_7*p3.y*p1.z*p2.z*p3.z+144*p1.y*c_9*p1.z*p2.z*
        p3.z+c_324+54*c_10*p1.z*p2.z*p3.z+240*p2.y*c_6*p2.z*p3.z-240*p3.y*c_6*p2.z*p3.z-36*c_5*p2.y*c_12*p3.z-54*p1.y*c_7*c_12*
        p3.z-36*c_8*c_12*p3.z+36*c_5*p3.y*c_12*p3.z+18*p1.y*p2.y*p3.y*c_12*p3.z+36*p1.y*c_9*c_12*p3.z+18*p2.y*c_9*c_12*p3.z+18*
        c_10*c_12*p3.z+144*p2.y*c_11*c_12*p3.z-144*p3.y*c_11*c_12*p3.z+72*p2.y*p1.z*c_13*p3.z-72*p3.y*p1.z*c_13*p3.z+24*p2.y*
        c_81*p3.z-24*p3.y*c_81*p3.z-180*c_5*p2.y*p1.z*c_15-72*p1.y*c_7*p1.z*c_15-18*c_8*p1.z*c_15-144*p1.y*p2.y*p3.y*p1.z*
        c_15+c_105+c_106+320*p1.y*c_6*c_15+240*p2.y*c_6*c_15+160*p3.y*c_6*c_15-36*c_5*p2.y*p2.z*c_15-36*p1.y*c_7*p2.z*c_15-18*c_8*
        p2.z*c_15+36*c_5*p3.y*p2.z*c_15-18*p1.y*p2.y*p3.y*p2.z*c_15-18*c_7*p3.y*p2.z*c_15+54*p1.y*c_9*p2.z*c_15+36*c_10*p2.z*
        c_15+144*p2.y*c_11*p2.z*c_15-144*p3.y*c_11*p2.z*c_15+72*p2.y*p1.z*c_12*c_15-72*p3.y*p1.z*c_12*c_15+24*p2.y*c_13*c_15-24*
        p3.y*c_13*c_15-36*c_5*p2.y*c_16-18*p1.y*c_7*c_16-6*c_8*c_16-54*p1.y*p2.y*p3.y*c_16-18*c_7*p3.y*c_16-36*p2.y*c_9*c_16+160*
        p1.y*c_11*c_16+144*p2.y*c_11*c_16+128*p3.y*c_11*c_16+72*p2.y*p1.z*p2.z*c_16-72*p3.y*p1.z*p2.z*c_16+24*p2.y*c_12*
        c_16-24*p3.y*c_12*c_16+64*p1.y*p1.z*c_83+72*p2.y*p1.z*c_83+80*p3.y*p1.z*c_83+24*p2.y*p2.z*c_83-24*p3.y*p2.z*c_83+16*p1.y*
        c_84+24*p2.y*c_84+32*p3.y*c_84+15*c_74*p3.x*c_44+3*p2.x*p3.x*(c_277+10*c_5+c_301+c_306+c_278+8*p1.y*c_299-60*c_11+c_279-18*
        c_12-48*p1.z*p3.z+c_304+c_280)*c_44+15*c_107*c_30-15*c_75*c_109+c_43*(16*c_8*p1.z+9*c_7*p3.y*p1.z+6*p2.y*c_9*
        p1.z+c_57+c_110-180*p3.y*c_6+20*c_8*p2.z-18*c_7*p3.y*p2.z-9*p2.y*c_9*p2.z+c_59-72*p2.y*c_11*p2.z-36*p3.y*c_11*p2.z+c_111+108*
        p3.y*p1.z*c_12+120*p2.y*c_13+108*p3.y*c_13+18*c_8*p3.z+9*c_7*p3.y*p3.z+c_60-108*p2.y*c_11*p3.z-72*p3.y*c_11*p3.z-162*
        p2.y*p1.z*p2.z*p3.z+c_379-108*p2.y*c_12*p3.z+54*p3.y*c_12*p3.z-54*p2.y*p1.z*c_15+c_61-54*p2.y*p2.z*c_15+c_63+c_64-10*
        c_14*c_112+c_114+6*c_5*(p3.y*c_417-p2.y*c_24)+3*p1.y*(-80*c_6+c_116+48*p1.z*c_12+32*c_13+c_9*(c_93+c_115+c_4)+c_117+c_118+48*
        p1.z*p2.z*p3.z+c_562+24*p1.z*c_15+c_606+c_119+p2.y*p3.y*(c_120+c_222+p3.z)+c_328))+c_36*(-3*c_7*p3.y*c_121+c_310+10*c_14*
        c_126-2*c_10*c_199+6*c_5*(p3.y*c_35+p2.y*(c_261+c_1+c_72))+6*p3.y*c_150-9*p2.y*(c_248-2*c_28*(c_155+c_12+c_123+c_98+4*p1.z*
        c_213))-3*p1.y*(p2.y*p3.y*(c_120+p2.z+c_124)+c_7*(c_93+c_17+c_89)+2*(c_385+c_138+c_125+c_70+c_139+16*c_16+c_9*c_126+12*
        p1.z*c_469))))+p3.x*(-15*c_128*p1.z+c_491+c_492+c_493+c_494+c_495+c_496+30*c_131*p1.z+18*c_82*c_6+c_497+c_498+c_499+c_500-24*
        c_79*c_6-24*c_8*c_76+c_501+c_502+16*c_10*c_76+48*p2.y*c_185-30*c_128*p2.z-30*c_129*p3.y*p2.z-30*c_82*c_9*p2.z-30*c_77*c_10*
        p2.z-30*c_8*c_78*p2.z-30*c_7*c_79*p2.z-30*p2.y*c_130*p2.z-30*c_131*p2.z+90*c_82*c_11*p2.z+72*c_77*p3.y*c_11*p2.z+54*c_8*
        c_9*c_11*p2.z+36*c_7*c_10*c_11*p2.z+c_271-72*c_8*c_80*p2.z-48*c_7*p3.y*c_80*p2.z+c_272+48*p2.y*c_132*p2.z+270*c_82*p1.z*
        c_12+180*c_77*p3.y*p1.z*c_12+108*c_8*c_9*p1.z*c_12+c_273+18*p2.y*c_78*p1.z*c_12-144*c_8*c_6*c_12+c_274-24*p2.y*c_9*c_6*
        c_12+48*p2.y*c_76*c_12+84*c_82*c_13+120*c_77*p3.y*c_13+120*c_8*c_9*c_13+96*c_7*c_10*c_13+60*p2.y*c_78*c_13+24*c_79*c_13-240*c_8*
        c_11*c_13-96*c_7*p3.y*c_11*c_13-24*p2.y*c_9*c_11*c_13+48*p2.y*c_80*c_13-360*c_8*p1.z*c_81-120*c_7*p3.y*p1.z*c_81-24*p2.y*
        c_9*p1.z*c_81+48*p2.y*c_6*c_81+112*c_8*c_92-48*c_7*p3.y*c_92-48*p2.y*c_9*c_92-16*c_10*c_92+48*p2.y*c_11*c_92+48*p2.y*p1.z*
        c_133-96*p2.y*c_186+15*c_269*c_26-15*c_270*(p2.y*c_20-p3.y*c_26)+18*c_82*c_11*p3.z+36*c_77*p3.y*c_11*p3.z+54*c_8*c_9*c_11*
        p3.z+72*c_7*c_10*c_11*p3.z+90*p2.y*c_78*c_11*p3.z-144*c_79*c_11*p3.z-24*c_8*c_80*p3.z-48*c_7*p3.y*c_80*p3.z-72*p2.y*c_9*
        c_80*p3.z+64*c_10*c_80*p3.z+48*p2.y*c_132*p3.z+90*c_82*p1.z*p2.z*p3.z+144*c_77*p3.y*p1.z*p2.z*p3.z+162*c_8*c_9*p1.z*
        p2.z*p3.z+144*c_7*c_10*p1.z*p2.z*p3.z+90*p2.y*c_78*p1.z*p2.z*p3.z-72*c_8*c_6*p2.z*p3.z-96*c_7*p3.y*c_6*p2.z*p3.z-72*
        p2.y*c_9*c_6*p2.z*p3.z+48*p2.y*c_76*p2.z*p3.z-36*c_82*c_12*p3.z+72*c_8*c_9*c_12*p3.z+144*c_7*c_10*c_12*p3.z+180*p2.y*
        c_78*c_12*p3.z+144*c_79*c_12*p3.z-144*c_8*c_11*c_12*p3.z+c_519+c_275+48*p2.y*c_80*c_12*p3.z-240*c_8*p1.z*c_13*p3.z-192*
        c_7*p3.y*p1.z*c_13*p3.z-72*p2.y*c_9*p1.z*c_13*p3.z+48*p2.y*c_6*c_13*p3.z+160*c_8*c_81*p3.z-96*p2.y*c_9*c_81*p3.z-64*
        c_10*c_81*p3.z+48*p2.y*c_11*c_81*p3.z+48*p2.y*p1.z*c_92*p3.z-96*p2.y*c_133*p3.z+18*c_82*p1.z*c_15+54*c_77*p3.y*p1.z*
        c_15+108*c_8*c_9*p1.z*c_15+180*c_7*c_10*p1.z*c_15+270*p2.y*c_78*p1.z*c_15-504*c_79*p1.z*c_15-24*c_8*c_6*c_15-72*c_7*p3.y*
        c_6*c_15-144*p2.y*c_9*c_6*c_15+160*c_10*c_6*c_15+48*p2.y*c_76*c_15-36*c_82*p2.z*c_15-72*c_77*p3.y*p2.z*c_15-72*c_8*c_9*p2.z*
        c_15+180*p2.y*c_78*p2.z*c_15+504*c_79*p2.z*c_15-72*c_8*c_11*p2.z*c_15-144*c_7*p3.y*c_11*p2.z*c_15+c_526+48*p2.y*c_80*p2.z*
        c_15-144*c_8*p1.z*c_12*c_15-216*c_7*p3.y*p1.z*c_12*c_15-144*p2.y*c_9*p1.z*c_12*c_15+48*p2.y*c_6*c_12*c_15+160*c_8*c_13*
        c_15+96*c_7*p3.y*c_13*c_15-96*p2.y*c_9*c_13*c_15-160*c_10*c_13*c_15+48*p2.y*c_11*c_13*c_15+48*p2.y*p1.z*c_81*c_15-96*p2.y*
        c_92*c_15-12*c_82*c_16-48*c_77*p3.y*c_16-120*c_8*c_9*c_16-240*c_7*c_10*c_16-420*p2.y*c_78*c_16-24*c_8*c_11*c_16-96*c_7*p3.y*
        c_11*c_16-240*p2.y*c_9*c_11*c_16+320*c_10*c_11*c_16+48*p2.y*c_80*c_16-72*c_8*p1.z*p2.z*c_16-192*c_7*p3.y*p1.z*p2.z*c_16-240*
        p2.y*c_9*p1.z*p2.z*c_16+48*p2.y*c_6*p2.z*c_16+128*c_8*c_12*c_16+192*c_7*p3.y*c_12*c_16-320*c_10*c_12*c_16+48*p2.y*c_11*
        c_12*c_16+48*p2.y*p1.z*c_13*c_16-96*p2.y*c_81*c_16-24*c_8*p1.z*c_83-120*c_7*p3.y*p1.z*c_83-360*p2.y*c_9*p1.z*c_83+560*c_10*
        p1.z*c_83+48*p2.y*c_6*c_83+80*c_8*p2.z*c_83+240*c_7*p3.y*p2.z*c_83+240*p2.y*c_9*p2.z*c_83-560*c_10*p2.z*c_83+48*p2.y*
        c_11*p2.z*c_83+48*p2.y*p1.z*c_12*c_83-96*p2.y*c_13*c_83+32*c_8*c_84+192*c_7*p3.y*c_84+672*p2.y*c_9*c_84+48*p2.y*c_11*
        c_84+48*p2.y*p1.z*p2.z*c_84-96*p2.y*c_12*c_84+48*p2.y*p1.z*c_134-96*p2.y*p2.z*c_134-96*p2.y*c_187-15*c_282*(2*p3.y*
        c_20+c_219+c_108)-3*c_102*(28*c_6+5*c_7*c_20+c_162+c_135-5*c_9*c_26+6*c_11*(c_163+c_48)+c_70+c_71+c_246+6*p1.z*(5*c_12+c_136+c_152))-3*
        c_101*(5*c_8*c_20+5*c_7*p3.y*c_20-5*c_10*c_26+2*p3.y*(c_137+c_138+c_125+c_70+c_139+c_153+12*p1.z*c_173)-p2.y*c_20*(c_154+6*
        (c_418+c_140+c_127+c_15+5*p1.z*c_24)))+c_14*(-15*c_77*c_20-15*c_8*p3.y*c_20+15*c_78*c_26-6*c_9*c_150+8*(-14*c_76+3*c_92+5*c_80*
        (c_122+c_151)+c_182+c_171+c_581+c_598+c_242+10*c_6*(c_140+c_123+c_152)+2*c_11*(c_388+c_141+c_139+c_153)+p1.z*(9*c_81+c_208+c_197+9*
        p2.z*c_16+c_184))+3*p2.y*p3.y*c_20*c_559+3*c_7*c_20*(c_154+6*(c_155+c_158+c_123+c_15+4*p1.z*c_159)))+c_75*(-(c_8*
        c_201)+c_14*c_202-3*c_7*p3.y*c_230+3*c_5*(p2.y*c_204+p3.y*c_396)-3*p1.y*(c_372+c_7*c_20+c_162+c_437+c_263+c_135+c_357+c_69+30*c_12*
        p3.z+c_293+c_390+28*c_16-c_9*c_339)-3*p2.y*(-6*c_6-6*c_11*c_207+c_9*(c_228+c_1+c_165)-6*p1.z*(c_12+c_136+c_206)+4*
        (c_13+c_177+c_192-7*c_16))+2*p3.y*c_20*(-7*c_9+12*(c_11+c_12+c_468+21*c_15+p1.z*(p2.z+c_166))))-3*c_5*(5*c_82*c_20+5*c_77*p3.y*c_20-5*
        c_79*c_26+2*c_10*(c_291+c_125+c_266+c_584-40*c_16+6*p1.z*p2.z*c_183+3*c_11*c_391)-c_7*p3.y*c_20*c_567+c_415-c_8*c_20*(c_154+6*
        (c_95+c_97+c_156+c_15+3*p1.z*c_565))+p2.y*c_20*(c_189-18*c_9*c_305+8*(c_424+c_196+c_209+c_176+c_583+c_83+10*c_6*c_24+6*c_11*
        (c_140+c_127+c_15)+3*p1.z*(c_238+c_177+c_268+c_16))))-3*p1.y*(5*c_129*c_20+5*c_82*p3.y*c_20-5*c_130*c_26-c_8*p3.y*c_20*(c_154+6*
        (c_178+c_179+c_97+c_223+c_193+c_157))+2*c_78*c_321-8*c_9*c_355-16*(2*c_185-c_186-c_132*c_367-c_133*p3.z-c_92*c_15-c_81*
        c_16-c_13*c_83-c_12*c_84-p2.z*c_134+2*c_187-c_76*c_423-c_80*(c_13+c_439+c_440-2*c_16)-c_6*(c_81+c_13*p3.z+c_12*c_15+p2.z*c_16-2*
        c_83)-c_11*(c_92+c_431+c_432+c_433+c_434-2*c_84)-p1.z*(c_133+c_92*p3.z+c_81*c_15+c_13*c_16+c_12*c_83+p2.z*c_84-2*c_134))-c_77*
        c_20*(c_154+6*(c_178+c_100+c_136+c_15+2*p1.z*c_188))+c_7*c_20*(c_189-18*c_9*c_336+8*(c_195+c_256+c_257+c_191+c_258+c_83+4*c_6*
        c_159+3*c_11*c_253+2*p1.z*c_255))+p2.y*p3.y*c_20*c_597)+c_36*(c_102*c_126-c_82*(c_67+c_66+c_29)-c_77*p3.y*c_225+c_101*(-3*
        p2.y*p1.z+10*p3.y*p1.z+3*p2.y*p2.z+9*p3.y*p2.z+8*p3.y*p3.z)-c_14*(3*c_7*c_20+9*p2.y*p3.y*c_20-2*c_9*c_199+6*p2.z*
        (c_95+c_168+c_12+c_467+c_123+c_98))+2*c_8*(-(c_9*(c_200+c_85+c_180))+3*p1.z*c_252)+2*c_7*p3.y*(-5*c_9*c_201+9*p1.z*c_233)-c_5*(3*
        c_8*c_20+9*c_7*p3.y*c_20-10*c_10*c_202-18*p2.y*c_20*(c_94+c_167+c_203+c_12+c_174+c_127+c_175)+18*p3.y*p2.z*c_399)+p1.y*(-3*
        c_77*c_20+9*c_8*p3.y*c_204+5*c_78*c_311+18*c_7*c_20*(c_94+c_11+c_169+c_123+c_175+c_205)+6*p2.y*p3.y*c_20*(c_154+9*c_11+9*c_12+24*
        p2.z*p3.z+30*c_15+12*p1.z*c_35)-36*c_9*p2.z*c_212-8*(4*c_76-3*c_92-9*c_81*p3.z-18*c_13*c_15-30*c_12*c_16-45*p2.z*c_83+14*
        c_84+c_80*(-3*p2.z+c_180)+c_6*(-3*c_12-9*p2.z*p3.z+16*c_15)-c_11*(c_125+c_141+c_142+c_143)-p1.z*(c_435+c_208+c_265+30*p2.z*
        c_16-20*c_83)))+2*p3.y*(7*c_78*c_20-8*(c_76+4*c_80*p3.z+10*c_6*c_15+20*c_11*c_16+35*p1.z*c_83-p2.z*(c_81+c_209+10*c_12*
        c_15+c_604+35*c_83)))-p2.y*(5*c_78*(c_200+c_66+c_210)-36*c_9*p1.z*c_212+8*(3*c_76+3*c_80*c_213+3*c_6*c_214+3*c_11*c_366+3*p1.z*
        (c_81+c_215+c_191+c_216+c_364)-2*(2*c_92+c_580+c_479+c_217+10*p2.z*c_83+7*c_84)))))-c_43*p3.x*(15*c_75*(-c_3+c_298+c_219)+c_36*
        (-3*c_14*c_18+3*c_5*(-(p3.y*c_234)+p2.y*c_220)+3*p1.y*(-2*c_9*c_358+3*c_7*c_236+p2.y*p3.y*(p1.z+c_222+c_160)+6*c_18*
        (c_11+c_168+c_158+c_223+c_224+c_194))+2*(3*c_7*p3.y*c_201+c_8*c_225+p3.y*(9*c_6+18*c_11*c_35-5*c_9*c_201+9*p1.z*(c_140+c_193+c_194)+24*
        (c_226+c_177+c_227))-3*p2.y*(3*c_6+c_9*c_2+9*c_11*c_190+9*p1.z*(c_169+c_123+c_175)-4*(5*c_13+c_177+c_245+c_227))))-3*(-5*
        c_77*p3.y*c_2+c_102*c_18-c_82*(c_228+c_229+c_29)+2*c_7*c_10*c_201+c_79*c_230+c_101*(c_231-p2.y*c_220)-6*c_10*p1.z*c_233+c_14*
        (p2.y*p3.y*c_234+c_235-3*c_7*c_236-6*c_18*c_170)+8*p3.y*(c_76+2*c_80*c_190+c_6*c_237+c_11*(c_238+c_70+c_71+c_249)+p1.z*
        (c_196+c_239+c_197+c_240+c_241)+2*(c_92-2*c_13*c_15-4*c_12*c_16-5*p2.z*c_83+c_242))+2*c_8*(c_9*c_37+6*p1.z*c_244)+c_5*(c_10*c_387+6*
        c_7*p3.y*c_18-2*c_8*(c_67+c_42+c_29)-6*p3.y*c_421+3*p2.y*(c_247+c_561+c_248+c_484+c_71+c_249+6*p1.z*(-2*c_12+c_250+c_15)))+p2.y*
        (c_78*(7*p1.z+c_66+c_180)-6*c_9*p1.z*c_252-8*(c_76+c_80*c_159+c_6*c_253+c_11*c_255+p1.z*(c_256+c_257+c_191+c_258+c_83)+2*
        (-14*c_92-5*c_81*p3.z+2*c_12*c_16+c_582+c_84)))-p1.y*(-(c_78*c_309)+5*c_77*c_486+2*c_8*p3.y*c_260+p2.y*(c_10*(c_261+c_115+c_160)+6*
        p3.y*(c_6+c_262+c_263+c_254-3*p1.z*c_15-9*p2.z*c_15+c_153))+6*c_9*c_363-8*c_18*(c_80+c_256+20*c_13*p3.z+c_265+12*
        p2.z*c_16+c_241+c_6*c_144+3*c_11*(c_169+c_127+c_15)+p1.z*(c_254+c_266+c_139+c_249))-3*c_7*(c_400+6*(c_6+c_338+c_268+c_16+c_11*
        c_24+p1.z*p3.z*c_24)))))+p1.x*(420*c_101*p2.y*c_6+240*c_14*c_7*c_6+120*c_5*c_8*c_6+48*p1.y*c_77*c_6+12*c_82*c_6-420*c_101*
        p3.y*c_6-240*c_14*c_9*c_6-120*c_5*c_10*c_6-48*p1.y*c_78*c_6-12*c_79*c_6-672*c_5*p2.y*c_76-192*p1.y*c_7*c_76-32*c_8*c_76+672*c_5*
        p3.y*c_76+192*p1.y*c_9*c_76+32*c_10*c_76+96*p2.y*c_185-96*p3.y*c_185+30*c_269*p2.z+30*c_270*p2.y*p2.z+30*c_102*c_7*p2.z+30*
        c_101*c_8*p2.z+30*c_14*c_77*p2.z+30*c_5*c_82*p2.z+30*p1.y*c_129*p2.z+30*c_128*p2.z-15*c_270*p3.y*p2.z-15*c_102*p2.y*
        p3.y*p2.z-15*c_101*c_7*p3.y*p2.z-15*c_14*c_8*p3.y*p2.z-15*c_5*c_77*p3.y*p2.z-15*p1.y*c_82*p3.y*p2.z-15*c_129*p3.y*
        p2.z-15*c_102*c_9*p2.z-15*c_101*p2.y*c_9*p2.z-15*c_14*c_7*c_9*p2.z-15*c_5*c_8*c_9*p2.z-15*p1.y*c_77*c_9*p2.z-15*c_82*c_9*
        p2.z-15*c_101*c_10*p2.z-15*c_14*p2.y*c_10*p2.z-15*c_5*c_7*c_10*p2.z-15*p1.y*c_8*c_10*p2.z-15*c_77*c_10*p2.z-15*c_14*c_78*
        p2.z-15*c_5*p2.y*c_78*p2.z-15*p1.y*c_7*c_78*p2.z-15*c_8*c_78*p2.z-15*c_5*c_79*p2.z-15*p1.y*p2.y*c_79*p2.z-15*c_7*c_79*
        p2.z-15*p1.y*c_130*p2.z-15*p2.y*c_130*p2.z-15*c_131*p2.z-504*c_102*c_11*p2.z-180*c_101*p2.y*c_11*p2.z+72*c_5*c_8*c_11*
        p2.z+72*p1.y*c_77*c_11*p2.z+36*c_82*c_11*p2.z+270*c_101*p3.y*c_11*p2.z+180*c_14*p2.y*p3.y*c_11*p2.z+108*c_5*c_7*p3.y*
        c_11*p2.z+54*p1.y*c_8*p3.y*c_11*p2.z+18*c_77*p3.y*c_11*p2.z+180*c_14*c_9*c_11*p2.z+108*c_5*p2.y*c_9*c_11*p2.z+54*p1.y*
        c_7*c_9*c_11*p2.z+18*c_8*c_9*c_11*p2.z+108*c_5*c_10*c_11*p2.z+54*p1.y*p2.y*c_10*c_11*p2.z+18*c_7*c_10*c_11*p2.z+54*p1.y*
        c_78*c_11*p2.z+c_271+c_503+560*c_14*c_80*p2.z-240*c_5*p2.y*c_80*p2.z-240*p1.y*c_7*c_80*p2.z-80*c_8*c_80*p2.z-360*c_5*p3.y*
        c_80*p2.z-120*p1.y*p2.y*p3.y*c_80*p2.z-24*c_7*p3.y*c_80*p2.z-120*p1.y*c_9*c_80*p2.z+c_272+c_504+96*p2.y*c_132*
        p2.z+c_505-144*c_102*p1.z*c_12-180*c_101*p2.y*p1.z*c_12-144*c_14*c_7*p1.z*c_12-72*c_5*c_8*p1.z*c_12+36*c_82*p1.z*c_12+90*c_101*
        p3.y*p1.z*c_12+144*c_14*p2.y*p3.y*p1.z*c_12+162*c_5*c_7*p3.y*p1.z*c_12+144*p1.y*c_8*p3.y*p1.z*c_12+90*c_77*p3.y*p1.z*
        c_12+72*c_14*c_9*p1.z*c_12+108*c_5*p2.y*c_9*p1.z*c_12+108*p1.y*c_7*c_9*p1.z*c_12+72*c_8*c_9*p1.z*c_12+54*c_5*c_10*p1.z*
        c_12+72*p1.y*p2.y*c_10*p1.z*c_12+c_273+36*p1.y*c_78*p1.z*c_12+36*p2.y*c_78*p1.z*c_12+c_506+320*c_14*c_6*c_12-192*p1.y*c_7*
        c_6*c_12-128*c_8*c_6*c_12-240*c_5*p3.y*c_6*c_12-192*p1.y*p2.y*p3.y*c_6*c_12+c_274-96*p1.y*c_9*c_6*c_12-48*p2.y*c_9*c_6*
        c_12+c_507+96*p2.y*c_76*c_12+c_508-24*c_102*c_13-60*c_101*p2.y*c_13-96*c_14*c_7*c_13-120*c_5*c_8*c_13-120*p1.y*c_77*c_13-84*c_82*
        c_13+18*c_101*p3.y*c_13+54*c_14*p2.y*p3.y*c_13+108*c_5*c_7*p3.y*c_13+180*p1.y*c_8*p3.y*c_13+270*c_77*p3.y*c_13+18*c_14*
        c_9*c_13+54*c_5*p2.y*c_9*c_13+108*p1.y*c_7*c_9*c_13+180*c_8*c_9*c_13+18*c_5*c_10*c_13+54*p1.y*p2.y*c_10*c_13+108*c_7*c_10*
        c_13+18*p1.y*c_78*c_13+54*p2.y*c_78*c_13+18*c_79*c_13+160*c_14*c_11*c_13+96*c_5*p2.y*c_11*c_13-96*p1.y*c_7*c_11*c_13-160*c_8*
        c_11*c_13-144*c_5*p3.y*c_11*c_13-216*p1.y*p2.y*p3.y*c_11*c_13-144*c_7*p3.y*c_11*c_13-72*p1.y*c_9*c_11*c_13-72*p2.y*c_9*c_11*
        c_13+c_509+96*p2.y*c_80*c_13+c_510+64*c_14*p1.z*c_81+96*c_5*p2.y*p1.z*c_81-160*c_8*p1.z*c_81-72*c_5*p3.y*p1.z*c_81-192*
        p1.y*p2.y*p3.y*p1.z*c_81-240*c_7*p3.y*p1.z*c_81-48*p1.y*c_9*p1.z*c_81-96*p2.y*c_9*p1.z*c_81+c_511+96*p2.y*c_6*
        c_81+c_512+16*c_14*c_92+48*c_5*p2.y*c_92+48*p1.y*c_7*c_92-112*c_8*c_92-24*c_5*p3.y*c_92-120*p1.y*p2.y*p3.y*c_92-360*c_7*p3.y*
        c_92-24*p1.y*c_9*c_92-120*p2.y*c_9*c_92-24*c_10*c_92+96*p2.y*c_11*c_92+c_513+96*p2.y*p1.z*c_133+c_514+96*p2.y*c_186+48*p3.y*
        c_186-30*c_269*p3.z+15*c_270*p2.y*p3.z+15*c_102*c_7*p3.z+15*c_101*c_8*p3.z+15*c_14*c_77*p3.z+15*c_5*c_82*p3.z+15*p1.y*
        c_129*p3.z+15*c_128*p3.z-30*c_270*p3.y*p3.z+15*c_102*p2.y*p3.y*p3.z+15*c_101*c_7*p3.y*p3.z+15*c_14*c_8*p3.y*p3.z+15*c_5*
        c_77*p3.y*p3.z+15*p1.y*c_82*p3.y*p3.z+15*c_129*p3.y*p3.z-30*c_102*c_9*p3.z+15*c_101*p2.y*c_9*p3.z+15*c_14*c_7*c_9*
        p3.z+15*c_5*c_8*c_9*p3.z+15*p1.y*c_77*c_9*p3.z+15*c_82*c_9*p3.z-30*c_101*c_10*p3.z+15*c_14*p2.y*c_10*p3.z+15*c_5*c_7*c_10*
        p3.z+15*p1.y*c_8*c_10*p3.z+15*c_77*c_10*p3.z-30*c_14*c_78*p3.z+15*c_5*p2.y*c_78*p3.z+15*p1.y*c_7*c_78*p3.z+15*c_8*c_78*
        p3.z-30*c_5*c_79*p3.z+15*p1.y*p2.y*c_79*p3.z+15*c_7*c_79*p3.z-30*p1.y*c_130*p3.z+15*p2.y*c_130*p3.z+c_515+504*c_102*c_11*
        p3.z-270*c_101*p2.y*c_11*p3.z-180*c_14*c_7*c_11*p3.z-108*c_5*c_8*c_11*p3.z-54*p1.y*c_77*c_11*p3.z-18*c_82*c_11*p3.z+180*
        c_101*p3.y*c_11*p3.z-180*c_14*p2.y*p3.y*c_11*p3.z-108*c_5*c_7*p3.y*c_11*p3.z-54*p1.y*c_8*p3.y*c_11*p3.z-18*c_77*p3.y*
        c_11*p3.z-108*c_5*p2.y*c_9*c_11*p3.z-54*p1.y*c_7*c_9*c_11*p3.z-18*c_8*c_9*c_11*p3.z-72*c_5*c_10*c_11*p3.z-54*p1.y*p2.y*
        c_10*c_11*p3.z-18*c_7*c_10*c_11*p3.z-72*p1.y*c_78*c_11*p3.z-18*p2.y*c_78*c_11*p3.z-36*c_79*c_11*p3.z-560*c_14*c_80*
        p3.z+360*c_5*p2.y*c_80*p3.z+120*p1.y*c_7*c_80*p3.z+24*c_8*c_80*p3.z+240*c_5*p3.y*c_80*p3.z+120*p1.y*p2.y*p3.y*c_80*p3.z+24*
        c_7*p3.y*c_80*p3.z+240*p1.y*c_9*c_80*p3.z+24*p2.y*c_9*c_80*p3.z+80*c_10*c_80*p3.z-48*p2.y*c_132*p3.z-96*p3.y*c_132*
        p3.z-90*c_101*p2.y*p1.z*p2.z*p3.z-144*c_14*c_7*p1.z*p2.z*p3.z-162*c_5*c_8*p1.z*p2.z*p3.z-144*p1.y*c_77*p1.z*p2.z*
        p3.z-90*c_82*p1.z*p2.z*p3.z+90*c_101*p3.y*p1.z*p2.z*p3.z-54*c_5*c_7*p3.y*p1.z*p2.z*p3.z-72*p1.y*c_8*p3.y*p1.z*p2.z*
        p3.z-54*c_77*p3.y*p1.z*p2.z*p3.z+144*c_14*c_9*p1.z*p2.z*p3.z+54*c_5*p2.y*c_9*p1.z*p2.z*p3.z-18*c_8*c_9*p1.z*p2.z*
        p3.z+162*c_5*c_10*p1.z*p2.z*p3.z+72*p1.y*p2.y*c_10*p1.z*p2.z*p3.z+18*c_7*c_10*p1.z*p2.z*p3.z+144*p1.y*c_78*p1.z*
        p2.z*p3.z+54*p2.y*c_78*p1.z*p2.z*p3.z+c_516+240*c_5*p2.y*c_6*p2.z*p3.z+192*p1.y*c_7*c_6*p2.z*p3.z+72*c_8*c_6*p2.z*
        p3.z-240*c_5*p3.y*c_6*p2.z*p3.z+24*c_7*p3.y*c_6*p2.z*p3.z-192*p1.y*c_9*c_6*p2.z*p3.z-24*p2.y*c_9*c_6*p2.z*p3.z+c_517-48*
        p2.y*c_76*p2.z*p3.z+c_518-18*c_101*p2.y*c_12*p3.z-54*c_14*c_7*c_12*p3.z-108*c_5*c_8*c_12*p3.z-180*p1.y*c_77*c_12*
        p3.z-270*c_82*c_12*p3.z+18*c_101*p3.y*c_12*p3.z+18*c_14*p2.y*p3.y*c_12*p3.z-36*p1.y*c_8*p3.y*c_12*p3.z-90*c_77*p3.y*c_12*
        p3.z+36*c_14*c_9*c_12*p3.z+54*c_5*p2.y*c_9*c_12*p3.z+54*p1.y*c_7*c_9*c_12*p3.z+36*c_8*c_9*c_12*p3.z+54*c_5*c_10*c_12*
        p3.z+90*p1.y*p2.y*c_10*c_12*p3.z+108*c_7*c_10*c_12*p3.z+72*p1.y*c_78*c_12*p3.z+126*p2.y*c_78*c_12*p3.z+90*c_79*c_12*p3.z+144*
        c_5*p2.y*c_11*c_12*p3.z+216*p1.y*c_7*c_11*c_12*p3.z+144*c_8*c_11*c_12*p3.z-144*c_5*p3.y*c_11*c_12*p3.z-72*p1.y*p2.y*
        p3.y*c_11*c_12*p3.z-144*p1.y*c_9*c_11*c_12*p3.z+c_275+c_520-48*p2.y*c_80*c_12*p3.z+c_521+72*c_5*p2.y*p1.z*c_13*p3.z+192*
        p1.y*c_7*p1.z*c_13*p3.z+240*c_8*p1.z*c_13*p3.z-72*c_5*p3.y*p1.z*c_13*p3.z-96*p1.y*p2.y*p3.y*p1.z*c_13*p3.z-48*c_7*
        p3.y*p1.z*c_13*p3.z-96*p1.y*c_9*p1.z*c_13*p3.z-120*p2.y*c_9*p1.z*c_13*p3.z+c_522-48*p2.y*c_6*c_13*p3.z+c_523+24*c_5*
        p2.y*c_81*p3.z+120*p1.y*c_7*c_81*p3.z+360*c_8*c_81*p3.z-24*c_5*p3.y*c_81*p3.z-72*p1.y*p2.y*p3.y*c_81*p3.z-120*c_7*
        p3.y*c_81*p3.z-48*p1.y*c_9*c_81*p3.z-168*p2.y*c_9*c_81*p3.z-72*c_10*c_81*p3.z-48*p2.y*c_11*c_81*p3.z+c_524-48*p2.y*p1.z*
        c_92*p3.z+c_525-48*p2.y*c_133*p3.z+48*p3.y*c_133*p3.z+144*c_102*p1.z*c_15-90*c_101*p2.y*p1.z*c_15-72*c_14*c_7*p1.z*
        c_15-54*c_5*c_8*p1.z*c_15-36*p1.y*c_77*p1.z*c_15-18*c_82*p1.z*c_15+180*c_101*p3.y*p1.z*c_15-144*c_14*p2.y*p3.y*p1.z*c_15-108*
        c_5*c_7*p3.y*p1.z*c_15-72*p1.y*c_8*p3.y*p1.z*c_15-36*c_77*p3.y*p1.z*c_15+144*c_14*c_9*p1.z*c_15-162*c_5*p2.y*c_9*p1.z*
        c_15-108*p1.y*c_7*c_9*p1.z*c_15-54*c_8*c_9*p1.z*c_15+72*c_5*c_10*p1.z*c_15-144*p1.y*p2.y*c_10*p1.z*c_15-72*c_7*c_10*
        p1.z*c_15-90*p2.y*c_78*p1.z*c_15-36*c_79*p1.z*c_15-320*c_14*c_6*c_15+240*c_5*p2.y*c_6*c_15+96*p1.y*c_7*c_6*c_15+24*c_8*c_6*
        c_15+192*p1.y*p2.y*p3.y*c_6*c_15+48*c_7*p3.y*c_6*c_15+192*p1.y*c_9*c_6*c_15+72*p2.y*c_9*c_6*c_15+128*c_10*c_6*c_15-48*p2.y*
        c_76*c_15-96*p3.y*c_76*c_15-18*c_101*p2.y*p2.z*c_15-36*c_14*c_7*p2.z*c_15-54*c_5*c_8*p2.z*c_15-72*p1.y*c_77*p2.z*c_15-90*
        c_82*p2.z*c_15+18*c_101*p3.y*p2.z*c_15-18*c_14*p2.y*p3.y*p2.z*c_15-54*c_5*c_7*p3.y*p2.z*c_15-90*p1.y*c_8*p3.y*p2.z*
        c_15-126*c_77*p3.y*p2.z*c_15+54*c_14*c_9*p2.z*c_15-54*p1.y*c_7*c_9*p2.z*c_15-108*c_8*c_9*p2.z*c_15+108*c_5*c_10*p2.z*c_15+36*
        p1.y*p2.y*c_10*p2.z*c_15-36*c_7*c_10*p2.z*c_15+180*p1.y*c_78*p2.z*c_15+90*p2.y*c_78*p2.z*c_15+270*c_79*p2.z*c_15+144*
        c_5*p2.y*c_11*p2.z*c_15+144*p1.y*c_7*c_11*p2.z*c_15+72*c_8*c_11*p2.z*c_15-144*c_5*p3.y*c_11*p2.z*c_15+72*p1.y*p2.y*
        p3.y*c_11*p2.z*c_15+72*c_7*p3.y*c_11*p2.z*c_15-216*p1.y*c_9*c_11*p2.z*c_15+c_527-48*p2.y*c_80*p2.z*c_15+c_528+72*c_5*p2.y*
        p1.z*c_12*c_15+144*p1.y*c_7*p1.z*c_12*c_15+144*c_8*p1.z*c_12*c_15-72*c_5*p3.y*p1.z*c_12*c_15+72*c_7*p3.y*p1.z*c_12*c_15-144*
        p1.y*c_9*p1.z*c_12*c_15-72*p2.y*c_9*p1.z*c_12*c_15+c_529-48*p2.y*c_6*c_12*c_15+c_530+24*c_5*p2.y*c_13*c_15+96*p1.y*
        c_7*c_13*c_15+240*c_8*c_13*c_15-24*c_5*p3.y*c_13*c_15-24*p1.y*p2.y*p3.y*c_13*c_15+48*c_7*p3.y*c_13*c_15-72*p1.y*c_9*c_13*
        c_15-144*p2.y*c_9*c_13*c_15-144*c_10*c_13*c_15-48*p2.y*c_11*c_13*c_15+c_531-48*p2.y*p1.z*c_81*c_15+c_532-48*p2.y*c_92*c_15+48*
        p3.y*c_92*c_15+24*c_102*c_16-18*c_101*p2.y*c_16-18*c_14*c_7*c_16-18*c_5*c_8*c_16-18*p1.y*c_77*c_16-18*c_82*c_16+60*c_101*p3.y*
        c_16-54*c_14*p2.y*p3.y*c_16-54*c_5*c_7*p3.y*c_16-54*p1.y*c_8*p3.y*c_16-54*c_77*p3.y*c_16+96*c_14*c_9*c_16-108*c_5*p2.y*
        c_9*c_16-108*p1.y*c_7*c_9*c_16-108*c_8*c_9*c_16+120*c_5*c_10*c_16-180*p1.y*p2.y*c_10*c_16-180*c_7*c_10*c_16+120*p1.y*c_78*
        c_16-270*p2.y*c_78*c_16+c_533-160*c_14*c_11*c_16+144*c_5*p2.y*c_11*c_16+72*p1.y*c_7*c_11*c_16+24*c_8*c_11*c_16-96*c_5*p3.y*c_11*
        c_16+216*p1.y*p2.y*p3.y*c_11*c_16+72*c_7*p3.y*c_11*c_16+96*p1.y*c_9*c_11*c_16+144*p2.y*c_9*c_11*c_16+160*c_10*c_11*c_16-48*
        p2.y*c_80*c_16-96*p3.y*c_80*c_16+72*c_5*p2.y*p1.z*p2.z*c_16+96*p1.y*c_7*p1.z*p2.z*c_16+72*c_8*p1.z*p2.z*c_16-72*c_5*
        p3.y*p1.z*p2.z*c_16+96*p1.y*p2.y*p3.y*p1.z*p2.z*c_16+120*c_7*p3.y*p1.z*p2.z*c_16-192*p1.y*c_9*p1.z*p2.z*c_16+48*
        p2.y*c_9*p1.z*p2.z*c_16+c_534-48*p2.y*c_6*p2.z*c_16+c_535+24*c_5*p2.y*c_12*c_16+72*p1.y*c_7*c_12*c_16+144*c_8*c_12*c_16-24*
        c_5*p3.y*c_12*c_16+24*p1.y*p2.y*p3.y*c_12*c_16+144*c_7*p3.y*c_12*c_16-96*p1.y*c_9*c_12*c_16-48*p2.y*c_9*c_12*c_16-240*
        c_10*c_12*c_16-48*p2.y*c_11*c_12*c_16+c_536-48*p2.y*p1.z*c_13*c_16+c_537-48*p2.y*c_81*c_16+48*p3.y*c_81*c_16-64*c_14*p1.z*
        c_83+72*c_5*p2.y*p1.z*c_83+48*p1.y*c_7*p1.z*c_83+24*c_8*p1.z*c_83-96*c_5*p3.y*p1.z*c_83+192*p1.y*p2.y*p3.y*p1.z*c_83+96*
        c_7*p3.y*p1.z*c_83+240*p2.y*c_9*p1.z*c_83+160*c_10*p1.z*c_83-48*p2.y*c_6*c_83-96*p3.y*c_6*c_83+24*c_5*p2.y*p2.z*c_83+48*
        p1.y*c_7*p2.z*c_83+72*c_8*p2.z*c_83-24*c_5*p3.y*p2.z*c_83+72*p1.y*p2.y*p3.y*p2.z*c_83+168*c_7*p3.y*p2.z*c_83-120*
        p1.y*c_9*p2.z*c_83+120*p2.y*c_9*p2.z*c_83-360*c_10*p2.z*c_83-48*p2.y*c_11*p2.z*c_83+c_538-48*p2.y*p1.z*c_12*c_83+c_539-48*
        p2.y*c_13*c_83+48*p3.y*c_13*c_83-16*c_14*c_84+24*c_5*p2.y*c_84+24*p1.y*c_7*c_84+24*c_8*c_84-48*c_5*p3.y*c_84+120*p1.y*
        p2.y*p3.y*c_84+120*c_7*p3.y*c_84-48*p1.y*c_9*c_84+360*p2.y*c_9*c_84+c_540-48*p2.y*c_11*c_84-96*p3.y*c_11*c_84-48*p2.y*p1.z*
        p2.z*c_84+c_541-48*p2.y*c_12*c_84+48*p3.y*c_12*c_84-48*p2.y*p1.z*c_134-96*p3.y*p1.z*c_134-48*p2.y*p2.z*c_134+48*p3.y*
        p2.z*c_134-48*p2.y*c_187+c_542+15*c_276*p3.x*c_44+3*c_74*p3.x*(c_277+c_300+10*c_7+c_302+c_278+4*p1.y*(2*p2.y+p3.y)-18*
        c_11+c_279-60*c_12+c_303-48*p2.z*p3.z+c_280)*c_44+15*c_281*c_30-15*c_282*c_109-c_107*(c_373-30*c_7*p3.y*p1.z-12*p2.y*c_9*
        p1.z+c_374+60*p2.y*c_6+54*p3.y*c_6+c_283+45*c_7*p3.y*p2.z+15*p2.y*c_9*p2.z+c_376+180*p2.y*c_11*p2.z+126*p3.y*c_11*p2.z+180*
        p2.y*p1.z*c_12+c_284+c_285-270*p3.y*c_13+c_377-45*c_8*p3.z-15*c_7*p3.y*p3.z+c_378+c_286+36*p3.y*c_11*p3.z+c_287+c_288+270*
        p2.y*c_12*p3.z-90*p3.y*c_12*p3.z+c_289+c_381+90*p2.y*p2.z*c_15+c_382+c_383+c_14*c_290+3*p1.y*(c_291+c_55+24*c_11*
        p2.z-40*c_13+c_292-18*c_11*p3.z-48*p1.z*p2.z*p3.z-60*c_12*p3.z+c_293-24*p2.z*c_15+c_294+c_9*c_369+5*c_7*c_24+c_343)+3*c_5*
        (c_466+p2.y*c_482))-3*p2.x*p3.x*(c_297+c_49+c_298)*(5*c_75+5*c_101+5*c_77+8*c_8*p3.y+9*c_7*c_9+8*p2.y*c_10+c_189+8*c_14*c_299-18*
        c_7*c_11-24*p2.y*p3.y*c_11-18*c_9*c_11+40*c_80-48*c_7*p1.z*p2.z-48*p2.y*p3.y*p1.z*p2.z-24*c_9*p1.z*p2.z+64*c_6*
        p2.z-60*c_7*c_12-48*p2.y*p3.y*c_12-18*c_9*c_12+72*c_11*c_12+64*p1.z*c_13+40*c_81-24*c_7*p1.z*p3.z-48*p2.y*p3.y*p1.z*p3.z-48*
        c_9*p1.z*p3.z+64*c_6*p3.z-48*c_7*p2.z*p3.z-72*p2.y*p3.y*p2.z*p3.z-48*c_9*p2.z*p3.z+96*c_11*p2.z*p3.z+96*p1.z*c_12*
        p3.z+64*c_13*p3.z-18*c_7*c_15-48*p2.y*p3.y*c_15-60*c_9*c_15+72*c_11*c_15+96*p1.z*p2.z*c_15+72*c_12*c_15+64*p1.z*c_16+64*
        p2.z*c_16+40*c_83+c_36*(c_300+c_301+c_302+4*p1.y*(p2.y+2*p3.y)+2*(5*c_9-9*c_11-12*p1.z*p2.z-9*c_12+c_303+c_304-30*c_15))+4*
        p1.y*(2*c_8+3*c_7*p3.y+3*p2.y*c_9+2*c_10-6*p2.y*c_170-6*p3.y*c_305)+3*c_5*(c_301+c_306+c_278-2*c_308))+c_75*(-3*c_7*p3.y*
        c_309+c_310+c_14*c_199-5*c_10*c_311-3*p1.y*(-16*c_6-5*c_9*p2.z+c_135+p2.y*p3.y*(c_120+c_115+c_259)+6*c_11*(c_87+c_151)+c_483-10*
        c_9*p3.z+24*c_12*p3.z+60*p2.z*c_15+40*c_16+12*p1.z*p2.z*c_183)+3*c_5*(c_397+p3.y*c_427)+6*p3.y*c_321-3*p2.y*(5*c_9*
        c_121-6*c_28*(c_178+c_12+c_136+c_206+2*p1.z*c_207)))-3*c_43*(c_441-5*c_77*p3.y*p1.z-4*c_8*c_9*p1.z-3*c_7*c_10*p1.z-2*p2.y*
        c_78*p1.z+c_442+18*c_7*p3.y*c_6+c_443+6*c_10*c_6+c_444-40*p3.y*c_76-28*c_82*p2.z+15*c_77*p3.y*p2.z+10*c_8*c_9*p2.z+6*c_7*
        c_10*p2.z+3*p2.y*c_78*p2.z+c_445+c_322+18*p2.y*c_9*c_11*p2.z+6*c_10*c_11*p2.z-32*p2.y*c_80*p2.z-56*p3.y*c_80*p2.z-32*
        p2.y*c_6*c_12-48*p3.y*c_6*c_12-180*c_7*p3.y*c_13-60*p2.y*c_9*c_13-12*c_10*c_13-16*p3.y*c_11*c_13+c_446+40*p3.y*p1.z*c_81+224*
        p2.y*c_92+120*p3.y*c_92+c_447-15*c_82*p3.z-10*c_77*p3.y*p3.z-6*c_8*c_9*p3.z-3*c_7*c_10*p3.z+c_448+12*c_8*c_11*
        p3.z+c_449+c_450+12*c_10*c_11*p3.z-8*p2.y*c_80*p3.z-32*p3.y*c_80*p3.z+60*c_8*p1.z*p2.z*p3.z+36*c_7*p3.y*p1.z*p2.z*p3.z+c_324+6*
        c_10*p1.z*p2.z*p3.z-24*p2.y*c_6*p2.z*p3.z-40*p3.y*c_6*p2.z*p3.z+180*c_8*c_12*p3.z-36*p2.y*c_9*c_12*p3.z-18*c_10*
        c_12*p3.z-48*p2.y*c_11*c_12*p3.z-24*p3.y*c_11*c_12*p3.z-80*p2.y*p1.z*c_13*p3.z+16*p3.y*p1.z*c_13*p3.z-120*p2.y*c_81*
        p3.z+80*p3.y*c_81*p3.z+c_451+c_452+c_453+c_454-8*p2.y*c_6*c_15-24*p3.y*c_6*c_15+60*c_8*p2.z*c_15+36*c_7*p3.y*p2.z*
        c_15+c_455-24*p2.y*c_11*p2.z*c_15-24*p3.y*c_11*p2.z*c_15+c_456-80*p2.y*c_13*c_15+48*p3.y*c_13*c_15+12*c_8*c_16+18*c_7*p3.y*
        c_16+c_457-8*p2.y*c_11*c_16-16*p3.y*c_11*c_16-24*p2.y*p1.z*p2.z*c_16-8*p3.y*p1.z*p2.z*c_16-48*p2.y*c_12*c_16+24*p3.y*c_12*
        c_16-8*p2.y*p1.z*c_83+c_458-24*p2.y*p2.z*c_83+c_459+c_460+c_102*(c_120+c_1+c_164)+c_101*(p3.y*(c_261+p2.z+c_54)+p2.y*
        c_325)+c_14*(-3*c_36*c_18+c_9*c_370+p2.y*p3.y*(c_326+c_87+c_164)+c_328-6*p3.z*(c_155+c_140+c_127+c_15+c_587))+c_5*(-(c_10*c_329)-3*
        p2.y*c_9*c_330+2*c_8*c_22+3*c_7*p3.y*c_331+3*c_36*(c_332+c_551)-6*p3.y*(c_438-6*c_11*p2.z+c_226+c_177+c_192+c_333+c_608)-6*
        p2.y*p3.z*c_335)+3*c_36*(c_7*p3.y*c_267+2*c_8*c_28+2*p3.y*c_20*(c_94+c_178+c_158+c_146+c_98+6*p1.z*c_190)-p2.y*(c_607+6*
        c_28*c_336))+p1.y*(-2*c_78*p1.z+24*c_9*c_6-64*c_76+c_78*p2.z+18*c_9*c_11*p2.z+c_470-64*c_6*c_12+c_471-32*c_11*c_13+c_472+6*
        c_7*c_9*c_204+c_473+c_474+18*c_9*c_11*p3.z+40*c_80*p3.z+64*c_6*p2.z*p3.z+c_476+72*c_11*c_12*p3.z+64*p1.z*c_13*p3.z+40*c_81*
        p3.z+32*c_6*c_15+c_477+c_478+48*p1.z*c_12*c_15+32*c_13*c_15+c_480+24*c_11*c_16+32*p1.z*p2.z*c_16+c_555+16*p1.z*c_83+16*
        p2.z*c_83+c_481-2*c_8*p3.y*c_599-5*c_77*c_24+p2.y*c_10*c_341+6*p2.y*p3.y*(8*c_6+c_338+c_547+c_245-c_16+3*c_11*c_159)+3*c_36*(2*
        c_7*c_20-2*c_9*c_28+p2.y*p3.y*c_218+6*c_18*c_336)))+3*c_36*(-(c_77*p3.y*c_121)+c_395+c_102*(c_120+c_161+c_29)-c_79*c_339+c_101*
        (p2.y*(c_261+c_66+p3.z)+p3.y*c_340)+12*c_10*p2.z*c_212+c_14*(c_7*c_341+c_343+c_9*(c_120+6*p2.z+c_54)-6*p2.z*(c_155+c_344+c_12+8*
        p1.z*p3.z+c_127+c_157))-8*p3.y*c_355-3*c_8*(c_248-2*c_28*c_336)-c_5*(-2*c_10*c_26+c_8*c_356+3*c_7*p3.y*c_330+3*p2.y*
        (c_393+c_238+c_9*c_329+c_357+c_70+c_71+c_249+6*p1.z*p2.z*c_190)+6*p3.y*p2.z*c_429)-2*c_7*p3.y*(c_9*c_358-3*c_363)+p2.y*
        (-5*c_78*c_267+18*c_9*c_602-8*c_28*(c_195+c_81+c_215+c_191+c_216+c_364+4*c_6*c_213+3*c_11*c_214+2*p1.z*c_366))+p1.y*(-64*c_76-5*
        c_78*p2.z+8*c_92+40*c_80*c_367-10*c_78*p3.z+16*c_81*p3.z+c_554+32*c_12*c_16+40*p2.z*c_83+16*c_84+c_77*c_369+c_8*p3.y*c_370+32*
        c_6*(c_12+c_127+c_152)+8*c_11*(c_125+c_70+c_139+c_246)+16*p1.z*p2.z*c_425-6*c_7*(c_372+c_226+c_99+c_177+c_192+c_333-3*c_11*
        c_190)-2*p2.y*(c_10*c_309+3*p3.y*(-8*c_6+c_13+c_177+c_71+c_365-3*c_11*c_213)))))+p10_2*(15*c_107*p3.x*c_44+15*c_276*c_30-15*
        p30_5*c_109+3*c_43*p3.x*c_44*(c_277+3*(2*c_5+3*p1.y*p2.y+2*c_7+2*p1.y*p3.y+2*p2.y*p3.y+c_9-12*c_11-18*p1.z*p2.z-12*
        c_12-12*p1.z*p3.z-12*p2.z*p3.z-6*c_15))-c_74*(c_373-18*c_7*p3.y*p1.z-9*p2.y*c_9*p1.z+c_374+96*p2.y*c_6+108*p3.y*c_6-40*c_8*
        p2.z+c_375+12*p2.y*c_9*p2.z+c_376+144*p2.y*c_11*p2.z+108*p3.y*c_11*p2.z-36*p3.y*p1.z*c_12-240*p2.y*c_13-180*p3.y*
        c_13+c_377-30*c_8*p3.z-12*c_7*p3.y*p3.z+c_378+54*p2.y*c_11*p3.z+54*p3.y*c_11*p3.z+144*p2.y*p1.z*p2.z*p3.z+c_379+c_380-72*
        p3.y*c_12*p3.z+36*p2.y*p1.z*c_15+c_381+72*p2.y*p2.z*c_15+c_382+c_383+2*c_14*c_384-3*p1.y*(c_385+c_116-24*c_11*p2.z+24*
        p1.z*c_12+40*c_13+p2.y*p3.y*(c_200+c_386+c_4)+c_9*c_356+c_117+36*c_11*p3.z+54*p1.z*p2.z*p3.z+c_389+18*p1.z*c_15+c_142+c_119+2*
        c_7*c_22)+3*c_5*(3*p3.y*c_369+p2.y*(c_93+c_85+c_166)))+p30_3*(-3*c_7*p3.y*c_387+c_310+2*c_14*(c_73+c_122+c_160)+c_5*(9*
        p2.y*c_369+6*p3.y*c_202)+2*p3.y*(48*c_6+c_388+c_389+c_390-120*c_16+18*p1.z*p2.z*c_183-5*c_9*c_202+9*c_11*c_391)-6*p2.y*(c_9*
        c_568-3*c_28*c_574)-3*p1.y*(p2.y*p3.y*(c_200+c_17+c_392)+c_7*c_329+2*(c_393+c_125+c_9*c_26+6*c_11*c_430+c_141+c_142+c_394+3*
        p1.z*(c_140+c_146+c_349))))+3*p3.x*(-(c_77*p3.y*c_96)+c_395+c_102*(c_461+c_163+c_29)-c_79*c_396+5*c_101*(c_27+c_397)+6*c_10*
        p2.z*c_399-c_8*(c_400-6*c_28*c_170)+c_415-2*c_14*(p2.y*p3.y*c_416+c_7*c_417+c_9*c_35+6*p2.z*(c_418+c_12+c_250+c_15+5*p1.z*
        c_190))+c_7*p3.y*(-(c_9*c_234)+6*c_421)+p2.y*(-(c_78*c_564)+6*c_9*c_571-8*c_28*c_579)+p1.y*(-(c_8*p3.y*c_387)+c_77*c_426-c_78*
        c_427-3*c_7*(c_393-12*c_11*p2.z+c_238+c_248+c_70+c_71+c_249+6*p1.z*p3.z*c_190)+6*c_9*p2.z*c_429+8*(-28*c_76+c_92+5*c_80*
        c_430+c_431+c_432+c_433+c_434+2*c_84+10*c_6*p2.z*c_190+c_11*(c_135+c_70+c_71+c_249)+p1.z*(c_435+c_215+c_176+c_258+4*c_83))+p2.y*
        (c_10*c_436+6*p3.y*(c_313+c_437+c_13+c_245+c_153+3*p1.z*(c_12-3*c_15))))-c_5*(6*c_7*p3.y*c_28+2*c_10*c_202+c_8*(6*p1.z-3*
        c_190)+3*p2.y*(c_235+c_490)))-3*p2.x*(c_441-c_77*p3.y*p1.z-c_8*c_9*p1.z-c_7*c_10*p1.z-p2.y*c_78*p1.z+c_442+12*c_7*p3.y*
        c_6+c_443+12*c_10*c_6+c_444-120*p3.y*c_76-8*c_82*p2.z+5*c_77*p3.y*p2.z+4*c_8*c_9*p2.z+3*c_7*c_10*p2.z+2*p2.y*c_78*p2.z+c_445-40*
        p3.y*c_80*p2.z-36*c_7*p3.y*p1.z*c_12-18*p2.y*c_9*p1.z*c_12-6*c_10*p1.z*c_12+32*p2.y*c_6*c_12+16*p3.y*c_6*c_12-60*
        c_7*p3.y*c_13-24*p2.y*c_9*c_13-6*c_10*c_13+64*p2.y*c_11*c_13+48*p3.y*c_11*c_13+c_446+56*p3.y*p1.z*c_81+64*p2.y*c_92+40*
        p3.y*c_92+c_447-5*c_82*p3.z-4*c_77*p3.y*p3.z-3*c_8*c_9*p3.z-2*c_7*c_10*p3.z+c_448+18*c_8*c_11*p3.z+c_449+c_450+18*c_10*c_11*
        p3.z-40*p2.y*c_80*p3.z-80*p3.y*c_80*p3.z+48*c_8*p1.z*p2.z*p3.z+18*c_7*p3.y*p1.z*p2.z*p3.z-6*c_10*p1.z*p2.z*p3.z-64*
        p2.y*c_6*p2.z*p3.z-16*p3.y*c_6*p2.z*p3.z+60*c_8*c_12*p3.z-18*p2.y*c_9*c_12*p3.z-12*c_10*c_12*p3.z-72*p2.y*c_11*c_12*
        p3.z+24*p3.y*c_11*c_12*p3.z-64*p2.y*p1.z*c_13*p3.z+40*p3.y*p1.z*c_13*p3.z-40*p2.y*c_81*p3.z+32*p3.y*c_81*
        p3.z+c_451+c_452+c_453+c_454-32*p2.y*c_6*c_15-48*p3.y*c_6*c_15+24*c_8*p2.z*c_15+18*c_7*p3.y*p2.z*c_15+c_455-48*p2.y*c_11*p2.z*
        c_15+c_456+24*p3.y*p1.z*c_12*c_15-32*p2.y*c_13*c_15+24*p3.y*c_13*c_15+6*c_8*c_16+12*c_7*p3.y*c_16+c_457-24*p2.y*c_11*c_16-24*
        p3.y*c_11*c_16-32*p2.y*p1.z*p2.z*c_16+8*p3.y*p1.z*p2.z*c_16-24*p2.y*c_12*c_16+16*p3.y*c_12*c_16-16*p2.y*p1.z*c_83+c_458-16*
        p2.y*p2.z*c_83+c_459+c_460+c_102*(c_461+c_1+c_462)-2*c_14*(3*c_36*p2.z+c_9*(c_56+c_221+c_89)+p2.y*p3.y*c_463-3*c_36*
        p3.z+c_464+c_69+c_70+c_465+c_71+c_119+c_7*c_24)+5*c_101*(c_23+c_466)+3*c_36*(c_7*p3.y*c_96+c_8*c_28+2*p3.y*c_20*(c_94+c_95+6*
        p1.z*p2.z+c_140+c_467+c_468+c_98)-2*p2.y*(6*c_6+c_9*c_218+3*c_11*c_24+c_420-3*p3.z*c_469))+p1.y*(-3*c_78*p1.z+60*c_9*c_6-224*
        c_76+2*c_78*p2.z+c_470-18*c_9*p1.z*c_12+c_471+32*c_11*c_13+32*p1.z*c_81+c_472+c_8*p3.y*(c_295+c_85+c_259)+c_473+c_474+c_553+120*
        c_80*p3.z+c_475+80*c_6*p2.z*p3.z+c_476+48*c_11*c_12*p3.z+24*p1.z*c_13*p3.z+8*c_81*p3.z+80*c_6*c_15+c_477+c_478+24*
        p1.z*c_12*c_15+c_479+c_480+48*c_11*c_16+24*p1.z*p2.z*c_16+8*c_12*c_16+24*p1.z*c_83+8*p2.z*c_83+c_481-c_77*c_482+3*c_36*(p2.y*
        p3.y*c_28+c_483+c_9*c_426+c_557)+p2.y*p3.y*(-(c_9*c_569)+6*(c_313-9*p1.z*c_12+c_552+c_484+c_572+3*p1.z*c_15+c_16))+c_7*
        (-3*c_9*c_236+c_485))+c_5*(6*p2.y*c_9*c_204+c_36*(6*p2.y*c_20-3*p3.y*c_121)-3*c_7*p3.y*c_486-2*c_8*c_88-3*p3.y*(c_9*
        c_330+c_490))))-p2.x*(15*c_282*p2.y*p1.z+9*c_75*c_8*p1.z+15*c_36*c_82*p1.z+30*c_128*p1.z-15*c_282*p3.y*p1.z+21*c_75*c_7*p3.y*
        p1.z+21*c_36*c_77*p3.y*p1.z+c_491+15*c_75*p2.y*c_9*p1.z+18*c_36*c_8*c_9*p1.z+c_492-45*c_75*c_10*p1.z+6*c_36*c_7*c_10*
        p1.z+c_493-15*c_36*p2.y*c_78*p1.z+c_494-45*c_36*c_79*p1.z+c_495+c_496-15*c_131*p1.z-18*c_75*p2.y*c_6-18*c_36*c_8*c_6-24*c_82*c_6+18*
        c_75*p3.y*c_6-18*c_36*c_7*p3.y*c_6+c_497+c_498+36*c_36*c_10*c_6+c_499+c_500+18*c_79*c_6+24*c_36*p2.y*c_76+16*c_8*c_76-24*
        c_36*p3.y*c_76+c_501+c_502-24*c_10*c_76+48*p3.y*c_185+8*c_75*c_8*p2.z+24*c_36*c_82*p2.z-30*c_282*p3.y*p2.z+12*c_75*c_7*p3.y*
        p2.z+30*c_36*c_77*p3.y*p2.z+24*c_36*c_8*c_9*p2.z-20*c_75*c_10*p2.z+12*c_36*c_7*c_10*p2.z-6*c_36*c_79*p2.z-36*c_75*p2.y*
        c_11*p2.z-72*c_36*c_8*c_11*p2.z-144*c_82*c_11*p2.z+18*c_75*p3.y*c_11*p2.z-54*c_36*c_7*p3.y*c_11*p2.z+90*c_77*p3.y*c_11*
        p2.z+72*c_8*c_9*c_11*p2.z+36*c_36*c_10*c_11*p2.z+54*c_7*c_10*c_11*p2.z+36*p2.y*c_78*c_11*p2.z+c_503+48*c_36*p2.y*c_80*
        p2.z+64*c_8*c_80*p2.z-24*c_36*p3.y*c_80*p2.z-72*c_7*p3.y*c_80*p2.z-48*p2.y*c_9*c_80*p2.z+c_504+c_505-54*c_75*p2.y*p1.z*
        c_12-180*c_36*c_8*p1.z*c_12-504*c_82*p1.z*c_12+18*c_75*p3.y*p1.z*c_12-108*c_36*c_7*p3.y*p1.z*c_12+270*c_77*p3.y*p1.z*c_12+180*
        c_8*c_9*p1.z*c_12+36*c_36*c_10*p1.z*c_12+108*c_7*c_10*p1.z*c_12+54*p2.y*c_78*p1.z*c_12+c_506+72*c_36*p2.y*c_6*c_12+160*
        c_8*c_6*c_12-24*c_36*p3.y*c_6*c_12-144*c_7*p3.y*c_6*c_12-72*p2.y*c_9*c_6*c_12+c_507+c_508+48*c_75*p2.y*c_13+60*c_75*p3.y*
        c_13-420*c_77*p3.y*c_13-240*c_8*c_9*c_13-120*c_7*c_10*c_13-48*p2.y*c_78*c_13-12*c_79*c_13+96*c_36*p2.y*c_11*c_13+320*c_8*c_11*
        c_13-24*c_36*p3.y*c_11*c_13-240*c_7*p3.y*c_11*c_13-96*p2.y*c_9*c_11*c_13+c_509+c_510+120*c_36*p2.y*p1.z*c_81+560*c_8*p1.z*
        c_81-24*c_36*p3.y*p1.z*c_81-360*c_7*p3.y*p1.z*c_81-120*p2.y*c_9*p1.z*c_81+c_511+c_512-192*c_36*p2.y*c_92-48*c_36*p3.y*
        c_92+672*c_7*p3.y*c_92+192*p2.y*c_9*c_92+32*c_10*c_92+c_513+c_514-96*p3.y*c_186+30*c_282*p2.y*p3.z+10*c_75*c_8*p3.z+6*c_36*
        c_82*p3.z-30*c_128*p3.z+30*c_75*c_7*p3.y*p3.z+12*c_36*c_77*p3.y*p3.z-30*c_129*p3.y*p3.z+30*c_75*p2.y*c_9*p3.z+12*c_36*
        c_8*c_9*p3.z-30*c_82*c_9*p3.z-70*c_75*c_10*p3.z-30*c_77*c_10*p3.z-30*c_36*p2.y*c_78*p3.z-30*c_8*c_78*p3.z-84*c_36*c_79*
        p3.z-30*c_7*c_79*p3.z-30*p2.y*c_130*p3.z+c_515-72*c_75*p2.y*c_11*p3.z-36*c_36*c_8*c_11*p3.z+90*c_75*p3.y*c_11*p3.z-54*c_36*
        c_7*p3.y*c_11*p3.z+18*c_77*p3.y*c_11*p3.z+36*c_8*c_9*c_11*p3.z+180*c_36*c_10*c_11*p3.z+54*c_7*c_10*c_11*p3.z+72*p2.y*
        c_78*c_11*p3.z+90*c_79*c_11*p3.z+48*c_36*p2.y*c_80*p3.z-72*c_36*p3.y*c_80*p3.z-24*c_7*p3.y*c_80*p3.z-48*p2.y*c_9*c_80*
        p3.z-72*c_10*c_80*p3.z+48*p3.y*c_132*p3.z-144*c_75*p2.y*p1.z*p2.z*p3.z-144*c_36*c_8*p1.z*p2.z*p3.z+90*c_75*p3.y*p1.z*
        p2.z*p3.z-162*c_36*c_7*p3.y*p1.z*p2.z*p3.z+90*c_77*p3.y*p1.z*p2.z*p3.z+144*c_8*c_9*p1.z*p2.z*p3.z+180*c_36*c_10*
        p1.z*p2.z*p3.z+162*c_7*c_10*p1.z*p2.z*p3.z+144*p2.y*c_78*p1.z*p2.z*p3.z+c_516+96*c_36*p2.y*c_6*p2.z*p3.z-72*c_36*p3.y*
        c_6*p2.z*p3.z-72*c_7*p3.y*c_6*p2.z*p3.z-96*p2.y*c_9*c_6*p2.z*p3.z+c_517+c_518+72*c_75*p2.y*c_12*p3.z+504*c_82*c_12*
        p3.z+180*c_75*p3.y*c_12*p3.z+180*c_77*p3.y*c_12*p3.z-72*c_7*c_10*c_12*p3.z-72*p2.y*c_78*c_12*p3.z-36*c_79*c_12*p3.z+144*
        c_36*p2.y*c_11*c_12*p3.z-72*c_36*p3.y*c_11*c_12*p3.z+c_519-144*p2.y*c_9*c_11*c_12*p3.z+c_520+c_521+192*c_36*p2.y*p1.z*c_13*
        p3.z-72*c_36*p3.y*p1.z*c_13*p3.z-240*c_7*p3.y*p1.z*c_13*p3.z-192*p2.y*c_9*p1.z*c_13*p3.z+c_522+c_523-240*c_36*p2.y*
        c_81*p3.z-560*c_8*c_81*p3.z-96*c_36*p3.y*c_81*p3.z+240*c_7*p3.y*c_81*p3.z+240*p2.y*c_9*c_81*p3.z+80*c_10*c_81*
        p3.z+c_524+c_525-96*p3.y*c_133*p3.z-180*c_75*p2.y*p1.z*c_15-54*c_36*c_8*p1.z*c_15+270*c_75*p3.y*p1.z*c_15-108*c_36*c_7*p3.y*p1.z*
        c_15+18*c_77*p3.y*p1.z*c_15+54*c_8*c_9*p1.z*c_15+540*c_36*c_10*p1.z*c_15+108*c_7*c_10*p1.z*c_15+180*p2.y*c_78*p1.z*c_15+270*
        c_79*p1.z*c_15+72*c_36*p2.y*c_6*c_15-144*c_36*p3.y*c_6*c_15-24*c_7*p3.y*c_6*c_15-72*p2.y*c_9*c_6*c_15-144*c_10*c_6*
        c_15+48*p3.y*c_76*c_15+144*c_82*p2.z*c_15+180*c_75*p3.y*p2.z*c_15+180*c_77*p3.y*p2.z*c_15+144*c_8*c_9*p2.z*c_15+72*c_7*c_10*
        p2.z*c_15-36*c_79*p2.z*c_15+144*c_36*p2.y*c_11*p2.z*c_15-144*c_36*p3.y*c_11*p2.z*c_15-72*c_7*p3.y*c_11*p2.z*
        c_15+c_526+c_527+c_528+216*c_36*p2.y*p1.z*c_12*c_15-144*c_36*p3.y*p1.z*c_12*c_15-144*c_7*p3.y*p1.z*c_12*c_15-216*p2.y*c_9*p1.z*c_12*
        c_15+c_529+c_530-192*c_36*p2.y*c_13*c_15-320*c_8*c_13*c_15-96*c_36*p3.y*c_13*c_15+192*p2.y*c_9*c_13*c_15+128*c_10*c_13*
        c_15+c_531+c_532-96*p3.y*c_92*c_15-120*c_75*p2.y*c_16+24*c_82*c_16-420*c_75*p3.y*c_16+60*c_77*p3.y*c_16+96*c_8*c_9*c_16+120*c_7*c_10*
        c_16+120*p2.y*c_78*c_16+c_533+96*c_36*p2.y*c_11*c_16-240*c_36*p3.y*c_11*c_16-24*c_7*p3.y*c_11*c_16-96*p2.y*c_9*c_11*
        c_16-240*c_10*c_11*c_16+48*p3.y*c_80*c_16+192*c_36*p2.y*p1.z*p2.z*c_16-240*c_36*p3.y*p1.z*p2.z*c_16-72*c_7*p3.y*p1.z*p2.z*
        c_16-192*p2.y*c_9*p1.z*p2.z*c_16+c_534+c_535-96*c_36*p2.y*c_12*c_16-160*c_8*c_12*c_16-96*c_7*p3.y*c_12*c_16+96*p2.y*c_9*
        c_12*c_16+160*c_10*c_12*c_16+c_536+c_537-96*p3.y*c_81*c_16+120*c_36*p2.y*p1.z*c_83-360*c_36*p3.y*p1.z*c_83-24*c_7*p3.y*p1.z*
        c_83-120*p2.y*c_9*p1.z*c_83-360*c_10*p1.z*c_83+48*p3.y*c_6*c_83-64*c_8*p2.z*c_83+240*c_36*p3.y*p2.z*c_83-96*c_7*p3.y*
        p2.z*c_83+160*c_10*p2.z*c_83+c_538+c_539-96*p3.y*c_13*c_83+48*c_36*p2.y*c_84-16*c_8*c_84+672*c_36*p3.y*c_84-48*c_7*p3.y*
        c_84-48*p2.y*c_9*c_84+c_540+48*p3.y*c_11*c_84+c_541-96*p3.y*c_12*c_84+48*p3.y*p1.z*c_134-96*p3.y*p2.z*c_134+c_542+15*c_269*
        c_22+15*c_270*(c_543+c_23)+3*c_102*(-28*c_6-c_36*p2.z+c_544+c_545+c_238-5*c_9*c_28+c_36*p3.z-90*c_11*p3.z+c_546+c_547-30*p1.z*
        c_15-6*p2.z*c_15+c_294+c_548+5*c_7*c_22)+3*c_101*(5*c_7*p3.y*c_33+5*c_8*c_22+c_36*(c_550+c_551)+p3.y*c_28*(c_154+6*
        (c_418+c_12+c_127+c_157+5*p1.z*c_35))-p2.y*(c_560+2*(c_137+c_552+30*c_11*p3.z+c_141+c_71+c_563-12*p1.z*(c_12-2*p2.z*p3.z+c_172))))+c_14*
        (-15*c_78*p1.z+180*c_9*c_6-112*c_76+72*c_9*c_11*p2.z-160*c_80*p2.z+18*c_9*p1.z*c_12-160*c_6*c_12-128*c_11*c_13-80*p1.z*
        c_81-32*c_92-15*c_8*p3.y*c_28-3*c_75*c_18+15*c_78*p3.z+c_553+360*c_80*p3.z+c_475+240*c_6*p2.z*p3.z+c_476+144*c_11*c_12*
        p3.z+72*p1.z*c_13*p3.z+24*c_81*p3.z-108*c_9*p1.z*c_15+240*c_6*c_15-54*c_9*p2.z*c_15+144*c_11*p2.z*c_15+72*p1.z*c_12*c_15+c_554-108*
        c_9*c_16+144*c_11*c_16+72*p1.z*p2.z*c_16+c_555+72*p1.z*c_83+24*p2.z*c_83+24*c_84+15*c_77*c_22+3*c_36*(-3*c_9*
        c_96+c_585+p2.y*p3.y*c_556+c_557)+3*p2.y*p3.y*c_28*c_559-3*c_7*(c_560+2*(c_137+c_561+c_562+c_139+c_563+6*c_11*c_605+p1.z*(-12*c_12+27*
        p2.z*p3.z+9*c_15))))+3*c_5*(5*c_77*p3.y*c_33+5*c_82*c_22+c_75*(-(p3.y*c_564)+c_551)-c_8*(32*c_6-80*c_13+c_560+60*c_12*
        p3.z+24*p2.z*c_15+c_119+12*p1.z*p3.z*c_565+6*c_11*(c_85+c_72))+c_7*p3.y*c_28*c_567+c_36*(-2*c_10*c_568+c_8*c_569+3*c_7*p3.y*
        c_236+6*p3.y*c_571-6*p2.y*(c_264-4*c_13+c_9*c_18+c_603+c_572+c_333-3*p1.z*c_419))-p3.y*c_28*(c_189-6*c_9*c_574+8*c_579)+p2.y*
        (-5*c_78*c_28+18*c_9*c_28*c_305+8*(c_181-8*c_92+5*c_80*p3.z+c_580+4*c_13*c_15+c_581+c_582+c_84+c_6*(-4*c_12+c_193+c_349)+c_11*
        (-8*c_13+c_141+c_71+c_563)+2*p1.z*(-5*c_81+c_209+c_176+c_583+c_83))))-3*p1.y*(5*c_130*p1.z-18*c_78*c_6+40*c_9*c_76-32*c_185-12*
        c_78*c_11*p2.z+32*c_9*c_80*p2.z-32*c_132*p2.z-6*c_78*p1.z*c_12+24*c_9*c_6*c_12-32*c_76*c_12+16*c_9*c_11*c_13-32*c_80*c_13+8*
        c_9*p1.z*c_81-32*c_6*c_81-32*c_11*c_92-32*p1.z*c_133-32*c_186+5*c_82*p3.y*c_28+5*c_282*c_18-5*c_130*p3.z-42*c_78*c_11*
        p3.z+56*c_9*c_80*p3.z+16*c_132*p3.z-18*c_78*p1.z*p2.z*p3.z+40*c_9*c_6*p2.z*p3.z+16*c_76*p2.z*p3.z+6*c_78*c_12*p3.z+24*c_9*
        c_11*c_12*p3.z+16*c_80*c_12*p3.z+8*c_9*p1.z*c_13*p3.z+16*c_6*c_13*p3.z-8*c_9*c_81*p3.z+16*c_11*c_81*p3.z+16*p1.z*c_92*
        p3.z+16*c_133*p3.z-30*c_78*p1.z*c_15+48*c_9*c_6*c_15+16*c_76*c_15+30*c_78*p2.z*c_15+24*c_9*c_11*p2.z*c_15+16*c_80*p2.z*
        c_15+16*c_6*c_12*c_15-24*c_9*c_13*c_15+16*c_11*c_13*c_15+16*p1.z*c_81*c_15+16*c_92*c_15+90*c_78*c_16+16*c_9*c_11*c_16+16*c_80*
        c_16-16*c_9*p1.z*p2.z*c_16+16*c_6*p2.z*c_16-48*c_9*c_12*c_16+16*c_11*c_12*c_16+16*p1.z*c_13*c_16+16*c_81*c_16-40*c_9*p1.z*c_83+16*
        c_6*c_83-80*c_9*p2.z*c_83+16*c_11*p2.z*c_83+16*p1.z*c_12*c_83+16*c_13*c_83-120*c_9*c_84+16*c_11*c_84+16*p1.z*p2.z*c_84+16*
        c_12*c_84+16*p1.z*c_134+16*p2.z*c_134+16*c_187-5*c_129*c_22+c_77*(c_137-140*c_13+c_560+90*c_12*p3.z+c_584+c_119+6*c_11*
        (c_198+p3.z)+6*p1.z*(c_97+c_136+c_15))-c_75*(-5*c_9*c_267+c_585+p2.y*p3.y*(c_67+c_386+c_164)+6*c_18*(c_11+c_203+c_140+5*p1.z*
        p3.z+c_586+c_206))-c_8*p3.y*c_28*(c_154+6*(c_178+c_97+c_193+c_157+c_587))+p2.y*p3.y*c_28*c_597+c_7*(5*c_78*c_28-18*c_9*c_28*
        c_336-8*(c_181-28*c_92+15*c_81*p3.z+10*c_13*c_15+6*c_12*c_16+c_598+c_84+c_80*c_565+c_6*(4*c_12+c_123+c_15)+c_11*p3.z*c_253+p1.z*
        (-10*c_81+c_257+c_191+c_258+c_83)))+c_36*(5*c_78*c_121+c_8*p3.y*(c_261+c_85+c_89)-c_77*c_599-18*c_9*c_602+2*p2.y*(c_10*c_564+3*
        p3.y*(c_6-3*p1.z*c_12+c_552+c_603-9*c_12*p3.z+6*p1.z*c_15+c_365))+8*c_18*(c_80+c_196+12*c_13*p3.z+c_265+c_604+c_364+c_6*
        c_605+3*c_11*c_469+p1.z*(c_238+c_141+c_606+c_365))-3*c_7*(c_607-2*(c_264+c_359+c_608+2*(-5*c_13+c_572+c_16)))))))/double(24192);
}

double trig::c61() const{
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
    double c_0=p12_2;
    double c_1=p22_2;
    double c_2=p32_2;
    double c_3=-p3.z;
    double c_4=p2.z+c_3;
    double c_5=3*c_2;
    double c_6=6*p2.z;
    double c_7=-c_2;
    double c_8=c_6+p3.z;
    double c_9=-(3*c_1);
    double c_10=-(p2.z*p3.z);
    double c_11=-c_1;
    double c_12=p1.z+c_3;
    double c_13=6*p1.z;
    double c_14=2*p3.z;
    double c_15=5*c_0;
    double c_16=5*p1.z*p2.z;
    double c_17=2*p2.z*p3.z;
    double c_18=p11_2;
    double c_19=p21_2;
    double c_20=p21_3;
    double c_21=p31_2;
    double c_22=p31_3;
    double c_23=p12_3;
    double c_24=p11_3;
    double c_25=p22_3;
    double c_26=p22_4;
    double c_27=p32_3;
    double c_28=p32_4;
    double c_29=-p2.z;
    double c_30=p1.z+c_29;
    double c_31=5*p1.z;
    double c_32=p1.z*p3.z;
    double c_33=3*p2.z*p3.z;
    double c_34=p2.z+p3.z;
    double c_35=-(2*p2.z*p3.z);
    double c_36=-(5*p1.z*c_34);
    double c_37=5*c_20*c_0;
    double c_38=p12_4;
    double c_39=5*c_1;
    double c_40=p30_2;
    double c_41=4*p1.z*p2.z;
    double c_42=p2.z*p3.z;
    double c_43=-(2*c_2);
    double c_44=2*p1.z*p3.z;
    double c_45=8*p1.z*p3.z;
    double c_46=4*c_2;
    double c_47=2*p1.z;
    double c_48=4*p2.z;
    double c_49=3*p3.z;
    double c_50=12*p2.z*p3.z;
    double c_51=-(18*p3.y*c_38);
    double c_52=60*p2.y*c_21*p1.z*p2.z;
    double c_53=30*p2.y*c_21*c_1;
    double c_54=12*c_19*p3.y*p1.z*p3.z;
    double c_55=3*p1.z;
    double c_56=c_55+c_48+c_14;
    double c_57=-(4*c_1);
    double c_58=3*c_0;
    double c_59=8*p2.z*p3.z;
    double c_60=6*c_2;
    double c_61=14*c_1;
    double c_62=9*p1.z*p3.z;
    double c_63=3*p1.z*p3.z;
    double c_64=2*c_0;
    double c_65=6*p1.z*p2.z;
    double c_66=10*c_1;
    double c_67=4*c_0;
    double c_68=2*p2.z;
    double c_69=p20_2;
    double c_70=3*p2.z;
    double c_71=p3.y*c_30;
    double c_72=p1.y*c_4;
    double c_73=-p1.z;
    double c_74=c_73+p3.z;
    double c_75=p2.y*c_74;
    double c_76=c_71+c_72+c_75;
    double c_77=p20_3;
    double c_78=4*p1.z;
    double c_79=14*c_0;
    double c_80=-(10*c_1);
    double c_81=-(14*c_1);
    double c_82=-(3*c_2);
    double c_83=12*p2.y*c_21*c_0;
    double c_84=-(12*p2.y*c_21*p1.z*p2.z);
    double c_85=9*c_22*p1.z*p3.z;
    double c_86=-(9*c_22*p2.z*p3.z);
    double c_87=9*p2.y*c_21*c_2;
    double c_88=-(18*p3.y*p1.z*c_27);
    double c_89=18*p3.y*p2.z*c_27;
    double c_90=-(18*p2.y*c_28);
    double c_91=7*c_0;
    double c_92=18*p1.z*p3.z;
    double c_93=-(8*p1.z*p2.z);
    double c_94=4*p1.z*p3.z;
    double c_95=10*c_0;
    double c_96=2*c_2;
    double c_97=8*p1.z*p2.z;
    double c_98=5*p1.z*p3.z;
    double c_99=c_15+c_11+c_98+c_17+c_2;
    double c_100=p2.y*c_99;
    double c_101=-(6*c_1);
    double c_102=-(4*c_2);
    double c_103=c_68+p3.z;
    double c_104=12*c_19*p3.y*c_0;
    double c_105=27*c_22*p1.z*p2.z;
    double c_106=-(108*p3.y*c_0*c_1);
    double c_107=10*c_22*c_2;
    double c_108=-(162*p3.y*p1.z*p2.z*c_2);
    double c_109=90*p3.y*c_28;
    double c_110=c_15+c_16+c_1+c_17+c_7;
    double c_111=30*c_0;
    double c_112=-(5*p2.z*p3.z);
    double c_113=p2.z+c_14;
    double c_114=9*p1.z*p2.z;
    double c_115=3*c_1;
    double c_116=-(10*c_2);
    double c_117=-(9*p2.z*p3.z);
    double c_118=2*c_1;
    double c_119=-(9*c_2);
    double c_120=20*c_0;
    double c_121=-(7*p2.z*p3.z);
    double c_122=-(6*c_2);
    double c_123=15*p2.z*p3.z;
    double c_124=p12_6;
    double c_125=p11_4;
    double c_126=p21_4;
    double c_127=p31_4;
    double c_128=p12_5;
    double c_129=p11_5;
    double c_130=p21_5;
    double c_131=p31_5;
    double c_132=p22_5;
    double c_133=p22_6;
    double c_134=p32_5;
    double c_135=p32_6;
    double c_136=5*p2.z*p3.z;
    double c_137=-(5*c_2);
    double c_138=p20_4;
    double c_139=5*p2.z;
    double c_140=-(5*c_1);
    double c_141=-(4*p2.z*p3.z);
    double c_142=4*p3.z;
    double c_143=2*c_34;
    double c_144=c_31+c_143;
    double c_145=30*c_19*p3.y*c_1;
    double c_146=12*p2.y*c_21*c_1;
    double c_147=-(6*c_19*p3.y*p2.z*p3.z);
    double c_148=-(36*p3.y*c_25*p3.z);
    double c_149=-(6*c_20*c_2);
    double c_150=-(6*c_19*p3.y*c_2);
    double c_151=18*p2.y*c_0*c_2;
    double c_152=36*p2.y*c_1*c_2;
    double c_153=c_73+p2.z;
    double c_154=p3.y*c_153;
    double c_155=p2.y*c_12;
    double c_156=p1.z+p2.z+p3.z;
    double c_157=p2.z+c_49;
    double c_158=6*c_1*c_2;
    double c_159=c_78+c_48+p3.z;
    double c_160=-(2*c_1);
    double c_161=2*p1.z*p2.z;
    double c_162=4*p2.z*p3.z;
    double c_163=5*c_2;
    double c_164=6*p2.z*p3.z;
    double c_165=c_70+p3.z;
    double c_166=3*c_1*p3.z;
    double c_167=6*p2.z*c_2;
    double c_168=c_78+p2.z+c_142;
    double c_169=3*p1.z*p2.z;
    double c_170=p1.z*p2.z;
    double c_171=4*p2.z*c_27;
    double c_172=3*p2.z*c_2;
    double c_173=2*c_27;
    double c_174=p30_4;
    double c_175=20*c_20*c_23*p2.z;
    double c_176=-(24*p2.y*c_21*c_23*p3.z);
    double c_177=15*p2.y*c_127*c_2;
    double c_178=5*p3.z;
    double c_179=20*c_23*p2.z;
    double c_180=10*c_26;
    double c_181=-(6*c_28);
    double c_182=c_78+c_70+c_14;
    double c_183=c_78+c_68+c_49;
    double c_184=c_64+c_161+c_63+c_162+c_2;
    double c_185=-(p1.z*p3.z);
    double c_186=-(p1.z*p2.z);
    double c_187=c_55+c_68+c_142;
    double c_188=9*p2.z*p3.z;
    double c_189=12*c_1*p3.z;
    double c_190=c_47+c_139+c_14;
    double c_191=6*p3.z;
    double c_192=c_47+c_48+c_49;
    double c_193=3*c_28;
    double c_194=c_68+c_49;
    double c_195=12*p2.z*c_2;
    double c_196=4*c_34;
    double c_197=p1.z+c_196;
    double c_198=6*c_1;
    double c_199=5*c_25;
    double c_200=9*p2.z*c_2;
    double c_201=18*c_22*c_0*c_1;
    double c_202=120*p2.y*c_0*c_26;
    double c_203=-(48*p3.y*p1.z*c_26*p3.z);
    double c_204=-(18*c_20*c_0*c_2);
    double c_205=-(18*c_19*p3.y*c_0*c_2);
    double c_206=72*p2.y*c_0*c_1*c_2;
    double c_207=-(72*p3.y*c_0*c_1*c_2);
    double c_208=-(120*p2.y*c_26*c_2);
    double c_209=48*p2.y*p1.z*p2.z*c_28;
    double c_210=6*p1.z*p3.z;
    double c_211=-(5*p1.z*p2.z);
    double c_212=10*c_23;
    double c_213=4*c_27;
    double c_214=c_115+c_162+c_5;
    double c_215=c_0+c_186+c_57+c_44+c_96;
    double c_216=-(20*c_1);
    double c_217=9*c_0;
    double c_218=6*c_1*p3.z;
    double c_219=c_25*p3.z;
    double c_220=20*c_38;
    double c_221=c_0+c_161+c_118+c_185+c_102;
    double c_222=9*c_2;
    double c_223=-5*c_26;
    double c_224=p2.z*c_27;
    double c_225=c_64+c_169+c_115+c_44+c_116;
    double c_226=c_64+c_161+c_80+c_63+c_5;
    double c_227=8*c_0;
    double c_228=-(30*c_1);
    double c_229=5*p1.z*c_165;
    double c_230=5*p1.z*c_157;
    double c_231=6*c_25*p3.z;
    double c_232=7*p2.z;
    double c_233=9*c_1*p3.z;
    double c_234=12*p2.z*c_27;
    double c_235=c_118+c_17+c_2;
    double c_236=-10*c_25;
    double c_237=5*c_27;
    double c_238=3*c_0*c_34;
    double c_239=c_198+c_188+c_60;
    double c_240=p1.z*c_239;
    double c_241=c_199+c_233+c_200+c_237;
    double c_242=2*c_241;
    double c_243=c_23+c_238+c_240+c_242;
    double c_244=4*c_25;
    double c_245=8*c_25*p3.z;
    double c_246=5*c_28;
    double c_247=7*p1.z*p2.z;
    double c_248=-(20*c_2);
    double c_249=-(12*c_1);
    double c_250=7*p1.z*p3.z;
    double c_251=-(6*p2.z*p3.z);
    double c_252=-(9*c_1);
    double c_253=-(8*p2.z*p3.z);
    double c_254=10*c_2;
    double c_255=10*p2.z*p3.z;
    double c_256=5*p1.z*c_34;
    double c_257=c_0+c_161+c_11+c_98+c_163;
    double c_258=c_23*c_194;
    double c_259=c_1+c_17+c_96;
    double c_260=10*c_27;
    double c_261=24*c_19*p3.y*c_23*p2.z;
    double c_262=-(15*c_126*p3.y*c_1);
    double c_263=18*p2.y*c_21*c_0*c_1;
    double c_264=-(20*c_22*c_23*p3.z);
    double c_265=20*c_22*c_25*p3.z;
    double c_266=-(20*c_20*p2.z*c_27);
    double c_267=-(120*p3.y*c_0*c_28);
    double c_268=120*p3.y*c_1*c_28;
    double c_269=c_139+p3.z;
    double c_270=7*p3.z;
    double c_271=-(18*p2.z*p3.z);
    double c_272=-(14*c_2);
    double c_273=14*c_2;
    double c_274=p2.z+c_191;
    double c_275=3*p1.z*c_274;
    double c_276=c_64+c_169+c_1+c_44+c_162;
    double c_277=5*c_38;
    double c_278=-(12*p2.z*c_27);
    double c_279=-3*p2.z;
    double c_280=c_279+p3.z;
    double c_281=-(10*c_27);
    double c_282=p2.z+c_178;
    double c_283=20*c_23;
    double c_284=8*c_25;
    double c_285=8*c_27;
    double c_286=24*c_0*c_34;
    double c_287=6*p1.z*c_214;
    double c_288=3*c_25*p3.z;
    double c_289=10*p2.z*c_27;
    double c_290=-(5*c_28);
    double c_291=-(5*c_27);
    double c_292=4*c_23;
    double c_293=3*c_26;
    double c_294=30*c_1*c_2;
    double c_295=-(35*c_28);
    double c_296=c_70+c_14;
    double c_297=p2.z+c_142;
    double c_298=-(3*p3.z);
    double c_299=p2.z+c_298;
    double c_300=3*c_25;
    double c_301=2*c_25*p3.z;
    double c_302=3*c_1*c_2;
    double c_303=5*p2.z*c_28;
    double c_304=c_47+c_70+c_142;
    double c_305=10*c_25;
    double c_306=9*p2.z;
    double c_307=c_306+c_191;
    double c_308=c_0*c_307;
    double c_309=6*p1.z*c_235;
    double c_310=c_292+c_305+c_189+c_200+c_213+c_308+c_309;
    double c_311=2*c_310;
    double c_312=p1.z+p2.z+c_270;
    double c_313=12*p1.z*p3.z;
    double c_314=20*p1.z*p3.z;
    double c_315=4*c_1;
    double c_316=20*p2.z*p3.z;
    double c_317=c_47+c_68+c_178;
    double c_318=4*c_1*p3.z;
    double c_319=10*p2.z*c_2;
    double c_320=5*c_1*p3.z;
    double c_321=c_23*c_297;
    double c_322=c_1+c_162+c_254;
    double c_323=c_0*c_322;
    double c_324=5*p2.z*c_2;
    double c_325=c_25+c_166+c_324+c_237;
    double c_326=20*c_27;
    double c_327=c_25+c_318+c_319+c_326;
    double c_328=p1.z*c_327;
    double c_329=p20_5;
    double c_330=-(7*c_1);
    double c_331=c_29+p3.z;
    double c_332=p1.y*c_331;
    double c_333=c_154+c_155+c_332;
    double c_334=4*c_21*p3.z;
    double c_335=-(24*p1.z*p2.z*p3.z);
    double c_336=-(8*c_27);
    double c_337=8*p2.z;
    double c_338=-(6*c_22*p1.z*p2.z);
    double c_339=-(70*c_20*c_1);
    double c_340=180*p2.y*c_0*c_1;
    double c_341=144*p3.y*c_0*c_1;
    double c_342=-(630*p2.y*c_26);
    double c_343=-(30*c_20*p1.z*p3.z);
    double c_344=18*p2.y*c_23*p3.z;
    double c_345=72*p2.y*c_0*p2.z*p3.z;
    double c_346=180*p2.y*p1.z*c_1*p3.z;
    double c_347=72*p2.y*p1.z*p2.z*c_2;
    double c_348=36*p3.y*p1.z*p2.z*c_2;
    double c_349=180*p2.y*c_1*c_2;
    double c_350=18*p2.y*p1.z*c_27;
    double c_351=18*p2.y*c_28;
    double c_352=c_154+c_155;
    double c_353=9*p3.z;
    double c_354=-30*c_38;
    double c_355=60*c_25*p3.z;
    double c_356=-(15*c_40*c_2);
    double c_357=6*c_28;
    double c_358=-(2*p1.z*p3.z);
    double c_359=c_0+c_140+c_358+c_112+c_7;
    double c_360=-(6*p1.z*p2.z);
    double c_361=15*p3.z;
    double c_362=-3*c_130*c_0;
    double c_363=6*p2.y*c_127*c_0;
    double c_364=10*c_20*c_38;
    double c_365=8*p2.y*c_124;
    double c_366=-(12*c_22*c_23*p2.z);
    double c_367=63*c_130*c_1;
    double c_368=60*c_20*c_0*c_1;
    double c_369=-(24*p2.y*c_38*c_1);
    double c_370=12*c_22*p1.z*c_25;
    double c_371=70*c_20*c_26;
    double c_372=-(280*p2.y*c_133);
    double c_373=15*c_130*p1.z*p3.z;
    double c_374=15*c_126*p3.y*p1.z*p3.z;
    double c_375=15*c_131*p1.z*p3.z;
    double c_376=-(18*c_20*c_23*p3.z);
    double c_377=24*p2.y*c_128*p3.z;
    double c_378=120*p3.y*c_128*p3.z;
    double c_379=45*c_126*p3.y*p2.z*p3.z;
    double c_380=-(15*c_131*p2.z*p3.z);
    double c_381=-(72*c_20*c_0*p2.z*p3.z);
    double c_382=48*p2.y*c_38*p2.z*p3.z;
    double c_383=-(180*c_20*p1.z*c_1*p3.z);
    double c_384=72*p2.y*c_23*c_1*p3.z;
    double c_385=60*c_19*p3.y*c_25*p3.z;
    double c_386=96*p2.y*c_0*c_25*p3.z;
    double c_387=120*p2.y*p1.z*c_26*p3.z;
    double c_388=-(120*p3.y*c_132*p3.z);
    double c_389=-(36*c_19*p3.y*c_0*c_2);
    double c_390=-(54*p2.y*c_21*c_0*c_2);
    double c_391=24*p2.y*c_38*c_2;
    double c_392=-(72*c_20*p1.z*p2.z*c_2);
    double c_393=-(72*c_19*p3.y*p1.z*p2.z*c_2);
    double c_394=48*p2.y*c_23*p2.z*c_2;
    double c_395=48*p3.y*c_23*p2.z*c_2;
    double c_396=96*p2.y*p1.z*c_25*c_2;
    double c_397=-(48*p3.y*p1.z*c_25*c_2);
    double c_398=-(18*c_20*p1.z*c_27);
    double c_399=-(60*c_22*p1.z*c_27);
    double c_400=24*p2.y*c_23*c_27;
    double c_401=60*c_22*p2.z*c_27;
    double c_402=48*p2.y*c_0*p2.z*c_27;
    double c_403=72*p2.y*p1.z*c_1*c_27;
    double c_404=-(60*p2.y*c_21*c_28);
    double c_405=24*p2.y*c_0*c_28;
    double c_406=24*p2.y*p1.z*c_134;
    double c_407=24*p3.y*p1.z*c_134;
    double c_408=-(24*p3.y*p2.z*c_134);
    double c_409=24*p2.y*c_135;
    double c_410=c_71+c_75;
    double c_411=-30*c_0;
    double c_412=60*c_0*c_1;
    double c_413=-(18*c_1*c_2);
    double c_414=-10*c_0;
    double c_415=c_414+c_115+c_44+c_33+c_96;
    double c_416=-(3*p2.z*p3.z);
    double c_417=c_48+p3.z;
    double c_418=-(c_21*c_317);
    double c_419=c_6+c_353;
    double c_420=c_0*c_419;
    double c_421=6*p1.z*c_259;
    double c_422=c_292+c_244+c_233+c_195+c_260+c_418+c_420+c_421;
    double c_423=-3*c_1;
    double c_424=c_244+c_233+c_195+c_260;
    double c_425=-(15*c_127*c_2);
    double c_426=54*c_21*c_1*c_2;
    double c_427=-(72*c_0*c_1*c_2);
    double c_428=60*c_21*c_28;
    double c_429=-(48*p1.z*p2.z*c_28);
    double c_430=-(24*c_135);
    double c_431=-(5*c_26);
    double c_432=-(4*p3.z);
    double c_433=-(6*c_1*c_2);
    double c_434=c_198+c_33+c_2;
    double c_435=c_55+p2.z+c_178;
    double c_436=-(8*c_2);
    double c_437=-(2*p1.z*p2.z);
    double c_438=4*c_26;
    double c_439=8*c_28;
    double c_440=2*c_25;
    double c_441=c_67+c_160+c_32+c_35+c_7;
    double c_442=3*c_27;
    double c_443=-(6*c_126*p3.y*c_0);
    double c_444=3*c_131*c_0;
    double c_445=-(10*c_22*c_38);
    double c_446=-(8*p3.y*c_124);
    double c_447=-(15*c_130*p1.z*p2.z);
    double c_448=-(15*p2.y*c_127*p1.z*p2.z);
    double c_449=-(15*c_131*p1.z*p2.z);
    double c_450=18*c_22*c_23*p2.z;
    double c_451=-(120*p2.y*c_128*p2.z);
    double c_452=-(24*p3.y*c_128*p2.z);
    double c_453=54*c_19*p3.y*c_0*c_1;
    double c_454=36*p2.y*c_21*c_0*c_1;
    double c_455=-(24*p3.y*c_38*c_1);
    double c_456=60*c_20*p1.z*c_25;
    double c_457=18*c_22*p1.z*c_25;
    double c_458=-(24*p3.y*c_23*c_25);
    double c_459=60*c_19*p3.y*c_26;
    double c_460=-(24*p3.y*c_0*c_26);
    double c_461=-(24*p2.y*p1.z*c_132);
    double c_462=-(24*p3.y*p1.z*c_132);
    double c_463=-(24*p3.y*c_133);
    double c_464=12*c_20*c_23*p3.z;
    double c_465=15*c_130*p2.z*p3.z;
    double c_466=-(45*p2.y*c_127*p2.z*p3.z);
    double c_467=72*c_22*c_0*p2.z*p3.z;
    double c_468=-(48*p3.y*c_38*p2.z*p3.z);
    double c_469=72*p2.y*c_21*p1.z*c_1*p3.z;
    double c_470=72*c_22*p1.z*c_1*p3.z;
    double c_471=-(48*p2.y*c_23*c_1*p3.z);
    double c_472=-(48*p3.y*c_23*c_1*p3.z);
    double c_473=-(60*c_20*c_25*p3.z);
    double c_474=-(48*p3.y*c_0*c_25*p3.z);
    double c_475=24*p2.y*c_132*p3.z;
    double c_476=-(63*c_131*c_2);
    double c_477=-(60*c_22*c_0*c_2);
    double c_478=24*p3.y*c_38*c_2;
    double c_479=180*c_22*p1.z*p2.z*c_2;
    double c_480=-(72*p3.y*c_23*p2.z*c_2);
    double c_481=-(72*p3.y*p1.z*c_25*c_2);
    double c_482=-(12*c_20*p1.z*c_27);
    double c_483=-(60*p2.y*c_21*p2.z*c_27);
    double c_484=-(96*p3.y*c_0*p2.z*c_27);
    double c_485=48*p2.y*p1.z*c_1*c_27;
    double c_486=-(96*p3.y*p1.z*c_1*c_27);
    double c_487=-(70*c_22*c_28);
    double c_488=-(120*p3.y*p1.z*p2.z*c_28);
    double c_489=120*p2.y*p2.z*c_134;
    double c_490=280*p3.y*c_135;
    double c_491=21*c_0;
    double c_492=-(7*c_2);
    double c_493=-20*c_0;
    double c_494=-(2*p3.z);
    double c_495=-(9*c_1*c_2);
    double c_496=9*c_25;
    double c_497=6*c_0;
    double c_498=7*c_2;
    double c_499=9*c_1;
    double c_500=27*p2.z*p3.z;
    double c_501=4*c_25*p3.z;
    double c_502=10*c_1*c_2;
    double c_503=8*p3.z;
    double c_504=-12*c_0;
    double c_505=-(6*p1.z*p3.z);
    double c_506=7*p2.z*p3.z;
    double c_507=15*p1.z*p2.z;
    double c_508=c_0+c_437+c_11+c_112+c_137;
    double c_509=2*p1.z*c_113;
    double c_510=p2.z+c_503;
    double c_511=p2.z+c_494;
    double c_512=c_1+c_33+c_60;
    double c_513=-(30*c_2);
    double c_514=12*c_0;
    double c_515=c_67+c_170+c_11+c_35+c_43;
    double c_516=-6*c_0;
    double c_517=-60*c_38;
    double c_518=c_1+c_33+c_43;
    double c_519=3*c_133;
    double c_520=-(2*c_27);
    double c_521=9*c_1*c_2;
    double c_522=c_1*c_2;
    double c_523=c_1+c_42+c_137;
    double c_524=2*c_523;
    double c_525=c_58+c_169+c_524;
    double c_526=6*c_0*c_157;
    double c_527=3*p1.z*c_512;
    double c_528=c_212+c_25+c_166+c_167+c_260+c_526+c_527;
    double c_529=c_64+c_161+c_1+c_10+c_102;
    double c_530=10*c_25*p3.z;
    double c_531=7*p2.z*c_27;
    double c_532=4*c_28;
    double c_533=c_139+c_14;
    double c_534=c_244+c_218+c_167+c_213;
    return (5*p10_6*(-5*p1.y*c_4*(7*p1.z+p2.z+p3.z)+p3.y*(-14*c_0-18*p1.z*p2.z+c_9+c_32+c_416+c_2)+p2.y*(c_79+c_186+c_11+c_92+c_33+c_5))-15*
        c_329*p3.x*(-(p1.y*c_4*(p1.z+c_6+c_14))-p3.y*(c_0+c_16+c_39+c_44+c_7)+p2.y*(c_0+c_330+c_59+c_5+p1.z*c_8))+5*
        p20_6*(5*p2.y*c_12*(p1.z+c_232+p3.z)+p1.y*(c_0+c_81+p1.z*c_299+c_271+c_82)+p3.y*(c_58+c_61+c_10+c_7+3*p1.z*c_8))+15*
        p10_5*(p2.x*(p3.y*c_30*(c_13+c_68+p3.z)+p1.y*(c_91+c_93+c_9+c_505+c_10+c_7)+c_100)+p3.x*(-(p2.y*c_12*(c_13+p2.z+c_14))-p3.y*
        c_110+p1.y*(-7*c_0+c_65+c_1+c_45+c_42+c_5)))+p10_4*(105*c_18*p2.y*c_0+30*p1.y*c_19*c_0+c_37-105*c_18*p3.y*c_0-30*p1.y*c_21*
        c_0-5*c_22*c_0-35*c_24*p1.z*p2.z+15*c_18*p2.y*p1.z*p2.z+15*p1.y*c_19*p1.z*p2.z+5*c_20*p1.z*p2.z-180*c_18*p3.y*p1.z*
        p2.z-60*p1.y*p2.y*p3.y*p1.z*p2.z-12*c_19*p3.y*p1.z*p2.z-60*p1.y*c_21*p1.z*p2.z+c_84-12*c_22*p1.z*p2.z+630*p1.y*
        c_23*p2.z+90*p2.y*c_23*p2.z+360*p3.y*c_23*p2.z-5*c_24*c_1+3*p1.y*c_19*c_1+2*c_20*c_1-30*c_18*p3.y*c_1-24*p1.y*p2.y*p3.y*
        c_1-9*c_19*p3.y*c_1-12*p1.y*c_21*c_1-6*p2.y*c_21*c_1-3*c_22*c_1+270*p1.y*c_0*c_1+90*p2.y*c_0*c_1+180*p3.y*c_0*c_1+90*p1.y*
        p1.z*c_25+54*p2.y*p1.z*c_25+72*p3.y*p1.z*c_25+18*p1.y*c_26+18*p2.y*c_26+18*p3.y*c_26+35*c_24*p1.z*p3.z+180*c_18*p2.y*
        p1.z*p3.z+60*p1.y*c_19*p1.z*p3.z+12*c_20*p1.z*p3.z-15*c_18*p3.y*p1.z*p3.z+60*p1.y*p2.y*p3.y*p1.z*p3.z+c_54-15*
        p1.y*c_21*p1.z*p3.z+12*p2.y*c_21*p1.z*p3.z-5*c_22*p1.z*p3.z-630*p1.y*c_23*p3.z-360*p2.y*c_23*p3.z-90*p3.y*c_23*
        p3.z+30*c_18*p2.y*p2.z*p3.z+24*p1.y*c_19*p2.z*p3.z+9*c_20*p2.z*p3.z-30*c_18*p3.y*p2.z*p3.z+3*c_19*p3.y*p2.z*p3.z-24*
        p1.y*c_21*p2.z*p3.z-3*p2.y*c_21*p2.z*p3.z+c_86-180*p2.y*c_0*p2.z*p3.z+180*p3.y*c_0*p2.z*p3.z-72*p2.y*p1.z*c_1*p3.z+72*
        p3.y*p1.z*c_1*p3.z-18*p2.y*c_25*p3.z+18*p3.y*c_25*p3.z+5*c_24*c_2+30*c_18*p2.y*c_2+12*p1.y*c_19*c_2+3*c_20*c_2+24*
        p1.y*p2.y*p3.y*c_2+6*c_19*p3.y*c_2-3*p1.y*c_21*c_2+c_87-2*c_22*c_2-270*p1.y*c_0*c_2-180*p2.y*c_0*c_2-90*p3.y*c_0*c_2-72*
        p2.y*p1.z*p2.z*c_2+72*p3.y*p1.z*p2.z*c_2-18*p2.y*c_1*c_2+18*p3.y*c_1*c_2-90*p1.y*p1.z*c_27-72*p2.y*p1.z*c_27-54*p3.y*
        p1.z*c_27-18*p2.y*p2.z*c_27+c_89-18*p1.y*c_28+c_90-18*p3.y*c_28+15*p2.x*p3.x*c_76*c_144-15*c_40*(p2.y*c_12*
        (c_31+p2.z+c_49)+p3.y*(c_15+c_41+c_1+c_32+c_33+c_43)+p1.y*(c_15+c_11+c_35+c_102+c_36))+15*c_69*(p3.y*c_30*(c_31+c_70+p3.z)+p2.y*
        (c_15+c_170+c_160+c_94+c_33+c_2)+p1.y*(c_15+c_57+c_35+c_7+c_36)))+c_138*(c_37+30*c_19*p3.y*c_0+c_83+3*c_22*c_0-18*p2.y*c_38+c_51+35*
        c_20*p1.z*p2.z+180*c_19*p3.y*p1.z*p2.z+c_52+12*c_22*p1.z*p2.z-90*p2.y*c_23*p2.z-72*p3.y*c_23*p2.z+105*c_19*p3.y*
        c_1+c_53+5*c_22*c_1-270*p2.y*c_0*c_1-180*p3.y*c_0*c_1-630*p2.y*p1.z*c_25-360*p3.y*p1.z*c_25+30*c_19*p3.y*p1.z*p3.z+24*
        p2.y*c_21*p1.z*p3.z+c_85-18*p3.y*c_23*p3.z-35*c_20*p2.z*p3.z+15*c_19*p3.y*p2.z*p3.z+15*p2.y*c_21*p2.z*p3.z+5*c_22*p2.z*
        p3.z-72*p3.y*c_0*p2.z*p3.z-180*p3.y*p1.z*c_1*p3.z+630*p2.y*c_25*p3.z+90*p3.y*c_25*p3.z-5*c_20*c_2+3*p2.y*c_21*c_2+2*
        c_22*c_2-18*p3.y*c_0*c_2-72*p3.y*p1.z*p2.z*c_2+270*p2.y*c_1*c_2+90*p3.y*c_1*c_2+c_88+90*p2.y*p2.z*c_27+54*p3.y*p2.z*
        c_27+c_351+18*p3.y*c_28-c_24*(c_64+c_16+c_39+c_62+c_50+c_5)-15*c_40*(-(p3.y*(c_0+c_41+c_39+c_63+c_42+c_43))+p2.y*
        (c_0+c_16+c_140+c_44+c_136+c_46))-3*c_18*(-(p3.y*c_12*c_56)+p2.y*(c_0+c_16+c_66+c_45+c_316+c_46))-3*p1.y*(6*c_38-5*c_40*p1.z*p2.z+18*
        c_23*p2.z-25*c_40*c_1+30*c_0*c_1+30*p1.z*c_25+5*c_40*p1.z*p3.z-6*c_23*p3.z+10*c_40*p2.z*p3.z-24*c_0*p2.z*p3.z-60*p1.z*
        c_1*p3.z-120*c_25*p3.z+15*c_40*c_2-6*c_0*c_2-24*p1.z*p2.z*c_2-60*c_1*c_2-6*p1.z*c_27-24*p2.z*c_27+c_181-4*p2.y*p3.y*c_12*
        c_190-c_21*c_12*c_192+5*c_19*(7*c_1+c_50+c_96+p1.z*c_113)))+c_77*p3.x*(-30*c_20*c_0+6*c_19*p3.y*c_0+15*p2.y*c_21*c_0+9*c_22*
        c_0+18*p2.y*c_38+c_51-180*c_20*p1.z*p2.z+30*c_19*p3.y*p1.z*p2.z+c_52+c_105+72*p2.y*c_23*p2.z-54*p3.y*c_23*
        p2.z+c_339+c_145+c_53+10*c_22*c_1+c_340+c_106+360*p2.y*p1.z*c_25-180*p3.y*p1.z*c_25+c_342-90*p3.y*c_26+c_343+c_54+45*p2.y*c_21*p1.z*
        p3.z+36*c_22*p1.z*p3.z+c_344-36*p3.y*c_23*p3.z-40*c_20*p2.z*p3.z+24*p2.y*c_21*p2.z*p3.z+16*c_22*p2.z*p3.z+c_345-108*
        p3.y*c_0*p2.z*p3.z+c_346-216*p3.y*p1.z*c_1*p3.z-10*c_20*c_2+c_150+6*p2.y*c_21*c_2+c_107+c_151-54*p3.y*c_0*c_2+c_347+c_108+c_349+108*
        p3.y*c_1*c_2+c_350-72*p3.y*p1.z*c_27+144*p2.y*p2.z*c_27+144*p3.y*p2.z*c_27+54*p2.y*c_28+c_109+3*c_24*c_4*
        c_56-3*c_18*(p3.y*(-3*c_0+c_211+c_57+c_44+c_162+c_60)+p2.y*(c_58-4*p1.z*p2.z+c_216+c_250+c_59+c_60))-5*c_40*(-(p3.y*
        (c_58+c_114+c_61+c_313+c_59+c_116))+p2.y*(c_58+12*p1.z*p2.z+c_80+c_62+c_59+c_273)-3*p1.y*c_4*c_197)-3*p1.y*(-(c_21*(c_67+c_247+c_315+c_63+c_251-12*
        c_2))-2*p2.y*p3.y*(c_64+c_65+c_66+c_185+c_253+c_119)+2*c_19*(c_67+c_228+c_255+c_60+c_256)+6*c_4*(c_23+2*c_0*
        c_103+p1.z*(c_66+c_59+c_5)+4*(c_199+c_320+c_172+c_27))))+p10_3*(15*c_69*p3.x*c_182*c_76+5*c_77*(3*p3.y*c_30*c_159+p2.y*
        (c_79+c_97+c_80+c_62+c_50+c_5)+p1.y*(c_95+c_81+c_117+c_82-4*p1.z*c_194))+p2.x*(10*c_20*c_0+c_104+c_83+12*c_22*c_0-90*p2.y*c_38-360*
        p3.y*c_38+16*c_20*p1.z*p2.z-18*c_19*p3.y*p1.z*p2.z+c_84+c_338+10*c_20*c_1-36*c_19*p3.y*c_1-18*p2.y*c_21*c_1-6*c_22*c_1+108*
        p2.y*c_0*c_1+c_341+144*p2.y*p1.z*c_25+144*p3.y*p1.z*c_25+90*p2.y*c_26+72*p3.y*c_26+27*c_20*p1.z*p3.z+21*c_19*p3.y*
        p1.z*p3.z+15*p2.y*c_21*p1.z*p3.z+c_85-180*p2.y*c_23*p3.z-180*p3.y*c_23*p3.z+36*c_20*p2.z*p3.z+9*c_19*p3.y*p2.z*p3.z-6*
        p2.y*c_21*p2.z*p3.z+c_86-216*p2.y*c_0*p2.z*p3.z+36*p3.y*c_0*p2.z*p3.z-162*p2.y*p1.z*c_1*p3.z+90*p3.y*p1.z*c_1*
        p3.z-72*p2.y*c_25*p3.z+54*p3.y*c_25*p3.z+9*c_20*c_2+12*c_19*p3.y*c_2+c_87-108*p2.y*c_0*c_2-72*p3.y*c_0*c_2-108*p2.y*p1.z*
        p2.z*c_2+c_348-54*p2.y*c_1*c_2+36*p3.y*c_1*c_2-54*p2.y*p1.z*c_27+c_88-36*p2.y*p2.z*c_27+c_89+c_90-10*c_24*
        (c_91+c_41+c_1+c_92+c_33+c_5)+15*c_40*c_183*c_410+3*p1.y*(-210*c_38+20*c_40*p1.z*p2.z+10*c_40*c_1+c_412+48*p1.z*c_25+18*c_26-20*c_40*p1.z*
        p3.z+120*c_23*p3.z+5*c_40*p2.z*p3.z+60*c_0*p2.z*p3.z+24*p1.z*c_1*p3.z+c_231+c_356+60*c_0*c_2+24*p1.z*p2.z*c_2+c_158+24*
        p1.z*c_27+6*p2.z*c_27+c_357+c_21*(c_120+c_93+c_101+c_94+c_121+c_82)+2*p2.y*p3.y*(c_95+c_93+c_252+c_210+c_10+c_96)+c_19*
        (c_95+c_97+c_118+c_314+c_123+c_163))+6*c_18*(c_100+p3.y*(c_111+c_101+c_112+c_102-5*p1.z*c_103)))-p3.x*(12*c_20*c_0+c_104+c_83+10*
        c_22*c_0-360*p2.y*c_38-90*p3.y*c_38+9*c_20*p1.z*p2.z+15*c_19*p3.y*p1.z*p2.z+21*p2.y*c_21*p1.z*p2.z+c_105-180*p2.y*
        c_23*p2.z-180*p3.y*c_23*p2.z+9*c_19*p3.y*c_1+c_146+9*c_22*c_1-72*p2.y*c_0*c_1+c_106-18*p2.y*p1.z*c_25-54*p3.y*p1.z*c_25-18*
        p3.y*c_26-6*c_20*p1.z*p3.z-12*c_19*p3.y*p1.z*p3.z-18*p2.y*c_21*p1.z*p3.z+16*c_22*p1.z*p3.z-9*c_20*p2.z*p3.z+c_147+9*
        p2.y*c_21*p2.z*p3.z+36*c_22*p2.z*p3.z+36*p2.y*c_0*p2.z*p3.z-216*p3.y*c_0*p2.z*p3.z+36*p2.y*p1.z*c_1*p3.z-108*
        p3.y*p1.z*c_1*p3.z+18*p2.y*c_25*p3.z+c_148+c_149-18*c_19*p3.y*c_2-36*p2.y*c_21*c_2+c_107+144*p2.y*c_0*c_2+108*p3.y*c_0*
        c_2+90*p2.y*p1.z*p2.z*c_2+c_108+c_152-54*p3.y*c_1*c_2+144*p2.y*p1.z*c_27+144*p3.y*p1.z*c_27+54*p2.y*p2.z*c_27-72*p3.y*
        p2.z*c_27+72*p2.y*c_28+c_109-10*c_24*(c_91+18*p1.z*p2.z+c_115+c_94+c_33+c_2)+6*c_18*(p3.y*c_110+p2.y*(c_111+c_57+c_112+c_122-5*
        p1.z*c_113))+5*c_40*(3*p2.y*c_12*c_168+p3.y*(c_79+c_114+c_115+c_45+c_50+c_116)+p1.y*(c_95+c_9+c_117+c_272-4*p1.z*
        c_296))+3*p1.y*(2*p2.y*p3.y*(c_95+c_65+c_118-8*p1.z*p3.z+c_10+c_119)+c_19*(c_120+c_9+4*p1.z*c_511+c_121+c_122)+c_21*(c_95+20*
        p1.z*p2.z+c_39+c_45+c_123+c_96)+6*(-35*c_38+c_179+c_26+c_219+c_522+c_224+c_193+10*c_0*(c_1+c_42+c_2)+4*p1.z*(c_25+c_1*p3.z+p2.z*
        c_2+c_173)))))+p10_2*(210*c_18*p2.y*c_38+60*p1.y*c_19*c_38+c_364-210*c_18*p3.y*c_38-60*p1.y*c_21*c_38+c_445-112*p2.y*
        c_124+112*p3.y*c_124+63*c_129*p1.z*p2.z+45*c_125*p2.y*p1.z*p2.z+30*c_24*c_19*p1.z*p2.z+18*c_18*c_20*p1.z*p2.z+9*p1.y*
        c_126*p1.z*p2.z+3*c_130*p1.z*p2.z-90*c_125*p3.y*p1.z*p2.z-60*c_24*p2.y*p3.y*p1.z*p2.z-36*c_18*c_19*p3.y*p1.z*p2.z-18*
        p1.y*c_20*p3.y*p1.z*p2.z-6*c_126*p3.y*p1.z*p2.z-60*c_24*c_21*p1.z*p2.z-36*c_18*p2.y*c_21*p1.z*p2.z-18*p1.y*c_19*
        c_21*p1.z*p2.z-6*c_20*c_21*p1.z*p2.z-36*c_18*c_22*p1.z*p2.z-18*p1.y*p2.y*c_22*p1.z*p2.z-6*c_19*c_22*p1.z*p2.z-18*p1.y*
        c_127*p1.z*p2.z-6*p2.y*c_127*p1.z*p2.z-6*c_131*p1.z*p2.z-140*c_24*c_23*p2.z+60*c_18*p2.y*c_23*p2.z+60*p1.y*c_19*c_23*
        p2.z+c_175+360*c_18*p3.y*c_23*p2.z+120*p1.y*p2.y*p3.y*c_23*p2.z+c_261+120*p1.y*c_21*c_23*p2.z+24*p2.y*c_21*c_23*
        p2.z+24*c_22*c_23*p2.z-168*p1.y*c_128*p2.z+c_451-144*p3.y*c_128*p2.z+9*c_129*c_1+15*c_125*p2.y*c_1+18*c_24*c_19*c_1+18*c_18*
        c_20*c_1+15*p1.y*c_126*c_1+9*c_130*c_1-15*c_125*p3.y*c_1-24*c_24*p2.y*p3.y*c_1-27*c_18*c_19*p3.y*c_1-24*p1.y*c_20*p3.y*
        c_1+c_262-12*c_24*c_21*c_1-18*c_18*p2.y*c_21*c_1-18*p1.y*c_19*c_21*c_1-12*c_20*c_21*c_1-9*c_18*c_22*c_1-12*p1.y*p2.y*c_22*c_1-9*
        c_19*c_22*c_1-6*p1.y*c_127*c_1-6*p2.y*c_127*c_1-3*c_131*c_1-60*c_24*c_0*c_1+36*p1.y*c_19*c_0*c_1+24*c_20*c_0*c_1+180*c_18*
        p3.y*c_0*c_1+144*p1.y*p2.y*p3.y*c_0*c_1+c_453+72*p1.y*c_21*c_0*c_1+c_454+c_201-120*p1.y*c_38*c_1-120*p2.y*c_38*c_1-120*
        p3.y*c_38*c_1-20*c_24*p1.z*c_25-12*c_18*p2.y*p1.z*c_25+12*p1.y*c_19*p1.z*c_25+20*c_20*p1.z*c_25+72*c_18*p3.y*p1.z*c_25+108*
        p1.y*p2.y*p3.y*p1.z*c_25+72*c_19*p3.y*p1.z*c_25+36*p1.y*c_21*p1.z*c_25+36*p2.y*c_21*p1.z*c_25+c_370-80*p1.y*c_23*
        c_25-112*p2.y*c_23*c_25-96*p3.y*c_23*c_25-4*c_24*c_26-6*c_18*p2.y*c_26+10*c_20*c_26+18*c_18*p3.y*c_26+48*p1.y*p2.y*p3.y*
        c_26+c_459+12*p1.y*c_21*c_26+24*p2.y*c_21*c_26+6*c_22*c_26-48*p1.y*c_0*c_26-96*p2.y*c_0*c_26-72*p3.y*c_0*c_26-24*p1.y*p1.z*
        c_132-72*p2.y*p1.z*c_132-48*p3.y*p1.z*c_132-8*p1.y*c_133-40*p2.y*c_133+c_463-63*c_129*p1.z*p3.z+90*c_125*p2.y*p1.z*p3.z+60*
        c_24*c_19*p1.z*p3.z+36*c_18*c_20*p1.z*p3.z+18*p1.y*c_126*p1.z*p3.z+6*c_130*p1.z*p3.z-45*c_125*p3.y*p1.z*p3.z+60*
        c_24*p2.y*p3.y*p1.z*p3.z+36*c_18*c_19*p3.y*p1.z*p3.z+18*p1.y*c_20*p3.y*p1.z*p3.z+6*c_126*p3.y*p1.z*p3.z-30*c_24*
        c_21*p1.z*p3.z+36*c_18*p2.y*c_21*p1.z*p3.z+18*p1.y*c_19*c_21*p1.z*p3.z+6*c_20*c_21*p1.z*p3.z-18*c_18*c_22*p1.z*p3.z+18*
        p1.y*p2.y*c_22*p1.z*p3.z+6*c_19*c_22*p1.z*p3.z-9*p1.y*c_127*p1.z*p3.z+6*p2.y*c_127*p1.z*p3.z-3*c_131*p1.z*p3.z+140*
        c_24*c_23*p3.z-360*c_18*p2.y*c_23*p3.z-120*p1.y*c_19*c_23*p3.z-24*c_20*c_23*p3.z-60*c_18*p3.y*c_23*p3.z-120*p1.y*
        p2.y*p3.y*c_23*p3.z-24*c_19*p3.y*c_23*p3.z-60*p1.y*c_21*c_23*p3.z+c_176+c_264+168*p1.y*c_128*p3.z+144*p2.y*c_128*p3.z+c_378+15*
        c_125*p2.y*p2.z*p3.z+24*c_24*c_19*p2.z*p3.z+27*c_18*c_20*p2.z*p3.z+24*p1.y*c_126*p2.z*p3.z+c_465-15*c_125*p3.y*
        p2.z*p3.z+9*c_18*c_19*p3.y*p2.z*p3.z+12*p1.y*c_20*p3.y*p2.z*p3.z+9*c_126*p3.y*p2.z*p3.z-24*c_24*c_21*p2.z*p3.z-9*
        c_18*p2.y*c_21*p2.z*p3.z+3*c_20*c_21*p2.z*p3.z-27*c_18*c_22*p2.z*p3.z-12*p1.y*p2.y*c_22*p2.z*p3.z-3*c_19*c_22*p2.z*
        p3.z-24*p1.y*c_127*p2.z*p3.z-9*p2.y*c_127*p2.z*p3.z+c_380-180*c_18*p2.y*c_0*p2.z*p3.z-144*p1.y*c_19*c_0*p2.z*p3.z-54*
        c_20*c_0*p2.z*p3.z+180*c_18*p3.y*c_0*p2.z*p3.z-18*c_19*p3.y*c_0*p2.z*p3.z+144*p1.y*c_21*c_0*p2.z*p3.z+18*p2.y*c_21*
        c_0*p2.z*p3.z+54*c_22*c_0*p2.z*p3.z+120*p2.y*c_38*p2.z*p3.z-120*p3.y*c_38*p2.z*p3.z-72*c_18*p2.y*p1.z*c_1*p3.z-108*
        p1.y*c_19*p1.z*c_1*p3.z-72*c_20*p1.z*c_1*p3.z+72*c_18*p3.y*p1.z*c_1*p3.z+36*p1.y*p2.y*p3.y*p1.z*c_1*p3.z+72*p1.y*
        c_21*p1.z*c_1*p3.z+36*p2.y*c_21*p1.z*c_1*p3.z+36*c_22*p1.z*c_1*p3.z+96*p2.y*c_23*c_1*p3.z-96*p3.y*c_23*c_1*p3.z-18*
        c_18*p2.y*c_25*p3.z-48*p1.y*c_19*c_25*p3.z+c_473+18*c_18*p3.y*c_25*p3.z+24*p1.y*p2.y*p3.y*c_25*p3.z+12*c_19*p3.y*c_25*
        p3.z+24*p1.y*c_21*c_25*p3.z+30*p2.y*c_21*c_25*p3.z+18*c_22*c_25*p3.z+72*p2.y*c_0*c_25*p3.z-72*p3.y*c_0*c_25*p3.z+48*
        p2.y*p1.z*c_26*p3.z+c_203+c_475-24*p3.y*c_132*p3.z-9*c_129*c_2+15*c_125*p2.y*c_2+12*c_24*c_19*c_2+9*c_18*c_20*c_2+6*p1.y*
        c_126*c_2+3*c_130*c_2-15*c_125*p3.y*c_2+24*c_24*p2.y*p3.y*c_2+18*c_18*c_19*p3.y*c_2+12*p1.y*c_20*p3.y*c_2+6*c_126*p3.y*c_2-18*
        c_24*c_21*c_2+27*c_18*p2.y*c_21*c_2+18*p1.y*c_19*c_21*c_2+9*c_20*c_21*c_2-18*c_18*c_22*c_2+24*p1.y*p2.y*c_22*c_2+12*c_19*
        c_22*c_2-15*p1.y*c_127*c_2+c_177-9*c_131*c_2+60*c_24*c_0*c_2-180*c_18*p2.y*c_0*c_2-72*p1.y*c_19*c_0*c_2+c_204-144*p1.y*p2.y*
        p3.y*c_0*c_2+c_389-36*p1.y*c_21*c_0*c_2+c_390-24*c_22*c_0*c_2+120*p1.y*c_38*c_2+120*p2.y*c_38*c_2+120*p3.y*c_38*c_2-72*c_18*
        p2.y*p1.z*p2.z*c_2-72*p1.y*c_19*p1.z*p2.z*c_2-36*c_20*p1.z*p2.z*c_2+72*c_18*p3.y*p1.z*p2.z*c_2-36*p1.y*p2.y*p3.y*
        p1.z*p2.z*c_2-36*c_19*p3.y*p1.z*p2.z*c_2+108*p1.y*c_21*p1.z*p2.z*c_2+72*c_22*p1.z*p2.z*c_2+96*p2.y*c_23*p2.z*c_2-96*
        p3.y*c_23*p2.z*c_2-18*c_18*p2.y*c_1*c_2-36*p1.y*c_19*c_1*c_2-36*c_20*c_1*c_2+18*c_18*p3.y*c_1*c_2-18*c_19*p3.y*c_1*c_2+36*
        p1.y*c_21*c_1*c_2+18*p2.y*c_21*c_1*c_2+36*c_22*c_1*c_2+c_206+c_207+48*p2.y*p1.z*c_25*c_2+c_397+24*p2.y*c_26*c_2-24*p3.y*
        c_26*c_2+20*c_24*p1.z*c_27-72*c_18*p2.y*p1.z*c_27-36*p1.y*c_19*p1.z*c_27+c_482+12*c_18*p3.y*p1.z*c_27-108*p1.y*p2.y*
        p3.y*p1.z*c_27-36*c_19*p3.y*p1.z*c_27-12*p1.y*c_21*p1.z*c_27-72*p2.y*c_21*p1.z*c_27-20*c_22*p1.z*c_27+80*p1.y*c_23*c_27+96*
        p2.y*c_23*c_27+112*p3.y*c_23*c_27-18*c_18*p2.y*p2.z*c_27-24*p1.y*c_19*p2.z*c_27-18*c_20*p2.z*c_27+18*c_18*p3.y*p2.z*
        c_27-24*p1.y*p2.y*p3.y*p2.z*c_27-30*c_19*p3.y*p2.z*c_27+48*p1.y*c_21*p2.z*c_27-12*p2.y*c_21*p2.z*c_27+c_401+72*p2.y*
        c_0*p2.z*c_27-72*p3.y*c_0*p2.z*c_27+c_485-48*p3.y*p1.z*c_1*c_27+24*p2.y*c_25*c_27-24*p3.y*c_25*c_27+4*c_24*c_28-18*c_18*
        p2.y*c_28-12*p1.y*c_19*c_28-6*c_20*c_28+6*c_18*p3.y*c_28-48*p1.y*p2.y*p3.y*c_28-24*c_19*p3.y*c_28+c_404-10*c_22*c_28+48*p1.y*
        c_0*c_28+72*p2.y*c_0*c_28+96*p3.y*c_0*c_28+c_209-48*p3.y*p1.z*p2.z*c_28+24*p2.y*c_1*c_28-24*p3.y*c_1*c_28+24*p1.y*
        p1.z*c_134+48*p2.y*p1.z*c_134+72*p3.y*p1.z*c_134+24*p2.y*p2.z*c_134+c_408+8*p1.y*c_135+c_409+40*p3.y*c_135+15*c_77*p3.x*
        c_56*c_76-15*c_174*(p2.y*c_12*c_435+p3.y*(c_67+c_161+c_1+c_98+c_136+c_137)+p1.y*(c_64+c_11+c_141+c_137-p1.z*c_165))+15*c_138*
        (p3.y*c_30*(c_55+c_139+p3.z)+p2.y*(c_67+c_16+c_140+c_44+c_136+c_2)+p1.y*(c_64+c_140+c_141+c_7-p1.z*c_157))-3*p2.x*p3.x*
        c_333*(5*c_40*c_187+3*(3*c_21*p1.z-20*c_23+2*c_21*p2.z-24*c_0*p2.z-18*p1.z*c_1-8*c_25+c_334-24*c_0*p3.z+c_335-12*c_1*p3.z-18*
        p1.z*c_2-12*p2.z*c_2+c_336+4*p2.y*p3.y*c_156+c_19*c_56+p1.y*(8*p2.y*p1.z+8*p3.y*p1.z+6*p2.y*p2.z+4*p3.y*p2.z+4*
        p2.y*p3.z+6*p3.y*p3.z)+2*c_18*c_144))-3*c_69*(-4*c_20*c_0-9*c_19*p3.y*c_0-6*p2.y*c_21*c_0-3*c_22*c_0+30*p2.y*c_38+60*p3.y*
        c_38-10*c_20*p1.z*p2.z+36*p2.y*c_23*p2.z+48*p3.y*c_23*p2.z-10*c_20*c_1+c_145+c_146+3*c_22*c_1-60*p2.y*p1.z*c_25-48*p3.y*
        p1.z*c_25-90*p2.y*c_26-60*p3.y*c_26-12*c_20*p1.z*p3.z-9*c_19*p3.y*p1.z*p3.z-6*p2.y*c_21*p1.z*p3.z-3*c_22*p1.z*p3.z+24*
        p2.y*c_23*p3.z+36*p3.y*c_23*p3.z-30*c_20*p2.z*p3.z+c_147+3*p2.y*c_21*p2.z*p3.z+3*c_22*p2.z*p3.z+54*p2.y*c_0*p2.z*
        p3.z+18*p3.y*c_0*p2.z*p3.z+72*p2.y*p1.z*c_1*p3.z-18*p3.y*p1.z*c_1*p3.z+60*p2.y*c_25*p3.z+c_148+c_149+c_150-3*p2.y*
        c_21*c_2+c_151+18*p3.y*c_0*c_2+36*p2.y*p1.z*p2.z*c_2+c_152-18*p3.y*c_1*c_2+12*p2.y*p1.z*c_27+6*p3.y*p1.z*c_27+18*p2.y*
        p2.z*c_27-6*p3.y*p2.z*c_27+6*p2.y*c_28+15*c_40*c_352*c_156+2*c_24*(c_15+c_118+c_164+c_5+c_230)-3*p1.y*(c_354+5*c_40*p1.z*
        p2.z-20*c_23*p2.z+5*c_40*c_1+12*p1.z*c_25+c_180-5*c_40*p1.z*p3.z+20*c_23*p3.z+24*c_0*p2.z*p3.z+18*p1.z*c_1*p3.z+c_245-5*
        c_40*c_2+12*c_0*c_2+12*p1.z*p2.z*c_2+c_158+6*p1.z*c_27+c_171+2*c_28+2*p2.y*p3.y*c_30*c_159+c_21*c_441+c_19*c_184)+3*c_18*
        (p3.y*c_415+p2.y*(c_118+c_33+c_2+c_509)))+3*c_40*(-3*c_20*c_12*c_156-3*c_19*p3.y*c_529-2*c_22*(c_64+c_65+c_115+c_98+c_123+c_163)+2*
        c_24*(c_15+c_115+c_164+c_96+c_229)-3*p2.y*c_21*c_525+6*p2.y*c_12*c_528+6*p3.y*(c_277+c_26+c_288+c_158+c_289-15*c_28+3*
        c_0*p2.z*c_157+c_23*(c_48+c_191)+2*p1.z*(c_25+c_166+c_167+c_291))+c_18*(p2.y*(c_411+c_65+c_198+c_188+c_222)+3*p3.y*(c_1+c_33+c_96+2*
        p1.z*c_103))-3*p1.y*(2*p2.y*p3.y*c_12*c_168+c_21*c_276+c_19*c_515+2*(-15*c_38+c_26+10*c_23*c_4+c_301+c_302+c_171+c_246+6*
        c_0*p2.z*c_113+3*p1.z*(c_25+2*c_1*p3.z+c_172+c_173)))))+c_69*(-15*c_174*p2.y*c_0-18*c_40*c_20*c_0-9*c_130*c_0+15*c_174*
        p3.y*c_0-9*c_40*c_19*p3.y*c_0+15*c_126*p3.y*c_0+9*c_40*p2.y*c_21*c_0+12*c_20*c_21*c_0+18*c_40*c_22*c_0+9*c_19*c_22*
        c_0+c_363+c_444+18*c_40*p2.y*c_38+4*c_20*c_38-18*c_40*p3.y*c_38-18*c_19*p3.y*c_38-12*p2.y*c_21*c_38-6*c_22*c_38+c_365+24*p3.y*c_124-45*
        c_174*p2.y*p1.z*p2.z-90*c_40*c_20*p1.z*p2.z-63*c_130*p1.z*p2.z+30*c_174*p3.y*p1.z*p2.z-36*c_40*c_19*p3.y*p1.z*
        p2.z+90*c_126*p3.y*p1.z*p2.z+27*c_40*p2.y*c_21*p1.z*p2.z+60*c_20*c_21*p1.z*p2.z+36*c_40*c_22*p1.z*p2.z+36*c_19*c_22*
        p1.z*p2.z+18*p2.y*c_127*p1.z*p2.z+6*c_131*p1.z*p2.z+54*c_40*p2.y*c_23*p2.z+c_175-36*c_40*p3.y*c_23*p2.z-72*c_19*p3.y*
        c_23*p2.z-36*p2.y*c_21*c_23*p2.z+c_366+24*p2.y*c_128*p2.z+48*p3.y*c_128*p2.z+30*c_174*p2.y*c_1-30*c_40*c_20*c_1+60*c_174*
        p3.y*c_1+18*c_40*p2.y*c_21*c_1+12*c_40*c_22*c_1+108*c_40*p2.y*c_0*c_1+c_368-54*c_40*p3.y*c_0*c_1-180*c_19*p3.y*c_0*c_1-72*
        p2.y*c_21*c_0*c_1-18*c_22*c_0*c_1+48*p2.y*c_38*c_1+72*p3.y*c_38*c_1+180*c_40*p2.y*p1.z*c_25+140*c_20*p1.z*c_25-72*c_40*p3.y*
        p1.z*c_25-360*c_19*p3.y*p1.z*c_25-120*p2.y*c_21*p1.z*c_25-24*c_22*p1.z*c_25+80*p2.y*c_23*c_25+96*p3.y*c_23*c_25-270*c_40*
        p2.y*c_26-90*c_40*p3.y*c_26+210*c_19*p3.y*c_26+60*p2.y*c_21*c_26+10*c_22*c_26+c_202+120*p3.y*c_0*c_26+168*p2.y*p1.z*
        c_132+144*p3.y*p1.z*c_132-112*p3.y*c_133-60*c_174*p2.y*p1.z*p3.z-36*c_40*c_20*p1.z*p3.z+75*c_174*p3.y*p1.z*p3.z-27*c_40*
        c_19*p3.y*p1.z*p3.z+c_374+36*c_40*p2.y*c_21*p1.z*p3.z+24*c_20*c_21*p1.z*p3.z+90*c_40*c_22*p1.z*p3.z+27*c_19*c_22*p1.z*
        p3.z+24*p2.y*c_127*p1.z*p3.z+c_375+36*c_40*p2.y*c_23*p3.z-54*c_40*p3.y*c_23*p3.z-18*c_19*p3.y*c_23*p3.z+c_176-18*c_22*
        c_23*p3.z+24*p3.y*c_128*p3.z-15*c_174*p2.y*p2.z*p3.z-30*c_40*c_20*p2.z*p3.z+63*c_130*p2.z*p3.z+75*c_174*p3.y*p2.z*
        p3.z-18*c_40*c_19*p3.y*p2.z*p3.z+c_379+18*c_40*p2.y*c_21*p2.z*p3.z+30*c_20*c_21*p2.z*p3.z+30*c_40*c_22*p2.z*p3.z+18*
        c_19*c_22*p2.z*p3.z+9*p2.y*c_127*p2.z*p3.z+3*c_131*p2.z*p3.z+108*c_40*p2.y*c_0*p2.z*p3.z-108*c_40*p3.y*c_0*p2.z*p3.z-72*
        c_19*p3.y*c_0*p2.z*p3.z-72*p2.y*c_21*c_0*p2.z*p3.z-36*c_22*c_0*p2.z*p3.z+48*p3.y*c_38*p2.z*p3.z+216*c_40*p2.y*
        p1.z*c_1*p3.z-162*c_40*p3.y*p1.z*c_1*p3.z-180*c_19*p3.y*p1.z*c_1*p3.z-144*p2.y*c_21*p1.z*c_1*p3.z-54*c_22*p1.z*c_1*
        p3.z+72*p3.y*c_23*c_1*p3.z-180*c_40*p2.y*c_25*p3.z-140*c_20*c_25*p3.z-108*c_40*p3.y*c_25*p3.z+c_385+60*p2.y*c_21*c_25*
        p3.z+c_265+96*p3.y*c_0*c_25*p3.z+120*p3.y*p1.z*c_26*p3.z-168*p2.y*c_132*p3.z+c_388-75*c_174*p2.y*c_2-12*c_40*c_20*c_2+9*
        c_130*c_2-75*c_174*p3.y*c_2-18*c_40*c_19*p3.y*c_2+15*c_126*p3.y*c_2+18*c_20*c_21*c_2+30*c_40*c_22*c_2+18*c_19*c_22*c_2+c_177+9*
        c_131*c_2+54*c_40*p2.y*c_0*c_2-108*c_40*p3.y*c_0*c_2+c_205-36*p2.y*c_21*c_0*c_2-36*c_22*c_0*c_2+c_478+162*c_40*p2.y*p1.z*
        p2.z*c_2-216*c_40*p3.y*p1.z*p2.z*c_2+c_393-108*p2.y*c_21*p1.z*p2.z*c_2-72*c_22*p1.z*p2.z*c_2+c_395-60*c_20*c_1*c_2+36*
        p2.y*c_21*c_1*c_2+24*c_22*c_1*c_2+72*p3.y*c_0*c_1*c_2+96*p3.y*p1.z*c_25*c_2+c_208-120*p3.y*c_26*c_2+72*c_40*p2.y*p1.z*c_27-180*
        c_40*p3.y*p1.z*c_27-18*c_19*p3.y*p1.z*c_27-48*p2.y*c_21*p1.z*c_27+c_399+24*p3.y*c_23*c_27+108*c_40*p2.y*p2.z*
        c_27+c_266+180*c_40*p3.y*p2.z*c_27-12*c_19*p3.y*p2.z*c_27+12*p2.y*c_21*p2.z*c_27+20*c_22*p2.z*c_27+48*p3.y*c_0*p2.z*c_27+72*
        p3.y*p1.z*c_1*c_27-80*p2.y*c_25*c_27-112*p3.y*c_25*c_27+90*c_40*p2.y*c_28-4*c_20*c_28+270*c_40*p3.y*c_28-6*c_19*p3.y*c_28+10*
        c_22*c_28+24*p3.y*c_0*c_28+48*p3.y*p1.z*p2.z*c_28-48*p2.y*c_1*c_28-96*p3.y*c_1*c_28+c_407-24*p2.y*p2.z*c_134-72*p3.y*
        p2.z*c_134-8*p2.y*c_135-40*p3.y*c_135-3*c_129*(c_58+p3.z*c_103+p1.z*c_282)-c_24*(10*c_38-9*c_40*p1.z*p2.z+c_179-9*c_40*
        c_1+24*c_0*c_1+20*p1.z*c_25+c_180+9*c_40*p1.z*p3.z-60*c_23*p3.z-72*c_0*p2.z*p3.z-54*p1.z*c_1*p3.z-24*c_25*p3.z+9*c_40*
        c_2-36*c_0*c_2-36*p1.z*p2.z*c_2+c_413-18*p1.z*c_27+c_278+c_181-6*p2.y*p3.y*c_12*c_182-3*c_21*c_12*c_183+9*c_19*c_184)-3*c_125*
        (-(p3.y*c_12*c_144)+p2.y*(c_15+2*p3.z*c_165+p1.z*(c_70+c_503)))-3*c_18*(-3*c_19*p3.y*c_12*c_56+2*c_20*(c_58+2*p3.z*
        c_269+p1.z*(c_139+c_142))+3*c_40*(-(p3.y*c_221)+p2.y*c_215)+p3.y*c_12*(c_283+c_284+c_189+c_195+c_285+c_286-c_21*c_187+c_287)-2*
        p2.y*(3*c_21*c_12*c_156+2*(c_223-c_23*(p2.z+c_432)+c_530+c_158+3*p2.z*c_27+c_28+c_0*(c_423+c_188+c_5)+p1.z*(-5*
        c_25+c_189+c_167+c_173))))+p1.y*(6*c_127*c_0-24*c_21*c_38+40*c_124+6*c_127*p1.z*p2.z-36*c_21*c_23*p2.z+72*c_128*p2.z-36*c_21*c_0*c_1+96*
        c_38*c_1-24*c_21*p1.z*c_25+112*c_23*c_25+120*c_0*c_26+120*p1.z*c_132+112*c_133+9*c_127*p1.z*p3.z-30*c_21*c_23*p3.z-24*c_128*
        p3.z-6*c_127*p2.z*p3.z-36*c_21*c_0*p2.z*p3.z-48*c_38*p2.z*p3.z-18*c_21*p1.z*c_1*p3.z-72*c_23*c_1*p3.z+24*c_21*c_25*
        p3.z-96*c_0*c_25*p3.z-120*p1.z*c_26*p3.z-144*c_132*p3.z+c_425-18*c_21*c_0*c_2-24*c_38*c_2-48*c_23*p2.z*c_2+c_426+c_427-96*p1.z*
        c_25*c_2-120*c_26*c_2+12*c_21*p1.z*c_27-24*c_23*c_27+72*c_21*p2.z*c_27-48*c_0*p2.z*c_27-72*p1.z*c_1*c_27-96*c_25*c_27+c_428-24*
        c_0*c_28+c_429-72*c_1*c_28-24*p1.z*c_134-48*p2.z*c_134+c_430+12*c_20*p3.y*c_12*c_190+15*c_174*c_4*(p1.z+c_70+c_178)-15*
        c_126*(c_0+p1.z*c_165+p3.z*c_8)-6*p2.y*p3.y*c_12*(-(c_21*c_304)+c_311)+3*c_19*(3*c_21*c_12*c_192+2*(c_38-35*
        c_26+c_355+c_294+c_234+c_193+3*c_0*p3.z*c_417+c_258+p1.z*(c_236+30*c_1*p3.z+c_195+c_442)))-9*c_40*(-(c_21*c_225)+c_19*c_226-2*p2.y*p3.y*
        c_4*c_197+2*c_4*c_243)))-p2.x*p3.x*(15*c_130*c_0+9*c_126*p3.y*c_0+3*c_20*c_21*c_0-3*c_19*c_22*c_0-9*p2.y*c_127*c_0-15*c_131*
        c_0-18*c_20*c_38-6*c_19*p3.y*c_38+6*p2.y*c_21*c_38+18*c_22*c_38+24*p2.y*c_124-24*p3.y*c_124+90*c_130*p1.z*p2.z+45*c_126*p3.y*
        p1.z*p2.z+12*c_20*c_21*p1.z*p2.z-9*c_19*c_22*p1.z*p2.z-18*p2.y*c_127*p1.z*p2.z+c_449-72*c_20*c_23*p2.z-18*c_19*p3.y*
        c_23*p2.z+12*p2.y*c_21*c_23*p2.z+c_450+48*p2.y*c_128*p2.z+c_452+c_367+45*c_126*p3.y*c_1+30*c_20*c_21*c_1+18*c_19*c_22*
        c_1+9*p2.y*c_127*c_1+3*c_131*c_1-180*c_20*c_0*c_1-36*c_19*p3.y*c_0*c_1+c_263+c_201+72*p2.y*c_38*c_1+c_455-360*c_20*p1.z*c_25-60*
        c_19*p3.y*p1.z*c_25+24*p2.y*c_21*p1.z*c_25+c_457+96*p2.y*c_23*c_25+c_458+c_371-30*c_19*p3.y*c_26-30*p2.y*c_21*c_26-10*
        c_22*c_26+c_202+c_460+144*p2.y*p1.z*c_132+c_462+c_372-8*p3.y*c_133+c_373+18*c_126*p3.y*p1.z*p3.z+9*c_20*c_21*p1.z*p3.z-12*
        c_19*c_22*p1.z*p3.z-45*p2.y*c_127*p1.z*p3.z-90*c_131*p1.z*p3.z+c_376-12*c_19*p3.y*c_23*p3.z+18*p2.y*c_21*c_23*p3.z+72*
        c_22*c_23*p3.z+c_377-48*p3.y*c_128*p3.z+c_381-36*c_19*p3.y*c_0*p2.z*p3.z+36*p2.y*c_21*c_0*p2.z*p3.z+c_467+c_382+c_468+c_383-72*
        c_19*p3.y*p1.z*c_1*p3.z+54*p2.y*c_21*p1.z*c_1*p3.z+c_470+c_384+c_472+80*c_20*c_25*p3.z-48*p2.y*c_21*c_25*p3.z-32*
        c_22*c_25*p3.z+c_386+c_474+c_387+c_203-192*p2.y*c_132*p3.z-3*c_130*c_2-9*c_126*p3.y*c_2-18*c_20*c_21*c_2-30*c_19*c_22*
        c_2-45*p2.y*c_127*c_2+c_476+c_204+c_205+36*p2.y*c_21*c_0*c_2+180*c_22*c_0*c_2+c_391-72*p3.y*c_38*c_2+c_392-54*c_19*p3.y*p1.z*
        p2.z*c_2+72*p2.y*c_21*p1.z*p2.z*c_2+c_479+c_394+c_480+60*c_20*c_1*c_2+36*c_19*p3.y*c_1*c_2-36*p2.y*c_21*c_1*c_2-60*c_22*
        c_1*c_2+c_206+c_207+c_396+c_481+c_208+24*p3.y*c_26*c_2+c_398-24*c_19*p3.y*p1.z*c_27+60*p2.y*c_21*p1.z*c_27+360*c_22*p1.z*
        c_27+c_400-96*p3.y*c_23*c_27+32*c_20*p2.z*c_27+48*c_19*p3.y*p2.z*c_27-80*c_22*p2.z*c_27+c_402+c_484+c_403+c_486-64*p2.y*c_25*
        c_27+64*p3.y*c_25*c_27+10*c_20*c_28+30*c_19*p3.y*c_28+30*p2.y*c_21*c_28+c_487+c_405+c_267+c_209+c_488-24*p2.y*c_1*
        c_28+c_268+c_406-144*p3.y*p1.z*c_134+192*p3.y*p2.z*c_134+8*p2.y*c_135+c_490-3*c_129*c_4*c_144-15*c_174*(p1.y*c_4*(p1.z+c_68+c_191)+p3.y*
        (c_0+c_170+c_115+c_210+c_59+c_492)-p2.y*c_257)+3*c_125*(p2.y*(c_15+c_360+c_101+c_98+c_96)+p3.y*(-5*c_0+c_211+c_160+c_210+c_60))+3*
        c_24*(-6*p2.y*p3.y*c_4*c_156+c_19*(c_227-3*p1.z*p2.z+c_249+c_98+c_96)+c_21*(-8*c_0+c_211+c_160+c_63+12*c_2)+2*
        c_4*(c_212+c_244+c_218+c_167+c_213+12*c_0*c_34+3*p1.z*c_214))+3*c_18*(3*c_19*p3.y*c_215+c_20*(c_217+c_41+c_216+c_98+c_96)+p3.y*
        (c_220+4*c_23*c_533-c_21*(c_217+c_16+c_118+c_94+c_248)+6*c_0*(c_115+c_17+c_82)+2*p1.z*(7*c_25+c_218-3*p2.z*c_2-20*c_27)+8*
        (c_26+c_219-2*p2.z*c_27+c_290))-p2.y*(c_220+4*c_23*(c_68+c_178)+3*c_21*c_221+2*c_0*(-9*c_1+c_164+c_222)+2*p1.z*(-20*c_25-3*c_1*
        p3.z+c_167+7*c_27)+8*(c_223-2*c_25*p3.z+c_224+c_28)))+3*p1.y*(-2*p2.y*c_22*c_225+2*c_20*p3.y*c_226+c_126*(c_227+c_228+c_96+c_229)-c_127*
        (c_227+c_230+2*(c_1-15*c_2))+2*c_21*(8*c_38+c_438+c_231-20*p2.z*c_27-60*c_28+c_23*(c_232+c_361)+6*c_0*c_259+p1.z*
        (c_199+c_233+c_167+c_281))-c_19*(16*c_38-120*c_26+3*c_21*p1.z*c_4-40*c_25*p3.z+c_234+c_439+2*c_23*(15*p2.z+c_270)+12*c_21*
        (c_1+c_7)+12*c_0*c_235+2*p1.z*(c_236+c_218+c_200+c_237))+4*p2.y*p3.y*c_4*c_243-8*c_4*(c_128+2*c_38*c_34+c_23*c_214+c_0*c_534+p1.z*
        (5*c_26+c_245+c_521+8*p2.z*c_27+c_246)+2*(3*c_132+5*c_26*p3.z+6*c_25*c_2+6*c_1*c_27+c_303+3*c_134)))+c_40*(-3*c_24*c_4*c_187-10*
        c_22*(c_58+c_1+c_162+c_498+c_275)+3*c_18*(-(p3.y*(c_58+c_247+c_198-4*p1.z*p3.z+c_59+c_248))+p2.y*(c_58+c_437+c_101+c_98+c_141+c_46))+3*
        c_19*p3.y*(c_15+5*p1.z*(c_70+c_142)+2*(c_1+c_162+c_163))+c_20*(c_217+9*p1.z*(c_48+c_49)+2*(c_39+c_59+c_163))+18*
        p3.y*(c_38+c_293+c_245+c_502+c_295+c_321+c_323+c_328)+3*p1.y*(c_19*(c_67+c_169+c_249+c_250+c_251+c_46)+2*p2.y*p3.y*
        (c_64+c_186+c_252+c_210+c_253+c_254)-2*c_21*(c_67+c_198+c_255+c_513+c_256)+6*c_4*(c_23+2*c_0*c_113+p1.z*(c_115+c_59+c_254)+4*c_325))+6*
        p2.y*(c_21*c_257-3*(c_38+c_431-8*c_25*p3.z+c_433+c_246+c_258+3*c_0*c_259+p1.z*c_424))))+c_40*(c_362+c_443-9*c_20*c_21*c_0-12*
        c_19*c_22*c_0-15*p2.y*c_127*c_0+9*c_131*c_0+6*c_20*c_38+12*c_19*p3.y*c_38+18*p2.y*c_21*c_38-4*c_22*c_38-24*p2.y*
        c_124+c_446+c_447-24*c_126*p3.y*p1.z*p2.z-27*c_20*c_21*p1.z*p2.z-24*c_19*c_22*p1.z*p2.z+c_448+18*c_20*c_23*p2.z+c_261+18*p2.y*c_21*
        c_23*p2.z-24*p2.y*c_128*p2.z-9*c_130*c_1+c_262-18*c_20*c_21*c_1-18*c_19*c_22*c_1-15*p2.y*c_127*c_1-9*c_131*c_1+36*c_20*c_0*
        c_1+36*c_19*p3.y*c_0*c_1+c_263+c_369+c_456+48*c_19*p3.y*p1.z*c_25+18*p2.y*c_21*p1.z*c_25-24*p2.y*c_23*c_25-10*c_20*c_26+6*
        p2.y*c_21*c_26+4*c_22*c_26-24*p2.y*c_0*c_26+c_461+40*p2.y*c_133+8*p3.y*c_133-6*c_130*p1.z*p3.z-18*c_126*p3.y*p1.z*
        p3.z-36*c_20*c_21*p1.z*p3.z-60*c_19*c_22*p1.z*p3.z-90*p2.y*c_127*p1.z*p3.z+63*c_131*p1.z*p3.z+c_464+36*c_19*p3.y*c_23*
        p3.z+72*p2.y*c_21*c_23*p3.z+c_264-48*p2.y*c_128*p3.z-24*p3.y*c_128*p3.z-3*c_130*p2.z*p3.z-9*c_126*p3.y*p2.z*p3.z-18*c_20*
        c_21*p2.z*p3.z-30*c_19*c_22*p2.z*p3.z+c_466-63*c_131*p2.z*p3.z+36*c_20*c_0*p2.z*p3.z+72*c_19*p3.y*c_0*p2.z*p3.z+72*
        p2.y*c_21*c_0*p2.z*p3.z-48*p2.y*c_38*p2.z*p3.z+72*c_20*p1.z*c_1*p3.z+108*c_19*p3.y*p1.z*c_1*p3.z+c_469+c_471-20*c_20*
        c_25*p3.z-12*c_19*p3.y*c_25*p3.z+12*p2.y*c_21*c_25*p3.z+c_265-48*p2.y*c_0*c_25*p3.z-48*p2.y*p1.z*c_26*p3.z+72*p2.y*
        c_132*p3.z+24*p3.y*c_132*p3.z+18*c_20*c_0*c_2+72*c_19*p3.y*c_0*c_2+180*p2.y*c_21*c_0*c_2+c_477-72*p2.y*c_38*c_2-48*p3.y*c_38*
        c_2+54*c_20*p1.z*p2.z*c_2+144*c_19*p3.y*p1.z*p2.z*c_2+180*p2.y*c_21*p1.z*p2.z*c_2-72*p2.y*c_23*p2.z*c_2-24*c_20*c_1*
        c_2-36*c_19*p3.y*c_1*c_2+60*c_22*c_1*c_2-72*p2.y*c_0*c_1*c_2-72*p2.y*p1.z*c_25*c_2+96*p2.y*c_26*c_2+48*p3.y*c_26*c_2+24*
        c_20*p1.z*c_27+120*c_19*p3.y*p1.z*c_27+360*p2.y*c_21*p1.z*c_27-140*c_22*p1.z*c_27-96*p2.y*c_23*c_27-80*p3.y*c_23*c_27+c_266-60*
        c_19*p3.y*p2.z*c_27+c_483+140*c_22*p2.z*c_27-96*p2.y*c_0*p2.z*c_27-96*p2.y*p1.z*c_1*c_27+112*p2.y*c_25*c_27+80*
        p3.y*c_25*c_27-10*c_20*c_28-60*c_19*p3.y*c_28-210*p2.y*c_21*c_28-120*p2.y*c_0*c_28+c_267-120*p2.y*p1.z*p2.z*c_28+120*p2.y*
        c_1*c_28+c_268-144*p2.y*p1.z*c_134-168*p3.y*p1.z*c_134+c_489+168*p3.y*p2.z*c_134+112*p2.y*c_135+3*c_129*(c_58+p1.z*
        c_269+p2.z*c_113)+3*c_125*(-(p2.y*c_30*c_144)+p3.y*(c_15+2*p2.z*c_157+p1.z*(c_337+c_49)))-5*c_174*(5*p3.y*c_30*c_312+p1.y*
        (c_0+c_9+c_271+c_272+p1.z*c_280)+p2.y*(c_58+c_11+c_10+c_273+c_275))+c_24*(-3*c_19*c_30*c_182-6*p2.y*p3.y*c_30*c_183+9*c_21*c_276+2*
        (c_277-3*c_26-6*c_25*p3.z+c_495+c_278+c_246+10*c_23*c_280-6*c_0*(c_115+c_164+c_43)-p1.z*(c_496+18*c_1*p3.z+27*p2.z*
        c_2+c_281)))-3*c_18*(6*c_19*p3.y*c_30*c_156+c_20*c_30*c_56-2*c_22*(c_58+2*p2.z*c_282+p1.z*(c_48+c_178))-p2.y*c_30*
        (c_283+c_284+c_189+c_195+c_285+c_286-3*c_21*c_187+c_287)+4*p3.y*(c_26+c_23*(c_48+c_3)+c_288+c_158+c_289+c_290+3*c_0*(c_1+c_33+c_7)+p1.z*
        (c_440+c_218+c_195+c_291)))+p1.y*(-3*c_126*c_30*c_190-6*c_20*p3.y*c_30*c_192+15*c_127*(c_0+p1.z*c_157+p2.z*c_274)+12*p2.y*p3.y*
        c_30*c_422-6*c_21*(c_38+c_293+12*c_25*p3.z+c_294+60*p2.z*c_27+c_295+c_23*c_296+3*c_0*p2.z*c_297+p1.z*(c_300+c_189+30*p2.z*
        c_2+c_281))+8*(-5*c_124+c_519+3*c_128*c_299+6*c_132*p3.z+9*c_26*c_2+12*c_25*c_27+15*c_1*c_28+18*p2.z*c_134-14*c_135+3*c_38*
        (c_1+c_17+c_102)+c_23*(c_300+c_218+c_200-14*c_27)+3*c_0*(c_26+c_301+c_302+c_171+c_290)+3*p1.z*(c_132+2*c_26*p3.z+3*c_25*c_2+4*c_1*
        c_27+c_303-5*c_134))+3*c_19*c_30*(-3*c_21*c_304+c_311))+c_40*(-5*c_22*c_30*c_312-c_20*(c_58+c_114+c_118+c_313+c_136+c_163)+c_24*
        (c_64+c_114+c_115+c_98+c_50+c_163)-3*c_19*p3.y*(c_67+c_97+c_1+c_314+c_136+c_254)+c_18*(-3*p2.y*c_30*c_187+3*p3.y*
        (c_0+c_97+c_315+c_98+c_316+c_254))-3*p1.y*(-6*c_38-10*c_21*c_1+6*c_26+6*c_23*c_299-60*c_21*p2.z*p3.z+24*c_25*p3.z-35*c_21*c_2+60*c_1*
        c_2+120*p2.z*c_27-5*c_21*p1.z*c_103+c_19*c_30*c_304+4*p2.y*p3.y*c_30*c_317+6*c_0*(c_1+c_162+c_137)+6*p1.z*(c_25+c_318+c_319+c_291))+18*
        p3.y*(c_38+5*c_23*p3.z+15*c_0*c_2+35*p1.z*c_27-p2.z*(c_25+c_320+15*p2.z*c_2+35*c_27))-3*p2.y*(5*c_21*(c_64+2*p1.z*
        c_274+p3.z*(p2.z+c_270))-6*(c_38+c_321+c_323-p2.z*c_325+c_328))))+p1.x*(15*c_138*p3.x*c_190*c_76+15*c_329*(p3.y*c_30*
        (c_47+c_6+p3.z)+p1.y*c_359+p2.y*(c_58+c_97+c_330+c_32+c_164+c_2))-3*c_69*p3.x*c_333*(5*c_40*c_304+3*(2*c_21*p1.z-8*c_23+3*c_21*
        p2.z-18*c_0*p2.z-24*p1.z*c_1-20*c_25+c_334-12*c_0*p3.z+c_335-24*c_1*p3.z-12*p1.z*c_2-18*p2.z*c_2+c_336+4*p1.y*p3.y*
        c_156+c_18*c_182+2*c_19*c_190+2*p2.y*p3.y*c_192+p1.y*p2.y*(c_13+c_337+c_142)))-c_77*(-10*c_20*c_0-36*c_19*p3.y*c_0-18*p2.y*
        c_21*c_0-6*c_22*c_0+54*p2.y*c_38+72*p3.y*c_38-40*c_20*p1.z*p2.z-60*c_19*p3.y*p1.z*p2.z-24*p2.y*c_21*p1.z*p2.z+c_338+144*
        p2.y*c_23*p2.z+144*p3.y*c_23*p2.z+c_339+180*c_19*p3.y*c_1+60*p2.y*c_21*c_1+12*c_22*c_1+c_340+c_341+c_342-360*p3.y*
        c_26+c_343-30*c_19*p3.y*p1.z*p3.z-21*p2.y*c_21*p1.z*p3.z-9*c_22*p1.z*p3.z+c_344+54*p3.y*c_23*p3.z-180*c_20*p2.z*p3.z-30*
        c_19*p3.y*p2.z*p3.z+12*p2.y*c_21*p2.z*p3.z+9*c_22*p2.z*p3.z+c_345+90*p3.y*c_0*p2.z*p3.z+c_346+36*p3.y*p1.z*c_1*p3.z+360*
        p2.y*c_25*p3.z-180*p3.y*c_25*p3.z-30*c_20*c_2-24*c_19*p3.y*c_2-9*p2.y*c_21*c_2+c_151+36*p3.y*c_0*c_2+c_347+c_348+c_349-72*
        p3.y*c_1*c_2+c_350+18*p3.y*p1.z*c_27+72*p2.y*p2.z*c_27-18*p3.y*p2.z*c_27+c_351+15*c_40*c_352*c_192+c_24*
        (c_95+c_66+c_500+c_222+4*p1.z*(c_48+c_353))-3*p1.y*(c_354+10*c_40*p1.z*p2.z-48*c_23*p2.z+20*c_40*c_1-36*c_0*c_1+30*c_26-10*c_40*p1.z*
        p3.z+24*c_23*p3.z-5*c_40*p2.z*p3.z+54*c_0*p2.z*p3.z+72*p1.z*c_1*p3.z+c_355+c_356+18*c_0*c_2+36*p1.z*p2.z*c_2+36*c_1*
        c_2+12*p1.z*c_27+18*p2.z*c_27+c_357+c_21*(c_497+c_41+c_57+c_44+c_112+c_82)+2*c_19*c_359+2*p2.y*p3.y*(c_217+p1.z*(c_337+p3.z)-2*
        (c_39+c_33+c_2)))+3*c_18*(p3.y*(c_504+c_360+c_315+c_63+c_506+c_46)+p2.y*(c_64+p1.z*(c_337+c_361)+5*(c_118+c_162+c_2))))+p2.x*
        (c_362+6*c_126*p3.y*c_0+6*c_20*c_21*c_0+6*c_19*c_22*c_0+c_363+6*c_131*c_0+c_364-24*c_19*p3.y*c_38-24*p2.y*c_21*c_38-24*
        c_22*c_38+c_365+144*p3.y*c_124+32*c_20*c_23*p2.z-36*c_19*p3.y*c_23*p2.z-24*p2.y*c_21*c_23*p2.z+c_366+96*p3.y*c_128*p2.z+c_367-90*
        c_126*p3.y*c_1-60*c_20*c_21*c_1-36*c_19*c_22*c_1-18*p2.y*c_127*c_1-6*c_131*c_1+c_368+c_369+48*p3.y*c_38*c_1+80*c_20*
        p1.z*c_25+120*c_19*p3.y*p1.z*c_25+48*p2.y*c_21*p1.z*c_25+c_370-64*p2.y*c_23*c_25+c_371+360*c_19*p3.y*c_26+120*p2.y*c_21*
        c_26+24*c_22*c_26-120*p2.y*c_0*c_26-48*p3.y*c_0*c_26-192*p2.y*p1.z*c_132-96*p3.y*p1.z*c_132+c_372-144*p3.y*c_133+c_373+c_374+15*
        c_20*c_21*p1.z*p3.z+15*c_19*c_22*p1.z*p3.z+15*p2.y*c_127*p1.z*p3.z+c_375+c_376-30*c_19*p3.y*c_23*p3.z-42*p2.y*
        c_21*c_23*p3.z-54*c_22*c_23*p3.z+c_377+c_378+90*c_130*p2.z*p3.z+c_379+12*c_20*c_21*p2.z*p3.z-9*c_19*c_22*p2.z*p3.z-18*p2.y*
        c_127*p2.z*p3.z+c_380+c_381-54*c_19*p3.y*c_0*p2.z*p3.z-36*p2.y*c_21*c_0*p2.z*p3.z-18*c_22*c_0*p2.z*p3.z+c_382+72*
        p3.y*c_38*p2.z*p3.z+c_383-36*c_19*p3.y*p1.z*c_1*p3.z+18*p2.y*c_21*p1.z*c_1*p3.z+18*c_22*p1.z*c_1*p3.z+c_384+24*p3.y*c_23*
        c_1*p3.z-360*c_20*c_25*p3.z+c_385+120*p2.y*c_21*c_25*p3.z+54*c_22*c_25*p3.z+c_386-24*p3.y*c_0*c_25*p3.z+c_387-72*p3.y*
        p1.z*c_26*p3.z+144*p2.y*c_132*p3.z+c_388+15*c_130*c_2+24*c_126*p3.y*c_2+27*c_20*c_21*c_2+24*c_19*c_22*c_2+c_177+c_204+c_389+c_390-72*
        c_22*c_0*c_2+c_391+96*p3.y*c_38*c_2+c_392+c_393-36*p2.y*c_21*p1.z*p2.z*c_2+c_394+c_395-180*c_20*c_1*c_2-72*c_19*
        p3.y*c_1*c_2+54*p2.y*c_21*c_1*c_2+72*c_22*c_1*c_2+c_206+c_396+c_397+120*p2.y*c_26*c_2-96*p3.y*c_26*c_2+c_398-42*c_19*p3.y*
        p1.z*c_27-60*p2.y*c_21*p1.z*c_27+c_399+c_400+72*p3.y*c_23*c_27-72*c_20*p2.z*c_27-90*c_19*p3.y*p2.z*c_27-24*p2.y*c_21*p2.z*
        c_27+c_401+c_402+24*p3.y*c_0*p2.z*c_27+c_403-24*p3.y*p1.z*c_1*c_27+96*p2.y*c_25*c_27-72*p3.y*c_25*c_27-18*c_20*c_28-48*
        c_19*p3.y*c_28+c_404+c_405+48*p3.y*c_0*c_28+c_209+72*p2.y*c_1*c_28-48*p3.y*c_1*c_28+c_406+c_407+48*p2.y*p2.z*c_134+c_408+c_409-3*
        c_129*(c_491+c_11+30*p1.z*p3.z+c_136+c_163)+15*c_174*c_317*c_410-3*c_125*(3*p2.y*c_99+p3.y*(c_411+c_118+15*p1.z*
        p3.z+c_136+8*c_2))-c_24*(70*c_38-36*c_40*p1.z*p2.z+80*c_23*p2.z-18*c_40*c_1+c_412+32*p1.z*c_25+c_180+36*c_40*p1.z*p3.z-360*c_23*
        p3.z-9*c_40*p2.z*p3.z-180*c_0*p2.z*p3.z-72*p1.z*c_1*p3.z-18*c_25*p3.z+27*c_40*c_2-180*c_0*c_2-72*p1.z*p2.z*c_2+c_413-72*
        p1.z*c_27-18*p2.z*c_27-18*c_28+3*c_19*(c_95+c_101+c_94+c_33+c_2)+6*p2.y*p3.y*c_415+3*c_21*(c_493+c_118+c_94+c_136+c_222))-9*
        c_40*(c_20*c_12*c_192+c_19*p3.y*(c_64+c_315+c_416+c_436+p1.z*c_417)+2*p3.y*c_30*c_422-2*p2.y*(4*c_38+c_23*(c_6+c_178)+3*
        c_0*c_235+c_21*(c_423+c_35+c_163)-p3.z*c_424+p1.z*(c_244+c_166+c_520+c_21*c_331)))+p1.y*(18*c_127*c_0-120*c_21*c_38+280*c_124-48*
        c_21*c_23*p2.z+192*c_128*p2.z-6*c_127*c_1+120*c_38*c_1+24*c_21*p1.z*c_25+64*c_23*c_25+24*c_21*c_26+24*c_0*c_26-8*c_133+18*
        c_127*p1.z*p3.z-120*c_21*c_23*p3.z-144*c_128*p3.z-15*c_127*p2.z*p3.z-18*c_21*c_0*p2.z*p3.z-120*c_38*p2.z*p3.z+36*c_21*
        p1.z*c_1*p3.z-96*c_23*c_1*p3.z+42*c_21*c_25*p3.z-72*c_0*c_25*p3.z-48*p1.z*c_26*p3.z-24*c_132*p3.z+c_425-54*c_21*c_0*
        c_2-120*c_38*c_2+36*c_21*p1.z*p2.z*c_2-96*c_23*p2.z*c_2+c_426+c_427-48*p1.z*c_25*c_2-24*c_26*c_2+24*c_21*p1.z*c_27-96*c_23*
        c_27+60*c_21*p2.z*c_27-72*c_0*p2.z*c_27-48*p1.z*c_1*c_27-24*c_25*c_27+c_428-72*c_0*c_28+c_429-24*c_1*c_28-48*p1.z*c_134-24*
        p2.z*c_134+c_430+15*c_174*c_4*c_317-9*c_126*c_359+6*c_20*p3.y*(c_58+c_63+2*(-5*c_1+c_42+c_2))-6*p2.y*p3.y*c_30*(-3*c_21*c_156+2*
        (c_212+c_305+c_218+c_172+c_27+6*c_0*c_165+3*p1.z*c_434))+3*c_19*(3*c_21*(c_64+c_57+c_44+c_10+c_2)+2*(c_277+c_431+c_23*
        (c_337+c_432)-10*c_25*p3.z+c_433-3*p2.z*c_27-c_28+c_0*(c_198+c_117+c_82)-2*p1.z*p3.z*c_434))-9*c_40*(2*p2.y*p3.y*c_30*c_156-2*c_21*
        c_12*c_435+c_19*(c_67+c_57+c_416+c_7+2*p1.z*c_34)+2*c_4*(c_292+c_244+c_233+c_195+c_260+c_420+c_421)))+3*c_18*(3*c_19*p3.y*c_30*
        c_159+c_22*(c_514+c_160+c_63+c_112+c_436)+c_20*(c_516+c_66+c_63+c_162+c_2)-3*c_40*(-(p3.y*(c_67+c_41+c_118-3*p1.z*
        p3.z+c_42+c_436))+p2.y*(c_67+c_437+c_57+c_63+c_35+c_2))+2*p3.y*(c_517+c_438+5*c_25*p3.z+c_158+c_531+c_439-10*c_23*c_103+6*c_0*p3.z*
        c_113+3*p1.z*(c_440+c_166+4*p2.z*c_2+c_237))+p2.y*(3*c_21*c_441+2*(c_277+c_431+10*c_23*p3.z+c_501+c_302+2*p2.z*c_27+c_28-6*
        c_0*(c_1+c_35+c_7)+p1.z*(-8*c_25+c_233+c_167+c_442)))))+p3.x*(-6*c_130*c_0+c_443-6*c_20*c_21*c_0-6*c_19*c_22*c_0-6*p2.y*c_127*
        c_0+c_444+24*c_20*c_38+24*c_19*p3.y*c_38+24*p2.y*c_21*c_38+c_445-144*p2.y*c_124+c_446+c_447-15*c_126*p3.y*p1.z*p2.z-15*c_20*
        c_21*p1.z*p2.z-15*c_19*c_22*p1.z*p2.z+c_448+c_449+54*c_20*c_23*p2.z+42*c_19*p3.y*c_23*p2.z+30*p2.y*c_21*c_23*
        p2.z+c_450+c_451+c_452+c_262-24*c_20*c_21*c_1-27*c_19*c_22*c_1-24*p2.y*c_127*c_1-15*c_131*c_1+72*c_20*c_0*c_1+c_453+c_454+c_201-96*p2.y*
        c_38*c_1+c_455+c_456+60*c_19*p3.y*p1.z*c_25+42*p2.y*c_21*p1.z*c_25+c_457-72*p2.y*c_23*c_25+c_458+c_459+48*p2.y*c_21*
        c_26+18*c_22*c_26-48*p2.y*c_0*c_26+c_460+c_461+c_462+c_463+c_464+24*c_19*p3.y*c_23*p3.z+36*p2.y*c_21*c_23*p3.z-32*c_22*c_23*
        p3.z-96*p2.y*c_128*p3.z+c_465+18*c_126*p3.y*p2.z*p3.z+9*c_20*c_21*p2.z*p3.z-12*c_19*c_22*p2.z*p3.z+c_466-90*c_131*p2.z*
        p3.z+18*c_20*c_0*p2.z*p3.z+36*c_19*p3.y*c_0*p2.z*p3.z+54*p2.y*c_21*c_0*p2.z*p3.z+c_467-72*p2.y*c_38*p2.z*p3.z+c_468+36*
        c_19*p3.y*p1.z*c_1*p3.z+c_469+c_470+c_471+c_472+c_473+24*c_19*p3.y*c_25*p3.z+90*p2.y*c_21*c_25*p3.z+72*c_22*c_25*p3.z-24*
        p2.y*c_0*c_25*p3.z+c_474+c_203+c_475-48*p3.y*c_132*p3.z+6*c_130*c_2+18*c_126*p3.y*c_2+36*c_20*c_21*c_2+60*c_19*c_22*
        c_2+90*p2.y*c_127*c_2+c_476+c_477-48*p2.y*c_38*c_2+c_478-18*c_20*p1.z*p2.z*c_2-18*c_19*p3.y*p1.z*p2.z*c_2+36*p2.y*c_21*p1.z*
        p2.z*c_2+c_479-24*p2.y*c_23*p2.z*c_2+c_480-72*c_20*c_1*c_2-54*c_19*p3.y*c_1*c_2+72*p2.y*c_21*c_1*c_2+180*c_22*c_1*c_2+c_207+24*
        p2.y*p1.z*c_25*c_2+c_481+48*p2.y*c_26*c_2-72*p3.y*c_26*c_2+c_482-48*c_19*p3.y*p1.z*c_27-120*p2.y*c_21*p1.z*c_27-80*
        c_22*p1.z*c_27+64*p3.y*c_23*c_27-54*c_20*p2.z*c_27-120*c_19*p3.y*p2.z*c_27+c_483+360*c_22*p2.z*c_27+24*p2.y*c_0*p2.z*
        c_27+c_484+c_485+c_486+72*p2.y*c_25*c_27-96*p3.y*c_25*c_27-24*c_20*c_28-120*c_19*p3.y*c_28-360*p2.y*c_21*c_28+c_487+48*p2.y*
        c_0*c_28+120*p3.y*c_0*c_28+72*p2.y*p1.z*p2.z*c_28+c_488+96*p2.y*c_1*c_28-120*p3.y*c_1*c_28+96*p2.y*p1.z*c_134+192*p3.y*
        p1.z*c_134+c_489-144*p3.y*p2.z*c_134+144*p2.y*c_135+c_490+3*c_129*(c_491+30*p1.z*p2.z+c_39+c_136+c_7)-15*c_174*(p2.y*c_12*
        (c_47+p2.z+c_191)+p3.y*(c_58+c_170+c_1+c_45+c_164+c_492)+p1.y*c_508)+3*c_125*(3*p3.y*c_110+p2.y*(c_411+c_507+8*
        c_1+c_136+c_96))+c_24*(3*c_21*(c_95+c_41+c_1+c_33+c_122)+3*c_19*(c_493+c_41+c_499+c_136+c_96)+6*p2.y*p3.y*(c_414+c_161+c_118+c_33+c_5)+2*
        (35*c_38-9*c_26-20*c_23*(c_306+c_494)-9*c_25*p3.z+c_495-9*p2.z*c_27+c_246-30*c_0*(c_115+c_33+c_7)-4*p1.z*(c_496+c_233+c_200-4*
        c_27)))+c_40*(-3*c_20*c_12*c_304-3*c_19*p3.y*(c_497+c_247+c_115+c_45+c_141+c_248)-10*c_22*(c_0+c_169+c_115+c_94+18*p2.z*
        p3.z+c_498)+c_24*(c_95+c_499+c_500+c_254+4*p1.z*(c_306+c_142))+18*p3.y*(3*c_38+c_26+c_501+c_502+20*p2.z*c_27+c_295+c_23*
        c_510+c_323+p1.z*p2.z*c_322)+3*c_18*(p2.y*(c_504+c_169+c_315+c_505+c_506+c_46)+p3.y*(c_64+c_507+c_39+c_45+c_316+c_254))-3*p1.y*(2*
        c_21*c_508+c_19*(c_497+c_9+c_112+c_102+c_509)+2*p2.y*p3.y*(c_217+p1.z*c_510-2*(c_1+c_33+c_163))+6*(-5*c_38+c_26+4*c_23*
        c_511+c_288+c_158+c_289+c_246+3*c_0*c_518+2*p1.z*p2.z*c_512))-6*p2.y*(c_21*(c_497+c_315+c_136+c_513+5*p1.z*c_113)-3*c_12*
        (c_292+c_25+c_318+c_319+c_326+3*c_0*c_297+2*p1.z*c_322)))-3*c_18*(c_20*(c_514+c_169-8*c_1+c_112+c_43)+3*c_19*p3.y*c_515+c_22*
        (c_516+c_169+c_1+c_162+c_254)+2*p3.y*(c_277+10*c_23*p2.z+c_26+c_301+c_302+c_171+c_290+6*c_0*(c_1+c_17+c_7)+p1.z*(c_300+c_218+c_200+c_336))+p2.y*
        (3*c_21*c_12*c_168+2*(c_517+8*c_26+7*c_25*p3.z+c_158+5*p2.z*c_27+c_532+6*c_0*p2.z*c_103-10*c_23*c_113+3*p1.z*
        (c_199+c_318+c_172+c_173))))+p1.y*(-18*c_20*p3.y*c_12*c_156+9*c_127*c_508-3*c_126*(c_497+c_65+c_140+c_112+c_43)-6*c_21*(c_277-c_26-4*
        c_23*c_511-3*c_25*p3.z+c_433-10*p2.z*c_27+c_290-3*c_0*c_518-2*p1.z*p2.z*c_512)+8*(-35*c_124+c_519+6*c_128*(c_70+c_432)+3*
        c_132*p3.z+3*c_26*c_2+3*c_25*c_27+3*c_1*c_28+3*p2.z*c_134+c_135+15*c_38*(c_1+c_42+c_7)+4*c_23*(c_300+c_166+c_172+c_520)+c_0*(9*
        c_26+9*c_25*p3.z+c_521+9*p2.z*c_27-3*c_28)+6*p1.z*p2.z*(c_26+c_219+c_522+c_224+c_28))-6*p2.y*(c_22*c_525-2*p3.y*c_12*c_528)-3*
        c_19*(3*c_21*c_529+2*(-20*c_38+c_180+c_530+c_521+c_531+c_532-3*c_0*p2.z*c_165-4*c_23*c_533+p1.z*c_534))))))/double(72576);
}

double trig::c62() const{
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p11_4=p1.y*p11_3;
    double p11_5=p1.y*p11_4;
    double p11_6=p1.y*p11_5;
    double p11_7=p1.y*p11_6;
    double p12_2=p1.z*p1.z;
    double p12_3=p1.z*p12_2;
    double p12_4=p1.z*p12_3;
    double p12_5=p1.z*p12_4;
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p21_4=p2.y*p21_3;
    double p21_5=p2.y*p21_4;
    double p21_6=p2.y*p21_5;
    double p21_7=p2.y*p21_6;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p31_4=p3.y*p31_3;
    double p31_5=p3.y*p31_4;
    double p31_6=p3.y*p31_5;
    double p31_7=p3.y*p31_6;
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
    double p30_5=p3.x*p30_4;
    double p30_6=p3.x*p30_5;
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
    double c_0=2*p1.z;
    double c_1=2*p2.z;
    double c_2=p1.z+c_1;
    double c_3=p3.y*c_2;
    double c_4=-p3.z;
    double c_5=p11_2;
    double c_6=p12_3;
    double c_7=p21_2;
    double c_8=p21_3;
    double c_9=p31_2;
    double c_10=p31_3;
    double c_11=p12_2;
    double c_12=p22_2;
    double c_13=p22_3;
    double c_14=p11_3;
    double c_15=p32_2;
    double c_16=p32_3;
    double c_17=-p2.z;
    double c_18=p2.z+c_4;
    double c_19=p1.y*c_18;
    double c_20=p1.z+c_17;
    double c_21=p3.y*c_20;
    double c_22=c_0+p3.z;
    double c_23=p2.y*c_22;
    double c_24=c_1+p3.z;
    double c_25=-(p1.y*c_24);
    double c_26=c_0+p2.z;
    double c_27=p3.y*c_26;
    double c_28=p1.z+c_4;
    double c_29=2*p3.z;
    double c_30=c_21+c_23+c_25;
    double c_31=-c_27;
    double c_32=-p1.z;
    double c_33=c_32+p3.z;
    double c_34=p2.y*c_33;
    double c_35=p2.z+c_29;
    double c_36=p30_2;
    double c_37=p1.z+c_29;
    double c_38=-(p2.y*c_37);
    double c_39=-(48*p3.y*c_6);
    double c_40=-(96*p3.y*c_11*p3.z);
    double c_41=c_3+c_19+c_38;
    double c_42=-(5*p2.z);
    double c_43=p20_2;
    double c_44=c_21+c_19+c_34;
    double c_45=-(3*c_7*p3.y*p2.z);
    double c_46=240*p2.y*c_11*p2.z;
    double c_47=48*p3.y*c_13;
    double c_48=-(2*p3.z);
    double c_49=p2.y*c_28;
    double c_50=3*c_8*p3.z;
    double c_51=6*c_7*p3.y*p3.z;
    double c_52=-(48*p2.y*c_12*p3.z);
    double c_53=96*p3.y*c_12*p3.z;
    double c_54=4*p3.z;
    double c_55=5*p1.z;
    double c_56=240*p1.z*p2.z*p3.z;
    double c_57=3*c_10*p1.z;
    double c_58=-(6*p2.y*c_9*p2.z);
    double c_59=-(3*c_10*p2.z);
    double c_60=3*p2.y*c_9*p3.z;
    double c_61=-(48*p3.y*p1.z*c_15);
    double c_62=-(96*p2.y*p2.z*c_15);
    double c_63=48*p3.y*p2.z*c_15;
    double c_64=-(48*p2.y*c_16);
    double c_65=14*p1.z;
    double c_66=4*p2.z;
    double c_67=3*p1.z;
    double c_68=-1120*c_6;
    double c_69=45*c_36*p2.z;
    double c_70=-(45*c_36*p3.z);
    double c_71=48*c_12*p3.z;
    double c_72=48*p2.z*c_15;
    double c_73=48*c_16;
    double c_74=3*p3.z;
    double c_75=10*p1.z;
    double c_76=p11_4;
    double c_77=p12_5;
    double c_78=p21_4;
    double c_79=p21_5;
    double c_80=p31_4;
    double c_81=p31_5;
    double c_82=p12_4;
    double c_83=p22_4;
    double c_84=p22_5;
    double c_85=p11_5;
    double c_86=p32_4;
    double c_87=p32_5;
    double c_88=p20_3;
    double c_89=p20_4;
    double c_90=-(p1.y*c_35);
    double c_91=c_27+c_49+c_90;
    double c_92=-(320*p2.y*c_6);
    double c_93=192*p2.y*p1.z*c_12;
    double c_94=c_21+c_34;
    double c_95=45*c_36*c_94;
    double c_96=-(3*p2.z);
    double c_97=4*p1.z;
    double c_98=480*c_11*p3.z;
    double c_99=c_97+c_1+c_74;
    double c_100=-(3*p3.z);
    double c_101=c_0+p2.z+c_100;
    double c_102=p1.z+p2.z+c_48;
    double c_103=3*p2.z;
    double c_104=8*p1.z;
    double c_105=9*p2.z;
    double c_106=c_97+c_103+c_29;
    double c_107=3*c_13;
    double c_108=p30_4;
    double c_109=c_3+c_38;
    double c_110=8*p2.z;
    double c_111=9*p3.z;
    double c_112=c_0+c_66+c_74;
    double c_113=-(4*p2.z);
    double c_114=-(9*p3.z);
    double c_115=6*c_15;
    double c_116=10*p3.z;
    double c_117=3*p2.z*p3.z;
    double c_118=2*c_15;
    double c_119=c_67+c_66+c_29;
    double c_120=3*c_6;
    double c_121=10*c_12;
    double c_122=3*c_15;
    double c_123=p21_7;
    double c_124=p21_6;
    double c_125=p31_6;
    double c_126=p31_7;
    double c_127=3*c_12*p3.z;
    double c_128=3*p2.z*c_15;
    double c_129=20*c_6;
    double c_130=30*c_11*p2.z;
    double c_131=6*c_12*p3.z;
    double c_132=9*p2.z*c_15;
    double c_133=2*p2.z*p3.z;
    double c_134=3*c_12;
    double c_135=9*c_12*p3.z;
    double c_136=18*p2.z*c_15;
    double c_137=-(20*c_16);
    double c_138=c_103+c_29;
    double c_139=6*c_11*c_138;
    double c_140=9*p2.z*p3.z;
    double c_141=-(4*c_15);
    double c_142=c_134+c_140+c_141;
    double c_143=3*p1.z*c_142;
    double c_144=c_129+c_107+c_135+c_136+c_137+c_139+c_143;
    double c_145=-(4*p3.z);
    double c_146=-(2*c_15);
    double c_147=-(8*c_16);
    double c_148=-15*c_9;
    double c_149=10*c_11;
    double c_150=p2.z+p3.z;
    double c_151=8*p3.z;
    double c_152=45*p2.z;
    double c_153=5*p2.z*p3.z;
    double c_154=5*p3.z;
    double c_155=2*c_12;
    double c_156=2*p1.z*p3.z;
    double c_157=-c_15;
    double c_158=c_12+c_133+c_157;
    double c_159=4*p2.z*p3.z;
    double c_160=2*c_11;
    double c_161=3*p1.z*p3.z;
    double c_162=3*c_12*c_15;
    double c_163=2*c_77;
    double c_164=p2.z+c_54;
    double c_165=-(10*c_86);
    double c_166=8*p2.z*p3.z;
    double c_167=3*c_11;
    double c_168=15*c_12;
    double c_169=5*p2.z;
    double c_170=15*c_80;
    double c_171=6*c_12*c_15;
    double c_172=c_103+p3.z;
    double c_173=6*c_12;
    double c_174=10*c_15;
    double c_175=5*c_82;
    double c_176=5*c_83;
    double c_177=9*c_12*c_15;
    double c_178=2*c_16;
    double c_179=c_67+c_1+c_54;
    double c_180=9*p1.z;
    double c_181=10*p2.z;
    double c_182=c_180+c_110+c_116;
    double c_183=c_0+c_103+c_54;
    double c_184=c_104+c_105+c_116;
    double c_185=4*c_13*p3.z;
    double c_186=p2.z+c_74;
    double c_187=c_12+c_117+c_115;
    double c_188=3*c_13*p3.z;
    double c_189=10*p2.z*c_16;
    double c_190=10*c_12*c_16;
    double c_191=14*p3.z;
    double c_192=-(3*c_84);
    double c_193=9*c_13*p3.z;
    double c_194=p30_6;
    double c_195=p11_7;
    double c_196=p11_6;
    double c_197=p3.y*c_33;
    double c_198=p1.z+c_1+c_100;
    double c_199=p3.y*c_198;
    double c_200=-c_199;
    double c_201=-(2*p2.z);
    double c_202=15*c_11;
    double c_203=6*p2.z*c_15;
    double c_204=p1.z+c_113+c_74;
    double c_205=8*p1.z*c_150;
    double c_206=c_149+c_134+c_159+c_122+c_205;
    double c_207=16*c_206;
    double c_208=c_148+c_207;
    double c_209=45*c_9*c_28;
    double c_210=3*c_16;
    double c_211=p1.z+c_201+p3.z;
    double c_212=p2.y*c_211;
    double c_213=-(5*p3.z);
    double c_214=c_17+p3.z;
    double c_215=-5*c_9;
    double c_216=3*p1.z*p2.z;
    double c_217=c_160+c_216+c_155+c_156+c_133+c_15;
    double c_218=16*c_217;
    double c_219=c_215+c_218;
    double c_220=16*c_6;
    double c_221=c_66+p3.z;
    double c_222=6*c_11;
    double c_223=15*c_82;
    double c_224=2*c_13*p3.z;
    double c_225=4*p2.z*c_16;
    double c_226=5*c_86;
    double c_227=2*p1.z*p2.z;
    double c_228=c_160+c_227+c_12+c_161+c_133+c_118;
    double c_229=5*c_83*p3.z;
    double c_230=4*c_15;
    double c_231=2*p2.z*c_16;
    double c_232=c_0+c_96+p3.z;
    double c_233=c_7*c_232;
    double c_234=-(8*p2.z);
    double c_235=10*p2.z*p3.z;
    double c_236=15*c_15;
    double c_237=4*p1.z*c_24;
    double c_238=c_167+c_121+c_166+c_122+c_237;
    double c_239=16*c_238;
    double c_240=c_148+c_239;
    double c_241=10*c_6;
    double c_242=4*p1.z*c_35;
    double c_243=c_167+c_134+c_166+c_174+c_242;
    double c_244=-(16*c_9*c_243);
    double c_245=8*c_13*p3.z;
    double c_246=8*p2.z*c_16;
    double c_247=8*c_6*c_150;
    double c_248=c_134+c_159+c_122;
    double c_249=3*c_11*c_248;
    double c_250=2*c_13;
    double c_251=c_250+c_127+c_128+c_178;
    double c_252=4*p1.z*c_251;
    double c_253=c_175+c_176+c_245+c_177+c_246+c_226+c_247+c_249+c_252;
    double c_254=16*c_253;
    double c_255=c_170+c_244+c_254;
    double c_256=p2.z+c_154;
    double c_257=15*c_86;
    double c_258=10*c_16;
    double c_259=c_13+c_127+c_203+c_258;
    double c_260=p1.z+c_66+c_213;
    double c_261=p1.z+c_96+c_29;
    double c_262=c_55+c_234+c_74;
    double c_263=18*c_12*c_15;
    double c_264=20*p2.z*c_16;
    double c_265=c_1+c_74;
    double c_266=c_12+c_133+c_118;
    double c_267=4*c_13;
    double c_268=12*p2.z*c_15;
    double c_269=-15*c_80*c_28;
    double c_270=2*p1.z*c_150;
    double c_271=c_11+c_155+c_117+c_118+c_270;
    double c_272=c_173+c_117+c_15;
    double c_273=10*c_13*p3.z;
    double c_274=3*p2.z*c_16;
    double c_275=p20_5;
    double c_276=30*c_7*p3.y*p2.z;
    double c_277=c_32+p2.z;
    double c_278=48*p3.y*p1.z*p2.z*p3.z;
    double c_279=480*p2.y*c_12*p3.z;
    double c_280=c_75+c_110+c_111;
    double c_281=6*p3.z;
    double c_282=32*p2.y*c_77;
    double c_283=3*c_7*c_10*p2.z;
    double c_284=-(160*p2.y*p1.z*c_83);
    double c_285=-(3*c_8*c_9*p3.z);
    double c_286=-(48*p3.y*c_13*c_15);
    double c_287=48*p3.y*c_11*c_16;
    double c_288=48*p2.y*c_12*c_16;
    double c_289=15*p3.z;
    double c_290=c_55+c_113+c_4;
    double c_291=-3*p1.z;
    double c_292=c_97+c_110+c_281;
    double c_293=160*c_82*p2.z;
    double c_294=-(48*p1.z*c_86);
    double c_295=c_67+c_113+p3.z;
    double c_296=7*p3.z;
    double c_297=c_0+c_17+c_4;
    double c_298=c_291+p2.z+c_29;
    double c_299=c_67+c_1+c_213;
    double c_300=-(3*c_8*c_28);
    double c_301=-(10*c_10*c_183);
    double c_302=c_75+c_105+c_151;
    double c_303=3*p1.z*c_164;
    double c_304=c_222+c_12+c_159+c_174+c_303;
    double c_305=-2*p1.z;
    double c_306=c_305+p2.z+p3.z;
    double c_307=12*c_12*p3.z;
    double c_308=30*p2.z*c_15;
    double c_309=-(40*c_16);
    double c_310=6*p1.z*p2.z*c_164;
    double c_311=c_103+c_151;
    double c_312=3*c_11*c_311;
    double c_313=c_220+c_107+c_307+c_308+c_309+c_310+c_312;
    double c_314=-(8*p3.z);
    double c_315=28*p1.z;
    double c_316=c_0+c_169+c_151;
    double c_317=c_55+c_17+c_145;
    double c_318=c_55+c_96+c_48;
    double c_319=10*c_6*c_35;
    double c_320=c_12+c_133+c_122;
    double c_321=6*c_11*c_320;
    double c_322=2*c_12*p3.z;
    double c_323=4*c_16;
    double c_324=c_13+c_322+c_128+c_323;
    double c_325=3*p1.z*c_324;
    double c_326=c_223+c_83+c_224+c_162+c_225+c_226+c_319+c_321+c_325;
    double c_327=5*c_82*p2.z;
    double c_328=2*c_83*p3.z;
    double c_329=3*c_13*c_15;
    double c_330=4*c_12*c_16;
    double c_331=5*p2.z*c_86;
    double c_332=-(8*c_87);
    double c_333=4*c_6*c_158;
    double c_334=c_107+c_131+c_132+c_147;
    double c_335=c_11*c_334;
    double c_336=-(5*c_86);
    double c_337=c_83+c_224+c_162+c_225+c_336;
    double c_338=2*p1.z*c_337;
    double c_339=c_163+c_327+c_84+c_328+c_329+c_330+c_331+c_332+c_333+c_335+c_338;
    double c_340=6*p1.z;
    double c_341=c_67+p2.z+c_145;
    double c_342=c_67+c_17+c_48;
    double c_343=7*p2.z;
    double c_344=c_103+c_48;
    double c_345=3*c_83;
    double c_346=-(48*p2.y*c_80*c_11*p2.z);
    double c_347=48*p2.y*c_9*c_82*p2.z;
    double c_348=-(144*c_7*c_10*p1.z*c_12);
    double c_349=144*c_7*p3.y*c_6*c_12;
    double c_350=48*c_78*p3.y*c_11*p3.z;
    double c_351=-(48*c_7*p3.y*c_82*p3.z);
    double c_352=144*p2.y*c_9*c_11*c_12*p3.z;
    double c_353=144*c_8*c_9*p1.z*c_15;
    double c_354=-(144*p2.y*c_9*c_6*c_15);
    double c_355=-(144*c_7*p3.y*c_11*p2.z*c_15);
    double c_356=15*c_36;
    double c_357=3*c_9;
    double c_358=-(128*p1.z*p2.z);
    double c_359=-(48*c_15);
    double c_360=p20_6;
    double c_361=-20*c_8*p1.z;
    double c_362=-(3*c_10*p1.z);
    double c_363=-(70*c_8*p2.z);
    double c_364=3*c_10*p2.z;
    double c_365=240*p3.y*p1.z*c_12;
    double c_366=-(1120*p2.y*c_13);
    double c_367=p3.y*c_277;
    double c_368=c_367+c_49;
    double c_369=45*c_36*c_368;
    double c_370=-(3*p2.y*c_9*p3.z);
    double c_371=48*p2.y*c_11*p3.z;
    double c_372=240*p2.y*p1.z*p2.z*p3.z;
    double c_373=144*p3.y*p1.z*p2.z*p3.z;
    double c_374=48*p2.y*p1.z*c_15;
    double c_375=48*p3.y*p1.z*c_15;
    double c_376=-(48*p3.y*p2.z*c_15);
    double c_377=48*p2.y*c_16;
    double c_378=c_104+c_181+c_111;
    double c_379=-(45*c_36*p2.z);
    double c_380=-(48*c_16);
    double c_381=p3.y*c_298;
    double c_382=c_97+c_181+c_296;
    double c_383=c_97+c_105+c_191;
    double c_384=2*p1.z*c_256;
    double c_385=c_167+c_12+c_153+c_236+c_384;
    double c_386=128*c_6;
    double c_387=-8*p1.z;
    double c_388=c_291+c_1+p3.z;
    double c_389=p2.y*c_388;
    double c_390=c_97+c_343+c_116;
    double c_391=15*c_12*p3.z;
    double c_392=45*p2.z*c_15;
    double c_393=-(70*c_16);
    double c_394=p2.z+c_116;
    double c_395=3*c_11*c_394;
    double c_396=c_12+c_153+c_174;
    double c_397=3*p1.z*c_396;
    double c_398=c_241+c_107+c_391+c_392+c_393+c_395+c_397;
    double c_399=p2.y+p3.y;
    double c_400=3*c_7;
    double c_401=4*p2.y*p3.y;
    double c_402=3*c_5;
    double c_403=8*p2.y*p3.y;
    double c_404=c_79*c_33;
    double c_405=15*p2.z;
    double c_406=28*p3.z;
    double c_407=c_387+c_169+c_74;
    double c_408=-5*p1.z;
    double c_409=c_75+c_343+c_54;
    double c_410=c_97+p2.z+c_213;
    double c_411=c_97+c_17+c_100;
    double c_412=p2.z+c_48;
    double c_413=48*c_13*c_15;
    double c_414=3*c_83*p3.z;
    double c_415=6*c_13*c_15;
    double c_416=15*p2.z*c_86;
    double c_417=-(28*c_87);
    double c_418=c_82*c_164;
    double c_419=c_12+c_117+c_230;
    double c_420=c_6*c_419;
    double c_421=c_11*p2.z*c_187;
    double c_422=c_83+c_188+c_171+c_189+c_165;
    double c_423=p1.z*c_422;
    double c_424=c_163+c_84+c_414+c_415+c_190+c_416+c_417+c_418+c_420+c_421+c_423;
    double c_425=4*c_6*c_186;
    double c_426=3*c_11*c_187;
    double c_427=2*p1.z*c_259;
    double c_428=c_175+c_83+c_188+c_171+c_189+c_257+c_425+c_426+c_427;
    double c_429=-2*c_79*p1.z;
    double c_430=-(c_81*p1.z);
    double c_431=3*p2.y*c_80*p2.z;
    double c_432=c_81*p2.z;
    double c_433=-(3*c_7*c_10*p3.z);
    double c_434=-(p2.y*c_80*p3.z);
    double c_435=48*p3.y*c_6*c_15;
    double c_436=96*p2.y*p1.z*c_12*c_15;
    double c_437=-(48*p3.y*c_12*c_16);
    double c_438=16*p3.y*p1.z*c_86;
    double c_439=48*p2.y*p2.z*c_86;
    double c_440=-(16*p3.y*p2.z*c_86);
    double c_441=16*p2.y*c_87;
    double c_442=15*c_108*c_94;
    double c_443=3*c_36*c_18;
    double c_444=-4*p1.z;
    double c_445=c_387+c_103+c_154;
    double c_446=c_75+c_66+c_296;
    double c_447=p3.y*c_102;
    double c_448=-c_447;
    double c_449=-c_9;
    double c_450=-(32*c_84);
    double c_451=15*c_108*c_18;
    double c_452=c_80*p3.z;
    double c_453=-(96*c_11*p2.z*c_15);
    double c_454=-(48*c_11*c_16);
    double c_455=-(16*c_87);
    double c_456=c_97+c_42+p3.z;
    double c_457=c_444+c_103+p3.z;
    double c_458=p1.y*c_214;
    double c_459=p2.y*c_37;
    double c_460=15*p1.z;
    double c_461=28*p2.z;
    double c_462=c_55+c_1+c_151;
    double c_463=p1.z+c_103+c_145;
    double c_464=c_9*c_101;
    double c_465=c_55+c_103+c_314;
    double c_466=p1.z+c_42+c_54;
    double c_467=15*c_83;
    double c_468=10*c_13;
    double c_469=c_468+c_131+c_128+c_16;
    double c_470=2*p2.z*c_86;
    double c_471=c_0+c_103+c_213;
    double c_472=-(9*p2.z);
    double c_473=12*p2.z*p3.z;
    double c_474=c_180+c_181+c_151;
    double c_475=-(5*c_16);
    double c_476=9*c_11*c_150;
    double c_477=c_155+c_117+c_118;
    double c_478=9*p1.z*c_477;
    double c_479=5*c_13;
    double c_480=-(3*p2.z*c_15);
    double c_481=c_479+c_127+c_480+c_475;
    return (45*p10_7*(c_31+c_23+2*p1.y*c_214)+45*p20_7*(c_3+2*p2.y*c_28+c_25)+45*c_360*p3.x*c_41+p10_5*(84*c_5*p2.y*p1.z+24*
        p1.y*c_7*p1.z+4*c_8*p1.z-84*c_5*p3.y*p1.z-24*p1.y*c_9*p1.z-4*c_10*p1.z-224*p2.y*c_6+224*p3.y*c_6-14*c_14*p2.z+6*c_5*p2.y*
        p2.z+6*p1.y*c_7*p2.z+2*c_8*p2.z-45*c_5*p3.y*p2.z-15*p1.y*p2.y*p3.y*p2.z+c_45-15*p1.y*c_9*p2.z-3*p2.y*c_9*
        p2.z+c_59+1344*p1.y*c_11*p2.z+96*p2.y*c_11*p2.z+720*p3.y*c_11*p2.z+384*p1.y*p1.z*c_12+96*p2.y*p1.z*c_12+c_365+64*p1.y*c_13+32*
        p2.y*c_13+c_47+14*c_14*p3.z+45*c_5*p2.y*p3.z+15*p1.y*c_7*p3.z+c_50-6*c_5*p3.y*p3.z+15*p1.y*p2.y*p3.y*p3.z+3*c_7*
        p3.y*p3.z-6*p1.y*c_9*p3.z+c_60-2*c_10*p3.z-1344*p1.y*c_11*p3.z-720*p2.y*c_11*p3.z+c_40-240*p2.y*p1.z*p2.z*p3.z+240*
        p3.y*p1.z*p2.z*p3.z+c_52+48*p3.y*c_12*p3.z-384*p1.y*p1.z*c_15-240*p2.y*p1.z*c_15-96*p3.y*p1.z*c_15-48*p2.y*p2.z*
        c_15+c_63-64*p1.y*c_16+c_64-32*p3.y*c_16+45*p2.x*p3.x*c_44+45*c_43*c_30-45*c_36*c_91)+45*p10_6*(p2.x*c_30+p3.x*(c_31+c_34+p1.y*
        c_35))+c_275*(14*c_8*p1.z+45*c_7*p3.y*p1.z+15*p2.y*c_9*p1.z+c_57-64*p2.y*c_6+c_39+84*c_7*p3.y*p2.z+24*p2.y*c_9*p2.z+4*
        c_10*p2.z-384*p2.y*c_11*p2.z-240*p3.y*c_11*p2.z-1344*p2.y*p1.z*c_12-720*p3.y*p1.z*c_12-224*p3.y*c_13-14*c_8*
        p3.z+c_51+6*p2.y*c_9*p3.z+2*c_10*p3.z-48*p3.y*c_11*p3.z-240*p3.y*p1.z*p2.z*p3.z+1344*p2.y*c_12*p3.z+c_53+c_61+384*p2.y*
        p2.z*c_15+96*p3.y*p2.z*c_15+64*p2.y*c_16+32*p3.y*c_16-c_14*c_112+45*c_36*c_109-3*c_5*(c_197+p2.y*(c_0+c_110+c_154))+p1.y*
        (-32*c_6+c_69-96*c_11*p2.z-96*p1.z*c_12+224*c_13+15*p2.y*p3.y*c_28+3*c_9*c_28+c_70+48*c_11*p3.z+c_56+720*c_12*p3.z+48*p1.z*
        c_15+240*p2.z*c_15+c_73-3*c_7*(c_0+c_461+c_289)))+c_89*p3.x*(-45*c_8*p1.z+15*c_7*p3.y*p1.z+21*p2.y*c_9*p1.z+9*c_10*p1.z+48*
        p2.y*c_6+c_39+c_363+c_276+30*p2.y*c_9*p2.z+10*c_10*p2.z+c_46-192*p3.y*c_11*p2.z+720*p2.y*p1.z*c_12-480*p3.y*p1.z*
        c_12+c_366-320*p3.y*c_13+3*c_14*c_18-20*c_8*p3.z+12*p2.y*c_9*p3.z+8*c_10*p3.z+c_371+c_40+c_372-384*p3.y*p1.z*p2.z*
        p3.z+c_279+c_374-144*p3.y*p1.z*c_15+480*p2.y*p2.z*c_15+192*p3.y*p2.z*c_15+160*p2.y*c_16+128*p3.y*c_16+45*c_36*c_41-3*c_5*
        (c_448+p2.y*c_466)-3*p1.y*(-c_464+5*c_7*c_261+p2.y*p3.y*(c_291+c_42+c_151)+16*c_18*(c_11+5*p1.z*p2.z+c_168+c_156+c_235+c_122)))+p10_4*
        (45*c_43*p3.x*c_44+45*c_88*c_30+p3.x*(-3*c_8*p1.z-3*c_7*p3.y*p1.z-3*p2.y*c_9*p1.z-10*c_10*p1.z+720*p2.y*c_6+320*
        p3.y*c_6+c_45+c_58-9*c_10*p2.z+c_46+480*p3.y*c_11*p2.z+48*p2.y*p1.z*c_12+192*p3.y*p1.z*c_12+c_47-15*c_5*(c_27+p2.y*
        c_342)-45*c_36*(c_27+c_49)+c_50+c_51+9*p2.y*c_9*p3.z-8*c_10*p3.z-240*p2.y*c_11*p3.z-144*p2.y*p1.z*p2.z*p3.z+384*p3.y*p1.z*
        p2.z*p3.z+c_52+c_53-336*p2.y*p1.z*c_15-192*p3.y*p1.z*c_15+c_62+144*p3.y*p2.z*c_15-144*p2.y*c_16-128*p3.y*c_16+5*c_14*
        (c_65+c_105+c_54)-p1.y*(c_68+c_379+720*c_11*p2.z+240*p1.z*c_12+48*c_13+3*p2.y*p3.y*c_465+3*c_7*c_317-90*c_36*p3.z+c_98+c_56+c_71+480*
        p1.z*c_15+c_72+160*c_16+3*c_9*c_409))+p2.x*(10*c_8*p1.z+3*c_7*p3.y*p1.z+3*p2.y*c_9*p1.z+c_57+c_92-720*p3.y*
        c_6+8*c_8*p2.z-9*c_7*p3.y*p2.z+c_58+c_59+240*p3.y*c_11*p2.z+c_93+336*p3.y*p1.z*c_12+128*p2.y*c_13+144*p3.y*c_13+9*c_8*
        p3.z+c_51+c_60-480*p2.y*c_11*p3.z-240*p3.y*c_11*p3.z-384*p2.y*p1.z*p2.z*p3.z+c_373-144*p2.y*c_12*p3.z+c_53-192*p2.y*
        p1.z*c_15+c_61+c_62+c_63+c_64-5*c_14*(c_65+c_66+c_111)+c_95+15*c_5*(p3.y*(c_67+c_201+c_4)+c_23)+p1.y*(c_68+c_69+480*c_11*p2.z+480*
        p1.z*c_12+160*c_13+3*c_9*c_290+c_70+720*c_11*p3.z+c_56+c_71+240*p1.z*c_15+c_72+c_73+3*p2.y*p3.y*c_262+3*c_7*c_446)))+p10_3*
        (-70*c_76*p2.y*p1.z-40*c_14*c_7*p1.z-20*c_5*c_8*p1.z-8*p1.y*c_78*p1.z-2*c_79*p1.z+70*c_76*p3.y*p1.z+40*c_14*c_9*
        p1.z+20*c_5*c_10*p1.z+8*p1.y*c_80*p1.z+2*c_81*p1.z-224*p2.y*c_77+224*p3.y*c_77-14*c_85*p2.z-20*c_76*p2.y*p2.z-20*c_14*
        c_7*p2.z-16*c_5*c_8*p2.z-10*p1.y*c_78*p2.z-4*c_79*p2.z+45*c_76*p3.y*p2.z+30*c_14*p2.y*p3.y*p2.z+18*c_5*c_7*p3.y*p2.z+9*
        p1.y*c_8*p3.y*p2.z+3*c_78*p3.y*p2.z+30*c_14*c_9*p2.z+18*c_5*p2.y*c_9*p2.z+9*p1.y*c_7*c_9*p2.z+3*c_8*c_9*p2.z+18*c_5*
        c_10*p2.z+9*p1.y*p2.y*c_10*p2.z+c_283+9*p1.y*c_80*p2.z+c_431+3*c_81*p2.z-1120*p1.y*c_82*p2.z-320*p2.y*c_82*p2.z-720*
        p3.y*c_82*p2.z-640*p1.y*c_6*c_12-320*p2.y*c_6*c_12-480*p3.y*c_6*c_12-320*p1.y*c_11*c_13-256*p2.y*c_11*c_13-288*p3.y*c_11*
        c_13-128*p1.y*p1.z*c_83+c_284-144*p3.y*p1.z*c_83-32*p1.y*c_84-64*p2.y*c_84-48*p3.y*c_84+14*c_85*p3.z-45*c_76*p2.y*
        p3.z-30*c_14*c_7*p3.z-18*c_5*c_8*p3.z-9*p1.y*c_78*p3.z-3*c_79*p3.z+20*c_76*p3.y*p3.z-30*c_14*p2.y*p3.y*p3.z-18*c_5*c_7*
        p3.y*p3.z-9*p1.y*c_8*p3.y*p3.z-3*c_78*p3.y*p3.z+20*c_14*c_9*p3.z-18*c_5*p2.y*c_9*p3.z-9*p1.y*c_7*c_9*p3.z+c_285+16*c_5*
        c_10*p3.z-9*p1.y*p2.y*c_10*p3.z+c_433+10*p1.y*c_80*p3.z-3*p2.y*c_80*p3.z+4*c_81*p3.z+1120*p1.y*c_82*p3.z+720*p2.y*
        c_82*p3.z+320*p3.y*c_82*p3.z+480*p2.y*c_6*p2.z*p3.z-480*p3.y*c_6*p2.z*p3.z+288*p2.y*c_11*c_12*p3.z-288*p3.y*c_11*c_12*
        p3.z+144*p2.y*p1.z*c_13*p3.z-144*p3.y*p1.z*c_13*p3.z+48*p2.y*c_83*p3.z-48*p3.y*c_83*p3.z+640*p1.y*c_6*c_15+480*
        p2.y*c_6*c_15+320*p3.y*c_6*c_15+288*p2.y*c_11*p2.z*c_15-288*p3.y*c_11*p2.z*c_15+144*p2.y*p1.z*c_12*c_15-144*p3.y*p1.z*c_12*
        c_15+48*p2.y*c_13*c_15+c_286+320*p1.y*c_11*c_16+288*p2.y*c_11*c_16+256*p3.y*c_11*c_16+144*p2.y*p1.z*p2.z*c_16-144*p3.y*
        p1.z*p2.z*c_16+c_288+c_437+128*p1.y*p1.z*c_86+144*p2.y*p1.z*c_86+160*p3.y*p1.z*c_86+c_439-48*p3.y*p2.z*c_86+32*p1.y*
        c_87+48*p2.y*c_87+64*p3.y*c_87+45*c_88*p3.x*c_44+3*p2.x*p3.x*(c_356+10*c_5+c_400+c_401+c_357+8*p1.y*c_399-160*c_11+c_358-48*
        c_12-128*p1.z*p3.z-64*p2.z*p3.z+c_359)*c_44+45*c_89*c_30-45*c_108*c_91+c_43*(16*c_8*p1.z+9*c_7*p3.y*p1.z+6*p2.y*c_9*
        p1.z+c_57+c_92-480*p3.y*c_6+20*c_8*p2.z-18*c_7*p3.y*p2.z-9*p2.y*c_9*p2.z+c_59-192*p2.y*c_11*p2.z-96*p3.y*c_11*p2.z+c_93+288*
        p3.y*p1.z*c_12+320*p2.y*c_13+288*p3.y*c_13+18*c_8*p3.z+9*c_7*p3.y*p3.z+c_60-288*p2.y*c_11*p3.z-192*p3.y*c_11*
        p3.z-432*p2.y*p1.z*p2.z*p3.z+c_278-288*p2.y*c_12*p3.z+144*p3.y*c_12*p3.z-144*p2.y*p1.z*c_15+c_61-144*p2.y*p2.z*
        c_15+c_63+c_64-10*c_14*c_99+c_95+6*c_5*(p3.y*c_318-p2.y*c_24)+p1.y*(-640*c_6+c_69+384*p1.z*c_12+256*c_13+3*c_9*(c_97+c_96+c_4)+c_70+c_98+384*
        p1.z*p2.z*p3.z+144*c_12*p3.z+192*p1.z*c_15+96*p2.z*c_15+c_73+3*p2.y*p3.y*(c_104+c_472+p3.z)+6*c_7*c_99))+c_36*
        (-3*c_7*p3.y*c_101-9*p2.y*c_9*c_102+c_300+10*c_14*c_106-2*c_10*c_184+48*p2.y*c_28*(c_149+c_12+c_117+c_115+4*p1.z*c_186)+6*
        c_5*(p3.y*c_35+p2.y*(c_408+c_1+c_74))+16*p3.y*c_144-p1.y*(3*p2.y*p3.y*(c_104+p2.z+c_114)+3*c_7*c_411+6*c_9*c_106+16*(-40*
        c_6+c_130+c_107+c_131+c_132+16*c_16+12*p1.z*c_266))))+c_88*(14*c_79*p1.z-45*c_78*p3.y*p1.z-30*c_8*c_9*p1.z-18*c_7*c_10*
        p1.z-9*p2.y*c_80*p1.z-3*c_81*p1.z+c_282+48*p3.y*c_77-70*c_78*p3.y*p2.z-40*c_8*c_9*p2.z-20*c_7*c_10*p2.z-8*p2.y*c_80*p2.z-2*
        c_81*p2.z+128*p2.y*c_82*p2.z+144*p3.y*c_82*p2.z+320*p2.y*c_6*c_12+288*p3.y*c_6*c_12+640*p2.y*c_11*c_13+480*p3.y*c_11*
        c_13+1120*p2.y*p1.z*c_83+720*p3.y*p1.z*c_83-224*p3.y*c_84-14*c_79*p3.z-20*c_78*p3.y*p3.z-20*c_8*c_9*p3.z-16*c_7*c_10*
        p3.z-10*p2.y*c_80*p3.z-4*c_81*p3.z+48*p3.y*c_82*p3.z+144*p3.y*c_6*p2.z*p3.z+288*p3.y*c_11*c_12*p3.z+480*p3.y*p1.z*c_13*
        p3.z-1120*p2.y*c_83*p3.z-320*p3.y*c_83*p3.z+c_435+144*p3.y*c_11*p2.z*c_15+288*p3.y*p1.z*c_12*c_15-640*p2.y*c_13*
        c_15-320*p3.y*c_13*c_15+c_287+144*p3.y*p1.z*p2.z*c_16-320*p2.y*c_12*c_16-256*p3.y*c_12*c_16+48*p3.y*p1.z*c_86-128*p2.y*
        p2.z*c_86-160*p3.y*p2.z*c_86-32*p2.y*c_87-64*p3.y*c_87+c_85*c_99+45*c_108*c_109+c_76*(3*p3.y*c_33+p2.y*c_280)+c_14*(c_443+9*
        p2.y*p3.y*c_33+3*c_9*c_33+2*c_7*c_378)+c_5*(-18*c_7*p3.y*c_28+9*p2.y*c_9*c_33+3*c_10*c_33+10*c_8*c_112-3*c_36*(c_200+p2.y*
        c_204))+p1.y*(20*c_78*p1.z-30*c_8*p3.y*p1.z-18*c_7*c_9*p1.z-9*p2.y*c_10*p1.z-3*c_80*p1.z+64*c_77+70*c_78*p2.z+c_293+256*
        c_6*c_12+320*c_11*c_13+320*p1.z*c_83+224*c_84+45*c_108*c_18+45*c_78*p3.z+30*c_8*p3.y*p3.z+18*c_7*c_9*p3.z+9*p2.y*c_10*
        p3.z+3*c_80*p3.z-48*c_82*p3.z-144*c_6*p2.z*p3.z-288*c_11*c_12*p3.z-480*p1.z*c_13*p3.z-720*c_83*p3.z-48*c_6*c_15-144*c_11*
        p2.z*c_15-288*p1.z*c_12*c_15-480*c_13*c_15+c_454-144*p1.z*p2.z*c_16-288*c_12*c_16+c_294-144*p2.z*c_86-48*c_87-3*c_36*(-(p2.y*
        p3.y*(p1.z+c_110+c_114))-3*c_9*c_102+2*c_7*(c_0+c_42+c_74)+16*c_18*(c_11+4*p1.z*p2.z+c_121+c_161+c_473+c_115)))-2*c_36*(3*
        c_7*p3.y*c_37+5*c_8*c_119-c_10*c_182+8*p3.y*(c_120+c_476+c_478+4*c_481)-p2.y*(3*c_9*c_119+8*(c_120+6*c_11*c_24+3*p1.z*
        (c_121+c_166+c_122)+8*(-5*c_13+c_128+c_178)))))+p3.x*(45*c_123*p1.z+45*c_124*p3.y*p1.z+45*c_79*c_9*p1.z+45*c_78*c_10*p1.z+45*c_8*
        c_80*p1.z+45*c_7*c_81*p1.z+45*p2.y*c_125*p1.z-90*c_126*p1.z-48*c_79*c_6-48*c_78*p3.y*c_6-48*c_8*c_9*c_6-48*c_7*c_10*c_6-48*
        p2.y*c_80*c_6+64*c_81*c_6+48*c_8*c_77+48*c_7*p3.y*c_77+48*p2.y*c_9*c_77-32*c_10*c_77+90*c_123*p2.z+90*c_124*p3.y*p2.z+90*
        c_79*c_9*p2.z+90*c_78*c_10*p2.z+90*c_8*c_80*p2.z+90*c_7*c_81*p2.z+90*p2.y*c_125*p2.z+90*c_126*p2.z-240*c_79*c_11*p2.z-192*
        c_78*p3.y*c_11*p2.z-144*c_8*c_9*c_11*p2.z-96*c_7*c_10*c_11*p2.z+c_346+144*c_8*c_82*p2.z+96*c_7*p3.y*c_82*p2.z+c_347-720*
        c_79*p1.z*c_12-480*c_78*p3.y*p1.z*c_12-288*c_8*c_9*p1.z*c_12+c_348-48*p2.y*c_80*p1.z*c_12+288*c_8*c_6*c_12+c_349+48*
        p2.y*c_9*c_6*c_12-224*c_79*c_13-320*c_78*p3.y*c_13-320*c_8*c_9*c_13-256*c_7*c_10*c_13-160*p2.y*c_80*c_13-64*c_81*c_13+480*c_8*
        c_11*c_13+192*c_7*p3.y*c_11*c_13+48*p2.y*c_9*c_11*c_13+720*c_8*p1.z*c_83+240*c_7*p3.y*p1.z*c_83+48*p2.y*c_9*p1.z*c_83-224*
        c_8*c_84+96*c_7*p3.y*c_84+96*p2.y*c_9*c_84+32*c_10*c_84-45*c_195*c_26+45*c_196*(p2.y*c_20-p3.y*c_26)-48*c_79*c_11*p3.z-96*
        c_78*p3.y*c_11*p3.z-144*c_8*c_9*c_11*p3.z-192*c_7*c_10*c_11*p3.z-240*p2.y*c_80*c_11*p3.z+384*c_81*c_11*p3.z+48*c_8*c_82*
        p3.z+96*c_7*p3.y*c_82*p3.z+144*p2.y*c_9*c_82*p3.z-128*c_10*c_82*p3.z-240*c_79*p1.z*p2.z*p3.z-384*c_78*p3.y*p1.z*p2.z*
        p3.z-432*c_8*c_9*p1.z*p2.z*p3.z-384*c_7*c_10*p1.z*p2.z*p3.z-240*p2.y*c_80*p1.z*p2.z*p3.z+144*c_8*c_6*p2.z*p3.z+192*
        c_7*p3.y*c_6*p2.z*p3.z+144*p2.y*c_9*c_6*p2.z*p3.z+96*c_79*c_12*p3.z-192*c_8*c_9*c_12*p3.z-384*c_7*c_10*c_12*p3.z-480*
        p2.y*c_80*c_12*p3.z-384*c_81*c_12*p3.z+288*c_8*c_11*c_12*p3.z+288*c_7*p3.y*c_11*c_12*p3.z+c_352+480*c_8*p1.z*c_13*p3.z+384*
        c_7*p3.y*p1.z*c_13*p3.z+144*p2.y*c_9*p1.z*c_13*p3.z-320*c_8*c_83*p3.z+192*p2.y*c_9*c_83*p3.z+128*c_10*c_83*p3.z-48*c_79*
        p1.z*c_15-144*c_78*p3.y*p1.z*c_15-288*c_8*c_9*p1.z*c_15-480*c_7*c_10*p1.z*c_15-720*p2.y*c_80*p1.z*c_15+1344*c_81*p1.z*
        c_15+48*c_8*c_6*c_15+144*c_7*p3.y*c_6*c_15+288*p2.y*c_9*c_6*c_15-320*c_10*c_6*c_15+96*c_79*p2.z*c_15+192*c_78*p3.y*p2.z*
        c_15+192*c_8*c_9*p2.z*c_15-480*p2.y*c_80*p2.z*c_15-1344*c_81*p2.z*c_15+144*c_8*c_11*p2.z*c_15+288*c_7*p3.y*c_11*p2.z*c_15+288*
        p2.y*c_9*c_11*p2.z*c_15+288*c_8*p1.z*c_12*c_15+432*c_7*p3.y*p1.z*c_12*c_15+288*p2.y*c_9*p1.z*c_12*c_15-320*c_8*c_13*
        c_15-192*c_7*p3.y*c_13*c_15+192*p2.y*c_9*c_13*c_15+320*c_10*c_13*c_15+32*c_79*c_16+128*c_78*p3.y*c_16+320*c_8*c_9*c_16+640*c_7*
        c_10*c_16+1120*p2.y*c_80*c_16+48*c_8*c_11*c_16+192*c_7*p3.y*c_11*c_16+480*p2.y*c_9*c_11*c_16-640*c_10*c_11*c_16+144*c_8*p1.z*
        p2.z*c_16+384*c_7*p3.y*p1.z*p2.z*c_16+480*p2.y*c_9*p1.z*p2.z*c_16-256*c_8*c_12*c_16-384*c_7*p3.y*c_12*c_16+640*c_10*
        c_12*c_16+48*c_8*p1.z*c_86+240*c_7*p3.y*p1.z*c_86+720*p2.y*c_9*p1.z*c_86-1120*c_10*p1.z*c_86-160*c_8*p2.z*c_86-480*c_7*p3.y*
        p2.z*c_86-480*p2.y*c_9*p2.z*c_86+1120*c_10*p2.z*c_86-64*c_8*c_87-384*c_7*p3.y*c_87-1344*p2.y*c_9*c_87-45*c_194*(2*p3.y*
        c_20+c_459+c_90)+c_85*(45*c_7*c_20+45*p2.y*p3.y*c_20-45*c_9*c_26+16*(14*c_6+c_107+c_11*(c_152-6*p3.z)+c_127+c_128-2*c_16+3*
        p1.z*(5*c_12+c_153+c_146)))+c_76*(45*c_8*c_20+45*c_7*p3.y*c_20-45*c_10*c_26+16*p3.y*(c_129+c_130+c_107+c_131+c_132+c_147+12*
        p1.z*c_158)-3*p2.y*c_20*(c_148+16*(c_202+c_134+c_133+c_15+5*p1.z*c_24)))+c_14*(45*c_78*c_20+45*c_8*p3.y*c_20-45*c_80*c_26+16*
        c_9*c_144+16*(14*c_77+c_192-5*c_82*(c_105+c_145)-3*c_83*p3.z-3*c_13*c_15-3*c_12*c_16-3*p2.z*c_86+4*c_87-10*c_6*(c_134+c_117+c_146)-2*
        c_11*(9*c_13+c_135+c_132+c_147)-p1.z*(9*c_83+c_193+c_177+9*p2.z*c_16+c_165))-3*p2.y*p3.y*c_20*c_208-3*c_7*c_20*(c_148+16*
        (c_149+c_173+c_117+c_15+4*p1.z*c_172)))+c_108*(-(c_8*c_179)+c_14*c_183-3*c_7*p3.y*c_462+3*c_5*(p2.y*c_277+p3.y*c_316)+2*
        p3.y*c_20*(-7*c_9+32*(c_11+c_12+6*p2.z*p3.z+21*c_15+p1.z*(p2.z+c_281)))+p1.y*(-3*c_7*c_20-15*p2.y*p3.y*c_20+c_9*(c_340+c_152+84*
        p3.z)+16*(2*c_6-3*c_13-3*c_11*c_412-15*c_12*p3.z-45*p2.z*c_15-14*c_16-3*p1.z*(c_12+c_153+c_146)))+p2.y*(-3*c_9*
        (c_460+c_1+c_406)+16*(c_120+3*c_11*c_256+3*p1.z*(c_12+c_153+c_236)-2*(c_13+c_127+c_128-7*c_16))))+c_5*(45*c_79*c_20+45*c_78*p3.y*
        c_20-45*c_81*c_26+16*c_10*c_313-9*c_7*p3.y*c_20*c_219-48*p3.y*c_339-3*c_8*c_20*(c_148+16*(c_222+c_121+c_159+c_15+3*p1.z*c_221))+3*
        p2.y*c_20*(c_170-48*c_9*c_228+16*(c_223+c_176+c_185+c_162+c_231+c_86+10*c_6*c_24+6*c_11*(c_134+c_133+c_15)+3*p1.z*(c_267+c_127+2*
        p2.z*c_15+c_16))))+p1.y*(45*c_124*c_20+45*c_79*p3.y*c_20-45*c_125*c_26+16*c_80*c_398-48*c_9*c_424-3*c_8*p3.y*c_20*
        c_240-3*c_78*c_20*(c_148+16*(c_167+c_168+c_153+c_15+2*p1.z*(c_169+p3.z)))+3*c_7*c_20*(c_170-48*c_9*c_271+16*(c_175+c_467+c_273+c_171+c_274+c_86+4*
        c_6*c_172+3*c_11*c_272+2*p1.z*c_469))+3*p2.y*p3.y*c_20*c_255)+c_36*(-14*c_81*c_20-c_85*c_106+c_79*c_119+10*
        c_7*c_10*c_179+c_78*p3.y*c_474+2*c_8*c_9*c_182+5*p2.y*c_80*(c_180+c_66+c_191)+c_5*(3*c_8*c_20+9*c_7*p3.y*c_20+18*p2.y*c_9*
        c_20+c_301)+c_76*(3*p2.y*c_20-p3.y*c_302)+c_14*(3*c_7*c_20+9*p2.y*p3.y*c_20-2*c_9*c_184)-32*p3.y*(c_77+4*c_82*p3.z+10*c_6*
        c_15+20*c_11*c_16+35*p1.z*c_86-p2.z*(c_83+c_185+10*c_12*c_15+c_264+35*c_86))-16*p2.y*(3*c_77+3*c_82*c_186+3*c_6*c_187+3*c_11*
        c_259+3*p1.z*(c_83+c_188+c_171+c_189+c_257)-2*(2*c_84+c_229+8*c_13*c_15+c_190+10*p2.z*c_86+7*c_87))+p1.y*(3*c_78*c_20+9*c_8*
        p3.y*c_20+18*c_7*c_9*c_20+30*p2.y*c_10*c_20-5*c_80*c_383-16*(4*c_77+c_192-9*c_83*p3.z-18*c_13*c_15-30*c_12*c_16-45*p2.z*c_86+14*
        c_87+c_82*(-3*p2.z+c_116)+c_6*(-3*c_12-9*p2.z*p3.z+16*c_15)-c_11*(c_107+c_135+c_136+c_137)-p1.z*(c_345+c_193+c_263+30*p2.z*
        c_16-20*c_86)))))+p2.x*(-45*c_194*p2.y*p1.z-9*c_108*c_8*p1.z+15*c_36*c_79*p1.z+90*c_123*p1.z+45*c_194*p3.y*p1.z-21*c_108*
        c_7*p3.y*p1.z+21*c_36*c_78*p3.y*p1.z-45*c_124*p3.y*p1.z-15*c_108*p2.y*c_9*p1.z+18*c_36*c_8*c_9*p1.z-45*c_79*c_9*p1.z+45*
        c_108*c_10*p1.z+6*c_36*c_7*c_10*p1.z-45*c_78*c_10*p1.z-15*c_36*p2.y*c_80*p1.z-45*c_8*c_80*p1.z-45*c_36*c_81*p1.z-45*
        c_7*c_81*p1.z-45*p2.y*c_125*p1.z-45*c_126*p1.z+48*c_108*p2.y*c_6-64*c_79*c_6-48*c_108*p3.y*c_6+48*c_78*p3.y*c_6+48*c_8*
        c_9*c_6+48*c_7*c_10*c_6+48*p2.y*c_80*c_6+48*c_81*c_6-48*c_36*p2.y*c_77+32*c_8*c_77+48*c_36*p3.y*c_77-48*c_7*p3.y*c_77-48*p2.y*
        c_9*c_77-48*c_10*c_77-8*c_108*c_8*p2.z+24*c_36*c_79*p2.z+90*c_194*p3.y*p2.z-12*c_108*c_7*p3.y*p2.z+30*c_36*c_78*p3.y*
        p2.z+24*c_36*c_8*c_9*p2.z+20*c_108*c_10*p2.z+12*c_36*c_7*c_10*p2.z-6*c_36*c_81*p2.z+96*c_108*p2.y*c_11*p2.z-384*c_79*c_11*
        p2.z-48*c_108*p3.y*c_11*p2.z+240*c_78*p3.y*c_11*p2.z+192*c_8*c_9*c_11*p2.z+144*c_7*c_10*c_11*p2.z+96*p2.y*c_80*c_11*p2.z+48*
        c_81*c_11*p2.z-96*c_36*p2.y*c_82*p2.z+128*c_8*c_82*p2.z+48*c_36*p3.y*c_82*p2.z-144*c_7*p3.y*c_82*p2.z-96*p2.y*c_9*
        c_82*p2.z-48*c_10*c_82*p2.z+144*c_108*p2.y*p1.z*c_12-1344*c_79*p1.z*c_12-48*c_108*p3.y*p1.z*c_12+720*c_78*p3.y*p1.z*
        c_12+480*c_8*c_9*p1.z*c_12+288*c_7*c_10*p1.z*c_12+144*p2.y*c_80*p1.z*c_12+48*c_81*p1.z*c_12-144*c_36*p2.y*c_6*c_12+320*c_8*c_6*
        c_12+48*c_36*p3.y*c_6*c_12-288*c_7*p3.y*c_6*c_12-144*p2.y*c_9*c_6*c_12-48*c_10*c_6*c_12-128*c_108*p2.y*c_13-160*c_108*p3.y*
        c_13-1120*c_78*p3.y*c_13-640*c_8*c_9*c_13-320*c_7*c_10*c_13-128*p2.y*c_80*c_13-32*c_81*c_13-192*c_36*p2.y*c_11*c_13+640*c_8*
        c_11*c_13+48*c_36*p3.y*c_11*c_13-480*c_7*p3.y*c_11*c_13-192*p2.y*c_9*c_11*c_13-48*c_10*c_11*c_13-240*c_36*p2.y*p1.z*c_83+1120*
        c_8*p1.z*c_83+48*c_36*p3.y*p1.z*c_83-720*c_7*p3.y*p1.z*c_83-240*p2.y*c_9*p1.z*c_83-48*c_10*p1.z*c_83+384*c_36*p2.y*
        c_84+96*c_36*p3.y*c_84+1344*c_7*p3.y*c_84+384*p2.y*c_9*c_84+64*c_10*c_84-90*c_194*p2.y*p3.z-10*c_108*c_8*p3.z+6*c_36*c_79*
        p3.z-90*c_123*p3.z-30*c_108*c_7*p3.y*p3.z+12*c_36*c_78*p3.y*p3.z-90*c_124*p3.y*p3.z-30*c_108*p2.y*c_9*p3.z+12*c_36*c_8*
        c_9*p3.z-90*c_79*c_9*p3.z+70*c_108*c_10*p3.z-90*c_78*c_10*p3.z-30*c_36*p2.y*c_80*p3.z-90*c_8*c_80*p3.z-84*c_36*c_81*
        p3.z-90*c_7*c_81*p3.z-90*p2.y*c_125*p3.z-90*c_126*p3.z+192*c_108*p2.y*c_11*p3.z-240*c_108*p3.y*c_11*p3.z+c_350+96*c_8*c_9*
        c_11*p3.z+144*c_7*c_10*c_11*p3.z+192*p2.y*c_80*c_11*p3.z+240*c_81*c_11*p3.z-96*c_36*p2.y*c_82*p3.z+144*c_36*p3.y*c_82*
        p3.z+c_351-96*p2.y*c_9*c_82*p3.z-144*c_10*c_82*p3.z+384*c_108*p2.y*p1.z*p2.z*p3.z-240*c_108*p3.y*p1.z*p2.z*p3.z+240*
        c_78*p3.y*p1.z*p2.z*p3.z+384*c_8*c_9*p1.z*p2.z*p3.z+432*c_7*c_10*p1.z*p2.z*p3.z+384*p2.y*c_80*p1.z*p2.z*p3.z+240*c_81*
        p1.z*p2.z*p3.z-192*c_36*p2.y*c_6*p2.z*p3.z+144*c_36*p3.y*c_6*p2.z*p3.z-144*c_7*p3.y*c_6*p2.z*p3.z-192*p2.y*c_9*
        c_6*p2.z*p3.z-144*c_10*c_6*p2.z*p3.z-192*c_108*p2.y*c_12*p3.z+1344*c_79*c_12*p3.z-480*c_108*p3.y*c_12*p3.z+480*c_78*p3.y*
        c_12*p3.z-192*c_7*c_10*c_12*p3.z-192*p2.y*c_80*c_12*p3.z-96*c_81*c_12*p3.z-288*c_36*p2.y*c_11*c_12*p3.z+144*c_36*p3.y*
        c_11*c_12*p3.z-288*c_7*p3.y*c_11*c_12*p3.z-288*p2.y*c_9*c_11*c_12*p3.z-144*c_10*c_11*c_12*p3.z-384*c_36*p2.y*p1.z*c_13*
        p3.z+144*c_36*p3.y*p1.z*c_13*p3.z-480*c_7*p3.y*p1.z*c_13*p3.z-384*p2.y*c_9*p1.z*c_13*p3.z-144*c_10*p1.z*c_13*p3.z+480*
        c_36*p2.y*c_83*p3.z-1120*c_8*c_83*p3.z+192*c_36*p3.y*c_83*p3.z+480*c_7*p3.y*c_83*p3.z+480*p2.y*c_9*c_83*p3.z+160*c_10*
        c_83*p3.z+480*c_108*p2.y*p1.z*c_15-720*c_108*p3.y*p1.z*c_15+48*c_78*p3.y*p1.z*c_15+c_353+288*c_7*c_10*p1.z*c_15+480*p2.y*
        c_80*p1.z*c_15+720*c_81*p1.z*c_15-144*c_36*p2.y*c_6*c_15+288*c_36*p3.y*c_6*c_15-48*c_7*p3.y*c_6*c_15+c_354-288*c_10*c_6*
        c_15+384*c_79*p2.z*c_15-480*c_108*p3.y*p2.z*c_15+480*c_78*p3.y*p2.z*c_15+384*c_8*c_9*p2.z*c_15+192*c_7*c_10*p2.z*c_15-96*
        c_81*p2.z*c_15-288*c_36*p2.y*c_11*p2.z*c_15+288*c_36*p3.y*c_11*p2.z*c_15+c_355-288*p2.y*c_9*c_11*p2.z*c_15-288*c_10*c_11*
        p2.z*c_15-432*c_36*p2.y*p1.z*c_12*c_15+288*c_36*p3.y*p1.z*c_12*c_15-288*c_7*p3.y*p1.z*c_12*c_15-432*p2.y*c_9*p1.z*c_12*
        c_15-288*c_10*p1.z*c_12*c_15+384*c_36*p2.y*c_13*c_15-640*c_8*c_13*c_15+192*c_36*p3.y*c_13*c_15+384*p2.y*c_9*c_13*c_15+256*
        c_10*c_13*c_15+320*c_108*p2.y*c_16+64*c_79*c_16+1120*c_108*p3.y*c_16+160*c_78*p3.y*c_16+256*c_8*c_9*c_16+320*c_7*c_10*c_16+320*
        p2.y*c_80*c_16+224*c_81*c_16-192*c_36*p2.y*c_11*c_16+480*c_36*p3.y*c_11*c_16-48*c_7*p3.y*c_11*c_16-192*p2.y*c_9*c_11*c_16-480*
        c_10*c_11*c_16-384*c_36*p2.y*p1.z*p2.z*c_16+480*c_36*p3.y*p1.z*p2.z*c_16-144*c_7*p3.y*p1.z*p2.z*c_16-384*p2.y*c_9*
        p1.z*p2.z*c_16-480*c_10*p1.z*p2.z*c_16+192*c_36*p2.y*c_12*c_16-320*c_8*c_12*c_16-192*c_7*p3.y*c_12*c_16+192*p2.y*c_9*c_12*
        c_16+320*c_10*c_12*c_16-240*c_36*p2.y*p1.z*c_86+720*c_36*p3.y*p1.z*c_86-48*c_7*p3.y*p1.z*c_86-240*p2.y*c_9*p1.z*c_86-720*
        c_10*p1.z*c_86-128*c_8*p2.z*c_86-480*c_36*p3.y*p2.z*c_86-192*c_7*p3.y*p2.z*c_86+320*c_10*p2.z*c_86-96*c_36*p2.y*c_87-32*
        c_8*c_87-1344*c_36*p3.y*c_87-96*c_7*p3.y*c_87-96*p2.y*c_9*c_87+224*c_10*c_87+45*c_195*c_22+45*c_196*(c_197+c_23)+c_85*(-224*
        c_6-3*c_36*p2.z+96*c_11*p2.z+96*p1.z*c_12+32*c_13-45*p2.y*p3.y*c_28-45*c_9*c_28+3*c_36*p3.z-720*c_11*p3.z-240*p1.z*p2.z*
        p3.z-48*c_12*p3.z-240*p1.z*c_15-48*p2.z*c_15+c_380+45*c_7*c_22)+c_76*(-45*c_7*p3.y*c_28+45*c_8*c_22+3*c_36*(c_200+c_212)+3*
        p3.y*c_28*(c_148+16*(c_202+c_12+c_133+c_122+5*p1.z*c_35))-p2.y*(c_209+16*(c_129-8*c_13+30*c_11*p3.z+c_135+c_203+c_210-12*
        p1.z*(c_12-2*p2.z*p3.z+c_157))))+c_14*(-45*c_80*p1.z+480*c_9*c_6-224*c_77+192*c_9*c_11*p2.z-320*c_82*p2.z+48*c_9*p1.z*
        c_12-320*c_6*c_12-256*c_11*c_13-160*p1.z*c_83-64*c_84-45*c_8*p3.y*c_28+3*c_108*c_18+45*c_80*p3.z+96*c_9*c_11*p3.z+720*c_82*
        p3.z-48*c_9*p1.z*p2.z*p3.z+480*c_6*p2.z*p3.z-48*c_9*c_12*p3.z+288*c_11*c_12*p3.z+144*p1.z*c_13*p3.z+48*c_83*p3.z-288*c_9*
        p1.z*c_15+480*c_6*c_15-144*c_9*p2.z*c_15+288*c_11*p2.z*c_15+144*p1.z*c_12*c_15+c_413-288*c_9*c_16+288*c_11*c_16+144*p1.z*
        p2.z*c_16+48*c_12*c_16+144*p1.z*c_86+48*p2.z*c_86+48*c_87+45*c_78*c_22+3*c_36*(-3*c_9*c_102+c_233+p2.y*p3.y*c_204)+3*p2.y*
        p3.y*c_28*c_208-c_7*(c_209+16*(c_129-20*c_13+18*c_12*p3.z+c_132+c_210+6*c_11*c_265+p1.z*(-12*c_12+27*p2.z*p3.z+9*c_15))))+c_5*
        (-45*c_78*p3.y*c_28+45*c_79*c_22-3*c_108*(-(p3.y*c_260)+c_212)+3*c_36*(-2*c_10*c_299+c_8*c_295+3*c_7*p3.y*c_211+6*p2.y*c_9*
        c_214)+9*c_7*p3.y*c_28*c_219-c_8*(c_209+16*(c_220-40*c_13+30*c_12*p3.z+c_268+c_210+6*p1.z*p3.z*c_221+3*c_11*(c_110+c_74)))-3*
        p3.y*c_28*(c_170-16*c_9*c_304+16*c_326)+3*p2.y*(c_269+48*c_9*c_28*c_228+16*(c_163-8*c_84+5*c_82*p3.z+c_229+4*c_13*c_15+3*
        c_12*c_16+c_470+c_87+c_6*(-4*c_12+c_166+c_230)+c_11*(-8*c_13+c_135+c_203+c_210)+2*p1.z*(-5*c_83+c_185+c_162+c_231+c_86))))+p1.y*
        (-45*c_79*p3.y*c_28+45*c_194*c_18+45*c_124*c_22-3*c_108*(-5*c_9*c_198+c_233+p2.y*p3.y*(c_67+c_234+c_154)+16*c_18*(c_11+c_227+c_134+5*
        p1.z*p3.z+c_235+c_236))+3*c_8*p3.y*c_28*c_240-c_78*(c_209+16*(c_241-70*c_13+45*c_12*p3.z+15*p2.z*c_15+c_210+3*c_11*
        (c_181+p3.z)+3*p1.z*(c_121+c_153+c_15)))-3*p2.y*p3.y*c_28*c_255-3*c_9*c_28*(c_170-16*c_9*c_385+16*c_428)+3*c_36*(-2*p2.y*
        c_10*c_260-5*c_80*c_101+c_78*c_456+3*c_7*c_9*c_261+c_8*p3.y*c_262+16*c_18*(c_82+c_176+12*c_13*p3.z+c_263+c_264+c_257+c_6*c_265+3*
        c_11*c_266+p1.z*(c_267+c_135+c_268+c_258)))+3*c_7*(c_269+48*c_9*c_28*c_271+16*(c_163-28*c_84+15*c_83*p3.z+10*c_13*c_15+6*c_12*
        c_16+3*p2.z*c_86+c_87+c_82*c_221+c_6*(4*c_12+c_117+c_15)+c_11*p3.z*c_272+p1.z*(-10*c_83+c_273+c_171+c_274+c_86)))))+p10_2*
        (45*c_89*p3.x*c_44+9*c_43*p3.x*(5*c_36+2*c_5+3*p1.y*p2.y+2*c_7+2*p1.y*p3.y+2*p2.y*p3.y+c_9-32*c_11-48*p1.z*p2.z-32*
        c_12-32*p1.z*p3.z-32*p2.z*p3.z-16*c_15)*c_44+45*c_275*c_30-45*p30_5*c_91-c_88*(c_361-18*c_7*p3.y*p1.z-9*p2.y*c_9*p1.z+c_362+256*
        p2.y*c_6+288*p3.y*c_6-40*c_8*p2.z+c_276+12*p2.y*c_9*p2.z+c_364+384*p2.y*c_11*p2.z+288*p3.y*c_11*p2.z-96*p3.y*p1.z*
        c_12-640*p2.y*c_13-480*p3.y*c_13+c_369-30*c_8*p3.z-12*c_7*p3.y*p3.z+c_370+144*p2.y*c_11*p3.z+144*p3.y*c_11*p3.z+384*
        p2.y*p1.z*p2.z*p3.z+c_278+c_279-192*p3.y*c_12*p3.z+96*p2.y*p1.z*c_15+c_375+192*p2.y*p2.z*c_15+c_376+c_377+2*c_14*
        c_280-p1.y*(-320*c_6+c_69-192*c_11*p2.z+192*p1.z*c_12+320*c_13+c_9*(c_180-6*p2.z+c_100)+3*p2.y*p3.y*(c_180+c_234+c_4)+c_70+288*
        c_11*p3.z+432*p1.z*p2.z*p3.z+288*c_12*p3.z+144*p1.z*c_15+144*p2.z*c_15+c_73+6*c_7*c_22)+3*c_5*(3*p3.y*c_306+p2.y*c_292))+3*
        p2.x*(c_429-c_78*p3.y*p1.z-c_8*c_9*p1.z-c_7*c_10*p1.z-p2.y*c_80*p1.z+c_430+c_282+240*p3.y*c_77-8*c_79*p2.z+5*c_78*
        p3.y*p2.z+4*c_8*c_9*p2.z+c_283+2*p2.y*c_80*p2.z+c_432+80*p3.y*c_82*p2.z-64*p2.y*c_6*c_12-32*p3.y*c_6*c_12-128*p2.y*c_11*
        c_13-96*p3.y*c_11*c_13+c_284-112*p3.y*p1.z*c_83-128*p2.y*c_84-80*p3.y*c_84-5*c_79*p3.z-4*c_78*p3.y*p3.z+c_285-2*c_7*c_10*
        p3.z+c_434+80*p2.y*c_82*p3.z+160*p3.y*c_82*p3.z+128*p2.y*c_6*p2.z*p3.z+32*p3.y*c_6*p2.z*p3.z+144*p2.y*c_11*c_12*
        p3.z-48*p3.y*c_11*c_12*p3.z+128*p2.y*p1.z*c_13*p3.z-80*p3.y*p1.z*c_13*p3.z+80*p2.y*c_83*p3.z-64*p3.y*c_83*p3.z+64*
        p2.y*c_6*c_15+96*p3.y*c_6*c_15+96*p2.y*c_11*p2.z*c_15+c_436-48*p3.y*p1.z*c_12*c_15+64*p2.y*c_13*c_15+c_286+48*p2.y*c_11*
        c_16+c_287+64*p2.y*p1.z*p2.z*c_16-16*p3.y*p1.z*p2.z*c_16+c_288-32*p3.y*c_12*c_16+32*p2.y*p1.z*c_86+c_438+32*p2.y*p2.z*
        c_86+c_440+c_441+c_85*(c_315+c_1+c_289)+c_442-2*c_14*(c_9*(c_55+c_201+c_100)+p2.y*p3.y*c_290+3*c_36*c_214+c_7*c_24)+5*c_76*
        (c_23+c_381)-c_5*(6*p2.y*c_9*c_20+c_36*(6*p2.y*c_20-3*p3.y*c_101)+3*c_10*c_297+3*c_7*p3.y*c_232+c_8*c_292)-3*c_36*(c_7*p3.y*
        c_102+c_8*c_28-2*p2.y*(c_220+c_9*c_214+8*c_11*c_24+8*p1.z*(c_12+c_157)-8*p3.z*c_266)+2*p3.y*c_20*(c_449+8*c_228))+p1.y*(-3*c_80*
        p1.z+448*c_77+2*c_80*p2.z+c_293-64*c_11*c_13-64*p1.z*c_83+c_450+c_8*p3.y*(c_291+c_110+c_213)+c_451+c_452-240*c_82*p3.z-160*
        c_6*p2.z*p3.z-96*c_11*c_12*p3.z-48*p1.z*c_13*p3.z-16*c_83*p3.z-160*c_6*c_15+c_453-48*p1.z*c_12*c_15-16*c_13*c_15-96*c_11*
        c_16-48*p1.z*p2.z*c_16-16*c_12*c_16+c_294-16*p2.z*c_86+c_455-p2.y*c_10*c_295-3*c_7*c_9*c_211-c_78*c_382-3*c_36*(p2.y*p3.y*
        c_28+c_7*c_297+c_9*c_298+16*c_18*c_228)))+p30_3*(-6*p2.y*c_9*c_299-3*c_7*p3.y*c_341+c_300+c_301+2*c_14*c_302+48*p2.y*c_28*
        c_304+c_5*(9*p2.y*c_306+6*p3.y*c_183)+16*p3.y*c_313-p1.y*(6*c_9*c_26+3*p2.y*p3.y*(c_180+c_17+c_314)+c_7*(c_180-3*c_35)+16*
        (-20*c_6+c_107+6*c_11*c_344+c_135+c_136+20*c_16+3*p1.z*(c_134+c_140+c_230))))-3*p3.x*(-(p2.y*c_80*c_260)-c_7*c_10*c_463-c_8*
        c_9*c_198-c_78*p3.y*c_102+c_404+c_85*(c_315+c_405+c_29)-c_81*c_316+5*c_76*(c_27+c_389)-2*c_14*(p2.y*p3.y*c_317+c_7*c_318+c_9*
        c_35)+16*p2.y*c_28*c_326+16*p3.y*c_339-c_5*(3*p2.y*c_9*c_101+6*c_7*p3.y*c_28+2*c_10*c_183+c_8*(c_340-3*c_150))-p1.y*(p2.y*
        c_10*(c_67+c_169+c_314)+c_8*p3.y*c_341+c_78*c_342+3*c_7*c_9*c_102+c_80*c_390+16*(-28*c_77+c_84+5*c_82*c_344+c_83*p3.z+c_13*
        c_15+c_12*c_16+p2.z*c_86+2*c_87+10*c_6*p2.z*c_150+c_11*(6*c_13+c_131+c_203+c_323)+p1.z*(c_345+c_188+c_162+c_274+4*c_86)))))+p1.x*
        (-1120*c_76*p2.y*c_6-640*c_14*c_7*c_6-320*c_5*c_8*c_6-128*p1.y*c_78*c_6-32*c_79*c_6+1120*c_76*p3.y*c_6+640*c_14*c_9*c_6+320*
        c_5*c_10*c_6+128*p1.y*c_80*c_6+32*c_81*c_6+1344*c_5*p2.y*c_77+384*p1.y*c_7*c_77+64*c_8*c_77-1344*c_5*p3.y*c_77-384*p1.y*
        c_9*c_77-64*c_10*c_77-90*c_195*p2.z-90*c_196*p2.y*p2.z-90*c_85*c_7*p2.z-90*c_76*c_8*p2.z-90*c_14*c_78*p2.z-90*c_5*c_79*p2.z-90*
        p1.y*c_124*p2.z-90*c_123*p2.z+45*c_196*p3.y*p2.z+45*c_85*p2.y*p3.y*p2.z+45*c_76*c_7*p3.y*p2.z+45*c_14*c_8*p3.y*
        p2.z+45*c_5*c_78*p3.y*p2.z+45*p1.y*c_79*p3.y*p2.z+45*c_124*p3.y*p2.z+45*c_85*c_9*p2.z+45*c_76*p2.y*c_9*p2.z+45*c_14*c_7*
        c_9*p2.z+45*c_5*c_8*c_9*p2.z+45*p1.y*c_78*c_9*p2.z+45*c_79*c_9*p2.z+45*c_76*c_10*p2.z+45*c_14*p2.y*c_10*p2.z+45*c_5*c_7*
        c_10*p2.z+45*p1.y*c_8*c_10*p2.z+45*c_78*c_10*p2.z+45*c_14*c_80*p2.z+45*c_5*p2.y*c_80*p2.z+45*p1.y*c_7*c_80*p2.z+45*c_8*
        c_80*p2.z+45*c_5*c_81*p2.z+45*p1.y*p2.y*c_81*p2.z+45*c_7*c_81*p2.z+45*p1.y*c_125*p2.z+45*p2.y*c_125*p2.z+45*c_126*
        p2.z+1344*c_85*c_11*p2.z+480*c_76*p2.y*c_11*p2.z-192*c_5*c_8*c_11*p2.z-192*p1.y*c_78*c_11*p2.z-96*c_79*c_11*p2.z-720*c_76*
        p3.y*c_11*p2.z-480*c_14*p2.y*p3.y*c_11*p2.z-288*c_5*c_7*p3.y*c_11*p2.z-144*p1.y*c_8*p3.y*c_11*p2.z-48*c_78*p3.y*c_11*
        p2.z-480*c_14*c_9*c_11*p2.z-288*c_5*p2.y*c_9*c_11*p2.z-144*p1.y*c_7*c_9*c_11*p2.z-48*c_8*c_9*c_11*p2.z-288*c_5*c_10*c_11*
        p2.z-144*p1.y*p2.y*c_10*c_11*p2.z-48*c_7*c_10*c_11*p2.z-144*p1.y*c_80*c_11*p2.z+c_346-48*c_81*c_11*p2.z-1120*c_14*c_82*
        p2.z+480*c_5*p2.y*c_82*p2.z+480*p1.y*c_7*c_82*p2.z+160*c_8*c_82*p2.z+720*c_5*p3.y*c_82*p2.z+240*p1.y*p2.y*p3.y*c_82*
        p2.z+48*c_7*p3.y*c_82*p2.z+240*p1.y*c_9*c_82*p2.z+c_347+48*c_10*c_82*p2.z+384*c_85*p1.z*c_12+480*c_76*p2.y*p1.z*c_12+384*
        c_14*c_7*p1.z*c_12+192*c_5*c_8*p1.z*c_12-96*c_79*p1.z*c_12-240*c_76*p3.y*p1.z*c_12-384*c_14*p2.y*p3.y*p1.z*c_12-432*c_5*
        c_7*p3.y*p1.z*c_12-384*p1.y*c_8*p3.y*p1.z*c_12-240*c_78*p3.y*p1.z*c_12-192*c_14*c_9*p1.z*c_12-288*c_5*p2.y*c_9*p1.z*
        c_12-288*p1.y*c_7*c_9*p1.z*c_12-192*c_8*c_9*p1.z*c_12-144*c_5*c_10*p1.z*c_12-192*p1.y*p2.y*c_10*p1.z*c_12+c_348-96*p1.y*
        c_80*p1.z*c_12-96*p2.y*c_80*p1.z*c_12-48*c_81*p1.z*c_12-640*c_14*c_6*c_12+384*p1.y*c_7*c_6*c_12+256*c_8*c_6*c_12+480*c_5*
        p3.y*c_6*c_12+384*p1.y*p2.y*p3.y*c_6*c_12+c_349+192*p1.y*c_9*c_6*c_12+96*p2.y*c_9*c_6*c_12+48*c_10*c_6*c_12+64*c_85*c_13+160*
        c_76*p2.y*c_13+256*c_14*c_7*c_13+320*c_5*c_8*c_13+320*p1.y*c_78*c_13+224*c_79*c_13-48*c_76*p3.y*c_13-144*c_14*p2.y*p3.y*
        c_13-288*c_5*c_7*p3.y*c_13-480*p1.y*c_8*p3.y*c_13-720*c_78*p3.y*c_13-48*c_14*c_9*c_13-144*c_5*p2.y*c_9*c_13-288*p1.y*c_7*c_9*
        c_13-480*c_8*c_9*c_13-48*c_5*c_10*c_13-144*p1.y*p2.y*c_10*c_13-288*c_7*c_10*c_13-48*p1.y*c_80*c_13-144*p2.y*c_80*c_13-48*
        c_81*c_13-320*c_14*c_11*c_13-192*c_5*p2.y*c_11*c_13+192*p1.y*c_7*c_11*c_13+320*c_8*c_11*c_13+288*c_5*p3.y*c_11*c_13+432*p1.y*
        p2.y*p3.y*c_11*c_13+288*c_7*p3.y*c_11*c_13+144*p1.y*c_9*c_11*c_13+144*p2.y*c_9*c_11*c_13+48*c_10*c_11*c_13-128*c_14*p1.z*
        c_83-192*c_5*p2.y*p1.z*c_83+320*c_8*p1.z*c_83+144*c_5*p3.y*p1.z*c_83+384*p1.y*p2.y*p3.y*p1.z*c_83+480*c_7*p3.y*p1.z*
        c_83+96*p1.y*c_9*p1.z*c_83+192*p2.y*c_9*p1.z*c_83+48*c_10*p1.z*c_83-32*c_14*c_84-96*c_5*p2.y*c_84-96*p1.y*c_7*c_84+224*c_8*
        c_84+48*c_5*p3.y*c_84+240*p1.y*p2.y*p3.y*c_84+720*c_7*p3.y*c_84+48*p1.y*c_9*c_84+240*p2.y*c_9*c_84+48*c_10*c_84+90*c_195*
        p3.z-45*c_196*p2.y*p3.z-45*c_85*c_7*p3.z-45*c_76*c_8*p3.z-45*c_14*c_78*p3.z-45*c_5*c_79*p3.z-45*p1.y*c_124*p3.z-45*c_123*
        p3.z+90*c_196*p3.y*p3.z-45*c_85*p2.y*p3.y*p3.z-45*c_76*c_7*p3.y*p3.z-45*c_14*c_8*p3.y*p3.z-45*c_5*c_78*p3.y*p3.z-45*
        p1.y*c_79*p3.y*p3.z-45*c_124*p3.y*p3.z+90*c_85*c_9*p3.z-45*c_76*p2.y*c_9*p3.z-45*c_14*c_7*c_9*p3.z-45*c_5*c_8*c_9*
        p3.z-45*p1.y*c_78*c_9*p3.z-45*c_79*c_9*p3.z+90*c_76*c_10*p3.z-45*c_14*p2.y*c_10*p3.z-45*c_5*c_7*c_10*p3.z-45*p1.y*c_8*c_10*
        p3.z-45*c_78*c_10*p3.z+90*c_14*c_80*p3.z-45*c_5*p2.y*c_80*p3.z-45*p1.y*c_7*c_80*p3.z-45*c_8*c_80*p3.z+90*c_5*c_81*p3.z-45*
        p1.y*p2.y*c_81*p3.z-45*c_7*c_81*p3.z+90*p1.y*c_125*p3.z-45*p2.y*c_125*p3.z+90*c_126*p3.z-1344*c_85*c_11*p3.z+720*
        c_76*p2.y*c_11*p3.z+480*c_14*c_7*c_11*p3.z+288*c_5*c_8*c_11*p3.z+144*p1.y*c_78*c_11*p3.z+48*c_79*c_11*p3.z-480*c_76*p3.y*
        c_11*p3.z+480*c_14*p2.y*p3.y*c_11*p3.z+288*c_5*c_7*p3.y*c_11*p3.z+144*p1.y*c_8*p3.y*c_11*p3.z+c_350+288*c_5*p2.y*c_9*
        c_11*p3.z+144*p1.y*c_7*c_9*c_11*p3.z+48*c_8*c_9*c_11*p3.z+192*c_5*c_10*c_11*p3.z+144*p1.y*p2.y*c_10*c_11*p3.z+48*c_7*c_10*
        c_11*p3.z+192*p1.y*c_80*c_11*p3.z+48*p2.y*c_80*c_11*p3.z+96*c_81*c_11*p3.z+1120*c_14*c_82*p3.z-720*c_5*p2.y*c_82*
        p3.z-240*p1.y*c_7*c_82*p3.z-48*c_8*c_82*p3.z-480*c_5*p3.y*c_82*p3.z-240*p1.y*p2.y*p3.y*c_82*p3.z+c_351-480*p1.y*c_9*c_82*
        p3.z-48*p2.y*c_9*c_82*p3.z-160*c_10*c_82*p3.z+240*c_76*p2.y*p1.z*p2.z*p3.z+384*c_14*c_7*p1.z*p2.z*p3.z+432*c_5*c_8*
        p1.z*p2.z*p3.z+384*p1.y*c_78*p1.z*p2.z*p3.z+240*c_79*p1.z*p2.z*p3.z-240*c_76*p3.y*p1.z*p2.z*p3.z+144*c_5*c_7*p3.y*
        p1.z*p2.z*p3.z+192*p1.y*c_8*p3.y*p1.z*p2.z*p3.z+144*c_78*p3.y*p1.z*p2.z*p3.z-384*c_14*c_9*p1.z*p2.z*p3.z-144*c_5*
        p2.y*c_9*p1.z*p2.z*p3.z+48*c_8*c_9*p1.z*p2.z*p3.z-432*c_5*c_10*p1.z*p2.z*p3.z-192*p1.y*p2.y*c_10*p1.z*p2.z*p3.z-48*
        c_7*c_10*p1.z*p2.z*p3.z-384*p1.y*c_80*p1.z*p2.z*p3.z-144*p2.y*c_80*p1.z*p2.z*p3.z-240*c_81*p1.z*p2.z*p3.z-480*c_5*
        p2.y*c_6*p2.z*p3.z-384*p1.y*c_7*c_6*p2.z*p3.z-144*c_8*c_6*p2.z*p3.z+480*c_5*p3.y*c_6*p2.z*p3.z-48*c_7*p3.y*c_6*p2.z*
        p3.z+384*p1.y*c_9*c_6*p2.z*p3.z+48*p2.y*c_9*c_6*p2.z*p3.z+144*c_10*c_6*p2.z*p3.z+48*c_76*p2.y*c_12*p3.z+144*c_14*
        c_7*c_12*p3.z+288*c_5*c_8*c_12*p3.z+480*p1.y*c_78*c_12*p3.z+720*c_79*c_12*p3.z-48*c_76*p3.y*c_12*p3.z-48*c_14*p2.y*p3.y*
        c_12*p3.z+96*p1.y*c_8*p3.y*c_12*p3.z+240*c_78*p3.y*c_12*p3.z-96*c_14*c_9*c_12*p3.z-144*c_5*p2.y*c_9*c_12*p3.z-144*p1.y*
        c_7*c_9*c_12*p3.z-96*c_8*c_9*c_12*p3.z-144*c_5*c_10*c_12*p3.z-240*p1.y*p2.y*c_10*c_12*p3.z-288*c_7*c_10*c_12*p3.z-192*
        p1.y*c_80*c_12*p3.z-336*p2.y*c_80*c_12*p3.z-240*c_81*c_12*p3.z-288*c_5*p2.y*c_11*c_12*p3.z-432*p1.y*c_7*c_11*c_12*p3.z-288*
        c_8*c_11*c_12*p3.z+288*c_5*p3.y*c_11*c_12*p3.z+144*p1.y*p2.y*p3.y*c_11*c_12*p3.z+288*p1.y*c_9*c_11*c_12*p3.z+c_352+144*
        c_10*c_11*c_12*p3.z-144*c_5*p2.y*p1.z*c_13*p3.z-384*p1.y*c_7*p1.z*c_13*p3.z-480*c_8*p1.z*c_13*p3.z+144*c_5*p3.y*
        p1.z*c_13*p3.z+192*p1.y*p2.y*p3.y*p1.z*c_13*p3.z+96*c_7*p3.y*p1.z*c_13*p3.z+192*p1.y*c_9*p1.z*c_13*p3.z+240*p2.y*c_9*
        p1.z*c_13*p3.z+144*c_10*p1.z*c_13*p3.z-48*c_5*p2.y*c_83*p3.z-240*p1.y*c_7*c_83*p3.z-720*c_8*c_83*p3.z+48*c_5*p3.y*c_83*
        p3.z+144*p1.y*p2.y*p3.y*c_83*p3.z+240*c_7*p3.y*c_83*p3.z+96*p1.y*c_9*c_83*p3.z+336*p2.y*c_9*c_83*p3.z+144*c_10*c_83*
        p3.z-384*c_85*p1.z*c_15+240*c_76*p2.y*p1.z*c_15+192*c_14*c_7*p1.z*c_15+144*c_5*c_8*p1.z*c_15+96*p1.y*c_78*p1.z*c_15+48*
        c_79*p1.z*c_15-480*c_76*p3.y*p1.z*c_15+384*c_14*p2.y*p3.y*p1.z*c_15+288*c_5*c_7*p3.y*p1.z*c_15+192*p1.y*c_8*p3.y*p1.z*
        c_15+96*c_78*p3.y*p1.z*c_15-384*c_14*c_9*p1.z*c_15+432*c_5*p2.y*c_9*p1.z*c_15+288*p1.y*c_7*c_9*p1.z*c_15+c_353-192*c_5*
        c_10*p1.z*c_15+384*p1.y*p2.y*c_10*p1.z*c_15+192*c_7*c_10*p1.z*c_15+240*p2.y*c_80*p1.z*c_15+96*c_81*p1.z*c_15+640*c_14*c_6*
        c_15-480*c_5*p2.y*c_6*c_15-192*p1.y*c_7*c_6*c_15-48*c_8*c_6*c_15-384*p1.y*p2.y*p3.y*c_6*c_15-96*c_7*p3.y*c_6*c_15-384*
        p1.y*c_9*c_6*c_15+c_354-256*c_10*c_6*c_15+48*c_76*p2.y*p2.z*c_15+96*c_14*c_7*p2.z*c_15+144*c_5*c_8*p2.z*c_15+192*p1.y*c_78*
        p2.z*c_15+240*c_79*p2.z*c_15-48*c_76*p3.y*p2.z*c_15+48*c_14*p2.y*p3.y*p2.z*c_15+144*c_5*c_7*p3.y*p2.z*c_15+240*p1.y*c_8*
        p3.y*p2.z*c_15+336*c_78*p3.y*p2.z*c_15-144*c_14*c_9*p2.z*c_15+144*p1.y*c_7*c_9*p2.z*c_15+288*c_8*c_9*p2.z*c_15-288*c_5*
        c_10*p2.z*c_15-96*p1.y*p2.y*c_10*p2.z*c_15+96*c_7*c_10*p2.z*c_15-480*p1.y*c_80*p2.z*c_15-240*p2.y*c_80*p2.z*c_15-720*
        c_81*p2.z*c_15-288*c_5*p2.y*c_11*p2.z*c_15-288*p1.y*c_7*c_11*p2.z*c_15-144*c_8*c_11*p2.z*c_15+288*c_5*p3.y*c_11*p2.z*c_15-144*
        p1.y*p2.y*p3.y*c_11*p2.z*c_15+c_355+432*p1.y*c_9*c_11*p2.z*c_15+288*c_10*c_11*p2.z*c_15-144*c_5*p2.y*p1.z*c_12*
        c_15-288*p1.y*c_7*p1.z*c_12*c_15-288*c_8*p1.z*c_12*c_15+144*c_5*p3.y*p1.z*c_12*c_15-144*c_7*p3.y*p1.z*c_12*c_15+288*p1.y*c_9*
        p1.z*c_12*c_15+144*p2.y*c_9*p1.z*c_12*c_15+288*c_10*p1.z*c_12*c_15-48*c_5*p2.y*c_13*c_15-192*p1.y*c_7*c_13*c_15-480*c_8*
        c_13*c_15+48*c_5*p3.y*c_13*c_15+48*p1.y*p2.y*p3.y*c_13*c_15-96*c_7*p3.y*c_13*c_15+144*p1.y*c_9*c_13*c_15+288*p2.y*c_9*c_13*
        c_15+288*c_10*c_13*c_15-64*c_85*c_16+48*c_76*p2.y*c_16+48*c_14*c_7*c_16+48*c_5*c_8*c_16+48*p1.y*c_78*c_16+48*c_79*c_16-160*
        c_76*p3.y*c_16+144*c_14*p2.y*p3.y*c_16+144*c_5*c_7*p3.y*c_16+144*p1.y*c_8*p3.y*c_16+144*c_78*p3.y*c_16-256*c_14*c_9*c_16+288*
        c_5*p2.y*c_9*c_16+288*p1.y*c_7*c_9*c_16+288*c_8*c_9*c_16-320*c_5*c_10*c_16+480*p1.y*p2.y*c_10*c_16+480*c_7*c_10*c_16-320*
        p1.y*c_80*c_16+720*p2.y*c_80*c_16-224*c_81*c_16+320*c_14*c_11*c_16-288*c_5*p2.y*c_11*c_16-144*p1.y*c_7*c_11*c_16-48*c_8*c_11*
        c_16+192*c_5*p3.y*c_11*c_16-432*p1.y*p2.y*p3.y*c_11*c_16-144*c_7*p3.y*c_11*c_16-192*p1.y*c_9*c_11*c_16-288*p2.y*c_9*c_11*
        c_16-320*c_10*c_11*c_16-144*c_5*p2.y*p1.z*p2.z*c_16-192*p1.y*c_7*p1.z*p2.z*c_16-144*c_8*p1.z*p2.z*c_16+144*c_5*p3.y*
        p1.z*p2.z*c_16-192*p1.y*p2.y*p3.y*p1.z*p2.z*c_16-240*c_7*p3.y*p1.z*p2.z*c_16+384*p1.y*c_9*p1.z*p2.z*c_16-96*p2.y*
        c_9*p1.z*p2.z*c_16+480*c_10*p1.z*p2.z*c_16-48*c_5*p2.y*c_12*c_16-144*p1.y*c_7*c_12*c_16-288*c_8*c_12*c_16+48*c_5*p3.y*c_12*
        c_16-48*p1.y*p2.y*p3.y*c_12*c_16-288*c_7*p3.y*c_12*c_16+192*p1.y*c_9*c_12*c_16+96*p2.y*c_9*c_12*c_16+480*c_10*c_12*c_16+128*
        c_14*p1.z*c_86-144*c_5*p2.y*p1.z*c_86-96*p1.y*c_7*p1.z*c_86-48*c_8*p1.z*c_86+192*c_5*p3.y*p1.z*c_86-384*p1.y*p2.y*
        p3.y*p1.z*c_86-192*c_7*p3.y*p1.z*c_86-480*p2.y*c_9*p1.z*c_86-320*c_10*p1.z*c_86-48*c_5*p2.y*p2.z*c_86-96*p1.y*c_7*p2.z*
        c_86-144*c_8*p2.z*c_86+48*c_5*p3.y*p2.z*c_86-144*p1.y*p2.y*p3.y*p2.z*c_86-336*c_7*p3.y*p2.z*c_86+240*p1.y*c_9*p2.z*
        c_86-240*p2.y*c_9*p2.z*c_86+720*c_10*p2.z*c_86+32*c_14*c_87-48*c_5*p2.y*c_87-48*p1.y*c_7*c_87-48*c_8*c_87+96*c_5*p3.y*c_87-240*
        p1.y*p2.y*p3.y*c_87-240*c_7*p3.y*c_87+96*p1.y*c_9*c_87-720*p2.y*c_9*c_87-224*c_10*c_87+45*c_275*p3.x*c_44+3*c_88*p3.x*
        (c_356+c_402+10*c_7+c_403+c_357+4*p1.y*(2*p2.y+p3.y)-48*c_11+c_358-160*c_12-64*p1.z*p3.z-128*p2.z*p3.z+c_359)*c_44+45*
        c_360*c_30-45*c_194*c_91-c_89*(c_361-30*c_7*p3.y*p1.z-12*p2.y*c_9*p1.z+c_362+160*p2.y*c_6+144*p3.y*c_6+c_363+45*c_7*p3.y*
        p2.z+15*p2.y*c_9*p2.z+c_364+480*p2.y*c_11*p2.z+336*p3.y*c_11*p2.z+480*p2.y*p1.z*c_12+c_365+c_366-720*p3.y*c_13+c_369-45*
        c_8*p3.z-15*c_7*p3.y*p3.z+c_370+c_371+96*p3.y*c_11*p3.z+c_372+c_373+720*p2.y*c_12*p3.z-240*p3.y*c_12*p3.z+c_374+c_375+240*
        p2.y*p2.z*c_15+c_376+c_377+c_14*c_378+p1.y*(c_386+c_379+192*c_11*p2.z-320*c_13+45*c_36*p3.z-144*c_11*p3.z-384*p1.z*
        p2.z*p3.z-480*c_12*p3.z-96*p1.z*c_15-192*p2.z*c_15+c_380+3*c_9*c_306+15*c_7*c_24+3*p2.y*p3.y*c_407)+3*c_5*(c_381+p2.y*
        c_382))+c_108*(-3*c_7*p3.y*c_410-15*p2.y*c_9*c_101+c_300+c_14*c_184-5*c_10*c_383+48*p2.y*c_28*c_385+p1.y*(c_386+15*c_9*p2.z-48*
        c_13-48*c_11*(c_103+c_145)+30*c_9*p3.z-192*c_12*p3.z-480*p2.z*c_15-320*c_16+3*c_7*c_306-96*p1.z*p2.z*c_164+3*p2.y*p3.y*
        c_445)+3*c_5*(c_389+p3.y*c_390)+16*p3.y*c_398)-3*p2.x*p3.x*(c_367+c_49+c_458)*(15*c_108-5*c_76-5*c_78-8*c_8*p3.y-9*c_7*c_9-8*
        p2.y*c_10-5*c_80-8*c_14*c_399-3*c_5*(c_400+c_401+c_357)-4*p1.y*(2*c_8+3*c_7*p3.y+3*p2.y*c_9+2*c_10)+80*c_82+128*c_6*p2.z+144*
        c_11*c_12+128*p1.z*c_13+80*c_83+128*c_6*p3.z+192*c_11*p2.z*p3.z+192*p1.z*c_12*p3.z+128*c_13*p3.z+144*c_11*c_15+192*
        p1.z*p2.z*c_15+144*c_12*c_15+128*p1.z*c_16+128*p2.z*c_16+80*c_86+c_36*(c_402+c_400+c_403+10*c_9+4*p1.y*(p2.y+2*p3.y)-16*
        c_243))-3*c_36*(-2*c_7*c_10*c_471-c_78*p3.y*c_101-3*c_8*c_9*c_102+c_404+c_85*(c_104+c_169+c_29)-c_81*(c_0+c_405+c_406)+c_5*(2*c_10*
        c_26+3*c_7*p3.y*c_306+c_8*c_388+3*p2.y*c_9*c_298)+c_14*(c_7*c_457+2*c_9*c_106+p2.y*p3.y*c_407)+c_76*(p2.y*(c_408+c_66+p3.z)+p3.y*
        c_409)-p1.y*(-128*c_77+5*c_80*p2.z+16*c_84+2*p2.y*c_10*c_410+c_8*p3.y*c_411+80*c_82*c_412+6*c_7*c_9*c_28+c_78*c_297+10*
        c_80*p3.z+32*c_83*p3.z+c_413+64*c_12*c_16+80*p2.z*c_86+32*c_87+64*c_6*(c_12+c_133+c_146)+16*c_11*(c_107+c_131+c_132-4*
        c_16)+32*p1.z*p2.z*c_324)+16*p3.y*c_424+p2.y*(-5*c_80*c_198+16*c_28*c_428))+3*c_43*(c_429-5*c_78*p3.y*p1.z-4*c_8*c_9*p1.z-3*
        c_7*c_10*p1.z-2*p2.y*c_80*p1.z+c_430+c_282+80*p3.y*c_77-28*c_79*p2.z+15*c_78*p3.y*p2.z+10*c_8*c_9*p2.z+6*c_7*c_10*
        p2.z+c_431+c_432+64*p2.y*c_82*p2.z+112*p3.y*c_82*p2.z+64*p2.y*c_6*c_12+96*p3.y*c_6*c_12+32*p3.y*c_11*c_13+c_284-80*p3.y*p1.z*
        c_83-448*p2.y*c_84-240*p3.y*c_84-15*c_79*p3.z-10*c_78*p3.y*p3.z-6*c_8*c_9*p3.z+c_433+c_434+16*p2.y*c_82*p3.z+64*p3.y*
        c_82*p3.z+48*p2.y*c_6*p2.z*p3.z+80*p3.y*c_6*p2.z*p3.z+96*p2.y*c_11*c_12*p3.z+48*p3.y*c_11*c_12*p3.z+160*p2.y*p1.z*
        c_13*p3.z-32*p3.y*p1.z*c_13*p3.z+240*p2.y*c_83*p3.z-160*p3.y*c_83*p3.z+16*p2.y*c_6*c_15+c_435+48*p2.y*c_11*p2.z*c_15+48*
        p3.y*c_11*p2.z*c_15+c_436+160*p2.y*c_13*c_15-96*p3.y*c_13*c_15+16*p2.y*c_11*c_16+32*p3.y*c_11*c_16+48*p2.y*p1.z*p2.z*
        c_16+16*p3.y*p1.z*p2.z*c_16+96*p2.y*c_12*c_16+c_437+16*p2.y*p1.z*c_86+c_438+c_439+c_440+c_441+c_85*(c_104+c_1+c_154)+c_442+c_14*
        (c_443+c_9*(c_444+p2.z+c_74)+p2.y*p3.y*c_445+c_7*(c_104+c_66+c_281))+c_76*(p3.y*(c_408+p2.z+c_54)+p2.y*c_446)+c_5*
        (2*c_8*c_22+3*p2.y*c_9*c_306+3*c_7*p3.y*c_388+c_10*c_298-3*c_36*(c_448+c_212))-3*c_36*(c_7*p3.y*c_198+2*c_8*c_28+2*p3.y*c_20*
        (c_449+8*c_271)-p2.y*(c_9*c_261+16*c_28*c_271))+p1.y*(-2*c_80*p1.z+128*c_77+c_80*p2.z+c_293+128*c_6*c_12+64*c_11*c_13+c_450+6*
        c_7*c_9*c_277+c_451+c_452-80*c_82*p3.z-128*c_6*p2.z*p3.z-144*c_11*c_12*p3.z-128*p1.z*c_13*p3.z-80*c_83*p3.z-64*c_6*
        c_15+c_453-96*p1.z*c_12*c_15-64*c_13*c_15+c_454-64*p1.z*p2.z*c_16-48*c_12*c_16-32*p1.z*c_86-32*p2.z*c_86+c_455-2*c_8*p3.y*
        c_456-5*c_78*c_24+p2.y*c_10*c_457+c_36*(-6*c_7*c_20+6*c_9*c_28+3*p2.y*p3.y*c_18-48*c_18*c_271))))-c_43*p3.x*(45*c_108*
        (-c_3+c_458+c_459)+3*(-5*c_78*p3.y*c_2+c_85*c_18+2*c_8*c_9*c_37-c_79*(c_460+c_461+c_29)+2*c_7*c_10*c_179+c_81*c_462+c_14*(p2.y*p3.y*
        c_463+c_464-3*c_7*c_211)+c_5*(c_10*c_341+3*p2.y*c_9*c_102+6*c_7*p3.y*c_18-2*c_8*(c_67+c_42+c_29))+c_76*(c_447-p2.y*c_261)-16*
        p3.y*(c_77+2*c_82*c_150+c_6*c_248+c_11*(c_267+c_131+c_203+c_323)+p1.z*(c_176+c_245+c_177+c_246+c_226)+2*(c_84-2*c_13*c_15-4*c_12*
        c_16-5*p2.z*c_86-4*c_87))+p1.y*(p2.y*c_10*c_465+c_80*c_410+3*c_7*c_9*c_198-5*c_78*c_232-2*c_8*p3.y*c_466-16*c_18*(c_82+c_467+20*
        c_13*p3.z+c_263+12*p2.z*c_16+c_226+c_6*c_138+3*c_11*(c_155+c_133+c_15)+p1.z*(c_468+c_307+c_132+c_323)))+p2.y*(c_80*(7*
        p1.z+c_66+c_116)+16*(c_77+c_82*c_172+c_6*c_272+c_11*c_469+p1.z*(c_467+c_273+c_171+c_274+c_86)+2*(-14*c_84-5*c_83*p3.z+2*c_12*
        c_16+c_470+c_87))))+c_36*(-3*c_14*c_18+3*c_5*(-(p3.y*c_463)+p2.y*c_261)+3*p1.y*(-2*c_9*c_471+3*c_7*c_211+p2.y*p3.y*
        (p1.z+c_472+c_151)+16*c_18*(c_11+c_216+c_173+4*p1.z*p3.z+c_473+c_174))+2*(3*c_7*p3.y*c_179-5*c_10*c_179+c_8*c_474+8*p3.y*(c_120+6*
        c_11*c_35+3*p1.z*(c_134+c_166+c_174)+8*(c_250+c_127+c_475))-p2.y*(3*c_9*c_2+8*(c_120+c_476+c_478-4*c_481))))))/double(1451520);
}

double trig::c63() const{
    double p12_2=p1.z*p1.z;
    double p12_3=p1.z*p12_2;
    double p12_4=p1.z*p12_3;
    double p22_2=p2.z*p2.z;
    double p22_3=p2.z*p22_2;
    double p22_4=p2.z*p22_3;
    double p32_2=p3.z*p3.z;
    double p32_3=p3.z*p32_2;
    double p32_4=p3.z*p32_3;
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
    double c_0=p12_2;
    double c_1=p22_2;
    double c_2=p32_2;
    double c_3=-p3.z;
    double c_4=p2.z+c_3;
    double c_5=3*c_2;
    double c_6=6*p2.z;
    double c_7=-c_2;
    double c_8=c_6+p3.z;
    double c_9=-(3*c_1);
    double c_10=-(p2.z*p3.z);
    double c_11=-c_1;
    double c_12=p1.z+c_3;
    double c_13=6*p1.z;
    double c_14=2*p3.z;
    double c_15=5*c_0;
    double c_16=5*p1.z*p2.z;
    double c_17=2*p2.z*p3.z;
    double c_18=p11_2;
    double c_19=p21_2;
    double c_20=p21_3;
    double c_21=p31_2;
    double c_22=p31_3;
    double c_23=p12_3;
    double c_24=p11_3;
    double c_25=p22_3;
    double c_26=p22_4;
    double c_27=p32_3;
    double c_28=p32_4;
    double c_29=-p2.z;
    double c_30=5*p1.z;
    double c_31=p1.z*p3.z;
    double c_32=3*p2.z*p3.z;
    double c_33=p2.z+p3.z;
    double c_34=p1.z+c_29;
    double c_35=-(2*p2.z*p3.z);
    double c_36=-(5*p1.z*c_33);
    double c_37=5*c_20*c_0;
    double c_38=p12_4;
    double c_39=5*c_1;
    double c_40=p30_2;
    double c_41=4*p1.z*p2.z;
    double c_42=p2.z*p3.z;
    double c_43=-(2*c_2);
    double c_44=2*p1.z*p3.z;
    double c_45=8*p1.z*p3.z;
    double c_46=4*c_2;
    double c_47=2*p1.z;
    double c_48=4*p2.z;
    double c_49=3*p3.z;
    double c_50=12*p2.z*p3.z;
    double c_51=12*p3.y*c_38;
    double c_52=60*p2.y*c_21*p1.z*p2.z;
    double c_53=30*p2.y*c_21*c_1;
    double c_54=12*c_19*p3.y*p1.z*p3.z;
    double c_55=3*p1.z;
    double c_56=c_55+c_48+c_14;
    double c_57=-(4*c_1);
    double c_58=3*c_0;
    double c_59=8*p2.z*p3.z;
    double c_60=6*c_2;
    double c_61=14*c_1;
    double c_62=9*p1.z*p3.z;
    double c_63=3*p1.z*p3.z;
    double c_64=2*c_0;
    double c_65=6*p1.z*p2.z;
    double c_66=10*c_1;
    double c_67=4*c_0;
    double c_68=2*p2.z;
    double c_69=p20_2;
    double c_70=3*p2.z;
    double c_71=-p1.z;
    double c_72=c_71+p2.z;
    double c_73=p3.y*c_72;
    double c_74=p2.y*c_12;
    double c_75=c_29+p3.z;
    double c_76=p1.y*c_75;
    double c_77=c_73+c_74+c_76;
    double c_78=p20_3;
    double c_79=4*p1.z;
    double c_80=14*c_0;
    double c_81=-(10*c_1);
    double c_82=-(14*c_1);
    double c_83=-(3*c_2);
    double c_84=-(12*p2.y*c_28);
    double c_85=7*c_0;
    double c_86=18*p1.z*p3.z;
    double c_87=-(8*p1.z*p2.z);
    double c_88=4*p1.z*p3.z;
    double c_89=10*c_0;
    double c_90=2*c_2;
    double c_91=8*p1.z*p2.z;
    double c_92=5*p1.z*p3.z;
    double c_93=c_15+c_11+c_92+c_17+c_2;
    double c_94=p2.y*c_93;
    double c_95=-(6*c_1);
    double c_96=-(4*c_2);
    double c_97=c_68+p3.z;
    double c_98=-(12*c_19*p3.y*c_0);
    double c_99=-(12*p2.y*c_21*c_0);
    double c_100=-(9*c_19*p3.y*c_1);
    double c_101=-(12*p3.y*c_26);
    double c_102=9*c_20*p2.z*p3.z;
    double c_103=12*p2.y*c_25*p3.z;
    double c_104=c_15+c_16+c_1+c_17+c_7;
    double c_105=30*c_0;
    double c_106=-(5*p2.z*p3.z);
    double c_107=p2.z+c_14;
    double c_108=9*p1.z*p2.z;
    double c_109=3*c_1;
    double c_110=-(10*c_2);
    double c_111=-(9*p2.z*p3.z);
    double c_112=2*c_1;
    double c_113=-(9*c_2);
    double c_114=20*c_0;
    double c_115=-(7*p2.z*p3.z);
    double c_116=-(6*c_2);
    double c_117=15*p2.z*p3.z;
    double c_118=p11_4;
    double c_119=p21_4;
    double c_120=p31_4;
    double c_121=p11_5;
    double c_122=p21_5;
    double c_123=p31_5;
    double c_124=5*p2.z*p3.z;
    double c_125=-(5*c_2);
    double c_126=p20_4;
    double c_127=5*p2.z;
    double c_128=-(5*c_1);
    double c_129=-(4*p2.z*p3.z);
    double c_130=4*p3.z;
    double c_131=2*c_33;
    double c_132=c_30+c_131;
    double c_133=c_79+c_70+c_14;
    double c_134=c_79+c_68+c_49;
    double c_135=-(10*c_20*c_1);
    double c_136=30*c_19*p3.y*c_1;
    double c_137=60*p2.y*c_26;
    double c_138=-(6*c_19*p3.y*c_2);
    double c_139=-(12*p2.y*c_0*c_2);
    double c_140=p3.y*c_34;
    double c_141=c_71+p3.z;
    double c_142=p2.y*c_141;
    double c_143=c_140+c_142;
    double c_144=p2.z+c_49;
    double c_145=-(15*c_40*c_2);
    double c_146=4*c_28;
    double c_147=c_79+c_48+p3.z;
    double c_148=-(p1.z*p3.z);
    double c_149=2*p1.z*p2.z;
    double c_150=4*p2.z*p3.z;
    double c_151=p1.z+p2.z+p3.z;
    double c_152=5*c_2;
    double c_153=6*p2.z*p3.z;
    double c_154=c_70+p3.z;
    double c_155=3*c_1*p3.z;
    double c_156=6*p2.z*c_2;
    double c_157=c_79+p2.z+c_130;
    double c_158=-4*c_0;
    double c_159=-(p1.z*p2.z);
    double c_160=3*p2.z*c_2;
    double c_161=2*c_27;
    double c_162=p30_4;
    double c_163=40*c_20*c_23*p2.z;
    double c_164=-(48*p2.y*c_21*c_23*p3.z);
    double c_165=45*p2.y*c_120*c_2;
    double c_166=5*p3.z;
    double c_167=20*c_26;
    double c_168=c_64+c_149+c_63+c_150+c_2;
    double c_169=-(3*p2.z*p3.z);
    double c_170=5*c_25;
    double c_171=c_55+c_68+c_130;
    double c_172=10*c_23;
    double c_173=c_47+c_127+c_14;
    double c_174=4*c_27;
    double c_175=6*p3.z;
    double c_176=4*c_23;
    double c_177=4*c_25;
    double c_178=10*c_27;
    double c_179=c_47+c_48+c_49;
    double c_180=c_68+c_49;
    double c_181=12*p2.z*c_2;
    double c_182=3*p1.z*p2.z;
    double c_183=-(30*c_1);
    double c_184=9*c_2;
    double c_185=4*c_33;
    double c_186=p1.z+c_185;
    double c_187=6*c_1;
    double c_188=9*p2.z*p3.z;
    double c_189=9*c_1*p3.z;
    double c_190=9*p2.z*c_2;
    double c_191=48*c_19*p3.y*c_23*p2.z;
    double c_192=-(45*c_119*p3.y*c_1);
    double c_193=-(40*c_22*c_23*p3.z);
    double c_194=40*c_22*c_25*p3.z;
    double c_195=-(40*c_20*p2.z*c_27);
    double c_196=c_127+p3.z;
    double c_197=-(18*p2.z*p3.z);
    double c_198=-(14*c_2);
    double c_199=14*c_2;
    double c_200=c_64+c_182+c_1+c_44+c_150;
    double c_201=5*c_38;
    double c_202=5*c_28;
    double c_203=-3*p2.z;
    double c_204=c_203+p3.z;
    double c_205=p2.z+c_175;
    double c_206=30*c_1*c_2;
    double c_207=c_70+c_14;
    double c_208=12*c_1*p3.z;
    double c_209=-(10*c_27);
    double c_210=c_47+c_70+c_130;
    double c_211=10*c_25;
    double c_212=9*p2.z;
    double c_213=c_212+c_175;
    double c_214=c_0*c_213;
    double c_215=c_112+c_17+c_2;
    double c_216=6*p1.z*c_215;
    double c_217=c_176+c_211+c_208+c_190+c_174+c_214+c_216;
    double c_218=4*c_217;
    double c_219=c_47+c_68+c_166;
    double c_220=-3*c_21*c_219;
    double c_221=9*p3.z;
    double c_222=c_6+c_221;
    double c_223=c_0*c_222;
    double c_224=c_1+c_17+c_90;
    double c_225=6*p1.z*c_224;
    double c_226=c_176+c_177+c_189+c_181+c_178+c_223+c_225;
    double c_227=p2.z+c_166;
    double c_228=3*c_25*p3.z;
    double c_229=6*c_1*c_2;
    double c_230=10*p2.z*c_27;
    double c_231=6*c_1*p3.z;
    double c_232=-(5*c_27);
    double c_233=12*c_0*c_33;
    double c_234=c_109+c_150+c_5;
    double c_235=3*p1.z*c_234;
    double c_236=c_172+c_177+c_231+c_156+c_174+c_233+c_235;
    double c_237=4*c_236;
    double c_238=12*p1.z*p3.z;
    double c_239=20*p1.z*p3.z;
    double c_240=4*c_1;
    double c_241=20*p2.z*p3.z;
    double c_242=10*c_2;
    double c_243=-(3*p3.z);
    double c_244=p2.z+c_243;
    double c_245=7*p3.z;
    double c_246=p1.z+p2.z+c_245;
    double c_247=5*c_1*p3.z;
    double c_248=p2.z+c_130;
    double c_249=5*c_27;
    double c_250=4*c_1*p3.z;
    double c_251=10*p2.z*c_2;
    double c_252=54*p2.y*c_120*p1.z*p2.z;
    double c_253=-(54*c_19*c_22*c_1);
    double c_254=-(9*c_123*c_1);
    double c_255=72*c_19*p3.y*c_0*c_1;
    double c_256=-(36*c_22*c_0*c_1);
    double c_257=20*c_22*c_26;
    double c_258=-(54*c_119*p3.y*p1.z*p3.z);
    double c_259=9*c_122*c_2;
    double c_260=54*c_20*c_21*c_2;
    double c_261=36*c_20*c_0*c_2;
    double c_262=-(72*p2.y*c_21*c_0*c_2);
    double c_263=-(120*c_20*c_1*c_2);
    double c_264=-(72*c_19*p3.y*c_1*c_2);
    double c_265=72*p2.y*c_21*c_1*c_2;
    double c_266=120*c_22*c_1*c_2;
    double c_267=-(20*c_20*c_28);
    double c_268=p1.z*p2.z;
    double c_269=6*p1.z*p3.z;
    double c_270=-(5*p1.z*p2.z);
    double c_271=-(2*c_1);
    double c_272=-(12*c_2);
    double c_273=8*c_0;
    double c_274=c_64+c_182+c_109+c_44+c_110;
    double c_275=5*p1.z*c_154;
    double c_276=5*p1.z*c_144;
    double c_277=7*p2.z;
    double c_278=3*c_0*c_33;
    double c_279=c_187+c_188+c_60;
    double c_280=p1.z*c_279;
    double c_281=c_170+c_189+c_190+c_249;
    double c_282=2*c_281;
    double c_283=c_23+c_278+c_280+c_282;
    double c_284=-10*c_25;
    double c_285=7*p1.z*p2.z;
    double c_286=9*c_0;
    double c_287=-(12*c_1);
    double c_288=7*p1.z*p3.z;
    double c_289=-(6*p2.z*p3.z);
    double c_290=-(9*c_1);
    double c_291=-(8*p2.z*p3.z);
    double c_292=10*p2.z*p3.z;
    double c_293=5*p1.z*c_33;
    double c_294=5*p2.z*c_2;
    double c_295=c_25+c_155+c_294+c_249;
    double c_296=c_0+c_149+c_11+c_92+c_152;
    double c_297=-(6*c_1*c_2);
    double c_298=c_23*c_180;
    double c_299=3*p1.z*c_205;
    double c_300=3*c_26;
    double c_301=-(35*c_28);
    double c_302=c_23*c_248;
    double c_303=c_1+c_150+c_242;
    double c_304=c_0*c_303;
    double c_305=20*c_27;
    double c_306=c_25+c_250+c_251+c_305;
    double c_307=p1.z*c_306;
    double c_308=-(20*c_2);
    double c_309=c_0+c_159+c_57+c_44+c_90;
    double c_310=-(20*c_1);
    double c_311=-(5*c_28);
    double c_312=c_0+c_149+c_112+c_148+c_96;
    double c_313=10*c_38;
    double c_314=p20_5;
    double c_315=-(7*c_1);
    double c_316=12*p2.y*p3.y*p1.z;
    double c_317=12*c_21*p3.z;
    double c_318=48*p1.z*p2.z*p3.z;
    double c_319=16*c_27;
    double c_320=6*c_22*p1.z*p2.z;
    double c_321=96*p3.y*c_0*c_1;
    double c_322=30*c_19*p3.y*p1.z*p3.z;
    double c_323=9*c_22*p1.z*p3.z;
    double c_324=-(9*c_22*p2.z*p3.z);
    double c_325=9*p2.y*c_21*c_2;
    double c_326=48*p2.y*p1.z*p2.z*c_2;
    double c_327=24*p3.y*p1.z*p2.z*c_2;
    double c_328=12*p3.y*p1.z*c_27;
    double c_329=-(12*p3.y*p2.z*c_27);
    double c_330=12*p2.y*c_28;
    double c_331=20*c_38;
    double c_332=15*c_40*c_2;
    double c_333=-(12*p2.z*c_27);
    double c_334=-(4*c_28);
    double c_335=6*c_0;
    double c_336=-(2*p1.z*p3.z);
    double c_337=c_0+c_128+c_336+c_106+c_7;
    double c_338=8*p2.z;
    double c_339=-(6*p1.z*p2.z);
    double c_340=15*p3.z;
    double c_341=-(18*c_40*c_20*c_0);
    double c_342=18*p2.y*c_120*c_0;
    double c_343=20*c_20*c_38;
    double c_344=-(36*c_40*c_19*p3.y*p1.z*p2.z);
    double c_345=24*c_40*p3.y*c_23*p2.z;
    double c_346=-(24*c_22*c_23*p2.z);
    double c_347=-(72*c_40*p2.y*c_0*c_1);
    double c_348=120*c_20*c_0*c_1;
    double c_349=24*c_22*p1.z*c_25;
    double c_350=-(75*c_162*p3.y*p1.z*p3.z);
    double c_351=45*c_119*p3.y*p1.z*p3.z;
    double c_352=90*c_40*c_22*p1.z*p3.z;
    double c_353=45*c_123*p1.z*p3.z;
    double c_354=135*c_119*p3.y*p2.z*p3.z;
    double c_355=-(45*c_123*p2.z*p3.z);
    double c_356=-(72*c_40*p2.y*c_0*p2.z*p3.z);
    double c_357=-(72*p2.y*c_21*c_0*p2.z*p3.z);
    double c_358=120*c_19*p3.y*c_25*p3.z;
    double c_359=-(36*c_40*p2.y*c_0*c_2);
    double c_360=-(36*c_20*c_0*c_2);
    double c_361=-(72*c_19*p3.y*c_0*c_2);
    double c_362=-(108*p2.y*c_21*c_0*c_2);
    double c_363=-(144*c_19*p3.y*p1.z*p2.z*c_2);
    double c_364=120*c_40*p3.y*p1.z*c_27;
    double c_365=-(120*p2.y*c_21*p1.z*c_27);
    double c_366=-(120*c_22*p1.z*c_27);
    double c_367=-(120*c_40*p3.y*p2.z*c_27);
    double c_368=120*c_22*p2.z*c_27;
    double c_369=-(120*p2.y*c_21*c_28);
    double c_370=140*c_38;
    double c_371=-(36*c_1*c_2);
    double c_372=-(4*p1.z*p3.z);
    double c_373=-10*c_0;
    double c_374=c_373+c_109+c_44+c_32+c_90;
    double c_375=-30*c_0;
    double c_376=4*c_26;
    double c_377=c_68+c_166;
    double c_378=c_55+p2.z+c_166;
    double c_379=5*c_26;
    double c_380=c_187+c_32+c_2;
    double c_381=-(3*p1.z*p3.z);
    double c_382=-(8*c_2);
    double c_383=-(2*p1.z*p2.z);
    double c_384=-60*c_38;
    double c_385=2*c_25;
    double c_386=-(5*c_26);
    double c_387=3*c_1*c_2;
    double c_388=3*c_27;
    double c_389=-(18*c_119*p3.y*c_0);
    double c_390=9*c_123*c_0;
    double c_391=-(20*c_22*c_38);
    double c_392=-(45*c_122*p1.z*p2.z);
    double c_393=-(45*p2.y*c_120*p1.z*p2.z);
    double c_394=108*c_19*p3.y*c_0*c_1;
    double c_395=72*p2.y*c_21*c_0*c_1;
    double c_396=36*c_22*c_0*c_1;
    double c_397=120*c_20*p1.z*c_25;
    double c_398=120*c_19*p3.y*p1.z*c_25;
    double c_399=120*c_19*p3.y*c_26;
    double c_400=24*c_20*c_23*p3.z;
    double c_401=45*c_122*p2.z*p3.z;
    double c_402=-(135*p2.y*c_120*p2.z*p3.z);
    double c_403=72*c_19*p3.y*c_0*p2.z*p3.z;
    double c_404=144*p2.y*c_21*p1.z*c_1*p3.z;
    double c_405=-(120*c_20*c_25*p3.z);
    double c_406=-(120*c_22*c_0*c_2);
    double c_407=-(24*c_20*p1.z*c_27);
    double c_408=-(120*p2.y*c_21*p2.z*c_27);
    double c_409=21*c_0;
    double c_410=-(7*c_2);
    double c_411=-(4*p1.z*p2.z);
    double c_412=35*c_38;
    double c_413=-(2*p3.z);
    double c_414=-(9*c_1*c_2);
    double c_415=9*c_25;
    double c_416=9*c_1;
    double c_417=27*p2.z*p3.z;
    double c_418=-12*c_0;
    double c_419=-(6*p1.z*p3.z);
    double c_420=7*p2.z*p3.z;
    double c_421=8*p3.z;
    double c_422=-5*c_38;
    double c_423=p2.z+c_413;
    double c_424=c_1+c_32+c_60;
    double c_425=-(30*c_2);
    double c_426=7*c_2;
    double c_427=4*c_25*p3.z;
    double c_428=10*c_1*c_2;
    double c_429=p2.z+c_421;
    double c_430=12*c_0;
    double c_431=-(8*c_1);
    double c_432=-6*c_0;
    double c_433=2*c_25*p3.z;
    double c_434=4*p2.z*c_27;
    double c_435=3*c_25;
    double c_436=7*c_25*p3.z;
    double c_437=c_0+c_383+c_11+c_106+c_125;
    double c_438=4*c_23*c_423;
    double c_439=c_1+c_32+c_43;
    double c_440=3*c_0*c_439;
    double c_441=2*p1.z*p2.z*c_424;
    double c_442=c_422+c_26+c_438+c_228+c_229+c_230+c_202+c_440+c_441;
    double c_443=c_1+c_42+c_125;
    double c_444=6*c_443;
    double c_445=c_286+c_108+c_444;
    double c_446=6*c_0*c_144;
    double c_447=3*p1.z*c_424;
    double c_448=c_172+c_25+c_155+c_156+c_178+c_446+c_447;
    double c_449=c_64+c_149+c_1+c_10+c_96;
    double c_450=-20*c_38;
    double c_451=10*c_25*p3.z;
    double c_452=9*c_1*c_2;
    double c_453=7*p2.z*c_27;
    double c_454=c_127+c_14;
    double c_455=c_177+c_231+c_156+c_174;
    double c_456=p1.z*c_455;
    return (-5*p10_6*(-5*p1.y*c_4*(7*p1.z+p2.z+p3.z)+p3.y*(-14*c_0-18*p1.z*p2.z+c_9+c_31+c_169+c_2)+p2.y*(c_80+c_159+c_11+c_86+c_32+c_5))+15*
        c_314*p3.x*(-(p1.y*c_4*(p1.z+c_6+c_14))-p3.y*(c_0+c_16+c_39+c_44+c_7)+p2.y*(c_0+c_315+c_59+c_5+p1.z*
        c_8))-5*p20_6*(5*p2.y*c_12*(p1.z+c_277+p3.z)+p1.y*(c_0+c_82+p1.z*c_244+c_197+c_83)+p3.y*(c_58+c_61+c_10+c_7+3*p1.z*c_8))-15*
        p10_5*(p2.x*(p3.y*c_34*(c_13+c_68+p3.z)+p1.y*(c_85+c_87+c_9+c_419+c_10+c_7)+c_94)+p3.x*(-(p2.y*c_12*(c_13+p2.z+c_14))-p3.y*
        c_104+p1.y*(-7*c_0+c_65+c_1+c_45+c_42+c_5)))+p10_4*(105*c_18*p2.y*c_0+30*p1.y*c_19*c_0+c_37-105*c_18*p3.y*c_0-30*p1.y*
        c_21*c_0-5*c_22*c_0-35*c_24*p1.z*p2.z+15*c_18*p2.y*p1.z*p2.z+15*p1.y*c_19*p1.z*p2.z+5*c_20*p1.z*p2.z-180*c_18*p3.y*
        p1.z*p2.z-60*p1.y*p2.y*p3.y*p1.z*p2.z-12*c_19*p3.y*p1.z*p2.z-60*p1.y*c_21*p1.z*p2.z-12*p2.y*c_21*p1.z*p2.z-12*c_22*
        p1.z*p2.z-420*p1.y*c_23*p2.z-60*p2.y*c_23*p2.z-240*p3.y*c_23*p2.z-5*c_24*c_1+3*p1.y*c_19*c_1+2*c_20*c_1-30*c_18*p3.y*
        c_1-24*p1.y*p2.y*p3.y*c_1+c_100-12*p1.y*c_21*c_1-6*p2.y*c_21*c_1-3*c_22*c_1-180*p1.y*c_0*c_1-60*p2.y*c_0*c_1-120*p3.y*
        c_0*c_1-60*p1.y*p1.z*c_25-36*p2.y*p1.z*c_25-48*p3.y*p1.z*c_25-12*p1.y*c_26-12*p2.y*c_26+c_101+35*c_24*p1.z*p3.z+180*c_18*
        p2.y*p1.z*p3.z+60*p1.y*c_19*p1.z*p3.z+12*c_20*p1.z*p3.z-15*c_18*p3.y*p1.z*p3.z+60*p1.y*p2.y*p3.y*p1.z*p3.z+c_54-15*
        p1.y*c_21*p1.z*p3.z+12*p2.y*c_21*p1.z*p3.z-5*c_22*p1.z*p3.z+420*p1.y*c_23*p3.z+240*p2.y*c_23*p3.z+60*p3.y*c_23*
        p3.z+30*c_18*p2.y*p2.z*p3.z+24*p1.y*c_19*p2.z*p3.z+c_102-30*c_18*p3.y*p2.z*p3.z+3*c_19*p3.y*p2.z*p3.z-24*p1.y*
        c_21*p2.z*p3.z-3*p2.y*c_21*p2.z*p3.z+c_324+120*p2.y*c_0*p2.z*p3.z-120*p3.y*c_0*p2.z*p3.z+48*p2.y*p1.z*c_1*p3.z-48*
        p3.y*p1.z*c_1*p3.z+c_103-12*p3.y*c_25*p3.z+5*c_24*c_2+30*c_18*p2.y*c_2+12*p1.y*c_19*c_2+3*c_20*c_2+24*p1.y*p2.y*p3.y*
        c_2+6*c_19*p3.y*c_2-3*p1.y*c_21*c_2+c_325-2*c_22*c_2+180*p1.y*c_0*c_2+120*p2.y*c_0*c_2+60*p3.y*c_0*c_2+c_326-48*p3.y*p1.z*
        p2.z*c_2+12*p2.y*c_1*c_2-12*p3.y*c_1*c_2+60*p1.y*p1.z*c_27+48*p2.y*p1.z*c_27+36*p3.y*p1.z*c_27+12*p2.y*p2.z*c_27+c_329+12*
        p1.y*c_28+c_330+12*p3.y*c_28+15*p2.x*p3.x*c_77*c_132+15*c_40*(p2.y*c_12*(c_30+p2.z+c_49)+p3.y*(c_15+c_41+c_1+c_31+c_32+c_43)+p1.y*
        (c_15+c_11+c_35+c_96+c_36))-15*c_69*(p3.y*c_34*(c_30+c_70+p3.z)+p2.y*(c_15+c_268+c_271+c_88+c_32+c_2)+p1.y*
        (c_15+c_57+c_35+c_7+c_36)))+c_126*(c_37+30*c_19*p3.y*c_0+12*p2.y*c_21*c_0+3*c_22*c_0+12*p2.y*c_38+c_51+35*c_20*p1.z*p2.z+180*
        c_19*p3.y*p1.z*p2.z+c_52+12*c_22*p1.z*p2.z+60*p2.y*c_23*p2.z+48*p3.y*c_23*p2.z+105*c_19*p3.y*c_1+c_53+5*c_22*c_1+180*
        p2.y*c_0*c_1+120*p3.y*c_0*c_1+420*p2.y*p1.z*c_25+240*p3.y*p1.z*c_25+c_322+24*p2.y*c_21*p1.z*p3.z+c_323+12*p3.y*c_23*
        p3.z-35*c_20*p2.z*p3.z+15*c_19*p3.y*p2.z*p3.z+15*p2.y*c_21*p2.z*p3.z+5*c_22*p2.z*p3.z+48*p3.y*c_0*p2.z*p3.z+120*
        p3.y*p1.z*c_1*p3.z-420*p2.y*c_25*p3.z-60*p3.y*c_25*p3.z-5*c_20*c_2+3*p2.y*c_21*c_2+2*c_22*c_2+12*p3.y*c_0*c_2+48*p3.y*
        p1.z*p2.z*c_2-180*p2.y*c_1*c_2-60*p3.y*c_1*c_2+c_328-60*p2.y*p2.z*c_27-36*p3.y*p2.z*c_27+c_84-12*p3.y*c_28-c_24*
        (c_64+c_16+c_39+c_62+c_50+c_5)+15*c_40*(-(p3.y*(c_0+c_41+c_39+c_63+c_42+c_43))+p2.y*(c_0+c_16+c_128+c_44+c_124+c_46))-3*c_18*(-(p3.y*
        c_12*c_56)+p2.y*(c_0+c_16+c_66+c_45+c_241+c_46))-3*p1.y*(-4*c_38+5*c_40*p1.z*p2.z-12*c_23*p2.z+25*c_40*c_1-20*c_0*c_1-20*
        p1.z*c_25-5*c_40*p1.z*p3.z+4*c_23*p3.z-10*c_40*p2.z*p3.z+16*c_0*p2.z*p3.z+40*p1.z*c_1*p3.z+80*c_25*p3.z+c_145+4*c_0*
        c_2+16*p1.z*p2.z*c_2+40*c_1*c_2+4*p1.z*c_27+16*p2.z*c_27+c_146-4*p2.y*p3.y*c_12*c_173-c_21*c_12*c_179+5*c_19*(7*c_1+c_50+c_90+p1.z*
        c_107)))+c_78*p3.x*(-30*c_20*c_0+6*c_19*p3.y*c_0+15*p2.y*c_21*c_0+9*c_22*c_0-12*p2.y*c_38+c_51-180*c_20*p1.z*p2.z+30*
        c_19*p3.y*p1.z*p2.z+c_52+27*c_22*p1.z*p2.z-48*p2.y*c_23*p2.z+36*p3.y*c_23*p2.z-70*c_20*c_1+c_136+c_53+10*c_22*c_1-120*
        p2.y*c_0*c_1+72*p3.y*c_0*c_1-240*p2.y*p1.z*c_25+120*p3.y*p1.z*c_25+420*p2.y*c_26+60*p3.y*c_26-30*c_20*p1.z*p3.z+c_54+45*
        p2.y*c_21*p1.z*p3.z+36*c_22*p1.z*p3.z-12*p2.y*c_23*p3.z+24*p3.y*c_23*p3.z-40*c_20*p2.z*p3.z+24*p2.y*c_21*p2.z*
        p3.z+16*c_22*p2.z*p3.z-48*p2.y*c_0*p2.z*p3.z+72*p3.y*c_0*p2.z*p3.z-120*p2.y*p1.z*c_1*p3.z+144*p3.y*p1.z*c_1*p3.z-10*
        c_20*c_2+c_138+6*p2.y*c_21*c_2+10*c_22*c_2+c_139+36*p3.y*c_0*c_2-48*p2.y*p1.z*p2.z*c_2+108*p3.y*p1.z*p2.z*c_2-120*
        p2.y*c_1*c_2-72*p3.y*c_1*c_2-12*p2.y*p1.z*c_27+48*p3.y*p1.z*c_27-96*p2.y*p2.z*c_27-96*p3.y*p2.z*c_27-36*p2.y*c_28-60*
        p3.y*c_28+3*c_24*c_4*c_56-3*c_18*(p3.y*(-3*c_0+c_270+c_57+c_44+c_150+c_60)+p2.y*(c_58+c_411+c_310+c_288+c_59+c_60))+5*c_40*
        (-(p3.y*(c_58+c_108+c_61+c_238+c_59+c_110))+p2.y*(c_58+12*p1.z*p2.z+c_81+c_62+c_59+c_199)-3*p1.y*c_4*c_186)+3*p1.y*(c_21*
        (c_67+c_285+c_240+c_63+c_289+c_272)+2*p2.y*p3.y*(c_64+c_65+c_66+c_148+c_291+c_113)-2*c_19*(c_67+c_183+c_292+c_60+c_293)+4*c_4*
        (c_23+2*c_0*c_97+p1.z*(c_66+c_59+c_5)+4*(c_170+c_247+c_160+c_27))))+p10_3*(15*c_69*p3.x*c_133*c_77-5*c_78*(3*p3.y*c_34*c_147+p2.y*
        (c_80+c_91+c_81+c_62+c_50+c_5)+p1.y*(c_89+c_82+c_111+c_83-4*p1.z*c_180))-p2.x*(-10*c_20*c_0+c_98+c_99-12*c_22*c_0-60*p2.y*
        c_38-240*p3.y*c_38-16*c_20*p1.z*p2.z+18*c_19*p3.y*p1.z*p2.z+12*p2.y*c_21*p1.z*p2.z+c_320+c_135+36*c_19*p3.y*c_1+18*
        p2.y*c_21*c_1+6*c_22*c_1+72*p2.y*c_0*c_1+c_321+96*p2.y*p1.z*c_25+96*p3.y*p1.z*c_25+c_137+48*p3.y*c_26-27*c_20*p1.z*p3.z-21*
        c_19*p3.y*p1.z*p3.z-15*p2.y*c_21*p1.z*p3.z-9*c_22*p1.z*p3.z-120*p2.y*c_23*p3.z-120*p3.y*c_23*p3.z-36*c_20*p2.z*
        p3.z-9*c_19*p3.y*p2.z*p3.z+6*p2.y*c_21*p2.z*p3.z+9*c_22*p2.z*p3.z-144*p2.y*c_0*p2.z*p3.z+24*p3.y*c_0*p2.z*p3.z-108*
        p2.y*p1.z*c_1*p3.z+60*p3.y*p1.z*c_1*p3.z-48*p2.y*c_25*p3.z+36*p3.y*c_25*p3.z-9*c_20*c_2-12*c_19*p3.y*c_2-9*p2.y*
        c_21*c_2-72*p2.y*c_0*c_2-48*p3.y*c_0*c_2-72*p2.y*p1.z*p2.z*c_2+c_327-36*p2.y*c_1*c_2+24*p3.y*c_1*c_2-36*p2.y*p1.z*c_27-12*
        p3.y*p1.z*c_27-24*p2.y*p2.z*c_27+12*p3.y*p2.z*c_27+c_84+10*c_24*(c_85+c_41+c_1+c_86+c_32+c_5)+15*c_40*c_134*c_143-3*
        p1.y*(c_370-20*c_40*p1.z*p2.z-10*c_40*c_1-40*c_0*c_1-32*p1.z*c_25-12*c_26+20*c_40*p1.z*p3.z-80*c_23*p3.z-5*c_40*p2.z*p3.z-40*
        c_0*p2.z*p3.z-16*p1.z*c_1*p3.z-4*c_25*p3.z+c_332-40*c_0*c_2-16*p1.z*p2.z*c_2-4*c_1*c_2-16*p1.z*c_27-4*p2.z*
        c_27+c_334+c_21*(c_114+c_87+c_95+c_88+c_115+c_83)+2*p2.y*p3.y*(c_89+c_87+c_290+c_269+c_10+c_90)+c_19*(c_89+c_91+c_112+c_239+c_117+c_152))-6*
        c_18*(c_94+p3.y*(c_105+c_95+c_106+c_96-5*p1.z*c_97)))+p3.x*(-12*c_20*c_0+c_98+c_99-10*c_22*c_0-240*p2.y*c_38-60*p3.y*
        c_38-9*c_20*p1.z*p2.z-15*c_19*p3.y*p1.z*p2.z-21*p2.y*c_21*p1.z*p2.z-27*c_22*p1.z*p2.z-120*p2.y*c_23*p2.z-120*p3.y*
        c_23*p2.z+c_100-12*p2.y*c_21*c_1-9*c_22*c_1-48*p2.y*c_0*c_1-72*p3.y*c_0*c_1-12*p2.y*p1.z*c_25-36*p3.y*p1.z*c_25+c_101+6*
        c_20*p1.z*p3.z+c_54+18*p2.y*c_21*p1.z*p3.z-16*c_22*p1.z*p3.z+c_102+6*c_19*p3.y*p2.z*p3.z-9*p2.y*c_21*p2.z*p3.z-36*
        c_22*p2.z*p3.z+24*p2.y*c_0*p2.z*p3.z-144*p3.y*c_0*p2.z*p3.z+24*p2.y*p1.z*c_1*p3.z-72*p3.y*p1.z*c_1*p3.z+c_103-24*
        p3.y*c_25*p3.z+6*c_20*c_2+18*c_19*p3.y*c_2+36*p2.y*c_21*c_2-10*c_22*c_2+96*p2.y*c_0*c_2+72*p3.y*c_0*c_2+60*p2.y*p1.z*
        p2.z*c_2-108*p3.y*p1.z*p2.z*c_2+24*p2.y*c_1*c_2-36*p3.y*c_1*c_2+96*p2.y*p1.z*c_27+96*p3.y*p1.z*c_27+36*p2.y*p2.z*c_27-48*
        p3.y*p2.z*c_27+48*p2.y*c_28+60*p3.y*c_28+10*c_24*(c_85+18*p1.z*p2.z+c_109+c_88+c_32+c_2)-6*c_18*(p3.y*c_104+p2.y*
        (c_105+c_57+c_106+c_116-5*p1.z*c_107))+5*c_40*(3*p2.y*c_12*c_157+p3.y*(c_80+c_108+c_109+c_45+c_50+c_110)+p1.y*(c_89+c_9+c_111+c_198-4*
        p1.z*c_207))-3*p1.y*(2*p2.y*p3.y*(c_89+c_65+c_112-8*p1.z*p3.z+c_10+c_113)+c_19*(c_114+c_9+4*p1.z*c_423+c_115+c_116)+c_21*
        (c_89+20*p1.z*p2.z+c_39+c_45+c_117+c_90)+4*(c_412-20*c_23*p2.z-c_26-c_25*p3.z-c_1*c_2-p2.z*c_27-3*c_28-10*c_0*
        (c_1+c_42+c_2)-4*p1.z*(c_25+c_1*p3.z+p2.z*c_2+c_161)))))+p10_2*(420*c_18*p2.y*c_38+120*p1.y*c_19*c_38+c_343-420*c_18*p3.y*c_38-120*
        p1.y*c_21*c_38+c_391+189*c_121*p1.z*p2.z+135*c_118*p2.y*p1.z*p2.z+90*c_24*c_19*p1.z*p2.z+54*c_18*c_20*p1.z*p2.z+27*
        p1.y*c_119*p1.z*p2.z+9*c_122*p1.z*p2.z-270*c_118*p3.y*p1.z*p2.z-180*c_24*p2.y*p3.y*p1.z*p2.z-108*c_18*c_19*p3.y*
        p1.z*p2.z-54*p1.y*c_20*p3.y*p1.z*p2.z-18*c_119*p3.y*p1.z*p2.z-180*c_24*c_21*p1.z*p2.z-108*c_18*p2.y*c_21*p1.z*p2.z-54*
        p1.y*c_19*c_21*p1.z*p2.z-18*c_20*c_21*p1.z*p2.z-108*c_18*c_22*p1.z*p2.z-54*p1.y*p2.y*c_22*p1.z*p2.z-18*c_19*c_22*
        p1.z*p2.z-54*p1.y*c_120*p1.z*p2.z-18*p2.y*c_120*p1.z*p2.z-18*c_123*p1.z*p2.z-280*c_24*c_23*p2.z+120*c_18*p2.y*c_23*
        p2.z+120*p1.y*c_19*c_23*p2.z+c_163+720*c_18*p3.y*c_23*p2.z+240*p1.y*p2.y*p3.y*c_23*p2.z+c_191+240*p1.y*c_21*c_23*p2.z+48*
        p2.y*c_21*c_23*p2.z+48*c_22*c_23*p2.z+27*c_121*c_1+45*c_118*p2.y*c_1+54*c_24*c_19*c_1+54*c_18*c_20*c_1+45*p1.y*c_119*
        c_1+27*c_122*c_1-45*c_118*p3.y*c_1-72*c_24*p2.y*p3.y*c_1-81*c_18*c_19*p3.y*c_1-72*p1.y*c_20*p3.y*c_1+c_192-36*c_24*c_21*
        c_1-54*c_18*p2.y*c_21*c_1-54*p1.y*c_19*c_21*c_1-36*c_20*c_21*c_1-27*c_18*c_22*c_1-36*p1.y*p2.y*c_22*c_1-27*c_19*c_22*c_1-18*
        p1.y*c_120*c_1-18*p2.y*c_120*c_1+c_254-120*c_24*c_0*c_1+72*p1.y*c_19*c_0*c_1+48*c_20*c_0*c_1+360*c_18*p3.y*c_0*c_1+288*p1.y*
        p2.y*p3.y*c_0*c_1+c_394+144*p1.y*c_21*c_0*c_1+c_395+c_396-40*c_24*p1.z*c_25-24*c_18*p2.y*p1.z*c_25+24*p1.y*c_19*p1.z*
        c_25+40*c_20*p1.z*c_25+144*c_18*p3.y*p1.z*c_25+216*p1.y*p2.y*p3.y*p1.z*c_25+144*c_19*p3.y*p1.z*c_25+72*p1.y*c_21*p1.z*
        c_25+72*p2.y*c_21*p1.z*c_25+c_349-8*c_24*c_26-12*c_18*p2.y*c_26+20*c_20*c_26+36*c_18*p3.y*c_26+96*p1.y*p2.y*p3.y*c_26+c_399+24*
        p1.y*c_21*c_26+48*p2.y*c_21*c_26+12*c_22*c_26-189*c_121*p1.z*p3.z+270*c_118*p2.y*p1.z*p3.z+180*c_24*c_19*p1.z*p3.z+108*
        c_18*c_20*p1.z*p3.z+54*p1.y*c_119*p1.z*p3.z+18*c_122*p1.z*p3.z-135*c_118*p3.y*p1.z*p3.z+180*c_24*p2.y*p3.y*p1.z*
        p3.z+108*c_18*c_19*p3.y*p1.z*p3.z+54*p1.y*c_20*p3.y*p1.z*p3.z+18*c_119*p3.y*p1.z*p3.z-90*c_24*c_21*p1.z*p3.z+108*
        c_18*p2.y*c_21*p1.z*p3.z+54*p1.y*c_19*c_21*p1.z*p3.z+18*c_20*c_21*p1.z*p3.z-54*c_18*c_22*p1.z*p3.z+54*p1.y*p2.y*c_22*
        p1.z*p3.z+18*c_19*c_22*p1.z*p3.z-27*p1.y*c_120*p1.z*p3.z+18*p2.y*c_120*p1.z*p3.z-9*c_123*p1.z*p3.z+280*c_24*c_23*
        p3.z-720*c_18*p2.y*c_23*p3.z-240*p1.y*c_19*c_23*p3.z-48*c_20*c_23*p3.z-120*c_18*p3.y*c_23*p3.z-240*p1.y*p2.y*p3.y*c_23*
        p3.z-48*c_19*p3.y*c_23*p3.z-120*p1.y*c_21*c_23*p3.z+c_164+c_193+45*c_118*p2.y*p2.z*p3.z+72*c_24*c_19*p2.z*p3.z+81*
        c_18*c_20*p2.z*p3.z+72*p1.y*c_119*p2.z*p3.z+c_401-45*c_118*p3.y*p2.z*p3.z+27*c_18*c_19*p3.y*p2.z*p3.z+36*p1.y*c_20*
        p3.y*p2.z*p3.z+27*c_119*p3.y*p2.z*p3.z-72*c_24*c_21*p2.z*p3.z-27*c_18*p2.y*c_21*p2.z*p3.z+9*c_20*c_21*p2.z*p3.z-81*
        c_18*c_22*p2.z*p3.z-36*p1.y*p2.y*c_22*p2.z*p3.z-9*c_19*c_22*p2.z*p3.z-72*p1.y*c_120*p2.z*p3.z-27*p2.y*c_120*p2.z*
        p3.z+c_355-360*c_18*p2.y*c_0*p2.z*p3.z-288*p1.y*c_19*c_0*p2.z*p3.z-108*c_20*c_0*p2.z*p3.z+360*c_18*p3.y*c_0*p2.z*p3.z-36*
        c_19*p3.y*c_0*p2.z*p3.z+288*p1.y*c_21*c_0*p2.z*p3.z+36*p2.y*c_21*c_0*p2.z*p3.z+108*c_22*c_0*p2.z*p3.z-144*c_18*p2.y*
        p1.z*c_1*p3.z-216*p1.y*c_19*p1.z*c_1*p3.z-144*c_20*p1.z*c_1*p3.z+144*c_18*p3.y*p1.z*c_1*p3.z+72*p1.y*p2.y*p3.y*
        p1.z*c_1*p3.z+144*p1.y*c_21*p1.z*c_1*p3.z+72*p2.y*c_21*p1.z*c_1*p3.z+72*c_22*p1.z*c_1*p3.z-36*c_18*p2.y*c_25*p3.z-96*
        p1.y*c_19*c_25*p3.z+c_405+36*c_18*p3.y*c_25*p3.z+48*p1.y*p2.y*p3.y*c_25*p3.z+24*c_19*p3.y*c_25*p3.z+48*p1.y*c_21*c_25*
        p3.z+60*p2.y*c_21*c_25*p3.z+36*c_22*c_25*p3.z-27*c_121*c_2+45*c_118*p2.y*c_2+36*c_24*c_19*c_2+27*c_18*c_20*c_2+18*p1.y*
        c_119*c_2+c_259-45*c_118*p3.y*c_2+72*c_24*p2.y*p3.y*c_2+54*c_18*c_19*p3.y*c_2+36*p1.y*c_20*p3.y*c_2+18*c_119*p3.y*c_2-54*
        c_24*c_21*c_2+81*c_18*p2.y*c_21*c_2+54*p1.y*c_19*c_21*c_2+27*c_20*c_21*c_2-54*c_18*c_22*c_2+72*p1.y*p2.y*c_22*c_2+36*c_19*
        c_22*c_2-45*p1.y*c_120*c_2+c_165-27*c_123*c_2+120*c_24*c_0*c_2-360*c_18*p2.y*c_0*c_2-144*p1.y*c_19*c_0*c_2+c_360-288*p1.y*p2.y*
        p3.y*c_0*c_2+c_361-72*p1.y*c_21*c_0*c_2+c_362-48*c_22*c_0*c_2-144*c_18*p2.y*p1.z*p2.z*c_2-144*p1.y*c_19*p1.z*p2.z*
        c_2-72*c_20*p1.z*p2.z*c_2+144*c_18*p3.y*p1.z*p2.z*c_2-72*p1.y*p2.y*p3.y*p1.z*p2.z*c_2-72*c_19*p3.y*p1.z*p2.z*c_2+216*
        p1.y*c_21*p1.z*p2.z*c_2+144*c_22*p1.z*p2.z*c_2-36*c_18*p2.y*c_1*c_2-72*p1.y*c_19*c_1*c_2-72*c_20*c_1*c_2+36*c_18*p3.y*
        c_1*c_2-36*c_19*p3.y*c_1*c_2+72*p1.y*c_21*c_1*c_2+36*p2.y*c_21*c_1*c_2+72*c_22*c_1*c_2+40*c_24*p1.z*c_27-144*c_18*p2.y*p1.z*
        c_27-72*p1.y*c_19*p1.z*c_27+c_407+24*c_18*p3.y*p1.z*c_27-216*p1.y*p2.y*p3.y*p1.z*c_27-72*c_19*p3.y*p1.z*c_27-24*p1.y*
        c_21*p1.z*c_27-144*p2.y*c_21*p1.z*c_27-40*c_22*p1.z*c_27-36*c_18*p2.y*p2.z*c_27-48*p1.y*c_19*p2.z*c_27-36*c_20*p2.z*
        c_27+36*c_18*p3.y*p2.z*c_27-48*p1.y*p2.y*p3.y*p2.z*c_27-60*c_19*p3.y*p2.z*c_27+96*p1.y*c_21*p2.z*c_27-24*p2.y*c_21*p2.z*
        c_27+c_368+8*c_24*c_28-36*c_18*p2.y*c_28-24*p1.y*c_19*c_28-12*c_20*c_28+12*c_18*p3.y*c_28-96*p1.y*p2.y*p3.y*c_28-48*c_19*
        p3.y*c_28+c_369-20*c_22*c_28+15*c_78*p3.x*c_56*c_77+15*c_162*(p2.y*c_12*c_378+p3.y*(c_67+c_149+c_1+c_92+c_124+c_125)+p1.y*
        (c_64+c_11+c_129+c_125-p1.z*c_154))-15*c_126*(p3.y*c_34*(c_55+c_127+p3.z)+p2.y*(c_67+c_16+c_128+c_44+c_124+c_2)+p1.y*
        (c_64+c_128+c_129+c_7-p1.z*c_144))-3*p2.x*p3.x*c_77*(9*c_19*p1.z+c_316+9*c_21*p1.z+40*c_23+12*c_19*p2.z+12*p2.y*p3.y*p2.z+6*
        c_21*p2.z+48*c_0*p2.z+36*p1.z*c_1+16*c_25+6*c_19*p3.z+12*p2.y*p3.y*p3.z+c_317+48*c_0*p3.z+c_318+24*c_1*p3.z+36*p1.z*
        c_2+24*p2.z*c_2+c_319-5*c_40*c_171+6*c_18*c_132+6*p1.y*(p2.y*c_133+p3.y*c_134))-3*c_69*(-4*c_20*c_0-9*c_19*p3.y*c_0-6*p2.y*
        c_21*c_0-3*c_22*c_0-20*p2.y*c_38-40*p3.y*c_38-10*c_20*p1.z*p2.z-24*p2.y*c_23*p2.z-32*p3.y*c_23*p2.z+c_135+c_136+12*
        p2.y*c_21*c_1+3*c_22*c_1+40*p2.y*p1.z*c_25+32*p3.y*p1.z*c_25+c_137+40*p3.y*c_26-12*c_20*p1.z*p3.z-9*c_19*p3.y*p1.z*p3.z-6*
        p2.y*c_21*p1.z*p3.z-3*c_22*p1.z*p3.z-16*p2.y*c_23*p3.z-24*p3.y*c_23*p3.z-30*c_20*p2.z*p3.z-6*c_19*p3.y*p2.z*p3.z+3*
        p2.y*c_21*p2.z*p3.z+3*c_22*p2.z*p3.z-36*p2.y*c_0*p2.z*p3.z-12*p3.y*c_0*p2.z*p3.z-48*p2.y*p1.z*c_1*p3.z+12*p3.y*
        p1.z*c_1*p3.z-40*p2.y*c_25*p3.z+24*p3.y*c_25*p3.z-6*c_20*c_2+c_138-3*p2.y*c_21*c_2+c_139-12*p3.y*c_0*c_2-24*p2.y*p1.z*
        p2.z*c_2-24*p2.y*c_1*c_2+12*p3.y*c_1*c_2-8*p2.y*p1.z*c_27-4*p3.y*p1.z*c_27-12*p2.y*p2.z*c_27+4*p3.y*p2.z*c_27-4*
        p2.y*c_28+15*c_40*c_151*c_143+2*c_24*(c_15+c_112+c_153+c_5+c_276)+p1.y*(c_384+15*c_40*p1.z*p2.z-40*c_23*p2.z+15*c_40*c_1+24*
        p1.z*c_25+c_167-15*c_40*p1.z*p3.z+40*c_23*p3.z+48*c_0*p2.z*p3.z+36*p1.z*c_1*p3.z+16*c_25*p3.z+c_145+24*c_0*c_2+24*p1.z*
        p2.z*c_2+12*c_1*c_2+12*p1.z*c_27+8*p2.z*c_27+c_146-6*p2.y*p3.y*c_34*c_147+3*c_21*(c_158+c_112+c_148+c_17+c_2)-3*c_19*c_168)+3*
        c_18*(p3.y*c_374+p2.y*(c_112+c_32+c_2+2*p1.z*c_107)))+3*c_40*(-3*c_20*c_12*c_151-3*c_19*p3.y*c_449-2*c_22*
        (c_64+c_65+c_109+c_92+c_117+c_152)+2*c_24*(c_15+c_109+c_153+c_90+c_275)-p2.y*c_21*c_445-4*p2.y*c_12*c_448-4*p3.y*(c_201+c_26+c_228+c_229+c_230-15*
        c_28+3*c_0*p2.z*c_144+c_23*(c_48+c_175)+2*p1.z*(c_25+c_155+c_156+c_232))+c_18*(p2.y*(c_375+c_65+c_187+c_188+c_184)+3*
        p3.y*(c_1+c_32+c_90+2*p1.z*c_97))+p1.y*(-6*p2.y*p3.y*c_12*c_157-3*c_21*c_200+3*c_19*(c_158+c_159+c_1+c_17+c_90)+4*(-15*
        c_38+c_26+10*c_23*c_4+c_433+c_387+c_434+c_202+6*c_0*p2.z*c_107+3*p1.z*(c_25+2*c_1*p3.z+c_160+c_161)))))+c_69*(15*c_162*p2.y*
        c_0+c_341-27*c_122*c_0-15*c_162*p3.y*c_0-9*c_40*c_19*p3.y*c_0+45*c_119*p3.y*c_0+9*c_40*p2.y*c_21*c_0+36*c_20*c_21*c_0+18*c_40*
        c_22*c_0+27*c_19*c_22*c_0+c_342+c_390-12*c_40*p2.y*c_38+8*c_20*c_38+12*c_40*p3.y*c_38-36*c_19*p3.y*c_38-24*p2.y*c_21*c_38-12*
        c_22*c_38+45*c_162*p2.y*p1.z*p2.z-90*c_40*c_20*p1.z*p2.z-189*c_122*p1.z*p2.z-30*c_162*p3.y*p1.z*p2.z+c_344+270*c_119*
        p3.y*p1.z*p2.z+27*c_40*p2.y*c_21*p1.z*p2.z+180*c_20*c_21*p1.z*p2.z+36*c_40*c_22*p1.z*p2.z+108*c_19*c_22*p1.z*
        p2.z+c_252+18*c_123*p1.z*p2.z-36*c_40*p2.y*c_23*p2.z+c_163+c_345-144*c_19*p3.y*c_23*p2.z-72*p2.y*c_21*c_23*p2.z+c_346-30*c_162*
        p2.y*c_1-30*c_40*c_20*c_1-60*c_162*p3.y*c_1+18*c_40*p2.y*c_21*c_1+12*c_40*c_22*c_1+c_347+c_348+36*c_40*p3.y*c_0*c_1-360*
        c_19*p3.y*c_0*c_1-144*p2.y*c_21*c_0*c_1+c_256-120*c_40*p2.y*p1.z*c_25+280*c_20*p1.z*c_25+48*c_40*p3.y*p1.z*c_25-720*c_19*
        p3.y*p1.z*c_25-240*p2.y*c_21*p1.z*c_25-48*c_22*p1.z*c_25+180*c_40*p2.y*c_26+60*c_40*p3.y*c_26+420*c_19*p3.y*c_26+120*p2.y*
        c_21*c_26+c_257+60*c_162*p2.y*p1.z*p3.z-36*c_40*c_20*p1.z*p3.z+c_350-27*c_40*c_19*p3.y*p1.z*p3.z+c_351+36*c_40*p2.y*
        c_21*p1.z*p3.z+72*c_20*c_21*p1.z*p3.z+c_352+81*c_19*c_22*p1.z*p3.z+72*p2.y*c_120*p1.z*p3.z+c_353-24*c_40*p2.y*c_23*
        p3.z+36*c_40*p3.y*c_23*p3.z-36*c_19*p3.y*c_23*p3.z+c_164-36*c_22*c_23*p3.z+15*c_162*p2.y*p2.z*p3.z-30*c_40*c_20*p2.z*
        p3.z+189*c_122*p2.z*p3.z-75*c_162*p3.y*p2.z*p3.z-18*c_40*c_19*p3.y*p2.z*p3.z+c_354+18*c_40*p2.y*c_21*p2.z*p3.z+90*c_20*
        c_21*p2.z*p3.z+30*c_40*c_22*p2.z*p3.z+54*c_19*c_22*p2.z*p3.z+27*p2.y*c_120*p2.z*p3.z+9*c_123*p2.z*p3.z+c_356+72*c_40*
        p3.y*c_0*p2.z*p3.z-144*c_19*p3.y*c_0*p2.z*p3.z-144*p2.y*c_21*c_0*p2.z*p3.z-72*c_22*c_0*p2.z*p3.z-144*c_40*p2.y*p1.z*
        c_1*p3.z+108*c_40*p3.y*p1.z*c_1*p3.z-360*c_19*p3.y*p1.z*c_1*p3.z-288*p2.y*c_21*p1.z*c_1*p3.z-108*c_22*p1.z*c_1*
        p3.z+120*c_40*p2.y*c_25*p3.z-280*c_20*c_25*p3.z+72*c_40*p3.y*c_25*p3.z+c_358+120*p2.y*c_21*c_25*p3.z+c_194+75*c_162*p2.y*
        c_2-12*c_40*c_20*c_2+27*c_122*c_2+75*c_162*p3.y*c_2-18*c_40*c_19*p3.y*c_2+45*c_119*p3.y*c_2+c_260+30*c_40*c_22*c_2+54*c_19*c_22*
        c_2+c_165+27*c_123*c_2+c_359+72*c_40*p3.y*c_0*c_2-36*c_19*p3.y*c_0*c_2+c_262-72*c_22*c_0*c_2-108*c_40*p2.y*p1.z*p2.z*
        c_2+144*c_40*p3.y*p1.z*p2.z*c_2+c_363-216*p2.y*c_21*p1.z*p2.z*c_2-144*c_22*p1.z*p2.z*c_2+c_263+c_265+48*c_22*c_1*c_2-48*c_40*
        p2.y*p1.z*c_27+c_364-36*c_19*p3.y*p1.z*c_27-96*p2.y*c_21*p1.z*c_27+c_366-72*c_40*p2.y*p2.z*c_27+c_195+c_367-24*c_19*
        p3.y*p2.z*c_27+24*p2.y*c_21*p2.z*c_27+40*c_22*p2.z*c_27-60*c_40*p2.y*c_28-8*c_20*c_28-180*c_40*p3.y*c_28-12*c_19*p3.y*
        c_28+20*c_22*c_28-9*c_121*(c_58+p3.z*c_97+p1.z*c_227)-c_24*(c_331-9*c_40*p1.z*p2.z+40*c_23*p2.z-9*c_40*c_1+48*c_0*c_1+40*p1.z*
        c_25+c_167+9*c_40*p1.z*p3.z-120*c_23*p3.z-144*c_0*p2.z*p3.z-108*p1.z*c_1*p3.z-48*c_25*p3.z+9*c_40*c_2-72*c_0*c_2-72*
        p1.z*p2.z*c_2+c_371-36*p1.z*c_27-24*p2.z*c_27-12*c_28-18*p2.y*p3.y*c_12*c_133-9*c_21*c_12*c_134+27*c_19*c_168)-9*c_118*(-(p3.y*
        c_12*c_132)+p2.y*(c_15+2*p3.z*c_154+p1.z*(c_70+c_421)))-3*c_18*(-18*p2.y*c_21*c_12*c_151-9*c_19*p3.y*c_12*c_56+6*c_20*
        (c_58+2*p3.z*c_196+p1.z*(c_127+c_130))+3*c_40*(-(p3.y*c_312)+p2.y*c_309)+8*p2.y*(c_379+c_23*(p2.z-4*p3.z)-10*c_25*
        p3.z+c_297-3*p2.z*c_27-c_28+3*c_0*(c_1+c_169+c_7)+p1.z*(c_170-12*c_1*p3.z-6*p2.z*c_2-2*c_27))+p3.y*c_12*(-3*c_21*c_171+c_237))-3*
        p1.y*(-12*c_20*p3.y*c_12*c_173+5*c_162*c_4*(p1.z+c_70+c_166)+15*c_119*(c_0+p1.z*c_154+p3.z*c_8)+2*p2.y*p3.y*c_12*(-3*c_21*
        c_210+c_218)+c_21*c_12*(c_220+4*c_226)-c_19*(9*c_21*c_12*c_179+4*(c_38-35*c_26+60*c_25*p3.z+c_206+12*p2.z*c_27+3*c_28+3*c_0*
        p3.z*(c_48+p3.z)+c_298+p1.z*(c_284+30*c_1*p3.z+c_181+c_388)))+c_40*(-3*c_21*c_274+c_19*(c_335+c_65+c_183+c_62+c_184)-6*p2.y*
        p3.y*c_4*c_186-4*c_4*c_283)))+c_40*(-9*c_122*c_0+c_389-27*c_20*c_21*c_0-36*c_19*c_22*c_0-45*p2.y*c_120*c_0+27*c_123*c_0+12*
        c_20*c_38+24*c_19*p3.y*c_38+36*p2.y*c_21*c_38-8*c_22*c_38+c_392-72*c_119*p3.y*p1.z*p2.z-81*c_20*c_21*p1.z*p2.z-72*c_19*
        c_22*p1.z*p2.z+c_393+36*c_20*c_23*p2.z+c_191+36*p2.y*c_21*c_23*p2.z-27*c_122*c_1+c_192-54*c_20*c_21*c_1+c_253-45*p2.y*c_120*
        c_1-27*c_123*c_1+72*c_20*c_0*c_1+c_255+36*p2.y*c_21*c_0*c_1+c_397+96*c_19*p3.y*p1.z*c_25+36*p2.y*c_21*p1.z*c_25-20*c_20*
        c_26+12*p2.y*c_21*c_26+8*c_22*c_26-18*c_122*p1.z*p3.z+c_258-108*c_20*c_21*p1.z*p3.z-180*c_19*c_22*p1.z*p3.z-270*p2.y*c_120*
        p1.z*p3.z+189*c_123*p1.z*p3.z+c_400+72*c_19*p3.y*c_23*p3.z+144*p2.y*c_21*c_23*p3.z+c_193-9*c_122*p2.z*p3.z-27*c_119*
        p3.y*p2.z*p3.z-54*c_20*c_21*p2.z*p3.z-90*c_19*c_22*p2.z*p3.z+c_402-189*c_123*p2.z*p3.z+72*c_20*c_0*p2.z*p3.z+144*c_19*
        p3.y*c_0*p2.z*p3.z+144*p2.y*c_21*c_0*p2.z*p3.z+144*c_20*p1.z*c_1*p3.z+216*c_19*p3.y*p1.z*c_1*p3.z+c_404-40*c_20*c_25*
        p3.z-24*c_19*p3.y*c_25*p3.z+24*p2.y*c_21*c_25*p3.z+c_194+c_261+144*c_19*p3.y*c_0*c_2+360*p2.y*c_21*c_0*c_2+c_406+108*
        c_20*p1.z*p2.z*c_2+288*c_19*p3.y*p1.z*p2.z*c_2+360*p2.y*c_21*p1.z*p2.z*c_2-48*c_20*c_1*c_2+c_264+c_266+48*c_20*p1.z*c_27+240*
        c_19*p3.y*p1.z*c_27+720*p2.y*c_21*p1.z*c_27-280*c_22*p1.z*c_27+c_195-120*c_19*p3.y*p2.z*c_27+c_408+280*c_22*p2.z*
        c_27+c_267-120*c_19*p3.y*c_28-420*p2.y*c_21*c_28+9*c_121*(c_58+p1.z*c_196+p2.z*c_107)-9*c_118*(p2.y*c_34*c_132-p3.y*(c_15+2*
        p2.z*c_144+p1.z*(c_338+c_49)))+5*c_162*(5*p3.y*c_34*c_246+p1.y*(c_0+c_9+c_197+c_198+p1.z*c_204)+p2.y*(c_58+c_11+c_10+c_199+c_299))+c_24*
        (-9*c_19*c_34*c_133-18*p2.y*p3.y*c_34*c_134+27*c_21*c_200+4*(c_201-3*c_26-6*c_25*p3.z+c_414+c_333+c_202+10*c_23*
        c_204-6*c_0*(c_109+c_153+c_43)-p1.z*(c_415+18*c_1*p3.z+27*p2.z*c_2+c_209)))-3*p1.y*(3*c_119*c_34*c_173+6*c_20*p3.y*c_34*
        c_179-15*c_120*(c_0+p1.z*c_144+p2.z*c_205)+4*c_21*(c_38+c_300+12*c_25*p3.z+c_206+60*p2.z*c_27+c_301+c_23*c_207+3*c_0*p2.z*
        c_248+p1.z*(c_435+c_208+30*p2.z*c_2+c_209))-c_19*c_34*(-9*c_21*c_210+c_218)-4*p2.y*p3.y*c_34*(c_220+2*c_226))-3*c_18*(18*c_19*
        p3.y*c_34*c_151+3*c_20*c_34*c_56-6*c_22*(c_58+2*p2.z*c_227+p1.z*(c_48+c_166))+8*p3.y*(c_26+c_23*(c_48+c_3)+c_228+c_229+c_230+c_311+3*
        c_0*(c_1+c_32+c_7)+p1.z*(c_385+c_231+c_181+c_232))-p2.y*c_34*(-9*c_21*c_171+c_237))+c_40*(-(c_20*
        (c_58+c_108+c_112+c_238+c_124+c_152))+c_24*(c_64+c_108+c_109+c_92+c_50+c_152)-3*c_19*p3.y*(c_67+c_91+c_1+c_239+c_124+c_242)+c_18*(-3*p2.y*c_34*
        c_171+3*p3.y*(c_0+c_91+c_240+c_92+c_241+c_242))-3*p1.y*(4*c_38-10*c_21*c_1-4*c_26-4*c_23*c_244-60*c_21*p2.z*p3.z-16*c_25*
        p3.z-35*c_21*c_2-40*c_1*c_2-80*p2.z*c_27-5*c_21*p1.z*c_97+c_19*c_34*c_210+4*p2.y*p3.y*c_34*c_219-4*c_0*(c_1+c_150+c_125)-4*
        p1.z*(c_25+c_250+c_251+c_232))-p3.y*c_34*(5*c_21*c_246+12*(c_23+c_25+c_247+15*p2.z*c_2+35*c_27+c_0*c_227+p1.z*(c_1+c_124+15*
        c_2)))-3*p2.y*(5*c_21*(c_64+2*p1.z*c_205+p3.z*(p2.z+c_245))+4*(c_38+c_302+c_304-p2.z*c_295+c_307))))+p2.x*p3.x*(-45*c_122*
        c_0-27*c_119*p3.y*c_0-9*c_20*c_21*c_0+9*c_19*c_22*c_0+27*p2.y*c_120*c_0+45*c_123*c_0+36*c_20*c_38+12*c_19*p3.y*c_38-12*p2.y*
        c_21*c_38-36*c_22*c_38-270*c_122*p1.z*p2.z-135*c_119*p3.y*p1.z*p2.z-36*c_20*c_21*p1.z*p2.z+27*c_19*c_22*p1.z*p2.z+c_252+45*
        c_123*p1.z*p2.z+144*c_20*c_23*p2.z+36*c_19*p3.y*c_23*p2.z-24*p2.y*c_21*c_23*p2.z-36*c_22*c_23*p2.z-189*c_122*c_1-135*
        c_119*p3.y*c_1-90*c_20*c_21*c_1+c_253-27*p2.y*c_120*c_1+c_254+360*c_20*c_0*c_1+c_255-36*p2.y*c_21*c_0*c_1+c_256+720*c_20*
        p1.z*c_25+c_398-48*p2.y*c_21*p1.z*c_25-36*c_22*p1.z*c_25-140*c_20*c_26+60*c_19*p3.y*c_26+60*p2.y*c_21*c_26+c_257-45*c_122*
        p1.z*p3.z+c_258-27*c_20*c_21*p1.z*p3.z+36*c_19*c_22*p1.z*p3.z+135*p2.y*c_120*p1.z*p3.z+270*c_123*p1.z*p3.z+36*c_20*c_23*
        p3.z+24*c_19*p3.y*c_23*p3.z-36*p2.y*c_21*c_23*p3.z-144*c_22*c_23*p3.z+144*c_20*c_0*p2.z*p3.z+c_403+c_357-144*c_22*c_0*
        p2.z*p3.z+360*c_20*p1.z*c_1*p3.z+144*c_19*p3.y*p1.z*c_1*p3.z-108*p2.y*c_21*p1.z*c_1*p3.z-144*c_22*p1.z*c_1*p3.z-160*
        c_20*c_25*p3.z+96*p2.y*c_21*c_25*p3.z+64*c_22*c_25*p3.z+c_259+27*c_119*p3.y*c_2+c_260+90*c_19*c_22*c_2+135*p2.y*c_120*
        c_2+189*c_123*c_2+c_261+36*c_19*p3.y*c_0*c_2+c_262-360*c_22*c_0*c_2+144*c_20*p1.z*p2.z*c_2+108*c_19*p3.y*p1.z*p2.z*c_2-144*
        p2.y*c_21*p1.z*p2.z*c_2-360*c_22*p1.z*p2.z*c_2+c_263+c_264+c_265+c_266+36*c_20*p1.z*c_27+48*c_19*p3.y*p1.z*c_27+c_365-720*
        c_22*p1.z*c_27-64*c_20*p2.z*c_27-96*c_19*p3.y*p2.z*c_27+160*c_22*p2.z*c_27+c_267-60*c_19*p3.y*c_28-60*p2.y*c_21*c_28+140*
        c_22*c_28+9*c_121*c_4*c_132-15*c_162*(p1.y*c_4*(p1.z+c_68+c_175)+p3.y*(c_0+c_268+c_109+c_269+c_59+c_410)-p2.y*c_296)-9*
        c_118*(p2.y*(c_15+c_339+c_95+c_92+c_90)+p3.y*(-5*c_0+c_270+c_271+c_269+c_60))-3*c_24*(-18*p2.y*p3.y*c_4*c_151-3*c_21*
        (c_273+c_16+c_112+c_381+c_272)+3*c_19*(c_273-3*p1.z*p2.z+c_287+c_92+c_90)+4*c_4*c_236)-3*p1.y*(-6*p2.y*c_22*c_274+6*c_20*p3.y*
        (c_64+c_149+c_81+c_63+c_5)+3*c_119*(c_273+c_183+c_90+c_275)-3*c_120*(c_273+c_276+2*(c_1-15*c_2))+4*c_21*(8*c_38+c_376+6*c_25*p3.z-20*
        p2.z*c_27-60*c_28+c_23*(c_277+c_340)+6*c_0*c_224+p1.z*(c_170+c_189+c_156+c_209))+8*p2.y*p3.y*c_4*c_283-c_19*(32*c_38+4*c_23*
        (15*p2.z+c_245)+24*c_0*c_215+4*(-60*c_26-20*c_25*p3.z+6*p2.z*c_27+c_146+9*c_21*(c_1+c_7))+p1.z*(9*c_21*c_4+4*
        (c_284+c_231+c_190+c_249))))+c_40*(3*c_24*c_4*c_171-3*c_18*(-(p3.y*(c_58+c_285+c_187+c_372+c_59+c_308))+p2.y*(c_58+c_383+c_95+c_92+c_129+c_46))-3*
        c_19*p3.y*(c_15+5*p1.z*(c_70+c_130)+2*(c_1+c_150+c_152))-c_20*(c_286+9*p1.z*(c_48+c_49)+2*(c_39+c_59+c_152))-3*p1.y*
        (c_19*(c_67+c_182+c_287+c_288+c_289+c_46)+2*p2.y*p3.y*(c_64+c_159+c_290+c_269+c_291+c_242)-2*c_21*(c_67+c_187+c_292+c_425+c_293)-4*
        c_4*(c_23+2*c_0*c_107+p1.z*(c_109+c_59+c_242)+4*c_295))-6*p2.y*(c_21*c_296+2*(c_38+c_386-8*c_25*p3.z+c_297+c_202+c_298+3*
        c_0*c_224+p1.z*(c_177+c_189+c_181+c_178)))+2*p3.y*(5*c_21*(c_58+c_1+c_150+c_426+c_299)+6*(c_38+c_300+8*c_25*
        p3.z+c_428+c_301+c_302+c_304+c_307)))-3*c_18*(-3*c_22*(c_286+c_16+c_112+c_88+c_308)+9*c_19*p3.y*c_309+3*c_20*(c_286+c_41+c_310+c_92+c_90)+4*
        p3.y*(c_313+2*c_23*c_454+c_0*(c_416+c_153+c_113)+p1.z*(7*c_25+c_231-3*p2.z*c_2-20*c_27)+4*(c_26+c_25*p3.z-2*p2.z*c_27+c_311))-p2.y*
        (9*c_21*c_312+4*(c_313+2*c_23*c_377+c_0*(-9*c_1+c_153+c_184)+p1.z*(-20*c_25-3*c_1*p3.z+c_156+7*c_27)+4*(-5*c_26-2*c_25*
        p3.z+p2.z*c_27+c_28)))))+p1.x*(15*c_126*p3.x*c_173*c_77-15*c_314*(p3.y*c_34*(c_47+c_6+p3.z)+p1.y*c_337+p2.y*
        (c_58+c_91+c_315+c_31+c_153+c_2))-3*c_69*p3.x*c_77*(12*c_19*p1.z+c_316+6*c_21*p1.z+16*c_23+30*c_19*p2.z+24*p2.y*p3.y*p2.z+9*c_21*
        p2.z+36*c_0*p2.z+48*p1.z*c_1+40*c_25+12*c_19*p3.z+18*p2.y*p3.y*p3.z+c_317+24*c_0*p3.z+c_318+48*c_1*p3.z+24*p1.z*c_2+36*
        p2.z*c_2+c_319+3*c_18*c_133-5*c_40*c_210+6*p1.y*(2*p3.y*c_151+p2.y*c_56))+c_78*(10*c_20*c_0+36*c_19*p3.y*c_0+18*p2.y*c_21*
        c_0+6*c_22*c_0+36*p2.y*c_38+48*p3.y*c_38+40*c_20*p1.z*p2.z+60*c_19*p3.y*p1.z*p2.z+24*p2.y*c_21*p1.z*p2.z+c_320+96*p2.y*
        c_23*p2.z+96*p3.y*c_23*p2.z+70*c_20*c_1-180*c_19*p3.y*c_1-60*p2.y*c_21*c_1-12*c_22*c_1+120*p2.y*c_0*c_1+c_321-420*p2.y*
        c_26-240*p3.y*c_26+30*c_20*p1.z*p3.z+c_322+21*p2.y*c_21*p1.z*p3.z+c_323+12*p2.y*c_23*p3.z+36*p3.y*c_23*p3.z+180*c_20*
        p2.z*p3.z+30*c_19*p3.y*p2.z*p3.z-12*p2.y*c_21*p2.z*p3.z+c_324+48*p2.y*c_0*p2.z*p3.z+60*p3.y*c_0*p2.z*p3.z+120*
        p2.y*p1.z*c_1*p3.z+24*p3.y*p1.z*c_1*p3.z+240*p2.y*c_25*p3.z-120*p3.y*c_25*p3.z+30*c_20*c_2+24*c_19*p3.y*c_2+c_325+12*
        p2.y*c_0*c_2+24*p3.y*c_0*c_2+c_326+c_327+120*p2.y*c_1*c_2-48*p3.y*c_1*c_2+12*p2.y*p1.z*c_27+c_328+48*p2.y*p2.z*c_27+c_329+c_330+15*
        c_40*(c_73+c_74)*c_179-c_24*(c_89+c_66+c_417+c_184+4*p1.z*(c_48+c_221))+3*p1.y*(c_331-10*c_40*p1.z*p2.z+32*c_23*
        p2.z-20*c_40*c_1+24*c_0*c_1-20*c_26+10*c_40*p1.z*p3.z-16*c_23*p3.z+5*c_40*p2.z*p3.z-36*c_0*p2.z*p3.z-48*p1.z*c_1*p3.z-40*
        c_25*p3.z+c_332-12*c_0*c_2-24*p1.z*p2.z*c_2-24*c_1*c_2-8*p1.z*c_27+c_333+c_334+c_21*(c_335+c_41+c_57+c_44+c_106+c_83)+2*c_19*
        c_337+2*p2.y*p3.y*(c_286+p1.z*(c_338+p3.z)-2*(c_39+c_32+c_2)))-3*c_18*(p3.y*(c_418+c_339+c_240+c_63+c_420+c_46)+p2.y*
        (c_64+p1.z*(c_338+c_340)+5*(c_112+c_150+c_2))))+p2.x*(30*c_162*p2.y*c_0+c_341-9*c_122*c_0-30*c_162*p3.y*c_0-18*c_40*c_19*p3.y*
        c_0+18*c_119*p3.y*c_0+18*c_20*c_21*c_0+36*c_40*c_22*c_0+18*c_19*c_22*c_0+c_342+18*c_123*c_0-48*c_40*p2.y*c_38+c_343+48*c_40*
        p3.y*c_38-48*c_19*p3.y*c_38-48*p2.y*c_21*c_38-48*c_22*c_38+30*c_162*p2.y*p1.z*p2.z-36*c_40*c_20*p1.z*p2.z+c_344-18*c_40*
        p2.y*c_21*p1.z*p2.z-72*c_40*p2.y*c_23*p2.z+64*c_20*c_23*p2.z+c_345-72*c_19*p3.y*c_23*p2.z-48*p2.y*c_21*c_23*p2.z+c_346+189*
        c_122*c_1+30*c_162*p3.y*c_1-36*c_40*c_19*p3.y*c_1-270*c_119*p3.y*c_1-54*c_40*p2.y*c_21*c_1-180*c_20*c_21*c_1-36*c_40*
        c_22*c_1-108*c_19*c_22*c_1-54*p2.y*c_120*c_1-18*c_123*c_1+c_347+c_348-48*c_40*p2.y*p1.z*c_25+160*c_20*p1.z*c_25-24*c_40*p3.y*
        p1.z*c_25+240*c_19*p3.y*p1.z*c_25+96*p2.y*c_21*p1.z*c_25+c_349+140*c_20*c_26-48*c_40*p3.y*c_26+720*c_19*p3.y*c_26+240*
        p2.y*c_21*c_26+48*c_22*c_26+45*c_162*p2.y*p1.z*p3.z-9*c_40*c_20*p1.z*p3.z+45*c_122*p1.z*p3.z+c_350-9*c_40*c_19*p3.y*p1.z*
        p3.z+c_351+18*c_40*p2.y*c_21*p1.z*p3.z+45*c_20*c_21*p1.z*p3.z+c_352+45*c_19*c_22*p1.z*p3.z+45*p2.y*c_120*p1.z*
        p3.z+c_353-60*c_40*p2.y*c_23*p3.z-36*c_20*c_23*p3.z+108*c_40*p3.y*c_23*p3.z-60*c_19*p3.y*c_23*p3.z-84*p2.y*c_21*c_23*p3.z-108*
        c_22*c_23*p3.z-30*c_162*p2.y*p2.z*p3.z+36*c_40*c_20*p2.z*p3.z+270*c_122*p2.z*p3.z+75*c_162*p3.y*p2.z*p3.z+27*c_40*
        c_19*p3.y*p2.z*p3.z+c_354-36*c_40*p2.y*c_21*p2.z*p3.z+36*c_20*c_21*p2.z*p3.z-90*c_40*c_22*p2.z*p3.z-27*c_19*c_22*p2.z*
        p3.z-54*p2.y*c_120*p2.z*p3.z+c_355+c_356-144*c_20*c_0*p2.z*p3.z+36*c_40*p3.y*c_0*p2.z*p3.z-108*c_19*p3.y*c_0*p2.z*
        p3.z+c_357-36*c_22*c_0*p2.z*p3.z-36*c_40*p2.y*p1.z*c_1*p3.z-360*c_20*p1.z*c_1*p3.z-36*c_40*p3.y*p1.z*c_1*p3.z-72*c_19*
        p3.y*p1.z*c_1*p3.z+36*p2.y*c_21*p1.z*c_1*p3.z+36*c_22*p1.z*c_1*p3.z+48*c_40*p2.y*c_25*p3.z-720*c_20*c_25*p3.z-108*
        c_40*p3.y*c_25*p3.z+c_358+240*p2.y*c_21*c_25*p3.z+108*c_22*c_25*p3.z-75*c_162*p2.y*c_2+27*c_40*c_20*c_2+45*c_122*c_2+72*c_40*
        c_19*p3.y*c_2+72*c_119*p3.y*c_2+90*c_40*p2.y*c_21*c_2+81*c_20*c_21*c_2+72*c_19*c_22*c_2+c_165+c_359+c_360+144*c_40*p3.y*
        c_0*c_2+c_361+c_362-144*c_22*c_0*c_2-144*c_20*p1.z*p2.z*c_2+c_363-72*p2.y*c_21*p1.z*p2.z*c_2+108*c_40*p2.y*c_1*c_2-360*c_20*
        c_1*c_2-144*c_40*p3.y*c_1*c_2-144*c_19*p3.y*c_1*c_2+108*p2.y*c_21*c_1*c_2+144*c_22*c_1*c_2+24*c_40*p2.y*p1.z*c_27-36*c_20*
        p1.z*c_27+c_364-84*c_19*p3.y*p1.z*c_27+c_365+c_366+144*c_40*p2.y*p2.z*c_27-144*c_20*p2.z*c_27+c_367-180*c_19*p3.y*p2.z*
        c_27-48*p2.y*c_21*p2.z*c_27+c_368+120*c_40*p2.y*c_28-36*c_20*c_28-96*c_19*p3.y*c_28+c_369-9*c_121*(c_409+c_11+30*p1.z*
        p3.z+c_124+c_152)-c_24*(c_370-36*c_40*p1.z*p2.z+160*c_23*p2.z-18*c_40*c_1+120*c_0*c_1+64*p1.z*c_25+c_167+36*c_40*p1.z*p3.z-720*
        c_23*p3.z-9*c_40*p2.z*p3.z-360*c_0*p2.z*p3.z-144*p1.z*c_1*p3.z-36*c_25*p3.z+27*c_40*c_2-360*c_0*c_2-144*p1.z*p2.z*
        c_2+c_371-144*p1.z*c_27-36*p2.z*c_27-36*c_28-9*c_21*(c_114+c_271+c_372+c_106+c_113)+9*c_19*(c_89+c_95+c_88+c_32+c_2)+18*p2.y*
        p3.y*c_374)-9*c_118*(3*p2.y*c_93+p3.y*(c_375+c_112+15*p1.z*p3.z+c_124+8*c_2))-3*p1.y*(5*c_162*c_4*c_219-3*c_120*
        (c_335+c_271+c_269+c_106+c_125)+9*c_119*c_337-6*c_20*p3.y*(c_58+c_63+2*(-5*c_1+c_42+c_2))-4*c_21*(c_450+c_376+c_436+c_452+c_230+10*c_28-3*
        c_0*p3.z*c_144-4*c_23*c_377+c_456)+2*p2.y*p3.y*c_34*(-9*c_21*c_151+4*(c_172+c_211+c_231+c_160+c_27+6*c_0*c_154+3*p1.z*
        c_380))+c_40*(6*p2.y*p3.y*c_34*c_151-6*c_21*c_12*c_378+3*c_19*(c_67+c_57+c_169+c_7+2*p1.z*c_33)-4*c_4*c_226)+c_19*(-9*c_21*
        (c_64+c_57+c_44+c_10+c_2)+4*(c_422+c_379+c_451+c_229+3*p2.z*c_27+c_28+c_23*(-8*p2.z+c_130)+2*p1.z*p3.z*c_380+c_0*(-6*c_1+c_188+c_5))))-3*
        c_18*(-9*c_19*p3.y*c_34*c_147-3*c_22*(c_430+c_271+c_63+c_106+c_382)+3*c_20*(c_335+c_81+c_381+c_129+c_7)+3*c_40*(-(p3.y*
        (c_67+c_41+c_112+c_381+c_42+c_382))+p2.y*(c_67+c_383+c_57+c_63+c_35+c_2))-4*p3.y*(c_384+c_376+5*c_25*p3.z+c_229+c_453+8*c_28-10*
        c_23*c_97+6*c_0*p3.z*c_107+3*p1.z*(c_385+c_155+4*p2.z*c_2+c_249))-p2.y*(9*c_21*(c_67+c_271+c_31+c_35+c_7)+4*(c_201+c_386+10*
        c_23*p3.z+c_427+c_387+2*p2.z*c_27+c_28-6*c_0*(c_1+c_35+c_7)+p1.z*(-8*c_25+c_189+c_156+c_388)))))+p3.x*(-18*c_122*c_0+c_389-18*
        c_20*c_21*c_0-18*c_19*c_22*c_0-18*p2.y*c_120*c_0+c_390+48*c_20*c_38+48*c_19*p3.y*c_38+48*p2.y*c_21*c_38+c_391+c_392-45*
        c_119*p3.y*p1.z*p2.z-45*c_20*c_21*p1.z*p2.z-45*c_19*c_22*p1.z*p2.z+c_393-45*c_123*p1.z*p2.z+108*c_20*c_23*p2.z+84*c_19*
        p3.y*c_23*p2.z+60*p2.y*c_21*c_23*p2.z+36*c_22*c_23*p2.z+c_192-72*c_20*c_21*c_1-81*c_19*c_22*c_1-72*p2.y*c_120*c_1-45*
        c_123*c_1+144*c_20*c_0*c_1+c_394+c_395+c_396+c_397+c_398+84*p2.y*c_21*p1.z*c_25+36*c_22*p1.z*c_25+c_399+96*p2.y*c_21*c_26+36*
        c_22*c_26+c_400+48*c_19*p3.y*c_23*p3.z+72*p2.y*c_21*c_23*p3.z-64*c_22*c_23*p3.z+c_401+54*c_119*p3.y*p2.z*p3.z+27*c_20*c_21*
        p2.z*p3.z-36*c_19*c_22*p2.z*p3.z+c_402-270*c_123*p2.z*p3.z+36*c_20*c_0*p2.z*p3.z+c_403+108*p2.y*c_21*c_0*p2.z*
        p3.z+144*c_22*c_0*p2.z*p3.z+72*c_19*p3.y*p1.z*c_1*p3.z+c_404+144*c_22*p1.z*c_1*p3.z+c_405+48*c_19*p3.y*c_25*p3.z+180*p2.y*
        c_21*c_25*p3.z+144*c_22*c_25*p3.z+18*c_122*c_2+54*c_119*p3.y*c_2+108*c_20*c_21*c_2+180*c_19*c_22*c_2+270*p2.y*c_120*c_2-189*
        c_123*c_2+c_406-36*c_20*p1.z*p2.z*c_2-36*c_19*p3.y*p1.z*p2.z*c_2+72*p2.y*c_21*p1.z*p2.z*c_2+360*c_22*p1.z*p2.z*c_2-144*
        c_20*c_1*c_2-108*c_19*p3.y*c_1*c_2+144*p2.y*c_21*c_1*c_2+360*c_22*c_1*c_2+c_407-96*c_19*p3.y*p1.z*c_27-240*p2.y*c_21*p1.z*
        c_27-160*c_22*p1.z*c_27-108*c_20*p2.z*c_27-240*c_19*p3.y*p2.z*c_27+c_408+720*c_22*p2.z*c_27-48*c_20*c_28-240*c_19*p3.y*
        c_28-720*p2.y*c_21*c_28-140*c_22*c_28+9*c_121*(c_409+30*p1.z*p2.z+c_39+c_124+c_7)+15*c_162*(p2.y*c_12*(c_47+p2.z+c_175)+p3.y*
        (c_58+c_268+c_1+c_45+c_153+c_410)+p1.y*c_437)-9*c_118*(p2.y*(c_105-15*p1.z*p2.z+c_431+c_106+c_43)-3*p3.y*c_104)+c_24*(9*
        c_21*(c_89+c_41+c_1+c_32+c_116)-9*c_19*(c_114+c_411+c_290+c_106+c_43)+18*p2.y*p3.y*(c_373+c_149+c_112+c_32+c_5)+4*(c_412-9*
        c_26-20*c_23*(c_212+c_413)-9*c_25*p3.z+c_414-9*p2.z*c_27+c_202-30*c_0*(c_109+c_32+c_7)-4*p1.z*(c_415+c_189+c_190-4*c_27)))+c_40*
        (-3*c_20*c_12*c_210-3*c_19*p3.y*(c_335+c_285+c_109+c_45+c_129+c_308)+c_24*(c_89+c_416+c_417+c_242+4*p1.z*(c_212+c_130))+3*
        c_18*(p2.y*(c_418+c_182+c_240+c_419+c_420+c_46)+p3.y*(c_64+15*p1.z*p2.z+c_39+c_45+c_241+c_242))+3*p1.y*(2*c_21*
        (-c_0+c_149+c_1+c_124+c_152)+c_19*(c_432+c_109+c_124+c_46-2*p1.z*c_107)-2*p2.y*p3.y*(c_286+p1.z*c_429-2*(c_1+c_32+c_152))+4*c_442)-6*p2.y*
        (c_21*(c_335+c_240+c_124+c_425+5*p1.z*c_107)+2*c_12*(c_176+c_25+c_250+c_251+c_305+3*c_0*c_248+2*p1.z*c_303))-2*p3.y*(5*c_21*
        (c_0+c_182+c_109+c_88+18*p2.z*p3.z+c_426)+6*(3*c_38+c_26+c_427+c_428+20*p2.z*c_27+c_301+c_23*c_429+c_304+p1.z*p2.z*c_303)))-3*
        c_18*(3*c_20*(c_430+c_182+c_431+c_106+c_43)+9*c_19*p3.y*(c_67+c_268+c_11+c_35+c_43)+3*c_22*(c_432+c_182+c_1+c_150+c_242)+4*
        p3.y*(c_201+10*c_23*p2.z+c_26+c_433+c_387+c_434+c_311+6*c_0*(c_1+c_17+c_7)+p1.z*(c_435+c_231+c_190-8*c_27))+p2.y*(9*c_21*
        c_12*c_157+4*(c_384+8*c_26+c_436+c_229+5*p2.z*c_27+c_146+6*c_0*p2.z*c_97-10*c_23*c_107+3*p1.z*(c_170+c_250+c_160+c_161))))-3*
        p1.y*(18*c_20*p3.y*c_12*c_151-9*c_120*c_437+3*c_119*(c_335+c_65+c_128+c_106+c_43)-4*c_21*c_442+2*p2.y*(c_22*c_445-4*p3.y*c_12*
        c_448)+c_19*(9*c_21*c_449+4*(c_450+10*c_26+c_451+c_452+c_453+c_146-3*c_0*p2.z*c_154-4*c_23*c_454+c_456))))))/double(2903040);
}

double trig::c64() const{
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p11_4=p1.y*p11_3;
    double p11_5=p1.y*p11_4;
    double p11_6=p1.y*p11_5;
    double p11_7=p1.y*p11_6;
    double p12_2=p1.z*p1.z;
    double p12_3=p1.z*p12_2;
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p21_4=p2.y*p21_3;
    double p21_5=p2.y*p21_4;
    double p21_6=p2.y*p21_5;
    double p21_7=p2.y*p21_6;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p31_4=p3.y*p31_3;
    double p31_5=p3.y*p31_4;
    double p31_6=p3.y*p31_5;
    double p31_7=p3.y*p31_6;
    double p22_2=p2.z*p2.z;
    double p22_3=p2.z*p22_2;
    double p32_2=p3.z*p3.z;
    double p32_3=p3.z*p32_2;
    double p30_2=p3.x*p3.x;
    double p30_3=p3.x*p30_2;
    double p30_4=p3.x*p30_3;
    double p30_5=p3.x*p30_4;
    double p30_6=p3.x*p30_5;
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
    double c_0=2*p1.z;
    double c_1=-p3.z;
    double c_2=2*p2.z;
    double c_3=p1.z+c_2;
    double c_4=p3.y*c_3;
    double c_5=p11_2;
    double c_6=p12_3;
    double c_7=p21_2;
    double c_8=p21_3;
    double c_9=p31_2;
    double c_10=p31_3;
    double c_11=p12_2;
    double c_12=p22_2;
    double c_13=p22_3;
    double c_14=p11_3;
    double c_15=p32_2;
    double c_16=p32_3;
    double c_17=p1.z+c_1;
    double c_18=-p2.z;
    double c_19=c_18+p3.z;
    double c_20=p1.y*c_19;
    double c_21=c_0+p3.z;
    double c_22=c_2+p3.z;
    double c_23=-(p1.y*c_22);
    double c_24=c_0+p2.z;
    double c_25=p3.y*c_24;
    double c_26=p2.y*c_17;
    double c_27=2*p3.z;
    double c_28=p1.z+c_18;
    double c_29=p3.y*c_28;
    double c_30=p2.y*c_21;
    double c_31=c_29+c_30+c_23;
    double c_32=-p1.z;
    double c_33=p2.z+c_27;
    double c_34=p30_2;
    double c_35=-c_4;
    double c_36=p1.z+c_27;
    double c_37=p2.y*c_36;
    double c_38=c_32+p3.z;
    double c_39=6*p3.y*c_6;
    double c_40=p2.z+c_1;
    double c_41=12*p3.y*c_11*p3.z;
    double c_42=c_35+c_20+c_37;
    double c_43=-(5*p2.z);
    double c_44=p20_2;
    double c_45=c_32+p2.z;
    double c_46=p3.y*c_45;
    double c_47=c_46+c_26+c_20;
    double c_48=-(3*c_7*p3.y*p2.z);
    double c_49=-(30*p2.y*c_11*p2.z);
    double c_50=-(6*p3.y*c_13);
    double c_51=-(2*p3.z);
    double c_52=3*c_8*p3.z;
    double c_53=6*c_7*p3.y*p3.z;
    double c_54=6*p2.y*c_12*p3.z;
    double c_55=-(12*p3.y*c_12*p3.z);
    double c_56=4*p3.z;
    double c_57=30*p1.z*p2.z*p3.z;
    double c_58=3*c_10*p1.z;
    double c_59=-(6*p2.y*c_9*p2.z);
    double c_60=-(3*c_10*p2.z);
    double c_61=3*p2.y*c_9*p3.z;
    double c_62=6*p3.y*p1.z*c_15;
    double c_63=12*p2.y*p2.z*c_15;
    double c_64=-(6*p3.y*p2.z*c_15);
    double c_65=6*p2.y*c_16;
    double c_66=14*p1.z;
    double c_67=4*p2.z;
    double c_68=3*p1.z;
    double c_69=-(9*c_34*p2.z);
    double c_70=5*p1.z;
    double c_71=3*p3.z;
    double c_72=10*p1.z;
    double c_73=p20_3;
    double c_74=p30_4;
    double c_75=p21_4;
    double c_76=p31_4;
    double c_77=p31_5;
    double c_78=p21_5;
    double c_79=8*p2.z;
    double c_80=9*p3.z;
    double c_81=3*p2.z;
    double c_82=c_0+c_67+c_71;
    double c_83=-(3*p3.z);
    double c_84=-(4*p2.z);
    double c_85=2*p1.z*p3.z;
    double c_86=4*p1.z;
    double c_87=-c_9;
    double c_88=6*c_11;
    double c_89=p1.z+p2.z+c_51;
    double c_90=10*c_12;
    double c_91=6*c_15;
    double c_92=2*c_12;
    double c_93=3*p2.z*p3.z;
    double c_94=c_9*c_17;
    double c_95=15*c_12;
    double c_96=p11_4;
    double c_97=p11_5;
    double c_98=-(36*c_7*p3.y*c_11*p3.z);
    double c_99=-(36*p2.y*c_9*c_11*p3.z);
    double c_100=-(36*c_7*p3.y*p1.z*c_15);
    double c_101=-(54*p2.y*c_9*p1.z*c_15);
    double c_102=6*c_12;
    double c_103=p2.y*c_38;
    double c_104=p20_4;
    double c_105=-(p1.y*c_33);
    double c_106=c_25+c_26+c_105;
    double c_107=40*p2.y*c_6;
    double c_108=-(24*p2.y*p1.z*c_12);
    double c_109=c_46+c_26;
    double c_110=9*c_34*c_109;
    double c_111=c_86+c_2+c_71;
    double c_112=-(3*p2.z);
    double c_113=9*c_34*p3.z;
    double c_114=-(6*c_16);
    double c_115=8*p1.z;
    double c_116=c_0+p2.z+c_83;
    double c_117=6*c_13;
    double c_118=-(9*p3.z);
    double c_119=c_86+c_81+c_27;
    double c_120=-5*p1.z;
    double c_121=18*p2.z*c_15;
    double c_122=9*p2.z;
    double c_123=p21_7;
    double c_124=p21_6;
    double c_125=p31_6;
    double c_126=p31_7;
    double c_127=6*c_12*p3.z;
    double c_128=6*p2.z*c_15;
    double c_129=5*p2.z*p3.z;
    double c_130=20*c_6;
    double c_131=3*c_13;
    double c_132=2*p2.z*p3.z;
    double c_133=3*c_12;
    double c_134=-3*c_9;
    double c_135=20*c_11;
    double c_136=8*p2.z*p3.z;
    double c_137=p2.z+p3.z;
    double c_138=-(9*c_9*c_24);
    double c_139=c_81+c_27;
    double c_140=9*p2.z*p3.z;
    double c_141=-(4*c_15);
    double c_142=c_133+c_140+c_141;
    double c_143=10*c_11;
    double c_144=c_81+p3.z;
    double c_145=4*p2.z*p3.z;
    double c_146=2*c_15;
    double c_147=4*c_11;
    double c_148=4*p1.z*p2.z;
    double c_149=8*p3.z;
    double c_150=2*c_11;
    double c_151=4*c_12;
    double c_152=4*c_15;
    double c_153=20*c_12;
    double c_154=16*p2.z*p3.z;
    double c_155=8*p1.z*c_22;
    double c_156=10*p3.z;
    double c_157=3*c_11;
    double c_158=5*p2.z;
    double c_159=c_158+p3.z;
    double c_160=10*p2.z;
    double c_161=9*p2.y*p3.y*c_28;
    double c_162=c_115+c_122+c_156;
    double c_163=3*p1.z*p2.z;
    double c_164=9*p1.z;
    double c_165=10*c_15;
    double c_166=9*c_7*p3.y*c_28;
    double c_167=3*p1.z*p3.z;
    double c_168=p2.z+c_56;
    double c_169=5*p3.z;
    double c_170=14*p3.z;
    double c_171=2*p1.z*c_137;
    double c_172=15*c_15;
    double c_173=p2.z+c_169;
    double c_174=p1.z*c_173;
    double c_175=c_11+c_12+c_129+c_172+c_174;
    double c_176=c_68+c_2+c_56;
    double c_177=c_0+c_81+c_56;
    double c_178=-4*c_6;
    double c_179=30*c_12*p3.z;
    double c_180=90*p2.z*c_15;
    double c_181=6*p1.z;
    double c_182=84*p3.z;
    double c_183=6*p2.z*p3.z;
    double c_184=3*c_14*c_40;
    double c_185=p1.z+c_112+c_27;
    double c_186=-(2*p2.z);
    double c_187=-(9*p2.z);
    double c_188=4*p1.z*p3.z;
    double c_189=12*p2.z*p3.z;
    double c_190=c_164+c_160+c_149;
    double c_191=3*c_12*p3.z;
    double c_192=3*c_6;
    double c_193=-(5*c_16);
    double c_194=c_70+c_2+c_149;
    double c_195=p3.y*c_89;
    double c_196=2*p1.z*c_33;
    double c_197=c_11+c_133+c_136+c_165+c_196;
    double c_198=-(4*p3.z);
    double c_199=p1.z+c_81+c_198;
    double c_200=c_9*c_116;
    double c_201=p1.z+c_186+p3.z;
    double c_202=c_150+c_163+c_92+c_85+c_132+c_15;
    double c_203=3*p1.z*c_137;
    double c_204=c_11+c_102+c_140+c_91+c_203;
    double c_205=p1.z*c_159;
    double c_206=c_11+c_95+c_129+c_15+c_205;
    double c_207=2*c_13;
    double c_208=-(3*p2.z*c_15);
    double c_209=-(4*c_16);
    double c_210=-c_15;
    double c_211=-(20*c_13);
    double c_212=6*c_11*p3.z;
    double c_213=-(5*p3.z);
    double c_214=p1.z+c_43+c_56;
    double c_215=-(8*p3.z);
    double c_216=c_70+c_81+c_215;
    double c_217=3*c_11*p2.z;
    double c_218=6*p1.z*c_12;
    double c_219=-(8*c_16);
    double c_220=2*c_6;
    double c_221=p1.z+c_2+c_83;
    double c_222=p11_7;
    double c_223=p11_6;
    double c_224=-(6*p2.y*c_76*c_11*p2.z);
    double c_225=-(18*c_7*c_10*p1.z*c_12);
    double c_226=-3*c_34;
    double c_227=3*c_9;
    double c_228=16*p1.z*p2.z;
    double c_229=p1.y*c_40;
    double c_230=c_29+c_229+c_103;
    double c_231=p20_5;
    double c_232=p20_6;
    double c_233=p30_6;
    double c_234=30*p2.y*p1.z*p2.z*p3.z;
    double c_235=c_115+c_160+c_80;
    double c_236=9*c_34*p2.z;
    double c_237=-(9*c_34*p3.z);
    double c_238=48*p1.z*p2.z*p3.z;
    double c_239=6*c_16;
    double c_240=-3*p1.z;
    double c_241=7*p3.z;
    double c_242=c_86+p2.z+c_213;
    double c_243=-(3*c_8*c_17);
    double c_244=-16*c_6;
    double c_245=24*c_12*p3.z;
    double c_246=60*p2.z*c_15;
    double c_247=-2*p1.z;
    double c_248=c_247+p2.z+p3.z;
    double c_249=12*p1.z*p2.z*c_168;
    double c_250=-8*p1.z;
    double c_251=7*p2.z;
    double c_252=-(140*c_16);
    double c_253=p2.z+c_156;
    double c_254=6*c_11*c_253;
    double c_255=c_86+c_122+c_170;
    double c_256=c_12+c_129+c_165;
    double c_257=6*p1.z*c_256;
    double c_258=36*c_7*p3.y*c_11*p2.z;
    double c_259=18*p2.y*c_9*p1.z*p2.z*p3.z;
    double c_260=c_120+p2.z+c_56;
    double c_261=c_72+c_67+c_241;
    double c_262=c_11+c_92+c_93+c_146+c_171;
    double c_263=-4*p1.z;
    double c_264=c_263+p2.z+c_71;
    double c_265=c_250+c_81+c_169;
    double c_266=6*p3.z;
    double c_267=c_68+c_18+c_51;
    double c_268=c_240+c_2+p3.z;
    double c_269=-c_195;
    double c_270=3*p2.z*c_15;
    double c_271=3*p1.z*c_144;
    double c_272=c_88+c_102+c_93+c_15+c_271;
    double c_273=4*c_6;
    double c_274=3*c_11*c_137;
    double c_275=-(10*c_13);
    double c_276=-(6*c_12*p3.z);
    double c_277=c_115+p2.z+c_118;
    double c_278=c_115+c_187+p3.z;
    double c_279=3*c_15;
    double c_280=-(3*c_12*p3.z);
    double c_281=10*c_6;
    double c_282=6*c_11*p2.z;
    double c_283=c_250+c_158+c_71;
    double c_284=p2.z+c_71;
    double c_285=10*c_13;
    double c_286=8*p1.z*p3.z;
    double c_287=c_263+c_81+p3.z;
    double c_288=c_0+c_81+c_213;
    double c_289=15*p2.z;
    double c_290=c_72+c_251+c_56;
    double c_291=c_7*c_287;
    double c_292=6*p2.z;
    double c_293=3*p1.z*p2.z*c_137;
    double c_294=c_13+c_208+c_193;
    double c_295=2*c_294;
    double c_296=c_220+c_274+c_293+c_295;
    double c_297=c_68+c_186+c_1;
    double c_298=c_0+c_18+c_1;
    double c_299=-(12*c_11*p3.z);
    double c_300=4*c_16;
    double c_301=2*c_16;
    double c_302=-8*c_6;
    double c_303=10*c_16;
    double c_304=-(3*c_11*c_284);
    double c_305=c_302+c_13+c_191+c_128+c_303+c_304;
    double c_306=6*p1.z*p2.z;
    double c_307=20*c_8*p1.z;
    double c_308=48*p2.y*c_11*p2.z;
    double c_309=48*p2.y*p1.z*p2.z*p3.z;
    double c_310=c_72+c_79+c_80;
    double c_311=40*c_6;
    double c_312=-(8*p2.z);
    double c_313=c_68+p2.z+c_198;
    double c_314=16*c_6;
    double c_315=12*c_12*p3.z;
    double c_316=30*p2.z*c_15;
    double c_317=-(40*c_16);
    double c_318=c_81+c_149;
    double c_319=c_164+c_18+c_215;
    double c_320=-(18*p2.z*c_15);
    double c_321=-(20*c_16);
    double c_322=c_78*c_38;
    double c_323=c_0+c_158+c_149;
    double c_324=p2.y*c_268;
    double c_325=2*p1.z*c_168;
    double c_326=c_157+c_12+c_145+c_165+c_325;
    double c_327=c_9*c_221;
    double c_328=c_70+c_112+c_51;
    double c_329=15*c_11;
    double c_330=p2.z*p3.z;
    double c_331=p1.z+c_67+c_213;
    double c_332=c_9*c_331;
    double c_333=-(10*c_16);
    double c_334=-(2*c_15);
    double c_335=c_12+c_210;
    double c_336=3*p1.z*c_335;
    double c_337=c_220+c_217+c_207+c_208+c_209+c_336;
    double c_338=c_86+c_251+c_156;
    double c_339=-20*c_6;
    double c_340=-(12*c_11*p2.z);
    double c_341=4*c_13;
    double c_342=c_9*c_89;
    double c_343=3*p1.z*c_284;
    double c_344=c_88+c_12+c_93+c_91+c_343;
    double c_345=c_68+c_158+c_215;
    double c_346=-(3*c_15);
    double c_347=c_12+c_346;
    double c_348=3*p1.z*c_347;
    double c_349=c_281+c_282+c_13+c_208+c_219+c_348;
    double c_350=-10*c_6;
    double c_351=-(c_8*c_9*p1.z);
    double c_352=-(c_77*p1.z);
    double c_353=12*p2.y*c_9*c_6;
    double c_354=c_77*p2.z;
    double c_355=-(p2.y*c_76*p3.z);
    double c_356=18*c_7*p3.y*c_11*p3.z;
    double c_357=18*p2.y*c_9*c_11*p3.z;
    double c_358=12*c_8*p1.z*c_15;
    double c_359=18*c_7*p3.y*p1.z*c_15;
    double c_360=18*p2.y*c_9*p1.z*c_15;
    double c_361=12*c_10*p1.z*c_15;
    double c_362=-(12*c_10*p2.z*c_15);
    double c_363=12*p2.y*c_9*c_16;
    double c_364=28*p1.z;
    double c_365=c_70+c_84+c_1;
    double c_366=c_240+p2.z+c_27;
    double c_367=p3.y*c_366;
    double c_368=3*c_74*c_40;
    double c_369=c_68+c_84+p3.z;
    double c_370=c_86+c_160+c_241;
    double c_371=-(9*p1.z*c_12);
    double c_372=-(8*c_13);
    double c_373=3*p1.z*c_15;
    double c_374=c_281+c_371+c_372+c_212+c_280+c_373+c_16;
    double c_375=2*p1.z*p2.z;
    double c_376=c_0+c_112+p3.z;
    double c_377=c_12*p3.z;
    double c_378=p2.z*c_15;
    double c_379=c_12+c_330+c_15;
    double c_380=2*p1.z*c_379;
    double c_381=c_350+c_13+c_377+c_378+c_16+c_380;
    double c_382=6*c_381;
    double c_383=6*c_75*p3.y*c_11*p3.z;
    double c_384=18*c_8*c_9*p1.z*c_15;
    double c_385=p3.y*c_38;
    double c_386=3*c_34*p2.z;
    double c_387=-(3*c_34*p3.z);
    double c_388=-(90*c_11*p3.z);
    double c_389=-(30*p1.z*p2.z*p3.z);
    double c_390=-(30*p1.z*c_15);
    double c_391=-(6*p2.z*c_15);
    double c_392=c_87+c_147+c_306+c_151+c_188+c_145+c_146;
    double c_393=6*p1.z*p3.z;
    double c_394=c_87+c_147+c_148+c_92+c_393+c_145+c_152;
    double c_395=p2.y*c_201;
    double c_396=32*c_6;
    double c_397=60*c_12*p3.z;
    double c_398=24*p2.z*c_15;
    double c_399=c_67+p3.z;
    double c_400=3*p1.z*c_168;
    double c_401=c_88+c_12+c_145+c_165+c_400;
    double c_402=c_68+c_2+c_213;
    double c_403=c_12+c_330+c_334;
    double c_404=3*p1.z*c_403;
    double c_405=c_220+c_217+c_207+c_191+c_333+c_404;
    double c_406=p3.y*c_221;
    double c_407=-c_406;
    double c_408=9*c_9*c_17;
    double c_409=9*c_12*p3.z;
    double c_410=16*p1.z*c_137;
    double c_411=c_134+c_135+c_102+c_136+c_91+c_410;
    double c_412=p1.z+c_84+c_71;
    double c_413=c_150+c_375+c_12+c_167+c_132+c_146;
    double c_414=4*p1.z*c_284;
    double c_415=c_143+c_12+c_93+c_91+c_414;
    double c_416=18*c_12*p3.z;
    double c_417=9*p2.z*c_15;
    double c_418=3*c_16;
    double c_419=4*p1.z*c_137;
    double c_420=c_87+c_150+c_151+c_183+c_152+c_419;
    double c_421=c_134+c_88+c_153+c_154+c_91+c_155;
    double c_422=20*c_15;
    double c_423=8*p1.z*c_33;
    double c_424=c_134+c_88+c_102+c_154+c_422+c_423;
    double c_425=90*c_12*p3.z;
    double c_426=c_7*c_376;
    double c_427=10*p2.z*p3.z;
    double c_428=2*p1.z*c_173;
    double c_429=c_157+c_12+c_129+c_172+c_428;
    double c_430=c_86+c_43+p3.z;
    double c_431=c_70+c_312+c_71;
    double c_432=2*c_12*p3.z;
    double c_433=c_11*c_33;
    double c_434=p1.z*p2.z*c_33;
    double c_435=c_6+c_13+c_432+c_333+c_433+c_434;
    double c_436=3*c_11*p3.z;
    double c_437=-(9*c_12*p3.z);
    double c_438=6*p1.z*c_15;
    double c_439=3*p1.z*p3.z*c_137;
    return (9*p10_7*(c_25+2*p1.y*c_40-p2.y*c_21)-9*p20_7*(c_4+2*p2.y*c_17+c_23)+9*c_232*p3.x*c_42+p10_5*(84*c_5*p2.y*p1.z+24*
        p1.y*c_7*p1.z+4*c_8*p1.z-84*c_5*p3.y*p1.z-24*p1.y*c_9*p1.z-4*c_10*p1.z+28*p2.y*c_6-28*p3.y*c_6-14*c_14*p2.z+6*c_5*p2.y*
        p2.z+6*p1.y*c_7*p2.z+2*c_8*p2.z-45*c_5*p3.y*p2.z-15*p1.y*p2.y*p3.y*p2.z+c_48-15*p1.y*c_9*p2.z-3*p2.y*c_9*
        p2.z+c_60-168*p1.y*c_11*p2.z-12*p2.y*c_11*p2.z-90*p3.y*c_11*p2.z-48*p1.y*p1.z*c_12-12*p2.y*p1.z*c_12-30*p3.y*p1.z*c_12-8*
        p1.y*c_13-4*p2.y*c_13+c_50+14*c_14*p3.z+45*c_5*p2.y*p3.z+15*p1.y*c_7*p3.z+c_52-6*c_5*p3.y*p3.z+15*p1.y*p2.y*p3.y*
        p3.z+3*c_7*p3.y*p3.z-6*p1.y*c_9*p3.z+c_61-2*c_10*p3.z+168*p1.y*c_11*p3.z+90*p2.y*c_11*p3.z+c_41+c_234-30*p3.y*p1.z*p2.z*
        p3.z+c_54-6*p3.y*c_12*p3.z+48*p1.y*p1.z*c_15+30*p2.y*p1.z*c_15+12*p3.y*p1.z*c_15+6*p2.y*p2.z*c_15+c_64+8*p1.y*
        c_16+c_65+4*p3.y*c_16+9*p2.x*p3.x*c_47-9*c_44*c_31+9*c_34*c_106)-9*p10_6*(p2.x*c_31+p3.x*(-c_25+c_103+p1.y*c_33))+c_231*(14*
        c_8*p1.z+45*c_7*p3.y*p1.z+15*p2.y*c_9*p1.z+c_58+8*p2.y*c_6+c_39+84*c_7*p3.y*p2.z+24*p2.y*c_9*p2.z+4*c_10*p2.z+c_308+30*
        p3.y*c_11*p2.z+168*p2.y*p1.z*c_12+90*p3.y*p1.z*c_12+28*p3.y*c_13-14*c_8*p3.z+c_53+6*p2.y*c_9*p3.z+2*c_10*p3.z+6*p3.y*
        c_11*p3.z+30*p3.y*p1.z*p2.z*p3.z-168*p2.y*c_12*p3.z+c_55+c_62-48*p2.y*p2.z*c_15-12*p3.y*p2.z*c_15-8*p2.y*c_16-4*
        p3.y*c_16-c_14*c_82+9*c_34*(c_35+c_37)-3*c_5*(c_385+p2.y*(c_0+c_79+c_169))-p1.y*(c_178+c_236+c_340-12*p1.z*c_12+28*c_13-15*p2.y*
        p3.y*c_17-3*c_9*c_17+c_237+c_212+c_57+c_425+c_438+c_316+c_239+c_7*(c_181+84*p2.z+45*p3.z)))+c_104*p3.x*(-45*c_8*p1.z+15*
        c_7*p3.y*p1.z+21*p2.y*c_9*p1.z+9*c_10*p1.z-6*p2.y*c_6+c_39-70*c_8*p2.z+30*c_7*p3.y*p2.z+30*p2.y*c_9*p2.z+10*c_10*
        p2.z+c_49+24*p3.y*c_11*p2.z-90*p2.y*p1.z*c_12+60*p3.y*p1.z*c_12+140*p2.y*c_13+40*p3.y*c_13+c_184-20*c_8*p3.z+12*p2.y*c_9*
        p3.z+8*c_10*p3.z-6*p2.y*c_11*p3.z+c_41-30*p2.y*p1.z*p2.z*p3.z+48*p3.y*p1.z*p2.z*p3.z-60*p2.y*c_12*p3.z-6*p2.y*
        p1.z*c_15+18*p3.y*p1.z*c_15-60*p2.y*p2.z*c_15-24*p3.y*p2.z*c_15-20*p2.y*c_16-16*p3.y*c_16+9*c_34*c_42-3*c_5*(c_269+p2.y*
        c_214)-3*p1.y*(-c_200+5*c_7*c_185+p2.y*p3.y*(c_240+c_43+c_149)-2*c_40*(c_11+5*p1.z*p2.z+c_95+c_85+c_427+c_279)))+p10_4*(9*
        c_44*p3.x*c_47-9*c_73*c_31+p3.x*(-3*c_8*p1.z-3*c_7*p3.y*p1.z-3*p2.y*c_9*p1.z-10*c_10*p1.z-90*p2.y*c_6-40*p3.y*c_6+c_48+c_59-9*
        c_10*p2.z+c_49-60*p3.y*c_11*p2.z-6*p2.y*p1.z*c_12-24*p3.y*p1.z*c_12+c_50-15*c_5*(c_25+p2.y*c_267)+9*c_34*
        (c_25+c_26)+c_52+c_53+9*p2.y*c_9*p3.z-8*c_10*p3.z+30*p2.y*c_11*p3.z+18*p2.y*p1.z*p2.z*p3.z-48*p3.y*p1.z*p2.z*p3.z+c_54+c_55+42*
        p2.y*p1.z*c_15+24*p3.y*p1.z*c_15+c_63-18*p3.y*p2.z*c_15+18*p2.y*c_16+16*p3.y*c_16+5*c_14*(c_66+c_122+c_56)+p1.y*
        (-140*c_6+c_69+90*c_11*p2.z+30*p1.z*c_12+c_117-3*p2.y*p3.y*c_216-18*c_34*p3.z+60*c_11*p3.z+c_57+c_127+60*p1.z*c_15+c_128+20*
        c_16+3*c_7*c_260-3*c_9*c_290))+p2.x*(10*c_8*p1.z+3*c_7*p3.y*p1.z+3*p2.y*c_9*p1.z+c_58+c_107+90*p3.y*c_6+8*c_8*p2.z-9*
        c_7*p3.y*p2.z+c_59+c_60-30*p3.y*c_11*p2.z+c_108-42*p3.y*p1.z*c_12-16*p2.y*c_13-18*p3.y*c_13+c_110+9*c_8*p3.z+c_53+c_61+60*
        p2.y*c_11*p3.z+30*p3.y*c_11*p3.z+c_309-18*p3.y*p1.z*p2.z*p3.z+18*p2.y*c_12*p3.z+c_55+24*p2.y*p1.z*c_15+c_62+c_63+c_64+c_65-5*
        c_14*(c_66+c_67+c_80)+15*c_5*(p3.y*c_297+c_30)+p1.y*(140*c_6+c_69-60*c_11*p2.z-60*p1.z*c_12+c_211+3*c_9*
        c_365+c_113+c_388+c_389+c_276+c_390+c_391+c_114+3*p2.y*p3.y*c_431+3*c_7*c_261)))+c_73*(9*c_74*p2.y*p1.z-30*c_34*c_8*p1.z-14*c_78*
        p1.z-9*c_74*p3.y*p1.z-6*c_34*c_7*p3.y*p1.z+45*c_75*p3.y*p1.z+18*c_34*p2.y*c_9*p1.z+30*c_8*c_9*p1.z+18*c_34*c_10*p1.z+18*
        c_7*c_10*p1.z+9*p2.y*c_76*p1.z+3*c_77*p1.z-6*c_34*p2.y*c_6+6*c_34*p3.y*c_6-36*c_7*p3.y*c_6-18*p2.y*c_9*c_6-6*c_10*c_6-40*
        c_34*c_8*p2.z-18*c_74*p3.y*p2.z+70*c_75*p3.y*p2.z+24*c_34*p2.y*c_9*p2.z+40*c_8*c_9*p2.z+16*c_34*c_10*p2.z+20*c_7*c_10*
        p2.z+8*p2.y*c_76*p2.z+2*c_77*p2.z-24*c_34*p2.y*c_11*p2.z+18*c_34*p3.y*c_11*p2.z-180*c_7*p3.y*c_11*p2.z-72*p2.y*c_9*
        c_11*p2.z-18*c_10*c_11*p2.z-60*c_34*p2.y*p1.z*c_12+36*c_34*p3.y*p1.z*c_12-540*c_7*p3.y*p1.z*c_12-180*p2.y*c_9*p1.z*c_12-36*
        c_10*p1.z*c_12+80*c_34*p2.y*c_13+40*c_34*p3.y*c_13+18*c_74*p2.y*p3.z-20*c_34*c_8*p3.z+14*c_78*p3.z-12*c_34*c_7*p3.y*
        p3.z+20*c_75*p3.y*p3.z+12*c_34*p2.y*c_9*p3.z+20*c_8*c_9*p3.z+20*c_34*c_10*p3.z+16*c_7*c_10*p3.z+10*p2.y*c_76*p3.z+4*
        c_77*p3.z-12*c_34*p2.y*c_11*p3.z+18*c_34*p3.y*c_11*p3.z+c_98+c_99-18*c_10*c_11*p3.z-48*c_34*p2.y*p1.z*p2.z*p3.z+54*c_34*
        p3.y*p1.z*p2.z*p3.z-180*c_7*p3.y*p1.z*p2.z*p3.z-144*p2.y*c_9*p1.z*p2.z*p3.z-54*c_10*p1.z*p2.z*p3.z+24*c_34*p3.y*
        c_12*p3.z-18*c_34*p2.y*p1.z*c_15+36*c_34*p3.y*p1.z*c_15+c_100+c_101-36*c_10*p1.z*c_15-48*c_34*p2.y*p2.z*c_15-24*c_34*
        p3.y*p2.z*c_15-32*c_34*p2.y*c_16-40*c_34*p3.y*c_16-c_97*c_111-c_96*(3*p3.y*c_38+p2.y*c_310)+c_14*(9*p2.y*p3.y*c_17+3*c_9*
        c_17+3*c_34*c_40-2*c_7*c_235+6*p3.z*c_272)+c_5*(18*c_7*p3.y*c_17-10*c_8*c_82-3*c_34*(c_407+p2.y*c_412)-3*p3.y*c_17*(c_87+6*
        c_202)+9*p2.y*(c_94+2*p3.z*(c_157+8*p1.z*p2.z+c_90+c_85+c_145+c_15)))+p1.y*(30*c_8*p3.y*c_17-9*c_74*c_40-5*c_75*(c_86+14*
        p2.z+c_80)-9*p2.y*p3.y*c_17*(c_87+c_88+c_153+c_154+c_91+c_155)-3*c_34*(-(p2.y*p3.y*(p1.z+c_79+c_118))-3*c_9*c_89+2*c_7*
        (c_0+c_43+c_71)-2*c_40*(c_11+c_148+c_90+c_167+c_189+c_91))-3*c_9*c_17*(c_87+6*c_262)+18*c_7*(c_94+2*p3.z*c_206)))+p10_3*(70*c_96*p2.y*
        p1.z+40*c_14*c_7*p1.z+20*c_5*c_8*p1.z+8*p1.y*c_75*p1.z+2*c_78*p1.z-70*c_96*p3.y*p1.z-40*c_14*c_9*p1.z-20*c_5*c_10*
        p1.z-8*p1.y*c_76*p1.z-2*c_77*p1.z+14*c_97*p2.z+20*c_96*p2.y*p2.z+20*c_14*c_7*p2.z+16*c_5*c_8*p2.z+10*p1.y*c_75*p2.z+4*
        c_78*p2.z-45*c_96*p3.y*p2.z-30*c_14*p2.y*p3.y*p2.z-18*c_5*c_7*p3.y*p2.z-9*p1.y*c_8*p3.y*p2.z-3*c_75*p3.y*p2.z-30*c_14*
        c_9*p2.z-18*c_5*p2.y*c_9*p2.z-9*p1.y*c_7*c_9*p2.z-3*c_8*c_9*p2.z-18*c_5*c_10*p2.z-9*p1.y*p2.y*c_10*p2.z-3*c_7*c_10*
        p2.z-9*p1.y*c_76*p2.z-3*p2.y*c_76*p2.z-3*c_77*p2.z+540*c_5*p3.y*c_11*p2.z+180*p1.y*p2.y*p3.y*c_11*p2.z+c_258+180*p1.y*
        c_9*c_11*p2.z+36*p2.y*c_9*c_11*p2.z+36*c_10*c_11*p2.z+180*c_5*p3.y*p1.z*c_12+144*p1.y*p2.y*p3.y*p1.z*c_12+54*c_7*
        p3.y*p1.z*c_12+72*p1.y*c_9*p1.z*c_12+36*p2.y*c_9*p1.z*c_12+18*c_10*p1.z*c_12+36*c_5*p3.y*c_13+54*p1.y*p2.y*p3.y*c_13+36*
        c_7*p3.y*c_13+18*p1.y*c_9*c_13+18*p2.y*c_9*c_13+6*c_10*c_13-14*c_97*p3.z+45*c_96*p2.y*p3.z+30*c_14*c_7*p3.z+18*c_5*c_8*
        p3.z+9*p1.y*c_75*p3.z+3*c_78*p3.z-20*c_96*p3.y*p3.z+30*c_14*p2.y*p3.y*p3.z+18*c_5*c_7*p3.y*p3.z+9*p1.y*c_8*p3.y*
        p3.z+3*c_75*p3.y*p3.z-20*c_14*c_9*p3.z+18*c_5*p2.y*c_9*p3.z+9*p1.y*c_7*c_9*p3.z+3*c_8*c_9*p3.z-16*c_5*c_10*p3.z+9*p1.y*
        p2.y*c_10*p3.z+3*c_7*c_10*p3.z-10*p1.y*c_76*p3.z+3*p2.y*c_76*p3.z-4*c_77*p3.z-540*c_5*p2.y*c_11*p3.z-180*p1.y*c_7*c_11*
        p3.z-36*c_8*c_11*p3.z-180*p1.y*p2.y*p3.y*c_11*p3.z+c_98+c_99-180*c_5*p2.y*p1.z*p2.z*p3.z-144*p1.y*c_7*p1.z*p2.z*
        p3.z-54*c_8*p1.z*p2.z*p3.z+180*c_5*p3.y*p1.z*p2.z*p3.z-18*c_7*p3.y*p1.z*p2.z*p3.z+144*p1.y*c_9*p1.z*p2.z*p3.z+c_259+54*
        c_10*p1.z*p2.z*p3.z-36*c_5*p2.y*c_12*p3.z-54*p1.y*c_7*c_12*p3.z-36*c_8*c_12*p3.z+36*c_5*p3.y*c_12*p3.z+18*p1.y*
        p2.y*p3.y*c_12*p3.z+36*p1.y*c_9*c_12*p3.z+18*p2.y*c_9*c_12*p3.z+18*c_10*c_12*p3.z-180*c_5*p2.y*p1.z*c_15-72*p1.y*c_7*
        p1.z*c_15-18*c_8*p1.z*c_15-144*p1.y*p2.y*p3.y*p1.z*c_15+c_100+c_101-36*c_5*p2.y*p2.z*c_15-36*p1.y*c_7*p2.z*c_15-18*c_8*
        p2.z*c_15+36*c_5*p3.y*p2.z*c_15-18*p1.y*p2.y*p3.y*p2.z*c_15-18*c_7*p3.y*p2.z*c_15+54*p1.y*c_9*p2.z*c_15+36*c_10*p2.z*
        c_15-36*c_5*p2.y*c_16-18*p1.y*c_7*c_16-6*c_8*c_16-54*p1.y*p2.y*p3.y*c_16-18*c_7*p3.y*c_16-36*p2.y*c_9*c_16+3*p2.x*p3.x*
        (c_226+10*c_5+3*c_7+4*p2.y*p3.y+c_227+8*p1.y*(p2.y+p3.y)+c_135+c_228+c_102+16*p1.z*p3.z+c_136+c_91)*c_230+9*c_73*p3.x*
        c_47-9*c_104*c_31+9*c_74*c_106+c_44*(16*c_8*p1.z+9*c_7*p3.y*p1.z+6*p2.y*c_9*p1.z+c_58+c_107+60*p3.y*c_6+20*c_8*p2.z-18*
        c_7*p3.y*p2.z-9*p2.y*c_9*p2.z+c_60+24*p2.y*c_11*p2.z+12*p3.y*c_11*p2.z+c_108-36*p3.y*p1.z*c_12-40*p2.y*c_13-36*p3.y*
        c_13+c_110+18*c_8*p3.z+9*c_7*p3.y*p3.z+c_61+36*p2.y*c_11*p3.z+24*p3.y*c_11*p3.z+54*p2.y*p1.z*p2.z*p3.z-6*p3.y*p1.z*
        p2.z*p3.z+36*p2.y*c_12*p3.z-18*p3.y*c_12*p3.z+18*p2.y*p1.z*c_15+c_62+18*p2.y*p2.z*c_15+c_64+c_65-10*c_14*c_111+6*c_5*
        (p3.y*c_328-p2.y*c_22)+p1.y*(80*c_6+c_69-48*p1.z*c_12-32*c_13+3*c_9*(c_86+c_112+c_1)+c_113-60*c_11*p3.z-48*p1.z*p2.z*p3.z-18*
        c_12*p3.z-24*p1.z*c_15-12*p2.z*c_15+c_114+3*p2.y*p3.y*c_278+6*c_7*c_111))+c_34*(-3*c_7*p3.y*c_116+c_243+10*c_14*c_119+p1.y*
        (-80*c_6+60*c_11*p2.z+24*p1.z*c_12+c_117-3*p2.y*p3.y*c_277+c_238+c_315+48*p1.z*c_15+c_121+32*c_16-6*c_9*c_119+3*c_7*
        c_264)+6*c_5*(p3.y*c_33+p2.y*(c_120+c_2+c_71))-2*p3.y*(c_130+c_131+c_409+c_121+c_321+6*c_11*c_139+c_9*c_162+3*p1.z*c_142)-3*
        p2.y*(3*c_9*c_89+2*c_17*c_415)))+p3.x*(9*c_123*p1.z+9*c_124*p3.y*p1.z+9*c_78*c_9*p1.z+9*c_75*c_10*p1.z+9*c_8*c_76*p1.z+9*
        c_7*c_77*p1.z+9*p2.y*c_125*p1.z-18*c_126*p1.z-6*c_78*c_6-6*c_75*p3.y*c_6-6*c_8*c_9*c_6-6*c_7*c_10*c_6-6*p2.y*c_76*c_6+8*
        c_77*c_6+18*c_123*p2.z+18*c_124*p3.y*p2.z+18*c_78*c_9*p2.z+18*c_75*c_10*p2.z+18*c_8*c_76*p2.z+18*c_7*c_77*p2.z+18*p2.y*
        c_125*p2.z+18*c_126*p2.z-30*c_78*c_11*p2.z-24*c_75*p3.y*c_11*p2.z-18*c_8*c_9*c_11*p2.z-12*c_7*c_10*c_11*p2.z+c_224-90*c_78*
        p1.z*c_12-60*c_75*p3.y*p1.z*c_12-36*c_8*c_9*p1.z*c_12+c_225-6*p2.y*c_76*p1.z*c_12-28*c_78*c_13-40*c_75*p3.y*c_13-40*c_8*
        c_9*c_13-32*c_7*c_10*c_13-20*p2.y*c_76*c_13-8*c_77*c_13-9*c_222*c_24+9*c_223*(p2.y*c_28-p3.y*c_24)-6*c_78*c_11*p3.z-12*c_75*
        p3.y*c_11*p3.z-18*c_8*c_9*c_11*p3.z-24*c_7*c_10*c_11*p3.z-30*p2.y*c_76*c_11*p3.z+48*c_77*c_11*p3.z-30*c_78*p1.z*p2.z*
        p3.z-48*c_75*p3.y*p1.z*p2.z*p3.z-54*c_8*c_9*p1.z*p2.z*p3.z-48*c_7*c_10*p1.z*p2.z*p3.z-30*p2.y*c_76*p1.z*p2.z*p3.z+12*
        c_78*c_12*p3.z-24*c_8*c_9*c_12*p3.z-48*c_7*c_10*c_12*p3.z-60*p2.y*c_76*c_12*p3.z-48*c_77*c_12*p3.z-6*c_78*p1.z*c_15-18*
        c_75*p3.y*p1.z*c_15-36*c_8*c_9*p1.z*c_15-60*c_7*c_10*p1.z*c_15-90*p2.y*c_76*p1.z*c_15+168*c_77*p1.z*c_15+12*c_78*p2.z*
        c_15+24*c_75*p3.y*p2.z*c_15+24*c_8*c_9*p2.z*c_15-60*p2.y*c_76*p2.z*c_15-168*c_77*p2.z*c_15+4*c_78*c_16+16*c_75*p3.y*c_16+40*
        c_8*c_9*c_16+80*c_7*c_10*c_16+140*p2.y*c_76*c_16+9*c_233*(2*p3.y*c_28+c_37+c_105)+c_97*(28*c_6+9*c_7*c_28+c_161+c_117+c_138+6*
        c_11*(c_289+c_51)+c_127+c_128+c_209+6*p1.z*(5*c_12+c_129+c_334))+c_96*(9*c_8*c_28+c_166-9*c_10*c_24+2*p3.y*(c_130+30*c_11*
        p2.z+c_131+c_127+c_417+c_219+12*p1.z*(c_12+c_132+c_210))-3*p2.y*c_28*(c_134+2*(c_329+c_133+c_132+c_15+5*p1.z*c_22)))+c_14*(9*
        c_75*c_28+9*c_8*p3.y*c_28-3*p2.y*p3.y*c_28*c_411+c_9*(c_311+c_117+c_138+c_416+36*p2.z*c_15+c_317+12*c_11*c_139+6*p1.z*c_142)-3*
        c_7*c_28*(c_134+2*(c_143+c_102+c_93+c_15+4*p1.z*c_144)))+c_5*(9*c_78*c_28+9*c_75*p3.y*c_28-9*c_7*p3.y*c_28*c_392-9*p2.y*
        c_9*c_28*c_394+c_10*(c_396+c_117+c_138+c_245+c_246-80*c_16+c_249+6*c_11*c_318)-3*c_8*c_28*(c_134+2*(c_88+c_90+c_145+c_15+3*p1.z*
        c_399)))+p1.y*(9*c_124*c_28+9*c_78*p3.y*c_28-9*c_7*c_9*c_28*c_420-3*c_8*p3.y*c_28*c_421-3*p2.y*c_10*c_28*c_424+c_76*
        (c_130+c_117+c_138+c_179+c_180+c_252+c_254+c_257)-3*c_75*c_28*(c_134+2*(c_157+c_95+c_129+c_15+2*p1.z*c_159)))+c_34*(14*c_77*c_28+c_97*
        c_119-c_78*(c_68+c_67+c_27)-c_75*p3.y*c_190+c_96*(-3*p2.y*p1.z+10*p3.y*p1.z+3*p2.y*p2.z+9*p3.y*p2.z+8*p3.y*p3.z)-c_14*
        (3*c_7*c_28+c_161-2*c_9*c_162+6*p2.z*(c_88+c_163+c_12+9*p1.z*p3.z+c_93+c_91))+2*c_8*(-(c_9*(c_164+c_79+c_156))+3*p1.z*c_204)+2*
        c_7*p3.y*(-5*c_9*c_176+9*p1.z*c_197)-c_5*(3*c_8*c_28+c_166-10*c_10*c_177-18*p2.y*c_28*(c_87+c_150+c_375+c_12+c_167+c_132+c_146)+18*
        p3.y*p2.z*c_326)+p2.y*c_9*(-5*c_9*(c_164+c_67+c_170)+36*p1.z*c_175)+p1.y*(-3*c_75*c_28+9*c_8*p3.y*c_45+5*c_76*
        c_255+18*c_7*c_28*(c_87+c_11+c_92+c_93+c_146+c_171)+6*p2.y*p3.y*c_28*(-5*c_9+9*c_11+9*c_12+24*p2.z*p3.z+30*c_15+12*p1.z*c_33)-36*
        c_9*p2.z*c_175))+c_74*(-(c_8*c_176)+c_14*c_177-3*c_7*p3.y*c_194+3*c_5*(p2.y*c_45+p3.y*c_323)+p1.y*(c_178-3*c_7*c_28-15*
        p2.y*p3.y*c_28+c_282+c_218+c_117+c_299+c_57+c_179-12*p1.z*c_15+c_180+28*c_16+c_9*(c_181+45*p2.z+c_182))-p2.y*(6*c_6+6*c_11*
        c_173+c_9*(45*p1.z+c_292+c_182)+6*p1.z*(c_12+c_129+c_172)-4*(c_13+c_191+c_270-7*c_16))-2*p3.y*c_28*(7*c_9+4*(c_11+c_12+c_183+21*
        c_15+p1.z*(p2.z+c_266)))))+c_44*p3.x*(9*c_74*c_42+c_34*(c_184-3*c_5*(-(p3.y*c_199)+p2.y*c_185)-3*p1.y*(3*c_7*c_201+p2.y*
        p3.y*(p1.z+c_187+c_149)-2*(c_9*c_288+c_40*(c_11+c_163+c_102+c_188+c_189+c_165)))-2*(3*c_7*p3.y*c_176+c_8*c_190-p3.y*(c_192+6*
        c_11*c_33+5*c_9*c_176+3*p1.z*(c_133+c_136+c_165)+8*(c_207+c_191+c_193))+p2.y*(c_192-3*c_9*c_3+9*c_11*c_137+9*p1.z*
        (c_92+c_93+c_146)-4*(5*c_13+c_191+c_208+c_193))))+3*(-5*c_75*p3.y*c_3+c_97*c_40-c_78*(15*p1.z+28*p2.z+c_27)+2*c_7*c_10*c_176+c_77*
        c_194+c_96*(c_195-p2.y*c_185)-6*c_10*p1.z*c_197+c_14*(p2.y*p3.y*c_199+c_200-3*c_7*c_201-6*c_40*c_202)+p2.y*c_9*(c_9*(7*
        p1.z+c_67+c_156)-6*p1.z*c_204)+2*c_8*(c_9*c_36+6*p1.z*c_206)+c_5*(c_10*c_313+6*c_7*p3.y*c_40-2*c_8*(c_68+c_43+c_27)-6*p3.y*c_337+3*
        p2.y*(c_273+c_211+c_342+c_212+c_128+c_300+6*p1.z*(-2*c_12+c_330+c_15)))+p1.y*(c_76*c_242-5*c_75*c_376-2*c_8*p3.y*c_214+p2.y*
        (c_10*c_216-6*p3.y*(c_6+c_217+c_218+c_285-3*p1.z*c_15-9*p2.z*c_15+c_219))-6*c_9*c_296+3*c_7*(c_327+6*(c_6+c_275+2*p2.z*
        c_15+c_16+c_11*c_22+p1.z*p3.z*c_22)))))+p1.x*(-140*c_96*p2.y*c_6-80*c_14*c_7*c_6-40*c_5*c_8*c_6-16*p1.y*c_75*c_6-4*c_78*
        c_6+140*c_96*p3.y*c_6+80*c_14*c_9*c_6+40*c_5*c_10*c_6+16*p1.y*c_76*c_6+4*c_77*c_6-18*c_222*p2.z-18*c_223*p2.y*p2.z-18*c_97*c_7*
        p2.z-18*c_96*c_8*p2.z-18*c_14*c_75*p2.z-18*c_5*c_78*p2.z-18*p1.y*c_124*p2.z-18*c_123*p2.z+9*c_223*p3.y*p2.z+9*c_97*
        p2.y*p3.y*p2.z+9*c_96*c_7*p3.y*p2.z+9*c_14*c_8*p3.y*p2.z+9*c_5*c_75*p3.y*p2.z+9*p1.y*c_78*p3.y*p2.z+9*c_124*p3.y*p2.z+9*
        c_97*c_9*p2.z+9*c_96*p2.y*c_9*p2.z+9*c_14*c_7*c_9*p2.z+9*c_5*c_8*c_9*p2.z+9*p1.y*c_75*c_9*p2.z+9*c_78*c_9*p2.z+9*c_96*
        c_10*p2.z+9*c_14*p2.y*c_10*p2.z+9*c_5*c_7*c_10*p2.z+9*p1.y*c_8*c_10*p2.z+9*c_75*c_10*p2.z+9*c_14*c_76*p2.z+9*c_5*p2.y*
        c_76*p2.z+9*p1.y*c_7*c_76*p2.z+9*c_8*c_76*p2.z+9*c_5*c_77*p2.z+9*p1.y*p2.y*c_77*p2.z+9*c_7*c_77*p2.z+9*p1.y*c_125*
        p2.z+9*p2.y*c_125*p2.z+9*c_126*p2.z+168*c_97*c_11*p2.z+60*c_96*p2.y*c_11*p2.z-24*c_5*c_8*c_11*p2.z-24*p1.y*c_75*c_11*p2.z-12*
        c_78*c_11*p2.z-90*c_96*p3.y*c_11*p2.z-60*c_14*p2.y*p3.y*c_11*p2.z-36*c_5*c_7*p3.y*c_11*p2.z-18*p1.y*c_8*p3.y*c_11*
        p2.z-6*c_75*p3.y*c_11*p2.z-60*c_14*c_9*c_11*p2.z-36*c_5*p2.y*c_9*c_11*p2.z-18*p1.y*c_7*c_9*c_11*p2.z-6*c_8*c_9*c_11*
        p2.z-36*c_5*c_10*c_11*p2.z-18*p1.y*p2.y*c_10*c_11*p2.z-6*c_7*c_10*c_11*p2.z-18*p1.y*c_76*c_11*p2.z+c_224-6*c_77*c_11*p2.z+48*
        c_97*p1.z*c_12+60*c_96*p2.y*p1.z*c_12+48*c_14*c_7*p1.z*c_12+24*c_5*c_8*p1.z*c_12-12*c_78*p1.z*c_12-30*c_96*p3.y*p1.z*
        c_12-48*c_14*p2.y*p3.y*p1.z*c_12-54*c_5*c_7*p3.y*p1.z*c_12-48*p1.y*c_8*p3.y*p1.z*c_12-30*c_75*p3.y*p1.z*c_12-24*c_14*
        c_9*p1.z*c_12-36*c_5*p2.y*c_9*p1.z*c_12-36*p1.y*c_7*c_9*p1.z*c_12-24*c_8*c_9*p1.z*c_12-18*c_5*c_10*p1.z*c_12-24*p1.y*p2.y*
        c_10*p1.z*c_12+c_225-12*p1.y*c_76*p1.z*c_12-12*p2.y*c_76*p1.z*c_12-6*c_77*p1.z*c_12+8*c_97*c_13+20*c_96*p2.y*c_13+32*
        c_14*c_7*c_13+40*c_5*c_8*c_13+40*p1.y*c_75*c_13+28*c_78*c_13-6*c_96*p3.y*c_13-18*c_14*p2.y*p3.y*c_13-36*c_5*c_7*p3.y*c_13-60*
        p1.y*c_8*p3.y*c_13-90*c_75*p3.y*c_13-6*c_14*c_9*c_13-18*c_5*p2.y*c_9*c_13-36*p1.y*c_7*c_9*c_13-60*c_8*c_9*c_13-6*c_5*c_10*
        c_13-18*p1.y*p2.y*c_10*c_13-36*c_7*c_10*c_13-6*p1.y*c_76*c_13-18*p2.y*c_76*c_13-6*c_77*c_13+18*c_222*p3.z-9*c_223*p2.y*
        p3.z-9*c_97*c_7*p3.z-9*c_96*c_8*p3.z-9*c_14*c_75*p3.z-9*c_5*c_78*p3.z-9*p1.y*c_124*p3.z-9*c_123*p3.z+18*c_223*p3.y*p3.z-9*
        c_97*p2.y*p3.y*p3.z-9*c_96*c_7*p3.y*p3.z-9*c_14*c_8*p3.y*p3.z-9*c_5*c_75*p3.y*p3.z-9*p1.y*c_78*p3.y*p3.z-9*c_124*
        p3.y*p3.z+18*c_97*c_9*p3.z-9*c_96*p2.y*c_9*p3.z-9*c_14*c_7*c_9*p3.z-9*c_5*c_8*c_9*p3.z-9*p1.y*c_75*c_9*p3.z-9*c_78*c_9*
        p3.z+18*c_96*c_10*p3.z-9*c_14*p2.y*c_10*p3.z-9*c_5*c_7*c_10*p3.z-9*p1.y*c_8*c_10*p3.z-9*c_75*c_10*p3.z+18*c_14*c_76*p3.z-9*
        c_5*p2.y*c_76*p3.z-9*p1.y*c_7*c_76*p3.z-9*c_8*c_76*p3.z+18*c_5*c_77*p3.z-9*p1.y*p2.y*c_77*p3.z-9*c_7*c_77*p3.z+18*
        p1.y*c_125*p3.z-9*p2.y*c_125*p3.z+18*c_126*p3.z-168*c_97*c_11*p3.z+90*c_96*p2.y*c_11*p3.z+60*c_14*c_7*c_11*p3.z+36*c_5*
        c_8*c_11*p3.z+18*p1.y*c_75*c_11*p3.z+6*c_78*c_11*p3.z-60*c_96*p3.y*c_11*p3.z+60*c_14*p2.y*p3.y*c_11*p3.z+36*c_5*c_7*p3.y*
        c_11*p3.z+18*p1.y*c_8*p3.y*c_11*p3.z+c_383+36*c_5*p2.y*c_9*c_11*p3.z+18*p1.y*c_7*c_9*c_11*p3.z+6*c_8*c_9*c_11*p3.z+24*
        c_5*c_10*c_11*p3.z+18*p1.y*p2.y*c_10*c_11*p3.z+6*c_7*c_10*c_11*p3.z+24*p1.y*c_76*c_11*p3.z+6*p2.y*c_76*c_11*p3.z+12*
        c_77*c_11*p3.z+30*c_96*p2.y*p1.z*p2.z*p3.z+48*c_14*c_7*p1.z*p2.z*p3.z+54*c_5*c_8*p1.z*p2.z*p3.z+48*p1.y*c_75*p1.z*
        p2.z*p3.z+30*c_78*p1.z*p2.z*p3.z-30*c_96*p3.y*p1.z*p2.z*p3.z+18*c_5*c_7*p3.y*p1.z*p2.z*p3.z+24*p1.y*c_8*p3.y*p1.z*
        p2.z*p3.z+18*c_75*p3.y*p1.z*p2.z*p3.z-48*c_14*c_9*p1.z*p2.z*p3.z-18*c_5*p2.y*c_9*p1.z*p2.z*p3.z+6*c_8*c_9*p1.z*
        p2.z*p3.z-54*c_5*c_10*p1.z*p2.z*p3.z-24*p1.y*p2.y*c_10*p1.z*p2.z*p3.z-6*c_7*c_10*p1.z*p2.z*p3.z-48*p1.y*c_76*p1.z*
        p2.z*p3.z-18*p2.y*c_76*p1.z*p2.z*p3.z-30*c_77*p1.z*p2.z*p3.z+6*c_96*p2.y*c_12*p3.z+18*c_14*c_7*c_12*p3.z+36*c_5*c_8*
        c_12*p3.z+60*p1.y*c_75*c_12*p3.z+90*c_78*c_12*p3.z-6*c_96*p3.y*c_12*p3.z-6*c_14*p2.y*p3.y*c_12*p3.z+12*p1.y*c_8*p3.y*
        c_12*p3.z+30*c_75*p3.y*c_12*p3.z-12*c_14*c_9*c_12*p3.z-18*c_5*p2.y*c_9*c_12*p3.z-18*p1.y*c_7*c_9*c_12*p3.z-12*c_8*c_9*c_12*
        p3.z-18*c_5*c_10*c_12*p3.z-30*p1.y*p2.y*c_10*c_12*p3.z-36*c_7*c_10*c_12*p3.z-24*p1.y*c_76*c_12*p3.z-42*p2.y*c_76*c_12*
        p3.z-30*c_77*c_12*p3.z-48*c_97*p1.z*c_15+30*c_96*p2.y*p1.z*c_15+24*c_14*c_7*p1.z*c_15+18*c_5*c_8*p1.z*c_15+12*p1.y*c_75*
        p1.z*c_15+6*c_78*p1.z*c_15-60*c_96*p3.y*p1.z*c_15+48*c_14*p2.y*p3.y*p1.z*c_15+36*c_5*c_7*p3.y*p1.z*c_15+24*p1.y*c_8*
        p3.y*p1.z*c_15+12*c_75*p3.y*p1.z*c_15-48*c_14*c_9*p1.z*c_15+54*c_5*p2.y*c_9*p1.z*c_15+36*p1.y*c_7*c_9*p1.z*c_15+c_384-24*
        c_5*c_10*p1.z*c_15+48*p1.y*p2.y*c_10*p1.z*c_15+24*c_7*c_10*p1.z*c_15+30*p2.y*c_76*p1.z*c_15+12*c_77*p1.z*c_15+6*c_96*
        p2.y*p2.z*c_15+12*c_14*c_7*p2.z*c_15+18*c_5*c_8*p2.z*c_15+24*p1.y*c_75*p2.z*c_15+30*c_78*p2.z*c_15-6*c_96*p3.y*p2.z*c_15+6*
        c_14*p2.y*p3.y*p2.z*c_15+18*c_5*c_7*p3.y*p2.z*c_15+30*p1.y*c_8*p3.y*p2.z*c_15+42*c_75*p3.y*p2.z*c_15-18*c_14*c_9*
        p2.z*c_15+18*p1.y*c_7*c_9*p2.z*c_15+36*c_8*c_9*p2.z*c_15-36*c_5*c_10*p2.z*c_15-12*p1.y*p2.y*c_10*p2.z*c_15+12*c_7*c_10*
        p2.z*c_15-60*p1.y*c_76*p2.z*c_15-30*p2.y*c_76*p2.z*c_15-90*c_77*p2.z*c_15-8*c_97*c_16+6*c_96*p2.y*c_16+6*c_14*c_7*c_16+6*c_5*
        c_8*c_16+6*p1.y*c_75*c_16+6*c_78*c_16-20*c_96*p3.y*c_16+18*c_14*p2.y*p3.y*c_16+18*c_5*c_7*p3.y*c_16+18*p1.y*c_8*p3.y*
        c_16+18*c_75*p3.y*c_16-32*c_14*c_9*c_16+36*c_5*p2.y*c_9*c_16+36*p1.y*c_7*c_9*c_16+36*c_8*c_9*c_16-40*c_5*c_10*c_16+60*p1.y*
        p2.y*c_10*c_16+60*c_7*c_10*c_16-40*p1.y*c_76*c_16+90*p2.y*c_76*c_16-28*c_77*c_16+3*c_73*p3.x*(c_226+3*c_5+10*c_7+8*p2.y*
        p3.y+c_227+4*p1.y*(2*p2.y+p3.y)+c_88+c_228+c_153+c_286+c_154+c_91)*c_230+9*c_231*p3.x*c_47-9*c_232*c_31+9*c_233*c_106+c_104*
        (c_307+30*c_7*p3.y*p1.z+12*p2.y*c_9*p1.z+c_58+20*p2.y*c_6+18*p3.y*c_6+70*c_8*p2.z-45*c_7*p3.y*p2.z-15*p2.y*c_9*p2.z+c_60+60*
        p2.y*c_11*p2.z+42*p3.y*c_11*p2.z+60*p2.y*p1.z*c_12+30*p3.y*p1.z*c_12-140*p2.y*c_13-90*p3.y*c_13+c_110+45*c_8*p3.z+15*
        c_7*p3.y*p3.z+c_61+6*p2.y*c_11*p3.z+c_41+c_234+18*p3.y*p1.z*p2.z*p3.z+90*p2.y*c_12*p3.z-30*p3.y*c_12*p3.z+6*p2.y*
        p1.z*c_15+c_62+30*p2.y*p2.z*c_15+c_64+c_65-c_14*c_235-p1.y*(c_244+c_236-24*c_11*p2.z+40*c_13+c_237+18*c_11*p3.z+c_238+c_397+12*
        p1.z*c_15+c_398+c_239+3*c_9*c_248+15*c_7*c_22+3*p2.y*p3.y*c_283)-3*c_5*(c_367+p2.y*c_370))+c_74*(-3*c_7*p3.y*
        c_242+c_243+c_14*c_162+p1.y*(c_244+15*c_9*p2.z+c_117+6*c_11*(c_81+c_198)+30*c_9*p3.z+c_245+c_246+40*c_16+3*c_7*c_248+c_249+3*p2.y*
        p3.y*c_265)+3*c_5*(c_324+p3.y*c_338)-p3.y*(c_130+c_117+c_179+c_180+c_252+c_254+5*c_9*c_255+c_257)-3*p2.y*(5*c_9*c_116+2*c_17*
        c_429))-3*c_44*(-2*c_78*p1.z-5*c_75*p3.y*p1.z-4*c_8*c_9*p1.z-3*c_7*c_10*p1.z-2*p2.y*c_76*p1.z+c_352+18*c_7*p3.y*c_6+c_353+6*
        c_10*c_6-28*c_78*p2.z+15*c_75*p3.y*p2.z+10*c_8*c_9*p2.z+6*c_7*c_10*p2.z+3*p2.y*c_76*p2.z+c_354+c_258+18*p2.y*c_9*c_11*
        p2.z+6*c_10*c_11*p2.z-180*c_7*p3.y*c_13-60*p2.y*c_9*c_13-12*c_10*c_13-15*c_78*p3.z-10*c_75*p3.y*p3.z-6*c_8*c_9*p3.z-3*
        c_7*c_10*p3.z+c_355+12*c_8*c_11*p3.z+c_356+c_357+12*c_10*c_11*p3.z+60*c_8*p1.z*p2.z*p3.z+36*c_7*p3.y*p1.z*p2.z*p3.z+c_259+6*
        c_10*p1.z*p2.z*p3.z+180*c_8*c_12*p3.z-36*p2.y*c_9*c_12*p3.z-18*c_10*c_12*p3.z+c_358+c_359+c_360+c_361+60*c_8*p2.z*
        c_15+36*c_7*p3.y*p2.z*c_15+c_362+12*c_8*c_16+18*c_7*p3.y*c_16+c_363+c_97*(c_115+c_2+c_169)+3*c_74*(c_29+c_103)+c_96*(p3.y*
        c_260+p2.y*c_261)+3*c_34*(c_7*p3.y*c_221+2*c_8*c_17-p2.y*c_9*c_185+2*p2.y*c_17*c_262-2*p3.y*c_28*(c_9+c_11+c_92+c_93+c_146+c_171))+c_14*
        (-3*c_34*c_40+c_9*c_264+p2.y*p3.y*c_265+c_7*(c_115+c_67+c_266)-6*p3.z*(c_143+c_133+c_132+c_15+4*p1.z*c_22))+c_5*
        (-(c_10*c_267)-3*p2.y*c_9*c_298+2*c_8*c_21+3*c_7*p3.y*c_268+3*c_34*(c_269+c_395)-6*p3.y*(c_350-6*c_11*p2.z+c_207+c_191+c_270+c_301+c_439)-6*
        p2.y*p3.z*c_272)+p1.y*(6*c_7*c_9*c_45+c_368-2*c_8*p3.y*c_430+c_76*c_248-5*c_75*c_22+6*c_9*(c_273-2*
        c_13+c_280+c_208-2*c_16+c_274)+3*c_34*(2*c_7*c_28+2*c_9*c_38+p2.y*p3.y*c_19-2*c_40*c_262)+p2.y*p3.y*(c_9*c_287+6*(8*c_6+c_275+c_276+c_208-c_16+3*
        c_11*c_144))))+3*p2.x*p3.x*(-5*c_78*p1.z-3*c_75*p3.y*p1.z+c_351+c_7*c_10*p1.z+3*p2.y*c_76*p1.z+5*c_77*p1.z+18*
        c_8*c_6+6*c_7*p3.y*c_6-6*p2.y*c_9*c_6-18*c_10*c_6-5*c_75*p3.y*p2.z-8*c_8*c_9*p2.z-9*c_7*c_10*p2.z-8*p2.y*c_76*p2.z-5*
        c_77*p2.z+48*c_8*c_11*p2.z+18*c_7*p3.y*c_11*p2.z-6*c_10*c_11*p2.z+60*c_8*p1.z*c_12+36*c_7*p3.y*p1.z*c_12+18*p2.y*c_9*
        p1.z*c_12+6*c_10*p1.z*c_12+60*c_7*p3.y*c_13+48*p2.y*c_9*c_13+18*c_10*c_13+c_96*(p3.y*c_216+p2.y*(c_120+c_79+c_83))+5*c_97*
        c_40+5*c_78*p3.z+8*c_75*p3.y*p3.z+9*c_8*c_9*p3.z+8*c_7*c_10*p3.z+5*p2.y*c_76*p3.z+6*c_8*c_11*p3.z-18*p2.y*c_9*c_11*p3.z-48*
        c_10*c_11*p3.z-60*c_8*c_12*p3.z+54*p2.y*c_9*c_12*p3.z+48*c_10*c_12*p3.z-6*c_8*p1.z*c_15-18*c_7*p3.y*p1.z*c_15-36*
        p2.y*c_9*p1.z*c_15-60*c_10*p1.z*c_15-48*c_8*p2.z*c_15-54*c_7*p3.y*p2.z*c_15+60*c_10*p2.z*c_15-18*c_8*c_16-48*c_7*p3.y*
        c_16-60*p2.y*c_9*c_16+3*c_74*c_47+c_14*(c_9*c_277+4*p2.y*p3.y*c_40-c_7*c_278-6*c_40*(c_143+c_133+c_145+c_279+8*p1.z*c_137))+c_5*
        (3*c_7*p3.y*c_45+c_10*c_319+3*p2.y*c_9*c_17+c_8*(-9*p1.z+c_79+p3.z)+6*p2.y*c_374-6*p3.y*c_349)+p1.y*(4*p2.y*c_10*c_28+c_76*
        (c_115+c_112+c_213)+4*c_8*p3.y*c_38+c_75*c_283+6*c_9*c_305+3*c_7*(c_314+c_9*c_19+6*c_11*c_144-2*(c_285+c_127+c_270+c_16)))+c_34*
        (-3*c_8*c_17+c_184+c_7*p3.y*(c_120+c_112+c_149)+2*p3.y*c_28*(5*c_9+c_157+c_148+c_133+c_286+c_136+c_165)+c_5*(p3.y*
        c_345-p2.y*c_369)-2*p2.y*(c_332+c_17*(c_157+c_148+c_133+c_286+c_136+c_165))+p1.y*(4*p2.y*p3.y*c_45+2*c_9*c_242+c_291+2*c_40*
        (c_157+c_133+c_136+c_165+4*p1.z*c_33))))+3*c_34*(-2*c_7*c_10*c_288-c_75*p3.y*c_116-5*p2.y*c_76*c_221-3*c_8*c_9*c_89+c_322+c_97*
        (c_115+c_158+c_27)-c_77*(c_0+c_289+28*p3.z)+6*c_8*c_17*c_262+18*p2.y*c_9*c_435+c_96*(p2.y*(c_120+c_67+p3.z)+p3.y*c_290)+12*c_10*
        p2.z*c_175+c_14*(c_291+p2.y*p3.y*c_283+c_9*(c_115+c_292+c_56)-6*p2.z*(c_143+c_148+c_12+c_286+c_132+c_279))+6*c_7*p3.y*
        c_296-c_5*(-2*c_10*c_24+c_8*c_297+3*c_7*p3.y*c_298+3*p2.y*(c_339+c_341+c_9*c_267+c_299+c_127+c_128+c_300+6*p1.z*p2.z*c_137)+6*
        p3.y*p2.z*c_344)+p1.y*(c_75*c_248-5*c_76*c_33+c_8*p3.y*c_264-6*c_7*(c_178+c_207+c_94+c_191+c_270+c_301-3*c_11*c_137)-2*p2.y*
        p3.y*(c_9*c_242+3*c_305))))+p10_2*(9*c_104*p3.x*c_47-9*c_44*p3.x*(-c_34+2*c_5+3*p1.y*p2.y+2*c_7+2*p1.y*p3.y+2*p2.y*
        p3.y+c_9+c_147+c_306+c_151+c_188+c_145+c_146)*c_47-9*c_231*c_31+9*p30_5*c_106+c_73*(c_307+18*c_7*p3.y*p1.z+9*p2.y*c_9*p1.z+c_58+32*
        p2.y*c_6+36*p3.y*c_6+40*c_8*p2.z-30*c_7*p3.y*p2.z-12*p2.y*c_9*p2.z+c_60+c_308+36*p3.y*c_11*p2.z-12*p3.y*p1.z*
        c_12-80*p2.y*c_13-60*p3.y*c_13+c_110+30*c_8*p3.z+12*c_7*p3.y*p3.z+c_61+18*p2.y*c_11*p3.z+18*p3.y*c_11*p3.z+c_309+6*p3.y*
        p1.z*p2.z*p3.z+60*p2.y*c_12*p3.z-24*p3.y*c_12*p3.z+12*p2.y*p1.z*c_15+c_62+24*p2.y*p2.z*c_15+c_64+c_65-2*c_14*c_310+p1.y*
        (c_311+c_69+24*c_11*p2.z-24*p1.z*c_12-40*c_13+c_9*(c_164-6*p2.z+c_83)+3*p2.y*p3.y*(c_164+c_312+c_1)+c_113-36*c_11*p3.z-54*
        p1.z*p2.z*p3.z-36*c_12*p3.z-18*p1.z*c_15+c_320+c_114+6*c_7*c_21)-3*c_5*(3*p3.y*c_248+p2.y*(c_86+c_79+c_266)))-p30_3*(3*
        c_7*p3.y*c_313+3*c_8*c_17-2*c_14*(c_72+c_122+c_149)+3*c_5*(6*p2.y*p1.z-3*p2.y*c_137-2*p3.y*c_177)+2*p3.y*
        (c_314+c_131+c_315+c_316+c_317+6*p1.z*p2.z*c_168+5*c_9*c_177+3*c_11*c_318)+6*p2.y*(c_9*c_402+c_17*c_401)+p1.y*(3*p2.y*p3.y*c_319+c_7*(c_164-3*
        c_33)+2*(c_130-3*c_13+3*c_9*c_24-6*c_11*(c_81+c_51)+c_437+c_320+c_321-3*p1.z*(c_133+c_140+c_152))))+3*p3.x*(-(c_75*p3.y*
        c_89)+c_322+c_97*(c_364+c_289+c_27)-c_77*c_323+5*c_96*(c_25+c_324)+6*c_10*p2.z*c_326-c_8*(c_327-6*c_17*c_202)-2*c_14*(p2.y*
        p3.y*(c_70+c_18+c_198)+c_7*c_328+c_9*c_33+6*p2.z*(c_329+c_12+c_330+c_15+5*p1.z*c_137))+p2.y*c_9*(-c_332+6*c_405)+c_7*p3.y*(-(c_9*
        c_199)+6*c_337)-p1.y*(c_8*p3.y*c_313+c_75*c_267+c_76*c_338+3*c_7*(c_339+c_340+c_341+c_342+c_127+c_128+c_300+6*p1.z*p3.z*
        c_137)-6*c_9*p2.z*c_344+p2.y*p3.y*(c_9*c_345-6*c_349))-c_5*(6*c_7*p3.y*c_17+2*c_10*c_177+c_8*(c_181-3*c_137)+3*p2.y*
        (c_200+c_382)))-3*p2.x*(-3*c_74*p2.y*p1.z+3*c_34*c_8*p1.z-2*c_78*p1.z+3*c_74*p3.y*p1.z+3*c_34*c_7*p3.y*p1.z-c_75*p3.y*
        p1.z+c_351-6*c_34*c_10*p1.z-c_7*c_10*p1.z-p2.y*c_76*p1.z+c_352+12*c_34*p2.y*c_6-12*c_34*p3.y*c_6+12*c_7*p3.y*c_6+c_353+12*c_10*
        c_6-8*c_78*p2.z-3*c_74*p3.y*p2.z+3*c_34*c_7*p3.y*p2.z+5*c_75*p3.y*p2.z+6*c_34*p2.y*c_9*p2.z+4*c_8*c_9*p2.z+6*c_34*c_10*
        p2.z+3*c_7*c_10*p2.z+2*p2.y*c_76*p2.z+c_354+12*c_34*p2.y*c_11*p2.z+6*c_34*p2.y*p1.z*c_12+6*c_34*p3.y*p1.z*c_12-36*c_7*
        p3.y*p1.z*c_12-18*p2.y*c_9*p1.z*c_12-6*c_10*p1.z*c_12+6*c_34*p3.y*c_13-60*c_7*p3.y*c_13-24*p2.y*c_9*c_13-6*c_10*c_13+3*
        c_74*p2.y*p3.z-3*c_34*c_8*p3.z-5*c_78*p3.z-6*c_34*c_7*p3.y*p3.z-4*c_75*p3.y*p3.z-6*c_34*p2.y*c_9*p3.z-3*c_8*c_9*p3.z-2*
        c_7*c_10*p3.z+c_355+6*c_34*p2.y*c_11*p3.z+18*c_8*c_11*p3.z-18*c_34*p3.y*c_11*p3.z+c_356+c_357+18*c_10*c_11*p3.z+48*c_8*
        p1.z*p2.z*p3.z+6*c_34*p3.y*p1.z*p2.z*p3.z+18*c_7*p3.y*p1.z*p2.z*p3.z-6*c_10*p1.z*p2.z*p3.z-6*c_34*p2.y*c_12*
        p3.z+60*c_8*c_12*p3.z+12*c_34*p3.y*c_12*p3.z-18*p2.y*c_9*c_12*p3.z-12*c_10*c_12*p3.z-6*c_34*p2.y*p1.z*c_15+c_358-12*c_34*
        p3.y*p1.z*c_15+c_359+c_360+c_361-12*c_34*p2.y*p2.z*c_15+24*c_8*p2.z*c_15+12*c_34*p3.y*p2.z*c_15+18*c_7*p3.y*p2.z*c_15+c_362-12*
        c_34*p2.y*c_16+6*c_8*c_16+12*c_7*p3.y*c_16+c_363+c_97*(c_364+c_2+15*p3.z)-2*c_14*(c_386+c_9*(c_70+c_186+c_83)+p2.y*
        p3.y*c_365+c_387+90*c_11*p3.z+c_57+c_127+30*p1.z*c_15+c_128+c_239+c_7*c_22)+5*c_96*(c_30+c_367)+p1.y*(c_8*p3.y*(c_240+c_79+c_213)-c_76*
        c_297+c_368-p2.y*c_10*c_369-3*c_7*c_9*c_201-c_75*c_370+6*p2.y*p3.y*c_374-6*c_9*(c_350+c_207-6*c_11*
        p3.z+c_191+c_270+c_301+c_293)+6*c_7*p3.z*c_272+3*c_34*(p2.y*p3.y*c_17+c_7*c_298+c_9*c_366-2*c_40*c_413))+c_5*(6*p2.y*c_9*c_45+c_34*(6*p2.y*
        c_28-3*p3.y*c_116)-3*c_7*p3.y*c_376-2*c_8*c_82-3*p3.y*(c_9*c_298+c_382))))+p2.x*(9*c_233*p2.y*p1.z-9*c_74*c_8*p1.z-15*
        c_34*c_78*p1.z+18*c_123*p1.z-9*c_233*p3.y*p1.z-21*c_74*c_7*p3.y*p1.z-21*c_34*c_75*p3.y*p1.z-9*c_124*p3.y*p1.z-15*c_74*
        p2.y*c_9*p1.z-18*c_34*c_8*c_9*p1.z-9*c_78*c_9*p1.z+45*c_74*c_10*p1.z-6*c_34*c_7*c_10*p1.z-9*c_75*c_10*p1.z+15*c_34*p2.y*
        c_76*p1.z-9*c_8*c_76*p1.z+45*c_34*c_77*p1.z-9*c_7*c_77*p1.z-9*p2.y*c_125*p1.z-9*c_126*p1.z-6*c_74*p2.y*c_6+18*c_34*c_8*
        c_6-8*c_78*c_6+6*c_74*p3.y*c_6+18*c_34*c_7*p3.y*c_6+6*c_75*p3.y*c_6+6*c_8*c_9*c_6-36*c_34*c_10*c_6+6*c_7*c_10*c_6+6*p2.y*c_76*
        c_6+6*c_77*c_6-8*c_74*c_8*p2.z-24*c_34*c_78*p2.z-18*c_233*p3.y*p2.z-12*c_74*c_7*p3.y*p2.z-30*c_34*c_75*p3.y*p2.z-24*c_34*
        c_8*c_9*p2.z+20*c_74*c_10*p2.z-12*c_34*c_7*c_10*p2.z+6*c_34*c_77*p2.z-12*c_74*p2.y*c_11*p2.z+72*c_34*c_8*c_11*p2.z-48*
        c_78*c_11*p2.z+6*c_74*p3.y*c_11*p2.z+54*c_34*c_7*p3.y*c_11*p2.z+30*c_75*p3.y*c_11*p2.z+24*c_8*c_9*c_11*p2.z-36*c_34*c_10*
        c_11*p2.z+18*c_7*c_10*c_11*p2.z+12*p2.y*c_76*c_11*p2.z+6*c_77*c_11*p2.z-18*c_74*p2.y*p1.z*c_12+180*c_34*c_8*p1.z*c_12-168*
        c_78*p1.z*c_12+6*c_74*p3.y*p1.z*c_12+108*c_34*c_7*p3.y*p1.z*c_12+90*c_75*p3.y*p1.z*c_12+60*c_8*c_9*p1.z*c_12-36*c_34*
        c_10*p1.z*c_12+36*c_7*c_10*p1.z*c_12+18*p2.y*c_76*p1.z*c_12+6*c_77*p1.z*c_12+16*c_74*p2.y*c_13+20*c_74*p3.y*c_13-140*c_75*
        p3.y*c_13-80*c_8*c_9*c_13-40*c_7*c_10*c_13-16*p2.y*c_76*c_13-4*c_77*c_13+18*c_233*p2.y*p3.z-10*c_74*c_8*p3.z-6*c_34*c_78*
        p3.z-18*c_123*p3.z-30*c_74*c_7*p3.y*p3.z-12*c_34*c_75*p3.y*p3.z-18*c_124*p3.y*p3.z-30*c_74*p2.y*c_9*p3.z-12*c_34*c_8*
        c_9*p3.z-18*c_78*c_9*p3.z+70*c_74*c_10*p3.z-18*c_75*c_10*p3.z+30*c_34*p2.y*c_76*p3.z-18*c_8*c_76*p3.z+84*c_34*c_77*p3.z-18*
        c_7*c_77*p3.z-18*p2.y*c_125*p3.z-18*c_126*p3.z-24*c_74*p2.y*c_11*p3.z+36*c_34*c_8*c_11*p3.z+30*c_74*p3.y*c_11*p3.z+54*
        c_34*c_7*p3.y*c_11*p3.z+c_383+12*c_8*c_9*c_11*p3.z-180*c_34*c_10*c_11*p3.z+18*c_7*c_10*c_11*p3.z+24*p2.y*c_76*c_11*p3.z+30*
        c_77*c_11*p3.z-48*c_74*p2.y*p1.z*p2.z*p3.z+144*c_34*c_8*p1.z*p2.z*p3.z+30*c_74*p3.y*p1.z*p2.z*p3.z+162*c_34*c_7*
        p3.y*p1.z*p2.z*p3.z+30*c_75*p3.y*p1.z*p2.z*p3.z+48*c_8*c_9*p1.z*p2.z*p3.z-180*c_34*c_10*p1.z*p2.z*p3.z+54*c_7*c_10*
        p1.z*p2.z*p3.z+48*p2.y*c_76*p1.z*p2.z*p3.z+30*c_77*p1.z*p2.z*p3.z+24*c_74*p2.y*c_12*p3.z+168*c_78*c_12*p3.z+60*c_74*
        p3.y*c_12*p3.z+60*c_75*p3.y*c_12*p3.z-24*c_7*c_10*c_12*p3.z-24*p2.y*c_76*c_12*p3.z-12*c_77*c_12*p3.z-60*c_74*p2.y*p1.z*
        c_15+54*c_34*c_8*p1.z*c_15+90*c_74*p3.y*p1.z*c_15+108*c_34*c_7*p3.y*p1.z*c_15+6*c_75*p3.y*p1.z*c_15+c_384-540*c_34*c_10*
        p1.z*c_15+36*c_7*c_10*p1.z*c_15+60*p2.y*c_76*p1.z*c_15+90*c_77*p1.z*c_15+48*c_78*p2.z*c_15+60*c_74*p3.y*p2.z*c_15+60*
        c_75*p3.y*p2.z*c_15+48*c_8*c_9*p2.z*c_15+24*c_7*c_10*p2.z*c_15-12*c_77*p2.z*c_15-40*c_74*p2.y*c_16+8*c_78*c_16-140*c_74*
        p3.y*c_16+20*c_75*p3.y*c_16+32*c_8*c_9*c_16+40*c_7*c_10*c_16+40*p2.y*c_76*c_16+28*c_77*c_16+9*c_222*c_21+9*c_223*(c_385+c_30)+c_97*
        (-28*c_6+c_386+12*c_11*p2.z+12*p1.z*c_12+c_341-9*c_9*c_17+c_387+c_388+c_389+c_276+c_390+c_391+c_114+9*p2.y*p3.y*c_38+9*
        c_7*c_21)-c_5*(9*c_75*p3.y*c_17-9*c_78*c_21-9*c_7*p3.y*c_17*c_392-9*p2.y*c_9*c_17*c_394+3*c_74*(-(p3.y*c_331)+c_395)+c_8*
        (c_396-80*c_13+c_408+c_397+c_398+c_239+12*p1.z*p3.z*c_399+6*c_11*(c_79+c_71))-3*c_10*c_17*(c_134+2*c_401)+3*c_34*(-2*c_10*c_402+c_8*
        c_369+3*c_7*p3.y*c_201+6*p3.y*c_405-6*p2.y*(c_220-4*c_13+c_9*c_40+c_436+c_280+c_301-3*p1.z*c_335)))-c_96*(9*c_7*p3.y*c_17-9*
        c_8*c_21+3*c_34*(c_407+c_395)-3*p3.y*c_17*(c_134+2*(c_329+c_12+c_132+c_279+5*p1.z*c_33))+p2.y*(c_408+2*(c_130+c_372+30*c_11*
        p3.z+c_409+c_128+c_418-12*p1.z*(c_12-2*p2.z*p3.z+c_210))))+c_14*(c_368+9*c_8*p3.y*c_38+9*c_75*c_21+3*p2.y*p3.y*c_17*
        c_411-3*c_34*(-3*c_9*c_89+c_426+p2.y*p3.y*c_412+6*c_40*c_413)+3*c_9*c_17*(c_134+2*c_415)-c_7*(c_408+2*(c_130+c_211+c_416+c_417+c_418+6*
        c_11*(c_2+c_71)+p1.z*(-12*c_12+27*p2.z*p3.z+9*c_15))))+p1.y*(-9*c_233*c_40+9*c_78*p3.y*c_38+9*c_124*c_21+9*c_7*c_9*
        c_17*c_420+3*c_8*p3.y*c_17*c_421+3*p2.y*c_10*c_17*c_424-c_75*(c_130-140*c_13+c_408+c_425+c_316+c_239+6*c_11*(c_160+p3.z)+6*p1.z*
        (c_90+c_129+c_15))-3*c_74*(-5*c_9*c_221+c_426+p2.y*p3.y*(c_68+c_312+c_169)-2*c_40*(c_11+c_375+c_133+5*p1.z*p3.z+c_427+c_172))+3*
        c_76*c_17*(c_134+2*c_429)-3*c_34*(-5*c_76*c_116+c_75*c_430+c_8*p3.y*c_431+18*c_9*c_435-2*p2.y*(c_10*c_331+3*p3.y*(c_6-3*
        p1.z*c_12+c_372+c_436+c_437+c_438+c_303))+3*c_7*(c_9*c_185-2*(c_220+c_274+c_439+2*(-5*c_13+c_280+c_16)))))))/double(8709120);
}

double trig::c65() const{
    double p12_2=p1.z*p1.z;
    double p22_2=p2.z*p2.z;
    double p32_2=p3.z*p3.z;
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
    double p30_5=p3.x*p30_4;
    double p30_6=p3.x*p30_5;
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
    double c_0=p12_2;
    double c_1=p22_2;
    double c_2=p32_2;
    double c_3=-p3.z;
    double c_4=p2.z+c_3;
    double c_5=3*c_2;
    double c_6=6*p2.z;
    double c_7=-c_2;
    double c_8=c_6+p3.z;
    double c_9=-p2.z;
    double c_10=p1.z+c_9;
    double c_11=-(3*c_1);
    double c_12=-(p2.z*p3.z);
    double c_13=-c_1;
    double c_14=p1.z+c_3;
    double c_15=6*p1.z;
    double c_16=2*p3.z;
    double c_17=5*c_0;
    double c_18=5*p1.z*p2.z;
    double c_19=2*p2.z*p3.z;
    double c_20=p2.z*p3.z;
    double c_21=7*p3.z;
    double c_22=p1.z+p2.z+c_21;
    double c_23=3*c_0;
    double c_24=9*p1.z*p2.z;
    double c_25=3*c_1;
    double c_26=5*p1.z*p3.z;
    double c_27=5*c_2;
    double c_28=5*p2.z*p3.z;
    double c_29=2*c_0;
    double c_30=6*p3.z;
    double c_31=p2.z+c_30;
    double c_32=p21_2;
    double c_33=2*p1.z;
    double c_34=2*p2.z;
    double c_35=p31_2;
    double c_36=2*c_1;
    double c_37=p1.z*p3.z;
    double c_38=12*p2.z*p3.z;
    double c_39=4*p3.z;
    double c_40=8*p1.z*p2.z;
    double c_41=10*c_2;
    double c_42=p11_2;
    double c_43=p21_3;
    double c_44=p31_3;
    double c_45=p11_3;
    double c_46=5*p1.z;
    double c_47=3*p2.z*p3.z;
    double c_48=p2.z+p3.z;
    double c_49=3*p2.z;
    double c_50=-(2*p2.z*p3.z);
    double c_51=-(5*p1.z*c_48);
    double c_52=-(6*c_32*p3.y*c_2);
    double c_53=3*p1.z;
    double c_54=-3*c_0;
    double c_55=-(4*c_1);
    double c_56=2*p1.z*p3.z;
    double c_57=8*p2.z*p3.z;
    double c_58=6*c_2;
    double c_59=p30_2;
    double c_60=14*c_1;
    double c_61=12*p1.z*p3.z;
    double c_62=14*c_2;
    double c_63=4*c_0;
    double c_64=4*c_1;
    double c_65=6*p1.z*p2.z;
    double c_66=-(p1.z*p3.z);
    double c_67=5*c_1;
    double c_68=9*p1.z*p3.z;
    double c_69=4*p1.z*p2.z;
    double c_70=3*p1.z*p3.z;
    double c_71=-(2*c_2);
    double c_72=4*p2.z;
    double c_73=c_53+c_72+c_16;
    double c_74=10*c_1;
    double c_75=8*p1.z*p3.z;
    double c_76=20*p2.z*p3.z;
    double c_77=4*c_2;
    double c_78=3*p3.z;
    double c_79=5*p2.z;
    double c_80=p2.z+c_16;
    double c_81=4*p1.z;
    double c_82=3*p1.z*p2.z;
    double c_83=4*p2.z*p3.z;
    double c_84=p21_4;
    double c_85=c_33+c_79+c_16;
    double c_86=c_33+c_72+c_78;
    double c_87=c_33+c_49+c_39;
    double c_88=5*p3.z;
    double c_89=c_33+c_34+c_88;
    double c_90=p31_4;
    double c_91=p1.z*p2.z;
    double c_92=2*c_48;
    double c_93=c_46+c_92;
    double c_94=p2.z+c_78;
    double c_95=c_53+c_34+c_39;
    double c_96=p20_2;
    double c_97=p30_4;
    double c_98=p21_5;
    double c_99=p31_5;
    double c_100=p11_5;
    double c_101=p2.z+c_88;
    double c_102=p1.z+p2.z+p3.z;
    double c_103=c_81+c_49+c_16;
    double c_104=c_81+c_34+c_78;
    double c_105=2*p1.z*p2.z;
    double c_106=p11_4;
    double c_107=c_49+p3.z;
    double c_108=c_79+p3.z;
    double c_109=-(4*c_2);
    double c_110=-(p1.z*p2.z);
    double c_111=2*c_2;
    double c_112=6*p2.z*p3.z;
    double c_113=-(10*c_2);
    double c_114=-(10*c_1);
    double c_115=4*c_48;
    double c_116=p1.z+c_115;
    double c_117=p3.y*c_10;
    double c_118=p1.y*c_4;
    double c_119=-p1.z;
    double c_120=c_119+p3.z;
    double c_121=p2.y*c_120;
    double c_122=c_117+c_118+c_121;
    double c_123=p20_3;
    double c_124=14*c_0;
    double c_125=-(14*c_1);
    double c_126=-(3*c_2);
    double c_127=-(12*p2.y*c_35*c_0);
    double c_128=12*p2.y*c_35*p1.z*p2.z;
    double c_129=-(9*c_44*p1.z*p3.z);
    double c_130=9*c_44*p2.z*p3.z;
    double c_131=-(9*p2.y*c_35*c_2);
    double c_132=7*c_0;
    double c_133=18*p1.z*p3.z;
    double c_134=-(8*p1.z*p2.z);
    double c_135=4*p1.z*p3.z;
    double c_136=10*c_0;
    double c_137=6*p1.z*p3.z;
    double c_138=20*p1.z*p3.z;
    double c_139=c_17+c_13+c_26+c_19+c_2;
    double c_140=p2.y*c_139;
    double c_141=-(6*c_1);
    double c_142=c_34+p3.z;
    double c_143=27*c_44*p1.z*p2.z;
    double c_144=9*c_32*p3.y*c_1;
    double c_145=-(12*c_32*p3.y*p1.z*p3.z);
    double c_146=-(9*c_43*p2.z*p3.z);
    double c_147=10*c_44*c_2;
    double c_148=-(9*c_2);
    double c_149=20*c_0;
    double c_150=-(7*p2.z*p3.z);
    double c_151=15*p2.z*p3.z;
    double c_152=12*p1.z*p2.z;
    double c_153=c_17+c_18+c_1+c_19+c_7;
    double c_154=30*c_0;
    double c_155=-(5*p2.z*p3.z);
    double c_156=-(6*c_2);
    double c_157=-(2*c_99*p1.z*p2.z);
    double c_158=-(3*p2.y*c_90*p2.z*p3.z);
    double c_159=-(3*c_99*c_2);
    double c_160=p20_4;
    double c_161=-(5*c_1);
    double c_162=-(5*c_2);
    double c_163=c_81+p2.z+c_39;
    double c_164=c_29+c_82+c_1+c_56+c_83;
    double c_165=-(2*c_1);
    double c_166=-(3*p2.z*p3.z);
    double c_167=-(3*c_44*c_0);
    double c_168=-(10*c_43*c_1);
    double c_169=30*c_32*p3.y*c_1;
    double c_170=12*p2.y*c_35*c_1;
    double c_171=3*c_44*c_1;
    double c_172=-(12*c_43*p1.z*p3.z);
    double c_173=-(6*c_32*p3.y*p2.z*p3.z);
    double c_174=3*p2.y*c_35*p2.z*p3.z;
    double c_175=-(6*c_43*c_2);
    double c_176=-(3*p2.y*c_35*c_2);
    double c_177=c_117+c_121;
    double c_178=c_81+c_72+p3.z;
    double c_179=c_29+c_105+c_70+c_83+c_2;
    double c_180=-10*c_0;
    double c_181=c_0+c_105+c_13+c_26+c_27;
    double c_182=7*c_2;
    double c_183=7*p1.z*p2.z;
    double c_184=-(2*p1.z*p2.z);
    double c_185=-(4*p2.z*p3.z);
    double c_186=c_49+c_39;
    double c_187=7*p1.z*p3.z;
    double c_188=-(6*p2.z*p3.z);
    double c_189=-(9*c_1);
    double c_190=-(8*p2.z*p3.z);
    double c_191=6*c_1;
    double c_192=10*p2.z*p3.z;
    double c_193=5*p1.z*c_48;
    double c_194=c_0+c_18+c_67+c_56+c_7;
    double c_195=-(6*p1.z*p3.z);
    double c_196=-5*c_0;
    double c_197=-(12*c_2);
    double c_198=-(5*p1.z*p3.z);
    double c_199=9*c_0;
    double c_200=-(20*c_2);
    double c_201=c_0+c_105+c_36+c_66+c_109;
    double c_202=c_0+c_110+c_55+c_56+c_111;
    double c_203=-(20*c_1);
    double c_204=c_29+c_82+c_25+c_56+c_113;
    double c_205=c_29+c_105+c_114+c_70+c_5;
    double c_206=8*c_0;
    double c_207=-(30*c_1);
    double c_208=5*p1.z*c_107;
    double c_209=5*p1.z*c_94;
    double c_210=-(7*c_2);
    double c_211=p20_5;
    double c_212=-(7*c_1);
    double c_213=c_119+p2.z;
    double c_214=p3.y*c_213;
    double c_215=p2.y*c_14;
    double c_216=c_9+p3.z;
    double c_217=p1.y*c_216;
    double c_218=c_214+c_215+c_217;
    double c_219=8*p2.z;
    double c_220=-(30*c_2);
    double c_221=-(5*p1.z*p2.z);
    double c_222=-2*c_0;
    double c_223=8*c_1;
    double c_224=9*c_1;
    double c_225=-(8*c_1);
    double c_226=c_63+c_91+c_13+c_50+c_71;
    double c_227=c_29+c_105+c_1+c_12+c_109;
    double c_228=-c_0;
    double c_229=c_1+c_20+c_162;
    double c_230=2*c_229;
    double c_231=c_23+c_82+c_230;
    double c_232=-10*c_43*c_0;
    double c_233=-(70*c_43*c_1);
    double c_234=-(30*c_43*p1.z*p3.z);
    double c_235=-(30*c_32*p3.y*p1.z*p3.z);
    double c_236=6*c_0;
    double c_237=-(2*p1.z*p3.z);
    double c_238=c_0+c_161+c_237+c_155+c_7;
    double c_239=18*p2.z*p3.z;
    double c_240=27*p2.z*p3.z;
    double c_241=-12*c_0;
    double c_242=7*p2.z*p3.z;
    double c_243=15*p1.z*p2.z;
    double c_244=c_0+c_184+c_13+c_155+c_162;
    double c_245=2*p1.z*c_80;
    double c_246=8*p3.z;
    double c_247=-(2*p2.y*c_90*c_0);
    double c_248=-(5*c_84*p3.y*p1.z*p3.z);
    double c_249=-(5*c_99*p1.z*p3.z);
    double c_250=-(15*c_84*p3.y*p2.z*p3.z);
    double c_251=-(5*p2.y*c_90*c_2);
    double c_252=21*c_0;
    double c_253=-30*c_0;
    double c_254=c_180+c_25+c_56+c_47+c_111;
    double c_255=-20*c_0;
    double c_256=9*c_2;
    double c_257=p1.z+c_49+c_88;
    double c_258=-(3*p1.z*p3.z);
    double c_259=8*c_2;
    double c_260=-(8*c_2);
    double c_261=c_53+p2.z+c_88;
    return (p10_6*(-5*p1.y*c_4*(7*p1.z+p2.z+p3.z)+p3.y*(-14*c_0-18*p1.z*p2.z+c_11+c_37+c_166+c_2)+p2.y*(c_124+c_110+c_13+c_133+c_47+c_5))-3*
        c_211*p3.x*(-(p1.y*c_4*(p1.z+c_6+c_16))-p3.y*c_194+p2.y*(c_0+c_212+c_57+c_5+p1.z*c_8))+p20_6*(5*p2.y*c_14*
        (p1.z+7*p2.z+p3.z)+p1.y*(c_0+c_125+p1.z*(p2.z-3*p3.z)-18*p2.z*p3.z+c_126)+p3.y*(c_23+c_60+c_12+c_7+3*p1.z*c_8))+p30_6*
        (-5*p3.y*c_10*c_22+p1.y*(c_228+c_82+c_25+c_66+c_239+c_62)+p2.y*(c_54+c_1+c_20-14*c_2-3*p1.z*c_31))+3*p10_5*(p2.x*(p3.y*
        c_10*(c_15+c_34+p3.z)+p1.y*(c_132+c_134+c_11+c_195+c_12+c_7)+c_140)+p3.x*(-(p2.y*c_14*(c_15+p2.z+c_16))-p3.y*c_153+p1.y*
        (-7*c_0+c_65+c_1+c_75+c_20+c_5)))+c_97*(5*c_44*c_10*c_22+c_43*(c_23+c_24+c_36+c_61+c_28+c_27)-c_45*(c_29+c_24+c_25+c_26+c_38+c_27)+3*
        c_32*p3.y*(c_63+c_40+c_1+c_138+c_28+c_41)+15*p2.y*c_35*(c_29+2*p1.z*c_31+p3.z*(p2.z+c_21))+3*p1.y*(c_32*c_10*c_87+4*
        p2.y*p3.y*c_10*c_89-5*c_35*(c_105+c_36+c_37+c_38+c_182))+3*c_42*(p2.y*c_10*c_95-p3.y*(c_0+c_40+c_64+c_26+c_76+c_41)))+p10_4*
        (-105*c_42*p2.y*c_0-30*p1.y*c_32*c_0-5*c_43*c_0+105*c_42*p3.y*c_0+30*p1.y*c_35*c_0+5*c_44*c_0+35*c_45*p1.z*p2.z-15*c_42*
        p2.y*p1.z*p2.z-15*p1.y*c_32*p1.z*p2.z-5*c_43*p1.z*p2.z+180*c_42*p3.y*p1.z*p2.z+60*p1.y*p2.y*p3.y*p1.z*p2.z+12*
        c_32*p3.y*p1.z*p2.z+60*p1.y*c_35*p1.z*p2.z+c_128+12*c_44*p1.z*p2.z+5*c_45*c_1-3*p1.y*c_32*c_1-2*c_43*c_1+30*c_42*p3.y*
        c_1+24*p1.y*p2.y*p3.y*c_1+c_144+12*p1.y*c_35*c_1+6*p2.y*c_35*c_1+c_171-35*c_45*p1.z*p3.z-180*c_42*p2.y*p1.z*p3.z-60*
        p1.y*c_32*p1.z*p3.z+c_172+15*c_42*p3.y*p1.z*p3.z-60*p1.y*p2.y*p3.y*p1.z*p3.z+c_145+15*p1.y*c_35*p1.z*p3.z-12*p2.y*
        c_35*p1.z*p3.z+5*c_44*p1.z*p3.z-30*c_42*p2.y*p2.z*p3.z-24*p1.y*c_32*p2.z*p3.z+c_146+30*c_42*p3.y*p2.z*p3.z-3*c_32*
        p3.y*p2.z*p3.z+24*p1.y*c_35*p2.z*p3.z+c_174+c_130-5*c_45*c_2-30*c_42*p2.y*c_2-12*p1.y*c_32*c_2-3*c_43*c_2-24*p1.y*p2.y*
        p3.y*c_2+c_52+3*p1.y*c_35*c_2+c_131+2*c_44*c_2+3*p2.x*p3.x*c_122*c_93-3*c_59*(p2.y*c_14*(c_46+p2.z+c_78)+p3.y*
        (c_17+c_69+c_1+c_37+c_47+c_71)+p1.y*(c_17+c_13+c_50+c_109+c_51))+3*c_96*(p3.y*c_10*(c_46+c_49+p3.z)+p2.y*(c_17+c_91+c_165+c_135+c_47+c_2)+p1.y*
        (c_17+c_55+c_50+c_7+c_51)))-c_123*p3.x*(-30*c_43*c_0+6*c_32*p3.y*c_0+15*p2.y*c_35*c_0+9*c_44*c_0-180*c_43*p1.z*
        p2.z+30*c_32*p3.y*p1.z*p2.z+60*p2.y*c_35*p1.z*p2.z+c_143+c_233+c_169+30*p2.y*c_35*c_1+10*c_44*c_1+c_234+12*c_32*p3.y*p1.z*
        p3.z+45*p2.y*c_35*p1.z*p3.z+36*c_44*p1.z*p3.z-40*c_43*p2.z*p3.z+24*p2.y*c_35*p2.z*p3.z+16*c_44*p2.z*p3.z-10*c_43*
        c_2+c_52+6*p2.y*c_35*c_2+c_147+3*c_45*c_4*c_73-3*c_42*(p3.y*(c_54+c_221+c_55+c_56+c_83+c_58)+p2.y*(c_23-4*p1.z*
        p2.z+c_203+c_187+c_57+c_58))+c_59*(-(p3.y*(c_23+c_24+c_60+c_61+c_57+c_113))+p2.y*(c_23+c_152+c_114+c_68+c_57+c_62)-3*p1.y*c_4*c_116)+3*
        p1.y*(c_35*(c_63+c_183+c_64+c_70+c_188+c_197)+2*p2.y*p3.y*(c_29+c_65+c_74+c_66+c_190+c_148)-2*c_32*(c_63+c_207+c_192+c_58+c_193)))+c_160*
        (-5*c_43*c_0-30*c_32*p3.y*c_0+c_127+c_167-35*c_43*p1.z*p2.z-180*c_32*p3.y*p1.z*p2.z-60*p2.y*c_35*p1.z*p2.z-12*
        c_44*p1.z*p2.z-105*c_32*p3.y*c_1-30*p2.y*c_35*c_1-5*c_44*c_1+c_235-24*p2.y*c_35*p1.z*p3.z+c_129+35*c_43*p2.z*p3.z-15*
        c_32*p3.y*p2.z*p3.z-15*p2.y*c_35*p2.z*p3.z-5*c_44*p2.z*p3.z+5*c_43*c_2+c_176-2*c_44*c_2+c_45*(c_29+c_18+c_67+c_68+c_38+c_5)-3*
        c_59*(-(p3.y*(c_0+c_69+c_67+c_70+c_20+c_71))+p2.y*(c_0+c_18+c_161+c_56+c_28+c_77))+3*c_42*(-(p3.y*c_14*c_73)+p2.y*
        (c_0+c_18+c_74+c_75+c_76+c_77))+3*p1.y*(-4*p2.y*p3.y*c_14*c_85-c_35*c_14*c_86+c_59*c_4*(p1.z+c_79+c_78)+5*c_32*(7*c_1+c_38+c_111+p1.z*
        c_80)))+3*c_59*(3*c_99*c_10*c_22-c_84*p3.y*(c_29+c_40+c_67+c_137+c_47)-2*c_32*c_44*(c_29+c_69+c_25+10*p1.z*
        p3.z+c_28)+c_100*(c_23+p1.z*c_108+p2.z*c_80)-c_98*(c_0+p2.z*c_107+p1.z*(c_79+c_16))-3*c_43*c_35*(c_0+2*p2.z*c_48+p1.z*c_186)-5*
        p2.y*c_90*(c_0+p2.z*c_94+p1.z*c_31)+c_45*(-(c_32*c_10*c_103)-2*p2.y*p3.y*c_10*c_104+3*c_35*c_164)+p1.y*(-(c_84*c_10*c_85)-2*
        c_43*p3.y*c_10*c_86-3*c_32*c_35*c_10*c_87-4*p2.y*c_44*c_10*c_89+5*c_90*(c_0+c_91+c_1+c_70+c_112))+c_106*(-(p2.y*c_10*c_93)+p3.y*
        (c_17+2*p2.z*c_94+p1.z*(c_219+c_78)))+c_42*(-6*c_32*p3.y*c_10*c_102-c_43*c_10*c_73-3*p2.y*c_35*c_10*c_95+2*c_44*(c_23+2*
        p2.z*c_101+p1.z*(c_72+c_88))))-3*c_96*(c_97*p2.y*c_0-6*c_59*c_43*c_0+3*c_98*c_0-c_97*p3.y*c_0-3*c_59*c_32*p3.y*c_0-5*c_84*
        p3.y*c_0+3*c_59*p2.y*c_35*c_0-4*c_43*c_35*c_0+6*c_59*c_44*c_0-3*c_32*c_44*c_0+c_247-c_99*c_0+3*c_97*p2.y*p1.z*p2.z-30*c_59*
        c_43*p1.z*p2.z+21*c_98*p1.z*p2.z-2*c_97*p3.y*p1.z*p2.z-12*c_59*c_32*p3.y*p1.z*p2.z-30*c_84*p3.y*p1.z*p2.z+9*c_59*
        p2.y*c_35*p1.z*p2.z-20*c_43*c_35*p1.z*p2.z+12*c_59*c_44*p1.z*p2.z-12*c_32*c_44*p1.z*p2.z-6*p2.y*c_90*p1.z*p2.z+c_157-2*
        c_97*p2.y*c_1-10*c_59*c_43*c_1-4*c_97*p3.y*c_1+6*c_59*p2.y*c_35*c_1+4*c_59*c_44*c_1+4*c_97*p2.y*p1.z*p3.z-12*c_59*c_43*
        p1.z*p3.z-5*c_97*p3.y*p1.z*p3.z-9*c_59*c_32*p3.y*p1.z*p3.z+c_248+12*c_59*p2.y*c_35*p1.z*p3.z-8*c_43*c_35*p1.z*p3.z+30*
        c_59*c_44*p1.z*p3.z-9*c_32*c_44*p1.z*p3.z-8*p2.y*c_90*p1.z*p3.z+c_249+c_97*p2.y*p2.z*p3.z-10*c_59*c_43*p2.z*
        p3.z-21*c_98*p2.z*p3.z-5*c_97*p3.y*p2.z*p3.z-6*c_59*c_32*p3.y*p2.z*p3.z+c_250+6*c_59*p2.y*c_35*p2.z*p3.z-10*c_43*c_35*
        p2.z*p3.z+10*c_59*c_44*p2.z*p3.z-6*c_32*c_44*p2.z*p3.z+c_158-c_99*p2.z*p3.z+5*c_97*p2.y*c_2-4*c_59*c_43*c_2-3*c_98*c_2+5*
        c_97*p3.y*c_2-6*c_59*c_32*p3.y*c_2-5*c_84*p3.y*c_2-6*c_43*c_35*c_2+10*c_59*c_44*c_2-6*c_32*c_44*c_2+c_251+c_159+c_100*
        (c_23+p3.z*c_142+p1.z*c_101)+c_45*(3*c_59*c_4*c_102-2*p2.y*p3.y*c_14*c_103-c_35*c_14*c_104+3*c_32*c_179)+c_106*(-(p3.y*c_14*
        c_93)+p2.y*(c_17+2*p3.z*c_107+p1.z*(c_49+c_246)))+c_42*(-6*p2.y*c_35*c_14*c_102-3*c_32*p3.y*c_14*c_73-c_44*c_14*c_95+2*c_43*
        (c_23+2*p3.z*c_108+p1.z*(c_79+c_39))-3*c_59*(-(p3.y*c_201)+p2.y*c_202))+p1.y*(-4*c_43*p3.y*c_14*c_85-3*c_32*c_35*c_14*c_86-2*
        p2.y*c_44*c_14*c_87-c_90*c_14*c_89-c_97*c_4*c_257+5*c_84*(c_0+c_82+c_37+c_112+c_2)-3*c_59*(-(c_35*c_204)+c_32*c_205-2*p2.y*
        p3.y*c_4*c_116)))+p10_3*(3*c_96*p3.x*c_103*c_122+c_123*(3*p3.y*c_10*c_178+p2.y*(c_124+c_40+c_114+c_68+c_38+c_5)+p1.y*(c_136+c_125-9*
        p2.z*p3.z+c_126-4*p1.z*(c_34+c_78)))+p2.x*(c_232-12*c_32*p3.y*c_0+c_127-12*c_44*c_0-16*c_43*p1.z*p2.z+18*c_32*
        p3.y*p1.z*p2.z+c_128+6*c_44*p1.z*p2.z+c_168+36*c_32*p3.y*c_1+18*p2.y*c_35*c_1+6*c_44*c_1-27*c_43*p1.z*p3.z-21*c_32*p3.y*
        p1.z*p3.z-15*p2.y*c_35*p1.z*p3.z+c_129-36*c_43*p2.z*p3.z-9*c_32*p3.y*p2.z*p3.z+6*p2.y*c_35*p2.z*p3.z+c_130-9*c_43*
        c_2-12*c_32*p3.y*c_2+c_131+10*c_45*(c_132+c_69+c_1+c_133+c_47+c_5)+3*c_59*c_104*c_177-3*p1.y*(-(c_59*c_4*c_104)+c_35*
        (c_149+c_134+c_141+c_135+c_150+c_126)+2*p2.y*p3.y*(c_136+c_134+c_189+c_137+c_12+c_111)+c_32*(c_136+c_40+c_36+c_138+c_151+c_27))-6*c_42*
        (c_140+p3.y*(c_154+c_141+c_155+c_109-5*p1.z*c_142)))+p3.x*(12*c_43*c_0+12*c_32*p3.y*c_0+12*p2.y*c_35*c_0+10*c_44*c_0+9*c_43*
        p1.z*p2.z+15*c_32*p3.y*p1.z*p2.z+21*p2.y*c_35*p1.z*p2.z+c_143+c_144+c_170+9*c_44*c_1-6*c_43*p1.z*p3.z+c_145-18*p2.y*
        c_35*p1.z*p3.z+16*c_44*p1.z*p3.z+c_146+c_173+9*p2.y*c_35*p2.z*p3.z+36*c_44*p2.z*p3.z+c_175-18*c_32*p3.y*c_2-36*p2.y*
        c_35*c_2+c_147-10*c_45*(c_132+18*p1.z*p2.z+c_25+c_135+c_47+c_2)+3*p1.y*(2*p2.y*p3.y*(c_136+c_65+c_36-8*p1.z*p3.z+c_12+c_148)+c_32*
        (c_149+c_11+4*p1.z*(p2.z-2*p3.z)+c_150+c_156)+c_35*(c_136+20*p1.z*p2.z+c_67+c_75+c_151+c_111))+c_59*(-3*p2.y*c_14*
        c_163-p3.y*(c_124+c_24+c_25+c_75+c_38+c_113)+p1.y*(c_180+c_152+c_25+c_75+9*p2.z*p3.z+c_62))+6*c_42*(p3.y*c_153+p2.y*
        (c_154+c_55+c_155+c_156-5*p1.z*c_80))))+3*p10_2*(21*c_100*p1.z*p2.z+15*c_106*p2.y*p1.z*p2.z+10*c_45*c_32*p1.z*p2.z+6*c_42*
        c_43*p1.z*p2.z+3*p1.y*c_84*p1.z*p2.z+c_98*p1.z*p2.z-30*c_106*p3.y*p1.z*p2.z-20*c_45*p2.y*p3.y*p1.z*p2.z-12*c_42*
        c_32*p3.y*p1.z*p2.z-6*p1.y*c_43*p3.y*p1.z*p2.z-2*c_84*p3.y*p1.z*p2.z-20*c_45*c_35*p1.z*p2.z-12*c_42*p2.y*c_35*p1.z*
        p2.z-6*p1.y*c_32*c_35*p1.z*p2.z-2*c_43*c_35*p1.z*p2.z-12*c_42*c_44*p1.z*p2.z-6*p1.y*p2.y*c_44*p1.z*p2.z-2*c_32*c_44*
        p1.z*p2.z-6*p1.y*c_90*p1.z*p2.z-2*p2.y*c_90*p1.z*p2.z+c_157+3*c_100*c_1+5*c_106*p2.y*c_1+6*c_45*c_32*c_1+6*c_42*c_43*
        c_1+5*p1.y*c_84*c_1+3*c_98*c_1-5*c_106*p3.y*c_1-8*c_45*p2.y*p3.y*c_1-9*c_42*c_32*p3.y*c_1-8*p1.y*c_43*p3.y*c_1-5*c_84*p3.y*
        c_1-4*c_45*c_35*c_1-6*c_42*p2.y*c_35*c_1-6*p1.y*c_32*c_35*c_1-4*c_43*c_35*c_1-3*c_42*c_44*c_1-4*p1.y*p2.y*c_44*c_1-3*c_32*
        c_44*c_1-2*p1.y*c_90*c_1-2*p2.y*c_90*c_1-c_99*c_1-21*c_100*p1.z*p3.z+30*c_106*p2.y*p1.z*p3.z+20*c_45*c_32*p1.z*p3.z+12*
        c_42*c_43*p1.z*p3.z+6*p1.y*c_84*p1.z*p3.z+2*c_98*p1.z*p3.z-15*c_106*p3.y*p1.z*p3.z+20*c_45*p2.y*p3.y*p1.z*p3.z+12*
        c_42*c_32*p3.y*p1.z*p3.z+6*p1.y*c_43*p3.y*p1.z*p3.z+2*c_84*p3.y*p1.z*p3.z-10*c_45*c_35*p1.z*p3.z+12*c_42*p2.y*c_35*
        p1.z*p3.z+6*p1.y*c_32*c_35*p1.z*p3.z+2*c_43*c_35*p1.z*p3.z-6*c_42*c_44*p1.z*p3.z+6*p1.y*p2.y*c_44*p1.z*p3.z+2*c_32*
        c_44*p1.z*p3.z-3*p1.y*c_90*p1.z*p3.z+2*p2.y*c_90*p1.z*p3.z-c_99*p1.z*p3.z+5*c_106*p2.y*p2.z*p3.z+8*c_45*c_32*
        p2.z*p3.z+9*c_42*c_43*p2.z*p3.z+8*p1.y*c_84*p2.z*p3.z+5*c_98*p2.z*p3.z-5*c_106*p3.y*p2.z*p3.z+3*c_42*c_32*p3.y*p2.z*
        p3.z+4*p1.y*c_43*p3.y*p2.z*p3.z+3*c_84*p3.y*p2.z*p3.z-8*c_45*c_35*p2.z*p3.z-3*c_42*p2.y*c_35*p2.z*p3.z+c_43*c_35*
        p2.z*p3.z-9*c_42*c_44*p2.z*p3.z-4*p1.y*p2.y*c_44*p2.z*p3.z-c_32*c_44*p2.z*p3.z-8*p1.y*c_90*p2.z*p3.z+c_158-5*c_99*
        p2.z*p3.z-3*c_100*c_2+5*c_106*p2.y*c_2+4*c_45*c_32*c_2+3*c_42*c_43*c_2+2*p1.y*c_84*c_2+c_98*c_2-5*c_106*p3.y*c_2+8*c_45*p2.y*
        p3.y*c_2+6*c_42*c_32*p3.y*c_2+4*p1.y*c_43*p3.y*c_2+2*c_84*p3.y*c_2-6*c_45*c_35*c_2+9*c_42*p2.y*c_35*c_2+6*p1.y*c_32*c_35*
        c_2+3*c_43*c_35*c_2-6*c_42*c_44*c_2+8*p1.y*p2.y*c_44*c_2+4*c_32*c_44*c_2-5*p1.y*c_90*c_2+5*p2.y*c_90*c_2+c_159+c_123*p3.x*
        c_73*c_122+c_97*(-(p2.y*c_14*c_261)-p3.y*(c_63+c_105+c_1+c_26+c_28+c_162)+p1.y*(c_222+c_1+c_83+c_27+p1.z*c_107))+c_160*(p3.y*
        c_10*(c_53+c_79+p3.z)+p2.y*(c_63+c_18+c_161+c_56+c_28+c_2)+p1.y*(c_29+c_161+c_185+c_7-p1.z*c_94))+c_59*(3*c_43*c_14*
        c_102+3*c_32*p3.y*c_227+2*c_44*(c_29+c_65+c_25+c_26+c_151+c_27)-2*c_45*(c_17+c_25+c_112+c_111+c_208)+3*p2.y*c_35*c_231+3*p1.y*(2*
        p2.y*p3.y*c_14*c_163+c_35*c_164+c_32*c_226)+3*c_42*(p2.y*(c_136+c_184+c_165+c_166+c_126)-p3.y*(c_69+c_1+c_56+c_47+c_111)))+p2.x*
        p3.x*c_218*(-(c_59*c_95)+3*(4*p2.y*p3.y*c_102+c_32*c_73+c_35*c_95+p1.y*(8*p2.y*p1.z+8*p3.y*p1.z+6*p2.y*p2.z+4*
        p3.y*p2.z+4*p2.y*p3.z+6*p3.y*p3.z)+2*c_42*c_93))+c_96*(-4*c_43*c_0-9*c_32*p3.y*c_0-6*p2.y*c_35*c_0+c_167-10*c_43*p1.z*
        p2.z+c_168+c_169+c_170+c_171+c_172-9*c_32*p3.y*p1.z*p3.z-6*p2.y*c_35*p1.z*p3.z-3*c_44*p1.z*p3.z-30*c_43*p2.z*p3.z+c_173+c_174+3*
        c_44*p2.z*p3.z+c_175+c_52+c_176+3*c_59*c_102*c_177+2*c_45*(c_17+c_36+c_112+c_5+c_209)-3*p1.y*(-(c_59*c_4*c_102)+2*
        p2.y*p3.y*c_10*c_178+c_35*(c_63+c_165+c_37+c_50+c_7)+c_32*c_179)+3*c_42*(p3.y*c_254+p2.y*(c_36+c_47+c_2+c_245))))+p2.x*p3.x*
        (3*c_97*(p1.y*c_4*(p1.z+c_34+c_30)+p3.y*(c_0+c_91+c_25+c_137+c_57+c_210)-p2.y*c_181)+c_59*(-3*c_45*c_4*c_95+6*p2.y*c_35*
        c_181-10*c_44*(c_23+c_1+c_83+c_182+3*p1.z*c_31)+3*c_42*(-(p3.y*(c_23+c_183+c_191-4*p1.z*p3.z+c_57+c_200))+p2.y*
        (c_23+c_184+c_141+c_26+c_185+c_77))+3*c_32*p3.y*(c_17+5*p1.z*c_186+2*(c_1+c_83+c_27))+c_43*(c_199+9*p1.z*(c_72+c_78)+2*(c_67+c_57+c_27))+3*
        p1.y*(c_32*(c_63+c_82-12*c_1+c_187+c_188+c_77)+2*p2.y*p3.y*(c_29+c_110+c_189+c_137+c_190+c_41)-2*c_35*(c_63+c_191+c_192+c_220+c_193)))+3*
        (-(c_43*c_35*(c_0+c_69+c_74+c_70+c_156))-3*c_84*p3.y*c_194+3*p2.y*c_90*c_181+c_32*c_44*(c_0+c_82+c_141+c_135+c_41)+c_100*
        c_4*c_93+c_98*(c_196-21*c_1+c_2-5*p1.z*c_8)+c_99*(c_17+c_13+21*c_2+5*p1.z*c_31)+c_106*(p3.y*(c_17+c_18+c_36+c_195+c_156)+p2.y*
        (c_196+c_65+c_191+c_198+c_71))+c_45*(6*p2.y*p3.y*c_4*c_102+c_35*(c_206+c_18+c_36+c_258+c_197)+c_32*(-8*c_0+c_82+12*
        c_1+c_198+c_71))+c_42*(c_44*(c_199+c_18+c_36+c_135+c_200)+3*p2.y*c_35*c_201-3*c_32*p3.y*c_202-c_43*(c_199+c_69+c_203+c_26+c_111))+p1.y*
        (2*p2.y*c_44*c_204-2*c_43*p3.y*c_205+3*c_32*c_35*c_4*c_116-c_84*(c_206+c_207+c_111+c_208)+c_90*(c_206+c_209+2*
        (c_1-15*c_2)))))+p1.x*(3*c_160*p3.x*c_85*c_122-3*p30_5*(p2.y*c_14*(c_33+p2.z+c_30)+p3.y*(c_23+c_91+c_1+c_75+c_112+c_210)+p1.y*
        c_244)+3*c_211*(p3.y*c_10*(c_33+c_6+p3.z)+p1.y*c_238+p2.y*(c_23+c_40+c_212+c_37+c_112+c_2))+3*c_96*p3.x*c_218*(-(c_59*
        c_87)+3*(4*p1.y*p3.y*c_102+c_42*c_103+2*c_32*c_85+2*p2.y*p3.y*c_86+c_35*c_87+p1.y*p2.y*(c_15+c_219+c_39)))+3*p3.x*(-(c_98*
        c_14*c_85)-p2.y*c_90*(c_29+c_18+c_223+c_151+c_220)+c_99*(c_0+c_221+c_161-30*p2.z*p3.z-21*c_2)-c_32*c_44*(c_29+c_18+c_224+c_83+c_200)+c_100*
        (c_252+30*p1.z*p2.z+c_67+c_28+c_7)+c_84*p3.y*(c_222+c_221+c_161+c_112+c_58)+c_43*c_35*(c_222+c_221+c_225+c_47+12*
        c_2)+c_106*(3*p3.y*c_153+p2.y*(c_253+c_243+c_223+c_28+c_111))+c_45*(c_35*(c_136+c_69+c_1+c_47+c_156)+c_32*(c_255+c_69+c_224+c_28+c_111)+2*
        p2.y*p3.y*(c_180+c_105+c_36+c_47+c_5))-c_42*(3*p2.y*c_35*c_14*c_163+c_43*(12*c_0+c_82+c_225+c_155+c_71)+3*c_32*
        p3.y*c_226+c_44*(-6*c_0+c_82+c_1+c_83+c_41))-p1.y*(6*c_43*p3.y*c_14*c_102+3*c_32*c_35*c_227+c_84*(c_236+c_65+c_161+c_155+c_71)+3*
        c_90*(c_228+c_105+c_1+c_28+c_27)+2*p2.y*c_44*c_231))+c_123*(c_232-36*c_32*p3.y*c_0-18*p2.y*c_35*c_0-6*c_44*c_0-40*c_43*
        p1.z*p2.z-60*c_32*p3.y*p1.z*p2.z-24*p2.y*c_35*p1.z*p2.z-6*c_44*p1.z*p2.z+c_233+180*c_32*p3.y*c_1+60*p2.y*c_35*c_1+12*
        c_44*c_1+c_234+c_235-21*p2.y*c_35*p1.z*p3.z+c_129-180*c_43*p2.z*p3.z-30*c_32*p3.y*p2.z*p3.z+12*p2.y*c_35*p2.z*
        p3.z+c_130-30*c_43*c_2-24*c_32*p3.y*c_2+c_131+3*c_59*c_86*c_177+c_45*(c_136+c_74+c_240+c_256+4*p1.z*(c_72+9*p3.z))-3*p1.y*(-(c_59*
        c_4*c_86)+c_35*(c_236+c_69+c_55+c_56+c_155+c_126)+2*c_32*c_238+2*p2.y*p3.y*(c_199+p1.z*(c_219+p3.z)-2*(c_67+c_47+c_2)))+3*
        c_42*(p3.y*(c_241-6*p1.z*p2.z+c_64+c_70+c_242+c_77)+p2.y*(c_29+p1.z*(c_219+15*p3.z)+5*(c_36+c_83+c_2))))-p30_3*(-3*c_43*c_14*
        c_87-3*c_32*p3.y*(c_236+c_183+c_25+c_75+c_185+c_200)-10*c_44*(c_0+c_82+c_25+c_135+c_239+c_182)-6*p2.y*c_35*(c_236+c_64+c_28+c_220+5*
        p1.z*c_80)+c_45*(c_136+c_224+c_240+c_41+4*p1.z*(9*p2.z+c_39))+3*c_42*(p2.y*(c_241+c_82+c_64+c_195+c_242+c_77)+p3.y*
        (c_29+c_243+c_67+c_75+c_76+c_41))-3*p1.y*(2*c_35*c_244+c_32*(c_236+c_11+c_155+c_109+c_245)+2*p2.y*p3.y*(c_199+p1.z*
        (p2.z+c_246)-2*(c_1+c_47+c_27))))-3*p2.x*(c_98*c_0-2*c_84*p3.y*c_0-2*c_43*c_35*c_0-2*c_32*c_44*c_0+c_247-2*c_99*c_0-21*c_98*c_1+30*
        c_84*p3.y*c_1+20*c_43*c_35*c_1+12*c_32*c_44*c_1+6*p2.y*c_90*c_1+2*c_99*c_1-5*c_98*p1.z*p3.z+c_248-5*c_43*c_35*p1.z*p3.z-5*
        c_32*c_44*p1.z*p3.z-5*p2.y*c_90*p1.z*p3.z+c_249-30*c_98*p2.z*p3.z+c_250-4*c_43*c_35*p2.z*p3.z+3*c_32*c_44*p2.z*p3.z+6*
        p2.y*c_90*p2.z*p3.z+5*c_99*p2.z*p3.z-5*c_98*c_2-8*c_84*p3.y*c_2-9*c_43*c_35*c_2-8*c_32*c_44*c_2+c_251+c_97*(c_214+c_215)*
        c_89+c_100*(c_252+c_13+30*p1.z*p3.z+c_28+c_27)+c_106*(3*p2.y*c_139+p3.y*(c_253+c_36+15*p1.z*p3.z+c_28+c_259))+c_45*(3*c_59*
        c_4*c_104+c_32*(c_136+c_141+c_135+c_47+c_2)+2*p2.y*p3.y*c_254+c_35*(c_255+c_36+c_135+c_28+c_256))-3*c_59*(c_43*c_14*c_86-2*
        c_44*c_10*c_89+2*p2.y*c_35*c_4*c_257+c_32*p3.y*(c_29+c_64+c_166+c_260+p1.z*(c_72+p3.z)))+c_42*(-3*c_32*p3.y*c_10*c_178+c_43*
        (c_236+c_114+c_258+c_185+c_7)+3*p2.y*c_35*(-4*c_0+c_36+c_66+c_19+c_2)+c_44*(c_241+c_36+c_258+c_28+c_259)-3*c_59*(-(p3.y*
        (c_63+c_69+c_36+c_258+c_20+c_260))+p2.y*(c_63+c_184+c_55+c_70+c_50+c_2)))-p1.y*(6*p2.y*c_44*c_10*c_102+c_97*c_4*c_89+c_90*
        (c_236+c_165+c_137+c_155+c_162)+3*c_32*c_35*(c_29+c_55+c_56+c_12+c_2)+3*c_84*(c_228+c_67+c_56+c_28+c_2)+2*c_43*p3.y*(c_23+c_70+2*(-5*
        c_1+c_20+c_2))+3*c_59*(2*p2.y*p3.y*c_10*c_102-2*c_35*c_14*c_261+c_32*(c_63+c_55+c_166+c_7+2*p1.z*c_48))))))/double(17418240);
}

double trig::c66() const{
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p21_4=p2.y*p21_3;
    double p21_5=p2.y*p21_4;
    double p21_6=p2.y*p21_5;
    double p21_7=p2.y*p21_6;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p31_4=p3.y*p31_3;
    double p31_5=p3.y*p31_4;
    double p31_6=p3.y*p31_5;
    double p31_7=p3.y*p31_6;
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p11_4=p1.y*p11_3;
    double p11_5=p1.y*p11_4;
    double p11_6=p1.y*p11_5;
    double p11_7=p1.y*p11_6;
    double p30_2=p3.x*p3.x;
    double p30_3=p3.x*p30_2;
    double p30_4=p3.x*p30_3;
    double p30_5=p3.x*p30_4;
    double p30_6=p3.x*p30_5;
    double p30_7=p3.x*p30_6;
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
    double c_0=2*p2.z;
    double c_1=p1.z+c_0;
    double c_2=2*p1.z;
    double c_3=c_2+p2.z;
    double c_4=p21_2;
    double c_5=-p2.z;
    double c_6=p1.z+c_5;
    double c_7=p31_2;
    double c_8=p21_3;
    double c_9=p31_3;
    double c_10=p21_4;
    double c_11=p31_4;
    double c_12=p21_5;
    double c_13=p31_5;
    double c_14=p21_6;
    double c_15=p31_6;
    double c_16=p3.y*c_1;
    double c_17=-p3.z;
    double c_18=2*p3.z;
    double c_19=p1.z+c_18;
    double c_20=p11_2;
    double c_21=p11_3;
    double c_22=p2.z+c_17;
    double c_23=p1.y*c_22;
    double c_24=-p1.z;
    double c_25=p3.y*c_6;
    double c_26=c_2+p3.z;
    double c_27=p2.y*c_26;
    double c_28=c_0+p3.z;
    double c_29=-(p1.y*c_28);
    double c_30=p3.y*c_3;
    double c_31=p1.z+c_17;
    double c_32=c_25+c_27+c_29;
    double c_33=-c_30;
    double c_34=c_24+p3.z;
    double c_35=p2.y*c_34;
    double c_36=p2.z+c_18;
    double c_37=p30_2;
    double c_38=c_5+p3.z;
    double c_39=-(5*p2.z);
    double c_40=4*p3.z;
    double c_41=9*p1.z;
    double c_42=8*p3.z;
    double c_43=p11_5;
    double c_44=3*p1.z;
    double c_45=4*p2.z;
    double c_46=c_44+c_45+c_18;
    double c_47=10*p2.z;
    double c_48=c_41+c_47+c_42;
    double c_49=p11_4;
    double c_50=c_24+p2.z;
    double c_51=3*p2.z;
    double c_52=10*p3.z;
    double c_53=4*p1.z;
    double c_54=9*p2.z;
    double c_55=14*p3.z;
    double c_56=-(3*p2.y*c_19);
    double c_57=8*p2.z;
    double c_58=c_44+c_0+c_40;
    double c_59=c_2+c_51+c_40;
    double c_60=p2.y*c_6;
    double c_61=c_4*c_6;
    double c_62=28*p3.z;
    double c_63=3*p3.z;
    double c_64=-c_16;
    double c_65=p2.y*c_19;
    double c_66=8*p1.z;
    double c_67=9*p3.z;
    double c_68=-p3.y;
    double c_69=p2.y+c_68;
    double c_70=c_41+c_57+c_52;
    double c_71=p30_4;
    double c_72=14*p2.z;
    double c_73=-(2*p3.z);
    double c_74=p1.z+p2.z+c_73;
    double c_75=c_2+c_45+c_63;
    double c_76=-(3*p3.z);
    double c_77=p21_7;
    double c_78=p31_7;
    double c_79=p11_7;
    double c_80=p11_6;
    double c_81=p3.y*c_34;
    double c_82=c_37*c_22;
    double c_83=c_7*c_34;
    double c_84=3*p3.y*c_1;
    double c_85=c_84+c_56;
    double c_86=c_41+c_45+c_55;
    double c_87=5*p1.z;
    double c_88=15*p1.z;
    double c_89=c_88+c_0+c_62;
    double c_90=p1.z+c_0+c_76;
    double c_91=p3.y*c_90;
    double c_92=-c_91;
    double c_93=-(2*p2.z);
    double c_94=p1.z+c_93+p3.z;
    double c_95=p2.y*c_94;
    double c_96=-(5*p3.z);
    double c_97=-(4*p2.z);
    double c_98=-(3*p2.z);
    double c_99=p1.z+c_97+c_63;
    double c_100=p30_6;
    double c_101=p1.z+c_45+c_96;
    double c_102=c_2+p2.z+c_76;
    double c_103=p1.z+c_98+c_18;
    double c_104=c_2+c_98+p3.z;
    double c_105=c_4*c_104;
    double c_106=-(8*p2.z);
    double c_107=5*p3.z;
    double c_108=-(4*c_13*p3.z);
    double c_109=p20_3;
    double c_110=c_25+c_23+c_35;
    double c_111=p20_4;
    double c_112=p2.y*c_31;
    double c_113=-(p1.y*c_36);
    double c_114=c_30+c_112+c_113;
    double c_115=c_53+c_51+c_18;
    double c_116=c_66+c_54+c_52;
    double c_117=-(9*p3.z);
    double c_118=p20_2;
    double c_119=-(3*c_9*p1.z);
    double c_120=3*c_9*p2.z;
    double c_121=-(3*p2.y*c_7*p3.z);
    double c_122=c_53+c_0+c_63;
    double c_123=3*c_4*p3.y*p2.z;
    double c_124=-(3*c_8*p3.z);
    double c_125=-(6*c_4*p3.y*p3.z);
    double c_126=10*p1.z;
    double c_127=6*p2.y*c_7*p2.z;
    double c_128=14*p1.z;
    double c_129=c_25+c_35;
    double c_130=3*c_37*c_129;
    double c_131=c_37*c_38;
    double c_132=c_87+c_106+c_63;
    double c_133=-(p2.y*c_19);
    double c_134=c_16+c_23+c_133;
    double c_135=28*p2.z;
    double c_136=c_87+c_0+c_42;
    double c_137=7*p1.z;
    double c_138=-(4*p3.z);
    double c_139=c_7*c_102;
    double c_140=p3.y*c_74;
    double c_141=-(8*p3.z);
    double c_142=c_87+c_51+c_141;
    double c_143=p1.z+c_39+c_40;
    double c_144=p1.z+c_51+c_138;
    double c_145=-(9*p2.z);
    double c_146=p20_5;
    double c_147=-(3*c_7);
    double c_148=p2.y+p3.y;
    double c_149=3*c_4;
    double c_150=p1.y*c_38;
    double c_151=p20_6;
    double c_152=p2.y*c_28;
    double c_153=-(p3.y*c_36);
    double c_154=c_2+c_51+c_96;
    double c_155=5*p2.z;
    double c_156=15*p2.z;
    double c_157=c_2+c_156+c_62;
    double c_158=-3*p1.z;
    double c_159=c_53+p2.z+c_96;
    double c_160=-2*p1.z;
    double c_161=c_160+p2.z+p3.z;
    double c_162=-4*p1.z;
    double c_163=2*c_7*c_115;
    double c_164=-5*p1.z;
    double c_165=7*p2.z;
    double c_166=c_126+c_165+c_40;
    double c_167=c_66+c_47+c_67;
    double c_168=-8*p1.z;
    double c_169=c_168+c_155+c_63;
    double c_170=p2.y*p3.y*c_169;
    double c_171=c_158+p2.z+c_18;
    double c_172=7*p3.z;
    double c_173=c_53+c_54+c_55;
    double c_174=c_158+c_0+p3.z;
    double c_175=p3.y*c_50;
    double c_176=c_175+c_112;
    double c_177=c_53+c_39+p3.z;
    double c_178=c_162+c_51+p3.z;
    double c_179=3*c_37*c_22;
    double c_180=c_162+p2.z+c_63;
    double c_181=c_168+c_51+c_107;
    double c_182=p2.y*p3.y*c_181;
    double c_183=6*p3.z;
    double c_184=c_66+c_45+c_183;
    double c_185=c_4*c_184;
    double c_186=c_126+c_45+c_172;
    double c_187=-c_140;
    double c_188=2*c_4;
    double c_189=p30_5;
    double c_190=p30_3;
    double c_191=c_44+c_5+c_73;
    double c_192=c_44+c_0+c_96;
    double c_193=c_44+p2.z+c_138;
    double c_194=-(3*c_8*c_31);
    double c_195=-20*c_8*p1.z;
    double c_196=c_126+c_57+c_67;
    double c_197=c_44+c_93+c_17;
    double c_198=-2*c_12*p1.z;
    double c_199=-(c_13*p1.z);
    double c_200=c_13*p2.z;
    double c_201=c_71*c_176;
    double c_202=2*p2.y*p3.y;
    double c_203=2*c_7;
    double c_204=-(p2.y*c_11*p3.z);
    double c_205=15*p3.z;
    double c_206=c_87+c_93+c_76;
    double c_207=c_87+c_97+c_17;
    double c_208=p3.y*c_171;
    double c_209=c_53+c_57+c_183;
    double c_210=c_2+c_5+c_17;
    double c_211=c_71*c_22;
    double c_212=c_44+c_97+p3.z;
    double c_213=c_44+c_106+c_107;
    double c_214=c_53+c_47+c_172;
    double c_215=c_12*c_34;
    double c_216=28*p1.z;
    double c_217=c_2+c_155+c_42;
    double c_218=p2.y*c_174;
    double c_219=c_87+c_5+c_138;
    double c_220=c_53+c_165+c_52;
    return (3*p3.x*(2*c_78*c_50-c_79*c_3+c_77*c_1+c_14*p3.y*c_1+c_12*c_7*c_1+c_10*c_9*c_1+c_8*c_11*c_1+c_4*c_13*c_1+p2.y*c_15*
        c_1+c_80*(c_60-p3.y*c_3)+c_43*(c_61+p2.y*p3.y*c_6-c_7*c_3)+c_49*(c_8*c_6+c_4*p3.y*c_6+p2.y*c_7*c_6-c_9*c_3)+c_21*(c_10*c_6+c_8*
        p3.y*c_6+c_4*c_7*c_6+p2.y*c_9*c_6-c_11*c_3)+c_20*(c_12*c_6+c_10*p3.y*c_6+c_8*c_7*c_6+c_4*c_9*c_6+p2.y*c_11*c_6-c_13*c_3)+p1.y*
        (c_14*c_6+c_12*p3.y*c_6+c_10*c_7*c_6+c_8*c_9*c_6+c_4*c_11*c_6+p2.y*c_13*c_6-c_15*c_3))+3*p10_7*(c_33+c_27+2*p1.y*c_38)+3*
        p20_7*(c_16+2*p2.y*c_31+c_29)+p30_7*(-6*p3.y*p1.z+3*p1.y*p2.z+6*p3.y*p2.z+6*p1.y*p3.z+c_56)+3*c_151*p3.x*c_134+p10_5*
        (-84*c_20*p2.y*p1.z-24*p1.y*c_4*p1.z-4*c_8*p1.z+84*c_20*p3.y*p1.z+24*p1.y*c_7*p1.z+4*c_9*p1.z+14*c_21*p2.z-6*c_20*
        p2.y*p2.z-6*p1.y*c_4*p2.z-2*c_8*p2.z+45*c_20*p3.y*p2.z+15*p1.y*p2.y*p3.y*p2.z+c_123+15*p1.y*c_7*p2.z+3*p2.y*c_7*
        p2.z+c_120-14*c_21*p3.z-45*c_20*p2.y*p3.z-15*p1.y*c_4*p3.z+c_124+6*c_20*p3.y*p3.z-15*p1.y*p2.y*p3.y*p3.z-3*c_4*p3.y*
        p3.z+6*p1.y*c_7*p3.z+c_121+2*c_9*p3.z+3*p2.x*p3.x*c_110+3*c_118*c_32-3*c_37*c_114)+3*p10_6*(p2.x*c_32+p3.x*(c_33+c_35+p1.y*
        c_36))-c_111*p3.x*(3*c_21*c_22+3*c_37*(c_64+c_150+c_65)-3*c_20*(c_187+p2.y*c_143)-3*p1.y*(-c_139+5*c_4*c_103+p2.y*p3.y*
        (c_158+c_39+c_42))-c_69*(10*p2.y*p3.y*c_46+5*c_4*(c_41+c_72+c_40)+c_7*c_48))+c_190*(14*c_13*c_6+c_43*c_115-c_12*c_46-10*c_4*c_9*
        c_58-c_10*p3.y*c_48-2*c_8*c_7*c_70-5*p2.y*c_11*c_86+c_49*(-3*p2.y*p1.z+10*p3.y*p1.z+3*p2.y*p2.z+9*p3.y*p2.z+8*p3.y*
        p3.z)+c_20*(-3*c_8*c_6-18*p2.y*c_7*c_6+9*c_4*p3.y*c_50+10*c_9*c_59)+c_21*(-3*c_4*c_6+9*p2.y*p3.y*c_50+2*c_7*c_116)+p1.y*(-3*
        c_10*c_6-18*c_4*c_7*c_6-30*p2.y*c_9*c_6+9*c_8*p3.y*c_50+5*c_11*c_173))+c_146*(-14*c_8*p1.z-45*c_4*p3.y*p1.z-15*p2.y*c_7*
        p1.z+c_119-84*c_4*p3.y*p2.z-24*p2.y*c_7*p2.z-4*c_9*p2.z+14*c_8*p3.z+c_125-6*p2.y*c_7*p3.z-2*c_9*p3.z+c_21*c_75+c_37*c_85+3*
        c_20*(c_81+p2.y*(c_2+c_57+c_107))+3*p1.y*(c_82+5*p2.y*p3.y*c_34+c_83+c_4*(c_2+c_135+c_205)))+c_189*(14*c_9*c_6+c_8*
        c_58-c_21*c_59+3*c_4*p3.y*c_136+3*p2.y*c_7*c_89+3*c_20*(c_60-p3.y*c_217)+3*p1.y*(c_61+5*p2.y*p3.y*c_6-c_7*c_157))-c_109*(14*c_12*
        p1.z-45*c_10*p3.y*p1.z-30*c_8*c_7*p1.z-18*c_4*c_9*p1.z-9*p2.y*c_11*p1.z-3*c_13*p1.z-70*c_10*p3.y*p2.z-40*c_8*c_7*
        p2.z-20*c_4*c_9*p2.z-8*p2.y*c_11*p2.z-2*c_13*p2.z-14*c_12*p3.z-20*c_10*p3.y*p3.z-20*c_8*c_7*p3.z-16*c_4*c_9*p3.z-10*p2.y*
        c_11*p3.z+c_108+c_43*c_122+3*c_71*(c_64+c_65)+c_49*(3*p3.y*c_34+p2.y*c_196)+c_21*(c_179+9*p2.y*p3.y*c_34+3*c_7*c_34+2*c_4*
        c_167)-2*c_37*c_69*(5*c_4*c_46+2*p2.y*p3.y*c_48+c_7*c_70)+p1.y*(-30*c_8*p3.y*c_31-18*c_4*c_7*c_31-3*c_71*c_22+9*p2.y*c_9*
        c_34+3*c_11*c_34+5*c_10*(c_53+c_72+c_67)-3*c_37*(-(p2.y*p3.y*(p1.z+c_57+c_117))-3*c_7*c_74+2*c_4*(c_2+c_39+c_63)))+c_20*(-18*
        c_4*p3.y*c_31+9*p2.y*c_7*c_34+3*c_9*c_34+10*c_8*c_75-3*c_37*(c_92+p2.y*c_99)))+p2.x*(6*c_77*p1.z-3*c_14*p3.y*p1.z-3*c_12*
        c_7*p1.z-3*c_10*c_9*p1.z-3*c_8*c_11*p1.z-3*c_4*c_13*p1.z-3*p2.y*c_15*p1.z-3*c_78*p1.z-6*c_77*p3.z-6*c_14*p3.y*p3.z-6*
        c_12*c_7*p3.z-6*c_10*c_9*p3.z-6*c_8*c_11*p3.z-6*c_4*c_13*p3.z-6*p2.y*c_15*p3.z-6*c_78*p3.z+3*c_79*c_26+3*c_80*(c_81+c_27)+3*
        c_43*(c_82+p2.y*p3.y*c_34+c_83+c_4*c_26)+c_100*c_85+c_71*c_69*(10*p2.y*p3.y*c_58+c_4*c_70+5*c_7*c_86)-3*c_37*(2*c_4*c_9*
        c_1-5*p2.y*c_11*c_19+2*c_8*c_7*c_46+c_12*(c_87+c_57+c_18)+c_10*p3.y*(c_137+c_47+c_40)-c_13*c_89)-3*c_49*(c_4*p3.y*c_31+p2.y*
        c_7*c_31+c_9*c_31-c_8*c_26+c_37*(c_92+c_95))+3*c_20*(c_10*p3.y*c_34+c_8*c_7*c_34+c_4*c_9*c_34+p2.y*c_11*c_34+c_13*c_34+c_12*
        c_26+c_71*(-(p3.y*c_101)+c_95)-c_37*(-2*c_9*c_192+c_8*c_212+3*c_4*p3.y*c_94+6*p2.y*c_7*c_38))-3*c_21*(c_8*p3.y*c_31+c_4*c_7*
        c_31+p2.y*c_9*c_31+c_11*c_31+c_211-c_10*c_26+c_37*(-3*c_7*c_74+c_105+p2.y*p3.y*c_99))+3*p1.y*(c_100*c_22+c_12*p3.y*c_34+c_10*
        c_7*c_34+c_8*c_9*c_34+c_4*c_11*c_34+p2.y*c_13*c_34+c_15*c_34+c_14*c_26-c_37*(-2*p2.y*c_9*c_101-5*c_11*c_102+c_10*c_177+3*c_4*
        c_7*c_103+c_8*p3.y*c_132)+c_71*(-5*c_7*c_90+c_105+p2.y*p3.y*c_213)))+p10_3*(70*c_49*p2.y*p1.z+40*c_21*c_4*p1.z+20*c_20*c_8*
        p1.z+8*p1.y*c_10*p1.z+2*c_12*p1.z-70*c_49*p3.y*p1.z-40*c_21*c_7*p1.z-20*c_20*c_9*p1.z-8*p1.y*c_11*p1.z-2*c_13*p1.z+14*
        c_43*p2.z+20*c_49*p2.y*p2.z+20*c_21*c_4*p2.z+16*c_20*c_8*p2.z+10*p1.y*c_10*p2.z+4*c_12*p2.z-45*c_49*p3.y*p2.z-30*c_21*
        p2.y*p3.y*p2.z-18*c_20*c_4*p3.y*p2.z-9*p1.y*c_8*p3.y*p2.z-3*c_10*p3.y*p2.z-30*c_21*c_7*p2.z-18*c_20*p2.y*c_7*p2.z-9*
        p1.y*c_4*c_7*p2.z-3*c_8*c_7*p2.z-18*c_20*c_9*p2.z-9*p1.y*p2.y*c_9*p2.z-3*c_4*c_9*p2.z-9*p1.y*c_11*p2.z-3*p2.y*c_11*
        p2.z-3*c_13*p2.z-14*c_43*p3.z+45*c_49*p2.y*p3.z+30*c_21*c_4*p3.z+18*c_20*c_8*p3.z+9*p1.y*c_10*p3.z+3*c_12*p3.z-20*c_49*
        p3.y*p3.z+30*c_21*p2.y*p3.y*p3.z+18*c_20*c_4*p3.y*p3.z+9*p1.y*c_8*p3.y*p3.z+3*c_10*p3.y*p3.z-20*c_21*c_7*p3.z+18*
        c_20*p2.y*c_7*p3.z+9*p1.y*c_4*c_7*p3.z+3*c_8*c_7*p3.z-16*c_20*c_9*p3.z+9*p1.y*p2.y*c_9*p3.z+3*c_4*c_9*p3.z-10*p1.y*
        c_11*p3.z+3*p2.y*c_11*p3.z+c_108+3*c_109*p3.x*c_110+3*p2.x*p3.x*(c_37-10*c_20-3*c_4-4*p2.y*p3.y+c_147-8*p1.y*c_148)*c_110+3*
        c_111*c_32-3*c_71*c_114+c_37*(3*c_4*p3.y*c_102+9*p2.y*c_7*c_74+3*c_8*c_31-10*c_21*c_115+2*c_9*c_116+6*c_20*(p2.y*c_206+c_153)+3*
        p1.y*(p2.y*p3.y*(c_66+p2.z+c_117)+c_4*(c_53+c_5+c_76)+c_163))+c_118*(-16*c_8*p1.z-9*c_4*p3.y*p1.z-6*p2.y*c_7*
        p1.z+c_119-20*c_8*p2.z+18*c_4*p3.y*p2.z+9*p2.y*c_7*p2.z+c_120-18*c_8*p3.z-9*c_4*p3.y*p3.z+c_121+10*c_21*c_122+c_130+6*c_20*
        (c_152+p3.y*(c_164+c_51+c_18))-3*p1.y*(c_7*(c_53+c_98+c_17)+p2.y*p3.y*(c_66+c_145+p3.z)+c_131+c_185)))+p10_4*(3*c_118*p3.x*
        c_110+3*c_109*c_32+p3.x*(3*c_8*p1.z+3*c_4*p3.y*p1.z+3*p2.y*c_7*p1.z+10*c_9*p1.z+c_123+c_127+9*c_9*p2.z+15*c_20*(c_30+p2.y*
        c_191)-3*c_37*(c_30+c_112)+c_124+c_125-9*p2.y*c_7*p3.z+8*c_9*p3.z-5*c_21*(c_128+c_54+c_40)+3*p1.y*(p2.y*p3.y*c_142+c_4*
        c_219+c_37*c_36+c_7*c_166))+p2.x*(-10*c_8*p1.z-3*c_4*p3.y*p1.z-3*p2.y*c_7*p1.z+c_119-8*c_8*p2.z+9*c_4*p3.y*p2.z+c_127+c_120-9*
        c_8*p3.z+c_125+c_121+5*c_21*(c_128+c_45+c_67)+c_130-15*c_20*(p3.y*c_197+c_27)-3*p1.y*(c_7*c_207+c_131+p2.y*p3.y*
        c_132+c_4*c_186)))+c_118*p3.x*(3*c_71*c_134+3*(-5*c_10*p3.y*c_1+c_43*c_22+2*c_8*c_7*c_19-c_12*(c_88+c_135+c_18)+2*c_4*c_9*c_58+c_13*
        c_136+p2.y*c_11*(c_137+c_45+c_52)+c_21*(p2.y*p3.y*c_144+c_139-3*c_4*c_94)+c_20*(c_9*c_193+3*p2.y*c_7*c_74+6*c_4*p3.y*
        c_22-2*c_8*(c_44+c_39+c_18))+c_49*(c_140-p2.y*c_103)+p1.y*(p2.y*c_9*c_142+c_11*c_159+3*c_4*c_7*c_90-5*c_10*c_104-2*c_8*p3.y*
        c_143))+c_37*(-3*c_21*c_22+3*c_20*(-(p3.y*c_144)+p2.y*c_103)+3*p1.y*(-2*c_7*c_154+3*c_4*c_94+p2.y*p3.y*(p1.z+c_145+c_42))+2*
        c_69*(5*c_7*c_58+c_4*c_48+2*p2.y*p3.y*c_70)))+p1.x*(3*c_146*p3.x*c_110+3*c_109*p3.x*(c_37-3*c_20-10*c_4-8*p2.y*p3.y+c_147-4*
        p1.y*(2*p2.y+p3.y))*c_110-3*p2.x*p3.x*(c_71+5*c_49+5*c_10+8*c_8*p3.y+9*c_4*c_7+8*p2.y*c_9+5*c_11+8*c_21*c_148+3*c_20*
        (c_149+4*p2.y*p3.y+3*c_7)+4*p1.y*(2*c_8+3*c_4*p3.y+3*p2.y*c_7+2*c_9)-c_37*(3*c_20+c_149+8*p2.y*p3.y+10*c_7+4*p1.y*(p2.y+2*
        p3.y)))*(c_175+c_112+c_150)+3*c_151*c_32-3*c_100*c_114-3*(2*c_79*c_22+c_14*p3.y*c_38+c_12*c_7*c_38+c_10*c_9*c_38+c_8*c_11*
        c_38+c_4*c_13*c_38+p2.y*c_15*c_38+c_77*c_28-c_78*c_36+c_80*(c_152+c_153)+c_43*c_69*(c_152+p3.y*c_36)+c_49*(c_4*p3.y*c_38+p2.y*
        c_7*c_38+c_8*c_28-c_9*c_36)+c_21*(c_8*p3.y*c_38+c_4*c_7*c_38+p2.y*c_9*c_38+c_10*c_28-c_11*c_36)+c_20*(c_10*p3.y*c_38+c_8*
        c_7*c_38+c_4*c_9*c_38+p2.y*c_11*c_38+c_12*c_28-c_13*c_36)+p1.y*(c_12*p3.y*c_38+c_10*c_7*c_38+c_8*c_9*c_38+c_4*c_11*c_38+p2.y*
        c_13*c_38+c_14*c_28-c_15*c_36))+3*c_37*(-2*c_4*c_9*c_154-c_10*p3.y*c_102-5*p2.y*c_11*c_90-3*c_8*c_7*c_74+c_215+c_43*
        (c_66+c_155+c_18)-c_13*c_157+c_20*(2*c_9*c_3+3*c_4*p3.y*c_161+c_8*c_174+3*p2.y*c_7*c_171)+p1.y*(-2*p2.y*c_9*c_159+6*c_4*c_7*c_34+c_10*
        c_161-5*c_11*c_36+c_8*p3.y*c_180)+c_21*(c_4*c_178+c_163+c_170)+c_49*(p2.y*(c_164+c_45+p3.z)+p3.y*c_166))+c_111*(c_195-30*c_4*
        p3.y*p1.z-12*p2.y*c_7*p1.z+c_119-70*c_8*p2.z+45*c_4*p3.y*p2.z+15*p2.y*c_7*p2.z+c_120-45*c_8*p3.z-15*c_4*p3.y*
        p3.z+c_121+c_21*c_167+c_130+3*p1.y*(c_82+c_7*c_161+5*c_4*c_28+c_170)+3*c_20*(c_208+p2.y*c_214))-c_71*(-3*c_4*p3.y*c_159-15*p2.y*
        c_7*c_102+c_194+c_21*c_116-5*c_9*c_173+3*p1.y*(c_4*c_161+5*c_7*c_36+c_182)+3*c_20*(c_218+p3.y*c_220))-3*c_118*(c_198-5*c_10*p3.y*
        p1.z-4*c_8*c_7*p1.z-3*c_4*c_9*p1.z-2*p2.y*c_11*p1.z+c_199-28*c_12*p2.z+15*c_10*p3.y*p2.z+10*c_8*c_7*p2.z+6*c_4*c_9*
        p2.z+3*p2.y*c_11*p2.z+c_200+c_201-3*c_37*(c_188+3*p2.y*p3.y+c_203)*c_176-15*c_12*p3.z-10*c_10*p3.y*p3.z-6*c_8*c_7*p3.z-3*
        c_4*c_9*p3.z+c_204+c_43*(c_66+c_0+c_107)+p1.y*(6*c_4*c_7*c_50+c_37*(-6*c_4*c_6+6*c_7*c_31+3*p2.y*p3.y*c_22)-2*c_8*p3.y*
        c_177+c_71*c_38+c_11*c_161-5*c_10*c_28+p2.y*c_9*c_178)+c_21*(c_179+c_7*c_180+c_182+c_185)+c_49*(p3.y*(c_164+p2.z+c_40)+p2.y*
        c_186)+c_20*(2*c_8*c_26+3*p2.y*c_7*c_161+3*c_4*p3.y*c_174+c_9*c_171-3*c_37*(c_187+c_95))))+p10_2*(3*c_111*p3.x*c_110+3*c_118*
        p3.x*(c_37-3*(2*c_20+3*p1.y*p2.y+c_188+2*p1.y*p3.y+c_202+c_7))*c_110+3*c_146*c_32-3*c_189*c_114-c_190*(-3*p1.y*(2*c_7*c_3+p2.y*
        p3.y*(c_41+c_5+c_141)+c_4*c_191)-6*p2.y*c_7*c_192-3*c_4*p3.y*c_193+c_194-10*c_9*c_59+2*c_21*(c_126+c_54+c_42)+c_20*(9*
        p2.y*c_161+6*p3.y*c_59))+c_109*(c_195-18*c_4*p3.y*p1.z-9*p2.y*c_7*p1.z+c_119-40*c_8*p2.z+30*c_4*p3.y*p2.z+12*p2.y*c_7*
        p2.z+c_120-30*c_8*p3.z-12*c_4*p3.y*p3.z+c_121+2*c_21*c_196+c_130-3*p1.y*(p2.y*p3.y*(c_41+c_106+c_17)+c_7*c_197+2*c_4*
        c_26+c_131)+3*c_20*(3*p3.y*c_161+p2.y*c_209))-3*p2.x*(c_198-c_10*p3.y*p1.z-c_8*c_7*p1.z-c_4*c_9*p1.z-p2.y*c_11*p1.z+c_199-8*
        c_12*p2.z+5*c_10*p3.y*p2.z+4*c_8*c_7*p2.z+3*c_4*c_9*p2.z+2*p2.y*c_11*p2.z+c_200+c_201-3*c_37*(c_4+c_202+c_203)*c_176-5*c_12*
        p3.z-4*c_10*p3.y*p3.z-3*c_8*c_7*p3.z-2*c_4*c_9*p3.z+c_204+c_43*(c_216+c_0+c_205)-2*c_21*(c_7*c_206+p2.y*p3.y*c_207+3*
        c_37*c_38+c_4*c_28)+5*c_49*(c_27+c_208)-c_20*(6*p2.y*c_7*c_6+c_37*(6*p2.y*c_6-3*p3.y*c_102)+3*c_9*c_210+3*c_4*p3.y*c_104+c_8*
        c_209)-p1.y*(3*c_37*c_69*(p3.y*c_191+p2.y*c_210)+c_11*c_197+c_211+p2.y*c_9*c_212+3*c_4*c_7*c_94+c_8*p3.y*c_213+c_10*c_214))+3*
        p3.x*(-(p2.y*c_11*c_101)-c_4*c_9*c_144-c_8*c_7*c_90-c_10*p3.y*c_74+c_215+c_43*(c_216+c_156+c_18)-c_13*c_217+5*c_49*
        (c_30+c_218)-2*c_21*(p2.y*p3.y*c_219+c_4*(c_87+c_98+c_73)+c_7*c_36)-p1.y*(p2.y*c_9*(c_44+c_155+c_141)+c_8*p3.y*c_193+c_10*c_191+3*
        c_4*c_7*c_74+c_11*c_220)-c_20*(3*p2.y*c_7*c_102+6*c_4*p3.y*c_31+2*c_9*c_59+c_8*(6*p1.z-3*(p2.z+p3.z))))))/double(34836480);
}

double trig::s61() const{
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
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p21_4=p2.y*p21_3;
    double p21_5=p2.y*p21_4;
    double p21_6=p2.y*p21_5;
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p11_4=p1.y*p11_3;
    double p11_5=p1.y*p11_4;
    double p11_6=p1.y*p11_5;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p31_4=p3.y*p31_3;
    double p31_5=p3.y*p31_4;
    double p31_6=p3.y*p31_5;
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
    double c_0=-p3.z;
    double c_1=p2.z+c_0;
    double c_2=p12_2;
    double c_3=3*c_2;
    double c_4=p22_2;
    double c_5=p32_2;
    double c_6=p21_2;
    double c_7=-c_5;
    double c_8=p11_2;
    double c_9=5*p2.z*p3.z;
    double c_10=2*p3.z;
    double c_11=p2.z+c_10;
    double c_12=p31_2;
    double c_13=5*p2.z;
    double c_14=p1.z+c_0;
    double c_15=21*c_4;
    double c_16=2*p1.z;
    double c_17=c_16+c_13+c_10;
    double c_18=5*c_4;
    double c_19=3*p2.z*p3.z;
    double c_20=2*c_2;
    double c_21=5*p1.z*p3.z;
    double c_22=5*c_2;
    double c_23=5*p1.z*p2.z;
    double c_24=5*p1.z;
    double c_25=p2.z+p3.z;
    double c_26=2*c_25;
    double c_27=c_24+c_26;
    double c_28=2*p2.z;
    double c_29=c_28+p3.z;
    double c_30=3*p3.z;
    double c_31=-(5*p2.z*p3.z);
    double c_32=6*p1.z*p2.z;
    double c_33=p2.z*p3.z;
    double c_34=3*p2.z;
    double c_35=c_34+p3.z;
    double c_36=2*p2.z*p3.z;
    double c_37=p11_3;
    double c_38=p12_4;
    double c_39=p21_3;
    double c_40=p21_4;
    double c_41=p31_3;
    double c_42=p31_4;
    double c_43=p12_3;
    double c_44=p11_4;
    double c_45=p22_3;
    double c_46=p22_4;
    double c_47=p32_3;
    double c_48=p32_4;
    double c_49=-p2.z;
    double c_50=p1.z+c_49;
    double c_51=4*p1.z;
    double c_52=-(2*c_4);
    double c_53=3*c_4;
    double c_54=2*p1.z*p3.z;
    double c_55=2*c_5;
    double c_56=c_51+c_34+c_10;
    double c_57=-(5*p1.z*p3.z);
    double c_58=-(2*c_5);
    double c_59=4*p2.z*p3.z;
    double c_60=10*c_2;
    double c_61=c_51+c_28+c_30;
    double c_62=3*p1.z*p2.z;
    double c_63=-8*c_2;
    double c_64=-(5*p1.z*p2.z);
    double c_65=3*p1.z*p3.z;
    double c_66=2*c_4;
    double c_67=4*p1.z*p2.z;
    double c_68=-(6*c_5);
    double c_69=-20*c_2;
    double c_70=4*p1.z*p3.z;
    double c_71=p11_5;
    double c_72=p12_6;
    double c_73=p21_6;
    double c_74=p21_5;
    double c_75=p31_5;
    double c_76=p31_6;
    double c_77=p12_5;
    double c_78=p11_6;
    double c_79=p22_5;
    double c_80=p22_6;
    double c_81=p32_5;
    double c_82=p32_6;
    double c_83=p1.z+p2.z+p3.z;
    double c_84=4*p2.z;
    double c_85=2*p1.z*p2.z;
    double c_86=3*c_5;
    double c_87=p20_4;
    double c_88=-(30*c_4);
    double c_89=6*p2.z;
    double c_90=c_89+p3.z;
    double c_91=3*p1.z*c_11;
    double c_92=-c_2;
    double c_93=5*p3.z;
    double c_94=6*p2.z*p3.z;
    double c_95=8*c_2;
    double c_96=8*p2.z*p3.z;
    double c_97=5*c_5;
    double c_98=3*p1.z*c_29;
    double c_99=-6*c_2;
    double c_100=-(6*p1.z*p3.z);
    double c_101=p30_2;
    double c_102=3*p1.z;
    double c_103=4*p3.z;
    double c_104=c_16+c_28+c_93;
    double c_105=c_102+c_84+c_10;
    double c_106=c_102+c_28+c_103;
    double c_107=p20_2;
    double c_108=-(2*c_42*c_2);
    double c_109=8*p1.z*p2.z;
    double c_110=15*p2.z*p3.z;
    double c_111=6*c_5;
    double c_112=c_20+c_85+c_65+c_59+c_5;
    double c_113=p1.z*p3.z;
    double c_114=4*c_45;
    double c_115=-(5*c_4);
    double c_116=-(3*p2.z*p3.z);
    double c_117=-(4*c_5);
    double c_118=-(4*c_4);
    double c_119=-(p2.z*p3.z);
    double c_120=6*c_4;
    double c_121=10*c_45*p3.z;
    double c_122=c_13+c_10;
    double c_123=6*c_4*p3.z;
    double c_124=6*p2.z*c_5;
    double c_125=4*c_47;
    double c_126=c_16+c_84+c_30;
    double c_127=4*c_2;
    double c_128=4*c_4;
    double c_129=8*p1.z*p3.z;
    double c_130=7*p2.z*p3.z;
    double c_131=7*p2.z;
    double c_132=-(30*c_5);
    double c_133=p2.z+c_103;
    double c_134=9*c_4*p3.z;
    double c_135=12*p2.z*c_5;
    double c_136=c_4+c_36+c_55;
    double c_137=c_20+c_62+c_4+c_54+c_59;
    double c_138=-4*c_2;
    double c_139=p1.z*p2.z;
    double c_140=4*c_5;
    double c_141=-c_4;
    double c_142=2*p1.z*c_25;
    double c_143=6*c_2;
    double c_144=-(3*c_5);
    double c_145=-5*c_38;
    double c_146=-(2*p3.z);
    double c_147=p2.z+c_146;
    double c_148=6*c_4*c_5;
    double c_149=c_92+c_85+c_4+c_9+c_97;
    double c_150=-20*c_38;
    double c_151=9*c_4*c_5;
    double c_152=10*p2.z*c_47;
    double c_153=p2.z+c_30;
    double c_154=c_114+c_123+c_124+c_125;
    double c_155=p1.z*c_154;
    double c_156=-(10*c_39*p3.y*p1.z*p2.z);
    double c_157=-(35*c_40*c_4);
    double c_158=-(20*p2.y*p3.y*p1.z*c_45);
    double c_159=-(70*c_6*c_46);
    double c_160=-(10*c_40*p1.z*p3.z);
    double c_161=9*c_6*c_12*p1.z*p3.z;
    double c_162=6*c_6*c_43*p3.z;
    double c_163=24*c_6*c_2*p2.z*p3.z;
    double c_164=60*c_6*p1.z*c_4*p3.z;
    double c_165=6*c_6*c_2*c_5;
    double c_166=-(24*c_12*c_2*c_5);
    double c_167=24*c_6*p1.z*p2.z*c_5;
    double c_168=-(18*p2.y*p3.y*p1.z*p2.z*c_5);
    double c_169=6*c_6*p1.z*c_47;
    double c_170=-(6*p1.z*p2.z);
    double c_171=-(3*c_4);
    double c_172=c_16+c_34+c_103;
    double c_173=-(6*c_4);
    double c_174=9*c_4;
    double c_175=-2*c_2;
    double c_176=12*c_4;
    double c_177=-(8*c_5);
    double c_178=-(2*p1.z*p3.z);
    double c_179=c_20+c_85+c_4+c_119+c_117;
    double c_180=-5*c_4;
    double c_181=c_180+c_33+c_5;
    double c_182=2*c_181;
    double c_183=c_3+c_65+c_182;
    double c_184=4*c_43;
    double c_185=7*p1.z*p2.z;
    double c_186=-(4*p2.z*p3.z);
    double c_187=-(20*c_5);
    double c_188=5*p1.z*c_29;
    double c_189=10*c_46;
    double c_190=10*c_45;
    double c_191=c_84+p3.z;
    double c_192=4*c_38;
    double c_193=c_34+c_10;
    double c_194=p20_3;
    double c_195=30*c_6*c_12*c_4;
    double c_196=-(12*c_12*c_43*p3.z);
    double c_197=5*c_42*p2.z*p3.z;
    double c_198=10*p2.y*c_41*c_5;
    double c_199=60*c_6*c_4*c_5;
    double c_200=20*c_12*p2.z*c_47;
    double c_201=10*p2.y*p3.y*c_48;
    double c_202=9*p2.z*p3.z;
    double c_203=6*p1.z*p3.z;
    double c_204=9*c_5;
    double c_205=12*c_5;
    double c_206=12*c_4*p3.z;
    double c_207=9*p2.z*c_5;
    double c_208=9*p2.z;
    double c_209=6*p3.z;
    double c_210=c_208+c_209;
    double c_211=c_2*c_210;
    double c_212=c_66+c_36+c_5;
    double c_213=6*p1.z*c_212;
    double c_214=c_184+c_190+c_206+c_207+c_125+c_211+c_213;
    double c_215=9*p3.z;
    double c_216=36*p2.z*p3.z;
    double c_217=18*c_40*c_38;
    double c_218=-(18*c_42*c_38);
    double c_219=-(15*p2.y*c_75*p1.z*p2.z);
    double c_220=18*p2.y*c_41*c_43*p2.z;
    double c_221=-(24*p2.y*p3.y*c_77*p2.z);
    double c_222=-(75*c_40*c_12*c_4);
    double c_223=54*c_6*c_12*c_2*c_4;
    double c_224=180*c_39*p3.y*p1.z*c_45;
    double c_225=18*c_42*c_46;
    double c_226=-(120*c_6*c_2*c_46);
    double c_227=144*p2.y*c_41*c_45*p3.z;
    double c_228=-(48*p2.y*p3.y*c_2*c_45*p3.z);
    double c_229=75*c_6*c_42*c_5;
    double c_230=120*c_6*c_46*c_5;
    double c_231=-(144*c_39*p3.y*p2.z*c_47);
    double c_232=-(18*c_40*c_48);
    double c_233=120*c_12*c_2*c_48;
    double c_234=-(120*c_12*c_4*c_48);
    double c_235=-(p1.z*p3.z);
    double c_236=c_22+c_23+c_4+c_36+c_7;
    double c_237=p30_4;
    double c_238=c_28+c_93;
    double c_239=30*p2.z*p3.z;
    double c_240=21*c_5;
    double c_241=p1.z*c_191;
    double c_242=14*c_2;
    double c_243=12*p2.z*p3.z;
    double c_244=-(10*c_5);
    double c_245=5*c_38;
    double c_246=-(8*c_47);
    double c_247=3*c_4*p3.z;
    double c_248=2*p2.z*c_5;
    double c_249=c_102+c_13+p3.z;
    double c_250=-(5*c_5);
    double c_251=3*c_45*p3.z;
    double c_252=6*c_45;
    double c_253=3*c_4*c_5;
    double c_254=3*p2.z*c_47;
    double c_255=10*c_43;
    double c_256=3*p2.z*c_5;
    double c_257=c_120+c_19+c_5;
    double c_258=12*c_2*c_25;
    double c_259=c_53+c_59+c_86;
    double c_260=3*p1.z*c_259;
    double c_261=c_255+c_114+c_123+c_124+c_125+c_258+c_260;
    double c_262=12*p1.z*p2.z;
    double c_263=10*c_5;
    double c_264=5*c_46;
    double c_265=12*c_4*c_5;
    double c_266=5*c_48;
    double c_267=15*p1.z*p3.z;
    double c_268=10*c_47;
    double c_269=4*c_4*p3.z;
    double c_270=7*c_5;
    double c_271=p2.z+c_209;
    double c_272=7*p3.z;
    double c_273=p1.z+p2.z+c_272;
    double c_274=p2.z+c_93;
    double c_275=c_89+c_215;
    double c_276=c_2*c_275;
    double c_277=6*p1.z*c_136;
    double c_278=35*c_48;
    double c_279=18*p2.z*p3.z;
    double c_280=-(5*p3.z);
    double c_281=c_89+c_280;
    double c_282=3*c_45;
    double c_283=-(5*c_47);
    double c_284=8*p3.z;
    double c_285=4*c_45*p3.z;
    double c_286=20*p2.z*c_47;
    double c_287=p2.z+c_284;
    double c_288=c_4+c_59+c_263;
    double c_289=c_4+c_36+c_7;
    double c_290=c_282+c_123+c_207+c_246;
    double c_291=2*c_45*p3.z;
    double c_292=4*p2.z*c_47;
    double c_293=-(5*c_48);
    double c_294=2*c_46*p3.z;
    double c_295=4*p2.z*c_5;
    double c_296=10*c_4;
    double c_297=c_184+c_114+c_134+c_135+c_268+c_276+c_277;
    double c_298=2*p2.z*c_48;
    double c_299=c_53+c_36+c_5;
    double c_300=c_114+c_247+c_248+c_47;
    double c_301=-(15*c_74*p3.y*c_2);
    double c_302=-(15*c_40*c_12*c_2);
    double c_303=-(15*c_39*c_41*c_2);
    double c_304=-(15*c_6*c_42*c_2);
    double c_305=-(15*p2.y*c_75*c_2);
    double c_306=18*c_39*p3.y*c_38;
    double c_307=18*c_6*c_12*c_38;
    double c_308=18*p2.y*c_41*c_38;
    double c_309=-(24*p2.y*p3.y*c_72);
    double c_310=-(15*c_76*p1.z*p2.z);
    double c_311=18*c_42*c_43*p2.z;
    double c_312=-(24*c_12*c_77*p2.z);
    double c_313=18*c_42*c_2*c_4;
    double c_314=-(24*c_12*c_38*c_4);
    double c_315=18*c_42*p1.z*c_45;
    double c_316=-(24*c_12*c_43*c_45);
    double c_317=-(24*c_12*c_2*c_46);
    double c_318=-(24*c_12*p1.z*c_79);
    double c_319=-(40*c_39*c_41*p2.z*p3.z);
    double c_320=108*c_6*c_12*c_2*p2.z*p3.z;
    double c_321=72*c_42*c_2*p2.z*p3.z;
    double c_322=-(48*p2.y*p3.y*c_38*p2.z*p3.z);
    double c_323=-(48*c_12*c_38*p2.z*p3.z);
    double c_324=72*c_42*p1.z*c_4*p3.z;
    double c_325=-(48*c_12*c_43*c_4*p3.z);
    double c_326=-(48*c_12*c_2*c_45*p3.z);
    double c_327=-(48*c_12*p1.z*c_46*p3.z);
    double c_328=-(70*c_76*c_5);
    double c_329=180*c_42*p1.z*p2.z*c_5;
    double c_330=-(72*c_12*c_43*p2.z*c_5);
    double c_331=-(72*p2.y*p3.y*c_2*c_4*c_5);
    double c_332=-(72*c_12*c_2*c_4*c_5);
    double c_333=-(72*c_12*p1.z*c_45*c_5);
    double c_334=-(96*c_12*c_2*p2.z*c_47);
    double c_335=-(96*c_12*p1.z*c_4*c_47);
    double c_336=64*p2.y*p3.y*c_45*c_47;
    double c_337=-(120*c_12*p1.z*p2.z*c_48);
    double c_338=112*c_12*c_82;
    double c_339=-(p1.z*p2.z);
    double c_340=6*p1.z;
    double c_341=c_22+c_141+c_21+c_36+c_5;
    double c_342=6*c_46;
    double c_343=-(6*c_45*p3.z);
    double c_344=-(6*c_48);
    double c_345=18*c_12*p1.z*c_45;
    double c_346=-(54*c_12*p1.z*p2.z*c_5);
    double c_347=c_20+c_118+c_54+c_119+c_5;
    double c_348=-(2*p1.z*p2.z);
    double c_349=-(2*p2.z*p3.z);
    double c_350=-5*c_12*c_106;
    double c_351=6*c_261;
    double c_352=c_350+c_351;
    double c_353=c_89+c_103;
    double c_354=c_43*c_353;
    double c_355=-(10*c_4);
    double c_356=9*p1.z*p3.z;
    double c_357=-(12*c_5);
    double c_358=-(4*p1.z*p2.z);
    double c_359=20*c_43;
    double c_360=2*c_4*p3.z;
    double c_361=2*p2.z*c_47;
    double c_362=8*p2.z;
    double c_363=8*c_4;
    double c_364=-(6*p2.z*p3.z);
    double c_365=-5*c_12*c_172;
    double c_366=6*c_214;
    double c_367=c_365+c_366;
    double c_368=3*c_38;
    double c_369=-(35*c_46);
    double c_370=10*c_4*c_5;
    double c_371=c_362+p3.z;
    double c_372=c_296+c_59+c_5;
    double c_373=10*p2.z*c_5;
    double c_374=20*c_47;
    double c_375=6*c_77;
    double c_376=3*c_45*c_5;
    double c_377=4*c_4*c_47;
    double c_378=5*p2.z*c_48;
    double c_379=c_4+c_36+c_86;
    double c_380=c_45+c_360+c_256+c_125;
    double c_381=12*c_45*c_47;
    double c_382=-8*c_45;
    double c_383=3*c_47;
    double c_384=c_382+c_134+c_124+c_383;
    double c_385=5*c_46*p3.z;
    double c_386=4*c_45*c_5;
    double c_387=3*c_4*c_47;
    double c_388=-(20*c_4);
    double c_389=7*p1.z*p3.z;
    double c_390=-(8*c_4);
    double c_391=p1.z*c_133;
    double c_392=-(9*c_4*c_5);
    double c_393=10*c_48;
    double c_394=c_28+c_30;
    double c_395=60*c_48;
    double c_396=-(20*c_47);
    double c_397=5*p1.z*c_11;
    double c_398=c_51+c_84+p3.z;
    double c_399=9*c_2;
    double c_400=2*p1.z*c_11;
    double c_401=c_13+p3.z;
    double c_402=-(3*p1.z*p2.z);
    double c_403=6*c_101*c_6*c_2;
    double c_404=3*c_101*p2.y*p3.y*c_2;
    double c_405=-(5*c_40*p1.z*p2.z);
    double c_406=2*c_42*c_4;
    double c_407=-(20*c_6*p1.z*c_45);
    double c_408=-(3*c_101*p2.y*p3.y*p1.z*p3.z);
    double c_409=-(12*c_101*c_12*p1.z*p3.z);
    double c_410=-(4*c_42*p1.z*p3.z);
    double c_411=12*c_101*c_12*p2.z*p3.z;
    double c_412=4*c_42*p2.z*p3.z;
    double c_413=-(12*c_101*p2.y*p3.y*c_5);
    double c_414=-(4*p2.y*c_41*c_5);
    double c_415=8*c_12*p1.z*c_47;
    double c_416=-(8*c_12*p2.z*c_47);
    double c_417=4*c_6*c_48;
    double c_418=8*p2.y*p3.y*c_48;
    double c_419=2*p3.z*c_25;
    double c_420=3*c_101*p2.z*p3.z;
    double c_421=c_24+c_34+p3.z;
    double c_422=30*c_2;
    double c_423=c_66+c_19+c_5+c_400;
    double c_424=p2.y*c_341;
    double c_425=-30*c_2;
    double c_426=c_51+p2.z+c_103;
    double c_427=15*p3.z;
    double c_428=7*c_45*p3.z;
    double c_429=4*c_48;
    double c_430=5*c_45;
    double c_431=-(5*c_46);
    double c_432=10*c_43*p3.z;
    double c_433=c_4+c_349+c_7;
    double c_434=-(6*c_2*c_433);
    double c_435=p1.z*c_384;
    double c_436=c_245+c_431+c_432+c_285+c_253+c_361+c_48+c_434+c_435;
    double c_437=3*c_6*c_12*c_2;
    double c_438=8*c_42*p1.z*p2.z;
    double c_439=6*p2.y*c_41*c_4;
    double c_440=-(18*p2.y*p3.y*c_2*c_4);
    double c_441=-(12*c_12*c_2*c_4);
    double c_442=8*p2.y*c_41*p2.z*p3.z;
    double c_443=-(12*p2.y*p3.y*c_2*p2.z*p3.z);
    double c_444=-(36*c_12*c_2*p2.z*p3.z);
    double c_445=-(12*c_12*c_45*p3.z);
    double c_446=-(6*c_39*p3.y*c_5);
    double c_447=10*c_42*c_5;
    double c_448=18*p2.y*p3.y*c_2*c_5;
    double c_449=12*c_12*c_2*c_5;
    double c_450=-(48*c_12*p1.z*p2.z*c_5);
    double c_451=12*c_6*p2.z*c_47;
    double c_452=16*p2.y*p3.y*p2.z*c_47;
    double c_453=20*c_12*c_48;
    double c_454=7*c_2;
    double c_455=-70*c_38;
    double c_456=6*c_45*p3.z;
    double c_457=6*p2.z*c_47;
    double c_458=c_24+p2.z+c_30;
    double c_459=-(9*p2.z*p3.z);
    double c_460=12*c_2;
    double c_461=-(3*p1.z*p3.z);
    double c_462=-(7*p2.z*p3.z);
    double c_463=10*c_43*p2.z;
    double c_464=6*c_2*c_289;
    double c_465=p1.z*c_290;
    double c_466=c_245+c_463+c_46+c_291+c_253+c_292+c_293+c_464+c_465;
    double c_467=-60*c_38;
    double c_468=4*c_46;
    double c_469=7*p2.z*c_47;
    double c_470=8*c_48;
    return (-3*p10_5*(3*c_8*c_1*(7*p1.z+p2.z+p3.z)+p2.y*p3.y*c_1*c_27+c_12*(c_3+p1.z*c_401+p2.z*c_11)-c_6*(c_3+p3.z*c_29+p1.z*
        c_274)+p1.y*(p2.y*(-21*c_2+c_4-30*p1.z*p3.z+c_31+c_250)+p3.y*(21*c_2+30*p1.z*p2.z+c_18+c_9+c_7)))-3*p20_5*(-3*c_6*c_14*
        (p1.z+c_131+p3.z)-p2.y*p3.y*(c_22+c_15+c_7+5*p1.z*c_90)+c_8*(c_53+c_9+c_5+p1.z*c_11)-c_12*(c_2+p2.z*c_35+p1.z*c_122)+p1.y*
        (-(p3.y*c_14*c_17)+p2.y*(c_92+c_15+c_21+c_239+c_97)))+3*c_87*p3.x*(c_8*c_1*c_17+c_12*(c_20+c_109+c_18+c_203+c_19)+3*p2.y*
        p3.y*(c_2+c_23+c_18+c_54+c_7)-5*c_6*(c_2+c_32+c_113+c_19+c_5)-p1.y*(p3.y*(c_175+c_64+c_115+c_94+c_111)+p2.y*(c_20+c_88+c_21+c_110+8*
        c_5)))-3*p10_4*(p3.x*(p2.y*p3.y*(c_22+c_23+c_66+c_100+c_68)+c_6*c_14*c_27-5*c_8*(c_4+c_33+c_5+c_98)+c_12*(c_22+2*
        p2.z*c_153+p1.z*(c_362+c_30))+p1.y*(p2.y*(c_422+c_52-15*p1.z*p3.z+c_31+c_177)+3*p3.y*c_236))+p2.x*(p2.y*p3.y*(-5*
        c_2+c_32+c_120+c_57+c_58)-c_12*c_50*c_27+5*c_8*(c_4+c_33+c_5+c_91)-c_6*(c_22+2*p3.z*c_35+p1.z*(c_34+c_284))+p1.y*(-3*p2.y*c_341+p3.y*
        (c_425+15*p1.z*p2.z+c_363+c_9+c_55))))+p10_3*(70*c_37*p2.y*c_2+30*c_8*c_6*c_2+10*p1.y*c_39*c_2+2*c_40*c_2-70*c_37*p3.y*
        c_2-30*c_8*c_12*c_2-10*p1.y*c_41*c_2+c_108+70*p1.y*p2.y*c_38+10*c_6*c_38-70*p1.y*p3.y*c_38-10*c_12*c_38+35*c_44*p1.z*p2.z+40*
        c_37*p2.y*p1.z*p2.z+30*c_8*c_6*p1.z*p2.z+16*p1.y*c_39*p1.z*p2.z+5*c_40*p1.z*p2.z-180*c_37*p3.y*p1.z*p2.z-90*c_8*
        p2.y*p3.y*p1.z*p2.z-36*p1.y*c_6*p3.y*p1.z*p2.z-9*c_39*p3.y*p1.z*p2.z-90*c_8*c_12*p1.z*p2.z-36*p1.y*p2.y*c_12*p1.z*
        p2.z-9*c_6*c_12*p1.z*p2.z-36*p1.y*c_41*p1.z*p2.z-9*p2.y*c_41*p1.z*p2.z-9*c_42*p1.z*p2.z+140*c_8*c_43*p2.z+80*p1.y*
        p2.y*c_43*p2.z+20*c_6*c_43*p2.z+360*p1.y*p3.y*c_43*p2.z+60*p2.y*p3.y*c_43*p2.z+60*c_12*c_43*p2.z+5*c_44*c_4+10*c_37*
        p2.y*c_4+12*c_8*c_6*c_4+10*p1.y*c_39*c_4+5*c_40*c_4-30*c_37*p3.y*c_4-36*c_8*p2.y*p3.y*c_4-27*p1.y*c_6*p3.y*c_4-12*c_39*
        p3.y*c_4-18*c_8*c_12*c_4-18*p1.y*p2.y*c_12*c_4-9*c_6*c_12*c_4-9*p1.y*c_41*c_4-6*p2.y*c_41*c_4-3*c_42*c_4+60*c_8*c_2*c_4+60*
        p1.y*p2.y*c_2*c_4+24*c_6*c_2*c_4+180*p1.y*p3.y*c_2*c_4+72*p2.y*p3.y*c_2*c_4+36*c_12*c_2*c_4+20*c_8*p1.z*c_45+32*p1.y*p2.y*
        p1.z*c_45+20*c_6*p1.z*c_45+72*p1.y*p3.y*p1.z*c_45+54*p2.y*p3.y*p1.z*c_45+c_345+4*c_8*c_46+10*p1.y*p2.y*c_46+10*c_6*
        c_46+18*p1.y*p3.y*c_46+24*p2.y*p3.y*c_46+6*c_12*c_46-35*c_44*p1.z*p3.z+180*c_37*p2.y*p1.z*p3.z+90*c_8*c_6*p1.z*p3.z+36*
        p1.y*c_39*p1.z*p3.z+9*c_40*p1.z*p3.z-40*c_37*p3.y*p1.z*p3.z+90*c_8*p2.y*p3.y*p1.z*p3.z+36*p1.y*c_6*p3.y*p1.z*
        p3.z+9*c_39*p3.y*p1.z*p3.z-30*c_8*c_12*p1.z*p3.z+36*p1.y*p2.y*c_12*p1.z*p3.z+c_161-16*p1.y*c_41*p1.z*p3.z+9*p2.y*c_41*
        p1.z*p3.z-5*c_42*p1.z*p3.z-140*c_8*c_43*p3.z-360*p1.y*p2.y*c_43*p3.z-60*c_6*c_43*p3.z-80*p1.y*p3.y*c_43*p3.z-60*
        p2.y*p3.y*c_43*p3.z-20*c_12*c_43*p3.z+30*c_37*p2.y*p2.z*p3.z+36*c_8*c_6*p2.z*p3.z+27*p1.y*c_39*p2.z*p3.z+12*c_40*p2.z*
        p3.z-30*c_37*p3.y*p2.z*p3.z+9*p1.y*c_6*p3.y*p2.z*p3.z+6*c_39*p3.y*p2.z*p3.z-36*c_8*c_12*p2.z*p3.z-9*p1.y*p2.y*c_12*
        p2.z*p3.z-27*p1.y*c_41*p2.z*p3.z-6*p2.y*c_41*p2.z*p3.z-12*c_42*p2.z*p3.z-180*p1.y*p2.y*c_2*p2.z*p3.z-72*c_6*c_2*
        p2.z*p3.z+180*p1.y*p3.y*c_2*p2.z*p3.z+72*c_12*c_2*p2.z*p3.z-72*p1.y*p2.y*p1.z*c_4*p3.z-54*c_6*p1.z*c_4*p3.z+72*
        p1.y*p3.y*p1.z*c_4*p3.z+18*p2.y*p3.y*p1.z*c_4*p3.z+36*c_12*p1.z*c_4*p3.z-18*p1.y*p2.y*c_45*p3.z-24*c_6*c_45*p3.z+18*
        p1.y*p3.y*c_45*p3.z+12*p2.y*p3.y*c_45*p3.z+12*c_12*c_45*p3.z-5*c_44*c_5+30*c_37*p2.y*c_5+18*c_8*c_6*c_5+9*p1.y*c_39*c_5+3*
        c_40*c_5-10*c_37*p3.y*c_5+36*c_8*p2.y*p3.y*c_5+18*p1.y*c_6*p3.y*c_5+6*c_39*p3.y*c_5-12*c_8*c_12*c_5+27*p1.y*p2.y*c_12*
        c_5+9*c_6*c_12*c_5-10*p1.y*c_41*c_5+12*p2.y*c_41*c_5-5*c_42*c_5-60*c_8*c_2*c_5-180*p1.y*p2.y*c_2*c_5-36*c_6*c_2*c_5-60*p1.y*
        p3.y*c_2*c_5-72*p2.y*p3.y*c_2*c_5+c_166-72*p1.y*p2.y*p1.z*p2.z*c_5-36*c_6*p1.z*p2.z*c_5+72*p1.y*p3.y*p1.z*p2.z*
        c_5+c_168+54*c_12*p1.z*p2.z*c_5-18*p1.y*p2.y*c_4*c_5-18*c_6*c_4*c_5+18*p1.y*p3.y*c_4*c_5+18*c_12*c_4*c_5-20*c_8*p1.z*c_47-72*
        p1.y*p2.y*p1.z*c_47-18*c_6*p1.z*c_47-32*p1.y*p3.y*p1.z*c_47-54*p2.y*p3.y*p1.z*c_47-20*c_12*p1.z*c_47-18*p1.y*p2.y*
        p2.z*c_47-12*c_6*p2.z*c_47+18*p1.y*p3.y*p2.z*c_47-12*p2.y*p3.y*p2.z*c_47+24*c_12*p2.z*c_47-4*c_8*c_48-18*p1.y*p2.y*
        c_48-6*c_6*c_48-10*p1.y*p3.y*c_48-24*p2.y*p3.y*c_48-10*c_12*c_48+6*p2.x*p3.x*(-3*p2.y*p3.y*c_1*c_83-c_6*c_14*c_56+c_12*
        c_50*c_61+2*c_8*c_1*c_27+p1.y*(p3.y*(c_60+c_348+c_52+c_116+c_144)+p2.y*(-10*c_2+c_53+c_54+c_19+c_55)))-3*c_107*(-(c_12*c_50*
        c_56)+p2.y*p3.y*(c_63+c_62+c_176+c_57+c_58)-3*c_6*c_112+2*c_8*(c_53+c_59+c_55+c_397)+p1.y*(-(p2.y*(c_60+c_173+c_70+c_19+c_5))+p3.y*
        (c_69+c_67+c_174+c_9+c_55)))+3*c_101*(-(c_6*c_14*c_61)-3*c_12*c_137+p2.y*p3.y*(c_63+c_64+c_52+c_65+c_205)+2*c_8*
        (c_66+c_59+c_86+c_188)+p1.y*(-(p3.y*(c_60+c_67+c_4+c_19+c_68))+p2.y*(c_69+c_66+c_70+c_9+c_204))))+p1.x*(-105*c_71*p2.y*c_2-75*c_44*
        c_6*c_2-50*c_37*c_39*c_2-30*c_8*c_40*c_2-15*p1.y*c_74*c_2-5*c_73*c_2+105*c_71*p3.y*c_2+75*c_44*c_12*c_2+50*c_37*c_41*c_2+30*
        c_8*c_42*c_2+15*p1.y*c_75*c_2+5*c_76*c_2+630*c_37*p2.y*c_38+270*c_8*c_6*c_38+90*p1.y*c_39*c_38+c_217-630*c_37*p3.y*c_38-270*
        c_8*c_12*c_38-90*p1.y*c_41*c_38+c_218-280*p1.y*p2.y*c_72-40*c_6*c_72+280*p1.y*p3.y*c_72+40*c_12*c_72+175*c_78*p1.z*p2.z+120*
        c_71*p2.y*p1.z*p2.z+75*c_44*c_6*p1.z*p2.z+40*c_37*c_39*p1.z*p2.z+15*c_8*c_40*p1.z*p2.z-5*c_73*p1.z*p2.z-90*c_71*p3.y*
        p1.z*p2.z-75*c_44*p2.y*p3.y*p1.z*p2.z-60*c_37*c_6*p3.y*p1.z*p2.z-45*c_8*c_39*p3.y*p1.z*p2.z-30*p1.y*c_40*p3.y*
        p1.z*p2.z-15*c_74*p3.y*p1.z*p2.z-75*c_44*c_12*p1.z*p2.z-60*c_37*p2.y*c_12*p1.z*p2.z-45*c_8*c_6*c_12*p1.z*p2.z-30*p1.y*
        c_39*c_12*p1.z*p2.z-15*c_40*c_12*p1.z*p2.z-60*c_37*c_41*p1.z*p2.z-45*c_8*p2.y*c_41*p1.z*p2.z-30*p1.y*c_6*c_41*p1.z*
        p2.z-15*c_39*c_41*p1.z*p2.z-45*c_8*c_42*p1.z*p2.z-30*p1.y*p2.y*c_42*p1.z*p2.z-15*c_6*c_42*p1.z*p2.z-30*p1.y*c_75*p1.z*
        p2.z+c_219+c_310-630*c_44*c_43*p2.z+180*c_8*c_6*c_43*p2.z+144*p1.y*c_39*c_43*p2.z+54*c_40*c_43*p2.z+360*c_37*p3.y*c_43*
        p2.z+180*c_8*p2.y*p3.y*c_43*p2.z+72*p1.y*c_6*p3.y*c_43*p2.z+18*c_39*p3.y*c_43*p2.z+180*c_8*c_12*c_43*p2.z+72*p1.y*
        p2.y*c_12*c_43*p2.z+18*c_6*c_12*c_43*p2.z+72*p1.y*c_41*c_43*p2.z+c_220+c_311+168*c_8*c_77*p2.z-192*p1.y*p2.y*c_77*p2.z-72*
        c_6*c_77*p2.z-144*p1.y*p3.y*c_77*p2.z+c_221+c_312+25*c_78*c_4+45*c_71*p2.y*c_4+60*c_44*c_6*c_4+70*c_37*c_39*c_4+75*c_8*c_40*
        c_4+75*p1.y*c_74*c_4+70*c_73*c_4-15*c_71*p3.y*c_4-30*c_44*p2.y*p3.y*c_4-45*c_37*c_6*p3.y*c_4-60*c_8*c_39*p3.y*c_4-75*
        p1.y*c_40*p3.y*c_4-90*c_74*p3.y*c_4-15*c_44*c_12*c_4-30*c_37*p2.y*c_12*c_4-45*c_8*c_6*c_12*c_4-60*p1.y*c_39*c_12*c_4+c_222-15*
        c_37*c_41*c_4-30*c_8*p2.y*c_41*c_4-45*p1.y*c_6*c_41*c_4-60*c_39*c_41*c_4-15*c_8*c_42*c_4-30*p1.y*p2.y*c_42*c_4-45*c_6*c_42*
        c_4-15*p1.y*c_75*c_4-30*p2.y*c_75*c_4-15*c_76*c_4-270*c_44*c_2*c_4-180*c_37*p2.y*c_2*c_4+108*p1.y*c_39*c_2*c_4+90*c_40*c_2*
        c_4+180*c_37*p3.y*c_2*c_4+216*c_8*p2.y*p3.y*c_2*c_4+162*p1.y*c_6*p3.y*c_2*c_4+72*c_39*p3.y*c_2*c_4+108*c_8*c_12*c_2*c_4+108*
        p1.y*p2.y*c_12*c_2*c_4+c_223+54*p1.y*c_41*c_2*c_4+36*p2.y*c_41*c_2*c_4+c_313+120*c_8*c_38*c_4-120*p1.y*p2.y*c_38*c_4-96*
        c_6*c_38*c_4-120*p1.y*p3.y*c_38*c_4-48*p2.y*p3.y*c_38*c_4+c_314-90*c_44*p1.z*c_45-144*c_37*p2.y*p1.z*c_45-108*c_8*c_6*p1.z*
        c_45+90*c_40*p1.z*c_45+72*c_37*p3.y*p1.z*c_45+162*c_8*p2.y*p3.y*p1.z*c_45+216*p1.y*c_6*p3.y*p1.z*c_45+c_224+54*c_8*
        c_12*p1.z*c_45+108*p1.y*p2.y*c_12*p1.z*c_45+108*c_6*c_12*p1.z*c_45+36*p1.y*c_41*p1.z*c_45+54*p2.y*c_41*p1.z*c_45+c_315+80*
        c_8*c_43*c_45-64*p1.y*p2.y*c_43*c_45-112*c_6*c_43*c_45-96*p1.y*p3.y*c_43*c_45-72*p2.y*p3.y*c_43*c_45+c_316-18*c_44*c_46-54*
        c_37*p2.y*c_46-90*c_8*c_6*c_46-90*p1.y*c_39*c_46+18*c_37*p3.y*c_46+72*c_8*p2.y*p3.y*c_46+180*p1.y*c_6*p3.y*c_46+360*c_39*
        p3.y*c_46+18*c_8*c_12*c_46+72*p1.y*p2.y*c_12*c_46+180*c_6*c_12*c_46+18*p1.y*c_41*c_46+72*p2.y*c_41*c_46+c_225+48*c_8*c_2*
        c_46-24*p1.y*p2.y*c_2*c_46+c_226-72*p1.y*p3.y*c_2*c_46-96*p2.y*p3.y*c_2*c_46+c_317+24*c_8*p1.z*c_79-120*c_6*p1.z*c_79-48*
        p1.y*p3.y*p1.z*c_79-120*p2.y*p3.y*p1.z*c_79+c_318+8*c_8*c_80+8*p1.y*p2.y*c_80-112*c_6*c_80-24*p1.y*p3.y*c_80-144*p2.y*
        p3.y*c_80-24*c_12*c_80-175*c_78*p1.z*p3.z+90*c_71*p2.y*p1.z*p3.z+75*c_44*c_6*p1.z*p3.z+60*c_37*c_39*p1.z*p3.z+45*
        c_8*c_40*p1.z*p3.z+30*p1.y*c_74*p1.z*p3.z+15*c_73*p1.z*p3.z-120*c_71*p3.y*p1.z*p3.z+75*c_44*p2.y*p3.y*p1.z*p3.z+60*
        c_37*c_6*p3.y*p1.z*p3.z+45*c_8*c_39*p3.y*p1.z*p3.z+30*p1.y*c_40*p3.y*p1.z*p3.z+15*c_74*p3.y*p1.z*p3.z-75*c_44*c_12*
        p1.z*p3.z+60*c_37*p2.y*c_12*p1.z*p3.z+45*c_8*c_6*c_12*p1.z*p3.z+30*p1.y*c_39*c_12*p1.z*p3.z+15*c_40*c_12*p1.z*p3.z-40*
        c_37*c_41*p1.z*p3.z+45*c_8*p2.y*c_41*p1.z*p3.z+30*p1.y*c_6*c_41*p1.z*p3.z+15*c_39*c_41*p1.z*p3.z-15*c_8*c_42*p1.z*
        p3.z+30*p1.y*p2.y*c_42*p1.z*p3.z+15*c_6*c_42*p1.z*p3.z+15*p2.y*c_75*p1.z*p3.z+5*c_76*p1.z*p3.z+630*c_44*c_43*p3.z-360*
        c_37*p2.y*c_43*p3.z-180*c_8*c_6*c_43*p3.z-72*p1.y*c_39*c_43*p3.z-18*c_40*c_43*p3.z-180*c_8*p2.y*p3.y*c_43*p3.z-72*p1.y*
        c_6*p3.y*c_43*p3.z-18*c_39*p3.y*c_43*p3.z-180*c_8*c_12*c_43*p3.z-72*p1.y*p2.y*c_12*c_43*p3.z-18*c_6*c_12*c_43*p3.z-144*
        p1.y*c_41*c_43*p3.z-18*p2.y*c_41*c_43*p3.z-54*c_42*c_43*p3.z-168*c_8*c_77*p3.z+144*p1.y*p2.y*c_77*p3.z+24*c_6*c_77*
        p3.z+192*p1.y*p3.y*c_77*p3.z+24*p2.y*p3.y*c_77*p3.z+72*c_12*c_77*p3.z+15*c_71*p2.y*p2.z*p3.z+30*c_44*c_6*p2.z*p3.z+45*
        c_37*c_39*p2.z*p3.z+60*c_8*c_40*p2.z*p3.z+75*p1.y*c_74*p2.z*p3.z+90*c_73*p2.z*p3.z-15*c_71*p3.y*p2.z*p3.z+15*c_37*
        c_6*p3.y*p2.z*p3.z+30*c_8*c_39*p3.y*p2.z*p3.z+45*p1.y*c_40*p3.y*p2.z*p3.z+60*c_74*p3.y*p2.z*p3.z-30*c_44*c_12*p2.z*
        p3.z-15*c_37*p2.y*c_12*p2.z*p3.z+15*p1.y*c_39*c_12*p2.z*p3.z+30*c_40*c_12*p2.z*p3.z-45*c_37*c_41*p2.z*p3.z-30*c_8*
        p2.y*c_41*p2.z*p3.z-15*p1.y*c_6*c_41*p2.z*p3.z-60*c_8*c_42*p2.z*p3.z-45*p1.y*p2.y*c_42*p2.z*p3.z-30*c_6*c_42*p2.z*
        p3.z-75*p1.y*c_75*p2.z*p3.z-60*p2.y*c_75*p2.z*p3.z-90*c_76*p2.z*p3.z-180*c_37*p2.y*c_2*p2.z*p3.z-216*c_8*c_6*c_2*p2.z*
        p3.z-162*p1.y*c_39*c_2*p2.z*p3.z-72*c_40*c_2*p2.z*p3.z+180*c_37*p3.y*c_2*p2.z*p3.z-54*p1.y*c_6*p3.y*c_2*p2.z*p3.z-36*
        c_39*p3.y*c_2*p2.z*p3.z+216*c_8*c_12*c_2*p2.z*p3.z+54*p1.y*p2.y*c_12*c_2*p2.z*p3.z+162*p1.y*c_41*c_2*p2.z*p3.z+36*
        p2.y*c_41*c_2*p2.z*p3.z+c_321+120*p1.y*p2.y*c_38*p2.z*p3.z+48*c_6*c_38*p2.z*p3.z-120*p1.y*p3.y*c_38*p2.z*p3.z+c_323-72*
        c_37*p2.y*p1.z*c_4*p3.z-162*c_8*c_6*p1.z*c_4*p3.z-216*p1.y*c_39*p1.z*c_4*p3.z-180*c_40*p1.z*c_4*p3.z+72*c_37*p3.y*
        p1.z*c_4*p3.z+54*c_8*p2.y*p3.y*p1.z*c_4*p3.z-36*c_39*p3.y*p1.z*c_4*p3.z+108*c_8*c_12*p1.z*c_4*p3.z+108*p1.y*p2.y*
        c_12*p1.z*c_4*p3.z+54*c_6*c_12*p1.z*c_4*p3.z+108*p1.y*c_41*p1.z*c_4*p3.z+90*p2.y*c_41*p1.z*c_4*p3.z+c_324+96*p1.y*
        p2.y*c_43*c_4*p3.z+72*c_6*c_43*c_4*p3.z-96*p1.y*p3.y*c_43*c_4*p3.z-24*p2.y*p3.y*c_43*c_4*p3.z+c_325-18*c_37*p2.y*c_45*
        p3.z-72*c_8*c_6*c_45*p3.z-180*p1.y*c_39*c_45*p3.z-360*c_40*c_45*p3.z+18*c_37*p3.y*c_45*p3.z+36*c_8*p2.y*p3.y*c_45*p3.z+36*
        p1.y*c_6*p3.y*c_45*p3.z+36*c_8*c_12*c_45*p3.z+90*p1.y*p2.y*c_12*c_45*p3.z+144*c_6*c_12*c_45*p3.z+54*p1.y*c_41*c_45*
        p3.z+c_227+72*c_42*c_45*p3.z+72*p1.y*p2.y*c_2*c_45*p3.z+96*c_6*c_2*c_45*p3.z-72*p1.y*p3.y*c_2*c_45*p3.z+c_228+c_326+48*
        p1.y*p2.y*p1.z*c_46*p3.z+120*c_6*p1.z*c_46*p3.z-48*p1.y*p3.y*p1.z*c_46*p3.z-72*p2.y*p3.y*p1.z*c_46*p3.z+c_327+24*p1.y*
        p2.y*c_79*p3.z+144*c_6*c_79*p3.z-24*p1.y*p3.y*c_79*p3.z-96*p2.y*p3.y*c_79*p3.z-48*c_12*c_79*p3.z-25*c_78*c_5+15*c_71*
        p2.y*c_5+15*c_44*c_6*c_5+15*c_37*c_39*c_5+15*c_8*c_40*c_5+15*p1.y*c_74*c_5+15*c_73*c_5-45*c_71*p3.y*c_5+30*c_44*p2.y*p3.y*
        c_5+30*c_37*c_6*p3.y*c_5+30*c_8*c_39*p3.y*c_5+30*p1.y*c_40*p3.y*c_5+30*c_74*p3.y*c_5-60*c_44*c_12*c_5+45*c_37*p2.y*c_12*
        c_5+45*c_8*c_6*c_12*c_5+45*p1.y*c_39*c_12*c_5+45*c_40*c_12*c_5-70*c_37*c_41*c_5+60*c_8*p2.y*c_41*c_5+60*p1.y*c_6*c_41*c_5+60*
        c_39*c_41*c_5-75*c_8*c_42*c_5+75*p1.y*p2.y*c_42*c_5+c_229-75*p1.y*c_75*c_5+90*p2.y*c_75*c_5+c_328+270*c_44*c_2*c_5-180*c_37*
        p2.y*c_2*c_5-108*c_8*c_6*c_2*c_5-54*p1.y*c_39*c_2*c_5-18*c_40*c_2*c_5+180*c_37*p3.y*c_2*c_5-216*c_8*p2.y*p3.y*c_2*c_5-108*
        p1.y*c_6*p3.y*c_2*c_5-36*c_39*p3.y*c_2*c_5-162*p1.y*p2.y*c_12*c_2*c_5-54*c_6*c_12*c_2*c_5-108*p1.y*c_41*c_2*c_5-72*p2.y*c_41*
        c_2*c_5-90*c_42*c_2*c_5-120*c_8*c_38*c_5+120*p1.y*p2.y*c_38*c_5+24*c_6*c_38*c_5+120*p1.y*p3.y*c_38*c_5+48*p2.y*p3.y*c_38*
        c_5+96*c_12*c_38*c_5-72*c_37*p2.y*p1.z*p2.z*c_5-108*c_8*c_6*p1.z*p2.z*c_5-108*p1.y*c_39*p1.z*p2.z*c_5-72*c_40*p1.z*
        p2.z*c_5+72*c_37*p3.y*p1.z*p2.z*c_5-54*c_8*p2.y*p3.y*p1.z*p2.z*c_5-108*p1.y*c_6*p3.y*p1.z*p2.z*c_5-90*c_39*p3.y*p1.z*
        p2.z*c_5+162*c_8*c_12*p1.z*p2.z*c_5-54*c_6*c_12*p1.z*p2.z*c_5+216*p1.y*c_41*p1.z*p2.z*c_5+36*p2.y*c_41*p1.z*p2.z*
        c_5+c_329+96*p1.y*p2.y*c_43*p2.z*c_5+48*c_6*c_43*p2.z*c_5-96*p1.y*p3.y*c_43*p2.z*c_5+24*p2.y*p3.y*c_43*p2.z*c_5+c_330-18*
        c_37*p2.y*c_4*c_5-54*c_8*c_6*c_4*c_5-108*p1.y*c_39*c_4*c_5-180*c_40*c_4*c_5+18*c_37*p3.y*c_4*c_5-54*p1.y*c_6*p3.y*c_4*c_5-144*
        c_39*p3.y*c_4*c_5+54*c_8*c_12*c_4*c_5+54*p1.y*p2.y*c_12*c_4*c_5+108*p1.y*c_41*c_4*c_5+144*p2.y*c_41*c_4*c_5+180*c_42*c_4*
        c_5+72*p1.y*p2.y*c_2*c_4*c_5+72*c_6*c_2*c_4*c_5-72*p1.y*p3.y*c_2*c_4*c_5+c_332+48*p1.y*p2.y*p1.z*c_45*c_5+96*c_6*p1.z*
        c_45*c_5-48*p1.y*p3.y*p1.z*c_45*c_5-24*p2.y*p3.y*p1.z*c_45*c_5+c_333+24*p1.y*p2.y*c_46*c_5+c_230-24*p1.y*p3.y*c_46*c_5-48*
        p2.y*p3.y*c_46*c_5-72*c_12*c_46*c_5+90*c_44*p1.z*c_47-72*c_37*p2.y*p1.z*c_47-54*c_8*c_6*p1.z*c_47-36*p1.y*c_39*p1.z*
        c_47-18*c_40*p1.z*c_47+144*c_37*p3.y*p1.z*c_47-162*c_8*p2.y*p3.y*p1.z*c_47-108*p1.y*c_6*p3.y*p1.z*c_47-54*c_39*p3.y*
        p1.z*c_47+108*c_8*c_12*p1.z*c_47-216*p1.y*p2.y*c_12*p1.z*c_47-108*c_6*c_12*p1.z*c_47-180*p2.y*c_41*p1.z*c_47-90*c_42*p1.z*
        c_47-80*c_8*c_43*c_47+96*p1.y*p2.y*c_43*c_47+24*c_6*c_43*c_47+64*p1.y*p3.y*c_43*c_47+72*p2.y*p3.y*c_43*c_47+112*c_12*c_43*
        c_47-18*c_37*p2.y*p2.z*c_47-36*c_8*c_6*p2.z*c_47-54*p1.y*c_39*p2.z*c_47-72*c_40*p2.z*c_47+18*c_37*p3.y*p2.z*c_47-36*c_8*
        p2.y*p3.y*p2.z*c_47-90*p1.y*c_6*p3.y*p2.z*c_47+c_231+72*c_8*c_12*p2.z*c_47-36*p1.y*p2.y*c_12*p2.z*c_47-144*c_6*c_12*
        p2.z*c_47+180*p1.y*c_41*p2.z*c_47+360*c_42*p2.z*c_47+72*p1.y*p2.y*c_2*p2.z*c_47+48*c_6*c_2*p2.z*c_47-72*p1.y*p3.y*c_2*
        p2.z*c_47+48*p2.y*p3.y*c_2*p2.z*c_47+c_334+48*p1.y*p2.y*p1.z*c_4*c_47+72*c_6*p1.z*c_4*c_47-48*p1.y*p3.y*p1.z*c_4*c_47+24*
        p2.y*p3.y*p1.z*c_4*c_47+c_335+24*p1.y*p2.y*c_45*c_47+96*c_6*c_45*c_47-24*p1.y*p3.y*c_45*c_47-96*c_12*c_45*c_47+18*c_44*
        c_48-18*c_37*p2.y*c_48-18*c_8*c_6*c_48-18*p1.y*c_39*c_48+c_232+54*c_37*p3.y*c_48-72*c_8*p2.y*p3.y*c_48-72*p1.y*c_6*p3.y*
        c_48-72*c_39*p3.y*c_48+90*c_8*c_12*c_48-180*p1.y*p2.y*c_12*c_48-180*c_6*c_12*c_48+90*p1.y*c_41*c_48-360*p2.y*c_41*c_48-48*
        c_8*c_2*c_48+72*p1.y*p2.y*c_2*c_48+24*c_6*c_2*c_48+24*p1.y*p3.y*c_2*c_48+96*p2.y*p3.y*c_2*c_48+c_233+48*p1.y*p2.y*p1.z*
        p2.z*c_48+48*c_6*p1.z*p2.z*c_48-48*p1.y*p3.y*p1.z*p2.z*c_48+72*p2.y*p3.y*p1.z*p2.z*c_48+c_337+24*p1.y*p2.y*c_4*
        c_48+72*c_6*c_4*c_48-24*p1.y*p3.y*c_4*c_48+48*p2.y*p3.y*c_4*c_48+c_234-24*c_8*p1.z*c_81+48*p1.y*p2.y*p1.z*c_81+24*c_6*p1.z*
        c_81+120*p2.y*p3.y*p1.z*c_81+120*c_12*p1.z*c_81+24*p1.y*p2.y*p2.z*c_81+48*c_6*p2.z*c_81-24*p1.y*p3.y*p2.z*c_81+96*
        p2.y*p3.y*p2.z*c_81-144*c_12*p2.z*c_81-8*c_8*c_82+24*p1.y*p2.y*c_82+24*c_6*c_82-8*p1.y*p3.y*c_82+144*p2.y*p3.y*c_82+c_338+6*
        c_194*p3.x*(3*p1.y*p3.y*c_14*c_83+c_8*c_1*c_105-2*c_6*c_14*c_17+c_12*c_50*c_126+p2.y*p3.y*(c_20+c_85+c_355+c_65+c_86)-p1.y*
        p2.y*c_183)-3*c_87*(-(c_12*c_50*c_17)-p2.y*p3.y*(c_95+c_88+c_55+5*p1.z*c_35)-5*c_6*(c_2+p1.z*c_35+p3.z*c_90)+c_8*
        (c_18+c_96+c_55+c_91)+p1.y*(3*p2.y*(c_92+c_18+c_54+c_9+c_5)+p3.y*(c_99+c_170+c_18+c_9+c_55)))+3*c_237*(-(c_6*c_14*c_104)-5*c_12*
        (c_2+c_139+c_4+c_65+c_94)-p2.y*p3.y*(c_95+c_23+c_66+c_267+c_132)+c_8*(c_66+c_96+c_97+c_98)+p1.y*(3*p3.y*c_149+p2.y*
        (c_99+c_66+c_100+c_9+c_97)))+6*p2.x*p3.x*(p3.y*c_50+p1.y*c_1+p2.y*(-p1.z+p3.z))*(4*c_39*p1.z+6*c_6*p3.y*p1.z+6*p2.y*c_12*p1.z+4*
        c_41*p1.z-8*p2.y*c_43-8*p3.y*c_43+10*c_39*p2.z+12*c_6*p3.y*p2.z+9*p2.y*c_12*p2.z+4*c_41*p2.z-18*p2.y*c_2*p2.z-12*
        p3.y*c_2*p2.z-24*p2.y*p1.z*c_4-12*p3.y*p1.z*c_4-20*p2.y*c_45-8*p3.y*c_45+4*c_39*p3.z+9*c_6*p3.y*p3.z+12*p2.y*c_12*
        p3.z+10*c_41*p3.z-12*p2.y*c_2*p3.z-18*p3.y*c_2*p3.z-24*p2.y*p1.z*p2.z*p3.z-24*p3.y*p1.z*p2.z*p3.z-24*p2.y*c_4*p3.z-18*
        p3.y*c_4*p3.z-12*p2.y*p1.z*c_5-24*p3.y*p1.z*c_5-18*p2.y*p2.z*c_5-24*p3.y*p2.z*c_5-8*p2.y*c_47-20*p3.y*c_47+2*c_37*
        c_27+3*c_8*(p2.y*c_56+p3.y*c_61)+c_101*(p1.y*c_106+p2.y*c_172+2*p3.y*c_104)+p1.y*(12*p2.y*p3.y*c_83+3*c_6*c_105+3*c_12*
        c_106-2*c_261))-3*c_107*(c_403-8*c_39*p3.y*c_2-6*c_101*c_12*c_2-6*c_6*c_12*c_2-4*p2.y*c_41*c_2+c_108+2*c_6*c_38+16*p2.y*p3.y*
        c_38+8*c_12*c_38+12*c_101*c_6*p1.z*p2.z+c_405+3*c_101*p2.y*p3.y*p1.z*p2.z+c_156-3*c_101*c_12*p1.z*p2.z-6*c_6*c_12*p1.z*
        p2.z-3*p2.y*c_41*p1.z*p2.z-c_42*p1.z*p2.z+4*c_6*c_43*p2.z+30*p2.y*p3.y*c_43*p2.z+10*c_12*c_43*p2.z+c_157+12*c_101*
        p2.y*p3.y*c_4+60*c_39*p3.y*c_4+9*c_101*c_12*c_4+c_195+12*p2.y*c_41*c_4+3*c_42*c_4+24*p2.y*p3.y*c_2*c_4+6*c_12*c_2*
        c_4+c_407+c_158-4*c_12*p1.z*c_45+c_159-120*p2.y*p3.y*c_46-20*c_12*c_46+3*c_101*c_6*p1.z*p3.z+c_160+c_408-10*c_39*p3.y*p1.z*
        p3.z+c_409-9*c_6*c_12*p1.z*p3.z-7*p2.y*c_41*p1.z*p3.z+c_410+c_162+14*p2.y*p3.y*c_43*p3.z+12*c_12*c_43*p3.z-12*c_101*c_6*p2.z*
        p3.z-60*c_40*p2.z*p3.z-20*c_39*p3.y*p2.z*p3.z+c_411+6*p2.y*c_41*p2.z*p3.z+c_412+c_163+24*p2.y*p3.y*c_2*p2.z*p3.z+12*
        c_12*c_2*p2.z*p3.z+c_164+12*p2.y*p3.y*p1.z*c_4*p3.z+120*c_6*c_45*p3.z-40*p2.y*p3.y*c_45*p3.z-24*c_12*c_45*p3.z-9*
        c_101*c_6*c_5-10*c_40*c_5+c_413-12*c_39*p3.y*c_5-9*c_6*c_12*c_5+c_414+c_165+12*p2.y*p3.y*c_2*c_5+c_449+c_167+18*p2.y*p3.y*
        p1.z*p2.z*c_5+6*c_12*p1.z*p2.z*c_5+c_199-18*c_12*c_4*c_5+c_169+10*p2.y*p3.y*p1.z*c_47+c_415+24*c_6*p2.z*c_47+12*p2.y*p3.y*
        p2.z*c_47+c_416+6*c_6*c_48+c_418+c_44*(c_60+c_4+c_96+c_140+5*p1.z*c_133)+c_37*(p2.y*(c_60+c_109+c_66+20*p1.z*p3.z+c_110+c_97)+p3.y*
        (c_69+c_358+c_53+c_129+c_130+c_111))+c_8*(20*c_38+20*c_43*c_147+12*c_2*(c_4+c_186+c_58)-6*c_101*(c_4+c_7)+3*c_6*c_112+3*
        c_12*(c_138+c_339+c_4+c_36+c_55)+3*p2.y*p3.y*(c_63+c_402+c_128+c_113+c_59+c_55)-4*p3.z*c_300-2*p1.z*(-2*c_45+3*c_101*c_1+18*
        c_4*p3.z+c_135+6*c_47))+p1.y*(-6*c_6*p3.y*c_50*c_249+2*c_39*(c_2+c_115+c_178+c_31+c_7)-3*p2.y*c_12*(c_127+c_118+c_116+c_7+c_142)-c_41*
        (c_143+c_171+c_31+c_117+c_400)+3*c_101*(-(p3.y*c_179)+p2.y*c_347)-2*p2.y*(c_145+c_264+c_121+c_148+c_254+c_48+c_43*
        (-8*p2.z+c_103)+2*p1.z*p3.z*c_257+c_2*(-6*c_4+c_202+c_86))-2*p3.y*(c_150+c_189+c_121+c_151+c_469+c_429-3*c_2*p2.z*c_35-4*
        c_43*c_122+c_155)))+3*c_101*(-(c_40*c_14*c_126)-c_39*p3.y*(c_127+c_185+c_128+c_65+c_364+c_357)+c_44*(c_60+c_128+c_96+c_5+5*p1.z*
        c_191)+c_37*(p3.y*(c_60+20*p1.z*p2.z+c_18+c_129+c_110+c_55)+p2.y*(c_69+c_109+c_120-4*p1.z*p3.z+c_130+c_86))-2*p2.y*p3.y*
        (-8*c_38-4*c_46+c_343+c_286+c_395-c_43*(c_131+c_427)-6*c_2*c_136-p1.z*(c_430+c_134+c_124-10*c_47)+c_12*(c_127+c_120+10*p2.z*
        p3.z+c_132+5*p1.z*c_25))+c_12*(2*c_38+c_342+24*c_45*p3.z+60*c_4*c_5+120*p2.z*c_47-70*c_48+6*c_2*p2.z*c_133+c_354-5*c_12*
        (c_66+c_243+c_270)+p1.z*(c_252+24*c_4*p3.z+60*p2.z*c_5+c_396-5*c_12*c_29))+c_6*(-3*c_12*(c_20+c_62+c_53+c_54+c_244)+2*c_14*
        c_297)+c_8*(3*c_12*c_137+3*c_6*(c_138+c_66+c_235+c_36+c_5)+3*p2.y*p3.y*(c_63+c_139+c_66+c_461+c_59+c_140)+4*(c_245+5*c_43*(-2*
        p2.z+p3.z)-3*c_2*(c_66+c_59+c_7)+p1.z*(-3*c_45-6*c_4*p3.z-9*p2.z*c_5+c_47)-p2.z*c_380))-p1.y*(3*c_6*p3.y*(c_127+c_141+c_116+c_117+c_142)+c_39*
        (c_143+c_118+c_31+c_144+2*p1.z*c_29)+2*p3.y*(c_145+c_46+4*c_43*c_147+c_251+c_148+c_152+c_266+3*c_2*
        (c_4+c_19+c_58)+c_12*c_149+2*p1.z*p2.z*(c_4+c_19+c_111))+2*p2.y*(c_150+c_468+c_428+c_151+c_152+c_393-3*c_2*p3.z*c_153+3*c_12*c_14*
        (c_102+p2.z+c_93)-4*c_43*c_238+c_155))))+3*c_107*p3.x*(-10*c_40*c_2-2*c_39*p3.y*c_2+c_437+5*p2.y*c_41*c_2+4*c_42*c_2+6*c_6*c_38-2*
        p2.y*p3.y*c_38-4*c_12*c_38-60*c_40*p1.z*p2.z+c_156+12*c_6*c_12*p1.z*p2.z+15*p2.y*c_41*p1.z*p2.z+c_438+24*c_6*c_43*
        p2.z-6*p2.y*p3.y*c_43*p2.z-8*c_12*c_43*p2.z+c_157-10*c_39*p3.y*c_4+2*p2.y*c_41*c_4+c_42*c_4+60*c_6*c_2*c_4-12*p2.y*p3.y*
        c_2*c_4+c_441+120*c_6*p1.z*c_45+c_158-16*c_12*p1.z*c_45+c_159-10*p2.y*p3.y*c_46+c_160-4*c_39*p3.y*p1.z*p3.z+c_161+20*p2.y*
        c_41*p1.z*p3.z+20*c_42*p1.z*p3.z+c_162-4*p2.y*p3.y*c_43*p3.z+c_196-5*c_40*p2.z*p3.z+6*c_6*c_12*p2.z*
        p3.z+c_442+c_197+c_163+c_443-24*c_12*c_2*p2.z*p3.z+c_164-24*p2.y*p3.y*p1.z*c_4*p3.z-36*c_12*p1.z*c_4*p3.z-20*c_6*c_45*p3.z+4*c_12*c_45*
        p3.z+2*c_39*p3.y*c_5+6*c_6*c_12*c_5+c_198+c_447+c_165-6*p2.y*p3.y*c_2*c_5+c_166+c_167+c_168+c_450+12*p2.y*p3.y*c_4*c_5+12*
        c_12*c_4*c_5+c_169-8*p2.y*p3.y*p1.z*c_47-40*c_12*p1.z*c_47+4*c_6*p2.z*c_47+c_452+c_200+2*c_6*c_48+c_201+c_453+c_44*c_1*
        c_56-c_37*(p2.y*(c_127+c_170-12*c_4+c_389+c_19+c_140)+p3.y*(c_138+c_64+c_171+c_70+c_36+c_111))+c_101*(c_8*c_1*c_172+2*c_12*
        (c_20+c_67+c_53+10*p1.z*p3.z+c_9)-p2.y*p3.y*(c_2+c_62+c_173+c_70+c_263)-3*c_6*(c_2+c_419+p1.z*(c_84+c_30))+p1.y*(p3.y*
        (c_20+c_23+c_174+c_59+c_187)+p2.y*(c_175+c_176+c_57+c_19+c_177)))+c_8*(3*p2.y*p3.y*(c_2+c_62+c_128+c_178+c_349+c_117)+3*c_12*c_179-3*
        c_6*c_183-2*c_1*c_214)+p1.y*(6*c_6*p3.y*c_1*(p1.z+c_13+c_30)+c_41*(c_143+c_185+c_53+c_129+c_186+c_187)-2*c_39*(c_143+c_88+c_9+c_140+c_188)-2*
        p3.y*(c_192+c_189+c_285+c_392-20*p2.z*c_47-20*c_48+3*c_2*p2.z*c_193+c_43*(c_131+c_103)+p1.z*(c_190+c_123-3*
        p2.z*c_5+c_246))+p2.y*(3*c_12*(c_20+c_128+c_116+c_177+c_241)+2*(c_192-60*c_46-10*c_45*p3.z+c_265+15*p2.z*c_47+c_470+3*c_2*
        p3.z*c_193+c_43*(c_89+c_93)+p1.z*(-20*c_45+c_123+c_135+7*c_47)))))+c_194*(-12*c_101*c_6*c_2-5*c_40*c_2+c_404+30*c_39*p3.y*c_2+9*
        c_101*c_12*c_2+18*c_6*c_12*c_2+9*p2.y*c_41*c_2+3*c_42*c_2-4*c_6*c_38-18*p2.y*p3.y*c_38-6*c_12*c_38-60*c_101*c_6*p1.z*p2.z-35*
        c_40*p1.z*p2.z+12*c_101*p2.y*p3.y*p1.z*p2.z+180*c_39*p3.y*p1.z*p2.z+27*c_101*c_12*p1.z*p2.z+90*c_6*c_12*p1.z*p2.z+36*
        p2.y*c_41*p1.z*p2.z+9*c_42*p1.z*p2.z-20*c_6*c_43*p2.z-72*p2.y*p3.y*c_43*p2.z-18*c_12*c_43*p2.z+30*c_101*p2.y*p3.y*
        c_4+70*c_39*p3.y*c_4+18*c_101*c_12*c_4+c_195+10*p2.y*c_41*c_4+c_406-60*c_6*c_2*c_4-180*p2.y*p3.y*c_2*c_4-36*c_12*c_2*c_4-140*
        c_6*p1.z*c_45-360*p2.y*p3.y*p1.z*c_45-60*c_12*p1.z*c_45+70*p2.y*p3.y*c_46+10*c_12*c_46-24*c_101*c_6*p1.z*p3.z+9*c_101*
        p2.y*p3.y*p1.z*p3.z+30*c_39*p3.y*p1.z*p3.z+36*c_101*c_12*p1.z*p3.z+36*c_6*c_12*p1.z*p3.z+27*p2.y*c_41*p1.z*p3.z+12*
        c_42*p1.z*p3.z-18*p2.y*p3.y*c_43*p3.z+c_196-30*c_101*c_6*p2.z*p3.z+35*c_40*p2.z*p3.z+40*c_39*p3.y*p2.z*p3.z+18*
        c_101*c_12*p2.z*p3.z+30*c_6*c_12*p2.z*p3.z+16*p2.y*c_41*p2.z*p3.z+c_197-72*p2.y*p3.y*c_2*p2.z*p3.z+c_444-180*p2.y*
        p3.y*p1.z*c_4*p3.z-72*c_12*p1.z*c_4*p3.z+140*c_6*c_45*p3.z+80*p2.y*p3.y*c_45*p3.z+20*c_12*c_45*p3.z-18*c_101*c_6*c_5+5*
        c_40*c_5-18*c_101*p2.y*p3.y*c_5+10*c_39*p3.y*c_5+12*c_6*c_12*c_5+c_198+5*c_42*c_5-18*p2.y*p3.y*c_2*c_5-18*c_12*c_2*c_5-72*
        p2.y*p3.y*p1.z*p2.z*c_5+c_346+c_199+60*p2.y*p3.y*c_4*c_5+24*c_12*c_4*c_5-18*p2.y*p3.y*p1.z*c_47-24*c_12*p1.z*c_47+20*c_6*
        p2.z*c_47+32*p2.y*p3.y*p2.z*c_47+c_200+c_417+c_201+10*c_12*c_48-c_44*(c_22+c_23+c_66+12*p1.z*p3.z+c_202+c_86)-c_8*(10*c_38-6*
        c_101*p1.z*p2.z+20*c_43*p2.z-12*c_101*c_4+24*c_2*c_4+20*p1.z*c_45+c_189+6*c_101*p1.z*p3.z-24*c_43*p3.z+c_420-54*c_2*
        p2.z*p3.z-72*p1.z*c_4*p3.z-60*c_45*p3.z+9*c_101*c_5-18*c_2*c_5-36*p1.z*p2.z*c_5-36*c_4*c_5-12*p1.z*c_47-18*p2.z*c_47+c_344-9*
        c_12*c_14*c_83-9*p2.y*p3.y*c_14*c_105+6*c_6*(c_20+c_23+c_18+c_203+c_110+c_86))-c_37*(-3*p3.y*c_14*c_56+p2.y*(c_60+16*
        p1.z*p2.z+c_296+27*p1.z*p3.z+c_216+c_204))+p1.y*(18*c_6*p3.y*c_14*c_17-10*c_39*(c_2+c_67+7*c_4+c_65+c_279+c_86)-3*c_101*(p2.y*
        (c_20+c_388+c_21+c_59+c_204)+p3.y*(c_175+c_64+c_390+c_19+c_205))-3*p3.y*c_14*(-(c_12*c_172)+2*c_214)+p2.y*(9*c_12*c_14*
        c_126+2*(c_145+c_369+180*c_45*p3.z+90*c_4*c_5+36*p2.z*c_47+9*c_48+c_43*(-16*p2.z+c_215)+c_2*(-30*c_4+c_216+c_204)+p1.z*(-40*
        c_45+90*c_4*p3.z+36*p2.z*c_5+9*c_47)))))+p3.x*(-15*c_73*c_2+c_301+c_302+c_303+c_304+c_305+25*c_76*c_2+c_217+c_306+c_307+c_308+c_218-24*
        c_6*c_72+c_309+8*c_12*c_72-90*c_73*p1.z*p2.z-75*c_74*p3.y*p1.z*p2.z-60*c_40*c_12*p1.z*p2.z-45*c_39*c_41*p1.z*
        p2.z-30*c_6*c_42*p1.z*p2.z+c_219+72*c_40*c_43*p2.z+54*c_39*p3.y*c_43*p2.z+36*c_6*c_12*c_43*p2.z+c_220-48*c_6*c_77*p2.z+c_221-70*
        c_73*c_4-75*c_74*p3.y*c_4+c_222-70*c_39*c_41*c_4-60*c_6*c_42*c_4-45*p2.y*c_75*c_4-25*c_76*c_4+180*c_40*c_2*c_4+108*c_39*
        p3.y*c_2*c_4+c_223+18*p2.y*c_41*c_2*c_4-72*c_6*c_38*c_4-24*p2.y*p3.y*c_38*c_4+360*c_40*p1.z*c_45+c_224+72*c_6*c_12*p1.z*
        c_45+18*p2.y*c_41*p1.z*c_45-96*c_6*c_43*c_45-24*p2.y*p3.y*c_43*c_45+90*c_39*p3.y*c_46+90*c_6*c_12*c_46+54*p2.y*c_41*
        c_46+c_225+c_226-24*p2.y*p3.y*c_2*c_46-144*c_6*p1.z*c_79-24*p2.y*p3.y*p1.z*c_79+112*c_6*c_80-8*p2.y*p3.y*c_80-8*c_12*c_80-15*c_73*
        p1.z*p3.z-30*c_74*p3.y*p1.z*p3.z-45*c_40*c_12*p1.z*p3.z-60*c_39*c_41*p1.z*p3.z-75*c_6*c_42*p1.z*p3.z-90*p2.y*c_75*
        p1.z*p3.z+175*c_76*p1.z*p3.z+18*c_40*c_43*p3.z+36*c_39*p3.y*c_43*p3.z+54*c_6*c_12*c_43*p3.z+72*p2.y*c_41*c_43*p3.z-90*
        c_42*c_43*p3.z-24*c_6*c_77*p3.z-48*p2.y*p3.y*c_77*p3.z+24*c_12*c_77*p3.z+5*c_73*p2.z*p3.z-15*c_40*c_12*p2.z*p3.z+c_319-75*
        c_6*c_42*p2.z*p3.z-120*p2.y*c_75*p2.z*p3.z-175*c_76*p2.z*p3.z+72*c_40*c_2*p2.z*p3.z+108*c_39*p3.y*c_2*p2.z*
        p3.z+c_320+72*p2.y*c_41*c_2*p2.z*p3.z-48*c_6*c_38*p2.z*p3.z+c_322+180*c_40*p1.z*c_4*p3.z+216*c_39*p3.y*p1.z*c_4*p3.z+162*c_6*
        c_12*p1.z*c_4*p3.z+72*p2.y*c_41*p1.z*c_4*p3.z-72*c_6*c_43*c_4*p3.z-48*p2.y*p3.y*c_43*c_4*p3.z-90*c_40*c_45*p3.z+108*
        c_6*c_12*c_45*p3.z+c_227+90*c_42*c_45*p3.z-96*c_6*c_2*c_45*p3.z+c_228-120*c_6*p1.z*c_46*p3.z-48*p2.y*p3.y*p1.z*c_46*
        p3.z+120*c_6*c_79*p3.z-24*c_12*c_79*p3.z+5*c_73*c_5+15*c_74*p3.y*c_5+30*c_40*c_12*c_5+50*c_39*c_41*c_5+c_229+105*p2.y*c_75*c_5+18*
        c_40*c_2*c_5+54*c_39*p3.y*c_2*c_5+108*c_6*c_12*c_2*c_5+180*p2.y*c_41*c_2*c_5-270*c_42*c_2*c_5-24*c_6*c_38*c_5-72*p2.y*p3.y*
        c_38*c_5+48*c_12*c_38*c_5+72*c_40*p1.z*p2.z*c_5+162*c_39*p3.y*p1.z*p2.z*c_5+216*c_6*c_12*p1.z*p2.z*c_5+180*p2.y*c_41*
        p1.z*p2.z*c_5-48*c_6*c_43*p2.z*c_5-72*p2.y*p3.y*c_43*p2.z*c_5-90*c_40*c_4*c_5-108*c_39*p3.y*c_4*c_5+180*p2.y*c_41*c_4*
        c_5+270*c_42*c_4*c_5-72*c_6*c_2*c_4*c_5+c_331-96*c_6*p1.z*c_45*c_5-72*p2.y*p3.y*p1.z*c_45*c_5+c_230+24*p2.y*p3.y*c_46*c_5-48*
        c_12*c_46*c_5+18*c_40*p1.z*c_47+72*c_39*p3.y*p1.z*c_47+180*c_6*c_12*p1.z*c_47+360*p2.y*c_41*p1.z*c_47-630*c_42*p1.z*c_47-24*
        c_6*c_43*c_47-96*p2.y*p3.y*c_43*c_47+80*c_12*c_43*c_47-54*c_40*p2.z*c_47+c_231-180*c_6*c_12*p2.z*c_47+630*c_42*p2.z*
        c_47-48*c_6*c_2*p2.z*c_47-96*p2.y*p3.y*c_2*p2.z*c_47-72*c_6*p1.z*c_4*c_47-96*p2.y*p3.y*p1.z*c_4*c_47+112*c_6*c_45*c_47+c_336-80*
        c_12*c_45*c_47+c_232-90*c_39*p3.y*c_48-270*c_6*c_12*c_48-630*p2.y*c_41*c_48-24*c_6*c_2*c_48-120*p2.y*p3.y*c_2*c_48+c_233-48*
        c_6*p1.z*p2.z*c_48-120*p2.y*p3.y*p1.z*p2.z*c_48+96*c_6*c_4*c_48+120*p2.y*p3.y*c_4*c_48+c_234-24*c_6*p1.z*c_81-144*
        p2.y*p3.y*p1.z*c_81+168*c_12*p1.z*c_81+72*c_6*p2.z*c_81+192*p2.y*p3.y*p2.z*c_81-168*c_12*p2.z*c_81+40*c_6*c_82+280*p2.y*
        p3.y*c_82+5*c_78*(c_242+18*p1.z*p2.z+c_53+c_235+c_19+c_7)-15*c_71*(p2.y*c_50*(c_340+c_28+p3.z)-p3.y*c_236)+3*c_237*(-3*
        c_12*c_50*c_273+c_8*(c_4+c_9+c_86+p1.z*c_29)-c_6*(c_2+p3.z*c_153+p1.z*c_238)-p2.y*p3.y*(c_22+c_141+c_240+5*p1.z*c_271)+p1.y*
        (-(p2.y*c_50*c_104)+p3.y*(c_92+c_23+c_18+c_239+c_240)))-3*c_44*(5*c_6*c_50*c_421+5*p2.y*p3.y*c_50*c_27-5*c_12*
        (c_22+c_4+c_19+c_58+c_241)+6*(c_46+5*c_43*(c_84+c_0)+c_45*p3.z+c_4*c_5+p2.z*c_47-c_48+5*c_2*(c_66+c_36+c_7)+p1.z*(c_114+c_269+c_295-3*
        c_47)))-c_37*(15*c_39*c_50*c_398+15*c_6*p3.y*c_50*c_56-5*c_41*(c_242+9*p1.z*p2.z+c_53+c_129+c_243+c_244)+18*p3.y*c_466-3*p2.y*
        c_50*(-5*c_12*c_61+6*(c_359+c_114+c_247+c_248+c_47+10*c_2*c_29+4*p1.z*c_299)))+c_8*(-15*c_40*c_50*c_249-15*c_39*p3.y*c_50*
        c_105+15*c_42*(c_127+c_85+c_4+c_21+c_9+c_250)-18*c_12*(c_245+c_46+c_251+c_148+c_152-15*c_48+3*c_2*p2.z*c_153+c_43*(c_84+c_209)+2*
        p1.z*(c_45+c_247+c_124+c_283))-8*(14*c_72-3*c_80-3*c_77*c_281-3*c_79*p3.z-3*c_46*c_5-3*c_45*c_47-3*c_4*c_48-3*p2.z*c_81+5*c_82-15*
        c_38*(c_4+c_33+c_7)-2*c_43*(c_252+c_123+c_124-7*c_47)-3*c_2*(3*c_46+c_251+c_253+c_254-4*c_48)-3*p1.z*(2*c_79+c_294+2*c_45*
        c_5+2*c_4*c_47+c_298-3*c_81))+9*c_6*c_50*(-5*c_12*c_83+2*(c_255+c_190+c_123+c_256+c_47+6*c_2*c_35+3*p1.z*c_257))+3*p2.y*p3.y*
        c_50*c_352)+c_101*(-(c_40*(c_3+c_262+c_18+c_356+c_9+c_55))+c_44*(c_22+c_262+c_53+c_21+c_202+c_55)-c_39*p3.y*(c_399+9*p1.z*
        (c_34+c_103)+2*(c_18+c_96+c_97))+c_37*(-3*p2.y*c_50*c_61+p3.y*(c_60+27*p1.z*p2.z+c_174+16*p1.z*p3.z+c_216+c_263))-2*c_6*(-3*
        c_38+c_264+c_121+c_265+c_152+c_266-3*c_43*c_394-9*c_2*c_136+3*c_12*(c_3+c_32+c_66+c_267+c_9+c_97)-3*p1.z*(c_114+c_134+c_135+c_268))-2*
        p2.y*p3.y*(-9*c_38+c_264+16*c_45*p3.z+30*c_4*c_5+40*p2.z*c_47+c_278-9*c_43*c_133-9*c_2*c_288-9*p1.z*(c_45+c_269+c_373+c_374)+5*
        c_12*(c_3+c_4+c_59+c_270+3*p1.z*c_271))+c_12*c_50*(5*c_12*c_273+4*(c_43+c_45+5*c_4*p3.z+15*p2.z*c_5+35*c_47+c_2*
        c_274+p1.z*(c_4+c_9+15*c_5)))+p1.y*(-3*c_39*c_50*c_126-9*c_6*p3.y*c_50*c_172+6*p2.y*c_50*(c_184+c_114+c_134+c_135+c_268-3*c_12*
        c_104+c_276+c_277)+2*p3.y*(c_245-9*c_46-36*c_45*p3.z-90*c_4*c_5-180*p2.z*c_47+c_278+c_43*(-9*p2.z+16*p3.z)+5*c_12*
        (c_2+c_62+c_53+c_70+c_279+c_270)+c_2*(-9*c_4-36*p2.z*p3.z+30*c_5)-p1.z*(9*c_45+36*c_4*p3.z+90*p2.z*c_5-40*c_47)))+c_8*(-9*c_6*c_50*
        c_83-9*p2.y*p3.y*c_50*c_106+2*(c_245-3*c_46-2*c_43*c_281-9*c_45*p3.z-18*c_4*c_5-30*p2.z*c_47+c_266-3*c_2*(c_53+c_202+c_117)+3*
        c_12*(c_20+c_32+c_53+c_21+c_110+c_97)-2*p1.z*(c_282+c_134+18*p2.z*c_5+c_283))))+p1.y*(-15*c_74*c_50*(c_16+c_89+p3.z)-15*c_40*
        p3.y*c_50*c_17+15*c_75*(c_3+c_4+c_94-7*c_5+p1.z*c_287)-18*c_41*(c_368+c_46+c_285+c_370+c_286-35*c_48+c_43*c_287+c_2*c_288+p1.z*
        p2.z*c_288)+8*p3.y*(c_72+3*c_77*p2.z+3*c_80+6*c_79*p3.z+9*c_46*c_5+c_381+15*c_4*c_48+18*p2.z*c_81-35*c_82+3*c_38*c_289+c_43*
        c_290+3*c_2*(c_46+c_291+c_253+c_292+c_293)+3*p1.z*(c_79+c_294+c_376+c_377+c_378-8*c_81))+3*c_6*p3.y*c_50*c_367+3*c_39*c_50*
        (-5*c_12*c_126+6*(c_184+20*c_45+10*c_4*p3.z+c_295+c_47+3*c_2*c_191+2*p1.z*c_372))-3*p2.y*c_50*(5*c_42*c_104-6*c_12*c_297+8*
        (c_375+6*c_79+c_385+c_386+c_387+c_298+c_81+5*c_38*c_29+4*c_43*c_299+3*c_2*c_300+2*p1.z*(c_264+c_285+c_253+c_361+c_48)))))-p2.x*
        (6*c_237*c_6*c_2+12*c_101*c_40*c_2+25*c_73*c_2+9*c_237*p2.y*p3.y*c_2+15*c_101*c_39*p3.y*c_2+c_301-15*c_237*c_12*c_2+9*c_101*
        c_6*c_12*c_2+c_302-6*c_101*p2.y*c_41*c_2+c_303-30*c_101*c_42*c_2+c_304+c_305-15*c_76*c_2-12*c_101*c_6*c_38-18*c_40*c_38-6*c_101*
        p2.y*p3.y*c_38+c_306+18*c_101*c_12*c_38+c_307+c_308+18*c_42*c_38+8*c_6*c_72+c_309-24*c_12*c_72+18*c_237*c_6*p1.z*p2.z+60*
        c_101*c_40*p1.z*p2.z+175*c_73*p1.z*p2.z+18*c_237*p2.y*p3.y*p1.z*p2.z+60*c_101*c_39*p3.y*p1.z*p2.z-90*c_74*p3.y*p1.z*
        p2.z-15*c_237*c_12*p1.z*p2.z+27*c_101*c_6*c_12*p1.z*p2.z-75*c_40*c_12*p1.z*p2.z-12*c_101*p2.y*c_41*p1.z*p2.z-60*c_39*
        c_41*p1.z*p2.z-30*c_101*c_42*p1.z*p2.z-45*c_6*c_42*p1.z*p2.z-30*p2.y*c_75*p1.z*p2.z+c_310-36*c_101*c_6*c_43*p2.z-90*c_40*
        c_43*p2.z-12*c_101*p2.y*p3.y*c_43*p2.z+72*c_39*p3.y*c_43*p2.z+18*c_101*c_12*c_43*p2.z+54*c_6*c_12*c_43*p2.z+36*p2.y*
        c_41*c_43*p2.z+c_311+24*c_6*c_77*p2.z-48*p2.y*p3.y*c_77*p2.z+c_312+30*c_101*c_40*c_4-9*c_237*p2.y*p3.y*c_4+30*c_101*c_39*
        p3.y*c_4+105*c_74*p3.y*c_4-15*c_237*c_12*c_4+18*c_101*c_6*c_12*c_4+75*c_40*c_12*c_4+6*c_101*p2.y*c_41*c_4+50*c_39*c_41*c_4+30*
        c_6*c_42*c_4+15*p2.y*c_75*c_4+5*c_76*c_4-72*c_101*c_6*c_2*c_4-270*c_40*c_2*c_4-18*c_101*p2.y*p3.y*c_2*c_4+180*c_39*p3.y*c_2*
        c_4+18*c_101*c_12*c_2*c_4+108*c_6*c_12*c_2*c_4+54*p2.y*c_41*c_2*c_4+c_313+48*c_6*c_38*c_4-72*p2.y*p3.y*c_38*c_4+c_314-120*
        c_101*c_6*p1.z*c_45-630*c_40*p1.z*c_45-24*c_101*p2.y*p3.y*p1.z*c_45+360*c_39*p3.y*p1.z*c_45+18*c_101*c_12*p1.z*c_45+180*c_6*
        c_12*p1.z*c_45+72*p2.y*c_41*p1.z*c_45+c_315+80*c_6*c_43*c_45-96*p2.y*p3.y*c_43*c_45+c_316+60*c_101*c_6*c_46+30*c_101*p2.y*
        p3.y*c_46-630*c_39*p3.y*c_46+6*c_101*c_12*c_46-270*c_6*c_12*c_46-90*p2.y*c_41*c_46-18*c_42*c_46+120*c_6*c_2*c_46-120*p2.y*
        p3.y*c_2*c_46+c_317+168*c_6*p1.z*c_79-144*p2.y*p3.y*p1.z*c_79+c_318+280*p2.y*p3.y*c_80+40*c_12*c_80+24*c_237*c_6*p1.z*
        p3.z+24*c_101*c_40*p1.z*p3.z+45*c_237*p2.y*p3.y*p1.z*p3.z+45*c_101*c_39*p3.y*p1.z*p3.z-15*c_74*p3.y*p1.z*p3.z-90*c_237*
        c_12*p1.z*p3.z+36*c_101*c_6*c_12*p1.z*p3.z-30*c_40*c_12*p1.z*p3.z-30*c_101*p2.y*c_41*p1.z*p3.z-45*c_39*c_41*p1.z*
        p3.z-180*c_101*c_42*p1.z*p3.z-60*c_6*c_42*p1.z*p3.z-75*p2.y*c_75*p1.z*p3.z-90*c_76*p1.z*p3.z-24*c_101*c_6*c_43*p3.z-18*
        c_101*p2.y*p3.y*c_43*p3.z+18*c_39*p3.y*c_43*p3.z+72*c_101*c_12*c_43*p3.z+36*c_6*c_12*c_43*p3.z+54*p2.y*c_41*c_43*p3.z+72*
        c_42*c_43*p3.z-24*p2.y*p3.y*c_77*p3.z-48*c_12*c_77*p3.z+9*c_237*c_6*p2.z*p3.z+15*c_101*c_40*p2.z*p3.z-175*c_73*p2.z*
        p3.z+24*c_101*c_39*p3.y*p2.z*p3.z-120*c_74*p3.y*p2.z*p3.z-45*c_237*c_12*p2.z*p3.z+18*c_101*c_6*c_12*p2.z*p3.z-75*c_40*
        c_12*p2.z*p3.z+c_319-15*c_101*c_42*p2.z*p3.z-15*c_6*c_42*p2.z*p3.z+5*c_76*p2.z*p3.z-72*c_101*c_6*c_2*p2.z*p3.z-36*c_101*
        p2.y*p3.y*c_2*p2.z*p3.z+72*c_39*p3.y*c_2*p2.z*p3.z+72*c_101*c_12*c_2*p2.z*p3.z+c_320+108*p2.y*c_41*c_2*p2.z*
        p3.z+c_321+c_322+c_323-144*c_101*c_6*p1.z*c_4*p3.z-54*c_101*p2.y*p3.y*p1.z*c_4*p3.z+180*c_39*p3.y*p1.z*c_4*p3.z+72*c_101*c_12*
        p1.z*c_4*p3.z+216*c_6*c_12*p1.z*c_4*p3.z+162*p2.y*c_41*p1.z*c_4*p3.z+c_324-72*p2.y*p3.y*c_43*c_4*p3.z+c_325+60*c_101*
        c_6*c_45*p3.z+630*c_40*c_45*p3.z+48*c_101*p2.y*p3.y*c_45*p3.z+12*c_101*c_12*c_45*p3.z-180*c_6*c_12*c_45*p3.z-144*p2.y*
        c_41*c_45*p3.z-54*c_42*c_45*p3.z-96*p2.y*p3.y*c_2*c_45*p3.z+c_326-120*p2.y*p3.y*p1.z*c_46*p3.z+c_327-168*c_6*c_79*p3.z+192*
        p2.y*p3.y*c_79*p3.z+72*c_12*c_79*p3.z+15*c_237*c_6*c_5+3*c_101*c_40*c_5-25*c_73*c_5+45*c_237*p2.y*p3.y*c_5+6*c_101*c_39*
        p3.y*c_5-45*c_74*p3.y*c_5-60*c_40*c_12*c_5-30*c_101*p2.y*c_41*c_5-70*c_39*c_41*c_5-105*c_101*c_42*c_5-75*c_6*c_42*c_5-75*
        p2.y*c_75*c_5+c_328-36*c_101*c_6*c_2*c_5-36*c_101*p2.y*p3.y*c_2*c_5+18*c_39*p3.y*c_2*c_5+180*c_101*c_12*c_2*c_5+54*c_6*c_12*
        c_2*c_5+108*p2.y*c_41*c_2*c_5+180*c_42*c_2*c_5-24*p2.y*p3.y*c_38*c_5-72*c_12*c_38*c_5-108*c_101*c_6*p1.z*p2.z*c_5-72*c_101*
        p2.y*p3.y*p1.z*p2.z*c_5+72*c_39*p3.y*p1.z*p2.z*c_5+180*c_101*c_12*p1.z*p2.z*c_5+162*c_6*c_12*p1.z*p2.z*c_5+216*p2.y*
        c_41*p1.z*p2.z*c_5+c_329-48*p2.y*p3.y*c_43*p2.z*c_5+c_330+36*c_101*c_6*c_4*c_5+270*c_40*c_4*c_5+36*c_101*p2.y*p3.y*c_4*
        c_5+180*c_39*p3.y*c_4*c_5-108*p2.y*c_41*c_4*c_5-90*c_42*c_4*c_5+c_331+c_332-96*p2.y*p3.y*p1.z*c_45*c_5+c_333-120*c_6*c_46*c_5+120*
        p2.y*p3.y*c_46*c_5+96*c_12*c_46*c_5-48*c_101*c_6*p1.z*c_47-60*c_101*p2.y*p3.y*p1.z*c_47+18*c_39*p3.y*p1.z*c_47+360*
        c_101*c_12*p1.z*c_47+72*c_6*c_12*p1.z*c_47+180*p2.y*c_41*p1.z*c_47+360*c_42*p1.z*c_47-24*p2.y*p3.y*c_43*c_47-96*c_12*c_43*
        c_47+12*c_101*c_6*p2.z*c_47+90*c_40*p2.z*c_47+144*c_39*p3.y*p2.z*c_47-60*c_101*c_12*p2.z*c_47+108*c_6*c_12*p2.z*c_47-90*
        c_42*p2.z*c_47-48*p2.y*p3.y*c_2*p2.z*c_47+c_334-72*p2.y*p3.y*p1.z*c_4*c_47+c_335-80*c_6*c_45*c_47+c_336+112*c_12*c_45*c_47+18*
        c_40*c_48-30*c_101*p2.y*p3.y*c_48+54*c_39*p3.y*c_48-210*c_101*c_12*c_48+90*c_6*c_12*c_48+90*p2.y*c_41*c_48-24*p2.y*p3.y*
        c_2*c_48-120*c_12*c_2*c_48-48*p2.y*p3.y*p1.z*p2.z*c_48+c_337-48*c_6*c_4*c_48+24*p2.y*p3.y*c_4*c_48+120*c_12*c_4*c_48-24*
        p2.y*p3.y*p1.z*c_81-144*c_12*p1.z*c_81-24*c_6*p2.z*c_81+120*c_12*p2.z*c_81-8*c_6*c_82-8*p2.y*p3.y*c_82+c_338+5*c_78*
        (c_242+c_339+c_141+18*p1.z*p3.z+c_19+c_86)+15*c_71*(-(p3.y*c_14*(c_340+p2.z+c_10))+c_424)+3*c_44*(-4*c_101*p1.z*p2.z+30*c_43*
        p2.z-2*c_101*c_4+30*c_2*c_4+18*p1.z*c_45+c_342+4*c_101*p1.z*p3.z-120*c_43*p3.z-c_101*p2.z*p3.z-60*c_2*p2.z*p3.z-24*p1.z*
        c_4*p3.z+c_343+3*c_101*c_5-60*c_2*c_5-24*p1.z*p2.z*c_5-6*c_4*c_5-24*p1.z*c_47-6*p2.z*c_47+c_344-5*c_12*c_14*c_458-5*p2.y*
        p3.y*c_14*c_27+5*c_6*(c_22+c_52+c_19+c_5+c_391))+c_8*(-45*c_42*c_2+180*c_12*c_38-112*c_72-15*c_42*p1.z*p2.z+108*c_12*c_43*
        p2.z-120*c_77*p2.z+54*c_12*c_2*c_4-120*c_38*c_4+c_345-112*c_43*c_45-96*c_2*c_46-72*p1.z*c_79-40*c_80-30*c_42*p1.z*p3.z+144*c_12*
        c_43*p3.z+144*c_77*p3.z+15*c_42*p2.z*p3.z+54*c_12*c_2*p2.z*p3.z+120*c_38*p2.z*p3.z+96*c_43*c_4*p3.z-18*c_12*c_45*
        p3.z+72*c_2*c_45*p3.z+48*p1.z*c_46*p3.z+24*c_79*p3.z+75*c_42*c_5+120*c_38*c_5+c_346+96*c_43*p2.z*c_5-54*c_12*c_4*c_5+72*c_2*
        c_4*c_5+48*p1.z*c_45*c_5+24*c_46*c_5-144*c_12*p1.z*c_47+96*c_43*c_47-108*c_12*p2.z*c_47+72*c_2*p2.z*c_47+48*p1.z*c_4*c_47+24*
        c_45*c_47-180*c_12*c_48+72*c_2*c_48+48*p1.z*p2.z*c_48+24*c_4*c_48+48*p1.z*c_81+24*p2.z*c_81+24*c_82-15*c_39*p3.y*c_14*c_105-3*
        c_237*c_1*c_104+15*c_40*(c_127+c_23+c_115+c_54+c_9+c_5)+3*c_101*(3*c_6*c_347+3*p2.y*p3.y*(c_2+c_348+c_118+c_65+c_349+c_140)-3*
        c_12*(c_3+c_62+2*(c_4+c_33+c_250))+2*c_1*c_297)+3*p2.y*p3.y*c_14*c_352-9*c_6*(5*c_12*c_14*c_83+2*(c_245-15*c_46+c_121+c_148+c_254+c_48+3*
        c_2*p3.z*c_35+c_354+2*p1.z*(-5*c_45+c_123+c_256+c_47))))+c_37*(-15*c_6*p3.y*c_14*c_56+5*c_39*
        (c_242+c_109+c_355+c_356+c_243+c_86)+3*c_101*(-(p3.y*(c_127+c_185+c_128+c_100+c_19+c_357))+p2.y*(c_127+c_358+c_173+c_21+c_349+c_86))+3*p3.y*
        c_14*(-5*c_12*c_426+6*(c_359+c_45+c_360+c_256+c_125+10*c_2*c_11+4*p1.z*c_379))-3*p2.y*(5*c_12*c_14*c_61+6*c_436))+p1.y*(-15*c_40*
        p3.y*c_14*c_17+15*c_74*(c_3-7*c_4+c_94+c_5+p1.z*c_371)+3*c_237*(-(p3.y*(c_20+c_23+c_363+c_110+c_132))+p2.y*
        (c_20+c_173+c_21+c_364+c_97))+3*c_6*p3.y*c_14*c_367-3*c_39*(5*c_12*c_14*c_126+6*(c_368+c_369+20*c_45*p3.z+c_370+c_292+c_48+c_43*c_371+c_2*
        c_372+p1.z*p3.z*c_372))-3*p3.y*c_14*(5*c_42*(c_16+p2.z+c_209)-6*c_12*(c_184+c_45+c_269+c_373+c_374+3*c_2*c_133+2*p1.z*c_288)+8*
        (c_375+c_79+c_294+c_376+c_377+c_378+6*c_81+5*c_38*c_11+4*c_43*c_379+3*c_2*c_380+2*p1.z*(c_46+c_291+c_253+c_292+c_266)))+p2.y*
        (-15*c_42*c_14*c_104+18*c_12*c_14*c_297+8*(c_72-35*c_80+3*c_77*p3.z+18*c_79*p3.z+15*c_46*c_5+c_381+9*c_4*c_48+6*p2.z*c_81+3*
        c_82+c_38*(-3*c_4+c_94+c_86)+c_43*c_384+3*c_2*(-5*c_46+c_285+c_253+c_361+c_48)+3*p1.z*(-8*c_79+c_385+c_386+c_387+c_298+c_81)))+3*
        c_101*(c_39*(c_143+c_109+c_388+c_389+c_186+c_86)+3*c_6*p3.y*(c_20+c_390+c_116+c_140+c_391)-2*p2.y*(c_192-20*c_46-20*c_45*
        p3.z+c_392+c_292+c_393+3*c_2*p3.z*c_394+c_43*(c_84+c_272)+3*c_12*(c_53+c_36+c_250)+p1.z*(c_382+3*c_12*c_1-3*c_4*p3.z+c_124+c_268))-2*
        p3.y*(-4*c_38-8*c_46-15*c_45*p3.z-12*c_4*c_5+c_152+c_395-3*c_2*p2.z*c_394-c_43*(c_13+c_209)-p1.z*(7*c_45+c_206+c_124+c_396)+c_12*
        (c_143+c_128+c_9+c_132+c_397)))))-3*p10_2*(-3*c_107*p3.x*(2*c_12*c_50*c_83-p1.y*p2.y*c_50*c_398+c_8*c_1*c_56-c_6*
        c_14*c_105+p1.y*p3.y*(c_127+c_139+c_141+c_349+c_58)+p2.y*p3.y*(c_2+c_339+c_118+c_54+c_55))+c_194*(-(c_12*c_50*c_105)-p2.y*
        p3.y*(c_399+c_67+c_388+c_21+c_55)+3*c_8*c_423-2*c_6*(c_3+2*p3.z*c_401+p1.z*(c_13+c_103))+p1.y*(p2.y*(c_99+c_296+c_65+c_59+c_5)+p3.y*
        (-12*c_2+c_402+c_363+c_9+c_55)))+p2.x*(c_403-c_40*c_2+c_404-3*c_39*p3.y*c_2-9*c_101*c_12*c_2-3*c_6*c_12*c_2-3*p2.y*
        c_41*c_2-3*c_42*c_2+20*p2.y*p3.y*c_38+20*c_12*c_38+6*c_101*c_6*p1.z*p2.z+c_405+6*c_101*p2.y*p3.y*p1.z*p2.z+4*c_39*p3.y*
        p1.z*p2.z+3*c_101*c_12*p1.z*p2.z+3*c_6*c_12*p1.z*p2.z+2*p2.y*c_41*p1.z*p2.z+c_42*p1.z*p2.z-4*c_6*c_43*p2.z+8*p2.y*
        p3.y*c_43*p2.z+4*c_12*c_43*p2.z-10*c_40*c_4+6*c_101*p2.y*p3.y*c_4+20*c_39*p3.y*c_4+6*c_101*c_12*c_4+12*c_6*c_12*c_4+c_439+c_406-12*
        c_6*c_2*c_4+c_440-6*c_12*c_2*c_4+c_407-40*p2.y*p3.y*p1.z*c_45-10*c_12*p1.z*c_45-20*c_6*c_46-40*p2.y*p3.y*c_46-8*c_12*
        c_46-8*c_40*p1.z*p3.z+c_408-7*c_39*p3.y*p1.z*p3.z+c_409-6*c_6*c_12*p1.z*p3.z-5*p2.y*c_41*p1.z*p3.z+c_410+16*c_6*c_43*
        p3.z+20*p2.y*p3.y*c_43*p3.z+24*c_12*c_43*p3.z-6*c_101*c_6*p2.z*p3.z-20*c_40*p2.z*p3.z-8*c_39*p3.y*p2.z*p3.z+c_411+4*
        p2.y*c_41*p2.z*p3.z+c_412+36*c_6*c_2*p2.z*p3.z+12*p2.y*p3.y*c_2*p2.z*p3.z+48*c_6*p1.z*c_4*p3.z-6*p2.y*p3.y*p1.z*
        c_4*p3.z-12*c_12*p1.z*c_4*p3.z+40*c_6*c_45*p3.z-16*p2.y*p3.y*c_45*p3.z+c_445-6*c_101*c_6*c_5-4*c_40*c_5+c_413+c_446-6*c_6*
        c_12*c_5+c_414+12*c_6*c_2*c_5+c_448+18*c_12*c_2*c_5+c_167+12*p2.y*p3.y*p1.z*p2.z*c_5-6*c_12*p1.z*p2.z*c_5+24*c_6*c_4*c_5-12*
        c_12*c_4*c_5+8*c_6*p1.z*c_47+14*p2.y*p3.y*p1.z*c_47+c_415+c_451+8*p2.y*p3.y*p2.z*c_47+c_416+c_417+c_418+5*c_44*
        (c_454+c_419+p1.z*(p2.z+12*p3.z))-c_8*(c_455+12*c_101*p1.z*p2.z-20*c_43*p2.z+6*c_101*c_4+4*p1.z*c_45+2*c_46-12*c_101*p1.z*p3.z+120*
        c_43*p3.z+c_420+60*c_2*p2.z*p3.z+24*p1.z*c_4*p3.z+c_456-9*c_101*c_5+60*c_2*c_5+24*p1.z*p2.z*c_5+c_148+24*p1.z*
        c_47+c_457+6*c_48+6*p2.y*p3.y*c_50*c_421+c_12*(c_422+c_170+c_173+c_459-9*c_5)+3*c_6*c_423)+2*c_37*(c_424+p3.y*(c_425+c_128+c_9+c_111+c_397))+p1.y*
        (-3*c_6*p3.y*(c_127+c_402+c_390+c_70+c_33+c_55)+3*c_101*(-(p3.y*c_14*c_426)+p2.y*(c_127+c_52+c_113+c_349+c_7))-c_39*
        (c_20+p1.z*(c_362+c_427)+5*(c_66+c_59+c_5))-p3.y*(c_12*(c_460+c_402+c_118+c_203+c_462+c_117)+2*(c_467+8*c_46+c_428+c_148+5*
        p2.z*c_47+c_429+6*c_2*p2.z*c_29-10*c_43*c_11+3*p1.z*(c_430+c_269+c_256+2*c_47)))+p2.y*(-3*c_12*(c_127+c_348+c_118+c_65+c_349+c_5)+2*
        c_436)))+p3.x*(3*c_101*c_6*c_2+3*c_40*c_2+9*c_101*p2.y*p3.y*c_2+3*c_39*p3.y*c_2+6*c_101*c_12*c_2+c_437+3*p2.y*
        c_41*c_2+c_42*c_2-20*c_6*c_38-20*p2.y*p3.y*c_38+2*c_101*c_6*p1.z*p2.z+4*c_40*p1.z*p2.z+5*c_101*p2.y*p3.y*p1.z*p2.z+5*
        c_39*p3.y*p1.z*p2.z+8*c_101*c_12*p1.z*p2.z+6*c_6*c_12*p1.z*p2.z+7*p2.y*c_41*p1.z*p2.z+c_438-24*c_6*c_43*p2.z-20*p2.y*
        p3.y*c_43*p2.z-16*c_12*c_43*p2.z+2*c_101*p2.y*p3.y*c_4+4*c_39*p3.y*c_4+4*c_101*c_12*c_4+6*c_6*c_12*c_4+c_439+4*c_42*c_4-18*
        c_6*c_2*c_4+c_440+c_441-8*c_6*p1.z*c_45-14*p2.y*p3.y*p1.z*c_45-8*c_12*p1.z*c_45-8*p2.y*p3.y*c_46-4*c_12*c_46+c_101*c_6*
        p1.z*p3.z-c_40*p1.z*p3.z+4*c_101*p2.y*p3.y*p1.z*p3.z-2*c_39*p3.y*p1.z*p3.z+10*c_101*c_12*p1.z*p3.z-3*c_6*c_12*p1.z*
        p3.z-4*p2.y*c_41*p1.z*p3.z+5*c_42*p1.z*p3.z-4*c_6*c_43*p3.z-8*p2.y*p3.y*c_43*p3.z+4*c_12*c_43*p3.z-2*c_101*c_6*p2.z*
        p3.z-4*c_40*p2.z*p3.z-4*c_39*p3.y*p2.z*p3.z+20*c_101*c_12*p2.z*p3.z+c_442+20*c_42*p2.z*p3.z+c_443+c_444+6*c_6*p1.z*
        c_4*p3.z-12*p2.y*p3.y*p1.z*c_4*p3.z-24*c_12*p1.z*c_4*p3.z+8*c_6*c_45*p3.z-8*p2.y*p3.y*c_45*p3.z+c_445-4*c_101*c_6*c_5-2*
        c_40*c_5-20*c_101*p2.y*p3.y*c_5+c_446-12*c_6*c_12*c_5-20*p2.y*c_41*c_5+c_447+c_165+c_448+c_449+12*c_6*p1.z*p2.z*c_5+6*
        p2.y*p3.y*p1.z*p2.z*c_5+c_450+12*c_6*c_4*c_5-24*c_12*c_4*c_5+10*c_6*p1.z*c_47+40*p2.y*p3.y*p1.z*c_47+20*c_12*p1.z*
        c_47+c_451+c_452-40*c_12*p2.z*c_47+8*c_6*c_48+40*p2.y*p3.y*c_48+c_453-5*c_44*(c_454+2*p2.z*c_25+p1.z*(12*p2.z+p3.z))+2*c_37*(-(p3.y*
        c_236)+p2.y*(c_422+c_173+c_31+c_117-5*p1.z*c_29))+c_8*(c_455-3*c_101*c_4+3*c_12*c_4+c_342+20*c_43*(c_89+c_0)-9*c_101*p2.z*
        p3.z+9*c_12*p2.z*p3.z+c_456-6*c_101*c_5+6*c_12*c_5+c_148+c_457+2*c_48+60*c_2*p2.z*c_25+6*p2.y*p3.y*c_14*c_458+c_6*(c_422-9*
        c_4+c_100+c_459+c_68)+p1.z*(-6*c_101*c_29+6*c_12*c_29+4*(c_252+c_123+c_124+c_47)))+p1.y*(c_39*(c_460+c_32+c_118+c_461+c_462+c_117)+3*
        c_6*p3.y*(c_127+c_62+c_4+c_178+c_349+c_117)+c_101*(p3.y*(c_143+c_402+c_141+c_186+c_244)+p2.y*(c_460+c_52+c_65+c_31+c_177))+c_41*
        (c_20+p1.z*(15*p2.z+c_284)+5*(c_4+c_59+c_55))-2*p3.y*c_466+p2.y*(3*c_12*(c_127+c_67+c_66+c_461+c_33+c_177)+2*
        (c_467+c_468+5*c_45*p3.z+c_148+c_469+c_470-10*c_43*c_29+6*c_2*p3.z*c_11+3*p1.z*(2*c_45+c_247+c_295+5*c_47)))))))/double(72576);
}

double trig::s62() const{
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p11_4=p1.y*p11_3;
    double p11_5=p1.y*p11_4;
    double p11_6=p1.y*p11_5;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p31_4=p3.y*p31_3;
    double p31_5=p3.y*p31_4;
    double p31_6=p3.y*p31_5;
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p21_4=p2.y*p21_3;
    double p21_5=p2.y*p21_4;
    double p21_6=p2.y*p21_5;
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
    double p20_6=p2.x*p20_5;
    double p10_2=p1.x*p1.x;
    double p10_3=p1.x*p10_2;
    double p10_4=p1.x*p10_3;
    double p10_5=p1.x*p10_4;
    double p10_6=p1.x*p10_5;
    double c_0=5*p3.z;
    double c_1=p11_2;
    double c_2=-p3.z;
    double c_3=p2.z+c_2;
    double c_4=p31_2;
    double c_5=3*p2.z;
    double c_6=p21_2;
    double c_7=5*p1.z;
    double c_8=35*p1.z;
    double c_9=5*p2.z;
    double c_10=3*p3.z;
    double c_11=35*p2.z;
    double c_12=18*p3.z;
    double c_13=p11_3;
    double c_14=p12_3;
    double c_15=p21_3;
    double c_16=p21_4;
    double c_17=p31_3;
    double c_18=p31_4;
    double c_19=p12_2;
    double c_20=p22_2;
    double c_21=p22_3;
    double c_22=p32_2;
    double c_23=p32_3;
    double c_24=-p1.z;
    double c_25=c_24+p3.z;
    double c_26=-(2*p3.z);
    double c_27=2*p1.z;
    double c_28=-5*p1.z;
    double c_29=2*p2.z;
    double c_30=p1.z+p2.z+p3.z;
    double c_31=5*c_1*c_30;
    double c_32=4*p1.z;
    double c_33=6*p1.z;
    double c_34=-p2.z;
    double c_35=p1.z+p2.z+c_26;
    double c_36=p1.z+c_2;
    double c_37=3*p1.z;
    double c_38=c_24+p2.z;
    double c_39=c_4*c_38;
    double c_40=-(2*p2.z);
    double c_41=2*p3.z;
    double c_42=7*p1.z;
    double c_43=p30_2;
    double c_44=-(4*p2.z);
    double c_45=p1.z+c_44+c_10;
    double c_46=7*p2.z;
    double c_47=c_33+c_46+c_0;
    double c_48=-(3*p3.z);
    double c_49=c_27+p2.z+c_48;
    double c_50=-(4*p3.z);
    double c_51=p1.z+c_40+p3.z;
    double c_52=10*c_20;
    double c_53=4*p2.z;
    double c_54=3*c_14;
    double c_55=-(40*c_6*c_14);
    double c_56=-(96*p2.y*p3.y*c_19*p3.z);
    double c_57=240*c_6*p2.z*c_22;
    double c_58=p11_4;
    double c_59=4*p3.z;
    double c_60=p1.z+c_29+c_48;
    double c_61=-(5*p2.z);
    double c_62=3*c_19;
    double c_63=8*p1.z*p2.z;
    double c_64=4*p1.z*p3.z;
    double c_65=8*p2.z*p3.z;
    double c_66=3*c_22;
    double c_67=c_62+c_63+c_52+c_64+c_65+c_66;
    double c_68=9*c_4*c_36;
    double c_69=p12_5;
    double c_70=p21_6;
    double c_71=p21_5;
    double c_72=p31_5;
    double c_73=p31_6;
    double c_74=p12_4;
    double c_75=p22_4;
    double c_76=p22_5;
    double c_77=p32_4;
    double c_78=p32_5;
    double c_79=c_7+c_5+p3.z;
    double c_80=p1.z+c_34;
    double c_81=c_37+c_29+p3.z;
    double c_82=18*p1.z;
    double c_83=18*p2.z;
    double c_84=35*p3.z;
    double c_85=c_32+c_5+c_41;
    double c_86=3*c_21;
    double c_87=6*p3.z;
    double c_88=2*p2.z*p3.z;
    double c_89=-5*c_4;
    double c_90=2*c_19;
    double c_91=-(2*c_23);
    double c_92=6*p2.z;
    double c_93=c_42+c_92+c_0;
    double c_94=5*c_14;
    double c_95=3*c_20;
    double c_96=-c_22;
    double c_97=7*p3.z;
    double c_98=3*p2.z*c_22;
    double c_99=9*p2.z;
    double c_100=12*c_20*p3.z;
    double c_101=30*p2.z*c_22;
    double c_102=p2.z+c_59;
    double c_103=6*p1.z*p2.z*c_102;
    double c_104=5*c_23;
    double c_105=-(5*p3.z);
    double c_106=4*c_20;
    double c_107=-15*c_4;
    double c_108=10*c_22;
    double c_109=8*c_67;
    double c_110=-(35*c_23);
    double c_111=2*c_20;
    double c_112=-(3*c_22);
    double c_113=3*c_20*p3.z;
    double c_114=-(5*c_23);
    double c_115=2*c_75;
    double c_116=3*p2.z*p3.z;
    double c_117=2*c_22;
    double c_118=p2.z+p3.z;
    double c_119=p2.z+c_41;
    double c_120=8*p2.z*c_23;
    double c_121=4*p2.z*p3.z;
    double c_122=48*c_15*p3.y*c_14;
    double c_123=40*c_18*c_21;
    double c_124=p11_6;
    double c_125=-(5*c_70*p3.z);
    double c_126=-(96*c_6*c_74*p3.z);
    double c_127=144*c_6*c_4*c_20*p3.z;
    double c_128=-(288*c_6*c_19*p2.z*c_22);
    double c_129=-(240*c_6*c_4*c_23);
    double c_130=288*c_6*c_20*c_23;
    double c_131=p11_5;
    double c_132=p3.y*c_35;
    double c_133=-c_132;
    double c_134=p30_4;
    double c_135=-(6*p3.z);
    double c_136=p1.z+c_9+c_135;
    double c_137=c_1*c_3;
    double c_138=c_27+p2.z+c_10;
    double c_139=c_33+c_9+c_97;
    double c_140=-(3*p2.z);
    double c_141=c_27+c_140+p3.z;
    double c_142=10*c_19;
    double c_143=8*p1.z*c_118;
    double c_144=c_142+c_95+c_121+c_66+c_143;
    double c_145=2*p1.z*c_118;
    double c_146=c_19+c_111+c_116+c_117+c_145;
    double c_147=4*c_14;
    double c_148=-(10*c_23);
    double c_149=p2.z*p3.z;
    double c_150=5*c_74;
    double c_151=5*c_75;
    double c_152=8*c_21*p3.z;
    double c_153=9*c_20*c_22;
    double c_154=5*c_77;
    double c_155=8*c_14*c_118;
    double c_156=c_95+c_121+c_66;
    double c_157=3*c_19*c_156;
    double c_158=2*c_21;
    double c_159=2*c_23;
    double c_160=c_158+c_113+c_98+c_159;
    double c_161=4*p1.z*c_160;
    double c_162=c_150+c_151+c_152+c_153+c_120+c_154+c_155+c_157+c_161;
    double c_163=c_37+p2.z+c_50;
    double c_164=2*c_20*p3.z;
    double c_165=-(12*c_23);
    double c_166=10*c_14;
    double c_167=-(12*c_21);
    double c_168=-(3*c_20*p3.z);
    double c_169=-15*c_20;
    double c_170=7*c_22;
    double c_171=9*c_58*c_3;
    double c_172=c_32+p2.z+c_97;
    double c_173=p1.z+c_5+c_50;
    double c_174=p2.y*c_51;
    double c_175=p2.z+c_0;
    double c_176=5*p2.z*p3.z;
    double c_177=15*c_22;
    double c_178=c_20+c_176+c_177;
    double c_179=-(7*c_23);
    double c_180=c_21+c_113+c_98+c_179;
    double c_181=6*c_19*c_119;
    double c_182=c_95+c_65+c_108;
    double c_183=3*p1.z*c_182;
    double c_184=p1.z+c_140+c_41;
    double c_185=4*p1.z*c_119;
    double c_186=c_62+c_95+c_65+c_108+c_185;
    double c_187=c_32+c_5+c_0;
    double c_188=c_37+c_44+p3.z;
    double c_189=-(6*p2.z);
    double c_190=p1.z+c_189+c_0;
    double c_191=7*c_20;
    double c_192=12*p2.z*p3.z;
    double c_193=-(60*c_23);
    double c_194=-(4*c_20*c_23);
    double c_195=5*c_20;
    double c_196=6*p2.z*p3.z;
    double c_197=6*c_20*p3.z;
    double c_198=6*c_21*p3.z;
    double c_199=-(15*c_77);
    double c_200=-(4*c_20*p3.z);
    double c_201=-2*c_20;
    double c_202=9*c_14;
    double c_203=-(60*c_21);
    double c_204=3*c_23;
    double c_205=5*c_22;
    double c_206=-(4*p2.z*c_22);
    double c_207=-(2*c_22);
    double c_208=5*c_69;
    double c_209=6*p2.z*c_22;
    double c_210=3*c_20*c_22;
    double c_211=p20_2;
    double c_212=p3.y*c_80;
    double c_213=p1.y*c_3;
    double c_214=p2.y*c_25;
    double c_215=c_212+c_213+c_214;
    double c_216=p20_3;
    double c_217=c_42+c_9+c_87;
    double c_218=-(9*c_15*p3.y*p2.z);
    double c_219=240*p2.y*p3.y*c_19*p2.z;
    double c_220=72*p2.y*p3.y*c_21;
    double c_221=9*c_16*p3.z;
    double c_222=-(72*c_6*c_20*p3.z);
    double c_223=-4*p1.z;
    double c_224=c_7+c_92+c_97;
    double c_225=c_7+p2.z+c_135;
    double c_226=6*c_21;
    double c_227=c_92+p3.z;
    double c_228=-(9*p3.z);
    double c_229=30*c_19*p2.z;
    double c_230=9*p2.z*c_22;
    double c_231=9*c_23;
    double c_232=45*c_43*c_4*p1.z;
    double c_233=9*c_18*p1.z;
    double c_234=-(9*c_18*p2.z);
    double c_235=c_27+c_34+c_2;
    double c_236=9*p2.y*c_17*p3.z;
    double c_237=-(240*p2.y*p3.y*c_19*p3.z);
    double c_238=-(72*c_4*p1.z*c_22);
    double c_239=72*c_4*p2.z*c_22;
    double c_240=-(72*p2.y*p3.y*c_23);
    double c_241=40*c_21;
    double c_242=c_7+c_189+p3.z;
    double c_243=p2.z+c_87;
    double c_244=-(9*p2.z);
    double c_245=c_223+p2.z+c_10;
    double c_246=-60*c_14;
    double c_247=9*c_21;
    double c_248=20*c_14;
    double c_249=9*c_20*p3.z;
    double c_250=-(48*p2.y*c_17*c_14);
    double c_251=5*c_73*p2.z;
    double c_252=96*c_4*c_74*p2.z;
    double c_253=240*c_6*c_4*c_21;
    double c_254=80*p2.y*c_17*c_21;
    double c_255=288*c_4*c_19*c_20*p3.z;
    double c_256=-(144*c_6*c_4*p2.z*c_22);
    double c_257=-(288*c_4*c_21*c_22);
    double c_258=-(40*c_16*c_23);
    double c_259=-(80*c_15*p3.y*c_23);
    double c_260=c_7+p2.z+c_10;
    double c_261=p3.y*c_25;
    double c_262=c_37+p2.z+c_41;
    double c_263=192*p1.z*p2.z*p3.z;
    double c_264=48*p2.z*c_22;
    double c_265=24*c_23;
    double c_266=c_32+c_29+c_10;
    double c_267=-(48*c_4*c_14);
    double c_268=48*c_4*p2.z*c_22;
    double c_269=3*p1.z*p2.z;
    double c_270=2*p1.z*p3.z;
    double c_271=c_90+c_269+c_111+c_270+c_88+c_22;
    double c_272=15*c_4*c_36;
    double c_273=-(10*c_21);
    double c_274=30*c_20*p3.z;
    double c_275=p3.y*c_60;
    double c_276=-c_275;
    double c_277=8*c_144;
    double c_278=-(5*c_21);
    double c_279=c_7+c_46+c_87;
    double c_280=p2.y*c_184;
    double c_281=10*p2.z*p3.z;
    double c_282=16*c_162;
    double c_283=5*c_21;
    double c_284=-(3*p2.z*c_22);
    double c_285=c_37+c_29+c_105;
    double c_286=c_37+c_61+c_41;
    double c_287=4*c_21;
    double c_288=c_29+p3.z;
    double c_289=c_19*c_288;
    double c_290=c_95+c_88+c_207;
    double c_291=p1.z*c_290;
    double c_292=c_14+c_287+c_113+c_206+c_148+c_289+c_291;
    double c_293=4*c_23;
    double c_294=c_19*c_119;
    double c_295=c_201+c_88+c_66;
    double c_296=p1.z*c_295;
    double c_297=c_14+c_273+c_200+c_98+c_293+c_294+c_296;
    double c_298=-(15*c_6*c_18*p2.z);
    double c_299=96*p2.y*c_17*p1.z*c_20;
    double c_300=-(240*c_6*p1.z*c_75);
    double c_301=-(48*c_4*c_76);
    double c_302=15*c_16*c_4*p3.z;
    double c_303=240*c_6*c_75*p3.z;
    double c_304=-(96*c_15*p3.y*p1.z*c_22);
    double c_305=240*c_4*p1.z*c_77;
    double c_306=-(240*c_4*p2.z*c_77);
    double c_307=48*c_6*c_78;
    double c_308=2*p3.y;
    double c_309=p20_4;
    double c_310=c_32+c_61+p3.z;
    double c_311=c_32+p2.z+c_105;
    double c_312=c_6*c_25;
    double c_313=-3*p1.z;
    double c_314=3*p1.y;
    double c_315=p2.y+p3.y;
    double c_316=2*p1.z*p2.z;
    double c_317=3*p1.z*p3.z;
    double c_318=c_90+c_316+c_20+c_317+c_88+c_117;
    double c_319=-(9*c_6*c_4*p1.z);
    double c_320=-(24*c_4*p1.z*c_20);
    double c_321=-(15*c_43*p2.y*p3.y*p3.z);
    double c_322=48*c_4*c_19*p3.z;
    double c_323=48*p2.y*p3.y*p1.z*p2.z*p3.z;
    double c_324=240*c_6*c_20*p3.z;
    double c_325=-(48*c_4*c_20*p3.z);
    double c_326=24*c_4*p1.z*c_22;
    double c_327=15*c_43*p2.z;
    double c_328=c_32+c_140+c_2;
    double c_329=-(15*c_43*p3.z);
    double c_330=240*c_19*p3.z;
    double c_331=72*c_20*p3.z;
    double c_332=96*p1.z*c_22;
    double c_333=c_7+c_5+c_59;
    double c_334=c_37+c_9+c_59;
    double c_335=p2.y*c_80;
    double c_336=2*p2.z*c_22;
    double c_337=p1.z+c_29+c_10;
    double c_338=c_7+c_140+c_26;
    double c_339=c_7+c_53+c_10;
    double c_340=c_99+c_87;
    double c_341=c_19*c_340;
    double c_342=c_147+c_86+c_100+c_101+c_148+c_103+c_341;
    double c_343=8*c_4*c_342;
    double c_344=c_27+c_5+c_105;
    double c_345=c_20*p3.z;
    double c_346=-(2*p2.z*c_22);
    double c_347=3*c_19*c_118;
    double c_348=c_20+c_149+c_207;
    double c_349=2*p1.z*c_348;
    double c_350=c_147+c_21+c_345+c_346+c_148+c_347+c_349;
    double c_351=c_32+c_34+c_48;
    double c_352=-10*c_14;
    double c_353=c_37+c_53+c_0;
    double c_354=p20_5;
    double c_355=p1.z+c_5+c_41;
    double c_356=2*p1.y;
    double c_357=3*p2.y;
    double c_358=4*p3.y;
    double c_359=4*c_17;
    double c_360=-(15*c_43*p2.y*p3.y*p1.z);
    double c_361=-(9*c_18*p1.z);
    double c_362=-(315*c_16*p2.z);
    double c_363=90*c_6*c_4*p2.z;
    double c_364=9*c_18*p2.z;
    double c_365=-(560*c_6*c_21);
    double c_366=96*c_6*c_19*p3.z;
    double c_367=480*c_6*p1.z*p2.z*p3.z;
    double c_368=96*c_4*p1.z*p2.z*p3.z;
    double c_369=96*c_6*p1.z*c_22;
    double c_370=p3.y*c_245;
    double c_371=9*p1.z;
    double c_372=c_313+p2.z+c_41;
    double c_373=9*p2.z*p3.z;
    double c_374=18*c_20*p3.z;
    double c_375=-2*p1.z;
    double c_376=c_375+p2.z+p3.z;
    double c_377=-(10*c_20*p3.z);
    double c_378=-(2*p2.z*p3.z);
    double c_379=c_37+c_40+c_2;
    double c_380=12*p2.z*c_22;
    double c_381=c_53+p3.z;
    double c_382=6*p1.z*p3.z*c_381;
    double c_383=9*p3.z;
    double c_384=5*c_70*p1.z;
    double c_385=75*c_134*c_4*p1.z;
    double c_386=90*c_43*c_18*p1.z;
    double c_387=15*c_73*p1.z;
    double c_388=40*c_16*c_14;
    double c_389=-(72*c_6*c_4*c_14);
    double c_390=-(48*c_6*c_69);
    double c_391=-(75*c_16*c_4*p2.z);
    double c_392=-(15*c_73*p2.z);
    double c_393=288*c_43*c_6*c_19*p2.z;
    double c_394=288*p2.y*p3.y*c_74*p2.z;
    double c_395=144*c_6*c_4*p1.z*c_20;
    double c_396=-(288*c_6*c_14*c_20);
    double c_397=75*c_71*p3.y*p3.z;
    double c_398=90*c_43*p2.y*c_17*p3.z;
    double c_399=15*p2.y*c_72*p3.z;
    double c_400=144*c_43*c_6*c_19*p3.z;
    double c_401=-(144*c_6*c_4*c_19*p3.z);
    double c_402=240*p2.y*p3.y*c_74*p3.z;
    double c_403=288*p2.y*p3.y*c_14*p2.z*p3.z;
    double c_404=192*c_4*c_14*p2.z*p3.z;
    double c_405=-(240*c_15*p3.y*c_20*p3.z);
    double c_406=-(192*p2.y*p3.y*p1.z*c_21*p3.z);
    double c_407=-(192*c_4*p1.z*c_21*p3.z);
    double c_408=-(720*p2.y*p3.y*c_75*p3.z);
    double c_409=-(720*c_43*c_4*p1.z*c_22);
    double c_410=-(216*c_6*c_4*p1.z*c_22);
    double c_411=-(240*c_18*p1.z*c_22);
    double c_412=240*c_18*p2.z*c_22;
    double c_413=288*c_6*c_19*p2.z*c_22;
    double c_414=288*p2.y*p3.y*c_19*p2.z*c_22;
    double c_415=-(240*p2.y*c_17*c_23);
    double c_416=288*p2.y*p3.y*p1.z*p2.z*c_23;
    double c_417=96*c_6*p1.z*c_77;
    double c_418=240*p2.y*p3.y*c_78;
    double c_419=c_8+p2.z+c_12;
    double c_420=c_27+p3.z;
    double c_421=-6*p1.z;
    double c_422=c_7+c_40+c_48;
    double c_423=-(240*c_4*c_14);
    double c_424=-(48*c_4*c_19*p2.z);
    double c_425=24*c_4*c_21;
    double c_426=96*c_19*c_21;
    double c_427=5*c_19;
    double c_428=c_427+c_63+c_195;
    double c_429=48*c_4*c_20*p3.z;
    double c_430=72*c_4*p1.z*c_22;
    double c_431=-(96*p1.z*c_20*c_22);
    double c_432=-(32*p2.z*c_77);
    double c_433=c_95+c_88+c_22;
    double c_434=-(8*c_21);
    double c_435=30*c_19*p3.z;
    double c_436=c_20+c_378+c_96;
    double c_437=-(12*p1.z*c_436);
    double c_438=c_248+c_434+c_435+c_249+c_209+c_204+c_437;
    double c_439=-(10*c_19*c_3);
    double c_440=5*c_20*p3.z;
    double c_441=7*p2.z*c_22;
    double c_442=c_20+c_116+c_205;
    double c_443=4*p1.z*c_442;
    double c_444=c_246+c_86+c_439+c_440+c_441+c_231+c_443;
    double c_445=c_27+c_61+c_10;
    double c_446=24*c_271;
    double c_447=c_89+c_446;
    double c_448=-8*c_14;
    double c_449=20*c_21;
    double c_450=-12*p2.z;
    double c_451=c_450+c_383;
    double c_452=c_19*c_451;
    double c_453=c_448+c_449+c_274+c_380+c_204+c_382+c_452;
    double c_454=8*c_453;
    double c_455=c_421+p2.z+c_0;
    double c_456=-(2*c_20*p3.z);
    double c_457=p2.z*c_22;
    double c_458=c_201+c_149+c_22;
    double c_459=12*c_14;
    double c_460=-(10*p2.z*c_22);
    double c_461=-15*c_70*p1.z;
    double c_462=-(5*c_73*p1.z);
    double c_463=72*c_6*c_4*c_14;
    double c_464=-(40*c_18*c_14);
    double c_465=48*c_4*c_69;
    double c_466=-(15*c_71*p3.y*p2.z);
    double c_467=-(75*p2.y*c_72*p2.z);
    double c_468=144*c_6*c_4*c_19*p2.z;
    double c_469=-(240*p2.y*p3.y*c_74*p2.z);
    double c_470=240*c_16*p1.z*c_20;
    double c_471=240*c_15*p3.y*p1.z*c_20;
    double c_472=216*c_6*c_4*p1.z*c_20;
    double c_473=240*c_15*p3.y*c_21;
    double c_474=-(96*c_4*p1.z*c_75);
    double c_475=-(240*p2.y*p3.y*c_76);
    double c_476=15*c_70*p3.z;
    double c_477=75*c_6*c_18*p3.z;
    double c_478=-(288*p2.y*p3.y*c_74*p3.z);
    double c_479=-(192*c_6*c_14*p2.z*p3.z);
    double c_480=-(288*p2.y*p3.y*c_14*p2.z*p3.z);
    double c_481=-(240*c_16*c_20*p3.z);
    double c_482=-(288*p2.y*p3.y*c_19*c_20*p3.z);
    double c_483=-(288*c_4*c_19*c_20*p3.z);
    double c_484=-(288*p2.y*p3.y*p1.z*c_21*p3.z);
    double c_485=-(144*c_6*c_4*p1.z*c_22);
    double c_486=-(240*p2.y*c_17*p1.z*c_22);
    double c_487=288*c_4*c_14*c_22;
    double c_488=240*p2.y*c_17*p2.z*c_22;
    double c_489=192*c_6*p1.z*p2.z*c_23;
    double c_490=192*p2.y*p3.y*p1.z*p2.z*c_23;
    double c_491=720*p2.y*p3.y*p2.z*c_77;
    double c_492=c_8+c_83+p3.z;
    double c_493=c_27+p2.z;
    double c_494=c_421+c_9+p3.z;
    double c_495=c_28+c_53+p3.z;
    double c_496=3*c_19*p3.z;
    double c_497=-(3*p1.z*c_22);
    double c_498=c_94+c_496+c_497+c_114;
    double c_499=-240*c_14;
    double c_500=48*c_20*p3.z;
    double c_501=c_20+c_88+c_66;
    double c_502=-(2*c_76);
    double c_503=-(2*c_75*p3.z);
    double c_504=-2*p2.z;
    double c_505=-c_23;
    double c_506=-(2*c_19*c_288);
    double c_507=p1.z*c_433;
    double c_508=c_352+c_287+c_113+c_336+c_23+c_506+c_507;
    double c_509=8*c_508;
    double c_510=-(8*c_23);
    double c_511=c_20+c_88+c_96;
    double c_512=12*p1.z*c_511;
    double c_513=c_248+c_229+c_86+c_197+c_230+c_510+c_512;
    double c_514=10*c_19*c_3;
    double c_515=7*c_20*p3.z;
    double c_516=5*p2.z*c_22;
    double c_517=c_195+c_116+c_22;
    double c_518=4*p1.z*c_517;
    double c_519=c_246+c_247+c_514+c_515+c_516+c_204+c_518;
    double c_520=c_9+p3.z;
    double c_521=c_106+c_378+c_207;
    double c_522=32*c_14;
    double c_523=30*c_69;
    double c_524=15*c_74*c_118;
    double c_525=c_20+c_149+c_22;
    double c_526=4*c_14*c_525;
    double c_527=c_21+c_345+c_457+c_23;
    double c_528=-(3*c_19*c_527);
    double c_529=c_21*p3.z;
    double c_530=c_20*c_22;
    double c_531=p2.z*c_23;
    double c_532=c_75+c_529+c_530+c_531+c_77;
    double c_533=-(6*p1.z*c_532);
    double c_534=c_75*p3.z;
    double c_535=c_21*c_22;
    double c_536=c_20*c_23;
    double c_537=p2.z*c_77;
    double c_538=c_76+c_534+c_535+c_536+c_537+c_78;
    double c_539=-(5*c_538);
    double c_540=c_523+c_524+c_526+c_528+c_533+c_539;
    double c_541=16*c_540;
    double c_542=p1.z+c_53+c_97;
    double c_543=c_223+c_5+p3.z;
    double c_544=90*p2.z*c_22;
    double c_545=c_29+c_0;
    double c_546=3*c_19*c_545;
    double c_547=c_111+c_281+c_205;
    double c_548=3*p1.z*c_547;
    double c_549=c_94+c_226+c_274+c_544+c_110+c_546+c_548;
    double c_550=4*p1.z*p2.z;
    double c_551=8*p1.z*p3.z;
    double c_552=c_62+c_550+c_95+c_551+c_65+c_108;
    double c_553=4*c_20*p3.z;
    double c_554=20*p3.z;
    double c_555=c_46+c_554;
    double c_556=c_19*c_555;
    double c_557=c_195+c_192+c_108;
    double c_558=p1.z*c_557;
    double c_559=c_202+c_86+c_553+c_460+c_193+c_556+c_558;
    double c_560=c_313+c_29+p3.z;
    double c_561=-(3*c_21);
    double c_562=c_37+c_34+c_26;
    double c_563=c_33+c_34+c_105;
    double c_564=10*p2.z*c_22;
    double c_565=10*c_23;
    return (15*c_354*p3.x*(4*p2.y*p3.y*(p1.z+c_29)+p1.y*p3.y*c_35+c_137+c_4*(c_27+c_5+p3.z)-p1.y*p2.y*c_190-c_6*c_47)-5*
        p10_6*(14*c_1*c_3+3*p2.y*p3.y*c_3+c_4*c_79+p1.y*p3.y*c_492-c_6*c_260-p1.y*p2.y*c_419)-5*p20_6*(-14*c_6*c_36+3*p1.y*p3.y*
        c_25-c_4*(c_37+c_9+p3.z)-p2.y*p3.y*(c_82+c_11+p3.z)+c_1*(p1.z+c_9+c_10)+p1.y*p2.y*(p1.z+c_11+c_12))+p10_4*(315*c_13*p2.y*
        p1.z+135*c_1*c_6*p1.z+45*p1.y*c_15*p1.z+9*c_16*p1.z-315*c_13*p3.y*p1.z-135*c_1*c_4*p1.z-45*p1.y*c_17*p1.z+c_361-280*
        p1.y*p2.y*c_14+c_55+280*p1.y*p3.y*c_14+40*c_4*c_14+45*c_13*p2.y*p2.z+45*c_1*c_6*p2.z+27*p1.y*c_15*p2.z+9*c_16*p2.z-180*
        c_13*p3.y*p2.z-90*c_1*p2.y*p3.y*p2.z-36*p1.y*c_6*p3.y*p2.z+c_218-90*c_1*c_4*p2.z-36*p1.y*p2.y*c_4*p2.z-9*c_6*c_4*
        p2.z-36*p1.y*c_17*p2.z-9*p2.y*c_17*p2.z+c_234+840*c_1*c_19*p2.z+120*p1.y*p2.y*c_19*p2.z+1440*p1.y*p3.y*c_19*p2.z+c_219+240*
        c_4*c_19*p2.z+240*c_1*p1.z*c_20+120*p1.y*p2.y*p1.z*c_20+24*c_6*p1.z*c_20+480*p1.y*p3.y*p1.z*c_20+192*p2.y*p3.y*
        p1.z*c_20+96*c_4*p1.z*c_20+40*c_1*c_21+40*p1.y*p2.y*c_21+16*c_6*c_21+96*p1.y*p3.y*c_21+c_220+c_425+180*c_13*p2.y*p3.z+90*
        c_1*c_6*p3.z+36*p1.y*c_15*p3.z+c_221-45*c_13*p3.y*p3.z+90*c_1*p2.y*p3.y*p3.z+36*p1.y*c_6*p3.y*p3.z+9*c_15*p3.y*
        p3.z-45*c_1*c_4*p3.z+36*p1.y*p2.y*c_4*p3.z+9*c_6*c_4*p3.z-27*p1.y*c_17*p3.z+c_236-9*c_18*p3.z-840*c_1*c_19*p3.z-1440*p1.y*
        p2.y*c_19*p3.z-240*c_6*c_19*p3.z-120*p1.y*p3.y*c_19*p3.z+c_237-480*p1.y*p2.y*p1.z*p2.z*p3.z-192*c_6*p1.z*p2.z*
        p3.z+480*p1.y*p3.y*p1.z*p2.z*p3.z+192*c_4*p1.z*p2.z*p3.z-96*p1.y*p2.y*c_20*p3.z+c_222+96*p1.y*p3.y*c_20*p3.z+24*p2.y*
        p3.y*c_20*p3.z+c_429-240*c_1*p1.z*c_22-480*p1.y*p2.y*p1.z*c_22-96*c_6*p1.z*c_22-120*p1.y*p3.y*p1.z*c_22-192*p2.y*
        p3.y*p1.z*c_22-24*c_4*p1.z*c_22-96*p1.y*p2.y*p2.z*c_22-48*c_6*p2.z*c_22+96*p1.y*p3.y*p2.z*c_22-24*p2.y*p3.y*p2.z*
        c_22+c_239-40*c_1*c_23-96*p1.y*p2.y*c_23-24*c_6*c_23-40*p1.y*p3.y*c_23+c_240-16*c_4*c_23+15*p2.x*p3.x*(5*p1.y+2*c_315)*c_215-15*
        c_211*(c_39+p1.y*p2.y*(c_28+p2.z+c_26)-p2.y*p3.y*c_141+c_31+p1.y*p3.y*c_495-c_6*c_266)+15*c_43*(-(p2.y*p3.y*
        c_49)+c_312+p1.y*p3.y*(c_28+c_40+p3.z)+c_31-c_4*c_85+p1.y*p2.y*(c_28+p2.z+c_59)))-15*p10_5*(p3.x*(4*p1.y*p3.y*c_493+p1.y*
        p2.y*c_563+p2.y*p3.y*c_35+c_6*c_36+c_4*c_81-c_1*c_93)+p2.x*(c_39-4*p1.y*p2.y*c_420-p2.y*p3.y*c_51+p1.y*p3.y*c_494-c_6*
        c_262+c_1*c_217))+c_216*p3.x*(-180*c_16*p1.z+72*c_6*c_4*p1.z+72*p2.y*c_17*p1.z+36*c_18*p1.z+96*c_6*c_14-48*p2.y*p3.y*
        c_14+c_267+c_362+c_363+72*p2.y*c_17*p2.z+27*c_18*p2.z+480*c_6*c_19*p2.z-192*p2.y*p3.y*c_19*p2.z-144*c_4*c_19*p2.z+1440*c_6*
        p1.z*c_20-480*p2.y*p3.y*p1.z*c_20-288*c_4*p1.z*c_20+c_365-320*p2.y*p3.y*c_21-80*c_4*c_21+c_171-45*c_16*p3.z+54*c_6*c_4*
        p3.z+72*p2.y*c_17*p3.z+45*c_18*p3.z+c_366+c_56-144*c_4*c_19*p3.z+c_367-384*p2.y*p3.y*p1.z*p2.z*p3.z-432*c_4*p1.z*p2.z*
        p3.z+c_324+c_325+c_369-144*p2.y*p3.y*p1.z*c_22-288*c_4*p1.z*c_22+c_57+192*p2.y*p3.y*p2.z*c_22+c_268+80*c_6*c_23+128*p2.y*
        p3.y*c_23+80*c_4*c_23-9*c_13*(c_133+p2.y*c_45)+5*c_43*(3*p1.y*p3.y*c_173+3*c_1*c_3+8*p2.y*p3.y*c_3-3*p1.y*p2.y*c_45+2*
        c_4*c_47-2*c_6*c_139)-3*c_1*(-3*c_4*c_49-6*p2.y*p3.y*c_60+6*c_6*c_445+8*c_3*c_67)-3*p1.y*(-6*c_6*p3.y*c_136-3*c_17*c_163+30*
        c_15*c_51+8*p3.y*(c_54+10*c_21+c_200-15*p2.z*c_22+c_165+c_19*(c_46+c_41)+p1.z*(c_52+c_88+c_112))-p2.y*(3*c_4*(c_7+c_53+c_228)+8*
        (c_54+c_203+10*c_20*p3.z+20*p2.z*c_22+c_231+c_19*(c_53+c_0)+p1.z*(-10*c_20+c_192+c_170)))))+c_309*(-75*c_43*c_6*p1.z+30*
        c_43*p2.y*p3.y*p1.z+180*c_15*p3.y*p1.z+c_232+90*c_6*c_4*p1.z+36*p2.y*c_17*p1.z+c_233+c_55-96*p2.y*p3.y*c_14-24*c_4*
        c_14-75*c_43*c_6*p2.z+75*c_43*p2.y*p3.y*p2.z+315*c_15*p3.y*p2.z+60*c_43*c_4*p2.z+135*c_6*c_4*p2.z+45*p2.y*c_17*p2.z+c_364-240*
        c_6*c_19*p2.z-480*p2.y*p3.y*c_19*p2.z-96*c_4*c_19*p2.z-840*c_6*p1.z*c_20-1440*p2.y*p3.y*p1.z*c_20-240*c_4*p1.z*
        c_20-280*p2.y*p3.y*c_21-40*c_4*c_21-75*c_43*c_6*p3.z+c_321+45*c_15*p3.y*p3.z+30*c_43*c_4*p3.z+45*c_6*c_4*p3.z+27*p2.y*
        c_17*p3.z+9*c_18*p3.z+c_56-48*c_4*c_19*p3.z-480*p2.y*p3.y*p1.z*p2.z*p3.z-192*c_4*p1.z*p2.z*p3.z+840*c_6*c_20*p3.z+120*
        p2.y*p3.y*c_20*p3.z-96*p2.y*p3.y*p1.z*c_22+c_238+c_57+120*p2.y*p3.y*p2.z*c_22+24*c_4*p2.z*c_22+40*c_6*c_23+40*p2.y*
        p3.y*c_23+16*c_4*c_23-9*c_58*c_30+c_1*(-16*c_14+c_327-24*c_19*p2.z+c_241+36*p2.y*p3.y*c_36+c_68+c_329+72*c_19*p3.z+c_263+240*
        c_20*p3.z+48*p1.z*c_22+96*p2.z*c_22+c_265-45*c_6*c_355)-9*c_13*(c_261+p2.y*c_334)+p1.y*(90*c_6*p3.y*c_36-45*c_15*
        (p1.z+c_46+c_59)-15*c_43*(c_276+p2.y*(p1.z+c_61+c_59))-3*p3.y*c_36*(-3*c_4+c_109)+4*p2.y*(c_68+2*(-5*c_14+35*c_21-3*c_19*(c_9+c_50)+180*
        c_20*p3.z+60*p2.z*c_22+12*c_23+p1.z*(c_169+60*p2.z*p3.z+12*c_22)))))+c_43*(c_461-30*c_71*p3.y*p1.z-45*c_16*c_4*
        p1.z-60*c_15*c_17*p1.z-75*c_6*c_18*p1.z-90*p2.y*c_72*p1.z+70*c_73*p1.z+24*c_16*c_14+c_122+c_463+96*p2.y*c_17*c_14+c_464+c_390-96*
        p2.y*p3.y*c_69-25*c_70*p2.z-45*c_71*p3.y*p2.z-60*c_16*c_4*p2.z-70*c_15*c_17*p2.z-75*c_6*c_18*p2.z+c_467-70*c_73*
        p2.z+96*c_16*c_19*p2.z+144*c_15*p3.y*c_19*p2.z+c_468+96*p2.y*c_17*c_19*p2.z-96*c_6*c_74*p2.z-96*p2.y*p3.y*c_74*p2.z+c_470+288*
        c_15*p3.y*p1.z*c_20+c_472+c_299-144*c_6*c_14*c_20-96*p2.y*p3.y*c_14*c_20+40*c_16*c_21+80*c_15*p3.y*c_21+96*c_6*c_4*
        c_21+c_254+c_123-192*c_6*c_19*c_21-96*p2.y*p3.y*c_19*c_21+c_300-96*p2.y*p3.y*p1.z*c_75+144*c_6*c_76+48*p2.y*p3.y*c_76+c_125-15*
        c_71*p3.y*p3.z-30*c_16*c_4*p3.z-50*c_15*c_17*p3.z-75*c_6*c_18*p3.z-105*p2.y*c_72*p3.z+48*c_16*c_19*p3.z+144*c_15*
        p3.y*c_19*p3.z+288*c_6*c_4*c_19*p3.z+480*p2.y*c_17*c_19*p3.z-240*c_18*c_19*p3.z+c_126+c_478+192*c_16*p1.z*p2.z*p3.z+432*
        c_15*p3.y*p1.z*p2.z*p3.z+576*c_6*c_4*p1.z*p2.z*p3.z+480*p2.y*c_17*p1.z*p2.z*p3.z+c_479+c_480+48*c_15*p3.y*c_20*
        p3.z+c_127+240*p2.y*c_17*c_20*p3.z+240*c_18*c_20*p3.z-288*c_6*c_19*c_20*p3.z+c_482-384*c_6*p1.z*c_21*p3.z+c_484+c_303+144*p2.y*
        p3.y*c_75*p3.z+72*c_16*p1.z*c_22+288*c_15*p3.y*p1.z*c_22+720*c_6*c_4*p1.z*c_22+1440*p2.y*c_17*p1.z*c_22-840*c_18*p1.z*
        c_22-144*c_6*c_14*c_22-576*p2.y*p3.y*c_14*c_22-24*c_16*p2.z*c_22-48*c_15*p3.y*p2.z*c_22+c_488+840*c_18*p2.z*c_22+c_128-576*
        p2.y*p3.y*c_19*p2.z*c_22-432*c_6*p1.z*c_20*c_22-576*p2.y*p3.y*p1.z*c_20*c_22+288*c_6*c_21*c_22+288*p2.y*p3.y*c_21*
        c_22-16*c_16*c_23+c_259+c_129-560*p2.y*c_17*c_23-192*c_6*c_19*c_23-960*p2.y*p3.y*c_19*c_23-384*c_6*p1.z*p2.z*c_23-960*p2.y*
        p3.y*p1.z*p2.z*c_23+c_130+480*p2.y*p3.y*c_20*c_23-240*c_6*p1.z*c_77-1440*p2.y*p3.y*p1.z*c_77+240*c_6*p2.z*c_77+c_491+144*
        c_6*c_78+1008*p2.y*p3.y*c_78+5*c_124*c_79-15*c_131*(c_335-p3.y*c_81)+5*c_134*(-3*p1.y*p2.y*c_80+14*c_4*c_38-c_6*
        (c_37+p2.z+c_0)+c_1*(p1.z+c_5+c_0)-p2.y*p3.y*(c_82+p2.z+c_84)+p1.y*p3.y*(p1.z+c_83+c_84))-c_58*(15*c_6*c_80+30*p2.y*p3.y*
        c_80-15*c_4*c_85+8*(c_94+c_229+c_86+c_197+c_230+c_91+3*p1.z*(c_106+c_65+c_96)))-3*c_1*(5*c_16*c_80+10*c_15*p3.y*c_80-25*c_18*
        c_30+c_343-3*c_6*c_80*(c_89+8*c_271)-4*p2.y*p3.y*c_80*(c_89+12*c_318)+16*(3*c_69-c_76-5*c_74*c_3+c_503-3*c_21*c_22+c_194-5*p2.z*
        c_77+3*c_78+c_14*(-4*c_20-8*p2.z*p3.z+6*c_22)-3*c_19*(c_21+c_164+c_98+c_91)-p1.z*(c_115+4*c_21*p3.z+6*c_20*c_22+c_120-5*
        c_77)))-c_13*(15*c_15*c_80+30*c_6*p3.y*c_80-3*p2.y*c_80*(c_107+c_277)+2*p3.y*(-5*c_4*c_93+8*(c_94+c_86+c_249+18*p2.z*c_22+c_114+3*
        c_19*c_227+3*p1.z*(c_95+c_373+c_96))))+c_43*(9*c_58*c_30-9*c_16*c_30-9*c_15*p3.y*c_187+9*c_13*(p2.y*c_38+p3.y*c_353)+40*
        c_4*c_80*(c_19+c_20+c_196+21*c_22+p1.z*c_243)+p2.y*p3.y*(96*c_14+96*c_19*c_175-45*c_4*c_172+96*p1.z*c_178-40*c_180)-c_1*(9*c_6*
        c_80+36*p2.y*p3.y*c_80-45*c_4*c_337+8*(-2*c_14+c_86+c_19*(c_99+c_48)+c_100+c_101+c_104+c_103))+c_6*(-45*c_4*c_138+8*(c_54-2*
        c_21+c_168+c_104+c_181+c_183))+p1.y*(-9*c_15*c_80-36*c_6*p3.y*c_80+45*c_17*c_542+8*p3.y*(c_94+c_167-3*c_19*(c_53+c_105)-60*
        c_20*p3.z-180*p2.z*c_22+c_110-3*p1.z*(c_106+20*p2.z*p3.z-5*c_22))+6*p2.y*c_80*(c_107+4*c_552)))+p1.y*(-15*c_71*c_80-30*c_16*
        p3.y*c_80+15*c_72*c_224+3*c_15*c_80*(c_107+c_109)-16*c_17*c_549-48*p3.y*(c_69+c_502-6*c_75*p3.z-12*c_21*c_22-20*c_20*c_23-30*
        p2.z*c_77+21*c_78+c_74*(c_504+c_10)-2*c_14*(c_20+c_116+c_112)-2*c_19*(c_21+c_113+c_209+c_114)-p1.z*(c_115+c_198+12*c_20*
        c_22+20*p2.z*c_23+c_199))+12*c_6*p3.y*c_80*(c_89+12*c_146)-3*p2.y*c_80*(25*c_18-24*c_4*c_186+c_282)))+p2.x*p3.x*(-90*c_70*p1.z-60*
        c_71*p3.y*p1.z-30*c_16*c_4*p1.z+30*c_6*c_18*p1.z+60*p2.y*c_72*p1.z+90*c_73*p1.z+96*c_16*c_14+c_122+c_250-96*c_18*
        c_14-96*c_6*c_69+96*c_4*c_69-175*c_70*p2.z-120*c_71*p3.y*p2.z+c_391-40*c_15*c_17*p2.z+c_298+c_251+480*c_16*c_19*p2.z+192*c_15*
        p3.y*c_19*p2.z-96*p2.y*c_17*c_19*p2.z-96*c_18*c_19*p2.z-288*c_6*c_74*p2.z+c_252+1440*c_16*p1.z*c_20+480*c_15*p3.y*p1.z*
        c_20-144*p2.y*c_17*p1.z*c_20-96*c_18*p1.z*c_20-576*c_6*c_14*c_20+96*c_4*c_14*c_20+280*c_16*c_21+320*c_15*p3.y*c_21+c_253+128*
        p2.y*c_17*c_21+c_123-960*c_6*c_19*c_21+96*c_4*c_19*c_21-1440*c_6*p1.z*c_75+96*c_4*p1.z*c_75+1008*c_6*c_76+c_301+15*c_124*
        c_3+c_125+c_302+40*c_15*c_17*p3.z+c_477+120*p2.y*c_72*p3.z+175*c_73*p3.z+96*c_16*c_19*p3.z+96*c_15*p3.y*c_19*p3.z-192*p2.y*
        c_17*c_19*p3.z-480*c_18*c_19*p3.z+c_126+288*c_4*c_74*p3.z+480*c_16*p1.z*p2.z*p3.z+384*c_15*p3.y*p1.z*p2.z*p3.z-384*
        p2.y*c_17*p1.z*p2.z*p3.z-480*c_18*p1.z*p2.z*p3.z-288*c_6*c_14*p2.z*p3.z+288*c_4*c_14*p2.z*p3.z-120*c_16*c_20*p3.z+c_127+192*
        p2.y*c_17*c_20*p3.z+120*c_18*c_20*p3.z-576*c_6*c_19*c_20*p3.z+c_255-960*c_6*p1.z*c_21*p3.z+288*c_4*p1.z*c_21*
        p3.z+720*c_6*c_75*p3.z-144*c_4*c_75*p3.z+96*c_16*p1.z*c_22+144*c_15*p3.y*p1.z*c_22-480*p2.y*c_17*p1.z*c_22-1440*c_18*p1.z*
        c_22-96*c_6*c_14*c_22+576*c_4*c_14*c_22-120*c_16*p2.z*c_22-192*c_15*p3.y*p2.z*c_22+c_256+120*c_18*p2.z*c_22+c_128+576*c_4*c_19*
        p2.z*c_22-576*c_6*p1.z*c_20*c_22+576*c_4*p1.z*c_20*c_22+480*c_6*c_21*c_22+c_257+c_258-128*c_15*p3.y*c_23+c_129-320*p2.y*
        c_17*c_23-280*c_18*c_23-96*c_6*c_19*c_23+960*c_4*c_19*c_23-288*c_6*p1.z*p2.z*c_23+960*c_4*p1.z*p2.z*c_23+c_130-480*c_4*c_20*
        c_23-96*c_6*p1.z*c_77+1440*c_4*p1.z*c_77+144*c_6*p2.z*c_77-720*c_4*p2.z*c_77+c_307-1008*c_4*c_78-15*c_131*(c_133+c_174)+15*
        c_134*(p1.y*p3.y*c_136+c_137-p1.y*p2.y*c_51-4*p2.y*p3.y*(p1.z+c_41)-c_6*c_138+c_4*c_139)-3*c_58*(-5*c_4*c_49-10*p2.y*
        p3.y*c_3+5*c_6*c_141+8*c_3*c_144)-3*c_1*(-5*c_18*c_311-10*p2.y*c_17*c_35+5*c_16*c_310+10*c_15*p3.y*c_51+48*p2.y*p3.y*c_3*c_146+24*
        c_4*c_350-3*c_6*(c_522+5*c_4*c_3+24*c_19*c_118+16*p1.z*c_458+8*(-10*c_21+c_456+c_457+c_23))-16*c_3*c_162)-3*c_13*(-5*c_17*
        c_163+5*c_15*c_188+5*c_6*p3.y*c_184+8*p3.y*(c_166+c_86+2*c_19*(c_9+c_26)+c_164+c_284+c_165+p1.z*(c_191+c_88-15*c_22))-p2.y*
        (5*c_4*c_60+8*(c_166+c_167+c_168+c_336+c_204+c_19*(-4*p2.z+10*p3.z)+p1.z*(c_169+c_88+c_170))))+c_43*(c_171-72*c_15*p3.y*c_30-9*
        c_16*(c_32+c_9+c_10)+45*c_18*c_172-9*c_13*(-(p3.y*c_173)+c_174)-16*c_4*(6*c_14+6*c_19*c_175+6*p1.z*c_178+5*c_180)+16*p2.y*
        p3.y*(c_54+c_181+c_183-4*(c_158+c_113+c_114))-3*c_1*(-6*c_4*c_344+3*c_6*c_141+6*p2.y*p3.y*c_184+8*c_3*c_186)+c_6*(-18*c_4*
        c_187+16*(c_54+c_278+c_168+c_98+c_104+9*c_19*c_118+9*p1.z*(c_111+c_116+c_117)))-3*p1.y*(-30*c_17*c_35+3*c_15*c_188+3*c_6*p3.y*
        (c_7+c_244+c_59)+6*p2.y*c_4*c_190+8*p3.y*(c_54+c_247+20*c_20*p3.z+c_564+c_193+c_19*(c_9+c_59)+p1.z*(c_191+c_192-10*c_22))-8*
        p2.y*(c_54+c_167-15*c_20*p3.z+c_206+c_565+c_19*(c_29+c_97)+p1.z*(-3*c_20+c_88+c_108))))-3*p1.y*(-5*c_72*c_225+5*c_71*c_242+5*
        c_16*p3.y*c_286+8*c_17*c_559-16*p3.y*(c_208+5*c_76+6*c_75*p3.z+3*c_21*c_22+c_194-15*p2.z*c_77-30*c_78+c_74*(c_9+c_87)+c_14*
        (c_195+c_196+c_66)+c_19*(c_283+c_197+c_98-4*c_23)+p1.z*(c_151+c_198+c_210-4*p2.z*c_23+c_199))-c_6*(5*c_17*c_173+24*p3.y*
        c_297)+c_15*(5*c_4*c_45-8*(c_202+c_203+c_377+4*p2.z*c_22+c_204+c_19*(20*p2.z+c_97)+p1.z*(c_52+c_192+c_205)))+p2.y*(-5*c_18*c_285+24*
        c_4*c_292+16*(c_208-30*c_76-15*c_75*p3.z-4*c_21*c_22+3*c_20*c_23+6*p2.z*c_77+5*c_78+c_74*(c_92+c_0)+c_14*(c_95+c_196+c_205)+c_19*
        (-4*c_21+c_113+c_209+c_104)+p1.z*(-15*c_75-4*c_21*p3.z+c_210+6*p2.z*c_23+c_154)))))+p10_3*(15*c_211*p3.x*(4*
        p1.y+c_357+c_308)*c_215-5*c_216*(-8*p1.y*p2.y*c_80+3*c_4*c_38-3*p2.y*p3.y*c_188+3*p1.y*p3.y*c_543-2*c_6*c_217+2*c_1*c_279)+p3.x*
        (-9*c_16*p1.z-9*c_15*p3.y*p1.z+c_319-9*p2.y*c_17*p1.z-27*c_18*p1.z+240*c_6*c_14+240*p2.y*p3.y*c_14+80*c_4*c_14+c_218-18*
        c_6*c_4*p2.z-27*p2.y*c_17*p2.z-36*c_18*p2.z+192*c_6*c_19*p2.z+c_219+288*c_4*c_19*p2.z+72*c_6*p1.z*c_20+168*p2.y*p3.y*
        p1.z*c_20+144*c_4*p1.z*c_20+c_220+48*c_4*c_21-90*c_13*p2.y*c_235+c_221+18*c_15*p3.y*p3.z+27*c_6*c_4*p3.z+36*p2.y*c_17*p3.z-45*
        c_18*p3.z-48*c_6*c_19*p3.z+c_56+c_322-96*c_6*p1.z*p2.z*p3.z+c_323+432*c_4*p1.z*p2.z*p3.z+c_222+48*p2.y*p3.y*c_20*
        p3.z+144*c_4*c_20*p3.z-120*c_6*p1.z*c_22-360*p2.y*p3.y*p1.z*c_22-48*c_4*p1.z*c_22-96*c_6*p2.z*c_22-72*p2.y*p3.y*p2.z*
        c_22+288*c_4*p2.z*c_22-72*c_6*c_23-288*p2.y*p3.y*c_23-80*c_4*c_23+45*c_58*(c_42+c_53+p3.z)+5*c_43*(-3*p2.y*p3.y*c_163-3*
        c_6*c_36+8*p1.y*p3.y*c_25+3*p1.y*p2.y*c_245-2*c_4*c_93+2*c_1*c_224)-2*c_1*(9*p2.y*p3.y*c_225+9*c_6*c_422+9*c_4*c_339+8*(-35*
        c_14+c_226+c_197+c_209+c_104+15*c_19*c_227+15*p1.z*(c_111+c_88+c_22)))-p1.y*(9*p2.y*c_4*(c_32+c_9+c_228)+9*c_15*c_351+18*c_6*
        p3.y*c_49+72*c_17*c_30-16*p3.y*c_513+24*p2.y*c_444))+p2.x*(-30*c_43*c_6*p1.z+27*c_16*p1.z+c_360+9*c_15*p3.y*p1.z+c_232+9*
        c_6*c_4*p1.z+9*p2.y*c_17*p1.z+c_233-80*c_6*c_14-240*p2.y*p3.y*c_14+c_423+45*c_16*p2.z-30*c_43*p2.y*p3.y*p2.z-36*c_15*
        p3.y*p2.z-45*c_43*c_4*p2.z-27*c_6*c_4*p2.z-18*p2.y*c_17*p2.z+c_234-48*c_6*c_19*p2.z+96*p2.y*p3.y*c_19*p2.z+48*c_4*c_19*
        p2.z+48*c_6*p1.z*c_20+360*p2.y*p3.y*p1.z*c_20+120*c_4*p1.z*c_20+80*c_6*c_21+288*p2.y*p3.y*c_21+72*c_4*c_21+90*c_13*
        p3.y*c_235+30*c_43*c_6*p3.z+36*c_16*p3.z+45*c_43*p2.y*p3.y*p3.z+27*c_15*p3.y*p3.z+18*c_6*c_4*p3.z+c_236-288*c_6*c_19*
        p3.z+c_237-192*c_4*c_19*p3.z-432*c_6*p1.z*p2.z*p3.z-48*p2.y*p3.y*p1.z*p2.z*p3.z+c_368-288*c_6*c_20*p3.z+72*p2.y*p3.y*
        c_20*p3.z+96*c_4*c_20*p3.z-144*c_6*p1.z*c_22-168*p2.y*p3.y*p1.z*c_22+c_238-144*c_6*p2.z*c_22-48*p2.y*p3.y*p2.z*c_22+c_239-48*
        c_6*c_23+c_240-45*c_58*(c_42+p2.z+c_59)+2*c_1*(-280*c_14+30*c_43*p2.z+c_241+9*c_4*c_338-30*c_43*p3.z+c_500+c_264+48*
        c_23+9*p2.y*p3.y*c_242+9*c_6*c_333+120*c_19*c_243+120*p1.z*(c_20+c_88+c_117))+p1.y*(9*c_17*c_328+72*c_15*c_30+9*c_6*p3.y*
        (c_32+c_244+c_0)-15*c_43*(4*p2.y*p1.z-2*p2.y*c_118+c_370)+24*p3.y*c_519+2*p2.y*(9*c_4*c_141-8*c_438))))+c_211*(-45*c_134*c_6*
        p1.z-90*c_43*c_16*p1.z-70*c_70*p1.z-30*c_134*p2.y*p3.y*p1.z-72*c_43*c_15*p3.y*p1.z+90*c_71*p3.y*p1.z+c_385+75*c_16*c_4*
        p1.z+72*c_43*p2.y*c_17*p1.z+60*c_15*c_17*p1.z+c_386+45*c_6*c_18*p1.z+30*p2.y*c_72*p1.z+c_387+72*c_43*c_6*c_14+c_388-96*
        c_15*p3.y*c_14-72*c_43*c_4*c_14+c_389+c_250-24*c_18*c_14+96*p2.y*p3.y*c_69+c_465-30*c_134*c_6*p2.z-135*c_43*c_16*p2.z+15*c_134*
        p2.y*p3.y*p2.z-90*c_43*c_15*p3.y*p2.z+105*c_71*p3.y*p2.z+75*c_134*c_4*p2.z+75*c_16*c_4*p2.z+54*c_43*p2.y*c_17*p2.z+50*
        c_15*c_17*p2.z+45*c_43*c_18*p2.z+30*c_6*c_18*p2.z+15*p2.y*c_72*p2.z+c_251+c_393+240*c_16*c_19*p2.z-480*c_15*p3.y*c_19*
        p2.z-144*c_43*c_4*c_19*p2.z-288*c_6*c_4*c_19*p2.z-144*p2.y*c_17*c_19*p2.z-48*c_18*c_19*p2.z+c_394+c_252+720*c_43*c_6*p1.z*
        c_20+840*c_16*p1.z*c_20-1440*c_15*p3.y*p1.z*c_20-216*c_43*c_4*p1.z*c_20-720*c_6*c_4*p1.z*c_20-288*p2.y*c_17*p1.z*c_20-72*
        c_18*p1.z*c_20+576*p2.y*p3.y*c_14*c_20+144*c_4*c_14*c_20-240*c_43*c_6*c_21-240*c_43*p2.y*p3.y*c_21+560*c_15*p3.y*c_21-96*
        c_43*c_4*c_21+c_253+c_254+16*c_18*c_21+960*p2.y*p3.y*c_19*c_21+192*c_4*c_19*c_21+1440*p2.y*p3.y*p1.z*c_75+240*c_4*p1.z*
        c_75-1008*p2.y*p3.y*c_76-144*c_4*c_76-60*c_134*c_6*p3.z-45*c_43*c_16*p3.z+70*c_70*p3.z-75*c_134*p2.y*p3.y*p3.z-54*c_43*
        c_15*p3.y*p3.z+c_397+75*c_134*c_4*p3.z+75*c_16*c_4*p3.z+c_398+70*c_15*c_17*p3.z+135*c_43*c_18*p3.z+60*c_6*c_18*p3.z+45*
        p2.y*c_72*p3.z+25*c_73*p3.z+c_400-96*c_15*p3.y*c_19*p3.z-288*c_43*c_4*c_19*p3.z+c_401-144*p2.y*c_17*c_19*p3.z-96*c_18*c_19*
        p3.z+96*p2.y*p3.y*c_74*p3.z+96*c_4*c_74*p3.z+576*c_43*c_6*p1.z*p2.z*p3.z-480*c_15*p3.y*p1.z*p2.z*p3.z-576*c_43*c_4*
        p1.z*p2.z*p3.z-576*c_6*c_4*p1.z*p2.z*p3.z-432*p2.y*c_17*p1.z*p2.z*p3.z-192*c_18*p1.z*p2.z*p3.z+c_403+c_404-840*c_16*
        c_20*p3.z-144*c_43*p2.y*p3.y*c_20*p3.z+c_405-144*c_43*c_4*c_20*p3.z+48*p2.y*c_17*c_20*p3.z+24*c_18*c_20*p3.z+576*p2.y*
        p3.y*c_19*c_20*p3.z+c_255+960*p2.y*p3.y*p1.z*c_21*p3.z+384*c_4*p1.z*c_21*p3.z+c_408-240*c_4*c_75*p3.z+216*c_43*c_6*
        p1.z*c_22+c_304+c_409+c_410-288*p2.y*c_17*p1.z*c_22+c_411+96*p2.y*p3.y*c_14*c_22+144*c_4*c_14*c_22+144*c_43*c_6*p2.z*c_22-240*
        c_16*p2.z*c_22+144*c_43*p2.y*p3.y*p2.z*c_22-240*c_15*p3.y*p2.z*c_22+c_256-48*p2.y*c_17*p2.z*c_22+c_414+288*c_4*c_19*
        p2.z*c_22+576*p2.y*p3.y*p1.z*c_20*c_22+432*c_4*p1.z*c_20*c_22-480*p2.y*p3.y*c_21*c_22+c_257+96*c_43*c_6*c_23+c_258+240*c_43*
        p2.y*p3.y*c_23+c_259+240*c_43*c_4*c_23-96*c_6*c_4*c_23-80*p2.y*c_17*c_23-40*c_18*c_23+96*p2.y*p3.y*c_19*c_23+192*c_4*c_19*
        c_23+c_416+384*c_4*p1.z*p2.z*c_23-288*p2.y*p3.y*c_20*c_23-288*c_4*c_20*c_23+96*p2.y*p3.y*p1.z*c_77+c_305-144*p2.y*p3.y*
        p2.z*c_77+c_306-48*p2.y*p3.y*c_78-144*c_4*c_78-5*c_124*c_260-15*c_131*(c_261+p2.y*c_262)+c_58*(40*c_14+9*c_43*p2.z-24*p1.z*
        c_20-16*c_21+30*p2.y*p3.y*c_36+c_272-9*c_43*p3.z+c_330+c_263+c_331+c_332+c_264+c_265-15*c_6*c_266)+3*c_1*(5*c_18*p1.z+c_267+48*
        c_69+c_424+80*c_74*p2.z+c_320+96*c_14*c_20+c_426+80*p1.z*c_75+48*c_76+20*c_15*p3.y*c_36+5*c_134*c_3-5*c_18*p3.z-24*c_4*
        c_19*p3.z-80*c_74*p3.z-128*c_14*p2.z*p3.z+24*c_4*c_20*p3.z-144*c_19*c_20*p3.z-128*p1.z*c_21*p3.z-80*c_75*p3.z+c_326-64*
        c_14*c_22+c_268-96*c_19*p2.z*c_22+c_431-64*c_21*c_22+48*c_4*c_23-48*c_19*c_23-64*p1.z*p2.z*c_23-48*c_20*c_23-32*p1.z*
        c_77+c_432-16*c_78-25*c_16*c_30-2*p2.y*p3.y*c_36*c_447-3*c_43*(-3*c_4*c_35+3*c_6*c_51+6*p2.y*p3.y*(c_34+p3.z)+8*c_3*c_146)+c_6*
        (c_272+8*(c_147+c_273+c_274+c_380+c_204+c_382+c_19*(c_92+c_383))))+c_13*(45*c_6*p3.y*c_36-10*c_15*c_217-9*c_43*(c_276+c_280)-3*
        p3.y*c_36*(c_89+c_277)+2*p2.y*(c_272+8*(c_94+c_278+c_374+c_230+c_204+3*c_19*c_243-3*p1.z*(c_20-9*p2.z*p3.z+c_112))))-p1.y*
        (-75*c_16*p3.y*c_36+15*c_71*c_279+15*c_134*(-(p3.y*(p1.z+c_53+c_105))+c_280)+9*c_6*p3.y*c_36*(c_89+c_109)-4*c_15*(c_272+4*
        (c_94-35*c_21+90*c_20*p3.z+c_101+6*c_23+3*c_19*(c_9+c_41)+3*p1.z*(c_195+c_281+c_117)))-3*p3.y*c_36*(5*c_18-8*c_4*c_186+c_282)-6*
        p2.y*(5*c_18*c_36-24*c_4*c_36*c_146+8*(c_69+21*c_76+c_74*(c_5+c_26)-30*c_75*p3.z-20*c_21*c_22-12*c_20*c_23-6*p2.z*c_77-2*
        c_78+c_14*(6*c_20-6*p2.z*p3.z+c_207)+2*c_19*(c_283-6*c_20*p3.z+c_284+c_505)+p1.z*(15*c_75-20*c_21*p3.z-12*c_20*c_22-6*p2.z*
        c_23-2*c_77)))+9*c_43*(-2*c_17*c_285+2*c_15*c_286+3*c_6*p3.y*c_45+8*p3.y*c_292-p2.y*(3*c_4*c_173+8*c_297))))+p10_2*(105*c_131*
        p2.y*p1.z+75*c_58*c_6*p1.z+50*c_13*c_15*p1.z+30*c_1*c_16*p1.z+15*p1.y*c_71*p1.z+c_384-105*c_131*p3.y*p1.z-75*c_58*c_4*
        p1.z-50*c_13*c_17*p1.z-30*c_1*c_18*p1.z-15*p1.y*c_72*p1.z+c_462+560*c_13*p2.y*c_14+240*c_1*c_6*c_14+80*p1.y*c_15*c_14+16*
        c_16*c_14-560*c_13*p3.y*c_14-240*c_1*c_4*c_14-80*p1.y*c_17*c_14-16*c_18*c_14-1008*p1.y*p2.y*c_69-144*c_6*c_69+1008*p1.y*
        p3.y*c_69+144*c_4*c_69+70*c_124*p2.z+75*c_131*p2.y*p2.z+75*c_58*c_6*p2.z+70*c_13*c_15*p2.z+60*c_1*c_16*p2.z+45*p1.y*c_71*
        p2.z+25*c_70*p2.z-90*c_131*p3.y*p2.z-75*c_58*p2.y*p3.y*p2.z-60*c_13*c_6*p3.y*p2.z-45*c_1*c_15*p3.y*p2.z-30*p1.y*c_16*
        p3.y*p2.z+c_466-75*c_58*c_4*p2.z-60*c_13*p2.y*c_4*p2.z-45*c_1*c_6*c_4*p2.z-30*p1.y*c_15*c_4*p2.z-15*c_16*c_4*p2.z-60*
        c_13*c_17*p2.z-45*c_1*p2.y*c_17*p2.z-30*p1.y*c_6*c_17*p2.z-15*c_15*c_17*p2.z-45*c_1*c_18*p2.z-30*p1.y*p2.y*c_18*p2.z+c_298-30*
        p1.y*c_72*p2.z-15*p2.y*c_72*p2.z+c_392-840*c_58*c_19*p2.z-240*c_13*p2.y*c_19*p2.z+48*p1.y*c_15*c_19*p2.z+24*c_16*
        c_19*p2.z+1440*c_13*p3.y*c_19*p2.z+720*c_1*p2.y*p3.y*c_19*p2.z+288*p1.y*c_6*p3.y*c_19*p2.z+72*c_15*p3.y*c_19*p2.z+720*
        c_1*c_4*c_19*p2.z+288*p1.y*p2.y*c_4*c_19*p2.z+72*c_6*c_4*c_19*p2.z+288*p1.y*c_17*c_19*p2.z+72*p2.y*c_17*c_19*p2.z+72*
        c_18*c_19*p2.z-720*p1.y*p2.y*c_74*p2.z-240*c_6*c_74*p2.z-1440*p1.y*p3.y*c_74*p2.z+c_469-240*c_4*c_74*p2.z-240*c_58*
        p1.z*c_20-240*c_13*p2.y*p1.z*c_20-144*c_1*c_6*p1.z*c_20-48*p1.y*c_15*p1.z*c_20+480*c_13*p3.y*p1.z*c_20+576*c_1*p2.y*p3.y*
        p1.z*c_20+432*p1.y*c_6*p3.y*p1.z*c_20+192*c_15*p3.y*p1.z*c_20+288*c_1*c_4*p1.z*c_20+288*p1.y*p2.y*c_4*p1.z*c_20+c_395+144*
        p1.y*c_17*p1.z*c_20+c_299+48*c_18*p1.z*c_20-480*p1.y*p2.y*c_14*c_20+c_396-960*p1.y*p3.y*c_14*c_20-384*p2.y*p3.y*
        c_14*c_20-192*c_4*c_14*c_20-40*c_58*c_21-80*c_13*p2.y*c_21-96*c_1*c_6*c_21-80*p1.y*c_15*c_21-40*c_16*c_21+96*c_13*p3.y*c_21+216*
        c_1*p2.y*p3.y*c_21+288*p1.y*c_6*p3.y*c_21+c_473+72*c_1*c_4*c_21+144*p1.y*p2.y*c_4*c_21+144*c_6*c_4*c_21+48*p1.y*c_17*
        c_21+72*p2.y*c_17*c_21+24*c_18*c_21-288*p1.y*p2.y*c_19*c_21-288*c_6*c_19*c_21-576*p1.y*p3.y*c_19*c_21-432*p2.y*p3.y*c_19*
        c_21-144*c_4*c_19*c_21-144*p1.y*p2.y*p1.z*c_75+c_300-288*p1.y*p3.y*p1.z*c_75-384*p2.y*p3.y*p1.z*c_75+c_474-48*p1.y*p2.y*
        c_76-144*c_6*c_76-96*p1.y*p3.y*c_76+c_475+c_301-70*c_124*p3.z+90*c_131*p2.y*p3.z+75*c_58*c_6*p3.z+60*c_13*c_15*p3.z+45*
        c_1*c_16*p3.z+30*p1.y*c_71*p3.z+c_476-75*c_131*p3.y*p3.z+75*c_58*p2.y*p3.y*p3.z+60*c_13*c_6*p3.y*p3.z+45*c_1*c_15*
        p3.y*p3.z+30*p1.y*c_16*p3.y*p3.z+15*c_71*p3.y*p3.z-75*c_58*c_4*p3.z+60*c_13*p2.y*c_4*p3.z+45*c_1*c_6*c_4*p3.z+30*p1.y*
        c_15*c_4*p3.z+c_302-70*c_13*c_17*p3.z+45*c_1*p2.y*c_17*p3.z+30*p1.y*c_6*c_17*p3.z+15*c_15*c_17*p3.z-60*c_1*c_18*p3.z+30*
        p1.y*p2.y*c_18*p3.z+15*c_6*c_18*p3.z-45*p1.y*c_72*p3.z+c_399-25*c_73*p3.z+840*c_58*c_19*p3.z-1440*c_13*p2.y*c_19*p3.z-720*
        c_1*c_6*c_19*p3.z-288*p1.y*c_15*c_19*p3.z-72*c_16*c_19*p3.z+240*c_13*p3.y*c_19*p3.z-720*c_1*p2.y*p3.y*c_19*p3.z-288*
        p1.y*c_6*p3.y*c_19*p3.z-72*c_15*p3.y*c_19*p3.z-288*p1.y*p2.y*c_4*c_19*p3.z-72*c_6*c_4*c_19*p3.z-48*p1.y*c_17*c_19*
        p3.z-72*p2.y*c_17*c_19*p3.z-24*c_18*c_19*p3.z+1440*p1.y*p2.y*c_74*p3.z+240*c_6*c_74*p3.z+720*p1.y*p3.y*c_74*p3.z+c_402+240*
        c_4*c_74*p3.z-480*c_13*p2.y*p1.z*p2.z*p3.z-576*c_1*c_6*p1.z*p2.z*p3.z-432*p1.y*c_15*p1.z*p2.z*p3.z-192*c_16*p1.z*
        p2.z*p3.z+480*c_13*p3.y*p1.z*p2.z*p3.z-144*p1.y*c_6*p3.y*p1.z*p2.z*p3.z-96*c_15*p3.y*p1.z*p2.z*p3.z+576*c_1*
        c_4*p1.z*p2.z*p3.z+144*p1.y*p2.y*c_4*p1.z*p2.z*p3.z+432*p1.y*c_17*p1.z*p2.z*p3.z+96*p2.y*c_17*p1.z*p2.z*p3.z+192*
        c_18*p1.z*p2.z*p3.z+960*p1.y*p2.y*c_14*p2.z*p3.z+384*c_6*c_14*p2.z*p3.z-960*p1.y*p3.y*c_14*p2.z*p3.z-384*c_4*c_14*
        p2.z*p3.z-96*c_13*p2.y*c_20*p3.z-216*c_1*c_6*c_20*p3.z-288*p1.y*c_15*c_20*p3.z+c_481+96*c_13*p3.y*c_20*p3.z+72*c_1*p2.y*
        p3.y*c_20*p3.z-48*c_15*p3.y*c_20*p3.z+144*c_1*c_4*c_20*p3.z+144*p1.y*p2.y*c_4*c_20*p3.z+72*c_6*c_4*c_20*p3.z+144*p1.y*
        c_17*c_20*p3.z+120*p2.y*c_17*c_20*p3.z+96*c_18*c_20*p3.z+576*p1.y*p2.y*c_19*c_20*p3.z+432*c_6*c_19*c_20*p3.z-576*p1.y*
        p3.y*c_19*c_20*p3.z-144*p2.y*p3.y*c_19*c_20*p3.z+c_483+288*p1.y*p2.y*p1.z*c_21*p3.z+384*c_6*p1.z*c_21*p3.z-288*p1.y*
        p3.y*p1.z*c_21*p3.z+c_406+c_407+96*p1.y*p2.y*c_75*p3.z+c_303-96*p1.y*p3.y*c_75*p3.z-144*p2.y*p3.y*c_75*p3.z-96*c_4*
        c_75*p3.z+240*c_58*p1.z*c_22-480*c_13*p2.y*p1.z*c_22-288*c_1*c_6*p1.z*c_22-144*p1.y*c_15*p1.z*c_22-48*c_16*p1.z*c_22+240*
        c_13*p3.y*p1.z*c_22-576*c_1*p2.y*p3.y*p1.z*c_22-288*p1.y*c_6*p3.y*p1.z*c_22+c_304+144*c_1*c_4*p1.z*c_22-432*p1.y*
        p2.y*c_4*p1.z*c_22+c_485+48*p1.y*c_17*p1.z*c_22-192*p2.y*c_17*p1.z*c_22+960*p1.y*p2.y*c_14*c_22+192*c_6*c_14*c_22+480*p1.y*
        p3.y*c_14*c_22+384*p2.y*p3.y*c_14*c_22+c_487-96*c_13*p2.y*p2.z*c_22-144*c_1*c_6*p2.z*c_22-144*p1.y*c_15*p2.z*c_22-96*
        c_16*p2.z*c_22+96*c_13*p3.y*p2.z*c_22-72*c_1*p2.y*p3.y*p2.z*c_22-144*p1.y*c_6*p3.y*p2.z*c_22-120*c_15*p3.y*p2.z*c_22+216*
        c_1*c_4*p2.z*c_22-72*c_6*c_4*p2.z*c_22+288*p1.y*c_17*p2.z*c_22+48*p2.y*c_17*p2.z*c_22+c_412+576*p1.y*p2.y*c_19*p2.z*
        c_22+c_413-576*p1.y*p3.y*c_19*p2.z*c_22+144*p2.y*p3.y*c_19*p2.z*c_22-432*c_4*c_19*p2.z*c_22+288*p1.y*p2.y*p1.z*c_20*
        c_22+288*c_6*p1.z*c_20*c_22-288*p1.y*p3.y*p1.z*c_20*c_22-288*c_4*p1.z*c_20*c_22+96*p1.y*p2.y*c_21*c_22+192*c_6*c_21*c_22-96*
        p1.y*p3.y*c_21*c_22-48*p2.y*p3.y*c_21*c_22-144*c_4*c_21*c_22+40*c_58*c_23-96*c_13*p2.y*c_23-72*c_1*c_6*c_23-48*p1.y*c_15*
        c_23-24*c_16*c_23+80*c_13*p3.y*c_23-216*c_1*p2.y*p3.y*c_23-144*p1.y*c_6*p3.y*c_23-72*c_15*p3.y*c_23+96*c_1*c_4*c_23-288*
        p1.y*p2.y*c_4*c_23-144*c_6*c_4*c_23+80*p1.y*c_17*c_23+c_415+40*c_18*c_23+576*p1.y*p2.y*c_19*c_23+144*c_6*c_19*c_23+288*p1.y*
        p3.y*c_19*c_23+432*p2.y*p3.y*c_19*c_23+288*c_4*c_19*c_23+288*p1.y*p2.y*p1.z*p2.z*c_23+c_489-288*p1.y*p3.y*p1.z*p2.z*
        c_23+c_490-384*c_4*p1.z*p2.z*c_23+96*p1.y*p2.y*c_20*c_23+144*c_6*c_20*c_23-96*p1.y*p3.y*c_20*c_23+48*p2.y*p3.y*c_20*
        c_23-192*c_4*c_20*c_23+288*p1.y*p2.y*p1.z*c_77+c_417+144*p1.y*p3.y*p1.z*c_77+384*p2.y*p3.y*p1.z*c_77+c_305+96*p1.y*p2.y*
        p2.z*c_77+96*c_6*p2.z*c_77-96*p1.y*p3.y*p2.z*c_77+144*p2.y*p3.y*p2.z*c_77+c_306+96*p1.y*p2.y*c_78+c_307+48*p1.y*
        p3.y*c_78+c_418+144*c_4*c_78+15*c_216*p3.x*(c_314+4*p2.y+c_308)*c_215-15*c_309*(c_39-p2.y*p3.y*c_310-5*c_6*c_30+p1.y*p3.y*
        c_560+p1.y*p2.y*(c_24+c_9+c_41)+c_1*(c_27+c_53+c_10))+15*c_134*(-(p2.y*p3.y*c_311)+c_312-5*c_4*c_30+p1.y*p2.y*c_372+c_1*
        (c_27+c_5+c_59)+p1.y*p3.y*(c_24+c_29+c_0))+3*p2.x*p3.x*c_215*(5*c_43*(c_314+2*p2.y+c_358)+3*(10*c_13+4*c_15+6*c_6*p3.y+6*p2.y*
        c_4+c_359+12*c_1*c_315-16*p2.y*c_271-16*p3.y*c_318+p1.y*(9*c_6+12*p2.y*p3.y+9*c_4-8*c_144)))-3*c_211*(15*c_43*c_6*p1.z-15*
        c_16*p1.z-12*c_15*p3.y*p1.z-15*c_43*c_4*p1.z+c_319-6*p2.y*c_17*p1.z-3*c_18*p1.z+32*c_6*c_14+96*p2.y*p3.y*c_14+48*c_4*
        c_14-45*c_16*p2.z+15*c_43*p2.y*p3.y*p2.z+30*c_15*p3.y*p2.z+15*c_43*c_4*p2.z+18*c_6*c_4*p2.z+9*p2.y*c_17*p2.z+3*c_18*
        p2.z+48*c_6*c_19*p2.z+72*p2.y*p3.y*c_19*p2.z+24*c_4*c_19*p2.z-96*p2.y*p3.y*p1.z*c_20+c_320-80*c_6*c_21-240*p2.y*p3.y*
        c_21-48*c_4*c_21-15*c_43*c_6*p3.z-30*c_16*p3.z+c_321-18*c_15*p3.y*p3.z-9*c_6*c_4*p3.z-3*p2.y*c_17*p3.z+72*c_6*c_19*p3.z+72*
        p2.y*p3.y*c_19*p3.z+c_322+192*c_6*p1.z*p2.z*p3.z+c_323+c_324-48*p2.y*p3.y*c_20*p3.z+c_325+48*c_6*p1.z*c_22+48*p2.y*
        p3.y*p1.z*c_22+c_326+96*c_6*p2.z*c_22+24*p2.y*p3.y*p2.z*c_22-24*c_4*p2.z*c_22+24*c_6*c_23+24*p2.y*p3.y*c_23+15*c_58*
        c_262-c_1*(-80*c_14+c_327+48*p1.z*c_20+32*c_21+9*p2.y*p3.y*c_328+9*c_4*c_235+c_329+c_330+c_263+c_331+c_332+c_264+c_265)+6*c_13*
        (p3.y*(c_28+c_29+c_10)+p2.y*c_333)+p1.y*(2*p2.y*c_80*(-9*c_4+8*c_428)-9*c_6*p3.y*c_188-6*c_15*c_334+15*c_43*(c_335+c_261)-3*
        p3.y*(c_4*c_379+c_509)))+3*c_43*(-3*c_15*p3.y*c_49-3*c_16*c_36+15*c_58*c_81-15*c_18*c_337-6*c_13*(p2.y*c_338-p3.y*
        c_339)+c_343-3*c_6*(3*c_4*c_35-8*c_36*c_318)-6*p2.y*p3.y*(c_4*c_344-4*c_350)-c_1*(9*p2.y*p3.y*c_351+9*c_6*c_235+8*
        (c_352+c_229+c_86+c_197+c_230+c_293+6*p1.z*(c_111+c_121+c_22)))-p1.y*(18*c_6*p3.y*c_36+6*c_17*c_353-16*p3.y*c_498+c_15*(c_371-3*c_119)+3*p2.y*
        (3*c_4*c_163+8*(c_352+c_21+c_164+c_98+c_293-2*c_19*c_119+p1.z*c_501)))))+p1.x*(15*c_309*p3.x*(c_356+5*p2.y+c_308)*c_215-15*
        c_354*(c_39-p2.y*p3.y*c_242+p1.y*p3.y*c_376+4*p1.y*p2.y*c_288+c_1*c_355-c_6*c_279)+3*c_211*p3.x*c_215*(5*c_43*
        (c_356+c_357+c_358)+3*(4*c_13+10*c_15+12*c_6*p3.y+9*p2.y*c_4+c_359+c_1*(9*p2.y+6*p3.y)-16*p3.y*c_146-8*p2.y*(c_62+c_52+c_65+c_66+4*
        p1.z*c_288)+2*p1.y*(6*c_6+6*p2.y*p3.y+3*c_4-8*c_271)))-c_216*(60*c_43*c_6*p1.z-45*c_16*p1.z+c_360-90*c_15*p3.y*p1.z-45*
        c_43*c_4*p1.z-54*c_6*c_4*p1.z-27*p2.y*c_17*p1.z+c_361+80*c_6*c_14+216*p2.y*p3.y*c_14+72*c_4*c_14+c_362+60*c_43*p2.y*p3.y*
        p2.z+180*c_15*p3.y*p2.z+45*c_43*c_4*p2.z+c_363+36*p2.y*c_17*p2.z+c_364+240*c_6*c_19*p2.z+480*p2.y*p3.y*c_19*p2.z+120*
        c_4*c_19*p2.z+240*c_6*p1.z*c_20+240*p2.y*p3.y*p1.z*c_20+48*c_4*p1.z*c_20+c_365-1440*p2.y*p3.y*c_21-240*c_4*c_21-60*c_43*
        c_6*p3.z-180*c_16*p3.z-45*c_43*p2.y*p3.y*p3.z-90*c_15*p3.y*p3.z-36*c_6*c_4*p3.z-9*p2.y*c_17*p3.z+c_366+168*p2.y*p3.y*
        c_19*p3.z+96*c_4*c_19*p3.z+c_367+288*p2.y*p3.y*p1.z*p2.z*p3.z+c_368+1440*c_6*c_20*p3.z-240*p2.y*p3.y*c_20*p3.z-192*
        c_4*c_20*p3.z+c_369+120*p2.y*p3.y*p1.z*c_22+c_430+480*c_6*p2.z*c_22+96*p2.y*p3.y*p2.z*c_22-72*c_4*p2.z*c_22+96*c_6*
        c_23+72*p2.y*p3.y*c_23+9*c_58*c_333+9*c_13*(8*p2.y*c_30+c_370)+c_1*(80*c_14+48*c_19*(p2.z+c_135)-9*p2.y*p3.y*(c_371+c_44+c_105)-30*
        c_43*c_3+9*c_4*c_372+18*c_6*c_334-48*p1.z*(c_20+c_373+c_66)-16*(c_283+c_374+c_230+c_204))+p1.y*(-18*c_6*p3.y*
        (c_33+c_61+c_2)+9*c_17*c_376+15*c_43*(-(p3.y*c_49)+2*p2.y*c_51)+24*p3.y*(c_459+c_273+c_377-7*p2.z*c_22-3*c_23+3*c_19*c_520+p1.z*
        c_521)-2*p2.y*(9*c_4*c_379+c_454)))+p2.x*(-30*c_134*c_6*p1.z-36*c_43*c_16*p1.z+c_384-45*c_134*p2.y*p3.y*p1.z-45*c_43*c_15*
        p3.y*p1.z+15*c_71*p3.y*p1.z+c_385-27*c_43*c_6*c_4*p1.z+15*c_16*c_4*p1.z+18*c_43*p2.y*c_17*p1.z+15*c_15*c_17*p1.z+c_386+15*
        c_6*c_18*p1.z+15*p2.y*c_72*p1.z+c_387+144*c_43*c_6*c_14+c_388+72*c_43*p2.y*p3.y*c_14-72*c_15*p3.y*c_14-216*c_43*c_4*
        c_14+c_389-72*p2.y*c_17*c_14-72*c_18*c_14+c_390+240*p2.y*p3.y*c_69+240*c_4*c_69+175*c_70*p2.z-30*c_134*p2.y*p3.y*p2.z-36*c_43*
        c_15*p3.y*p2.z-90*c_71*p3.y*p2.z-75*c_134*c_4*p2.z-81*c_43*c_6*c_4*p2.z+c_391-108*c_43*p2.y*c_17*p2.z-60*c_15*c_17*
        p2.z-90*c_43*c_18*p2.z-45*c_6*c_18*p2.z-30*p2.y*c_72*p2.z+c_392+c_393+120*c_16*c_19*p2.z+144*c_43*p2.y*p3.y*c_19*p2.z-96*
        c_15*p3.y*c_19*p2.z-72*c_43*c_4*c_19*p2.z-72*c_6*c_4*c_19*p2.z-48*p2.y*c_17*c_19*p2.z-24*c_18*c_19*p2.z-144*c_6*c_74*
        p2.z+c_394+144*c_4*c_74*p2.z+288*c_43*c_6*p1.z*c_20+120*c_16*p1.z*c_20+216*c_43*p2.y*p3.y*p1.z*c_20+c_471+72*c_43*c_4*p1.z*
        c_20+c_395+72*p2.y*c_17*p1.z*c_20+24*c_18*p1.z*c_20+c_396+144*p2.y*p3.y*c_14*c_20+48*c_4*c_14*c_20-280*c_16*c_21+288*c_43*
        p2.y*p3.y*c_21+1440*c_15*p3.y*c_21+216*c_43*c_4*c_21+720*c_6*c_4*c_21+288*p2.y*c_17*c_21+72*c_18*c_21-480*c_6*c_19*c_21-192*
        p2.y*p3.y*c_19*c_21-48*c_4*c_19*c_21-720*c_6*p1.z*c_75-720*p2.y*p3.y*p1.z*c_75-144*c_4*p1.z*c_75-1008*c_6*c_76-1440*p2.y*
        p3.y*c_76-240*c_4*c_76+30*c_134*c_6*p3.z+36*c_43*c_16*p3.z+90*c_70*p3.z+75*c_134*p2.y*p3.y*p3.z+81*c_43*c_15*p3.y*
        p3.z+c_397+108*c_43*c_6*c_4*p3.z+60*c_16*c_4*p3.z+c_398+45*c_15*c_17*p3.z+30*c_6*c_18*p3.z+c_399+c_400-96*c_16*c_19*p3.z+72*c_43*
        p2.y*p3.y*c_19*p3.z-120*c_15*p3.y*c_19*p3.z-576*c_43*c_4*c_19*p3.z+c_401-168*p2.y*c_17*c_19*p3.z-192*c_18*c_19*p3.z+96*
        c_6*c_74*p3.z+c_402+384*c_4*c_74*p3.z+144*c_43*c_6*p1.z*p2.z*p3.z-480*c_16*p1.z*p2.z*p3.z+144*c_43*p2.y*p3.y*p1.z*
        p2.z*p3.z-288*c_15*p3.y*p1.z*p2.z*p3.z-144*c_6*c_4*p1.z*p2.z*p3.z-48*p2.y*c_17*p1.z*p2.z*p3.z+288*c_6*c_14*p2.z*
        p3.z+c_403+c_404-288*c_43*c_6*c_20*p3.z-1440*c_16*c_20*p3.z+216*c_43*p2.y*p3.y*c_20*p3.z+c_405+576*c_43*c_4*c_20*p3.z+288*
        c_6*c_4*c_20*p3.z+360*p2.y*c_17*c_20*p3.z+192*c_18*c_20*p3.z+576*c_6*c_19*c_20*p3.z+144*p2.y*p3.y*c_19*c_20*p3.z+960*c_6*
        p1.z*c_21*p3.z+c_406+c_407+1440*c_6*c_75*p3.z+c_408-384*c_4*c_75*p3.z-96*c_16*p1.z*c_22-144*c_43*p2.y*p3.y*p1.z*c_22-168*
        c_15*p3.y*p1.z*c_22+c_409+c_410+c_486+c_411+96*c_6*c_14*c_22+240*p2.y*p3.y*c_14*c_22+432*c_4*c_14*c_22-432*c_43*c_6*p2.z*
        c_22-480*c_16*p2.z*c_22-288*c_43*p2.y*p3.y*p2.z*c_22-480*c_15*p3.y*p2.z*c_22+720*c_43*c_4*p2.z*c_22-216*c_6*c_4*p2.z*
        c_22+96*p2.y*c_17*p2.z*c_22+c_412+c_413+c_414+144*c_4*c_19*p2.z*c_22+576*c_6*p1.z*c_20*c_22+144*p2.y*p3.y*p1.z*c_20*c_22-144*
        c_4*p1.z*c_20*c_22+960*c_6*c_21*c_22-192*p2.y*p3.y*c_21*c_22-432*c_4*c_21*c_22-288*c_43*c_6*c_23-96*c_16*c_23-720*c_43*p2.y*
        p3.y*c_23-216*c_15*p3.y*c_23-288*c_6*c_4*c_23+c_415+96*c_6*c_19*c_23+240*p2.y*p3.y*c_19*c_23+384*c_4*c_19*c_23+288*c_6*
        p1.z*p2.z*c_23+c_416+576*c_6*c_20*c_23+144*p2.y*p3.y*c_20*c_23-384*c_4*c_20*c_23+c_417+240*p2.y*p3.y*p1.z*c_77+c_305+288*c_6*
        p2.z*c_77+288*p2.y*p3.y*p2.z*c_77+c_306+96*c_6*c_78+c_418-5*c_124*c_419-15*c_131*(4*p2.y*c_420+p3.y*c_455)+c_58*(15*c_4*
        (c_7+c_34+c_50)+15*p2.y*p3.y*c_422-15*c_6*(c_7+c_34+c_41)+4*(70*c_14+c_273-30*c_19*(p2.z-12*p3.z)+9*c_43*c_3+24*c_20*p3.z+24*
        p2.z*c_22+c_265-30*p1.z*(c_20-4*p2.z*p3.z-4*c_22)))+3*c_1*(15*c_18*p1.z+c_423+336*c_69-5*c_18*p2.z+c_424+240*c_74*p2.z+24*
        c_4*p1.z*c_20+160*c_14*c_20+c_425+c_426+48*p1.z*c_75+16*c_76+c_6*c_80*(15*c_4+16*c_428)-5*c_16*(p1.z+c_61+c_26)+10*c_134*
        c_3-10*c_18*p3.z-96*c_4*c_19*p3.z-480*c_74*p3.z+48*c_4*p1.z*p2.z*p3.z-320*c_14*p2.z*p3.z+c_429-192*c_19*c_20*p3.z-96*
        p1.z*c_21*p3.z-32*c_75*p3.z+c_430-320*c_14*c_22+c_239-192*c_19*p2.z*c_22+c_431-32*c_21*c_22+96*c_4*c_23-192*c_19*c_23-96*p1.z*
        p2.z*c_23-32*c_20*c_23-96*p1.z*c_77+c_432-32*c_78+5*c_15*p3.y*c_188+p2.y*p3.y*(c_499+96*c_21+5*c_4*c_379+c_331+c_264+c_265-48*
        c_19*c_288+24*p1.z*c_433)-3*c_43*(6*c_6*c_80-3*c_4*c_163+3*p2.y*p3.y*c_51+16*c_3*c_318))+c_13*(-40*c_15*c_80+15*c_17*
        c_351+15*c_6*p3.y*c_328+30*p2.y*c_4*c_235-9*c_43*(2*p2.y*c_141+p3.y*(c_223+c_61+c_383))+16*p2.y*c_438+24*p3.y*c_444)-p1.y*
        (-60*c_71*c_288-15*c_16*p3.y*c_445+15*c_134*(2*p2.y*c_80+p3.y*(c_375+c_140+c_0))+6*p2.y*c_4*c_80*c_447+2*c_15*(-15*c_4*
        c_51+c_454)+9*c_43*(3*c_6*p3.y*c_235+2*c_17*c_455-16*p2.y*c_80*c_271+c_15*(c_33-2*c_288)+8*p3.y*c_350)-3*c_6*p3.y*(5*c_4*c_141-24*
        (c_147+c_273+c_456+c_457+c_23+c_347+2*p1.z*c_458))-3*p3.y*(5*c_18*c_235-8*c_4*(c_459+c_561-7*c_20*p3.z+c_460+c_148+3*c_19*
        c_175-2*p1.z*c_348)+c_541)))+p3.x*(c_461-15*c_71*p3.y*p1.z-15*c_16*c_4*p1.z-15*c_15*c_17*p1.z-15*c_6*c_18*p1.z-15*p2.y*c_72*
        p1.z+c_462+72*c_16*c_14+72*c_15*p3.y*c_14+c_463+72*p2.y*c_17*c_14+c_464-240*c_6*c_69-240*p2.y*p3.y*c_69+c_465+c_466-30*
        c_16*c_4*p2.z-45*c_15*c_17*p2.z-60*c_6*c_18*p2.z+c_467-90*c_73*p2.z+192*c_16*c_19*p2.z+168*c_15*p3.y*c_19*p2.z+c_468+120*
        p2.y*c_17*c_19*p2.z+96*c_18*c_19*p2.z-384*c_6*c_74*p2.z+c_469-96*c_4*c_74*p2.z+c_470+c_471+c_472+168*p2.y*c_17*p1.z*c_20+96*
        c_18*p1.z*c_20-432*c_6*c_14*c_20-240*p2.y*p3.y*c_14*c_20-96*c_4*c_14*c_20+c_473+288*c_6*c_4*c_21+216*p2.y*c_17*c_21+96*c_18*
        c_21-384*c_6*c_19*c_21-240*p2.y*p3.y*c_19*c_21-96*c_4*c_19*c_21+c_300-240*p2.y*p3.y*p1.z*c_75+c_474+c_475-96*c_4*
        c_76+c_476+30*c_71*p3.y*p3.z+45*c_16*c_4*p3.z+60*c_15*c_17*p3.z+c_477+90*p2.y*c_72*p3.z-175*c_73*p3.z+24*c_16*c_19*p3.z+48*c_15*
        p3.y*c_19*p3.z+72*c_6*c_4*c_19*p3.z+96*p2.y*c_17*c_19*p3.z-120*c_18*c_19*p3.z-144*c_6*c_74*p3.z+c_478+144*c_4*c_74*
        p3.z+48*c_15*p3.y*p1.z*p2.z*p3.z+144*c_6*c_4*p1.z*p2.z*p3.z+288*p2.y*c_17*p1.z*p2.z*p3.z+480*c_18*p1.z*p2.z*
        p3.z+c_479+c_480-288*c_4*c_14*p2.z*p3.z+c_481-96*c_15*p3.y*c_20*p3.z+216*c_6*c_4*c_20*p3.z+480*p2.y*c_17*c_20*p3.z+480*c_18*c_20*
        p3.z-144*c_6*c_19*c_20*p3.z+c_482+c_483+c_484-288*c_4*p1.z*c_21*p3.z+c_303-288*p2.y*p3.y*c_75*p3.z-288*c_4*c_75*p3.z-24*
        c_16*p1.z*c_22-72*c_15*p3.y*p1.z*c_22+c_485+c_486-120*c_18*p1.z*c_22-48*c_6*c_14*c_22-144*p2.y*p3.y*c_14*c_22+c_487-192*
        c_16*p2.z*c_22-360*c_15*p3.y*p2.z*c_22-288*c_6*c_4*p2.z*c_22+c_488+1440*c_18*p2.z*c_22-144*p2.y*p3.y*c_19*p2.z*c_22-576*
        c_4*c_19*p2.z*c_22+144*c_6*p1.z*c_20*c_22-144*p2.y*p3.y*p1.z*c_20*c_22-576*c_4*p1.z*c_20*c_22+384*c_6*c_21*c_22-144*p2.y*
        p3.y*c_21*c_22-576*c_4*c_21*c_22-72*c_16*c_23-288*c_15*p3.y*c_23-720*c_6*c_4*c_23-1440*p2.y*c_17*c_23+280*c_18*c_23+48*c_6*c_19*
        c_23+192*p2.y*p3.y*c_19*c_23+480*c_4*c_19*c_23+c_489+c_490-960*c_4*p1.z*p2.z*c_23+432*c_6*c_20*c_23+192*p2.y*p3.y*c_20*
        c_23-960*c_4*c_20*c_23+144*c_6*p1.z*c_77+720*p2.y*p3.y*p1.z*c_77+720*c_4*p1.z*c_77+384*c_6*p2.z*c_77+c_491-1440*c_4*p2.z*
        c_77+240*c_6*c_78+1440*p2.y*p3.y*c_78+1008*c_4*c_78+5*c_124*c_492+15*c_131*(4*p3.y*c_493+p2.y*c_494)+15*c_134*(-(p2.y*p3.y*
        c_225)+c_312+p1.y*p2.y*c_376+4*p1.y*p3.y*c_119+c_1*c_337-c_4*c_224)+c_58*(15*c_4*(c_7+c_29+c_2)+15*c_6*c_495+15*p2.y*p3.y*
        (c_28+c_5+c_41)-8*(35*c_14+12*c_21+15*c_19*(12*p2.z+c_2)+c_100+c_380+c_114+15*p1.z*(c_106+c_121+c_96)))-3*c_1*(-5*c_18*
        (p1.z+c_40+c_105)+5*c_15*p3.y*c_562+5*c_16*c_379+16*c_4*c_498+p2.y*p3.y*(c_499+24*c_21+5*c_4*c_163+c_500+72*p2.z*c_22+96*c_23-48*
        c_19*c_119+24*p1.z*c_501)+16*(21*c_69+c_502+c_503-2*c_21*c_22-2*c_20*c_23-2*p2.z*c_77+c_78+15*c_74*(c_504+p3.z)-10*c_14*
        (c_111+c_88+c_96)-6*c_19*(c_158+c_164+c_336+c_505)-3*p1.z*(c_115+2*c_21*p3.z+2*c_20*c_22+2*p2.z*c_23-c_77))+3*c_6*(5*c_4*
        c_36+c_509))-c_13*(-40*c_17*c_36+15*c_15*c_328+30*c_6*p3.y*c_235+16*p3.y*c_513+3*p2.y*(5*c_4*c_351+8*c_519))+p1.y*(-30*c_16*p3.y*
        c_36+15*c_71*c_376-3*c_15*(-96*c_14+80*c_21+5*c_4*c_49+80*c_20*p3.z+56*p2.z*c_22+c_265-24*c_19*c_520-8*p1.z*c_521)-6*c_6*p3.y*
        (5*c_4*c_35-24*c_36*c_318)-4*c_17*(c_522+15*c_4*c_119-24*p1.z*p2.z*c_102+c_19*(-36*p2.z+48*p3.z)-4*(c_86+c_100+c_101+20*
        c_23))-3*p2.y*(5*c_18*c_344-24*c_4*c_350+c_541))+c_43*(-9*c_15*p3.y*c_163-90*p2.y*c_17*c_35-9*c_16*c_36+9*c_58*c_339-45*c_18*
        c_542+9*c_13*(8*p3.y*c_30+p2.y*c_543)+16*c_4*c_549-6*c_6*(3*c_4*c_285-4*c_36*c_552)+24*p2.y*p3.y*c_559+c_1*(-9*p2.y*p3.y*
        (c_371+c_61+c_50)+9*c_6*c_560+18*c_4*c_353+16*(c_94+c_561-9*c_20*p3.z-18*p2.z*c_22+c_114+3*c_19*(-6*p2.z+p3.z)-3*p1.z*
        (c_95+c_373+c_22)))-p1.y*(18*c_6*p3.y*c_562+9*c_15*c_235-16*p3.y*(8*c_14+c_561-12*c_20*p3.z-30*p2.z*c_22-20*c_23-6*p1.z*p2.z*
        c_102+c_19*(-9*p2.z+12*p3.z))+6*p2.y*(3*c_4*c_563+4*(-12*c_14+c_86+c_515+c_564+c_565-3*c_19*c_175+c_349)))))))/double(1451520);
}

double trig::s63() const{
    double p12_2=p1.z*p1.z;
    double p12_3=p1.z*p12_2;
    double p12_4=p1.z*p12_3;
    double p22_2=p2.z*p2.z;
    double p22_3=p2.z*p22_2;
    double p22_4=p2.z*p22_3;
    double p32_2=p3.z*p3.z;
    double p32_3=p3.z*p32_2;
    double p32_4=p3.z*p32_3;
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p21_4=p2.y*p21_3;
    double p21_5=p2.y*p21_4;
    double p21_6=p2.y*p21_5;
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p11_4=p1.y*p11_3;
    double p11_5=p1.y*p11_4;
    double p11_6=p1.y*p11_5;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p31_4=p3.y*p31_3;
    double p31_5=p3.y*p31_4;
    double p31_6=p3.y*p31_5;
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
    double c_0=-p3.z;
    double c_1=p2.z+c_0;
    double c_2=p12_2;
    double c_3=3*c_2;
    double c_4=p22_2;
    double c_5=p32_2;
    double c_6=p21_2;
    double c_7=-c_5;
    double c_8=p11_2;
    double c_9=5*p2.z*p3.z;
    double c_10=2*p3.z;
    double c_11=p2.z+c_10;
    double c_12=p31_2;
    double c_13=5*p2.z;
    double c_14=p1.z+c_0;
    double c_15=21*c_4;
    double c_16=2*p1.z;
    double c_17=c_16+c_13+c_10;
    double c_18=5*c_4;
    double c_19=3*p2.z*p3.z;
    double c_20=2*c_2;
    double c_21=5*p1.z*p3.z;
    double c_22=5*c_2;
    double c_23=5*p1.z*p2.z;
    double c_24=5*p1.z;
    double c_25=p2.z+p3.z;
    double c_26=2*c_25;
    double c_27=c_24+c_26;
    double c_28=2*p2.z;
    double c_29=c_28+p3.z;
    double c_30=3*p3.z;
    double c_31=-(5*p2.z*p3.z);
    double c_32=6*p1.z*p2.z;
    double c_33=p2.z*p3.z;
    double c_34=3*p2.z;
    double c_35=c_34+p3.z;
    double c_36=2*p2.z*p3.z;
    double c_37=p11_3;
    double c_38=p12_4;
    double c_39=p21_3;
    double c_40=p21_4;
    double c_41=p31_3;
    double c_42=p31_4;
    double c_43=p12_3;
    double c_44=p11_4;
    double c_45=p22_3;
    double c_46=p22_4;
    double c_47=p32_3;
    double c_48=p32_4;
    double c_49=-p2.z;
    double c_50=p1.z+c_49;
    double c_51=4*p1.z;
    double c_52=-(2*c_4);
    double c_53=3*c_4;
    double c_54=2*p1.z*p3.z;
    double c_55=2*c_5;
    double c_56=c_51+c_34+c_10;
    double c_57=-(5*p1.z*p3.z);
    double c_58=-(2*c_5);
    double c_59=4*p2.z*p3.z;
    double c_60=10*c_2;
    double c_61=c_51+c_28+c_30;
    double c_62=3*p1.z*p2.z;
    double c_63=-8*c_2;
    double c_64=-(5*p1.z*p2.z);
    double c_65=3*p1.z*p3.z;
    double c_66=2*c_4;
    double c_67=4*p1.z*p2.z;
    double c_68=-(6*c_5);
    double c_69=-20*c_2;
    double c_70=4*p1.z*p3.z;
    double c_71=p30_2;
    double c_72=3*c_5;
    double c_73=p1.z+p2.z+p3.z;
    double c_74=6*p1.z*p3.z;
    double c_75=15*p2.z*p3.z;
    double c_76=9*c_5;
    double c_77=4*p2.z;
    double c_78=-2*c_2;
    double c_79=12*c_5;
    double c_80=-(36*p2.z*c_47);
    double c_81=p11_5;
    double c_82=p21_6;
    double c_83=p21_5;
    double c_84=p31_5;
    double c_85=p31_6;
    double c_86=p11_6;
    double c_87=p20_3;
    double c_88=3*p1.z;
    double c_89=c_88+c_77+c_10;
    double c_90=c_16+c_77+c_30;
    double c_91=2*p1.z*p2.z;
    double c_92=p20_4;
    double c_93=-(30*c_4);
    double c_94=6*p2.z;
    double c_95=c_94+p3.z;
    double c_96=3*p1.z*c_11;
    double c_97=-c_2;
    double c_98=5*p3.z;
    double c_99=6*p2.z*p3.z;
    double c_100=8*c_2;
    double c_101=8*p2.z*p3.z;
    double c_102=5*c_5;
    double c_103=3*p1.z*c_29;
    double c_104=-6*c_2;
    double c_105=-(6*p1.z*p3.z);
    double c_106=4*p3.z;
    double c_107=c_16+c_34+c_106;
    double c_108=c_16+c_28+c_98;
    double c_109=c_88+c_28+c_106;
    double c_110=4*c_47;
    double c_111=p20_2;
    double c_112=-(5*c_40*p1.z*p2.z);
    double c_113=3*c_42*c_4;
    double c_114=-(40*c_6*p1.z*c_45);
    double c_115=-(9*c_6*c_12*p1.z*p3.z);
    double c_116=24*c_12*c_43*p3.z;
    double c_117=6*p2.y*c_41*p2.z*p3.z;
    double c_118=-(9*c_6*c_12*c_5);
    double c_119=36*p2.y*p3.y*p1.z*p2.z*c_5;
    double c_120=-(36*c_12*c_4*c_5);
    double c_121=24*p2.y*p3.y*p2.z*c_47;
    double c_122=12*c_6*c_48;
    double c_123=8*p1.z*p2.z;
    double c_124=6*c_5;
    double c_125=c_20+c_91+c_65+c_59+c_5;
    double c_126=p1.z*p3.z;
    double c_127=4*c_45;
    double c_128=-(5*c_4);
    double c_129=-(3*p2.z*p3.z);
    double c_130=-(4*c_5);
    double c_131=-(4*c_4);
    double c_132=-(p2.z*p3.z);
    double c_133=6*c_4;
    double c_134=9*p2.z*p3.z;
    double c_135=10*c_45*p3.z;
    double c_136=c_13+c_10;
    double c_137=6*c_4*p3.z;
    double c_138=6*p2.z*c_5;
    double c_139=4*c_2;
    double c_140=4*c_4;
    double c_141=-(30*c_5);
    double c_142=8*p1.z*p3.z;
    double c_143=7*p2.z*p3.z;
    double c_144=7*p2.z;
    double c_145=p2.z+c_106;
    double c_146=12*c_4*p3.z;
    double c_147=-(10*c_47);
    double c_148=4*c_43;
    double c_149=9*c_4*p3.z;
    double c_150=c_4+c_36+c_55;
    double c_151=c_20+c_62+c_4+c_54+c_59;
    double c_152=-4*c_2;
    double c_153=p1.z*p2.z;
    double c_154=4*c_5;
    double c_155=5*c_38;
    double c_156=c_97+c_91+c_4+c_9+c_102;
    double c_157=-c_4;
    double c_158=2*p1.z*c_25;
    double c_159=6*c_2;
    double c_160=-(3*c_5);
    double c_161=-5*c_38;
    double c_162=-(2*p3.z);
    double c_163=p2.z+c_162;
    double c_164=6*c_4*c_5;
    double c_165=-20*c_38;
    double c_166=4*c_46;
    double c_167=9*c_4*c_5;
    double c_168=10*p2.z*c_47;
    double c_169=p2.z+c_30;
    double c_170=c_127+c_137+c_138+c_110;
    double c_171=p1.z*c_170;
    double c_172=-(10*c_39*p3.y*p1.z*p2.z);
    double c_173=-(35*c_40*c_4);
    double c_174=120*c_6*c_2*c_4;
    double c_175=-(40*p2.y*p3.y*p1.z*c_45);
    double c_176=-(140*c_6*c_46);
    double c_177=-(10*c_40*p1.z*p3.z);
    double c_178=12*c_6*c_43*p3.z;
    double c_179=48*c_6*c_2*p2.z*p3.z;
    double c_180=120*c_6*p1.z*c_4*p3.z;
    double c_181=-(72*c_12*p1.z*c_4*p3.z);
    double c_182=12*c_6*c_2*c_5;
    double c_183=48*c_6*p1.z*p2.z*c_5;
    double c_184=12*c_6*p1.z*c_47;
    double c_185=-(6*p1.z*p2.z);
    double c_186=-(3*c_4);
    double c_187=-(6*c_4);
    double c_188=9*c_4;
    double c_189=12*c_4;
    double c_190=-(8*c_5);
    double c_191=-(2*p1.z*p3.z);
    double c_192=c_20+c_91+c_4+c_132+c_130;
    double c_193=-5*c_4;
    double c_194=c_193+c_33+c_5;
    double c_195=2*c_194;
    double c_196=c_3+c_65+c_195;
    double c_197=10*c_45;
    double c_198=9*p2.z*c_5;
    double c_199=9*p2.z;
    double c_200=6*p3.z;
    double c_201=c_199+c_200;
    double c_202=c_2*c_201;
    double c_203=c_66+c_36+c_5;
    double c_204=6*p1.z*c_203;
    double c_205=c_148+c_197+c_146+c_198+c_110+c_202+c_204;
    double c_206=7*p1.z*p2.z;
    double c_207=-(4*p2.z*p3.z);
    double c_208=-(20*c_5);
    double c_209=5*p1.z*c_29;
    double c_210=4*c_38;
    double c_211=10*c_46;
    double c_212=-(20*p2.z*c_47);
    double c_213=c_34+c_10;
    double c_214=c_77+p3.z;
    double c_215=12*p2.z*c_5;
    double c_216=p30_4;
    double c_217=12*c_40*c_38;
    double c_218=-(12*c_42*c_38);
    double c_219=-(75*c_40*c_12*c_4);
    double c_220=12*c_42*c_46;
    double c_221=15*c_83*p3.y*p1.z*p3.z;
    double c_222=-(12*c_39*p3.y*c_43*p3.z);
    double c_223=96*p2.y*c_41*c_45*p3.z;
    double c_224=75*c_6*c_42*c_5;
    double c_225=-(36*c_6*c_12*c_2*c_5);
    double c_226=-(120*p2.y*c_41*p1.z*c_47);
    double c_227=-(96*c_39*p3.y*p2.z*c_47);
    double c_228=-(12*c_40*c_48);
    double c_229=-(p1.z*p2.z);
    double c_230=c_22+c_157+c_21+c_36+c_5;
    double c_231=c_20+c_131+c_54+c_132+c_5;
    double c_232=-(2*p1.z*p2.z);
    double c_233=-(2*p2.z*p3.z);
    double c_234=-(5*c_5);
    double c_235=10*c_47;
    double c_236=9*p3.z;
    double c_237=c_94+c_236;
    double c_238=c_2*c_237;
    double c_239=6*p1.z*c_150;
    double c_240=c_148+c_127+c_149+c_215+c_235+c_238+c_239;
    double c_241=10*c_43;
    double c_242=12*c_2*c_25;
    double c_243=c_53+c_59+c_72;
    double c_244=3*p1.z*c_243;
    double c_245=c_241+c_127+c_137+c_138+c_110+c_242+c_244;
    double c_246=c_88+p2.z+c_98;
    double c_247=3*c_4*p3.z;
    double c_248=c_4+c_19+c_124;
    double c_249=3*p2.z*c_47;
    double c_250=3*p2.z*c_5;
    double c_251=14*c_2;
    double c_252=-(10*c_4);
    double c_253=12*p2.z*p3.z;
    double c_254=-(12*c_5);
    double c_255=-(4*p1.z*p2.z);
    double c_256=2*c_4*p3.z;
    double c_257=4*c_45*p3.z;
    double c_258=8*p2.z;
    double c_259=8*c_4;
    double c_260=-(6*p2.z*p3.z);
    double c_261=4*c_205;
    double c_262=c_258+p3.z;
    double c_263=10*c_4;
    double c_264=c_263+c_59+c_5;
    double c_265=10*c_5;
    double c_266=-(20*c_4);
    double c_267=7*p1.z*p3.z;
    double c_268=5*p1.z*c_11;
    double c_269=-(8*c_4);
    double c_270=p1.z*c_145;
    double c_271=12*c_4*c_5;
    double c_272=-(60*c_48);
    double c_273=8*c_38;
    double c_274=c_28+c_30;
    double c_275=-(6*c_4*p3.z);
    double c_276=20*c_47;
    double c_277=-(15*p2.y*c_84*p1.z*p2.z);
    double c_278=12*p2.y*c_41*c_43*p2.z;
    double c_279=36*c_6*c_12*c_2*c_4;
    double c_280=120*c_39*p3.y*p1.z*c_45;
    double c_281=-(p1.z*p3.z);
    double c_282=6*p1.z;
    double c_283=c_22+c_23+c_4+c_36+c_7;
    double c_284=7*p3.z;
    double c_285=c_28+c_98;
    double c_286=30*p2.z*p3.z;
    double c_287=21*c_5;
    double c_288=p1.z*c_214;
    double c_289=4*c_4*p3.z;
    double c_290=-(3*c_47);
    double c_291=9*p1.z*p2.z;
    double c_292=-(10*c_5);
    double c_293=3*c_4*c_5;
    double c_294=4*p2.z*c_47;
    double c_295=3*c_45;
    double c_296=-(8*c_47);
    double c_297=20*c_43;
    double c_298=2*p2.z*c_5;
    double c_299=8*p3.z;
    double c_300=3*c_38;
    double c_301=10*c_4*c_5;
    double c_302=-(35*c_48);
    double c_303=p2.z+c_299;
    double c_304=c_4+c_59+c_265;
    double c_305=-5*c_12*c_107;
    double c_306=c_305+c_261;
    double c_307=4*p2.z*c_5;
    double c_308=-5*c_12*c_108;
    double c_309=4*c_240;
    double c_310=c_308+c_309;
    double c_311=c_88+c_13+p3.z;
    double c_312=3*c_45*p3.z;
    double c_313=c_133+c_19+c_5;
    double c_314=-5*c_12*c_109;
    double c_315=4*c_245;
    double c_316=c_314+c_315;
    double c_317=9*p1.z*p3.z;
    double c_318=12*p1.z*p2.z;
    double c_319=9*c_2;
    double c_320=36*p2.z*p3.z;
    double c_321=20*c_45*p3.z;
    double c_322=20*p2.z*c_47;
    double c_323=10*c_48;
    double c_324=15*p1.z*p3.z;
    double c_325=p1.z+p2.z+c_284;
    double c_326=p2.z+c_98;
    double c_327=3*c_46;
    double c_328=-(5*c_48);
    double c_329=-(5*c_47);
    double c_330=7*c_5;
    double c_331=p2.z+c_200;
    double c_332=-(5*c_46);
    double c_333=10*p2.z*c_5;
    double c_334=18*p2.z*p3.z;
    double c_335=-(90*c_4*c_5);
    double c_336=-(36*p2.z*p3.z);
    double c_337=c_51+c_77+p3.z;
    double c_338=2*p1.z*c_11;
    double c_339=c_13+p3.z;
    double c_340=-(3*p1.z*p2.z);
    double c_341=18*c_71*c_6*c_2;
    double c_342=-(27*c_71*c_12*c_2);
    double c_343=-(3*c_42*c_2);
    double c_344=6*p2.y*c_41*c_4;
    double c_345=-(9*c_71*p2.y*p3.y*p1.z*p3.z);
    double c_346=-(36*c_71*c_12*p1.z*p3.z);
    double c_347=-(4*c_42*p1.z*p3.z);
    double c_348=36*c_71*c_12*p2.z*p3.z;
    double c_349=4*c_42*p2.z*p3.z;
    double c_350=-(24*c_12*c_45*p3.z);
    double c_351=-(36*c_71*p2.y*p3.y*c_5);
    double c_352=-(6*c_39*p3.y*c_5);
    double c_353=-(4*p2.y*c_41*c_5);
    double c_354=36*p2.y*p3.y*c_2*c_5;
    double c_355=36*c_12*c_2*c_5;
    double c_356=16*c_12*p1.z*c_47;
    double c_357=24*c_6*p2.z*c_47;
    double c_358=-(16*c_12*p2.z*c_47);
    double c_359=16*p2.y*p3.y*c_48;
    double c_360=2*p3.z*c_25;
    double c_361=9*c_71*p2.z*p3.z;
    double c_362=12*c_45*p3.z;
    double c_363=c_24+c_34+p3.z;
    double c_364=30*c_2;
    double c_365=-(9*c_5);
    double c_366=c_66+c_19+c_5+c_338;
    double c_367=p2.y*c_230;
    double c_368=-30*c_2;
    double c_369=c_51+p2.z+c_106;
    double c_370=15*p3.z;
    double c_371=8*c_46;
    double c_372=7*c_45*p3.z;
    double c_373=4*c_48;
    double c_374=5*c_45;
    double c_375=10*c_43*p3.z;
    double c_376=2*p2.z*c_47;
    double c_377=c_4+c_233+c_7;
    double c_378=-(6*c_2*c_377);
    double c_379=-8*c_45;
    double c_380=3*c_47;
    double c_381=c_379+c_149+c_138+c_380;
    double c_382=p1.z*c_381;
    double c_383=c_155+c_332+c_375+c_257+c_293+c_376+c_48+c_378+c_382;
    double c_384=4*c_383;
    double c_385=3*c_6*c_12*c_2;
    double c_386=8*c_42*p1.z*p2.z;
    double c_387=-(36*p2.y*p3.y*c_2*c_4);
    double c_388=-(24*c_12*c_2*c_4);
    double c_389=5*c_42*p1.z*p3.z;
    double c_390=8*p2.y*c_41*p2.z*p3.z;
    double c_391=-(24*p2.y*p3.y*c_2*p2.z*p3.z);
    double c_392=-(12*c_6*c_12*c_5);
    double c_393=10*c_42*c_5;
    double c_394=24*c_12*c_2*c_5;
    double c_395=-(96*c_12*p1.z*p2.z*c_5);
    double c_396=-(48*c_12*c_4*c_5);
    double c_397=40*c_12*p1.z*c_47;
    double c_398=32*p2.y*p3.y*p2.z*c_47;
    double c_399=40*c_12*c_48;
    double c_400=7*c_2;
    double c_401=-140*c_38;
    double c_402=12*p2.z*c_47;
    double c_403=c_24+p2.z+c_30;
    double c_404=-(9*p2.z*p3.z);
    double c_405=12*c_2;
    double c_406=-(3*p1.z*p3.z);
    double c_407=-(7*p2.z*p3.z);
    double c_408=10*c_43*p2.z;
    double c_409=2*c_45*p3.z;
    double c_410=c_4+c_36+c_7;
    double c_411=6*c_2*c_410;
    double c_412=c_295+c_137+c_198+c_296;
    double c_413=p1.z*c_412;
    double c_414=c_155+c_408+c_46+c_409+c_293+c_294+c_328+c_411+c_413;
    double c_415=-60*c_38;
    double c_416=7*p2.z*c_47;
    double c_417=8*c_48;
    return (9*p10_5*(3*c_8*c_1*(7*p1.z+p2.z+p3.z)+p2.y*p3.y*c_1*c_27+c_12*(c_3+p1.z*c_339+p2.z*c_11)-c_6*(c_3+p3.z*c_29+p1.z*
        c_326)+p1.y*(p2.y*(-21*c_2+c_4-30*p1.z*p3.z+c_31+c_234)+p3.y*(21*c_2+30*p1.z*p2.z+c_18+c_9+c_7)))+9*p20_5*(-3*c_6*c_14*
        (p1.z+c_144+p3.z)-p2.y*p3.y*(c_22+c_15+c_7+5*p1.z*c_95)+c_8*(c_53+c_9+c_5+p1.z*c_11)-c_12*(c_2+p2.z*c_35+p1.z*c_136)+p1.y*
        (-(p3.y*c_14*c_17)+p2.y*(c_97+c_15+c_21+c_286+c_102)))-9*c_92*p3.x*(c_8*c_1*c_17+c_12*(c_20+c_123+c_18+c_74+c_19)+3*p2.y*
        p3.y*(c_2+c_23+c_18+c_54+c_7)-5*c_6*(c_2+c_32+c_126+c_19+c_5)-p1.y*(p3.y*(c_78+c_64+c_128+c_99+c_124)+p2.y*(c_20+c_93+c_21+c_75+8*
        c_5)))+9*p10_4*(p3.x*(p2.y*p3.y*(c_22+c_23+c_66+c_105+c_68)+c_6*c_14*c_27-5*c_8*(c_4+c_33+c_5+c_103)+c_12*(c_22+2*p2.z*
        c_169+p1.z*(c_258+c_30))+p1.y*(p2.y*(c_364+c_52-15*p1.z*p3.z+c_31+c_190)+3*p3.y*c_283))+p2.x*(p2.y*p3.y*(-5*
        c_2+c_32+c_133+c_57+c_58)-c_12*c_50*c_27+5*c_8*(c_4+c_33+c_5+c_96)-c_6*(c_22+2*p3.z*c_35+p1.z*(c_34+c_299))+p1.y*(-3*p2.y*c_230+p3.y*
        (c_368+15*p1.z*p2.z+c_259+c_9+c_55))))+p10_3*(-70*c_37*p2.y*c_2-30*c_8*c_6*c_2-10*p1.y*c_39*c_2-2*c_40*c_2+70*c_37*p3.y*
        c_2+30*c_8*c_12*c_2+10*p1.y*c_41*c_2+2*c_42*c_2-140*p1.y*p2.y*c_38-20*c_6*c_38+140*p1.y*p3.y*c_38+20*c_12*c_38-35*c_44*p1.z*
        p2.z-40*c_37*p2.y*p1.z*p2.z-30*c_8*c_6*p1.z*p2.z-16*p1.y*c_39*p1.z*p2.z+c_112+180*c_37*p3.y*p1.z*p2.z+90*c_8*p2.y*
        p3.y*p1.z*p2.z+36*p1.y*c_6*p3.y*p1.z*p2.z+9*c_39*p3.y*p1.z*p2.z+90*c_8*c_12*p1.z*p2.z+36*p1.y*p2.y*c_12*p1.z*
        p2.z+9*c_6*c_12*p1.z*p2.z+36*p1.y*c_41*p1.z*p2.z+9*p2.y*c_41*p1.z*p2.z+9*c_42*p1.z*p2.z-280*c_8*c_43*p2.z-160*p1.y*
        p2.y*c_43*p2.z-40*c_6*c_43*p2.z-720*p1.y*p3.y*c_43*p2.z-120*p2.y*p3.y*c_43*p2.z-120*c_12*c_43*p2.z-5*c_44*c_4-10*c_37*
        p2.y*c_4-12*c_8*c_6*c_4-10*p1.y*c_39*c_4-5*c_40*c_4+30*c_37*p3.y*c_4+36*c_8*p2.y*p3.y*c_4+27*p1.y*c_6*p3.y*c_4+12*c_39*p3.y*
        c_4+18*c_8*c_12*c_4+18*p1.y*p2.y*c_12*c_4+9*c_6*c_12*c_4+9*p1.y*c_41*c_4+c_344+c_113-120*c_8*c_2*c_4-120*p1.y*p2.y*c_2*
        c_4-48*c_6*c_2*c_4-360*p1.y*p3.y*c_2*c_4-144*p2.y*p3.y*c_2*c_4-72*c_12*c_2*c_4-40*c_8*p1.z*c_45-64*p1.y*p2.y*p1.z*c_45+c_114-144*
        p1.y*p3.y*p1.z*c_45-108*p2.y*p3.y*p1.z*c_45-36*c_12*p1.z*c_45-8*c_8*c_46-20*p1.y*p2.y*c_46-20*c_6*c_46-36*p1.y*
        p3.y*c_46-48*p2.y*p3.y*c_46-12*c_12*c_46+35*c_44*p1.z*p3.z-180*c_37*p2.y*p1.z*p3.z-90*c_8*c_6*p1.z*p3.z-36*p1.y*c_39*
        p1.z*p3.z-9*c_40*p1.z*p3.z+40*c_37*p3.y*p1.z*p3.z-90*c_8*p2.y*p3.y*p1.z*p3.z-36*p1.y*c_6*p3.y*p1.z*p3.z-9*c_39*
        p3.y*p1.z*p3.z+30*c_8*c_12*p1.z*p3.z-36*p1.y*p2.y*c_12*p1.z*p3.z+c_115+16*p1.y*c_41*p1.z*p3.z-9*p2.y*c_41*p1.z*
        p3.z+c_389+280*c_8*c_43*p3.z+720*p1.y*p2.y*c_43*p3.z+120*c_6*c_43*p3.z+160*p1.y*p3.y*c_43*p3.z+120*p2.y*p3.y*c_43*p3.z+40*
        c_12*c_43*p3.z-30*c_37*p2.y*p2.z*p3.z-36*c_8*c_6*p2.z*p3.z-27*p1.y*c_39*p2.z*p3.z-12*c_40*p2.z*p3.z+30*c_37*p3.y*
        p2.z*p3.z-9*p1.y*c_6*p3.y*p2.z*p3.z-6*c_39*p3.y*p2.z*p3.z+36*c_8*c_12*p2.z*p3.z+9*p1.y*p2.y*c_12*p2.z*p3.z+27*p1.y*
        c_41*p2.z*p3.z+c_117+12*c_42*p2.z*p3.z+360*p1.y*p2.y*c_2*p2.z*p3.z+144*c_6*c_2*p2.z*p3.z-360*p1.y*p3.y*c_2*p2.z*
        p3.z-144*c_12*c_2*p2.z*p3.z+144*p1.y*p2.y*p1.z*c_4*p3.z+108*c_6*p1.z*c_4*p3.z-144*p1.y*p3.y*p1.z*c_4*p3.z-36*p2.y*
        p3.y*p1.z*c_4*p3.z+c_181+36*p1.y*p2.y*c_45*p3.z+48*c_6*c_45*p3.z-36*p1.y*p3.y*c_45*p3.z-24*p2.y*p3.y*c_45*p3.z+c_350+5*
        c_44*c_5-30*c_37*p2.y*c_5-18*c_8*c_6*c_5-9*p1.y*c_39*c_5-3*c_40*c_5+10*c_37*p3.y*c_5-36*c_8*p2.y*p3.y*c_5-18*p1.y*c_6*
        p3.y*c_5+c_352+12*c_8*c_12*c_5-27*p1.y*p2.y*c_12*c_5+c_118+10*p1.y*c_41*c_5-12*p2.y*c_41*c_5+5*c_42*c_5+120*c_8*c_2*c_5+360*
        p1.y*p2.y*c_2*c_5+72*c_6*c_2*c_5+120*p1.y*p3.y*c_2*c_5+144*p2.y*p3.y*c_2*c_5+48*c_12*c_2*c_5+144*p1.y*p2.y*p1.z*p2.z*
        c_5+72*c_6*p1.z*p2.z*c_5-144*p1.y*p3.y*p1.z*p2.z*c_5+c_119-108*c_12*p1.z*p2.z*c_5+36*p1.y*p2.y*c_4*c_5+36*c_6*c_4*c_5-36*
        p1.y*p3.y*c_4*c_5+c_120+40*c_8*p1.z*c_47+144*p1.y*p2.y*p1.z*c_47+36*c_6*p1.z*c_47+64*p1.y*p3.y*p1.z*c_47+108*p2.y*
        p3.y*p1.z*c_47+c_397+36*p1.y*p2.y*p2.z*c_47+c_357-36*p1.y*p3.y*p2.z*c_47+c_121-48*c_12*p2.z*c_47+8*c_8*c_48+36*p1.y*
        p2.y*c_48+c_122+20*p1.y*p3.y*c_48+48*p2.y*p3.y*c_48+20*c_12*c_48-18*p2.x*p3.x*(-3*p2.y*p3.y*c_1*c_73-c_6*c_14*c_56+c_12*
        c_50*c_61+2*c_8*c_1*c_27+p1.y*(p3.y*(c_60+c_232+c_52+c_129+c_160)+p2.y*(-10*c_2+c_53+c_54+c_19+c_55)))+9*c_111*(-(c_12*c_50*
        c_56)+p2.y*p3.y*(c_63+c_62+c_189+c_57+c_58)-3*c_6*c_125+2*c_8*(c_53+c_59+c_55+c_268)+p1.y*(-(p2.y*(c_60+c_187+c_70+c_19+c_5))+p3.y*
        (c_69+c_67+c_188+c_9+c_55)))-9*c_71*(-(c_6*c_14*c_61)-3*c_12*c_151+p2.y*p3.y*(c_63+c_64+c_52+c_65+c_79)+2*c_8*
        (c_66+c_59+c_72+c_209)+p1.y*(-(p3.y*(c_60+c_67+c_4+c_19+c_68))+p2.y*(c_69+c_66+c_70+c_9+c_76))))+c_87*(36*c_71*c_6*c_2+5*c_40*c_2-9*
        c_71*p2.y*p3.y*c_2-30*c_39*p3.y*c_2+c_342-18*c_6*c_12*c_2-9*p2.y*c_41*c_2+c_343+8*c_6*c_38+36*p2.y*p3.y*c_38+12*c_12*c_38+180*
        c_71*c_6*p1.z*p2.z+35*c_40*p1.z*p2.z-36*c_71*p2.y*p3.y*p1.z*p2.z-180*c_39*p3.y*p1.z*p2.z-81*c_71*c_12*p1.z*p2.z-90*
        c_6*c_12*p1.z*p2.z-36*p2.y*c_41*p1.z*p2.z-9*c_42*p1.z*p2.z+40*c_6*c_43*p2.z+144*p2.y*p3.y*c_43*p2.z+36*c_12*c_43*
        p2.z-90*c_71*p2.y*p3.y*c_4-70*c_39*p3.y*c_4-54*c_71*c_12*c_4-30*c_6*c_12*c_4-10*p2.y*c_41*c_4-2*c_42*c_4+c_174+360*p2.y*
        p3.y*c_2*c_4+72*c_12*c_2*c_4+280*c_6*p1.z*c_45+720*p2.y*p3.y*p1.z*c_45+120*c_12*p1.z*c_45-140*p2.y*p3.y*c_46-20*c_12*c_46+72*
        c_71*c_6*p1.z*p3.z-27*c_71*p2.y*p3.y*p1.z*p3.z-30*c_39*p3.y*p1.z*p3.z-108*c_71*c_12*p1.z*p3.z-36*c_6*c_12*p1.z*
        p3.z-27*p2.y*c_41*p1.z*p3.z-12*c_42*p1.z*p3.z+36*p2.y*p3.y*c_43*p3.z+c_116+90*c_71*c_6*p2.z*p3.z-35*c_40*p2.z*p3.z-40*
        c_39*p3.y*p2.z*p3.z-54*c_71*c_12*p2.z*p3.z-30*c_6*c_12*p2.z*p3.z-16*p2.y*c_41*p2.z*p3.z-5*c_42*p2.z*p3.z+144*p2.y*
        p3.y*c_2*p2.z*p3.z+72*c_12*c_2*p2.z*p3.z+360*p2.y*p3.y*p1.z*c_4*p3.z+144*c_12*p1.z*c_4*p3.z-280*c_6*c_45*p3.z-160*
        p2.y*p3.y*c_45*p3.z-40*c_12*c_45*p3.z+54*c_71*c_6*c_5-5*c_40*c_5+54*c_71*p2.y*p3.y*c_5-10*c_39*p3.y*c_5+c_392-10*p2.y*c_41*
        c_5-5*c_42*c_5+c_354+c_355+144*p2.y*p3.y*p1.z*p2.z*c_5+108*c_12*p1.z*p2.z*c_5-120*c_6*c_4*c_5-120*p2.y*p3.y*c_4*
        c_5+c_396+36*p2.y*p3.y*p1.z*c_47+48*c_12*p1.z*c_47-40*c_6*p2.z*c_47-64*p2.y*p3.y*p2.z*c_47-40*c_12*p2.z*c_47-8*c_6*c_48-20*
        p2.y*p3.y*c_48-20*c_12*c_48+c_44*(c_22+c_23+c_66+12*p1.z*p3.z+c_134+c_72)+c_8*(20*c_38-18*c_71*p1.z*p2.z+40*c_43*p2.z-36*
        c_71*c_4+48*c_2*c_4+40*p1.z*c_45+20*c_46+18*c_71*p1.z*p3.z-48*c_43*p3.z+c_361-108*c_2*p2.z*p3.z-144*p1.z*c_4*p3.z-120*c_45*
        p3.z+27*c_71*c_5-36*c_2*c_5-72*p1.z*p2.z*c_5-72*c_4*c_5-24*p1.z*c_47+c_80-12*c_48-9*c_12*c_14*c_73-9*p2.y*p3.y*c_14*c_89+6*
        c_6*(c_20+c_23+c_18+c_74+c_75+c_72))+c_37*(-3*p3.y*c_14*c_56+p2.y*(c_60+16*p1.z*p2.z+c_263+27*p1.z*p3.z+c_320+c_76))+p1.y*
        (-18*c_6*p3.y*c_14*c_17-9*p2.y*c_12*c_14*c_90+10*c_39*(c_2+c_67+7*c_4+c_65+c_334+c_72)+9*c_71*(p2.y*(c_20+c_266+c_21+c_59+c_76)+p3.y*
        (c_78+c_64+c_269+c_19+c_79))+4*p2.y*(c_155+35*c_46+c_43*(16*p2.z-9*p3.z)-180*c_45*p3.z+c_335+c_80-9*c_48+c_2*
        (30*c_4+c_336+c_365)+p1.z*(40*c_45-90*c_4*p3.z-36*p2.z*c_5-9*c_47))+3*p3.y*c_14*(-(c_12*c_107)+c_261)))+p1.x*(-105*c_81*p2.y*
        c_2-75*c_44*c_6*c_2-50*c_37*c_39*c_2-30*c_8*c_40*c_2-15*p1.y*c_83*c_2-5*c_82*c_2+105*c_81*p3.y*c_2+75*c_44*c_12*c_2+50*c_37*
        c_41*c_2+30*c_8*c_42*c_2+15*p1.y*c_84*c_2+5*c_85*c_2+420*c_37*p2.y*c_38+180*c_8*c_6*c_38+60*p1.y*c_39*c_38+c_217-420*c_37*
        p3.y*c_38-180*c_8*c_12*c_38-60*p1.y*c_41*c_38+c_218+175*c_86*p1.z*p2.z+120*c_81*p2.y*p1.z*p2.z+75*c_44*c_6*p1.z*p2.z+40*
        c_37*c_39*p1.z*p2.z+15*c_8*c_40*p1.z*p2.z-5*c_82*p1.z*p2.z-90*c_81*p3.y*p1.z*p2.z-75*c_44*p2.y*p3.y*p1.z*p2.z-60*c_37*
        c_6*p3.y*p1.z*p2.z-45*c_8*c_39*p3.y*p1.z*p2.z-30*p1.y*c_40*p3.y*p1.z*p2.z-15*c_83*p3.y*p1.z*p2.z-75*c_44*c_12*p1.z*
        p2.z-60*c_37*p2.y*c_12*p1.z*p2.z-45*c_8*c_6*c_12*p1.z*p2.z-30*p1.y*c_39*c_12*p1.z*p2.z-15*c_40*c_12*p1.z*p2.z-60*
        c_37*c_41*p1.z*p2.z-45*c_8*p2.y*c_41*p1.z*p2.z-30*p1.y*c_6*c_41*p1.z*p2.z-15*c_39*c_41*p1.z*p2.z-45*c_8*c_42*p1.z*
        p2.z-30*p1.y*p2.y*c_42*p1.z*p2.z-15*c_6*c_42*p1.z*p2.z-30*p1.y*c_84*p1.z*p2.z+c_277-15*c_85*p1.z*p2.z-420*c_44*c_43*
        p2.z+120*c_8*c_6*c_43*p2.z+96*p1.y*c_39*c_43*p2.z+36*c_40*c_43*p2.z+240*c_37*p3.y*c_43*p2.z+120*c_8*p2.y*p3.y*c_43*p2.z+48*
        p1.y*c_6*p3.y*c_43*p2.z+12*c_39*p3.y*c_43*p2.z+120*c_8*c_12*c_43*p2.z+48*p1.y*p2.y*c_12*c_43*p2.z+12*c_6*c_12*c_43*
        p2.z+48*p1.y*c_41*c_43*p2.z+c_278+12*c_42*c_43*p2.z+25*c_86*c_4+45*c_81*p2.y*c_4+60*c_44*c_6*c_4+70*c_37*c_39*c_4+75*c_8*c_40*
        c_4+75*p1.y*c_83*c_4+70*c_82*c_4-15*c_81*p3.y*c_4-30*c_44*p2.y*p3.y*c_4-45*c_37*c_6*p3.y*c_4-60*c_8*c_39*p3.y*c_4-75*p1.y*
        c_40*p3.y*c_4-90*c_83*p3.y*c_4-15*c_44*c_12*c_4-30*c_37*p2.y*c_12*c_4-45*c_8*c_6*c_12*c_4-60*p1.y*c_39*c_12*c_4+c_219-15*
        c_37*c_41*c_4-30*c_8*p2.y*c_41*c_4-45*p1.y*c_6*c_41*c_4-60*c_39*c_41*c_4-15*c_8*c_42*c_4-30*p1.y*p2.y*c_42*c_4-45*c_6*c_42*
        c_4-15*p1.y*c_84*c_4-30*p2.y*c_84*c_4-15*c_85*c_4-180*c_44*c_2*c_4-120*c_37*p2.y*c_2*c_4+72*p1.y*c_39*c_2*c_4+60*c_40*c_2*
        c_4+120*c_37*p3.y*c_2*c_4+144*c_8*p2.y*p3.y*c_2*c_4+108*p1.y*c_6*p3.y*c_2*c_4+48*c_39*p3.y*c_2*c_4+72*c_8*c_12*c_2*c_4+72*p1.y*
        p2.y*c_12*c_2*c_4+c_279+36*p1.y*c_41*c_2*c_4+24*p2.y*c_41*c_2*c_4+12*c_42*c_2*c_4-60*c_44*p1.z*c_45-96*c_37*p2.y*p1.z*
        c_45-72*c_8*c_6*p1.z*c_45+60*c_40*p1.z*c_45+48*c_37*p3.y*p1.z*c_45+108*c_8*p2.y*p3.y*p1.z*c_45+144*p1.y*c_6*p3.y*p1.z*
        c_45+c_280+36*c_8*c_12*p1.z*c_45+72*p1.y*p2.y*c_12*p1.z*c_45+72*c_6*c_12*p1.z*c_45+24*p1.y*c_41*p1.z*c_45+36*p2.y*c_41*
        p1.z*c_45+12*c_42*p1.z*c_45-12*c_44*c_46-36*c_37*p2.y*c_46-60*c_8*c_6*c_46-60*p1.y*c_39*c_46+12*c_37*p3.y*c_46+48*c_8*p2.y*
        p3.y*c_46+120*p1.y*c_6*p3.y*c_46+240*c_39*p3.y*c_46+12*c_8*c_12*c_46+48*p1.y*p2.y*c_12*c_46+120*c_6*c_12*c_46+12*p1.y*c_41*
        c_46+48*p2.y*c_41*c_46+c_220-175*c_86*p1.z*p3.z+90*c_81*p2.y*p1.z*p3.z+75*c_44*c_6*p1.z*p3.z+60*c_37*c_39*p1.z*p3.z+45*
        c_8*c_40*p1.z*p3.z+30*p1.y*c_83*p1.z*p3.z+15*c_82*p1.z*p3.z-120*c_81*p3.y*p1.z*p3.z+75*c_44*p2.y*p3.y*p1.z*p3.z+60*
        c_37*c_6*p3.y*p1.z*p3.z+45*c_8*c_39*p3.y*p1.z*p3.z+30*p1.y*c_40*p3.y*p1.z*p3.z+c_221-75*c_44*c_12*p1.z*p3.z+60*
        c_37*p2.y*c_12*p1.z*p3.z+45*c_8*c_6*c_12*p1.z*p3.z+30*p1.y*c_39*c_12*p1.z*p3.z+15*c_40*c_12*p1.z*p3.z-40*c_37*c_41*p1.z*
        p3.z+45*c_8*p2.y*c_41*p1.z*p3.z+30*p1.y*c_6*c_41*p1.z*p3.z+15*c_39*c_41*p1.z*p3.z-15*c_8*c_42*p1.z*p3.z+30*p1.y*
        p2.y*c_42*p1.z*p3.z+15*c_6*c_42*p1.z*p3.z+15*p2.y*c_84*p1.z*p3.z+5*c_85*p1.z*p3.z+420*c_44*c_43*p3.z-240*c_37*p2.y*
        c_43*p3.z-120*c_8*c_6*c_43*p3.z-48*p1.y*c_39*c_43*p3.z-12*c_40*c_43*p3.z-120*c_8*p2.y*p3.y*c_43*p3.z-48*p1.y*c_6*p3.y*
        c_43*p3.z+c_222-120*c_8*c_12*c_43*p3.z-48*p1.y*p2.y*c_12*c_43*p3.z-12*c_6*c_12*c_43*p3.z-96*p1.y*c_41*c_43*p3.z-12*p2.y*
        c_41*c_43*p3.z-36*c_42*c_43*p3.z+15*c_81*p2.y*p2.z*p3.z+30*c_44*c_6*p2.z*p3.z+45*c_37*c_39*p2.z*p3.z+60*c_8*c_40*p2.z*
        p3.z+75*p1.y*c_83*p2.z*p3.z+90*c_82*p2.z*p3.z-15*c_81*p3.y*p2.z*p3.z+15*c_37*c_6*p3.y*p2.z*p3.z+30*c_8*c_39*p3.y*
        p2.z*p3.z+45*p1.y*c_40*p3.y*p2.z*p3.z+60*c_83*p3.y*p2.z*p3.z-30*c_44*c_12*p2.z*p3.z-15*c_37*p2.y*c_12*p2.z*p3.z+15*
        p1.y*c_39*c_12*p2.z*p3.z+30*c_40*c_12*p2.z*p3.z-45*c_37*c_41*p2.z*p3.z-30*c_8*p2.y*c_41*p2.z*p3.z-15*p1.y*c_6*c_41*
        p2.z*p3.z-60*c_8*c_42*p2.z*p3.z-45*p1.y*p2.y*c_42*p2.z*p3.z-30*c_6*c_42*p2.z*p3.z-75*p1.y*c_84*p2.z*p3.z-60*p2.y*c_84*
        p2.z*p3.z-90*c_85*p2.z*p3.z-120*c_37*p2.y*c_2*p2.z*p3.z-144*c_8*c_6*c_2*p2.z*p3.z-108*p1.y*c_39*c_2*p2.z*p3.z-48*
        c_40*c_2*p2.z*p3.z+120*c_37*p3.y*c_2*p2.z*p3.z-36*p1.y*c_6*p3.y*c_2*p2.z*p3.z-24*c_39*p3.y*c_2*p2.z*p3.z+144*c_8*c_12*
        c_2*p2.z*p3.z+36*p1.y*p2.y*c_12*c_2*p2.z*p3.z+108*p1.y*c_41*c_2*p2.z*p3.z+24*p2.y*c_41*c_2*p2.z*p3.z+48*c_42*c_2*
        p2.z*p3.z-48*c_37*p2.y*p1.z*c_4*p3.z-108*c_8*c_6*p1.z*c_4*p3.z-144*p1.y*c_39*p1.z*c_4*p3.z-120*c_40*p1.z*c_4*p3.z+48*
        c_37*p3.y*p1.z*c_4*p3.z+36*c_8*p2.y*p3.y*p1.z*c_4*p3.z-24*c_39*p3.y*p1.z*c_4*p3.z+72*c_8*c_12*p1.z*c_4*p3.z+72*p1.y*
        p2.y*c_12*p1.z*c_4*p3.z+36*c_6*c_12*p1.z*c_4*p3.z+72*p1.y*c_41*p1.z*c_4*p3.z+60*p2.y*c_41*p1.z*c_4*p3.z+48*c_42*p1.z*
        c_4*p3.z-12*c_37*p2.y*c_45*p3.z-48*c_8*c_6*c_45*p3.z-120*p1.y*c_39*c_45*p3.z-240*c_40*c_45*p3.z+12*c_37*p3.y*c_45*p3.z+24*
        c_8*p2.y*p3.y*c_45*p3.z+24*p1.y*c_6*p3.y*c_45*p3.z+24*c_8*c_12*c_45*p3.z+60*p1.y*p2.y*c_12*c_45*p3.z+96*c_6*c_12*
        c_45*p3.z+36*p1.y*c_41*c_45*p3.z+c_223+48*c_42*c_45*p3.z-25*c_86*c_5+15*c_81*p2.y*c_5+15*c_44*c_6*c_5+15*c_37*c_39*c_5+15*
        c_8*c_40*c_5+15*p1.y*c_83*c_5+15*c_82*c_5-45*c_81*p3.y*c_5+30*c_44*p2.y*p3.y*c_5+30*c_37*c_6*p3.y*c_5+30*c_8*c_39*p3.y*c_5+30*
        p1.y*c_40*p3.y*c_5+30*c_83*p3.y*c_5-60*c_44*c_12*c_5+45*c_37*p2.y*c_12*c_5+45*c_8*c_6*c_12*c_5+45*p1.y*c_39*c_12*c_5+45*
        c_40*c_12*c_5-70*c_37*c_41*c_5+60*c_8*p2.y*c_41*c_5+60*p1.y*c_6*c_41*c_5+60*c_39*c_41*c_5-75*c_8*c_42*c_5+75*p1.y*p2.y*c_42*
        c_5+c_224-75*p1.y*c_84*c_5+90*p2.y*c_84*c_5-70*c_85*c_5+180*c_44*c_2*c_5-120*c_37*p2.y*c_2*c_5-72*c_8*c_6*c_2*c_5-36*p1.y*
        c_39*c_2*c_5-12*c_40*c_2*c_5+120*c_37*p3.y*c_2*c_5-144*c_8*p2.y*p3.y*c_2*c_5-72*p1.y*c_6*p3.y*c_2*c_5-24*c_39*p3.y*c_2*
        c_5-108*p1.y*p2.y*c_12*c_2*c_5+c_225-72*p1.y*c_41*c_2*c_5-48*p2.y*c_41*c_2*c_5-60*c_42*c_2*c_5-48*c_37*p2.y*p1.z*p2.z*c_5-72*
        c_8*c_6*p1.z*p2.z*c_5-72*p1.y*c_39*p1.z*p2.z*c_5-48*c_40*p1.z*p2.z*c_5+48*c_37*p3.y*p1.z*p2.z*c_5-36*c_8*p2.y*p3.y*
        p1.z*p2.z*c_5-72*p1.y*c_6*p3.y*p1.z*p2.z*c_5-60*c_39*p3.y*p1.z*p2.z*c_5+108*c_8*c_12*p1.z*p2.z*c_5-36*c_6*c_12*p1.z*
        p2.z*c_5+144*p1.y*c_41*p1.z*p2.z*c_5+24*p2.y*c_41*p1.z*p2.z*c_5+120*c_42*p1.z*p2.z*c_5-12*c_37*p2.y*c_4*c_5-36*c_8*c_6*
        c_4*c_5-72*p1.y*c_39*c_4*c_5-120*c_40*c_4*c_5+12*c_37*p3.y*c_4*c_5-36*p1.y*c_6*p3.y*c_4*c_5-96*c_39*p3.y*c_4*c_5+36*c_8*
        c_12*c_4*c_5+36*p1.y*p2.y*c_12*c_4*c_5+72*p1.y*c_41*c_4*c_5+96*p2.y*c_41*c_4*c_5+120*c_42*c_4*c_5+60*c_44*p1.z*c_47-48*c_37*
        p2.y*p1.z*c_47-36*c_8*c_6*p1.z*c_47-24*p1.y*c_39*p1.z*c_47-12*c_40*p1.z*c_47+96*c_37*p3.y*p1.z*c_47-108*c_8*p2.y*p3.y*
        p1.z*c_47-72*p1.y*c_6*p3.y*p1.z*c_47-36*c_39*p3.y*p1.z*c_47+72*c_8*c_12*p1.z*c_47-144*p1.y*p2.y*c_12*p1.z*c_47-72*c_6*
        c_12*p1.z*c_47+c_226-60*c_42*p1.z*c_47-12*c_37*p2.y*p2.z*c_47-24*c_8*c_6*p2.z*c_47-36*p1.y*c_39*p2.z*c_47-48*c_40*p2.z*
        c_47+12*c_37*p3.y*p2.z*c_47-24*c_8*p2.y*p3.y*p2.z*c_47-60*p1.y*c_6*p3.y*p2.z*c_47+c_227+48*c_8*c_12*p2.z*c_47-24*p1.y*
        p2.y*c_12*p2.z*c_47-96*c_6*c_12*p2.z*c_47+120*p1.y*c_41*p2.z*c_47+240*c_42*p2.z*c_47+12*c_44*c_48-12*c_37*p2.y*c_48-12*c_8*
        c_6*c_48-12*p1.y*c_39*c_48+c_228+36*c_37*p3.y*c_48-48*c_8*p2.y*p3.y*c_48-48*p1.y*c_6*p3.y*c_48-48*c_39*p3.y*c_48+60*c_8*
        c_12*c_48-120*p1.y*p2.y*c_12*c_48-120*c_6*c_12*c_48+60*p1.y*c_41*c_48-240*p2.y*c_41*c_48-18*c_87*p3.x*(3*p1.y*p3.y*c_14*
        c_73+c_8*c_1*c_89-2*c_6*c_14*c_17+c_12*c_50*c_90+p2.y*p3.y*(c_20+c_91+c_252+c_65+c_72)-p1.y*p2.y*c_196)+9*c_92*(-(c_12*c_50*
        c_17)-p2.y*p3.y*(c_100+c_93+c_55+5*p1.z*c_35)-5*c_6*(c_2+p1.z*c_35+p3.z*c_95)+c_8*(c_18+c_101+c_55+c_96)+p1.y*(3*p2.y*
        (c_97+c_18+c_54+c_9+c_5)+p3.y*(c_104+c_185+c_18+c_9+c_55)))-9*c_216*(-(c_6*c_14*c_108)-5*c_12*(c_2+c_153+c_4+c_65+c_99)-p2.y*p3.y*
        (c_100+c_23+c_66+c_324+c_141)+c_8*(c_66+c_101+c_102+c_103)+p1.y*(3*p3.y*c_156+p2.y*(c_104+c_66+c_105+c_9+c_102)))-6*p2.x*
        p3.x*(p3.y*c_50+p1.y*c_1+p2.y*(-p1.z+p3.z))*(4*c_39*p1.z+6*c_6*p3.y*p1.z+6*p2.y*c_12*p1.z+4*c_41*p1.z-16*p2.y*c_43-16*
        p3.y*c_43+10*c_39*p2.z+12*c_6*p3.y*p2.z+9*p2.y*c_12*p2.z+4*c_41*p2.z-36*p2.y*c_2*p2.z-24*p3.y*c_2*p2.z-48*p2.y*
        p1.z*c_4-24*p3.y*p1.z*c_4-40*p2.y*c_45-16*p3.y*c_45+4*c_39*p3.z+9*c_6*p3.y*p3.z+12*p2.y*c_12*p3.z+10*c_41*p3.z-24*p2.y*
        c_2*p3.z-36*p3.y*c_2*p3.z-48*p2.y*p1.z*p2.z*p3.z-48*p3.y*p1.z*p2.z*p3.z-48*p2.y*c_4*p3.z-36*p3.y*c_4*p3.z-24*
        p2.y*p1.z*c_5-48*p3.y*p1.z*c_5-36*p2.y*p2.z*c_5-48*p3.y*p2.z*c_5-16*p2.y*c_47-40*p3.y*c_47+2*c_37*c_27+3*c_8*(p2.y*
        c_56+p3.y*c_61)+3*c_71*(p1.y*c_109+p2.y*c_107+2*p3.y*c_108)+p1.y*(12*p2.y*p3.y*c_73+3*c_6*c_89+3*c_12*c_109-4*c_245))+3*c_111*
        (c_341-8*c_39*p3.y*c_2-18*c_71*c_12*c_2-6*c_6*c_12*c_2-4*p2.y*c_41*c_2-2*c_42*c_2+4*c_6*c_38+32*p2.y*p3.y*c_38+16*c_12*c_38+36*
        c_71*c_6*p1.z*p2.z+c_112+9*c_71*p2.y*p3.y*p1.z*p2.z+c_172-9*c_71*c_12*p1.z*p2.z-6*c_6*c_12*p1.z*p2.z-3*p2.y*c_41*
        p1.z*p2.z-c_42*p1.z*p2.z+8*c_6*c_43*p2.z+60*p2.y*p3.y*c_43*p2.z+20*c_12*c_43*p2.z+c_173+36*c_71*p2.y*p3.y*c_4+60*c_39*
        p3.y*c_4+27*c_71*c_12*c_4+30*c_6*c_12*c_4+12*p2.y*c_41*c_4+c_113+48*p2.y*p3.y*c_2*c_4+12*c_12*c_2*c_4+c_114+c_175-8*c_12*
        p1.z*c_45+c_176-240*p2.y*p3.y*c_46-40*c_12*c_46+9*c_71*c_6*p1.z*p3.z+c_177+c_345-10*c_39*p3.y*p1.z*p3.z+c_346+c_115-7*p2.y*
        c_41*p1.z*p3.z+c_347+c_178+28*p2.y*p3.y*c_43*p3.z+c_116-36*c_71*c_6*p2.z*p3.z-60*c_40*p2.z*p3.z-20*c_39*p3.y*p2.z*
        p3.z+c_348+c_117+c_349+c_179+48*p2.y*p3.y*c_2*p2.z*p3.z+24*c_12*c_2*p2.z*p3.z+c_180+24*p2.y*p3.y*p1.z*c_4*p3.z+240*
        c_6*c_45*p3.z-80*p2.y*p3.y*c_45*p3.z-48*c_12*c_45*p3.z-27*c_71*c_6*c_5-10*c_40*c_5+c_351-12*c_39*p3.y*c_5+c_118+c_353+c_182+24*
        p2.y*p3.y*c_2*c_5+c_394+c_183+c_119+12*c_12*p1.z*p2.z*c_5+120*c_6*c_4*c_5+c_120+c_184+20*p2.y*p3.y*p1.z*c_47+c_356+48*
        c_6*p2.z*c_47+c_121+c_358+c_122+c_359+c_44*(c_60+c_4+c_101+c_154+5*p1.z*c_145)+c_37*(p2.y*(c_60+c_123+c_66+20*p1.z*
        p3.z+c_75+c_102)+p3.y*(c_69+c_255+c_53+c_142+c_143+c_124))+c_8*(40*c_38+40*c_43*c_163-18*c_71*p1.z*c_1+24*c_2*(c_4+c_207+c_58)-18*c_71*
        (c_4+c_7)+3*c_6*c_125+3*c_12*(c_152+c_229+c_4+c_36+c_55)+3*p2.y*p3.y*(c_63+c_340+c_140+c_126+c_59+c_55)+8*p1.z*(c_45-9*c_4*
        p3.z-6*p2.z*c_5+c_290)-8*p3.z*(c_127+c_247+c_298+c_47))+p1.y*(-6*c_6*p3.y*c_50*c_311+2*c_39*(c_2+c_128+c_191+c_31+c_7)-3*
        p2.y*c_12*(c_139+c_131+c_129+c_7+c_158)-c_41*(c_159+c_186+c_31+c_130+c_338)+9*c_71*(-(p3.y*c_192)+p2.y*c_231)-4*p2.y*(c_161+5*
        c_46+c_135+c_164+c_249+c_48+c_43*(-8*p2.z+c_106)+2*p1.z*p3.z*c_313+c_2*(-6*c_4+c_134+c_72))-4*p3.y*(c_165+c_211+c_135+c_167+c_416+c_373-3*
        c_2*p2.z*c_35-4*c_43*c_136+c_171)))-3*c_71*(-(c_40*c_14*c_90)-c_39*p3.y*(c_139+c_206+c_140+c_65+c_260+c_254)-2*
        p2.y*c_41*(c_139+c_133+10*p2.z*p3.z+c_141+5*p1.z*c_25)+c_44*(c_60+c_140+c_101+c_5+5*p1.z*c_214)+c_37*(p3.y*(c_60+20*p1.z*
        p2.z+c_18+c_142+c_75+c_55)+p2.y*(c_69+c_123+c_133-4*p1.z*p3.z+c_143+c_72))+4*p2.y*p3.y*(c_273+c_166+6*c_45*p3.z+c_212+c_272+c_43*
        (c_144+c_370)+6*c_2*c_150+p1.z*(c_374+c_149+c_138+c_147))+c_12*(c_210-5*c_12*p1.z*c_29+4*c_43*c_213+12*c_2*p2.z*c_145-5*
        c_12*(c_66+c_253+c_330)+4*p1.z*(c_295+c_146+30*p2.z*c_5+c_147)+4*(c_327+c_362+30*c_4*c_5+60*p2.z*c_47+c_302))+c_6*(-3*c_12*
        (c_20+c_62+c_53+c_54+c_292)+4*c_14*c_240)+c_8*(3*c_12*c_151+3*c_6*(c_152+c_66+c_281+c_36+c_5)+3*p2.y*p3.y*(c_63+c_153+c_66+c_406+c_59+c_154)+8*
        (c_155+5*c_43*(-2*p2.z+p3.z)-3*c_2*(c_66+c_59+c_7)+p1.z*(-3*c_45+c_275-9*p2.z*c_5+c_47)-p2.z*
        (c_45+c_256+c_250+c_110)))-p1.y*(6*p2.y*c_12*c_14*c_246+2*c_41*c_156+3*c_6*p3.y*(c_139+c_157+c_129+c_130+c_158)+c_39*(c_159+c_131+c_31+c_160+2*
        p1.z*c_29)+4*p3.y*(c_161+c_46+4*c_43*c_163+c_312+c_164+c_168+5*c_48+3*c_2*(c_4+c_19+c_58)+2*p1.z*p2.z*c_248)+4*p2.y*
        (c_165+c_166+c_372+c_167+c_168+c_323-3*c_2*p3.z*c_169-4*c_43*c_285+c_171))))-3*c_111*p3.x*(-10*c_40*c_2-2*c_39*p3.y*c_2+c_385+5*
        p2.y*c_41*c_2+4*c_42*c_2+12*c_6*c_38-4*p2.y*p3.y*c_38-8*c_12*c_38-60*c_40*p1.z*p2.z+c_172+12*c_6*c_12*p1.z*p2.z+15*
        p2.y*c_41*p1.z*p2.z+c_386+48*c_6*c_43*p2.z-12*p2.y*p3.y*c_43*p2.z-16*c_12*c_43*p2.z+c_173-10*c_39*p3.y*c_4+2*p2.y*c_41*
        c_4+c_42*c_4+c_174-24*p2.y*p3.y*c_2*c_4+c_388+240*c_6*p1.z*c_45+c_175-32*c_12*p1.z*c_45+c_176-20*p2.y*p3.y*c_46+c_177-4*c_39*
        p3.y*p1.z*p3.z+9*c_6*c_12*p1.z*p3.z+20*p2.y*c_41*p1.z*p3.z+20*c_42*p1.z*p3.z+c_178-8*p2.y*p3.y*c_43*p3.z-24*c_12*
        c_43*p3.z-5*c_40*p2.z*p3.z+6*c_6*c_12*p2.z*p3.z+c_390+5*c_42*p2.z*p3.z+c_179+c_391-48*c_12*c_2*p2.z*p3.z+c_180-48*p2.y*
        p3.y*p1.z*c_4*p3.z+c_181-40*c_6*c_45*p3.z+8*c_12*c_45*p3.z+2*c_39*p3.y*c_5+6*c_6*c_12*c_5+10*p2.y*c_41*c_5+c_393+c_182-12*
        p2.y*p3.y*c_2*c_5-48*c_12*c_2*c_5+c_183-36*p2.y*p3.y*p1.z*p2.z*c_5+c_395+24*p2.y*p3.y*c_4*c_5+24*c_12*c_4*c_5+c_184-16*
        p2.y*p3.y*p1.z*c_47-80*c_12*p1.z*c_47+8*c_6*p2.z*c_47+c_398+40*c_12*p2.z*c_47+4*c_6*c_48+20*p2.y*p3.y*c_48+c_399+c_44*
        c_1*c_56-c_37*(p2.y*(c_139+c_185-12*c_4+c_267+c_19+c_154)+p3.y*(c_152+c_64+c_186+c_70+c_36+c_124))+3*c_71*(c_8*c_1*c_107+2*c_12*
        (c_20+c_67+c_53+10*p1.z*p3.z+c_9)-p2.y*p3.y*(c_2+c_62+c_187+c_70+c_265)-3*c_6*(c_2+c_360+p1.z*(c_77+c_30))+p1.y*(p3.y*
        (c_20+c_23+c_188+c_59+c_208)+p2.y*(c_78+c_189+c_57+c_19+c_190)))+c_8*(3*p2.y*p3.y*(c_2+c_62+c_140+c_191+c_233+c_130)+3*c_12*
        c_192-3*c_6*c_196-4*c_1*c_205)+p1.y*(6*c_6*p3.y*c_1*(p1.z+c_13+c_30)+c_41*(c_159+c_206+c_53+c_142+c_207+c_208)-2*c_39*
        (c_159+c_93+c_9+c_154+c_209)-4*p3.y*(c_210+c_211+c_257-9*c_4*c_5+c_212-20*c_48+3*c_2*p2.z*c_213+c_43*(c_144+c_106)+p1.z*(c_197+c_137-3*
        p2.z*c_5+c_296))+p2.y*(3*c_12*(c_20+c_140+c_129+c_190+c_288)+4*(c_210-60*c_46-10*c_45*p3.z+c_271+15*p2.z*c_47+c_417+3*c_2*
        p3.z*c_213+c_43*(c_94+c_98)+p1.z*(-20*c_45+c_137+c_215+7*c_47)))))+p2.x*(18*c_216*c_6*c_2+12*c_71*c_40*c_2-25*c_82*c_2+27*
        c_216*p2.y*p3.y*c_2+15*c_71*c_39*p3.y*c_2+15*c_83*p3.y*c_2-45*c_216*c_12*c_2+9*c_71*c_6*c_12*c_2+15*c_40*c_12*c_2-6*c_71*p2.y*
        c_41*c_2+15*c_39*c_41*c_2-30*c_71*c_42*c_2+15*c_6*c_42*c_2+15*p2.y*c_84*c_2+15*c_85*c_2-24*c_71*c_6*c_38+c_217-12*c_71*p2.y*
        p3.y*c_38-12*c_39*p3.y*c_38+36*c_71*c_12*c_38-12*c_6*c_12*c_38-12*p2.y*c_41*c_38+c_218+54*c_216*c_6*p1.z*p2.z+60*c_71*c_40*
        p1.z*p2.z-175*c_82*p1.z*p2.z+54*c_216*p2.y*p3.y*p1.z*p2.z+60*c_71*c_39*p3.y*p1.z*p2.z+90*c_83*p3.y*p1.z*p2.z-45*
        c_216*c_12*p1.z*p2.z+27*c_71*c_6*c_12*p1.z*p2.z+75*c_40*c_12*p1.z*p2.z-12*c_71*p2.y*c_41*p1.z*p2.z+60*c_39*c_41*p1.z*
        p2.z-30*c_71*c_42*p1.z*p2.z+45*c_6*c_42*p1.z*p2.z+30*p2.y*c_84*p1.z*p2.z+15*c_85*p1.z*p2.z-72*c_71*c_6*c_43*p2.z+60*c_40*
        c_43*p2.z-24*c_71*p2.y*p3.y*c_43*p2.z-48*c_39*p3.y*c_43*p2.z+36*c_71*c_12*c_43*p2.z-36*c_6*c_12*c_43*p2.z-24*p2.y*c_41*
        c_43*p2.z-12*c_42*c_43*p2.z+30*c_71*c_40*c_4-27*c_216*p2.y*p3.y*c_4+30*c_71*c_39*p3.y*c_4-105*c_83*p3.y*c_4-45*c_216*c_12*
        c_4+18*c_71*c_6*c_12*c_4+c_219+6*c_71*p2.y*c_41*c_4-50*c_39*c_41*c_4-30*c_6*c_42*c_4-15*p2.y*c_84*c_4-5*c_85*c_4-144*c_71*c_6*
        c_2*c_4+180*c_40*c_2*c_4-36*c_71*p2.y*p3.y*c_2*c_4-120*c_39*p3.y*c_2*c_4+36*c_71*c_12*c_2*c_4-72*c_6*c_12*c_2*c_4-36*p2.y*
        c_41*c_2*c_4-12*c_42*c_2*c_4-240*c_71*c_6*p1.z*c_45+420*c_40*p1.z*c_45-48*c_71*p2.y*p3.y*p1.z*c_45-240*c_39*p3.y*p1.z*
        c_45+36*c_71*c_12*p1.z*c_45-120*c_6*c_12*p1.z*c_45-48*p2.y*c_41*p1.z*c_45-12*c_42*p1.z*c_45+120*c_71*c_6*c_46+60*c_71*p2.y*
        p3.y*c_46+420*c_39*p3.y*c_46+12*c_71*c_12*c_46+180*c_6*c_12*c_46+60*p2.y*c_41*c_46+c_220+72*c_216*c_6*p1.z*p3.z+24*c_71*c_40*
        p1.z*p3.z+135*c_216*p2.y*p3.y*p1.z*p3.z+45*c_71*c_39*p3.y*p1.z*p3.z+c_221-270*c_216*c_12*p1.z*p3.z+36*c_71*c_6*c_12*
        p1.z*p3.z+30*c_40*c_12*p1.z*p3.z-30*c_71*p2.y*c_41*p1.z*p3.z+45*c_39*c_41*p1.z*p3.z-180*c_71*c_42*p1.z*p3.z+60*c_6*c_42*
        p1.z*p3.z+75*p2.y*c_84*p1.z*p3.z+90*c_85*p1.z*p3.z-48*c_71*c_6*c_43*p3.z-36*c_71*p2.y*p3.y*c_43*p3.z+c_222+144*c_71*
        c_12*c_43*p3.z-24*c_6*c_12*c_43*p3.z-36*p2.y*c_41*c_43*p3.z-48*c_42*c_43*p3.z+27*c_216*c_6*p2.z*p3.z+15*c_71*c_40*p2.z*
        p3.z+175*c_82*p2.z*p3.z+24*c_71*c_39*p3.y*p2.z*p3.z+120*c_83*p3.y*p2.z*p3.z-135*c_216*c_12*p2.z*p3.z+18*c_71*c_6*c_12*
        p2.z*p3.z+75*c_40*c_12*p2.z*p3.z+40*c_39*c_41*p2.z*p3.z-15*c_71*c_42*p2.z*p3.z+15*c_6*c_42*p2.z*p3.z-5*c_85*p2.z*
        p3.z-144*c_71*c_6*c_2*p2.z*p3.z-72*c_71*p2.y*p3.y*c_2*p2.z*p3.z-48*c_39*p3.y*c_2*p2.z*p3.z+144*c_71*c_12*c_2*p2.z*p3.z-72*
        c_6*c_12*c_2*p2.z*p3.z-72*p2.y*c_41*c_2*p2.z*p3.z-48*c_42*c_2*p2.z*p3.z-288*c_71*c_6*p1.z*c_4*p3.z-108*c_71*p2.y*
        p3.y*p1.z*c_4*p3.z-120*c_39*p3.y*p1.z*c_4*p3.z+144*c_71*c_12*p1.z*c_4*p3.z-144*c_6*c_12*p1.z*c_4*p3.z-108*p2.y*c_41*
        p1.z*c_4*p3.z-48*c_42*p1.z*c_4*p3.z+120*c_71*c_6*c_45*p3.z-420*c_40*c_45*p3.z+96*c_71*p2.y*p3.y*c_45*p3.z+24*c_71*c_12*
        c_45*p3.z+120*c_6*c_12*c_45*p3.z+c_223+36*c_42*c_45*p3.z+45*c_216*c_6*c_5+3*c_71*c_40*c_5+25*c_82*c_5+135*c_216*p2.y*p3.y*
        c_5+6*c_71*c_39*p3.y*c_5+45*c_83*p3.y*c_5+60*c_40*c_12*c_5-30*c_71*p2.y*c_41*c_5+70*c_39*c_41*c_5-105*c_71*c_42*c_5+c_224+75*
        p2.y*c_84*c_5+70*c_85*c_5-72*c_71*c_6*c_2*c_5-72*c_71*p2.y*p3.y*c_2*c_5-12*c_39*p3.y*c_2*c_5+360*c_71*c_12*c_2*c_5+c_225-72*
        p2.y*c_41*c_2*c_5-120*c_42*c_2*c_5-216*c_71*c_6*p1.z*p2.z*c_5-144*c_71*p2.y*p3.y*p1.z*p2.z*c_5-48*c_39*p3.y*p1.z*p2.z*
        c_5+360*c_71*c_12*p1.z*p2.z*c_5-108*c_6*c_12*p1.z*p2.z*c_5-144*p2.y*c_41*p1.z*p2.z*c_5-120*c_42*p1.z*p2.z*c_5+72*c_71*
        c_6*c_4*c_5-180*c_40*c_4*c_5+72*c_71*p2.y*p3.y*c_4*c_5-120*c_39*p3.y*c_4*c_5+72*p2.y*c_41*c_4*c_5+60*c_42*c_4*c_5-96*c_71*c_6*
        p1.z*c_47-120*c_71*p2.y*p3.y*p1.z*c_47-12*c_39*p3.y*p1.z*c_47+720*c_71*c_12*p1.z*c_47-48*c_6*c_12*p1.z*c_47+c_226-240*
        c_42*p1.z*c_47+24*c_71*c_6*p2.z*c_47-60*c_40*p2.z*c_47+c_227-120*c_71*c_12*p2.z*c_47-72*c_6*c_12*p2.z*c_47+60*c_42*p2.z*
        c_47+c_228-60*c_71*p2.y*p3.y*c_48-36*c_39*p3.y*c_48-420*c_71*c_12*c_48-60*c_6*c_12*c_48-60*p2.y*c_41*c_48-5*c_86*(c_251+c_229+c_157+18*
        p1.z*p3.z+c_19+c_72)-15*c_81*(-(p3.y*c_14*(c_282+p2.z+c_10))+c_367)-3*c_44*(4*c_71*p1.z*p2.z+20*c_43*p2.z+2*c_71*
        c_4+20*c_2*c_4+12*p1.z*c_45+c_166-4*c_71*p1.z*p3.z-80*c_43*p3.z+c_71*p2.z*p3.z-40*c_2*p2.z*p3.z-16*p1.z*c_4*p3.z-4*c_45*
        p3.z-3*c_71*c_5-40*c_2*c_5-16*p1.z*p2.z*c_5-4*c_4*c_5-16*p1.z*c_47-4*p2.z*c_47-4*c_48-5*c_12*c_14*c_403-5*p2.y*p3.y*c_14*
        c_27+5*c_6*(c_22+c_52+c_19+c_5+c_270))-3*c_8*(-5*c_39*p3.y*c_14*c_89+3*c_216*c_1*c_108+5*c_40*(c_139+c_23+c_128+c_54+c_9+c_5)+c_71*
        (-3*c_6*c_231-3*p2.y*p3.y*(c_2+c_232+c_131+c_65+c_233+c_154)+c_12*(c_319+c_291+6*(c_4+c_33+c_234))-4*c_1*c_240)+p2.y*
        p3.y*c_14*c_316+c_12*c_14*(-5*c_12*c_246+4*(c_241+c_45+c_247+c_138+c_235+6*c_2*c_169+3*p1.z*c_248))-c_6*(15*c_12*c_14*c_73+4*
        (c_155-15*c_46+c_135+c_164+c_249+c_48+3*c_2*p3.z*c_35+c_43*(c_94+c_106)+2*p1.z*(-5*c_45+c_137+c_250+c_47))))+c_37*(15*c_6*p3.y*
        c_14*c_56-5*c_39*(c_251+c_123+c_252+c_317+c_253+c_72)+3*c_71*(-(p3.y*(c_139+c_206+c_140+c_105+c_19+c_254))+p2.y*
        (c_139+c_255+c_187+c_21+c_233+c_72))-3*p3.y*c_14*(-5*c_12*c_369+4*(c_297+c_45+c_256+c_250+c_110+10*c_2*c_11+4*p1.z*(c_4+c_36+c_72)))+3*p2.y*
        (5*c_12*c_14*c_61+c_384))+3*p1.y*(5*c_40*p3.y*c_14*c_17-5*c_83*(c_3-7*c_4+c_99+c_5+p1.z*c_262)+3*c_216*(-(p3.y*
        (c_20+c_23+c_259+c_75+c_141))+p2.y*(c_20+c_187+c_21+c_260+c_102))-c_6*p3.y*c_14*c_306+c_39*(5*c_12*c_14*c_90+4*(c_300-35*
        c_46+c_321+c_301+c_294+c_48+c_43*c_262+c_2*c_264+p1.z*p3.z*c_264))-p2.y*c_12*c_14*c_310-c_41*c_14*(-5*c_12*(c_16+p2.z+c_200)+4*
        (c_148+c_45+c_289+c_333+c_276+3*c_2*c_145+2*p1.z*c_304))+c_71*(c_39*(c_159+c_123+c_266+c_267+c_207+c_72)-2*c_41*(c_159+c_140+c_9+c_141+c_268)+3*
        c_6*p3.y*(c_20+c_269+c_129+c_154+c_270)+4*p3.y*(c_210+c_371+15*c_45*p3.z+c_271-10*p2.z*c_47+c_272+3*c_2*p2.z*c_274+c_43*
        (c_13+c_200)+p1.z*(7*c_45+c_146+c_138-20*c_47))-2*p2.y*(c_273-40*c_46-40*c_45*p3.z-18*c_4*c_5+8*p2.z*c_47+20*c_48+6*c_2*
        p3.z*c_274+2*c_43*(c_77+c_284)+3*c_12*(c_53+c_36+c_234)+p1.z*(-16*c_45+3*c_12*c_1+c_275+c_215+c_276)))))+p3.x*(-15*c_82*c_2-15*
        c_83*p3.y*c_2-15*c_40*c_12*c_2-15*c_39*c_41*c_2-15*c_6*c_42*c_2-15*p2.y*c_84*c_2+25*c_85*c_2+c_217+12*c_39*p3.y*c_38+12*c_6*
        c_12*c_38+12*p2.y*c_41*c_38+c_218-90*c_82*p1.z*p2.z-75*c_83*p3.y*p1.z*p2.z-60*c_40*c_12*p1.z*p2.z-45*c_39*c_41*p1.z*
        p2.z-30*c_6*c_42*p1.z*p2.z+c_277+48*c_40*c_43*p2.z+36*c_39*p3.y*c_43*p2.z+24*c_6*c_12*c_43*p2.z+c_278-70*c_82*c_4-75*c_83*
        p3.y*c_4+c_219-70*c_39*c_41*c_4-60*c_6*c_42*c_4-45*p2.y*c_84*c_4-25*c_85*c_4+120*c_40*c_2*c_4+72*c_39*p3.y*c_2*c_4+c_279+12*p2.y*
        c_41*c_2*c_4+240*c_40*p1.z*c_45+c_280+48*c_6*c_12*p1.z*c_45+12*p2.y*c_41*p1.z*c_45+60*c_39*p3.y*c_46+60*c_6*c_12*c_46+36*
        p2.y*c_41*c_46+c_220-15*c_82*p1.z*p3.z-30*c_83*p3.y*p1.z*p3.z-45*c_40*c_12*p1.z*p3.z-60*c_39*c_41*p1.z*p3.z-75*c_6*
        c_42*p1.z*p3.z-90*p2.y*c_84*p1.z*p3.z+175*c_85*p1.z*p3.z+12*c_40*c_43*p3.z+24*c_39*p3.y*c_43*p3.z+36*c_6*c_12*c_43*p3.z+48*
        p2.y*c_41*c_43*p3.z-60*c_42*c_43*p3.z+5*c_82*p2.z*p3.z-15*c_40*c_12*p2.z*p3.z-40*c_39*c_41*p2.z*p3.z-75*c_6*c_42*
        p2.z*p3.z-120*p2.y*c_84*p2.z*p3.z-175*c_85*p2.z*p3.z+48*c_40*c_2*p2.z*p3.z+72*c_39*p3.y*c_2*p2.z*p3.z+72*c_6*c_12*c_2*
        p2.z*p3.z+48*p2.y*c_41*c_2*p2.z*p3.z+120*c_40*p1.z*c_4*p3.z+144*c_39*p3.y*p1.z*c_4*p3.z+108*c_6*c_12*p1.z*c_4*p3.z+48*
        p2.y*c_41*p1.z*c_4*p3.z-60*c_40*c_45*p3.z+72*c_6*c_12*c_45*p3.z+c_223+60*c_42*c_45*p3.z+5*c_82*c_5+15*c_83*p3.y*c_5+30*
        c_40*c_12*c_5+50*c_39*c_41*c_5+c_224+105*p2.y*c_84*c_5+12*c_40*c_2*c_5+36*c_39*p3.y*c_2*c_5+72*c_6*c_12*c_2*c_5+120*p2.y*c_41*
        c_2*c_5-180*c_42*c_2*c_5+48*c_40*p1.z*p2.z*c_5+108*c_39*p3.y*p1.z*p2.z*c_5+144*c_6*c_12*p1.z*p2.z*c_5+120*p2.y*c_41*
        p1.z*p2.z*c_5-60*c_40*c_4*c_5-72*c_39*p3.y*c_4*c_5+120*p2.y*c_41*c_4*c_5+180*c_42*c_4*c_5+12*c_40*p1.z*c_47+48*c_39*p3.y*
        p1.z*c_47+120*c_6*c_12*p1.z*c_47+240*p2.y*c_41*p1.z*c_47-420*c_42*p1.z*c_47-36*c_40*p2.z*c_47+c_227-120*c_6*c_12*p2.z*c_47+420*
        c_42*p2.z*c_47+c_228-60*c_39*p3.y*c_48-180*c_6*c_12*c_48-420*p2.y*c_41*c_48+5*c_86*(c_251+18*p1.z*p2.z+c_53+c_281+c_19+c_7)-15*
        c_81*(p2.y*c_50*(c_282+c_28+p3.z)-p3.y*c_283)-9*c_216*(-3*c_12*c_50*c_325+c_8*(c_4+c_9+c_72+p1.z*c_29)-c_6*(c_2+p3.z*
        c_169+p1.z*c_285)-p2.y*p3.y*(c_22+c_157+c_287+5*p1.z*c_331)+p1.y*(-(p2.y*c_50*c_108)+p3.y*(c_97+c_23+c_18+c_286+c_287)))-3*
        c_44*(5*c_6*c_50*c_363+5*p2.y*p3.y*c_50*c_27-5*c_12*(c_22+c_4+c_19+c_58+c_288)+4*(c_46+5*c_43*(c_77+c_0)+c_45*p3.z+c_4*
        c_5+p2.z*c_47-c_48+5*c_2*(c_66+c_36+c_7)+p1.z*(c_127+c_289+c_307+c_290)))-c_37*(15*c_39*c_50*c_337+15*c_6*p3.y*c_50*c_56-5*c_41*
        (c_251+c_291+c_53+c_142+c_253+c_292)+12*p3.y*c_414-3*p2.y*c_50*(-5*c_12*c_61+4*(c_297+c_127+c_247+c_298+c_47+10*c_2*c_29+4*
        p1.z*(c_53+c_36+c_5))))-3*p1.y*(5*c_83*c_50*(c_16+c_94+p3.z)+5*c_40*p3.y*c_50*c_17-5*c_84*(c_3+c_4+c_99-7*c_5+p1.z*c_303)+4*
        c_41*(c_300+c_46+c_257+c_301+c_322+c_302+c_43*c_303+c_2*c_304+p1.z*p2.z*c_304)-c_6*p3.y*c_50*c_306-c_39*c_50*(-5*c_12*c_90+4*
        (c_148+20*c_45+10*c_4*p3.z+c_307+c_47+3*c_2*c_214+2*p1.z*c_264))-p2.y*c_12*c_50*c_310)-3*c_8*(5*c_40*c_50*c_311+5*c_39*p3.y*
        c_50*c_89-5*c_42*(c_139+c_91+c_4+c_21+c_9+c_234)+4*c_12*(c_155+c_46+c_312+c_164+c_168-15*c_48+3*c_2*p2.z*c_169+c_43*(c_77+c_200)+2*
        p1.z*(c_45+c_247+c_138+c_329))-c_6*c_50*(-15*c_12*c_73+4*(c_241+c_197+c_137+c_250+c_47+6*c_2*c_35+3*p1.z*c_313))-p2.y*
        p3.y*c_50*c_316)+c_71*(c_40*(c_3+c_318+c_18+c_317+c_9+c_55)-c_44*(c_22+c_318+c_53+c_21+c_134+c_55)+c_39*p3.y*(c_319+9*p1.z*
        (c_34+c_106)+2*(c_18+c_101+c_102))+c_37*(3*p2.y*c_50*c_61-p3.y*(c_60+27*p1.z*p2.z+c_188+16*p1.z*p3.z+c_320+c_265))+2*c_6*(-6*
        c_38+c_211+c_321+24*c_4*c_5+c_322+c_323-6*c_43*c_274-18*c_2*c_150+3*c_12*(c_3+c_32+c_66+c_324+c_9+c_102)-6*p1.z*
        (c_127+c_149+c_215+c_235))-c_12*c_50*(5*c_12*c_325+8*(c_43+c_45+5*c_4*p3.z+15*p2.z*c_5+35*c_47+c_2*c_326+p1.z*(c_4+c_9+15*c_5)))+c_8*(9*c_6*
        c_50*c_73+9*p2.y*p3.y*c_50*c_109-6*c_12*(c_20+c_32+c_53+c_21+c_75+c_102)+4*(c_161+c_327+2*c_43*(c_94-5*p3.z)+9*c_45*p3.z+18*
        c_4*c_5+30*p2.z*c_47+c_328+3*c_2*(c_53+c_134+c_130)+2*p1.z*(c_295+c_149+18*p2.z*c_5+c_329)))+2*p2.y*p3.y*(5*c_12*
        (c_3+c_4+c_59+c_330+3*p1.z*c_331)-2*(9*c_38+c_332-16*c_45*p3.z-30*c_4*c_5-40*p2.z*c_47+c_302+9*c_43*c_145+9*c_2*c_304+9*p1.z*
        (c_45+c_289+c_333+c_276)))+p1.y*(3*c_39*c_50*c_90+9*c_6*p3.y*c_50*c_107-6*p2.y*c_50*(-3*c_12*c_108+2*c_240)-2*(5*c_41*
        (c_2+c_62+c_53+c_70+c_334+c_330)+2*p3.y*(c_155-9*c_46-36*c_45*p3.z+c_335-180*p2.z*c_47+35*c_48+c_43*(-9*p2.z+16*p3.z)+c_2*(-9*c_4+c_336+30*
        c_5)-p1.z*(9*c_45+36*c_4*p3.z+90*p2.z*c_5-40*c_47))))))+3*p10_2*(-9*c_111*p3.x*(2*c_12*c_50*c_73-p1.y*p2.y*c_50*c_337+c_8*
        c_1*c_56-c_6*c_14*c_89+p1.y*p3.y*(c_139+c_153+c_157+c_233+c_58)+p2.y*p3.y*(c_2+c_229+c_131+c_54+c_55))+3*c_87*(-(c_12*c_50*
        c_89)-p2.y*p3.y*(c_319+c_67+c_266+c_21+c_55)+3*c_8*c_366-2*c_6*(c_3+2*p3.z*c_339+p1.z*(c_13+c_106))+p1.y*(p2.y*
        (c_104+c_263+c_65+c_59+c_5)+p3.y*(-12*c_2+c_340+c_259+c_9+c_55)))+p2.x*(c_341-c_40*c_2+9*c_71*p2.y*p3.y*c_2-3*c_39*p3.y*c_2+c_342-3*
        c_6*c_12*c_2-3*p2.y*c_41*c_2+c_343+40*p2.y*p3.y*c_38+40*c_12*c_38+18*c_71*c_6*p1.z*p2.z+c_112+18*c_71*p2.y*p3.y*p1.z*p2.z+4*
        c_39*p3.y*p1.z*p2.z+9*c_71*c_12*p1.z*p2.z+3*c_6*c_12*p1.z*p2.z+2*p2.y*c_41*p1.z*p2.z+c_42*p1.z*p2.z-8*c_6*c_43*
        p2.z+16*p2.y*p3.y*c_43*p2.z+8*c_12*c_43*p2.z-10*c_40*c_4+18*c_71*p2.y*p3.y*c_4+20*c_39*p3.y*c_4+18*c_71*c_12*c_4+12*c_6*
        c_12*c_4+c_344+2*c_42*c_4-24*c_6*c_2*c_4+c_387-12*c_12*c_2*c_4+c_114-80*p2.y*p3.y*p1.z*c_45-20*c_12*p1.z*c_45-40*c_6*c_46-80*
        p2.y*p3.y*c_46-16*c_12*c_46-8*c_40*p1.z*p3.z+c_345-7*c_39*p3.y*p1.z*p3.z+c_346-6*c_6*c_12*p1.z*p3.z-5*p2.y*c_41*p1.z*
        p3.z+c_347+32*c_6*c_43*p3.z+40*p2.y*p3.y*c_43*p3.z+48*c_12*c_43*p3.z-18*c_71*c_6*p2.z*p3.z-20*c_40*p2.z*p3.z-8*c_39*
        p3.y*p2.z*p3.z+c_348+4*p2.y*c_41*p2.z*p3.z+c_349+72*c_6*c_2*p2.z*p3.z+24*p2.y*p3.y*c_2*p2.z*p3.z+96*c_6*p1.z*c_4*
        p3.z-12*p2.y*p3.y*p1.z*c_4*p3.z-24*c_12*p1.z*c_4*p3.z+80*c_6*c_45*p3.z-32*p2.y*p3.y*c_45*p3.z+c_350-18*c_71*c_6*c_5-4*
        c_40*c_5+c_351+c_352-6*c_6*c_12*c_5+c_353+24*c_6*c_2*c_5+c_354+c_355+c_183+24*p2.y*p3.y*p1.z*p2.z*c_5-12*c_12*p1.z*p2.z*c_5+48*
        c_6*c_4*c_5-24*c_12*c_4*c_5+16*c_6*p1.z*c_47+28*p2.y*p3.y*p1.z*c_47+c_356+c_357+16*p2.y*p3.y*p2.z*c_47+c_358+8*c_6*
        c_48+c_359+5*c_44*(c_400+c_360+p1.z*(p2.z+12*p3.z))-c_8*(c_401+36*c_71*p1.z*p2.z-40*c_43*p2.z+18*c_71*c_4+8*p1.z*c_45+c_166-36*
        c_71*p1.z*p3.z+240*c_43*p3.z+c_361+120*c_2*p2.z*p3.z+48*p1.z*c_4*p3.z+c_362-27*c_71*c_5+120*c_2*c_5+48*p1.z*p2.z*
        c_5+c_271+48*p1.z*c_47+c_402+12*c_48+6*p2.y*p3.y*c_50*c_363+c_12*(c_364+c_185+c_187+c_404+c_365)+3*c_6*c_366)+2*c_37*(c_367+p3.y*
        (c_368+c_140+c_9+c_124+c_268))+p1.y*(-3*c_6*p3.y*(c_139+c_340+c_269+c_70+c_33+c_55)+9*c_71*(-(p3.y*c_14*c_369)+p2.y*
        (c_139+c_52+c_126+c_233+c_7))-c_39*(c_20+p1.z*(c_258+c_370)+5*(c_66+c_59+c_5))-p3.y*(c_12*(c_405+c_340+c_131+c_74+c_407+c_130)+4*
        (c_415+c_371+c_372+c_164+5*p2.z*c_47+c_373+6*c_2*p2.z*c_29-10*c_43*c_11+3*p1.z*(c_374+c_289+c_250+2*c_47)))+p2.y*(-3*c_12*
        (c_139+c_232+c_131+c_65+c_233+c_5)+c_384)))+p3.x*(9*c_71*c_6*c_2+3*c_40*c_2+27*c_71*p2.y*p3.y*c_2+3*c_39*p3.y*c_2+18*c_71*c_12*
        c_2+c_385+3*p2.y*c_41*c_2+c_42*c_2-40*c_6*c_38-40*p2.y*p3.y*c_38+6*c_71*c_6*p1.z*p2.z+4*c_40*p1.z*p2.z+15*c_71*p2.y*p3.y*
        p1.z*p2.z+5*c_39*p3.y*p1.z*p2.z+24*c_71*c_12*p1.z*p2.z+6*c_6*c_12*p1.z*p2.z+7*p2.y*c_41*p1.z*p2.z+c_386-48*c_6*c_43*
        p2.z-40*p2.y*p3.y*c_43*p2.z-32*c_12*c_43*p2.z+6*c_71*p2.y*p3.y*c_4+4*c_39*p3.y*c_4+12*c_71*c_12*c_4+6*c_6*c_12*c_4+c_344+4*
        c_42*c_4-36*c_6*c_2*c_4+c_387+c_388-16*c_6*p1.z*c_45-28*p2.y*p3.y*p1.z*c_45-16*c_12*p1.z*c_45-16*p2.y*p3.y*c_46-8*
        c_12*c_46+3*c_71*c_6*p1.z*p3.z-c_40*p1.z*p3.z+12*c_71*p2.y*p3.y*p1.z*p3.z-2*c_39*p3.y*p1.z*p3.z+30*c_71*c_12*p1.z*
        p3.z-3*c_6*c_12*p1.z*p3.z-4*p2.y*c_41*p1.z*p3.z+c_389-8*c_6*c_43*p3.z-16*p2.y*p3.y*c_43*p3.z+8*c_12*c_43*p3.z-6*c_71*c_6*
        p2.z*p3.z-4*c_40*p2.z*p3.z-4*c_39*p3.y*p2.z*p3.z+60*c_71*c_12*p2.z*p3.z+c_390+20*c_42*p2.z*p3.z+c_391-72*c_12*c_2*
        p2.z*p3.z+12*c_6*p1.z*c_4*p3.z-24*p2.y*p3.y*p1.z*c_4*p3.z-48*c_12*p1.z*c_4*p3.z+16*c_6*c_45*p3.z-16*p2.y*p3.y*c_45*
        p3.z+c_350-12*c_71*c_6*c_5-2*c_40*c_5-60*c_71*p2.y*p3.y*c_5+c_352+c_392-20*p2.y*c_41*c_5+c_393+c_182+c_354+c_394+24*c_6*p1.z*
        p2.z*c_5+12*p2.y*p3.y*p1.z*p2.z*c_5+c_395+24*c_6*c_4*c_5+c_396+20*c_6*p1.z*c_47+80*p2.y*p3.y*p1.z*c_47+c_397+c_357+c_398-80*
        c_12*p2.z*c_47+16*c_6*c_48+80*p2.y*p3.y*c_48+c_399-5*c_44*(c_400+2*p2.z*c_25+p1.z*(12*p2.z+p3.z))+2*c_37*(-(p3.y*
        c_283)+p2.y*(c_364+c_187+c_31+c_130-5*p1.z*c_29))+c_8*(c_401-9*c_71*c_4+3*c_12*c_4+12*c_46+40*c_43*(c_94+c_0)-27*c_71*p2.z*
        p3.z+9*c_12*p2.z*p3.z+c_362-18*c_71*c_5+6*c_12*c_5+c_271+c_402+c_373+120*c_2*p2.z*c_25+6*p2.y*p3.y*c_14*c_403+c_6*(c_364-9*
        c_4+c_105+c_404+c_68)+p1.z*(-18*c_71*c_29+6*c_12*c_29+8*(6*c_45+c_137+c_138+c_47)))+p1.y*(c_39*(c_405+c_32+c_131+c_406+c_407+c_130)+3*
        c_6*p3.y*(c_139+c_62+c_4+c_191+c_233+c_130)+3*c_71*(p3.y*(c_159+c_340+c_157+c_207+c_292)+p2.y*(c_405+c_52+c_65+c_31+c_190))+c_41*
        (c_20+p1.z*(15*p2.z+c_299)+5*(c_4+c_59+c_55))-4*p3.y*c_414+p2.y*(3*c_12*(c_139+c_67+c_66+c_406+c_33+c_190)+4*
        (c_415+c_166+5*c_45*p3.z+c_164+c_416+c_417-10*c_43*c_29+6*c_2*p3.z*c_11+3*p1.z*(2*c_45+c_247+c_307+5*c_47)))))))/double(2903040);
}

double trig::s64() const{
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p11_4=p1.y*p11_3;
    double p11_5=p1.y*p11_4;
    double p11_6=p1.y*p11_5;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p31_4=p3.y*p31_3;
    double p31_5=p3.y*p31_4;
    double p31_6=p3.y*p31_5;
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p21_4=p2.y*p21_3;
    double p21_5=p2.y*p21_4;
    double p21_6=p2.y*p21_5;
    double p12_2=p1.z*p1.z;
    double p12_3=p1.z*p12_2;
    double p22_2=p2.z*p2.z;
    double p22_3=p2.z*p22_2;
    double p32_2=p3.z*p3.z;
    double p32_3=p3.z*p32_2;
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
    double c_0=5*p3.z;
    double c_1=p11_2;
    double c_2=-p3.z;
    double c_3=p2.z+c_2;
    double c_4=p31_2;
    double c_5=3*p2.z;
    double c_6=p21_2;
    double c_7=5*p1.z;
    double c_8=35*p1.z;
    double c_9=5*p2.z;
    double c_10=3*p3.z;
    double c_11=35*p2.z;
    double c_12=18*p3.z;
    double c_13=p12_3;
    double c_14=p12_2;
    double c_15=p22_2;
    double c_16=p22_3;
    double c_17=p32_2;
    double c_18=p32_3;
    double c_19=-p1.z;
    double c_20=c_19+p3.z;
    double c_21=-(2*p3.z);
    double c_22=2*p1.z;
    double c_23=-5*p1.z;
    double c_24=2*p2.z;
    double c_25=p1.z+p2.z+p3.z;
    double c_26=5*c_1*c_25;
    double c_27=4*p1.z;
    double c_28=6*p1.z;
    double c_29=-p2.z;
    double c_30=p1.z+p2.z+c_21;
    double c_31=p1.z+c_2;
    double c_32=3*p1.z;
    double c_33=c_19+p2.z;
    double c_34=c_4*c_33;
    double c_35=-(2*p2.z);
    double c_36=2*p3.z;
    double c_37=7*p1.z;
    double c_38=5*c_6*c_13;
    double c_39=-(3*p3.z);
    double c_40=4*p2.z;
    double c_41=p30_2;
    double c_42=c_1*c_3;
    double c_43=4*p3.z;
    double c_44=3*c_14;
    double c_45=10*c_15;
    double c_46=8*p2.z*p3.z;
    double c_47=3*c_17;
    double c_48=c_24+p3.z;
    double c_49=4*p1.z*c_48;
    double c_50=c_44+c_45+c_46+c_47+c_49;
    double c_51=-(4*p3.z);
    double c_52=7*p2.z;
    double c_53=c_28+c_52+c_0;
    double c_54=3*c_13;
    double c_55=5*c_16;
    double c_56=-(3*p2.z*c_17);
    double c_57=3*c_15*p3.z;
    double c_58=-(12*c_18);
    double c_59=p21_4;
    double c_60=p21_3;
    double c_61=p31_3;
    double c_62=p31_4;
    double c_63=p21_6;
    double c_64=p21_5;
    double c_65=p31_5;
    double c_66=p31_6;
    double c_67=c_7+c_5+p3.z;
    double c_68=p1.z+c_29;
    double c_69=c_32+c_24+p3.z;
    double c_70=5*c_13;
    double c_71=-(2*c_18);
    double c_72=c_27+c_5+c_36;
    double c_73=18*p1.z;
    double c_74=18*p2.z;
    double c_75=35*p3.z;
    double c_76=2*c_15;
    double c_77=2*p2.z*p3.z;
    double c_78=3*c_16;
    double c_79=6*p3.z;
    double c_80=3*c_15;
    double c_81=p2.z+p3.z;
    double c_82=6*p2.z;
    double c_83=c_37+c_82+c_0;
    double c_84=7*p3.z;
    double c_85=-2*c_4;
    double c_86=9*p2.z*p3.z;
    double c_87=6*c_17;
    double c_88=-3*c_4;
    double c_89=9*p2.z;
    double c_90=12*c_15*p3.z;
    double c_91=30*p2.z*c_17;
    double c_92=5*c_18;
    double c_93=p2.z+c_43;
    double c_94=6*p1.z*p2.z*c_93;
    double c_95=6*p2.z*p3.z;
    double c_96=p2.z+c_36;
    double c_97=5*p2.z*p3.z;
    double c_98=3*p2.z*c_17;
    double c_99=10*c_17;
    double c_100=-5*c_13;
    double c_101=-(5*p3.z);
    double c_102=p20_2;
    double c_103=p30_4;
    double c_104=10*p2.y*c_61*c_16;
    double c_105=-(10*c_60*p3.y*c_18);
    double c_106=p11_6;
    double c_107=c_7+p2.z+c_10;
    double c_108=p11_5;
    double c_109=c_32+p2.z+c_36;
    double c_110=p11_4;
    double c_111=-(2*c_16);
    double c_112=24*p1.z*p2.z*p3.z;
    double c_113=c_27+c_24+c_10;
    double c_114=2*c_14;
    double c_115=2*c_17;
    double c_116=-c_4;
    double c_117=6*c_14;
    double c_118=6*c_15;
    double c_119=6*p1.z*c_81;
    double c_120=4*c_13;
    double c_121=3*c_4*c_31;
    double c_122=30*c_15*p3.z;
    double c_123=3*c_18;
    double c_124=c_40+p3.z;
    double c_125=p11_3;
    double c_126=c_37+c_9+c_79;
    double c_127=10*c_14;
    double c_128=4*p2.z*p3.z;
    double c_129=8*p1.z*c_81;
    double c_130=-(5*c_16);
    double c_131=9*p2.z*c_17;
    double c_132=p2.z+c_79;
    double c_133=-(3*c_17);
    double c_134=-(3*p2.z);
    double c_135=4*p1.z*c_96;
    double c_136=-(35*c_16);
    double c_137=5*c_15;
    double c_138=10*p2.z*p3.z;
    double c_139=-(10*c_18);
    double c_140=-(10*c_16);
    double c_141=-(4*c_15*p3.z);
    double c_142=12*p2.y*c_61*p1.z*c_15;
    double c_143=-(12*c_60*p3.y*p1.z*c_17);
    double c_144=p20_3;
    double c_145=p3.y*c_68;
    double c_146=p1.y*c_3;
    double c_147=p2.y*c_20;
    double c_148=c_145+c_146+c_147;
    double c_149=p20_4;
    double c_150=-(5*p2.z);
    double c_151=-(5*c_6*c_25);
    double c_152=c_6*c_20;
    double c_153=-(5*c_4*c_25);
    double c_154=-3*p1.z;
    double c_155=3*p1.y;
    double c_156=3*p1.z*p2.z;
    double c_157=2*p1.z*p3.z;
    double c_158=2*p1.z*p2.z;
    double c_159=3*p1.z*p3.z;
    double c_160=c_114+c_158+c_15+c_159+c_77+c_115;
    double c_161=4*c_16;
    double c_162=30*c_14*p3.z;
    double c_163=9*c_15*p3.z;
    double c_164=6*p2.z*c_17;
    double c_165=-(3*p1.z*c_15);
    double c_166=-10*c_13;
    double c_167=c_89+c_79;
    double c_168=c_14*c_167;
    double c_169=-(2*c_17);
    double c_170=-(3*c_16);
    double c_171=-(3*p1.z*c_17);
    double c_172=-(5*c_18);
    double c_173=10*c_13;
    double c_174=-(4*c_18);
    double c_175=2*p3.y;
    double c_176=-(4*p2.z);
    double c_177=c_7+c_52+c_79;
    double c_178=-(6*c_6*c_14*p2.z);
    double c_179=10*c_6*c_16;
    double c_180=-(6*p2.y*p3.y*p1.z*p2.z*p3.z);
    double c_181=4*p1.y;
    double c_182=2*p2.y;
    double c_183=p3.y*p1.z;
    double c_184=p1.y*p2.z;
    double c_185=-(p3.y*p2.z);
    double c_186=-(p1.y*p3.z);
    double c_187=c_183+c_184+c_185+c_186+c_147;
    double c_188=6*c_15*p3.z;
    double c_189=6*c_18;
    double c_190=-c_17;
    double c_191=3*p2.z*p3.z;
    double c_192=-(30*p2.y*p3.y*c_13);
    double c_193=-(30*p2.y*p3.y*c_14*p2.z);
    double c_194=-(9*p2.y*p3.y*c_16);
    double c_195=12*p2.y*p3.y*c_14*p3.z;
    double c_196=-(6*c_4*c_14*p3.z);
    double c_197=9*c_6*c_15*p3.z;
    double c_198=c_7+c_82+c_84;
    double c_199=-35*c_13;
    double c_200=6*c_16;
    double c_201=c_82+p3.z;
    double c_202=20*c_13;
    double c_203=30*c_14*p2.z;
    double c_204=-60*c_13;
    double c_205=9*c_18;
    double c_206=5*c_17;
    double c_207=6*c_60*p3.y*c_13;
    double c_208=-(6*p2.y*c_61*c_13);
    double c_209=-(3*c_6*c_62*p2.z);
    double c_210=c_66*p2.z;
    double c_211=30*c_6*c_4*c_16;
    double c_212=5*c_62*c_16;
    double c_213=-(c_63*p3.z);
    double c_214=3*c_59*c_4*p3.z;
    double c_215=18*c_6*c_4*c_15*p3.z;
    double c_216=-(18*c_6*c_4*p2.z*c_17);
    double c_217=-(5*c_59*c_18);
    double c_218=-(30*c_6*c_4*c_18);
    double c_219=p1.z+c_35+p3.z;
    double c_220=c_28+c_9+c_84;
    double c_221=c_22+p2.z+c_39;
    double c_222=c_22+c_134+p3.z;
    double c_223=c_29+p3.z;
    double c_224=c_127+c_80+c_128+c_47+c_129;
    double c_225=c_27+p2.z+c_101;
    double c_226=c_27+c_150+p3.z;
    double c_227=c_15*p3.z;
    double c_228=-(2*p2.z*c_17);
    double c_229=3*c_14*c_81;
    double c_230=p2.z*p3.z;
    double c_231=c_15+c_230+c_169;
    double c_232=2*p1.z*c_231;
    double c_233=c_120+c_16+c_227+c_228+c_139+c_229+c_232;
    double c_234=-(2*c_15*p3.z);
    double c_235=-2*c_15;
    double c_236=c_32+c_176+p3.z;
    double c_237=p1.z+c_134+c_36;
    double c_238=c_32+p2.z+c_51;
    double c_239=p1.z+c_24+c_39;
    double c_240=-(3*c_15*p3.z);
    double c_241=2*p2.z*c_17;
    double c_242=7*c_17;
    double c_243=-(6*p2.z);
    double c_244=10*c_15*p3.z;
    double c_245=-(4*p2.z*c_17);
    double c_246=-(3*c_18);
    double c_247=p1.z+c_176+c_10;
    double c_248=12*p2.z*p3.z;
    double c_249=-(6*p3.z);
    double c_250=c_14*c_48;
    double c_251=c_80+c_77+c_169;
    double c_252=p1.z*c_251;
    double c_253=c_13+c_161+c_57+c_245+c_139+c_250+c_252;
    double c_254=p1.z+c_5+c_51;
    double c_255=4*c_18;
    double c_256=c_14*c_96;
    double c_257=c_235+c_77+c_47;
    double c_258=p1.z*c_257;
    double c_259=c_13+c_140+c_141+c_98+c_255+c_256+c_258;
    double c_260=c_44+c_80+c_46+c_99+c_135;
    double c_261=9*c_16;
    double c_262=-(60*c_18);
    double c_263=7*c_15;
    double c_264=-(12*c_16);
    double c_265=9*c_14*c_81;
    double c_266=c_76+c_191+c_115;
    double c_267=9*p1.z*c_266;
    double c_268=6*c_13;
    double c_269=p2.z+c_0;
    double c_270=15*c_17;
    double c_271=c_15+c_97+c_270;
    double c_272=-(7*c_18);
    double c_273=c_16+c_57+c_98+c_272;
    double c_274=6*c_14*c_96;
    double c_275=c_80+c_46+c_99;
    double c_276=3*p1.z*c_275;
    double c_277=p20_5;
    double c_278=c_7+c_243+p3.z;
    double c_279=p3.y*c_33;
    double c_280=p2.y*c_31;
    double c_281=p1.y*c_223;
    double c_282=c_279+c_280+c_281;
    double c_283=2*p1.y;
    double c_284=3*p2.y;
    double c_285=4*p3.y;
    double c_286=c_114+c_156+c_76+c_157+c_77+c_17;
    double c_287=2*p1.z*c_81;
    double c_288=c_14+c_76+c_191+c_115+c_287;
    double c_289=30*c_6*c_14*p2.z;
    double c_290=60*p2.y*p3.y*c_14*p2.z;
    double c_291=12*c_4*p1.z*p2.z*p3.z;
    double c_292=12*c_6*p1.z*c_17;
    double c_293=9*c_4*p1.z*c_17;
    double c_294=-(9*c_4*p2.z*c_17);
    double c_295=9*p2.y*p3.y*c_18;
    double c_296=4*p2.y;
    double c_297=3*p3.y;
    double c_298=-(9*p2.z*c_17);
    double c_299=-(30*c_15*p3.z);
    double c_300=-(12*p2.z*c_17);
    double c_301=-(6*p1.z*p3.z*c_124);
    double c_302=12*c_13;
    double c_303=c_9+p3.z;
    double c_304=4*c_15;
    double c_305=-(2*p2.z*p3.z);
    double c_306=c_63*p1.z;
    double c_307=-(15*c_103*c_4*p1.z);
    double c_308=3*c_66*p1.z;
    double c_309=5*c_59*c_13;
    double c_310=-(9*c_6*c_4*c_13);
    double c_311=-(15*c_59*c_4*p2.z);
    double c_312=-(3*c_66*p2.z);
    double c_313=-(36*c_41*c_6*c_14*p2.z);
    double c_314=18*c_6*c_4*p1.z*c_15;
    double c_315=15*c_64*p3.y*p3.z;
    double c_316=3*p2.y*c_65*p3.z;
    double c_317=-(18*c_41*c_6*c_14*p3.z);
    double c_318=-(18*c_6*c_4*c_14*p3.z);
    double c_319=-(30*c_60*p3.y*c_15*p3.z);
    double c_320=90*c_41*c_4*p1.z*c_17;
    double c_321=-(27*c_6*c_4*p1.z*c_17);
    double c_322=-(30*c_62*p1.z*c_17);
    double c_323=30*c_62*p2.z*c_17;
    double c_324=-(30*p2.y*c_61*c_18);
    double c_325=c_8+p2.z+c_12;
    double c_326=12*p2.z*c_17;
    double c_327=c_22+p3.z;
    double c_328=-6*p1.z;
    double c_329=c_27+c_29+c_39;
    double c_330=-(10*c_14*c_3);
    double c_331=5*c_15*p3.z;
    double c_332=7*p2.z*c_17;
    double c_333=c_15+c_191+c_206;
    double c_334=4*p1.z*c_333;
    double c_335=-(8*c_16);
    double c_336=c_15+c_305+c_190;
    double c_337=-(12*p1.z*c_336);
    double c_338=9*p1.z*p2.z;
    double c_339=6*p1.z*p3.z;
    double c_340=c_116+c_117+c_338+c_118+c_339+c_95+c_47;
    double c_341=8*c_13;
    double c_342=-(20*c_16);
    double c_343=c_40+c_39;
    double c_344=3*c_14*c_343;
    double c_345=-2*p1.z;
    double c_346=7*c_15*p3.z;
    double c_347=10*p2.z*c_17;
    double c_348=10*c_18;
    double c_349=p2.z*c_17;
    double c_350=c_235+c_230+c_17;
    double c_351=2*p1.z*c_350;
    double c_352=c_154+p2.z+c_36;
    double c_353=-c_41;
    double c_354=6*p1.z*p2.z;
    double c_355=9*p1.z*p3.z;
    double c_356=-c_16;
    double c_357=2*c_14*c_96;
    double c_358=c_15+c_77+c_47;
    double c_359=-(p1.z*c_358);
    double c_360=c_173+c_356+c_234+c_56+c_174+c_357+c_359;
    double c_361=-(2*c_14*c_48);
    double c_362=c_80+c_77+c_17;
    double c_363=p1.z*c_362;
    double c_364=c_166+c_161+c_57+c_241+c_18+c_361+c_363;
    double c_365=3*p3.y*c_364;
    double c_366=3*c_64*p3.y*p1.z;
    double c_367=3*c_59*c_4*p1.z;
    double c_368=3*c_60*c_61*p1.z;
    double c_369=3*c_6*c_62*p1.z;
    double c_370=3*p2.y*c_65*p1.z;
    double c_371=-(9*c_60*p3.y*c_13);
    double c_372=-(9*p2.y*c_61*c_13);
    double c_373=-(12*c_62*c_14*p2.z);
    double c_374=-(12*c_62*p1.z*c_15);
    double c_375=-(15*c_6*c_62*p3.z);
    double c_376=35*c_66*p3.z;
    double c_377=-(9*c_6*c_4*c_14*p3.z);
    double c_378=-(18*c_6*c_4*p1.z*p2.z*p3.z);
    double c_379=-(60*c_62*p1.z*p2.z*p3.z);
    double c_380=-(35*c_62*c_18);
    double c_381=c_8+c_74+p3.z;
    double c_382=35*c_13;
    double c_383=12*c_16;
    double c_384=60*p1.z*p2.z*p3.z;
    double c_385=c_22+p2.z;
    double c_386=c_328+c_9+p3.z;
    double c_387=c_7+p2.z+c_249;
    double c_388=c_345+p2.z+p3.z;
    double c_389=c_27+c_134+c_2;
    double c_390=c_22+c_29+c_2;
    double c_391=-(8*c_18);
    double c_392=c_15+c_77+c_190;
    double c_393=12*p1.z*c_392;
    double c_394=c_4*c_329;
    double c_395=10*c_14*c_3;
    double c_396=5*p2.z*c_17;
    double c_397=c_137+c_191+c_17;
    double c_398=4*p1.z*c_397;
    double c_399=-(9*c_15*p3.z);
    double c_400=-(18*p2.z*c_17);
    double c_401=90*p2.z*c_17;
    double c_402=-(35*c_18);
    double c_403=c_24+c_0;
    double c_404=3*c_14*c_403;
    double c_405=c_76+c_138+c_206;
    double c_406=3*p1.z*c_405;
    double c_407=c_70+c_200+c_122+c_401+c_402+c_404+c_406;
    double c_408=9*c_13;
    double c_409=4*c_15*p3.z;
    double c_410=-(10*p2.z*c_17);
    double c_411=20*p3.z;
    double c_412=c_52+c_411;
    double c_413=c_14*c_412;
    double c_414=c_137+c_248+c_99;
    double c_415=p1.z*c_414;
    double c_416=-(3*c_81);
    double c_417=c_28+c_416;
    double c_418=-(12*c_15*p3.z);
    double c_419=-(30*p2.z*c_17);
    double c_420=-(20*c_18);
    double c_421=-(6*p1.z*p2.z*c_93);
    double c_422=-9*p2.z;
    double c_423=12*p3.z;
    double c_424=c_422+c_423;
    double c_425=c_14*c_424;
    double c_426=-12*c_13;
    double c_427=10*c_16;
    double c_428=c_4*c_221;
    double c_429=c_32+c_35+c_2;
    double c_430=c_19+c_24+c_0;
    double c_431=3*c_14*p3.z;
    double c_432=c_70+c_431+c_171+c_172;
    double c_433=2*c_15*p3.z;
    return (-3*c_277*p3.x*(4*p2.y*p3.y*(p1.z+c_24)+p1.y*p3.y*c_30+c_42+c_4*(c_22+c_5+p3.z)-p1.y*p2.y*(p1.z+c_243+c_0)-c_6*
        c_53)+p10_6*(14*c_1*c_3+3*p2.y*p3.y*c_3+c_4*c_67+p1.y*p3.y*c_381-c_6*c_107-p1.y*p2.y*c_325)+p20_6*(-14*c_6*c_31+3*p1.y*
        p3.y*c_20-c_4*(c_32+c_9+p3.z)-p2.y*p3.y*(c_73+c_11+p3.z)+c_1*(p1.z+c_9+c_10)+p1.y*p2.y*(p1.z+c_11+c_12))+p10_4*(35*p1.y*
        p2.y*c_13+c_38-35*p1.y*p3.y*c_13-5*c_4*c_13-105*c_1*c_14*p2.z-15*p1.y*p2.y*c_14*p2.z-180*p1.y*p3.y*c_14*p2.z+c_193-30*
        c_4*c_14*p2.z-30*c_1*p1.z*c_15-15*p1.y*p2.y*p1.z*c_15-3*c_6*p1.z*c_15-60*p1.y*p3.y*p1.z*c_15-24*p2.y*p3.y*p1.z*
        c_15-12*c_4*p1.z*c_15-5*c_1*c_16-5*p1.y*p2.y*c_16-2*c_6*c_16-12*p1.y*p3.y*c_16+c_194-3*c_4*c_16+105*c_1*c_14*p3.z+180*p1.y*
        p2.y*c_14*p3.z+30*c_6*c_14*p3.z+15*p1.y*p3.y*c_14*p3.z+30*p2.y*p3.y*c_14*p3.z+60*p1.y*p2.y*p1.z*p2.z*p3.z+24*c_6*
        p1.z*p2.z*p3.z-60*p1.y*p3.y*p1.z*p2.z*p3.z-24*c_4*p1.z*p2.z*p3.z+12*p1.y*p2.y*c_15*p3.z+c_197-12*p1.y*p3.y*c_15*
        p3.z-3*p2.y*p3.y*c_15*p3.z-6*c_4*c_15*p3.z+30*c_1*p1.z*c_17+60*p1.y*p2.y*p1.z*c_17+c_292+15*p1.y*p3.y*p1.z*c_17+24*
        p2.y*p3.y*p1.z*c_17+3*c_4*p1.z*c_17+12*p1.y*p2.y*p2.z*c_17+6*c_6*p2.z*c_17-12*p1.y*p3.y*p2.z*c_17+3*p2.y*p3.y*p2.z*
        c_17+c_294+5*c_1*c_18+12*p1.y*p2.y*c_18+3*c_6*c_18+5*p1.y*p3.y*c_18+c_295+2*c_4*c_18-3*p2.x*p3.x*(5*p1.y+2*(p2.y+p3.y))*
        c_148+3*c_102*(c_34+p1.y*p2.y*(c_23+p2.z+c_21)-p2.y*p3.y*c_222+c_26+p1.y*p3.y*(c_23+c_40+p3.z)-c_6*c_113)-3*c_41*(-(p2.y*
        p3.y*c_221)+c_152+p1.y*p3.y*(c_23+c_35+p3.z)+c_26-c_4*c_72+p1.y*p2.y*(c_23+p2.z+c_43)))+3*p10_5*(p3.x*(4*p1.y*p3.y*
        c_385+p1.y*p2.y*(c_28+c_29+c_101)+p2.y*p3.y*c_30+c_6*c_31+c_4*c_69-c_1*c_83)+p2.x*(c_34-4*p1.y*p2.y*c_327-p2.y*p3.y*
        c_219+p1.y*p3.y*c_386-c_6*c_109+c_1*c_126))+c_149*(c_38+12*p2.y*p3.y*c_13+3*c_4*c_13+c_289+c_290+12*c_4*c_14*p2.z+105*c_6*
        p1.z*c_15+180*p2.y*p3.y*p1.z*c_15+30*c_4*p1.z*c_15+35*p2.y*p3.y*c_16+5*c_4*c_16+c_195+6*c_4*c_14*p3.z+60*p2.y*p3.y*p1.z*
        p2.z*p3.z+24*c_4*p1.z*p2.z*p3.z-105*c_6*c_15*p3.z-15*p2.y*p3.y*c_15*p3.z+12*p2.y*p3.y*p1.z*c_17+c_293-30*c_6*p2.z*
        c_17-15*p2.y*p3.y*p2.z*c_17-3*c_4*p2.z*c_17-5*c_6*c_18-5*p2.y*p3.y*c_18-2*c_4*c_18+c_1*(2*c_13+c_130+3*c_14*
        (p2.z+c_39)+c_299+c_300+c_246+c_301)-3*c_41*(p1.y*p3.y*c_239+c_42+p2.y*p3.y*(c_22+c_9+c_2)+c_151+c_4*(c_32+c_40+c_36)-p1.y*p2.y*
        (p1.z+c_150+c_43))+p1.y*(3*p3.y*c_31*c_50+p2.y*(c_70+c_136+3*c_14*(c_9+c_51)-180*c_15*p3.z-60*p2.z*c_17+c_58+3*p1.z*(c_137-20*
        p2.z*p3.z-4*c_17))))-c_144*p3.x*(-3*c_1*c_3*c_50+c_41*(3*p1.y*p3.y*c_254+3*c_1*c_3+8*p2.y*p3.y*c_3-3*p1.y*p2.y*c_247+2*
        c_4*c_53-2*c_6*c_220)-2*c_4*(c_54+c_55+c_57+c_56+c_172+c_265+c_267)-2*p2.y*p3.y*(c_54+6*c_14*c_48+3*p1.z*(c_45+c_46+c_47)+4*
        (c_55+c_56+c_71))+2*c_6*(c_268+6*c_14*c_303+6*p1.z*(15*c_15+c_97+c_17)+5*(-7*c_16+c_57+c_98+c_18))+3*p1.y*(-(p3.y*(c_54+c_427+c_141-15*
        p2.z*c_17+c_58+c_14*(c_52+c_36)+p1.z*(c_45+c_77+c_133)))+p2.y*(c_54-60*c_16+c_244+20*p2.z*c_17+c_205+c_14*(c_40+c_0)+p1.z*
        (-10*c_15+c_248+c_242))))+c_41*(-3*c_63*p1.z-6*c_64*p3.y*p1.z-9*c_59*c_4*p1.z-12*c_60*c_61*p1.z-15*c_6*c_62*p1.z-18*
        p2.y*c_65*p1.z+14*c_66*p1.z+3*c_59*c_13+c_207+9*c_6*c_4*c_13+12*p2.y*c_61*c_13-5*c_62*c_13-5*c_63*p2.z-9*c_64*p3.y*p2.z-12*
        c_59*c_4*p2.z-14*c_60*c_61*p2.z-15*c_6*c_62*p2.z-15*p2.y*c_65*p2.z-14*c_66*p2.z+12*c_59*c_14*p2.z+18*c_60*p3.y*c_14*
        p2.z+18*c_6*c_4*c_14*p2.z+12*p2.y*c_61*c_14*p2.z+30*c_59*p1.z*c_15+36*c_60*p3.y*p1.z*c_15+27*c_6*c_4*p1.z*c_15+c_142+5*
        c_59*c_16+10*c_60*p3.y*c_16+12*c_6*c_4*c_16+c_104+c_212+c_213-3*c_64*p3.y*p3.z-6*c_59*c_4*p3.z-10*c_60*c_61*p3.z+c_375-21*
        p2.y*c_65*p3.z+6*c_59*c_14*p3.z+18*c_60*p3.y*c_14*p3.z+36*c_6*c_4*c_14*p3.z+60*p2.y*c_61*c_14*p3.z-30*c_62*c_14*p3.z+24*
        c_59*p1.z*p2.z*p3.z+54*c_60*p3.y*p1.z*p2.z*p3.z+72*c_6*c_4*p1.z*p2.z*p3.z+60*p2.y*c_61*p1.z*p2.z*p3.z+6*c_60*p3.y*
        c_15*p3.z+c_215+30*p2.y*c_61*c_15*p3.z+30*c_62*c_15*p3.z+9*c_59*p1.z*c_17+36*c_60*p3.y*p1.z*c_17+90*c_6*c_4*p1.z*c_17+180*
        p2.y*c_61*p1.z*c_17-105*c_62*p1.z*c_17-3*c_59*p2.z*c_17-6*c_60*p3.y*p2.z*c_17+30*p2.y*c_61*p2.z*c_17+105*c_62*p2.z*
        c_17-2*c_59*c_18+c_105+c_218-70*p2.y*c_61*c_18+c_106*c_67+c_108*(-3*p2.y*c_68+3*p3.y*c_69)-c_110*(c_70+3*c_6*c_68+6*p2.y*
        p3.y*c_68+c_203+12*p1.z*c_15+c_78+c_112+c_188+c_171+c_131+c_71-3*c_4*c_72)+c_103*(3*p1.y*p2.y*c_68+14*c_4*c_68+c_6*(c_32+p2.z+c_0)-c_1*
        (p1.z+c_5+c_0)+p2.y*p3.y*(c_73+p2.z+c_75)-p1.y*p3.y*(p1.z+c_74+c_75))-3*c_1*(c_59*c_68+2*c_60*p3.y*c_68-3*c_6*
        c_68*(c_116+c_114+c_156+c_76+c_157+c_77+c_17)-2*p2.y*p3.y*c_68*(c_85+c_117+c_354+c_80+c_355+c_95+c_87)+c_4*
        (c_120+c_78+c_90+c_91+c_139+c_153+c_94+c_168))-c_125*(3*c_60*c_68+6*c_6*p3.y*c_68-3*p2.y*c_68*(c_88+c_127+c_80+c_128+c_47+c_129)-2*p3.y*
        (c_100+c_170+c_399+c_400+c_92-3*c_14*c_201+c_4*c_83-3*p1.z*(c_80+c_86+c_190)))+p1.y*(-3*c_64*c_68+6*c_59*p3.y*c_33+3*c_65*c_198+6*
        c_6*p3.y*c_68*(c_85+c_44+c_118+c_86+c_87+c_119)+3*c_60*c_68*(c_88+c_44+c_45+c_46+c_47+c_49)+3*p2.y*c_4*c_68*(-5*c_4+9*c_14+9*
        c_15+24*p2.z*p3.z+30*c_17+12*p1.z*c_96)-2*c_61*c_407)+c_41*(c_1*(-2*c_13+c_78+c_14*(c_89+c_39)+c_90+c_91+c_92+c_94)-5*c_4*c_68*
        (c_14+c_15+c_95+21*c_17+p1.z*c_132)-c_6*(c_54+c_111+c_240+c_92+c_274+c_276)-p2.y*p3.y*(c_302+12*c_14*c_269+12*p1.z*c_271-5*
        c_273)+p1.y*(-3*p2.y*c_68*c_260+p3.y*(c_100+c_383+3*c_14*(c_40+c_101)+60*c_15*p3.z+180*p2.z*c_17+35*c_18+3*p1.z*(c_304+20*
        p2.z*p3.z-5*c_17)))))+c_102*(9*c_103*c_6*p1.z-14*c_63*p1.z+6*c_103*p2.y*p3.y*p1.z+18*c_64*p3.y*p1.z+c_307+15*c_59*c_4*
        p1.z+12*c_60*c_61*p1.z+9*c_6*c_62*p1.z+6*p2.y*c_65*p1.z+c_308-9*c_41*c_6*c_13+c_309-12*c_60*p3.y*c_13+9*c_41*c_4*
        c_13+c_310+c_208-3*c_62*c_13+6*c_103*c_6*p2.z-3*c_103*p2.y*p3.y*p2.z+21*c_64*p3.y*p2.z-15*c_103*c_4*p2.z+15*c_59*c_4*p2.z+10*c_60*
        c_61*p2.z+6*c_6*c_62*p2.z+3*p2.y*c_65*p2.z+c_210+c_313+30*c_59*c_14*p2.z-60*c_60*p3.y*c_14*p2.z+18*c_41*c_4*c_14*p2.z-36*
        c_6*c_4*c_14*p2.z-18*p2.y*c_61*c_14*p2.z-6*c_62*c_14*p2.z-90*c_41*c_6*p1.z*c_15+105*c_59*p1.z*c_15-180*c_60*p3.y*p1.z*
        c_15+27*c_41*c_4*p1.z*c_15-90*c_6*c_4*p1.z*c_15-36*p2.y*c_61*p1.z*c_15-9*c_62*p1.z*c_15+30*c_41*c_6*c_16+30*c_41*p2.y*
        p3.y*c_16+70*c_60*p3.y*c_16+12*c_41*c_4*c_16+c_211+c_104+2*c_62*c_16+12*c_103*c_6*p3.z+14*c_63*p3.z+15*c_103*p2.y*p3.y*
        p3.z+c_315-15*c_103*c_4*p3.z+15*c_59*c_4*p3.z+14*c_60*c_61*p3.z+12*c_6*c_62*p3.z+9*p2.y*c_65*p3.z+5*c_66*p3.z+c_317-12*c_60*
        p3.y*c_14*p3.z+36*c_41*c_4*c_14*p3.z+c_318-18*p2.y*c_61*c_14*p3.z-12*c_62*c_14*p3.z-72*c_41*c_6*p1.z*p2.z*p3.z-60*c_60*
        p3.y*p1.z*p2.z*p3.z+72*c_41*c_4*p1.z*p2.z*p3.z-72*c_6*c_4*p1.z*p2.z*p3.z-54*p2.y*c_61*p1.z*p2.z*p3.z-24*c_62*p1.z*
        p2.z*p3.z-105*c_59*c_15*p3.z+18*c_41*p2.y*p3.y*c_15*p3.z+c_319+18*c_41*c_4*c_15*p3.z+6*p2.y*c_61*c_15*p3.z+3*c_62*c_15*
        p3.z-27*c_41*c_6*p1.z*c_17+c_143+c_320+c_321-36*p2.y*c_61*p1.z*c_17+c_322-18*c_41*c_6*p2.z*c_17-30*c_59*p2.z*c_17-18*c_41*
        p2.y*p3.y*p2.z*c_17-30*c_60*p3.y*p2.z*c_17+c_216-6*p2.y*c_61*p2.z*c_17-12*c_41*c_6*c_18+c_217-30*c_41*p2.y*p3.y*
        c_18+c_105-30*c_41*c_4*c_18-12*c_6*c_4*c_18-10*p2.y*c_61*c_18-5*c_62*c_18-c_106*c_107-3*c_108*(p3.y*c_20+p2.y*c_109)+c_110*
        (c_70+c_165+c_111+6*p2.y*p3.y*c_31+c_121+c_162+c_112+c_163+12*p1.z*c_17+c_164+c_123-3*c_6*c_113)-3*c_1*(4*c_60*p3.y*c_20+c_62*c_20+5*
        c_59*c_25+3*c_4*c_31*c_160+2*p2.y*p3.y*c_31*c_340-c_41*c_3*(c_353+c_44+c_118+c_86+c_87+c_119)-c_6*(c_120+c_140+c_121+c_122+c_326+c_123+6*
        p1.z*p3.z*c_124+c_14*(c_82+9*p3.z)))+c_125*(9*c_6*p3.y*c_31-2*c_60*c_126-3*p3.y*c_31*(c_116+c_127+c_80+c_128+c_47+c_129)+2*
        p2.y*(c_70+c_130+c_121+18*c_15*p3.z+c_131+c_123+3*c_14*c_132-3*p1.z*(c_15-9*p2.z*p3.z+c_133)))+p1.y*(15*c_59*
        p3.y*c_31-3*c_64*c_177-6*p2.y*c_4*c_31*(c_116+c_44+c_118+c_86+c_87+c_119)-9*c_6*p3.y*c_31*(c_116+c_44+c_45+c_46+c_47+c_49)+3*
        c_103*(-(p3.y*(p1.z+c_40+c_101))+p2.y*c_237)-3*c_61*c_31*(c_116+c_44+c_80+c_46+c_99+c_135)+2*c_60*(c_70+c_136+6*c_4*c_31+90*
        c_15*p3.z+c_91+c_189+3*c_14*(c_9+c_36)+3*p1.z*(c_137+c_138+c_115))-9*c_41*(-(p3.y*c_253)+p2.y*c_259)))+p10_2*(21*c_108*p2.y*
        p1.z+15*c_110*c_6*p1.z+10*c_125*c_60*p1.z+6*c_1*c_59*p1.z+3*p1.y*c_64*p1.z+c_306-21*c_108*p3.y*p1.z-15*c_110*c_4*p1.z-10*
        c_125*c_61*p1.z-6*c_1*c_62*p1.z-3*p1.y*c_65*p1.z-c_66*p1.z+70*c_125*p2.y*c_13+30*c_1*c_6*c_13+10*p1.y*c_60*c_13+2*c_59*
        c_13-70*c_125*p3.y*c_13-30*c_1*c_4*c_13-10*p1.y*c_61*c_13-2*c_62*c_13+14*c_106*p2.z+15*c_108*p2.y*p2.z+15*c_110*c_6*
        p2.z+14*c_125*c_60*p2.z+12*c_1*c_59*p2.z+9*p1.y*c_64*p2.z+5*c_63*p2.z-18*c_108*p3.y*p2.z-15*c_110*p2.y*p3.y*p2.z-12*c_125*
        c_6*p3.y*p2.z-9*c_1*c_60*p3.y*p2.z-6*p1.y*c_59*p3.y*p2.z-3*c_64*p3.y*p2.z-15*c_110*c_4*p2.z-12*c_125*p2.y*c_4*p2.z-9*
        c_1*c_6*c_4*p2.z-6*p1.y*c_60*c_4*p2.z-3*c_59*c_4*p2.z-12*c_125*c_61*p2.z-9*c_1*p2.y*c_61*p2.z-6*p1.y*c_6*c_61*p2.z-3*
        c_60*c_61*p2.z-9*c_1*c_62*p2.z-6*p1.y*p2.y*c_62*p2.z+c_209-6*p1.y*c_65*p2.z-3*p2.y*c_65*p2.z+c_312-105*c_110*c_14*
        p2.z-30*c_125*p2.y*c_14*p2.z+6*p1.y*c_60*c_14*p2.z+3*c_59*c_14*p2.z+180*c_125*p3.y*c_14*p2.z+90*c_1*p2.y*p3.y*c_14*p2.z+36*
        p1.y*c_6*p3.y*c_14*p2.z+9*c_60*p3.y*c_14*p2.z+90*c_1*c_4*c_14*p2.z+36*p1.y*p2.y*c_4*c_14*p2.z+9*c_6*c_4*c_14*p2.z+36*
        p1.y*c_61*c_14*p2.z+9*p2.y*c_61*c_14*p2.z+9*c_62*c_14*p2.z-30*c_110*p1.z*c_15-30*c_125*p2.y*p1.z*c_15-18*c_1*c_6*p1.z*
        c_15-6*p1.y*c_60*p1.z*c_15+60*c_125*p3.y*p1.z*c_15+72*c_1*p2.y*p3.y*p1.z*c_15+54*p1.y*c_6*p3.y*p1.z*c_15+24*c_60*p3.y*
        p1.z*c_15+36*c_1*c_4*p1.z*c_15+36*p1.y*p2.y*c_4*p1.z*c_15+c_314+18*p1.y*c_61*p1.z*c_15+c_142+6*c_62*p1.z*c_15-5*c_110*
        c_16-10*c_125*p2.y*c_16-12*c_1*c_6*c_16-10*p1.y*c_60*c_16-5*c_59*c_16+12*c_125*p3.y*c_16+27*c_1*p2.y*p3.y*c_16+36*p1.y*
        c_6*p3.y*c_16+30*c_60*p3.y*c_16+9*c_1*c_4*c_16+18*p1.y*p2.y*c_4*c_16+18*c_6*c_4*c_16+6*p1.y*c_61*c_16+9*p2.y*c_61*c_16+3*c_62*
        c_16-14*c_106*p3.z+18*c_108*p2.y*p3.z+15*c_110*c_6*p3.z+12*c_125*c_60*p3.z+9*c_1*c_59*p3.z+6*p1.y*c_64*p3.z+3*c_63*
        p3.z-15*c_108*p3.y*p3.z+15*c_110*p2.y*p3.y*p3.z+12*c_125*c_6*p3.y*p3.z+9*c_1*c_60*p3.y*p3.z+6*p1.y*c_59*p3.y*p3.z+3*
        c_64*p3.y*p3.z-15*c_110*c_4*p3.z+12*c_125*p2.y*c_4*p3.z+9*c_1*c_6*c_4*p3.z+6*p1.y*c_60*c_4*p3.z+c_214-14*c_125*c_61*p3.z+9*
        c_1*p2.y*c_61*p3.z+6*p1.y*c_6*c_61*p3.z+3*c_60*c_61*p3.z-12*c_1*c_62*p3.z+6*p1.y*p2.y*c_62*p3.z+3*c_6*c_62*p3.z-9*
        p1.y*c_65*p3.z+c_316-5*c_66*p3.z+105*c_110*c_14*p3.z-180*c_125*p2.y*c_14*p3.z-90*c_1*c_6*c_14*p3.z-36*p1.y*c_60*c_14*
        p3.z-9*c_59*c_14*p3.z+30*c_125*p3.y*c_14*p3.z-90*c_1*p2.y*p3.y*c_14*p3.z-36*p1.y*c_6*p3.y*c_14*p3.z-9*c_60*p3.y*c_14*
        p3.z-36*p1.y*p2.y*c_4*c_14*p3.z+c_377-6*p1.y*c_61*c_14*p3.z-9*p2.y*c_61*c_14*p3.z-3*c_62*c_14*p3.z-60*c_125*p2.y*p1.z*
        p2.z*p3.z-72*c_1*c_6*p1.z*p2.z*p3.z-54*p1.y*c_60*p1.z*p2.z*p3.z-24*c_59*p1.z*p2.z*p3.z+60*c_125*p3.y*p1.z*p2.z*
        p3.z-18*p1.y*c_6*p3.y*p1.z*p2.z*p3.z-12*c_60*p3.y*p1.z*p2.z*p3.z+72*c_1*c_4*p1.z*p2.z*p3.z+18*p1.y*p2.y*c_4*p1.z*
        p2.z*p3.z+54*p1.y*c_61*p1.z*p2.z*p3.z+12*p2.y*c_61*p1.z*p2.z*p3.z+24*c_62*p1.z*p2.z*p3.z-12*c_125*p2.y*c_15*p3.z-27*
        c_1*c_6*c_15*p3.z-36*p1.y*c_60*c_15*p3.z-30*c_59*c_15*p3.z+12*c_125*p3.y*c_15*p3.z+9*c_1*p2.y*p3.y*c_15*p3.z-6*c_60*
        p3.y*c_15*p3.z+18*c_1*c_4*c_15*p3.z+18*p1.y*p2.y*c_4*c_15*p3.z+9*c_6*c_4*c_15*p3.z+18*p1.y*c_61*c_15*p3.z+15*p2.y*c_61*
        c_15*p3.z+12*c_62*c_15*p3.z+30*c_110*p1.z*c_17-60*c_125*p2.y*p1.z*c_17-36*c_1*c_6*p1.z*c_17-18*p1.y*c_60*p1.z*c_17-6*
        c_59*p1.z*c_17+30*c_125*p3.y*p1.z*c_17-72*c_1*p2.y*p3.y*p1.z*c_17-36*p1.y*c_6*p3.y*p1.z*c_17+c_143+18*c_1*c_4*p1.z*c_17-54*
        p1.y*p2.y*c_4*p1.z*c_17-18*c_6*c_4*p1.z*c_17+6*p1.y*c_61*p1.z*c_17-24*p2.y*c_61*p1.z*c_17-12*c_125*p2.y*p2.z*c_17-18*
        c_1*c_6*p2.z*c_17-18*p1.y*c_60*p2.z*c_17-12*c_59*p2.z*c_17+12*c_125*p3.y*p2.z*c_17-9*c_1*p2.y*p3.y*p2.z*c_17-18*p1.y*
        c_6*p3.y*p2.z*c_17-15*c_60*p3.y*p2.z*c_17+27*c_1*c_4*p2.z*c_17-9*c_6*c_4*p2.z*c_17+36*p1.y*c_61*p2.z*c_17+6*p2.y*c_61*
        p2.z*c_17+c_323+5*c_110*c_18-12*c_125*p2.y*c_18-9*c_1*c_6*c_18-6*p1.y*c_60*c_18-3*c_59*c_18+10*c_125*p3.y*c_18-27*c_1*p2.y*
        p3.y*c_18-18*p1.y*c_6*p3.y*c_18-9*c_60*p3.y*c_18+12*c_1*c_4*c_18-36*p1.y*p2.y*c_4*c_18-18*c_6*c_4*c_18+10*p1.y*c_61*
        c_18+c_324+5*c_62*c_18-3*c_144*p3.x*(c_155+c_296+c_175)*c_148+3*c_149*(c_34-p2.y*p3.y*c_226+c_151+p1.y*p3.y*(c_154+c_24+p3.z)+p1.y*
        p2.y*(c_19+c_9+c_36)+c_1*(c_22+c_40+c_10))-3*c_103*(-(p2.y*p3.y*c_225)+c_152+c_153+p1.y*p2.y*c_352+c_1*(c_22+c_5+c_43)+p1.y*
        p3.y*c_430)-3*p2.x*p3.x*c_282*(-(c_41*(c_155+c_182+c_285))+3*p1.y*c_224+6*(p2.y*c_286+p3.y*c_160))-3*c_102*(-4*
        c_6*c_13-12*p2.y*p3.y*c_13-6*c_4*c_13+c_178-9*p2.y*p3.y*c_14*p2.z-3*c_4*c_14*p2.z+12*p2.y*p3.y*p1.z*c_15+3*c_4*p1.z*
        c_15+c_179+30*p2.y*p3.y*c_16+6*c_4*c_16-9*c_6*c_14*p3.z-9*p2.y*p3.y*c_14*p3.z+c_196-24*c_6*p1.z*p2.z*p3.z+c_180-30*c_6*c_15*
        p3.z+6*p2.y*p3.y*c_15*p3.z+6*c_4*c_15*p3.z-6*c_6*p1.z*c_17-6*p2.y*p3.y*p1.z*c_17-3*c_4*p1.z*c_17-12*c_6*p2.z*c_17-3*
        p2.y*p3.y*p2.z*c_17+3*c_4*p2.z*c_17-3*c_6*c_18-3*p2.y*p3.y*c_18+3*c_41*(p1.y+p2.y+p3.y)*c_187+c_1*
        (c_166+c_161+c_162+c_163+c_164+c_123+6*p1.z*(c_15+c_128+c_115))+p1.y*(-2*p2.y*(c_70+3*c_14*p2.z+c_165+c_130)+c_365))-3*c_41*(3*c_6*c_31*c_160+c_4*
        (c_120+c_78+c_90+c_91+c_139+c_94+c_168)+3*p2.y*p3.y*c_233+c_1*(c_173-30*c_14*p2.z+c_170-6*c_15*p3.z+c_298+c_174-6*p1.z*
        (c_76+c_128+c_17))+p1.y*(2*p3.y*c_432+3*p2.y*c_360)))+p10_3*(-3*c_102*p3.x*(c_181+c_284+c_175)*c_148+c_144*(-8*p1.y*p2.y*
        c_68+3*c_4*c_33-3*p2.y*p3.y*c_236+3*p1.y*p3.y*(-4*p1.z+c_5+p3.z)-2*c_6*c_126+2*c_1*c_177)-p2.x*(-10*c_6*c_13+c_192-30*c_4*
        c_13+c_178+12*p2.y*p3.y*c_14*p2.z+6*c_4*c_14*p2.z+6*c_6*p1.z*c_15+45*p2.y*p3.y*p1.z*c_15+15*c_4*p1.z*c_15+c_179+36*p2.y*
        p3.y*c_16+9*c_4*c_16-36*c_6*c_14*p3.z-30*p2.y*p3.y*c_14*p3.z-24*c_4*c_14*p3.z-54*c_6*p1.z*p2.z*p3.z+c_180+c_291-36*
        c_6*c_15*p3.z+9*p2.y*p3.y*c_15*p3.z+12*c_4*c_15*p3.z-18*c_6*p1.z*c_17-21*p2.y*p3.y*p1.z*c_17-9*c_4*p1.z*c_17-18*c_6*
        p2.z*c_17-6*p2.y*p3.y*p2.z*c_17+9*c_4*p2.z*c_17-6*c_6*c_18-9*p2.y*p3.y*c_18+3*c_41*(c_181+c_182+c_297)*c_187+2*c_1*
        (c_199+c_55+c_188+c_164+c_189+15*c_14*c_132+15*p1.z*(c_15+c_77+c_115))+p1.y*(-2*p2.y*(c_202+c_335+c_162+c_163+c_164+c_123+c_337)+3*
        p3.y*(c_204+c_261+c_395+c_346+c_396+c_123+c_398)))+p3.x*(-30*c_6*c_13+c_192-10*c_4*c_13-24*c_6*c_14*p2.z+c_193-36*c_4*c_14*
        p2.z-9*c_6*p1.z*c_15-21*p2.y*p3.y*p1.z*c_15-18*c_4*p1.z*c_15+c_194-6*c_4*c_16+6*c_6*c_14*p3.z+c_195+c_196+12*c_6*p1.z*p2.z*
        p3.z+c_180-54*c_4*p1.z*p2.z*p3.z+c_197-6*p2.y*p3.y*c_15*p3.z-18*c_4*c_15*p3.z+15*c_6*p1.z*c_17+45*p2.y*p3.y*p1.z*
        c_17+6*c_4*p1.z*c_17+12*c_6*p2.z*c_17+9*p2.y*p3.y*p2.z*c_17-36*c_4*p2.z*c_17+9*c_6*c_18+36*p2.y*p3.y*c_18+10*c_4*c_18+c_41*
        (3*p2.y*p3.y*c_238+3*p1.y*p2.y*c_329+3*c_6*c_31+8*p1.y*p3.y*c_31+2*c_4*c_83-2*c_1*c_198)+2*c_1*(c_199+c_200+c_188+c_164+c_92+15*
        c_14*c_201+15*p1.z*(c_76+c_77+c_17))+p1.y*(-2*p3.y*(c_202+c_203+c_78+c_188+c_131+c_391+c_393)+3*p2.y*
        (c_204+c_78+c_330+c_331+c_332+c_205+c_334))))+p2.x*p3.x*(-18*c_63*p1.z-12*c_64*p3.y*p1.z-6*c_59*c_4*p1.z+6*c_6*c_62*p1.z+12*p2.y*c_65*
        p1.z+18*c_66*p1.z+12*c_59*c_13+c_207+c_208-12*c_62*c_13-35*c_63*p2.z-24*c_64*p3.y*p2.z+c_311-8*c_60*c_61*p2.z+c_209+c_210+60*
        c_59*c_14*p2.z+24*c_60*p3.y*c_14*p2.z-12*p2.y*c_61*c_14*p2.z+c_373+180*c_59*p1.z*c_15+60*c_60*p3.y*p1.z*c_15-18*p2.y*
        c_61*p1.z*c_15+c_374+35*c_59*c_16+40*c_60*p3.y*c_16+c_211+16*p2.y*c_61*c_16+c_212+3*c_106*c_3+c_213+c_214+8*c_60*c_61*p3.z+15*
        c_6*c_62*p3.z+24*p2.y*c_65*p3.z+c_376+12*c_59*c_14*p3.z+12*c_60*p3.y*c_14*p3.z-24*p2.y*c_61*c_14*p3.z-60*c_62*c_14*
        p3.z+60*c_59*p1.z*p2.z*p3.z+48*c_60*p3.y*p1.z*p2.z*p3.z-48*p2.y*c_61*p1.z*p2.z*p3.z+c_379-15*c_59*c_15*p3.z+c_215+24*
        p2.y*c_61*c_15*p3.z+15*c_62*c_15*p3.z+12*c_59*p1.z*c_17+18*c_60*p3.y*p1.z*c_17-60*p2.y*c_61*p1.z*c_17-180*c_62*p1.z*
        c_17-15*c_59*p2.z*c_17-24*c_60*p3.y*p2.z*c_17+c_216+15*c_62*p2.z*c_17+c_217-16*c_60*p3.y*c_18+c_218-40*p2.y*c_61*c_18+c_380-3*
        c_108*(-(p3.y*c_30)+p2.y*c_219)-3*c_103*(p1.y*p3.y*(p1.z+c_9+c_249)+c_42-p1.y*p2.y*c_219-4*p2.y*p3.y*(p1.z+c_36)-c_6*
        (c_22+p2.z+c_10)+c_4*c_220)-3*c_110*(-c_428+c_6*c_222+2*p2.y*p3.y*c_223+c_3*c_224)-3*c_1*(-(c_62*c_225)-2*p2.y*c_61*c_30+c_59*
        c_226+2*c_60*p3.y*c_219+6*p2.y*p3.y*c_3*c_288+3*c_4*c_233-3*c_6*(c_120+c_140+c_4*c_3+c_234+c_349+c_18+c_229+c_351))-3*
        c_125*(c_60*c_236+c_6*p3.y*c_237+p3.y*(c_173+c_78-c_4*c_238+2*c_14*(c_9+c_21)+c_433+c_56+c_58+p1.z*(c_263+c_77-15*c_17))-p2.y*
        (c_173+c_264+c_4*c_239+c_240+c_241+c_123+c_14*(-4*p2.z+10*p3.z)+p1.z*(-15*c_15+c_77+c_242)))-3*p1.y*(c_64*c_278+c_59*p3.y*
        (c_32+c_150+c_36)+c_60*(-9*c_13+60*c_16+c_244+c_245+c_246+c_4*c_247-c_14*(20*p2.z+c_84)-p1.z*(c_45+c_248+c_206))+c_61*(c_408+c_78-c_4*
        c_387+c_409+c_410+c_262+c_413+c_415)+p2.y*c_4*(c_4*(c_154+c_35+c_0)+3*c_253)-c_6*p3.y*(c_4*c_254+3*c_259))+c_41*(3*c_1*
        c_3*c_260+3*p1.y*p3.y*(c_54+c_261+20*c_15*p3.z+c_347+c_262+c_14*(c_9+c_43)+p1.z*(c_263+c_248-10*c_17))-3*p1.y*p2.y*
        (c_54+c_264-15*c_15*p3.z+c_245+c_348+c_14*(c_24+c_84)+p1.z*(-3*c_15+c_77+c_99))-2*(c_6*(c_54+c_130+c_240+c_98+c_92+c_265+c_267)-c_4*
        (c_268+6*c_14*c_269+6*p1.z*c_271+5*c_273)+p2.y*p3.y*(c_54+c_274+c_276-4*(2*c_16+c_57+c_172)))))+p1.x*(-3*c_149*p3.x*(c_283+5*
        p2.y+c_175)*c_148+3*c_277*(c_34-p2.y*p3.y*c_278+p1.y*p3.y*c_388+4*p1.y*p2.y*c_48+c_1*(p1.z+c_5+c_36)-c_6*c_177)-3*
        c_102*p3.x*c_282*(-(c_41*(c_283+c_284+c_285))+6*p1.y*c_286+6*p3.y*c_288+3*p2.y*c_50)+c_144*(10*c_6*c_13+27*p2.y*p3.y*c_13+9*
        c_4*c_13+c_289+c_290+15*c_4*c_14*p2.z+30*c_6*p1.z*c_15+30*p2.y*p3.y*p1.z*c_15+6*c_4*p1.z*c_15-70*c_6*c_16-180*p2.y*p3.y*
        c_16-30*c_4*c_16+12*c_6*c_14*p3.z+21*p2.y*p3.y*c_14*p3.z+12*c_4*c_14*p3.z+60*c_6*p1.z*p2.z*p3.z+36*p2.y*p3.y*p1.z*
        p2.z*p3.z+c_291+180*c_6*c_15*p3.z-30*p2.y*p3.y*c_15*p3.z-24*c_4*c_15*p3.z+c_292+15*p2.y*p3.y*p1.z*c_17+c_293+60*c_6*p2.z*
        c_17+12*p2.y*p3.y*p2.z*c_17+c_294+12*c_6*c_18+c_295-3*c_41*(c_283+c_296+c_297)*c_187+2*c_1*(c_70+c_130+3*c_14*(p2.z+c_249)-18*
        c_15*p3.z+c_298+c_246-3*p1.z*(c_15+c_86+c_47))+p1.y*(2*p2.y*(c_341+c_342+c_344+c_299+c_300+c_246+c_301)+3*p3.y*
        (c_302+c_140-10*c_15*p3.z-7*p2.z*c_17+c_246+3*c_14*c_303+p1.z*(c_304+c_305+c_169))))+p2.x*(6*c_103*c_6*p1.z+c_306+9*c_103*p2.y*
        p3.y*p1.z+c_366+c_307+c_367+c_368+c_369+c_370+c_308-18*c_41*c_6*c_13+c_309-9*c_41*p2.y*p3.y*c_13+c_371+27*c_41*c_4*c_13+c_310+c_372-9*
        c_62*c_13+35*c_63*p2.z+6*c_103*p2.y*p3.y*p2.z-18*c_64*p3.y*p2.z+15*c_103*c_4*p2.z+c_311-12*c_60*c_61*p2.z-9*c_6*
        c_62*p2.z-6*p2.y*c_65*p2.z+c_312+c_313+15*c_59*c_14*p2.z-18*c_41*p2.y*p3.y*c_14*p2.z-12*c_60*p3.y*c_14*p2.z+9*c_41*c_4*
        c_14*p2.z-9*c_6*c_4*c_14*p2.z-6*p2.y*c_61*c_14*p2.z-3*c_62*c_14*p2.z-36*c_41*c_6*p1.z*c_15+15*c_59*p1.z*c_15-27*c_41*p2.y*
        p3.y*p1.z*c_15+30*c_60*p3.y*p1.z*c_15-9*c_41*c_4*p1.z*c_15+c_314+9*p2.y*c_61*p1.z*c_15+3*c_62*p1.z*c_15-35*c_59*c_16-36*
        c_41*p2.y*p3.y*c_16+180*c_60*p3.y*c_16-27*c_41*c_4*c_16+90*c_6*c_4*c_16+36*p2.y*c_61*c_16+9*c_62*c_16-6*c_103*c_6*p3.z+18*
        c_63*p3.z-15*c_103*p2.y*p3.y*p3.z+c_315+12*c_59*c_4*p3.z+9*c_60*c_61*p3.z+6*c_6*c_62*p3.z+c_316+c_317-12*c_59*c_14*
        p3.z-9*c_41*p2.y*p3.y*c_14*p3.z-15*c_60*p3.y*c_14*p3.z+72*c_41*c_4*c_14*p3.z+c_318-21*p2.y*c_61*c_14*p3.z-24*c_62*c_14*
        p3.z-18*c_41*c_6*p1.z*p2.z*p3.z-60*c_59*p1.z*p2.z*p3.z-18*c_41*p2.y*p3.y*p1.z*p2.z*p3.z-36*c_60*p3.y*p1.z*p2.z*
        p3.z+c_378-6*p2.y*c_61*p1.z*p2.z*p3.z+36*c_41*c_6*c_15*p3.z-180*c_59*c_15*p3.z-27*c_41*p2.y*p3.y*c_15*p3.z+c_319-72*c_41*
        c_4*c_15*p3.z+36*c_6*c_4*c_15*p3.z+45*p2.y*c_61*c_15*p3.z+24*c_62*c_15*p3.z-12*c_59*p1.z*c_17+18*c_41*p2.y*p3.y*p1.z*
        c_17-21*c_60*p3.y*p1.z*c_17+c_320+c_321-30*p2.y*c_61*p1.z*c_17+c_322+54*c_41*c_6*p2.z*c_17-60*c_59*p2.z*c_17+36*c_41*p2.y*
        p3.y*p2.z*c_17-60*c_60*p3.y*p2.z*c_17-90*c_41*c_4*p2.z*c_17-27*c_6*c_4*p2.z*c_17+12*p2.y*c_61*p2.z*c_17+c_323+36*c_41*c_6*
        c_18-12*c_59*c_18+90*c_41*p2.y*p3.y*c_18-27*c_60*p3.y*c_18-36*c_6*c_4*c_18+c_324-c_106*c_325+c_110*(c_382-15*c_14*p2.z-15*
        p1.z*c_15+c_130+3*c_4*(c_7+c_29+c_51)+3*p2.y*p3.y*(c_7+c_35+c_39)+180*c_14*p3.z+c_384+c_90+60*p1.z*c_17+c_326+12*c_18-3*c_6*
        (c_7+c_29+c_36))-3*c_108*(4*p2.y*c_327+p3.y*(c_328+p2.z+c_0))+c_125*(-8*c_60*c_68+3*c_6*p3.y*c_389+3*p3.y*
        (c_204+c_78+c_394+c_330+c_331+c_332+c_205+c_334)+2*p2.y*(c_202+c_335+c_162+c_163+c_164+c_123+c_337+c_4*c_417))+p1.y*(12*c_64*c_48+3*c_59*p3.y*
        (c_22+c_150+c_10)-6*p2.y*c_4*c_68*c_340+2*c_60*(c_341+c_342+c_344+c_299+c_300+c_246+3*c_4*c_219+c_301)+3*c_103*(2*p2.y*c_68+p3.y*
        (c_345+c_134+c_0))+3*c_61*(c_426+c_78+c_4*c_390+c_346+c_347+c_348-3*c_14*c_269+c_232)-9*c_41*(2*p2.y*c_68*c_286-p3.y*
        c_233)+3*c_6*p3.y*(c_4*c_222-3*(c_120+c_140+c_234+c_349+c_18+c_229+c_351)))-3*c_1*(-(c_6*c_68*(3*c_4+2*(5*c_14+8*p1.z*p2.z+c_137)))+c_59*
        (p1.z+c_150+c_21)-c_60*p3.y*c_236+c_62*c_352-2*c_41*c_3*(c_353+c_117+c_354+c_80+c_355+c_95+c_87)+3*c_4*c_360-p2.y*
        (c_61*c_429+c_365)))-p3.x*(3*c_63*p1.z+c_366+c_367+c_368+c_369+c_370+c_66*p1.z-9*c_59*c_13+c_371+c_310+c_372+5*c_62*c_13+3*c_64*
        p3.y*p2.z+6*c_59*c_4*p2.z+9*c_60*c_61*p2.z+12*c_6*c_62*p2.z+15*p2.y*c_65*p2.z+18*c_66*p2.z-24*c_59*c_14*p2.z-21*c_60*
        p3.y*c_14*p2.z-18*c_6*c_4*c_14*p2.z-15*p2.y*c_61*c_14*p2.z+c_373-30*c_59*p1.z*c_15-30*c_60*p3.y*p1.z*c_15-27*c_6*c_4*
        p1.z*c_15-21*p2.y*c_61*p1.z*c_15+c_374-30*c_60*p3.y*c_16-36*c_6*c_4*c_16-27*p2.y*c_61*c_16-12*c_62*c_16-3*c_63*p3.z-6*c_64*
        p3.y*p3.z-9*c_59*c_4*p3.z-12*c_60*c_61*p3.z+c_375-18*p2.y*c_65*p3.z+c_376-3*c_59*c_14*p3.z-6*c_60*p3.y*c_14*p3.z+c_377-12*
        p2.y*c_61*c_14*p3.z+15*c_62*c_14*p3.z-6*c_60*p3.y*p1.z*p2.z*p3.z+c_378-36*p2.y*c_61*p1.z*p2.z*p3.z+c_379+30*c_59*
        c_15*p3.z+12*c_60*p3.y*c_15*p3.z-27*c_6*c_4*c_15*p3.z-60*p2.y*c_61*c_15*p3.z-60*c_62*c_15*p3.z+3*c_59*p1.z*c_17+9*c_60*
        p3.y*p1.z*c_17+18*c_6*c_4*p1.z*c_17+30*p2.y*c_61*p1.z*c_17+15*c_62*p1.z*c_17+24*c_59*p2.z*c_17+45*c_60*p3.y*p2.z*c_17+36*
        c_6*c_4*p2.z*c_17-30*p2.y*c_61*p2.z*c_17-180*c_62*p2.z*c_17+9*c_59*c_18+36*c_60*p3.y*c_18+90*c_6*c_4*c_18+180*p2.y*c_61*
        c_18+c_380-c_106*c_381+c_110*(c_382+180*c_14*p2.z+60*p1.z*c_15+c_383+3*p2.y*p3.y*(c_7+c_134+c_21)+3*c_6*(c_7+c_176+c_2)-3*c_4*
        (c_7+c_24+c_2)-15*c_14*p3.z+c_384+c_90-15*p1.z*c_17+c_326+c_172)-3*c_108*(4*p3.y*c_385+p2.y*c_386)+3*c_103*(-(p2.y*p3.y*
        c_387)+c_152+p1.y*p2.y*c_388+4*p1.y*p3.y*c_96+c_1*(p1.z+c_24+c_10)-c_4*c_198)+c_125*(3*c_60*c_389+6*c_6*p3.y*c_390+2*p3.y*
        (c_202+c_203+c_78-4*c_4*c_31+c_188+c_131+c_391+c_393)+3*p2.y*(c_204+c_261+c_394+c_395+c_346+c_396+c_123+c_398))+c_41*(3*c_6*c_31*
        c_260+2*c_1*(c_70+c_170+c_399+c_400+c_172+3*c_14*(-6*p2.z+p3.z)-3*p1.z*(c_80+c_86+c_17))+2*c_4*c_407+3*p2.y*p3.y*
        (c_408+c_78+c_409+c_410+c_262+c_413+c_415)+p1.y*(2*p3.y*(c_341+c_170+c_418+c_419+c_420+c_421+c_425)+3*p2.y*(c_302+c_170-7*c_15*
        p3.z+c_410+c_139+3*c_14*c_269-2*p1.z*c_231)))+p1.y*(6*c_59*p3.y*c_31+c_64*c_417+2*c_61*(c_341+c_170+c_418+c_419+c_420+6*c_4*
        c_96+c_421+c_425)+3*c_60*(c_426+c_427+c_428+c_244+c_332+c_123-3*c_14*c_303+c_351)+6*c_6*p3.y*(c_4*c_30-3*c_31*c_160)+3*p2.y*c_4*(c_4*
        (c_22+c_5+c_101)-3*c_233))+3*c_1*(c_60*p3.y*(c_32+c_29+c_21)+c_59*c_429+c_62*c_430+2*c_4*c_432+3*c_6*(c_166+c_161+c_4*
        c_31+c_57+c_241+c_18+c_361+c_363)+p2.y*p3.y*(c_4*c_238+3*(c_166+c_16+c_433+c_98+c_255-2*c_14*c_96+p1.z*c_358))))))/double(4354560);
}

double trig::s65() const{
    double p12_2=p1.z*p1.z;
    double p22_2=p2.z*p2.z;
    double p32_2=p3.z*p3.z;
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p21_4=p2.y*p21_3;
    double p21_5=p2.y*p21_4;
    double p21_6=p2.y*p21_5;
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p11_4=p1.y*p11_3;
    double p11_5=p1.y*p11_4;
    double p11_6=p1.y*p11_5;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p31_4=p3.y*p31_3;
    double p31_5=p3.y*p31_4;
    double p31_6=p3.y*p31_5;
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
    double c_0=-p3.z;
    double c_1=p2.z+c_0;
    double c_2=p12_2;
    double c_3=3*c_2;
    double c_4=p22_2;
    double c_5=p32_2;
    double c_6=p21_2;
    double c_7=-c_5;
    double c_8=p11_2;
    double c_9=5*p2.z*p3.z;
    double c_10=2*p3.z;
    double c_11=p2.z+c_10;
    double c_12=p31_2;
    double c_13=5*p2.z;
    double c_14=p1.z+c_0;
    double c_15=21*c_4;
    double c_16=2*p1.z;
    double c_17=c_16+c_13+c_10;
    double c_18=5*c_4;
    double c_19=3*p2.z*p3.z;
    double c_20=2*c_2;
    double c_21=5*p1.z*p3.z;
    double c_22=p21_4;
    double c_23=p21_3;
    double c_24=p31_3;
    double c_25=p31_4;
    double c_26=3*p2.z;
    double c_27=-(5*p1.z*p2.z);
    double c_28=6*c_5;
    double c_29=3*c_4;
    double c_30=6*c_2;
    double c_31=-(30*c_4);
    double c_32=4*c_5;
    double c_33=2*p2.z;
    double c_34=c_33+p3.z;
    double c_35=4*p1.z*p3.z;
    double c_36=p2.z+p3.z;
    double c_37=4*p2.z;
    double c_38=3*p3.z;
    double c_39=5*p1.z*p2.z;
    double c_40=-(20*c_5);
    double c_41=-2*c_2;
    double c_42=-(8*c_5);
    double c_43=3*p1.z*p2.z;
    double c_44=4*c_4;
    double c_45=-(4*c_5);
    double c_46=5*c_2;
    double c_47=5*p1.z;
    double c_48=2*c_36;
    double c_49=c_47+c_48;
    double c_50=p2.z*p3.z;
    double c_51=-(5*p2.z*p3.z);
    double c_52=2*p2.z*p3.z;
    double c_53=6*p1.z*p2.z;
    double c_54=-(5*p1.z*p3.z);
    double c_55=c_26+p3.z;
    double c_56=p11_3;
    double c_57=p11_4;
    double c_58=-(9*c_6*c_12*p1.z*p3.z);
    double c_59=4*p1.z;
    double c_60=c_59+c_26+c_10;
    double c_61=-p2.z;
    double c_62=p1.z+c_61;
    double c_63=-(2*c_4);
    double c_64=-(3*p2.z*p3.z);
    double c_65=2*p1.z*p3.z;
    double c_66=2*c_5;
    double c_67=p20_2;
    double c_68=12*c_4;
    double c_69=-(2*c_5);
    double c_70=2*p1.z*p2.z;
    double c_71=3*p1.z*p3.z;
    double c_72=4*p2.z*p3.z;
    double c_73=10*c_2;
    double c_74=-(6*c_4);
    double c_75=4*p1.z*p2.z;
    double c_76=9*c_4;
    double c_77=p30_2;
    double c_78=c_59+c_33+c_38;
    double c_79=-8*c_2;
    double c_80=2*c_4;
    double c_81=5*p1.z*c_34;
    double c_82=-(6*c_5);
    double c_83=-20*c_2;
    double c_84=-(5*c_25*p2.z*p3.z);
    double c_85=-(10*p2.y*c_24*c_5);
    double c_86=3*c_5;
    double c_87=p1.z+p2.z+p3.z;
    double c_88=6*p1.z*p3.z;
    double c_89=15*p2.z*p3.z;
    double c_90=9*c_5;
    double c_91=c_16+c_37+c_38;
    double c_92=4*p3.z;
    double c_93=c_16+c_26+c_92;
    double c_94=12*c_5;
    double c_95=p21_6;
    double c_96=p21_5;
    double c_97=p31_5;
    double c_98=p31_6;
    double c_99=14*c_2;
    double c_100=8*p1.z*p3.z;
    double c_101=3*p1.z;
    double c_102=c_101+c_37+c_10;
    double c_103=4*c_2;
    double c_104=-(5*c_5);
    double c_105=c_46+c_39+c_4+c_52+c_7;
    double c_106=c_37+p3.z;
    double c_107=p1.z*c_106;
    double c_108=6*p2.z;
    double c_109=5*p3.z;
    double c_110=6*p2.z*p3.z;
    double c_111=8*p3.z;
    double c_112=12*p1.z*p2.z;
    double c_113=9*p2.z*p3.z;
    double c_114=5*c_5;
    double c_115=c_101+c_33+c_92;
    double c_116=c_16+c_33+c_109;
    double c_117=18*p2.z*p3.z;
    double c_118=7*c_5;
    double c_119=36*p2.z*p3.z;
    double c_120=10*c_5;
    double c_121=7*p3.z;
    double c_122=p1.z+p2.z+c_121;
    double c_123=p2.z+c_38;
    double c_124=-c_4;
    double c_125=6*p3.z;
    double c_126=p2.z+c_125;
    double c_127=-c_2;
    double c_128=30*p2.z*p3.z;
    double c_129=21*c_5;
    double c_130=p30_4;
    double c_131=-(15*c_22*c_12*c_4);
    double c_132=15*c_6*c_25*c_5;
    double c_133=p11_6;
    double c_134=-(3*c_5);
    double c_135=p11_5;
    double c_136=6*p1.z;
    double c_137=c_46+c_124+c_21+c_52+c_5;
    double c_138=8*p1.z*p2.z;
    double c_139=9*p1.z*p3.z;
    double c_140=12*p2.z*p3.z;
    double c_141=7*p1.z*p2.z;
    double c_142=-(6*p1.z*p3.z);
    double c_143=-(2*p2.z*p3.z);
    double c_144=p1.z*p3.z;
    double c_145=8*c_4;
    double c_146=-(20*c_4);
    double c_147=7*p1.z*p3.z;
    double c_148=-(4*p2.z*p3.z);
    double c_149=-(30*c_5);
    double c_150=5*p1.z*c_11;
    double c_151=-(8*c_4);
    double c_152=p2.z+c_92;
    double c_153=p1.z*c_152;
    double c_154=-(5*c_4);
    double c_155=-(p2.z*p3.z);
    double c_156=-(2*p1.z*p2.z);
    double c_157=-(4*c_4);
    double c_158=-(3*p2.y*c_97*p1.z*p2.z);
    double c_159=3*c_96*p3.y*p1.z*p3.z;
    double c_160=p20_3;
    double c_161=-(10*c_4);
    double c_162=-5*c_4;
    double c_163=c_162+c_50+c_5;
    double c_164=2*c_163;
    double c_165=c_3+c_71+c_164;
    double c_166=p20_4;
    double c_167=c_108+p3.z;
    double c_168=8*p2.z*p3.z;
    double c_169=3*p1.z*c_11;
    double c_170=-(6*p1.z*p2.z);
    double c_171=8*c_2;
    double c_172=15*p1.z*p3.z;
    double c_173=3*p1.z*c_34;
    double c_174=-6*c_2;
    double c_175=-(6*p2.z*p3.z);
    double c_176=-(12*c_5);
    double c_177=-(10*c_5);
    double c_178=6*c_4;
    double c_179=p1.z*c_34;
    double c_180=c_20+c_43+c_4+c_65+c_72;
    double c_181=-4*c_2;
    double c_182=-(p1.z*p3.z);
    double c_183=p1.z*p2.z;
    double c_184=c_101+p2.z+c_109;
    double c_185=c_127+c_70+c_4+c_9+c_114;
    double c_186=-(5*c_22*p1.z*p2.z);
    double c_187=3*c_25*c_4;
    double c_188=6*p2.y*c_24*p2.z*p3.z;
    double c_189=-(9*c_6*c_12*c_5);
    double c_190=c_20+c_70+c_71+c_72+c_5;
    double c_191=-(4*p1.z*p2.z);
    double c_192=7*p2.z*p3.z;
    double c_193=c_101+c_13+p3.z;
    double c_194=c_127+c_18+c_65+c_9+c_5;
    double c_195=2*p1.z*c_36;
    double c_196=-(3*c_4);
    double c_197=c_20+c_70+c_4+c_155+c_45;
    double c_198=c_20+c_157+c_65+c_155+c_5;
    double c_199=c_59+c_37+p3.z;
    double c_200=-(p1.z*p2.z);
    double c_201=9*c_2;
    double c_202=2*p1.z*c_11;
    double c_203=c_13+p3.z;
    double c_204=10*c_4;
    double c_205=-(3*p1.z*p2.z);
    double c_206=3*c_77*p2.y*p3.y*c_2;
    double c_207=3*c_77*c_12*p1.z*p2.z;
    double c_208=-(c_25*p1.z*p2.z);
    double c_209=-(2*c_25*c_4);
    double c_210=2*p3.z*c_36;
    double c_211=c_47+c_26+p3.z;
    double c_212=c_73+c_156+c_63+c_64+c_134;
    double c_213=c_80+c_19+c_5+c_202;
    double c_214=p2.y*c_137;
    double c_215=-30*c_2;
    double c_216=c_59+p2.z+c_92;
    double c_217=3*c_23*p3.y*c_2;
    double c_218=3*c_6*c_12*c_2;
    double c_219=3*p2.y*c_24*c_2;
    double c_220=6*p2.y*c_24*c_4;
    double c_221=5*c_25*p1.z*p3.z;
    double c_222=-(6*c_23*p3.y*c_5);
    double c_223=-(12*c_6*c_12*c_5);
    double c_224=7*c_2;
    double c_225=30*c_2;
    double c_226=c_47+p2.z+c_38;
    double c_227=-(2*p1.z*p3.z);
    double c_228=2*p1.z*c_34;
    double c_229=p2.z+c_109;
    double c_230=-(3*p1.z*p3.z);
    double c_231=12*c_2;
    double c_232=-(7*p2.z*p3.z);
    double c_233=15*p1.z*p2.z;
    double c_234=20*p2.z*p3.z;
    double c_235=-12*c_2;
    double c_236=8*c_5;
    return (-3*p10_5*(3*c_8*c_1*(7*p1.z+p2.z+p3.z)+p2.y*p3.y*c_1*c_49+c_12*(c_3+p1.z*c_203+p2.z*c_11)-c_6*(c_3+p3.z*c_34+p1.z*
        c_229)+p1.y*(p2.y*(-21*c_2+c_4-30*p1.z*p3.z+c_51+c_104)+p3.y*(21*c_2+30*p1.z*p2.z+c_18+c_9+c_7)))-3*p20_5*(-3*c_6*c_14*
        (p1.z+7*p2.z+p3.z)-p2.y*p3.y*(c_46+c_15+c_7+5*p1.z*c_167)+c_8*(c_29+c_9+c_5+p1.z*c_11)-c_12*(c_2+p2.z*c_55+p1.z*
        (c_13+c_10))+p1.y*(-(p3.y*c_14*c_17)+p2.y*(c_127+c_15+c_21+c_128+c_114)))+3*c_166*p3.x*(c_8*c_1*c_17+c_12*(c_20+c_138+c_18+c_88+c_19)+3*
        p2.y*p3.y*(c_2+c_39+c_18+c_65+c_7)-5*c_6*(c_2+c_53+c_144+c_19+c_5)-p1.y*(p3.y*(c_41+c_27+c_154+c_110+c_28)+p2.y*
        (c_20+c_31+c_21+c_89+c_236)))+3*c_67*p3.x*(10*c_22*c_2+2*c_23*p3.y*c_2-3*c_6*c_12*c_2-5*p2.y*c_24*c_2-4*c_25*c_2+60*c_22*p1.z*
        p2.z+10*c_23*p3.y*p1.z*p2.z-12*c_6*c_12*p1.z*p2.z-15*p2.y*c_24*p1.z*p2.z-8*c_25*p1.z*p2.z+35*c_22*c_4+10*c_23*p3.y*
        c_4-2*p2.y*c_24*c_4-c_25*c_4+10*c_22*p1.z*p3.z+4*c_23*p3.y*p1.z*p3.z+c_58-20*p2.y*c_24*p1.z*p3.z-20*c_25*p1.z*p3.z+5*
        c_22*p2.z*p3.z-6*c_6*c_12*p2.z*p3.z-8*p2.y*c_24*p2.z*p3.z+c_84-2*c_23*p3.y*c_5-6*c_6*c_12*c_5+c_85-10*c_25*c_5-c_57*c_1*
        c_60+c_56*(p2.y*(c_103+c_170-12*c_4+c_147+c_19+c_32)+p3.y*(c_181+c_27+c_196+c_35+c_52+c_28))+p1.y*(-6*c_6*p3.y*c_1*
        (p1.z+c_13+c_38)-c_24*(c_30+c_141+c_29+c_100+c_148+c_40)+2*c_23*(c_30+c_31+c_9+c_32+c_81)-3*p2.y*c_12*(c_20+c_44+c_64+c_42+c_107))+c_77*
        (c_8*c_1*c_93+2*c_12*(c_20+c_75+c_29+10*p1.z*p3.z+c_9)-p2.y*p3.y*(c_2+c_43+c_74+c_35+c_120)-3*c_6*(c_2+c_210+p1.z*
        (c_37+c_38))+p1.y*(p3.y*(c_20+c_39+c_76+c_72+c_40)+p2.y*(c_41+c_68+c_54+c_19+c_42)))+3*c_8*(-(p2.y*p3.y*(c_2+c_43+c_44+c_227+c_143+c_45))-c_12*
        c_197+c_6*c_165))-3*p10_4*(p3.x*(p2.y*p3.y*(c_46+c_39+c_80+c_142+c_82)+c_6*c_14*c_49-5*c_8*(c_4+c_50+c_5+c_173)+c_12*
        (c_46+2*p2.z*c_123+p1.z*(8*p2.z+c_38))+p1.y*(p2.y*(c_225+c_63-15*p1.z*p3.z+c_51+c_42)+3*p3.y*c_105))+p2.x*(p2.y*
        p3.y*(-5*c_2+c_53+c_178+c_54+c_69)-c_12*c_62*c_49+5*c_8*(c_4+c_50+c_5+c_169)-c_6*(c_46+2*p3.z*c_55+p1.z*(c_26+c_111))+p1.y*
        (-3*p2.y*c_137+p3.y*(c_215+c_233+c_145+c_9+c_66))))+p10_3*(-70*c_56*p2.y*c_2-30*c_8*c_6*c_2-10*p1.y*c_23*c_2-2*c_22*c_2+70*
        c_56*p3.y*c_2+30*c_8*c_12*c_2+10*p1.y*c_24*c_2+2*c_25*c_2-35*c_57*p1.z*p2.z-40*c_56*p2.y*p1.z*p2.z-30*c_8*c_6*p1.z*p2.z-16*
        p1.y*c_23*p1.z*p2.z+c_186+180*c_56*p3.y*p1.z*p2.z+90*c_8*p2.y*p3.y*p1.z*p2.z+36*p1.y*c_6*p3.y*p1.z*p2.z+9*c_23*
        p3.y*p1.z*p2.z+90*c_8*c_12*p1.z*p2.z+36*p1.y*p2.y*c_12*p1.z*p2.z+9*c_6*c_12*p1.z*p2.z+36*p1.y*c_24*p1.z*p2.z+9*
        p2.y*c_24*p1.z*p2.z+9*c_25*p1.z*p2.z-5*c_57*c_4-10*c_56*p2.y*c_4-12*c_8*c_6*c_4-10*p1.y*c_23*c_4-5*c_22*c_4+30*c_56*p3.y*
        c_4+36*c_8*p2.y*p3.y*c_4+27*p1.y*c_6*p3.y*c_4+12*c_23*p3.y*c_4+18*c_8*c_12*c_4+18*p1.y*p2.y*c_12*c_4+9*c_6*c_12*c_4+9*
        p1.y*c_24*c_4+c_220+c_187+35*c_57*p1.z*p3.z-180*c_56*p2.y*p1.z*p3.z-90*c_8*c_6*p1.z*p3.z-36*p1.y*c_23*p1.z*p3.z-9*c_22*
        p1.z*p3.z+40*c_56*p3.y*p1.z*p3.z-90*c_8*p2.y*p3.y*p1.z*p3.z-36*p1.y*c_6*p3.y*p1.z*p3.z-9*c_23*p3.y*p1.z*p3.z+30*
        c_8*c_12*p1.z*p3.z-36*p1.y*p2.y*c_12*p1.z*p3.z+c_58+16*p1.y*c_24*p1.z*p3.z-9*p2.y*c_24*p1.z*p3.z+c_221-30*c_56*p2.y*
        p2.z*p3.z-36*c_8*c_6*p2.z*p3.z-27*p1.y*c_23*p2.z*p3.z-12*c_22*p2.z*p3.z+30*c_56*p3.y*p2.z*p3.z-9*p1.y*c_6*p3.y*
        p2.z*p3.z-6*c_23*p3.y*p2.z*p3.z+36*c_8*c_12*p2.z*p3.z+9*p1.y*p2.y*c_12*p2.z*p3.z+27*p1.y*c_24*p2.z*p3.z+c_188+12*
        c_25*p2.z*p3.z+5*c_57*c_5-30*c_56*p2.y*c_5-18*c_8*c_6*c_5-9*p1.y*c_23*c_5-3*c_22*c_5+10*c_56*p3.y*c_5-36*c_8*p2.y*p3.y*
        c_5-18*p1.y*c_6*p3.y*c_5+c_222+12*c_8*c_12*c_5-27*p1.y*p2.y*c_12*c_5+c_189+10*p1.y*c_24*c_5-12*p2.y*c_24*c_5+5*c_25*c_5+6*
        p2.x*p3.x*(-3*p2.y*p3.y*c_1*c_87-c_6*c_14*c_60+c_12*c_62*c_78+2*c_8*c_1*c_49+p1.y*(p3.y*c_212+p2.y*(-10*c_2+c_29+c_65+c_19+c_66)))-3*
        c_67*(-(c_12*c_62*c_60)+p2.y*p3.y*(c_79+c_43+c_68+c_54+c_69)-3*c_6*c_190+2*c_8*(c_29+c_72+c_66+c_150)+p1.y*(-(p2.y*
        (c_73+c_74+c_35+c_19+c_5))+p3.y*(c_83+c_75+c_76+c_9+c_66)))+3*c_77*(-(c_6*c_14*c_78)-3*c_12*c_180+p2.y*p3.y*(c_79+c_27+c_63+c_71+c_94)+2*
        c_8*(c_80+c_72+c_86+c_81)+p1.y*(-(p3.y*(c_73+c_75+c_4+c_19+c_82))+p2.y*(c_83+c_80+c_35+c_9+c_90))))+c_160*(-12*
        c_77*c_6*c_2+5*c_22*c_2+c_206-30*c_23*p3.y*c_2+9*c_77*c_12*c_2-18*c_6*c_12*c_2-9*p2.y*c_24*c_2-3*c_25*c_2-60*c_77*c_6*p1.z*
        p2.z+35*c_22*p1.z*p2.z+12*c_77*p2.y*p3.y*p1.z*p2.z-180*c_23*p3.y*p1.z*p2.z+27*c_77*c_12*p1.z*p2.z-90*c_6*c_12*p1.z*
        p2.z-36*p2.y*c_24*p1.z*p2.z-9*c_25*p1.z*p2.z+30*c_77*p2.y*p3.y*c_4-70*c_23*p3.y*c_4+18*c_77*c_12*c_4-30*c_6*c_12*c_4-10*
        p2.y*c_24*c_4+c_209-24*c_77*c_6*p1.z*p3.z+9*c_77*p2.y*p3.y*p1.z*p3.z-30*c_23*p3.y*p1.z*p3.z+36*c_77*c_12*p1.z*p3.z-36*
        c_6*c_12*p1.z*p3.z-27*p2.y*c_24*p1.z*p3.z-12*c_25*p1.z*p3.z-30*c_77*c_6*p2.z*p3.z-35*c_22*p2.z*p3.z-40*c_23*p3.y*
        p2.z*p3.z+18*c_77*c_12*p2.z*p3.z-30*c_6*c_12*p2.z*p3.z-16*p2.y*c_24*p2.z*p3.z+c_84-18*c_77*c_6*c_5-5*c_22*c_5-18*c_77*
        p2.y*p3.y*c_5-10*c_23*p3.y*c_5+c_223+c_85-5*c_25*c_5+c_57*(c_46+c_39+c_80+12*p1.z*p3.z+c_113+c_86)+3*c_8*(-3*c_12*c_14*c_87-3*
        p2.y*p3.y*c_14*c_102+c_77*c_1*c_91+2*c_6*(c_20+c_39+c_18+c_88+c_89+c_86))+c_56*(-3*p3.y*c_14*c_60+p2.y*(c_73+16*p1.z*
        p2.z+c_204+27*p1.z*p3.z+c_119+c_90))+p1.y*(-18*c_6*p3.y*c_14*c_17-9*p2.y*c_12*c_14*c_91-3*c_24*c_14*c_93+10*c_23*(c_2+c_75+7*
        c_4+c_71+c_117+c_86)-3*c_77*(p2.y*(c_20+c_146+c_21+c_72+c_90)+p3.y*(c_41+c_27+c_151+c_19+c_94))))+p3.x*(-3*c_95*c_2-3*c_96*
        p3.y*c_2-3*c_22*c_12*c_2-3*c_23*c_24*c_2-3*c_6*c_25*c_2-3*p2.y*c_97*c_2+5*c_98*c_2-18*c_95*p1.z*p2.z-15*c_96*p3.y*p1.z*
        p2.z-12*c_22*c_12*p1.z*p2.z-9*c_23*c_24*p1.z*p2.z-6*c_6*c_25*p1.z*p2.z+c_158-14*c_95*c_4-15*c_96*p3.y*c_4+c_131-14*c_23*c_24*
        c_4-12*c_6*c_25*c_4-9*p2.y*c_97*c_4-5*c_98*c_4-3*c_95*p1.z*p3.z-6*c_96*p3.y*p1.z*p3.z-9*c_22*c_12*p1.z*p3.z-12*c_23*
        c_24*p1.z*p3.z-15*c_6*c_25*p1.z*p3.z-18*p2.y*c_97*p1.z*p3.z+35*c_98*p1.z*p3.z+c_95*p2.z*p3.z-3*c_22*c_12*p2.z*p3.z-8*
        c_23*c_24*p2.z*p3.z-15*c_6*c_25*p2.z*p3.z-24*p2.y*c_97*p2.z*p3.z-35*c_98*p2.z*p3.z+c_95*c_5+3*c_96*p3.y*c_5+6*c_22*
        c_12*c_5+10*c_23*c_24*c_5+c_132+21*p2.y*c_97*c_5+c_133*(c_99+18*p1.z*p2.z+c_29+c_182+c_19+c_7)+c_56*(-3*c_23*c_62*c_199-3*c_6*
        p3.y*c_62*c_60-3*p2.y*c_12*c_62*c_78+c_24*(c_99+9*p1.z*p2.z+c_29+c_100+c_140+c_177))-3*c_8*(3*c_6*c_12*c_62*c_87+c_22*c_62*
        c_193+c_23*p3.y*c_62*c_102+p2.y*c_24*c_62*c_115-c_25*(c_103+c_70+c_4+c_21+c_9+c_104))-3*c_135*(p2.y*c_62*(c_136+c_33+p3.z)-p3.y*
        c_105)+3*c_57*(-(c_6*c_62*c_211)-p2.y*p3.y*c_62*c_49+c_12*(c_46+c_4+c_19+c_69+c_107))-3*p1.y*(c_96*c_62*(c_16+c_108+p3.z)+c_22*
        p3.y*c_62*c_17+c_23*c_12*c_62*c_91+c_6*c_24*c_62*c_93+p2.y*c_25*c_62*c_116-c_97*(c_3+c_4+c_110-7*c_5+p1.z*(p2.z+c_111)))+c_77*
        (-5*c_25*c_62*c_122+c_22*(c_3+c_112+c_18+c_139+c_9+c_66)-c_57*(c_46+c_112+c_29+c_21+c_113+c_66)+6*c_6*c_12*
        (c_3+c_53+c_80+c_172+c_9+c_114)+10*p2.y*c_24*(c_3+c_4+c_72+c_118+3*p1.z*c_126)+c_23*p3.y*(c_201+9*p1.z*(c_26+c_92)+2*(c_18+c_168+c_114))+3*
        c_8*(3*c_6*c_62*c_87+3*p2.y*p3.y*c_62*c_115-2*c_12*(c_20+c_53+c_29+c_21+c_89+c_114))+p1.y*(3*c_23*c_62*c_91+9*c_6*p3.y*
        c_62*c_93+18*p2.y*c_12*c_62*c_116-10*c_24*(c_2+c_43+c_29+c_35+c_117+c_118))+c_56*(3*p2.y*c_62*c_78-p3.y*(c_73+27*p1.z*
        p2.z+c_76+16*p1.z*p3.z+c_119+c_120)))+3*c_130*(-3*c_12*c_62*c_122+c_8*(c_4+c_9+c_86+c_179)-c_6*(c_2+p3.z*c_123+p1.z*(c_33+c_109))-p2.y*
        p3.y*(c_46+c_124+c_129+5*p1.z*c_126)+p1.y*(-(p2.y*c_62*c_116)+p3.y*(c_127+c_39+c_18+c_128+c_129))))+p2.x*(-6*c_130*
        c_6*c_2+12*c_77*c_22*c_2-5*c_95*c_2-9*c_130*p2.y*p3.y*c_2+15*c_77*c_23*p3.y*c_2+3*c_96*p3.y*c_2+15*c_130*c_12*c_2+9*c_77*
        c_6*c_12*c_2+3*c_22*c_12*c_2-6*c_77*p2.y*c_24*c_2+3*c_23*c_24*c_2-30*c_77*c_25*c_2+3*c_6*c_25*c_2+3*p2.y*c_97*c_2+3*c_98*c_2-18*
        c_130*c_6*p1.z*p2.z+60*c_77*c_22*p1.z*p2.z-35*c_95*p1.z*p2.z-18*c_130*p2.y*p3.y*p1.z*p2.z+60*c_77*c_23*p3.y*p1.z*
        p2.z+18*c_96*p3.y*p1.z*p2.z+15*c_130*c_12*p1.z*p2.z+27*c_77*c_6*c_12*p1.z*p2.z+15*c_22*c_12*p1.z*p2.z-12*c_77*p2.y*
        c_24*p1.z*p2.z+12*c_23*c_24*p1.z*p2.z-30*c_77*c_25*p1.z*p2.z+9*c_6*c_25*p1.z*p2.z+6*p2.y*c_97*p1.z*p2.z+3*c_98*p1.z*
        p2.z+30*c_77*c_22*c_4+9*c_130*p2.y*p3.y*c_4+30*c_77*c_23*p3.y*c_4-21*c_96*p3.y*c_4+15*c_130*c_12*c_4+18*c_77*c_6*c_12*c_4+c_131+6*
        c_77*p2.y*c_24*c_4-10*c_23*c_24*c_4-6*c_6*c_25*c_4-3*p2.y*c_97*c_4-c_98*c_4-24*c_130*c_6*p1.z*p3.z+24*c_77*c_22*p1.z*
        p3.z-45*c_130*p2.y*p3.y*p1.z*p3.z+45*c_77*c_23*p3.y*p1.z*p3.z+c_159+90*c_130*c_12*p1.z*p3.z+36*c_77*c_6*c_12*p1.z*
        p3.z+6*c_22*c_12*p1.z*p3.z-30*c_77*p2.y*c_24*p1.z*p3.z+9*c_23*c_24*p1.z*p3.z-180*c_77*c_25*p1.z*p3.z+12*c_6*c_25*p1.z*
        p3.z+15*p2.y*c_97*p1.z*p3.z+18*c_98*p1.z*p3.z-9*c_130*c_6*p2.z*p3.z+15*c_77*c_22*p2.z*p3.z+35*c_95*p2.z*p3.z+24*c_77*
        c_23*p3.y*p2.z*p3.z+24*c_96*p3.y*p2.z*p3.z+45*c_130*c_12*p2.z*p3.z+18*c_77*c_6*c_12*p2.z*p3.z+15*c_22*c_12*p2.z*
        p3.z+8*c_23*c_24*p2.z*p3.z-15*c_77*c_25*p2.z*p3.z+3*c_6*c_25*p2.z*p3.z-c_98*p2.z*p3.z-15*c_130*c_6*c_5+3*c_77*c_22*c_5+5*
        c_95*c_5-45*c_130*p2.y*p3.y*c_5+6*c_77*c_23*p3.y*c_5+9*c_96*p3.y*c_5+12*c_22*c_12*c_5-30*c_77*p2.y*c_24*c_5+14*c_23*c_24*
        c_5-105*c_77*c_25*c_5+c_132+15*p2.y*c_97*c_5+14*c_98*c_5+c_133*(-14*c_2+c_4+p1.z*(p2.z-18*p3.z)+c_64+c_134)-3*c_135*(-(p3.y*
        c_14*(c_136+p2.z+c_10))+c_214)-3*c_57*(-(c_12*c_14*c_226)+c_77*c_1*c_78-p2.y*p3.y*c_14*c_49+c_6*(c_46+c_63+c_19+c_5+c_153))+c_56*
        (3*c_6*p3.y*c_14*c_60+3*p2.y*c_12*c_14*c_78+3*c_24*c_14*c_216-c_23*(c_99+c_138+c_161+c_139+c_140+c_86)+3*c_77*(-(p3.y*
        (c_103+c_141+c_44+c_142+c_19+c_176))+p2.y*(c_103+c_191+c_74+c_21+c_143+c_86)))-3*p1.y*(-(c_22*p3.y*c_14*c_17)-c_23*c_12*c_14*
        c_91-c_6*c_24*c_14*c_93-p2.y*c_25*c_14*c_116-c_97*c_14*(c_16+p2.z+c_125)+c_96*(c_3+c_138-7*c_4+c_144+c_110+c_5)+c_130*(-(p3.y*
        (c_20+c_39+c_145+c_89+c_149))+p2.y*(c_20+c_74+c_21+c_175+c_114))+c_77*(6*p2.y*c_12*c_1*(p1.z+c_26+c_109)-c_23*
        (c_30+c_138+c_146+c_147+c_148+c_86)+2*c_24*(c_30+c_44+c_9+c_149+c_150)-3*c_6*p3.y*(c_20+c_151+c_64+c_32+c_153)))+3*c_8*(3*c_6*c_12*c_14*c_87+c_23*
        p3.y*c_14*c_102+p2.y*c_24*c_14*c_115+c_25*c_14*c_184+c_130*c_1*c_116-c_22*(c_103+c_39+c_154+c_65+c_9+c_5)+3*c_77*(c_6*
        c_198+p2.y*p3.y*(c_2+c_156+c_157+c_71+c_143+c_32)-c_12*(c_3+c_43+2*(c_4+c_50+c_104)))))+p1.x*(-21*c_135*p2.y*c_2-15*c_57*c_6*c_2-10*
        c_56*c_23*c_2-6*c_8*c_22*c_2-3*p1.y*c_96*c_2-c_95*c_2+21*c_135*p3.y*c_2+15*c_57*c_12*c_2+10*c_56*c_24*c_2+6*c_8*c_25*c_2+3*
        p1.y*c_97*c_2+c_98*c_2+35*c_133*p1.z*p2.z+24*c_135*p2.y*p1.z*p2.z+15*c_57*c_6*p1.z*p2.z+8*c_56*c_23*p1.z*p2.z+3*c_8*
        c_22*p1.z*p2.z-c_95*p1.z*p2.z-18*c_135*p3.y*p1.z*p2.z-15*c_57*p2.y*p3.y*p1.z*p2.z-12*c_56*c_6*p3.y*p1.z*p2.z-9*c_8*
        c_23*p3.y*p1.z*p2.z-6*p1.y*c_22*p3.y*p1.z*p2.z-3*c_96*p3.y*p1.z*p2.z-15*c_57*c_12*p1.z*p2.z-12*c_56*p2.y*c_12*p1.z*
        p2.z-9*c_8*c_6*c_12*p1.z*p2.z-6*p1.y*c_23*c_12*p1.z*p2.z-3*c_22*c_12*p1.z*p2.z-12*c_56*c_24*p1.z*p2.z-9*c_8*p2.y*
        c_24*p1.z*p2.z-6*p1.y*c_6*c_24*p1.z*p2.z-3*c_23*c_24*p1.z*p2.z-9*c_8*c_25*p1.z*p2.z-6*p1.y*p2.y*c_25*p1.z*p2.z-3*c_6*
        c_25*p1.z*p2.z-6*p1.y*c_97*p1.z*p2.z+c_158-3*c_98*p1.z*p2.z+5*c_133*c_4+9*c_135*p2.y*c_4+12*c_57*c_6*c_4+14*c_56*c_23*
        c_4+15*c_8*c_22*c_4+15*p1.y*c_96*c_4+14*c_95*c_4-3*c_135*p3.y*c_4-6*c_57*p2.y*p3.y*c_4-9*c_56*c_6*p3.y*c_4-12*c_8*c_23*p3.y*
        c_4-15*p1.y*c_22*p3.y*c_4-18*c_96*p3.y*c_4-3*c_57*c_12*c_4-6*c_56*p2.y*c_12*c_4-9*c_8*c_6*c_12*c_4-12*p1.y*c_23*c_12*
        c_4+c_131-3*c_56*c_24*c_4-6*c_8*p2.y*c_24*c_4-9*p1.y*c_6*c_24*c_4-12*c_23*c_24*c_4-3*c_8*c_25*c_4-6*p1.y*p2.y*c_25*c_4-9*c_6*c_25*
        c_4-3*p1.y*c_97*c_4-6*p2.y*c_97*c_4-3*c_98*c_4-35*c_133*p1.z*p3.z+18*c_135*p2.y*p1.z*p3.z+15*c_57*c_6*p1.z*p3.z+12*
        c_56*c_23*p1.z*p3.z+9*c_8*c_22*p1.z*p3.z+6*p1.y*c_96*p1.z*p3.z+3*c_95*p1.z*p3.z-24*c_135*p3.y*p1.z*p3.z+15*c_57*p2.y*
        p3.y*p1.z*p3.z+12*c_56*c_6*p3.y*p1.z*p3.z+9*c_8*c_23*p3.y*p1.z*p3.z+6*p1.y*c_22*p3.y*p1.z*p3.z+c_159-15*c_57*c_12*
        p1.z*p3.z+12*c_56*p2.y*c_12*p1.z*p3.z+9*c_8*c_6*c_12*p1.z*p3.z+6*p1.y*c_23*c_12*p1.z*p3.z+3*c_22*c_12*p1.z*p3.z-8*
        c_56*c_24*p1.z*p3.z+9*c_8*p2.y*c_24*p1.z*p3.z+6*p1.y*c_6*c_24*p1.z*p3.z+3*c_23*c_24*p1.z*p3.z-3*c_8*c_25*p1.z*p3.z+6*
        p1.y*p2.y*c_25*p1.z*p3.z+3*c_6*c_25*p1.z*p3.z+3*p2.y*c_97*p1.z*p3.z+c_98*p1.z*p3.z+3*c_135*p2.y*p2.z*p3.z+6*c_57*
        c_6*p2.z*p3.z+9*c_56*c_23*p2.z*p3.z+12*c_8*c_22*p2.z*p3.z+15*p1.y*c_96*p2.z*p3.z+18*c_95*p2.z*p3.z-3*c_135*p3.y*p2.z*
        p3.z+3*c_56*c_6*p3.y*p2.z*p3.z+6*c_8*c_23*p3.y*p2.z*p3.z+9*p1.y*c_22*p3.y*p2.z*p3.z+12*c_96*p3.y*p2.z*p3.z-6*
        c_57*c_12*p2.z*p3.z-3*c_56*p2.y*c_12*p2.z*p3.z+3*p1.y*c_23*c_12*p2.z*p3.z+6*c_22*c_12*p2.z*p3.z-9*c_56*c_24*p2.z*p3.z-6*
        c_8*p2.y*c_24*p2.z*p3.z-3*p1.y*c_6*c_24*p2.z*p3.z-12*c_8*c_25*p2.z*p3.z-9*p1.y*p2.y*c_25*p2.z*p3.z-6*c_6*c_25*
        p2.z*p3.z-15*p1.y*c_97*p2.z*p3.z-12*p2.y*c_97*p2.z*p3.z-18*c_98*p2.z*p3.z-5*c_133*c_5+3*c_135*p2.y*c_5+3*c_57*c_6*c_5+3*
        c_56*c_23*c_5+3*c_8*c_22*c_5+3*p1.y*c_96*c_5+3*c_95*c_5-9*c_135*p3.y*c_5+6*c_57*p2.y*p3.y*c_5+6*c_56*c_6*p3.y*c_5+6*c_8*c_23*
        p3.y*c_5+6*p1.y*c_22*p3.y*c_5+6*c_96*p3.y*c_5-12*c_57*c_12*c_5+9*c_56*p2.y*c_12*c_5+9*c_8*c_6*c_12*c_5+9*p1.y*c_23*c_12*
        c_5+9*c_22*c_12*c_5-14*c_56*c_24*c_5+12*c_8*p2.y*c_24*c_5+12*p1.y*c_6*c_24*c_5+12*c_23*c_24*c_5-15*c_8*c_25*c_5+15*p1.y*p2.y*
        c_25*c_5+c_132-15*p1.y*c_97*c_5+18*p2.y*c_97*c_5-14*c_98*c_5+6*p2.x*p3.x*(p3.y*(-p1.z+p2.z)+p2.y*c_14+p1.y*(c_61+p3.z))*
        (4*c_23*p1.z+6*c_6*p3.y*p1.z+6*p2.y*c_12*p1.z+4*c_24*p1.z+10*c_23*p2.z+12*c_6*p3.y*p2.z+9*p2.y*c_12*p2.z+4*c_24*
        p2.z+4*c_23*p3.z+9*c_6*p3.y*p3.z+12*p2.y*c_12*p3.z+10*c_24*p3.z+2*c_56*c_49+3*c_8*(p2.y*c_60+p3.y*c_78)-c_77*(2*p2.y*
        p1.z+4*p3.y*p1.z+3*p2.y*p2.z+4*p3.y*p2.z+4*p2.y*p3.z+10*p3.y*p3.z+p1.y*c_115)+3*p1.y*(4*p2.y*p3.y*c_87+c_6*c_102+c_12*
        c_115))+6*c_160*p3.x*(3*p1.y*p3.y*c_14*c_87+c_8*c_1*c_102-2*c_6*c_14*c_17+c_12*c_62*c_91+p2.y*p3.y*(c_20+c_70+c_161+c_71+c_86)-p1.y*
        p2.y*c_165)-3*c_166*(-(c_12*c_62*c_17)-p2.y*p3.y*(c_171+c_31+c_66+5*p1.z*c_55)-5*c_6*(c_2+p1.z*c_55+p3.z*
        c_167)+c_8*(c_18+c_168+c_66+c_169)+p1.y*(3*p2.y*c_194+p3.y*(c_174+c_170+c_18+c_9+c_66)))+3*c_130*(-(c_6*c_14*c_116)-5*c_12*
        (c_2+c_183+c_4+c_71+c_110)-p2.y*p3.y*(c_171+c_39+c_80+c_172+c_149)+c_8*(c_80+c_168+c_114+c_173)+p1.y*(3*p3.y*c_185+p2.y*
        (c_174+c_80+c_142+c_9+c_114)))-3*c_77*(-(c_22*c_14*c_91)-c_23*p3.y*(c_103+c_141+c_44+c_71+c_175+c_176)-3*c_6*c_12*(c_20+c_43+c_29+c_65+c_177)-2*
        p2.y*c_24*(c_103+c_178+10*p2.z*p3.z+c_149+5*p1.z*c_36)-5*c_25*(c_80+c_140+c_118+c_179)+c_57*(c_73+c_44+c_168+c_5+5*
        p1.z*c_106)+c_56*(p3.y*(c_73+20*p1.z*p2.z+c_18+c_100+c_89+c_66)+p2.y*(c_83+c_138+c_178-4*p1.z*p3.z+c_192+c_86))+3*c_8*
        (c_12*c_180+c_6*(c_181+c_80+c_182+c_52+c_5)+p2.y*p3.y*(c_79+c_183+c_80+c_230+c_72+c_32))-p1.y*(6*p2.y*c_12*c_14*c_184+2*c_24*
        c_185+3*c_6*p3.y*(c_103+c_124+c_64+c_45+c_195)+c_23*(c_30+c_157+c_51+c_134+c_228)))+3*c_67*(-6*c_77*c_6*c_2-8*c_23*p3.y*
        c_2+6*c_77*c_12*c_2-6*c_6*c_12*c_2-4*p2.y*c_24*c_2-2*c_25*c_2-12*c_77*c_6*p1.z*p2.z+c_186-3*c_77*p2.y*p3.y*p1.z*p2.z-10*c_23*
        p3.y*p1.z*p2.z+c_207-6*c_6*c_12*p1.z*p2.z-3*p2.y*c_24*p1.z*p2.z+c_208-35*c_22*c_4-12*c_77*p2.y*p3.y*c_4+60*c_23*p3.y*
        c_4-9*c_77*c_12*c_4+30*c_6*c_12*c_4+12*p2.y*c_24*c_4+c_187-3*c_77*c_6*p1.z*p3.z-10*c_22*p1.z*p3.z+3*c_77*p2.y*p3.y*p1.z*
        p3.z-10*c_23*p3.y*p1.z*p3.z+12*c_77*c_12*p1.z*p3.z+c_58-7*p2.y*c_24*p1.z*p3.z-4*c_25*p1.z*p3.z+12*c_77*c_6*p2.z*
        p3.z-60*c_22*p2.z*p3.z-20*c_23*p3.y*p2.z*p3.z-12*c_77*c_12*p2.z*p3.z+c_188+4*c_25*p2.z*p3.z+9*c_77*c_6*c_5-10*c_22*c_5+12*
        c_77*p2.y*p3.y*c_5-12*c_23*p3.y*c_5+c_189-4*p2.y*c_24*c_5+c_57*(c_73+c_4+c_168+c_32+5*p1.z*c_152)+3*c_8*(2*c_77*c_1*
        c_87+c_6*c_190+c_12*(c_181+c_200+c_4+c_52+c_66)+p2.y*p3.y*(c_79+c_205+c_44+c_144+c_72+c_66))+c_56*(p2.y*(c_73+c_138+c_80+20*p1.z*
        p3.z+c_89+c_114)+p3.y*(c_83+c_191+c_29+c_100+c_192+c_28))-p1.y*(6*c_6*p3.y*c_62*c_193+2*c_23*c_194+3*p2.y*c_12*
        (c_103+c_157+c_64+c_7+c_195)+c_24*(c_30+c_196+c_51+c_45+c_202)+3*c_77*(-(p3.y*c_197)+p2.y*c_198))))-3*p10_2*(-3*c_67*p3.x*(2*c_12*c_62*
        c_87-p1.y*p2.y*c_62*c_199+c_8*c_1*c_60-c_6*c_14*c_102+p1.y*p3.y*(c_103+c_183+c_124+c_143+c_69)+p2.y*p3.y*
        (c_2+c_200+c_157+c_65+c_66))+c_160*(-(c_12*c_62*c_102)-p2.y*p3.y*(c_201+c_75+c_146+c_21+c_66)+3*c_8*c_213-2*c_6*(c_3+2*p3.z*c_203+p1.z*
        (c_13+c_92))+p1.y*(p2.y*(c_174+c_204+c_71+c_72+c_5)+p3.y*(c_235+c_205+c_145+c_9+c_66)))+p2.x*(6*c_77*c_6*c_2+c_22*c_2+c_206+c_217-9*
        c_77*c_12*c_2+c_218+c_219+3*c_25*c_2+6*c_77*c_6*p1.z*p2.z+5*c_22*p1.z*p2.z+6*c_77*p2.y*p3.y*p1.z*p2.z-4*c_23*p3.y*
        p1.z*p2.z+c_207-3*c_6*c_12*p1.z*p2.z-2*p2.y*c_24*p1.z*p2.z+c_208+10*c_22*c_4+6*c_77*p2.y*p3.y*c_4-20*c_23*p3.y*c_4+6*
        c_77*c_12*c_4-12*c_6*c_12*c_4-6*p2.y*c_24*c_4+c_209+8*c_22*p1.z*p3.z-3*c_77*p2.y*p3.y*p1.z*p3.z+7*c_23*p3.y*p1.z*p3.z-12*
        c_77*c_12*p1.z*p3.z+6*c_6*c_12*p1.z*p3.z+5*p2.y*c_24*p1.z*p3.z+4*c_25*p1.z*p3.z-6*c_77*c_6*p2.z*p3.z+20*c_22*p2.z*
        p3.z+8*c_23*p3.y*p2.z*p3.z+12*c_77*c_12*p2.z*p3.z-4*p2.y*c_24*p2.z*p3.z-4*c_25*p2.z*p3.z-6*c_77*c_6*c_5+4*c_22*c_5-12*
        c_77*p2.y*p3.y*c_5+6*c_23*p3.y*c_5+6*c_6*c_12*c_5+4*p2.y*c_24*c_5-5*c_57*(c_224+c_210+p1.z*(p2.z+12*p3.z))+3*c_8*(2*
        p2.y*p3.y*c_62*c_211-c_77*c_1*c_78+c_12*c_212+c_6*c_213)-2*c_56*(c_214+p3.y*(c_215+c_44+c_9+c_28+c_150))+p1.y*(c_24*
        (c_231+c_205+c_157+c_88+c_232+c_45)+3*p2.y*c_12*(c_103+c_156+c_157+c_71+c_143+c_5)+3*c_6*p3.y*(c_103+c_205+c_151+c_35+c_50+c_66)+c_23*
        (c_20+c_138+c_204+c_172+c_234+c_114)+3*c_77*(-(p3.y*c_14*c_216)+p2.y*(c_103+c_63+c_144+c_143+c_7))))-p3.x*(3*c_22*
        c_2+c_217+c_218+c_219+c_25*c_2+4*c_22*p1.z*p2.z+5*c_23*p3.y*p1.z*p2.z+6*c_6*c_12*p1.z*p2.z+7*p2.y*c_24*p1.z*p2.z+8*c_25*p1.z*
        p2.z+4*c_23*p3.y*c_4+6*c_6*c_12*c_4+c_220+4*c_25*c_4-c_22*p1.z*p3.z-2*c_23*p3.y*p1.z*p3.z-3*c_6*c_12*p1.z*p3.z-4*p2.y*c_24*
        p1.z*p3.z+c_221-4*c_22*p2.z*p3.z-4*c_23*p3.y*p2.z*p3.z+8*p2.y*c_24*p2.z*p3.z+20*c_25*p2.z*p3.z-2*c_22*c_5+c_222+c_223-20*
        p2.y*c_24*c_5+10*c_25*c_5-5*c_57*(c_224+2*p2.z*c_36+p1.z*(12*p2.z+p3.z))+2*c_56*(-(p3.y*c_105)+p2.y*(c_225+c_74+c_51+c_45-5*
        p1.z*c_34))+3*c_8*(2*p2.y*p3.y*c_14*c_226+c_6*(c_73+c_196+c_227+c_64+c_69)+(c_77+c_12)*(c_4+c_19+c_66+c_228))-c_77*
        (c_6*c_14*c_115+p2.y*p3.y*(c_201+c_39+c_80+c_35+c_40)+2*c_12*(c_3+2*p2.z*c_229+p1.z*(c_37+c_109)))+p1.y*(3*p2.y*c_12*
        (c_103+c_75+c_80+c_230+c_50+c_42)+c_23*(c_231+c_53+c_157+c_230+c_232+c_45)+3*c_6*p3.y*(c_103+c_43+c_4+c_227+c_143+c_45)+c_24*
        (c_20+c_233+c_18+c_100+c_234+c_120)+c_77*(p2.y*(c_235+c_80+c_230+c_9+c_236)+p3.y*(c_174+c_43+c_4+c_72+c_120))))))/double(17418240);
}

double trig::s66() const{
    double p11_2=p1.y*p1.y;
    double p11_3=p1.y*p11_2;
    double p11_4=p1.y*p11_3;
    double p11_5=p1.y*p11_4;
    double p11_6=p1.y*p11_5;
    double p31_2=p3.y*p3.y;
    double p31_3=p3.y*p31_2;
    double p31_4=p3.y*p31_3;
    double p31_5=p3.y*p31_4;
    double p31_6=p3.y*p31_5;
    double p21_2=p2.y*p2.y;
    double p21_3=p2.y*p21_2;
    double p21_4=p2.y*p21_3;
    double p21_5=p2.y*p21_4;
    double p21_6=p2.y*p21_5;
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
    double c_0=5*p3.z;
    double c_1=p11_2;
    double c_2=-p3.z;
    double c_3=p2.z+c_2;
    double c_4=p31_2;
    double c_5=3*p2.z;
    double c_6=p21_2;
    double c_7=5*p1.z;
    double c_8=35*p1.z;
    double c_9=p11_3;
    double c_10=p21_3;
    double c_11=p21_4;
    double c_12=p31_3;
    double c_13=p31_4;
    double c_14=-p2.z;
    double c_15=2*p1.z;
    double c_16=2*p2.z;
    double c_17=-p1.z;
    double c_18=-(2*p3.z);
    double c_19=p1.z+p2.z+p3.z;
    double c_20=-5*p1.z;
    double c_21=4*p1.z;
    double c_22=3*p3.z;
    double c_23=6*p1.z;
    double c_24=p1.z+p2.z+c_18;
    double c_25=p1.z+c_2;
    double c_26=c_6*c_25;
    double c_27=c_17+p2.z;
    double c_28=c_4*c_27;
    double c_29=3*p1.z;
    double c_30=2*p3.z;
    double c_31=7*p1.z;
    double c_32=5*p2.z;
    double c_33=c_17+p3.z;
    double c_34=35*p2.z;
    double c_35=18*p3.z;
    double c_36=p30_2;
    double c_37=-(4*p3.z);
    double c_38=7*p2.z;
    double c_39=c_23+c_38+c_0;
    double c_40=4*p2.z;
    double c_41=-(2*p2.z);
    double c_42=p1.z+c_41+p3.z;
    double c_43=-(3*p3.z);
    double c_44=c_15+p2.z+c_43;
    double c_45=-(4*p2.z);
    double c_46=p1.z+c_45+c_22;
    double c_47=p20_2;
    double c_48=p21_5;
    double c_49=p31_5;
    double c_50=p31_6;
    double c_51=p21_6;
    double c_52=c_7+p2.z+c_22;
    double c_53=c_29+p2.z+c_30;
    double c_54=p11_4;
    double c_55=c_21+c_16+c_22;
    double c_56=c_15+c_5+p3.z;
    double c_57=c_21+c_32+c_22;
    double c_58=c_21+c_5+c_0;
    double c_59=p30_4;
    double c_60=c_14+p3.z;
    double c_61=6*p3.z;
    double c_62=c_31+c_32+c_61;
    double c_63=p1.z+c_16+c_43;
    double c_64=-(3*p2.z);
    double c_65=-(5*p3.z);
    double c_66=p1.z+c_64+c_30;
    double c_67=p2.y*c_66;
    double c_68=p1.z+c_5+c_37;
    double c_69=-(5*p2.z);
    double c_70=c_36*c_3;
    double c_71=c_4*c_33;
    double c_72=c_21+c_38+p3.z;
    double c_73=p3.y*c_33;
    double c_74=4*p3.z;
    double c_75=p3.y*c_63;
    double c_76=c_50*p2.z;
    double c_77=p11_6;
    double c_78=c_15+c_64+p3.z;
    double c_79=p11_5;
    double c_80=p3.y*c_24;
    double c_81=c_29+p2.z+c_37;
    double c_82=c_12*c_81;
    double c_83=-(6*p3.z);
    double c_84=-(6*p2.z);
    double c_85=c_29+c_69+c_30;
    double c_86=p1.z+c_32+c_83;
    double c_87=c_1*c_3;
    double c_88=c_15+p2.z+c_22;
    double c_89=7*p3.z;
    double c_90=c_23+c_32+c_89;
    double c_91=c_54*c_3;
    double c_92=c_29+c_45+p3.z;
    double c_93=c_10*c_92;
    double c_94=p1.z+c_84+c_0;
    double c_95=-(c_51*p3.z);
    double c_96=c_7+c_5+p3.z;
    double c_97=p1.z+c_14;
    double c_98=c_29+c_16+p3.z;
    double c_99=c_21+c_5+c_30;
    double c_100=6*p2.z;
    double c_101=c_31+c_100+c_0;
    double c_102=18*p1.z;
    double c_103=18*p2.z;
    double c_104=35*p3.z;
    double c_105=c_54*c_19;
    double c_106=c_21+p2.z+c_89;
    double c_107=-(3*c_6*c_13*p2.z);
    double c_108=3*c_11*c_4*p3.z;
    double c_109=p20_3;
    double c_110=p3.y*c_97;
    double c_111=p1.y*c_3;
    double c_112=p2.y*c_33;
    double c_113=c_110+c_111+c_112;
    double c_114=p2.y+p3.y;
    double c_115=3*p1.y;
    double c_116=p20_4;
    double c_117=c_21+c_69+p3.z;
    double c_118=-(5*c_6*c_19);
    double c_119=-3*p1.z;
    double c_120=c_21+p2.z+c_65;
    double c_121=c_15+c_5+c_65;
    double c_122=p1.z+c_16+c_22;
    double c_123=c_29+c_40+c_0;
    double c_124=-(c_13*p1.z);
    double c_125=-2*p1.z;
    double c_126=c_125+p2.z+p3.z;
    double c_127=-4*p1.z;
    double c_128=c_29+c_32+c_74;
    double c_129=2*p3.y;
    double c_130=c_7+c_38+c_61;
    double c_131=c_127+p2.z+c_22;
    double c_132=c_7+c_100+c_89;
    double c_133=-(9*p3.z);
    double c_134=c_7+p2.z+c_83;
    double c_135=c_7+c_40+c_22;
    double c_136=c_13*p2.z;
    double c_137=2*p2.y;
    double c_138=p3.y*c_27;
    double c_139=p2.y*c_25;
    double c_140=c_138+c_139;
    double c_141=-(p2.y*c_12*p3.z);
    double c_142=c_7+c_84+p3.z;
    double c_143=c_7+c_5+c_74;
    double c_144=c_21+c_64+c_2;
    double c_145=-(9*p2.z);
    double c_146=p3.y*c_131;
    double c_147=3*p2.y;
    double c_148=2*p1.y;
    double c_149=4*p3.y;
    double c_150=p20_5;
    double c_151=p1.z+c_5+c_30;
    double c_152=-5*c_11*p1.z;
    double c_153=4*p2.y;
    double c_154=3*p3.y;
    double c_155=c_119+p2.z+c_30;
    double c_156=c_4*c_126;
    double c_157=c_119+c_16+p3.z;
    double c_158=-6*p1.z;
    double c_159=c_158+c_32+p3.z;
    double c_160=-3*c_51*p1.z;
    double c_161=-(c_50*p1.z);
    double c_162=-(3*c_48*p3.y*p2.z);
    double c_163=-(15*p2.y*c_49*p2.z);
    double c_164=3*c_51*p3.z;
    double c_165=15*c_6*c_13*p3.z;
    double c_166=c_8+c_103+p3.z;
    double c_167=c_7+c_64+c_18;
    double c_168=c_15+p2.z;
    double c_169=c_15+c_14+c_2;
    double c_170=c_127+c_5+p3.z;
    double c_171=c_29+c_14+c_18;
    double c_172=3*c_6*c_4*c_25;
    double c_173=c_29+c_41+c_2;
    double c_174=c_17+c_16+c_0;
    double c_175=p2.y*p3.y*c_134;
    double c_176=c_6*c_33;
    double c_177=p2.z+c_30;
    double c_178=c_29+c_16+c_65;
    double c_179=c_11*c_33;
    double c_180=p1.z+c_40+c_89;
    double c_181=-9*p1.z;
    double c_182=c_51*p1.z;
    double c_183=3*c_50*p1.z;
    double c_184=-(15*c_11*c_4*p2.z);
    double c_185=-(3*c_50*p2.z);
    double c_186=4*c_10;
    double c_187=15*c_48*p3.y*p3.z;
    double c_188=3*p2.y*c_49*p3.z;
    double c_189=c_8+p2.z+c_35;
    double c_190=c_20+c_16+c_22;
    double c_191=c_15+p3.z;
    double c_192=c_158+p2.z+c_0;
    double c_193=3*c_6*c_4*c_97;
    double c_194=c_17+c_32+c_30;
    double c_195=c_16+p3.z;
    double c_196=c_23+c_14+c_65;
    double c_197=c_21+c_14+c_43;
    return (3*c_150*p3.x*(4*p2.y*p3.y*(p1.z+c_16)+p1.y*p3.y*c_24+c_87+c_4*c_56-p1.y*p2.y*c_94-c_6*c_39)+p10_6*(-14*c_1*c_3+3*
        p2.y*p3.y*c_60-c_4*c_96-p1.y*p3.y*c_166+c_6*c_52+p1.y*p2.y*c_189)-3*p10_4*(35*c_9*p2.y*p1.z+15*c_1*c_6*p1.z+5*p1.y*
        c_10*p1.z+c_11*p1.z-35*c_9*p3.y*p1.z-15*c_1*c_4*p1.z-5*p1.y*c_12*p1.z+c_124+5*c_9*p2.y*p2.z+5*c_1*c_6*p2.z+3*p1.y*
        c_10*p2.z+c_11*p2.z-20*c_9*p3.y*p2.z-10*c_1*p2.y*p3.y*p2.z-4*p1.y*c_6*p3.y*p2.z-c_10*p3.y*p2.z-10*c_1*c_4*p2.z-4*
        p1.y*p2.y*c_4*p2.z-c_6*c_4*p2.z-4*p1.y*c_12*p2.z-p2.y*c_12*p2.z-c_13*p2.z+20*c_9*p2.y*p3.z+10*c_1*c_6*p3.z+4*p1.y*
        c_10*p3.z+c_11*p3.z-5*c_9*p3.y*p3.z+10*c_1*p2.y*p3.y*p3.z+4*p1.y*c_6*p3.y*p3.z+c_10*p3.y*p3.z-5*c_1*c_4*p3.z+4*p1.y*
        p2.y*c_4*p3.z+c_6*c_4*p3.z-3*p1.y*c_12*p3.z+p2.y*c_12*p3.z-c_13*p3.z-p2.x*p3.x*(5*p1.y+2*c_114)*c_113+c_36*(p1.y*
        p2.y*(c_7+c_14+c_37)+p2.y*p3.y*c_44+c_26+p1.y*p3.y*(c_7+c_16+c_2)-5*c_1*c_19+c_4*c_99)+c_47*(c_28+p1.y*p2.y*
        (c_20+p2.z+c_18)-p2.y*p3.y*c_78+5*c_1*c_19+p1.y*p3.y*(c_20+c_40+p3.z)-c_6*c_55))-3*p10_5*(p3.x*(4*p1.y*p3.y*c_168+p1.y*p2.y*
        c_196+p2.y*p3.y*c_24+c_26+c_4*c_98-c_1*c_101)+p2.x*(c_28-4*p1.y*p2.y*c_191-p2.y*p3.y*c_42+p1.y*p3.y*c_159-c_6*c_53+c_1*
        c_62))+p20_6*(14*c_6*c_25+c_4*(c_29+c_32+p3.z)+p2.y*p3.y*(c_102+c_34+p3.z)-c_1*(p1.z+c_32+c_22)-p1.y*(3*p3.y*c_33+p2.y*
        (p1.z+c_34+c_35)))+c_109*p3.x*(c_36*(3*p1.y*p3.y*c_68+3*c_1*c_3+8*p2.y*p3.y*c_3-3*p1.y*p2.y*c_46+2*c_4*c_39-2*c_6*c_90)-3*
        (c_91+8*p2.y*c_12*c_19-5*c_11*c_72+2*c_6*c_4*c_57+c_13*c_58+p1.y*(p2.y*c_4*(c_7+c_40+c_133)+2*c_6*p3.y*c_86+c_82-10*c_10*
        c_42)+c_1*(c_4*c_44+2*p2.y*p3.y*c_63-2*c_6*(c_15+c_69+c_22))+c_9*(c_80-p2.y*c_46)))+c_47*(-14*c_51*p1.z+18*c_48*p3.y*
        p1.z+15*c_11*c_4*p1.z+12*c_10*c_12*p1.z+9*c_6*c_13*p1.z+6*p2.y*c_49*p1.z+c_183+21*c_48*p3.y*p2.z+15*c_11*c_4*p2.z+10*c_10*
        c_12*p2.z+6*c_6*c_13*p2.z+3*p2.y*c_49*p2.z+c_76+14*c_51*p3.z+c_187+15*c_11*c_4*p3.z+14*c_10*c_12*p3.z+12*c_6*c_13*p3.z+9*
        p2.y*c_49*p3.z+5*c_50*p3.z-c_77*c_52-3*c_79*(c_73+p2.y*c_53)-3*c_54*(c_70+2*p2.y*p3.y*c_33+c_71+c_6*c_55)-3*c_59*(-5*
        c_4*c_19+c_6*(c_29+c_16+c_74)+p2.y*p3.y*(c_15+c_14+c_0))+3*c_36*(5*c_11*c_56-5*c_13*c_88+2*c_10*p3.y*c_57-2*p2.y*c_12*c_58)+3*
        c_1*(4*c_10*p3.y*c_25+c_172+2*p2.y*c_12*c_25+c_13*c_25+c_59*c_3-5*c_11*c_19+3*c_36*(-(c_4*c_24)+c_6*c_42+2*p2.y*p3.y*
        c_60))+c_9*(9*c_6*p3.y*c_25+6*p2.y*c_4*c_25+3*c_12*c_25-2*c_10*c_62+3*c_36*(-c_75+c_67))-3*p1.y*(5*c_11*p3.y*c_33+4*c_10*c_4*
        c_33+3*c_6*c_12*c_33+2*p2.y*c_13*c_33+c_49*c_33+c_48*c_130+c_59*(-(p3.y*(p1.z+c_40+c_65))+c_67)+c_36*(2*c_12*c_178+3*p2.y*
        c_4*c_68-2*c_10*c_85-3*c_6*p3.y*c_46)))+3*c_116*(c_105+c_1*(c_70+4*p2.y*p3.y*c_33+c_71+5*c_6*c_151)+c_36*(p2.y*p3.y*
        (c_15+c_32+c_2)+c_118+c_4*(c_29+c_40+c_30))-p3.y*(c_12*c_19+5*c_6*p3.y*c_56+5*c_10*c_72+p2.y*c_4*c_57)+c_9*(c_73+p2.y*c_128)+p1.y*
        (-10*c_6*p3.y*c_25+4*p2.y*c_4*c_33+c_12*c_33+5*c_10*(p1.z+c_38+c_74)+c_36*(c_75-p2.y*(p1.z+c_69+c_74))))+p2.x*p3.x*(-18*
        c_51*p1.z-12*c_48*p3.y*p1.z-6*c_11*c_4*p1.z+6*c_6*c_13*p1.z+12*p2.y*c_49*p1.z+18*c_50*p1.z-35*c_51*p2.z-24*c_48*p3.y*
        p2.z+c_184-8*c_10*c_12*p2.z+c_107+c_76+3*c_77*c_3+c_95+c_108+8*c_10*c_12*p3.z+c_165+24*p2.y*c_49*p3.z+35*c_50*p3.z+c_54*
        (3*c_4*c_44+6*p2.y*p3.y*c_3-3*c_6*c_78)-3*c_79*(-c_80+p2.y*c_42)-3*c_1*(-(c_13*c_120)-2*p2.y*c_12*c_24+c_11*c_117+2*c_10*
        p3.y*c_42+3*c_6*c_4*c_60)-3*c_9*(-c_82-p2.y*c_4*c_63+c_93+c_6*p3.y*c_66)-3*p1.y*(-(c_49*c_134)-c_6*c_12*c_68+c_48*c_142+c_11*
        p3.y*c_85+c_10*c_4*c_46+p2.y*c_13*(c_119+c_41+c_0))+3*c_59*(p1.y*p3.y*c_86+c_87-p1.y*p2.y*c_42-4*p2.y*p3.y*(p1.z+c_30)-c_6*
        c_88+c_4*c_90)-3*c_36*(c_91-8*c_10*p3.y*c_19-c_11*c_57-2*c_6*c_4*c_58+5*c_13*c_106+c_9*(p3.y*c_68-p2.y*c_42)-c_1*(-2*
        c_4*c_121+c_6*c_78+2*p2.y*p3.y*c_66)-p1.y*(-10*c_12*c_24+c_93+c_6*p3.y*(c_7+c_145+c_74)+2*p2.y*c_4*c_94)))+c_36*(c_160-6*
        c_48*p3.y*p1.z-9*c_11*c_4*p1.z-12*c_10*c_12*p1.z-15*c_6*c_13*p1.z-18*p2.y*c_49*p1.z+14*c_50*p1.z-5*c_51*p2.z-9*c_48*
        p3.y*p2.z-12*c_11*c_4*p2.z-14*c_10*c_12*p2.z-15*c_6*c_13*p2.z+c_163-14*c_50*p2.z+c_95-3*c_48*p3.y*p3.z-6*c_11*c_4*p3.z-10*
        c_10*c_12*p3.z-15*c_6*c_13*p3.z-21*p2.y*c_49*p3.z+c_77*c_96-3*c_1*(c_11*c_97+2*c_10*p3.y*c_97+c_193+4*p2.y*c_12*c_97-5*
        c_13*c_19)+c_79*(-3*p2.y*c_97+3*p3.y*c_98)+c_54*(-3*c_6*c_97+6*p2.y*p3.y*c_27+3*c_4*c_99)+c_9*(-3*c_10*c_97+6*c_6*p3.y*
        c_27+9*p2.y*c_4*c_27+2*c_12*c_101)-3*p1.y*(c_48*c_97+2*c_11*p3.y*c_97+3*c_10*c_4*c_97+4*c_6*c_12*c_97+5*p2.y*c_13*c_97-c_49*
        c_132)+c_59*(-3*p1.y*p2.y*c_97+14*c_4*c_27-c_6*(c_29+p2.z+c_0)+c_1*(p1.z+c_5+c_0)-p2.y*p3.y*(c_102+p2.z+c_104)+p1.y*
        p3.y*(p1.z+c_103+c_104))-3*c_36*(c_105+c_1*(c_6*c_27+4*p2.y*p3.y*c_27+5*c_4*c_122)+c_9*(p2.y*c_27+p3.y*c_123)-p2.y*(c_10*
        c_19+5*p2.y*c_4*c_88+c_6*p3.y*c_58+5*c_12*c_106)+p1.y*(-10*p2.y*c_4*c_97+c_10*c_27+4*c_6*p3.y*c_27+5*c_12*c_180)))+p10_2*
        (21*c_79*p2.y*p1.z+15*c_54*c_6*p1.z+10*c_9*c_10*p1.z+6*c_1*c_11*p1.z+3*p1.y*c_48*p1.z+c_182-21*c_79*p3.y*p1.z-15*c_54*
        c_4*p1.z-10*c_9*c_12*p1.z-6*c_1*c_13*p1.z-3*p1.y*c_49*p1.z+c_161+14*c_77*p2.z+15*c_79*p2.y*p2.z+15*c_54*c_6*p2.z+14*c_9*
        c_10*p2.z+12*c_1*c_11*p2.z+9*p1.y*c_48*p2.z+5*c_51*p2.z-18*c_79*p3.y*p2.z-15*c_54*p2.y*p3.y*p2.z-12*c_9*c_6*p3.y*
        p2.z-9*c_1*c_10*p3.y*p2.z-6*p1.y*c_11*p3.y*p2.z+c_162-15*c_54*c_4*p2.z-12*c_9*p2.y*c_4*p2.z-9*c_1*c_6*c_4*p2.z-6*p1.y*
        c_10*c_4*p2.z-3*c_11*c_4*p2.z-12*c_9*c_12*p2.z-9*c_1*p2.y*c_12*p2.z-6*p1.y*c_6*c_12*p2.z-3*c_10*c_12*p2.z-9*c_1*c_13*
        p2.z-6*p1.y*p2.y*c_13*p2.z+c_107-6*p1.y*c_49*p2.z-3*p2.y*c_49*p2.z+c_185-14*c_77*p3.z+18*c_79*p2.y*p3.z+15*c_54*c_6*
        p3.z+12*c_9*c_10*p3.z+9*c_1*c_11*p3.z+6*p1.y*c_48*p3.z+c_164-15*c_79*p3.y*p3.z+15*c_54*p2.y*p3.y*p3.z+12*c_9*c_6*p3.y*
        p3.z+9*c_1*c_10*p3.y*p3.z+6*p1.y*c_11*p3.y*p3.z+3*c_48*p3.y*p3.z-15*c_54*c_4*p3.z+12*c_9*p2.y*c_4*p3.z+9*c_1*c_6*
        c_4*p3.z+6*p1.y*c_10*c_4*p3.z+c_108-14*c_9*c_12*p3.z+9*c_1*p2.y*c_12*p3.z+6*p1.y*c_6*c_12*p3.z+3*c_10*c_12*p3.z-12*c_1*
        c_13*p3.z+6*p1.y*p2.y*c_13*p3.z+3*c_6*c_13*p3.z-9*p1.y*c_49*p3.z+c_188-5*c_50*p3.z+3*c_109*p3.x*(c_115+c_153+c_129)*
        c_113-3*p2.x*p3.x*(10*c_9+c_186+6*c_6*p3.y+6*p2.y*c_4+4*c_12+12*c_1*c_114-c_36*(c_115+c_137+c_149)+3*p1.y*(3*c_6+4*p2.y*
        p3.y+3*c_4))*c_113-3*c_116*(c_28-p2.y*p3.y*c_117+c_118+p1.y*p3.y*c_157+p1.y*p2.y*c_194+c_1*(c_15+c_40+c_22))+3*c_59*(-(p2.y*
        p3.y*c_120)+c_176-5*c_4*c_19+p1.y*p2.y*c_155+c_1*(c_15+c_5+c_74)+p1.y*p3.y*c_174)-3*c_36*(-2*p2.y*c_12*c_121-c_10*p3.y*
        c_44-3*c_6*c_4*c_24+c_179+5*c_54*c_98-5*c_13*c_122+3*c_1*p2.y*(p2.y*c_126+c_146)+2*c_9*(p2.y*(c_20+c_5+c_30)+p3.y*
        c_135)-p1.y*(3*p2.y*c_4*c_81+c_10*c_171+6*c_6*p3.y*c_25+2*c_12*c_123))+3*c_47*(c_152-4*c_10*p3.y*p1.z-3*c_6*c_4*p1.z-2*p2.y*
        c_12*p1.z+c_124-15*c_11*p2.z+10*c_10*p3.y*p2.z+6*c_6*c_4*p2.z+3*p2.y*c_12*p2.z+c_136-3*c_36*c_114*c_140-10*c_11*p3.z-6*
        c_10*p3.y*p3.z-3*c_6*c_4*p3.z+c_141+5*c_54*c_53+3*c_1*(c_70+c_156+p2.y*p3.y*c_170)+2*c_9*(p3.y*c_190+p2.y*c_143)-p1.y*(6*
        p2.y*c_4*c_97+c_12*c_173+3*c_6*p3.y*c_92+2*c_10*c_128+3*c_36*(p2.y*c_97+c_73))))+p10_3*(3*c_47*p3.x*(4*p1.y+c_147+c_129)*
        c_113+c_109*(8*p1.y*p2.y*c_97+3*c_4*c_97+3*p1.y*p3.y*c_144+3*p2.y*p3.y*c_92+2*c_6*c_62-2*c_1*c_130)+p30_3*(-3*p2.y*p3.y*
        c_81-3*c_6*c_25+8*p1.y*p3.y*c_33+3*p1.y*p2.y*c_131-2*c_4*c_101+2*c_1*c_132)+3*p3.x*(p2.y*c_12*c_68+c_6*c_4*c_63+c_10*
        p3.y*c_24+c_11*c_25+10*c_9*p2.y*c_169-5*c_54*(c_31+c_40+p3.z)+c_13*c_123+p1.y*(p2.y*c_4*(c_21+c_32+c_133)+c_10*c_197+2*c_6*
        p3.y*c_44+8*c_12*c_19)+2*c_1*(c_175+c_6*(c_7+c_41+c_43)+c_4*c_135))+3*p2.x*(-3*c_11*p1.z-c_10*p3.y*p1.z-c_6*c_4*p1.z-p2.y*
        c_12*p1.z+c_124-5*c_11*p2.z+4*c_10*p3.y*p2.z+3*c_6*c_4*p2.z+2*p2.y*c_12*p2.z+c_136-c_36*(c_137+c_154)*c_140-4*c_11*
        p3.z-3*c_10*p3.y*p3.z-2*c_6*c_4*p3.z+c_141+10*c_9*p3.y*c_126+5*c_54*(c_31+p2.z+c_74)-2*c_1*(c_4*c_167+p2.y*p3.y*c_142+2*
        c_36*c_60+c_6*c_143)-p1.y*(c_12*c_144+2*p2.y*c_4*c_78+8*c_10*c_19+c_6*p3.y*(c_21+c_145+c_0)+c_36*(4*p2.y*p1.z-2*p2.y*
        (p2.z+p3.z)+c_146))))+p1.x*(3*c_116*p3.x*(c_148+5*p2.y+c_129)*c_113+3*c_47*p3.x*(-4*c_9-10*c_10-12*c_6*p3.y-9*p2.y*c_4-4*
        c_12-3*c_1*(c_147+c_129)+c_36*(c_148+c_147+c_149)-6*p1.y*(2*c_6+2*p2.y*p3.y+c_4))*c_113-3*c_150*(c_28-p2.y*p3.y*c_142+p1.y*
        p3.y*c_126+4*p1.y*p2.y*c_195+c_1*c_151-c_6*c_130)+3*c_109*(c_152-10*c_10*p3.y*p1.z-6*c_6*c_4*p1.z-3*p2.y*c_12*p1.z+c_124-35*
        c_11*p2.z+20*c_10*p3.y*p2.z+10*c_6*c_4*p2.z+4*p2.y*c_12*p2.z+c_136-c_36*(c_153+c_154)*c_140-20*c_11*p3.z-10*c_10*
        p3.y*p3.z-4*c_6*c_4*p3.z+c_141+c_54*c_143+c_9*(8*p2.y*c_19+c_146)+c_1*(2*c_36*c_3+c_4*c_155+2*c_6*c_128+p2.y*p3.y*
        (c_181+c_40+c_0))+p1.y*(c_36*(p3.y*c_44-2*p2.y*c_42)+p3.y*(c_156+2*p2.y*p3.y*c_157+2*c_6*c_159)))+p3.x*(c_160-3*c_48*p3.y*p1.z-3*
        c_11*c_4*p1.z-3*c_10*c_12*p1.z-3*c_6*c_13*p1.z-3*p2.y*c_49*p1.z+c_161+c_162-6*c_11*c_4*p2.z-9*c_10*c_12*p2.z-12*c_6*
        c_13*p2.z+c_163-18*c_50*p2.z+c_164+6*c_48*p3.y*p3.z+9*c_11*c_4*p3.z+12*c_10*c_12*p3.z+c_165+18*p2.y*c_49*p3.z-35*c_50*
        p3.z+c_77*c_166-3*c_54*(p2.y*p3.y*c_167+c_6*(c_7+c_45+c_2)+c_4*(c_20+c_41+p3.z))+3*c_79*(4*p3.y*c_168+p2.y*c_159)-3*p1.y*
        (p2.y*c_13*c_121+c_10*c_4*c_44+2*c_6*c_12*c_24+2*c_11*p3.y*c_25+c_48*c_169+4*c_49*c_177)+c_9*(8*c_12*c_25+6*c_6*p3.y*c_126+3*
        c_10*c_170+3*p2.y*c_4*c_131)-3*c_1*(p2.y*c_12*c_81+c_10*p3.y*c_171+c_172+c_11*c_173+c_13*c_174)+3*c_59*(-c_175+c_176+p1.y*
        p2.y*c_126+4*p1.y*p3.y*c_177+c_1*c_122-c_4*c_132)-3*c_36*(-2*c_6*c_4*c_178-c_10*p3.y*c_81-10*p2.y*c_12*c_24+c_179+c_54*
        c_135-5*c_13*c_180+c_9*(8*p3.y*c_19+p2.y*c_170)+p1.y*p2.y*(c_6*c_126+2*p2.y*p3.y*c_155+2*c_4*c_192)+c_1*(c_6*c_157+p2.y*
        p3.y*(c_181+c_32+c_74)+2*c_4*c_123)))+p2.x*(c_182+3*c_48*p3.y*p1.z+3*c_11*c_4*p1.z+3*c_10*c_12*p1.z+3*c_6*c_13*p1.z+3*
        p2.y*c_49*p1.z+c_183+35*c_51*p2.z-18*c_48*p3.y*p2.z+c_184-12*c_10*c_12*p2.z-9*c_6*c_13*p2.z-6*p2.y*c_49*p2.z+c_185-3*c_59*
        (c_137+5*p3.y)*c_140+3*c_36*(c_186+9*c_6*p3.y+12*p2.y*c_4+10*c_12)*c_140+18*c_51*p3.z+c_187+12*c_11*c_4*p3.z+9*c_10*c_12*
        p3.z+6*c_6*c_13*p3.z+c_188-c_77*c_189-3*c_54*(4*c_36*c_3+c_6*(c_7+c_14+c_30)+p2.y*p3.y*c_190+c_4*(c_20+p2.z+c_74))-3*c_79*
        (4*p2.y*c_191+p3.y*c_192)+3*c_1*(c_193+c_13*c_171+p2.y*c_12*c_173+2*c_59*c_3+c_10*p3.y*c_92+c_11*c_194+3*c_36*(2*c_6*c_97-c_4*
        c_81+p2.y*p3.y*c_42))-3*p1.y*(2*p2.y*c_13*c_27+c_11*p3.y*(c_125+c_32+c_43)-c_6*c_12*c_78-2*c_10*c_4*c_42+c_49*c_126-4*
        c_48*c_195+c_36*(2*c_12*c_196+3*c_6*p3.y*c_126+c_10*(c_158+c_40+c_30))+c_59*(2*p2.y*c_97+p3.y*(c_125+c_64+c_0)))+c_9*(-8*
        c_10*c_97+3*c_12*c_197+3*c_6*p3.y*c_144+6*p2.y*c_4*c_169+3*c_36*(2*p2.y*c_78+p3.y*(c_127+c_69+9*p3.z))))))/double(34836480);
}

}