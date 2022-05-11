/*
 * Automatically Generated from Mathematica.
 * Fri 4 Feb 2022 15:51:51 GMT+01:00
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
  double t3375;
  double t3634;
  double t3709;
  double t4528;
  double t4640;
  double t4628;
  double t4629;
  double t4726;
  double t1497;
  double t1798;
  double t2979;
  double t3811;
  double t4638;
  double t4727;
  double t4749;
  double t4787;
  double t4790;
  double t4890;
  double t4920;
  double t4131;
  double t4406;
  double t4492;
  double t4750;
  double t4931;
  double t4957;
  double t4963;
  double t4998;
  double t5089;
  double t5090;
  double t5143;
  double t5149;
  double t5154;
  double t5191;
  double t5232;
  double t5324;
  double t5372;
  double t5411;
  double t5457;
  double t5469;
  double t5470;
  double t5491;
  double t5538;
  double t5577;
  double t5587;
  double t5596;
  double t2980;
  double t3190;
  double t5848;
  double t5940;
  double t6043;
  double t6046;
  double t6056;
  double t5965;
  double t6003;
  double t6006;
  double t6026;
  double t6118;
  double t6125;
  double t6199;
  double t6306;
  double t6356;
  double t5602;
  double t5603;
  double t5858;
  double t6194;
  double t6388;
  double t6389;
  double t5633;
  double t5639;
  double t6427;
  double t6428;
  double t6429;
  double t6433;
  double t6441;
  double t6447;
  double t6449;
  double t6463;
  double t5659;
  double t6531;
  double t6534;
  double t6554;
  double t6516;
  double t6517;
  double t6526;
  double t6530;
  double t6555;
  double t6572;
  double t6600;
  double t6608;
  double t6628;
  double t6504;
  double t6598;
  double t6632;
  double t6639;
  double t6666;
  double t6669;
  double t6673;
  double t6675;
  double t6693;
  double t6696;
  double t6701;
  double t6703;
  t3375 = Cos(var1[7]);
  t3634 = -1.*t3375;
  t3709 = 1. + t3634;
  t4528 = Cos(var1[4]);
  t4640 = Cos(var1[5]);
  t4628 = Cos(var1[6]);
  t4629 = Sin(var1[5]);
  t4726 = Sin(var1[6]);
  t1497 = Cos(var1[8]);
  t1798 = -1.*t1497;
  t2979 = 1. + t1798;
  t3811 = Sin(var1[4]);
  t4638 = -1.*t4528*t4628*t4629;
  t4727 = -1.*t4528*t4640*t4726;
  t4749 = t4638 + t4727;
  t4787 = t4528*t4640*t4628;
  t4790 = -1.*t4528*t4629*t4726;
  t4890 = t4787 + t4790;
  t4920 = Sin(var1[7]);
  t4131 = -4.e-6*t3709*t3811;
  t4406 = -1.6e-11*t3709;
  t4492 = 1. + t4406;
  t4750 = t4492*t4749;
  t4931 = 4.e-6*t4920;
  t4957 = 0. + t4931;
  t4963 = t4890*t4957;
  t4998 = t4131 + t4750 + t4963;
  t5089 = -1.*t3709;
  t5090 = 1. + t5089;
  t5143 = t5090*t3811;
  t5149 = -4.e-6*t3709*t4749;
  t5154 = 0. + t4920;
  t5191 = t4890*t5154;
  t5232 = t5143 + t5149 + t5191;
  t5324 = -1.000000000016*t3709;
  t5372 = 1. + t5324;
  t5411 = t5372*t4890;
  t5457 = -1.*t4920;
  t5469 = 0. + t5457;
  t5470 = t3811*t5469;
  t5491 = -4.e-6*t4920;
  t5538 = 0. + t5491;
  t5577 = t4749*t5538;
  t5587 = t5411 + t5470 + t5577;
  t5596 = Sin(var1[8]);
  t2980 = -1.6e-11*t2979;
  t3190 = 1. + t2980;
  t5848 = Sin(var1[3]);
  t5940 = Cos(var1[3]);
  t6043 = t4640*t5848*t3811;
  t6046 = t5940*t4629;
  t6056 = t6043 + t6046;
  t5965 = t5940*t4640;
  t6003 = -1.*t5848*t3811*t4629;
  t6006 = t5965 + t6003;
  t6026 = t4628*t6006;
  t6118 = -1.*t6056*t4726;
  t6125 = t6026 + t6118;
  t6199 = t4628*t6056;
  t6306 = t6006*t4726;
  t6356 = t6199 + t6306;
  t5602 = 4.e-6*t5596;
  t5603 = 0. + t5602;
  t5858 = 4.e-6*t4528*t3709*t5848;
  t6194 = t4492*t6125;
  t6388 = t6356*t4957;
  t6389 = t5858 + t6194 + t6388;
  t5633 = -1.*t2979;
  t5639 = 1. + t5633;
  t6427 = -1.*t4528*t5090*t5848;
  t6428 = -4.e-6*t3709*t6125;
  t6429 = t6356*t5154;
  t6433 = t6427 + t6428 + t6429;
  t6441 = t5372*t6356;
  t6447 = -1.*t4528*t5848*t5469;
  t6449 = t6125*t5538;
  t6463 = t6441 + t6447 + t6449;
  t5659 = 0. + t5596;
  t6531 = -1.*t5940*t4640*t3811;
  t6534 = t5848*t4629;
  t6554 = t6531 + t6534;
  t6516 = t4640*t5848;
  t6517 = t5940*t3811*t4629;
  t6526 = t6516 + t6517;
  t6530 = t4628*t6526;
  t6555 = -1.*t6554*t4726;
  t6572 = t6530 + t6555;
  t6600 = t4628*t6554;
  t6608 = t6526*t4726;
  t6628 = t6600 + t6608;
  t6504 = -4.e-6*t5940*t4528*t3709;
  t6598 = t4492*t6572;
  t6632 = t6628*t4957;
  t6639 = t6504 + t6598 + t6632;
  t6666 = t5940*t4528*t5090;
  t6669 = -4.e-6*t3709*t6572;
  t6673 = t6628*t5154;
  t6675 = t6666 + t6669 + t6673;
  t6693 = t5372*t6628;
  t6696 = t5940*t4528*t5469;
  t6701 = t6572*t5538;
  t6703 = t6693 + t6696 + t6701;
  p_output1[0]=t3190*t4998 - 4.e-6*t2979*t5232 + t5587*t5603 - 4.e-6*(-4.e-6*t2979*t4998 + t5232*t5639 + t5587*t5659);
  p_output1[1]=t3190*t6389 - 4.e-6*t2979*t6433 + t5603*t6463 - 4.e-6*(-4.e-6*t2979*t6389 + t5639*t6433 + t5659*t6463);
  p_output1[2]=t3190*t6639 - 4.e-6*t2979*t6675 + t5603*t6703 - 4.e-6*(-4.e-6*t2979*t6639 + t5639*t6675 + t5659*t6703);
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

#include "Joint_fl_knee_pitch_axis.hh"

namespace SymFunction
{

void Joint_fl_knee_pitch_axis_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
