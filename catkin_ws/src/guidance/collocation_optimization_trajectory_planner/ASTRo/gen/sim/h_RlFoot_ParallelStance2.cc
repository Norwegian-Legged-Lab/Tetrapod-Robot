/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:38:03 GMT+02:00
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
  double t3655;
  double t4762;
  double t5157;
  double t5210;
  double t5213;
  double t5222;
  double t3820;
  double t7985;
  double t5283;
  double t5300;
  double t8682;
  double t9787;
  double t9788;
  double t9789;
  double t9921;
  double t9930;
  double t9938;
  double t9939;
  double t9941;
  double t9942;
  double t9943;
  double t9944;
  double t5212;
  double t5234;
  double t9976;
  double t5480;
  double t5773;
  double t10002;
  double t9998;
  double t10003;
  double t10004;
  double t10007;
  double t10008;
  double t10009;
  double t9069;
  double t9282;
  double t9925;
  double t9926;
  double t10039;
  double t10041;
  double t10042;
  double t10105;
  double t10115;
  double t10118;
  double t10147;
  double t10149;
  double t10155;
  double t10204;
  double t10206;
  double t10208;
  double t10214;
  double t10217;
  double t10239;
  double t10291;
  double t10293;
  double t10294;
  double t10299;
  double t10300;
  double t10321;
  double t10323;
  double t10327;
  double t10338;
  t3655 = Cos(var1[4]);
  t4762 = Cos(var1[9]);
  t5157 = -1.*t4762;
  t5210 = 1. + t5157;
  t5213 = Sin(var1[9]);
  t5222 = 0.15121*t5213;
  t3820 = Cos(var1[5]);
  t7985 = Sin(var1[5]);
  t5283 = Sin(var1[10]);
  t5300 = Sin(var1[4]);
  t8682 = Cos(var1[10]);
  t9787 = t4762*t3655*t3820;
  t9788 = -1.*t3655*t5213*t7985;
  t9789 = t9787 + t9788;
  t9921 = Cos(var1[11]);
  t9930 = t5283*t5300;
  t9938 = t8682*t9789;
  t9939 = t9930 + t9938;
  t9941 = Sin(var1[11]);
  t9942 = t8682*t5300;
  t9943 = -1.*t5283*t9789;
  t9944 = t9942 + t9943;
  t5212 = -0.15121*t5210;
  t5234 = t5212 + t5222;
  t9976 = Sin(var1[3]);
  t5480 = 0.15121*t5210;
  t5773 = t5480 + t5222;
  t10002 = Cos(var1[3]);
  t9998 = t3820*t9976*t5300;
  t10003 = t10002*t7985;
  t10004 = t9998 + t10003;
  t10007 = t10002*t3820;
  t10008 = -1.*t9976*t5300*t7985;
  t10009 = t10007 + t10008;
  t9069 = -1.*t8682;
  t9282 = 1. + t9069;
  t9925 = -1.*t9921;
  t9926 = 1. + t9925;
  t10039 = t4762*t10004;
  t10041 = t5213*t10009;
  t10042 = t10039 + t10041;
  t10105 = -1.*t3655*t5283*t9976;
  t10115 = t8682*t10042;
  t10118 = t10105 + t10115;
  t10147 = -1.*t8682*t3655*t9976;
  t10149 = -1.*t5283*t10042;
  t10155 = t10147 + t10149;
  t10204 = -1.*t10002*t3820*t5300;
  t10206 = t9976*t7985;
  t10208 = t10204 + t10206;
  t10214 = t3820*t9976;
  t10217 = t10002*t5300*t7985;
  t10239 = t10214 + t10217;
  t10291 = t4762*t10208;
  t10293 = t5213*t10239;
  t10294 = t10291 + t10293;
  t10299 = t10002*t3655*t5283;
  t10300 = t8682*t10294;
  t10321 = t10299 + t10300;
  t10323 = t8682*t10002*t3655;
  t10327 = -1.*t5283*t10294;
  t10338 = t10323 + t10327;
  p_output1[0]=t3655*t3820*t5234 + 0.28121*t5283*t5300 - 1.*t3655*t5773*t7985 + 0.15121*(-1.*t3655*t3820*t5213 - 1.*t3655*t4762*t7985) - 0.28121*t9282*t9789 - 0.50321*t9926*t9939 - 0.50321*t9941*t9944 - 0.19821*(t9921*t9939 - 1.*t9941*t9944) + var1[0] - 1.*var2[0];
  p_output1[1]=0.15121*(t10009*t4762 - 1.*t10004*t5213) + t10004*t5234 + t10009*t5773 - 0.28121*t10042*t9282 - 0.50321*t10118*t9926 - 0.50321*t10155*t9941 - 0.19821*(t10118*t9921 - 1.*t10155*t9941) - 0.28121*t3655*t5283*t9976 + var1[1] - 1.*var2[1];
  p_output1[2]=0.15121*(t10239*t4762 - 1.*t10208*t5213) + t10208*t5234 + 0.28121*t10002*t3655*t5283 + t10239*t5773 - 0.28121*t10294*t9282 - 0.50321*t10321*t9926 - 0.50321*t10338*t9941 - 0.19821*(t10321*t9921 - 1.*t10338*t9941) + var1[2] - 1.*var2[2];
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

#include "h_RlFoot_ParallelStance2.hh"

namespace SymFunction
{

void h_RlFoot_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
