/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:56:45 GMT+02:00
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
  double t1041;
  double t1078;
  double t1015;
  double t1043;
  double t1085;
  double t1132;
  double t1146;
  double t1147;
  double t1150;
  double t1189;
  double t1326;
  double t842;
  double t1054;
  double t1093;
  double t1106;
  double t1355;
  double t1356;
  double t1365;
  double t1369;
  double t1373;
  double t1381;
  double t1382;
  double t1383;
  double t1403;
  double t1408;
  double t1409;
  double t1419;
  t1041 = Cos(var1[5]);
  t1078 = Sin(var1[3]);
  t1015 = Cos(var1[3]);
  t1043 = Sin(var1[4]);
  t1085 = Sin(var1[5]);
  t1132 = Cos(var1[6]);
  t1146 = t1041*t1078;
  t1147 = t1015*t1043*t1085;
  t1150 = t1146 + t1147;
  t1189 = Cos(var1[4]);
  t1326 = Sin(var1[6]);
  t842 = Cos(var1[7]);
  t1054 = -1.*t1015*t1041*t1043;
  t1093 = t1078*t1085;
  t1106 = t1054 + t1093;
  t1355 = t1015*t1189*t1132;
  t1356 = -1.*t1150*t1326;
  t1365 = t1355 + t1356;
  t1369 = Sin(var1[7]);
  t1373 = Cos(var1[8]);
  t1381 = t842*t1106;
  t1382 = t1365*t1369;
  t1383 = t1381 + t1382;
  t1403 = t842*t1365;
  t1408 = -1.*t1106*t1369;
  t1409 = t1403 + t1408;
  t1419 = Sin(var1[8]);
  p_output1[0]=0.1575*(1. - 1.*t1132)*t1150 - 0.1575*t1015*t1189*t1326 + 0.2255*(t1132*t1150 + t1015*t1189*t1326) - 0.325*t1365*t1369 + 0.075*(1. - 1.*t1373)*t1383 + 0.075*t1409*t1419 - 0.0641*(t1373*t1409 + t1383*t1419) + 0.355*(t1373*t1383 - 1.*t1409*t1419) + 0.325*t1106*(1. - 1.*t842) + var1[2];
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
