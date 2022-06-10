/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:56:53 GMT+02:00
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
  double t9160;
  double t8391;
  double t12786;
  double t30187;
  double t17458;
  double t17459;
  double t31641;
  double t6773;
  double t17564;
  double t31882;
  double t31907;
  double t13078;
  double t32167;
  double t32171;
  double t32384;
  double t32161;
  double t39322;
  double t39336;
  double t32420;
  double t32437;
  double t32735;
  double t32866;
  double t33004;
  double t33010;
  double t35129;
  double t37369;
  double t37370;
  double t39337;
  double t39344;
  double t39350;
  double t39377;
  double t39379;
  double t39380;
  double t39385;
  double t39386;
  double t39415;
  double t39432;
  double t39434;
  double t39440;
  double t39464;
  double t39476;
  double t39528;
  double t31941;
  double t32850;
  double t32851;
  double t39583;
  double t39586;
  double t39591;
  double t39595;
  double t39597;
  double t39602;
  double t39603;
  double t39604;
  double t39606;
  double t9102;
  double t13365;
  double t13467;
  double t39581;
  double t39593;
  double t39607;
  double t39609;
  double t39615;
  double t39616;
  double t39619;
  double t39621;
  double t39622;
  double t39628;
  double t39577;
  double t39578;
  double t39579;
  double t39580;
  double t39610;
  double t39612;
  double t39649;
  double t39658;
  double t39670;
  double t39680;
  double t39686;
  double t39694;
  double t39613;
  double t39635;
  double t39637;
  double t39674;
  double t39698;
  double t39736;
  double t40196;
  double t40869;
  double t40870;
  double t32856;
  double t39259;
  double t39293;
  double t39641;
  double t41075;
  double t41346;
  double t43179;
  double t43193;
  double t43202;
  double t45191;
  double t45198;
  double t43218;
  double t43246;
  double t45118;
  double t43308;
  double t45394;
  double t45383;
  t9160 = Cos(var1[15]);
  t8391 = Sin(var1[4]);
  t12786 = Cos(var1[4]);
  t30187 = Cos(var1[16]);
  t17458 = Cos(var1[17]);
  t17459 = Sin(var1[16]);
  t31641 = Sin(var1[17]);
  t6773 = Sin(var1[15]);
  t17564 = t17458*t17459;
  t31882 = -1.*t30187*t31641;
  t31907 = t17564 + t31882;
  t13078 = Sin(var1[5]);
  t32167 = t30187*t17458;
  t32171 = t17459*t31641;
  t32384 = t32167 + t32171;
  t32161 = Cos(var1[5]);
  t39322 = Cos(var1[3]);
  t39336 = Sin(var1[3]);
  t32420 = t32161*t32384;
  t32437 = t6773*t31907*t13078;
  t32735 = t32420 + t32437;
  t32866 = -1.*t17458*t17459;
  t33004 = t30187*t31641;
  t33010 = t32866 + t33004;
  t35129 = t32161*t33010;
  t37369 = t6773*t32384*t13078;
  t37370 = t35129 + t37369;
  t39337 = t12786*t6773;
  t39344 = t9160*t8391*t13078;
  t39350 = t39337 + t39344;
  t39377 = -1.*t32161*t6773*t31907;
  t39379 = t32384*t13078;
  t39380 = t39377 + t39379;
  t39385 = t9160*t12786*t31907;
  t39386 = -1.*t8391*t32735;
  t39415 = t39385 + t39386;
  t39432 = -1.*t32161*t6773*t32384;
  t39434 = t33010*t13078;
  t39440 = t39432 + t39434;
  t39464 = t9160*t12786*t32384;
  t39476 = -1.*t8391*t37370;
  t39528 = t39464 + t39476;
  t31941 = t9160*t31907*t8391;
  t32850 = t12786*t32735;
  t32851 = t31941 + t32850;
  t39583 = -0.0641*t17458;
  t39586 = -0.28*t31641;
  t39591 = t39583 + t39586;
  t39595 = -1.*t17458;
  t39597 = 1. + t39595;
  t39602 = -0.575*t39597;
  t39603 = -0.295*t17458;
  t39604 = -0.0641*t31641;
  t39606 = t39602 + t39603 + t39604;
  t9102 = t6773*t8391;
  t13365 = -1.*t9160*t12786*t13078;
  t13467 = t9102 + t13365;
  t39581 = 0.325*t17459;
  t39593 = t30187*t39591;
  t39607 = t17459*t39606;
  t39609 = t39581 + t39593 + t39607;
  t39615 = -1.*t30187;
  t39616 = 1. + t39615;
  t39619 = -0.325*t39616;
  t39621 = -1.*t17459*t39591;
  t39622 = t30187*t39606;
  t39628 = t39619 + t39621 + t39622;
  t39577 = -1.*t9160;
  t39578 = 1. + t39577;
  t39579 = -0.1575*t39578;
  t39580 = -0.2255*t9160;
  t39610 = -1.*t6773*t39609;
  t39612 = t39579 + t39580 + t39610;
  t39649 = -0.068*t6773;
  t39658 = t9160*t39609;
  t39670 = t39649 + t39658;
  t39680 = t32161*t39628;
  t39686 = -1.*t39612*t13078;
  t39694 = t39680 + t39686;
  t39613 = t32161*t39612;
  t39635 = t39628*t13078;
  t39637 = t39613 + t39635;
  t39674 = t39670*t8391;
  t39698 = t12786*t39694;
  t39736 = t39674 + t39698;
  t40196 = t12786*t39670;
  t40869 = -1.*t8391*t39694;
  t40870 = t40196 + t40869;
  t32856 = t9160*t32384*t8391;
  t39259 = t12786*t37370;
  t39293 = t32856 + t39259;
  t39641 = t9160*t32161*t39637;
  t41075 = -1.*t39637*t39380;
  t41346 = t39637*t39380;
  t43179 = -1.*t39637*t39440;
  t43193 = -1.*t9160*t32161*t39637;
  t43202 = t39637*t39440;
  t45191 = -1.*t6773*t39670;
  t45198 = t9160*t39670*t32384;
  t43218 = t6773*t39670;
  t43246 = -1.*t9160*t39670*t31907;
  t45118 = -1.*t9160*t39670*t32384;
  t43308 = t9160*t39670*t31907;
  t45394 = t39628*t32384;
  t45383 = -1.*t39628*t33010;
  p_output1[0]=t32851*var2[0] + t13467*var2[1] + t39293*var2[2];
  p_output1[1]=(t39322*t39380 - 1.*t39336*t39415)*var2[0] + (-1.*t39336*t39350 + t32161*t39322*t9160)*var2[1] + (t39322*t39440 - 1.*t39336*t39528)*var2[2];
  p_output1[2]=(t39336*t39380 + t39322*t39415)*var2[0] + (t39322*t39350 + t32161*t39336*t9160)*var2[1] + (t39336*t39440 + t39322*t39528)*var2[2];
  p_output1[3]=(t39293*(-1.*t13467*t39736 - 1.*t39350*t40870 + t43193) + t13467*(t39293*t39736 + t39528*t40870 + t43202))*var2[0] + (t39293*(t32851*t39736 + t39415*t40870 + t41346) + t32851*(-1.*t39293*t39736 - 1.*t39528*t40870 + t43179))*var2[1] + (t32851*(t39641 + t13467*t39736 + t39350*t40870) + t13467*(-1.*t32851*t39736 - 1.*t39415*t40870 + t41075))*var2[2];
  p_output1[4]=(t32161*(t37370*t39694 + t43202 + t45198)*t9160 + t39440*(t43193 + t45191 + t13078*t39694*t9160))*var2[0] + (t39440*(t32735*t39694 + t41346 + t43308) + t39380*(-1.*t37370*t39694 + t43179 + t45118))*var2[1] + (t32161*(-1.*t32735*t39694 + t41075 + t43246)*t9160 + t39380*(t39641 + t43218 - 1.*t13078*t39694*t9160))*var2[2];
  p_output1[5]=(t6773*(t33010*t39628 + t45198 - 1.*t32384*t39612*t6773) + t32384*t9160*(t45191 - 1.*t39612*t9160))*var2[0] + (t32384*(t43308 + t45394 - 1.*t31907*t39612*t6773)*t9160 + t31907*(t45118 + t45383 + t32384*t39612*t6773)*t9160)*var2[1] + (t6773*(-1.*t32384*t39628 + t43246 + t31907*t39612*t6773) + t31907*t9160*(t43218 + t39612*t9160))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(0.1575*t31907 + 0.2255*t33010)*var2[0] + (t32384*(-1.*t32384*t39609 + t45383) + t33010*(t31907*t39609 + t45394))*var2[1] - 0.068*t32384*var2[2];
  p_output1[16]=(-0.325*t31641 - 1.*t17458*t39591 - 1.*t31641*t39606)*var2[0] + (0.325*t17458 - 1.*t31641*t39591 + t17458*t39606)*var2[2];
  p_output1[17]=-0.0641*var2[0] - 0.28*var2[2];
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

#include "fRrFoot_vec_ParallelImpact.hh"

namespace SymFunction
{

void fRrFoot_vec_ParallelImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
