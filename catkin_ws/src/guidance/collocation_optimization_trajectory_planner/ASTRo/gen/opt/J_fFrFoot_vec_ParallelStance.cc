/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:43:05 GMT+02:00
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
  double t4444;
  double t29870;
  double t22855;
  double t31527;
  double t31617;
  double t31348;
  double t32607;
  double t24358;
  double t32862;
  double t32866;
  double t34227;
  double t29927;
  double t30772;
  double t31559;
  double t32803;
  double t32849;
  double t38191;
  double t38192;
  double t38202;
  double t38264;
  double t38294;
  double t38299;
  double t38301;
  double t38308;
  double t38315;
  double t38318;
  double t38320;
  double t38323;
  double t38367;
  double t35066;
  double t35074;
  double t35097;
  double t35462;
  double t38029;
  double t38156;
  double t34252;
  double t34291;
  double t35026;
  double t38540;
  double t40219;
  double t40705;
  double t40967;
  double t40978;
  double t40984;
  double t27405;
  double t29970;
  double t30145;
  double t40999;
  double t41003;
  double t41007;
  double t42892;
  double t42155;
  double t32858;
  double t35027;
  double t35038;
  double t35162;
  double t38164;
  double t38173;
  double t43039;
  double t43041;
  double t43043;
  double t43044;
  double t43045;
  double t43047;
  double t43048;
  double t43049;
  double t43051;
  double t43053;
  double t43054;
  double t43055;
  double t43057;
  double t40789;
  double t40945;
  double t40947;
  double t43014;
  double t43015;
  double t43017;
  double t42932;
  double t42943;
  double t42977;
  double t41097;
  double t41162;
  double t41164;
  double t43141;
  double t43142;
  double t43147;
  double t42894;
  double t42895;
  double t42901;
  double t43169;
  double t43183;
  double t43223;
  double t43241;
  double t43243;
  double t43244;
  double t43027;
  double t43028;
  double t43029;
  double t43033;
  double t43034;
  double t43035;
  double t43257;
  double t43258;
  double t43259;
  double t43261;
  double t43263;
  double t43264;
  double t43265;
  double t43267;
  double t43268;
  double t43270;
  double t43273;
  double t43275;
  double t43276;
  double t43058;
  double t43059;
  double t43061;
  double t43064;
  double t43065;
  double t43135;
  double t43225;
  double t43227;
  double t43228;
  double t43231;
  double t43233;
  double t43234;
  double t43284;
  double t43315;
  double t43355;
  double t43388;
  double t43392;
  double t43393;
  double t43412;
  double t43415;
  double t43416;
  double t43417;
  double t43420;
  double t43452;
  double t43453;
  double t43458;
  double t43460;
  double t43461;
  double t43463;
  double t43465;
  double t43466;
  double t43411;
  double t43422;
  double t43423;
  double t43424;
  double t43456;
  double t43468;
  double t43470;
  double t43471;
  double t43472;
  double t43476;
  double t43477;
  double t43478;
  double t43481;
  double t43482;
  double t43483;
  double t43508;
  double t43519;
  double t43524;
  double t43448;
  double t43485;
  double t43486;
  double t43654;
  double t43656;
  double t43657;
  double t43548;
  double t43560;
  double t43595;
  double t43652;
  double t43653;
  double t43658;
  double t43660;
  double t43742;
  double t43743;
  double t43744;
  double t43670;
  double t43672;
  double t43673;
  double t43674;
  double t43685;
  double t43686;
  double t43688;
  double t43689;
  double t43741;
  double t43747;
  double t43700;
  double t43701;
  double t43702;
  double t43704;
  double t43717;
  double t43718;
  double t43720;
  double t43722;
  double t43730;
  double t43731;
  double t43732;
  double t43733;
  double t43739;
  double t43749;
  double t43862;
  double t43863;
  double t43868;
  double t43870;
  double t43873;
  double t43874;
  double t43885;
  double t43751;
  double t43752;
  double t43755;
  double t43915;
  double t43916;
  double t43917;
  double t43759;
  double t43760;
  double t43764;
  double t43768;
  double t43772;
  double t43774;
  double t43775;
  double t43779;
  double t43784;
  double t43785;
  double t43789;
  double t43793;
  double t43798;
  double t43799;
  double t43802;
  double t43808;
  double t43810;
  double t43813;
  double t43814;
  double t43959;
  double t43960;
  double t43961;
  double t43962;
  double t43964;
  double t43965;
  double t43966;
  double t40723;
  double t40951;
  double t40953;
  double t43954;
  double t43955;
  double t43957;
  double t43963;
  double t43967;
  double t43969;
  double t43971;
  double t43972;
  double t43973;
  double t44043;
  double t44044;
  double t44045;
  double t44050;
  double t44052;
  double t44054;
  double t44055;
  double t44056;
  double t44046;
  double t44047;
  double t44048;
  double t44053;
  double t44057;
  double t44058;
  double t44072;
  double t44076;
  double t44077;
  double t41023;
  double t41167;
  double t41168;
  double t43750;
  double t43756;
  double t43773;
  double t43780;
  double t43794;
  double t43803;
  double t44162;
  double t44163;
  double t44164;
  double t43918;
  double t44166;
  double t43921;
  double t44170;
  double t44173;
  double t44174;
  double t44175;
  double t44176;
  double t44179;
  double t44180;
  double t44181;
  double t43930;
  double t44183;
  double t43933;
  double t44188;
  double t44191;
  double t44192;
  double t44193;
  double t44194;
  double t43940;
  double t44199;
  double t44203;
  double t44204;
  double t44205;
  double t44206;
  double t43946;
  double t44208;
  double t44212;
  double t44213;
  double t44214;
  double t44215;
  double t43958;
  double t43978;
  double t43979;
  double t43990;
  double t43991;
  double t43998;
  double t44006;
  double t44015;
  double t44049;
  double t44082;
  double t44089;
  double t44107;
  double t44112;
  double t44134;
  double t44140;
  double t44141;
  double t44259;
  double t44260;
  double t44383;
  double t44385;
  double t44266;
  double t44368;
  double t44369;
  double t44371;
  double t44373;
  double t44374;
  double t44375;
  double t44377;
  double t44379;
  double t44381;
  double t44310;
  double t44314;
  double t44316;
  double t44399;
  double t44401;
  double t44402;
  double t44436;
  double t44437;
  double t44438;
  double t44439;
  double t44440;
  double t44441;
  double t44446;
  double t44447;
  double t44477;
  double t44478;
  t4444 = Sin(var1[4]);
  t29870 = Cos(var1[12]);
  t22855 = Cos(var1[5]);
  t31527 = Cos(var1[14]);
  t31617 = Sin(var1[13]);
  t31348 = Cos(var1[13]);
  t32607 = Sin(var1[14]);
  t24358 = Sin(var1[12]);
  t32862 = t31527*t31617;
  t32866 = -1.*t31348*t32607;
  t34227 = t32862 + t32866;
  t29927 = Sin(var1[5]);
  t30772 = Cos(var1[4]);
  t31559 = t31348*t31527;
  t32803 = t31617*t32607;
  t32849 = t31559 + t32803;
  t38191 = -1.*t29870*t22855;
  t38192 = t24358*t29927;
  t38202 = t38191 + t38192;
  t38264 = var2[1]*t30772*t38202;
  t38294 = -1.*t22855*t24358*t34227;
  t38299 = -1.*t29870*t34227*t29927;
  t38301 = t38294 + t38299;
  t38308 = var2[2]*t30772*t38301;
  t38315 = -1.*t22855*t24358*t32849;
  t38318 = -1.*t29870*t32849*t29927;
  t38320 = t38315 + t38318;
  t38323 = var2[0]*t30772*t38320;
  t38367 = t38264 + t38308 + t38323;
  t35066 = -1.*t31527*t31617;
  t35074 = t31348*t32607;
  t35097 = t35066 + t35074;
  t35462 = t29870*t22855*t32849;
  t38029 = -1.*t24358*t32849*t29927;
  t38156 = t35462 + t38029;
  t34252 = t29870*t22855*t34227;
  t34291 = -1.*t24358*t34227*t29927;
  t35026 = t34252 + t34291;
  t38540 = -1.*t31348*t31527;
  t40219 = -1.*t31617*t32607;
  t40705 = t38540 + t40219;
  t40967 = t35097*t4444;
  t40978 = t30772*t38156;
  t40984 = t40967 + t40978;
  t27405 = -1.*t22855*t24358;
  t29970 = -1.*t29870*t29927;
  t30145 = t27405 + t29970;
  t40999 = t32849*t4444;
  t41003 = t30772*t35026;
  t41007 = t40999 + t41003;
  t42892 = Sin(var1[3]);
  t42155 = Cos(var1[3]);
  t32858 = t30772*t32849;
  t35027 = -1.*t4444*t35026;
  t35038 = t32858 + t35027;
  t35162 = t30772*t35097;
  t38164 = -1.*t4444*t38156;
  t38173 = t35162 + t38164;
  t43039 = t42155*t30145;
  t43041 = t42892*t4444*t38202;
  t43043 = t43039 + t43041;
  t43044 = var2[1]*t43043;
  t43045 = t42892*t4444*t38301;
  t43047 = t42155*t35026;
  t43048 = t43045 + t43047;
  t43049 = var2[2]*t43048;
  t43051 = t42892*t4444*t38320;
  t43053 = t42155*t38156;
  t43054 = t43051 + t43053;
  t43055 = var2[0]*t43054;
  t43057 = t43044 + t43049 + t43055;
  t40789 = t29870*t22855*t35097;
  t40945 = -1.*t24358*t35097*t29927;
  t40947 = t40789 + t40945;
  t43014 = t22855*t24358*t32849;
  t43015 = t29870*t32849*t29927;
  t43017 = t43014 + t43015;
  t42932 = t22855*t24358*t34227;
  t42943 = t29870*t34227*t29927;
  t42977 = t42932 + t42943;
  t41097 = t29870*t22855*t40705;
  t41162 = -1.*t24358*t40705*t29927;
  t41164 = t41097 + t41162;
  t43141 = t42155*t43017;
  t43142 = -1.*t42892*t38173;
  t43147 = t43141 + t43142;
  t42894 = t29870*t22855;
  t42895 = -1.*t24358*t29927;
  t42901 = t42894 + t42895;
  t43169 = t42155*t42977;
  t43183 = -1.*t42892*t35038;
  t43223 = t43169 + t43183;
  t43241 = t42892*t4444*t30145;
  t43243 = t42155*t42901;
  t43244 = t43241 + t43243;
  t43027 = -1.*t32849*t4444;
  t43028 = -1.*t30772*t35026;
  t43029 = t43027 + t43028;
  t43033 = -1.*t35097*t4444;
  t43034 = -1.*t30772*t38156;
  t43035 = t43033 + t43034;
  t43257 = t42892*t30145;
  t43258 = -1.*t42155*t4444*t38202;
  t43259 = t43257 + t43258;
  t43261 = var2[1]*t43259;
  t43263 = -1.*t42155*t4444*t38301;
  t43264 = t42892*t35026;
  t43265 = t43263 + t43264;
  t43267 = var2[2]*t43265;
  t43268 = -1.*t42155*t4444*t38320;
  t43270 = t42892*t38156;
  t43273 = t43268 + t43270;
  t43275 = var2[0]*t43273;
  t43276 = t43261 + t43267 + t43275;
  t43058 = t22855*t24358*t35097;
  t43059 = t29870*t35097*t29927;
  t43061 = t43058 + t43059;
  t43064 = t30772*t40705;
  t43065 = -1.*t4444*t40947;
  t43135 = t43064 + t43065;
  t43225 = t22855*t24358*t40705;
  t43227 = t29870*t40705*t29927;
  t43228 = t43225 + t43227;
  t43231 = t30772*t34227;
  t43233 = -1.*t4444*t41164;
  t43234 = t43231 + t43233;
  t43284 = t42892*t43017;
  t43315 = t42155*t38173;
  t43355 = t43284 + t43315;
  t43388 = t42892*t42977;
  t43392 = t42155*t35038;
  t43393 = t43388 + t43392;
  t43412 = -1.*t31527;
  t43415 = 1. + t43412;
  t43416 = 0.50321*t43415;
  t43417 = 0.23321*t31527;
  t43420 = t43416 + t43417;
  t43452 = -1.*t29870;
  t43453 = 1. + t43452;
  t43458 = -1.*t31348;
  t43460 = 1. + t43458;
  t43461 = 0.28121*t43460;
  t43463 = t31348*t43420;
  t43465 = -0.27*t31617*t32607;
  t43466 = t43461 + t43463 + t43465;
  t43411 = 0.28121*t31617;
  t43422 = -1.*t43420*t31617;
  t43423 = -0.27*t31348*t32607;
  t43424 = t43411 + t43422 + t43423;
  t43456 = 0.15121*t43453;
  t43468 = t29870*t43466;
  t43470 = t43456 + t43468;
  t43471 = t22855*t43470;
  t43472 = -0.15121*t43453;
  t43476 = -0.15121*t29870;
  t43477 = -0.15121*t24358;
  t43478 = t24358*t43466;
  t43481 = t43472 + t43476 + t43477 + t43478;
  t43482 = -1.*t43481*t29927;
  t43483 = t43471 + t43482;
  t43508 = t43424*t4444;
  t43519 = t30772*t43483;
  t43524 = t43508 + t43519;
  t43448 = -1.*t43424*t4444;
  t43485 = -1.*t30772*t43483;
  t43486 = t43448 + t43485;
  t43654 = t30772*t43424;
  t43656 = -1.*t4444*t43483;
  t43657 = t43654 + t43656;
  t43548 = t22855*t43481;
  t43560 = t43470*t29927;
  t43595 = t43548 + t43560;
  t43652 = -1.*t42901*t43595;
  t43653 = -1.*t30772*t30145*t43524;
  t43658 = t4444*t30145*t43657;
  t43660 = t43652 + t43653 + t43658;
  t43742 = -1.*t22855*t43481;
  t43743 = -1.*t43470*t29927;
  t43744 = t43742 + t43743;
  t43670 = t42977*t43595;
  t43672 = t41007*t43524;
  t43673 = t35038*t43657;
  t43674 = t43670 + t43672 + t43673;
  t43685 = t42901*t43595;
  t43686 = t30772*t30145*t43524;
  t43688 = -1.*t4444*t30145*t43657;
  t43689 = t43685 + t43686 + t43688;
  t43741 = Power(t30772,2);
  t43747 = Power(t4444,2);
  t43700 = -1.*t43017*t43595;
  t43701 = -1.*t40984*t43524;
  t43702 = -1.*t38173*t43657;
  t43704 = t43700 + t43701 + t43702;
  t43717 = -1.*t42977*t43595;
  t43718 = -1.*t41007*t43524;
  t43720 = -1.*t35038*t43657;
  t43722 = t43717 + t43718 + t43720;
  t43730 = t43017*t43595;
  t43731 = t40984*t43524;
  t43732 = t38173*t43657;
  t43733 = t43730 + t43731 + t43732;
  t43739 = t30772*t38301*t43660;
  t43749 = -1.*t30145*t43595;
  t43862 = 0.15121*t24358;
  t43863 = -1.*t24358*t43466;
  t43868 = t43862 + t43863;
  t43870 = t22855*t43868;
  t43873 = t43476 + t43468;
  t43874 = -1.*t43873*t29927;
  t43885 = t43870 + t43874;
  t43751 = -1.*t30772*t38202*t43524;
  t43752 = t4444*t38202*t43657;
  t43755 = t35026*t43595;
  t43915 = t22855*t43873;
  t43916 = t43868*t29927;
  t43917 = t43915 + t43916;
  t43759 = t30772*t38301*t43524;
  t43760 = -1.*t4444*t38301*t43657;
  t43764 = t30772*t38202*t43674;
  t43768 = t30772*t38320*t43689;
  t43772 = t30145*t43595;
  t43774 = t30772*t38202*t43524;
  t43775 = -1.*t4444*t38202*t43657;
  t43779 = -1.*t38156*t43595;
  t43784 = -1.*t30772*t38320*t43524;
  t43785 = t4444*t38320*t43657;
  t43789 = t30772*t38202*t43704;
  t43793 = -1.*t35026*t43595;
  t43798 = -1.*t30772*t38301*t43524;
  t43799 = t4444*t38301*t43657;
  t43802 = t38156*t43595;
  t43808 = t30772*t38320*t43524;
  t43810 = -1.*t4444*t38320*t43657;
  t43813 = t30772*t38320*t43722;
  t43814 = t30772*t38301*t43733;
  t43959 = 0.28121*t31348;
  t43960 = -1.*t31348*t43420;
  t43961 = 0.27*t31617*t32607;
  t43962 = t43959 + t43960 + t43961;
  t43964 = t29870*t22855*t43424;
  t43965 = -1.*t24358*t43424*t29927;
  t43966 = t43964 + t43965;
  t40723 = t40705*t4444;
  t40951 = t30772*t40947;
  t40953 = t40723 + t40951;
  t43954 = t22855*t24358*t43424;
  t43955 = t29870*t43424*t29927;
  t43957 = t43954 + t43955;
  t43963 = t43962*t4444;
  t43967 = t30772*t43966;
  t43969 = t43963 + t43967;
  t43971 = t30772*t43962;
  t43972 = -1.*t4444*t43966;
  t43973 = t43971 + t43972;
  t44043 = -0.27*t31527*t31617;
  t44044 = 0.27*t31348*t32607;
  t44045 = t44043 + t44044;
  t44050 = -0.27*t31348*t31527;
  t44052 = t44050 + t43465;
  t44054 = t29870*t22855*t44045;
  t44055 = -1.*t24358*t44045*t29927;
  t44056 = t44054 + t44055;
  t44046 = t22855*t24358*t44045;
  t44047 = t29870*t44045*t29927;
  t44048 = t44046 + t44047;
  t44053 = t44052*t4444;
  t44057 = t30772*t44056;
  t44058 = t44053 + t44057;
  t44072 = t30772*t44052;
  t44076 = -1.*t4444*t44056;
  t44077 = t44072 + t44076;
  t41023 = t34227*t4444;
  t41167 = t30772*t41164;
  t41168 = t41023 + t41167;
  t43750 = -1.*t42901*t43483;
  t43756 = t42977*t43483;
  t43773 = t42901*t43483;
  t43780 = -1.*t43017*t43483;
  t43794 = -1.*t42977*t43483;
  t43803 = t43017*t43483;
  t44162 = -1.*t30145*t43483;
  t44163 = t43652 + t44162;
  t44164 = t35026*t44163;
  t43918 = -1.*t42901*t43917;
  t44166 = -1.*t38202*t43483;
  t43921 = t42977*t43917;
  t44170 = t38301*t43483;
  t44173 = t43424*t32849;
  t44174 = t35026*t43483;
  t44175 = t44173 + t43670 + t44174;
  t44176 = t30145*t44175;
  t44179 = t30145*t43483;
  t44180 = t43685 + t44179;
  t44181 = t38156*t44180;
  t43930 = t42901*t43917;
  t44183 = t38202*t43483;
  t43933 = -1.*t43017*t43917;
  t44188 = -1.*t38320*t43483;
  t44191 = -1.*t43424*t35097;
  t44192 = -1.*t38156*t43483;
  t44193 = t44191 + t43700 + t44192;
  t44194 = t30145*t44193;
  t43940 = -1.*t42977*t43917;
  t44199 = -1.*t38301*t43483;
  t44203 = -1.*t43424*t32849;
  t44204 = -1.*t35026*t43483;
  t44205 = t44203 + t43717 + t44204;
  t44206 = t38156*t44205;
  t43946 = t43017*t43917;
  t44208 = t38320*t43483;
  t44212 = t43424*t35097;
  t44213 = t38156*t43483;
  t44214 = t44212 + t43730 + t44213;
  t44215 = t35026*t44214;
  t43958 = t42901*t43957;
  t43978 = -1.*t43957*t43017;
  t43979 = -1.*t43061*t43595;
  t43990 = t43957*t43017;
  t43991 = t43061*t43595;
  t43998 = -1.*t42977*t43957;
  t44006 = -1.*t42901*t43957;
  t44015 = t42977*t43957;
  t44049 = t42901*t44048;
  t44082 = -1.*t44048*t43017;
  t44089 = -1.*t42901*t44048;
  t44107 = t42977*t44048;
  t44112 = t43228*t43595;
  t44134 = t44048*t43017;
  t44140 = -1.*t42977*t44048;
  t44141 = -1.*t43228*t43595;
  t44259 = t43424*t40705;
  t44260 = t35097*t43962;
  t44383 = Power(t29870,2);
  t44385 = Power(t24358,2);
  t44266 = -1.*t43962*t32849;
  t44368 = t24358*t43470;
  t44369 = -1.*t29870*t43481;
  t44371 = t44368 + t44369;
  t44373 = -1.*t24358*t43470;
  t44374 = t29870*t43481;
  t44375 = t44373 + t44374;
  t44377 = -1.*t29870*t34227*t43470;
  t44379 = -1.*t24358*t34227*t43481;
  t44381 = t44203 + t44377 + t44379;
  t44310 = t35097*t44052;
  t44314 = -1.*t34227*t43424;
  t44316 = -1.*t44052*t32849;
  t44399 = t29870*t32849*t43470;
  t44401 = t24358*t32849*t43481;
  t44402 = t44212 + t44399 + t44401;
  t44436 = -0.15121*t40705;
  t44437 = -0.15121*t32849;
  t44438 = t44436 + t44437;
  t44439 = var2[2]*t44438;
  t44440 = -1.*t34227*t43466;
  t44441 = t44440 + t44203;
  t44446 = t43466*t32849;
  t44447 = t44212 + t44446;
  t44477 = 0.28121*t31527;
  t44478 = -1.*t43420*t31527;
  p_output1[0]=t38173*var2[0] - 1.*t30145*t4444*var2[1] + t35038*var2[2];
  p_output1[1]=t38367;
  p_output1[2]=t38367;
  p_output1[3]=t40953*var2[0] + t40984*var2[2];
  p_output1[4]=t41007*var2[0] + t41168*var2[2];
  p_output1[5]=t40984;
  p_output1[6]=t30145*t30772;
  p_output1[7]=t41007;
  p_output1[8]=(-1.*t38173*t42155 - 1.*t42892*t43017)*var2[0] + (-1.*t42892*t42901 + t30145*t42155*t4444)*var2[1] + (-1.*t35038*t42155 - 1.*t42892*t42977)*var2[2];
  p_output1[9]=-1.*t42892*t43035*var2[0] + t30145*t30772*t42892*var2[1] - 1.*t42892*t43029*var2[2];
  p_output1[10]=t43057;
  p_output1[11]=t43057;
  p_output1[12]=(t42155*t43061 - 1.*t42892*t43135)*var2[0] + t43147*var2[2];
  p_output1[13]=t43223*var2[0] + (t42155*t43228 - 1.*t42892*t43234)*var2[2];
  p_output1[14]=t43147;
  p_output1[15]=t43244;
  p_output1[16]=t43223;
  p_output1[17]=t43147*var2[0] + t43244*var2[1] + t43223*var2[2];
  p_output1[18]=t42155*t43035*var2[0] - 1.*t30145*t30772*t42155*var2[1] + t42155*t43029*var2[2];
  p_output1[19]=t43276;
  p_output1[20]=t43276;
  p_output1[21]=(t42892*t43061 + t42155*t43135)*var2[0] + t43355*var2[2];
  p_output1[22]=t43393*var2[0] + (t42892*t43228 + t42155*t43234)*var2[2];
  p_output1[23]=t43355;
  p_output1[24]=t42892*t42901 - 1.*t30145*t42155*t4444;
  p_output1[25]=t43393;
  p_output1[26]=(t30145*t30772*(t35038*t43486 + t35038*t43524 + t41007*t43657 + t43029*t43657) + t35038*t43660 - 1.*t30145*t43674*t4444 + t41007*(t30145*t43486*t4444 + t30145*t43524*t4444))*var2[0] + (t40984*(-1.*t35038*t43486 - 1.*t35038*t43524 - 1.*t41007*t43657 - 1.*t43029*t43657) + t41007*(t38173*t43486 + t38173*t43524 + t40984*t43657 + t43035*t43657) + t38173*t43722 + t35038*t43733)*var2[1] + (t30145*t30772*(-1.*t38173*t43486 - 1.*t38173*t43524 - 1.*t40984*t43657 - 1.*t43035*t43657) + t38173*t43689 - 1.*t30145*t43704*t4444 + t40984*(-1.*t30145*t43486*t4444 - 1.*t30145*t43524*t4444))*var2[2];
  p_output1[27]=(t43739 + t41007*(-1.*t30145*t43741*t43744 - 1.*t30145*t43744*t43747 + t43749 + t43750 + t43751 + t43752) + t43764 + t30145*t30772*(t30772*t41007*t43744 + t43755 + t43756 + t43759 + t43760 - 1.*t35038*t43744*t4444))*var2[0] + (t43813 + t43814 + t40984*(-1.*t30772*t41007*t43744 + t43793 + t43794 + t43798 + t43799 + t35038*t43744*t4444) + t41007*(t30772*t40984*t43744 + t43802 + t43803 + t43808 + t43810 - 1.*t38173*t43744*t4444))*var2[1] + (t43768 + t40984*(t30145*t43741*t43744 + t30145*t43744*t43747 + t43772 + t43773 + t43774 + t43775) + t43789 + t30145*t30772*(-1.*t30772*t40984*t43744 + t43779 + t43780 + t43784 + t43785 + t38173*t43744*t4444))*var2[2];
  p_output1[28]=(t43739 + t43764 + t41007*(t43749 + t43751 + t43752 - 1.*t30145*t43741*t43885 - 1.*t30145*t43747*t43885 + t43918) + t30145*t30772*(t43755 + t43759 + t43760 + t30772*t41007*t43885 + t43921 - 1.*t35038*t43885*t4444))*var2[0] + (t43813 + t43814 + t40984*(t43793 + t43798 + t43799 - 1.*t30772*t41007*t43885 + t43940 + t35038*t43885*t4444) + t41007*(t43802 + t43808 + t43810 + t30772*t40984*t43885 + t43946 - 1.*t38173*t43885*t4444))*var2[1] + (t43768 + t43789 + t40984*(t43772 + t43774 + t43775 + t30145*t43741*t43885 + t30145*t43747*t43885 + t43930) + t30145*t30772*(t43779 + t43784 + t43785 - 1.*t30772*t40984*t43885 + t43933 + t38173*t43885*t4444))*var2[2];
  p_output1[29]=(t40984*t43660 + t30145*t30772*(t43730 + t43731 + t43732 + t41007*t43969 + t35038*t43973 + t44015) + t41007*(-1.*t30145*t30772*t43969 + t44006 + t30145*t43973*t4444))*var2[0] + (t40953*t43722 + t40984*t43733 + t41007*(t40953*t43524 + t43135*t43657 + t40984*t43969 + t38173*t43973 + t43990 + t43991) + t40984*(t43700 + t43701 + t43702 - 1.*t41007*t43969 - 1.*t35038*t43973 + t43998))*var2[1] + (t40953*t43689 + t30145*t30772*(-1.*t40953*t43524 - 1.*t43135*t43657 - 1.*t40984*t43969 - 1.*t38173*t43973 + t43978 + t43979) + t40984*(t43958 + t30145*t30772*t43969 - 1.*t30145*t43973*t4444))*var2[2];
  p_output1[30]=(t41168*t43660 + t30145*t30772*(t41168*t43524 + t43234*t43657 + t41007*t44058 + t35038*t44077 + t44107 + t44112) + t41007*(-1.*t30145*t30772*t44058 + t44089 + t30145*t44077*t4444))*var2[0] + (t41007*t43722 + t41168*t43733 + t41007*(t43670 + t43672 + t43673 + t40984*t44058 + t38173*t44077 + t44134) + t40984*(-1.*t41168*t43524 - 1.*t43234*t43657 - 1.*t41007*t44058 - 1.*t35038*t44077 + t44140 + t44141))*var2[1] + (t41007*t43689 + t30145*t30772*(t43717 + t43718 + t43720 - 1.*t40984*t44058 - 1.*t38173*t44077 + t44082) + t40984*(t44049 + t30145*t30772*t44058 - 1.*t30145*t44077*t4444))*var2[2];
  p_output1[31]=t41007*t43660 + t30145*t30772*t43674;
  p_output1[32]=t40984*t43722 + t41007*t43733;
  p_output1[33]=t40984*t43689 + t30145*t30772*t43704;
  p_output1[34]=(t44164 + t42977*(-1.*t30145*t43744 + t43749 + t43750 + t44166) + t42901*(t35026*t43744 + t43755 + t43756 + t44170) + t44176)*var2[0] + (t43017*(-1.*t35026*t43744 + t43793 + t43794 + t44199) + t44206 + t42977*(t38156*t43744 + t43802 + t43803 + t44208) + t44215)*var2[1] + (t44181 + t43017*(t30145*t43744 + t43772 + t43773 + t44183) + t42901*(-1.*t38156*t43744 + t43779 + t43780 + t44188) + t44194)*var2[2];
  p_output1[35]=(t44164 + t42977*(t43749 - 1.*t30145*t43885 + t43918 + t44166) + t42901*(t43755 + t35026*t43885 + t43921 + t44170) + t44176)*var2[0] + (t43017*(t43793 - 1.*t35026*t43885 + t43940 + t44199) + t44206 + t42977*(t43802 + t38156*t43885 + t43946 + t44208) + t44215)*var2[1] + (t44181 + t43017*(t43772 + t30145*t43885 + t43930 + t44183) + t42901*(t43779 - 1.*t38156*t43885 + t43933 + t44188) + t44194)*var2[2];
  p_output1[36]=(t42977*(-1.*t30145*t43966 + t44006) + t43017*t44163 + t42901*(t43730 + t32849*t43962 + t35026*t43966 + t44015 + t44212 + t44213))*var2[0] + (t43061*t44205 + t43017*t44214 + t42977*(t40947*t43483 + t38156*t43966 + t43990 + t43991 + t44259 + t44260) + t43017*(t43700 - 1.*t35026*t43966 + t43998 + t44191 + t44192 + t44266))*var2[1] + (t43017*(t43958 + t30145*t43966) + t42901*(-1.*t40705*t43424 - 1.*t40947*t43483 - 1.*t35097*t43962 - 1.*t38156*t43966 + t43978 + t43979) + t43061*t44180)*var2[2];
  p_output1[37]=(t42977*(-1.*t30145*t44056 + t44089) + t42901*(t34227*t43424 + t41164*t43483 + t32849*t44052 + t35026*t44056 + t44107 + t44112) + t43228*t44163)*var2[0] + (t42977*t44205 + t43228*t44214 + t42977*(t43670 + t38156*t44056 + t44134 + t44173 + t44174 + t44310) + t43017*(-1.*t41164*t43483 - 1.*t35026*t44056 + t44140 + t44141 + t44314 + t44316))*var2[1] + (t43017*(t44049 + t30145*t44056) + t42977*t44180 + t42901*(t43717 - 1.*t35097*t44052 - 1.*t38156*t44056 + t44082 + t44203 + t44204))*var2[2];
  p_output1[38]=t42977*t44163 + t42901*t44175;
  p_output1[39]=t43017*t44205 + t42977*t44214;
  p_output1[40]=t43017*t44180 + t42901*t44193;
  p_output1[41]=t32849*(t29870*t43470 + t24358*t43481 + t24358*t43868 - 1.*t29870*t43873)*var2[0] + (t32849*(-1.*t24358*t32849*t43470 + t29870*t32849*t43481 + t29870*t32849*t43868 + t24358*t32849*t43873) + t35097*(t24358*t34227*t43470 - 1.*t29870*t34227*t43481 - 1.*t29870*t34227*t43868 - 1.*t24358*t34227*t43873))*var2[1] + t35097*(-1.*t29870*t43470 - 1.*t24358*t43481 - 1.*t24358*t43868 + t29870*t43873)*var2[2];
  p_output1[42]=t35097*t44371*var2[0] + (t40705*t44381 + t32849*(t29870*t35097*t43470 + t24358*t35097*t43481 + t44259 + t44260 + t32849*t43424*t44383 + t32849*t43424*t44385) + t35097*(-1.*t29870*t32849*t43470 - 1.*t24358*t32849*t43481 + t44191 + t44266 - 1.*t34227*t43424*t44383 - 1.*t34227*t43424*t44385) + t35097*t44402)*var2[1] + t40705*t44375*var2[2];
  p_output1[43]=t34227*t44371*var2[0] + (t32849*t44381 + t32849*(t29870*t34227*t43470 + t24358*t34227*t43481 + t44173 + t44310 + t32849*t44045*t44383 + t32849*t44045*t44385) + t35097*(-1.*t29870*t40705*t43470 - 1.*t24358*t40705*t43481 + t44314 + t44316 - 1.*t34227*t44045*t44383 - 1.*t34227*t44045*t44385) + t34227*t44402)*var2[1] + t32849*t44375*var2[2];
  p_output1[44]=t32849*t44371;
  p_output1[45]=t35097*t44381 + t32849*t44402;
  p_output1[46]=t35097*t44375;
  p_output1[47]=t44439 + (t32849*(t35097*t43466 + t44173 + t44259 + t44260) + t35097*(-1.*t32849*t43466 + t44191 + t44266 + t44314) + t40705*t44441 + t35097*t44447)*var2[1];
  p_output1[48]=t44439 + (t32849*(t34227*t43466 + t32849*t44045 + t44173 + t44310) + t35097*(-1.*t40705*t43466 - 1.*t34227*t44045 + t44314 + t44316) + t32849*t44441 + t34227*t44447)*var2[1];
  p_output1[49]=-0.15121 + t35097*t44441 + t32849*t44447;
  p_output1[50]=-0.15121*t34227 - 0.15121*t35097;
  p_output1[51]=(-0.27*Power(t31527,2) + t44477 + t44478)*var2[0] + (-0.28121*t32607 + 0.27*t31527*t32607 + t32607*t43420)*var2[2];
  p_output1[52]=0.28121*t32607 - 0.27*t31527*t32607 - 1.*t32607*t43420;
  p_output1[53]=0.27*Power(t32607,2) + t44477 + t44478;
  p_output1[54]=-0.27;
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 55, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_fFrFoot_vec_ParallelStance.hh"

namespace ParallelStance
{

void J_fFrFoot_vec_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
