/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:52:28 GMT+02:00
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
  double t425;
  double t980;
  double t986;
  double t993;
  double t1022;
  double t1097;
  double t1194;
  double t1456;
  double t1389;
  double t1504;
  double t1414;
  double t1509;
  double t1573;
  double t1731;
  double t2006;
  double t2093;
  double t427;
  double t641;
  double t29605;
  double t39549;
  double t39568;
  double t39670;
  double t39744;
  double t39948;
  double t39958;
  double t40136;
  double t40142;
  double t40148;
  double t40151;
  double t40153;
  t425 = Cos(var1[3]);
  t980 = Cos(var1[9]);
  t986 = -1.*t980;
  t993 = 1. + t986;
  t1022 = Sin(var1[9]);
  t1097 = 0.15121*t1022;
  t1194 = Cos(var1[5]);
  t1456 = Sin(var1[3]);
  t1389 = Sin(var1[4]);
  t1504 = Sin(var1[5]);
  t1414 = -1.*t425*t1194*t1389;
  t1509 = t1456*t1504;
  t1573 = t1414 + t1509;
  t1731 = t1194*t1456;
  t2006 = t425*t1389*t1504;
  t2093 = t1731 + t2006;
  t427 = Cos(var1[4]);
  t641 = Sin(var1[10]);
  t29605 = Cos(var1[10]);
  t39549 = t980*t1573;
  t39568 = t1022*t2093;
  t39670 = t39549 + t39568;
  t39744 = Cos(var1[11]);
  t39948 = t425*t427*t641;
  t39958 = t29605*t39670;
  t40136 = t39948 + t39958;
  t40142 = Sin(var1[11]);
  t40148 = t29605*t425*t427;
  t40151 = -1.*t641*t39670;
  t40153 = t40148 + t40151;
  p_output1[0]=-0.28121*(1. - 1.*t29605)*t39670 - 0.50321*(1. - 1.*t39744)*t40136 - 0.50321*t40142*t40153 - 0.23321*(t39744*t40136 - 1.*t40142*t40153) + 0.28121*t425*t427*t641 + 0.15121*(-1.*t1022*t1573 + t2093*t980) + t1573*(t1097 - 0.15121*t993) + t2093*(t1097 + 0.15121*t993) + var1[2];
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

#include "u_rearSwingFootHeight3_DiagonalStance2.hh"

namespace SymFunction
{

void u_rearSwingFootHeight3_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
