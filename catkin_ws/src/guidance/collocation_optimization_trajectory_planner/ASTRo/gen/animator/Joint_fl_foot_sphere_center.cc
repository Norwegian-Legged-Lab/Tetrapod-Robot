/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 15:18:33 GMT+01:00
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
  double t164;
  double t234;
  double t266;
  double t449;
  double t532;
  double t613;
  double t205;
  double t852;
  double t1119;
  double t1120;
  double t1140;
  double t1222;
  double t1713;
  double t2005;
  double t920;
  double t1085;
  double t1091;
  double t1432;
  double t1467;
  double t1472;
  double t2303;
  double t2323;
  double t2433;
  double t2494;
  double t2128;
  double t2157;
  double t2160;
  double t2188;
  double t2209;
  double t2242;
  double t3910;
  double t3135;
  double t3214;
  double t3440;
  double t3441;
  double t2525;
  double t2634;
  double t2672;
  double t2683;
  double t2705;
  double t2844;
  double t3701;
  double t3743;
  double t3744;
  double t3814;
  double t3956;
  double t3958;
  double t3980;
  double t4059;
  double t4063;
  double t4069;
  double t4142;
  double t4149;
  double t4163;
  double t4165;
  double t4213;
  double t4225;
  double t4227;
  double t4229;
  double t4232;
  double t4235;
  double t4356;
  double t652;
  double t682;
  double t4462;
  double t4456;
  double t862;
  double t882;
  double t4461;
  double t4475;
  double t4483;
  double t4498;
  double t4512;
  double t4514;
  double t1107;
  double t1162;
  double t1340;
  double t1383;
  double t1514;
  double t1579;
  double t1599;
  double t1747;
  double t1834;
  double t1841;
  double t1879;
  double t4539;
  double t4544;
  double t4546;
  double t4566;
  double t4571;
  double t4573;
  double t2289;
  double t2434;
  double t2519;
  double t2522;
  double t3074;
  double t3088;
  double t3102;
  double t3484;
  double t3511;
  double t3516;
  double t3633;
  double t3659;
  double t3797;
  double t3872;
  double t3897;
  double t4582;
  double t4590;
  double t4592;
  double t4599;
  double t4644;
  double t4645;
  double t4654;
  double t4659;
  double t4615;
  double t4616;
  double t4624;
  double t4632;
  double t4088;
  double t4098;
  double t4116;
  double t4129;
  double t4186;
  double t4192;
  double t4207;
  double t4681;
  double t4689;
  double t4717;
  double t4721;
  double t4748;
  double t4755;
  double t4797;
  double t4809;
  double t4248;
  double t4274;
  double t4851;
  double t4891;
  double t4897;
  double t4906;
  double t4363;
  double t4374;
  double t5050;
  double t5066;
  double t5067;
  double t5080;
  double t5088;
  double t5098;
  double t5103;
  double t5115;
  double t5116;
  double t5129;
  double t5130;
  double t5135;
  double t5146;
  double t5149;
  double t5150;
  double t5154;
  double t5184;
  double t5186;
  double t5189;
  double t5193;
  double t5159;
  double t5160;
  double t5170;
  double t5180;
  double t5196;
  double t5203;
  double t5214;
  double t5230;
  double t5236;
  double t5237;
  double t5243;
  double t5278;
  double t5285;
  double t5286;
  double t5291;
  double t5293;
  t164 = Cos(var1[4]);
  t234 = Cos(var1[6]);
  t266 = -1.*t234;
  t449 = 1. + t266;
  t532 = 0.15121*t449;
  t613 = Sin(var1[6]);
  t205 = Sin(var1[5]);
  t852 = Cos(var1[5]);
  t1119 = Cos(var1[7]);
  t1120 = -1.*t1119;
  t1140 = 1. + t1120;
  t1222 = Sin(var1[7]);
  t1713 = Sin(var1[4]);
  t2005 = -1. + t1119;
  t920 = -1.*t164*t234*t205;
  t1085 = -1.*t164*t852*t613;
  t1091 = t920 + t1085;
  t1432 = t164*t852*t234;
  t1467 = -1.*t164*t205*t613;
  t1472 = t1432 + t1467;
  t2303 = Cos(var1[8]);
  t2323 = -1.*t2303;
  t2433 = 1. + t2323;
  t2494 = Sin(var1[8]);
  t2128 = 4.e-6*t2005*t1713;
  t2157 = 1.6e-11*t2005;
  t2160 = 1. + t2157;
  t2188 = t2160*t1091;
  t2209 = 4.e-6*t1472*t1222;
  t2242 = t2128 + t2188 + t2209;
  t3910 = -1. + t2303;
  t3135 = t1119*t1713;
  t3214 = 4.e-6*t2005*t1091;
  t3440 = t1472*t1222;
  t3441 = t3135 + t3214 + t3440;
  t2525 = -1.000000000016*t1140;
  t2634 = 1. + t2525;
  t2672 = t2634*t1472;
  t2683 = -1.*t1713*t1222;
  t2705 = -4.e-6*t1091*t1222;
  t2844 = t2672 + t2683 + t2705;
  t3701 = Cos(var1[18]);
  t3743 = -1.*t3701;
  t3744 = 1. + t3743;
  t3814 = Sin(var1[18]);
  t3956 = 1.6e-11*t3910;
  t3958 = 1. + t3956;
  t3980 = t3958*t2242;
  t4059 = 4.e-6*t3910*t3441;
  t4063 = 4.e-6*t2844*t2494;
  t4069 = t3980 + t4059 + t4063;
  t4142 = 4.e-6*t3910*t2242;
  t4149 = t2303*t3441;
  t4163 = t2844*t2494;
  t4165 = t4142 + t4149 + t4163;
  t4213 = -1.000000000016*t2433;
  t4225 = 1. + t4213;
  t4227 = t4225*t2844;
  t4229 = -4.e-6*t2242*t2494;
  t4232 = -1.*t3441*t2494;
  t4235 = t4227 + t4229 + t4232;
  t4356 = -1. + t3701;
  t652 = -0.15121*t613;
  t682 = t532 + t652;
  t4462 = Sin(var1[3]);
  t4456 = Cos(var1[3]);
  t862 = 0.15121*t613;
  t882 = t532 + t862;
  t4461 = t4456*t852;
  t4475 = -1.*t4462*t1713*t205;
  t4483 = t4461 + t4475;
  t4498 = t852*t4462*t1713;
  t4512 = t4456*t205;
  t4514 = t4498 + t4512;
  t1107 = -1.2484e-7*var1[7];
  t1162 = -1.5499600000248e-7*t1140;
  t1340 = 1.124840000016e-6*t1222;
  t1383 = t1107 + t1162 + t1340;
  t1514 = 0.281210000008499*t1140;
  t1579 = 0.03874900000062*t1222;
  t1599 = t1514 + t1579;
  t1747 = 4.9936e-13*var1[7];
  t1834 = -0.03874900000062*t1140;
  t1841 = 0.281210000004*t1222;
  t1879 = t1747 + t1834 + t1841;
  t4539 = t234*t4483;
  t4544 = -1.*t4514*t613;
  t4546 = t4539 + t4544;
  t4566 = t234*t4514;
  t4571 = t4483*t613;
  t4573 = t4566 + t4571;
  t2289 = -1.284e-8*var1[8];
  t2434 = -1.5499600000248e-7*t2433;
  t2519 = 2.012840000032e-6*t2494;
  t2522 = t2289 + t2434 + t2519;
  t3074 = 0.503210000016051*t2433;
  t3088 = 0.03874900000062*t2494;
  t3102 = t3074 + t3088;
  t3484 = 5.136e-14*var1[8];
  t3511 = -0.03874900000062*t2433;
  t3516 = 0.503210000008*t2494;
  t3633 = t3484 + t3511 + t3516;
  t3659 = -2.1284e-7*var1[18];
  t3797 = -1.5499600000248e-7*t3744;
  t3872 = 3.212840000048e-6*t3814;
  t3897 = t3659 + t3797 + t3872;
  t4582 = -4.e-6*t164*t2005*t4462;
  t4590 = t2160*t4546;
  t4592 = 4.e-6*t4573*t1222;
  t4599 = t4582 + t4590 + t4592;
  t4644 = -1.*t164*t1119*t4462;
  t4645 = 4.e-6*t2005*t4546;
  t4654 = t4573*t1222;
  t4659 = t4644 + t4645 + t4654;
  t4615 = t2634*t4573;
  t4616 = t164*t4462*t1222;
  t4624 = -4.e-6*t4546*t1222;
  t4632 = t4615 + t4616 + t4624;
  t4088 = 8.5136e-13*var1[18];
  t4098 = -0.03874900000062*t3744;
  t4116 = 0.803210000012*t3814;
  t4129 = t4088 + t4098 + t4116;
  t4186 = 0.803210000024851*t3744;
  t4192 = 0.03874900000062*t3814;
  t4207 = t4186 + t4192;
  t4681 = t3958*t4599;
  t4689 = 4.e-6*t3910*t4659;
  t4717 = 4.e-6*t4632*t2494;
  t4721 = t4681 + t4689 + t4717;
  t4748 = 4.e-6*t3910*t4599;
  t4755 = t2303*t4659;
  t4797 = t4632*t2494;
  t4809 = t4748 + t4755 + t4797;
  t4248 = -1.000000000016*t3744;
  t4274 = 1. + t4248;
  t4851 = t4225*t4632;
  t4891 = -4.e-6*t4599*t2494;
  t4897 = -1.*t4659*t2494;
  t4906 = t4851 + t4891 + t4897;
  t4363 = 1.6e-11*t4356;
  t4374 = 1. + t4363;
  t5050 = t852*t4462;
  t5066 = t4456*t1713*t205;
  t5067 = t5050 + t5066;
  t5080 = -1.*t4456*t852*t1713;
  t5088 = t4462*t205;
  t5098 = t5080 + t5088;
  t5103 = t234*t5067;
  t5115 = -1.*t5098*t613;
  t5116 = t5103 + t5115;
  t5129 = t234*t5098;
  t5130 = t5067*t613;
  t5135 = t5129 + t5130;
  t5146 = 4.e-6*t4456*t164*t2005;
  t5149 = t2160*t5116;
  t5150 = 4.e-6*t5135*t1222;
  t5154 = t5146 + t5149 + t5150;
  t5184 = t4456*t164*t1119;
  t5186 = 4.e-6*t2005*t5116;
  t5189 = t5135*t1222;
  t5193 = t5184 + t5186 + t5189;
  t5159 = t2634*t5135;
  t5160 = -1.*t4456*t164*t1222;
  t5170 = -4.e-6*t5116*t1222;
  t5180 = t5159 + t5160 + t5170;
  t5196 = t3958*t5154;
  t5203 = 4.e-6*t3910*t5193;
  t5214 = 4.e-6*t5180*t2494;
  t5230 = t5196 + t5203 + t5214;
  t5236 = 4.e-6*t3910*t5154;
  t5237 = t2303*t5193;
  t5243 = t5180*t2494;
  t5278 = t5236 + t5237 + t5243;
  t5285 = t4225*t5180;
  t5286 = -4.e-6*t5154*t2494;
  t5291 = -1.*t5193*t2494;
  t5293 = t5285 + t5286 + t5291;
  p_output1[0]=t1091*t1383 + t1472*t1599 + t1713*t1879 + t2242*t2522 + t2844*t3102 + t3441*t3633 + t3897*t4069 + t4129*t4165 + t4207*t4235 + 0.80321*(-4.e-6*t3814*t4069 - 1.*t3814*t4165 + t4235*t4274) - 0.03875*(t3701*t4165 + t3814*t4235 + 4.e-6*t4069*t4356) + 0.14871*(4.e-6*t3814*t4235 + 4.e-6*t4165*t4356 + t4069*t4374) - 1.*t164*t205*t682 + t164*t852*t882 + var1[0];
  p_output1[1]=-1.*t164*t1879*t4462 + t1383*t4546 + t1599*t4573 + t2522*t4599 + t3102*t4632 + t3633*t4659 + t3897*t4721 + t4129*t4809 + t4207*t4906 + 0.14871*(t4374*t4721 + 4.e-6*t4356*t4809 + 4.e-6*t3814*t4906) - 0.03875*(4.e-6*t4356*t4721 + t3701*t4809 + t3814*t4906) + 0.80321*(-4.e-6*t3814*t4721 - 1.*t3814*t4809 + t4274*t4906) + t4483*t682 + t4514*t882 + var1[1];
  p_output1[2]=t164*t1879*t4456 + t1383*t5116 + t1599*t5135 + t2522*t5154 + t3102*t5180 + t3633*t5193 + t3897*t5230 + t4129*t5278 + t4207*t5293 + 0.14871*(t4374*t5230 + 4.e-6*t4356*t5278 + 4.e-6*t3814*t5293) - 0.03875*(4.e-6*t4356*t5230 + t3701*t5278 + t3814*t5293) + 0.80321*(-4.e-6*t3814*t5230 - 1.*t3814*t5278 + t4274*t5293) + t5067*t682 + t5098*t882 + var1[2];
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
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
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

#include "Joint_fl_foot_sphere_center.hh"

namespace SymFunction
{

void Joint_fl_foot_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
