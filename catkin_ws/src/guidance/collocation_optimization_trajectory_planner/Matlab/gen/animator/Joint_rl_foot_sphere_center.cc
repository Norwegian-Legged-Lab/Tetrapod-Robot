/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 15:18:37 GMT+01:00
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
  double t294;
  double t296;
  double t319;
  double t482;
  double t48;
  double t69;
  double t107;
  double t166;
  double t220;
  double t249;
  double t394;
  double t65;
  double t877;
  double t634;
  double t1098;
  double t2151;
  double t2231;
  double t2237;
  double t2275;
  double t1707;
  double t831;
  double t1818;
  double t1282;
  double t1285;
  double t1291;
  double t1936;
  double t1989;
  double t2037;
  double t2366;
  double t981;
  double t2534;
  double t1115;
  double t2653;
  double t2271;
  double t2727;
  double t2740;
  double t540;
  double t2445;
  double t3315;
  double t3322;
  double t3324;
  double t3371;
  double t2470;
  double t2472;
  double t2536;
  double t2542;
  double t2587;
  double t2596;
  double t2619;
  double t2621;
  double t3071;
  double t2758;
  double t2779;
  double t2802;
  double t2872;
  double t2892;
  double t2894;
  double t2913;
  double t2939;
  double t3179;
  double t3186;
  double t3204;
  double t3213;
  double t3215;
  double t3225;
  double t3251;
  double t3261;
  double t3666;
  double t2396;
  double t3728;
  double t2281;
  double t3339;
  double t4479;
  double t4650;
  double t2669;
  double t3785;
  double t3813;
  double t2655;
  double t4770;
  double t3780;
  double t3782;
  double t3883;
  double t3947;
  double t4052;
  double t4137;
  double t4158;
  double t4178;
  double t4807;
  double t4564;
  double t4577;
  double t4619;
  double t4671;
  double t4678;
  double t4686;
  double t4697;
  double t4709;
  double t4835;
  double t4836;
  double t4837;
  double t4838;
  double t4839;
  double t4846;
  double t4849;
  double t4852;
  double t4367;
  double t4886;
  double t4525;
  double t4936;
  double t4864;
  double t4875;
  double t3399;
  double t291;
  double t363;
  double t546;
  double t558;
  double t681;
  double t756;
  double t773;
  double t174;
  double t268;
  double t5004;
  double t870;
  double t873;
  double t5014;
  double t886;
  double t946;
  double t999;
  double t1048;
  double t1169;
  double t1213;
  double t1230;
  double t5012;
  double t5016;
  double t5018;
  double t5024;
  double t5028;
  double t5031;
  double t1445;
  double t1592;
  double t1709;
  double t1787;
  double t1922;
  double t1929;
  double t1932;
  double t2088;
  double t2262;
  double t2320;
  double t2364;
  double t2411;
  double t2413;
  double t2426;
  double t5039;
  double t5043;
  double t5047;
  double t5055;
  double t5059;
  double t5063;
  double t2638;
  double t2650;
  double t2656;
  double t2664;
  double t2691;
  double t2704;
  double t2717;
  double t2990;
  double t3002;
  double t3143;
  double t3153;
  double t3157;
  double t3168;
  double t3171;
  double t3307;
  double t3334;
  double t3454;
  double t3603;
  double t3685;
  double t3692;
  double t3725;
  double t5071;
  double t5073;
  double t5077;
  double t5081;
  double t5083;
  double t5085;
  double t5094;
  double t5132;
  double t5140;
  double t5141;
  double t5142;
  double t5153;
  double t4197;
  double t4322;
  double t4434;
  double t4440;
  double t4530;
  double t4532;
  double t4545;
  double t4729;
  double t4758;
  double t4781;
  double t4791;
  double t4822;
  double t4830;
  double t4834;
  double t4881;
  double t5197;
  double t5198;
  double t5199;
  double t5210;
  double t4892;
  double t5254;
  double t5261;
  double t5271;
  double t5297;
  double t4896;
  double t4904;
  double t5333;
  double t5397;
  double t5440;
  double t5442;
  double t4942;
  double t4958;
  double t4962;
  double t4972;
  double t4991;
  double t4993;
  double t4995;
  double t4997;
  double t5585;
  double t5590;
  double t5592;
  double t5596;
  double t5597;
  double t5598;
  double t5603;
  double t5604;
  double t5606;
  double t5608;
  double t5611;
  double t5612;
  double t5618;
  double t5627;
  double t5629;
  double t5635;
  double t5645;
  double t5646;
  double t5660;
  double t5668;
  double t5682;
  double t5686;
  double t5687;
  double t5689;
  double t5691;
  double t5693;
  double t5694;
  double t5695;
  double t5700;
  double t5701;
  double t5703;
  double t5704;
  double t5707;
  double t5708;
  double t5709;
  double t5711;
  t294 = Cos(var1[13]);
  t296 = -1.*t294;
  t319 = 1. + t296;
  t482 = Sin(var1[13]);
  t48 = Cos(var1[4]);
  t69 = Cos(var1[12]);
  t107 = -1.*t69;
  t166 = 1. + t107;
  t220 = Sin(var1[12]);
  t249 = 0.15121*t220;
  t394 = 4.e-6*t319;
  t65 = Cos(var1[5]);
  t877 = Sin(var1[5]);
  t634 = -2.8e-11*t319;
  t1098 = 7.e-6*t319;
  t2151 = Cos(var1[14]);
  t2231 = -1.*t2151;
  t2237 = 1. + t2231;
  t2275 = Sin(var1[14]);
  t1707 = -1.*t482;
  t831 = Sin(var1[4]);
  t1818 = -4.e-6*t482;
  t1282 = -1.*t48*t65*t220;
  t1285 = -1.*t69*t48*t877;
  t1291 = t1282 + t1285;
  t1936 = t69*t48*t65;
  t1989 = -1.*t48*t220*t877;
  t2037 = t1936 + t1989;
  t2366 = 7.e-6*t2237;
  t981 = -7.e-6*t482;
  t2534 = -7.e-6*t319;
  t1115 = 4.e-6*t482;
  t2653 = 4.e-6*t2237;
  t2271 = -2.8e-11*t2237;
  t2727 = -1. + t294;
  t2740 = 4.e-6*t2727;
  t540 = 7.e-6*t482;
  t2445 = 2.8e-11*t319;
  t3315 = Cos(var1[20]);
  t3322 = -1.*t3315;
  t3324 = 1. + t3322;
  t3371 = Sin(var1[20]);
  t2470 = t2445 + t1707;
  t2472 = t2470*t831;
  t2536 = t2534 + t1818;
  t2542 = t2536*t1291;
  t2587 = -1.000000000016*t319;
  t2596 = 1. + t2587;
  t2619 = t2596*t2037;
  t2621 = t2472 + t2542 + t2619;
  t3071 = 7.e-6*t2275;
  t2758 = t2740 + t981;
  t2779 = t2758*t831;
  t2802 = -6.5e-11*t319;
  t2872 = 1. + t2802;
  t2892 = t2872*t1291;
  t2894 = t2534 + t1115;
  t2913 = t2894*t2037;
  t2939 = t2779 + t2892 + t2913;
  t3179 = -1.000000000049*t319;
  t3186 = 1. + t3179;
  t3204 = t3186*t831;
  t3213 = t2740 + t540;
  t3215 = t3213*t1291;
  t3225 = t2445 + t482;
  t3251 = t3225*t2037;
  t3261 = t3204 + t3215 + t3251;
  t3666 = -2.8e-11*t3324;
  t2396 = -4.e-6*t2275;
  t3728 = 2.8e-11*t2237;
  t2281 = -1.*t2275;
  t3339 = 4.e-6*t3324;
  t4479 = 7.e-6*t3324;
  t4650 = -7.e-6*t2237;
  t2669 = 4.e-6*t2275;
  t3785 = -1. + t2151;
  t3813 = 4.e-6*t3785;
  t2655 = -7.e-6*t2275;
  t4770 = -7.e-6*t3371;
  t3780 = t3728 + t2275;
  t3782 = t3780*t2621;
  t3883 = t3813 + t3071;
  t3947 = t3883*t2939;
  t4052 = -1.000000000049*t2237;
  t4137 = 1. + t4052;
  t4158 = t4137*t3261;
  t4178 = t3782 + t3947 + t4158;
  t4807 = 4.e-6*t3371;
  t4564 = -1.000000000016*t2237;
  t4577 = 1. + t4564;
  t4619 = t4577*t2621;
  t4671 = t4650 + t2396;
  t4678 = t4671*t2939;
  t4686 = t3728 + t2281;
  t4697 = t4686*t3261;
  t4709 = t4619 + t4678 + t4697;
  t4835 = t4650 + t2669;
  t4836 = t4835*t2621;
  t4837 = -6.5e-11*t2237;
  t4838 = 1. + t4837;
  t4839 = t4838*t2939;
  t4846 = t3813 + t2655;
  t4849 = t4846*t3261;
  t4852 = t4836 + t4839 + t4849;
  t4367 = -1.*t3371;
  t4886 = -7.e-6*t3324;
  t4525 = -4.e-6*t3371;
  t4936 = 2.8e-11*t3324;
  t4864 = -1. + t3315;
  t4875 = 4.e-6*t4864;
  t3399 = 7.e-6*t3371;
  t291 = 5.856279999999999e-13*var1[13];
  t363 = -0.0387489999948987*t319;
  t546 = t394 + t540;
  t558 = -2.123459e-6*t546;
  t681 = t634 + t482;
  t756 = -0.281209000004*t681;
  t773 = t291 + t363 + t558 + t756;
  t174 = -0.15121*t166;
  t268 = t174 + t249;
  t5004 = Sin(var1[3]);
  t870 = 0.15121*t166;
  t873 = t870 + t249;
  t5014 = Cos(var1[3]);
  t886 = -1.4640699999999997e-7*var1[13];
  t946 = -1.38024835e-16*t319;
  t999 = t394 + t981;
  t1048 = -0.038748999993*t999;
  t1169 = t1098 + t1115;
  t1213 = -0.281209000004*t1169;
  t1230 = t886 + t946 + t1048 + t1213;
  t5012 = t65*t5004*t831;
  t5016 = t5014*t877;
  t5018 = t5012 + t5016;
  t5024 = t5014*t65;
  t5028 = -1.*t5004*t831*t877;
  t5031 = t5024 + t5028;
  t1445 = 1.0248489999999998e-12*var1[13];
  t1592 = -0.28120900000849935*t319;
  t1709 = t634 + t1707;
  t1787 = -0.038748999993*t1709;
  t1922 = t1098 + t1818;
  t1929 = -2.123459e-6*t1922;
  t1932 = t1445 + t1592 + t1787 + t1929;
  t2088 = 1.8190549999999993e-12*var1[14];
  t2262 = -0.5031490000160505*t2237;
  t2320 = t2271 + t2281;
  t2364 = -0.038922999986*t2320;
  t2411 = t2366 + t2396;
  t2413 = -3.6777349999999994e-6*t2411;
  t2426 = t2088 + t2262 + t2364 + t2413;
  t5039 = -1.*t220*t5018;
  t5043 = t69*t5031;
  t5047 = t5039 + t5043;
  t5055 = t69*t5018;
  t5059 = t220*t5031;
  t5063 = t5055 + t5059;
  t2638 = -2.598649999999999e-7*var1[14];
  t2650 = -2.3905277499999995e-16*t2237;
  t2656 = t2653 + t2655;
  t2664 = -0.038922999986*t2656;
  t2691 = t2366 + t2669;
  t2704 = -0.503149000008*t2691;
  t2717 = t2638 + t2650 + t2664 + t2704;
  t2990 = 1.0394599999999997e-12*var1[14];
  t3002 = -0.03892299998790722*t2237;
  t3143 = t2653 + t3071;
  t3153 = -3.6777349999999994e-6*t3143;
  t3157 = t2271 + t2275;
  t3168 = -0.503149000008*t3157;
  t3171 = t2990 + t3002 + t3153 + t3168;
  t3307 = 2.394600000000006e-13*var1[20];
  t3334 = -0.03892299998090722*t3324;
  t3454 = t3339 + t3399;
  t3603 = -5.777735e-6*t3454;
  t3685 = t3666 + t3371;
  t3692 = -0.803149000012*t3685;
  t3725 = t3307 + t3334 + t3603 + t3692;
  t5071 = -1.*t48*t2470*t5004;
  t5073 = t2536*t5047;
  t5077 = t2596*t5063;
  t5081 = t5071 + t5073 + t5077;
  t5083 = -1.*t48*t2758*t5004;
  t5085 = t2872*t5047;
  t5094 = t2894*t5063;
  t5132 = t5083 + t5085 + t5094;
  t5140 = -1.*t3186*t48*t5004;
  t5141 = t3213*t5047;
  t5142 = t3225*t5063;
  t5153 = t5140 + t5141 + t5142;
  t4197 = 4.1905500000000104e-13*var1[20];
  t4322 = -0.8031490000248505*t3324;
  t4434 = t3666 + t4367;
  t4440 = -0.038922999979*t4434;
  t4530 = t4479 + t4525;
  t4532 = -5.777735e-6*t4530;
  t4545 = t4197 + t4322 + t4440 + t4532;
  t4729 = -5.986500000000015e-8*var1[20];
  t4758 = -3.7555277499999995e-16*t3324;
  t4781 = t3339 + t4770;
  t4791 = -0.038922999979*t4781;
  t4822 = t4479 + t4807;
  t4830 = -0.803149000012*t4822;
  t4834 = t4729 + t4758 + t4791 + t4830;
  t4881 = t4875 + t4770;
  t5197 = t3780*t5081;
  t5198 = t3883*t5132;
  t5199 = t4137*t5153;
  t5210 = t5197 + t5198 + t5199;
  t4892 = t4886 + t4807;
  t5254 = t4577*t5081;
  t5261 = t4671*t5132;
  t5271 = t4686*t5153;
  t5297 = t5254 + t5261 + t5271;
  t4896 = -6.5e-11*t3324;
  t4904 = 1. + t4896;
  t5333 = t4835*t5081;
  t5397 = t4838*t5132;
  t5440 = t4846*t5153;
  t5442 = t5333 + t5397 + t5440;
  t4942 = t4936 + t4367;
  t4958 = -1.000000000016*t3324;
  t4962 = 1. + t4958;
  t4972 = t4886 + t4525;
  t4991 = -1.000000000049*t3324;
  t4993 = 1. + t4991;
  t4995 = t4936 + t3371;
  t4997 = t4875 + t3399;
  t5585 = -1.*t5014*t65*t831;
  t5590 = t5004*t877;
  t5592 = t5585 + t5590;
  t5596 = t65*t5004;
  t5597 = t5014*t831*t877;
  t5598 = t5596 + t5597;
  t5603 = -1.*t220*t5592;
  t5604 = t69*t5598;
  t5606 = t5603 + t5604;
  t5608 = t69*t5592;
  t5611 = t220*t5598;
  t5612 = t5608 + t5611;
  t5618 = t5014*t48*t2470;
  t5627 = t2536*t5606;
  t5629 = t2596*t5612;
  t5635 = t5618 + t5627 + t5629;
  t5645 = t5014*t48*t2758;
  t5646 = t2872*t5606;
  t5660 = t2894*t5612;
  t5668 = t5645 + t5646 + t5660;
  t5682 = t3186*t5014*t48;
  t5686 = t3213*t5606;
  t5687 = t3225*t5612;
  t5689 = t5682 + t5686 + t5687;
  t5691 = t3780*t5635;
  t5693 = t3883*t5668;
  t5694 = t4137*t5689;
  t5695 = t5691 + t5693 + t5694;
  t5700 = t4577*t5635;
  t5701 = t4671*t5668;
  t5703 = t4686*t5689;
  t5704 = t5700 + t5701 + t5703;
  t5707 = t4835*t5635;
  t5708 = t4838*t5668;
  t5709 = t4846*t5689;
  t5711 = t5707 + t5708 + t5709;
  p_output1[0]=t1230*t1291 + t1932*t2037 + t2426*t2621 + t2717*t2939 + t3171*t3261 + t3725*t4178 + t4545*t4709 + t4834*t4852 + 0.148705*(t4178*t4881 + t4709*t4892 + t4852*t4904) - 0.80315*(t4178*t4942 + t4709*t4962 + t4852*t4972) - 0.038924*(t4178*t4993 + t4709*t4995 + t4852*t4997) + t268*t48*t65 + t773*t831 - 1.*t48*t873*t877 + var1[0];
  p_output1[1]=t268*t5018 + t1230*t5047 + t1932*t5063 + t2426*t5081 + t2717*t5132 + t3171*t5153 + t3725*t5210 + t4545*t5297 + t4834*t5442 + 0.148705*(t4881*t5210 + t4892*t5297 + t4904*t5442) - 0.80315*(t4942*t5210 + t4962*t5297 + t4972*t5442) - 0.038924*(t4993*t5210 + t4995*t5297 + t4997*t5442) - 1.*t48*t5004*t773 + t5031*t873 + var1[1];
  p_output1[2]=t268*t5592 + t1230*t5606 + t1932*t5612 + t2426*t5635 + t2717*t5668 + t3171*t5689 + t3725*t5695 + t4545*t5704 + t4834*t5711 + 0.148705*(t4881*t5695 + t4892*t5704 + t4904*t5711) - 0.80315*(t4942*t5695 + t4962*t5704 + t4972*t5711) - 0.038924*(t4993*t5695 + t4995*t5704 + t4997*t5711) + t48*t5014*t773 + t5598*t873 + var1[2];
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

#include "Joint_rl_foot_sphere_center.hh"

namespace SymFunction
{

void Joint_rl_foot_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
