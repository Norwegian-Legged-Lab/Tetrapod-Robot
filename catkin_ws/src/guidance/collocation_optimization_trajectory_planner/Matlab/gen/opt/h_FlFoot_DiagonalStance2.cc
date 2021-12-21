/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 20:18:04 GMT+01:00
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
  double t384;
  double t458;
  double t466;
  double t511;
  double t645;
  double t700;
  double t395;
  double t1326;
  double t1646;
  double t1676;
  double t1713;
  double t1742;
  double t2311;
  double t2362;
  double t1560;
  double t1576;
  double t1577;
  double t2052;
  double t2065;
  double t2077;
  double t2408;
  double t2409;
  double t2453;
  double t2491;
  double t2363;
  double t2377;
  double t2379;
  double t2381;
  double t2390;
  double t2398;
  double t2672;
  double t2588;
  double t2590;
  double t2595;
  double t2603;
  double t2540;
  double t2545;
  double t2546;
  double t2551;
  double t2561;
  double t2563;
  double t955;
  double t968;
  double t3002;
  double t2993;
  double t1379;
  double t1439;
  double t2999;
  double t3003;
  double t3023;
  double t3057;
  double t3060;
  double t3062;
  double t1593;
  double t1724;
  double t1760;
  double t1838;
  double t2195;
  double t2214;
  double t2261;
  double t2314;
  double t2322;
  double t2323;
  double t2329;
  double t3071;
  double t3072;
  double t3095;
  double t3103;
  double t3106;
  double t3110;
  double t2407;
  double t2471;
  double t2507;
  double t2521;
  double t2570;
  double t2576;
  double t2585;
  double t2621;
  double t2644;
  double t2661;
  double t2666;
  double t2674;
  double t2675;
  double t3132;
  double t3140;
  double t3141;
  double t3156;
  double t3195;
  double t3201;
  double t3202;
  double t3210;
  double t3167;
  double t3169;
  double t3177;
  double t3184;
  double t2765;
  double t2894;
  double t3354;
  double t3356;
  double t3364;
  double t3391;
  double t3420;
  double t3421;
  double t3472;
  double t3498;
  double t3507;
  double t3515;
  double t3522;
  double t3533;
  double t3553;
  double t3555;
  double t3559;
  double t3561;
  double t3696;
  double t3706;
  double t3711;
  double t3712;
  double t3566;
  double t3649;
  double t3662;
  double t3668;
  t384 = Cos(var1[4]);
  t458 = Cos(var1[6]);
  t466 = -1.*t458;
  t511 = 1. + t466;
  t645 = 0.15121*t511;
  t700 = Sin(var1[6]);
  t395 = Sin(var1[5]);
  t1326 = Cos(var1[5]);
  t1646 = Cos(var1[7]);
  t1676 = -1.*t1646;
  t1713 = 1. + t1676;
  t1742 = Sin(var1[7]);
  t2311 = Sin(var1[4]);
  t2362 = -1. + t1646;
  t1560 = -1.*t384*t458*t395;
  t1576 = -1.*t384*t1326*t700;
  t1577 = t1560 + t1576;
  t2052 = t384*t1326*t458;
  t2065 = -1.*t384*t395*t700;
  t2077 = t2052 + t2065;
  t2408 = Cos(var1[8]);
  t2409 = -1.*t2408;
  t2453 = 1. + t2409;
  t2491 = Sin(var1[8]);
  t2363 = 4.e-6*t2362*t2311;
  t2377 = 1.6e-11*t2362;
  t2379 = 1. + t2377;
  t2381 = t2379*t1577;
  t2390 = 4.e-6*t2077*t1742;
  t2398 = t2363 + t2381 + t2390;
  t2672 = -1. + t2408;
  t2588 = t1646*t2311;
  t2590 = 4.e-6*t2362*t1577;
  t2595 = t2077*t1742;
  t2603 = t2588 + t2590 + t2595;
  t2540 = -1.000000000016*t1713;
  t2545 = 1. + t2540;
  t2546 = t2545*t2077;
  t2551 = -1.*t2311*t1742;
  t2561 = -4.e-6*t1577*t1742;
  t2563 = t2546 + t2551 + t2561;
  t955 = -0.15121*t700;
  t968 = t645 + t955;
  t3002 = Sin(var1[3]);
  t2993 = Cos(var1[3]);
  t1379 = 0.15121*t700;
  t1439 = t645 + t1379;
  t2999 = t2993*t1326;
  t3003 = -1.*t3002*t2311*t395;
  t3023 = t2999 + t3003;
  t3057 = t1326*t3002*t2311;
  t3060 = t2993*t395;
  t3062 = t3057 + t3060;
  t1593 = -1.2484e-7*var1[7];
  t1724 = -1.5499600000248e-7*t1713;
  t1760 = 1.124840000016e-6*t1742;
  t1838 = t1593 + t1724 + t1760;
  t2195 = 0.281210000008499*t1713;
  t2214 = 0.03874900000062*t1742;
  t2261 = t2195 + t2214;
  t2314 = 4.9936e-13*var1[7];
  t2322 = -0.03874900000062*t1713;
  t2323 = 0.281210000004*t1742;
  t2329 = t2314 + t2322 + t2323;
  t3071 = t458*t3023;
  t3072 = -1.*t3062*t700;
  t3095 = t3071 + t3072;
  t3103 = t458*t3062;
  t3106 = t3023*t700;
  t3110 = t3103 + t3106;
  t2407 = -1.284e-8*var1[8];
  t2471 = -1.5499600000248e-7*t2453;
  t2507 = 2.012840000032e-6*t2491;
  t2521 = t2407 + t2471 + t2507;
  t2570 = 0.503210000016051*t2453;
  t2576 = 0.03874900000062*t2491;
  t2585 = t2570 + t2576;
  t2621 = 5.136e-14*var1[8];
  t2644 = -0.03874900000062*t2453;
  t2661 = 0.503210000008*t2491;
  t2666 = t2621 + t2644 + t2661;
  t2674 = 1.6e-11*t2672;
  t2675 = 1. + t2674;
  t3132 = -4.e-6*t384*t2362*t3002;
  t3140 = t2379*t3095;
  t3141 = 4.e-6*t3110*t1742;
  t3156 = t3132 + t3140 + t3141;
  t3195 = -1.*t384*t1646*t3002;
  t3201 = 4.e-6*t2362*t3095;
  t3202 = t3110*t1742;
  t3210 = t3195 + t3201 + t3202;
  t3167 = t2545*t3110;
  t3169 = t384*t3002*t1742;
  t3177 = -4.e-6*t3095*t1742;
  t3184 = t3167 + t3169 + t3177;
  t2765 = -1.000000000016*t2453;
  t2894 = 1. + t2765;
  t3354 = t1326*t3002;
  t3356 = t2993*t2311*t395;
  t3364 = t3354 + t3356;
  t3391 = -1.*t2993*t1326*t2311;
  t3420 = t3002*t395;
  t3421 = t3391 + t3420;
  t3472 = t458*t3364;
  t3498 = -1.*t3421*t700;
  t3507 = t3472 + t3498;
  t3515 = t458*t3421;
  t3522 = t3364*t700;
  t3533 = t3515 + t3522;
  t3553 = 4.e-6*t2993*t384*t2362;
  t3555 = t2379*t3507;
  t3559 = 4.e-6*t3533*t1742;
  t3561 = t3553 + t3555 + t3559;
  t3696 = t2993*t384*t1646;
  t3706 = 4.e-6*t2362*t3507;
  t3711 = t3533*t1742;
  t3712 = t3696 + t3706 + t3711;
  t3566 = t2545*t3533;
  t3649 = -1.*t2993*t384*t1742;
  t3662 = -4.e-6*t3507*t1742;
  t3668 = t3566 + t3649 + t3662;
  p_output1[0]=t1577*t1838 + t2077*t2261 + t2311*t2329 + t2398*t2521 + t2563*t2585 + t2603*t2666 - 0.03875*(t2491*t2563 + t2408*t2603 + 4.e-6*t2398*t2672) + 0.14871*(4.e-6*t2491*t2563 + 4.e-6*t2603*t2672 + t2398*t2675) + 0.80321*(-4.e-6*t2398*t2491 - 1.*t2491*t2603 + t2563*t2894) + t1326*t1439*t384 - 1.*t384*t395*t968 + var1[0] - 1.*var2[0];
  p_output1[1]=t1439*t3062 + t1838*t3095 + t2261*t3110 + t2521*t3156 + t2585*t3184 + t2666*t3210 - 0.03875*(4.e-6*t2672*t3156 + t2491*t3184 + t2408*t3210) + 0.80321*(-4.e-6*t2491*t3156 + t2894*t3184 - 1.*t2491*t3210) + 0.14871*(t2675*t3156 + 4.e-6*t2491*t3184 + 4.e-6*t2672*t3210) - 1.*t2329*t3002*t384 + t3023*t968 + var1[1] - 1.*var2[1];
  p_output1[2]=t1439*t3421 + t1838*t3507 + t2261*t3533 + t2521*t3561 + t2585*t3668 + t2666*t3712 - 0.03875*(4.e-6*t2672*t3561 + t2491*t3668 + t2408*t3712) + 0.80321*(-4.e-6*t2491*t3561 + t2894*t3668 - 1.*t2491*t3712) + 0.14871*(t2675*t3561 + 4.e-6*t2491*t3668 + 4.e-6*t2672*t3712) + t2329*t2993*t384 + t3364*t968 + var1[2] - 1.*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "h_FlFoot_DiagonalStance2.hh"

namespace TrotStance2
{

void h_FlFoot_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
