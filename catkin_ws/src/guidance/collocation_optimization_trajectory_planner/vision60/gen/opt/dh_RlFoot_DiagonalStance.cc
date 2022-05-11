/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:46:35 GMT+02:00
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
  double t434;
  double t640;
  double t2724;
  double t2726;
  double t3260;
  double t2986;
  double t458;
  double t703;
  double t843;
  double t1127;
  double t1137;
  double t1151;
  double t1159;
  double t1279;
  double t1746;
  double t3294;
  double t3303;
  double t3371;
  double t3382;
  double t2828;
  double t2837;
  double t2859;
  double t3267;
  double t3388;
  double t3391;
  double t3551;
  double t3556;
  double t3572;
  double t3420;
  double t3425;
  double t3436;
  double t3457;
  double t3471;
  double t3473;
  double t2725;
  double t2767;
  double t2815;
  double t4412;
  double t4547;
  double t4410;
  double t4229;
  double t4527;
  double t4608;
  double t4763;
  double t4951;
  double t4880;
  double t4883;
  double t4917;
  double t4869;
  double t5008;
  double t5011;
  double t5012;
  double t3413;
  double t3602;
  double t3610;
  double t3632;
  double t3652;
  double t3655;
  double t3656;
  double t4004;
  double t5133;
  double t5134;
  double t5144;
  double t5088;
  double t5093;
  double t5094;
  double t5096;
  double t5097;
  double t5100;
  double t5164;
  double t5166;
  double t5168;
  double t5146;
  double t5548;
  double t5567;
  double t5568;
  double t5157;
  double t5569;
  double t5571;
  double t5575;
  double t5522;
  double t5524;
  double t5536;
  double t5598;
  double t5600;
  double t5601;
  double t5781;
  double t5654;
  double t5591;
  double t5592;
  double t5597;
  double t5717;
  double t5655;
  double t6121;
  double t4239;
  double t4813;
  double t4832;
  double t6130;
  double t5615;
  double t5624;
  double t5630;
  double t6248;
  double t6255;
  double t6294;
  double t6404;
  t434 = Cos(var1[11]);
  t640 = Sin(var1[11]);
  t2724 = Sin(var1[10]);
  t2726 = Cos(var1[10]);
  t3260 = Sin(var1[9]);
  t2986 = Cos(var1[9]);
  t458 = -0.0641*t434;
  t703 = -0.28*t640;
  t843 = t458 + t703;
  t1127 = -1.*t434;
  t1137 = 1. + t1127;
  t1151 = -0.575*t1137;
  t1159 = -0.295*t434;
  t1279 = -0.0641*t640;
  t1746 = t1151 + t1159 + t1279;
  t3294 = 0.325*t2724;
  t3303 = t2726*t843;
  t3371 = t2724*t1746;
  t3382 = t3294 + t3303 + t3371;
  t2828 = -1.*t434*t2724;
  t2837 = t2726*t640;
  t2859 = t2828 + t2837;
  t3267 = 0.068*t3260;
  t3388 = t2986*t3382;
  t3391 = t3267 + t3388;
  t3551 = t2726*t434;
  t3556 = t2724*t640;
  t3572 = t3551 + t3556;
  t3420 = -1.*t2986;
  t3425 = 1. + t3420;
  t3436 = 0.1575*t3425;
  t3457 = 0.2255*t2986;
  t3471 = -1.*t3260*t3382;
  t3473 = t3436 + t3457 + t3471;
  t2725 = t434*t2724;
  t2767 = -1.*t2726*t640;
  t2815 = t2725 + t2767;
  t4412 = Cos(var1[5]);
  t4547 = Sin(var1[5]);
  t4410 = Cos(var1[4]);
  t4229 = Sin(var1[4]);
  t4527 = t4412*t3572;
  t4608 = t3260*t2815*t4547;
  t4763 = t4527 + t4608;
  t4951 = Cos(var1[3]);
  t4880 = -1.*t4412*t3260*t2815;
  t4883 = t3572*t4547;
  t4917 = t4880 + t4883;
  t4869 = Sin(var1[3]);
  t5008 = t2986*t4410*t2815;
  t5011 = -1.*t4229*t4763;
  t5012 = t5008 + t5011;
  t3413 = -1.*t3260*t3391;
  t3602 = -1.*t2726;
  t3610 = 1. + t3602;
  t3632 = -0.325*t3610;
  t3652 = -1.*t2724*t843;
  t3655 = t2726*t1746;
  t3656 = t3632 + t3652 + t3655;
  t4004 = t2986*t3391*t3572;
  t5133 = t4412*t3473;
  t5134 = t3656*t4547;
  t5144 = t5133 + t5134;
  t5088 = -1.*t4412*t3260*t3572;
  t5093 = t2859*t4547;
  t5094 = t5088 + t5093;
  t5096 = t4412*t3656;
  t5097 = -1.*t3473*t4547;
  t5100 = t5096 + t5097;
  t5164 = t4412*t2859;
  t5166 = t3260*t3572*t4547;
  t5168 = t5164 + t5166;
  t5146 = -1.*t2986*t4412*t5144;
  t5548 = t3260*t4229;
  t5567 = -1.*t2986*t4410*t4547;
  t5568 = t5548 + t5567;
  t5157 = t5144*t5094;
  t5569 = t3391*t4229;
  t5571 = t4410*t5100;
  t5575 = t5569 + t5571;
  t5522 = t2986*t3572*t4229;
  t5524 = t4410*t5168;
  t5536 = t5522 + t5524;
  t5598 = t4410*t3391;
  t5600 = -1.*t4229*t5100;
  t5601 = t5598 + t5600;
  t5781 = t3656*t3572;
  t5654 = -1.*t3656*t2859;
  t5591 = t4410*t3260;
  t5592 = t2986*t4229*t4547;
  t5597 = t5591 + t5592;
  t5717 = t2986*t3391*t2815;
  t5655 = -1.*t2986*t3391*t3572;
  t6121 = t5144*t4917;
  t4239 = t2986*t2815*t4229;
  t4813 = t4410*t4763;
  t4832 = t4239 + t4813;
  t6130 = -1.*t5144*t5094;
  t5615 = t2986*t4410*t3572;
  t5624 = -1.*t4229*t5168;
  t5630 = t5615 + t5624;
  t6248 = t3260*t3391;
  t6255 = -1.*t2986*t3391*t2815;
  t6294 = t2986*t4412*t5144;
  t6404 = -1.*t5144*t4917;
  p_output1[0]=t4832*var2[0] + (t4917*t4951 - 1.*t4869*t5012)*var2[1] + (t4869*t4917 + t4951*t5012)*var2[2] + (t5536*(t5146 - 1.*t5568*t5575 - 1.*t5597*t5601) + t5568*(t5157 + t5536*t5575 + t5601*t5630))*var2[3] + (t5094*(t3413 + t2986*t4547*t5100 + t5146) + t2986*t4412*(t4004 + t5157 + t5100*t5168))*var2[4] + (t2986*(t3413 - 1.*t2986*t3473)*t3572 + t3260*(-1.*t3260*t3473*t3572 + t2859*t3656 + t4004))*var2[5] + (-0.1575*t2815 - 0.2255*t2859)*var2[9] + (-0.325*t640 - 1.*t1746*t640 - 1.*t434*t843)*var2[10] - 0.0641*var2[11];
  p_output1[1]=t5568*var2[0] + (t2986*t4412*t4951 - 1.*t4869*t5597)*var2[1] + (t2986*t4412*t4869 + t4951*t5597)*var2[2] + (t5536*(t4832*t5575 + t5012*t5601 + t6121) + t4832*(-1.*t5536*t5575 - 1.*t5601*t5630 + t6130))*var2[3] + (t5094*(t4763*t5100 + t5717 + t6121) + t4917*(-1.*t5100*t5168 + t5655 + t6130))*var2[4] + (t2815*t2986*(t3260*t3473*t3572 + t5654 + t5655) + t2986*t3572*(-1.*t2815*t3260*t3473 + t5717 + t5781))*var2[5] + (t3572*(-1.*t3382*t3572 + t5654) + t2859*(t2815*t3382 + t5781))*var2[9];
  p_output1[2]=t5536*var2[0] + (t4951*t5094 - 1.*t4869*t5630)*var2[1] + (t4869*t5094 + t4951*t5630)*var2[2] + (t4832*(t5568*t5575 + t5597*t5601 + t6294) + t5568*(-1.*t4832*t5575 - 1.*t5012*t5601 + t6404))*var2[3] + (t4917*(-1.*t2986*t4547*t5100 + t6248 + t6294) + t2986*t4412*(-1.*t4763*t5100 + t6255 + t6404))*var2[4] + (t2815*t2986*(t2986*t3473 + t6248) + t3260*(t2815*t3260*t3473 - 1.*t3572*t3656 + t6255))*var2[5] + 0.068*t3572*var2[9] + (0.325*t434 + t1746*t434 - 1.*t640*t843)*var2[10] - 0.28*var2[11];
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
