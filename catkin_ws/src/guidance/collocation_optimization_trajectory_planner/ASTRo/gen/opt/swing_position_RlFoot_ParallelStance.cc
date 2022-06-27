/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 14:37:53 GMT+02:00
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
  double t11251;
  double t12270;
  double t12277;
  double t12429;
  double t12433;
  double t12600;
  double t12722;
  double t12739;
  double t12733;
  double t12740;
  double t12734;
  double t12744;
  double t12745;
  double t12766;
  double t12780;
  double t12892;
  double t11673;
  double t11996;
  double t13024;
  double t13196;
  double t13223;
  double t13267;
  double t13446;
  double t13464;
  double t13465;
  double t13498;
  double t13511;
  double t13512;
  double t13513;
  double t13527;
  t11251 = Cos(var1[3]);
  t12270 = Cos(var1[9]);
  t12277 = -1.*t12270;
  t12429 = 1. + t12277;
  t12433 = Sin(var1[9]);
  t12600 = 0.15121*t12433;
  t12722 = Cos(var1[5]);
  t12739 = Sin(var1[3]);
  t12733 = Sin(var1[4]);
  t12740 = Sin(var1[5]);
  t12734 = -1.*t11251*t12722*t12733;
  t12744 = t12739*t12740;
  t12745 = t12734 + t12744;
  t12766 = t12722*t12739;
  t12780 = t11251*t12733*t12740;
  t12892 = t12766 + t12780;
  t11673 = Cos(var1[4]);
  t11996 = Sin(var1[10]);
  t13024 = Cos(var1[10]);
  t13196 = t12270*t12745;
  t13223 = t12433*t12892;
  t13267 = t13196 + t13223;
  t13446 = Cos(var1[11]);
  t13464 = t11251*t11673*t11996;
  t13465 = t13024*t13267;
  t13498 = t13464 + t13465;
  t13511 = Sin(var1[11]);
  t13512 = t13024*t11251*t11673;
  t13513 = -1.*t11996*t13267;
  t13527 = t13512 + t13513;
  p_output1[0]=0.28121*t11251*t11673*t11996 + (-0.15121*t12429 + t12600)*t12745 + (0.15121*t12429 + t12600)*t12892 + 0.15121*(-1.*t12433*t12745 + t12270*t12892) - 0.28121*(1. - 1.*t13024)*t13267 - 0.50321*(1. - 1.*t13446)*t13498 - 0.50321*t13511*t13527 - 0.19821*(t13446*t13498 - 1.*t13511*t13527) + var1[2];
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

#include "swing_position_RlFoot_ParallelStance.hh"

namespace ParallelStance
{

void swing_position_RlFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
