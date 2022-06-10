/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:03:38 GMT+02:00
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
  double t701;
  double t743;
  double t928;
  double t1305;
  double t1480;
  double t1485;
  double t1501;
  double t1562;
  double t417;
  double t418;
  double t1596;
  double t1695;
  double t1545;
  double t1625;
  double t1637;
  double t385;
  double t1729;
  double t1750;
  double t1773;
  double t1788;
  double t1790;
  double t1820;
  double t1850;
  double t1902;
  double t1921;
  double t1929;
  double t1954;
  double t2046;
  double t2455;
  double t2531;
  double t2558;
  double t2594;
  double t2608;
  double t2689;
  double t2694;
  double t2697;
  double t2699;
  double t2706;
  double t2716;
  double t2733;
  double t2743;
  double t2768;
  double t2774;
  double t2779;
  double t2788;
  double t2909;
  double t2946;
  double t2947;
  double t3112;
  double t3114;
  double t3146;
  double t3163;
  double t3167;
  double t3191;
  double t3193;
  double t3209;
  double t3215;
  double t3230;
  double t3245;
  double t3247;
  double t3252;
  double t3080;
  double t3173;
  double t3174;
  double t3183;
  double t3208;
  double t3255;
  double t3257;
  double t3262;
  double t3266;
  double t3270;
  double t3274;
  double t3275;
  double t3290;
  double t3291;
  double t3305;
  double t3374;
  double t3376;
  double t3383;
  double t3187;
  double t3306;
  double t3349;
  double t3495;
  double t3501;
  double t3533;
  double t3025;
  double t3048;
  double t3078;
  double t3454;
  double t3462;
  double t3477;
  double t3591;
  double t3593;
  double t3598;
  double t3781;
  double t3783;
  double t3798;
  double t4691;
  double t4697;
  double t4700;
  double t3488;
  double t4870;
  double t4875;
  double t4881;
  double t3668;
  double t5015;
  double t5017;
  double t5027;
  double t3493;
  double t3551;
  double t3563;
  double t4896;
  double t4898;
  double t4904;
  double t4909;
  double t4915;
  double t5003;
  double t5030;
  double t3697;
  double t3724;
  double t3736;
  double t3866;
  double t4017;
  double t5333;
  double t5371;
  double t5483;
  double t5495;
  double t3880;
  double t3907;
  double t3910;
  double t4027;
  double t4029;
  double t4072;
  double t4344;
  double t4453;
  double t4366;
  double t4383;
  double t4385;
  double t5106;
  double t5121;
  double t6118;
  double t6122;
  double t6149;
  double t6181;
  double t4463;
  double t4503;
  double t4552;
  double t4706;
  double t4724;
  double t4734;
  double t4739;
  double t4743;
  double t4744;
  double t4748;
  double t4753;
  double t4774;
  double t4806;
  double t4847;
  double t4851;
  double t6376;
  double t6390;
  double t6392;
  double t6368;
  double t4932;
  double t6457;
  double t6462;
  double t6468;
  double t6474;
  double t6475;
  double t6491;
  double t5029;
  double t5051;
  double t5052;
  double t5057;
  double t5063;
  double t5099;
  double t6526;
  double t5133;
  double t5135;
  double t6550;
  double t5185;
  double t5190;
  double t5199;
  double t5213;
  double t5216;
  double t5218;
  double t5221;
  double t5236;
  double t5239;
  double t5245;
  double t5259;
  double t5278;
  double t5368;
  double t5421;
  double t5442;
  double t5451;
  double t5452;
  double t5494;
  double t5551;
  double t5558;
  double t5563;
  double t5564;
  double t6827;
  double t5666;
  double t5667;
  double t6848;
  double t5734;
  double t5740;
  double t5771;
  double t5780;
  double t5895;
  double t5913;
  double t5927;
  double t5940;
  double t5944;
  double t5969;
  double t6007;
  double t6030;
  double t6047;
  double t6056;
  double t6068;
  double t6093;
  double t6127;
  double t6170;
  double t6200;
  double t6209;
  double t6210;
  double t6217;
  double t6224;
  double t6949;
  double t6235;
  double t6237;
  double t6959;
  double t6301;
  double t6302;
  double t6318;
  double t7056;
  double t7060;
  double t7065;
  double t7067;
  double t7070;
  double t7078;
  double t7084;
  double t7099;
  double t7103;
  double t7131;
  double t7132;
  double t7134;
  double t7196;
  double t7203;
  double t7214;
  double t7229;
  double t7231;
  double t7232;
  double t7217;
  double t7263;
  double t7267;
  double t7306;
  double t7344;
  double t7359;
  double t7402;
  double t7420;
  double t7424;
  double t7438;
  double t7444;
  double t7448;
  double t7636;
  double t7645;
  double t7870;
  double t7909;
  double t7778;
  double t7066;
  double t7079;
  double t7081;
  double t8067;
  double t8076;
  double t8102;
  double t2012;
  double t2016;
  double t2017;
  double t8313;
  double t8355;
  double t8360;
  double t7042;
  double t7044;
  double t7046;
  double t2848;
  double t2854;
  double t2866;
  double t8503;
  double t8506;
  double t8520;
  double t8524;
  double t8533;
  double t8542;
  double t8545;
  double t8549;
  double t8551;
  double t8562;
  double t8566;
  double t8567;
  double t8543;
  double t8586;
  double t8592;
  double t8629;
  double t8640;
  double t8652;
  double t8611;
  double t8622;
  double t8683;
  double t8688;
  double t8690;
  double t8702;
  double t8708;
  double t8728;
  double t8743;
  double t8768;
  double t8792;
  double t7611;
  double t7627;
  double t7685;
  double t7691;
  double t7747;
  double t7838;
  double t7858;
  double t7864;
  double t8962;
  double t8987;
  double t8052;
  double t8054;
  double t8059;
  double t9133;
  double t9210;
  double t9226;
  double t8848;
  double t8883;
  double t8893;
  double t8214;
  double t8246;
  double t8260;
  double t8270;
  double t8277;
  double t8278;
  double t8295;
  double t9510;
  double t9580;
  t701 = Cos(var1[13]);
  t743 = Cos(var1[14]);
  t928 = t701*t743;
  t1305 = Sin(var1[13]);
  t1480 = Sin(var1[14]);
  t1485 = t1305*t1480;
  t1501 = t928 + t1485;
  t1562 = Cos(var1[12]);
  t417 = Cos(var1[5]);
  t418 = Sin(var1[12]);
  t1596 = Sin(var1[5]);
  t1695 = Cos(var1[3]);
  t1545 = t417*t418*t1501;
  t1625 = t1562*t1501*t1596;
  t1637 = t1545 + t1625;
  t385 = Sin(var1[3]);
  t1729 = Cos(var1[4]);
  t1750 = -1.*t743*t1305;
  t1773 = t701*t1480;
  t1788 = t1750 + t1773;
  t1790 = t1729*t1788;
  t1820 = Sin(var1[4]);
  t1850 = t1562*t417*t1501;
  t1902 = -1.*t418*t1501*t1596;
  t1921 = t1850 + t1902;
  t1929 = -1.*t1820*t1921;
  t1954 = t1790 + t1929;
  t2046 = -1.*t417*t418;
  t2455 = -1.*t1562*t1596;
  t2531 = t2046 + t2455;
  t2558 = t1562*t417;
  t2594 = -1.*t418*t1596;
  t2608 = t2558 + t2594;
  t2689 = t743*t1305;
  t2694 = -1.*t701*t1480;
  t2697 = t2689 + t2694;
  t2699 = t417*t418*t2697;
  t2706 = t1562*t2697*t1596;
  t2716 = t2699 + t2706;
  t2733 = t1729*t1501;
  t2743 = t1562*t417*t2697;
  t2768 = -1.*t418*t2697*t1596;
  t2774 = t2743 + t2768;
  t2779 = -1.*t1820*t2774;
  t2788 = t2733 + t2779;
  t2909 = -1.*t1788*t1820;
  t2946 = -1.*t1729*t1921;
  t2947 = t2909 + t2946;
  t3112 = -1.*t743;
  t3114 = 1. + t3112;
  t3146 = 0.50321*t3114;
  t3163 = 0.19821*t743;
  t3167 = t3146 + t3163;
  t3191 = -1.*t1562;
  t3193 = 1. + t3191;
  t3209 = -1.*t701;
  t3215 = 1. + t3209;
  t3230 = 0.28121*t3215;
  t3245 = t701*t3167;
  t3247 = -0.305*t1305*t1480;
  t3252 = t3230 + t3245 + t3247;
  t3080 = 0.28121*t1305;
  t3173 = -1.*t3167*t1305;
  t3174 = -0.305*t701*t1480;
  t3183 = t3080 + t3173 + t3174;
  t3208 = 0.15121*t3193;
  t3255 = t1562*t3252;
  t3257 = t3208 + t3255;
  t3262 = t417*t3257;
  t3266 = -0.15121*t3193;
  t3270 = -0.15121*t1562;
  t3274 = -0.15121*t418;
  t3275 = t418*t3252;
  t3290 = t3266 + t3270 + t3274 + t3275;
  t3291 = -1.*t3290*t1596;
  t3305 = t3262 + t3291;
  t3374 = t3183*t1820;
  t3376 = t1729*t3305;
  t3383 = t3374 + t3376;
  t3187 = -1.*t3183*t1820;
  t3306 = -1.*t1729*t3305;
  t3349 = t3187 + t3306;
  t3495 = t1729*t3183;
  t3501 = -1.*t1820*t3305;
  t3533 = t3495 + t3501;
  t3025 = t1501*t1820;
  t3048 = t1729*t2774;
  t3078 = t3025 + t3048;
  t3454 = t417*t3290;
  t3462 = t3257*t1596;
  t3477 = t3454 + t3462;
  t3591 = -1.*t1501*t1820;
  t3593 = -1.*t1729*t2774;
  t3598 = t3591 + t3593;
  t3781 = t1788*t1820;
  t3783 = t1729*t1921;
  t3798 = t3781 + t3783;
  t4691 = -1.*t417*t418*t1501;
  t4697 = -1.*t1562*t1501*t1596;
  t4700 = t4691 + t4697;
  t3488 = -1.*t2608*t3477;
  t4870 = -1.*t417*t3290;
  t4875 = -1.*t3257*t1596;
  t4881 = t4870 + t4875;
  t3668 = t2716*t3477;
  t5015 = -1.*t417*t418*t2697;
  t5017 = -1.*t1562*t2697*t1596;
  t5027 = t5015 + t5017;
  t3493 = -1.*t1729*t2531*t3383;
  t3551 = t1820*t2531*t3533;
  t3563 = t3488 + t3493 + t3551;
  t4896 = -1.*t2531*t3477;
  t4898 = -1.*t2608*t3305;
  t4904 = -1.*t1562*t417;
  t4909 = t418*t1596;
  t4915 = t4904 + t4909;
  t5003 = t2774*t3477;
  t5030 = t2716*t3305;
  t3697 = t3078*t3383;
  t3724 = t2788*t3533;
  t3736 = t3668 + t3697 + t3724;
  t3866 = -1.*t2716*t3477;
  t4017 = t1637*t3477;
  t5333 = -1.*t2774*t3477;
  t5371 = -1.*t2716*t3305;
  t5483 = t1921*t3477;
  t5495 = t1637*t3305;
  t3880 = -1.*t3078*t3383;
  t3907 = -1.*t2788*t3533;
  t3910 = t3866 + t3880 + t3907;
  t4027 = t3798*t3383;
  t4029 = t1954*t3533;
  t4072 = t4017 + t4027 + t4029;
  t4344 = t2608*t3477;
  t4453 = -1.*t1637*t3477;
  t4366 = t1729*t2531*t3383;
  t4383 = -1.*t1820*t2531*t3533;
  t4385 = t4344 + t4366 + t4383;
  t5106 = Power(t1729,2);
  t5121 = Power(t1820,2);
  t6118 = t2531*t3477;
  t6122 = t2608*t3305;
  t6149 = -1.*t1921*t3477;
  t6181 = -1.*t1637*t3305;
  t4463 = -1.*t3798*t3383;
  t4503 = -1.*t1954*t3533;
  t4552 = t4453 + t4463 + t4503;
  t4706 = var2[0]*t1729*t4700;
  t4724 = t385*t1820*t4700;
  t4734 = t1695*t1921;
  t4739 = t4724 + t4734;
  t4743 = var2[1]*t4739;
  t4744 = -1.*t1695*t1820*t4700;
  t4748 = t385*t1921;
  t4753 = t4744 + t4748;
  t4774 = var2[2]*t4753;
  t4806 = -1.*t2531*t3305;
  t4847 = t3488 + t4806;
  t4851 = t2774*t4847;
  t6376 = 0.15121*t418;
  t6390 = -1.*t418*t3252;
  t6392 = t6376 + t6390;
  t6368 = t3270 + t3255;
  t4932 = -1.*t4915*t3305;
  t6457 = t417*t6392;
  t6462 = -1.*t6368*t1596;
  t6468 = t6457 + t6462;
  t6474 = t417*t6368;
  t6475 = t6392*t1596;
  t6491 = t6474 + t6475;
  t5029 = t5027*t3305;
  t5051 = t3183*t1501;
  t5052 = t2774*t3305;
  t5057 = t5051 + t3668 + t5052;
  t5063 = t2531*t5057;
  t5099 = t1729*t5027*t3563;
  t6526 = -1.*t2608*t6491;
  t5133 = -1.*t1729*t4915*t3383;
  t5135 = t1820*t4915*t3533;
  t6550 = t2716*t6491;
  t5185 = t1729*t5027*t3383;
  t5190 = -1.*t1820*t5027*t3533;
  t5199 = t1729*t4915*t3736;
  t5213 = var2[0]*t1729*t4915;
  t5216 = t385*t2531;
  t5218 = -1.*t1695*t1820*t4915;
  t5221 = t5216 + t5218;
  t5236 = var2[2]*t5221;
  t5239 = t1695*t2531;
  t5245 = t385*t1820*t4915;
  t5259 = t5239 + t5245;
  t5278 = var2[1]*t5259;
  t5368 = -1.*t5027*t3305;
  t5421 = -1.*t3183*t1501;
  t5442 = -1.*t2774*t3305;
  t5451 = t5421 + t3866 + t5442;
  t5452 = t1921*t5451;
  t5494 = t4700*t3305;
  t5551 = t3183*t1788;
  t5558 = t1921*t3305;
  t5563 = t5551 + t4017 + t5558;
  t5564 = t2774*t5563;
  t6827 = -1.*t2716*t6491;
  t5666 = -1.*t1729*t5027*t3383;
  t5667 = t1820*t5027*t3533;
  t6848 = t1637*t6491;
  t5734 = t1729*t4700*t3383;
  t5740 = -1.*t1820*t4700*t3533;
  t5771 = t1729*t4700*t3910;
  t5780 = t1729*t5027*t4072;
  t5895 = var2[0]*t1729*t5027;
  t5913 = t385*t1820*t5027;
  t5927 = t1695*t2774;
  t5940 = t5913 + t5927;
  t5944 = var2[1]*t5940;
  t5969 = -1.*t1695*t1820*t5027;
  t6007 = t385*t2774;
  t6030 = t5969 + t6007;
  t6047 = var2[2]*t6030;
  t6056 = t2531*t3305;
  t6068 = t4344 + t6056;
  t6093 = t1921*t6068;
  t6127 = t4915*t3305;
  t6170 = -1.*t4700*t3305;
  t6200 = -1.*t3183*t1788;
  t6209 = -1.*t1921*t3305;
  t6210 = t6200 + t4453 + t6209;
  t6217 = t2531*t6210;
  t6224 = t1729*t4700*t4385;
  t6949 = t2608*t6491;
  t6235 = t1729*t4915*t3383;
  t6237 = -1.*t1820*t4915*t3533;
  t6959 = -1.*t1637*t6491;
  t6301 = -1.*t1729*t4700*t3383;
  t6302 = t1820*t4700*t3533;
  t6318 = t1729*t4915*t4552;
  t7056 = -1.*t701*t743;
  t7060 = -1.*t1305*t1480;
  t7065 = t7056 + t7060;
  t7067 = t1562*t417*t1788;
  t7070 = -1.*t418*t1788*t1596;
  t7078 = t7067 + t7070;
  t7084 = t417*t418*t1788;
  t7099 = t1562*t1788*t1596;
  t7103 = t7084 + t7099;
  t7131 = t1729*t7065;
  t7132 = -1.*t1820*t7078;
  t7134 = t7131 + t7132;
  t7196 = t417*t418*t3183;
  t7203 = t1562*t3183*t1596;
  t7214 = t7196 + t7203;
  t7229 = t1562*t417*t3183;
  t7231 = -1.*t418*t3183*t1596;
  t7232 = t7229 + t7231;
  t7217 = -1.*t2608*t7214;
  t7263 = 0.28121*t701;
  t7267 = -1.*t701*t3167;
  t7306 = 0.305*t1305*t1480;
  t7344 = t7263 + t7267 + t7306;
  t7359 = t2716*t7214;
  t7402 = t7344*t1820;
  t7420 = t1729*t7232;
  t7424 = t7402 + t7420;
  t7438 = t1729*t7344;
  t7444 = -1.*t1820*t7232;
  t7448 = t7438 + t7444;
  t7636 = t3183*t7065;
  t7645 = t1788*t7344;
  t7870 = Power(t1562,2);
  t7909 = Power(t418,2);
  t7778 = -1.*t7344*t1501;
  t7066 = t7065*t1820;
  t7079 = t1729*t7078;
  t7081 = t7066 + t7079;
  t8067 = t7214*t1637;
  t8076 = t7103*t3477;
  t8102 = -1.*t2716*t7214;
  t2012 = t1695*t1637;
  t2016 = -1.*t385*t1954;
  t2017 = t2012 + t2016;
  t8313 = t2608*t7214;
  t8355 = -1.*t7214*t1637;
  t8360 = -1.*t7103*t3477;
  t7042 = t418*t3257;
  t7044 = -1.*t1562*t3290;
  t7046 = t7042 + t7044;
  t2848 = t1695*t2716;
  t2854 = -1.*t385*t2788;
  t2866 = t2848 + t2854;
  t8503 = -0.305*t743*t1305;
  t8506 = 0.305*t701*t1480;
  t8520 = t8503 + t8506;
  t8524 = t417*t418*t8520;
  t8533 = t1562*t8520*t1596;
  t8542 = t8524 + t8533;
  t8545 = t1562*t417*t8520;
  t8549 = -1.*t418*t8520*t1596;
  t8551 = t8545 + t8549;
  t8562 = t417*t418*t7065;
  t8566 = t1562*t7065*t1596;
  t8567 = t8562 + t8566;
  t8543 = -1.*t2608*t8542;
  t8586 = -0.305*t701*t743;
  t8592 = t8586 + t3247;
  t8629 = t1562*t417*t7065;
  t8640 = -1.*t418*t7065*t1596;
  t8652 = t8629 + t8640;
  t8611 = t2716*t8542;
  t8622 = t8567*t3477;
  t8683 = t8592*t1820;
  t8688 = t1729*t8551;
  t8690 = t8683 + t8688;
  t8702 = t1729*t8592;
  t8708 = -1.*t1820*t8551;
  t8728 = t8702 + t8708;
  t8743 = t2697*t1820;
  t8768 = t1729*t8652;
  t8792 = t8743 + t8768;
  t7611 = -1.*t2697*t3252;
  t7627 = t7611 + t5421;
  t7685 = t3252*t1501;
  t7691 = t5551 + t7685;
  t7747 = -1.*t2697*t3183;
  t7838 = -1.*t1562*t2697*t3257;
  t7858 = -1.*t418*t2697*t3290;
  t7864 = t5421 + t7838 + t7858;
  t8962 = t1788*t8592;
  t8987 = -1.*t8592*t1501;
  t8052 = t1562*t1501*t3257;
  t8054 = t418*t1501*t3290;
  t8059 = t5551 + t8052 + t8054;
  t9133 = t8542*t1637;
  t9210 = -1.*t2716*t8542;
  t9226 = -1.*t8567*t3477;
  t8848 = t1729*t2697;
  t8883 = -1.*t1820*t8652;
  t8893 = t8848 + t8883;
  t8214 = -0.15121*t7065;
  t8246 = -0.15121*t1501;
  t8260 = t8214 + t8246;
  t8270 = var2[12]*t8260;
  t8277 = -1.*t418*t3257;
  t8278 = t1562*t3290;
  t8295 = t8277 + t8278;
  t9510 = t2608*t8542;
  t9580 = -1.*t8542*t1637;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t1695*t1954 - 1.*t1637*t385)*var2[1] + t2017*var2[2];
  p_output1[10]=(t1695*t1820*t2531 - 1.*t2608*t385)*var2[1] + (t1695*t2608 + t1820*t2531*t385)*var2[2];
  p_output1[11]=(-1.*t1695*t2788 - 1.*t2716*t385)*var2[1] + t2866*var2[2];
  p_output1[12]=t1954*var2[0] - 1.*t2947*t385*var2[1] + t1695*t2947*var2[2] + (t3078*(t1820*t2531*t3349 + t1820*t2531*t3383) + t2788*t3563 + t1729*t2531*(t2788*t3349 + t2788*t3383 + t3078*t3533 + t3533*t3598) - 1.*t1820*t2531*t3736)*var2[3];
  p_output1[13]=-1.*t1820*t2531*var2[0] + t1729*t2531*t385*var2[1] - 1.*t1695*t1729*t2531*var2[2] + ((-1.*t2788*t3349 - 1.*t2788*t3383 - 1.*t3078*t3533 - 1.*t3533*t3598)*t3798 + t3078*(t1954*t3349 + t1954*t3383 + t2947*t3533 + t3533*t3798) + t1954*t3910 + t2788*t4072)*var2[3];
  p_output1[14]=t2788*var2[0] - 1.*t3598*t385*var2[1] + t1695*t3598*var2[2] + ((-1.*t1820*t2531*t3349 - 1.*t1820*t2531*t3383)*t3798 + t1729*t2531*(-1.*t1954*t3349 - 1.*t1954*t3383 - 1.*t2947*t3533 - 1.*t3533*t3798) + t1954*t4385 - 1.*t1820*t2531*t4552)*var2[3];
  p_output1[15]=t4706 + t4743 + t4774 + (t5099 + t3078*(t4896 + t4898 - 1.*t2531*t4881*t5106 - 1.*t2531*t4881*t5121 + t5133 + t5135) + t1729*t2531*(-1.*t1820*t2788*t4881 + t1729*t3078*t4881 + t5003 + t5030 + t5185 + t5190) + t5199)*var2[3] + (t4851 + t2716*(-1.*t2531*t4881 + t4896 + t4898 + t4932) + t2608*(t2774*t4881 + t5003 + t5029 + t5030) + t5063)*var2[4];
  p_output1[16]=t5213 + t5236 + t5278 + (t3798*(t1820*t2788*t4881 - 1.*t1729*t3078*t4881 + t5333 + t5371 + t5666 + t5667) + t3078*(-1.*t1820*t1954*t4881 + t1729*t3798*t4881 + t5483 + t5495 + t5734 + t5740) + t5771 + t5780)*var2[3] + (t1637*(-1.*t2774*t4881 + t5333 + t5368 + t5371) + t5452 + t2716*(t1921*t4881 + t5483 + t5494 + t5495) + t5564)*var2[4];
  p_output1[17]=t5895 + t5944 + t6047 + (t6224 + t3798*(t2531*t4881*t5106 + t2531*t4881*t5121 + t6118 + t6122 + t6235 + t6237) + t1729*t2531*(t1820*t1954*t4881 - 1.*t1729*t3798*t4881 + t6149 + t6181 + t6301 + t6302) + t6318)*var2[3] + (t6093 + t1637*(t2531*t4881 + t6118 + t6122 + t6127) + t2608*(-1.*t1921*t4881 + t6149 + t6170 + t6181) + t6217)*var2[4];
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t4706 + t4743 + t4774 + (t5099 + t5199 + t3078*(t4896 + t5133 + t5135 - 1.*t2531*t5106*t6468 - 1.*t2531*t5121*t6468 + t6526) + t1729*t2531*(t5003 + t5185 + t5190 - 1.*t1820*t2788*t6468 + t1729*t3078*t6468 + t6550))*var2[3] + (t4851 + t5063 + t2716*(t4896 + t4932 - 1.*t2531*t6468 + t6526) + t2608*(t5003 + t5029 + t2774*t6468 + t6550))*var2[4] + t1501*(t1562*t3257 + t3290*t418 - 1.*t1562*t6368 + t418*t6392)*var2[5];
  p_output1[37]=t5213 + t5236 + t5278 + (t5771 + t5780 + t3798*(t5333 + t5666 + t5667 + t1820*t2788*t6468 - 1.*t1729*t3078*t6468 + t6827) + t3078*(t5483 + t5734 + t5740 - 1.*t1820*t1954*t6468 + t1729*t3798*t6468 + t6848))*var2[3] + (t5452 + t5564 + t1637*(t5333 + t5368 - 1.*t2774*t6468 + t6827) + t2716*(t5483 + t5494 + t1921*t6468 + t6848))*var2[4] + (t1501*(t1501*t1562*t3290 - 1.*t1501*t3257*t418 + t1501*t418*t6368 + t1501*t1562*t6392) + t1788*(-1.*t1562*t2697*t3290 + t2697*t3257*t418 - 1.*t2697*t418*t6368 - 1.*t1562*t2697*t6392))*var2[5];
  p_output1[38]=t5895 + t5944 + t6047 + (t6224 + t6318 + t3798*(t6118 + t6235 + t6237 + t2531*t5106*t6468 + t2531*t5121*t6468 + t6949) + t1729*t2531*(t6149 + t6301 + t6302 + t1820*t1954*t6468 - 1.*t1729*t3798*t6468 + t6959))*var2[3] + (t6093 + t6217 + t1637*(t6118 + t6127 + t2531*t6468 + t6949) + t2608*(t6149 + t6170 - 1.*t1921*t6468 + t6959))*var2[4] + t1788*(-1.*t1562*t3257 - 1.*t3290*t418 + t1562*t6368 - 1.*t418*t6392)*var2[5];
  p_output1[39]=t7081*var2[0] + (t1695*t7103 - 1.*t385*t7134)*var2[1] + (t385*t7103 + t1695*t7134)*var2[2] + (t3563*t3798 + t3078*(t7217 - 1.*t1729*t2531*t7424 + t1820*t2531*t7448) + t1729*t2531*(t4017 + t4027 + t4029 + t7359 + t3078*t7424 + t2788*t7448))*var2[3] + (t1637*t4847 + t2716*(t7217 - 1.*t2531*t7232) + t2608*(t4017 + t5551 + t5558 + t2774*t7232 + t1501*t7344 + t7359))*var2[4] + t1788*t7046*var2[5];
  p_output1[40]=(t3798*t4072 + t3910*t7081 + t3078*(t3383*t7081 + t3533*t7134 + t3798*t7424 + t1954*t7448 + t8067 + t8076) + t3798*(t4453 + t4463 + t4503 - 1.*t3078*t7424 - 1.*t2788*t7448 + t8102))*var2[3] + (t1637*t5563 + t5451*t7103 + t2716*(t3305*t7078 + t1921*t7232 + t7636 + t7645 + t8067 + t8076) + t1637*(t4453 + t6200 + t6209 - 1.*t2774*t7232 + t7778 + t8102))*var2[4] + (t7065*t7864 + t1501*(t1562*t1788*t3257 + t1788*t3290*t418 + t7636 + t7645 + t1501*t3183*t7870 + t1501*t3183*t7909) + t1788*(-1.*t1501*t1562*t3257 - 1.*t1501*t3290*t418 + t6200 + t7778 - 1.*t2697*t3183*t7870 - 1.*t2697*t3183*t7909) + t1788*t8059)*var2[5] + (t7065*t7627 + t1501*(t1788*t3252 + t5051 + t7636 + t7645) + t1788*t7691 + t1788*(-1.*t1501*t3252 + t6200 + t7747 + t7778))*var2[12];
  p_output1[41]=t8270 + t3798*var2[0] + t2017*var2[1] + (t1695*t1954 + t1637*t385)*var2[2] + (t4385*t7081 + t3798*(t1729*t2531*t7424 - 1.*t1820*t2531*t7448 + t8313) + t1729*t2531*(-1.*t3383*t7081 - 1.*t3533*t7134 - 1.*t3798*t7424 - 1.*t1954*t7448 + t8355 + t8360))*var2[3] + (t6068*t7103 + t1637*(t2531*t7232 + t8313) + t2608*(-1.*t3183*t7065 - 1.*t3305*t7078 - 1.*t1921*t7232 - 1.*t1788*t7344 + t8355 + t8360))*var2[4] + t7065*t8295*var2[5];
  p_output1[42]=t3078*var2[0] + t2866*var2[1] + (t1695*t2788 + t2716*t385)*var2[2] + (t3078*(t8543 - 1.*t1729*t2531*t8690 + t1820*t2531*t8728) + t3563*t8792 + t1729*t2531*(t8611 + t8622 + t3078*t8690 + t2788*t8728 + t3383*t8792 + t3533*t8893))*var2[3] + (t2716*(t8543 - 1.*t2531*t8551) + t4847*t8567 + t2608*(t2697*t3183 + t2774*t8551 + t1501*t8592 + t8611 + t8622 + t3305*t8652))*var2[4] + t2697*t7046*var2[5] + (0.28121*t743 - 1.*t3167*t743 - 0.305*Power(t743,2))*var2[13];
  p_output1[43]=(t3078*t3910 + t4072*t8792 + t3078*(t3668 + t3697 + t3724 + t3798*t8690 + t1954*t8728 + t9133) + t3798*(-1.*t3078*t8690 - 1.*t2788*t8728 - 1.*t3383*t8792 - 1.*t3533*t8893 + t9210 + t9226))*var2[3] + (t2716*t5451 + t5563*t8567 + t2716*(t3668 + t5051 + t5052 + t1921*t8551 + t8962 + t9133) + t1637*(t7747 - 1.*t2774*t8551 - 1.*t3305*t8652 + t8987 + t9210 + t9226))*var2[4] + (t1501*t7864 + t2697*t8059 + t1501*(t1562*t2697*t3257 + t2697*t3290*t418 + t5051 + t1501*t7870*t8520 + t1501*t7909*t8520 + t8962) + t1788*(-1.*t1562*t3257*t7065 - 1.*t3290*t418*t7065 + t7747 - 1.*t2697*t7870*t8520 - 1.*t2697*t7909*t8520 + t8987))*var2[5] + (t1501*t7627 + t2697*t7691 + t1501*(t2697*t3252 + t5051 + t1501*t8520 + t8962) + t1788*(-1.*t3252*t7065 + t7747 - 1.*t2697*t8520 + t8987))*var2[12];
  p_output1[44]=t8270 + t8792*var2[0] + (t1695*t8567 - 1.*t385*t8893)*var2[1] + (t385*t8567 + t1695*t8893)*var2[2] + (t3078*t4385 + t3798*(t1729*t2531*t8690 - 1.*t1820*t2531*t8728 + t9510) + t1729*t2531*(t3866 + t3880 + t3907 - 1.*t3798*t8690 - 1.*t1954*t8728 + t9580))*var2[3] + (t2716*t6068 + t1637*(t2531*t8551 + t9510) + t2608*(t3866 + t5421 + t5442 - 1.*t1921*t8551 - 1.*t1788*t8592 + t9580))*var2[4] + t1501*t8295*var2[5] + (-0.28121*t1480 + t1480*t3167 + 0.305*t1480*t743)*var2[13];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dJh_FrFoot_DiagonalStance.hh"

namespace SymFunction
{

void dJh_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
