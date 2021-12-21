/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:10:12 GMT+01:00
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
  double t628;
  double t671;
  double t847;
  double t1610;
  double t1716;
  double t1754;
  double t1767;
  double t1781;
  double t1782;
  double t1794;
  double t1854;
  double t1835;
  double t1837;
  double t1857;
  double t1637;
  double t1638;
  double t1843;
  double t1861;
  double t1867;
  double t1897;
  double t1903;
  double t1910;
  double t1946;
  double t1551;
  double t2169;
  double t2170;
  double t2171;
  double t2179;
  double t212;
  double t2099;
  double t1992;
  double t2005;
  double t2029;
  double t2149;
  double t2150;
  double t2153;
  double t2229;
  double t1653;
  double t2255;
  double t1626;
  double t2177;
  double t2372;
  double t2376;
  double t2407;
  double t1969;
  double t2282;
  double t1948;
  double t2429;
  double t2263;
  double t2270;
  double t2293;
  double t2296;
  double t2300;
  double t2308;
  double t2312;
  double t2318;
  double t2441;
  double t2396;
  double t2404;
  double t2405;
  double t2411;
  double t2412;
  double t2417;
  double t2420;
  double t2423;
  double t2447;
  double t2449;
  double t2451;
  double t2452;
  double t2456;
  double t2457;
  double t2458;
  double t2462;
  double t2331;
  double t2490;
  double t2377;
  double t2549;
  double t2478;
  double t2191;
  double t1808;
  double t1813;
  double t324;
  double t1352;
  double t1631;
  double t1636;
  double t1654;
  double t1681;
  double t1684;
  double t1871;
  double t1878;
  double t1939;
  double t1942;
  double t1953;
  double t1954;
  double t1980;
  double t1983;
  double t1989;
  double t2056;
  double t2068;
  double t2102;
  double t2114;
  double t2121;
  double t2132;
  double t2134;
  double t2165;
  double t2173;
  double t2193;
  double t2216;
  double t2241;
  double t2243;
  double t2245;
  double t2612;
  double t2613;
  double t2621;
  double t2652;
  double t2664;
  double t2666;
  double t2327;
  double t2329;
  double t2366;
  double t2368;
  double t2380;
  double t2390;
  double t2392;
  double t2427;
  double t2428;
  double t2430;
  double t2440;
  double t2442;
  double t2444;
  double t2445;
  double t2481;
  double t2687;
  double t2688;
  double t2705;
  double t2707;
  double t2497;
  double t2709;
  double t2710;
  double t2712;
  double t2715;
  double t2511;
  double t2515;
  double t2718;
  double t2723;
  double t2724;
  double t2725;
  double t2552;
  double t2557;
  double t2558;
  double t2564;
  double t2574;
  double t2575;
  double t2580;
  double t2589;
  double t2774;
  double t2776;
  double t2777;
  double t2785;
  double t2786;
  double t2787;
  double t2790;
  double t2796;
  double t2797;
  double t2809;
  double t2811;
  double t2826;
  double t2844;
  double t2849;
  double t2851;
  double t2866;
  double t2875;
  double t2883;
  double t2893;
  double t2901;
  double t2905;
  double t2970;
  double t2972;
  double t3004;
  double t3021;
  double t3023;
  double t3034;
  double t3040;
  double t3059;
  double t3066;
  double t3071;
  double t3097;
  double t3099;
  double t3100;
  double t3109;
  double t3111;
  double t3112;
  double t3237;
  double t3272;
  double t3282;
  double t3340;
  double t3341;
  double t3343;
  double t3223;
  double t3401;
  double t3324;
  double t3348;
  double t3354;
  double t3355;
  double t3357;
  double t3370;
  double t3372;
  double t3378;
  double t3389;
  double t3396;
  double t3405;
  double t3409;
  double t3418;
  double t3421;
  double t3424;
  double t3425;
  double t3428;
  double t3432;
  double t3439;
  double t3539;
  double t3587;
  double t3590;
  double t3596;
  double t3600;
  double t3636;
  double t3648;
  double t3651;
  double t3654;
  double t3557;
  double t3697;
  double t3713;
  double t3714;
  double t3716;
  double t3723;
  double t3605;
  double t3672;
  double t3669;
  t628 = Cos(var1[16]);
  t671 = -1.*t628;
  t847 = 1. + t671;
  t1610 = Sin(var1[16]);
  t1716 = Sin(var1[3]);
  t1754 = Cos(var1[15]);
  t1767 = -1.*t1754;
  t1781 = 1. + t1767;
  t1782 = -0.15121*t1781;
  t1794 = Sin(var1[15]);
  t1854 = Cos(var1[3]);
  t1835 = Cos(var1[5]);
  t1837 = Sin(var1[4]);
  t1857 = Sin(var1[5]);
  t1637 = -1. + t628;
  t1638 = 4.e-6*t1637;
  t1843 = t1835*t1716*t1837;
  t1861 = t1854*t1857;
  t1867 = t1843 + t1861;
  t1897 = t1854*t1835;
  t1903 = -1.*t1716*t1837*t1857;
  t1910 = t1897 + t1903;
  t1946 = 7.e-6*t847;
  t1551 = 2.8e-11*t847;
  t2169 = Cos(var1[17]);
  t2170 = -1.*t2169;
  t2171 = 1. + t2170;
  t2179 = Sin(var1[17]);
  t212 = Cos(var1[4]);
  t2099 = -4.e-6*t1610;
  t1992 = -1.*t1794*t1867;
  t2005 = t1754*t1910;
  t2029 = t1992 + t2005;
  t2149 = t1754*t1867;
  t2150 = t1794*t1910;
  t2153 = t2149 + t2150;
  t2229 = 2.8e-11*t2171;
  t1653 = -7.e-6*t1610;
  t2255 = -2.8e-11*t847;
  t1626 = -1.*t1610;
  t2177 = 7.e-6*t2171;
  t2372 = -1. + t2169;
  t2376 = 4.e-6*t2372;
  t2407 = 4.e-6*t847;
  t1969 = 7.e-6*t1610;
  t2282 = -7.e-6*t847;
  t1948 = 4.e-6*t1610;
  t2429 = 4.e-6*t2179;
  t2263 = t2255 + t1610;
  t2270 = -1.*t212*t2263*t1716;
  t2293 = t2282 + t2099;
  t2296 = t2293*t2029;
  t2300 = -1.000000000016*t847;
  t2308 = 1. + t2300;
  t2312 = t2308*t2153;
  t2318 = t2270 + t2296 + t2312;
  t2441 = 7.e-6*t2179;
  t2396 = -1.000000000049*t847;
  t2404 = 1. + t2396;
  t2405 = -1.*t2404*t212*t1716;
  t2411 = t2407 + t1653;
  t2412 = t2411*t2029;
  t2417 = t2255 + t1626;
  t2420 = t2417*t2153;
  t2423 = t2405 + t2412 + t2420;
  t2447 = t2407 + t1969;
  t2449 = -1.*t212*t2447*t1716;
  t2451 = -6.5e-11*t847;
  t2452 = 1. + t2451;
  t2456 = t2452*t2029;
  t2457 = t2282 + t1948;
  t2458 = t2457*t2153;
  t2462 = t2449 + t2456 + t2458;
  t2331 = -1.*t2179;
  t2490 = 4.e-6*t2171;
  t2377 = -7.e-6*t2179;
  t2549 = -2.8e-11*t2171;
  t2478 = -7.e-6*t2171;
  t2191 = -4.e-6*t2179;
  t1808 = -0.15121*t1794;
  t1813 = t1782 + t1808;
  t324 = 1.5843479999999999e-12*var1[16];
  t1352 = -0.03874900000889869*t847;
  t1631 = t1551 + t1626;
  t1636 = -0.281211000004*t1631;
  t1654 = t1638 + t1653;
  t1681 = -1.8134809999999998e-6*t1654;
  t1684 = t324 + t1352 + t1636 + t1681;
  t1871 = 0.15121*t1794;
  t1878 = t1782 + t1871;
  t1939 = 3.9608699999999997e-7*var1[16];
  t1942 = -1.1787626499999999e-16*t847;
  t1953 = t1946 + t1948;
  t1954 = -0.281211000004*t1953;
  t1980 = t1638 + t1969;
  t1983 = -0.038749000006999997*t1980;
  t1989 = t1939 + t1942 + t1954 + t1983;
  t2056 = -2.7726089999999997e-12*var1[16];
  t2068 = -0.2812110000084994*t847;
  t2102 = t1946 + t2099;
  t2114 = -1.8134809999999998e-6*t2102;
  t2121 = t1551 + t1610;
  t2132 = -0.038749000006999997*t2121;
  t2134 = t2056 + t2068 + t2114 + t2132;
  t2165 = -1.9784030000000015e-12*var1[17];
  t2173 = -0.5031510000160505*t2171;
  t2193 = t2177 + t2191;
  t2216 = -3.367757e-6*t2193;
  t2241 = t2229 + t2179;
  t2243 = -0.038575000014*t2241;
  t2245 = t2165 + t2173 + t2216 + t2243;
  t2612 = t1854*t212*t1835*t1794;
  t2613 = t1754*t1854*t212*t1857;
  t2621 = t2612 + t2613;
  t2652 = -1.*t1754*t1854*t212*t1835;
  t2664 = t1854*t212*t1794*t1857;
  t2666 = t2652 + t2664;
  t2327 = 1.1305160000000008e-12*var1[17];
  t2329 = -0.03857500001589017*t2171;
  t2366 = t2229 + t2331;
  t2368 = -0.5031510000080001*t2366;
  t2380 = t2376 + t2377;
  t2390 = -3.367757e-6*t2380;
  t2392 = t2327 + t2329 + t2368 + t2390;
  t2427 = 2.826290000000002e-7*var1[17];
  t2428 = -2.18904205e-16*t2171;
  t2430 = t2177 + t2429;
  t2440 = -0.5031510000080001*t2430;
  t2442 = t2376 + t2441;
  t2444 = -0.038575000014*t2442;
  t2445 = t2427 + t2428 + t2440 + t2444;
  t2481 = t2478 + t2429;
  t2687 = -1.*t1854*t2263*t1837;
  t2688 = t2293*t2621;
  t2705 = t2308*t2666;
  t2707 = t2687 + t2688 + t2705;
  t2497 = t2490 + t2441;
  t2709 = -1.*t2404*t1854*t1837;
  t2710 = t2411*t2621;
  t2712 = t2417*t2666;
  t2715 = t2709 + t2710 + t2712;
  t2511 = -6.5e-11*t2171;
  t2515 = 1. + t2511;
  t2718 = -1.*t1854*t2447*t1837;
  t2723 = t2452*t2621;
  t2724 = t2457*t2666;
  t2725 = t2718 + t2723 + t2724;
  t2552 = t2549 + t2331;
  t2557 = -1.000000000049*t2171;
  t2558 = 1. + t2557;
  t2564 = t2490 + t2377;
  t2574 = -1.000000000016*t2171;
  t2575 = 1. + t2574;
  t2580 = t2549 + t2179;
  t2589 = t2478 + t2191;
  t2774 = t1854*t1835*t1837;
  t2776 = -1.*t1716*t1857;
  t2777 = t2774 + t2776;
  t2785 = t1835*t1716;
  t2786 = t1854*t1837*t1857;
  t2787 = t2785 + t2786;
  t2790 = t1794*t2777;
  t2796 = t1754*t2787;
  t2797 = t2790 + t2796;
  t2809 = t1754*t2777;
  t2811 = -1.*t1794*t2787;
  t2826 = t2809 + t2811;
  t2844 = t2457*t2797;
  t2849 = t2452*t2826;
  t2851 = t2844 + t2849;
  t2866 = t2417*t2797;
  t2875 = t2411*t2826;
  t2883 = t2866 + t2875;
  t2893 = t2308*t2797;
  t2901 = t2293*t2826;
  t2905 = t2893 + t2901;
  t2970 = -1.*t1854*t1835*t1837;
  t2972 = t1716*t1857;
  t3004 = t2970 + t2972;
  t3021 = -1.*t1794*t3004;
  t3023 = t3021 + t2796;
  t3034 = -1.*t1754*t3004;
  t3040 = t3034 + t2811;
  t3059 = t2457*t3023;
  t3066 = t2452*t3040;
  t3071 = t3059 + t3066;
  t3097 = t2417*t3023;
  t3099 = t2411*t3040;
  t3100 = t3097 + t3099;
  t3109 = t2308*t3023;
  t3111 = t2293*t3040;
  t3112 = t3109 + t3111;
  t3237 = 2.8e-11*t1610;
  t3272 = 7.e-6*t628;
  t3282 = 4.e-6*t628;
  t3340 = t1754*t3004;
  t3341 = t1794*t2787;
  t3343 = t3340 + t3341;
  t3223 = -7.e-6*t628;
  t3401 = -2.8e-11*t1610;
  t3324 = -4.e-6*t628;
  t3348 = t3272 + t1948;
  t3354 = t1854*t212*t3348;
  t3355 = -6.5e-11*t1610*t3023;
  t3357 = t3282 + t1653;
  t3370 = t3357*t3343;
  t3372 = t3354 + t3355 + t3370;
  t3378 = -1.000000000049*t1854*t212*t1610;
  t3389 = t3223 + t1948;
  t3396 = t3389*t3023;
  t3405 = t671 + t3401;
  t3409 = t3405*t3343;
  t3418 = t3378 + t3396 + t3409;
  t3421 = t628 + t3401;
  t3424 = t1854*t212*t3421;
  t3425 = t3324 + t1653;
  t3428 = t3425*t3023;
  t3432 = -1.000000000016*t1610*t3343;
  t3439 = t3424 + t3428 + t3432;
  t3539 = 2.8e-11*t2179;
  t3587 = t1854*t212*t2263;
  t3590 = t2293*t3023;
  t3596 = t2308*t3343;
  t3600 = t3587 + t3590 + t3596;
  t3636 = t2404*t1854*t212;
  t3648 = t2411*t3023;
  t3651 = t2417*t3343;
  t3654 = t3636 + t3648 + t3651;
  t3557 = -4.e-6*t2169;
  t3697 = t1854*t212*t2447;
  t3713 = t2452*t3023;
  t3714 = t2457*t3343;
  t3716 = t3697 + t3713 + t3714;
  t3723 = -2.8e-11*t2179;
  t3605 = -7.e-6*t2169;
  t3672 = 4.e-6*t2169;
  t3669 = 7.e-6*t2169;
  p_output1[0]=1.;
  p_output1[1]=t1813*t1867 + t1878*t1910 + t1989*t2029 - 1.*t1684*t1716*t212 + t2134*t2153 + t2245*t2318 + t2392*t2423 + t2445*t2462 - 0.148715*(t2318*t2481 + t2423*t2497 + t2462*t2515) - 0.038576*(t2318*t2552 + t2423*t2558 + t2462*t2564) - 0.80315*(t2318*t2575 + t2423*t2580 + t2462*t2589);
  p_output1[2]=-1.*t1684*t1837*t1854 - 1.*t1813*t1835*t1854*t212 + t1854*t1857*t1878*t212 + t1989*t2621 + t2134*t2666 + t2245*t2707 + t2392*t2715 + t2445*t2725 - 0.148715*(t2481*t2707 + t2497*t2715 + t2515*t2725) - 0.038576*(t2552*t2707 + t2558*t2715 + t2564*t2725) - 0.80315*(t2575*t2707 + t2580*t2715 + t2589*t2725);
  p_output1[3]=t1878*t2777 + t1813*t2787 + t2134*t2797 + t1989*t2826 + t2445*t2851 + t2392*t2883 + t2245*t2905 - 0.148715*(t2515*t2851 + t2497*t2883 + t2481*t2905) - 0.038576*(t2564*t2851 + t2558*t2883 + t2552*t2905) - 0.80315*(t2589*t2851 + t2580*t2883 + t2575*t2905);
  p_output1[4]=(0.15121*t1754 + t1808)*t2787 + (-0.15121*t1754 + t1808)*t3004 + t2134*t3023 + t1989*t3040 + t2445*t3071 + t2392*t3100 + t2245*t3112 - 0.148715*(t2515*t3071 + t2497*t3100 + t2481*t3112) - 0.038576*(t2564*t3071 + t2558*t3100 + t2552*t3112) - 0.80315*(t2589*t3071 + t2580*t3100 + t2575*t3112);
  p_output1[5]=t3023*(3.9608699999999997e-7 - 1.1787626499999999e-16*t1610 - 0.038749000006999997*(t2099 + t3272) - 0.281211000004*(t1969 + t3282)) + t2445*t3372 + t2392*t3418 + t2245*t3439 - 0.148715*(t2515*t3372 + t2497*t3418 + t2481*t3439) - 0.038576*(t2564*t3372 + t2558*t3418 + t2552*t3439) - 0.80315*(t2589*t3372 + t2580*t3418 + t2575*t3439) + t3343*(-2.7726089999999997e-12 - 0.2812110000084994*t1610 - 1.8134809999999998e-6*(t1969 + t3324) - 0.038749000006999997*(t3237 + t628)) + t1854*t212*(1.5843479999999999e-12 - 0.03874900000889869*t1610 - 1.8134809999999998e-6*(t2099 + t3223) - 0.281211000004*(t3237 + t671));
  p_output1[6]=(-1.9784030000000015e-12 - 0.5031510000160505*t2179 - 0.038575000014*(t2169 + t3539) - 3.367757e-6*(t2441 + t3557))*t3600 + (1.1305160000000008e-12 - 0.03857500001589017*t2179 - 0.5031510000080001*(t2170 + t3539) - 3.367757e-6*(t2191 + t3605))*t3654 + (2.826290000000002e-7 - 2.18904205e-16*t2179 - 0.038575000014*(t2191 + t3669) - 0.5031510000080001*(t2441 + t3672))*t3716 - 0.148715*(t3654*(t2429 + t3669) + t3600*(t2377 + t3672) - 6.5e-11*t2179*t3716) - 0.80315*(-1.000000000016*t2179*t3600 + (t2377 + t3557)*t3716 + t3654*(t2169 + t3723)) - 0.038576*(-1.000000000049*t2179*t3654 + (t2429 + t3605)*t3716 + t3600*(t2170 + t3723));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_foot_clearance_RrFootDiagonalStance1.hh"

namespace DiagonalStance1
{

void J_foot_clearance_RrFootDiagonalStance1_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
