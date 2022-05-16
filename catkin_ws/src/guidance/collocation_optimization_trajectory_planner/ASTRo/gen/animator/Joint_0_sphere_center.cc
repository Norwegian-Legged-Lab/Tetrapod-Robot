/*
 * Automatically Generated from Mathematica.
 * Fri 13 May 2022 14:42:58 GMT+02:00
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
  double t73;
  double t214;
  double t236;
  double t287;
  double t301;
  double t361;
  double t198;
  double t400;
  double t479;
  double t525;
  double t563;
  double t576;
  double t698;
  double t813;
  double t368;
  double t371;
  double t1120;
  double t1035;
  double t412;
  double t424;
  double t1065;
  double t1194;
  double t1233;
  double t1290;
  double t1448;
  double t1450;
  double t507;
  double t522;
  double t1788;
  double t1801;
  double t1864;
  double t1994;
  double t1996;
  double t2000;
  double t2007;
  double t2008;
  double t2012;
  double t2036;
  double t2043;
  double t2044;
  t73 = Cos(var1[4]);
  t214 = Cos(var1[6]);
  t236 = -1.*t214;
  t287 = 1. + t236;
  t301 = 0.15121*t287;
  t361 = Sin(var1[6]);
  t198 = Sin(var1[5]);
  t400 = Cos(var1[5]);
  t479 = Cos(var1[7]);
  t525 = t73*t400*t214;
  t563 = -1.*t73*t198*t361;
  t576 = t525 + t563;
  t698 = Sin(var1[4]);
  t813 = Sin(var1[7]);
  t368 = -0.15121*t361;
  t371 = t301 + t368;
  t1120 = Sin(var1[3]);
  t1035 = Cos(var1[3]);
  t412 = 0.15121*t361;
  t424 = t301 + t412;
  t1065 = t1035*t400;
  t1194 = -1.*t1120*t698*t198;
  t1233 = t1065 + t1194;
  t1290 = t400*t1120*t698;
  t1448 = t1035*t198;
  t1450 = t1290 + t1448;
  t507 = -1.*t479;
  t522 = 1. + t507;
  t1788 = t214*t1450;
  t1801 = t1233*t361;
  t1864 = t1788 + t1801;
  t1994 = t400*t1120;
  t1996 = t1035*t698*t198;
  t2000 = t1994 + t1996;
  t2007 = -1.*t1035*t400*t698;
  t2008 = t1120*t198;
  t2012 = t2007 + t2008;
  t2036 = t214*t2012;
  t2043 = t2000*t361;
  t2044 = t2036 + t2043;
  p_output1[0]=0.28121*t522*t576 - 1.*t198*t371*t73 + t400*t424*t73 + 0.18121*(-1.*t198*t214*t73 - 1.*t361*t400*t73) + 0.28121*t698*t813 + 0.28121*(t479*t576 - 1.*t698*t813) + var1[0];
  p_output1[1]=0.18121*(t1233*t214 - 1.*t1450*t361) + t1233*t371 + t1450*t424 + 0.28121*t1864*t522 - 0.28121*t1120*t73*t813 + 0.28121*(t1864*t479 + t1120*t73*t813) + var1[1];
  p_output1[2]=0.18121*(t2000*t214 - 1.*t2012*t361) + t2000*t371 + t2012*t424 + 0.28121*t2044*t522 + 0.28121*t1035*t73*t813 + 0.28121*(t2044*t479 - 1.*t1035*t73*t813) + var1[2];
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

#include "Joint_0_sphere_center.hh"

namespace SymFunction
{

void Joint_0_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
