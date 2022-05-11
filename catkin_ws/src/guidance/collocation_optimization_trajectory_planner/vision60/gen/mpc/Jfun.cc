/*
 * Automatically Generated from Mathematica.
 * Tue 16 Nov 2021 16:34:56 GMT+01:00
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
  double t227;
  double t85;
  double t244;
  double t119;
  double t317;
  double t374;
  double t381;
  double t386;
  double t397;
  double t399;
  double t199;
  double t337;
  double t338;
  double t450;
  double t451;
  double t457;
  double t519;
  double t522;
  double t527;
  double t532;
  double t575;
  double t584;
  double t487;
  double t488;
  double t505;
  double t549;
  double t560;
  double t561;
  double t620;
  double t642;
  double t651;
  double t665;
  double t585;
  double t594;
  double t597;
  double t598;
  double t599;
  double t601;
  double t700;
  double t687;
  double t688;
  double t689;
  double t690;
  double t673;
  double t674;
  double t675;
  double t676;
  double t677;
  double t678;
  double t400;
  double t443;
  double t463;
  double t475;
  double t725;
  double t726;
  double t727;
  double t729;
  double t730;
  double t731;
  double t518;
  double t529;
  double t540;
  double t541;
  double t562;
  double t565;
  double t566;
  double t576;
  double t578;
  double t579;
  double t580;
  double t733;
  double t734;
  double t735;
  double t737;
  double t738;
  double t739;
  double t611;
  double t660;
  double t666;
  double t667;
  double t683;
  double t684;
  double t685;
  double t695;
  double t696;
  double t697;
  double t698;
  double t701;
  double t702;
  double t742;
  double t743;
  double t744;
  double t745;
  double t752;
  double t753;
  double t754;
  double t755;
  double t747;
  double t748;
  double t749;
  double t750;
  double t717;
  double t718;
  double t775;
  double t776;
  double t777;
  double t779;
  double t780;
  double t781;
  double t784;
  double t785;
  double t786;
  double t787;
  double t794;
  double t795;
  double t796;
  double t797;
  double t789;
  double t790;
  double t791;
  double t792;
  double t817;
  double t818;
  double t819;
  double t821;
  double t822;
  double t823;
  double t826;
  double t827;
  double t828;
  double t829;
  double t836;
  double t837;
  double t838;
  double t839;
  double t831;
  double t832;
  double t833;
  double t834;
  double t859;
  double t860;
  double t861;
  double t863;
  double t864;
  double t865;
  double t868;
  double t869;
  double t870;
  double t871;
  double t878;
  double t879;
  double t880;
  double t881;
  double t873;
  double t874;
  double t875;
  double t876;
  double t901;
  double t902;
  double t903;
  double t905;
  double t906;
  double t907;
  double t913;
  double t914;
  double t915;
  double t909;
  double t910;
  double t911;
  double t917;
  double t918;
  double t919;
  double t937;
  double t938;
  double t939;
  double t942;
  double t943;
  double t944;
  double t946;
  double t947;
  double t953;
  double t954;
  double t955;
  double t949;
  double t950;
  double t951;
  double t957;
  double t958;
  double t959;
  double t978;
  double t979;
  double t980;
  double t982;
  double t983;
  double t985;
  double t986;
  double t987;
  double t993;
  double t994;
  double t995;
  double t989;
  double t990;
  double t991;
  double t997;
  double t998;
  double t999;
  double t904;
  double t908;
  double t912;
  double t916;
  double t920;
  double t921;
  double t922;
  double t923;
  double t924;
  double t925;
  double t926;
  double t927;
  double t928;
  double t929;
  double t930;
  double t931;
  double t932;
  double t933;
  double t934;
  double t935;
  double t1017;
  double t1018;
  double t1020;
  double t1021;
  double t1026;
  double t1027;
  double t1034;
  double t1035;
  double t1036;
  double t1030;
  double t1031;
  double t1032;
  double t1038;
  double t1039;
  double t1040;
  double t1059;
  double t1060;
  double t1061;
  double t1063;
  double t1064;
  double t1066;
  double t1067;
  double t1073;
  double t1074;
  double t1075;
  double t1069;
  double t1070;
  double t1071;
  double t1077;
  double t1078;
  double t1079;
  double t1105;
  double t1106;
  double t1107;
  double t1117;
  double t1118;
  double t1119;
  double t1120;
  double t1122;
  double t1123;
  double t1124;
  double t1125;
  double t1112;
  double t1113;
  double t1114;
  double t1115;
  double t1097;
  double t1098;
  double t1099;
  double t1101;
  double t1102;
  double t1103;
  double t1108;
  double t1109;
  double t1110;
  double t1151;
  double t1152;
  double t1153;
  double t1154;
  double t1156;
  double t1157;
  double t1146;
  double t1147;
  double t1148;
  double t1149;
  double t1177;
  double t1178;
  double t1179;
  double t1186;
  double t1187;
  double t1188;
  double t1190;
  double t1191;
  double t1192;
  double t1193;
  double t1181;
  double t1182;
  double t1183;
  double t1184;
  double t1219;
  double t1220;
  double t1221;
  double t1222;
  double t1211;
  double t1212;
  double t1213;
  double t1214;
  double t1227;
  double t1228;
  double t1215;
  double t1216;
  double t1217;
  double t1223;
  double t1224;
  double t1225;
  double t1229;
  double t1230;
  double t1231;
  double t768;
  double t769;
  double t1271;
  double t1272;
  double t1273;
  double t1274;
  double t1266;
  double t1267;
  double t1268;
  double t1269;
  double t1276;
  double t1277;
  t227 = Cos(var1[3]);
  t85 = Cos(var1[5]);
  t244 = Sin(var1[4]);
  t119 = Sin(var1[3]);
  t317 = Sin(var1[5]);
  t374 = Cos(var1[6]);
  t381 = -1.*t374;
  t386 = 1. + t381;
  t397 = 0.15121*t386;
  t399 = Sin(var1[6]);
  t199 = -1.*t85*t119;
  t337 = -1.*t227*t244*t317;
  t338 = t199 + t337;
  t450 = t227*t85*t244;
  t451 = -1.*t119*t317;
  t457 = t450 + t451;
  t519 = Cos(var1[7]);
  t522 = -1.*t519;
  t527 = 1. + t522;
  t532 = Sin(var1[7]);
  t575 = Cos(var1[4]);
  t584 = -1. + t519;
  t487 = t374*t338;
  t488 = -1.*t457*t399;
  t505 = t487 + t488;
  t549 = t374*t457;
  t560 = t338*t399;
  t561 = t549 + t560;
  t620 = Cos(var1[8]);
  t642 = -1.*t620;
  t651 = 1. + t642;
  t665 = Sin(var1[8]);
  t585 = -4.e-6*t227*t575*t584;
  t594 = 1.6e-11*t584;
  t597 = 1. + t594;
  t598 = t597*t505;
  t599 = 4.e-6*t561*t532;
  t601 = t585 + t598 + t599;
  t700 = -1. + t620;
  t687 = -1.*t227*t575*t519;
  t688 = 4.e-6*t584*t505;
  t689 = t561*t532;
  t690 = t687 + t688 + t689;
  t673 = -1.000000000016*t527;
  t674 = 1. + t673;
  t675 = t674*t561;
  t676 = t227*t575*t532;
  t677 = -4.e-6*t505*t532;
  t678 = t675 + t676 + t677;
  t400 = -0.15121*t399;
  t443 = t397 + t400;
  t463 = 0.15121*t399;
  t475 = t397 + t463;
  t725 = t227*t85;
  t726 = -1.*t119*t244*t317;
  t727 = t725 + t726;
  t729 = t85*t119*t244;
  t730 = t227*t317;
  t731 = t729 + t730;
  t518 = -1.2484e-7*var1[7];
  t529 = -1.5499600000248e-7*t527;
  t540 = 1.124840000016e-6*t532;
  t541 = t518 + t529 + t540;
  t562 = 0.281210000008499*t527;
  t565 = 0.03874900000062*t532;
  t566 = t562 + t565;
  t576 = 4.9936e-13*var1[7];
  t578 = -0.03874900000062*t527;
  t579 = 0.281210000004*t532;
  t580 = t576 + t578 + t579;
  t733 = t374*t727;
  t734 = -1.*t731*t399;
  t735 = t733 + t734;
  t737 = t374*t731;
  t738 = t727*t399;
  t739 = t737 + t738;
  t611 = -1.284e-8*var1[8];
  t660 = -1.5499600000248e-7*t651;
  t666 = 2.012840000032e-6*t665;
  t667 = t611 + t660 + t666;
  t683 = 0.503210000016051*t651;
  t684 = 0.03874900000062*t665;
  t685 = t683 + t684;
  t695 = 5.136e-14*var1[8];
  t696 = -0.03874900000062*t651;
  t697 = 0.503210000008*t665;
  t698 = t695 + t696 + t697;
  t701 = 1.6e-11*t700;
  t702 = 1. + t701;
  t742 = -4.e-6*t575*t584*t119;
  t743 = t597*t735;
  t744 = 4.e-6*t739*t532;
  t745 = t742 + t743 + t744;
  t752 = -1.*t575*t519*t119;
  t753 = 4.e-6*t584*t735;
  t754 = t739*t532;
  t755 = t752 + t753 + t754;
  t747 = t674*t739;
  t748 = t575*t119*t532;
  t749 = -4.e-6*t735*t532;
  t750 = t747 + t748 + t749;
  t717 = -1.000000000016*t651;
  t718 = 1. + t717;
  t775 = t374*t244*t317;
  t776 = t85*t244*t399;
  t777 = t775 + t776;
  t779 = -1.*t85*t374*t244;
  t780 = t244*t317*t399;
  t781 = t779 + t780;
  t784 = 4.e-6*t575*t584;
  t785 = t597*t777;
  t786 = 4.e-6*t781*t532;
  t787 = t784 + t785 + t786;
  t794 = t575*t519;
  t795 = 4.e-6*t584*t777;
  t796 = t781*t532;
  t797 = t794 + t795 + t796;
  t789 = t674*t781;
  t790 = -1.*t575*t532;
  t791 = -4.e-6*t777*t532;
  t792 = t789 + t790 + t791;
  t817 = -1.*t575*t374*t119*t317;
  t818 = -1.*t575*t85*t119*t399;
  t819 = t817 + t818;
  t821 = t575*t85*t374*t119;
  t822 = -1.*t575*t119*t317*t399;
  t823 = t821 + t822;
  t826 = 4.e-6*t584*t119*t244;
  t827 = t597*t819;
  t828 = 4.e-6*t823*t532;
  t829 = t826 + t827 + t828;
  t836 = t519*t119*t244;
  t837 = 4.e-6*t584*t819;
  t838 = t823*t532;
  t839 = t836 + t837 + t838;
  t831 = t674*t823;
  t832 = -1.*t119*t244*t532;
  t833 = -4.e-6*t819*t532;
  t834 = t831 + t832 + t833;
  t859 = t227*t575*t374*t317;
  t860 = t227*t575*t85*t399;
  t861 = t859 + t860;
  t863 = -1.*t227*t575*t85*t374;
  t864 = t227*t575*t317*t399;
  t865 = t863 + t864;
  t868 = -4.e-6*t227*t584*t244;
  t869 = t597*t861;
  t870 = 4.e-6*t865*t532;
  t871 = t868 + t869 + t870;
  t878 = -1.*t227*t519*t244;
  t879 = 4.e-6*t584*t861;
  t880 = t865*t532;
  t881 = t878 + t879 + t880;
  t873 = t674*t865;
  t874 = t227*t244*t532;
  t875 = -4.e-6*t861*t532;
  t876 = t873 + t874 + t875;
  t901 = -1.*t575*t85*t374;
  t902 = t575*t317*t399;
  t903 = t901 + t902;
  t905 = -1.*t575*t374*t317;
  t906 = -1.*t575*t85*t399;
  t907 = t905 + t906;
  t913 = t674*t907;
  t914 = -4.e-6*t903*t532;
  t915 = t913 + t914;
  t909 = t597*t903;
  t910 = 4.e-6*t907*t532;
  t911 = t909 + t910;
  t917 = 4.e-6*t584*t903;
  t918 = t907*t532;
  t919 = t917 + t918;
  t937 = -1.*t85*t119*t244;
  t938 = -1.*t227*t317;
  t939 = t937 + t938;
  t942 = t374*t939;
  t943 = -1.*t727*t399;
  t944 = t942 + t943;
  t946 = t939*t399;
  t947 = t733 + t946;
  t953 = t674*t947;
  t954 = -4.e-6*t944*t532;
  t955 = t953 + t954;
  t949 = t597*t944;
  t950 = 4.e-6*t947*t532;
  t951 = t949 + t950;
  t957 = 4.e-6*t584*t944;
  t958 = t947*t532;
  t959 = t957 + t958;
  t978 = t85*t119;
  t979 = t227*t244*t317;
  t980 = t978 + t979;
  t982 = -1.*t980*t399;
  t983 = t549 + t982;
  t985 = t374*t980;
  t986 = t457*t399;
  t987 = t985 + t986;
  t993 = t674*t987;
  t994 = -4.e-6*t983*t532;
  t995 = t993 + t994;
  t989 = t597*t983;
  t990 = 4.e-6*t987*t532;
  t991 = t989 + t990;
  t997 = 4.e-6*t584*t983;
  t998 = t987*t532;
  t999 = t997 + t998;
  t904 = t903*t541;
  t908 = t907*t566;
  t912 = t911*t667;
  t916 = t915*t685;
  t920 = t919*t698;
  t921 = t718*t915;
  t922 = -4.e-6*t911*t665;
  t923 = -1.*t919*t665;
  t924 = t921 + t922 + t923;
  t925 = 0.80321*t924;
  t926 = t702*t911;
  t927 = 4.e-6*t700*t919;
  t928 = 4.e-6*t915*t665;
  t929 = t926 + t927 + t928;
  t930 = 0.14871*t929;
  t931 = 4.e-6*t700*t911;
  t932 = t620*t919;
  t933 = t915*t665;
  t934 = t931 + t932 + t933;
  t935 = -0.03875*t934;
  t1017 = -0.15121*t374;
  t1018 = t1017 + t463;
  t1020 = 0.15121*t374;
  t1021 = t1020 + t463;
  t1026 = -1.*t374*t731;
  t1027 = t1026 + t943;
  t1034 = t674*t735;
  t1035 = -4.e-6*t1027*t532;
  t1036 = t1034 + t1035;
  t1030 = t597*t1027;
  t1031 = 4.e-6*t735*t532;
  t1032 = t1030 + t1031;
  t1038 = 4.e-6*t584*t1027;
  t1039 = t735*t532;
  t1040 = t1038 + t1039;
  t1059 = -1.*t227*t85*t244;
  t1060 = t119*t317;
  t1061 = t1059 + t1060;
  t1063 = -1.*t374*t1061;
  t1064 = t1063 + t982;
  t1066 = -1.*t1061*t399;
  t1067 = t985 + t1066;
  t1073 = t674*t1067;
  t1074 = -4.e-6*t1064*t532;
  t1075 = t1073 + t1074;
  t1069 = t597*t1064;
  t1070 = 4.e-6*t1067*t532;
  t1071 = t1069 + t1070;
  t1077 = 4.e-6*t584*t1064;
  t1078 = t1067*t532;
  t1079 = t1077 + t1078;
  t1105 = t575*t85*t374;
  t1106 = -1.*t575*t317*t399;
  t1107 = t1105 + t1106;
  t1117 = -1.*t519*t244;
  t1118 = -4.e-6*t519*t907;
  t1119 = -1.000000000016*t1107*t532;
  t1120 = t1117 + t1118 + t1119;
  t1122 = t519*t1107;
  t1123 = -1.*t244*t532;
  t1124 = -4.e-6*t907*t532;
  t1125 = t1122 + t1123 + t1124;
  t1112 = 4.e-6*t519*t1107;
  t1113 = -4.e-6*t244*t532;
  t1114 = -1.6e-11*t907*t532;
  t1115 = t1112 + t1113 + t1114;
  t1097 = 0.281210000004*t519;
  t1098 = -0.03874900000062*t532;
  t1099 = 4.9936e-13 + t1097 + t1098;
  t1101 = 1.124840000016e-6*t519;
  t1102 = -1.5499600000248e-7*t532;
  t1103 = -1.2484e-7 + t1101 + t1102;
  t1108 = 0.03874900000062*t519;
  t1109 = 0.281210000008499*t532;
  t1110 = t1108 + t1109;
  t1151 = t575*t519*t119;
  t1152 = -4.e-6*t519*t735;
  t1153 = -1.000000000016*t739*t532;
  t1154 = t1151 + t1152 + t1153;
  t1156 = t519*t739;
  t1157 = t1156 + t748 + t749;
  t1146 = 4.e-6*t519*t739;
  t1147 = 4.e-6*t575*t119*t532;
  t1148 = -1.6e-11*t735*t532;
  t1149 = t1146 + t1147 + t1148;
  t1177 = t374*t1061;
  t1178 = t980*t399;
  t1179 = t1177 + t1178;
  t1186 = -4.e-6*t519*t1067;
  t1187 = -1.000000000016*t1179*t532;
  t1188 = t687 + t1186 + t1187;
  t1190 = t519*t1179;
  t1191 = -1.*t227*t575*t532;
  t1192 = -4.e-6*t1067*t532;
  t1193 = t1190 + t1191 + t1192;
  t1181 = 4.e-6*t519*t1179;
  t1182 = -4.e-6*t227*t575*t532;
  t1183 = -1.6e-11*t1067*t532;
  t1184 = t1181 + t1182 + t1183;
  t1219 = 4.e-6*t584*t244;
  t1220 = t597*t907;
  t1221 = 4.e-6*t1107*t532;
  t1222 = t1219 + t1220 + t1221;
  t1211 = t519*t244;
  t1212 = 4.e-6*t584*t907;
  t1213 = t1107*t532;
  t1214 = t1211 + t1212 + t1213;
  t1227 = t674*t1107;
  t1228 = t1227 + t1123 + t1124;
  t1215 = 0.503210000008*t620;
  t1216 = -0.03874900000062*t665;
  t1217 = 5.136e-14 + t1215 + t1216;
  t1223 = 2.012840000032e-6*t620;
  t1224 = -1.5499600000248e-7*t665;
  t1225 = -1.284e-8 + t1223 + t1224;
  t1229 = 0.03874900000062*t620;
  t1230 = 0.503210000016051*t665;
  t1231 = t1229 + t1230;
  t768 = -4.e-6*t745*t665;
  t769 = -1.*t755*t665;
  t1271 = 4.e-6*t227*t575*t584;
  t1272 = t597*t1067;
  t1273 = 4.e-6*t1179*t532;
  t1274 = t1271 + t1272 + t1273;
  t1266 = t227*t575*t519;
  t1267 = 4.e-6*t584*t1067;
  t1268 = t1179*t532;
  t1269 = t1266 + t1267 + t1268;
  t1276 = t674*t1179;
  t1277 = t1276 + t1191 + t1192;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=0;
  p_output1[10]=t338*t443 + t457*t475 + t505*t541 + t561*t566 - 1.*t227*t575*t580 + t601*t667 + t678*t685 + t690*t698 - 0.03875*(t665*t678 + t620*t690 + 4.e-6*t601*t700) + 0.14871*(4.e-6*t665*t678 + 4.e-6*t690*t700 + t601*t702) + 0.80321*(-4.e-6*t601*t665 - 1.*t665*t690 + t678*t718);
  p_output1[11]=-1.*t119*t575*t580 + t443*t727 + t475*t731 + t541*t735 + t566*t739 + t667*t745 + t685*t750 + t698*t755 - 0.03875*(4.e-6*t700*t745 + t665*t750 + t620*t755) + 0.14871*(t702*t745 + 4.e-6*t665*t750 + 4.e-6*t700*t755) + 0.80321*(t718*t750 + t768 + t769);
  p_output1[12]=t244*t317*t443 + t575*t580 + t541*t777 + t566*t781 + t667*t787 + t685*t792 + t698*t797 - 0.03875*(4.e-6*t700*t787 + t665*t792 + t620*t797) + 0.80321*(-4.e-6*t665*t787 + t718*t792 - 1.*t665*t797) + 0.14871*(t702*t787 + 4.e-6*t665*t792 + 4.e-6*t700*t797) - 1.*t244*t475*t85;
  p_output1[13]=-1.*t119*t317*t443*t575 + t119*t244*t580 + t541*t819 + t566*t823 + t667*t829 + t685*t834 + t698*t839 - 0.03875*(4.e-6*t700*t829 + t665*t834 + t620*t839) + 0.80321*(-4.e-6*t665*t829 + t718*t834 - 1.*t665*t839) + 0.14871*(t702*t829 + 4.e-6*t665*t834 + 4.e-6*t700*t839) + t119*t475*t575*t85;
  p_output1[14]=t227*t317*t443*t575 - 1.*t227*t244*t580 - 1.*t227*t475*t575*t85 + t541*t861 + t566*t865 + t667*t871 + t685*t876 + t698*t881 - 0.03875*(4.e-6*t700*t871 + t665*t876 + t620*t881) + 0.80321*(-4.e-6*t665*t871 + t718*t876 - 1.*t665*t881) + 0.14871*(t702*t871 + 4.e-6*t665*t876 + 4.e-6*t700*t881);
  p_output1[15]=-1.*t317*t475*t575 - 1.*t443*t575*t85 + t904 + t908 + t912 + t916 + t920 + t925 + t930 + t935;
  p_output1[16]=t475*t727 + t443*t939 + t541*t944 + t566*t947 + t667*t951 + t685*t955 + t698*t959 - 0.03875*(4.e-6*t700*t951 + t665*t955 + t620*t959) + 0.80321*(-4.e-6*t665*t951 + t718*t955 - 1.*t665*t959) + 0.14871*(t702*t951 + 4.e-6*t665*t955 + 4.e-6*t700*t959);
  p_output1[17]=t443*t457 + t475*t980 + t541*t983 + t566*t987 + t667*t991 + t685*t995 + t698*t999 - 0.03875*(4.e-6*t700*t991 + t665*t995 + t620*t999) + 0.80321*(-4.e-6*t665*t991 + t718*t995 - 1.*t665*t999) + 0.14871*(t702*t991 + 4.e-6*t665*t995 + 4.e-6*t700*t999);
  p_output1[18]=-1.*t1018*t317*t575 + t1021*t575*t85 + t904 + t908 + t912 + t916 + t920 + t925 + t930 + t935;
  p_output1[19]=t1027*t541 + t1032*t667 + t1036*t685 + t1040*t698 - 0.03875*(t1040*t620 + t1036*t665 + 4.e-6*t1032*t700) + 0.14871*(4.e-6*t1036*t665 + 4.e-6*t1040*t700 + t1032*t702) + 0.80321*(-4.e-6*t1032*t665 - 1.*t1040*t665 + t1036*t718) + t1018*t727 + t1021*t731 + t566*t735;
  p_output1[20]=t1021*t1061 + t1064*t541 + t1067*t566 + t1071*t667 + t1075*t685 + t1079*t698 - 0.03875*(t1079*t620 + t1075*t665 + 4.e-6*t1071*t700) + 0.14871*(4.e-6*t1075*t665 + 4.e-6*t1079*t700 + t1071*t702) + 0.80321*(-4.e-6*t1071*t665 - 1.*t1079*t665 + t1075*t718) + t1018*t980;
  p_output1[21]=t1107*t1110 + t1099*t244 + t1115*t667 + t1120*t685 + t1125*t698 - 0.03875*(t1125*t620 + t1120*t665 + 4.e-6*t1115*t700) + 0.14871*(4.e-6*t1120*t665 + 4.e-6*t1125*t700 + t1115*t702) + 0.80321*(-4.e-6*t1115*t665 - 1.*t1125*t665 + t1120*t718) + t1103*t907;
  p_output1[22]=-1.*t1099*t119*t575 + t1149*t667 + t1154*t685 + t1157*t698 - 0.03875*(t1157*t620 + t1154*t665 + 4.e-6*t1149*t700) + 0.14871*(4.e-6*t1154*t665 + 4.e-6*t1157*t700 + t1149*t702) + 0.80321*(-4.e-6*t1149*t665 - 1.*t1157*t665 + t1154*t718) + t1103*t735 + t1110*t739;
  p_output1[23]=t1067*t1103 + t1110*t1179 + t1099*t227*t575 + t1184*t667 + t1188*t685 + t1193*t698 - 0.03875*(t1193*t620 + t1188*t665 + 4.e-6*t1184*t700) + 0.14871*(4.e-6*t1188*t665 + 4.e-6*t1193*t700 + t1184*t702) + 0.80321*(-4.e-6*t1184*t665 - 1.*t1193*t665 + t1188*t718);
  p_output1[24]=t1214*t1217 + t1222*t1225 + t1228*t1231 - 0.03875*(t1228*t620 - 1.*t1214*t665 - 4.e-6*t1222*t665) + 0.14871*(4.e-6*t1228*t620 - 4.e-6*t1214*t665 - 1.6e-11*t1222*t665) + 0.80321*(-1.*t1214*t620 - 4.e-6*t1222*t620 - 1.000000000016*t1228*t665);
  p_output1[25]=t1225*t745 + t1231*t750 + t1217*t755 + 0.80321*(-4.e-6*t620*t745 - 1.000000000016*t665*t750 - 1.*t620*t755) + 0.14871*(-1.6e-11*t665*t745 + 4.e-6*t620*t750 - 4.e-6*t665*t755) - 0.03875*(t620*t750 + t768 + t769);
  p_output1[26]=t1217*t1269 + t1225*t1274 + t1231*t1277 - 0.03875*(t1277*t620 - 1.*t1269*t665 - 4.e-6*t1274*t665) + 0.14871*(4.e-6*t1277*t620 - 4.e-6*t1269*t665 - 1.6e-11*t1274*t665) + 0.80321*(-1.*t1269*t620 - 4.e-6*t1274*t620 - 1.000000000016*t1277*t665);
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jfun.hh"

namespace SymFunction
{

void Jfun_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
