/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 12:53:46 GMT+01:00
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
  double t25;
  double t96;
  double t337;
  double t391;
  double t428;
  double t448;
  double t511;
  double t543;
  double t513;
  double t527;
  double t553;
  double t98;
  double t473;
  double t533;
  double t563;
  double t564;
  double t446;
  double t647;
  double t648;
  double t726;
  double t844;
  double t187;
  double t1069;
  double t477;
  double t449;
  double t476;
  double t496;
  double t497;
  double t597;
  double t598;
  double t632;
  double t757;
  double t783;
  double t972;
  double t989;
  double t1066;
  double t1104;
  double t1170;
  double t1189;
  double t1209;
  double t1256;
  double t1276;
  double t1289;
  double t184;
  double t1511;
  double t1519;
  double t1522;
  double t1561;
  double t1582;
  double t1597;
  double t1641;
  double t1686;
  double t1744;
  double t1765;
  double t921;
  double t1873;
  double t832;
  double t1457;
  double t1994;
  double t1365;
  double t2142;
  double t2592;
  double t2810;
  double t2634;
  double t2642;
  double t2897;
  double t2908;
  double t2507;
  double t2820;
  double t3341;
  double t3459;
  double t2692;
  double t2976;
  double t2977;
  double t2997;
  double t3122;
  double t3217;
  double t3228;
  double t3387;
  double t3409;
  double t3446;
  double t3487;
  double t3500;
  double t3509;
  double t3745;
  double t3761;
  double t3763;
  double t3846;
  double t3914;
  double t3931;
  double t4047;
  double t3350;
  double t4222;
  double t3952;
  double t4651;
  double t4654;
  double t4657;
  double t4680;
  double t2766;
  double t2815;
  double t2825;
  double t2860;
  double t2911;
  double t2948;
  double t2949;
  double t4937;
  double t4939;
  double t4940;
  double t3293;
  double t3297;
  double t3353;
  double t3359;
  double t3371;
  double t3374;
  double t3379;
  double t3543;
  double t3545;
  double t3571;
  double t3594;
  double t3635;
  double t3705;
  double t3730;
  double t3989;
  double t4947;
  double t4948;
  double t4951;
  double t4129;
  double t4958;
  double t4960;
  double t4962;
  double t4147;
  double t4171;
  double t4967;
  double t4970;
  double t4971;
  double t4223;
  double t4252;
  double t4340;
  double t4507;
  double t4570;
  double t4593;
  double t4613;
  double t4621;
  double t4671;
  double t4678;
  double t4679;
  double t4722;
  double t4748;
  double t4751;
  double t4816;
  double t4817;
  double t4833;
  double t4854;
  double t4865;
  double t4875;
  double t4884;
  double t4885;
  double t4894;
  double t4902;
  double t4928;
  double t4933;
  double t4935;
  double t4946;
  double t4956;
  double t4965;
  double t4975;
  double t4976;
  double t4979;
  double t4980;
  double t4988;
  double t4995;
  double t5001;
  double t5022;
  double t5023;
  double t5025;
  double t5032;
  double t5035;
  double t5036;
  double t5055;
  double t5071;
  double t5072;
  double t4672;
  double t4658;
  double t4666;
  double t5137;
  double t5140;
  double t5144;
  double t5149;
  double t5155;
  double t5156;
  double t5162;
  double t5163;
  double t5164;
  double t5165;
  double t5167;
  double t5169;
  double t5170;
  double t5171;
  double t5173;
  double t5175;
  double t5176;
  double t5183;
  double t5101;
  double t5103;
  double t5109;
  double t5112;
  double t5113;
  double t5122;
  double t5125;
  double t5286;
  double t5295;
  double t5296;
  double t5297;
  double t5302;
  double t5303;
  double t5305;
  double t5310;
  double t5312;
  double t5313;
  double t5315;
  double t5320;
  double t5321;
  double t5327;
  double t5333;
  double t5338;
  double t5341;
  double t5346;
  double t5392;
  double t5679;
  double t5695;
  double t5697;
  double t5700;
  double t5707;
  double t5708;
  double t5712;
  double t5726;
  double t5774;
  double t5784;
  double t5790;
  double t5822;
  double t5833;
  double t5846;
  double t5847;
  double t5851;
  double t5852;
  double t5855;
  double t5858;
  double t5860;
  double t5861;
  double t5864;
  double t5867;
  double t5868;
  double t5870;
  double t6118;
  double t6127;
  double t6129;
  double t6144;
  double t6148;
  double t6159;
  double t6170;
  double t6172;
  double t6173;
  double t6178;
  double t6179;
  double t6182;
  double t6185;
  double t6189;
  double t6190;
  double t6192;
  double t6194;
  double t6196;
  double t6198;
  double t6200;
  double t6202;
  double t5081;
  double t5082;
  double t5087;
  double t5089;
  double t6422;
  double t6423;
  double t6425;
  double t6428;
  double t6429;
  double t6431;
  double t6432;
  double t6434;
  double t6436;
  double t6439;
  double t6459;
  double t6475;
  double t6493;
  double t6549;
  double t6552;
  double t6553;
  double t142;
  double t179;
  double t234;
  double t236;
  double t248;
  double t336;
  double t849;
  double t873;
  double t929;
  double t947;
  double t950;
  double t966;
  double t6602;
  double t6604;
  double t6605;
  double t1381;
  double t1403;
  double t1459;
  double t1460;
  double t1482;
  double t1492;
  double t6598;
  double t6600;
  double t6610;
  double t6611;
  double t1926;
  double t6613;
  double t6614;
  double t6615;
  double t6616;
  double t2007;
  double t6693;
  double t6695;
  double t6697;
  double t6700;
  double t2114;
  double t2215;
  double t2237;
  double t2275;
  double t2523;
  double t2534;
  double t2600;
  double t2610;
  double t2619;
  double t2623;
  double t2638;
  double t2640;
  double t2646;
  double t2648;
  double t2661;
  double t2664;
  double t2686;
  double t2690;
  double t2698;
  double t2702;
  double t2711;
  double t2733;
  double t6748;
  double t6749;
  double t6751;
  double t6752;
  double t6754;
  double t6755;
  double t6761;
  double t6764;
  double t6772;
  double t6773;
  double t6775;
  double t6778;
  double t6981;
  double t6982;
  double t6983;
  double t6985;
  double t7049;
  double t7056;
  double t7091;
  double t7113;
  double t7140;
  double t7151;
  double t7158;
  double t7159;
  double t7160;
  double t7161;
  double t7172;
  double t7177;
  double t7182;
  double t7188;
  double t7211;
  double t7214;
  double t7216;
  double t7219;
  double t7221;
  double t7223;
  double t7225;
  double t7226;
  double t7229;
  double t7233;
  double t7234;
  double t7237;
  double t7239;
  double t7241;
  double t7243;
  double t7258;
  double t7269;
  double t7546;
  double t7551;
  double t7552;
  double t7562;
  double t7567;
  double t7576;
  double t7577;
  double t7579;
  double t7580;
  double t7581;
  double t7585;
  double t7587;
  double t7590;
  double t7595;
  double t7599;
  double t7600;
  double t7714;
  double t7716;
  double t7718;
  double t7711;
  double t7713;
  double t7720;
  double t7721;
  double t7723;
  double t7725;
  double t7726;
  double t7727;
  double t7729;
  double t7731;
  double t7732;
  double t7733;
  double t7787;
  double t7789;
  double t7791;
  double t7798;
  double t7800;
  double t7802;
  double t7803;
  double t7804;
  double t7807;
  double t7810;
  double t7812;
  double t7817;
  t25 = Cos(var1[17]);
  t96 = Sin(var1[17]);
  t337 = Cos(var1[16]);
  t391 = -1.*t337;
  t428 = 1. + t391;
  t448 = Sin(var1[16]);
  t511 = Cos(var1[4]);
  t543 = Cos(var1[15]);
  t513 = Cos(var1[5]);
  t527 = Sin(var1[15]);
  t553 = Sin(var1[5]);
  t98 = 2.8e-11*t96;
  t473 = Sin(var1[4]);
  t533 = -1.*t511*t513*t527;
  t563 = -1.*t543*t511*t553;
  t564 = t533 + t563;
  t446 = -2.8e-11*t428;
  t647 = t543*t511*t513;
  t648 = -1.*t511*t527*t553;
  t726 = t647 + t648;
  t844 = -4.e-6*t96;
  t187 = 7.e-6*t96;
  t1069 = 4.e-6*t428;
  t477 = -7.e-6*t428;
  t449 = t446 + t448;
  t476 = t449*t473;
  t496 = -4.e-6*t448;
  t497 = t477 + t496;
  t597 = t497*t564;
  t598 = -1.000000000016*t428;
  t632 = 1. + t598;
  t757 = t632*t726;
  t783 = t476 + t597 + t757;
  t972 = -1.000000000049*t428;
  t989 = 1. + t972;
  t1066 = t989*t473;
  t1104 = -7.e-6*t448;
  t1170 = t1069 + t1104;
  t1189 = t1170*t564;
  t1209 = -1.*t448;
  t1256 = t446 + t1209;
  t1276 = t1256*t726;
  t1289 = t1066 + t1189 + t1276;
  t184 = -4.e-6*t25;
  t1511 = 7.e-6*t448;
  t1519 = t1069 + t1511;
  t1522 = t1519*t473;
  t1561 = -6.5e-11*t428;
  t1582 = 1. + t1561;
  t1597 = t1582*t564;
  t1641 = 4.e-6*t448;
  t1686 = t477 + t1641;
  t1744 = t1686*t726;
  t1765 = t1522 + t1597 + t1744;
  t921 = -1.*t25;
  t1873 = -2.8e-11*t96;
  t832 = -7.e-6*t25;
  t1457 = 4.e-6*t25;
  t1994 = -7.e-6*t96;
  t1365 = 7.e-6*t25;
  t2142 = 4.e-6*t96;
  t2592 = 2.8e-11*t448;
  t2810 = 1. + t921;
  t2634 = 7.e-6*t337;
  t2642 = 4.e-6*t337;
  t2897 = -1. + t25;
  t2908 = 4.e-6*t2897;
  t2507 = -7.e-6*t337;
  t2820 = 7.e-6*t2810;
  t3341 = 2.8e-11*t2810;
  t3459 = -2.8e-11*t448;
  t2692 = -4.e-6*t337;
  t2976 = t2634 + t1641;
  t2977 = t2976*t473;
  t2997 = -6.5e-11*t448*t564;
  t3122 = t2642 + t1104;
  t3217 = t3122*t726;
  t3228 = t2977 + t2997 + t3217;
  t3387 = -1.000000000049*t448*t473;
  t3409 = t2507 + t1641;
  t3446 = t3409*t564;
  t3487 = t391 + t3459;
  t3500 = t3487*t726;
  t3509 = t3387 + t3446 + t3500;
  t3745 = t337 + t3459;
  t3761 = t3745*t473;
  t3763 = t2692 + t1104;
  t3846 = t3763*t564;
  t3914 = -1.000000000016*t448*t726;
  t3931 = t3761 + t3846 + t3914;
  t4047 = -2.8e-11*t2810;
  t3350 = -1.*t96;
  t4222 = 4.e-6*t2810;
  t3952 = -7.e-6*t2810;
  t4651 = -1.*t543;
  t4654 = 1. + t4651;
  t4657 = -0.15121*t4654;
  t4680 = 7.e-6*t428;
  t2766 = 2.826290000000002e-7*var1[17];
  t2815 = -2.18904205e-16*t2810;
  t2825 = t2820 + t2142;
  t2860 = -0.5031510000080001*t2825;
  t2911 = t2908 + t187;
  t2948 = -0.038575000014*t2911;
  t2949 = t2766 + t2815 + t2860 + t2948;
  t4937 = -1.*t543*t511*t513;
  t4939 = t511*t527*t553;
  t4940 = t4937 + t4939;
  t3293 = 1.1305160000000008e-12*var1[17];
  t3297 = -0.03857500001589017*t2810;
  t3353 = t3341 + t3350;
  t3359 = -0.5031510000080001*t3353;
  t3371 = t2908 + t1994;
  t3374 = -3.367757e-6*t3371;
  t3379 = t3293 + t3297 + t3359 + t3374;
  t3543 = -1.9784030000000015e-12*var1[17];
  t3545 = -0.5031510000160505*t2810;
  t3571 = t2820 + t844;
  t3594 = -3.367757e-6*t3571;
  t3635 = t3341 + t96;
  t3705 = -0.038575000014*t3635;
  t3730 = t3543 + t3545 + t3594 + t3705;
  t3989 = t3952 + t844;
  t4947 = t1686*t564;
  t4948 = t1582*t4940;
  t4951 = t4947 + t4948;
  t4129 = t4047 + t96;
  t4958 = t1256*t564;
  t4960 = t1170*t4940;
  t4962 = t4958 + t4960;
  t4147 = -1.000000000016*t2810;
  t4171 = 1. + t4147;
  t4967 = t632*t564;
  t4970 = t497*t4940;
  t4971 = t4967 + t4970;
  t4223 = t4222 + t1994;
  t4252 = -1.000000000049*t2810;
  t4340 = 1. + t4252;
  t4507 = t4047 + t3350;
  t4570 = -6.5e-11*t2810;
  t4593 = 1. + t4570;
  t4613 = t4222 + t187;
  t4621 = t3952 + t2142;
  t4671 = -0.15121*t527;
  t4678 = -2.7726089999999997e-12*var1[16];
  t4679 = -0.2812110000084994*t428;
  t4722 = t4680 + t496;
  t4748 = -1.8134809999999998e-6*t4722;
  t4751 = 2.8e-11*t428;
  t4816 = t4751 + t448;
  t4817 = -0.038749000006999997*t4816;
  t4833 = t4678 + t4679 + t4748 + t4817;
  t4854 = t4833*t564;
  t4865 = 3.9608699999999997e-7*var1[16];
  t4875 = -1.1787626499999999e-16*t428;
  t4884 = t4680 + t1641;
  t4885 = -0.281211000004*t4884;
  t4894 = -1. + t337;
  t4902 = 4.e-6*t4894;
  t4928 = t4902 + t1511;
  t4933 = -0.038749000006999997*t4928;
  t4935 = t4865 + t4875 + t4885 + t4933;
  t4946 = t4935*t4940;
  t4956 = t2949*t4951;
  t4965 = t3379*t4962;
  t4975 = t3730*t4971;
  t4976 = t3989*t4951;
  t4979 = t4129*t4962;
  t4980 = t4171*t4971;
  t4988 = t4976 + t4979 + t4980;
  t4995 = -0.80315*t4988;
  t5001 = t4223*t4951;
  t5022 = t4340*t4962;
  t5023 = t4507*t4971;
  t5025 = t5001 + t5022 + t5023;
  t5032 = -0.038576*t5025;
  t5035 = t4593*t4951;
  t5036 = t4613*t4962;
  t5055 = t4621*t4971;
  t5071 = t5035 + t5036 + t5055;
  t5072 = -0.148715*t5071;
  t4672 = t4657 + t4671;
  t4658 = 0.15121*t527;
  t4666 = t4657 + t4658;
  t5137 = t513*t527*t473;
  t5140 = t543*t473*t553;
  t5144 = t5137 + t5140;
  t5149 = -1.*t543*t513*t473;
  t5155 = t527*t473*t553;
  t5156 = t5149 + t5155;
  t5162 = t511*t449;
  t5163 = t497*t5144;
  t5164 = t632*t5156;
  t5165 = t5162 + t5163 + t5164;
  t5167 = t989*t511;
  t5169 = t1170*t5144;
  t5170 = t1256*t5156;
  t5171 = t5167 + t5169 + t5170;
  t5173 = t511*t1519;
  t5175 = t1582*t5144;
  t5176 = t1686*t5156;
  t5183 = t5173 + t5175 + t5176;
  t5101 = 1.5843479999999999e-12*var1[16];
  t5103 = -0.03874900000889869*t428;
  t5109 = t4751 + t1209;
  t5112 = -0.281211000004*t5109;
  t5113 = t4902 + t1104;
  t5122 = -1.8134809999999998e-6*t5113;
  t5125 = t5101 + t5103 + t5112 + t5122;
  t5286 = Sin(var1[3]);
  t5295 = -1.*t511*t513*t527*t5286;
  t5296 = -1.*t543*t511*t5286*t553;
  t5297 = t5295 + t5296;
  t5302 = t543*t511*t513*t5286;
  t5303 = -1.*t511*t527*t5286*t553;
  t5305 = t5302 + t5303;
  t5310 = t449*t5286*t473;
  t5312 = t497*t5297;
  t5313 = t632*t5305;
  t5315 = t5310 + t5312 + t5313;
  t5320 = t989*t5286*t473;
  t5321 = t1170*t5297;
  t5327 = t1256*t5305;
  t5333 = t5320 + t5321 + t5327;
  t5338 = t1519*t5286*t473;
  t5341 = t1582*t5297;
  t5346 = t1686*t5305;
  t5392 = t5338 + t5341 + t5346;
  t5679 = Cos(var1[3]);
  t5695 = t5679*t513*t473;
  t5697 = -1.*t5286*t553;
  t5700 = t5695 + t5697;
  t5707 = -1.*t513*t5286;
  t5708 = -1.*t5679*t473*t553;
  t5712 = t5707 + t5708;
  t5726 = -1.*t527*t5700;
  t5774 = t543*t5712;
  t5784 = t5726 + t5774;
  t5790 = t543*t5700;
  t5822 = t527*t5712;
  t5833 = t5790 + t5822;
  t5846 = -1.*t5679*t511*t449;
  t5847 = t497*t5784;
  t5851 = t632*t5833;
  t5852 = t5846 + t5847 + t5851;
  t5855 = -1.*t989*t5679*t511;
  t5858 = t1170*t5784;
  t5860 = t1256*t5833;
  t5861 = t5855 + t5858 + t5860;
  t5864 = -1.*t5679*t511*t1519;
  t5867 = t1582*t5784;
  t5868 = t1686*t5833;
  t5870 = t5864 + t5867 + t5868;
  t6118 = -1.*t513*t5286*t473;
  t6127 = -1.*t5679*t553;
  t6129 = t6118 + t6127;
  t6144 = t5679*t513;
  t6148 = -1.*t5286*t473*t553;
  t6159 = t6144 + t6148;
  t6170 = t527*t6129;
  t6172 = t543*t6159;
  t6173 = t6170 + t6172;
  t6178 = t543*t6129;
  t6179 = -1.*t527*t6159;
  t6182 = t6178 + t6179;
  t6185 = t1686*t6173;
  t6189 = t1582*t6182;
  t6190 = t6185 + t6189;
  t6192 = t1256*t6173;
  t6194 = t1170*t6182;
  t6196 = t6192 + t6194;
  t6198 = t632*t6173;
  t6200 = t497*t6182;
  t6202 = t6198 + t6200;
  t5081 = -0.15121*t543;
  t5082 = t5081 + t4671;
  t5087 = 0.15121*t543;
  t5089 = t5087 + t4671;
  t6422 = t513*t5286*t473;
  t6423 = t5679*t553;
  t6425 = t6422 + t6423;
  t6428 = -1.*t527*t6425;
  t6429 = t6428 + t6172;
  t6431 = -1.*t543*t6425;
  t6432 = t6431 + t6179;
  t6434 = t1686*t6429;
  t6436 = t1582*t6432;
  t6439 = t6434 + t6436;
  t6459 = t1256*t6429;
  t6475 = t1170*t6432;
  t6493 = t6459 + t6475;
  t6549 = t632*t6429;
  t6552 = t497*t6432;
  t6553 = t6549 + t6552;
  t142 = t25 + t98;
  t179 = -0.038575000014*t142;
  t234 = t184 + t187;
  t236 = -3.367757e-6*t234;
  t248 = -0.5031510000160505*t96;
  t336 = -1.9784030000000015e-12 + t179 + t236 + t248;
  t849 = t832 + t844;
  t873 = -3.367757e-6*t849;
  t929 = t921 + t98;
  t947 = -0.5031510000080001*t929;
  t950 = -0.03857500001589017*t96;
  t966 = 1.1305160000000008e-12 + t873 + t947 + t950;
  t6602 = t543*t6425;
  t6604 = t527*t6159;
  t6605 = t6602 + t6604;
  t1381 = t1365 + t844;
  t1403 = -0.038575000014*t1381;
  t1459 = t1457 + t187;
  t1460 = -0.5031510000080001*t1459;
  t1482 = -2.18904205e-16*t96;
  t1492 = 2.826290000000002e-7 + t1403 + t1460 + t1482;
  t6598 = -1.*t511*t449*t5286;
  t6600 = t497*t6429;
  t6610 = t632*t6605;
  t6611 = t6598 + t6600 + t6610;
  t1926 = t25 + t1873;
  t6613 = -1.*t989*t511*t5286;
  t6614 = t1170*t6429;
  t6615 = t1256*t6605;
  t6616 = t6613 + t6614 + t6615;
  t2007 = t184 + t1994;
  t6693 = -1.*t511*t1519*t5286;
  t6695 = t1582*t6429;
  t6697 = t1686*t6605;
  t6700 = t6693 + t6695 + t6697;
  t2114 = t921 + t1873;
  t2215 = t832 + t2142;
  t2237 = t1457 + t1994;
  t2275 = t1365 + t2142;
  t2523 = t2507 + t496;
  t2534 = -1.8134809999999998e-6*t2523;
  t2600 = t391 + t2592;
  t2610 = -0.281211000004*t2600;
  t2619 = -0.03874900000889869*t448;
  t2623 = 1.5843479999999999e-12 + t2534 + t2610 + t2619;
  t2638 = t2634 + t496;
  t2640 = -0.038749000006999997*t2638;
  t2646 = t2642 + t1511;
  t2648 = -0.281211000004*t2646;
  t2661 = -1.1787626499999999e-16*t448;
  t2664 = 3.9608699999999997e-7 + t2640 + t2648 + t2661;
  t2686 = t337 + t2592;
  t2690 = -0.038749000006999997*t2686;
  t2698 = t2692 + t1511;
  t2702 = -1.8134809999999998e-6*t2698;
  t2711 = -0.2812110000084994*t448;
  t2733 = -2.7726089999999997e-12 + t2690 + t2702 + t2711;
  t6748 = -1.*t511*t2976*t5286;
  t6749 = -6.5e-11*t448*t6429;
  t6751 = t3122*t6605;
  t6752 = t6748 + t6749 + t6751;
  t6754 = 1.000000000049*t511*t448*t5286;
  t6755 = t3409*t6429;
  t6761 = t3487*t6605;
  t6764 = t6754 + t6755 + t6761;
  t6772 = -1.*t511*t3745*t5286;
  t6773 = t3763*t6429;
  t6775 = -1.000000000016*t448*t6605;
  t6778 = t6772 + t6773 + t6775;
  t6981 = t5679*t511*t513*t527;
  t6982 = t543*t5679*t511*t553;
  t6983 = t6981 + t6982;
  t6985 = -1.*t543*t5679*t511*t513;
  t7049 = t5679*t511*t527*t553;
  t7056 = t6985 + t7049;
  t7091 = -1.*t5679*t449*t473;
  t7113 = t497*t6983;
  t7140 = t632*t7056;
  t7151 = t7091 + t7113 + t7140;
  t7158 = -1.*t989*t5679*t473;
  t7159 = t1170*t6983;
  t7160 = t1256*t7056;
  t7161 = t7158 + t7159 + t7160;
  t7172 = -1.*t5679*t1519*t473;
  t7177 = t1582*t6983;
  t7182 = t1686*t7056;
  t7188 = t7172 + t7177 + t7182;
  t7211 = t513*t5286;
  t7214 = t5679*t473*t553;
  t7216 = t7211 + t7214;
  t7219 = t527*t5700;
  t7221 = t543*t7216;
  t7223 = t7219 + t7221;
  t7225 = -1.*t527*t7216;
  t7226 = t5790 + t7225;
  t7229 = t1686*t7223;
  t7233 = t1582*t7226;
  t7234 = t7229 + t7233;
  t7237 = t1256*t7223;
  t7239 = t1170*t7226;
  t7241 = t7237 + t7239;
  t7243 = t632*t7223;
  t7258 = t497*t7226;
  t7269 = t7243 + t7258;
  t7546 = -1.*t5679*t513*t473;
  t7551 = t5286*t553;
  t7552 = t7546 + t7551;
  t7562 = -1.*t527*t7552;
  t7567 = t7562 + t7221;
  t7576 = -1.*t543*t7552;
  t7577 = t7576 + t7225;
  t7579 = t1686*t7567;
  t7580 = t1582*t7577;
  t7581 = t7579 + t7580;
  t7585 = t1256*t7567;
  t7587 = t1170*t7577;
  t7590 = t7585 + t7587;
  t7595 = t632*t7567;
  t7599 = t497*t7577;
  t7600 = t7595 + t7599;
  t7714 = t543*t7552;
  t7716 = t527*t7216;
  t7718 = t7714 + t7716;
  t7711 = t5679*t511*t449;
  t7713 = t497*t7567;
  t7720 = t632*t7718;
  t7721 = t7711 + t7713 + t7720;
  t7723 = t989*t5679*t511;
  t7725 = t1170*t7567;
  t7726 = t1256*t7718;
  t7727 = t7723 + t7725 + t7726;
  t7729 = t5679*t511*t1519;
  t7731 = t1582*t7567;
  t7732 = t1686*t7718;
  t7733 = t7729 + t7731 + t7732;
  t7787 = t5679*t511*t2976;
  t7789 = -6.5e-11*t448*t7567;
  t7791 = t3122*t7718;
  t7798 = t7787 + t7789 + t7791;
  t7800 = -1.000000000049*t5679*t511*t448;
  t7802 = t3409*t7567;
  t7803 = t3487*t7718;
  t7804 = t7800 + t7802 + t7803;
  t7807 = t5679*t511*t3745;
  t7810 = t3763*t7567;
  t7812 = -1.000000000016*t448*t7718;
  t7817 = t7807 + t7810 + t7812;
  p_output1[0]=var2[0] + (t511*t5125 - 1.*t4672*t473*t513 + t4935*t5144 + t4833*t5156 + t3730*t5165 + t3379*t5171 + t2949*t5183 - 0.80315*(t4171*t5165 + t4129*t5171 + t3989*t5183) - 0.038576*(t4507*t5165 + t4340*t5171 + t4223*t5183) - 0.148715*(t4621*t5165 + t4613*t5171 + t4593*t5183) + t4666*t473*t553)*var2[4] + (t4854 + t4946 + t4956 + t4965 + t4975 + t4995 + t5032 + t5072 - 1.*t4666*t511*t513 - 1.*t4672*t511*t553)*var2[5] + (t4854 + t4946 + t4956 + t4965 + t4975 + t4995 + t5032 + t5072 + t5082*t511*t513 - 1.*t5089*t511*t553)*var2[15] + (t2949*t3228 + t3379*t3509 + t3730*t3931 - 0.80315*(t3228*t3989 + t3509*t4129 + t3931*t4171) - 0.038576*(t3228*t4223 + t3509*t4340 + t3931*t4507) - 0.148715*(t3228*t4593 + t3509*t4613 + t3931*t4621) + t2623*t473 + t2664*t564 + t2733*t726)*var2[16] + (t1492*t1765 + t336*t783 - 0.038576*(t1765*t2215 + t2114*t783 - 1.000000000049*t1289*t96) - 0.148715*(t1289*t2275 + t2237*t783 - 6.5e-11*t1765*t96) - 0.80315*(t1289*t1926 + t1765*t2007 - 1.000000000016*t783*t96) + t1289*t966)*var2[17];
  p_output1[1]=var2[1] + (-1.*t511*t5125*t5679 + t4672*t5700 + t4666*t5712 + t4935*t5784 + t4833*t5833 + t3730*t5852 + t3379*t5861 + t2949*t5870 - 0.80315*(t4171*t5852 + t4129*t5861 + t3989*t5870) - 0.038576*(t4507*t5852 + t4340*t5861 + t4223*t5870) - 0.148715*(t4621*t5852 + t4613*t5861 + t4593*t5870))*var2[3] + (t473*t5125*t5286 + t4672*t511*t513*t5286 + t4935*t5297 + t4833*t5305 + t3730*t5315 + t3379*t5333 + t2949*t5392 - 0.80315*(t4171*t5315 + t4129*t5333 + t3989*t5392) - 0.038576*(t4507*t5315 + t4340*t5333 + t4223*t5392) - 0.148715*(t4621*t5315 + t4613*t5333 + t4593*t5392) - 1.*t4666*t511*t5286*t553)*var2[4] + (t4666*t6129 + t4672*t6159 + t4833*t6173 + t4935*t6182 + t2949*t6190 + t3379*t6196 + t3730*t6202 - 0.80315*(t3989*t6190 + t4129*t6196 + t4171*t6202) - 0.038576*(t4223*t6190 + t4340*t6196 + t4507*t6202) - 0.148715*(t4593*t6190 + t4613*t6196 + t4621*t6202))*var2[5] + (t5089*t6159 + t5082*t6425 + t4833*t6429 + t4935*t6432 + t2949*t6439 + t3379*t6493 + t3730*t6553 - 0.80315*(t3989*t6439 + t4129*t6493 + t4171*t6553) - 0.038576*(t4223*t6439 + t4340*t6493 + t4507*t6553) - 0.148715*(t4593*t6439 + t4613*t6493 + t4621*t6553))*var2[15] + (-1.*t2623*t511*t5286 + t2664*t6429 + t2733*t6605 + t2949*t6752 + t3379*t6764 + t3730*t6778 - 0.80315*(t3989*t6752 + t4129*t6764 + t4171*t6778) - 0.038576*(t4223*t6752 + t4340*t6764 + t4507*t6778) - 0.148715*(t4593*t6752 + t4613*t6764 + t4621*t6778))*var2[16] + (t336*t6611 + t1492*t6700 - 0.80315*(t1926*t6616 + t2007*t6700 - 1.000000000016*t6611*t96) - 0.038576*(t2114*t6611 + t2215*t6700 - 1.000000000049*t6616*t96) - 0.148715*(t2237*t6611 + t2275*t6616 - 6.5e-11*t6700*t96) + t6616*t966)*var2[17];
  p_output1[2]=var2[2] + (-1.*t511*t5125*t5286 + t4666*t6159 + t4672*t6425 + t4935*t6429 + t4833*t6605 + t3730*t6611 + t3379*t6616 + t2949*t6700 - 0.80315*(t4171*t6611 + t4129*t6616 + t3989*t6700) - 0.038576*(t4507*t6611 + t4340*t6616 + t4223*t6700) - 0.148715*(t4621*t6611 + t4613*t6616 + t4593*t6700))*var2[3] + (-1.*t473*t5125*t5679 - 1.*t4672*t511*t513*t5679 + t4666*t511*t553*t5679 + t4935*t6983 + t4833*t7056 + t3730*t7151 + t3379*t7161 + t2949*t7188 - 0.80315*(t4171*t7151 + t4129*t7161 + t3989*t7188) - 0.038576*(t4507*t7151 + t4340*t7161 + t4223*t7188) - 0.148715*(t4621*t7151 + t4613*t7161 + t4593*t7188))*var2[4] + (t4666*t5700 + t4672*t7216 + t4833*t7223 + t4935*t7226 + t2949*t7234 + t3379*t7241 + t3730*t7269 - 0.80315*(t3989*t7234 + t4129*t7241 + t4171*t7269) - 0.038576*(t4223*t7234 + t4340*t7241 + t4507*t7269) - 0.148715*(t4593*t7234 + t4613*t7241 + t4621*t7269))*var2[5] + (t5089*t7216 + t5082*t7552 + t4833*t7567 + t4935*t7577 + t2949*t7581 + t3379*t7590 + t3730*t7600 - 0.80315*(t3989*t7581 + t4129*t7590 + t4171*t7600) - 0.038576*(t4223*t7581 + t4340*t7590 + t4507*t7600) - 0.148715*(t4593*t7581 + t4613*t7590 + t4621*t7600))*var2[15] + (t2623*t511*t5679 + t2664*t7567 + t2733*t7718 + t2949*t7798 + t3379*t7804 + t3730*t7817 - 0.80315*(t3989*t7798 + t4129*t7804 + t4171*t7817) - 0.038576*(t4223*t7798 + t4340*t7804 + t4507*t7817) - 0.148715*(t4593*t7798 + t4613*t7804 + t4621*t7817))*var2[16] + (t336*t7721 + t1492*t7733 - 0.80315*(t1926*t7727 + t2007*t7733 - 1.000000000016*t7721*t96) - 0.038576*(t2114*t7721 + t2215*t7733 - 1.000000000049*t7727*t96) - 0.148715*(t2237*t7721 + t2275*t7727 - 6.5e-11*t7733*t96) + t7727*t966)*var2[17];
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
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "impact_velocity_RrFootTrotStance1.hh"

namespace TrotStance1
{

void impact_velocity_RrFootTrotStance1_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
