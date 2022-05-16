/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:42:20 GMT+02:00
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
  double t5401;
  double t5864;
  double t5870;
  double t5925;
  double t6038;
  double t6043;
  double t6045;
  double t6051;
  double t6046;
  double t6054;
  double t6047;
  double t6062;
  double t6068;
  double t6086;
  double t6095;
  double t6103;
  double t5799;
  double t5819;
  double t6136;
  double t6199;
  double t6206;
  double t6226;
  double t6234;
  double t6241;
  double t6242;
  double t6243;
  double t6245;
  double t6246;
  double t6248;
  double t6261;
  t5401 = Cos(var1[3]);
  t5864 = Cos(var1[12]);
  t5870 = -1.*t5864;
  t5925 = 1. + t5870;
  t6038 = Sin(var1[12]);
  t6043 = -0.15121*t6038;
  t6045 = Cos(var1[5]);
  t6051 = Sin(var1[3]);
  t6046 = Sin(var1[4]);
  t6054 = Sin(var1[5]);
  t6047 = -1.*t5401*t6045*t6046;
  t6062 = t6051*t6054;
  t6068 = t6047 + t6062;
  t6086 = t6045*t6051;
  t6095 = t5401*t6046*t6054;
  t6103 = t6086 + t6095;
  t5799 = Cos(var1[4]);
  t5819 = Sin(var1[13]);
  t6136 = Cos(var1[13]);
  t6199 = t5864*t6068;
  t6206 = t6038*t6103;
  t6226 = t6199 + t6206;
  t6234 = Cos(var1[14]);
  t6241 = -1.*t5401*t5799*t5819;
  t6242 = t6136*t6226;
  t6243 = t6241 + t6242;
  t6245 = Sin(var1[14]);
  t6246 = t6136*t5401*t5799;
  t6248 = t5819*t6226;
  t6261 = t6246 + t6248;
  p_output1[0]=0.28121*t5401*t5799*t5819 + (0.15121*t5925 + t6043)*t6068 + (-0.15121*t5925 + t6043)*t6103 - 0.15121*(-1.*t6038*t6068 + t5864*t6103) + 0.28121*(1. - 1.*t6136)*t6226 + 0.50321*(1. - 1.*t6234)*t6243 - 0.50321*t6245*t6261 + 0.23321*(t6234*t6243 + t6245*t6261) + var1[2];
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

#include "swing_position_FrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void swing_position_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
