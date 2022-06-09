/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 14:41:08 GMT+02:00
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
  double t6318;
  double t6289;
  double t6307;
  double t6322;
  double t6311;
  double t6323;
  double t6324;
  double t6280;
  double t6326;
  double t6327;
  double t6328;
  double t6287;
  double t6329;
  double t6381;
  double t6325;
  double t6330;
  double t6331;
  double t6269;
  double t6388;
  double t6389;
  double t6391;
  double t6393;
  double t6395;
  double t6397;
  double t6398;
  double t6402;
  double t6404;
  double t6416;
  double t6417;
  double t6418;
  double t6437;
  double t6440;
  double t6444;
  double t6436;
  double t6450;
  double t6451;
  double t6456;
  double t6457;
  double t6460;
  double t6461;
  double t6463;
  double t6464;
  double t6480;
  double t6481;
  double t6485;
  double t6511;
  double t6512;
  double t6513;
  double t6515;
  double t6516;
  double t6517;
  double t6518;
  double t6519;
  double t6520;
  double t6510;
  double t6514;
  double t6521;
  double t6522;
  double t6509;
  double t6523;
  double t6524;
  double t6526;
  double t6529;
  double t6530;
  double t6531;
  double t6532;
  double t6535;
  double t6536;
  double t6537;
  double t6541;
  double t6545;
  double t6546;
  double t6547;
  double t6548;
  double t6549;
  double t6551;
  double t6565;
  double t6566;
  double t6567;
  double t6562;
  double t6563;
  double t6564;
  double t6556;
  double t6559;
  double t6560;
  double t6502;
  double t6503;
  double t6504;
  double t6525;
  double t6553;
  double t6554;
  double t6575;
  double t6576;
  double t6577;
  double t6569;
  double t6570;
  double t6571;
  double t6612;
  double t6615;
  double t6616;
  double t6583;
  double t6584;
  double t6585;
  double t6699;
  double t6700;
  double t6701;
  double t6578;
  double t6596;
  double t6727;
  double t6728;
  double t6729;
  double t6735;
  double t6744;
  double t6747;
  double t6748;
  double t6579;
  double t6580;
  double t6581;
  double t6750;
  double t6754;
  double t6597;
  double t6598;
  double t6599;
  double t6624;
  double t6635;
  double t6790;
  double t6792;
  double t6625;
  double t6626;
  double t6627;
  double t6805;
  double t6807;
  double t6636;
  double t6637;
  double t6638;
  double t6660;
  double t6679;
  double t6860;
  double t6666;
  double t6667;
  double t6668;
  double t6867;
  double t6872;
  double t6683;
  double t6688;
  double t6689;
  double t6723;
  double t6739;
  double t6918;
  double t6919;
  double t6920;
  double t6928;
  double t6929;
  double t6953;
  double t6954;
  double t6955;
  double t6724;
  double t6725;
  double t6925;
  double t6930;
  double t6938;
  double t6940;
  double t6741;
  double t6742;
  double t6964;
  double t6965;
  double t6969;
  double t6973;
  double t6974;
  double t6982;
  double t6984;
  double t6985;
  double t6987;
  double t6988;
  double t6989;
  double t6991;
  double t6992;
  double t6993;
  double t6995;
  double t6996;
  double t6998;
  double t6800;
  double t6796;
  double t7000;
  double t7002;
  double t7003;
  double t7022;
  double t7024;
  double t6797;
  double t6798;
  double t7032;
  double t7034;
  double t6801;
  double t6802;
  double t7053;
  double t7055;
  double t6946;
  double t6948;
  double t6949;
  double t7060;
  double t7061;
  double t7009;
  double t7010;
  double t7011;
  double t6843;
  double t6875;
  double t6850;
  double t6851;
  double t7089;
  double t7091;
  double t6966;
  double t7095;
  double t7097;
  double t6876;
  double t6877;
  double t7116;
  double t7119;
  double t7123;
  double t7125;
  double t6913;
  double t6914;
  double t7148;
  double t7149;
  double t7150;
  double t7165;
  double t7166;
  double t6473;
  double t6474;
  double t6477;
  double t7158;
  double t7159;
  double t7160;
  double t7161;
  double t7156;
  double t7164;
  double t7167;
  double t7189;
  double t7190;
  double t7191;
  double t7180;
  double t7181;
  double t7182;
  double t7185;
  double t7186;
  double t7187;
  double t7196;
  double t7197;
  double t7198;
  double t7192;
  double t7195;
  double t7200;
  double t7206;
  double t7207;
  double t7208;
  double t7210;
  double t7211;
  double t7212;
  double t7214;
  double t7215;
  double t7216;
  double t7027;
  double t7028;
  double t7029;
  double t7037;
  double t7038;
  double t7039;
  double t7168;
  double t6933;
  double t6934;
  double t7236;
  double t7237;
  double t7244;
  double t7242;
  double t7234;
  double t7238;
  double t7268;
  double t7271;
  double t7273;
  double t7221;
  double t7222;
  double t7223;
  double t7085;
  double t7086;
  double t7296;
  double t7315;
  double t7319;
  double t7338;
  double t7339;
  double t7340;
  double t7352;
  double t7353;
  double t7354;
  double t7362;
  double t7363;
  double t7364;
  double t7368;
  double t7369;
  double t7370;
  double t7372;
  double t7373;
  double t7374;
  double t7349;
  double t7350;
  double t7355;
  double t7388;
  double t7389;
  double t7390;
  double t7384;
  double t7385;
  double t7386;
  double t7391;
  double t7394;
  double t7401;
  double t7402;
  double t7403;
  double t7405;
  double t7406;
  double t7407;
  double t7100;
  double t7101;
  double t7249;
  double t7250;
  double t7256;
  double t7257;
  double t7420;
  double t7425;
  double t7430;
  double t7426;
  double t7428;
  double t7421;
  double t7448;
  double t7451;
  double t7361;
  double t7365;
  double t7366;
  double t7455;
  double t6409;
  double t6410;
  double t6411;
  double t7484;
  double t7486;
  double t7502;
  double t7505;
  double t7508;
  t6318 = Cos(var1[16]);
  t6289 = Cos(var1[17]);
  t6307 = Sin(var1[16]);
  t6322 = Sin(var1[17]);
  t6311 = t6289*t6307;
  t6323 = -1.*t6318*t6322;
  t6324 = t6311 + t6323;
  t6280 = Cos(var1[5]);
  t6326 = t6318*t6289;
  t6327 = t6307*t6322;
  t6328 = t6326 + t6327;
  t6287 = Sin(var1[15]);
  t6329 = Sin(var1[5]);
  t6381 = Cos(var1[3]);
  t6325 = -1.*t6280*t6287*t6324;
  t6330 = t6328*t6329;
  t6331 = t6325 + t6330;
  t6269 = Sin(var1[3]);
  t6388 = Cos(var1[15]);
  t6389 = Cos(var1[4]);
  t6391 = t6388*t6389*t6324;
  t6393 = Sin(var1[4]);
  t6395 = t6280*t6328;
  t6397 = t6287*t6324*t6329;
  t6398 = t6395 + t6397;
  t6402 = -1.*t6393*t6398;
  t6404 = t6391 + t6402;
  t6416 = t6389*t6287;
  t6417 = t6388*t6393*t6329;
  t6418 = t6416 + t6417;
  t6437 = -1.*t6289*t6307;
  t6440 = t6318*t6322;
  t6444 = t6437 + t6440;
  t6436 = -1.*t6280*t6287*t6328;
  t6450 = t6444*t6329;
  t6451 = t6436 + t6450;
  t6456 = t6388*t6389*t6328;
  t6457 = t6280*t6444;
  t6460 = t6287*t6328*t6329;
  t6461 = t6457 + t6460;
  t6463 = -1.*t6393*t6461;
  t6464 = t6456 + t6463;
  t6480 = -1.*t6388*t6324*t6393;
  t6481 = -1.*t6389*t6398;
  t6485 = t6480 + t6481;
  t6511 = -0.0641*t6289;
  t6512 = -0.28*t6322;
  t6513 = t6511 + t6512;
  t6515 = -1.*t6289;
  t6516 = 1. + t6515;
  t6517 = -0.575*t6516;
  t6518 = -0.295*t6289;
  t6519 = -0.0641*t6322;
  t6520 = t6517 + t6518 + t6519;
  t6510 = 0.325*t6307;
  t6514 = t6318*t6513;
  t6521 = t6307*t6520;
  t6522 = t6510 + t6514 + t6521;
  t6509 = -0.068*t6287;
  t6523 = t6388*t6522;
  t6524 = t6509 + t6523;
  t6526 = -1.*t6318;
  t6529 = 1. + t6526;
  t6530 = -0.325*t6529;
  t6531 = -1.*t6307*t6513;
  t6532 = t6318*t6520;
  t6535 = t6530 + t6531 + t6532;
  t6536 = t6280*t6535;
  t6537 = -1.*t6388;
  t6541 = 1. + t6537;
  t6545 = -0.1575*t6541;
  t6546 = -0.2255*t6388;
  t6547 = -1.*t6287*t6522;
  t6548 = t6545 + t6546 + t6547;
  t6549 = -1.*t6548*t6329;
  t6551 = t6536 + t6549;
  t6565 = t6389*t6524;
  t6566 = -1.*t6393*t6551;
  t6567 = t6565 + t6566;
  t6562 = t6287*t6393;
  t6563 = -1.*t6388*t6389*t6329;
  t6564 = t6562 + t6563;
  t6556 = t6524*t6393;
  t6559 = t6389*t6551;
  t6560 = t6556 + t6559;
  t6502 = t6388*t6328*t6393;
  t6503 = t6389*t6461;
  t6504 = t6502 + t6503;
  t6525 = -1.*t6524*t6393;
  t6553 = -1.*t6389*t6551;
  t6554 = t6525 + t6553;
  t6575 = t6280*t6548;
  t6576 = t6535*t6329;
  t6577 = t6575 + t6576;
  t6569 = -1.*t6287*t6393;
  t6570 = t6388*t6389*t6329;
  t6571 = t6569 + t6570;
  t6612 = t6388*t6324*t6393;
  t6615 = t6389*t6398;
  t6616 = t6612 + t6615;
  t6583 = -1.*t6388*t6328*t6393;
  t6584 = -1.*t6389*t6461;
  t6585 = t6583 + t6584;
  t6699 = t6280*t6287*t6324;
  t6700 = -1.*t6328*t6329;
  t6701 = t6699 + t6700;
  t6578 = -1.*t6388*t6280*t6577;
  t6596 = t6577*t6451;
  t6727 = -1.*t6280*t6548;
  t6728 = -1.*t6535*t6329;
  t6729 = t6727 + t6728;
  t6735 = t6388*t6329*t6577;
  t6744 = t6280*t6287*t6328;
  t6747 = -1.*t6444*t6329;
  t6748 = t6744 + t6747;
  t6579 = -1.*t6564*t6560;
  t6580 = -1.*t6418*t6567;
  t6581 = t6578 + t6579 + t6580;
  t6750 = t6551*t6451;
  t6754 = t6577*t6461;
  t6597 = t6560*t6504;
  t6598 = t6567*t6464;
  t6599 = t6596 + t6597 + t6598;
  t6624 = t6577*t6331;
  t6635 = -1.*t6577*t6451;
  t6790 = t6577*t6398;
  t6792 = t6551*t6331;
  t6625 = t6560*t6616;
  t6626 = t6567*t6404;
  t6627 = t6624 + t6625 + t6626;
  t6805 = -1.*t6551*t6451;
  t6807 = -1.*t6577*t6461;
  t6636 = -1.*t6560*t6504;
  t6637 = -1.*t6567*t6464;
  t6638 = t6635 + t6636 + t6637;
  t6660 = t6388*t6280*t6577;
  t6679 = -1.*t6577*t6331;
  t6860 = -1.*t6388*t6329*t6577;
  t6666 = t6564*t6560;
  t6667 = t6418*t6567;
  t6668 = t6660 + t6666 + t6667;
  t6867 = -1.*t6577*t6398;
  t6872 = -1.*t6551*t6331;
  t6683 = -1.*t6560*t6616;
  t6688 = -1.*t6567*t6404;
  t6689 = t6679 + t6683 + t6688;
  t6723 = -1.*t6287*t6524;
  t6739 = t6388*t6524*t6328;
  t6918 = 0.068*t6287;
  t6919 = -1.*t6388*t6522;
  t6920 = t6918 + t6919;
  t6928 = -0.068*t6388;
  t6929 = t6928 + t6547;
  t6953 = -1.*t6389*t6287*t6324;
  t6954 = -1.*t6388*t6324*t6393*t6329;
  t6955 = t6953 + t6954;
  t6724 = t6388*t6329*t6551;
  t6725 = t6723 + t6724 + t6578;
  t6925 = -1.*t6388*t6524;
  t6930 = -1.*t6287*t6929;
  t6938 = -1.*t6287*t6524*t6328;
  t6940 = t6388*t6929*t6328;
  t6741 = t6551*t6461;
  t6742 = t6739 + t6596 + t6741;
  t6964 = Power(t6280,2);
  t6965 = -1.*t6388*t6964*t6920;
  t6969 = t6280*t6287*t6577;
  t6973 = -1.*t6388*t6280*t6328*t6577;
  t6974 = t6280*t6920*t6451;
  t6982 = -1.*t6287*t6328*t6393;
  t6984 = t6388*t6389*t6328*t6329;
  t6985 = t6982 + t6984;
  t6987 = t6929*t6393;
  t6988 = -1.*t6389*t6920*t6329;
  t6989 = t6987 + t6988;
  t6991 = t6389*t6929;
  t6992 = t6920*t6393*t6329;
  t6993 = t6991 + t6992;
  t6995 = t6388*t6393;
  t6996 = t6389*t6287*t6329;
  t6998 = t6995 + t6996;
  t6800 = -1.*t6388*t6524*t6328;
  t6796 = t6388*t6524*t6324;
  t7000 = t6388*t6389;
  t7002 = -1.*t6287*t6393*t6329;
  t7003 = t7000 + t7002;
  t7022 = -1.*t6287*t6524*t6324;
  t7024 = t6388*t6929*t6324;
  t6797 = t6551*t6398;
  t6798 = t6796 + t6797 + t6624;
  t7032 = t6287*t6524*t6328;
  t7034 = -1.*t6388*t6929*t6328;
  t6801 = -1.*t6551*t6461;
  t6802 = t6800 + t6635 + t6801;
  t7053 = -1.*t6388*t6280*t6324*t6577;
  t7055 = t6280*t6920*t6331;
  t6946 = -1.*t6287*t6324*t6393;
  t6948 = t6388*t6389*t6324*t6329;
  t6949 = t6946 + t6948;
  t7060 = t6388*t6280*t6328*t6577;
  t7061 = -1.*t6280*t6920*t6451;
  t7009 = -1.*t6389*t6287*t6328;
  t7010 = -1.*t6388*t6328*t6393*t6329;
  t7011 = t7009 + t7010;
  t6843 = t6287*t6524;
  t6875 = -1.*t6388*t6524*t6324;
  t6850 = -1.*t6388*t6329*t6551;
  t6851 = t6843 + t6850 + t6660;
  t7089 = t6388*t6524;
  t7091 = t6287*t6929;
  t6966 = Power(t6329,2);
  t7095 = t6287*t6524*t6324;
  t7097 = -1.*t6388*t6929*t6324;
  t6876 = -1.*t6551*t6398;
  t6877 = t6875 + t6876 + t6679;
  t7116 = t6388*t6964*t6920;
  t7119 = -1.*t6280*t6287*t6577;
  t7123 = t6388*t6280*t6324*t6577;
  t7125 = -1.*t6280*t6920*t6331;
  t6913 = -1.*t6388*t6548;
  t6914 = t6723 + t6913;
  t7148 = -1.*t6318*t6289;
  t7149 = -1.*t6307*t6322;
  t7150 = t7148 + t7149;
  t7165 = 0.325*t6318;
  t7166 = t7165 + t6531 + t6532;
  t6473 = t6381*t6451;
  t6474 = -1.*t6269*t6464;
  t6477 = t6473 + t6474;
  t7158 = -0.325*t6307;
  t7159 = -1.*t6318*t6513;
  t7160 = -1.*t6307*t6520;
  t7161 = t7158 + t7159 + t7160;
  t7156 = t6388*t6524*t6444;
  t7164 = Power(t6388,2);
  t7167 = t7164*t7166*t6328;
  t7189 = -1.*t6280*t6287*t7166;
  t7190 = t7161*t6329;
  t7191 = t7189 + t7190;
  t7180 = -1.*t6280*t6287*t6444;
  t7181 = t7150*t6329;
  t7182 = t7180 + t7181;
  t7185 = t6280*t7161;
  t7186 = t6287*t7166*t6329;
  t7187 = t7185 + t7186;
  t7196 = t6280*t7150;
  t7197 = t6287*t6444*t6329;
  t7198 = t7196 + t7197;
  t7192 = -1.*t6388*t6280*t7191;
  t7195 = t7191*t6451;
  t7200 = t6577*t7182;
  t7206 = t6388*t6444*t6393;
  t7207 = t6389*t7198;
  t7208 = t7206 + t7207;
  t7210 = t6388*t7166*t6393;
  t7211 = t6389*t7187;
  t7212 = t7210 + t7211;
  t7214 = t6388*t6389*t7166;
  t7215 = -1.*t6393*t7187;
  t7216 = t7214 + t7215;
  t7027 = -1.*t6535*t6444;
  t7028 = t6287*t6548*t6328;
  t7029 = t7027 + t6800 + t7028;
  t7037 = -1.*t6287*t6548*t6324;
  t7038 = t6535*t6328;
  t7039 = t6796 + t7037 + t7038;
  t7168 = Power(t6287,2);
  t6933 = t6535*t6444;
  t6934 = -1.*t6287*t6548*t6328;
  t7236 = -1.*t7161*t6444;
  t7237 = -1.*t6535*t7150;
  t7244 = t7161*t6328;
  t7242 = t7164*t7166*t6324;
  t7234 = -1.*t6388*t6524*t6444;
  t7238 = -1.*t7164*t7166*t6328;
  t7268 = t7191*t6331;
  t7271 = -1.*t7191*t6451;
  t7273 = -1.*t6577*t7182;
  t7221 = t6388*t6389*t6444;
  t7222 = -1.*t6393*t7198;
  t7223 = t7221 + t7222;
  t7085 = t6388*t6548;
  t7086 = t6843 + t7085;
  t7296 = -1.*t7164*t7166*t6324;
  t7315 = t6388*t6280*t7191;
  t7319 = -1.*t7191*t6331;
  t7338 = -0.28*t6289;
  t7339 = 0.0641*t6322;
  t7340 = t7338 + t7339;
  t7352 = t6307*t6513;
  t7353 = t6318*t7340;
  t7354 = t7352 + t7353;
  t7362 = t6280*t6324;
  t7363 = t6287*t7150*t6329;
  t7364 = t7362 + t7363;
  t7368 = -1.*t6280*t6287*t7150;
  t7369 = t6324*t6329;
  t7370 = t7368 + t7369;
  t7372 = t6388*t6389*t7150;
  t7373 = -1.*t6393*t7364;
  t7374 = t7372 + t7373;
  t7349 = -1.*t6307*t7340;
  t7350 = t6514 + t7349;
  t7355 = t7164*t7354*t6328;
  t7388 = -1.*t6280*t6287*t7354;
  t7389 = t7350*t6329;
  t7390 = t7388 + t7389;
  t7384 = t6280*t7350;
  t7385 = t6287*t7354*t6329;
  t7386 = t7384 + t7385;
  t7391 = -1.*t6388*t6280*t7390;
  t7394 = t7390*t6451;
  t7401 = t6388*t7354*t6393;
  t7402 = t6389*t7386;
  t7403 = t7401 + t7402;
  t7405 = t6388*t6389*t7354;
  t7406 = -1.*t6393*t7386;
  t7407 = t7405 + t7406;
  t7100 = t6287*t6548*t6324;
  t7101 = -1.*t6535*t6328;
  t7249 = t6522*t6324;
  t7250 = t7249 + t7038;
  t7256 = -1.*t6522*t6328;
  t7257 = t7027 + t7256;
  t7420 = -1.*t7350*t6444;
  t7425 = t6535*t6324;
  t7430 = t7350*t6328;
  t7426 = t7164*t7354*t6324;
  t7428 = t6388*t6524*t7150;
  t7421 = -1.*t7164*t7354*t6328;
  t7448 = t6577*t7370;
  t7451 = t7390*t6331;
  t7361 = t6388*t7150*t6393;
  t7365 = t6389*t7364;
  t7366 = t7361 + t7365;
  t7455 = -1.*t7390*t6451;
  t6409 = t6381*t6331;
  t6410 = -1.*t6269*t6404;
  t6411 = t6409 + t6410;
  t7484 = -1.*t7164*t7354*t6324;
  t7486 = -1.*t6388*t6524*t7150;
  t7502 = t6388*t6280*t7390;
  t7505 = -1.*t6577*t7370;
  t7508 = -1.*t7390*t6331;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t6269*t6331 - 1.*t6381*t6404)*var2[1] + t6411*var2[2];
  p_output1[10]=(-1.*t6269*t6280*t6388 - 1.*t6381*t6418)*var2[1] + (t6280*t6381*t6388 - 1.*t6269*t6418)*var2[2];
  p_output1[11]=(-1.*t6269*t6451 - 1.*t6381*t6464)*var2[1] + t6477*var2[2];
  p_output1[12]=t6404*var2[0] - 1.*t6269*t6485*var2[1] + t6381*t6485*var2[2] + (t6504*(-1.*t6418*t6554 - 1.*t6418*t6560 - 1.*t6564*t6567 - 1.*t6567*t6571) + t6464*t6581 + t6564*(t6464*t6554 + t6464*t6560 + t6504*t6567 + t6567*t6585) + t6418*t6599)*var2[3];
  p_output1[13]=t6418*var2[0] - 1.*t6269*t6571*var2[1] + t6381*t6571*var2[2] + ((-1.*t6464*t6554 - 1.*t6464*t6560 - 1.*t6504*t6567 - 1.*t6567*t6585)*t6616 + t6504*(t6404*t6554 + t6404*t6560 + t6485*t6567 + t6567*t6616) + t6464*t6627 + t6404*t6638)*var2[3];
  p_output1[14]=t6464*var2[0] - 1.*t6269*t6585*var2[1] + t6381*t6585*var2[2] + ((t6418*t6554 + t6418*t6560 + t6564*t6567 + t6567*t6571)*t6616 + t6564*(-1.*t6404*t6554 - 1.*t6404*t6560 - 1.*t6485*t6567 - 1.*t6567*t6616) + t6404*t6668 + t6418*t6689)*var2[3];
  p_output1[15]=t6389*t6701*var2[0] + (t6381*t6398 + t6269*t6393*t6701)*var2[1] + (t6269*t6398 - 1.*t6381*t6393*t6701)*var2[2] + (-1.*t6280*t6388*t6389*t6599 + t6504*(-1.*t6280*t6388*t6551 + t6280*t6388*t6389*t6560 - 1.*t6280*t6388*t6393*t6567 + t6393*t6418*t6729 - 1.*t6389*t6564*t6729 + t6735) + t6389*t6581*t6748 + t6564*(-1.*t6393*t6464*t6729 + t6389*t6504*t6729 + t6389*t6560*t6748 - 1.*t6393*t6567*t6748 + t6750 + t6754))*var2[3] + (t6461*t6725 + t6451*(t6329*t6388*t6729 + t6735) - 1.*t6329*t6388*t6742 + t6280*t6388*(t6461*t6729 + t6551*t6748 + t6750 + t6754))*var2[4];
  p_output1[16]=-1.*t6280*t6388*t6389*var2[0] + (-1.*t6329*t6381*t6388 - 1.*t6269*t6280*t6388*t6393)*var2[1] + (-1.*t6269*t6329*t6388 + t6280*t6381*t6388*t6393)*var2[2] + (t6389*t6638*t6701 + t6389*t6627*t6748 + t6504*(t6389*t6560*t6701 - 1.*t6393*t6567*t6701 - 1.*t6393*t6404*t6729 + t6389*t6616*t6729 + t6790 + t6792) + t6616*(t6393*t6464*t6729 - 1.*t6389*t6504*t6729 - 1.*t6389*t6560*t6748 + t6393*t6567*t6748 + t6805 + t6807))*var2[3] + (t6451*(t6551*t6701 + t6398*t6729 + t6790 + t6792) + t6461*t6798 + t6398*t6802 + t6331*(-1.*t6461*t6729 - 1.*t6551*t6748 + t6805 + t6807))*var2[4];
  p_output1[17]=t6389*t6748*var2[0] + (t6381*t6461 + t6269*t6393*t6748)*var2[1] + (t6269*t6461 - 1.*t6381*t6393*t6748)*var2[2] + (-1.*t6280*t6388*t6389*t6689 + t6389*t6668*t6701 + t6616*(t6280*t6388*t6551 - 1.*t6280*t6388*t6389*t6560 + t6280*t6388*t6393*t6567 - 1.*t6393*t6418*t6729 + t6389*t6564*t6729 + t6860) + t6564*(-1.*t6389*t6560*t6701 + t6393*t6567*t6701 + t6393*t6404*t6729 - 1.*t6389*t6616*t6729 + t6867 + t6872))*var2[3] + (t6398*t6851 + t6331*(-1.*t6329*t6388*t6729 + t6860) + t6280*t6388*(-1.*t6551*t6701 - 1.*t6398*t6729 + t6867 + t6872) - 1.*t6329*t6388*t6877)*var2[4];
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
  p_output1[45]=t6949*var2[0] + (-1.*t6280*t6324*t6381*t6388 - 1.*t6269*t6955)*var2[1] + (-1.*t6269*t6280*t6324*t6388 + t6381*t6955)*var2[2] + (t6581*t6985 + t6599*t6998 + t6504*(t6965 + t6969 - 1.*t6564*t6989 - 1.*t6418*t6993 - 1.*t6560*t6998 - 1.*t6567*t7003) + t6564*(t6973 + t6974 + t6560*t6985 + t6504*t6989 + t6464*t6993 + t6567*t7011))*var2[3] + (-1.*t6280*t6328*t6388*t6725 - 1.*t6280*t6287*t6742 + t6451*(-1.*t6287*t6329*t6551 + t6925 + t6930 + t6965 - 1.*t6388*t6920*t6966 + t6969) + t6280*t6388*(t6328*t6329*t6388*t6551 - 1.*t6329*t6461*t6920 + t6938 + t6940 + t6973 + t6974))*var2[4] + (-1.*t6287*t6328*t6914 + t6328*t6388*(t6287*t6548 - 1.*t6388*t6920 + t6925 + t6930) + t6388*(t6739 + t6933 + t6934) + t6287*(-1.*t6328*t6388*t6548 - 1.*t6287*t6328*t6920 + t6938 + t6940))*var2[5];
  p_output1[46]=t6998*var2[0] + (-1.*t6280*t6287*t6381 - 1.*t6269*t7003)*var2[1] + (-1.*t6269*t6280*t6287 + t6381*t7003)*var2[2] + (t6638*t6949 + t6627*t6985 + t6504*(t6560*t6949 + t6567*t6955 + t6616*t6989 + t6404*t6993 + t7053 + t7055) + t6616*(-1.*t6560*t6985 - 1.*t6504*t6989 - 1.*t6464*t6993 - 1.*t6567*t7011 + t7060 + t7061))*var2[3] + (-1.*t6280*t6328*t6388*t6798 - 1.*t6280*t6324*t6388*t6802 + t6451*(t6324*t6329*t6388*t6551 - 1.*t6329*t6398*t6920 + t7022 + t7024 + t7053 + t7055) + t6331*(-1.*t6328*t6329*t6388*t6551 + t6329*t6461*t6920 + t7032 + t7034 + t7060 + t7061))*var2[4] + (t6328*t6388*(-1.*t6324*t6388*t6548 - 1.*t6287*t6324*t6920 + t7022 + t7024) - 1.*t6287*t6324*t7029 + t6324*t6388*(t6328*t6388*t6548 + t6287*t6328*t6920 + t7032 + t7034) - 1.*t6287*t6328*t7039)*var2[5];
  p_output1[47]=t6985*var2[0] + (-1.*t6280*t6328*t6381*t6388 - 1.*t6269*t7011)*var2[1] + (-1.*t6269*t6280*t6328*t6388 + t6381*t7011)*var2[2] + (t6668*t6949 + t6689*t6998 + t6616*(t6564*t6989 + t6418*t6993 + t6560*t6998 + t6567*t7003 + t7116 + t7119) + t6564*(-1.*t6560*t6949 - 1.*t6567*t6955 - 1.*t6616*t6989 - 1.*t6404*t6993 + t7123 + t7125))*var2[3] + (-1.*t6280*t6324*t6388*t6851 - 1.*t6280*t6287*t6877 + t6331*(t6287*t6329*t6551 + t6388*t6920*t6966 + t7089 + t7091 + t7116 + t7119) + t6280*t6388*(-1.*t6324*t6329*t6388*t6551 + t6329*t6398*t6920 + t7095 + t7097 + t7123 + t7125))*var2[4] + (-1.*t6287*t6324*t7086 + t6324*t6388*(-1.*t6287*t6548 + t6388*t6920 + t7089 + t7091) + t6287*(t6324*t6388*t6548 + t6287*t6324*t6920 + t7095 + t7097) + t6388*(t6875 + t7100 + t7101))*var2[5];
  p_output1[48]=t6504*var2[0] + t6477*var2[1] + (t6269*t6451 + t6381*t6464)*var2[2] + (t6581*t7208 + t6504*(t7192 - 1.*t6564*t7212 - 1.*t6418*t7216) + t6564*(t7195 + t7200 + t6560*t7208 + t6504*t7212 + t6464*t7216 + t6567*t7223))*var2[3] + (t6725*t7182 + t6451*(-1.*t6287*t6388*t7166 + t6329*t6388*t7187 + t7192) + t6280*t6388*(t7156 + t7167 + t6461*t7187 + t7195 + t6551*t7198 + t7200))*var2[4] + (t6388*t6444*t6914 + t6287*(-1.*t6287*t6444*t6548 + t6535*t7150 + t7156 + t6444*t7161 + t7167 + t6328*t7166*t7168))*var2[5] + (0.1575*t6328 + 0.2255*t7150)*var2[15];
  p_output1[49]=(t6504*t6638 + t6627*t7208 + t6504*(t6596 + t6597 + t6598 + t6616*t7212 + t6404*t7216 + t7268) + t6616*(-1.*t6560*t7208 - 1.*t6504*t7212 - 1.*t6464*t7216 - 1.*t6567*t7223 + t7271 + t7273))*var2[3] + (t6451*t6802 + t6798*t7182 + t6451*(t6596 + t6739 + t6741 + t6398*t7187 + t7242 + t7268) + t6331*(-1.*t6461*t7187 - 1.*t6551*t7198 + t7234 + t7238 + t7271 + t7273))*var2[4] + (t6328*t6388*t7029 + t6388*t6444*t7039 + t6324*t6388*(t6287*t6444*t6548 - 1.*t6328*t7166*t7168 + t7234 + t7236 + t7237 + t7238) + t6328*t6388*(t6739 + t6933 + t6934 + t6324*t7166*t7168 + t7242 + t7244))*var2[5] + (t6328*(-1.*t6444*t6522 - 1.*t6328*t7166 + t7236 + t7237) + t6444*(t6328*t6522 + t6933 + t6324*t7166 + t7244) + t7150*t7250 + t6444*t7257)*var2[15];
  p_output1[50]=t7208*var2[0] + (t6381*t7182 - 1.*t6269*t7223)*var2[1] + (t6269*t7182 + t6381*t7223)*var2[2] + (t6504*t6668 + t6616*(t6564*t7212 + t6418*t7216 + t7315) + t6564*(t6635 + t6636 + t6637 - 1.*t6616*t7212 - 1.*t6404*t7216 + t7319))*var2[3] + (t6451*t6851 + t6331*(t6287*t6388*t7166 - 1.*t6329*t6388*t7187 + t7315) + t6280*t6388*(t6635 + t6800 + t6801 - 1.*t6398*t7187 + t7296 + t7319))*var2[4] + (t6328*t6388*t7086 + t6287*(t6800 + t7027 + t7028 - 1.*t6328*t7161 - 1.*t6324*t7166*t7168 + t7296))*var2[5] - 0.068*t6444*var2[15];
  p_output1[51]=t7366*var2[0] + (t6381*t7370 - 1.*t6269*t7374)*var2[1] + (t6269*t7370 + t6381*t7374)*var2[2] + (t6581*t6616 + t6504*(t7391 - 1.*t6564*t7403 - 1.*t6418*t7407) + t6564*(t6624 + t6625 + t6626 + t7394 + t6504*t7403 + t6464*t7407))*var2[3] + (t6331*t6725 + t6451*(-1.*t6287*t6388*t7354 + t6329*t6388*t7386 + t7391) + t6280*t6388*(t6624 + t6796 + t6797 + t7355 + t6461*t7386 + t7394))*var2[4] + (t6324*t6388*t6914 + t6287*(t6796 + t7037 + t7038 + t6444*t7350 + t6328*t7168*t7354 + t7355))*var2[5] + (0.2255*t6328 + 0.1575*t7150)*var2[15] + (-0.325*t6289 - 1.*t6289*t6520 - 1.*t6289*t7340)*var2[16];
  p_output1[52]=(t6616*t6627 + t6638*t7366 + t6504*(t6560*t7366 + t6567*t7374 + t6616*t7403 + t6404*t7407 + t7448 + t7451) + t6616*(t6679 + t6683 + t6688 - 1.*t6504*t7403 - 1.*t6464*t7407 + t7455))*var2[3] + (t6331*t6798 + t6802*t7370 + t6451*(t6551*t7364 + t6398*t7386 + t7426 + t7428 + t7448 + t7451) + t6331*(t6679 + t6875 + t6876 - 1.*t6461*t7386 + t7421 + t7455))*var2[4] + (t6324*t6388*t7039 + t6388*t7029*t7150 + t6324*t6388*(t6875 + t7100 + t7101 - 1.*t6328*t7168*t7354 + t7420 + t7421) + t6328*t6388*(-1.*t6287*t6548*t7150 + t6324*t7168*t7354 + t7425 + t7426 + t7428 + t7430))*var2[5] + (t6328*t7250 + t6324*t7257 + t6328*(-1.*t6324*t6522 + t7101 - 1.*t6328*t7354 + t7420) + t6444*(t6522*t7150 + t6324*t7354 + t7425 + t7430))*var2[15];
  p_output1[53]=t6616*var2[0] + t6411*var2[1] + (t6269*t6331 + t6381*t6404)*var2[2] + (t6668*t7366 + t6616*(t6564*t7403 + t6418*t7407 + t7502) + t6564*(-1.*t6560*t7366 - 1.*t6567*t7374 - 1.*t6616*t7403 - 1.*t6404*t7407 + t7505 + t7508))*var2[3] + (t6851*t7370 + t6331*(t6287*t6388*t7354 - 1.*t6329*t6388*t7386 + t7502) + t6280*t6388*(-1.*t6551*t7364 - 1.*t6398*t7386 + t7484 + t7486 + t7505 + t7508))*var2[4] + (t6388*t7086*t7150 + t6287*(-1.*t6324*t6535 + t6287*t6548*t7150 - 1.*t6328*t7350 - 1.*t6324*t7168*t7354 + t7484 + t7486))*var2[5] - 0.068*t6324*var2[15] + (-0.325*t6322 - 1.*t6322*t6520 - 1.*t6322*t7340)*var2[16];
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
