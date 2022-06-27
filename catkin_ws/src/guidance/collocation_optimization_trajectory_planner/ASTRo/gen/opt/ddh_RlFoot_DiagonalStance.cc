/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 14:35:41 GMT+02:00
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
  double t1937;
  double t1933;
  double t1935;
  double t1945;
  double t1947;
  double t1948;
  double t1965;
  double t1976;
  double t1977;
  double t1979;
  double t1981;
  double t2170;
  double t2175;
  double t2172;
  double t2177;
  double t2181;
  double t2182;
  double t2183;
  double t2201;
  double t2205;
  double t2207;
  double t2211;
  double t1209;
  double t196;
  double t206;
  double t1200;
  double t1201;
  double t1218;
  double t2362;
  double t2363;
  double t2387;
  double t2388;
  double t2390;
  double t2392;
  double t2396;
  double t2397;
  double t2402;
  double t2403;
  double t2404;
  double t2430;
  double t2432;
  double t2433;
  double t2442;
  double t128;
  double t184;
  double t2656;
  double t2651;
  double t2783;
  double t2870;
  double t2944;
  double t9720;
  double t9728;
  double t10542;
  double t10872;
  double t12800;
  double t12835;
  double t13073;
  double t13136;
  double t14556;
  double t3370;
  double t6066;
  double t7764;
  double t8469;
  double t9153;
  double t9429;
  double t15944;
  double t16060;
  double t16067;
  double t16070;
  double t16075;
  double t16086;
  double t16087;
  double t16088;
  double t16089;
  double t16270;
  double t16279;
  double t16288;
  double t16289;
  double t16294;
  double t16344;
  double t16348;
  double t16358;
  double t16316;
  double t16338;
  double t16340;
  double t16359;
  double t16361;
  double t16365;
  double t16463;
  double t16466;
  double t16470;
  double t16367;
  double t16373;
  double t16380;
  double t16462;
  double t16478;
  double t16489;
  double t16490;
  double t16491;
  double t16494;
  double t16495;
  double t16496;
  double t16499;
  double t16500;
  double t16501;
  double t16502;
  double t16503;
  double t16504;
  double t16505;
  double t16506;
  double t16507;
  double t16589;
  double t16590;
  double t16591;
  double t16592;
  double t16604;
  double t16605;
  double t16607;
  double t16611;
  double t16613;
  double t16606;
  double t16616;
  double t16617;
  double t16618;
  double t16619;
  double t16623;
  double t16628;
  double t16629;
  double t16630;
  double t16635;
  double t16636;
  double t16637;
  double t16643;
  double t16647;
  double t16648;
  double t16660;
  double t16664;
  double t16668;
  double t16896;
  double t16897;
  double t16898;
  double t16918;
  double t16924;
  double t16935;
  double t17009;
  double t17010;
  double t17080;
  double t16937;
  double t16958;
  double t16938;
  double t16940;
  double t16941;
  double t17005;
  double t17082;
  double t16902;
  double t16903;
  double t16904;
  double t16905;
  double t16906;
  double t16907;
  double t16911;
  double t16912;
  double t16913;
  double t16914;
  double t17322;
  double t17324;
  double t17325;
  double t17315;
  double t16956;
  double t17340;
  double t17341;
  double t17343;
  double t17346;
  double t17347;
  double t17348;
  double t17081;
  double t17087;
  double t17092;
  double t17097;
  double t17099;
  double t17349;
  double t17101;
  double t17102;
  double t17355;
  double t17108;
  double t17206;
  double t17236;
  double t17376;
  double t17377;
  double t17378;
  double t17412;
  double t17413;
  double t17417;
  double t17432;
  double t17433;
  double t17434;
  double t17439;
  double t17445;
  double t17446;
  double t17462;
  double t17463;
  double t17474;
  double t17475;
  double t17480;
  double t17482;
  double t17485;
  double t17487;
  double t17488;
  double t17492;
  double t17486;
  double t17602;
  double t17604;
  double t17614;
  double t17623;
  double t17638;
  double t17640;
  double t17645;
  double t17648;
  double t17650;
  double t17651;
  double t17379;
  double t17380;
  double t17381;
  double t17384;
  double t17721;
  double t17730;
  double t17731;
  double t17738;
  double t17739;
  double t17743;
  double t17746;
  double t17757;
  double t17767;
  double t17773;
  double t17777;
  double t17740;
  double t17782;
  double t17783;
  double t17784;
  double t17794;
  double t17795;
  double t17798;
  double t17790;
  double t17793;
  double t17811;
  double t17812;
  double t17814;
  double t17816;
  double t17817;
  double t17820;
  double t17824;
  double t17825;
  double t17826;
  double t17579;
  double t17976;
  double t17992;
  double t17997;
  double t17998;
  double t18016;
  double t18022;
  double t18036;
  double t18043;
  double t18059;
  double t18060;
  double t18061;
  double t18062;
  double t18066;
  double t18067;
  double t18069;
  double t18070;
  double t18071;
  double t1318;
  double t2654;
  double t18105;
  double t18118;
  double t18121;
  double t18125;
  double t18126;
  double t18127;
  double t18079;
  double t18080;
  double t18084;
  double t18086;
  double t18089;
  double t18103;
  double t17629;
  double t18171;
  double t18172;
  double t18174;
  double t18176;
  double t18177;
  double t18178;
  double t18181;
  double t18144;
  double t18145;
  double t18149;
  double t17667;
  double t17668;
  double t18194;
  double t18195;
  double t18196;
  double t18199;
  double t18200;
  double t18201;
  double t18203;
  double t18184;
  double t18185;
  double t18186;
  double t18190;
  double t18191;
  double t18192;
  double t18229;
  double t18232;
  double t18238;
  double t18240;
  double t18212;
  double t18215;
  double t18217;
  double t18218;
  double t18219;
  double t18220;
  double t18221;
  double t18223;
  double t18227;
  double t18231;
  double t18236;
  double t18239;
  double t18243;
  double t18292;
  double t18248;
  double t18249;
  double t18296;
  double t18254;
  double t18255;
  double t18259;
  double t18263;
  double t16723;
  double t16725;
  double t16739;
  double t18353;
  double t18356;
  double t18361;
  double t18370;
  double t18374;
  double t18364;
  double t18400;
  double t18402;
  double t17403;
  double t17425;
  double t17426;
  double t18407;
  double t18409;
  double t18439;
  double t18443;
  double t18445;
  double t18479;
  double t18484;
  double t18486;
  double t17832;
  double t17932;
  double t17933;
  double t17677;
  double t17679;
  double t18522;
  double t18523;
  double t18524;
  double t18529;
  double t18532;
  double t18533;
  double t17692;
  double t18538;
  double t18540;
  double t18541;
  double t18546;
  double t18547;
  double t18548;
  double t17693;
  double t17695;
  double t17696;
  double t17701;
  double t17703;
  double t17713;
  double t17715;
  double t17716;
  double t18410;
  double t18567;
  double t18568;
  double t18569;
  double t18570;
  double t18571;
  double t18575;
  double t18579;
  double t18558;
  double t18560;
  double t18561;
  double t18425;
  double t18426;
  double t18606;
  double t18607;
  double t18608;
  double t18609;
  double t18610;
  double t18611;
  double t18612;
  double t18582;
  double t18586;
  double t18590;
  double t18592;
  double t18594;
  double t18595;
  double t15296;
  double t16281;
  double t16298;
  double t18623;
  double t18630;
  double t18632;
  double t18678;
  double t18686;
  double t18745;
  double t18747;
  double t18752;
  double t18755;
  double t18734;
  double t18735;
  double t18736;
  double t18737;
  double t18738;
  double t18739;
  double t18740;
  double t18741;
  double t18742;
  double t18743;
  double t18746;
  double t18753;
  double t18759;
  double t18763;
  double t18792;
  double t18766;
  double t18767;
  double t18805;
  double t18772;
  double t18773;
  double t18776;
  t1937 = Cos(var1[11]);
  t1933 = Sin(var1[11]);
  t1935 = 0.28121*t1933;
  t1945 = -1.*t1937;
  t1947 = 1. + t1945;
  t1948 = -0.50321*t1947;
  t1965 = -0.19821*t1937;
  t1976 = t1948 + t1965;
  t1977 = t1976*t1933;
  t1979 = -0.305*t1937*t1933;
  t1981 = t1935 + t1977 + t1979;
  t2170 = Cos(var1[10]);
  t2175 = Sin(var1[10]);
  t2172 = -1.*t2170*t1937;
  t2177 = -1.*t2175*t1933;
  t2181 = t2172 + t2177;
  t2182 = 0.15121*t2181;
  t2183 = t2170*t1937;
  t2201 = t2175*t1933;
  t2205 = t2183 + t2201;
  t2207 = 0.15121*t2205;
  t2211 = t2182 + t2207;
  t1209 = Sin(var1[9]);
  t196 = Cos(var1[9]);
  t206 = -1.*t196;
  t1200 = 1. + t206;
  t1201 = -0.15121*t1200;
  t1218 = 0.15121*t1209;
  t2362 = -1.*t2170;
  t2363 = 1. + t2362;
  t2387 = -0.28121*t2363;
  t2388 = t2170*t1976;
  t2390 = 0.305*t2175*t1933;
  t2392 = t2387 + t2388 + t2390;
  t2396 = t196*t2392;
  t2397 = t1201 + t2396;
  t2402 = -1.*t1209*t2397;
  t2403 = 0.15121*t1200;
  t2404 = 0.15121*t196;
  t2430 = t1209*t2392;
  t2432 = t2403 + t2404 + t1218 + t2430;
  t2433 = t196*t2432;
  t2442 = t2402 + t2433;
  t128 = Cos(var1[4]);
  t184 = Cos(var1[5]);
  t2656 = Sin(var1[5]);
  t2651 = Sin(var1[4]);
  t2783 = t196*t128*t184;
  t2870 = -1.*t128*t1209*t2656;
  t2944 = t2783 + t2870;
  t9720 = -1.*t1937*t2175;
  t9728 = t2170*t1933;
  t10542 = t9720 + t9728;
  t10872 = t10542*t2651;
  t12800 = t196*t184*t2181;
  t12835 = -1.*t1209*t2181*t2656;
  t13073 = t12800 + t12835;
  t13136 = t128*t13073;
  t14556 = t10872 + t13136;
  t3370 = t2175*t2651;
  t6066 = t2170*t2944;
  t7764 = t3370 + t6066;
  t8469 = t2170*t2651;
  t9153 = -1.*t2175*t2944;
  t9429 = t8469 + t9153;
  t15944 = Sin(var1[3]);
  t16060 = t184*t1209*t2181;
  t16067 = t196*t2181*t2656;
  t16070 = t16060 + t16067;
  t16075 = t15944*t16070;
  t16086 = Cos(var1[3]);
  t16087 = t128*t10542;
  t16088 = -1.*t2651*t13073;
  t16089 = t16087 + t16088;
  t16270 = t16086*t16089;
  t16279 = t16075 + t16270;
  t16288 = t16086*t16070;
  t16289 = -1.*t15944*t16089;
  t16294 = t16288 + t16289;
  t16344 = -1.*t196*t184;
  t16348 = t1209*t2656;
  t16358 = t16344 + t16348;
  t16316 = t184*t1209*t10542;
  t16338 = t196*t10542*t2656;
  t16340 = t16316 + t16338;
  t16359 = t184*t2432;
  t16361 = t2397*t2656;
  t16365 = t16359 + t16361;
  t16463 = t184*t2397;
  t16466 = -1.*t2432*t2656;
  t16470 = t16463 + t16466;
  t16367 = -1.*t16358*t16365;
  t16373 = t184*t1209;
  t16380 = t196*t2656;
  t16462 = t16373 + t16380;
  t16478 = -1.*t16462*t16470;
  t16489 = t16367 + t16478;
  t16490 = t16340*t16489;
  t16491 = 0.28121*t2175;
  t16494 = t1976*t2175;
  t16495 = -0.305*t2170*t1933;
  t16496 = t16491 + t16494 + t16495;
  t16499 = t16496*t2205;
  t16500 = t16340*t16365;
  t16501 = t196*t184*t10542;
  t16502 = -1.*t1209*t10542*t2656;
  t16503 = t16501 + t16502;
  t16504 = t16503*t16470;
  t16505 = t16499 + t16500 + t16504;
  t16506 = t16358*t16505;
  t16507 = t16490 + t16506;
  t16589 = t2205*t2651;
  t16590 = t128*t16503;
  t16591 = t16589 + t16590;
  t16592 = t16496*t2651;
  t16604 = t128*t16470;
  t16605 = t16592 + t16604;
  t16607 = t128*t16496;
  t16611 = -1.*t2651*t16470;
  t16613 = t16607 + t16611;
  t16606 = -1.*t128*t16462*t16605;
  t16616 = t2651*t16462*t16613;
  t16617 = t16367 + t16606 + t16616;
  t16618 = t16591*t16617;
  t16619 = t16591*t16605;
  t16623 = t128*t2205;
  t16628 = -1.*t2651*t16503;
  t16629 = t16623 + t16628;
  t16630 = t16629*t16613;
  t16635 = t16500 + t16619 + t16630;
  t16636 = t128*t16462*t16635;
  t16637 = t16618 + t16636;
  t16643 = -1.*t10542*t2651;
  t16647 = -1.*t128*t13073;
  t16648 = t16643 + t16647;
  t16660 = -1.*t16496*t2651;
  t16664 = -1.*t128*t16470;
  t16668 = t16660 + t16664;
  t16896 = -1.*t184*t1209*t2181;
  t16897 = -1.*t196*t2181*t2656;
  t16898 = t16896 + t16897;
  t16918 = -1.*t184*t2432;
  t16924 = -1.*t2397*t2656;
  t16935 = t16918 + t16924;
  t17009 = -1.*t184*t1209*t10542;
  t17010 = -1.*t196*t10542*t2656;
  t17080 = t17009 + t17010;
  t16937 = -1.*t16462*t16365;
  t16958 = -1.*t16358*t16470;
  t16938 = t196*t184;
  t16940 = -1.*t1209*t2656;
  t16941 = t16938 + t16940;
  t17005 = t16503*t16365;
  t17082 = t16340*t16470;
  t16902 = var2[0]*t128*t16898;
  t16903 = t15944*t2651*t16898;
  t16904 = t16086*t13073;
  t16905 = t16903 + t16904;
  t16906 = var2[1]*t16905;
  t16907 = -1.*t16086*t2651*t16898;
  t16911 = t15944*t13073;
  t16912 = t16907 + t16911;
  t16913 = var2[2]*t16912;
  t16914 = t16503*t16489;
  t17322 = -0.15121*t1209;
  t17324 = -1.*t1209*t2392;
  t17325 = t17322 + t17324;
  t17315 = t2404 + t2396;
  t16956 = -1.*t16941*t16470;
  t17340 = t184*t17325;
  t17341 = -1.*t17315*t2656;
  t17343 = t17340 + t17341;
  t17346 = t184*t17315;
  t17347 = t17325*t2656;
  t17348 = t17346 + t17347;
  t17081 = t17080*t16470;
  t17087 = t16462*t16505;
  t17092 = t128*t17080*t16617;
  t17097 = Power(t128,2);
  t17099 = Power(t2651,2);
  t17349 = -1.*t16358*t17348;
  t17101 = -1.*t128*t16941*t16605;
  t17102 = t2651*t16941*t16613;
  t17355 = t16340*t17348;
  t17108 = t128*t17080*t16605;
  t17206 = -1.*t2651*t17080*t16613;
  t17236 = t128*t16941*t16635;
  t17376 = t1937*t2175;
  t17377 = -1.*t2170*t1933;
  t17378 = t17376 + t17377;
  t17412 = t196*t184*t17378;
  t17413 = -1.*t1209*t17378*t2656;
  t17417 = t17412 + t17413;
  t17432 = t184*t1209*t17378;
  t17433 = t196*t17378*t2656;
  t17434 = t17432 + t17433;
  t17439 = t128*t2181;
  t17445 = -1.*t2651*t17417;
  t17446 = t17439 + t17445;
  t17462 = -0.28121*t2175;
  t17463 = -1.*t1976*t2175;
  t17474 = 0.305*t2170*t1933;
  t17475 = t17462 + t17463 + t17474;
  t17480 = t184*t1209*t17475;
  t17482 = t196*t17475*t2656;
  t17485 = t17480 + t17482;
  t17487 = t196*t184*t17475;
  t17488 = -1.*t1209*t17475*t2656;
  t17492 = t17487 + t17488;
  t17486 = -1.*t16358*t17485;
  t17602 = 0.28121*t2170;
  t17604 = t17602 + t2388 + t2390;
  t17614 = t17485*t16340;
  t17623 = t16070*t16365;
  t17638 = t17604*t2651;
  t17640 = t128*t17492;
  t17645 = t17638 + t17640;
  t17648 = t128*t17604;
  t17650 = -1.*t2651*t17492;
  t17651 = t17648 + t17650;
  t17379 = 0.15121*t17378;
  t17380 = 0.15121*t10542;
  t17381 = t17379 + t17380;
  t17384 = var2[9]*t17381;
  t17721 = 0.305*t1937*t2175;
  t17730 = t17721 + t16495;
  t17731 = t184*t1209*t17730;
  t17738 = t196*t17730*t2656;
  t17739 = t17731 + t17738;
  t17743 = t196*t184*t17730;
  t17746 = -1.*t1209*t17730*t2656;
  t17757 = t17743 + t17746;
  t17767 = t184*t1209*t2205;
  t17773 = t196*t2205*t2656;
  t17777 = t17767 + t17773;
  t17740 = -1.*t16358*t17739;
  t17782 = -0.305*t2170*t1937;
  t17783 = -0.305*t2175*t1933;
  t17784 = t17782 + t17783;
  t17794 = t196*t184*t2205;
  t17795 = -1.*t1209*t2205*t2656;
  t17798 = t17794 + t17795;
  t17790 = t17739*t16340;
  t17793 = t17777*t16365;
  t17811 = t17784*t2651;
  t17812 = t128*t17757;
  t17814 = t17811 + t17812;
  t17816 = t128*t17784;
  t17817 = -1.*t2651*t17757;
  t17820 = t17816 + t17817;
  t17824 = t17378*t2651;
  t17825 = t128*t17798;
  t17826 = t17824 + t17825;
  t17579 = t16496*t10542;
  t17976 = t2181*t2392;
  t17992 = t17579 + t17976;
  t17997 = t2205*t17992;
  t17998 = -1.*t10542*t2392;
  t18016 = -1.*t16496*t2205;
  t18022 = t17998 + t18016;
  t18036 = t10542*t18022;
  t18043 = -0.15121 + t17997 + t18036;
  t18059 = -1.*t196*t10542*t2397;
  t18060 = -1.*t1209*t10542*t2432;
  t18061 = t18016 + t18059 + t18060;
  t18062 = t10542*t18061;
  t18066 = t196*t2181*t2397;
  t18067 = t1209*t2181*t2432;
  t18069 = t17579 + t18066 + t18067;
  t18070 = t2205*t18069;
  t18071 = t18062 + t18070;
  t1318 = t1201 + t1218;
  t2654 = t2403 + t1218;
  t18105 = t15944*t2651*t16462;
  t18118 = t16086*t16358;
  t18121 = t18105 + t18118;
  t18125 = -1.*t16086*t2651*t16462;
  t18126 = t15944*t16358;
  t18127 = t18125 + t18126;
  t18079 = t184*t15944*t2651;
  t18080 = t16086*t2656;
  t18084 = t18079 + t18080;
  t18086 = t16086*t184;
  t18089 = -1.*t15944*t2651*t2656;
  t18103 = t18086 + t18089;
  t17629 = t13073*t16470;
  t18171 = -1.*t16340*t16365;
  t18172 = -1.*t16503*t16470;
  t18174 = t18016 + t18171 + t18172;
  t18176 = t16070*t18174;
  t18177 = t17579 + t17623 + t17629;
  t18178 = t16340*t18177;
  t18181 = t18176 + t18178;
  t18144 = t196*t18084;
  t18145 = t1209*t18103;
  t18149 = t18144 + t18145;
  t17667 = t14556*t16605;
  t17668 = t16089*t16613;
  t18194 = -1.*t16591*t16605;
  t18195 = -1.*t16629*t16613;
  t18196 = t18171 + t18194 + t18195;
  t18199 = t14556*t18196;
  t18200 = t17623 + t17667 + t17668;
  t18201 = t16591*t18200;
  t18203 = t18199 + t18201;
  t18184 = -1.*t128*t2175*t15944;
  t18185 = t2170*t18149;
  t18186 = t18184 + t18185;
  t18190 = -1.*t2170*t128*t15944;
  t18191 = -1.*t2175*t18149;
  t18192 = t18190 + t18191;
  t18229 = -1.*t16503*t16365;
  t18232 = -1.*t16340*t16470;
  t18238 = t13073*t16365;
  t18240 = t16070*t16470;
  t18212 = var2[0]*t128*t16941;
  t18215 = t15944*t16462;
  t18217 = -1.*t16086*t2651*t16941;
  t18218 = t18215 + t18217;
  t18219 = var2[2]*t18218;
  t18220 = t16086*t16462;
  t18221 = t15944*t2651*t16941;
  t18223 = t18220 + t18221;
  t18227 = var2[1]*t18223;
  t18231 = -1.*t17080*t16470;
  t18236 = t13073*t18174;
  t18239 = t16898*t16470;
  t18243 = t16503*t18177;
  t18292 = -1.*t16340*t17348;
  t18248 = -1.*t128*t17080*t16605;
  t18249 = t2651*t17080*t16613;
  t18296 = t16070*t17348;
  t18254 = t128*t16898*t16605;
  t18255 = -1.*t2651*t16898*t16613;
  t18259 = t128*t16898*t18196;
  t18263 = t128*t17080*t18200;
  t16723 = -1.*t2205*t2651;
  t16725 = -1.*t128*t16503;
  t16739 = t16723 + t16725;
  t18353 = t16496*t2181;
  t18356 = t10542*t17604;
  t18361 = -1.*t16496*t10542;
  t18370 = Power(t196,2);
  t18374 = Power(t1209,2);
  t18364 = -1.*t17604*t2205;
  t18400 = t17485*t16070;
  t18402 = t17434*t16365;
  t17403 = t2181*t2651;
  t17425 = t128*t17417;
  t17426 = t17403 + t17425;
  t18407 = -1.*t17485*t16340;
  t18409 = -1.*t16070*t16365;
  t18439 = t10542*t17784;
  t18443 = -1.*t17378*t16496;
  t18445 = -1.*t17784*t2205;
  t18479 = t17739*t16070;
  t18484 = -1.*t17739*t16340;
  t18486 = -1.*t17777*t16365;
  t17832 = t128*t17378;
  t17932 = -1.*t2651*t17798;
  t17933 = t17832 + t17932;
  t17677 = 0.28121*t1937;
  t17679 = t1976*t1937;
  t18522 = Power(t1933,2);
  t18523 = 0.305*t18522;
  t18524 = t17677 + t17679 + t18523;
  t18529 = t1209*t2397;
  t18532 = -1.*t196*t2432;
  t18533 = t18529 + t18532;
  t17692 = var2[0]*t16591;
  t18538 = -1.*t16086*t184*t2651;
  t18540 = t15944*t2656;
  t18541 = t18538 + t18540;
  t18546 = t184*t15944;
  t18547 = t16086*t2651*t2656;
  t18548 = t18546 + t18547;
  t17693 = t15944*t16340;
  t17695 = t16086*t16629;
  t17696 = t17693 + t17695;
  t17701 = var2[2]*t17696;
  t17703 = t16086*t16340;
  t17713 = -1.*t15944*t16629;
  t17715 = t17703 + t17713;
  t17716 = var2[1]*t17715;
  t18410 = -1.*t13073*t16470;
  t18567 = t16358*t16365;
  t18568 = t16462*t16470;
  t18569 = t18567 + t18568;
  t18570 = t16070*t18569;
  t18571 = t18361 + t18409 + t18410;
  t18575 = t16358*t18571;
  t18579 = t18570 + t18575;
  t18558 = t196*t18541;
  t18560 = t1209*t18548;
  t18561 = t18558 + t18560;
  t18425 = -1.*t14556*t16605;
  t18426 = -1.*t16089*t16613;
  t18606 = t128*t16462*t16605;
  t18607 = -1.*t2651*t16462*t16613;
  t18608 = t18567 + t18606 + t18607;
  t18609 = t14556*t18608;
  t18610 = t18409 + t18425 + t18426;
  t18611 = t128*t16462*t18610;
  t18612 = t18609 + t18611;
  t18582 = t16086*t128*t2175;
  t18586 = t2170*t18561;
  t18590 = t18582 + t18586;
  t18592 = t2170*t16086*t128;
  t18594 = -1.*t2175*t18561;
  t18595 = t18592 + t18594;
  t15296 = var2[0]*t14556;
  t16281 = var2[2]*t16279;
  t16298 = var2[1]*t16294;
  t18623 = t16358*t17485;
  t18630 = -1.*t17485*t16070;
  t18632 = -1.*t17434*t16365;
  t18678 = t16358*t17739;
  t18686 = -1.*t17739*t16070;
  t18745 = t16462*t16365;
  t18747 = t16358*t16470;
  t18752 = -1.*t13073*t16365;
  t18755 = -1.*t16070*t16470;
  t18734 = var2[0]*t128*t17080;
  t18735 = t15944*t2651*t17080;
  t18736 = t16086*t16503;
  t18737 = t18735 + t18736;
  t18738 = var2[1]*t18737;
  t18739 = -1.*t16086*t2651*t17080;
  t18740 = t15944*t16503;
  t18741 = t18739 + t18740;
  t18742 = var2[2]*t18741;
  t18743 = t13073*t18569;
  t18746 = t16941*t16470;
  t18753 = -1.*t16898*t16470;
  t18759 = t16462*t18571;
  t18763 = t128*t16898*t18608;
  t18792 = t16358*t17348;
  t18766 = t128*t16941*t16605;
  t18767 = -1.*t2651*t16941*t16613;
  t18805 = -1.*t16070*t17348;
  t18772 = -1.*t128*t16898*t16605;
  t18773 = t2651*t16898*t16613;
  t18776 = t128*t16941*t18610;
  p_output1[0]=t15296 + t16281 + t16298 + t128*t1318*t184 + 0.28121*t2175*t2651 - 1.*t128*t2654*t2656 + 0.15121*(-1.*t1209*t128*t184 - 1.*t128*t196*t2656) - 0.28121*t2363*t2944 - 0.50321*t1947*t7764 - 0.50321*t1933*t9429 - 0.19821*(t1937*t7764 - 1.*t1933*t9429) + var1[0] + t16637*var2[3] + ((-1.*t15944*t16070 - 1.*t16086*t16089)*var2[1] + t16294*var2[2])*var2[3] + t16507*var2[4] + (t16089*var2[0] - 1.*t15944*t16648*var2[1] + t16086*t16648*var2[2] + (t16617*t16629 + t128*t16462*(t16591*t16613 + t16605*t16629 + t16629*t16668 + t16613*t16739) - 1.*t16462*t16635*t2651 + t16591*(t16462*t16605*t2651 + t16462*t16668*t2651))*var2[3])*var2[4] + t2205*t2442*var2[5] + (t16902 + t16906 + t16913 + (t17092 + t16591*(t16937 + t16958 - 1.*t16462*t16935*t17097 - 1.*t16462*t16935*t17099 + t17101 + t17102) + t17236 + t128*t16462*(t128*t16591*t16935 + t17005 + t17082 + t17108 + t17206 - 1.*t16629*t16935*t2651))*var2[3] + (t16914 + t16340*(-1.*t16462*t16935 + t16937 + t16956 + t16958) + t16358*(t16503*t16935 + t17005 + t17081 + t17082) + t17087)*var2[4])*var2[5] + t2211*var2[9] + (t16902 + t16906 + t16913 + (t17092 + t17236 + t16591*(t16937 + t17101 + t17102 - 1.*t16462*t17097*t17343 - 1.*t16462*t17099*t17343 + t17349) + t128*t16462*(t17005 + t17108 + t17206 + t128*t16591*t17343 + t17355 - 1.*t16629*t17343*t2651))*var2[3] + (t16914 + t17087 + t16340*(t16937 + t16956 - 1.*t16462*t17343 + t17349) + t16358*(t17005 + t17081 + t16503*t17343 + t17355))*var2[4] + t2205*(-1.*t1209*t17325 + t17315*t196 - 1.*t196*t2397 - 1.*t1209*t2432)*var2[5])*var2[9] + t1981*var2[10] + (t17384 + t17426*var2[0] + (t16086*t17434 - 1.*t15944*t17446)*var2[1] + (t15944*t17434 + t16086*t17446)*var2[2] + (t14556*t16617 + t128*t16462*(t17614 + t17623 + t16591*t17645 + t16629*t17651 + t17667 + t17668) + t16591*(t17486 - 1.*t128*t16462*t17645 + t16462*t17651*t2651))*var2[3] + (t16070*t16489 + t16340*(t17486 - 1.*t16462*t17492) + t16358*(t16503*t17492 + t17579 + t17614 + t17623 + t17629 + t17604*t2205))*var2[4] + t10542*t2442*var2[5])*var2[10] + (t17384 + t17692 + t17701 + t17716 + (t16617*t17826 + t128*t16462*(t17790 + t17793 + t16591*t17814 + t16629*t17820 + t16605*t17826 + t16613*t17933) + t16591*(t17740 - 1.*t128*t16462*t17814 + t16462*t17820*t2651))*var2[3] + (t16340*(t17740 - 1.*t16462*t17757) + t16489*t17777 + t16358*(t16496*t17378 + t16503*t17757 + t17790 + t17793 + t16470*t17798 + t17784*t2205))*var2[4] + t17378*t2442*var2[5] + (t17677 + t17679 - 0.305*Power(t1937,2))*var2[10])*var2[11] + t14556*var3[0] + t16294*var3[1] + t16279*var3[2] + t16637*var3[3] + t16507*var3[4] + t2205*t2442*var3[5] + t2211*var3[9] + t1981*var3[10] - 1.*var4[0];
  p_output1[1]=t1318*t18084 - 0.50321*t18192*t1933 - 0.19821*(-1.*t18192*t1933 + t18186*t1937) - 0.50321*t18186*t1947 + 0.15121*(-1.*t1209*t18084 + t18103*t196) - 0.28121*t128*t15944*t2175 - 0.28121*t18149*t2363 + t18103*t2654 + var1[1] + t128*t16462*var2[0] + t18121*var2[1] + t18127*var2[2] + t18203*var2[3] + ((-1.*t15944*t16358 + t16086*t16462*t2651)*var2[1] + t18121*var2[2])*var2[3] + t18181*var2[4] + (-1.*t16462*t2651*var2[0] + t128*t15944*t16462*var2[1] - 1.*t128*t16086*t16462*var2[2] + (t16591*(t16089*t16605 + t14556*t16613 + t16613*t16648 + t16089*t16668) + t14556*(-1.*t16591*t16613 - 1.*t16605*t16629 - 1.*t16629*t16668 - 1.*t16613*t16739) + t16089*t18196 + t16629*t18200)*var2[3])*var2[4] + t18071*var2[5] + (t18212 + t18219 + t18227 + (t18259 + t18263 + t16591*(t128*t14556*t16935 + t18238 + t18240 + t18254 + t18255 - 1.*t16089*t16935*t2651) + t14556*(-1.*t128*t16591*t16935 + t18229 + t18232 + t18248 + t18249 + t16629*t16935*t2651))*var2[3] + (t16070*(-1.*t16503*t16935 + t18229 + t18231 + t18232) + t18236 + t16340*(t13073*t16935 + t18238 + t18239 + t18240) + t18243)*var2[4])*var2[5] + t18043*var2[9] + (t18212 + t18219 + t18227 + (t18259 + t18263 + t16591*(t128*t14556*t17343 + t18238 + t18254 + t18255 + t18296 - 1.*t16089*t17343*t2651) + t14556*(-1.*t128*t16591*t17343 + t18229 + t18248 + t18249 + t18292 + t16629*t17343*t2651))*var2[3] + (t18236 + t18243 + t16070*(-1.*t16503*t17343 + t18229 + t18231 + t18292) + t16340*(t13073*t17343 + t18238 + t18239 + t18296))*var2[4] + (t10542*(-1.*t10542*t1209*t17315 - 1.*t10542*t17325*t196 + t10542*t1209*t2397 - 1.*t10542*t196*t2432) + t2205*(t1209*t17315*t2181 + t17325*t196*t2181 - 1.*t1209*t2181*t2397 + t196*t2181*t2432))*var2[5])*var2[9] + ((t17426*t18196 + t14556*t18200 + t16591*(t16605*t17426 + t16613*t17446 + t14556*t17645 + t16089*t17651 + t18400 + t18402) + t14556*(-1.*t16591*t17645 - 1.*t16629*t17651 + t18407 + t18409 + t18425 + t18426))*var2[3] + (t17434*t18174 + t16070*t18177 + t16340*(t16470*t17417 + t13073*t17492 + t18353 + t18356 + t18400 + t18402) + t16070*(-1.*t16503*t17492 + t18361 + t18364 + t18407 + t18409 + t18410))*var2[4] + (t10542*t18069 + t18061*t2181 + t2205*(t18353 + t18356 + t17475*t18370*t2181 + t17475*t18374*t2181 + t17378*t196*t2397 + t1209*t17378*t2432) + t10542*(t18361 + t18364 - 1.*t10542*t17475*t18370 - 1.*t10542*t17475*t18374 - 1.*t196*t2181*t2397 - 1.*t1209*t2181*t2432))*var2[5] + (t10542*t17992 + t18022*t2181 + t2205*(t18353 + t18356 + t17475*t2181 + t17378*t2392) + t10542*(-1.*t10542*t17475 + t18361 + t18364 - 1.*t2181*t2392))*var2[9])*var2[10] + ((t16591*t18196 + t17826*t18200 + t16591*(t16500 + t16619 + t16630 + t14556*t17814 + t16089*t17820 + t18479) + t14556*(-1.*t16591*t17814 - 1.*t16629*t17820 - 1.*t16605*t17826 - 1.*t16613*t17933 + t18484 + t18486))*var2[3] + (t16340*t18174 + t17777*t18177 + t16340*(t16499 + t16500 + t16504 + t13073*t17757 + t18439 + t18479) + t16070*(-1.*t16503*t17757 - 1.*t16470*t17798 + t18443 + t18445 + t18484 + t18486))*var2[4] + (t17378*t18069 + t18061*t2205 + t2205*(t16499 + t18439 + t17730*t18370*t2181 + t17730*t18374*t2181 + t10542*t196*t2397 + t10542*t1209*t2432) + t10542*(-1.*t10542*t17730*t18370 - 1.*t10542*t17730*t18374 + t18443 + t18445 - 1.*t196*t2205*t2397 - 1.*t1209*t2205*t2432))*var2[5] + (t17378*t17992 + t18022*t2205 + t2205*(t16499 + t18439 + t17730*t2181 + t10542*t2392) + t10542*(-1.*t10542*t17730 + t18443 + t18445 - 1.*t2205*t2392))*var2[9])*var2[11] + t128*t16462*var3[0] + t18121*var3[1] + t18127*var3[2] + t18203*var3[3] + t18181*var3[4] + t18071*var3[5] + t18043*var3[9] - 1.*var4[1];
  p_output1[2]=t17692 + t17701 + t17716 + t1318*t18541 - 0.50321*t18595*t1933 - 0.19821*(-1.*t18595*t1933 + t18590*t1937) - 0.50321*t18590*t1947 + 0.15121*(-1.*t1209*t18541 + t18548*t196) + 0.28121*t128*t16086*t2175 - 0.28121*t18561*t2363 + t18548*t2654 + var1[2] + t18612*var2[3] + ((-1.*t15944*t16340 - 1.*t16086*t16629)*var2[1] + t17715*var2[2])*var2[3] + t18579*var2[4] + (t16629*var2[0] - 1.*t15944*t16739*var2[1] + t16086*t16739*var2[2] + (t128*t16462*(-1.*t16089*t16605 - 1.*t14556*t16613 - 1.*t16613*t16648 - 1.*t16089*t16668) + t16089*t18608 - 1.*t16462*t18610*t2651 + t14556*(-1.*t16462*t16605*t2651 - 1.*t16462*t16668*t2651))*var2[3])*var2[4] + t10542*t18533*var2[5] + (t18734 + t18738 + t18742 + (t18763 + t14556*(t16462*t16935*t17097 + t16462*t16935*t17099 + t18745 + t18747 + t18766 + t18767) + t18776 + t128*t16462*(-1.*t128*t14556*t16935 + t18752 + t18755 + t18772 + t18773 + t16089*t16935*t2651))*var2[3] + (t18743 + t16070*(t16462*t16935 + t18745 + t18746 + t18747) + t16358*(-1.*t13073*t16935 + t18752 + t18753 + t18755) + t18759)*var2[4])*var2[5] + (t18734 + t18738 + t18742 + (t18763 + t18776 + t14556*(t16462*t17097*t17343 + t16462*t17099*t17343 + t18745 + t18766 + t18767 + t18792) + t128*t16462*(-1.*t128*t14556*t17343 + t18752 + t18772 + t18773 + t18805 + t16089*t17343*t2651))*var2[3] + (t18743 + t18759 + t16070*(t16462*t17343 + t18745 + t18746 + t18792) + t16358*(-1.*t13073*t17343 + t18752 + t18753 + t18805))*var2[4] + t10542*(t1209*t17325 - 1.*t17315*t196 + t196*t2397 + t1209*t2432)*var2[5])*var2[9] + t18524*var2[10] + (t15296 + t16281 + t16298 + (t17426*t18608 + t128*t16462*(-1.*t16605*t17426 - 1.*t16613*t17446 - 1.*t14556*t17645 - 1.*t16089*t17651 + t18630 + t18632) + t14556*(t128*t16462*t17645 + t18623 - 1.*t16462*t17651*t2651))*var2[3] + (t17434*t18569 + t16070*(t16462*t17492 + t18623) + t16358*(-1.*t16470*t17417 - 1.*t13073*t17492 - 1.*t10542*t17604 + t18630 + t18632 - 1.*t16496*t2181))*var2[4] + t18533*t2181*var2[5])*var2[10] - 0.305*var2[11] + (t17826*var2[0] + (t16086*t17777 - 1.*t15944*t17933)*var2[1] + (t15944*t17777 + t16086*t17933)*var2[2] + (t16591*t18608 + t128*t16462*(-1.*t14556*t17814 - 1.*t16089*t17820 + t18171 + t18194 + t18195 + t18686) + t14556*(t128*t16462*t17814 + t18678 - 1.*t16462*t17820*t2651))*var2[3] + (t16340*t18569 + t16070*(t16462*t17757 + t18678) + t16358*(-1.*t13073*t17757 - 1.*t10542*t17784 + t18016 + t18171 + t18172 + t18686))*var2[4] + t18533*t2205*var2[5] + (-0.28121*t1933 + 0.305*t1933*t1937 - 1.*t1933*t1976)*var2[10])*var2[11] + t16591*var3[0] + t17715*var3[1] + t17696*var3[2] + t18612*var3[3] + t18579*var3[4] + t10542*t18533*var3[5] + t18524*var3[10] - 0.305*var3[11] - 1.*var4[2];
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
