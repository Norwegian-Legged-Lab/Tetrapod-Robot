/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:48:23 GMT+02:00
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
  double t25086;
  double t25351;
  double t25338;
  double t25342;
  double t25409;
  double t25075;
  double t25085;
  double t25766;
  double t25792;
  double t25836;
  double t25848;
  double t25882;
  double t25347;
  double t25684;
  double t25700;
  double t25312;
  double t25883;
  double t25896;
  double t25923;
  double t25931;
  double t25944;
  double t25958;
  double t25982;
  double t25984;
  double t25996;
  double t25998;
  double t25999;
  double t25316;
  double t25333;
  double t25773;
  double t25774;
  double t26131;
  double t26133;
  double t26154;
  double t25985;
  double t25987;
  double t26167;
  double t26168;
  double t26169;
  double t26176;
  double t26177;
  double t26188;
  double t26253;
  double t26254;
  double t26257;
  double t26269;
  double t26270;
  double t26306;
  double t26310;
  double t26312;
  double t26313;
  double t26320;
  double t26323;
  double t26334;
  double t26388;
  double t26392;
  double t26403;
  double t26409;
  double t26412;
  double t26413;
  double t26429;
  double t26430;
  double t26431;
  double t26439;
  double t26444;
  double t26446;
  double t26459;
  double t26461;
  double t26464;
  double t26514;
  double t26518;
  double t26519;
  t25086 = Sin(var1[3]);
  t25351 = Cos(var1[3]);
  t25338 = Cos(var1[5]);
  t25342 = Sin(var1[4]);
  t25409 = Sin(var1[5]);
  t25075 = Cos(var1[4]);
  t25085 = Sin(var1[9]);
  t25766 = Cos(var1[9]);
  t25792 = t25351*t25338;
  t25836 = -1.*t25086*t25342*t25409;
  t25848 = t25792 + t25836;
  t25882 = Sin(var1[10]);
  t25347 = t25338*t25086*t25342;
  t25684 = t25351*t25409;
  t25700 = t25347 + t25684;
  t25312 = Cos(var1[10]);
  t25883 = -1.*t25766*t25075*t25086;
  t25896 = -1.*t25085*t25848;
  t25923 = t25883 + t25896;
  t25931 = Sin(var1[11]);
  t25944 = -1.*t25882*t25700;
  t25958 = t25312*t25923;
  t25982 = t25944 + t25958;
  t25984 = Cos(var1[11]);
  t25996 = t25312*t25700;
  t25998 = t25882*t25923;
  t25999 = t25996 + t25998;
  t25316 = -1.*t25312;
  t25333 = 1. + t25316;
  t25773 = -1.*t25766;
  t25774 = 1. + t25773;
  t26131 = -1.*t25766*t25351*t25342;
  t26133 = -1.*t25351*t25075*t25085*t25409;
  t26154 = t26131 + t26133;
  t25985 = -1.*t25984;
  t25987 = 1. + t25985;
  t26167 = t25351*t25075*t25338*t25882;
  t26168 = t25312*t26154;
  t26169 = t26167 + t26168;
  t26176 = -1.*t25312*t25351*t25075*t25338;
  t26177 = t25882*t26154;
  t26188 = t26176 + t26177;
  t26253 = t25351*t25338*t25342;
  t26254 = -1.*t25086*t25409;
  t26257 = t26253 + t26254;
  t26269 = t25338*t25086;
  t26270 = t25351*t25342*t25409;
  t26306 = t26269 + t26270;
  t26310 = -1.*t25085*t25882*t26257;
  t26312 = t25312*t26306;
  t26313 = t26310 + t26312;
  t26320 = -1.*t25312*t25085*t26257;
  t26323 = -1.*t25882*t26306;
  t26334 = t26320 + t26323;
  t26388 = -1.*t25351*t25075*t25085;
  t26392 = -1.*t25766*t26306;
  t26403 = t26388 + t26392;
  t26409 = t25766*t25351*t25075;
  t26412 = -1.*t25085*t26306;
  t26413 = t26409 + t26412;
  t26429 = -1.*t25351*t25338*t25342;
  t26430 = t25086*t25409;
  t26431 = t26429 + t26430;
  t26439 = -1.*t25882*t26431;
  t26444 = t25312*t26413;
  t26446 = t26439 + t26444;
  t26459 = -1.*t25312*t26431;
  t26461 = -1.*t25882*t26413;
  t26464 = t26459 + t26461;
  t26514 = t25312*t26431;
  t26518 = t25882*t26413;
  t26519 = t26514 + t26518;
  p_output1[0]=1.;
  p_output1[1]=0.1575*t25075*t25085*t25086 - 0.325*t25333*t25700 + 0.1575*t25774*t25848 + 0.2255*(-1.*t25075*t25085*t25086 + t25766*t25848) + 0.325*t25882*t25923 - 0.575*t25931*t25982 - 0.575*t25987*t25999 - 0.0641*(t25982*t25984 + t25931*t25999) - 0.295*(-1.*t25931*t25982 + t25984*t25999);
  p_output1[2]=0.325*t25075*t25333*t25338*t25351 + 0.1575*t25085*t25342*t25351 + 0.2255*(-1.*t25085*t25342*t25351 + t25075*t25351*t25409*t25766) + 0.1575*t25075*t25351*t25409*t25774 + 0.325*t25882*t26154 - 0.575*t25931*t26169 - 0.575*t25987*t26188 - 0.0641*(t25984*t26169 + t25931*t26188) - 0.295*(-1.*t25931*t26169 + t25984*t26188);
  p_output1[3]=0.2255*t25766*t26257 + 0.1575*t25774*t26257 - 0.325*t25085*t25882*t26257 - 0.325*t25333*t26306 - 0.575*t25987*t26313 - 0.575*t25931*t26334 - 0.295*(t25984*t26313 - 1.*t25931*t26334) - 0.0641*(t25931*t26313 + t25984*t26334);
  p_output1[4]=-0.1575*t25075*t25351*t25766 + 0.1575*t25085*t26306 + 0.325*t25882*t26403 - 0.575*t25312*t25931*t26403 - 0.575*t25882*t25987*t26403 - 0.0641*(t25882*t25931*t26403 + t25312*t25984*t26403) - 0.295*(-1.*t25312*t25931*t26403 + t25882*t25984*t26403) + 0.2255*t26413;
  p_output1[5]=0.325*t25312*t26413 - 0.325*t25882*t26431 - 0.575*t25987*t26446 - 0.575*t25931*t26464 - 0.295*(t25984*t26446 - 1.*t25931*t26464) - 0.0641*(t25931*t26446 + t25984*t26464);
  p_output1[6]=-0.575*t25984*t26446 - 0.575*t25931*t26519 - 0.295*(-1.*t25984*t26446 - 1.*t25931*t26519) - 0.0641*(-1.*t25931*t26446 + t25984*t26519);
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

#include "J_swing_position_RlFoot_ParallelStance.hh"

namespace ParallelStance
{

void J_swing_position_RlFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
