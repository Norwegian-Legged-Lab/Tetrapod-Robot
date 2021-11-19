/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:30:58 GMT+01:00
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
  double t915;
  double t991;
  double t1030;
  double t153;
  double t1071;
  double t1089;
  double t1127;
  double t1170;
  double t1221;
  double t1245;
  double t953;
  double t1073;
  double t1075;
  double t1387;
  double t1389;
  double t1394;
  double t1883;
  double t1911;
  double t1924;
  double t2085;
  double t2234;
  double t2297;
  double t1535;
  double t1540;
  double t1550;
  double t2110;
  double t2160;
  double t2177;
  double t2379;
  double t2386;
  double t2412;
  double t2421;
  double t2306;
  double t2315;
  double t2332;
  double t2334;
  double t2342;
  double t2365;
  double t2864;
  double t2785;
  double t2792;
  double t2799;
  double t2816;
  double t2534;
  double t2549;
  double t2571;
  double t2612;
  double t2629;
  double t2631;
  double t1286;
  double t1294;
  double t1436;
  double t1462;
  double t1813;
  double t1948;
  double t2091;
  double t2093;
  double t2181;
  double t2195;
  double t2212;
  double t2251;
  double t2267;
  double t2268;
  double t2269;
  double t3237;
  double t3238;
  double t3247;
  double t3259;
  double t3262;
  double t3275;
  double t2378;
  double t2418;
  double t2459;
  double t2523;
  double t2643;
  double t2750;
  double t2754;
  double t2830;
  double t2833;
  double t2838;
  double t2840;
  double t2872;
  double t2904;
  double t3301;
  double t3303;
  double t3308;
  double t3312;
  double t3399;
  double t3402;
  double t3407;
  double t3411;
  double t3366;
  double t3376;
  double t3386;
  double t3388;
  double t3041;
  double t3051;
  double t3659;
  double t3660;
  double t3661;
  double t3669;
  double t3674;
  double t3675;
  double t3683;
  double t3690;
  double t3692;
  double t3744;
  double t3752;
  double t3766;
  double t3791;
  double t3792;
  double t3800;
  double t3776;
  double t3779;
  double t3780;
  double t3810;
  double t3813;
  double t3827;
  double t3980;
  double t4002;
  double t4012;
  double t4026;
  double t4029;
  double t4040;
  double t4045;
  double t4086;
  double t4096;
  double t4097;
  double t4063;
  double t4066;
  double t4072;
  double t4108;
  double t4123;
  double t4124;
  double t4273;
  double t4283;
  double t4285;
  double t4362;
  double t4369;
  double t4372;
  double t4379;
  double t4395;
  double t4398;
  double t4402;
  double t4420;
  double t4322;
  double t4330;
  double t4331;
  double t4344;
  double t4599;
  double t4601;
  double t4603;
  double t4606;
  double t4562;
  double t4576;
  double t4580;
  double t4585;
  double t4636;
  double t4638;
  t915 = Cos(var1[5]);
  t991 = Sin(var1[3]);
  t1030 = Sin(var1[4]);
  t153 = Cos(var1[3]);
  t1071 = Sin(var1[5]);
  t1089 = Cos(var1[6]);
  t1127 = -1.*t1089;
  t1170 = 1. + t1127;
  t1221 = 0.15121*t1170;
  t1245 = Sin(var1[6]);
  t953 = t153*t915;
  t1073 = -1.*t991*t1030*t1071;
  t1075 = t953 + t1073;
  t1387 = t915*t991*t1030;
  t1389 = t153*t1071;
  t1394 = t1387 + t1389;
  t1883 = Cos(var1[7]);
  t1911 = -1.*t1883;
  t1924 = 1. + t1911;
  t2085 = Sin(var1[7]);
  t2234 = Cos(var1[4]);
  t2297 = -1. + t1883;
  t1535 = t1089*t1075;
  t1540 = -1.*t1394*t1245;
  t1550 = t1535 + t1540;
  t2110 = t1089*t1394;
  t2160 = t1075*t1245;
  t2177 = t2110 + t2160;
  t2379 = Cos(var1[8]);
  t2386 = -1.*t2379;
  t2412 = 1. + t2386;
  t2421 = Sin(var1[8]);
  t2306 = -4.e-6*t2234*t2297*t991;
  t2315 = 1.6e-11*t2297;
  t2332 = 1. + t2315;
  t2334 = t2332*t1550;
  t2342 = 4.e-6*t2177*t2085;
  t2365 = t2306 + t2334 + t2342;
  t2864 = -1. + t2379;
  t2785 = -1.*t2234*t1883*t991;
  t2792 = 4.e-6*t2297*t1550;
  t2799 = t2177*t2085;
  t2816 = t2785 + t2792 + t2799;
  t2534 = -1.000000000016*t1924;
  t2549 = 1. + t2534;
  t2571 = t2549*t2177;
  t2612 = t2234*t991*t2085;
  t2629 = -4.e-6*t1550*t2085;
  t2631 = t2571 + t2612 + t2629;
  t1286 = -0.15121*t1245;
  t1294 = t1221 + t1286;
  t1436 = 0.15121*t1245;
  t1462 = t1221 + t1436;
  t1813 = -1.2484e-7*var1[7];
  t1948 = -1.5499600000248e-7*t1924;
  t2091 = 1.124840000016e-6*t2085;
  t2093 = t1813 + t1948 + t2091;
  t2181 = 0.281210000008499*t1924;
  t2195 = 0.03874900000062*t2085;
  t2212 = t2181 + t2195;
  t2251 = 4.9936e-13*var1[7];
  t2267 = -0.03874900000062*t1924;
  t2268 = 0.281210000004*t2085;
  t2269 = t2251 + t2267 + t2268;
  t3237 = t153*t2234*t1089*t1071;
  t3238 = t153*t2234*t915*t1245;
  t3247 = t3237 + t3238;
  t3259 = -1.*t153*t2234*t915*t1089;
  t3262 = t153*t2234*t1071*t1245;
  t3275 = t3259 + t3262;
  t2378 = -1.284e-8*var1[8];
  t2418 = -1.5499600000248e-7*t2412;
  t2459 = 2.012840000032e-6*t2421;
  t2523 = t2378 + t2418 + t2459;
  t2643 = 0.503210000016051*t2412;
  t2750 = 0.03874900000062*t2421;
  t2754 = t2643 + t2750;
  t2830 = 5.136e-14*var1[8];
  t2833 = -0.03874900000062*t2412;
  t2838 = 0.503210000008*t2421;
  t2840 = t2830 + t2833 + t2838;
  t2872 = 1.6e-11*t2864;
  t2904 = 1. + t2872;
  t3301 = -4.e-6*t153*t2297*t1030;
  t3303 = t2332*t3247;
  t3308 = 4.e-6*t3275*t2085;
  t3312 = t3301 + t3303 + t3308;
  t3399 = -1.*t153*t1883*t1030;
  t3402 = 4.e-6*t2297*t3247;
  t3407 = t3275*t2085;
  t3411 = t3399 + t3402 + t3407;
  t3366 = t2549*t3275;
  t3376 = t153*t1030*t2085;
  t3386 = -4.e-6*t3247*t2085;
  t3388 = t3366 + t3376 + t3386;
  t3041 = -1.000000000016*t2412;
  t3051 = 1. + t3041;
  t3659 = t153*t915*t1030;
  t3660 = -1.*t991*t1071;
  t3661 = t3659 + t3660;
  t3669 = t915*t991;
  t3674 = t153*t1030*t1071;
  t3675 = t3669 + t3674;
  t3683 = t1089*t3661;
  t3690 = -1.*t3675*t1245;
  t3692 = t3683 + t3690;
  t3744 = t1089*t3675;
  t3752 = t3661*t1245;
  t3766 = t3744 + t3752;
  t3791 = t2549*t3766;
  t3792 = -4.e-6*t3692*t2085;
  t3800 = t3791 + t3792;
  t3776 = t2332*t3692;
  t3779 = 4.e-6*t3766*t2085;
  t3780 = t3776 + t3779;
  t3810 = 4.e-6*t2297*t3692;
  t3813 = t3766*t2085;
  t3827 = t3810 + t3813;
  t3980 = -1.*t153*t915*t1030;
  t4002 = t991*t1071;
  t4012 = t3980 + t4002;
  t4026 = -1.*t1089*t4012;
  t4029 = t4026 + t3690;
  t4040 = -1.*t4012*t1245;
  t4045 = t3744 + t4040;
  t4086 = t2549*t4045;
  t4096 = -4.e-6*t4029*t2085;
  t4097 = t4086 + t4096;
  t4063 = t2332*t4029;
  t4066 = 4.e-6*t4045*t2085;
  t4072 = t4063 + t4066;
  t4108 = 4.e-6*t2297*t4029;
  t4123 = t4045*t2085;
  t4124 = t4108 + t4123;
  t4273 = t1089*t4012;
  t4283 = t3675*t1245;
  t4285 = t4273 + t4283;
  t4362 = -1.*t153*t2234*t1883;
  t4369 = -4.e-6*t1883*t4045;
  t4372 = -1.000000000016*t4285*t2085;
  t4379 = t4362 + t4369 + t4372;
  t4395 = t1883*t4285;
  t4398 = -1.*t153*t2234*t2085;
  t4402 = -4.e-6*t4045*t2085;
  t4420 = t4395 + t4398 + t4402;
  t4322 = 4.e-6*t1883*t4285;
  t4330 = -4.e-6*t153*t2234*t2085;
  t4331 = -1.6e-11*t4045*t2085;
  t4344 = t4322 + t4330 + t4331;
  t4599 = 4.e-6*t153*t2234*t2297;
  t4601 = t2332*t4045;
  t4603 = 4.e-6*t4285*t2085;
  t4606 = t4599 + t4601 + t4603;
  t4562 = t153*t2234*t1883;
  t4576 = 4.e-6*t2297*t4045;
  t4580 = t4285*t2085;
  t4585 = t4562 + t4576 + t4580;
  t4636 = t2549*t4285;
  t4638 = t4636 + t4398 + t4402;
  p_output1[0]=1.;
  p_output1[1]=t1075*t1294 + t1394*t1462 + t1550*t2093 + t2177*t2212 + t2365*t2523 + t2631*t2754 + t2816*t2840 - 0.03875*(t2421*t2631 + t2379*t2816 + 4.e-6*t2365*t2864) + 0.14871*(4.e-6*t2421*t2631 + 4.e-6*t2816*t2864 + t2365*t2904) + 0.80321*(-4.e-6*t2365*t2421 - 1.*t2421*t2816 + t2631*t3051) - 1.*t2234*t2269*t991;
  p_output1[2]=t1071*t1294*t153*t2234 - 1.*t1030*t153*t2269 + t2093*t3247 + t2212*t3275 + t2523*t3312 + t2754*t3388 + t2840*t3411 - 0.03875*(4.e-6*t2864*t3312 + t2421*t3388 + t2379*t3411) + 0.80321*(-4.e-6*t2421*t3312 + t3051*t3388 - 1.*t2421*t3411) + 0.14871*(t2904*t3312 + 4.e-6*t2421*t3388 + 4.e-6*t2864*t3411) - 1.*t1462*t153*t2234*t915;
  p_output1[3]=t1294*t3661 + t1462*t3675 + t2093*t3692 + t2212*t3766 + t2523*t3780 + t2754*t3800 + t2840*t3827 - 0.03875*(4.e-6*t2864*t3780 + t2421*t3800 + t2379*t3827) + 0.80321*(-4.e-6*t2421*t3780 + t3051*t3800 - 1.*t2421*t3827) + 0.14871*(t2904*t3780 + 4.e-6*t2421*t3800 + 4.e-6*t2864*t3827);
  p_output1[4]=(-0.15121*t1089 + t1436)*t3675 + (0.15121*t1089 + t1436)*t4012 + t2093*t4029 + t2212*t4045 + t2523*t4072 + t2754*t4097 + t2840*t4124 - 0.03875*(4.e-6*t2864*t4072 + t2421*t4097 + t2379*t4124) + 0.80321*(-4.e-6*t2421*t4072 + t3051*t4097 - 1.*t2421*t4124) + 0.14871*(t2904*t4072 + 4.e-6*t2421*t4097 + 4.e-6*t2864*t4124);
  p_output1[5]=t153*(4.9936e-13 + 0.281210000004*t1883 - 0.03874900000062*t2085)*t2234 + (-1.2484e-7 + 1.124840000016e-6*t1883 - 1.5499600000248e-7*t2085)*t4045 + (0.03874900000062*t1883 + 0.281210000008499*t2085)*t4285 + t2523*t4344 + t2754*t4379 + t2840*t4420 - 0.03875*(4.e-6*t2864*t4344 + t2421*t4379 + t2379*t4420) + 0.80321*(-4.e-6*t2421*t4344 + t3051*t4379 - 1.*t2421*t4420) + 0.14871*(t2904*t4344 + 4.e-6*t2421*t4379 + 4.e-6*t2864*t4420);
  p_output1[6]=(5.136e-14 + 0.503210000008*t2379 - 0.03874900000062*t2421)*t4585 + (-1.284e-8 + 2.012840000032e-6*t2379 - 1.5499600000248e-7*t2421)*t4606 + (0.03874900000062*t2379 + 0.503210000016051*t2421)*t4638 + 0.14871*(-4.e-6*t2421*t4585 - 1.6e-11*t2421*t4606 + 4.e-6*t2379*t4638) - 0.03875*(-1.*t2421*t4585 - 4.e-6*t2421*t4606 + t2379*t4638) + 0.80321*(-1.*t2379*t4585 - 4.e-6*t2379*t4606 - 1.000000000016*t2421*t4638);
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

#include "J_u_frontSwingFootHeight_ParallelStance.hh"

namespace ParallelStance
{

void J_u_frontSwingFootHeight_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
