/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:32:31 GMT+02:00
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
  double t7057;
  double t7058;
  double t7400;
  double t3805;
  double t6576;
  double t7351;
  double t7583;
  double t6921;
  double t7673;
  double t7754;
  double t7780;
  double t8679;
  double t8686;
  double t8695;
  double t8806;
  double t8937;
  double t9577;
  double t9578;
  double t10114;
  double t7414;
  double t11594;
  double t7125;
  double t11696;
  double t11700;
  double t11713;
  double t11743;
  double t11809;
  double t12150;
  double t12161;
  double t12163;
  double t12172;
  double t12247;
  double t12289;
  double t13941;
  double t7357;
  double t7358;
  double t7421;
  double t7433;
  double t6981;
  double t7050;
  double t7170;
  double t7239;
  double t9002;
  double t9164;
  double t15073;
  double t15074;
  double t15077;
  double t15257;
  double t16958;
  double t16976;
  double t12091;
  double t12126;
  double t17419;
  double t17431;
  double t17437;
  double t17501;
  double t17643;
  double t17651;
  double t17938;
  double t17966;
  double t17979;
  double t17790;
  double t17846;
  double t17857;
  double t18415;
  double t18418;
  double t18486;
  double t18362;
  double t18373;
  double t18374;
  double t18691;
  double t18701;
  double t18704;
  double t18861;
  double t18868;
  double t18872;
  double t18963;
  double t18976;
  double t19016;
  double t19951;
  double t20052;
  double t20064;
  double t20181;
  double t20413;
  double t20431;
  double t21978;
  double t21988;
  double t22124;
  double t22665;
  double t22681;
  double t22814;
  double t22818;
  double t22836;
  double t23051;
  double t23052;
  double t23095;
  double t23336;
  double t23393;
  double t23419;
  double t23506;
  double t23511;
  double t23512;
  double t23546;
  double t23557;
  double t23613;
  double t23990;
  double t24023;
  double t24046;
  double t24051;
  double t24136;
  double t24251;
  double t24292;
  double t24375;
  double t24423;
  double t25649;
  double t25650;
  double t25713;
  double t25762;
  double t25764;
  double t25777;
  double t25826;
  double t25876;
  double t26030;
  double t26599;
  double t26704;
  double t26755;
  double t27003;
  double t27136;
  double t27137;
  double t27142;
  double t27144;
  double t27150;
  double t27194;
  double t27195;
  double t27196;
  double t27208;
  double t27209;
  double t27216;
  double t27220;
  double t27237;
  double t27238;
  double t27248;
  double t27256;
  double t27257;
  double t27284;
  double t27306;
  double t27313;
  double t27462;
  double t27469;
  double t27470;
  double t27524;
  double t27525;
  double t27526;
  double t27510;
  double t27511;
  double t27515;
  double t27568;
  double t27569;
  double t27570;
  double t27580;
  double t27581;
  double t27582;
  double t27572;
  double t27573;
  double t27574;
  double t29393;
  double t29410;
  double t29503;
  double t29977;
  double t30026;
  double t30413;
  double t30750;
  double t30816;
  double t30897;
  double t31424;
  double t31433;
  double t31446;
  double t31467;
  double t31468;
  double t31491;
  double t32006;
  double t32042;
  double t32057;
  t7057 = Cos(var1[5]);
  t7058 = Sin(var1[4]);
  t7400 = Sin(var1[5]);
  t3805 = Cos(var1[4]);
  t6576 = Sin(var1[12]);
  t7351 = Cos(var1[12]);
  t7583 = Sin(var1[13]);
  t6921 = Cos(var1[13]);
  t7673 = t7351*t3805;
  t7754 = -1.*t6576*t7058*t7400;
  t7780 = t7673 + t7754;
  t8679 = Sin(var1[14]);
  t8686 = t7057*t7583*t7058;
  t8695 = t6921*t7780;
  t8806 = t8686 + t8695;
  t8937 = Cos(var1[14]);
  t9577 = -1.*t6921*t7057*t7058;
  t9578 = t7583*t7780;
  t10114 = t9577 + t9578;
  t7414 = Cos(var1[6]);
  t11594 = Sin(var1[6]);
  t7125 = Cos(var1[7]);
  t11696 = t3805*t7414;
  t11700 = -1.*t7058*t7400*t11594;
  t11713 = t11696 + t11700;
  t11743 = Sin(var1[7]);
  t11809 = Cos(var1[8]);
  t12150 = -1.*t7057*t7125*t7058;
  t12161 = t11713*t11743;
  t12163 = t12150 + t12161;
  t12172 = t7125*t11713;
  t12247 = t7057*t7058*t11743;
  t12289 = t12172 + t12247;
  t13941 = Sin(var1[8]);
  t7357 = -1.*t7351;
  t7358 = 1. + t7357;
  t7421 = -1.*t7414;
  t7433 = 1. + t7421;
  t6981 = -1.*t6921;
  t7050 = 1. + t6981;
  t7170 = -1.*t7125;
  t7239 = 1. + t7170;
  t9002 = -1.*t8937;
  t9164 = 1. + t9002;
  t15073 = t3805*t7057*t6576*t7583;
  t15074 = -1.*t6921*t3805*t7400;
  t15077 = t15073 + t15074;
  t15257 = t6921*t3805*t7057*t6576;
  t16958 = t3805*t7583*t7400;
  t16976 = t15257 + t16958;
  t12091 = -1.*t11809;
  t12126 = 1. + t12091;
  t17419 = -1.*t3805*t7125*t7400;
  t17431 = t3805*t7057*t11594*t11743;
  t17437 = t17419 + t17431;
  t17501 = t3805*t7057*t7125*t11594;
  t17643 = t3805*t7400*t11743;
  t17651 = t17501 + t17643;
  t17938 = t3805*t7414*t7400;
  t17966 = -1.*t7058*t11594;
  t17979 = t17938 + t17966;
  t17790 = t7414*t7058;
  t17846 = t3805*t7400*t11594;
  t17857 = t17790 + t17846;
  t18415 = -1.*t3805*t7057*t7125;
  t18418 = -1.*t17857*t11743;
  t18486 = t18415 + t18418;
  t18362 = t7125*t17857;
  t18373 = -1.*t3805*t7057*t11743;
  t18374 = t18362 + t18373;
  t18691 = t3805*t7057*t7125;
  t18701 = t17857*t11743;
  t18704 = t18691 + t18701;
  t18861 = -1.*t6576*t7058;
  t18868 = t7351*t3805*t7400;
  t18872 = t18861 + t18868;
  t18963 = t7351*t7058;
  t18976 = t3805*t6576*t7400;
  t19016 = t18963 + t18976;
  t19951 = -1.*t3805*t7057*t7583;
  t20052 = t6921*t19016;
  t20064 = t19951 + t20052;
  t20181 = -1.*t6921*t3805*t7057;
  t20413 = -1.*t7583*t19016;
  t20431 = t20181 + t20413;
  t21978 = t6921*t3805*t7057;
  t21988 = t7583*t19016;
  t22124 = t21978 + t21988;
  t22665 = Cos(var1[3]);
  t22681 = t22665*t7057*t7058;
  t22814 = Sin(var1[3]);
  t22818 = -1.*t22814*t7400;
  t22836 = t22681 + t22818;
  t23051 = -1.*t7057*t22814;
  t23052 = -1.*t22665*t7058*t7400;
  t23095 = t23051 + t23052;
  t23336 = -1.*t7351*t22665*t3805;
  t23393 = -1.*t6576*t23095;
  t23419 = t23336 + t23393;
  t23506 = -1.*t7583*t22836;
  t23511 = t6921*t23419;
  t23512 = t23506 + t23511;
  t23546 = t6921*t22836;
  t23557 = t7583*t23419;
  t23613 = t23546 + t23557;
  t23990 = -1.*t22665*t3805*t7414;
  t24023 = -1.*t23095*t11594;
  t24046 = t23990 + t24023;
  t24051 = t7125*t22836;
  t24136 = t24046*t11743;
  t24251 = t24051 + t24136;
  t24292 = t7125*t24046;
  t24375 = -1.*t22836*t11743;
  t24423 = t24292 + t24375;
  t25649 = t7351*t22814*t7058;
  t25650 = t3805*t6576*t22814*t7400;
  t25713 = t25649 + t25650;
  t25762 = -1.*t3805*t7057*t7583*t22814;
  t25764 = t6921*t25713;
  t25777 = t25762 + t25764;
  t25826 = t6921*t3805*t7057*t22814;
  t25876 = t7583*t25713;
  t26030 = t25826 + t25876;
  t26599 = t7414*t22814*t7058;
  t26704 = t3805*t22814*t7400*t11594;
  t26755 = t26599 + t26704;
  t27003 = t3805*t7057*t7125*t22814;
  t27136 = t26755*t11743;
  t27137 = t27003 + t27136;
  t27142 = t7125*t26755;
  t27144 = -1.*t3805*t7057*t22814*t11743;
  t27150 = t27142 + t27144;
  t27194 = -1.*t7057*t22814*t7058;
  t27195 = -1.*t22665*t7400;
  t27196 = t27194 + t27195;
  t27208 = t22665*t7057;
  t27209 = -1.*t22814*t7058*t7400;
  t27216 = t27208 + t27209;
  t27220 = -1.*t6576*t7583*t27196;
  t27237 = t6921*t27216;
  t27238 = t27220 + t27237;
  t27248 = -1.*t6921*t6576*t27196;
  t27256 = -1.*t7583*t27216;
  t27257 = t27248 + t27256;
  t27284 = t7125*t27216;
  t27306 = -1.*t27196*t11594*t11743;
  t27313 = t27284 + t27306;
  t27462 = -1.*t7125*t27196*t11594;
  t27469 = -1.*t27216*t11743;
  t27470 = t27462 + t27469;
  t27524 = -1.*t7414*t27216;
  t27525 = t3805*t22814*t11594;
  t27526 = t27524 + t27525;
  t27510 = -1.*t3805*t7414*t22814;
  t27511 = -1.*t27216*t11594;
  t27515 = t27510 + t27511;
  t27568 = t7057*t22814*t7058;
  t27569 = t22665*t7400;
  t27570 = t27568 + t27569;
  t27580 = -1.*t7125*t27570;
  t27581 = -1.*t27515*t11743;
  t27582 = t27580 + t27581;
  t27572 = t7125*t27515;
  t27573 = -1.*t27570*t11743;
  t27574 = t27572 + t27573;
  t29393 = t7125*t27570;
  t29410 = t27515*t11743;
  t29503 = t29393 + t29410;
  t29977 = t3805*t6576*t22814;
  t30026 = -1.*t7351*t27216;
  t30413 = t29977 + t30026;
  t30750 = -1.*t7351*t3805*t22814;
  t30816 = -1.*t6576*t27216;
  t30897 = t30750 + t30816;
  t31424 = -1.*t7583*t27570;
  t31433 = t6921*t30897;
  t31446 = t31424 + t31433;
  t31467 = -1.*t6921*t27570;
  t31468 = -1.*t7583*t30897;
  t31491 = t31467 + t31468;
  t32006 = t6921*t27570;
  t32042 = t7583*t30897;
  t32057 = t32006 + t32042;
  p_output1[0]=-0.325*t11713*t11743 + 0.075*t12126*t12163 + 0.075*t12289*t13941 - 0.0641*(t11809*t12289 + t12163*t13941) + 0.355*(t11809*t12163 - 1.*t12289*t13941) - 0.1575*t11594*t3805 - 0.1575*t3805*t6576 + 0.325*t7050*t7057*t7058 - 0.325*t7057*t7058*t7239 + 0.1575*t7058*t7358*t7400 + 0.2255*(t3805*t6576 + t7058*t7351*t7400) + 0.2255*(t11594*t3805 + t7058*t7400*t7414) + 0.1575*t7058*t7400*t7433 + 0.325*t7583*t7780 - 0.075*t8679*t8806 - 0.355*(-1.*t8679*t8806 + t10114*t8937) + 0.0641*(t10114*t8679 + t8806*t8937) - 0.075*t10114*t9164;
  p_output1[1]=0.075*t12126*t17437 + 0.075*t13941*t17651 - 0.0641*(t13941*t17437 + t11809*t17651) + 0.355*(t11809*t17437 - 1.*t13941*t17651) - 0.325*t11594*t11743*t3805*t7057 - 0.2255*t3805*t7057*t7351 - 0.1575*t3805*t7057*t7358 + 0.325*t3805*t7050*t7400 - 0.325*t3805*t7239*t7400 - 0.2255*t3805*t7057*t7414 - 0.1575*t3805*t7057*t7433 + 0.325*t3805*t6576*t7057*t7583 - 0.075*t16976*t8679 - 0.355*(-1.*t16976*t8679 + t15077*t8937) + 0.0641*(t15077*t8679 + t16976*t8937) - 0.075*t15077*t9164;
  p_output1[2]=0.2255*t17857 - 0.325*t11743*t17979 + 0.075*t11743*t12126*t17979 + 0.075*t13941*t17979*t7125 - 0.0641*(t11743*t13941*t17979 + t11809*t17979*t7125) + 0.355*(t11743*t11809*t17979 - 1.*t13941*t17979*t7125) - 0.1575*t11594*t3805*t7400 - 0.1575*t7058*t7414;
  p_output1[3]=0.075*t12126*t18374 + 0.075*t13941*t18486 - 0.0641*(t13941*t18374 + t11809*t18486) + 0.355*(t11809*t18374 - 1.*t13941*t18486) + 0.325*t11743*t3805*t7057 - 0.325*t17857*t7125;
  p_output1[4]=0.075*t11809*t18374 + 0.075*t13941*t18704 - 0.0641*(-1.*t13941*t18374 + t11809*t18704) + 0.355*(-1.*t11809*t18374 - 1.*t13941*t18704);
  p_output1[5]=0.2255*t19016 - 0.1575*t7058*t7351 - 0.1575*t3805*t6576*t7400 + 0.325*t18872*t7583 - 0.075*t18872*t6921*t8679 + 0.0641*(t18872*t7583*t8679 + t18872*t6921*t8937) - 0.355*(-1.*t18872*t6921*t8679 + t18872*t7583*t8937) - 0.075*t18872*t7583*t9164;
  p_output1[6]=0.325*t19016*t6921 - 0.325*t3805*t7057*t7583 - 0.075*t20431*t8679 - 0.355*(-1.*t20431*t8679 + t20064*t8937) + 0.0641*(t20064*t8679 + t20431*t8937) - 0.075*t20064*t9164;
  p_output1[7]=-0.075*t22124*t8679 - 0.075*t20064*t8937 - 0.355*(-1.*t22124*t8679 - 1.*t20064*t8937) + 0.0641*(-1.*t20064*t8679 + t22124*t8937);
  p_output1[8]=-0.325*t11743*t24046 + 0.075*t12126*t24251 + 0.075*t13941*t24423 - 0.0641*(t13941*t24251 + t11809*t24423) + 0.355*(t11809*t24251 - 1.*t13941*t24423) + 0.1575*t11594*t22665*t3805 + 0.1575*t22665*t3805*t6576 - 0.325*t22836*t7050 + 0.325*t22836*t7239 + 0.2255*(-1.*t22665*t3805*t6576 + t23095*t7351) + 0.1575*t23095*t7358 + 0.2255*(-1.*t11594*t22665*t3805 + t23095*t7414) + 0.1575*t23095*t7433 + 0.325*t23419*t7583 - 0.075*t23512*t8679 + 0.0641*(t23613*t8679 + t23512*t8937) - 0.355*(-1.*t23512*t8679 + t23613*t8937) - 0.075*t23613*t9164;
  p_output1[9]=-0.325*t11743*t26755 + 0.075*t12126*t27137 + 0.075*t13941*t27150 - 0.0641*(t13941*t27137 + t11809*t27150) + 0.355*(t11809*t27137 - 1.*t13941*t27150) - 0.325*t22814*t3805*t7050*t7057 - 0.1575*t11594*t22814*t7058 - 0.1575*t22814*t6576*t7058 + 0.325*t22814*t3805*t7057*t7239 - 0.1575*t22814*t3805*t7358*t7400 + 0.2255*(t22814*t6576*t7058 - 1.*t22814*t3805*t7351*t7400) + 0.2255*(t11594*t22814*t7058 - 1.*t22814*t3805*t7400*t7414) - 0.1575*t22814*t3805*t7400*t7433 + 0.325*t25713*t7583 - 0.075*t25777*t8679 + 0.0641*(t26030*t8679 + t25777*t8937) - 0.355*(-1.*t25777*t8679 + t26030*t8937) - 0.075*t26030*t9164;
  p_output1[10]=0.325*t11594*t11743*t27196 + 0.075*t12126*t27313 + 0.075*t13941*t27470 - 0.0641*(t13941*t27313 + t11809*t27470) + 0.355*(t11809*t27313 - 1.*t13941*t27470) - 0.325*t27216*t7050 + 0.325*t27216*t7239 + 0.2255*t27196*t7351 + 0.1575*t27196*t7358 + 0.2255*t27196*t7414 + 0.1575*t27196*t7433 - 0.325*t27196*t6576*t7583 - 0.075*t27257*t8679 - 0.355*(-1.*t27257*t8679 + t27238*t8937) + 0.0641*(t27238*t8679 + t27257*t8937) - 0.075*t27238*t9164;
  p_output1[11]=0.1575*t11594*t27216 + 0.2255*t27515 - 0.325*t11743*t27526 + 0.075*t11743*t12126*t27526 + 0.075*t13941*t27526*t7125 - 0.0641*(t11743*t13941*t27526 + t11809*t27526*t7125) + 0.355*(t11743*t11809*t27526 - 1.*t13941*t27526*t7125) + 0.1575*t22814*t3805*t7414;
  p_output1[12]=0.325*t11743*t27570 + 0.075*t12126*t27574 + 0.075*t13941*t27582 - 0.0641*(t13941*t27574 + t11809*t27582) + 0.355*(t11809*t27574 - 1.*t13941*t27582) - 0.325*t27515*t7125;
  p_output1[13]=0.075*t11809*t27574 + 0.075*t13941*t29503 - 0.0641*(-1.*t13941*t27574 + t11809*t29503) + 0.355*(-1.*t11809*t27574 - 1.*t13941*t29503);
  p_output1[14]=0.2255*t30897 + 0.1575*t27216*t6576 + 0.1575*t22814*t3805*t7351 + 0.325*t30413*t7583 - 0.075*t30413*t6921*t8679 + 0.0641*(t30413*t7583*t8679 + t30413*t6921*t8937) - 0.355*(-1.*t30413*t6921*t8679 + t30413*t7583*t8937) - 0.075*t30413*t7583*t9164;
  p_output1[15]=0.325*t30897*t6921 - 0.325*t27570*t7583 - 0.075*t31491*t8679 - 0.355*(-1.*t31491*t8679 + t31446*t8937) + 0.0641*(t31446*t8679 + t31491*t8937) - 0.075*t31446*t9164;
  p_output1[16]=-0.075*t32057*t8679 - 0.075*t31446*t8937 - 0.355*(-1.*t32057*t8679 - 1.*t31446*t8937) + 0.0641*(-1.*t31446*t8679 + t32057*t8937);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 17, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_step_distance_front_DiagonalStance.hh"

namespace DiagonalStance
{

void J_step_distance_front_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
