/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:15:02 GMT+01:00
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
  double t210;
  double t112;
  double t317;
  double t113;
  double t212;
  double t256;
  double t273;
  double t319;
  double t344;
  double t383;
  double t384;
  double t399;
  double t548;
  double t546;
  double t475;
  double t493;
  double t500;
  double t521;
  double t523;
  double t537;
  double t560;
  double t561;
  double t567;
  double t423;
  double t641;
  double t452;
  double t473;
  double t620;
  double t626;
  double t584;
  double t658;
  double t666;
  double t667;
  double t675;
  double t681;
  double t684;
  double t688;
  double t689;
  double t697;
  double t703;
  double t709;
  double t757;
  double t758;
  double t759;
  double t762;
  double t775;
  double t785;
  double t786;
  double t787;
  double t789;
  double t795;
  double t796;
  double t799;
  double t800;
  double t539;
  double t569;
  double t575;
  double t586;
  double t589;
  double t592;
  double t356;
  double t402;
  double t420;
  double t581;
  double t603;
  double t604;
  double t833;
  double t676;
  double t714;
  double t720;
  double t727;
  double t728;
  double t735;
  double t849;
  double t628;
  double t642;
  double t648;
  double t649;
  double t723;
  double t738;
  double t746;
  double t794;
  double t801;
  double t804;
  double t809;
  double t810;
  double t814;
  double t764;
  double t776;
  double t777;
  double t780;
  double t805;
  double t815;
  double t818;
  double t834;
  double t835;
  double t840;
  double t854;
  double t856;
  double t858;
  double t868;
  double t870;
  double t871;
  double t875;
  double t876;
  double t878;
  double t886;
  double t888;
  double t894;
  double t896;
  double t899;
  double t903;
  double t971;
  double t974;
  double t977;
  double t980;
  double t984;
  double t985;
  double t990;
  double t994;
  double t998;
  double t999;
  double t1000;
  double t1001;
  double t1003;
  double t1011;
  double t1012;
  double t1013;
  double t1019;
  double t960;
  double t961;
  double t964;
  double t969;
  double t970;
  double t986;
  double t1010;
  double t1023;
  double t1025;
  double t1028;
  double t1029;
  double t1032;
  double t1033;
  double t1037;
  double t1038;
  double t1040;
  double t965;
  double t1026;
  double t1042;
  double t1043;
  double t1046;
  double t1047;
  double t1049;
  double t1050;
  double t445;
  double t612;
  double t614;
  double t1059;
  double t1060;
  double t1062;
  double t1066;
  double t1071;
  double t1072;
  double t1074;
  double t1075;
  double t1076;
  double t1078;
  double t656;
  double t747;
  double t751;
  double t1045;
  double t1054;
  double t1057;
  double t1084;
  double t1087;
  double t1091;
  double t1063;
  double t1080;
  double t1082;
  double t783;
  double t820;
  double t821;
  double t1058;
  double t1097;
  double t1109;
  double t1124;
  double t1135;
  double t1152;
  double t1172;
  double t1176;
  double t1194;
  double t1200;
  double t1212;
  double t1222;
  double t1355;
  double t1357;
  double t1358;
  double t1361;
  double t1362;
  double t1364;
  double t1365;
  double t1381;
  double t1384;
  double t1385;
  double t1387;
  double t1391;
  double t1393;
  double t1396;
  double t1400;
  double t1424;
  double t1427;
  double t1428;
  double t1438;
  double t1439;
  double t1440;
  double t1441;
  t210 = Cos(var1[8]);
  t112 = Cos(var1[7]);
  t317 = -1. + t210;
  t113 = -1. + t112;
  t212 = -1.*t210;
  t256 = 1. + t212;
  t273 = 1.6e-11*t256;
  t319 = 1.6e-11*t317;
  t344 = 1. + t273 + t319;
  t383 = 4.e-6*t317;
  t384 = -4.e-6*t210;
  t399 = t383 + t384;
  t548 = Sin(var1[7]);
  t546 = Cos(var1[6]);
  t475 = 1.6e-11*t113;
  t493 = 1. + t475;
  t500 = t493*t344;
  t521 = 4.e-6*t113*t399;
  t523 = t500 + t521;
  t537 = Sin(var1[6]);
  t560 = 4.e-6*t344*t548;
  t561 = t399*t548;
  t567 = t560 + t561;
  t423 = Sin(var1[4]);
  t641 = Sin(var1[8]);
  t452 = Cos(var1[4]);
  t473 = Cos(var1[5]);
  t620 = -1.000000000016*t256;
  t626 = 1. + t620;
  t584 = Sin(var1[5]);
  t658 = -4.e-6*t626*t548;
  t666 = -4.e-6*t493*t641;
  t667 = -4.e-6*t113*t641;
  t675 = t658 + t666 + t667;
  t681 = -1.*t112;
  t684 = 1. + t681;
  t688 = -1.000000000016*t684;
  t689 = 1. + t688;
  t697 = t689*t626;
  t703 = -1.000000000016*t548*t641;
  t709 = t697 + t703;
  t757 = -1. + t273;
  t758 = 4.e-6*t757;
  t759 = 4.e-6*t256;
  t762 = t758 + t759;
  t775 = t273 + t212;
  t785 = 4.e-6*t762*t548;
  t786 = t775*t548;
  t787 = -1.000000000016*t689*t641;
  t789 = t785 + t786 + t787;
  t795 = t493*t762;
  t796 = 4.e-6*t113*t775;
  t799 = 4.000000000064e-6*t548*t641;
  t800 = t795 + t796 + t799;
  t539 = -1.*t523*t537;
  t569 = t546*t567;
  t575 = t539 + t569;
  t586 = t546*t523;
  t589 = t537*t567;
  t592 = t586 + t589;
  t356 = 4.e-6*t113*t344;
  t402 = t112*t399;
  t420 = t356 + t402;
  t581 = t473*t575;
  t603 = -1.*t584*t592;
  t604 = t581 + t603;
  t833 = Cos(var1[3]);
  t676 = -1.*t537*t675;
  t714 = t546*t709;
  t720 = t676 + t714;
  t727 = t546*t675;
  t728 = t537*t709;
  t735 = t727 + t728;
  t849 = Sin(var1[3]);
  t628 = -1.*t626*t548;
  t642 = -1.6e-11*t113*t641;
  t648 = -1.*t112*t641;
  t649 = t628 + t642 + t648;
  t723 = t473*t720;
  t738 = -1.*t584*t735;
  t746 = t723 + t738;
  t794 = t537*t789;
  t801 = t546*t800;
  t804 = t794 + t801;
  t809 = t546*t789;
  t810 = -1.*t537*t800;
  t814 = t809 + t810;
  t764 = 4.e-6*t113*t762;
  t776 = t112*t775;
  t777 = 1.000000000016*t548*t641;
  t780 = t764 + t776 + t777;
  t805 = -1.*t584*t804;
  t815 = t473*t814;
  t818 = t805 + t815;
  t834 = t584*t575;
  t835 = t473*t592;
  t840 = t834 + t835;
  t854 = t452*t420;
  t856 = -1.*t423*t604;
  t858 = t854 + t856;
  t868 = t584*t720;
  t870 = t473*t735;
  t871 = t868 + t870;
  t875 = t452*t649;
  t876 = -1.*t423*t746;
  t878 = t875 + t876;
  t886 = t473*t804;
  t888 = t584*t814;
  t894 = t886 + t888;
  t896 = t452*t780;
  t899 = -1.*t423*t818;
  t903 = t896 + t899;
  t971 = 5.136e-14*var1[8];
  t974 = -0.03874900000062*t256;
  t977 = 5.9484e-7*t317;
  t980 = -0.03875*t210;
  t984 = -0.299999999992*t641;
  t985 = t971 + t974 + t977 + t980 + t984;
  t990 = -1.284e-8*var1[8];
  t994 = 1. + t319;
  t998 = 0.14871*t994;
  t999 = -1.5499600000248e-7*t256;
  t1000 = -1.55e-7*t317;
  t1001 = -1.199999999968e-6*t641;
  t1003 = t990 + t998 + t999 + t1000 + t1001;
  t1011 = 0.80321*t626;
  t1012 = 0.503210000016051*t256;
  t1013 = -4.05159380016e-7*t641;
  t1019 = t1011 + t1012 + t1013;
  t960 = -1.*t546;
  t961 = 1. + t960;
  t964 = 0.15121*t961;
  t969 = 0.281210000008499*t684;
  t970 = 0.03874900000062*t548;
  t986 = t548*t985;
  t1010 = 4.e-6*t548*t1003;
  t1023 = t689*t1019;
  t1025 = t969 + t970 + t986 + t1010 + t1023;
  t1028 = -1.2484e-7*var1[7];
  t1029 = -1.5499600000248e-7*t684;
  t1032 = 1.124840000016e-6*t548;
  t1033 = 4.e-6*t113*t985;
  t1037 = t493*t1003;
  t1038 = -4.e-6*t548*t1019;
  t1040 = t1028 + t1029 + t1032 + t1033 + t1037 + t1038;
  t965 = -0.15121*t537;
  t1026 = t537*t1025;
  t1042 = t546*t1040;
  t1043 = t964 + t965 + t1026 + t1042;
  t1046 = 0.15121*t537;
  t1047 = t546*t1025;
  t1049 = -1.*t537*t1040;
  t1050 = t964 + t1046 + t1047 + t1049;
  t445 = t420*t423;
  t612 = t452*t604;
  t614 = t445 + t612;
  t1059 = -1.*t584*t1043;
  t1060 = t473*t1050;
  t1062 = t1059 + t1060;
  t1066 = 4.9936e-13*var1[7];
  t1071 = -0.03874900000062*t684;
  t1072 = 0.281210000004*t548;
  t1074 = t112*t985;
  t1075 = 4.e-6*t113*t1003;
  t1076 = -1.*t548*t1019;
  t1078 = t1066 + t1071 + t1072 + t1074 + t1075 + t1076;
  t656 = t423*t649;
  t747 = t452*t746;
  t751 = t656 + t747;
  t1045 = t473*t1043;
  t1054 = t584*t1050;
  t1057 = t1045 + t1054;
  t1084 = t452*t1062;
  t1087 = t423*t1078;
  t1091 = t1084 + t1087;
  t1063 = -1.*t423*t1062;
  t1080 = t452*t1078;
  t1082 = t1063 + t1080;
  t783 = t423*t780;
  t820 = t452*t818;
  t821 = t783 + t820;
  t1058 = -1.*t840*t1057;
  t1097 = t1057*t871;
  t1109 = t840*t1057;
  t1124 = -1.*t1057*t894;
  t1135 = -1.*t1057*t871;
  t1152 = t1057*t894;
  t1172 = -1.*t420*t1078;
  t1176 = t1078*t649;
  t1194 = t420*t1078;
  t1200 = -1.*t1078*t780;
  t1212 = -1.*t1078*t649;
  t1222 = t1078*t780;
  t1355 = -1.*t399*t985;
  t1357 = -1.*t344*t1003;
  t1358 = t1355 + t1357;
  t1361 = t626*t1019;
  t1362 = -1.*t985*t641;
  t1364 = -4.e-6*t1003*t641;
  t1365 = t1361 + t1362 + t1364;
  t1381 = -1.*t626*t1019;
  t1384 = t985*t641;
  t1385 = 4.e-6*t1003*t641;
  t1387 = t1381 + t1384 + t1385;
  t1391 = t775*t985;
  t1393 = t762*t1003;
  t1396 = -1.000000000016*t1019*t641;
  t1400 = t1391 + t1393 + t1396;
  t1424 = t399*t985;
  t1427 = t344*t1003;
  t1428 = t1424 + t1427;
  t1438 = -1.*t775*t985;
  t1439 = -1.*t762*t1003;
  t1440 = 1.000000000016*t1019*t641;
  t1441 = t1438 + t1439 + t1440;
  p_output1[0]=t751*var2[0] + t821*var2[1] + t614*var2[2];
  p_output1[1]=(t833*t871 - 1.*t849*t878)*var2[0] + (t833*t894 - 1.*t849*t903)*var2[1] + (t833*t840 - 1.*t849*t858)*var2[2];
  p_output1[2]=(t849*t871 + t833*t878)*var2[0] + (t849*t894 + t833*t903)*var2[1] + (t840*t849 + t833*t858)*var2[2];
  p_output1[3]=(t821*(t1109 + t1091*t614 + t1082*t858) + t614*(t1124 - 1.*t1091*t821 - 1.*t1082*t903))*var2[0] + (t751*(t1058 - 1.*t1091*t614 - 1.*t1082*t858) + t614*(t1097 + t1091*t751 + t1082*t878))*var2[1] + (t821*(t1135 - 1.*t1091*t751 - 1.*t1082*t878) + t751*(t1152 + t1091*t821 + t1082*t903))*var2[2];
  p_output1[4]=((t1124 + t1200 - 1.*t1062*t818)*t840 + (t1109 + t1194 + t1062*t604)*t894)*var2[0] + ((t1097 + t1176 + t1062*t746)*t840 + (t1058 + t1172 - 1.*t1062*t604)*t871)*var2[1] + ((t1152 + t1222 + t1062*t818)*t871 + (t1135 + t1212 - 1.*t1062*t746)*t894)*var2[2];
  p_output1[5]=((t1194 + t1050*t575 + t1043*t592)*t780 + t420*(t1200 - 1.*t1043*t804 - 1.*t1050*t814))*var2[0] + ((t1172 - 1.*t1050*t575 - 1.*t1043*t592)*t649 + t420*(t1176 + t1050*t720 + t1043*t735))*var2[1] + ((t1212 - 1.*t1050*t720 - 1.*t1043*t735)*t780 + t649*(t1222 + t1043*t804 + t1050*t814))*var2[2];
  p_output1[6]=(-0.15121*t675 + 0.15121*t709 + (t1194 + t1040*t523 + t1025*t567)*t780 + t420*(t1200 - 1.*t1025*t789 - 1.*t1040*t800))*var2[0] + ((t1172 - 1.*t1040*t523 - 1.*t1025*t567)*t649 + t420*(t1176 + t1040*t675 + t1025*t709) + 0.15121*t789 - 0.15121*t800)*var2[1] + (-0.15121*t523 + 0.15121*t567 + (t1212 - 1.*t1040*t675 - 1.*t1025*t709)*t780 + t649*(t1222 + t1025*t789 + t1040*t800))*var2[2];
  p_output1[7]=(t1441*t344 + 0.038749*t626 - 0.281210000004*t641 + t1428*t762 + 4.e-6*(-1.*t1441*t399 - 1.*t1428*t775))*var2[0] + (t1365*t344 - 0.03874900000062*t641 - 4.e-6*t1358*t641 + 4.e-6*(-1.*t1365*t399 + t1358*t641) + 1.e-6*t762 + 0.28121*t775)*var2[1] + (1.e-6*t344 + 0.28121*t399 - 4.e-6*t1400*t641 + t1387*t762 + 4.e-6*(t1400*t641 - 1.*t1387*t775))*var2[2];
  p_output1[8]=-4.05160619990483e-7*var2[0] + 0.300000000004851*var2[1] - 1.284e-8*var2[2];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
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

#include "fFlFoot_vec_ParallelStance2.hh"

namespace ParallelStance2
{

void fFlFoot_vec_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
