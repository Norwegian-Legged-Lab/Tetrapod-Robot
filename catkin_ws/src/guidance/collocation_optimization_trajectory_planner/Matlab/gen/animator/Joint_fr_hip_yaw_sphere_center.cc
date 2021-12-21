/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 23:16:58 GMT+01:00
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
  double t59;
  double t227;
  double t241;
  double t256;
  double t471;
  double t565;
  double t130;
  double t665;
  double t333;
  double t574;
  double t617;
  double t643;
  double t993;
  double t972;
  double t975;
  double t978;
  double t1004;
  double t1033;
  double t1098;
  double t1103;
  double t1119;
  double t1436;
  double t1523;
  double t1535;
  double t1594;
  double t1596;
  double t1606;
  t59 = Cos(var1[4]);
  t227 = Cos(var1[9]);
  t241 = -1.*t227;
  t256 = 1. + t241;
  t471 = Sin(var1[9]);
  t565 = -0.15121*t471;
  t130 = Cos(var1[5]);
  t665 = Sin(var1[5]);
  t333 = 0.15121*t256;
  t574 = t333 + t565;
  t617 = -0.15121*t256;
  t643 = t617 + t565;
  t993 = Cos(var1[3]);
  t972 = Sin(var1[3]);
  t975 = Sin(var1[4]);
  t978 = t130*t972*t975;
  t1004 = t993*t665;
  t1033 = t978 + t1004;
  t1098 = t993*t130;
  t1103 = -1.*t972*t975*t665;
  t1119 = t1098 + t1103;
  t1436 = -1.*t993*t130*t975;
  t1523 = t972*t665;
  t1535 = t1436 + t1523;
  t1594 = t130*t972;
  t1596 = t993*t975*t665;
  t1606 = t1594 + t1596;
  p_output1[0]=t130*t574*t59 - 1.*t59*t643*t665 - 0.15121*(-1.*t130*t471*t59 - 1.*t227*t59*t665) + 0.15121*(t130*t227*t59 - 1.*t471*t59*t665) + var1[0];
  p_output1[1]=-0.15121*(t1119*t227 - 1.*t1033*t471) + 0.15121*(t1033*t227 + t1119*t471) + t1033*t574 + t1119*t643 + var1[1];
  p_output1[2]=-0.15121*(t1606*t227 - 1.*t1535*t471) + 0.15121*(t1535*t227 + t1606*t471) + t1535*t574 + t1606*t643 + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Joint_fr_hip_yaw_sphere_center.hh"

namespace SymFunction
{

void Joint_fr_hip_yaw_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
