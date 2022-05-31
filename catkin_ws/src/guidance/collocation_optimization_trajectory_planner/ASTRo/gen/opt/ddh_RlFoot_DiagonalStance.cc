/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 16:59:19 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t250;
  double t222;
  double t248;
  double t256;
  double t273;
  double t278;
  double t281;
  double t285;
  double t299;
  double t306;
  double t364;
  double t394;
  double t427;
  double t420;
  double t436;
  double t440;
  double t452;
  double t460;
  double t469;
  double t474;
  double t477;
  double t480;
  double t202;
  double t148;
  double t154;
  double t156;
  double t196;
  double t203;
  double t497;
  double t501;
  double t514;
  double t517;
  double t520;
  double t528;
  double t532;
  double t533;
  double t539;
  double t540;
  double t543;
  double t544;
  double t545;
  double t547;
  double t550;
  double t130;
  double t146;
  double t580;
  double t555;
  double t647;
  double t655;
  double t656;
  double t687;
  double t693;
  double t699;
  double t708;
  double t709;
  double t719;
  double t726;
  double t727;
  double t732;
  double t659;
  double t663;
  double t664;
  double t670;
  double t674;
  double t679;
  double t815;
  double t875;
  double t901;
  double t1881;
  double t2109;
  double t2249;
  double t2308;
  double t2598;
  double t4647;
  double t4954;
  double t5014;
  double t5342;
  double t5398;
  double t5605;
  double t6334;
  double t6395;
  double t6463;
  double t5982;
  double t6317;
  double t6319;
  double t6467;
  double t6471;
  double t6548;
  double t6888;
  double t6902;
  double t6907;
  double t6712;
  double t6847;
  double t6885;
  double t6887;
  double t6946;
  double t6951;
  double t6958;
  double t6961;
  double t7008;
  double t7012;
  double t7013;
  double t7019;
  double t7023;
  double t7026;
  double t7030;
  double t7031;
  double t7034;
  double t7055;
  double t7075;
  double t7104;
  double t7269;
  double t7279;
  double t7283;
  double t7294;
  double t7297;
  double t7298;
  double t7301;
  double t7304;
  double t7305;
  double t7300;
  double t7308;
  double t7310;
  double t7317;
  double t7327;
  double t7385;
  double t7401;
  double t7405;
  double t7416;
  double t7417;
  double t7426;
  double t7429;
  double t7440;
  double t7541;
  double t7542;
  double t7578;
  double t7588;
  double t7599;
  double t7751;
  double t7770;
  double t7807;
  double t7979;
  double t7986;
  double t8010;
  double t8159;
  double t8160;
  double t8179;
  double t8030;
  double t8114;
  double t8031;
  double t8068;
  double t8082;
  double t8157;
  double t8186;
  double t7841;
  double t7842;
  double t7847;
  double t7865;
  double t7873;
  double t7904;
  double t7910;
  double t7927;
  double t7933;
  double t7959;
  double t8283;
  double t8289;
  double t8292;
  double t8276;
  double t8096;
  double t8307;
  double t8308;
  double t8309;
  double t8328;
  double t8332;
  double t8333;
  double t8185;
  double t8202;
  double t8207;
  double t8208;
  double t8211;
  double t8338;
  double t8222;
  double t8242;
  double t8350;
  double t8256;
  double t8257;
  double t8261;
  double t8382;
  double t8384;
  double t8385;
  double t8397;
  double t8399;
  double t8400;
  double t8409;
  double t8410;
  double t8411;
  double t8413;
  double t8414;
  double t8415;
  double t8434;
  double t8435;
  double t8442;
  double t8444;
  double t8450;
  double t8453;
  double t8456;
  double t8464;
  double t8466;
  double t8474;
  double t8462;
  double t8486;
  double t8492;
  double t8495;
  double t8499;
  double t8515;
  double t8521;
  double t8522;
  double t8526;
  double t8530;
  double t8540;
  double t8386;
  double t8387;
  double t8389;
  double t8390;
  double t8623;
  double t8627;
  double t8628;
  double t8632;
  double t8633;
  double t8639;
  double t8643;
  double t8648;
  double t8652;
  double t8653;
  double t8657;
  double t8637;
  double t8669;
  double t8678;
  double t8681;
  double t8693;
  double t8694;
  double t8695;
  double t8687;
  double t8692;
  double t8709;
  double t8710;
  double t8711;
  double t8713;
  double t8714;
  double t8716;
  double t8724;
  double t8726;
  double t8727;
  double t8485;
  double t8754;
  double t8755;
  double t8758;
  double t8759;
  double t8760;
  double t8761;
  double t8764;
  double t8766;
  double t8775;
  double t8791;
  double t8792;
  double t8793;
  double t8794;
  double t8796;
  double t8798;
  double t8800;
  double t8802;
  double t205;
  double t579;
  double t8867;
  double t8872;
  double t8873;
  double t8884;
  double t8892;
  double t8895;
  double t8828;
  double t8829;
  double t8834;
  double t8839;
  double t8840;
  double t8842;
  double t8502;
  double t8943;
  double t8944;
  double t8945;
  double t8946;
  double t8947;
  double t8948;
  double t8949;
  double t8909;
  double t8910;
  double t8911;
  double t8552;
  double t8553;
  double t8965;
  double t8966;
  double t8967;
  double t8969;
  double t8972;
  double t8973;
  double t8974;
  double t8952;
  double t8957;
  double t8958;
  double t8960;
  double t8962;
  double t8963;
  double t8992;
  double t8994;
  double t9000;
  double t9002;
  double t8982;
  double t8983;
  double t8984;
  double t8985;
  double t8986;
  double t8987;
  double t8988;
  double t8989;
  double t8990;
  double t8993;
  double t8998;
  double t9001;
  double t9005;
  double t9074;
  double t9011;
  double t9012;
  double t9078;
  double t9023;
  double t9026;
  double t9031;
  double t9032;
  double t7698;
  double t7709;
  double t7717;
  double t9132;
  double t9136;
  double t9143;
  double t9154;
  double t9158;
  double t9146;
  double t9183;
  double t9187;
  double t8395;
  double t8401;
  double t8404;
  double t9202;
  double t9204;
  double t9245;
  double t9252;
  double t9261;
  double t9307;
  double t9313;
  double t9317;
  double t8735;
  double t8736;
  double t8737;
  double t8570;
  double t8572;
  double t9359;
  double t9360;
  double t9361;
  double t9365;
  double t9367;
  double t9368;
  double t8592;
  double t9371;
  double t9372;
  double t9374;
  double t9377;
  double t9378;
  double t9379;
  double t8594;
  double t8596;
  double t8599;
  double t8601;
  double t8608;
  double t8610;
  double t8619;
  double t8620;
  double t9205;
  double t9394;
  double t9395;
  double t9396;
  double t9397;
  double t9398;
  double t9399;
  double t9400;
  double t9388;
  double t9389;
  double t9390;
  double t9222;
  double t9223;
  double t9422;
  double t9423;
  double t9426;
  double t9433;
  double t9434;
  double t9435;
  double t9437;
  double t9405;
  double t9408;
  double t9409;
  double t9411;
  double t9412;
  double t9413;
  double t740;
  double t5229;
  double t5973;
  double t9447;
  double t9458;
  double t9460;
  double t9544;
  double t9551;
  double t9686;
  double t9695;
  double t9707;
  double t9711;
  double t9617;
  double t9619;
  double t9620;
  double t9621;
  double t9622;
  double t9627;
  double t9628;
  double t9653;
  double t9657;
  double t9669;
  double t9693;
  double t9710;
  double t9715;
  double t9719;
  double t9768;
  double t9725;
  double t9726;
  double t9778;
  double t9737;
  double t9739;
  double t9752;
  t250 = Cos(var1[11]);
  t222 = Sin(var1[11]);
  t248 = 0.28121*t222;
  t256 = -1.*t250;
  t273 = 1. + t256;
  t278 = -0.50321*t273;
  t281 = -0.19821*t250;
  t285 = t278 + t281;
  t299 = t285*t222;
  t306 = -0.305*t250*t222;
  t364 = t248 + t299 + t306;
  t394 = Cos(var1[10]);
  t427 = Sin(var1[10]);
  t420 = -1.*t394*t250;
  t436 = -1.*t427*t222;
  t440 = t420 + t436;
  t452 = 0.15121*t440;
  t460 = t394*t250;
  t469 = t427*t222;
  t474 = t460 + t469;
  t477 = 0.15121*t474;
  t480 = t452 + t477;
  t202 = Sin(var1[9]);
  t148 = Cos(var1[9]);
  t154 = -1.*t148;
  t156 = 1. + t154;
  t196 = -0.15121*t156;
  t203 = 0.15121*t202;
  t497 = -1.*t394;
  t501 = 1. + t497;
  t514 = -0.28121*t501;
  t517 = t394*t285;
  t520 = 0.305*t427*t222;
  t528 = t514 + t517 + t520;
  t532 = t148*t528;
  t533 = t196 + t532;
  t539 = -1.*t202*t533;
  t540 = 0.15121*t156;
  t543 = 0.15121*t148;
  t544 = t202*t528;
  t545 = t540 + t543 + t203 + t544;
  t547 = t148*t545;
  t550 = t539 + t547;
  t130 = Cos(var1[4]);
  t146 = Cos(var1[5]);
  t580 = Sin(var1[5]);
  t555 = Sin(var1[4]);
  t647 = t148*t130*t146;
  t655 = -1.*t130*t202*t580;
  t656 = t647 + t655;
  t687 = -1.*t250*t427;
  t693 = t394*t222;
  t699 = t687 + t693;
  t708 = t699*t555;
  t709 = t148*t146*t440;
  t719 = -1.*t202*t440*t580;
  t726 = t709 + t719;
  t727 = t130*t726;
  t732 = t708 + t727;
  t659 = t427*t555;
  t663 = t394*t656;
  t664 = t659 + t663;
  t670 = t394*t555;
  t674 = -1.*t427*t656;
  t679 = t670 + t674;
  t815 = Sin(var1[3]);
  t875 = t146*t202*t440;
  t901 = t148*t440*t580;
  t1881 = t875 + t901;
  t2109 = t815*t1881;
  t2249 = Cos(var1[3]);
  t2308 = t130*t699;
  t2598 = -1.*t555*t726;
  t4647 = t2308 + t2598;
  t4954 = t2249*t4647;
  t5014 = t2109 + t4954;
  t5342 = t2249*t1881;
  t5398 = -1.*t815*t4647;
  t5605 = t5342 + t5398;
  t6334 = -1.*t148*t146;
  t6395 = t202*t580;
  t6463 = t6334 + t6395;
  t5982 = t146*t202*t699;
  t6317 = t148*t699*t580;
  t6319 = t5982 + t6317;
  t6467 = t146*t545;
  t6471 = t533*t580;
  t6548 = t6467 + t6471;
  t6888 = t146*t533;
  t6902 = -1.*t545*t580;
  t6907 = t6888 + t6902;
  t6712 = -1.*t6463*t6548;
  t6847 = t146*t202;
  t6885 = t148*t580;
  t6887 = t6847 + t6885;
  t6946 = -1.*t6887*t6907;
  t6951 = t6712 + t6946;
  t6958 = t6319*t6951;
  t6961 = 0.28121*t427;
  t7008 = t285*t427;
  t7012 = -0.305*t394*t222;
  t7013 = t6961 + t7008 + t7012;
  t7019 = t7013*t474;
  t7023 = t6319*t6548;
  t7026 = t148*t146*t699;
  t7030 = -1.*t202*t699*t580;
  t7031 = t7026 + t7030;
  t7034 = t7031*t6907;
  t7055 = t7019 + t7023 + t7034;
  t7075 = t6463*t7055;
  t7104 = t6958 + t7075;
  t7269 = t474*t555;
  t7279 = t130*t7031;
  t7283 = t7269 + t7279;
  t7294 = t7013*t555;
  t7297 = t130*t6907;
  t7298 = t7294 + t7297;
  t7301 = t130*t7013;
  t7304 = -1.*t555*t6907;
  t7305 = t7301 + t7304;
  t7300 = -1.*t130*t6887*t7298;
  t7308 = t555*t6887*t7305;
  t7310 = t6712 + t7300 + t7308;
  t7317 = t7283*t7310;
  t7327 = t7283*t7298;
  t7385 = t130*t474;
  t7401 = -1.*t555*t7031;
  t7405 = t7385 + t7401;
  t7416 = t7405*t7305;
  t7417 = t7023 + t7327 + t7416;
  t7426 = t130*t6887*t7417;
  t7429 = t7317 + t7426;
  t7440 = -1.*t699*t555;
  t7541 = -1.*t130*t726;
  t7542 = t7440 + t7541;
  t7578 = -1.*t7013*t555;
  t7588 = -1.*t130*t6907;
  t7599 = t7578 + t7588;
  t7751 = -1.*t146*t202*t440;
  t7770 = -1.*t148*t440*t580;
  t7807 = t7751 + t7770;
  t7979 = -1.*t146*t545;
  t7986 = -1.*t533*t580;
  t8010 = t7979 + t7986;
  t8159 = -1.*t146*t202*t699;
  t8160 = -1.*t148*t699*t580;
  t8179 = t8159 + t8160;
  t8030 = -1.*t6887*t6548;
  t8114 = -1.*t6463*t6907;
  t8031 = t148*t146;
  t8068 = -1.*t202*t580;
  t8082 = t8031 + t8068;
  t8157 = t7031*t6548;
  t8186 = t6319*t6907;
  t7841 = var2[0]*t130*t7807;
  t7842 = t815*t555*t7807;
  t7847 = t2249*t726;
  t7865 = t7842 + t7847;
  t7873 = var2[1]*t7865;
  t7904 = -1.*t2249*t555*t7807;
  t7910 = t815*t726;
  t7927 = t7904 + t7910;
  t7933 = var2[2]*t7927;
  t7959 = t7031*t6951;
  t8283 = -0.15121*t202;
  t8289 = -1.*t202*t528;
  t8292 = t8283 + t8289;
  t8276 = t543 + t532;
  t8096 = -1.*t8082*t6907;
  t8307 = t146*t8292;
  t8308 = -1.*t8276*t580;
  t8309 = t8307 + t8308;
  t8328 = t146*t8276;
  t8332 = t8292*t580;
  t8333 = t8328 + t8332;
  t8185 = t8179*t6907;
  t8202 = t6887*t7055;
  t8207 = t130*t8179*t7310;
  t8208 = Power(t130,2);
  t8211 = Power(t555,2);
  t8338 = -1.*t6463*t8333;
  t8222 = -1.*t130*t8082*t7298;
  t8242 = t555*t8082*t7305;
  t8350 = t6319*t8333;
  t8256 = t130*t8179*t7298;
  t8257 = -1.*t555*t8179*t7305;
  t8261 = t130*t8082*t7417;
  t8382 = t250*t427;
  t8384 = -1.*t394*t222;
  t8385 = t8382 + t8384;
  t8397 = t148*t146*t8385;
  t8399 = -1.*t202*t8385*t580;
  t8400 = t8397 + t8399;
  t8409 = t146*t202*t8385;
  t8410 = t148*t8385*t580;
  t8411 = t8409 + t8410;
  t8413 = t130*t440;
  t8414 = -1.*t555*t8400;
  t8415 = t8413 + t8414;
  t8434 = -0.28121*t427;
  t8435 = -1.*t285*t427;
  t8442 = 0.305*t394*t222;
  t8444 = t8434 + t8435 + t8442;
  t8450 = t146*t202*t8444;
  t8453 = t148*t8444*t580;
  t8456 = t8450 + t8453;
  t8464 = t148*t146*t8444;
  t8466 = -1.*t202*t8444*t580;
  t8474 = t8464 + t8466;
  t8462 = -1.*t6463*t8456;
  t8486 = 0.28121*t394;
  t8492 = t8486 + t517 + t520;
  t8495 = t8456*t6319;
  t8499 = t1881*t6548;
  t8515 = t8492*t555;
  t8521 = t130*t8474;
  t8522 = t8515 + t8521;
  t8526 = t130*t8492;
  t8530 = -1.*t555*t8474;
  t8540 = t8526 + t8530;
  t8386 = 0.15121*t8385;
  t8387 = 0.15121*t699;
  t8389 = t8386 + t8387;
  t8390 = var2[9]*t8389;
  t8623 = 0.305*t250*t427;
  t8627 = t8623 + t7012;
  t8628 = t146*t202*t8627;
  t8632 = t148*t8627*t580;
  t8633 = t8628 + t8632;
  t8639 = t148*t146*t8627;
  t8643 = -1.*t202*t8627*t580;
  t8648 = t8639 + t8643;
  t8652 = t146*t202*t474;
  t8653 = t148*t474*t580;
  t8657 = t8652 + t8653;
  t8637 = -1.*t6463*t8633;
  t8669 = -0.305*t394*t250;
  t8678 = -0.305*t427*t222;
  t8681 = t8669 + t8678;
  t8693 = t148*t146*t474;
  t8694 = -1.*t202*t474*t580;
  t8695 = t8693 + t8694;
  t8687 = t8633*t6319;
  t8692 = t8657*t6548;
  t8709 = t8681*t555;
  t8710 = t130*t8648;
  t8711 = t8709 + t8710;
  t8713 = t130*t8681;
  t8714 = -1.*t555*t8648;
  t8716 = t8713 + t8714;
  t8724 = t8385*t555;
  t8726 = t130*t8695;
  t8727 = t8724 + t8726;
  t8485 = t7013*t699;
  t8754 = t440*t528;
  t8755 = t8485 + t8754;
  t8758 = t474*t8755;
  t8759 = -1.*t699*t528;
  t8760 = -1.*t7013*t474;
  t8761 = t8759 + t8760;
  t8764 = t699*t8761;
  t8766 = -0.15121 + t8758 + t8764;
  t8775 = -1.*t148*t699*t533;
  t8791 = -1.*t202*t699*t545;
  t8792 = t8760 + t8775 + t8791;
  t8793 = t699*t8792;
  t8794 = t148*t440*t533;
  t8796 = t202*t440*t545;
  t8798 = t8485 + t8794 + t8796;
  t8800 = t474*t8798;
  t8802 = t8793 + t8800;
  t205 = t196 + t203;
  t579 = t540 + t203;
  t8867 = t815*t555*t6887;
  t8872 = t2249*t6463;
  t8873 = t8867 + t8872;
  t8884 = -1.*t2249*t555*t6887;
  t8892 = t815*t6463;
  t8895 = t8884 + t8892;
  t8828 = t146*t815*t555;
  t8829 = t2249*t580;
  t8834 = t8828 + t8829;
  t8839 = t2249*t146;
  t8840 = -1.*t815*t555*t580;
  t8842 = t8839 + t8840;
  t8502 = t726*t6907;
  t8943 = -1.*t6319*t6548;
  t8944 = -1.*t7031*t6907;
  t8945 = t8760 + t8943 + t8944;
  t8946 = t1881*t8945;
  t8947 = t8485 + t8499 + t8502;
  t8948 = t6319*t8947;
  t8949 = t8946 + t8948;
  t8909 = t148*t8834;
  t8910 = t202*t8842;
  t8911 = t8909 + t8910;
  t8552 = t732*t7298;
  t8553 = t4647*t7305;
  t8965 = -1.*t7283*t7298;
  t8966 = -1.*t7405*t7305;
  t8967 = t8943 + t8965 + t8966;
  t8969 = t732*t8967;
  t8972 = t8499 + t8552 + t8553;
  t8973 = t7283*t8972;
  t8974 = t8969 + t8973;
  t8952 = -1.*t130*t427*t815;
  t8957 = t394*t8911;
  t8958 = t8952 + t8957;
  t8960 = -1.*t394*t130*t815;
  t8962 = -1.*t427*t8911;
  t8963 = t8960 + t8962;
  t8992 = -1.*t7031*t6548;
  t8994 = -1.*t6319*t6907;
  t9000 = t726*t6548;
  t9002 = t1881*t6907;
  t8982 = var2[0]*t130*t8082;
  t8983 = t815*t6887;
  t8984 = -1.*t2249*t555*t8082;
  t8985 = t8983 + t8984;
  t8986 = var2[2]*t8985;
  t8987 = t2249*t6887;
  t8988 = t815*t555*t8082;
  t8989 = t8987 + t8988;
  t8990 = var2[1]*t8989;
  t8993 = -1.*t8179*t6907;
  t8998 = t726*t8945;
  t9001 = t7807*t6907;
  t9005 = t7031*t8947;
  t9074 = -1.*t6319*t8333;
  t9011 = -1.*t130*t8179*t7298;
  t9012 = t555*t8179*t7305;
  t9078 = t1881*t8333;
  t9023 = t130*t7807*t7298;
  t9026 = -1.*t555*t7807*t7305;
  t9031 = t130*t7807*t8967;
  t9032 = t130*t8179*t8972;
  t7698 = -1.*t474*t555;
  t7709 = -1.*t130*t7031;
  t7717 = t7698 + t7709;
  t9132 = t7013*t440;
  t9136 = t699*t8492;
  t9143 = -1.*t7013*t699;
  t9154 = Power(t148,2);
  t9158 = Power(t202,2);
  t9146 = -1.*t8492*t474;
  t9183 = t8456*t1881;
  t9187 = t8411*t6548;
  t8395 = t440*t555;
  t8401 = t130*t8400;
  t8404 = t8395 + t8401;
  t9202 = -1.*t8456*t6319;
  t9204 = -1.*t1881*t6548;
  t9245 = t699*t8681;
  t9252 = -1.*t8385*t7013;
  t9261 = -1.*t8681*t474;
  t9307 = t8633*t1881;
  t9313 = -1.*t8633*t6319;
  t9317 = -1.*t8657*t6548;
  t8735 = t130*t8385;
  t8736 = -1.*t555*t8695;
  t8737 = t8735 + t8736;
  t8570 = 0.28121*t250;
  t8572 = t285*t250;
  t9359 = Power(t222,2);
  t9360 = 0.305*t9359;
  t9361 = t8570 + t8572 + t9360;
  t9365 = t202*t533;
  t9367 = -1.*t148*t545;
  t9368 = t9365 + t9367;
  t8592 = var2[0]*t7283;
  t9371 = -1.*t2249*t146*t555;
  t9372 = t815*t580;
  t9374 = t9371 + t9372;
  t9377 = t146*t815;
  t9378 = t2249*t555*t580;
  t9379 = t9377 + t9378;
  t8594 = t815*t6319;
  t8596 = t2249*t7405;
  t8599 = t8594 + t8596;
  t8601 = var2[2]*t8599;
  t8608 = t2249*t6319;
  t8610 = -1.*t815*t7405;
  t8619 = t8608 + t8610;
  t8620 = var2[1]*t8619;
  t9205 = -1.*t726*t6907;
  t9394 = t6463*t6548;
  t9395 = t6887*t6907;
  t9396 = t9394 + t9395;
  t9397 = t1881*t9396;
  t9398 = t9143 + t9204 + t9205;
  t9399 = t6463*t9398;
  t9400 = t9397 + t9399;
  t9388 = t148*t9374;
  t9389 = t202*t9379;
  t9390 = t9388 + t9389;
  t9222 = -1.*t732*t7298;
  t9223 = -1.*t4647*t7305;
  t9422 = t130*t6887*t7298;
  t9423 = -1.*t555*t6887*t7305;
  t9426 = t9394 + t9422 + t9423;
  t9433 = t732*t9426;
  t9434 = t9204 + t9222 + t9223;
  t9435 = t130*t6887*t9434;
  t9437 = t9433 + t9435;
  t9405 = t2249*t130*t427;
  t9408 = t394*t9390;
  t9409 = t9405 + t9408;
  t9411 = t394*t2249*t130;
  t9412 = -1.*t427*t9390;
  t9413 = t9411 + t9412;
  t740 = var2[0]*t732;
  t5229 = var2[2]*t5014;
  t5973 = var2[1]*t5605;
  t9447 = t6463*t8456;
  t9458 = -1.*t8456*t1881;
  t9460 = -1.*t8411*t6548;
  t9544 = t6463*t8633;
  t9551 = -1.*t8633*t1881;
  t9686 = t6887*t6548;
  t9695 = t6463*t6907;
  t9707 = -1.*t726*t6548;
  t9711 = -1.*t1881*t6907;
  t9617 = var2[0]*t130*t8179;
  t9619 = t815*t555*t8179;
  t9620 = t2249*t7031;
  t9621 = t9619 + t9620;
  t9622 = var2[1]*t9621;
  t9627 = -1.*t2249*t555*t8179;
  t9628 = t815*t7031;
  t9653 = t9627 + t9628;
  t9657 = var2[2]*t9653;
  t9669 = t726*t9396;
  t9693 = t8082*t6907;
  t9710 = -1.*t7807*t6907;
  t9715 = t6887*t9398;
  t9719 = t130*t7807*t9426;
  t9768 = t6463*t8333;
  t9725 = t130*t8082*t7298;
  t9726 = -1.*t555*t8082*t7305;
  t9778 = -1.*t1881*t8333;
  t9737 = -1.*t130*t7807*t7298;
  t9739 = t555*t7807*t7305;
  t9752 = t130*t8082*t9434;
  p_output1[0]=t130*t146*t205 + t5229 + 0.28121*t427*t555 - 1.*t130*t579*t580 + 0.15121*(-1.*t130*t146*t202 - 1.*t130*t148*t580) + t5973 - 0.28121*t501*t656 - 0.50321*t273*t664 - 0.50321*t222*t679 - 0.19821*(t250*t664 - 1.*t222*t679) + t740 + var1[0] + t7429*var2[3] + ((-1.*t2249*t4647 - 1.*t1881*t815)*var2[1] + t5605*var2[2])*var2[3] + t7104*var2[4] + (t4647*var2[0] - 1.*t7542*t815*var2[1] + t2249*t7542*var2[2] + (t7310*t7405 - 1.*t555*t6887*t7417 + t7283*(t555*t6887*t7298 + t555*t6887*t7599) + t130*t6887*(t7283*t7305 + t7298*t7405 + t7405*t7599 + t7305*t7717))*var2[3])*var2[4] + t474*t550*var2[5] + (t7841 + t7873 + t7933 + (t8207 + t7283*(t8030 + t8114 - 1.*t6887*t8010*t8208 - 1.*t6887*t8010*t8211 + t8222 + t8242) + t130*t6887*(t130*t7283*t8010 - 1.*t555*t7405*t8010 + t8157 + t8186 + t8256 + t8257) + t8261)*var2[3] + (t7959 + t6319*(-1.*t6887*t8010 + t8030 + t8096 + t8114) + t6463*(t7031*t8010 + t8157 + t8185 + t8186) + t8202)*var2[4])*var2[5] + t480*var2[9] + (t7841 + t7873 + t7933 + (t8207 + t8261 + t7283*(t8030 + t8222 + t8242 - 1.*t6887*t8208*t8309 - 1.*t6887*t8211*t8309 + t8338) + t130*t6887*(t8157 + t8256 + t8257 + t130*t7283*t8309 - 1.*t555*t7405*t8309 + t8350))*var2[3] + (t7959 + t8202 + t6319*(t8030 + t8096 - 1.*t6887*t8309 + t8338) + t6463*(t8157 + t8185 + t7031*t8309 + t8350))*var2[4] + t474*(-1.*t148*t533 - 1.*t202*t545 + t148*t8276 - 1.*t202*t8292)*var2[5])*var2[9] + t364*var2[10] + (t8390 + t8404*var2[0] + (t2249*t8411 - 1.*t815*t8415)*var2[1] + (t815*t8411 + t2249*t8415)*var2[2] + (t7310*t732 + t7283*(t8462 - 1.*t130*t6887*t8522 + t555*t6887*t8540) + t130*t6887*(t8495 + t8499 + t7283*t8522 + t7405*t8540 + t8552 + t8553))*var2[3] + (t1881*t6951 + t6319*(t8462 - 1.*t6887*t8474) + t6463*(t7031*t8474 + t8485 + t474*t8492 + t8495 + t8499 + t8502))*var2[4] + t550*t699*var2[5])*var2[10] + (t8390 + t8592 + t8601 + t8620 + (t7283*(t8637 - 1.*t130*t6887*t8711 + t555*t6887*t8716) + t7310*t8727 + t130*t6887*(t8687 + t8692 + t7283*t8711 + t7405*t8716 + t7298*t8727 + t7305*t8737))*var2[3] + (t6319*(t8637 - 1.*t6887*t8648) + t6951*t8657 + t6463*(t7013*t8385 + t7031*t8648 + t474*t8681 + t8687 + t8692 + t6907*t8695))*var2[4] + t550*t8385*var2[5] + (-0.305*Power(t250,2) + t8570 + t8572)*var2[10])*var2[11] + t732*var3[0] + t5605*var3[1] + t5014*var3[2] + t7429*var3[3] + t7104*var3[4] + t474*t550*var3[5] + t480*var3[9] + t364*var3[10] - 1.*var4[0];
  p_output1[1]=-0.28121*t130*t427*t815 + t205*t8834 + t579*t8842 + 0.15121*(-1.*t202*t8834 + t148*t8842) - 0.28121*t501*t8911 - 0.50321*t273*t8958 - 0.50321*t222*t8963 - 0.19821*(t250*t8958 - 1.*t222*t8963) + var1[1] + t130*t6887*var2[0] + t8873*var2[1] + t8895*var2[2] + t8974*var2[3] + ((t2249*t555*t6887 - 1.*t6463*t815)*var2[1] + t8873*var2[2])*var2[3] + t8949*var2[4] + (-1.*t555*t6887*var2[0] + t130*t6887*t815*var2[1] - 1.*t130*t2249*t6887*var2[2] + (t7283*(t4647*t7298 + t7305*t732 + t7305*t7542 + t4647*t7599) + t732*(-1.*t7283*t7305 - 1.*t7298*t7405 - 1.*t7405*t7599 - 1.*t7305*t7717) + t4647*t8967 + t7405*t8972)*var2[3])*var2[4] + t8802*var2[5] + (t8982 + t8986 + t8990 + (t732*(-1.*t130*t7283*t8010 + t555*t7405*t8010 + t8992 + t8994 + t9011 + t9012) + t7283*(-1.*t4647*t555*t8010 + t130*t732*t8010 + t9000 + t9002 + t9023 + t9026) + t9031 + t9032)*var2[3] + (t1881*(-1.*t7031*t8010 + t8992 + t8993 + t8994) + t8998 + t6319*(t726*t8010 + t9000 + t9001 + t9002) + t9005)*var2[4])*var2[5] + t8766*var2[9] + (t8982 + t8986 + t8990 + (t9031 + t9032 + t732*(-1.*t130*t7283*t8309 + t555*t7405*t8309 + t8992 + t9011 + t9012 + t9074) + t7283*(-1.*t4647*t555*t8309 + t130*t732*t8309 + t9000 + t9023 + t9026 + t9078))*var2[3] + (t8998 + t9005 + t1881*(-1.*t7031*t8309 + t8992 + t8993 + t9074) + t6319*(t726*t8309 + t9000 + t9001 + t9078))*var2[4] + (t474*(-1.*t202*t440*t533 + t148*t440*t545 + t202*t440*t8276 + t148*t440*t8292) + t699*(t202*t533*t699 - 1.*t148*t545*t699 - 1.*t202*t699*t8276 - 1.*t148*t699*t8292))*var2[5])*var2[9] + ((t8404*t8967 + t732*t8972 + t7283*(t7298*t8404 + t7305*t8415 + t732*t8522 + t4647*t8540 + t9183 + t9187) + t732*(-1.*t7283*t8522 - 1.*t7405*t8540 + t9202 + t9204 + t9222 + t9223))*var2[3] + (t8411*t8945 + t1881*t8947 + t6319*(t6907*t8400 + t726*t8474 + t9132 + t9136 + t9183 + t9187) + t1881*(-1.*t7031*t8474 + t9143 + t9146 + t9202 + t9204 + t9205))*var2[4] + (t440*t8792 + t699*t8798 + t474*(t148*t533*t8385 + t202*t545*t8385 + t9132 + t9136 + t440*t8444*t9154 + t440*t8444*t9158) + t699*(-1.*t148*t440*t533 - 1.*t202*t440*t545 + t9143 + t9146 - 1.*t699*t8444*t9154 - 1.*t699*t8444*t9158))*var2[5] + (t699*t8755 + t440*t8761 + t474*(t528*t8385 + t440*t8444 + t9132 + t9136) + t699*(-1.*t440*t528 - 1.*t699*t8444 + t9143 + t9146))*var2[9])*var2[10] + ((t7283*t8967 + t8727*t8972 + t7283*(t7023 + t7327 + t7416 + t732*t8711 + t4647*t8716 + t9307) + t732*(-1.*t7283*t8711 - 1.*t7405*t8716 - 1.*t7298*t8727 - 1.*t7305*t8737 + t9313 + t9317))*var2[3] + (t6319*t8945 + t8657*t8947 + t6319*(t7019 + t7023 + t7034 + t726*t8648 + t9245 + t9307) + t1881*(-1.*t7031*t8648 - 1.*t6907*t8695 + t9252 + t9261 + t9313 + t9317))*var2[4] + (t474*t8792 + t8385*t8798 + t474*(t148*t533*t699 + t202*t545*t699 + t7019 + t440*t8627*t9154 + t440*t8627*t9158 + t9245) + t699*(-1.*t148*t474*t533 - 1.*t202*t474*t545 - 1.*t699*t8627*t9154 - 1.*t699*t8627*t9158 + t9252 + t9261))*var2[5] + (t8385*t8755 + t474*t8761 + t474*(t528*t699 + t7019 + t440*t8627 + t9245) + t699*(-1.*t474*t528 - 1.*t699*t8627 + t9252 + t9261))*var2[9])*var2[11] + t130*t6887*var3[0] + t8873*var3[1] + t8895*var3[2] + t8974*var3[3] + t8949*var3[4] + t8802*var3[5] + t8766*var3[9] - 1.*var4[1];
  p_output1[2]=0.28121*t130*t2249*t427 + t8592 + t8601 + t8620 + t205*t9374 + t579*t9379 + 0.15121*(-1.*t202*t9374 + t148*t9379) - 0.28121*t501*t9390 - 0.50321*t273*t9409 - 0.50321*t222*t9413 - 0.19821*(t250*t9409 - 1.*t222*t9413) + var1[2] + t9437*var2[3] + ((-1.*t2249*t7405 - 1.*t6319*t815)*var2[1] + t8619*var2[2])*var2[3] + t9400*var2[4] + (t7405*var2[0] - 1.*t7717*t815*var2[1] + t2249*t7717*var2[2] + (t130*t6887*(-1.*t4647*t7298 - 1.*t7305*t732 - 1.*t7305*t7542 - 1.*t4647*t7599) + t732*(-1.*t555*t6887*t7298 - 1.*t555*t6887*t7599) + t4647*t9426 - 1.*t555*t6887*t9434)*var2[3])*var2[4] + t699*t9368*var2[5] + (t9617 + t9622 + t9657 + (t9719 + t732*(t6887*t8010*t8208 + t6887*t8010*t8211 + t9686 + t9695 + t9725 + t9726) + t130*t6887*(t4647*t555*t8010 - 1.*t130*t732*t8010 + t9707 + t9711 + t9737 + t9739) + t9752)*var2[3] + (t9669 + t1881*(t6887*t8010 + t9686 + t9693 + t9695) + t6463*(-1.*t726*t8010 + t9707 + t9710 + t9711) + t9715)*var2[4])*var2[5] + (t9617 + t9622 + t9657 + (t9719 + t9752 + t732*(t6887*t8208*t8309 + t6887*t8211*t8309 + t9686 + t9725 + t9726 + t9768) + t130*t6887*(t4647*t555*t8309 - 1.*t130*t732*t8309 + t9707 + t9737 + t9739 + t9778))*var2[3] + (t9669 + t9715 + t1881*(t6887*t8309 + t9686 + t9693 + t9768) + t6463*(-1.*t726*t8309 + t9707 + t9710 + t9778))*var2[4] + t699*(t148*t533 + t202*t545 - 1.*t148*t8276 + t202*t8292)*var2[5])*var2[9] + t9361*var2[10] + (t5229 + t5973 + t740 + (t8404*t9426 + t732*(t130*t6887*t8522 - 1.*t555*t6887*t8540 + t9447) + t130*t6887*(-1.*t7298*t8404 - 1.*t7305*t8415 - 1.*t732*t8522 - 1.*t4647*t8540 + t9458 + t9460))*var2[3] + (t8411*t9396 + t1881*(t6887*t8474 + t9447) + t6463*(-1.*t440*t7013 - 1.*t6907*t8400 - 1.*t726*t8474 - 1.*t699*t8492 + t9458 + t9460))*var2[4] + t440*t9368*var2[5])*var2[10] - 0.305*var2[11] + (t8727*var2[0] + (t2249*t8657 - 1.*t815*t8737)*var2[1] + (t815*t8657 + t2249*t8737)*var2[2] + (t7283*t9426 + t732*(t130*t6887*t8711 - 1.*t555*t6887*t8716 + t9544) + t130*t6887*(-1.*t732*t8711 - 1.*t4647*t8716 + t8943 + t8965 + t8966 + t9551))*var2[3] + (t6319*t9396 + t1881*(t6887*t8648 + t9544) + t6463*(-1.*t726*t8648 - 1.*t699*t8681 + t8760 + t8943 + t8944 + t9551))*var2[4] + t474*t9368*var2[5] + (-0.28121*t222 + 0.305*t222*t250 - 1.*t222*t285)*var2[10])*var2[11] + t7283*var3[0] + t8619*var3[1] + t8599*var3[2] + t9437*var3[3] + t9400*var3[4] + t699*t9368*var3[5] + t9361*var3[10] - 0.305*var3[11] - 1.*var4[2];
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "ddh_RlFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void ddh_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
