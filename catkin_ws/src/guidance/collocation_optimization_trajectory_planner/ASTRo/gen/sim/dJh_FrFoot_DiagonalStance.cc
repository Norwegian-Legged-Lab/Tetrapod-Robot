/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 13:04:32 GMT+02:00
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
  double t32469;
  double t32606;
  double t32611;
  double t32961;
  double t32965;
  double t33013;
  double t33031;
  double t33073;
  double t31536;
  double t31754;
  double t33078;
  double t33085;
  double t33070;
  double t33081;
  double t33082;
  double t30069;
  double t33088;
  double t33101;
  double t33105;
  double t33107;
  double t33486;
  double t33511;
  double t33553;
  double t33560;
  double t33573;
  double t34429;
  double t34577;
  double t41098;
  double t44519;
  double t44535;
  double t44563;
  double t44652;
  double t44688;
  double t44772;
  double t44773;
  double t44784;
  double t44785;
  double t44791;
  double t44801;
  double t44861;
  double t44911;
  double t44918;
  double t44992;
  double t45001;
  double t45021;
  double t45224;
  double t45226;
  double t45238;
  double t45315;
  double t45321;
  double t45322;
  double t45335;
  double t45385;
  double t46686;
  double t46733;
  double t46736;
  double t46796;
  double t46797;
  double t46798;
  double t46799;
  double t46801;
  double t45311;
  double t45386;
  double t46681;
  double t46683;
  double t46735;
  double t46802;
  double t46803;
  double t46808;
  double t46810;
  double t46814;
  double t46821;
  double t46823;
  double t46824;
  double t46825;
  double t46826;
  double t46832;
  double t46833;
  double t46835;
  double t46684;
  double t46827;
  double t46828;
  double t46850;
  double t46851;
  double t46853;
  double t45298;
  double t45301;
  double t45310;
  double t46840;
  double t46841;
  double t46842;
  double t46884;
  double t46897;
  double t46898;
  double t46983;
  double t46992;
  double t46994;
  double t47731;
  double t47733;
  double t47745;
  double t46844;
  double t47820;
  double t47821;
  double t47822;
  double t46919;
  double t47851;
  double t47852;
  double t47853;
  double t46846;
  double t46854;
  double t46855;
  double t47826;
  double t47829;
  double t47831;
  double t47837;
  double t47838;
  double t47849;
  double t47856;
  double t46920;
  double t46925;
  double t46928;
  double t47016;
  double t47033;
  double t48001;
  double t48005;
  double t48017;
  double t48020;
  double t47019;
  double t47020;
  double t47021;
  double t47034;
  double t47036;
  double t47037;
  double t47062;
  double t47709;
  double t47066;
  double t47067;
  double t47692;
  double t47893;
  double t47895;
  double t52261;
  double t52263;
  double t52277;
  double t52282;
  double t47710;
  double t47711;
  double t47714;
  double t47747;
  double t47749;
  double t47755;
  double t47757;
  double t47759;
  double t47766;
  double t47767;
  double t47771;
  double t47772;
  double t47813;
  double t47817;
  double t47818;
  double t52957;
  double t53006;
  double t53040;
  double t52460;
  double t47839;
  double t53140;
  double t53153;
  double t53154;
  double t53174;
  double t53192;
  double t53211;
  double t47855;
  double t47874;
  double t47879;
  double t47882;
  double t47885;
  double t47889;
  double t53216;
  double t47900;
  double t47901;
  double t53308;
  double t47917;
  double t47921;
  double t47932;
  double t47976;
  double t47983;
  double t47987;
  double t47989;
  double t47990;
  double t47992;
  double t47994;
  double t47996;
  double t47999;
  double t48004;
  double t48009;
  double t48010;
  double t48011;
  double t48012;
  double t48019;
  double t48028;
  double t48029;
  double t51320;
  double t51323;
  double t53513;
  double t51932;
  double t51936;
  double t53535;
  double t51952;
  double t51961;
  double t52043;
  double t52063;
  double t52135;
  double t52138;
  double t52141;
  double t52144;
  double t52147;
  double t52164;
  double t52165;
  double t52191;
  double t52195;
  double t52200;
  double t52221;
  double t52240;
  double t52266;
  double t52279;
  double t52291;
  double t52296;
  double t52306;
  double t52312;
  double t52323;
  double t53660;
  double t52331;
  double t52337;
  double t53675;
  double t52358;
  double t52359;
  double t52393;
  double t53782;
  double t53804;
  double t53829;
  double t53839;
  double t53843;
  double t53845;
  double t53863;
  double t53867;
  double t53872;
  double t53878;
  double t53886;
  double t53887;
  double t53925;
  double t53931;
  double t53934;
  double t53956;
  double t54010;
  double t54014;
  double t53955;
  double t54080;
  double t54081;
  double t54089;
  double t54091;
  double t54115;
  double t54165;
  double t54180;
  double t54183;
  double t54192;
  double t54195;
  double t54197;
  double t54337;
  double t54345;
  double t54412;
  double t54414;
  double t54367;
  double t53833;
  double t53850;
  double t53855;
  double t54524;
  double t54533;
  double t54541;
  double t39710;
  double t39860;
  double t40082;
  double t54647;
  double t54679;
  double t54681;
  double t53750;
  double t53755;
  double t53760;
  double t45047;
  double t45078;
  double t45147;
  double t54785;
  double t54786;
  double t54787;
  double t54788;
  double t54789;
  double t54790;
  double t54792;
  double t54793;
  double t54794;
  double t54798;
  double t54799;
  double t54800;
  double t54791;
  double t54803;
  double t54804;
  double t54810;
  double t54811;
  double t54812;
  double t54807;
  double t54809;
  double t54818;
  double t54819;
  double t54820;
  double t54822;
  double t54823;
  double t54824;
  double t54828;
  double t54830;
  double t54831;
  double t54331;
  double t54332;
  double t54353;
  double t54357;
  double t54361;
  double t54402;
  double t54406;
  double t54407;
  double t54866;
  double t54910;
  double t54448;
  double t54451;
  double t54457;
  double t54976;
  double t54981;
  double t54983;
  double t54837;
  double t54838;
  double t54839;
  double t54592;
  double t54593;
  double t54594;
  double t54595;
  double t54596;
  double t54597;
  double t54598;
  double t55052;
  double t55060;
  t32469 = Cos(var1[13]);
  t32606 = Cos(var1[14]);
  t32611 = t32469*t32606;
  t32961 = Sin(var1[13]);
  t32965 = Sin(var1[14]);
  t33013 = t32961*t32965;
  t33031 = t32611 + t33013;
  t33073 = Cos(var1[12]);
  t31536 = Cos(var1[5]);
  t31754 = Sin(var1[12]);
  t33078 = Sin(var1[5]);
  t33085 = Cos(var1[3]);
  t33070 = t31536*t31754*t33031;
  t33081 = t33073*t33031*t33078;
  t33082 = t33070 + t33081;
  t30069 = Sin(var1[3]);
  t33088 = Cos(var1[4]);
  t33101 = -1.*t32606*t32961;
  t33105 = t32469*t32965;
  t33107 = t33101 + t33105;
  t33486 = t33088*t33107;
  t33511 = Sin(var1[4]);
  t33553 = t33073*t31536*t33031;
  t33560 = -1.*t31754*t33031*t33078;
  t33573 = t33553 + t33560;
  t34429 = -1.*t33511*t33573;
  t34577 = t33486 + t34429;
  t41098 = -1.*t31536*t31754;
  t44519 = -1.*t33073*t33078;
  t44535 = t41098 + t44519;
  t44563 = t33073*t31536;
  t44652 = -1.*t31754*t33078;
  t44688 = t44563 + t44652;
  t44772 = t32606*t32961;
  t44773 = -1.*t32469*t32965;
  t44784 = t44772 + t44773;
  t44785 = t31536*t31754*t44784;
  t44791 = t33073*t44784*t33078;
  t44801 = t44785 + t44791;
  t44861 = t33088*t33031;
  t44911 = t33073*t31536*t44784;
  t44918 = -1.*t31754*t44784*t33078;
  t44992 = t44911 + t44918;
  t45001 = -1.*t33511*t44992;
  t45021 = t44861 + t45001;
  t45224 = -1.*t33107*t33511;
  t45226 = -1.*t33088*t33573;
  t45238 = t45224 + t45226;
  t45315 = -1.*t32606;
  t45321 = 1. + t45315;
  t45322 = 0.50321*t45321;
  t45335 = 0.19821*t32606;
  t45385 = t45322 + t45335;
  t46686 = -1.*t33073;
  t46733 = 1. + t46686;
  t46736 = -1.*t32469;
  t46796 = 1. + t46736;
  t46797 = 0.28121*t46796;
  t46798 = t32469*t45385;
  t46799 = -0.305*t32961*t32965;
  t46801 = t46797 + t46798 + t46799;
  t45311 = 0.28121*t32961;
  t45386 = -1.*t45385*t32961;
  t46681 = -0.305*t32469*t32965;
  t46683 = t45311 + t45386 + t46681;
  t46735 = 0.15121*t46733;
  t46802 = t33073*t46801;
  t46803 = t46735 + t46802;
  t46808 = t31536*t46803;
  t46810 = -0.15121*t46733;
  t46814 = -0.15121*t33073;
  t46821 = -0.15121*t31754;
  t46823 = t31754*t46801;
  t46824 = t46810 + t46814 + t46821 + t46823;
  t46825 = -1.*t46824*t33078;
  t46826 = t46808 + t46825;
  t46832 = t46683*t33511;
  t46833 = t33088*t46826;
  t46835 = t46832 + t46833;
  t46684 = -1.*t46683*t33511;
  t46827 = -1.*t33088*t46826;
  t46828 = t46684 + t46827;
  t46850 = t33088*t46683;
  t46851 = -1.*t33511*t46826;
  t46853 = t46850 + t46851;
  t45298 = t33031*t33511;
  t45301 = t33088*t44992;
  t45310 = t45298 + t45301;
  t46840 = t31536*t46824;
  t46841 = t46803*t33078;
  t46842 = t46840 + t46841;
  t46884 = -1.*t33031*t33511;
  t46897 = -1.*t33088*t44992;
  t46898 = t46884 + t46897;
  t46983 = t33107*t33511;
  t46992 = t33088*t33573;
  t46994 = t46983 + t46992;
  t47731 = -1.*t31536*t31754*t33031;
  t47733 = -1.*t33073*t33031*t33078;
  t47745 = t47731 + t47733;
  t46844 = -1.*t44688*t46842;
  t47820 = -1.*t31536*t46824;
  t47821 = -1.*t46803*t33078;
  t47822 = t47820 + t47821;
  t46919 = t44801*t46842;
  t47851 = -1.*t31536*t31754*t44784;
  t47852 = -1.*t33073*t44784*t33078;
  t47853 = t47851 + t47852;
  t46846 = -1.*t33088*t44535*t46835;
  t46854 = t33511*t44535*t46853;
  t46855 = t46844 + t46846 + t46854;
  t47826 = -1.*t44535*t46842;
  t47829 = -1.*t44688*t46826;
  t47831 = -1.*t33073*t31536;
  t47837 = t31754*t33078;
  t47838 = t47831 + t47837;
  t47849 = t44992*t46842;
  t47856 = t44801*t46826;
  t46920 = t45310*t46835;
  t46925 = t45021*t46853;
  t46928 = t46919 + t46920 + t46925;
  t47016 = -1.*t44801*t46842;
  t47033 = t33082*t46842;
  t48001 = -1.*t44992*t46842;
  t48005 = -1.*t44801*t46826;
  t48017 = t33573*t46842;
  t48020 = t33082*t46826;
  t47019 = -1.*t45310*t46835;
  t47020 = -1.*t45021*t46853;
  t47021 = t47016 + t47019 + t47020;
  t47034 = t46994*t46835;
  t47036 = t34577*t46853;
  t47037 = t47033 + t47034 + t47036;
  t47062 = t44688*t46842;
  t47709 = -1.*t33082*t46842;
  t47066 = t33088*t44535*t46835;
  t47067 = -1.*t33511*t44535*t46853;
  t47692 = t47062 + t47066 + t47067;
  t47893 = Power(t33088,2);
  t47895 = Power(t33511,2);
  t52261 = t44535*t46842;
  t52263 = t44688*t46826;
  t52277 = -1.*t33573*t46842;
  t52282 = -1.*t33082*t46826;
  t47710 = -1.*t46994*t46835;
  t47711 = -1.*t34577*t46853;
  t47714 = t47709 + t47710 + t47711;
  t47747 = var2[0]*t33088*t47745;
  t47749 = t30069*t33511*t47745;
  t47755 = t33085*t33573;
  t47757 = t47749 + t47755;
  t47759 = var2[1]*t47757;
  t47766 = -1.*t33085*t33511*t47745;
  t47767 = t30069*t33573;
  t47771 = t47766 + t47767;
  t47772 = var2[2]*t47771;
  t47813 = -1.*t44535*t46826;
  t47817 = t46844 + t47813;
  t47818 = t44992*t47817;
  t52957 = 0.15121*t31754;
  t53006 = -1.*t31754*t46801;
  t53040 = t52957 + t53006;
  t52460 = t46814 + t46802;
  t47839 = -1.*t47838*t46826;
  t53140 = t31536*t53040;
  t53153 = -1.*t52460*t33078;
  t53154 = t53140 + t53153;
  t53174 = t31536*t52460;
  t53192 = t53040*t33078;
  t53211 = t53174 + t53192;
  t47855 = t47853*t46826;
  t47874 = t46683*t33031;
  t47879 = t44992*t46826;
  t47882 = t47874 + t46919 + t47879;
  t47885 = t44535*t47882;
  t47889 = t33088*t47853*t46855;
  t53216 = -1.*t44688*t53211;
  t47900 = -1.*t33088*t47838*t46835;
  t47901 = t33511*t47838*t46853;
  t53308 = t44801*t53211;
  t47917 = t33088*t47853*t46835;
  t47921 = -1.*t33511*t47853*t46853;
  t47932 = t33088*t47838*t46928;
  t47976 = var2[0]*t33088*t47838;
  t47983 = t30069*t44535;
  t47987 = -1.*t33085*t33511*t47838;
  t47989 = t47983 + t47987;
  t47990 = var2[2]*t47989;
  t47992 = t33085*t44535;
  t47994 = t30069*t33511*t47838;
  t47996 = t47992 + t47994;
  t47999 = var2[1]*t47996;
  t48004 = -1.*t47853*t46826;
  t48009 = -1.*t46683*t33031;
  t48010 = -1.*t44992*t46826;
  t48011 = t48009 + t47016 + t48010;
  t48012 = t33573*t48011;
  t48019 = t47745*t46826;
  t48028 = t46683*t33107;
  t48029 = t33573*t46826;
  t51320 = t48028 + t47033 + t48029;
  t51323 = t44992*t51320;
  t53513 = -1.*t44801*t53211;
  t51932 = -1.*t33088*t47853*t46835;
  t51936 = t33511*t47853*t46853;
  t53535 = t33082*t53211;
  t51952 = t33088*t47745*t46835;
  t51961 = -1.*t33511*t47745*t46853;
  t52043 = t33088*t47745*t47021;
  t52063 = t33088*t47853*t47037;
  t52135 = var2[0]*t33088*t47853;
  t52138 = t30069*t33511*t47853;
  t52141 = t33085*t44992;
  t52144 = t52138 + t52141;
  t52147 = var2[1]*t52144;
  t52164 = -1.*t33085*t33511*t47853;
  t52165 = t30069*t44992;
  t52191 = t52164 + t52165;
  t52195 = var2[2]*t52191;
  t52200 = t44535*t46826;
  t52221 = t47062 + t52200;
  t52240 = t33573*t52221;
  t52266 = t47838*t46826;
  t52279 = -1.*t47745*t46826;
  t52291 = -1.*t46683*t33107;
  t52296 = -1.*t33573*t46826;
  t52306 = t52291 + t47709 + t52296;
  t52312 = t44535*t52306;
  t52323 = t33088*t47745*t47692;
  t53660 = t44688*t53211;
  t52331 = t33088*t47838*t46835;
  t52337 = -1.*t33511*t47838*t46853;
  t53675 = -1.*t33082*t53211;
  t52358 = -1.*t33088*t47745*t46835;
  t52359 = t33511*t47745*t46853;
  t52393 = t33088*t47838*t47714;
  t53782 = -1.*t32469*t32606;
  t53804 = -1.*t32961*t32965;
  t53829 = t53782 + t53804;
  t53839 = t33073*t31536*t33107;
  t53843 = -1.*t31754*t33107*t33078;
  t53845 = t53839 + t53843;
  t53863 = t31536*t31754*t33107;
  t53867 = t33073*t33107*t33078;
  t53872 = t53863 + t53867;
  t53878 = t33088*t53829;
  t53886 = -1.*t33511*t53845;
  t53887 = t53878 + t53886;
  t53925 = t31536*t31754*t46683;
  t53931 = t33073*t46683*t33078;
  t53934 = t53925 + t53931;
  t53956 = t33073*t31536*t46683;
  t54010 = -1.*t31754*t46683*t33078;
  t54014 = t53956 + t54010;
  t53955 = -1.*t44688*t53934;
  t54080 = 0.28121*t32469;
  t54081 = -1.*t32469*t45385;
  t54089 = 0.305*t32961*t32965;
  t54091 = t54080 + t54081 + t54089;
  t54115 = t44801*t53934;
  t54165 = t54091*t33511;
  t54180 = t33088*t54014;
  t54183 = t54165 + t54180;
  t54192 = t33088*t54091;
  t54195 = -1.*t33511*t54014;
  t54197 = t54192 + t54195;
  t54337 = t46683*t53829;
  t54345 = t33107*t54091;
  t54412 = Power(t33073,2);
  t54414 = Power(t31754,2);
  t54367 = -1.*t54091*t33031;
  t53833 = t53829*t33511;
  t53850 = t33088*t53845;
  t53855 = t53833 + t53850;
  t54524 = t53934*t33082;
  t54533 = t53872*t46842;
  t54541 = -1.*t44801*t53934;
  t39710 = t33085*t33082;
  t39860 = -1.*t30069*t34577;
  t40082 = t39710 + t39860;
  t54647 = t44688*t53934;
  t54679 = -1.*t53934*t33082;
  t54681 = -1.*t53872*t46842;
  t53750 = t31754*t46803;
  t53755 = -1.*t33073*t46824;
  t53760 = t53750 + t53755;
  t45047 = t33085*t44801;
  t45078 = -1.*t30069*t45021;
  t45147 = t45047 + t45078;
  t54785 = -0.305*t32606*t32961;
  t54786 = 0.305*t32469*t32965;
  t54787 = t54785 + t54786;
  t54788 = t31536*t31754*t54787;
  t54789 = t33073*t54787*t33078;
  t54790 = t54788 + t54789;
  t54792 = t33073*t31536*t54787;
  t54793 = -1.*t31754*t54787*t33078;
  t54794 = t54792 + t54793;
  t54798 = t31536*t31754*t53829;
  t54799 = t33073*t53829*t33078;
  t54800 = t54798 + t54799;
  t54791 = -1.*t44688*t54790;
  t54803 = -0.305*t32469*t32606;
  t54804 = t54803 + t46799;
  t54810 = t33073*t31536*t53829;
  t54811 = -1.*t31754*t53829*t33078;
  t54812 = t54810 + t54811;
  t54807 = t44801*t54790;
  t54809 = t54800*t46842;
  t54818 = t54804*t33511;
  t54819 = t33088*t54794;
  t54820 = t54818 + t54819;
  t54822 = t33088*t54804;
  t54823 = -1.*t33511*t54794;
  t54824 = t54822 + t54823;
  t54828 = t44784*t33511;
  t54830 = t33088*t54812;
  t54831 = t54828 + t54830;
  t54331 = -1.*t44784*t46801;
  t54332 = t54331 + t48009;
  t54353 = t46801*t33031;
  t54357 = t48028 + t54353;
  t54361 = -1.*t44784*t46683;
  t54402 = -1.*t33073*t44784*t46803;
  t54406 = -1.*t31754*t44784*t46824;
  t54407 = t48009 + t54402 + t54406;
  t54866 = t33107*t54804;
  t54910 = -1.*t54804*t33031;
  t54448 = t33073*t33031*t46803;
  t54451 = t31754*t33031*t46824;
  t54457 = t48028 + t54448 + t54451;
  t54976 = t54790*t33082;
  t54981 = -1.*t44801*t54790;
  t54983 = -1.*t54800*t46842;
  t54837 = t33088*t44784;
  t54838 = -1.*t33511*t54812;
  t54839 = t54837 + t54838;
  t54592 = -0.15121*t53829;
  t54593 = -0.15121*t33031;
  t54594 = t54592 + t54593;
  t54595 = var2[12]*t54594;
  t54596 = -1.*t31754*t46803;
  t54597 = t33073*t46824;
  t54598 = t54596 + t54597;
  t55052 = t44688*t54790;
  t55060 = -1.*t54790*t33082;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t30069*t33082 - 1.*t33085*t34577)*var2[1] + t40082*var2[2];
  p_output1[10]=(t33085*t33511*t44535 - 1.*t30069*t44688)*var2[1] + (t30069*t33511*t44535 + t33085*t44688)*var2[2];
  p_output1[11]=(-1.*t30069*t44801 - 1.*t33085*t45021)*var2[1] + t45147*var2[2];
  p_output1[12]=t34577*var2[0] - 1.*t30069*t45238*var2[1] + t33085*t45238*var2[2] + (t45310*(t33511*t44535*t46828 + t33511*t44535*t46835) + t45021*t46855 + t33088*t44535*(t45021*t46828 + t45021*t46835 + t45310*t46853 + t46853*t46898) - 1.*t33511*t44535*t46928)*var2[3];
  p_output1[13]=-1.*t33511*t44535*var2[0] + t30069*t33088*t44535*var2[1] - 1.*t33085*t33088*t44535*var2[2] + ((-1.*t45021*t46828 - 1.*t45021*t46835 - 1.*t45310*t46853 - 1.*t46853*t46898)*t46994 + t45310*(t34577*t46828 + t34577*t46835 + t45238*t46853 + t46853*t46994) + t34577*t47021 + t45021*t47037)*var2[3];
  p_output1[14]=t45021*var2[0] - 1.*t30069*t46898*var2[1] + t33085*t46898*var2[2] + ((-1.*t33511*t44535*t46828 - 1.*t33511*t44535*t46835)*t46994 + t33088*t44535*(-1.*t34577*t46828 - 1.*t34577*t46835 - 1.*t45238*t46853 - 1.*t46853*t46994) + t34577*t47692 - 1.*t33511*t44535*t47714)*var2[3];
  p_output1[15]=t47747 + t47759 + t47772 + (t47889 + t45310*(t47826 + t47829 - 1.*t44535*t47822*t47893 - 1.*t44535*t47822*t47895 + t47900 + t47901) + t33088*t44535*(-1.*t33511*t45021*t47822 + t33088*t45310*t47822 + t47849 + t47856 + t47917 + t47921) + t47932)*var2[3] + (t47818 + t44801*(-1.*t44535*t47822 + t47826 + t47829 + t47839) + t44688*(t44992*t47822 + t47849 + t47855 + t47856) + t47885)*var2[4];
  p_output1[16]=t47976 + t47990 + t47999 + (t46994*(t33511*t45021*t47822 - 1.*t33088*t45310*t47822 + t48001 + t48005 + t51932 + t51936) + t45310*(-1.*t33511*t34577*t47822 + t33088*t46994*t47822 + t48017 + t48020 + t51952 + t51961) + t52043 + t52063)*var2[3] + (t33082*(-1.*t44992*t47822 + t48001 + t48004 + t48005) + t48012 + t44801*(t33573*t47822 + t48017 + t48019 + t48020) + t51323)*var2[4];
  p_output1[17]=t52135 + t52147 + t52195 + (t52323 + t46994*(t44535*t47822*t47893 + t44535*t47822*t47895 + t52261 + t52263 + t52331 + t52337) + t33088*t44535*(t33511*t34577*t47822 - 1.*t33088*t46994*t47822 + t52277 + t52282 + t52358 + t52359) + t52393)*var2[3] + (t52240 + t33082*(t44535*t47822 + t52261 + t52263 + t52266) + t44688*(-1.*t33573*t47822 + t52277 + t52279 + t52282) + t52312)*var2[4];
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
  p_output1[36]=t47747 + t47759 + t47772 + (t47889 + t47932 + t45310*(t47826 + t47900 + t47901 - 1.*t44535*t47893*t53154 - 1.*t44535*t47895*t53154 + t53216) + t33088*t44535*(t47849 + t47917 + t47921 - 1.*t33511*t45021*t53154 + t33088*t45310*t53154 + t53308))*var2[3] + (t47818 + t47885 + t44801*(t47826 + t47839 - 1.*t44535*t53154 + t53216) + t44688*(t47849 + t47855 + t44992*t53154 + t53308))*var2[4] + t33031*(t33073*t46803 + t31754*t46824 - 1.*t33073*t52460 + t31754*t53040)*var2[5];
  p_output1[37]=t47976 + t47990 + t47999 + (t52043 + t52063 + t46994*(t48001 + t51932 + t51936 + t33511*t45021*t53154 - 1.*t33088*t45310*t53154 + t53513) + t45310*(t48017 + t51952 + t51961 - 1.*t33511*t34577*t53154 + t33088*t46994*t53154 + t53535))*var2[3] + (t48012 + t51323 + t33082*(t48001 + t48004 - 1.*t44992*t53154 + t53513) + t44801*(t48017 + t48019 + t33573*t53154 + t53535))*var2[4] + (t33031*(-1.*t31754*t33031*t46803 + t33031*t33073*t46824 + t31754*t33031*t52460 + t33031*t33073*t53040) + t33107*(t31754*t44784*t46803 - 1.*t33073*t44784*t46824 - 1.*t31754*t44784*t52460 - 1.*t33073*t44784*t53040))*var2[5];
  p_output1[38]=t52135 + t52147 + t52195 + (t52323 + t52393 + t46994*(t52261 + t52331 + t52337 + t44535*t47893*t53154 + t44535*t47895*t53154 + t53660) + t33088*t44535*(t52277 + t52358 + t52359 + t33511*t34577*t53154 - 1.*t33088*t46994*t53154 + t53675))*var2[3] + (t52240 + t52312 + t33082*(t52261 + t52266 + t44535*t53154 + t53660) + t44688*(t52277 + t52279 - 1.*t33573*t53154 + t53675))*var2[4] + t33107*(-1.*t33073*t46803 - 1.*t31754*t46824 + t33073*t52460 - 1.*t31754*t53040)*var2[5];
  p_output1[39]=t53855*var2[0] + (t33085*t53872 - 1.*t30069*t53887)*var2[1] + (t30069*t53872 + t33085*t53887)*var2[2] + (t46855*t46994 + t45310*(t53955 - 1.*t33088*t44535*t54183 + t33511*t44535*t54197) + t33088*t44535*(t47033 + t47034 + t47036 + t54115 + t45310*t54183 + t45021*t54197))*var2[3] + (t33082*t47817 + t44801*(t53955 - 1.*t44535*t54014) + t44688*(t47033 + t48028 + t48029 + t44992*t54014 + t33031*t54091 + t54115))*var2[4] + t33107*t53760*var2[5];
  p_output1[40]=(t46994*t47037 + t47021*t53855 + t45310*(t46835*t53855 + t46853*t53887 + t46994*t54183 + t34577*t54197 + t54524 + t54533) + t46994*(t47709 + t47710 + t47711 - 1.*t45310*t54183 - 1.*t45021*t54197 + t54541))*var2[3] + (t33082*t51320 + t48011*t53872 + t44801*(t46826*t53845 + t33573*t54014 + t54337 + t54345 + t54524 + t54533) + t33082*(t47709 + t52291 + t52296 - 1.*t44992*t54014 + t54367 + t54541))*var2[4] + (t53829*t54407 + t33031*(t33073*t33107*t46803 + t31754*t33107*t46824 + t54337 + t54345 + t33031*t46683*t54412 + t33031*t46683*t54414) + t33107*(-1.*t33031*t33073*t46803 - 1.*t31754*t33031*t46824 + t52291 + t54367 - 1.*t44784*t46683*t54412 - 1.*t44784*t46683*t54414) + t33107*t54457)*var2[5] + (t53829*t54332 + t33031*(t33107*t46801 + t47874 + t54337 + t54345) + t33107*t54357 + t33107*(-1.*t33031*t46801 + t52291 + t54361 + t54367))*var2[12];
  p_output1[41]=t54595 + t46994*var2[0] + t40082*var2[1] + (t30069*t33082 + t33085*t34577)*var2[2] + (t47692*t53855 + t46994*(t33088*t44535*t54183 - 1.*t33511*t44535*t54197 + t54647) + t33088*t44535*(-1.*t46835*t53855 - 1.*t46853*t53887 - 1.*t46994*t54183 - 1.*t34577*t54197 + t54679 + t54681))*var2[3] + (t52221*t53872 + t33082*(t44535*t54014 + t54647) + t44688*(-1.*t46683*t53829 - 1.*t46826*t53845 - 1.*t33573*t54014 - 1.*t33107*t54091 + t54679 + t54681))*var2[4] + t53829*t54598*var2[5];
  p_output1[42]=t45310*var2[0] + t45147*var2[1] + (t30069*t44801 + t33085*t45021)*var2[2] + (t45310*(t54791 - 1.*t33088*t44535*t54820 + t33511*t44535*t54824) + t46855*t54831 + t33088*t44535*(t54807 + t54809 + t45310*t54820 + t45021*t54824 + t46835*t54831 + t46853*t54839))*var2[3] + (t44801*(t54791 - 1.*t44535*t54794) + t47817*t54800 + t44688*(t44784*t46683 + t44992*t54794 + t33031*t54804 + t54807 + t54809 + t46826*t54812))*var2[4] + t44784*t53760*var2[5] + (0.28121*t32606 - 0.305*Power(t32606,2) - 1.*t32606*t45385)*var2[13];
  p_output1[43]=(t45310*t47021 + t47037*t54831 + t45310*(t46919 + t46920 + t46925 + t46994*t54820 + t34577*t54824 + t54976) + t46994*(-1.*t45310*t54820 - 1.*t45021*t54824 - 1.*t46835*t54831 - 1.*t46853*t54839 + t54981 + t54983))*var2[3] + (t44801*t48011 + t51320*t54800 + t44801*(t46919 + t47874 + t47879 + t33573*t54794 + t54866 + t54976) + t33082*(t54361 - 1.*t44992*t54794 - 1.*t46826*t54812 + t54910 + t54981 + t54983))*var2[4] + (t33031*t54407 + t44784*t54457 + t33031*(t33073*t44784*t46803 + t31754*t44784*t46824 + t47874 + t33031*t54412*t54787 + t33031*t54414*t54787 + t54866) + t33107*(-1.*t33073*t46803*t53829 - 1.*t31754*t46824*t53829 + t54361 - 1.*t44784*t54412*t54787 - 1.*t44784*t54414*t54787 + t54910))*var2[5] + (t33031*t54332 + t44784*t54357 + t33031*(t44784*t46801 + t47874 + t33031*t54787 + t54866) + t33107*(-1.*t46801*t53829 + t54361 - 1.*t44784*t54787 + t54910))*var2[12];
  p_output1[44]=t54595 + t54831*var2[0] + (t33085*t54800 - 1.*t30069*t54839)*var2[1] + (t30069*t54800 + t33085*t54839)*var2[2] + (t45310*t47692 + t46994*(t33088*t44535*t54820 - 1.*t33511*t44535*t54824 + t55052) + t33088*t44535*(t47016 + t47019 + t47020 - 1.*t46994*t54820 - 1.*t34577*t54824 + t55060))*var2[3] + (t44801*t52221 + t33082*(t44535*t54794 + t55052) + t44688*(t47016 + t48009 + t48010 - 1.*t33573*t54794 - 1.*t33107*t54804 + t55060))*var2[4] + t33031*t54598*var2[5] + (-0.28121*t32965 + 0.305*t32606*t32965 + t32965*t45385)*var2[13];
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

#include "dJh_FrFoot_DiagonalStance.hh"

namespace SymFunction
{

void dJh_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
