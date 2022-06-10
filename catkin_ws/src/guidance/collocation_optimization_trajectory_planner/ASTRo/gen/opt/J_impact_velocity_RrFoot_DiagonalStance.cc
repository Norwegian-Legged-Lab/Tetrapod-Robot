/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:53:27 GMT+02:00
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
  double t3222;
  double t3277;
  double t3376;
  double t3380;
  double t3576;
  double t5091;
  double t3203;
  double t5439;
  double t5507;
  double t5640;
  double t5836;
  double t5907;
  double t5964;
  double t6106;
  double t6139;
  double t5351;
  double t5511;
  double t5622;
  double t5928;
  double t5981;
  double t5989;
  double t5999;
  double t6168;
  double t6210;
  double t6227;
  double t6346;
  double t6397;
  double t6413;
  double t6431;
  double t6448;
  double t6464;
  double t5362;
  double t6667;
  double t4272;
  double t5075;
  double t6810;
  double t6820;
  double t6850;
  double t6872;
  double t6877;
  double t6883;
  double t6893;
  double t6955;
  double t6982;
  double t7170;
  double t7195;
  double t7201;
  double t7139;
  double t7203;
  double t7208;
  double t7223;
  double t7235;
  double t7259;
  double t7413;
  double t7415;
  double t7421;
  double t7592;
  double t7597;
  double t7608;
  double t6544;
  double t6561;
  double t6515;
  double t6523;
  double t6764;
  double t6790;
  double t6802;
  double t6805;
  double t6870;
  double t6718;
  double t6754;
  double t8007;
  double t8057;
  double t8067;
  double t8077;
  double t8087;
  double t8097;
  double t5350;
  double t5443;
  double t6482;
  double t7613;
  double t7670;
  double t7768;
  double t7783;
  double t7785;
  double t7797;
  double t7803;
  double t7811;
  double t7817;
  double t7819;
  double t7873;
  double t7929;
  double t7935;
  double t7941;
  double t7943;
  double t7947;
  double t7949;
  double t7955;
  double t7971;
  double t8099;
  double t6530;
  double t6578;
  double t6594;
  double t8313;
  double t8320;
  double t8339;
  double t8366;
  double t8368;
  double t8474;
  double t8527;
  double t8552;
  double t6744;
  double t8757;
  double t8772;
  double t7401;
  double t7411;
  double t7431;
  double t7451;
  double t7461;
  double t7471;
  double t7481;
  double t7483;
  double t7497;
  double t8422;
  double t8554;
  double t8560;
  double t8640;
  double t8648;
  double t8658;
  double t8668;
  double t8981;
  double t9002;
  double t9010;
  double t7214;
  double t7264;
  double t7283;
  double t7300;
  double t7307;
  double t7331;
  double t7333;
  double t9136;
  double t9140;
  double t9144;
  double t9146;
  double t9176;
  double t9188;
  double t9213;
  double t9229;
  double t9328;
  double t9350;
  double t9354;
  double t9366;
  double t9388;
  double t9422;
  double t9423;
  double t9429;
  double t9431;
  double t9435;
  double t9462;
  double t9459;
  double t9465;
  double t9468;
  double t9474;
  double t9477;
  double t9480;
  double t9485;
  double t9489;
  double t9492;
  double t9595;
  double t9597;
  double t9599;
  double t9604;
  double t9608;
  double t9512;
  double t9877;
  double t9884;
  double t9917;
  double t9873;
  double t9922;
  double t9923;
  double t9925;
  double t9926;
  double t9927;
  double t9937;
  double t9938;
  double t9939;
  double t10124;
  double t10135;
  double t10140;
  double t10157;
  double t10160;
  double t10165;
  double t10199;
  double t10207;
  double t10213;
  double t10221;
  double t10222;
  double t10223;
  double t10225;
  double t10226;
  double t10230;
  double t10245;
  double t10247;
  double t10257;
  double t10264;
  double t10267;
  double t10275;
  double t10280;
  double t10289;
  double t10296;
  double t10300;
  double t10305;
  double t10306;
  double t10315;
  double t10317;
  double t9331;
  double t9332;
  double t9336;
  double t9342;
  double t9343;
  double t9348;
  double t9349;
  double t9377;
  double t9425;
  double t9437;
  double t9441;
  double t9443;
  double t9447;
  double t9450;
  double t9453;
  double t10382;
  double t10387;
  double t10397;
  double t10375;
  double t10404;
  double t10410;
  double t10420;
  double t10422;
  double t10429;
  double t10447;
  double t10451;
  double t10452;
  double t10054;
  double t10475;
  double t10479;
  double t10493;
  double t10510;
  double t10515;
  double t10537;
  double t10544;
  double t10243;
  double t10244;
  double t10324;
  double t9600;
  double t9601;
  double t9615;
  double t9629;
  double t9649;
  double t9704;
  double t9755;
  double t9764;
  double t9838;
  double t9844;
  double t9851;
  double t9858;
  double t9862;
  double t10645;
  double t10650;
  double t10654;
  double t10655;
  double t10662;
  double t10667;
  double t10184;
  double t10752;
  double t10757;
  double t10149;
  double t10177;
  double t10187;
  double t10195;
  double t10198;
  double t10214;
  double t10340;
  double t10353;
  double t10365;
  double t9471;
  double t9483;
  double t9495;
  double t9498;
  double t9501;
  double t9502;
  double t9528;
  double t9532;
  double t9570;
  double t9575;
  double t9577;
  double t9582;
  double t9589;
  double t10829;
  double t10832;
  double t10833;
  double t10838;
  double t10841;
  double t10719;
  double t10720;
  double t10721;
  double t10722;
  double t10739;
  double t10758;
  double t10768;
  double t10770;
  double t10774;
  double t10778;
  double t10781;
  double t10783;
  double t10787;
  double t8158;
  double t10884;
  double t10885;
  double t10445;
  double t10446;
  double t10454;
  double t10455;
  double t10456;
  double t10457;
  double t10458;
  double t10459;
  double t10460;
  double t10710;
  double t10711;
  double t10712;
  double t10713;
  double t10714;
  double t10715;
  double t10716;
  double t10717;
  double t10859;
  double t10862;
  double t10863;
  double t10864;
  double t10865;
  double t10866;
  double t10870;
  double t10874;
  double t9935;
  double t9936;
  double t9940;
  double t9941;
  double t9942;
  double t9943;
  double t9944;
  double t9945;
  double t9988;
  double t10923;
  double t10925;
  double t10929;
  double t10936;
  double t10942;
  double t10952;
  double t10966;
  double t10968;
  double t10989;
  double t10990;
  double t10415;
  double t10433;
  double t10434;
  double t10435;
  double t10436;
  double t10440;
  double t10443;
  double t10677;
  double t10684;
  double t10701;
  double t10702;
  double t10703;
  double t10705;
  double t10706;
  double t10847;
  double t10848;
  double t10849;
  double t10850;
  double t10851;
  double t10854;
  double t10855;
  double t9924;
  double t9928;
  double t9929;
  double t9930;
  double t9931;
  double t9932;
  double t9933;
  double t10946;
  double t10969;
  double t10970;
  double t10971;
  double t10972;
  double t10978;
  double t10980;
  double t11033;
  double t11035;
  double t11037;
  double t11065;
  double t11066;
  double t11067;
  double t11068;
  double t11070;
  double t11071;
  double t11072;
  double t11073;
  double t11074;
  double t11075;
  double t11076;
  double t11077;
  double t11078;
  double t11079;
  double t11080;
  double t11081;
  double t11082;
  double t11083;
  double t11084;
  double t11085;
  double t11086;
  double t11087;
  double t11088;
  double t11090;
  double t11091;
  double t11092;
  double t11093;
  double t11094;
  double t11095;
  double t11097;
  double t11098;
  double t11099;
  double t11100;
  double t11101;
  double t11053;
  double t11054;
  double t11055;
  double t11056;
  double t11057;
  double t11058;
  double t11059;
  double t11060;
  double t11061;
  double t11062;
  double t11063;
  double t11064;
  double t11112;
  double t11116;
  double t11117;
  double t11118;
  double t11119;
  double t11120;
  double t11121;
  double t11102;
  double t11103;
  double t11105;
  double t11106;
  double t11107;
  double t11108;
  double t11109;
  double t11110;
  double t11111;
  double t11144;
  double t11148;
  double t11150;
  double t11151;
  double t11152;
  double t11153;
  double t11154;
  double t11158;
  double t11168;
  double t11169;
  double t11170;
  double t11184;
  double t11185;
  double t11186;
  double t11180;
  double t11187;
  double t11188;
  double t11190;
  double t11191;
  double t11192;
  double t11202;
  double t11203;
  double t11220;
  double t11222;
  double t11224;
  double t11226;
  double t11227;
  double t11232;
  double t11236;
  double t11140;
  double t11142;
  double t11171;
  double t11377;
  double t11378;
  double t11390;
  double t11397;
  double t11399;
  double t11400;
  double t11423;
  double t11424;
  double t11173;
  double t11174;
  double t11175;
  double t11445;
  double t11446;
  double t11418;
  double t11419;
  double t11420;
  double t11421;
  double t11422;
  double t11425;
  double t11426;
  double t11427;
  double t11428;
  double t11429;
  double t11430;
  double t11431;
  double t11432;
  double t11511;
  double t11517;
  double t11200;
  double t11201;
  double t11204;
  double t11205;
  double t11206;
  double t11207;
  double t11208;
  double t11209;
  double t11210;
  double t11409;
  double t11410;
  double t11411;
  double t11412;
  double t11413;
  double t11414;
  double t11415;
  double t11416;
  double t11466;
  double t11467;
  double t11476;
  double t11483;
  double t11485;
  double t11486;
  double t11487;
  double t11488;
  double t11583;
  double t11585;
  double t11587;
  double t11588;
  double t11591;
  double t11592;
  double t11595;
  double t11606;
  double t11607;
  double t11189;
  double t11193;
  double t11194;
  double t11195;
  double t11196;
  double t11197;
  double t11198;
  double t11401;
  double t11402;
  double t11403;
  double t11404;
  double t11405;
  double t11406;
  double t11407;
  double t11457;
  double t11458;
  double t11459;
  double t11460;
  double t11461;
  double t11462;
  double t11463;
  double t11589;
  double t11596;
  double t11597;
  double t11599;
  double t11600;
  double t11601;
  double t11602;
  double t11621;
  double t11627;
  t3222 = Cos(var1[15]);
  t3277 = -1.*t3222;
  t3376 = 1. + t3277;
  t3380 = -0.15121*t3376;
  t3576 = Sin(var1[15]);
  t5091 = Sin(var1[4]);
  t3203 = Cos(var1[5]);
  t5439 = Sin(var1[5]);
  t5507 = Cos(var1[16]);
  t5640 = t3203*t3576*t5091;
  t5836 = t3222*t5091*t5439;
  t5907 = t5640 + t5836;
  t5964 = Cos(var1[17]);
  t6106 = Sin(var1[16]);
  t6139 = Sin(var1[17]);
  t5351 = -0.15121*t3576;
  t5511 = -1.*t5507;
  t5622 = 1. + t5511;
  t5928 = -0.28121*t5622*t5907;
  t5981 = -1.*t5964;
  t5989 = 1. + t5981;
  t5999 = -0.50321*t5507*t5989*t5907;
  t6168 = 0.50321*t6106*t6139*t5907;
  t6210 = t3222*t3203*t5091;
  t6227 = -1.*t3576*t5091*t5439;
  t6346 = t6210 + t6227;
  t6397 = -0.15121*t6346;
  t6413 = t5507*t5964*t5907;
  t6431 = t6106*t6139*t5907;
  t6448 = t6413 + t6431;
  t6464 = -0.19821*t6448;
  t5362 = t3380 + t5351;
  t6667 = Cos(var1[4]);
  t4272 = 0.15121*t3576;
  t5075 = t3380 + t4272;
  t6810 = -1.*t3222*t6667*t3203;
  t6820 = t6667*t3576*t5439;
  t6850 = t6810 + t6820;
  t6872 = -1.*t6106*t5091;
  t6877 = t5507*t6850;
  t6883 = t6872 + t6877;
  t6893 = -1.*t5507*t5091;
  t6955 = -1.*t6106*t6850;
  t6982 = t6893 + t6955;
  t7170 = -1.*t3222*t3203*t5091;
  t7195 = t3576*t5091*t5439;
  t7201 = t7170 + t7195;
  t7139 = t6667*t6106;
  t7203 = t5507*t7201;
  t7208 = t7139 + t7203;
  t7223 = t5507*t6667;
  t7235 = -1.*t6106*t7201;
  t7259 = t7223 + t7235;
  t7413 = -1.*t6667*t6106;
  t7415 = -1.*t5507*t7201;
  t7421 = t7413 + t7415;
  t7592 = -1.*t6667*t3203*t3576;
  t7597 = -1.*t3222*t6667*t5439;
  t7608 = t7592 + t7597;
  t6544 = 0.15121*t3222;
  t6561 = t6544 + t5351;
  t6515 = -0.15121*t3222;
  t6523 = t6515 + t5351;
  t6764 = t6667*t3203*t3576;
  t6790 = t3222*t6667*t5439;
  t6802 = t6764 + t6790;
  t6805 = -0.15121*t6802;
  t6870 = -0.28121*t5622*t6850;
  t6718 = -1.*t6667*t3203*t5362;
  t6754 = t6667*t5075*t5439;
  t8007 = -0.50321*t5507*t5989*t6850;
  t8057 = 0.50321*t6106*t6139*t6850;
  t8067 = t5507*t5964*t6850;
  t8077 = t6106*t6139*t6850;
  t8087 = t8067 + t8077;
  t8097 = -0.19821*t8087;
  t5350 = t3203*t5075*t5091;
  t5443 = t5362*t5091*t5439;
  t6482 = t5350 + t5443 + t5928 + t5999 + t6168 + t6397 + t6464;
  t7613 = 0.50321*t5964*t6106*t7608;
  t7670 = -0.50321*t5507*t6139*t7608;
  t7768 = t5964*t6106*t7608;
  t7783 = -1.*t5507*t6139*t7608;
  t7785 = t7768 + t7783;
  t7797 = -0.19821*t7785;
  t7803 = t7613 + t7670 + t7797;
  t7811 = var2[17]*t7803;
  t7817 = -0.28121*t6106*t7608;
  t7819 = 0.50321*t5989*t6106*t7608;
  t7873 = 0.50321*t5507*t6139*t7608;
  t7929 = -1.*t5964*t6106*t7608;
  t7935 = t5507*t6139*t7608;
  t7941 = t7929 + t7935;
  t7943 = -0.19821*t7941;
  t7947 = t7817 + t7819 + t7873 + t7943;
  t7949 = var2[16]*t7947;
  t7955 = -1.*t6667*t3203*t6561;
  t7971 = -1.*t6667*t6523*t5439;
  t8099 = t7955 + t7971 + t6805 + t6870 + t8007 + t8057 + t8097;
  t6530 = -1.*t3203*t6523*t5091;
  t6578 = t6561*t5091*t5439;
  t6594 = t6530 + t6578 + t5928 + t5999 + t6168 + t6397 + t6464;
  t8313 = t3222*t6667*t3203;
  t8320 = -1.*t6667*t3576*t5439;
  t8339 = t8313 + t8320;
  t8366 = -1.*t5507*t8339;
  t8368 = t6872 + t8366;
  t8474 = t5507*t5091;
  t8527 = -1.*t6106*t8339;
  t8552 = t8474 + t8527;
  t6744 = -0.28121*t6106*t5091;
  t8757 = t6106*t8339;
  t8772 = t6893 + t8757;
  t7401 = 0.28121*t5507*t6667;
  t7411 = -0.28121*t6106*t7201;
  t7431 = -0.50321*t6139*t7421;
  t7451 = -0.50321*t5989*t7259;
  t7461 = -1.*t6139*t7421;
  t7471 = t5964*t7259;
  t7481 = t7461 + t7471;
  t7483 = -0.19821*t7481;
  t7497 = t7401 + t7411 + t7431 + t7451 + t7483;
  t8422 = -0.50321*t5964*t8368;
  t8554 = -0.50321*t6139*t8552;
  t8560 = -1.*t5964*t8368;
  t8640 = -1.*t6139*t8552;
  t8648 = t8560 + t8640;
  t8658 = -0.19821*t8648;
  t8668 = t8422 + t8554 + t8658;
  t8981 = t6106*t5091;
  t9002 = t5507*t8339;
  t9010 = t8981 + t9002;
  t7214 = -0.50321*t6139*t7208;
  t7264 = -0.50321*t5964*t7259;
  t7283 = -1.*t6139*t7208;
  t7300 = -1.*t5964*t7259;
  t7307 = t7283 + t7300;
  t7331 = -0.19821*t7307;
  t7333 = t7214 + t7264 + t7331;
  t9136 = -0.28121*t5622*t7608;
  t9140 = -0.50321*t5507*t5989*t7608;
  t9144 = 0.50321*t6106*t6139*t7608;
  t9146 = -0.15121*t6850;
  t9176 = t5507*t5964*t7608;
  t9188 = t6106*t6139*t7608;
  t9213 = t9176 + t9188;
  t9229 = -0.19821*t9213;
  t9328 = Cos(var1[3]);
  t9350 = t3222*t9328*t6667*t3203;
  t9354 = -1.*t9328*t6667*t3576*t5439;
  t9366 = t9350 + t9354;
  t9388 = t9328*t6106*t5091;
  t9422 = t5507*t9366;
  t9423 = t9388 + t9422;
  t9429 = t5507*t9328*t5091;
  t9431 = -1.*t6106*t9366;
  t9435 = t9429 + t9431;
  t9462 = Sin(var1[3]);
  t9459 = t9328*t3203*t5091;
  t9465 = -1.*t9462*t5439;
  t9468 = t9459 + t9465;
  t9474 = -1.*t3203*t9462;
  t9477 = -1.*t9328*t5091*t5439;
  t9480 = t9474 + t9477;
  t9485 = -1.*t3576*t9468;
  t9489 = t3222*t9480;
  t9492 = t9485 + t9489;
  t9595 = -1.*t9328*t3203*t5091;
  t9597 = t9462*t5439;
  t9599 = t9595 + t9597;
  t9604 = t3576*t9599;
  t9608 = t9604 + t9489;
  t9512 = -1.*t3576*t9480;
  t9877 = t3222*t9468;
  t9884 = t3576*t9480;
  t9917 = t9877 + t9884;
  t9873 = -1.*t9328*t6667*t6106;
  t9922 = t5507*t9917;
  t9923 = t9873 + t9922;
  t9925 = -1.*t5507*t9328*t6667;
  t9926 = -1.*t6106*t9917;
  t9927 = t9925 + t9926;
  t9937 = t9328*t6667*t6106;
  t9938 = -1.*t5507*t9917;
  t9939 = t9937 + t9938;
  t10124 = -1.*t3203*t9462*t5091;
  t10135 = -1.*t9328*t5439;
  t10140 = t10124 + t10135;
  t10157 = -1.*t9328*t3203;
  t10160 = t9462*t5091*t5439;
  t10165 = t10157 + t10160;
  t10199 = t3222*t10140;
  t10207 = t3576*t10165;
  t10213 = t10199 + t10207;
  t10221 = t6667*t6106*t9462;
  t10222 = t5507*t10213;
  t10223 = t10221 + t10222;
  t10225 = t5507*t6667*t9462;
  t10226 = -1.*t6106*t10213;
  t10230 = t10225 + t10226;
  t10245 = -1.*t6667*t3203*t3576*t9462;
  t10247 = -1.*t3222*t6667*t9462*t5439;
  t10257 = t10245 + t10247;
  t10264 = -0.28121*t5622*t10257;
  t10267 = -0.50321*t5507*t5989*t10257;
  t10275 = 0.50321*t6106*t6139*t10257;
  t10280 = -1.*t3222*t6667*t3203*t9462;
  t10289 = t6667*t3576*t9462*t5439;
  t10296 = t10280 + t10289;
  t10300 = -0.15121*t10296;
  t10305 = t5507*t5964*t10257;
  t10306 = t6106*t6139*t10257;
  t10315 = t10305 + t10306;
  t10317 = -0.19821*t10315;
  t9331 = t9328*t6667*t3203*t5362;
  t9332 = 0.28121*t9328*t6106*t5091;
  t9336 = -1.*t9328*t6667*t5075*t5439;
  t9342 = -1.*t9328*t6667*t3203*t3576;
  t9343 = -1.*t3222*t9328*t6667*t5439;
  t9348 = t9342 + t9343;
  t9349 = -0.15121*t9348;
  t9377 = -0.28121*t5622*t9366;
  t9425 = -0.50321*t5989*t9423;
  t9437 = -0.50321*t6139*t9435;
  t9441 = t5964*t9423;
  t9443 = -1.*t6139*t9435;
  t9447 = t9441 + t9443;
  t9450 = -0.19821*t9447;
  t9453 = t9331 + t9332 + t9336 + t9349 + t9377 + t9425 + t9437 + t9450;
  t10382 = t3222*t6667*t3203*t9462;
  t10387 = -1.*t6667*t3576*t9462*t5439;
  t10397 = t10382 + t10387;
  t10375 = t6106*t9462*t5091;
  t10404 = t5507*t10397;
  t10410 = t10375 + t10404;
  t10420 = t5507*t9462*t5091;
  t10422 = -1.*t6106*t10397;
  t10429 = t10420 + t10422;
  t10447 = -1.*t6106*t9462*t5091;
  t10451 = -1.*t5507*t10397;
  t10452 = t10447 + t10451;
  t10054 = 0.28121*t6667*t6106*t9462;
  t10475 = -1.*t3222*t3203*t9462*t5091;
  t10479 = t3576*t9462*t5091*t5439;
  t10493 = t10475 + t10479;
  t10510 = t5507*t10493;
  t10515 = t10221 + t10510;
  t10537 = -1.*t6106*t10493;
  t10544 = t10225 + t10537;
  t10243 = -1.*t6667*t3203*t5075*t9462;
  t10244 = -1.*t6667*t5362*t9462*t5439;
  t10324 = t10243 + t10244 + t10264 + t10267 + t10275 + t10300 + t10317;
  t9600 = t5075*t9599;
  t9601 = t5362*t9480;
  t9615 = -0.28121*t5622*t9608;
  t9629 = -0.50321*t5507*t5989*t9608;
  t9649 = 0.50321*t6106*t6139*t9608;
  t9704 = t3222*t9599;
  t9755 = t9704 + t9512;
  t9764 = -0.15121*t9755;
  t9838 = t5507*t5964*t9608;
  t9844 = t6106*t6139*t9608;
  t9851 = t9838 + t9844;
  t9858 = -0.19821*t9851;
  t9862 = t9600 + t9601 + t9615 + t9629 + t9649 + t9764 + t9858;
  t10645 = t3576*t10140;
  t10650 = t9328*t3203;
  t10654 = -1.*t9462*t5091*t5439;
  t10655 = t10650 + t10654;
  t10662 = t3222*t10655;
  t10667 = t10645 + t10662;
  t10184 = -1.*t3576*t10140;
  t10752 = -1.*t3576*t10655;
  t10757 = t10199 + t10752;
  t10149 = t5362*t10140;
  t10177 = t5075*t10165;
  t10187 = t3222*t10165;
  t10195 = t10184 + t10187;
  t10198 = -0.15121*t10195;
  t10214 = -0.28121*t5622*t10213;
  t10340 = t6667*t3203*t6523*t9462;
  t10353 = -1.*t6667*t6561*t9462*t5439;
  t10365 = t10340 + t10353 + t10264 + t10267 + t10275 + t10300 + t10317;
  t9471 = t6523*t9468;
  t9483 = t6561*t9480;
  t9495 = -0.28121*t5622*t9492;
  t9498 = -0.50321*t5507*t5989*t9492;
  t9501 = 0.50321*t6106*t6139*t9492;
  t9502 = -1.*t3222*t9468;
  t9528 = t9502 + t9512;
  t9532 = -0.15121*t9528;
  t9570 = t5507*t5964*t9492;
  t9575 = t6106*t6139*t9492;
  t9577 = t9570 + t9575;
  t9582 = -0.19821*t9577;
  t9589 = t9471 + t9483 + t9495 + t9498 + t9501 + t9532 + t9582;
  t10829 = t3203*t9462*t5091;
  t10832 = t9328*t5439;
  t10833 = t10829 + t10832;
  t10838 = -1.*t3576*t10833;
  t10841 = t10838 + t10662;
  t10719 = t6561*t10140;
  t10720 = t6523*t10655;
  t10721 = -1.*t3222*t10655;
  t10722 = t10184 + t10721;
  t10739 = -0.15121*t10722;
  t10758 = -0.28121*t5622*t10757;
  t10768 = -0.50321*t5507*t5989*t10757;
  t10770 = 0.50321*t6106*t6139*t10757;
  t10774 = t5507*t5964*t10757;
  t10778 = t6106*t6139*t10757;
  t10781 = t10774 + t10778;
  t10783 = -0.19821*t10781;
  t10787 = t10719 + t10720 + t10739 + t10758 + t10768 + t10770 + t10783;
  t8158 = t6515 + t4272;
  t10884 = -1.*t3222*t10833;
  t10885 = t10884 + t10752;
  t10445 = 0.28121*t5507*t9462*t5091;
  t10446 = -0.28121*t6106*t10397;
  t10454 = -0.50321*t6139*t10452;
  t10455 = -0.50321*t5989*t10429;
  t10456 = -1.*t6139*t10452;
  t10457 = t5964*t10429;
  t10458 = t10456 + t10457;
  t10459 = -0.19821*t10458;
  t10460 = t10445 + t10446 + t10454 + t10455 + t10459;
  t10710 = -0.28121*t6106*t10667;
  t10711 = 0.50321*t5989*t6106*t10667;
  t10712 = 0.50321*t5507*t6139*t10667;
  t10713 = -1.*t5964*t6106*t10667;
  t10714 = t5507*t6139*t10667;
  t10715 = t10713 + t10714;
  t10716 = -0.19821*t10715;
  t10717 = t10710 + t10711 + t10712 + t10716;
  t10859 = -0.28121*t6106*t10841;
  t10862 = 0.50321*t5989*t6106*t10841;
  t10863 = 0.50321*t5507*t6139*t10841;
  t10864 = -1.*t5964*t6106*t10841;
  t10865 = t5507*t6139*t10841;
  t10866 = t10864 + t10865;
  t10870 = -0.19821*t10866;
  t10874 = t10859 + t10862 + t10863 + t10870;
  t9935 = -0.28121*t5507*t9328*t6667;
  t9936 = -0.28121*t6106*t9917;
  t9940 = -0.50321*t6139*t9939;
  t9941 = -0.50321*t5989*t9927;
  t9942 = -1.*t6139*t9939;
  t9943 = t5964*t9927;
  t9944 = t9942 + t9943;
  t9945 = -0.19821*t9944;
  t9988 = t9935 + t9936 + t9940 + t9941 + t9945;
  t10923 = t3222*t10833;
  t10925 = t3576*t10655;
  t10929 = t10923 + t10925;
  t10936 = -1.*t5507*t10929;
  t10942 = t10221 + t10936;
  t10952 = -1.*t5507*t6667*t9462;
  t10966 = -1.*t6106*t10929;
  t10968 = t10952 + t10966;
  t10989 = t6106*t10929;
  t10990 = t10225 + t10989;
  t10415 = -0.50321*t6139*t10410;
  t10433 = -0.50321*t5964*t10429;
  t10434 = -1.*t6139*t10410;
  t10435 = -1.*t5964*t10429;
  t10436 = t10434 + t10435;
  t10440 = -0.19821*t10436;
  t10443 = t10415 + t10433 + t10440;
  t10677 = 0.50321*t5964*t6106*t10667;
  t10684 = -0.50321*t5507*t6139*t10667;
  t10701 = t5964*t6106*t10667;
  t10702 = -1.*t5507*t6139*t10667;
  t10703 = t10701 + t10702;
  t10705 = -0.19821*t10703;
  t10706 = t10677 + t10684 + t10705;
  t10847 = 0.50321*t5964*t6106*t10841;
  t10848 = -0.50321*t5507*t6139*t10841;
  t10849 = t5964*t6106*t10841;
  t10850 = -1.*t5507*t6139*t10841;
  t10851 = t10849 + t10850;
  t10854 = -0.19821*t10851;
  t10855 = t10847 + t10848 + t10854;
  t9924 = -0.50321*t6139*t9923;
  t9928 = -0.50321*t5964*t9927;
  t9929 = -1.*t6139*t9923;
  t9930 = -1.*t5964*t9927;
  t9931 = t9929 + t9930;
  t9932 = -0.19821*t9931;
  t9933 = t9924 + t9928 + t9932;
  t10946 = -0.50321*t5964*t10942;
  t10969 = -0.50321*t6139*t10968;
  t10970 = -1.*t5964*t10942;
  t10971 = -1.*t6139*t10968;
  t10972 = t10970 + t10971;
  t10978 = -0.19821*t10972;
  t10980 = t10946 + t10969 + t10978;
  t11033 = -1.*t6667*t6106*t9462;
  t11035 = t5507*t10929;
  t11037 = t11033 + t11035;
  t11065 = t6667*t3203*t5362*t9462;
  t11066 = 0.28121*t6106*t9462*t5091;
  t11067 = -1.*t6667*t5075*t9462*t5439;
  t11068 = -0.15121*t10257;
  t11070 = -0.28121*t5622*t10397;
  t11071 = -0.50321*t5989*t10410;
  t11072 = -0.50321*t6139*t10429;
  t11073 = t5964*t10410;
  t11074 = -1.*t6139*t10429;
  t11075 = t11073 + t11074;
  t11076 = -0.19821*t11075;
  t11077 = t11065 + t11066 + t11067 + t11068 + t11070 + t11071 + t11072 + t11076;
  t11078 = t5075*t10140;
  t11079 = t5362*t10655;
  t11080 = -0.28121*t5622*t10667;
  t11081 = -0.50321*t5507*t5989*t10667;
  t11082 = 0.50321*t6106*t6139*t10667;
  t11083 = -0.15121*t10757;
  t11084 = t5507*t5964*t10667;
  t11085 = t6106*t6139*t10667;
  t11086 = t11084 + t11085;
  t11087 = -0.19821*t11086;
  t11088 = t11078 + t11079 + t11080 + t11081 + t11082 + t11083 + t11087;
  t11090 = t6523*t10833;
  t11091 = t6561*t10655;
  t11092 = -0.28121*t5622*t10841;
  t11093 = -0.50321*t5507*t5989*t10841;
  t11094 = 0.50321*t6106*t6139*t10841;
  t11095 = -0.15121*t10885;
  t11097 = t5507*t5964*t10841;
  t11098 = t6106*t6139*t10841;
  t11099 = t11097 + t11098;
  t11100 = -0.19821*t11099;
  t11101 = t11090 + t11091 + t11092 + t11093 + t11094 + t11095 + t11100;
  t11053 = -0.28121*t9328*t6667*t6106;
  t11054 = t5362*t9468;
  t11055 = t5075*t9480;
  t11056 = -0.15121*t9492;
  t11057 = -0.28121*t5622*t9917;
  t11058 = -0.50321*t5989*t9923;
  t11059 = -0.50321*t6139*t9927;
  t11060 = t5964*t9923;
  t11061 = -1.*t6139*t9927;
  t11062 = t11060 + t11061;
  t11063 = -0.19821*t11062;
  t11064 = t11053 + t11054 + t11055 + t11056 + t11057 + t11058 + t11059 + t11063;
  t11112 = -0.50321*t6139*t11037;
  t11116 = -0.50321*t5964*t10968;
  t11117 = -1.*t6139*t11037;
  t11118 = -1.*t5964*t10968;
  t11119 = t11117 + t11118;
  t11120 = -0.19821*t11119;
  t11121 = t11112 + t11116 + t11120;
  t11102 = -0.28121*t5507*t6667*t9462;
  t11103 = -0.28121*t6106*t10929;
  t11105 = -0.50321*t6139*t10942;
  t11106 = -0.50321*t5989*t10968;
  t11107 = -1.*t6139*t10942;
  t11108 = t5964*t10968;
  t11109 = t11107 + t11108;
  t11110 = -0.19821*t11109;
  t11111 = t11102 + t11103 + t11105 + t11106 + t11110;
  t11144 = t9328*t6667*t3203*t3576;
  t11148 = t3222*t9328*t6667*t5439;
  t11150 = t11144 + t11148;
  t11151 = -0.28121*t5622*t11150;
  t11152 = -0.50321*t5507*t5989*t11150;
  t11153 = 0.50321*t6106*t6139*t11150;
  t11154 = -0.15121*t9366;
  t11158 = t5507*t5964*t11150;
  t11168 = t6106*t6139*t11150;
  t11169 = t11158 + t11168;
  t11170 = -0.19821*t11169;
  t11184 = -1.*t3222*t9328*t6667*t3203;
  t11185 = t9328*t6667*t3576*t5439;
  t11186 = t11184 + t11185;
  t11180 = -1.*t9328*t6106*t5091;
  t11187 = t5507*t11186;
  t11188 = t11180 + t11187;
  t11190 = -1.*t5507*t9328*t5091;
  t11191 = -1.*t6106*t11186;
  t11192 = t11190 + t11191;
  t11202 = -1.*t5507*t11186;
  t11203 = t9388 + t11202;
  t11220 = t3222*t9328*t3203*t5091;
  t11222 = -1.*t9328*t3576*t5091*t5439;
  t11224 = t11220 + t11222;
  t11226 = t5507*t11224;
  t11227 = t9873 + t11226;
  t11232 = -1.*t6106*t11224;
  t11236 = t9925 + t11232;
  t11140 = t9328*t6667*t3203*t5075;
  t11142 = t9328*t6667*t5362*t5439;
  t11171 = t11140 + t11142 + t11151 + t11152 + t11153 + t11154 + t11170;
  t11377 = t3576*t9468;
  t11378 = t3203*t9462;
  t11390 = t9328*t5091*t5439;
  t11397 = t11378 + t11390;
  t11399 = t3222*t11397;
  t11400 = t11377 + t11399;
  t11423 = -1.*t3576*t11397;
  t11424 = t9877 + t11423;
  t11173 = -1.*t9328*t6667*t3203*t6523;
  t11174 = t9328*t6667*t6561*t5439;
  t11175 = t11173 + t11174 + t11151 + t11152 + t11153 + t11154 + t11170;
  t11445 = -1.*t3576*t9599;
  t11446 = t11445 + t11399;
  t11418 = t6561*t9468;
  t11419 = t6523*t11397;
  t11420 = -1.*t3222*t11397;
  t11421 = t9485 + t11420;
  t11422 = -0.15121*t11421;
  t11425 = -0.28121*t5622*t11424;
  t11426 = -0.50321*t5507*t5989*t11424;
  t11427 = 0.50321*t6106*t6139*t11424;
  t11428 = t5507*t5964*t11424;
  t11429 = t6106*t6139*t11424;
  t11430 = t11428 + t11429;
  t11431 = -0.19821*t11430;
  t11432 = t11418 + t11419 + t11422 + t11425 + t11426 + t11427 + t11431;
  t11511 = -1.*t3222*t9599;
  t11517 = t11511 + t11423;
  t11200 = -0.28121*t5507*t9328*t5091;
  t11201 = -0.28121*t6106*t11186;
  t11204 = -0.50321*t6139*t11203;
  t11205 = -0.50321*t5989*t11192;
  t11206 = -1.*t6139*t11203;
  t11207 = t5964*t11192;
  t11208 = t11206 + t11207;
  t11209 = -0.19821*t11208;
  t11210 = t11200 + t11201 + t11204 + t11205 + t11209;
  t11409 = -0.28121*t6106*t11400;
  t11410 = 0.50321*t5989*t6106*t11400;
  t11411 = 0.50321*t5507*t6139*t11400;
  t11412 = -1.*t5964*t6106*t11400;
  t11413 = t5507*t6139*t11400;
  t11414 = t11412 + t11413;
  t11415 = -0.19821*t11414;
  t11416 = t11409 + t11410 + t11411 + t11415;
  t11466 = -0.28121*t6106*t11446;
  t11467 = 0.50321*t5989*t6106*t11446;
  t11476 = 0.50321*t5507*t6139*t11446;
  t11483 = -1.*t5964*t6106*t11446;
  t11485 = t5507*t6139*t11446;
  t11486 = t11483 + t11485;
  t11487 = -0.19821*t11486;
  t11488 = t11466 + t11467 + t11476 + t11487;
  t11583 = t3576*t11397;
  t11585 = t9704 + t11583;
  t11587 = -1.*t5507*t11585;
  t11588 = t9873 + t11587;
  t11591 = t5507*t9328*t6667;
  t11592 = -1.*t6106*t11585;
  t11595 = t11591 + t11592;
  t11606 = t6106*t11585;
  t11607 = t9925 + t11606;
  t11189 = -0.50321*t6139*t11188;
  t11193 = -0.50321*t5964*t11192;
  t11194 = -1.*t6139*t11188;
  t11195 = -1.*t5964*t11192;
  t11196 = t11194 + t11195;
  t11197 = -0.19821*t11196;
  t11198 = t11189 + t11193 + t11197;
  t11401 = 0.50321*t5964*t6106*t11400;
  t11402 = -0.50321*t5507*t6139*t11400;
  t11403 = t5964*t6106*t11400;
  t11404 = -1.*t5507*t6139*t11400;
  t11405 = t11403 + t11404;
  t11406 = -0.19821*t11405;
  t11407 = t11401 + t11402 + t11406;
  t11457 = 0.50321*t5964*t6106*t11446;
  t11458 = -0.50321*t5507*t6139*t11446;
  t11459 = t5964*t6106*t11446;
  t11460 = -1.*t5507*t6139*t11446;
  t11461 = t11459 + t11460;
  t11462 = -0.19821*t11461;
  t11463 = t11457 + t11458 + t11462;
  t11589 = -0.50321*t5964*t11588;
  t11596 = -0.50321*t6139*t11595;
  t11597 = -1.*t5964*t11588;
  t11599 = -1.*t6139*t11595;
  t11600 = t11597 + t11599;
  t11601 = -0.19821*t11600;
  t11602 = t11589 + t11596 + t11601;
  t11621 = t5507*t11585;
  t11627 = t9937 + t11621;
  p_output1[0]=(t6718 + t6744 + t6754 + t6805 + t6870 - 0.50321*t5989*t6883 - 0.50321*t6139*t6982 - 0.19821*(t5964*t6883 - 1.*t6139*t6982))*var2[4] + t6482*var2[5] + t6594*var2[15] + t7497*var2[16] + t7333*var2[17];
  p_output1[1]=t7811 + t7949 + t6482*var2[4] + (t6718 + t6754 + t6805 + t6870 + t8007 + t8057 + t8097)*var2[5] + t8099*var2[15];
  p_output1[2]=t7811 + t7949 + t6594*var2[4] + t8099*var2[5] + (t6805 + t6870 + t7971 + t8007 + t8057 + t8097 + t3203*t6667*t8158)*var2[15];
  p_output1[3]=t7497*var2[4] + t7947*var2[5] + t7947*var2[15] + (t6744 - 0.28121*t5507*t8339 - 0.50321*t5989*t8368 - 0.50321*t6139*t8772 - 0.19821*(t5964*t8368 - 1.*t6139*t8772))*var2[16] + t8668*var2[17];
  p_output1[4]=t7333*var2[4] + t7803*var2[5] + t7803*var2[15] + t8668*var2[16] + (0.50321*t6139*t8552 - 0.50321*t5964*t9010 - 0.19821*(t6139*t8552 - 1.*t5964*t9010))*var2[17];
  p_output1[5]=1.;
  p_output1[6]=-1.*t3203*t5091*t5362 + t5075*t5091*t5439 - 0.15121*t5907 + 0.28121*t6106*t6667 - 0.28121*t5622*t7201 - 0.50321*t5989*t7208 - 0.50321*t6139*t7259 - 0.19821*(t5964*t7208 - 1.*t6139*t7259);
  p_output1[7]=-1.*t3203*t5075*t6667 - 1.*t5362*t5439*t6667 + t9136 + t9140 + t9144 + t9146 + t9229;
  p_output1[8]=t3203*t6523*t6667 - 1.*t5439*t6561*t6667 + t9136 + t9140 + t9144 + t9146 + t9229;
  p_output1[9]=0.28121*t5091*t5507 - 0.28121*t6106*t8339 - 0.50321*t6139*t8368 - 0.50321*t5989*t8552 - 0.19821*(-1.*t6139*t8368 + t5964*t8552);
  p_output1[10]=-0.50321*t5964*t8552 - 0.50321*t6139*t9010 - 0.19821*(-1.*t5964*t8552 - 1.*t6139*t9010);
  p_output1[11]=(t10054 + t10149 + t10177 + t10198 + t10214 - 0.50321*t10223*t5989 - 0.50321*t10230*t6139 - 0.19821*(t10223*t5964 - 1.*t10230*t6139))*var2[3] + t9453*var2[4] + t9862*var2[5] + t9589*var2[15] + t9988*var2[16] + t9933*var2[17];
  p_output1[12]=t9453*var2[3] + (t10054 - 0.28121*t10493*t5622 - 0.50321*t10515*t5989 - 0.50321*t10544*t6139 - 0.19821*(t10515*t5964 - 1.*t10544*t6139) - 1.*t3203*t5091*t5362*t9462 + t5075*t5091*t5439*t9462 - 0.15121*(t3203*t3576*t5091*t9462 + t3222*t5091*t5439*t9462))*var2[4] + t10324*var2[5] + t10365*var2[15] + t10460*var2[16] + t10443*var2[17];
  p_output1[13]=t9862*var2[3] + t10324*var2[4] + (t10149 + t10177 + t10198 + t10214 - 0.50321*t10213*t5507*t5989 + 0.50321*t10213*t6106*t6139 - 0.19821*(t10213*t5507*t5964 + t10213*t6106*t6139))*var2[5] + t10787*var2[15] + t10717*var2[16] + t10706*var2[17];
  p_output1[14]=t9589*var2[3] + t10365*var2[4] + t10787*var2[5] + (t10720 - 0.15121*(t10721 + t10833*t3576) - 0.28121*t10885*t5622 - 0.50321*t10885*t5507*t5989 + 0.50321*t10885*t6106*t6139 - 0.19821*(t10885*t5507*t5964 + t10885*t6106*t6139) + t10833*t8158)*var2[15] + t10874*var2[16] + t10855*var2[17];
  p_output1[15]=t9988*var2[3] + t10460*var2[4] + t10717*var2[5] + t10874*var2[15] + (t10054 - 0.28121*t10929*t5507 - 0.50321*t10942*t5989 - 0.50321*t10990*t6139 - 0.19821*(t10942*t5964 - 1.*t10990*t6139))*var2[16] + t10980*var2[17];
  p_output1[16]=t9933*var2[3] + t10443*var2[4] + t10706*var2[5] + t10855*var2[15] + t10980*var2[16] + (-0.50321*t11037*t5964 + 0.50321*t10968*t6139 - 0.19821*(-1.*t11037*t5964 + t10968*t6139))*var2[17];
  p_output1[17]=1.;
  p_output1[18]=t11064;
  p_output1[19]=t11077;
  p_output1[20]=t11088;
  p_output1[21]=t11101;
  p_output1[22]=t11111;
  p_output1[23]=t11121;
  p_output1[24]=t11064*var2[3] + t11077*var2[4] + t11088*var2[5] + t11101*var2[15] + t11111*var2[16] + t11121*var2[17];
  p_output1[25]=t11077*var2[3] + (t11053 - 0.28121*t11224*t5622 - 0.50321*t11227*t5989 - 0.50321*t11236*t6139 - 0.19821*(t11227*t5964 - 1.*t11236*t6139) + t3203*t5091*t5362*t9328 - 1.*t5075*t5091*t5439*t9328 - 0.15121*(-1.*t3203*t3576*t5091*t9328 - 1.*t3222*t5091*t5439*t9328))*var2[4] + t11171*var2[5] + t11175*var2[15] + t11210*var2[16] + t11198*var2[17];
  p_output1[26]=t11088*var2[3] + t11171*var2[4] + (t11054 + t11055 + t11056 + t11057 - 0.50321*t5507*t5989*t9917 + 0.50321*t6106*t6139*t9917 - 0.19821*(t5507*t5964*t9917 + t6106*t6139*t9917))*var2[5] + t11432*var2[15] + t11416*var2[16] + t11407*var2[17];
  p_output1[27]=t11101*var2[3] + t11175*var2[4] + t11432*var2[5] + (t11419 - 0.28121*t11517*t5622 - 0.50321*t11517*t5507*t5989 + 0.50321*t11517*t6106*t6139 - 0.19821*(t11517*t5507*t5964 + t11517*t6106*t6139) + t8158*t9599 - 0.15121*(t11420 + t9604))*var2[15] + t11488*var2[16] + t11463*var2[17];
  p_output1[28]=t11111*var2[3] + t11210*var2[4] + t11416*var2[5] + t11488*var2[15] + (t11053 - 0.28121*t11585*t5507 - 0.50321*t11588*t5989 - 0.50321*t11607*t6139 - 0.19821*(t11588*t5964 - 1.*t11607*t6139))*var2[16] + t11602*var2[17];
  p_output1[29]=t11121*var2[3] + t11198*var2[4] + t11407*var2[5] + t11463*var2[15] + t11602*var2[16] + (-0.50321*t11627*t5964 + 0.50321*t11595*t6139 - 0.19821*(-1.*t11627*t5964 + t11595*t6139))*var2[17];
  p_output1[30]=1.;
  p_output1[31]=-0.15121*t10841 + t10969 + t10655*t5075 + t10833*t5362 - 0.28121*t10929*t5622 - 0.19821*(t10971 + t11037*t5964) - 0.50321*t11037*t5989 - 0.28121*t6106*t6667*t9462;
  p_output1[32]=-0.15121*t11150 - 0.28121*t11186*t5622 - 0.50321*t11188*t5989 - 0.50321*t11192*t6139 - 0.19821*(t11188*t5964 - 1.*t11192*t6139) - 0.28121*t5091*t6106*t9328 - 1.*t3203*t5362*t6667*t9328 + t5075*t5439*t6667*t9328;
  p_output1[33]=-0.15121*t11424 + t11397*t5362 - 0.28121*t11400*t5622 - 0.50321*t11400*t5507*t5989 + 0.50321*t11400*t6106*t6139 - 0.19821*(t11400*t5507*t5964 + t11400*t6106*t6139) + t5075*t9468;
  p_output1[34]=-0.15121*t11517 - 0.28121*t11446*t5622 - 0.50321*t11446*t5507*t5989 + 0.50321*t11446*t6106*t6139 - 0.19821*(t11446*t5507*t5964 + t11446*t6106*t6139) + t11397*t6561 + t6523*t9599;
  p_output1[35]=-0.50321*t11595*t5989 - 0.28121*t11585*t6106 - 0.50321*t11588*t6139 - 0.19821*(t11595*t5964 - 1.*t11588*t6139) + 0.28121*t5507*t6667*t9328;
  p_output1[36]=-0.50321*t11595*t5964 - 0.50321*t11627*t6139 - 0.19821*(-1.*t11595*t5964 - 1.*t11627*t6139);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 37, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_impact_velocity_RrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void J_impact_velocity_RrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE