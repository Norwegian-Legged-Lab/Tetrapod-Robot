/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 18:38:25 GMT+02:00
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
  double t3398;
  double t2477;
  double t2536;
  double t3244;
  double t3402;
  double t4489;
  double t6499;
  double t6501;
  double t6527;
  double t6593;
  double t6601;
  double t1243;
  double t3362;
  double t4440;
  double t4476;
  double t8101;
  double t8108;
  double t8112;
  double t8159;
  double t8282;
  double t8302;
  double t8308;
  double t8309;
  double t8395;
  double t8415;
  double t8455;
  double t8472;
  double t2454;
  double t2461;
  double t4607;
  double t4613;
  double t8283;
  double t8291;
  double t9632;
  double t11226;
  double t11227;
  double t11235;
  double t11236;
  double t11270;
  double t11300;
  double t11301;
  double t11302;
  double t12453;
  double t12515;
  double t12551;
  double t12562;
  double t12595;
  double t12607;
  double t13344;
  double t13353;
  double t13358;
  double t13380;
  double t13381;
  double t13435;
  double t14709;
  double t14730;
  double t14740;
  double t13540;
  double t13552;
  double t14644;
  double t15102;
  double t15133;
  double t15134;
  double t16023;
  double t16029;
  double t16036;
  double t15190;
  double t15192;
  double t16017;
  double t16156;
  double t16159;
  double t16187;
  t3398 = Cos(var1[3]);
  t2477 = Cos(var1[5]);
  t2536 = Sin(var1[3]);
  t3244 = Sin(var1[4]);
  t3402 = Sin(var1[5]);
  t4489 = Cos(var1[6]);
  t6499 = t3398*t2477;
  t6501 = -1.*t2536*t3244*t3402;
  t6527 = t6499 + t6501;
  t6593 = Cos(var1[4]);
  t6601 = Sin(var1[6]);
  t1243 = Cos(var1[7]);
  t3362 = t2477*t2536*t3244;
  t4440 = t3398*t3402;
  t4476 = t3362 + t4440;
  t8101 = -1.*t6593*t4489*t2536;
  t8108 = -1.*t6527*t6601;
  t8112 = t8101 + t8108;
  t8159 = Sin(var1[7]);
  t8282 = Cos(var1[8]);
  t8302 = t1243*t4476;
  t8308 = t8112*t8159;
  t8309 = t8302 + t8308;
  t8395 = t1243*t8112;
  t8415 = -1.*t4476*t8159;
  t8455 = t8395 + t8415;
  t8472 = Sin(var1[8]);
  t2454 = -1.*t1243;
  t2461 = 1. + t2454;
  t4607 = -1.*t4489;
  t4613 = 1. + t4607;
  t8283 = -1.*t8282;
  t8291 = 1. + t8283;
  t9632 = -1.*t3398*t4489*t3244;
  t11226 = -1.*t3398*t6593*t3402*t6601;
  t11227 = t9632 + t11226;
  t11235 = -1.*t3398*t6593*t2477*t1243;
  t11236 = t11227*t8159;
  t11270 = t11235 + t11236;
  t11300 = t1243*t11227;
  t11301 = t3398*t6593*t2477*t8159;
  t11302 = t11300 + t11301;
  t12453 = t3398*t2477*t3244;
  t12515 = -1.*t2536*t3402;
  t12551 = t12453 + t12515;
  t12562 = t2477*t2536;
  t12595 = t3398*t3244*t3402;
  t12607 = t12562 + t12595;
  t13344 = t1243*t12607;
  t13353 = -1.*t12551*t6601*t8159;
  t13358 = t13344 + t13353;
  t13380 = -1.*t1243*t12551*t6601;
  t13381 = -1.*t12607*t8159;
  t13435 = t13380 + t13381;
  t14709 = -1.*t4489*t12607;
  t14730 = -1.*t3398*t6593*t6601;
  t14740 = t14709 + t14730;
  t13540 = t3398*t6593*t4489;
  t13552 = -1.*t12607*t6601;
  t14644 = t13540 + t13552;
  t15102 = -1.*t3398*t2477*t3244;
  t15133 = t2536*t3402;
  t15134 = t15102 + t15133;
  t16023 = -1.*t1243*t15134;
  t16029 = -1.*t14644*t8159;
  t16036 = t16023 + t16029;
  t15190 = t1243*t14644;
  t15192 = -1.*t15134*t8159;
  t16017 = t15190 + t15192;
  t16156 = t1243*t15134;
  t16159 = t14644*t8159;
  t16187 = t16156 + t16159;
  p_output1[0]=1.;
  p_output1[1]=0.325*t2461*t4476 + 0.1575*t4613*t6527 + 0.1575*t2536*t6593*t6601 + 0.2255*(t4489*t6527 - 1.*t2536*t6593*t6601) - 0.325*t8112*t8159 + 0.075*t8291*t8309 + 0.075*t8455*t8472 - 0.0641*(t8282*t8455 + t8309*t8472) + 0.355*(t8282*t8309 - 1.*t8455*t8472);
  p_output1[2]=-0.325*t2461*t2477*t3398*t6593 + 0.1575*t3398*t3402*t4613*t6593 + 0.1575*t3244*t3398*t6601 + 0.2255*(t3398*t3402*t4489*t6593 - 1.*t3244*t3398*t6601) - 0.325*t11227*t8159 + 0.075*t11270*t8291 + 0.075*t11302*t8472 - 0.0641*(t11302*t8282 + t11270*t8472) + 0.355*(t11270*t8282 - 1.*t11302*t8472);
  p_output1[3]=0.325*t12607*t2461 + 0.2255*t12551*t4489 + 0.1575*t12551*t4613 + 0.325*t12551*t6601*t8159 + 0.075*t13358*t8291 + 0.075*t13435*t8472 - 0.0641*(t13435*t8282 + t13358*t8472) + 0.355*(t13358*t8282 - 1.*t13435*t8472);
  p_output1[4]=0.2255*t14644 - 0.1575*t3398*t4489*t6593 + 0.1575*t12607*t6601 - 0.325*t14740*t8159 + 0.075*t14740*t8159*t8291 + 0.075*t1243*t14740*t8472 + 0.355*(t14740*t8159*t8282 - 1.*t1243*t14740*t8472) - 0.0641*(t1243*t14740*t8282 + t14740*t8159*t8472);
  p_output1[5]=-0.325*t1243*t14644 + 0.325*t15134*t8159 + 0.075*t16017*t8291 + 0.075*t16036*t8472 - 0.0641*(t16036*t8282 + t16017*t8472) + 0.355*(t16017*t8282 - 1.*t16036*t8472);
  p_output1[6]=0.075*t16017*t8282 + 0.075*t16187*t8472 - 0.0641*(t16187*t8282 - 1.*t16017*t8472) + 0.355*(-1.*t16017*t8282 - 1.*t16187*t8472);
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

#include "J_u_frontSwingFootHeight2_ParallelStance_ParallelStance.hh"

namespace SymFunction
{

void J_u_frontSwingFootHeight2_ParallelStance_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
