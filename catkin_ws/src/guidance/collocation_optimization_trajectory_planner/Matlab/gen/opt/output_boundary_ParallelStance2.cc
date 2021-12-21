/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:15:46 GMT+01:00
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
  double t52;
  double t9;
  double t14;
  double t17;
  double t20;
  double t24;
  double t34;
  double t53;
  double t59;
  double t65;
  double t87;
  double t10;
  double t102;
  double t95;
  double t144;
  double t152;
  double t158;
  double t179;
  double t184;
  double t192;
  double t212;
  double t215;
  double t221;
  double t226;
  double t273;
  double t231;
  double t244;
  double t246;
  double t258;
  double t261;
  double t267;
  double t285;
  double t288;
  double t290;
  double t291;
  double t332;
  double t339;
  double t344;
  double t346;
  double t347;
  double t350;
  double t49;
  double t63;
  double t81;
  double t90;
  double t94;
  double t23;
  double t38;
  double t404;
  double t100;
  double t101;
  double t409;
  double t115;
  double t119;
  double t129;
  double t137;
  double t142;
  double t408;
  double t410;
  double t412;
  double t416;
  double t418;
  double t421;
  double t165;
  double t172;
  double t173;
  double t224;
  double t228;
  double t230;
  double t423;
  double t424;
  double t427;
  double t429;
  double t430;
  double t433;
  double t269;
  double t272;
  double t276;
  double t281;
  double t284;
  double t307;
  double t311;
  double t322;
  double t329;
  double t331;
  double t438;
  double t442;
  double t450;
  double t453;
  double t465;
  double t466;
  double t468;
  double t470;
  double t359;
  double t361;
  double t476;
  double t484;
  double t485;
  double t486;
  double t377;
  double t378;
  double t534;
  double t539;
  double t540;
  double t543;
  double t544;
  double t548;
  double t552;
  double t553;
  double t554;
  double t559;
  double t560;
  double t562;
  double t567;
  double t569;
  double t574;
  double t576;
  double t588;
  double t589;
  double t594;
  double t595;
  double t597;
  double t601;
  double t603;
  double t610;
  double t695;
  double t697;
  double t702;
  double t712;
  double t674;
  double t675;
  double t680;
  double t681;
  double t685;
  double t719;
  double t724;
  double t750;
  double t708;
  double t816;
  double t817;
  double t818;
  double t822;
  double t789;
  double t772;
  double t777;
  double t779;
  double t806;
  double t807;
  double t810;
  double t830;
  double t727;
  double t841;
  double t713;
  double t821;
  double t892;
  double t895;
  double t918;
  double t763;
  double t846;
  double t754;
  double t943;
  double t842;
  double t843;
  double t850;
  double t852;
  double t861;
  double t863;
  double t870;
  double t872;
  double t947;
  double t910;
  double t912;
  double t914;
  double t924;
  double t925;
  double t927;
  double t928;
  double t932;
  double t969;
  double t970;
  double t974;
  double t975;
  double t977;
  double t978;
  double t979;
  double t982;
  double t886;
  double t990;
  double t896;
  double t1009;
  double t985;
  double t824;
  double t694;
  double t707;
  double t714;
  double t715;
  double t728;
  double t729;
  double t732;
  double t686;
  double t688;
  double t736;
  double t743;
  double t747;
  double t748;
  double t756;
  double t759;
  double t764;
  double t765;
  double t767;
  double t783;
  double t786;
  double t790;
  double t791;
  double t793;
  double t796;
  double t799;
  double t815;
  double t819;
  double t825;
  double t827;
  double t836;
  double t837;
  double t838;
  double t1059;
  double t1063;
  double t1069;
  double t1074;
  double t1078;
  double t1079;
  double t876;
  double t882;
  double t888;
  double t890;
  double t897;
  double t903;
  double t904;
  double t938;
  double t939;
  double t944;
  double t946;
  double t950;
  double t953;
  double t963;
  double t986;
  double t1083;
  double t1084;
  double t1101;
  double t1102;
  double t991;
  double t1104;
  double t1107;
  double t1112;
  double t1117;
  double t1003;
  double t1004;
  double t1121;
  double t1122;
  double t1123;
  double t1124;
  double t1012;
  double t1015;
  double t1017;
  double t1021;
  double t1031;
  double t1033;
  double t1039;
  double t1044;
  double t1179;
  double t1184;
  double t1191;
  double t1194;
  double t1195;
  double t1196;
  double t1215;
  double t1216;
  double t1217;
  double t1218;
  double t1221;
  double t1224;
  double t1232;
  double t1233;
  double t1235;
  double t1238;
  double t1240;
  double t1242;
  t52 = Cos(var1[10]);
  t9 = Cos(var1[4]);
  t14 = Cos(var1[9]);
  t17 = -1.*t14;
  t20 = 1. + t17;
  t24 = Sin(var1[9]);
  t34 = -0.15121*t24;
  t53 = -1.*t52;
  t59 = 1. + t53;
  t65 = -1. + t52;
  t87 = Sin(var1[10]);
  t10 = Cos(var1[5]);
  t102 = Sin(var1[5]);
  t95 = Sin(var1[4]);
  t144 = -1.*t9*t10*t24;
  t152 = -1.*t14*t9*t102;
  t158 = t144 + t152;
  t179 = t14*t9*t10;
  t184 = -1.*t9*t24*t102;
  t192 = t179 + t184;
  t212 = Cos(var1[11]);
  t215 = -1.*t212;
  t221 = 1. + t215;
  t226 = Sin(var1[11]);
  t273 = -1. + t212;
  t231 = t87*t95;
  t244 = -4.e-6*t87*t158;
  t246 = -1.000000000016*t59;
  t258 = 1. + t246;
  t261 = t258*t192;
  t267 = t231 + t244 + t261;
  t285 = t52*t95;
  t288 = 4.e-6*t59*t158;
  t290 = -1.*t87*t192;
  t291 = t285 + t288 + t290;
  t332 = 4.e-6*t59*t95;
  t339 = 1.6e-11*t65;
  t344 = 1. + t339;
  t346 = t344*t158;
  t347 = 4.e-6*t87*t192;
  t350 = t332 + t346 + t347;
  t49 = -4.9936e-13*var1[10];
  t63 = -0.038749*t59;
  t81 = 6.19984e-13*t65;
  t90 = -0.281210000004*t87;
  t94 = t49 + t63 + t81 + t90;
  t23 = 0.15121*t20;
  t38 = t23 + t34;
  t404 = Sin(var1[3]);
  t100 = -0.15121*t20;
  t101 = t100 + t34;
  t409 = Cos(var1[3]);
  t115 = -1.2484e-7*var1[10];
  t119 = 2.479936e-18*t59;
  t129 = -1.54996e-7*t65;
  t137 = 1.124840000016e-6*t87;
  t142 = t115 + t119 + t129 + t137;
  t408 = t10*t404*t95;
  t410 = t409*t102;
  t412 = t408 + t410;
  t416 = t409*t10;
  t418 = -1.*t404*t95*t102;
  t421 = t416 + t418;
  t165 = 0.281210000008499*t59;
  t172 = -0.03874900000062*t87;
  t173 = t165 + t172;
  t224 = 0.50315000001605*t221;
  t228 = -0.0398890000006382*t226;
  t230 = t224 + t228;
  t423 = -1.*t24*t412;
  t424 = t14*t421;
  t427 = t423 + t424;
  t429 = t14*t412;
  t430 = t24*t421;
  t433 = t429 + t430;
  t269 = -5.04e-14*var1[11];
  t272 = -0.039889*t221;
  t276 = 6.38224e-13*t273;
  t281 = -0.503150000008*t226;
  t284 = t269 + t272 + t276 + t281;
  t307 = -1.26e-8*var1[11];
  t311 = 2.552896e-18*t221;
  t322 = -1.59556e-7*t273;
  t329 = 2.012600000032e-6*t226;
  t331 = t307 + t311 + t322 + t329;
  t438 = -1.*t9*t87*t404;
  t442 = -4.e-6*t87*t427;
  t450 = t258*t433;
  t453 = t438 + t442 + t450;
  t465 = -1.*t52*t9*t404;
  t466 = 4.e-6*t59*t427;
  t468 = -1.*t87*t433;
  t470 = t465 + t466 + t468;
  t359 = 1.6e-11*t273;
  t361 = 1. + t359;
  t476 = -4.e-6*t59*t9*t404;
  t484 = t344*t427;
  t485 = 4.e-6*t87*t433;
  t486 = t476 + t484 + t485;
  t377 = -1.000000000016*t221;
  t378 = 1. + t377;
  t534 = -1.*t409*t10*t95;
  t539 = t404*t102;
  t540 = t534 + t539;
  t543 = t10*t404;
  t544 = t409*t95*t102;
  t548 = t543 + t544;
  t552 = -1.*t24*t540;
  t553 = t14*t548;
  t554 = t552 + t553;
  t559 = t14*t540;
  t560 = t24*t548;
  t562 = t559 + t560;
  t567 = t409*t9*t87;
  t569 = -4.e-6*t87*t554;
  t574 = t258*t562;
  t576 = t567 + t569 + t574;
  t588 = t52*t409*t9;
  t589 = 4.e-6*t59*t554;
  t594 = -1.*t87*t562;
  t595 = t588 + t589 + t594;
  t597 = 4.e-6*t59*t409*t9;
  t601 = t344*t554;
  t603 = 4.e-6*t87*t562;
  t610 = t597 + t601 + t603;
  t695 = Cos(var1[16]);
  t697 = -1.*t695;
  t702 = 1. + t697;
  t712 = Sin(var1[16]);
  t674 = Cos(var1[15]);
  t675 = -1.*t674;
  t680 = 1. + t675;
  t681 = -0.15121*t680;
  t685 = Sin(var1[15]);
  t719 = -1. + t695;
  t724 = 4.e-6*t719;
  t750 = 7.e-6*t702;
  t708 = 2.8e-11*t702;
  t816 = Cos(var1[17]);
  t817 = -1.*t816;
  t818 = 1. + t817;
  t822 = Sin(var1[17]);
  t789 = -4.e-6*t712;
  t772 = -1.*t9*t10*t685;
  t777 = -1.*t674*t9*t102;
  t779 = t772 + t777;
  t806 = t674*t9*t10;
  t807 = -1.*t9*t685*t102;
  t810 = t806 + t807;
  t830 = 2.8e-11*t818;
  t727 = -7.e-6*t712;
  t841 = -2.8e-11*t702;
  t713 = -1.*t712;
  t821 = 7.e-6*t818;
  t892 = -1. + t816;
  t895 = 4.e-6*t892;
  t918 = 4.e-6*t702;
  t763 = 7.e-6*t712;
  t846 = -7.e-6*t702;
  t754 = 4.e-6*t712;
  t943 = 4.e-6*t822;
  t842 = t841 + t712;
  t843 = t842*t95;
  t850 = t846 + t789;
  t852 = t850*t779;
  t861 = -1.000000000016*t702;
  t863 = 1. + t861;
  t870 = t863*t810;
  t872 = t843 + t852 + t870;
  t947 = 7.e-6*t822;
  t910 = -1.000000000049*t702;
  t912 = 1. + t910;
  t914 = t912*t95;
  t924 = t918 + t727;
  t925 = t924*t779;
  t927 = t841 + t713;
  t928 = t927*t810;
  t932 = t914 + t925 + t928;
  t969 = t918 + t763;
  t970 = t969*t95;
  t974 = -6.5e-11*t702;
  t975 = 1. + t974;
  t977 = t975*t779;
  t978 = t846 + t754;
  t979 = t978*t810;
  t982 = t970 + t977 + t979;
  t886 = -1.*t822;
  t990 = 4.e-6*t818;
  t896 = -7.e-6*t822;
  t1009 = -2.8e-11*t818;
  t985 = -7.e-6*t818;
  t824 = -4.e-6*t822;
  t694 = 1.5843479999999999e-12*var1[16];
  t707 = -0.03874900000889869*t702;
  t714 = t708 + t713;
  t715 = -0.281211000004*t714;
  t728 = t724 + t727;
  t729 = -1.8134809999999998e-6*t728;
  t732 = t694 + t707 + t715 + t729;
  t686 = -0.15121*t685;
  t688 = t681 + t686;
  t736 = 0.15121*t685;
  t743 = t681 + t736;
  t747 = 3.9608699999999997e-7*var1[16];
  t748 = -1.1787626499999999e-16*t702;
  t756 = t750 + t754;
  t759 = -0.281211000004*t756;
  t764 = t724 + t763;
  t765 = -0.038749000006999997*t764;
  t767 = t747 + t748 + t759 + t765;
  t783 = -2.7726089999999997e-12*var1[16];
  t786 = -0.2812110000084994*t702;
  t790 = t750 + t789;
  t791 = -1.8134809999999998e-6*t790;
  t793 = t708 + t712;
  t796 = -0.038749000006999997*t793;
  t799 = t783 + t786 + t791 + t796;
  t815 = -1.9784030000000015e-12*var1[17];
  t819 = -0.5031510000160505*t818;
  t825 = t821 + t824;
  t827 = -3.367757e-6*t825;
  t836 = t830 + t822;
  t837 = -0.038575000014*t836;
  t838 = t815 + t819 + t827 + t837;
  t1059 = -1.*t685*t412;
  t1063 = t674*t421;
  t1069 = t1059 + t1063;
  t1074 = t674*t412;
  t1078 = t685*t421;
  t1079 = t1074 + t1078;
  t876 = 1.1305160000000008e-12*var1[17];
  t882 = -0.03857500001589017*t818;
  t888 = t830 + t886;
  t890 = -0.5031510000080001*t888;
  t897 = t895 + t896;
  t903 = -3.367757e-6*t897;
  t904 = t876 + t882 + t890 + t903;
  t938 = 2.826290000000002e-7*var1[17];
  t939 = -2.18904205e-16*t818;
  t944 = t821 + t943;
  t946 = -0.5031510000080001*t944;
  t950 = t895 + t947;
  t953 = -0.038575000014*t950;
  t963 = t938 + t939 + t946 + t953;
  t986 = t985 + t943;
  t1083 = -1.*t9*t842*t404;
  t1084 = t850*t1069;
  t1101 = t863*t1079;
  t1102 = t1083 + t1084 + t1101;
  t991 = t990 + t947;
  t1104 = -1.*t912*t9*t404;
  t1107 = t924*t1069;
  t1112 = t927*t1079;
  t1117 = t1104 + t1107 + t1112;
  t1003 = -6.5e-11*t818;
  t1004 = 1. + t1003;
  t1121 = -1.*t9*t969*t404;
  t1122 = t975*t1069;
  t1123 = t978*t1079;
  t1124 = t1121 + t1122 + t1123;
  t1012 = t1009 + t886;
  t1015 = -1.000000000049*t818;
  t1017 = 1. + t1015;
  t1021 = t990 + t896;
  t1031 = -1.000000000016*t818;
  t1033 = 1. + t1031;
  t1039 = t1009 + t822;
  t1044 = t985 + t824;
  t1179 = -1.*t685*t540;
  t1184 = t674*t548;
  t1191 = t1179 + t1184;
  t1194 = t674*t540;
  t1195 = t685*t548;
  t1196 = t1194 + t1195;
  t1215 = t409*t9*t842;
  t1216 = t850*t1191;
  t1217 = t863*t1196;
  t1218 = t1215 + t1216 + t1217;
  t1221 = t912*t409*t9;
  t1224 = t924*t1191;
  t1232 = t927*t1196;
  t1233 = t1221 + t1224 + t1232;
  t1235 = t409*t9*t969;
  t1238 = t975*t1191;
  t1240 = t978*t1196;
  t1242 = t1235 + t1238 + t1240;
  p_output1[0]=t142*t158 + t173*t192 + t230*t267 + t284*t291 + t331*t350 - 0.041195*(-1.*t226*t267 + t212*t291 + 4.e-6*t221*t350) - 0.14871*(4.e-6*t226*t267 + 4.e-6*t221*t291 + t350*t361) + 0.803147*(t226*t291 - 4.e-6*t226*t350 + t267*t378) - 1.*t101*t102*t9 + t10*t38*t9 + t94*t95 + var1[0];
  p_output1[1]=t38*t412 + t101*t421 + t142*t427 + t173*t433 + t230*t453 + t284*t470 + t331*t486 - 0.041195*(-1.*t226*t453 + t212*t470 + 4.e-6*t221*t486) + 0.803147*(t378*t453 + t226*t470 - 4.e-6*t226*t486) - 0.14871*(4.e-6*t226*t453 + 4.e-6*t221*t470 + t361*t486) - 1.*t404*t9*t94 + var1[1];
  p_output1[2]=t38*t540 + t101*t548 + t142*t554 + t173*t562 + t230*t576 + t284*t595 + t331*t610 - 0.041195*(-1.*t226*t576 + t212*t595 + 4.e-6*t221*t610) + 0.803147*(t378*t576 + t226*t595 - 4.e-6*t226*t610) - 0.14871*(4.e-6*t226*t576 + 4.e-6*t221*t595 + t361*t610) + t409*t9*t94 + var1[2];
  p_output1[3]=t767*t779 + t799*t810 + t838*t872 + t10*t688*t9 - 1.*t102*t743*t9 + t904*t932 + t732*t95 + t963*t982 - 0.038576*(t1012*t872 + t1017*t932 + t1021*t982) - 0.80315*(t1033*t872 + t1039*t932 + t1044*t982) - 0.148715*(t1004*t982 + t872*t986 + t932*t991) + var1[0];
  p_output1[4]=-0.038576*(t1012*t1102 + t1017*t1117 + t1021*t1124) - 0.80315*(t1033*t1102 + t1039*t1117 + t1044*t1124) + t412*t688 + t421*t743 + t1069*t767 + t1079*t799 + t1102*t838 - 1.*t404*t732*t9 + t1117*t904 + t1124*t963 - 0.148715*(t1004*t1124 + t1102*t986 + t1117*t991) + var1[1];
  p_output1[5]=-0.038576*(t1012*t1218 + t1017*t1233 + t1021*t1242) - 0.80315*(t1033*t1218 + t1039*t1233 + t1044*t1242) + t540*t688 + t548*t743 + t1191*t767 + t1196*t799 + t1218*t838 + t409*t732*t9 + t1233*t904 + t1242*t963 - 0.148715*(t1004*t1242 + t1218*t986 + t1233*t991) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "output_boundary_ParallelStance2.hh"

namespace ParallelStance2
{

void output_boundary_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
