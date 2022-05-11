/*
 * Automatically Generated from Mathematica.
 * Fri 4 Feb 2022 15:51:59 GMT+01:00
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
  double t85;
  double t274;
  double t391;
  double t421;
  double t444;
  double t496;
  double t139;
  double t621;
  double t435;
  double t532;
  double t574;
  double t578;
  double t1363;
  double t1333;
  double t1353;
  double t1362;
  double t1365;
  double t1458;
  double t1495;
  double t1496;
  double t1671;
  double t1792;
  double t1793;
  double t1794;
  double t1796;
  double t1797;
  double t2026;
  t85 = Cos(var1[4]);
  t274 = Cos(var1[12]);
  t391 = -1.*t274;
  t421 = 1. + t391;
  t444 = Sin(var1[12]);
  t496 = 0.15121*t444;
  t139 = Cos(var1[5]);
  t621 = Sin(var1[5]);
  t435 = -0.15121*t421;
  t532 = t435 + t496;
  t574 = 0.15121*t421;
  t578 = t574 + t496;
  t1363 = Cos(var1[3]);
  t1333 = Sin(var1[3]);
  t1353 = Sin(var1[4]);
  t1362 = t139*t1333*t1353;
  t1365 = t1363*t621;
  t1458 = t1362 + t1365;
  t1495 = t1363*t139;
  t1496 = -1.*t1333*t1353*t621;
  t1671 = t1495 + t1496;
  t1792 = -1.*t1363*t139*t1353;
  t1793 = t1333*t621;
  t1794 = t1792 + t1793;
  t1796 = t139*t1333;
  t1797 = t1363*t1353*t621;
  t2026 = t1796 + t1797;
  p_output1[0]=t139*t532*t85 - 1.*t578*t621*t85 + 0.15121*(-1.*t139*t444*t85 - 1.*t274*t621*t85) - 0.15121*(t139*t274*t85 - 1.*t444*t621*t85) + var1[0];
  p_output1[1]=0.15121*(t1671*t274 - 1.*t1458*t444) - 0.15121*(t1458*t274 + t1671*t444) + t1458*t532 + t1671*t578 + var1[1];
  p_output1[2]=0.15121*(t2026*t274 - 1.*t1794*t444) - 0.15121*(t1794*t274 + t2026*t444) + t1794*t532 + t2026*t578 + var1[2];
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
