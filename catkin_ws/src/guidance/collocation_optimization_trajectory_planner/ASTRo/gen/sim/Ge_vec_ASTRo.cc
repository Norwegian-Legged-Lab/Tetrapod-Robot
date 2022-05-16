/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:40:14 GMT+02:00
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
  double t55;
  double t241;
  double t257;
  double t921;
  double t964;
  double t1288;
  double t1208;
  double t1210;
  double t1224;
  double t1292;
  double t1227;
  double t1296;
  double t1558;
  double t1739;
  double t1791;
  double t1829;
  double t2323;
  double t2463;
  double t2533;
  double t2700;
  double t2793;
  double t4225;
  double t4230;
  double t4243;
  double t4412;
  double t4538;
  double t681;
  double t1169;
  double t1584;
  double t1715;
  double t1730;
  double t1834;
  double t1837;
  double t1840;
  double t1845;
  double t1850;
  double t1869;
  double t1927;
  double t5877;
  double t6003;
  double t7138;
  double t2598;
  double t2964;
  double t3142;
  double t3178;
  double t3611;
  double t3802;
  double t3840;
  double t3907;
  double t3918;
  double t3943;
  double t3958;
  double t3971;
  double t14775;
  double t16005;
  double t4640;
  double t4754;
  double t4786;
  double t4808;
  double t5056;
  double t5059;
  double t5146;
  double t5251;
  double t5273;
  double t5373;
  double t5407;
  double t5453;
  double t18922;
  double t19217;
  double t7097;
  double t1849;
  double t7382;
  double t7742;
  double t7773;
  double t7812;
  double t7952;
  double t8022;
  double t19564;
  double t19616;
  double t19704;
  double t19734;
  double t19751;
  double t15263;
  double t3935;
  double t17934;
  double t18573;
  double t18586;
  double t18589;
  double t18592;
  double t18621;
  double t20132;
  double t20693;
  double t20698;
  double t20700;
  double t20704;
  double t18994;
  double t5323;
  double t19485;
  double t19487;
  double t19495;
  double t19497;
  double t19512;
  double t19513;
  double t20749;
  double t20755;
  double t20756;
  double t20758;
  double t20768;
  double t20862;
  double t20864;
  double t20867;
  double t20868;
  double t20869;
  double t20870;
  double t20877;
  double t20882;
  double t20884;
  double t20885;
  double t20886;
  double t20896;
  double t20897;
  double t20900;
  double t20902;
  double t20905;
  double t20907;
  double t20914;
  double t20977;
  double t20901;
  double t20915;
  double t20970;
  double t20974;
  double t20984;
  double t20986;
  double t20992;
  double t21011;
  double t21043;
  double t21082;
  double t21087;
  double t21122;
  double t21123;
  double t21138;
  double t21140;
  double t21141;
  double t21163;
  double t21164;
  double t21178;
  double t21179;
  double t21181;
  double t21223;
  double t21227;
  double t21228;
  double t21231;
  double t21232;
  double t21256;
  double t21270;
  double t21271;
  double t21280;
  double t21281;
  double t21282;
  double t21291;
  double t21292;
  double t21300;
  double t21308;
  double t21309;
  double t21315;
  double t21177;
  double t21336;
  double t19571;
  double t19577;
  double t21338;
  double t21341;
  double t21347;
  double t21402;
  double t21406;
  double t21407;
  double t21362;
  double t21255;
  double t21369;
  double t20688;
  double t20689;
  double t21372;
  double t21374;
  double t21375;
  double t21470;
  double t21474;
  double t21476;
  double t21387;
  double t21296;
  double t21392;
  double t20751;
  double t20752;
  double t21393;
  double t21394;
  double t21395;
  double t21538;
  double t21539;
  double t21542;
  double t21619;
  double t21633;
  double t21672;
  double t21676;
  double t21677;
  double t21679;
  double t21680;
  double t21682;
  double t21678;
  double t21735;
  double t21736;
  double t21049;
  double t21058;
  double t21748;
  double t21749;
  double t21752;
  double t21762;
  double t21764;
  double t21765;
  double t21779;
  double t21780;
  double t21781;
  double t21794;
  double t21796;
  double t21814;
  double t21782;
  double t21815;
  double t21816;
  double t21819;
  double t21822;
  double t21824;
  double t21825;
  double t21828;
  double t22037;
  double t22099;
  double t22100;
  double t21974;
  double t22008;
  double t22526;
  double t22583;
  double t22611;
  double t22751;
  double t22752;
  double t22753;
  double t22718;
  double t22728;
  double t22770;
  double t22776;
  double t22779;
  double t21879;
  double t21835;
  double t22123;
  double t22676;
  double t22758;
  double t22804;
  double t23294;
  double t23295;
  double t23297;
  double t23326;
  double t23381;
  double t23511;
  double t23696;
  double t23733;
  double t24364;
  double t24057;
  double t28512;
  double t28516;
  double t28529;
  double t28302;
  double t28368;
  double t28387;
  double t28533;
  double t28542;
  double t28550;
  double t28756;
  double t28766;
  double t28785;
  double t28984;
  double t29978;
  double t29967;
  double t33636;
  double t33655;
  double t33656;
  double t33635;
  double t33657;
  double t33677;
  double t33794;
  double t33813;
  double t33839;
  double t33844;
  double t33846;
  double t33885;
  double t33889;
  double t33892;
  double t34041;
  double t34056;
  double t34062;
  double t34073;
  double t34177;
  double t34181;
  double t34188;
  double t34267;
  double t34330;
  double t34408;
  double t34634;
  double t34424;
  double t34967;
  double t34973;
  double t35001;
  double t34964;
  double t35021;
  double t35022;
  double t35029;
  double t35034;
  double t35051;
  double t35054;
  double t35055;
  double t35309;
  double t35348;
  double t35442;
  double t35507;
  double t35547;
  double t35548;
  double t35510;
  double t35511;
  double t35515;
  double t35527;
  double t35546;
  double t35551;
  double t35552;
  double t35549;
  double t35559;
  double t35606;
  double t35607;
  double t35608;
  double t35604;
  double t35609;
  double t35627;
  double t35631;
  double t35632;
  double t35642;
  double t35644;
  double t35646;
  double t35680;
  double t35681;
  double t35683;
  double t35720;
  double t35723;
  double t35705;
  double t35707;
  double t35708;
  double t35711;
  double t35712;
  double t35713;
  double t35733;
  double t35734;
  double t35727;
  double t35746;
  double t36132;
  double t36134;
  double t36135;
  double t36130;
  double t36137;
  double t36138;
  double t36139;
  double t36141;
  double t36147;
  double t36148;
  double t36164;
  double t36258;
  double t36265;
  double t36267;
  t55 = Cos(var1[9]);
  t241 = -1.*t55;
  t257 = 1. + t241;
  t921 = Sin(var1[9]);
  t964 = 0.15121*t921;
  t1288 = Cos(var1[3]);
  t1208 = Cos(var1[5]);
  t1210 = Sin(var1[3]);
  t1224 = Sin(var1[4]);
  t1292 = Sin(var1[5]);
  t1227 = t1208*t1210*t1224;
  t1296 = t1288*t1292;
  t1558 = t1227 + t1296;
  t1739 = t1288*t1208;
  t1791 = -1.*t1210*t1224*t1292;
  t1829 = t1739 + t1791;
  t2323 = Cos(var1[12]);
  t2463 = -1.*t2323;
  t2533 = 1. + t2463;
  t2700 = Sin(var1[12]);
  t2793 = -0.15121*t2700;
  t4225 = Cos(var1[15]);
  t4230 = -1.*t4225;
  t4243 = 1. + t4230;
  t4412 = -0.15121*t4243;
  t4538 = Sin(var1[15]);
  t681 = -0.15121*t257;
  t1169 = t681 + t964;
  t1584 = t1169*t1558;
  t1715 = 0.15121*t257;
  t1730 = t1715 + t964;
  t1834 = t1730*t1829;
  t1837 = -1.*t921*t1558;
  t1840 = t55*t1829;
  t1845 = t1837 + t1840;
  t1850 = t55*t1558;
  t1869 = t921*t1829;
  t1927 = t1850 + t1869;
  t5877 = Cos(var1[4]);
  t6003 = Sin(var1[10]);
  t7138 = Cos(var1[10]);
  t2598 = 0.15121*t2533;
  t2964 = t2598 + t2793;
  t3142 = t2964*t1558;
  t3178 = -0.15121*t2533;
  t3611 = t3178 + t2793;
  t3802 = t3611*t1829;
  t3840 = -1.*t2700*t1558;
  t3907 = t2323*t1829;
  t3918 = t3840 + t3907;
  t3943 = t2323*t1558;
  t3958 = t2700*t1829;
  t3971 = t3943 + t3958;
  t14775 = Sin(var1[13]);
  t16005 = Cos(var1[13]);
  t4640 = -0.15121*t4538;
  t4754 = t4412 + t4640;
  t4786 = t4754*t1558;
  t4808 = 0.15121*t4538;
  t5056 = t4412 + t4808;
  t5059 = t5056*t1829;
  t5146 = -1.*t4538*t1558;
  t5251 = t4225*t1829;
  t5273 = t5146 + t5251;
  t5373 = t4225*t1558;
  t5407 = t4538*t1829;
  t5453 = t5373 + t5407;
  t18922 = Sin(var1[16]);
  t19217 = Cos(var1[16]);
  t7097 = -0.28121*t5877*t6003*t1210;
  t1849 = 0.15121*t1845;
  t7382 = -1.*t7138;
  t7742 = 1. + t7382;
  t7773 = -0.28121*t7742*t1927;
  t7812 = -1.*t5877*t6003*t1210;
  t7952 = t7138*t1927;
  t8022 = t7812 + t7952;
  t19564 = Cos(var1[11]);
  t19616 = Sin(var1[11]);
  t19704 = -1.*t7138*t5877*t1210;
  t19734 = -1.*t6003*t1927;
  t19751 = t19704 + t19734;
  t15263 = -0.28121*t5877*t14775*t1210;
  t3935 = -0.15121*t3918;
  t17934 = -1.*t16005;
  t18573 = 1. + t17934;
  t18586 = 0.28121*t18573*t3971;
  t18589 = t5877*t14775*t1210;
  t18592 = t16005*t3971;
  t18621 = t18589 + t18592;
  t20132 = Cos(var1[14]);
  t20693 = Sin(var1[14]);
  t20698 = -1.*t16005*t5877*t1210;
  t20700 = t14775*t3971;
  t20704 = t20698 + t20700;
  t18994 = -0.28121*t5877*t18922*t1210;
  t5323 = -0.15121*t5273;
  t19485 = -1.*t19217;
  t19487 = 1. + t19485;
  t19495 = -0.28121*t19487*t5453;
  t19497 = -1.*t5877*t18922*t1210;
  t19512 = t19217*t5453;
  t19513 = t19497 + t19512;
  t20749 = Cos(var1[17]);
  t20755 = Sin(var1[17]);
  t20756 = -1.*t19217*t5877*t1210;
  t20758 = -1.*t18922*t5453;
  t20768 = t20756 + t20758;
  t20862 = Cos(var1[6]);
  t20864 = -1.*t20862;
  t20867 = 1. + t20864;
  t20868 = 0.15121*t20867;
  t20869 = Sin(var1[6]);
  t20870 = -0.15121*t20869;
  t20877 = t20868 + t20870;
  t20882 = t1829*t20877;
  t20884 = 0.15121*t20869;
  t20885 = t20868 + t20884;
  t20886 = t1558*t20885;
  t20896 = t20862*t1829;
  t20897 = -1.*t1558*t20869;
  t20900 = t20896 + t20897;
  t20902 = t20862*t1558;
  t20905 = t1829*t20869;
  t20907 = t20902 + t20905;
  t20914 = Cos(var1[7]);
  t20977 = Sin(var1[7]);
  t20901 = 0.15121*t20900;
  t20915 = -1.*t20914;
  t20970 = 1. + t20915;
  t20974 = 0.28121*t20970*t20907;
  t20984 = -0.28121*t5877*t1210*t20977;
  t20986 = t20914*t20907;
  t20992 = t5877*t1210*t20977;
  t21011 = t20986 + t20992;
  t21043 = Cos(var1[8]);
  t21082 = -1.*t5877*t20914*t1210;
  t21087 = t20907*t20977;
  t21122 = t21082 + t21087;
  t21123 = Sin(var1[8]);
  t21138 = -1.*t1288*t5877*t1208*t1169;
  t21140 = t1288*t5877*t1730*t1292;
  t21141 = t1288*t5877*t1208*t921;
  t21163 = t55*t1288*t5877*t1292;
  t21164 = t21141 + t21163;
  t21178 = -1.*t55*t1288*t5877*t1208;
  t21179 = t1288*t5877*t921*t1292;
  t21181 = t21178 + t21179;
  t21223 = -1.*t1288*t5877*t1208*t2964;
  t21227 = t1288*t5877*t3611*t1292;
  t21228 = t1288*t5877*t1208*t2700;
  t21231 = t2323*t1288*t5877*t1292;
  t21232 = t21228 + t21231;
  t21256 = -1.*t2323*t1288*t5877*t1208;
  t21270 = t1288*t5877*t2700*t1292;
  t21271 = t21256 + t21270;
  t21280 = -1.*t1288*t5877*t1208*t4754;
  t21281 = t1288*t5877*t5056*t1292;
  t21282 = t1288*t5877*t1208*t4538;
  t21291 = t4225*t1288*t5877*t1292;
  t21292 = t21282 + t21291;
  t21300 = -1.*t4225*t1288*t5877*t1208;
  t21308 = t1288*t5877*t4538*t1292;
  t21309 = t21300 + t21308;
  t21315 = -0.28121*t1288*t6003*t1224;
  t21177 = 0.15121*t21164;
  t21336 = -0.28121*t7742*t21181;
  t19571 = -1.*t19564;
  t19577 = 1. + t19571;
  t21338 = -1.*t1288*t6003*t1224;
  t21341 = t7138*t21181;
  t21347 = t21338 + t21341;
  t21402 = -1.*t7138*t1288*t1224;
  t21406 = -1.*t6003*t21181;
  t21407 = t21402 + t21406;
  t21362 = -0.28121*t1288*t14775*t1224;
  t21255 = -0.15121*t21232;
  t21369 = 0.28121*t18573*t21271;
  t20688 = -1.*t20132;
  t20689 = 1. + t20688;
  t21372 = t1288*t14775*t1224;
  t21374 = t16005*t21271;
  t21375 = t21372 + t21374;
  t21470 = -1.*t16005*t1288*t1224;
  t21474 = t14775*t21271;
  t21476 = t21470 + t21474;
  t21387 = -0.28121*t1288*t18922*t1224;
  t21296 = -0.15121*t21292;
  t21392 = -0.28121*t19487*t21309;
  t20751 = -1.*t20749;
  t20752 = 1. + t20751;
  t21393 = -1.*t1288*t18922*t1224;
  t21394 = t19217*t21309;
  t21395 = t21393 + t21394;
  t21538 = -1.*t19217*t1288*t1224;
  t21539 = -1.*t18922*t21309;
  t21542 = t21538 + t21539;
  t21619 = t1288*t5877*t1292*t20877;
  t21633 = -1.*t1288*t5877*t1208*t20885;
  t21672 = t1288*t5877*t20862*t1292;
  t21676 = t1288*t5877*t1208*t20869;
  t21677 = t21672 + t21676;
  t21679 = -1.*t1288*t5877*t1208*t20862;
  t21680 = t1288*t5877*t1292*t20869;
  t21682 = t21679 + t21680;
  t21678 = 0.15121*t21677;
  t21735 = 0.28121*t20970*t21682;
  t21736 = -0.28121*t1288*t1224*t20977;
  t21049 = -1.*t21043;
  t21058 = 1. + t21049;
  t21748 = t20914*t21682;
  t21749 = t1288*t1224*t20977;
  t21752 = t21748 + t21749;
  t21762 = -1.*t1288*t20914*t1224;
  t21764 = t21682*t20977;
  t21765 = t21762 + t21764;
  t21779 = t1288*t1208*t1224;
  t21780 = -1.*t1210*t1292;
  t21781 = t21779 + t21780;
  t21794 = t1208*t1210;
  t21796 = t1288*t1224*t1292;
  t21814 = t21794 + t21796;
  t21782 = t1730*t21781;
  t21815 = t1169*t21814;
  t21816 = t921*t21781;
  t21819 = t55*t21814;
  t21822 = t21816 + t21819;
  t21824 = t55*t21781;
  t21825 = -1.*t921*t21814;
  t21828 = t21824 + t21825;
  t22037 = t2700*t21781;
  t22099 = t2323*t21814;
  t22100 = t22037 + t22099;
  t21974 = t3611*t21781;
  t22008 = t2964*t21814;
  t22526 = t2323*t21781;
  t22583 = -1.*t2700*t21814;
  t22611 = t22526 + t22583;
  t22751 = t4538*t21781;
  t22752 = t4225*t21814;
  t22753 = t22751 + t22752;
  t22718 = t5056*t21781;
  t22728 = t4754*t21814;
  t22770 = t4225*t21781;
  t22776 = -1.*t4538*t21814;
  t22779 = t22770 + t22776;
  t21879 = -0.28121*t7742*t21822;
  t21835 = 0.15121*t21828;
  t22123 = 0.28121*t18573*t22100;
  t22676 = -0.15121*t22611;
  t22758 = -0.28121*t19487*t22753;
  t22804 = -0.15121*t22779;
  t23294 = t21781*t20877;
  t23295 = t21814*t20885;
  t23297 = t20862*t21814;
  t23326 = t21781*t20869;
  t23381 = t23297 + t23326;
  t23511 = t20862*t21781;
  t23696 = -1.*t21814*t20869;
  t23733 = t23511 + t23696;
  t24364 = 0.28121*t20970*t23381;
  t24057 = 0.15121*t23733;
  t28512 = -1.*t1288*t1208*t1224;
  t28516 = t1210*t1292;
  t28529 = t28512 + t28516;
  t28302 = -0.15121*t20862;
  t28368 = t28302 + t20884;
  t28387 = t21814*t28368;
  t28533 = 0.15121*t20862;
  t28542 = t28533 + t20884;
  t28550 = t28529*t28542;
  t28756 = -1.*t28529*t20869;
  t28766 = t23297 + t28756;
  t28785 = -1.*t20862*t28529;
  t28984 = t28785 + t23696;
  t29978 = 0.28121*t20970*t28766;
  t29967 = 0.15121*t28984;
  t33636 = t20862*t28529;
  t33655 = t21814*t20869;
  t33656 = t33636 + t33655;
  t33635 = 0.28121*t1288*t5877*t20914;
  t33657 = 0.28121*t33656*t20977;
  t33677 = -1.*t1288*t5877*t20914;
  t33794 = -1.*t33656*t20977;
  t33813 = t33677 + t33794;
  t33839 = t20914*t33656;
  t33844 = -1.*t1288*t5877*t20977;
  t33846 = t33839 + t33844;
  t33885 = t1288*t5877*t20914;
  t33889 = t33656*t20977;
  t33892 = t33885 + t33889;
  t34041 = 0.15121*t55;
  t34056 = -0.15121*t921;
  t34062 = t34041 + t34056;
  t34073 = t34062*t28529;
  t34177 = t34041 + t964;
  t34181 = t34177*t21814;
  t34188 = -1.*t921*t28529;
  t34267 = t34188 + t21819;
  t34330 = -1.*t55*t28529;
  t34408 = t34330 + t21825;
  t34634 = -0.28121*t7742*t34267;
  t34424 = 0.15121*t34408;
  t34967 = t55*t28529;
  t34973 = t921*t21814;
  t35001 = t34967 + t34973;
  t34964 = 0.28121*t7138*t1288*t5877;
  t35021 = -0.28121*t6003*t35001;
  t35022 = t7138*t1288*t5877;
  t35029 = -1.*t6003*t35001;
  t35034 = t35022 + t35029;
  t35051 = -1.*t1288*t5877*t6003;
  t35054 = -1.*t7138*t35001;
  t35055 = t35051 + t35054;
  t35309 = t1288*t5877*t6003;
  t35348 = t7138*t35001;
  t35442 = t35309 + t35348;
  t35507 = -0.15121*t2323;
  t35547 = -1.*t2700*t28529;
  t35548 = t35547 + t22099;
  t35510 = 0.15121*t2700;
  t35511 = t35507 + t35510;
  t35515 = t35511*t28529;
  t35527 = t35507 + t2793;
  t35546 = t35527*t21814;
  t35551 = -1.*t2323*t28529;
  t35552 = t35551 + t22583;
  t35549 = 0.28121*t18573*t35548;
  t35559 = -0.15121*t35552;
  t35606 = t2323*t28529;
  t35607 = t2700*t21814;
  t35608 = t35606 + t35607;
  t35604 = 0.28121*t16005*t1288*t5877;
  t35609 = 0.28121*t14775*t35608;
  t35627 = -1.*t16005*t1288*t5877;
  t35631 = -1.*t14775*t35608;
  t35632 = t35627 + t35631;
  t35642 = -1.*t1288*t5877*t14775;
  t35644 = t16005*t35608;
  t35646 = t35642 + t35644;
  t35680 = t16005*t1288*t5877;
  t35681 = t14775*t35608;
  t35683 = t35680 + t35681;
  t35720 = -1.*t4538*t28529;
  t35723 = t35720 + t22752;
  t35705 = -0.15121*t4225;
  t35707 = t35705 + t4640;
  t35708 = t35707*t28529;
  t35711 = 0.15121*t4225;
  t35712 = t35711 + t4640;
  t35713 = t35712*t21814;
  t35733 = -1.*t4225*t28529;
  t35734 = t35733 + t22776;
  t35727 = -0.28121*t19487*t35723;
  t35746 = -0.15121*t35734;
  t36132 = t4225*t28529;
  t36134 = t4538*t21814;
  t36135 = t36132 + t36134;
  t36130 = 0.28121*t19217*t1288*t5877;
  t36137 = -0.28121*t18922*t36135;
  t36138 = t19217*t1288*t5877;
  t36139 = -1.*t18922*t36135;
  t36141 = t36138 + t36139;
  t36147 = -1.*t1288*t5877*t18922;
  t36148 = -1.*t19217*t36135;
  t36164 = t36147 + t36148;
  t36258 = t1288*t5877*t18922;
  t36265 = t19217*t36135;
  t36267 = t36258 + t36265;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=-210.915;
  p_output1[3]=-11.5758*(t1584 + t1834 + t1849 - 0.15121*t1927) - 11.5758*(t20882 + t20886 + t20901 + 0.15121*t20907) - 13.6359*(t20882 + t20886 + 0.18121*t20900 + t20974 + t20984 + 0.28121*t21011) - 2.7468000000000004*(t20882 + t20886 + t20901 + t20974 + t20984 + 0.50321*t21011*t21058 - 0.50321*t21122*t21123 + 0.50321*(t21011*t21043 + t21122*t21123)) - 13.6359*(t15263 + t18586 + 0.28121*t18621 + t3142 + t3802 - 0.18121*t3918) - 2.7468000000000004*(t15263 + t18586 + 0.50321*t18621*t20689 - 0.50321*t20693*t20704 + 0.50321*(t18621*t20132 + t20693*t20704) + t3142 + t3802 + t3935) - 11.5758*(t3142 + t3802 + t3935 + 0.15121*t3971) - 13.6359*(t18994 + t19495 - 0.28121*t19513 + t4786 + t5059 - 0.18121*t5273) - 2.7468000000000004*(t18994 + t19495 - 0.50321*t19513*t20752 - 0.50321*t20755*t20768 - 0.50321*(t19513*t20749 - 1.*t20755*t20768) + t4786 + t5059 + t5323) - 11.5758*(t4786 + t5059 + t5323 - 0.15121*t5453) - 13.6359*(t1584 + t1834 + 0.18121*t1845 + t7097 + t7773 - 0.28121*t8022) - 2.7468000000000004*(t1584 + t1834 + t1849 - 0.50321*t19616*t19751 + t7097 + t7773 - 0.50321*t19577*t8022 - 0.50321*(-1.*t19616*t19751 + t19564*t8022));
  p_output1[4]=-11.5758*(t21138 + t21140 + t21177 - 0.15121*t21181) - 11.5758*(t21223 + t21227 + t21255 + 0.15121*t21271) - 11.5758*(t21280 + t21281 + t21296 - 0.15121*t21309) - 13.6359*(t21138 + t21140 + 0.18121*t21164 + t21315 + t21336 - 0.28121*t21347) - 13.6359*(t21223 + t21227 - 0.18121*t21232 + t21362 + t21369 + 0.28121*t21375) - 13.6359*(t21280 + t21281 - 0.18121*t21292 + t21387 + t21392 - 0.28121*t21395) - 2.7468000000000004*(t21138 + t21140 + t21177 + t21315 + t21336 - 0.50321*t19577*t21347 - 0.50321*t19616*t21407 - 0.50321*(t19564*t21347 - 1.*t19616*t21407)) - 2.7468000000000004*(t21223 + t21227 + t21255 + t21362 + t21369 + 0.50321*t20689*t21375 - 0.50321*t20693*t21476 + 0.50321*(t20132*t21375 + t20693*t21476)) - 2.7468000000000004*(t21280 + t21281 + t21296 + t21387 + t21392 - 0.50321*t20752*t21395 - 0.50321*t20755*t21542 - 0.50321*(t20749*t21395 - 1.*t20755*t21542)) - 11.5758*(t21619 + t21633 + t21678 + 0.15121*t21682) - 13.6359*(t21619 + t21633 + 0.18121*t21677 + t21735 + t21736 + 0.28121*t21752) - 2.7468000000000004*(t21619 + t21633 + t21678 + t21735 + t21736 + 0.50321*t21058*t21752 - 0.50321*t21123*t21765 + 0.50321*(t21043*t21752 + t21123*t21765));
  p_output1[5]=-11.5758*(t21782 + t21815 - 0.15121*t21822 + t21835) - 13.6359*(t21974 + t22008 + 0.28121*t16005*t22100 + t22123 - 0.18121*t22611) - 11.5758*(t21974 + t22008 + 0.15121*t22100 + t22676) - 2.7468000000000004*(t21974 + t22008 + 0.50321*t16005*t20689*t22100 - 0.50321*t14775*t20693*t22100 + 0.50321*(t16005*t20132*t22100 + t14775*t20693*t22100) + t22123 + t22676) - 13.6359*(t22718 + t22728 - 0.28121*t19217*t22753 + t22758 - 0.18121*t22779) - 11.5758*(t22718 + t22728 - 0.15121*t22753 + t22804) - 2.7468000000000004*(t22718 + t22728 - 0.50321*t19217*t20752*t22753 + 0.50321*t18922*t20755*t22753 - 0.50321*(t19217*t20749*t22753 + t18922*t20755*t22753) + t22758 + t22804) - 11.5758*(t23294 + t23295 + 0.15121*t23381 + t24057) - 13.6359*(t23294 + t23295 + 0.28121*t20914*t23381 + 0.18121*t23733 + t24364) - 2.7468000000000004*(t23294 + t23295 + 0.50321*t20914*t21058*t23381 - 0.50321*t20977*t21123*t23381 + 0.50321*(t20914*t21043*t23381 + t20977*t21123*t23381) + t24057 + t24364) - 13.6359*(t21782 + t21815 + 0.18121*t21828 + t21879 - 0.28121*t21822*t7138) - 2.7468000000000004*(t21782 + t21815 + t21835 + t21879 + 0.50321*t19616*t21822*t6003 - 0.50321*t19577*t21822*t7138 - 0.50321*(t19616*t21822*t6003 + t19564*t21822*t7138));
  p_output1[6]=-11.5758*(t28387 + t28550 + 0.15121*t28766 + t29967) - 13.6359*(t28387 + t28550 + 0.28121*t20914*t28766 + 0.18121*t28984 + t29978) - 2.7468000000000004*(t28387 + t28550 + 0.50321*t20914*t21058*t28766 - 0.50321*t20977*t21123*t28766 + 0.50321*(t20914*t21043*t28766 + t20977*t21123*t28766) + t29967 + t29978);
  p_output1[7]=-13.6359*(t33635 + t33657 + 0.28121*t33813) - 2.7468000000000004*(t33635 + t33657 + 0.50321*t21058*t33813 - 0.50321*t21123*t33846 + 0.50321*(t21043*t33813 + t21123*t33846));
  p_output1[8]=-2.7468000000000004*(0.50321*t21123*t33846 - 0.50321*t21043*t33892 + 0.50321*(-1.*t21123*t33846 + t21043*t33892));
  p_output1[9]=-11.5758*(t34073 + t34181 - 0.15121*t34267 + t34424) - 13.6359*(t34073 + t34181 + 0.18121*t34408 + t34634 - 0.28121*t34267*t7138) - 2.7468000000000004*(t34073 + t34181 + t34424 + t34634 + 0.50321*t19616*t34267*t6003 - 0.50321*t19577*t34267*t7138 - 0.50321*(t19616*t34267*t6003 + t19564*t34267*t7138));
  p_output1[10]=-13.6359*(t34964 + t35021 - 0.28121*t35034) - 2.7468000000000004*(t34964 + t35021 - 0.50321*t19577*t35034 - 0.50321*t19616*t35055 - 0.50321*(t19564*t35034 - 1.*t19616*t35055));
  p_output1[11]=-2.7468000000000004*(-0.50321*t19564*t35034 - 0.50321*t19616*t35442 - 0.50321*(-1.*t19564*t35034 - 1.*t19616*t35442));
  p_output1[12]=-13.6359*(t35515 + t35546 + 0.28121*t16005*t35548 + t35549 - 0.18121*t35552) - 11.5758*(t35515 + t35546 + 0.15121*t35548 + t35559) - 2.7468000000000004*(t35515 + t35546 + 0.50321*t16005*t20689*t35548 - 0.50321*t14775*t20693*t35548 + 0.50321*(t16005*t20132*t35548 + t14775*t20693*t35548) + t35549 + t35559);
  p_output1[13]=-13.6359*(t35604 + t35609 + 0.28121*t35632) - 2.7468000000000004*(t35604 + t35609 + 0.50321*t20689*t35632 - 0.50321*t20693*t35646 + 0.50321*(t20132*t35632 + t20693*t35646));
  p_output1[14]=-2.7468000000000004*(0.50321*t20693*t35646 - 0.50321*t20132*t35683 + 0.50321*(-1.*t20693*t35646 + t20132*t35683));
  p_output1[15]=-13.6359*(t35708 + t35713 - 0.28121*t19217*t35723 + t35727 - 0.18121*t35734) - 11.5758*(t35708 + t35713 - 0.15121*t35723 + t35746) - 2.7468000000000004*(t35708 + t35713 - 0.50321*t19217*t20752*t35723 + 0.50321*t18922*t20755*t35723 - 0.50321*(t19217*t20749*t35723 + t18922*t20755*t35723) + t35727 + t35746);
  p_output1[16]=-13.6359*(t36130 + t36137 - 0.28121*t36141) - 2.7468000000000004*(t36130 + t36137 - 0.50321*t20752*t36141 - 0.50321*t20755*t36164 - 0.50321*(t20749*t36141 - 1.*t20755*t36164));
  p_output1[17]=-2.7468000000000004*(-0.50321*t20749*t36141 - 0.50321*t20755*t36267 - 0.50321*(-1.*t20749*t36141 - 1.*t20755*t36267));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ge_vec_ASTRo.hh"

namespace SymFunction
{

void Ge_vec_ASTRo_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
