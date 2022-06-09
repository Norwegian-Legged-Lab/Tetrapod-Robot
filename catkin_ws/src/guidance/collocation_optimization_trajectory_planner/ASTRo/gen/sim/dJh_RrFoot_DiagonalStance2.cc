/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:37:48 GMT+02:00
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
  double t9304;
  double t10087;
  double t10211;
  double t10222;
  double t10224;
  double t10238;
  double t10243;
  double t10306;
  double t3308;
  double t3645;
  double t10307;
  double t10319;
  double t10263;
  double t10308;
  double t10312;
  double t2760;
  double t10333;
  double t10874;
  double t10930;
  double t11084;
  double t11321;
  double t13402;
  double t13438;
  double t13446;
  double t13450;
  double t13478;
  double t13486;
  double t13742;
  double t13749;
  double t13765;
  double t13789;
  double t13806;
  double t13812;
  double t13944;
  double t13961;
  double t13962;
  double t13997;
  double t14010;
  double t14015;
  double t14016;
  double t14022;
  double t14024;
  double t14027;
  double t14034;
  double t14036;
  double t14106;
  double t14111;
  double t14115;
  double t14166;
  double t14167;
  double t14171;
  double t14175;
  double t14205;
  double t14558;
  double t14612;
  double t14621;
  double t14623;
  double t14626;
  double t14628;
  double t14631;
  double t14641;
  double t14686;
  double t14148;
  double t14495;
  double t14555;
  double t14556;
  double t14690;
  double t14896;
  double t14900;
  double t14959;
  double t15194;
  double t15214;
  double t15219;
  double t15220;
  double t15249;
  double t15326;
  double t15383;
  double t15532;
  double t14557;
  double t15276;
  double t15284;
  double t15683;
  double t15687;
  double t15691;
  double t14136;
  double t14137;
  double t14146;
  double t15634;
  double t15638;
  double t15639;
  double t15715;
  double t15717;
  double t15721;
  double t15767;
  double t15768;
  double t15771;
  double t15872;
  double t15874;
  double t15878;
  double t15643;
  double t15912;
  double t15913;
  double t15914;
  double t15747;
  double t15947;
  double t15948;
  double t15949;
  double t15644;
  double t15693;
  double t15698;
  double t15921;
  double t15938;
  double t15929;
  double t15930;
  double t15936;
  double t15946;
  double t15952;
  double t15749;
  double t15750;
  double t15751;
  double t15796;
  double t15816;
  double t16001;
  double t16003;
  double t16013;
  double t16015;
  double t15797;
  double t15798;
  double t15799;
  double t15818;
  double t15820;
  double t15821;
  double t15836;
  double t15849;
  double t15837;
  double t15838;
  double t15839;
  double t15964;
  double t15967;
  double t16085;
  double t16087;
  double t16091;
  double t16093;
  double t15851;
  double t15852;
  double t15853;
  double t15879;
  double t15882;
  double t15884;
  double t15889;
  double t15890;
  double t15891;
  double t15893;
  double t15894;
  double t15899;
  double t15904;
  double t15906;
  double t15907;
  double t16129;
  double t16130;
  double t16132;
  double t16125;
  double t16127;
  double t15937;
  double t16139;
  double t16140;
  double t16143;
  double t16146;
  double t16147;
  double t16149;
  double t15950;
  double t15956;
  double t15957;
  double t15958;
  double t15960;
  double t15963;
  double t16150;
  double t15970;
  double t15971;
  double t16157;
  double t15976;
  double t15978;
  double t15982;
  double t15989;
  double t15990;
  double t15991;
  double t15992;
  double t15993;
  double t15995;
  double t15997;
  double t15998;
  double t15999;
  double t16002;
  double t16006;
  double t16007;
  double t16008;
  double t16011;
  double t16014;
  double t16019;
  double t16021;
  double t16022;
  double t16023;
  double t16197;
  double t16040;
  double t16043;
  double t16204;
  double t16060;
  double t16061;
  double t16065;
  double t16066;
  double t16070;
  double t16072;
  double t16073;
  double t16074;
  double t16075;
  double t16076;
  double t16078;
  double t16079;
  double t16080;
  double t16081;
  double t16082;
  double t16083;
  double t16086;
  double t16092;
  double t16097;
  double t16098;
  double t16099;
  double t16100;
  double t16104;
  double t16228;
  double t16107;
  double t16108;
  double t16232;
  double t16114;
  double t16115;
  double t16120;
  double t16249;
  double t16250;
  double t16251;
  double t16263;
  double t16264;
  double t16265;
  double t16269;
  double t16270;
  double t16271;
  double t16273;
  double t16274;
  double t16275;
  double t16283;
  double t16284;
  double t16285;
  double t16286;
  double t16287;
  double t16288;
  double t16289;
  double t16291;
  double t16292;
  double t16293;
  double t16290;
  double t16299;
  double t16300;
  double t16302;
  double t16308;
  double t16309;
  double t16310;
  double t16312;
  double t16313;
  double t16314;
  double t16343;
  double t16348;
  double t16374;
  double t16377;
  double t16366;
  double t16402;
  double t16405;
  double t16262;
  double t16266;
  double t16267;
  double t16410;
  double t13539;
  double t13599;
  double t13648;
  double t16446;
  double t16454;
  double t16456;
  double t16253;
  double t16254;
  double t16255;
  double t16257;
  double t16258;
  double t16259;
  double t16260;
  double t14043;
  double t14044;
  double t14047;
  double t16492;
  double t16493;
  double t16494;
  double t16495;
  double t16496;
  double t16498;
  double t16499;
  double t16500;
  double t16504;
  double t16505;
  double t16507;
  double t16497;
  double t16510;
  double t16511;
  double t16512;
  double t16517;
  double t16518;
  double t16519;
  double t16514;
  double t16516;
  double t16525;
  double t16526;
  double t16527;
  double t16530;
  double t16531;
  double t16532;
  double t16536;
  double t16537;
  double t16538;
  double t16338;
  double t16339;
  double t16354;
  double t16355;
  double t16385;
  double t16386;
  double t16387;
  double t16555;
  double t16396;
  double t16397;
  double t16398;
  double t16559;
  double t16561;
  double t16602;
  double t16612;
  double t16614;
  double t16543;
  double t16544;
  double t16545;
  double t16434;
  double t16435;
  double t16436;
  double t16652;
  double t16658;
  t9304 = Cos(var1[16]);
  t10087 = Cos(var1[17]);
  t10211 = -1.*t9304*t10087;
  t10222 = Sin(var1[16]);
  t10224 = Sin(var1[17]);
  t10238 = -1.*t10222*t10224;
  t10243 = t10211 + t10238;
  t10306 = Cos(var1[15]);
  t3308 = Cos(var1[5]);
  t3645 = Sin(var1[15]);
  t10307 = Sin(var1[5]);
  t10319 = Cos(var1[3]);
  t10263 = t3308*t3645*t10243;
  t10308 = t10306*t10243*t10307;
  t10312 = t10263 + t10308;
  t2760 = Sin(var1[3]);
  t10333 = Cos(var1[4]);
  t10874 = -1.*t10087*t10222;
  t10930 = t9304*t10224;
  t11084 = t10874 + t10930;
  t11321 = t10333*t11084;
  t13402 = Sin(var1[4]);
  t13438 = t10306*t3308*t10243;
  t13446 = -1.*t3645*t10243*t10307;
  t13450 = t13438 + t13446;
  t13478 = -1.*t13402*t13450;
  t13486 = t11321 + t13478;
  t13742 = t3308*t3645;
  t13749 = t10306*t10307;
  t13765 = t13742 + t13749;
  t13789 = -1.*t10306*t3308;
  t13806 = t3645*t10307;
  t13812 = t13789 + t13806;
  t13944 = t3308*t3645*t11084;
  t13961 = t10306*t11084*t10307;
  t13962 = t13944 + t13961;
  t13997 = t9304*t10087;
  t14010 = t10222*t10224;
  t14015 = t13997 + t14010;
  t14016 = t10333*t14015;
  t14022 = t10306*t3308*t11084;
  t14024 = -1.*t3645*t11084*t10307;
  t14027 = t14022 + t14024;
  t14034 = -1.*t13402*t14027;
  t14036 = t14016 + t14034;
  t14106 = -1.*t11084*t13402;
  t14111 = -1.*t10333*t13450;
  t14115 = t14106 + t14111;
  t14166 = -1.*t10087;
  t14167 = 1. + t14166;
  t14171 = -0.50321*t14167;
  t14175 = -0.19821*t10087;
  t14205 = t14171 + t14175;
  t14558 = -1.*t10306;
  t14612 = 1. + t14558;
  t14621 = -0.15121*t14612;
  t14623 = -1.*t9304;
  t14626 = 1. + t14623;
  t14628 = -0.28121*t14626;
  t14631 = t9304*t14205;
  t14641 = 0.305*t10222*t10224;
  t14686 = t14628 + t14631 + t14641;
  t14148 = 0.28121*t10222;
  t14495 = t14205*t10222;
  t14555 = -0.305*t9304*t10224;
  t14556 = t14148 + t14495 + t14555;
  t14690 = t10306*t14686;
  t14896 = t14621 + t14690;
  t14900 = t3308*t14896;
  t14959 = -0.15121*t10306;
  t15194 = 0.15121*t3645;
  t15214 = t3645*t14686;
  t15219 = t14621 + t14959 + t15194 + t15214;
  t15220 = -1.*t15219*t10307;
  t15249 = t14900 + t15220;
  t15326 = t14556*t13402;
  t15383 = t10333*t15249;
  t15532 = t15326 + t15383;
  t14557 = -1.*t14556*t13402;
  t15276 = -1.*t10333*t15249;
  t15284 = t14557 + t15276;
  t15683 = t10333*t14556;
  t15687 = -1.*t13402*t15249;
  t15691 = t15683 + t15687;
  t14136 = t14015*t13402;
  t14137 = t10333*t14027;
  t14146 = t14136 + t14137;
  t15634 = t3308*t15219;
  t15638 = t14896*t10307;
  t15639 = t15634 + t15638;
  t15715 = -1.*t14015*t13402;
  t15717 = -1.*t10333*t14027;
  t15721 = t15715 + t15717;
  t15767 = t11084*t13402;
  t15768 = t10333*t13450;
  t15771 = t15767 + t15768;
  t15872 = -1.*t3308*t3645*t10243;
  t15874 = -1.*t10306*t10243*t10307;
  t15878 = t15872 + t15874;
  t15643 = -1.*t13812*t15639;
  t15912 = -1.*t3308*t15219;
  t15913 = -1.*t14896*t10307;
  t15914 = t15912 + t15913;
  t15747 = t13962*t15639;
  t15947 = -1.*t3308*t3645*t11084;
  t15948 = -1.*t10306*t11084*t10307;
  t15949 = t15947 + t15948;
  t15644 = -1.*t10333*t13765*t15532;
  t15693 = t13402*t13765*t15691;
  t15698 = t15643 + t15644 + t15693;
  t15921 = -1.*t13765*t15639;
  t15938 = -1.*t13812*t15249;
  t15929 = t10306*t3308;
  t15930 = -1.*t3645*t10307;
  t15936 = t15929 + t15930;
  t15946 = t14027*t15639;
  t15952 = t13962*t15249;
  t15749 = t14146*t15532;
  t15750 = t14036*t15691;
  t15751 = t15747 + t15749 + t15750;
  t15796 = -1.*t13962*t15639;
  t15816 = t10312*t15639;
  t16001 = -1.*t14027*t15639;
  t16003 = -1.*t13962*t15249;
  t16013 = t13450*t15639;
  t16015 = t10312*t15249;
  t15797 = -1.*t14146*t15532;
  t15798 = -1.*t14036*t15691;
  t15799 = t15796 + t15797 + t15798;
  t15818 = t15771*t15532;
  t15820 = t13486*t15691;
  t15821 = t15816 + t15818 + t15820;
  t15836 = t13812*t15639;
  t15849 = -1.*t10312*t15639;
  t15837 = t10333*t13765*t15532;
  t15838 = -1.*t13402*t13765*t15691;
  t15839 = t15836 + t15837 + t15838;
  t15964 = Power(t10333,2);
  t15967 = Power(t13402,2);
  t16085 = t13765*t15639;
  t16087 = t13812*t15249;
  t16091 = -1.*t13450*t15639;
  t16093 = -1.*t10312*t15249;
  t15851 = -1.*t15771*t15532;
  t15852 = -1.*t13486*t15691;
  t15853 = t15849 + t15851 + t15852;
  t15879 = var2[0]*t10333*t15878;
  t15882 = t2760*t13402*t15878;
  t15884 = t10319*t13450;
  t15889 = t15882 + t15884;
  t15890 = var2[1]*t15889;
  t15891 = -1.*t10319*t13402*t15878;
  t15893 = t2760*t13450;
  t15894 = t15891 + t15893;
  t15899 = var2[2]*t15894;
  t15904 = -1.*t13765*t15249;
  t15906 = t15643 + t15904;
  t15907 = t14027*t15906;
  t16129 = -0.15121*t3645;
  t16130 = -1.*t3645*t14686;
  t16132 = t16129 + t16130;
  t16125 = 0.15121*t10306;
  t16127 = t16125 + t14690;
  t15937 = -1.*t15936*t15249;
  t16139 = t3308*t16132;
  t16140 = -1.*t16127*t10307;
  t16143 = t16139 + t16140;
  t16146 = t3308*t16127;
  t16147 = t16132*t10307;
  t16149 = t16146 + t16147;
  t15950 = t15949*t15249;
  t15956 = t14556*t14015;
  t15957 = t14027*t15249;
  t15958 = t15956 + t15747 + t15957;
  t15960 = t13765*t15958;
  t15963 = t10333*t15949*t15698;
  t16150 = -1.*t13812*t16149;
  t15970 = -1.*t10333*t15936*t15532;
  t15971 = t13402*t15936*t15691;
  t16157 = t13962*t16149;
  t15976 = t10333*t15949*t15532;
  t15978 = -1.*t13402*t15949*t15691;
  t15982 = t10333*t15936*t15751;
  t15989 = var2[0]*t10333*t15936;
  t15990 = t2760*t13765;
  t15991 = -1.*t10319*t13402*t15936;
  t15992 = t15990 + t15991;
  t15993 = var2[2]*t15992;
  t15995 = t10319*t13765;
  t15997 = t2760*t13402*t15936;
  t15998 = t15995 + t15997;
  t15999 = var2[1]*t15998;
  t16002 = -1.*t15949*t15249;
  t16006 = -1.*t14556*t14015;
  t16007 = -1.*t14027*t15249;
  t16008 = t16006 + t15796 + t16007;
  t16011 = t13450*t16008;
  t16014 = t15878*t15249;
  t16019 = t14556*t11084;
  t16021 = t13450*t15249;
  t16022 = t16019 + t15816 + t16021;
  t16023 = t14027*t16022;
  t16197 = -1.*t13962*t16149;
  t16040 = -1.*t10333*t15949*t15532;
  t16043 = t13402*t15949*t15691;
  t16204 = t10312*t16149;
  t16060 = t10333*t15878*t15532;
  t16061 = -1.*t13402*t15878*t15691;
  t16065 = t10333*t15878*t15799;
  t16066 = t10333*t15949*t15821;
  t16070 = var2[0]*t10333*t15949;
  t16072 = t2760*t13402*t15949;
  t16073 = t10319*t14027;
  t16074 = t16072 + t16073;
  t16075 = var2[1]*t16074;
  t16076 = -1.*t10319*t13402*t15949;
  t16078 = t2760*t14027;
  t16079 = t16076 + t16078;
  t16080 = var2[2]*t16079;
  t16081 = t13765*t15249;
  t16082 = t15836 + t16081;
  t16083 = t13450*t16082;
  t16086 = t15936*t15249;
  t16092 = -1.*t15878*t15249;
  t16097 = -1.*t14556*t11084;
  t16098 = -1.*t13450*t15249;
  t16099 = t16097 + t15849 + t16098;
  t16100 = t13765*t16099;
  t16104 = t10333*t15878*t15839;
  t16228 = t13812*t16149;
  t16107 = t10333*t15936*t15532;
  t16108 = -1.*t13402*t15936*t15691;
  t16232 = -1.*t10312*t16149;
  t16114 = -1.*t10333*t15878*t15532;
  t16115 = t13402*t15878*t15691;
  t16120 = t10333*t15936*t15853;
  t16249 = t10087*t10222;
  t16250 = -1.*t9304*t10224;
  t16251 = t16249 + t16250;
  t16263 = t10306*t3308*t16251;
  t16264 = -1.*t3645*t16251*t10307;
  t16265 = t16263 + t16264;
  t16269 = t3308*t3645*t16251;
  t16270 = t10306*t16251*t10307;
  t16271 = t16269 + t16270;
  t16273 = t10333*t10243;
  t16274 = -1.*t13402*t16265;
  t16275 = t16273 + t16274;
  t16283 = -0.28121*t10222;
  t16284 = -1.*t14205*t10222;
  t16285 = 0.305*t9304*t10224;
  t16286 = t16283 + t16284 + t16285;
  t16287 = t3308*t3645*t16286;
  t16288 = t10306*t16286*t10307;
  t16289 = t16287 + t16288;
  t16291 = t10306*t3308*t16286;
  t16292 = -1.*t3645*t16286*t10307;
  t16293 = t16291 + t16292;
  t16290 = -1.*t13812*t16289;
  t16299 = 0.28121*t9304;
  t16300 = t16299 + t14631 + t14641;
  t16302 = t16289*t13962;
  t16308 = t16300*t13402;
  t16309 = t10333*t16293;
  t16310 = t16308 + t16309;
  t16312 = t10333*t16300;
  t16313 = -1.*t13402*t16293;
  t16314 = t16312 + t16313;
  t16343 = t14556*t10243;
  t16348 = t11084*t16300;
  t16374 = Power(t10306,2);
  t16377 = Power(t3645,2);
  t16366 = -1.*t16300*t14015;
  t16402 = t16289*t10312;
  t16405 = t16271*t15639;
  t16262 = t10243*t13402;
  t16266 = t10333*t16265;
  t16267 = t16262 + t16266;
  t16410 = -1.*t16289*t13962;
  t13539 = t10319*t10312;
  t13599 = -1.*t2760*t13486;
  t13648 = t13539 + t13599;
  t16446 = t13812*t16289;
  t16454 = -1.*t16289*t10312;
  t16456 = -1.*t16271*t15639;
  t16253 = -0.15121*t16251;
  t16254 = -0.15121*t11084;
  t16255 = t16253 + t16254;
  t16257 = var2[15]*t16255;
  t16258 = -1.*t3645*t14896;
  t16259 = t10306*t15219;
  t16260 = t16258 + t16259;
  t14043 = t10319*t13962;
  t14044 = -1.*t2760*t14036;
  t14047 = t14043 + t14044;
  t16492 = 0.305*t10087*t10222;
  t16493 = t16492 + t14555;
  t16494 = t3308*t3645*t16493;
  t16495 = t10306*t16493*t10307;
  t16496 = t16494 + t16495;
  t16498 = t10306*t3308*t16493;
  t16499 = -1.*t3645*t16493*t10307;
  t16500 = t16498 + t16499;
  t16504 = t3308*t3645*t14015;
  t16505 = t10306*t14015*t10307;
  t16507 = t16504 + t16505;
  t16497 = -1.*t13812*t16496;
  t16510 = -0.305*t9304*t10087;
  t16511 = -0.305*t10222*t10224;
  t16512 = t16510 + t16511;
  t16517 = t10306*t3308*t14015;
  t16518 = -1.*t3645*t14015*t10307;
  t16519 = t16517 + t16518;
  t16514 = t16496*t13962;
  t16516 = t16507*t15639;
  t16525 = t16512*t13402;
  t16526 = t10333*t16500;
  t16527 = t16525 + t16526;
  t16530 = t10333*t16512;
  t16531 = -1.*t13402*t16500;
  t16532 = t16530 + t16531;
  t16536 = t16251*t13402;
  t16537 = t10333*t16519;
  t16538 = t16536 + t16537;
  t16338 = t10243*t14686;
  t16339 = t16019 + t16338;
  t16354 = -1.*t11084*t14686;
  t16355 = t16354 + t16006;
  t16385 = -1.*t10306*t11084*t14896;
  t16386 = -1.*t3645*t11084*t15219;
  t16387 = t16006 + t16385 + t16386;
  t16555 = t11084*t16512;
  t16396 = t10306*t10243*t14896;
  t16397 = t3645*t10243*t15219;
  t16398 = t16019 + t16396 + t16397;
  t16559 = -1.*t16251*t14556;
  t16561 = -1.*t16512*t14015;
  t16602 = t16496*t10312;
  t16612 = -1.*t16496*t13962;
  t16614 = -1.*t16507*t15639;
  t16543 = t10333*t16251;
  t16544 = -1.*t13402*t16519;
  t16545 = t16543 + t16544;
  t16434 = t3645*t14896;
  t16435 = -1.*t10306*t15219;
  t16436 = t16434 + t16435;
  t16652 = t13812*t16496;
  t16658 = -1.*t16496*t10312;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t10319*t13486 - 1.*t10312*t2760)*var2[1] + t13648*var2[2];
  p_output1[10]=(t10319*t13402*t13765 - 1.*t13812*t2760)*var2[1] + (t10319*t13812 + t13402*t13765*t2760)*var2[2];
  p_output1[11]=(-1.*t10319*t14036 - 1.*t13962*t2760)*var2[1] + t14047*var2[2];
  p_output1[12]=t13486*var2[0] - 1.*t14115*t2760*var2[1] + t10319*t14115*var2[2] + (t14146*(t13402*t13765*t15284 + t13402*t13765*t15532) + t14036*t15698 + t10333*t13765*(t14036*t15284 + t14036*t15532 + t14146*t15691 + t15691*t15721) - 1.*t13402*t13765*t15751)*var2[3];
  p_output1[13]=-1.*t13402*t13765*var2[0] + t10333*t13765*t2760*var2[1] - 1.*t10319*t10333*t13765*var2[2] + ((-1.*t14036*t15284 - 1.*t14036*t15532 - 1.*t14146*t15691 - 1.*t15691*t15721)*t15771 + t14146*(t13486*t15284 + t13486*t15532 + t14115*t15691 + t15691*t15771) + t13486*t15799 + t14036*t15821)*var2[3];
  p_output1[14]=t14036*var2[0] - 1.*t15721*t2760*var2[1] + t10319*t15721*var2[2] + ((-1.*t13402*t13765*t15284 - 1.*t13402*t13765*t15532)*t15771 + t10333*t13765*(-1.*t13486*t15284 - 1.*t13486*t15532 - 1.*t14115*t15691 - 1.*t15691*t15771) + t13486*t15839 - 1.*t13402*t13765*t15853)*var2[3];
  p_output1[15]=t15879 + t15890 + t15899 + (t15963 + t14146*(t15921 + t15938 - 1.*t13765*t15914*t15964 - 1.*t13765*t15914*t15967 + t15970 + t15971) + t10333*t13765*(-1.*t13402*t14036*t15914 + t10333*t14146*t15914 + t15946 + t15952 + t15976 + t15978) + t15982)*var2[3] + (t15907 + t13962*(-1.*t13765*t15914 + t15921 + t15937 + t15938) + t13812*(t14027*t15914 + t15946 + t15950 + t15952) + t15960)*var2[4];
  p_output1[16]=t15989 + t15993 + t15999 + (t15771*(t13402*t14036*t15914 - 1.*t10333*t14146*t15914 + t16001 + t16003 + t16040 + t16043) + t14146*(-1.*t13402*t13486*t15914 + t10333*t15771*t15914 + t16013 + t16015 + t16060 + t16061) + t16065 + t16066)*var2[3] + (t10312*(-1.*t14027*t15914 + t16001 + t16002 + t16003) + t16011 + t13962*(t13450*t15914 + t16013 + t16014 + t16015) + t16023)*var2[4];
  p_output1[17]=t16070 + t16075 + t16080 + (t16104 + t15771*(t13765*t15914*t15964 + t13765*t15914*t15967 + t16085 + t16087 + t16107 + t16108) + t10333*t13765*(t13402*t13486*t15914 - 1.*t10333*t15771*t15914 + t16091 + t16093 + t16114 + t16115) + t16120)*var2[3] + (t16083 + t10312*(t13765*t15914 + t16085 + t16086 + t16087) + t13812*(-1.*t13450*t15914 + t16091 + t16092 + t16093) + t16100)*var2[4];
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
  p_output1[45]=t15879 + t15890 + t15899 + (t15963 + t15982 + t14146*(t15921 + t15970 + t15971 - 1.*t13765*t15964*t16143 - 1.*t13765*t15967*t16143 + t16150) + t10333*t13765*(t15946 + t15976 + t15978 - 1.*t13402*t14036*t16143 + t10333*t14146*t16143 + t16157))*var2[3] + (t15907 + t15960 + t13962*(t15921 + t15937 - 1.*t13765*t16143 + t16150) + t13812*(t15946 + t15950 + t14027*t16143 + t16157))*var2[4] + t14015*(-1.*t10306*t14896 + t10306*t16127 - 1.*t15219*t3645 - 1.*t16132*t3645)*var2[5];
  p_output1[46]=t15989 + t15993 + t15999 + (t16065 + t16066 + t15771*(t16001 + t16040 + t16043 + t13402*t14036*t16143 - 1.*t10333*t14146*t16143 + t16197) + t14146*(t16013 + t16060 + t16061 - 1.*t13402*t13486*t16143 + t10333*t15771*t16143 + t16204))*var2[3] + (t16011 + t16023 + t10312*(t16001 + t16002 - 1.*t14027*t16143 + t16197) + t13962*(t16013 + t16014 + t13450*t16143 + t16204))*var2[4] + (t14015*(t10243*t10306*t15219 + t10243*t10306*t16132 - 1.*t10243*t14896*t3645 + t10243*t16127*t3645) + t11084*(-1.*t10306*t11084*t15219 - 1.*t10306*t11084*t16132 + t11084*t14896*t3645 - 1.*t11084*t16127*t3645))*var2[5];
  p_output1[47]=t16070 + t16075 + t16080 + (t16104 + t16120 + t15771*(t16085 + t16107 + t16108 + t13765*t15964*t16143 + t13765*t15967*t16143 + t16228) + t10333*t13765*(t16091 + t16114 + t16115 + t13402*t13486*t16143 - 1.*t10333*t15771*t16143 + t16232))*var2[3] + (t16083 + t16100 + t10312*(t16085 + t16086 + t13765*t16143 + t16228) + t13812*(t16091 + t16092 - 1.*t13450*t16143 + t16232))*var2[4] + t11084*(t10306*t14896 - 1.*t10306*t16127 + t15219*t3645 + t16132*t3645)*var2[5];
  p_output1[48]=t16257 + t16267*var2[0] + (t10319*t16271 - 1.*t16275*t2760)*var2[1] + (t10319*t16275 + t16271*t2760)*var2[2] + (t15698*t15771 + t14146*(t16290 - 1.*t10333*t13765*t16310 + t13402*t13765*t16314) + t10333*t13765*(t15816 + t15818 + t15820 + t16302 + t14146*t16310 + t14036*t16314))*var2[3] + (t10312*t15906 + t13962*(t16290 - 1.*t13765*t16293) + t13812*(t15816 + t16019 + t16021 + t14027*t16293 + t14015*t16300 + t16302))*var2[4] + t11084*t16260*var2[5];
  p_output1[49]=(t15771*t15821 + t15799*t16267 + t14146*(t15532*t16267 + t15691*t16275 + t15771*t16310 + t13486*t16314 + t16402 + t16405) + t15771*(t15849 + t15851 + t15852 - 1.*t14146*t16310 - 1.*t14036*t16314 + t16410))*var2[3] + (t10312*t16022 + t16008*t16271 + t13962*(t15249*t16265 + t13450*t16293 + t16343 + t16348 + t16402 + t16405) + t10312*(t15849 + t16097 + t16098 - 1.*t14027*t16293 + t16366 + t16410))*var2[4] + (t10243*t16387 + t11084*t16398 + t11084*(-1.*t10243*t10306*t14896 + t16097 + t16366 - 1.*t11084*t16286*t16374 - 1.*t11084*t16286*t16377 - 1.*t10243*t15219*t3645) + t14015*(t10306*t14896*t16251 + t16343 + t16348 + t10243*t16286*t16374 + t10243*t16286*t16377 + t15219*t16251*t3645))*var2[5] + (t11084*t16339 + t14015*(t14686*t16251 + t10243*t16286 + t16343 + t16348) + t10243*t16355 + t11084*(-1.*t10243*t14686 + t16097 - 1.*t11084*t16286 + t16366))*var2[15];
  p_output1[50]=t15771*var2[0] + t13648*var2[1] + (t10319*t13486 + t10312*t2760)*var2[2] + (t15839*t16267 + t15771*(t10333*t13765*t16310 - 1.*t13402*t13765*t16314 + t16446) + t10333*t13765*(-1.*t15532*t16267 - 1.*t15691*t16275 - 1.*t15771*t16310 - 1.*t13486*t16314 + t16454 + t16456))*var2[3] + (t16082*t16271 + t10312*(t13765*t16293 + t16446) + t13812*(-1.*t10243*t14556 - 1.*t15249*t16265 - 1.*t13450*t16293 - 1.*t11084*t16300 + t16454 + t16456))*var2[4] + t10243*t16436*var2[5];
  p_output1[51]=t16257 + t14146*var2[0] + t14047*var2[1] + (t10319*t14036 + t13962*t2760)*var2[2] + (t14146*(t16497 - 1.*t10333*t13765*t16527 + t13402*t13765*t16532) + t15698*t16538 + t10333*t13765*(t16514 + t16516 + t14146*t16527 + t14036*t16532 + t15532*t16538 + t15691*t16545))*var2[3] + (t13962*(t16497 - 1.*t13765*t16500) + t15906*t16507 + t13812*(t14556*t16251 + t14027*t16500 + t14015*t16512 + t16514 + t16516 + t15249*t16519))*var2[4] + t16251*t16260*var2[5] + (0.28121*t10087 - 0.305*Power(t10087,2) + t10087*t14205)*var2[16];
  p_output1[52]=(t14146*t15799 + t15821*t16538 + t14146*(t15747 + t15749 + t15750 + t15771*t16527 + t13486*t16532 + t16602) + t15771*(-1.*t14146*t16527 - 1.*t14036*t16532 - 1.*t15532*t16538 - 1.*t15691*t16545 + t16612 + t16614))*var2[3] + (t13962*t16008 + t16022*t16507 + t13962*(t15747 + t15956 + t15957 + t13450*t16500 + t16555 + t16602) + t10312*(-1.*t14027*t16500 - 1.*t15249*t16519 + t16559 + t16561 + t16612 + t16614))*var2[4] + (t14015*t16387 + t16251*t16398 + t14015*(t10306*t11084*t14896 + t15956 + t10243*t16374*t16493 + t10243*t16377*t16493 + t16555 + t11084*t15219*t3645) + t11084*(-1.*t10306*t14015*t14896 - 1.*t11084*t16374*t16493 - 1.*t11084*t16377*t16493 + t16559 + t16561 - 1.*t14015*t15219*t3645))*var2[5] + (t16251*t16339 + t14015*t16355 + t14015*(t11084*t14686 + t15956 + t10243*t16493 + t16555) + t11084*(-1.*t14015*t14686 - 1.*t11084*t16493 + t16559 + t16561))*var2[15];
  p_output1[53]=t16538*var2[0] + (t10319*t16507 - 1.*t16545*t2760)*var2[1] + (t10319*t16545 + t16507*t2760)*var2[2] + (t14146*t15839 + t15771*(t10333*t13765*t16527 - 1.*t13402*t13765*t16532 + t16652) + t10333*t13765*(t15796 + t15797 + t15798 - 1.*t15771*t16527 - 1.*t13486*t16532 + t16658))*var2[3] + (t13962*t16082 + t10312*(t13765*t16500 + t16652) + t13812*(t15796 + t16006 + t16007 - 1.*t13450*t16500 - 1.*t11084*t16512 + t16658))*var2[4] + t14015*t16436*var2[5] + (-0.28121*t10224 + 0.305*t10087*t10224 - 1.*t10224*t14205)*var2[16];
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
