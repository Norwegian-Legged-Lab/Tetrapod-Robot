/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:27:57 GMT+01:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t36;
  double t16;
  double t66;
  double t38;
  double t49;
  double t64;
  double t68;
  double t69;
  double t24;
  double t26;
  double t81;
  double t89;
  double t110;
  double t267;
  double t254;
  double t189;
  double t195;
  double t206;
  double t209;
  double t223;
  double t234;
  double t237;
  double t281;
  double t284;
  double t286;
  double t365;
  double t154;
  double t176;
  double t188;
  double t350;
  double t357;
  double t358;
  double t367;
  double t369;
  double t378;
  double t387;
  double t391;
  double t393;
  double t437;
  double t454;
  double t458;
  double t460;
  double t493;
  double t562;
  double t564;
  double t577;
  double t616;
  double t626;
  double t639;
  double t660;
  double t662;
  double t674;
  double t325;
  double t758;
  double t780;
  double t784;
  double t792;
  double t809;
  double t811;
  double t814;
  double t816;
  double t839;
  double t843;
  double t848;
  double t855;
  double t872;
  double t875;
  double t899;
  double t911;
  double t307;
  double t317;
  double t323;
  double t238;
  double t287;
  double t298;
  double t76;
  double t145;
  double t148;
  double t300;
  double t330;
  double t332;
  double t1017;
  double t698;
  double t708;
  double t720;
  double t612;
  double t687;
  double t688;
  double t1030;
  double t373;
  double t450;
  double t469;
  double t474;
  double t693;
  double t733;
  double t738;
  double t953;
  double t963;
  double t992;
  double t870;
  double t930;
  double t950;
  double t788;
  double t810;
  double t827;
  double t834;
  double t951;
  double t999;
  double t1000;
  double t1018;
  double t1020;
  double t1024;
  double t1037;
  double t1044;
  double t1066;
  double t1090;
  double t1093;
  double t1103;
  double t1107;
  double t1108;
  double t1116;
  double t1136;
  double t1137;
  double t1147;
  double t1164;
  double t1169;
  double t1176;
  double t475;
  double t743;
  double t744;
  double t1449;
  double t1457;
  double t1469;
  double t1500;
  double t1501;
  double t1509;
  double t1520;
  double t1529;
  double t1532;
  double t1537;
  double t1541;
  double t1555;
  double t1561;
  double t1567;
  double t1568;
  double t1579;
  double t1582;
  double t1317;
  double t1384;
  double t1390;
  double t1395;
  double t1396;
  double t1411;
  double t1431;
  double t1525;
  double t1543;
  double t1584;
  double t1586;
  double t1594;
  double t1596;
  double t1607;
  double t1608;
  double t1612;
  double t1618;
  double t161;
  double t335;
  double t336;
  double t1647;
  double t1653;
  double t1659;
  double t1663;
  double t1387;
  double t1589;
  double t1623;
  double t1624;
  double t1681;
  double t1682;
  double t1690;
  double t1705;
  double t1707;
  double t1711;
  double t1724;
  double t1732;
  double t1739;
  double t1743;
  double t1751;
  double t1643;
  double t1668;
  double t1670;
  double t1737;
  double t1766;
  double t1773;
  double t1778;
  double t1782;
  double t1789;
  double t837;
  double t1004;
  double t1006;
  double t1679;
  double t1811;
  double t1846;
  double t1869;
  double t1945;
  double t1958;
  double t2037;
  double t2012;
  double t2156;
  double t2127;
  double t2082;
  double t2057;
  double t2439;
  double t2770;
  double t2784;
  double t2785;
  double t2788;
  double t2752;
  double t2756;
  double t2757;
  double t2763;
  double t2832;
  double t2840;
  double t2843;
  double t2860;
  double t2872;
  double t2875;
  double t2886;
  double t2952;
  double t2954;
  double t2957;
  double t2986;
  double t3003;
  double t3014;
  double t3023;
  t36 = Cos(var1[11]);
  t16 = Cos(var1[10]);
  t66 = -1. + t36;
  t38 = -1.*t36;
  t49 = 1. + t38;
  t64 = 1.6e-11*t49;
  t68 = 1.6e-11*t66;
  t69 = -1. + t64 + t68;
  t24 = -1.*t16;
  t26 = 1. + t24;
  t81 = 4.e-6*t66;
  t89 = -4.e-6*t36;
  t110 = t81 + t89;
  t267 = Sin(var1[10]);
  t254 = Cos(var1[9]);
  t189 = -1. + t16;
  t195 = 1.6e-11*t189;
  t206 = 1. + t195;
  t209 = t206*t69;
  t223 = 4.e-6*t26*t110;
  t234 = t209 + t223;
  t237 = Sin(var1[9]);
  t281 = 4.e-6*t69*t267;
  t284 = -1.*t110*t267;
  t286 = t281 + t284;
  t365 = Sin(var1[11]);
  t154 = Sin(var1[4]);
  t176 = Cos(var1[4]);
  t188 = Cos(var1[5]);
  t350 = -1.000000000016*t49;
  t357 = 1. + t350;
  t358 = 0.004352*t357;
  t367 = -0.9999910000159999*t365;
  t369 = t358 + t367;
  t378 = -1. + t64;
  t387 = 4.e-6*t378;
  t391 = 3.999964e-6*t49;
  t393 = -1.7408e-8*t365;
  t437 = t387 + t391 + t393;
  t454 = 0.999991*t36;
  t458 = 0.004352*t365;
  t460 = t68 + t454 + t458;
  t493 = -4.e-6*t267*t369;
  t562 = t206*t437;
  t564 = 4.e-6*t26*t460;
  t577 = 0. + t493 + t562 + t564;
  t616 = -1.000000000016*t26;
  t626 = 1. + t616;
  t639 = t626*t369;
  t660 = 4.e-6*t267*t437;
  t662 = -1.*t267*t460;
  t674 = 0. + t639 + t660 + t662;
  t325 = Sin(var1[5]);
  t758 = -1.7408e-8*t49;
  t780 = -3.999964e-6*t365;
  t784 = t758 + t780;
  t792 = 0.999991*t357;
  t809 = t792 + t458;
  t811 = -0.004352*t36;
  t814 = 0.999991*t365;
  t816 = t811 + t814;
  t839 = t206*t784;
  t843 = -4.e-6*t267*t809;
  t848 = 4.e-6*t26*t816;
  t855 = 0. + t839 + t843 + t848;
  t872 = 4.e-6*t267*t784;
  t875 = t626*t809;
  t899 = -1.*t267*t816;
  t911 = 0. + t872 + t875 + t899;
  t307 = t254*t234;
  t317 = t237*t286;
  t323 = t307 + t317;
  t238 = -1.*t234*t237;
  t287 = t254*t286;
  t298 = t238 + t287;
  t76 = 4.e-6*t26*t69;
  t145 = t16*t110;
  t148 = t76 + t145;
  t300 = t188*t298;
  t330 = -1.*t323*t325;
  t332 = t300 + t330;
  t1017 = Cos(var1[3]);
  t698 = t254*t577;
  t708 = t237*t674;
  t720 = 0. + t698 + t708;
  t612 = -1.*t237*t577;
  t687 = t254*t674;
  t688 = 0. + t612 + t687;
  t1030 = Sin(var1[3]);
  t373 = t267*t369;
  t450 = 4.e-6*t26*t437;
  t469 = t16*t460;
  t474 = 0. + t373 + t450 + t469;
  t693 = t188*t688;
  t733 = -1.*t720*t325;
  t738 = 0. + t693 + t733;
  t953 = t254*t855;
  t963 = t237*t911;
  t992 = 0. + t953 + t963;
  t870 = -1.*t237*t855;
  t930 = t254*t911;
  t950 = 0. + t870 + t930;
  t788 = 4.e-6*t26*t784;
  t810 = t267*t809;
  t827 = t16*t816;
  t834 = 0. + t788 + t810 + t827;
  t951 = t188*t950;
  t999 = -1.*t992*t325;
  t1000 = 0. + t951 + t999;
  t1018 = t188*t323;
  t1020 = t298*t325;
  t1024 = t1018 + t1020;
  t1037 = t148*t176;
  t1044 = -1.*t154*t332;
  t1066 = t1037 + t1044;
  t1090 = t188*t720;
  t1093 = t688*t325;
  t1103 = 0. + t1090 + t1093;
  t1107 = t176*t474;
  t1108 = -1.*t154*t738;
  t1116 = 0. + t1107 + t1108;
  t1136 = t188*t992;
  t1137 = t950*t325;
  t1147 = 0. + t1136 + t1137;
  t1164 = t176*t834;
  t1169 = -1.*t154*t1000;
  t1176 = 0. + t1164 + t1169;
  t475 = t474*t154;
  t743 = t176*t738;
  t744 = 0. + t475 + t743;
  t1449 = -1.26e-8*var1[11];
  t1457 = 1. + t68;
  t1469 = -0.14871*t1457;
  t1500 = -1.64779999997447e-7*t49;
  t1501 = -1.59556e-7*t66;
  t1509 = -1.199987999968e-6*t365;
  t1520 = t1449 + t1469 + t1500 + t1501 + t1509;
  t1529 = 0.803147*t357;
  t1532 = 0.50315000001605*t49;
  t1537 = 0.00130540515936178*t365;
  t1541 = t1529 + t1532 + t1537;
  t1555 = -5.04e-14*var1[11];
  t1561 = -0.03988959484*t49;
  t1567 = 6.38224e-13*t66;
  t1568 = -0.041195*t36;
  t1579 = 0.299996999992*t365;
  t1582 = t1555 + t1561 + t1567 + t1568 + t1579;
  t1317 = -1.*t254;
  t1384 = 1. + t1317;
  t1390 = -0.15121*t237;
  t1395 = -1.2484e-7*var1[10];
  t1396 = 2.479936e-18*t26;
  t1411 = -1.54996e-7*t189;
  t1431 = 1.124840000016e-6*t267;
  t1525 = t206*t1520;
  t1543 = -4.e-6*t267*t1541;
  t1584 = 4.e-6*t26*t1582;
  t1586 = t1395 + t1396 + t1411 + t1431 + t1525 + t1543 + t1584;
  t1594 = 0.281210000008499*t26;
  t1596 = -0.03874900000062*t267;
  t1607 = 4.e-6*t267*t1520;
  t1608 = t626*t1541;
  t1612 = -1.*t267*t1582;
  t1618 = t1594 + t1596 + t1607 + t1608 + t1612;
  t161 = t148*t154;
  t335 = t176*t332;
  t336 = t161 + t335;
  t1647 = 0.15121*t1384;
  t1653 = -1.*t237*t1586;
  t1659 = t254*t1618;
  t1663 = t1647 + t1390 + t1653 + t1659;
  t1387 = -0.15121*t1384;
  t1589 = t254*t1586;
  t1623 = t237*t1618;
  t1624 = t1387 + t1390 + t1589 + t1623;
  t1681 = -4.9936e-13*var1[10];
  t1682 = -0.038749*t26;
  t1690 = 6.19984e-13*t189;
  t1705 = -0.281210000004*t267;
  t1707 = 4.e-6*t26*t1520;
  t1711 = t267*t1541;
  t1724 = t16*t1582;
  t1732 = 0. + t1681 + t1682 + t1690 + t1705 + t1707 + t1711 + t1724;
  t1739 = t188*t1663;
  t1743 = -1.*t1624*t325;
  t1751 = 0. + t1739 + t1743;
  t1643 = t188*t1624;
  t1668 = t1663*t325;
  t1670 = 0. + t1643 + t1668;
  t1737 = t1732*t154;
  t1766 = t176*t1751;
  t1773 = 0. + t1737 + t1766;
  t1778 = t176*t1732;
  t1782 = -1.*t154*t1751;
  t1789 = 0. + t1778 + t1782;
  t837 = t834*t154;
  t1004 = t176*t1000;
  t1006 = 0. + t837 + t1004;
  t1679 = t1024*t1670;
  t1811 = -1.*t1103*t1670;
  t1846 = t1103*t1670;
  t1869 = -1.*t1670*t1147;
  t1945 = -1.*t1024*t1670;
  t1958 = t1670*t1147;
  t2037 = -1.*t474*t1732;
  t2012 = t148*t1732;
  t2156 = t1732*t834;
  t2127 = -1.*t148*t1732;
  t2082 = -1.*t1732*t834;
  t2057 = t474*t1732;
  t2439 = t1681 + t1682 + t1690 + t1705 + t1707 + t1711 + t1724;
  t2770 = t1520*t437;
  t2784 = t369*t1541;
  t2785 = t460*t1582;
  t2788 = t2770 + t2784 + t2785;
  t2752 = -1.*t784*t1520;
  t2756 = -1.*t1541*t809;
  t2757 = -1.*t1582*t816;
  t2763 = t2752 + t2756 + t2757;
  t2832 = t784*t1520;
  t2840 = t1541*t809;
  t2843 = t1582*t816;
  t2860 = t2832 + t2840 + t2843;
  t2872 = -1.*t69*t1520;
  t2875 = -1.*t110*t1582;
  t2886 = t2872 + t2875;
  t2952 = -1.*t1520*t437;
  t2954 = -1.*t369*t1541;
  t2957 = -1.*t460*t1582;
  t2986 = t2952 + t2954 + t2957;
  t3003 = t69*t1520;
  t3014 = t110*t1582;
  t3023 = t3003 + t3014;
  p_output1[0]=t1006*var2[0] + t744*var2[1] + t336*var2[2];
  p_output1[1]=(0. + t1017*t1147 - 1.*t1030*t1176)*var2[0] + (0. + t1017*t1103 - 1.*t1030*t1116)*var2[1] + (t1017*t1024 - 1.*t1030*t1066)*var2[2];
  p_output1[2]=(0. + t1030*t1147 + t1017*t1176)*var2[0] + (0. + t1030*t1103 + t1017*t1116)*var2[1] + (t1024*t1030 + t1017*t1066)*var2[2];
  p_output1[3]=((t1679 + t1066*t1789 + t1773*t336)*t744 + t336*(-1.*t1116*t1789 + t1811 - 1.*t1773*t744))*var2[0] + ((t1006*t1773 + t1176*t1789 + t1958)*t336 + t1006*(-1.*t1066*t1789 + t1945 - 1.*t1773*t336))*var2[1] + ((-1.*t1006*t1773 - 1.*t1176*t1789 + t1869)*t744 + t1006*(t1116*t1789 + t1846 + t1773*t744))*var2[2];
  p_output1[4]=(t1103*(t1679 + t2012 + t1751*t332) + t1024*(t1811 + t2037 - 1.*t1751*t738))*var2[0] + (t1024*(t1000*t1751 + t1958 + t2156) + t1147*(t1945 + t2127 - 1.*t1751*t332))*var2[1] + (t1103*(-1.*t1000*t1751 + t1869 + t2082) + t1147*(t1846 + t2057 + t1751*t738))*var2[2];
  p_output1[5]=((t2012 + t1663*t298 + t1624*t323)*t474 + t148*(t2037 - 1.*t1663*t688 - 1.*t1624*t720))*var2[0] + ((t2127 - 1.*t1663*t298 - 1.*t1624*t323)*t834 + t148*(t2156 + t1663*t950 + t1624*t992))*var2[1] + ((t2057 + t1663*t688 + t1624*t720)*t834 + t474*(t2082 - 1.*t1663*t950 - 1.*t1624*t992))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=((t1586*t234 + t148*t2439 + t1618*t286)*t474 + t148*(-1.*t2439*t474 - 1.*t1586*t577 - 1.*t1618*t674) - 0.15121*t855 - 0.15121*t911)*var2[0] + (-0.15121*t577 - 0.15121*t674 + (-1.*t1586*t234 - 1.*t148*t2439 - 1.*t1618*t286)*t834 + t148*(t2439*t834 + t1586*t855 + t1618*t911))*var2[1] + (-0.15121*t234 - 0.15121*t286 + (t2439*t474 + t1586*t577 + t1618*t674)*t834 + t474*(-1.*t2439*t834 - 1.*t1586*t855 - 1.*t1618*t911))*var2[2];
  p_output1[10]=(-1.*t3023*t437 + 4.e-6*(-1.*t110*t2986 - 1.*t3023*t460) - 1.*t2986*t69 + 1.e-6*t784 - 0.038749*t809 - 0.28121*t816)*var2[0] + (-0.038749*t369 + 1.e-6*t437 - 0.28121*t460 - 1.*t2860*t69 - 1.*t2886*t784 + 4.e-6*(-1.*t110*t2860 - 1.*t2886*t816))*var2[1] + (-0.28121*t110 - 1.*t2763*t437 + 1.e-6*t69 - 1.*t2788*t784 + 4.e-6*(-1.*t2763*t460 - 1.*t2788*t816))*var2[2];
  p_output1[11]=-1.9353204325022392e-7*var2[0] + 0.29999998115510645*var2[1] + 1.1914820871506078e-8*var2[2];
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fFrFoot_vec_DiagonalStance.hh"

namespace DiagonalStance
{

void fFrFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
