/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 14:36:10 GMT+02:00
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
  double t6599;
  double t2848;
  double t6665;
  double t5790;
  double t6683;
  double t7957;
  double t8087;
  double t8171;
  double t8358;
  double t8426;
  double t5943;
  double t6703;
  double t6980;
  double t8616;
  double t8682;
  double t8683;
  double t9225;
  double t9249;
  double t9250;
  double t9258;
  double t9276;
  double t9279;
  double t9281;
  double t9367;
  double t9411;
  double t9416;
  double t9443;
  double t9455;
  double t9481;
  double t9621;
  t6599 = Cos(var1[3]);
  t2848 = Cos(var1[5]);
  t6665 = Sin(var1[4]);
  t5790 = Sin(var1[3]);
  t6683 = Sin(var1[5]);
  t7957 = Cos(var1[6]);
  t8087 = -1.*t7957;
  t8171 = 1. + t8087;
  t8358 = 0.15121*t8171;
  t8426 = Sin(var1[6]);
  t5943 = t2848*t5790;
  t6703 = t6599*t6665*t6683;
  t6980 = t5943 + t6703;
  t8616 = -1.*t6599*t2848*t6665;
  t8682 = t5790*t6683;
  t8683 = t8616 + t8682;
  t9225 = Cos(var1[7]);
  t9249 = t7957*t8683;
  t9250 = t6980*t8426;
  t9258 = t9249 + t9250;
  t9276 = Cos(var1[4]);
  t9279 = Sin(var1[7]);
  t9281 = Cos(var1[8]);
  t9367 = t9225*t9258;
  t9411 = -1.*t6599*t9276*t9279;
  t9416 = t9367 + t9411;
  t9443 = t6599*t9276*t9225;
  t9455 = t9258*t9279;
  t9481 = t9443 + t9455;
  t9621 = Sin(var1[8]);
  p_output1[0]=t6980*(t8358 - 0.15121*t8426) + (t8358 + 0.15121*t8426)*t8683 + 0.15121*(t6980*t7957 - 1.*t8426*t8683) + 0.28121*(1. - 1.*t9225)*t9258 + 0.28121*t6599*t9276*t9279 + 0.50321*(1. - 1.*t9281)*t9416 - 0.50321*t9481*t9621 + 0.19821*(t9281*t9416 + t9481*t9621) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "swing_position_FlFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void swing_position_FlFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
