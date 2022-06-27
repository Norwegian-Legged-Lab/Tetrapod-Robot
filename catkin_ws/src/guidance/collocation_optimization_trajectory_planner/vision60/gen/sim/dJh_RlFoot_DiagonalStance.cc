/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:24:28 GMT+02:00
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
  double t14154;
  double t13640;
  double t13659;
  double t14156;
  double t14141;
  double t14171;
  double t14252;
  double t4963;
  double t20860;
  double t20871;
  double t20875;
  double t13382;
  double t20880;
  double t20925;
  double t20847;
  double t20884;
  double t20913;
  double t3433;
  double t20926;
  double t20927;
  double t20928;
  double t20929;
  double t20930;
  double t20935;
  double t21124;
  double t21126;
  double t21127;
  double t21198;
  double t21199;
  double t21200;
  double t21212;
  double t21214;
  double t21215;
  double t21211;
  double t21216;
  double t21217;
  double t21224;
  double t21225;
  double t21226;
  double t21230;
  double t21231;
  double t21235;
  double t21369;
  double t21370;
  double t21371;
  double t21392;
  double t21394;
  double t21397;
  double t21401;
  double t21404;
  double t21405;
  double t21406;
  double t21411;
  double t21412;
  double t21388;
  double t21398;
  double t21417;
  double t21418;
  double t21386;
  double t21419;
  double t21420;
  double t21422;
  double t21423;
  double t21425;
  double t21429;
  double t21430;
  double t21432;
  double t21433;
  double t21434;
  double t21438;
  double t21439;
  double t21440;
  double t21441;
  double t21442;
  double t21443;
  double t21448;
  double t21533;
  double t21534;
  double t21535;
  double t21530;
  double t21531;
  double t21532;
  double t21523;
  double t21524;
  double t21525;
  double t21377;
  double t21378;
  double t21381;
  double t21421;
  double t21452;
  double t21512;
  double t21551;
  double t21552;
  double t21554;
  double t21537;
  double t21541;
  double t21542;
  double t21595;
  double t21596;
  double t21597;
  double t21567;
  double t21568;
  double t21569;
  double t21663;
  double t21664;
  double t21665;
  double t21559;
  double t21579;
  double t21682;
  double t21683;
  double t21685;
  double t21691;
  double t21703;
  double t21704;
  double t21705;
  double t21560;
  double t21564;
  double t21565;
  double t21707;
  double t21712;
  double t21581;
  double t21583;
  double t21584;
  double t21603;
  double t21617;
  double t21775;
  double t21779;
  double t21604;
  double t21605;
  double t21606;
  double t21793;
  double t21795;
  double t21619;
  double t21620;
  double t21621;
  double t21640;
  double t21655;
  double t21835;
  double t21641;
  double t21642;
  double t21643;
  double t21839;
  double t21841;
  double t21656;
  double t21657;
  double t21658;
  double t21675;
  double t21876;
  double t21879;
  double t21884;
  double t21887;
  double t21888;
  double t21699;
  double t21936;
  double t21937;
  double t21938;
  double t21679;
  double t21680;
  double t21886;
  double t21895;
  double t21906;
  double t21907;
  double t21700;
  double t21701;
  double t21947;
  double t21950;
  double t21957;
  double t21962;
  double t21963;
  double t21970;
  double t21971;
  double t21972;
  double t21974;
  double t21975;
  double t21977;
  double t21980;
  double t21981;
  double t21982;
  double t21985;
  double t21986;
  double t21987;
  double t21788;
  double t21782;
  double t21989;
  double t21990;
  double t21991;
  double t22009;
  double t22010;
  double t21783;
  double t21786;
  double t22017;
  double t22018;
  double t21789;
  double t21790;
  double t22045;
  double t22047;
  double t21925;
  double t21926;
  double t21927;
  double t22052;
  double t22053;
  double t21996;
  double t21997;
  double t21998;
  double t21830;
  double t21845;
  double t21831;
  double t21832;
  double t22081;
  double t22082;
  double t21951;
  double t22087;
  double t22088;
  double t21846;
  double t21848;
  double t22108;
  double t22111;
  double t22115;
  double t22117;
  double t21873;
  double t21874;
  double t22140;
  double t22141;
  double t22142;
  double t22157;
  double t22158;
  double t21359;
  double t21362;
  double t21363;
  double t22150;
  double t22151;
  double t22152;
  double t22153;
  double t22148;
  double t22156;
  double t22159;
  double t22181;
  double t22182;
  double t22183;
  double t22172;
  double t22173;
  double t22174;
  double t22177;
  double t22178;
  double t22179;
  double t22188;
  double t22189;
  double t22190;
  double t22184;
  double t22187;
  double t22192;
  double t22198;
  double t22199;
  double t22200;
  double t22202;
  double t22203;
  double t22204;
  double t22206;
  double t22207;
  double t22208;
  double t22022;
  double t22023;
  double t22024;
  double t22026;
  double t22027;
  double t22028;
  double t22160;
  double t21911;
  double t21915;
  double t22228;
  double t22229;
  double t22236;
  double t22234;
  double t22226;
  double t22230;
  double t22260;
  double t22263;
  double t22265;
  double t22213;
  double t22214;
  double t22215;
  double t22077;
  double t22078;
  double t22288;
  double t22307;
  double t22311;
  double t22330;
  double t22331;
  double t22332;
  double t22344;
  double t22345;
  double t22346;
  double t22354;
  double t22355;
  double t22356;
  double t22360;
  double t22361;
  double t22362;
  double t22364;
  double t22365;
  double t22366;
  double t22341;
  double t22342;
  double t22347;
  double t22380;
  double t22381;
  double t22382;
  double t22376;
  double t22377;
  double t22378;
  double t22383;
  double t22386;
  double t22393;
  double t22394;
  double t22395;
  double t22397;
  double t22398;
  double t22399;
  double t22092;
  double t22093;
  double t22241;
  double t22242;
  double t22248;
  double t22249;
  double t22412;
  double t22417;
  double t22422;
  double t22418;
  double t22420;
  double t22413;
  double t22440;
  double t22443;
  double t22353;
  double t22357;
  double t22358;
  double t22447;
  double t21190;
  double t21192;
  double t21193;
  double t22476;
  double t22478;
  double t22494;
  double t22497;
  double t22500;
  t14154 = Cos(var1[10]);
  t13640 = Cos(var1[11]);
  t13659 = Sin(var1[10]);
  t14156 = Sin(var1[11]);
  t14141 = t13640*t13659;
  t14171 = -1.*t14154*t14156;
  t14252 = t14141 + t14171;
  t4963 = Cos(var1[5]);
  t20860 = t14154*t13640;
  t20871 = t13659*t14156;
  t20875 = t20860 + t20871;
  t13382 = Sin(var1[9]);
  t20880 = Sin(var1[5]);
  t20925 = Cos(var1[3]);
  t20847 = -1.*t4963*t13382*t14252;
  t20884 = t20875*t20880;
  t20913 = t20847 + t20884;
  t3433 = Sin(var1[3]);
  t20926 = Cos(var1[9]);
  t20927 = Cos(var1[4]);
  t20928 = t20926*t20927*t14252;
  t20929 = Sin(var1[4]);
  t20930 = t4963*t20875;
  t20935 = t13382*t14252*t20880;
  t21124 = t20930 + t20935;
  t21126 = -1.*t20929*t21124;
  t21127 = t20928 + t21126;
  t21198 = t20927*t13382;
  t21199 = t20926*t20929*t20880;
  t21200 = t21198 + t21199;
  t21212 = -1.*t13640*t13659;
  t21214 = t14154*t14156;
  t21215 = t21212 + t21214;
  t21211 = -1.*t4963*t13382*t20875;
  t21216 = t21215*t20880;
  t21217 = t21211 + t21216;
  t21224 = t20926*t20927*t20875;
  t21225 = t4963*t21215;
  t21226 = t13382*t20875*t20880;
  t21230 = t21225 + t21226;
  t21231 = -1.*t20929*t21230;
  t21235 = t21224 + t21231;
  t21369 = -1.*t20926*t14252*t20929;
  t21370 = -1.*t20927*t21124;
  t21371 = t21369 + t21370;
  t21392 = -0.0641*t13640;
  t21394 = -0.28*t14156;
  t21397 = t21392 + t21394;
  t21401 = -1.*t13640;
  t21404 = 1. + t21401;
  t21405 = -0.575*t21404;
  t21406 = -0.295*t13640;
  t21411 = -0.0641*t14156;
  t21412 = t21405 + t21406 + t21411;
  t21388 = 0.325*t13659;
  t21398 = t14154*t21397;
  t21417 = t13659*t21412;
  t21418 = t21388 + t21398 + t21417;
  t21386 = 0.068*t13382;
  t21419 = t20926*t21418;
  t21420 = t21386 + t21419;
  t21422 = -1.*t14154;
  t21423 = 1. + t21422;
  t21425 = -0.325*t21423;
  t21429 = -1.*t13659*t21397;
  t21430 = t14154*t21412;
  t21432 = t21425 + t21429 + t21430;
  t21433 = t4963*t21432;
  t21434 = -1.*t20926;
  t21438 = 1. + t21434;
  t21439 = 0.1575*t21438;
  t21440 = 0.2255*t20926;
  t21441 = -1.*t13382*t21418;
  t21442 = t21439 + t21440 + t21441;
  t21443 = -1.*t21442*t20880;
  t21448 = t21433 + t21443;
  t21533 = t20927*t21420;
  t21534 = -1.*t20929*t21448;
  t21535 = t21533 + t21534;
  t21530 = t13382*t20929;
  t21531 = -1.*t20926*t20927*t20880;
  t21532 = t21530 + t21531;
  t21523 = t21420*t20929;
  t21524 = t20927*t21448;
  t21525 = t21523 + t21524;
  t21377 = t20926*t20875*t20929;
  t21378 = t20927*t21230;
  t21381 = t21377 + t21378;
  t21421 = -1.*t21420*t20929;
  t21452 = -1.*t20927*t21448;
  t21512 = t21421 + t21452;
  t21551 = t4963*t21442;
  t21552 = t21432*t20880;
  t21554 = t21551 + t21552;
  t21537 = -1.*t13382*t20929;
  t21541 = t20926*t20927*t20880;
  t21542 = t21537 + t21541;
  t21595 = t20926*t14252*t20929;
  t21596 = t20927*t21124;
  t21597 = t21595 + t21596;
  t21567 = -1.*t20926*t20875*t20929;
  t21568 = -1.*t20927*t21230;
  t21569 = t21567 + t21568;
  t21663 = t4963*t13382*t14252;
  t21664 = -1.*t20875*t20880;
  t21665 = t21663 + t21664;
  t21559 = -1.*t20926*t4963*t21554;
  t21579 = t21554*t21217;
  t21682 = -1.*t4963*t21442;
  t21683 = -1.*t21432*t20880;
  t21685 = t21682 + t21683;
  t21691 = t20926*t20880*t21554;
  t21703 = t4963*t13382*t20875;
  t21704 = -1.*t21215*t20880;
  t21705 = t21703 + t21704;
  t21560 = -1.*t21532*t21525;
  t21564 = -1.*t21200*t21535;
  t21565 = t21559 + t21560 + t21564;
  t21707 = t21448*t21217;
  t21712 = t21554*t21230;
  t21581 = t21525*t21381;
  t21583 = t21535*t21235;
  t21584 = t21579 + t21581 + t21583;
  t21603 = t21554*t20913;
  t21617 = -1.*t21554*t21217;
  t21775 = t21554*t21124;
  t21779 = t21448*t20913;
  t21604 = t21525*t21597;
  t21605 = t21535*t21127;
  t21606 = t21603 + t21604 + t21605;
  t21793 = -1.*t21448*t21217;
  t21795 = -1.*t21554*t21230;
  t21619 = -1.*t21525*t21381;
  t21620 = -1.*t21535*t21235;
  t21621 = t21617 + t21619 + t21620;
  t21640 = t20926*t4963*t21554;
  t21655 = -1.*t21554*t20913;
  t21835 = -1.*t20926*t20880*t21554;
  t21641 = t21532*t21525;
  t21642 = t21200*t21535;
  t21643 = t21640 + t21641 + t21642;
  t21839 = -1.*t21554*t21124;
  t21841 = -1.*t21448*t20913;
  t21656 = -1.*t21525*t21597;
  t21657 = -1.*t21535*t21127;
  t21658 = t21655 + t21656 + t21657;
  t21675 = -1.*t13382*t21420;
  t21876 = -0.068*t13382;
  t21879 = -1.*t20926*t21418;
  t21884 = t21876 + t21879;
  t21887 = 0.068*t20926;
  t21888 = t21887 + t21441;
  t21699 = t20926*t21420*t20875;
  t21936 = -1.*t20927*t13382*t14252;
  t21937 = -1.*t20926*t14252*t20929*t20880;
  t21938 = t21936 + t21937;
  t21679 = t20926*t20880*t21448;
  t21680 = t21675 + t21679 + t21559;
  t21886 = -1.*t20926*t21420;
  t21895 = -1.*t13382*t21888;
  t21906 = -1.*t13382*t21420*t20875;
  t21907 = t20926*t21888*t20875;
  t21700 = t21448*t21230;
  t21701 = t21699 + t21579 + t21700;
  t21947 = Power(t4963,2);
  t21950 = -1.*t20926*t21947*t21884;
  t21957 = t4963*t13382*t21554;
  t21962 = -1.*t20926*t4963*t20875*t21554;
  t21963 = t4963*t21884*t21217;
  t21970 = -1.*t13382*t20875*t20929;
  t21971 = t20926*t20927*t20875*t20880;
  t21972 = t21970 + t21971;
  t21974 = t21888*t20929;
  t21975 = -1.*t20927*t21884*t20880;
  t21977 = t21974 + t21975;
  t21980 = t20927*t21888;
  t21981 = t21884*t20929*t20880;
  t21982 = t21980 + t21981;
  t21985 = t20926*t20929;
  t21986 = t20927*t13382*t20880;
  t21987 = t21985 + t21986;
  t21788 = -1.*t20926*t21420*t20875;
  t21782 = t20926*t21420*t14252;
  t21989 = t20926*t20927;
  t21990 = -1.*t13382*t20929*t20880;
  t21991 = t21989 + t21990;
  t22009 = -1.*t13382*t21420*t14252;
  t22010 = t20926*t21888*t14252;
  t21783 = t21448*t21124;
  t21786 = t21782 + t21783 + t21603;
  t22017 = t13382*t21420*t20875;
  t22018 = -1.*t20926*t21888*t20875;
  t21789 = -1.*t21448*t21230;
  t21790 = t21788 + t21617 + t21789;
  t22045 = -1.*t20926*t4963*t14252*t21554;
  t22047 = t4963*t21884*t20913;
  t21925 = -1.*t13382*t14252*t20929;
  t21926 = t20926*t20927*t14252*t20880;
  t21927 = t21925 + t21926;
  t22052 = t20926*t4963*t20875*t21554;
  t22053 = -1.*t4963*t21884*t21217;
  t21996 = -1.*t20927*t13382*t20875;
  t21997 = -1.*t20926*t20875*t20929*t20880;
  t21998 = t21996 + t21997;
  t21830 = t13382*t21420;
  t21845 = -1.*t20926*t21420*t14252;
  t21831 = -1.*t20926*t20880*t21448;
  t21832 = t21830 + t21831 + t21640;
  t22081 = t20926*t21420;
  t22082 = t13382*t21888;
  t21951 = Power(t20880,2);
  t22087 = t13382*t21420*t14252;
  t22088 = -1.*t20926*t21888*t14252;
  t21846 = -1.*t21448*t21124;
  t21848 = t21845 + t21846 + t21655;
  t22108 = t20926*t21947*t21884;
  t22111 = -1.*t4963*t13382*t21554;
  t22115 = t20926*t4963*t14252*t21554;
  t22117 = -1.*t4963*t21884*t20913;
  t21873 = -1.*t20926*t21442;
  t21874 = t21675 + t21873;
  t22140 = -1.*t14154*t13640;
  t22141 = -1.*t13659*t14156;
  t22142 = t22140 + t22141;
  t22157 = 0.325*t14154;
  t22158 = t22157 + t21429 + t21430;
  t21359 = t20925*t21217;
  t21362 = -1.*t3433*t21235;
  t21363 = t21359 + t21362;
  t22150 = -0.325*t13659;
  t22151 = -1.*t14154*t21397;
  t22152 = -1.*t13659*t21412;
  t22153 = t22150 + t22151 + t22152;
  t22148 = t20926*t21420*t21215;
  t22156 = Power(t20926,2);
  t22159 = t22156*t22158*t20875;
  t22181 = -1.*t4963*t13382*t22158;
  t22182 = t22153*t20880;
  t22183 = t22181 + t22182;
  t22172 = -1.*t4963*t13382*t21215;
  t22173 = t22142*t20880;
  t22174 = t22172 + t22173;
  t22177 = t4963*t22153;
  t22178 = t13382*t22158*t20880;
  t22179 = t22177 + t22178;
  t22188 = t4963*t22142;
  t22189 = t13382*t21215*t20880;
  t22190 = t22188 + t22189;
  t22184 = -1.*t20926*t4963*t22183;
  t22187 = t22183*t21217;
  t22192 = t21554*t22174;
  t22198 = t20926*t21215*t20929;
  t22199 = t20927*t22190;
  t22200 = t22198 + t22199;
  t22202 = t20926*t22158*t20929;
  t22203 = t20927*t22179;
  t22204 = t22202 + t22203;
  t22206 = t20926*t20927*t22158;
  t22207 = -1.*t20929*t22179;
  t22208 = t22206 + t22207;
  t22022 = -1.*t21432*t21215;
  t22023 = t13382*t21442*t20875;
  t22024 = t22022 + t21788 + t22023;
  t22026 = -1.*t13382*t21442*t14252;
  t22027 = t21432*t20875;
  t22028 = t21782 + t22026 + t22027;
  t22160 = Power(t13382,2);
  t21911 = t21432*t21215;
  t21915 = -1.*t13382*t21442*t20875;
  t22228 = -1.*t22153*t21215;
  t22229 = -1.*t21432*t22142;
  t22236 = t22153*t20875;
  t22234 = t22156*t22158*t14252;
  t22226 = -1.*t20926*t21420*t21215;
  t22230 = -1.*t22156*t22158*t20875;
  t22260 = t22183*t20913;
  t22263 = -1.*t22183*t21217;
  t22265 = -1.*t21554*t22174;
  t22213 = t20926*t20927*t21215;
  t22214 = -1.*t20929*t22190;
  t22215 = t22213 + t22214;
  t22077 = t20926*t21442;
  t22078 = t21830 + t22077;
  t22288 = -1.*t22156*t22158*t14252;
  t22307 = t20926*t4963*t22183;
  t22311 = -1.*t22183*t20913;
  t22330 = -0.28*t13640;
  t22331 = 0.0641*t14156;
  t22332 = t22330 + t22331;
  t22344 = t13659*t21397;
  t22345 = t14154*t22332;
  t22346 = t22344 + t22345;
  t22354 = t4963*t14252;
  t22355 = t13382*t22142*t20880;
  t22356 = t22354 + t22355;
  t22360 = -1.*t4963*t13382*t22142;
  t22361 = t14252*t20880;
  t22362 = t22360 + t22361;
  t22364 = t20926*t20927*t22142;
  t22365 = -1.*t20929*t22356;
  t22366 = t22364 + t22365;
  t22341 = -1.*t13659*t22332;
  t22342 = t21398 + t22341;
  t22347 = t22156*t22346*t20875;
  t22380 = -1.*t4963*t13382*t22346;
  t22381 = t22342*t20880;
  t22382 = t22380 + t22381;
  t22376 = t4963*t22342;
  t22377 = t13382*t22346*t20880;
  t22378 = t22376 + t22377;
  t22383 = -1.*t20926*t4963*t22382;
  t22386 = t22382*t21217;
  t22393 = t20926*t22346*t20929;
  t22394 = t20927*t22378;
  t22395 = t22393 + t22394;
  t22397 = t20926*t20927*t22346;
  t22398 = -1.*t20929*t22378;
  t22399 = t22397 + t22398;
  t22092 = t13382*t21442*t14252;
  t22093 = -1.*t21432*t20875;
  t22241 = t21418*t14252;
  t22242 = t22241 + t22027;
  t22248 = -1.*t21418*t20875;
  t22249 = t22022 + t22248;
  t22412 = -1.*t22342*t21215;
  t22417 = t21432*t14252;
  t22422 = t22342*t20875;
  t22418 = t22156*t22346*t14252;
  t22420 = t20926*t21420*t22142;
  t22413 = -1.*t22156*t22346*t20875;
  t22440 = t21554*t22362;
  t22443 = t22382*t20913;
  t22353 = t20926*t22142*t20929;
  t22357 = t20927*t22356;
  t22358 = t22353 + t22357;
  t22447 = -1.*t22382*t21217;
  t21190 = t20925*t20913;
  t21192 = -1.*t3433*t21127;
  t21193 = t21190 + t21192;
  t22476 = -1.*t22156*t22346*t14252;
  t22478 = -1.*t20926*t21420*t22142;
  t22494 = t20926*t4963*t22382;
  t22497 = -1.*t21554*t22362;
  t22500 = -1.*t22382*t20913;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t20925*t21127 - 1.*t20913*t3433)*var2[1] + t21193*var2[2];
  p_output1[10]=(-1.*t20925*t21200 - 1.*t20926*t3433*t4963)*var2[1] + (-1.*t21200*t3433 + t20925*t20926*t4963)*var2[2];
  p_output1[11]=(-1.*t20925*t21235 - 1.*t21217*t3433)*var2[1] + t21363*var2[2];
  p_output1[12]=t21127*var2[0] - 1.*t21371*t3433*var2[1] + t20925*t21371*var2[2] + (t21381*(-1.*t21200*t21512 - 1.*t21200*t21525 - 1.*t21532*t21535 - 1.*t21535*t21542) + t21235*t21565 + t21532*(t21235*t21512 + t21235*t21525 + t21381*t21535 + t21535*t21569) + t21200*t21584)*var2[3];
  p_output1[13]=t21200*var2[0] - 1.*t21542*t3433*var2[1] + t20925*t21542*var2[2] + ((-1.*t21235*t21512 - 1.*t21235*t21525 - 1.*t21381*t21535 - 1.*t21535*t21569)*t21597 + t21381*(t21127*t21512 + t21127*t21525 + t21371*t21535 + t21535*t21597) + t21235*t21606 + t21127*t21621)*var2[3];
  p_output1[14]=t21235*var2[0] - 1.*t21569*t3433*var2[1] + t20925*t21569*var2[2] + ((t21200*t21512 + t21200*t21525 + t21532*t21535 + t21535*t21542)*t21597 + t21532*(-1.*t21127*t21512 - 1.*t21127*t21525 - 1.*t21371*t21535 - 1.*t21535*t21597) + t21127*t21643 + t21200*t21658)*var2[3];
  p_output1[15]=t20927*t21665*var2[0] + (t20925*t21124 + t20929*t21665*t3433)*var2[1] + (-1.*t20925*t20929*t21665 + t21124*t3433)*var2[2] + (t20927*t21565*t21705 + t21532*(-1.*t20929*t21235*t21685 + t20927*t21381*t21685 + t20927*t21525*t21705 - 1.*t20929*t21535*t21705 + t21707 + t21712) - 1.*t20926*t20927*t21584*t4963 + t21381*(t20929*t21200*t21685 - 1.*t20927*t21532*t21685 + t21691 - 1.*t20926*t21448*t4963 + t20926*t20927*t21525*t4963 - 1.*t20926*t20929*t21535*t4963))*var2[3] + (t21230*t21680 + t21217*(t20880*t20926*t21685 + t21691) - 1.*t20880*t20926*t21701 + t20926*(t21230*t21685 + t21448*t21705 + t21707 + t21712)*t4963)*var2[4];
  p_output1[16]=-1.*t20926*t20927*t4963*var2[0] + (-1.*t20880*t20925*t20926 - 1.*t20926*t20929*t3433*t4963)*var2[1] + (-1.*t20880*t20926*t3433 + t20925*t20926*t20929*t4963)*var2[2] + (t20927*t21621*t21665 + t20927*t21606*t21705 + t21381*(t20927*t21525*t21665 - 1.*t20929*t21535*t21665 - 1.*t20929*t21127*t21685 + t20927*t21597*t21685 + t21775 + t21779) + t21597*(t20929*t21235*t21685 - 1.*t20927*t21381*t21685 - 1.*t20927*t21525*t21705 + t20929*t21535*t21705 + t21793 + t21795))*var2[3] + (t21217*(t21448*t21665 + t21124*t21685 + t21775 + t21779) + t21230*t21786 + t21124*t21790 + t20913*(-1.*t21230*t21685 - 1.*t21448*t21705 + t21793 + t21795))*var2[4];
  p_output1[17]=t20927*t21705*var2[0] + (t20925*t21230 + t20929*t21705*t3433)*var2[1] + (-1.*t20925*t20929*t21705 + t21230*t3433)*var2[2] + (t20927*t21643*t21665 + t21532*(-1.*t20927*t21525*t21665 + t20929*t21535*t21665 + t20929*t21127*t21685 - 1.*t20927*t21597*t21685 + t21839 + t21841) - 1.*t20926*t20927*t21658*t4963 + t21597*(-1.*t20929*t21200*t21685 + t20927*t21532*t21685 + t21835 + t20926*t21448*t4963 - 1.*t20926*t20927*t21525*t4963 + t20926*t20929*t21535*t4963))*var2[3] + (t21124*t21832 + t20913*(-1.*t20880*t20926*t21685 + t21835) - 1.*t20880*t20926*t21848 + t20926*(-1.*t21448*t21665 - 1.*t21124*t21685 + t21839 + t21841)*t4963)*var2[4];
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=t21927*var2[0] + (-1.*t21938*t3433 - 1.*t14252*t20925*t20926*t4963)*var2[1] + (t20925*t21938 - 1.*t14252*t20926*t3433*t4963)*var2[2] + (t21565*t21972 + t21584*t21987 + t21381*(t21950 + t21957 - 1.*t21532*t21977 - 1.*t21200*t21982 - 1.*t21525*t21987 - 1.*t21535*t21991) + t21532*(t21962 + t21963 + t21525*t21972 + t21381*t21977 + t21235*t21982 + t21535*t21998))*var2[3] + (t21217*(-1.*t13382*t20880*t21448 + t21886 + t21895 + t21950 - 1.*t20926*t21884*t21951 + t21957) - 1.*t20875*t20926*t21680*t4963 - 1.*t13382*t21701*t4963 + t20926*(t20875*t20880*t20926*t21448 - 1.*t20880*t21230*t21884 + t21906 + t21907 + t21962 + t21963)*t4963)*var2[4] + (-1.*t13382*t20875*t21874 + t20875*t20926*(t13382*t21442 - 1.*t20926*t21884 + t21886 + t21895) + t13382*(-1.*t20875*t20926*t21442 - 1.*t13382*t20875*t21884 + t21906 + t21907) + t20926*(t21699 + t21911 + t21915))*var2[5];
  p_output1[28]=t21987*var2[0] + (-1.*t21991*t3433 - 1.*t13382*t20925*t4963)*var2[1] + (t20925*t21991 - 1.*t13382*t3433*t4963)*var2[2] + (t21621*t21927 + t21606*t21972 + t21381*(t21525*t21927 + t21535*t21938 + t21597*t21977 + t21127*t21982 + t22045 + t22047) + t21597*(-1.*t21525*t21972 - 1.*t21381*t21977 - 1.*t21235*t21982 - 1.*t21535*t21998 + t22052 + t22053))*var2[3] + (t21217*(t14252*t20880*t20926*t21448 - 1.*t20880*t21124*t21884 + t22009 + t22010 + t22045 + t22047) + t20913*(-1.*t20875*t20880*t20926*t21448 + t20880*t21230*t21884 + t22017 + t22018 + t22052 + t22053) - 1.*t20875*t20926*t21786*t4963 - 1.*t14252*t20926*t21790*t4963)*var2[4] + (t20875*t20926*(-1.*t14252*t20926*t21442 - 1.*t13382*t14252*t21884 + t22009 + t22010) + t14252*t20926*(t20875*t20926*t21442 + t13382*t20875*t21884 + t22017 + t22018) - 1.*t13382*t14252*t22024 - 1.*t13382*t20875*t22028)*var2[5];
  p_output1[29]=t21972*var2[0] + (-1.*t21998*t3433 - 1.*t20875*t20925*t20926*t4963)*var2[1] + (t20925*t21998 - 1.*t20875*t20926*t3433*t4963)*var2[2] + (t21643*t21927 + t21658*t21987 + t21597*(t21532*t21977 + t21200*t21982 + t21525*t21987 + t21535*t21991 + t22108 + t22111) + t21532*(-1.*t21525*t21927 - 1.*t21535*t21938 - 1.*t21597*t21977 - 1.*t21127*t21982 + t22115 + t22117))*var2[3] + (t20913*(t13382*t20880*t21448 + t20926*t21884*t21951 + t22081 + t22082 + t22108 + t22111) - 1.*t14252*t20926*t21832*t4963 - 1.*t13382*t21848*t4963 + t20926*(-1.*t14252*t20880*t20926*t21448 + t20880*t21124*t21884 + t22087 + t22088 + t22115 + t22117)*t4963)*var2[4] + (-1.*t13382*t14252*t22078 + t14252*t20926*(-1.*t13382*t21442 + t20926*t21884 + t22081 + t22082) + t13382*(t14252*t20926*t21442 + t13382*t14252*t21884 + t22087 + t22088) + t20926*(t21845 + t22092 + t22093))*var2[5];
  p_output1[30]=t21381*var2[0] + t21363*var2[1] + (t20925*t21235 + t21217*t3433)*var2[2] + (t21565*t22200 + t21381*(t22184 - 1.*t21532*t22204 - 1.*t21200*t22208) + t21532*(t22187 + t22192 + t21525*t22200 + t21381*t22204 + t21235*t22208 + t21535*t22215))*var2[3] + (t21680*t22174 + t21217*(-1.*t13382*t20926*t22158 + t20880*t20926*t22179 + t22184) + t20926*(t22148 + t22159 + t21230*t22179 + t22187 + t21448*t22190 + t22192)*t4963)*var2[4] + (t20926*t21215*t21874 + t13382*(-1.*t13382*t21215*t21442 + t21432*t22142 + t22148 + t21215*t22153 + t22159 + t20875*t22158*t22160))*var2[5] + (-0.1575*t20875 - 0.2255*t22142)*var2[9];
  p_output1[31]=(t21381*t21621 + t21606*t22200 + t21381*(t21579 + t21581 + t21583 + t21597*t22204 + t21127*t22208 + t22260) + t21597*(-1.*t21525*t22200 - 1.*t21381*t22204 - 1.*t21235*t22208 - 1.*t21535*t22215 + t22263 + t22265))*var2[3] + (t21217*t21790 + t21786*t22174 + t21217*(t21579 + t21699 + t21700 + t21124*t22179 + t22234 + t22260) + t20913*(-1.*t21230*t22179 - 1.*t21448*t22190 + t22226 + t22230 + t22263 + t22265))*var2[4] + (t20875*t20926*t22024 + t20926*t21215*t22028 + t14252*t20926*(t13382*t21215*t21442 - 1.*t20875*t22158*t22160 + t22226 + t22228 + t22229 + t22230) + t20875*t20926*(t21699 + t21911 + t21915 + t14252*t22158*t22160 + t22234 + t22236))*var2[5] + (t20875*(-1.*t21215*t21418 - 1.*t20875*t22158 + t22228 + t22229) + t21215*(t20875*t21418 + t21911 + t14252*t22158 + t22236) + t22142*t22242 + t21215*t22249)*var2[9];
  p_output1[32]=t22200*var2[0] + (t20925*t22174 - 1.*t22215*t3433)*var2[1] + (t20925*t22215 + t22174*t3433)*var2[2] + (t21381*t21643 + t21597*(t21532*t22204 + t21200*t22208 + t22307) + t21532*(t21617 + t21619 + t21620 - 1.*t21597*t22204 - 1.*t21127*t22208 + t22311))*var2[3] + (t21217*t21832 + t20913*(t13382*t20926*t22158 - 1.*t20880*t20926*t22179 + t22307) + t20926*(t21617 + t21788 + t21789 - 1.*t21124*t22179 + t22288 + t22311)*t4963)*var2[4] + (t20875*t20926*t22078 + t13382*(t21788 + t22022 + t22023 - 1.*t20875*t22153 - 1.*t14252*t22158*t22160 + t22288))*var2[5] + 0.068*t21215*var2[9];
  p_output1[33]=t22358*var2[0] + (t20925*t22362 - 1.*t22366*t3433)*var2[1] + (t20925*t22366 + t22362*t3433)*var2[2] + (t21565*t21597 + t21381*(t22383 - 1.*t21532*t22395 - 1.*t21200*t22399) + t21532*(t21603 + t21604 + t21605 + t22386 + t21381*t22395 + t21235*t22399))*var2[3] + (t20913*t21680 + t21217*(-1.*t13382*t20926*t22346 + t20880*t20926*t22378 + t22383) + t20926*(t21603 + t21782 + t21783 + t22347 + t21230*t22378 + t22386)*t4963)*var2[4] + (t14252*t20926*t21874 + t13382*(t21782 + t22026 + t22027 + t21215*t22342 + t20875*t22160*t22346 + t22347))*var2[5] + (-0.2255*t20875 - 0.1575*t22142)*var2[9] + (-0.325*t13640 - 1.*t13640*t21412 - 1.*t13640*t22332)*var2[10];
  p_output1[34]=(t21597*t21606 + t21621*t22358 + t21381*(t21525*t22358 + t21535*t22366 + t21597*t22395 + t21127*t22399 + t22440 + t22443) + t21597*(t21655 + t21656 + t21657 - 1.*t21381*t22395 - 1.*t21235*t22399 + t22447))*var2[3] + (t20913*t21786 + t21790*t22362 + t21217*(t21448*t22356 + t21124*t22378 + t22418 + t22420 + t22440 + t22443) + t20913*(t21655 + t21845 + t21846 - 1.*t21230*t22378 + t22413 + t22447))*var2[4] + (t14252*t20926*t22028 + t20926*t22024*t22142 + t14252*t20926*(t21845 + t22092 + t22093 - 1.*t20875*t22160*t22346 + t22412 + t22413) + t20875*t20926*(-1.*t13382*t21442*t22142 + t14252*t22160*t22346 + t22417 + t22418 + t22420 + t22422))*var2[5] + (t20875*t22242 + t14252*t22249 + t20875*(-1.*t14252*t21418 + t22093 - 1.*t20875*t22346 + t22412) + t21215*(t21418*t22142 + t14252*t22346 + t22417 + t22422))*var2[9];
  p_output1[35]=t21597*var2[0] + t21193*var2[1] + (t20925*t21127 + t20913*t3433)*var2[2] + (t21643*t22358 + t21597*(t21532*t22395 + t21200*t22399 + t22494) + t21532*(-1.*t21525*t22358 - 1.*t21535*t22366 - 1.*t21597*t22395 - 1.*t21127*t22399 + t22497 + t22500))*var2[3] + (t21832*t22362 + t20913*(t13382*t20926*t22346 - 1.*t20880*t20926*t22378 + t22494) + t20926*(-1.*t21448*t22356 - 1.*t21124*t22378 + t22476 + t22478 + t22497 + t22500)*t4963)*var2[4] + (t20926*t22078*t22142 + t13382*(-1.*t14252*t21432 + t13382*t21442*t22142 - 1.*t20875*t22342 - 1.*t14252*t22160*t22346 + t22476 + t22478))*var2[5] + 0.068*t14252*var2[9] + (-0.325*t14156 - 1.*t14156*t21412 - 1.*t14156*t22332)*var2[10];
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

#include "dJh_RlFoot_DiagonalStance.hh"

namespace SymFunction
{

void dJh_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
