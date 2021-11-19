/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:29:12 GMT+01:00
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
  double t200;
  double t218;
  double t251;
  double t371;
  double t598;
  double t643;
  double t653;
  double t659;
  double t701;
  double t705;
  double t813;
  double t766;
  double t804;
  double t830;
  double t410;
  double t552;
  double t810;
  double t848;
  double t849;
  double t939;
  double t947;
  double t952;
  double t1023;
  double t322;
  double t1540;
  double t1555;
  double t1568;
  double t1596;
  double t30;
  double t1359;
  double t1178;
  double t1190;
  double t1194;
  double t1483;
  double t1487;
  double t1491;
  double t1623;
  double t559;
  double t1650;
  double t390;
  double t1579;
  double t1861;
  double t1863;
  double t1938;
  double t1129;
  double t1715;
  double t1025;
  double t1991;
  double t1651;
  double t1685;
  double t1721;
  double t1738;
  double t1763;
  double t1769;
  double t1786;
  double t1793;
  double t2027;
  double t1919;
  double t1926;
  double t1927;
  double t1946;
  double t1953;
  double t1956;
  double t1958;
  double t1966;
  double t2060;
  double t2063;
  double t2081;
  double t2087;
  double t2091;
  double t2105;
  double t2107;
  double t2113;
  double t1843;
  double t2137;
  double t1870;
  double t2220;
  double t2120;
  double t1599;
  double t711;
  double t745;
  double t156;
  double t297;
  double t393;
  double t394;
  double t587;
  double t593;
  double t594;
  double t854;
  double t918;
  double t1008;
  double t1021;
  double t1031;
  double t1082;
  double t1137;
  double t1149;
  double t1152;
  double t1285;
  double t1315;
  double t1369;
  double t1370;
  double t1414;
  double t1419;
  double t1478;
  double t1537;
  double t1575;
  double t1615;
  double t1616;
  double t1633;
  double t1634;
  double t1649;
  double t2348;
  double t2354;
  double t2357;
  double t2359;
  double t2360;
  double t2391;
  double t1803;
  double t1837;
  double t1849;
  double t1858;
  double t1875;
  double t1911;
  double t1912;
  double t1969;
  double t1987;
  double t2006;
  double t2019;
  double t2035;
  double t2039;
  double t2049;
  double t2123;
  double t2423;
  double t2424;
  double t2434;
  double t2443;
  double t2144;
  double t2451;
  double t2453;
  double t2457;
  double t2459;
  double t2164;
  double t2168;
  double t2505;
  double t2514;
  double t2525;
  double t2554;
  double t2228;
  double t2230;
  double t2238;
  double t2243;
  double t2264;
  double t2265;
  double t2278;
  double t2295;
  double t2678;
  double t2685;
  double t2688;
  double t2714;
  double t2724;
  double t2728;
  double t2737;
  double t2745;
  double t2748;
  double t2780;
  double t2783;
  double t2797;
  double t2809;
  double t2825;
  double t2828;
  double t2837;
  double t2847;
  double t2850;
  double t2872;
  double t2873;
  double t2874;
  double t3027;
  double t3028;
  double t3043;
  double t3095;
  double t3098;
  double t3115;
  double t3117;
  double t3123;
  double t3164;
  double t3165;
  double t3169;
  double t3241;
  double t3244;
  double t3261;
  double t3264;
  double t3270;
  double t3474;
  double t3529;
  double t3552;
  double t3607;
  double t3609;
  double t3628;
  double t3455;
  double t3727;
  double t3588;
  double t3640;
  double t3643;
  double t3655;
  double t3669;
  double t3670;
  double t3671;
  double t3688;
  double t3697;
  double t3703;
  double t3731;
  double t3735;
  double t3745;
  double t3756;
  double t3768;
  double t3785;
  double t3796;
  double t3797;
  double t3800;
  double t3880;
  double t3902;
  double t3904;
  double t3914;
  double t3915;
  double t3949;
  double t3959;
  double t3964;
  double t3980;
  double t3890;
  double t4051;
  double t4054;
  double t4056;
  double t4075;
  double t4144;
  double t3927;
  double t4000;
  double t3989;
  t200 = Cos(var1[16]);
  t218 = -1.*t200;
  t251 = 1. + t218;
  t371 = Sin(var1[16]);
  t598 = Sin(var1[3]);
  t643 = Cos(var1[15]);
  t653 = -1.*t643;
  t659 = 1. + t653;
  t701 = -0.15121*t659;
  t705 = Sin(var1[15]);
  t813 = Cos(var1[3]);
  t766 = Cos(var1[5]);
  t804 = Sin(var1[4]);
  t830 = Sin(var1[5]);
  t410 = -1. + t200;
  t552 = 4.e-6*t410;
  t810 = t766*t598*t804;
  t848 = t813*t830;
  t849 = t810 + t848;
  t939 = t813*t766;
  t947 = -1.*t598*t804*t830;
  t952 = t939 + t947;
  t1023 = 7.e-6*t251;
  t322 = 2.8e-11*t251;
  t1540 = Cos(var1[17]);
  t1555 = -1.*t1540;
  t1568 = 1. + t1555;
  t1596 = Sin(var1[17]);
  t30 = Cos(var1[4]);
  t1359 = -4.e-6*t371;
  t1178 = -1.*t705*t849;
  t1190 = t643*t952;
  t1194 = t1178 + t1190;
  t1483 = t643*t849;
  t1487 = t705*t952;
  t1491 = t1483 + t1487;
  t1623 = 2.8e-11*t1568;
  t559 = -7.e-6*t371;
  t1650 = -2.8e-11*t251;
  t390 = -1.*t371;
  t1579 = 7.e-6*t1568;
  t1861 = -1. + t1540;
  t1863 = 4.e-6*t1861;
  t1938 = 4.e-6*t251;
  t1129 = 7.e-6*t371;
  t1715 = -7.e-6*t251;
  t1025 = 4.e-6*t371;
  t1991 = 4.e-6*t1596;
  t1651 = t1650 + t371;
  t1685 = -1.*t30*t1651*t598;
  t1721 = t1715 + t1359;
  t1738 = t1721*t1194;
  t1763 = -1.000000000016*t251;
  t1769 = 1. + t1763;
  t1786 = t1769*t1491;
  t1793 = t1685 + t1738 + t1786;
  t2027 = 7.e-6*t1596;
  t1919 = -1.000000000049*t251;
  t1926 = 1. + t1919;
  t1927 = -1.*t1926*t30*t598;
  t1946 = t1938 + t559;
  t1953 = t1946*t1194;
  t1956 = t1650 + t390;
  t1958 = t1956*t1491;
  t1966 = t1927 + t1953 + t1958;
  t2060 = t1938 + t1129;
  t2063 = -1.*t30*t2060*t598;
  t2081 = -6.5e-11*t251;
  t2087 = 1. + t2081;
  t2091 = t2087*t1194;
  t2105 = t1715 + t1025;
  t2107 = t2105*t1491;
  t2113 = t2063 + t2091 + t2107;
  t1843 = -1.*t1596;
  t2137 = 4.e-6*t1568;
  t1870 = -7.e-6*t1596;
  t2220 = -2.8e-11*t1568;
  t2120 = -7.e-6*t1568;
  t1599 = -4.e-6*t1596;
  t711 = -0.15121*t705;
  t745 = t701 + t711;
  t156 = 1.5843479999999999e-12*var1[16];
  t297 = -0.03874900000889869*t251;
  t393 = t322 + t390;
  t394 = -0.281211000004*t393;
  t587 = t552 + t559;
  t593 = -1.8134809999999998e-6*t587;
  t594 = t156 + t297 + t394 + t593;
  t854 = 0.15121*t705;
  t918 = t701 + t854;
  t1008 = 3.9608699999999997e-7*var1[16];
  t1021 = -1.1787626499999999e-16*t251;
  t1031 = t1023 + t1025;
  t1082 = -0.281211000004*t1031;
  t1137 = t552 + t1129;
  t1149 = -0.038749000006999997*t1137;
  t1152 = t1008 + t1021 + t1082 + t1149;
  t1285 = -2.7726089999999997e-12*var1[16];
  t1315 = -0.2812110000084994*t251;
  t1369 = t1023 + t1359;
  t1370 = -1.8134809999999998e-6*t1369;
  t1414 = t322 + t371;
  t1419 = -0.038749000006999997*t1414;
  t1478 = t1285 + t1315 + t1370 + t1419;
  t1537 = -1.9784030000000015e-12*var1[17];
  t1575 = -0.5031510000160505*t1568;
  t1615 = t1579 + t1599;
  t1616 = -3.367757e-6*t1615;
  t1633 = t1623 + t1596;
  t1634 = -0.038575000014*t1633;
  t1649 = t1537 + t1575 + t1616 + t1634;
  t2348 = t813*t30*t766*t705;
  t2354 = t643*t813*t30*t830;
  t2357 = t2348 + t2354;
  t2359 = -1.*t643*t813*t30*t766;
  t2360 = t813*t30*t705*t830;
  t2391 = t2359 + t2360;
  t1803 = 1.1305160000000008e-12*var1[17];
  t1837 = -0.03857500001589017*t1568;
  t1849 = t1623 + t1843;
  t1858 = -0.5031510000080001*t1849;
  t1875 = t1863 + t1870;
  t1911 = -3.367757e-6*t1875;
  t1912 = t1803 + t1837 + t1858 + t1911;
  t1969 = 2.826290000000002e-7*var1[17];
  t1987 = -2.18904205e-16*t1568;
  t2006 = t1579 + t1991;
  t2019 = -0.5031510000080001*t2006;
  t2035 = t1863 + t2027;
  t2039 = -0.038575000014*t2035;
  t2049 = t1969 + t1987 + t2019 + t2039;
  t2123 = t2120 + t1991;
  t2423 = -1.*t813*t1651*t804;
  t2424 = t1721*t2357;
  t2434 = t1769*t2391;
  t2443 = t2423 + t2424 + t2434;
  t2144 = t2137 + t2027;
  t2451 = -1.*t1926*t813*t804;
  t2453 = t1946*t2357;
  t2457 = t1956*t2391;
  t2459 = t2451 + t2453 + t2457;
  t2164 = -6.5e-11*t1568;
  t2168 = 1. + t2164;
  t2505 = -1.*t813*t2060*t804;
  t2514 = t2087*t2357;
  t2525 = t2105*t2391;
  t2554 = t2505 + t2514 + t2525;
  t2228 = t2220 + t1843;
  t2230 = -1.000000000049*t1568;
  t2238 = 1. + t2230;
  t2243 = t2137 + t1870;
  t2264 = -1.000000000016*t1568;
  t2265 = 1. + t2264;
  t2278 = t2220 + t1596;
  t2295 = t2120 + t1599;
  t2678 = t813*t766*t804;
  t2685 = -1.*t598*t830;
  t2688 = t2678 + t2685;
  t2714 = t766*t598;
  t2724 = t813*t804*t830;
  t2728 = t2714 + t2724;
  t2737 = t705*t2688;
  t2745 = t643*t2728;
  t2748 = t2737 + t2745;
  t2780 = t643*t2688;
  t2783 = -1.*t705*t2728;
  t2797 = t2780 + t2783;
  t2809 = t2105*t2748;
  t2825 = t2087*t2797;
  t2828 = t2809 + t2825;
  t2837 = t1956*t2748;
  t2847 = t1946*t2797;
  t2850 = t2837 + t2847;
  t2872 = t1769*t2748;
  t2873 = t1721*t2797;
  t2874 = t2872 + t2873;
  t3027 = -1.*t813*t766*t804;
  t3028 = t598*t830;
  t3043 = t3027 + t3028;
  t3095 = -1.*t705*t3043;
  t3098 = t3095 + t2745;
  t3115 = -1.*t643*t3043;
  t3117 = t3115 + t2783;
  t3123 = t2105*t3098;
  t3164 = t2087*t3117;
  t3165 = t3123 + t3164;
  t3169 = t1956*t3098;
  t3241 = t1946*t3117;
  t3244 = t3169 + t3241;
  t3261 = t1769*t3098;
  t3264 = t1721*t3117;
  t3270 = t3261 + t3264;
  t3474 = 2.8e-11*t371;
  t3529 = 7.e-6*t200;
  t3552 = 4.e-6*t200;
  t3607 = t643*t3043;
  t3609 = t705*t2728;
  t3628 = t3607 + t3609;
  t3455 = -7.e-6*t200;
  t3727 = -2.8e-11*t371;
  t3588 = -4.e-6*t200;
  t3640 = t3529 + t1025;
  t3643 = t813*t30*t3640;
  t3655 = -6.5e-11*t371*t3098;
  t3669 = t3552 + t559;
  t3670 = t3669*t3628;
  t3671 = t3643 + t3655 + t3670;
  t3688 = -1.000000000049*t813*t30*t371;
  t3697 = t3455 + t1025;
  t3703 = t3697*t3098;
  t3731 = t218 + t3727;
  t3735 = t3731*t3628;
  t3745 = t3688 + t3703 + t3735;
  t3756 = t200 + t3727;
  t3768 = t813*t30*t3756;
  t3785 = t3588 + t559;
  t3796 = t3785*t3098;
  t3797 = -1.000000000016*t371*t3628;
  t3800 = t3768 + t3796 + t3797;
  t3880 = 2.8e-11*t1596;
  t3902 = t813*t30*t1651;
  t3904 = t1721*t3098;
  t3914 = t1769*t3628;
  t3915 = t3902 + t3904 + t3914;
  t3949 = t1926*t813*t30;
  t3959 = t1946*t3098;
  t3964 = t1956*t3628;
  t3980 = t3949 + t3959 + t3964;
  t3890 = -4.e-6*t1540;
  t4051 = t813*t30*t2060;
  t4054 = t2087*t3098;
  t4056 = t2105*t3628;
  t4075 = t4051 + t4054 + t4056;
  t4144 = -2.8e-11*t1596;
  t3927 = -7.e-6*t1540;
  t4000 = 4.e-6*t1540;
  t3989 = 7.e-6*t1540;
  p_output1[0]=1.;
  p_output1[1]=t1152*t1194 + t1478*t1491 + t1649*t1793 + t1912*t1966 + t2049*t2113 - 0.148715*(t1793*t2123 + t1966*t2144 + t2113*t2168) - 0.038576*(t1793*t2228 + t1966*t2238 + t2113*t2243) - 0.80315*(t1793*t2265 + t1966*t2278 + t2113*t2295) - 1.*t30*t594*t598 + t745*t849 + t918*t952;
  p_output1[2]=t1152*t2357 + t1478*t2391 + t1649*t2443 + t1912*t2459 + t2049*t2554 - 0.148715*(t2123*t2443 + t2144*t2459 + t2168*t2554) - 0.038576*(t2228*t2443 + t2238*t2459 + t2243*t2554) - 0.80315*(t2265*t2443 + t2278*t2459 + t2295*t2554) - 1.*t30*t745*t766*t813 - 1.*t594*t804*t813 + t30*t813*t830*t918;
  p_output1[3]=t1478*t2748 + t1152*t2797 + t2049*t2828 + t1912*t2850 + t1649*t2874 - 0.148715*(t2168*t2828 + t2144*t2850 + t2123*t2874) - 0.038576*(t2243*t2828 + t2238*t2850 + t2228*t2874) - 0.80315*(t2295*t2828 + t2278*t2850 + t2265*t2874) + t2728*t745 + t2688*t918;
  p_output1[4]=t1478*t3098 + t1152*t3117 + t2049*t3165 + t1912*t3244 + t1649*t3270 - 0.148715*(t2168*t3165 + t2144*t3244 + t2123*t3270) - 0.038576*(t2243*t3165 + t2238*t3244 + t2228*t3270) - 0.80315*(t2295*t3165 + t2278*t3244 + t2265*t3270) + t3043*(-0.15121*t643 + t711) + t2728*(0.15121*t643 + t711);
  p_output1[5]=t2049*t3671 + t3628*(-2.7726089999999997e-12 - 0.038749000006999997*(t200 + t3474) - 1.8134809999999998e-6*(t1129 + t3588) - 0.2812110000084994*t371) + t3098*(3.9608699999999997e-7 - 0.038749000006999997*(t1359 + t3529) - 0.281211000004*(t1129 + t3552) - 1.1787626499999999e-16*t371) + t1912*t3745 + t1649*t3800 - 0.148715*(t2168*t3671 + t2144*t3745 + t2123*t3800) - 0.038576*(t2243*t3671 + t2238*t3745 + t2228*t3800) - 0.80315*(t2295*t3671 + t2278*t3745 + t2265*t3800) + t30*(1.5843479999999999e-12 - 1.8134809999999998e-6*(t1359 + t3455) - 0.281211000004*(t218 + t3474) - 0.03874900000889869*t371)*t813;
  p_output1[6]=(-1.9784030000000015e-12 - 0.5031510000160505*t1596 - 0.038575000014*(t1540 + t3880) - 3.367757e-6*(t2027 + t3890))*t3915 + (1.1305160000000008e-12 - 0.03857500001589017*t1596 - 0.5031510000080001*(t1555 + t3880) - 3.367757e-6*(t1599 + t3927))*t3980 + (2.826290000000002e-7 - 2.18904205e-16*t1596 - 0.038575000014*(t1599 + t3989) - 0.5031510000080001*(t2027 + t4000))*t4075 - 0.148715*(t3980*(t1991 + t3989) + t3915*(t1870 + t4000) - 6.5e-11*t1596*t4075) - 0.80315*(-1.000000000016*t1596*t3915 + (t1870 + t3890)*t4075 + t3980*(t1540 + t4144)) - 0.038576*(-1.000000000049*t1596*t3980 + (t1991 + t3927)*t4075 + t3915*(t1555 + t4144));
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

#include "J_u_rearSwingFootHeight_DiagonalStance.hh"

namespace DiagonalStance
{

void J_u_rearSwingFootHeight_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
