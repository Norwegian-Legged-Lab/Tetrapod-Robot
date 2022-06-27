/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:24:46 GMT+02:00
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
  double t5030;
  double t2539;
  double t3704;
  double t7761;
  double t4871;
  double t7768;
  double t7769;
  double t2313;
  double t7892;
  double t7896;
  double t7905;
  double t2335;
  double t7926;
  double t7932;
  double t7867;
  double t7927;
  double t7928;
  double t1797;
  double t7933;
  double t7935;
  double t7938;
  double t7939;
  double t7940;
  double t7974;
  double t8024;
  double t8094;
  double t8099;
  double t8164;
  double t8165;
  double t8166;
  double t8196;
  double t8198;
  double t8199;
  double t8190;
  double t8208;
  double t8209;
  double t8214;
  double t8215;
  double t8216;
  double t8217;
  double t8220;
  double t8221;
  double t8237;
  double t8238;
  double t8239;
  double t8270;
  double t8271;
  double t8272;
  double t8283;
  double t8284;
  double t8287;
  double t8289;
  double t8293;
  double t8308;
  double t8268;
  double t8274;
  double t8310;
  double t8319;
  double t8265;
  double t8348;
  double t8349;
  double t8352;
  double t8353;
  double t8355;
  double t8359;
  double t8360;
  double t8364;
  double t8365;
  double t8366;
  double t8368;
  double t8369;
  double t8370;
  double t8371;
  double t8372;
  double t8373;
  double t8375;
  double t8402;
  double t8403;
  double t8404;
  double t8399;
  double t8400;
  double t8401;
  double t8382;
  double t8384;
  double t8385;
  double t8249;
  double t8254;
  double t8261;
  double t8350;
  double t8378;
  double t8379;
  double t8442;
  double t8443;
  double t8445;
  double t8413;
  double t8414;
  double t8415;
  double t8609;
  double t8610;
  double t8611;
  double t8461;
  double t8472;
  double t8473;
  double t8837;
  double t8839;
  double t8867;
  double t8446;
  double t8484;
  double t8993;
  double t8994;
  double t8997;
  double t9003;
  double t9046;
  double t9150;
  double t9151;
  double t8447;
  double t8448;
  double t8459;
  double t9185;
  double t9193;
  double t8485;
  double t8491;
  double t8495;
  double t8653;
  double t8718;
  double t9439;
  double t9467;
  double t8657;
  double t8659;
  double t8663;
  double t9530;
  double t9552;
  double t8734;
  double t8737;
  double t8739;
  double t8792;
  double t8819;
  double t9758;
  double t8798;
  double t8799;
  double t8805;
  double t9766;
  double t9786;
  double t8822;
  double t8823;
  double t8824;
  double t8901;
  double t9009;
  double t22538;
  double t22540;
  double t22541;
  double t22549;
  double t22553;
  double t22588;
  double t22589;
  double t22590;
  double t8919;
  double t8935;
  double t22543;
  double t22555;
  double t22573;
  double t22575;
  double t9017;
  double t9018;
  double t22604;
  double t22608;
  double t22618;
  double t22622;
  double t22623;
  double t22631;
  double t22633;
  double t22634;
  double t22636;
  double t22637;
  double t22638;
  double t22640;
  double t22641;
  double t22642;
  double t22644;
  double t22645;
  double t22646;
  double t9488;
  double t9474;
  double t22651;
  double t22653;
  double t22654;
  double t22677;
  double t22679;
  double t9476;
  double t9481;
  double t22693;
  double t22698;
  double t9489;
  double t9501;
  double t22730;
  double t22733;
  double t22581;
  double t22583;
  double t22584;
  double t22740;
  double t22741;
  double t22664;
  double t22665;
  double t22666;
  double t9728;
  double t9826;
  double t9729;
  double t9731;
  double t22794;
  double t22799;
  double t22613;
  double t22803;
  double t22805;
  double t9828;
  double t9844;
  double t22828;
  double t22831;
  double t22835;
  double t22837;
  double t22525;
  double t22533;
  double t22868;
  double t22869;
  double t22870;
  double t22889;
  double t22890;
  double t8229;
  double t8232;
  double t8233;
  double t22880;
  double t22882;
  double t22884;
  double t22885;
  double t22878;
  double t22888;
  double t22891;
  double t22921;
  double t22927;
  double t22928;
  double t22904;
  double t22905;
  double t22909;
  double t22912;
  double t22913;
  double t22915;
  double t22933;
  double t22934;
  double t22935;
  double t22929;
  double t22932;
  double t22937;
  double t22957;
  double t22959;
  double t22960;
  double t22962;
  double t22963;
  double t22967;
  double t22975;
  double t22976;
  double t22977;
  double t22682;
  double t22683;
  double t22684;
  double t22703;
  double t22705;
  double t22707;
  double t22892;
  double t22566;
  double t22568;
  double t23006;
  double t23009;
  double t23018;
  double t23016;
  double t23004;
  double t23010;
  double t23045;
  double t23048;
  double t23050;
  double t22985;
  double t22986;
  double t22987;
  double t22788;
  double t22789;
  double t23075;
  double t23095;
  double t23102;
  double t23139;
  double t23140;
  double t23141;
  double t23167;
  double t23168;
  double t23169;
  double t23177;
  double t23180;
  double t23181;
  double t23189;
  double t23190;
  double t23191;
  double t23193;
  double t23194;
  double t23195;
  double t23158;
  double t23162;
  double t23170;
  double t23211;
  double t23212;
  double t23214;
  double t23205;
  double t23207;
  double t23208;
  double t23215;
  double t23218;
  double t23225;
  double t23226;
  double t23227;
  double t23229;
  double t23230;
  double t23231;
  double t22808;
  double t22809;
  double t23023;
  double t23024;
  double t23033;
  double t23034;
  double t23246;
  double t23251;
  double t23256;
  double t23252;
  double t23254;
  double t23247;
  double t23277;
  double t23280;
  double t23176;
  double t23182;
  double t23185;
  double t23284;
  double t8115;
  double t8124;
  double t8125;
  double t23313;
  double t23315;
  double t23331;
  double t23334;
  double t23337;
  t5030 = Cos(var1[16]);
  t2539 = Cos(var1[17]);
  t3704 = Sin(var1[16]);
  t7761 = Sin(var1[17]);
  t4871 = t2539*t3704;
  t7768 = -1.*t5030*t7761;
  t7769 = t4871 + t7768;
  t2313 = Cos(var1[5]);
  t7892 = t5030*t2539;
  t7896 = t3704*t7761;
  t7905 = t7892 + t7896;
  t2335 = Sin(var1[15]);
  t7926 = Sin(var1[5]);
  t7932 = Cos(var1[3]);
  t7867 = -1.*t2313*t2335*t7769;
  t7927 = t7905*t7926;
  t7928 = t7867 + t7927;
  t1797 = Sin(var1[3]);
  t7933 = Cos(var1[15]);
  t7935 = Cos(var1[4]);
  t7938 = t7933*t7935*t7769;
  t7939 = Sin(var1[4]);
  t7940 = t2313*t7905;
  t7974 = t2335*t7769*t7926;
  t8024 = t7940 + t7974;
  t8094 = -1.*t7939*t8024;
  t8099 = t7938 + t8094;
  t8164 = t7935*t2335;
  t8165 = t7933*t7939*t7926;
  t8166 = t8164 + t8165;
  t8196 = -1.*t2539*t3704;
  t8198 = t5030*t7761;
  t8199 = t8196 + t8198;
  t8190 = -1.*t2313*t2335*t7905;
  t8208 = t8199*t7926;
  t8209 = t8190 + t8208;
  t8214 = t7933*t7935*t7905;
  t8215 = t2313*t8199;
  t8216 = t2335*t7905*t7926;
  t8217 = t8215 + t8216;
  t8220 = -1.*t7939*t8217;
  t8221 = t8214 + t8220;
  t8237 = -1.*t7933*t7769*t7939;
  t8238 = -1.*t7935*t8024;
  t8239 = t8237 + t8238;
  t8270 = -0.0641*t2539;
  t8271 = -0.28*t7761;
  t8272 = t8270 + t8271;
  t8283 = -1.*t2539;
  t8284 = 1. + t8283;
  t8287 = -0.575*t8284;
  t8289 = -0.295*t2539;
  t8293 = -0.0641*t7761;
  t8308 = t8287 + t8289 + t8293;
  t8268 = 0.325*t3704;
  t8274 = t5030*t8272;
  t8310 = t3704*t8308;
  t8319 = t8268 + t8274 + t8310;
  t8265 = -0.068*t2335;
  t8348 = t7933*t8319;
  t8349 = t8265 + t8348;
  t8352 = -1.*t5030;
  t8353 = 1. + t8352;
  t8355 = -0.325*t8353;
  t8359 = -1.*t3704*t8272;
  t8360 = t5030*t8308;
  t8364 = t8355 + t8359 + t8360;
  t8365 = t2313*t8364;
  t8366 = -1.*t7933;
  t8368 = 1. + t8366;
  t8369 = -0.1575*t8368;
  t8370 = -0.2255*t7933;
  t8371 = -1.*t2335*t8319;
  t8372 = t8369 + t8370 + t8371;
  t8373 = -1.*t8372*t7926;
  t8375 = t8365 + t8373;
  t8402 = t7935*t8349;
  t8403 = -1.*t7939*t8375;
  t8404 = t8402 + t8403;
  t8399 = t2335*t7939;
  t8400 = -1.*t7933*t7935*t7926;
  t8401 = t8399 + t8400;
  t8382 = t8349*t7939;
  t8384 = t7935*t8375;
  t8385 = t8382 + t8384;
  t8249 = t7933*t7905*t7939;
  t8254 = t7935*t8217;
  t8261 = t8249 + t8254;
  t8350 = -1.*t8349*t7939;
  t8378 = -1.*t7935*t8375;
  t8379 = t8350 + t8378;
  t8442 = t2313*t8372;
  t8443 = t8364*t7926;
  t8445 = t8442 + t8443;
  t8413 = -1.*t2335*t7939;
  t8414 = t7933*t7935*t7926;
  t8415 = t8413 + t8414;
  t8609 = t7933*t7769*t7939;
  t8610 = t7935*t8024;
  t8611 = t8609 + t8610;
  t8461 = -1.*t7933*t7905*t7939;
  t8472 = -1.*t7935*t8217;
  t8473 = t8461 + t8472;
  t8837 = t2313*t2335*t7769;
  t8839 = -1.*t7905*t7926;
  t8867 = t8837 + t8839;
  t8446 = -1.*t7933*t2313*t8445;
  t8484 = t8445*t8209;
  t8993 = -1.*t2313*t8372;
  t8994 = -1.*t8364*t7926;
  t8997 = t8993 + t8994;
  t9003 = t7933*t7926*t8445;
  t9046 = t2313*t2335*t7905;
  t9150 = -1.*t8199*t7926;
  t9151 = t9046 + t9150;
  t8447 = -1.*t8401*t8385;
  t8448 = -1.*t8166*t8404;
  t8459 = t8446 + t8447 + t8448;
  t9185 = t8375*t8209;
  t9193 = t8445*t8217;
  t8485 = t8385*t8261;
  t8491 = t8404*t8221;
  t8495 = t8484 + t8485 + t8491;
  t8653 = t8445*t7928;
  t8718 = -1.*t8445*t8209;
  t9439 = t8445*t8024;
  t9467 = t8375*t7928;
  t8657 = t8385*t8611;
  t8659 = t8404*t8099;
  t8663 = t8653 + t8657 + t8659;
  t9530 = -1.*t8375*t8209;
  t9552 = -1.*t8445*t8217;
  t8734 = -1.*t8385*t8261;
  t8737 = -1.*t8404*t8221;
  t8739 = t8718 + t8734 + t8737;
  t8792 = t7933*t2313*t8445;
  t8819 = -1.*t8445*t7928;
  t9758 = -1.*t7933*t7926*t8445;
  t8798 = t8401*t8385;
  t8799 = t8166*t8404;
  t8805 = t8792 + t8798 + t8799;
  t9766 = -1.*t8445*t8024;
  t9786 = -1.*t8375*t7928;
  t8822 = -1.*t8385*t8611;
  t8823 = -1.*t8404*t8099;
  t8824 = t8819 + t8822 + t8823;
  t8901 = -1.*t2335*t8349;
  t9009 = t7933*t8349*t7905;
  t22538 = 0.068*t2335;
  t22540 = -1.*t7933*t8319;
  t22541 = t22538 + t22540;
  t22549 = -0.068*t7933;
  t22553 = t22549 + t8371;
  t22588 = -1.*t7935*t2335*t7769;
  t22589 = -1.*t7933*t7769*t7939*t7926;
  t22590 = t22588 + t22589;
  t8919 = t7933*t7926*t8375;
  t8935 = t8901 + t8919 + t8446;
  t22543 = -1.*t7933*t8349;
  t22555 = -1.*t2335*t22553;
  t22573 = -1.*t2335*t8349*t7905;
  t22575 = t7933*t22553*t7905;
  t9017 = t8375*t8217;
  t9018 = t9009 + t8484 + t9017;
  t22604 = Power(t2313,2);
  t22608 = -1.*t7933*t22604*t22541;
  t22618 = t2313*t2335*t8445;
  t22622 = -1.*t7933*t2313*t7905*t8445;
  t22623 = t2313*t22541*t8209;
  t22631 = -1.*t2335*t7905*t7939;
  t22633 = t7933*t7935*t7905*t7926;
  t22634 = t22631 + t22633;
  t22636 = t22553*t7939;
  t22637 = -1.*t7935*t22541*t7926;
  t22638 = t22636 + t22637;
  t22640 = t7935*t22553;
  t22641 = t22541*t7939*t7926;
  t22642 = t22640 + t22641;
  t22644 = t7933*t7939;
  t22645 = t7935*t2335*t7926;
  t22646 = t22644 + t22645;
  t9488 = -1.*t7933*t8349*t7905;
  t9474 = t7933*t8349*t7769;
  t22651 = t7933*t7935;
  t22653 = -1.*t2335*t7939*t7926;
  t22654 = t22651 + t22653;
  t22677 = -1.*t2335*t8349*t7769;
  t22679 = t7933*t22553*t7769;
  t9476 = t8375*t8024;
  t9481 = t9474 + t9476 + t8653;
  t22693 = t2335*t8349*t7905;
  t22698 = -1.*t7933*t22553*t7905;
  t9489 = -1.*t8375*t8217;
  t9501 = t9488 + t8718 + t9489;
  t22730 = -1.*t7933*t2313*t7769*t8445;
  t22733 = t2313*t22541*t7928;
  t22581 = -1.*t2335*t7769*t7939;
  t22583 = t7933*t7935*t7769*t7926;
  t22584 = t22581 + t22583;
  t22740 = t7933*t2313*t7905*t8445;
  t22741 = -1.*t2313*t22541*t8209;
  t22664 = -1.*t7935*t2335*t7905;
  t22665 = -1.*t7933*t7905*t7939*t7926;
  t22666 = t22664 + t22665;
  t9728 = t2335*t8349;
  t9826 = -1.*t7933*t8349*t7769;
  t9729 = -1.*t7933*t7926*t8375;
  t9731 = t9728 + t9729 + t8792;
  t22794 = t7933*t8349;
  t22799 = t2335*t22553;
  t22613 = Power(t7926,2);
  t22803 = t2335*t8349*t7769;
  t22805 = -1.*t7933*t22553*t7769;
  t9828 = -1.*t8375*t8024;
  t9844 = t9826 + t9828 + t8819;
  t22828 = t7933*t22604*t22541;
  t22831 = -1.*t2313*t2335*t8445;
  t22835 = t7933*t2313*t7769*t8445;
  t22837 = -1.*t2313*t22541*t7928;
  t22525 = -1.*t7933*t8372;
  t22533 = t8901 + t22525;
  t22868 = -1.*t5030*t2539;
  t22869 = -1.*t3704*t7761;
  t22870 = t22868 + t22869;
  t22889 = 0.325*t5030;
  t22890 = t22889 + t8359 + t8360;
  t8229 = t7932*t8209;
  t8232 = -1.*t1797*t8221;
  t8233 = t8229 + t8232;
  t22880 = -0.325*t3704;
  t22882 = -1.*t5030*t8272;
  t22884 = -1.*t3704*t8308;
  t22885 = t22880 + t22882 + t22884;
  t22878 = t7933*t8349*t8199;
  t22888 = Power(t7933,2);
  t22891 = t22888*t22890*t7905;
  t22921 = -1.*t2313*t2335*t22890;
  t22927 = t22885*t7926;
  t22928 = t22921 + t22927;
  t22904 = -1.*t2313*t2335*t8199;
  t22905 = t22870*t7926;
  t22909 = t22904 + t22905;
  t22912 = t2313*t22885;
  t22913 = t2335*t22890*t7926;
  t22915 = t22912 + t22913;
  t22933 = t2313*t22870;
  t22934 = t2335*t8199*t7926;
  t22935 = t22933 + t22934;
  t22929 = -1.*t7933*t2313*t22928;
  t22932 = t22928*t8209;
  t22937 = t8445*t22909;
  t22957 = t7933*t8199*t7939;
  t22959 = t7935*t22935;
  t22960 = t22957 + t22959;
  t22962 = t7933*t22890*t7939;
  t22963 = t7935*t22915;
  t22967 = t22962 + t22963;
  t22975 = t7933*t7935*t22890;
  t22976 = -1.*t7939*t22915;
  t22977 = t22975 + t22976;
  t22682 = -1.*t8364*t8199;
  t22683 = t2335*t8372*t7905;
  t22684 = t22682 + t9488 + t22683;
  t22703 = -1.*t2335*t8372*t7769;
  t22705 = t8364*t7905;
  t22707 = t9474 + t22703 + t22705;
  t22892 = Power(t2335,2);
  t22566 = t8364*t8199;
  t22568 = -1.*t2335*t8372*t7905;
  t23006 = -1.*t22885*t8199;
  t23009 = -1.*t8364*t22870;
  t23018 = t22885*t7905;
  t23016 = t22888*t22890*t7769;
  t23004 = -1.*t7933*t8349*t8199;
  t23010 = -1.*t22888*t22890*t7905;
  t23045 = t22928*t7928;
  t23048 = -1.*t22928*t8209;
  t23050 = -1.*t8445*t22909;
  t22985 = t7933*t7935*t8199;
  t22986 = -1.*t7939*t22935;
  t22987 = t22985 + t22986;
  t22788 = t7933*t8372;
  t22789 = t9728 + t22788;
  t23075 = -1.*t22888*t22890*t7769;
  t23095 = t7933*t2313*t22928;
  t23102 = -1.*t22928*t7928;
  t23139 = -0.28*t2539;
  t23140 = 0.0641*t7761;
  t23141 = t23139 + t23140;
  t23167 = t3704*t8272;
  t23168 = t5030*t23141;
  t23169 = t23167 + t23168;
  t23177 = t2313*t7769;
  t23180 = t2335*t22870*t7926;
  t23181 = t23177 + t23180;
  t23189 = -1.*t2313*t2335*t22870;
  t23190 = t7769*t7926;
  t23191 = t23189 + t23190;
  t23193 = t7933*t7935*t22870;
  t23194 = -1.*t7939*t23181;
  t23195 = t23193 + t23194;
  t23158 = -1.*t3704*t23141;
  t23162 = t8274 + t23158;
  t23170 = t22888*t23169*t7905;
  t23211 = -1.*t2313*t2335*t23169;
  t23212 = t23162*t7926;
  t23214 = t23211 + t23212;
  t23205 = t2313*t23162;
  t23207 = t2335*t23169*t7926;
  t23208 = t23205 + t23207;
  t23215 = -1.*t7933*t2313*t23214;
  t23218 = t23214*t8209;
  t23225 = t7933*t23169*t7939;
  t23226 = t7935*t23208;
  t23227 = t23225 + t23226;
  t23229 = t7933*t7935*t23169;
  t23230 = -1.*t7939*t23208;
  t23231 = t23229 + t23230;
  t22808 = t2335*t8372*t7769;
  t22809 = -1.*t8364*t7905;
  t23023 = t8319*t7769;
  t23024 = t23023 + t22705;
  t23033 = -1.*t8319*t7905;
  t23034 = t22682 + t23033;
  t23246 = -1.*t23162*t8199;
  t23251 = t8364*t7769;
  t23256 = t23162*t7905;
  t23252 = t22888*t23169*t7769;
  t23254 = t7933*t8349*t22870;
  t23247 = -1.*t22888*t23169*t7905;
  t23277 = t8445*t23191;
  t23280 = t23214*t7928;
  t23176 = t7933*t22870*t7939;
  t23182 = t7935*t23181;
  t23185 = t23176 + t23182;
  t23284 = -1.*t23214*t8209;
  t8115 = t7932*t7928;
  t8124 = -1.*t1797*t8099;
  t8125 = t8115 + t8124;
  t23313 = -1.*t22888*t23169*t7769;
  t23315 = -1.*t7933*t8349*t22870;
  t23331 = t7933*t2313*t23214;
  t23334 = -1.*t8445*t23191;
  t23337 = -1.*t23214*t7928;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t1797*t7928 - 1.*t7932*t8099)*var2[1] + t8125*var2[2];
  p_output1[10]=(-1.*t1797*t2313*t7933 - 1.*t7932*t8166)*var2[1] + (t2313*t7932*t7933 - 1.*t1797*t8166)*var2[2];
  p_output1[11]=(-1.*t1797*t8209 - 1.*t7932*t8221)*var2[1] + t8233*var2[2];
  p_output1[12]=t8099*var2[0] - 1.*t1797*t8239*var2[1] + t7932*t8239*var2[2] + (t8261*(-1.*t8166*t8379 - 1.*t8166*t8385 - 1.*t8401*t8404 - 1.*t8404*t8415) + t8221*t8459 + t8401*(t8221*t8379 + t8221*t8385 + t8261*t8404 + t8404*t8473) + t8166*t8495)*var2[3];
  p_output1[13]=t8166*var2[0] - 1.*t1797*t8415*var2[1] + t7932*t8415*var2[2] + ((-1.*t8221*t8379 - 1.*t8221*t8385 - 1.*t8261*t8404 - 1.*t8404*t8473)*t8611 + t8261*(t8099*t8379 + t8099*t8385 + t8239*t8404 + t8404*t8611) + t8221*t8663 + t8099*t8739)*var2[3];
  p_output1[14]=t8221*var2[0] - 1.*t1797*t8473*var2[1] + t7932*t8473*var2[2] + ((t8166*t8379 + t8166*t8385 + t8401*t8404 + t8404*t8415)*t8611 + t8401*(-1.*t8099*t8379 - 1.*t8099*t8385 - 1.*t8239*t8404 - 1.*t8404*t8611) + t8099*t8805 + t8166*t8824)*var2[3];
  p_output1[15]=t7935*t8867*var2[0] + (t7932*t8024 + t1797*t7939*t8867)*var2[1] + (t1797*t8024 - 1.*t7932*t7939*t8867)*var2[2] + (-1.*t2313*t7933*t7935*t8495 + t8261*(-1.*t2313*t7933*t8375 + t2313*t7933*t7935*t8385 - 1.*t2313*t7933*t7939*t8404 + t7939*t8166*t8997 - 1.*t7935*t8401*t8997 + t9003) + t7935*t8459*t9151 + t8401*(-1.*t7939*t8221*t8997 + t7935*t8261*t8997 + t7935*t8385*t9151 - 1.*t7939*t8404*t9151 + t9185 + t9193))*var2[3] + (t8217*t8935 + t8209*(t7926*t7933*t8997 + t9003) - 1.*t7926*t7933*t9018 + t2313*t7933*(t8217*t8997 + t8375*t9151 + t9185 + t9193))*var2[4];
  p_output1[16]=-1.*t2313*t7933*t7935*var2[0] + (-1.*t7926*t7932*t7933 - 1.*t1797*t2313*t7933*t7939)*var2[1] + (-1.*t1797*t7926*t7933 + t2313*t7932*t7933*t7939)*var2[2] + (t7935*t8739*t8867 + t7935*t8663*t9151 + t8261*(t7935*t8385*t8867 - 1.*t7939*t8404*t8867 - 1.*t7939*t8099*t8997 + t7935*t8611*t8997 + t9439 + t9467) + t8611*(t7939*t8221*t8997 - 1.*t7935*t8261*t8997 - 1.*t7935*t8385*t9151 + t7939*t8404*t9151 + t9530 + t9552))*var2[3] + (t8209*(t8375*t8867 + t8024*t8997 + t9439 + t9467) + t8217*t9481 + t8024*t9501 + t7928*(-1.*t8217*t8997 - 1.*t8375*t9151 + t9530 + t9552))*var2[4];
  p_output1[17]=t7935*t9151*var2[0] + (t7932*t8217 + t1797*t7939*t9151)*var2[1] + (t1797*t8217 - 1.*t7932*t7939*t9151)*var2[2] + (-1.*t2313*t7933*t7935*t8824 + t7935*t8805*t8867 + t8611*(t2313*t7933*t8375 - 1.*t2313*t7933*t7935*t8385 + t2313*t7933*t7939*t8404 - 1.*t7939*t8166*t8997 + t7935*t8401*t8997 + t9758) + t8401*(-1.*t7935*t8385*t8867 + t7939*t8404*t8867 + t7939*t8099*t8997 - 1.*t7935*t8611*t8997 + t9766 + t9786))*var2[3] + (t8024*t9731 + t7928*(-1.*t7926*t7933*t8997 + t9758) + t2313*t7933*(-1.*t8375*t8867 - 1.*t8024*t8997 + t9766 + t9786) - 1.*t7926*t7933*t9844)*var2[4];
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
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=t22584*var2[0] + (-1.*t1797*t22590 - 1.*t2313*t7769*t7932*t7933)*var2[1] + (t22590*t7932 - 1.*t1797*t2313*t7769*t7933)*var2[2] + (t8261*(t22608 + t22618 - 1.*t22642*t8166 - 1.*t22646*t8385 - 1.*t22638*t8401 - 1.*t22654*t8404) + t8401*(t22622 + t22623 + t22642*t8221 + t22638*t8261 + t22634*t8385 + t22666*t8404) + t22634*t8459 + t22646*t8495)*var2[3] + (t8209*(t22543 + t22555 + t22608 + t22618 - 1.*t22541*t22613*t7933 - 1.*t2335*t7926*t8375) + t2313*t7933*(t22573 + t22575 + t22622 + t22623 - 1.*t22541*t7926*t8217 + t7905*t7926*t7933*t8375) - 1.*t2313*t7905*t7933*t8935 - 1.*t2313*t2335*t9018)*var2[4] + (-1.*t22533*t2335*t7905 + t7905*t7933*(t22543 + t22555 - 1.*t22541*t7933 + t2335*t8372) + t2335*(t22573 + t22575 - 1.*t22541*t2335*t7905 - 1.*t7905*t7933*t8372) + t7933*(t22566 + t22568 + t9009))*var2[5];
  p_output1[46]=t22646*var2[0] + (-1.*t1797*t22654 - 1.*t2313*t2335*t7932)*var2[1] + (-1.*t1797*t2313*t2335 + t22654*t7932)*var2[2] + ((t22740 + t22741 - 1.*t22642*t8221 - 1.*t22638*t8261 - 1.*t22634*t8385 - 1.*t22666*t8404)*t8611 + t8261*(t22730 + t22733 + t22642*t8099 + t22584*t8385 + t22590*t8404 + t22638*t8611) + t22634*t8663 + t22584*t8739)*var2[3] + (t8209*(t22677 + t22679 + t22730 + t22733 - 1.*t22541*t7926*t8024 + t7769*t7926*t7933*t8375) + t7928*(t22693 + t22698 + t22740 + t22741 + t22541*t7926*t8217 - 1.*t7905*t7926*t7933*t8375) - 1.*t2313*t7905*t7933*t9481 - 1.*t2313*t7769*t7933*t9501)*var2[4] + (-1.*t22684*t2335*t7769 - 1.*t22707*t2335*t7905 + t7905*t7933*(t22677 + t22679 - 1.*t22541*t2335*t7769 - 1.*t7769*t7933*t8372) + t7769*t7933*(t22693 + t22698 + t22541*t2335*t7905 + t7905*t7933*t8372))*var2[5];
  p_output1[47]=t22634*var2[0] + (-1.*t1797*t22666 - 1.*t2313*t7905*t7932*t7933)*var2[1] + (t22666*t7932 - 1.*t1797*t2313*t7905*t7933)*var2[2] + ((t22828 + t22831 + t22642*t8166 + t22646*t8385 + t22638*t8401 + t22654*t8404)*t8611 + t8401*(t22835 + t22837 - 1.*t22642*t8099 - 1.*t22584*t8385 - 1.*t22590*t8404 - 1.*t22638*t8611) + t22584*t8805 + t22646*t8824)*var2[3] + (t7928*(t22794 + t22799 + t22828 + t22831 + t22541*t22613*t7933 + t2335*t7926*t8375) + t2313*t7933*(t22803 + t22805 + t22835 + t22837 + t22541*t7926*t8024 - 1.*t7769*t7926*t7933*t8375) - 1.*t2313*t7769*t7933*t9731 - 1.*t2313*t2335*t9844)*var2[4] + (-1.*t22789*t2335*t7769 + t7769*t7933*(t22794 + t22799 + t22541*t7933 - 1.*t2335*t8372) + t2335*(t22803 + t22805 + t22541*t2335*t7769 + t7769*t7933*t8372) + t7933*(t22808 + t22809 + t9826))*var2[5];
  p_output1[48]=t8261*var2[0] + t8233*var2[1] + (t1797*t8209 + t7932*t8221)*var2[2] + (t8261*(t22929 - 1.*t22977*t8166 - 1.*t22967*t8401) + t8401*(t22932 + t22937 + t22977*t8221 + t22967*t8261 + t22960*t8385 + t22987*t8404) + t22960*t8459)*var2[3] + ((t22929 - 1.*t22890*t2335*t7933 + t22915*t7926*t7933)*t8209 + t2313*t7933*(t22878 + t22891 + t22932 + t22937 + t22915*t8217 + t22935*t8375) + t22909*t8935)*var2[4] + (t22533*t7933*t8199 + t2335*(t22878 + t22891 + t22890*t22892*t7905 + t22885*t8199 + t22870*t8364 - 1.*t2335*t8199*t8372))*var2[5] + (0.2255*t22870 + 0.1575*t7905)*var2[15];
  p_output1[49]=((t23048 + t23050 - 1.*t22977*t8221 - 1.*t22967*t8261 - 1.*t22960*t8385 - 1.*t22987*t8404)*t8611 + t8261*(t23045 + t22977*t8099 + t8484 + t8485 + t8491 + t22967*t8611) + t22960*t8663 + t8261*t8739)*var2[3] + (t7928*(t23004 + t23010 + t23048 + t23050 - 1.*t22915*t8217 - 1.*t22935*t8375) + t8209*(t23016 + t23045 + t22915*t8024 + t8484 + t9009 + t9017) + t22909*t9481 + t8209*t9501)*var2[4] + (t22684*t7905*t7933 + t22707*t7933*t8199 + t7769*t7933*(t23004 + t23006 + t23009 + t23010 - 1.*t22890*t22892*t7905 + t2335*t8199*t8372) + t7905*t7933*(t22566 + t22568 + t23016 + t23018 + t22890*t22892*t7769 + t9009))*var2[5] + (t22870*t23024 + t23034*t8199 + t8199*(t22566 + t23018 + t22890*t7769 + t7905*t8319) + t7905*(t23006 + t23009 - 1.*t22890*t7905 - 1.*t8199*t8319))*var2[15];
  p_output1[50]=t22960*var2[0] + (-1.*t1797*t22987 + t22909*t7932)*var2[1] + (t1797*t22909 + t22987*t7932)*var2[2] + ((t23095 + t22977*t8166 + t22967*t8401)*t8611 + t8401*(t23102 - 1.*t22977*t8099 - 1.*t22967*t8611 + t8718 + t8734 + t8737) + t8261*t8805)*var2[3] + (t7928*(t23095 + t22890*t2335*t7933 - 1.*t22915*t7926*t7933) + t2313*t7933*(t23075 + t23102 - 1.*t22915*t8024 + t8718 + t9488 + t9489) + t8209*t9731)*var2[4] + (t22789*t7905*t7933 + t2335*(t22682 + t22683 + t23075 - 1.*t22890*t22892*t7769 - 1.*t22885*t7905 + t9488))*var2[5] - 0.068*t8199*var2[15];
  p_output1[51]=t23185*var2[0] + (-1.*t1797*t23195 + t23191*t7932)*var2[1] + (t1797*t23191 + t23195*t7932)*var2[2] + (t8261*(t23215 - 1.*t23231*t8166 - 1.*t23227*t8401) + t8459*t8611 + t8401*(t23218 + t23231*t8221 + t23227*t8261 + t8653 + t8657 + t8659))*var2[3] + ((t23215 - 1.*t23169*t2335*t7933 + t23208*t7926*t7933)*t8209 + t7928*t8935 + t2313*t7933*(t23170 + t23218 + t23208*t8217 + t8653 + t9474 + t9476))*var2[4] + (t22533*t7769*t7933 + t2335*(t22703 + t22705 + t23170 + t22892*t23169*t7905 + t23162*t8199 + t9474))*var2[5] + (0.1575*t22870 + 0.2255*t7905)*var2[15] + (-0.325*t2539 - 1.*t23141*t2539 - 1.*t2539*t8308)*var2[16];
  p_output1[52]=(t8261*(t23277 + t23280 + t23231*t8099 + t23185*t8385 + t23195*t8404 + t23227*t8611) + t8611*t8663 + t23185*t8739 + t8611*(t23284 - 1.*t23231*t8221 - 1.*t23227*t8261 + t8819 + t8822 + t8823))*var2[3] + (t8209*(t23252 + t23254 + t23277 + t23280 + t23208*t8024 + t23181*t8375) + t7928*t9481 + t23191*t9501 + t7928*(t23247 + t23284 - 1.*t23208*t8217 + t8819 + t9826 + t9828))*var2[4] + (t22684*t22870*t7933 + t22707*t7769*t7933 + t7905*t7933*(t23251 + t23252 + t23254 + t23256 + t22892*t23169*t7769 - 1.*t22870*t2335*t8372) + t7769*t7933*(t22808 + t22809 + t23246 + t23247 - 1.*t22892*t23169*t7905 + t9826))*var2[5] + (t23034*t7769 + t23024*t7905 + t8199*(t23251 + t23256 + t23169*t7769 + t22870*t8319) + t7905*(t22809 + t23246 - 1.*t23169*t7905 - 1.*t7769*t8319))*var2[15];
  p_output1[53]=t8611*var2[0] + t8125*var2[1] + (t1797*t7928 + t7932*t8099)*var2[2] + ((t23331 + t23231*t8166 + t23227*t8401)*t8611 + t8401*(t23334 + t23337 - 1.*t23231*t8099 - 1.*t23185*t8385 - 1.*t23195*t8404 - 1.*t23227*t8611) + t23185*t8805)*var2[3] + (t7928*(t23331 + t23169*t2335*t7933 - 1.*t23208*t7926*t7933) + t2313*t7933*(t23313 + t23315 + t23334 + t23337 - 1.*t23208*t8024 - 1.*t23181*t8375) + t23191*t9731)*var2[4] + (t22789*t22870*t7933 + t2335*(t23313 + t23315 - 1.*t22892*t23169*t7769 - 1.*t23162*t7905 - 1.*t7769*t8364 + t22870*t2335*t8372))*var2[5] - 0.068*t7769*var2[15] + (-0.325*t7761 - 1.*t23141*t7761 - 1.*t7761*t8308)*var2[16];
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

#include "dJh_RrFoot_ParallelStance.hh"

namespace SymFunction
{

void dJh_RrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
