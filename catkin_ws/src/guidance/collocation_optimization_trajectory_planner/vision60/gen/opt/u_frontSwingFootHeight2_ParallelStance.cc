/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:48:40 GMT+02:00
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
  double t4094;
  double t4225;
  double t3968;
  double t4104;
  double t4329;
  double t5019;
  double t5085;
  double t5148;
  double t5152;
  double t5508;
  double t5509;
  double t2819;
  double t4124;
  double t4866;
  double t4922;
  double t5649;
  double t5651;
  double t5652;
  double t5653;
  double t5657;
  double t5814;
  double t5948;
  double t5990;
  double t6007;
  double t6009;
  double t6010;
  double t6021;
  t4094 = Cos(var1[5]);
  t4225 = Sin(var1[3]);
  t3968 = Cos(var1[3]);
  t4104 = Sin(var1[4]);
  t4329 = Sin(var1[5]);
  t5019 = Cos(var1[6]);
  t5085 = t4094*t4225;
  t5148 = t3968*t4104*t4329;
  t5152 = t5085 + t5148;
  t5508 = Cos(var1[4]);
  t5509 = Sin(var1[6]);
  t2819 = Cos(var1[7]);
  t4124 = -1.*t3968*t4094*t4104;
  t4866 = t4225*t4329;
  t4922 = t4124 + t4866;
  t5649 = t3968*t5508*t5019;
  t5651 = -1.*t5152*t5509;
  t5652 = t5649 + t5651;
  t5653 = Sin(var1[7]);
  t5657 = Cos(var1[8]);
  t5814 = t2819*t4922;
  t5948 = t5652*t5653;
  t5990 = t5814 + t5948;
  t6007 = t2819*t5652;
  t6009 = -1.*t4922*t5653;
  t6010 = t6007 + t6009;
  t6021 = Sin(var1[8]);
  p_output1[0]=0.325*(1. - 1.*t2819)*t4922 + 0.1575*(1. - 1.*t5019)*t5152 - 0.1575*t3968*t5508*t5509 + 0.2255*(t5019*t5152 + t3968*t5508*t5509) - 0.325*t5652*t5653 + 0.075*(1. - 1.*t5657)*t5990 + 0.075*t6010*t6021 - 0.0641*(t5657*t6010 + t5990*t6021) + 0.355*(t5657*t5990 - 1.*t6010*t6021) + var1[2];
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
