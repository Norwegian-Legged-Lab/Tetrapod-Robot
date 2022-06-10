/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 12:58:05 GMT+02:00
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
  double t524;
  double t637;
  double t640;
  double t3080;
  double t6134;
  double t10673;
  double t13430;
  double t13805;
  double t13437;
  double t14000;
  double t13803;
  double t14335;
  double t14393;
  double t14568;
  double t14614;
  double t14636;
  double t565;
  double t621;
  double t14986;
  double t15186;
  double t15244;
  double t15258;
  double t15309;
  double t15347;
  double t15371;
  double t15378;
  double t15423;
  double t15460;
  double t15470;
  double t15619;
  double t4551;
  double t11799;
  double t14546;
  double t14567;
  double t15160;
  double t15185;
  double t15327;
  double t15344;
  double t16058;
  double t16110;
  double t16122;
  double t16133;
  double t16134;
  double t16142;
  double t16168;
  double t16170;
  double t16184;
  double t15828;
  double t15833;
  double t15842;
  double t15898;
  double t15996;
  double t16037;
  double t16038;
  double t16055;
  double t16128;
  double t16165;
  double t16191;
  double t16195;
  double t16201;
  double t16208;
  double t16220;
  double t16225;
  t524 = Cos(var1[3]);
  t637 = Cos(var1[12]);
  t640 = -1.*t637;
  t3080 = 1. + t640;
  t6134 = Sin(var1[12]);
  t10673 = -0.15121*t6134;
  t13430 = Cos(var1[5]);
  t13805 = Sin(var1[3]);
  t13437 = Sin(var1[4]);
  t14000 = Sin(var1[5]);
  t13803 = -1.*t524*t13430*t13437;
  t14335 = t13805*t14000;
  t14393 = t13803 + t14335;
  t14568 = t13430*t13805;
  t14614 = t524*t13437*t14000;
  t14636 = t14568 + t14614;
  t565 = Cos(var1[4]);
  t621 = Sin(var1[13]);
  t14986 = Cos(var1[13]);
  t15186 = t637*t14393;
  t15244 = t6134*t14636;
  t15258 = t15186 + t15244;
  t15309 = Cos(var1[14]);
  t15347 = -1.*t524*t565*t621;
  t15371 = t14986*t15258;
  t15378 = t15347 + t15371;
  t15423 = Sin(var1[14]);
  t15460 = t14986*t524*t565;
  t15470 = t621*t15258;
  t15619 = t15460 + t15470;
  t4551 = 0.15121*t3080;
  t11799 = t4551 + t10673;
  t14546 = -0.15121*t3080;
  t14567 = t14546 + t10673;
  t15160 = -1.*t14986;
  t15185 = 1. + t15160;
  t15327 = -1.*t15309;
  t15344 = 1. + t15327;
  t16058 = t637*t565*t13430;
  t16110 = -1.*t565*t6134*t14000;
  t16122 = t16058 + t16110;
  t16133 = -1.*t621*t13437;
  t16134 = t14986*t16122;
  t16142 = t16133 + t16134;
  t16168 = t14986*t13437;
  t16170 = t621*t16122;
  t16184 = t16168 + t16170;
  t15828 = -1.*var2[0];
  t15833 = t565*t13430*t11799;
  t15842 = 0.28121*t621*t13437;
  t15898 = -1.*t565*t14567*t14000;
  t15996 = -1.*t565*t13430*t6134;
  t16037 = -1.*t637*t565*t14000;
  t16038 = t15996 + t16037;
  t16055 = -0.15121*t16038;
  t16128 = 0.28121*t15185*t16122;
  t16165 = 0.50321*t15344*t16142;
  t16191 = -0.50321*t15423*t16184;
  t16195 = t15309*t16142;
  t16201 = t15423*t16184;
  t16208 = t16195 + t16201;
  t16220 = 0.19821*t16208;
  t16225 = t15828 + var1[0] + t15833 + t15842 + t15898 + t16055 + t16128 + t16165 + t16191 + t16220;
  p_output1[0]=t11799*t14393 + t14567*t14636 + 0.28121*t15185*t15258 + 0.50321*t15344*t15378 - 0.50321*t15423*t15619 + 0.19821*(t15309*t15378 + t15423*t15619) + 0.28121*t524*t565*t621 - 0.15121*(-1.*t14393*t6134 + t14636*t637) + var1[2] - 0.5*t16225*var3[0]*(1. + Tanh(t16225*var4[0]));
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

#include "u_frontSwingFootHeightsloped_ParallelStance2.hh"

namespace SymFunction
{

void u_frontSwingFootHeightsloped_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
