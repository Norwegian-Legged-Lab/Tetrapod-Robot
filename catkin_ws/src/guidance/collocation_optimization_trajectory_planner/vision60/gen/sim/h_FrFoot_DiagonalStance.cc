/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:04:21 GMT+02:00
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
  double t65;
  double t79;
  double t87;
  double t104;
  double t112;
  double t70;
  double t145;
  double t57;
  double t158;
  double t164;
  double t182;
  double t195;
  double t197;
  double t198;
  double t208;
  double t233;
  double t237;
  double t256;
  double t260;
  double t61;
  double t62;
  double t315;
  double t105;
  double t107;
  double t331;
  double t346;
  double t347;
  double t348;
  double t324;
  double t341;
  double t342;
  double t371;
  double t374;
  double t375;
  double t235;
  double t236;
  double t383;
  double t384;
  double t385;
  double t389;
  double t390;
  double t393;
  double t431;
  double t438;
  double t440;
  double t416;
  double t417;
  double t418;
  double t449;
  double t450;
  double t454;
  double t467;
  double t472;
  double t477;
  double t485;
  double t494;
  double t495;
  t65 = Cos(var1[4]);
  t79 = Sin(var1[12]);
  t87 = Sin(var1[4]);
  t104 = Cos(var1[12]);
  t112 = Sin(var1[5]);
  t70 = Cos(var1[5]);
  t145 = Sin(var1[13]);
  t57 = Cos(var1[13]);
  t158 = t104*t87;
  t164 = t65*t79*t112;
  t182 = t158 + t164;
  t195 = Sin(var1[14]);
  t197 = -1.*t65*t70*t145;
  t198 = t57*t182;
  t208 = t197 + t198;
  t233 = Cos(var1[14]);
  t237 = t57*t65*t70;
  t256 = t145*t182;
  t260 = t237 + t256;
  t61 = -1.*t57;
  t62 = 1. + t61;
  t315 = Sin(var1[3]);
  t105 = -1.*t104;
  t107 = 1. + t105;
  t331 = Cos(var1[3]);
  t346 = t331*t70;
  t347 = -1.*t315*t87*t112;
  t348 = t346 + t347;
  t324 = t70*t315*t87;
  t341 = t331*t112;
  t342 = t324 + t341;
  t371 = -1.*t104*t65*t315;
  t374 = -1.*t79*t348;
  t375 = t371 + t374;
  t235 = -1.*t233;
  t236 = 1. + t235;
  t383 = -1.*t145*t342;
  t384 = t57*t375;
  t385 = t383 + t384;
  t389 = t57*t342;
  t390 = t145*t375;
  t393 = t389 + t390;
  t431 = t70*t315;
  t438 = t331*t87*t112;
  t440 = t431 + t438;
  t416 = -1.*t331*t70*t87;
  t417 = t315*t112;
  t418 = t416 + t417;
  t449 = t104*t331*t65;
  t450 = -1.*t79*t440;
  t454 = t449 + t450;
  t467 = -1.*t145*t418;
  t472 = t57*t454;
  t477 = t467 + t472;
  t485 = t57*t418;
  t494 = t145*t454;
  t495 = t485 + t494;
  p_output1[0]=-0.325*t145*t182 + 0.075*t195*t208 + 0.075*t236*t260 - 0.0641*(t208*t233 + t195*t260) + 0.355*(-1.*t195*t208 + t233*t260) + 0.1575*t107*t112*t65 + 0.325*t62*t65*t70 + 0.1575*t79*t87 - 0.2255*(-1.*t104*t112*t65 + t79*t87) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.1575*t107*t348 - 0.325*t145*t375 + 0.075*t195*t385 + 0.075*t236*t393 - 0.0641*(t233*t385 + t195*t393) + 0.355*(-1.*t195*t385 + t233*t393) + 0.325*t342*t62 - 0.1575*t315*t65*t79 - 0.2255*(t104*t348 - 1.*t315*t65*t79) + var1[1] - 1.*var2[1];
  p_output1[2]=-0.1575*t107*t440 - 0.325*t145*t454 + 0.075*t195*t477 + 0.075*t236*t495 - 0.0641*(t233*t477 + t195*t495) + 0.355*(-1.*t195*t477 + t233*t495) + 0.325*t418*t62 + 0.1575*t331*t65*t79 - 0.2255*(t104*t440 + t331*t65*t79) + var1[2] - 1.*var2[2];
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
