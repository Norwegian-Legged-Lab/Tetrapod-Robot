/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:46:25 GMT+02:00
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
  double t488;
  double t512;
  double t513;
  double t572;
  double t610;
  double t503;
  double t745;
  double t429;
  double t746;
  double t760;
  double t762;
  double t769;
  double t777;
  double t781;
  double t782;
  double t785;
  double t804;
  double t805;
  double t811;
  double t486;
  double t487;
  double t946;
  double t577;
  double t607;
  double t950;
  double t960;
  double t967;
  double t968;
  double t949;
  double t951;
  double t958;
  double t999;
  double t1029;
  double t1030;
  double t801;
  double t803;
  double t1037;
  double t1062;
  double t1073;
  double t1087;
  double t1095;
  double t1106;
  double t1197;
  double t1200;
  double t1201;
  double t1186;
  double t1191;
  double t1195;
  double t1217;
  double t1220;
  double t1227;
  double t1239;
  double t1240;
  double t1241;
  double t1251;
  double t1252;
  double t1253;
  t488 = Cos(var1[4]);
  t512 = Sin(var1[12]);
  t513 = Sin(var1[4]);
  t572 = Cos(var1[12]);
  t610 = Sin(var1[5]);
  t503 = Cos(var1[5]);
  t745 = Sin(var1[13]);
  t429 = Cos(var1[13]);
  t746 = t572*t513;
  t760 = t488*t512*t610;
  t762 = t746 + t760;
  t769 = Sin(var1[14]);
  t777 = -1.*t488*t503*t745;
  t781 = t429*t762;
  t782 = t777 + t781;
  t785 = Cos(var1[14]);
  t804 = t429*t488*t503;
  t805 = t745*t762;
  t811 = t804 + t805;
  t486 = -1.*t429;
  t487 = 1. + t486;
  t946 = Sin(var1[3]);
  t577 = -1.*t572;
  t607 = 1. + t577;
  t950 = Cos(var1[3]);
  t960 = t950*t503;
  t967 = -1.*t946*t513*t610;
  t968 = t960 + t967;
  t949 = t503*t946*t513;
  t951 = t950*t610;
  t958 = t949 + t951;
  t999 = -1.*t572*t488*t946;
  t1029 = -1.*t512*t968;
  t1030 = t999 + t1029;
  t801 = -1.*t785;
  t803 = 1. + t801;
  t1037 = -1.*t745*t958;
  t1062 = t429*t1030;
  t1073 = t1037 + t1062;
  t1087 = t429*t958;
  t1095 = t745*t1030;
  t1106 = t1087 + t1095;
  t1197 = t503*t946;
  t1200 = t950*t513*t610;
  t1201 = t1197 + t1200;
  t1186 = -1.*t950*t503*t513;
  t1191 = t946*t610;
  t1195 = t1186 + t1191;
  t1217 = t572*t950*t488;
  t1220 = -1.*t512*t1201;
  t1227 = t1217 + t1220;
  t1239 = -1.*t745*t1195;
  t1240 = t429*t1227;
  t1241 = t1239 + t1240;
  t1251 = t429*t1195;
  t1252 = t745*t1227;
  t1253 = t1251 + t1252;
  p_output1[0]=0.325*t487*t488*t503 + 0.1575*t512*t513 + 0.1575*t488*t607*t610 - 0.2255*(t512*t513 - 1.*t488*t572*t610) - 0.325*t745*t762 + 0.075*t769*t782 + 0.075*t803*t811 - 0.0641*(t782*t785 + t769*t811) + 0.355*(-1.*t769*t782 + t785*t811) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.325*t1030*t745 + 0.075*t1073*t769 - 0.0641*(t1106*t769 + t1073*t785) + 0.355*(-1.*t1073*t769 + t1106*t785) + 0.075*t1106*t803 - 0.1575*t488*t512*t946 + 0.325*t487*t958 - 0.1575*t607*t968 - 0.2255*(-1.*t488*t512*t946 + t572*t968) + var1[1] - 1.*var2[1];
  p_output1[2]=0.325*t1195*t487 - 0.1575*t1201*t607 - 0.325*t1227*t745 + 0.075*t1241*t769 - 0.0641*(t1253*t769 + t1241*t785) + 0.355*(-1.*t1241*t769 + t1253*t785) + 0.075*t1253*t803 + 0.1575*t488*t512*t950 - 0.2255*(t1201*t572 + t488*t512*t950) + var1[2] - 1.*var2[2];
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

namespace DiagonalStance
{

void h_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
