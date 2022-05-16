/*
 * Automatically Generated from Mathematica.
 * Fri 13 May 2022 14:24:51 GMT+02:00
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
  double t26;
  double t71;
  double t138;
  double t151;
  double t155;
  double t185;
  double t28;
  double t750;
  double t200;
  double t577;
  double t707;
  double t728;
  double t918;
  double t906;
  double t908;
  double t912;
  double t960;
  double t968;
  double t989;
  double t993;
  double t994;
  double t1161;
  double t1183;
  double t1252;
  double t1418;
  double t1424;
  double t1435;
  t26 = Cos(var1[4]);
  t71 = Cos(var1[15]);
  t138 = -1.*t71;
  t151 = 1. + t138;
  t155 = -0.15121*t151;
  t185 = Sin(var1[15]);
  t28 = Cos(var1[5]);
  t750 = Sin(var1[5]);
  t200 = -0.15121*t185;
  t577 = t155 + t200;
  t707 = 0.15121*t185;
  t728 = t155 + t707;
  t918 = Cos(var1[3]);
  t906 = Sin(var1[3]);
  t908 = Sin(var1[4]);
  t912 = t28*t906*t908;
  t960 = t918*t750;
  t968 = t912 + t960;
  t989 = t918*t28;
  t993 = -1.*t906*t908*t750;
  t994 = t989 + t993;
  t1161 = -1.*t918*t28*t908;
  t1183 = t906*t750;
  t1252 = t1161 + t1183;
  t1418 = t28*t906;
  t1424 = t918*t908*t750;
  t1435 = t1418 + t1424;
  p_output1[0]=t26*t28*t577 - 1.*t26*t728*t750 - 0.15121*(t26*t28*t71 - 1.*t185*t26*t750) - 0.15121*(-1.*t185*t26*t28 - 1.*t26*t71*t750) + var1[0];
  p_output1[1]=t577*t968 + t728*t994 - 0.15121*(t71*t968 + t185*t994) - 0.15121*(-1.*t185*t968 + t71*t994) + var1[1];
  p_output1[2]=t1252*t577 - 0.15121*(t1435*t185 + t1252*t71) - 0.15121*(-1.*t1252*t185 + t1435*t71) + t1435*t728 + var1[2];
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

#include "Joint_11_sphere_center.hh"

namespace SymFunction
{

void Joint_11_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
