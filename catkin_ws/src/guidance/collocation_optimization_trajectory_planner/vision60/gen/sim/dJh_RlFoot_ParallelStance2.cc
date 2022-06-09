/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 14:41:25 GMT+02:00
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
  double t7543;
  double t7531;
  double t7532;
  double t7544;
  double t7536;
  double t7568;
  double t7572;
  double t5002;
  double t7574;
  double t7575;
  double t7576;
  double t7522;
  double t7580;
  double t7591;
  double t7573;
  double t7582;
  double t7583;
  double t3883;
  double t7596;
  double t7645;
  double t7650;
  double t7651;
  double t7652;
  double t7654;
  double t7655;
  double t7656;
  double t7657;
  double t7669;
  double t7671;
  double t7672;
  double t7690;
  double t7695;
  double t7696;
  double t7688;
  double t7697;
  double t7698;
  double t7701;
  double t7702;
  double t7704;
  double t7705;
  double t7706;
  double t7707;
  double t7724;
  double t7725;
  double t7726;
  double t7748;
  double t7749;
  double t7750;
  double t7754;
  double t7755;
  double t7756;
  double t7757;
  double t7758;
  double t7763;
  double t7744;
  double t7753;
  double t7764;
  double t7765;
  double t7743;
  double t7766;
  double t7767;
  double t7771;
  double t7772;
  double t7773;
  double t7774;
  double t7778;
  double t7782;
  double t7786;
  double t7790;
  double t7794;
  double t7795;
  double t7796;
  double t7797;
  double t7801;
  double t7802;
  double t7803;
  double t7814;
  double t7815;
  double t7816;
  double t7811;
  double t7812;
  double t7813;
  double t7807;
  double t7808;
  double t7809;
  double t7730;
  double t7737;
  double t7742;
  double t7770;
  double t7804;
  double t7805;
  double t7828;
  double t7829;
  double t7830;
  double t7818;
  double t7819;
  double t7822;
  double t7867;
  double t7868;
  double t7869;
  double t7842;
  double t7844;
  double t7846;
  double t7934;
  double t7935;
  double t7936;
  double t7834;
  double t7855;
  double t7963;
  double t7964;
  double t7965;
  double t7967;
  double t7987;
  double t7990;
  double t7991;
  double t7838;
  double t7839;
  double t7840;
  double t7993;
  double t7998;
  double t7856;
  double t7857;
  double t7858;
  double t7875;
  double t7890;
  double t8050;
  double t8052;
  double t7876;
  double t7877;
  double t7878;
  double t8067;
  double t8069;
  double t7891;
  double t7892;
  double t7895;
  double t7914;
  double t7926;
  double t8107;
  double t7916;
  double t7917;
  double t7918;
  double t8112;
  double t8114;
  double t7927;
  double t7928;
  double t7929;
  double t7959;
  double t8165;
  double t8166;
  double t8167;
  double t8170;
  double t8171;
  double t7976;
  double t8207;
  double t8208;
  double t8211;
  double t7960;
  double t7961;
  double t8169;
  double t8175;
  double t8185;
  double t8186;
  double t7981;
  double t7982;
  double t8224;
  double t8225;
  double t8229;
  double t8233;
  double t8234;
  double t8243;
  double t8245;
  double t8246;
  double t8248;
  double t8249;
  double t8250;
  double t8252;
  double t8253;
  double t8254;
  double t8256;
  double t8257;
  double t8258;
  double t8060;
  double t8055;
  double t8260;
  double t8261;
  double t8262;
  double t8282;
  double t8283;
  double t8056;
  double t8058;
  double t8288;
  double t8289;
  double t8063;
  double t8064;
  double t8316;
  double t8318;
  double t8202;
  double t8203;
  double t8204;
  double t8323;
  double t8324;
  double t8267;
  double t8268;
  double t8269;
  double t8101;
  double t8117;
  double t8103;
  double t8104;
  double t8352;
  double t8353;
  double t8226;
  double t8358;
  double t8359;
  double t8118;
  double t8119;
  double t8379;
  double t8382;
  double t8386;
  double t8388;
  double t8156;
  double t8160;
  double t8411;
  double t8412;
  double t8413;
  double t8428;
  double t8429;
  double t7713;
  double t7714;
  double t7715;
  double t8421;
  double t8422;
  double t8423;
  double t8424;
  double t8419;
  double t8427;
  double t8430;
  double t8452;
  double t8453;
  double t8454;
  double t8443;
  double t8444;
  double t8445;
  double t8448;
  double t8449;
  double t8450;
  double t8459;
  double t8460;
  double t8461;
  double t8455;
  double t8458;
  double t8463;
  double t8469;
  double t8470;
  double t8471;
  double t8473;
  double t8474;
  double t8475;
  double t8477;
  double t8478;
  double t8479;
  double t8295;
  double t8296;
  double t8298;
  double t8300;
  double t8301;
  double t8302;
  double t8431;
  double t8193;
  double t8197;
  double t8499;
  double t8500;
  double t8507;
  double t8505;
  double t8497;
  double t8501;
  double t8531;
  double t8534;
  double t8536;
  double t8484;
  double t8485;
  double t8486;
  double t8348;
  double t8349;
  double t8559;
  double t8578;
  double t8582;
  double t8601;
  double t8602;
  double t8603;
  double t8615;
  double t8616;
  double t8617;
  double t8625;
  double t8626;
  double t8627;
  double t8631;
  double t8632;
  double t8633;
  double t8635;
  double t8636;
  double t8637;
  double t8612;
  double t8613;
  double t8618;
  double t8651;
  double t8652;
  double t8653;
  double t8647;
  double t8648;
  double t8649;
  double t8654;
  double t8657;
  double t8664;
  double t8665;
  double t8666;
  double t8668;
  double t8669;
  double t8670;
  double t8363;
  double t8364;
  double t8512;
  double t8513;
  double t8519;
  double t8520;
  double t8683;
  double t8688;
  double t8693;
  double t8689;
  double t8691;
  double t8684;
  double t8711;
  double t8714;
  double t8624;
  double t8628;
  double t8629;
  double t8718;
  double t7662;
  double t7663;
  double t7665;
  double t8747;
  double t8749;
  double t8765;
  double t8768;
  double t8771;
  t7543 = Cos(var1[10]);
  t7531 = Cos(var1[11]);
  t7532 = Sin(var1[10]);
  t7544 = Sin(var1[11]);
  t7536 = t7531*t7532;
  t7568 = -1.*t7543*t7544;
  t7572 = t7536 + t7568;
  t5002 = Cos(var1[5]);
  t7574 = t7543*t7531;
  t7575 = t7532*t7544;
  t7576 = t7574 + t7575;
  t7522 = Sin(var1[9]);
  t7580 = Sin(var1[5]);
  t7591 = Cos(var1[3]);
  t7573 = -1.*t5002*t7522*t7572;
  t7582 = t7576*t7580;
  t7583 = t7573 + t7582;
  t3883 = Sin(var1[3]);
  t7596 = Cos(var1[9]);
  t7645 = Cos(var1[4]);
  t7650 = t7596*t7645*t7572;
  t7651 = Sin(var1[4]);
  t7652 = t5002*t7576;
  t7654 = t7522*t7572*t7580;
  t7655 = t7652 + t7654;
  t7656 = -1.*t7651*t7655;
  t7657 = t7650 + t7656;
  t7669 = t7645*t7522;
  t7671 = t7596*t7651*t7580;
  t7672 = t7669 + t7671;
  t7690 = -1.*t7531*t7532;
  t7695 = t7543*t7544;
  t7696 = t7690 + t7695;
  t7688 = -1.*t5002*t7522*t7576;
  t7697 = t7696*t7580;
  t7698 = t7688 + t7697;
  t7701 = t7596*t7645*t7576;
  t7702 = t5002*t7696;
  t7704 = t7522*t7576*t7580;
  t7705 = t7702 + t7704;
  t7706 = -1.*t7651*t7705;
  t7707 = t7701 + t7706;
  t7724 = -1.*t7596*t7572*t7651;
  t7725 = -1.*t7645*t7655;
  t7726 = t7724 + t7725;
  t7748 = -0.0641*t7531;
  t7749 = -0.28*t7544;
  t7750 = t7748 + t7749;
  t7754 = -1.*t7531;
  t7755 = 1. + t7754;
  t7756 = -0.575*t7755;
  t7757 = -0.295*t7531;
  t7758 = -0.0641*t7544;
  t7763 = t7756 + t7757 + t7758;
  t7744 = 0.325*t7532;
  t7753 = t7543*t7750;
  t7764 = t7532*t7763;
  t7765 = t7744 + t7753 + t7764;
  t7743 = 0.068*t7522;
  t7766 = t7596*t7765;
  t7767 = t7743 + t7766;
  t7771 = -1.*t7543;
  t7772 = 1. + t7771;
  t7773 = -0.325*t7772;
  t7774 = -1.*t7532*t7750;
  t7778 = t7543*t7763;
  t7782 = t7773 + t7774 + t7778;
  t7786 = t5002*t7782;
  t7790 = -1.*t7596;
  t7794 = 1. + t7790;
  t7795 = 0.1575*t7794;
  t7796 = 0.2255*t7596;
  t7797 = -1.*t7522*t7765;
  t7801 = t7795 + t7796 + t7797;
  t7802 = -1.*t7801*t7580;
  t7803 = t7786 + t7802;
  t7814 = t7645*t7767;
  t7815 = -1.*t7651*t7803;
  t7816 = t7814 + t7815;
  t7811 = t7522*t7651;
  t7812 = -1.*t7596*t7645*t7580;
  t7813 = t7811 + t7812;
  t7807 = t7767*t7651;
  t7808 = t7645*t7803;
  t7809 = t7807 + t7808;
  t7730 = t7596*t7576*t7651;
  t7737 = t7645*t7705;
  t7742 = t7730 + t7737;
  t7770 = -1.*t7767*t7651;
  t7804 = -1.*t7645*t7803;
  t7805 = t7770 + t7804;
  t7828 = t5002*t7801;
  t7829 = t7782*t7580;
  t7830 = t7828 + t7829;
  t7818 = -1.*t7522*t7651;
  t7819 = t7596*t7645*t7580;
  t7822 = t7818 + t7819;
  t7867 = t7596*t7572*t7651;
  t7868 = t7645*t7655;
  t7869 = t7867 + t7868;
  t7842 = -1.*t7596*t7576*t7651;
  t7844 = -1.*t7645*t7705;
  t7846 = t7842 + t7844;
  t7934 = t5002*t7522*t7572;
  t7935 = -1.*t7576*t7580;
  t7936 = t7934 + t7935;
  t7834 = -1.*t7596*t5002*t7830;
  t7855 = t7830*t7698;
  t7963 = -1.*t5002*t7801;
  t7964 = -1.*t7782*t7580;
  t7965 = t7963 + t7964;
  t7967 = t7596*t7580*t7830;
  t7987 = t5002*t7522*t7576;
  t7990 = -1.*t7696*t7580;
  t7991 = t7987 + t7990;
  t7838 = -1.*t7813*t7809;
  t7839 = -1.*t7672*t7816;
  t7840 = t7834 + t7838 + t7839;
  t7993 = t7803*t7698;
  t7998 = t7830*t7705;
  t7856 = t7809*t7742;
  t7857 = t7816*t7707;
  t7858 = t7855 + t7856 + t7857;
  t7875 = t7830*t7583;
  t7890 = -1.*t7830*t7698;
  t8050 = t7830*t7655;
  t8052 = t7803*t7583;
  t7876 = t7809*t7869;
  t7877 = t7816*t7657;
  t7878 = t7875 + t7876 + t7877;
  t8067 = -1.*t7803*t7698;
  t8069 = -1.*t7830*t7705;
  t7891 = -1.*t7809*t7742;
  t7892 = -1.*t7816*t7707;
  t7895 = t7890 + t7891 + t7892;
  t7914 = t7596*t5002*t7830;
  t7926 = -1.*t7830*t7583;
  t8107 = -1.*t7596*t7580*t7830;
  t7916 = t7813*t7809;
  t7917 = t7672*t7816;
  t7918 = t7914 + t7916 + t7917;
  t8112 = -1.*t7830*t7655;
  t8114 = -1.*t7803*t7583;
  t7927 = -1.*t7809*t7869;
  t7928 = -1.*t7816*t7657;
  t7929 = t7926 + t7927 + t7928;
  t7959 = -1.*t7522*t7767;
  t8165 = -0.068*t7522;
  t8166 = -1.*t7596*t7765;
  t8167 = t8165 + t8166;
  t8170 = 0.068*t7596;
  t8171 = t8170 + t7797;
  t7976 = t7596*t7767*t7576;
  t8207 = -1.*t7645*t7522*t7572;
  t8208 = -1.*t7596*t7572*t7651*t7580;
  t8211 = t8207 + t8208;
  t7960 = t7596*t7580*t7803;
  t7961 = t7959 + t7960 + t7834;
  t8169 = -1.*t7596*t7767;
  t8175 = -1.*t7522*t8171;
  t8185 = -1.*t7522*t7767*t7576;
  t8186 = t7596*t8171*t7576;
  t7981 = t7803*t7705;
  t7982 = t7976 + t7855 + t7981;
  t8224 = Power(t5002,2);
  t8225 = -1.*t7596*t8224*t8167;
  t8229 = t5002*t7522*t7830;
  t8233 = -1.*t7596*t5002*t7576*t7830;
  t8234 = t5002*t8167*t7698;
  t8243 = -1.*t7522*t7576*t7651;
  t8245 = t7596*t7645*t7576*t7580;
  t8246 = t8243 + t8245;
  t8248 = t8171*t7651;
  t8249 = -1.*t7645*t8167*t7580;
  t8250 = t8248 + t8249;
  t8252 = t7645*t8171;
  t8253 = t8167*t7651*t7580;
  t8254 = t8252 + t8253;
  t8256 = t7596*t7651;
  t8257 = t7645*t7522*t7580;
  t8258 = t8256 + t8257;
  t8060 = -1.*t7596*t7767*t7576;
  t8055 = t7596*t7767*t7572;
  t8260 = t7596*t7645;
  t8261 = -1.*t7522*t7651*t7580;
  t8262 = t8260 + t8261;
  t8282 = -1.*t7522*t7767*t7572;
  t8283 = t7596*t8171*t7572;
  t8056 = t7803*t7655;
  t8058 = t8055 + t8056 + t7875;
  t8288 = t7522*t7767*t7576;
  t8289 = -1.*t7596*t8171*t7576;
  t8063 = -1.*t7803*t7705;
  t8064 = t8060 + t7890 + t8063;
  t8316 = -1.*t7596*t5002*t7572*t7830;
  t8318 = t5002*t8167*t7583;
  t8202 = -1.*t7522*t7572*t7651;
  t8203 = t7596*t7645*t7572*t7580;
  t8204 = t8202 + t8203;
  t8323 = t7596*t5002*t7576*t7830;
  t8324 = -1.*t5002*t8167*t7698;
  t8267 = -1.*t7645*t7522*t7576;
  t8268 = -1.*t7596*t7576*t7651*t7580;
  t8269 = t8267 + t8268;
  t8101 = t7522*t7767;
  t8117 = -1.*t7596*t7767*t7572;
  t8103 = -1.*t7596*t7580*t7803;
  t8104 = t8101 + t8103 + t7914;
  t8352 = t7596*t7767;
  t8353 = t7522*t8171;
  t8226 = Power(t7580,2);
  t8358 = t7522*t7767*t7572;
  t8359 = -1.*t7596*t8171*t7572;
  t8118 = -1.*t7803*t7655;
  t8119 = t8117 + t8118 + t7926;
  t8379 = t7596*t8224*t8167;
  t8382 = -1.*t5002*t7522*t7830;
  t8386 = t7596*t5002*t7572*t7830;
  t8388 = -1.*t5002*t8167*t7583;
  t8156 = -1.*t7596*t7801;
  t8160 = t7959 + t8156;
  t8411 = -1.*t7543*t7531;
  t8412 = -1.*t7532*t7544;
  t8413 = t8411 + t8412;
  t8428 = 0.325*t7543;
  t8429 = t8428 + t7774 + t7778;
  t7713 = t7591*t7698;
  t7714 = -1.*t3883*t7707;
  t7715 = t7713 + t7714;
  t8421 = -0.325*t7532;
  t8422 = -1.*t7543*t7750;
  t8423 = -1.*t7532*t7763;
  t8424 = t8421 + t8422 + t8423;
  t8419 = t7596*t7767*t7696;
  t8427 = Power(t7596,2);
  t8430 = t8427*t8429*t7576;
  t8452 = -1.*t5002*t7522*t8429;
  t8453 = t8424*t7580;
  t8454 = t8452 + t8453;
  t8443 = -1.*t5002*t7522*t7696;
  t8444 = t8413*t7580;
  t8445 = t8443 + t8444;
  t8448 = t5002*t8424;
  t8449 = t7522*t8429*t7580;
  t8450 = t8448 + t8449;
  t8459 = t5002*t8413;
  t8460 = t7522*t7696*t7580;
  t8461 = t8459 + t8460;
  t8455 = -1.*t7596*t5002*t8454;
  t8458 = t8454*t7698;
  t8463 = t7830*t8445;
  t8469 = t7596*t7696*t7651;
  t8470 = t7645*t8461;
  t8471 = t8469 + t8470;
  t8473 = t7596*t8429*t7651;
  t8474 = t7645*t8450;
  t8475 = t8473 + t8474;
  t8477 = t7596*t7645*t8429;
  t8478 = -1.*t7651*t8450;
  t8479 = t8477 + t8478;
  t8295 = -1.*t7782*t7696;
  t8296 = t7522*t7801*t7576;
  t8298 = t8295 + t8060 + t8296;
  t8300 = -1.*t7522*t7801*t7572;
  t8301 = t7782*t7576;
  t8302 = t8055 + t8300 + t8301;
  t8431 = Power(t7522,2);
  t8193 = t7782*t7696;
  t8197 = -1.*t7522*t7801*t7576;
  t8499 = -1.*t8424*t7696;
  t8500 = -1.*t7782*t8413;
  t8507 = t8424*t7576;
  t8505 = t8427*t8429*t7572;
  t8497 = -1.*t7596*t7767*t7696;
  t8501 = -1.*t8427*t8429*t7576;
  t8531 = t8454*t7583;
  t8534 = -1.*t8454*t7698;
  t8536 = -1.*t7830*t8445;
  t8484 = t7596*t7645*t7696;
  t8485 = -1.*t7651*t8461;
  t8486 = t8484 + t8485;
  t8348 = t7596*t7801;
  t8349 = t8101 + t8348;
  t8559 = -1.*t8427*t8429*t7572;
  t8578 = t7596*t5002*t8454;
  t8582 = -1.*t8454*t7583;
  t8601 = -0.28*t7531;
  t8602 = 0.0641*t7544;
  t8603 = t8601 + t8602;
  t8615 = t7532*t7750;
  t8616 = t7543*t8603;
  t8617 = t8615 + t8616;
  t8625 = t5002*t7572;
  t8626 = t7522*t8413*t7580;
  t8627 = t8625 + t8626;
  t8631 = -1.*t5002*t7522*t8413;
  t8632 = t7572*t7580;
  t8633 = t8631 + t8632;
  t8635 = t7596*t7645*t8413;
  t8636 = -1.*t7651*t8627;
  t8637 = t8635 + t8636;
  t8612 = -1.*t7532*t8603;
  t8613 = t7753 + t8612;
  t8618 = t8427*t8617*t7576;
  t8651 = -1.*t5002*t7522*t8617;
  t8652 = t8613*t7580;
  t8653 = t8651 + t8652;
  t8647 = t5002*t8613;
  t8648 = t7522*t8617*t7580;
  t8649 = t8647 + t8648;
  t8654 = -1.*t7596*t5002*t8653;
  t8657 = t8653*t7698;
  t8664 = t7596*t8617*t7651;
  t8665 = t7645*t8649;
  t8666 = t8664 + t8665;
  t8668 = t7596*t7645*t8617;
  t8669 = -1.*t7651*t8649;
  t8670 = t8668 + t8669;
  t8363 = t7522*t7801*t7572;
  t8364 = -1.*t7782*t7576;
  t8512 = t7765*t7572;
  t8513 = t8512 + t8301;
  t8519 = -1.*t7765*t7576;
  t8520 = t8295 + t8519;
  t8683 = -1.*t8613*t7696;
  t8688 = t7782*t7572;
  t8693 = t8613*t7576;
  t8689 = t8427*t8617*t7572;
  t8691 = t7596*t7767*t8413;
  t8684 = -1.*t8427*t8617*t7576;
  t8711 = t7830*t8633;
  t8714 = t8653*t7583;
  t8624 = t7596*t8413*t7651;
  t8628 = t7645*t8627;
  t8629 = t8624 + t8628;
  t8718 = -1.*t8653*t7698;
  t7662 = t7591*t7583;
  t7663 = -1.*t3883*t7657;
  t7665 = t7662 + t7663;
  t8747 = -1.*t8427*t8617*t7572;
  t8749 = -1.*t7596*t7767*t8413;
  t8765 = t7596*t5002*t8653;
  t8768 = -1.*t7830*t8633;
  t8771 = -1.*t8653*t7583;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t3883*t7583 - 1.*t7591*t7657)*var2[1] + t7665*var2[2];
  p_output1[10]=(-1.*t3883*t5002*t7596 - 1.*t7591*t7672)*var2[1] + (t5002*t7591*t7596 - 1.*t3883*t7672)*var2[2];
  p_output1[11]=(-1.*t3883*t7698 - 1.*t7591*t7707)*var2[1] + t7715*var2[2];
  p_output1[12]=t7657*var2[0] - 1.*t3883*t7726*var2[1] + t7591*t7726*var2[2] + (t7742*(-1.*t7672*t7805 - 1.*t7672*t7809 - 1.*t7813*t7816 - 1.*t7816*t7822) + t7707*t7840 + t7813*(t7707*t7805 + t7707*t7809 + t7742*t7816 + t7816*t7846) + t7672*t7858)*var2[3];
  p_output1[13]=t7672*var2[0] - 1.*t3883*t7822*var2[1] + t7591*t7822*var2[2] + ((-1.*t7707*t7805 - 1.*t7707*t7809 - 1.*t7742*t7816 - 1.*t7816*t7846)*t7869 + t7742*(t7657*t7805 + t7657*t7809 + t7726*t7816 + t7816*t7869) + t7707*t7878 + t7657*t7895)*var2[3];
  p_output1[14]=t7707*var2[0] - 1.*t3883*t7846*var2[1] + t7591*t7846*var2[2] + ((t7672*t7805 + t7672*t7809 + t7813*t7816 + t7816*t7822)*t7869 + t7813*(-1.*t7657*t7805 - 1.*t7657*t7809 - 1.*t7726*t7816 - 1.*t7816*t7869) + t7657*t7918 + t7672*t7929)*var2[3];
  p_output1[15]=t7645*t7936*var2[0] + (t7591*t7655 + t3883*t7651*t7936)*var2[1] + (t3883*t7655 - 1.*t7591*t7651*t7936)*var2[2] + (-1.*t5002*t7596*t7645*t7858 + t7742*(-1.*t5002*t7596*t7803 + t5002*t7596*t7645*t7809 - 1.*t5002*t7596*t7651*t7816 + t7651*t7672*t7965 - 1.*t7645*t7813*t7965 + t7967) + t7645*t7840*t7991 + t7813*(-1.*t7651*t7707*t7965 + t7645*t7742*t7965 + t7645*t7809*t7991 - 1.*t7651*t7816*t7991 + t7993 + t7998))*var2[3] + (t7705*t7961 + t7698*(t7580*t7596*t7965 + t7967) - 1.*t7580*t7596*t7982 + t5002*t7596*(t7705*t7965 + t7803*t7991 + t7993 + t7998))*var2[4];
  p_output1[16]=-1.*t5002*t7596*t7645*var2[0] + (-1.*t7580*t7591*t7596 - 1.*t3883*t5002*t7596*t7651)*var2[1] + (-1.*t3883*t7580*t7596 + t5002*t7591*t7596*t7651)*var2[2] + (t7645*t7895*t7936 + t7645*t7878*t7991 + t7742*(t7645*t7809*t7936 - 1.*t7651*t7816*t7936 - 1.*t7651*t7657*t7965 + t7645*t7869*t7965 + t8050 + t8052) + t7869*(t7651*t7707*t7965 - 1.*t7645*t7742*t7965 - 1.*t7645*t7809*t7991 + t7651*t7816*t7991 + t8067 + t8069))*var2[3] + (t7698*(t7803*t7936 + t7655*t7965 + t8050 + t8052) + t7705*t8058 + t7655*t8064 + t7583*(-1.*t7705*t7965 - 1.*t7803*t7991 + t8067 + t8069))*var2[4];
  p_output1[17]=t7645*t7991*var2[0] + (t7591*t7705 + t3883*t7651*t7991)*var2[1] + (t3883*t7705 - 1.*t7591*t7651*t7991)*var2[2] + (-1.*t5002*t7596*t7645*t7929 + t7645*t7918*t7936 + t7869*(t5002*t7596*t7803 - 1.*t5002*t7596*t7645*t7809 + t5002*t7596*t7651*t7816 - 1.*t7651*t7672*t7965 + t7645*t7813*t7965 + t8107) + t7813*(-1.*t7645*t7809*t7936 + t7651*t7816*t7936 + t7651*t7657*t7965 - 1.*t7645*t7869*t7965 + t8112 + t8114))*var2[3] + (t7655*t8104 + t7583*(-1.*t7580*t7596*t7965 + t8107) + t5002*t7596*(-1.*t7803*t7936 - 1.*t7655*t7965 + t8112 + t8114) - 1.*t7580*t7596*t8119)*var2[4];
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=t8204*var2[0] + (-1.*t5002*t7572*t7591*t7596 - 1.*t3883*t8211)*var2[1] + (-1.*t3883*t5002*t7572*t7596 + t7591*t8211)*var2[2] + (t7840*t8246 + t7858*t8258 + t7742*(t8225 + t8229 - 1.*t7813*t8250 - 1.*t7672*t8254 - 1.*t7809*t8258 - 1.*t7816*t8262) + t7813*(t8233 + t8234 + t7809*t8246 + t7742*t8250 + t7707*t8254 + t7816*t8269))*var2[3] + (-1.*t5002*t7576*t7596*t7961 - 1.*t5002*t7522*t7982 + t7698*(-1.*t7522*t7580*t7803 + t8169 + t8175 + t8225 - 1.*t7596*t8167*t8226 + t8229) + t5002*t7596*(t7576*t7580*t7596*t7803 - 1.*t7580*t7705*t8167 + t8185 + t8186 + t8233 + t8234))*var2[4] + (-1.*t7522*t7576*t8160 + t7576*t7596*(t7522*t7801 - 1.*t7596*t8167 + t8169 + t8175) + t7522*(-1.*t7576*t7596*t7801 - 1.*t7522*t7576*t8167 + t8185 + t8186) + t7596*(t7976 + t8193 + t8197))*var2[5];
  p_output1[28]=t8258*var2[0] + (-1.*t5002*t7522*t7591 - 1.*t3883*t8262)*var2[1] + (-1.*t3883*t5002*t7522 + t7591*t8262)*var2[2] + (t7895*t8204 + t7878*t8246 + t7742*(t7809*t8204 + t7816*t8211 + t7869*t8250 + t7657*t8254 + t8316 + t8318) + t7869*(-1.*t7809*t8246 - 1.*t7742*t8250 - 1.*t7707*t8254 - 1.*t7816*t8269 + t8323 + t8324))*var2[3] + (-1.*t5002*t7576*t7596*t8058 - 1.*t5002*t7572*t7596*t8064 + t7698*(t7572*t7580*t7596*t7803 - 1.*t7580*t7655*t8167 + t8282 + t8283 + t8316 + t8318) + t7583*(-1.*t7576*t7580*t7596*t7803 + t7580*t7705*t8167 + t8288 + t8289 + t8323 + t8324))*var2[4] + (t7576*t7596*(-1.*t7572*t7596*t7801 - 1.*t7522*t7572*t8167 + t8282 + t8283) + t7572*t7596*(t7576*t7596*t7801 + t7522*t7576*t8167 + t8288 + t8289) - 1.*t7522*t7572*t8298 - 1.*t7522*t7576*t8302)*var2[5];
  p_output1[29]=t8246*var2[0] + (-1.*t5002*t7576*t7591*t7596 - 1.*t3883*t8269)*var2[1] + (-1.*t3883*t5002*t7576*t7596 + t7591*t8269)*var2[2] + (t7918*t8204 + t7929*t8258 + t7869*(t7813*t8250 + t7672*t8254 + t7809*t8258 + t7816*t8262 + t8379 + t8382) + t7813*(-1.*t7809*t8204 - 1.*t7816*t8211 - 1.*t7869*t8250 - 1.*t7657*t8254 + t8386 + t8388))*var2[3] + (-1.*t5002*t7572*t7596*t8104 - 1.*t5002*t7522*t8119 + t7583*(t7522*t7580*t7803 + t7596*t8167*t8226 + t8352 + t8353 + t8379 + t8382) + t5002*t7596*(-1.*t7572*t7580*t7596*t7803 + t7580*t7655*t8167 + t8358 + t8359 + t8386 + t8388))*var2[4] + (-1.*t7522*t7572*t8349 + t7572*t7596*(-1.*t7522*t7801 + t7596*t8167 + t8352 + t8353) + t7522*(t7572*t7596*t7801 + t7522*t7572*t8167 + t8358 + t8359) + t7596*(t8117 + t8363 + t8364))*var2[5];
  p_output1[30]=t7742*var2[0] + t7715*var2[1] + (t3883*t7698 + t7591*t7707)*var2[2] + (t7840*t8471 + t7742*(t8455 - 1.*t7813*t8475 - 1.*t7672*t8479) + t7813*(t8458 + t8463 + t7809*t8471 + t7742*t8475 + t7707*t8479 + t7816*t8486))*var2[3] + (t7961*t8445 + t7698*(-1.*t7522*t7596*t8429 + t7580*t7596*t8450 + t8455) + t5002*t7596*(t8419 + t8430 + t7705*t8450 + t8458 + t7803*t8461 + t8463))*var2[4] + (t7596*t7696*t8160 + t7522*(-1.*t7522*t7696*t7801 + t7782*t8413 + t8419 + t7696*t8424 + t8430 + t7576*t8429*t8431))*var2[5] + (-0.1575*t7576 - 0.2255*t8413)*var2[9];
  p_output1[31]=(t7742*t7895 + t7878*t8471 + t7742*(t7855 + t7856 + t7857 + t7869*t8475 + t7657*t8479 + t8531) + t7869*(-1.*t7809*t8471 - 1.*t7742*t8475 - 1.*t7707*t8479 - 1.*t7816*t8486 + t8534 + t8536))*var2[3] + (t7698*t8064 + t8058*t8445 + t7698*(t7855 + t7976 + t7981 + t7655*t8450 + t8505 + t8531) + t7583*(-1.*t7705*t8450 - 1.*t7803*t8461 + t8497 + t8501 + t8534 + t8536))*var2[4] + (t7576*t7596*t8298 + t7596*t7696*t8302 + t7572*t7596*(t7522*t7696*t7801 - 1.*t7576*t8429*t8431 + t8497 + t8499 + t8500 + t8501) + t7576*t7596*(t7976 + t8193 + t8197 + t7572*t8429*t8431 + t8505 + t8507))*var2[5] + (t7576*(-1.*t7696*t7765 - 1.*t7576*t8429 + t8499 + t8500) + t7696*(t7576*t7765 + t8193 + t7572*t8429 + t8507) + t8413*t8513 + t7696*t8520)*var2[9];
  p_output1[32]=t8471*var2[0] + (t7591*t8445 - 1.*t3883*t8486)*var2[1] + (t3883*t8445 + t7591*t8486)*var2[2] + (t7742*t7918 + t7869*(t7813*t8475 + t7672*t8479 + t8578) + t7813*(t7890 + t7891 + t7892 - 1.*t7869*t8475 - 1.*t7657*t8479 + t8582))*var2[3] + (t7698*t8104 + t7583*(t7522*t7596*t8429 - 1.*t7580*t7596*t8450 + t8578) + t5002*t7596*(t7890 + t8060 + t8063 - 1.*t7655*t8450 + t8559 + t8582))*var2[4] + (t7576*t7596*t8349 + t7522*(t8060 + t8295 + t8296 - 1.*t7576*t8424 - 1.*t7572*t8429*t8431 + t8559))*var2[5] + 0.068*t7696*var2[9];
  p_output1[33]=t8629*var2[0] + (t7591*t8633 - 1.*t3883*t8637)*var2[1] + (t3883*t8633 + t7591*t8637)*var2[2] + (t7840*t7869 + t7742*(t8654 - 1.*t7813*t8666 - 1.*t7672*t8670) + t7813*(t7875 + t7876 + t7877 + t8657 + t7742*t8666 + t7707*t8670))*var2[3] + (t7583*t7961 + t7698*(-1.*t7522*t7596*t8617 + t7580*t7596*t8649 + t8654) + t5002*t7596*(t7875 + t8055 + t8056 + t8618 + t7705*t8649 + t8657))*var2[4] + (t7572*t7596*t8160 + t7522*(t8055 + t8300 + t8301 + t7696*t8613 + t7576*t8431*t8617 + t8618))*var2[5] + (-0.2255*t7576 - 0.1575*t8413)*var2[9] + (-0.325*t7531 - 1.*t7531*t7763 - 1.*t7531*t8603)*var2[10];
  p_output1[34]=(t7869*t7878 + t7895*t8629 + t7742*(t7809*t8629 + t7816*t8637 + t7869*t8666 + t7657*t8670 + t8711 + t8714) + t7869*(t7926 + t7927 + t7928 - 1.*t7742*t8666 - 1.*t7707*t8670 + t8718))*var2[3] + (t7583*t8058 + t8064*t8633 + t7698*(t7803*t8627 + t7655*t8649 + t8689 + t8691 + t8711 + t8714) + t7583*(t7926 + t8117 + t8118 - 1.*t7705*t8649 + t8684 + t8718))*var2[4] + (t7572*t7596*t8302 + t7596*t8298*t8413 + t7572*t7596*(t8117 + t8363 + t8364 - 1.*t7576*t8431*t8617 + t8683 + t8684) + t7576*t7596*(-1.*t7522*t7801*t8413 + t7572*t8431*t8617 + t8688 + t8689 + t8691 + t8693))*var2[5] + (t7576*t8513 + t7572*t8520 + t7576*(-1.*t7572*t7765 + t8364 - 1.*t7576*t8617 + t8683) + t7696*(t7765*t8413 + t7572*t8617 + t8688 + t8693))*var2[9];
  p_output1[35]=t7869*var2[0] + t7665*var2[1] + (t3883*t7583 + t7591*t7657)*var2[2] + (t7918*t8629 + t7869*(t7813*t8666 + t7672*t8670 + t8765) + t7813*(-1.*t7809*t8629 - 1.*t7816*t8637 - 1.*t7869*t8666 - 1.*t7657*t8670 + t8768 + t8771))*var2[3] + (t8104*t8633 + t7583*(t7522*t7596*t8617 - 1.*t7580*t7596*t8649 + t8765) + t5002*t7596*(-1.*t7803*t8627 - 1.*t7655*t8649 + t8747 + t8749 + t8768 + t8771))*var2[4] + (t7596*t8349*t8413 + t7522*(-1.*t7572*t7782 + t7522*t7801*t8413 - 1.*t7576*t8613 - 1.*t7572*t8431*t8617 + t8747 + t8749))*var2[5] + 0.068*t7572*var2[9] + (-0.325*t7544 - 1.*t7544*t7763 - 1.*t7544*t8603)*var2[10];
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

#include "dJh_RlFoot_ParallelStance2.hh"

namespace SymFunction
{

void dJh_RlFoot_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
