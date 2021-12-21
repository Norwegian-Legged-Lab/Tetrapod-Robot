/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 22:33:10 GMT+01:00
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
  double t598;
  double t625;
  double t851;
  double t196;
  double t248;
  double t327;
  double t413;
  double t468;
  double t494;
  double t1807;
  double t1327;
  double t1331;
  double t1813;
  double t1348;
  double t1349;
  double t1692;
  double t1852;
  double t1864;
  double t2035;
  double t2088;
  double t2475;
  double t2601;
  double t2643;
  double t2645;
  double t2648;
  double t2660;
  double t2692;
  double t2696;
  double t2716;
  double t2720;
  double t2722;
  double t2745;
  double t2748;
  double t2772;
  double t2776;
  double t2780;
  double t2881;
  double t716;
  double t830;
  double t3259;
  double t3267;
  double t3366;
  double t2306;
  double t2339;
  double t2682;
  double t2764;
  double t2921;
  double t2998;
  double t3925;
  double t3937;
  double t3958;
  double t3966;
  double t3982;
  double t3825;
  double t3833;
  double t3834;
  double t3846;
  double t3865;
  double t3881;
  double t3902;
  double t3410;
  double t3564;
  double t3581;
  double t3585;
  double t3595;
  double t3601;
  double t3633;
  double t3977;
  double t4008;
  double t4009;
  double t4086;
  double t4872;
  double t4888;
  double t4928;
  double t4956;
  double t4958;
  double t5031;
  double t5039;
  double t521;
  double t1047;
  double t1178;
  double t1192;
  double t1388;
  double t1428;
  double t1474;
  double t5254;
  double t5249;
  double t3725;
  double t3820;
  double t3822;
  double t1862;
  double t2176;
  double t2269;
  double t5517;
  double t5518;
  double t5519;
  double t3667;
  double t4690;
  double t5523;
  double t5538;
  double t5539;
  double t5545;
  double t4166;
  double t4430;
  double t4580;
  double t4588;
  double t4635;
  double t4645;
  double t4646;
  double t4647;
  double t5573;
  double t5574;
  double t5578;
  double t5638;
  double t5353;
  double t5252;
  double t5255;
  double t5263;
  double t5248;
  double t5383;
  double t5441;
  double t5451;
  double t5233;
  double t5192;
  double t5210;
  double t5216;
  double t5218;
  double t5168;
  double t5268;
  double t5463;
  double t5465;
  double t5891;
  double t5874;
  double t5883;
  double t5885;
  double t5870;
  double t5896;
  double t5900;
  double t5921;
  double t5552;
  double t5553;
  double t5565;
  double t5505;
  double t5507;
  double t5513;
  double t5693;
  double t5695;
  double t5701;
  double t5759;
  double t5783;
  double t5789;
  double t6054;
  double t6071;
  double t6076;
  double t6016;
  double t6017;
  double t6038;
  double t6077;
  double t6080;
  double t6083;
  double t6088;
  double t6089;
  double t6090;
  double t6084;
  double t5967;
  double t5989;
  double t6010;
  double t6093;
  double t6098;
  double t6099;
  double t6219;
  double t6222;
  double t6223;
  double t6102;
  double t6233;
  double t6235;
  double t6239;
  double t6252;
  double t6258;
  double t6259;
  double t6199;
  double t6200;
  double t6216;
  double t6567;
  double t6578;
  double t6581;
  double t6589;
  double t6593;
  double t6594;
  double t6596;
  double t6443;
  double t6497;
  double t6268;
  double t6269;
  double t6270;
  double t6708;
  double t6136;
  double t6168;
  double t6187;
  double t5220;
  double t5471;
  double t5472;
  double t6747;
  double t6979;
  double t6983;
  double t6989;
  double t6990;
  double t6998;
  double t6999;
  double t7001;
  double t7002;
  double t6862;
  double t6880;
  double t7094;
  double t7109;
  t598 = Cos(var1[7]);
  t625 = -1. + t598;
  t851 = Sin(var1[8]);
  t196 = Cos(var1[8]);
  t248 = -1.*t196;
  t327 = 1. + t248;
  t413 = -1.000000000016*t327;
  t468 = 1. + t413;
  t494 = Sin(var1[7]);
  t1807 = -1. + t196;
  t1327 = -1.*t598;
  t1331 = 1. + t1327;
  t1813 = 1.6e-11*t1807;
  t1348 = -1.000000000016*t1331;
  t1349 = 1. + t1348;
  t1692 = 1.6e-11*t327;
  t1852 = 1. + t1692 + t1813;
  t1864 = 4.e-6*t1807;
  t2035 = -4.e-6*t196;
  t2088 = t1864 + t2035;
  t2475 = 5.136e-14*var1[8];
  t2601 = -0.03874900000062*t327;
  t2643 = 5.9484e-7*t1807;
  t2645 = -0.03875*t196;
  t2648 = -0.299999999992*t851;
  t2660 = t2475 + t2601 + t2643 + t2645 + t2648;
  t2692 = -1.284e-8*var1[8];
  t2696 = 1. + t1813;
  t2716 = 0.14871*t2696;
  t2720 = -1.5499600000248e-7*t327;
  t2722 = -1.55e-7*t1807;
  t2745 = -1.199999999968e-6*t851;
  t2748 = t2692 + t2716 + t2720 + t2722 + t2745;
  t2772 = 0.80321*t468;
  t2776 = 0.503210000016051*t327;
  t2780 = -4.05159380016e-7*t851;
  t2881 = t2772 + t2776 + t2780;
  t716 = 1.6e-11*t625;
  t830 = 1. + t716;
  t3259 = 4.e-6*t625*t1852;
  t3267 = t598*t2088;
  t3366 = t3259 + t3267;
  t2306 = 0.281210000008499*t1331;
  t2339 = 0.03874900000062*t494;
  t2682 = t494*t2660;
  t2764 = 4.e-6*t494*t2748;
  t2921 = t1349*t2881;
  t2998 = t2306 + t2339 + t2682 + t2764 + t2921;
  t3925 = -1. + t1692;
  t3937 = 4.e-6*t3925;
  t3958 = 4.e-6*t327;
  t3966 = t3937 + t3958;
  t3982 = t1692 + t248;
  t3825 = -1.2484e-7*var1[7];
  t3833 = -1.5499600000248e-7*t1331;
  t3834 = 1.124840000016e-6*t494;
  t3846 = 4.e-6*t625*t2660;
  t3865 = t830*t2748;
  t3881 = -4.e-6*t494*t2881;
  t3902 = t3825 + t3833 + t3834 + t3846 + t3865 + t3881;
  t3410 = 4.9936e-13*var1[7];
  t3564 = -0.03874900000062*t1331;
  t3581 = 0.281210000004*t494;
  t3585 = t598*t2660;
  t3595 = 4.e-6*t625*t2748;
  t3601 = -1.*t494*t2881;
  t3633 = t3410 + t3564 + t3581 + t3585 + t3595 + t3601;
  t3977 = 4.e-6*t625*t3966;
  t4008 = t598*t3982;
  t4009 = 1.000000000016*t494*t851;
  t4086 = t3977 + t4008 + t4009;
  t4872 = t2088*t2660;
  t4888 = t1852*t2748;
  t4928 = t4872 + t4888;
  t4956 = -1.*t3982*t2660;
  t4958 = -1.*t3966*t2748;
  t5031 = 1.000000000016*t2881*t851;
  t5039 = t4956 + t4958 + t5031;
  t521 = -4.e-6*t468*t494;
  t1047 = -4.e-6*t830*t851;
  t1178 = -4.e-6*t625*t851;
  t1192 = t521 + t1047 + t1178;
  t1388 = t1349*t468;
  t1428 = -1.000000000016*t494*t851;
  t1474 = t1388 + t1428;
  t5254 = Cos(var1[6]);
  t5249 = Sin(var1[6]);
  t3725 = t830*t1852;
  t3820 = 4.e-6*t625*t2088;
  t3822 = t3725 + t3820;
  t1862 = 4.e-6*t1852*t494;
  t2176 = t2088*t494;
  t2269 = t1862 + t2176;
  t5517 = -1.*t5254;
  t5518 = 1. + t5517;
  t5519 = 0.15121*t5518;
  t3667 = t3366*t3633;
  t4690 = -1.*t3633*t4086;
  t5523 = -0.15121*t5249;
  t5538 = t5249*t2998;
  t5539 = t5254*t3902;
  t5545 = t5519 + t5523 + t5538 + t5539;
  t4166 = 4.e-6*t3966*t494;
  t4430 = t3982*t494;
  t4580 = -1.000000000016*t1349*t851;
  t4588 = t4166 + t4430 + t4580;
  t4635 = t830*t3966;
  t4645 = 4.e-6*t625*t3982;
  t4646 = 4.000000000064e-6*t494*t851;
  t4647 = t4635 + t4645 + t4646;
  t5573 = 0.15121*t5249;
  t5574 = t5254*t2998;
  t5578 = -1.*t5249*t3902;
  t5638 = t5519 + t5573 + t5574 + t5578;
  t5353 = Sin(var1[5]);
  t5252 = -1.*t5249*t1192;
  t5255 = t5254*t1474;
  t5263 = t5252 + t5255;
  t5248 = Cos(var1[5]);
  t5383 = t5254*t1192;
  t5441 = t5249*t1474;
  t5451 = t5383 + t5441;
  t5233 = Cos(var1[4]);
  t5192 = -1.*t468*t494;
  t5210 = -1.6e-11*t625*t851;
  t5216 = -1.*t598*t851;
  t5218 = t5192 + t5210 + t5216;
  t5168 = Sin(var1[4]);
  t5268 = t5248*t5263;
  t5463 = -1.*t5353*t5451;
  t5465 = t5268 + t5463;
  t5891 = Cos(var1[3]);
  t5874 = t5353*t5263;
  t5883 = t5248*t5451;
  t5885 = t5874 + t5883;
  t5870 = Sin(var1[3]);
  t5896 = t5233*t5218;
  t5900 = -1.*t5168*t5465;
  t5921 = t5896 + t5900;
  t5552 = -1.*t3822*t5249;
  t5553 = t5254*t2269;
  t5565 = t5552 + t5553;
  t5505 = t5254*t3822;
  t5507 = t5249*t2269;
  t5513 = t5505 + t5507;
  t5693 = t5249*t4588;
  t5695 = t5254*t4647;
  t5701 = t5693 + t5695;
  t5759 = t5254*t4588;
  t5783 = -1.*t5249*t4647;
  t5789 = t5759 + t5783;
  t6054 = t5353*t5565;
  t6071 = t5248*t5513;
  t6076 = t6054 + t6071;
  t6016 = -1.*t5353*t5545;
  t6017 = t5248*t5638;
  t6038 = t6016 + t6017;
  t6077 = t5248*t5545;
  t6080 = t5353*t5638;
  t6083 = t6077 + t6080;
  t6088 = t5248*t5701;
  t6089 = t5353*t5789;
  t6090 = t6088 + t6089;
  t6084 = t6076*t6083;
  t5967 = t5248*t5565;
  t5989 = -1.*t5353*t5513;
  t6010 = t5967 + t5989;
  t6093 = -1.*t5353*t5701;
  t6098 = t5248*t5789;
  t6099 = t6093 + t6098;
  t6219 = t3366*t5168;
  t6222 = t5233*t6010;
  t6223 = t6219 + t6222;
  t6102 = -1.*t6083*t6090;
  t6233 = t5233*t6038;
  t6235 = t5168*t3633;
  t6239 = t6233 + t6235;
  t6252 = t5168*t4086;
  t6258 = t5233*t6099;
  t6259 = t6252 + t6258;
  t6199 = -1.*t5168*t6038;
  t6200 = t5233*t3633;
  t6216 = t6199 + t6200;
  t6567 = -1.*t2088*t2660;
  t6578 = -1.*t1852*t2748;
  t6581 = t6567 + t6578;
  t6589 = t468*t2881;
  t6593 = -1.*t2660*t851;
  t6594 = -4.e-6*t2748*t851;
  t6596 = t6589 + t6593 + t6594;
  t6443 = -1.*t3366*t3633;
  t6497 = t3633*t5218;
  t6268 = t5233*t4086;
  t6269 = -1.*t5168*t6099;
  t6270 = t6268 + t6269;
  t6708 = -1.*t6076*t6083;
  t6136 = t5233*t3366;
  t6168 = -1.*t5168*t6010;
  t6187 = t6136 + t6168;
  t5220 = t5168*t5218;
  t5471 = t5233*t5465;
  t5472 = t5220 + t5471;
  t6747 = t6083*t5885;
  t6979 = -1.*t468*t2881;
  t6983 = t2660*t851;
  t6989 = 4.e-6*t2748*t851;
  t6990 = t6979 + t6983 + t6989;
  t6998 = t3982*t2660;
  t6999 = t3966*t2748;
  t7001 = -1.000000000016*t2881*t851;
  t7002 = t6998 + t6999 + t7001;
  t6862 = -1.*t3633*t5218;
  t6880 = t3633*t4086;
  t7094 = -1.*t6083*t5885;
  t7109 = t6083*t6090;
  p_output1[0]=t5472*var2[0] + (t5885*t5891 - 1.*t5870*t5921)*var2[1] + (t5870*t5885 + t5891*t5921)*var2[2] + ((t6084 + t6187*t6216 + t6223*t6239)*t6259 + t6223*(t6102 - 1.*t6239*t6259 - 1.*t6216*t6270))*var2[3] + ((t3667 + t6010*t6038 + t6084)*t6090 + t6076*(t4690 - 1.*t6038*t6099 + t6102))*var2[4] + (t4086*(t3667 + t5513*t5545 + t5565*t5638) + t3366*(t4690 - 1.*t5545*t5701 - 1.*t5638*t5789))*var2[5] + (-0.15121*t1192 + 0.15121*t1474 + (t2269*t2998 + t3667 + t3822*t3902)*t4086 + t3366*(-1.*t2998*t4588 - 1.*t3902*t4647 + t4690))*var2[6] + (0.038749*t468 + t3966*t4928 + t1852*t5039 + 4.e-6*(-1.*t3982*t4928 - 1.*t2088*t5039) - 0.281210000004*t851)*var2[7] - 4.05160619990483e-7*var2[8];
  p_output1[1]=t6259*var2[0] + (t5891*t6090 - 1.*t5870*t6270)*var2[1] + (t5870*t6090 + t5891*t6270)*var2[2] + (t5472*(-1.*t6187*t6216 - 1.*t6223*t6239 + t6708) + t6223*(t5921*t6216 + t5472*t6239 + t6747))*var2[3] + (t5885*(-1.*t6010*t6038 + t6443 + t6708) + t6076*(t5465*t6038 + t6497 + t6747))*var2[4] + (t5218*(-1.*t5513*t5545 - 1.*t5565*t5638 + t6443) + t3366*(t5451*t5545 + t5263*t5638 + t6497))*var2[5] + (0.15121*t4588 - 0.15121*t4647 + t5218*(-1.*t2269*t2998 - 1.*t3822*t3902 + t6443) + t3366*(t1474*t2998 + t1192*t3902 + t6497))*var2[6] + (1.e-6*t3966 + 0.28121*t3982 + t1852*t6596 - 0.03874900000062*t851 - 4.e-6*t6581*t851 + 4.e-6*(-1.*t2088*t6596 + t6581*t851))*var2[7] + 0.300000000004851*var2[8];
  p_output1[2]=t6223*var2[0] + (t5891*t6076 - 1.*t5870*t6187)*var2[1] + (t5870*t6076 + t5891*t6187)*var2[2] + (t6259*(-1.*t5921*t6216 - 1.*t5472*t6239 + t7094) + t5472*(t6239*t6259 + t6216*t6270 + t7109))*var2[3] + (t6090*(-1.*t5465*t6038 + t6862 + t7094) + t5885*(t6038*t6099 + t6880 + t7109))*var2[4] + (t4086*(-1.*t5451*t5545 - 1.*t5263*t5638 + t6862) + t5218*(t5545*t5701 + t5638*t5789 + t6880))*var2[5] + (0.15121*t2269 - 0.15121*t3822 + t4086*(-1.*t1474*t2998 - 1.*t1192*t3902 + t6862) + t5218*(t2998*t4588 + t3902*t4647 + t6880))*var2[6] + (1.e-6*t1852 + 0.28121*t2088 + t3966*t6990 - 4.e-6*t7002*t851 + 4.e-6*(-1.*t3982*t6990 + t7002*t851))*var2[7] - 1.284e-8*var2[8];
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

#include "dh_FlFoot_QuadrupleStance.hh"

namespace QuadrupleStance
{

void dh_FlFoot_QuadrupleStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
