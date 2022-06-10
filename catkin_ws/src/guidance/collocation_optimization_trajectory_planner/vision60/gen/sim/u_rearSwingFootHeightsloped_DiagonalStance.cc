/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 13:04:29 GMT+02:00
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
  double t9275;
  double t17286;
  double t24931;
  double t24786;
  double t26549;
  double t11210;
  double t11782;
  double t26610;
  double t27196;
  double t29870;
  double t29885;
  double t31596;
  double t24878;
  double t26577;
  double t26593;
  double t15670;
  double t31616;
  double t31617;
  double t31876;
  double t31905;
  double t31934;
  double t31938;
  double t31982;
  double t31990;
  double t32172;
  double t32174;
  double t32202;
  double t15744;
  double t16965;
  double t26612;
  double t26629;
  double t36116;
  double t36218;
  double t36222;
  double t32101;
  double t32111;
  double t36243;
  double t36269;
  double t36270;
  double t36272;
  double t36277;
  double t36279;
  double t36078;
  double t36082;
  double t36093;
  double t36099;
  double t36102;
  double t36103;
  double t36105;
  double t36106;
  double t36232;
  double t36271;
  double t36280;
  double t36284;
  double t36288;
  double t36295;
  double t36296;
  double t36297;
  double t36298;
  double t36299;
  double t36301;
  double t36305;
  t9275 = Cos(var1[3]);
  t17286 = Cos(var1[5]);
  t24931 = Sin(var1[3]);
  t24786 = Sin(var1[4]);
  t26549 = Sin(var1[5]);
  t11210 = Cos(var1[4]);
  t11782 = Sin(var1[15]);
  t26610 = Cos(var1[15]);
  t27196 = t17286*t24931;
  t29870 = t9275*t24786*t26549;
  t29885 = t27196 + t29870;
  t31596 = Sin(var1[16]);
  t24878 = -1.*t9275*t17286*t24786;
  t26577 = t24931*t26549;
  t26593 = t24878 + t26577;
  t15670 = Cos(var1[16]);
  t31616 = t26610*t9275*t11210;
  t31617 = -1.*t11782*t29885;
  t31876 = t31616 + t31617;
  t31905 = Sin(var1[17]);
  t31934 = -1.*t31596*t26593;
  t31938 = t15670*t31876;
  t31982 = t31934 + t31938;
  t31990 = Cos(var1[17]);
  t32172 = t15670*t26593;
  t32174 = t31596*t31876;
  t32202 = t32172 + t32174;
  t15744 = -1.*t15670;
  t16965 = 1. + t15744;
  t26612 = -1.*t26610;
  t26629 = 1. + t26612;
  t36116 = t26610*t24786;
  t36218 = t11210*t11782*t26549;
  t36222 = t36116 + t36218;
  t32101 = -1.*t31990;
  t32111 = 1. + t32101;
  t36243 = -1.*t11210*t17286*t31596;
  t36269 = t15670*t36222;
  t36270 = t36243 + t36269;
  t36272 = t15670*t11210*t17286;
  t36277 = t31596*t36222;
  t36279 = t36272 + t36277;
  t36078 = -1.*var2[0];
  t36082 = -0.325*t16965*t11210*t17286;
  t36093 = 0.1575*t11782*t24786;
  t36099 = 0.1575*t26629*t11210*t26549;
  t36102 = t11782*t24786;
  t36103 = -1.*t26610*t11210*t26549;
  t36105 = t36102 + t36103;
  t36106 = -0.2255*t36105;
  t36232 = 0.325*t31596*t36222;
  t36271 = -0.575*t31905*t36270;
  t36280 = -0.575*t32111*t36279;
  t36284 = -1.*t31905*t36270;
  t36288 = t31990*t36279;
  t36295 = t36284 + t36288;
  t36296 = -0.295*t36295;
  t36297 = t31990*t36270;
  t36298 = t31905*t36279;
  t36299 = t36297 + t36298;
  t36301 = -0.0641*t36299;
  t36305 = t36078 + var1[0] + t36082 + t36093 + t36099 + t36106 + t36232 + t36271 + t36280 + t36296 + t36301;
  p_output1[0]=-0.325*t16965*t26593 - 0.1575*t26629*t29885 + 0.325*t31596*t31876 - 0.575*t31905*t31982 - 0.575*t32111*t32202 - 0.0641*(t31982*t31990 + t31905*t32202) - 0.295*(-1.*t31905*t31982 + t31990*t32202) + 0.1575*t11210*t11782*t9275 - 0.2255*(t26610*t29885 + t11210*t11782*t9275) + var1[2] - 0.5*t36305*var3[0]*(1. + Tanh(t36305*var4[0]));
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

#include "u_rearSwingFootHeightsloped_DiagonalStance.hh"

namespace SymFunction
{

void u_rearSwingFootHeightsloped_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
