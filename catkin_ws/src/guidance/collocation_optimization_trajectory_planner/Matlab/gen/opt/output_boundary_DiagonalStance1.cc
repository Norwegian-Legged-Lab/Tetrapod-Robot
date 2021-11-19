/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:27:34 GMT+01:00
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
  double t29;
  double t36;
  double t42;
  double t46;
  double t49;
  double t16;
  double t113;
  double t147;
  double t150;
  double t156;
  double t166;
  double t217;
  double t254;
  double t123;
  double t128;
  double t131;
  double t174;
  double t178;
  double t181;
  double t285;
  double t287;
  double t291;
  double t298;
  double t255;
  double t264;
  double t270;
  double t273;
  double t275;
  double t281;
  double t373;
  double t340;
  double t341;
  double t343;
  double t351;
  double t303;
  double t305;
  double t309;
  double t312;
  double t315;
  double t320;
  double t71;
  double t74;
  double t455;
  double t445;
  double t117;
  double t120;
  double t451;
  double t457;
  double t466;
  double t469;
  double t470;
  double t475;
  double t138;
  double t159;
  double t171;
  double t172;
  double t189;
  double t190;
  double t198;
  double t234;
  double t240;
  double t241;
  double t245;
  double t486;
  double t488;
  double t490;
  double t496;
  double t499;
  double t501;
  double t282;
  double t293;
  double t299;
  double t300;
  double t324;
  double t327;
  double t329;
  double t355;
  double t356;
  double t358;
  double t368;
  double t375;
  double t379;
  double t505;
  double t506;
  double t507;
  double t510;
  double t542;
  double t544;
  double t548;
  double t549;
  double t512;
  double t513;
  double t534;
  double t539;
  double t416;
  double t425;
  double t612;
  double t616;
  double t617;
  double t620;
  double t622;
  double t628;
  double t633;
  double t634;
  double t637;
  double t641;
  double t644;
  double t645;
  double t668;
  double t672;
  double t677;
  double t678;
  double t692;
  double t698;
  double t699;
  double t700;
  double t683;
  double t686;
  double t688;
  double t689;
  double t766;
  double t767;
  double t771;
  double t781;
  double t739;
  double t744;
  double t751;
  double t753;
  double t755;
  double t789;
  double t791;
  double t819;
  double t779;
  double t920;
  double t926;
  double t928;
  double t942;
  double t868;
  double t855;
  double t859;
  double t863;
  double t897;
  double t901;
  double t910;
  double t955;
  double t798;
  double t972;
  double t783;
  double t939;
  double t1012;
  double t1017;
  double t1051;
  double t840;
  double t976;
  double t830;
  double t1089;
  double t973;
  double t975;
  double t977;
  double t978;
  double t979;
  double t981;
  double t983;
  double t990;
  double t1092;
  double t1037;
  double t1042;
  double t1046;
  double t1058;
  double t1064;
  double t1071;
  double t1072;
  double t1077;
  double t1107;
  double t1118;
  double t1120;
  double t1121;
  double t1122;
  double t1124;
  double t1125;
  double t1128;
  double t1001;
  double t1148;
  double t1018;
  double t1176;
  double t1136;
  double t943;
  double t764;
  double t776;
  double t784;
  double t788;
  double t799;
  double t804;
  double t805;
  double t756;
  double t759;
  double t807;
  double t812;
  double t817;
  double t818;
  double t832;
  double t838;
  double t844;
  double t845;
  double t846;
  double t866;
  double t867;
  double t875;
  double t878;
  double t881;
  double t886;
  double t893;
  double t917;
  double t935;
  double t947;
  double t952;
  double t957;
  double t958;
  double t970;
  double t1237;
  double t1240;
  double t1244;
  double t1251;
  double t1253;
  double t1254;
  double t992;
  double t994;
  double t1008;
  double t1010;
  double t1019;
  double t1021;
  double t1034;
  double t1082;
  double t1087;
  double t1090;
  double t1091;
  double t1094;
  double t1097;
  double t1105;
  double t1137;
  double t1260;
  double t1262;
  double t1263;
  double t1264;
  double t1151;
  double t1267;
  double t1268;
  double t1271;
  double t1272;
  double t1154;
  double t1157;
  double t1281;
  double t1285;
  double t1288;
  double t1291;
  double t1177;
  double t1181;
  double t1186;
  double t1188;
  double t1201;
  double t1204;
  double t1209;
  double t1213;
  double t1353;
  double t1355;
  double t1359;
  double t1370;
  double t1372;
  double t1373;
  double t1376;
  double t1377;
  double t1380;
  double t1384;
  double t1386;
  double t1387;
  double t1390;
  double t1391;
  double t1396;
  double t1402;
  double t1403;
  double t1404;
  t7 = Cos(var1[4]);
  t29 = Cos(var1[6]);
  t36 = -1.*t29;
  t42 = 1. + t36;
  t46 = 0.15121*t42;
  t49 = Sin(var1[6]);
  t16 = Sin(var1[5]);
  t113 = Cos(var1[5]);
  t147 = Cos(var1[7]);
  t150 = -1.*t147;
  t156 = 1. + t150;
  t166 = Sin(var1[7]);
  t217 = Sin(var1[4]);
  t254 = -1. + t147;
  t123 = -1.*t7*t29*t16;
  t128 = -1.*t7*t113*t49;
  t131 = t123 + t128;
  t174 = t7*t113*t29;
  t178 = -1.*t7*t16*t49;
  t181 = t174 + t178;
  t285 = Cos(var1[8]);
  t287 = -1.*t285;
  t291 = 1. + t287;
  t298 = Sin(var1[8]);
  t255 = 4.e-6*t254*t217;
  t264 = 1.6e-11*t254;
  t270 = 1. + t264;
  t273 = t270*t131;
  t275 = 4.e-6*t181*t166;
  t281 = t255 + t273 + t275;
  t373 = -1. + t285;
  t340 = t147*t217;
  t341 = 4.e-6*t254*t131;
  t343 = t181*t166;
  t351 = t340 + t341 + t343;
  t303 = -1.000000000016*t156;
  t305 = 1. + t303;
  t309 = t305*t181;
  t312 = -1.*t217*t166;
  t315 = -4.e-6*t131*t166;
  t320 = t309 + t312 + t315;
  t71 = -0.15121*t49;
  t74 = t46 + t71;
  t455 = Sin(var1[3]);
  t445 = Cos(var1[3]);
  t117 = 0.15121*t49;
  t120 = t46 + t117;
  t451 = t445*t113;
  t457 = -1.*t455*t217*t16;
  t466 = t451 + t457;
  t469 = t113*t455*t217;
  t470 = t445*t16;
  t475 = t469 + t470;
  t138 = -1.2484e-7*var1[7];
  t159 = -1.5499600000248e-7*t156;
  t171 = 1.124840000016e-6*t166;
  t172 = t138 + t159 + t171;
  t189 = 0.281210000008499*t156;
  t190 = 0.03874900000062*t166;
  t198 = t189 + t190;
  t234 = 4.9936e-13*var1[7];
  t240 = -0.03874900000062*t156;
  t241 = 0.281210000004*t166;
  t245 = t234 + t240 + t241;
  t486 = t29*t466;
  t488 = -1.*t475*t49;
  t490 = t486 + t488;
  t496 = t29*t475;
  t499 = t466*t49;
  t501 = t496 + t499;
  t282 = -1.284e-8*var1[8];
  t293 = -1.5499600000248e-7*t291;
  t299 = 2.012840000032e-6*t298;
  t300 = t282 + t293 + t299;
  t324 = 0.503210000016051*t291;
  t327 = 0.03874900000062*t298;
  t329 = t324 + t327;
  t355 = 5.136e-14*var1[8];
  t356 = -0.03874900000062*t291;
  t358 = 0.503210000008*t298;
  t368 = t355 + t356 + t358;
  t375 = 1.6e-11*t373;
  t379 = 1. + t375;
  t505 = -4.e-6*t7*t254*t455;
  t506 = t270*t490;
  t507 = 4.e-6*t501*t166;
  t510 = t505 + t506 + t507;
  t542 = -1.*t7*t147*t455;
  t544 = 4.e-6*t254*t490;
  t548 = t501*t166;
  t549 = t542 + t544 + t548;
  t512 = t305*t501;
  t513 = t7*t455*t166;
  t534 = -4.e-6*t490*t166;
  t539 = t512 + t513 + t534;
  t416 = -1.000000000016*t291;
  t425 = 1. + t416;
  t612 = t113*t455;
  t616 = t445*t217*t16;
  t617 = t612 + t616;
  t620 = -1.*t445*t113*t217;
  t622 = t455*t16;
  t628 = t620 + t622;
  t633 = t29*t617;
  t634 = -1.*t628*t49;
  t637 = t633 + t634;
  t641 = t29*t628;
  t644 = t617*t49;
  t645 = t641 + t644;
  t668 = 4.e-6*t445*t7*t254;
  t672 = t270*t637;
  t677 = 4.e-6*t645*t166;
  t678 = t668 + t672 + t677;
  t692 = t445*t7*t147;
  t698 = 4.e-6*t254*t637;
  t699 = t645*t166;
  t700 = t692 + t698 + t699;
  t683 = t305*t645;
  t686 = -1.*t445*t7*t166;
  t688 = -4.e-6*t637*t166;
  t689 = t683 + t686 + t688;
  t766 = Cos(var1[16]);
  t767 = -1.*t766;
  t771 = 1. + t767;
  t781 = Sin(var1[16]);
  t739 = Cos(var1[15]);
  t744 = -1.*t739;
  t751 = 1. + t744;
  t753 = -0.15121*t751;
  t755 = Sin(var1[15]);
  t789 = -1. + t766;
  t791 = 4.e-6*t789;
  t819 = 7.e-6*t771;
  t779 = 2.8e-11*t771;
  t920 = Cos(var1[17]);
  t926 = -1.*t920;
  t928 = 1. + t926;
  t942 = Sin(var1[17]);
  t868 = -4.e-6*t781;
  t855 = -1.*t7*t113*t755;
  t859 = -1.*t739*t7*t16;
  t863 = t855 + t859;
  t897 = t739*t7*t113;
  t901 = -1.*t7*t755*t16;
  t910 = t897 + t901;
  t955 = 2.8e-11*t928;
  t798 = -7.e-6*t781;
  t972 = -2.8e-11*t771;
  t783 = -1.*t781;
  t939 = 7.e-6*t928;
  t1012 = -1. + t920;
  t1017 = 4.e-6*t1012;
  t1051 = 4.e-6*t771;
  t840 = 7.e-6*t781;
  t976 = -7.e-6*t771;
  t830 = 4.e-6*t781;
  t1089 = 4.e-6*t942;
  t973 = t972 + t781;
  t975 = t973*t217;
  t977 = t976 + t868;
  t978 = t977*t863;
  t979 = -1.000000000016*t771;
  t981 = 1. + t979;
  t983 = t981*t910;
  t990 = t975 + t978 + t983;
  t1092 = 7.e-6*t942;
  t1037 = -1.000000000049*t771;
  t1042 = 1. + t1037;
  t1046 = t1042*t217;
  t1058 = t1051 + t798;
  t1064 = t1058*t863;
  t1071 = t972 + t783;
  t1072 = t1071*t910;
  t1077 = t1046 + t1064 + t1072;
  t1107 = t1051 + t840;
  t1118 = t1107*t217;
  t1120 = -6.5e-11*t771;
  t1121 = 1. + t1120;
  t1122 = t1121*t863;
  t1124 = t976 + t830;
  t1125 = t1124*t910;
  t1128 = t1118 + t1122 + t1125;
  t1001 = -1.*t942;
  t1148 = 4.e-6*t928;
  t1018 = -7.e-6*t942;
  t1176 = -2.8e-11*t928;
  t1136 = -7.e-6*t928;
  t943 = -4.e-6*t942;
  t764 = 1.5843479999999999e-12*var1[16];
  t776 = -0.03874900000889869*t771;
  t784 = t779 + t783;
  t788 = -0.281211000004*t784;
  t799 = t791 + t798;
  t804 = -1.8134809999999998e-6*t799;
  t805 = t764 + t776 + t788 + t804;
  t756 = -0.15121*t755;
  t759 = t753 + t756;
  t807 = 0.15121*t755;
  t812 = t753 + t807;
  t817 = 3.9608699999999997e-7*var1[16];
  t818 = -1.1787626499999999e-16*t771;
  t832 = t819 + t830;
  t838 = -0.281211000004*t832;
  t844 = t791 + t840;
  t845 = -0.038749000006999997*t844;
  t846 = t817 + t818 + t838 + t845;
  t866 = -2.7726089999999997e-12*var1[16];
  t867 = -0.2812110000084994*t771;
  t875 = t819 + t868;
  t878 = -1.8134809999999998e-6*t875;
  t881 = t779 + t781;
  t886 = -0.038749000006999997*t881;
  t893 = t866 + t867 + t878 + t886;
  t917 = -1.9784030000000015e-12*var1[17];
  t935 = -0.5031510000160505*t928;
  t947 = t939 + t943;
  t952 = -3.367757e-6*t947;
  t957 = t955 + t942;
  t958 = -0.038575000014*t957;
  t970 = t917 + t935 + t952 + t958;
  t1237 = -1.*t755*t475;
  t1240 = t739*t466;
  t1244 = t1237 + t1240;
  t1251 = t739*t475;
  t1253 = t755*t466;
  t1254 = t1251 + t1253;
  t992 = 1.1305160000000008e-12*var1[17];
  t994 = -0.03857500001589017*t928;
  t1008 = t955 + t1001;
  t1010 = -0.5031510000080001*t1008;
  t1019 = t1017 + t1018;
  t1021 = -3.367757e-6*t1019;
  t1034 = t992 + t994 + t1010 + t1021;
  t1082 = 2.826290000000002e-7*var1[17];
  t1087 = -2.18904205e-16*t928;
  t1090 = t939 + t1089;
  t1091 = -0.5031510000080001*t1090;
  t1094 = t1017 + t1092;
  t1097 = -0.038575000014*t1094;
  t1105 = t1082 + t1087 + t1091 + t1097;
  t1137 = t1136 + t1089;
  t1260 = -1.*t7*t973*t455;
  t1262 = t977*t1244;
  t1263 = t981*t1254;
  t1264 = t1260 + t1262 + t1263;
  t1151 = t1148 + t1092;
  t1267 = -1.*t1042*t7*t455;
  t1268 = t1058*t1244;
  t1271 = t1071*t1254;
  t1272 = t1267 + t1268 + t1271;
  t1154 = -6.5e-11*t928;
  t1157 = 1. + t1154;
  t1281 = -1.*t7*t1107*t455;
  t1285 = t1121*t1244;
  t1288 = t1124*t1254;
  t1291 = t1281 + t1285 + t1288;
  t1177 = t1176 + t1001;
  t1181 = -1.000000000049*t928;
  t1186 = 1. + t1181;
  t1188 = t1148 + t1018;
  t1201 = -1.000000000016*t928;
  t1204 = 1. + t1201;
  t1209 = t1176 + t942;
  t1213 = t1136 + t943;
  t1353 = -1.*t755*t628;
  t1355 = t739*t617;
  t1359 = t1353 + t1355;
  t1370 = t739*t628;
  t1372 = t755*t617;
  t1373 = t1370 + t1372;
  t1376 = t445*t7*t973;
  t1377 = t977*t1359;
  t1380 = t981*t1373;
  t1384 = t1376 + t1377 + t1380;
  t1386 = t1042*t445*t7;
  t1387 = t1058*t1359;
  t1390 = t1071*t1373;
  t1391 = t1386 + t1387 + t1390;
  t1396 = t445*t7*t1107;
  t1402 = t1121*t1359;
  t1403 = t1124*t1373;
  t1404 = t1396 + t1402 + t1403;
  p_output1[0]=t131*t172 + t181*t198 + t217*t245 + t281*t300 + t320*t329 + t351*t368 - 0.03875*(t298*t320 + t285*t351 + 4.e-6*t281*t373) + 0.14871*(4.e-6*t298*t320 + 4.e-6*t351*t373 + t281*t379) + 0.80321*(-4.e-6*t281*t298 - 1.*t298*t351 + t320*t425) + t113*t120*t7 - 1.*t16*t7*t74 + var1[0];
  p_output1[1]=t120*t475 + t172*t490 + t198*t501 + t300*t510 + t329*t539 + t368*t549 - 0.03875*(4.e-6*t373*t510 + t298*t539 + t285*t549) + 0.80321*(-4.e-6*t298*t510 + t425*t539 - 1.*t298*t549) + 0.14871*(t379*t510 + 4.e-6*t298*t539 + 4.e-6*t373*t549) - 1.*t245*t455*t7 + t466*t74 + var1[1];
  p_output1[2]=t120*t628 + t172*t637 + t198*t645 + t300*t678 + t329*t689 + t245*t445*t7 + t368*t700 - 0.03875*(4.e-6*t373*t678 + t298*t689 + t285*t700) + 0.80321*(-4.e-6*t298*t678 + t425*t689 - 1.*t298*t700) + 0.14871*(t379*t678 + 4.e-6*t298*t689 + 4.e-6*t373*t700) + t617*t74 + var1[2];
  p_output1[3]=t1034*t1077 + t1105*t1128 + t113*t7*t759 + t217*t805 - 1.*t16*t7*t812 + t846*t863 + t893*t910 + t970*t990 - 0.148715*(t1077*t1151 + t1128*t1157 + t1137*t990) - 0.038576*(t1077*t1186 + t1128*t1188 + t1177*t990) - 0.80315*(t1077*t1209 + t1128*t1213 + t1204*t990) + var1[0];
  p_output1[4]=t1034*t1272 + t1105*t1291 - 0.148715*(t1137*t1264 + t1151*t1272 + t1157*t1291) - 0.038576*(t1177*t1264 + t1186*t1272 + t1188*t1291) - 0.80315*(t1204*t1264 + t1209*t1272 + t1213*t1291) + t475*t759 - 1.*t455*t7*t805 + t466*t812 + t1244*t846 + t1254*t893 + t1264*t970 + var1[1];
  p_output1[5]=t1034*t1391 + t1105*t1404 - 0.148715*(t1137*t1384 + t1151*t1391 + t1157*t1404) - 0.038576*(t1177*t1384 + t1186*t1391 + t1188*t1404) - 0.80315*(t1204*t1384 + t1209*t1391 + t1213*t1404) + t628*t759 + t445*t7*t805 + t617*t812 + t1359*t846 + t1373*t893 + t1384*t970 + var1[2];
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
