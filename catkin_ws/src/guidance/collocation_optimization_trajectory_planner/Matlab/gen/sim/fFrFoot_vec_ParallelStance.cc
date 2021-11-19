/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:11:03 GMT+01:00
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
  double t147;
  double t18;
  double t221;
  double t155;
  double t177;
  double t178;
  double t232;
  double t262;
  double t80;
  double t127;
  double t304;
  double t335;
  double t419;
  double t1089;
  double t1074;
  double t797;
  double t857;
  double t954;
  double t970;
  double t990;
  double t991;
  double t1027;
  double t1091;
  double t1101;
  double t1146;
  double t1420;
  double t552;
  double t683;
  double t702;
  double t1381;
  double t1404;
  double t1416;
  double t1439;
  double t1459;
  double t1472;
  double t1475;
  double t1491;
  double t1510;
  double t1516;
  double t1533;
  double t1545;
  double t1559;
  double t1766;
  double t1770;
  double t1774;
  double t1775;
  double t1799;
  double t1813;
  double t1819;
  double t1830;
  double t1839;
  double t1853;
  double t1245;
  double t1980;
  double t1990;
  double t1993;
  double t2012;
  double t2019;
  double t2026;
  double t2034;
  double t2045;
  double t2078;
  double t2097;
  double t2105;
  double t2110;
  double t2115;
  double t2129;
  double t2134;
  double t2138;
  double t1209;
  double t1217;
  double t1241;
  double t1067;
  double t1149;
  double t1193;
  double t287;
  double t453;
  double t504;
  double t1196;
  double t1272;
  double t1279;
  double t2205;
  double t1891;
  double t1893;
  double t1899;
  double t1796;
  double t1856;
  double t1868;
  double t2260;
  double t1465;
  double t1526;
  double t1644;
  double t1710;
  double t1886;
  double t1936;
  double t1957;
  double t2156;
  double t2164;
  double t2169;
  double t2114;
  double t2141;
  double t2147;
  double t2002;
  double t2020;
  double t2046;
  double t2047;
  double t2155;
  double t2173;
  double t2178;
  double t2214;
  double t2237;
  double t2238;
  double t2270;
  double t2272;
  double t2286;
  double t2334;
  double t2337;
  double t2351;
  double t2370;
  double t2373;
  double t2390;
  double t2417;
  double t2418;
  double t2420;
  double t2437;
  double t2441;
  double t2453;
  double t1754;
  double t1960;
  double t1963;
  double t2616;
  double t2617;
  double t2622;
  double t2627;
  double t2628;
  double t2637;
  double t2645;
  double t2656;
  double t2657;
  double t2658;
  double t2659;
  double t2672;
  double t2677;
  double t2678;
  double t2681;
  double t2684;
  double t2692;
  double t2592;
  double t2598;
  double t2601;
  double t2608;
  double t2609;
  double t2610;
  double t2614;
  double t2654;
  double t2669;
  double t2693;
  double t2695;
  double t2708;
  double t2714;
  double t2716;
  double t2717;
  double t2723;
  double t2725;
  double t572;
  double t1280;
  double t1301;
  double t2757;
  double t2762;
  double t2775;
  double t2786;
  double t2600;
  double t2704;
  double t2745;
  double t2749;
  double t2814;
  double t2822;
  double t2825;
  double t2837;
  double t2840;
  double t2845;
  double t2849;
  double t2851;
  double t2863;
  double t2869;
  double t2872;
  double t2753;
  double t2797;
  double t2800;
  double t2856;
  double t2878;
  double t2879;
  double t2891;
  double t2895;
  double t2896;
  double t2055;
  double t2186;
  double t2194;
  double t2809;
  double t2916;
  double t2944;
  double t2970;
  double t2987;
  double t3015;
  double t3064;
  double t3043;
  double t3141;
  double t3129;
  double t3116;
  double t3087;
  double t3264;
  double t3465;
  double t3469;
  double t3470;
  double t3473;
  double t3446;
  double t3450;
  double t3458;
  double t3462;
  double t3496;
  double t3498;
  double t3504;
  double t3506;
  double t3511;
  double t3516;
  double t3517;
  double t3568;
  double t3569;
  double t3570;
  double t3573;
  double t3584;
  double t3596;
  double t3602;
  t147 = Cos(var1[11]);
  t18 = Cos(var1[10]);
  t221 = -1. + t147;
  t155 = -1.*t147;
  t177 = 1. + t155;
  t178 = 1.6e-11*t177;
  t232 = 1.6e-11*t221;
  t262 = -1. + t178 + t232;
  t80 = -1.*t18;
  t127 = 1. + t80;
  t304 = 4.e-6*t221;
  t335 = -4.e-6*t147;
  t419 = t304 + t335;
  t1089 = Sin(var1[10]);
  t1074 = Cos(var1[9]);
  t797 = -1. + t18;
  t857 = 1.6e-11*t797;
  t954 = 1. + t857;
  t970 = t954*t262;
  t990 = 4.e-6*t127*t419;
  t991 = t970 + t990;
  t1027 = Sin(var1[9]);
  t1091 = 4.e-6*t262*t1089;
  t1101 = -1.*t419*t1089;
  t1146 = t1091 + t1101;
  t1420 = Sin(var1[11]);
  t552 = Sin(var1[4]);
  t683 = Cos(var1[4]);
  t702 = Cos(var1[5]);
  t1381 = -1.000000000016*t177;
  t1404 = 1. + t1381;
  t1416 = 0.004352*t1404;
  t1439 = -0.9999910000159999*t1420;
  t1459 = t1416 + t1439;
  t1472 = -1. + t178;
  t1475 = 4.e-6*t1472;
  t1491 = 3.999964e-6*t177;
  t1510 = -1.7408e-8*t1420;
  t1516 = t1475 + t1491 + t1510;
  t1533 = 0.999991*t147;
  t1545 = 0.004352*t1420;
  t1559 = t232 + t1533 + t1545;
  t1766 = -4.e-6*t1089*t1459;
  t1770 = t954*t1516;
  t1774 = 4.e-6*t127*t1559;
  t1775 = 0. + t1766 + t1770 + t1774;
  t1799 = -1.000000000016*t127;
  t1813 = 1. + t1799;
  t1819 = t1813*t1459;
  t1830 = 4.e-6*t1089*t1516;
  t1839 = -1.*t1089*t1559;
  t1853 = 0. + t1819 + t1830 + t1839;
  t1245 = Sin(var1[5]);
  t1980 = -1.7408e-8*t177;
  t1990 = -3.999964e-6*t1420;
  t1993 = t1980 + t1990;
  t2012 = 0.999991*t1404;
  t2019 = t2012 + t1545;
  t2026 = -0.004352*t147;
  t2034 = 0.999991*t1420;
  t2045 = t2026 + t2034;
  t2078 = t954*t1993;
  t2097 = -4.e-6*t1089*t2019;
  t2105 = 4.e-6*t127*t2045;
  t2110 = 0. + t2078 + t2097 + t2105;
  t2115 = 4.e-6*t1089*t1993;
  t2129 = t1813*t2019;
  t2134 = -1.*t1089*t2045;
  t2138 = 0. + t2115 + t2129 + t2134;
  t1209 = t1074*t991;
  t1217 = t1027*t1146;
  t1241 = t1209 + t1217;
  t1067 = -1.*t991*t1027;
  t1149 = t1074*t1146;
  t1193 = t1067 + t1149;
  t287 = 4.e-6*t127*t262;
  t453 = t18*t419;
  t504 = t287 + t453;
  t1196 = t702*t1193;
  t1272 = -1.*t1241*t1245;
  t1279 = t1196 + t1272;
  t2205 = Cos(var1[3]);
  t1891 = t1074*t1775;
  t1893 = t1027*t1853;
  t1899 = 0. + t1891 + t1893;
  t1796 = -1.*t1027*t1775;
  t1856 = t1074*t1853;
  t1868 = 0. + t1796 + t1856;
  t2260 = Sin(var1[3]);
  t1465 = t1089*t1459;
  t1526 = 4.e-6*t127*t1516;
  t1644 = t18*t1559;
  t1710 = 0. + t1465 + t1526 + t1644;
  t1886 = t702*t1868;
  t1936 = -1.*t1899*t1245;
  t1957 = 0. + t1886 + t1936;
  t2156 = t1074*t2110;
  t2164 = t1027*t2138;
  t2169 = 0. + t2156 + t2164;
  t2114 = -1.*t1027*t2110;
  t2141 = t1074*t2138;
  t2147 = 0. + t2114 + t2141;
  t2002 = 4.e-6*t127*t1993;
  t2020 = t1089*t2019;
  t2046 = t18*t2045;
  t2047 = 0. + t2002 + t2020 + t2046;
  t2155 = t702*t2147;
  t2173 = -1.*t2169*t1245;
  t2178 = 0. + t2155 + t2173;
  t2214 = t702*t1241;
  t2237 = t1193*t1245;
  t2238 = t2214 + t2237;
  t2270 = t504*t683;
  t2272 = -1.*t552*t1279;
  t2286 = t2270 + t2272;
  t2334 = t702*t1899;
  t2337 = t1868*t1245;
  t2351 = 0. + t2334 + t2337;
  t2370 = t683*t1710;
  t2373 = -1.*t552*t1957;
  t2390 = 0. + t2370 + t2373;
  t2417 = t702*t2169;
  t2418 = t2147*t1245;
  t2420 = 0. + t2417 + t2418;
  t2437 = t683*t2047;
  t2441 = -1.*t552*t2178;
  t2453 = 0. + t2437 + t2441;
  t1754 = t1710*t552;
  t1960 = t683*t1957;
  t1963 = 0. + t1754 + t1960;
  t2616 = -1.26e-8*var1[11];
  t2617 = 1. + t232;
  t2622 = -0.14871*t2617;
  t2627 = -1.64779999997447e-7*t177;
  t2628 = -1.59556e-7*t221;
  t2637 = -1.199987999968e-6*t1420;
  t2645 = t2616 + t2622 + t2627 + t2628 + t2637;
  t2656 = 0.803147*t1404;
  t2657 = 0.50315000001605*t177;
  t2658 = 0.00130540515936178*t1420;
  t2659 = t2656 + t2657 + t2658;
  t2672 = -5.04e-14*var1[11];
  t2677 = -0.03988959484*t177;
  t2678 = 6.38224e-13*t221;
  t2681 = -0.041195*t147;
  t2684 = 0.299996999992*t1420;
  t2692 = t2672 + t2677 + t2678 + t2681 + t2684;
  t2592 = -1.*t1074;
  t2598 = 1. + t2592;
  t2601 = -0.15121*t1027;
  t2608 = -1.2484e-7*var1[10];
  t2609 = 2.479936e-18*t127;
  t2610 = -1.54996e-7*t797;
  t2614 = 1.124840000016e-6*t1089;
  t2654 = t954*t2645;
  t2669 = -4.e-6*t1089*t2659;
  t2693 = 4.e-6*t127*t2692;
  t2695 = t2608 + t2609 + t2610 + t2614 + t2654 + t2669 + t2693;
  t2708 = 0.281210000008499*t127;
  t2714 = -0.03874900000062*t1089;
  t2716 = 4.e-6*t1089*t2645;
  t2717 = t1813*t2659;
  t2723 = -1.*t1089*t2692;
  t2725 = t2708 + t2714 + t2716 + t2717 + t2723;
  t572 = t504*t552;
  t1280 = t683*t1279;
  t1301 = t572 + t1280;
  t2757 = 0.15121*t2598;
  t2762 = -1.*t1027*t2695;
  t2775 = t1074*t2725;
  t2786 = t2757 + t2601 + t2762 + t2775;
  t2600 = -0.15121*t2598;
  t2704 = t1074*t2695;
  t2745 = t1027*t2725;
  t2749 = t2600 + t2601 + t2704 + t2745;
  t2814 = -4.9936e-13*var1[10];
  t2822 = -0.038749*t127;
  t2825 = 6.19984e-13*t797;
  t2837 = -0.281210000004*t1089;
  t2840 = 4.e-6*t127*t2645;
  t2845 = t1089*t2659;
  t2849 = t18*t2692;
  t2851 = 0. + t2814 + t2822 + t2825 + t2837 + t2840 + t2845 + t2849;
  t2863 = t702*t2786;
  t2869 = -1.*t2749*t1245;
  t2872 = 0. + t2863 + t2869;
  t2753 = t702*t2749;
  t2797 = t2786*t1245;
  t2800 = 0. + t2753 + t2797;
  t2856 = t2851*t552;
  t2878 = t683*t2872;
  t2879 = 0. + t2856 + t2878;
  t2891 = t683*t2851;
  t2895 = -1.*t552*t2872;
  t2896 = 0. + t2891 + t2895;
  t2055 = t2047*t552;
  t2186 = t683*t2178;
  t2194 = 0. + t2055 + t2186;
  t2809 = t2238*t2800;
  t2916 = -1.*t2351*t2800;
  t2944 = t2351*t2800;
  t2970 = -1.*t2800*t2420;
  t2987 = -1.*t2238*t2800;
  t3015 = t2800*t2420;
  t3064 = -1.*t1710*t2851;
  t3043 = t504*t2851;
  t3141 = t2851*t2047;
  t3129 = -1.*t504*t2851;
  t3116 = -1.*t2851*t2047;
  t3087 = t1710*t2851;
  t3264 = t2814 + t2822 + t2825 + t2837 + t2840 + t2845 + t2849;
  t3465 = t2645*t1516;
  t3469 = t1459*t2659;
  t3470 = t1559*t2692;
  t3473 = t3465 + t3469 + t3470;
  t3446 = -1.*t1993*t2645;
  t3450 = -1.*t2659*t2019;
  t3458 = -1.*t2692*t2045;
  t3462 = t3446 + t3450 + t3458;
  t3496 = t1993*t2645;
  t3498 = t2659*t2019;
  t3504 = t2692*t2045;
  t3506 = t3496 + t3498 + t3504;
  t3511 = -1.*t262*t2645;
  t3516 = -1.*t419*t2692;
  t3517 = t3511 + t3516;
  t3568 = -1.*t2645*t1516;
  t3569 = -1.*t1459*t2659;
  t3570 = -1.*t1559*t2692;
  t3573 = t3568 + t3569 + t3570;
  t3584 = t262*t2645;
  t3596 = t419*t2692;
  t3602 = t3584 + t3596;
  p_output1[0]=t2194*var2[0] + t1963*var2[1] + t1301*var2[2];
  p_output1[1]=(0. + t2205*t2420 - 1.*t2260*t2453)*var2[0] + (0. + t2205*t2351 - 1.*t2260*t2390)*var2[1] + (t2205*t2238 - 1.*t2260*t2286)*var2[2];
  p_output1[2]=(0. + t2260*t2420 + t2205*t2453)*var2[0] + (0. + t2260*t2351 + t2205*t2390)*var2[1] + (t2238*t2260 + t2205*t2286)*var2[2];
  p_output1[3]=(t1963*(t2809 + t1301*t2879 + t2286*t2896) + t1301*(-1.*t1963*t2879 - 1.*t2390*t2896 + t2916))*var2[0] + (t2194*(-1.*t1301*t2879 - 1.*t2286*t2896 + t2987) + t1301*(t2194*t2879 + t2453*t2896 + t3015))*var2[1] + (t2194*(t1963*t2879 + t2390*t2896 + t2944) + t1963*(-1.*t2194*t2879 - 1.*t2453*t2896 + t2970))*var2[2];
  p_output1[4]=(t2351*(t2809 + t1279*t2872 + t3043) + t2238*(-1.*t1957*t2872 + t2916 + t3064))*var2[0] + (t2420*(-1.*t1279*t2872 + t2987 + t3129) + t2238*(t2178*t2872 + t3015 + t3141))*var2[1] + (t2420*(t1957*t2872 + t2944 + t3087) + t2351*(-1.*t2178*t2872 + t2970 + t3116))*var2[2];
  p_output1[5]=(t1710*(t1241*t2749 + t1193*t2786 + t3043) + (-1.*t1899*t2749 - 1.*t1868*t2786 + t3064)*t504)*var2[0] + (t2047*(-1.*t1241*t2749 - 1.*t1193*t2786 + t3129) + (t2169*t2749 + t2147*t2786 + t3141)*t504)*var2[1] + (t2047*(t1899*t2749 + t1868*t2786 + t3087) + t1710*(-1.*t2169*t2749 - 1.*t2147*t2786 + t3116))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-0.15121*t2110 - 0.15121*t2138 + (-1.*t1775*t2695 - 1.*t1853*t2725 - 1.*t1710*t3264)*t504 + t1710*(t1146*t2725 + t3264*t504 + t2695*t991))*var2[0] + (-0.15121*t1775 - 0.15121*t1853 + (t2110*t2695 + t2138*t2725 + t2047*t3264)*t504 + t2047*(-1.*t1146*t2725 - 1.*t3264*t504 - 1.*t2695*t991))*var2[1] + (-0.15121*t1146 + t2047*(t1775*t2695 + t1853*t2725 + t1710*t3264) + t1710*(-1.*t2110*t2695 - 1.*t2138*t2725 - 1.*t2047*t3264) - 0.15121*t991)*var2[2];
  p_output1[10]=(1.e-6*t1993 - 0.038749*t2019 - 0.28121*t2045 - 1.*t262*t3573 - 1.*t1516*t3602 + 4.e-6*(-1.*t1559*t3602 - 1.*t3573*t419))*var2[0] + (-0.038749*t1459 + 1.e-6*t1516 - 0.28121*t1559 - 1.*t262*t3506 - 1.*t1993*t3517 + 4.e-6*(-1.*t2045*t3517 - 1.*t3506*t419))*var2[1] + (1.e-6*t262 - 1.*t1516*t3462 - 1.*t1993*t3473 + 4.e-6*(-1.*t1559*t3462 - 1.*t2045*t3473) - 0.28121*t419)*var2[2];
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

#include "fFrFoot_vec_ParallelStance.hh"

namespace SymFunction
{

void fFrFoot_vec_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
