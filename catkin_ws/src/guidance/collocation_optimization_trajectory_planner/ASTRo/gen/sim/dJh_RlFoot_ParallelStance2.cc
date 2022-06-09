/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:38:04 GMT+02:00
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
  double t10363;
  double t10367;
  double t10856;
  double t11071;
  double t11079;
  double t11080;
  double t11311;
  double t11524;
  double t10043;
  double t10273;
  double t11538;
  double t11599;
  double t11518;
  double t11543;
  double t11556;
  double t3931;
  double t11616;
  double t11618;
  double t11629;
  double t11630;
  double t13245;
  double t13277;
  double t13295;
  double t13312;
  double t13314;
  double t13318;
  double t13319;
  double t13346;
  double t13351;
  double t13353;
  double t13364;
  double t13366;
  double t13367;
  double t13903;
  double t13930;
  double t13975;
  double t14013;
  double t14019;
  double t14020;
  double t14025;
  double t14030;
  double t14033;
  double t14035;
  double t14049;
  double t14051;
  double t14142;
  double t14145;
  double t14185;
  double t14526;
  double t14532;
  double t14561;
  double t14562;
  double t14564;
  double t14614;
  double t14616;
  double t14620;
  double t14624;
  double t14625;
  double t14630;
  double t14632;
  double t14637;
  double t14524;
  double t14565;
  double t14567;
  double t14568;
  double t14619;
  double t14638;
  double t14640;
  double t14643;
  double t14644;
  double t14645;
  double t14675;
  double t14680;
  double t14717;
  double t14722;
  double t14798;
  double t14895;
  double t14952;
  double t14957;
  double t14571;
  double t14891;
  double t14893;
  double t15160;
  double t15161;
  double t15162;
  double t14506;
  double t14511;
  double t14523;
  double t15103;
  double t15128;
  double t15139;
  double t15175;
  double t15176;
  double t15177;
  double t15238;
  double t15239;
  double t15244;
  double t16058;
  double t16103;
  double t16359;
  double t15141;
  double t16834;
  double t16841;
  double t16842;
  double t15183;
  double t16879;
  double t16888;
  double t16889;
  double t15147;
  double t15166;
  double t15170;
  double t16852;
  double t16864;
  double t16860;
  double t16861;
  double t16862;
  double t16869;
  double t16895;
  double t15184;
  double t15186;
  double t15187;
  double t15258;
  double t15291;
  double t17004;
  double t17006;
  double t17018;
  double t17020;
  double t15260;
  double t15261;
  double t15262;
  double t15292;
  double t15293;
  double t15295;
  double t15348;
  double t15842;
  double t15374;
  double t15378;
  double t15421;
  double t16955;
  double t16957;
  double t17147;
  double t17149;
  double t17164;
  double t17168;
  double t15850;
  double t15900;
  double t15931;
  double t16364;
  double t16375;
  double t16381;
  double t16442;
  double t16528;
  double t16691;
  double t16755;
  double t16772;
  double t16773;
  double t16803;
  double t16831;
  double t16832;
  double t17246;
  double t17247;
  double t17248;
  double t17235;
  double t16863;
  double t17255;
  double t17256;
  double t17257;
  double t17259;
  double t17260;
  double t17261;
  double t16890;
  double t16901;
  double t16902;
  double t16936;
  double t16939;
  double t16943;
  double t17262;
  double t16962;
  double t16963;
  double t17267;
  double t16973;
  double t16974;
  double t16982;
  double t16986;
  double t16987;
  double t16992;
  double t16993;
  double t16994;
  double t16995;
  double t16996;
  double t16997;
  double t16998;
  double t17005;
  double t17009;
  double t17010;
  double t17011;
  double t17012;
  double t17019;
  double t17023;
  double t17024;
  double t17029;
  double t17030;
  double t17303;
  double t17064;
  double t17065;
  double t17307;
  double t17082;
  double t17084;
  double t17091;
  double t17092;
  double t17103;
  double t17104;
  double t17114;
  double t17118;
  double t17119;
  double t17125;
  double t17129;
  double t17130;
  double t17136;
  double t17137;
  double t17138;
  double t17139;
  double t17148;
  double t17166;
  double t17189;
  double t17190;
  double t17191;
  double t17195;
  double t17203;
  double t17347;
  double t17209;
  double t17210;
  double t17360;
  double t17217;
  double t17219;
  double t17222;
  double t17394;
  double t17396;
  double t17401;
  double t17419;
  double t17420;
  double t17424;
  double t17431;
  double t17434;
  double t17435;
  double t17442;
  double t17443;
  double t17445;
  double t17466;
  double t17467;
  double t17468;
  double t17469;
  double t17470;
  double t17471;
  double t17472;
  double t17479;
  double t17480;
  double t17481;
  double t17473;
  double t17488;
  double t17490;
  double t17492;
  double t17498;
  double t17499;
  double t17500;
  double t17502;
  double t17503;
  double t17504;
  double t17527;
  double t17530;
  double t17545;
  double t17547;
  double t17540;
  double t17580;
  double t17582;
  double t17417;
  double t17426;
  double t17427;
  double t17599;
  double t13337;
  double t13338;
  double t13340;
  double t17646;
  double t17654;
  double t17656;
  double t17405;
  double t17408;
  double t17409;
  double t17410;
  double t17411;
  double t17412;
  double t17413;
  double t14121;
  double t14122;
  double t14123;
  double t17697;
  double t17698;
  double t17699;
  double t17700;
  double t17701;
  double t17703;
  double t17704;
  double t17705;
  double t17709;
  double t17710;
  double t17711;
  double t17702;
  double t17717;
  double t17719;
  double t17720;
  double t17727;
  double t17728;
  double t17730;
  double t17723;
  double t17726;
  double t17742;
  double t17744;
  double t17745;
  double t17748;
  double t17750;
  double t17751;
  double t17755;
  double t17756;
  double t17757;
  double t17523;
  double t17524;
  double t17534;
  double t17536;
  double t17553;
  double t17554;
  double t17555;
  double t17775;
  double t17563;
  double t17564;
  double t17565;
  double t17779;
  double t17781;
  double t17805;
  double t17811;
  double t17814;
  double t17763;
  double t17764;
  double t17765;
  double t17635;
  double t17636;
  double t17637;
  double t17850;
  double t17856;
  t10363 = Cos(var1[10]);
  t10367 = Cos(var1[11]);
  t10856 = -1.*t10363*t10367;
  t11071 = Sin(var1[10]);
  t11079 = Sin(var1[11]);
  t11080 = -1.*t11071*t11079;
  t11311 = t10856 + t11080;
  t11524 = Cos(var1[9]);
  t10043 = Cos(var1[5]);
  t10273 = Sin(var1[9]);
  t11538 = Sin(var1[5]);
  t11599 = Cos(var1[3]);
  t11518 = t10043*t10273*t11311;
  t11543 = t11524*t11311*t11538;
  t11556 = t11518 + t11543;
  t3931 = Sin(var1[3]);
  t11616 = Cos(var1[4]);
  t11618 = -1.*t10367*t11071;
  t11629 = t10363*t11079;
  t11630 = t11618 + t11629;
  t13245 = t11616*t11630;
  t13277 = Sin(var1[4]);
  t13295 = t11524*t10043*t11311;
  t13312 = -1.*t10273*t11311*t11538;
  t13314 = t13295 + t13312;
  t13318 = -1.*t13277*t13314;
  t13319 = t13245 + t13318;
  t13346 = t10043*t10273;
  t13351 = t11524*t11538;
  t13353 = t13346 + t13351;
  t13364 = -1.*t11524*t10043;
  t13366 = t10273*t11538;
  t13367 = t13364 + t13366;
  t13903 = t10043*t10273*t11630;
  t13930 = t11524*t11630*t11538;
  t13975 = t13903 + t13930;
  t14013 = t10363*t10367;
  t14019 = t11071*t11079;
  t14020 = t14013 + t14019;
  t14025 = t11616*t14020;
  t14030 = t11524*t10043*t11630;
  t14033 = -1.*t10273*t11630*t11538;
  t14035 = t14030 + t14033;
  t14049 = -1.*t13277*t14035;
  t14051 = t14025 + t14049;
  t14142 = -1.*t11630*t13277;
  t14145 = -1.*t11616*t13314;
  t14185 = t14142 + t14145;
  t14526 = -1.*t10367;
  t14532 = 1. + t14526;
  t14561 = -0.50321*t14532;
  t14562 = -0.19821*t10367;
  t14564 = t14561 + t14562;
  t14614 = -1.*t11524;
  t14616 = 1. + t14614;
  t14620 = -1.*t10363;
  t14624 = 1. + t14620;
  t14625 = -0.28121*t14624;
  t14630 = t10363*t14564;
  t14632 = 0.305*t11071*t11079;
  t14637 = t14625 + t14630 + t14632;
  t14524 = 0.28121*t11071;
  t14565 = t14564*t11071;
  t14567 = -0.305*t10363*t11079;
  t14568 = t14524 + t14565 + t14567;
  t14619 = -0.15121*t14616;
  t14638 = t11524*t14637;
  t14640 = t14619 + t14638;
  t14643 = t10043*t14640;
  t14644 = 0.15121*t14616;
  t14645 = 0.15121*t11524;
  t14675 = 0.15121*t10273;
  t14680 = t10273*t14637;
  t14717 = t14644 + t14645 + t14675 + t14680;
  t14722 = -1.*t14717*t11538;
  t14798 = t14643 + t14722;
  t14895 = t14568*t13277;
  t14952 = t11616*t14798;
  t14957 = t14895 + t14952;
  t14571 = -1.*t14568*t13277;
  t14891 = -1.*t11616*t14798;
  t14893 = t14571 + t14891;
  t15160 = t11616*t14568;
  t15161 = -1.*t13277*t14798;
  t15162 = t15160 + t15161;
  t14506 = t14020*t13277;
  t14511 = t11616*t14035;
  t14523 = t14506 + t14511;
  t15103 = t10043*t14717;
  t15128 = t14640*t11538;
  t15139 = t15103 + t15128;
  t15175 = -1.*t14020*t13277;
  t15176 = -1.*t11616*t14035;
  t15177 = t15175 + t15176;
  t15238 = t11630*t13277;
  t15239 = t11616*t13314;
  t15244 = t15238 + t15239;
  t16058 = -1.*t10043*t10273*t11311;
  t16103 = -1.*t11524*t11311*t11538;
  t16359 = t16058 + t16103;
  t15141 = -1.*t13367*t15139;
  t16834 = -1.*t10043*t14717;
  t16841 = -1.*t14640*t11538;
  t16842 = t16834 + t16841;
  t15183 = t13975*t15139;
  t16879 = -1.*t10043*t10273*t11630;
  t16888 = -1.*t11524*t11630*t11538;
  t16889 = t16879 + t16888;
  t15147 = -1.*t11616*t13353*t14957;
  t15166 = t13277*t13353*t15162;
  t15170 = t15141 + t15147 + t15166;
  t16852 = -1.*t13353*t15139;
  t16864 = -1.*t13367*t14798;
  t16860 = t11524*t10043;
  t16861 = -1.*t10273*t11538;
  t16862 = t16860 + t16861;
  t16869 = t14035*t15139;
  t16895 = t13975*t14798;
  t15184 = t14523*t14957;
  t15186 = t14051*t15162;
  t15187 = t15183 + t15184 + t15186;
  t15258 = -1.*t13975*t15139;
  t15291 = t11556*t15139;
  t17004 = -1.*t14035*t15139;
  t17006 = -1.*t13975*t14798;
  t17018 = t13314*t15139;
  t17020 = t11556*t14798;
  t15260 = -1.*t14523*t14957;
  t15261 = -1.*t14051*t15162;
  t15262 = t15258 + t15260 + t15261;
  t15292 = t15244*t14957;
  t15293 = t13319*t15162;
  t15295 = t15291 + t15292 + t15293;
  t15348 = t13367*t15139;
  t15842 = -1.*t11556*t15139;
  t15374 = t11616*t13353*t14957;
  t15378 = -1.*t13277*t13353*t15162;
  t15421 = t15348 + t15374 + t15378;
  t16955 = Power(t11616,2);
  t16957 = Power(t13277,2);
  t17147 = t13353*t15139;
  t17149 = t13367*t14798;
  t17164 = -1.*t13314*t15139;
  t17168 = -1.*t11556*t14798;
  t15850 = -1.*t15244*t14957;
  t15900 = -1.*t13319*t15162;
  t15931 = t15842 + t15850 + t15900;
  t16364 = var2[0]*t11616*t16359;
  t16375 = t3931*t13277*t16359;
  t16381 = t11599*t13314;
  t16442 = t16375 + t16381;
  t16528 = var2[1]*t16442;
  t16691 = -1.*t11599*t13277*t16359;
  t16755 = t3931*t13314;
  t16772 = t16691 + t16755;
  t16773 = var2[2]*t16772;
  t16803 = -1.*t13353*t14798;
  t16831 = t15141 + t16803;
  t16832 = t14035*t16831;
  t17246 = -0.15121*t10273;
  t17247 = -1.*t10273*t14637;
  t17248 = t17246 + t17247;
  t17235 = t14645 + t14638;
  t16863 = -1.*t16862*t14798;
  t17255 = t10043*t17248;
  t17256 = -1.*t17235*t11538;
  t17257 = t17255 + t17256;
  t17259 = t10043*t17235;
  t17260 = t17248*t11538;
  t17261 = t17259 + t17260;
  t16890 = t16889*t14798;
  t16901 = t14568*t14020;
  t16902 = t14035*t14798;
  t16936 = t16901 + t15183 + t16902;
  t16939 = t13353*t16936;
  t16943 = t11616*t16889*t15170;
  t17262 = -1.*t13367*t17261;
  t16962 = -1.*t11616*t16862*t14957;
  t16963 = t13277*t16862*t15162;
  t17267 = t13975*t17261;
  t16973 = t11616*t16889*t14957;
  t16974 = -1.*t13277*t16889*t15162;
  t16982 = t11616*t16862*t15187;
  t16986 = var2[0]*t11616*t16862;
  t16987 = t3931*t13353;
  t16992 = -1.*t11599*t13277*t16862;
  t16993 = t16987 + t16992;
  t16994 = var2[2]*t16993;
  t16995 = t11599*t13353;
  t16996 = t3931*t13277*t16862;
  t16997 = t16995 + t16996;
  t16998 = var2[1]*t16997;
  t17005 = -1.*t16889*t14798;
  t17009 = -1.*t14568*t14020;
  t17010 = -1.*t14035*t14798;
  t17011 = t17009 + t15258 + t17010;
  t17012 = t13314*t17011;
  t17019 = t16359*t14798;
  t17023 = t14568*t11630;
  t17024 = t13314*t14798;
  t17029 = t17023 + t15291 + t17024;
  t17030 = t14035*t17029;
  t17303 = -1.*t13975*t17261;
  t17064 = -1.*t11616*t16889*t14957;
  t17065 = t13277*t16889*t15162;
  t17307 = t11556*t17261;
  t17082 = t11616*t16359*t14957;
  t17084 = -1.*t13277*t16359*t15162;
  t17091 = t11616*t16359*t15262;
  t17092 = t11616*t16889*t15295;
  t17103 = var2[0]*t11616*t16889;
  t17104 = t3931*t13277*t16889;
  t17114 = t11599*t14035;
  t17118 = t17104 + t17114;
  t17119 = var2[1]*t17118;
  t17125 = -1.*t11599*t13277*t16889;
  t17129 = t3931*t14035;
  t17130 = t17125 + t17129;
  t17136 = var2[2]*t17130;
  t17137 = t13353*t14798;
  t17138 = t15348 + t17137;
  t17139 = t13314*t17138;
  t17148 = t16862*t14798;
  t17166 = -1.*t16359*t14798;
  t17189 = -1.*t14568*t11630;
  t17190 = -1.*t13314*t14798;
  t17191 = t17189 + t15842 + t17190;
  t17195 = t13353*t17191;
  t17203 = t11616*t16359*t15421;
  t17347 = t13367*t17261;
  t17209 = t11616*t16862*t14957;
  t17210 = -1.*t13277*t16862*t15162;
  t17360 = -1.*t11556*t17261;
  t17217 = -1.*t11616*t16359*t14957;
  t17219 = t13277*t16359*t15162;
  t17222 = t11616*t16862*t15931;
  t17394 = t10367*t11071;
  t17396 = -1.*t10363*t11079;
  t17401 = t17394 + t17396;
  t17419 = t11524*t10043*t17401;
  t17420 = -1.*t10273*t17401*t11538;
  t17424 = t17419 + t17420;
  t17431 = t10043*t10273*t17401;
  t17434 = t11524*t17401*t11538;
  t17435 = t17431 + t17434;
  t17442 = t11616*t11311;
  t17443 = -1.*t13277*t17424;
  t17445 = t17442 + t17443;
  t17466 = -0.28121*t11071;
  t17467 = -1.*t14564*t11071;
  t17468 = 0.305*t10363*t11079;
  t17469 = t17466 + t17467 + t17468;
  t17470 = t10043*t10273*t17469;
  t17471 = t11524*t17469*t11538;
  t17472 = t17470 + t17471;
  t17479 = t11524*t10043*t17469;
  t17480 = -1.*t10273*t17469*t11538;
  t17481 = t17479 + t17480;
  t17473 = -1.*t13367*t17472;
  t17488 = 0.28121*t10363;
  t17490 = t17488 + t14630 + t14632;
  t17492 = t17472*t13975;
  t17498 = t17490*t13277;
  t17499 = t11616*t17481;
  t17500 = t17498 + t17499;
  t17502 = t11616*t17490;
  t17503 = -1.*t13277*t17481;
  t17504 = t17502 + t17503;
  t17527 = t14568*t11311;
  t17530 = t11630*t17490;
  t17545 = Power(t11524,2);
  t17547 = Power(t10273,2);
  t17540 = -1.*t17490*t14020;
  t17580 = t17472*t11556;
  t17582 = t17435*t15139;
  t17417 = t11311*t13277;
  t17426 = t11616*t17424;
  t17427 = t17417 + t17426;
  t17599 = -1.*t17472*t13975;
  t13337 = t11599*t11556;
  t13338 = -1.*t3931*t13319;
  t13340 = t13337 + t13338;
  t17646 = t13367*t17472;
  t17654 = -1.*t17472*t11556;
  t17656 = -1.*t17435*t15139;
  t17405 = 0.15121*t17401;
  t17408 = 0.15121*t11630;
  t17409 = t17405 + t17408;
  t17410 = var2[9]*t17409;
  t17411 = -1.*t10273*t14640;
  t17412 = t11524*t14717;
  t17413 = t17411 + t17412;
  t14121 = t11599*t13975;
  t14122 = -1.*t3931*t14051;
  t14123 = t14121 + t14122;
  t17697 = 0.305*t10367*t11071;
  t17698 = t17697 + t14567;
  t17699 = t10043*t10273*t17698;
  t17700 = t11524*t17698*t11538;
  t17701 = t17699 + t17700;
  t17703 = t11524*t10043*t17698;
  t17704 = -1.*t10273*t17698*t11538;
  t17705 = t17703 + t17704;
  t17709 = t10043*t10273*t14020;
  t17710 = t11524*t14020*t11538;
  t17711 = t17709 + t17710;
  t17702 = -1.*t13367*t17701;
  t17717 = -0.305*t10363*t10367;
  t17719 = -0.305*t11071*t11079;
  t17720 = t17717 + t17719;
  t17727 = t11524*t10043*t14020;
  t17728 = -1.*t10273*t14020*t11538;
  t17730 = t17727 + t17728;
  t17723 = t17701*t13975;
  t17726 = t17711*t15139;
  t17742 = t17720*t13277;
  t17744 = t11616*t17705;
  t17745 = t17742 + t17744;
  t17748 = t11616*t17720;
  t17750 = -1.*t13277*t17705;
  t17751 = t17748 + t17750;
  t17755 = t17401*t13277;
  t17756 = t11616*t17730;
  t17757 = t17755 + t17756;
  t17523 = t11311*t14637;
  t17524 = t17023 + t17523;
  t17534 = -1.*t11630*t14637;
  t17536 = t17534 + t17009;
  t17553 = -1.*t11524*t11630*t14640;
  t17554 = -1.*t10273*t11630*t14717;
  t17555 = t17009 + t17553 + t17554;
  t17775 = t11630*t17720;
  t17563 = t11524*t11311*t14640;
  t17564 = t10273*t11311*t14717;
  t17565 = t17023 + t17563 + t17564;
  t17779 = -1.*t17401*t14568;
  t17781 = -1.*t17720*t14020;
  t17805 = t17701*t11556;
  t17811 = -1.*t17701*t13975;
  t17814 = -1.*t17711*t15139;
  t17763 = t11616*t17401;
  t17764 = -1.*t13277*t17730;
  t17765 = t17763 + t17764;
  t17635 = t10273*t14640;
  t17636 = -1.*t11524*t14717;
  t17637 = t17635 + t17636;
  t17850 = t13367*t17701;
  t17856 = -1.*t17701*t11556;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t11599*t13319 - 1.*t11556*t3931)*var2[1] + t13340*var2[2];
  p_output1[10]=(t11599*t13277*t13353 - 1.*t13367*t3931)*var2[1] + (t11599*t13367 + t13277*t13353*t3931)*var2[2];
  p_output1[11]=(-1.*t11599*t14051 - 1.*t13975*t3931)*var2[1] + t14123*var2[2];
  p_output1[12]=t13319*var2[0] - 1.*t14185*t3931*var2[1] + t11599*t14185*var2[2] + (t14523*(t13277*t13353*t14893 + t13277*t13353*t14957) + t14051*t15170 + t11616*t13353*(t14051*t14893 + t14051*t14957 + t14523*t15162 + t15162*t15177) - 1.*t13277*t13353*t15187)*var2[3];
  p_output1[13]=-1.*t13277*t13353*var2[0] + t11616*t13353*t3931*var2[1] - 1.*t11599*t11616*t13353*var2[2] + ((-1.*t14051*t14893 - 1.*t14051*t14957 - 1.*t14523*t15162 - 1.*t15162*t15177)*t15244 + t14523*(t13319*t14893 + t13319*t14957 + t14185*t15162 + t15162*t15244) + t13319*t15262 + t14051*t15295)*var2[3];
  p_output1[14]=t14051*var2[0] - 1.*t15177*t3931*var2[1] + t11599*t15177*var2[2] + ((-1.*t13277*t13353*t14893 - 1.*t13277*t13353*t14957)*t15244 + t11616*t13353*(-1.*t13319*t14893 - 1.*t13319*t14957 - 1.*t14185*t15162 - 1.*t15162*t15244) + t13319*t15421 - 1.*t13277*t13353*t15931)*var2[3];
  p_output1[15]=t16364 + t16528 + t16773 + (t16943 + t14523*(t16852 + t16864 - 1.*t13353*t16842*t16955 - 1.*t13353*t16842*t16957 + t16962 + t16963) + t11616*t13353*(-1.*t13277*t14051*t16842 + t11616*t14523*t16842 + t16869 + t16895 + t16973 + t16974) + t16982)*var2[3] + (t16832 + t13975*(-1.*t13353*t16842 + t16852 + t16863 + t16864) + t13367*(t14035*t16842 + t16869 + t16890 + t16895) + t16939)*var2[4];
  p_output1[16]=t16986 + t16994 + t16998 + (t15244*(t13277*t14051*t16842 - 1.*t11616*t14523*t16842 + t17004 + t17006 + t17064 + t17065) + t14523*(-1.*t13277*t13319*t16842 + t11616*t15244*t16842 + t17018 + t17020 + t17082 + t17084) + t17091 + t17092)*var2[3] + (t11556*(-1.*t14035*t16842 + t17004 + t17005 + t17006) + t17012 + t13975*(t13314*t16842 + t17018 + t17019 + t17020) + t17030)*var2[4];
  p_output1[17]=t17103 + t17119 + t17136 + (t17203 + t15244*(t13353*t16842*t16955 + t13353*t16842*t16957 + t17147 + t17149 + t17209 + t17210) + t11616*t13353*(t13277*t13319*t16842 - 1.*t11616*t15244*t16842 + t17164 + t17168 + t17217 + t17219) + t17222)*var2[3] + (t17139 + t11556*(t13353*t16842 + t17147 + t17148 + t17149) + t13367*(-1.*t13314*t16842 + t17164 + t17166 + t17168) + t17195)*var2[4];
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=t16364 + t16528 + t16773 + (t16943 + t16982 + t14523*(t16852 + t16962 + t16963 - 1.*t13353*t16955*t17257 - 1.*t13353*t16957*t17257 + t17262) + t11616*t13353*(t16869 + t16973 + t16974 - 1.*t13277*t14051*t17257 + t11616*t14523*t17257 + t17267))*var2[3] + (t16832 + t16939 + t13975*(t16852 + t16863 - 1.*t13353*t17257 + t17262) + t13367*(t16869 + t16890 + t14035*t17257 + t17267))*var2[4] + t14020*(-1.*t11524*t14640 - 1.*t10273*t14717 + t11524*t17235 - 1.*t10273*t17248)*var2[5];
  p_output1[28]=t16986 + t16994 + t16998 + (t17091 + t17092 + t15244*(t17004 + t17064 + t17065 + t13277*t14051*t17257 - 1.*t11616*t14523*t17257 + t17303) + t14523*(t17018 + t17082 + t17084 - 1.*t13277*t13319*t17257 + t11616*t15244*t17257 + t17307))*var2[3] + (t17012 + t17030 + t11556*(t17004 + t17005 - 1.*t14035*t17257 + t17303) + t13975*(t17018 + t17019 + t13314*t17257 + t17307))*var2[4] + (t14020*(-1.*t10273*t11311*t14640 + t11311*t11524*t14717 + t10273*t11311*t17235 + t11311*t11524*t17248) + t11630*(t10273*t11630*t14640 - 1.*t11524*t11630*t14717 - 1.*t10273*t11630*t17235 - 1.*t11524*t11630*t17248))*var2[5];
  p_output1[29]=t17103 + t17119 + t17136 + (t17203 + t17222 + t15244*(t17147 + t17209 + t17210 + t13353*t16955*t17257 + t13353*t16957*t17257 + t17347) + t11616*t13353*(t17164 + t17217 + t17219 + t13277*t13319*t17257 - 1.*t11616*t15244*t17257 + t17360))*var2[3] + (t17139 + t17195 + t11556*(t17147 + t17148 + t13353*t17257 + t17347) + t13367*(t17164 + t17166 - 1.*t13314*t17257 + t17360))*var2[4] + t11630*(t11524*t14640 + t10273*t14717 - 1.*t11524*t17235 + t10273*t17248)*var2[5];
  p_output1[30]=t17410 + t17427*var2[0] + (t11599*t17435 - 1.*t17445*t3931)*var2[1] + (t11599*t17445 + t17435*t3931)*var2[2] + (t15170*t15244 + t14523*(t17473 - 1.*t11616*t13353*t17500 + t13277*t13353*t17504) + t11616*t13353*(t15291 + t15292 + t15293 + t17492 + t14523*t17500 + t14051*t17504))*var2[3] + (t11556*t16831 + t13975*(t17473 - 1.*t13353*t17481) + t13367*(t15291 + t17023 + t17024 + t14035*t17481 + t14020*t17490 + t17492))*var2[4] + t11630*t17413*var2[5];
  p_output1[31]=(t15244*t15295 + t15262*t17427 + t14523*(t14957*t17427 + t15162*t17445 + t15244*t17500 + t13319*t17504 + t17580 + t17582) + t15244*(t15842 + t15850 + t15900 - 1.*t14523*t17500 - 1.*t14051*t17504 + t17599))*var2[3] + (t11556*t17029 + t17011*t17435 + t13975*(t14798*t17424 + t13314*t17481 + t17527 + t17530 + t17580 + t17582) + t11556*(t15842 + t17189 + t17190 - 1.*t14035*t17481 + t17540 + t17599))*var2[4] + (t14020*(t11524*t14640*t17401 + t10273*t14717*t17401 + t17527 + t17530 + t11311*t17469*t17545 + t11311*t17469*t17547) + t11630*(-1.*t11311*t11524*t14640 - 1.*t10273*t11311*t14717 + t17189 + t17540 - 1.*t11630*t17469*t17545 - 1.*t11630*t17469*t17547) + t11311*t17555 + t11630*t17565)*var2[5] + (t11630*t17524 + t14020*(t14637*t17401 + t11311*t17469 + t17527 + t17530) + t11311*t17536 + t11630*(-1.*t11311*t14637 + t17189 - 1.*t11630*t17469 + t17540))*var2[9];
  p_output1[32]=t15244*var2[0] + t13340*var2[1] + (t11599*t13319 + t11556*t3931)*var2[2] + (t15421*t17427 + t15244*(t11616*t13353*t17500 - 1.*t13277*t13353*t17504 + t17646) + t11616*t13353*(-1.*t14957*t17427 - 1.*t15162*t17445 - 1.*t15244*t17500 - 1.*t13319*t17504 + t17654 + t17656))*var2[3] + (t17138*t17435 + t11556*(t13353*t17481 + t17646) + t13367*(-1.*t11311*t14568 - 1.*t14798*t17424 - 1.*t13314*t17481 - 1.*t11630*t17490 + t17654 + t17656))*var2[4] + t11311*t17637*var2[5];
  p_output1[33]=t17410 + t14523*var2[0] + t14123*var2[1] + (t11599*t14051 + t13975*t3931)*var2[2] + (t14523*(t17702 - 1.*t11616*t13353*t17745 + t13277*t13353*t17751) + t15170*t17757 + t11616*t13353*(t17723 + t17726 + t14523*t17745 + t14051*t17751 + t14957*t17757 + t15162*t17765))*var2[3] + (t13975*(t17702 - 1.*t13353*t17705) + t16831*t17711 + t13367*(t14568*t17401 + t14035*t17705 + t14020*t17720 + t17723 + t17726 + t14798*t17730))*var2[4] + t17401*t17413*var2[5] + (0.28121*t10367 - 0.305*Power(t10367,2) + t10367*t14564)*var2[10];
  p_output1[34]=(t14523*t15262 + t15295*t17757 + t14523*(t15183 + t15184 + t15186 + t15244*t17745 + t13319*t17751 + t17805) + t15244*(-1.*t14523*t17745 - 1.*t14051*t17751 - 1.*t14957*t17757 - 1.*t15162*t17765 + t17811 + t17814))*var2[3] + (t13975*t17011 + t17029*t17711 + t13975*(t15183 + t16901 + t16902 + t13314*t17705 + t17775 + t17805) + t11556*(-1.*t14035*t17705 - 1.*t14798*t17730 + t17779 + t17781 + t17811 + t17814))*var2[4] + (t14020*t17555 + t17401*t17565 + t14020*(t11524*t11630*t14640 + t10273*t11630*t14717 + t16901 + t11311*t17545*t17698 + t11311*t17547*t17698 + t17775) + t11630*(-1.*t11524*t14020*t14640 - 1.*t10273*t14020*t14717 - 1.*t11630*t17545*t17698 - 1.*t11630*t17547*t17698 + t17779 + t17781))*var2[5] + (t17401*t17524 + t14020*t17536 + t14020*(t11630*t14637 + t16901 + t11311*t17698 + t17775) + t11630*(-1.*t14020*t14637 - 1.*t11630*t17698 + t17779 + t17781))*var2[9];
  p_output1[35]=t17757*var2[0] + (t11599*t17711 - 1.*t17765*t3931)*var2[1] + (t11599*t17765 + t17711*t3931)*var2[2] + (t14523*t15421 + t15244*(t11616*t13353*t17745 - 1.*t13277*t13353*t17751 + t17850) + t11616*t13353*(t15258 + t15260 + t15261 - 1.*t15244*t17745 - 1.*t13319*t17751 + t17856))*var2[3] + (t13975*t17138 + t11556*(t13353*t17705 + t17850) + t13367*(t15258 + t17009 + t17010 - 1.*t13314*t17705 - 1.*t11630*t17720 + t17856))*var2[4] + t14020*t17637*var2[5] + (-0.28121*t11079 + 0.305*t10367*t11079 - 1.*t11079*t14564)*var2[10];
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
