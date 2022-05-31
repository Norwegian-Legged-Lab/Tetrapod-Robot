/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 16:59:07 GMT+02:00
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
  double t1744;
  double t1613;
  double t1732;
  double t1985;
  double t2139;
  double t2147;
  double t2172;
  double t2242;
  double t2251;
  double t2279;
  double t2378;
  double t1557;
  double t744;
  double t895;
  double t904;
  double t1455;
  double t2422;
  double t2519;
  double t1588;
  double t2689;
  double t2759;
  double t2825;
  double t2832;
  double t2854;
  double t2864;
  double t2505;
  double t2615;
  double t2621;
  double t2913;
  double t2915;
  double t2935;
  double t3071;
  double t3176;
  double t3243;
  double t3251;
  double t3282;
  double t3311;
  double t200;
  double t236;
  double t3855;
  double t3465;
  double t4056;
  double t4243;
  double t4272;
  double t4388;
  double t4391;
  double t4651;
  double t4735;
  double t4766;
  double t4799;
  double t4838;
  double t4855;
  double t4874;
  double t4275;
  double t4276;
  double t4278;
  double t4322;
  double t4343;
  double t4359;
  double t5198;
  double t5211;
  double t5262;
  double t5268;
  double t5270;
  double t5292;
  double t5322;
  double t5323;
  double t5325;
  double t5357;
  double t5358;
  double t5380;
  double t5381;
  double t5389;
  double t5401;
  double t5413;
  double t5415;
  double t5489;
  double t5500;
  double t5510;
  double t5457;
  double t5462;
  double t5485;
  double t5514;
  double t5521;
  double t5522;
  double t5543;
  double t5546;
  double t5547;
  double t5525;
  double t5526;
  double t5531;
  double t5538;
  double t5550;
  double t5557;
  double t5562;
  double t5569;
  double t5576;
  double t5582;
  double t5590;
  double t5645;
  double t5656;
  double t5660;
  double t5676;
  double t5699;
  double t5730;
  double t5858;
  double t5886;
  double t5893;
  double t6782;
  double t6788;
  double t6797;
  double t6816;
  double t6825;
  double t6851;
  double t7133;
  double t7134;
  double t7147;
  double t7077;
  double t7266;
  double t7273;
  double t7326;
  double t7621;
  double t7701;
  double t7722;
  double t7724;
  double t7798;
  double t7826;
  double t7840;
  double t7843;
  double t7884;
  double t7894;
  double t7906;
  double t8051;
  double t8106;
  double t8108;
  double t8472;
  double t8511;
  double t8563;
  double t9509;
  double t9510;
  double t9522;
  double t9663;
  double t9673;
  double t9674;
  double t9546;
  double t9570;
  double t9571;
  double t9585;
  double t9646;
  double t9662;
  double t9678;
  double t8565;
  double t8580;
  double t8622;
  double t8765;
  double t8773;
  double t9058;
  double t9108;
  double t9114;
  double t9456;
  double t9478;
  double t10291;
  double t10300;
  double t10301;
  double t10279;
  double t9647;
  double t10386;
  double t10387;
  double t10446;
  double t10467;
  double t10470;
  double t10474;
  double t9675;
  double t9793;
  double t9908;
  double t9909;
  double t10032;
  double t10475;
  double t10050;
  double t10056;
  double t10494;
  double t10098;
  double t10135;
  double t10154;
  double t11055;
  double t11064;
  double t11075;
  double t11156;
  double t11159;
  double t11165;
  double t11078;
  double t11080;
  double t11081;
  double t11090;
  double t11109;
  double t11110;
  double t11166;
  double t11171;
  double t11173;
  double t11082;
  double t11209;
  double t11211;
  double t11235;
  double t11243;
  double t11245;
  double t11223;
  double t11234;
  double t11259;
  double t11260;
  double t11261;
  double t11271;
  double t11274;
  double t11275;
  double t11279;
  double t11280;
  double t11282;
  double t11331;
  double t11334;
  double t11335;
  double t11340;
  double t11347;
  double t11348;
  double t11350;
  double t11389;
  double t11395;
  double t11427;
  double t11455;
  double t11456;
  double t11479;
  double t11495;
  double t11498;
  double t11474;
  double t11517;
  double t11518;
  double t11526;
  double t11528;
  double t11530;
  double t11543;
  double t11666;
  double t11688;
  double t11689;
  double t11703;
  double t11705;
  double t11706;
  double t11515;
  double t11756;
  double t11759;
  double t11768;
  double t11773;
  double t11775;
  double t11779;
  double t11794;
  double t11797;
  double t11812;
  double t11813;
  double t11816;
  double t11832;
  double t11836;
  double t11849;
  double t11851;
  double t11861;
  double t11863;
  double t1602;
  double t3836;
  double t12051;
  double t12060;
  double t12061;
  double t12109;
  double t12111;
  double t12122;
  double t11974;
  double t11979;
  double t12001;
  double t12018;
  double t12028;
  double t12035;
  double t11556;
  double t12256;
  double t12264;
  double t12270;
  double t12271;
  double t12272;
  double t12273;
  double t12274;
  double t12222;
  double t12228;
  double t12229;
  double t11724;
  double t11725;
  double t12312;
  double t12314;
  double t12319;
  double t12323;
  double t12329;
  double t12330;
  double t12347;
  double t12291;
  double t12292;
  double t12294;
  double t12304;
  double t12305;
  double t12308;
  double t12432;
  double t12437;
  double t12448;
  double t12462;
  double t12378;
  double t12406;
  double t12407;
  double t12408;
  double t12411;
  double t12421;
  double t12424;
  double t12425;
  double t12426;
  double t12434;
  double t12442;
  double t12456;
  double t12470;
  double t12714;
  double t12479;
  double t12506;
  double t12735;
  double t12544;
  double t12545;
  double t12590;
  double t12598;
  double t8240;
  double t8297;
  double t8303;
  double t12994;
  double t12999;
  double t13009;
  double t13019;
  double t13002;
  double t13059;
  double t13069;
  double t13094;
  double t11292;
  double t11293;
  double t11294;
  double t13172;
  double t13174;
  double t13182;
  double t13184;
  double t11306;
  double t11336;
  double t11338;
  double t13334;
  double t13347;
  double t13371;
  double t13378;
  double t10830;
  double t10833;
  double t13474;
  double t13476;
  double t13478;
  double t13495;
  double t13497;
  double t13502;
  double t13510;
  double t13511;
  double t13512;
  double t10872;
  double t13516;
  double t13523;
  double t13524;
  double t13527;
  double t13528;
  double t13530;
  double t10883;
  double t10884;
  double t10888;
  double t10902;
  double t10903;
  double t10942;
  double t11016;
  double t11042;
  double t13379;
  double t13548;
  double t13549;
  double t13550;
  double t13552;
  double t13553;
  double t13554;
  double t13556;
  double t13540;
  double t13541;
  double t13542;
  double t13422;
  double t13426;
  double t13577;
  double t13578;
  double t13580;
  double t13582;
  double t13583;
  double t13584;
  double t13589;
  double t13559;
  double t13560;
  double t13562;
  double t13564;
  double t13565;
  double t13566;
  double t13666;
  double t13676;
  double t13625;
  double t13632;
  double t13633;
  double t13635;
  double t4987;
  double t5376;
  double t5399;
  double t13706;
  double t13721;
  double t13724;
  double t13916;
  double t13921;
  double t13954;
  double t13975;
  double t13820;
  double t13822;
  double t13863;
  double t13872;
  double t13889;
  double t13892;
  double t13895;
  double t13898;
  double t13903;
  double t13904;
  double t13927;
  double t13956;
  double t13990;
  double t14006;
  double t14132;
  double t14009;
  double t14010;
  double t14150;
  double t14055;
  double t14067;
  double t14071;
  t1744 = Cos(var1[14]);
  t1613 = Sin(var1[14]);
  t1732 = 0.28121*t1613;
  t1985 = -1.*t1744;
  t2139 = 1. + t1985;
  t2147 = 0.50321*t2139;
  t2172 = 0.19821*t1744;
  t2242 = t2147 + t2172;
  t2251 = -1.*t2242*t1613;
  t2279 = -0.305*t1744*t1613;
  t2378 = t1732 + t2251 + t2279;
  t1557 = Sin(var1[12]);
  t744 = Cos(var1[12]);
  t895 = -1.*t744;
  t904 = 1. + t895;
  t1455 = 0.15121*t904;
  t2422 = Cos(var1[13]);
  t2519 = Sin(var1[13]);
  t1588 = -0.15121*t1557;
  t2689 = -1.*t2422;
  t2759 = 1. + t2689;
  t2825 = 0.28121*t2759;
  t2832 = t2422*t2242;
  t2854 = -0.305*t2519*t1613;
  t2864 = t2825 + t2832 + t2854;
  t2505 = t2422*t1744;
  t2615 = t2519*t1613;
  t2621 = t2505 + t2615;
  t2913 = t744*t2864;
  t2915 = t1455 + t2913;
  t2935 = t1557*t2915;
  t3071 = -0.15121*t904;
  t3176 = -0.15121*t744;
  t3243 = t1557*t2864;
  t3251 = t3071 + t3176 + t1588 + t3243;
  t3282 = -1.*t744*t3251;
  t3311 = t2935 + t3282;
  t200 = Cos(var1[4]);
  t236 = Cos(var1[5]);
  t3855 = Sin(var1[5]);
  t3465 = Sin(var1[4]);
  t4056 = t744*t200*t236;
  t4243 = -1.*t200*t1557*t3855;
  t4272 = t4056 + t4243;
  t4388 = -1.*t1744*t2519;
  t4391 = t2422*t1613;
  t4651 = t4388 + t4391;
  t4735 = t4651*t3465;
  t4766 = t744*t236*t2621;
  t4799 = -1.*t1557*t2621*t3855;
  t4838 = t4766 + t4799;
  t4855 = t200*t4838;
  t4874 = t4735 + t4855;
  t4275 = -1.*t2519*t3465;
  t4276 = t2422*t4272;
  t4278 = t4275 + t4276;
  t4322 = t2422*t3465;
  t4343 = t2519*t4272;
  t4359 = t4322 + t4343;
  t5198 = Sin(var1[3]);
  t5211 = t236*t1557*t2621;
  t5262 = t744*t2621*t3855;
  t5268 = t5211 + t5262;
  t5270 = t5198*t5268;
  t5292 = Cos(var1[3]);
  t5322 = t200*t4651;
  t5323 = -1.*t3465*t4838;
  t5325 = t5322 + t5323;
  t5357 = t5292*t5325;
  t5358 = t5270 + t5357;
  t5380 = t5292*t5268;
  t5381 = -1.*t5198*t5325;
  t5389 = t5380 + t5381;
  t5401 = t1744*t2519;
  t5413 = -1.*t2422*t1613;
  t5415 = t5401 + t5413;
  t5489 = t744*t236;
  t5500 = -1.*t1557*t3855;
  t5510 = t5489 + t5500;
  t5457 = t236*t1557*t5415;
  t5462 = t744*t5415*t3855;
  t5485 = t5457 + t5462;
  t5514 = t236*t3251;
  t5521 = t2915*t3855;
  t5522 = t5514 + t5521;
  t5543 = t236*t2915;
  t5546 = -1.*t3251*t3855;
  t5547 = t5543 + t5546;
  t5525 = -1.*t5510*t5522;
  t5526 = -1.*t236*t1557;
  t5531 = -1.*t744*t3855;
  t5538 = t5526 + t5531;
  t5550 = -1.*t5538*t5547;
  t5557 = t5525 + t5550;
  t5562 = t5485*t5557;
  t5569 = 0.28121*t2519;
  t5576 = -1.*t2242*t2519;
  t5582 = -0.305*t2422*t1613;
  t5590 = t5569 + t5576 + t5582;
  t5645 = t5590*t2621;
  t5656 = t5485*t5522;
  t5660 = t744*t236*t5415;
  t5676 = -1.*t1557*t5415*t3855;
  t5699 = t5660 + t5676;
  t5730 = t5699*t5547;
  t5858 = t5645 + t5656 + t5730;
  t5886 = t5510*t5858;
  t5893 = t5562 + t5886;
  t6782 = t2621*t3465;
  t6788 = t200*t5699;
  t6797 = t6782 + t6788;
  t6816 = t5590*t3465;
  t6825 = t200*t5547;
  t6851 = t6816 + t6825;
  t7133 = t200*t5590;
  t7134 = -1.*t3465*t5547;
  t7147 = t7133 + t7134;
  t7077 = -1.*t200*t5538*t6851;
  t7266 = t3465*t5538*t7147;
  t7273 = t5525 + t7077 + t7266;
  t7326 = t6797*t7273;
  t7621 = t6797*t6851;
  t7701 = t200*t2621;
  t7722 = -1.*t3465*t5699;
  t7724 = t7701 + t7722;
  t7798 = t7724*t7147;
  t7826 = t5656 + t7621 + t7798;
  t7840 = t200*t5538*t7826;
  t7843 = t7326 + t7840;
  t7884 = -1.*t4651*t3465;
  t7894 = -1.*t200*t4838;
  t7906 = t7884 + t7894;
  t8051 = -1.*t5590*t3465;
  t8106 = -1.*t200*t5547;
  t8108 = t8051 + t8106;
  t8472 = -1.*t236*t1557*t2621;
  t8511 = -1.*t744*t2621*t3855;
  t8563 = t8472 + t8511;
  t9509 = -1.*t236*t3251;
  t9510 = -1.*t2915*t3855;
  t9522 = t9509 + t9510;
  t9663 = -1.*t236*t1557*t5415;
  t9673 = -1.*t744*t5415*t3855;
  t9674 = t9663 + t9673;
  t9546 = -1.*t5538*t5522;
  t9570 = -1.*t5510*t5547;
  t9571 = -1.*t744*t236;
  t9585 = t1557*t3855;
  t9646 = t9571 + t9585;
  t9662 = t5699*t5522;
  t9678 = t5485*t5547;
  t8565 = var2[0]*t200*t8563;
  t8580 = t5198*t3465*t8563;
  t8622 = t5292*t4838;
  t8765 = t8580 + t8622;
  t8773 = var2[1]*t8765;
  t9058 = -1.*t5292*t3465*t8563;
  t9108 = t5198*t4838;
  t9114 = t9058 + t9108;
  t9456 = var2[2]*t9114;
  t9478 = t5699*t5557;
  t10291 = 0.15121*t1557;
  t10300 = -1.*t1557*t2864;
  t10301 = t10291 + t10300;
  t10279 = t3176 + t2913;
  t9647 = -1.*t9646*t5547;
  t10386 = t236*t10301;
  t10387 = -1.*t10279*t3855;
  t10446 = t10386 + t10387;
  t10467 = t236*t10279;
  t10470 = t10301*t3855;
  t10474 = t10467 + t10470;
  t9675 = t9674*t5547;
  t9793 = t5538*t5858;
  t9908 = t200*t9674*t7273;
  t9909 = Power(t200,2);
  t10032 = Power(t3465,2);
  t10475 = -1.*t5510*t10474;
  t10050 = -1.*t200*t9646*t6851;
  t10056 = t3465*t9646*t7147;
  t10494 = t5485*t10474;
  t10098 = t200*t9674*t6851;
  t10135 = -1.*t3465*t9674*t7147;
  t10154 = t200*t9646*t7826;
  t11055 = -0.305*t1744*t2519;
  t11064 = 0.305*t2422*t1613;
  t11075 = t11055 + t11064;
  t11156 = -1.*t2422*t1744;
  t11159 = -1.*t2519*t1613;
  t11165 = t11156 + t11159;
  t11078 = t236*t1557*t11075;
  t11080 = t744*t11075*t3855;
  t11081 = t11078 + t11080;
  t11090 = t744*t236*t11075;
  t11109 = -1.*t1557*t11075*t3855;
  t11110 = t11090 + t11109;
  t11166 = t236*t1557*t11165;
  t11171 = t744*t11165*t3855;
  t11173 = t11166 + t11171;
  t11082 = -1.*t5510*t11081;
  t11209 = -0.305*t2422*t1744;
  t11211 = t11209 + t2854;
  t11235 = t744*t236*t11165;
  t11243 = -1.*t1557*t11165*t3855;
  t11245 = t11235 + t11243;
  t11223 = t5485*t11081;
  t11234 = t11173*t5522;
  t11259 = t11211*t3465;
  t11260 = t200*t11110;
  t11261 = t11259 + t11260;
  t11271 = t200*t11211;
  t11274 = -1.*t3465*t11110;
  t11275 = t11271 + t11274;
  t11279 = t5415*t3465;
  t11280 = t200*t11245;
  t11282 = t11279 + t11280;
  t11331 = t744*t236*t4651;
  t11334 = -1.*t1557*t4651*t3855;
  t11335 = t11331 + t11334;
  t11340 = t236*t1557*t4651;
  t11347 = t744*t4651*t3855;
  t11348 = t11340 + t11347;
  t11350 = t200*t11165;
  t11389 = -1.*t3465*t11335;
  t11395 = t11350 + t11389;
  t11427 = t236*t1557*t5590;
  t11455 = t744*t5590*t3855;
  t11456 = t11427 + t11455;
  t11479 = t744*t236*t5590;
  t11495 = -1.*t1557*t5590*t3855;
  t11498 = t11479 + t11495;
  t11474 = -1.*t5510*t11456;
  t11517 = 0.28121*t2422;
  t11518 = -1.*t2422*t2242;
  t11526 = 0.305*t2519*t1613;
  t11528 = t11517 + t11518 + t11526;
  t11530 = t5485*t11456;
  t11543 = t5268*t5522;
  t11666 = t11528*t3465;
  t11688 = t200*t11498;
  t11689 = t11666 + t11688;
  t11703 = t200*t11528;
  t11705 = -1.*t3465*t11498;
  t11706 = t11703 + t11705;
  t11515 = t5590*t4651;
  t11756 = -1.*t5415*t2864;
  t11759 = -1.*t5590*t2621;
  t11768 = t11756 + t11759;
  t11773 = t4651*t11768;
  t11775 = t2864*t2621;
  t11779 = t11515 + t11775;
  t11794 = t2621*t11779;
  t11797 = -0.15121 + t11773 + t11794;
  t11812 = -1.*t744*t5415*t2915;
  t11813 = -1.*t1557*t5415*t3251;
  t11816 = t11759 + t11812 + t11813;
  t11832 = t4651*t11816;
  t11836 = t744*t2621*t2915;
  t11849 = t1557*t2621*t3251;
  t11851 = t11515 + t11836 + t11849;
  t11861 = t2621*t11851;
  t11863 = t11832 + t11861;
  t1602 = t1455 + t1588;
  t3836 = t3071 + t1588;
  t12051 = t5198*t3465*t5538;
  t12060 = t5292*t5510;
  t12061 = t12051 + t12060;
  t12109 = -1.*t5292*t3465*t5538;
  t12111 = t5198*t5510;
  t12122 = t12109 + t12111;
  t11974 = t236*t5198*t3465;
  t11979 = t5292*t3855;
  t12001 = t11974 + t11979;
  t12018 = t5292*t236;
  t12028 = -1.*t5198*t3465*t3855;
  t12035 = t12018 + t12028;
  t11556 = t4838*t5547;
  t12256 = -1.*t5485*t5522;
  t12264 = -1.*t5699*t5547;
  t12270 = t11759 + t12256 + t12264;
  t12271 = t5268*t12270;
  t12272 = t11515 + t11543 + t11556;
  t12273 = t5485*t12272;
  t12274 = t12271 + t12273;
  t12222 = t744*t12001;
  t12228 = t1557*t12035;
  t12229 = t12222 + t12228;
  t11724 = t4874*t6851;
  t11725 = t5325*t7147;
  t12312 = -1.*t6797*t6851;
  t12314 = -1.*t7724*t7147;
  t12319 = t12256 + t12312 + t12314;
  t12323 = t4874*t12319;
  t12329 = t11543 + t11724 + t11725;
  t12330 = t6797*t12329;
  t12347 = t12323 + t12330;
  t12291 = t200*t2519*t5198;
  t12292 = t2422*t12229;
  t12294 = t12291 + t12292;
  t12304 = -1.*t2422*t200*t5198;
  t12305 = t2519*t12229;
  t12308 = t12304 + t12305;
  t12432 = -1.*t5699*t5522;
  t12437 = -1.*t5485*t5547;
  t12448 = t4838*t5522;
  t12462 = t5268*t5547;
  t12378 = var2[0]*t200*t9646;
  t12406 = t5198*t5538;
  t12407 = -1.*t5292*t3465*t9646;
  t12408 = t12406 + t12407;
  t12411 = var2[2]*t12408;
  t12421 = t5292*t5538;
  t12424 = t5198*t3465*t9646;
  t12425 = t12421 + t12424;
  t12426 = var2[1]*t12425;
  t12434 = -1.*t9674*t5547;
  t12442 = t4838*t12270;
  t12456 = t8563*t5547;
  t12470 = t5699*t12272;
  t12714 = -1.*t5485*t10474;
  t12479 = -1.*t200*t9674*t6851;
  t12506 = t3465*t9674*t7147;
  t12735 = t5268*t10474;
  t12544 = t200*t8563*t6851;
  t12545 = -1.*t3465*t8563*t7147;
  t12590 = t200*t8563*t12319;
  t12598 = t200*t9674*t12329;
  t8240 = -1.*t2621*t3465;
  t8297 = -1.*t200*t5699;
  t8303 = t8240 + t8297;
  t12994 = t4651*t11211;
  t12999 = -1.*t5415*t5590;
  t13009 = Power(t744,2);
  t13019 = Power(t1557,2);
  t13002 = -1.*t11211*t2621;
  t13059 = t11081*t5268;
  t13069 = -1.*t5485*t11081;
  t13094 = -1.*t11173*t5522;
  t11292 = t200*t5415;
  t11293 = -1.*t3465*t11245;
  t11294 = t11292 + t11293;
  t13172 = t5590*t11165;
  t13174 = t4651*t11528;
  t13182 = -1.*t5590*t4651;
  t13184 = -1.*t11528*t2621;
  t11306 = t11165*t3465;
  t11336 = t200*t11335;
  t11338 = t11306 + t11336;
  t13334 = t11456*t5268;
  t13347 = t11348*t5522;
  t13371 = -1.*t5485*t11456;
  t13378 = -1.*t5268*t5522;
  t10830 = 0.28121*t1744;
  t10833 = -1.*t2242*t1744;
  t13474 = Power(t1613,2);
  t13476 = 0.305*t13474;
  t13478 = t10830 + t10833 + t13476;
  t13495 = -0.15121*t5415;
  t13497 = -0.15121*t4651;
  t13502 = t13495 + t13497;
  t13510 = -1.*t1557*t2915;
  t13511 = t744*t3251;
  t13512 = t13510 + t13511;
  t10872 = var2[0]*t6797;
  t13516 = -1.*t5292*t236*t3465;
  t13523 = t5198*t3855;
  t13524 = t13516 + t13523;
  t13527 = t236*t5198;
  t13528 = t5292*t3465*t3855;
  t13530 = t13527 + t13528;
  t10883 = t5198*t5485;
  t10884 = t5292*t7724;
  t10888 = t10883 + t10884;
  t10902 = var2[2]*t10888;
  t10903 = t5292*t5485;
  t10942 = -1.*t5198*t7724;
  t11016 = t10903 + t10942;
  t11042 = var2[1]*t11016;
  t13379 = -1.*t4838*t5547;
  t13548 = t5510*t5522;
  t13549 = t5538*t5547;
  t13550 = t13548 + t13549;
  t13552 = t5268*t13550;
  t13553 = t13182 + t13378 + t13379;
  t13554 = t5510*t13553;
  t13556 = t13552 + t13554;
  t13540 = t744*t13524;
  t13541 = t1557*t13530;
  t13542 = t13540 + t13541;
  t13422 = -1.*t4874*t6851;
  t13426 = -1.*t5325*t7147;
  t13577 = t200*t5538*t6851;
  t13578 = -1.*t3465*t5538*t7147;
  t13580 = t13548 + t13577 + t13578;
  t13582 = t4874*t13580;
  t13583 = t13378 + t13422 + t13426;
  t13584 = t200*t5538*t13583;
  t13589 = t13582 + t13584;
  t13559 = -1.*t5292*t200*t2519;
  t13560 = t2422*t13542;
  t13562 = t13559 + t13560;
  t13564 = t2422*t5292*t200;
  t13565 = t2519*t13542;
  t13566 = t13564 + t13565;
  t13666 = t5510*t11081;
  t13676 = -1.*t11081*t5268;
  t13625 = -0.15121*t11165;
  t13632 = -0.15121*t2621;
  t13633 = t13625 + t13632;
  t13635 = var2[12]*t13633;
  t4987 = var2[0]*t4874;
  t5376 = var2[2]*t5358;
  t5399 = var2[1]*t5389;
  t13706 = t5510*t11456;
  t13721 = -1.*t11456*t5268;
  t13724 = -1.*t11348*t5522;
  t13916 = t5538*t5522;
  t13921 = t5510*t5547;
  t13954 = -1.*t4838*t5522;
  t13975 = -1.*t5268*t5547;
  t13820 = var2[0]*t200*t9674;
  t13822 = t5198*t3465*t9674;
  t13863 = t5292*t5699;
  t13872 = t13822 + t13863;
  t13889 = var2[1]*t13872;
  t13892 = -1.*t5292*t3465*t9674;
  t13895 = t5198*t5699;
  t13898 = t13892 + t13895;
  t13903 = var2[2]*t13898;
  t13904 = t4838*t13550;
  t13927 = t9646*t5547;
  t13956 = -1.*t8563*t5547;
  t13990 = t5538*t13553;
  t14006 = t200*t8563*t13580;
  t14132 = t5510*t10474;
  t14009 = t200*t9646*t6851;
  t14010 = -1.*t3465*t9646*t7147;
  t14150 = -1.*t5268*t10474;
  t14055 = -1.*t200*t8563*t6851;
  t14067 = t3465*t8563*t7147;
  t14071 = t200*t9646*t13583;
  p_output1[0]=t1602*t200*t236 + 0.28121*t2519*t3465 - 1.*t200*t3836*t3855 + 0.28121*t2759*t4272 + 0.50321*t2139*t4278 - 0.50321*t1613*t4359 + 0.19821*(t1744*t4278 + t1613*t4359) + t4987 + t5376 + t5399 - 0.15121*(-1.*t1557*t200*t236 - 1.*t200*t3855*t744) + var1[0] + t7843*var2[3] + ((-1.*t5198*t5268 - 1.*t5292*t5325)*var2[1] + t5389*var2[2])*var2[3] + t5893*var2[4] + (t5325*var2[0] - 1.*t5198*t7906*var2[1] + t5292*t7906*var2[2] + (t7273*t7724 - 1.*t3465*t5538*t7826 + t6797*(t3465*t5538*t6851 + t3465*t5538*t8108) + t200*t5538*(t6797*t7147 + t6851*t7724 + t7724*t8108 + t7147*t8303))*var2[3])*var2[4] + t2621*t3311*var2[5] + (t8565 + t8773 + t9456 + (t10154 + t200*t5538*(t10098 + t10135 + t200*t6797*t9522 - 1.*t3465*t7724*t9522 + t9662 + t9678) + t9908 + t6797*(t10050 + t10056 - 1.*t10032*t5538*t9522 + t9546 + t9570 - 1.*t5538*t9522*t9909))*var2[3] + (t9478 + t5485*(-1.*t5538*t9522 + t9546 + t9570 + t9647) + t5510*(t5699*t9522 + t9662 + t9675 + t9678) + t9793)*var2[4])*var2[5] + (t8565 + t8773 + t9456 + (t10154 + t200*t5538*(t10098 + t10135 + t10494 + t10446*t200*t6797 - 1.*t10446*t3465*t7724 + t9662) + t9908 + t6797*(t10050 + t10056 + t10475 - 1.*t10032*t10446*t5538 + t9546 - 1.*t10446*t5538*t9909))*var2[3] + (t9478 + t5485*(t10475 - 1.*t10446*t5538 + t9546 + t9647) + t5510*(t10494 + t10446*t5699 + t9662 + t9675) + t9793)*var2[4] + t2621*(t10301*t1557 + t1557*t3251 - 1.*t10279*t744 + t2915*t744)*var2[5])*var2[12] + t2378*var2[13] + (t11338*var2[0] + (-1.*t11395*t5198 + t11348*t5292)*var2[1] + (t11348*t5198 + t11395*t5292)*var2[2] + ((t11474 - 1.*t11689*t200*t5538 + t11706*t3465*t5538)*t6797 + t4874*t7273 + t200*t5538*(t11530 + t11543 + t11724 + t11725 + t11689*t6797 + t11706*t7724))*var2[3] + (t5485*(t11474 - 1.*t11498*t5538) + t5268*t5557 + t5510*(t11515 + t11530 + t11543 + t11556 + t11528*t2621 + t11498*t5699))*var2[4] + t3311*t4651*var2[5])*var2[13] + (t10872 + t10902 + t11042 + ((t11082 - 1.*t11261*t200*t5538 + t11275*t3465*t5538)*t6797 + t11282*t7273 + t200*t5538*(t11223 + t11234 + t11261*t6797 + t11282*t6851 + t11294*t7147 + t11275*t7724))*var2[3] + (t5485*(t11082 - 1.*t11110*t5538) + t11173*t5557 + t5510*(t11223 + t11234 + t11211*t2621 + t11245*t5547 + t5415*t5590 + t11110*t5699))*var2[4] + t3311*t5415*var2[5] + (t10830 + t10833 - 0.305*Power(t1744,2))*var2[13])*var2[14] + t4874*var3[0] + t5389*var3[1] + t5358*var3[2] + t7843*var3[3] + t5893*var3[4] + t2621*t3311*var3[5] + t2378*var3[13] - 1.*var4[0];
  p_output1[1]=t12001*t1602 - 0.50321*t12308*t1613 + 0.19821*(t12308*t1613 + t12294*t1744) + 0.50321*t12294*t2139 + 0.28121*t12229*t2759 + t12035*t3836 - 0.28121*t200*t2519*t5198 - 0.15121*(-1.*t12001*t1557 + t12035*t744) + var1[1] + t200*t5538*var2[0] + t12061*var2[1] + t12122*var2[2] + t12347*var2[3] + ((-1.*t5198*t5510 + t3465*t5292*t5538)*var2[1] + t12061*var2[2])*var2[3] + t12274*var2[4] + (-1.*t3465*t5538*var2[0] + t200*t5198*t5538*var2[1] - 1.*t200*t5292*t5538*var2[2] + (t12319*t5325 + t12329*t7724 + t6797*(t5325*t6851 + t4874*t7147 + t7147*t7906 + t5325*t8108) + t4874*(-1.*t6797*t7147 - 1.*t6851*t7724 - 1.*t7724*t8108 - 1.*t7147*t8303))*var2[3])*var2[4] + t11863*var2[5] + (t12378 + t12411 + t12426 + (t12590 + t12598 + t6797*(t12448 + t12462 + t12544 + t12545 + t200*t4874*t9522 - 1.*t3465*t5325*t9522) + t4874*(t12432 + t12437 + t12479 + t12506 - 1.*t200*t6797*t9522 + t3465*t7724*t9522))*var2[3] + (t12442 + t12470 + t5485*(t12448 + t12456 + t12462 + t4838*t9522) + t5268*(t12432 + t12434 + t12437 - 1.*t5699*t9522))*var2[4])*var2[5] + t11797*var2[12] + (t12378 + t12411 + t12426 + (t12590 + t12598 + (t12448 + t12544 + t12545 + t12735 + t10446*t200*t4874 - 1.*t10446*t3465*t5325)*t6797 + t4874*(t12432 + t12479 + t12506 + t12714 - 1.*t10446*t200*t6797 + t10446*t3465*t7724))*var2[3] + (t12442 + t12470 + (t12448 + t12456 + t12735 + t10446*t4838)*t5485 + t5268*(t12432 + t12434 + t12714 - 1.*t10446*t5699))*var2[4] + (t2621*(t10279*t1557*t2621 - 1.*t1557*t2621*t2915 + t10301*t2621*t744 + t2621*t3251*t744) + t4651*(-1.*t10279*t1557*t5415 + t1557*t2915*t5415 - 1.*t10301*t5415*t744 - 1.*t3251*t5415*t744))*var2[5])*var2[12] + ((t11338*t12319 + t12329*t4874 + t6797*(t13334 + t13347 + t11689*t4874 + t11706*t5325 + t11338*t6851 + t11395*t7147) + t4874*(t13371 + t13378 + t13422 + t13426 - 1.*t11689*t6797 - 1.*t11706*t7724))*var2[3] + (t11348*t12270 + t12272*t5268 + t5485*(t13172 + t13174 + t13334 + t13347 + t11498*t4838 + t11335*t5547) + t5268*(t13182 + t13184 + t13371 + t13378 + t13379 - 1.*t11498*t5699))*var2[4] + (t11165*t11816 + t11851*t4651 + t4651*(t13182 + t13184 - 1.*t1557*t2621*t3251 - 1.*t13009*t5415*t5590 - 1.*t13019*t5415*t5590 - 1.*t2621*t2915*t744) + t2621*(t13172 + t13174 + t1557*t3251*t4651 + t13009*t2621*t5590 + t13019*t2621*t5590 + t2915*t4651*t744))*var2[5] + (t11165*t11768 + t11779*t4651 + (t12999 + t13182 + t13184 - 1.*t2621*t2864)*t4651 + t2621*(t13172 + t13174 + t2864*t4651 + t5645))*var2[12])*var2[13] + ((t11282*t12329 + t12319*t6797 + t4874*(t13069 + t13094 - 1.*t11261*t6797 - 1.*t11282*t6851 - 1.*t11294*t7147 - 1.*t11275*t7724) + t6797*(t13059 + t11261*t4874 + t11275*t5325 + t5656 + t7621 + t7798))*var2[3] + (t11173*t12272 + t12270*t5485 + t5268*(t12999 + t13002 + t13069 + t13094 - 1.*t11245*t5547 - 1.*t11110*t5699) + t5485*(t12994 + t13059 + t11110*t4838 + t5645 + t5656 + t5730))*var2[4] + (t11816*t2621 + t11851*t5415 + t4651*(t12999 + t13002 - 1.*t11165*t1557*t3251 - 1.*t11075*t13009*t5415 - 1.*t11075*t13019*t5415 - 1.*t11165*t2915*t744) + t2621*(t12994 + t11075*t13009*t2621 + t11075*t13019*t2621 + t1557*t3251*t5415 + t5645 + t2915*t5415*t744))*var2[5] + (t11768*t2621 + t11779*t5415 + t4651*(t12999 + t13002 - 1.*t11165*t2864 - 1.*t11075*t5415) + t2621*(t12994 + t11075*t2621 + t2864*t5415 + t5645))*var2[12])*var2[14] + t200*t5538*var3[0] + t12061*var3[1] + t12122*var3[2] + t12347*var3[3] + t12274*var3[4] + t11863*var3[5] + t11797*var3[12] - 1.*var4[1];
  p_output1[2]=t10872 + t10902 + t11042 + t13524*t1602 - 0.50321*t13566*t1613 + 0.19821*(t13566*t1613 + t13562*t1744) + 0.50321*t13562*t2139 + 0.28121*t13542*t2759 + t13530*t3836 + 0.28121*t200*t2519*t5292 - 0.15121*(-1.*t13524*t1557 + t13530*t744) + var1[2] + t13589*var2[3] + ((-1.*t5198*t5485 - 1.*t5292*t7724)*var2[1] + t11016*var2[2])*var2[3] + t13556*var2[4] + (t7724*var2[0] - 1.*t5198*t8303*var2[1] + t5292*t8303*var2[2] + (t13580*t5325 - 1.*t13583*t3465*t5538 + t200*t5538*(-1.*t5325*t6851 - 1.*t4874*t7147 - 1.*t7147*t7906 - 1.*t5325*t8108) + t4874*(-1.*t3465*t5538*t6851 - 1.*t3465*t5538*t8108))*var2[3])*var2[4] + t13512*t4651*var2[5] + (t13820 + t13889 + t13903 + (t14006 + t14071 + t200*t5538*(t13954 + t13975 + t14055 + t14067 - 1.*t200*t4874*t9522 + t3465*t5325*t9522) + t4874*(t13916 + t13921 + t14009 + t14010 + t10032*t5538*t9522 + t5538*t9522*t9909))*var2[3] + (t13904 + t13990 + t5510*(t13954 + t13956 + t13975 - 1.*t4838*t9522) + t5268*(t13916 + t13921 + t13927 + t5538*t9522))*var2[4])*var2[5] + t13502*var2[12] + (t13820 + t13889 + t13903 + (t14006 + t14071 + t200*(t13954 + t14055 + t14067 + t14150 - 1.*t10446*t200*t4874 + t10446*t3465*t5325)*t5538 + t4874*(t13916 + t14009 + t14010 + t14132 + t10032*t10446*t5538 + t10446*t5538*t9909))*var2[3] + (t13904 + t13990 + (t13954 + t13956 + t14150 - 1.*t10446*t4838)*t5510 + t5268*(t13916 + t13927 + t14132 + t10446*t5538))*var2[4] + t4651*(-1.*t10301*t1557 - 1.*t1557*t3251 + t10279*t744 - 1.*t2915*t744)*var2[5])*var2[12] + t13478*var2[13] + (t13635 + t4987 + t5376 + t5399 + (t11338*t13580 + t4874*(t13706 + t11689*t200*t5538 - 1.*t11706*t3465*t5538) + t200*t5538*(t13721 + t13724 - 1.*t11689*t4874 - 1.*t11706*t5325 - 1.*t11338*t6851 - 1.*t11395*t7147))*var2[3] + (t11348*t13550 + t5268*(t13706 + t11498*t5538) + t5510*(t13721 + t13724 - 1.*t11528*t4651 - 1.*t11498*t4838 - 1.*t11335*t5547 - 1.*t11165*t5590))*var2[4] + t11165*t13512*var2[5])*var2[13] - 0.305*var2[14] + (t13635 + t11282*var2[0] + (-1.*t11294*t5198 + t11173*t5292)*var2[1] + (t11173*t5198 + t11294*t5292)*var2[2] + (t200*(t12256 + t12312 + t12314 + t13676 - 1.*t11261*t4874 - 1.*t11275*t5325)*t5538 + t4874*(t13666 + t11261*t200*t5538 - 1.*t11275*t3465*t5538) + t13580*t6797)*var2[3] + (t13550*t5485 + (t11759 + t12256 + t12264 + t13676 - 1.*t11211*t4651 - 1.*t11110*t4838)*t5510 + t5268*(t13666 + t11110*t5538))*var2[4] + t13512*t2621*var2[5] + (-0.28121*t1613 + 0.305*t1613*t1744 + t1613*t2242)*var2[13])*var2[14] + t6797*var3[0] + t11016*var3[1] + t10888*var3[2] + t13589*var3[3] + t13556*var3[4] + t13512*t4651*var3[5] + t13502*var3[12] + t13478*var3[13] - 0.305*var3[14] - 1.*var4[2];
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

#include "ddh_FrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void ddh_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
