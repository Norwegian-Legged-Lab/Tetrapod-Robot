/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:04:05 GMT+02:00
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
  double t2167;
  double t2266;
  double t2267;
  double t2268;
  double t2274;
  double t2307;
  double t3955;
  double t4346;
  double t2039;
  double t2092;
  double t4375;
  double t5323;
  double t4002;
  double t4953;
  double t4996;
  double t1973;
  double t7964;
  double t8286;
  double t10975;
  double t11450;
  double t11526;
  double t11540;
  double t11544;
  double t11614;
  double t11616;
  double t11638;
  double t11669;
  double t11799;
  double t11803;
  double t12248;
  double t12293;
  double t12298;
  double t12310;
  double t12412;
  double t12419;
  double t12430;
  double t12467;
  double t12483;
  double t12489;
  double t12523;
  double t12542;
  double t12545;
  double t12548;
  double t12555;
  double t12558;
  double t12644;
  double t12647;
  double t12663;
  double t12713;
  double t12715;
  double t12716;
  double t12734;
  double t12740;
  double t12804;
  double t12807;
  double t12814;
  double t12826;
  double t12828;
  double t12855;
  double t12856;
  double t12896;
  double t12906;
  double t12708;
  double t12749;
  double t12762;
  double t12775;
  double t12920;
  double t12926;
  double t12935;
  double t12937;
  double t12945;
  double t12953;
  double t12957;
  double t12960;
  double t12961;
  double t12990;
  double t12991;
  double t13004;
  double t12777;
  double t12964;
  double t12979;
  double t13119;
  double t13125;
  double t13131;
  double t12703;
  double t12705;
  double t12706;
  double t13055;
  double t13060;
  double t13108;
  double t13222;
  double t13232;
  double t13235;
  double t13325;
  double t13332;
  double t13333;
  double t13507;
  double t13510;
  double t13515;
  double t13116;
  double t13562;
  double t13563;
  double t13567;
  double t13252;
  double t13621;
  double t13628;
  double t13630;
  double t13117;
  double t13138;
  double t13139;
  double t13572;
  double t13596;
  double t13574;
  double t13575;
  double t13578;
  double t13616;
  double t13633;
  double t13284;
  double t13285;
  double t13288;
  double t13353;
  double t13426;
  double t13904;
  double t13917;
  double t13961;
  double t13972;
  double t13362;
  double t13363;
  double t13374;
  double t13427;
  double t13434;
  double t13437;
  double t13467;
  double t13493;
  double t13468;
  double t13470;
  double t13471;
  double t13695;
  double t13699;
  double t14123;
  double t14127;
  double t14149;
  double t14156;
  double t13496;
  double t13498;
  double t13500;
  double t13517;
  double t13518;
  double t13519;
  double t13520;
  double t13527;
  double t13529;
  double t13532;
  double t13550;
  double t13552;
  double t13553;
  double t13558;
  double t13559;
  double t14305;
  double t14308;
  double t14313;
  double t14289;
  double t14290;
  double t13585;
  double t14336;
  double t14337;
  double t14338;
  double t14342;
  double t14350;
  double t14352;
  double t13631;
  double t13644;
  double t13645;
  double t13649;
  double t13659;
  double t13693;
  double t14353;
  double t13711;
  double t13712;
  double t14367;
  double t13719;
  double t13726;
  double t13776;
  double t13793;
  double t13803;
  double t13817;
  double t13841;
  double t13843;
  double t13844;
  double t13846;
  double t13848;
  double t13873;
  double t13907;
  double t13925;
  double t13928;
  double t13955;
  double t13958;
  double t13967;
  double t13978;
  double t13980;
  double t13986;
  double t13987;
  double t14426;
  double t14006;
  double t14009;
  double t14432;
  double t14027;
  double t14033;
  double t14038;
  double t14042;
  double t14058;
  double t14060;
  double t14063;
  double t14066;
  double t14075;
  double t14092;
  double t14093;
  double t14095;
  double t14102;
  double t14104;
  double t14112;
  double t14114;
  double t14125;
  double t14150;
  double t14169;
  double t14170;
  double t14179;
  double t14185;
  double t14190;
  double t14467;
  double t14208;
  double t14209;
  double t14483;
  double t14233;
  double t14234;
  double t14250;
  double t14533;
  double t14537;
  double t14538;
  double t14556;
  double t14562;
  double t14566;
  double t14580;
  double t14581;
  double t14582;
  double t14587;
  double t14589;
  double t14600;
  double t14614;
  double t14619;
  double t14620;
  double t14621;
  double t14624;
  double t14625;
  double t14631;
  double t14636;
  double t14637;
  double t14643;
  double t14633;
  double t14653;
  double t14670;
  double t14676;
  double t14696;
  double t14699;
  double t14702;
  double t14708;
  double t14711;
  double t14712;
  double t14770;
  double t14781;
  double t14855;
  double t14862;
  double t14828;
  double t14917;
  double t14924;
  double t14553;
  double t14567;
  double t14568;
  double t14949;
  double t11769;
  double t11771;
  double t11782;
  double t15017;
  double t15030;
  double t15032;
  double t14540;
  double t14542;
  double t14543;
  double t14544;
  double t14546;
  double t14547;
  double t14548;
  double t12586;
  double t12602;
  double t12611;
  double t15190;
  double t15205;
  double t15206;
  double t15227;
  double t15230;
  double t15238;
  double t15240;
  double t15241;
  double t15246;
  double t15250;
  double t15255;
  double t15231;
  double t15258;
  double t15259;
  double t15260;
  double t15269;
  double t15270;
  double t15271;
  double t15262;
  double t15265;
  double t15280;
  double t15282;
  double t15284;
  double t15287;
  double t15288;
  double t15290;
  double t15296;
  double t15299;
  double t15301;
  double t14765;
  double t14767;
  double t14795;
  double t14800;
  double t14871;
  double t14872;
  double t14873;
  double t15365;
  double t14900;
  double t14901;
  double t14902;
  double t15371;
  double t15375;
  double t15429;
  double t15444;
  double t15448;
  double t15317;
  double t15327;
  double t15333;
  double t14994;
  double t14997;
  double t14998;
  double t15617;
  double t15631;
  t2167 = Cos(var1[16]);
  t2266 = Cos(var1[17]);
  t2267 = -1.*t2167*t2266;
  t2268 = Sin(var1[16]);
  t2274 = Sin(var1[17]);
  t2307 = -1.*t2268*t2274;
  t3955 = t2267 + t2307;
  t4346 = Cos(var1[15]);
  t2039 = Cos(var1[5]);
  t2092 = Sin(var1[15]);
  t4375 = Sin(var1[5]);
  t5323 = Cos(var1[3]);
  t4002 = t2039*t2092*t3955;
  t4953 = t4346*t3955*t4375;
  t4996 = t4002 + t4953;
  t1973 = Sin(var1[3]);
  t7964 = Cos(var1[4]);
  t8286 = -1.*t2266*t2268;
  t10975 = t2167*t2274;
  t11450 = t8286 + t10975;
  t11526 = t7964*t11450;
  t11540 = Sin(var1[4]);
  t11544 = t4346*t2039*t3955;
  t11614 = -1.*t2092*t3955*t4375;
  t11616 = t11544 + t11614;
  t11638 = -1.*t11540*t11616;
  t11669 = t11526 + t11638;
  t11799 = t2039*t2092;
  t11803 = t4346*t4375;
  t12248 = t11799 + t11803;
  t12293 = -1.*t4346*t2039;
  t12298 = t2092*t4375;
  t12310 = t12293 + t12298;
  t12412 = t2039*t2092*t11450;
  t12419 = t4346*t11450*t4375;
  t12430 = t12412 + t12419;
  t12467 = t2167*t2266;
  t12483 = t2268*t2274;
  t12489 = t12467 + t12483;
  t12523 = t7964*t12489;
  t12542 = t4346*t2039*t11450;
  t12545 = -1.*t2092*t11450*t4375;
  t12548 = t12542 + t12545;
  t12555 = -1.*t11540*t12548;
  t12558 = t12523 + t12555;
  t12644 = -1.*t11450*t11540;
  t12647 = -1.*t7964*t11616;
  t12663 = t12644 + t12647;
  t12713 = -1.*t2266;
  t12715 = 1. + t12713;
  t12716 = -0.50321*t12715;
  t12734 = -0.19821*t2266;
  t12740 = t12716 + t12734;
  t12804 = -1.*t4346;
  t12807 = 1. + t12804;
  t12814 = -0.15121*t12807;
  t12826 = -1.*t2167;
  t12828 = 1. + t12826;
  t12855 = -0.28121*t12828;
  t12856 = t2167*t12740;
  t12896 = 0.305*t2268*t2274;
  t12906 = t12855 + t12856 + t12896;
  t12708 = 0.28121*t2268;
  t12749 = t12740*t2268;
  t12762 = -0.305*t2167*t2274;
  t12775 = t12708 + t12749 + t12762;
  t12920 = t4346*t12906;
  t12926 = t12814 + t12920;
  t12935 = t2039*t12926;
  t12937 = -0.15121*t4346;
  t12945 = 0.15121*t2092;
  t12953 = t2092*t12906;
  t12957 = t12814 + t12937 + t12945 + t12953;
  t12960 = -1.*t12957*t4375;
  t12961 = t12935 + t12960;
  t12990 = t12775*t11540;
  t12991 = t7964*t12961;
  t13004 = t12990 + t12991;
  t12777 = -1.*t12775*t11540;
  t12964 = -1.*t7964*t12961;
  t12979 = t12777 + t12964;
  t13119 = t7964*t12775;
  t13125 = -1.*t11540*t12961;
  t13131 = t13119 + t13125;
  t12703 = t12489*t11540;
  t12705 = t7964*t12548;
  t12706 = t12703 + t12705;
  t13055 = t2039*t12957;
  t13060 = t12926*t4375;
  t13108 = t13055 + t13060;
  t13222 = -1.*t12489*t11540;
  t13232 = -1.*t7964*t12548;
  t13235 = t13222 + t13232;
  t13325 = t11450*t11540;
  t13332 = t7964*t11616;
  t13333 = t13325 + t13332;
  t13507 = -1.*t2039*t2092*t3955;
  t13510 = -1.*t4346*t3955*t4375;
  t13515 = t13507 + t13510;
  t13116 = -1.*t12310*t13108;
  t13562 = -1.*t2039*t12957;
  t13563 = -1.*t12926*t4375;
  t13567 = t13562 + t13563;
  t13252 = t12430*t13108;
  t13621 = -1.*t2039*t2092*t11450;
  t13628 = -1.*t4346*t11450*t4375;
  t13630 = t13621 + t13628;
  t13117 = -1.*t7964*t12248*t13004;
  t13138 = t11540*t12248*t13131;
  t13139 = t13116 + t13117 + t13138;
  t13572 = -1.*t12248*t13108;
  t13596 = -1.*t12310*t12961;
  t13574 = t4346*t2039;
  t13575 = -1.*t2092*t4375;
  t13578 = t13574 + t13575;
  t13616 = t12548*t13108;
  t13633 = t12430*t12961;
  t13284 = t12706*t13004;
  t13285 = t12558*t13131;
  t13288 = t13252 + t13284 + t13285;
  t13353 = -1.*t12430*t13108;
  t13426 = t4996*t13108;
  t13904 = -1.*t12548*t13108;
  t13917 = -1.*t12430*t12961;
  t13961 = t11616*t13108;
  t13972 = t4996*t12961;
  t13362 = -1.*t12706*t13004;
  t13363 = -1.*t12558*t13131;
  t13374 = t13353 + t13362 + t13363;
  t13427 = t13333*t13004;
  t13434 = t11669*t13131;
  t13437 = t13426 + t13427 + t13434;
  t13467 = t12310*t13108;
  t13493 = -1.*t4996*t13108;
  t13468 = t7964*t12248*t13004;
  t13470 = -1.*t11540*t12248*t13131;
  t13471 = t13467 + t13468 + t13470;
  t13695 = Power(t7964,2);
  t13699 = Power(t11540,2);
  t14123 = t12248*t13108;
  t14127 = t12310*t12961;
  t14149 = -1.*t11616*t13108;
  t14156 = -1.*t4996*t12961;
  t13496 = -1.*t13333*t13004;
  t13498 = -1.*t11669*t13131;
  t13500 = t13493 + t13496 + t13498;
  t13517 = var2[0]*t7964*t13515;
  t13518 = t1973*t11540*t13515;
  t13519 = t5323*t11616;
  t13520 = t13518 + t13519;
  t13527 = var2[1]*t13520;
  t13529 = -1.*t5323*t11540*t13515;
  t13532 = t1973*t11616;
  t13550 = t13529 + t13532;
  t13552 = var2[2]*t13550;
  t13553 = -1.*t12248*t12961;
  t13558 = t13116 + t13553;
  t13559 = t12548*t13558;
  t14305 = -0.15121*t2092;
  t14308 = -1.*t2092*t12906;
  t14313 = t14305 + t14308;
  t14289 = 0.15121*t4346;
  t14290 = t14289 + t12920;
  t13585 = -1.*t13578*t12961;
  t14336 = t2039*t14313;
  t14337 = -1.*t14290*t4375;
  t14338 = t14336 + t14337;
  t14342 = t2039*t14290;
  t14350 = t14313*t4375;
  t14352 = t14342 + t14350;
  t13631 = t13630*t12961;
  t13644 = t12775*t12489;
  t13645 = t12548*t12961;
  t13649 = t13644 + t13252 + t13645;
  t13659 = t12248*t13649;
  t13693 = t7964*t13630*t13139;
  t14353 = -1.*t12310*t14352;
  t13711 = -1.*t7964*t13578*t13004;
  t13712 = t11540*t13578*t13131;
  t14367 = t12430*t14352;
  t13719 = t7964*t13630*t13004;
  t13726 = -1.*t11540*t13630*t13131;
  t13776 = t7964*t13578*t13288;
  t13793 = var2[0]*t7964*t13578;
  t13803 = t1973*t12248;
  t13817 = -1.*t5323*t11540*t13578;
  t13841 = t13803 + t13817;
  t13843 = var2[2]*t13841;
  t13844 = t5323*t12248;
  t13846 = t1973*t11540*t13578;
  t13848 = t13844 + t13846;
  t13873 = var2[1]*t13848;
  t13907 = -1.*t13630*t12961;
  t13925 = -1.*t12775*t12489;
  t13928 = -1.*t12548*t12961;
  t13955 = t13925 + t13353 + t13928;
  t13958 = t11616*t13955;
  t13967 = t13515*t12961;
  t13978 = t12775*t11450;
  t13980 = t11616*t12961;
  t13986 = t13978 + t13426 + t13980;
  t13987 = t12548*t13986;
  t14426 = -1.*t12430*t14352;
  t14006 = -1.*t7964*t13630*t13004;
  t14009 = t11540*t13630*t13131;
  t14432 = t4996*t14352;
  t14027 = t7964*t13515*t13004;
  t14033 = -1.*t11540*t13515*t13131;
  t14038 = t7964*t13515*t13374;
  t14042 = t7964*t13630*t13437;
  t14058 = var2[0]*t7964*t13630;
  t14060 = t1973*t11540*t13630;
  t14063 = t5323*t12548;
  t14066 = t14060 + t14063;
  t14075 = var2[1]*t14066;
  t14092 = -1.*t5323*t11540*t13630;
  t14093 = t1973*t12548;
  t14095 = t14092 + t14093;
  t14102 = var2[2]*t14095;
  t14104 = t12248*t12961;
  t14112 = t13467 + t14104;
  t14114 = t11616*t14112;
  t14125 = t13578*t12961;
  t14150 = -1.*t13515*t12961;
  t14169 = -1.*t12775*t11450;
  t14170 = -1.*t11616*t12961;
  t14179 = t14169 + t13493 + t14170;
  t14185 = t12248*t14179;
  t14190 = t7964*t13515*t13471;
  t14467 = t12310*t14352;
  t14208 = t7964*t13578*t13004;
  t14209 = -1.*t11540*t13578*t13131;
  t14483 = -1.*t4996*t14352;
  t14233 = -1.*t7964*t13515*t13004;
  t14234 = t11540*t13515*t13131;
  t14250 = t7964*t13578*t13500;
  t14533 = t2266*t2268;
  t14537 = -1.*t2167*t2274;
  t14538 = t14533 + t14537;
  t14556 = t4346*t2039*t14538;
  t14562 = -1.*t2092*t14538*t4375;
  t14566 = t14556 + t14562;
  t14580 = t2039*t2092*t14538;
  t14581 = t4346*t14538*t4375;
  t14582 = t14580 + t14581;
  t14587 = t7964*t3955;
  t14589 = -1.*t11540*t14566;
  t14600 = t14587 + t14589;
  t14614 = -0.28121*t2268;
  t14619 = -1.*t12740*t2268;
  t14620 = 0.305*t2167*t2274;
  t14621 = t14614 + t14619 + t14620;
  t14624 = t2039*t2092*t14621;
  t14625 = t4346*t14621*t4375;
  t14631 = t14624 + t14625;
  t14636 = t4346*t2039*t14621;
  t14637 = -1.*t2092*t14621*t4375;
  t14643 = t14636 + t14637;
  t14633 = -1.*t12310*t14631;
  t14653 = 0.28121*t2167;
  t14670 = t14653 + t12856 + t12896;
  t14676 = t14631*t12430;
  t14696 = t14670*t11540;
  t14699 = t7964*t14643;
  t14702 = t14696 + t14699;
  t14708 = t7964*t14670;
  t14711 = -1.*t11540*t14643;
  t14712 = t14708 + t14711;
  t14770 = t12775*t3955;
  t14781 = t11450*t14670;
  t14855 = Power(t4346,2);
  t14862 = Power(t2092,2);
  t14828 = -1.*t14670*t12489;
  t14917 = t14631*t4996;
  t14924 = t14582*t13108;
  t14553 = t3955*t11540;
  t14567 = t7964*t14566;
  t14568 = t14553 + t14567;
  t14949 = -1.*t14631*t12430;
  t11769 = t5323*t4996;
  t11771 = -1.*t1973*t11669;
  t11782 = t11769 + t11771;
  t15017 = t12310*t14631;
  t15030 = -1.*t14631*t4996;
  t15032 = -1.*t14582*t13108;
  t14540 = -0.15121*t14538;
  t14542 = -0.15121*t11450;
  t14543 = t14540 + t14542;
  t14544 = var2[15]*t14543;
  t14546 = -1.*t2092*t12926;
  t14547 = t4346*t12957;
  t14548 = t14546 + t14547;
  t12586 = t5323*t12430;
  t12602 = -1.*t1973*t12558;
  t12611 = t12586 + t12602;
  t15190 = 0.305*t2266*t2268;
  t15205 = t15190 + t12762;
  t15206 = t2039*t2092*t15205;
  t15227 = t4346*t15205*t4375;
  t15230 = t15206 + t15227;
  t15238 = t4346*t2039*t15205;
  t15240 = -1.*t2092*t15205*t4375;
  t15241 = t15238 + t15240;
  t15246 = t2039*t2092*t12489;
  t15250 = t4346*t12489*t4375;
  t15255 = t15246 + t15250;
  t15231 = -1.*t12310*t15230;
  t15258 = -0.305*t2167*t2266;
  t15259 = -0.305*t2268*t2274;
  t15260 = t15258 + t15259;
  t15269 = t4346*t2039*t12489;
  t15270 = -1.*t2092*t12489*t4375;
  t15271 = t15269 + t15270;
  t15262 = t15230*t12430;
  t15265 = t15255*t13108;
  t15280 = t15260*t11540;
  t15282 = t7964*t15241;
  t15284 = t15280 + t15282;
  t15287 = t7964*t15260;
  t15288 = -1.*t11540*t15241;
  t15290 = t15287 + t15288;
  t15296 = t14538*t11540;
  t15299 = t7964*t15271;
  t15301 = t15296 + t15299;
  t14765 = t3955*t12906;
  t14767 = t13978 + t14765;
  t14795 = -1.*t11450*t12906;
  t14800 = t14795 + t13925;
  t14871 = -1.*t4346*t11450*t12926;
  t14872 = -1.*t2092*t11450*t12957;
  t14873 = t13925 + t14871 + t14872;
  t15365 = t11450*t15260;
  t14900 = t4346*t3955*t12926;
  t14901 = t2092*t3955*t12957;
  t14902 = t13978 + t14900 + t14901;
  t15371 = -1.*t14538*t12775;
  t15375 = -1.*t15260*t12489;
  t15429 = t15230*t4996;
  t15444 = -1.*t15230*t12430;
  t15448 = -1.*t15255*t13108;
  t15317 = t7964*t14538;
  t15327 = -1.*t11540*t15271;
  t15333 = t15317 + t15327;
  t14994 = t2092*t12926;
  t14997 = -1.*t4346*t12957;
  t14998 = t14994 + t14997;
  t15617 = t12310*t15230;
  t15631 = -1.*t15230*t4996;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t1973*t4996 - 1.*t11669*t5323)*var2[1] + t11782*var2[2];
  p_output1[10]=(-1.*t12310*t1973 + t11540*t12248*t5323)*var2[1] + (t11540*t12248*t1973 + t12310*t5323)*var2[2];
  p_output1[11]=(-1.*t12430*t1973 - 1.*t12558*t5323)*var2[1] + t12611*var2[2];
  p_output1[12]=t11669*var2[0] - 1.*t12663*t1973*var2[1] + t12663*t5323*var2[2] + (t12706*(t11540*t12248*t12979 + t11540*t12248*t13004) + t12558*t13139 - 1.*t11540*t12248*t13288 + t12248*(t12558*t12979 + t12558*t13004 + t12706*t13131 + t13131*t13235)*t7964)*var2[3];
  p_output1[13]=-1.*t11540*t12248*var2[0] + t12248*t1973*t7964*var2[1] - 1.*t12248*t5323*t7964*var2[2] + ((-1.*t12558*t12979 - 1.*t12558*t13004 - 1.*t12706*t13131 - 1.*t13131*t13235)*t13333 + t12706*(t11669*t12979 + t11669*t13004 + t12663*t13131 + t13131*t13333) + t11669*t13374 + t12558*t13437)*var2[3];
  p_output1[14]=t12558*var2[0] - 1.*t13235*t1973*var2[1] + t13235*t5323*var2[2] + ((-1.*t11540*t12248*t12979 - 1.*t11540*t12248*t13004)*t13333 + t11669*t13471 - 1.*t11540*t12248*t13500 + t12248*(-1.*t11669*t12979 - 1.*t11669*t13004 - 1.*t12663*t13131 - 1.*t13131*t13333)*t7964)*var2[3];
  p_output1[15]=t13517 + t13527 + t13552 + (t13693 + t12706*(t13572 + t13596 - 1.*t12248*t13567*t13695 - 1.*t12248*t13567*t13699 + t13711 + t13712) + t13776 + t12248*t7964*(-1.*t11540*t12558*t13567 + t13616 + t13633 + t13719 + t13726 + t12706*t13567*t7964))*var2[3] + (t13559 + t12430*(-1.*t12248*t13567 + t13572 + t13585 + t13596) + t12310*(t12548*t13567 + t13616 + t13631 + t13633) + t13659)*var2[4];
  p_output1[16]=t13793 + t13843 + t13873 + (t14038 + t14042 + t13333*(t11540*t12558*t13567 + t13904 + t13917 + t14006 + t14009 - 1.*t12706*t13567*t7964) + t12706*(-1.*t11540*t11669*t13567 + t13961 + t13972 + t14027 + t14033 + t13333*t13567*t7964))*var2[3] + (t13958 + t12430*(t11616*t13567 + t13961 + t13967 + t13972) + t13987 + (-1.*t12548*t13567 + t13904 + t13907 + t13917)*t4996)*var2[4];
  p_output1[17]=t14058 + t14075 + t14102 + (t14190 + t13333*(t12248*t13567*t13695 + t12248*t13567*t13699 + t14123 + t14127 + t14208 + t14209) + t14250 + t12248*t7964*(t11540*t11669*t13567 + t14149 + t14156 + t14233 + t14234 - 1.*t13333*t13567*t7964))*var2[3] + (t14114 + t12310*(-1.*t11616*t13567 + t14149 + t14150 + t14156) + t14185 + (t12248*t13567 + t14123 + t14125 + t14127)*t4996)*var2[4];
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
  p_output1[45]=t13517 + t13527 + t13552 + (t13693 + t13776 + t12706*(t13572 + t13711 + t13712 - 1.*t12248*t13695*t14338 - 1.*t12248*t13699*t14338 + t14353) + t12248*t7964*(t13616 + t13719 + t13726 - 1.*t11540*t12558*t14338 + t14367 + t12706*t14338*t7964))*var2[3] + (t13559 + t13659 + t12430*(t13572 + t13585 - 1.*t12248*t14338 + t14353) + t12310*(t13616 + t13631 + t12548*t14338 + t14367))*var2[4] + t12489*(-1.*t12957*t2092 - 1.*t14313*t2092 - 1.*t12926*t4346 + t14290*t4346)*var2[5];
  p_output1[46]=t13793 + t13843 + t13873 + (t14038 + t14042 + t13333*(t13904 + t14006 + t14009 + t11540*t12558*t14338 + t14426 - 1.*t12706*t14338*t7964) + t12706*(t13961 + t14027 + t14033 - 1.*t11540*t11669*t14338 + t14432 + t13333*t14338*t7964))*var2[3] + (t13958 + t13987 + t12430*(t13961 + t13967 + t11616*t14338 + t14432) + (t13904 + t13907 - 1.*t12548*t14338 + t14426)*t4996)*var2[4] + (t11450*(t11450*t12926*t2092 - 1.*t11450*t14290*t2092 - 1.*t11450*t12957*t4346 - 1.*t11450*t14313*t4346) + t12489*(-1.*t12926*t2092*t3955 + t14290*t2092*t3955 + t12957*t3955*t4346 + t14313*t3955*t4346))*var2[5];
  p_output1[47]=t14058 + t14075 + t14102 + (t14190 + t14250 + t13333*(t14123 + t14208 + t14209 + t12248*t13695*t14338 + t12248*t13699*t14338 + t14467) + t12248*t7964*(t14149 + t14233 + t14234 + t11540*t11669*t14338 + t14483 - 1.*t13333*t14338*t7964))*var2[3] + (t14114 + t14185 + t12310*(t14149 + t14150 - 1.*t11616*t14338 + t14483) + (t14123 + t14125 + t12248*t14338 + t14467)*t4996)*var2[4] + t11450*(t12957*t2092 + t14313*t2092 + t12926*t4346 - 1.*t14290*t4346)*var2[5];
  p_output1[48]=t14544 + t14568*var2[0] + (-1.*t14600*t1973 + t14582*t5323)*var2[1] + (t14582*t1973 + t14600*t5323)*var2[2] + (t13139*t13333 + t12248*(t13426 + t13427 + t13434 + t14676 + t12706*t14702 + t12558*t14712)*t7964 + t12706*(t14633 + t11540*t12248*t14712 - 1.*t12248*t14702*t7964))*var2[3] + (t12430*(t14633 - 1.*t12248*t14643) + t12310*(t13426 + t13978 + t13980 + t12548*t14643 + t12489*t14670 + t14676) + t13558*t4996)*var2[4] + t11450*t14548*var2[5];
  p_output1[49]=(t13333*t13437 + t13374*t14568 + t12706*(t13004*t14568 + t13131*t14600 + t13333*t14702 + t11669*t14712 + t14917 + t14924) + t13333*(t13493 + t13496 + t13498 - 1.*t12706*t14702 - 1.*t12558*t14712 + t14949))*var2[3] + (t13955*t14582 + t12430*(t12961*t14566 + t11616*t14643 + t14770 + t14781 + t14917 + t14924) + t13986*t4996 + (t13493 + t14169 + t14170 - 1.*t12548*t14643 + t14828 + t14949)*t4996)*var2[4] + (t11450*t14902 + t14873*t3955 + t12489*(t14770 + t14781 + t12957*t14538*t2092 + t14621*t14855*t3955 + t14621*t14862*t3955 + t12926*t14538*t4346) + t11450*(t14169 + t14828 - 1.*t11450*t14621*t14855 - 1.*t11450*t14621*t14862 - 1.*t12957*t2092*t3955 - 1.*t12926*t3955*t4346))*var2[5] + (t11450*t14767 + t14800*t3955 + t11450*(t14169 - 1.*t11450*t14621 + t14828 - 1.*t12906*t3955) + t12489*(t12906*t14538 + t14770 + t14781 + t14621*t3955))*var2[15];
  p_output1[50]=t13333*var2[0] + t11782*var2[1] + (t1973*t4996 + t11669*t5323)*var2[2] + (t13471*t14568 + t12248*(-1.*t13004*t14568 - 1.*t13131*t14600 - 1.*t13333*t14702 - 1.*t11669*t14712 + t15030 + t15032)*t7964 + t13333*(-1.*t11540*t12248*t14712 + t15017 + t12248*t14702*t7964))*var2[3] + (t14112*t14582 + t12310*(-1.*t12961*t14566 - 1.*t11616*t14643 - 1.*t11450*t14670 + t15030 + t15032 - 1.*t12775*t3955) + (t12248*t14643 + t15017)*t4996)*var2[4] + t14998*t3955*var2[5];
  p_output1[51]=t14544 + t12706*var2[0] + t12611*var2[1] + (t12430*t1973 + t12558*t5323)*var2[2] + (t13139*t15301 + t12248*(t15262 + t15265 + t12706*t15284 + t12558*t15290 + t13004*t15301 + t13131*t15333)*t7964 + t12706*(t15231 + t11540*t12248*t15290 - 1.*t12248*t15284*t7964))*var2[3] + (t12430*(t15231 - 1.*t12248*t15241) + t13558*t15255 + t12310*(t12775*t14538 + t12548*t15241 + t12489*t15260 + t15262 + t15265 + t12961*t15271))*var2[4] + t14538*t14548*var2[5] + (0.28121*t2266 + t12740*t2266 - 0.305*Power(t2266,2))*var2[16];
  p_output1[52]=(t12706*t13374 + t13437*t15301 + t12706*(t13252 + t13284 + t13285 + t13333*t15284 + t11669*t15290 + t15429) + t13333*(-1.*t12706*t15284 - 1.*t12558*t15290 - 1.*t13004*t15301 - 1.*t13131*t15333 + t15444 + t15448))*var2[3] + (t12430*t13955 + t13986*t15255 + t12430*(t13252 + t13644 + t13645 + t11616*t15241 + t15365 + t15429) + (-1.*t12548*t15241 - 1.*t12961*t15271 + t15371 + t15375 + t15444 + t15448)*t4996)*var2[4] + (t12489*t14873 + t14538*t14902 + t12489*(t13644 + t15365 + t11450*t12957*t2092 + t14855*t15205*t3955 + t14862*t15205*t3955 + t11450*t12926*t4346) + t11450*(-1.*t11450*t14855*t15205 - 1.*t11450*t14862*t15205 + t15371 + t15375 - 1.*t12489*t12957*t2092 - 1.*t12489*t12926*t4346))*var2[5] + (t14538*t14767 + t12489*t14800 + t11450*(-1.*t12489*t12906 - 1.*t11450*t15205 + t15371 + t15375) + t12489*(t11450*t12906 + t13644 + t15365 + t15205*t3955))*var2[15];
  p_output1[53]=t15301*var2[0] + (-1.*t15333*t1973 + t15255*t5323)*var2[1] + (t15255*t1973 + t15333*t5323)*var2[2] + (t12706*t13471 + t12248*(t13353 + t13362 + t13363 - 1.*t13333*t15284 - 1.*t11669*t15290 + t15631)*t7964 + t13333*(-1.*t11540*t12248*t15290 + t15617 + t12248*t15284*t7964))*var2[3] + (t12430*t14112 + t12310*(t13353 + t13925 + t13928 - 1.*t11616*t15241 - 1.*t11450*t15260 + t15631) + (t12248*t15241 + t15617)*t4996)*var2[4] + t12489*t14998*var2[5] + (-0.28121*t2274 - 1.*t12740*t2274 + 0.305*t2266*t2274)*var2[16];
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

#include "dJh_RrFoot_ParallelStance.hh"

namespace SymFunction
{

void dJh_RrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
