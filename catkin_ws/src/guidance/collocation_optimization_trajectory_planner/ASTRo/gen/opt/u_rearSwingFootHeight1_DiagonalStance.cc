/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:53:38 GMT+02:00
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
  double t4779;
  double t10241;
  double t10791;
  double t10902;
  double t11011;
  double t11028;
  double t11041;
  double t11129;
  double t11051;
  double t11132;
  double t11127;
  double t11437;
  double t11559;
  double t11581;
  double t11610;
  double t11611;
  double t5416;
  double t9325;
  double t11617;
  double t11794;
  double t11796;
  double t11798;
  double t11800;
  double t11803;
  double t11804;
  double t11812;
  double t11820;
  double t11825;
  double t11827;
  double t11832;
  t4779 = Cos(var1[3]);
  t10241 = Cos(var1[15]);
  t10791 = -1.*t10241;
  t10902 = 1. + t10791;
  t11011 = -0.15121*t10902;
  t11028 = Sin(var1[15]);
  t11041 = Cos(var1[5]);
  t11129 = Sin(var1[3]);
  t11051 = Sin(var1[4]);
  t11132 = Sin(var1[5]);
  t11127 = -1.*t4779*t11041*t11051;
  t11437 = t11129*t11132;
  t11559 = t11127 + t11437;
  t11581 = t11041*t11129;
  t11610 = t4779*t11051*t11132;
  t11611 = t11581 + t11610;
  t5416 = Cos(var1[4]);
  t9325 = Sin(var1[16]);
  t11617 = Cos(var1[16]);
  t11794 = t10241*t11559;
  t11796 = t11028*t11611;
  t11798 = t11794 + t11796;
  t11800 = Cos(var1[17]);
  t11803 = t4779*t5416*t9325;
  t11804 = t11617*t11798;
  t11812 = t11803 + t11804;
  t11820 = Sin(var1[17]);
  t11825 = t11617*t4779*t5416;
  t11827 = -1.*t9325*t11798;
  t11832 = t11825 + t11827;
  p_output1[0]=(t11011 - 0.15121*t11028)*t11559 + (t11011 + 0.15121*t11028)*t11611 - 0.15121*(-1.*t11028*t11559 + t10241*t11611) - 0.28121*(1. - 1.*t11617)*t11798 - 0.50321*(1. - 1.*t11800)*t11812 - 0.50321*t11820*t11832 - 0.19821*(t11800*t11812 - 1.*t11820*t11832) + 0.28121*t4779*t5416*t9325 + var1[2];
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

#include "u_rearSwingFootHeight1_DiagonalStance.hh"

namespace DiagonalStance
{

void u_rearSwingFootHeight1_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
