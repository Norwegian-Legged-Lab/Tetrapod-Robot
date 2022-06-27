/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:24:24 GMT+02:00
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
  double t298;
  double t684;
  double t338;
  double t360;
  double t875;
  double t172;
  double t208;
  double t1270;
  double t1622;
  double t1655;
  double t1710;
  double t555;
  double t1092;
  double t1222;
  double t1849;
  double t1869;
  double t1248;
  double t2092;
  double t2133;
  double t335;
  double t1317;
  double t1322;
  double t1711;
  double t1766;
  double t1799;
  double t1804;
  double t3008;
  double t3030;
  double t3042;
  double t3095;
  double t3346;
  double t1853;
  double t1901;
  double t1905;
  double t1909;
  double t1922;
  double t1926;
  double t2010;
  double t3810;
  double t3868;
  double t3872;
  double t3873;
  double t3877;
  double t2124;
  double t2239;
  double t2241;
  double t2248;
  double t2271;
  double t2277;
  double t2347;
  double t3893;
  double t3913;
  double t3914;
  double t3916;
  double t3919;
  double t3010;
  double t3011;
  double t3020;
  double t3022;
  double t3391;
  double t3746;
  double t3753;
  double t3754;
  double t3943;
  double t3944;
  double t3946;
  double t3950;
  double t3953;
  double t3824;
  double t3854;
  double t3856;
  double t3857;
  double t3881;
  double t3885;
  double t3886;
  double t3888;
  double t3988;
  double t3989;
  double t3990;
  double t3995;
  double t3997;
  double t3894;
  double t3895;
  double t3900;
  double t3908;
  double t3920;
  double t3921;
  double t3935;
  double t3939;
  double t4010;
  double t4013;
  double t4014;
  double t4015;
  double t4023;
  double t1867;
  double t4037;
  double t4046;
  double t4040;
  double t4041;
  double t4042;
  double t4047;
  double t4051;
  double t4052;
  double t4053;
  double t4058;
  double t4116;
  double t4120;
  double t4125;
  double t4130;
  double t4063;
  double t4067;
  double t4103;
  double t4110;
  double t4134;
  double t4160;
  double t4171;
  double t4186;
  double t4612;
  double t4852;
  double t4903;
  double t4933;
  double t5275;
  double t5894;
  double t5937;
  double t5952;
  double t5972;
  double t6076;
  double t6252;
  double t7916;
  double t7920;
  double t7922;
  double t6922;
  double t6931;
  double t7126;
  double t7131;
  double t7138;
  double t8990;
  double t9035;
  double t9054;
  double t7286;
  double t7391;
  double t7700;
  double t7813;
  double t7818;
  double t10191;
  double t10538;
  double t10844;
  double t7885;
  double t7904;
  double t8138;
  double t3955;
  double t3958;
  double t8194;
  double t8528;
  double t8710;
  double t11516;
  double t11647;
  double t11763;
  double t8951;
  double t8974;
  double t9301;
  double t3998;
  double t4000;
  double t9307;
  double t9348;
  double t9369;
  double t12818;
  double t12821;
  double t12822;
  double t9508;
  double t9909;
  double t10919;
  double t4024;
  double t4025;
  double t11233;
  double t11236;
  double t11264;
  double t13093;
  double t13097;
  double t13106;
  double t6918;
  double t13155;
  double t13156;
  double t13158;
  double t13159;
  double t13161;
  double t13235;
  double t13280;
  double t13348;
  double t13173;
  double t13179;
  double t13378;
  double t4629;
  double t4664;
  double t13384;
  double t13393;
  double t13399;
  double t13414;
  double t13417;
  double t13418;
  double t13492;
  double t13503;
  double t13652;
  double t14126;
  double t14136;
  double t14140;
  double t14144;
  double t14223;
  double t13672;
  double t14209;
  double t14168;
  double t14239;
  double t14249;
  double t14285;
  double t14288;
  double t14305;
  double t14309;
  double t14794;
  double t14795;
  double t14796;
  double t14627;
  double t14680;
  double t14752;
  double t14753;
  double t14754;
  double t14764;
  double t14808;
  double t14809;
  double t14812;
  double t14781;
  double t14783;
  double t14784;
  double t14785;
  double t14786;
  double t14788;
  double t14826;
  double t14828;
  double t14829;
  double t14228;
  double t14843;
  double t14849;
  double t14850;
  double t14851;
  double t14853;
  double t14855;
  double t14913;
  double t14919;
  double t14951;
  double t18285;
  double t18298;
  double t18335;
  double t18350;
  double t18358;
  double t18429;
  double t20407;
  double t20408;
  double t20409;
  double t20421;
  double t20422;
  double t20423;
  double t20420;
  double t20424;
  double t20425;
  double t20426;
  double t20427;
  double t20432;
  double t20433;
  double t20434;
  double t20444;
  double t20445;
  double t20446;
  double t20454;
  double t20455;
  double t20456;
  double t20457;
  double t20458;
  double t20640;
  double t20641;
  double t20642;
  double t20637;
  double t20653;
  double t20654;
  double t20655;
  double t20656;
  double t20657;
  double t20662;
  double t20663;
  double t20664;
  double t20674;
  double t20675;
  double t20676;
  double t20684;
  double t20685;
  double t20686;
  double t20687;
  double t20688;
  double t20842;
  double t20843;
  double t20844;
  double t20689;
  double t20855;
  double t20856;
  double t20857;
  double t20858;
  double t20859;
  double t20864;
  double t20865;
  double t20866;
  double t20876;
  double t20877;
  double t20878;
  double t20886;
  double t20887;
  double t20888;
  double t20889;
  double t20890;
  double t20897;
  double t20898;
  double t20899;
  double t20891;
  double t20910;
  double t20911;
  double t20912;
  double t20913;
  double t20914;
  double t20919;
  double t20920;
  double t20921;
  double t20931;
  double t20932;
  double t20933;
  t298 = Sin(var1[3]);
  t684 = Cos(var1[3]);
  t338 = Cos(var1[5]);
  t360 = Sin(var1[4]);
  t875 = Sin(var1[5]);
  t172 = Cos(var1[4]);
  t208 = Sin(var1[9]);
  t1270 = Cos(var1[9]);
  t1622 = t684*t338;
  t1655 = -1.*t298*t360*t875;
  t1710 = t1622 + t1655;
  t555 = t338*t298*t360;
  t1092 = t684*t875;
  t1222 = t555 + t1092;
  t1849 = Sin(var1[12]);
  t1869 = Cos(var1[12]);
  t1248 = -0.325*t1222;
  t2092 = Sin(var1[15]);
  t2133 = Cos(var1[15]);
  t335 = 0.1575*t172*t208*t298;
  t1317 = -1.*t1270;
  t1322 = 1. + t1317;
  t1711 = 0.1575*t1322*t1710;
  t1766 = -1.*t172*t208*t298;
  t1799 = t1270*t1710;
  t1804 = t1766 + t1799;
  t3008 = Cos(var1[10]);
  t3030 = Sin(var1[10]);
  t3042 = -1.*t1270*t172*t298;
  t3095 = -1.*t208*t1710;
  t3346 = t3042 + t3095;
  t1853 = -0.1575*t172*t1849*t298;
  t1901 = -1.*t1869;
  t1905 = 1. + t1901;
  t1909 = -0.1575*t1905*t1710;
  t1922 = -1.*t172*t1849*t298;
  t1926 = t1869*t1710;
  t2010 = t1922 + t1926;
  t3810 = Cos(var1[13]);
  t3868 = Sin(var1[13]);
  t3872 = -1.*t1869*t172*t298;
  t3873 = -1.*t1849*t1710;
  t3877 = t3872 + t3873;
  t2124 = -0.1575*t172*t2092*t298;
  t2239 = -1.*t2133;
  t2241 = 1. + t2239;
  t2248 = -0.1575*t2241*t1710;
  t2271 = -1.*t172*t2092*t298;
  t2277 = t2133*t1710;
  t2347 = t2271 + t2277;
  t3893 = Cos(var1[16]);
  t3913 = Sin(var1[16]);
  t3914 = -1.*t2133*t172*t298;
  t3916 = -1.*t2092*t1710;
  t3919 = t3914 + t3916;
  t3010 = -1.*t3008;
  t3011 = 1. + t3010;
  t3020 = -0.325*t3011*t1222;
  t3022 = 0.2255*t1804;
  t3391 = 0.325*t3030*t3346;
  t3746 = t3008*t1222;
  t3753 = t3030*t3346;
  t3754 = t3746 + t3753;
  t3943 = Sin(var1[11]);
  t3944 = -1.*t3030*t1222;
  t3946 = t3008*t3346;
  t3950 = t3944 + t3946;
  t3953 = Cos(var1[11]);
  t3824 = -1.*t3810;
  t3854 = 1. + t3824;
  t3856 = 0.325*t3854*t1222;
  t3857 = -0.2255*t2010;
  t3881 = -0.325*t3868*t3877;
  t3885 = t3810*t1222;
  t3886 = t3868*t3877;
  t3888 = t3885 + t3886;
  t3988 = Sin(var1[14]);
  t3989 = -1.*t3868*t1222;
  t3990 = t3810*t3877;
  t3995 = t3989 + t3990;
  t3997 = Cos(var1[14]);
  t3894 = -1.*t3893;
  t3895 = 1. + t3894;
  t3900 = -0.325*t3895*t1222;
  t3908 = -0.2255*t2347;
  t3920 = 0.325*t3913*t3919;
  t3921 = t3893*t1222;
  t3935 = t3913*t3919;
  t3939 = t3921 + t3935;
  t4010 = Sin(var1[17]);
  t4013 = -1.*t3913*t1222;
  t4014 = t3893*t3919;
  t4015 = t4013 + t4014;
  t4023 = Cos(var1[17]);
  t1867 = 0.325*t1222;
  t4037 = Cos(var1[6]);
  t4046 = Sin(var1[6]);
  t4040 = -1.*t4037;
  t4041 = 1. + t4040;
  t4042 = 0.1575*t4041*t1710;
  t4047 = 0.1575*t172*t298*t4046;
  t4051 = t4037*t1710;
  t4052 = -1.*t172*t298*t4046;
  t4053 = t4051 + t4052;
  t4058 = Cos(var1[7]);
  t4116 = -1.*t172*t4037*t298;
  t4120 = -1.*t1710*t4046;
  t4125 = t4116 + t4120;
  t4130 = Sin(var1[7]);
  t4063 = -1.*t4058;
  t4067 = 1. + t4063;
  t4103 = 0.325*t4067*t1222;
  t4110 = 0.2255*t4053;
  t4134 = -0.325*t4125*t4130;
  t4160 = t4058*t1222;
  t4171 = t4125*t4130;
  t4186 = t4160 + t4171;
  t4612 = Cos(var1[8]);
  t4852 = t4058*t4125;
  t4903 = -1.*t1222*t4130;
  t4933 = t4852 + t4903;
  t5275 = Sin(var1[8]);
  t5894 = 0.325*t684*t172*t338;
  t5937 = 0.1575*t684*t208*t360;
  t5952 = 0.1575*t1322*t684*t172*t875;
  t5972 = -1.*t684*t208*t360;
  t6076 = t1270*t684*t172*t875;
  t6252 = t5972 + t6076;
  t7916 = -1.*t1270*t684*t360;
  t7920 = -1.*t684*t172*t208*t875;
  t7922 = t7916 + t7920;
  t6922 = -0.1575*t684*t1849*t360;
  t6931 = -0.1575*t1905*t684*t172*t875;
  t7126 = -1.*t684*t1849*t360;
  t7131 = t1869*t684*t172*t875;
  t7138 = t7126 + t7131;
  t8990 = -1.*t1869*t684*t360;
  t9035 = -1.*t684*t172*t1849*t875;
  t9054 = t8990 + t9035;
  t7286 = -0.1575*t684*t2092*t360;
  t7391 = -0.1575*t2241*t684*t172*t875;
  t7700 = -1.*t684*t2092*t360;
  t7813 = t2133*t684*t172*t875;
  t7818 = t7700 + t7813;
  t10191 = -1.*t2133*t684*t360;
  t10538 = -1.*t684*t172*t2092*t875;
  t10844 = t10191 + t10538;
  t7885 = 0.325*t3011*t684*t172*t338;
  t7904 = 0.2255*t6252;
  t8138 = 0.325*t3030*t7922;
  t3955 = -1.*t3953;
  t3958 = 1. + t3955;
  t8194 = -1.*t3008*t684*t172*t338;
  t8528 = t3030*t7922;
  t8710 = t8194 + t8528;
  t11516 = t684*t172*t338*t3030;
  t11647 = t3008*t7922;
  t11763 = t11516 + t11647;
  t8951 = -0.325*t3854*t684*t172*t338;
  t8974 = -0.2255*t7138;
  t9301 = -0.325*t3868*t9054;
  t3998 = -1.*t3997;
  t4000 = 1. + t3998;
  t9307 = -1.*t3810*t684*t172*t338;
  t9348 = t3868*t9054;
  t9369 = t9307 + t9348;
  t12818 = t684*t172*t338*t3868;
  t12821 = t3810*t9054;
  t12822 = t12818 + t12821;
  t9508 = 0.325*t3895*t684*t172*t338;
  t9909 = -0.2255*t7818;
  t10919 = 0.325*t3913*t10844;
  t4024 = -1.*t4023;
  t4025 = 1. + t4024;
  t11233 = -1.*t3893*t684*t172*t338;
  t11236 = t3913*t10844;
  t11264 = t11233 + t11236;
  t13093 = t684*t172*t338*t3913;
  t13097 = t3893*t10844;
  t13106 = t13093 + t13097;
  t6918 = -0.325*t684*t172*t338;
  t13155 = 0.1575*t684*t172*t4041*t875;
  t13156 = 0.1575*t684*t360*t4046;
  t13158 = t684*t172*t4037*t875;
  t13159 = -1.*t684*t360*t4046;
  t13161 = t13158 + t13159;
  t13235 = -1.*t684*t4037*t360;
  t13280 = -1.*t684*t172*t875*t4046;
  t13348 = t13235 + t13280;
  t13173 = -0.325*t684*t172*t338*t4067;
  t13179 = 0.2255*t13161;
  t13378 = -0.325*t13348*t4130;
  t4629 = -1.*t4612;
  t4664 = 1. + t4629;
  t13384 = -1.*t684*t172*t338*t4058;
  t13393 = t13348*t4130;
  t13399 = t13384 + t13393;
  t13414 = t4058*t13348;
  t13417 = t684*t172*t338*t4130;
  t13418 = t13414 + t13417;
  t13492 = t684*t338*t360;
  t13503 = -1.*t298*t875;
  t13652 = t13492 + t13503;
  t14126 = t338*t298;
  t14136 = t684*t360*t875;
  t14140 = t14126 + t14136;
  t14144 = -0.325*t14140;
  t14223 = 0.325*t14140;
  t13672 = 0.1575*t1322*t13652;
  t14209 = -0.1575*t1905*t13652;
  t14168 = -0.1575*t2241*t13652;
  t14239 = 0.2255*t1270*t13652;
  t14249 = -0.325*t208*t3030*t13652;
  t14285 = -0.325*t3011*t14140;
  t14288 = -1.*t208*t3030*t13652;
  t14305 = t3008*t14140;
  t14309 = t14288 + t14305;
  t14794 = -1.*t3008*t208*t13652;
  t14795 = -1.*t3030*t14140;
  t14796 = t14794 + t14795;
  t14627 = -0.2255*t1869*t13652;
  t14680 = 0.325*t1849*t3868*t13652;
  t14752 = 0.325*t3854*t14140;
  t14753 = -1.*t1849*t3868*t13652;
  t14754 = t3810*t14140;
  t14764 = t14753 + t14754;
  t14808 = -1.*t3810*t1849*t13652;
  t14809 = -1.*t3868*t14140;
  t14812 = t14808 + t14809;
  t14781 = -0.2255*t2133*t13652;
  t14783 = -0.325*t2092*t3913*t13652;
  t14784 = -0.325*t3895*t14140;
  t14785 = -1.*t2092*t3913*t13652;
  t14786 = t3893*t14140;
  t14788 = t14785 + t14786;
  t14826 = -1.*t3893*t2092*t13652;
  t14828 = -1.*t3913*t14140;
  t14829 = t14826 + t14828;
  t14228 = 0.1575*t4041*t13652;
  t14843 = 0.2255*t4037*t13652;
  t14849 = 0.325*t4067*t14140;
  t14850 = 0.325*t13652*t4046*t4130;
  t14851 = t4058*t14140;
  t14853 = -1.*t13652*t4046*t4130;
  t14855 = t14851 + t14853;
  t14913 = -1.*t4058*t13652*t4046;
  t14919 = -1.*t14140*t4130;
  t14951 = t14913 + t14919;
  t18285 = -0.1575*t684*t172*t4037;
  t18298 = 0.1575*t14140*t4046;
  t18335 = t684*t172*t4037;
  t18350 = -1.*t14140*t4046;
  t18358 = t18335 + t18350;
  t18429 = 0.2255*t18358;
  t20407 = -1.*t4037*t14140;
  t20408 = -1.*t684*t172*t4046;
  t20409 = t20407 + t20408;
  t20421 = -1.*t684*t338*t360;
  t20422 = t298*t875;
  t20423 = t20421 + t20422;
  t20420 = -0.325*t4058*t18358;
  t20424 = 0.325*t20423*t4130;
  t20425 = t4058*t18358;
  t20426 = -1.*t20423*t4130;
  t20427 = t20425 + t20426;
  t20432 = -1.*t4058*t20423;
  t20433 = -1.*t18358*t4130;
  t20434 = t20432 + t20433;
  t20444 = t4058*t20423;
  t20445 = t18358*t4130;
  t20446 = t20444 + t20445;
  t20454 = -0.1575*t1270*t684*t172;
  t20455 = 0.1575*t208*t14140;
  t20456 = t1270*t684*t172;
  t20457 = -1.*t208*t14140;
  t20458 = t20456 + t20457;
  t20640 = -1.*t684*t172*t208;
  t20641 = -1.*t1270*t14140;
  t20642 = t20640 + t20641;
  t20637 = 0.2255*t20458;
  t20653 = -0.325*t3030*t20423;
  t20654 = 0.325*t3008*t20458;
  t20655 = -1.*t3030*t20423;
  t20656 = t3008*t20458;
  t20657 = t20655 + t20656;
  t20662 = -1.*t3008*t20423;
  t20663 = -1.*t3030*t20458;
  t20664 = t20662 + t20663;
  t20674 = t3008*t20423;
  t20675 = t3030*t20458;
  t20676 = t20674 + t20675;
  t20684 = 0.1575*t1869*t684*t172;
  t20685 = -0.1575*t1849*t14140;
  t20686 = t1869*t684*t172;
  t20687 = -1.*t1849*t14140;
  t20688 = t20686 + t20687;
  t20842 = -1.*t684*t172*t1849;
  t20843 = -1.*t1869*t14140;
  t20844 = t20842 + t20843;
  t20689 = -0.2255*t20688;
  t20855 = 0.325*t3868*t20423;
  t20856 = -0.325*t3810*t20688;
  t20857 = -1.*t3868*t20423;
  t20858 = t3810*t20688;
  t20859 = t20857 + t20858;
  t20864 = -1.*t3810*t20423;
  t20865 = -1.*t3868*t20688;
  t20866 = t20864 + t20865;
  t20876 = t3810*t20423;
  t20877 = t3868*t20688;
  t20878 = t20876 + t20877;
  t20886 = 0.1575*t2133*t684*t172;
  t20887 = -0.1575*t2092*t14140;
  t20888 = t2133*t684*t172;
  t20889 = -1.*t2092*t14140;
  t20890 = t20888 + t20889;
  t20897 = -1.*t684*t172*t2092;
  t20898 = -1.*t2133*t14140;
  t20899 = t20897 + t20898;
  t20891 = -0.2255*t20890;
  t20910 = -0.325*t3913*t20423;
  t20911 = 0.325*t3893*t20890;
  t20912 = -1.*t3913*t20423;
  t20913 = t3893*t20890;
  t20914 = t20912 + t20913;
  t20919 = -1.*t3893*t20423;
  t20920 = -1.*t3913*t20890;
  t20921 = t20919 + t20920;
  t20931 = t3893*t20423;
  t20932 = t3913*t20890;
  t20933 = t20931 + t20932;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=-258.00300000000004;
  p_output1[3]=-26.977500000000003*(t1853 + t1867 + t1909 - 0.1575*t2010) - 26.977500000000003*(t1248 + t2124 + t2248 - 0.1575*t2347) - 26.977500000000003*(t1248 + t1711 + 0.1575*t1804 + t335) - 6.1312500000000005*(t1711 + t3020 + t3022 + t335 + t3391 - 0.325*t3754) - 6.1312500000000005*(t1853 + t1909 + t3856 + t3857 + t3881 + 0.325*t3888) - 6.1312500000000005*(t2124 + t2248 + t3900 + t3908 + t3920 - 0.325*t3939) - 1.9620000000000002*(t1711 + t3020 + t3022 + t335 + t3391 - 0.575*t3943*t3950 - 0.575*(-1.*t3943*t3950 + t3754*t3953) - 0.575*t3754*t3958) - 1.9620000000000002*(t1853 + t1909 + t3856 + t3857 + t3881 + 0.075*t3988*t3995 + 0.075*(-1.*t3988*t3995 + t3888*t3997) + 0.075*t3888*t4000) - 1.9620000000000002*(t2124 + t2248 + t3900 + t3908 + t3920 - 0.575*t4010*t4015 - 0.575*(-1.*t4010*t4015 + t3939*t4023) - 0.575*t3939*t4025) - 26.977500000000003*(t1867 + t4042 + t4047 + 0.1575*t4053) - 6.1312500000000005*(t4042 + t4047 + t4103 + t4110 + t4134 + 0.325*t4186) - 1.9620000000000002*(t4042 + t4047 + t4103 + t4110 + t4134 + 0.075*t4186*t4664 + 0.075*t4933*t5275 + 0.075*(t4186*t4612 - 1.*t4933*t5275));
  p_output1[4]=-6.1312500000000005*(t13155 + t13156 + t13173 + t13179 + t13378 + 0.325*t13399) - 1.9620000000000002*(t13155 + t13156 + t13173 + t13179 + t13378 + 0.075*t13399*t4664 + 0.075*t13418*t5275 + 0.075*(t13399*t4612 - 1.*t13418*t5275)) - 26.977500000000003*(t5894 + t5937 + t5952 + 0.1575*t6252) - 26.977500000000003*(t13155 + t13156 + 0.1575*t13161 + t6918) - 26.977500000000003*(t6918 + t6922 + t6931 - 0.1575*t7138) - 26.977500000000003*(t5894 + t7286 + t7391 - 0.1575*t7818) - 6.1312500000000005*(t5937 + t5952 + t7885 + t7904 + t8138 - 0.325*t8710) - 1.9620000000000002*(-0.575*t11763*t3943 + t5937 + t5952 + t7885 + t7904 + t8138 - 0.575*t3958*t8710 - 0.575*(-1.*t11763*t3943 + t3953*t8710)) - 6.1312500000000005*(t6922 + t6931 + t8951 + t8974 + t9301 + 0.325*t9369) - 1.9620000000000002*(0.075*t12822*t3988 + t6922 + t6931 + t8951 + t8974 + t9301 + 0.075*t4000*t9369 + 0.075*(-1.*t12822*t3988 + t3997*t9369)) - 6.1312500000000005*(t10919 - 0.325*t11264 + t7286 + t7391 + t9508 + t9909) - 1.9620000000000002*(t10919 - 0.575*t13106*t4010 - 0.575*(-1.*t13106*t4010 + t11264*t4023) - 0.575*t11264*t4025 + t7286 + t7391 + t9508 + t9909);
  p_output1[5]=-26.977500000000003*(0.1575*t1270*t13652 + t13672 + t14144) - 6.1312500000000005*(t13672 + t14239 + t14249 + t14285 - 0.325*t14309) - 6.1312500000000005*(t14209 + t14627 + t14680 + t14752 + 0.325*t14764) - 6.1312500000000005*(t14168 + t14781 + t14783 + t14784 - 0.325*t14788) - 6.1312500000000005*(t14228 + t14843 + t14849 + t14850 + 0.325*t14855) - 26.977500000000003*(t14209 + t14223 - 0.1575*t13652*t1869) - 26.977500000000003*(t14144 + t14168 - 0.1575*t13652*t2133) - 1.9620000000000002*(t13672 + t14239 + t14249 + t14285 - 0.575*t14796*t3943 - 0.575*(-1.*t14796*t3943 + t14309*t3953) - 0.575*t14309*t3958) - 1.9620000000000002*(t14209 + t14627 + t14680 + t14752 + 0.075*t14812*t3988 + 0.075*(-1.*t14812*t3988 + t14764*t3997) + 0.075*t14764*t4000) - 1.9620000000000002*(t14168 + t14781 + t14783 + t14784 - 0.575*t14829*t4010 - 0.575*(-1.*t14829*t4010 + t14788*t4023) - 0.575*t14788*t4025) - 26.977500000000003*(t14223 + t14228 + 0.1575*t13652*t4037) - 1.9620000000000002*(t14228 + t14843 + t14849 + t14850 + 0.075*t14855*t4664 + 0.075*t14951*t5275 + 0.075*(t14855*t4612 - 1.*t14951*t5275));
  p_output1[6]=-26.977500000000003*(t18285 + t18298 + 0.1575*t18358) - 6.1312500000000005*(t18285 + t18298 + t18429) - 1.9620000000000002*(t18285 + t18298 + t18429 - 0.325*t20409*t4130 + 0.075*t20409*t4130*t4664 + 0.075*t20409*t4058*t5275 + 0.075*(t20409*t4130*t4612 - 1.*t20409*t4058*t5275));
  p_output1[7]=-6.1312500000000005*(t20420 + t20424 + 0.325*t20427) - 1.9620000000000002*(t20420 + t20424 + 0.075*t20427*t4664 + 0.075*t20434*t5275 + 0.075*(t20427*t4612 - 1.*t20434*t5275));
  p_output1[8]=-1.9620000000000002*(0.075*t20427*t4612 + 0.075*t20446*t5275 + 0.075*(-1.*t20427*t4612 - 1.*t20446*t5275));
  p_output1[9]=-26.977500000000003*(t20454 + t20455 + 0.1575*t20458) - 6.1312500000000005*(t20454 + t20455 + t20637) - 1.9620000000000002*(t20454 + t20455 + t20637 + 0.325*t20642*t3030 - 0.575*t20642*t3008*t3943 - 0.575*(-1.*t20642*t3008*t3943 + t20642*t3030*t3953) - 0.575*t20642*t3030*t3958);
  p_output1[10]=-6.1312500000000005*(t20653 + t20654 - 0.325*t20657) - 1.9620000000000002*(t20653 + t20654 - 0.575*t20664*t3943 - 0.575*(-1.*t20664*t3943 + t20657*t3953) - 0.575*t20657*t3958);
  p_output1[11]=-1.9620000000000002*(-0.575*t20676*t3943 - 0.575*t20657*t3953 - 0.575*(-1.*t20676*t3943 - 1.*t20657*t3953));
  p_output1[12]=-26.977500000000003*(t20684 + t20685 - 0.1575*t20688) - 6.1312500000000005*(t20684 + t20685 + t20689) - 1.9620000000000002*(t20684 + t20685 + t20689 - 0.325*t20844*t3868 + 0.075*t20844*t3810*t3988 + 0.075*(-1.*t20844*t3810*t3988 + t20844*t3868*t3997) + 0.075*t20844*t3868*t4000);
  p_output1[13]=-6.1312500000000005*(t20855 + t20856 + 0.325*t20859) - 1.9620000000000002*(t20855 + t20856 + 0.075*t20866*t3988 + 0.075*(-1.*t20866*t3988 + t20859*t3997) + 0.075*t20859*t4000);
  p_output1[14]=-1.9620000000000002*(0.075*t20878*t3988 + 0.075*t20859*t3997 + 0.075*(-1.*t20878*t3988 - 1.*t20859*t3997));
  p_output1[15]=-26.977500000000003*(t20886 + t20887 - 0.1575*t20890) - 6.1312500000000005*(t20886 + t20887 + t20891) - 1.9620000000000002*(t20886 + t20887 + t20891 + 0.325*t20899*t3913 - 0.575*t20899*t3893*t4010 - 0.575*(-1.*t20899*t3893*t4010 + t20899*t3913*t4023) - 0.575*t20899*t3913*t4025);
  p_output1[16]=-6.1312500000000005*(t20910 + t20911 - 0.325*t20914) - 1.9620000000000002*(t20910 + t20911 - 0.575*t20921*t4010 - 0.575*(-1.*t20921*t4010 + t20914*t4023) - 0.575*t20914*t4025);
  p_output1[17]=-1.9620000000000002*(-0.575*t20933*t4010 - 0.575*t20914*t4023 - 0.575*(-1.*t20933*t4010 - 1.*t20914*t4023));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ge_vec_vision60.hh"

namespace SymFunction
{

void Ge_vec_vision60_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
