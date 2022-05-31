/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 16:59:15 GMT+02:00
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
  double t418;
  double t421;
  double t425;
  double t467;
  double t515;
  double t521;
  double t522;
  double t526;
  double t313;
  double t410;
  double t527;
  double t556;
  double t525;
  double t538;
  double t546;
  double t253;
  double t557;
  double t558;
  double t565;
  double t567;
  double t568;
  double t584;
  double t599;
  double t609;
  double t620;
  double t632;
  double t653;
  double t798;
  double t799;
  double t809;
  double t2259;
  double t2405;
  double t2430;
  double t2481;
  double t2579;
  double t2765;
  double t3215;
  double t3345;
  double t3379;
  double t3506;
  double t3577;
  double t3599;
  double t3632;
  double t2180;
  double t2186;
  double t2189;
  double t2232;
  double t2583;
  double t2589;
  double t2596;
  double t3239;
  double t3641;
  double t3647;
  double t3683;
  double t3700;
  double t3719;
  double t3737;
  double t3740;
  double t3811;
  double t4035;
  double t4075;
  double t911;
  double t915;
  double t1395;
  double t1718;
  double t1733;
  double t1762;
  double t4961;
  double t4973;
  double t4994;
  double t5618;
  double t5672;
  double t5677;
  double t2597;
  double t4402;
  double t4592;
  double t5844;
  double t5857;
  double t5863;
  double t1405;
  double t1998;
  double t2056;
  double t5727;
  double t5734;
  double t5738;
  double t6562;
  double t6570;
  double t6604;
  double t5706;
  double t5721;
  double t5725;
  double t5815;
  double t6426;
  double t6433;
  double t6439;
  double t6781;
  double t6815;
  double t6818;
  double t6445;
  double t6892;
  double t6896;
  double t6897;
  double t5841;
  double t5915;
  double t5921;
  double t6862;
  double t6883;
  double t6863;
  double t6870;
  double t6877;
  double t6891;
  double t6899;
  double t6450;
  double t6459;
  double t6462;
  double t6605;
  double t6618;
  double t6620;
  double t6623;
  double t6644;
  double t6661;
  double t6664;
  double t6666;
  double t6667;
  double t6743;
  double t6759;
  double t6764;
  double t7080;
  double t7084;
  double t7096;
  double t7056;
  double t6880;
  double t7125;
  double t7126;
  double t7129;
  double t7145;
  double t7148;
  double t7149;
  double t6898;
  double t6909;
  double t6910;
  double t6917;
  double t6941;
  double t6954;
  double t6955;
  double t6960;
  double t7157;
  double t6986;
  double t7001;
  double t7263;
  double t7020;
  double t7021;
  double t7027;
  double t7328;
  double t7336;
  double t7353;
  double t7388;
  double t7389;
  double t7390;
  double t7402;
  double t7403;
  double t7404;
  double t7406;
  double t7407;
  double t7411;
  double t7451;
  double t7452;
  double t7461;
  double t7482;
  double t7484;
  double t7493;
  double t7498;
  double t7502;
  double t7519;
  double t7528;
  double t7500;
  double t7567;
  double t7572;
  double t7576;
  double t7580;
  double t7629;
  double t7634;
  double t7640;
  double t7645;
  double t7646;
  double t7655;
  double t7683;
  double t7684;
  double t7689;
  double t7362;
  double t7370;
  double t7375;
  double t7376;
  double t7377;
  double t7379;
  double t7384;
  double t7817;
  double t7821;
  double t7822;
  double t7823;
  double t7825;
  double t7828;
  double t7829;
  double t7838;
  double t7850;
  double t7851;
  double t7864;
  double t7827;
  double t7876;
  double t7891;
  double t7903;
  double t7916;
  double t7922;
  double t7924;
  double t7907;
  double t7912;
  double t7988;
  double t7989;
  double t8003;
  double t8014;
  double t8023;
  double t8025;
  double t8033;
  double t8034;
  double t8035;
  double t747;
  double t764;
  double t771;
  double t5983;
  double t5984;
  double t6011;
  double t7710;
  double t7713;
  double t8271;
  double t7566;
  double t7586;
  double t8329;
  double t8331;
  double t8339;
  double t8341;
  double t8272;
  double t8273;
  double t8275;
  double t8298;
  double t8310;
  double t8311;
  double t8317;
  double t8318;
  double t8319;
  double t8322;
  double t8323;
  double t8324;
  double t8327;
  double t8330;
  double t8334;
  double t8335;
  double t8336;
  double t8337;
  double t8340;
  double t8344;
  double t8346;
  double t8398;
  double t8353;
  double t8354;
  double t8403;
  double t8361;
  double t8362;
  double t8366;
  double t8367;
  double t8428;
  double t8440;
  double t8451;
  double t8478;
  double t8480;
  double t8460;
  double t8513;
  double t8520;
  double t7387;
  double t7397;
  double t7399;
  double t8529;
  double t8534;
  double t8423;
  double t8426;
  double t8447;
  double t8448;
  double t8487;
  double t8489;
  double t8491;
  double t8593;
  double t8505;
  double t8506;
  double t8507;
  double t8600;
  double t8605;
  double t8672;
  double t8688;
  double t8691;
  double t8120;
  double t8125;
  double t8127;
  double t8224;
  double t8225;
  double t8226;
  double t7792;
  double t7793;
  double t7799;
  double t8562;
  double t8566;
  double t8778;
  double t8538;
  double t8779;
  double t8789;
  double t8790;
  double t8823;
  double t8826;
  double t8831;
  double t8833;
  double t8801;
  double t8806;
  double t8807;
  double t8808;
  double t8809;
  double t8810;
  double t8811;
  double t8814;
  double t8815;
  double t8816;
  double t8817;
  double t8818;
  double t8820;
  double t8825;
  double t8832;
  double t8837;
  double t8838;
  double t8841;
  double t8912;
  double t8845;
  double t8846;
  double t8921;
  double t8880;
  double t8881;
  double t8886;
  double t8162;
  double t8163;
  double t8172;
  double t8961;
  double t8968;
  double t8970;
  double t8953;
  double t8955;
  double t8956;
  double t9008;
  double t9014;
  double t7761;
  double t7762;
  double t7769;
  double t7735;
  double t7736;
  t418 = Cos(var1[10]);
  t421 = Cos(var1[11]);
  t425 = -1.*t418*t421;
  t467 = Sin(var1[10]);
  t515 = Sin(var1[11]);
  t521 = -1.*t467*t515;
  t522 = t425 + t521;
  t526 = Cos(var1[9]);
  t313 = Cos(var1[5]);
  t410 = Sin(var1[9]);
  t527 = Sin(var1[5]);
  t556 = Cos(var1[3]);
  t525 = t313*t410*t522;
  t538 = t526*t522*t527;
  t546 = t525 + t538;
  t253 = Sin(var1[3]);
  t557 = Cos(var1[4]);
  t558 = -1.*t421*t467;
  t565 = t418*t515;
  t567 = t558 + t565;
  t568 = t557*t567;
  t584 = Sin(var1[4]);
  t599 = t526*t313*t522;
  t609 = -1.*t410*t522*t527;
  t620 = t599 + t609;
  t632 = -1.*t584*t620;
  t653 = t568 + t632;
  t798 = -1.*t567*t584;
  t799 = -1.*t557*t620;
  t809 = t798 + t799;
  t2259 = -1.*t421;
  t2405 = 1. + t2259;
  t2430 = -0.50321*t2405;
  t2481 = -0.19821*t421;
  t2579 = t2430 + t2481;
  t2765 = -1.*t526;
  t3215 = 1. + t2765;
  t3345 = -1.*t418;
  t3379 = 1. + t3345;
  t3506 = -0.28121*t3379;
  t3577 = t418*t2579;
  t3599 = 0.305*t467*t515;
  t3632 = t3506 + t3577 + t3599;
  t2180 = t313*t410;
  t2186 = t526*t527;
  t2189 = t2180 + t2186;
  t2232 = 0.28121*t467;
  t2583 = t2579*t467;
  t2589 = -0.305*t418*t515;
  t2596 = t2232 + t2583 + t2589;
  t3239 = -0.15121*t3215;
  t3641 = t526*t3632;
  t3647 = t3239 + t3641;
  t3683 = t313*t3647;
  t3700 = 0.15121*t3215;
  t3719 = 0.15121*t526;
  t3737 = 0.15121*t410;
  t3740 = t410*t3632;
  t3811 = t3700 + t3719 + t3737 + t3740;
  t4035 = -1.*t3811*t527;
  t4075 = t3683 + t4035;
  t911 = t418*t421;
  t915 = t467*t515;
  t1395 = t911 + t915;
  t1718 = t526*t313*t567;
  t1733 = -1.*t410*t567*t527;
  t1762 = t1718 + t1733;
  t4961 = t2596*t584;
  t4973 = t557*t4075;
  t4994 = t4961 + t4973;
  t5618 = t557*t1395;
  t5672 = -1.*t584*t1762;
  t5677 = t5618 + t5672;
  t2597 = -1.*t2596*t584;
  t4402 = -1.*t557*t4075;
  t4592 = t2597 + t4402;
  t5844 = t557*t2596;
  t5857 = -1.*t584*t4075;
  t5863 = t5844 + t5857;
  t1405 = t1395*t584;
  t1998 = t557*t1762;
  t2056 = t1405 + t1998;
  t5727 = t313*t3811;
  t5734 = t3647*t527;
  t5738 = t5727 + t5734;
  t6562 = -1.*t313*t410*t522;
  t6570 = -1.*t526*t522*t527;
  t6604 = t6562 + t6570;
  t5706 = -1.*t526*t313;
  t5721 = t410*t527;
  t5725 = t5706 + t5721;
  t5815 = -1.*t5725*t5738;
  t6426 = t313*t410*t567;
  t6433 = t526*t567*t527;
  t6439 = t6426 + t6433;
  t6781 = -1.*t313*t3811;
  t6815 = -1.*t3647*t527;
  t6818 = t6781 + t6815;
  t6445 = t6439*t5738;
  t6892 = -1.*t313*t410*t567;
  t6896 = -1.*t526*t567*t527;
  t6897 = t6892 + t6896;
  t5841 = -1.*t557*t2189*t4994;
  t5915 = t584*t2189*t5863;
  t5921 = t5815 + t5841 + t5915;
  t6862 = -1.*t2189*t5738;
  t6883 = -1.*t5725*t4075;
  t6863 = t526*t313;
  t6870 = -1.*t410*t527;
  t6877 = t6863 + t6870;
  t6891 = t1762*t5738;
  t6899 = t6439*t4075;
  t6450 = t2056*t4994;
  t6459 = t5677*t5863;
  t6462 = t6445 + t6450 + t6459;
  t6605 = var2[0]*t557*t6604;
  t6618 = t253*t584*t6604;
  t6620 = t556*t620;
  t6623 = t6618 + t6620;
  t6644 = var2[1]*t6623;
  t6661 = -1.*t556*t584*t6604;
  t6664 = t253*t620;
  t6666 = t6661 + t6664;
  t6667 = var2[2]*t6666;
  t6743 = -1.*t2189*t4075;
  t6759 = t5815 + t6743;
  t6764 = t1762*t6759;
  t7080 = -0.15121*t410;
  t7084 = -1.*t410*t3632;
  t7096 = t7080 + t7084;
  t7056 = t3719 + t3641;
  t6880 = -1.*t6877*t4075;
  t7125 = t313*t7096;
  t7126 = -1.*t7056*t527;
  t7129 = t7125 + t7126;
  t7145 = t313*t7056;
  t7148 = t7096*t527;
  t7149 = t7145 + t7148;
  t6898 = t6897*t4075;
  t6909 = t2596*t1395;
  t6910 = t1762*t4075;
  t6917 = t6909 + t6445 + t6910;
  t6941 = t2189*t6917;
  t6954 = t557*t6897*t5921;
  t6955 = Power(t557,2);
  t6960 = Power(t584,2);
  t7157 = -1.*t5725*t7149;
  t6986 = -1.*t557*t6877*t4994;
  t7001 = t584*t6877*t5863;
  t7263 = t6439*t7149;
  t7020 = t557*t6897*t4994;
  t7021 = -1.*t584*t6897*t5863;
  t7027 = t557*t6877*t6462;
  t7328 = t421*t467;
  t7336 = -1.*t418*t515;
  t7353 = t7328 + t7336;
  t7388 = t526*t313*t7353;
  t7389 = -1.*t410*t7353*t527;
  t7390 = t7388 + t7389;
  t7402 = t313*t410*t7353;
  t7403 = t526*t7353*t527;
  t7404 = t7402 + t7403;
  t7406 = t557*t522;
  t7407 = -1.*t584*t7390;
  t7411 = t7406 + t7407;
  t7451 = -0.28121*t467;
  t7452 = -1.*t2579*t467;
  t7461 = 0.305*t418*t515;
  t7482 = t7451 + t7452 + t7461;
  t7484 = t313*t410*t7482;
  t7493 = t526*t7482*t527;
  t7498 = t7484 + t7493;
  t7502 = t526*t313*t7482;
  t7519 = -1.*t410*t7482*t527;
  t7528 = t7502 + t7519;
  t7500 = -1.*t5725*t7498;
  t7567 = 0.28121*t418;
  t7572 = t7567 + t3577 + t3599;
  t7576 = t7498*t6439;
  t7580 = t546*t5738;
  t7629 = t7572*t584;
  t7634 = t557*t7528;
  t7640 = t7629 + t7634;
  t7645 = t557*t7572;
  t7646 = -1.*t584*t7528;
  t7655 = t7645 + t7646;
  t7683 = t567*t584;
  t7684 = t557*t620;
  t7689 = t7683 + t7684;
  t7362 = 0.15121*t7353;
  t7370 = 0.15121*t567;
  t7375 = t7362 + t7370;
  t7376 = var2[9]*t7375;
  t7377 = -1.*t410*t3647;
  t7379 = t526*t3811;
  t7384 = t7377 + t7379;
  t7817 = 0.305*t421*t467;
  t7821 = t7817 + t2589;
  t7822 = t313*t410*t7821;
  t7823 = t526*t7821*t527;
  t7825 = t7822 + t7823;
  t7828 = t526*t313*t7821;
  t7829 = -1.*t410*t7821*t527;
  t7838 = t7828 + t7829;
  t7850 = t313*t410*t1395;
  t7851 = t526*t1395*t527;
  t7864 = t7850 + t7851;
  t7827 = -1.*t5725*t7825;
  t7876 = -0.305*t418*t421;
  t7891 = -0.305*t467*t515;
  t7903 = t7876 + t7891;
  t7916 = t526*t313*t1395;
  t7922 = -1.*t410*t1395*t527;
  t7924 = t7916 + t7922;
  t7907 = t7825*t6439;
  t7912 = t7864*t5738;
  t7988 = t7903*t584;
  t7989 = t557*t7838;
  t8003 = t7988 + t7989;
  t8014 = t557*t7903;
  t8023 = -1.*t584*t7838;
  t8025 = t8014 + t8023;
  t8033 = t7353*t584;
  t8034 = t557*t7924;
  t8035 = t8033 + t8034;
  t747 = t556*t546;
  t764 = -1.*t253*t653;
  t771 = t747 + t764;
  t5983 = -1.*t1395*t584;
  t5984 = -1.*t557*t1762;
  t6011 = t5983 + t5984;
  t7710 = t7689*t4994;
  t7713 = t653*t5863;
  t8271 = -1.*t6439*t5738;
  t7566 = t2596*t567;
  t7586 = t620*t4075;
  t8329 = -1.*t1762*t5738;
  t8331 = -1.*t6439*t4075;
  t8339 = t620*t5738;
  t8341 = t546*t4075;
  t8272 = -1.*t2056*t4994;
  t8273 = -1.*t5677*t5863;
  t8275 = t8271 + t8272 + t8273;
  t8298 = t7580 + t7710 + t7713;
  t8310 = var2[0]*t557*t6877;
  t8311 = t253*t2189;
  t8317 = -1.*t556*t584*t6877;
  t8318 = t8311 + t8317;
  t8319 = var2[2]*t8318;
  t8322 = t556*t2189;
  t8323 = t253*t584*t6877;
  t8324 = t8322 + t8323;
  t8327 = var2[1]*t8324;
  t8330 = -1.*t6897*t4075;
  t8334 = -1.*t2596*t1395;
  t8335 = -1.*t1762*t4075;
  t8336 = t8334 + t8271 + t8335;
  t8337 = t620*t8336;
  t8340 = t6604*t4075;
  t8344 = t7566 + t7580 + t7586;
  t8346 = t1762*t8344;
  t8398 = -1.*t6439*t7149;
  t8353 = -1.*t557*t6897*t4994;
  t8354 = t584*t6897*t5863;
  t8403 = t546*t7149;
  t8361 = t557*t6604*t4994;
  t8362 = -1.*t584*t6604*t5863;
  t8366 = t557*t6604*t8275;
  t8367 = t557*t6897*t8298;
  t8428 = t2596*t522;
  t8440 = t567*t7572;
  t8451 = -1.*t2596*t567;
  t8478 = Power(t526,2);
  t8480 = Power(t410,2);
  t8460 = -1.*t7572*t1395;
  t8513 = t7498*t546;
  t8520 = t7404*t5738;
  t7387 = t522*t584;
  t7397 = t557*t7390;
  t7399 = t7387 + t7397;
  t8529 = -1.*t7498*t6439;
  t8534 = -1.*t546*t5738;
  t8423 = t522*t3632;
  t8426 = t7566 + t8423;
  t8447 = -1.*t567*t3632;
  t8448 = t8447 + t8334;
  t8487 = -1.*t526*t567*t3647;
  t8489 = -1.*t410*t567*t3811;
  t8491 = t8334 + t8487 + t8489;
  t8593 = t567*t7903;
  t8505 = t526*t522*t3647;
  t8506 = t410*t522*t3811;
  t8507 = t7566 + t8505 + t8506;
  t8600 = -1.*t7353*t2596;
  t8605 = -1.*t7903*t1395;
  t8672 = t7825*t546;
  t8688 = -1.*t7825*t6439;
  t8691 = -1.*t7864*t5738;
  t8120 = t557*t7353;
  t8125 = -1.*t584*t7924;
  t8127 = t8120 + t8125;
  t8224 = t253*t584*t2189;
  t8225 = t556*t5725;
  t8226 = t8224 + t8225;
  t7792 = t556*t6439;
  t7793 = -1.*t253*t5677;
  t7799 = t7792 + t7793;
  t8562 = -1.*t7689*t4994;
  t8566 = -1.*t653*t5863;
  t8778 = t5725*t5738;
  t8538 = -1.*t620*t4075;
  t8779 = t557*t2189*t4994;
  t8789 = -1.*t584*t2189*t5863;
  t8790 = t8778 + t8779 + t8789;
  t8823 = t2189*t5738;
  t8826 = t5725*t4075;
  t8831 = -1.*t620*t5738;
  t8833 = -1.*t546*t4075;
  t8801 = t8534 + t8562 + t8566;
  t8806 = var2[0]*t557*t6897;
  t8807 = t253*t584*t6897;
  t8808 = t556*t1762;
  t8809 = t8807 + t8808;
  t8810 = var2[1]*t8809;
  t8811 = -1.*t556*t584*t6897;
  t8814 = t253*t1762;
  t8815 = t8811 + t8814;
  t8816 = var2[2]*t8815;
  t8817 = t2189*t4075;
  t8818 = t8778 + t8817;
  t8820 = t620*t8818;
  t8825 = t6877*t4075;
  t8832 = -1.*t6604*t4075;
  t8837 = t8451 + t8534 + t8538;
  t8838 = t2189*t8837;
  t8841 = t557*t6604*t8790;
  t8912 = t5725*t7149;
  t8845 = t557*t6877*t4994;
  t8846 = -1.*t584*t6877*t5863;
  t8921 = -1.*t546*t7149;
  t8880 = -1.*t557*t6604*t4994;
  t8881 = t584*t6604*t5863;
  t8886 = t557*t6877*t8801;
  t8162 = t253*t546;
  t8163 = t556*t653;
  t8172 = t8162 + t8163;
  t8961 = t5725*t7498;
  t8968 = -1.*t7498*t546;
  t8970 = -1.*t7404*t5738;
  t8953 = t410*t3647;
  t8955 = -1.*t526*t3811;
  t8956 = t8953 + t8955;
  t9008 = t5725*t7825;
  t9014 = -1.*t7825*t546;
  t7761 = t253*t6439;
  t7762 = t556*t5677;
  t7769 = t7761 + t7762;
  t7735 = 0.28121*t421;
  t7736 = t2579*t421;
  p_output1[0]=(-1.*t253*t546 - 1.*t556*t653)*var2[1] + t771*var2[2];
  p_output1[1]=t653*var2[0] - 1.*t253*t809*var2[1] + t556*t809*var2[2] + (t2056*(t2189*t4592*t584 + t2189*t4994*t584) + t5677*t5921 + t2189*t557*(t4592*t5677 + t4994*t5677 + t2056*t5863 + t5863*t6011) - 1.*t2189*t584*t6462)*var2[3];
  p_output1[2]=t6605 + t6644 + t6667 + (t6954 + t2056*(t6862 + t6883 - 1.*t2189*t6818*t6955 - 1.*t2189*t6818*t6960 + t6986 + t7001) + t2189*t557*(t2056*t557*t6818 - 1.*t5677*t584*t6818 + t6891 + t6899 + t7020 + t7021) + t7027)*var2[3] + (t6764 + t6439*(-1.*t2189*t6818 + t6862 + t6880 + t6883) + t5725*(t1762*t6818 + t6891 + t6898 + t6899) + t6941)*var2[4];
  p_output1[3]=t6605 + t6644 + t6667 + (t6954 + t7027 + t2056*(t6862 + t6986 + t7001 - 1.*t2189*t6955*t7129 - 1.*t2189*t6960*t7129 + t7157) + t2189*t557*(t6891 + t7020 + t7021 + t2056*t557*t7129 - 1.*t5677*t584*t7129 + t7263))*var2[3] + (t6764 + t6941 + t6439*(t6862 + t6880 - 1.*t2189*t7129 + t7157) + t5725*(t6891 + t6898 + t1762*t7129 + t7263))*var2[4] + t1395*(-1.*t3811*t410 - 1.*t3647*t526 + t526*t7056 - 1.*t410*t7096)*var2[5];
  p_output1[4]=t7376 + t7399*var2[0] + (t556*t7404 - 1.*t253*t7411)*var2[1] + (t253*t7404 + t556*t7411)*var2[2] + (t2056*(t7500 - 1.*t2189*t557*t7640 + t2189*t584*t7655) + t5921*t7689 + t2189*t557*(t7576 + t7580 + t2056*t7640 + t5677*t7655 + t7710 + t7713))*var2[3] + (t546*t6759 + t6439*(t7500 - 1.*t2189*t7528) + t5725*(t1762*t7528 + t7566 + t1395*t7572 + t7576 + t7580 + t7586))*var2[4] + t567*t7384*var2[5];
  p_output1[5]=t7376 + t2056*var2[0] + t7799*var2[1] + t7769*var2[2] + (t2056*(t7827 - 1.*t2189*t557*t8003 + t2189*t584*t8025) + t5921*t8035 + t2189*t557*(t7907 + t7912 + t2056*t8003 + t5677*t8025 + t4994*t8035 + t5863*t8127))*var2[3] + (t6439*(t7827 - 1.*t2189*t7838) + t6759*t7864 + t5725*(t2596*t7353 + t1762*t7838 + t1395*t7903 + t7907 + t7912 + t4075*t7924))*var2[4] + t7353*t7384*var2[5] + (-0.305*Power(t421,2) + t7735 + t7736)*var2[10];
  p_output1[6]=t7689;
  p_output1[7]=t771;
  p_output1[8]=t8172;
  p_output1[9]=t2056*t5921 + t2189*t557*t6462;
  p_output1[10]=t6439*t6759 + t5725*t6917;
  p_output1[11]=t1395*t7384;
  p_output1[12]=0.15121*t1395 + 0.15121*t522;
  p_output1[13]=0.28121*t515 + t2579*t515 - 0.305*t421*t515;
  p_output1[14]=(-1.*t253*t5725 + t2189*t556*t584)*var2[1] + t8226*var2[2];
  p_output1[15]=-1.*t2189*t584*var2[0] + t2189*t253*t557*var2[1] - 1.*t2189*t556*t557*var2[2] + ((-1.*t4592*t5677 - 1.*t4994*t5677 - 1.*t2056*t5863 - 1.*t5863*t6011)*t7689 + t2056*(t4592*t653 + t4994*t653 + t5863*t7689 + t5863*t809) + t653*t8275 + t5677*t8298)*var2[3];
  p_output1[16]=t8310 + t8319 + t8327 + (t7689*(-1.*t2056*t557*t6818 + t5677*t584*t6818 + t8329 + t8331 + t8353 + t8354) + t2056*(-1.*t584*t653*t6818 + t557*t6818*t7689 + t8339 + t8341 + t8361 + t8362) + t8366 + t8367)*var2[3] + (t546*(-1.*t1762*t6818 + t8329 + t8330 + t8331) + t8337 + t6439*(t620*t6818 + t8339 + t8340 + t8341) + t8346)*var2[4];
  p_output1[17]=t8310 + t8319 + t8327 + (t8366 + t8367 + t7689*(-1.*t2056*t557*t7129 + t5677*t584*t7129 + t8329 + t8353 + t8354 + t8398) + t2056*(-1.*t584*t653*t7129 + t557*t7129*t7689 + t8339 + t8361 + t8362 + t8403))*var2[3] + (t8337 + t8346 + t546*(-1.*t1762*t7129 + t8329 + t8330 + t8398) + t6439*(t620*t7129 + t8339 + t8340 + t8403))*var2[4] + (t1395*(-1.*t3647*t410*t522 + t3811*t522*t526 + t410*t522*t7056 + t522*t526*t7096) + t567*(t3647*t410*t567 - 1.*t3811*t526*t567 - 1.*t410*t567*t7056 - 1.*t526*t567*t7096))*var2[5];
  p_output1[18]=(t7399*t8275 + t7689*t8298 + t2056*(t4994*t7399 + t5863*t7411 + t653*t7655 + t7640*t7689 + t8513 + t8520) + t7689*(-1.*t2056*t7640 - 1.*t5677*t7655 + t8529 + t8534 + t8562 + t8566))*var2[3] + (t7404*t8336 + t546*t8344 + t6439*(t4075*t7390 + t620*t7528 + t8428 + t8440 + t8513 + t8520) + t546*(-1.*t1762*t7528 + t8451 + t8460 + t8529 + t8534 + t8538))*var2[4] + (t1395*(t3811*t410*t7353 + t3647*t526*t7353 + t8428 + t8440 + t522*t7482*t8478 + t522*t7482*t8480) + t567*(-1.*t3811*t410*t522 - 1.*t3647*t522*t526 + t8451 + t8460 - 1.*t567*t7482*t8478 - 1.*t567*t7482*t8480) + t522*t8491 + t567*t8507)*var2[5] + (t567*t8426 + t1395*(t3632*t7353 + t522*t7482 + t8428 + t8440) + t522*t8448 + t567*(-1.*t3632*t522 - 1.*t567*t7482 + t8451 + t8460))*var2[9];
  p_output1[19]=(t2056*t8275 + t8035*t8298 + t2056*(t6445 + t6450 + t6459 + t7689*t8003 + t653*t8025 + t8672) + t7689*(-1.*t2056*t8003 - 1.*t5677*t8025 - 1.*t4994*t8035 - 1.*t5863*t8127 + t8688 + t8691))*var2[3] + (t6439*t8336 + t7864*t8344 + t6439*(t6445 + t6909 + t6910 + t620*t7838 + t8593 + t8672) + t546*(-1.*t1762*t7838 - 1.*t4075*t7924 + t8600 + t8605 + t8688 + t8691))*var2[4] + (t1395*t8491 + t7353*t8507 + t1395*(t3811*t410*t567 + t3647*t526*t567 + t6909 + t522*t7821*t8478 + t522*t7821*t8480 + t8593) + t567*(-1.*t1395*t3811*t410 - 1.*t1395*t3647*t526 - 1.*t567*t7821*t8478 - 1.*t567*t7821*t8480 + t8600 + t8605))*var2[5] + (t7353*t8426 + t1395*t8448 + t1395*(t3632*t567 + t6909 + t522*t7821 + t8593) + t567*(-1.*t1395*t3632 - 1.*t567*t7821 + t8600 + t8605))*var2[9];
  p_output1[20]=t2189*t557;
  p_output1[21]=t8226;
  p_output1[22]=t253*t5725 - 1.*t2189*t556*t584;
  p_output1[23]=t7689*t8275 + t2056*t8298;
  p_output1[24]=t546*t8336 + t6439*t8344;
  p_output1[25]=t567*t8491 + t1395*t8507;
  p_output1[26]=-0.15121 + t1395*t8426 + t567*t8448;
  p_output1[27]=(-1.*t556*t5677 - 1.*t253*t6439)*var2[1] + t7799*var2[2];
  p_output1[28]=t5677*var2[0] - 1.*t253*t6011*var2[1] + t556*t6011*var2[2] + ((-1.*t2189*t4592*t584 - 1.*t2189*t4994*t584)*t7689 + t2189*t557*(-1.*t4592*t653 - 1.*t4994*t653 - 1.*t5863*t7689 - 1.*t5863*t809) + t653*t8790 - 1.*t2189*t584*t8801)*var2[3];
  p_output1[29]=t8806 + t8810 + t8816 + (t8841 + t7689*(t2189*t6818*t6955 + t2189*t6818*t6960 + t8823 + t8826 + t8845 + t8846) + t2189*t557*(t584*t653*t6818 - 1.*t557*t6818*t7689 + t8831 + t8833 + t8880 + t8881) + t8886)*var2[3] + (t8820 + t546*(t2189*t6818 + t8823 + t8825 + t8826) + t5725*(-1.*t620*t6818 + t8831 + t8832 + t8833) + t8838)*var2[4];
  p_output1[30]=t8806 + t8810 + t8816 + (t8841 + t8886 + t7689*(t2189*t6955*t7129 + t2189*t6960*t7129 + t8823 + t8845 + t8846 + t8912) + t2189*t557*(t584*t653*t7129 - 1.*t557*t7129*t7689 + t8831 + t8880 + t8881 + t8921))*var2[3] + (t8820 + t8838 + t546*(t2189*t7129 + t8823 + t8825 + t8912) + t5725*(-1.*t620*t7129 + t8831 + t8832 + t8921))*var2[4] + t567*(t3811*t410 + t3647*t526 - 1.*t526*t7056 + t410*t7096)*var2[5];
  p_output1[31]=t7689*var2[0] + t771*var2[1] + t8172*var2[2] + (t7399*t8790 + t7689*(t2189*t557*t7640 - 1.*t2189*t584*t7655 + t8961) + t2189*t557*(-1.*t4994*t7399 - 1.*t5863*t7411 - 1.*t653*t7655 - 1.*t7640*t7689 + t8968 + t8970))*var2[3] + (t7404*t8818 + t546*(t2189*t7528 + t8961) + t5725*(-1.*t2596*t522 - 1.*t4075*t7390 - 1.*t620*t7528 - 1.*t567*t7572 + t8968 + t8970))*var2[4] + t522*t8956*var2[5];
  p_output1[32]=t8035*var2[0] + (t556*t7864 - 1.*t253*t8127)*var2[1] + (t253*t7864 + t556*t8127)*var2[2] + (t2056*t8790 + t7689*(t2189*t557*t8003 - 1.*t2189*t584*t8025 + t9008) + t2189*t557*(-1.*t7689*t8003 - 1.*t653*t8025 + t8271 + t8272 + t8273 + t9014))*var2[3] + (t6439*t8818 + t546*(t2189*t7838 + t9008) + t5725*(-1.*t620*t7838 - 1.*t567*t7903 + t8271 + t8334 + t8335 + t9014))*var2[4] + t1395*t8956*var2[5] + (-0.28121*t515 - 1.*t2579*t515 + 0.305*t421*t515)*var2[10];
  p_output1[33]=t2056;
  p_output1[34]=t7799;
  p_output1[35]=t7769;
  p_output1[36]=t7689*t8790 + t2189*t557*t8801;
  p_output1[37]=t546*t8818 + t5725*t8837;
  p_output1[38]=t567*t8956;
  p_output1[39]=0.305*Power(t515,2) + t7735 + t7736;
  p_output1[40]=-0.305;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 41, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_dh_RlFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void J_dh_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
