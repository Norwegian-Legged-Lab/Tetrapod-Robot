/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 18:49:38 GMT+02:00
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
  double t7072;
  double t7223;
  double t7236;
  double t7243;
  double t7249;
  double t7115;
  double t7198;
  double t7264;
  double t7266;
  double t7267;
  double t7268;
  double t7271;
  double t7276;
  double t7278;
  double t7280;
  double t7326;
  double t7330;
  double t7331;
  double t7332;
  double t7203;
  double t7206;
  double t7224;
  double t7231;
  double t7352;
  double t7350;
  double t7363;
  double t7364;
  double t7371;
  double t7273;
  double t7274;
  double t7351;
  double t7355;
  double t7360;
  double t7385;
  double t7387;
  double t7391;
  double t7399;
  double t7400;
  double t7401;
  double t7403;
  double t7408;
  double t7412;
  double t7437;
  double t7438;
  double t7439;
  double t7431;
  double t7433;
  double t7435;
  double t7446;
  double t7447;
  double t7448;
  double t7450;
  double t7451;
  double t7453;
  double t7456;
  double t7458;
  double t7460;
  t7072 = Cos(var1[4]);
  t7223 = Cos(var1[6]);
  t7236 = Sin(var1[5]);
  t7243 = Sin(var1[4]);
  t7249 = Sin(var1[6]);
  t7115 = Cos(var1[5]);
  t7198 = Cos(var1[7]);
  t7264 = t7223*t7243;
  t7266 = t7072*t7236*t7249;
  t7267 = t7264 + t7266;
  t7268 = Sin(var1[7]);
  t7271 = Cos(var1[8]);
  t7276 = t7072*t7115*t7198;
  t7278 = t7267*t7268;
  t7280 = t7276 + t7278;
  t7326 = t7198*t7267;
  t7330 = -1.*t7072*t7115*t7268;
  t7331 = t7326 + t7330;
  t7332 = Sin(var1[8]);
  t7203 = -1.*t7198;
  t7206 = 1. + t7203;
  t7224 = -1.*t7223;
  t7231 = 1. + t7224;
  t7352 = Cos(var1[3]);
  t7350 = Sin(var1[3]);
  t7363 = t7352*t7115;
  t7364 = -1.*t7350*t7243*t7236;
  t7371 = t7363 + t7364;
  t7273 = -1.*t7271;
  t7274 = 1. + t7273;
  t7351 = t7115*t7350*t7243;
  t7355 = t7352*t7236;
  t7360 = t7351 + t7355;
  t7385 = -1.*t7072*t7223*t7350;
  t7387 = -1.*t7371*t7249;
  t7391 = t7385 + t7387;
  t7399 = t7198*t7360;
  t7400 = t7391*t7268;
  t7401 = t7399 + t7400;
  t7403 = t7198*t7391;
  t7408 = -1.*t7360*t7268;
  t7412 = t7403 + t7408;
  t7437 = t7115*t7350;
  t7438 = t7352*t7243*t7236;
  t7439 = t7437 + t7438;
  t7431 = -1.*t7352*t7115*t7243;
  t7433 = t7350*t7236;
  t7435 = t7431 + t7433;
  t7446 = t7352*t7072*t7223;
  t7447 = -1.*t7439*t7249;
  t7448 = t7446 + t7447;
  t7450 = t7198*t7435;
  t7451 = t7448*t7268;
  t7453 = t7450 + t7451;
  t7456 = t7198*t7448;
  t7458 = -1.*t7435*t7268;
  t7460 = t7456 + t7458;
  p_output1[0]=0.325*t7072*t7115*t7206 - 0.1575*t7072*t7231*t7236 - 0.1575*t7243*t7249 + 0.2255*(-1.*t7072*t7223*t7236 + t7243*t7249) - 0.325*t7267*t7268 + 0.075*t7274*t7280 + 0.075*t7331*t7332 - 0.0641*(t7271*t7331 + t7280*t7332) + 0.355*(t7271*t7280 - 1.*t7331*t7332) + var1[0] - 1.*var2[0];
  p_output1[1]=0.1575*t7072*t7249*t7350 + 0.325*t7206*t7360 + 0.1575*t7231*t7371 + 0.2255*(-1.*t7072*t7249*t7350 + t7223*t7371) - 0.325*t7268*t7391 + 0.075*t7274*t7401 + 0.075*t7332*t7412 - 0.0641*(t7332*t7401 + t7271*t7412) + 0.355*(t7271*t7401 - 1.*t7332*t7412) + var1[1] - 1.*var2[1];
  p_output1[2]=-0.1575*t7072*t7249*t7352 + 0.325*t7206*t7435 + 0.1575*t7231*t7439 + 0.2255*(t7072*t7249*t7352 + t7223*t7439) - 0.325*t7268*t7448 + 0.075*t7274*t7453 + 0.075*t7332*t7460 - 0.0641*(t7332*t7453 + t7271*t7460) + 0.355*(t7271*t7453 - 1.*t7332*t7460) + var1[2] - 1.*var2[2];
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

#include "h_FlFoot_ParallelStance2.hh"

namespace SymFunction
{

void h_FlFoot_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
