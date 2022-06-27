/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:21:02 GMT+02:00
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
  double t19282;
  double t19335;
  double t19347;
  double t19355;
  double t19359;
  double t19367;
  double t19368;
  double t19410;
  double t17117;
  double t17120;
  double t19411;
  double t19420;
  double t19396;
  double t19414;
  double t19416;
  double t10018;
  double t19421;
  double t19422;
  double t19425;
  double t19426;
  double t19428;
  double t19522;
  double t19527;
  double t19528;
  double t19531;
  double t19536;
  double t19537;
  double t19556;
  double t19557;
  double t19558;
  double t19561;
  double t19562;
  double t19563;
  double t19573;
  double t19574;
  double t19575;
  double t19577;
  double t19578;
  double t19580;
  double t19582;
  double t19583;
  double t19586;
  double t19587;
  double t19588;
  double t19589;
  double t19598;
  double t19599;
  double t19600;
  double t19609;
  double t19610;
  double t19611;
  double t19613;
  double t19614;
  double t19619;
  double t19620;
  double t19622;
  double t19623;
  double t19624;
  double t19625;
  double t19626;
  double t19627;
  double t19607;
  double t19615;
  double t19616;
  double t19617;
  double t19621;
  double t19637;
  double t19641;
  double t19645;
  double t19649;
  double t19650;
  double t19651;
  double t19652;
  double t19653;
  double t19654;
  double t19655;
  double t19666;
  double t19671;
  double t19673;
  double t19618;
  double t19663;
  double t19664;
  double t19688;
  double t19689;
  double t19690;
  double t19604;
  double t19605;
  double t19606;
  double t19677;
  double t19681;
  double t19685;
  double t19698;
  double t19700;
  double t19702;
  double t19729;
  double t19730;
  double t19731;
  double t19800;
  double t19801;
  double t19802;
  double t19686;
  double t19815;
  double t19816;
  double t19817;
  double t19711;
  double t19842;
  double t19843;
  double t19846;
  double t19687;
  double t19691;
  double t19692;
  double t19819;
  double t19824;
  double t19820;
  double t19821;
  double t19822;
  double t19838;
  double t19853;
  double t19713;
  double t19715;
  double t19719;
  double t19742;
  double t19755;
  double t19905;
  double t19907;
  double t19916;
  double t19918;
  double t19744;
  double t19745;
  double t19746;
  double t19756;
  double t19757;
  double t19758;
  double t19777;
  double t19790;
  double t19778;
  double t19779;
  double t19780;
  double t19872;
  double t19874;
  double t19960;
  double t19962;
  double t19967;
  double t19969;
  double t19792;
  double t19794;
  double t19795;
  double t19803;
  double t19804;
  double t19805;
  double t19806;
  double t19807;
  double t19808;
  double t19809;
  double t19810;
  double t19811;
  double t19812;
  double t19813;
  double t19814;
  double t19998;
  double t19999;
  double t20000;
  double t19996;
  double t19823;
  double t20005;
  double t20006;
  double t20007;
  double t20009;
  double t20010;
  double t20011;
  double t19848;
  double t19856;
  double t19857;
  double t19861;
  double t19865;
  double t19871;
  double t20012;
  double t19879;
  double t19880;
  double t20016;
  double t19885;
  double t19887;
  double t19890;
  double t19895;
  double t19896;
  double t19897;
  double t19898;
  double t19899;
  double t19900;
  double t19901;
  double t19902;
  double t19903;
  double t19906;
  double t19910;
  double t19911;
  double t19912;
  double t19913;
  double t19917;
  double t19923;
  double t19924;
  double t19925;
  double t19926;
  double t20047;
  double t19931;
  double t19932;
  double t20051;
  double t19937;
  double t19938;
  double t19941;
  double t19942;
  double t19946;
  double t19947;
  double t19948;
  double t19949;
  double t19950;
  double t19951;
  double t19952;
  double t19953;
  double t19954;
  double t19955;
  double t19956;
  double t19957;
  double t19961;
  double t19968;
  double t19972;
  double t19973;
  double t19974;
  double t19975;
  double t19978;
  double t20075;
  double t19981;
  double t19982;
  double t20079;
  double t19987;
  double t19988;
  double t19991;
  double t20095;
  double t20096;
  double t20097;
  double t20107;
  double t20108;
  double t20109;
  double t20113;
  double t20114;
  double t20115;
  double t20117;
  double t20118;
  double t20119;
  double t20127;
  double t20128;
  double t20129;
  double t20130;
  double t20131;
  double t20132;
  double t20133;
  double t20135;
  double t20136;
  double t20137;
  double t20134;
  double t20142;
  double t20143;
  double t20145;
  double t20151;
  double t20152;
  double t20153;
  double t20155;
  double t20156;
  double t20157;
  double t20172;
  double t20175;
  double t20188;
  double t20190;
  double t20183;
  double t20212;
  double t20214;
  double t20106;
  double t20110;
  double t20111;
  double t20219;
  double t19549;
  double t19551;
  double t19552;
  double t20251;
  double t20258;
  double t20260;
  double t20098;
  double t20099;
  double t20100;
  double t20101;
  double t20102;
  double t20103;
  double t20104;
  double t19593;
  double t19594;
  double t19595;
  double t20293;
  double t20294;
  double t20295;
  double t20296;
  double t20297;
  double t20299;
  double t20300;
  double t20301;
  double t20305;
  double t20306;
  double t20307;
  double t20298;
  double t20310;
  double t20311;
  double t20312;
  double t20317;
  double t20318;
  double t20319;
  double t20314;
  double t20316;
  double t20325;
  double t20326;
  double t20327;
  double t20329;
  double t20330;
  double t20331;
  double t20335;
  double t20336;
  double t20337;
  double t20169;
  double t20170;
  double t20178;
  double t20179;
  double t20196;
  double t20197;
  double t20198;
  double t20354;
  double t20206;
  double t20207;
  double t20208;
  double t20358;
  double t20360;
  double t20383;
  double t20388;
  double t20390;
  double t20342;
  double t20343;
  double t20344;
  double t20241;
  double t20242;
  double t20243;
  double t20428;
  double t20434;
  t19282 = Cos(var1[10]);
  t19335 = Cos(var1[11]);
  t19347 = -1.*t19282*t19335;
  t19355 = Sin(var1[10]);
  t19359 = Sin(var1[11]);
  t19367 = -1.*t19355*t19359;
  t19368 = t19347 + t19367;
  t19410 = Cos(var1[9]);
  t17117 = Cos(var1[5]);
  t17120 = Sin(var1[9]);
  t19411 = Sin(var1[5]);
  t19420 = Cos(var1[3]);
  t19396 = t17117*t17120*t19368;
  t19414 = t19410*t19368*t19411;
  t19416 = t19396 + t19414;
  t10018 = Sin(var1[3]);
  t19421 = Cos(var1[4]);
  t19422 = -1.*t19335*t19355;
  t19425 = t19282*t19359;
  t19426 = t19422 + t19425;
  t19428 = t19421*t19426;
  t19522 = Sin(var1[4]);
  t19527 = t19410*t17117*t19368;
  t19528 = -1.*t17120*t19368*t19411;
  t19531 = t19527 + t19528;
  t19536 = -1.*t19522*t19531;
  t19537 = t19428 + t19536;
  t19556 = t17117*t17120;
  t19557 = t19410*t19411;
  t19558 = t19556 + t19557;
  t19561 = -1.*t19410*t17117;
  t19562 = t17120*t19411;
  t19563 = t19561 + t19562;
  t19573 = t17117*t17120*t19426;
  t19574 = t19410*t19426*t19411;
  t19575 = t19573 + t19574;
  t19577 = t19282*t19335;
  t19578 = t19355*t19359;
  t19580 = t19577 + t19578;
  t19582 = t19421*t19580;
  t19583 = t19410*t17117*t19426;
  t19586 = -1.*t17120*t19426*t19411;
  t19587 = t19583 + t19586;
  t19588 = -1.*t19522*t19587;
  t19589 = t19582 + t19588;
  t19598 = -1.*t19426*t19522;
  t19599 = -1.*t19421*t19531;
  t19600 = t19598 + t19599;
  t19609 = -1.*t19335;
  t19610 = 1. + t19609;
  t19611 = -0.50321*t19610;
  t19613 = -0.19821*t19335;
  t19614 = t19611 + t19613;
  t19619 = -1.*t19410;
  t19620 = 1. + t19619;
  t19622 = -1.*t19282;
  t19623 = 1. + t19622;
  t19624 = -0.28121*t19623;
  t19625 = t19282*t19614;
  t19626 = 0.305*t19355*t19359;
  t19627 = t19624 + t19625 + t19626;
  t19607 = 0.28121*t19355;
  t19615 = t19614*t19355;
  t19616 = -0.305*t19282*t19359;
  t19617 = t19607 + t19615 + t19616;
  t19621 = -0.15121*t19620;
  t19637 = t19410*t19627;
  t19641 = t19621 + t19637;
  t19645 = t17117*t19641;
  t19649 = 0.15121*t19620;
  t19650 = 0.15121*t19410;
  t19651 = 0.15121*t17120;
  t19652 = t17120*t19627;
  t19653 = t19649 + t19650 + t19651 + t19652;
  t19654 = -1.*t19653*t19411;
  t19655 = t19645 + t19654;
  t19666 = t19617*t19522;
  t19671 = t19421*t19655;
  t19673 = t19666 + t19671;
  t19618 = -1.*t19617*t19522;
  t19663 = -1.*t19421*t19655;
  t19664 = t19618 + t19663;
  t19688 = t19421*t19617;
  t19689 = -1.*t19522*t19655;
  t19690 = t19688 + t19689;
  t19604 = t19580*t19522;
  t19605 = t19421*t19587;
  t19606 = t19604 + t19605;
  t19677 = t17117*t19653;
  t19681 = t19641*t19411;
  t19685 = t19677 + t19681;
  t19698 = -1.*t19580*t19522;
  t19700 = -1.*t19421*t19587;
  t19702 = t19698 + t19700;
  t19729 = t19426*t19522;
  t19730 = t19421*t19531;
  t19731 = t19729 + t19730;
  t19800 = -1.*t17117*t17120*t19368;
  t19801 = -1.*t19410*t19368*t19411;
  t19802 = t19800 + t19801;
  t19686 = -1.*t19563*t19685;
  t19815 = -1.*t17117*t19653;
  t19816 = -1.*t19641*t19411;
  t19817 = t19815 + t19816;
  t19711 = t19575*t19685;
  t19842 = -1.*t17117*t17120*t19426;
  t19843 = -1.*t19410*t19426*t19411;
  t19846 = t19842 + t19843;
  t19687 = -1.*t19421*t19558*t19673;
  t19691 = t19522*t19558*t19690;
  t19692 = t19686 + t19687 + t19691;
  t19819 = -1.*t19558*t19685;
  t19824 = -1.*t19563*t19655;
  t19820 = t19410*t17117;
  t19821 = -1.*t17120*t19411;
  t19822 = t19820 + t19821;
  t19838 = t19587*t19685;
  t19853 = t19575*t19655;
  t19713 = t19606*t19673;
  t19715 = t19589*t19690;
  t19719 = t19711 + t19713 + t19715;
  t19742 = -1.*t19575*t19685;
  t19755 = t19416*t19685;
  t19905 = -1.*t19587*t19685;
  t19907 = -1.*t19575*t19655;
  t19916 = t19531*t19685;
  t19918 = t19416*t19655;
  t19744 = -1.*t19606*t19673;
  t19745 = -1.*t19589*t19690;
  t19746 = t19742 + t19744 + t19745;
  t19756 = t19731*t19673;
  t19757 = t19537*t19690;
  t19758 = t19755 + t19756 + t19757;
  t19777 = t19563*t19685;
  t19790 = -1.*t19416*t19685;
  t19778 = t19421*t19558*t19673;
  t19779 = -1.*t19522*t19558*t19690;
  t19780 = t19777 + t19778 + t19779;
  t19872 = Power(t19421,2);
  t19874 = Power(t19522,2);
  t19960 = t19558*t19685;
  t19962 = t19563*t19655;
  t19967 = -1.*t19531*t19685;
  t19969 = -1.*t19416*t19655;
  t19792 = -1.*t19731*t19673;
  t19794 = -1.*t19537*t19690;
  t19795 = t19790 + t19792 + t19794;
  t19803 = var2[0]*t19421*t19802;
  t19804 = t10018*t19522*t19802;
  t19805 = t19420*t19531;
  t19806 = t19804 + t19805;
  t19807 = var2[1]*t19806;
  t19808 = -1.*t19420*t19522*t19802;
  t19809 = t10018*t19531;
  t19810 = t19808 + t19809;
  t19811 = var2[2]*t19810;
  t19812 = -1.*t19558*t19655;
  t19813 = t19686 + t19812;
  t19814 = t19587*t19813;
  t19998 = -0.15121*t17120;
  t19999 = -1.*t17120*t19627;
  t20000 = t19998 + t19999;
  t19996 = t19650 + t19637;
  t19823 = -1.*t19822*t19655;
  t20005 = t17117*t20000;
  t20006 = -1.*t19996*t19411;
  t20007 = t20005 + t20006;
  t20009 = t17117*t19996;
  t20010 = t20000*t19411;
  t20011 = t20009 + t20010;
  t19848 = t19846*t19655;
  t19856 = t19617*t19580;
  t19857 = t19587*t19655;
  t19861 = t19856 + t19711 + t19857;
  t19865 = t19558*t19861;
  t19871 = t19421*t19846*t19692;
  t20012 = -1.*t19563*t20011;
  t19879 = -1.*t19421*t19822*t19673;
  t19880 = t19522*t19822*t19690;
  t20016 = t19575*t20011;
  t19885 = t19421*t19846*t19673;
  t19887 = -1.*t19522*t19846*t19690;
  t19890 = t19421*t19822*t19719;
  t19895 = var2[0]*t19421*t19822;
  t19896 = t10018*t19558;
  t19897 = -1.*t19420*t19522*t19822;
  t19898 = t19896 + t19897;
  t19899 = var2[2]*t19898;
  t19900 = t19420*t19558;
  t19901 = t10018*t19522*t19822;
  t19902 = t19900 + t19901;
  t19903 = var2[1]*t19902;
  t19906 = -1.*t19846*t19655;
  t19910 = -1.*t19617*t19580;
  t19911 = -1.*t19587*t19655;
  t19912 = t19910 + t19742 + t19911;
  t19913 = t19531*t19912;
  t19917 = t19802*t19655;
  t19923 = t19617*t19426;
  t19924 = t19531*t19655;
  t19925 = t19923 + t19755 + t19924;
  t19926 = t19587*t19925;
  t20047 = -1.*t19575*t20011;
  t19931 = -1.*t19421*t19846*t19673;
  t19932 = t19522*t19846*t19690;
  t20051 = t19416*t20011;
  t19937 = t19421*t19802*t19673;
  t19938 = -1.*t19522*t19802*t19690;
  t19941 = t19421*t19802*t19746;
  t19942 = t19421*t19846*t19758;
  t19946 = var2[0]*t19421*t19846;
  t19947 = t10018*t19522*t19846;
  t19948 = t19420*t19587;
  t19949 = t19947 + t19948;
  t19950 = var2[1]*t19949;
  t19951 = -1.*t19420*t19522*t19846;
  t19952 = t10018*t19587;
  t19953 = t19951 + t19952;
  t19954 = var2[2]*t19953;
  t19955 = t19558*t19655;
  t19956 = t19777 + t19955;
  t19957 = t19531*t19956;
  t19961 = t19822*t19655;
  t19968 = -1.*t19802*t19655;
  t19972 = -1.*t19617*t19426;
  t19973 = -1.*t19531*t19655;
  t19974 = t19972 + t19790 + t19973;
  t19975 = t19558*t19974;
  t19978 = t19421*t19802*t19780;
  t20075 = t19563*t20011;
  t19981 = t19421*t19822*t19673;
  t19982 = -1.*t19522*t19822*t19690;
  t20079 = -1.*t19416*t20011;
  t19987 = -1.*t19421*t19802*t19673;
  t19988 = t19522*t19802*t19690;
  t19991 = t19421*t19822*t19795;
  t20095 = t19335*t19355;
  t20096 = -1.*t19282*t19359;
  t20097 = t20095 + t20096;
  t20107 = t19410*t17117*t20097;
  t20108 = -1.*t17120*t20097*t19411;
  t20109 = t20107 + t20108;
  t20113 = t17117*t17120*t20097;
  t20114 = t19410*t20097*t19411;
  t20115 = t20113 + t20114;
  t20117 = t19421*t19368;
  t20118 = -1.*t19522*t20109;
  t20119 = t20117 + t20118;
  t20127 = -0.28121*t19355;
  t20128 = -1.*t19614*t19355;
  t20129 = 0.305*t19282*t19359;
  t20130 = t20127 + t20128 + t20129;
  t20131 = t17117*t17120*t20130;
  t20132 = t19410*t20130*t19411;
  t20133 = t20131 + t20132;
  t20135 = t19410*t17117*t20130;
  t20136 = -1.*t17120*t20130*t19411;
  t20137 = t20135 + t20136;
  t20134 = -1.*t19563*t20133;
  t20142 = 0.28121*t19282;
  t20143 = t20142 + t19625 + t19626;
  t20145 = t20133*t19575;
  t20151 = t20143*t19522;
  t20152 = t19421*t20137;
  t20153 = t20151 + t20152;
  t20155 = t19421*t20143;
  t20156 = -1.*t19522*t20137;
  t20157 = t20155 + t20156;
  t20172 = t19617*t19368;
  t20175 = t19426*t20143;
  t20188 = Power(t19410,2);
  t20190 = Power(t17120,2);
  t20183 = -1.*t20143*t19580;
  t20212 = t20133*t19416;
  t20214 = t20115*t19685;
  t20106 = t19368*t19522;
  t20110 = t19421*t20109;
  t20111 = t20106 + t20110;
  t20219 = -1.*t20133*t19575;
  t19549 = t19420*t19416;
  t19551 = -1.*t10018*t19537;
  t19552 = t19549 + t19551;
  t20251 = t19563*t20133;
  t20258 = -1.*t20133*t19416;
  t20260 = -1.*t20115*t19685;
  t20098 = 0.15121*t20097;
  t20099 = 0.15121*t19426;
  t20100 = t20098 + t20099;
  t20101 = var2[9]*t20100;
  t20102 = -1.*t17120*t19641;
  t20103 = t19410*t19653;
  t20104 = t20102 + t20103;
  t19593 = t19420*t19575;
  t19594 = -1.*t10018*t19589;
  t19595 = t19593 + t19594;
  t20293 = 0.305*t19335*t19355;
  t20294 = t20293 + t19616;
  t20295 = t17117*t17120*t20294;
  t20296 = t19410*t20294*t19411;
  t20297 = t20295 + t20296;
  t20299 = t19410*t17117*t20294;
  t20300 = -1.*t17120*t20294*t19411;
  t20301 = t20299 + t20300;
  t20305 = t17117*t17120*t19580;
  t20306 = t19410*t19580*t19411;
  t20307 = t20305 + t20306;
  t20298 = -1.*t19563*t20297;
  t20310 = -0.305*t19282*t19335;
  t20311 = -0.305*t19355*t19359;
  t20312 = t20310 + t20311;
  t20317 = t19410*t17117*t19580;
  t20318 = -1.*t17120*t19580*t19411;
  t20319 = t20317 + t20318;
  t20314 = t20297*t19575;
  t20316 = t20307*t19685;
  t20325 = t20312*t19522;
  t20326 = t19421*t20301;
  t20327 = t20325 + t20326;
  t20329 = t19421*t20312;
  t20330 = -1.*t19522*t20301;
  t20331 = t20329 + t20330;
  t20335 = t20097*t19522;
  t20336 = t19421*t20319;
  t20337 = t20335 + t20336;
  t20169 = t19368*t19627;
  t20170 = t19923 + t20169;
  t20178 = -1.*t19426*t19627;
  t20179 = t20178 + t19910;
  t20196 = -1.*t19410*t19426*t19641;
  t20197 = -1.*t17120*t19426*t19653;
  t20198 = t19910 + t20196 + t20197;
  t20354 = t19426*t20312;
  t20206 = t19410*t19368*t19641;
  t20207 = t17120*t19368*t19653;
  t20208 = t19923 + t20206 + t20207;
  t20358 = -1.*t20097*t19617;
  t20360 = -1.*t20312*t19580;
  t20383 = t20297*t19416;
  t20388 = -1.*t20297*t19575;
  t20390 = -1.*t20307*t19685;
  t20342 = t19421*t20097;
  t20343 = -1.*t19522*t20319;
  t20344 = t20342 + t20343;
  t20241 = t17120*t19641;
  t20242 = -1.*t19410*t19653;
  t20243 = t20241 + t20242;
  t20428 = t19563*t20297;
  t20434 = -1.*t20297*t19416;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t10018*t19416 - 1.*t19420*t19537)*var2[1] + t19552*var2[2];
  p_output1[10]=(t19420*t19522*t19558 - 1.*t10018*t19563)*var2[1] + (t10018*t19522*t19558 + t19420*t19563)*var2[2];
  p_output1[11]=(-1.*t10018*t19575 - 1.*t19420*t19589)*var2[1] + t19595*var2[2];
  p_output1[12]=t19537*var2[0] - 1.*t10018*t19600*var2[1] + t19420*t19600*var2[2] + (t19606*(t19522*t19558*t19664 + t19522*t19558*t19673) + t19589*t19692 + t19421*t19558*(t19589*t19664 + t19589*t19673 + t19606*t19690 + t19690*t19702) - 1.*t19522*t19558*t19719)*var2[3];
  p_output1[13]=-1.*t19522*t19558*var2[0] + t10018*t19421*t19558*var2[1] - 1.*t19420*t19421*t19558*var2[2] + ((-1.*t19589*t19664 - 1.*t19589*t19673 - 1.*t19606*t19690 - 1.*t19690*t19702)*t19731 + t19606*(t19537*t19664 + t19537*t19673 + t19600*t19690 + t19690*t19731) + t19537*t19746 + t19589*t19758)*var2[3];
  p_output1[14]=t19589*var2[0] - 1.*t10018*t19702*var2[1] + t19420*t19702*var2[2] + ((-1.*t19522*t19558*t19664 - 1.*t19522*t19558*t19673)*t19731 + t19421*t19558*(-1.*t19537*t19664 - 1.*t19537*t19673 - 1.*t19600*t19690 - 1.*t19690*t19731) + t19537*t19780 - 1.*t19522*t19558*t19795)*var2[3];
  p_output1[15]=t19803 + t19807 + t19811 + (t19871 + t19606*(t19819 + t19824 - 1.*t19558*t19817*t19872 - 1.*t19558*t19817*t19874 + t19879 + t19880) + t19421*t19558*(-1.*t19522*t19589*t19817 + t19421*t19606*t19817 + t19838 + t19853 + t19885 + t19887) + t19890)*var2[3] + (t19814 + t19575*(-1.*t19558*t19817 + t19819 + t19823 + t19824) + t19563*(t19587*t19817 + t19838 + t19848 + t19853) + t19865)*var2[4];
  p_output1[16]=t19895 + t19899 + t19903 + (t19731*(t19522*t19589*t19817 - 1.*t19421*t19606*t19817 + t19905 + t19907 + t19931 + t19932) + t19606*(-1.*t19522*t19537*t19817 + t19421*t19731*t19817 + t19916 + t19918 + t19937 + t19938) + t19941 + t19942)*var2[3] + (t19416*(-1.*t19587*t19817 + t19905 + t19906 + t19907) + t19913 + t19575*(t19531*t19817 + t19916 + t19917 + t19918) + t19926)*var2[4];
  p_output1[17]=t19946 + t19950 + t19954 + (t19978 + t19731*(t19558*t19817*t19872 + t19558*t19817*t19874 + t19960 + t19962 + t19981 + t19982) + t19421*t19558*(t19522*t19537*t19817 - 1.*t19421*t19731*t19817 + t19967 + t19969 + t19987 + t19988) + t19991)*var2[3] + (t19957 + t19416*(t19558*t19817 + t19960 + t19961 + t19962) + t19563*(-1.*t19531*t19817 + t19967 + t19968 + t19969) + t19975)*var2[4];
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=t19803 + t19807 + t19811 + (t19871 + t19890 + t19606*(t19819 + t19879 + t19880 - 1.*t19558*t19872*t20007 - 1.*t19558*t19874*t20007 + t20012) + t19421*t19558*(t19838 + t19885 + t19887 - 1.*t19522*t19589*t20007 + t19421*t19606*t20007 + t20016))*var2[3] + (t19814 + t19865 + t19575*(t19819 + t19823 - 1.*t19558*t20007 + t20012) + t19563*(t19838 + t19848 + t19587*t20007 + t20016))*var2[4] + t19580*(-1.*t19410*t19641 - 1.*t17120*t19653 + t19410*t19996 - 1.*t17120*t20000)*var2[5];
  p_output1[28]=t19895 + t19899 + t19903 + (t19941 + t19942 + t19731*(t19905 + t19931 + t19932 + t19522*t19589*t20007 - 1.*t19421*t19606*t20007 + t20047) + t19606*(t19916 + t19937 + t19938 - 1.*t19522*t19537*t20007 + t19421*t19731*t20007 + t20051))*var2[3] + (t19913 + t19926 + t19416*(t19905 + t19906 - 1.*t19587*t20007 + t20047) + t19575*(t19916 + t19917 + t19531*t20007 + t20051))*var2[4] + (t19580*(-1.*t17120*t19368*t19641 + t19368*t19410*t19653 + t17120*t19368*t19996 + t19368*t19410*t20000) + t19426*(t17120*t19426*t19641 - 1.*t19410*t19426*t19653 - 1.*t17120*t19426*t19996 - 1.*t19410*t19426*t20000))*var2[5];
  p_output1[29]=t19946 + t19950 + t19954 + (t19978 + t19991 + t19731*(t19960 + t19981 + t19982 + t19558*t19872*t20007 + t19558*t19874*t20007 + t20075) + t19421*t19558*(t19967 + t19987 + t19988 + t19522*t19537*t20007 - 1.*t19421*t19731*t20007 + t20079))*var2[3] + (t19957 + t19975 + t19416*(t19960 + t19961 + t19558*t20007 + t20075) + t19563*(t19967 + t19968 - 1.*t19531*t20007 + t20079))*var2[4] + t19426*(t19410*t19641 + t17120*t19653 - 1.*t19410*t19996 + t17120*t20000)*var2[5];
  p_output1[30]=t20101 + t20111*var2[0] + (t19420*t20115 - 1.*t10018*t20119)*var2[1] + (t10018*t20115 + t19420*t20119)*var2[2] + (t19692*t19731 + t19606*(t20134 - 1.*t19421*t19558*t20153 + t19522*t19558*t20157) + t19421*t19558*(t19755 + t19756 + t19757 + t20145 + t19606*t20153 + t19589*t20157))*var2[3] + (t19416*t19813 + t19575*(t20134 - 1.*t19558*t20137) + t19563*(t19755 + t19923 + t19924 + t19587*t20137 + t19580*t20143 + t20145))*var2[4] + t19426*t20104*var2[5];
  p_output1[31]=(t19731*t19758 + t19746*t20111 + t19606*(t19673*t20111 + t19690*t20119 + t19731*t20153 + t19537*t20157 + t20212 + t20214) + t19731*(t19790 + t19792 + t19794 - 1.*t19606*t20153 - 1.*t19589*t20157 + t20219))*var2[3] + (t19416*t19925 + t19912*t20115 + t19575*(t19655*t20109 + t19531*t20137 + t20172 + t20175 + t20212 + t20214) + t19416*(t19790 + t19972 + t19973 - 1.*t19587*t20137 + t20183 + t20219))*var2[4] + (t19580*(t19410*t19641*t20097 + t17120*t19653*t20097 + t20172 + t20175 + t19368*t20130*t20188 + t19368*t20130*t20190) + t19426*(-1.*t19368*t19410*t19641 - 1.*t17120*t19368*t19653 + t19972 + t20183 - 1.*t19426*t20130*t20188 - 1.*t19426*t20130*t20190) + t19368*t20198 + t19426*t20208)*var2[5] + (t19426*t20170 + t19580*(t19627*t20097 + t19368*t20130 + t20172 + t20175) + t19368*t20179 + t19426*(-1.*t19368*t19627 + t19972 - 1.*t19426*t20130 + t20183))*var2[9];
  p_output1[32]=t19731*var2[0] + t19552*var2[1] + (t10018*t19416 + t19420*t19537)*var2[2] + (t19780*t20111 + t19731*(t19421*t19558*t20153 - 1.*t19522*t19558*t20157 + t20251) + t19421*t19558*(-1.*t19673*t20111 - 1.*t19690*t20119 - 1.*t19731*t20153 - 1.*t19537*t20157 + t20258 + t20260))*var2[3] + (t19956*t20115 + t19416*(t19558*t20137 + t20251) + t19563*(-1.*t19368*t19617 - 1.*t19655*t20109 - 1.*t19531*t20137 - 1.*t19426*t20143 + t20258 + t20260))*var2[4] + t19368*t20243*var2[5];
  p_output1[33]=t20101 + t19606*var2[0] + t19595*var2[1] + (t10018*t19575 + t19420*t19589)*var2[2] + (t19606*(t20298 - 1.*t19421*t19558*t20327 + t19522*t19558*t20331) + t19692*t20337 + t19421*t19558*(t20314 + t20316 + t19606*t20327 + t19589*t20331 + t19673*t20337 + t19690*t20344))*var2[3] + (t19575*(t20298 - 1.*t19558*t20301) + t19813*t20307 + t19563*(t19617*t20097 + t19587*t20301 + t19580*t20312 + t20314 + t20316 + t19655*t20319))*var2[4] + t20097*t20104*var2[5] + (0.28121*t19335 - 0.305*Power(t19335,2) + t19335*t19614)*var2[10];
  p_output1[34]=(t19606*t19746 + t19758*t20337 + t19606*(t19711 + t19713 + t19715 + t19731*t20327 + t19537*t20331 + t20383) + t19731*(-1.*t19606*t20327 - 1.*t19589*t20331 - 1.*t19673*t20337 - 1.*t19690*t20344 + t20388 + t20390))*var2[3] + (t19575*t19912 + t19925*t20307 + t19575*(t19711 + t19856 + t19857 + t19531*t20301 + t20354 + t20383) + t19416*(-1.*t19587*t20301 - 1.*t19655*t20319 + t20358 + t20360 + t20388 + t20390))*var2[4] + (t19580*t20198 + t20097*t20208 + t19580*(t19410*t19426*t19641 + t17120*t19426*t19653 + t19856 + t19368*t20188*t20294 + t19368*t20190*t20294 + t20354) + t19426*(-1.*t19410*t19580*t19641 - 1.*t17120*t19580*t19653 - 1.*t19426*t20188*t20294 - 1.*t19426*t20190*t20294 + t20358 + t20360))*var2[5] + (t20097*t20170 + t19580*t20179 + t19580*(t19426*t19627 + t19856 + t19368*t20294 + t20354) + t19426*(-1.*t19580*t19627 - 1.*t19426*t20294 + t20358 + t20360))*var2[9];
  p_output1[35]=t20337*var2[0] + (t19420*t20307 - 1.*t10018*t20344)*var2[1] + (t10018*t20307 + t19420*t20344)*var2[2] + (t19606*t19780 + t19731*(t19421*t19558*t20327 - 1.*t19522*t19558*t20331 + t20428) + t19421*t19558*(t19742 + t19744 + t19745 - 1.*t19731*t20327 - 1.*t19537*t20331 + t20434))*var2[3] + (t19575*t19956 + t19416*(t19558*t20301 + t20428) + t19563*(t19742 + t19910 + t19911 - 1.*t19531*t20301 - 1.*t19426*t20312 + t20434))*var2[4] + t19580*t20243*var2[5] + (-0.28121*t19359 + 0.305*t19335*t19359 - 1.*t19359*t19614)*var2[10];
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

#include "dJh_RlFoot_ParallelStance2.hh"

namespace SymFunction
{

void dJh_RlFoot_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
