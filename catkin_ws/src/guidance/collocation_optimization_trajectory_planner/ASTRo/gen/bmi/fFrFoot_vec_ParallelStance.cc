/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:49:41 GMT+02:00
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
  double t1015;
  double t2609;
  double t1951;
  double t3934;
  double t4221;
  double t3640;
  double t4333;
  double t1962;
  double t4551;
  double t4799;
  double t4929;
  double t2680;
  double t4517;
  double t4183;
  double t4515;
  double t4516;
  double t2261;
  double t2857;
  double t2970;
  double t5084;
  double t5079;
  double t4943;
  double t4949;
  double t4952;
  double t5008;
  double t5035;
  double t5039;
  double t5042;
  double t5047;
  double t5049;
  double t5086;
  double t5095;
  double t5098;
  double t5124;
  double t5129;
  double t5132;
  double t5150;
  double t5152;
  double t5156;
  double t5172;
  double t5174;
  double t5186;
  double t5197;
  double t5208;
  double t5210;
  double t4520;
  double t4958;
  double t4970;
  double t5344;
  double t5365;
  double t5387;
  double t5390;
  double t5393;
  double t5395;
  double t5419;
  double t5446;
  double t5449;
  double t5450;
  double t5453;
  double t5456;
  double t5463;
  double t5480;
  double t5486;
  double t5496;
  double t5369;
  double t5374;
  double t5383;
  double t5469;
  double t5475;
  double t5506;
  double t5507;
  double t5511;
  double t5515;
  double t5518;
  double t5519;
  double t5523;
  double t5478;
  double t5499;
  double t5500;
  double t5517;
  double t5526;
  double t5528;
  double t5536;
  double t5548;
  double t5554;
  double t5041;
  double t5056;
  double t5066;
  double t5504;
  double t5569;
  double t5611;
  double t5639;
  double t5689;
  double t5705;
  double t5801;
  double t5809;
  t1015 = Cos(var1[4]);
  t2609 = Cos(var1[12]);
  t1951 = Cos(var1[5]);
  t3934 = Cos(var1[14]);
  t4221 = Sin(var1[13]);
  t3640 = Cos(var1[13]);
  t4333 = Sin(var1[14]);
  t1962 = Sin(var1[12]);
  t4551 = t3934*t4221;
  t4799 = -1.*t3640*t4333;
  t4929 = t4551 + t4799;
  t2680 = Sin(var1[5]);
  t4517 = Sin(var1[4]);
  t4183 = t3640*t3934;
  t4515 = t4221*t4333;
  t4516 = t4183 + t4515;
  t2261 = -1.*t1951*t1962;
  t2857 = -1.*t2609*t2680;
  t2970 = t2261 + t2857;
  t5084 = Cos(var1[3]);
  t5079 = Sin(var1[3]);
  t4943 = t2609*t1951*t4929;
  t4949 = -1.*t1962*t4929*t2680;
  t4952 = t4943 + t4949;
  t5008 = -1.*t3934*t4221;
  t5035 = t3640*t4333;
  t5039 = t5008 + t5035;
  t5042 = t2609*t1951*t4516;
  t5047 = -1.*t1962*t4516*t2680;
  t5049 = t5042 + t5047;
  t5086 = t2609*t1951;
  t5095 = -1.*t1962*t2680;
  t5098 = t5086 + t5095;
  t5124 = t1951*t1962*t4929;
  t5129 = t2609*t4929*t2680;
  t5132 = t5124 + t5129;
  t5150 = t1015*t4516;
  t5152 = -1.*t4517*t4952;
  t5156 = t5150 + t5152;
  t5172 = t1951*t1962*t4516;
  t5174 = t2609*t4516*t2680;
  t5186 = t5172 + t5174;
  t5197 = t1015*t5039;
  t5208 = -1.*t4517*t5049;
  t5210 = t5197 + t5208;
  t4520 = t4516*t4517;
  t4958 = t1015*t4952;
  t4970 = t4520 + t4958;
  t5344 = -1.*t2609;
  t5365 = 1. + t5344;
  t5387 = -1.*t3640;
  t5390 = 1. + t5387;
  t5393 = 0.28121*t5390;
  t5395 = -1.*t3934;
  t5419 = 1. + t5395;
  t5446 = 0.50321*t5419;
  t5449 = 0.19821*t3934;
  t5450 = t5446 + t5449;
  t5453 = t3640*t5450;
  t5456 = -0.305*t4221*t4333;
  t5463 = t5393 + t5453 + t5456;
  t5480 = 0.15121*t5365;
  t5486 = t2609*t5463;
  t5496 = t5480 + t5486;
  t5369 = -0.15121*t5365;
  t5374 = -0.15121*t2609;
  t5383 = -0.15121*t1962;
  t5469 = t1962*t5463;
  t5475 = t5369 + t5374 + t5383 + t5469;
  t5506 = 0.28121*t4221;
  t5507 = -1.*t5450*t4221;
  t5511 = -0.305*t3640*t4333;
  t5515 = t5506 + t5507 + t5511;
  t5518 = t1951*t5496;
  t5519 = -1.*t5475*t2680;
  t5523 = t5518 + t5519;
  t5478 = t1951*t5475;
  t5499 = t5496*t2680;
  t5500 = t5478 + t5499;
  t5517 = t5515*t4517;
  t5526 = t1015*t5523;
  t5528 = t5517 + t5526;
  t5536 = t1015*t5515;
  t5548 = -1.*t4517*t5523;
  t5554 = t5536 + t5548;
  t5041 = t5039*t4517;
  t5056 = t1015*t5049;
  t5066 = t5041 + t5056;
  t5504 = -1.*t5098*t5500;
  t5569 = t5132*t5500;
  t5611 = t5098*t5500;
  t5639 = -1.*t5186*t5500;
  t5689 = -1.*t5132*t5500;
  t5705 = t5186*t5500;
  t5801 = -1.*t5515*t4516;
  t5809 = t5515*t5039;
  p_output1[0]=t5066*var2[0] + t1015*t2970*var2[1] + t4970*var2[2];
  p_output1[1]=(t5084*t5186 - 1.*t5079*t5210)*var2[0] + (t2970*t4517*t5079 + t5084*t5098)*var2[1] + (t5084*t5132 - 1.*t5079*t5156)*var2[2];
  p_output1[2]=(t5079*t5186 + t5084*t5210)*var2[0] + (-1.*t2970*t4517*t5084 + t5079*t5098)*var2[1] + (t5079*t5132 + t5084*t5156)*var2[2];
  p_output1[3]=(t4970*(t5504 - 1.*t1015*t2970*t5528 + t2970*t4517*t5554) + t1015*t2970*(t4970*t5528 + t5156*t5554 + t5569))*var2[0] + (t5066*(-1.*t4970*t5528 - 1.*t5156*t5554 + t5689) + t4970*(t5066*t5528 + t5210*t5554 + t5705))*var2[1] + (t5066*(t1015*t2970*t5528 - 1.*t2970*t4517*t5554 + t5611) + t1015*t2970*(-1.*t5066*t5528 - 1.*t5210*t5554 + t5639))*var2[2];
  p_output1[4]=(t5132*(t5504 - 1.*t2970*t5523) + t5098*(t4516*t5515 + t4952*t5523 + t5569))*var2[0] + (t5186*(-1.*t4952*t5523 + t5689 + t5801) + t5132*(t5049*t5523 + t5705 + t5809))*var2[1] + (t5186*(t2970*t5523 + t5611) + t5098*(-1.*t5039*t5515 - 1.*t5049*t5523 + t5639))*var2[2];
  p_output1[5]=t4516*(-1.*t2609*t5475 + t1962*t5496)*var2[0] + (t5039*(-1.*t1962*t4929*t5475 - 1.*t2609*t4929*t5496 + t5801) + t4516*(t1962*t4516*t5475 + t2609*t4516*t5496 + t5809))*var2[1] + t5039*(t2609*t5475 - 1.*t1962*t5496)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-0.15121 + t5039*(-1.*t4929*t5463 + t5801) + t4516*(t4516*t5463 + t5809))*var2[1] + (-0.15121*t4929 - 0.15121*t5039)*var2[2];
  p_output1[13]=(0.28121*t4333 - 0.305*t3934*t4333 - 1.*t4333*t5450)*var2[0] + (0.28121*t3934 + 0.305*Power(t4333,2) - 1.*t3934*t5450)*var2[2];
  p_output1[14]=-0.305*var2[2];
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

#include "fFrFoot_vec_ParallelStance.hh"

namespace SymFunction
{

void fFrFoot_vec_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
