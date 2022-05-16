/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:41:27 GMT+02:00
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
  double t2407;
  double t786;
  double t1646;
  double t2684;
  double t3105;
  double t3120;
  double t3136;
  double t3036;
  double t3448;
  double t3026;
  double t3523;
  double t3017;
  double t1669;
  double t2847;
  double t2889;
  double t2907;
  double t3179;
  double t3543;
  double t3562;
  double t3796;
  double t3776;
  double t3783;
  double t3785;
  double t3756;
  double t3809;
  double t3831;
  double t3870;
  double t4334;
  double t4348;
  double t4405;
  double t4437;
  double t4524;
  double t4532;
  double t5161;
  double t5500;
  double t5565;
  double t5615;
  double t5648;
  double t5658;
  double t5904;
  double t5915;
  double t5924;
  double t5926;
  double t4363;
  double t4391;
  double t4396;
  double t5905;
  double t5911;
  double t5994;
  double t6009;
  double t21469;
  double t41304;
  double t51184;
  double t52187;
  double t52284;
  double t52683;
  double t52692;
  double t52704;
  double t5914;
  double t5927;
  double t5946;
  double t3926;
  double t3927;
  double t4076;
  double t4089;
  double t4102;
  double t4109;
  double t4112;
  double t4177;
  double t4227;
  double t52538;
  double t52739;
  double t52755;
  double t54260;
  double t54262;
  double t54263;
  double t54277;
  double t54278;
  double t54280;
  double t4250;
  double t4261;
  double t4325;
  double t5990;
  double t54281;
  double t2965;
  double t3566;
  double t3627;
  double t54284;
  double t54285;
  double t54286;
  double t54360;
  double t54400;
  double t54413;
  double t54428;
  double t54484;
  double t54501;
  t2407 = Cos(var1[10]);
  t786 = Cos(var1[11]);
  t1646 = Sin(var1[10]);
  t2684 = Sin(var1[11]);
  t3105 = -1.*t2407*t786;
  t3120 = -1.*t1646*t2684;
  t3136 = t3105 + t3120;
  t3036 = Cos(var1[5]);
  t3448 = Sin(var1[9]);
  t3026 = Cos(var1[9]);
  t3523 = Sin(var1[5]);
  t3017 = Cos(var1[4]);
  t1669 = -1.*t786*t1646;
  t2847 = t2407*t2684;
  t2889 = t1669 + t2847;
  t2907 = Sin(var1[4]);
  t3179 = t3026*t3036*t3136;
  t3543 = -1.*t3448*t3136*t3523;
  t3562 = t3179 + t3543;
  t3796 = Sin(var1[3]);
  t3776 = t3036*t3448*t3136;
  t3783 = t3026*t3136*t3523;
  t3785 = t3776 + t3783;
  t3756 = Cos(var1[3]);
  t3809 = t3017*t2889;
  t3831 = -1.*t2907*t3562;
  t3870 = t3809 + t3831;
  t4334 = -1.*t3026;
  t4348 = 1. + t4334;
  t4405 = -1.*t2407;
  t4437 = 1. + t4405;
  t4524 = -0.28121*t4437;
  t4532 = -1.*t786;
  t5161 = 1. + t4532;
  t5500 = -0.50321*t5161;
  t5565 = -0.23321*t786;
  t5615 = t5500 + t5565;
  t5648 = t2407*t5615;
  t5658 = 0.27*t1646*t2684;
  t5904 = t4524 + t5648 + t5658;
  t5915 = -0.15121*t4348;
  t5924 = t3026*t5904;
  t5926 = t5915 + t5924;
  t4363 = 0.15121*t4348;
  t4391 = 0.15121*t3026;
  t4396 = 0.15121*t3448;
  t5905 = t3448*t5904;
  t5911 = t4363 + t4391 + t4396 + t5905;
  t5994 = t3036*t3448;
  t6009 = t3026*t3523;
  t21469 = t5994 + t6009;
  t41304 = 0.28121*t1646;
  t51184 = t5615*t1646;
  t52187 = -0.27*t2407*t2684;
  t52284 = t41304 + t51184 + t52187;
  t52683 = t3036*t5926;
  t52692 = -1.*t5911*t3523;
  t52704 = t52683 + t52692;
  t5914 = t3036*t5911;
  t5927 = t5926*t3523;
  t5946 = t5914 + t5927;
  t3926 = t2407*t786;
  t3927 = t1646*t2684;
  t4076 = t3926 + t3927;
  t4089 = t4076*t2907;
  t4102 = t3026*t3036*t2889;
  t4109 = -1.*t3448*t2889*t3523;
  t4112 = t4102 + t4109;
  t4177 = t3017*t4112;
  t4227 = t4089 + t4177;
  t52538 = t52284*t2907;
  t52739 = t3017*t52704;
  t52755 = t52538 + t52739;
  t54260 = t3017*t52284;
  t54262 = -1.*t2907*t52704;
  t54263 = t54260 + t54262;
  t54277 = t3036*t3448*t2889;
  t54278 = t3026*t2889*t3523;
  t54280 = t54277 + t54278;
  t4250 = -1.*t3026*t3036;
  t4261 = t3448*t3523;
  t4325 = t4250 + t4261;
  t5990 = -1.*t4325*t5946;
  t54281 = t54280*t5946;
  t2965 = t2889*t2907;
  t3566 = t3017*t3562;
  t3627 = t2965 + t3566;
  t54284 = t3017*t4076;
  t54285 = -1.*t2907*t4112;
  t54286 = t54284 + t54285;
  t54360 = -1.*t54280*t5946;
  t54400 = t3785*t5946;
  t54413 = -1.*t52284*t4076;
  t54428 = t52284*t2889;
  t54484 = t4325*t5946;
  t54501 = -1.*t3785*t5946;
  p_output1[0]=t3627;
  p_output1[1]=t3756*t3785 - 1.*t3796*t3870;
  p_output1[2]=t3785*t3796 + t3756*t3870;
  p_output1[3]=t21469*t3017*(t4227*t52755 + t54281 + t54263*t54286) + t4227*(-1.*t21469*t3017*t52755 + t21469*t2907*t54263 + t5990);
  p_output1[4]=t4325*(t4076*t52284 + t4112*t52704 + t54281) + t54280*(-1.*t21469*t52704 + t5990);
  p_output1[5]=t4076*(t3026*t5911 - 1.*t3448*t5926);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.15121*t3136 + 0.15121*t4076;
  p_output1[10]=0.28121*t2684 + t2684*t5615 - 0.27*t2684*t786;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t21469*t3017;
  p_output1[19]=t21469*t2907*t3796 + t3756*t4325;
  p_output1[20]=-1.*t21469*t2907*t3756 + t3796*t4325;
  p_output1[21]=t3627*(-1.*t4227*t52755 - 1.*t54263*t54286 + t54360) + t4227*(t3627*t52755 + t3870*t54263 + t54400);
  p_output1[22]=t3785*(-1.*t4112*t52704 + t54360 + t54413) + t54280*(t3562*t52704 + t54400 + t54428);
  p_output1[23]=t2889*(t54413 - 1.*t2889*t3448*t5911 - 1.*t2889*t3026*t5926) + t4076*(t54428 + t3136*t3448*t5911 + t3026*t3136*t5926);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.15121 + t2889*(t54413 - 1.*t2889*t5904) + t4076*(t54428 + t3136*t5904);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t4227;
  p_output1[37]=t3756*t54280 - 1.*t3796*t54286;
  p_output1[38]=t3796*t54280 + t3756*t54286;
  p_output1[39]=t3627*(t21469*t3017*t52755 - 1.*t21469*t2907*t54263 + t54484) + t21469*t3017*(-1.*t3627*t52755 - 1.*t3870*t54263 + t54501);
  p_output1[40]=t3785*(t21469*t52704 + t54484) + t4325*(-1.*t2889*t52284 - 1.*t3562*t52704 + t54501);
  p_output1[41]=t2889*(-1.*t3026*t5911 + t3448*t5926);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0.27*Power(t2684,2) + 0.28121*t786 + t5615*t786;
  p_output1[47]=-0.27;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fRlFoot_map_ParallelImpact2.hh"

namespace SymFunction
{

void fRlFoot_map_ParallelImpact2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
