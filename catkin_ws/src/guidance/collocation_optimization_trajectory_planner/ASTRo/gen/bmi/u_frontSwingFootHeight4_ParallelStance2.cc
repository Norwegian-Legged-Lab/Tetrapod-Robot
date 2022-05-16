/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:52:46 GMT+02:00
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
  double t31543;
  double t41295;
  double t45214;
  double t45598;
  double t46883;
  double t46895;
  double t47619;
  double t47740;
  double t47656;
  double t47748;
  double t47704;
  double t47833;
  double t47842;
  double t47882;
  double t47884;
  double t47888;
  double t31567;
  double t40454;
  double t47910;
  double t47926;
  double t47929;
  double t47933;
  double t47948;
  double t47957;
  double t47962;
  double t47964;
  double t47975;
  double t47979;
  double t48156;
  double t48175;
  t31543 = Cos(var1[3]);
  t41295 = Cos(var1[12]);
  t45214 = -1.*t41295;
  t45598 = 1. + t45214;
  t46883 = Sin(var1[12]);
  t46895 = -0.15121*t46883;
  t47619 = Cos(var1[5]);
  t47740 = Sin(var1[3]);
  t47656 = Sin(var1[4]);
  t47748 = Sin(var1[5]);
  t47704 = -1.*t31543*t47619*t47656;
  t47833 = t47740*t47748;
  t47842 = t47704 + t47833;
  t47882 = t47619*t47740;
  t47884 = t31543*t47656*t47748;
  t47888 = t47882 + t47884;
  t31567 = Cos(var1[4]);
  t40454 = Sin(var1[13]);
  t47910 = Cos(var1[13]);
  t47926 = t41295*t47842;
  t47929 = t46883*t47888;
  t47933 = t47926 + t47929;
  t47948 = Cos(var1[14]);
  t47957 = -1.*t31543*t31567*t40454;
  t47962 = t47910*t47933;
  t47964 = t47957 + t47962;
  t47975 = Sin(var1[14]);
  t47979 = t47910*t31543*t31567;
  t48156 = t40454*t47933;
  t48175 = t47979 + t48156;
  p_output1[0]=0.28121*t31543*t31567*t40454 + (0.15121*t45598 + t46895)*t47842 + (-0.15121*t45598 + t46895)*t47888 - 0.15121*(-1.*t46883*t47842 + t41295*t47888) + 0.28121*(1. - 1.*t47910)*t47933 + 0.50321*(1. - 1.*t47948)*t47964 - 0.50321*t47975*t48175 + 0.23321*(t47948*t47964 + t47975*t48175) + var1[2];
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
