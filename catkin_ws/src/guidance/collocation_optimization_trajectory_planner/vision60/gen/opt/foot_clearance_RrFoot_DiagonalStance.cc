/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:46:57 GMT+02:00
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
  double t612;
  double t3272;
  double t3914;
  double t3478;
  double t3971;
  double t1043;
  double t1463;
  double t4631;
  double t4845;
  double t4884;
  double t4909;
  double t5071;
  double t3863;
  double t3997;
  double t4567;
  double t1696;
  double t5084;
  double t5101;
  double t5106;
  double t5167;
  double t5190;
  double t5205;
  double t5237;
  double t5266;
  double t5301;
  double t5313;
  double t5320;
  t612 = Cos(var1[3]);
  t3272 = Cos(var1[5]);
  t3914 = Sin(var1[3]);
  t3478 = Sin(var1[4]);
  t3971 = Sin(var1[5]);
  t1043 = Cos(var1[4]);
  t1463 = Sin(var1[15]);
  t4631 = Cos(var1[15]);
  t4845 = t3272*t3914;
  t4884 = t612*t3478*t3971;
  t4909 = t4845 + t4884;
  t5071 = Sin(var1[16]);
  t3863 = -1.*t612*t3272*t3478;
  t3997 = t3914*t3971;
  t4567 = t3863 + t3997;
  t1696 = Cos(var1[16]);
  t5084 = t4631*t612*t1043;
  t5101 = -1.*t1463*t4909;
  t5106 = t5084 + t5101;
  t5167 = Sin(var1[17]);
  t5190 = -1.*t5071*t4567;
  t5205 = t1696*t5106;
  t5237 = t5190 + t5205;
  t5266 = Cos(var1[17]);
  t5301 = t1696*t4567;
  t5313 = t5071*t5106;
  t5320 = t5301 + t5313;
  p_output1[0]=-0.325*(1. - 1.*t1696)*t4567 - 0.1575*(1. - 1.*t4631)*t4909 + 0.325*t5071*t5106 - 0.575*t5167*t5237 - 0.575*(1. - 1.*t5266)*t5320 - 0.0641*(t5237*t5266 + t5167*t5320) - 0.295*(-1.*t5167*t5237 + t5266*t5320) + 0.1575*t1043*t1463*t612 - 0.2255*(t4631*t4909 + t1043*t1463*t612) + var1[2];
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

#include "foot_clearance_RrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void foot_clearance_RrFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
