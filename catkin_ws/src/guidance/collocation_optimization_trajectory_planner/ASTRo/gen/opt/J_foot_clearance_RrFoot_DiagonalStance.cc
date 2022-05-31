/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 16:59:47 GMT+02:00
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
  double t595;
  double t883;
  double t884;
  double t976;
  double t979;
  double t1000;
  double t1852;
  double t1577;
  double t1588;
  double t1888;
  double t1695;
  double t1946;
  double t2139;
  double t2360;
  double t2368;
  double t2378;
  double t334;
  double t589;
  double t2448;
  double t2495;
  double t2497;
  double t2502;
  double t2507;
  double t2537;
  double t2538;
  double t2601;
  double t2630;
  double t2632;
  double t2689;
  double t2759;
  double t1019;
  double t1330;
  double t2279;
  double t2290;
  double t2482;
  double t2493;
  double t2526;
  double t2531;
  double t2989;
  double t3007;
  double t3018;
  double t3043;
  double t3047;
  double t3048;
  double t3054;
  double t3066;
  double t3067;
  double t3108;
  double t3109;
  double t3133;
  double t3176;
  double t3208;
  double t3243;
  double t3273;
  double t3278;
  double t3282;
  double t3531;
  double t3535;
  double t3550;
  double t3643;
  double t3652;
  double t3322;
  double t4179;
  double t4181;
  double t4183;
  double t4194;
  double t4196;
  double t4198;
  double t4200;
  double t4203;
  double t4204;
  double t4217;
  double t4219;
  double t4220;
  t595 = Sin(var1[3]);
  t883 = Cos(var1[15]);
  t884 = -1.*t883;
  t976 = 1. + t884;
  t979 = -0.15121*t976;
  t1000 = Sin(var1[15]);
  t1852 = Cos(var1[3]);
  t1577 = Cos(var1[5]);
  t1588 = Sin(var1[4]);
  t1888 = Sin(var1[5]);
  t1695 = t1577*t595*t1588;
  t1946 = t1852*t1888;
  t2139 = t1695 + t1946;
  t2360 = t1852*t1577;
  t2368 = -1.*t595*t1588*t1888;
  t2378 = t2360 + t2368;
  t334 = Cos(var1[4]);
  t589 = Sin(var1[16]);
  t2448 = Cos(var1[16]);
  t2495 = t883*t2139;
  t2497 = t1000*t2378;
  t2502 = t2495 + t2497;
  t2507 = Cos(var1[17]);
  t2537 = -1.*t334*t589*t595;
  t2538 = t2448*t2502;
  t2601 = t2537 + t2538;
  t2630 = Sin(var1[17]);
  t2632 = -1.*t2448*t334*t595;
  t2689 = -1.*t589*t2502;
  t2759 = t2632 + t2689;
  t1019 = -0.15121*t1000;
  t1330 = t979 + t1019;
  t2279 = 0.15121*t1000;
  t2290 = t979 + t2279;
  t2482 = -1.*t2448;
  t2493 = 1. + t2482;
  t2526 = -1.*t2507;
  t2531 = 1. + t2526;
  t2989 = -1.*t883*t1852*t334*t1577;
  t3007 = t1852*t334*t1000*t1888;
  t3018 = t2989 + t3007;
  t3043 = -1.*t1852*t589*t1588;
  t3047 = t2448*t3018;
  t3048 = t3043 + t3047;
  t3054 = -1.*t2448*t1852*t1588;
  t3066 = -1.*t589*t3018;
  t3067 = t3054 + t3066;
  t3108 = t1852*t1577*t1588;
  t3109 = -1.*t595*t1888;
  t3133 = t3108 + t3109;
  t3176 = t1577*t595;
  t3208 = t1852*t1588*t1888;
  t3243 = t3176 + t3208;
  t3273 = t1000*t3133;
  t3278 = t883*t3243;
  t3282 = t3273 + t3278;
  t3531 = -1.*t1852*t1577*t1588;
  t3535 = t595*t1888;
  t3550 = t3531 + t3535;
  t3643 = -1.*t1000*t3550;
  t3652 = t3643 + t3278;
  t3322 = -1.*t1000*t3243;
  t4179 = t883*t3550;
  t4181 = t1000*t3243;
  t4183 = t4179 + t4181;
  t4194 = -1.*t1852*t334*t589;
  t4196 = -1.*t2448*t4183;
  t4198 = t4194 + t4196;
  t4200 = t2448*t1852*t334;
  t4203 = -1.*t589*t4183;
  t4204 = t4200 + t4203;
  t4217 = t1852*t334*t589;
  t4219 = t2448*t4183;
  t4220 = t4217 + t4219;
  p_output1[0]=1.;
  p_output1[1]=t1330*t2139 + t2290*t2378 - 0.28121*t2493*t2502 - 0.50321*t2531*t2601 - 0.50321*t2630*t2759 - 0.19821*(t2507*t2601 - 1.*t2630*t2759) - 0.28121*t334*t589*t595 - 0.15121*(-1.*t1000*t2139 + t2378*t883);
  p_output1[2]=-0.28121*t2493*t3018 - 0.50321*t2531*t3048 - 0.50321*t2630*t3067 - 0.19821*(t2507*t3048 - 1.*t2630*t3067) - 1.*t1330*t1577*t1852*t334 + t1852*t1888*t2290*t334 - 0.28121*t1588*t1852*t589 - 0.15121*(t1000*t1577*t1852*t334 + t1852*t1888*t334*t883);
  p_output1[3]=t2290*t3133 + t1330*t3243 - 0.28121*t2493*t3282 - 0.50321*t2448*t2531*t3282 + 0.50321*t2630*t3282*t589 - 0.19821*(t2448*t2507*t3282 + t2630*t3282*t589) - 0.15121*(t3322 + t3133*t883);
  p_output1[4]=-0.28121*t2493*t3652 - 0.50321*t2448*t2531*t3652 + 0.50321*t2630*t3652*t589 - 0.19821*(t2448*t2507*t3652 + t2630*t3652*t589) + t3550*(t1019 - 0.15121*t883) + t3243*(t1019 + 0.15121*t883) - 0.15121*(t3322 - 1.*t3550*t883);
  p_output1[5]=0.28121*t1852*t2448*t334 - 0.50321*t2630*t4198 - 0.50321*t2531*t4204 - 0.19821*(-1.*t2630*t4198 + t2507*t4204) - 0.28121*t4183*t589;
  p_output1[6]=-0.50321*t2507*t4204 - 0.50321*t2630*t4220 - 0.19821*(-1.*t2507*t4204 - 1.*t2630*t4220);
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

#include "J_foot_clearance_RrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void J_foot_clearance_RrFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
