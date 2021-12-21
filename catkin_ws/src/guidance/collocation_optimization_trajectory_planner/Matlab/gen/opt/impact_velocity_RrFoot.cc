/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 20:16:52 GMT+01:00
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
  double t22;
  double t25;
  double t259;
  double t267;
  double t288;
  double t305;
  double t398;
  double t547;
  double t454;
  double t525;
  double t562;
  double t35;
  double t357;
  double t527;
  double t571;
  double t577;
  double t292;
  double t671;
  double t673;
  double t734;
  double t801;
  double t182;
  double t1050;
  double t368;
  double t316;
  double t362;
  double t379;
  double t390;
  double t609;
  double t617;
  double t666;
  double t741;
  double t757;
  double t1021;
  double t1024;
  double t1027;
  double t1063;
  double t1080;
  double t1090;
  double t1106;
  double t1130;
  double t1133;
  double t1138;
  double t119;
  double t1391;
  double t1394;
  double t1405;
  double t1455;
  double t1490;
  double t1563;
  double t1569;
  double t1576;
  double t1616;
  double t1649;
  double t908;
  double t1708;
  double t792;
  double t1187;
  double t1750;
  double t1148;
  double t1855;
  double t2004;
  double t2675;
  double t2190;
  double t2237;
  double t2747;
  double t2754;
  double t1989;
  double t2706;
  double t2924;
  double t3066;
  double t2322;
  double t2788;
  double t2793;
  double t2807;
  double t2829;
  double t2859;
  double t2862;
  double t2989;
  double t3005;
  double t3059;
  double t3067;
  double t3068;
  double t3071;
  double t3228;
  double t3238;
  double t3248;
  double t3258;
  double t3308;
  double t3377;
  double t3483;
  double t2931;
  double t3704;
  double t3449;
  double t4074;
  double t4079;
  double t4098;
  double t4277;
  double t2556;
  double t2701;
  double t2710;
  double t2714;
  double t2771;
  double t2772;
  double t2778;
  double t4627;
  double t4713;
  double t4722;
  double t2890;
  double t2892;
  double t2942;
  double t2949;
  double t2959;
  double t2966;
  double t2969;
  double t3112;
  double t3119;
  double t3128;
  double t3135;
  double t3180;
  double t3209;
  double t3220;
  double t3450;
  double t4741;
  double t4758;
  double t4762;
  double t3494;
  double t4770;
  double t4785;
  double t4788;
  double t3502;
  double t3505;
  double t4814;
  double t4823;
  double t4827;
  double t3707;
  double t3732;
  double t3746;
  double t3781;
  double t3877;
  double t3886;
  double t3938;
  double t3964;
  double t4159;
  double t4235;
  double t4247;
  double t4296;
  double t4348;
  double t4406;
  double t4506;
  double t4508;
  double t4510;
  double t4531;
  double t4568;
  double t4594;
  double t4595;
  double t4601;
  double t4612;
  double t4616;
  double t4617;
  double t4621;
  double t4622;
  double t4731;
  double t4763;
  double t4789;
  double t4828;
  double t4837;
  double t4844;
  double t4850;
  double t4852;
  double t4855;
  double t4864;
  double t4873;
  double t4889;
  double t4891;
  double t4894;
  double t4895;
  double t4897;
  double t4898;
  double t4900;
  double t4912;
  double t4189;
  double t4123;
  double t4141;
  double t4989;
  double t4990;
  double t4993;
  double t5023;
  double t5057;
  double t5076;
  double t5095;
  double t5096;
  double t5099;
  double t5101;
  double t5106;
  double t5108;
  double t5110;
  double t5118;
  double t5127;
  double t5133;
  double t5137;
  double t5141;
  double t4966;
  double t4969;
  double t4974;
  double t4977;
  double t4979;
  double t4984;
  double t4985;
  double t5211;
  double t5223;
  double t5224;
  double t5226;
  double t5237;
  double t5247;
  double t5250;
  double t5255;
  double t5263;
  double t5267;
  double t5276;
  double t5282;
  double t5290;
  double t5292;
  double t5293;
  double t5299;
  double t5301;
  double t5304;
  double t5305;
  double t5415;
  double t5423;
  double t5425;
  double t5426;
  double t5428;
  double t5434;
  double t5435;
  double t5438;
  double t5439;
  double t5451;
  double t5457;
  double t5467;
  double t5468;
  double t5485;
  double t5486;
  double t5487;
  double t5489;
  double t5493;
  double t5494;
  double t5501;
  double t5507;
  double t5510;
  double t5513;
  double t5514;
  double t5516;
  double t5856;
  double t5886;
  double t5907;
  double t5953;
  double t5956;
  double t5966;
  double t6025;
  double t6045;
  double t6046;
  double t6053;
  double t6061;
  double t6062;
  double t6065;
  double t6066;
  double t6067;
  double t6070;
  double t6072;
  double t6073;
  double t6077;
  double t6082;
  double t6083;
  double t4936;
  double t4942;
  double t4957;
  double t4958;
  double t6287;
  double t6293;
  double t6294;
  double t6311;
  double t6316;
  double t6327;
  double t6328;
  double t6335;
  double t6336;
  double t6338;
  double t6341;
  double t6343;
  double t6345;
  double t6348;
  double t6349;
  double t6350;
  double t81;
  double t88;
  double t189;
  double t196;
  double t206;
  double t212;
  double t817;
  double t864;
  double t962;
  double t963;
  double t965;
  double t1011;
  double t6511;
  double t6544;
  double t6555;
  double t1174;
  double t1178;
  double t1216;
  double t1304;
  double t1334;
  double t1349;
  double t6508;
  double t6509;
  double t6558;
  double t6570;
  double t1711;
  double t6577;
  double t6581;
  double t6583;
  double t6584;
  double t1765;
  double t6588;
  double t6589;
  double t6590;
  double t6592;
  double t1831;
  double t1874;
  double t1913;
  double t1942;
  double t1990;
  double t1995;
  double t2012;
  double t2034;
  double t2117;
  double t2136;
  double t2205;
  double t2218;
  double t2239;
  double t2242;
  double t2243;
  double t2258;
  double t2280;
  double t2296;
  double t2324;
  double t2327;
  double t2485;
  double t2525;
  double t6746;
  double t6752;
  double t6758;
  double t6759;
  double t6761;
  double t6762;
  double t6764;
  double t6765;
  double t6768;
  double t6770;
  double t6771;
  double t6772;
  double t6899;
  double t6904;
  double t6905;
  double t6907;
  double t6908;
  double t6910;
  double t6913;
  double t6917;
  double t6919;
  double t6920;
  double t6926;
  double t6929;
  double t6930;
  double t6931;
  double t6934;
  double t6935;
  double t6936;
  double t6938;
  double t6985;
  double t6986;
  double t6987;
  double t6993;
  double t7035;
  double t7135;
  double t7147;
  double t7153;
  double t7176;
  double t7205;
  double t7208;
  double t7212;
  double t7213;
  double t7219;
  double t7254;
  double t7280;
  double t7285;
  double t7476;
  double t7478;
  double t7482;
  double t7490;
  double t7491;
  double t7494;
  double t7496;
  double t7498;
  double t7500;
  double t7503;
  double t7509;
  double t7514;
  double t7515;
  double t7518;
  double t7520;
  double t7521;
  double t7582;
  double t7583;
  double t7584;
  double t7578;
  double t7581;
  double t7585;
  double t7587;
  double t7591;
  double t7614;
  double t7615;
  double t7622;
  double t7656;
  double t7668;
  double t7716;
  double t7741;
  double t7946;
  double t7947;
  double t7948;
  double t7950;
  double t7953;
  double t7954;
  double t7957;
  double t7958;
  double t7960;
  double t7962;
  double t7964;
  double t7966;
  t22 = Cos(var1[17]);
  t25 = Sin(var1[17]);
  t259 = Cos(var1[16]);
  t267 = -1.*t259;
  t288 = 1. + t267;
  t305 = Sin(var1[16]);
  t398 = Cos(var1[4]);
  t547 = Cos(var1[15]);
  t454 = Cos(var1[5]);
  t525 = Sin(var1[15]);
  t562 = Sin(var1[5]);
  t35 = 2.8e-11*t25;
  t357 = Sin(var1[4]);
  t527 = -1.*t398*t454*t525;
  t571 = -1.*t547*t398*t562;
  t577 = t527 + t571;
  t292 = -2.8e-11*t288;
  t671 = t547*t398*t454;
  t673 = -1.*t398*t525*t562;
  t734 = t671 + t673;
  t801 = -4.e-6*t25;
  t182 = 7.e-6*t25;
  t1050 = 4.e-6*t288;
  t368 = -7.e-6*t288;
  t316 = t292 + t305;
  t362 = t316*t357;
  t379 = -4.e-6*t305;
  t390 = t368 + t379;
  t609 = t390*t577;
  t617 = -1.000000000016*t288;
  t666 = 1. + t617;
  t741 = t666*t734;
  t757 = t362 + t609 + t741;
  t1021 = -1.000000000049*t288;
  t1024 = 1. + t1021;
  t1027 = t1024*t357;
  t1063 = -7.e-6*t305;
  t1080 = t1050 + t1063;
  t1090 = t1080*t577;
  t1106 = -1.*t305;
  t1130 = t292 + t1106;
  t1133 = t1130*t734;
  t1138 = t1027 + t1090 + t1133;
  t119 = -4.e-6*t22;
  t1391 = 7.e-6*t305;
  t1394 = t1050 + t1391;
  t1405 = t1394*t357;
  t1455 = -6.5e-11*t288;
  t1490 = 1. + t1455;
  t1563 = t1490*t577;
  t1569 = 4.e-6*t305;
  t1576 = t368 + t1569;
  t1616 = t1576*t734;
  t1649 = t1405 + t1563 + t1616;
  t908 = -1.*t22;
  t1708 = -2.8e-11*t25;
  t792 = -7.e-6*t22;
  t1187 = 4.e-6*t22;
  t1750 = -7.e-6*t25;
  t1148 = 7.e-6*t22;
  t1855 = 4.e-6*t25;
  t2004 = 2.8e-11*t305;
  t2675 = 1. + t908;
  t2190 = 7.e-6*t259;
  t2237 = 4.e-6*t259;
  t2747 = -1. + t22;
  t2754 = 4.e-6*t2747;
  t1989 = -7.e-6*t259;
  t2706 = 7.e-6*t2675;
  t2924 = 2.8e-11*t2675;
  t3066 = -2.8e-11*t305;
  t2322 = -4.e-6*t259;
  t2788 = t2190 + t1569;
  t2793 = t2788*t357;
  t2807 = -6.5e-11*t305*t577;
  t2829 = t2237 + t1063;
  t2859 = t2829*t734;
  t2862 = t2793 + t2807 + t2859;
  t2989 = -1.000000000049*t305*t357;
  t3005 = t1989 + t1569;
  t3059 = t3005*t577;
  t3067 = t267 + t3066;
  t3068 = t3067*t734;
  t3071 = t2989 + t3059 + t3068;
  t3228 = t259 + t3066;
  t3238 = t3228*t357;
  t3248 = t2322 + t1063;
  t3258 = t3248*t577;
  t3308 = -1.000000000016*t305*t734;
  t3377 = t3238 + t3258 + t3308;
  t3483 = -2.8e-11*t2675;
  t2931 = -1.*t25;
  t3704 = 4.e-6*t2675;
  t3449 = -7.e-6*t2675;
  t4074 = -1.*t547;
  t4079 = 1. + t4074;
  t4098 = -0.15121*t4079;
  t4277 = 7.e-6*t288;
  t2556 = 2.826290000000002e-7*var1[17];
  t2701 = -2.18904205e-16*t2675;
  t2710 = t2706 + t1855;
  t2714 = -0.5031510000080001*t2710;
  t2771 = t2754 + t182;
  t2772 = -0.038575000014*t2771;
  t2778 = t2556 + t2701 + t2714 + t2772;
  t4627 = -1.*t547*t398*t454;
  t4713 = t398*t525*t562;
  t4722 = t4627 + t4713;
  t2890 = 1.1305160000000008e-12*var1[17];
  t2892 = -0.03857500001589017*t2675;
  t2942 = t2924 + t2931;
  t2949 = -0.5031510000080001*t2942;
  t2959 = t2754 + t1750;
  t2966 = -3.367757e-6*t2959;
  t2969 = t2890 + t2892 + t2949 + t2966;
  t3112 = -1.9784030000000015e-12*var1[17];
  t3119 = -0.5031510000160505*t2675;
  t3128 = t2706 + t801;
  t3135 = -3.367757e-6*t3128;
  t3180 = t2924 + t25;
  t3209 = -0.038575000014*t3180;
  t3220 = t3112 + t3119 + t3135 + t3209;
  t3450 = t3449 + t801;
  t4741 = t1576*t577;
  t4758 = t1490*t4722;
  t4762 = t4741 + t4758;
  t3494 = t3483 + t25;
  t4770 = t1130*t577;
  t4785 = t1080*t4722;
  t4788 = t4770 + t4785;
  t3502 = -1.000000000016*t2675;
  t3505 = 1. + t3502;
  t4814 = t666*t577;
  t4823 = t390*t4722;
  t4827 = t4814 + t4823;
  t3707 = t3704 + t1750;
  t3732 = -1.000000000049*t2675;
  t3746 = 1. + t3732;
  t3781 = t3483 + t2931;
  t3877 = -6.5e-11*t2675;
  t3886 = 1. + t3877;
  t3938 = t3704 + t182;
  t3964 = t3449 + t1855;
  t4159 = -0.15121*t525;
  t4235 = -2.7726089999999997e-12*var1[16];
  t4247 = -0.2812110000084994*t288;
  t4296 = t4277 + t379;
  t4348 = -1.8134809999999998e-6*t4296;
  t4406 = 2.8e-11*t288;
  t4506 = t4406 + t305;
  t4508 = -0.038749000006999997*t4506;
  t4510 = t4235 + t4247 + t4348 + t4508;
  t4531 = t4510*t577;
  t4568 = 3.9608699999999997e-7*var1[16];
  t4594 = -1.1787626499999999e-16*t288;
  t4595 = t4277 + t1569;
  t4601 = -0.281211000004*t4595;
  t4612 = -1. + t259;
  t4616 = 4.e-6*t4612;
  t4617 = t4616 + t1391;
  t4621 = -0.038749000006999997*t4617;
  t4622 = t4568 + t4594 + t4601 + t4621;
  t4731 = t4622*t4722;
  t4763 = t2778*t4762;
  t4789 = t2969*t4788;
  t4828 = t3220*t4827;
  t4837 = t3450*t4762;
  t4844 = t3494*t4788;
  t4850 = t3505*t4827;
  t4852 = t4837 + t4844 + t4850;
  t4855 = -0.80315*t4852;
  t4864 = t3707*t4762;
  t4873 = t3746*t4788;
  t4889 = t3781*t4827;
  t4891 = t4864 + t4873 + t4889;
  t4894 = -0.038576*t4891;
  t4895 = t3886*t4762;
  t4897 = t3938*t4788;
  t4898 = t3964*t4827;
  t4900 = t4895 + t4897 + t4898;
  t4912 = -0.148715*t4900;
  t4189 = t4098 + t4159;
  t4123 = 0.15121*t525;
  t4141 = t4098 + t4123;
  t4989 = t454*t525*t357;
  t4990 = t547*t357*t562;
  t4993 = t4989 + t4990;
  t5023 = -1.*t547*t454*t357;
  t5057 = t525*t357*t562;
  t5076 = t5023 + t5057;
  t5095 = t398*t316;
  t5096 = t390*t4993;
  t5099 = t666*t5076;
  t5101 = t5095 + t5096 + t5099;
  t5106 = t1024*t398;
  t5108 = t1080*t4993;
  t5110 = t1130*t5076;
  t5118 = t5106 + t5108 + t5110;
  t5127 = t398*t1394;
  t5133 = t1490*t4993;
  t5137 = t1576*t5076;
  t5141 = t5127 + t5133 + t5137;
  t4966 = 1.5843479999999999e-12*var1[16];
  t4969 = -0.03874900000889869*t288;
  t4974 = t4406 + t1106;
  t4977 = -0.281211000004*t4974;
  t4979 = t4616 + t1063;
  t4984 = -1.8134809999999998e-6*t4979;
  t4985 = t4966 + t4969 + t4977 + t4984;
  t5211 = Sin(var1[3]);
  t5223 = -1.*t398*t454*t525*t5211;
  t5224 = -1.*t547*t398*t5211*t562;
  t5226 = t5223 + t5224;
  t5237 = t547*t398*t454*t5211;
  t5247 = -1.*t398*t525*t5211*t562;
  t5250 = t5237 + t5247;
  t5255 = t316*t5211*t357;
  t5263 = t390*t5226;
  t5267 = t666*t5250;
  t5276 = t5255 + t5263 + t5267;
  t5282 = t1024*t5211*t357;
  t5290 = t1080*t5226;
  t5292 = t1130*t5250;
  t5293 = t5282 + t5290 + t5292;
  t5299 = t1394*t5211*t357;
  t5301 = t1490*t5226;
  t5304 = t1576*t5250;
  t5305 = t5299 + t5301 + t5304;
  t5415 = Cos(var1[3]);
  t5423 = t5415*t454*t357;
  t5425 = -1.*t5211*t562;
  t5426 = t5423 + t5425;
  t5428 = -1.*t454*t5211;
  t5434 = -1.*t5415*t357*t562;
  t5435 = t5428 + t5434;
  t5438 = -1.*t525*t5426;
  t5439 = t547*t5435;
  t5451 = t5438 + t5439;
  t5457 = t547*t5426;
  t5467 = t525*t5435;
  t5468 = t5457 + t5467;
  t5485 = -1.*t5415*t398*t316;
  t5486 = t390*t5451;
  t5487 = t666*t5468;
  t5489 = t5485 + t5486 + t5487;
  t5493 = -1.*t1024*t5415*t398;
  t5494 = t1080*t5451;
  t5501 = t1130*t5468;
  t5507 = t5493 + t5494 + t5501;
  t5510 = -1.*t5415*t398*t1394;
  t5513 = t1490*t5451;
  t5514 = t1576*t5468;
  t5516 = t5510 + t5513 + t5514;
  t5856 = -1.*t454*t5211*t357;
  t5886 = -1.*t5415*t562;
  t5907 = t5856 + t5886;
  t5953 = t5415*t454;
  t5956 = -1.*t5211*t357*t562;
  t5966 = t5953 + t5956;
  t6025 = t525*t5907;
  t6045 = t547*t5966;
  t6046 = t6025 + t6045;
  t6053 = t547*t5907;
  t6061 = -1.*t525*t5966;
  t6062 = t6053 + t6061;
  t6065 = t1576*t6046;
  t6066 = t1490*t6062;
  t6067 = t6065 + t6066;
  t6070 = t1130*t6046;
  t6072 = t1080*t6062;
  t6073 = t6070 + t6072;
  t6077 = t666*t6046;
  t6082 = t390*t6062;
  t6083 = t6077 + t6082;
  t4936 = -0.15121*t547;
  t4942 = t4936 + t4159;
  t4957 = 0.15121*t547;
  t4958 = t4957 + t4159;
  t6287 = t454*t5211*t357;
  t6293 = t5415*t562;
  t6294 = t6287 + t6293;
  t6311 = -1.*t525*t6294;
  t6316 = t6311 + t6045;
  t6327 = -1.*t547*t6294;
  t6328 = t6327 + t6061;
  t6335 = t1576*t6316;
  t6336 = t1490*t6328;
  t6338 = t6335 + t6336;
  t6341 = t1130*t6316;
  t6343 = t1080*t6328;
  t6345 = t6341 + t6343;
  t6348 = t666*t6316;
  t6349 = t390*t6328;
  t6350 = t6348 + t6349;
  t81 = t22 + t35;
  t88 = -0.038575000014*t81;
  t189 = t119 + t182;
  t196 = -3.367757e-6*t189;
  t206 = -0.5031510000160505*t25;
  t212 = -1.9784030000000015e-12 + t88 + t196 + t206;
  t817 = t792 + t801;
  t864 = -3.367757e-6*t817;
  t962 = t908 + t35;
  t963 = -0.5031510000080001*t962;
  t965 = -0.03857500001589017*t25;
  t1011 = 1.1305160000000008e-12 + t864 + t963 + t965;
  t6511 = t547*t6294;
  t6544 = t525*t5966;
  t6555 = t6511 + t6544;
  t1174 = t1148 + t801;
  t1178 = -0.038575000014*t1174;
  t1216 = t1187 + t182;
  t1304 = -0.5031510000080001*t1216;
  t1334 = -2.18904205e-16*t25;
  t1349 = 2.826290000000002e-7 + t1178 + t1304 + t1334;
  t6508 = -1.*t398*t316*t5211;
  t6509 = t390*t6316;
  t6558 = t666*t6555;
  t6570 = t6508 + t6509 + t6558;
  t1711 = t22 + t1708;
  t6577 = -1.*t1024*t398*t5211;
  t6581 = t1080*t6316;
  t6583 = t1130*t6555;
  t6584 = t6577 + t6581 + t6583;
  t1765 = t119 + t1750;
  t6588 = -1.*t398*t1394*t5211;
  t6589 = t1490*t6316;
  t6590 = t1576*t6555;
  t6592 = t6588 + t6589 + t6590;
  t1831 = t908 + t1708;
  t1874 = t792 + t1855;
  t1913 = t1187 + t1750;
  t1942 = t1148 + t1855;
  t1990 = t1989 + t379;
  t1995 = -1.8134809999999998e-6*t1990;
  t2012 = t267 + t2004;
  t2034 = -0.281211000004*t2012;
  t2117 = -0.03874900000889869*t305;
  t2136 = 1.5843479999999999e-12 + t1995 + t2034 + t2117;
  t2205 = t2190 + t379;
  t2218 = -0.038749000006999997*t2205;
  t2239 = t2237 + t1391;
  t2242 = -0.281211000004*t2239;
  t2243 = -1.1787626499999999e-16*t305;
  t2258 = 3.9608699999999997e-7 + t2218 + t2242 + t2243;
  t2280 = t259 + t2004;
  t2296 = -0.038749000006999997*t2280;
  t2324 = t2322 + t1391;
  t2327 = -1.8134809999999998e-6*t2324;
  t2485 = -0.2812110000084994*t305;
  t2525 = -2.7726089999999997e-12 + t2296 + t2327 + t2485;
  t6746 = -1.*t398*t2788*t5211;
  t6752 = -6.5e-11*t305*t6316;
  t6758 = t2829*t6555;
  t6759 = t6746 + t6752 + t6758;
  t6761 = 1.000000000049*t398*t305*t5211;
  t6762 = t3005*t6316;
  t6764 = t3067*t6555;
  t6765 = t6761 + t6762 + t6764;
  t6768 = -1.*t398*t3228*t5211;
  t6770 = t3248*t6316;
  t6771 = -1.000000000016*t305*t6555;
  t6772 = t6768 + t6770 + t6771;
  t6899 = t5415*t398*t454*t525;
  t6904 = t547*t5415*t398*t562;
  t6905 = t6899 + t6904;
  t6907 = -1.*t547*t5415*t398*t454;
  t6908 = t5415*t398*t525*t562;
  t6910 = t6907 + t6908;
  t6913 = -1.*t5415*t316*t357;
  t6917 = t390*t6905;
  t6919 = t666*t6910;
  t6920 = t6913 + t6917 + t6919;
  t6926 = -1.*t1024*t5415*t357;
  t6929 = t1080*t6905;
  t6930 = t1130*t6910;
  t6931 = t6926 + t6929 + t6930;
  t6934 = -1.*t5415*t1394*t357;
  t6935 = t1490*t6905;
  t6936 = t1576*t6910;
  t6938 = t6934 + t6935 + t6936;
  t6985 = t454*t5211;
  t6986 = t5415*t357*t562;
  t6987 = t6985 + t6986;
  t6993 = t525*t5426;
  t7035 = t547*t6987;
  t7135 = t6993 + t7035;
  t7147 = -1.*t525*t6987;
  t7153 = t5457 + t7147;
  t7176 = t1576*t7135;
  t7205 = t1490*t7153;
  t7208 = t7176 + t7205;
  t7212 = t1130*t7135;
  t7213 = t1080*t7153;
  t7219 = t7212 + t7213;
  t7254 = t666*t7135;
  t7280 = t390*t7153;
  t7285 = t7254 + t7280;
  t7476 = -1.*t5415*t454*t357;
  t7478 = t5211*t562;
  t7482 = t7476 + t7478;
  t7490 = -1.*t525*t7482;
  t7491 = t7490 + t7035;
  t7494 = -1.*t547*t7482;
  t7496 = t7494 + t7147;
  t7498 = t1576*t7491;
  t7500 = t1490*t7496;
  t7503 = t7498 + t7500;
  t7509 = t1130*t7491;
  t7514 = t1080*t7496;
  t7515 = t7509 + t7514;
  t7518 = t666*t7491;
  t7520 = t390*t7496;
  t7521 = t7518 + t7520;
  t7582 = t547*t7482;
  t7583 = t525*t6987;
  t7584 = t7582 + t7583;
  t7578 = t5415*t398*t316;
  t7581 = t390*t7491;
  t7585 = t666*t7584;
  t7587 = t7578 + t7581 + t7585;
  t7591 = t1024*t5415*t398;
  t7614 = t1080*t7491;
  t7615 = t1130*t7584;
  t7622 = t7591 + t7614 + t7615;
  t7656 = t5415*t398*t1394;
  t7668 = t1490*t7491;
  t7716 = t1576*t7584;
  t7741 = t7656 + t7668 + t7716;
  t7946 = t5415*t398*t2788;
  t7947 = -6.5e-11*t305*t7491;
  t7948 = t2829*t7584;
  t7950 = t7946 + t7947 + t7948;
  t7953 = -1.000000000049*t5415*t398*t305;
  t7954 = t3005*t7491;
  t7957 = t3067*t7584;
  t7958 = t7953 + t7954 + t7957;
  t7960 = t5415*t398*t3228;
  t7962 = t3248*t7491;
  t7964 = -1.000000000016*t305*t7584;
  t7966 = t7960 + t7962 + t7964;
  p_output1[0]=var2[0] + (-1.*t357*t4189*t454 + t398*t4985 + t4622*t4993 + t4510*t5076 + t3220*t5101 + t2969*t5118 + t2778*t5141 - 0.80315*(t3505*t5101 + t3494*t5118 + t3450*t5141) - 0.038576*(t3781*t5101 + t3746*t5118 + t3707*t5141) - 0.148715*(t3964*t5101 + t3938*t5118 + t3886*t5141) + t357*t4141*t562)*var2[4] + (t4531 - 1.*t398*t4141*t454 + t4731 + t4763 + t4789 + t4828 + t4855 + t4894 + t4912 - 1.*t398*t4189*t562)*var2[5] + (t4531 + t4731 + t4763 + t4789 + t4828 + t4855 + t4894 + t4912 + t398*t454*t4942 - 1.*t398*t4958*t562)*var2[15] + (t2778*t2862 + t2969*t3071 + t3220*t3377 - 0.80315*(t2862*t3450 + t3071*t3494 + t3377*t3505) + t2136*t357 - 0.038576*(t2862*t3707 + t3071*t3746 + t3377*t3781) - 0.148715*(t2862*t3886 + t3071*t3938 + t3377*t3964) + t2258*t577 + t2525*t734)*var2[16] + (t1011*t1138 + t1349*t1649 + t212*t757 - 0.038576*(t1649*t1874 - 1.000000000049*t1138*t25 + t1831*t757) - 0.148715*(t1138*t1942 - 6.5e-11*t1649*t25 + t1913*t757) - 0.80315*(t1138*t1711 + t1649*t1765 - 1.000000000016*t25*t757))*var2[17];
  p_output1[1]=var2[1] + (-1.*t398*t4985*t5415 + t4189*t5426 + t4141*t5435 + t4622*t5451 + t4510*t5468 + t3220*t5489 + t2969*t5507 + t2778*t5516 - 0.80315*(t3505*t5489 + t3494*t5507 + t3450*t5516) - 0.038576*(t3781*t5489 + t3746*t5507 + t3707*t5516) - 0.148715*(t3964*t5489 + t3938*t5507 + t3886*t5516))*var2[3] + (t398*t4189*t454*t5211 + t357*t4985*t5211 + t4622*t5226 + t4510*t5250 + t3220*t5276 + t2969*t5293 + t2778*t5305 - 0.80315*(t3505*t5276 + t3494*t5293 + t3450*t5305) - 0.038576*(t3781*t5276 + t3746*t5293 + t3707*t5305) - 0.148715*(t3964*t5276 + t3938*t5293 + t3886*t5305) - 1.*t398*t4141*t5211*t562)*var2[4] + (t4141*t5907 + t4189*t5966 + t4510*t6046 + t4622*t6062 + t2778*t6067 + t2969*t6073 + t3220*t6083 - 0.80315*(t3450*t6067 + t3494*t6073 + t3505*t6083) - 0.038576*(t3707*t6067 + t3746*t6073 + t3781*t6083) - 0.148715*(t3886*t6067 + t3938*t6073 + t3964*t6083))*var2[5] + (t4958*t5966 + t4942*t6294 + t4510*t6316 + t4622*t6328 + t2778*t6338 + t2969*t6345 + t3220*t6350 - 0.80315*(t3450*t6338 + t3494*t6345 + t3505*t6350) - 0.038576*(t3707*t6338 + t3746*t6345 + t3781*t6350) - 0.148715*(t3886*t6338 + t3938*t6345 + t3964*t6350))*var2[15] + (-1.*t2136*t398*t5211 + t2258*t6316 + t2525*t6555 + t2778*t6759 + t2969*t6765 + t3220*t6772 - 0.80315*(t3450*t6759 + t3494*t6765 + t3505*t6772) - 0.038576*(t3707*t6759 + t3746*t6765 + t3781*t6772) - 0.148715*(t3886*t6759 + t3938*t6765 + t3964*t6772))*var2[16] + (t212*t6570 + t1011*t6584 + t1349*t6592 - 0.80315*(-1.000000000016*t25*t6570 + t1711*t6584 + t1765*t6592) - 0.038576*(t1831*t6570 - 1.000000000049*t25*t6584 + t1874*t6592) - 0.148715*(t1913*t6570 + t1942*t6584 - 6.5e-11*t25*t6592))*var2[17];
  p_output1[2]=var2[2] + (-1.*t398*t4985*t5211 + t4141*t5966 + t4189*t6294 + t4622*t6316 + t4510*t6555 + t3220*t6570 + t2969*t6584 + t2778*t6592 - 0.80315*(t3505*t6570 + t3494*t6584 + t3450*t6592) - 0.038576*(t3781*t6570 + t3746*t6584 + t3707*t6592) - 0.148715*(t3964*t6570 + t3938*t6584 + t3886*t6592))*var2[3] + (-1.*t398*t4189*t454*t5415 - 1.*t357*t4985*t5415 + t398*t4141*t5415*t562 + t4622*t6905 + t4510*t6910 + t3220*t6920 + t2969*t6931 + t2778*t6938 - 0.80315*(t3505*t6920 + t3494*t6931 + t3450*t6938) - 0.038576*(t3781*t6920 + t3746*t6931 + t3707*t6938) - 0.148715*(t3964*t6920 + t3938*t6931 + t3886*t6938))*var2[4] + (t4141*t5426 + t4189*t6987 + t4510*t7135 + t4622*t7153 + t2778*t7208 + t2969*t7219 + t3220*t7285 - 0.80315*(t3450*t7208 + t3494*t7219 + t3505*t7285) - 0.038576*(t3707*t7208 + t3746*t7219 + t3781*t7285) - 0.148715*(t3886*t7208 + t3938*t7219 + t3964*t7285))*var2[5] + (t4958*t6987 + t4942*t7482 + t4510*t7491 + t4622*t7496 + t2778*t7503 + t2969*t7515 + t3220*t7521 - 0.80315*(t3450*t7503 + t3494*t7515 + t3505*t7521) - 0.038576*(t3707*t7503 + t3746*t7515 + t3781*t7521) - 0.148715*(t3886*t7503 + t3938*t7515 + t3964*t7521))*var2[15] + (t2136*t398*t5415 + t2258*t7491 + t2525*t7584 + t2778*t7950 + t2969*t7958 + t3220*t7966 - 0.80315*(t3450*t7950 + t3494*t7958 + t3505*t7966) - 0.038576*(t3707*t7950 + t3746*t7958 + t3781*t7966) - 0.148715*(t3886*t7950 + t3938*t7958 + t3964*t7966))*var2[16] + (t212*t7587 + t1011*t7622 + t1349*t7741 - 0.80315*(-1.000000000016*t25*t7587 + t1711*t7622 + t1765*t7741) - 0.038576*(t1831*t7587 - 1.000000000049*t25*t7622 + t1874*t7741) - 0.148715*(t1913*t7587 + t1942*t7622 - 6.5e-11*t25*t7741))*var2[17];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "impact_velocity_RrFoot.hh"

namespace TrotStance1
{

void impact_velocity_RrFoot_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
