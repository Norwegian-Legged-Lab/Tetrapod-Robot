/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:12:17 GMT+01:00
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
  double t124;
  double t453;
  double t463;
  double t116;
  double t574;
  double t711;
  double t712;
  double t728;
  double t757;
  double t794;
  double t342;
  double t575;
  double t580;
  double t1018;
  double t1045;
  double t1046;
  double t1143;
  double t1152;
  double t1207;
  double t1239;
  double t1704;
  double t1866;
  double t1115;
  double t1116;
  double t1127;
  double t1533;
  double t1573;
  double t1578;
  double t1961;
  double t1989;
  double t1998;
  double t2030;
  double t1890;
  double t1894;
  double t1907;
  double t1908;
  double t1940;
  double t1942;
  double t2484;
  double t2205;
  double t2206;
  double t2221;
  double t2247;
  double t2062;
  double t2084;
  double t2087;
  double t2088;
  double t2116;
  double t2132;
  double t832;
  double t924;
  double t1053;
  double t1066;
  double t1135;
  double t1234;
  double t1261;
  double t1275;
  double t1591;
  double t1614;
  double t1679;
  double t1745;
  double t1786;
  double t1809;
  double t1810;
  double t2910;
  double t2915;
  double t2927;
  double t2973;
  double t2975;
  double t2994;
  double t1949;
  double t2014;
  double t2031;
  double t2032;
  double t2143;
  double t2153;
  double t2160;
  double t2309;
  double t2340;
  double t2344;
  double t2350;
  double t2526;
  double t2532;
  double t3016;
  double t3019;
  double t3026;
  double t3029;
  double t3105;
  double t3108;
  double t3155;
  double t3161;
  double t3037;
  double t3040;
  double t3042;
  double t3055;
  double t2707;
  double t2728;
  double t3359;
  double t3370;
  double t3385;
  double t3391;
  double t3392;
  double t3398;
  double t3456;
  double t3458;
  double t3463;
  double t3467;
  double t3472;
  double t3479;
  double t3511;
  double t3515;
  double t3526;
  double t3489;
  double t3494;
  double t3495;
  double t3549;
  double t3553;
  double t3554;
  double t3654;
  double t3656;
  double t3657;
  double t3675;
  double t3681;
  double t3684;
  double t3696;
  double t3740;
  double t3745;
  double t3751;
  double t3711;
  double t3714;
  double t3720;
  double t3763;
  double t3772;
  double t3780;
  double t3977;
  double t3979;
  double t3981;
  double t4040;
  double t4041;
  double t4043;
  double t4051;
  double t4055;
  double t4059;
  double t4062;
  double t4063;
  double t4013;
  double t4021;
  double t4024;
  double t4034;
  double t4181;
  double t4182;
  double t4188;
  double t4192;
  double t4145;
  double t4151;
  double t4152;
  double t4153;
  double t4221;
  double t4222;
  t124 = Cos(var1[5]);
  t453 = Sin(var1[3]);
  t463 = Sin(var1[4]);
  t116 = Cos(var1[3]);
  t574 = Sin(var1[5]);
  t711 = Cos(var1[6]);
  t712 = -1.*t711;
  t728 = 1. + t712;
  t757 = 0.15121*t728;
  t794 = Sin(var1[6]);
  t342 = t116*t124;
  t575 = -1.*t453*t463*t574;
  t580 = t342 + t575;
  t1018 = t124*t453*t463;
  t1045 = t116*t574;
  t1046 = t1018 + t1045;
  t1143 = Cos(var1[7]);
  t1152 = -1.*t1143;
  t1207 = 1. + t1152;
  t1239 = Sin(var1[7]);
  t1704 = Cos(var1[4]);
  t1866 = -1. + t1143;
  t1115 = t711*t580;
  t1116 = -1.*t1046*t794;
  t1127 = t1115 + t1116;
  t1533 = t711*t1046;
  t1573 = t580*t794;
  t1578 = t1533 + t1573;
  t1961 = Cos(var1[8]);
  t1989 = -1.*t1961;
  t1998 = 1. + t1989;
  t2030 = Sin(var1[8]);
  t1890 = -4.e-6*t1704*t1866*t453;
  t1894 = 1.6e-11*t1866;
  t1907 = 1. + t1894;
  t1908 = t1907*t1127;
  t1940 = 4.e-6*t1578*t1239;
  t1942 = t1890 + t1908 + t1940;
  t2484 = -1. + t1961;
  t2205 = -1.*t1704*t1143*t453;
  t2206 = 4.e-6*t1866*t1127;
  t2221 = t1578*t1239;
  t2247 = t2205 + t2206 + t2221;
  t2062 = -1.000000000016*t1207;
  t2084 = 1. + t2062;
  t2087 = t2084*t1578;
  t2088 = t1704*t453*t1239;
  t2116 = -4.e-6*t1127*t1239;
  t2132 = t2087 + t2088 + t2116;
  t832 = -0.15121*t794;
  t924 = t757 + t832;
  t1053 = 0.15121*t794;
  t1066 = t757 + t1053;
  t1135 = -1.2484e-7*var1[7];
  t1234 = -1.5499600000248e-7*t1207;
  t1261 = 1.124840000016e-6*t1239;
  t1275 = t1135 + t1234 + t1261;
  t1591 = 0.281210000008499*t1207;
  t1614 = 0.03874900000062*t1239;
  t1679 = t1591 + t1614;
  t1745 = 4.9936e-13*var1[7];
  t1786 = -0.03874900000062*t1207;
  t1809 = 0.281210000004*t1239;
  t1810 = t1745 + t1786 + t1809;
  t2910 = t116*t1704*t711*t574;
  t2915 = t116*t1704*t124*t794;
  t2927 = t2910 + t2915;
  t2973 = -1.*t116*t1704*t124*t711;
  t2975 = t116*t1704*t574*t794;
  t2994 = t2973 + t2975;
  t1949 = -1.284e-8*var1[8];
  t2014 = -1.5499600000248e-7*t1998;
  t2031 = 2.012840000032e-6*t2030;
  t2032 = t1949 + t2014 + t2031;
  t2143 = 0.503210000016051*t1998;
  t2153 = 0.03874900000062*t2030;
  t2160 = t2143 + t2153;
  t2309 = 5.136e-14*var1[8];
  t2340 = -0.03874900000062*t1998;
  t2344 = 0.503210000008*t2030;
  t2350 = t2309 + t2340 + t2344;
  t2526 = 1.6e-11*t2484;
  t2532 = 1. + t2526;
  t3016 = -4.e-6*t116*t1866*t463;
  t3019 = t1907*t2927;
  t3026 = 4.e-6*t2994*t1239;
  t3029 = t3016 + t3019 + t3026;
  t3105 = -1.*t116*t1143*t463;
  t3108 = 4.e-6*t1866*t2927;
  t3155 = t2994*t1239;
  t3161 = t3105 + t3108 + t3155;
  t3037 = t2084*t2994;
  t3040 = t116*t463*t1239;
  t3042 = -4.e-6*t2927*t1239;
  t3055 = t3037 + t3040 + t3042;
  t2707 = -1.000000000016*t1998;
  t2728 = 1. + t2707;
  t3359 = t116*t124*t463;
  t3370 = -1.*t453*t574;
  t3385 = t3359 + t3370;
  t3391 = t124*t453;
  t3392 = t116*t463*t574;
  t3398 = t3391 + t3392;
  t3456 = t711*t3385;
  t3458 = -1.*t3398*t794;
  t3463 = t3456 + t3458;
  t3467 = t711*t3398;
  t3472 = t3385*t794;
  t3479 = t3467 + t3472;
  t3511 = t2084*t3479;
  t3515 = -4.e-6*t3463*t1239;
  t3526 = t3511 + t3515;
  t3489 = t1907*t3463;
  t3494 = 4.e-6*t3479*t1239;
  t3495 = t3489 + t3494;
  t3549 = 4.e-6*t1866*t3463;
  t3553 = t3479*t1239;
  t3554 = t3549 + t3553;
  t3654 = -1.*t116*t124*t463;
  t3656 = t453*t574;
  t3657 = t3654 + t3656;
  t3675 = -1.*t711*t3657;
  t3681 = t3675 + t3458;
  t3684 = -1.*t3657*t794;
  t3696 = t3467 + t3684;
  t3740 = t2084*t3696;
  t3745 = -4.e-6*t3681*t1239;
  t3751 = t3740 + t3745;
  t3711 = t1907*t3681;
  t3714 = 4.e-6*t3696*t1239;
  t3720 = t3711 + t3714;
  t3763 = 4.e-6*t1866*t3681;
  t3772 = t3696*t1239;
  t3780 = t3763 + t3772;
  t3977 = t711*t3657;
  t3979 = t3398*t794;
  t3981 = t3977 + t3979;
  t4040 = -1.*t116*t1704*t1143;
  t4041 = -4.e-6*t1143*t3696;
  t4043 = -1.000000000016*t3981*t1239;
  t4051 = t4040 + t4041 + t4043;
  t4055 = t1143*t3981;
  t4059 = -1.*t116*t1704*t1239;
  t4062 = -4.e-6*t3696*t1239;
  t4063 = t4055 + t4059 + t4062;
  t4013 = 4.e-6*t1143*t3981;
  t4021 = -4.e-6*t116*t1704*t1239;
  t4024 = -1.6e-11*t3696*t1239;
  t4034 = t4013 + t4021 + t4024;
  t4181 = 4.e-6*t116*t1704*t1866;
  t4182 = t1907*t3696;
  t4188 = 4.e-6*t3981*t1239;
  t4192 = t4181 + t4182 + t4188;
  t4145 = t116*t1704*t1143;
  t4151 = 4.e-6*t1866*t3696;
  t4152 = t3981*t1239;
  t4153 = t4145 + t4151 + t4152;
  t4221 = t2084*t3981;
  t4222 = t4221 + t4059 + t4062;
  p_output1[0]=1.;
  p_output1[1]=t1046*t1066 + t1127*t1275 + t1578*t1679 + t1942*t2032 + t2132*t2160 + t2247*t2350 - 0.03875*(t2030*t2132 + t1961*t2247 + 4.e-6*t1942*t2484) + 0.14871*(4.e-6*t2030*t2132 + 4.e-6*t2247*t2484 + t1942*t2532) + 0.80321*(-4.e-6*t1942*t2030 - 1.*t2030*t2247 + t2132*t2728) - 1.*t1704*t1810*t453 + t580*t924;
  p_output1[2]=-1.*t1066*t116*t124*t1704 + t1275*t2927 + t1679*t2994 + t2032*t3029 + t2160*t3055 + t2350*t3161 - 0.03875*(4.e-6*t2484*t3029 + t2030*t3055 + t1961*t3161) + 0.80321*(-4.e-6*t2030*t3029 + t2728*t3055 - 1.*t2030*t3161) + 0.14871*(t2532*t3029 + 4.e-6*t2030*t3055 + 4.e-6*t2484*t3161) - 1.*t116*t1810*t463 + t116*t1704*t574*t924;
  p_output1[3]=t1066*t3398 + t1275*t3463 + t1679*t3479 + t2032*t3495 + t2160*t3526 + t2350*t3554 - 0.03875*(4.e-6*t2484*t3495 + t2030*t3526 + t1961*t3554) + 0.80321*(-4.e-6*t2030*t3495 + t2728*t3526 - 1.*t2030*t3554) + 0.14871*(t2532*t3495 + 4.e-6*t2030*t3526 + 4.e-6*t2484*t3554) + t3385*t924;
  p_output1[4]=t1275*t3681 + t1679*t3696 + t2032*t3720 + t2160*t3751 + t2350*t3780 - 0.03875*(4.e-6*t2484*t3720 + t2030*t3751 + t1961*t3780) + 0.80321*(-4.e-6*t2030*t3720 + t2728*t3751 - 1.*t2030*t3780) + 0.14871*(t2532*t3720 + 4.e-6*t2030*t3751 + 4.e-6*t2484*t3780) + t3398*(t1053 - 0.15121*t711) + t3657*(t1053 + 0.15121*t711);
  p_output1[5]=t116*(4.9936e-13 + 0.281210000004*t1143 - 0.03874900000062*t1239)*t1704 + (-1.2484e-7 + 1.124840000016e-6*t1143 - 1.5499600000248e-7*t1239)*t3696 + (0.03874900000062*t1143 + 0.281210000008499*t1239)*t3981 + t2032*t4034 + t2160*t4051 + t2350*t4063 - 0.03875*(4.e-6*t2484*t4034 + t2030*t4051 + t1961*t4063) + 0.80321*(-4.e-6*t2030*t4034 + t2728*t4051 - 1.*t2030*t4063) + 0.14871*(t2532*t4034 + 4.e-6*t2030*t4051 + 4.e-6*t2484*t4063);
  p_output1[6]=(5.136e-14 + 0.503210000008*t1961 - 0.03874900000062*t2030)*t4153 + (-1.284e-8 + 2.012840000032e-6*t1961 - 1.5499600000248e-7*t2030)*t4192 + (0.03874900000062*t1961 + 0.503210000016051*t2030)*t4222 + 0.14871*(-4.e-6*t2030*t4153 - 1.6e-11*t2030*t4192 + 4.e-6*t1961*t4222) - 0.03875*(-1.*t2030*t4153 - 4.e-6*t2030*t4192 + t1961*t4222) + 0.80321*(-1.*t1961*t4153 - 4.e-6*t1961*t4192 - 1.000000000016*t2030*t4222);
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

#include "J_u_frontSwingFootHeight1_ParallelStance1.hh"

namespace ParallelStance1
{

void J_u_frontSwingFootHeight1_ParallelStance1_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
