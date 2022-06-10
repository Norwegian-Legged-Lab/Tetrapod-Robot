/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 13:09:00 GMT+02:00
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
  double t4704;
  double t44774;
  double t46069;
  double t44938;
  double t46144;
  double t4724;
  double t38944;
  double t46282;
  double t46310;
  double t46318;
  double t46321;
  double t46328;
  double t45127;
  double t46279;
  double t46280;
  double t41121;
  double t46330;
  double t46333;
  double t46338;
  double t46343;
  double t46348;
  double t46349;
  double t46359;
  double t46374;
  double t46384;
  double t46385;
  double t46390;
  double t42894;
  double t44772;
  double t46289;
  double t46297;
  double t47384;
  double t47389;
  double t47437;
  double t46377;
  double t46380;
  double t47486;
  double t47548;
  double t47552;
  double t47562;
  double t47570;
  double t47601;
  double t47233;
  double t47244;
  double t47250;
  double t47257;
  double t47262;
  double t47343;
  double t47345;
  double t47352;
  double t47455;
  double t47557;
  double t47622;
  double t47625;
  double t47662;
  double t47707;
  double t47719;
  double t48021;
  double t48037;
  double t48063;
  double t48072;
  double t48120;
  t4704 = Cos(var1[3]);
  t44774 = Cos(var1[5]);
  t46069 = Sin(var1[3]);
  t44938 = Sin(var1[4]);
  t46144 = Sin(var1[5]);
  t4724 = Cos(var1[4]);
  t38944 = Sin(var1[12]);
  t46282 = Cos(var1[12]);
  t46310 = t44774*t46069;
  t46318 = t4704*t44938*t46144;
  t46321 = t46310 + t46318;
  t46328 = Sin(var1[13]);
  t45127 = -1.*t4704*t44774*t44938;
  t46279 = t46069*t46144;
  t46280 = t45127 + t46279;
  t41121 = Cos(var1[13]);
  t46330 = t46282*t4704*t4724;
  t46333 = -1.*t38944*t46321;
  t46338 = t46330 + t46333;
  t46343 = Sin(var1[14]);
  t46348 = -1.*t46328*t46280;
  t46349 = t41121*t46338;
  t46359 = t46348 + t46349;
  t46374 = Cos(var1[14]);
  t46384 = t41121*t46280;
  t46385 = t46328*t46338;
  t46390 = t46384 + t46385;
  t42894 = -1.*t41121;
  t44772 = 1. + t42894;
  t46289 = -1.*t46282;
  t46297 = 1. + t46289;
  t47384 = t46282*t44938;
  t47389 = t4724*t38944*t46144;
  t47437 = t47384 + t47389;
  t46377 = -1.*t46374;
  t46380 = 1. + t46377;
  t47486 = -1.*t4724*t44774*t46328;
  t47548 = t41121*t47437;
  t47552 = t47486 + t47548;
  t47562 = t41121*t4724*t44774;
  t47570 = t46328*t47437;
  t47601 = t47562 + t47570;
  t47233 = -1.*var2[0];
  t47244 = 0.325*t44772*t4724*t44774;
  t47250 = 0.1575*t38944*t44938;
  t47257 = 0.1575*t46297*t4724*t46144;
  t47262 = t38944*t44938;
  t47343 = -1.*t46282*t4724*t46144;
  t47345 = t47262 + t47343;
  t47352 = -0.2255*t47345;
  t47455 = -0.325*t46328*t47437;
  t47557 = 0.075*t46343*t47552;
  t47622 = 0.075*t46380*t47601;
  t47625 = -1.*t46343*t47552;
  t47662 = t46374*t47601;
  t47707 = t47625 + t47662;
  t47719 = 0.355*t47707;
  t48021 = t46374*t47552;
  t48037 = t46343*t47601;
  t48063 = t48021 + t48037;
  t48072 = -0.0641*t48063;
  t48120 = t47233 + var1[0] + t47244 + t47250 + t47257 + t47352 + t47455 + t47557 + t47622 + t47719 + t48072;
  p_output1[0]=0.325*t44772*t46280 - 0.1575*t46297*t46321 - 0.325*t46328*t46338 + 0.075*t46343*t46359 + 0.075*t46380*t46390 - 0.0641*(t46359*t46374 + t46343*t46390) + 0.355*(-1.*t46343*t46359 + t46374*t46390) + 0.1575*t38944*t4704*t4724 - 0.2255*(t46282*t46321 + t38944*t4704*t4724) + var1[2] - 0.25*Power(t48120,2)*var3[0]*(1. + Tanh(t48120*var4[0]));
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
