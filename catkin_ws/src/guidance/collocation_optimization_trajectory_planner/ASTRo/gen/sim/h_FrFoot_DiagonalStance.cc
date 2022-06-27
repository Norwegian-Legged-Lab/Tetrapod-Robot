/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:20:03 GMT+02:00
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
  double t52;
  double t61;
  double t65;
  double t74;
  double t81;
  double t85;
  double t58;
  double t131;
  double t114;
  double t119;
  double t174;
  double t188;
  double t209;
  double t212;
  double t217;
  double t239;
  double t245;
  double t246;
  double t254;
  double t273;
  double t276;
  double t277;
  double t80;
  double t89;
  double t333;
  double t125;
  double t129;
  double t352;
  double t351;
  double t356;
  double t357;
  double t361;
  double t363;
  double t364;
  double t175;
  double t178;
  double t225;
  double t237;
  double t406;
  double t427;
  double t428;
  double t432;
  double t436;
  double t452;
  double t480;
  double t488;
  double t489;
  double t686;
  double t692;
  double t695;
  double t709;
  double t711;
  double t712;
  double t759;
  double t777;
  double t780;
  double t785;
  double t789;
  double t792;
  double t817;
  double t818;
  double t821;
  t52 = Cos(var1[4]);
  t61 = Cos(var1[12]);
  t65 = -1.*t61;
  t74 = 1. + t65;
  t81 = Sin(var1[12]);
  t85 = -0.15121*t81;
  t58 = Cos(var1[5]);
  t131 = Sin(var1[5]);
  t114 = Sin(var1[13]);
  t119 = Sin(var1[4]);
  t174 = Cos(var1[13]);
  t188 = t61*t52*t58;
  t209 = -1.*t52*t81*t131;
  t212 = t188 + t209;
  t217 = Cos(var1[14]);
  t239 = -1.*t114*t119;
  t245 = t174*t212;
  t246 = t239 + t245;
  t254 = Sin(var1[14]);
  t273 = t174*t119;
  t276 = t114*t212;
  t277 = t273 + t276;
  t80 = 0.15121*t74;
  t89 = t80 + t85;
  t333 = Sin(var1[3]);
  t125 = -0.15121*t74;
  t129 = t125 + t85;
  t352 = Cos(var1[3]);
  t351 = t58*t333*t119;
  t356 = t352*t131;
  t357 = t351 + t356;
  t361 = t352*t58;
  t363 = -1.*t333*t119*t131;
  t364 = t361 + t363;
  t175 = -1.*t174;
  t178 = 1. + t175;
  t225 = -1.*t217;
  t237 = 1. + t225;
  t406 = t61*t357;
  t427 = t81*t364;
  t428 = t406 + t427;
  t432 = t52*t114*t333;
  t436 = t174*t428;
  t452 = t432 + t436;
  t480 = -1.*t174*t52*t333;
  t488 = t114*t428;
  t489 = t480 + t488;
  t686 = -1.*t352*t58*t119;
  t692 = t333*t131;
  t695 = t686 + t692;
  t709 = t58*t333;
  t711 = t352*t119*t131;
  t712 = t709 + t711;
  t759 = t61*t695;
  t777 = t81*t712;
  t780 = t759 + t777;
  t785 = -1.*t352*t52*t114;
  t789 = t174*t780;
  t792 = t785 + t789;
  t817 = t174*t352*t52;
  t818 = t114*t780;
  t821 = t817 + t818;
  p_output1[0]=0.28121*t114*t119 + 0.28121*t178*t212 + 0.50321*t237*t246 - 0.50321*t254*t277 + 0.19821*(t217*t246 + t254*t277) - 1.*t129*t131*t52 - 0.15121*(-1.*t131*t52*t61 - 1.*t52*t58*t81) + t52*t58*t89 + var1[0] - 1.*var2[0];
  p_output1[1]=t129*t364 + 0.28121*t178*t428 + 0.50321*t237*t452 - 0.50321*t254*t489 + 0.19821*(t217*t452 + t254*t489) - 0.28121*t114*t333*t52 - 0.15121*(t364*t61 - 1.*t357*t81) + t357*t89 + var1[1] - 1.*var2[1];
  p_output1[2]=0.28121*t114*t352*t52 + t129*t712 + 0.28121*t178*t780 + 0.50321*t237*t792 - 0.15121*(t61*t712 - 1.*t695*t81) - 0.50321*t254*t821 + 0.19821*(t217*t792 + t254*t821) + t695*t89 + var1[2] - 1.*var2[2];
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
