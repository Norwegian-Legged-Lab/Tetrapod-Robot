/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 16:59:13 GMT+02:00
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
  double t320;
  double t277;
  double t563;
  double t569;
  double t589;
  double t595;
  double t597;
  double t753;
  double t321;
  double t325;
  double t333;
  double t334;
  double t403;
  double t765;
  double t796;
  double t736;
  double t824;
  double t837;
  double t838;
  double t855;
  double t856;
  double t857;
  double t564;
  double t570;
  double t571;
  double t1005;
  double t1055;
  double t1004;
  double t967;
  double t979;
  double t983;
  double t987;
  double t1019;
  double t1081;
  double t1231;
  double t1811;
  double t1501;
  double t1577;
  double t1596;
  double t1486;
  double t1888;
  double t2164;
  double t2404;
  double t882;
  double t883;
  double t884;
  double t892;
  double t893;
  double t817;
  double t862;
  double t874;
  double t2631;
  double t2632;
  double t2939;
  double t2601;
  double t2614;
  double t2626;
  double t2989;
  double t3018;
  double t3108;
  double t3723;
  double t3770;
  double t3782;
  double t4750;
  double t4759;
  double t4937;
  double t3138;
  double t3142;
  double t3306;
  double t3529;
  double t4281;
  double t4397;
  double t4451;
  double t4578;
  double t4611;
  double t5059;
  double t5152;
  double t5161;
  double t5267;
  double t5299;
  double t5347;
  double t5491;
  double t5492;
  double t5583;
  double t5861;
  double t5773;
  double t1000;
  double t1330;
  double t1331;
  double t6495;
  double t5687;
  double t5698;
  double t5700;
  double t6601;
  double t6911;
  double t6952;
  t320 = Cos(var1[11]);
  t277 = Sin(var1[11]);
  t563 = Cos(var1[10]);
  t569 = Sin(var1[10]);
  t589 = t563*t320;
  t595 = t569*t277;
  t597 = t589 + t595;
  t753 = Cos(var1[9]);
  t321 = -1.*t320;
  t325 = 1. + t321;
  t333 = -0.50321*t325;
  t334 = -0.19821*t320;
  t403 = t333 + t334;
  t765 = -1.*t753;
  t796 = 1. + t765;
  t736 = Sin(var1[9]);
  t824 = -1.*t563;
  t837 = 1. + t824;
  t838 = -0.28121*t837;
  t855 = t563*t403;
  t856 = 0.305*t569*t277;
  t857 = t838 + t855 + t856;
  t564 = -1.*t563*t320;
  t570 = -1.*t569*t277;
  t571 = t564 + t570;
  t1005 = Cos(var1[5]);
  t1055 = Sin(var1[5]);
  t1004 = Cos(var1[4]);
  t967 = -1.*t320*t569;
  t979 = t563*t277;
  t983 = t967 + t979;
  t987 = Sin(var1[4]);
  t1019 = t753*t1005*t571;
  t1081 = -1.*t736*t571*t1055;
  t1231 = t1019 + t1081;
  t1811 = Cos(var1[3]);
  t1501 = t1005*t736*t571;
  t1577 = t753*t571*t1055;
  t1596 = t1501 + t1577;
  t1486 = Sin(var1[3]);
  t1888 = t1004*t983;
  t2164 = -1.*t987*t1231;
  t2404 = t1888 + t2164;
  t882 = 0.15121*t796;
  t883 = 0.15121*t753;
  t884 = 0.15121*t736;
  t892 = t736*t857;
  t893 = t882 + t883 + t884 + t892;
  t817 = -0.15121*t796;
  t862 = t753*t857;
  t874 = t817 + t862;
  t2631 = -1.*t753*t1005;
  t2632 = t736*t1055;
  t2939 = t2631 + t2632;
  t2601 = t1005*t736*t983;
  t2614 = t753*t983*t1055;
  t2626 = t2601 + t2614;
  t2989 = t1005*t893;
  t3018 = t874*t1055;
  t3108 = t2989 + t3018;
  t3723 = t1005*t874;
  t3770 = -1.*t893*t1055;
  t3782 = t3723 + t3770;
  t4750 = t753*t1005*t983;
  t4759 = -1.*t736*t983*t1055;
  t4937 = t4750 + t4759;
  t3138 = -1.*t2939*t3108;
  t3142 = t1005*t736;
  t3306 = t753*t1055;
  t3529 = t3142 + t3306;
  t4281 = 0.28121*t569;
  t4397 = t403*t569;
  t4451 = -0.305*t563*t277;
  t4578 = t4281 + t4397 + t4451;
  t4611 = t2626*t3108;
  t5059 = t597*t987;
  t5152 = t1004*t4937;
  t5161 = t5059 + t5152;
  t5267 = t4578*t987;
  t5299 = t1004*t3782;
  t5347 = t5267 + t5299;
  t5491 = t1004*t4578;
  t5492 = -1.*t987*t3782;
  t5583 = t5491 + t5492;
  t5861 = -1.*t4578*t597;
  t5773 = t4578*t983;
  t1000 = t983*t987;
  t1330 = t1004*t1231;
  t1331 = t1000 + t1330;
  t6495 = -1.*t2626*t3108;
  t5687 = t1004*t597;
  t5698 = -1.*t987*t4937;
  t5700 = t5687 + t5698;
  t6601 = t1596*t3108;
  t6911 = t2939*t3108;
  t6952 = -1.*t1596*t3108;
  p_output1[0]=t1331*var2[0] + (t1596*t1811 - 1.*t1486*t2404)*var2[1] + (t1486*t1596 + t1811*t2404)*var2[2] + (t1004*t3529*(t4611 + t5161*t5347 + t5583*t5700) + t5161*(t3138 - 1.*t1004*t3529*t5347 + t3529*t5583*t987))*var2[3] + (t2626*(t3138 - 1.*t3529*t3782) + t2939*(t4611 + t3782*t4937 + t4578*t597))*var2[4] + t597*(-1.*t736*t874 + t753*t893)*var2[5] + (0.15121*t571 + 0.15121*t597)*var2[9] + (0.28121*t277 - 0.305*t277*t320 + t277*t403)*var2[10];
  p_output1[1]=t1004*t3529*var2[0] + (t1811*t2939 + t1486*t3529*t987)*var2[1] + (t1486*t2939 - 1.*t1811*t3529*t987)*var2[2] + (t1331*(-1.*t5161*t5347 - 1.*t5583*t5700 + t6495) + t5161*(t1331*t5347 + t2404*t5583 + t6601))*var2[3] + (t1596*(-1.*t3782*t4937 + t5861 + t6495) + t2626*(t1231*t3782 + t5773 + t6601))*var2[4] + (t597*(t5773 + t571*t753*t874 + t571*t736*t893) + t983*(t5861 - 1.*t753*t874*t983 - 1.*t736*t893*t983))*var2[5] + (-0.15121 + t597*(t5773 + t571*t857) + t983*(t5861 - 1.*t857*t983))*var2[9];
  p_output1[2]=t5161*var2[0] + (t1811*t2626 - 1.*t1486*t5700)*var2[1] + (t1486*t2626 + t1811*t5700)*var2[2] + (t1004*t3529*(-1.*t1331*t5347 - 1.*t2404*t5583 + t6952) + t1331*(t1004*t3529*t5347 + t6911 - 1.*t3529*t5583*t987))*var2[3] + (t1596*(t3529*t3782 + t6911) + t2939*(-1.*t1231*t3782 + t6952 - 1.*t4578*t983))*var2[4] + (t736*t874 - 1.*t753*t893)*t983*var2[5] + (0.305*Power(t277,2) + 0.28121*t320 + t320*t403)*var2[10] - 0.305*var2[11];
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

#include "dh_RlFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void dh_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
