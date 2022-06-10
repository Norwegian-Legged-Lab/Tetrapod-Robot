/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:06:02 GMT+02:00
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
  double t898;
  double t777;
  double t834;
  double t899;
  double t897;
  double t1090;
  double t1238;
  double t1299;
  double t345;
  double t328;
  double t1387;
  double t1713;
  double t2891;
  double t3226;
  double t1284;
  double t3171;
  double t3193;
  double t151;
  double t3270;
  double t3443;
  double t3520;
  double t3618;
  double t3677;
  double t3723;
  double t5605;
  double t8180;
  double t8188;
  double t8243;
  double t8244;
  double t8245;
  double t8319;
  double t8320;
  double t8321;
  double t8322;
  double t8324;
  double t8326;
  double t8328;
  double t8329;
  double t8331;
  double t8333;
  double t8334;
  double t8335;
  double t8351;
  double t8354;
  double t8355;
  double t8373;
  double t8374;
  double t8375;
  double t8381;
  double t8386;
  double t8387;
  double t8389;
  double t8391;
  double t8392;
  double t8372;
  double t8379;
  double t8393;
  double t8399;
  double t8366;
  double t8367;
  double t8368;
  double t8371;
  double t8400;
  double t8410;
  double t8411;
  double t8412;
  double t8414;
  double t8422;
  double t8423;
  double t8425;
  double t8427;
  double t8432;
  double t8433;
  double t8438;
  double t8441;
  double t8449;
  double t8451;
  double t8457;
  double t8458;
  double t8466;
  double t8473;
  double t8474;
  double t8490;
  double t8492;
  double t8494;
  double t8516;
  double t8518;
  double t8521;
  double t8504;
  double t8507;
  double t8508;
  double t8478;
  double t8479;
  double t8482;
  double t8362;
  double t8363;
  double t8364;
  double t8575;
  double t8576;
  double t8578;
  double t8547;
  double t8549;
  double t8550;
  double t8728;
  double t8729;
  double t8730;
  double t8525;
  double t8532;
  double t8757;
  double t8759;
  double t8761;
  double t8511;
  double t8515;
  double t8530;
  double t8781;
  double t8782;
  double t8785;
  double t8764;
  double t8533;
  double t8536;
  double t8540;
  double t8780;
  double t8791;
  double t8572;
  double t8601;
  double t8581;
  double t8582;
  double t8583;
  double t8841;
  double t8844;
  double t8603;
  double t8609;
  double t8610;
  double t8861;
  double t8865;
  double t8664;
  double t8694;
  double t8660;
  double t8663;
  double t8680;
  double t8912;
  double t8696;
  double t8699;
  double t8702;
  double t8916;
  double t8918;
  double t8958;
  double t8959;
  double t8960;
  double t8769;
  double t8979;
  double t8981;
  double t8982;
  double t8987;
  double t8989;
  double t8772;
  double t8768;
  double t8770;
  double t8985;
  double t8990;
  double t8774;
  double t8776;
  double t8996;
  double t8997;
  double t9013;
  double t9015;
  double t9016;
  double t9057;
  double t9058;
  double t9059;
  double t9029;
  double t9034;
  double t9047;
  double t9049;
  double t9050;
  double t9067;
  double t9068;
  double t9069;
  double t9061;
  double t9062;
  double t9063;
  double t9052;
  double t9053;
  double t9054;
  double t8855;
  double t8847;
  double t8850;
  double t8851;
  double t9107;
  double t9108;
  double t8856;
  double t8859;
  double t9116;
  double t9117;
  double t9139;
  double t8950;
  double t8952;
  double t8953;
  double t9141;
  double t9150;
  double t9076;
  double t9078;
  double t9080;
  double t9151;
  double t8906;
  double t8921;
  double t8904;
  double t8908;
  double t9017;
  double t9210;
  double t9211;
  double t8922;
  double t8923;
  double t9221;
  double t9222;
  double t9242;
  double t9243;
  double t9253;
  double t9257;
  double t8976;
  double t8977;
  double t9296;
  double t9298;
  double t9299;
  double t9327;
  double t9329;
  double t8342;
  double t8343;
  double t8346;
  double t9314;
  double t9315;
  double t9316;
  double t9318;
  double t9310;
  double t9326;
  double t9330;
  double t9349;
  double t9351;
  double t9352;
  double t9359;
  double t9360;
  double t9361;
  double t9355;
  double t9356;
  double t9357;
  double t9366;
  double t9367;
  double t9368;
  double t9362;
  double t9370;
  double t9371;
  double t9378;
  double t9379;
  double t9380;
  double t9391;
  double t9393;
  double t9395;
  double t9386;
  double t9387;
  double t9388;
  double t9123;
  double t9124;
  double t9125;
  double t9129;
  double t9130;
  double t9131;
  double t9331;
  double t9002;
  double t9003;
  double t9427;
  double t9431;
  double t9444;
  double t9442;
  double t9423;
  double t9433;
  double t9492;
  double t9497;
  double t9498;
  double t9403;
  double t9404;
  double t9405;
  double t9205;
  double t9206;
  double t9546;
  double t9604;
  double t9620;
  double t9687;
  double t9689;
  double t9690;
  double t9725;
  double t9726;
  double t9727;
  double t9704;
  double t9707;
  double t9708;
  double t9739;
  double t9740;
  double t9741;
  double t9746;
  double t9747;
  double t9748;
  double t9716;
  double t9718;
  double t9731;
  double t9769;
  double t9770;
  double t9773;
  double t9764;
  double t9765;
  double t9766;
  double t9774;
  double t9781;
  double t9815;
  double t9816;
  double t9817;
  double t9803;
  double t9804;
  double t9805;
  double t9232;
  double t9233;
  double t9453;
  double t9462;
  double t9470;
  double t9474;
  double t9839;
  double t9847;
  double t9855;
  double t9848;
  double t9853;
  double t9841;
  double t9881;
  double t9886;
  double t9703;
  double t9710;
  double t9713;
  double t9899;
  double t8212;
  double t8229;
  double t8236;
  double t9940;
  double t9943;
  double t9957;
  double t9968;
  double t9971;
  t898 = Cos(var1[7]);
  t777 = Cos(var1[8]);
  t834 = Sin(var1[7]);
  t899 = Sin(var1[8]);
  t897 = t777*t834;
  t1090 = -1.*t898*t899;
  t1238 = t897 + t1090;
  t1299 = Sin(var1[5]);
  t345 = Sin(var1[6]);
  t328 = Cos(var1[5]);
  t1387 = t898*t777;
  t1713 = t834*t899;
  t2891 = t1387 + t1713;
  t3226 = Cos(var1[3]);
  t1284 = -1.*t328*t345*t1238;
  t3171 = t1299*t2891;
  t3193 = t1284 + t3171;
  t151 = Sin(var1[3]);
  t3270 = Cos(var1[4]);
  t3443 = Cos(var1[6]);
  t3520 = t3270*t3443*t1238;
  t3618 = Sin(var1[4]);
  t3677 = t1299*t345*t1238;
  t3723 = t328*t2891;
  t5605 = t3677 + t3723;
  t8180 = -1.*t3618*t5605;
  t8188 = t3520 + t8180;
  t8243 = t3443*t3618*t1299;
  t8244 = t3270*t345;
  t8245 = t8243 + t8244;
  t8319 = -1.*t777*t834;
  t8320 = t898*t899;
  t8321 = t8319 + t8320;
  t8322 = t1299*t8321;
  t8324 = -1.*t328*t345*t2891;
  t8326 = t8322 + t8324;
  t8328 = t3270*t3443*t2891;
  t8329 = t328*t8321;
  t8331 = t1299*t345*t2891;
  t8333 = t8329 + t8331;
  t8334 = -1.*t3618*t8333;
  t8335 = t8328 + t8334;
  t8351 = -1.*t3443*t3618*t1238;
  t8354 = -1.*t3270*t5605;
  t8355 = t8351 + t8354;
  t8373 = -0.0641*t777;
  t8374 = -0.28*t899;
  t8375 = t8373 + t8374;
  t8381 = -1.*t777;
  t8386 = 1. + t8381;
  t8387 = 0.075*t8386;
  t8389 = 0.355*t777;
  t8391 = -0.0641*t899;
  t8392 = t8387 + t8389 + t8391;
  t8372 = -0.325*t834;
  t8379 = t898*t8375;
  t8393 = t834*t8392;
  t8399 = t8372 + t8379 + t8393;
  t8366 = -1.*t3443;
  t8367 = 1. + t8366;
  t8368 = 0.1575*t8367;
  t8371 = 0.2255*t3443;
  t8400 = -1.*t345*t8399;
  t8410 = t8368 + t8371 + t8400;
  t8411 = -1.*t1299*t8410;
  t8412 = -1.*t898;
  t8414 = 1. + t8412;
  t8422 = 0.325*t8414;
  t8423 = -1.*t834*t8375;
  t8425 = t898*t8392;
  t8427 = t8422 + t8423 + t8425;
  t8432 = t328*t8427;
  t8433 = t8411 + t8432;
  t8438 = -1.*t3618*t8433;
  t8441 = 0.068*t345;
  t8449 = t3443*t8399;
  t8451 = t8441 + t8449;
  t8457 = t3270*t8451;
  t8458 = t8438 + t8457;
  t8466 = -1.*t3270*t3443*t1299;
  t8473 = t3618*t345;
  t8474 = t8466 + t8473;
  t8490 = t3270*t8433;
  t8492 = t3618*t8451;
  t8494 = t8490 + t8492;
  t8516 = t328*t8410;
  t8518 = t1299*t8427;
  t8521 = t8516 + t8518;
  t8504 = t3443*t3618*t2891;
  t8507 = t3270*t8333;
  t8508 = t8504 + t8507;
  t8478 = -1.*t3270*t8433;
  t8479 = -1.*t3618*t8451;
  t8482 = t8478 + t8479;
  t8362 = t3270*t3443*t1299;
  t8363 = -1.*t3618*t345;
  t8364 = t8362 + t8363;
  t8575 = t3443*t3618*t1238;
  t8576 = t3270*t5605;
  t8578 = t8575 + t8576;
  t8547 = -1.*t3443*t3618*t2891;
  t8549 = -1.*t3270*t8333;
  t8550 = t8547 + t8549;
  t8728 = t328*t345*t1238;
  t8729 = -1.*t1299*t2891;
  t8730 = t8728 + t8729;
  t8525 = -1.*t328*t3443*t8521;
  t8532 = t8521*t8326;
  t8757 = -1.*t328*t8410;
  t8759 = -1.*t1299*t8427;
  t8761 = t8757 + t8759;
  t8511 = -1.*t8245*t8458;
  t8515 = -1.*t8474*t8494;
  t8530 = t8511 + t8515 + t8525;
  t8781 = -1.*t1299*t8321;
  t8782 = t328*t345*t2891;
  t8785 = t8781 + t8782;
  t8764 = t3443*t1299*t8521;
  t8533 = t8494*t8508;
  t8536 = t8458*t8335;
  t8540 = t8532 + t8533 + t8536;
  t8780 = t8433*t8326;
  t8791 = t8521*t8333;
  t8572 = t8521*t3193;
  t8601 = -1.*t8521*t8326;
  t8581 = t8494*t8578;
  t8582 = t8458*t8188;
  t8583 = t8572 + t8581 + t8582;
  t8841 = t8521*t5605;
  t8844 = t8433*t3193;
  t8603 = -1.*t8494*t8508;
  t8609 = -1.*t8458*t8335;
  t8610 = t8601 + t8603 + t8609;
  t8861 = -1.*t8433*t8326;
  t8865 = -1.*t8521*t8333;
  t8664 = t328*t3443*t8521;
  t8694 = -1.*t8521*t3193;
  t8660 = t8245*t8458;
  t8663 = t8474*t8494;
  t8680 = t8660 + t8663 + t8664;
  t8912 = -1.*t3443*t1299*t8521;
  t8696 = -1.*t8494*t8578;
  t8699 = -1.*t8458*t8188;
  t8702 = t8694 + t8696 + t8699;
  t8916 = -1.*t8521*t5605;
  t8918 = -1.*t8433*t3193;
  t8958 = -1.*t3443*t3618*t1299*t1238;
  t8959 = -1.*t3270*t345*t1238;
  t8960 = t8958 + t8959;
  t8769 = -1.*t345*t8451;
  t8979 = -0.068*t345;
  t8981 = -1.*t3443*t8399;
  t8982 = t8979 + t8981;
  t8987 = 0.068*t3443;
  t8989 = t8987 + t8400;
  t8772 = t3443*t8451*t2891;
  t8768 = t3443*t1299*t8433;
  t8770 = t8768 + t8525 + t8769;
  t8985 = -1.*t3443*t8451;
  t8990 = -1.*t345*t8989;
  t8774 = t8433*t8333;
  t8776 = t8772 + t8532 + t8774;
  t8996 = -1.*t345*t8451*t2891;
  t8997 = t3443*t8989*t2891;
  t9013 = t328*t345*t8521;
  t9015 = Power(t328,2);
  t9016 = -1.*t9015*t3443*t8982;
  t9057 = t3443*t3618;
  t9058 = t3270*t1299*t345;
  t9059 = t9057 + t9058;
  t9029 = -1.*t328*t3443*t8521*t2891;
  t9034 = t328*t8982*t8326;
  t9047 = t3270*t3443*t1299*t2891;
  t9049 = -1.*t3618*t345*t2891;
  t9050 = t9047 + t9049;
  t9067 = -1.*t3270*t1299*t8982;
  t9068 = t3618*t8989;
  t9069 = t9067 + t9068;
  t9061 = t3618*t1299*t8982;
  t9062 = t3270*t8989;
  t9063 = t9061 + t9062;
  t9052 = t3270*t3443;
  t9053 = -1.*t3618*t1299*t345;
  t9054 = t9052 + t9053;
  t8855 = -1.*t3443*t8451*t2891;
  t8847 = t3443*t8451*t1238;
  t8850 = t8433*t5605;
  t8851 = t8847 + t8850 + t8572;
  t9107 = -1.*t345*t8451*t1238;
  t9108 = t3443*t8989*t1238;
  t8856 = -1.*t8433*t8333;
  t8859 = t8855 + t8601 + t8856;
  t9116 = t345*t8451*t2891;
  t9117 = -1.*t3443*t8989*t2891;
  t9139 = -1.*t328*t3443*t8521*t1238;
  t8950 = t3270*t3443*t1299*t1238;
  t8952 = -1.*t3618*t345*t1238;
  t8953 = t8950 + t8952;
  t9141 = t328*t8982*t3193;
  t9150 = t328*t3443*t8521*t2891;
  t9076 = -1.*t3443*t3618*t1299*t2891;
  t9078 = -1.*t3270*t345*t2891;
  t9080 = t9076 + t9078;
  t9151 = -1.*t328*t8982*t8326;
  t8906 = t345*t8451;
  t8921 = -1.*t3443*t8451*t1238;
  t8904 = -1.*t3443*t1299*t8433;
  t8908 = t8904 + t8664 + t8906;
  t9017 = Power(t1299,2);
  t9210 = t3443*t8451;
  t9211 = t345*t8989;
  t8922 = -1.*t8433*t5605;
  t8923 = t8921 + t8922 + t8694;
  t9221 = t345*t8451*t1238;
  t9222 = -1.*t3443*t8989*t1238;
  t9242 = -1.*t328*t345*t8521;
  t9243 = t9015*t3443*t8982;
  t9253 = t328*t3443*t8521*t1238;
  t9257 = -1.*t328*t8982*t3193;
  t8976 = -1.*t3443*t8410;
  t8977 = t8769 + t8976;
  t9296 = -1.*t898*t777;
  t9298 = -1.*t834*t899;
  t9299 = t9296 + t9298;
  t9327 = -0.325*t898;
  t9329 = t9327 + t8423 + t8425;
  t8342 = t3226*t8326;
  t8343 = -1.*t151*t8335;
  t8346 = t8342 + t8343;
  t9314 = 0.325*t834;
  t9315 = -1.*t898*t8375;
  t9316 = -1.*t834*t8392;
  t9318 = t9314 + t9315 + t9316;
  t9310 = t3443*t8451*t8321;
  t9326 = Power(t3443,2);
  t9330 = t9326*t9329*t2891;
  t9349 = -1.*t328*t345*t8321;
  t9351 = t1299*t9299;
  t9352 = t9349 + t9351;
  t9359 = -1.*t328*t345*t9329;
  t9360 = t1299*t9318;
  t9361 = t9359 + t9360;
  t9355 = t1299*t345*t9329;
  t9356 = t328*t9318;
  t9357 = t9355 + t9356;
  t9366 = t1299*t345*t8321;
  t9367 = t328*t9299;
  t9368 = t9366 + t9367;
  t9362 = -1.*t328*t3443*t9361;
  t9370 = t8521*t9352;
  t9371 = t9361*t8326;
  t9378 = t3443*t3618*t8321;
  t9379 = t3270*t9368;
  t9380 = t9378 + t9379;
  t9391 = t3270*t9357;
  t9393 = t3443*t3618*t9329;
  t9395 = t9391 + t9393;
  t9386 = -1.*t3618*t9357;
  t9387 = t3270*t3443*t9329;
  t9388 = t9386 + t9387;
  t9123 = -1.*t8427*t8321;
  t9124 = t345*t8410*t2891;
  t9125 = t9123 + t8855 + t9124;
  t9129 = -1.*t345*t8410*t1238;
  t9130 = t8427*t2891;
  t9131 = t8847 + t9129 + t9130;
  t9331 = Power(t345,2);
  t9002 = t8427*t8321;
  t9003 = -1.*t345*t8410*t2891;
  t9427 = -1.*t9318*t8321;
  t9431 = -1.*t8427*t9299;
  t9444 = t9318*t2891;
  t9442 = t9326*t9329*t1238;
  t9423 = -1.*t3443*t8451*t8321;
  t9433 = -1.*t9326*t9329*t2891;
  t9492 = t9361*t3193;
  t9497 = -1.*t8521*t9352;
  t9498 = -1.*t9361*t8326;
  t9403 = t3270*t3443*t8321;
  t9404 = -1.*t3618*t9368;
  t9405 = t9403 + t9404;
  t9205 = t3443*t8410;
  t9206 = t8906 + t9205;
  t9546 = -1.*t9326*t9329*t1238;
  t9604 = t328*t3443*t9361;
  t9620 = -1.*t9361*t3193;
  t9687 = -0.28*t777;
  t9689 = 0.0641*t899;
  t9690 = t9687 + t9689;
  t9725 = t834*t8375;
  t9726 = t898*t9690;
  t9727 = t9725 + t9726;
  t9704 = t328*t1238;
  t9707 = t1299*t345*t9299;
  t9708 = t9704 + t9707;
  t9739 = t1299*t1238;
  t9740 = -1.*t328*t345*t9299;
  t9741 = t9739 + t9740;
  t9746 = t3270*t3443*t9299;
  t9747 = -1.*t3618*t9708;
  t9748 = t9746 + t9747;
  t9716 = -1.*t834*t9690;
  t9718 = t8379 + t9716;
  t9731 = t9326*t9727*t2891;
  t9769 = -1.*t328*t345*t9727;
  t9770 = t1299*t9718;
  t9773 = t9769 + t9770;
  t9764 = t1299*t345*t9727;
  t9765 = t328*t9718;
  t9766 = t9764 + t9765;
  t9774 = -1.*t328*t3443*t9773;
  t9781 = t9773*t8326;
  t9815 = t3270*t9766;
  t9816 = t3443*t3618*t9727;
  t9817 = t9815 + t9816;
  t9803 = -1.*t3618*t9766;
  t9804 = t3270*t3443*t9727;
  t9805 = t9803 + t9804;
  t9232 = t345*t8410*t1238;
  t9233 = -1.*t8427*t2891;
  t9453 = t8399*t1238;
  t9462 = t9453 + t9130;
  t9470 = -1.*t8399*t2891;
  t9474 = t9123 + t9470;
  t9839 = -1.*t9718*t8321;
  t9847 = t8427*t1238;
  t9855 = t9718*t2891;
  t9848 = t9326*t9727*t1238;
  t9853 = t3443*t8451*t9299;
  t9841 = -1.*t9326*t9727*t2891;
  t9881 = t8521*t9741;
  t9886 = t9773*t3193;
  t9703 = t3443*t3618*t9299;
  t9710 = t3270*t9708;
  t9713 = t9703 + t9710;
  t9899 = -1.*t9773*t8326;
  t8212 = t3226*t3193;
  t8229 = -1.*t151*t8188;
  t8236 = t8212 + t8229;
  t9940 = -1.*t9326*t9727*t1238;
  t9943 = -1.*t3443*t8451*t9299;
  t9957 = t328*t3443*t9773;
  t9968 = -1.*t8521*t9741;
  t9971 = -1.*t9773*t3193;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t151*t3193 - 1.*t3226*t8188)*var2[1] + t8236*var2[2];
  p_output1[10]=(-1.*t151*t328*t3443 - 1.*t3226*t8245)*var2[1] + (t3226*t328*t3443 - 1.*t151*t8245)*var2[2];
  p_output1[11]=(-1.*t151*t8326 - 1.*t3226*t8335)*var2[1] + t8346*var2[2];
  p_output1[12]=t8188*var2[0] - 1.*t151*t8355*var2[1] + t3226*t8355*var2[2] + ((-1.*t8364*t8458 - 1.*t8458*t8474 - 1.*t8245*t8482 - 1.*t8245*t8494)*t8508 + t8335*t8530 + t8245*t8540 + t8474*(t8335*t8482 + t8335*t8494 + t8458*t8508 + t8458*t8550))*var2[3];
  p_output1[13]=t8245*var2[0] - 1.*t151*t8364*var2[1] + t3226*t8364*var2[2] + ((-1.*t8335*t8482 - 1.*t8335*t8494 - 1.*t8458*t8508 - 1.*t8458*t8550)*t8578 + t8508*(t8355*t8458 + t8188*t8482 + t8188*t8494 + t8458*t8578) + t8335*t8583 + t8188*t8610)*var2[3];
  p_output1[14]=t8335*var2[0] - 1.*t151*t8550*var2[1] + t3226*t8550*var2[2] + ((t8364*t8458 + t8458*t8474 + t8245*t8482 + t8245*t8494)*t8578 + t8474*(-1.*t8355*t8458 - 1.*t8188*t8482 - 1.*t8188*t8494 - 1.*t8458*t8578) + t8188*t8680 + t8245*t8702)*var2[3];
  p_output1[15]=t3270*t8730*var2[0] + (t3226*t5605 + t151*t3618*t8730)*var2[1] + (t151*t5605 - 1.*t3226*t3618*t8730)*var2[2] + (-1.*t3270*t328*t3443*t8540 + t8508*(-1.*t328*t3443*t8433 - 1.*t328*t3443*t3618*t8458 + t3270*t328*t3443*t8494 + t3618*t8245*t8761 - 1.*t3270*t8474*t8761 + t8764) + t3270*t8530*t8785 + t8474*(-1.*t3618*t8335*t8761 + t3270*t8508*t8761 + t8780 - 1.*t3618*t8458*t8785 + t3270*t8494*t8785 + t8791))*var2[3] + (t8326*(t1299*t3443*t8761 + t8764) + t8333*t8770 - 1.*t1299*t3443*t8776 + t328*t3443*(t8333*t8761 + t8780 + t8433*t8785 + t8791))*var2[4];
  p_output1[16]=-1.*t3270*t328*t3443*var2[0] + (-1.*t1299*t3226*t3443 - 1.*t151*t328*t3443*t3618)*var2[1] + (-1.*t1299*t151*t3443 + t3226*t328*t3443*t3618)*var2[2] + (t3270*t8610*t8730 + t3270*t8583*t8785 + t8508*(-1.*t3618*t8458*t8730 + t3270*t8494*t8730 - 1.*t3618*t8188*t8761 + t3270*t8578*t8761 + t8841 + t8844) + t8578*(t3618*t8335*t8761 - 1.*t3270*t8508*t8761 + t3618*t8458*t8785 - 1.*t3270*t8494*t8785 + t8861 + t8865))*var2[3] + (t8326*(t8433*t8730 + t5605*t8761 + t8841 + t8844) + t8333*t8851 + t5605*t8859 + t3193*(-1.*t8333*t8761 - 1.*t8433*t8785 + t8861 + t8865))*var2[4];
  p_output1[17]=t3270*t8785*var2[0] + (t3226*t8333 + t151*t3618*t8785)*var2[1] + (t151*t8333 - 1.*t3226*t3618*t8785)*var2[2] + (-1.*t3270*t328*t3443*t8702 + t3270*t8680*t8730 + t8578*(t328*t3443*t8433 + t328*t3443*t3618*t8458 - 1.*t3270*t328*t3443*t8494 - 1.*t3618*t8245*t8761 + t3270*t8474*t8761 + t8912) + t8474*(t3618*t8458*t8730 - 1.*t3270*t8494*t8730 + t3618*t8188*t8761 - 1.*t3270*t8578*t8761 + t8916 + t8918))*var2[3] + (t5605*t8908 + t3193*(-1.*t1299*t3443*t8761 + t8912) + t328*t3443*(-1.*t8433*t8730 - 1.*t5605*t8761 + t8916 + t8918) - 1.*t1299*t3443*t8923)*var2[4];
  p_output1[18]=t8953*var2[0] + (-1.*t1238*t3226*t328*t3443 - 1.*t151*t8960)*var2[1] + (-1.*t1238*t151*t328*t3443 + t3226*t8960)*var2[2] + (t8530*t9050 + t8540*t9059 + t8508*(t9013 + t9016 - 1.*t8458*t9054 - 1.*t8494*t9059 - 1.*t8245*t9063 - 1.*t8474*t9069) + t8474*(t9029 + t9034 + t8494*t9050 + t8335*t9063 + t8508*t9069 + t8458*t9080))*var2[3] + (-1.*t2891*t328*t3443*t8770 - 1.*t328*t345*t8776 + t8326*(-1.*t1299*t345*t8433 + t8985 + t8990 + t9013 + t9016 - 1.*t3443*t8982*t9017) + t328*t3443*(t1299*t2891*t3443*t8433 - 1.*t1299*t8333*t8982 + t8996 + t8997 + t9029 + t9034))*var2[4] + (-1.*t2891*t345*t8977 + t2891*t3443*(t345*t8410 - 1.*t3443*t8982 + t8985 + t8990) + t345*(-1.*t2891*t3443*t8410 - 1.*t2891*t345*t8982 + t8996 + t8997) + t3443*(t8772 + t9002 + t9003))*var2[5];
  p_output1[19]=t9059*var2[0] + (-1.*t3226*t328*t345 - 1.*t151*t9054)*var2[1] + (-1.*t151*t328*t345 + t3226*t9054)*var2[2] + (t8610*t8953 + t8583*t9050 + t8508*(t8494*t8953 + t8458*t8960 + t8188*t9063 + t8578*t9069 + t9139 + t9141) + t8578*(-1.*t8494*t9050 - 1.*t8335*t9063 - 1.*t8508*t9069 - 1.*t8458*t9080 + t9150 + t9151))*var2[3] + (-1.*t2891*t328*t3443*t8851 - 1.*t1238*t328*t3443*t8859 + t8326*(t1238*t1299*t3443*t8433 - 1.*t1299*t5605*t8982 + t9107 + t9108 + t9139 + t9141) + t3193*(-1.*t1299*t2891*t3443*t8433 + t1299*t8333*t8982 + t9116 + t9117 + t9150 + t9151))*var2[4] + (t2891*t3443*(-1.*t1238*t3443*t8410 - 1.*t1238*t345*t8982 + t9107 + t9108) + t1238*t3443*(t2891*t3443*t8410 + t2891*t345*t8982 + t9116 + t9117) - 1.*t1238*t345*t9125 - 1.*t2891*t345*t9131)*var2[5];
  p_output1[20]=t9050*var2[0] + (-1.*t2891*t3226*t328*t3443 - 1.*t151*t9080)*var2[1] + (-1.*t151*t2891*t328*t3443 + t3226*t9080)*var2[2] + (t8680*t8953 + t8702*t9059 + t8578*(t8458*t9054 + t8494*t9059 + t8245*t9063 + t8474*t9069 + t9242 + t9243) + t8474*(-1.*t8494*t8953 - 1.*t8458*t8960 - 1.*t8188*t9063 - 1.*t8578*t9069 + t9253 + t9257))*var2[3] + (-1.*t1238*t328*t3443*t8908 - 1.*t328*t345*t8923 + t3193*(t1299*t345*t8433 + t3443*t8982*t9017 + t9210 + t9211 + t9242 + t9243) + t328*t3443*(-1.*t1238*t1299*t3443*t8433 + t1299*t5605*t8982 + t9221 + t9222 + t9253 + t9257))*var2[4] + (-1.*t1238*t345*t9206 + t1238*t3443*(-1.*t345*t8410 + t3443*t8982 + t9210 + t9211) + t345*(t1238*t3443*t8410 + t1238*t345*t8982 + t9221 + t9222) + t3443*(t8921 + t9232 + t9233))*var2[5];
  p_output1[21]=t8508*var2[0] + t8346*var2[1] + (t151*t8326 + t3226*t8335)*var2[2] + (t8530*t9380 + t8508*(t9362 - 1.*t8245*t9388 - 1.*t8474*t9395) + t8474*(t9370 + t9371 + t8494*t9380 + t8335*t9388 + t8508*t9395 + t8458*t9405))*var2[3] + (t8770*t9352 + t8326*(-1.*t3443*t345*t9329 + t1299*t3443*t9357 + t9362) + t328*t3443*(t9310 + t9330 + t8333*t9357 + t8433*t9368 + t9370 + t9371))*var2[4] + (t3443*t8321*t8977 + t345*(-1.*t345*t8321*t8410 + t8427*t9299 + t9310 + t8321*t9318 + t9330 + t2891*t9329*t9331))*var2[5] + (-0.1575*t2891 - 0.2255*t9299)*var2[6];
  p_output1[22]=(t8508*t8610 + t8583*t9380 + t8508*(t8532 + t8533 + t8536 + t8188*t9388 + t8578*t9395 + t9492) + t8578*(-1.*t8494*t9380 - 1.*t8335*t9388 - 1.*t8508*t9395 - 1.*t8458*t9405 + t9497 + t9498))*var2[3] + (t8326*t8859 + t8851*t9352 + t8326*(t8532 + t8772 + t8774 + t5605*t9357 + t9442 + t9492) + t3193*(-1.*t8333*t9357 - 1.*t8433*t9368 + t9423 + t9433 + t9497 + t9498))*var2[4] + (t2891*t3443*t9125 + t3443*t8321*t9131 + t1238*t3443*(t345*t8321*t8410 - 1.*t2891*t9329*t9331 + t9423 + t9427 + t9431 + t9433) + t2891*t3443*(t8772 + t9002 + t9003 + t1238*t9329*t9331 + t9442 + t9444))*var2[5] + (t2891*(-1.*t8321*t8399 - 1.*t2891*t9329 + t9427 + t9431) + t8321*(t2891*t8399 + t9002 + t1238*t9329 + t9444) + t9299*t9462 + t8321*t9474)*var2[6];
  p_output1[23]=t9380*var2[0] + (t3226*t9352 - 1.*t151*t9405)*var2[1] + (t151*t9352 + t3226*t9405)*var2[2] + (t8508*t8680 + t8578*(t8245*t9388 + t8474*t9395 + t9604) + t8474*(t8601 + t8603 + t8609 - 1.*t8188*t9388 - 1.*t8578*t9395 + t9620))*var2[3] + (t8326*t8908 + t3193*(t3443*t345*t9329 - 1.*t1299*t3443*t9357 + t9604) + t328*t3443*(t8601 + t8855 + t8856 - 1.*t5605*t9357 + t9546 + t9620))*var2[4] + (t2891*t3443*t9206 + t345*(t8855 + t9123 + t9124 - 1.*t2891*t9318 - 1.*t1238*t9329*t9331 + t9546))*var2[5] + 0.068*t8321*var2[6];
  p_output1[24]=t9713*var2[0] + (t3226*t9741 - 1.*t151*t9748)*var2[1] + (t151*t9741 + t3226*t9748)*var2[2] + (t8530*t8578 + t8508*(t9774 - 1.*t8245*t9805 - 1.*t8474*t9817) + t8474*(t8572 + t8581 + t8582 + t9781 + t8335*t9805 + t8508*t9817))*var2[3] + (t3193*t8770 + t8326*(-1.*t3443*t345*t9727 + t1299*t3443*t9766 + t9774) + t328*t3443*(t8572 + t8847 + t8850 + t9731 + t8333*t9766 + t9781))*var2[4] + (t1238*t3443*t8977 + t345*(t8847 + t9129 + t9130 + t8321*t9718 + t2891*t9331*t9727 + t9731))*var2[5] + (-0.2255*t2891 - 0.1575*t9299)*var2[6] + (0.325*t777 - 1.*t777*t8392 - 1.*t777*t9690)*var2[7];
  p_output1[25]=(t8578*t8583 + t8610*t9713 + t8508*(t8494*t9713 + t8458*t9748 + t8188*t9805 + t8578*t9817 + t9881 + t9886) + t8578*(t8694 + t8696 + t8699 - 1.*t8335*t9805 - 1.*t8508*t9817 + t9899))*var2[3] + (t3193*t8851 + t8859*t9741 + t8326*(t8433*t9708 + t5605*t9766 + t9848 + t9853 + t9881 + t9886) + t3193*(t8694 + t8921 + t8922 - 1.*t8333*t9766 + t9841 + t9899))*var2[4] + (t1238*t3443*t9131 + t3443*t9125*t9299 + t1238*t3443*(t8921 + t9232 + t9233 - 1.*t2891*t9331*t9727 + t9839 + t9841) + t2891*t3443*(-1.*t345*t8410*t9299 + t1238*t9331*t9727 + t9847 + t9848 + t9853 + t9855))*var2[5] + (t2891*t9462 + t1238*t9474 + t2891*(-1.*t1238*t8399 + t9233 - 1.*t2891*t9727 + t9839) + t8321*(t8399*t9299 + t1238*t9727 + t9847 + t9855))*var2[6];
  p_output1[26]=t8578*var2[0] + t8236*var2[1] + (t151*t3193 + t3226*t8188)*var2[2] + (t8680*t9713 + t8578*(t8245*t9805 + t8474*t9817 + t9957) + t8474*(-1.*t8494*t9713 - 1.*t8458*t9748 - 1.*t8188*t9805 - 1.*t8578*t9817 + t9968 + t9971))*var2[3] + (t8908*t9741 + t3193*(t3443*t345*t9727 - 1.*t1299*t3443*t9766 + t9957) + t328*t3443*(-1.*t8433*t9708 - 1.*t5605*t9766 + t9940 + t9943 + t9968 + t9971))*var2[4] + (t3443*t9206*t9299 + t345*(-1.*t1238*t8427 + t345*t8410*t9299 - 1.*t2891*t9718 - 1.*t1238*t9331*t9727 + t9940 + t9943))*var2[5] + 0.068*t1238*var2[6] + (0.325*t899 - 1.*t8392*t899 - 1.*t899*t9690)*var2[7];
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

#include "dJh_FlFoot_ParallelStance2.hh"

namespace SymFunction
{

void dJh_FlFoot_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
