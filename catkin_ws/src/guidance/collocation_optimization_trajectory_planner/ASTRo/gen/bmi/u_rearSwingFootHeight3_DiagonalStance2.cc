/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 18:59:55 GMT+02:00
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
  double t6093;
  double t6136;
  double t6157;
  double t6158;
  double t6220;
  double t6221;
  double t6236;
  double t6242;
  double t6237;
  double t6243;
  double t6241;
  double t6244;
  double t6249;
  double t6260;
  double t6261;
  double t6262;
  double t6094;
  double t6134;
  double t6273;
  double t6281;
  double t6282;
  double t6283;
  double t6285;
  double t6292;
  double t6293;
  double t6294;
  double t6296;
  double t6297;
  double t6298;
  double t6299;
  t6093 = Cos(var1[3]);
  t6136 = Cos(var1[9]);
  t6157 = -1.*t6136;
  t6158 = 1. + t6157;
  t6220 = Sin(var1[9]);
  t6221 = 0.15121*t6220;
  t6236 = Cos(var1[5]);
  t6242 = Sin(var1[3]);
  t6237 = Sin(var1[4]);
  t6243 = Sin(var1[5]);
  t6241 = -1.*t6093*t6236*t6237;
  t6244 = t6242*t6243;
  t6249 = t6241 + t6244;
  t6260 = t6236*t6242;
  t6261 = t6093*t6237*t6243;
  t6262 = t6260 + t6261;
  t6094 = Cos(var1[4]);
  t6134 = Sin(var1[10]);
  t6273 = Cos(var1[10]);
  t6281 = t6136*t6249;
  t6282 = t6220*t6262;
  t6283 = t6281 + t6282;
  t6285 = Cos(var1[11]);
  t6292 = t6093*t6094*t6134;
  t6293 = t6273*t6283;
  t6294 = t6292 + t6293;
  t6296 = Sin(var1[11]);
  t6297 = t6273*t6093*t6094;
  t6298 = -1.*t6134*t6283;
  t6299 = t6297 + t6298;
  p_output1[0]=0.28121*t6093*t6094*t6134 + (-0.15121*t6158 + t6221)*t6249 + (0.15121*t6158 + t6221)*t6262 + 0.15121*(-1.*t6220*t6249 + t6136*t6262) - 0.28121*(1. - 1.*t6273)*t6283 - 0.50321*(1. - 1.*t6285)*t6294 - 0.50321*t6296*t6299 - 0.19821*(t6285*t6294 - 1.*t6296*t6299) + var1[2];
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

#include "u_rearSwingFootHeight3_DiagonalStance2.hh"

namespace SymFunction
{

void u_rearSwingFootHeight3_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
