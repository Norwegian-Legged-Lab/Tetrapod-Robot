/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 14:37:00 GMT+02:00
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
  double t3919;
  double t6052;
  double t5037;
  double t6894;
  double t8227;
  double t6872;
  double t8273;
  double t5903;
  double t8754;
  double t9129;
  double t9241;
  double t6057;
  double t6399;
  double t10396;
  double t10397;
  double t10398;
  double t10420;
  double t10596;
  double t10653;
  double t10742;
  double t10795;
  double t10800;
  double t10826;
  double t10860;
  double t10871;
  double t10883;
  double t10930;
  double t10931;
  double t10933;
  double t10943;
  double t10948;
  double t10953;
  double t10401;
  double t10407;
  double t10408;
  double t7342;
  double t8344;
  double t8563;
  double t9248;
  double t9257;
  double t9270;
  double t10972;
  double t10974;
  double t10975;
  double t6049;
  double t6109;
  double t6150;
  double t10979;
  double t10984;
  double t10988;
  double t11410;
  double t11376;
  double t8753;
  double t9679;
  double t9688;
  double t10389;
  double t10410;
  double t10414;
  double t11823;
  double t11826;
  double t11830;
  double t11835;
  double t11874;
  double t11875;
  double t11878;
  double t11879;
  double t11888;
  double t11889;
  double t11901;
  double t11904;
  double t11908;
  double t10958;
  double t10960;
  double t10961;
  double t11519;
  double t11522;
  double t11574;
  double t11471;
  double t11474;
  double t11476;
  double t11158;
  double t11159;
  double t11335;
  double t12149;
  double t12154;
  double t12163;
  double t11411;
  double t11414;
  double t11447;
  double t12173;
  double t12175;
  double t12193;
  double t12244;
  double t12258;
  double t12261;
  double t11723;
  double t11730;
  double t11739;
  double t11777;
  double t11790;
  double t11796;
  double t12398;
  double t12400;
  double t12401;
  double t12409;
  double t12422;
  double t12428;
  double t12441;
  double t12462;
  double t12464;
  double t12467;
  double t12507;
  double t12580;
  double t12624;
  double t11911;
  double t11917;
  double t11923;
  double t11937;
  double t11942;
  double t12034;
  double t12202;
  double t12206;
  double t12209;
  double t12220;
  double t12232;
  double t12233;
  double t12703;
  double t12705;
  double t12706;
  double t12714;
  double t12715;
  double t12719;
  double t12743;
  double t12746;
  double t12747;
  double t12750;
  double t12751;
  double t12768;
  double t12770;
  double t12771;
  double t12772;
  double t12773;
  double t12774;
  double t12776;
  double t12777;
  double t12778;
  double t12741;
  double t12752;
  double t12760;
  double t12761;
  double t12789;
  double t12795;
  double t12860;
  double t12872;
  double t12873;
  double t12874;
  double t12881;
  double t12885;
  double t12893;
  double t12906;
  double t12907;
  double t12908;
  double t12767;
  double t12901;
  double t12903;
  double t12938;
  double t12941;
  double t12942;
  double t12913;
  double t12930;
  double t12935;
  double t12936;
  double t12937;
  double t12943;
  double t12944;
  double t13248;
  double t13250;
  double t13254;
  double t12956;
  double t12957;
  double t12958;
  double t12959;
  double t12969;
  double t12970;
  double t12973;
  double t12975;
  double t13247;
  double t13260;
  double t12993;
  double t13015;
  double t13026;
  double t13027;
  double t13141;
  double t13145;
  double t13171;
  double t13174;
  double t13198;
  double t13199;
  double t13216;
  double t13217;
  double t13239;
  double t13264;
  double t13741;
  double t13753;
  double t13763;
  double t13769;
  double t13787;
  double t13789;
  double t13800;
  double t13801;
  double t13269;
  double t13270;
  double t13301;
  double t13820;
  double t13838;
  double t13852;
  double t13364;
  double t13372;
  double t13389;
  double t13450;
  double t13460;
  double t13463;
  double t13496;
  double t13509;
  double t13519;
  double t13525;
  double t13528;
  double t13550;
  double t13574;
  double t13581;
  double t13595;
  double t13638;
  double t13642;
  double t13668;
  double t13671;
  double t15298;
  double t15299;
  double t15310;
  double t15314;
  double t15327;
  double t15349;
  double t15369;
  double t15371;
  double t15381;
  double t10940;
  double t10964;
  double t10965;
  double t15318;
  double t15323;
  double t15325;
  double t15358;
  double t15385;
  double t15390;
  double t15392;
  double t15393;
  double t15398;
  double t15574;
  double t15575;
  double t15586;
  double t15592;
  double t15594;
  double t15609;
  double t15613;
  double t15614;
  double t15576;
  double t15578;
  double t15579;
  double t15595;
  double t15615;
  double t15619;
  double t15623;
  double t15624;
  double t15627;
  double t11140;
  double t11351;
  double t11353;
  double t13268;
  double t13302;
  double t13462;
  double t13510;
  double t13553;
  double t13596;
  double t15728;
  double t15729;
  double t15731;
  double t13858;
  double t15734;
  double t13899;
  double t15740;
  double t15744;
  double t15746;
  double t15747;
  double t15748;
  double t15752;
  double t15753;
  double t15754;
  double t14985;
  double t15756;
  double t15071;
  double t15760;
  double t15766;
  double t15767;
  double t15768;
  double t15770;
  double t15147;
  double t15776;
  double t15779;
  double t15781;
  double t15782;
  double t15783;
  double t15249;
  double t15785;
  double t15790;
  double t15791;
  double t15792;
  double t15793;
  double t15326;
  double t15405;
  double t15415;
  double t15467;
  double t15471;
  double t15486;
  double t15519;
  double t15553;
  double t15584;
  double t15637;
  double t15646;
  double t15665;
  double t15666;
  double t15692;
  double t15700;
  double t15702;
  double t15908;
  double t15909;
  double t16049;
  double t16056;
  double t15916;
  double t16041;
  double t16042;
  double t16043;
  double t16045;
  double t16046;
  double t16047;
  double t16091;
  double t16092;
  double t16093;
  double t15950;
  double t16102;
  double t16103;
  double t16104;
  double t15956;
  double t15957;
  double t16135;
  double t16136;
  double t16137;
  double t16139;
  double t16140;
  double t16141;
  double t16147;
  double t16148;
  double t16178;
  double t16179;
  t3919 = Sin(var1[4]);
  t6052 = Cos(var1[15]);
  t5037 = Cos(var1[5]);
  t6894 = Cos(var1[17]);
  t8227 = Sin(var1[16]);
  t6872 = Cos(var1[16]);
  t8273 = Sin(var1[17]);
  t5903 = Sin(var1[15]);
  t8754 = -1.*t6894*t8227;
  t9129 = t6872*t8273;
  t9241 = t8754 + t9129;
  t6057 = Sin(var1[5]);
  t6399 = Cos(var1[4]);
  t10396 = -1.*t6872*t6894;
  t10397 = -1.*t8227*t8273;
  t10398 = t10396 + t10397;
  t10420 = t6052*t5037;
  t10596 = -1.*t5903*t6057;
  t10653 = t10420 + t10596;
  t10742 = var2[1]*t6399*t10653;
  t10795 = -1.*t5037*t5903*t9241;
  t10800 = -1.*t6052*t9241*t6057;
  t10826 = t10795 + t10800;
  t10860 = var2[2]*t6399*t10826;
  t10871 = -1.*t5037*t5903*t10398;
  t10883 = -1.*t6052*t10398*t6057;
  t10930 = t10871 + t10883;
  t10931 = var2[0]*t6399*t10930;
  t10933 = t10742 + t10860 + t10931;
  t10943 = t6894*t8227;
  t10948 = -1.*t6872*t8273;
  t10953 = t10943 + t10948;
  t10401 = t6052*t5037*t10398;
  t10407 = -1.*t5903*t10398*t6057;
  t10408 = t10401 + t10407;
  t7342 = t6872*t6894;
  t8344 = t8227*t8273;
  t8563 = t7342 + t8344;
  t9248 = t6052*t5037*t9241;
  t9257 = -1.*t5903*t9241*t6057;
  t9270 = t9248 + t9257;
  t10972 = t9241*t3919;
  t10974 = t6399*t10408;
  t10975 = t10972 + t10974;
  t6049 = t5037*t5903;
  t6109 = t6052*t6057;
  t6150 = t6049 + t6109;
  t10979 = t8563*t3919;
  t10984 = t6399*t9270;
  t10988 = t10979 + t10984;
  t11410 = Sin(var1[3]);
  t11376 = Cos(var1[3]);
  t8753 = t6399*t8563;
  t9679 = -1.*t3919*t9270;
  t9688 = t8753 + t9679;
  t10389 = t6399*t9241;
  t10410 = -1.*t3919*t10408;
  t10414 = t10389 + t10410;
  t11823 = t11376*t6150;
  t11826 = t11410*t3919*t10653;
  t11830 = t11823 + t11826;
  t11835 = var2[1]*t11830;
  t11874 = t11410*t3919*t10826;
  t11875 = t11376*t9270;
  t11878 = t11874 + t11875;
  t11879 = var2[2]*t11878;
  t11888 = t11410*t3919*t10930;
  t11889 = t11376*t10408;
  t11901 = t11888 + t11889;
  t11904 = var2[0]*t11901;
  t11908 = t11835 + t11879 + t11904;
  t10958 = t6052*t5037*t10953;
  t10960 = -1.*t5903*t10953*t6057;
  t10961 = t10958 + t10960;
  t11519 = t5037*t5903*t10398;
  t11522 = t6052*t10398*t6057;
  t11574 = t11519 + t11522;
  t11471 = t5037*t5903*t9241;
  t11474 = t6052*t9241*t6057;
  t11476 = t11471 + t11474;
  t11158 = t6052*t5037*t8563;
  t11159 = -1.*t5903*t8563*t6057;
  t11335 = t11158 + t11159;
  t12149 = t11376*t11574;
  t12154 = -1.*t11410*t10414;
  t12163 = t12149 + t12154;
  t11411 = -1.*t6052*t5037;
  t11414 = t5903*t6057;
  t11447 = t11411 + t11414;
  t12173 = t11376*t11476;
  t12175 = -1.*t11410*t9688;
  t12193 = t12173 + t12175;
  t12244 = t11410*t3919*t6150;
  t12258 = t11376*t11447;
  t12261 = t12244 + t12258;
  t11723 = -1.*t8563*t3919;
  t11730 = -1.*t6399*t9270;
  t11739 = t11723 + t11730;
  t11777 = -1.*t9241*t3919;
  t11790 = -1.*t6399*t10408;
  t11796 = t11777 + t11790;
  t12398 = t11410*t6150;
  t12400 = -1.*t11376*t3919*t10653;
  t12401 = t12398 + t12400;
  t12409 = var2[1]*t12401;
  t12422 = -1.*t11376*t3919*t10826;
  t12428 = t11410*t9270;
  t12441 = t12422 + t12428;
  t12462 = var2[2]*t12441;
  t12464 = -1.*t11376*t3919*t10930;
  t12467 = t11410*t10408;
  t12507 = t12464 + t12467;
  t12580 = var2[0]*t12507;
  t12624 = t12409 + t12462 + t12580;
  t11911 = t5037*t5903*t10953;
  t11917 = t6052*t10953*t6057;
  t11923 = t11911 + t11917;
  t11937 = t6399*t10398;
  t11942 = -1.*t3919*t10961;
  t12034 = t11937 + t11942;
  t12202 = t5037*t5903*t8563;
  t12206 = t6052*t8563*t6057;
  t12209 = t12202 + t12206;
  t12220 = t6399*t10953;
  t12232 = -1.*t3919*t11335;
  t12233 = t12220 + t12232;
  t12703 = t11410*t11574;
  t12705 = t11376*t10414;
  t12706 = t12703 + t12705;
  t12714 = t11410*t11476;
  t12715 = t11376*t9688;
  t12719 = t12714 + t12715;
  t12743 = -1.*t6894;
  t12746 = 1. + t12743;
  t12747 = -0.50321*t12746;
  t12750 = -0.19821*t6894;
  t12751 = t12747 + t12750;
  t12768 = -1.*t6052;
  t12770 = 1. + t12768;
  t12771 = -0.15121*t12770;
  t12772 = -1.*t6872;
  t12773 = 1. + t12772;
  t12774 = -0.28121*t12773;
  t12776 = t6872*t12751;
  t12777 = 0.305*t8227*t8273;
  t12778 = t12774 + t12776 + t12777;
  t12741 = 0.28121*t8227;
  t12752 = t12751*t8227;
  t12760 = -0.305*t6872*t8273;
  t12761 = t12741 + t12752 + t12760;
  t12789 = t6052*t12778;
  t12795 = t12771 + t12789;
  t12860 = t5037*t12795;
  t12872 = -0.15121*t6052;
  t12873 = 0.15121*t5903;
  t12874 = t5903*t12778;
  t12881 = t12771 + t12872 + t12873 + t12874;
  t12885 = -1.*t12881*t6057;
  t12893 = t12860 + t12885;
  t12906 = t12761*t3919;
  t12907 = t6399*t12893;
  t12908 = t12906 + t12907;
  t12767 = -1.*t12761*t3919;
  t12901 = -1.*t6399*t12893;
  t12903 = t12767 + t12901;
  t12938 = t6399*t12761;
  t12941 = -1.*t3919*t12893;
  t12942 = t12938 + t12941;
  t12913 = t5037*t12881;
  t12930 = t12795*t6057;
  t12935 = t12913 + t12930;
  t12936 = -1.*t11447*t12935;
  t12937 = -1.*t6399*t6150*t12908;
  t12943 = t3919*t6150*t12942;
  t12944 = t12936 + t12937 + t12943;
  t13248 = -1.*t5037*t12881;
  t13250 = -1.*t12795*t6057;
  t13254 = t13248 + t13250;
  t12956 = t11476*t12935;
  t12957 = t10988*t12908;
  t12958 = t9688*t12942;
  t12959 = t12956 + t12957 + t12958;
  t12969 = t11447*t12935;
  t12970 = t6399*t6150*t12908;
  t12973 = -1.*t3919*t6150*t12942;
  t12975 = t12969 + t12970 + t12973;
  t13247 = Power(t6399,2);
  t13260 = Power(t3919,2);
  t12993 = -1.*t11574*t12935;
  t13015 = -1.*t10975*t12908;
  t13026 = -1.*t10414*t12942;
  t13027 = t12993 + t13015 + t13026;
  t13141 = -1.*t11476*t12935;
  t13145 = -1.*t10988*t12908;
  t13171 = -1.*t9688*t12942;
  t13174 = t13141 + t13145 + t13171;
  t13198 = t11574*t12935;
  t13199 = t10975*t12908;
  t13216 = t10414*t12942;
  t13217 = t13198 + t13199 + t13216;
  t13239 = t6399*t10826*t12944;
  t13264 = -1.*t6150*t12935;
  t13741 = -0.15121*t5903;
  t13753 = -1.*t5903*t12778;
  t13763 = t13741 + t13753;
  t13769 = t5037*t13763;
  t13787 = 0.15121*t6052;
  t13789 = t13787 + t12789;
  t13800 = -1.*t13789*t6057;
  t13801 = t13769 + t13800;
  t13269 = -1.*t6399*t10653*t12908;
  t13270 = t3919*t10653*t12942;
  t13301 = t9270*t12935;
  t13820 = t5037*t13789;
  t13838 = t13763*t6057;
  t13852 = t13820 + t13838;
  t13364 = t6399*t10826*t12908;
  t13372 = -1.*t3919*t10826*t12942;
  t13389 = t6399*t10653*t12959;
  t13450 = t6399*t10930*t12975;
  t13460 = t6150*t12935;
  t13463 = t6399*t10653*t12908;
  t13496 = -1.*t3919*t10653*t12942;
  t13509 = -1.*t10408*t12935;
  t13519 = -1.*t6399*t10930*t12908;
  t13525 = t3919*t10930*t12942;
  t13528 = t6399*t10653*t13027;
  t13550 = -1.*t9270*t12935;
  t13574 = -1.*t6399*t10826*t12908;
  t13581 = t3919*t10826*t12942;
  t13595 = t10408*t12935;
  t13638 = t6399*t10930*t12908;
  t13642 = -1.*t3919*t10930*t12942;
  t13668 = t6399*t10930*t13174;
  t13671 = t6399*t10826*t13217;
  t15298 = -0.28121*t8227;
  t15299 = -1.*t12751*t8227;
  t15310 = 0.305*t6872*t8273;
  t15314 = t15298 + t15299 + t15310;
  t15327 = 0.28121*t6872;
  t15349 = t15327 + t12776 + t12777;
  t15369 = t6052*t5037*t15314;
  t15371 = -1.*t5903*t15314*t6057;
  t15381 = t15369 + t15371;
  t10940 = t10398*t3919;
  t10964 = t6399*t10961;
  t10965 = t10940 + t10964;
  t15318 = t5037*t5903*t15314;
  t15323 = t6052*t15314*t6057;
  t15325 = t15318 + t15323;
  t15358 = t15349*t3919;
  t15385 = t6399*t15381;
  t15390 = t15358 + t15385;
  t15392 = t6399*t15349;
  t15393 = -1.*t3919*t15381;
  t15398 = t15392 + t15393;
  t15574 = 0.305*t6894*t8227;
  t15575 = t15574 + t12760;
  t15586 = -0.305*t6872*t6894;
  t15592 = -0.305*t8227*t8273;
  t15594 = t15586 + t15592;
  t15609 = t6052*t5037*t15575;
  t15613 = -1.*t5903*t15575*t6057;
  t15614 = t15609 + t15613;
  t15576 = t5037*t5903*t15575;
  t15578 = t6052*t15575*t6057;
  t15579 = t15576 + t15578;
  t15595 = t15594*t3919;
  t15615 = t6399*t15614;
  t15619 = t15595 + t15615;
  t15623 = t6399*t15594;
  t15624 = -1.*t3919*t15614;
  t15627 = t15623 + t15624;
  t11140 = t10953*t3919;
  t11351 = t6399*t11335;
  t11353 = t11140 + t11351;
  t13268 = -1.*t11447*t12893;
  t13302 = t11476*t12893;
  t13462 = t11447*t12893;
  t13510 = -1.*t11574*t12893;
  t13553 = -1.*t11476*t12893;
  t13596 = t11574*t12893;
  t15728 = -1.*t6150*t12893;
  t15729 = t12936 + t15728;
  t15731 = t9270*t15729;
  t13858 = -1.*t11447*t13852;
  t15734 = -1.*t10653*t12893;
  t13899 = t11476*t13852;
  t15740 = t10826*t12893;
  t15744 = t12761*t8563;
  t15746 = t9270*t12893;
  t15747 = t15744 + t12956 + t15746;
  t15748 = t6150*t15747;
  t15752 = t6150*t12893;
  t15753 = t12969 + t15752;
  t15754 = t10408*t15753;
  t14985 = t11447*t13852;
  t15756 = t10653*t12893;
  t15071 = -1.*t11574*t13852;
  t15760 = -1.*t10930*t12893;
  t15766 = -1.*t12761*t9241;
  t15767 = -1.*t10408*t12893;
  t15768 = t15766 + t12993 + t15767;
  t15770 = t6150*t15768;
  t15147 = -1.*t11476*t13852;
  t15776 = -1.*t10826*t12893;
  t15779 = -1.*t12761*t8563;
  t15781 = -1.*t9270*t12893;
  t15782 = t15779 + t13141 + t15781;
  t15783 = t10408*t15782;
  t15249 = t11574*t13852;
  t15785 = t10930*t12893;
  t15790 = t12761*t9241;
  t15791 = t10408*t12893;
  t15792 = t15790 + t13198 + t15791;
  t15793 = t9270*t15792;
  t15326 = t11447*t15325;
  t15405 = -1.*t15325*t11574;
  t15415 = -1.*t11923*t12935;
  t15467 = t15325*t11574;
  t15471 = t11923*t12935;
  t15486 = -1.*t15325*t11476;
  t15519 = -1.*t11447*t15325;
  t15553 = t15325*t11476;
  t15584 = t11447*t15579;
  t15637 = -1.*t15579*t11574;
  t15646 = t15579*t11574;
  t15665 = -1.*t15579*t11476;
  t15666 = -1.*t12209*t12935;
  t15692 = -1.*t11447*t15579;
  t15700 = t15579*t11476;
  t15702 = t12209*t12935;
  t15908 = t12761*t10398;
  t15909 = t9241*t15349;
  t16049 = Power(t6052,2);
  t16056 = Power(t5903,2);
  t15916 = -1.*t15349*t8563;
  t16041 = t5903*t12795;
  t16042 = -1.*t6052*t12881;
  t16043 = t16041 + t16042;
  t16045 = -1.*t5903*t12795;
  t16046 = t6052*t12881;
  t16047 = t16045 + t16046;
  t16091 = -1.*t6052*t9241*t12795;
  t16092 = -1.*t5903*t9241*t12881;
  t16093 = t15779 + t16091 + t16092;
  t15950 = t9241*t15594;
  t16102 = t6052*t10398*t12795;
  t16103 = t5903*t10398*t12881;
  t16104 = t15790 + t16102 + t16103;
  t15956 = -1.*t10953*t12761;
  t15957 = -1.*t15594*t8563;
  t16135 = -0.15121*t10953;
  t16136 = -0.15121*t9241;
  t16137 = t16135 + t16136;
  t16139 = var2[0]*t16137;
  t16140 = t10398*t12778;
  t16141 = t15790 + t16140;
  t16147 = -1.*t9241*t12778;
  t16148 = t16147 + t15779;
  t16178 = 0.28121*t6894;
  t16179 = t12751*t6894;
  p_output1[0]=t10414*var2[0] - 1.*t3919*t6150*var2[1] + t9688*var2[2];
  p_output1[1]=t10933;
  p_output1[2]=t10933;
  p_output1[3]=t10965*var2[0] + t10975*var2[2];
  p_output1[4]=t10988*var2[0] + t11353*var2[2];
  p_output1[5]=t10975;
  p_output1[6]=t6150*t6399;
  p_output1[7]=t10988;
  p_output1[8]=(-1.*t10414*t11376 - 1.*t11410*t11574)*var2[0] + (-1.*t11410*t11447 + t11376*t3919*t6150)*var2[1] + (-1.*t11410*t11476 - 1.*t11376*t9688)*var2[2];
  p_output1[9]=-1.*t11410*t11796*var2[0] + t11410*t6150*t6399*var2[1] - 1.*t11410*t11739*var2[2];
  p_output1[10]=t11908;
  p_output1[11]=t11908;
  p_output1[12]=(t11376*t11923 - 1.*t11410*t12034)*var2[0] + t12163*var2[2];
  p_output1[13]=t12193*var2[0] + (t11376*t12209 - 1.*t11410*t12233)*var2[2];
  p_output1[14]=t12163;
  p_output1[15]=t12261;
  p_output1[16]=t12193;
  p_output1[17]=t12163*var2[0] + t12261*var2[1] + t12193*var2[2];
  p_output1[18]=t11376*t11796*var2[0] - 1.*t11376*t6150*t6399*var2[1] + t11376*t11739*var2[2];
  p_output1[19]=t12624;
  p_output1[20]=t12624;
  p_output1[21]=(t11410*t11923 + t11376*t12034)*var2[0] + t12706*var2[2];
  p_output1[22]=t12719*var2[0] + (t11410*t12209 + t11376*t12233)*var2[2];
  p_output1[23]=t12706;
  p_output1[24]=t11410*t11447 - 1.*t11376*t3919*t6150;
  p_output1[25]=t12719;
  p_output1[26]=(-1.*t12959*t3919*t6150 + t10988*(t12903*t3919*t6150 + t12908*t3919*t6150) + t12944*t9688 + t6150*t6399*(t10988*t12942 + t11739*t12942 + t12903*t9688 + t12908*t9688))*var2[0] + (t10988*(t10414*t12903 + t10414*t12908 + t10975*t12942 + t11796*t12942) + t10414*t13174 + t13217*t9688 + t10975*(-1.*t10988*t12942 - 1.*t11739*t12942 - 1.*t12903*t9688 - 1.*t12908*t9688))*var2[1] + (t10414*t12975 - 1.*t13027*t3919*t6150 + t10975*(-1.*t12903*t3919*t6150 - 1.*t12908*t3919*t6150) + (-1.*t10414*t12903 - 1.*t10414*t12908 - 1.*t10975*t12942 - 1.*t11796*t12942)*t6150*t6399)*var2[2];
  p_output1[27]=(t13239 + t13389 + t10988*(t13264 + t13268 + t13269 + t13270 - 1.*t13247*t13254*t6150 - 1.*t13254*t13260*t6150) + t6150*t6399*(t13301 + t13302 + t13364 + t13372 + t10988*t13254*t6399 - 1.*t13254*t3919*t9688))*var2[0] + (t13668 + t13671 + t10988*(t13595 + t13596 + t13638 + t13642 - 1.*t10414*t13254*t3919 + t10975*t13254*t6399) + t10975*(t13550 + t13553 + t13574 + t13581 - 1.*t10988*t13254*t6399 + t13254*t3919*t9688))*var2[1] + (t13450 + t13528 + t10975*(t13460 + t13462 + t13463 + t13496 + t13247*t13254*t6150 + t13254*t13260*t6150) + t6150*t6399*(t13509 + t13510 + t13519 + t13525 + t10414*t13254*t3919 - 1.*t10975*t13254*t6399))*var2[2];
  p_output1[28]=(t13239 + t13389 + t10988*(t13264 + t13269 + t13270 + t13858 - 1.*t13247*t13801*t6150 - 1.*t13260*t13801*t6150) + t6150*t6399*(t13301 + t13364 + t13372 + t13899 + t10988*t13801*t6399 - 1.*t13801*t3919*t9688))*var2[0] + (t13668 + t13671 + t10988*(t13595 + t13638 + t13642 + t15249 - 1.*t10414*t13801*t3919 + t10975*t13801*t6399) + t10975*(t13550 + t13574 + t13581 + t15147 - 1.*t10988*t13801*t6399 + t13801*t3919*t9688))*var2[1] + (t13450 + t13528 + t10975*(t13460 + t13463 + t13496 + t14985 + t13247*t13801*t6150 + t13260*t13801*t6150) + t6150*t6399*(t13509 + t13519 + t13525 + t15071 + t10414*t13801*t3919 - 1.*t10975*t13801*t6399))*var2[2];
  p_output1[29]=(t10975*t12944 + t10988*(t15519 + t15398*t3919*t6150 - 1.*t15390*t6150*t6399) + t6150*t6399*(t13198 + t13199 + t13216 + t10988*t15390 + t15553 + t15398*t9688))*var2[0] + (t10965*t13174 + t10975*t13217 + t10988*(t10965*t12908 + t12034*t12942 + t10975*t15390 + t10414*t15398 + t15467 + t15471) + t10975*(t12993 + t13015 + t13026 - 1.*t10988*t15390 + t15486 - 1.*t15398*t9688))*var2[1] + (t10965*t12975 + (-1.*t10965*t12908 - 1.*t12034*t12942 - 1.*t10975*t15390 - 1.*t10414*t15398 + t15405 + t15415)*t6150*t6399 + t10975*(t15326 - 1.*t15398*t3919*t6150 + t15390*t6150*t6399))*var2[2];
  p_output1[30]=(t11353*t12944 + t10988*(t15692 + t15627*t3919*t6150 - 1.*t15619*t6150*t6399) + t6150*t6399*(t11353*t12908 + t12233*t12942 + t10988*t15619 + t15700 + t15702 + t15627*t9688))*var2[0] + (t10988*t13174 + t11353*t13217 + t10988*(t12956 + t12957 + t12958 + t10975*t15619 + t10414*t15627 + t15646) + t10975*(-1.*t11353*t12908 - 1.*t12233*t12942 - 1.*t10988*t15619 + t15665 + t15666 - 1.*t15627*t9688))*var2[1] + (t10988*t12975 + (t13141 + t13145 + t13171 - 1.*t10975*t15619 - 1.*t10414*t15627 + t15637)*t6150*t6399 + t10975*(t15584 - 1.*t15627*t3919*t6150 + t15619*t6150*t6399))*var2[2];
  p_output1[31]=t10988*t12944 + t12959*t6150*t6399;
  p_output1[32]=t10975*t13174 + t10988*t13217;
  p_output1[33]=t10975*t12975 + t13027*t6150*t6399;
  p_output1[34]=(t15731 + t15748 + t11476*(t13264 + t13268 + t15734 - 1.*t13254*t6150) + t11447*(t13301 + t13302 + t15740 + t13254*t9270))*var2[0] + (t15783 + t11476*(t10408*t13254 + t13595 + t13596 + t15785) + t15793 + t11574*(t13550 + t13553 + t15776 - 1.*t13254*t9270))*var2[1] + (t15754 + t11447*(-1.*t10408*t13254 + t13509 + t13510 + t15760) + t15770 + t11574*(t13460 + t13462 + t15756 + t13254*t6150))*var2[2];
  p_output1[35]=(t15731 + t15748 + t11476*(t13264 + t13858 + t15734 - 1.*t13801*t6150) + t11447*(t13301 + t13899 + t15740 + t13801*t9270))*var2[0] + (t15783 + t11476*(t13595 + t10408*t13801 + t15249 + t15785) + t15793 + t11574*(t13550 + t15147 + t15776 - 1.*t13801*t9270))*var2[1] + (t15754 + t11447*(t13509 - 1.*t10408*t13801 + t15071 + t15760) + t15770 + t11574*(t13460 + t14985 + t15756 + t13801*t6150))*var2[2];
  p_output1[36]=(t11574*t15729 + t11476*(t15519 - 1.*t15381*t6150) + t11447*(t13198 + t15553 + t15790 + t15791 + t15349*t8563 + t15381*t9270))*var2[0] + (t11923*t15782 + t11574*t15792 + t11476*(t10961*t12893 + t10408*t15381 + t15467 + t15471 + t15908 + t15909) + t11574*(t12993 + t15486 + t15766 + t15767 + t15916 - 1.*t15381*t9270))*var2[1] + (t11923*t15753 + t11574*(t15326 + t15381*t6150) + t11447*(-1.*t10398*t12761 - 1.*t10961*t12893 - 1.*t10408*t15381 + t15405 + t15415 - 1.*t15349*t9241))*var2[2];
  p_output1[37]=(t12209*t15729 + t11476*(t15692 - 1.*t15614*t6150) + t11447*(t10953*t12761 + t11335*t12893 + t15700 + t15702 + t15594*t8563 + t15614*t9270))*var2[0] + (t11476*t15782 + t12209*t15792 + t11476*(t12956 + t10408*t15614 + t15646 + t15744 + t15746 + t15950) + t11574*(-1.*t11335*t12893 + t15665 + t15666 + t15956 + t15957 - 1.*t15614*t9270))*var2[1] + (t11476*t15753 + t11574*(t15584 + t15614*t6150) + t11447*(t13141 - 1.*t10408*t15614 + t15637 + t15779 + t15781 - 1.*t15594*t9241))*var2[2];
  p_output1[38]=t11476*t15729 + t11447*t15747;
  p_output1[39]=t11574*t15782 + t11476*t15792;
  p_output1[40]=t11574*t15753 + t11447*t15768;
  p_output1[41]=(-1.*t12881*t5903 - 1.*t13763*t5903 - 1.*t12795*t6052 + t13789*t6052)*t8563*var2[0] + ((-1.*t10398*t12795*t5903 + t10398*t13789*t5903 + t10398*t12881*t6052 + t10398*t13763*t6052)*t8563 + t9241*(t12795*t5903*t9241 - 1.*t13789*t5903*t9241 - 1.*t12881*t6052*t9241 - 1.*t13763*t6052*t9241))*var2[1] + (t12881*t5903 + t13763*t5903 + t12795*t6052 - 1.*t13789*t6052)*t9241*var2[2];
  p_output1[42]=t16047*t9241*var2[0] + (t10398*t16093 + (t15908 + t15909 + t10398*t15314*t16049 + t10398*t15314*t16056 + t10953*t12881*t5903 + t10953*t12795*t6052)*t8563 + t16104*t9241 + t9241*(t15766 + t15916 - 1.*t10398*t12881*t5903 - 1.*t10398*t12795*t6052 - 1.*t15314*t16049*t9241 - 1.*t15314*t16056*t9241))*var2[1] + t10398*t16043*var2[2];
  p_output1[43]=t10953*t16047*var2[0] + (t10953*t16104 + t16093*t8563 + t9241*(t15956 + t15957 - 1.*t12881*t5903*t8563 - 1.*t12795*t6052*t8563 - 1.*t15575*t16049*t9241 - 1.*t15575*t16056*t9241) + t8563*(t15744 + t15950 + t10398*t15575*t16049 + t10398*t15575*t16056 + t12881*t5903*t9241 + t12795*t6052*t9241))*var2[1] + t16043*t8563*var2[2];
  p_output1[44]=t16047*t8563;
  p_output1[45]=t16104*t8563 + t16093*t9241;
  p_output1[46]=t16043*t9241;
  p_output1[47]=t16139 + (t10398*t16148 + (t10953*t12778 + t10398*t15314 + t15908 + t15909)*t8563 + t16141*t9241 + t9241*(-1.*t10398*t12778 + t15766 + t15916 - 1.*t15314*t9241))*var2[1];
  p_output1[48]=t16139 + (t10953*t16141 + t16148*t8563 + t8563*(t10398*t15575 + t15744 + t15950 + t12778*t9241) + t9241*(t15956 + t15957 - 1.*t12778*t8563 - 1.*t15575*t9241))*var2[1];
  p_output1[49]=-0.15121*t10398 - 0.15121*t8563;
  p_output1[50]=-0.15121 + t16141*t8563 + t16148*t9241;
  p_output1[51]=(t16178 + t16179 - 0.305*Power(t6894,2))*var2[0] + (-0.28121*t8273 - 1.*t12751*t8273 + 0.305*t6894*t8273)*var2[2];
  p_output1[52]=0.28121*t8273 + t12751*t8273 - 0.305*t6894*t8273;
  p_output1[53]=t16178 + t16179 + 0.305*Power(t8273,2);
  p_output1[54]=-0.305;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 55, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_fRrFoot_vec_ParallelStance.hh"

namespace ParallelStance
{

void J_fRrFoot_vec_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
