/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 13:05:18 GMT+02:00
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
  double t3057;
  double t12122;
  double t12963;
  double t12133;
  double t14142;
  double t5143;
  double t5340;
  double t15213;
  double t15358;
  double t15392;
  double t15824;
  double t15967;
  double t12404;
  double t14485;
  double t14925;
  double t6784;
  double t15973;
  double t16001;
  double t16230;
  double t16311;
  double t16314;
  double t16380;
  double t16433;
  double t16591;
  double t16908;
  double t17126;
  double t17172;
  double t11664;
  double t11684;
  double t15266;
  double t15333;
  double t24856;
  double t25979;
  double t26045;
  double t16854;
  double t16860;
  double t26356;
  double t26364;
  double t26366;
  double t26405;
  double t26410;
  double t26535;
  double t21706;
  double t22446;
  double t23573;
  double t23580;
  double t24273;
  double t24450;
  double t24774;
  double t24814;
  double t26346;
  double t26367;
  double t26558;
  double t26559;
  double t26567;
  double t26569;
  double t26578;
  double t26587;
  double t29850;
  double t29860;
  double t29879;
  double t29895;
  t3057 = Cos(var1[3]);
  t12122 = Cos(var1[5]);
  t12963 = Sin(var1[3]);
  t12133 = Sin(var1[4]);
  t14142 = Sin(var1[5]);
  t5143 = Cos(var1[4]);
  t5340 = Sin(var1[9]);
  t15213 = Cos(var1[9]);
  t15358 = t12122*t12963;
  t15392 = t3057*t12133*t14142;
  t15824 = t15358 + t15392;
  t15967 = Sin(var1[10]);
  t12404 = -1.*t3057*t12122*t12133;
  t14485 = t12963*t14142;
  t14925 = t12404 + t14485;
  t6784 = Cos(var1[10]);
  t15973 = t15213*t3057*t5143;
  t16001 = -1.*t5340*t15824;
  t16230 = t15973 + t16001;
  t16311 = Sin(var1[11]);
  t16314 = -1.*t15967*t14925;
  t16380 = t6784*t16230;
  t16433 = t16314 + t16380;
  t16591 = Cos(var1[11]);
  t16908 = t6784*t14925;
  t17126 = t15967*t16230;
  t17172 = t16908 + t17126;
  t11664 = -1.*t6784;
  t11684 = 1. + t11664;
  t15266 = -1.*t15213;
  t15333 = 1. + t15266;
  t24856 = t15213*t12133;
  t25979 = t5143*t5340*t14142;
  t26045 = t24856 + t25979;
  t16854 = -1.*t16591;
  t16860 = 1. + t16854;
  t26356 = -1.*t5143*t12122*t15967;
  t26364 = t6784*t26045;
  t26366 = t26356 + t26364;
  t26405 = t6784*t5143*t12122;
  t26410 = t15967*t26045;
  t26535 = t26405 + t26410;
  t21706 = -1.*var2[0];
  t22446 = -0.325*t11684*t5143*t12122;
  t23573 = -0.1575*t5340*t12133;
  t23580 = -0.1575*t15333*t5143*t14142;
  t24273 = t5340*t12133;
  t24450 = -1.*t15213*t5143*t14142;
  t24774 = t24273 + t24450;
  t24814 = 0.2255*t24774;
  t26346 = 0.325*t15967*t26045;
  t26367 = -0.575*t16311*t26366;
  t26558 = -0.575*t16860*t26535;
  t26559 = -1.*t16311*t26366;
  t26567 = t16591*t26535;
  t26569 = t26559 + t26567;
  t26578 = -0.295*t26569;
  t26587 = t16591*t26366;
  t29850 = t16311*t26535;
  t29860 = t26587 + t29850;
  t29879 = -0.0641*t29860;
  t29895 = t21706 + var1[0] + t22446 + t23573 + t23580 + t24814 + t26346 + t26367 + t26558 + t26578 + t29879;
  p_output1[0]=-0.325*t11684*t14925 + 0.1575*t15333*t15824 + 0.325*t15967*t16230 - 0.575*t16311*t16433 - 0.575*t16860*t17172 - 0.0641*(t16433*t16591 + t16311*t17172) - 0.295*(-1.*t16311*t16433 + t16591*t17172) - 0.1575*t3057*t5143*t5340 + 0.2255*(t15213*t15824 + t3057*t5143*t5340) + var1[2] - 0.5*t29895*var3[0]*(1. + Tanh(t29895*var4[0]));
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

#include "u_rearSwingFootHeightsloped_DiagonalStance2.hh"

namespace SymFunction
{

void u_rearSwingFootHeightsloped_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
