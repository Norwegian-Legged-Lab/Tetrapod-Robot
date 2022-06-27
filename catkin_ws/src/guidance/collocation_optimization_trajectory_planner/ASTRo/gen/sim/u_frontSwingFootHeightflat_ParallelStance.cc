/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:20:35 GMT+02:00
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
  double t163;
  double t32;
  double t186;
  double t57;
  double t194;
  double t271;
  double t451;
  double t455;
  double t470;
  double t471;
  double t161;
  double t243;
  double t247;
  double t1239;
  double t1243;
  double t1332;
  double t3482;
  double t3516;
  double t3522;
  double t3523;
  double t3527;
  double t3540;
  double t3564;
  double t3668;
  double t3671;
  double t3673;
  double t3678;
  double t3686;
  double t3687;
  double t3700;
  t163 = Cos(var1[3]);
  t32 = Cos(var1[5]);
  t186 = Sin(var1[4]);
  t57 = Sin(var1[3]);
  t194 = Sin(var1[5]);
  t271 = Cos(var1[6]);
  t451 = -1.*t271;
  t455 = 1. + t451;
  t470 = 0.15121*t455;
  t471 = Sin(var1[6]);
  t161 = t32*t57;
  t243 = t163*t186*t194;
  t247 = t161 + t243;
  t1239 = -1.*t163*t32*t186;
  t1243 = t57*t194;
  t1332 = t1239 + t1243;
  t3482 = Cos(var1[7]);
  t3516 = t271*t1332;
  t3522 = t247*t471;
  t3523 = t3516 + t3522;
  t3527 = Cos(var1[4]);
  t3540 = Sin(var1[7]);
  t3564 = Cos(var1[8]);
  t3668 = t3482*t3523;
  t3671 = -1.*t163*t3527*t3540;
  t3673 = t3668 + t3671;
  t3678 = t163*t3527*t3482;
  t3686 = t3523*t3540;
  t3687 = t3678 + t3686;
  t3700 = Sin(var1[8]);
  p_output1[0]=0.28121*(1. - 1.*t3482)*t3523 + 0.28121*t163*t3527*t3540 + 0.50321*(1. - 1.*t3564)*t3673 - 0.50321*t3687*t3700 + 0.19821*(t3564*t3673 + t3687*t3700) + t247*(t470 - 0.15121*t471) + t1332*(t470 + 0.15121*t471) + 0.15121*(t247*t271 - 1.*t1332*t471) + var1[2];
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
