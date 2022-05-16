/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:41:43 GMT+02:00
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
  double t247;
  double t786;
  double t845;
  double t909;
  double t1167;
  double t1209;
  double t548;
  double t2051;
  double t1669;
  double t1708;
  double t2616;
  double t2889;
  double t3020;
  double t3021;
  double t3056;
  double t3147;
  double t3166;
  double t3179;
  double t3448;
  double t3512;
  double t3523;
  double t3543;
  double t993;
  double t1404;
  double t3736;
  double t1897;
  double t2021;
  double t4016;
  double t3756;
  double t4049;
  double t4107;
  double t4391;
  double t4405;
  double t4596;
  double t2701;
  double t2710;
  double t3111;
  double t3143;
  double t4929;
  double t4947;
  double t4950;
  double t5135;
  double t5154;
  double t5175;
  double t5180;
  double t5194;
  double t5195;
  double t5423;
  double t5430;
  double t5432;
  double t5449;
  double t5450;
  double t5462;
  double t5565;
  double t5648;
  double t5658;
  double t5880;
  double t6319;
  double t6375;
  double t7499;
  double t7782;
  double t8834;
  t247 = Cos(var1[4]);
  t786 = Cos(var1[12]);
  t845 = -1.*t786;
  t909 = 1. + t845;
  t1167 = Sin(var1[12]);
  t1209 = -0.15121*t1167;
  t548 = Cos(var1[5]);
  t2051 = Sin(var1[5]);
  t1669 = Sin(var1[13]);
  t1708 = Sin(var1[4]);
  t2616 = Cos(var1[13]);
  t2889 = t786*t247*t548;
  t3020 = -1.*t247*t1167*t2051;
  t3021 = t2889 + t3020;
  t3056 = Cos(var1[14]);
  t3147 = -1.*t1669*t1708;
  t3166 = t2616*t3021;
  t3179 = t3147 + t3166;
  t3448 = Sin(var1[14]);
  t3512 = t2616*t1708;
  t3523 = t1669*t3021;
  t3543 = t3512 + t3523;
  t993 = 0.15121*t909;
  t1404 = t993 + t1209;
  t3736 = Sin(var1[3]);
  t1897 = -0.15121*t909;
  t2021 = t1897 + t1209;
  t4016 = Cos(var1[3]);
  t3756 = t548*t3736*t1708;
  t4049 = t4016*t2051;
  t4107 = t3756 + t4049;
  t4391 = t4016*t548;
  t4405 = -1.*t3736*t1708*t2051;
  t4596 = t4391 + t4405;
  t2701 = -1.*t2616;
  t2710 = 1. + t2701;
  t3111 = -1.*t3056;
  t3143 = 1. + t3111;
  t4929 = t786*t4107;
  t4947 = t1167*t4596;
  t4950 = t4929 + t4947;
  t5135 = t247*t1669*t3736;
  t5154 = t2616*t4950;
  t5175 = t5135 + t5154;
  t5180 = -1.*t2616*t247*t3736;
  t5194 = t1669*t4950;
  t5195 = t5180 + t5194;
  t5423 = -1.*t4016*t548*t1708;
  t5430 = t3736*t2051;
  t5432 = t5423 + t5430;
  t5449 = t548*t3736;
  t5450 = t4016*t1708*t2051;
  t5462 = t5449 + t5450;
  t5565 = t786*t5432;
  t5648 = t1167*t5462;
  t5658 = t5565 + t5648;
  t5880 = -1.*t4016*t247*t1669;
  t6319 = t2616*t5658;
  t6375 = t5880 + t6319;
  t7499 = t2616*t4016*t247;
  t7782 = t1669*t5658;
  t8834 = t7499 + t7782;
  p_output1[0]=0.28121*t1669*t1708 - 1.*t2021*t2051*t247 + 0.28121*t2710*t3021 + 0.50321*t3143*t3179 - 0.50321*t3448*t3543 + 0.23321*(t3056*t3179 + t3448*t3543) + t1404*t247*t548 - 0.15121*(-1.*t1167*t247*t548 - 1.*t2051*t247*t786) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.28121*t1669*t247*t3736 + t1404*t4107 + t2021*t4596 + 0.28121*t2710*t4950 + 0.50321*t3143*t5175 - 0.50321*t3448*t5195 + 0.23321*(t3056*t5175 + t3448*t5195) - 0.15121*(-1.*t1167*t4107 + t4596*t786) + var1[1] - 1.*var2[1];
  p_output1[2]=0.28121*t1669*t247*t4016 + t1404*t5432 + t2021*t5462 + 0.28121*t2710*t5658 + 0.50321*t3143*t6375 - 0.15121*(-1.*t1167*t5432 + t5462*t786) - 0.50321*t3448*t8834 + 0.23321*(t3056*t6375 + t3448*t8834) + var1[2] - 1.*var2[2];
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
