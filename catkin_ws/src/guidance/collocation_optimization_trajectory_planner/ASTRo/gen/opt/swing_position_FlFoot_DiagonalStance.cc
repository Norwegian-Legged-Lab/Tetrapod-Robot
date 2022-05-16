/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:42:18 GMT+02:00
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
  double t3655;
  double t2392;
  double t3704;
  double t3512;
  double t3718;
  double t3887;
  double t3940;
  double t3952;
  double t3953;
  double t3955;
  double t3648;
  double t3736;
  double t3804;
  double t3976;
  double t4016;
  double t4022;
  double t4307;
  double t4323;
  double t4388;
  double t4413;
  double t4655;
  double t4678;
  double t5195;
  double t5423;
  double t5432;
  double t5439;
  double t5449;
  double t5462;
  double t5635;
  double t5642;
  t3655 = Cos(var1[3]);
  t2392 = Cos(var1[5]);
  t3704 = Sin(var1[4]);
  t3512 = Sin(var1[3]);
  t3718 = Sin(var1[5]);
  t3887 = Cos(var1[6]);
  t3940 = -1.*t3887;
  t3952 = 1. + t3940;
  t3953 = 0.15121*t3952;
  t3955 = Sin(var1[6]);
  t3648 = t2392*t3512;
  t3736 = t3655*t3704*t3718;
  t3804 = t3648 + t3736;
  t3976 = -1.*t3655*t2392*t3704;
  t4016 = t3512*t3718;
  t4022 = t3976 + t4016;
  t4307 = Cos(var1[7]);
  t4323 = t3887*t4022;
  t4388 = t3804*t3955;
  t4413 = t4323 + t4388;
  t4655 = Cos(var1[4]);
  t4678 = Sin(var1[7]);
  t5195 = Cos(var1[8]);
  t5423 = t4307*t4413;
  t5432 = -1.*t3655*t4655*t4678;
  t5439 = t5423 + t5432;
  t5449 = t3655*t4655*t4307;
  t5462 = t4413*t4678;
  t5635 = t5449 + t5462;
  t5642 = Sin(var1[8]);
  p_output1[0]=t3804*(t3953 - 0.15121*t3955) + (t3953 + 0.15121*t3955)*t4022 + 0.15121*(t3804*t3887 - 1.*t3955*t4022) + 0.28121*(1. - 1.*t4307)*t4413 + 0.28121*t3655*t4655*t4678 + 0.50321*(1. - 1.*t5195)*t5439 - 0.50321*t5635*t5642 + 0.23321*(t5195*t5439 + t5635*t5642) + var1[2];
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
