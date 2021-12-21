/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 20:16:40 GMT+01:00
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
  double t17;
  double t20;
  double t42;
  double t49;
  double t56;
  double t16;
  double t65;
  double t91;
  double t92;
  double t98;
  double t102;
  double t151;
  double t171;
  double t76;
  double t80;
  double t84;
  double t118;
  double t121;
  double t135;
  double t193;
  double t197;
  double t201;
  double t205;
  double t178;
  double t181;
  double t184;
  double t185;
  double t190;
  double t191;
  double t286;
  double t251;
  double t253;
  double t266;
  double t269;
  double t214;
  double t215;
  double t228;
  double t233;
  double t234;
  double t237;
  double t57;
  double t63;
  double t382;
  double t373;
  double t66;
  double t68;
  double t381;
  double t383;
  double t389;
  double t393;
  double t399;
  double t402;
  double t85;
  double t99;
  double t105;
  double t107;
  double t138;
  double t143;
  double t144;
  double t153;
  double t154;
  double t158;
  double t160;
  double t406;
  double t408;
  double t410;
  double t414;
  double t420;
  double t423;
  double t192;
  double t203;
  double t208;
  double t211;
  double t238;
  double t239;
  double t241;
  double t276;
  double t277;
  double t278;
  double t280;
  double t293;
  double t300;
  double t434;
  double t435;
  double t437;
  double t440;
  double t456;
  double t462;
  double t463;
  double t467;
  double t445;
  double t446;
  double t452;
  double t453;
  double t350;
  double t354;
  double t511;
  double t517;
  double t519;
  double t529;
  double t531;
  double t533;
  double t548;
  double t549;
  double t550;
  double t555;
  double t558;
  double t564;
  double t575;
  double t578;
  double t579;
  double t582;
  double t602;
  double t603;
  double t604;
  double t608;
  double t589;
  double t592;
  double t595;
  double t596;
  double t721;
  double t724;
  double t726;
  double t744;
  double t680;
  double t683;
  double t686;
  double t693;
  double t696;
  double t766;
  double t771;
  double t794;
  double t741;
  double t848;
  double t849;
  double t858;
  double t868;
  double t819;
  double t808;
  double t809;
  double t813;
  double t837;
  double t839;
  double t842;
  double t877;
  double t774;
  double t888;
  double t756;
  double t865;
  double t934;
  double t937;
  double t968;
  double t802;
  double t899;
  double t795;
  double t998;
  double t889;
  double t897;
  double t901;
  double t903;
  double t906;
  double t907;
  double t910;
  double t914;
  double t1009;
  double t955;
  double t959;
  double t961;
  double t973;
  double t977;
  double t979;
  double t984;
  double t991;
  double t1016;
  double t1029;
  double t1030;
  double t1033;
  double t1036;
  double t1045;
  double t1046;
  double t1049;
  double t919;
  double t1065;
  double t939;
  double t1103;
  double t1058;
  double t869;
  double t720;
  double t727;
  double t762;
  double t764;
  double t776;
  double t777;
  double t779;
  double t708;
  double t714;
  double t783;
  double t784;
  double t788;
  double t791;
  double t796;
  double t798;
  double t803;
  double t804;
  double t805;
  double t816;
  double t818;
  double t820;
  double t823;
  double t826;
  double t827;
  double t830;
  double t846;
  double t863;
  double t874;
  double t875;
  double t879;
  double t883;
  double t885;
  double t1197;
  double t1199;
  double t1204;
  double t1213;
  double t1215;
  double t1218;
  double t916;
  double t917;
  double t923;
  double t932;
  double t946;
  double t947;
  double t950;
  double t995;
  double t996;
  double t1001;
  double t1004;
  double t1010;
  double t1011;
  double t1015;
  double t1061;
  double t1224;
  double t1228;
  double t1230;
  double t1231;
  double t1069;
  double t1235;
  double t1236;
  double t1241;
  double t1242;
  double t1077;
  double t1078;
  double t1244;
  double t1246;
  double t1248;
  double t1264;
  double t1105;
  double t1117;
  double t1118;
  double t1128;
  double t1140;
  double t1141;
  double t1150;
  double t1156;
  double t1321;
  double t1326;
  double t1329;
  double t1339;
  double t1340;
  double t1342;
  double t1345;
  double t1346;
  double t1348;
  double t1351;
  double t1360;
  double t1365;
  double t1368;
  double t1372;
  double t1381;
  double t1382;
  double t1387;
  double t1398;
  t5 = Cos(var1[4]);
  t17 = Cos(var1[6]);
  t20 = -1.*t17;
  t42 = 1. + t20;
  t49 = 0.15121*t42;
  t56 = Sin(var1[6]);
  t16 = Sin(var1[5]);
  t65 = Cos(var1[5]);
  t91 = Cos(var1[7]);
  t92 = -1.*t91;
  t98 = 1. + t92;
  t102 = Sin(var1[7]);
  t151 = Sin(var1[4]);
  t171 = -1. + t91;
  t76 = -1.*t5*t17*t16;
  t80 = -1.*t5*t65*t56;
  t84 = t76 + t80;
  t118 = t5*t65*t17;
  t121 = -1.*t5*t16*t56;
  t135 = t118 + t121;
  t193 = Cos(var1[8]);
  t197 = -1.*t193;
  t201 = 1. + t197;
  t205 = Sin(var1[8]);
  t178 = 4.e-6*t171*t151;
  t181 = 1.6e-11*t171;
  t184 = 1. + t181;
  t185 = t184*t84;
  t190 = 4.e-6*t135*t102;
  t191 = t178 + t185 + t190;
  t286 = -1. + t193;
  t251 = t91*t151;
  t253 = 4.e-6*t171*t84;
  t266 = t135*t102;
  t269 = t251 + t253 + t266;
  t214 = -1.000000000016*t98;
  t215 = 1. + t214;
  t228 = t215*t135;
  t233 = -1.*t151*t102;
  t234 = -4.e-6*t84*t102;
  t237 = t228 + t233 + t234;
  t57 = -0.15121*t56;
  t63 = t49 + t57;
  t382 = Sin(var1[3]);
  t373 = Cos(var1[3]);
  t66 = 0.15121*t56;
  t68 = t49 + t66;
  t381 = t373*t65;
  t383 = -1.*t382*t151*t16;
  t389 = t381 + t383;
  t393 = t65*t382*t151;
  t399 = t373*t16;
  t402 = t393 + t399;
  t85 = -1.2484e-7*var1[7];
  t99 = -1.5499600000248e-7*t98;
  t105 = 1.124840000016e-6*t102;
  t107 = t85 + t99 + t105;
  t138 = 0.281210000008499*t98;
  t143 = 0.03874900000062*t102;
  t144 = t138 + t143;
  t153 = 4.9936e-13*var1[7];
  t154 = -0.03874900000062*t98;
  t158 = 0.281210000004*t102;
  t160 = t153 + t154 + t158;
  t406 = t17*t389;
  t408 = -1.*t402*t56;
  t410 = t406 + t408;
  t414 = t17*t402;
  t420 = t389*t56;
  t423 = t414 + t420;
  t192 = -1.284e-8*var1[8];
  t203 = -1.5499600000248e-7*t201;
  t208 = 2.012840000032e-6*t205;
  t211 = t192 + t203 + t208;
  t238 = 0.503210000016051*t201;
  t239 = 0.03874900000062*t205;
  t241 = t238 + t239;
  t276 = 5.136e-14*var1[8];
  t277 = -0.03874900000062*t201;
  t278 = 0.503210000008*t205;
  t280 = t276 + t277 + t278;
  t293 = 1.6e-11*t286;
  t300 = 1. + t293;
  t434 = -4.e-6*t5*t171*t382;
  t435 = t184*t410;
  t437 = 4.e-6*t423*t102;
  t440 = t434 + t435 + t437;
  t456 = -1.*t5*t91*t382;
  t462 = 4.e-6*t171*t410;
  t463 = t423*t102;
  t467 = t456 + t462 + t463;
  t445 = t215*t423;
  t446 = t5*t382*t102;
  t452 = -4.e-6*t410*t102;
  t453 = t445 + t446 + t452;
  t350 = -1.000000000016*t201;
  t354 = 1. + t350;
  t511 = t65*t382;
  t517 = t373*t151*t16;
  t519 = t511 + t517;
  t529 = -1.*t373*t65*t151;
  t531 = t382*t16;
  t533 = t529 + t531;
  t548 = t17*t519;
  t549 = -1.*t533*t56;
  t550 = t548 + t549;
  t555 = t17*t533;
  t558 = t519*t56;
  t564 = t555 + t558;
  t575 = 4.e-6*t373*t5*t171;
  t578 = t184*t550;
  t579 = 4.e-6*t564*t102;
  t582 = t575 + t578 + t579;
  t602 = t373*t5*t91;
  t603 = 4.e-6*t171*t550;
  t604 = t564*t102;
  t608 = t602 + t603 + t604;
  t589 = t215*t564;
  t592 = -1.*t373*t5*t102;
  t595 = -4.e-6*t550*t102;
  t596 = t589 + t592 + t595;
  t721 = Cos(var1[16]);
  t724 = -1.*t721;
  t726 = 1. + t724;
  t744 = Sin(var1[16]);
  t680 = Cos(var1[15]);
  t683 = -1.*t680;
  t686 = 1. + t683;
  t693 = -0.15121*t686;
  t696 = Sin(var1[15]);
  t766 = -1. + t721;
  t771 = 4.e-6*t766;
  t794 = 7.e-6*t726;
  t741 = 2.8e-11*t726;
  t848 = Cos(var1[17]);
  t849 = -1.*t848;
  t858 = 1. + t849;
  t868 = Sin(var1[17]);
  t819 = -4.e-6*t744;
  t808 = -1.*t5*t65*t696;
  t809 = -1.*t680*t5*t16;
  t813 = t808 + t809;
  t837 = t680*t5*t65;
  t839 = -1.*t5*t696*t16;
  t842 = t837 + t839;
  t877 = 2.8e-11*t858;
  t774 = -7.e-6*t744;
  t888 = -2.8e-11*t726;
  t756 = -1.*t744;
  t865 = 7.e-6*t858;
  t934 = -1. + t848;
  t937 = 4.e-6*t934;
  t968 = 4.e-6*t726;
  t802 = 7.e-6*t744;
  t899 = -7.e-6*t726;
  t795 = 4.e-6*t744;
  t998 = 4.e-6*t868;
  t889 = t888 + t744;
  t897 = t889*t151;
  t901 = t899 + t819;
  t903 = t901*t813;
  t906 = -1.000000000016*t726;
  t907 = 1. + t906;
  t910 = t907*t842;
  t914 = t897 + t903 + t910;
  t1009 = 7.e-6*t868;
  t955 = -1.000000000049*t726;
  t959 = 1. + t955;
  t961 = t959*t151;
  t973 = t968 + t774;
  t977 = t973*t813;
  t979 = t888 + t756;
  t984 = t979*t842;
  t991 = t961 + t977 + t984;
  t1016 = t968 + t802;
  t1029 = t1016*t151;
  t1030 = -6.5e-11*t726;
  t1033 = 1. + t1030;
  t1036 = t1033*t813;
  t1045 = t899 + t795;
  t1046 = t1045*t842;
  t1049 = t1029 + t1036 + t1046;
  t919 = -1.*t868;
  t1065 = 4.e-6*t858;
  t939 = -7.e-6*t868;
  t1103 = -2.8e-11*t858;
  t1058 = -7.e-6*t858;
  t869 = -4.e-6*t868;
  t720 = 1.5843479999999999e-12*var1[16];
  t727 = -0.03874900000889869*t726;
  t762 = t741 + t756;
  t764 = -0.281211000004*t762;
  t776 = t771 + t774;
  t777 = -1.8134809999999998e-6*t776;
  t779 = t720 + t727 + t764 + t777;
  t708 = -0.15121*t696;
  t714 = t693 + t708;
  t783 = 0.15121*t696;
  t784 = t693 + t783;
  t788 = 3.9608699999999997e-7*var1[16];
  t791 = -1.1787626499999999e-16*t726;
  t796 = t794 + t795;
  t798 = -0.281211000004*t796;
  t803 = t771 + t802;
  t804 = -0.038749000006999997*t803;
  t805 = t788 + t791 + t798 + t804;
  t816 = -2.7726089999999997e-12*var1[16];
  t818 = -0.2812110000084994*t726;
  t820 = t794 + t819;
  t823 = -1.8134809999999998e-6*t820;
  t826 = t741 + t744;
  t827 = -0.038749000006999997*t826;
  t830 = t816 + t818 + t823 + t827;
  t846 = -1.9784030000000015e-12*var1[17];
  t863 = -0.5031510000160505*t858;
  t874 = t865 + t869;
  t875 = -3.367757e-6*t874;
  t879 = t877 + t868;
  t883 = -0.038575000014*t879;
  t885 = t846 + t863 + t875 + t883;
  t1197 = -1.*t696*t402;
  t1199 = t680*t389;
  t1204 = t1197 + t1199;
  t1213 = t680*t402;
  t1215 = t696*t389;
  t1218 = t1213 + t1215;
  t916 = 1.1305160000000008e-12*var1[17];
  t917 = -0.03857500001589017*t858;
  t923 = t877 + t919;
  t932 = -0.5031510000080001*t923;
  t946 = t937 + t939;
  t947 = -3.367757e-6*t946;
  t950 = t916 + t917 + t932 + t947;
  t995 = 2.826290000000002e-7*var1[17];
  t996 = -2.18904205e-16*t858;
  t1001 = t865 + t998;
  t1004 = -0.5031510000080001*t1001;
  t1010 = t937 + t1009;
  t1011 = -0.038575000014*t1010;
  t1015 = t995 + t996 + t1004 + t1011;
  t1061 = t1058 + t998;
  t1224 = -1.*t5*t889*t382;
  t1228 = t901*t1204;
  t1230 = t907*t1218;
  t1231 = t1224 + t1228 + t1230;
  t1069 = t1065 + t1009;
  t1235 = -1.*t959*t5*t382;
  t1236 = t973*t1204;
  t1241 = t979*t1218;
  t1242 = t1235 + t1236 + t1241;
  t1077 = -6.5e-11*t858;
  t1078 = 1. + t1077;
  t1244 = -1.*t5*t1016*t382;
  t1246 = t1033*t1204;
  t1248 = t1045*t1218;
  t1264 = t1244 + t1246 + t1248;
  t1105 = t1103 + t919;
  t1117 = -1.000000000049*t858;
  t1118 = 1. + t1117;
  t1128 = t1065 + t939;
  t1140 = -1.000000000016*t858;
  t1141 = 1. + t1140;
  t1150 = t1103 + t868;
  t1156 = t1058 + t869;
  t1321 = -1.*t696*t533;
  t1326 = t680*t519;
  t1329 = t1321 + t1326;
  t1339 = t680*t533;
  t1340 = t696*t519;
  t1342 = t1339 + t1340;
  t1345 = t373*t5*t889;
  t1346 = t901*t1329;
  t1348 = t907*t1342;
  t1351 = t1345 + t1346 + t1348;
  t1360 = t959*t373*t5;
  t1365 = t973*t1329;
  t1368 = t979*t1342;
  t1372 = t1360 + t1365 + t1368;
  t1381 = t373*t5*t1016;
  t1382 = t1033*t1329;
  t1387 = t1045*t1342;
  t1398 = t1381 + t1382 + t1387;
  p_output1[0]=t135*t144 + t151*t160 + t191*t211 + t237*t241 + t269*t280 - 0.03875*(t205*t237 + t193*t269 + 4.e-6*t191*t286) + 0.14871*(4.e-6*t205*t237 + 4.e-6*t269*t286 + t191*t300) + 0.80321*(-4.e-6*t191*t205 - 1.*t205*t269 + t237*t354) - 1.*t16*t5*t63 + t5*t65*t68 + t107*t84 + var1[0];
  p_output1[1]=t107*t410 + t144*t423 + t211*t440 + t241*t453 + t280*t467 - 0.03875*(4.e-6*t286*t440 + t205*t453 + t193*t467) + 0.80321*(-4.e-6*t205*t440 + t354*t453 - 1.*t205*t467) + 0.14871*(t300*t440 + 4.e-6*t205*t453 + 4.e-6*t286*t467) - 1.*t160*t382*t5 + t389*t63 + t402*t68 + var1[1];
  p_output1[2]=t160*t373*t5 + t107*t550 + t144*t564 + t211*t582 + t241*t596 + t280*t608 - 0.03875*(4.e-6*t286*t582 + t205*t596 + t193*t608) + 0.80321*(-4.e-6*t205*t582 + t354*t596 - 1.*t205*t608) + 0.14871*(t300*t582 + 4.e-6*t205*t596 + 4.e-6*t286*t608) + t519*t63 + t533*t68 + var1[2];
  p_output1[3]=t1015*t1049 + t5*t65*t714 + t151*t779 - 1.*t16*t5*t784 + t805*t813 + t830*t842 + t885*t914 + t950*t991 - 0.148715*(t1049*t1078 + t1061*t914 + t1069*t991) - 0.038576*(t1049*t1128 + t1105*t914 + t1118*t991) - 0.80315*(t1049*t1156 + t1141*t914 + t1150*t991) + var1[0];
  p_output1[4]=t1015*t1264 - 0.148715*(t1061*t1231 + t1069*t1242 + t1078*t1264) - 0.038576*(t1105*t1231 + t1118*t1242 + t1128*t1264) - 0.80315*(t1141*t1231 + t1150*t1242 + t1156*t1264) + t402*t714 - 1.*t382*t5*t779 + t389*t784 + t1204*t805 + t1218*t830 + t1231*t885 + t1242*t950 + var1[1];
  p_output1[5]=t1015*t1398 - 0.148715*(t1061*t1351 + t1069*t1372 + t1078*t1398) - 0.038576*(t1105*t1351 + t1118*t1372 + t1128*t1398) - 0.80315*(t1141*t1351 + t1150*t1372 + t1156*t1398) + t533*t714 + t373*t5*t779 + t519*t784 + t1329*t805 + t1342*t830 + t1351*t885 + t1372*t950 + var1[2];
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

#include "output_boundary_TrotStance1.hh"

namespace TrotStance1
{

void output_boundary_TrotStance1_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
