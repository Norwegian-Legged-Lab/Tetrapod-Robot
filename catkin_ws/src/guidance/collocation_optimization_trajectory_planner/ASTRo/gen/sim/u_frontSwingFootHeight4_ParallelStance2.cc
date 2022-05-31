/*
 * Automatically Generated from Mathematica.
 * Sun 22 May 2022 16:55:42 GMT+02:00
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
  double t6925;
  double t12430;
  double t12551;
  double t12558;
  double t12632;
  double t12633;
  double t12756;
  double t12870;
  double t12815;
  double t12873;
  double t12866;
  double t12877;
  double t12889;
  double t13520;
  double t13523;
  double t13676;
  double t7713;
  double t7970;
  double t13833;
  double t13848;
  double t13859;
  double t13871;
  double t13875;
  double t13889;
  double t13890;
  double t13900;
  double t13903;
  double t13906;
  double t13912;
  double t13913;
  t6925 = Cos(var1[3]);
  t12430 = Cos(var1[12]);
  t12551 = -1.*t12430;
  t12558 = 1. + t12551;
  t12632 = Sin(var1[12]);
  t12633 = -0.15121*t12632;
  t12756 = Cos(var1[5]);
  t12870 = Sin(var1[3]);
  t12815 = Sin(var1[4]);
  t12873 = Sin(var1[5]);
  t12866 = -1.*t6925*t12756*t12815;
  t12877 = t12870*t12873;
  t12889 = t12866 + t12877;
  t13520 = t12756*t12870;
  t13523 = t6925*t12815*t12873;
  t13676 = t13520 + t13523;
  t7713 = Cos(var1[4]);
  t7970 = Sin(var1[13]);
  t13833 = Cos(var1[13]);
  t13848 = t12430*t12889;
  t13859 = t12632*t13676;
  t13871 = t13848 + t13859;
  t13875 = Cos(var1[14]);
  t13889 = -1.*t6925*t7713*t7970;
  t13890 = t13833*t13871;
  t13900 = t13889 + t13890;
  t13903 = Sin(var1[14]);
  t13906 = t13833*t6925*t7713;
  t13912 = t7970*t13871;
  t13913 = t13906 + t13912;
  p_output1[0]=(0.15121*t12558 + t12633)*t12889 + (-0.15121*t12558 + t12633)*t13676 - 0.15121*(-1.*t12632*t12889 + t12430*t13676) + 0.28121*(1. - 1.*t13833)*t13871 + 0.50321*(1. - 1.*t13875)*t13900 - 0.50321*t13903*t13913 + 0.23321*(t13875*t13900 + t13903*t13913) + 0.28121*t6925*t7713*t7970 + var1[2];
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

#include "u_frontSwingFootHeight4_ParallelStance2.hh"

namespace SymFunction
{

void u_frontSwingFootHeight4_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
