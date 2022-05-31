/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 18:51:05 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t2301;
  double t2625;
  double t2826;
  double t2838;
  double t2880;
  double t2929;
  double t2433;
  double t3121;
  double t3054;
  double t3060;
  double t3180;
  double t3193;
  double t3208;
  double t3214;
  double t3221;
  double t3252;
  double t3258;
  double t3266;
  double t3335;
  double t3347;
  double t3348;
  double t3357;
  double t2845;
  double t2935;
  double t3406;
  double t3118;
  double t3120;
  double t3410;
  double t3409;
  double t3411;
  double t3413;
  double t3423;
  double t3455;
  double t3461;
  double t3182;
  double t3191;
  double t3224;
  double t3238;
  double t3492;
  double t3502;
  double t3506;
  double t3590;
  double t3599;
  double t3623;
  double t3651;
  double t3655;
  double t3657;
  double t3742;
  double t3762;
  double t3766;
  double t3796;
  double t3797;
  double t3798;
  double t3833;
  double t3835;
  double t3837;
  double t3858;
  double t3861;
  double t3862;
  double t3911;
  double t3921;
  double t3930;
  t2301 = Cos(var1[4]);
  t2625 = Cos(var1[9]);
  t2826 = -1.*t2625;
  t2838 = 1. + t2826;
  t2880 = Sin(var1[9]);
  t2929 = 0.15121*t2880;
  t2433 = Cos(var1[5]);
  t3121 = Sin(var1[5]);
  t3054 = Sin(var1[10]);
  t3060 = Sin(var1[4]);
  t3180 = Cos(var1[10]);
  t3193 = t2625*t2301*t2433;
  t3208 = -1.*t2301*t2880*t3121;
  t3214 = t3193 + t3208;
  t3221 = Cos(var1[11]);
  t3252 = t3054*t3060;
  t3258 = t3180*t3214;
  t3266 = t3252 + t3258;
  t3335 = Sin(var1[11]);
  t3347 = t3180*t3060;
  t3348 = -1.*t3054*t3214;
  t3357 = t3347 + t3348;
  t2845 = -0.15121*t2838;
  t2935 = t2845 + t2929;
  t3406 = Sin(var1[3]);
  t3118 = 0.15121*t2838;
  t3120 = t3118 + t2929;
  t3410 = Cos(var1[3]);
  t3409 = t2433*t3406*t3060;
  t3411 = t3410*t3121;
  t3413 = t3409 + t3411;
  t3423 = t3410*t2433;
  t3455 = -1.*t3406*t3060*t3121;
  t3461 = t3423 + t3455;
  t3182 = -1.*t3180;
  t3191 = 1. + t3182;
  t3224 = -1.*t3221;
  t3238 = 1. + t3224;
  t3492 = t2625*t3413;
  t3502 = t2880*t3461;
  t3506 = t3492 + t3502;
  t3590 = -1.*t2301*t3054*t3406;
  t3599 = t3180*t3506;
  t3623 = t3590 + t3599;
  t3651 = -1.*t3180*t2301*t3406;
  t3655 = -1.*t3054*t3506;
  t3657 = t3651 + t3655;
  t3742 = -1.*t3410*t2433*t3060;
  t3762 = t3406*t3121;
  t3766 = t3742 + t3762;
  t3796 = t2433*t3406;
  t3797 = t3410*t3060*t3121;
  t3798 = t3796 + t3797;
  t3833 = t2625*t3766;
  t3835 = t2880*t3798;
  t3837 = t3833 + t3835;
  t3858 = t3410*t2301*t3054;
  t3861 = t3180*t3837;
  t3862 = t3858 + t3861;
  t3911 = t3180*t3410*t2301;
  t3921 = -1.*t3054*t3837;
  t3930 = t3911 + t3921;
  p_output1[0]=t2301*t2433*t2935 + 0.28121*t3054*t3060 - 1.*t2301*t3120*t3121 + 0.15121*(-1.*t2301*t2433*t2880 - 1.*t2301*t2625*t3121) - 0.28121*t3191*t3214 - 0.50321*t3238*t3266 - 0.50321*t3335*t3357 - 0.19821*(t3221*t3266 - 1.*t3335*t3357) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.28121*t2301*t3054*t3406 + t2935*t3413 + t3120*t3461 + 0.15121*(-1.*t2880*t3413 + t2625*t3461) - 0.28121*t3191*t3506 - 0.50321*t3238*t3623 - 0.50321*t3335*t3657 - 0.19821*(t3221*t3623 - 1.*t3335*t3657) + var1[1] - 1.*var2[1];
  p_output1[2]=0.28121*t2301*t3054*t3410 + t2935*t3766 + t3120*t3798 + 0.15121*(-1.*t2880*t3766 + t2625*t3798) - 0.28121*t3191*t3837 - 0.50321*t3238*t3862 - 0.50321*t3335*t3930 - 0.19821*(t3221*t3862 - 1.*t3335*t3930) + var1[2] - 1.*var2[2];
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "h_RlFoot_DiagonalStance.hh"

namespace SymFunction
{

void h_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
