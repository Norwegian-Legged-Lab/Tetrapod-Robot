/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:52:18 GMT+02:00
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
  double t1386;
  double t2224;
  double t2547;
  double t3856;
  double t3883;
  double t3888;
  double t1792;
  double t13160;
  double t4371;
  double t4384;
  double t17997;
  double t18280;
  double t18351;
  double t18362;
  double t18372;
  double t18380;
  double t18381;
  double t18382;
  double t18424;
  double t18442;
  double t18443;
  double t18444;
  double t3915;
  double t4030;
  double t18568;
  double t10922;
  double t12431;
  double t18663;
  double t18657;
  double t18664;
  double t18670;
  double t18758;
  double t18761;
  double t18784;
  double t18027;
  double t18209;
  double t18373;
  double t18375;
  double t19061;
  double t19064;
  double t19068;
  double t19109;
  double t19110;
  double t19113;
  double t19137;
  double t19140;
  double t19141;
  double t19233;
  double t19234;
  double t19235;
  double t19247;
  double t19248;
  double t19249;
  double t19287;
  double t19290;
  double t19321;
  double t19361;
  double t19480;
  double t20075;
  double t21082;
  double t22415;
  double t25113;
  t1386 = Cos(var1[4]);
  t2224 = Cos(var1[15]);
  t2547 = -1.*t2224;
  t3856 = 1. + t2547;
  t3883 = -0.15121*t3856;
  t3888 = Sin(var1[15]);
  t1792 = Cos(var1[5]);
  t13160 = Sin(var1[5]);
  t4371 = Sin(var1[16]);
  t4384 = Sin(var1[4]);
  t17997 = Cos(var1[16]);
  t18280 = t2224*t1386*t1792;
  t18351 = -1.*t1386*t3888*t13160;
  t18362 = t18280 + t18351;
  t18372 = Cos(var1[17]);
  t18380 = t4371*t4384;
  t18381 = t17997*t18362;
  t18382 = t18380 + t18381;
  t18424 = Sin(var1[17]);
  t18442 = t17997*t4384;
  t18443 = -1.*t4371*t18362;
  t18444 = t18442 + t18443;
  t3915 = -0.15121*t3888;
  t4030 = t3883 + t3915;
  t18568 = Sin(var1[3]);
  t10922 = 0.15121*t3888;
  t12431 = t3883 + t10922;
  t18663 = Cos(var1[3]);
  t18657 = t1792*t18568*t4384;
  t18664 = t18663*t13160;
  t18670 = t18657 + t18664;
  t18758 = t18663*t1792;
  t18761 = -1.*t18568*t4384*t13160;
  t18784 = t18758 + t18761;
  t18027 = -1.*t17997;
  t18209 = 1. + t18027;
  t18373 = -1.*t18372;
  t18375 = 1. + t18373;
  t19061 = t2224*t18670;
  t19064 = t3888*t18784;
  t19068 = t19061 + t19064;
  t19109 = -1.*t1386*t4371*t18568;
  t19110 = t17997*t19068;
  t19113 = t19109 + t19110;
  t19137 = -1.*t17997*t1386*t18568;
  t19140 = -1.*t4371*t19068;
  t19141 = t19137 + t19140;
  t19233 = -1.*t18663*t1792*t4384;
  t19234 = t18568*t13160;
  t19235 = t19233 + t19234;
  t19247 = t1792*t18568;
  t19248 = t18663*t4384*t13160;
  t19249 = t19247 + t19248;
  t19287 = t2224*t19235;
  t19290 = t3888*t19249;
  t19321 = t19287 + t19290;
  t19361 = t18663*t1386*t4371;
  t19480 = t17997*t19321;
  t20075 = t19361 + t19480;
  t21082 = t17997*t18663*t1386;
  t22415 = -1.*t4371*t19321;
  t25113 = t21082 + t22415;
  p_output1[0]=-1.*t12431*t13160*t1386 - 0.28121*t18209*t18362 - 0.50321*t18375*t18382 - 0.50321*t18424*t18444 - 0.23321*(t18372*t18382 - 1.*t18424*t18444) - 0.15121*(-1.*t13160*t1386*t2224 - 1.*t1386*t1792*t3888) + t1386*t1792*t4030 + 0.28121*t4371*t4384 + var1[0] - 1.*var2[0];
  p_output1[1]=t12431*t18784 - 0.28121*t18209*t19068 - 0.50321*t18375*t19113 - 0.50321*t18424*t19141 - 0.23321*(t18372*t19113 - 1.*t18424*t19141) - 0.15121*(t18784*t2224 - 1.*t18670*t3888) + t18670*t4030 - 0.28121*t1386*t18568*t4371 + var1[1] - 1.*var2[1];
  p_output1[2]=t12431*t19249 - 0.28121*t18209*t19321 - 0.50321*t18375*t20075 - 0.50321*t18424*t25113 - 0.23321*(t18372*t20075 - 1.*t18424*t25113) - 0.15121*(t19249*t2224 - 1.*t19235*t3888) + t19235*t4030 + 0.28121*t1386*t18663*t4371 + var1[2] - 1.*var2[2];
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
