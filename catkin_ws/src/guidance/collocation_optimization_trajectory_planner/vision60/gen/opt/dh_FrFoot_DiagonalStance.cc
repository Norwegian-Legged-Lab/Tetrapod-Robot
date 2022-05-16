/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:31:49 GMT+02:00
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
  double t249;
  double t305;
  double t3649;
  double t3658;
  double t3822;
  double t3820;
  double t302;
  double t306;
  double t309;
  double t3155;
  double t3433;
  double t3529;
  double t3582;
  double t3587;
  double t3606;
  double t3838;
  double t3839;
  double t3841;
  double t3842;
  double t3710;
  double t3713;
  double t3758;
  double t3833;
  double t3850;
  double t3860;
  double t3990;
  double t3991;
  double t4006;
  double t3897;
  double t3904;
  double t3935;
  double t3942;
  double t3944;
  double t3961;
  double t3656;
  double t3662;
  double t3684;
  double t4157;
  double t4162;
  double t4150;
  double t4125;
  double t4161;
  double t4164;
  double t4170;
  double t4347;
  double t4309;
  double t4322;
  double t4337;
  double t4257;
  double t4374;
  double t4413;
  double t4441;
  double t3896;
  double t4014;
  double t4019;
  double t4028;
  double t4048;
  double t4050;
  double t4059;
  double t4078;
  double t4602;
  double t4603;
  double t4718;
  double t4501;
  double t4508;
  double t4522;
  double t4524;
  double t4540;
  double t4548;
  double t4766;
  double t4767;
  double t4768;
  double t4727;
  double t4802;
  double t4806;
  double t4828;
  double t4763;
  double t4844;
  double t4845;
  double t4859;
  double t4783;
  double t4784;
  double t4795;
  double t4894;
  double t4895;
  double t4896;
  double t5178;
  double t5083;
  double t4874;
  double t4883;
  double t4884;
  double t5162;
  double t5111;
  double t5414;
  double t4147;
  double t4176;
  double t4183;
  double t5426;
  double t4988;
  double t4989;
  double t4990;
  double t5538;
  double t5553;
  double t5621;
  double t5645;
  t249 = Cos(var1[14]);
  t305 = Sin(var1[14]);
  t3649 = Sin(var1[13]);
  t3658 = Cos(var1[13]);
  t3822 = Sin(var1[12]);
  t3820 = Cos(var1[12]);
  t302 = -0.0641*t249;
  t306 = -0.28*t305;
  t309 = t302 + t306;
  t3155 = -1.*t249;
  t3433 = 1. + t3155;
  t3529 = 0.075*t3433;
  t3582 = 0.355*t249;
  t3587 = -0.0641*t305;
  t3606 = t3529 + t3582 + t3587;
  t3838 = -0.325*t3649;
  t3839 = t3658*t309;
  t3841 = t3649*t3606;
  t3842 = t3838 + t3839 + t3841;
  t3710 = -1.*t249*t3649;
  t3713 = t3658*t305;
  t3758 = t3710 + t3713;
  t3833 = -0.068*t3822;
  t3850 = t3820*t3842;
  t3860 = t3833 + t3850;
  t3990 = t3658*t249;
  t3991 = t3649*t305;
  t4006 = t3990 + t3991;
  t3897 = -1.*t3820;
  t3904 = 1. + t3897;
  t3935 = -0.1575*t3904;
  t3942 = -0.2255*t3820;
  t3944 = -1.*t3822*t3842;
  t3961 = t3935 + t3942 + t3944;
  t3656 = t249*t3649;
  t3662 = -1.*t3658*t305;
  t3684 = t3656 + t3662;
  t4157 = Cos(var1[5]);
  t4162 = Sin(var1[5]);
  t4150 = Cos(var1[4]);
  t4125 = Sin(var1[4]);
  t4161 = t4157*t4006;
  t4164 = t3822*t3684*t4162;
  t4170 = t4161 + t4164;
  t4347 = Cos(var1[3]);
  t4309 = -1.*t4157*t3822*t3684;
  t4322 = t4006*t4162;
  t4337 = t4309 + t4322;
  t4257 = Sin(var1[3]);
  t4374 = t3820*t4150*t3684;
  t4413 = -1.*t4125*t4170;
  t4441 = t4374 + t4413;
  t3896 = -1.*t3822*t3860;
  t4014 = -1.*t3658;
  t4019 = 1. + t4014;
  t4028 = 0.325*t4019;
  t4048 = -1.*t3649*t309;
  t4050 = t3658*t3606;
  t4059 = t4028 + t4048 + t4050;
  t4078 = t3820*t3860*t4006;
  t4602 = t4157*t3961;
  t4603 = t4059*t4162;
  t4718 = t4602 + t4603;
  t4501 = -1.*t4157*t3822*t4006;
  t4508 = t3758*t4162;
  t4522 = t4501 + t4508;
  t4524 = t4157*t4059;
  t4540 = -1.*t3961*t4162;
  t4548 = t4524 + t4540;
  t4766 = t4157*t3758;
  t4767 = t3822*t4006*t4162;
  t4768 = t4766 + t4767;
  t4727 = -1.*t3820*t4157*t4718;
  t4802 = t3822*t4125;
  t4806 = -1.*t3820*t4150*t4162;
  t4828 = t4802 + t4806;
  t4763 = t4718*t4522;
  t4844 = t3860*t4125;
  t4845 = t4150*t4548;
  t4859 = t4844 + t4845;
  t4783 = t3820*t4006*t4125;
  t4784 = t4150*t4768;
  t4795 = t4783 + t4784;
  t4894 = t4150*t3860;
  t4895 = -1.*t4125*t4548;
  t4896 = t4894 + t4895;
  t5178 = t4059*t4006;
  t5083 = -1.*t4059*t3758;
  t4874 = t4150*t3822;
  t4883 = t3820*t4125*t4162;
  t4884 = t4874 + t4883;
  t5162 = t3820*t3860*t3684;
  t5111 = -1.*t3820*t3860*t4006;
  t5414 = t4718*t4337;
  t4147 = t3820*t3684*t4125;
  t4176 = t4150*t4170;
  t4183 = t4147 + t4176;
  t5426 = -1.*t4718*t4522;
  t4988 = t3820*t4150*t4006;
  t4989 = -1.*t4125*t4768;
  t4990 = t4988 + t4989;
  t5538 = t3822*t3860;
  t5553 = -1.*t3820*t3860*t3684;
  t5621 = t3820*t4157*t4718;
  t5645 = -1.*t4718*t4337;
  p_output1[0]=t4183*var2[0] + (t4337*t4347 - 1.*t4257*t4441)*var2[1] + (t4257*t4337 + t4347*t4441)*var2[2] + (t4795*(t4727 - 1.*t4828*t4859 - 1.*t4884*t4896) + t4828*(t4763 + t4795*t4859 + t4896*t4990))*var2[3] + (t4522*(t3896 + t3820*t4162*t4548 + t4727) + t3820*t4157*(t4078 + t4763 + t4548*t4768))*var2[4] + (t3820*(t3896 - 1.*t3820*t3961)*t4006 + t3822*(-1.*t3822*t3961*t4006 + t3758*t4059 + t4078))*var2[5] + (0.1575*t3684 + 0.2255*t3758)*var2[12] + (0.325*t305 - 1.*t249*t309 - 1.*t305*t3606)*var2[13] - 0.0641*var2[14];
  p_output1[1]=t4828*var2[0] + (t3820*t4157*t4347 - 1.*t4257*t4884)*var2[1] + (t3820*t4157*t4257 + t4347*t4884)*var2[2] + (t4795*(t4183*t4859 + t4441*t4896 + t5414) + t4183*(-1.*t4795*t4859 - 1.*t4896*t4990 + t5426))*var2[3] + (t4522*(t4170*t4548 + t5162 + t5414) + t4337*(-1.*t4548*t4768 + t5111 + t5426))*var2[4] + (t3684*t3820*(t3822*t3961*t4006 + t5083 + t5111) + t3820*t4006*(-1.*t3684*t3822*t3961 + t5162 + t5178))*var2[5] + (t4006*(-1.*t3842*t4006 + t5083) + t3758*(t3684*t3842 + t5178))*var2[12];
  p_output1[2]=t4795*var2[0] + (t4347*t4522 - 1.*t4257*t4990)*var2[1] + (t4257*t4522 + t4347*t4990)*var2[2] + (t4183*(t4828*t4859 + t4884*t4896 + t5621) + t4828*(-1.*t4183*t4859 - 1.*t4441*t4896 + t5645))*var2[3] + (t4337*(-1.*t3820*t4162*t4548 + t5538 + t5621) + t3820*t4157*(-1.*t4170*t4548 + t5553 + t5645))*var2[4] + (t3684*t3820*(t3820*t3961 + t5538) + t3822*(t3684*t3822*t3961 - 1.*t4006*t4059 + t5553))*var2[5] - 0.068*t4006*var2[12] + (-0.325*t249 - 1.*t305*t309 + t249*t3606)*var2[13] - 0.28*var2[14];
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

#include "dh_FrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void dh_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
