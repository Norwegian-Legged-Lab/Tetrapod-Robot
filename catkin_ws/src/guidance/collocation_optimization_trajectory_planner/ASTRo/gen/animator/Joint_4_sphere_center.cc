/*
 * Automatically Generated from Mathematica.
 * Fri 13 May 2022 14:24:47 GMT+02:00
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
  double t98;
  double t377;
  double t416;
  double t429;
  double t540;
  double t739;
  double t369;
  double t938;
  double t893;
  double t898;
  double t1072;
  double t1273;
  double t1286;
  double t1306;
  double t485;
  double t884;
  double t1498;
  double t933;
  double t937;
  double t1519;
  double t1509;
  double t1527;
  double t1531;
  double t1543;
  double t1547;
  double t1551;
  double t1204;
  double t1263;
  double t1568;
  double t1570;
  double t1573;
  double t1614;
  double t1618;
  double t1622;
  double t1636;
  double t1640;
  double t1648;
  double t1709;
  double t1710;
  double t1711;
  t98 = Cos(var1[4]);
  t377 = Cos(var1[12]);
  t416 = -1.*t377;
  t429 = 1. + t416;
  t540 = Sin(var1[12]);
  t739 = -0.15121*t540;
  t369 = Cos(var1[5]);
  t938 = Sin(var1[5]);
  t893 = Sin(var1[13]);
  t898 = Sin(var1[4]);
  t1072 = Cos(var1[13]);
  t1273 = t377*t98*t369;
  t1286 = -1.*t98*t540*t938;
  t1306 = t1273 + t1286;
  t485 = 0.15121*t429;
  t884 = t485 + t739;
  t1498 = Sin(var1[3]);
  t933 = -0.15121*t429;
  t937 = t933 + t739;
  t1519 = Cos(var1[3]);
  t1509 = t369*t1498*t898;
  t1527 = t1519*t938;
  t1531 = t1509 + t1527;
  t1543 = t1519*t369;
  t1547 = -1.*t1498*t898*t938;
  t1551 = t1543 + t1547;
  t1204 = -1.*t1072;
  t1263 = 1. + t1204;
  t1568 = t377*t1531;
  t1570 = t540*t1551;
  t1573 = t1568 + t1570;
  t1614 = -1.*t1519*t369*t898;
  t1618 = t1498*t938;
  t1622 = t1614 + t1618;
  t1636 = t369*t1498;
  t1640 = t1519*t898*t938;
  t1648 = t1636 + t1640;
  t1709 = t377*t1622;
  t1710 = t540*t1648;
  t1711 = t1709 + t1710;
  p_output1[0]=0.28121*t1263*t1306 + 0.28121*t893*t898 + 0.28121*(t1072*t1306 - 1.*t893*t898) + t369*t884*t98 - 1.*t937*t938*t98 - 0.18121*(-1.*t369*t540*t98 - 1.*t377*t938*t98) + var1[0];
  p_output1[1]=0.28121*t1263*t1573 - 0.18121*(t1551*t377 - 1.*t1531*t540) + t1531*t884 + t1551*t937 - 0.28121*t1498*t893*t98 + 0.28121*(t1072*t1573 + t1498*t893*t98) + var1[1];
  p_output1[2]=0.28121*t1263*t1711 - 0.18121*(t1648*t377 - 1.*t1622*t540) + t1622*t884 + t1648*t937 + 0.28121*t1519*t893*t98 + 0.28121*(t1072*t1711 - 1.*t1519*t893*t98) + var1[2];
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

#include "Joint_4_sphere_center.hh"

namespace SymFunction
{

void Joint_4_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
