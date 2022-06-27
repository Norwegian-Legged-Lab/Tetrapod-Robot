/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:21:00 GMT+02:00
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
  double t50;
  double t103;
  double t343;
  double t368;
  double t952;
  double t3185;
  double t69;
  double t10349;
  double t3667;
  double t3955;
  double t14406;
  double t14776;
  double t14851;
  double t14852;
  double t16184;
  double t17111;
  double t17723;
  double t19119;
  double t19187;
  double t19188;
  double t19193;
  double t19194;
  double t710;
  double t3463;
  double t19212;
  double t7562;
  double t7979;
  double t19231;
  double t19221;
  double t19232;
  double t19233;
  double t19238;
  double t19242;
  double t19243;
  double t14613;
  double t14614;
  double t16448;
  double t16774;
  double t19295;
  double t19296;
  double t19297;
  double t19302;
  double t19303;
  double t19304;
  double t19310;
  double t19311;
  double t19312;
  double t19324;
  double t19329;
  double t19330;
  double t19332;
  double t19333;
  double t19334;
  double t19344;
  double t19345;
  double t19346;
  double t19348;
  double t19349;
  double t19350;
  double t19356;
  double t19357;
  double t19358;
  t50 = Cos(var1[4]);
  t103 = Cos(var1[9]);
  t343 = -1.*t103;
  t368 = 1. + t343;
  t952 = Sin(var1[9]);
  t3185 = 0.15121*t952;
  t69 = Cos(var1[5]);
  t10349 = Sin(var1[5]);
  t3667 = Sin(var1[10]);
  t3955 = Sin(var1[4]);
  t14406 = Cos(var1[10]);
  t14776 = t103*t50*t69;
  t14851 = -1.*t50*t952*t10349;
  t14852 = t14776 + t14851;
  t16184 = Cos(var1[11]);
  t17111 = t3667*t3955;
  t17723 = t14406*t14852;
  t19119 = t17111 + t17723;
  t19187 = Sin(var1[11]);
  t19188 = t14406*t3955;
  t19193 = -1.*t3667*t14852;
  t19194 = t19188 + t19193;
  t710 = -0.15121*t368;
  t3463 = t710 + t3185;
  t19212 = Sin(var1[3]);
  t7562 = 0.15121*t368;
  t7979 = t7562 + t3185;
  t19231 = Cos(var1[3]);
  t19221 = t69*t19212*t3955;
  t19232 = t19231*t10349;
  t19233 = t19221 + t19232;
  t19238 = t19231*t69;
  t19242 = -1.*t19212*t3955*t10349;
  t19243 = t19238 + t19242;
  t14613 = -1.*t14406;
  t14614 = 1. + t14613;
  t16448 = -1.*t16184;
  t16774 = 1. + t16448;
  t19295 = t103*t19233;
  t19296 = t952*t19243;
  t19297 = t19295 + t19296;
  t19302 = -1.*t50*t3667*t19212;
  t19303 = t14406*t19297;
  t19304 = t19302 + t19303;
  t19310 = -1.*t14406*t50*t19212;
  t19311 = -1.*t3667*t19297;
  t19312 = t19310 + t19311;
  t19324 = -1.*t19231*t69*t3955;
  t19329 = t19212*t10349;
  t19330 = t19324 + t19329;
  t19332 = t69*t19212;
  t19333 = t19231*t3955*t10349;
  t19334 = t19332 + t19333;
  t19344 = t103*t19330;
  t19345 = t952*t19334;
  t19346 = t19344 + t19345;
  t19348 = t19231*t50*t3667;
  t19349 = t14406*t19346;
  t19350 = t19348 + t19349;
  t19356 = t14406*t19231*t50;
  t19357 = -1.*t3667*t19346;
  t19358 = t19356 + t19357;
  p_output1[0]=-0.28121*t14614*t14852 - 0.50321*t16774*t19119 - 0.50321*t19187*t19194 - 0.19821*(t16184*t19119 - 1.*t19187*t19194) + 0.28121*t3667*t3955 + t3463*t50*t69 - 1.*t10349*t50*t7979 + 0.15121*(-1.*t103*t10349*t50 - 1.*t50*t69*t952) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.28121*t14614*t19297 - 0.50321*t16774*t19304 - 0.50321*t19187*t19312 - 0.19821*(t16184*t19304 - 1.*t19187*t19312) + t19233*t3463 - 0.28121*t19212*t3667*t50 + t19243*t7979 + 0.15121*(t103*t19243 - 1.*t19233*t952) + var1[1] - 1.*var2[1];
  p_output1[2]=-0.28121*t14614*t19346 - 0.50321*t16774*t19350 - 0.50321*t19187*t19358 - 0.19821*(t16184*t19350 - 1.*t19187*t19358) + t19330*t3463 + 0.28121*t19231*t3667*t50 + t19334*t7979 + 0.15121*(t103*t19334 - 1.*t19330*t952) + var1[2] - 1.*var2[2];
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
