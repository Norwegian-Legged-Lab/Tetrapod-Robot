/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:29:24 GMT+01:00
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
  double t19;
  double t23;
  double t34;
  double t37;
  double t39;
  double t48;
  double t20;
  double t64;
  double t120;
  double t121;
  double t127;
  double t133;
  double t184;
  double t211;
  double t79;
  double t94;
  double t104;
  double t160;
  double t166;
  double t169;
  double t236;
  double t241;
  double t242;
  double t249;
  double t212;
  double t217;
  double t219;
  double t221;
  double t225;
  double t227;
  double t364;
  double t316;
  double t329;
  double t333;
  double t335;
  double t258;
  double t271;
  double t274;
  double t275;
  double t277;
  double t278;
  double t57;
  double t59;
  double t526;
  double t516;
  double t66;
  double t76;
  double t524;
  double t539;
  double t551;
  double t565;
  double t574;
  double t575;
  double t113;
  double t132;
  double t144;
  double t149;
  double t173;
  double t175;
  double t177;
  double t188;
  double t193;
  double t199;
  double t205;
  double t577;
  double t586;
  double t590;
  double t608;
  double t614;
  double t617;
  double t232;
  double t248;
  double t253;
  double t254;
  double t280;
  double t299;
  double t300;
  double t338;
  double t344;
  double t347;
  double t358;
  double t368;
  double t370;
  double t633;
  double t635;
  double t637;
  double t640;
  double t659;
  double t660;
  double t662;
  double t673;
  double t646;
  double t648;
  double t649;
  double t655;
  double t476;
  double t480;
  double t731;
  double t741;
  double t743;
  double t745;
  double t748;
  double t749;
  double t754;
  double t758;
  double t762;
  double t764;
  double t765;
  double t767;
  double t781;
  double t783;
  double t784;
  double t786;
  double t811;
  double t812;
  double t815;
  double t816;
  double t788;
  double t798;
  double t799;
  double t802;
  double t888;
  double t890;
  double t891;
  double t899;
  double t866;
  double t867;
  double t868;
  double t874;
  double t877;
  double t897;
  double t911;
  double t958;
  double t1023;
  double t1028;
  double t1030;
  double t1044;
  double t987;
  double t999;
  double t970;
  double t977;
  double t980;
  double t1008;
  double t1009;
  double t1011;
  double t1062;
  double t948;
  double t1107;
  double t959;
  double t1139;
  double t1037;
  double t1166;
  double t1167;
  double t902;
  double t1080;
  double t1081;
  double t1096;
  double t1110;
  double t1111;
  double t1114;
  double t1119;
  double t1121;
  double t1122;
  double t1223;
  double t1175;
  double t1194;
  double t1195;
  double t1198;
  double t1200;
  double t1209;
  double t1211;
  double t1213;
  double t1243;
  double t1248;
  double t1258;
  double t1262;
  double t1266;
  double t1267;
  double t1268;
  double t1275;
  double t1064;
  double t1280;
  double t1047;
  double t1319;
  double t1152;
  double t1294;
  double t1296;
  double t1143;
  double t887;
  double t895;
  double t906;
  double t909;
  double t912;
  double t925;
  double t926;
  double t869;
  double t880;
  double t939;
  double t940;
  double t944;
  double t947;
  double t949;
  double t951;
  double t964;
  double t966;
  double t967;
  double t985;
  double t986;
  double t993;
  double t996;
  double t1000;
  double t1004;
  double t1007;
  double t1020;
  double t1033;
  double t1048;
  double t1051;
  double t1065;
  double t1066;
  double t1074;
  double t1371;
  double t1373;
  double t1374;
  double t1379;
  double t1384;
  double t1385;
  double t1131;
  double t1136;
  double t1146;
  double t1150;
  double t1153;
  double t1157;
  double t1162;
  double t1216;
  double t1219;
  double t1224;
  double t1231;
  double t1236;
  double t1240;
  double t1242;
  double t1281;
  double t1389;
  double t1397;
  double t1403;
  double t1404;
  double t1297;
  double t1409;
  double t1410;
  double t1415;
  double t1421;
  double t1300;
  double t1301;
  double t1435;
  double t1437;
  double t1438;
  double t1439;
  double t1310;
  double t1311;
  double t1320;
  double t1328;
  double t1345;
  double t1348;
  double t1352;
  double t1356;
  double t1505;
  double t1509;
  double t1511;
  double t1517;
  double t1520;
  double t1524;
  double t1532;
  double t1535;
  double t1538;
  double t1542;
  double t1564;
  double t1565;
  double t1567;
  double t1568;
  double t1576;
  double t1578;
  double t1579;
  double t1582;
  t19 = Cos(var1[4]);
  t23 = Cos(var1[6]);
  t34 = -1.*t23;
  t37 = 1. + t34;
  t39 = 0.15121*t37;
  t48 = Sin(var1[6]);
  t20 = Sin(var1[5]);
  t64 = Cos(var1[5]);
  t120 = Cos(var1[7]);
  t121 = -1.*t120;
  t127 = 1. + t121;
  t133 = Sin(var1[7]);
  t184 = Sin(var1[4]);
  t211 = -1. + t120;
  t79 = -1.*t19*t23*t20;
  t94 = -1.*t19*t64*t48;
  t104 = t79 + t94;
  t160 = t19*t64*t23;
  t166 = -1.*t19*t20*t48;
  t169 = t160 + t166;
  t236 = Cos(var1[8]);
  t241 = -1.*t236;
  t242 = 1. + t241;
  t249 = Sin(var1[8]);
  t212 = 4.e-6*t211*t184;
  t217 = 1.6e-11*t211;
  t219 = 1. + t217;
  t221 = t219*t104;
  t225 = 4.e-6*t169*t133;
  t227 = t212 + t221 + t225;
  t364 = -1. + t236;
  t316 = t120*t184;
  t329 = 4.e-6*t211*t104;
  t333 = t169*t133;
  t335 = t316 + t329 + t333;
  t258 = -1.000000000016*t127;
  t271 = 1. + t258;
  t274 = t271*t169;
  t275 = -1.*t184*t133;
  t277 = -4.e-6*t104*t133;
  t278 = t274 + t275 + t277;
  t57 = -0.15121*t48;
  t59 = t39 + t57;
  t526 = Sin(var1[3]);
  t516 = Cos(var1[3]);
  t66 = 0.15121*t48;
  t76 = t39 + t66;
  t524 = t516*t64;
  t539 = -1.*t526*t184*t20;
  t551 = t524 + t539;
  t565 = t64*t526*t184;
  t574 = t516*t20;
  t575 = t565 + t574;
  t113 = -1.2484e-7*var1[7];
  t132 = -1.5499600000248e-7*t127;
  t144 = 1.124840000016e-6*t133;
  t149 = t113 + t132 + t144;
  t173 = 0.281210000008499*t127;
  t175 = 0.03874900000062*t133;
  t177 = t173 + t175;
  t188 = 4.9936e-13*var1[7];
  t193 = -0.03874900000062*t127;
  t199 = 0.281210000004*t133;
  t205 = t188 + t193 + t199;
  t577 = t23*t551;
  t586 = -1.*t575*t48;
  t590 = t577 + t586;
  t608 = t23*t575;
  t614 = t551*t48;
  t617 = t608 + t614;
  t232 = -1.284e-8*var1[8];
  t248 = -1.5499600000248e-7*t242;
  t253 = 2.012840000032e-6*t249;
  t254 = t232 + t248 + t253;
  t280 = 0.503210000016051*t242;
  t299 = 0.03874900000062*t249;
  t300 = t280 + t299;
  t338 = 5.136e-14*var1[8];
  t344 = -0.03874900000062*t242;
  t347 = 0.503210000008*t249;
  t358 = t338 + t344 + t347;
  t368 = 1.6e-11*t364;
  t370 = 1. + t368;
  t633 = -4.e-6*t19*t211*t526;
  t635 = t219*t590;
  t637 = 4.e-6*t617*t133;
  t640 = t633 + t635 + t637;
  t659 = -1.*t19*t120*t526;
  t660 = 4.e-6*t211*t590;
  t662 = t617*t133;
  t673 = t659 + t660 + t662;
  t646 = t271*t617;
  t648 = t19*t526*t133;
  t649 = -4.e-6*t590*t133;
  t655 = t646 + t648 + t649;
  t476 = -1.000000000016*t242;
  t480 = 1. + t476;
  t731 = t64*t526;
  t741 = t516*t184*t20;
  t743 = t731 + t741;
  t745 = -1.*t516*t64*t184;
  t748 = t526*t20;
  t749 = t745 + t748;
  t754 = t23*t743;
  t758 = -1.*t749*t48;
  t762 = t754 + t758;
  t764 = t23*t749;
  t765 = t743*t48;
  t767 = t764 + t765;
  t781 = 4.e-6*t516*t19*t211;
  t783 = t219*t762;
  t784 = 4.e-6*t767*t133;
  t786 = t781 + t783 + t784;
  t811 = t516*t19*t120;
  t812 = 4.e-6*t211*t762;
  t815 = t767*t133;
  t816 = t811 + t812 + t815;
  t788 = t271*t767;
  t798 = -1.*t516*t19*t133;
  t799 = -4.e-6*t762*t133;
  t802 = t788 + t798 + t799;
  t888 = Cos(var1[13]);
  t890 = -1.*t888;
  t891 = 1. + t890;
  t899 = Sin(var1[13]);
  t866 = Cos(var1[12]);
  t867 = -1.*t866;
  t868 = 1. + t867;
  t874 = Sin(var1[12]);
  t877 = 0.15121*t874;
  t897 = 4.e-6*t891;
  t911 = -2.8e-11*t891;
  t958 = 7.e-6*t891;
  t1023 = Cos(var1[14]);
  t1028 = -1.*t1023;
  t1030 = 1. + t1028;
  t1044 = Sin(var1[14]);
  t987 = -1.*t899;
  t999 = -4.e-6*t899;
  t970 = -1.*t19*t64*t874;
  t977 = -1.*t866*t19*t20;
  t980 = t970 + t977;
  t1008 = t866*t19*t64;
  t1009 = -1.*t19*t874*t20;
  t1011 = t1008 + t1009;
  t1062 = 7.e-6*t1030;
  t948 = -7.e-6*t899;
  t1107 = -7.e-6*t891;
  t959 = 4.e-6*t899;
  t1139 = 4.e-6*t1030;
  t1037 = -2.8e-11*t1030;
  t1166 = -1. + t888;
  t1167 = 4.e-6*t1166;
  t902 = 7.e-6*t899;
  t1080 = 2.8e-11*t891;
  t1081 = t1080 + t987;
  t1096 = t1081*t184;
  t1110 = t1107 + t999;
  t1111 = t1110*t980;
  t1114 = -1.000000000016*t891;
  t1119 = 1. + t1114;
  t1121 = t1119*t1011;
  t1122 = t1096 + t1111 + t1121;
  t1223 = 7.e-6*t1044;
  t1175 = t1167 + t948;
  t1194 = t1175*t184;
  t1195 = -6.5e-11*t891;
  t1198 = 1. + t1195;
  t1200 = t1198*t980;
  t1209 = t1107 + t959;
  t1211 = t1209*t1011;
  t1213 = t1194 + t1200 + t1211;
  t1243 = -1.000000000049*t891;
  t1248 = 1. + t1243;
  t1258 = t1248*t184;
  t1262 = t1167 + t902;
  t1266 = t1262*t980;
  t1267 = t1080 + t899;
  t1268 = t1267*t1011;
  t1275 = t1258 + t1266 + t1268;
  t1064 = -4.e-6*t1044;
  t1280 = 2.8e-11*t1030;
  t1047 = -1.*t1044;
  t1319 = -7.e-6*t1030;
  t1152 = 4.e-6*t1044;
  t1294 = -1. + t1023;
  t1296 = 4.e-6*t1294;
  t1143 = -7.e-6*t1044;
  t887 = 5.856279999999999e-13*var1[13];
  t895 = -0.0387489999948987*t891;
  t906 = t897 + t902;
  t909 = -2.123459e-6*t906;
  t912 = t911 + t899;
  t925 = -0.281209000004*t912;
  t926 = t887 + t895 + t909 + t925;
  t869 = -0.15121*t868;
  t880 = t869 + t877;
  t939 = 0.15121*t868;
  t940 = t939 + t877;
  t944 = -1.4640699999999997e-7*var1[13];
  t947 = -1.38024835e-16*t891;
  t949 = t897 + t948;
  t951 = -0.038748999993*t949;
  t964 = t958 + t959;
  t966 = -0.281209000004*t964;
  t967 = t944 + t947 + t951 + t966;
  t985 = 1.0248489999999998e-12*var1[13];
  t986 = -0.28120900000849935*t891;
  t993 = t911 + t987;
  t996 = -0.038748999993*t993;
  t1000 = t958 + t999;
  t1004 = -2.123459e-6*t1000;
  t1007 = t985 + t986 + t996 + t1004;
  t1020 = 1.8190549999999993e-12*var1[14];
  t1033 = -0.5031490000160505*t1030;
  t1048 = t1037 + t1047;
  t1051 = -0.038922999986*t1048;
  t1065 = t1062 + t1064;
  t1066 = -3.6777349999999994e-6*t1065;
  t1074 = t1020 + t1033 + t1051 + t1066;
  t1371 = -1.*t874*t575;
  t1373 = t866*t551;
  t1374 = t1371 + t1373;
  t1379 = t866*t575;
  t1384 = t874*t551;
  t1385 = t1379 + t1384;
  t1131 = -2.598649999999999e-7*var1[14];
  t1136 = -2.3905277499999995e-16*t1030;
  t1146 = t1139 + t1143;
  t1150 = -0.038922999986*t1146;
  t1153 = t1062 + t1152;
  t1157 = -0.503149000008*t1153;
  t1162 = t1131 + t1136 + t1150 + t1157;
  t1216 = 1.0394599999999997e-12*var1[14];
  t1219 = -0.03892299998790722*t1030;
  t1224 = t1139 + t1223;
  t1231 = -3.6777349999999994e-6*t1224;
  t1236 = t1037 + t1044;
  t1240 = -0.503149000008*t1236;
  t1242 = t1216 + t1219 + t1231 + t1240;
  t1281 = t1280 + t1044;
  t1389 = -1.*t19*t1081*t526;
  t1397 = t1110*t1374;
  t1403 = t1119*t1385;
  t1404 = t1389 + t1397 + t1403;
  t1297 = t1296 + t1223;
  t1409 = -1.*t19*t1175*t526;
  t1410 = t1198*t1374;
  t1415 = t1209*t1385;
  t1421 = t1409 + t1410 + t1415;
  t1300 = -1.000000000049*t1030;
  t1301 = 1. + t1300;
  t1435 = -1.*t1248*t19*t526;
  t1437 = t1262*t1374;
  t1438 = t1267*t1385;
  t1439 = t1435 + t1437 + t1438;
  t1310 = -1.000000000016*t1030;
  t1311 = 1. + t1310;
  t1320 = t1319 + t1064;
  t1328 = t1280 + t1047;
  t1345 = t1319 + t1152;
  t1348 = -6.5e-11*t1030;
  t1352 = 1. + t1348;
  t1356 = t1296 + t1143;
  t1505 = -1.*t874*t749;
  t1509 = t866*t743;
  t1511 = t1505 + t1509;
  t1517 = t866*t749;
  t1520 = t874*t743;
  t1524 = t1517 + t1520;
  t1532 = t516*t19*t1081;
  t1535 = t1110*t1511;
  t1538 = t1119*t1524;
  t1542 = t1532 + t1535 + t1538;
  t1564 = t516*t19*t1175;
  t1565 = t1198*t1511;
  t1567 = t1209*t1524;
  t1568 = t1564 + t1565 + t1567;
  t1576 = t1248*t516*t19;
  t1578 = t1262*t1511;
  t1579 = t1267*t1524;
  t1582 = t1576 + t1578 + t1579;
  p_output1[0]=t104*t149 + t169*t177 + t184*t205 + t227*t254 + t278*t300 + t335*t358 - 0.03875*(t249*t278 + t236*t335 + 4.e-6*t227*t364) + 0.14871*(4.e-6*t249*t278 + 4.e-6*t335*t364 + t227*t370) + 0.80321*(-4.e-6*t227*t249 - 1.*t249*t335 + t278*t480) - 1.*t19*t20*t59 + t19*t64*t76 + var1[0];
  p_output1[1]=-1.*t19*t205*t526 + t551*t59 + t149*t590 + t177*t617 + t254*t640 + t300*t655 + t358*t673 - 0.03875*(4.e-6*t364*t640 + t249*t655 + t236*t673) + 0.80321*(-4.e-6*t249*t640 + t480*t655 - 1.*t249*t673) + 0.14871*(t370*t640 + 4.e-6*t249*t655 + 4.e-6*t364*t673) + t575*t76 + var1[1];
  p_output1[2]=t19*t205*t516 + t59*t743 + t749*t76 + t149*t762 + t177*t767 + t254*t786 + t300*t802 + t358*t816 - 0.03875*(4.e-6*t364*t786 + t249*t802 + t236*t816) + 0.80321*(-4.e-6*t249*t786 + t480*t802 - 1.*t249*t816) + 0.14871*(t370*t786 + 4.e-6*t249*t802 + 4.e-6*t364*t816) + var1[2];
  p_output1[3]=t1007*t1011 + t1074*t1122 + t1162*t1213 + t1242*t1275 - 0.038924*(t1122*t1281 + t1213*t1297 + t1275*t1301) - 0.80315*(t1122*t1311 + t1213*t1320 + t1275*t1328) + 0.148705*(t1122*t1345 + t1213*t1352 + t1275*t1356) + t19*t64*t880 + t184*t926 - 1.*t19*t20*t940 + t967*t980 + var1[0];
  p_output1[4]=t1007*t1385 + t1074*t1404 + t1162*t1421 + t1242*t1439 - 0.038924*(t1281*t1404 + t1297*t1421 + t1301*t1439) - 0.80315*(t1311*t1404 + t1320*t1421 + t1328*t1439) + 0.148705*(t1345*t1404 + t1352*t1421 + t1356*t1439) + t575*t880 - 1.*t19*t526*t926 + t551*t940 + t1374*t967 + var1[1];
  p_output1[5]=t1007*t1524 + t1074*t1542 + t1162*t1568 + t1242*t1582 - 0.038924*(t1281*t1542 + t1297*t1568 + t1301*t1582) - 0.80315*(t1311*t1542 + t1320*t1568 + t1328*t1582) + 0.148705*(t1345*t1542 + t1352*t1568 + t1356*t1582) + t749*t880 + t19*t516*t926 + t743*t940 + t1511*t967 + var1[2];
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

#include "output_boundary_ParallelStance1.hh"

namespace ParallelStance1
{

void output_boundary_ParallelStance1_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
