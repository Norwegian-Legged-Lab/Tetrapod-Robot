/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 13:05:33 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t16160;
  double t52750;
  double t53004;
  double t53187;
  double t54680;
  double t56154;
  double t56204;
  double t56431;
  double t56287;
  double t56601;
  double t56289;
  double t56613;
  double t56673;
  double t56750;
  double t56770;
  double t56916;
  double t17032;
  double t52642;
  double t57081;
  double t57358;
  double t57364;
  double t57365;
  double t57380;
  double t57393;
  double t57427;
  double t57428;
  double t58854;
  double t58901;
  double t59525;
  double t59924;
  double t54064;
  double t56185;
  double t56697;
  double t56746;
  double t57224;
  double t57234;
  double t57382;
  double t57389;
  double t62550;
  double t62594;
  double t62600;
  double t62649;
  double t62650;
  double t62651;
  double t62663;
  double t62684;
  double t62685;
  double t62272;
  double t62289;
  double t62293;
  double t62297;
  double t62304;
  double t62323;
  double t62330;
  double t62335;
  double t62601;
  double t62656;
  double t62686;
  double t62687;
  double t62688;
  double t62689;
  double t62690;
  double t62691;
  t16160 = Cos(var1[3]);
  t52750 = Cos(var1[12]);
  t53004 = -1.*t52750;
  t53187 = 1. + t53004;
  t54680 = Sin(var1[12]);
  t56154 = -0.15121*t54680;
  t56204 = Cos(var1[5]);
  t56431 = Sin(var1[3]);
  t56287 = Sin(var1[4]);
  t56601 = Sin(var1[5]);
  t56289 = -1.*t16160*t56204*t56287;
  t56613 = t56431*t56601;
  t56673 = t56289 + t56613;
  t56750 = t56204*t56431;
  t56770 = t16160*t56287*t56601;
  t56916 = t56750 + t56770;
  t17032 = Cos(var1[4]);
  t52642 = Sin(var1[13]);
  t57081 = Cos(var1[13]);
  t57358 = t52750*t56673;
  t57364 = t54680*t56916;
  t57365 = t57358 + t57364;
  t57380 = Cos(var1[14]);
  t57393 = -1.*t16160*t17032*t52642;
  t57427 = t57081*t57365;
  t57428 = t57393 + t57427;
  t58854 = Sin(var1[14]);
  t58901 = t57081*t16160*t17032;
  t59525 = t52642*t57365;
  t59924 = t58901 + t59525;
  t54064 = 0.15121*t53187;
  t56185 = t54064 + t56154;
  t56697 = -0.15121*t53187;
  t56746 = t56697 + t56154;
  t57224 = -1.*t57081;
  t57234 = 1. + t57224;
  t57382 = -1.*t57380;
  t57389 = 1. + t57382;
  t62550 = t52750*t17032*t56204;
  t62594 = -1.*t17032*t54680*t56601;
  t62600 = t62550 + t62594;
  t62649 = -1.*t52642*t56287;
  t62650 = t57081*t62600;
  t62651 = t62649 + t62650;
  t62663 = t57081*t56287;
  t62684 = t52642*t62600;
  t62685 = t62663 + t62684;
  t62272 = -1.*var2[0];
  t62289 = t17032*t56204*t56185;
  t62293 = 0.28121*t52642*t56287;
  t62297 = -1.*t17032*t56746*t56601;
  t62304 = -1.*t17032*t56204*t54680;
  t62323 = -1.*t52750*t17032*t56601;
  t62330 = t62304 + t62323;
  t62335 = -0.15121*t62330;
  t62601 = 0.28121*t57234*t62600;
  t62656 = 0.50321*t57389*t62651;
  t62686 = -0.50321*t58854*t62685;
  t62687 = t57380*t62651;
  t62688 = t58854*t62685;
  t62689 = t62687 + t62688;
  t62690 = 0.19821*t62689;
  t62691 = t62272 + var1[0] + t62289 + t62293 + t62297 + t62335 + t62601 + t62656 + t62686 + t62690;
  p_output1[0]=0.28121*t16160*t17032*t52642 + t56185*t56673 + t56746*t56916 - 0.15121*(-1.*t54680*t56673 + t52750*t56916) + 0.28121*t57234*t57365 + 0.50321*t57389*t57428 - 0.50321*t58854*t59924 + 0.19821*(t57380*t57428 + t58854*t59924) + var1[2] - 0.25*Power(t62691,2)*var3[0]*(1. + Tanh(t62691*var4[0]));
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "u_frontSwingFootHeightcurved_ParallelStance2.hh"

namespace SymFunction
{

void u_frontSwingFootHeightcurved_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
