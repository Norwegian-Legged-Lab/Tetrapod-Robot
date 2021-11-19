/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 15:18:38 GMT+01:00
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
  double t756;
  double t827;
  double t866;
  double t886;
  double t1307;
  double t1482;
  double t1380;
  double t1381;
  double t1556;
  double t314;
  double t363;
  double t539;
  double t558;
  double t1048;
  double t1445;
  double t1592;
  double t1709;
  double t1213;
  double t1929;
  double t1936;
  double t1948;
  double t2309;
  double t885;
  double t26;
  double t58;
  double t63;
  double t81;
  double t946;
  double t999;
  double t1169;
  double t1228;
  double t1232;
  double t1715;
  double t1787;
  double t1922;
  double t1960;
  double t2049;
  double t2320;
  double t2327;
  double t2364;
  double t2369;
  double t2411;
  double t2413;
  double t2472;
  double t2536;
  double t2542;
  double t2558;
  double t546;
  double t2650;
  double t2656;
  double t2664;
  double t2691;
  double t2704;
  double t2779;
  double t2892;
  double t2894;
  double t2911;
  double t3157;
  double t2203;
  double t681;
  double t2088;
  double t2262;
  double t2268;
  double t2619;
  double t2622;
  double t2638;
  double t2913;
  double t2940;
  double t3049;
  double t3143;
  double t3153;
  double t3168;
  double t3204;
  double t3213;
  double t3215;
  double t3225;
  double t3251;
  double t3277;
  double t2990;
  double t3603;
  double t3685;
  double t3692;
  double t3780;
  double t3782;
  double t3883;
  double t3930;
  double t3947;
  double t3955;
  double t4022;
  double t4184;
  double t67;
  double t289;
  double t291;
  double t4836;
  double t4849;
  double t4846;
  double t4856;
  double t4882;
  double t4916;
  double t4923;
  double t4931;
  double t4893;
  double t4947;
  double t4967;
  double t4982;
  double t4986;
  double t4994;
  double t3002;
  double t3044;
  double t4839;
  double t4977;
  double t4996;
  double t4998;
  double t5002;
  double t5003;
  double t5008;
  double t5012;
  double t5020;
  double t5024;
  double t5035;
  double t5043;
  double t3334;
  double t3454;
  double t4197;
  double t4322;
  double t5001;
  double t5016;
  double t5051;
  double t5055;
  double t4398;
  double t4434;
  double t5069;
  double t5073;
  double t5077;
  double t5082;
  double t4530;
  double t4532;
  double t5094;
  double t5099;
  double t5139;
  double t5141;
  double t4686;
  double t4697;
  double t4729;
  double t4781;
  double t4791;
  double t5443;
  double t5455;
  double t5461;
  double t5498;
  double t5501;
  double t5514;
  double t5497;
  double t5522;
  double t5523;
  double t5550;
  double t5558;
  double t5570;
  double t5440;
  double t5538;
  double t5572;
  double t5579;
  double t5583;
  double t5584;
  double t5590;
  double t5593;
  double t5597;
  double t5601;
  double t5604;
  double t5607;
  double t5581;
  double t5596;
  double t5608;
  double t5611;
  double t5618;
  double t5627;
  double t5629;
  double t5642;
  double t5646;
  double t5660;
  double t5672;
  double t5682;
  t756 = Cos(var1[13]);
  t827 = -1.*t756;
  t866 = 1. + t827;
  t886 = Sin(var1[13]);
  t1307 = Cos(var1[4]);
  t1482 = Cos(var1[12]);
  t1380 = Cos(var1[5]);
  t1381 = Sin(var1[12]);
  t1556 = Sin(var1[5]);
  t314 = Cos(var1[14]);
  t363 = -1.*t314;
  t539 = 1. + t363;
  t558 = Sin(var1[14]);
  t1048 = Sin(var1[4]);
  t1445 = -1.*t1307*t1380*t1381;
  t1592 = -1.*t1482*t1307*t1556;
  t1709 = t1445 + t1592;
  t1213 = -7.e-6*t866;
  t1929 = t1482*t1307*t1380;
  t1936 = -1.*t1307*t1381*t1556;
  t1948 = t1929 + t1936;
  t2309 = -4.e-6*t866;
  t885 = 2.7999999999999997e-11*t866;
  t26 = Cos(var1[20]);
  t58 = -1.*t26;
  t63 = 1. + t58;
  t81 = Sin(var1[20]);
  t946 = -1.*t886;
  t999 = t885 + t946;
  t1169 = t999*t1048;
  t1228 = -4.e-6*t886;
  t1232 = t1213 + t1228;
  t1715 = t1232*t1709;
  t1787 = -1.000000000016*t866;
  t1922 = 1. + t1787;
  t1960 = t1922*t1948;
  t2049 = t1169 + t1715 + t1960;
  t2320 = -7.e-6*t886;
  t2327 = t2309 + t2320;
  t2364 = t2327*t1048;
  t2369 = -6.5e-11*t866;
  t2411 = 1. + t2369;
  t2413 = t2411*t1709;
  t2472 = 4.e-6*t886;
  t2536 = t1213 + t2472;
  t2542 = t2536*t1948;
  t2558 = t2364 + t2413 + t2542;
  t546 = 2.7999999999999997e-11*t539;
  t2650 = -1.000000000049*t866;
  t2656 = 1. + t2650;
  t2664 = t2656*t1048;
  t2691 = 7.e-6*t886;
  t2704 = t2309 + t2691;
  t2779 = t2704*t1709;
  t2892 = t885 + t886;
  t2894 = t2892*t1948;
  t2911 = t2664 + t2779 + t2894;
  t3157 = -7.e-6*t539;
  t2203 = -4.e-6*t539;
  t681 = t546 + t558;
  t2088 = t681*t2049;
  t2262 = 7.e-6*t558;
  t2268 = t2203 + t2262;
  t2619 = t2268*t2558;
  t2622 = -1.000000000049*t539;
  t2638 = 1. + t2622;
  t2913 = t2638*t2911;
  t2940 = t2088 + t2619 + t2913;
  t3049 = -1.000000000016*t539;
  t3143 = 1. + t3049;
  t3153 = t3143*t2049;
  t3168 = -4.e-6*t558;
  t3204 = t3157 + t3168;
  t3213 = t3204*t2558;
  t3215 = -1.*t558;
  t3225 = t546 + t3215;
  t3251 = t3225*t2911;
  t3277 = t3153 + t3213 + t3251;
  t2990 = -7.e-6*t63;
  t3603 = 4.e-6*t558;
  t3685 = t3157 + t3603;
  t3692 = t3685*t2049;
  t3780 = -6.5e-11*t539;
  t3782 = 1. + t3780;
  t3883 = t3782*t2558;
  t3930 = -7.e-6*t558;
  t3947 = t2203 + t3930;
  t3955 = t3947*t2911;
  t4022 = t3692 + t3883 + t3955;
  t4184 = 2.7999999999999997e-11*t63;
  t67 = -4.e-6*t63;
  t289 = -7.e-6*t81;
  t291 = t67 + t289;
  t4836 = Sin(var1[3]);
  t4849 = Cos(var1[3]);
  t4846 = t1380*t4836*t1048;
  t4856 = t4849*t1556;
  t4882 = t4846 + t4856;
  t4916 = t4849*t1380;
  t4923 = -1.*t4836*t1048*t1556;
  t4931 = t4916 + t4923;
  t4893 = -1.*t1381*t4882;
  t4947 = t1482*t4931;
  t4967 = t4893 + t4947;
  t4982 = t1482*t4882;
  t4986 = t1381*t4931;
  t4994 = t4982 + t4986;
  t3002 = 4.e-6*t81;
  t3044 = t2990 + t3002;
  t4839 = -1.*t1307*t999*t4836;
  t4977 = t1232*t4967;
  t4996 = t1922*t4994;
  t4998 = t4839 + t4977 + t4996;
  t5002 = -1.*t1307*t2327*t4836;
  t5003 = t2411*t4967;
  t5008 = t2536*t4994;
  t5012 = t5002 + t5003 + t5008;
  t5020 = -1.*t2656*t1307*t4836;
  t5024 = t2704*t4967;
  t5035 = t2892*t4994;
  t5043 = t5020 + t5024 + t5035;
  t3334 = -6.5e-11*t63;
  t3454 = 1. + t3334;
  t4197 = -1.*t81;
  t4322 = t4184 + t4197;
  t5001 = t681*t4998;
  t5016 = t2268*t5012;
  t5051 = t2638*t5043;
  t5055 = t5001 + t5016 + t5051;
  t4398 = -1.000000000016*t63;
  t4434 = 1. + t4398;
  t5069 = t3143*t4998;
  t5073 = t3204*t5012;
  t5077 = t3225*t5043;
  t5082 = t5069 + t5073 + t5077;
  t4530 = -4.e-6*t81;
  t4532 = t2990 + t4530;
  t5094 = t3685*t4998;
  t5099 = t3782*t5012;
  t5139 = t3947*t5043;
  t5141 = t5094 + t5099 + t5139;
  t4686 = -1.000000000049*t63;
  t4697 = 1. + t4686;
  t4729 = t4184 + t81;
  t4781 = 7.e-6*t81;
  t4791 = t67 + t4781;
  t5443 = -1.*t4849*t1380*t1048;
  t5455 = t4836*t1556;
  t5461 = t5443 + t5455;
  t5498 = t1380*t4836;
  t5501 = t4849*t1048*t1556;
  t5514 = t5498 + t5501;
  t5497 = -1.*t1381*t5461;
  t5522 = t1482*t5514;
  t5523 = t5497 + t5522;
  t5550 = t1482*t5461;
  t5558 = t1381*t5514;
  t5570 = t5550 + t5558;
  t5440 = t4849*t1307*t999;
  t5538 = t1232*t5523;
  t5572 = t1922*t5570;
  t5579 = t5440 + t5538 + t5572;
  t5583 = t4849*t1307*t2327;
  t5584 = t2411*t5523;
  t5590 = t2536*t5570;
  t5593 = t5583 + t5584 + t5590;
  t5597 = t2656*t4849*t1307;
  t5601 = t2704*t5523;
  t5604 = t2892*t5570;
  t5607 = t5597 + t5601 + t5604;
  t5581 = t681*t5579;
  t5596 = t2268*t5593;
  t5608 = t2638*t5607;
  t5611 = t5581 + t5596 + t5608;
  t5618 = t3143*t5579;
  t5627 = t3204*t5593;
  t5629 = t3225*t5607;
  t5642 = t5618 + t5627 + t5629;
  t5646 = t3685*t5579;
  t5660 = t3782*t5593;
  t5672 = t3947*t5607;
  t5682 = t5646 + t5660 + t5672;
  p_output1[0]=t291*t2940 + t3044*t3277 + t3454*t4022 - 7.e-6*(t2940*t4322 + t3277*t4434 + t4022*t4532) - 4.e-6*(t2940*t4697 + t3277*t4729 + t4022*t4791);
  p_output1[1]=t291*t5055 + t3044*t5082 + t3454*t5141 - 7.e-6*(t4322*t5055 + t4434*t5082 + t4532*t5141) - 4.e-6*(t4697*t5055 + t4729*t5082 + t4791*t5141);
  p_output1[2]=t291*t5611 + t3044*t5642 + t3454*t5682 - 7.e-6*(t4322*t5611 + t4434*t5642 + t4532*t5682) - 4.e-6*(t4697*t5611 + t4729*t5642 + t4791*t5682);
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

#include "Joint_rl_foot_axis.hh"

namespace SymFunction
{

void Joint_rl_foot_axis_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
