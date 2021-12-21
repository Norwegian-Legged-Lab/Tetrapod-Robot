/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 12:53:36 GMT+01:00
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
  double t255;
  double t22;
  double t267;
  double t175;
  double t278;
  double t335;
  double t363;
  double t381;
  double t388;
  double t415;
  double t208;
  double t296;
  double t330;
  double t503;
  double t507;
  double t512;
  double t603;
  double t610;
  double t616;
  double t618;
  double t739;
  double t864;
  double t582;
  double t584;
  double t585;
  double t643;
  double t644;
  double t645;
  double t979;
  double t1018;
  double t1052;
  double t1085;
  double t882;
  double t894;
  double t909;
  double t931;
  double t945;
  double t967;
  double t1188;
  double t1131;
  double t1137;
  double t1141;
  double t1143;
  double t1103;
  double t1110;
  double t1112;
  double t1113;
  double t1115;
  double t1120;
  t255 = Cos(var1[3]);
  t22 = Cos(var1[5]);
  t267 = Sin(var1[4]);
  t175 = Sin(var1[3]);
  t278 = Sin(var1[5]);
  t335 = Cos(var1[6]);
  t363 = -1.*t335;
  t381 = 1. + t363;
  t388 = 0.15121*t381;
  t415 = Sin(var1[6]);
  t208 = t22*t175;
  t296 = t255*t267*t278;
  t330 = t208 + t296;
  t503 = -1.*t255*t22*t267;
  t507 = t175*t278;
  t512 = t503 + t507;
  t603 = Cos(var1[7]);
  t610 = -1.*t603;
  t616 = 1. + t610;
  t618 = Sin(var1[7]);
  t739 = Cos(var1[4]);
  t864 = -1. + t603;
  t582 = t335*t330;
  t584 = -1.*t512*t415;
  t585 = t582 + t584;
  t643 = t335*t512;
  t644 = t330*t415;
  t645 = t643 + t644;
  t979 = Cos(var1[8]);
  t1018 = -1.*t979;
  t1052 = 1. + t1018;
  t1085 = Sin(var1[8]);
  t882 = 4.e-6*t255*t739*t864;
  t894 = 1.6e-11*t864;
  t909 = 1. + t894;
  t931 = t909*t585;
  t945 = 4.e-6*t645*t618;
  t967 = t882 + t931 + t945;
  t1188 = -1. + t979;
  t1131 = t255*t739*t603;
  t1137 = 4.e-6*t864*t585;
  t1141 = t645*t618;
  t1143 = t1131 + t1137 + t1141;
  t1103 = -1.000000000016*t616;
  t1110 = 1. + t1103;
  t1112 = t1110*t645;
  t1113 = -1.*t255*t739*t618;
  t1115 = -4.e-6*t585*t618;
  t1120 = t1112 + t1113 + t1115;
  p_output1[0]=(0.503210000016051*t1052 + 0.03874900000062*t1085)*t1120 + t330*(t388 - 0.15121*t415) + (t388 + 0.15121*t415)*t512 + (0.281210000008499*t616 + 0.03874900000062*t618)*t645 + 0.80321*((1. - 1.000000000016*t1052)*t1120 - 1.*t1085*t1143 - 4.e-6*t1085*t967) + 0.14871*(4.e-6*t1085*t1120 + 4.e-6*t1143*t1188 + (1. + 1.6e-11*t1188)*t967) - 0.03875*(t1085*t1120 + 4.e-6*t1188*t967 + t1143*t979) + var1[2] + t585*(-1.5499600000248e-7*t616 + 1.124840000016e-6*t618 - 1.2484e-7*var1[7]) + t255*t739*(-0.03874900000062*t616 + 0.281210000004*t618 + 4.9936e-13*var1[7]) + t967*(-1.5499600000248e-7*t1052 + 2.012840000032e-6*t1085 - 1.284e-8*var1[8]) + t1143*(-0.03874900000062*t1052 + 0.503210000008*t1085 + 5.136e-14*var1[8]);
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

#include "foot_clearance_FlFootTrotStance1.hh"

namespace TrotStance1
{

void foot_clearance_FlFootTrotStance1_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
