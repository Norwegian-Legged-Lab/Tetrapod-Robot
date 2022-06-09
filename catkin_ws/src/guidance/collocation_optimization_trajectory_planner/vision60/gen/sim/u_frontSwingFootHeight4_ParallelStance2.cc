/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 14:41:34 GMT+02:00
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
  double t3047;
  double t3447;
  double t3456;
  double t3451;
  double t3514;
  double t3190;
  double t3191;
  double t3863;
  double t3961;
  double t3963;
  double t5056;
  double t7710;
  double t3455;
  double t3515;
  double t3827;
  double t3248;
  double t7711;
  double t7727;
  double t7728;
  double t7817;
  double t7823;
  double t7824;
  double t7825;
  double t7847;
  double t7852;
  double t7853;
  double t7854;
  t3047 = Cos(var1[3]);
  t3447 = Cos(var1[5]);
  t3456 = Sin(var1[3]);
  t3451 = Sin(var1[4]);
  t3514 = Sin(var1[5]);
  t3190 = Cos(var1[4]);
  t3191 = Sin(var1[12]);
  t3863 = Cos(var1[12]);
  t3961 = t3447*t3456;
  t3963 = t3047*t3451*t3514;
  t5056 = t3961 + t3963;
  t7710 = Sin(var1[13]);
  t3455 = -1.*t3047*t3447*t3451;
  t3515 = t3456*t3514;
  t3827 = t3455 + t3515;
  t3248 = Cos(var1[13]);
  t7711 = t3863*t3047*t3190;
  t7727 = -1.*t3191*t5056;
  t7728 = t7711 + t7727;
  t7817 = Sin(var1[14]);
  t7823 = -1.*t7710*t3827;
  t7824 = t3248*t7728;
  t7825 = t7823 + t7824;
  t7847 = Cos(var1[14]);
  t7852 = t3248*t3827;
  t7853 = t7710*t7728;
  t7854 = t7852 + t7853;
  p_output1[0]=0.1575*t3047*t3190*t3191 + 0.325*(1. - 1.*t3248)*t3827 - 0.1575*(1. - 1.*t3863)*t5056 - 0.2255*(t3047*t3190*t3191 + t3863*t5056) - 0.325*t7710*t7728 + 0.075*t7817*t7825 + 0.075*(1. - 1.*t7847)*t7854 - 0.0641*(t7825*t7847 + t7817*t7854) + 0.355*(-1.*t7817*t7825 + t7847*t7854) + var1[2];
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

#include "u_frontSwingFootHeight4_ParallelStance2.hh"

namespace SymFunction
{

void u_frontSwingFootHeight4_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
