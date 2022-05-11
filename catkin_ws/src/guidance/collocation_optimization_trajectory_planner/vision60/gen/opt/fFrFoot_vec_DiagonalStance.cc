/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:46:14 GMT+02:00
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
  double t2908;
  double t2520;
  double t3103;
  double t3327;
  double t3156;
  double t3301;
  double t3333;
  double t2342;
  double t3318;
  double t3370;
  double t3375;
  double t3106;
  double t3381;
  double t3459;
  double t3465;
  double t3379;
  double t3740;
  double t3742;
  double t3475;
  double t3479;
  double t3485;
  double t3568;
  double t3624;
  double t3630;
  double t3638;
  double t3653;
  double t3654;
  double t3745;
  double t3747;
  double t3750;
  double t3796;
  double t3799;
  double t3800;
  double t3815;
  double t3816;
  double t3826;
  double t3852;
  double t3859;
  double t3867;
  double t3878;
  double t3898;
  double t3905;
  double t3377;
  double t3543;
  double t3547;
  double t4147;
  double t4154;
  double t4177;
  double t4191;
  double t4195;
  double t4203;
  double t4206;
  double t4237;
  double t4243;
  double t2546;
  double t3113;
  double t3124;
  double t4115;
  double t4178;
  double t4247;
  double t4250;
  double t4301;
  double t4304;
  double t4307;
  double t4339;
  double t4342;
  double t4343;
  double t4071;
  double t4081;
  double t4112;
  double t4113;
  double t4256;
  double t4267;
  double t4353;
  double t4356;
  double t4365;
  double t4374;
  double t4375;
  double t4376;
  double t4285;
  double t4346;
  double t4350;
  double t4373;
  double t4377;
  double t4381;
  double t4405;
  double t4414;
  double t4437;
  double t3566;
  double t3672;
  double t3682;
  double t4351;
  double t4471;
  double t4532;
  double t4571;
  double t4623;
  double t4634;
  double t4750;
  double t4783;
  double t4644;
  double t4656;
  double t4696;
  double t4671;
  double t4950;
  double t4937;
  t2908 = Cos(var1[12]);
  t2520 = Sin(var1[4]);
  t3103 = Cos(var1[4]);
  t3327 = Cos(var1[13]);
  t3156 = Cos(var1[14]);
  t3301 = Sin(var1[13]);
  t3333 = Sin(var1[14]);
  t2342 = Sin(var1[12]);
  t3318 = t3156*t3301;
  t3370 = -1.*t3327*t3333;
  t3375 = t3318 + t3370;
  t3106 = Sin(var1[5]);
  t3381 = t3327*t3156;
  t3459 = t3301*t3333;
  t3465 = t3381 + t3459;
  t3379 = Cos(var1[5]);
  t3740 = Cos(var1[3]);
  t3742 = Sin(var1[3]);
  t3475 = t3379*t3465;
  t3479 = t2342*t3375*t3106;
  t3485 = t3475 + t3479;
  t3568 = -1.*t3156*t3301;
  t3624 = t3327*t3333;
  t3630 = t3568 + t3624;
  t3638 = t3379*t3630;
  t3653 = t2342*t3465*t3106;
  t3654 = t3638 + t3653;
  t3745 = t3103*t2342;
  t3747 = t2908*t2520*t3106;
  t3750 = t3745 + t3747;
  t3796 = -1.*t3379*t2342*t3375;
  t3799 = t3465*t3106;
  t3800 = t3796 + t3799;
  t3815 = t2908*t3103*t3375;
  t3816 = -1.*t2520*t3485;
  t3826 = t3815 + t3816;
  t3852 = -1.*t3379*t2342*t3465;
  t3859 = t3630*t3106;
  t3867 = t3852 + t3859;
  t3878 = t2908*t3103*t3465;
  t3898 = -1.*t2520*t3654;
  t3905 = t3878 + t3898;
  t3377 = t2908*t3375*t2520;
  t3543 = t3103*t3485;
  t3547 = t3377 + t3543;
  t4147 = -0.0641*t3156;
  t4154 = -0.28*t3333;
  t4177 = t4147 + t4154;
  t4191 = -1.*t3156;
  t4195 = 1. + t4191;
  t4203 = 0.075*t4195;
  t4206 = 0.355*t3156;
  t4237 = -0.0641*t3333;
  t4243 = t4203 + t4206 + t4237;
  t2546 = t2342*t2520;
  t3113 = -1.*t2908*t3103*t3106;
  t3124 = t2546 + t3113;
  t4115 = -0.325*t3301;
  t4178 = t3327*t4177;
  t4247 = t3301*t4243;
  t4250 = t4115 + t4178 + t4247;
  t4301 = -1.*t3327;
  t4304 = 1. + t4301;
  t4307 = 0.325*t4304;
  t4339 = -1.*t3301*t4177;
  t4342 = t3327*t4243;
  t4343 = t4307 + t4339 + t4342;
  t4071 = -1.*t2908;
  t4081 = 1. + t4071;
  t4112 = -0.1575*t4081;
  t4113 = -0.2255*t2908;
  t4256 = -1.*t2342*t4250;
  t4267 = t4112 + t4113 + t4256;
  t4353 = -0.068*t2342;
  t4356 = t2908*t4250;
  t4365 = t4353 + t4356;
  t4374 = t3379*t4343;
  t4375 = -1.*t4267*t3106;
  t4376 = t4374 + t4375;
  t4285 = t3379*t4267;
  t4346 = t4343*t3106;
  t4350 = t4285 + t4346;
  t4373 = t4365*t2520;
  t4377 = t3103*t4376;
  t4381 = t4373 + t4377;
  t4405 = t3103*t4365;
  t4414 = -1.*t2520*t4376;
  t4437 = t4405 + t4414;
  t3566 = t2908*t3465*t2520;
  t3672 = t3103*t3654;
  t3682 = t3566 + t3672;
  t4351 = t2908*t3379*t4350;
  t4471 = -1.*t4350*t3800;
  t4532 = t4350*t3800;
  t4571 = -1.*t4350*t3867;
  t4623 = -1.*t2908*t3379*t4350;
  t4634 = t4350*t3867;
  t4750 = -1.*t2342*t4365;
  t4783 = t2908*t4365*t3465;
  t4644 = t2342*t4365;
  t4656 = -1.*t2908*t4365*t3375;
  t4696 = -1.*t2908*t4365*t3465;
  t4671 = t2908*t4365*t3375;
  t4950 = t4343*t3465;
  t4937 = -1.*t4343*t3630;
  p_output1[0]=t3547*var2[0] + t3124*var2[1] + t3682*var2[2];
  p_output1[1]=(t3740*t3800 - 1.*t3742*t3826)*var2[0] + (t2908*t3379*t3740 - 1.*t3742*t3750)*var2[1] + (t3740*t3867 - 1.*t3742*t3905)*var2[2];
  p_output1[2]=(t3742*t3800 + t3740*t3826)*var2[0] + (t2908*t3379*t3742 + t3740*t3750)*var2[1] + (t3742*t3867 + t3740*t3905)*var2[2];
  p_output1[3]=(t3682*(-1.*t3124*t4381 - 1.*t3750*t4437 + t4623) + t3124*(t3682*t4381 + t3905*t4437 + t4634))*var2[0] + (t3682*(t3547*t4381 + t3826*t4437 + t4532) + t3547*(-1.*t3682*t4381 - 1.*t3905*t4437 + t4571))*var2[1] + (t3547*(t4351 + t3124*t4381 + t3750*t4437) + t3124*(-1.*t3547*t4381 - 1.*t3826*t4437 + t4471))*var2[2];
  p_output1[4]=(t3867*(t2908*t3106*t4376 + t4623 + t4750) + t2908*t3379*(t3654*t4376 + t4634 + t4783))*var2[0] + (t3867*(t3485*t4376 + t4532 + t4671) + t3800*(-1.*t3654*t4376 + t4571 + t4696))*var2[1] + (t3800*(t4351 - 1.*t2908*t3106*t4376 + t4644) + t2908*t3379*(-1.*t3485*t4376 + t4471 + t4656))*var2[2];
  p_output1[5]=(t2908*t3465*(-1.*t2908*t4267 + t4750) + t2342*(-1.*t2342*t3465*t4267 + t3630*t4343 + t4783))*var2[0] + (t2908*t3375*(t2342*t3465*t4267 + t4696 + t4937) + t2908*t3465*(-1.*t2342*t3375*t4267 + t4671 + t4950))*var2[1] + (t2908*t3375*(t2908*t4267 + t4644) + t2342*(t2342*t3375*t4267 - 1.*t3465*t4343 + t4656))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(0.1575*t3375 + 0.2255*t3630)*var2[0] + (t3465*(-1.*t3465*t4250 + t4937) + t3630*(t3375*t4250 + t4950))*var2[1] - 0.068*t3465*var2[2];
  p_output1[13]=(0.325*t3333 - 1.*t3156*t4177 - 1.*t3333*t4243)*var2[0] + (-0.325*t3156 - 1.*t3333*t4177 + t3156*t4243)*var2[2];
  p_output1[14]=-0.0641*var2[0] - 0.28*var2[2];
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

#include "fFrFoot_vec_DiagonalStance.hh"

namespace DiagonalStance
{

void fFrFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
