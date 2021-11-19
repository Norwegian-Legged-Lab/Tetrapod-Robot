/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:29:40 GMT+01:00
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
  double t708;
  double t774;
  double t997;
  double t652;
  double t1035;
  double t1192;
  double t1256;
  double t1322;
  double t1327;
  double t1394;
  double t729;
  double t1042;
  double t1124;
  double t1560;
  double t1624;
  double t1646;
  double t1926;
  double t1933;
  double t1943;
  double t2021;
  double t2256;
  double t2317;
  double t1681;
  double t1787;
  double t1790;
  double t2159;
  double t2179;
  double t2185;
  double t2488;
  double t2514;
  double t2542;
  double t2558;
  double t2331;
  double t2342;
  double t2399;
  double t2433;
  double t2455;
  double t2464;
  double t3054;
  double t2998;
  double t3008;
  double t3010;
  double t3012;
  double t2657;
  double t2747;
  double t2800;
  double t2837;
  double t2864;
  double t2902;
  double t1516;
  double t1536;
  double t1647;
  double t1653;
  double t1904;
  double t1991;
  double t2035;
  double t2068;
  double t2217;
  double t2225;
  double t2248;
  double t2264;
  double t2278;
  double t2284;
  double t2292;
  double t3414;
  double t3415;
  double t3434;
  double t3445;
  double t3474;
  double t3481;
  double t2476;
  double t2555;
  double t2561;
  double t2600;
  double t2906;
  double t2949;
  double t2966;
  double t3015;
  double t3034;
  double t3035;
  double t3045;
  double t3058;
  double t3061;
  double t3532;
  double t3536;
  double t3540;
  double t3545;
  double t3609;
  double t3611;
  double t3612;
  double t3624;
  double t3568;
  double t3579;
  double t3594;
  double t3606;
  double t3153;
  double t3181;
  double t3839;
  double t3845;
  double t3846;
  double t3850;
  double t3867;
  double t3875;
  double t3902;
  double t3908;
  double t3911;
  double t3917;
  double t3934;
  double t3945;
  double t4016;
  double t4020;
  double t4025;
  double t3969;
  double t3974;
  double t3993;
  double t4034;
  double t4035;
  double t4049;
  double t4201;
  double t4206;
  double t4208;
  double t4235;
  double t4248;
  double t4260;
  double t4262;
  double t4321;
  double t4322;
  double t4335;
  double t4295;
  double t4301;
  double t4304;
  double t4351;
  double t4359;
  double t4363;
  double t4479;
  double t4480;
  double t4483;
  double t4552;
  double t4555;
  double t4556;
  double t4560;
  double t4566;
  double t4568;
  double t4569;
  double t4571;
  double t4524;
  double t4534;
  double t4535;
  double t4543;
  double t4739;
  double t4760;
  double t4762;
  double t4766;
  double t4675;
  double t4690;
  double t4701;
  double t4702;
  double t4794;
  double t4804;
  t708 = Cos(var1[5]);
  t774 = Sin(var1[3]);
  t997 = Sin(var1[4]);
  t652 = Cos(var1[3]);
  t1035 = Sin(var1[5]);
  t1192 = Cos(var1[6]);
  t1256 = -1.*t1192;
  t1322 = 1. + t1256;
  t1327 = 0.15121*t1322;
  t1394 = Sin(var1[6]);
  t729 = t652*t708;
  t1042 = -1.*t774*t997*t1035;
  t1124 = t729 + t1042;
  t1560 = t708*t774*t997;
  t1624 = t652*t1035;
  t1646 = t1560 + t1624;
  t1926 = Cos(var1[7]);
  t1933 = -1.*t1926;
  t1943 = 1. + t1933;
  t2021 = Sin(var1[7]);
  t2256 = Cos(var1[4]);
  t2317 = -1. + t1926;
  t1681 = t1192*t1124;
  t1787 = -1.*t1646*t1394;
  t1790 = t1681 + t1787;
  t2159 = t1192*t1646;
  t2179 = t1124*t1394;
  t2185 = t2159 + t2179;
  t2488 = Cos(var1[8]);
  t2514 = -1.*t2488;
  t2542 = 1. + t2514;
  t2558 = Sin(var1[8]);
  t2331 = -4.e-6*t2256*t2317*t774;
  t2342 = 1.6e-11*t2317;
  t2399 = 1. + t2342;
  t2433 = t2399*t1790;
  t2455 = 4.e-6*t2185*t2021;
  t2464 = t2331 + t2433 + t2455;
  t3054 = -1. + t2488;
  t2998 = -1.*t2256*t1926*t774;
  t3008 = 4.e-6*t2317*t1790;
  t3010 = t2185*t2021;
  t3012 = t2998 + t3008 + t3010;
  t2657 = -1.000000000016*t1943;
  t2747 = 1. + t2657;
  t2800 = t2747*t2185;
  t2837 = t2256*t774*t2021;
  t2864 = -4.e-6*t1790*t2021;
  t2902 = t2800 + t2837 + t2864;
  t1516 = -0.15121*t1394;
  t1536 = t1327 + t1516;
  t1647 = 0.15121*t1394;
  t1653 = t1327 + t1647;
  t1904 = -1.2484e-7*var1[7];
  t1991 = -1.5499600000248e-7*t1943;
  t2035 = 1.124840000016e-6*t2021;
  t2068 = t1904 + t1991 + t2035;
  t2217 = 0.281210000008499*t1943;
  t2225 = 0.03874900000062*t2021;
  t2248 = t2217 + t2225;
  t2264 = 4.9936e-13*var1[7];
  t2278 = -0.03874900000062*t1943;
  t2284 = 0.281210000004*t2021;
  t2292 = t2264 + t2278 + t2284;
  t3414 = t652*t2256*t1192*t1035;
  t3415 = t652*t2256*t708*t1394;
  t3434 = t3414 + t3415;
  t3445 = -1.*t652*t2256*t708*t1192;
  t3474 = t652*t2256*t1035*t1394;
  t3481 = t3445 + t3474;
  t2476 = -1.284e-8*var1[8];
  t2555 = -1.5499600000248e-7*t2542;
  t2561 = 2.012840000032e-6*t2558;
  t2600 = t2476 + t2555 + t2561;
  t2906 = 0.503210000016051*t2542;
  t2949 = 0.03874900000062*t2558;
  t2966 = t2906 + t2949;
  t3015 = 5.136e-14*var1[8];
  t3034 = -0.03874900000062*t2542;
  t3035 = 0.503210000008*t2558;
  t3045 = t3015 + t3034 + t3035;
  t3058 = 1.6e-11*t3054;
  t3061 = 1. + t3058;
  t3532 = -4.e-6*t652*t2317*t997;
  t3536 = t2399*t3434;
  t3540 = 4.e-6*t3481*t2021;
  t3545 = t3532 + t3536 + t3540;
  t3609 = -1.*t652*t1926*t997;
  t3611 = 4.e-6*t2317*t3434;
  t3612 = t3481*t2021;
  t3624 = t3609 + t3611 + t3612;
  t3568 = t2747*t3481;
  t3579 = t652*t997*t2021;
  t3594 = -4.e-6*t3434*t2021;
  t3606 = t3568 + t3579 + t3594;
  t3153 = -1.000000000016*t2542;
  t3181 = 1. + t3153;
  t3839 = t652*t708*t997;
  t3845 = -1.*t774*t1035;
  t3846 = t3839 + t3845;
  t3850 = t708*t774;
  t3867 = t652*t997*t1035;
  t3875 = t3850 + t3867;
  t3902 = t1192*t3846;
  t3908 = -1.*t3875*t1394;
  t3911 = t3902 + t3908;
  t3917 = t1192*t3875;
  t3934 = t3846*t1394;
  t3945 = t3917 + t3934;
  t4016 = t2747*t3945;
  t4020 = -4.e-6*t3911*t2021;
  t4025 = t4016 + t4020;
  t3969 = t2399*t3911;
  t3974 = 4.e-6*t3945*t2021;
  t3993 = t3969 + t3974;
  t4034 = 4.e-6*t2317*t3911;
  t4035 = t3945*t2021;
  t4049 = t4034 + t4035;
  t4201 = -1.*t652*t708*t997;
  t4206 = t774*t1035;
  t4208 = t4201 + t4206;
  t4235 = -1.*t1192*t4208;
  t4248 = t4235 + t3908;
  t4260 = -1.*t4208*t1394;
  t4262 = t3917 + t4260;
  t4321 = t2747*t4262;
  t4322 = -4.e-6*t4248*t2021;
  t4335 = t4321 + t4322;
  t4295 = t2399*t4248;
  t4301 = 4.e-6*t4262*t2021;
  t4304 = t4295 + t4301;
  t4351 = 4.e-6*t2317*t4248;
  t4359 = t4262*t2021;
  t4363 = t4351 + t4359;
  t4479 = t1192*t4208;
  t4480 = t3875*t1394;
  t4483 = t4479 + t4480;
  t4552 = -1.*t652*t2256*t1926;
  t4555 = -4.e-6*t1926*t4262;
  t4556 = -1.000000000016*t4483*t2021;
  t4560 = t4552 + t4555 + t4556;
  t4566 = t1926*t4483;
  t4568 = -1.*t652*t2256*t2021;
  t4569 = -4.e-6*t4262*t2021;
  t4571 = t4566 + t4568 + t4569;
  t4524 = 4.e-6*t1926*t4483;
  t4534 = -4.e-6*t652*t2256*t2021;
  t4535 = -1.6e-11*t4262*t2021;
  t4543 = t4524 + t4534 + t4535;
  t4739 = 4.e-6*t652*t2256*t2317;
  t4760 = t2399*t4262;
  t4762 = 4.e-6*t4483*t2021;
  t4766 = t4739 + t4760 + t4762;
  t4675 = t652*t2256*t1926;
  t4690 = 4.e-6*t2317*t4262;
  t4701 = t4483*t2021;
  t4702 = t4675 + t4690 + t4701;
  t4794 = t2747*t4483;
  t4804 = t4794 + t4568 + t4569;
  p_output1[0]=1.;
  p_output1[1]=t1124*t1536 + t1646*t1653 + t1790*t2068 + t2185*t2248 + t2464*t2600 + t2902*t2966 + t3012*t3045 - 0.03875*(t2558*t2902 + t2488*t3012 + 4.e-6*t2464*t3054) + 0.14871*(4.e-6*t2558*t2902 + 4.e-6*t3012*t3054 + t2464*t3061) + 0.80321*(-4.e-6*t2464*t2558 - 1.*t2558*t3012 + t2902*t3181) - 1.*t2256*t2292*t774;
  p_output1[2]=t2068*t3434 + t2248*t3481 + t2600*t3545 + t2966*t3606 + t3045*t3624 - 0.03875*(4.e-6*t3054*t3545 + t2558*t3606 + t2488*t3624) + 0.80321*(-4.e-6*t2558*t3545 + t3181*t3606 - 1.*t2558*t3624) + 0.14871*(t3061*t3545 + 4.e-6*t2558*t3606 + 4.e-6*t3054*t3624) + t1035*t1536*t2256*t652 - 1.*t1653*t2256*t652*t708 - 1.*t2292*t652*t997;
  p_output1[3]=t1536*t3846 + t1653*t3875 + t2068*t3911 + t2248*t3945 + t2600*t3993 + t2966*t4025 + t3045*t4049 - 0.03875*(4.e-6*t3054*t3993 + t2558*t4025 + t2488*t4049) + 0.80321*(-4.e-6*t2558*t3993 + t3181*t4025 - 1.*t2558*t4049) + 0.14871*(t3061*t3993 + 4.e-6*t2558*t4025 + 4.e-6*t3054*t4049);
  p_output1[4]=(-0.15121*t1192 + t1647)*t3875 + (0.15121*t1192 + t1647)*t4208 + t2068*t4248 + t2248*t4262 + t2600*t4304 + t2966*t4335 + t3045*t4363 - 0.03875*(4.e-6*t3054*t4304 + t2558*t4335 + t2488*t4363) + 0.80321*(-4.e-6*t2558*t4304 + t3181*t4335 - 1.*t2558*t4363) + 0.14871*(t3061*t4304 + 4.e-6*t2558*t4335 + 4.e-6*t3054*t4363);
  p_output1[5]=(-1.2484e-7 + 1.124840000016e-6*t1926 - 1.5499600000248e-7*t2021)*t4262 + (0.03874900000062*t1926 + 0.281210000008499*t2021)*t4483 + t2600*t4543 + t2966*t4560 + t3045*t4571 - 0.03875*(4.e-6*t3054*t4543 + t2558*t4560 + t2488*t4571) + 0.80321*(-4.e-6*t2558*t4543 + t3181*t4560 - 1.*t2558*t4571) + 0.14871*(t3061*t4543 + 4.e-6*t2558*t4560 + 4.e-6*t3054*t4571) + (4.9936e-13 + 0.281210000004*t1926 - 0.03874900000062*t2021)*t2256*t652;
  p_output1[6]=(5.136e-14 + 0.503210000008*t2488 - 0.03874900000062*t2558)*t4702 + (-1.284e-8 + 2.012840000032e-6*t2488 - 1.5499600000248e-7*t2558)*t4766 + (0.03874900000062*t2488 + 0.503210000016051*t2558)*t4804 + 0.14871*(-4.e-6*t2558*t4702 - 1.6e-11*t2558*t4766 + 4.e-6*t2488*t4804) - 0.03875*(-1.*t2558*t4702 - 4.e-6*t2558*t4766 + t2488*t4804) + 0.80321*(-1.*t2488*t4702 - 4.e-6*t2488*t4766 - 1.000000000016*t2558*t4804);
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
