/*
 * Automatically Generated from Mathematica.
 * Fri 4 Feb 2022 15:51:52 GMT+01:00
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
  double t153;
  double t457;
  double t458;
  double t506;
  double t683;
  double t838;
  double t213;
  double t1236;
  double t604;
  double t845;
  double t943;
  double t1215;
  double t3699;
  double t3512;
  double t3538;
  double t3607;
  double t3741;
  double t3851;
  double t3948;
  double t3973;
  double t3998;
  double t4600;
  double t4674;
  double t4684;
  double t4702;
  double t4745;
  double t4748;
  t153 = Cos(var1[4]);
  t457 = Cos(var1[9]);
  t458 = -1.*t457;
  t506 = 1. + t458;
  t683 = Sin(var1[9]);
  t838 = -0.15121*t683;
  t213 = Cos(var1[5]);
  t1236 = Sin(var1[5]);
  t604 = 0.15121*t506;
  t845 = t604 + t838;
  t943 = -0.15121*t506;
  t1215 = t943 + t838;
  t3699 = Cos(var1[3]);
  t3512 = Sin(var1[3]);
  t3538 = Sin(var1[4]);
  t3607 = t213*t3512*t3538;
  t3741 = t3699*t1236;
  t3851 = t3607 + t3741;
  t3948 = t3699*t213;
  t3973 = -1.*t3512*t3538*t1236;
  t3998 = t3948 + t3973;
  t4600 = -1.*t3699*t213*t3538;
  t4674 = t3512*t1236;
  t4684 = t4600 + t4674;
  t4702 = t213*t3512;
  t4745 = t3699*t3538*t1236;
  t4748 = t4702 + t4745;
  p_output1[0]=-1.*t1215*t1236*t153 + 0.15121*(t153*t213*t457 - 1.*t1236*t153*t683) - 0.15121*(-1.*t1236*t153*t457 - 1.*t153*t213*t683) + t153*t213*t845 + var1[0];
  p_output1[1]=t1215*t3998 - 0.15121*(t3998*t457 - 1.*t3851*t683) + 0.15121*(t3851*t457 + t3998*t683) + t3851*t845 + var1[1];
  p_output1[2]=t1215*t4748 - 0.15121*(t457*t4748 - 1.*t4684*t683) + 0.15121*(t457*t4684 + t4748*t683) + t4684*t845 + var1[2];
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
