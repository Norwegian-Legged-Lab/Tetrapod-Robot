/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:41:32 GMT+02:00
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
  double t885;
  double t1931;
  double t956;
  double t15390;
  double t17914;
  double t13194;
  double t22945;
  double t957;
  double t27565;
  double t27571;
  double t27573;
  double t3795;
  double t27544;
  double t27912;
  double t27922;
  double t27924;
  double t1901;
  double t4529;
  double t8322;
  double t27960;
  double t27956;
  double t17912;
  double t27378;
  double t27543;
  double t27612;
  double t27631;
  double t27687;
  double t27926;
  double t27927;
  double t27928;
  double t27961;
  double t27968;
  double t29780;
  double t29821;
  double t29822;
  double t29824;
  double t29832;
  double t29833;
  double t29836;
  double t29850;
  double t29851;
  double t29853;
  double t29863;
  double t29867;
  double t29872;
  double t27554;
  double t27753;
  double t27901;
  double t30071;
  double t30079;
  double t30569;
  double t30596;
  double t30724;
  double t30761;
  double t30771;
  double t30772;
  double t30838;
  double t31271;
  double t31274;
  double t31277;
  double t31297;
  double t31321;
  double t31324;
  double t31325;
  double t30086;
  double t30115;
  double t30498;
  double t31304;
  double t31307;
  double t31348;
  double t31367;
  double t31371;
  double t31385;
  double t31410;
  double t31412;
  double t31449;
  double t31318;
  double t31337;
  double t31341;
  double t31390;
  double t31455;
  double t31457;
  double t31460;
  double t31463;
  double t31527;
  double t27908;
  double t27929;
  double t27930;
  double t31347;
  double t31544;
  double t31572;
  double t31598;
  double t31617;
  double t31684;
  double t33569;
  double t33647;
  t885 = Cos(var1[4]);
  t1931 = Cos(var1[9]);
  t956 = Cos(var1[5]);
  t15390 = Cos(var1[11]);
  t17914 = Sin(var1[10]);
  t13194 = Cos(var1[10]);
  t22945 = Sin(var1[11]);
  t957 = Sin(var1[9]);
  t27565 = -1.*t15390*t17914;
  t27571 = t13194*t22945;
  t27573 = t27565 + t27571;
  t3795 = Sin(var1[5]);
  t27544 = Sin(var1[4]);
  t27912 = -1.*t13194*t15390;
  t27922 = -1.*t17914*t22945;
  t27924 = t27912 + t27922;
  t1901 = t956*t957;
  t4529 = t1931*t3795;
  t8322 = t1901 + t4529;
  t27960 = Cos(var1[3]);
  t27956 = Sin(var1[3]);
  t17912 = t13194*t15390;
  t27378 = t17914*t22945;
  t27543 = t17912 + t27378;
  t27612 = t1931*t956*t27573;
  t27631 = -1.*t957*t27573*t3795;
  t27687 = t27612 + t27631;
  t27926 = t1931*t956*t27924;
  t27927 = -1.*t957*t27924*t3795;
  t27928 = t27926 + t27927;
  t27961 = -1.*t1931*t956;
  t27968 = t957*t3795;
  t29780 = t27961 + t27968;
  t29821 = t956*t957*t27573;
  t29822 = t1931*t27573*t3795;
  t29824 = t29821 + t29822;
  t29832 = t885*t27543;
  t29833 = -1.*t27544*t27687;
  t29836 = t29832 + t29833;
  t29850 = t956*t957*t27924;
  t29851 = t1931*t27924*t3795;
  t29853 = t29850 + t29851;
  t29863 = t885*t27573;
  t29867 = -1.*t27544*t27928;
  t29872 = t29863 + t29867;
  t27554 = t27543*t27544;
  t27753 = t885*t27687;
  t27901 = t27554 + t27753;
  t30071 = -1.*t1931;
  t30079 = 1. + t30071;
  t30569 = -1.*t13194;
  t30596 = 1. + t30569;
  t30724 = -0.28121*t30596;
  t30761 = -1.*t15390;
  t30771 = 1. + t30761;
  t30772 = -0.50321*t30771;
  t30838 = -0.23321*t15390;
  t31271 = t30772 + t30838;
  t31274 = t13194*t31271;
  t31277 = 0.27*t17914*t22945;
  t31297 = t30724 + t31274 + t31277;
  t31321 = -0.15121*t30079;
  t31324 = t1931*t31297;
  t31325 = t31321 + t31324;
  t30086 = 0.15121*t30079;
  t30115 = 0.15121*t1931;
  t30498 = 0.15121*t957;
  t31304 = t957*t31297;
  t31307 = t30086 + t30115 + t30498 + t31304;
  t31348 = 0.28121*t17914;
  t31367 = t31271*t17914;
  t31371 = -0.27*t13194*t22945;
  t31385 = t31348 + t31367 + t31371;
  t31410 = t956*t31325;
  t31412 = -1.*t31307*t3795;
  t31449 = t31410 + t31412;
  t31318 = t956*t31307;
  t31337 = t31325*t3795;
  t31341 = t31318 + t31337;
  t31390 = t31385*t27544;
  t31455 = t885*t31449;
  t31457 = t31390 + t31455;
  t31460 = t885*t31385;
  t31463 = -1.*t27544*t31449;
  t31527 = t31460 + t31463;
  t27908 = t27573*t27544;
  t27929 = t885*t27928;
  t27930 = t27908 + t27929;
  t31347 = -1.*t29780*t31341;
  t31544 = t29824*t31341;
  t31572 = t29780*t31341;
  t31598 = -1.*t29853*t31341;
  t31617 = -1.*t29824*t31341;
  t31684 = t29853*t31341;
  t33569 = -1.*t31385*t27543;
  t33647 = t31385*t27573;
  p_output1[0]=t27930*var2[0] + t8322*t885*var2[1] + t27901*var2[2];
  p_output1[1]=(t27960*t29853 - 1.*t27956*t29872)*var2[0] + (t27960*t29780 + t27544*t27956*t8322)*var2[1] + (t27960*t29824 - 1.*t27956*t29836)*var2[2];
  p_output1[2]=(t27956*t29853 + t27960*t29872)*var2[0] + (t27956*t29780 - 1.*t27544*t27960*t8322)*var2[1] + (t27956*t29824 + t27960*t29836)*var2[2];
  p_output1[3]=((t27901*t31457 + t29836*t31527 + t31544)*t8322*t885 + t27901*(t31347 + t27544*t31527*t8322 - 1.*t31457*t8322*t885))*var2[0] + (t27930*(-1.*t27901*t31457 - 1.*t29836*t31527 + t31617) + t27901*(t27930*t31457 + t29872*t31527 + t31684))*var2[1] + ((-1.*t27930*t31457 - 1.*t29872*t31527 + t31598)*t8322*t885 + t27930*(t31572 - 1.*t27544*t31527*t8322 + t31457*t8322*t885))*var2[2];
  p_output1[4]=(t29780*(t27543*t31385 + t27687*t31449 + t31544) + t29824*(t31347 - 1.*t31449*t8322))*var2[0] + (t29853*(-1.*t27687*t31449 + t31617 + t33569) + t29824*(t27928*t31449 + t31684 + t33647))*var2[1] + (t29780*(-1.*t27573*t31385 - 1.*t27928*t31449 + t31598) + t29853*(t31572 + t31449*t8322))*var2[2];
  p_output1[5]=t27543*(t1931*t31307 - 1.*t31325*t957)*var2[0] + (t27573*(-1.*t1931*t27573*t31325 + t33569 - 1.*t27573*t31307*t957) + t27543*(t1931*t27924*t31325 + t33647 + t27924*t31307*t957))*var2[1] + t27573*(-1.*t1931*t31307 + t31325*t957)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(0.15121*t27543 + 0.15121*t27924)*var2[0] + (-0.15121 + t27573*(-1.*t27573*t31297 + t33569) + t27543*(t27924*t31297 + t33647))*var2[1];
  p_output1[10]=(0.28121*t22945 - 0.27*t15390*t22945 + t22945*t31271)*var2[0] + (0.28121*t15390 + 0.27*Power(t22945,2) + t15390*t31271)*var2[2];
  p_output1[11]=-0.27*var2[2];
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fRlFoot_vec_DiagonalStance.hh"

namespace DiagonalStance
{

void fRlFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
