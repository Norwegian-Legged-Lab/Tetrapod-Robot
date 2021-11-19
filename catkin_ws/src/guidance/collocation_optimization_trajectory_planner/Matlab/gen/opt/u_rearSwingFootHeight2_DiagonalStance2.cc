/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:31:21 GMT+01:00
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
  double t246;
  double t276;
  double t283;
  double t327;
  double t121;
  double t379;
  double t386;
  double t400;
  double t418;
  double t429;
  double t433;
  double t470;
  double t438;
  double t487;
  double t317;
  double t439;
  double t495;
  double t521;
  double t577;
  double t597;
  double t604;
  double t359;
  double t644;
  double t714;
  double t724;
  double t727;
  double t737;
  double t143;
  double t672;
  double t677;
  double t655;
  double t656;
  double t657;
  double t692;
  double t695;
  double t699;
  double t753;
  double t625;
  double t835;
  double t648;
  double t870;
  double t735;
  double t910;
  double t912;
  double t341;
  double t786;
  double t798;
  double t822;
  double t836;
  double t837;
  double t845;
  double t848;
  double t855;
  double t857;
  double t945;
  double t913;
  double t915;
  double t916;
  double t917;
  double t918;
  double t919;
  double t921;
  double t923;
  double t966;
  double t970;
  double t971;
  double t975;
  double t978;
  double t987;
  double t1009;
  double t1022;
  double t758;
  double t1043;
  double t743;
  double t1228;
  double t894;
  double t1074;
  double t1081;
  double t880;
  t246 = Cos(var1[13]);
  t276 = -1.*t246;
  t283 = 1. + t276;
  t327 = Sin(var1[13]);
  t121 = Cos(var1[3]);
  t379 = Cos(var1[12]);
  t386 = -1.*t379;
  t400 = 1. + t386;
  t418 = Sin(var1[12]);
  t429 = 0.15121*t418;
  t433 = Cos(var1[5]);
  t470 = Sin(var1[3]);
  t438 = Sin(var1[4]);
  t487 = Sin(var1[5]);
  t317 = 4.e-6*t283;
  t439 = -1.*t121*t433*t438;
  t495 = t470*t487;
  t521 = t439 + t495;
  t577 = t433*t470;
  t597 = t121*t438*t487;
  t604 = t577 + t597;
  t359 = -2.8e-11*t283;
  t644 = 7.e-6*t283;
  t714 = Cos(var1[14]);
  t724 = -1.*t714;
  t727 = 1. + t724;
  t737 = Sin(var1[14]);
  t143 = Cos(var1[4]);
  t672 = -1.*t327;
  t677 = -4.e-6*t327;
  t655 = -1.*t418*t521;
  t656 = t379*t604;
  t657 = t655 + t656;
  t692 = t379*t521;
  t695 = t418*t604;
  t699 = t692 + t695;
  t753 = 7.e-6*t727;
  t625 = -7.e-6*t327;
  t835 = -7.e-6*t283;
  t648 = 4.e-6*t327;
  t870 = 4.e-6*t727;
  t735 = -2.8e-11*t727;
  t910 = -1. + t246;
  t912 = 4.e-6*t910;
  t341 = 7.e-6*t327;
  t786 = 2.8e-11*t283;
  t798 = t786 + t672;
  t822 = t121*t143*t798;
  t836 = t835 + t677;
  t837 = t836*t657;
  t845 = -1.000000000016*t283;
  t848 = 1. + t845;
  t855 = t848*t699;
  t857 = t822 + t837 + t855;
  t945 = 7.e-6*t737;
  t913 = t912 + t625;
  t915 = t121*t143*t913;
  t916 = -6.5e-11*t283;
  t917 = 1. + t916;
  t918 = t917*t657;
  t919 = t835 + t648;
  t921 = t919*t699;
  t923 = t915 + t918 + t921;
  t966 = -1.000000000049*t283;
  t970 = 1. + t966;
  t971 = t970*t121*t143;
  t975 = t912 + t341;
  t978 = t975*t657;
  t987 = t786 + t327;
  t1009 = t987*t699;
  t1022 = t971 + t978 + t1009;
  t758 = -4.e-6*t737;
  t1043 = 2.8e-11*t727;
  t743 = -1.*t737;
  t1228 = -7.e-6*t727;
  t894 = 4.e-6*t737;
  t1074 = -1. + t714;
  t1081 = 4.e-6*t1074;
  t880 = -7.e-6*t737;
  p_output1[0]=(-0.15121*t400 + t429)*t521 + (0.15121*t400 + t429)*t604 + 0.148705*(t1022*(t1081 + t880) + t857*(t1228 + t894) + (1. - 6.5e-11*t727)*t923) - 0.80315*(t1022*(t1043 + t743) + (1. - 1.000000000016*t727)*t857 + (t1228 + t758)*t923) - 0.038924*(t1022*(1. - 1.000000000049*t727) + (t1043 + t737)*t857 + t923*(t1081 + t945)) + var1[2] + t657*(-1.38024835e-16*t283 - 0.038748999993*(t317 + t625) - 0.281209000004*(t644 + t648) - 1.4640699999999997e-7*var1[13]) + t121*t143*(-0.0387489999948987*t283 - 2.123459e-6*(t317 + t341) - 0.281209000004*(t327 + t359) + 5.856279999999999e-13*var1[13]) + t699*(-0.28120900000849935*t283 - 0.038748999993*(t359 + t672) - 2.123459e-6*(t644 + t677) + 1.0248489999999998e-12*var1[13]) + t923*(-2.3905277499999995e-16*t727 - 0.038922999986*(t870 + t880) - 0.503149000008*(t753 + t894) - 2.598649999999999e-7*var1[14]) + t1022*(-0.03892299998790722*t727 - 0.503149000008*(t735 + t737) - 3.6777349999999994e-6*(t870 + t945) + 1.0394599999999997e-12*var1[14]) + t857*(-0.5031490000160505*t727 - 0.038922999986*(t735 + t743) - 3.6777349999999994e-6*(t753 + t758) + 1.8190549999999993e-12*var1[14]);
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

#include "u_rearSwingFootHeight2_DiagonalStance2.hh"

namespace DiagonalStance2
{

void u_rearSwingFootHeight2_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
