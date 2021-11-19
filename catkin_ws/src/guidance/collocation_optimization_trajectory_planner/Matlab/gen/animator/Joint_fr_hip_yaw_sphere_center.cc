/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 18:01:26 GMT+01:00
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
  double t46;
  double t160;
  double t184;
  double t215;
  double t273;
  double t316;
  double t90;
  double t682;
  double t231;
  double t387;
  double t524;
  double t624;
  double t1291;
  double t1242;
  double t1259;
  double t1278;
  double t1298;
  double t1349;
  double t1451;
  double t1512;
  double t1521;
  double t1723;
  double t1734;
  double t1757;
  double t1794;
  double t1799;
  double t1801;
  t46 = Cos(var1[4]);
  t160 = Cos(var1[9]);
  t184 = -1.*t160;
  t215 = 1. + t184;
  t273 = Sin(var1[9]);
  t316 = -0.15121*t273;
  t90 = Cos(var1[5]);
  t682 = Sin(var1[5]);
  t231 = 0.15121*t215;
  t387 = t231 + t316;
  t524 = -0.15121*t215;
  t624 = t524 + t316;
  t1291 = Cos(var1[3]);
  t1242 = Sin(var1[3]);
  t1259 = Sin(var1[4]);
  t1278 = t90*t1242*t1259;
  t1298 = t1291*t682;
  t1349 = t1278 + t1298;
  t1451 = t1291*t90;
  t1512 = -1.*t1242*t1259*t682;
  t1521 = t1451 + t1512;
  t1723 = -1.*t1291*t90*t1259;
  t1734 = t1242*t682;
  t1757 = t1723 + t1734;
  t1794 = t90*t1242;
  t1799 = t1291*t1259*t682;
  t1801 = t1794 + t1799;
  p_output1[0]=-1.*t46*t624*t682 + t387*t46*t90 + 0.15121*(-1.*t273*t46*t682 + t160*t46*t90) - 0.15121*(-1.*t160*t46*t682 - 1.*t273*t46*t90) + var1[0];
  p_output1[1]=-0.15121*(t1521*t160 - 1.*t1349*t273) + 0.15121*(t1349*t160 + t1521*t273) + t1349*t387 + t1521*t624 + var1[1];
  p_output1[2]=-0.15121*(t160*t1801 - 1.*t1757*t273) + 0.15121*(t160*t1757 + t1801*t273) + t1757*t387 + t1801*t624 + var1[2];
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
