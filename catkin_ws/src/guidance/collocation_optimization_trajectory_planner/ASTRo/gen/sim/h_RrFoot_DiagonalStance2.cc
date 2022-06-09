/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:37:46 GMT+02:00
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
  double t2627;
  double t2900;
  double t2902;
  double t2954;
  double t2979;
  double t3025;
  double t2897;
  double t3477;
  double t3120;
  double t3179;
  double t4990;
  double t5090;
  double t5091;
  double t5170;
  double t5186;
  double t5208;
  double t5211;
  double t5225;
  double t5229;
  double t5230;
  double t5239;
  double t5248;
  double t3051;
  double t3078;
  double t5519;
  double t3197;
  double t3204;
  double t7984;
  double t7981;
  double t8199;
  double t8200;
  double t8208;
  double t8212;
  double t8219;
  double t4991;
  double t5086;
  double t5189;
  double t5207;
  double t8828;
  double t9016;
  double t9035;
  double t9250;
  double t9267;
  double t9286;
  double t9397;
  double t9452;
  double t9493;
  double t9980;
  double t10029;
  double t10030;
  double t10056;
  double t10059;
  double t10067;
  double t10092;
  double t10093;
  double t10102;
  double t10114;
  double t10122;
  double t10123;
  double t10178;
  double t10186;
  double t10187;
  t2627 = Cos(var1[4]);
  t2900 = Cos(var1[15]);
  t2902 = -1.*t2900;
  t2954 = 1. + t2902;
  t2979 = -0.15121*t2954;
  t3025 = Sin(var1[15]);
  t2897 = Cos(var1[5]);
  t3477 = Sin(var1[5]);
  t3120 = Sin(var1[16]);
  t3179 = Sin(var1[4]);
  t4990 = Cos(var1[16]);
  t5090 = t2900*t2627*t2897;
  t5091 = -1.*t2627*t3025*t3477;
  t5170 = t5090 + t5091;
  t5186 = Cos(var1[17]);
  t5208 = t3120*t3179;
  t5211 = t4990*t5170;
  t5225 = t5208 + t5211;
  t5229 = Sin(var1[17]);
  t5230 = t4990*t3179;
  t5239 = -1.*t3120*t5170;
  t5248 = t5230 + t5239;
  t3051 = -0.15121*t3025;
  t3078 = t2979 + t3051;
  t5519 = Sin(var1[3]);
  t3197 = 0.15121*t3025;
  t3204 = t2979 + t3197;
  t7984 = Cos(var1[3]);
  t7981 = t2897*t5519*t3179;
  t8199 = t7984*t3477;
  t8200 = t7981 + t8199;
  t8208 = t7984*t2897;
  t8212 = -1.*t5519*t3179*t3477;
  t8219 = t8208 + t8212;
  t4991 = -1.*t4990;
  t5086 = 1. + t4991;
  t5189 = -1.*t5186;
  t5207 = 1. + t5189;
  t8828 = t2900*t8200;
  t9016 = t3025*t8219;
  t9035 = t8828 + t9016;
  t9250 = -1.*t2627*t3120*t5519;
  t9267 = t4990*t9035;
  t9286 = t9250 + t9267;
  t9397 = -1.*t4990*t2627*t5519;
  t9452 = -1.*t3120*t9035;
  t9493 = t9397 + t9452;
  t9980 = -1.*t7984*t2897*t3179;
  t10029 = t5519*t3477;
  t10030 = t9980 + t10029;
  t10056 = t2897*t5519;
  t10059 = t7984*t3179*t3477;
  t10067 = t10056 + t10059;
  t10092 = t2900*t10030;
  t10093 = t3025*t10067;
  t10102 = t10092 + t10093;
  t10114 = t7984*t2627*t3120;
  t10122 = t4990*t10102;
  t10123 = t10114 + t10122;
  t10178 = t4990*t7984*t2627;
  t10186 = -1.*t3120*t10102;
  t10187 = t10178 + t10186;
  p_output1[0]=t2627*t2897*t3078 + 0.28121*t3120*t3179 - 1.*t2627*t3204*t3477 - 0.15121*(-1.*t2627*t2897*t3025 - 1.*t2627*t2900*t3477) - 0.28121*t5086*t5170 - 0.50321*t5207*t5225 - 0.50321*t5229*t5248 - 0.19821*(t5186*t5225 - 1.*t5229*t5248) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.28121*t2627*t3120*t5519 + t3078*t8200 + t3204*t8219 - 0.15121*(-1.*t3025*t8200 + t2900*t8219) - 0.28121*t5086*t9035 - 0.50321*t5207*t9286 - 0.50321*t5229*t9493 - 0.19821*(t5186*t9286 - 1.*t5229*t9493) + var1[1] - 1.*var2[1];
  p_output1[2]=-0.15121*(t10067*t2900 - 1.*t10030*t3025) + t10030*t3078 + t10067*t3204 - 0.28121*t10102*t5086 - 0.50321*t10123*t5207 - 0.50321*t10187*t5229 - 0.19821*(t10123*t5186 - 1.*t10187*t5229) + 0.28121*t2627*t3120*t7984 + var1[2] - 1.*var2[2];
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

#include "h_RrFoot_DiagonalStance2.hh"

namespace SymFunction
{

void h_RrFoot_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
