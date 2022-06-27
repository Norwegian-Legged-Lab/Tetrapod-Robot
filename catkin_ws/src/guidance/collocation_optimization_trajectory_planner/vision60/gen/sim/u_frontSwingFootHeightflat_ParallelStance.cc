/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:24:56 GMT+02:00
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
  double t2015;
  double t2100;
  double t2014;
  double t2018;
  double t2630;
  double t2916;
  double t2974;
  double t2992;
  double t3003;
  double t3041;
  double t3061;
  double t353;
  double t2030;
  double t2634;
  double t2635;
  double t3281;
  double t3298;
  double t3303;
  double t3320;
  double t3334;
  double t3341;
  double t3344;
  double t4407;
  double t4794;
  double t4867;
  double t5036;
  double t5480;
  t2015 = Cos(var1[5]);
  t2100 = Sin(var1[3]);
  t2014 = Cos(var1[3]);
  t2018 = Sin(var1[4]);
  t2630 = Sin(var1[5]);
  t2916 = Cos(var1[6]);
  t2974 = t2015*t2100;
  t2992 = t2014*t2018*t2630;
  t3003 = t2974 + t2992;
  t3041 = Cos(var1[4]);
  t3061 = Sin(var1[6]);
  t353 = Cos(var1[7]);
  t2030 = -1.*t2014*t2015*t2018;
  t2634 = t2100*t2630;
  t2635 = t2030 + t2634;
  t3281 = t2014*t3041*t2916;
  t3298 = -1.*t3003*t3061;
  t3303 = t3281 + t3298;
  t3320 = Sin(var1[7]);
  t3334 = Cos(var1[8]);
  t3341 = t353*t2635;
  t3344 = t3303*t3320;
  t4407 = t3341 + t3344;
  t4794 = t353*t3303;
  t4867 = -1.*t2635*t3320;
  t5036 = t4794 + t4867;
  t5480 = Sin(var1[8]);
  p_output1[0]=0.1575*(1. - 1.*t2916)*t3003 - 0.1575*t2014*t3041*t3061 + 0.2255*(t2916*t3003 + t2014*t3041*t3061) - 0.325*t3303*t3320 + 0.325*t2635*(1. - 1.*t353) + 0.075*(1. - 1.*t3334)*t4407 + 0.075*t5036*t5480 - 0.0641*(t3334*t5036 + t4407*t5480) + 0.355*(t3334*t4407 - 1.*t5036*t5480) + var1[2];
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

#include "u_frontSwingFootHeightflat_ParallelStance.hh"

namespace SymFunction
{

void u_frontSwingFootHeightflat_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
