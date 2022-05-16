/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:41:48 GMT+02:00
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
  double t2071;
  double t2035;
  double t2043;
  double t2154;
  double t2283;
  double t2404;
  double t2406;
  double t2408;
  double t2507;
  double t2509;
  double t2516;
  double t1769;
  double t1418;
  double t1495;
  double t1586;
  double t1749;
  double t2576;
  double t2948;
  double t1779;
  double t3076;
  double t3146;
  double t3212;
  double t3238;
  double t3246;
  double t3408;
  double t2702;
  double t2976;
  double t2977;
  double t3409;
  double t3508;
  double t3510;
  double t3576;
  double t3591;
  double t3634;
  double t3723;
  double t3826;
  double t3834;
  double t277;
  double t1025;
  double t3999;
  double t3930;
  double t4331;
  double t4460;
  double t4509;
  double t5043;
  double t5063;
  double t5065;
  double t5096;
  double t5101;
  double t5104;
  double t5138;
  double t5149;
  double t5167;
  double t4621;
  double t4677;
  double t4684;
  double t4888;
  double t4939;
  double t4996;
  double t5555;
  double t5573;
  double t5594;
  double t5630;
  double t5640;
  double t5666;
  double t5677;
  double t5715;
  double t5777;
  double t5814;
  double t5821;
  double t5998;
  double t6016;
  double t6021;
  double t6161;
  double t6162;
  double t6165;
  double t6208;
  double t6225;
  double t6231;
  double t6176;
  double t6180;
  double t6205;
  double t6276;
  double t6305;
  double t6306;
  double t6409;
  double t6415;
  double t6458;
  double t6339;
  double t6360;
  double t6390;
  double t6391;
  double t6459;
  double t6466;
  double t6482;
  double t6488;
  double t6493;
  double t6494;
  double t6584;
  double t6602;
  double t6603;
  double t6607;
  double t6611;
  double t6614;
  double t6628;
  double t6629;
  double t6630;
  double t6633;
  double t6710;
  double t6718;
  double t6721;
  double t6722;
  double t6723;
  double t6859;
  double t6902;
  double t6904;
  double t6905;
  double t6900;
  double t6906;
  double t6935;
  double t6936;
  double t6938;
  double t6939;
  double t6941;
  double t6943;
  double t6944;
  double t6945;
  double t6946;
  double t6948;
  double t6953;
  double t6954;
  double t6958;
  double t6964;
  double t6965;
  double t6966;
  double t7112;
  double t7243;
  double t7276;
  double t8596;
  double t8619;
  double t8630;
  double t8811;
  double t8831;
  double t8879;
  double t8649;
  double t8658;
  double t8659;
  double t8673;
  double t8678;
  double t8796;
  double t8905;
  double t7301;
  double t7320;
  double t7374;
  double t7375;
  double t7448;
  double t7466;
  double t7920;
  double t8116;
  double t8367;
  double t8595;
  double t9613;
  double t9620;
  double t9627;
  double t9582;
  double t8701;
  double t9697;
  double t9708;
  double t9722;
  double t9725;
  double t9768;
  double t9793;
  double t8903;
  double t8922;
  double t8989;
  double t9000;
  double t9048;
  double t9831;
  double t9191;
  double t9192;
  double t10042;
  double t9428;
  double t9432;
  double t9460;
  double t15506;
  double t15509;
  double t15517;
  double t15976;
  double t15980;
  double t15984;
  double t15549;
  double t15566;
  double t15596;
  double t15632;
  double t15668;
  double t15822;
  double t15994;
  double t16031;
  double t16103;
  double t15623;
  double t16225;
  double t16443;
  double t16566;
  double t16594;
  double t16595;
  double t16506;
  double t16545;
  double t16606;
  double t16607;
  double t16608;
  double t16616;
  double t16623;
  double t16625;
  double t17005;
  double t17239;
  double t17311;
  double t18098;
  double t18108;
  double t18128;
  double t18164;
  double t18171;
  double t18198;
  double t18236;
  double t18269;
  double t18545;
  double t19761;
  double t19863;
  double t19865;
  double t19889;
  double t20003;
  double t20171;
  double t19879;
  double t20650;
  double t20667;
  double t20668;
  double t20672;
  double t21042;
  double t21048;
  double t21096;
  double t21097;
  double t21098;
  double t21100;
  double t21101;
  double t21102;
  double t20627;
  double t21429;
  double t21528;
  double t21551;
  double t21559;
  double t21606;
  double t21610;
  double t21611;
  double t21612;
  double t21615;
  double t21616;
  double t21617;
  double t21638;
  double t21673;
  double t21686;
  double t21692;
  double t21695;
  double t21708;
  double t1824;
  double t3986;
  double t21926;
  double t21927;
  double t21928;
  double t21948;
  double t21949;
  double t21951;
  double t21856;
  double t21861;
  double t21866;
  double t21911;
  double t21912;
  double t21913;
  double t21052;
  double t22397;
  double t22399;
  double t22407;
  double t22411;
  double t22416;
  double t22417;
  double t22452;
  double t22125;
  double t22290;
  double t22291;
  double t21415;
  double t21417;
  double t22584;
  double t22585;
  double t22606;
  double t22607;
  double t22608;
  double t22609;
  double t22610;
  double t22527;
  double t22528;
  double t22578;
  double t22580;
  double t22581;
  double t22582;
  double t22627;
  double t22629;
  double t22635;
  double t22637;
  double t22617;
  double t22618;
  double t22619;
  double t22620;
  double t22621;
  double t22622;
  double t22623;
  double t22624;
  double t22625;
  double t22628;
  double t22633;
  double t22636;
  double t22640;
  double t22678;
  double t22645;
  double t22646;
  double t22682;
  double t22651;
  double t22652;
  double t22655;
  double t22657;
  double t6992;
  double t6999;
  double t7001;
  double t22724;
  double t22738;
  double t22747;
  double t22749;
  double t22741;
  double t22768;
  double t22772;
  double t22774;
  double t17537;
  double t17606;
  double t17674;
  double t22818;
  double t22820;
  double t22824;
  double t22826;
  double t18078;
  double t18138;
  double t18148;
  double t22850;
  double t22852;
  double t22868;
  double t22870;
  double t14180;
  double t14694;
  double t22921;
  double t22922;
  double t22923;
  double t22942;
  double t22943;
  double t22944;
  double t22956;
  double t22957;
  double t22958;
  double t15110;
  double t22961;
  double t22962;
  double t22963;
  double t22965;
  double t22966;
  double t22967;
  double t15197;
  double t15249;
  double t15409;
  double t15433;
  double t15447;
  double t15454;
  double t15479;
  double t15490;
  double t22871;
  double t22980;
  double t22981;
  double t22982;
  double t22983;
  double t22984;
  double t22985;
  double t22986;
  double t22974;
  double t22975;
  double t22976;
  double t22893;
  double t22894;
  double t23004;
  double t23005;
  double t23006;
  double t23007;
  double t23008;
  double t23009;
  double t23010;
  double t22989;
  double t22990;
  double t22991;
  double t22993;
  double t22994;
  double t22995;
  double t23045;
  double t23051;
  double t23029;
  double t23030;
  double t23031;
  double t23032;
  double t5435;
  double t5861;
  double t6156;
  double t23080;
  double t23106;
  double t23108;
  double t23170;
  double t23172;
  double t23189;
  double t23191;
  double t23154;
  double t23156;
  double t23157;
  double t23158;
  double t23159;
  double t23160;
  double t23161;
  double t23162;
  double t23163;
  double t23168;
  double t23185;
  double t23190;
  double t23194;
  double t23197;
  double t25531;
  double t23203;
  double t23217;
  double t25637;
  double t23431;
  double t24898;
  double t24912;
  t2071 = Cos(var1[14]);
  t2035 = Sin(var1[14]);
  t2043 = 0.28121*t2035;
  t2154 = -1.*t2071;
  t2283 = 1. + t2154;
  t2404 = 0.50321*t2283;
  t2406 = 0.23321*t2071;
  t2408 = t2404 + t2406;
  t2507 = -1.*t2408*t2035;
  t2509 = -0.27*t2071*t2035;
  t2516 = t2043 + t2507 + t2509;
  t1769 = Sin(var1[12]);
  t1418 = Cos(var1[12]);
  t1495 = -1.*t1418;
  t1586 = 1. + t1495;
  t1749 = 0.15121*t1586;
  t2576 = Cos(var1[13]);
  t2948 = Sin(var1[13]);
  t1779 = -0.15121*t1769;
  t3076 = -1.*t2576;
  t3146 = 1. + t3076;
  t3212 = 0.28121*t3146;
  t3238 = t2576*t2408;
  t3246 = -0.27*t2948*t2035;
  t3408 = t3212 + t3238 + t3246;
  t2702 = t2576*t2071;
  t2976 = t2948*t2035;
  t2977 = t2702 + t2976;
  t3409 = t1418*t3408;
  t3508 = t1749 + t3409;
  t3510 = t1769*t3508;
  t3576 = -0.15121*t1586;
  t3591 = -0.15121*t1418;
  t3634 = t1769*t3408;
  t3723 = t3576 + t3591 + t1779 + t3634;
  t3826 = -1.*t1418*t3723;
  t3834 = t3510 + t3826;
  t277 = Cos(var1[4]);
  t1025 = Cos(var1[5]);
  t3999 = Sin(var1[5]);
  t3930 = Sin(var1[4]);
  t4331 = t1418*t277*t1025;
  t4460 = -1.*t277*t1769*t3999;
  t4509 = t4331 + t4460;
  t5043 = -1.*t2071*t2948;
  t5063 = t2576*t2035;
  t5065 = t5043 + t5063;
  t5096 = t5065*t3930;
  t5101 = t1418*t1025*t2977;
  t5104 = -1.*t1769*t2977*t3999;
  t5138 = t5101 + t5104;
  t5149 = t277*t5138;
  t5167 = t5096 + t5149;
  t4621 = -1.*t2948*t3930;
  t4677 = t2576*t4509;
  t4684 = t4621 + t4677;
  t4888 = t2576*t3930;
  t4939 = t2948*t4509;
  t4996 = t4888 + t4939;
  t5555 = Sin(var1[3]);
  t5573 = t1025*t1769*t2977;
  t5594 = t1418*t2977*t3999;
  t5630 = t5573 + t5594;
  t5640 = t5555*t5630;
  t5666 = Cos(var1[3]);
  t5677 = t277*t5065;
  t5715 = -1.*t3930*t5138;
  t5777 = t5677 + t5715;
  t5814 = t5666*t5777;
  t5821 = t5640 + t5814;
  t5998 = t5666*t5630;
  t6016 = -1.*t5555*t5777;
  t6021 = t5998 + t6016;
  t6161 = t2071*t2948;
  t6162 = -1.*t2576*t2035;
  t6165 = t6161 + t6162;
  t6208 = t1418*t1025;
  t6225 = -1.*t1769*t3999;
  t6231 = t6208 + t6225;
  t6176 = t1025*t1769*t6165;
  t6180 = t1418*t6165*t3999;
  t6205 = t6176 + t6180;
  t6276 = t1025*t3723;
  t6305 = t3508*t3999;
  t6306 = t6276 + t6305;
  t6409 = t1025*t3508;
  t6415 = -1.*t3723*t3999;
  t6458 = t6409 + t6415;
  t6339 = -1.*t6231*t6306;
  t6360 = -1.*t1025*t1769;
  t6390 = -1.*t1418*t3999;
  t6391 = t6360 + t6390;
  t6459 = -1.*t6391*t6458;
  t6466 = t6339 + t6459;
  t6482 = t6205*t6466;
  t6488 = 0.28121*t2948;
  t6493 = -1.*t2408*t2948;
  t6494 = -0.27*t2576*t2035;
  t6584 = t6488 + t6493 + t6494;
  t6602 = t6584*t2977;
  t6603 = t6205*t6306;
  t6607 = t1418*t1025*t6165;
  t6611 = -1.*t1769*t6165*t3999;
  t6614 = t6607 + t6611;
  t6628 = t6614*t6458;
  t6629 = t6602 + t6603 + t6628;
  t6630 = t6231*t6629;
  t6633 = t6482 + t6630;
  t6710 = t2977*t3930;
  t6718 = t277*t6614;
  t6721 = t6710 + t6718;
  t6722 = t6584*t3930;
  t6723 = t277*t6458;
  t6859 = t6722 + t6723;
  t6902 = t277*t6584;
  t6904 = -1.*t3930*t6458;
  t6905 = t6902 + t6904;
  t6900 = -1.*t277*t6391*t6859;
  t6906 = t3930*t6391*t6905;
  t6935 = t6339 + t6900 + t6906;
  t6936 = t6721*t6935;
  t6938 = t6721*t6859;
  t6939 = t277*t2977;
  t6941 = -1.*t3930*t6614;
  t6943 = t6939 + t6941;
  t6944 = t6943*t6905;
  t6945 = t6603 + t6938 + t6944;
  t6946 = t277*t6391*t6945;
  t6948 = t6936 + t6946;
  t6953 = -1.*t5065*t3930;
  t6954 = -1.*t277*t5138;
  t6958 = t6953 + t6954;
  t6964 = -1.*t6584*t3930;
  t6965 = -1.*t277*t6458;
  t6966 = t6964 + t6965;
  t7112 = -1.*t1025*t1769*t2977;
  t7243 = -1.*t1418*t2977*t3999;
  t7276 = t7112 + t7243;
  t8596 = -1.*t1025*t3723;
  t8619 = -1.*t3508*t3999;
  t8630 = t8596 + t8619;
  t8811 = -1.*t1025*t1769*t6165;
  t8831 = -1.*t1418*t6165*t3999;
  t8879 = t8811 + t8831;
  t8649 = -1.*t6391*t6306;
  t8658 = -1.*t6231*t6458;
  t8659 = -1.*t1418*t1025;
  t8673 = t1769*t3999;
  t8678 = t8659 + t8673;
  t8796 = t6614*t6306;
  t8905 = t6205*t6458;
  t7301 = var2[0]*t277*t7276;
  t7320 = t5555*t3930*t7276;
  t7374 = t5666*t5138;
  t7375 = t7320 + t7374;
  t7448 = var2[1]*t7375;
  t7466 = -1.*t5666*t3930*t7276;
  t7920 = t5555*t5138;
  t8116 = t7466 + t7920;
  t8367 = var2[2]*t8116;
  t8595 = t6614*t6466;
  t9613 = 0.15121*t1769;
  t9620 = -1.*t1769*t3408;
  t9627 = t9613 + t9620;
  t9582 = t3591 + t3409;
  t8701 = -1.*t8678*t6458;
  t9697 = t1025*t9627;
  t9708 = -1.*t9582*t3999;
  t9722 = t9697 + t9708;
  t9725 = t1025*t9582;
  t9768 = t9627*t3999;
  t9793 = t9725 + t9768;
  t8903 = t8879*t6458;
  t8922 = t6391*t6629;
  t8989 = t277*t8879*t6935;
  t9000 = Power(t277,2);
  t9048 = Power(t3930,2);
  t9831 = -1.*t6231*t9793;
  t9191 = -1.*t277*t8678*t6859;
  t9192 = t3930*t8678*t6905;
  t10042 = t6205*t9793;
  t9428 = t277*t8879*t6859;
  t9432 = -1.*t3930*t8879*t6905;
  t9460 = t277*t8678*t6945;
  t15506 = -0.27*t2071*t2948;
  t15509 = 0.27*t2576*t2035;
  t15517 = t15506 + t15509;
  t15976 = -1.*t2576*t2071;
  t15980 = -1.*t2948*t2035;
  t15984 = t15976 + t15980;
  t15549 = t1025*t1769*t15517;
  t15566 = t1418*t15517*t3999;
  t15596 = t15549 + t15566;
  t15632 = t1418*t1025*t15517;
  t15668 = -1.*t1769*t15517*t3999;
  t15822 = t15632 + t15668;
  t15994 = t1025*t1769*t15984;
  t16031 = t1418*t15984*t3999;
  t16103 = t15994 + t16031;
  t15623 = -1.*t6231*t15596;
  t16225 = -0.27*t2576*t2071;
  t16443 = t16225 + t3246;
  t16566 = t1418*t1025*t15984;
  t16594 = -1.*t1769*t15984*t3999;
  t16595 = t16566 + t16594;
  t16506 = t6205*t15596;
  t16545 = t16103*t6306;
  t16606 = t16443*t3930;
  t16607 = t277*t15822;
  t16608 = t16606 + t16607;
  t16616 = t277*t16443;
  t16623 = -1.*t3930*t15822;
  t16625 = t16616 + t16623;
  t17005 = t6165*t3930;
  t17239 = t277*t16595;
  t17311 = t17005 + t17239;
  t18098 = t1418*t1025*t5065;
  t18108 = -1.*t1769*t5065*t3999;
  t18128 = t18098 + t18108;
  t18164 = t1025*t1769*t5065;
  t18171 = t1418*t5065*t3999;
  t18198 = t18164 + t18171;
  t18236 = t277*t15984;
  t18269 = -1.*t3930*t18128;
  t18545 = t18236 + t18269;
  t19761 = t1025*t1769*t6584;
  t19863 = t1418*t6584*t3999;
  t19865 = t19761 + t19863;
  t19889 = t1418*t1025*t6584;
  t20003 = -1.*t1769*t6584*t3999;
  t20171 = t19889 + t20003;
  t19879 = -1.*t6231*t19865;
  t20650 = 0.28121*t2576;
  t20667 = -1.*t2576*t2408;
  t20668 = 0.27*t2948*t2035;
  t20672 = t20650 + t20667 + t20668;
  t21042 = t6205*t19865;
  t21048 = t5630*t6306;
  t21096 = t20672*t3930;
  t21097 = t277*t20171;
  t21098 = t21096 + t21097;
  t21100 = t277*t20672;
  t21101 = -1.*t3930*t20171;
  t21102 = t21100 + t21101;
  t20627 = t6584*t5065;
  t21429 = -1.*t6165*t3408;
  t21528 = -1.*t6584*t2977;
  t21551 = t21429 + t21528;
  t21559 = t5065*t21551;
  t21606 = t3408*t2977;
  t21610 = t20627 + t21606;
  t21611 = t2977*t21610;
  t21612 = -0.15121 + t21559 + t21611;
  t21615 = -1.*t1418*t6165*t3508;
  t21616 = -1.*t1769*t6165*t3723;
  t21617 = t21528 + t21615 + t21616;
  t21638 = t5065*t21617;
  t21673 = t1418*t2977*t3508;
  t21686 = t1769*t2977*t3723;
  t21692 = t20627 + t21673 + t21686;
  t21695 = t2977*t21692;
  t21708 = t21638 + t21695;
  t1824 = t1749 + t1779;
  t3986 = t3576 + t1779;
  t21926 = t5555*t3930*t6391;
  t21927 = t5666*t6231;
  t21928 = t21926 + t21927;
  t21948 = -1.*t5666*t3930*t6391;
  t21949 = t5555*t6231;
  t21951 = t21948 + t21949;
  t21856 = t1025*t5555*t3930;
  t21861 = t5666*t3999;
  t21866 = t21856 + t21861;
  t21911 = t5666*t1025;
  t21912 = -1.*t5555*t3930*t3999;
  t21913 = t21911 + t21912;
  t21052 = t5138*t6458;
  t22397 = -1.*t6205*t6306;
  t22399 = -1.*t6614*t6458;
  t22407 = t21528 + t22397 + t22399;
  t22411 = t5630*t22407;
  t22416 = t20627 + t21048 + t21052;
  t22417 = t6205*t22416;
  t22452 = t22411 + t22417;
  t22125 = t1418*t21866;
  t22290 = t1769*t21913;
  t22291 = t22125 + t22290;
  t21415 = t5167*t6859;
  t21417 = t5777*t6905;
  t22584 = -1.*t6721*t6859;
  t22585 = -1.*t6943*t6905;
  t22606 = t22397 + t22584 + t22585;
  t22607 = t5167*t22606;
  t22608 = t21048 + t21415 + t21417;
  t22609 = t6721*t22608;
  t22610 = t22607 + t22609;
  t22527 = t277*t2948*t5555;
  t22528 = t2576*t22291;
  t22578 = t22527 + t22528;
  t22580 = -1.*t2576*t277*t5555;
  t22581 = t2948*t22291;
  t22582 = t22580 + t22581;
  t22627 = -1.*t6614*t6306;
  t22629 = -1.*t6205*t6458;
  t22635 = t5138*t6306;
  t22637 = t5630*t6458;
  t22617 = var2[0]*t277*t8678;
  t22618 = t5555*t6391;
  t22619 = -1.*t5666*t3930*t8678;
  t22620 = t22618 + t22619;
  t22621 = var2[2]*t22620;
  t22622 = t5666*t6391;
  t22623 = t5555*t3930*t8678;
  t22624 = t22622 + t22623;
  t22625 = var2[1]*t22624;
  t22628 = -1.*t8879*t6458;
  t22633 = t5138*t22407;
  t22636 = t7276*t6458;
  t22640 = t6614*t22416;
  t22678 = -1.*t6205*t9793;
  t22645 = -1.*t277*t8879*t6859;
  t22646 = t3930*t8879*t6905;
  t22682 = t5630*t9793;
  t22651 = t277*t7276*t6859;
  t22652 = -1.*t3930*t7276*t6905;
  t22655 = t277*t7276*t22606;
  t22657 = t277*t8879*t22608;
  t6992 = -1.*t2977*t3930;
  t6999 = -1.*t277*t6614;
  t7001 = t6992 + t6999;
  t22724 = t5065*t16443;
  t22738 = -1.*t6165*t6584;
  t22747 = Power(t1418,2);
  t22749 = Power(t1769,2);
  t22741 = -1.*t16443*t2977;
  t22768 = t15596*t5630;
  t22772 = -1.*t6205*t15596;
  t22774 = -1.*t16103*t6306;
  t17537 = t277*t6165;
  t17606 = -1.*t3930*t16595;
  t17674 = t17537 + t17606;
  t22818 = t6584*t15984;
  t22820 = t5065*t20672;
  t22824 = -1.*t6584*t5065;
  t22826 = -1.*t20672*t2977;
  t18078 = t15984*t3930;
  t18138 = t277*t18128;
  t18148 = t18078 + t18138;
  t22850 = t19865*t5630;
  t22852 = t18198*t6306;
  t22868 = -1.*t6205*t19865;
  t22870 = -1.*t5630*t6306;
  t14180 = 0.28121*t2071;
  t14694 = -1.*t2408*t2071;
  t22921 = Power(t2035,2);
  t22922 = 0.27*t22921;
  t22923 = t14180 + t14694 + t22922;
  t22942 = -0.15121*t6165;
  t22943 = -0.15121*t5065;
  t22944 = t22942 + t22943;
  t22956 = -1.*t1769*t3508;
  t22957 = t1418*t3723;
  t22958 = t22956 + t22957;
  t15110 = var2[0]*t6721;
  t22961 = -1.*t5666*t1025*t3930;
  t22962 = t5555*t3999;
  t22963 = t22961 + t22962;
  t22965 = t1025*t5555;
  t22966 = t5666*t3930*t3999;
  t22967 = t22965 + t22966;
  t15197 = t5555*t6205;
  t15249 = t5666*t6943;
  t15409 = t15197 + t15249;
  t15433 = var2[2]*t15409;
  t15447 = t5666*t6205;
  t15454 = -1.*t5555*t6943;
  t15479 = t15447 + t15454;
  t15490 = var2[1]*t15479;
  t22871 = -1.*t5138*t6458;
  t22980 = t6231*t6306;
  t22981 = t6391*t6458;
  t22982 = t22980 + t22981;
  t22983 = t5630*t22982;
  t22984 = t22824 + t22870 + t22871;
  t22985 = t6231*t22984;
  t22986 = t22983 + t22985;
  t22974 = t1418*t22963;
  t22975 = t1769*t22967;
  t22976 = t22974 + t22975;
  t22893 = -1.*t5167*t6859;
  t22894 = -1.*t5777*t6905;
  t23004 = t277*t6391*t6859;
  t23005 = -1.*t3930*t6391*t6905;
  t23006 = t22980 + t23004 + t23005;
  t23007 = t5167*t23006;
  t23008 = t22870 + t22893 + t22894;
  t23009 = t277*t6391*t23008;
  t23010 = t23007 + t23009;
  t22989 = -1.*t5666*t277*t2948;
  t22990 = t2576*t22976;
  t22991 = t22989 + t22990;
  t22993 = t2576*t5666*t277;
  t22994 = t2948*t22976;
  t22995 = t22993 + t22994;
  t23045 = t6231*t15596;
  t23051 = -1.*t15596*t5630;
  t23029 = -0.15121*t15984;
  t23030 = -0.15121*t2977;
  t23031 = t23029 + t23030;
  t23032 = var2[12]*t23031;
  t5435 = var2[0]*t5167;
  t5861 = var2[2]*t5821;
  t6156 = var2[1]*t6021;
  t23080 = t6231*t19865;
  t23106 = -1.*t19865*t5630;
  t23108 = -1.*t18198*t6306;
  t23170 = t6391*t6306;
  t23172 = t6231*t6458;
  t23189 = -1.*t5138*t6306;
  t23191 = -1.*t5630*t6458;
  t23154 = var2[0]*t277*t8879;
  t23156 = t5555*t3930*t8879;
  t23157 = t5666*t6614;
  t23158 = t23156 + t23157;
  t23159 = var2[1]*t23158;
  t23160 = -1.*t5666*t3930*t8879;
  t23161 = t5555*t6614;
  t23162 = t23160 + t23161;
  t23163 = var2[2]*t23162;
  t23168 = t5138*t22982;
  t23185 = t8678*t6458;
  t23190 = -1.*t7276*t6458;
  t23194 = t6391*t22984;
  t23197 = t277*t7276*t23006;
  t25531 = t6231*t9793;
  t23203 = t277*t8678*t6859;
  t23217 = -1.*t3930*t8678*t6905;
  t25637 = -1.*t5630*t9793;
  t23431 = -1.*t277*t7276*t6859;
  t24898 = t3930*t7276*t6905;
  t24912 = t277*t8678*t23008;
  p_output1[0]=t1025*t1824*t277 + 0.28121*t2948*t3930 - 1.*t277*t3986*t3999 - 0.15121*(-1.*t1025*t1769*t277 - 1.*t1418*t277*t3999) + 0.28121*t3146*t4509 + 0.50321*t2283*t4684 - 0.50321*t2035*t4996 + 0.23321*(t2071*t4684 + t2035*t4996) + t5435 + t5861 + t6156 + var1[0] + t6948*var2[3] + ((-1.*t5555*t5630 - 1.*t5666*t5777)*var2[1] + t6021*var2[2])*var2[3] + t6633*var2[4] + (t5777*var2[0] - 1.*t5555*t6958*var2[1] + t5666*t6958*var2[2] + (t6935*t6943 - 1.*t3930*t6391*t6945 + t6721*(t3930*t6391*t6859 + t3930*t6391*t6966) + t277*t6391*(t6721*t6905 + t6859*t6943 + t6943*t6966 + t6905*t7001))*var2[3])*var2[4] + t2977*t3834*var2[5] + (t7301 + t7448 + t8367 + (t8989 + t6721*(t8649 + t8658 - 1.*t6391*t8630*t9000 - 1.*t6391*t8630*t9048 + t9191 + t9192) + t277*t6391*(t277*t6721*t8630 - 1.*t3930*t6943*t8630 + t8796 + t8905 + t9428 + t9432) + t9460)*var2[3] + (t8595 + t6205*(-1.*t6391*t8630 + t8649 + t8658 + t8701) + t6231*(t6614*t8630 + t8796 + t8903 + t8905) + t8922)*var2[4])*var2[5] + (t7301 + t7448 + t8367 + (t8989 + t9460 + t277*t6391*(t10042 + t8796 + t9428 + t9432 + t277*t6721*t9722 - 1.*t3930*t6943*t9722) + t6721*(t8649 + t9191 + t9192 - 1.*t6391*t9000*t9722 - 1.*t6391*t9048*t9722 + t9831))*var2[3] + (t8595 + t8922 + t6231*(t10042 + t8796 + t8903 + t6614*t9722) + t6205*(t8649 + t8701 - 1.*t6391*t9722 + t9831))*var2[4] + t2977*(t1418*t3508 + t1769*t3723 - 1.*t1418*t9582 + t1769*t9627)*var2[5])*var2[12] + t2516*var2[13] + (t18148*var2[0] + (-1.*t18545*t5555 + t18198*t5666)*var2[1] + (t18198*t5555 + t18545*t5666)*var2[2] + ((t19879 - 1.*t21098*t277*t6391 + t21102*t3930*t6391)*t6721 + t5167*t6935 + t277*t6391*(t21042 + t21048 + t21415 + t21417 + t21098*t6721 + t21102*t6943))*var2[3] + (t6205*(t19879 - 1.*t20171*t6391) + t5630*t6466 + t6231*(t20627 + t21042 + t21048 + t21052 + t20672*t2977 + t20171*t6614))*var2[4] + t3834*t5065*var2[5])*var2[13] + (t15110 + t15433 + t15490 + ((t15623 - 1.*t16608*t277*t6391 + t16625*t3930*t6391)*t6721 + t17311*t6935 + t277*t6391*(t16506 + t16545 + t16608*t6721 + t17311*t6859 + t17674*t6905 + t16625*t6943))*var2[3] + (t6205*(t15623 - 1.*t15822*t6391) + t16103*t6466 + t6231*(t16506 + t16545 + t16443*t2977 + t16595*t6458 + t6165*t6584 + t15822*t6614))*var2[4] + t3834*t6165*var2[5] + (t14180 + t14694 - 0.27*Power(t2071,2))*var2[13])*var2[14] + t5167*var3[0] + t6021*var3[1] + t5821*var3[2] + t6948*var3[3] + t6633*var3[4] + t2977*t3834*var3[5] + t2516*var3[13] - 1.*var4[0];
  p_output1[1]=t1824*t21866 - 0.15121*(-1.*t1769*t21866 + t1418*t21913) - 0.50321*t2035*t22582 + 0.23321*(t2071*t22578 + t2035*t22582) + 0.50321*t22578*t2283 + 0.28121*t22291*t3146 + t21913*t3986 - 0.28121*t277*t2948*t5555 + var1[1] + t277*t6391*var2[0] + t21928*var2[1] + t21951*var2[2] + t22610*var2[3] + ((-1.*t5555*t6231 + t3930*t5666*t6391)*var2[1] + t21928*var2[2])*var2[3] + t22452*var2[4] + (-1.*t3930*t6391*var2[0] + t277*t5555*t6391*var2[1] - 1.*t277*t5666*t6391*var2[2] + (t22606*t5777 + t22608*t6943 + t6721*(t5777*t6859 + t5167*t6905 + t6905*t6958 + t5777*t6966) + t5167*(-1.*t6721*t6905 - 1.*t6859*t6943 - 1.*t6943*t6966 - 1.*t6905*t7001))*var2[3])*var2[4] + t21708*var2[5] + (t22617 + t22621 + t22625 + (t22655 + t22657 + t6721*(t22635 + t22637 + t22651 + t22652 + t277*t5167*t8630 - 1.*t3930*t5777*t8630) + t5167*(t22627 + t22629 + t22645 + t22646 - 1.*t277*t6721*t8630 + t3930*t6943*t8630))*var2[3] + (t22633 + t22640 + t6205*(t22635 + t22636 + t22637 + t5138*t8630) + t5630*(t22627 + t22628 + t22629 - 1.*t6614*t8630))*var2[4])*var2[5] + t21612*var2[12] + (t22617 + t22621 + t22625 + (t22655 + t22657 + t6721*(t22635 + t22651 + t22652 + t22682 + t277*t5167*t9722 - 1.*t3930*t5777*t9722) + t5167*(t22627 + t22645 + t22646 + t22678 - 1.*t277*t6721*t9722 + t3930*t6943*t9722))*var2[3] + (t22633 + t22640 + t6205*(t22635 + t22636 + t22682 + t5138*t9722) + t5630*(t22627 + t22628 + t22678 - 1.*t6614*t9722))*var2[4] + (t2977*(-1.*t1769*t2977*t3508 + t1418*t2977*t3723 + t1769*t2977*t9582 + t1418*t2977*t9627) + t5065*(t1769*t3508*t6165 - 1.*t1418*t3723*t6165 - 1.*t1769*t6165*t9582 - 1.*t1418*t6165*t9627))*var2[5])*var2[12] + ((t18148*t22606 + t22608*t5167 + t6721*(t22850 + t22852 + t21098*t5167 + t21102*t5777 + t18148*t6859 + t18545*t6905) + t5167*(t22868 + t22870 + t22893 + t22894 - 1.*t21098*t6721 - 1.*t21102*t6943))*var2[3] + (t18198*t22407 + t22416*t5630 + t6205*(t22818 + t22820 + t22850 + t22852 + t20171*t5138 + t18128*t6458) + t5630*(t22824 + t22826 + t22868 + t22870 + t22871 - 1.*t20171*t6614))*var2[4] + (t15984*t21617 + t21692*t5065 + t2977*(t22818 + t22820 + t1418*t3508*t5065 + t1769*t3723*t5065 + t22747*t2977*t6584 + t22749*t2977*t6584) + t5065*(t22824 + t22826 - 1.*t1418*t2977*t3508 - 1.*t1769*t2977*t3723 - 1.*t22747*t6165*t6584 - 1.*t22749*t6165*t6584))*var2[5] + (t15984*t21551 + t21610*t5065 + (t22738 + t22824 + t22826 - 1.*t2977*t3408)*t5065 + t2977*(t22818 + t22820 + t3408*t5065 + t6602))*var2[12])*var2[13] + ((t17311*t22608 + t22606*t6721 + t5167*(t22772 + t22774 - 1.*t16608*t6721 - 1.*t17311*t6859 - 1.*t17674*t6905 - 1.*t16625*t6943) + t6721*(t22768 + t16608*t5167 + t16625*t5777 + t6603 + t6938 + t6944))*var2[3] + (t16103*t22416 + t22407*t6205 + t5630*(t22738 + t22741 + t22772 + t22774 - 1.*t16595*t6458 - 1.*t15822*t6614) + t6205*(t22724 + t22768 + t15822*t5138 + t6602 + t6603 + t6628))*var2[4] + (t21617*t2977 + t21692*t6165 + t5065*(t22738 + t22741 - 1.*t1418*t15984*t3508 - 1.*t15984*t1769*t3723 - 1.*t15517*t22747*t6165 - 1.*t15517*t22749*t6165) + t2977*(t22724 + t15517*t22747*t2977 + t15517*t22749*t2977 + t1418*t3508*t6165 + t1769*t3723*t6165 + t6602))*var2[5] + (t21551*t2977 + t21610*t6165 + t5065*(t22738 + t22741 - 1.*t15984*t3408 - 1.*t15517*t6165) + t2977*(t22724 + t15517*t2977 + t3408*t6165 + t6602))*var2[12])*var2[14] + t277*t6391*var3[0] + t21928*var3[1] + t21951*var3[2] + t22610*var3[3] + t22452*var3[4] + t21708*var3[5] + t21612*var3[12] - 1.*var4[1];
  p_output1[2]=t15110 + t15433 + t15490 + t1824*t22963 - 0.15121*(-1.*t1769*t22963 + t1418*t22967) + 0.50321*t2283*t22991 - 0.50321*t2035*t22995 + 0.23321*(t2071*t22991 + t2035*t22995) + 0.28121*t22976*t3146 + t22967*t3986 + 0.28121*t277*t2948*t5666 + var1[2] + t23010*var2[3] + ((-1.*t5555*t6205 - 1.*t5666*t6943)*var2[1] + t15479*var2[2])*var2[3] + t22986*var2[4] + (t6943*var2[0] - 1.*t5555*t7001*var2[1] + t5666*t7001*var2[2] + (t23006*t5777 - 1.*t23008*t3930*t6391 + t277*t6391*(-1.*t5777*t6859 - 1.*t5167*t6905 - 1.*t6905*t6958 - 1.*t5777*t6966) + t5167*(-1.*t3930*t6391*t6859 - 1.*t3930*t6391*t6966))*var2[3])*var2[4] + t22958*t5065*var2[5] + (t23154 + t23159 + t23163 + (t23197 + t24912 + t277*t6391*(t23189 + t23191 + t23431 + t24898 - 1.*t277*t5167*t8630 + t3930*t5777*t8630) + t5167*(t23170 + t23172 + t23203 + t23217 + t6391*t8630*t9000 + t6391*t8630*t9048))*var2[3] + (t23168 + t23194 + t6231*(t23189 + t23190 + t23191 - 1.*t5138*t8630) + t5630*(t23170 + t23172 + t23185 + t6391*t8630))*var2[4])*var2[5] + t22944*var2[12] + (t23154 + t23159 + t23163 + (t23197 + t24912 + t277*t6391*(t23189 + t23431 + t24898 + t25637 - 1.*t277*t5167*t9722 + t3930*t5777*t9722) + t5167*(t23170 + t23203 + t23217 + t25531 + t6391*t9000*t9722 + t6391*t9048*t9722))*var2[3] + (t23168 + t23194 + t6231*(t23189 + t23190 + t25637 - 1.*t5138*t9722) + t5630*(t23170 + t23185 + t25531 + t6391*t9722))*var2[4] + t5065*(-1.*t1418*t3508 - 1.*t1769*t3723 + t1418*t9582 - 1.*t1769*t9627)*var2[5])*var2[12] + t22923*var2[13] + (t23032 + t5435 + t5861 + t6156 + (t18148*t23006 + t5167*(t23080 + t21098*t277*t6391 - 1.*t21102*t3930*t6391) + t277*t6391*(t23106 + t23108 - 1.*t21098*t5167 - 1.*t21102*t5777 - 1.*t18148*t6859 - 1.*t18545*t6905))*var2[3] + (t18198*t22982 + t5630*(t23080 + t20171*t6391) + t6231*(t23106 + t23108 - 1.*t20672*t5065 - 1.*t20171*t5138 - 1.*t18128*t6458 - 1.*t15984*t6584))*var2[4] + t15984*t22958*var2[5])*var2[13] - 0.27*var2[14] + (t23032 + t17311*var2[0] + (-1.*t17674*t5555 + t16103*t5666)*var2[1] + (t16103*t5555 + t17674*t5666)*var2[2] + (t277*(t22397 + t22584 + t22585 + t23051 - 1.*t16608*t5167 - 1.*t16625*t5777)*t6391 + t5167*(t23045 + t16608*t277*t6391 - 1.*t16625*t3930*t6391) + t23006*t6721)*var2[3] + (t22982*t6205 + (t21528 + t22397 + t22399 + t23051 - 1.*t16443*t5065 - 1.*t15822*t5138)*t6231 + t5630*(t23045 + t15822*t6391))*var2[4] + t22958*t2977*var2[5] + (-0.28121*t2035 + 0.27*t2035*t2071 + t2035*t2408)*var2[13])*var2[14] + t6721*var3[0] + t15479*var3[1] + t15409*var3[2] + t23010*var3[3] + t22986*var3[4] + t22958*t5065*var3[5] + t22944*var3[12] + t22923*var3[13] - 0.27*var3[14] - 1.*var4[2];
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
