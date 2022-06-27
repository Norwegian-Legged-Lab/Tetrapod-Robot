/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:24:27 GMT+02:00
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
  double t3989;
  double t7853;
  double t9628;
  double t10831;
  double t11531;
  double t7299;
  double t12826;
  double t2005;
  double t12863;
  double t12879;
  double t13385;
  double t14109;
  double t14117;
  double t14177;
  double t14203;
  double t14211;
  double t14238;
  double t14305;
  double t14334;
  double t2775;
  double t3203;
  double t14833;
  double t11039;
  double t11529;
  double t14863;
  double t17939;
  double t20448;
  double t20452;
  double t14857;
  double t17223;
  double t17697;
  double t20667;
  double t20668;
  double t20669;
  double t14219;
  double t14220;
  double t20671;
  double t20672;
  double t20678;
  double t20680;
  double t20681;
  double t20682;
  double t20872;
  double t20873;
  double t20874;
  double t20861;
  double t20862;
  double t20863;
  double t20881;
  double t20882;
  double t20883;
  double t20894;
  double t20895;
  double t20896;
  double t20901;
  double t20902;
  double t20903;
  t3989 = Cos(var1[4]);
  t7853 = Sin(var1[9]);
  t9628 = Sin(var1[4]);
  t10831 = Cos(var1[9]);
  t11531 = Sin(var1[5]);
  t7299 = Cos(var1[5]);
  t12826 = Sin(var1[10]);
  t2005 = Cos(var1[10]);
  t12863 = t10831*t9628;
  t12879 = t3989*t7853*t11531;
  t13385 = t12863 + t12879;
  t14109 = Sin(var1[11]);
  t14117 = -1.*t3989*t7299*t12826;
  t14177 = t2005*t13385;
  t14203 = t14117 + t14177;
  t14211 = Cos(var1[11]);
  t14238 = t2005*t3989*t7299;
  t14305 = t12826*t13385;
  t14334 = t14238 + t14305;
  t2775 = -1.*t2005;
  t3203 = 1. + t2775;
  t14833 = Sin(var1[3]);
  t11039 = -1.*t10831;
  t11529 = 1. + t11039;
  t14863 = Cos(var1[3]);
  t17939 = t14863*t7299;
  t20448 = -1.*t14833*t9628*t11531;
  t20452 = t17939 + t20448;
  t14857 = t7299*t14833*t9628;
  t17223 = t14863*t11531;
  t17697 = t14857 + t17223;
  t20667 = -1.*t10831*t3989*t14833;
  t20668 = -1.*t7853*t20452;
  t20669 = t20667 + t20668;
  t14219 = -1.*t14211;
  t14220 = 1. + t14219;
  t20671 = -1.*t12826*t17697;
  t20672 = t2005*t20669;
  t20678 = t20671 + t20672;
  t20680 = t2005*t17697;
  t20681 = t12826*t20669;
  t20682 = t20680 + t20681;
  t20872 = t7299*t14833;
  t20873 = t14863*t9628*t11531;
  t20874 = t20872 + t20873;
  t20861 = -1.*t14863*t7299*t9628;
  t20862 = t14833*t11531;
  t20863 = t20861 + t20862;
  t20881 = t10831*t14863*t3989;
  t20882 = -1.*t7853*t20874;
  t20883 = t20881 + t20882;
  t20894 = -1.*t12826*t20863;
  t20895 = t2005*t20883;
  t20896 = t20894 + t20895;
  t20901 = t2005*t20863;
  t20902 = t12826*t20883;
  t20903 = t20901 + t20902;
  p_output1[0]=0.325*t12826*t13385 - 0.575*t14109*t14203 - 0.575*t14220*t14334 - 0.0641*(t14203*t14211 + t14109*t14334) - 0.295*(-1.*t14109*t14203 + t14211*t14334) - 0.1575*t11529*t11531*t3989 - 0.325*t3203*t3989*t7299 - 0.1575*t7853*t9628 + 0.2255*(-1.*t10831*t11531*t3989 + t7853*t9628) + var1[0] - 1.*var2[0];
  p_output1[1]=0.1575*t11529*t20452 + 0.325*t12826*t20669 - 0.575*t14109*t20678 - 0.575*t14220*t20682 - 0.0641*(t14211*t20678 + t14109*t20682) - 0.295*(-1.*t14109*t20678 + t14211*t20682) - 0.325*t17697*t3203 + 0.1575*t14833*t3989*t7853 + 0.2255*(t10831*t20452 - 1.*t14833*t3989*t7853) + var1[1] - 1.*var2[1];
  p_output1[2]=0.1575*t11529*t20874 + 0.325*t12826*t20883 - 0.575*t14109*t20896 - 0.575*t14220*t20903 - 0.0641*(t14211*t20896 + t14109*t20903) - 0.295*(-1.*t14109*t20896 + t14211*t20903) - 0.325*t20863*t3203 - 0.1575*t14863*t3989*t7853 + 0.2255*(t10831*t20874 + t14863*t3989*t7853) + var1[2] - 1.*var2[2];
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
