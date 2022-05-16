/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:40:48 GMT+02:00
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
  double t407;
  double t2453;
  double t3780;
  double t4146;
  double t7794;
  double t7952;
  double t2361;
  double t19791;
  double t21136;
  double t21291;
  double t21332;
  double t21341;
  double t21372;
  double t21381;
  double t21477;
  double t21526;
  double t21560;
  double t21584;
  double t21676;
  double t21680;
  double t21684;
  double t21753;
  double t19441;
  double t19520;
  double t51965;
  double t51942;
  double t20744;
  double t20780;
  double t51964;
  double t51967;
  double t52039;
  double t52054;
  double t52118;
  double t52124;
  double t21137;
  double t21277;
  double t21516;
  double t21518;
  double t52161;
  double t52162;
  double t52163;
  double t52166;
  double t52167;
  double t52168;
  double t52176;
  double t52183;
  double t52184;
  double t52359;
  double t52360;
  double t52361;
  double t52363;
  double t52367;
  double t52374;
  double t52386;
  double t52389;
  double t52393;
  double t52429;
  double t52432;
  double t52433;
  double t52437;
  double t52438;
  double t52440;
  t407 = Cos(var1[4]);
  t2453 = Cos(var1[6]);
  t3780 = -1.*t2453;
  t4146 = 1. + t3780;
  t7794 = 0.15121*t4146;
  t7952 = Sin(var1[6]);
  t2361 = Sin(var1[5]);
  t19791 = Cos(var1[5]);
  t21136 = Cos(var1[7]);
  t21291 = t407*t19791*t2453;
  t21332 = -1.*t407*t2361*t7952;
  t21341 = t21291 + t21332;
  t21372 = Sin(var1[4]);
  t21381 = Sin(var1[7]);
  t21477 = Cos(var1[8]);
  t21526 = t21136*t21341;
  t21560 = -1.*t21372*t21381;
  t21584 = t21526 + t21560;
  t21676 = t21136*t21372;
  t21680 = t21341*t21381;
  t21684 = t21676 + t21680;
  t21753 = Sin(var1[8]);
  t19441 = -0.15121*t7952;
  t19520 = t7794 + t19441;
  t51965 = Sin(var1[3]);
  t51942 = Cos(var1[3]);
  t20744 = 0.15121*t7952;
  t20780 = t7794 + t20744;
  t51964 = t51942*t19791;
  t51967 = -1.*t51965*t21372*t2361;
  t52039 = t51964 + t51967;
  t52054 = t19791*t51965*t21372;
  t52118 = t51942*t2361;
  t52124 = t52054 + t52118;
  t21137 = -1.*t21136;
  t21277 = 1. + t21137;
  t21516 = -1.*t21477;
  t21518 = 1. + t21516;
  t52161 = t2453*t52124;
  t52162 = t52039*t7952;
  t52163 = t52161 + t52162;
  t52166 = t21136*t52163;
  t52167 = t407*t51965*t21381;
  t52168 = t52166 + t52167;
  t52176 = -1.*t407*t21136*t51965;
  t52183 = t52163*t21381;
  t52184 = t52176 + t52183;
  t52359 = t19791*t51965;
  t52360 = t51942*t21372*t2361;
  t52361 = t52359 + t52360;
  t52363 = -1.*t51942*t19791*t21372;
  t52367 = t51965*t2361;
  t52374 = t52363 + t52367;
  t52386 = t2453*t52374;
  t52389 = t52361*t7952;
  t52393 = t52386 + t52389;
  t52429 = t21136*t52393;
  t52432 = -1.*t51942*t407*t21381;
  t52433 = t52429 + t52432;
  t52437 = t51942*t407*t21136;
  t52438 = t52393*t21381;
  t52440 = t52437 + t52438;
  p_output1[0]=0.28121*t21277*t21341 + 0.28121*t21372*t21381 + 0.50321*t21518*t21584 - 0.50321*t21684*t21753 + 0.23321*(t21477*t21584 + t21684*t21753) + t19791*t20780*t407 - 1.*t19520*t2361*t407 + 0.15121*(-1.*t2361*t2453*t407 - 1.*t19791*t407*t7952) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.28121*t21381*t407*t51965 + t19520*t52039 + t20780*t52124 + 0.28121*t21277*t52163 + 0.50321*t21518*t52168 - 0.50321*t21753*t52184 + 0.23321*(t21477*t52168 + t21753*t52184) + 0.15121*(t2453*t52039 - 1.*t52124*t7952) + var1[1] - 1.*var2[1];
  p_output1[2]=0.28121*t21381*t407*t51942 + t19520*t52361 + t20780*t52374 + 0.28121*t21277*t52393 + 0.50321*t21518*t52433 - 0.50321*t21753*t52440 + 0.23321*(t21477*t52433 + t21753*t52440) + 0.15121*(t2453*t52361 - 1.*t52374*t7952) + var1[2] - 1.*var2[2];
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

#include "h_FlFoot_DiagonalStance2.hh"

namespace SymFunction
{

void h_FlFoot_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
