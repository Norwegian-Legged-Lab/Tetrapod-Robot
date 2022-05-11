/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:47:19 GMT+02:00
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
  double t2992;
  double t19113;
  double t19205;
  double t19114;
  double t19206;
  double t3061;
  double t18716;
  double t19984;
  double t20401;
  double t20402;
  double t20403;
  double t20605;
  double t19122;
  double t19328;
  double t19582;
  double t18946;
  double t20610;
  double t20621;
  double t20629;
  double t20632;
  double t20633;
  double t20775;
  double t20776;
  double t20923;
  double t20973;
  double t20976;
  double t20977;
  t2992 = Cos(var1[3]);
  t19113 = Cos(var1[5]);
  t19205 = Sin(var1[3]);
  t19114 = Sin(var1[4]);
  t19206 = Sin(var1[5]);
  t3061 = Cos(var1[4]);
  t18716 = Sin(var1[15]);
  t19984 = Cos(var1[15]);
  t20401 = t19113*t19205;
  t20402 = t2992*t19114*t19206;
  t20403 = t20401 + t20402;
  t20605 = Sin(var1[16]);
  t19122 = -1.*t2992*t19113*t19114;
  t19328 = t19205*t19206;
  t19582 = t19122 + t19328;
  t18946 = Cos(var1[16]);
  t20610 = t19984*t2992*t3061;
  t20621 = -1.*t18716*t20403;
  t20629 = t20610 + t20621;
  t20632 = Sin(var1[17]);
  t20633 = -1.*t20605*t19582;
  t20775 = t18946*t20629;
  t20776 = t20633 + t20775;
  t20923 = Cos(var1[17]);
  t20973 = t18946*t19582;
  t20976 = t20605*t20629;
  t20977 = t20973 + t20976;
  p_output1[0]=-0.325*(1. - 1.*t18946)*t19582 - 0.1575*(1. - 1.*t19984)*t20403 + 0.325*t20605*t20629 - 0.575*t20632*t20776 - 0.575*(1. - 1.*t20923)*t20977 - 0.0641*(t20776*t20923 + t20632*t20977) - 0.295*(-1.*t20632*t20776 + t20923*t20977) + 0.1575*t18716*t2992*t3061 - 0.2255*(t19984*t20403 + t18716*t2992*t3061) + var1[2];
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

#include "u_rearSwingFootHeight1_DiagonalStance.hh"

namespace DiagonalStance
{

void u_rearSwingFootHeight1_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
