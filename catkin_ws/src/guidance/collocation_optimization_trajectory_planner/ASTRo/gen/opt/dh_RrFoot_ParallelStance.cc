/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:43:18 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t45852;
  double t45278;
  double t46364;
  double t46369;
  double t46558;
  double t46564;
  double t46568;
  double t46584;
  double t45880;
  double t46013;
  double t46133;
  double t46137;
  double t46146;
  double t46586;
  double t46587;
  double t46588;
  double t46580;
  double t46589;
  double t46590;
  double t46595;
  double t46596;
  double t46597;
  double t46616;
  double t46368;
  double t46370;
  double t46371;
  double t46803;
  double t46807;
  double t46802;
  double t46772;
  double t46784;
  double t46790;
  double t46792;
  double t46804;
  double t46808;
  double t46809;
  double t46844;
  double t46820;
  double t46831;
  double t46841;
  double t46816;
  double t46845;
  double t46846;
  double t46851;
  double t46647;
  double t46663;
  double t46672;
  double t46678;
  double t46636;
  double t46637;
  double t46911;
  double t46913;
  double t46914;
  double t46902;
  double t46906;
  double t46910;
  double t46918;
  double t46919;
  double t46922;
  double t46927;
  double t46929;
  double t46930;
  double t46951;
  double t46952;
  double t46953;
  double t46923;
  double t46924;
  double t46925;
  double t46926;
  double t46934;
  double t46938;
  double t46942;
  double t46947;
  double t46949;
  double t46964;
  double t46965;
  double t46967;
  double t46968;
  double t46969;
  double t46970;
  double t46975;
  double t46976;
  double t46977;
  double t47044;
  double t47039;
  double t46797;
  double t46810;
  double t46813;
  double t47246;
  double t46992;
  double t46996;
  double t47002;
  double t47258;
  double t47438;
  double t47443;
  t45852 = Cos(var1[17]);
  t45278 = Sin(var1[17]);
  t46364 = Cos(var1[16]);
  t46369 = Sin(var1[16]);
  t46558 = t46364*t45852;
  t46564 = t46369*t45278;
  t46568 = t46558 + t46564;
  t46584 = Cos(var1[15]);
  t45880 = -1.*t45852;
  t46013 = 1. + t45880;
  t46133 = -0.50321*t46013;
  t46137 = -0.23321*t45852;
  t46146 = t46133 + t46137;
  t46586 = -1.*t46584;
  t46587 = 1. + t46586;
  t46588 = -0.15121*t46587;
  t46580 = Sin(var1[15]);
  t46589 = -1.*t46364;
  t46590 = 1. + t46589;
  t46595 = -0.28121*t46590;
  t46596 = t46364*t46146;
  t46597 = 0.27*t46369*t45278;
  t46616 = t46595 + t46596 + t46597;
  t46368 = -1.*t46364*t45852;
  t46370 = -1.*t46369*t45278;
  t46371 = t46368 + t46370;
  t46803 = Cos(var1[5]);
  t46807 = Sin(var1[5]);
  t46802 = Cos(var1[4]);
  t46772 = -1.*t45852*t46369;
  t46784 = t46364*t45278;
  t46790 = t46772 + t46784;
  t46792 = Sin(var1[4]);
  t46804 = t46584*t46803*t46371;
  t46808 = -1.*t46580*t46371*t46807;
  t46809 = t46804 + t46808;
  t46844 = Cos(var1[3]);
  t46820 = t46803*t46580*t46371;
  t46831 = t46584*t46371*t46807;
  t46841 = t46820 + t46831;
  t46816 = Sin(var1[3]);
  t46845 = t46802*t46790;
  t46846 = -1.*t46792*t46809;
  t46851 = t46845 + t46846;
  t46647 = -0.15121*t46584;
  t46663 = 0.15121*t46580;
  t46672 = t46580*t46616;
  t46678 = t46588 + t46647 + t46663 + t46672;
  t46636 = t46584*t46616;
  t46637 = t46588 + t46636;
  t46911 = -1.*t46584*t46803;
  t46913 = t46580*t46807;
  t46914 = t46911 + t46913;
  t46902 = t46803*t46580*t46790;
  t46906 = t46584*t46790*t46807;
  t46910 = t46902 + t46906;
  t46918 = t46803*t46678;
  t46919 = t46637*t46807;
  t46922 = t46918 + t46919;
  t46927 = t46803*t46637;
  t46929 = -1.*t46678*t46807;
  t46930 = t46927 + t46929;
  t46951 = t46584*t46803*t46790;
  t46952 = -1.*t46580*t46790*t46807;
  t46953 = t46951 + t46952;
  t46923 = -1.*t46914*t46922;
  t46924 = t46803*t46580;
  t46925 = t46584*t46807;
  t46926 = t46924 + t46925;
  t46934 = 0.28121*t46369;
  t46938 = t46146*t46369;
  t46942 = -0.27*t46364*t45278;
  t46947 = t46934 + t46938 + t46942;
  t46949 = t46910*t46922;
  t46964 = t46568*t46792;
  t46965 = t46802*t46953;
  t46967 = t46964 + t46965;
  t46968 = t46947*t46792;
  t46969 = t46802*t46930;
  t46970 = t46968 + t46969;
  t46975 = t46802*t46947;
  t46976 = -1.*t46792*t46930;
  t46977 = t46975 + t46976;
  t47044 = -1.*t46947*t46568;
  t47039 = t46947*t46790;
  t46797 = t46790*t46792;
  t46810 = t46802*t46809;
  t46813 = t46797 + t46810;
  t47246 = -1.*t46910*t46922;
  t46992 = t46802*t46568;
  t46996 = -1.*t46792*t46953;
  t47002 = t46992 + t46996;
  t47258 = t46841*t46922;
  t47438 = t46914*t46922;
  t47443 = -1.*t46841*t46922;
  p_output1[0]=t46813*var2[0] + (t46841*t46844 - 1.*t46816*t46851)*var2[1] + (t46816*t46841 + t46844*t46851)*var2[2] + (t46967*(t46923 - 1.*t46802*t46926*t46970 + t46792*t46926*t46977) + t46802*t46926*(t46949 + t46967*t46970 + t46977*t47002))*var2[3] + (t46910*(t46923 - 1.*t46926*t46930) + t46914*(t46568*t46947 + t46949 + t46930*t46953))*var2[4] + t46568*(-1.*t46580*t46637 + t46584*t46678)*var2[5] + (-0.15121*t46371 - 0.15121*t46568)*var2[15] + (0.28121*t45278 - 0.27*t45278*t45852 + t45278*t46146)*var2[16];
  p_output1[1]=t46802*t46926*var2[0] + (t46844*t46914 + t46792*t46816*t46926)*var2[1] + (t46816*t46914 - 1.*t46792*t46844*t46926)*var2[2] + (t46813*(-1.*t46967*t46970 - 1.*t46977*t47002 + t47246) + t46967*(t46813*t46970 + t46851*t46977 + t47258))*var2[3] + (t46841*(-1.*t46930*t46953 + t47044 + t47246) + t46910*(t46809*t46930 + t47039 + t47258))*var2[4] + (t46568*(t46371*t46584*t46637 + t46371*t46580*t46678 + t47039) + t46790*(-1.*t46584*t46637*t46790 - 1.*t46580*t46678*t46790 + t47044))*var2[5] + (-0.15121 + t46568*(t46371*t46616 + t47039) + t46790*(-1.*t46616*t46790 + t47044))*var2[15];
  p_output1[2]=t46967*var2[0] + (t46844*t46910 - 1.*t46816*t47002)*var2[1] + (t46816*t46910 + t46844*t47002)*var2[2] + (t46813*(t46802*t46926*t46970 - 1.*t46792*t46926*t46977 + t47438) + t46802*t46926*(-1.*t46813*t46970 - 1.*t46851*t46977 + t47443))*var2[3] + (t46841*(t46926*t46930 + t47438) + t46914*(-1.*t46809*t46930 - 1.*t46790*t46947 + t47443))*var2[4] + (t46580*t46637 - 1.*t46584*t46678)*t46790*var2[5] + (0.27*Power(t45278,2) + 0.28121*t45852 + t45852*t46146)*var2[16] - 0.27*var2[17];
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dh_RrFoot_ParallelStance.hh"

namespace ParallelStance
{

void dh_RrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
