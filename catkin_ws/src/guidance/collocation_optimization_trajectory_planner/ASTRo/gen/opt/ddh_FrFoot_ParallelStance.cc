/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:43:13 GMT+02:00
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
  double t44746;
  double t44740;
  double t44745;
  double t44747;
  double t44766;
  double t44767;
  double t44769;
  double t44774;
  double t44776;
  double t44777;
  double t44779;
  double t44632;
  double t44592;
  double t44594;
  double t44613;
  double t44627;
  double t44800;
  double t44839;
  double t44636;
  double t44851;
  double t44861;
  double t44863;
  double t44882;
  double t44885;
  double t44888;
  double t44801;
  double t44849;
  double t44850;
  double t44890;
  double t44894;
  double t44896;
  double t44897;
  double t44898;
  double t44902;
  double t44903;
  double t44905;
  double t44906;
  double t44467;
  double t44579;
  double t44926;
  double t44912;
  double t44950;
  double t44951;
  double t44952;
  double t44967;
  double t44968;
  double t44969;
  double t44980;
  double t44998;
  double t45006;
  double t45011;
  double t45012;
  double t45013;
  double t44954;
  double t44956;
  double t44958;
  double t44960;
  double t44962;
  double t44964;
  double t45038;
  double t45040;
  double t45041;
  double t45049;
  double t45052;
  double t45056;
  double t45057;
  double t45059;
  double t45060;
  double t45065;
  double t45071;
  double t45079;
  double t45080;
  double t45081;
  double t45088;
  double t45089;
  double t45091;
  double t45099;
  double t45100;
  double t45101;
  double t45095;
  double t45096;
  double t45097;
  double t45107;
  double t45112;
  double t45127;
  double t45141;
  double t45144;
  double t45149;
  double t45128;
  double t45129;
  double t45135;
  double t45136;
  double t45150;
  double t45151;
  double t45152;
  double t45153;
  double t45157;
  double t45161;
  double t45162;
  double t45163;
  double t45167;
  double t45168;
  double t45169;
  double t45170;
  double t45175;
  double t45176;
  double t45177;
  double t45178;
  double t45201;
  double t45203;
  double t45204;
  double t45206;
  double t45209;
  double t45210;
  double t45218;
  double t45219;
  double t45220;
  double t45213;
  double t45221;
  double t45222;
  double t45225;
  double t45226;
  double t45228;
  double t45229;
  double t45231;
  double t45232;
  double t45234;
  double t45235;
  double t45236;
  double t45243;
  double t45244;
  double t45245;
  double t45249;
  double t45251;
  double t45252;
  double t45307;
  double t45309;
  double t45310;
  double t45321;
  double t45322;
  double t45323;
  double t45342;
  double t45343;
  double t45344;
  double t45327;
  double t45328;
  double t45330;
  double t45333;
  double t45334;
  double t45341;
  double t45347;
  double t45311;
  double t45312;
  double t45313;
  double t45314;
  double t45315;
  double t45316;
  double t45317;
  double t45318;
  double t45319;
  double t45320;
  double t45405;
  double t45406;
  double t45409;
  double t45402;
  double t45336;
  double t45420;
  double t45421;
  double t45422;
  double t45424;
  double t45425;
  double t45426;
  double t45346;
  double t45351;
  double t45360;
  double t45361;
  double t45371;
  double t45427;
  double t45375;
  double t45376;
  double t45431;
  double t45387;
  double t45388;
  double t45391;
  double t45468;
  double t45469;
  double t45470;
  double t45488;
  double t45489;
  double t45490;
  double t45471;
  double t45473;
  double t45476;
  double t45478;
  double t45480;
  double t45483;
  double t45491;
  double t45492;
  double t45493;
  double t45477;
  double t45496;
  double t45497;
  double t45502;
  double t45503;
  double t45505;
  double t45499;
  double t45501;
  double t45513;
  double t45514;
  double t45515;
  double t45517;
  double t45518;
  double t45519;
  double t45523;
  double t45525;
  double t45526;
  double t45551;
  double t45552;
  double t45555;
  double t45572;
  double t45576;
  double t45577;
  double t45582;
  double t45583;
  double t45587;
  double t45601;
  double t45602;
  double t45604;
  double t45606;
  double t45607;
  double t45608;
  double t45605;
  double t45615;
  double t45617;
  double t45618;
  double t45620;
  double t45622;
  double t45624;
  double t45631;
  double t45632;
  double t45633;
  double t45636;
  double t45644;
  double t45645;
  double t45613;
  double t45668;
  double t45669;
  double t45670;
  double t45671;
  double t45672;
  double t45673;
  double t45674;
  double t45675;
  double t45678;
  double t45679;
  double t45680;
  double t45682;
  double t45683;
  double t45684;
  double t45685;
  double t45686;
  double t45687;
  double t44637;
  double t44925;
  double t45706;
  double t45707;
  double t45708;
  double t45712;
  double t45713;
  double t45714;
  double t45694;
  double t45695;
  double t45696;
  double t45700;
  double t45702;
  double t45703;
  double t45626;
  double t45735;
  double t45736;
  double t45737;
  double t45738;
  double t45739;
  double t45740;
  double t45741;
  double t45723;
  double t45724;
  double t45725;
  double t45654;
  double t45655;
  double t45753;
  double t45754;
  double t45755;
  double t45756;
  double t45757;
  double t45758;
  double t45759;
  double t45744;
  double t45745;
  double t45746;
  double t45748;
  double t45749;
  double t45751;
  double t45777;
  double t45779;
  double t45786;
  double t45788;
  double t45767;
  double t45768;
  double t45769;
  double t45770;
  double t45771;
  double t45772;
  double t45773;
  double t45774;
  double t45775;
  double t45778;
  double t45784;
  double t45787;
  double t45791;
  double t45831;
  double t45797;
  double t45798;
  double t45835;
  double t45804;
  double t45805;
  double t45808;
  double t45809;
  double t45283;
  double t45287;
  double t45288;
  double t45879;
  double t45887;
  double t45899;
  double t45903;
  double t45891;
  double t45924;
  double t45931;
  double t45933;
  double t45532;
  double t45533;
  double t45535;
  double t45962;
  double t45965;
  double t45969;
  double t45971;
  double t45550;
  double t45556;
  double t45557;
  double t46021;
  double t46023;
  double t46027;
  double t46030;
  double t45452;
  double t45453;
  double t46062;
  double t46063;
  double t46064;
  double t46067;
  double t46068;
  double t46069;
  double t46073;
  double t46074;
  double t46075;
  double t45459;
  double t46078;
  double t46079;
  double t46080;
  double t46082;
  double t46083;
  double t46084;
  double t45460;
  double t45461;
  double t45462;
  double t45463;
  double t45464;
  double t45465;
  double t45466;
  double t45467;
  double t46031;
  double t46098;
  double t46099;
  double t46100;
  double t46102;
  double t46104;
  double t46105;
  double t46106;
  double t46091;
  double t46093;
  double t46094;
  double t46047;
  double t46048;
  double t46124;
  double t46125;
  double t46126;
  double t46127;
  double t46128;
  double t46129;
  double t46130;
  double t46109;
  double t46110;
  double t46111;
  double t46113;
  double t46114;
  double t46115;
  double t46156;
  double t46162;
  double t46142;
  double t46143;
  double t46144;
  double t46145;
  double t45016;
  double t45073;
  double t45087;
  double t46184;
  double t46191;
  double t46193;
  double t46245;
  double t46246;
  double t46251;
  double t46253;
  double t46233;
  double t46234;
  double t46235;
  double t46237;
  double t46238;
  double t46239;
  double t46240;
  double t46241;
  double t46242;
  double t46243;
  double t46247;
  double t46252;
  double t46256;
  double t46259;
  double t46285;
  double t46262;
  double t46263;
  double t46289;
  double t46268;
  double t46269;
  double t46272;
  t44746 = Cos(var1[14]);
  t44740 = Sin(var1[14]);
  t44745 = 0.28121*t44740;
  t44747 = -1.*t44746;
  t44766 = 1. + t44747;
  t44767 = 0.50321*t44766;
  t44769 = 0.23321*t44746;
  t44774 = t44767 + t44769;
  t44776 = -1.*t44774*t44740;
  t44777 = -0.27*t44746*t44740;
  t44779 = t44745 + t44776 + t44777;
  t44632 = Sin(var1[12]);
  t44592 = Cos(var1[12]);
  t44594 = -1.*t44592;
  t44613 = 1. + t44594;
  t44627 = 0.15121*t44613;
  t44800 = Cos(var1[13]);
  t44839 = Sin(var1[13]);
  t44636 = -0.15121*t44632;
  t44851 = -1.*t44800;
  t44861 = 1. + t44851;
  t44863 = 0.28121*t44861;
  t44882 = t44800*t44774;
  t44885 = -0.27*t44839*t44740;
  t44888 = t44863 + t44882 + t44885;
  t44801 = t44800*t44746;
  t44849 = t44839*t44740;
  t44850 = t44801 + t44849;
  t44890 = t44592*t44888;
  t44894 = t44627 + t44890;
  t44896 = t44632*t44894;
  t44897 = -0.15121*t44613;
  t44898 = -0.15121*t44592;
  t44902 = t44632*t44888;
  t44903 = t44897 + t44898 + t44636 + t44902;
  t44905 = -1.*t44592*t44903;
  t44906 = t44896 + t44905;
  t44467 = Cos(var1[4]);
  t44579 = Cos(var1[5]);
  t44926 = Sin(var1[5]);
  t44912 = Sin(var1[4]);
  t44950 = t44592*t44467*t44579;
  t44951 = -1.*t44467*t44632*t44926;
  t44952 = t44950 + t44951;
  t44967 = -1.*t44746*t44839;
  t44968 = t44800*t44740;
  t44969 = t44967 + t44968;
  t44980 = t44969*t44912;
  t44998 = t44592*t44579*t44850;
  t45006 = -1.*t44632*t44850*t44926;
  t45011 = t44998 + t45006;
  t45012 = t44467*t45011;
  t45013 = t44980 + t45012;
  t44954 = -1.*t44839*t44912;
  t44956 = t44800*t44952;
  t44958 = t44954 + t44956;
  t44960 = t44800*t44912;
  t44962 = t44839*t44952;
  t44964 = t44960 + t44962;
  t45038 = Sin(var1[3]);
  t45040 = t44579*t44632*t44850;
  t45041 = t44592*t44850*t44926;
  t45049 = t45040 + t45041;
  t45052 = t45038*t45049;
  t45056 = Cos(var1[3]);
  t45057 = t44467*t44969;
  t45059 = -1.*t44912*t45011;
  t45060 = t45057 + t45059;
  t45065 = t45056*t45060;
  t45071 = t45052 + t45065;
  t45079 = t45056*t45049;
  t45080 = -1.*t45038*t45060;
  t45081 = t45079 + t45080;
  t45088 = t44746*t44839;
  t45089 = -1.*t44800*t44740;
  t45091 = t45088 + t45089;
  t45099 = t44592*t44579;
  t45100 = -1.*t44632*t44926;
  t45101 = t45099 + t45100;
  t45095 = t44579*t44632*t45091;
  t45096 = t44592*t45091*t44926;
  t45097 = t45095 + t45096;
  t45107 = t44579*t44903;
  t45112 = t44894*t44926;
  t45127 = t45107 + t45112;
  t45141 = t44579*t44894;
  t45144 = -1.*t44903*t44926;
  t45149 = t45141 + t45144;
  t45128 = -1.*t45101*t45127;
  t45129 = -1.*t44579*t44632;
  t45135 = -1.*t44592*t44926;
  t45136 = t45129 + t45135;
  t45150 = -1.*t45136*t45149;
  t45151 = t45128 + t45150;
  t45152 = t45097*t45151;
  t45153 = 0.28121*t44839;
  t45157 = -1.*t44774*t44839;
  t45161 = -0.27*t44800*t44740;
  t45162 = t45153 + t45157 + t45161;
  t45163 = t45162*t44850;
  t45167 = t45097*t45127;
  t45168 = t44592*t44579*t45091;
  t45169 = -1.*t44632*t45091*t44926;
  t45170 = t45168 + t45169;
  t45175 = t45170*t45149;
  t45176 = t45163 + t45167 + t45175;
  t45177 = t45101*t45176;
  t45178 = t45152 + t45177;
  t45201 = t44850*t44912;
  t45203 = t44467*t45170;
  t45204 = t45201 + t45203;
  t45206 = t45162*t44912;
  t45209 = t44467*t45149;
  t45210 = t45206 + t45209;
  t45218 = t44467*t45162;
  t45219 = -1.*t44912*t45149;
  t45220 = t45218 + t45219;
  t45213 = -1.*t44467*t45136*t45210;
  t45221 = t44912*t45136*t45220;
  t45222 = t45128 + t45213 + t45221;
  t45225 = t45204*t45222;
  t45226 = t45204*t45210;
  t45228 = t44467*t44850;
  t45229 = -1.*t44912*t45170;
  t45231 = t45228 + t45229;
  t45232 = t45231*t45220;
  t45234 = t45167 + t45226 + t45232;
  t45235 = t44467*t45136*t45234;
  t45236 = t45225 + t45235;
  t45243 = -1.*t44969*t44912;
  t45244 = -1.*t44467*t45011;
  t45245 = t45243 + t45244;
  t45249 = -1.*t45162*t44912;
  t45251 = -1.*t44467*t45149;
  t45252 = t45249 + t45251;
  t45307 = -1.*t44579*t44632*t44850;
  t45309 = -1.*t44592*t44850*t44926;
  t45310 = t45307 + t45309;
  t45321 = -1.*t44579*t44903;
  t45322 = -1.*t44894*t44926;
  t45323 = t45321 + t45322;
  t45342 = -1.*t44579*t44632*t45091;
  t45343 = -1.*t44592*t45091*t44926;
  t45344 = t45342 + t45343;
  t45327 = -1.*t45136*t45127;
  t45328 = -1.*t45101*t45149;
  t45330 = -1.*t44592*t44579;
  t45333 = t44632*t44926;
  t45334 = t45330 + t45333;
  t45341 = t45170*t45127;
  t45347 = t45097*t45149;
  t45311 = var2[0]*t44467*t45310;
  t45312 = t45038*t44912*t45310;
  t45313 = t45056*t45011;
  t45314 = t45312 + t45313;
  t45315 = var2[1]*t45314;
  t45316 = -1.*t45056*t44912*t45310;
  t45317 = t45038*t45011;
  t45318 = t45316 + t45317;
  t45319 = var2[2]*t45318;
  t45320 = t45170*t45151;
  t45405 = 0.15121*t44632;
  t45406 = -1.*t44632*t44888;
  t45409 = t45405 + t45406;
  t45402 = t44898 + t44890;
  t45336 = -1.*t45334*t45149;
  t45420 = t44579*t45409;
  t45421 = -1.*t45402*t44926;
  t45422 = t45420 + t45421;
  t45424 = t44579*t45402;
  t45425 = t45409*t44926;
  t45426 = t45424 + t45425;
  t45346 = t45344*t45149;
  t45351 = t45136*t45176;
  t45360 = t44467*t45344*t45222;
  t45361 = Power(t44467,2);
  t45371 = Power(t44912,2);
  t45427 = -1.*t45101*t45426;
  t45375 = -1.*t44467*t45334*t45210;
  t45376 = t44912*t45334*t45220;
  t45431 = t45097*t45426;
  t45387 = t44467*t45344*t45210;
  t45388 = -1.*t44912*t45344*t45220;
  t45391 = t44467*t45334*t45234;
  t45468 = -0.27*t44746*t44839;
  t45469 = 0.27*t44800*t44740;
  t45470 = t45468 + t45469;
  t45488 = -1.*t44800*t44746;
  t45489 = -1.*t44839*t44740;
  t45490 = t45488 + t45489;
  t45471 = t44579*t44632*t45470;
  t45473 = t44592*t45470*t44926;
  t45476 = t45471 + t45473;
  t45478 = t44592*t44579*t45470;
  t45480 = -1.*t44632*t45470*t44926;
  t45483 = t45478 + t45480;
  t45491 = t44579*t44632*t45490;
  t45492 = t44592*t45490*t44926;
  t45493 = t45491 + t45492;
  t45477 = -1.*t45101*t45476;
  t45496 = -0.27*t44800*t44746;
  t45497 = t45496 + t44885;
  t45502 = t44592*t44579*t45490;
  t45503 = -1.*t44632*t45490*t44926;
  t45505 = t45502 + t45503;
  t45499 = t45097*t45476;
  t45501 = t45493*t45127;
  t45513 = t45497*t44912;
  t45514 = t44467*t45483;
  t45515 = t45513 + t45514;
  t45517 = t44467*t45497;
  t45518 = -1.*t44912*t45483;
  t45519 = t45517 + t45518;
  t45523 = t45091*t44912;
  t45525 = t44467*t45505;
  t45526 = t45523 + t45525;
  t45551 = t44592*t44579*t44969;
  t45552 = -1.*t44632*t44969*t44926;
  t45555 = t45551 + t45552;
  t45572 = t44579*t44632*t44969;
  t45576 = t44592*t44969*t44926;
  t45577 = t45572 + t45576;
  t45582 = t44467*t45490;
  t45583 = -1.*t44912*t45555;
  t45587 = t45582 + t45583;
  t45601 = t44579*t44632*t45162;
  t45602 = t44592*t45162*t44926;
  t45604 = t45601 + t45602;
  t45606 = t44592*t44579*t45162;
  t45607 = -1.*t44632*t45162*t44926;
  t45608 = t45606 + t45607;
  t45605 = -1.*t45101*t45604;
  t45615 = 0.28121*t44800;
  t45617 = -1.*t44800*t44774;
  t45618 = 0.27*t44839*t44740;
  t45620 = t45615 + t45617 + t45618;
  t45622 = t45097*t45604;
  t45624 = t45049*t45127;
  t45631 = t45620*t44912;
  t45632 = t44467*t45608;
  t45633 = t45631 + t45632;
  t45636 = t44467*t45620;
  t45644 = -1.*t44912*t45608;
  t45645 = t45636 + t45644;
  t45613 = t45162*t44969;
  t45668 = -1.*t45091*t44888;
  t45669 = -1.*t45162*t44850;
  t45670 = t45668 + t45669;
  t45671 = t44969*t45670;
  t45672 = t44888*t44850;
  t45673 = t45613 + t45672;
  t45674 = t44850*t45673;
  t45675 = -0.15121 + t45671 + t45674;
  t45678 = -1.*t44592*t45091*t44894;
  t45679 = -1.*t44632*t45091*t44903;
  t45680 = t45669 + t45678 + t45679;
  t45682 = t44969*t45680;
  t45683 = t44592*t44850*t44894;
  t45684 = t44632*t44850*t44903;
  t45685 = t45613 + t45683 + t45684;
  t45686 = t44850*t45685;
  t45687 = t45682 + t45686;
  t44637 = t44627 + t44636;
  t44925 = t44897 + t44636;
  t45706 = t45038*t44912*t45136;
  t45707 = t45056*t45101;
  t45708 = t45706 + t45707;
  t45712 = -1.*t45056*t44912*t45136;
  t45713 = t45038*t45101;
  t45714 = t45712 + t45713;
  t45694 = t44579*t45038*t44912;
  t45695 = t45056*t44926;
  t45696 = t45694 + t45695;
  t45700 = t45056*t44579;
  t45702 = -1.*t45038*t44912*t44926;
  t45703 = t45700 + t45702;
  t45626 = t45011*t45149;
  t45735 = -1.*t45097*t45127;
  t45736 = -1.*t45170*t45149;
  t45737 = t45669 + t45735 + t45736;
  t45738 = t45049*t45737;
  t45739 = t45613 + t45624 + t45626;
  t45740 = t45097*t45739;
  t45741 = t45738 + t45740;
  t45723 = t44592*t45696;
  t45724 = t44632*t45703;
  t45725 = t45723 + t45724;
  t45654 = t45013*t45210;
  t45655 = t45060*t45220;
  t45753 = -1.*t45204*t45210;
  t45754 = -1.*t45231*t45220;
  t45755 = t45735 + t45753 + t45754;
  t45756 = t45013*t45755;
  t45757 = t45624 + t45654 + t45655;
  t45758 = t45204*t45757;
  t45759 = t45756 + t45758;
  t45744 = t44467*t44839*t45038;
  t45745 = t44800*t45725;
  t45746 = t45744 + t45745;
  t45748 = -1.*t44800*t44467*t45038;
  t45749 = t44839*t45725;
  t45751 = t45748 + t45749;
  t45777 = -1.*t45170*t45127;
  t45779 = -1.*t45097*t45149;
  t45786 = t45011*t45127;
  t45788 = t45049*t45149;
  t45767 = var2[0]*t44467*t45334;
  t45768 = t45038*t45136;
  t45769 = -1.*t45056*t44912*t45334;
  t45770 = t45768 + t45769;
  t45771 = var2[2]*t45770;
  t45772 = t45056*t45136;
  t45773 = t45038*t44912*t45334;
  t45774 = t45772 + t45773;
  t45775 = var2[1]*t45774;
  t45778 = -1.*t45344*t45149;
  t45784 = t45011*t45737;
  t45787 = t45310*t45149;
  t45791 = t45170*t45739;
  t45831 = -1.*t45097*t45426;
  t45797 = -1.*t44467*t45344*t45210;
  t45798 = t44912*t45344*t45220;
  t45835 = t45049*t45426;
  t45804 = t44467*t45310*t45210;
  t45805 = -1.*t44912*t45310*t45220;
  t45808 = t44467*t45310*t45755;
  t45809 = t44467*t45344*t45757;
  t45283 = -1.*t44850*t44912;
  t45287 = -1.*t44467*t45170;
  t45288 = t45283 + t45287;
  t45879 = t44969*t45497;
  t45887 = -1.*t45091*t45162;
  t45899 = Power(t44592,2);
  t45903 = Power(t44632,2);
  t45891 = -1.*t45497*t44850;
  t45924 = t45476*t45049;
  t45931 = -1.*t45097*t45476;
  t45933 = -1.*t45493*t45127;
  t45532 = t44467*t45091;
  t45533 = -1.*t44912*t45505;
  t45535 = t45532 + t45533;
  t45962 = t45162*t45490;
  t45965 = t44969*t45620;
  t45969 = -1.*t45162*t44969;
  t45971 = -1.*t45620*t44850;
  t45550 = t45490*t44912;
  t45556 = t44467*t45555;
  t45557 = t45550 + t45556;
  t46021 = t45604*t45049;
  t46023 = t45577*t45127;
  t46027 = -1.*t45097*t45604;
  t46030 = -1.*t45049*t45127;
  t45452 = 0.28121*t44746;
  t45453 = -1.*t44774*t44746;
  t46062 = Power(t44740,2);
  t46063 = 0.27*t46062;
  t46064 = t45452 + t45453 + t46063;
  t46067 = -0.15121*t45091;
  t46068 = -0.15121*t44969;
  t46069 = t46067 + t46068;
  t46073 = -1.*t44632*t44894;
  t46074 = t44592*t44903;
  t46075 = t46073 + t46074;
  t45459 = var2[0]*t45204;
  t46078 = -1.*t45056*t44579*t44912;
  t46079 = t45038*t44926;
  t46080 = t46078 + t46079;
  t46082 = t44579*t45038;
  t46083 = t45056*t44912*t44926;
  t46084 = t46082 + t46083;
  t45460 = t45038*t45097;
  t45461 = t45056*t45231;
  t45462 = t45460 + t45461;
  t45463 = var2[2]*t45462;
  t45464 = t45056*t45097;
  t45465 = -1.*t45038*t45231;
  t45466 = t45464 + t45465;
  t45467 = var2[1]*t45466;
  t46031 = -1.*t45011*t45149;
  t46098 = t45101*t45127;
  t46099 = t45136*t45149;
  t46100 = t46098 + t46099;
  t46102 = t45049*t46100;
  t46104 = t45969 + t46030 + t46031;
  t46105 = t45101*t46104;
  t46106 = t46102 + t46105;
  t46091 = t44592*t46080;
  t46093 = t44632*t46084;
  t46094 = t46091 + t46093;
  t46047 = -1.*t45013*t45210;
  t46048 = -1.*t45060*t45220;
  t46124 = t44467*t45136*t45210;
  t46125 = -1.*t44912*t45136*t45220;
  t46126 = t46098 + t46124 + t46125;
  t46127 = t45013*t46126;
  t46128 = t46030 + t46047 + t46048;
  t46129 = t44467*t45136*t46128;
  t46130 = t46127 + t46129;
  t46109 = -1.*t45056*t44467*t44839;
  t46110 = t44800*t46094;
  t46111 = t46109 + t46110;
  t46113 = t44800*t45056*t44467;
  t46114 = t44839*t46094;
  t46115 = t46113 + t46114;
  t46156 = t45101*t45476;
  t46162 = -1.*t45476*t45049;
  t46142 = -0.15121*t45490;
  t46143 = -0.15121*t44850;
  t46144 = t46142 + t46143;
  t46145 = var2[12]*t46144;
  t45016 = var2[0]*t45013;
  t45073 = var2[2]*t45071;
  t45087 = var2[1]*t45081;
  t46184 = t45101*t45604;
  t46191 = -1.*t45604*t45049;
  t46193 = -1.*t45577*t45127;
  t46245 = t45136*t45127;
  t46246 = t45101*t45149;
  t46251 = -1.*t45011*t45127;
  t46253 = -1.*t45049*t45149;
  t46233 = var2[0]*t44467*t45344;
  t46234 = t45038*t44912*t45344;
  t46235 = t45056*t45170;
  t46237 = t46234 + t46235;
  t46238 = var2[1]*t46237;
  t46239 = -1.*t45056*t44912*t45344;
  t46240 = t45038*t45170;
  t46241 = t46239 + t46240;
  t46242 = var2[2]*t46241;
  t46243 = t45011*t46100;
  t46247 = t45334*t45149;
  t46252 = -1.*t45310*t45149;
  t46256 = t45136*t46104;
  t46259 = t44467*t45310*t46126;
  t46285 = t45101*t45426;
  t46262 = t44467*t45334*t45210;
  t46263 = -1.*t44912*t45334*t45220;
  t46289 = -1.*t45049*t45426;
  t46268 = -1.*t44467*t45310*t45210;
  t46269 = t44912*t45310*t45220;
  t46272 = t44467*t45334*t46128;
  p_output1[0]=t44467*t44579*t44637 + 0.28121*t44839*t44912 - 1.*t44467*t44925*t44926 - 0.15121*(-1.*t44467*t44579*t44632 - 1.*t44467*t44592*t44926) + 0.28121*t44861*t44952 + 0.50321*t44766*t44958 - 0.50321*t44740*t44964 + 0.23321*(t44746*t44958 + t44740*t44964) + t45016 + t45073 + t45087 + var1[0] + t45236*var2[3] + ((-1.*t45038*t45049 - 1.*t45056*t45060)*var2[1] + t45081*var2[2])*var2[3] + t45178*var2[4] + (t45060*var2[0] - 1.*t45038*t45245*var2[1] + t45056*t45245*var2[2] + (t45222*t45231 - 1.*t44912*t45136*t45234 + t45204*(t44912*t45136*t45210 + t44912*t45136*t45252) + t44467*t45136*(t45204*t45220 + t45210*t45231 + t45231*t45252 + t45220*t45288))*var2[3])*var2[4] + t44850*t44906*var2[5] + (t45311 + t45315 + t45319 + (t45360 + t45204*(t45327 + t45328 - 1.*t45136*t45323*t45361 - 1.*t45136*t45323*t45371 + t45375 + t45376) + t44467*t45136*(t44467*t45204*t45323 - 1.*t44912*t45231*t45323 + t45341 + t45347 + t45387 + t45388) + t45391)*var2[3] + (t45320 + t45097*(-1.*t45136*t45323 + t45327 + t45328 + t45336) + t45101*(t45170*t45323 + t45341 + t45346 + t45347) + t45351)*var2[4])*var2[5] + (t45311 + t45315 + t45319 + (t45360 + t45391 + t45204*(t45327 + t45375 + t45376 - 1.*t45136*t45361*t45422 - 1.*t45136*t45371*t45422 + t45427) + t44467*t45136*(t45341 + t45387 + t45388 + t44467*t45204*t45422 - 1.*t44912*t45231*t45422 + t45431))*var2[3] + (t45320 + t45351 + t45097*(t45327 + t45336 - 1.*t45136*t45422 + t45427) + t45101*(t45341 + t45346 + t45170*t45422 + t45431))*var2[4] + t44850*(t44592*t44894 + t44632*t44903 - 1.*t44592*t45402 + t44632*t45409)*var2[5])*var2[12] + t44779*var2[13] + (t45557*var2[0] + (t45056*t45577 - 1.*t45038*t45587)*var2[1] + (t45038*t45577 + t45056*t45587)*var2[2] + (t45013*t45222 + t45204*(t45605 - 1.*t44467*t45136*t45633 + t44912*t45136*t45645) + t44467*t45136*(t45622 + t45624 + t45204*t45633 + t45231*t45645 + t45654 + t45655))*var2[3] + (t45049*t45151 + t45097*(t45605 - 1.*t45136*t45608) + t45101*(t45170*t45608 + t45613 + t44850*t45620 + t45622 + t45624 + t45626))*var2[4] + t44906*t44969*var2[5])*var2[13] + (t45459 + t45463 + t45467 + (t45204*(t45477 - 1.*t44467*t45136*t45515 + t44912*t45136*t45519) + t45222*t45526 + t44467*t45136*(t45499 + t45501 + t45204*t45515 + t45231*t45519 + t45210*t45526 + t45220*t45535))*var2[3] + (t45097*(t45477 - 1.*t45136*t45483) + t45151*t45493 + t45101*(t45091*t45162 + t45170*t45483 + t44850*t45497 + t45499 + t45501 + t45149*t45505))*var2[4] + t44906*t45091*var2[5] + (-0.27*Power(t44746,2) + t45452 + t45453)*var2[13])*var2[14] + t45013*var3[0] + t45081*var3[1] + t45071*var3[2] + t45236*var3[3] + t45178*var3[4] + t44850*t44906*var3[5] + t44779*var3[13] - 1.*var4[0];
  p_output1[1]=-0.28121*t44467*t44839*t45038 + t44637*t45696 + t44925*t45703 - 0.15121*(-1.*t44632*t45696 + t44592*t45703) + 0.28121*t44861*t45725 + 0.50321*t44766*t45746 - 0.50321*t44740*t45751 + 0.23321*(t44746*t45746 + t44740*t45751) + var1[1] + t44467*t45136*var2[0] + t45708*var2[1] + t45714*var2[2] + t45759*var2[3] + ((-1.*t45038*t45101 + t44912*t45056*t45136)*var2[1] + t45708*var2[2])*var2[3] + t45741*var2[4] + (-1.*t44912*t45136*var2[0] + t44467*t45038*t45136*var2[1] - 1.*t44467*t45056*t45136*var2[2] + (t45204*(t45060*t45210 + t45013*t45220 + t45220*t45245 + t45060*t45252) + t45013*(-1.*t45204*t45220 - 1.*t45210*t45231 - 1.*t45231*t45252 - 1.*t45220*t45288) + t45060*t45755 + t45231*t45757)*var2[3])*var2[4] + t45687*var2[5] + (t45767 + t45771 + t45775 + (t45013*(-1.*t44467*t45204*t45323 + t44912*t45231*t45323 + t45777 + t45779 + t45797 + t45798) + t45204*(t44467*t45013*t45323 - 1.*t44912*t45060*t45323 + t45786 + t45788 + t45804 + t45805) + t45808 + t45809)*var2[3] + (t45049*(-1.*t45170*t45323 + t45777 + t45778 + t45779) + t45784 + t45097*(t45011*t45323 + t45786 + t45787 + t45788) + t45791)*var2[4])*var2[5] + t45675*var2[12] + (t45767 + t45771 + t45775 + (t45808 + t45809 + t45013*(-1.*t44467*t45204*t45422 + t44912*t45231*t45422 + t45777 + t45797 + t45798 + t45831) + t45204*(t44467*t45013*t45422 - 1.*t44912*t45060*t45422 + t45786 + t45804 + t45805 + t45835))*var2[3] + (t45784 + t45791 + t45049*(-1.*t45170*t45422 + t45777 + t45778 + t45831) + t45097*(t45011*t45422 + t45786 + t45787 + t45835))*var2[4] + (t44850*(-1.*t44632*t44850*t44894 + t44592*t44850*t44903 + t44632*t44850*t45402 + t44592*t44850*t45409) + t44969*(t44632*t44894*t45091 - 1.*t44592*t44903*t45091 - 1.*t44632*t45091*t45402 - 1.*t44592*t45091*t45409))*var2[5])*var2[12] + ((t45557*t45755 + t45013*t45757 + t45204*(t45210*t45557 + t45220*t45587 + t45013*t45633 + t45060*t45645 + t46021 + t46023) + t45013*(-1.*t45204*t45633 - 1.*t45231*t45645 + t46027 + t46030 + t46047 + t46048))*var2[3] + (t45577*t45737 + t45049*t45739 + t45097*(t45149*t45555 + t45011*t45608 + t45962 + t45965 + t46021 + t46023) + t45049*(-1.*t45170*t45608 + t45969 + t45971 + t46027 + t46030 + t46031))*var2[4] + (t45490*t45680 + t44969*t45685 + t44850*(t44592*t44894*t44969 + t44632*t44903*t44969 + t44850*t45162*t45899 + t44850*t45162*t45903 + t45962 + t45965) + t44969*(-1.*t44592*t44850*t44894 - 1.*t44632*t44850*t44903 - 1.*t45091*t45162*t45899 - 1.*t45091*t45162*t45903 + t45969 + t45971))*var2[5] + (t45490*t45670 + t44969*t45673 + t44850*(t44888*t44969 + t45163 + t45962 + t45965) + t44969*(-1.*t44850*t44888 + t45887 + t45969 + t45971))*var2[12])*var2[13] + ((t45204*t45755 + t45526*t45757 + t45204*(t45167 + t45226 + t45232 + t45013*t45515 + t45060*t45519 + t45924) + t45013*(-1.*t45204*t45515 - 1.*t45231*t45519 - 1.*t45210*t45526 - 1.*t45220*t45535 + t45931 + t45933))*var2[3] + (t45097*t45737 + t45493*t45739 + t45097*(t45163 + t45167 + t45175 + t45011*t45483 + t45879 + t45924) + t45049*(-1.*t45170*t45483 - 1.*t45149*t45505 + t45887 + t45891 + t45931 + t45933))*var2[4] + (t44850*t45680 + t45091*t45685 + t44850*(t44592*t44894*t45091 + t44632*t44903*t45091 + t45163 + t45879 + t44850*t45470*t45899 + t44850*t45470*t45903) + t44969*(-1.*t44592*t44894*t45490 - 1.*t44632*t44903*t45490 + t45887 + t45891 - 1.*t45091*t45470*t45899 - 1.*t45091*t45470*t45903))*var2[5] + (t44850*t45670 + t45091*t45673 + t44850*(t44888*t45091 + t45163 + t44850*t45470 + t45879) + t44969*(-1.*t45091*t45470 - 1.*t44888*t45490 + t45887 + t45891))*var2[12])*var2[14] + t44467*t45136*var3[0] + t45708*var3[1] + t45714*var3[2] + t45759*var3[3] + t45741*var3[4] + t45687*var3[5] + t45675*var3[12] - 1.*var4[1];
  p_output1[2]=0.28121*t44467*t44839*t45056 + t45459 + t45463 + t45467 + t44637*t46080 + t44925*t46084 - 0.15121*(-1.*t44632*t46080 + t44592*t46084) + 0.28121*t44861*t46094 + 0.50321*t44766*t46111 - 0.50321*t44740*t46115 + 0.23321*(t44746*t46111 + t44740*t46115) + var1[2] + t46130*var2[3] + ((-1.*t45038*t45097 - 1.*t45056*t45231)*var2[1] + t45466*var2[2])*var2[3] + t46106*var2[4] + (t45231*var2[0] - 1.*t45038*t45288*var2[1] + t45056*t45288*var2[2] + (t44467*t45136*(-1.*t45060*t45210 - 1.*t45013*t45220 - 1.*t45220*t45245 - 1.*t45060*t45252) + t45013*(-1.*t44912*t45136*t45210 - 1.*t44912*t45136*t45252) + t45060*t46126 - 1.*t44912*t45136*t46128)*var2[3])*var2[4] + t44969*t46075*var2[5] + (t46233 + t46238 + t46242 + (t46259 + t45013*(t45136*t45323*t45361 + t45136*t45323*t45371 + t46245 + t46246 + t46262 + t46263) + t44467*t45136*(-1.*t44467*t45013*t45323 + t44912*t45060*t45323 + t46251 + t46253 + t46268 + t46269) + t46272)*var2[3] + (t46243 + t45049*(t45136*t45323 + t46245 + t46246 + t46247) + t45101*(-1.*t45011*t45323 + t46251 + t46252 + t46253) + t46256)*var2[4])*var2[5] + t46069*var2[12] + (t46233 + t46238 + t46242 + (t46259 + t46272 + t45013*(t45136*t45361*t45422 + t45136*t45371*t45422 + t46245 + t46262 + t46263 + t46285) + t44467*t45136*(-1.*t44467*t45013*t45422 + t44912*t45060*t45422 + t46251 + t46268 + t46269 + t46289))*var2[3] + (t46243 + t46256 + t45049*(t45136*t45422 + t46245 + t46247 + t46285) + t45101*(-1.*t45011*t45422 + t46251 + t46252 + t46289))*var2[4] + t44969*(-1.*t44592*t44894 - 1.*t44632*t44903 + t44592*t45402 - 1.*t44632*t45409)*var2[5])*var2[12] + t46064*var2[13] + (t45016 + t45073 + t45087 + t46145 + (t45557*t46126 + t45013*(t44467*t45136*t45633 - 1.*t44912*t45136*t45645 + t46184) + t44467*t45136*(-1.*t45210*t45557 - 1.*t45220*t45587 - 1.*t45013*t45633 - 1.*t45060*t45645 + t46191 + t46193))*var2[3] + (t45577*t46100 + t45049*(t45136*t45608 + t46184) + t45101*(-1.*t45162*t45490 - 1.*t45149*t45555 - 1.*t45011*t45608 - 1.*t44969*t45620 + t46191 + t46193))*var2[4] + t45490*t46075*var2[5])*var2[13] - 0.27*var2[14] + (t46145 + t45526*var2[0] + (t45056*t45493 - 1.*t45038*t45535)*var2[1] + (t45038*t45493 + t45056*t45535)*var2[2] + (t45204*t46126 + t45013*(t44467*t45136*t45515 - 1.*t44912*t45136*t45519 + t46156) + t44467*t45136*(-1.*t45013*t45515 - 1.*t45060*t45519 + t45735 + t45753 + t45754 + t46162))*var2[3] + (t45097*t46100 + t45049*(t45136*t45483 + t46156) + t45101*(-1.*t45011*t45483 - 1.*t44969*t45497 + t45669 + t45735 + t45736 + t46162))*var2[4] + t44850*t46075*var2[5] + (-0.28121*t44740 + 0.27*t44740*t44746 + t44740*t44774)*var2[13])*var2[14] + t45204*var3[0] + t45466*var3[1] + t45462*var3[2] + t46130*var3[3] + t46106*var3[4] + t44969*t46075*var3[5] + t46069*var3[12] + t46064*var3[13] - 0.27*var3[14] - 1.*var4[2];
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

#include "ddh_FrFoot_ParallelStance.hh"

namespace ParallelStance
{

void ddh_FrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
