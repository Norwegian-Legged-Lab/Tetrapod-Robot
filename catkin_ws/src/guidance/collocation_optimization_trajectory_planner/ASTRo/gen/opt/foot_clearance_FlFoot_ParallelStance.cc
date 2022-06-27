/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 14:37:50 GMT+02:00
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
  double t2732;
  double t1016;
  double t2884;
  double t1559;
  double t3369;
  double t5335;
  double t5527;
  double t5647;
  double t5704;
  double t7001;
  double t1734;
  double t3625;
  double t4569;
  double t8114;
  double t8146;
  double t8488;
  double t11324;
  double t11407;
  double t11409;
  double t11419;
  double t11491;
  double t11494;
  double t11658;
  double t11729;
  double t11947;
  double t11948;
  double t12004;
  double t12031;
  double t12033;
  double t12088;
  t2732 = Cos(var1[3]);
  t1016 = Cos(var1[5]);
  t2884 = Sin(var1[4]);
  t1559 = Sin(var1[3]);
  t3369 = Sin(var1[5]);
  t5335 = Cos(var1[6]);
  t5527 = -1.*t5335;
  t5647 = 1. + t5527;
  t5704 = 0.15121*t5647;
  t7001 = Sin(var1[6]);
  t1734 = t1016*t1559;
  t3625 = t2732*t2884*t3369;
  t4569 = t1734 + t3625;
  t8114 = -1.*t2732*t1016*t2884;
  t8146 = t1559*t3369;
  t8488 = t8114 + t8146;
  t11324 = Cos(var1[7]);
  t11407 = t5335*t8488;
  t11409 = t4569*t7001;
  t11419 = t11407 + t11409;
  t11491 = Cos(var1[4]);
  t11494 = Sin(var1[7]);
  t11658 = Cos(var1[8]);
  t11729 = t11324*t11419;
  t11947 = -1.*t2732*t11491*t11494;
  t11948 = t11729 + t11947;
  t12004 = t2732*t11491*t11324;
  t12031 = t11419*t11494;
  t12033 = t12004 + t12031;
  t12088 = Sin(var1[8]);
  p_output1[0]=0.28121*(1. - 1.*t11324)*t11419 + 0.50321*(1. - 1.*t11658)*t11948 - 0.50321*t12033*t12088 + 0.19821*(t11658*t11948 + t12033*t12088) + 0.28121*t11491*t11494*t2732 + t4569*(t5704 - 0.15121*t7001) + (t5704 + 0.15121*t7001)*t8488 + 0.15121*(t4569*t5335 - 1.*t7001*t8488) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "foot_clearance_FlFoot_ParallelStance.hh"

namespace ParallelStance
{

void foot_clearance_FlFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
