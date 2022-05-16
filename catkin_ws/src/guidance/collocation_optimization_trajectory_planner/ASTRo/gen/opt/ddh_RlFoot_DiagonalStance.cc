/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:41:55 GMT+02:00
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
  double t1180;
  double t1096;
  double t1165;
  double t1186;
  double t1190;
  double t1193;
  double t1198;
  double t1200;
  double t1212;
  double t1214;
  double t1223;
  double t1228;
  double t1235;
  double t1232;
  double t1238;
  double t1239;
  double t1240;
  double t1246;
  double t1257;
  double t1258;
  double t1261;
  double t1264;
  double t856;
  double t252;
  double t308;
  double t568;
  double t609;
  double t893;
  double t1294;
  double t1305;
  double t1308;
  double t1322;
  double t1326;
  double t1327;
  double t1354;
  double t1357;
  double t1358;
  double t1366;
  double t1367;
  double t1369;
  double t1373;
  double t1374;
  double t1375;
  double t66;
  double t167;
  double t1810;
  double t1755;
  double t1853;
  double t1865;
  double t1867;
  double t3171;
  double t3371;
  double t3580;
  double t3583;
  double t3889;
  double t3897;
  double t3906;
  double t3917;
  double t3921;
  double t2239;
  double t2250;
  double t2311;
  double t2605;
  double t2649;
  double t2685;
  double t4340;
  double t4554;
  double t4556;
  double t4624;
  double t4652;
  double t4815;
  double t4885;
  double t4954;
  double t4958;
  double t5051;
  double t5320;
  double t5525;
  double t5842;
  double t7107;
  double t7381;
  double t7386;
  double t7390;
  double t7195;
  double t7292;
  double t7379;
  double t8106;
  double t8893;
  double t8990;
  double t9779;
  double t12996;
  double t13017;
  double t9570;
  double t9575;
  double t9600;
  double t9752;
  double t13061;
  double t13185;
  double t13186;
  double t13206;
  double t13207;
  double t14779;
  double t14821;
  double t14822;
  double t14936;
  double t14940;
  double t15276;
  double t16446;
  double t16486;
  double t17066;
  double t17074;
  double t18273;
  double t19081;
  double t19099;
  double t19241;
  double t19264;
  double t19268;
  double t19273;
  double t19277;
  double t19293;
  double t19296;
  double t19275;
  double t19375;
  double t19376;
  double t19378;
  double t19400;
  double t19401;
  double t19406;
  double t19412;
  double t19413;
  double t19417;
  double t19418;
  double t19449;
  double t19489;
  double t19492;
  double t19493;
  double t19502;
  double t19509;
  double t19511;
  double t19796;
  double t19798;
  double t19829;
  double t19964;
  double t19974;
  double t20017;
  double t20155;
  double t20158;
  double t20159;
  double t20088;
  double t20103;
  double t20089;
  double t20091;
  double t20100;
  double t20154;
  double t20163;
  double t19871;
  double t19873;
  double t19874;
  double t19877;
  double t19878;
  double t19884;
  double t19888;
  double t19892;
  double t19902;
  double t19961;
  double t20705;
  double t20710;
  double t20712;
  double t20702;
  double t20101;
  double t20722;
  double t20723;
  double t20725;
  double t20730;
  double t20731;
  double t20732;
  double t20160;
  double t20383;
  double t20518;
  double t20519;
  double t20544;
  double t20733;
  double t20566;
  double t20567;
  double t20738;
  double t20686;
  double t20687;
  double t20690;
  double t20761;
  double t20762;
  double t20763;
  double t20772;
  double t20773;
  double t20774;
  double t20782;
  double t20783;
  double t20786;
  double t20792;
  double t20799;
  double t20800;
  double t20817;
  double t20818;
  double t20819;
  double t20821;
  double t20823;
  double t20824;
  double t20825;
  double t20828;
  double t20830;
  double t20831;
  double t20826;
  double t20860;
  double t20861;
  double t20863;
  double t20865;
  double t20874;
  double t20875;
  double t20876;
  double t20878;
  double t20879;
  double t20880;
  double t20764;
  double t20765;
  double t20766;
  double t20767;
  double t20948;
  double t20950;
  double t20952;
  double t20954;
  double t20960;
  double t20965;
  double t20966;
  double t20968;
  double t20980;
  double t20981;
  double t20982;
  double t20962;
  double t20987;
  double t20988;
  double t20989;
  double t21013;
  double t21015;
  double t21016;
  double t20993;
  double t21012;
  double t21050;
  double t21051;
  double t21053;
  double t21061;
  double t21066;
  double t21070;
  double t21119;
  double t21120;
  double t21121;
  double t20859;
  double t21142;
  double t21143;
  double t21144;
  double t21145;
  double t21146;
  double t21157;
  double t21159;
  double t21162;
  double t21165;
  double t21168;
  double t21169;
  double t21170;
  double t21171;
  double t21172;
  double t21173;
  double t21175;
  double t21176;
  double t948;
  double t1794;
  double t21219;
  double t21220;
  double t21221;
  double t21224;
  double t21225;
  double t21226;
  double t21182;
  double t21193;
  double t21194;
  double t21214;
  double t21215;
  double t21216;
  double t20866;
  double t21283;
  double t21284;
  double t21285;
  double t21286;
  double t21288;
  double t21289;
  double t21290;
  double t21257;
  double t21267;
  double t21269;
  double t20898;
  double t20899;
  double t21301;
  double t21302;
  double t21303;
  double t21304;
  double t21305;
  double t21306;
  double t21307;
  double t21293;
  double t21294;
  double t21295;
  double t21297;
  double t21298;
  double t21299;
  double t21333;
  double t21335;
  double t21342;
  double t21346;
  double t21316;
  double t21317;
  double t21319;
  double t21320;
  double t21322;
  double t21327;
  double t21328;
  double t21329;
  double t21331;
  double t21334;
  double t21340;
  double t21345;
  double t21358;
  double t21454;
  double t21366;
  double t21368;
  double t21467;
  double t21376;
  double t21378;
  double t21382;
  double t21383;
  double t19574;
  double t19575;
  double t19576;
  double t21737;
  double t21751;
  double t21755;
  double t21768;
  double t21770;
  double t21758;
  double t21818;
  double t21820;
  double t20771;
  double t20775;
  double t20777;
  double t21827;
  double t21831;
  double t22748;
  double t22757;
  double t22762;
  double t22880;
  double t22978;
  double t23012;
  double t21126;
  double t21127;
  double t21131;
  double t20909;
  double t20910;
  double t24370;
  double t24371;
  double t24374;
  double t24379;
  double t24398;
  double t24920;
  double t20917;
  double t25111;
  double t25155;
  double t25552;
  double t25672;
  double t25860;
  double t26088;
  double t20918;
  double t20919;
  double t20925;
  double t20929;
  double t20930;
  double t20934;
  double t20940;
  double t20942;
  double t21832;
  double t27616;
  double t27630;
  double t27663;
  double t27692;
  double t27695;
  double t27721;
  double t27794;
  double t27503;
  double t27518;
  double t27605;
  double t22124;
  double t22389;
  double t27989;
  double t28012;
  double t28013;
  double t28015;
  double t28040;
  double t28062;
  double t28230;
  double t27809;
  double t27865;
  double t27869;
  double t27881;
  double t27882;
  double t27891;
  double t4213;
  double t5507;
  double t7127;
  double t28504;
  double t28754;
  double t28757;
  double t33838;
  double t33854;
  double t34918;
  double t34924;
  double t34936;
  double t34938;
  double t34704;
  double t34706;
  double t34707;
  double t34709;
  double t34726;
  double t34793;
  double t34858;
  double t34905;
  double t34906;
  double t34911;
  double t34920;
  double t34937;
  double t34946;
  double t34965;
  double t35205;
  double t34976;
  double t34982;
  double t35409;
  double t35031;
  double t35032;
  double t35047;
  t1180 = Cos(var1[11]);
  t1096 = Sin(var1[11]);
  t1165 = 0.28121*t1096;
  t1186 = -1.*t1180;
  t1190 = 1. + t1186;
  t1193 = -0.50321*t1190;
  t1198 = -0.23321*t1180;
  t1200 = t1193 + t1198;
  t1212 = t1200*t1096;
  t1214 = -0.27*t1180*t1096;
  t1223 = t1165 + t1212 + t1214;
  t1228 = Cos(var1[10]);
  t1235 = Sin(var1[10]);
  t1232 = -1.*t1228*t1180;
  t1238 = -1.*t1235*t1096;
  t1239 = t1232 + t1238;
  t1240 = 0.15121*t1239;
  t1246 = t1228*t1180;
  t1257 = t1235*t1096;
  t1258 = t1246 + t1257;
  t1261 = 0.15121*t1258;
  t1264 = t1240 + t1261;
  t856 = Sin(var1[9]);
  t252 = Cos(var1[9]);
  t308 = -1.*t252;
  t568 = 1. + t308;
  t609 = -0.15121*t568;
  t893 = 0.15121*t856;
  t1294 = -1.*t1228;
  t1305 = 1. + t1294;
  t1308 = -0.28121*t1305;
  t1322 = t1228*t1200;
  t1326 = 0.27*t1235*t1096;
  t1327 = t1308 + t1322 + t1326;
  t1354 = t252*t1327;
  t1357 = t609 + t1354;
  t1358 = -1.*t856*t1357;
  t1366 = 0.15121*t568;
  t1367 = 0.15121*t252;
  t1369 = t856*t1327;
  t1373 = t1366 + t1367 + t893 + t1369;
  t1374 = t252*t1373;
  t1375 = t1358 + t1374;
  t66 = Cos(var1[4]);
  t167 = Cos(var1[5]);
  t1810 = Sin(var1[5]);
  t1755 = Sin(var1[4]);
  t1853 = t252*t66*t167;
  t1865 = -1.*t66*t856*t1810;
  t1867 = t1853 + t1865;
  t3171 = -1.*t1180*t1235;
  t3371 = t1228*t1096;
  t3580 = t3171 + t3371;
  t3583 = t3580*t1755;
  t3889 = t252*t167*t1239;
  t3897 = -1.*t856*t1239*t1810;
  t3906 = t3889 + t3897;
  t3917 = t66*t3906;
  t3921 = t3583 + t3917;
  t2239 = t1235*t1755;
  t2250 = t1228*t1867;
  t2311 = t2239 + t2250;
  t2605 = t1228*t1755;
  t2649 = -1.*t1235*t1867;
  t2685 = t2605 + t2649;
  t4340 = Sin(var1[3]);
  t4554 = t167*t856*t1239;
  t4556 = t252*t1239*t1810;
  t4624 = t4554 + t4556;
  t4652 = t4340*t4624;
  t4815 = Cos(var1[3]);
  t4885 = t66*t3580;
  t4954 = -1.*t1755*t3906;
  t4958 = t4885 + t4954;
  t5051 = t4815*t4958;
  t5320 = t4652 + t5051;
  t5525 = t4815*t4624;
  t5842 = -1.*t4340*t4958;
  t7107 = t5525 + t5842;
  t7381 = -1.*t252*t167;
  t7386 = t856*t1810;
  t7390 = t7381 + t7386;
  t7195 = t167*t856*t3580;
  t7292 = t252*t3580*t1810;
  t7379 = t7195 + t7292;
  t8106 = t167*t1373;
  t8893 = t1357*t1810;
  t8990 = t8106 + t8893;
  t9779 = t167*t1357;
  t12996 = -1.*t1373*t1810;
  t13017 = t9779 + t12996;
  t9570 = -1.*t7390*t8990;
  t9575 = t167*t856;
  t9600 = t252*t1810;
  t9752 = t9575 + t9600;
  t13061 = -1.*t9752*t13017;
  t13185 = t9570 + t13061;
  t13186 = t7379*t13185;
  t13206 = 0.28121*t1235;
  t13207 = t1200*t1235;
  t14779 = -0.27*t1228*t1096;
  t14821 = t13206 + t13207 + t14779;
  t14822 = t14821*t1258;
  t14936 = t7379*t8990;
  t14940 = t252*t167*t3580;
  t15276 = -1.*t856*t3580*t1810;
  t16446 = t14940 + t15276;
  t16486 = t16446*t13017;
  t17066 = t14822 + t14936 + t16486;
  t17074 = t7390*t17066;
  t18273 = t13186 + t17074;
  t19081 = t1258*t1755;
  t19099 = t66*t16446;
  t19241 = t19081 + t19099;
  t19264 = t14821*t1755;
  t19268 = t66*t13017;
  t19273 = t19264 + t19268;
  t19277 = t66*t14821;
  t19293 = -1.*t1755*t13017;
  t19296 = t19277 + t19293;
  t19275 = -1.*t66*t9752*t19273;
  t19375 = t1755*t9752*t19296;
  t19376 = t9570 + t19275 + t19375;
  t19378 = t19241*t19376;
  t19400 = t19241*t19273;
  t19401 = t66*t1258;
  t19406 = -1.*t1755*t16446;
  t19412 = t19401 + t19406;
  t19413 = t19412*t19296;
  t19417 = t14936 + t19400 + t19413;
  t19418 = t66*t9752*t19417;
  t19449 = t19378 + t19418;
  t19489 = -1.*t3580*t1755;
  t19492 = -1.*t66*t3906;
  t19493 = t19489 + t19492;
  t19502 = -1.*t14821*t1755;
  t19509 = -1.*t66*t13017;
  t19511 = t19502 + t19509;
  t19796 = -1.*t167*t856*t1239;
  t19798 = -1.*t252*t1239*t1810;
  t19829 = t19796 + t19798;
  t19964 = -1.*t167*t1373;
  t19974 = -1.*t1357*t1810;
  t20017 = t19964 + t19974;
  t20155 = -1.*t167*t856*t3580;
  t20158 = -1.*t252*t3580*t1810;
  t20159 = t20155 + t20158;
  t20088 = -1.*t9752*t8990;
  t20103 = -1.*t7390*t13017;
  t20089 = t252*t167;
  t20091 = -1.*t856*t1810;
  t20100 = t20089 + t20091;
  t20154 = t16446*t8990;
  t20163 = t7379*t13017;
  t19871 = var2[0]*t66*t19829;
  t19873 = t4340*t1755*t19829;
  t19874 = t4815*t3906;
  t19877 = t19873 + t19874;
  t19878 = var2[1]*t19877;
  t19884 = -1.*t4815*t1755*t19829;
  t19888 = t4340*t3906;
  t19892 = t19884 + t19888;
  t19902 = var2[2]*t19892;
  t19961 = t16446*t13185;
  t20705 = -0.15121*t856;
  t20710 = -1.*t856*t1327;
  t20712 = t20705 + t20710;
  t20702 = t1367 + t1354;
  t20101 = -1.*t20100*t13017;
  t20722 = t167*t20712;
  t20723 = -1.*t20702*t1810;
  t20725 = t20722 + t20723;
  t20730 = t167*t20702;
  t20731 = t20712*t1810;
  t20732 = t20730 + t20731;
  t20160 = t20159*t13017;
  t20383 = t9752*t17066;
  t20518 = t66*t20159*t19376;
  t20519 = Power(t66,2);
  t20544 = Power(t1755,2);
  t20733 = -1.*t7390*t20732;
  t20566 = -1.*t66*t20100*t19273;
  t20567 = t1755*t20100*t19296;
  t20738 = t7379*t20732;
  t20686 = t66*t20159*t19273;
  t20687 = -1.*t1755*t20159*t19296;
  t20690 = t66*t20100*t19417;
  t20761 = t1180*t1235;
  t20762 = -1.*t1228*t1096;
  t20763 = t20761 + t20762;
  t20772 = t252*t167*t20763;
  t20773 = -1.*t856*t20763*t1810;
  t20774 = t20772 + t20773;
  t20782 = t167*t856*t20763;
  t20783 = t252*t20763*t1810;
  t20786 = t20782 + t20783;
  t20792 = t66*t1239;
  t20799 = -1.*t1755*t20774;
  t20800 = t20792 + t20799;
  t20817 = -0.28121*t1235;
  t20818 = -1.*t1200*t1235;
  t20819 = 0.27*t1228*t1096;
  t20821 = t20817 + t20818 + t20819;
  t20823 = t167*t856*t20821;
  t20824 = t252*t20821*t1810;
  t20825 = t20823 + t20824;
  t20828 = t252*t167*t20821;
  t20830 = -1.*t856*t20821*t1810;
  t20831 = t20828 + t20830;
  t20826 = -1.*t7390*t20825;
  t20860 = 0.28121*t1228;
  t20861 = t20860 + t1322 + t1326;
  t20863 = t20825*t7379;
  t20865 = t4624*t8990;
  t20874 = t20861*t1755;
  t20875 = t66*t20831;
  t20876 = t20874 + t20875;
  t20878 = t66*t20861;
  t20879 = -1.*t1755*t20831;
  t20880 = t20878 + t20879;
  t20764 = 0.15121*t20763;
  t20765 = 0.15121*t3580;
  t20766 = t20764 + t20765;
  t20767 = var2[9]*t20766;
  t20948 = 0.27*t1180*t1235;
  t20950 = t20948 + t14779;
  t20952 = t167*t856*t20950;
  t20954 = t252*t20950*t1810;
  t20960 = t20952 + t20954;
  t20965 = t252*t167*t20950;
  t20966 = -1.*t856*t20950*t1810;
  t20968 = t20965 + t20966;
  t20980 = t167*t856*t1258;
  t20981 = t252*t1258*t1810;
  t20982 = t20980 + t20981;
  t20962 = -1.*t7390*t20960;
  t20987 = -0.27*t1228*t1180;
  t20988 = -0.27*t1235*t1096;
  t20989 = t20987 + t20988;
  t21013 = t252*t167*t1258;
  t21015 = -1.*t856*t1258*t1810;
  t21016 = t21013 + t21015;
  t20993 = t20960*t7379;
  t21012 = t20982*t8990;
  t21050 = t20989*t1755;
  t21051 = t66*t20968;
  t21053 = t21050 + t21051;
  t21061 = t66*t20989;
  t21066 = -1.*t1755*t20968;
  t21070 = t21061 + t21066;
  t21119 = t20763*t1755;
  t21120 = t66*t21016;
  t21121 = t21119 + t21120;
  t20859 = t14821*t3580;
  t21142 = t1239*t1327;
  t21143 = t20859 + t21142;
  t21144 = t1258*t21143;
  t21145 = -1.*t3580*t1327;
  t21146 = -1.*t14821*t1258;
  t21157 = t21145 + t21146;
  t21159 = t3580*t21157;
  t21162 = -0.15121 + t21144 + t21159;
  t21165 = -1.*t252*t3580*t1357;
  t21168 = -1.*t856*t3580*t1373;
  t21169 = t21146 + t21165 + t21168;
  t21170 = t3580*t21169;
  t21171 = t252*t1239*t1357;
  t21172 = t856*t1239*t1373;
  t21173 = t20859 + t21171 + t21172;
  t21175 = t1258*t21173;
  t21176 = t21170 + t21175;
  t948 = t609 + t893;
  t1794 = t1366 + t893;
  t21219 = t4340*t1755*t9752;
  t21220 = t4815*t7390;
  t21221 = t21219 + t21220;
  t21224 = -1.*t4815*t1755*t9752;
  t21225 = t4340*t7390;
  t21226 = t21224 + t21225;
  t21182 = t167*t4340*t1755;
  t21193 = t4815*t1810;
  t21194 = t21182 + t21193;
  t21214 = t4815*t167;
  t21215 = -1.*t4340*t1755*t1810;
  t21216 = t21214 + t21215;
  t20866 = t3906*t13017;
  t21283 = -1.*t7379*t8990;
  t21284 = -1.*t16446*t13017;
  t21285 = t21146 + t21283 + t21284;
  t21286 = t4624*t21285;
  t21288 = t20859 + t20865 + t20866;
  t21289 = t7379*t21288;
  t21290 = t21286 + t21289;
  t21257 = t252*t21194;
  t21267 = t856*t21216;
  t21269 = t21257 + t21267;
  t20898 = t3921*t19273;
  t20899 = t4958*t19296;
  t21301 = -1.*t19241*t19273;
  t21302 = -1.*t19412*t19296;
  t21303 = t21283 + t21301 + t21302;
  t21304 = t3921*t21303;
  t21305 = t20865 + t20898 + t20899;
  t21306 = t19241*t21305;
  t21307 = t21304 + t21306;
  t21293 = -1.*t66*t1235*t4340;
  t21294 = t1228*t21269;
  t21295 = t21293 + t21294;
  t21297 = -1.*t1228*t66*t4340;
  t21298 = -1.*t1235*t21269;
  t21299 = t21297 + t21298;
  t21333 = -1.*t16446*t8990;
  t21335 = -1.*t7379*t13017;
  t21342 = t3906*t8990;
  t21346 = t4624*t13017;
  t21316 = var2[0]*t66*t20100;
  t21317 = t4340*t9752;
  t21319 = -1.*t4815*t1755*t20100;
  t21320 = t21317 + t21319;
  t21322 = var2[2]*t21320;
  t21327 = t4815*t9752;
  t21328 = t4340*t1755*t20100;
  t21329 = t21327 + t21328;
  t21331 = var2[1]*t21329;
  t21334 = -1.*t20159*t13017;
  t21340 = t3906*t21285;
  t21345 = t19829*t13017;
  t21358 = t16446*t21288;
  t21454 = -1.*t7379*t20732;
  t21366 = -1.*t66*t20159*t19273;
  t21368 = t1755*t20159*t19296;
  t21467 = t4624*t20732;
  t21376 = t66*t19829*t19273;
  t21378 = -1.*t1755*t19829*t19296;
  t21382 = t66*t19829*t21303;
  t21383 = t66*t20159*t21305;
  t19574 = -1.*t1258*t1755;
  t19575 = -1.*t66*t16446;
  t19576 = t19574 + t19575;
  t21737 = t14821*t1239;
  t21751 = t3580*t20861;
  t21755 = -1.*t14821*t3580;
  t21768 = Power(t252,2);
  t21770 = Power(t856,2);
  t21758 = -1.*t20861*t1258;
  t21818 = t20825*t4624;
  t21820 = t20786*t8990;
  t20771 = t1239*t1755;
  t20775 = t66*t20774;
  t20777 = t20771 + t20775;
  t21827 = -1.*t20825*t7379;
  t21831 = -1.*t4624*t8990;
  t22748 = t3580*t20989;
  t22757 = -1.*t20763*t14821;
  t22762 = -1.*t20989*t1258;
  t22880 = t20960*t4624;
  t22978 = -1.*t20960*t7379;
  t23012 = -1.*t20982*t8990;
  t21126 = t66*t20763;
  t21127 = -1.*t1755*t21016;
  t21131 = t21126 + t21127;
  t20909 = 0.28121*t1180;
  t20910 = t1200*t1180;
  t24370 = Power(t1096,2);
  t24371 = 0.27*t24370;
  t24374 = t20909 + t20910 + t24371;
  t24379 = t856*t1357;
  t24398 = -1.*t252*t1373;
  t24920 = t24379 + t24398;
  t20917 = var2[0]*t19241;
  t25111 = -1.*t4815*t167*t1755;
  t25155 = t4340*t1810;
  t25552 = t25111 + t25155;
  t25672 = t167*t4340;
  t25860 = t4815*t1755*t1810;
  t26088 = t25672 + t25860;
  t20918 = t4340*t7379;
  t20919 = t4815*t19412;
  t20925 = t20918 + t20919;
  t20929 = var2[2]*t20925;
  t20930 = t4815*t7379;
  t20934 = -1.*t4340*t19412;
  t20940 = t20930 + t20934;
  t20942 = var2[1]*t20940;
  t21832 = -1.*t3906*t13017;
  t27616 = t7390*t8990;
  t27630 = t9752*t13017;
  t27663 = t27616 + t27630;
  t27692 = t4624*t27663;
  t27695 = t21755 + t21831 + t21832;
  t27721 = t7390*t27695;
  t27794 = t27692 + t27721;
  t27503 = t252*t25552;
  t27518 = t856*t26088;
  t27605 = t27503 + t27518;
  t22124 = -1.*t3921*t19273;
  t22389 = -1.*t4958*t19296;
  t27989 = t66*t9752*t19273;
  t28012 = -1.*t1755*t9752*t19296;
  t28013 = t27616 + t27989 + t28012;
  t28015 = t3921*t28013;
  t28040 = t21831 + t22124 + t22389;
  t28062 = t66*t9752*t28040;
  t28230 = t28015 + t28062;
  t27809 = t4815*t66*t1235;
  t27865 = t1228*t27605;
  t27869 = t27809 + t27865;
  t27881 = t1228*t4815*t66;
  t27882 = -1.*t1235*t27605;
  t27891 = t27881 + t27882;
  t4213 = var2[0]*t3921;
  t5507 = var2[2]*t5320;
  t7127 = var2[1]*t7107;
  t28504 = t7390*t20825;
  t28754 = -1.*t20825*t4624;
  t28757 = -1.*t20786*t8990;
  t33838 = t7390*t20960;
  t33854 = -1.*t20960*t4624;
  t34918 = t9752*t8990;
  t34924 = t7390*t13017;
  t34936 = -1.*t3906*t8990;
  t34938 = -1.*t4624*t13017;
  t34704 = var2[0]*t66*t20159;
  t34706 = t4340*t1755*t20159;
  t34707 = t4815*t16446;
  t34709 = t34706 + t34707;
  t34726 = var2[1]*t34709;
  t34793 = -1.*t4815*t1755*t20159;
  t34858 = t4340*t16446;
  t34905 = t34793 + t34858;
  t34906 = var2[2]*t34905;
  t34911 = t3906*t27663;
  t34920 = t20100*t13017;
  t34937 = -1.*t19829*t13017;
  t34946 = t9752*t27695;
  t34965 = t66*t19829*t28013;
  t35205 = t7390*t20732;
  t34976 = t66*t20100*t19273;
  t34982 = -1.*t1755*t20100*t19296;
  t35409 = -1.*t4624*t20732;
  t35031 = -1.*t66*t19829*t19273;
  t35032 = t1755*t19829*t19296;
  t35047 = t66*t20100*t28040;
  p_output1[0]=0.28121*t1235*t1755 - 0.28121*t1305*t1867 - 0.50321*t1190*t2311 - 0.50321*t1096*t2685 - 0.23321*(t1180*t2311 - 1.*t1096*t2685) + t4213 + t5507 - 1.*t1794*t1810*t66 + t7127 + 0.15121*(-1.*t1810*t252*t66 - 1.*t167*t66*t856) + t167*t66*t948 + var1[0] + t19449*var2[3] + ((-1.*t4340*t4624 - 1.*t4815*t4958)*var2[1] + t7107*var2[2])*var2[3] + t18273*var2[4] + (t4958*var2[0] - 1.*t19493*t4340*var2[1] + t19493*t4815*var2[2] + (t19376*t19412 - 1.*t1755*t19417*t9752 + (t19241*t19296 + t19273*t19412 + t19412*t19511 + t19296*t19576)*t66*t9752 + t19241*(t1755*t19273*t9752 + t1755*t19511*t9752))*var2[3])*var2[4] + t1258*t1375*var2[5] + (t19871 + t19878 + t19902 + (t20518 + t20690 + t66*(-1.*t1755*t19412*t20017 + t20154 + t20163 + t20686 + t20687 + t19241*t20017*t66)*t9752 + t19241*(t20088 + t20103 + t20566 + t20567 - 1.*t20017*t20519*t9752 - 1.*t20017*t20544*t9752))*var2[3] + (t19961 + t20383 + (t16446*t20017 + t20154 + t20160 + t20163)*t7390 + t7379*(t20088 + t20101 + t20103 - 1.*t20017*t9752))*var2[4])*var2[5] + t1264*var2[9] + (t19871 + t19878 + t19902 + (t20518 + t20690 + t66*(t20154 + t20686 + t20687 - 1.*t1755*t19412*t20725 + t20738 + t19241*t20725*t66)*t9752 + t19241*(t20088 + t20566 + t20567 + t20733 - 1.*t20519*t20725*t9752 - 1.*t20544*t20725*t9752))*var2[3] + (t19961 + t20383 + (t20154 + t20160 + t16446*t20725 + t20738)*t7390 + t7379*(t20088 + t20101 + t20733 - 1.*t20725*t9752))*var2[4] + t1258*(-1.*t1357*t252 + t20702*t252 - 1.*t1373*t856 - 1.*t20712*t856)*var2[5])*var2[9] + t1223*var2[10] + (t20767 + t20777*var2[0] + (-1.*t20800*t4340 + t20786*t4815)*var2[1] + (t20786*t4340 + t20800*t4815)*var2[2] + (t19376*t3921 + (t20863 + t20865 + t19241*t20876 + t19412*t20880 + t20898 + t20899)*t66*t9752 + t19241*(t20826 + t1755*t20880*t9752 - 1.*t20876*t66*t9752))*var2[3] + (t13185*t4624 + (t16446*t20831 + t20859 + t1258*t20861 + t20863 + t20865 + t20866)*t7390 + t7379*(t20826 - 1.*t20831*t9752))*var2[4] + t1375*t3580*var2[5])*var2[10] + (t20767 + t20917 + t20929 + t20942 + (t19376*t21121 + (t20993 + t21012 + t19241*t21053 + t19412*t21070 + t19273*t21121 + t19296*t21131)*t66*t9752 + t19241*(t20962 + t1755*t21070*t9752 - 1.*t21053*t66*t9752))*var2[3] + (t13185*t20982 + (t14821*t20763 + t16446*t20968 + t1258*t20989 + t20993 + t21012 + t13017*t21016)*t7390 + t7379*(t20962 - 1.*t20968*t9752))*var2[4] + t1375*t20763*var2[5] + (-0.27*Power(t1180,2) + t20909 + t20910)*var2[10])*var2[11] + t3921*var3[0] + t7107*var3[1] + t5320*var3[2] + t19449*var3[3] + t18273*var3[4] + t1258*t1375*var3[5] + t1264*var3[9] + t1223*var3[10] - 1.*var4[0];
  p_output1[1]=t1794*t21216 - 0.28121*t1305*t21269 - 0.50321*t1190*t21295 - 0.50321*t1096*t21299 - 0.23321*(t1180*t21295 - 1.*t1096*t21299) - 0.28121*t1235*t4340*t66 + 0.15121*(t21216*t252 - 1.*t21194*t856) + t21194*t948 + var1[1] + t66*t9752*var2[0] + t21221*var2[1] + t21226*var2[2] + t21307*var2[3] + ((-1.*t4340*t7390 + t1755*t4815*t9752)*var2[1] + t21221*var2[2])*var2[3] + t21290*var2[4] + (-1.*t1755*t9752*var2[0] + t4340*t66*t9752*var2[1] - 1.*t4815*t66*t9752*var2[2] + (t19412*t21305 + (-1.*t19241*t19296 - 1.*t19273*t19412 - 1.*t19412*t19511 - 1.*t19296*t19576)*t3921 + t21303*t4958 + t19241*(t19296*t19493 + t19296*t3921 + t19273*t4958 + t19511*t4958))*var2[3])*var2[4] + t21176*var2[5] + (t21316 + t21322 + t21331 + (t21382 + t21383 + t3921*(t1755*t19412*t20017 + t21333 + t21335 + t21366 + t21368 - 1.*t19241*t20017*t66) + t19241*(t21342 + t21346 + t21376 + t21378 - 1.*t1755*t20017*t4958 + t20017*t3921*t66))*var2[3] + (t21340 + t21358 + (-1.*t16446*t20017 + t21333 + t21334 + t21335)*t4624 + (t21342 + t21345 + t21346 + t20017*t3906)*t7379)*var2[4])*var2[5] + t21162*var2[9] + (t21316 + t21322 + t21331 + (t21382 + t21383 + t3921*(t1755*t19412*t20725 + t21333 + t21366 + t21368 + t21454 - 1.*t19241*t20725*t66) + t19241*(t21342 + t21376 + t21378 + t21467 - 1.*t1755*t20725*t4958 + t20725*t3921*t66))*var2[3] + (t21340 + t21358 + (-1.*t16446*t20725 + t21333 + t21334 + t21454)*t4624 + (t21342 + t21345 + t21467 + t20725*t3906)*t7379)*var2[4] + (t1258*(t1239*t1373*t252 + t1239*t20712*t252 - 1.*t1239*t1357*t856 + t1239*t20702*t856) + t3580*(-1.*t1373*t252*t3580 - 1.*t20712*t252*t3580 + t1357*t3580*t856 - 1.*t20702*t3580*t856))*var2[5])*var2[9] + ((t20777*t21303 + t21305*t3921 + (-1.*t19241*t20876 - 1.*t19412*t20880 + t21827 + t21831 + t22124 + t22389)*t3921 + t19241*(t19273*t20777 + t19296*t20800 + t21818 + t21820 + t20876*t3921 + t20880*t4958))*var2[3] + (t20786*t21285 + t21288*t4624 + (-1.*t16446*t20831 + t21755 + t21758 + t21827 + t21831 + t21832)*t4624 + (t13017*t20774 + t21737 + t21751 + t21818 + t21820 + t20831*t3906)*t7379)*var2[4] + (t1239*t21169 + t21173*t3580 + t3580*(t21755 + t21758 - 1.*t1239*t1357*t252 - 1.*t20821*t21768*t3580 - 1.*t20821*t21770*t3580 - 1.*t1239*t1373*t856) + t1258*(t21737 + t21751 + t1239*t20821*t21768 + t1239*t20821*t21770 + t1357*t20763*t252 + t1373*t20763*t856))*var2[5] + (t1239*t21157 + t1258*(t1327*t20763 + t1239*t20821 + t21737 + t21751) + t21143*t3580 + t3580*(-1.*t1239*t1327 + t21755 + t21758 - 1.*t20821*t3580))*var2[9])*var2[10] + ((t19241*t21303 + t21121*t21305 + (-1.*t19241*t21053 - 1.*t19412*t21070 - 1.*t19273*t21121 - 1.*t19296*t21131 + t22978 + t23012)*t3921 + t19241*(t14936 + t19400 + t19413 + t22880 + t21053*t3921 + t21070*t4958))*var2[3] + (t20982*t21288 + (-1.*t16446*t20968 - 1.*t13017*t21016 + t22757 + t22762 + t22978 + t23012)*t4624 + t21285*t7379 + (t14822 + t14936 + t16486 + t22748 + t22880 + t20968*t3906)*t7379)*var2[4] + (t1258*t21169 + t20763*t21173 + t3580*(t22757 + t22762 - 1.*t1258*t1357*t252 - 1.*t20950*t21768*t3580 - 1.*t20950*t21770*t3580 - 1.*t1258*t1373*t856) + t1258*(t14822 + t1239*t20950*t21768 + t1239*t20950*t21770 + t22748 + t1357*t252*t3580 + t1373*t3580*t856))*var2[5] + (t20763*t21143 + t1258*t21157 + t1258*(t14822 + t1239*t20950 + t22748 + t1327*t3580) + t3580*(-1.*t1258*t1327 + t22757 + t22762 - 1.*t20950*t3580))*var2[9])*var2[11] + t66*t9752*var3[0] + t21221*var3[1] + t21226*var3[2] + t21307*var3[3] + t21290*var3[4] + t21176*var3[5] + t21162*var3[9] - 1.*var4[1];
  p_output1[2]=t20917 + t20929 + t20942 + t1794*t26088 - 0.28121*t1305*t27605 - 0.50321*t1190*t27869 - 0.50321*t1096*t27891 - 0.23321*(t1180*t27869 - 1.*t1096*t27891) + 0.28121*t1235*t4815*t66 + 0.15121*(t252*t26088 - 1.*t25552*t856) + t25552*t948 + var1[2] + t28230*var2[3] + ((-1.*t19412*t4815 - 1.*t4340*t7379)*var2[1] + t20940*var2[2])*var2[3] + t27794*var2[4] + (t19412*var2[0] - 1.*t19576*t4340*var2[1] + t19576*t4815*var2[2] + (t28013*t4958 - 1.*t1755*t28040*t9752 + (-1.*t19296*t19493 - 1.*t19296*t3921 - 1.*t19273*t4958 - 1.*t19511*t4958)*t66*t9752 + t3921*(-1.*t1755*t19273*t9752 - 1.*t1755*t19511*t9752))*var2[3])*var2[4] + t24920*t3580*var2[5] + (t34704 + t34726 + t34906 + (t34965 + t35047 + t66*(t34936 + t34938 + t35031 + t35032 + t1755*t20017*t4958 - 1.*t20017*t3921*t66)*t9752 + t3921*(t34918 + t34924 + t34976 + t34982 + t20017*t20519*t9752 + t20017*t20544*t9752))*var2[3] + (t34911 + t34946 + (t34936 + t34937 + t34938 - 1.*t20017*t3906)*t7390 + t4624*(t34918 + t34920 + t34924 + t20017*t9752))*var2[4])*var2[5] + (t34704 + t34726 + t34906 + (t34965 + t35047 + t66*(t34936 + t35031 + t35032 + t35409 + t1755*t20725*t4958 - 1.*t20725*t3921*t66)*t9752 + t3921*(t34918 + t34976 + t34982 + t35205 + t20519*t20725*t9752 + t20544*t20725*t9752))*var2[3] + (t34911 + t34946 + (t34936 + t34937 + t35409 - 1.*t20725*t3906)*t7390 + t4624*(t34918 + t34920 + t35205 + t20725*t9752))*var2[4] + t3580*(t1357*t252 - 1.*t20702*t252 + t1373*t856 + t20712*t856)*var2[5])*var2[9] + t24374*var2[10] + (t4213 + t5507 + t7127 + (t20777*t28013 + (-1.*t19273*t20777 - 1.*t19296*t20800 + t28754 + t28757 - 1.*t20876*t3921 - 1.*t20880*t4958)*t66*t9752 + t3921*(t28504 - 1.*t1755*t20880*t9752 + t20876*t66*t9752))*var2[3] + (t20786*t27663 + (-1.*t1239*t14821 - 1.*t13017*t20774 + t28754 + t28757 - 1.*t20861*t3580 - 1.*t20831*t3906)*t7390 + t4624*(t28504 + t20831*t9752))*var2[4] + t1239*t24920*var2[5])*var2[10] - 0.27*var2[11] + (t21121*var2[0] + (-1.*t21131*t4340 + t20982*t4815)*var2[1] + (t20982*t4340 + t21131*t4815)*var2[2] + (t19241*t28013 + (t21283 + t21301 + t21302 + t33854 - 1.*t21053*t3921 - 1.*t21070*t4958)*t66*t9752 + t3921*(t33838 - 1.*t1755*t21070*t9752 + t21053*t66*t9752))*var2[3] + (t27663*t7379 + (t21146 + t21283 + t21284 + t33854 - 1.*t20989*t3580 - 1.*t20968*t3906)*t7390 + t4624*(t33838 + t20968*t9752))*var2[4] + t1258*t24920*var2[5] + (-0.28121*t1096 + 0.27*t1096*t1180 - 1.*t1096*t1200)*var2[10])*var2[11] + t19241*var3[0] + t20940*var3[1] + t20925*var3[2] + t28230*var3[3] + t27794*var3[4] + t24920*t3580*var3[5] + t24374*var3[10] - 0.27*var3[11] - 1.*var4[2];
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

#include "ddh_RlFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void ddh_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
