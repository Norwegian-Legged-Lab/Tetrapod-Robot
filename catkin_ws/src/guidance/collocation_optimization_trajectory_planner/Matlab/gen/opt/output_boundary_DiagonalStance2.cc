/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:31:06 GMT+01:00
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
  double t50;
  double t14;
  double t22;
  double t23;
  double t26;
  double t28;
  double t30;
  double t52;
  double t53;
  double t59;
  double t67;
  double t17;
  double t84;
  double t75;
  double t130;
  double t132;
  double t133;
  double t155;
  double t160;
  double t162;
  double t167;
  double t168;
  double t171;
  double t181;
  double t205;
  double t189;
  double t190;
  double t191;
  double t193;
  double t197;
  double t199;
  double t215;
  double t217;
  double t221;
  double t225;
  double t242;
  double t247;
  double t252;
  double t253;
  double t266;
  double t267;
  double t45;
  double t58;
  double t66;
  double t68;
  double t73;
  double t27;
  double t34;
  double t348;
  double t82;
  double t83;
  double t364;
  double t109;
  double t112;
  double t113;
  double t125;
  double t126;
  double t361;
  double t367;
  double t373;
  double t378;
  double t385;
  double t386;
  double t142;
  double t148;
  double t149;
  double t174;
  double t185;
  double t187;
  double t391;
  double t393;
  double t401;
  double t407;
  double t408;
  double t412;
  double t202;
  double t204;
  double t206;
  double t210;
  double t211;
  double t230;
  double t235;
  double t236;
  double t239;
  double t241;
  double t419;
  double t420;
  double t426;
  double t428;
  double t436;
  double t442;
  double t443;
  double t447;
  double t280;
  double t281;
  double t452;
  double t455;
  double t461;
  double t462;
  double t322;
  double t328;
  double t514;
  double t518;
  double t520;
  double t525;
  double t530;
  double t531;
  double t537;
  double t539;
  double t542;
  double t545;
  double t546;
  double t547;
  double t550;
  double t553;
  double t558;
  double t564;
  double t568;
  double t569;
  double t570;
  double t574;
  double t580;
  double t581;
  double t584;
  double t587;
  double t690;
  double t691;
  double t693;
  double t722;
  double t654;
  double t660;
  double t662;
  double t682;
  double t683;
  double t708;
  double t739;
  double t805;
  double t878;
  double t884;
  double t887;
  double t899;
  double t838;
  double t851;
  double t814;
  double t817;
  double t818;
  double t860;
  double t864;
  double t871;
  double t914;
  double t798;
  double t944;
  double t807;
  double t983;
  double t895;
  double t1015;
  double t1016;
  double t723;
  double t931;
  double t933;
  double t937;
  double t947;
  double t948;
  double t953;
  double t958;
  double t962;
  double t964;
  double t1055;
  double t1017;
  double t1018;
  double t1020;
  double t1022;
  double t1031;
  double t1034;
  double t1035;
  double t1042;
  double t1082;
  double t1083;
  double t1084;
  double t1085;
  double t1087;
  double t1090;
  double t1094;
  double t1097;
  double t920;
  double t1099;
  double t908;
  double t1123;
  double t1003;
  double t1104;
  double t1105;
  double t991;
  double t689;
  double t698;
  double t731;
  double t738;
  double t741;
  double t766;
  double t767;
  double t665;
  double t687;
  double t775;
  double t782;
  double t789;
  double t795;
  double t801;
  double t804;
  double t808;
  double t811;
  double t813;
  double t820;
  double t832;
  double t843;
  double t850;
  double t853;
  double t854;
  double t859;
  double t877;
  double t891;
  double t909;
  double t911;
  double t922;
  double t927;
  double t930;
  double t1169;
  double t1172;
  double t1173;
  double t1177;
  double t1178;
  double t1183;
  double t976;
  double t982;
  double t992;
  double t998;
  double t1008;
  double t1010;
  double t1011;
  double t1049;
  double t1051;
  double t1057;
  double t1064;
  double t1067;
  double t1072;
  double t1075;
  double t1101;
  double t1193;
  double t1194;
  double t1195;
  double t1197;
  double t1106;
  double t1203;
  double t1207;
  double t1210;
  double t1213;
  double t1109;
  double t1112;
  double t1225;
  double t1227;
  double t1231;
  double t1234;
  double t1118;
  double t1120;
  double t1124;
  double t1129;
  double t1138;
  double t1146;
  double t1149;
  double t1151;
  double t1303;
  double t1307;
  double t1308;
  double t1312;
  double t1314;
  double t1316;
  double t1321;
  double t1323;
  double t1329;
  double t1330;
  double t1334;
  double t1341;
  double t1342;
  double t1344;
  double t1349;
  double t1355;
  double t1356;
  double t1362;
  t50 = Cos(var1[10]);
  t14 = Cos(var1[4]);
  t22 = Cos(var1[9]);
  t23 = -1.*t22;
  t26 = 1. + t23;
  t28 = Sin(var1[9]);
  t30 = -0.15121*t28;
  t52 = -1.*t50;
  t53 = 1. + t52;
  t59 = -1. + t50;
  t67 = Sin(var1[10]);
  t17 = Cos(var1[5]);
  t84 = Sin(var1[5]);
  t75 = Sin(var1[4]);
  t130 = -1.*t14*t17*t28;
  t132 = -1.*t22*t14*t84;
  t133 = t130 + t132;
  t155 = t22*t14*t17;
  t160 = -1.*t14*t28*t84;
  t162 = t155 + t160;
  t167 = Cos(var1[11]);
  t168 = -1.*t167;
  t171 = 1. + t168;
  t181 = Sin(var1[11]);
  t205 = -1. + t167;
  t189 = t67*t75;
  t190 = -4.e-6*t67*t133;
  t191 = -1.000000000016*t53;
  t193 = 1. + t191;
  t197 = t193*t162;
  t199 = t189 + t190 + t197;
  t215 = t50*t75;
  t217 = 4.e-6*t53*t133;
  t221 = -1.*t67*t162;
  t225 = t215 + t217 + t221;
  t242 = 4.e-6*t53*t75;
  t247 = 1.6e-11*t59;
  t252 = 1. + t247;
  t253 = t252*t133;
  t266 = 4.e-6*t67*t162;
  t267 = t242 + t253 + t266;
  t45 = -4.9936e-13*var1[10];
  t58 = -0.038749*t53;
  t66 = 6.19984e-13*t59;
  t68 = -0.281210000004*t67;
  t73 = t45 + t58 + t66 + t68;
  t27 = 0.15121*t26;
  t34 = t27 + t30;
  t348 = Sin(var1[3]);
  t82 = -0.15121*t26;
  t83 = t82 + t30;
  t364 = Cos(var1[3]);
  t109 = -1.2484e-7*var1[10];
  t112 = 2.479936e-18*t53;
  t113 = -1.54996e-7*t59;
  t125 = 1.124840000016e-6*t67;
  t126 = t109 + t112 + t113 + t125;
  t361 = t17*t348*t75;
  t367 = t364*t84;
  t373 = t361 + t367;
  t378 = t364*t17;
  t385 = -1.*t348*t75*t84;
  t386 = t378 + t385;
  t142 = 0.281210000008499*t53;
  t148 = -0.03874900000062*t67;
  t149 = t142 + t148;
  t174 = 0.50315000001605*t171;
  t185 = -0.0398890000006382*t181;
  t187 = t174 + t185;
  t391 = -1.*t28*t373;
  t393 = t22*t386;
  t401 = t391 + t393;
  t407 = t22*t373;
  t408 = t28*t386;
  t412 = t407 + t408;
  t202 = -5.04e-14*var1[11];
  t204 = -0.039889*t171;
  t206 = 6.38224e-13*t205;
  t210 = -0.503150000008*t181;
  t211 = t202 + t204 + t206 + t210;
  t230 = -1.26e-8*var1[11];
  t235 = 2.552896e-18*t171;
  t236 = -1.59556e-7*t205;
  t239 = 2.012600000032e-6*t181;
  t241 = t230 + t235 + t236 + t239;
  t419 = -1.*t14*t67*t348;
  t420 = -4.e-6*t67*t401;
  t426 = t193*t412;
  t428 = t419 + t420 + t426;
  t436 = -1.*t50*t14*t348;
  t442 = 4.e-6*t53*t401;
  t443 = -1.*t67*t412;
  t447 = t436 + t442 + t443;
  t280 = 1.6e-11*t205;
  t281 = 1. + t280;
  t452 = -4.e-6*t53*t14*t348;
  t455 = t252*t401;
  t461 = 4.e-6*t67*t412;
  t462 = t452 + t455 + t461;
  t322 = -1.000000000016*t171;
  t328 = 1. + t322;
  t514 = -1.*t364*t17*t75;
  t518 = t348*t84;
  t520 = t514 + t518;
  t525 = t17*t348;
  t530 = t364*t75*t84;
  t531 = t525 + t530;
  t537 = -1.*t28*t520;
  t539 = t22*t531;
  t542 = t537 + t539;
  t545 = t22*t520;
  t546 = t28*t531;
  t547 = t545 + t546;
  t550 = t364*t14*t67;
  t553 = -4.e-6*t67*t542;
  t558 = t193*t547;
  t564 = t550 + t553 + t558;
  t568 = t50*t364*t14;
  t569 = 4.e-6*t53*t542;
  t570 = -1.*t67*t547;
  t574 = t568 + t569 + t570;
  t580 = 4.e-6*t53*t364*t14;
  t581 = t252*t542;
  t584 = 4.e-6*t67*t547;
  t587 = t580 + t581 + t584;
  t690 = Cos(var1[13]);
  t691 = -1.*t690;
  t693 = 1. + t691;
  t722 = Sin(var1[13]);
  t654 = Cos(var1[12]);
  t660 = -1.*t654;
  t662 = 1. + t660;
  t682 = Sin(var1[12]);
  t683 = 0.15121*t682;
  t708 = 4.e-6*t693;
  t739 = -2.8e-11*t693;
  t805 = 7.e-6*t693;
  t878 = Cos(var1[14]);
  t884 = -1.*t878;
  t887 = 1. + t884;
  t899 = Sin(var1[14]);
  t838 = -1.*t722;
  t851 = -4.e-6*t722;
  t814 = -1.*t14*t17*t682;
  t817 = -1.*t654*t14*t84;
  t818 = t814 + t817;
  t860 = t654*t14*t17;
  t864 = -1.*t14*t682*t84;
  t871 = t860 + t864;
  t914 = 7.e-6*t887;
  t798 = -7.e-6*t722;
  t944 = -7.e-6*t693;
  t807 = 4.e-6*t722;
  t983 = 4.e-6*t887;
  t895 = -2.8e-11*t887;
  t1015 = -1. + t690;
  t1016 = 4.e-6*t1015;
  t723 = 7.e-6*t722;
  t931 = 2.8e-11*t693;
  t933 = t931 + t838;
  t937 = t933*t75;
  t947 = t944 + t851;
  t948 = t947*t818;
  t953 = -1.000000000016*t693;
  t958 = 1. + t953;
  t962 = t958*t871;
  t964 = t937 + t948 + t962;
  t1055 = 7.e-6*t899;
  t1017 = t1016 + t798;
  t1018 = t1017*t75;
  t1020 = -6.5e-11*t693;
  t1022 = 1. + t1020;
  t1031 = t1022*t818;
  t1034 = t944 + t807;
  t1035 = t1034*t871;
  t1042 = t1018 + t1031 + t1035;
  t1082 = -1.000000000049*t693;
  t1083 = 1. + t1082;
  t1084 = t1083*t75;
  t1085 = t1016 + t723;
  t1087 = t1085*t818;
  t1090 = t931 + t722;
  t1094 = t1090*t871;
  t1097 = t1084 + t1087 + t1094;
  t920 = -4.e-6*t899;
  t1099 = 2.8e-11*t887;
  t908 = -1.*t899;
  t1123 = -7.e-6*t887;
  t1003 = 4.e-6*t899;
  t1104 = -1. + t878;
  t1105 = 4.e-6*t1104;
  t991 = -7.e-6*t899;
  t689 = 5.856279999999999e-13*var1[13];
  t698 = -0.0387489999948987*t693;
  t731 = t708 + t723;
  t738 = -2.123459e-6*t731;
  t741 = t739 + t722;
  t766 = -0.281209000004*t741;
  t767 = t689 + t698 + t738 + t766;
  t665 = -0.15121*t662;
  t687 = t665 + t683;
  t775 = 0.15121*t662;
  t782 = t775 + t683;
  t789 = -1.4640699999999997e-7*var1[13];
  t795 = -1.38024835e-16*t693;
  t801 = t708 + t798;
  t804 = -0.038748999993*t801;
  t808 = t805 + t807;
  t811 = -0.281209000004*t808;
  t813 = t789 + t795 + t804 + t811;
  t820 = 1.0248489999999998e-12*var1[13];
  t832 = -0.28120900000849935*t693;
  t843 = t739 + t838;
  t850 = -0.038748999993*t843;
  t853 = t805 + t851;
  t854 = -2.123459e-6*t853;
  t859 = t820 + t832 + t850 + t854;
  t877 = 1.8190549999999993e-12*var1[14];
  t891 = -0.5031490000160505*t887;
  t909 = t895 + t908;
  t911 = -0.038922999986*t909;
  t922 = t914 + t920;
  t927 = -3.6777349999999994e-6*t922;
  t930 = t877 + t891 + t911 + t927;
  t1169 = -1.*t682*t373;
  t1172 = t654*t386;
  t1173 = t1169 + t1172;
  t1177 = t654*t373;
  t1178 = t682*t386;
  t1183 = t1177 + t1178;
  t976 = -2.598649999999999e-7*var1[14];
  t982 = -2.3905277499999995e-16*t887;
  t992 = t983 + t991;
  t998 = -0.038922999986*t992;
  t1008 = t914 + t1003;
  t1010 = -0.503149000008*t1008;
  t1011 = t976 + t982 + t998 + t1010;
  t1049 = 1.0394599999999997e-12*var1[14];
  t1051 = -0.03892299998790722*t887;
  t1057 = t983 + t1055;
  t1064 = -3.6777349999999994e-6*t1057;
  t1067 = t895 + t899;
  t1072 = -0.503149000008*t1067;
  t1075 = t1049 + t1051 + t1064 + t1072;
  t1101 = t1099 + t899;
  t1193 = -1.*t14*t933*t348;
  t1194 = t947*t1173;
  t1195 = t958*t1183;
  t1197 = t1193 + t1194 + t1195;
  t1106 = t1105 + t1055;
  t1203 = -1.*t14*t1017*t348;
  t1207 = t1022*t1173;
  t1210 = t1034*t1183;
  t1213 = t1203 + t1207 + t1210;
  t1109 = -1.000000000049*t887;
  t1112 = 1. + t1109;
  t1225 = -1.*t1083*t14*t348;
  t1227 = t1085*t1173;
  t1231 = t1090*t1183;
  t1234 = t1225 + t1227 + t1231;
  t1118 = -1.000000000016*t887;
  t1120 = 1. + t1118;
  t1124 = t1123 + t920;
  t1129 = t1099 + t908;
  t1138 = t1123 + t1003;
  t1146 = -6.5e-11*t887;
  t1149 = 1. + t1146;
  t1151 = t1105 + t991;
  t1303 = -1.*t682*t520;
  t1307 = t654*t531;
  t1308 = t1303 + t1307;
  t1312 = t654*t520;
  t1314 = t682*t531;
  t1316 = t1312 + t1314;
  t1321 = t364*t14*t933;
  t1323 = t947*t1308;
  t1329 = t958*t1316;
  t1330 = t1321 + t1323 + t1329;
  t1334 = t364*t14*t1017;
  t1341 = t1022*t1308;
  t1342 = t1034*t1316;
  t1344 = t1334 + t1341 + t1342;
  t1349 = t1083*t364*t14;
  t1355 = t1085*t1308;
  t1356 = t1090*t1316;
  t1362 = t1349 + t1355 + t1356;
  p_output1[0]=t126*t133 + t149*t162 + t187*t199 + t211*t225 + t241*t267 - 0.041195*(-1.*t181*t199 + t167*t225 + 4.e-6*t171*t267) - 0.14871*(4.e-6*t181*t199 + 4.e-6*t171*t225 + t267*t281) + 0.803147*(t181*t225 - 4.e-6*t181*t267 + t199*t328) + t14*t17*t34 + t73*t75 - 1.*t14*t83*t84 + var1[0];
  p_output1[1]=t34*t373 + t126*t401 + t149*t412 + t187*t428 + t211*t447 + t241*t462 - 0.041195*(-1.*t181*t428 + t167*t447 + 4.e-6*t171*t462) + 0.803147*(t328*t428 + t181*t447 - 4.e-6*t181*t462) - 0.14871*(4.e-6*t181*t428 + 4.e-6*t171*t447 + t281*t462) - 1.*t14*t348*t73 + t386*t83 + var1[1];
  p_output1[2]=t34*t520 + t126*t542 + t149*t547 + t187*t564 + t211*t574 + t241*t587 - 0.041195*(-1.*t181*t564 + t167*t574 + 4.e-6*t171*t587) + 0.803147*(t328*t564 + t181*t574 - 4.e-6*t181*t587) - 0.14871*(4.e-6*t181*t564 + 4.e-6*t171*t574 + t281*t587) + t14*t364*t73 + t531*t83 + var1[2];
  p_output1[3]=t1011*t1042 + t1075*t1097 + t14*t17*t687 + t75*t767 + t813*t818 - 1.*t14*t782*t84 + t859*t871 + t930*t964 - 0.038924*(t1042*t1106 + t1097*t1112 + t1101*t964) - 0.80315*(t1042*t1124 + t1097*t1129 + t1120*t964) + 0.148705*(t1042*t1149 + t1097*t1151 + t1138*t964) + var1[0];
  p_output1[4]=t1011*t1213 + t1075*t1234 - 0.038924*(t1101*t1197 + t1106*t1213 + t1112*t1234) - 0.80315*(t1120*t1197 + t1124*t1213 + t1129*t1234) + 0.148705*(t1138*t1197 + t1149*t1213 + t1151*t1234) + t373*t687 - 1.*t14*t348*t767 + t386*t782 + t1173*t813 + t1183*t859 + t1197*t930 + var1[1];
  p_output1[5]=t1011*t1344 + t1075*t1362 - 0.038924*(t1101*t1330 + t1106*t1344 + t1112*t1362) - 0.80315*(t1120*t1330 + t1124*t1344 + t1129*t1362) + 0.148705*(t1138*t1330 + t1149*t1344 + t1151*t1362) + t520*t687 + t14*t364*t767 + t531*t782 + t1308*t813 + t1316*t859 + t1330*t930 + var1[2];
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

#include "output_boundary_DiagonalStance2.hh"

namespace DiagonalStance2
{

void output_boundary_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
