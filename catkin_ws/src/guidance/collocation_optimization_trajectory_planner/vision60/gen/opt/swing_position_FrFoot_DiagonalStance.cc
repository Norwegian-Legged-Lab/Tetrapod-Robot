/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:47:01 GMT+02:00
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
  double t7733;
  double t8715;
  double t10060;
  double t9779;
  double t10128;
  double t8338;
  double t8346;
  double t10147;
  double t10163;
  double t10164;
  double t10168;
  double t10214;
  double t10045;
  double t10134;
  double t10141;
  double t8348;
  double t10234;
  double t10258;
  double t10260;
  double t10263;
  double t10268;
  double t10269;
  double t10270;
  double t10274;
  double t10361;
  double t10454;
  double t10455;
  t7733 = Cos(var1[3]);
  t8715 = Cos(var1[5]);
  t10060 = Sin(var1[3]);
  t9779 = Sin(var1[4]);
  t10128 = Sin(var1[5]);
  t8338 = Cos(var1[4]);
  t8346 = Sin(var1[12]);
  t10147 = Cos(var1[12]);
  t10163 = t8715*t10060;
  t10164 = t7733*t9779*t10128;
  t10168 = t10163 + t10164;
  t10214 = Sin(var1[13]);
  t10045 = -1.*t7733*t8715*t9779;
  t10134 = t10060*t10128;
  t10141 = t10045 + t10134;
  t8348 = Cos(var1[13]);
  t10234 = t10147*t7733*t8338;
  t10258 = -1.*t8346*t10168;
  t10260 = t10234 + t10258;
  t10263 = Sin(var1[14]);
  t10268 = -1.*t10214*t10141;
  t10269 = t8348*t10260;
  t10270 = t10268 + t10269;
  t10274 = Cos(var1[14]);
  t10361 = t8348*t10141;
  t10454 = t10214*t10260;
  t10455 = t10361 + t10454;
  p_output1[0]=-0.1575*(1. - 1.*t10147)*t10168 - 0.325*t10214*t10260 + 0.075*t10263*t10270 + 0.075*(1. - 1.*t10274)*t10455 - 0.0641*(t10270*t10274 + t10263*t10455) + 0.355*(-1.*t10263*t10270 + t10274*t10455) + 0.1575*t7733*t8338*t8346 - 0.2255*(t10147*t10168 + t7733*t8338*t8346) + 0.325*t10141*(1. - 1.*t8348) + var1[2];
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

#include "swing_position_FrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void swing_position_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
