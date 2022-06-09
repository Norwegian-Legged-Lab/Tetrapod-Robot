/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:08:13 GMT+02:00
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
  double t1643;
  double t13010;
  double t1628;
  double t1656;
  double t13450;
  double t13616;
  double t13635;
  double t13637;
  double t13638;
  double t13694;
  double t13889;
  double t204;
  double t1792;
  double t13478;
  double t13540;
  double t18583;
  double t18585;
  double t18586;
  double t18592;
  double t18595;
  double t18600;
  double t18601;
  double t18602;
  double t18607;
  double t18608;
  double t18609;
  double t18610;
  t1643 = Cos(var1[5]);
  t13010 = Sin(var1[3]);
  t1628 = Cos(var1[3]);
  t1656 = Sin(var1[4]);
  t13450 = Sin(var1[5]);
  t13616 = Cos(var1[6]);
  t13635 = t1643*t13010;
  t13637 = t1628*t1656*t13450;
  t13638 = t13635 + t13637;
  t13694 = Cos(var1[4]);
  t13889 = Sin(var1[6]);
  t204 = Cos(var1[7]);
  t1792 = -1.*t1628*t1643*t1656;
  t13478 = t13010*t13450;
  t13540 = t1792 + t13478;
  t18583 = t1628*t13694*t13616;
  t18585 = -1.*t13638*t13889;
  t18586 = t18583 + t18585;
  t18592 = Sin(var1[7]);
  t18595 = Cos(var1[8]);
  t18600 = t204*t13540;
  t18601 = t18586*t18592;
  t18602 = t18600 + t18601;
  t18607 = t204*t18586;
  t18608 = -1.*t13540*t18592;
  t18609 = t18607 + t18608;
  t18610 = Sin(var1[8]);
  p_output1[0]=0.1575*(1. - 1.*t13616)*t13638 - 0.1575*t13694*t13889*t1628 + 0.2255*(t13616*t13638 + t13694*t13889*t1628) - 0.325*t18586*t18592 + 0.075*(1. - 1.*t18595)*t18602 + 0.075*t18609*t18610 - 0.0641*(t18595*t18609 + t18602*t18610) + 0.355*(t18595*t18602 - 1.*t18609*t18610) + 0.325*t13540*(1. - 1.*t204) + var1[2];
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
