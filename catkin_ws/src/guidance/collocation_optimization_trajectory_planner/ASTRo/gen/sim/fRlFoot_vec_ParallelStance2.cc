/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:21:16 GMT+02:00
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
  double t693;
  double t3674;
  double t776;
  double t20187;
  double t20192;
  double t20173;
  double t20201;
  double t3488;
  double t20221;
  double t20222;
  double t20226;
  double t12118;
  double t20213;
  double t20237;
  double t20238;
  double t20239;
  double t3620;
  double t14708;
  double t14709;
  double t20303;
  double t20289;
  double t20189;
  double t20203;
  double t20204;
  double t20230;
  double t20231;
  double t20232;
  double t20240;
  double t20244;
  double t20245;
  double t20304;
  double t20309;
  double t20313;
  double t20322;
  double t20324;
  double t20328;
  double t20333;
  double t20338;
  double t20339;
  double t20346;
  double t20348;
  double t20349;
  double t20351;
  double t20353;
  double t20355;
  double t20220;
  double t20233;
  double t20234;
  double t20375;
  double t20376;
  double t20380;
  double t20382;
  double t20384;
  double t20385;
  double t20387;
  double t20389;
  double t20391;
  double t20392;
  double t20393;
  double t20394;
  double t20395;
  double t20399;
  double t20400;
  double t20401;
  double t20377;
  double t20378;
  double t20379;
  double t20396;
  double t20397;
  double t20405;
  double t20406;
  double t20407;
  double t20408;
  double t20410;
  double t20411;
  double t20412;
  double t20398;
  double t20402;
  double t20403;
  double t20409;
  double t20413;
  double t20414;
  double t20417;
  double t20418;
  double t20419;
  double t20236;
  double t20246;
  double t20247;
  double t20404;
  double t20423;
  double t20432;
  double t20438;
  double t20445;
  double t20451;
  double t20477;
  double t20481;
  t693 = Cos(var1[4]);
  t3674 = Cos(var1[9]);
  t776 = Cos(var1[5]);
  t20187 = Cos(var1[11]);
  t20192 = Sin(var1[10]);
  t20173 = Cos(var1[10]);
  t20201 = Sin(var1[11]);
  t3488 = Sin(var1[9]);
  t20221 = -1.*t20187*t20192;
  t20222 = t20173*t20201;
  t20226 = t20221 + t20222;
  t12118 = Sin(var1[5]);
  t20213 = Sin(var1[4]);
  t20237 = -1.*t20173*t20187;
  t20238 = -1.*t20192*t20201;
  t20239 = t20237 + t20238;
  t3620 = t776*t3488;
  t14708 = t3674*t12118;
  t14709 = t3620 + t14708;
  t20303 = Cos(var1[3]);
  t20289 = Sin(var1[3]);
  t20189 = t20173*t20187;
  t20203 = t20192*t20201;
  t20204 = t20189 + t20203;
  t20230 = t3674*t776*t20226;
  t20231 = -1.*t3488*t20226*t12118;
  t20232 = t20230 + t20231;
  t20240 = t3674*t776*t20239;
  t20244 = -1.*t3488*t20239*t12118;
  t20245 = t20240 + t20244;
  t20304 = -1.*t3674*t776;
  t20309 = t3488*t12118;
  t20313 = t20304 + t20309;
  t20322 = t776*t3488*t20226;
  t20324 = t3674*t20226*t12118;
  t20328 = t20322 + t20324;
  t20333 = t693*t20204;
  t20338 = -1.*t20213*t20232;
  t20339 = t20333 + t20338;
  t20346 = t776*t3488*t20239;
  t20348 = t3674*t20239*t12118;
  t20349 = t20346 + t20348;
  t20351 = t693*t20226;
  t20353 = -1.*t20213*t20245;
  t20355 = t20351 + t20353;
  t20220 = t20204*t20213;
  t20233 = t693*t20232;
  t20234 = t20220 + t20233;
  t20375 = -1.*t3674;
  t20376 = 1. + t20375;
  t20380 = -1.*t20173;
  t20382 = 1. + t20380;
  t20384 = -0.28121*t20382;
  t20385 = -1.*t20187;
  t20387 = 1. + t20385;
  t20389 = -0.50321*t20387;
  t20391 = -0.19821*t20187;
  t20392 = t20389 + t20391;
  t20393 = t20173*t20392;
  t20394 = 0.305*t20192*t20201;
  t20395 = t20384 + t20393 + t20394;
  t20399 = -0.15121*t20376;
  t20400 = t3674*t20395;
  t20401 = t20399 + t20400;
  t20377 = 0.15121*t20376;
  t20378 = 0.15121*t3674;
  t20379 = 0.15121*t3488;
  t20396 = t3488*t20395;
  t20397 = t20377 + t20378 + t20379 + t20396;
  t20405 = 0.28121*t20192;
  t20406 = t20392*t20192;
  t20407 = -0.305*t20173*t20201;
  t20408 = t20405 + t20406 + t20407;
  t20410 = t776*t20401;
  t20411 = -1.*t20397*t12118;
  t20412 = t20410 + t20411;
  t20398 = t776*t20397;
  t20402 = t20401*t12118;
  t20403 = t20398 + t20402;
  t20409 = t20408*t20213;
  t20413 = t693*t20412;
  t20414 = t20409 + t20413;
  t20417 = t693*t20408;
  t20418 = -1.*t20213*t20412;
  t20419 = t20417 + t20418;
  t20236 = t20226*t20213;
  t20246 = t693*t20245;
  t20247 = t20236 + t20246;
  t20404 = -1.*t20313*t20403;
  t20423 = t20328*t20403;
  t20432 = t20313*t20403;
  t20438 = -1.*t20349*t20403;
  t20445 = -1.*t20328*t20403;
  t20451 = t20349*t20403;
  t20477 = -1.*t20408*t20204;
  t20481 = t20408*t20226;
  p_output1[0]=t20247*var2[0] + t14709*t693*var2[1] + t20234*var2[2];
  p_output1[1]=(t20303*t20349 - 1.*t20289*t20355)*var2[0] + (t14709*t20213*t20289 + t20303*t20313)*var2[1] + (t20303*t20328 - 1.*t20289*t20339)*var2[2];
  p_output1[2]=(t20289*t20349 + t20303*t20355)*var2[0] + (-1.*t14709*t20213*t20303 + t20289*t20313)*var2[1] + (t20289*t20328 + t20303*t20339)*var2[2];
  p_output1[3]=(t14709*(t20234*t20414 + t20339*t20419 + t20423)*t693 + t20234*(t20404 + t14709*t20213*t20419 - 1.*t14709*t20414*t693))*var2[0] + (t20247*(-1.*t20234*t20414 - 1.*t20339*t20419 + t20445) + t20234*(t20247*t20414 + t20355*t20419 + t20451))*var2[1] + (t14709*(-1.*t20247*t20414 - 1.*t20355*t20419 + t20438)*t693 + t20247*(-1.*t14709*t20213*t20419 + t20432 + t14709*t20414*t693))*var2[2];
  p_output1[4]=(t20328*(t20404 - 1.*t14709*t20412) + t20313*(t20204*t20408 + t20232*t20412 + t20423))*var2[0] + (t20349*(-1.*t20232*t20412 + t20445 + t20477) + t20328*(t20245*t20412 + t20451 + t20481))*var2[1] + (t20349*(t14709*t20412 + t20432) + t20313*(-1.*t20226*t20408 - 1.*t20245*t20412 + t20438))*var2[2];
  p_output1[5]=t20204*(-1.*t20401*t3488 + t20397*t3674)*var2[0] + (t20226*(t20477 - 1.*t20226*t20397*t3488 - 1.*t20226*t20401*t3674) + t20204*(t20481 + t20239*t20397*t3488 + t20239*t20401*t3674))*var2[1] + t20226*(t20401*t3488 - 1.*t20397*t3674)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(0.15121*t20204 + 0.15121*t20239)*var2[0] + (-0.15121 + t20226*(-1.*t20226*t20395 + t20477) + t20204*(t20239*t20395 + t20481))*var2[1];
  p_output1[10]=(0.28121*t20201 - 0.305*t20187*t20201 + t20201*t20392)*var2[0] + (0.28121*t20187 + 0.305*Power(t20201,2) + t20187*t20392)*var2[2];
  p_output1[11]=-0.305*var2[2];
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

#include "fRlFoot_vec_ParallelStance2.hh"

namespace SymFunction
{

void fRlFoot_vec_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
