/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:48:20 GMT+02:00
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
  double t13733;
  double t22352;
  double t3761;
  double t20621;
  double t24025;
  double t24162;
  double t24178;
  double t24181;
  double t24184;
  double t24289;
  double t24305;
  double t25;
  double t20977;
  double t24134;
  double t24149;
  double t24438;
  double t24605;
  double t24621;
  double t24680;
  double t24767;
  double t25014;
  double t25020;
  double t25023;
  double t25028;
  double t25033;
  double t25034;
  double t25037;
  t13733 = Cos(var1[5]);
  t22352 = Sin(var1[3]);
  t3761 = Cos(var1[3]);
  t20621 = Sin(var1[4]);
  t24025 = Sin(var1[5]);
  t24162 = Cos(var1[6]);
  t24178 = t13733*t22352;
  t24181 = t3761*t20621*t24025;
  t24184 = t24178 + t24181;
  t24289 = Cos(var1[4]);
  t24305 = Sin(var1[6]);
  t25 = Cos(var1[7]);
  t20977 = -1.*t3761*t13733*t20621;
  t24134 = t22352*t24025;
  t24149 = t20977 + t24134;
  t24438 = t3761*t24289*t24162;
  t24605 = -1.*t24184*t24305;
  t24621 = t24438 + t24605;
  t24680 = Sin(var1[7]);
  t24767 = Cos(var1[8]);
  t25014 = t25*t24149;
  t25020 = t24621*t24680;
  t25023 = t25014 + t25020;
  t25028 = t25*t24621;
  t25033 = -1.*t24149*t24680;
  t25034 = t25028 + t25033;
  t25037 = Sin(var1[8]);
  p_output1[0]=0.1575*(1. - 1.*t24162)*t24184 - 0.325*t24621*t24680 + 0.325*t24149*(1. - 1.*t25) + 0.075*(1. - 1.*t24767)*t25023 + 0.075*t25034*t25037 - 0.0641*(t24767*t25034 + t25023*t25037) + 0.355*(t24767*t25023 - 1.*t25034*t25037) - 0.1575*t24289*t24305*t3761 + 0.2255*(t24162*t24184 + t24289*t24305*t3761) + var1[2];
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
