/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:04:35 GMT+02:00
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
  double t9263;
  double t9278;
  double t9333;
  double t11816;
  double t15711;
  double t16259;
  double t16283;
  double t16318;
  double t9177;
  double t9233;
  double t16353;
  double t16431;
  double t16296;
  double t16359;
  double t16378;
  double t8782;
  double t16438;
  double t16439;
  double t16443;
  double t16444;
  double t16445;
  double t16447;
  double t16460;
  double t16469;
  double t16470;
  double t16879;
  double t16887;
  double t16930;
  double t16948;
  double t16949;
  double t17018;
  double t17027;
  double t17040;
  double t17155;
  double t17197;
  double t17198;
  double t17214;
  double t17227;
  double t17232;
  double t17233;
  double t17234;
  double t17245;
  double t17297;
  double t17317;
  double t17330;
  double t17425;
  double t17428;
  double t17430;
  double t17447;
  double t17448;
  double t17451;
  double t17457;
  double t17458;
  double t17469;
  double t17475;
  double t17486;
  double t17487;
  double t17491;
  double t17501;
  double t17505;
  double t17507;
  double t17508;
  double t17446;
  double t17459;
  double t17460;
  double t17461;
  double t17511;
  double t17512;
  double t17515;
  double t17516;
  double t17517;
  double t17518;
  double t17519;
  double t17522;
  double t17525;
  double t17549;
  double t17550;
  double t17551;
  double t17468;
  double t17533;
  double t17538;
  double t17584;
  double t17588;
  double t17594;
  double t17440;
  double t17441;
  double t17444;
  double t17571;
  double t17572;
  double t17575;
  double t17614;
  double t17621;
  double t17627;
  double t17776;
  double t17785;
  double t17787;
  double t17921;
  double t17922;
  double t17923;
  double t17577;
  double t17937;
  double t17938;
  double t17957;
  double t17695;
  double t17976;
  double t17982;
  double t18010;
  double t17583;
  double t17595;
  double t17601;
  double t17959;
  double t17966;
  double t17960;
  double t17961;
  double t17962;
  double t17973;
  double t18022;
  double t17722;
  double t17725;
  double t17729;
  double t17811;
  double t17831;
  double t18352;
  double t18362;
  double t18418;
  double t18426;
  double t17813;
  double t17816;
  double t17817;
  double t17834;
  double t17837;
  double t17842;
  double t17869;
  double t17911;
  double t17872;
  double t17873;
  double t17879;
  double t18049;
  double t18054;
  double t18580;
  double t18599;
  double t18608;
  double t18619;
  double t17913;
  double t17914;
  double t17915;
  double t17924;
  double t17925;
  double t17926;
  double t17927;
  double t17928;
  double t17929;
  double t17931;
  double t17932;
  double t17933;
  double t17934;
  double t17935;
  double t17936;
  double t18714;
  double t18716;
  double t18718;
  double t18700;
  double t18709;
  double t17963;
  double t18727;
  double t18731;
  double t18732;
  double t18736;
  double t18741;
  double t18742;
  double t18021;
  double t18029;
  double t18032;
  double t18033;
  double t18034;
  double t18043;
  double t18745;
  double t18066;
  double t18075;
  double t18752;
  double t18087;
  double t18090;
  double t18097;
  double t18106;
  double t18108;
  double t18173;
  double t18177;
  double t18203;
  double t18286;
  double t18288;
  double t18312;
  double t18337;
  double t18355;
  double t18390;
  double t18400;
  double t18401;
  double t18410;
  double t18419;
  double t18439;
  double t18441;
  double t18442;
  double t18452;
  double t18814;
  double t18476;
  double t18478;
  double t18822;
  double t18504;
  double t18506;
  double t18514;
  double t18515;
  double t18527;
  double t18529;
  double t18532;
  double t18534;
  double t18536;
  double t18537;
  double t18550;
  double t18551;
  double t18552;
  double t18555;
  double t18556;
  double t18559;
  double t18589;
  double t18614;
  double t18626;
  double t18627;
  double t18629;
  double t18632;
  double t18643;
  double t18859;
  double t18646;
  double t18648;
  double t18867;
  double t18663;
  double t18664;
  double t18669;
  double t18902;
  double t18914;
  double t18916;
  double t18955;
  double t18957;
  double t18959;
  double t18966;
  double t18972;
  double t18973;
  double t18985;
  double t18987;
  double t18992;
  double t19048;
  double t19053;
  double t19062;
  double t19069;
  double t19071;
  double t19075;
  double t19092;
  double t19107;
  double t19124;
  double t19143;
  double t19098;
  double t19171;
  double t19172;
  double t19177;
  double t19193;
  double t19200;
  double t19201;
  double t19206;
  double t19208;
  double t19219;
  double t19257;
  double t19262;
  double t19325;
  double t19340;
  double t19290;
  double t19418;
  double t19426;
  double t18953;
  double t18961;
  double t18962;
  double t19456;
  double t16906;
  double t16910;
  double t16912;
  double t19553;
  double t19583;
  double t19589;
  double t18917;
  double t18921;
  double t18932;
  double t18934;
  double t18937;
  double t18942;
  double t18948;
  double t17389;
  double t17395;
  double t17402;
  double t19690;
  double t19697;
  double t19698;
  double t19699;
  double t19700;
  double t19709;
  double t19710;
  double t19711;
  double t19720;
  double t19721;
  double t19722;
  double t19704;
  double t19733;
  double t19736;
  double t19742;
  double t19761;
  double t19764;
  double t19767;
  double t19749;
  double t19757;
  double t19791;
  double t19792;
  double t19795;
  double t19799;
  double t19800;
  double t19801;
  double t19807;
  double t19809;
  double t19814;
  double t19244;
  double t19245;
  double t19266;
  double t19272;
  double t19363;
  double t19372;
  double t19374;
  double t19866;
  double t19403;
  double t19407;
  double t19408;
  double t19870;
  double t19877;
  double t19977;
  double t19993;
  double t19995;
  double t19826;
  double t19828;
  double t19833;
  double t19530;
  double t19531;
  double t19540;
  double t20062;
  double t20078;
  t9263 = Cos(var1[16]);
  t9278 = Cos(var1[17]);
  t9333 = -1.*t9263*t9278;
  t11816 = Sin(var1[16]);
  t15711 = Sin(var1[17]);
  t16259 = -1.*t11816*t15711;
  t16283 = t9333 + t16259;
  t16318 = Cos(var1[15]);
  t9177 = Cos(var1[5]);
  t9233 = Sin(var1[15]);
  t16353 = Sin(var1[5]);
  t16431 = Cos(var1[3]);
  t16296 = t9177*t9233*t16283;
  t16359 = t16318*t16283*t16353;
  t16378 = t16296 + t16359;
  t8782 = Sin(var1[3]);
  t16438 = Cos(var1[4]);
  t16439 = -1.*t9278*t11816;
  t16443 = t9263*t15711;
  t16444 = t16439 + t16443;
  t16445 = t16438*t16444;
  t16447 = Sin(var1[4]);
  t16460 = t16318*t9177*t16283;
  t16469 = -1.*t9233*t16283*t16353;
  t16470 = t16460 + t16469;
  t16879 = -1.*t16447*t16470;
  t16887 = t16445 + t16879;
  t16930 = t9177*t9233;
  t16948 = t16318*t16353;
  t16949 = t16930 + t16948;
  t17018 = -1.*t16318*t9177;
  t17027 = t9233*t16353;
  t17040 = t17018 + t17027;
  t17155 = t9177*t9233*t16444;
  t17197 = t16318*t16444*t16353;
  t17198 = t17155 + t17197;
  t17214 = t9263*t9278;
  t17227 = t11816*t15711;
  t17232 = t17214 + t17227;
  t17233 = t16438*t17232;
  t17234 = t16318*t9177*t16444;
  t17245 = -1.*t9233*t16444*t16353;
  t17297 = t17234 + t17245;
  t17317 = -1.*t16447*t17297;
  t17330 = t17233 + t17317;
  t17425 = -1.*t16444*t16447;
  t17428 = -1.*t16438*t16470;
  t17430 = t17425 + t17428;
  t17447 = -1.*t9278;
  t17448 = 1. + t17447;
  t17451 = -0.50321*t17448;
  t17457 = -0.19821*t9278;
  t17458 = t17451 + t17457;
  t17469 = -1.*t16318;
  t17475 = 1. + t17469;
  t17486 = -0.15121*t17475;
  t17487 = -1.*t9263;
  t17491 = 1. + t17487;
  t17501 = -0.28121*t17491;
  t17505 = t9263*t17458;
  t17507 = 0.305*t11816*t15711;
  t17508 = t17501 + t17505 + t17507;
  t17446 = 0.28121*t11816;
  t17459 = t17458*t11816;
  t17460 = -0.305*t9263*t15711;
  t17461 = t17446 + t17459 + t17460;
  t17511 = t16318*t17508;
  t17512 = t17486 + t17511;
  t17515 = t9177*t17512;
  t17516 = -0.15121*t16318;
  t17517 = 0.15121*t9233;
  t17518 = t9233*t17508;
  t17519 = t17486 + t17516 + t17517 + t17518;
  t17522 = -1.*t17519*t16353;
  t17525 = t17515 + t17522;
  t17549 = t17461*t16447;
  t17550 = t16438*t17525;
  t17551 = t17549 + t17550;
  t17468 = -1.*t17461*t16447;
  t17533 = -1.*t16438*t17525;
  t17538 = t17468 + t17533;
  t17584 = t16438*t17461;
  t17588 = -1.*t16447*t17525;
  t17594 = t17584 + t17588;
  t17440 = t17232*t16447;
  t17441 = t16438*t17297;
  t17444 = t17440 + t17441;
  t17571 = t9177*t17519;
  t17572 = t17512*t16353;
  t17575 = t17571 + t17572;
  t17614 = -1.*t17232*t16447;
  t17621 = -1.*t16438*t17297;
  t17627 = t17614 + t17621;
  t17776 = t16444*t16447;
  t17785 = t16438*t16470;
  t17787 = t17776 + t17785;
  t17921 = -1.*t9177*t9233*t16283;
  t17922 = -1.*t16318*t16283*t16353;
  t17923 = t17921 + t17922;
  t17577 = -1.*t17040*t17575;
  t17937 = -1.*t9177*t17519;
  t17938 = -1.*t17512*t16353;
  t17957 = t17937 + t17938;
  t17695 = t17198*t17575;
  t17976 = -1.*t9177*t9233*t16444;
  t17982 = -1.*t16318*t16444*t16353;
  t18010 = t17976 + t17982;
  t17583 = -1.*t16438*t16949*t17551;
  t17595 = t16447*t16949*t17594;
  t17601 = t17577 + t17583 + t17595;
  t17959 = -1.*t16949*t17575;
  t17966 = -1.*t17040*t17525;
  t17960 = t16318*t9177;
  t17961 = -1.*t9233*t16353;
  t17962 = t17960 + t17961;
  t17973 = t17297*t17575;
  t18022 = t17198*t17525;
  t17722 = t17444*t17551;
  t17725 = t17330*t17594;
  t17729 = t17695 + t17722 + t17725;
  t17811 = -1.*t17198*t17575;
  t17831 = t16378*t17575;
  t18352 = -1.*t17297*t17575;
  t18362 = -1.*t17198*t17525;
  t18418 = t16470*t17575;
  t18426 = t16378*t17525;
  t17813 = -1.*t17444*t17551;
  t17816 = -1.*t17330*t17594;
  t17817 = t17811 + t17813 + t17816;
  t17834 = t17787*t17551;
  t17837 = t16887*t17594;
  t17842 = t17831 + t17834 + t17837;
  t17869 = t17040*t17575;
  t17911 = -1.*t16378*t17575;
  t17872 = t16438*t16949*t17551;
  t17873 = -1.*t16447*t16949*t17594;
  t17879 = t17869 + t17872 + t17873;
  t18049 = Power(t16438,2);
  t18054 = Power(t16447,2);
  t18580 = t16949*t17575;
  t18599 = t17040*t17525;
  t18608 = -1.*t16470*t17575;
  t18619 = -1.*t16378*t17525;
  t17913 = -1.*t17787*t17551;
  t17914 = -1.*t16887*t17594;
  t17915 = t17911 + t17913 + t17914;
  t17924 = var2[0]*t16438*t17923;
  t17925 = t8782*t16447*t17923;
  t17926 = t16431*t16470;
  t17927 = t17925 + t17926;
  t17928 = var2[1]*t17927;
  t17929 = -1.*t16431*t16447*t17923;
  t17931 = t8782*t16470;
  t17932 = t17929 + t17931;
  t17933 = var2[2]*t17932;
  t17934 = -1.*t16949*t17525;
  t17935 = t17577 + t17934;
  t17936 = t17297*t17935;
  t18714 = -0.15121*t9233;
  t18716 = -1.*t9233*t17508;
  t18718 = t18714 + t18716;
  t18700 = 0.15121*t16318;
  t18709 = t18700 + t17511;
  t17963 = -1.*t17962*t17525;
  t18727 = t9177*t18718;
  t18731 = -1.*t18709*t16353;
  t18732 = t18727 + t18731;
  t18736 = t9177*t18709;
  t18741 = t18718*t16353;
  t18742 = t18736 + t18741;
  t18021 = t18010*t17525;
  t18029 = t17461*t17232;
  t18032 = t17297*t17525;
  t18033 = t18029 + t17695 + t18032;
  t18034 = t16949*t18033;
  t18043 = t16438*t18010*t17601;
  t18745 = -1.*t17040*t18742;
  t18066 = -1.*t16438*t17962*t17551;
  t18075 = t16447*t17962*t17594;
  t18752 = t17198*t18742;
  t18087 = t16438*t18010*t17551;
  t18090 = -1.*t16447*t18010*t17594;
  t18097 = t16438*t17962*t17729;
  t18106 = var2[0]*t16438*t17962;
  t18108 = t8782*t16949;
  t18173 = -1.*t16431*t16447*t17962;
  t18177 = t18108 + t18173;
  t18203 = var2[2]*t18177;
  t18286 = t16431*t16949;
  t18288 = t8782*t16447*t17962;
  t18312 = t18286 + t18288;
  t18337 = var2[1]*t18312;
  t18355 = -1.*t18010*t17525;
  t18390 = -1.*t17461*t17232;
  t18400 = -1.*t17297*t17525;
  t18401 = t18390 + t17811 + t18400;
  t18410 = t16470*t18401;
  t18419 = t17923*t17525;
  t18439 = t17461*t16444;
  t18441 = t16470*t17525;
  t18442 = t18439 + t17831 + t18441;
  t18452 = t17297*t18442;
  t18814 = -1.*t17198*t18742;
  t18476 = -1.*t16438*t18010*t17551;
  t18478 = t16447*t18010*t17594;
  t18822 = t16378*t18742;
  t18504 = t16438*t17923*t17551;
  t18506 = -1.*t16447*t17923*t17594;
  t18514 = t16438*t17923*t17817;
  t18515 = t16438*t18010*t17842;
  t18527 = var2[0]*t16438*t18010;
  t18529 = t8782*t16447*t18010;
  t18532 = t16431*t17297;
  t18534 = t18529 + t18532;
  t18536 = var2[1]*t18534;
  t18537 = -1.*t16431*t16447*t18010;
  t18550 = t8782*t17297;
  t18551 = t18537 + t18550;
  t18552 = var2[2]*t18551;
  t18555 = t16949*t17525;
  t18556 = t17869 + t18555;
  t18559 = t16470*t18556;
  t18589 = t17962*t17525;
  t18614 = -1.*t17923*t17525;
  t18626 = -1.*t17461*t16444;
  t18627 = -1.*t16470*t17525;
  t18629 = t18626 + t17911 + t18627;
  t18632 = t16949*t18629;
  t18643 = t16438*t17923*t17879;
  t18859 = t17040*t18742;
  t18646 = t16438*t17962*t17551;
  t18648 = -1.*t16447*t17962*t17594;
  t18867 = -1.*t16378*t18742;
  t18663 = -1.*t16438*t17923*t17551;
  t18664 = t16447*t17923*t17594;
  t18669 = t16438*t17962*t17915;
  t18902 = t9278*t11816;
  t18914 = -1.*t9263*t15711;
  t18916 = t18902 + t18914;
  t18955 = t16318*t9177*t18916;
  t18957 = -1.*t9233*t18916*t16353;
  t18959 = t18955 + t18957;
  t18966 = t9177*t9233*t18916;
  t18972 = t16318*t18916*t16353;
  t18973 = t18966 + t18972;
  t18985 = t16438*t16283;
  t18987 = -1.*t16447*t18959;
  t18992 = t18985 + t18987;
  t19048 = -0.28121*t11816;
  t19053 = -1.*t17458*t11816;
  t19062 = 0.305*t9263*t15711;
  t19069 = t19048 + t19053 + t19062;
  t19071 = t9177*t9233*t19069;
  t19075 = t16318*t19069*t16353;
  t19092 = t19071 + t19075;
  t19107 = t16318*t9177*t19069;
  t19124 = -1.*t9233*t19069*t16353;
  t19143 = t19107 + t19124;
  t19098 = -1.*t17040*t19092;
  t19171 = 0.28121*t9263;
  t19172 = t19171 + t17505 + t17507;
  t19177 = t19092*t17198;
  t19193 = t19172*t16447;
  t19200 = t16438*t19143;
  t19201 = t19193 + t19200;
  t19206 = t16438*t19172;
  t19208 = -1.*t16447*t19143;
  t19219 = t19206 + t19208;
  t19257 = t17461*t16283;
  t19262 = t16444*t19172;
  t19325 = Power(t16318,2);
  t19340 = Power(t9233,2);
  t19290 = -1.*t19172*t17232;
  t19418 = t19092*t16378;
  t19426 = t18973*t17575;
  t18953 = t16283*t16447;
  t18961 = t16438*t18959;
  t18962 = t18953 + t18961;
  t19456 = -1.*t19092*t17198;
  t16906 = t16431*t16378;
  t16910 = -1.*t8782*t16887;
  t16912 = t16906 + t16910;
  t19553 = t17040*t19092;
  t19583 = -1.*t19092*t16378;
  t19589 = -1.*t18973*t17575;
  t18917 = -0.15121*t18916;
  t18921 = -0.15121*t16444;
  t18932 = t18917 + t18921;
  t18934 = var2[15]*t18932;
  t18937 = -1.*t9233*t17512;
  t18942 = t16318*t17519;
  t18948 = t18937 + t18942;
  t17389 = t16431*t17198;
  t17395 = -1.*t8782*t17330;
  t17402 = t17389 + t17395;
  t19690 = 0.305*t9278*t11816;
  t19697 = t19690 + t17460;
  t19698 = t9177*t9233*t19697;
  t19699 = t16318*t19697*t16353;
  t19700 = t19698 + t19699;
  t19709 = t16318*t9177*t19697;
  t19710 = -1.*t9233*t19697*t16353;
  t19711 = t19709 + t19710;
  t19720 = t9177*t9233*t17232;
  t19721 = t16318*t17232*t16353;
  t19722 = t19720 + t19721;
  t19704 = -1.*t17040*t19700;
  t19733 = -0.305*t9263*t9278;
  t19736 = -0.305*t11816*t15711;
  t19742 = t19733 + t19736;
  t19761 = t16318*t9177*t17232;
  t19764 = -1.*t9233*t17232*t16353;
  t19767 = t19761 + t19764;
  t19749 = t19700*t17198;
  t19757 = t19722*t17575;
  t19791 = t19742*t16447;
  t19792 = t16438*t19711;
  t19795 = t19791 + t19792;
  t19799 = t16438*t19742;
  t19800 = -1.*t16447*t19711;
  t19801 = t19799 + t19800;
  t19807 = t18916*t16447;
  t19809 = t16438*t19767;
  t19814 = t19807 + t19809;
  t19244 = t16283*t17508;
  t19245 = t18439 + t19244;
  t19266 = -1.*t16444*t17508;
  t19272 = t19266 + t18390;
  t19363 = -1.*t16318*t16444*t17512;
  t19372 = -1.*t9233*t16444*t17519;
  t19374 = t18390 + t19363 + t19372;
  t19866 = t16444*t19742;
  t19403 = t16318*t16283*t17512;
  t19407 = t9233*t16283*t17519;
  t19408 = t18439 + t19403 + t19407;
  t19870 = -1.*t18916*t17461;
  t19877 = -1.*t19742*t17232;
  t19977 = t19700*t16378;
  t19993 = -1.*t19700*t17198;
  t19995 = -1.*t19722*t17575;
  t19826 = t16438*t18916;
  t19828 = -1.*t16447*t19767;
  t19833 = t19826 + t19828;
  t19530 = t9233*t17512;
  t19531 = -1.*t16318*t17519;
  t19540 = t19530 + t19531;
  t20062 = t17040*t19700;
  t20078 = -1.*t19700*t16378;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t16431*t16887 - 1.*t16378*t8782)*var2[1] + t16912*var2[2];
  p_output1[10]=(t16431*t16447*t16949 - 1.*t17040*t8782)*var2[1] + (t16431*t17040 + t16447*t16949*t8782)*var2[2];
  p_output1[11]=(-1.*t16431*t17330 - 1.*t17198*t8782)*var2[1] + t17402*var2[2];
  p_output1[12]=t16887*var2[0] - 1.*t17430*t8782*var2[1] + t16431*t17430*var2[2] + (t17444*(t16447*t16949*t17538 + t16447*t16949*t17551) + t17330*t17601 + t16438*t16949*(t17330*t17538 + t17330*t17551 + t17444*t17594 + t17594*t17627) - 1.*t16447*t16949*t17729)*var2[3];
  p_output1[13]=-1.*t16447*t16949*var2[0] + t16438*t16949*t8782*var2[1] - 1.*t16431*t16438*t16949*var2[2] + ((-1.*t17330*t17538 - 1.*t17330*t17551 - 1.*t17444*t17594 - 1.*t17594*t17627)*t17787 + t17444*(t16887*t17538 + t16887*t17551 + t17430*t17594 + t17594*t17787) + t16887*t17817 + t17330*t17842)*var2[3];
  p_output1[14]=t17330*var2[0] - 1.*t17627*t8782*var2[1] + t16431*t17627*var2[2] + ((-1.*t16447*t16949*t17538 - 1.*t16447*t16949*t17551)*t17787 + t16438*t16949*(-1.*t16887*t17538 - 1.*t16887*t17551 - 1.*t17430*t17594 - 1.*t17594*t17787) + t16887*t17879 - 1.*t16447*t16949*t17915)*var2[3];
  p_output1[15]=t17924 + t17928 + t17933 + (t18043 + t17444*(t17959 + t17966 - 1.*t16949*t17957*t18049 - 1.*t16949*t17957*t18054 + t18066 + t18075) + t16438*t16949*(-1.*t16447*t17330*t17957 + t16438*t17444*t17957 + t17973 + t18022 + t18087 + t18090) + t18097)*var2[3] + (t17936 + t17198*(-1.*t16949*t17957 + t17959 + t17963 + t17966) + t17040*(t17297*t17957 + t17973 + t18021 + t18022) + t18034)*var2[4];
  p_output1[16]=t18106 + t18203 + t18337 + (t17787*(t16447*t17330*t17957 - 1.*t16438*t17444*t17957 + t18352 + t18362 + t18476 + t18478) + t17444*(-1.*t16447*t16887*t17957 + t16438*t17787*t17957 + t18418 + t18426 + t18504 + t18506) + t18514 + t18515)*var2[3] + (t16378*(-1.*t17297*t17957 + t18352 + t18355 + t18362) + t18410 + t17198*(t16470*t17957 + t18418 + t18419 + t18426) + t18452)*var2[4];
  p_output1[17]=t18527 + t18536 + t18552 + (t18643 + t17787*(t16949*t17957*t18049 + t16949*t17957*t18054 + t18580 + t18599 + t18646 + t18648) + t16438*t16949*(t16447*t16887*t17957 - 1.*t16438*t17787*t17957 + t18608 + t18619 + t18663 + t18664) + t18669)*var2[3] + (t18559 + t16378*(t16949*t17957 + t18580 + t18589 + t18599) + t17040*(-1.*t16470*t17957 + t18608 + t18614 + t18619) + t18632)*var2[4];
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
  p_output1[45]=t17924 + t17928 + t17933 + (t18043 + t18097 + t17444*(t17959 + t18066 + t18075 - 1.*t16949*t18049*t18732 - 1.*t16949*t18054*t18732 + t18745) + t16438*t16949*(t17973 + t18087 + t18090 - 1.*t16447*t17330*t18732 + t16438*t17444*t18732 + t18752))*var2[3] + (t17936 + t18034 + t17198*(t17959 + t17963 - 1.*t16949*t18732 + t18745) + t17040*(t17973 + t18021 + t17297*t18732 + t18752))*var2[4] + t17232*(-1.*t16318*t17512 + t16318*t18709 - 1.*t17519*t9233 - 1.*t18718*t9233)*var2[5];
  p_output1[46]=t18106 + t18203 + t18337 + (t18514 + t18515 + t17787*(t18352 + t18476 + t18478 + t16447*t17330*t18732 - 1.*t16438*t17444*t18732 + t18814) + t17444*(t18418 + t18504 + t18506 - 1.*t16447*t16887*t18732 + t16438*t17787*t18732 + t18822))*var2[3] + (t18410 + t18452 + t16378*(t18352 + t18355 - 1.*t17297*t18732 + t18814) + t17198*(t18418 + t18419 + t16470*t18732 + t18822))*var2[4] + (t17232*(t16283*t16318*t17519 + t16283*t16318*t18718 - 1.*t16283*t17512*t9233 + t16283*t18709*t9233) + t16444*(-1.*t16318*t16444*t17519 - 1.*t16318*t16444*t18718 + t16444*t17512*t9233 - 1.*t16444*t18709*t9233))*var2[5];
  p_output1[47]=t18527 + t18536 + t18552 + (t18643 + t18669 + t17787*(t18580 + t18646 + t18648 + t16949*t18049*t18732 + t16949*t18054*t18732 + t18859) + t16438*t16949*(t18608 + t18663 + t18664 + t16447*t16887*t18732 - 1.*t16438*t17787*t18732 + t18867))*var2[3] + (t18559 + t18632 + t16378*(t18580 + t18589 + t16949*t18732 + t18859) + t17040*(t18608 + t18614 - 1.*t16470*t18732 + t18867))*var2[4] + t16444*(t16318*t17512 - 1.*t16318*t18709 + t17519*t9233 + t18718*t9233)*var2[5];
  p_output1[48]=t18934 + t18962*var2[0] + (t16431*t18973 - 1.*t18992*t8782)*var2[1] + (t16431*t18992 + t18973*t8782)*var2[2] + (t17601*t17787 + t17444*(t19098 - 1.*t16438*t16949*t19201 + t16447*t16949*t19219) + t16438*t16949*(t17831 + t17834 + t17837 + t19177 + t17444*t19201 + t17330*t19219))*var2[3] + (t16378*t17935 + t17198*(t19098 - 1.*t16949*t19143) + t17040*(t17831 + t18439 + t18441 + t17297*t19143 + t17232*t19172 + t19177))*var2[4] + t16444*t18948*var2[5];
  p_output1[49]=(t17787*t17842 + t17817*t18962 + t17444*(t17551*t18962 + t17594*t18992 + t17787*t19201 + t16887*t19219 + t19418 + t19426) + t17787*(t17911 + t17913 + t17914 - 1.*t17444*t19201 - 1.*t17330*t19219 + t19456))*var2[3] + (t16378*t18442 + t18401*t18973 + t17198*(t17525*t18959 + t16470*t19143 + t19257 + t19262 + t19418 + t19426) + t16378*(t17911 + t18626 + t18627 - 1.*t17297*t19143 + t19290 + t19456))*var2[4] + (t16283*t19374 + t16444*t19408 + t16444*(-1.*t16283*t16318*t17512 + t18626 + t19290 - 1.*t16444*t19069*t19325 - 1.*t16444*t19069*t19340 - 1.*t16283*t17519*t9233) + t17232*(t16318*t17512*t18916 + t19257 + t19262 + t16283*t19069*t19325 + t16283*t19069*t19340 + t17519*t18916*t9233))*var2[5] + (t16444*t19245 + t17232*(t17508*t18916 + t16283*t19069 + t19257 + t19262) + t16283*t19272 + t16444*(-1.*t16283*t17508 + t18626 - 1.*t16444*t19069 + t19290))*var2[15];
  p_output1[50]=t17787*var2[0] + t16912*var2[1] + (t16431*t16887 + t16378*t8782)*var2[2] + (t17879*t18962 + t17787*(t16438*t16949*t19201 - 1.*t16447*t16949*t19219 + t19553) + t16438*t16949*(-1.*t17551*t18962 - 1.*t17594*t18992 - 1.*t17787*t19201 - 1.*t16887*t19219 + t19583 + t19589))*var2[3] + (t18556*t18973 + t16378*(t16949*t19143 + t19553) + t17040*(-1.*t16283*t17461 - 1.*t17525*t18959 - 1.*t16470*t19143 - 1.*t16444*t19172 + t19583 + t19589))*var2[4] + t16283*t19540*var2[5];
  p_output1[51]=t18934 + t17444*var2[0] + t17402*var2[1] + (t16431*t17330 + t17198*t8782)*var2[2] + (t17444*(t19704 - 1.*t16438*t16949*t19795 + t16447*t16949*t19801) + t17601*t19814 + t16438*t16949*(t19749 + t19757 + t17444*t19795 + t17330*t19801 + t17551*t19814 + t17594*t19833))*var2[3] + (t17198*(t19704 - 1.*t16949*t19711) + t17935*t19722 + t17040*(t17461*t18916 + t17297*t19711 + t17232*t19742 + t19749 + t19757 + t17525*t19767))*var2[4] + t18916*t18948*var2[5] + (0.28121*t9278 + t17458*t9278 - 0.305*Power(t9278,2))*var2[16];
  p_output1[52]=(t17444*t17817 + t17842*t19814 + t17444*(t17695 + t17722 + t17725 + t17787*t19795 + t16887*t19801 + t19977) + t17787*(-1.*t17444*t19795 - 1.*t17330*t19801 - 1.*t17551*t19814 - 1.*t17594*t19833 + t19993 + t19995))*var2[3] + (t17198*t18401 + t18442*t19722 + t17198*(t17695 + t18029 + t18032 + t16470*t19711 + t19866 + t19977) + t16378*(-1.*t17297*t19711 - 1.*t17525*t19767 + t19870 + t19877 + t19993 + t19995))*var2[4] + (t17232*t19374 + t18916*t19408 + t17232*(t16318*t16444*t17512 + t18029 + t16283*t19325*t19697 + t16283*t19340*t19697 + t19866 + t16444*t17519*t9233) + t16444*(-1.*t16318*t17232*t17512 - 1.*t16444*t19325*t19697 - 1.*t16444*t19340*t19697 + t19870 + t19877 - 1.*t17232*t17519*t9233))*var2[5] + (t18916*t19245 + t17232*t19272 + t17232*(t16444*t17508 + t18029 + t16283*t19697 + t19866) + t16444*(-1.*t17232*t17508 - 1.*t16444*t19697 + t19870 + t19877))*var2[15];
  p_output1[53]=t19814*var2[0] + (t16431*t19722 - 1.*t19833*t8782)*var2[1] + (t16431*t19833 + t19722*t8782)*var2[2] + (t17444*t17879 + t17787*(t16438*t16949*t19795 - 1.*t16447*t16949*t19801 + t20062) + t16438*t16949*(t17811 + t17813 + t17816 - 1.*t17787*t19795 - 1.*t16887*t19801 + t20078))*var2[3] + (t17198*t18556 + t16378*(t16949*t19711 + t20062) + t17040*(t17811 + t18390 + t18400 - 1.*t16470*t19711 - 1.*t16444*t19742 + t20078))*var2[4] + t17232*t19540*var2[5] + (-0.28121*t15711 - 1.*t15711*t17458 + 0.305*t15711*t9278)*var2[16];
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

#include "dJh_RrFoot_DiagonalStance2.hh"

namespace SymFunction
{

void dJh_RrFoot_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
