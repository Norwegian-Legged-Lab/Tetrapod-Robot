/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:33:16 GMT+02:00
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
  double t8159;
  double t7402;
  double t8160;
  double t8429;
  double t8306;
  double t8342;
  double t8469;
  double t7610;
  double t8343;
  double t8473;
  double t8599;
  double t8188;
  double t8686;
  double t8689;
  double t8690;
  double t8661;
  double t8936;
  double t8937;
  double t8949;
  double t8998;
  double t9074;
  double t9104;
  double t8696;
  double t8721;
  double t8727;
  double t9489;
  double t9501;
  double t9504;
  double t9680;
  double t9683;
  double t9685;
  double t9638;
  double t9649;
  double t9657;
  double t8158;
  double t8198;
  double t8201;
  double t9742;
  double t9752;
  double t8655;
  double t8770;
  double t8803;
  double t8935;
  double t9113;
  double t9117;
  double t9145;
  double t9146;
  double t9149;
  double t9134;
  double t9138;
  double t9143;
  double t9511;
  double t9516;
  double t9569;
  double t9805;
  double t9815;
  double t9819;
  double t9765;
  double t9781;
  double t9783;
  double t9705;
  double t9711;
  double t9715;
  double t10480;
  double t10481;
  double t10482;
  double t10457;
  double t10461;
  double t10467;
  double t10671;
  double t10677;
  double t10682;
  double t9928;
  double t9934;
  double t9935;
  double t9944;
  double t9947;
  double t9948;
  double t9972;
  double t9975;
  double t10080;
  double t10253;
  double t10259;
  double t10262;
  double t10313;
  double t10314;
  double t10317;
  double t10330;
  double t10334;
  double t10337;
  double t10376;
  double t10410;
  double t10422;
  double t10426;
  double t10428;
  double t10430;
  double t10547;
  double t10616;
  double t10632;
  double t10634;
  double t10636;
  double t10637;
  double t10994;
  double t10995;
  double t10999;
  double t10988;
  double t10989;
  double t10991;
  double t11019;
  double t11020;
  double t11022;
  double t11025;
  double t11029;
  double t11032;
  double t11033;
  double t11034;
  double t11036;
  double t11018;
  double t11024;
  double t11037;
  double t11041;
  double t11013;
  double t11042;
  double t11045;
  double t11052;
  double t11053;
  double t11054;
  double t11055;
  double t11056;
  double t11059;
  double t11060;
  double t11091;
  double t11100;
  double t11101;
  double t11102;
  double t11106;
  double t11107;
  double t11108;
  double t11109;
  double t9733;
  double t9736;
  double t9737;
  double t11125;
  double t11129;
  double t11133;
  double t11115;
  double t11118;
  double t11122;
  double t11047;
  double t11110;
  double t11112;
  double t11139;
  double t11141;
  double t11142;
  double t11468;
  double t11472;
  double t11473;
  double t11146;
  double t11147;
  double t11153;
  double t11154;
  double t11167;
  double t11168;
  double t11174;
  double t11280;
  double t11363;
  double t11364;
  double t11365;
  double t11376;
  double t11400;
  double t11401;
  double t11402;
  double t11406;
  double t11441;
  double t11442;
  double t11443;
  double t11444;
  double t11453;
  double t11454;
  double t11460;
  double t11461;
  double t9181;
  double t9275;
  double t9281;
  double t11588;
  double t11590;
  double t11591;
  double t11593;
  double t11597;
  double t9166;
  double t9174;
  double t9176;
  double t11599;
  double t11600;
  double t11601;
  double t11605;
  double t11607;
  double t11609;
  double t9362;
  double t9408;
  double t9418;
  double t11586;
  double t11735;
  double t11738;
  double t11746;
  double t11747;
  double t11748;
  double t11749;
  double t11762;
  double t11764;
  double t11765;
  double t11743;
  double t11750;
  double t11759;
  double t11761;
  double t11770;
  double t11776;
  double t11791;
  double t11792;
  double t11796;
  double t9459;
  double t9602;
  double t9627;
  double t9687;
  double t9725;
  double t9727;
  double t11952;
  double t11955;
  double t11958;
  double t11951;
  double t11959;
  double t11960;
  double t11962;
  double t11963;
  double t11971;
  double t11973;
  double t11974;
  double t11961;
  double t11965;
  double t11967;
  double t11970;
  double t11980;
  double t11981;
  double t11983;
  double t11986;
  double t11988;
  double t11475;
  double t11490;
  double t11491;
  double t11509;
  double t11510;
  double t11522;
  double t11523;
  double t11541;
  double t11553;
  double t11554;
  double t12161;
  double t12166;
  double t12167;
  double t11592;
  double t11604;
  double t11621;
  double t11622;
  double t12193;
  double t12194;
  double t12198;
  double t11635;
  double t11636;
  double t12226;
  double t12233;
  double t12235;
  double t11659;
  double t11661;
  double t12241;
  double t12244;
  double t12246;
  double t12268;
  double t12269;
  double t12270;
  double t11704;
  double t12319;
  double t11707;
  double t11715;
  double t11717;
  double t12279;
  double t12281;
  double t12282;
  double t11760;
  double t11802;
  double t12432;
  double t11846;
  double t11864;
  double t11865;
  double t11909;
  double t11933;
  double t11934;
  double t11969;
  double t11996;
  double t12006;
  double t12046;
  double t12047;
  double t12066;
  double t12093;
  double t12099;
  double t12376;
  double t12377;
  double t12395;
  double t12404;
  double t12315;
  double t12317;
  double t12334;
  double t12335;
  double t12344;
  double t12345;
  double t12353;
  double t12354;
  double t12530;
  double t12531;
  double t12461;
  double t12462;
  double t12588;
  double t12589;
  double t12433;
  double t12711;
  double t12641;
  double t12642;
  double t12643;
  double t12695;
  double t12696;
  double t12698;
  double t12447;
  double t12448;
  double t12442;
  double t12539;
  double t12540;
  double t12510;
  double t12479;
  double t12480;
  double t12617;
  double t12619;
  double t12497;
  double t12489;
  double t12490;
  double t12541;
  double t12627;
  double t12729;
  double t12730;
  double t12735;
  double t12832;
  double t12833;
  double t12840;
  double t12841;
  double t12765;
  double t12778;
  double t12782;
  double t12907;
  double t12908;
  t8159 = Cos(var1[15]);
  t7402 = Cos(var1[4]);
  t8160 = Sin(var1[4]);
  t8429 = Cos(var1[16]);
  t8306 = Cos(var1[17]);
  t8342 = Sin(var1[16]);
  t8469 = Sin(var1[17]);
  t7610 = Sin(var1[15]);
  t8343 = t8306*t8342;
  t8473 = -1.*t8429*t8469;
  t8599 = t8343 + t8473;
  t8188 = Sin(var1[5]);
  t8686 = t8429*t8306;
  t8689 = t8342*t8469;
  t8690 = t8686 + t8689;
  t8661 = Cos(var1[5]);
  t8936 = -1.*t8306*t8342;
  t8937 = t8429*t8469;
  t8949 = t8936 + t8937;
  t8998 = t8661*t8949;
  t9074 = t7610*t8690*t8188;
  t9104 = t8998 + t9074;
  t8696 = t8661*t8690;
  t8721 = t7610*t8599*t8188;
  t8727 = t8696 + t8721;
  t9489 = -1.*t8429*t8306;
  t9501 = -1.*t8342*t8469;
  t9504 = t9489 + t9501;
  t9680 = t8159*t8599*t8160;
  t9683 = t7402*t8727;
  t9685 = t9680 + t9683;
  t9638 = t8159*t8690*t8160;
  t9649 = t7402*t9104;
  t9657 = t9638 + t9649;
  t8158 = t7402*t7610;
  t8198 = t8159*t8160*t8188;
  t8201 = t8158 + t8198;
  t9742 = Sin(var1[3]);
  t9752 = Cos(var1[3]);
  t8655 = t8159*t7402*t8599;
  t8770 = -1.*t8160*t8727;
  t8803 = t8655 + t8770;
  t8935 = t8159*t7402*t8690;
  t9113 = -1.*t8160*t9104;
  t9117 = t8935 + t9113;
  t9145 = t8661*t7610*t8599;
  t9146 = -1.*t8690*t8188;
  t9149 = t9145 + t9146;
  t9134 = t8661*t7610*t8690;
  t9138 = -1.*t8949*t8188;
  t9143 = t9134 + t9138;
  t9511 = t8661*t9504;
  t9516 = t7610*t8949*t8188;
  t9569 = t9511 + t9516;
  t9805 = -1.*t8661*t7610*t8690;
  t9815 = t8949*t8188;
  t9819 = t9805 + t9815;
  t9765 = -1.*t8661*t7610*t8599;
  t9781 = t8690*t8188;
  t9783 = t9765 + t9781;
  t9705 = t8661*t8599;
  t9711 = t7610*t9504*t8188;
  t9715 = t9705 + t9711;
  t10480 = t9752*t9783;
  t10481 = -1.*t9742*t8803;
  t10482 = t10480 + t10481;
  t10457 = t9752*t9819;
  t10461 = -1.*t9742*t9117;
  t10467 = t10457 + t10461;
  t10671 = t8159*t9752*t8661;
  t10677 = -1.*t9742*t8201;
  t10682 = t10671 + t10677;
  t9928 = -1.*t7610*t8160;
  t9934 = t8159*t7402*t8188;
  t9935 = t9928 + t9934;
  t9944 = -1.*t8159*t8599*t8160;
  t9947 = -1.*t7402*t8727;
  t9948 = t9944 + t9947;
  t9972 = -1.*t8159*t8690*t8160;
  t9975 = -1.*t7402*t9104;
  t10080 = t9972 + t9975;
  t10253 = t8159*t7402;
  t10259 = -1.*t7610*t8160*t8188;
  t10262 = t10253 + t10259;
  t10313 = -1.*t7402*t7610*t8599;
  t10314 = -1.*t8159*t8599*t8160*t8188;
  t10317 = t10313 + t10314;
  t10330 = -1.*t7402*t7610*t8690;
  t10334 = -1.*t8159*t8690*t8160*t8188;
  t10337 = t10330 + t10334;
  t10376 = -1.*t8661*t7610*t8949;
  t10410 = t9504*t8188;
  t10422 = t10376 + t10410;
  t10426 = t8159*t7402*t8949;
  t10428 = -1.*t8160*t9569;
  t10430 = t10426 + t10428;
  t10547 = -1.*t8661*t7610*t9504;
  t10616 = t8599*t8188;
  t10632 = t10547 + t10616;
  t10634 = t8159*t7402*t9504;
  t10636 = -1.*t8160*t9715;
  t10637 = t10634 + t10636;
  t10994 = t9742*t9783;
  t10995 = t9752*t8803;
  t10999 = t10994 + t10995;
  t10988 = t9742*t9819;
  t10989 = t9752*t9117;
  t10991 = t10988 + t10989;
  t11019 = -0.0641*t8306;
  t11020 = -0.28*t8469;
  t11022 = t11019 + t11020;
  t11025 = -1.*t8306;
  t11029 = 1. + t11025;
  t11032 = -0.575*t11029;
  t11033 = -0.295*t8306;
  t11034 = -0.0641*t8469;
  t11036 = t11032 + t11033 + t11034;
  t11018 = 0.325*t8342;
  t11024 = t8429*t11022;
  t11037 = t8342*t11036;
  t11041 = t11018 + t11024 + t11037;
  t11013 = -0.068*t7610;
  t11042 = t8159*t11041;
  t11045 = t11013 + t11042;
  t11052 = -1.*t8429;
  t11053 = 1. + t11052;
  t11054 = -0.325*t11053;
  t11055 = -1.*t8342*t11022;
  t11056 = t8429*t11036;
  t11059 = t11054 + t11055 + t11056;
  t11060 = t8661*t11059;
  t11091 = -1.*t8159;
  t11100 = 1. + t11091;
  t11101 = -0.1575*t11100;
  t11102 = -0.2255*t8159;
  t11106 = -1.*t7610*t11041;
  t11107 = t11101 + t11102 + t11106;
  t11108 = -1.*t11107*t8188;
  t11109 = t11060 + t11108;
  t9733 = t7610*t8160;
  t9736 = -1.*t8159*t7402*t8188;
  t9737 = t9733 + t9736;
  t11125 = t7402*t11045;
  t11129 = -1.*t8160*t11109;
  t11133 = t11125 + t11129;
  t11115 = t11045*t8160;
  t11118 = t7402*t11109;
  t11122 = t11115 + t11118;
  t11047 = -1.*t11045*t8160;
  t11110 = -1.*t7402*t11109;
  t11112 = t11047 + t11110;
  t11139 = t8661*t11107;
  t11141 = t11059*t8188;
  t11142 = t11139 + t11141;
  t11468 = -1.*t8661*t11107;
  t11472 = -1.*t11059*t8188;
  t11473 = t11468 + t11472;
  t11146 = t8159*t8661*t11142;
  t11147 = t9737*t11122;
  t11153 = t8201*t11133;
  t11154 = t11146 + t11147 + t11153;
  t11167 = -1.*t11142*t9783;
  t11168 = -1.*t11122*t9685;
  t11174 = -1.*t11133*t8803;
  t11280 = t11167 + t11168 + t11174;
  t11363 = t11142*t9783;
  t11364 = t11122*t9685;
  t11365 = t11133*t8803;
  t11376 = t11363 + t11364 + t11365;
  t11400 = -1.*t11142*t9819;
  t11401 = -1.*t11122*t9657;
  t11402 = -1.*t11133*t9117;
  t11406 = t11400 + t11401 + t11402;
  t11441 = -1.*t8159*t8661*t11142;
  t11442 = -1.*t9737*t11122;
  t11443 = -1.*t8201*t11133;
  t11444 = t11441 + t11442 + t11443;
  t11453 = t11142*t9819;
  t11454 = t11122*t9657;
  t11460 = t11133*t9117;
  t11461 = t11453 + t11454 + t11460;
  t9181 = -1.*t7610*t8599*t8160;
  t9275 = t8159*t7402*t8599*t8188;
  t9281 = t9181 + t9275;
  t11588 = 0.068*t7610;
  t11590 = -1.*t8159*t11041;
  t11591 = t11588 + t11590;
  t11593 = -0.068*t8159;
  t11597 = t11593 + t11106;
  t9166 = t8159*t8160;
  t9174 = t7402*t7610*t8188;
  t9176 = t9166 + t9174;
  t11599 = t11597*t8160;
  t11600 = -1.*t7402*t11591*t8188;
  t11601 = t11599 + t11600;
  t11605 = t7402*t11597;
  t11607 = t11591*t8160*t8188;
  t11609 = t11605 + t11607;
  t9362 = -1.*t7610*t8690*t8160;
  t9408 = t8159*t7402*t8690*t8188;
  t9418 = t9362 + t9408;
  t11586 = Power(t8661,2);
  t11735 = 0.325*t8429;
  t11738 = t11735 + t11055 + t11056;
  t11746 = -0.325*t8342;
  t11747 = -1.*t8429*t11022;
  t11748 = -1.*t8342*t11036;
  t11749 = t11746 + t11747 + t11748;
  t11762 = t8661*t11749;
  t11764 = t7610*t11738*t8188;
  t11765 = t11762 + t11764;
  t11743 = -1.*t8661*t7610*t11738;
  t11750 = t11749*t8188;
  t11759 = t11743 + t11750;
  t11761 = t8159*t11738*t8160;
  t11770 = t7402*t11765;
  t11776 = t11761 + t11770;
  t11791 = t8159*t7402*t11738;
  t11792 = -1.*t8160*t11765;
  t11796 = t11791 + t11792;
  t9459 = t8159*t8949*t8160;
  t9602 = t7402*t9569;
  t9627 = t9459 + t9602;
  t9687 = t8159*t9504*t8160;
  t9725 = t7402*t9715;
  t9727 = t9687 + t9725;
  t11952 = -0.28*t8306;
  t11955 = 0.0641*t8469;
  t11958 = t11952 + t11955;
  t11951 = t8342*t11022;
  t11959 = t8429*t11958;
  t11960 = t11951 + t11959;
  t11962 = -1.*t8342*t11958;
  t11963 = t11024 + t11962;
  t11971 = t8661*t11963;
  t11973 = t7610*t11960*t8188;
  t11974 = t11971 + t11973;
  t11961 = -1.*t8661*t7610*t11960;
  t11965 = t11963*t8188;
  t11967 = t11961 + t11965;
  t11970 = t8159*t11960*t8160;
  t11980 = t7402*t11974;
  t11981 = t11970 + t11980;
  t11983 = t8159*t7402*t11960;
  t11986 = -1.*t8160*t11974;
  t11988 = t11983 + t11986;
  t11475 = -1.*t8159*t8188*t11142;
  t11490 = -1.*t11142*t8727;
  t11491 = -1.*t11109*t9783;
  t11509 = t11142*t8727;
  t11510 = t11109*t9783;
  t11522 = -1.*t11109*t9819;
  t11523 = -1.*t11142*t9104;
  t11541 = t8159*t8188*t11142;
  t11553 = t11109*t9819;
  t11554 = t11142*t9104;
  t12161 = t7610*t11045;
  t12166 = -1.*t8159*t8188*t11109;
  t12167 = t12161 + t12166 + t11146;
  t11592 = t8159*t11586*t11591;
  t11604 = -1.*t8661*t7610*t11142;
  t11621 = t8159*t8661*t8599*t11142;
  t11622 = -1.*t8661*t11591*t9783;
  t12193 = -1.*t8159*t11045*t8599;
  t12194 = -1.*t11109*t8727;
  t12198 = t12193 + t12194 + t11167;
  t11635 = -1.*t8159*t8661*t8599*t11142;
  t11636 = t8661*t11591*t9783;
  t12226 = t8159*t11045*t8599;
  t12233 = t11109*t8727;
  t12235 = t12226 + t12233 + t11363;
  t11659 = t8159*t8661*t8690*t11142;
  t11661 = -1.*t8661*t11591*t9819;
  t12241 = -1.*t8159*t11045*t8690;
  t12244 = -1.*t11109*t9104;
  t12246 = t12241 + t11400 + t12244;
  t12268 = -1.*t7610*t11045;
  t12269 = t8159*t8188*t11109;
  t12270 = t12268 + t12269 + t11441;
  t11704 = -1.*t8159*t11586*t11591;
  t12319 = Power(t8188,2);
  t11707 = t8661*t7610*t11142;
  t11715 = -1.*t8159*t8661*t8690*t11142;
  t11717 = t8661*t11591*t9819;
  t12279 = t8159*t11045*t8690;
  t12281 = t11109*t9104;
  t12282 = t12279 + t11453 + t12281;
  t11760 = t8159*t8661*t11759;
  t11802 = -1.*t11759*t9783;
  t12432 = Power(t8159,2);
  t11846 = t11759*t9783;
  t11864 = -1.*t11759*t9819;
  t11865 = -1.*t11142*t10422;
  t11909 = -1.*t8159*t8661*t11759;
  t11933 = t11759*t9819;
  t11934 = t11142*t10422;
  t11969 = t8159*t8661*t11967;
  t11996 = -1.*t11142*t10632;
  t12006 = -1.*t11967*t9783;
  t12046 = t11142*t10632;
  t12047 = t11967*t9783;
  t12066 = -1.*t11967*t9819;
  t12093 = -1.*t8159*t8661*t11967;
  t12099 = t11967*t9819;
  t12376 = -1.*t8159*t11045;
  t12377 = -1.*t7610*t11597;
  t12395 = -1.*t7610*t11045*t8690;
  t12404 = t8159*t11597*t8690;
  t12315 = t8159*t11045;
  t12317 = t7610*t11597;
  t12334 = t7610*t11045*t8599;
  t12335 = -1.*t8159*t11597*t8599;
  t12344 = -1.*t7610*t11045*t8599;
  t12345 = t8159*t11597*t8599;
  t12353 = t7610*t11045*t8690;
  t12354 = -1.*t8159*t11597*t8690;
  t12530 = -1.*t8159*t11107;
  t12531 = t12268 + t12530;
  t12461 = t8159*t11045*t8949;
  t12462 = t12432*t11738*t8690;
  t12588 = t8159*t11107;
  t12589 = t12161 + t12588;
  t12433 = -1.*t12432*t11738*t8599;
  t12711 = Power(t7610,2);
  t12641 = -1.*t11059*t8949;
  t12642 = t7610*t11107*t8690;
  t12643 = t12641 + t12241 + t12642;
  t12695 = -1.*t7610*t11107*t8599;
  t12696 = t11059*t8690;
  t12698 = t12226 + t12695 + t12696;
  t12447 = -1.*t8159*t11045*t8949;
  t12448 = -1.*t12432*t11738*t8690;
  t12442 = t12432*t11738*t8599;
  t12539 = t11059*t8949;
  t12540 = -1.*t7610*t11107*t8690;
  t12510 = t12432*t11960*t8690;
  t12479 = -1.*t12432*t11960*t8599;
  t12480 = -1.*t8159*t11045*t9504;
  t12617 = t7610*t11107*t8599;
  t12619 = -1.*t11059*t8690;
  t12497 = -1.*t12432*t11960*t8690;
  t12489 = t12432*t11960*t8599;
  t12490 = t8159*t11045*t9504;
  t12541 = t12539 + t12279 + t12540;
  t12627 = t12193 + t12617 + t12619;
  t12729 = -1.*t11749*t8949;
  t12730 = -1.*t11059*t9504;
  t12735 = t11749*t8690;
  t12832 = t11041*t8599;
  t12833 = t12832 + t12696;
  t12840 = -1.*t11041*t8690;
  t12841 = t12641 + t12840;
  t12765 = -1.*t11963*t8949;
  t12778 = t11059*t8599;
  t12782 = t11963*t8690;
  t12907 = -0.325*t8469;
  t12908 = -1.*t11036*t8469;
  p_output1[0]=t8803*var2[0] + t8201*var2[1] + t9117*var2[2];
  p_output1[1]=t7402*t9149*var2[0] - 1.*t7402*t8159*t8661*var2[1] + t7402*t9143*var2[2];
  p_output1[2]=t9281*var2[0] + t9176*var2[1] + t9418*var2[2];
  p_output1[3]=t9657*var2[0] + t9627*var2[2];
  p_output1[4]=t9727*var2[0] + t9685*var2[2];
  p_output1[5]=t9685;
  p_output1[6]=t9737;
  p_output1[7]=t9657;
  p_output1[8]=(-1.*t8803*t9752 - 1.*t9742*t9783)*var2[0] + (-1.*t8159*t8661*t9742 - 1.*t8201*t9752)*var2[1] + (-1.*t9117*t9752 - 1.*t9742*t9819)*var2[2];
  p_output1[9]=-1.*t9742*t9948*var2[0] - 1.*t9742*t9935*var2[1] - 1.*t10080*t9742*var2[2];
  p_output1[10]=(t8160*t9149*t9742 + t8727*t9752)*var2[0] + (-1.*t8159*t8160*t8661*t9742 - 1.*t8159*t8188*t9752)*var2[1] + (t8160*t9143*t9742 + t9104*t9752)*var2[2];
  p_output1[11]=(-1.*t10317*t9742 - 1.*t8159*t8599*t8661*t9752)*var2[0] + (-1.*t10262*t9742 - 1.*t7610*t8661*t9752)*var2[1] + (-1.*t10337*t9742 - 1.*t8159*t8661*t8690*t9752)*var2[2];
  p_output1[12]=t10467*var2[0] + (-1.*t10430*t9742 + t10422*t9752)*var2[2];
  p_output1[13]=(-1.*t10637*t9742 + t10632*t9752)*var2[0] + t10482*var2[2];
  p_output1[14]=t10482;
  p_output1[15]=t10682;
  p_output1[16]=t10467;
  p_output1[17]=t10482*var2[0] + t10682*var2[1] + t10467*var2[2];
  p_output1[18]=t9752*t9948*var2[0] + t9752*t9935*var2[1] + t10080*t9752*var2[2];
  p_output1[19]=(t8727*t9742 - 1.*t8160*t9149*t9752)*var2[0] + (-1.*t8159*t8188*t9742 + t8159*t8160*t8661*t9752)*var2[1] + (t9104*t9742 - 1.*t8160*t9143*t9752)*var2[2];
  p_output1[20]=(-1.*t8159*t8599*t8661*t9742 + t10317*t9752)*var2[0] + (-1.*t7610*t8661*t9742 + t10262*t9752)*var2[1] + (-1.*t8159*t8661*t8690*t9742 + t10337*t9752)*var2[2];
  p_output1[21]=t10991*var2[0] + (t10422*t9742 + t10430*t9752)*var2[2];
  p_output1[22]=(t10632*t9742 + t10637*t9752)*var2[0] + t10999*var2[2];
  p_output1[23]=t10999;
  p_output1[24]=t8159*t8661*t9742 + t8201*t9752;
  p_output1[25]=t10991;
  p_output1[26]=(t11461*t8201 + t11444*t9117 + (t10080*t11133 + t11112*t9117 + t11122*t9117 + t11133*t9657)*t9737 + t9657*(-1.*t11112*t8201 - 1.*t11122*t8201 - 1.*t11133*t9737 - 1.*t11133*t9935))*var2[0] + (t11406*t8803 + t11376*t9117 + (-1.*t10080*t11133 - 1.*t11112*t9117 - 1.*t11122*t9117 - 1.*t11133*t9657)*t9685 + t9657*(t11112*t8803 + t11122*t8803 + t11133*t9685 + t11133*t9948))*var2[1] + (t11280*t8201 + t11154*t8803 + t9685*(t11112*t8201 + t11122*t8201 + t11133*t9737 + t11133*t9935) + t9737*(-1.*t11112*t8803 - 1.*t11122*t8803 - 1.*t11133*t9685 - 1.*t11133*t9948))*var2[2];
  p_output1[27]=(-1.*t11461*t7402*t8159*t8661 + t11444*t7402*t9143 + (t11553 + t11554 - 1.*t11473*t8160*t9117 + t11122*t7402*t9143 - 1.*t11133*t8160*t9143 + t11473*t7402*t9657)*t9737 + t9657*(t11541 + t11473*t8160*t8201 - 1.*t11109*t8159*t8661 + t11122*t7402*t8159*t8661 - 1.*t11133*t8159*t8160*t8661 - 1.*t11473*t7402*t9737))*var2[0] + (t11376*t7402*t9143 + t11406*t7402*t9149 + (t11522 + t11523 + t11473*t8160*t9117 - 1.*t11122*t7402*t9143 + t11133*t8160*t9143 - 1.*t11473*t7402*t9657)*t9685 + t9657*(t11509 + t11510 - 1.*t11473*t8160*t8803 + t11122*t7402*t9149 - 1.*t11133*t8160*t9149 + t11473*t7402*t9685))*var2[1] + (-1.*t11280*t7402*t8159*t8661 + t11154*t7402*t9149 + (t11490 + t11491 + t11473*t8160*t8803 - 1.*t11122*t7402*t9149 + t11133*t8160*t9149 - 1.*t11473*t7402*t9685)*t9737 + t9685*(t11475 - 1.*t11473*t8160*t8201 + t11109*t8159*t8661 - 1.*t11122*t7402*t8159*t8661 + t11133*t8159*t8160*t8661 + t11473*t7402*t9737))*var2[2];
  p_output1[28]=(t11461*t9176 + t11444*t9418 + (t10337*t11133 + t11715 + t11717 + t11609*t9117 + t11122*t9418 + t11601*t9657)*t9737 + t9657*(-1.*t10262*t11133 + t11704 + t11707 - 1.*t11609*t8201 - 1.*t11122*t9176 - 1.*t11601*t9737))*var2[0] + (t11406*t9281 + t11376*t9418 + (-1.*t10337*t11133 + t11659 + t11661 - 1.*t11609*t9117 - 1.*t11122*t9418 - 1.*t11601*t9657)*t9685 + t9657*(t10317*t11133 + t11635 + t11636 + t11609*t8803 + t11122*t9281 + t11601*t9685))*var2[1] + (t11280*t9176 + t11154*t9281 + (-1.*t10317*t11133 + t11621 + t11622 - 1.*t11609*t8803 - 1.*t11122*t9281 - 1.*t11601*t9685)*t9737 + t9685*(t10262*t11133 + t11592 + t11604 + t11609*t8201 + t11122*t9176 + t11601*t9737))*var2[2];
  p_output1[29]=(t11444*t9627 + (t10430*t11133 + t11933 + t11934 + t11796*t9117 + t11122*t9627 + t11776*t9657)*t9737 + t9657*(t11909 - 1.*t11796*t8201 - 1.*t11776*t9737))*var2[0] + (t11376*t9627 + t11406*t9657 + (-1.*t10430*t11133 + t11864 + t11865 - 1.*t11796*t9117 - 1.*t11122*t9627 - 1.*t11776*t9657)*t9685 + t9657*(t11453 + t11454 + t11460 + t11846 + t11796*t8803 + t11776*t9685))*var2[1] + (t11154*t9657 + (t11400 + t11401 + t11402 + t11802 - 1.*t11796*t8803 - 1.*t11776*t9685)*t9737 + t9685*(t11760 + t11796*t8201 + t11776*t9737))*var2[2];
  p_output1[30]=(t11444*t9685 + (t11363 + t11364 + t11365 + t12099 + t11988*t9117 + t11981*t9657)*t9737 + t9657*(t12093 - 1.*t11988*t8201 - 1.*t11981*t9737))*var2[0] + (t11376*t9685 + (t11167 + t11168 + t11174 + t12066 - 1.*t11988*t9117 - 1.*t11981*t9657)*t9685 + t11406*t9727 + t9657*(t10637*t11133 + t12046 + t12047 + t11988*t8803 + t11981*t9685 + t11122*t9727))*var2[1] + (t11154*t9727 + (-1.*t10637*t11133 + t11996 + t12006 - 1.*t11988*t8803 - 1.*t11981*t9685 - 1.*t11122*t9727)*t9737 + t9685*(t11969 + t11988*t8201 + t11981*t9737))*var2[2];
  p_output1[31]=t11444*t9657 + t11461*t9737;
  p_output1[32]=t11376*t9657 + t11406*t9685;
  p_output1[33]=t11154*t9685 + t11280*t9737;
  p_output1[34]=(-1.*t12282*t8159*t8188 + t12270*t9104 + t8159*t8661*(t11553 + t11554 + t11473*t9104 + t11109*t9143) + (t11541 + t11473*t8159*t8188)*t9819)*var2[0] + (t12246*t8727 + t12235*t9104 + (t11522 + t11523 - 1.*t11473*t9104 - 1.*t11109*t9143)*t9783 + (t11509 + t11510 + t11473*t8727 + t11109*t9149)*t9819)*var2[1] + (-1.*t12198*t8159*t8188 + t12167*t8727 + t8159*t8661*(t11490 + t11491 - 1.*t11473*t8727 - 1.*t11109*t9149) + (t11475 - 1.*t11473*t8159*t8188)*t9783)*var2[2];
  p_output1[35]=(-1.*t12282*t7610*t8661 - 1.*t12270*t8159*t8661*t8690 + t8159*t8661*(t11715 + t11717 + t12395 + t12404 + t11109*t8159*t8188*t8690 - 1.*t11591*t8188*t9104) + (t11704 + t11707 + t12376 + t12377 - 1.*t11591*t12319*t8159 - 1.*t11109*t7610*t8188)*t9819)*var2[0] + (-1.*t12246*t8159*t8599*t8661 - 1.*t12235*t8159*t8661*t8690 + (t11659 + t11661 + t12353 + t12354 - 1.*t11109*t8159*t8188*t8690 + t11591*t8188*t9104)*t9783 + (t11635 + t11636 + t12344 + t12345 + t11109*t8159*t8188*t8599 - 1.*t11591*t8188*t8727)*t9819)*var2[1] + (-1.*t12198*t7610*t8661 - 1.*t12167*t8159*t8599*t8661 + t8159*t8661*(t11621 + t11622 + t12334 + t12335 - 1.*t11109*t8159*t8188*t8599 + t11591*t8188*t8727) + (t11592 + t11604 + t12315 + t12317 + t11591*t12319*t8159 + t11109*t7610*t8188)*t9783)*var2[2];
  p_output1[36]=(t10422*t12270 + t8159*t8661*(t11933 + t11934 + t12461 + t12462 + t11765*t9104 + t11109*t9569) + (t11909 - 1.*t11738*t7610*t8159 + t11765*t8159*t8188)*t9819)*var2[0] + (t10422*t12235 + (t11864 + t11865 + t12447 + t12448 - 1.*t11765*t9104 - 1.*t11109*t9569)*t9783 + t12246*t9819 + (t11453 + t11846 + t12279 + t12281 + t12442 + t11765*t8727)*t9819)*var2[1] + (t8159*t8661*(t11400 + t11802 + t12241 + t12244 + t12433 - 1.*t11765*t8727) + (t11760 + t11738*t7610*t8159 - 1.*t11765*t8159*t8188)*t9783 + t12167*t9819)*var2[2];
  p_output1[37]=(t8159*t8661*(t11363 + t12099 + t12226 + t12233 + t12510 + t11974*t9104) + t12270*t9783 + (t12093 - 1.*t11960*t7610*t8159 + t11974*t8159*t8188)*t9819)*var2[0] + (t10632*t12246 + t12235*t9783 + (t11167 + t12066 + t12193 + t12194 + t12497 - 1.*t11974*t9104)*t9783 + (t12046 + t12047 + t12489 + t12490 + t11974*t8727 + t11109*t9715)*t9819)*var2[1] + (t10632*t12167 + t8159*t8661*(t11996 + t12006 + t12479 + t12480 - 1.*t11974*t8727 - 1.*t11109*t9715) + (t11969 + t11960*t7610*t8159 - 1.*t11974*t8159*t8188)*t9783)*var2[2];
  p_output1[38]=t12282*t8159*t8661 + t12270*t9819;
  p_output1[39]=t12246*t9783 + t12235*t9819;
  p_output1[40]=t12198*t8159*t8661 + t12167*t9783;
  p_output1[41]=(t12541*t8159 - 1.*t12531*t7610*t8690 + t8159*(t12376 + t12377 + t11107*t7610 - 1.*t11591*t8159)*t8690 + t7610*(t12395 + t12404 - 1.*t11591*t7610*t8690 - 1.*t11107*t8159*t8690))*var2[0] + (-1.*t12643*t7610*t8599 - 1.*t12698*t7610*t8690 + t8159*(t12344 + t12345 - 1.*t11591*t7610*t8599 - 1.*t11107*t8159*t8599)*t8690 + t8159*t8599*(t12353 + t12354 + t11591*t7610*t8690 + t11107*t8159*t8690))*var2[1] + (t12627*t8159 - 1.*t12589*t7610*t8599 + t8159*(t12315 + t12317 - 1.*t11107*t7610 + t11591*t8159)*t8599 + t7610*(t12334 + t12335 + t11591*t7610*t8599 + t11107*t8159*t8599))*var2[2];
  p_output1[42]=(t12531*t8159*t8949 + t7610*(t12461 + t12462 + t11738*t12711*t8690 + t11749*t8949 - 1.*t11107*t7610*t8949 + t11059*t9504))*var2[0] + (t12643*t8159*t8690 + t8159*(t12279 + t12442 + t12539 + t12540 + t12735 + t11738*t12711*t8599)*t8690 + t12698*t8159*t8949 + t8159*t8599*(t12447 + t12448 + t12729 + t12730 - 1.*t11738*t12711*t8690 + t11107*t7610*t8949))*var2[1] + (t12589*t8159*t8690 + t7610*(t12241 + t12433 + t12641 + t12642 - 1.*t11738*t12711*t8599 - 1.*t11749*t8690))*var2[2];
  p_output1[43]=(t12531*t8159*t8599 + t7610*(t12226 + t12510 + t12695 + t12696 + t11960*t12711*t8690 + t11963*t8949))*var2[0] + (t12698*t8159*t8599 + t8159*t8599*(t12193 + t12497 + t12617 + t12619 + t12765 - 1.*t11960*t12711*t8690) + t12643*t8159*t9504 + t8159*t8690*(t12489 + t12490 + t12778 + t12782 + t11960*t12711*t8599 - 1.*t11107*t7610*t9504))*var2[1] + (t12589*t8159*t9504 + t7610*(t12479 + t12480 - 1.*t11059*t8599 - 1.*t11960*t12711*t8599 - 1.*t11963*t8690 + t11107*t7610*t9504))*var2[2];
  p_output1[44]=t12541*t7610 + t12531*t8159*t8690;
  p_output1[45]=t12643*t8159*t8599 + t12698*t8159*t8690;
  p_output1[46]=t12627*t7610 + t12589*t8159*t8599;
  p_output1[47]=(0.1575*t8690 + 0.2255*t9504)*var2[0] + (t12841*t8949 + (t12539 + t12735 + t11738*t8599 + t11041*t8690)*t8949 + t8690*(t12729 + t12730 - 1.*t11738*t8690 - 1.*t11041*t8949) + t12833*t9504)*var2[1] - 0.068*t8949*var2[2];
  p_output1[48]=(0.2255*t8690 + 0.1575*t9504)*var2[0] + (t12841*t8599 + t12833*t8690 + t8690*(t12619 + t12765 - 1.*t11041*t8599 - 1.*t11960*t8690) + t8949*(t12778 + t12782 + t11960*t8599 + t11041*t9504))*var2[1] - 0.068*t8599*var2[2];
  p_output1[49]=0.1575*t8599 + 0.2255*t8949;
  p_output1[50]=t12841*t8690 + t12833*t8949;
  p_output1[51]=-0.068*t8690;
  p_output1[52]=(-0.325*t8306 - 1.*t11036*t8306 - 1.*t11958*t8306)*var2[0] + (t12907 + t12908 - 1.*t11958*t8469)*var2[2];
  p_output1[53]=t12907 + t12908 - 1.*t11022*t8306;
  p_output1[54]=0.325*t8306 + t11036*t8306 - 1.*t11022*t8469;
  p_output1[55]=-0.0641;
  p_output1[56]=-0.28;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 57, (mwSize) 1, mxREAL);
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
