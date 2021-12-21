/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 23:17:18 GMT+01:00
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
  double t446;
  double t563;
  double t564;
  double t572;
  double t575;
  double t588;
  double t560;
  double t840;
  double t573;
  double t614;
  double t633;
  double t723;
  double t823;
  double t832;
  double t843;
  double t869;
  double t872;
  double t875;
  double t916;
  double t944;
  double t991;
  double t822;
  double t905;
  double t997;
  double t998;
  double t1835;
  double t1864;
  double t1862;
  double t1902;
  double t2009;
  double t2025;
  double t2028;
  double t2030;
  double t2013;
  double t2033;
  double t2045;
  double t2053;
  double t2062;
  double t2070;
  double t2072;
  double t2073;
  double t1844;
  double t2065;
  double t2079;
  double t2082;
  double t2905;
  double t2917;
  double t2936;
  double t2953;
  double t2961;
  double t2964;
  double t2950;
  double t2968;
  double t3011;
  double t3036;
  double t3062;
  double t3077;
  double t3082;
  double t3085;
  double t2896;
  double t3064;
  double t3098;
  double t3104;
  double t3541;
  double t3546;
  double t3547;
  double t3556;
  double t4075;
  double t4083;
  double t4085;
  double t4089;
  double t4352;
  double t4354;
  double t4357;
  double t4359;
  t446 = Cos(var1[4]);
  t563 = Cos(var1[12]);
  t564 = -1.*t563;
  t572 = 1. + t564;
  t575 = Sin(var1[12]);
  t588 = 0.15121*t575;
  t560 = Cos(var1[5]);
  t840 = Sin(var1[5]);
  t573 = -0.15121*t572;
  t614 = t573 + t588;
  t633 = t446*t560*t614;
  t723 = Sin(var1[4]);
  t823 = 0.15121*t572;
  t832 = t823 + t588;
  t843 = -1.*t446*t832*t840;
  t869 = -1.*t446*t560*t575;
  t872 = -1.*t563*t446*t840;
  t875 = t869 + t872;
  t916 = t563*t446*t560;
  t944 = -1.*t446*t575*t840;
  t991 = t916 + t944;
  t822 = -0.010457*t723;
  t905 = 0.15886*t875;
  t997 = -0.143651*t991;
  t998 = var1[0] + t633 + t822 + t843 + t905 + t997;
  t1835 = Sin(var1[3]);
  t1864 = Cos(var1[3]);
  t1862 = t560*t1835*t723;
  t1902 = t1864*t840;
  t2009 = t1862 + t1902;
  t2025 = t1864*t560;
  t2028 = -1.*t1835*t723*t840;
  t2030 = t2025 + t2028;
  t2013 = t614*t2009;
  t2033 = t832*t2030;
  t2045 = -1.*t575*t2009;
  t2053 = t563*t2030;
  t2062 = t2045 + t2053;
  t2070 = t563*t2009;
  t2072 = t575*t2030;
  t2073 = t2070 + t2072;
  t1844 = 0.010457*t446*t1835;
  t2065 = 0.15886*t2062;
  t2079 = -0.143651*t2073;
  t2082 = var1[1] + t1844 + t2013 + t2033 + t2065 + t2079;
  t2905 = -1.*t1864*t560*t723;
  t2917 = t1835*t840;
  t2936 = t2905 + t2917;
  t2953 = t560*t1835;
  t2961 = t1864*t723*t840;
  t2964 = t2953 + t2961;
  t2950 = t614*t2936;
  t2968 = t832*t2964;
  t3011 = -1.*t575*t2936;
  t3036 = t563*t2964;
  t3062 = t3011 + t3036;
  t3077 = t563*t2936;
  t3082 = t575*t2964;
  t3085 = t3077 + t3082;
  t2896 = -0.010457*t1864*t446;
  t3064 = 0.15886*t3062;
  t3098 = -0.143651*t3085;
  t3104 = var1[2] + t2896 + t2950 + t2968 + t3064 + t3098;
  t3541 = -0.049207*t723;
  t3546 = 0.234359*t875;
  t3547 = -0.273651*t991;
  t3556 = var1[0] + t633 + t3541 + t843 + t3546 + t3547;
  t4075 = 0.049207*t446*t1835;
  t4083 = 0.234359*t2062;
  t4085 = -0.273651*t2073;
  t4089 = var1[1] + t4075 + t2013 + t2033 + t4083 + t4085;
  t4352 = -0.049207*t1864*t446;
  t4354 = 0.234359*t3062;
  t4357 = -0.273651*t3085;
  t4359 = var1[2] + t4352 + t2950 + t2968 + t4354 + t4357;
  p_output1[0]=t998;
  p_output1[1]=t633 - 0.013164*t723 + t843 + 0.154989*t875 - 0.145091*t991 + var1[0];
  p_output1[2]=t633 - 0.014444*t723 + t843 + 0.15071*t875 - 0.147195*t991 + var1[0];
  p_output1[3]=t633 - 0.014159*t723 + t843 + 0.146484*t875 - 0.149734*t991 + var1[0];
  p_output1[4]=t633 - 0.01234*t723 + t843 + 0.142771*t875 - 0.152433*t991 + var1[0];
  p_output1[5]=t633 - 0.009184*t723 + t843 + 0.139972*t875 - 0.154999*t991 + var1[0];
  p_output1[6]=t633 - 0.005032*t723 + t843 + 0.138391*t875 - 0.157155*t991 + var1[0];
  p_output1[7]=t633 - 0.000335*t723 + t843 + 0.138199*t875 - 0.158666*t991 + var1[0];
  p_output1[8]=t633 + 0.004398*t723 + t843 + 0.139417*t875 - 0.15937*t991 + var1[0];
  p_output1[9]=t633 + 0.008655*t723 + t843 + 0.141913*t875 - 0.159189*t991 + var1[0];
  p_output1[10]=t633 + 0.011973*t723 + t843 + 0.145417*t875 - 0.158144*t991 + var1[0];
  p_output1[11]=t633 + 0.013995*t723 + t843 + 0.149548*t875 - 0.156347*t991 + var1[0];
  p_output1[12]=t633 + 0.014499*t723 + t843 + 0.153859*t875 - 0.153993*t991 + var1[0];
  p_output1[13]=t633 + 0.013433*t723 + t843 + 0.157884*t875 - 0.151338*t991 + var1[0];
  p_output1[14]=t633 + 0.010911*t723 + t843 + 0.161185*t875 - 0.148669*t991 + var1[0];
  p_output1[15]=t633 + 0.007206*t723 + t843 + 0.163405*t875 - 0.146276*t991 + var1[0];
  p_output1[16]=t633 + 0.002721*t723 + t843 + 0.164304*t875 - 0.144417*t991 + var1[0];
  p_output1[17]=t633 - 0.002059*t723 + t843 + 0.163784*t875 - 0.143294*t991 + var1[0];
  p_output1[18]=t633 - 0.006616*t723 + t843 + 0.161901*t875 - 0.143029*t991 + var1[0];
  p_output1[19]=t998;
  p_output1[20]=t2082;
  p_output1[21]=t2013 + t2033 + 0.154989*t2062 - 0.145091*t2073 + 0.013164*t1835*t446 + var1[1];
  p_output1[22]=t2013 + t2033 + 0.15071*t2062 - 0.147195*t2073 + 0.014444*t1835*t446 + var1[1];
  p_output1[23]=t2013 + t2033 + 0.146484*t2062 - 0.149734*t2073 + 0.014159*t1835*t446 + var1[1];
  p_output1[24]=t2013 + t2033 + 0.142771*t2062 - 0.152433*t2073 + 0.01234*t1835*t446 + var1[1];
  p_output1[25]=t2013 + t2033 + 0.139972*t2062 - 0.154999*t2073 + 0.009184*t1835*t446 + var1[1];
  p_output1[26]=t2013 + t2033 + 0.138391*t2062 - 0.157155*t2073 + 0.005032*t1835*t446 + var1[1];
  p_output1[27]=t2013 + t2033 + 0.138199*t2062 - 0.158666*t2073 + 0.000335*t1835*t446 + var1[1];
  p_output1[28]=t2013 + t2033 + 0.139417*t2062 - 0.15937*t2073 - 0.004398*t1835*t446 + var1[1];
  p_output1[29]=t2013 + t2033 + 0.141913*t2062 - 0.159189*t2073 - 0.008655*t1835*t446 + var1[1];
  p_output1[30]=t2013 + t2033 + 0.145417*t2062 - 0.158144*t2073 - 0.011973*t1835*t446 + var1[1];
  p_output1[31]=t2013 + t2033 + 0.149548*t2062 - 0.156347*t2073 - 0.013995*t1835*t446 + var1[1];
  p_output1[32]=t2013 + t2033 + 0.153859*t2062 - 0.153993*t2073 - 0.014499*t1835*t446 + var1[1];
  p_output1[33]=t2013 + t2033 + 0.157884*t2062 - 0.151338*t2073 - 0.013433*t1835*t446 + var1[1];
  p_output1[34]=t2013 + t2033 + 0.161185*t2062 - 0.148669*t2073 - 0.010911*t1835*t446 + var1[1];
  p_output1[35]=t2013 + t2033 + 0.163405*t2062 - 0.146276*t2073 - 0.007206*t1835*t446 + var1[1];
  p_output1[36]=t2013 + t2033 + 0.164304*t2062 - 0.144417*t2073 - 0.002721*t1835*t446 + var1[1];
  p_output1[37]=t2013 + t2033 + 0.163784*t2062 - 0.143294*t2073 + 0.002059*t1835*t446 + var1[1];
  p_output1[38]=t2013 + t2033 + 0.161901*t2062 - 0.143029*t2073 + 0.006616*t1835*t446 + var1[1];
  p_output1[39]=t2082;
  p_output1[40]=t3104;
  p_output1[41]=t2950 + t2968 + 0.154989*t3062 - 0.145091*t3085 - 0.013164*t1864*t446 + var1[2];
  p_output1[42]=t2950 + t2968 + 0.15071*t3062 - 0.147195*t3085 - 0.014444*t1864*t446 + var1[2];
  p_output1[43]=t2950 + t2968 + 0.146484*t3062 - 0.149734*t3085 - 0.014159*t1864*t446 + var1[2];
  p_output1[44]=t2950 + t2968 + 0.142771*t3062 - 0.152433*t3085 - 0.01234*t1864*t446 + var1[2];
  p_output1[45]=t2950 + t2968 + 0.139972*t3062 - 0.154999*t3085 - 0.009184*t1864*t446 + var1[2];
  p_output1[46]=t2950 + t2968 + 0.138391*t3062 - 0.157155*t3085 - 0.005032*t1864*t446 + var1[2];
  p_output1[47]=t2950 + t2968 + 0.138199*t3062 - 0.158666*t3085 - 0.000335*t1864*t446 + var1[2];
  p_output1[48]=t2950 + t2968 + 0.139417*t3062 - 0.15937*t3085 + 0.004398*t1864*t446 + var1[2];
  p_output1[49]=t2950 + t2968 + 0.141913*t3062 - 0.159189*t3085 + 0.008655*t1864*t446 + var1[2];
  p_output1[50]=t2950 + t2968 + 0.145417*t3062 - 0.158144*t3085 + 0.011973*t1864*t446 + var1[2];
  p_output1[51]=t2950 + t2968 + 0.149548*t3062 - 0.156347*t3085 + 0.013995*t1864*t446 + var1[2];
  p_output1[52]=t2950 + t2968 + 0.153859*t3062 - 0.153993*t3085 + 0.014499*t1864*t446 + var1[2];
  p_output1[53]=t2950 + t2968 + 0.157884*t3062 - 0.151338*t3085 + 0.013433*t1864*t446 + var1[2];
  p_output1[54]=t2950 + t2968 + 0.161185*t3062 - 0.148669*t3085 + 0.010911*t1864*t446 + var1[2];
  p_output1[55]=t2950 + t2968 + 0.163405*t3062 - 0.146276*t3085 + 0.007206*t1864*t446 + var1[2];
  p_output1[56]=t2950 + t2968 + 0.164304*t3062 - 0.144417*t3085 + 0.002721*t1864*t446 + var1[2];
  p_output1[57]=t2950 + t2968 + 0.163784*t3062 - 0.143294*t3085 - 0.002059*t1864*t446 + var1[2];
  p_output1[58]=t2950 + t2968 + 0.161901*t3062 - 0.143029*t3085 - 0.006616*t1864*t446 + var1[2];
  p_output1[59]=t3104;
  p_output1[60]=t3556;
  p_output1[61]=t633 - 0.051914*t723 + t843 + 0.230488*t875 - 0.275092*t991 + var1[0];
  p_output1[62]=t633 - 0.053194*t723 + t843 + 0.226209*t875 - 0.277196*t991 + var1[0];
  p_output1[63]=t633 - 0.052909*t723 + t843 + 0.221983*t875 - 0.279735*t991 + var1[0];
  p_output1[64]=t633 - 0.05109*t723 + t843 + 0.21827*t875 - 0.282433*t991 + var1[0];
  p_output1[65]=t633 - 0.047934*t723 + t843 + 0.215471*t875 - 0.285*t991 + var1[0];
  p_output1[66]=t633 - 0.043782*t723 + t843 + 0.21389*t875 - 0.287155*t991 + var1[0];
  p_output1[67]=t633 - 0.039085*t723 + t843 + 0.213698*t875 - 0.288667*t991 + var1[0];
  p_output1[68]=t633 - 0.034352*t723 + t843 + 0.214916*t875 - 0.28937*t991 + var1[0];
  p_output1[69]=t633 - 0.030095*t723 + t843 + 0.217412*t875 - 0.28919*t991 + var1[0];
  p_output1[70]=t633 - 0.026777*t723 + t843 + 0.220916*t875 - 0.288144*t991 + var1[0];
  p_output1[71]=t633 - 0.024755*t723 + t843 + 0.225047*t875 - 0.286347*t991 + var1[0];
  p_output1[72]=t633 - 0.024251*t723 + t843 + 0.229358*t875 - 0.283994*t991 + var1[0];
  p_output1[73]=t633 - 0.025317*t723 + t843 + 0.233383*t875 - 0.281339*t991 + var1[0];
  p_output1[74]=t633 - 0.027839*t723 + t843 + 0.236684*t875 - 0.27867*t991 + var1[0];
  p_output1[75]=t633 - 0.031544*t723 + t843 + 0.238904*t875 - 0.276276*t991 + var1[0];
  p_output1[76]=t633 - 0.036029*t723 + t843 + 0.239803*t875 - 0.274417*t991 + var1[0];
  p_output1[77]=t633 - 0.040809*t723 + t843 + 0.239283*t875 - 0.273294*t991 + var1[0];
  p_output1[78]=t633 - 0.045366*t723 + t843 + 0.2374*t875 - 0.27303*t991 + var1[0];
  p_output1[79]=t3556;
  p_output1[80]=t4089;
  p_output1[81]=t2013 + t2033 + 0.230488*t2062 - 0.275092*t2073 + 0.051914*t1835*t446 + var1[1];
  p_output1[82]=t2013 + t2033 + 0.226209*t2062 - 0.277196*t2073 + 0.053194*t1835*t446 + var1[1];
  p_output1[83]=t2013 + t2033 + 0.221983*t2062 - 0.279735*t2073 + 0.052909*t1835*t446 + var1[1];
  p_output1[84]=t2013 + t2033 + 0.21827*t2062 - 0.282433*t2073 + 0.05109*t1835*t446 + var1[1];
  p_output1[85]=t2013 + t2033 + 0.215471*t2062 - 0.285*t2073 + 0.047934*t1835*t446 + var1[1];
  p_output1[86]=t2013 + t2033 + 0.21389*t2062 - 0.287155*t2073 + 0.043782*t1835*t446 + var1[1];
  p_output1[87]=t2013 + t2033 + 0.213698*t2062 - 0.288667*t2073 + 0.039085*t1835*t446 + var1[1];
  p_output1[88]=t2013 + t2033 + 0.214916*t2062 - 0.28937*t2073 + 0.034352*t1835*t446 + var1[1];
  p_output1[89]=t2013 + t2033 + 0.217412*t2062 - 0.28919*t2073 + 0.030095*t1835*t446 + var1[1];
  p_output1[90]=t2013 + t2033 + 0.220916*t2062 - 0.288144*t2073 + 0.026777*t1835*t446 + var1[1];
  p_output1[91]=t2013 + t2033 + 0.225047*t2062 - 0.286347*t2073 + 0.024755*t1835*t446 + var1[1];
  p_output1[92]=t2013 + t2033 + 0.229358*t2062 - 0.283994*t2073 + 0.024251*t1835*t446 + var1[1];
  p_output1[93]=t2013 + t2033 + 0.233383*t2062 - 0.281339*t2073 + 0.025317*t1835*t446 + var1[1];
  p_output1[94]=t2013 + t2033 + 0.236684*t2062 - 0.27867*t2073 + 0.027839*t1835*t446 + var1[1];
  p_output1[95]=t2013 + t2033 + 0.238904*t2062 - 0.276276*t2073 + 0.031544*t1835*t446 + var1[1];
  p_output1[96]=t2013 + t2033 + 0.239803*t2062 - 0.274417*t2073 + 0.036029*t1835*t446 + var1[1];
  p_output1[97]=t2013 + t2033 + 0.239283*t2062 - 0.273294*t2073 + 0.040809*t1835*t446 + var1[1];
  p_output1[98]=t2013 + t2033 + 0.2374*t2062 - 0.27303*t2073 + 0.045366*t1835*t446 + var1[1];
  p_output1[99]=t4089;
  p_output1[100]=t4359;
  p_output1[101]=t2950 + t2968 + 0.230488*t3062 - 0.275092*t3085 - 0.051914*t1864*t446 + var1[2];
  p_output1[102]=t2950 + t2968 + 0.226209*t3062 - 0.277196*t3085 - 0.053194*t1864*t446 + var1[2];
  p_output1[103]=t2950 + t2968 + 0.221983*t3062 - 0.279735*t3085 - 0.052909*t1864*t446 + var1[2];
  p_output1[104]=t2950 + t2968 + 0.21827*t3062 - 0.282433*t3085 - 0.05109*t1864*t446 + var1[2];
  p_output1[105]=t2950 + t2968 + 0.215471*t3062 - 0.285*t3085 - 0.047934*t1864*t446 + var1[2];
  p_output1[106]=t2950 + t2968 + 0.21389*t3062 - 0.287155*t3085 - 0.043782*t1864*t446 + var1[2];
  p_output1[107]=t2950 + t2968 + 0.213698*t3062 - 0.288667*t3085 - 0.039085*t1864*t446 + var1[2];
  p_output1[108]=t2950 + t2968 + 0.214916*t3062 - 0.28937*t3085 - 0.034352*t1864*t446 + var1[2];
  p_output1[109]=t2950 + t2968 + 0.217412*t3062 - 0.28919*t3085 - 0.030095*t1864*t446 + var1[2];
  p_output1[110]=t2950 + t2968 + 0.220916*t3062 - 0.288144*t3085 - 0.026777*t1864*t446 + var1[2];
  p_output1[111]=t2950 + t2968 + 0.225047*t3062 - 0.286347*t3085 - 0.024755*t1864*t446 + var1[2];
  p_output1[112]=t2950 + t2968 + 0.229358*t3062 - 0.283994*t3085 - 0.024251*t1864*t446 + var1[2];
  p_output1[113]=t2950 + t2968 + 0.233383*t3062 - 0.281339*t3085 - 0.025317*t1864*t446 + var1[2];
  p_output1[114]=t2950 + t2968 + 0.236684*t3062 - 0.27867*t3085 - 0.027839*t1864*t446 + var1[2];
  p_output1[115]=t2950 + t2968 + 0.238904*t3062 - 0.276276*t3085 - 0.031544*t1864*t446 + var1[2];
  p_output1[116]=t2950 + t2968 + 0.239803*t3062 - 0.274417*t3085 - 0.036029*t1864*t446 + var1[2];
  p_output1[117]=t2950 + t2968 + 0.239283*t3062 - 0.273294*t3085 - 0.040809*t1864*t446 + var1[2];
  p_output1[118]=t2950 + t2968 + 0.2374*t3062 - 0.27303*t3085 - 0.045366*t1864*t446 + var1[2];
  p_output1[119]=t4359;
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
