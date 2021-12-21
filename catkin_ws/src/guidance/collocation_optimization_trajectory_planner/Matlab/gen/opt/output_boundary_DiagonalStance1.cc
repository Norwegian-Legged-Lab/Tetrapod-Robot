/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:10:06 GMT+01:00
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
  double t34;
  double t49;
  double t51;
  double t59;
  double t62;
  double t69;
  double t44;
  double t116;
  double t145;
  double t149;
  double t150;
  double t163;
  double t209;
  double t249;
  double t132;
  double t133;
  double t138;
  double t174;
  double t179;
  double t195;
  double t266;
  double t269;
  double t272;
  double t289;
  double t250;
  double t252;
  double t253;
  double t256;
  double t257;
  double t263;
  double t397;
  double t345;
  double t346;
  double t358;
  double t360;
  double t303;
  double t314;
  double t315;
  double t316;
  double t318;
  double t329;
  double t93;
  double t100;
  double t489;
  double t484;
  double t119;
  double t121;
  double t486;
  double t495;
  double t500;
  double t503;
  double t510;
  double t513;
  double t142;
  double t152;
  double t166;
  double t169;
  double t199;
  double t200;
  double t204;
  double t219;
  double t220;
  double t234;
  double t241;
  double t519;
  double t522;
  double t523;
  double t529;
  double t530;
  double t535;
  double t264;
  double t274;
  double t291;
  double t295;
  double t332;
  double t335;
  double t343;
  double t369;
  double t373;
  double t383;
  double t388;
  double t400;
  double t405;
  double t543;
  double t546;
  double t547;
  double t548;
  double t568;
  double t576;
  double t577;
  double t578;
  double t557;
  double t559;
  double t560;
  double t564;
  double t466;
  double t467;
  double t621;
  double t622;
  double t623;
  double t628;
  double t629;
  double t631;
  double t638;
  double t641;
  double t642;
  double t648;
  double t649;
  double t650;
  double t656;
  double t657;
  double t659;
  double t663;
  double t701;
  double t702;
  double t710;
  double t711;
  double t684;
  double t688;
  double t692;
  double t697;
  double t815;
  double t817;
  double t819;
  double t838;
  double t773;
  double t779;
  double t781;
  double t783;
  double t794;
  double t861;
  double t871;
  double t902;
  double t824;
  double t975;
  double t976;
  double t977;
  double t986;
  double t939;
  double t924;
  double t925;
  double t928;
  double t961;
  double t963;
  double t964;
  double t995;
  double t873;
  double t1026;
  double t843;
  double t984;
  double t1081;
  double t1082;
  double t1107;
  double t910;
  double t1031;
  double t903;
  double t1132;
  double t1027;
  double t1028;
  double t1035;
  double t1040;
  double t1042;
  double t1043;
  double t1044;
  double t1055;
  double t1142;
  double t1101;
  double t1103;
  double t1106;
  double t1109;
  double t1113;
  double t1117;
  double t1120;
  double t1124;
  double t1150;
  double t1156;
  double t1157;
  double t1158;
  double t1163;
  double t1169;
  double t1170;
  double t1172;
  double t1077;
  double t1190;
  double t1083;
  double t1215;
  double t1183;
  double t987;
  double t813;
  double t822;
  double t849;
  double t858;
  double t874;
  double t878;
  double t882;
  double t798;
  double t804;
  double t885;
  double t886;
  double t896;
  double t901;
  double t906;
  double t909;
  double t914;
  double t917;
  double t923;
  double t932;
  double t934;
  double t940;
  double t943;
  double t945;
  double t947;
  double t955;
  double t972;
  double t978;
  double t991;
  double t992;
  double t1005;
  double t1013;
  double t1017;
  double t1277;
  double t1284;
  double t1285;
  double t1296;
  double t1298;
  double t1299;
  double t1058;
  double t1059;
  double t1079;
  double t1080;
  double t1087;
  double t1094;
  double t1095;
  double t1129;
  double t1131;
  double t1140;
  double t1141;
  double t1144;
  double t1148;
  double t1149;
  double t1185;
  double t1321;
  double t1323;
  double t1324;
  double t1329;
  double t1192;
  double t1342;
  double t1343;
  double t1345;
  double t1349;
  double t1195;
  double t1198;
  double t1351;
  double t1352;
  double t1356;
  double t1359;
  double t1216;
  double t1218;
  double t1220;
  double t1223;
  double t1230;
  double t1232;
  double t1239;
  double t1246;
  double t1433;
  double t1438;
  double t1439;
  double t1460;
  double t1470;
  double t1471;
  double t1478;
  double t1483;
  double t1489;
  double t1490;
  double t1494;
  double t1497;
  double t1498;
  double t1499;
  double t1503;
  double t1505;
  double t1508;
  double t1512;
  t34 = Cos(var1[4]);
  t49 = Cos(var1[6]);
  t51 = -1.*t49;
  t59 = 1. + t51;
  t62 = 0.15121*t59;
  t69 = Sin(var1[6]);
  t44 = Sin(var1[5]);
  t116 = Cos(var1[5]);
  t145 = Cos(var1[7]);
  t149 = -1.*t145;
  t150 = 1. + t149;
  t163 = Sin(var1[7]);
  t209 = Sin(var1[4]);
  t249 = -1. + t145;
  t132 = -1.*t34*t49*t44;
  t133 = -1.*t34*t116*t69;
  t138 = t132 + t133;
  t174 = t34*t116*t49;
  t179 = -1.*t34*t44*t69;
  t195 = t174 + t179;
  t266 = Cos(var1[8]);
  t269 = -1.*t266;
  t272 = 1. + t269;
  t289 = Sin(var1[8]);
  t250 = 4.e-6*t249*t209;
  t252 = 1.6e-11*t249;
  t253 = 1. + t252;
  t256 = t253*t138;
  t257 = 4.e-6*t195*t163;
  t263 = t250 + t256 + t257;
  t397 = -1. + t266;
  t345 = t145*t209;
  t346 = 4.e-6*t249*t138;
  t358 = t195*t163;
  t360 = t345 + t346 + t358;
  t303 = -1.000000000016*t150;
  t314 = 1. + t303;
  t315 = t314*t195;
  t316 = -1.*t209*t163;
  t318 = -4.e-6*t138*t163;
  t329 = t315 + t316 + t318;
  t93 = -0.15121*t69;
  t100 = t62 + t93;
  t489 = Sin(var1[3]);
  t484 = Cos(var1[3]);
  t119 = 0.15121*t69;
  t121 = t62 + t119;
  t486 = t484*t116;
  t495 = -1.*t489*t209*t44;
  t500 = t486 + t495;
  t503 = t116*t489*t209;
  t510 = t484*t44;
  t513 = t503 + t510;
  t142 = -1.2484e-7*var1[7];
  t152 = -1.5499600000248e-7*t150;
  t166 = 1.124840000016e-6*t163;
  t169 = t142 + t152 + t166;
  t199 = 0.281210000008499*t150;
  t200 = 0.03874900000062*t163;
  t204 = t199 + t200;
  t219 = 4.9936e-13*var1[7];
  t220 = -0.03874900000062*t150;
  t234 = 0.281210000004*t163;
  t241 = t219 + t220 + t234;
  t519 = t49*t500;
  t522 = -1.*t513*t69;
  t523 = t519 + t522;
  t529 = t49*t513;
  t530 = t500*t69;
  t535 = t529 + t530;
  t264 = -1.284e-8*var1[8];
  t274 = -1.5499600000248e-7*t272;
  t291 = 2.012840000032e-6*t289;
  t295 = t264 + t274 + t291;
  t332 = 0.503210000016051*t272;
  t335 = 0.03874900000062*t289;
  t343 = t332 + t335;
  t369 = 5.136e-14*var1[8];
  t373 = -0.03874900000062*t272;
  t383 = 0.503210000008*t289;
  t388 = t369 + t373 + t383;
  t400 = 1.6e-11*t397;
  t405 = 1. + t400;
  t543 = -4.e-6*t34*t249*t489;
  t546 = t253*t523;
  t547 = 4.e-6*t535*t163;
  t548 = t543 + t546 + t547;
  t568 = -1.*t34*t145*t489;
  t576 = 4.e-6*t249*t523;
  t577 = t535*t163;
  t578 = t568 + t576 + t577;
  t557 = t314*t535;
  t559 = t34*t489*t163;
  t560 = -4.e-6*t523*t163;
  t564 = t557 + t559 + t560;
  t466 = -1.000000000016*t272;
  t467 = 1. + t466;
  t621 = t116*t489;
  t622 = t484*t209*t44;
  t623 = t621 + t622;
  t628 = -1.*t484*t116*t209;
  t629 = t489*t44;
  t631 = t628 + t629;
  t638 = t49*t623;
  t641 = -1.*t631*t69;
  t642 = t638 + t641;
  t648 = t49*t631;
  t649 = t623*t69;
  t650 = t648 + t649;
  t656 = 4.e-6*t484*t34*t249;
  t657 = t253*t642;
  t659 = 4.e-6*t650*t163;
  t663 = t656 + t657 + t659;
  t701 = t484*t34*t145;
  t702 = 4.e-6*t249*t642;
  t710 = t650*t163;
  t711 = t701 + t702 + t710;
  t684 = t314*t650;
  t688 = -1.*t484*t34*t163;
  t692 = -4.e-6*t642*t163;
  t697 = t684 + t688 + t692;
  t815 = Cos(var1[16]);
  t817 = -1.*t815;
  t819 = 1. + t817;
  t838 = Sin(var1[16]);
  t773 = Cos(var1[15]);
  t779 = -1.*t773;
  t781 = 1. + t779;
  t783 = -0.15121*t781;
  t794 = Sin(var1[15]);
  t861 = -1. + t815;
  t871 = 4.e-6*t861;
  t902 = 7.e-6*t819;
  t824 = 2.8e-11*t819;
  t975 = Cos(var1[17]);
  t976 = -1.*t975;
  t977 = 1. + t976;
  t986 = Sin(var1[17]);
  t939 = -4.e-6*t838;
  t924 = -1.*t34*t116*t794;
  t925 = -1.*t773*t34*t44;
  t928 = t924 + t925;
  t961 = t773*t34*t116;
  t963 = -1.*t34*t794*t44;
  t964 = t961 + t963;
  t995 = 2.8e-11*t977;
  t873 = -7.e-6*t838;
  t1026 = -2.8e-11*t819;
  t843 = -1.*t838;
  t984 = 7.e-6*t977;
  t1081 = -1. + t975;
  t1082 = 4.e-6*t1081;
  t1107 = 4.e-6*t819;
  t910 = 7.e-6*t838;
  t1031 = -7.e-6*t819;
  t903 = 4.e-6*t838;
  t1132 = 4.e-6*t986;
  t1027 = t1026 + t838;
  t1028 = t1027*t209;
  t1035 = t1031 + t939;
  t1040 = t1035*t928;
  t1042 = -1.000000000016*t819;
  t1043 = 1. + t1042;
  t1044 = t1043*t964;
  t1055 = t1028 + t1040 + t1044;
  t1142 = 7.e-6*t986;
  t1101 = -1.000000000049*t819;
  t1103 = 1. + t1101;
  t1106 = t1103*t209;
  t1109 = t1107 + t873;
  t1113 = t1109*t928;
  t1117 = t1026 + t843;
  t1120 = t1117*t964;
  t1124 = t1106 + t1113 + t1120;
  t1150 = t1107 + t910;
  t1156 = t1150*t209;
  t1157 = -6.5e-11*t819;
  t1158 = 1. + t1157;
  t1163 = t1158*t928;
  t1169 = t1031 + t903;
  t1170 = t1169*t964;
  t1172 = t1156 + t1163 + t1170;
  t1077 = -1.*t986;
  t1190 = 4.e-6*t977;
  t1083 = -7.e-6*t986;
  t1215 = -2.8e-11*t977;
  t1183 = -7.e-6*t977;
  t987 = -4.e-6*t986;
  t813 = 1.5843479999999999e-12*var1[16];
  t822 = -0.03874900000889869*t819;
  t849 = t824 + t843;
  t858 = -0.281211000004*t849;
  t874 = t871 + t873;
  t878 = -1.8134809999999998e-6*t874;
  t882 = t813 + t822 + t858 + t878;
  t798 = -0.15121*t794;
  t804 = t783 + t798;
  t885 = 0.15121*t794;
  t886 = t783 + t885;
  t896 = 3.9608699999999997e-7*var1[16];
  t901 = -1.1787626499999999e-16*t819;
  t906 = t902 + t903;
  t909 = -0.281211000004*t906;
  t914 = t871 + t910;
  t917 = -0.038749000006999997*t914;
  t923 = t896 + t901 + t909 + t917;
  t932 = -2.7726089999999997e-12*var1[16];
  t934 = -0.2812110000084994*t819;
  t940 = t902 + t939;
  t943 = -1.8134809999999998e-6*t940;
  t945 = t824 + t838;
  t947 = -0.038749000006999997*t945;
  t955 = t932 + t934 + t943 + t947;
  t972 = -1.9784030000000015e-12*var1[17];
  t978 = -0.5031510000160505*t977;
  t991 = t984 + t987;
  t992 = -3.367757e-6*t991;
  t1005 = t995 + t986;
  t1013 = -0.038575000014*t1005;
  t1017 = t972 + t978 + t992 + t1013;
  t1277 = -1.*t794*t513;
  t1284 = t773*t500;
  t1285 = t1277 + t1284;
  t1296 = t773*t513;
  t1298 = t794*t500;
  t1299 = t1296 + t1298;
  t1058 = 1.1305160000000008e-12*var1[17];
  t1059 = -0.03857500001589017*t977;
  t1079 = t995 + t1077;
  t1080 = -0.5031510000080001*t1079;
  t1087 = t1082 + t1083;
  t1094 = -3.367757e-6*t1087;
  t1095 = t1058 + t1059 + t1080 + t1094;
  t1129 = 2.826290000000002e-7*var1[17];
  t1131 = -2.18904205e-16*t977;
  t1140 = t984 + t1132;
  t1141 = -0.5031510000080001*t1140;
  t1144 = t1082 + t1142;
  t1148 = -0.038575000014*t1144;
  t1149 = t1129 + t1131 + t1141 + t1148;
  t1185 = t1183 + t1132;
  t1321 = -1.*t34*t1027*t489;
  t1323 = t1035*t1285;
  t1324 = t1043*t1299;
  t1329 = t1321 + t1323 + t1324;
  t1192 = t1190 + t1142;
  t1342 = -1.*t1103*t34*t489;
  t1343 = t1109*t1285;
  t1345 = t1117*t1299;
  t1349 = t1342 + t1343 + t1345;
  t1195 = -6.5e-11*t977;
  t1198 = 1. + t1195;
  t1351 = -1.*t34*t1150*t489;
  t1352 = t1158*t1285;
  t1356 = t1169*t1299;
  t1359 = t1351 + t1352 + t1356;
  t1216 = t1215 + t1077;
  t1218 = -1.000000000049*t977;
  t1220 = 1. + t1218;
  t1223 = t1190 + t1083;
  t1230 = -1.000000000016*t977;
  t1232 = 1. + t1230;
  t1239 = t1215 + t986;
  t1246 = t1183 + t987;
  t1433 = -1.*t794*t631;
  t1438 = t773*t623;
  t1439 = t1433 + t1438;
  t1460 = t773*t631;
  t1470 = t794*t623;
  t1471 = t1460 + t1470;
  t1478 = t484*t34*t1027;
  t1483 = t1035*t1439;
  t1489 = t1043*t1471;
  t1490 = t1478 + t1483 + t1489;
  t1494 = t1103*t484*t34;
  t1497 = t1109*t1439;
  t1498 = t1117*t1471;
  t1499 = t1494 + t1497 + t1498;
  t1503 = t484*t34*t1150;
  t1505 = t1158*t1439;
  t1508 = t1169*t1471;
  t1512 = t1503 + t1505 + t1508;
  p_output1[0]=t138*t169 + t195*t204 + t209*t241 + t263*t295 + t116*t121*t34 + t329*t343 + t360*t388 - 0.03875*(t289*t329 + t266*t360 + 4.e-6*t263*t397) + 0.14871*(4.e-6*t289*t329 + 4.e-6*t360*t397 + t263*t405) - 1.*t100*t34*t44 + 0.80321*(-4.e-6*t263*t289 - 1.*t289*t360 + t329*t467) + var1[0];
  p_output1[1]=-1.*t241*t34*t489 + t100*t500 + t121*t513 + t169*t523 + t204*t535 + t295*t548 + t343*t564 + t388*t578 - 0.03875*(4.e-6*t397*t548 + t289*t564 + t266*t578) + 0.80321*(-4.e-6*t289*t548 + t467*t564 - 1.*t289*t578) + 0.14871*(t405*t548 + 4.e-6*t289*t564 + 4.e-6*t397*t578) + var1[1];
  p_output1[2]=t241*t34*t484 + t100*t623 + t121*t631 + t169*t642 + t204*t650 + t295*t663 + t343*t697 + t388*t711 - 0.03875*(4.e-6*t397*t663 + t289*t697 + t266*t711) + 0.80321*(-4.e-6*t289*t663 + t467*t697 - 1.*t289*t711) + 0.14871*(t405*t663 + 4.e-6*t289*t697 + 4.e-6*t397*t711) + var1[2];
  p_output1[3]=t1017*t1055 + t1095*t1124 + t1149*t1172 - 0.148715*(t1055*t1185 + t1124*t1192 + t1172*t1198) - 0.038576*(t1055*t1216 + t1124*t1220 + t1172*t1223) - 0.80315*(t1055*t1232 + t1124*t1239 + t1172*t1246) + t116*t34*t804 + t209*t882 - 1.*t34*t44*t886 + t923*t928 + t955*t964 + var1[0];
  p_output1[4]=t1017*t1329 + t1095*t1349 + t1149*t1359 - 0.148715*(t1185*t1329 + t1192*t1349 + t1198*t1359) - 0.038576*(t1216*t1329 + t1220*t1349 + t1223*t1359) - 0.80315*(t1232*t1329 + t1239*t1349 + t1246*t1359) + t513*t804 - 1.*t34*t489*t882 + t500*t886 + t1285*t923 + t1299*t955 + var1[1];
  p_output1[5]=t1017*t1490 + t1095*t1499 + t1149*t1512 - 0.148715*(t1185*t1490 + t1192*t1499 + t1198*t1512) - 0.038576*(t1216*t1490 + t1220*t1499 + t1223*t1512) - 0.80315*(t1232*t1490 + t1239*t1499 + t1246*t1512) + t631*t804 + t34*t484*t882 + t623*t886 + t1439*t923 + t1471*t955 + var1[2];
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

#include "output_boundary_DiagonalStance1.hh"

namespace DiagonalStance1
{

void output_boundary_DiagonalStance1_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
