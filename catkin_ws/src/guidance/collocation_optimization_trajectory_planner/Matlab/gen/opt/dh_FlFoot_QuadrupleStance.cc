/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 17:51:44 GMT+01:00
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
  double t206;
  double t237;
  double t279;
  double t43;
  double t84;
  double t86;
  double t93;
  double t136;
  double t159;
  double t493;
  double t332;
  double t374;
  double t502;
  double t431;
  double t464;
  double t491;
  double t536;
  double t631;
  double t634;
  double t646;
  double t742;
  double t766;
  double t802;
  double t828;
  double t833;
  double t872;
  double t930;
  double t951;
  double t953;
  double t966;
  double t968;
  double t983;
  double t987;
  double t994;
  double t1023;
  double t1025;
  double t1049;
  double t264;
  double t274;
  double t1111;
  double t1162;
  double t1165;
  double t708;
  double t730;
  double t873;
  double t993;
  double t1066;
  double t1080;
  double t1463;
  double t1469;
  double t1487;
  double t1509;
  double t1529;
  double t1347;
  double t1356;
  double t1359;
  double t1362;
  double t1381;
  double t1384;
  double t1456;
  double t1193;
  double t1195;
  double t1197;
  double t1229;
  double t1239;
  double t1287;
  double t1299;
  double t1526;
  double t1540;
  double t1565;
  double t1570;
  double t1791;
  double t1793;
  double t1800;
  double t1813;
  double t1819;
  double t1830;
  double t1841;
  double t200;
  double t289;
  double t297;
  double t316;
  double t467;
  double t470;
  double t473;
  double t2153;
  double t2104;
  double t1303;
  double t1306;
  double t1337;
  double t630;
  double t652;
  double t683;
  double t2648;
  double t2650;
  double t2692;
  double t1301;
  double t1685;
  double t2720;
  double t2733;
  double t2742;
  double t2749;
  double t1578;
  double t1591;
  double t1619;
  double t1633;
  double t1644;
  double t1654;
  double t1668;
  double t1674;
  double t2957;
  double t2986;
  double t3095;
  double t3106;
  double t2340;
  double t2125;
  double t2161;
  double t2176;
  double t2077;
  double t2360;
  double t2403;
  double t2416;
  double t2072;
  double t1944;
  double t2013;
  double t2024;
  double t2043;
  double t1919;
  double t2324;
  double t2540;
  double t2542;
  double t3470;
  double t3443;
  double t3446;
  double t3462;
  double t3415;
  double t3545;
  double t3560;
  double t3590;
  double t2864;
  double t2880;
  double t2945;
  double t2584;
  double t2610;
  double t2641;
  double t3153;
  double t3186;
  double t3226;
  double t3229;
  double t3285;
  double t3293;
  double t3820;
  double t3838;
  double t3842;
  double t3791;
  double t3799;
  double t3814;
  double t3854;
  double t3893;
  double t3899;
  double t3954;
  double t3969;
  double t3972;
  double t3931;
  double t3759;
  double t3782;
  double t3784;
  double t4056;
  double t4057;
  double t4061;
  double t4176;
  double t4177;
  double t4182;
  double t4084;
  double t4183;
  double t4193;
  double t4195;
  double t4223;
  double t4224;
  double t4228;
  double t4147;
  double t4149;
  double t4153;
  double t4354;
  double t4360;
  double t4365;
  double t4377;
  double t4378;
  double t4379;
  double t4381;
  double t4290;
  double t4312;
  double t4237;
  double t4242;
  double t4244;
  double t4462;
  double t4111;
  double t4127;
  double t4140;
  double t2068;
  double t2562;
  double t2572;
  double t4471;
  double t5016;
  double t5022;
  double t5023;
  double t5024;
  double t5033;
  double t5035;
  double t5039;
  double t5052;
  double t4941;
  double t4982;
  double t5157;
  double t5191;
  t206 = Cos(var1[7]);
  t237 = -1. + t206;
  t279 = Sin(var1[8]);
  t43 = Cos(var1[8]);
  t84 = -1.*t43;
  t86 = 1. + t84;
  t93 = -1.000000000016*t86;
  t136 = 1. + t93;
  t159 = Sin(var1[7]);
  t493 = -1. + t43;
  t332 = -1.*t206;
  t374 = 1. + t332;
  t502 = 1.6e-11*t493;
  t431 = -1.000000000016*t374;
  t464 = 1. + t431;
  t491 = 1.6e-11*t86;
  t536 = 1. + t491 + t502;
  t631 = 4.e-6*t493;
  t634 = -4.e-6*t43;
  t646 = t631 + t634;
  t742 = 5.136e-14*var1[8];
  t766 = -0.03874900000062*t86;
  t802 = 5.9484e-7*t493;
  t828 = -0.03875*t43;
  t833 = -0.299999999992*t279;
  t872 = t742 + t766 + t802 + t828 + t833;
  t930 = -1.284e-8*var1[8];
  t951 = 1. + t502;
  t953 = 0.14871*t951;
  t966 = -1.5499600000248e-7*t86;
  t968 = -1.55e-7*t493;
  t983 = -1.199999999968e-6*t279;
  t987 = t930 + t953 + t966 + t968 + t983;
  t994 = 0.80321*t136;
  t1023 = 0.503210000016051*t86;
  t1025 = -4.05159380016e-7*t279;
  t1049 = t994 + t1023 + t1025;
  t264 = 1.6e-11*t237;
  t274 = 1. + t264;
  t1111 = 4.e-6*t237*t536;
  t1162 = t206*t646;
  t1165 = t1111 + t1162;
  t708 = 0.281210000008499*t374;
  t730 = 0.03874900000062*t159;
  t873 = t159*t872;
  t993 = 4.e-6*t159*t987;
  t1066 = t464*t1049;
  t1080 = t708 + t730 + t873 + t993 + t1066;
  t1463 = -1. + t491;
  t1469 = 4.e-6*t1463;
  t1487 = 4.e-6*t86;
  t1509 = t1469 + t1487;
  t1529 = t491 + t84;
  t1347 = -1.2484e-7*var1[7];
  t1356 = -1.5499600000248e-7*t374;
  t1359 = 1.124840000016e-6*t159;
  t1362 = 4.e-6*t237*t872;
  t1381 = t274*t987;
  t1384 = -4.e-6*t159*t1049;
  t1456 = t1347 + t1356 + t1359 + t1362 + t1381 + t1384;
  t1193 = 4.9936e-13*var1[7];
  t1195 = -0.03874900000062*t374;
  t1197 = 0.281210000004*t159;
  t1229 = t206*t872;
  t1239 = 4.e-6*t237*t987;
  t1287 = -1.*t159*t1049;
  t1299 = t1193 + t1195 + t1197 + t1229 + t1239 + t1287;
  t1526 = 4.e-6*t237*t1509;
  t1540 = t206*t1529;
  t1565 = 1.000000000016*t159*t279;
  t1570 = t1526 + t1540 + t1565;
  t1791 = t646*t872;
  t1793 = t536*t987;
  t1800 = t1791 + t1793;
  t1813 = -1.*t1529*t872;
  t1819 = -1.*t1509*t987;
  t1830 = 1.000000000016*t1049*t279;
  t1841 = t1813 + t1819 + t1830;
  t200 = -4.e-6*t136*t159;
  t289 = -4.e-6*t274*t279;
  t297 = -4.e-6*t237*t279;
  t316 = t200 + t289 + t297;
  t467 = t464*t136;
  t470 = -1.000000000016*t159*t279;
  t473 = t467 + t470;
  t2153 = Cos(var1[6]);
  t2104 = Sin(var1[6]);
  t1303 = t274*t536;
  t1306 = 4.e-6*t237*t646;
  t1337 = t1303 + t1306;
  t630 = 4.e-6*t536*t159;
  t652 = t646*t159;
  t683 = t630 + t652;
  t2648 = -1.*t2153;
  t2650 = 1. + t2648;
  t2692 = 0.15121*t2650;
  t1301 = t1165*t1299;
  t1685 = -1.*t1299*t1570;
  t2720 = -0.15121*t2104;
  t2733 = t2104*t1080;
  t2742 = t2153*t1456;
  t2749 = t2692 + t2720 + t2733 + t2742;
  t1578 = 4.e-6*t1509*t159;
  t1591 = t1529*t159;
  t1619 = -1.000000000016*t464*t279;
  t1633 = t1578 + t1591 + t1619;
  t1644 = t274*t1509;
  t1654 = 4.e-6*t237*t1529;
  t1668 = 4.000000000064e-6*t159*t279;
  t1674 = t1644 + t1654 + t1668;
  t2957 = 0.15121*t2104;
  t2986 = t2153*t1080;
  t3095 = -1.*t2104*t1456;
  t3106 = t2692 + t2957 + t2986 + t3095;
  t2340 = Sin(var1[5]);
  t2125 = -1.*t2104*t316;
  t2161 = t2153*t473;
  t2176 = t2125 + t2161;
  t2077 = Cos(var1[5]);
  t2360 = t2153*t316;
  t2403 = t2104*t473;
  t2416 = t2360 + t2403;
  t2072 = Cos(var1[4]);
  t1944 = -1.*t136*t159;
  t2013 = -1.6e-11*t237*t279;
  t2024 = -1.*t206*t279;
  t2043 = t1944 + t2013 + t2024;
  t1919 = Sin(var1[4]);
  t2324 = t2077*t2176;
  t2540 = -1.*t2340*t2416;
  t2542 = t2324 + t2540;
  t3470 = Cos(var1[3]);
  t3443 = t2340*t2176;
  t3446 = t2077*t2416;
  t3462 = t3443 + t3446;
  t3415 = Sin(var1[3]);
  t3545 = t2072*t2043;
  t3560 = -1.*t1919*t2542;
  t3590 = t3545 + t3560;
  t2864 = -1.*t1337*t2104;
  t2880 = t2153*t683;
  t2945 = t2864 + t2880;
  t2584 = t2153*t1337;
  t2610 = t2104*t683;
  t2641 = t2584 + t2610;
  t3153 = t2104*t1633;
  t3186 = t2153*t1674;
  t3226 = t3153 + t3186;
  t3229 = t2153*t1633;
  t3285 = -1.*t2104*t1674;
  t3293 = t3229 + t3285;
  t3820 = t2340*t2945;
  t3838 = t2077*t2641;
  t3842 = t3820 + t3838;
  t3791 = -1.*t2340*t2749;
  t3799 = t2077*t3106;
  t3814 = t3791 + t3799;
  t3854 = t2077*t2749;
  t3893 = t2340*t3106;
  t3899 = t3854 + t3893;
  t3954 = t2077*t3226;
  t3969 = t2340*t3293;
  t3972 = t3954 + t3969;
  t3931 = t3842*t3899;
  t3759 = t2077*t2945;
  t3782 = -1.*t2340*t2641;
  t3784 = t3759 + t3782;
  t4056 = -1.*t2340*t3226;
  t4057 = t2077*t3293;
  t4061 = t4056 + t4057;
  t4176 = t1165*t1919;
  t4177 = t2072*t3784;
  t4182 = t4176 + t4177;
  t4084 = -1.*t3899*t3972;
  t4183 = t2072*t3814;
  t4193 = t1919*t1299;
  t4195 = t4183 + t4193;
  t4223 = t1919*t1570;
  t4224 = t2072*t4061;
  t4228 = t4223 + t4224;
  t4147 = -1.*t1919*t3814;
  t4149 = t2072*t1299;
  t4153 = t4147 + t4149;
  t4354 = -1.*t646*t872;
  t4360 = -1.*t536*t987;
  t4365 = t4354 + t4360;
  t4377 = t136*t1049;
  t4378 = -1.*t872*t279;
  t4379 = -4.e-6*t987*t279;
  t4381 = t4377 + t4378 + t4379;
  t4290 = -1.*t1165*t1299;
  t4312 = t1299*t2043;
  t4237 = t2072*t1570;
  t4242 = -1.*t1919*t4061;
  t4244 = t4237 + t4242;
  t4462 = -1.*t3842*t3899;
  t4111 = t2072*t1165;
  t4127 = -1.*t1919*t3784;
  t4140 = t4111 + t4127;
  t2068 = t1919*t2043;
  t2562 = t2072*t2542;
  t2572 = t2068 + t2562;
  t4471 = t3899*t3462;
  t5016 = -1.*t136*t1049;
  t5022 = t872*t279;
  t5023 = 4.e-6*t987*t279;
  t5024 = t5016 + t5022 + t5023;
  t5033 = t1529*t872;
  t5035 = t1509*t987;
  t5039 = -1.000000000016*t1049*t279;
  t5052 = t5033 + t5035 + t5039;
  t4941 = -1.*t1299*t2043;
  t4982 = t1299*t1570;
  t5157 = -1.*t3899*t3462;
  t5191 = t3899*t3972;
  p_output1[0]=t2572*var2[0] + (t3462*t3470 - 1.*t3415*t3590)*var2[1] + (t3415*t3462 + t3470*t3590)*var2[2] + ((t3931 + t4140*t4153 + t4182*t4195)*t4228 + t4182*(t4084 - 1.*t4195*t4228 - 1.*t4153*t4244))*var2[3] + ((t1301 + t3784*t3814 + t3931)*t3972 + t3842*(t1685 - 1.*t3814*t4061 + t4084))*var2[4] + (t1570*(t1301 + t2641*t2749 + t2945*t3106) + t1165*(t1685 - 1.*t2749*t3226 - 1.*t3106*t3293))*var2[5] + (t1165*(-1.*t1080*t1633 - 1.*t1456*t1674 + t1685) - 0.15121*t316 + 0.15121*t473 + t1570*(t1301 + t1337*t1456 + t1080*t683))*var2[6] + (0.038749*t136 + t1509*t1800 - 0.281210000004*t279 + t1841*t536 + 4.e-6*(-1.*t1529*t1800 - 1.*t1841*t646))*var2[7] - 4.05160619990483e-7*var2[8];
  p_output1[1]=t4228*var2[0] + (t3470*t3972 - 1.*t3415*t4244)*var2[1] + (t3415*t3972 + t3470*t4244)*var2[2] + (t2572*(-1.*t4140*t4153 - 1.*t4182*t4195 + t4462) + t4182*(t3590*t4153 + t2572*t4195 + t4471))*var2[3] + (t3462*(-1.*t3784*t3814 + t4290 + t4462) + t3842*(t2542*t3814 + t4312 + t4471))*var2[4] + (t2043*(-1.*t2641*t2749 - 1.*t2945*t3106 + t4290) + t1165*(t2416*t2749 + t2176*t3106 + t4312))*var2[5] + (0.15121*t1633 - 0.15121*t1674 + t1165*(t1456*t316 + t4312 + t1080*t473) + t2043*(-1.*t1337*t1456 + t4290 - 1.*t1080*t683))*var2[6] + (1.e-6*t1509 + 0.28121*t1529 - 0.03874900000062*t279 - 4.e-6*t279*t4365 + t4381*t536 + 4.e-6*(t279*t4365 - 1.*t4381*t646))*var2[7] + 0.300000000004851*var2[8];
  p_output1[2]=t4182*var2[0] + (t3470*t3842 - 1.*t3415*t4140)*var2[1] + (t3415*t3842 + t3470*t4140)*var2[2] + (t4228*(-1.*t3590*t4153 - 1.*t2572*t4195 + t5157) + t2572*(t4195*t4228 + t4153*t4244 + t5191))*var2[3] + (t3972*(-1.*t2542*t3814 + t4941 + t5157) + t3462*(t3814*t4061 + t4982 + t5191))*var2[4] + (t1570*(-1.*t2416*t2749 - 1.*t2176*t3106 + t4941) + t2043*(t2749*t3226 + t3106*t3293 + t4982))*var2[5] + (-0.15121*t1337 + t1570*(-1.*t1456*t316 - 1.*t1080*t473 + t4941) + t2043*(t1080*t1633 + t1456*t1674 + t4982) + 0.15121*t683)*var2[6] + (t1509*t5024 - 4.e-6*t279*t5052 + 4.e-6*(-1.*t1529*t5024 + t279*t5052) + 1.e-6*t536 + 0.28121*t646)*var2[7] - 1.284e-8*var2[8];
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
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dh_FlFoot_QuadrupleStance.hh"

namespace QuadrupleStance
{

void dh_FlFoot_QuadrupleStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
