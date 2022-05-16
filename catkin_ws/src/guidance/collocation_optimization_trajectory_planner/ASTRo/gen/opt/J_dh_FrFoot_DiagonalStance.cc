/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:41:46 GMT+02:00
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
  double t2137;
  double t2414;
  double t2420;
  double t2460;
  double t2466;
  double t2489;
  double t2687;
  double t3549;
  double t1397;
  double t2079;
  double t3668;
  double t4683;
  double t2866;
  double t3793;
  double t3868;
  double t991;
  double t5598;
  double t7515;
  double t15262;
  double t15826;
  double t15871;
  double t15946;
  double t17377;
  double t18622;
  double t19445;
  double t19562;
  double t19572;
  double t23249;
  double t23263;
  double t23265;
  double t23447;
  double t23449;
  double t23450;
  double t23520;
  double t23527;
  double t23529;
  double t23534;
  double t23535;
  double t23710;
  double t23711;
  double t23716;
  double t23724;
  double t23774;
  double t23965;
  double t23978;
  double t24006;
  double t23495;
  double t23502;
  double t23515;
  double t23518;
  double t23568;
  double t23679;
  double t23702;
  double t23715;
  double t24096;
  double t24107;
  double t24118;
  double t24138;
  double t24433;
  double t24508;
  double t24554;
  double t24784;
  double t24834;
  double t24842;
  double t23454;
  double t23459;
  double t23470;
  double t24899;
  double t24900;
  double t24903;
  double t24934;
  double t24977;
  double t25025;
  double t23705;
  double t24889;
  double t24897;
  double t25142;
  double t25144;
  double t25145;
  double t23420;
  double t23472;
  double t23481;
  double t25115;
  double t25116;
  double t25124;
  double t25536;
  double t25541;
  double t25542;
  double t25067;
  double t25073;
  double t25089;
  double t25134;
  double t25282;
  double t25285;
  double t25293;
  double t25589;
  double t25596;
  double t25600;
  double t25300;
  double t25644;
  double t25645;
  double t25646;
  double t25141;
  double t25146;
  double t25147;
  double t25615;
  double t25621;
  double t25622;
  double t25624;
  double t25625;
  double t25641;
  double t25653;
  double t25301;
  double t25344;
  double t25345;
  double t25543;
  double t25545;
  double t25550;
  double t25554;
  double t25557;
  double t25558;
  double t25559;
  double t25565;
  double t25569;
  double t25574;
  double t25578;
  double t25584;
  double t26065;
  double t26067;
  double t26069;
  double t26053;
  double t25626;
  double t26092;
  double t26101;
  double t26136;
  double t26154;
  double t26189;
  double t26191;
  double t25650;
  double t25710;
  double t25728;
  double t25775;
  double t25810;
  double t25825;
  double t25829;
  double t25838;
  double t26192;
  double t25850;
  double t25872;
  double t26280;
  double t25907;
  double t26020;
  double t26046;
  double t27230;
  double t27349;
  double t27387;
  double t27438;
  double t27441;
  double t27447;
  double t27497;
  double t27514;
  double t27517;
  double t27548;
  double t27555;
  double t27557;
  double t27730;
  double t27734;
  double t27747;
  double t27774;
  double t27780;
  double t27784;
  double t27762;
  double t27820;
  double t27838;
  double t27883;
  double t27902;
  double t27904;
  double t27918;
  double t27953;
  double t27954;
  double t27957;
  double t27972;
  double t27973;
  double t28006;
  double t28051;
  double t28052;
  double t28055;
  double t26948;
  double t27135;
  double t27152;
  double t28309;
  double t28312;
  double t28322;
  double t28327;
  double t28341;
  double t28346;
  double t28405;
  double t28413;
  double t28423;
  double t28460;
  double t28476;
  double t28492;
  double t28367;
  double t28673;
  double t28702;
  double t28724;
  double t28725;
  double t28727;
  double t28713;
  double t28722;
  double t28759;
  double t28763;
  double t28765;
  double t28775;
  double t28789;
  double t28791;
  double t28942;
  double t28965;
  double t28966;
  double t19896;
  double t20011;
  double t23144;
  double t25161;
  double t25183;
  double t25194;
  double t28069;
  double t28129;
  double t29844;
  double t27816;
  double t27920;
  double t30046;
  double t30064;
  double t30550;
  double t30573;
  double t29845;
  double t29846;
  double t29854;
  double t29882;
  double t29951;
  double t29968;
  double t29971;
  double t29993;
  double t29996;
  double t29997;
  double t30009;
  double t30018;
  double t30023;
  double t30062;
  double t30248;
  double t30249;
  double t30256;
  double t30367;
  double t30572;
  double t30696;
  double t30701;
  double t31854;
  double t30921;
  double t30985;
  double t31968;
  double t31538;
  double t31550;
  double t31569;
  double t31577;
  double t32078;
  double t32084;
  double t32682;
  double t32746;
  double t32435;
  double t32438;
  double t27401;
  double t27473;
  double t27476;
  double t33284;
  double t33503;
  double t33642;
  double t33645;
  double t32073;
  double t32074;
  double t32238;
  double t32243;
  double t32299;
  double t32630;
  double t32636;
  double t32640;
  double t33845;
  double t33860;
  double t32888;
  double t32918;
  double t32925;
  double t34040;
  double t34054;
  double t34058;
  double t28988;
  double t28992;
  double t28994;
  double t29611;
  double t29615;
  double t29664;
  double t28293;
  double t28296;
  double t28297;
  double t33817;
  double t33819;
  double t34310;
  double t33646;
  double t34312;
  double t34315;
  double t34320;
  double t34368;
  double t34369;
  double t34376;
  double t34379;
  double t34338;
  double t34347;
  double t34350;
  double t34351;
  double t34353;
  double t34355;
  double t34357;
  double t34359;
  double t34361;
  double t34362;
  double t34363;
  double t34364;
  double t34365;
  double t34371;
  double t34377;
  double t34384;
  double t34386;
  double t34389;
  double t34426;
  double t34393;
  double t34396;
  double t34431;
  double t34403;
  double t34405;
  double t34410;
  double t29316;
  double t29361;
  double t29578;
  double t34492;
  double t34504;
  double t34506;
  double t34472;
  double t34473;
  double t34474;
  double t34475;
  double t34477;
  double t34479;
  double t34480;
  double t34679;
  double t34701;
  double t28263;
  double t28281;
  double t28291;
  double t28233;
  double t28239;
  t2137 = Cos(var1[13]);
  t2414 = Cos(var1[14]);
  t2420 = t2137*t2414;
  t2460 = Sin(var1[13]);
  t2466 = Sin(var1[14]);
  t2489 = t2460*t2466;
  t2687 = t2420 + t2489;
  t3549 = Cos(var1[12]);
  t1397 = Cos(var1[5]);
  t2079 = Sin(var1[12]);
  t3668 = Sin(var1[5]);
  t4683 = Cos(var1[3]);
  t2866 = t1397*t2079*t2687;
  t3793 = t3549*t2687*t3668;
  t3868 = t2866 + t3793;
  t991 = Sin(var1[3]);
  t5598 = Cos(var1[4]);
  t7515 = -1.*t2414*t2460;
  t15262 = t2137*t2466;
  t15826 = t7515 + t15262;
  t15871 = t5598*t15826;
  t15946 = Sin(var1[4]);
  t17377 = t3549*t1397*t2687;
  t18622 = -1.*t2079*t2687*t3668;
  t19445 = t17377 + t18622;
  t19562 = -1.*t15946*t19445;
  t19572 = t15871 + t19562;
  t23249 = -1.*t15826*t15946;
  t23263 = -1.*t5598*t19445;
  t23265 = t23249 + t23263;
  t23447 = t2414*t2460;
  t23449 = -1.*t2137*t2466;
  t23450 = t23447 + t23449;
  t23520 = -1.*t2414;
  t23527 = 1. + t23520;
  t23529 = 0.50321*t23527;
  t23534 = 0.23321*t2414;
  t23535 = t23529 + t23534;
  t23710 = -1.*t3549;
  t23711 = 1. + t23710;
  t23716 = -1.*t2137;
  t23724 = 1. + t23716;
  t23774 = 0.28121*t23724;
  t23965 = t2137*t23535;
  t23978 = -0.27*t2460*t2466;
  t24006 = t23774 + t23965 + t23978;
  t23495 = -1.*t1397*t2079;
  t23502 = -1.*t3549*t3668;
  t23515 = t23495 + t23502;
  t23518 = 0.28121*t2460;
  t23568 = -1.*t23535*t2460;
  t23679 = -0.27*t2137*t2466;
  t23702 = t23518 + t23568 + t23679;
  t23715 = 0.15121*t23711;
  t24096 = t3549*t24006;
  t24107 = t23715 + t24096;
  t24118 = t1397*t24107;
  t24138 = -0.15121*t23711;
  t24433 = -0.15121*t3549;
  t24508 = -0.15121*t2079;
  t24554 = t2079*t24006;
  t24784 = t24138 + t24433 + t24508 + t24554;
  t24834 = -1.*t24784*t3668;
  t24842 = t24118 + t24834;
  t23454 = t3549*t1397*t23450;
  t23459 = -1.*t2079*t23450*t3668;
  t23470 = t23454 + t23459;
  t24899 = t23702*t15946;
  t24900 = t5598*t24842;
  t24903 = t24899 + t24900;
  t24934 = t5598*t2687;
  t24977 = -1.*t15946*t23470;
  t25025 = t24934 + t24977;
  t23705 = -1.*t23702*t15946;
  t24889 = -1.*t5598*t24842;
  t24897 = t23705 + t24889;
  t25142 = t5598*t23702;
  t25144 = -1.*t15946*t24842;
  t25145 = t25142 + t25144;
  t23420 = t2687*t15946;
  t23472 = t5598*t23470;
  t23481 = t23420 + t23472;
  t25115 = t1397*t24784;
  t25116 = t24107*t3668;
  t25124 = t25115 + t25116;
  t25536 = -1.*t1397*t2079*t2687;
  t25541 = -1.*t3549*t2687*t3668;
  t25542 = t25536 + t25541;
  t25067 = t3549*t1397;
  t25073 = -1.*t2079*t3668;
  t25089 = t25067 + t25073;
  t25134 = -1.*t25089*t25124;
  t25282 = t1397*t2079*t23450;
  t25285 = t3549*t23450*t3668;
  t25293 = t25282 + t25285;
  t25589 = -1.*t1397*t24784;
  t25596 = -1.*t24107*t3668;
  t25600 = t25589 + t25596;
  t25300 = t25293*t25124;
  t25644 = -1.*t1397*t2079*t23450;
  t25645 = -1.*t3549*t23450*t3668;
  t25646 = t25644 + t25645;
  t25141 = -1.*t5598*t23515*t24903;
  t25146 = t15946*t23515*t25145;
  t25147 = t25134 + t25141 + t25146;
  t25615 = -1.*t23515*t25124;
  t25621 = -1.*t25089*t24842;
  t25622 = -1.*t3549*t1397;
  t25624 = t2079*t3668;
  t25625 = t25622 + t25624;
  t25641 = t23470*t25124;
  t25653 = t25293*t24842;
  t25301 = t23481*t24903;
  t25344 = t25025*t25145;
  t25345 = t25300 + t25301 + t25344;
  t25543 = var2[0]*t5598*t25542;
  t25545 = t991*t15946*t25542;
  t25550 = t4683*t19445;
  t25554 = t25545 + t25550;
  t25557 = var2[1]*t25554;
  t25558 = -1.*t4683*t15946*t25542;
  t25559 = t991*t19445;
  t25565 = t25558 + t25559;
  t25569 = var2[2]*t25565;
  t25574 = -1.*t23515*t24842;
  t25578 = t25134 + t25574;
  t25584 = t23470*t25578;
  t26065 = 0.15121*t2079;
  t26067 = -1.*t2079*t24006;
  t26069 = t26065 + t26067;
  t26053 = t24433 + t24096;
  t25626 = -1.*t25625*t24842;
  t26092 = t1397*t26069;
  t26101 = -1.*t26053*t3668;
  t26136 = t26092 + t26101;
  t26154 = t1397*t26053;
  t26189 = t26069*t3668;
  t26191 = t26154 + t26189;
  t25650 = t25646*t24842;
  t25710 = t23702*t2687;
  t25728 = t23470*t24842;
  t25775 = t25710 + t25300 + t25728;
  t25810 = t23515*t25775;
  t25825 = t5598*t25646*t25147;
  t25829 = Power(t5598,2);
  t25838 = Power(t15946,2);
  t26192 = -1.*t25089*t26191;
  t25850 = -1.*t5598*t25625*t24903;
  t25872 = t15946*t25625*t25145;
  t26280 = t25293*t26191;
  t25907 = t5598*t25646*t24903;
  t26020 = -1.*t15946*t25646*t25145;
  t26046 = t5598*t25625*t25345;
  t27230 = -1.*t2137*t2414;
  t27349 = -1.*t2460*t2466;
  t27387 = t27230 + t27349;
  t27438 = t3549*t1397*t15826;
  t27441 = -1.*t2079*t15826*t3668;
  t27447 = t27438 + t27441;
  t27497 = t1397*t2079*t15826;
  t27514 = t3549*t15826*t3668;
  t27517 = t27497 + t27514;
  t27548 = t5598*t27387;
  t27555 = -1.*t15946*t27447;
  t27557 = t27548 + t27555;
  t27730 = t1397*t2079*t23702;
  t27734 = t3549*t23702*t3668;
  t27747 = t27730 + t27734;
  t27774 = t3549*t1397*t23702;
  t27780 = -1.*t2079*t23702*t3668;
  t27784 = t27774 + t27780;
  t27762 = -1.*t25089*t27747;
  t27820 = 0.28121*t2137;
  t27838 = -1.*t2137*t23535;
  t27883 = 0.27*t2460*t2466;
  t27902 = t27820 + t27838 + t27883;
  t27904 = t25293*t27747;
  t27918 = t3868*t25124;
  t27953 = t27902*t15946;
  t27954 = t5598*t27784;
  t27957 = t27953 + t27954;
  t27972 = t5598*t27902;
  t27973 = -1.*t15946*t27784;
  t28006 = t27972 + t27973;
  t28051 = t15826*t15946;
  t28052 = t5598*t19445;
  t28055 = t28051 + t28052;
  t26948 = t2079*t24107;
  t27135 = -1.*t3549*t24784;
  t27152 = t26948 + t27135;
  t28309 = -0.27*t2414*t2460;
  t28312 = 0.27*t2137*t2466;
  t28322 = t28309 + t28312;
  t28327 = t1397*t2079*t28322;
  t28341 = t3549*t28322*t3668;
  t28346 = t28327 + t28341;
  t28405 = t3549*t1397*t28322;
  t28413 = -1.*t2079*t28322*t3668;
  t28423 = t28405 + t28413;
  t28460 = t1397*t2079*t27387;
  t28476 = t3549*t27387*t3668;
  t28492 = t28460 + t28476;
  t28367 = -1.*t25089*t28346;
  t28673 = -0.27*t2137*t2414;
  t28702 = t28673 + t23978;
  t28724 = t3549*t1397*t27387;
  t28725 = -1.*t2079*t27387*t3668;
  t28727 = t28724 + t28725;
  t28713 = t25293*t28346;
  t28722 = t28492*t25124;
  t28759 = t28702*t15946;
  t28763 = t5598*t28423;
  t28765 = t28759 + t28763;
  t28775 = t5598*t28702;
  t28789 = -1.*t15946*t28423;
  t28791 = t28775 + t28789;
  t28942 = t23450*t15946;
  t28965 = t5598*t28727;
  t28966 = t28942 + t28965;
  t19896 = t4683*t3868;
  t20011 = -1.*t991*t19572;
  t23144 = t19896 + t20011;
  t25161 = -1.*t2687*t15946;
  t25183 = -1.*t5598*t23470;
  t25194 = t25161 + t25183;
  t28069 = t28055*t24903;
  t28129 = t19572*t25145;
  t29844 = -1.*t25293*t25124;
  t27816 = t23702*t15826;
  t27920 = t19445*t24842;
  t30046 = -1.*t23470*t25124;
  t30064 = -1.*t25293*t24842;
  t30550 = t19445*t25124;
  t30573 = t3868*t24842;
  t29845 = -1.*t23481*t24903;
  t29846 = -1.*t25025*t25145;
  t29854 = t29844 + t29845 + t29846;
  t29882 = t27918 + t28069 + t28129;
  t29951 = var2[0]*t5598*t25625;
  t29968 = t991*t23515;
  t29971 = -1.*t4683*t15946*t25625;
  t29993 = t29968 + t29971;
  t29996 = var2[2]*t29993;
  t29997 = t4683*t23515;
  t30009 = t991*t15946*t25625;
  t30018 = t29997 + t30009;
  t30023 = var2[1]*t30018;
  t30062 = -1.*t25646*t24842;
  t30248 = -1.*t23702*t2687;
  t30249 = -1.*t23470*t24842;
  t30256 = t30248 + t29844 + t30249;
  t30367 = t19445*t30256;
  t30572 = t25542*t24842;
  t30696 = t27816 + t27918 + t27920;
  t30701 = t23470*t30696;
  t31854 = -1.*t25293*t26191;
  t30921 = -1.*t5598*t25646*t24903;
  t30985 = t15946*t25646*t25145;
  t31968 = t3868*t26191;
  t31538 = t5598*t25542*t24903;
  t31550 = -1.*t15946*t25542*t25145;
  t31569 = t5598*t25542*t29854;
  t31577 = t5598*t25646*t29882;
  t32078 = t23702*t27387;
  t32084 = t15826*t27902;
  t32682 = Power(t3549,2);
  t32746 = Power(t2079,2);
  t32435 = -1.*t23702*t15826;
  t32438 = -1.*t27902*t2687;
  t27401 = t27387*t15946;
  t27473 = t5598*t27447;
  t27476 = t27401 + t27473;
  t33284 = t27747*t3868;
  t33503 = t27517*t25124;
  t33642 = -1.*t25293*t27747;
  t33645 = -1.*t3868*t25124;
  t32073 = -1.*t23450*t24006;
  t32074 = t32073 + t30248;
  t32238 = t24006*t2687;
  t32243 = t27816 + t32238;
  t32299 = -1.*t23450*t23702;
  t32630 = -1.*t3549*t23450*t24107;
  t32636 = -1.*t2079*t23450*t24784;
  t32640 = t30248 + t32630 + t32636;
  t33845 = t15826*t28702;
  t33860 = -1.*t28702*t2687;
  t32888 = t3549*t2687*t24107;
  t32918 = t2079*t2687*t24784;
  t32925 = t27816 + t32888 + t32918;
  t34040 = t28346*t3868;
  t34054 = -1.*t25293*t28346;
  t34058 = -1.*t28492*t25124;
  t28988 = t5598*t23450;
  t28992 = -1.*t15946*t28727;
  t28994 = t28988 + t28992;
  t29611 = t991*t15946*t23515;
  t29615 = t4683*t25089;
  t29664 = t29611 + t29615;
  t28293 = t4683*t25293;
  t28296 = -1.*t991*t25025;
  t28297 = t28293 + t28296;
  t33817 = -1.*t28055*t24903;
  t33819 = -1.*t19572*t25145;
  t34310 = t25089*t25124;
  t33646 = -1.*t19445*t24842;
  t34312 = t5598*t23515*t24903;
  t34315 = -1.*t15946*t23515*t25145;
  t34320 = t34310 + t34312 + t34315;
  t34368 = t23515*t25124;
  t34369 = t25089*t24842;
  t34376 = -1.*t19445*t25124;
  t34379 = -1.*t3868*t24842;
  t34338 = t33645 + t33817 + t33819;
  t34347 = var2[0]*t5598*t25646;
  t34350 = t991*t15946*t25646;
  t34351 = t4683*t23470;
  t34353 = t34350 + t34351;
  t34355 = var2[1]*t34353;
  t34357 = -1.*t4683*t15946*t25646;
  t34359 = t991*t23470;
  t34361 = t34357 + t34359;
  t34362 = var2[2]*t34361;
  t34363 = t23515*t24842;
  t34364 = t34310 + t34363;
  t34365 = t19445*t34364;
  t34371 = t25625*t24842;
  t34377 = -1.*t25542*t24842;
  t34384 = t32435 + t33645 + t33646;
  t34386 = t23515*t34384;
  t34389 = t5598*t25542*t34320;
  t34426 = t25089*t26191;
  t34393 = t5598*t25625*t24903;
  t34396 = -1.*t15946*t25625*t25145;
  t34431 = -1.*t3868*t26191;
  t34403 = -1.*t5598*t25542*t24903;
  t34405 = t15946*t25542*t25145;
  t34410 = t5598*t25625*t34338;
  t29316 = t991*t3868;
  t29361 = t4683*t19572;
  t29578 = t29316 + t29361;
  t34492 = t25089*t27747;
  t34504 = -1.*t27747*t3868;
  t34506 = -1.*t27517*t25124;
  t34472 = -0.15121*t27387;
  t34473 = -0.15121*t2687;
  t34474 = t34472 + t34473;
  t34475 = var2[12]*t34474;
  t34477 = -1.*t2079*t24107;
  t34479 = t3549*t24784;
  t34480 = t34477 + t34479;
  t34679 = t25089*t28346;
  t34701 = -1.*t28346*t3868;
  t28263 = t991*t25293;
  t28281 = t4683*t25025;
  t28291 = t28263 + t28281;
  t28233 = 0.28121*t2414;
  t28239 = -1.*t23535*t2414;
  p_output1[0]=(-1.*t19572*t4683 - 1.*t3868*t991)*var2[1] + t23144*var2[2];
  p_output1[1]=t19572*var2[0] - 1.*t23265*t991*var2[1] + t23265*t4683*var2[2] + (t23481*(t15946*t23515*t24897 + t15946*t23515*t24903) + t25025*t25147 - 1.*t15946*t23515*t25345 + t23515*(t24897*t25025 + t24903*t25025 + t23481*t25145 + t25145*t25194)*t5598)*var2[3];
  p_output1[2]=t25543 + t25557 + t25569 + (t25825 + t23481*(t25615 + t25621 - 1.*t23515*t25600*t25829 - 1.*t23515*t25600*t25838 + t25850 + t25872) + t26046 + t23515*t5598*(-1.*t15946*t25025*t25600 + t25641 + t25653 + t25907 + t26020 + t23481*t25600*t5598))*var2[3] + (t25584 + t25293*(-1.*t23515*t25600 + t25615 + t25621 + t25626) + t25089*(t23470*t25600 + t25641 + t25650 + t25653) + t25810)*var2[4];
  p_output1[3]=t25543 + t25557 + t25569 + (t25825 + t26046 + t23481*(t25615 + t25850 + t25872 - 1.*t23515*t25829*t26136 - 1.*t23515*t25838*t26136 + t26192) + t23515*t5598*(t25641 + t25907 + t26020 - 1.*t15946*t25025*t26136 + t26280 + t23481*t26136*t5598))*var2[3] + (t25584 + t25810 + t25293*(t25615 + t25626 - 1.*t23515*t26136 + t26192) + t25089*(t25641 + t25650 + t23470*t26136 + t26280))*var2[4] + t2687*(t2079*t24784 + t2079*t26069 + t24107*t3549 - 1.*t26053*t3549)*var2[5];
  p_output1[4]=t27476*var2[0] + (t27517*t4683 - 1.*t27557*t991)*var2[1] + (t27557*t4683 + t27517*t991)*var2[2] + (t25147*t28055 + t23515*(t27904 + t27918 + t23481*t27957 + t25025*t28006 + t28069 + t28129)*t5598 + t23481*(t27762 + t15946*t23515*t28006 - 1.*t23515*t27957*t5598))*var2[3] + (t25293*(t27762 - 1.*t23515*t27784) + t25089*(t23470*t27784 + t27816 + t2687*t27902 + t27904 + t27918 + t27920) + t25578*t3868)*var2[4] + t15826*t27152*var2[5];
  p_output1[5]=t23481*var2[0] + t28297*var2[1] + t28291*var2[2] + (t25147*t28966 + t23515*(t28713 + t28722 + t23481*t28765 + t25025*t28791 + t24903*t28966 + t25145*t28994)*t5598 + t23481*(t28367 + t15946*t23515*t28791 - 1.*t23515*t28765*t5598))*var2[3] + (t25293*(t28367 - 1.*t23515*t28423) + t25578*t28492 + t25089*(t23450*t23702 + t23470*t28423 + t2687*t28702 + t28713 + t28722 + t24842*t28727))*var2[4] + t23450*t27152*var2[5] + (-0.27*Power(t2414,2) + t28233 + t28239)*var2[13];
  p_output1[6]=t28055;
  p_output1[7]=t23144;
  p_output1[8]=t29578;
  p_output1[9]=t23481*t25147 + t23515*t25345*t5598;
  p_output1[10]=t25293*t25578 + t25089*t25775;
  p_output1[11]=t2687*t27152;
  p_output1[12]=0.28121*t2466 - 1.*t23535*t2466 - 0.27*t2414*t2466;
  p_output1[13]=(t15946*t23515*t4683 - 1.*t25089*t991)*var2[1] + t29664*var2[2];
  p_output1[14]=-1.*t15946*t23515*var2[0] + t23515*t5598*t991*var2[1] - 1.*t23515*t4683*t5598*var2[2] + ((-1.*t24897*t25025 - 1.*t24903*t25025 - 1.*t23481*t25145 - 1.*t25145*t25194)*t28055 + t23481*(t19572*t24897 + t19572*t24903 + t23265*t25145 + t25145*t28055) + t19572*t29854 + t25025*t29882)*var2[3];
  p_output1[15]=t29951 + t29996 + t30023 + (t31569 + t31577 + t28055*(t15946*t25025*t25600 + t30046 + t30064 + t30921 + t30985 - 1.*t23481*t25600*t5598) + t23481*(-1.*t15946*t19572*t25600 + t30550 + t30573 + t31538 + t31550 + t25600*t28055*t5598))*var2[3] + (t30367 + t25293*(t19445*t25600 + t30550 + t30572 + t30573) + t30701 + (-1.*t23470*t25600 + t30046 + t30062 + t30064)*t3868)*var2[4];
  p_output1[16]=t29951 + t29996 + t30023 + (t31569 + t31577 + t28055*(t15946*t25025*t26136 + t30046 + t30921 + t30985 + t31854 - 1.*t23481*t26136*t5598) + t23481*(-1.*t15946*t19572*t26136 + t30550 + t31538 + t31550 + t31968 + t26136*t28055*t5598))*var2[3] + (t30367 + t30701 + t25293*(t19445*t26136 + t30550 + t30572 + t31968) + (-1.*t23470*t26136 + t30046 + t30062 + t31854)*t3868)*var2[4] + (t15826*(t2079*t23450*t24107 - 1.*t2079*t23450*t26053 - 1.*t23450*t24784*t3549 - 1.*t23450*t26069*t3549) + t2687*(-1.*t2079*t24107*t2687 + t2079*t26053*t2687 + t24784*t2687*t3549 + t26069*t2687*t3549))*var2[5];
  p_output1[17]=(t27476*t29854 + t28055*t29882 + t23481*(t24903*t27476 + t25145*t27557 + t19572*t28006 + t27957*t28055 + t33284 + t33503) + t28055*(-1.*t23481*t27957 - 1.*t25025*t28006 + t33642 + t33645 + t33817 + t33819))*var2[3] + (t27517*t30256 + t25293*(t24842*t27447 + t19445*t27784 + t32078 + t32084 + t33284 + t33503) + t30696*t3868 + (-1.*t23470*t27784 + t32435 + t32438 + t33642 + t33645 + t33646)*t3868)*var2[4] + (t27387*t32640 + t15826*t32925 + t2687*(t15826*t2079*t24784 + t32078 + t32084 + t23702*t2687*t32682 + t23702*t2687*t32746 + t15826*t24107*t3549) + t15826*(-1.*t2079*t24784*t2687 + t32435 + t32438 - 1.*t23450*t23702*t32682 - 1.*t23450*t23702*t32746 - 1.*t24107*t2687*t3549))*var2[5] + (t27387*t32074 + t2687*(t15826*t24006 + t25710 + t32078 + t32084) + t15826*t32243 + t15826*(-1.*t24006*t2687 + t32299 + t32435 + t32438))*var2[12];
  p_output1[18]=(t23481*t29854 + t28966*t29882 + t23481*(t25300 + t25301 + t25344 + t28055*t28765 + t19572*t28791 + t34040) + t28055*(-1.*t23481*t28765 - 1.*t25025*t28791 - 1.*t24903*t28966 - 1.*t25145*t28994 + t34054 + t34058))*var2[3] + (t25293*t30256 + t28492*t30696 + t25293*(t25300 + t25710 + t25728 + t19445*t28423 + t33845 + t34040) + (-1.*t23470*t28423 - 1.*t24842*t28727 + t32299 + t33860 + t34054 + t34058)*t3868)*var2[4] + (t2687*t32640 + t23450*t32925 + t2687*(t2079*t23450*t24784 + t25710 + t2687*t28322*t32682 + t2687*t28322*t32746 + t33845 + t23450*t24107*t3549) + t15826*(-1.*t2079*t24784*t27387 + t32299 - 1.*t23450*t28322*t32682 - 1.*t23450*t28322*t32746 + t33860 - 1.*t24107*t27387*t3549))*var2[5] + (t2687*t32074 + t23450*t32243 + t2687*(t23450*t24006 + t25710 + t2687*t28322 + t33845) + t15826*(-1.*t24006*t27387 - 1.*t23450*t28322 + t32299 + t33860))*var2[12];
  p_output1[19]=t23515*t5598;
  p_output1[20]=t29664;
  p_output1[21]=-1.*t15946*t23515*t4683 + t25089*t991;
  p_output1[22]=t28055*t29854 + t23481*t29882;
  p_output1[23]=t25293*t30696 + t30256*t3868;
  p_output1[24]=t15826*t32640 + t2687*t32925;
  p_output1[25]=-0.15121 + t15826*t32074 + t2687*t32243;
  p_output1[26]=(-1.*t25025*t4683 - 1.*t25293*t991)*var2[1] + t28297*var2[2];
  p_output1[27]=t25025*var2[0] - 1.*t25194*t991*var2[1] + t25194*t4683*var2[2] + ((-1.*t15946*t23515*t24897 - 1.*t15946*t23515*t24903)*t28055 + t19572*t34320 - 1.*t15946*t23515*t34338 + t23515*(-1.*t19572*t24897 - 1.*t19572*t24903 - 1.*t23265*t25145 - 1.*t25145*t28055)*t5598)*var2[3];
  p_output1[28]=t34347 + t34355 + t34362 + (t34389 + t28055*(t23515*t25600*t25829 + t23515*t25600*t25838 + t34368 + t34369 + t34393 + t34396) + t34410 + t23515*t5598*(t15946*t19572*t25600 + t34376 + t34379 + t34403 + t34405 - 1.*t25600*t28055*t5598))*var2[3] + (t34365 + t25089*(-1.*t19445*t25600 + t34376 + t34377 + t34379) + t34386 + (t23515*t25600 + t34368 + t34369 + t34371)*t3868)*var2[4];
  p_output1[29]=t34347 + t34355 + t34362 + (t34389 + t34410 + t28055*(t23515*t25829*t26136 + t23515*t25838*t26136 + t34368 + t34393 + t34396 + t34426) + t23515*t5598*(t15946*t19572*t26136 + t34376 + t34403 + t34405 + t34431 - 1.*t26136*t28055*t5598))*var2[3] + (t34365 + t34386 + t25089*(-1.*t19445*t26136 + t34376 + t34377 + t34431) + (t23515*t26136 + t34368 + t34371 + t34426)*t3868)*var2[4] + t15826*(-1.*t2079*t24784 - 1.*t2079*t26069 - 1.*t24107*t3549 + t26053*t3549)*var2[5];
  p_output1[30]=t34475 + t28055*var2[0] + t23144*var2[1] + t29578*var2[2] + (t27476*t34320 + t23515*(-1.*t24903*t27476 - 1.*t25145*t27557 - 1.*t19572*t28006 - 1.*t27957*t28055 + t34504 + t34506)*t5598 + t28055*(-1.*t15946*t23515*t28006 + t34492 + t23515*t27957*t5598))*var2[3] + (t27517*t34364 + t25089*(-1.*t23702*t27387 - 1.*t24842*t27447 - 1.*t19445*t27784 - 1.*t15826*t27902 + t34504 + t34506) + (t23515*t27784 + t34492)*t3868)*var2[4] + t27387*t34480*var2[5];
  p_output1[31]=t34475 + t28966*var2[0] + (t28492*t4683 - 1.*t28994*t991)*var2[1] + (t28994*t4683 + t28492*t991)*var2[2] + (t23481*t34320 + t23515*(-1.*t28055*t28765 - 1.*t19572*t28791 + t29844 + t29845 + t29846 + t34701)*t5598 + t28055*(-1.*t15946*t23515*t28791 + t34679 + t23515*t28765*t5598))*var2[3] + (t25293*t34364 + t25089*(-1.*t19445*t28423 - 1.*t15826*t28702 + t29844 + t30248 + t30249 + t34701) + (t23515*t28423 + t34679)*t3868)*var2[4] + t2687*t34480*var2[5] + (-0.28121*t2466 + t23535*t2466 + 0.27*t2414*t2466)*var2[13];
  p_output1[32]=t23481;
  p_output1[33]=t28297;
  p_output1[34]=t28291;
  p_output1[35]=t28055*t34320 + t23515*t34338*t5598;
  p_output1[36]=t25089*t34384 + t34364*t3868;
  p_output1[37]=t15826*t34480;
  p_output1[38]=-0.15121*t15826 - 0.15121*t23450;
  p_output1[39]=0.27*Power(t2466,2) + t28233 + t28239;
  p_output1[40]=-0.27;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 41, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_dh_FrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void J_dh_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
