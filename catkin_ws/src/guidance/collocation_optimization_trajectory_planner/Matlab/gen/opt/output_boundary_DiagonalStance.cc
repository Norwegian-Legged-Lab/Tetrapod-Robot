/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:28:57 GMT+01:00
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
  double t7;
  double t21;
  double t24;
  double t26;
  double t27;
  double t42;
  double t14;
  double t60;
  double t83;
  double t89;
  double t95;
  double t107;
  double t137;
  double t171;
  double t69;
  double t75;
  double t76;
  double t116;
  double t122;
  double t127;
  double t194;
  double t196;
  double t197;
  double t212;
  double t172;
  double t175;
  double t181;
  double t182;
  double t184;
  double t188;
  double t304;
  double t259;
  double t279;
  double t281;
  double t296;
  double t219;
  double t222;
  double t223;
  double t224;
  double t225;
  double t226;
  double t48;
  double t56;
  double t401;
  double t384;
  double t61;
  double t66;
  double t393;
  double t406;
  double t408;
  double t411;
  double t412;
  double t415;
  double t81;
  double t100;
  double t110;
  double t112;
  double t132;
  double t133;
  double t134;
  double t141;
  double t147;
  double t150;
  double t151;
  double t421;
  double t422;
  double t424;
  double t431;
  double t432;
  double t433;
  double t191;
  double t204;
  double t213;
  double t215;
  double t236;
  double t244;
  double t246;
  double t297;
  double t298;
  double t299;
  double t300;
  double t306;
  double t308;
  double t441;
  double t445;
  double t448;
  double t449;
  double t470;
  double t472;
  double t475;
  double t478;
  double t455;
  double t457;
  double t460;
  double t464;
  double t349;
  double t354;
  double t518;
  double t519;
  double t528;
  double t532;
  double t534;
  double t535;
  double t550;
  double t554;
  double t557;
  double t565;
  double t566;
  double t567;
  double t580;
  double t582;
  double t583;
  double t589;
  double t614;
  double t616;
  double t617;
  double t618;
  double t592;
  double t597;
  double t604;
  double t609;
  double t702;
  double t707;
  double t708;
  double t713;
  double t671;
  double t674;
  double t685;
  double t687;
  double t690;
  double t722;
  double t738;
  double t777;
  double t711;
  double t879;
  double t880;
  double t884;
  double t892;
  double t819;
  double t800;
  double t803;
  double t809;
  double t855;
  double t856;
  double t857;
  double t910;
  double t742;
  double t925;
  double t714;
  double t890;
  double t966;
  double t967;
  double t990;
  double t787;
  double t934;
  double t780;
  double t1020;
  double t926;
  double t933;
  double t935;
  double t936;
  double t937;
  double t946;
  double t947;
  double t948;
  double t1033;
  double t981;
  double t983;
  double t986;
  double t993;
  double t994;
  double t995;
  double t1004;
  double t1010;
  double t1043;
  double t1046;
  double t1050;
  double t1053;
  double t1054;
  double t1056;
  double t1057;
  double t1058;
  double t960;
  double t1074;
  double t968;
  double t1089;
  double t1062;
  double t894;
  double t696;
  double t710;
  double t716;
  double t718;
  double t748;
  double t752;
  double t753;
  double t691;
  double t694;
  double t762;
  double t763;
  double t768;
  double t769;
  double t782;
  double t784;
  double t792;
  double t795;
  double t799;
  double t816;
  double t817;
  double t826;
  double t829;
  double t835;
  double t841;
  double t845;
  double t875;
  double t889;
  double t895;
  double t896;
  double t919;
  double t922;
  double t924;
  double t1150;
  double t1158;
  double t1159;
  double t1161;
  double t1165;
  double t1166;
  double t956;
  double t958;
  double t963;
  double t964;
  double t972;
  double t974;
  double t979;
  double t1012;
  double t1017;
  double t1022;
  double t1032;
  double t1035;
  double t1039;
  double t1041;
  double t1065;
  double t1168;
  double t1170;
  double t1172;
  double t1176;
  double t1078;
  double t1181;
  double t1186;
  double t1191;
  double t1197;
  double t1083;
  double t1084;
  double t1204;
  double t1206;
  double t1209;
  double t1211;
  double t1091;
  double t1099;
  double t1103;
  double t1106;
  double t1113;
  double t1114;
  double t1116;
  double t1118;
  double t1281;
  double t1283;
  double t1291;
  double t1295;
  double t1297;
  double t1300;
  double t1303;
  double t1310;
  double t1312;
  double t1317;
  double t1321;
  double t1322;
  double t1325;
  double t1335;
  double t1341;
  double t1342;
  double t1343;
  double t1344;
  t7 = Cos(var1[4]);
  t21 = Cos(var1[6]);
  t24 = -1.*t21;
  t26 = 1. + t24;
  t27 = 0.15121*t26;
  t42 = Sin(var1[6]);
  t14 = Sin(var1[5]);
  t60 = Cos(var1[5]);
  t83 = Cos(var1[7]);
  t89 = -1.*t83;
  t95 = 1. + t89;
  t107 = Sin(var1[7]);
  t137 = Sin(var1[4]);
  t171 = -1. + t83;
  t69 = -1.*t7*t21*t14;
  t75 = -1.*t7*t60*t42;
  t76 = t69 + t75;
  t116 = t7*t60*t21;
  t122 = -1.*t7*t14*t42;
  t127 = t116 + t122;
  t194 = Cos(var1[8]);
  t196 = -1.*t194;
  t197 = 1. + t196;
  t212 = Sin(var1[8]);
  t172 = 4.e-6*t171*t137;
  t175 = 1.6e-11*t171;
  t181 = 1. + t175;
  t182 = t181*t76;
  t184 = 4.e-6*t127*t107;
  t188 = t172 + t182 + t184;
  t304 = -1. + t194;
  t259 = t83*t137;
  t279 = 4.e-6*t171*t76;
  t281 = t127*t107;
  t296 = t259 + t279 + t281;
  t219 = -1.000000000016*t95;
  t222 = 1. + t219;
  t223 = t222*t127;
  t224 = -1.*t137*t107;
  t225 = -4.e-6*t76*t107;
  t226 = t223 + t224 + t225;
  t48 = -0.15121*t42;
  t56 = t27 + t48;
  t401 = Sin(var1[3]);
  t384 = Cos(var1[3]);
  t61 = 0.15121*t42;
  t66 = t27 + t61;
  t393 = t384*t60;
  t406 = -1.*t401*t137*t14;
  t408 = t393 + t406;
  t411 = t60*t401*t137;
  t412 = t384*t14;
  t415 = t411 + t412;
  t81 = -1.2484e-7*var1[7];
  t100 = -1.5499600000248e-7*t95;
  t110 = 1.124840000016e-6*t107;
  t112 = t81 + t100 + t110;
  t132 = 0.281210000008499*t95;
  t133 = 0.03874900000062*t107;
  t134 = t132 + t133;
  t141 = 4.9936e-13*var1[7];
  t147 = -0.03874900000062*t95;
  t150 = 0.281210000004*t107;
  t151 = t141 + t147 + t150;
  t421 = t21*t408;
  t422 = -1.*t415*t42;
  t424 = t421 + t422;
  t431 = t21*t415;
  t432 = t408*t42;
  t433 = t431 + t432;
  t191 = -1.284e-8*var1[8];
  t204 = -1.5499600000248e-7*t197;
  t213 = 2.012840000032e-6*t212;
  t215 = t191 + t204 + t213;
  t236 = 0.503210000016051*t197;
  t244 = 0.03874900000062*t212;
  t246 = t236 + t244;
  t297 = 5.136e-14*var1[8];
  t298 = -0.03874900000062*t197;
  t299 = 0.503210000008*t212;
  t300 = t297 + t298 + t299;
  t306 = 1.6e-11*t304;
  t308 = 1. + t306;
  t441 = -4.e-6*t7*t171*t401;
  t445 = t181*t424;
  t448 = 4.e-6*t433*t107;
  t449 = t441 + t445 + t448;
  t470 = -1.*t7*t83*t401;
  t472 = 4.e-6*t171*t424;
  t475 = t433*t107;
  t478 = t470 + t472 + t475;
  t455 = t222*t433;
  t457 = t7*t401*t107;
  t460 = -4.e-6*t424*t107;
  t464 = t455 + t457 + t460;
  t349 = -1.000000000016*t197;
  t354 = 1. + t349;
  t518 = t60*t401;
  t519 = t384*t137*t14;
  t528 = t518 + t519;
  t532 = -1.*t384*t60*t137;
  t534 = t401*t14;
  t535 = t532 + t534;
  t550 = t21*t528;
  t554 = -1.*t535*t42;
  t557 = t550 + t554;
  t565 = t21*t535;
  t566 = t528*t42;
  t567 = t565 + t566;
  t580 = 4.e-6*t384*t7*t171;
  t582 = t181*t557;
  t583 = 4.e-6*t567*t107;
  t589 = t580 + t582 + t583;
  t614 = t384*t7*t83;
  t616 = 4.e-6*t171*t557;
  t617 = t567*t107;
  t618 = t614 + t616 + t617;
  t592 = t222*t567;
  t597 = -1.*t384*t7*t107;
  t604 = -4.e-6*t557*t107;
  t609 = t592 + t597 + t604;
  t702 = Cos(var1[16]);
  t707 = -1.*t702;
  t708 = 1. + t707;
  t713 = Sin(var1[16]);
  t671 = Cos(var1[15]);
  t674 = -1.*t671;
  t685 = 1. + t674;
  t687 = -0.15121*t685;
  t690 = Sin(var1[15]);
  t722 = -1. + t702;
  t738 = 4.e-6*t722;
  t777 = 7.e-6*t708;
  t711 = 2.8e-11*t708;
  t879 = Cos(var1[17]);
  t880 = -1.*t879;
  t884 = 1. + t880;
  t892 = Sin(var1[17]);
  t819 = -4.e-6*t713;
  t800 = -1.*t7*t60*t690;
  t803 = -1.*t671*t7*t14;
  t809 = t800 + t803;
  t855 = t671*t7*t60;
  t856 = -1.*t7*t690*t14;
  t857 = t855 + t856;
  t910 = 2.8e-11*t884;
  t742 = -7.e-6*t713;
  t925 = -2.8e-11*t708;
  t714 = -1.*t713;
  t890 = 7.e-6*t884;
  t966 = -1. + t879;
  t967 = 4.e-6*t966;
  t990 = 4.e-6*t708;
  t787 = 7.e-6*t713;
  t934 = -7.e-6*t708;
  t780 = 4.e-6*t713;
  t1020 = 4.e-6*t892;
  t926 = t925 + t713;
  t933 = t926*t137;
  t935 = t934 + t819;
  t936 = t935*t809;
  t937 = -1.000000000016*t708;
  t946 = 1. + t937;
  t947 = t946*t857;
  t948 = t933 + t936 + t947;
  t1033 = 7.e-6*t892;
  t981 = -1.000000000049*t708;
  t983 = 1. + t981;
  t986 = t983*t137;
  t993 = t990 + t742;
  t994 = t993*t809;
  t995 = t925 + t714;
  t1004 = t995*t857;
  t1010 = t986 + t994 + t1004;
  t1043 = t990 + t787;
  t1046 = t1043*t137;
  t1050 = -6.5e-11*t708;
  t1053 = 1. + t1050;
  t1054 = t1053*t809;
  t1056 = t934 + t780;
  t1057 = t1056*t857;
  t1058 = t1046 + t1054 + t1057;
  t960 = -1.*t892;
  t1074 = 4.e-6*t884;
  t968 = -7.e-6*t892;
  t1089 = -2.8e-11*t884;
  t1062 = -7.e-6*t884;
  t894 = -4.e-6*t892;
  t696 = 1.5843479999999999e-12*var1[16];
  t710 = -0.03874900000889869*t708;
  t716 = t711 + t714;
  t718 = -0.281211000004*t716;
  t748 = t738 + t742;
  t752 = -1.8134809999999998e-6*t748;
  t753 = t696 + t710 + t718 + t752;
  t691 = -0.15121*t690;
  t694 = t687 + t691;
  t762 = 0.15121*t690;
  t763 = t687 + t762;
  t768 = 3.9608699999999997e-7*var1[16];
  t769 = -1.1787626499999999e-16*t708;
  t782 = t777 + t780;
  t784 = -0.281211000004*t782;
  t792 = t738 + t787;
  t795 = -0.038749000006999997*t792;
  t799 = t768 + t769 + t784 + t795;
  t816 = -2.7726089999999997e-12*var1[16];
  t817 = -0.2812110000084994*t708;
  t826 = t777 + t819;
  t829 = -1.8134809999999998e-6*t826;
  t835 = t711 + t713;
  t841 = -0.038749000006999997*t835;
  t845 = t816 + t817 + t829 + t841;
  t875 = -1.9784030000000015e-12*var1[17];
  t889 = -0.5031510000160505*t884;
  t895 = t890 + t894;
  t896 = -3.367757e-6*t895;
  t919 = t910 + t892;
  t922 = -0.038575000014*t919;
  t924 = t875 + t889 + t896 + t922;
  t1150 = -1.*t690*t415;
  t1158 = t671*t408;
  t1159 = t1150 + t1158;
  t1161 = t671*t415;
  t1165 = t690*t408;
  t1166 = t1161 + t1165;
  t956 = 1.1305160000000008e-12*var1[17];
  t958 = -0.03857500001589017*t884;
  t963 = t910 + t960;
  t964 = -0.5031510000080001*t963;
  t972 = t967 + t968;
  t974 = -3.367757e-6*t972;
  t979 = t956 + t958 + t964 + t974;
  t1012 = 2.826290000000002e-7*var1[17];
  t1017 = -2.18904205e-16*t884;
  t1022 = t890 + t1020;
  t1032 = -0.5031510000080001*t1022;
  t1035 = t967 + t1033;
  t1039 = -0.038575000014*t1035;
  t1041 = t1012 + t1017 + t1032 + t1039;
  t1065 = t1062 + t1020;
  t1168 = -1.*t7*t926*t401;
  t1170 = t935*t1159;
  t1172 = t946*t1166;
  t1176 = t1168 + t1170 + t1172;
  t1078 = t1074 + t1033;
  t1181 = -1.*t983*t7*t401;
  t1186 = t993*t1159;
  t1191 = t995*t1166;
  t1197 = t1181 + t1186 + t1191;
  t1083 = -6.5e-11*t884;
  t1084 = 1. + t1083;
  t1204 = -1.*t7*t1043*t401;
  t1206 = t1053*t1159;
  t1209 = t1056*t1166;
  t1211 = t1204 + t1206 + t1209;
  t1091 = t1089 + t960;
  t1099 = -1.000000000049*t884;
  t1103 = 1. + t1099;
  t1106 = t1074 + t968;
  t1113 = -1.000000000016*t884;
  t1114 = 1. + t1113;
  t1116 = t1089 + t892;
  t1118 = t1062 + t894;
  t1281 = -1.*t690*t535;
  t1283 = t671*t528;
  t1291 = t1281 + t1283;
  t1295 = t671*t535;
  t1297 = t690*t528;
  t1300 = t1295 + t1297;
  t1303 = t384*t7*t926;
  t1310 = t935*t1291;
  t1312 = t946*t1300;
  t1317 = t1303 + t1310 + t1312;
  t1321 = t983*t384*t7;
  t1322 = t993*t1291;
  t1325 = t995*t1300;
  t1335 = t1321 + t1322 + t1325;
  t1341 = t384*t7*t1043;
  t1342 = t1053*t1291;
  t1343 = t1056*t1300;
  t1344 = t1341 + t1342 + t1343;
  p_output1[0]=t127*t134 + t137*t151 + t188*t215 + t226*t246 + t296*t300 - 0.03875*(t212*t226 + t194*t296 + 4.e-6*t188*t304) + 0.14871*(4.e-6*t212*t226 + 4.e-6*t296*t304 + t188*t308) + 0.80321*(-4.e-6*t188*t212 - 1.*t212*t296 + t226*t354) - 1.*t14*t56*t7 + t60*t66*t7 + t112*t76 + var1[0];
  p_output1[1]=t112*t424 + t134*t433 + t215*t449 + t246*t464 + t300*t478 - 0.03875*(4.e-6*t304*t449 + t212*t464 + t194*t478) + 0.80321*(-4.e-6*t212*t449 + t354*t464 - 1.*t212*t478) + 0.14871*(t308*t449 + 4.e-6*t212*t464 + 4.e-6*t304*t478) + t408*t56 + t415*t66 - 1.*t151*t401*t7 + var1[1];
  p_output1[2]=t112*t557 + t528*t56 + t134*t567 + t215*t589 + t246*t609 + t300*t618 - 0.03875*(4.e-6*t304*t589 + t212*t609 + t194*t618) + 0.80321*(-4.e-6*t212*t589 + t354*t609 - 1.*t212*t618) + 0.14871*(t308*t589 + 4.e-6*t212*t609 + 4.e-6*t304*t618) + t535*t66 + t151*t384*t7 + var1[2];
  p_output1[3]=t1041*t1058 + t60*t694*t7 + t137*t753 - 1.*t14*t7*t763 + t799*t809 + t845*t857 + t924*t948 - 0.148715*(t1010*t1078 + t1058*t1084 + t1065*t948) - 0.038576*(t1010*t1103 + t1058*t1106 + t1091*t948) - 0.80315*(t1010*t1116 + t1058*t1118 + t1114*t948) + t1010*t979 + var1[0];
  p_output1[4]=t1041*t1211 - 0.148715*(t1065*t1176 + t1078*t1197 + t1084*t1211) - 0.038576*(t1091*t1176 + t1103*t1197 + t1106*t1211) - 0.80315*(t1114*t1176 + t1116*t1197 + t1118*t1211) + t415*t694 - 1.*t401*t7*t753 + t408*t763 + t1159*t799 + t1166*t845 + t1176*t924 + t1197*t979 + var1[1];
  p_output1[5]=t1041*t1344 - 0.148715*(t1065*t1317 + t1078*t1335 + t1084*t1344) - 0.038576*(t1091*t1317 + t1103*t1335 + t1106*t1344) - 0.80315*(t1114*t1317 + t1116*t1335 + t1118*t1344) + t535*t694 + t384*t7*t753 + t528*t763 + t1291*t799 + t1300*t845 + t1317*t924 + t1335*t979 + var1[2];
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

#include "output_boundary_DiagonalStance.hh"

namespace DiagonalStance
{

void output_boundary_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
