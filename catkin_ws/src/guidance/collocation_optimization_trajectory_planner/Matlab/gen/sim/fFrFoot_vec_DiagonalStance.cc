/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:10:48 GMT+01:00
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
  double t189;
  double t31;
  double t235;
  double t209;
  double t215;
  double t218;
  double t272;
  double t275;
  double t143;
  double t180;
  double t318;
  double t319;
  double t323;
  double t734;
  double t691;
  double t423;
  double t440;
  double t491;
  double t536;
  double t568;
  double t592;
  double t621;
  double t735;
  double t763;
  double t945;
  double t1375;
  double t331;
  double t355;
  double t356;
  double t1301;
  double t1368;
  double t1373;
  double t1380;
  double t1411;
  double t1449;
  double t1467;
  double t1481;
  double t1520;
  double t1553;
  double t1583;
  double t1600;
  double t1613;
  double t1647;
  double t1659;
  double t1670;
  double t1681;
  double t1692;
  double t1702;
  double t1704;
  double t1738;
  double t1757;
  double t1787;
  double t1137;
  double t1870;
  double t1873;
  double t1874;
  double t1934;
  double t1971;
  double t2026;
  double t2033;
  double t2036;
  double t2050;
  double t2051;
  double t2061;
  double t2082;
  double t2097;
  double t2102;
  double t2105;
  double t2116;
  double t1026;
  double t1081;
  double t1107;
  double t670;
  double t1002;
  double t1006;
  double t277;
  double t325;
  double t328;
  double t1018;
  double t1147;
  double t1158;
  double t2210;
  double t1798;
  double t1806;
  double t1809;
  double t1682;
  double t1794;
  double t1795;
  double t2224;
  double t1434;
  double t1576;
  double t1636;
  double t1640;
  double t1797;
  double t1811;
  double t1834;
  double t2148;
  double t2150;
  double t2162;
  double t2083;
  double t2120;
  double t2131;
  double t1887;
  double t1982;
  double t2038;
  double t2040;
  double t2135;
  double t2179;
  double t2191;
  double t2212;
  double t2221;
  double t2222;
  double t2225;
  double t2246;
  double t2249;
  double t2279;
  double t2280;
  double t2285;
  double t2294;
  double t2297;
  double t2299;
  double t2327;
  double t2331;
  double t2350;
  double t2356;
  double t2362;
  double t2364;
  double t1645;
  double t1837;
  double t1838;
  double t2580;
  double t2590;
  double t2606;
  double t2608;
  double t2610;
  double t2611;
  double t2626;
  double t2639;
  double t2641;
  double t2647;
  double t2648;
  double t2662;
  double t2664;
  double t2665;
  double t2666;
  double t2670;
  double t2676;
  double t2516;
  double t2526;
  double t2541;
  double t2542;
  double t2543;
  double t2550;
  double t2555;
  double t2633;
  double t2650;
  double t2682;
  double t2685;
  double t2687;
  double t2695;
  double t2696;
  double t2699;
  double t2701;
  double t2702;
  double t349;
  double t1189;
  double t1218;
  double t2714;
  double t2724;
  double t2727;
  double t2735;
  double t2540;
  double t2686;
  double t2704;
  double t2705;
  double t2748;
  double t2751;
  double t2752;
  double t2753;
  double t2764;
  double t2773;
  double t2787;
  double t2793;
  double t2798;
  double t2799;
  double t2804;
  double t2706;
  double t2739;
  double t2740;
  double t2795;
  double t2808;
  double t2812;
  double t2820;
  double t2825;
  double t2826;
  double t2045;
  double t2195;
  double t2197;
  double t2742;
  double t2833;
  double t2857;
  double t2865;
  double t2885;
  double t2899;
  double t2951;
  double t2927;
  double t3074;
  double t3061;
  double t3010;
  double t2991;
  double t3235;
  double t3459;
  double t3461;
  double t3471;
  double t3479;
  double t3438;
  double t3445;
  double t3446;
  double t3447;
  double t3500;
  double t3502;
  double t3503;
  double t3505;
  double t3512;
  double t3513;
  double t3517;
  double t3552;
  double t3555;
  double t3557;
  double t3558;
  double t3567;
  double t3569;
  double t3577;
  t189 = Cos(var1[11]);
  t31 = Cos(var1[10]);
  t235 = -1. + t189;
  t209 = -1.*t189;
  t215 = 1. + t209;
  t218 = 1.6e-11*t215;
  t272 = 1.6e-11*t235;
  t275 = -1. + t218 + t272;
  t143 = -1.*t31;
  t180 = 1. + t143;
  t318 = 4.e-6*t235;
  t319 = -4.e-6*t189;
  t323 = t318 + t319;
  t734 = Sin(var1[10]);
  t691 = Cos(var1[9]);
  t423 = -1. + t31;
  t440 = 1.6e-11*t423;
  t491 = 1. + t440;
  t536 = t491*t275;
  t568 = 4.e-6*t180*t323;
  t592 = t536 + t568;
  t621 = Sin(var1[9]);
  t735 = 4.e-6*t275*t734;
  t763 = -1.*t323*t734;
  t945 = t735 + t763;
  t1375 = Sin(var1[11]);
  t331 = Sin(var1[4]);
  t355 = Cos(var1[4]);
  t356 = Cos(var1[5]);
  t1301 = -1.000000000016*t215;
  t1368 = 1. + t1301;
  t1373 = 0.004352*t1368;
  t1380 = -0.9999910000159999*t1375;
  t1411 = t1373 + t1380;
  t1449 = -1. + t218;
  t1467 = 4.e-6*t1449;
  t1481 = 3.999964e-6*t215;
  t1520 = -1.7408e-8*t1375;
  t1553 = t1467 + t1481 + t1520;
  t1583 = 0.999991*t189;
  t1600 = 0.004352*t1375;
  t1613 = t272 + t1583 + t1600;
  t1647 = -4.e-6*t734*t1411;
  t1659 = t491*t1553;
  t1670 = 4.e-6*t180*t1613;
  t1681 = 0. + t1647 + t1659 + t1670;
  t1692 = -1.000000000016*t180;
  t1702 = 1. + t1692;
  t1704 = t1702*t1411;
  t1738 = 4.e-6*t734*t1553;
  t1757 = -1.*t734*t1613;
  t1787 = 0. + t1704 + t1738 + t1757;
  t1137 = Sin(var1[5]);
  t1870 = -1.7408e-8*t215;
  t1873 = -3.999964e-6*t1375;
  t1874 = t1870 + t1873;
  t1934 = 0.999991*t1368;
  t1971 = t1934 + t1600;
  t2026 = -0.004352*t189;
  t2033 = 0.999991*t1375;
  t2036 = t2026 + t2033;
  t2050 = t491*t1874;
  t2051 = -4.e-6*t734*t1971;
  t2061 = 4.e-6*t180*t2036;
  t2082 = 0. + t2050 + t2051 + t2061;
  t2097 = 4.e-6*t734*t1874;
  t2102 = t1702*t1971;
  t2105 = -1.*t734*t2036;
  t2116 = 0. + t2097 + t2102 + t2105;
  t1026 = t691*t592;
  t1081 = t621*t945;
  t1107 = t1026 + t1081;
  t670 = -1.*t592*t621;
  t1002 = t691*t945;
  t1006 = t670 + t1002;
  t277 = 4.e-6*t180*t275;
  t325 = t31*t323;
  t328 = t277 + t325;
  t1018 = t356*t1006;
  t1147 = -1.*t1107*t1137;
  t1158 = t1018 + t1147;
  t2210 = Cos(var1[3]);
  t1798 = t691*t1681;
  t1806 = t621*t1787;
  t1809 = 0. + t1798 + t1806;
  t1682 = -1.*t621*t1681;
  t1794 = t691*t1787;
  t1795 = 0. + t1682 + t1794;
  t2224 = Sin(var1[3]);
  t1434 = t734*t1411;
  t1576 = 4.e-6*t180*t1553;
  t1636 = t31*t1613;
  t1640 = 0. + t1434 + t1576 + t1636;
  t1797 = t356*t1795;
  t1811 = -1.*t1809*t1137;
  t1834 = 0. + t1797 + t1811;
  t2148 = t691*t2082;
  t2150 = t621*t2116;
  t2162 = 0. + t2148 + t2150;
  t2083 = -1.*t621*t2082;
  t2120 = t691*t2116;
  t2131 = 0. + t2083 + t2120;
  t1887 = 4.e-6*t180*t1874;
  t1982 = t734*t1971;
  t2038 = t31*t2036;
  t2040 = 0. + t1887 + t1982 + t2038;
  t2135 = t356*t2131;
  t2179 = -1.*t2162*t1137;
  t2191 = 0. + t2135 + t2179;
  t2212 = t356*t1107;
  t2221 = t1006*t1137;
  t2222 = t2212 + t2221;
  t2225 = t328*t355;
  t2246 = -1.*t331*t1158;
  t2249 = t2225 + t2246;
  t2279 = t356*t1809;
  t2280 = t1795*t1137;
  t2285 = 0. + t2279 + t2280;
  t2294 = t355*t1640;
  t2297 = -1.*t331*t1834;
  t2299 = 0. + t2294 + t2297;
  t2327 = t356*t2162;
  t2331 = t2131*t1137;
  t2350 = 0. + t2327 + t2331;
  t2356 = t355*t2040;
  t2362 = -1.*t331*t2191;
  t2364 = 0. + t2356 + t2362;
  t1645 = t1640*t331;
  t1837 = t355*t1834;
  t1838 = 0. + t1645 + t1837;
  t2580 = -1.26e-8*var1[11];
  t2590 = 1. + t272;
  t2606 = -0.14871*t2590;
  t2608 = -1.64779999997447e-7*t215;
  t2610 = -1.59556e-7*t235;
  t2611 = -1.199987999968e-6*t1375;
  t2626 = t2580 + t2606 + t2608 + t2610 + t2611;
  t2639 = 0.803147*t1368;
  t2641 = 0.50315000001605*t215;
  t2647 = 0.00130540515936178*t1375;
  t2648 = t2639 + t2641 + t2647;
  t2662 = -5.04e-14*var1[11];
  t2664 = -0.03988959484*t215;
  t2665 = 6.38224e-13*t235;
  t2666 = -0.041195*t189;
  t2670 = 0.299996999992*t1375;
  t2676 = t2662 + t2664 + t2665 + t2666 + t2670;
  t2516 = -1.*t691;
  t2526 = 1. + t2516;
  t2541 = -0.15121*t621;
  t2542 = -1.2484e-7*var1[10];
  t2543 = 2.479936e-18*t180;
  t2550 = -1.54996e-7*t423;
  t2555 = 1.124840000016e-6*t734;
  t2633 = t491*t2626;
  t2650 = -4.e-6*t734*t2648;
  t2682 = 4.e-6*t180*t2676;
  t2685 = t2542 + t2543 + t2550 + t2555 + t2633 + t2650 + t2682;
  t2687 = 0.281210000008499*t180;
  t2695 = -0.03874900000062*t734;
  t2696 = 4.e-6*t734*t2626;
  t2699 = t1702*t2648;
  t2701 = -1.*t734*t2676;
  t2702 = t2687 + t2695 + t2696 + t2699 + t2701;
  t349 = t328*t331;
  t1189 = t355*t1158;
  t1218 = t349 + t1189;
  t2714 = 0.15121*t2526;
  t2724 = -1.*t621*t2685;
  t2727 = t691*t2702;
  t2735 = t2714 + t2541 + t2724 + t2727;
  t2540 = -0.15121*t2526;
  t2686 = t691*t2685;
  t2704 = t621*t2702;
  t2705 = t2540 + t2541 + t2686 + t2704;
  t2748 = -4.9936e-13*var1[10];
  t2751 = -0.038749*t180;
  t2752 = 6.19984e-13*t423;
  t2753 = -0.281210000004*t734;
  t2764 = 4.e-6*t180*t2626;
  t2773 = t734*t2648;
  t2787 = t31*t2676;
  t2793 = 0. + t2748 + t2751 + t2752 + t2753 + t2764 + t2773 + t2787;
  t2798 = t356*t2735;
  t2799 = -1.*t2705*t1137;
  t2804 = 0. + t2798 + t2799;
  t2706 = t356*t2705;
  t2739 = t2735*t1137;
  t2740 = 0. + t2706 + t2739;
  t2795 = t2793*t331;
  t2808 = t355*t2804;
  t2812 = 0. + t2795 + t2808;
  t2820 = t355*t2793;
  t2825 = -1.*t331*t2804;
  t2826 = 0. + t2820 + t2825;
  t2045 = t2040*t331;
  t2195 = t355*t2191;
  t2197 = 0. + t2045 + t2195;
  t2742 = t2222*t2740;
  t2833 = -1.*t2285*t2740;
  t2857 = t2285*t2740;
  t2865 = -1.*t2740*t2350;
  t2885 = -1.*t2222*t2740;
  t2899 = t2740*t2350;
  t2951 = -1.*t1640*t2793;
  t2927 = t328*t2793;
  t3074 = t2793*t2040;
  t3061 = -1.*t328*t2793;
  t3010 = -1.*t2793*t2040;
  t2991 = t1640*t2793;
  t3235 = t2748 + t2751 + t2752 + t2753 + t2764 + t2773 + t2787;
  t3459 = t2626*t1553;
  t3461 = t1411*t2648;
  t3471 = t1613*t2676;
  t3479 = t3459 + t3461 + t3471;
  t3438 = -1.*t1874*t2626;
  t3445 = -1.*t2648*t1971;
  t3446 = -1.*t2676*t2036;
  t3447 = t3438 + t3445 + t3446;
  t3500 = t1874*t2626;
  t3502 = t2648*t1971;
  t3503 = t2676*t2036;
  t3505 = t3500 + t3502 + t3503;
  t3512 = -1.*t275*t2626;
  t3513 = -1.*t323*t2676;
  t3517 = t3512 + t3513;
  t3552 = -1.*t2626*t1553;
  t3555 = -1.*t1411*t2648;
  t3557 = -1.*t1613*t2676;
  t3558 = t3552 + t3555 + t3557;
  t3567 = t275*t2626;
  t3569 = t323*t2676;
  t3577 = t3567 + t3569;
  p_output1[0]=t2197*var2[0] + t1838*var2[1] + t1218*var2[2];
  p_output1[1]=(0. + t2210*t2350 - 1.*t2224*t2364)*var2[0] + (0. + t2210*t2285 - 1.*t2224*t2299)*var2[1] + (t2210*t2222 - 1.*t2224*t2249)*var2[2];
  p_output1[2]=(0. + t2224*t2350 + t2210*t2364)*var2[0] + (0. + t2224*t2285 + t2210*t2299)*var2[1] + (t2222*t2224 + t2210*t2249)*var2[2];
  p_output1[3]=(t1838*(t2742 + t1218*t2812 + t2249*t2826) + t1218*(-1.*t1838*t2812 - 1.*t2299*t2826 + t2833))*var2[0] + (t2197*(-1.*t1218*t2812 - 1.*t2249*t2826 + t2885) + t1218*(t2197*t2812 + t2364*t2826 + t2899))*var2[1] + (t2197*(t1838*t2812 + t2299*t2826 + t2857) + t1838*(-1.*t2197*t2812 - 1.*t2364*t2826 + t2865))*var2[2];
  p_output1[4]=(t2285*(t2742 + t1158*t2804 + t2927) + t2222*(-1.*t1834*t2804 + t2833 + t2951))*var2[0] + (t2350*(-1.*t1158*t2804 + t2885 + t3061) + t2222*(t2191*t2804 + t2899 + t3074))*var2[1] + (t2350*(t1834*t2804 + t2857 + t2991) + t2285*(-1.*t2191*t2804 + t2865 + t3010))*var2[2];
  p_output1[5]=(t1640*(t1107*t2705 + t1006*t2735 + t2927) + (-1.*t1809*t2705 - 1.*t1795*t2735 + t2951)*t328)*var2[0] + (t2040*(-1.*t1107*t2705 - 1.*t1006*t2735 + t3061) + (t2162*t2705 + t2131*t2735 + t3074)*t328)*var2[1] + (t2040*(t1809*t2705 + t1795*t2735 + t2991) + t1640*(-1.*t2162*t2705 - 1.*t2131*t2735 + t3010))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-0.15121*t2082 - 0.15121*t2116 + (-1.*t1681*t2685 - 1.*t1787*t2702 - 1.*t1640*t3235)*t328 + t1640*(t3235*t328 + t2685*t592 + t2702*t945))*var2[0] + (-0.15121*t1681 - 0.15121*t1787 + (t2082*t2685 + t2116*t2702 + t2040*t3235)*t328 + t2040*(-1.*t3235*t328 - 1.*t2685*t592 - 1.*t2702*t945))*var2[1] + (t2040*(t1681*t2685 + t1787*t2702 + t1640*t3235) + t1640*(-1.*t2082*t2685 - 1.*t2116*t2702 - 1.*t2040*t3235) - 0.15121*t592 - 0.15121*t945)*var2[2];
  p_output1[10]=(1.e-6*t1874 - 0.038749*t1971 - 0.28121*t2036 - 1.*t275*t3558 - 1.*t1553*t3577 + 4.e-6*(-1.*t323*t3558 - 1.*t1613*t3577))*var2[0] + (-0.038749*t1411 + 1.e-6*t1553 - 0.28121*t1613 - 1.*t275*t3505 - 1.*t1874*t3517 + 4.e-6*(-1.*t323*t3505 - 1.*t2036*t3517))*var2[1] + (1.e-6*t275 - 0.28121*t323 - 1.*t1553*t3447 - 1.*t1874*t3479 + 4.e-6*(-1.*t1613*t3447 - 1.*t2036*t3479))*var2[2];
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

namespace SymFunction
{

void fFrFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
