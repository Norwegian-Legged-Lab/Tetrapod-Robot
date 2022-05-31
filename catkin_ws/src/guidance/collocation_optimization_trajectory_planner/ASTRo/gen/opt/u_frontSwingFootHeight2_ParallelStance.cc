/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 17:01:34 GMT+02:00
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
  double t10708;
  double t7840;
  double t10709;
  double t8345;
  double t10728;
  double t10773;
  double t10788;
  double t10790;
  double t10805;
  double t10806;
  double t10686;
  double t10729;
  double t10771;
  double t12736;
  double t12761;
  double t12981;
  double t15008;
  double t15292;
  double t18087;
  double t22517;
  double t24434;
  double t24773;
  double t24951;
  double t25200;
  double t25215;
  double t25223;
  double t25399;
  double t25428;
  double t25484;
  double t25522;
  t10708 = Cos(var1[3]);
  t7840 = Cos(var1[5]);
  t10709 = Sin(var1[4]);
  t8345 = Sin(var1[3]);
  t10728 = Sin(var1[5]);
  t10773 = Cos(var1[6]);
  t10788 = -1.*t10773;
  t10790 = 1. + t10788;
  t10805 = 0.15121*t10790;
  t10806 = Sin(var1[6]);
  t10686 = t7840*t8345;
  t10729 = t10708*t10709*t10728;
  t10771 = t10686 + t10729;
  t12736 = -1.*t10708*t7840*t10709;
  t12761 = t8345*t10728;
  t12981 = t12736 + t12761;
  t15008 = Cos(var1[7]);
  t15292 = t10773*t12981;
  t18087 = t10771*t10806;
  t22517 = t15292 + t18087;
  t24434 = Cos(var1[4]);
  t24773 = Sin(var1[7]);
  t24951 = Cos(var1[8]);
  t25200 = t15008*t22517;
  t25215 = -1.*t10708*t24434*t24773;
  t25223 = t25200 + t25215;
  t25399 = t10708*t24434*t15008;
  t25428 = t22517*t24773;
  t25484 = t25399 + t25428;
  t25522 = Sin(var1[8]);
  p_output1[0]=t10771*(t10805 - 0.15121*t10806) + (t10805 + 0.15121*t10806)*t12981 + 0.15121*(t10771*t10773 - 1.*t10806*t12981) + 0.28121*(1. - 1.*t15008)*t22517 + 0.28121*t10708*t24434*t24773 + 0.50321*(1. - 1.*t24951)*t25223 - 0.50321*t25484*t25522 + 0.19821*(t24951*t25223 + t25484*t25522) + var1[2];
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
