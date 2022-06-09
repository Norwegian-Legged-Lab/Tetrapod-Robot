/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:52:41 GMT+02:00
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
  double t3798;
  double t3805;
  double t3825;
  double t3878;
  double t3917;
  double t3970;
  double t3797;
  double t4091;
  double t2944;
  double t3522;
  double t4193;
  double t4265;
  double t4291;
  double t4300;
  double t4307;
  double t4312;
  double t4317;
  double t4318;
  double t4490;
  double t4501;
  double t4504;
  double t4505;
  double t4017;
  double t4065;
  double t3827;
  double t3969;
  double t4194;
  double t4196;
  double t4308;
  double t4310;
  double t4556;
  double t4557;
  double t4567;
  double t4653;
  double t4572;
  double t4576;
  double t4578;
  double t4584;
  double t4587;
  double t4621;
  double t4625;
  double t4626;
  double t4627;
  double t4628;
  double t4639;
  double t4700;
  double t4704;
  double t4707;
  double t4711;
  double t4723;
  double t4724;
  double t4735;
  double t4740;
  double t4756;
  double t4791;
  double t4793;
  double t4801;
  double t4817;
  double t4849;
  double t4848;
  double t4858;
  double t4859;
  double t4862;
  double t4863;
  double t4864;
  double t4881;
  double t4882;
  double t4885;
  double t4887;
  double t4888;
  double t4889;
  double t4893;
  double t4896;
  double t4901;
  double t4987;
  double t4990;
  double t4991;
  double t4993;
  double t4995;
  double t4996;
  double t5000;
  double t5007;
  double t5008;
  double t5018;
  double t5019;
  double t5020;
  double t5040;
  double t5044;
  double t5047;
  double t5055;
  double t5056;
  double t5059;
  double t4654;
  double t4655;
  double t4673;
  double t5117;
  double t5119;
  double t5120;
  double t5124;
  double t5125;
  double t5068;
  double t5162;
  double t5163;
  double t5164;
  double t5168;
  double t5169;
  double t5170;
  double t5174;
  double t5175;
  double t5177;
  double t5195;
  double t5196;
  double t5197;
  double t5259;
  double t5260;
  double t5267;
  double t5269;
  double t5271;
  double t5272;
  double t5275;
  double t5276;
  double t5278;
  double t5288;
  double t5289;
  double t5290;
  double t5293;
  double t5295;
  double t5296;
  double t5312;
  double t5314;
  double t5315;
  double t5319;
  double t5340;
  double t5302;
  double t5365;
  double t5366;
  double t5367;
  double t5369;
  double t5370;
  double t5371;
  double t5373;
  double t5374;
  double t5382;
  double t5383;
  double t5384;
  t3798 = Cos(var1[12]);
  t3805 = -1.*t3798;
  t3825 = 1. + t3805;
  t3878 = Sin(var1[12]);
  t3917 = -0.15121*t3878;
  t3970 = Sin(var1[4]);
  t3797 = Cos(var1[5]);
  t4091 = Sin(var1[5]);
  t2944 = Cos(var1[4]);
  t3522 = Sin(var1[13]);
  t4193 = Cos(var1[13]);
  t4265 = -1.*t3798*t3797*t3970;
  t4291 = t3878*t3970*t4091;
  t4300 = t4265 + t4291;
  t4307 = Cos(var1[14]);
  t4312 = -1.*t2944*t3522;
  t4317 = t4193*t4300;
  t4318 = t4312 + t4317;
  t4490 = Sin(var1[14]);
  t4501 = t4193*t2944;
  t4504 = t3522*t4300;
  t4505 = t4501 + t4504;
  t4017 = -0.15121*t3825;
  t4065 = t4017 + t3917;
  t3827 = 0.15121*t3825;
  t3969 = t3827 + t3917;
  t4194 = -1.*t4193;
  t4196 = 1. + t4194;
  t4308 = -1.*t4307;
  t4310 = 1. + t4308;
  t4556 = -1.*t2944*t3797*t3878;
  t4557 = -1.*t3798*t2944*t4091;
  t4567 = t4556 + t4557;
  t4653 = -0.15121*t3798;
  t4572 = 0.28121*t4196*t4567;
  t4576 = 0.50321*t4193*t4310*t4567;
  t4578 = -0.50321*t3522*t4490*t4567;
  t4584 = -1.*t3798*t2944*t3797;
  t4587 = t2944*t3878*t4091;
  t4621 = t4584 + t4587;
  t4625 = -0.15121*t4621;
  t4626 = t4193*t4307*t4567;
  t4627 = t3522*t4490*t4567;
  t4628 = t4626 + t4627;
  t4639 = 0.19821*t4628;
  t4700 = t3798*t2944*t3797;
  t4704 = -1.*t2944*t3878*t4091;
  t4707 = t4700 + t4704;
  t4711 = -1.*t3522*t3970;
  t4723 = t4193*t4707;
  t4724 = t4711 + t4723;
  t4735 = -1.*t4193*t3970;
  t4740 = -1.*t3522*t4707;
  t4756 = t4735 + t4740;
  t4791 = t4193*t3970;
  t4793 = t3522*t4707;
  t4801 = t4791 + t4793;
  t4817 = Cos(var1[3]);
  t4849 = Sin(var1[3]);
  t4848 = t4817*t3797*t3970;
  t4858 = -1.*t4849*t4091;
  t4859 = t4848 + t4858;
  t4862 = -1.*t3797*t4849;
  t4863 = -1.*t4817*t3970*t4091;
  t4864 = t4862 + t4863;
  t4881 = t3798*t4859;
  t4882 = t3878*t4864;
  t4885 = t4881 + t4882;
  t4887 = t4817*t2944*t3522;
  t4888 = t4193*t4885;
  t4889 = t4887 + t4888;
  t4893 = -1.*t4193*t4817*t2944;
  t4896 = t3522*t4885;
  t4901 = t4893 + t4896;
  t4987 = t3798*t2944*t3797*t4849;
  t4990 = -1.*t2944*t3878*t4849*t4091;
  t4991 = t4987 + t4990;
  t4993 = -1.*t3522*t4849*t3970;
  t4995 = t4193*t4991;
  t4996 = t4993 + t4995;
  t5000 = t4193*t4849*t3970;
  t5007 = t3522*t4991;
  t5008 = t5000 + t5007;
  t5018 = -1.*t3797*t4849*t3970;
  t5019 = -1.*t4817*t4091;
  t5020 = t5018 + t5019;
  t5040 = t4817*t3797;
  t5044 = -1.*t4849*t3970*t4091;
  t5047 = t5040 + t5044;
  t5055 = t3878*t5020;
  t5056 = t3798*t5047;
  t5059 = t5055 + t5056;
  t4654 = 0.15121*t3878;
  t4655 = t4653 + t4654;
  t4673 = t4653 + t3917;
  t5117 = t3797*t4849*t3970;
  t5119 = t4817*t4091;
  t5120 = t5117 + t5119;
  t5124 = -1.*t3878*t5120;
  t5125 = t5124 + t5056;
  t5068 = -1.*t3878*t5047;
  t5162 = t3798*t5120;
  t5163 = t3878*t5047;
  t5164 = t5162 + t5163;
  t5168 = t2944*t3522*t4849;
  t5169 = t4193*t5164;
  t5170 = t5168 + t5169;
  t5174 = t4193*t2944*t4849;
  t5175 = -1.*t3522*t5164;
  t5177 = t5174 + t5175;
  t5195 = -1.*t4193*t2944*t4849;
  t5196 = t3522*t5164;
  t5197 = t5195 + t5196;
  t5259 = -1.*t3798*t4817*t2944*t3797;
  t5260 = t4817*t2944*t3878*t4091;
  t5267 = t5259 + t5260;
  t5269 = t4817*t3522*t3970;
  t5271 = t4193*t5267;
  t5272 = t5269 + t5271;
  t5275 = -1.*t4193*t4817*t3970;
  t5276 = t3522*t5267;
  t5278 = t5275 + t5276;
  t5288 = t3797*t4849;
  t5289 = t4817*t3970*t4091;
  t5290 = t5288 + t5289;
  t5293 = t3878*t4859;
  t5295 = t3798*t5290;
  t5296 = t5293 + t5295;
  t5312 = -1.*t4817*t3797*t3970;
  t5314 = t4849*t4091;
  t5315 = t5312 + t5314;
  t5319 = -1.*t3878*t5315;
  t5340 = t5319 + t5295;
  t5302 = -1.*t3878*t5290;
  t5365 = t3798*t5315;
  t5366 = t3878*t5290;
  t5367 = t5365 + t5366;
  t5369 = -1.*t4817*t2944*t3522;
  t5370 = t4193*t5367;
  t5371 = t5369 + t5370;
  t5373 = -1.*t3522*t5367;
  t5374 = t4893 + t5373;
  t5382 = t4193*t4817*t2944;
  t5383 = t3522*t5367;
  t5384 = t5382 + t5383;
  p_output1[0]=1.;
  p_output1[1]=0.28121*t2944*t3522 - 1.*t3797*t3969*t3970 + t3970*t4065*t4091 - 0.15121*(t3797*t3878*t3970 + t3798*t3970*t4091) + 0.28121*t4196*t4300 + 0.50321*t4310*t4318 - 0.50321*t4490*t4505 + 0.19821*(t4307*t4318 + t4490*t4505);
  p_output1[2]=-1.*t2944*t3797*t4065 - 1.*t2944*t3969*t4091 + t4572 + t4576 + t4578 + t4625 + t4639;
  p_output1[3]=t4572 + t4576 + t4578 + t4625 + t4639 + t2944*t3797*t4655 - 1.*t2944*t4091*t4673;
  p_output1[4]=0.28121*t3970*t4193 + 0.28121*t3522*t4707 - 0.50321*t4490*t4724 + 0.50321*t4310*t4756 + 0.19821*(t4490*t4724 + t4307*t4756);
  p_output1[5]=0.50321*t4490*t4724 - 0.50321*t4307*t4801 + 0.19821*(-1.*t4490*t4724 + t4307*t4801);
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=-0.28121*t2944*t3522*t4817 + t3969*t4859 + t4065*t4864 - 0.15121*(-1.*t3878*t4859 + t3798*t4864) + 0.28121*t4196*t4885 + 0.50321*t4310*t4889 - 0.50321*t4490*t4901 + 0.19821*(t4307*t4889 + t4490*t4901);
  p_output1[9]=t2944*t3797*t3969*t4849 + 0.28121*t3522*t3970*t4849 - 1.*t2944*t4065*t4091*t4849 - 0.15121*(-1.*t2944*t3797*t3878*t4849 - 1.*t2944*t3798*t4091*t4849) + 0.28121*t4196*t4991 + 0.50321*t4310*t4996 - 0.50321*t4490*t5008 + 0.19821*(t4307*t4996 + t4490*t5008);
  p_output1[10]=t4065*t5020 + t3969*t5047 + 0.28121*t4196*t5059 + 0.50321*t4193*t4310*t5059 - 0.50321*t3522*t4490*t5059 + 0.19821*(t4193*t4307*t5059 + t3522*t4490*t5059) - 0.15121*(t3798*t5020 + t5068);
  p_output1[11]=t4673*t5047 + t4655*t5120 - 0.15121*(t5068 - 1.*t3798*t5120) + 0.28121*t4196*t5125 + 0.50321*t4193*t4310*t5125 - 0.50321*t3522*t4490*t5125 + 0.19821*(t4193*t4307*t5125 + t3522*t4490*t5125);
  p_output1[12]=-0.28121*t2944*t4193*t4849 + 0.28121*t3522*t5164 - 0.50321*t4490*t5170 + 0.50321*t4310*t5177 + 0.19821*(t4490*t5170 + t4307*t5177);
  p_output1[13]=0.50321*t4490*t5170 - 0.50321*t4307*t5197 + 0.19821*(-1.*t4490*t5170 + t4307*t5197);
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=-0.28121*t2944*t3522*t4849 + t4065*t5047 + t3969*t5120 - 0.15121*t5125 + 0.28121*t4196*t5164 + 0.50321*t4310*t5170 - 0.50321*t4490*t5197 + 0.19821*(t4307*t5170 + t4490*t5197);
  p_output1[17]=-1.*t2944*t3797*t3969*t4817 - 0.28121*t3522*t3970*t4817 + t2944*t4065*t4091*t4817 - 0.15121*(t2944*t3797*t3878*t4817 + t2944*t3798*t4091*t4817) + 0.28121*t4196*t5267 + 0.50321*t4310*t5272 - 0.50321*t4490*t5278 + 0.19821*(t4307*t5272 + t4490*t5278);
  p_output1[18]=t4065*t4859 + t3969*t5290 + 0.28121*t4196*t5296 + 0.50321*t4193*t4310*t5296 - 0.50321*t3522*t4490*t5296 + 0.19821*(t4193*t4307*t5296 + t3522*t4490*t5296) - 0.15121*(t4881 + t5302);
  p_output1[19]=t4673*t5290 + t4655*t5315 - 0.15121*(t5302 - 1.*t3798*t5315) + 0.28121*t4196*t5340 + 0.50321*t4193*t4310*t5340 - 0.50321*t3522*t4490*t5340 + 0.19821*(t4193*t4307*t5340 + t3522*t4490*t5340);
  p_output1[20]=0.28121*t2944*t4193*t4817 + 0.28121*t3522*t5367 - 0.50321*t4490*t5371 + 0.50321*t4310*t5374 + 0.19821*(t4490*t5371 + t4307*t5374);
  p_output1[21]=0.50321*t4490*t5371 - 0.50321*t4307*t5384 + 0.19821*(-1.*t4490*t5371 + t4307*t5384);
  p_output1[22]=-1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 23, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_h_FrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void J_h_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
