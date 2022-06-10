/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:03:42 GMT+02:00
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
  double t3924;
  double t4076;
  double t4093;
  double t4094;
  double t4138;
  double t4177;
  double t4185;
  double t4430;
  double t3570;
  double t3904;
  double t4434;
  double t4470;
  double t4386;
  double t4435;
  double t4436;
  double t2513;
  double t4471;
  double t4497;
  double t4510;
  double t4541;
  double t4542;
  double t5309;
  double t5400;
  double t5474;
  double t5544;
  double t5574;
  double t5591;
  double t5795;
  double t5800;
  double t5802;
  double t5823;
  double t5894;
  double t5900;
  double t6184;
  double t6194;
  double t6197;
  double t6206;
  double t6218;
  double t6219;
  double t6229;
  double t6238;
  double t6246;
  double t6293;
  double t6298;
  double t6300;
  double t6420;
  double t6425;
  double t6431;
  double t6569;
  double t6583;
  double t6585;
  double t6586;
  double t6593;
  double t6659;
  double t6674;
  double t6716;
  double t6721;
  double t6727;
  double t6734;
  double t6739;
  double t6743;
  double t6559;
  double t6609;
  double t6613;
  double t6625;
  double t6710;
  double t6747;
  double t6764;
  double t6765;
  double t6777;
  double t6779;
  double t6782;
  double t6783;
  double t6791;
  double t6796;
  double t6797;
  double t6808;
  double t6814;
  double t6818;
  double t6633;
  double t6799;
  double t6801;
  double t6874;
  double t6876;
  double t6882;
  double t6527;
  double t6533;
  double t6549;
  double t6847;
  double t6853;
  double t6862;
  double t6929;
  double t6931;
  double t6932;
  double t6988;
  double t6989;
  double t6993;
  double t7580;
  double t7606;
  double t7635;
  double t6863;
  double t7885;
  double t7917;
  double t7924;
  double t6938;
  double t8061;
  double t8063;
  double t8065;
  double t6868;
  double t6888;
  double t6898;
  double t7966;
  double t8035;
  double t7974;
  double t7975;
  double t8001;
  double t8060;
  double t8081;
  double t6941;
  double t6943;
  double t6951;
  double t7039;
  double t7179;
  double t8354;
  double t8362;
  double t8406;
  double t8418;
  double t7041;
  double t7050;
  double t7073;
  double t7182;
  double t7187;
  double t7233;
  double t7371;
  double t7464;
  double t7388;
  double t7389;
  double t7390;
  double t8118;
  double t8125;
  double t8700;
  double t8739;
  double t8806;
  double t8840;
  double t7495;
  double t7501;
  double t7504;
  double t7644;
  double t7646;
  double t7665;
  double t7709;
  double t7743;
  double t7765;
  double t7783;
  double t7806;
  double t7830;
  double t7833;
  double t7867;
  double t7875;
  double t9060;
  double t9069;
  double t9074;
  double t9039;
  double t8008;
  double t9118;
  double t9123;
  double t9126;
  double t9134;
  double t9135;
  double t9143;
  double t8068;
  double t8105;
  double t8107;
  double t8108;
  double t8113;
  double t8116;
  double t9213;
  double t8135;
  double t8156;
  double t9252;
  double t8179;
  double t8180;
  double t8192;
  double t8306;
  double t8307;
  double t8308;
  double t8309;
  double t8311;
  double t8320;
  double t8326;
  double t8339;
  double t8345;
  double t8358;
  double t8368;
  double t8372;
  double t8376;
  double t8388;
  double t8410;
  double t8439;
  double t8441;
  double t8444;
  double t8449;
  double t9462;
  double t8471;
  double t8476;
  double t9482;
  double t8485;
  double t8490;
  double t8497;
  double t8500;
  double t8557;
  double t8569;
  double t8580;
  double t8584;
  double t8607;
  double t8608;
  double t8610;
  double t8619;
  double t8664;
  double t8673;
  double t8674;
  double t8680;
  double t8736;
  double t8836;
  double t8895;
  double t8899;
  double t8910;
  double t8922;
  double t8931;
  double t9666;
  double t8963;
  double t8965;
  double t9709;
  double t8988;
  double t8992;
  double t9014;
  double t9817;
  double t9820;
  double t9829;
  double t9890;
  double t9895;
  double t9904;
  double t9935;
  double t9941;
  double t9945;
  double t9954;
  double t9957;
  double t9958;
  double t10013;
  double t10017;
  double t10021;
  double t10023;
  double t10028;
  double t10036;
  double t10045;
  double t10058;
  double t10061;
  double t10063;
  double t10054;
  double t10076;
  double t10078;
  double t10086;
  double t10108;
  double t10109;
  double t10111;
  double t10117;
  double t10125;
  double t10126;
  double t10194;
  double t10203;
  double t10272;
  double t10274;
  double t10247;
  double t10354;
  double t10361;
  double t9872;
  double t9906;
  double t9911;
  double t10370;
  double t5712;
  double t5721;
  double t5725;
  double t10491;
  double t10538;
  double t10567;
  double t9833;
  double t9838;
  double t9846;
  double t9849;
  double t9855;
  double t9857;
  double t9859;
  double t6337;
  double t6355;
  double t6359;
  double t10759;
  double t10760;
  double t10763;
  double t10769;
  double t10775;
  double t10779;
  double t10783;
  double t10789;
  double t10799;
  double t10804;
  double t10808;
  double t10776;
  double t10821;
  double t10824;
  double t10826;
  double t10842;
  double t10847;
  double t10851;
  double t10832;
  double t10835;
  double t10876;
  double t10877;
  double t10878;
  double t10881;
  double t10883;
  double t10886;
  double t10900;
  double t10904;
  double t10905;
  double t10179;
  double t10186;
  double t10225;
  double t10229;
  double t10291;
  double t10292;
  double t10295;
  double t10995;
  double t10340;
  double t10341;
  double t10344;
  double t11014;
  double t11054;
  double t11189;
  double t11207;
  double t11211;
  double t10920;
  double t10924;
  double t10929;
  double t10443;
  double t10445;
  double t10446;
  double t11385;
  double t11417;
  t3924 = Cos(var1[10]);
  t4076 = Cos(var1[11]);
  t4093 = -1.*t3924*t4076;
  t4094 = Sin(var1[10]);
  t4138 = Sin(var1[11]);
  t4177 = -1.*t4094*t4138;
  t4185 = t4093 + t4177;
  t4430 = Cos(var1[9]);
  t3570 = Cos(var1[5]);
  t3904 = Sin(var1[9]);
  t4434 = Sin(var1[5]);
  t4470 = Cos(var1[3]);
  t4386 = t3570*t3904*t4185;
  t4435 = t4430*t4185*t4434;
  t4436 = t4386 + t4435;
  t2513 = Sin(var1[3]);
  t4471 = Cos(var1[4]);
  t4497 = -1.*t4076*t4094;
  t4510 = t3924*t4138;
  t4541 = t4497 + t4510;
  t4542 = t4471*t4541;
  t5309 = Sin(var1[4]);
  t5400 = t4430*t3570*t4185;
  t5474 = -1.*t3904*t4185*t4434;
  t5544 = t5400 + t5474;
  t5574 = -1.*t5309*t5544;
  t5591 = t4542 + t5574;
  t5795 = t3570*t3904;
  t5800 = t4430*t4434;
  t5802 = t5795 + t5800;
  t5823 = -1.*t4430*t3570;
  t5894 = t3904*t4434;
  t5900 = t5823 + t5894;
  t6184 = t3570*t3904*t4541;
  t6194 = t4430*t4541*t4434;
  t6197 = t6184 + t6194;
  t6206 = t3924*t4076;
  t6218 = t4094*t4138;
  t6219 = t6206 + t6218;
  t6229 = t4471*t6219;
  t6238 = t4430*t3570*t4541;
  t6246 = -1.*t3904*t4541*t4434;
  t6293 = t6238 + t6246;
  t6298 = -1.*t5309*t6293;
  t6300 = t6229 + t6298;
  t6420 = -1.*t4541*t5309;
  t6425 = -1.*t4471*t5544;
  t6431 = t6420 + t6425;
  t6569 = -1.*t4076;
  t6583 = 1. + t6569;
  t6585 = -0.50321*t6583;
  t6586 = -0.19821*t4076;
  t6593 = t6585 + t6586;
  t6659 = -1.*t4430;
  t6674 = 1. + t6659;
  t6716 = -1.*t3924;
  t6721 = 1. + t6716;
  t6727 = -0.28121*t6721;
  t6734 = t3924*t6593;
  t6739 = 0.305*t4094*t4138;
  t6743 = t6727 + t6734 + t6739;
  t6559 = 0.28121*t4094;
  t6609 = t6593*t4094;
  t6613 = -0.305*t3924*t4138;
  t6625 = t6559 + t6609 + t6613;
  t6710 = -0.15121*t6674;
  t6747 = t4430*t6743;
  t6764 = t6710 + t6747;
  t6765 = t3570*t6764;
  t6777 = 0.15121*t6674;
  t6779 = 0.15121*t4430;
  t6782 = 0.15121*t3904;
  t6783 = t3904*t6743;
  t6791 = t6777 + t6779 + t6782 + t6783;
  t6796 = -1.*t6791*t4434;
  t6797 = t6765 + t6796;
  t6808 = t6625*t5309;
  t6814 = t4471*t6797;
  t6818 = t6808 + t6814;
  t6633 = -1.*t6625*t5309;
  t6799 = -1.*t4471*t6797;
  t6801 = t6633 + t6799;
  t6874 = t4471*t6625;
  t6876 = -1.*t5309*t6797;
  t6882 = t6874 + t6876;
  t6527 = t6219*t5309;
  t6533 = t4471*t6293;
  t6549 = t6527 + t6533;
  t6847 = t3570*t6791;
  t6853 = t6764*t4434;
  t6862 = t6847 + t6853;
  t6929 = -1.*t6219*t5309;
  t6931 = -1.*t4471*t6293;
  t6932 = t6929 + t6931;
  t6988 = t4541*t5309;
  t6989 = t4471*t5544;
  t6993 = t6988 + t6989;
  t7580 = -1.*t3570*t3904*t4185;
  t7606 = -1.*t4430*t4185*t4434;
  t7635 = t7580 + t7606;
  t6863 = -1.*t5900*t6862;
  t7885 = -1.*t3570*t6791;
  t7917 = -1.*t6764*t4434;
  t7924 = t7885 + t7917;
  t6938 = t6197*t6862;
  t8061 = -1.*t3570*t3904*t4541;
  t8063 = -1.*t4430*t4541*t4434;
  t8065 = t8061 + t8063;
  t6868 = -1.*t4471*t5802*t6818;
  t6888 = t5309*t5802*t6882;
  t6898 = t6863 + t6868 + t6888;
  t7966 = -1.*t5802*t6862;
  t8035 = -1.*t5900*t6797;
  t7974 = t4430*t3570;
  t7975 = -1.*t3904*t4434;
  t8001 = t7974 + t7975;
  t8060 = t6293*t6862;
  t8081 = t6197*t6797;
  t6941 = t6549*t6818;
  t6943 = t6300*t6882;
  t6951 = t6938 + t6941 + t6943;
  t7039 = -1.*t6197*t6862;
  t7179 = t4436*t6862;
  t8354 = -1.*t6293*t6862;
  t8362 = -1.*t6197*t6797;
  t8406 = t5544*t6862;
  t8418 = t4436*t6797;
  t7041 = -1.*t6549*t6818;
  t7050 = -1.*t6300*t6882;
  t7073 = t7039 + t7041 + t7050;
  t7182 = t6993*t6818;
  t7187 = t5591*t6882;
  t7233 = t7179 + t7182 + t7187;
  t7371 = t5900*t6862;
  t7464 = -1.*t4436*t6862;
  t7388 = t4471*t5802*t6818;
  t7389 = -1.*t5309*t5802*t6882;
  t7390 = t7371 + t7388 + t7389;
  t8118 = Power(t4471,2);
  t8125 = Power(t5309,2);
  t8700 = t5802*t6862;
  t8739 = t5900*t6797;
  t8806 = -1.*t5544*t6862;
  t8840 = -1.*t4436*t6797;
  t7495 = -1.*t6993*t6818;
  t7501 = -1.*t5591*t6882;
  t7504 = t7464 + t7495 + t7501;
  t7644 = var2[0]*t4471*t7635;
  t7646 = t2513*t5309*t7635;
  t7665 = t4470*t5544;
  t7709 = t7646 + t7665;
  t7743 = var2[1]*t7709;
  t7765 = -1.*t4470*t5309*t7635;
  t7783 = t2513*t5544;
  t7806 = t7765 + t7783;
  t7830 = var2[2]*t7806;
  t7833 = -1.*t5802*t6797;
  t7867 = t6863 + t7833;
  t7875 = t6293*t7867;
  t9060 = -0.15121*t3904;
  t9069 = -1.*t3904*t6743;
  t9074 = t9060 + t9069;
  t9039 = t6779 + t6747;
  t8008 = -1.*t8001*t6797;
  t9118 = t3570*t9074;
  t9123 = -1.*t9039*t4434;
  t9126 = t9118 + t9123;
  t9134 = t3570*t9039;
  t9135 = t9074*t4434;
  t9143 = t9134 + t9135;
  t8068 = t8065*t6797;
  t8105 = t6625*t6219;
  t8107 = t6293*t6797;
  t8108 = t8105 + t6938 + t8107;
  t8113 = t5802*t8108;
  t8116 = t4471*t8065*t6898;
  t9213 = -1.*t5900*t9143;
  t8135 = -1.*t4471*t8001*t6818;
  t8156 = t5309*t8001*t6882;
  t9252 = t6197*t9143;
  t8179 = t4471*t8065*t6818;
  t8180 = -1.*t5309*t8065*t6882;
  t8192 = t4471*t8001*t6951;
  t8306 = var2[0]*t4471*t8001;
  t8307 = t2513*t5802;
  t8308 = -1.*t4470*t5309*t8001;
  t8309 = t8307 + t8308;
  t8311 = var2[2]*t8309;
  t8320 = t4470*t5802;
  t8326 = t2513*t5309*t8001;
  t8339 = t8320 + t8326;
  t8345 = var2[1]*t8339;
  t8358 = -1.*t8065*t6797;
  t8368 = -1.*t6625*t6219;
  t8372 = -1.*t6293*t6797;
  t8376 = t8368 + t7039 + t8372;
  t8388 = t5544*t8376;
  t8410 = t7635*t6797;
  t8439 = t6625*t4541;
  t8441 = t5544*t6797;
  t8444 = t8439 + t7179 + t8441;
  t8449 = t6293*t8444;
  t9462 = -1.*t6197*t9143;
  t8471 = -1.*t4471*t8065*t6818;
  t8476 = t5309*t8065*t6882;
  t9482 = t4436*t9143;
  t8485 = t4471*t7635*t6818;
  t8490 = -1.*t5309*t7635*t6882;
  t8497 = t4471*t7635*t7073;
  t8500 = t4471*t8065*t7233;
  t8557 = var2[0]*t4471*t8065;
  t8569 = t2513*t5309*t8065;
  t8580 = t4470*t6293;
  t8584 = t8569 + t8580;
  t8607 = var2[1]*t8584;
  t8608 = -1.*t4470*t5309*t8065;
  t8610 = t2513*t6293;
  t8619 = t8608 + t8610;
  t8664 = var2[2]*t8619;
  t8673 = t5802*t6797;
  t8674 = t7371 + t8673;
  t8680 = t5544*t8674;
  t8736 = t8001*t6797;
  t8836 = -1.*t7635*t6797;
  t8895 = -1.*t6625*t4541;
  t8899 = -1.*t5544*t6797;
  t8910 = t8895 + t7464 + t8899;
  t8922 = t5802*t8910;
  t8931 = t4471*t7635*t7390;
  t9666 = t5900*t9143;
  t8963 = t4471*t8001*t6818;
  t8965 = -1.*t5309*t8001*t6882;
  t9709 = -1.*t4436*t9143;
  t8988 = -1.*t4471*t7635*t6818;
  t8992 = t5309*t7635*t6882;
  t9014 = t4471*t8001*t7504;
  t9817 = t4076*t4094;
  t9820 = -1.*t3924*t4138;
  t9829 = t9817 + t9820;
  t9890 = t4430*t3570*t9829;
  t9895 = -1.*t3904*t9829*t4434;
  t9904 = t9890 + t9895;
  t9935 = t3570*t3904*t9829;
  t9941 = t4430*t9829*t4434;
  t9945 = t9935 + t9941;
  t9954 = t4471*t4185;
  t9957 = -1.*t5309*t9904;
  t9958 = t9954 + t9957;
  t10013 = -0.28121*t4094;
  t10017 = -1.*t6593*t4094;
  t10021 = 0.305*t3924*t4138;
  t10023 = t10013 + t10017 + t10021;
  t10028 = t3570*t3904*t10023;
  t10036 = t4430*t10023*t4434;
  t10045 = t10028 + t10036;
  t10058 = t4430*t3570*t10023;
  t10061 = -1.*t3904*t10023*t4434;
  t10063 = t10058 + t10061;
  t10054 = -1.*t5900*t10045;
  t10076 = 0.28121*t3924;
  t10078 = t10076 + t6734 + t6739;
  t10086 = t10045*t6197;
  t10108 = t10078*t5309;
  t10109 = t4471*t10063;
  t10111 = t10108 + t10109;
  t10117 = t4471*t10078;
  t10125 = -1.*t5309*t10063;
  t10126 = t10117 + t10125;
  t10194 = t6625*t4185;
  t10203 = t4541*t10078;
  t10272 = Power(t4430,2);
  t10274 = Power(t3904,2);
  t10247 = -1.*t10078*t6219;
  t10354 = t10045*t4436;
  t10361 = t9945*t6862;
  t9872 = t4185*t5309;
  t9906 = t4471*t9904;
  t9911 = t9872 + t9906;
  t10370 = -1.*t10045*t6197;
  t5712 = t4470*t4436;
  t5721 = -1.*t2513*t5591;
  t5725 = t5712 + t5721;
  t10491 = t5900*t10045;
  t10538 = -1.*t10045*t4436;
  t10567 = -1.*t9945*t6862;
  t9833 = 0.15121*t9829;
  t9838 = 0.15121*t4541;
  t9846 = t9833 + t9838;
  t9849 = var2[9]*t9846;
  t9855 = -1.*t3904*t6764;
  t9857 = t4430*t6791;
  t9859 = t9855 + t9857;
  t6337 = t4470*t6197;
  t6355 = -1.*t2513*t6300;
  t6359 = t6337 + t6355;
  t10759 = 0.305*t4076*t4094;
  t10760 = t10759 + t6613;
  t10763 = t3570*t3904*t10760;
  t10769 = t4430*t10760*t4434;
  t10775 = t10763 + t10769;
  t10779 = t4430*t3570*t10760;
  t10783 = -1.*t3904*t10760*t4434;
  t10789 = t10779 + t10783;
  t10799 = t3570*t3904*t6219;
  t10804 = t4430*t6219*t4434;
  t10808 = t10799 + t10804;
  t10776 = -1.*t5900*t10775;
  t10821 = -0.305*t3924*t4076;
  t10824 = -0.305*t4094*t4138;
  t10826 = t10821 + t10824;
  t10842 = t4430*t3570*t6219;
  t10847 = -1.*t3904*t6219*t4434;
  t10851 = t10842 + t10847;
  t10832 = t10775*t6197;
  t10835 = t10808*t6862;
  t10876 = t10826*t5309;
  t10877 = t4471*t10789;
  t10878 = t10876 + t10877;
  t10881 = t4471*t10826;
  t10883 = -1.*t5309*t10789;
  t10886 = t10881 + t10883;
  t10900 = t9829*t5309;
  t10904 = t4471*t10851;
  t10905 = t10900 + t10904;
  t10179 = t4185*t6743;
  t10186 = t8439 + t10179;
  t10225 = -1.*t4541*t6743;
  t10229 = t10225 + t8368;
  t10291 = -1.*t4430*t4541*t6764;
  t10292 = -1.*t3904*t4541*t6791;
  t10295 = t8368 + t10291 + t10292;
  t10995 = t4541*t10826;
  t10340 = t4430*t4185*t6764;
  t10341 = t3904*t4185*t6791;
  t10344 = t8439 + t10340 + t10341;
  t11014 = -1.*t9829*t6625;
  t11054 = -1.*t10826*t6219;
  t11189 = t10775*t4436;
  t11207 = -1.*t10775*t6197;
  t11211 = -1.*t10808*t6862;
  t10920 = t4471*t9829;
  t10924 = -1.*t5309*t10851;
  t10929 = t10920 + t10924;
  t10443 = t3904*t6764;
  t10445 = -1.*t4430*t6791;
  t10446 = t10443 + t10445;
  t11385 = t5900*t10775;
  t11417 = -1.*t10775*t4436;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t2513*t4436 - 1.*t4470*t5591)*var2[1] + t5725*var2[2];
  p_output1[10]=(t4470*t5309*t5802 - 1.*t2513*t5900)*var2[1] + (t2513*t5309*t5802 + t4470*t5900)*var2[2];
  p_output1[11]=(-1.*t2513*t6197 - 1.*t4470*t6300)*var2[1] + t6359*var2[2];
  p_output1[12]=t5591*var2[0] - 1.*t2513*t6431*var2[1] + t4470*t6431*var2[2] + (t6549*(t5309*t5802*t6801 + t5309*t5802*t6818) + t6300*t6898 + t4471*t5802*(t6300*t6801 + t6300*t6818 + t6549*t6882 + t6882*t6932) - 1.*t5309*t5802*t6951)*var2[3];
  p_output1[13]=-1.*t5309*t5802*var2[0] + t2513*t4471*t5802*var2[1] - 1.*t4470*t4471*t5802*var2[2] + ((-1.*t6300*t6801 - 1.*t6300*t6818 - 1.*t6549*t6882 - 1.*t6882*t6932)*t6993 + t6549*(t5591*t6801 + t5591*t6818 + t6431*t6882 + t6882*t6993) + t5591*t7073 + t6300*t7233)*var2[3];
  p_output1[14]=t6300*var2[0] - 1.*t2513*t6932*var2[1] + t4470*t6932*var2[2] + ((-1.*t5309*t5802*t6801 - 1.*t5309*t5802*t6818)*t6993 + t4471*t5802*(-1.*t5591*t6801 - 1.*t5591*t6818 - 1.*t6431*t6882 - 1.*t6882*t6993) + t5591*t7390 - 1.*t5309*t5802*t7504)*var2[3];
  p_output1[15]=t7644 + t7743 + t7830 + (t8116 + t6549*(t7966 + t8035 - 1.*t5802*t7924*t8118 - 1.*t5802*t7924*t8125 + t8135 + t8156) + t4471*t5802*(-1.*t5309*t6300*t7924 + t4471*t6549*t7924 + t8060 + t8081 + t8179 + t8180) + t8192)*var2[3] + (t7875 + t6197*(-1.*t5802*t7924 + t7966 + t8008 + t8035) + t5900*(t6293*t7924 + t8060 + t8068 + t8081) + t8113)*var2[4];
  p_output1[16]=t8306 + t8311 + t8345 + (t6993*(t5309*t6300*t7924 - 1.*t4471*t6549*t7924 + t8354 + t8362 + t8471 + t8476) + t6549*(-1.*t5309*t5591*t7924 + t4471*t6993*t7924 + t8406 + t8418 + t8485 + t8490) + t8497 + t8500)*var2[3] + (t4436*(-1.*t6293*t7924 + t8354 + t8358 + t8362) + t8388 + t6197*(t5544*t7924 + t8406 + t8410 + t8418) + t8449)*var2[4];
  p_output1[17]=t8557 + t8607 + t8664 + (t8931 + t6993*(t5802*t7924*t8118 + t5802*t7924*t8125 + t8700 + t8739 + t8963 + t8965) + t4471*t5802*(t5309*t5591*t7924 - 1.*t4471*t6993*t7924 + t8806 + t8840 + t8988 + t8992) + t9014)*var2[3] + (t8680 + t4436*(t5802*t7924 + t8700 + t8736 + t8739) + t5900*(-1.*t5544*t7924 + t8806 + t8836 + t8840) + t8922)*var2[4];
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=t7644 + t7743 + t7830 + (t8116 + t8192 + t6549*(t7966 + t8135 + t8156 - 1.*t5802*t8118*t9126 - 1.*t5802*t8125*t9126 + t9213) + t4471*t5802*(t8060 + t8179 + t8180 - 1.*t5309*t6300*t9126 + t4471*t6549*t9126 + t9252))*var2[3] + (t7875 + t8113 + t6197*(t7966 + t8008 - 1.*t5802*t9126 + t9213) + t5900*(t8060 + t8068 + t6293*t9126 + t9252))*var2[4] + t6219*(-1.*t4430*t6764 - 1.*t3904*t6791 + t4430*t9039 - 1.*t3904*t9074)*var2[5];
  p_output1[28]=t8306 + t8311 + t8345 + (t8497 + t8500 + t6993*(t8354 + t8471 + t8476 + t5309*t6300*t9126 - 1.*t4471*t6549*t9126 + t9462) + t6549*(t8406 + t8485 + t8490 - 1.*t5309*t5591*t9126 + t4471*t6993*t9126 + t9482))*var2[3] + (t8388 + t8449 + t4436*(t8354 + t8358 - 1.*t6293*t9126 + t9462) + t6197*(t8406 + t8410 + t5544*t9126 + t9482))*var2[4] + (t6219*(-1.*t3904*t4185*t6764 + t4185*t4430*t6791 + t3904*t4185*t9039 + t4185*t4430*t9074) + t4541*(t3904*t4541*t6764 - 1.*t4430*t4541*t6791 - 1.*t3904*t4541*t9039 - 1.*t4430*t4541*t9074))*var2[5];
  p_output1[29]=t8557 + t8607 + t8664 + (t8931 + t9014 + t6993*(t8700 + t8963 + t8965 + t5802*t8118*t9126 + t5802*t8125*t9126 + t9666) + t4471*t5802*(t8806 + t8988 + t8992 + t5309*t5591*t9126 - 1.*t4471*t6993*t9126 + t9709))*var2[3] + (t8680 + t8922 + t4436*(t8700 + t8736 + t5802*t9126 + t9666) + t5900*(t8806 + t8836 - 1.*t5544*t9126 + t9709))*var2[4] + t4541*(t4430*t6764 + t3904*t6791 - 1.*t4430*t9039 + t3904*t9074)*var2[5];
  p_output1[30]=t9849 + t9911*var2[0] + (t4470*t9945 - 1.*t2513*t9958)*var2[1] + (t2513*t9945 + t4470*t9958)*var2[2] + ((t10054 - 1.*t10111*t4471*t5802 + t10126*t5309*t5802)*t6549 + t6898*t6993 + t4471*t5802*(t10086 + t10126*t6300 + t10111*t6549 + t7179 + t7182 + t7187))*var2[3] + ((t10054 - 1.*t10063*t5802)*t6197 + t4436*t7867 + t5900*(t10086 + t10078*t6219 + t10063*t6293 + t7179 + t8439 + t8441))*var2[4] + t4541*t9859*var2[5];
  p_output1[31]=(t6993*t7233 + t6993*(t10370 - 1.*t10126*t6300 - 1.*t10111*t6549 + t7464 + t7495 + t7501) + t7073*t9911 + t6549*(t10354 + t10361 + t10126*t5591 + t10111*t6993 + t6818*t9911 + t6882*t9958))*var2[3] + (t4436*t8444 + t4436*(t10247 + t10370 - 1.*t10063*t6293 + t7464 + t8895 + t8899) + t6197*(t10194 + t10203 + t10354 + t10361 + t10063*t5544 + t6797*t9904) + t8376*t9945)*var2[4] + (t10295*t4185 + t10344*t4541 + t4541*(t10247 - 1.*t10023*t10272*t4541 - 1.*t10023*t10274*t4541 - 1.*t4185*t4430*t6764 - 1.*t3904*t4185*t6791 + t8895) + t6219*(t10194 + t10203 + t10023*t10272*t4185 + t10023*t10274*t4185 + t4430*t6764*t9829 + t3904*t6791*t9829))*var2[5] + (t10229*t4185 + t10186*t4541 + t4541*(t10247 - 1.*t10023*t4541 - 1.*t4185*t6743 + t8895) + t6219*(t10194 + t10203 + t10023*t4185 + t6743*t9829))*var2[9];
  p_output1[32]=t6993*var2[0] + t5725*var2[1] + (t2513*t4436 + t4470*t5591)*var2[2] + ((t10491 + t10111*t4471*t5802 - 1.*t10126*t5309*t5802)*t6993 + t7390*t9911 + t4471*t5802*(t10538 + t10567 - 1.*t10126*t5591 - 1.*t10111*t6993 - 1.*t6818*t9911 - 1.*t6882*t9958))*var2[3] + (t4436*(t10491 + t10063*t5802) + t5900*(t10538 + t10567 - 1.*t10078*t4541 - 1.*t10063*t5544 - 1.*t4185*t6625 - 1.*t6797*t9904) + t8674*t9945)*var2[4] + t10446*t4185*var2[5];
  p_output1[33]=t9849 + t6549*var2[0] + t6359*var2[1] + (t2513*t6197 + t4470*t6300)*var2[2] + ((t10776 - 1.*t10878*t4471*t5802 + t10886*t5309*t5802)*t6549 + t4471*t5802*(t10832 + t10835 + t10886*t6300 + t10878*t6549 + t10905*t6818 + t10929*t6882) + t10905*t6898)*var2[3] + ((t10776 - 1.*t10789*t5802)*t6197 + t10808*t7867 + t5900*(t10832 + t10835 + t10826*t6219 + t10789*t6293 + t10851*t6797 + t6625*t9829))*var2[4] + t9829*t9859*var2[5] + (0.28121*t4076 - 0.305*Power(t4076,2) + t4076*t6593)*var2[10];
  p_output1[34]=((t11207 + t11211 - 1.*t10886*t6300 - 1.*t10878*t6549 - 1.*t10905*t6818 - 1.*t10929*t6882)*t6993 + t6549*(t11189 + t10886*t5591 + t6938 + t6941 + t6943 + t10878*t6993) + t6549*t7073 + t10905*t7233)*var2[3] + (t4436*(t11014 + t11054 + t11207 + t11211 - 1.*t10789*t6293 - 1.*t10851*t6797) + t6197*(t10995 + t11189 + t10789*t5544 + t6938 + t8105 + t8107) + t6197*t8376 + t10808*t8444)*var2[4] + (t10295*t6219 + t4541*(t11014 + t11054 - 1.*t10272*t10760*t4541 - 1.*t10274*t10760*t4541 - 1.*t4430*t6219*t6764 - 1.*t3904*t6219*t6791) + t6219*(t10995 + t10272*t10760*t4185 + t10274*t10760*t4185 + t4430*t4541*t6764 + t3904*t4541*t6791 + t8105) + t10344*t9829)*var2[5] + (t10229*t6219 + t4541*(t11014 + t11054 - 1.*t10760*t4541 - 1.*t6219*t6743) + t6219*(t10995 + t10760*t4185 + t4541*t6743 + t8105) + t10186*t9829)*var2[9];
  p_output1[35]=t10905*var2[0] + (-1.*t10929*t2513 + t10808*t4470)*var2[1] + (t10808*t2513 + t10929*t4470)*var2[2] + ((t11385 + t10878*t4471*t5802 - 1.*t10886*t5309*t5802)*t6993 + t4471*t5802*(t11417 - 1.*t10886*t5591 - 1.*t10878*t6993 + t7039 + t7041 + t7050) + t6549*t7390)*var2[3] + (t4436*(t11385 + t10789*t5802) + t5900*(t11417 - 1.*t10826*t4541 - 1.*t10789*t5544 + t7039 + t8368 + t8372) + t6197*t8674)*var2[4] + t10446*t6219*var2[5] + (-0.28121*t4138 + 0.305*t4076*t4138 - 1.*t4138*t6593)*var2[10];
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

#include "dJh_RlFoot_DiagonalStance.hh"

namespace SymFunction
{

void dJh_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
