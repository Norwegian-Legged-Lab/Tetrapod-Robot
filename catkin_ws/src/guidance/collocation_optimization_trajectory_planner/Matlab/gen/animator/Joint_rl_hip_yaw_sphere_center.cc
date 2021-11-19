/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 18:01:33 GMT+01:00
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
  double t13;
  double t40;
  double t43;
  double t44;
  double t70;
  double t79;
  double t33;
  double t230;
  double t51;
  double t134;
  double t179;
  double t190;
  double t518;
  double t487;
  double t492;
  double t494;
  double t546;
  double t557;
  double t599;
  double t607;
  double t609;
  double t855;
  double t997;
  double t1027;
  double t1048;
  double t1073;
  double t1075;
  t13 = Cos(var1[4]);
  t40 = Cos(var1[12]);
  t43 = -1.*t40;
  t44 = 1. + t43;
  t70 = Sin(var1[12]);
  t79 = 0.15121*t70;
  t33 = Cos(var1[5]);
  t230 = Sin(var1[5]);
  t51 = -0.15121*t44;
  t134 = t51 + t79;
  t179 = 0.15121*t44;
  t190 = t179 + t79;
  t518 = Cos(var1[3]);
  t487 = Sin(var1[3]);
  t492 = Sin(var1[4]);
  t494 = t33*t487*t492;
  t546 = t518*t230;
  t557 = t494 + t546;
  t599 = t518*t33;
  t607 = -1.*t487*t492*t230;
  t609 = t599 + t607;
  t855 = -1.*t518*t33*t492;
  t997 = t487*t230;
  t1027 = t855 + t997;
  t1048 = t33*t487;
  t1073 = t518*t492*t230;
  t1075 = t1048 + t1073;
  p_output1[0]=-1.*t13*t190*t230 + t13*t134*t33 - 0.15121*(t13*t33*t40 - 1.*t13*t230*t70) + 0.15121*(-1.*t13*t230*t40 - 1.*t13*t33*t70) + var1[0];
  p_output1[1]=t134*t557 + t190*t609 + 0.15121*(t40*t609 - 1.*t557*t70) - 0.15121*(t40*t557 + t609*t70) + var1[1];
  p_output1[2]=t1027*t134 + t1075*t190 + 0.15121*(t1075*t40 - 1.*t1027*t70) - 0.15121*(t1027*t40 + t1075*t70) + var1[2];
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

#include "Joint_rl_hip_yaw_sphere_center.hh"

namespace SymFunction
{

void Joint_rl_hip_yaw_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
