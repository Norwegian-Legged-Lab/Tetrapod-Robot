/*
 * Automatically Generated from Mathematica.
 * Fri 13 May 2022 14:24:54 GMT+02:00
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
  double t6;
  double t8;
  double t9;
  double t13;
  double t16;
  double t17;
  double t7;
  double t62;
  double t54;
  double t57;
  double t97;
  double t113;
  double t234;
  double t262;
  double t23;
  double t25;
  double t513;
  double t60;
  double t61;
  double t666;
  double t607;
  double t751;
  double t782;
  double t868;
  double t872;
  double t897;
  double t105;
  double t109;
  double t1209;
  double t1241;
  double t1270;
  double t1542;
  double t1586;
  double t1638;
  double t1674;
  double t1679;
  double t1681;
  double t1734;
  double t1738;
  double t1741;
  t6 = Cos(var1[4]);
  t8 = Cos(var1[15]);
  t9 = -1.*t8;
  t13 = 1. + t9;
  t16 = -0.15121*t13;
  t17 = Sin(var1[15]);
  t7 = Cos(var1[5]);
  t62 = Sin(var1[5]);
  t54 = Sin(var1[16]);
  t57 = Sin(var1[4]);
  t97 = Cos(var1[16]);
  t113 = t8*t6*t7;
  t234 = -1.*t6*t17*t62;
  t262 = t113 + t234;
  t23 = -0.15121*t17;
  t25 = t16 + t23;
  t513 = Sin(var1[3]);
  t60 = 0.15121*t17;
  t61 = t16 + t60;
  t666 = Cos(var1[3]);
  t607 = t7*t513*t57;
  t751 = t666*t62;
  t782 = t607 + t751;
  t868 = t666*t7;
  t872 = -1.*t513*t57*t62;
  t897 = t868 + t872;
  t105 = -1.*t97;
  t109 = 1. + t105;
  t1209 = t8*t782;
  t1241 = t17*t897;
  t1270 = t1209 + t1241;
  t1542 = -1.*t666*t7*t57;
  t1586 = t513*t62;
  t1638 = t1542 + t1586;
  t1674 = t7*t513;
  t1679 = t666*t57*t62;
  t1681 = t1674 + t1679;
  t1734 = t8*t1638;
  t1738 = t17*t1681;
  t1741 = t1734 + t1738;
  p_output1[0]=-0.28121*t109*t262 + 0.28121*t54*t57 - 1.*t6*t61*t62 + t25*t6*t7 - 0.18121*(-1.*t17*t6*t7 - 1.*t6*t62*t8) - 0.28121*(t54*t57 + t262*t97) + var1[0];
  p_output1[1]=-0.28121*t109*t1270 - 0.28121*t513*t54*t6 + t25*t782 + t61*t897 - 0.18121*(-1.*t17*t782 + t8*t897) - 0.28121*(-1.*t513*t54*t6 + t1270*t97) + var1[1];
  p_output1[2]=-0.28121*t109*t1741 + t1638*t25 + t1681*t61 + 0.28121*t54*t6*t666 - 0.18121*(-1.*t1638*t17 + t1681*t8) - 0.28121*(t54*t6*t666 + t1741*t97) + var1[2];
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

#include "Joint_6_sphere_center.hh"

namespace SymFunction
{

void Joint_6_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
