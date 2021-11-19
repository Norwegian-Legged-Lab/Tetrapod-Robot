/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:30:42 GMT+01:00
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
  double t5;
  double t16;
  double t22;
  double t33;
  double t38;
  double t42;
  double t9;
  double t53;
  double t95;
  double t98;
  double t99;
  double t102;
  double t139;
  double t167;
  double t68;
  double t82;
  double t85;
  double t114;
  double t115;
  double t116;
  double t221;
  double t225;
  double t228;
  double t233;
  double t170;
  double t183;
  double t189;
  double t206;
  double t210;
  double t211;
  double t310;
  double t284;
  double t285;
  double t290;
  double t291;
  double t245;
  double t246;
  double t255;
  double t259;
  double t260;
  double t266;
  double t43;
  double t46;
  double t373;
  double t369;
  double t58;
  double t65;
  double t370;
  double t375;
  double t376;
  double t378;
  double t380;
  double t383;
  double t91;
  double t101;
  double t104;
  double t108;
  double t117;
  double t122;
  double t125;
  double t145;
  double t148;
  double t155;
  double t162;
  double t386;
  double t390;
  double t394;
  double t396;
  double t399;
  double t404;
  double t213;
  double t229;
  double t239;
  double t240;
  double t268;
  double t275;
  double t278;
  double t292;
  double t300;
  double t305;
  double t306;
  double t314;
  double t315;
  double t412;
  double t414;
  double t421;
  double t424;
  double t443;
  double t446;
  double t453;
  double t461;
  double t431;
  double t432;
  double t434;
  double t437;
  double t339;
  double t340;
  double t520;
  double t522;
  double t529;
  double t536;
  double t538;
  double t539;
  double t543;
  double t546;
  double t547;
  double t556;
  double t557;
  double t559;
  double t565;
  double t569;
  double t570;
  double t572;
  double t599;
  double t604;
  double t605;
  double t609;
  double t578;
  double t585;
  double t588;
  double t590;
  double t682;
  double t684;
  double t688;
  double t696;
  double t653;
  double t655;
  double t656;
  double t668;
  double t674;
  double t695;
  double t708;
  double t765;
  double t837;
  double t844;
  double t847;
  double t853;
  double t803;
  double t815;
  double t779;
  double t792;
  double t796;
  double t820;
  double t827;
  double t828;
  double t866;
  double t748;
  double t892;
  double t766;
  double t927;
  double t852;
  double t945;
  double t946;
  double t697;
  double t881;
  double t882;
  double t885;
  double t896;
  double t898;
  double t900;
  double t902;
  double t904;
  double t910;
  double t976;
  double t950;
  double t952;
  double t955;
  double t962;
  double t963;
  double t966;
  double t968;
  double t970;
  double t992;
  double t1000;
  double t1003;
  double t1008;
  double t1012;
  double t1015;
  double t1017;
  double t1022;
  double t868;
  double t1028;
  double t855;
  double t1077;
  double t934;
  double t1043;
  double t1045;
  double t928;
  double t681;
  double t692;
  double t706;
  double t707;
  double t711;
  double t713;
  double t717;
  double t662;
  double t676;
  double t722;
  double t723;
  double t728;
  double t739;
  double t754;
  double t762;
  double t767;
  double t770;
  double t777;
  double t800;
  double t802;
  double t804;
  double t808;
  double t816;
  double t817;
  double t818;
  double t833;
  double t848;
  double t856;
  double t859;
  double t873;
  double t875;
  double t880;
  double t1134;
  double t1136;
  double t1138;
  double t1143;
  double t1144;
  double t1145;
  double t923;
  double t924;
  double t929;
  double t931;
  double t941;
  double t942;
  double t944;
  double t973;
  double t974;
  double t977;
  double t979;
  double t986;
  double t988;
  double t990;
  double t1035;
  double t1148;
  double t1158;
  double t1160;
  double t1162;
  double t1046;
  double t1164;
  double t1165;
  double t1168;
  double t1169;
  double t1049;
  double t1050;
  double t1182;
  double t1187;
  double t1188;
  double t1189;
  double t1068;
  double t1072;
  double t1083;
  double t1086;
  double t1102;
  double t1104;
  double t1106;
  double t1111;
  double t1254;
  double t1257;
  double t1259;
  double t1263;
  double t1265;
  double t1267;
  double t1269;
  double t1271;
  double t1272;
  double t1275;
  double t1277;
  double t1289;
  double t1290;
  double t1292;
  double t1303;
  double t1305;
  double t1307;
  double t1313;
  t5 = Cos(var1[4]);
  t16 = Cos(var1[6]);
  t22 = -1.*t16;
  t33 = 1. + t22;
  t38 = 0.15121*t33;
  t42 = Sin(var1[6]);
  t9 = Sin(var1[5]);
  t53 = Cos(var1[5]);
  t95 = Cos(var1[7]);
  t98 = -1.*t95;
  t99 = 1. + t98;
  t102 = Sin(var1[7]);
  t139 = Sin(var1[4]);
  t167 = -1. + t95;
  t68 = -1.*t5*t16*t9;
  t82 = -1.*t5*t53*t42;
  t85 = t68 + t82;
  t114 = t5*t53*t16;
  t115 = -1.*t5*t9*t42;
  t116 = t114 + t115;
  t221 = Cos(var1[8]);
  t225 = -1.*t221;
  t228 = 1. + t225;
  t233 = Sin(var1[8]);
  t170 = 4.e-6*t167*t139;
  t183 = 1.6e-11*t167;
  t189 = 1. + t183;
  t206 = t189*t85;
  t210 = 4.e-6*t116*t102;
  t211 = t170 + t206 + t210;
  t310 = -1. + t221;
  t284 = t95*t139;
  t285 = 4.e-6*t167*t85;
  t290 = t116*t102;
  t291 = t284 + t285 + t290;
  t245 = -1.000000000016*t99;
  t246 = 1. + t245;
  t255 = t246*t116;
  t259 = -1.*t139*t102;
  t260 = -4.e-6*t85*t102;
  t266 = t255 + t259 + t260;
  t43 = -0.15121*t42;
  t46 = t38 + t43;
  t373 = Sin(var1[3]);
  t369 = Cos(var1[3]);
  t58 = 0.15121*t42;
  t65 = t38 + t58;
  t370 = t369*t53;
  t375 = -1.*t373*t139*t9;
  t376 = t370 + t375;
  t378 = t53*t373*t139;
  t380 = t369*t9;
  t383 = t378 + t380;
  t91 = -1.2484e-7*var1[7];
  t101 = -1.5499600000248e-7*t99;
  t104 = 1.124840000016e-6*t102;
  t108 = t91 + t101 + t104;
  t117 = 0.281210000008499*t99;
  t122 = 0.03874900000062*t102;
  t125 = t117 + t122;
  t145 = 4.9936e-13*var1[7];
  t148 = -0.03874900000062*t99;
  t155 = 0.281210000004*t102;
  t162 = t145 + t148 + t155;
  t386 = t16*t376;
  t390 = -1.*t383*t42;
  t394 = t386 + t390;
  t396 = t16*t383;
  t399 = t376*t42;
  t404 = t396 + t399;
  t213 = -1.284e-8*var1[8];
  t229 = -1.5499600000248e-7*t228;
  t239 = 2.012840000032e-6*t233;
  t240 = t213 + t229 + t239;
  t268 = 0.503210000016051*t228;
  t275 = 0.03874900000062*t233;
  t278 = t268 + t275;
  t292 = 5.136e-14*var1[8];
  t300 = -0.03874900000062*t228;
  t305 = 0.503210000008*t233;
  t306 = t292 + t300 + t305;
  t314 = 1.6e-11*t310;
  t315 = 1. + t314;
  t412 = -4.e-6*t5*t167*t373;
  t414 = t189*t394;
  t421 = 4.e-6*t404*t102;
  t424 = t412 + t414 + t421;
  t443 = -1.*t5*t95*t373;
  t446 = 4.e-6*t167*t394;
  t453 = t404*t102;
  t461 = t443 + t446 + t453;
  t431 = t246*t404;
  t432 = t5*t373*t102;
  t434 = -4.e-6*t394*t102;
  t437 = t431 + t432 + t434;
  t339 = -1.000000000016*t228;
  t340 = 1. + t339;
  t520 = t53*t373;
  t522 = t369*t139*t9;
  t529 = t520 + t522;
  t536 = -1.*t369*t53*t139;
  t538 = t373*t9;
  t539 = t536 + t538;
  t543 = t16*t529;
  t546 = -1.*t539*t42;
  t547 = t543 + t546;
  t556 = t16*t539;
  t557 = t529*t42;
  t559 = t556 + t557;
  t565 = 4.e-6*t369*t5*t167;
  t569 = t189*t547;
  t570 = 4.e-6*t559*t102;
  t572 = t565 + t569 + t570;
  t599 = t369*t5*t95;
  t604 = 4.e-6*t167*t547;
  t605 = t559*t102;
  t609 = t599 + t604 + t605;
  t578 = t246*t559;
  t585 = -1.*t369*t5*t102;
  t588 = -4.e-6*t547*t102;
  t590 = t578 + t585 + t588;
  t682 = Cos(var1[13]);
  t684 = -1.*t682;
  t688 = 1. + t684;
  t696 = Sin(var1[13]);
  t653 = Cos(var1[12]);
  t655 = -1.*t653;
  t656 = 1. + t655;
  t668 = Sin(var1[12]);
  t674 = 0.15121*t668;
  t695 = 4.e-6*t688;
  t708 = -2.8e-11*t688;
  t765 = 7.e-6*t688;
  t837 = Cos(var1[14]);
  t844 = -1.*t837;
  t847 = 1. + t844;
  t853 = Sin(var1[14]);
  t803 = -1.*t696;
  t815 = -4.e-6*t696;
  t779 = -1.*t5*t53*t668;
  t792 = -1.*t653*t5*t9;
  t796 = t779 + t792;
  t820 = t653*t5*t53;
  t827 = -1.*t5*t668*t9;
  t828 = t820 + t827;
  t866 = 7.e-6*t847;
  t748 = -7.e-6*t696;
  t892 = -7.e-6*t688;
  t766 = 4.e-6*t696;
  t927 = 4.e-6*t847;
  t852 = -2.8e-11*t847;
  t945 = -1. + t682;
  t946 = 4.e-6*t945;
  t697 = 7.e-6*t696;
  t881 = 2.8e-11*t688;
  t882 = t881 + t803;
  t885 = t882*t139;
  t896 = t892 + t815;
  t898 = t896*t796;
  t900 = -1.000000000016*t688;
  t902 = 1. + t900;
  t904 = t902*t828;
  t910 = t885 + t898 + t904;
  t976 = 7.e-6*t853;
  t950 = t946 + t748;
  t952 = t950*t139;
  t955 = -6.5e-11*t688;
  t962 = 1. + t955;
  t963 = t962*t796;
  t966 = t892 + t766;
  t968 = t966*t828;
  t970 = t952 + t963 + t968;
  t992 = -1.000000000049*t688;
  t1000 = 1. + t992;
  t1003 = t1000*t139;
  t1008 = t946 + t697;
  t1012 = t1008*t796;
  t1015 = t881 + t696;
  t1017 = t1015*t828;
  t1022 = t1003 + t1012 + t1017;
  t868 = -4.e-6*t853;
  t1028 = 2.8e-11*t847;
  t855 = -1.*t853;
  t1077 = -7.e-6*t847;
  t934 = 4.e-6*t853;
  t1043 = -1. + t837;
  t1045 = 4.e-6*t1043;
  t928 = -7.e-6*t853;
  t681 = 5.856279999999999e-13*var1[13];
  t692 = -0.0387489999948987*t688;
  t706 = t695 + t697;
  t707 = -2.123459e-6*t706;
  t711 = t708 + t696;
  t713 = -0.281209000004*t711;
  t717 = t681 + t692 + t707 + t713;
  t662 = -0.15121*t656;
  t676 = t662 + t674;
  t722 = 0.15121*t656;
  t723 = t722 + t674;
  t728 = -1.4640699999999997e-7*var1[13];
  t739 = -1.38024835e-16*t688;
  t754 = t695 + t748;
  t762 = -0.038748999993*t754;
  t767 = t765 + t766;
  t770 = -0.281209000004*t767;
  t777 = t728 + t739 + t762 + t770;
  t800 = 1.0248489999999998e-12*var1[13];
  t802 = -0.28120900000849935*t688;
  t804 = t708 + t803;
  t808 = -0.038748999993*t804;
  t816 = t765 + t815;
  t817 = -2.123459e-6*t816;
  t818 = t800 + t802 + t808 + t817;
  t833 = 1.8190549999999993e-12*var1[14];
  t848 = -0.5031490000160505*t847;
  t856 = t852 + t855;
  t859 = -0.038922999986*t856;
  t873 = t866 + t868;
  t875 = -3.6777349999999994e-6*t873;
  t880 = t833 + t848 + t859 + t875;
  t1134 = -1.*t668*t383;
  t1136 = t653*t376;
  t1138 = t1134 + t1136;
  t1143 = t653*t383;
  t1144 = t668*t376;
  t1145 = t1143 + t1144;
  t923 = -2.598649999999999e-7*var1[14];
  t924 = -2.3905277499999995e-16*t847;
  t929 = t927 + t928;
  t931 = -0.038922999986*t929;
  t941 = t866 + t934;
  t942 = -0.503149000008*t941;
  t944 = t923 + t924 + t931 + t942;
  t973 = 1.0394599999999997e-12*var1[14];
  t974 = -0.03892299998790722*t847;
  t977 = t927 + t976;
  t979 = -3.6777349999999994e-6*t977;
  t986 = t852 + t853;
  t988 = -0.503149000008*t986;
  t990 = t973 + t974 + t979 + t988;
  t1035 = t1028 + t853;
  t1148 = -1.*t5*t882*t373;
  t1158 = t896*t1138;
  t1160 = t902*t1145;
  t1162 = t1148 + t1158 + t1160;
  t1046 = t1045 + t976;
  t1164 = -1.*t5*t950*t373;
  t1165 = t962*t1138;
  t1168 = t966*t1145;
  t1169 = t1164 + t1165 + t1168;
  t1049 = -1.000000000049*t847;
  t1050 = 1. + t1049;
  t1182 = -1.*t1000*t5*t373;
  t1187 = t1008*t1138;
  t1188 = t1015*t1145;
  t1189 = t1182 + t1187 + t1188;
  t1068 = -1.000000000016*t847;
  t1072 = 1. + t1068;
  t1083 = t1077 + t868;
  t1086 = t1028 + t855;
  t1102 = t1077 + t934;
  t1104 = -6.5e-11*t847;
  t1106 = 1. + t1104;
  t1111 = t1045 + t928;
  t1254 = -1.*t668*t539;
  t1257 = t653*t529;
  t1259 = t1254 + t1257;
  t1263 = t653*t539;
  t1265 = t668*t529;
  t1267 = t1263 + t1265;
  t1269 = t369*t5*t882;
  t1271 = t896*t1259;
  t1272 = t902*t1267;
  t1275 = t1269 + t1271 + t1272;
  t1277 = t369*t5*t950;
  t1289 = t962*t1259;
  t1290 = t966*t1267;
  t1292 = t1277 + t1289 + t1290;
  t1303 = t1000*t369*t5;
  t1305 = t1008*t1259;
  t1307 = t1015*t1267;
  t1313 = t1303 + t1305 + t1307;
  p_output1[0]=t116*t125 + t139*t162 + t211*t240 + t266*t278 + t291*t306 - 0.03875*(t233*t266 + t221*t291 + 4.e-6*t211*t310) + 0.14871*(4.e-6*t233*t266 + 4.e-6*t291*t310 + t211*t315) + 0.80321*(-4.e-6*t211*t233 - 1.*t233*t291 + t266*t340) + t5*t53*t65 + t108*t85 - 1.*t46*t5*t9 + var1[0];
  p_output1[1]=t108*t394 + t125*t404 + t240*t424 + t278*t437 + t376*t46 + t306*t461 - 0.03875*(4.e-6*t310*t424 + t233*t437 + t221*t461) + 0.80321*(-4.e-6*t233*t424 + t340*t437 - 1.*t233*t461) + 0.14871*(t315*t424 + 4.e-6*t233*t437 + 4.e-6*t310*t461) - 1.*t162*t373*t5 + t383*t65 + var1[1];
  p_output1[2]=t162*t369*t5 + t46*t529 + t108*t547 + t125*t559 + t240*t572 + t278*t590 + t306*t609 - 0.03875*(4.e-6*t310*t572 + t233*t590 + t221*t609) + 0.80321*(-4.e-6*t233*t572 + t340*t590 - 1.*t233*t609) + 0.14871*(t315*t572 + 4.e-6*t233*t590 + 4.e-6*t310*t609) + t539*t65 + var1[2];
  p_output1[3]=t5*t53*t676 + t139*t717 + t777*t796 + t818*t828 - 1.*t5*t723*t9 + t880*t910 + t944*t970 - 0.038924*(t1022*t1050 + t1035*t910 + t1046*t970) - 0.80315*(t1022*t1086 + t1072*t910 + t1083*t970) + 0.148705*(t1022*t1111 + t1102*t910 + t1106*t970) + t1022*t990 + var1[0];
  p_output1[4]=-0.038924*(t1035*t1162 + t1046*t1169 + t1050*t1189) - 0.80315*(t1072*t1162 + t1083*t1169 + t1086*t1189) + 0.148705*(t1102*t1162 + t1106*t1169 + t1111*t1189) + t383*t676 - 1.*t373*t5*t717 + t376*t723 + t1138*t777 + t1145*t818 + t1162*t880 + t1169*t944 + t1189*t990 + var1[1];
  p_output1[5]=-0.038924*(t1035*t1275 + t1046*t1292 + t1050*t1313) - 0.80315*(t1072*t1275 + t1083*t1292 + t1086*t1313) + 0.148705*(t1102*t1275 + t1106*t1292 + t1111*t1313) + t539*t676 + t369*t5*t717 + t529*t723 + t1259*t777 + t1267*t818 + t1275*t880 + t1292*t944 + t1313*t990 + var1[2];
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

#include "output_boundary_ParallelStance.hh"

namespace ParallelStance
{

void output_boundary_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
