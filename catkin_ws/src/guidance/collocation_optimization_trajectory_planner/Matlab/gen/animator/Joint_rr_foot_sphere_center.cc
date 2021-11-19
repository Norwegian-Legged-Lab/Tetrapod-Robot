/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 15:18:39 GMT+01:00
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
  double t473;
  double t479;
  double t538;
  double t628;
  double t52;
  double t159;
  double t165;
  double t353;
  double t367;
  double t369;
  double t698;
  double t748;
  double t61;
  double t959;
  double t1063;
  double t624;
  double t1704;
  double t1910;
  double t1929;
  double t1985;
  double t885;
  double t1426;
  double t1350;
  double t1354;
  double t1361;
  double t1601;
  double t1605;
  double t1607;
  double t2150;
  double t787;
  double t2162;
  double t642;
  double t1948;
  double t2762;
  double t2779;
  double t2937;
  double t1213;
  double t2178;
  double t1086;
  double t3955;
  double t4022;
  double t4038;
  double t4243;
  double t3153;
  double t2169;
  double t2175;
  double t2203;
  double t2262;
  double t2536;
  double t2542;
  double t2555;
  double t2625;
  double t3204;
  double t2875;
  double t2883;
  double t2911;
  double t2940;
  double t2979;
  double t3002;
  double t3036;
  double t3044;
  double t3603;
  double t3689;
  double t3754;
  double t3760;
  double t3791;
  double t3807;
  double t3848;
  double t3883;
  double t4440;
  double t4467;
  double t2691;
  double t4758;
  double t2821;
  double t4162;
  double t4994;
  double t5024;
  double t4671;
  double t2009;
  double t5191;
  double t4678;
  double t4729;
  double t4776;
  double t4791;
  double t4814;
  double t4846;
  double t4856;
  double t4916;
  double t5043;
  double t5051;
  double t5055;
  double t5069;
  double t5082;
  double t5085;
  double t5093;
  double t5094;
  double t5397;
  double t5424;
  double t5455;
  double t5498;
  double t5501;
  double t5514;
  double t5558;
  double t5570;
  double t5007;
  double t5593;
  double t4996;
  double t5627;
  double t4482;
  double t5579;
  double t4322;
  double t468;
  double t620;
  double t654;
  double t666;
  double t809;
  double t825;
  double t833;
  double t371;
  double t392;
  double t5723;
  double t949;
  double t956;
  double t5731;
  double t1005;
  double t1037;
  double t1102;
  double t1145;
  double t1220;
  double t1264;
  double t1293;
  double t5729;
  double t5733;
  double t5736;
  double t5741;
  double t5742;
  double t5743;
  double t1388;
  double t1407;
  double t1450;
  double t1454;
  double t1509;
  double t1512;
  double t1572;
  double t1643;
  double t1931;
  double t2031;
  double t2102;
  double t2154;
  double t2155;
  double t2158;
  double t5748;
  double t5750;
  double t5751;
  double t5755;
  double t5756;
  double t5759;
  double t2664;
  double t2680;
  double t2711;
  double t2730;
  double t2823;
  double t2858;
  double t2861;
  double t3138;
  double t3141;
  double t3157;
  double t3169;
  double t3225;
  double t3308;
  double t3532;
  double t3930;
  double t4094;
  double t4427;
  double t4430;
  double t4501;
  double t4530;
  double t4581;
  double t5763;
  double t5771;
  double t5775;
  double t5778;
  double t5787;
  double t5793;
  double t5807;
  double t5808;
  double t5818;
  double t5822;
  double t5825;
  double t5829;
  double t4982;
  double t4986;
  double t4998;
  double t5003;
  double t5008;
  double t5016;
  double t5017;
  double t5142;
  double t5183;
  double t5198;
  double t5199;
  double t5261;
  double t5333;
  double t5378;
  double t5581;
  double t5833;
  double t5834;
  double t5835;
  double t5839;
  double t5597;
  double t5842;
  double t5846;
  double t5847;
  double t5849;
  double t5604;
  double t5607;
  double t5854;
  double t5855;
  double t5858;
  double t5859;
  double t5629;
  double t5646;
  double t5660;
  double t5686;
  double t5694;
  double t5699;
  double t5703;
  double t5708;
  double t5904;
  double t5905;
  double t5907;
  double t5912;
  double t5913;
  double t5916;
  double t5918;
  double t5922;
  double t5924;
  double t5928;
  double t5929;
  double t5930;
  double t5934;
  double t5936;
  double t5938;
  double t5940;
  double t5944;
  double t5945;
  double t5946;
  double t5949;
  double t5952;
  double t5954;
  double t5956;
  double t5957;
  double t5960;
  double t5964;
  double t5965;
  double t5968;
  double t5971;
  double t5973;
  double t5975;
  double t5976;
  double t5980;
  double t5981;
  double t5984;
  double t5985;
  t473 = Cos(var1[16]);
  t479 = -1.*t473;
  t538 = 1. + t479;
  t628 = Sin(var1[16]);
  t52 = Cos(var1[4]);
  t159 = Cos(var1[15]);
  t165 = -1.*t159;
  t353 = 1. + t165;
  t367 = -0.15121*t353;
  t369 = Sin(var1[15]);
  t698 = -1. + t473;
  t748 = 4.e-6*t698;
  t61 = Cos(var1[5]);
  t959 = Sin(var1[5]);
  t1063 = 7.e-6*t538;
  t624 = 2.8e-11*t538;
  t1704 = Cos(var1[17]);
  t1910 = -1.*t1704;
  t1929 = 1. + t1910;
  t1985 = Sin(var1[17]);
  t885 = Sin(var1[4]);
  t1426 = -4.e-6*t628;
  t1350 = -1.*t52*t61*t369;
  t1354 = -1.*t159*t52*t959;
  t1361 = t1350 + t1354;
  t1601 = t159*t52*t61;
  t1605 = -1.*t52*t369*t959;
  t1607 = t1601 + t1605;
  t2150 = 2.8e-11*t1929;
  t787 = -7.e-6*t628;
  t2162 = -2.8e-11*t538;
  t642 = -1.*t628;
  t1948 = 7.e-6*t1929;
  t2762 = -1. + t1704;
  t2779 = 4.e-6*t2762;
  t2937 = 4.e-6*t538;
  t1213 = 7.e-6*t628;
  t2178 = -7.e-6*t538;
  t1086 = 4.e-6*t628;
  t3955 = Cos(var1[21]);
  t4022 = -1.*t3955;
  t4038 = 1. + t4022;
  t4243 = Sin(var1[21]);
  t3153 = 4.e-6*t1985;
  t2169 = t2162 + t628;
  t2175 = t2169*t885;
  t2203 = t2178 + t1426;
  t2262 = t2203*t1361;
  t2536 = -1.000000000016*t538;
  t2542 = 1. + t2536;
  t2555 = t2542*t1607;
  t2625 = t2175 + t2262 + t2555;
  t3204 = 7.e-6*t1985;
  t2875 = -1.000000000049*t538;
  t2883 = 1. + t2875;
  t2911 = t2883*t885;
  t2940 = t2937 + t787;
  t2979 = t2940*t1361;
  t3002 = t2162 + t642;
  t3036 = t3002*t1607;
  t3044 = t2911 + t2979 + t3036;
  t3603 = t2937 + t1213;
  t3689 = t3603*t885;
  t3754 = -6.5e-11*t538;
  t3760 = 1. + t3754;
  t3791 = t3760*t1361;
  t3807 = t2178 + t1086;
  t3848 = t3807*t1607;
  t3883 = t3689 + t3791 + t3848;
  t4440 = -1. + t3955;
  t4467 = 4.e-6*t4440;
  t2691 = -1.*t1985;
  t4758 = 4.e-6*t1929;
  t2821 = -7.e-6*t1985;
  t4162 = 7.e-6*t4038;
  t4994 = 2.8e-11*t4038;
  t5024 = -2.8e-11*t1929;
  t4671 = -7.e-6*t1929;
  t2009 = -4.e-6*t1985;
  t5191 = -4.e-6*t4243;
  t4678 = t4671 + t3153;
  t4729 = t4678*t2625;
  t4776 = t4758 + t3204;
  t4791 = t4776*t3044;
  t4814 = -6.5e-11*t1929;
  t4846 = 1. + t4814;
  t4856 = t4846*t3883;
  t4916 = t4729 + t4791 + t4856;
  t5043 = t5024 + t2691;
  t5051 = t5043*t2625;
  t5055 = -1.000000000049*t1929;
  t5069 = 1. + t5055;
  t5082 = t5069*t3044;
  t5085 = t4758 + t2821;
  t5093 = t5085*t3883;
  t5094 = t5051 + t5082 + t5093;
  t5397 = -1.000000000016*t1929;
  t5424 = 1. + t5397;
  t5455 = t5424*t2625;
  t5498 = t5024 + t1985;
  t5501 = t5498*t3044;
  t5514 = t4671 + t2009;
  t5558 = t5514*t3883;
  t5570 = t5455 + t5501 + t5558;
  t5007 = -7.e-6*t4243;
  t5593 = -2.8e-11*t4038;
  t4996 = -1.*t4243;
  t5627 = 4.e-6*t4038;
  t4482 = 7.e-6*t4243;
  t5579 = -7.e-6*t4038;
  t4322 = 4.e-6*t4243;
  t468 = 1.5843479999999999e-12*var1[16];
  t620 = -0.03874900000889869*t538;
  t654 = t624 + t642;
  t666 = -0.281211000004*t654;
  t809 = t748 + t787;
  t825 = -1.8134809999999998e-6*t809;
  t833 = t468 + t620 + t666 + t825;
  t371 = -0.15121*t369;
  t392 = t367 + t371;
  t5723 = Sin(var1[3]);
  t949 = 0.15121*t369;
  t956 = t367 + t949;
  t5731 = Cos(var1[3]);
  t1005 = 3.9608699999999997e-7*var1[16];
  t1037 = -1.1787626499999999e-16*t538;
  t1102 = t1063 + t1086;
  t1145 = -0.281211000004*t1102;
  t1220 = t748 + t1213;
  t1264 = -0.038749000006999997*t1220;
  t1293 = t1005 + t1037 + t1145 + t1264;
  t5729 = t61*t5723*t885;
  t5733 = t5731*t959;
  t5736 = t5729 + t5733;
  t5741 = t5731*t61;
  t5742 = -1.*t5723*t885*t959;
  t5743 = t5741 + t5742;
  t1388 = -2.7726089999999997e-12*var1[16];
  t1407 = -0.2812110000084994*t538;
  t1450 = t1063 + t1426;
  t1454 = -1.8134809999999998e-6*t1450;
  t1509 = t624 + t628;
  t1512 = -0.038749000006999997*t1509;
  t1572 = t1388 + t1407 + t1454 + t1512;
  t1643 = -1.9784030000000015e-12*var1[17];
  t1931 = -0.5031510000160505*t1929;
  t2031 = t1948 + t2009;
  t2102 = -3.367757e-6*t2031;
  t2154 = t2150 + t1985;
  t2155 = -0.038575000014*t2154;
  t2158 = t1643 + t1931 + t2102 + t2155;
  t5748 = -1.*t369*t5736;
  t5750 = t159*t5743;
  t5751 = t5748 + t5750;
  t5755 = t159*t5736;
  t5756 = t369*t5743;
  t5759 = t5755 + t5756;
  t2664 = 1.1305160000000008e-12*var1[17];
  t2680 = -0.03857500001589017*t1929;
  t2711 = t2150 + t2691;
  t2730 = -0.5031510000080001*t2711;
  t2823 = t2779 + t2821;
  t2858 = -3.367757e-6*t2823;
  t2861 = t2664 + t2680 + t2730 + t2858;
  t3138 = 2.826290000000002e-7*var1[17];
  t3141 = -2.18904205e-16*t1929;
  t3157 = t1948 + t3153;
  t3169 = -0.5031510000080001*t3157;
  t3225 = t2779 + t3204;
  t3308 = -0.038575000014*t3225;
  t3532 = t3138 + t3141 + t3169 + t3308;
  t3930 = 4.826289999999996e-7*var1[21];
  t4094 = -3.5540420499999995e-16*t4038;
  t4427 = t4162 + t4322;
  t4430 = -0.8031510000119999*t4427;
  t4501 = t4467 + t4482;
  t4530 = -0.038575000021*t4501;
  t4581 = t3930 + t4094 + t4430 + t4530;
  t5763 = -1.*t52*t2169*t5723;
  t5771 = t2203*t5751;
  t5775 = t2542*t5759;
  t5778 = t5763 + t5771 + t5775;
  t5787 = -1.*t2883*t52*t5723;
  t5793 = t2940*t5751;
  t5807 = t3002*t5759;
  t5808 = t5787 + t5793 + t5807;
  t5818 = -1.*t52*t3603*t5723;
  t5822 = t3760*t5751;
  t5825 = t3807*t5759;
  t5829 = t5818 + t5822 + t5825;
  t4982 = 1.9305159999999982e-12*var1[21];
  t4986 = -0.03857500002289017*t4038;
  t4998 = t4994 + t4996;
  t5003 = -0.8031510000119999*t4998;
  t5008 = t4467 + t5007;
  t5016 = -5.4677569999999994e-6*t5008;
  t5017 = t4982 + t4986 + t5003 + t5016;
  t5142 = -3.378402999999997e-12*var1[21];
  t5183 = -0.8031510000248504*t4038;
  t5198 = t4162 + t5191;
  t5199 = -5.4677569999999994e-6*t5198;
  t5261 = t4994 + t4243;
  t5333 = -0.038575000021*t5261;
  t5378 = t5142 + t5183 + t5199 + t5333;
  t5581 = t5579 + t5191;
  t5833 = t4678*t5778;
  t5834 = t4776*t5808;
  t5835 = t4846*t5829;
  t5839 = t5833 + t5834 + t5835;
  t5597 = t5593 + t4243;
  t5842 = t5043*t5778;
  t5846 = t5069*t5808;
  t5847 = t5085*t5829;
  t5849 = t5842 + t5846 + t5847;
  t5604 = -1.000000000016*t4038;
  t5607 = 1. + t5604;
  t5854 = t5424*t5778;
  t5855 = t5498*t5808;
  t5858 = t5514*t5829;
  t5859 = t5854 + t5855 + t5858;
  t5629 = t5627 + t5007;
  t5646 = -1.000000000049*t4038;
  t5660 = 1. + t5646;
  t5686 = t5593 + t4996;
  t5694 = -6.5e-11*t4038;
  t5699 = 1. + t5694;
  t5703 = t5627 + t4482;
  t5708 = t5579 + t4322;
  t5904 = -1.*t5731*t61*t885;
  t5905 = t5723*t959;
  t5907 = t5904 + t5905;
  t5912 = t61*t5723;
  t5913 = t5731*t885*t959;
  t5916 = t5912 + t5913;
  t5918 = -1.*t369*t5907;
  t5922 = t159*t5916;
  t5924 = t5918 + t5922;
  t5928 = t159*t5907;
  t5929 = t369*t5916;
  t5930 = t5928 + t5929;
  t5934 = t5731*t52*t2169;
  t5936 = t2203*t5924;
  t5938 = t2542*t5930;
  t5940 = t5934 + t5936 + t5938;
  t5944 = t2883*t5731*t52;
  t5945 = t2940*t5924;
  t5946 = t3002*t5930;
  t5949 = t5944 + t5945 + t5946;
  t5952 = t5731*t52*t3603;
  t5954 = t3760*t5924;
  t5956 = t3807*t5930;
  t5957 = t5952 + t5954 + t5956;
  t5960 = t4678*t5940;
  t5964 = t4776*t5949;
  t5965 = t4846*t5957;
  t5968 = t5960 + t5964 + t5965;
  t5971 = t5043*t5940;
  t5973 = t5069*t5949;
  t5975 = t5085*t5957;
  t5976 = t5971 + t5973 + t5975;
  t5980 = t5424*t5940;
  t5981 = t5498*t5949;
  t5984 = t5514*t5957;
  t5985 = t5980 + t5981 + t5984;
  p_output1[0]=t1293*t1361 + t1572*t1607 + t2158*t2625 + t2861*t3044 + t3532*t3883 + t4581*t4916 + t5017*t5094 + t5378*t5570 - 0.80315*(t4916*t5581 + t5094*t5597 + t5570*t5607) - 0.038576*(t4916*t5629 + t5094*t5660 + t5570*t5686) - 0.148715*(t4916*t5699 + t5094*t5703 + t5570*t5708) + t392*t52*t61 + t833*t885 - 1.*t52*t956*t959 + var1[0];
  p_output1[1]=t392*t5736 + t1293*t5751 + t1572*t5759 + t2158*t5778 + t2861*t5808 + t3532*t5829 + t4581*t5839 + t5017*t5849 + t5378*t5859 - 0.80315*(t5581*t5839 + t5597*t5849 + t5607*t5859) - 0.038576*(t5629*t5839 + t5660*t5849 + t5686*t5859) - 0.148715*(t5699*t5839 + t5703*t5849 + t5708*t5859) - 1.*t52*t5723*t833 + t5743*t956 + var1[1];
  p_output1[2]=t392*t5907 + t1293*t5924 + t1572*t5930 + t2158*t5940 + t2861*t5949 + t3532*t5957 + t4581*t5968 + t5017*t5976 + t5378*t5985 - 0.80315*(t5581*t5968 + t5597*t5976 + t5607*t5985) - 0.038576*(t5629*t5968 + t5660*t5976 + t5686*t5985) - 0.148715*(t5699*t5968 + t5703*t5976 + t5708*t5985) + t52*t5731*t833 + t5916*t956 + var1[2];
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

#include "Joint_rr_foot_sphere_center.hh"

namespace SymFunction
{

void Joint_rr_foot_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
