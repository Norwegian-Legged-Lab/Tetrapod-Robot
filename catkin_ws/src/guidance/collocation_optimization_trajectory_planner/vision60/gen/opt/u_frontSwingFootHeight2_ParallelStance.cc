/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:34:11 GMT+02:00
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
  double t10911;
  double t11045;
  double t10910;
  double t11036;
  double t11053;
  double t11107;
  double t11174;
  double t11176;
  double t11265;
  double t11490;
  double t11597;
  double t9894;
  double t11041;
  double t11059;
  double t11081;
  double t13228;
  double t13302;
  double t13309;
  double t13313;
  double t13317;
  double t13321;
  double t13322;
  double t13323;
  double t13327;
  double t13462;
  double t13750;
  double t14079;
  t10911 = Cos(var1[5]);
  t11045 = Sin(var1[3]);
  t10910 = Cos(var1[3]);
  t11036 = Sin(var1[4]);
  t11053 = Sin(var1[5]);
  t11107 = Cos(var1[6]);
  t11174 = t10911*t11045;
  t11176 = t10910*t11036*t11053;
  t11265 = t11174 + t11176;
  t11490 = Cos(var1[4]);
  t11597 = Sin(var1[6]);
  t9894 = Cos(var1[7]);
  t11041 = -1.*t10910*t10911*t11036;
  t11059 = t11045*t11053;
  t11081 = t11041 + t11059;
  t13228 = t10910*t11490*t11107;
  t13302 = -1.*t11265*t11597;
  t13309 = t13228 + t13302;
  t13313 = Sin(var1[7]);
  t13317 = Cos(var1[8]);
  t13321 = t9894*t11081;
  t13322 = t13309*t13313;
  t13323 = t13321 + t13322;
  t13327 = t9894*t13309;
  t13462 = -1.*t11081*t13313;
  t13750 = t13327 + t13462;
  t14079 = Sin(var1[8]);
  p_output1[0]=0.1575*(1. - 1.*t11107)*t11265 - 0.1575*t10910*t11490*t11597 + 0.2255*(t11107*t11265 + t10910*t11490*t11597) - 0.325*t13309*t13313 + 0.075*(1. - 1.*t13317)*t13323 + 0.075*t13750*t14079 - 0.0641*(t13317*t13750 + t13323*t14079) + 0.355*(t13317*t13323 - 1.*t13750*t14079) + 0.325*t11081*(1. - 1.*t9894) + var1[2];
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

#include "u_frontSwingFootHeight2_ParallelStance.hh"

namespace ParallelStance
{

void u_frontSwingFootHeight2_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
