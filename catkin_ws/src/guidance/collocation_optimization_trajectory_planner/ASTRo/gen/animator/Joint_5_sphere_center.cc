/*
 * Automatically Generated from Mathematica.
 * Fri 13 May 2022 14:24:49 GMT+02:00
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
  double t82;
  double t192;
  double t318;
  double t402;
  double t498;
  double t515;
  double t179;
  double t716;
  double t586;
  double t645;
  double t733;
  double t741;
  double t743;
  double t746;
  double t756;
  double t762;
  double t763;
  double t765;
  double t770;
  double t773;
  double t774;
  double t778;
  double t440;
  double t528;
  double t805;
  double t662;
  double t704;
  double t816;
  double t815;
  double t818;
  double t820;
  double t826;
  double t827;
  double t840;
  double t735;
  double t738;
  double t758;
  double t759;
  double t861;
  double t862;
  double t870;
  double t877;
  double t878;
  double t889;
  double t892;
  double t894;
  double t896;
  double t913;
  double t916;
  double t917;
  double t940;
  double t1076;
  double t1081;
  double t1652;
  double t1721;
  double t1742;
  double t1761;
  double t1764;
  double t1945;
  double t1955;
  double t1965;
  double t1970;
  t82 = Cos(var1[4]);
  t192 = Cos(var1[12]);
  t318 = -1.*t192;
  t402 = 1. + t318;
  t498 = Sin(var1[12]);
  t515 = -0.15121*t498;
  t179 = Cos(var1[5]);
  t716 = Sin(var1[5]);
  t586 = Sin(var1[13]);
  t645 = Sin(var1[4]);
  t733 = Cos(var1[13]);
  t741 = t192*t82*t179;
  t743 = -1.*t82*t498*t716;
  t746 = t741 + t743;
  t756 = Cos(var1[14]);
  t762 = -1.*t586*t645;
  t763 = t733*t746;
  t765 = t762 + t763;
  t770 = Sin(var1[14]);
  t773 = t733*t645;
  t774 = t586*t746;
  t778 = t773 + t774;
  t440 = 0.15121*t402;
  t528 = t440 + t515;
  t805 = Sin(var1[3]);
  t662 = -0.15121*t402;
  t704 = t662 + t515;
  t816 = Cos(var1[3]);
  t815 = t179*t805*t645;
  t818 = t816*t716;
  t820 = t815 + t818;
  t826 = t816*t179;
  t827 = -1.*t805*t645*t716;
  t840 = t826 + t827;
  t735 = -1.*t733;
  t738 = 1. + t735;
  t758 = -1.*t756;
  t759 = 1. + t758;
  t861 = t192*t820;
  t862 = t498*t840;
  t870 = t861 + t862;
  t877 = t82*t586*t805;
  t878 = t733*t870;
  t889 = t877 + t878;
  t892 = -1.*t733*t82*t805;
  t894 = t586*t870;
  t896 = t892 + t894;
  t913 = -1.*t816*t179*t645;
  t916 = t805*t716;
  t917 = t913 + t916;
  t940 = t179*t805;
  t1076 = t816*t645*t716;
  t1081 = t940 + t1076;
  t1652 = t192*t917;
  t1721 = t498*t1081;
  t1742 = t1652 + t1721;
  t1761 = -1.*t816*t82*t586;
  t1764 = t733*t1742;
  t1945 = t1761 + t1764;
  t1955 = t733*t816*t82;
  t1965 = t586*t1742;
  t1970 = t1955 + t1965;
  p_output1[0]=0.28121*t586*t645 + 0.28121*t738*t746 + 0.50321*t759*t765 - 0.50321*t770*t778 + 0.50321*(t756*t765 + t770*t778) + t179*t528*t82 - 1.*t704*t716*t82 - 0.15121*(-1.*t179*t498*t82 - 1.*t192*t716*t82) + var1[0];
  p_output1[1]=-0.28121*t586*t805*t82 + t528*t820 + t704*t840 - 0.15121*(-1.*t498*t820 + t192*t840) + 0.28121*t738*t870 + 0.50321*t759*t889 - 0.50321*t770*t896 + 0.50321*(t756*t889 + t770*t896) + var1[1];
  p_output1[2]=t1081*t704 + 0.28121*t1742*t738 + 0.50321*t1945*t759 - 0.50321*t1970*t770 + 0.50321*(t1945*t756 + t1970*t770) + 0.28121*t586*t816*t82 + t528*t917 - 0.15121*(t1081*t192 - 1.*t498*t917) + var1[2];
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

#include "Joint_5_sphere_center.hh"

namespace SymFunction
{

void Joint_5_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
