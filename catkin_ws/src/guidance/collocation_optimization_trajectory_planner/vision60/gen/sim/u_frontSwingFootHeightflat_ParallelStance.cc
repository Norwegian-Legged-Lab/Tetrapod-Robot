/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:05:21 GMT+02:00
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
  double t802;
  double t1074;
  double t788;
  double t887;
  double t1078;
  double t1218;
  double t1874;
  double t1940;
  double t1949;
  double t1971;
  double t1982;
  double t598;
  double t1073;
  double t1136;
  double t1158;
  double t2579;
  double t2703;
  double t2708;
  double t2737;
  double t2869;
  double t3204;
  double t3225;
  double t3265;
  double t3356;
  double t3424;
  double t3429;
  double t3433;
  t802 = Cos(var1[5]);
  t1074 = Sin(var1[3]);
  t788 = Cos(var1[3]);
  t887 = Sin(var1[4]);
  t1078 = Sin(var1[5]);
  t1218 = Cos(var1[6]);
  t1874 = t802*t1074;
  t1940 = t788*t887*t1078;
  t1949 = t1874 + t1940;
  t1971 = Cos(var1[4]);
  t1982 = Sin(var1[6]);
  t598 = Cos(var1[7]);
  t1073 = -1.*t788*t802*t887;
  t1136 = t1074*t1078;
  t1158 = t1073 + t1136;
  t2579 = t788*t1971*t1218;
  t2703 = -1.*t1949*t1982;
  t2708 = t2579 + t2703;
  t2737 = Sin(var1[7]);
  t2869 = Cos(var1[8]);
  t3204 = t598*t1158;
  t3225 = t2708*t2737;
  t3265 = t3204 + t3225;
  t3356 = t598*t2708;
  t3424 = -1.*t1158*t2737;
  t3429 = t3356 + t3424;
  t3433 = Sin(var1[8]);
  p_output1[0]=0.1575*(1. - 1.*t1218)*t1949 - 0.325*t2708*t2737 + 0.075*(1. - 1.*t2869)*t3265 + 0.075*t3429*t3433 - 0.0641*(t2869*t3429 + t3265*t3433) + 0.355*(t2869*t3265 - 1.*t3429*t3433) + 0.325*t1158*(1. - 1.*t598) - 0.1575*t1971*t1982*t788 + 0.2255*(t1218*t1949 + t1971*t1982*t788) + var1[2];
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
