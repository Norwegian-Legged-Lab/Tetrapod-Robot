/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:04:03 GMT+02:00
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
  double t780;
  double t2132;
  double t2389;
  double t3067;
  double t3117;
  double t3205;
  double t1204;
  double t6499;
  double t4777;
  double t5271;
  double t7643;
  double t8574;
  double t9140;
  double t9280;
  double t9503;
  double t10035;
  double t10356;
  double t10362;
  double t10728;
  double t10732;
  double t10794;
  double t10814;
  double t3304;
  double t3416;
  double t10918;
  double t5654;
  double t5828;
  double t10993;
  double t10987;
  double t11007;
  double t11052;
  double t11073;
  double t11075;
  double t11076;
  double t7725;
  double t8560;
  double t9545;
  double t9934;
  double t11304;
  double t11308;
  double t11314;
  double t11380;
  double t11387;
  double t11390;
  double t11420;
  double t11424;
  double t11428;
  double t11460;
  double t11469;
  double t11487;
  double t11498;
  double t11506;
  double t11510;
  double t11551;
  double t11554;
  double t11556;
  double t11566;
  double t11575;
  double t11578;
  double t11586;
  double t11607;
  double t11613;
  t780 = Cos(var1[4]);
  t2132 = Cos(var1[15]);
  t2389 = -1.*t2132;
  t3067 = 1. + t2389;
  t3117 = -0.15121*t3067;
  t3205 = Sin(var1[15]);
  t1204 = Cos(var1[5]);
  t6499 = Sin(var1[5]);
  t4777 = Sin(var1[16]);
  t5271 = Sin(var1[4]);
  t7643 = Cos(var1[16]);
  t8574 = t2132*t780*t1204;
  t9140 = -1.*t780*t3205*t6499;
  t9280 = t8574 + t9140;
  t9503 = Cos(var1[17]);
  t10035 = t4777*t5271;
  t10356 = t7643*t9280;
  t10362 = t10035 + t10356;
  t10728 = Sin(var1[17]);
  t10732 = t7643*t5271;
  t10794 = -1.*t4777*t9280;
  t10814 = t10732 + t10794;
  t3304 = -0.15121*t3205;
  t3416 = t3117 + t3304;
  t10918 = Sin(var1[3]);
  t5654 = 0.15121*t3205;
  t5828 = t3117 + t5654;
  t10993 = Cos(var1[3]);
  t10987 = t1204*t10918*t5271;
  t11007 = t10993*t6499;
  t11052 = t10987 + t11007;
  t11073 = t10993*t1204;
  t11075 = -1.*t10918*t5271*t6499;
  t11076 = t11073 + t11075;
  t7725 = -1.*t7643;
  t8560 = 1. + t7725;
  t9545 = -1.*t9503;
  t9934 = 1. + t9545;
  t11304 = t2132*t11052;
  t11308 = t3205*t11076;
  t11314 = t11304 + t11308;
  t11380 = -1.*t780*t4777*t10918;
  t11387 = t7643*t11314;
  t11390 = t11380 + t11387;
  t11420 = -1.*t7643*t780*t10918;
  t11424 = -1.*t4777*t11314;
  t11428 = t11420 + t11424;
  t11460 = -1.*t10993*t1204*t5271;
  t11469 = t10918*t6499;
  t11487 = t11460 + t11469;
  t11498 = t1204*t10918;
  t11506 = t10993*t5271*t6499;
  t11510 = t11498 + t11506;
  t11551 = t2132*t11487;
  t11554 = t3205*t11510;
  t11556 = t11551 + t11554;
  t11566 = t10993*t780*t4777;
  t11575 = t7643*t11556;
  t11578 = t11566 + t11575;
  t11586 = t7643*t10993*t780;
  t11607 = -1.*t4777*t11556;
  t11613 = t11586 + t11607;
  p_output1[0]=-0.50321*t10728*t10814 + 0.28121*t4777*t5271 + t1204*t3416*t780 - 1.*t5828*t6499*t780 - 0.15121*(-1.*t1204*t3205*t780 - 1.*t2132*t6499*t780) - 0.28121*t8560*t9280 - 0.19821*(-1.*t10728*t10814 + t10362*t9503) - 0.50321*t10362*t9934 + var1[0] - 1.*var2[0];
  p_output1[1]=-0.50321*t10728*t11428 - 0.15121*(t11076*t2132 - 1.*t11052*t3205) + t11052*t3416 + t11076*t5828 - 0.28121*t10918*t4777*t780 - 0.28121*t11314*t8560 - 0.19821*(-1.*t10728*t11428 + t11390*t9503) - 0.50321*t11390*t9934 + var1[1] - 1.*var2[1];
  p_output1[2]=-0.50321*t10728*t11613 - 0.15121*(t11510*t2132 - 1.*t11487*t3205) + t11487*t3416 + t11510*t5828 + 0.28121*t10993*t4777*t780 - 0.28121*t11556*t8560 - 0.19821*(-1.*t10728*t11613 + t11578*t9503) - 0.50321*t11578*t9934 + var1[2] - 1.*var2[2];
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

#include "h_RrFoot_ParallelStance.hh"

namespace SymFunction
{

void h_RrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
