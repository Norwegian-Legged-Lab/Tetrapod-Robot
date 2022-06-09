/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:53:24 GMT+02:00
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
  double t3511;
  double t3561;
  double t3567;
  double t3505;
  double t3577;
  double t3648;
  double t3650;
  double t3658;
  double t3672;
  double t3848;
  double t3526;
  double t3602;
  double t3626;
  double t3961;
  double t4280;
  double t4290;
  double t4558;
  double t4571;
  double t4577;
  double t4600;
  double t4696;
  double t4753;
  double t4807;
  double t4956;
  double t5011;
  double t5021;
  double t5045;
  double t5061;
  double t5062;
  double t5066;
  double t3909;
  double t3932;
  double t4342;
  double t4380;
  double t4560;
  double t4565;
  double t4837;
  double t4870;
  double t5178;
  double t5212;
  double t5228;
  double t5254;
  double t5258;
  double t5277;
  double t5294;
  double t5310;
  double t5320;
  double t5331;
  double t5332;
  double t5333;
  double t5327;
  double t5328;
  double t5329;
  double t5335;
  double t5336;
  double t5337;
  double t5659;
  double t5677;
  double t5730;
  double t5803;
  double t5839;
  double t5343;
  double t6016;
  double t6036;
  double t6089;
  double t6124;
  double t6126;
  double t6132;
  double t6147;
  double t6154;
  double t6161;
  double t6295;
  double t6311;
  double t6329;
  t3511 = Cos(var1[5]);
  t3561 = Sin(var1[3]);
  t3567 = Sin(var1[4]);
  t3505 = Cos(var1[3]);
  t3577 = Sin(var1[5]);
  t3648 = Cos(var1[6]);
  t3650 = -1.*t3648;
  t3658 = 1. + t3650;
  t3672 = 0.15121*t3658;
  t3848 = Sin(var1[6]);
  t3526 = t3505*t3511;
  t3602 = -1.*t3561*t3567*t3577;
  t3626 = t3526 + t3602;
  t3961 = t3511*t3561*t3567;
  t4280 = t3505*t3577;
  t4290 = t3961 + t4280;
  t4558 = Cos(var1[7]);
  t4571 = t3648*t4290;
  t4577 = t3626*t3848;
  t4600 = t4571 + t4577;
  t4696 = Cos(var1[4]);
  t4753 = Sin(var1[7]);
  t4807 = Cos(var1[8]);
  t4956 = t4558*t4600;
  t5011 = t4696*t3561*t4753;
  t5021 = t4956 + t5011;
  t5045 = -1.*t4696*t4558*t3561;
  t5061 = t4600*t4753;
  t5062 = t5045 + t5061;
  t5066 = Sin(var1[8]);
  t3909 = -0.15121*t3848;
  t3932 = t3672 + t3909;
  t4342 = 0.15121*t3848;
  t4380 = t3672 + t4342;
  t4560 = -1.*t4558;
  t4565 = 1. + t4560;
  t4837 = -1.*t4807;
  t4870 = 1. + t4837;
  t5178 = -1.*t3505*t4696*t3511*t3648;
  t5212 = t3505*t4696*t3577*t3848;
  t5228 = t5178 + t5212;
  t5254 = t4558*t5228;
  t5258 = t3505*t3567*t4753;
  t5277 = t5254 + t5258;
  t5294 = -1.*t3505*t4558*t3567;
  t5310 = t5228*t4753;
  t5320 = t5294 + t5310;
  t5331 = t3511*t3561;
  t5332 = t3505*t3567*t3577;
  t5333 = t5331 + t5332;
  t5327 = t3505*t3511*t3567;
  t5328 = -1.*t3561*t3577;
  t5329 = t5327 + t5328;
  t5335 = t3648*t5333;
  t5336 = t5329*t3848;
  t5337 = t5335 + t5336;
  t5659 = -1.*t3505*t3511*t3567;
  t5677 = t3561*t3577;
  t5730 = t5659 + t5677;
  t5803 = -1.*t5730*t3848;
  t5839 = t5335 + t5803;
  t5343 = -1.*t5333*t3848;
  t6016 = t3648*t5730;
  t6036 = t5333*t3848;
  t6089 = t6016 + t6036;
  t6124 = -1.*t3505*t4696*t4558;
  t6126 = -1.*t6089*t4753;
  t6132 = t6124 + t6126;
  t6147 = t4558*t6089;
  t6154 = -1.*t3505*t4696*t4753;
  t6161 = t6147 + t6154;
  t6295 = t3505*t4696*t4558;
  t6311 = t6089*t4753;
  t6329 = t6295 + t6311;
  p_output1[0]=1.;
  p_output1[1]=t3626*t3932 + 0.15121*(t3626*t3648 - 1.*t3848*t4290) + t4290*t4380 + 0.28121*t4565*t4600 - 0.28121*t3561*t4696*t4753 + 0.50321*t4870*t5021 - 0.50321*t5062*t5066 + 0.19821*(t4807*t5021 + t5062*t5066);
  p_output1[2]=t3505*t3577*t3932*t4696 - 1.*t3505*t3511*t4380*t4696 + 0.15121*(t3505*t3577*t3648*t4696 + t3505*t3511*t3848*t4696) - 0.28121*t3505*t3567*t4753 + 0.28121*t4565*t5228 + 0.50321*t4870*t5277 - 0.50321*t5066*t5320 + 0.19821*(t4807*t5277 + t5066*t5320);
  p_output1[3]=t3932*t5329 + t4380*t5333 + 0.28121*t4565*t5337 + 0.50321*t4558*t4870*t5337 - 0.50321*t4753*t5066*t5337 + 0.19821*(t4558*t4807*t5337 + t4753*t5066*t5337) + 0.15121*(t3648*t5329 + t5343);
  p_output1[4]=(-0.15121*t3648 + t4342)*t5333 + (0.15121*t3648 + t4342)*t5730 + 0.15121*(t5343 - 1.*t3648*t5730) + 0.28121*t4565*t5839 + 0.50321*t4558*t4870*t5839 - 0.50321*t4753*t5066*t5839 + 0.19821*(t4558*t4807*t5839 + t4753*t5066*t5839);
  p_output1[5]=0.28121*t3505*t4558*t4696 + 0.28121*t4753*t6089 + 0.50321*t4870*t6132 - 0.50321*t5066*t6161 + 0.19821*(t4807*t6132 + t5066*t6161);
  p_output1[6]=0.50321*t5066*t6161 - 0.50321*t4807*t6329 + 0.19821*(-1.*t5066*t6161 + t4807*t6329);
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

#include "J_swing_position_FlFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void J_swing_position_FlFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
