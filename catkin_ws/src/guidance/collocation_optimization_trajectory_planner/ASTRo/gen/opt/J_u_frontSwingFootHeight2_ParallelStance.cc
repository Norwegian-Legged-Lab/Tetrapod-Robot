/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:44:02 GMT+02:00
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
  double t5798;
  double t5921;
  double t5922;
  double t5792;
  double t10984;
  double t19921;
  double t22906;
  double t26143;
  double t29134;
  double t40642;
  double t5801;
  double t15541;
  double t15542;
  double t40652;
  double t44505;
  double t44739;
  double t45762;
  double t45801;
  double t45810;
  double t45829;
  double t46123;
  double t46141;
  double t46173;
  double t46348;
  double t46465;
  double t46525;
  double t46651;
  double t46779;
  double t46781;
  double t46960;
  double t40645;
  double t40647;
  double t44846;
  double t44930;
  double t45765;
  double t45792;
  double t46255;
  double t46347;
  double t47067;
  double t47083;
  double t47088;
  double t47288;
  double t47312;
  double t47337;
  double t47346;
  double t47349;
  double t47352;
  double t47437;
  double t47439;
  double t47458;
  double t47359;
  double t47407;
  double t47424;
  double t47470;
  double t47471;
  double t47472;
  double t47517;
  double t47518;
  double t47519;
  double t47523;
  double t47524;
  double t47478;
  double t47612;
  double t47676;
  double t47681;
  double t47820;
  double t47825;
  double t47858;
  double t47978;
  double t48004;
  double t48009;
  double t48016;
  double t48036;
  double t48040;
  t5798 = Cos(var1[5]);
  t5921 = Sin(var1[3]);
  t5922 = Sin(var1[4]);
  t5792 = Cos(var1[3]);
  t10984 = Sin(var1[5]);
  t19921 = Cos(var1[6]);
  t22906 = -1.*t19921;
  t26143 = 1. + t22906;
  t29134 = 0.15121*t26143;
  t40642 = Sin(var1[6]);
  t5801 = t5792*t5798;
  t15541 = -1.*t5921*t5922*t10984;
  t15542 = t5801 + t15541;
  t40652 = t5798*t5921*t5922;
  t44505 = t5792*t10984;
  t44739 = t40652 + t44505;
  t45762 = Cos(var1[7]);
  t45801 = t19921*t44739;
  t45810 = t15542*t40642;
  t45829 = t45801 + t45810;
  t46123 = Cos(var1[4]);
  t46141 = Sin(var1[7]);
  t46173 = Cos(var1[8]);
  t46348 = t45762*t45829;
  t46465 = t46123*t5921*t46141;
  t46525 = t46348 + t46465;
  t46651 = -1.*t46123*t45762*t5921;
  t46779 = t45829*t46141;
  t46781 = t46651 + t46779;
  t46960 = Sin(var1[8]);
  t40645 = -0.15121*t40642;
  t40647 = t29134 + t40645;
  t44846 = 0.15121*t40642;
  t44930 = t29134 + t44846;
  t45765 = -1.*t45762;
  t45792 = 1. + t45765;
  t46255 = -1.*t46173;
  t46347 = 1. + t46255;
  t47067 = -1.*t5792*t46123*t5798*t19921;
  t47083 = t5792*t46123*t10984*t40642;
  t47088 = t47067 + t47083;
  t47288 = t45762*t47088;
  t47312 = t5792*t5922*t46141;
  t47337 = t47288 + t47312;
  t47346 = -1.*t5792*t45762*t5922;
  t47349 = t47088*t46141;
  t47352 = t47346 + t47349;
  t47437 = t5798*t5921;
  t47439 = t5792*t5922*t10984;
  t47458 = t47437 + t47439;
  t47359 = t5792*t5798*t5922;
  t47407 = -1.*t5921*t10984;
  t47424 = t47359 + t47407;
  t47470 = t19921*t47458;
  t47471 = t47424*t40642;
  t47472 = t47470 + t47471;
  t47517 = -1.*t5792*t5798*t5922;
  t47518 = t5921*t10984;
  t47519 = t47517 + t47518;
  t47523 = -1.*t47519*t40642;
  t47524 = t47470 + t47523;
  t47478 = -1.*t47458*t40642;
  t47612 = t19921*t47519;
  t47676 = t47458*t40642;
  t47681 = t47612 + t47676;
  t47820 = -1.*t5792*t46123*t45762;
  t47825 = -1.*t47681*t46141;
  t47858 = t47820 + t47825;
  t47978 = t45762*t47681;
  t48004 = -1.*t5792*t46123*t46141;
  t48009 = t47978 + t48004;
  t48016 = t5792*t46123*t45762;
  t48036 = t47681*t46141;
  t48040 = t48016 + t48036;
  p_output1[0]=1.;
  p_output1[1]=t15542*t40647 + 0.15121*(t15542*t19921 - 1.*t40642*t44739) + t44739*t44930 + 0.28121*t45792*t45829 + 0.50321*t46347*t46525 - 0.50321*t46781*t46960 + 0.23321*(t46173*t46525 + t46781*t46960) - 0.28121*t46123*t46141*t5921;
  p_output1[2]=0.28121*t45792*t47088 + 0.50321*t46347*t47337 - 0.50321*t46960*t47352 + 0.23321*(t46173*t47337 + t46960*t47352) + t10984*t40647*t46123*t5792 - 1.*t44930*t46123*t5792*t5798 + 0.15121*(t10984*t19921*t46123*t5792 + t40642*t46123*t5792*t5798) - 0.28121*t46141*t5792*t5922;
  p_output1[3]=t40647*t47424 + t44930*t47458 + 0.28121*t45792*t47472 + 0.50321*t45762*t46347*t47472 - 0.50321*t46141*t46960*t47472 + 0.23321*(t45762*t46173*t47472 + t46141*t46960*t47472) + 0.15121*(t19921*t47424 + t47478);
  p_output1[4]=(-0.15121*t19921 + t44846)*t47458 + (0.15121*t19921 + t44846)*t47519 + 0.15121*(t47478 - 1.*t19921*t47519) + 0.28121*t45792*t47524 + 0.50321*t45762*t46347*t47524 - 0.50321*t46141*t46960*t47524 + 0.23321*(t45762*t46173*t47524 + t46141*t46960*t47524);
  p_output1[5]=0.28121*t46141*t47681 + 0.50321*t46347*t47858 - 0.50321*t46960*t48009 + 0.23321*(t46173*t47858 + t46960*t48009) + 0.28121*t45762*t46123*t5792;
  p_output1[6]=0.50321*t46960*t48009 - 0.50321*t46173*t48040 + 0.23321*(-1.*t46960*t48009 + t46173*t48040);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_u_frontSwingFootHeight2_ParallelStance.hh"

namespace ParallelStance
{

void J_u_frontSwingFootHeight2_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
