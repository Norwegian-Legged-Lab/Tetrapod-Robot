/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:53:20 GMT+02:00
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
  double t94;
  double t2768;
  double t2791;
  double t2852;
  double t2857;
  double t2938;
  double t2971;
  double t3002;
  double t2974;
  double t3013;
  double t2996;
  double t3016;
  double t3026;
  double t3066;
  double t3075;
  double t3088;
  double t130;
  double t2273;
  double t3127;
  double t3171;
  double t3189;
  double t3194;
  double t3208;
  double t3224;
  double t3228;
  double t3230;
  double t3252;
  double t3254;
  double t3259;
  double t3263;
  t94 = Cos(var1[3]);
  t2768 = Cos(var1[15]);
  t2791 = -1.*t2768;
  t2852 = 1. + t2791;
  t2857 = -0.15121*t2852;
  t2938 = Sin(var1[15]);
  t2971 = Cos(var1[5]);
  t3002 = Sin(var1[3]);
  t2974 = Sin(var1[4]);
  t3013 = Sin(var1[5]);
  t2996 = -1.*t94*t2971*t2974;
  t3016 = t3002*t3013;
  t3026 = t2996 + t3016;
  t3066 = t2971*t3002;
  t3075 = t94*t2974*t3013;
  t3088 = t3066 + t3075;
  t130 = Cos(var1[4]);
  t2273 = Sin(var1[16]);
  t3127 = Cos(var1[16]);
  t3171 = t2768*t3026;
  t3189 = t2938*t3088;
  t3194 = t3171 + t3189;
  t3208 = Cos(var1[17]);
  t3224 = t94*t130*t2273;
  t3228 = t3127*t3194;
  t3230 = t3224 + t3228;
  t3252 = Sin(var1[17]);
  t3254 = t3127*t94*t130;
  t3259 = -1.*t2273*t3194;
  t3263 = t3254 + t3259;
  p_output1[0]=(t2857 - 0.15121*t2938)*t3026 + (t2857 + 0.15121*t2938)*t3088 - 0.15121*(-1.*t2938*t3026 + t2768*t3088) - 0.28121*(1. - 1.*t3127)*t3194 - 0.50321*(1. - 1.*t3208)*t3230 - 0.50321*t3252*t3263 - 0.19821*(t3208*t3230 - 1.*t3252*t3263) + 0.28121*t130*t2273*t94 + var1[2];
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

#include "foot_clearance_RrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void foot_clearance_RrFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
