/*
 * Automatically Generated from Mathematica.
 * Fri 4 Feb 2022 15:52:04 GMT+01:00
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
  double t2247;
  double t2306;
  double t2331;
  double t2484;
  double t2808;
  double t3071;
  double t2812;
  double t3058;
  double t3073;
  double t537;
  double t796;
  double t831;
  double t2541;
  double t3066;
  double t3082;
  double t3094;
  double t2602;
  double t3183;
  double t3318;
  double t3427;
  double t870;
  double t3602;
  double t2347;
  double t2500;
  double t2529;
  double t2585;
  double t2606;
  double t2785;
  double t3097;
  double t3110;
  double t3154;
  double t3428;
  double t3444;
  double t3822;
  double t3647;
  double t3694;
  double t3695;
  double t3716;
  double t3740;
  double t3748;
  double t3758;
  double t3762;
  double t3790;
  double t3806;
  double t3834;
  double t3836;
  double t3845;
  double t3846;
  double t3855;
  double t3857;
  double t3873;
  double t3880;
  double t3884;
  double t869;
  double t3889;
  double t1246;
  double t2079;
  double t4118;
  double t4152;
  double t4140;
  double t4155;
  double t4156;
  double t4205;
  double t4216;
  double t4230;
  double t3559;
  double t3588;
  double t4182;
  double t4236;
  double t4238;
  double t4296;
  double t4307;
  double t4345;
  double t3823;
  double t3833;
  double t3898;
  double t4130;
  double t4285;
  double t4351;
  double t4362;
  double t3921;
  double t3946;
  double t4364;
  double t4365;
  double t4368;
  double t4399;
  double t3969;
  double t3974;
  double t4448;
  double t4449;
  double t4458;
  double t4468;
  double t4009;
  double t4010;
  double t4029;
  double t4036;
  double t4050;
  double t4053;
  double t4603;
  double t4635;
  double t4643;
  double t4690;
  double t4699;
  double t4725;
  double t4646;
  double t4753;
  double t4754;
  double t4784;
  double t4802;
  double t4807;
  double t4599;
  double t4758;
  double t4809;
  double t4810;
  double t4812;
  double t4813;
  double t4814;
  double t4815;
  double t4819;
  double t4823;
  double t4824;
  double t4825;
  t2247 = Cos(var1[13]);
  t2306 = -1.*t2247;
  t2331 = 1. + t2306;
  t2484 = Sin(var1[13]);
  t2808 = Cos(var1[4]);
  t3071 = Cos(var1[12]);
  t2812 = Cos(var1[5]);
  t3058 = Sin(var1[12]);
  t3073 = Sin(var1[5]);
  t537 = Cos(var1[14]);
  t796 = -1.*t537;
  t831 = 1. + t796;
  t2541 = Sin(var1[4]);
  t3066 = -1.*t2808*t2812*t3058;
  t3082 = -1.*t3071*t2808*t3073;
  t3094 = t3066 + t3082;
  t2602 = -7.e-6*t2331;
  t3183 = t3071*t2808*t2812;
  t3318 = -1.*t2808*t3058*t3073;
  t3427 = t3183 + t3318;
  t870 = Sin(var1[14]);
  t3602 = -4.e-6*t2331;
  t2347 = 2.7999999999999997e-11*t2331;
  t2500 = -1.*t2484;
  t2529 = t2347 + t2500;
  t2585 = t2529*t2541;
  t2606 = -4.e-6*t2484;
  t2785 = t2602 + t2606;
  t3097 = t2785*t3094;
  t3110 = -1.000000000016*t2331;
  t3154 = 1. + t3110;
  t3428 = t3154*t3427;
  t3444 = t2585 + t3097 + t3428;
  t3822 = -4.e-6*t831;
  t3647 = -7.e-6*t2484;
  t3694 = t3602 + t3647;
  t3695 = t3694*t2541;
  t3716 = -6.5e-11*t2331;
  t3740 = 1. + t3716;
  t3748 = t3740*t3094;
  t3758 = 4.e-6*t2484;
  t3762 = t2602 + t3758;
  t3790 = t3762*t3427;
  t3806 = t3695 + t3748 + t3790;
  t3834 = -1.000000000049*t2331;
  t3836 = 1. + t3834;
  t3845 = t3836*t2541;
  t3846 = 7.e-6*t2484;
  t3855 = t3602 + t3846;
  t3857 = t3855*t3094;
  t3873 = t2347 + t2484;
  t3880 = t3873*t3427;
  t3884 = t3845 + t3857 + t3880;
  t869 = -7.e-6*t831;
  t3889 = 2.7999999999999997e-11*t831;
  t1246 = 4.e-6*t870;
  t2079 = t869 + t1246;
  t4118 = Sin(var1[3]);
  t4152 = Cos(var1[3]);
  t4140 = t2812*t4118*t2541;
  t4155 = t4152*t3073;
  t4156 = t4140 + t4155;
  t4205 = t4152*t2812;
  t4216 = -1.*t4118*t2541*t3073;
  t4230 = t4205 + t4216;
  t3559 = -6.5e-11*t831;
  t3588 = 1. + t3559;
  t4182 = -1.*t3058*t4156;
  t4236 = t3071*t4230;
  t4238 = t4182 + t4236;
  t4296 = t3071*t4156;
  t4307 = t3058*t4230;
  t4345 = t4296 + t4307;
  t3823 = -7.e-6*t870;
  t3833 = t3822 + t3823;
  t3898 = t3889 + t870;
  t4130 = -1.*t2808*t2529*t4118;
  t4285 = t2785*t4238;
  t4351 = t3154*t4345;
  t4362 = t4130 + t4285 + t4351;
  t3921 = 7.e-6*t870;
  t3946 = t3822 + t3921;
  t4364 = -1.*t2808*t3694*t4118;
  t4365 = t3740*t4238;
  t4368 = t3762*t4345;
  t4399 = t4364 + t4365 + t4368;
  t3969 = -1.000000000049*t831;
  t3974 = 1. + t3969;
  t4448 = -1.*t3836*t2808*t4118;
  t4449 = t3855*t4238;
  t4458 = t3873*t4345;
  t4468 = t4448 + t4449 + t4458;
  t4009 = -1.000000000016*t831;
  t4010 = 1. + t4009;
  t4029 = -4.e-6*t870;
  t4036 = t869 + t4029;
  t4050 = -1.*t870;
  t4053 = t3889 + t4050;
  t4603 = -1.*t4152*t2812*t2541;
  t4635 = t4118*t3073;
  t4643 = t4603 + t4635;
  t4690 = t2812*t4118;
  t4699 = t4152*t2541*t3073;
  t4725 = t4690 + t4699;
  t4646 = -1.*t3058*t4643;
  t4753 = t3071*t4725;
  t4754 = t4646 + t4753;
  t4784 = t3071*t4643;
  t4802 = t3058*t4725;
  t4807 = t4784 + t4802;
  t4599 = t4152*t2808*t2529;
  t4758 = t2785*t4754;
  t4809 = t3154*t4807;
  t4810 = t4599 + t4758 + t4809;
  t4812 = t4152*t2808*t3694;
  t4813 = t3740*t4754;
  t4814 = t3762*t4807;
  t4815 = t4812 + t4813 + t4814;
  t4819 = t3836*t4152*t2808;
  t4823 = t3855*t4754;
  t4824 = t3873*t4807;
  t4825 = t4819 + t4823 + t4824;
  p_output1[0]=t2079*t3444 + t3588*t3806 + t3833*t3884 - 4.e-6*(t3444*t3898 + t3806*t3946 + t3884*t3974) - 7.e-6*(t3444*t4010 + t3806*t4036 + t3884*t4053);
  p_output1[1]=t2079*t4362 + t3588*t4399 + t3833*t4468 - 4.e-6*(t3898*t4362 + t3946*t4399 + t3974*t4468) - 7.e-6*(t4010*t4362 + t4036*t4399 + t4053*t4468);
  p_output1[2]=t2079*t4810 + t3588*t4815 + t3833*t4825 - 4.e-6*(t3898*t4810 + t3946*t4815 + t3974*t4825) - 7.e-6*(t4010*t4810 + t4036*t4815 + t4053*t4825);
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

#include "Joint_rl_knee_pitch_axis.hh"

namespace SymFunction
{

void Joint_rl_knee_pitch_axis_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
