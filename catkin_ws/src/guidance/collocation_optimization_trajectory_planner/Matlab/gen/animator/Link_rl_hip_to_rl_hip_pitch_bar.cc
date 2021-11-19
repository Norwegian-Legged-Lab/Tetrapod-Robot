/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 18:01:34 GMT+01:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
#include<math.h>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;

inline double Sec(double x) { return 1/cos(x); }
inline double Csc(double x) { return 1/sin(x); }

#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t84;
  double t315;
  double t345;
  double t346;
  double t420;
  double t429;
  double t280;
  double t610;
  double t357;
  double t434;
  double t454;
  double t462;
  double t595;
  double t604;
  double t614;
  double t667;
  double t699;
  double t702;
  double t725;
  double t731;
  double t738;
  double t485;
  double t710;
  double t764;
  double t779;
  double t1997;
  double t2014;
  double t2002;
  double t2022;
  double t2023;
  double t2036;
  double t2037;
  double t2040;
  double t2026;
  double t2046;
  double t2047;
  double t2052;
  double t2056;
  double t2063;
  double t2067;
  double t2070;
  double t1999;
  double t2059;
  double t2074;
  double t2079;
  double t2862;
  double t2865;
  double t2869;
  double t2886;
  double t2894;
  double t2916;
  double t2879;
  double t2936;
  double t2938;
  double t2967;
  double t2968;
  double t2983;
  double t2984;
  double t2986;
  double t2842;
  double t2972;
  double t2994;
  double t2995;
  double t3258;
  double t3259;
  double t3261;
  double t3262;
  double t3537;
  double t3540;
  double t3542;
  double t3544;
  double t3706;
  double t3707;
  double t3711;
  double t3714;
  t84 = Cos(var1[4]);
  t315 = Cos(var1[12]);
  t345 = -1.*t315;
  t346 = 1. + t345;
  t420 = Sin(var1[12]);
  t429 = 0.15121*t420;
  t280 = Cos(var1[5]);
  t610 = Sin(var1[5]);
  t357 = -0.15121*t346;
  t434 = t357 + t429;
  t454 = t84*t280*t434;
  t462 = Sin(var1[4]);
  t595 = 0.15121*t346;
  t604 = t595 + t429;
  t614 = -1.*t84*t604*t610;
  t667 = -1.*t84*t280*t420;
  t699 = -1.*t315*t84*t610;
  t702 = t667 + t699;
  t725 = t315*t84*t280;
  t731 = -1.*t84*t420*t610;
  t738 = t725 + t731;
  t485 = -0.008915*t462;
  t710 = 0.160297*t702;
  t764 = -0.143276*t738;
  t779 = var1[0] + t454 + t485 + t614 + t710 + t764;
  t1997 = Sin(var1[3]);
  t2014 = Cos(var1[3]);
  t2002 = t280*t1997*t462;
  t2022 = t2014*t610;
  t2023 = t2002 + t2022;
  t2036 = t2014*t280;
  t2037 = -1.*t1997*t462*t610;
  t2040 = t2036 + t2037;
  t2026 = t434*t2023;
  t2046 = t604*t2040;
  t2047 = -1.*t420*t2023;
  t2052 = t315*t2040;
  t2056 = t2047 + t2052;
  t2063 = t315*t2023;
  t2067 = t420*t2040;
  t2070 = t2063 + t2067;
  t1999 = 0.008915*t84*t1997;
  t2059 = 0.160297*t2056;
  t2074 = -0.143276*t2070;
  t2079 = var1[1] + t1999 + t2026 + t2046 + t2059 + t2074;
  t2862 = -1.*t2014*t280*t462;
  t2865 = t1997*t610;
  t2869 = t2862 + t2865;
  t2886 = t280*t1997;
  t2894 = t2014*t462*t610;
  t2916 = t2886 + t2894;
  t2879 = t434*t2869;
  t2936 = t604*t2916;
  t2938 = -1.*t420*t2869;
  t2967 = t315*t2916;
  t2968 = t2938 + t2967;
  t2983 = t315*t2869;
  t2984 = t420*t2916;
  t2986 = t2983 + t2984;
  t2842 = -0.008915*t2014*t84;
  t2972 = 0.160297*t2968;
  t2994 = -0.143276*t2986;
  t2995 = var1[2] + t2842 + t2879 + t2936 + t2972 + t2994;
  t3258 = -0.047665*t462;
  t3259 = 0.235796*t702;
  t3261 = -0.273276*t738;
  t3262 = var1[0] + t454 + t3258 + t614 + t3259 + t3261;
  t3537 = 0.047665*t84*t1997;
  t3540 = 0.235796*t2056;
  t3542 = -0.273276*t2070;
  t3544 = var1[1] + t3537 + t2026 + t2046 + t3540 + t3542;
  t3706 = -0.047665*t2014*t84;
  t3707 = 0.235796*t2968;
  t3711 = -0.273276*t2986;
  t3714 = var1[2] + t3706 + t2879 + t2936 + t3707 + t3711;
  p_output1[0]=t779;
  p_output1[1]=t454 - 0.012156*t462 + t614 + 0.156737*t702 - 0.144377*t738 + var1[0];
  p_output1[2]=t454 - 0.014079*t462 + t614 + 0.152579*t702 - 0.146218*t738 + var1[0];
  p_output1[3]=t454 - 0.014476*t462 + t614 + 0.148272*t702 - 0.148601*t738 + var1[0];
  p_output1[4]=t454 - 0.013305*t462 + t614 + 0.144284*t702 - 0.151266*t738 + var1[0];
  p_output1[5]=t454 - 0.010692*t462 + t614 + 0.141046*t702 - 0.153926*t738 + var1[0];
  p_output1[6]=t454 - 0.00692*t462 + t614 + 0.13891*t702 - 0.156291*t738 + var1[0];
  p_output1[7]=t454 - 0.002399*t462 + t614 + 0.138106*t702 - 0.158105*t738 + var1[0];
  p_output1[8]=t454 + 0.002383*t462 + t614 + 0.138723*t702 - 0.159172*t738 + var1[0];
  p_output1[9]=t454 + 0.006906*t462 + t614 + 0.140693*t702 - 0.159377*t738 + var1[0];
  p_output1[10]=t454 + 0.010681*t462 + t614 + 0.143802*t702 - 0.158696*t738 + var1[0];
  p_output1[11]=t454 + 0.013299*t462 + t614 + 0.147714*t702 - 0.157204*t738 + var1[0];
  p_output1[12]=t454 + 0.014475*t462 + t614 + 0.152005*t702 - 0.155063*t738 + var1[0];
  p_output1[13]=t454 + 0.014083*t462 + t614 + 0.15621*t702 - 0.152504*t738 + var1[0];
  p_output1[14]=t454 + 0.012165*t462 + t614 + 0.159873*t702 - 0.149805*t738 + var1[0];
  p_output1[15]=t454 + 0.008928*t462 + t614 + 0.162597*t702 - 0.147258*t738 + var1[0];
  p_output1[16]=t454 + 0.004724*t462 + t614 + 0.164088*t702 - 0.145139*t738 + var1[0];
  p_output1[17]=t454 + 8.e-6*t462 + t614 + 0.164182*t702 - 0.143679*t738 + var1[0];
  p_output1[18]=t454 - 0.004709*t462 + t614 + 0.162871*t702 - 0.143034*t738 + var1[0];
  p_output1[19]=t779;
  p_output1[20]=t2079;
  p_output1[21]=t2026 + t2046 + 0.156737*t2056 - 0.144377*t2070 + 0.012156*t1997*t84 + var1[1];
  p_output1[22]=t2026 + t2046 + 0.152579*t2056 - 0.146218*t2070 + 0.014079*t1997*t84 + var1[1];
  p_output1[23]=t2026 + t2046 + 0.148272*t2056 - 0.148601*t2070 + 0.014476*t1997*t84 + var1[1];
  p_output1[24]=t2026 + t2046 + 0.144284*t2056 - 0.151266*t2070 + 0.013305*t1997*t84 + var1[1];
  p_output1[25]=t2026 + t2046 + 0.141046*t2056 - 0.153926*t2070 + 0.010692*t1997*t84 + var1[1];
  p_output1[26]=t2026 + t2046 + 0.13891*t2056 - 0.156291*t2070 + 0.00692*t1997*t84 + var1[1];
  p_output1[27]=t2026 + t2046 + 0.138106*t2056 - 0.158105*t2070 + 0.002399*t1997*t84 + var1[1];
  p_output1[28]=t2026 + t2046 + 0.138723*t2056 - 0.159172*t2070 - 0.002383*t1997*t84 + var1[1];
  p_output1[29]=t2026 + t2046 + 0.140693*t2056 - 0.159377*t2070 - 0.006906*t1997*t84 + var1[1];
  p_output1[30]=t2026 + t2046 + 0.143802*t2056 - 0.158696*t2070 - 0.010681*t1997*t84 + var1[1];
  p_output1[31]=t2026 + t2046 + 0.147714*t2056 - 0.157204*t2070 - 0.013299*t1997*t84 + var1[1];
  p_output1[32]=t2026 + t2046 + 0.152005*t2056 - 0.155063*t2070 - 0.014475*t1997*t84 + var1[1];
  p_output1[33]=t2026 + t2046 + 0.15621*t2056 - 0.152504*t2070 - 0.014083*t1997*t84 + var1[1];
  p_output1[34]=t2026 + t2046 + 0.159873*t2056 - 0.149805*t2070 - 0.012165*t1997*t84 + var1[1];
  p_output1[35]=t2026 + t2046 + 0.162597*t2056 - 0.147258*t2070 - 0.008928*t1997*t84 + var1[1];
  p_output1[36]=t2026 + t2046 + 0.164088*t2056 - 0.145139*t2070 - 0.004724*t1997*t84 + var1[1];
  p_output1[37]=t2026 + t2046 + 0.164182*t2056 - 0.143679*t2070 - 8.e-6*t1997*t84 + var1[1];
  p_output1[38]=t2026 + t2046 + 0.162871*t2056 - 0.143034*t2070 + 0.004709*t1997*t84 + var1[1];
  p_output1[39]=t2079;
  p_output1[40]=t2995;
  p_output1[41]=t2879 + t2936 + 0.156737*t2968 - 0.144377*t2986 - 0.012156*t2014*t84 + var1[2];
  p_output1[42]=t2879 + t2936 + 0.152579*t2968 - 0.146218*t2986 - 0.014079*t2014*t84 + var1[2];
  p_output1[43]=t2879 + t2936 + 0.148272*t2968 - 0.148601*t2986 - 0.014476*t2014*t84 + var1[2];
  p_output1[44]=t2879 + t2936 + 0.144284*t2968 - 0.151266*t2986 - 0.013305*t2014*t84 + var1[2];
  p_output1[45]=t2879 + t2936 + 0.141046*t2968 - 0.153926*t2986 - 0.010692*t2014*t84 + var1[2];
  p_output1[46]=t2879 + t2936 + 0.13891*t2968 - 0.156291*t2986 - 0.00692*t2014*t84 + var1[2];
  p_output1[47]=t2879 + t2936 + 0.138106*t2968 - 0.158105*t2986 - 0.002399*t2014*t84 + var1[2];
  p_output1[48]=t2879 + t2936 + 0.138723*t2968 - 0.159172*t2986 + 0.002383*t2014*t84 + var1[2];
  p_output1[49]=t2879 + t2936 + 0.140693*t2968 - 0.159377*t2986 + 0.006906*t2014*t84 + var1[2];
  p_output1[50]=t2879 + t2936 + 0.143802*t2968 - 0.158696*t2986 + 0.010681*t2014*t84 + var1[2];
  p_output1[51]=t2879 + t2936 + 0.147714*t2968 - 0.157204*t2986 + 0.013299*t2014*t84 + var1[2];
  p_output1[52]=t2879 + t2936 + 0.152005*t2968 - 0.155063*t2986 + 0.014475*t2014*t84 + var1[2];
  p_output1[53]=t2879 + t2936 + 0.15621*t2968 - 0.152504*t2986 + 0.014083*t2014*t84 + var1[2];
  p_output1[54]=t2879 + t2936 + 0.159873*t2968 - 0.149805*t2986 + 0.012165*t2014*t84 + var1[2];
  p_output1[55]=t2879 + t2936 + 0.162597*t2968 - 0.147258*t2986 + 0.008928*t2014*t84 + var1[2];
  p_output1[56]=t2879 + t2936 + 0.164088*t2968 - 0.145139*t2986 + 0.004724*t2014*t84 + var1[2];
  p_output1[57]=t2879 + t2936 + 0.164182*t2968 - 0.143679*t2986 + 8.e-6*t2014*t84 + var1[2];
  p_output1[58]=t2879 + t2936 + 0.162871*t2968 - 0.143034*t2986 - 0.004709*t2014*t84 + var1[2];
  p_output1[59]=t2995;
  p_output1[60]=t3262;
  p_output1[61]=t454 - 0.050906*t462 + t614 + 0.232236*t702 - 0.274377*t738 + var1[0];
  p_output1[62]=t454 - 0.052829*t462 + t614 + 0.228078*t702 - 0.276219*t738 + var1[0];
  p_output1[63]=t454 - 0.053226*t462 + t614 + 0.223771*t702 - 0.278602*t738 + var1[0];
  p_output1[64]=t454 - 0.052055*t462 + t614 + 0.219783*t702 - 0.281267*t738 + var1[0];
  p_output1[65]=t454 - 0.049442*t462 + t614 + 0.216545*t702 - 0.283926*t738 + var1[0];
  p_output1[66]=t454 - 0.04567*t462 + t614 + 0.214409*t702 - 0.286291*t738 + var1[0];
  p_output1[67]=t454 - 0.041149*t462 + t614 + 0.213605*t702 - 0.288106*t738 + var1[0];
  p_output1[68]=t454 - 0.036367*t462 + t614 + 0.214222*t702 - 0.289173*t738 + var1[0];
  p_output1[69]=t454 - 0.031844*t462 + t614 + 0.216192*t702 - 0.289377*t738 + var1[0];
  p_output1[70]=t454 - 0.028069*t462 + t614 + 0.219301*t702 - 0.288696*t738 + var1[0];
  p_output1[71]=t454 - 0.025451*t462 + t614 + 0.223213*t702 - 0.287205*t738 + var1[0];
  p_output1[72]=t454 - 0.024275*t462 + t614 + 0.227504*t702 - 0.285063*t738 + var1[0];
  p_output1[73]=t454 - 0.024667*t462 + t614 + 0.231709*t702 - 0.282504*t738 + var1[0];
  p_output1[74]=t454 - 0.026585*t462 + t614 + 0.235372*t702 - 0.279805*t738 + var1[0];
  p_output1[75]=t454 - 0.029822*t462 + t614 + 0.238096*t702 - 0.277258*t738 + var1[0];
  p_output1[76]=t454 - 0.034026*t462 + t614 + 0.239587*t702 - 0.27514*t738 + var1[0];
  p_output1[77]=t454 - 0.038742*t462 + t614 + 0.239681*t702 - 0.273679*t738 + var1[0];
  p_output1[78]=t454 - 0.043459*t462 + t614 + 0.23837*t702 - 0.273035*t738 + var1[0];
  p_output1[79]=t3262;
  p_output1[80]=t3544;
  p_output1[81]=t2026 + t2046 + 0.232236*t2056 - 0.274377*t2070 + 0.050906*t1997*t84 + var1[1];
  p_output1[82]=t2026 + t2046 + 0.228078*t2056 - 0.276219*t2070 + 0.052829*t1997*t84 + var1[1];
  p_output1[83]=t2026 + t2046 + 0.223771*t2056 - 0.278602*t2070 + 0.053226*t1997*t84 + var1[1];
  p_output1[84]=t2026 + t2046 + 0.219783*t2056 - 0.281267*t2070 + 0.052055*t1997*t84 + var1[1];
  p_output1[85]=t2026 + t2046 + 0.216545*t2056 - 0.283926*t2070 + 0.049442*t1997*t84 + var1[1];
  p_output1[86]=t2026 + t2046 + 0.214409*t2056 - 0.286291*t2070 + 0.04567*t1997*t84 + var1[1];
  p_output1[87]=t2026 + t2046 + 0.213605*t2056 - 0.288106*t2070 + 0.041149*t1997*t84 + var1[1];
  p_output1[88]=t2026 + t2046 + 0.214222*t2056 - 0.289173*t2070 + 0.036367*t1997*t84 + var1[1];
  p_output1[89]=t2026 + t2046 + 0.216192*t2056 - 0.289377*t2070 + 0.031844*t1997*t84 + var1[1];
  p_output1[90]=t2026 + t2046 + 0.219301*t2056 - 0.288696*t2070 + 0.028069*t1997*t84 + var1[1];
  p_output1[91]=t2026 + t2046 + 0.223213*t2056 - 0.287205*t2070 + 0.025451*t1997*t84 + var1[1];
  p_output1[92]=t2026 + t2046 + 0.227504*t2056 - 0.285063*t2070 + 0.024275*t1997*t84 + var1[1];
  p_output1[93]=t2026 + t2046 + 0.231709*t2056 - 0.282504*t2070 + 0.024667*t1997*t84 + var1[1];
  p_output1[94]=t2026 + t2046 + 0.235372*t2056 - 0.279805*t2070 + 0.026585*t1997*t84 + var1[1];
  p_output1[95]=t2026 + t2046 + 0.238096*t2056 - 0.277258*t2070 + 0.029822*t1997*t84 + var1[1];
  p_output1[96]=t2026 + t2046 + 0.239587*t2056 - 0.27514*t2070 + 0.034026*t1997*t84 + var1[1];
  p_output1[97]=t2026 + t2046 + 0.239681*t2056 - 0.273679*t2070 + 0.038742*t1997*t84 + var1[1];
  p_output1[98]=t2026 + t2046 + 0.23837*t2056 - 0.273035*t2070 + 0.043459*t1997*t84 + var1[1];
  p_output1[99]=t3544;
  p_output1[100]=t3714;
  p_output1[101]=t2879 + t2936 + 0.232236*t2968 - 0.274377*t2986 - 0.050906*t2014*t84 + var1[2];
  p_output1[102]=t2879 + t2936 + 0.228078*t2968 - 0.276219*t2986 - 0.052829*t2014*t84 + var1[2];
  p_output1[103]=t2879 + t2936 + 0.223771*t2968 - 0.278602*t2986 - 0.053226*t2014*t84 + var1[2];
  p_output1[104]=t2879 + t2936 + 0.219783*t2968 - 0.281267*t2986 - 0.052055*t2014*t84 + var1[2];
  p_output1[105]=t2879 + t2936 + 0.216545*t2968 - 0.283926*t2986 - 0.049442*t2014*t84 + var1[2];
  p_output1[106]=t2879 + t2936 + 0.214409*t2968 - 0.286291*t2986 - 0.04567*t2014*t84 + var1[2];
  p_output1[107]=t2879 + t2936 + 0.213605*t2968 - 0.288106*t2986 - 0.041149*t2014*t84 + var1[2];
  p_output1[108]=t2879 + t2936 + 0.214222*t2968 - 0.289173*t2986 - 0.036367*t2014*t84 + var1[2];
  p_output1[109]=t2879 + t2936 + 0.216192*t2968 - 0.289377*t2986 - 0.031844*t2014*t84 + var1[2];
  p_output1[110]=t2879 + t2936 + 0.219301*t2968 - 0.288696*t2986 - 0.028069*t2014*t84 + var1[2];
  p_output1[111]=t2879 + t2936 + 0.223213*t2968 - 0.287205*t2986 - 0.025451*t2014*t84 + var1[2];
  p_output1[112]=t2879 + t2936 + 0.227504*t2968 - 0.285063*t2986 - 0.024275*t2014*t84 + var1[2];
  p_output1[113]=t2879 + t2936 + 0.231709*t2968 - 0.282504*t2986 - 0.024667*t2014*t84 + var1[2];
  p_output1[114]=t2879 + t2936 + 0.235372*t2968 - 0.279805*t2986 - 0.026585*t2014*t84 + var1[2];
  p_output1[115]=t2879 + t2936 + 0.238096*t2968 - 0.277258*t2986 - 0.029822*t2014*t84 + var1[2];
  p_output1[116]=t2879 + t2936 + 0.239587*t2968 - 0.27514*t2986 - 0.034026*t2014*t84 + var1[2];
  p_output1[117]=t2879 + t2936 + 0.239681*t2968 - 0.273679*t2986 - 0.038742*t2014*t84 + var1[2];
  p_output1[118]=t2879 + t2936 + 0.23837*t2968 - 0.273035*t2986 - 0.043459*t2014*t84 + var1[2];
  p_output1[119]=t3714;
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 20, (mwSize) 6, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Link_rl_hip_to_rl_hip_pitch_bar.hh"

namespace SymFunction
{

void Link_rl_hip_to_rl_hip_pitch_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
