/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 12:55:29 GMT+01:00
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
  double t161;
  double t18;
  double t446;
  double t451;
  double t470;
  double t498;
  double t504;
  double t522;
  double t539;
  double t528;
  double t542;
  double t209;
  double t300;
  double t402;
  double t426;
  double t536;
  double t548;
  double t551;
  double t581;
  double t589;
  double t594;
  double t61;
  double t656;
  double t657;
  double t660;
  double t677;
  double t680;
  double t683;
  double t689;
  double t690;
  double t692;
  double t767;
  double t987;
  double t844;
  double t866;
  double t867;
  double t869;
  double t878;
  double t894;
  double t1036;
  double t1039;
  double t1059;
  double t1067;
  double t1134;
  double t1136;
  double t1139;
  double t1142;
  double t1146;
  double t1152;
  t161 = Cos(var1[10]);
  t18 = Cos(var1[3]);
  t446 = Cos(var1[9]);
  t451 = -1.*t446;
  t470 = 1. + t451;
  t498 = Sin(var1[9]);
  t504 = -0.15121*t498;
  t522 = Cos(var1[5]);
  t539 = Sin(var1[3]);
  t528 = Sin(var1[4]);
  t542 = Sin(var1[5]);
  t209 = -1.*t161;
  t300 = 1. + t209;
  t402 = -1. + t161;
  t426 = Sin(var1[10]);
  t536 = -1.*t18*t522*t528;
  t548 = t539*t542;
  t551 = t536 + t548;
  t581 = t522*t539;
  t589 = t18*t528*t542;
  t594 = t581 + t589;
  t61 = Cos(var1[4]);
  t656 = -1.*t498*t551;
  t657 = t446*t594;
  t660 = t656 + t657;
  t677 = t446*t551;
  t680 = t498*t594;
  t683 = t677 + t680;
  t689 = Cos(var1[11]);
  t690 = -1.*t689;
  t692 = 1. + t690;
  t767 = Sin(var1[11]);
  t987 = -1. + t689;
  t844 = t18*t61*t426;
  t866 = -4.e-6*t426*t660;
  t867 = -1.000000000016*t300;
  t869 = 1. + t867;
  t878 = t869*t683;
  t894 = t844 + t866 + t878;
  t1036 = t161*t18*t61;
  t1039 = 4.e-6*t300*t660;
  t1059 = -1.*t426*t683;
  t1067 = t1036 + t1039 + t1059;
  t1134 = 4.e-6*t300*t18*t61;
  t1136 = 1.6e-11*t402;
  t1139 = 1. + t1136;
  t1142 = t1139*t660;
  t1146 = 4.e-6*t426*t683;
  t1152 = t1134 + t1142 + t1146;
  p_output1[0]=(0.15121*t470 + t504)*t551 + (-0.15121*t470 + t504)*t594 + (0.281210000008499*t300 - 0.03874900000062*t426)*t683 + (0.50315000001605*t692 - 0.0398890000006382*t767)*t894 + 0.803147*(t1067*t767 - 4.e-6*t1152*t767 + (1. - 1.000000000016*t692)*t894) - 0.041195*(t1067*t689 + 4.e-6*t1152*t692 - 1.*t767*t894) - 0.14871*(4.e-6*t1067*t692 + 4.e-6*t767*t894 + t1152*(1. + 1.6e-11*t987)) + var1[2] + t660*(2.479936e-18*t300 - 1.54996e-7*t402 + 1.124840000016e-6*t426 - 1.2484e-7*var1[10]) + t18*t61*(-0.038749*t300 + 6.19984e-13*t402 - 0.281210000004*t426 - 4.9936e-13*var1[10]) + t1152*(2.552896e-18*t692 + 2.012600000032e-6*t767 - 1.59556e-7*t987 - 1.26e-8*var1[11]) + t1067*(-0.039889*t692 - 0.503150000008*t767 + 6.38224e-13*t987 - 5.04e-14*var1[11]);
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

#include "foot_clearance_FrFootDiagonalStance2.hh"

namespace TrotStance2
{

void foot_clearance_FrFootDiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
