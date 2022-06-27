/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 14:38:06 GMT+02:00
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
  double t4559;
  double t3389;
  double t4571;
  double t3390;
  double t4698;
  double t5298;
  double t5309;
  double t5322;
  double t5419;
  double t5482;
  double t4027;
  double t5024;
  double t5052;
  double t5824;
  double t5856;
  double t5892;
  double t7242;
  double t7410;
  double t7713;
  double t7792;
  double t7977;
  double t8039;
  double t8071;
  double t8549;
  double t8724;
  double t8727;
  double t8755;
  double t8762;
  double t8771;
  double t8863;
  t4559 = Cos(var1[3]);
  t3389 = Cos(var1[5]);
  t4571 = Sin(var1[4]);
  t3390 = Sin(var1[3]);
  t4698 = Sin(var1[5]);
  t5298 = Cos(var1[6]);
  t5309 = -1.*t5298;
  t5322 = 1. + t5309;
  t5419 = 0.15121*t5322;
  t5482 = Sin(var1[6]);
  t4027 = t3389*t3390;
  t5024 = t4559*t4571*t4698;
  t5052 = t4027 + t5024;
  t5824 = -1.*t4559*t3389*t4571;
  t5856 = t3390*t4698;
  t5892 = t5824 + t5856;
  t7242 = Cos(var1[7]);
  t7410 = t5298*t5892;
  t7713 = t5052*t5482;
  t7792 = t7410 + t7713;
  t7977 = Cos(var1[4]);
  t8039 = Sin(var1[7]);
  t8071 = Cos(var1[8]);
  t8549 = t7242*t7792;
  t8724 = -1.*t4559*t7977*t8039;
  t8727 = t8549 + t8724;
  t8755 = t4559*t7977*t7242;
  t8762 = t7792*t8039;
  t8771 = t8755 + t8762;
  t8863 = Sin(var1[8]);
  p_output1[0]=t5052*(t5419 - 0.15121*t5482) + (t5419 + 0.15121*t5482)*t5892 + 0.15121*(t5052*t5298 - 1.*t5482*t5892) + 0.28121*(1. - 1.*t7242)*t7792 + 0.28121*t4559*t7977*t8039 + 0.50321*(1. - 1.*t8071)*t8727 - 0.50321*t8771*t8863 + 0.19821*(t8071*t8727 + t8771*t8863) + var1[2];
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

#include "u_frontSwingFootHeight2_ParallelStance.hh"

namespace ParallelStance
{

void u_frontSwingFootHeight2_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
