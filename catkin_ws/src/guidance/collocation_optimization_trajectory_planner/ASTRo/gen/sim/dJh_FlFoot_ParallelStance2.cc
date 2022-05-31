/*
 * Automatically Generated from Mathematica.
 * Sun 22 May 2022 16:55:29 GMT+02:00
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
  double t9720;
  double t9723;
  double t9731;
  double t9736;
  double t9756;
  double t9767;
  double t9768;
  double t12155;
  double t6302;
  double t6303;
  double t12171;
  double t12567;
  double t9810;
  double t12175;
  double t12384;
  double t6166;
  double t12733;
  double t12913;
  double t13010;
  double t13022;
  double t13036;
  double t13037;
  double t13049;
  double t13058;
  double t13084;
  double t13113;
  double t13148;
  double t13221;
  double t15802;
  double t15812;
  double t15872;
  double t15874;
  double t15876;
  double t15894;
  double t15895;
  double t15896;
  double t15897;
  double t15900;
  double t15901;
  double t15903;
  double t15906;
  double t15907;
  double t15908;
  double t15909;
  double t15910;
  double t15920;
  double t15921;
  double t15923;
  double t15934;
  double t15935;
  double t15937;
  double t15938;
  double t15939;
  double t15944;
  double t15945;
  double t15946;
  double t15947;
  double t15948;
  double t15949;
  double t15950;
  double t15951;
  double t15952;
  double t15933;
  double t15940;
  double t15941;
  double t15942;
  double t15953;
  double t15954;
  double t15955;
  double t15956;
  double t15957;
  double t15958;
  double t15959;
  double t15960;
  double t15961;
  double t15965;
  double t15966;
  double t15967;
  double t15943;
  double t15962;
  double t15963;
  double t15976;
  double t15977;
  double t15978;
  double t15929;
  double t15930;
  double t15931;
  double t15971;
  double t15972;
  double t15973;
  double t15984;
  double t15985;
  double t15986;
  double t16002;
  double t16003;
  double t16004;
  double t16056;
  double t16057;
  double t16058;
  double t15974;
  double t16071;
  double t16072;
  double t16073;
  double t15991;
  double t16085;
  double t16086;
  double t16087;
  double t15975;
  double t15979;
  double t15980;
  double t16075;
  double t16076;
  double t16077;
  double t16078;
  double t16079;
  double t16084;
  double t16089;
  double t15992;
  double t15993;
  double t15994;
  double t16011;
  double t16022;
  double t16127;
  double t16129;
  double t16137;
  double t16139;
  double t16012;
  double t16013;
  double t16014;
  double t16023;
  double t16024;
  double t16025;
  double t16037;
  double t16048;
  double t16038;
  double t16039;
  double t16040;
  double t16099;
  double t16101;
  double t16178;
  double t16179;
  double t16184;
  double t16186;
  double t16049;
  double t16050;
  double t16051;
  double t16059;
  double t16060;
  double t16061;
  double t16062;
  double t16063;
  double t16064;
  double t16065;
  double t16066;
  double t16067;
  double t16068;
  double t16069;
  double t16070;
  double t16213;
  double t16214;
  double t16216;
  double t16217;
  double t16218;
  double t16080;
  double t16223;
  double t16224;
  double t16225;
  double t16227;
  double t16228;
  double t16229;
  double t16088;
  double t16092;
  double t16093;
  double t16094;
  double t16095;
  double t16098;
  double t16230;
  double t16103;
  double t16104;
  double t16234;
  double t16109;
  double t16110;
  double t16113;
  double t16117;
  double t16118;
  double t16119;
  double t16120;
  double t16121;
  double t16122;
  double t16123;
  double t16124;
  double t16125;
  double t16128;
  double t16132;
  double t16133;
  double t16134;
  double t16135;
  double t16138;
  double t16142;
  double t16143;
  double t16144;
  double t16145;
  double t16265;
  double t16150;
  double t16151;
  double t16269;
  double t16156;
  double t16157;
  double t16160;
  double t16161;
  double t16165;
  double t16166;
  double t16167;
  double t16168;
  double t16169;
  double t16170;
  double t16171;
  double t16172;
  double t16173;
  double t16174;
  double t16175;
  double t16176;
  double t16180;
  double t16185;
  double t16189;
  double t16190;
  double t16191;
  double t16192;
  double t16195;
  double t16292;
  double t16198;
  double t16199;
  double t16296;
  double t16204;
  double t16205;
  double t16208;
  double t16312;
  double t16313;
  double t16314;
  double t16316;
  double t16317;
  double t16318;
  double t16326;
  double t16327;
  double t16328;
  double t16330;
  double t16331;
  double t16332;
  double t16340;
  double t16341;
  double t16342;
  double t16344;
  double t16345;
  double t16346;
  double t16343;
  double t16351;
  double t16352;
  double t16353;
  double t16354;
  double t16356;
  double t16362;
  double t16363;
  double t16364;
  double t16366;
  double t16367;
  double t16368;
  double t16383;
  double t16385;
  double t16402;
  double t16404;
  double t16393;
  double t16315;
  double t16319;
  double t16320;
  double t16423;
  double t16425;
  double t16429;
  double t13206;
  double t13207;
  double t13210;
  double t16465;
  double t16472;
  double t16474;
  double t16322;
  double t16323;
  double t16324;
  double t15914;
  double t15915;
  double t15916;
  double t16507;
  double t16508;
  double t16509;
  double t16510;
  double t16511;
  double t16512;
  double t16514;
  double t16515;
  double t16516;
  double t16520;
  double t16521;
  double t16522;
  double t16513;
  double t16525;
  double t16526;
  double t16531;
  double t16532;
  double t16533;
  double t16528;
  double t16539;
  double t16540;
  double t16541;
  double t16543;
  double t16544;
  double t16545;
  double t16530;
  double t16549;
  double t16550;
  double t16551;
  double t16380;
  double t16381;
  double t16388;
  double t16389;
  double t16391;
  double t16398;
  double t16399;
  double t16400;
  double t16567;
  double t16574;
  double t16416;
  double t16417;
  double t16418;
  double t16596;
  double t16600;
  double t16602;
  double t16556;
  double t16557;
  double t16558;
  double t16451;
  double t16452;
  double t16453;
  double t16454;
  double t16455;
  double t16456;
  double t16457;
  double t16639;
  double t16645;
  t9720 = Cos(var1[7]);
  t9723 = Cos(var1[8]);
  t9731 = t9720*t9723;
  t9736 = Sin(var1[7]);
  t9756 = Sin(var1[8]);
  t9767 = t9736*t9756;
  t9768 = t9731 + t9767;
  t12155 = Cos(var1[5]);
  t6302 = Cos(var1[6]);
  t6303 = Sin(var1[5]);
  t12171 = Sin(var1[6]);
  t12567 = Cos(var1[3]);
  t9810 = t6302*t6303*t9768;
  t12175 = t12155*t12171*t9768;
  t12384 = t9810 + t12175;
  t6166 = Sin(var1[3]);
  t12733 = Cos(var1[4]);
  t12913 = -1.*t9723*t9736;
  t13010 = t9720*t9756;
  t13022 = t12913 + t13010;
  t13036 = t12733*t13022;
  t13037 = Sin(var1[4]);
  t13049 = t12155*t6302*t9768;
  t13058 = -1.*t6303*t12171*t9768;
  t13084 = t13049 + t13058;
  t13113 = -1.*t13037*t13084;
  t13148 = t13036 + t13113;
  t13221 = -1.*t6302*t6303;
  t15802 = -1.*t12155*t12171;
  t15812 = t13221 + t15802;
  t15872 = t12155*t6302;
  t15874 = -1.*t6303*t12171;
  t15876 = t15872 + t15874;
  t15894 = t9723*t9736;
  t15895 = -1.*t9720*t9756;
  t15896 = t15894 + t15895;
  t15897 = t6302*t6303*t15896;
  t15900 = t12155*t12171*t15896;
  t15901 = t15897 + t15900;
  t15903 = t12733*t9768;
  t15906 = t12155*t6302*t15896;
  t15907 = -1.*t6303*t12171*t15896;
  t15908 = t15906 + t15907;
  t15909 = -1.*t13037*t15908;
  t15910 = t15903 + t15909;
  t15920 = -1.*t13037*t13022;
  t15921 = -1.*t12733*t13084;
  t15923 = t15920 + t15921;
  t15934 = -1.*t9723;
  t15935 = 1. + t15934;
  t15937 = 0.50321*t15935;
  t15938 = 0.23321*t9723;
  t15939 = t15937 + t15938;
  t15944 = -1.*t6302;
  t15945 = 1. + t15944;
  t15946 = 0.15121*t15945;
  t15947 = -1.*t9720;
  t15948 = 1. + t15947;
  t15949 = 0.28121*t15948;
  t15950 = t9720*t15939;
  t15951 = -0.27*t9736*t9756;
  t15952 = t15949 + t15950 + t15951;
  t15933 = 0.28121*t9736;
  t15940 = -1.*t15939*t9736;
  t15941 = -0.27*t9720*t9756;
  t15942 = t15933 + t15940 + t15941;
  t15953 = t6302*t15952;
  t15954 = t15946 + t15953;
  t15955 = t12155*t15954;
  t15956 = 0.15121*t6302;
  t15957 = -0.15121*t12171;
  t15958 = t12171*t15952;
  t15959 = t15946 + t15956 + t15957 + t15958;
  t15960 = -1.*t6303*t15959;
  t15961 = t15955 + t15960;
  t15965 = t13037*t15942;
  t15966 = t12733*t15961;
  t15967 = t15965 + t15966;
  t15943 = -1.*t13037*t15942;
  t15962 = -1.*t12733*t15961;
  t15963 = t15943 + t15962;
  t15976 = t12733*t15942;
  t15977 = -1.*t13037*t15961;
  t15978 = t15976 + t15977;
  t15929 = t13037*t9768;
  t15930 = t12733*t15908;
  t15931 = t15929 + t15930;
  t15971 = t6303*t15954;
  t15972 = t12155*t15959;
  t15973 = t15971 + t15972;
  t15984 = -1.*t13037*t9768;
  t15985 = -1.*t12733*t15908;
  t15986 = t15984 + t15985;
  t16002 = t13037*t13022;
  t16003 = t12733*t13084;
  t16004 = t16002 + t16003;
  t16056 = -1.*t6302*t6303*t9768;
  t16057 = -1.*t12155*t12171*t9768;
  t16058 = t16056 + t16057;
  t15974 = -1.*t15876*t15973;
  t16071 = -1.*t6303*t15954;
  t16072 = -1.*t12155*t15959;
  t16073 = t16071 + t16072;
  t15991 = t15901*t15973;
  t16085 = -1.*t6302*t6303*t15896;
  t16086 = -1.*t12155*t12171*t15896;
  t16087 = t16085 + t16086;
  t15975 = -1.*t12733*t15812*t15967;
  t15979 = t13037*t15812*t15978;
  t15980 = t15974 + t15975 + t15979;
  t16075 = -1.*t15812*t15973;
  t16076 = -1.*t15876*t15961;
  t16077 = -1.*t12155*t6302;
  t16078 = t6303*t12171;
  t16079 = t16077 + t16078;
  t16084 = t15908*t15973;
  t16089 = t15901*t15961;
  t15992 = t15931*t15967;
  t15993 = t15910*t15978;
  t15994 = t15991 + t15992 + t15993;
  t16011 = -1.*t15901*t15973;
  t16022 = t12384*t15973;
  t16127 = -1.*t15908*t15973;
  t16129 = -1.*t15901*t15961;
  t16137 = t13084*t15973;
  t16139 = t12384*t15961;
  t16012 = -1.*t15931*t15967;
  t16013 = -1.*t15910*t15978;
  t16014 = t16011 + t16012 + t16013;
  t16023 = t16004*t15967;
  t16024 = t13148*t15978;
  t16025 = t16022 + t16023 + t16024;
  t16037 = t15876*t15973;
  t16048 = -1.*t12384*t15973;
  t16038 = t12733*t15812*t15967;
  t16039 = -1.*t13037*t15812*t15978;
  t16040 = t16037 + t16038 + t16039;
  t16099 = Power(t12733,2);
  t16101 = Power(t13037,2);
  t16178 = t15812*t15973;
  t16179 = t15876*t15961;
  t16184 = -1.*t13084*t15973;
  t16186 = -1.*t12384*t15961;
  t16049 = -1.*t16004*t15967;
  t16050 = -1.*t13148*t15978;
  t16051 = t16048 + t16049 + t16050;
  t16059 = var2[0]*t12733*t16058;
  t16060 = t6166*t13037*t16058;
  t16061 = t12567*t13084;
  t16062 = t16060 + t16061;
  t16063 = var2[1]*t16062;
  t16064 = -1.*t12567*t13037*t16058;
  t16065 = t6166*t13084;
  t16066 = t16064 + t16065;
  t16067 = var2[2]*t16066;
  t16068 = -1.*t15812*t15961;
  t16069 = t15974 + t16068;
  t16070 = t15908*t16069;
  t16213 = -0.15121*t6302;
  t16214 = t16213 + t15953;
  t16216 = 0.15121*t12171;
  t16217 = -1.*t12171*t15952;
  t16218 = t16216 + t16217;
  t16080 = -1.*t16079*t15961;
  t16223 = -1.*t6303*t16214;
  t16224 = t12155*t16218;
  t16225 = t16223 + t16224;
  t16227 = t12155*t16214;
  t16228 = t6303*t16218;
  t16229 = t16227 + t16228;
  t16088 = t16087*t15961;
  t16092 = t15942*t9768;
  t16093 = t15908*t15961;
  t16094 = t16092 + t15991 + t16093;
  t16095 = t15812*t16094;
  t16098 = t12733*t16087*t15980;
  t16230 = -1.*t15876*t16229;
  t16103 = -1.*t12733*t16079*t15967;
  t16104 = t13037*t16079*t15978;
  t16234 = t15901*t16229;
  t16109 = t12733*t16087*t15967;
  t16110 = -1.*t13037*t16087*t15978;
  t16113 = t12733*t16079*t15994;
  t16117 = var2[0]*t12733*t16079;
  t16118 = t6166*t15812;
  t16119 = -1.*t12567*t13037*t16079;
  t16120 = t16118 + t16119;
  t16121 = var2[2]*t16120;
  t16122 = t12567*t15812;
  t16123 = t6166*t13037*t16079;
  t16124 = t16122 + t16123;
  t16125 = var2[1]*t16124;
  t16128 = -1.*t16087*t15961;
  t16132 = -1.*t15942*t9768;
  t16133 = -1.*t15908*t15961;
  t16134 = t16132 + t16011 + t16133;
  t16135 = t13084*t16134;
  t16138 = t16058*t15961;
  t16142 = t15942*t13022;
  t16143 = t13084*t15961;
  t16144 = t16142 + t16022 + t16143;
  t16145 = t15908*t16144;
  t16265 = -1.*t15901*t16229;
  t16150 = -1.*t12733*t16087*t15967;
  t16151 = t13037*t16087*t15978;
  t16269 = t12384*t16229;
  t16156 = t12733*t16058*t15967;
  t16157 = -1.*t13037*t16058*t15978;
  t16160 = t12733*t16058*t16014;
  t16161 = t12733*t16087*t16025;
  t16165 = var2[0]*t12733*t16087;
  t16166 = t6166*t13037*t16087;
  t16167 = t12567*t15908;
  t16168 = t16166 + t16167;
  t16169 = var2[1]*t16168;
  t16170 = -1.*t12567*t13037*t16087;
  t16171 = t6166*t15908;
  t16172 = t16170 + t16171;
  t16173 = var2[2]*t16172;
  t16174 = t15812*t15961;
  t16175 = t16037 + t16174;
  t16176 = t13084*t16175;
  t16180 = t16079*t15961;
  t16185 = -1.*t16058*t15961;
  t16189 = -1.*t15942*t13022;
  t16190 = -1.*t13084*t15961;
  t16191 = t16189 + t16048 + t16190;
  t16192 = t15812*t16191;
  t16195 = t12733*t16058*t16040;
  t16292 = t15876*t16229;
  t16198 = t12733*t16079*t15967;
  t16199 = -1.*t13037*t16079*t15978;
  t16296 = -1.*t12384*t16229;
  t16204 = -1.*t12733*t16058*t15967;
  t16205 = t13037*t16058*t15978;
  t16208 = t12733*t16079*t16051;
  t16312 = -1.*t9720*t9723;
  t16313 = -1.*t9736*t9756;
  t16314 = t16312 + t16313;
  t16316 = t12155*t6302*t13022;
  t16317 = -1.*t6303*t12171*t13022;
  t16318 = t16316 + t16317;
  t16326 = t6302*t6303*t13022;
  t16327 = t12155*t12171*t13022;
  t16328 = t16326 + t16327;
  t16330 = t12733*t16314;
  t16331 = -1.*t13037*t16318;
  t16332 = t16330 + t16331;
  t16340 = t6302*t6303*t15942;
  t16341 = t12155*t12171*t15942;
  t16342 = t16340 + t16341;
  t16344 = t12155*t6302*t15942;
  t16345 = -1.*t6303*t12171*t15942;
  t16346 = t16344 + t16345;
  t16343 = -1.*t15876*t16342;
  t16351 = 0.28121*t9720;
  t16352 = -1.*t9720*t15939;
  t16353 = 0.27*t9736*t9756;
  t16354 = t16351 + t16352 + t16353;
  t16356 = t15901*t16342;
  t16362 = t13037*t16354;
  t16363 = t12733*t16346;
  t16364 = t16362 + t16363;
  t16366 = t12733*t16354;
  t16367 = -1.*t13037*t16346;
  t16368 = t16366 + t16367;
  t16383 = t15942*t16314;
  t16385 = t13022*t16354;
  t16402 = Power(t6302,2);
  t16404 = Power(t12171,2);
  t16393 = -1.*t16354*t9768;
  t16315 = t13037*t16314;
  t16319 = t12733*t16318;
  t16320 = t16315 + t16319;
  t16423 = t16342*t12384;
  t16425 = t16328*t15973;
  t16429 = -1.*t15901*t16342;
  t13206 = t12567*t12384;
  t13207 = -1.*t6166*t13148;
  t13210 = t13206 + t13207;
  t16465 = t15876*t16342;
  t16472 = -1.*t16342*t12384;
  t16474 = -1.*t16328*t15973;
  t16322 = t12171*t15954;
  t16323 = -1.*t6302*t15959;
  t16324 = t16322 + t16323;
  t15914 = t12567*t15901;
  t15915 = -1.*t6166*t15910;
  t15916 = t15914 + t15915;
  t16507 = -0.27*t9723*t9736;
  t16508 = 0.27*t9720*t9756;
  t16509 = t16507 + t16508;
  t16510 = t6302*t6303*t16509;
  t16511 = t12155*t12171*t16509;
  t16512 = t16510 + t16511;
  t16514 = t12155*t6302*t16509;
  t16515 = -1.*t6303*t12171*t16509;
  t16516 = t16514 + t16515;
  t16520 = t6302*t6303*t16314;
  t16521 = t12155*t12171*t16314;
  t16522 = t16520 + t16521;
  t16513 = -1.*t15876*t16512;
  t16525 = -0.27*t9720*t9723;
  t16526 = t16525 + t15951;
  t16531 = t12155*t6302*t16314;
  t16532 = -1.*t6303*t12171*t16314;
  t16533 = t16531 + t16532;
  t16528 = t15901*t16512;
  t16539 = t13037*t16526;
  t16540 = t12733*t16516;
  t16541 = t16539 + t16540;
  t16543 = t12733*t16526;
  t16544 = -1.*t13037*t16516;
  t16545 = t16543 + t16544;
  t16530 = t16522*t15973;
  t16549 = t13037*t15896;
  t16550 = t12733*t16533;
  t16551 = t16549 + t16550;
  t16380 = -1.*t15896*t15952;
  t16381 = t16380 + t16132;
  t16388 = t15952*t9768;
  t16389 = t16142 + t16388;
  t16391 = -1.*t15896*t15942;
  t16398 = -1.*t6302*t15896*t15954;
  t16399 = -1.*t12171*t15896*t15959;
  t16400 = t16132 + t16398 + t16399;
  t16567 = t13022*t16526;
  t16574 = -1.*t16526*t9768;
  t16416 = t6302*t9768*t15954;
  t16417 = t12171*t9768*t15959;
  t16418 = t16142 + t16416 + t16417;
  t16596 = t16512*t12384;
  t16600 = -1.*t15901*t16512;
  t16602 = -1.*t16522*t15973;
  t16556 = t12733*t15896;
  t16557 = -1.*t13037*t16533;
  t16558 = t16556 + t16557;
  t16451 = 0.15121*t16314;
  t16452 = 0.15121*t9768;
  t16453 = t16451 + t16452;
  t16454 = var2[6]*t16453;
  t16455 = -1.*t12171*t15954;
  t16456 = t6302*t15959;
  t16457 = t16455 + t16456;
  t16639 = t15876*t16512;
  t16645 = -1.*t16512*t12384;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t12567*t13148 - 1.*t12384*t6166)*var2[1] + t13210*var2[2];
  p_output1[10]=(t12567*t13037*t15812 - 1.*t15876*t6166)*var2[1] + (t12567*t15876 + t13037*t15812*t6166)*var2[2];
  p_output1[11]=(-1.*t12567*t15910 - 1.*t15901*t6166)*var2[1] + t15916*var2[2];
  p_output1[12]=t13148*var2[0] - 1.*t15923*t6166*var2[1] + t12567*t15923*var2[2] + (t15931*(t13037*t15812*t15963 + t13037*t15812*t15967) + t15910*t15980 + t12733*t15812*(t15910*t15963 + t15910*t15967 + t15931*t15978 + t15978*t15986) - 1.*t13037*t15812*t15994)*var2[3];
  p_output1[13]=-1.*t13037*t15812*var2[0] + t12733*t15812*t6166*var2[1] - 1.*t12567*t12733*t15812*var2[2] + ((-1.*t15910*t15963 - 1.*t15910*t15967 - 1.*t15931*t15978 - 1.*t15978*t15986)*t16004 + t15931*(t13148*t15963 + t13148*t15967 + t15923*t15978 + t15978*t16004) + t13148*t16014 + t15910*t16025)*var2[3];
  p_output1[14]=t15910*var2[0] - 1.*t15986*t6166*var2[1] + t12567*t15986*var2[2] + ((-1.*t13037*t15812*t15963 - 1.*t13037*t15812*t15967)*t16004 + t12733*t15812*(-1.*t13148*t15963 - 1.*t13148*t15967 - 1.*t15923*t15978 - 1.*t15978*t16004) + t13148*t16040 - 1.*t13037*t15812*t16051)*var2[3];
  p_output1[15]=t16059 + t16063 + t16067 + (t16098 + t15931*(t16075 + t16076 - 1.*t15812*t16073*t16099 - 1.*t15812*t16073*t16101 + t16103 + t16104) + t12733*t15812*(-1.*t13037*t15910*t16073 + t12733*t15931*t16073 + t16084 + t16089 + t16109 + t16110) + t16113)*var2[3] + (t16070 + t15901*(-1.*t15812*t16073 + t16075 + t16076 + t16080) + t15876*(t15908*t16073 + t16084 + t16088 + t16089) + t16095)*var2[4];
  p_output1[16]=t16117 + t16121 + t16125 + (t16004*(t13037*t15910*t16073 - 1.*t12733*t15931*t16073 + t16127 + t16129 + t16150 + t16151) + t15931*(-1.*t13037*t13148*t16073 + t12733*t16004*t16073 + t16137 + t16139 + t16156 + t16157) + t16160 + t16161)*var2[3] + (t12384*(-1.*t15908*t16073 + t16127 + t16128 + t16129) + t16135 + t15901*(t13084*t16073 + t16137 + t16138 + t16139) + t16145)*var2[4];
  p_output1[17]=t16165 + t16169 + t16173 + (t16195 + t16004*(t15812*t16073*t16099 + t15812*t16073*t16101 + t16178 + t16179 + t16198 + t16199) + t12733*t15812*(t13037*t13148*t16073 - 1.*t12733*t16004*t16073 + t16184 + t16186 + t16204 + t16205) + t16208)*var2[3] + (t16176 + t12384*(t15812*t16073 + t16178 + t16179 + t16180) + t15876*(-1.*t13084*t16073 + t16184 + t16185 + t16186) + t16192)*var2[4];
  p_output1[18]=t16059 + t16063 + t16067 + (t16098 + t16113 + t15931*(t16075 + t16103 + t16104 - 1.*t15812*t16099*t16225 - 1.*t15812*t16101*t16225 + t16230) + t12733*t15812*(t16084 + t16109 + t16110 - 1.*t13037*t15910*t16225 + t12733*t15931*t16225 + t16234))*var2[3] + (t16070 + t16095 + t15901*(t16075 + t16080 - 1.*t15812*t16225 + t16230) + t15876*(t16084 + t16088 + t15908*t16225 + t16234))*var2[4] + (t12171*t15959 + t12171*t16218 + t15954*t6302 - 1.*t16214*t6302)*t9768*var2[5];
  p_output1[19]=t16117 + t16121 + t16125 + (t16160 + t16161 + t16004*(t16127 + t16150 + t16151 + t13037*t15910*t16225 - 1.*t12733*t15931*t16225 + t16265) + t15931*(t16137 + t16156 + t16157 - 1.*t13037*t13148*t16225 + t12733*t16004*t16225 + t16269))*var2[3] + (t16135 + t16145 + t12384*(t16127 + t16128 - 1.*t15908*t16225 + t16265) + t15901*(t16137 + t16138 + t13084*t16225 + t16269))*var2[4] + (t13022*(t12171*t15896*t15954 - 1.*t12171*t15896*t16214 - 1.*t15896*t15959*t6302 - 1.*t15896*t16218*t6302) + t9768*(-1.*t12171*t15954*t9768 + t12171*t16214*t9768 + t15959*t6302*t9768 + t16218*t6302*t9768))*var2[5];
  p_output1[20]=t16165 + t16169 + t16173 + (t16195 + t16208 + t16004*(t16178 + t16198 + t16199 + t15812*t16099*t16225 + t15812*t16101*t16225 + t16292) + t12733*t15812*(t16184 + t16204 + t16205 + t13037*t13148*t16225 - 1.*t12733*t16004*t16225 + t16296))*var2[3] + (t16176 + t16192 + t12384*(t16178 + t16180 + t15812*t16225 + t16292) + t15876*(t16184 + t16185 - 1.*t13084*t16225 + t16296))*var2[4] + t13022*(-1.*t12171*t15959 - 1.*t12171*t16218 - 1.*t15954*t6302 + t16214*t6302)*var2[5];
  p_output1[21]=t16320*var2[0] + (t12567*t16328 - 1.*t16332*t6166)*var2[1] + (t12567*t16332 + t16328*t6166)*var2[2] + (t15980*t16004 + t15931*(t16343 - 1.*t12733*t15812*t16364 + t13037*t15812*t16368) + t12733*t15812*(t16022 + t16023 + t16024 + t16356 + t15931*t16364 + t15910*t16368))*var2[3] + (t12384*t16069 + t15901*(t16343 - 1.*t15812*t16346) + t15876*(t16022 + t16142 + t16143 + t15908*t16346 + t16356 + t16354*t9768))*var2[4] + t13022*t16324*var2[5];
  p_output1[22]=(t16004*t16025 + t16014*t16320 + t15931*(t15967*t16320 + t15978*t16332 + t16004*t16364 + t13148*t16368 + t16423 + t16425) + t16004*(t16048 + t16049 + t16050 - 1.*t15931*t16364 - 1.*t15910*t16368 + t16429))*var2[3] + (t12384*t16144 + t16134*t16328 + t15901*(t15961*t16318 + t13084*t16346 + t16383 + t16385 + t16423 + t16425) + t12384*(t16048 + t16189 + t16190 - 1.*t15908*t16346 + t16393 + t16429))*var2[4] + (t16314*t16400 + t13022*t16418 + t9768*(t12171*t13022*t15959 + t16383 + t16385 + t13022*t15954*t6302 + t15942*t16402*t9768 + t15942*t16404*t9768) + t13022*(t16189 + t16393 - 1.*t15896*t15942*t16402 - 1.*t15896*t15942*t16404 - 1.*t12171*t15959*t9768 - 1.*t15954*t6302*t9768))*var2[5] + (t16314*t16381 + t13022*t16389 + (t13022*t15952 + t16092 + t16383 + t16385)*t9768 + t13022*(t16189 + t16391 + t16393 - 1.*t15952*t9768))*var2[6];
  p_output1[23]=t16454 + t16004*var2[0] + t13210*var2[1] + (t12567*t13148 + t12384*t6166)*var2[2] + (t16040*t16320 + t16004*(t12733*t15812*t16364 - 1.*t13037*t15812*t16368 + t16465) + t12733*t15812*(-1.*t15967*t16320 - 1.*t15978*t16332 - 1.*t16004*t16364 - 1.*t13148*t16368 + t16472 + t16474))*var2[3] + (t16175*t16328 + t12384*(t15812*t16346 + t16465) + t15876*(-1.*t15942*t16314 - 1.*t15961*t16318 - 1.*t13084*t16346 - 1.*t13022*t16354 + t16472 + t16474))*var2[4] + t16314*t16457*var2[5];
  p_output1[24]=t15931*var2[0] + t15916*var2[1] + (t12567*t15910 + t15901*t6166)*var2[2] + (t15931*(t16513 - 1.*t12733*t15812*t16541 + t13037*t15812*t16545) + t15980*t16551 + t12733*t15812*(t16528 + t16530 + t15931*t16541 + t15910*t16545 + t15967*t16551 + t15978*t16558))*var2[3] + (t15901*(t16513 - 1.*t15812*t16516) + t16069*t16522 + t15876*(t15896*t15942 + t15908*t16516 + t16528 + t16530 + t15961*t16533 + t16526*t9768))*var2[4] + t15896*t16324*var2[5] + (0.28121*t9723 - 1.*t15939*t9723 - 0.27*Power(t9723,2))*var2[7];
  p_output1[25]=(t15931*t16014 + t16025*t16551 + t15931*(t15991 + t15992 + t15993 + t16004*t16541 + t13148*t16545 + t16596) + t16004*(-1.*t15931*t16541 - 1.*t15910*t16545 - 1.*t15967*t16551 - 1.*t15978*t16558 + t16600 + t16602))*var2[3] + (t15901*t16134 + t16144*t16522 + t15901*(t15991 + t16092 + t16093 + t13084*t16516 + t16567 + t16596) + t12384*(t16391 - 1.*t15908*t16516 - 1.*t15961*t16533 + t16574 + t16600 + t16602))*var2[4] + (t15896*t16418 + t13022*(-1.*t12171*t15959*t16314 + t16391 - 1.*t15896*t16402*t16509 - 1.*t15896*t16404*t16509 + t16574 - 1.*t15954*t16314*t6302) + t16400*t9768 + t9768*(t12171*t15896*t15959 + t16092 + t16567 + t15896*t15954*t6302 + t16402*t16509*t9768 + t16404*t16509*t9768))*var2[5] + (t15896*t16389 + t13022*(-1.*t15952*t16314 + t16391 - 1.*t15896*t16509 + t16574) + t16381*t9768 + t9768*(t15896*t15952 + t16092 + t16567 + t16509*t9768))*var2[6];
  p_output1[26]=t16454 + t16551*var2[0] + (t12567*t16522 - 1.*t16558*t6166)*var2[1] + (t12567*t16558 + t16522*t6166)*var2[2] + (t15931*t16040 + t16004*(t12733*t15812*t16541 - 1.*t13037*t15812*t16545 + t16639) + t12733*t15812*(t16011 + t16012 + t16013 - 1.*t16004*t16541 - 1.*t13148*t16545 + t16645))*var2[3] + (t15901*t16175 + t12384*(t15812*t16516 + t16639) + t15876*(t16011 + t16132 + t16133 - 1.*t13084*t16516 - 1.*t13022*t16526 + t16645))*var2[4] + t16457*t9768*var2[5] + (-0.28121*t9756 + t15939*t9756 + 0.27*t9723*t9756)*var2[7];
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

#include "dJh_FlFoot_ParallelStance2.hh"

namespace SymFunction
{

void dJh_FlFoot_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
