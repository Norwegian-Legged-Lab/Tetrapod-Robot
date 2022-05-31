/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 17:00:36 GMT+02:00
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
  double t5309;
  double t7449;
  double t5858;
  double t7664;
  double t7722;
  double t7658;
  double t7744;
  double t7428;
  double t7795;
  double t7798;
  double t7813;
  double t7503;
  double t7649;
  double t7692;
  double t7760;
  double t7786;
  double t8363;
  double t8364;
  double t8371;
  double t8372;
  double t8374;
  double t8375;
  double t8407;
  double t8417;
  double t8419;
  double t8420;
  double t8421;
  double t8422;
  double t8468;
  double t7894;
  double t7906;
  double t7911;
  double t8315;
  double t8326;
  double t8345;
  double t7820;
  double t7826;
  double t7840;
  double t8472;
  double t8488;
  double t8490;
  double t8536;
  double t8549;
  double t8551;
  double t7433;
  double t7515;
  double t7568;
  double t8563;
  double t8565;
  double t8569;
  double t8773;
  double t8622;
  double t7790;
  double t7843;
  double t7882;
  double t8288;
  double t8355;
  double t8357;
  double t9470;
  double t9475;
  double t9477;
  double t9478;
  double t9479;
  double t9480;
  double t9481;
  double t9484;
  double t9485;
  double t9486;
  double t9492;
  double t9497;
  double t9498;
  double t8501;
  double t8508;
  double t8510;
  double t9373;
  double t9401;
  double t9416;
  double t9127;
  double t9131;
  double t9248;
  double t8578;
  double t8580;
  double t8581;
  double t9592;
  double t9642;
  double t9646;
  double t8788;
  double t8980;
  double t9058;
  double t9661;
  double t9662;
  double t9673;
  double t9917;
  double t9918;
  double t9919;
  double t9454;
  double t9455;
  double t9456;
  double t9459;
  double t9461;
  double t9463;
  double t9930;
  double t9931;
  double t9932;
  double t9933;
  double t9934;
  double t9935;
  double t9936;
  double t9937;
  double t9939;
  double t10018;
  double t10035;
  double t10036;
  double t10037;
  double t9502;
  double t9509;
  double t9510;
  double t9522;
  double t9539;
  double t9570;
  double t9678;
  double t9729;
  double t9765;
  double t9883;
  double t9885;
  double t9906;
  double t10050;
  double t10056;
  double t10058;
  double t10069;
  double t10098;
  double t10101;
  double t10202;
  double t10210;
  double t10219;
  double t10222;
  double t10226;
  double t10245;
  double t10246;
  double t10250;
  double t10251;
  double t10253;
  double t10256;
  double t10257;
  double t10258;
  double t10184;
  double t10231;
  double t10232;
  double t10238;
  double t10247;
  double t10259;
  double t10260;
  double t10264;
  double t10265;
  double t10266;
  double t10267;
  double t10268;
  double t10273;
  double t10274;
  double t10275;
  double t10301;
  double t10307;
  double t10308;
  double t10241;
  double t10288;
  double t10291;
  double t10359;
  double t10361;
  double t10365;
  double t10312;
  double t10314;
  double t10330;
  double t10349;
  double t10350;
  double t10370;
  double t10377;
  double t10677;
  double t10684;
  double t10686;
  double t10470;
  double t10472;
  double t10473;
  double t10474;
  double t10494;
  double t10496;
  double t10497;
  double t10498;
  double t10675;
  double t10699;
  double t10516;
  double t10518;
  double t10521;
  double t10522;
  double t10555;
  double t10580;
  double t10591;
  double t10593;
  double t10651;
  double t10653;
  double t10660;
  double t10661;
  double t10671;
  double t10708;
  double t10839;
  double t10840;
  double t10841;
  double t10842;
  double t10844;
  double t10851;
  double t10855;
  double t10712;
  double t10723;
  double t10728;
  double t10858;
  double t10867;
  double t10869;
  double t10732;
  double t10747;
  double t10756;
  double t10766;
  double t10771;
  double t10779;
  double t10780;
  double t10788;
  double t10793;
  double t10798;
  double t10802;
  double t10805;
  double t10809;
  double t10810;
  double t10814;
  double t10820;
  double t10821;
  double t10827;
  double t10830;
  double t11017;
  double t11019;
  double t11023;
  double t11024;
  double t11033;
  double t11034;
  double t11035;
  double t8498;
  double t8511;
  double t8527;
  double t11008;
  double t11012;
  double t11013;
  double t11028;
  double t11036;
  double t11065;
  double t11075;
  double t11078;
  double t11080;
  double t11298;
  double t11299;
  double t11300;
  double t11306;
  double t11331;
  double t11334;
  double t11335;
  double t11336;
  double t11301;
  double t11302;
  double t11303;
  double t11332;
  double t11339;
  double t11348;
  double t11350;
  double t11389;
  double t11395;
  double t8575;
  double t8584;
  double t8590;
  double t10709;
  double t10729;
  double t10773;
  double t10790;
  double t10806;
  double t10815;
  double t12661;
  double t12667;
  double t12713;
  double t10883;
  double t12736;
  double t10903;
  double t12761;
  double t12887;
  double t12924;
  double t12976;
  double t12981;
  double t13325;
  double t13371;
  double t13382;
  double t10958;
  double t13413;
  double t10975;
  double t13698;
  double t13727;
  double t13734;
  double t13744;
  double t13749;
  double t10983;
  double t14008;
  double t14120;
  double t14132;
  double t14369;
  double t14419;
  double t10995;
  double t14687;
  double t15173;
  double t15183;
  double t15207;
  double t15233;
  double t11016;
  double t11124;
  double t11128;
  double t11202;
  double t11209;
  double t11256;
  double t11277;
  double t11290;
  double t11305;
  double t11425;
  double t11530;
  double t11560;
  double t11561;
  double t11768;
  double t12108;
  double t12231;
  double t16739;
  double t16770;
  double t18424;
  double t18426;
  double t16791;
  double t18386;
  double t18389;
  double t18394;
  double t18397;
  double t18409;
  double t18410;
  double t18413;
  double t18414;
  double t18416;
  double t18077;
  double t18082;
  double t18083;
  double t18459;
  double t18463;
  double t18466;
  double t18836;
  double t18839;
  double t18868;
  double t18874;
  double t18877;
  double t18882;
  double t18889;
  double t18904;
  double t22169;
  double t22170;
  t5309 = Sin(var1[4]);
  t7449 = Cos(var1[12]);
  t5858 = Cos(var1[5]);
  t7664 = Cos(var1[14]);
  t7722 = Sin(var1[13]);
  t7658 = Cos(var1[13]);
  t7744 = Sin(var1[14]);
  t7428 = Sin(var1[12]);
  t7795 = t7664*t7722;
  t7798 = -1.*t7658*t7744;
  t7813 = t7795 + t7798;
  t7503 = Sin(var1[5]);
  t7649 = Cos(var1[4]);
  t7692 = t7658*t7664;
  t7760 = t7722*t7744;
  t7786 = t7692 + t7760;
  t8363 = -1.*t7449*t5858;
  t8364 = t7428*t7503;
  t8371 = t8363 + t8364;
  t8372 = var2[1]*t7649*t8371;
  t8374 = -1.*t5858*t7428*t7813;
  t8375 = -1.*t7449*t7813*t7503;
  t8407 = t8374 + t8375;
  t8417 = var2[2]*t7649*t8407;
  t8419 = -1.*t5858*t7428*t7786;
  t8420 = -1.*t7449*t7786*t7503;
  t8421 = t8419 + t8420;
  t8422 = var2[0]*t7649*t8421;
  t8468 = t8372 + t8417 + t8422;
  t7894 = -1.*t7664*t7722;
  t7906 = t7658*t7744;
  t7911 = t7894 + t7906;
  t8315 = t7449*t5858*t7786;
  t8326 = -1.*t7428*t7786*t7503;
  t8345 = t8315 + t8326;
  t7820 = t7449*t5858*t7813;
  t7826 = -1.*t7428*t7813*t7503;
  t7840 = t7820 + t7826;
  t8472 = -1.*t7658*t7664;
  t8488 = -1.*t7722*t7744;
  t8490 = t8472 + t8488;
  t8536 = t7911*t5309;
  t8549 = t7649*t8345;
  t8551 = t8536 + t8549;
  t7433 = -1.*t5858*t7428;
  t7515 = -1.*t7449*t7503;
  t7568 = t7433 + t7515;
  t8563 = t7786*t5309;
  t8565 = t7649*t7840;
  t8569 = t8563 + t8565;
  t8773 = Sin(var1[3]);
  t8622 = Cos(var1[3]);
  t7790 = t7649*t7786;
  t7843 = -1.*t5309*t7840;
  t7882 = t7790 + t7843;
  t8288 = t7649*t7911;
  t8355 = -1.*t5309*t8345;
  t8357 = t8288 + t8355;
  t9470 = t8622*t7568;
  t9475 = t8773*t5309*t8371;
  t9477 = t9470 + t9475;
  t9478 = var2[1]*t9477;
  t9479 = t8773*t5309*t8407;
  t9480 = t8622*t7840;
  t9481 = t9479 + t9480;
  t9484 = var2[2]*t9481;
  t9485 = t8773*t5309*t8421;
  t9486 = t8622*t8345;
  t9492 = t9485 + t9486;
  t9497 = var2[0]*t9492;
  t9498 = t9478 + t9484 + t9497;
  t8501 = t7449*t5858*t7911;
  t8508 = -1.*t7428*t7911*t7503;
  t8510 = t8501 + t8508;
  t9373 = t5858*t7428*t7786;
  t9401 = t7449*t7786*t7503;
  t9416 = t9373 + t9401;
  t9127 = t5858*t7428*t7813;
  t9131 = t7449*t7813*t7503;
  t9248 = t9127 + t9131;
  t8578 = t7449*t5858*t8490;
  t8580 = -1.*t7428*t8490*t7503;
  t8581 = t8578 + t8580;
  t9592 = t8622*t9416;
  t9642 = -1.*t8773*t8357;
  t9646 = t9592 + t9642;
  t8788 = t7449*t5858;
  t8980 = -1.*t7428*t7503;
  t9058 = t8788 + t8980;
  t9661 = t8622*t9248;
  t9662 = -1.*t8773*t7882;
  t9673 = t9661 + t9662;
  t9917 = t8773*t5309*t7568;
  t9918 = t8622*t9058;
  t9919 = t9917 + t9918;
  t9454 = -1.*t7786*t5309;
  t9455 = -1.*t7649*t7840;
  t9456 = t9454 + t9455;
  t9459 = -1.*t7911*t5309;
  t9461 = -1.*t7649*t8345;
  t9463 = t9459 + t9461;
  t9930 = t8773*t7568;
  t9931 = -1.*t8622*t5309*t8371;
  t9932 = t9930 + t9931;
  t9933 = var2[1]*t9932;
  t9934 = -1.*t8622*t5309*t8407;
  t9935 = t8773*t7840;
  t9936 = t9934 + t9935;
  t9937 = var2[2]*t9936;
  t9939 = -1.*t8622*t5309*t8421;
  t10018 = t8773*t8345;
  t10035 = t9939 + t10018;
  t10036 = var2[0]*t10035;
  t10037 = t9933 + t9937 + t10036;
  t9502 = t5858*t7428*t7911;
  t9509 = t7449*t7911*t7503;
  t9510 = t9502 + t9509;
  t9522 = t7649*t8490;
  t9539 = -1.*t5309*t8510;
  t9570 = t9522 + t9539;
  t9678 = t5858*t7428*t8490;
  t9729 = t7449*t8490*t7503;
  t9765 = t9678 + t9729;
  t9883 = t7649*t7813;
  t9885 = -1.*t5309*t8581;
  t9906 = t9883 + t9885;
  t10050 = t8773*t9416;
  t10056 = t8622*t8357;
  t10058 = t10050 + t10056;
  t10069 = t8773*t9248;
  t10098 = t8622*t7882;
  t10101 = t10069 + t10098;
  t10202 = -1.*t7664;
  t10210 = 1. + t10202;
  t10219 = 0.50321*t10210;
  t10222 = 0.19821*t7664;
  t10226 = t10219 + t10222;
  t10245 = -1.*t7449;
  t10246 = 1. + t10245;
  t10250 = -1.*t7658;
  t10251 = 1. + t10250;
  t10253 = 0.28121*t10251;
  t10256 = t7658*t10226;
  t10257 = -0.305*t7722*t7744;
  t10258 = t10253 + t10256 + t10257;
  t10184 = 0.28121*t7722;
  t10231 = -1.*t10226*t7722;
  t10232 = -0.305*t7658*t7744;
  t10238 = t10184 + t10231 + t10232;
  t10247 = 0.15121*t10246;
  t10259 = t7449*t10258;
  t10260 = t10247 + t10259;
  t10264 = t5858*t10260;
  t10265 = -0.15121*t10246;
  t10266 = -0.15121*t7449;
  t10267 = -0.15121*t7428;
  t10268 = t7428*t10258;
  t10273 = t10265 + t10266 + t10267 + t10268;
  t10274 = -1.*t10273*t7503;
  t10275 = t10264 + t10274;
  t10301 = t10238*t5309;
  t10307 = t7649*t10275;
  t10308 = t10301 + t10307;
  t10241 = -1.*t10238*t5309;
  t10288 = -1.*t7649*t10275;
  t10291 = t10241 + t10288;
  t10359 = t7649*t10238;
  t10361 = -1.*t5309*t10275;
  t10365 = t10359 + t10361;
  t10312 = t5858*t10273;
  t10314 = t10260*t7503;
  t10330 = t10312 + t10314;
  t10349 = -1.*t9058*t10330;
  t10350 = -1.*t7649*t7568*t10308;
  t10370 = t5309*t7568*t10365;
  t10377 = t10349 + t10350 + t10370;
  t10677 = -1.*t5858*t10273;
  t10684 = -1.*t10260*t7503;
  t10686 = t10677 + t10684;
  t10470 = t9248*t10330;
  t10472 = t8569*t10308;
  t10473 = t7882*t10365;
  t10474 = t10470 + t10472 + t10473;
  t10494 = t9058*t10330;
  t10496 = t7649*t7568*t10308;
  t10497 = -1.*t5309*t7568*t10365;
  t10498 = t10494 + t10496 + t10497;
  t10675 = Power(t7649,2);
  t10699 = Power(t5309,2);
  t10516 = -1.*t9416*t10330;
  t10518 = -1.*t8551*t10308;
  t10521 = -1.*t8357*t10365;
  t10522 = t10516 + t10518 + t10521;
  t10555 = -1.*t9248*t10330;
  t10580 = -1.*t8569*t10308;
  t10591 = -1.*t7882*t10365;
  t10593 = t10555 + t10580 + t10591;
  t10651 = t9416*t10330;
  t10653 = t8551*t10308;
  t10660 = t8357*t10365;
  t10661 = t10651 + t10653 + t10660;
  t10671 = t7649*t8407*t10377;
  t10708 = -1.*t7568*t10330;
  t10839 = 0.15121*t7428;
  t10840 = -1.*t7428*t10258;
  t10841 = t10839 + t10840;
  t10842 = t5858*t10841;
  t10844 = t10266 + t10259;
  t10851 = -1.*t10844*t7503;
  t10855 = t10842 + t10851;
  t10712 = -1.*t7649*t8371*t10308;
  t10723 = t5309*t8371*t10365;
  t10728 = t7840*t10330;
  t10858 = t5858*t10844;
  t10867 = t10841*t7503;
  t10869 = t10858 + t10867;
  t10732 = t7649*t8407*t10308;
  t10747 = -1.*t5309*t8407*t10365;
  t10756 = t7649*t8371*t10474;
  t10766 = t7649*t8421*t10498;
  t10771 = t7568*t10330;
  t10779 = t7649*t8371*t10308;
  t10780 = -1.*t5309*t8371*t10365;
  t10788 = -1.*t8345*t10330;
  t10793 = -1.*t7649*t8421*t10308;
  t10798 = t5309*t8421*t10365;
  t10802 = t7649*t8371*t10522;
  t10805 = -1.*t7840*t10330;
  t10809 = -1.*t7649*t8407*t10308;
  t10810 = t5309*t8407*t10365;
  t10814 = t8345*t10330;
  t10820 = t7649*t8421*t10308;
  t10821 = -1.*t5309*t8421*t10365;
  t10827 = t7649*t8421*t10593;
  t10830 = t7649*t8407*t10661;
  t11017 = 0.28121*t7658;
  t11019 = -1.*t7658*t10226;
  t11023 = 0.305*t7722*t7744;
  t11024 = t11017 + t11019 + t11023;
  t11033 = t7449*t5858*t10238;
  t11034 = -1.*t7428*t10238*t7503;
  t11035 = t11033 + t11034;
  t8498 = t8490*t5309;
  t8511 = t7649*t8510;
  t8527 = t8498 + t8511;
  t11008 = t5858*t7428*t10238;
  t11012 = t7449*t10238*t7503;
  t11013 = t11008 + t11012;
  t11028 = t11024*t5309;
  t11036 = t7649*t11035;
  t11065 = t11028 + t11036;
  t11075 = t7649*t11024;
  t11078 = -1.*t5309*t11035;
  t11080 = t11075 + t11078;
  t11298 = -0.305*t7664*t7722;
  t11299 = 0.305*t7658*t7744;
  t11300 = t11298 + t11299;
  t11306 = -0.305*t7658*t7664;
  t11331 = t11306 + t10257;
  t11334 = t7449*t5858*t11300;
  t11335 = -1.*t7428*t11300*t7503;
  t11336 = t11334 + t11335;
  t11301 = t5858*t7428*t11300;
  t11302 = t7449*t11300*t7503;
  t11303 = t11301 + t11302;
  t11332 = t11331*t5309;
  t11339 = t7649*t11336;
  t11348 = t11332 + t11339;
  t11350 = t7649*t11331;
  t11389 = -1.*t5309*t11336;
  t11395 = t11350 + t11389;
  t8575 = t7813*t5309;
  t8584 = t7649*t8581;
  t8590 = t8575 + t8584;
  t10709 = -1.*t9058*t10275;
  t10729 = t9248*t10275;
  t10773 = t9058*t10275;
  t10790 = -1.*t9416*t10275;
  t10806 = -1.*t9248*t10275;
  t10815 = t9416*t10275;
  t12661 = -1.*t7568*t10275;
  t12667 = t10349 + t12661;
  t12713 = t7840*t12667;
  t10883 = -1.*t9058*t10869;
  t12736 = -1.*t8371*t10275;
  t10903 = t9248*t10869;
  t12761 = t8407*t10275;
  t12887 = t10238*t7786;
  t12924 = t7840*t10275;
  t12976 = t12887 + t10470 + t12924;
  t12981 = t7568*t12976;
  t13325 = t7568*t10275;
  t13371 = t10494 + t13325;
  t13382 = t8345*t13371;
  t10958 = t9058*t10869;
  t13413 = t8371*t10275;
  t10975 = -1.*t9416*t10869;
  t13698 = -1.*t8421*t10275;
  t13727 = -1.*t10238*t7911;
  t13734 = -1.*t8345*t10275;
  t13744 = t13727 + t10516 + t13734;
  t13749 = t7568*t13744;
  t10983 = -1.*t9248*t10869;
  t14008 = -1.*t8407*t10275;
  t14120 = -1.*t10238*t7786;
  t14132 = -1.*t7840*t10275;
  t14369 = t14120 + t10555 + t14132;
  t14419 = t8345*t14369;
  t10995 = t9416*t10869;
  t14687 = t8421*t10275;
  t15173 = t10238*t7911;
  t15183 = t8345*t10275;
  t15207 = t15173 + t10651 + t15183;
  t15233 = t7840*t15207;
  t11016 = t9058*t11013;
  t11124 = -1.*t11013*t9416;
  t11128 = -1.*t9510*t10330;
  t11202 = t11013*t9416;
  t11209 = t9510*t10330;
  t11256 = -1.*t9248*t11013;
  t11277 = -1.*t9058*t11013;
  t11290 = t9248*t11013;
  t11305 = t9058*t11303;
  t11425 = -1.*t11303*t9416;
  t11530 = -1.*t9058*t11303;
  t11560 = t9248*t11303;
  t11561 = t9765*t10330;
  t11768 = t11303*t9416;
  t12108 = -1.*t9248*t11303;
  t12231 = -1.*t9765*t10330;
  t16739 = t10238*t8490;
  t16770 = t7911*t11024;
  t18424 = Power(t7449,2);
  t18426 = Power(t7428,2);
  t16791 = -1.*t11024*t7786;
  t18386 = t7428*t10260;
  t18389 = -1.*t7449*t10273;
  t18394 = t18386 + t18389;
  t18397 = -1.*t7428*t10260;
  t18409 = t7449*t10273;
  t18410 = t18397 + t18409;
  t18413 = -1.*t7449*t7813*t10260;
  t18414 = -1.*t7428*t7813*t10273;
  t18416 = t14120 + t18413 + t18414;
  t18077 = t7911*t11331;
  t18082 = -1.*t7813*t10238;
  t18083 = -1.*t11331*t7786;
  t18459 = t7449*t7786*t10260;
  t18463 = t7428*t7786*t10273;
  t18466 = t15173 + t18459 + t18463;
  t18836 = -0.15121*t8490;
  t18839 = -0.15121*t7786;
  t18868 = t18836 + t18839;
  t18874 = var2[2]*t18868;
  t18877 = -1.*t7813*t10258;
  t18882 = t18877 + t14120;
  t18889 = t10258*t7786;
  t18904 = t15173 + t18889;
  t22169 = 0.28121*t7664;
  t22170 = -1.*t10226*t7664;
  p_output1[0]=t8357*var2[0] - 1.*t5309*t7568*var2[1] + t7882*var2[2];
  p_output1[1]=t8468;
  p_output1[2]=t8468;
  p_output1[3]=t8527*var2[0] + t8551*var2[2];
  p_output1[4]=t8569*var2[0] + t8590*var2[2];
  p_output1[5]=t8551;
  p_output1[6]=t7568*t7649;
  p_output1[7]=t8569;
  p_output1[8]=(-1.*t8357*t8622 - 1.*t8773*t9416)*var2[0] + (t5309*t7568*t8622 - 1.*t8773*t9058)*var2[1] + (-1.*t7882*t8622 - 1.*t8773*t9248)*var2[2];
  p_output1[9]=-1.*t8773*t9463*var2[0] + t7568*t7649*t8773*var2[1] - 1.*t8773*t9456*var2[2];
  p_output1[10]=t9498;
  p_output1[11]=t9498;
  p_output1[12]=(t8622*t9510 - 1.*t8773*t9570)*var2[0] + t9646*var2[2];
  p_output1[13]=t9673*var2[0] + (t8622*t9765 - 1.*t8773*t9906)*var2[2];
  p_output1[14]=t9646;
  p_output1[15]=t9919;
  p_output1[16]=t9673;
  p_output1[17]=t9646*var2[0] + t9919*var2[1] + t9673*var2[2];
  p_output1[18]=t8622*t9463*var2[0] - 1.*t7568*t7649*t8622*var2[1] + t8622*t9456*var2[2];
  p_output1[19]=t10037;
  p_output1[20]=t10037;
  p_output1[21]=(t8773*t9510 + t8622*t9570)*var2[0] + t10058*var2[2];
  p_output1[22]=t10101*var2[0] + (t8773*t9765 + t8622*t9906)*var2[2];
  p_output1[23]=t10058;
  p_output1[24]=-1.*t5309*t7568*t8622 + t8773*t9058;
  p_output1[25]=t10101;
  p_output1[26]=(-1.*t10474*t5309*t7568 + t10377*t7882 + (t10291*t5309*t7568 + t10308*t5309*t7568)*t8569 + t7568*t7649*(t10291*t7882 + t10308*t7882 + t10365*t8569 + t10365*t9456))*var2[0] + (t10661*t7882 + t10593*t8357 + t8551*(-1.*t10291*t7882 - 1.*t10308*t7882 - 1.*t10365*t8569 - 1.*t10365*t9456) + t8569*(t10291*t8357 + t10308*t8357 + t10365*t8551 + t10365*t9463))*var2[1] + (-1.*t10522*t5309*t7568 + t10498*t8357 + (-1.*t10291*t5309*t7568 - 1.*t10308*t5309*t7568)*t8551 + t7568*t7649*(-1.*t10291*t8357 - 1.*t10308*t8357 - 1.*t10365*t8551 - 1.*t10365*t9463))*var2[2];
  p_output1[27]=(t10671 + t10756 + (t10708 + t10709 + t10712 + t10723 - 1.*t10675*t10686*t7568 - 1.*t10686*t10699*t7568)*t8569 + t7568*t7649*(t10728 + t10729 + t10732 + t10747 - 1.*t10686*t5309*t7882 + t10686*t7649*t8569))*var2[0] + (t10827 + t10830 + (t10814 + t10815 + t10820 + t10821 - 1.*t10686*t5309*t8357 + t10686*t7649*t8551)*t8569 + t8551*(t10805 + t10806 + t10809 + t10810 + t10686*t5309*t7882 - 1.*t10686*t7649*t8569))*var2[1] + (t10766 + t10802 + (t10771 + t10773 + t10779 + t10780 + t10675*t10686*t7568 + t10686*t10699*t7568)*t8551 + t7568*t7649*(t10788 + t10790 + t10793 + t10798 + t10686*t5309*t8357 - 1.*t10686*t7649*t8551))*var2[2];
  p_output1[28]=(t10671 + t10756 + (t10708 + t10712 + t10723 + t10883 - 1.*t10675*t10855*t7568 - 1.*t10699*t10855*t7568)*t8569 + t7568*t7649*(t10728 + t10732 + t10747 + t10903 - 1.*t10855*t5309*t7882 + t10855*t7649*t8569))*var2[0] + (t10827 + t10830 + (t10814 + t10820 + t10821 + t10995 - 1.*t10855*t5309*t8357 + t10855*t7649*t8551)*t8569 + t8551*(t10805 + t10809 + t10810 + t10983 + t10855*t5309*t7882 - 1.*t10855*t7649*t8569))*var2[1] + (t10766 + t10802 + (t10771 + t10779 + t10780 + t10958 + t10675*t10855*t7568 + t10699*t10855*t7568)*t8551 + t7568*t7649*(t10788 + t10793 + t10798 + t10975 + t10855*t5309*t8357 - 1.*t10855*t7649*t8551))*var2[2];
  p_output1[29]=(t10377*t8551 + (t11277 + t11080*t5309*t7568 - 1.*t11065*t7568*t7649)*t8569 + t7568*t7649*(t10651 + t10653 + t10660 + t11290 + t11080*t7882 + t11065*t8569))*var2[0] + (t10593*t8527 + t10661*t8551 + t8551*(t10516 + t10518 + t10521 + t11256 - 1.*t11080*t7882 - 1.*t11065*t8569) + t8569*(t11202 + t11209 + t11080*t8357 + t10308*t8527 + t11065*t8551 + t10365*t9570))*var2[1] + (t10498*t8527 + (t11016 - 1.*t11080*t5309*t7568 + t11065*t7568*t7649)*t8551 + t7568*t7649*(t11124 + t11128 - 1.*t11080*t8357 - 1.*t10308*t8527 - 1.*t11065*t8551 - 1.*t10365*t9570))*var2[2];
  p_output1[30]=((t11530 + t11395*t5309*t7568 - 1.*t11348*t7568*t7649)*t8569 + t10377*t8590 + t7568*t7649*(t11560 + t11561 + t11395*t7882 + t11348*t8569 + t10308*t8590 + t10365*t9906))*var2[0] + (t10593*t8569 + (t10470 + t10472 + t10473 + t11768 + t11395*t8357 + t11348*t8551)*t8569 + t10661*t8590 + t8551*(t12108 + t12231 - 1.*t11395*t7882 - 1.*t11348*t8569 - 1.*t10308*t8590 - 1.*t10365*t9906))*var2[1] + ((t11305 - 1.*t11395*t5309*t7568 + t11348*t7568*t7649)*t8551 + t7568*t7649*(t10555 + t10580 + t10591 + t11425 - 1.*t11395*t8357 - 1.*t11348*t8551) + t10498*t8569)*var2[2];
  p_output1[31]=t10474*t7568*t7649 + t10377*t8569;
  p_output1[32]=t10593*t8551 + t10661*t8569;
  p_output1[33]=t10522*t7568*t7649 + t10498*t8551;
  p_output1[34]=(t12713 + t12981 + (t10728 + t10729 + t12761 + t10686*t7840)*t9058 + (t10708 + t10709 + t12736 - 1.*t10686*t7568)*t9248)*var2[0] + (t14419 + t15233 + (t10814 + t10815 + t14687 + t10686*t8345)*t9248 + (t10805 + t10806 + t14008 - 1.*t10686*t7840)*t9416)*var2[1] + (t13382 + t13749 + (t10788 + t10790 + t13698 - 1.*t10686*t8345)*t9058 + (t10771 + t10773 + t13413 + t10686*t7568)*t9416)*var2[2];
  p_output1[35]=(t12713 + t12981 + (t10728 + t10903 + t12761 + t10855*t7840)*t9058 + (t10708 + t10883 + t12736 - 1.*t10855*t7568)*t9248)*var2[0] + (t14419 + t15233 + (t10814 + t10995 + t14687 + t10855*t8345)*t9248 + (t10805 + t10983 + t14008 - 1.*t10855*t7840)*t9416)*var2[1] + (t13382 + t13749 + (t10788 + t10975 + t13698 - 1.*t10855*t8345)*t9058 + (t10771 + t10958 + t13413 + t10855*t7568)*t9416)*var2[2];
  p_output1[36]=((t10651 + t11290 + t15173 + t15183 + t11024*t7786 + t11035*t7840)*t9058 + (t11277 - 1.*t11035*t7568)*t9248 + t12667*t9416)*var2[0] + ((t11202 + t11209 + t16739 + t16770 + t11035*t8345 + t10275*t8510)*t9248 + t15207*t9416 + (t10516 + t11256 + t13727 + t13734 + t16791 - 1.*t11035*t7840)*t9416 + t14369*t9510)*var2[1] + ((t11124 + t11128 - 1.*t11024*t7911 - 1.*t11035*t8345 - 1.*t10238*t8490 - 1.*t10275*t8510)*t9058 + (t11016 + t11035*t7568)*t9416 + t13371*t9510)*var2[2];
  p_output1[37]=((t11560 + t11561 + t11331*t7786 + t10238*t7813 + t11336*t7840 + t10275*t8581)*t9058 + (t11530 - 1.*t11336*t7568)*t9248 + t12667*t9765)*var2[0] + (t14369*t9248 + (t10470 + t11768 + t12887 + t12924 + t18077 + t11336*t8345)*t9248 + (t12108 + t12231 + t18082 + t18083 - 1.*t11336*t7840 - 1.*t10275*t8581)*t9416 + t15207*t9765)*var2[1] + ((t10555 + t11425 + t14120 + t14132 - 1.*t11331*t7911 - 1.*t11336*t8345)*t9058 + t13371*t9248 + (t11305 + t11336*t7568)*t9416)*var2[2];
  p_output1[38]=t12976*t9058 + t12667*t9248;
  p_output1[39]=t15207*t9248 + t14369*t9416;
  p_output1[40]=t13744*t9058 + t13371*t9416;
  p_output1[41]=(t10273*t7428 + t10841*t7428 + t10260*t7449 - 1.*t10844*t7449)*t7786*var2[0] + (t7786*(-1.*t10260*t7428*t7786 + t10844*t7428*t7786 + t10273*t7449*t7786 + t10841*t7449*t7786) + (t10260*t7428*t7813 - 1.*t10844*t7428*t7813 - 1.*t10273*t7449*t7813 - 1.*t10841*t7449*t7813)*t7911)*var2[1] + (-1.*t10273*t7428 - 1.*t10841*t7428 - 1.*t10260*t7449 + t10844*t7449)*t7911*var2[2];
  p_output1[42]=t18394*t7911*var2[0] + (t18466*t7911 + (t13727 + t16791 - 1.*t10273*t7428*t7786 - 1.*t10260*t7449*t7786 - 1.*t10238*t18424*t7813 - 1.*t10238*t18426*t7813)*t7911 + t7786*(t16739 + t16770 + t10238*t18424*t7786 + t10238*t18426*t7786 + t10273*t7428*t7911 + t10260*t7449*t7911) + t18416*t8490)*var2[1] + t18410*t8490*var2[2];
  p_output1[43]=t18394*t7813*var2[0] + (t18416*t7786 + t18466*t7813 + t7786*(t12887 + t18077 + t11300*t18424*t7786 + t11300*t18426*t7786 + t10273*t7428*t7813 + t10260*t7449*t7813) + t7911*(t18082 + t18083 - 1.*t11300*t18424*t7813 - 1.*t11300*t18426*t7813 - 1.*t10273*t7428*t8490 - 1.*t10260*t7449*t8490))*var2[1] + t18410*t7786*var2[2];
  p_output1[44]=t18394*t7786;
  p_output1[45]=t18466*t7786 + t18416*t7911;
  p_output1[46]=t18410*t7911;
  p_output1[47]=t18874 + (t18904*t7911 + (t13727 + t16791 + t18082 - 1.*t10258*t7786)*t7911 + t7786*(t12887 + t16739 + t16770 + t10258*t7911) + t18882*t8490)*var2[1];
  p_output1[48]=t18874 + (t18882*t7786 + t18904*t7813 + t7786*(t12887 + t18077 + t11300*t7786 + t10258*t7813) + t7911*(t18082 + t18083 - 1.*t11300*t7813 - 1.*t10258*t8490))*var2[1];
  p_output1[49]=-0.15121 + t18904*t7786 + t18882*t7911;
  p_output1[50]=-0.15121*t7813 - 0.15121*t7911;
  p_output1[51]=(t22169 + t22170 - 0.305*Power(t7664,2))*var2[0] + (-0.28121*t7744 + t10226*t7744 + 0.305*t7664*t7744)*var2[2];
  p_output1[52]=0.28121*t7744 - 1.*t10226*t7744 - 0.305*t7664*t7744;
  p_output1[53]=t22169 + t22170 + 0.305*Power(t7744,2);
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

#include "J_fFrFoot_vec_ParallelStance.hh"

namespace ParallelStance
{

void J_fFrFoot_vec_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
