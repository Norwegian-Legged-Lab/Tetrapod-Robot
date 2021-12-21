/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 20:16:43 GMT+01:00
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
  double t228;
  double t94;
  double t285;
  double t104;
  double t309;
  double t360;
  double t393;
  double t420;
  double t445;
  double t482;
  double t226;
  double t313;
  double t358;
  double t531;
  double t538;
  double t569;
  double t625;
  double t629;
  double t633;
  double t640;
  double t781;
  double t883;
  double t604;
  double t616;
  double t620;
  double t650;
  double t652;
  double t658;
  double t995;
  double t996;
  double t998;
  double t1036;
  double t897;
  double t898;
  double t910;
  double t917;
  double t937;
  double t946;
  double t1241;
  double t1196;
  double t1199;
  double t1208;
  double t1213;
  double t1131;
  double t1144;
  double t1155;
  double t1159;
  double t1181;
  double t1183;
  t228 = Cos(var1[3]);
  t94 = Cos(var1[5]);
  t285 = Sin(var1[4]);
  t104 = Sin(var1[3]);
  t309 = Sin(var1[5]);
  t360 = Cos(var1[6]);
  t393 = -1.*t360;
  t420 = 1. + t393;
  t445 = 0.15121*t420;
  t482 = Sin(var1[6]);
  t226 = t94*t104;
  t313 = t228*t285*t309;
  t358 = t226 + t313;
  t531 = -1.*t228*t94*t285;
  t538 = t104*t309;
  t569 = t531 + t538;
  t625 = Cos(var1[7]);
  t629 = -1.*t625;
  t633 = 1. + t629;
  t640 = Sin(var1[7]);
  t781 = Cos(var1[4]);
  t883 = -1. + t625;
  t604 = t360*t358;
  t616 = -1.*t569*t482;
  t620 = t604 + t616;
  t650 = t360*t569;
  t652 = t358*t482;
  t658 = t650 + t652;
  t995 = Cos(var1[8]);
  t996 = -1.*t995;
  t998 = 1. + t996;
  t1036 = Sin(var1[8]);
  t897 = 4.e-6*t228*t781*t883;
  t898 = 1.6e-11*t883;
  t910 = 1. + t898;
  t917 = t910*t620;
  t937 = 4.e-6*t658*t640;
  t946 = t897 + t917 + t937;
  t1241 = -1. + t995;
  t1196 = t228*t781*t625;
  t1199 = 4.e-6*t883*t620;
  t1208 = t658*t640;
  t1213 = t1196 + t1199 + t1208;
  t1131 = -1.000000000016*t633;
  t1144 = 1. + t1131;
  t1155 = t1144*t658;
  t1159 = -1.*t228*t781*t640;
  t1181 = -4.e-6*t620*t640;
  t1183 = t1155 + t1159 + t1181;
  p_output1[0]=t358*(t445 - 0.15121*t482) + (t445 + 0.15121*t482)*t569 + (0.281210000008499*t633 + 0.03874900000062*t640)*t658 + 0.14871*(4.e-6*t1036*t1183 + 4.e-6*t1213*t1241 + (1. + 1.6e-11*t1241)*t946) - 0.03875*(t1036*t1183 + 4.e-6*t1241*t946 + t1213*t995) + 0.80321*(-1.*t1036*t1213 - 4.e-6*t1036*t946 + t1183*(1. - 1.000000000016*t998)) + t1183*(0.03874900000062*t1036 + 0.503210000016051*t998) + var1[2] + t620*(-1.5499600000248e-7*t633 + 1.124840000016e-6*t640 - 1.2484e-7*var1[7]) + t228*t781*(-0.03874900000062*t633 + 0.281210000004*t640 + 4.9936e-13*var1[7]) + t946*(2.012840000032e-6*t1036 - 1.5499600000248e-7*t998 - 1.284e-8*var1[8]) + t1213*(0.503210000008*t1036 - 0.03874900000062*t998 + 5.136e-14*var1[8]);
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

#include "foot_clearance_FlFoot.hh"

namespace TrotStance1
{

void foot_clearance_FlFoot_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
