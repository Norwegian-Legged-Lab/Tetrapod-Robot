/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 13:05:10 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t13924;
  double t15174;
  double t15297;
  double t15300;
  double t15432;
  double t15510;
  double t15523;
  double t16590;
  double t15665;
  double t16754;
  double t15942;
  double t16764;
  double t17567;
  double t18357;
  double t18392;
  double t18431;
  double t14488;
  double t15025;
  double t18572;
  double t19835;
  double t19907;
  double t19914;
  double t20356;
  double t20483;
  double t20488;
  double t20545;
  double t20594;
  double t20778;
  double t21073;
  double t21075;
  double t15316;
  double t15520;
  double t17742;
  double t18298;
  double t18586;
  double t18844;
  double t20390;
  double t20453;
  double t21853;
  double t21861;
  double t21890;
  double t21896;
  double t21903;
  double t21927;
  double t21946;
  double t21958;
  double t21960;
  double t21562;
  double t21613;
  double t21767;
  double t21779;
  double t21797;
  double t21799;
  double t21844;
  double t21846;
  double t21895;
  double t21944;
  double t21962;
  double t22165;
  double t22319;
  double t22599;
  double t22635;
  double t22637;
  t13924 = Cos(var1[3]);
  t15174 = Cos(var1[9]);
  t15297 = -1.*t15174;
  t15300 = 1. + t15297;
  t15432 = Sin(var1[9]);
  t15510 = 0.15121*t15432;
  t15523 = Cos(var1[5]);
  t16590 = Sin(var1[3]);
  t15665 = Sin(var1[4]);
  t16754 = Sin(var1[5]);
  t15942 = -1.*t13924*t15523*t15665;
  t16764 = t16590*t16754;
  t17567 = t15942 + t16764;
  t18357 = t15523*t16590;
  t18392 = t13924*t15665*t16754;
  t18431 = t18357 + t18392;
  t14488 = Cos(var1[4]);
  t15025 = Sin(var1[10]);
  t18572 = Cos(var1[10]);
  t19835 = t15174*t17567;
  t19907 = t15432*t18431;
  t19914 = t19835 + t19907;
  t20356 = Cos(var1[11]);
  t20483 = t13924*t14488*t15025;
  t20488 = t18572*t19914;
  t20545 = t20483 + t20488;
  t20594 = Sin(var1[11]);
  t20778 = t18572*t13924*t14488;
  t21073 = -1.*t15025*t19914;
  t21075 = t20778 + t21073;
  t15316 = -0.15121*t15300;
  t15520 = t15316 + t15510;
  t17742 = 0.15121*t15300;
  t18298 = t17742 + t15510;
  t18586 = -1.*t18572;
  t18844 = 1. + t18586;
  t20390 = -1.*t20356;
  t20453 = 1. + t20390;
  t21853 = t15174*t14488*t15523;
  t21861 = -1.*t14488*t15432*t16754;
  t21890 = t21853 + t21861;
  t21896 = t15025*t15665;
  t21903 = t18572*t21890;
  t21927 = t21896 + t21903;
  t21946 = t18572*t15665;
  t21958 = -1.*t15025*t21890;
  t21960 = t21946 + t21958;
  t21562 = -1.*var2[0];
  t21613 = t14488*t15523*t15520;
  t21767 = 0.28121*t15025*t15665;
  t21779 = -1.*t14488*t18298*t16754;
  t21797 = -1.*t14488*t15523*t15432;
  t21799 = -1.*t15174*t14488*t16754;
  t21844 = t21797 + t21799;
  t21846 = 0.15121*t21844;
  t21895 = -0.28121*t18844*t21890;
  t21944 = -0.50321*t20453*t21927;
  t21962 = -0.50321*t20594*t21960;
  t22165 = t20356*t21927;
  t22319 = -1.*t20594*t21960;
  t22599 = t22165 + t22319;
  t22635 = -0.19821*t22599;
  t22637 = t21562 + var1[0] + t21613 + t21767 + t21779 + t21846 + t21895 + t21944 + t21962 + t22635;
  p_output1[0]=0.28121*t13924*t14488*t15025 + t15520*t17567 + t18298*t18431 + 0.15121*(-1.*t15432*t17567 + t15174*t18431) - 0.28121*t18844*t19914 - 0.50321*t20453*t20545 - 0.50321*t20594*t21075 - 0.19821*(t20356*t20545 - 1.*t20594*t21075) + var1[2] - 0.25*Power(t22637,2)*var3[0]*(1. + Tanh(t22637*var4[0]));
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "u_rearSwingFootHeightcurved_DiagonalStance2.hh"

namespace SymFunction
{

void u_rearSwingFootHeightcurved_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
