/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:37:09 GMT+02:00
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
  double t1954;
  double t1963;
  double t2111;
  double t2124;
  double t2152;
  double t2160;
  double t1962;
  double t2388;
  double t2204;
  double t2372;
  double t2428;
  double t2438;
  double t2447;
  double t2451;
  double t2453;
  double t2580;
  double t2606;
  double t2607;
  double t2706;
  double t2716;
  double t2722;
  double t2729;
  double t2130;
  double t2162;
  double t3058;
  double t2381;
  double t2385;
  double t3109;
  double t3061;
  double t3113;
  double t3119;
  double t3130;
  double t3131;
  double t3134;
  double t2429;
  double t2433;
  double t2457;
  double t2575;
  double t3166;
  double t3176;
  double t3180;
  double t3185;
  double t3189;
  double t3190;
  double t3225;
  double t3229;
  double t3230;
  double t3260;
  double t3264;
  double t3270;
  double t3279;
  double t3281;
  double t3282;
  double t3293;
  double t3301;
  double t3318;
  double t3328;
  double t3331;
  double t3339;
  double t3356;
  double t3357;
  double t3385;
  t1954 = Cos(var1[4]);
  t1963 = Cos(var1[12]);
  t2111 = -1.*t1963;
  t2124 = 1. + t2111;
  t2152 = Sin(var1[12]);
  t2160 = -0.15121*t2152;
  t1962 = Cos(var1[5]);
  t2388 = Sin(var1[5]);
  t2204 = Sin(var1[13]);
  t2372 = Sin(var1[4]);
  t2428 = Cos(var1[13]);
  t2438 = t1963*t1954*t1962;
  t2447 = -1.*t1954*t2152*t2388;
  t2451 = t2438 + t2447;
  t2453 = Cos(var1[14]);
  t2580 = -1.*t2204*t2372;
  t2606 = t2428*t2451;
  t2607 = t2580 + t2606;
  t2706 = Sin(var1[14]);
  t2716 = t2428*t2372;
  t2722 = t2204*t2451;
  t2729 = t2716 + t2722;
  t2130 = 0.15121*t2124;
  t2162 = t2130 + t2160;
  t3058 = Sin(var1[3]);
  t2381 = -0.15121*t2124;
  t2385 = t2381 + t2160;
  t3109 = Cos(var1[3]);
  t3061 = t1962*t3058*t2372;
  t3113 = t3109*t2388;
  t3119 = t3061 + t3113;
  t3130 = t3109*t1962;
  t3131 = -1.*t3058*t2372*t2388;
  t3134 = t3130 + t3131;
  t2429 = -1.*t2428;
  t2433 = 1. + t2429;
  t2457 = -1.*t2453;
  t2575 = 1. + t2457;
  t3166 = t1963*t3119;
  t3176 = t2152*t3134;
  t3180 = t3166 + t3176;
  t3185 = t1954*t2204*t3058;
  t3189 = t2428*t3180;
  t3190 = t3185 + t3189;
  t3225 = -1.*t2428*t1954*t3058;
  t3229 = t2204*t3180;
  t3230 = t3225 + t3229;
  t3260 = -1.*t3109*t1962*t2372;
  t3264 = t3058*t2388;
  t3270 = t3260 + t3264;
  t3279 = t1962*t3058;
  t3281 = t3109*t2372*t2388;
  t3282 = t3279 + t3281;
  t3293 = t1963*t3270;
  t3301 = t2152*t3282;
  t3318 = t3293 + t3301;
  t3328 = -1.*t3109*t1954*t2204;
  t3331 = t2428*t3318;
  t3339 = t3328 + t3331;
  t3356 = t2428*t3109*t1954;
  t3357 = t2204*t3318;
  t3385 = t3356 + t3357;
  p_output1[0]=t1954*t1962*t2162 + 0.28121*t2204*t2372 - 1.*t1954*t2385*t2388 - 0.15121*(-1.*t1954*t1962*t2152 - 1.*t1954*t1963*t2388) + 0.28121*t2433*t2451 + 0.50321*t2575*t2607 - 0.50321*t2706*t2729 + 0.19821*(t2453*t2607 + t2706*t2729) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.28121*t1954*t2204*t3058 + t2162*t3119 + t2385*t3134 - 0.15121*(-1.*t2152*t3119 + t1963*t3134) + 0.28121*t2433*t3180 + 0.50321*t2575*t3190 - 0.50321*t2706*t3230 + 0.19821*(t2453*t3190 + t2706*t3230) + var1[1] - 1.*var2[1];
  p_output1[2]=0.28121*t1954*t2204*t3109 + t2162*t3270 + t2385*t3282 - 0.15121*(-1.*t2152*t3270 + t1963*t3282) + 0.28121*t2433*t3318 + 0.50321*t2575*t3339 - 0.50321*t2706*t3385 + 0.19821*(t2453*t3339 + t2706*t3385) + var1[2] - 1.*var2[2];
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

#include "h_FrFoot_DiagonalStance.hh"

namespace SymFunction
{

void h_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
