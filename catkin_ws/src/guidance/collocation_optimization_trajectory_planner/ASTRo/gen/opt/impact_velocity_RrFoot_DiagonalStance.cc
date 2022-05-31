/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 16:59:51 GMT+02:00
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
  double t147;
  double t2884;
  double t2913;
  double t2924;
  double t2933;
  double t2935;
  double t1863;
  double t3924;
  double t4015;
  double t4129;
  double t4131;
  double t4134;
  double t4177;
  double t4252;
  double t4253;
  double t3836;
  double t4127;
  double t4128;
  double t4171;
  double t4211;
  double t4212;
  double t4221;
  double t4254;
  double t4272;
  double t4275;
  double t4276;
  double t4322;
  double t4359;
  double t4369;
  double t4371;
  double t4372;
  double t4458;
  double t4482;
  double t4485;
  double t4522;
  double t4477;
  double t4523;
  double t4527;
  double t4538;
  double t4539;
  double t4554;
  double t4689;
  double t4693;
  double t4697;
  double t3917;
  double t3076;
  double t3311;
  double t4750;
  double t4752;
  double t4756;
  double t4761;
  double t4762;
  double t4766;
  double t4770;
  double t4774;
  double t4794;
  double t4838;
  double t4865;
  double t4870;
  double t4891;
  double t4897;
  double t4902;
  double t4903;
  double t4906;
  double t4916;
  double t4919;
  double t5003;
  double t4992;
  double t5004;
  double t5008;
  double t5011;
  double t5012;
  double t5018;
  double t5038;
  double t5059;
  double t5063;
  double t4384;
  double t4386;
  double t4391;
  double t4397;
  double t5138;
  double t5145;
  double t5152;
  double t5158;
  double t5167;
  double t5088;
  double t5273;
  double t5288;
  double t5299;
  double t5313;
  double t5322;
  double t5323;
  double t5360;
  double t5369;
  double t5376;
  double t5381;
  double t5389;
  double t5399;
  double t5409;
  double t5413;
  double t5417;
  double t5479;
  double t5489;
  double t5491;
  double t5467;
  double t5492;
  double t5495;
  double t5510;
  double t5514;
  double t5517;
  double t5546;
  double t5550;
  double t5557;
  double t5651;
  double t5656;
  double t5660;
  double t5662;
  double t5676;
  double t5681;
  double t5698;
  double t5715;
  double t5730;
  double t6093;
  double t6105;
  double t6118;
  double t6150;
  double t6156;
  double t6167;
  double t6483;
  double t6568;
  double t6581;
  double t6657;
  double t6660;
  double t6304;
  double t6878;
  double t6886;
  double t6926;
  double t6860;
  double t6930;
  double t6935;
  double t6938;
  double t6939;
  double t6940;
  double t7086;
  double t7089;
  t147 = Cos(var1[4]);
  t2884 = Cos(var1[15]);
  t2913 = -1.*t2884;
  t2924 = 1. + t2913;
  t2933 = -0.15121*t2924;
  t2935 = Sin(var1[15]);
  t1863 = Cos(var1[5]);
  t3924 = Sin(var1[5]);
  t4015 = Cos(var1[16]);
  t4129 = -1.*t147*t1863*t2935;
  t4131 = -1.*t2884*t147*t3924;
  t4134 = t4129 + t4131;
  t4177 = Cos(var1[17]);
  t4252 = Sin(var1[16]);
  t4253 = Sin(var1[17]);
  t3836 = -0.15121*t2935;
  t4127 = -1.*t4015;
  t4128 = 1. + t4127;
  t4171 = -0.28121*t4128*t4134;
  t4211 = -1.*t4177;
  t4212 = 1. + t4211;
  t4221 = -0.50321*t4015*t4212*t4134;
  t4254 = 0.50321*t4252*t4253*t4134;
  t4272 = -1.*t2884*t147*t1863;
  t4275 = t147*t2935*t3924;
  t4276 = t4272 + t4275;
  t4322 = -0.15121*t4276;
  t4359 = t4015*t4177*t4134;
  t4369 = t4252*t4253*t4134;
  t4371 = t4359 + t4369;
  t4372 = -0.19821*t4371;
  t4458 = Sin(var1[4]);
  t4482 = t2884*t147*t1863;
  t4485 = -1.*t147*t2935*t3924;
  t4522 = t4482 + t4485;
  t4477 = t4252*t4458;
  t4523 = t4015*t4522;
  t4527 = t4477 + t4523;
  t4538 = t4015*t4458;
  t4539 = -1.*t4252*t4522;
  t4554 = t4538 + t4539;
  t4689 = -1.*t4252*t4458;
  t4693 = -1.*t4015*t4522;
  t4697 = t4689 + t4693;
  t3917 = t2933 + t3836;
  t3076 = 0.15121*t2935;
  t3311 = t2933 + t3076;
  t4750 = -1.*t2884*t1863*t4458;
  t4752 = t2935*t4458*t3924;
  t4756 = t4750 + t4752;
  t4761 = t147*t4252;
  t4762 = t4015*t4756;
  t4766 = t4761 + t4762;
  t4770 = t4015*t147;
  t4774 = -1.*t4252*t4756;
  t4794 = t4770 + t4774;
  t4838 = Sin(var1[3]);
  t4865 = t2884*t147*t1863*t4838;
  t4870 = -1.*t147*t2935*t4838*t3924;
  t4891 = t4865 + t4870;
  t4897 = t4252*t4838*t4458;
  t4902 = t4015*t4891;
  t4903 = t4897 + t4902;
  t4906 = t4015*t4838*t4458;
  t4916 = -1.*t4252*t4891;
  t4919 = t4906 + t4916;
  t5003 = Cos(var1[3]);
  t4992 = -1.*t1863*t4838*t4458;
  t5004 = -1.*t5003*t3924;
  t5008 = t4992 + t5004;
  t5011 = t5003*t1863;
  t5012 = -1.*t4838*t4458*t3924;
  t5018 = t5011 + t5012;
  t5038 = t2935*t5008;
  t5059 = t2884*t5018;
  t5063 = t5038 + t5059;
  t4384 = -0.15121*t2884;
  t4386 = t4384 + t3836;
  t4391 = 0.15121*t2884;
  t4397 = t4391 + t3836;
  t5138 = t1863*t4838*t4458;
  t5145 = t5003*t3924;
  t5152 = t5138 + t5145;
  t5158 = -1.*t2935*t5152;
  t5167 = t5158 + t5059;
  t5088 = -1.*t2935*t5018;
  t5273 = t5003*t1863*t4458;
  t5288 = -1.*t4838*t3924;
  t5299 = t5273 + t5288;
  t5313 = -1.*t1863*t4838;
  t5322 = -1.*t5003*t4458*t3924;
  t5323 = t5313 + t5322;
  t5360 = t2884*t5299;
  t5369 = t2935*t5323;
  t5376 = t5360 + t5369;
  t5381 = -1.*t5003*t147*t4252;
  t5389 = t4015*t5376;
  t5399 = t5381 + t5389;
  t5409 = -1.*t4015*t5003*t147;
  t5413 = -1.*t4252*t5376;
  t5417 = t5409 + t5413;
  t5479 = t2884*t5152;
  t5489 = t2935*t5018;
  t5491 = t5479 + t5489;
  t5467 = -1.*t147*t4252*t4838;
  t5492 = t4015*t5491;
  t5495 = t5467 + t5492;
  t5510 = -1.*t4015*t147*t4838;
  t5514 = -1.*t4252*t5491;
  t5517 = t5510 + t5514;
  t5546 = t147*t4252*t4838;
  t5550 = -1.*t4015*t5491;
  t5557 = t5546 + t5550;
  t5651 = -1.*t2884*t5003*t147*t1863;
  t5656 = t5003*t147*t2935*t3924;
  t5660 = t5651 + t5656;
  t5662 = -1.*t5003*t4252*t4458;
  t5676 = t4015*t5660;
  t5681 = t5662 + t5676;
  t5698 = -1.*t4015*t5003*t4458;
  t5715 = -1.*t4252*t5660;
  t5730 = t5698 + t5715;
  t6093 = t1863*t4838;
  t6105 = t5003*t4458*t3924;
  t6118 = t6093 + t6105;
  t6150 = t2935*t5299;
  t6156 = t2884*t6118;
  t6167 = t6150 + t6156;
  t6483 = -1.*t5003*t1863*t4458;
  t6568 = t4838*t3924;
  t6581 = t6483 + t6568;
  t6657 = -1.*t2935*t6581;
  t6660 = t6657 + t6156;
  t6304 = -1.*t2935*t6118;
  t6878 = t2884*t6581;
  t6886 = t2935*t6118;
  t6926 = t6878 + t6886;
  t6860 = t5003*t147*t4252;
  t6930 = t4015*t6926;
  t6935 = t6860 + t6930;
  t6938 = t4015*t5003*t147;
  t6939 = -1.*t4252*t6926;
  t6940 = t6938 + t6939;
  t7086 = -1.*t4015*t6926;
  t7089 = t5381 + t7086;
  p_output1[0]=var2[0] + (0.28121*t147*t4252 - 1.*t1863*t3917*t4458 + t3311*t3924*t4458 - 0.15121*(t1863*t2935*t4458 + t2884*t3924*t4458) - 0.28121*t4128*t4756 - 0.50321*t4212*t4766 - 0.50321*t4253*t4794 - 0.19821*(t4177*t4766 - 1.*t4253*t4794))*var2[4] + (-1.*t147*t1863*t3311 - 1.*t147*t3917*t3924 + t4171 + t4221 + t4254 + t4322 + t4372)*var2[5] + (t4171 + t4221 + t4254 + t4322 + t4372 + t147*t1863*t4386 - 1.*t147*t3924*t4397)*var2[15] + (0.28121*t4015*t4458 - 0.28121*t4252*t4522 - 0.50321*t4212*t4554 - 0.50321*t4253*t4697 - 0.19821*(t4177*t4554 - 1.*t4253*t4697))*var2[16] + (-0.50321*t4253*t4527 - 0.50321*t4177*t4554 - 0.19821*(-1.*t4253*t4527 - 1.*t4177*t4554))*var2[17];
  p_output1[1]=var2[1] + (-0.28121*t147*t4252*t5003 + t3917*t5299 + t3311*t5323 - 0.15121*(-1.*t2935*t5299 + t2884*t5323) - 0.28121*t4128*t5376 - 0.50321*t4212*t5399 - 0.50321*t4253*t5417 - 0.19821*(t4177*t5399 - 1.*t4253*t5417))*var2[3] + (t147*t1863*t3917*t4838 - 1.*t147*t3311*t3924*t4838 + 0.28121*t4252*t4458*t4838 - 0.15121*(-1.*t147*t1863*t2935*t4838 - 1.*t147*t2884*t3924*t4838) - 0.28121*t4128*t4891 - 0.50321*t4212*t4903 - 0.50321*t4253*t4919 - 0.19821*(t4177*t4903 - 1.*t4253*t4919))*var2[4] + (t3311*t5008 + t3917*t5018 - 0.28121*t4128*t5063 - 0.50321*t4015*t4212*t5063 + 0.50321*t4252*t4253*t5063 - 0.19821*(t4015*t4177*t5063 + t4252*t4253*t5063) - 0.15121*(t2884*t5008 + t5088))*var2[5] + (t4397*t5018 + t4386*t5152 - 0.15121*(t5088 - 1.*t2884*t5152) - 0.28121*t4128*t5167 - 0.50321*t4015*t4212*t5167 + 0.50321*t4252*t4253*t5167 - 0.19821*(t4015*t4177*t5167 + t4252*t4253*t5167))*var2[15] + (-0.28121*t147*t4015*t4838 - 0.28121*t4252*t5491 - 0.50321*t4212*t5517 - 0.50321*t4253*t5557 - 0.19821*(t4177*t5517 - 1.*t4253*t5557))*var2[16] + (-0.50321*t4253*t5495 - 0.50321*t4177*t5517 - 0.19821*(-1.*t4253*t5495 - 1.*t4177*t5517))*var2[17];
  p_output1[2]=var2[2] + (-0.28121*t147*t4252*t4838 + t3311*t5018 + t3917*t5152 - 0.15121*t5167 - 0.28121*t4128*t5491 - 0.50321*t4212*t5495 - 0.50321*t4253*t5517 - 0.19821*(t4177*t5495 - 1.*t4253*t5517))*var2[3] + (-1.*t147*t1863*t3917*t5003 + t147*t3311*t3924*t5003 - 0.28121*t4252*t4458*t5003 - 0.15121*(t147*t1863*t2935*t5003 + t147*t2884*t3924*t5003) - 0.28121*t4128*t5660 - 0.50321*t4212*t5681 - 0.50321*t4253*t5730 - 0.19821*(t4177*t5681 - 1.*t4253*t5730))*var2[4] + (t3311*t5299 + t3917*t6118 - 0.28121*t4128*t6167 - 0.50321*t4015*t4212*t6167 + 0.50321*t4252*t4253*t6167 - 0.19821*(t4015*t4177*t6167 + t4252*t4253*t6167) - 0.15121*(t5360 + t6304))*var2[5] + (t4397*t6118 + t4386*t6581 - 0.15121*(t6304 - 1.*t2884*t6581) - 0.28121*t4128*t6660 - 0.50321*t4015*t4212*t6660 + 0.50321*t4252*t4253*t6660 - 0.19821*(t4015*t4177*t6660 + t4252*t4253*t6660))*var2[15] + (0.28121*t147*t4015*t5003 - 0.28121*t4252*t6926 - 0.50321*t4212*t6940 - 0.50321*t4253*t7089 - 0.19821*(t4177*t6940 - 1.*t4253*t7089))*var2[16] + (-0.50321*t4253*t6935 - 0.50321*t4177*t6940 - 0.19821*(-1.*t4253*t6935 - 1.*t4177*t6940))*var2[17];
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

#include "impact_velocity_RrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void impact_velocity_RrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
