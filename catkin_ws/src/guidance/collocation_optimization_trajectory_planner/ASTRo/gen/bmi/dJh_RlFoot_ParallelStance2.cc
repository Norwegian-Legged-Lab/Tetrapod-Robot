/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:52:37 GMT+02:00
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
  double t24497;
  double t27593;
  double t41318;
  double t45279;
  double t45527;
  double t45691;
  double t45747;
  double t45807;
  double t6492;
  double t21756;
  double t45811;
  double t46423;
  double t45802;
  double t45825;
  double t46414;
  double t3465;
  double t46428;
  double t46433;
  double t46436;
  double t46437;
  double t46438;
  double t46440;
  double t46441;
  double t46442;
  double t46636;
  double t46645;
  double t46646;
  double t46670;
  double t46677;
  double t46681;
  double t46684;
  double t46692;
  double t46693;
  double t46774;
  double t46776;
  double t46780;
  double t46791;
  double t46793;
  double t46794;
  double t46796;
  double t46806;
  double t46818;
  double t46819;
  double t46821;
  double t46848;
  double t46889;
  double t46890;
  double t46891;
  double t46966;
  double t46972;
  double t46973;
  double t46987;
  double t46989;
  double t47032;
  double t47033;
  double t47036;
  double t47049;
  double t47050;
  double t47056;
  double t47057;
  double t47064;
  double t46955;
  double t47012;
  double t47013;
  double t47017;
  double t47035;
  double t47066;
  double t47125;
  double t47173;
  double t47209;
  double t47225;
  double t47233;
  double t47253;
  double t47261;
  double t47280;
  double t47291;
  double t47363;
  double t47376;
  double t47399;
  double t47018;
  double t47293;
  double t47317;
  double t47530;
  double t47538;
  double t47549;
  double t46916;
  double t46917;
  double t46920;
  double t47422;
  double t47436;
  double t47444;
  double t47667;
  double t47685;
  double t47688;
  double t47885;
  double t47886;
  double t47887;
  double t48789;
  double t48790;
  double t48797;
  double t47467;
  double t48836;
  double t48843;
  double t48850;
  double t47803;
  double t48930;
  double t48935;
  double t48945;
  double t47485;
  double t47605;
  double t47614;
  double t48855;
  double t48916;
  double t48857;
  double t48875;
  double t48879;
  double t48929;
  double t48957;
  double t47819;
  double t47821;
  double t47826;
  double t47901;
  double t47937;
  double t49379;
  double t49389;
  double t49459;
  double t49496;
  double t47902;
  double t47904;
  double t47907;
  double t47939;
  double t47940;
  double t47946;
  double t48199;
  double t48516;
  double t48248;
  double t48282;
  double t48291;
  double t49132;
  double t49137;
  double t49823;
  double t49830;
  double t49912;
  double t49930;
  double t48636;
  double t48669;
  double t48723;
  double t48804;
  double t48808;
  double t48810;
  double t48811;
  double t48812;
  double t48814;
  double t48815;
  double t48816;
  double t48821;
  double t48825;
  double t48827;
  double t48830;
  double t50081;
  double t50082;
  double t50083;
  double t50074;
  double t48886;
  double t50091;
  double t50095;
  double t50102;
  double t50106;
  double t50110;
  double t50111;
  double t48954;
  double t49031;
  double t49038;
  double t49054;
  double t49098;
  double t49131;
  double t50114;
  double t49191;
  double t49198;
  double t50127;
  double t49209;
  double t49210;
  double t49235;
  double t49270;
  double t49274;
  double t49304;
  double t49311;
  double t49317;
  double t49332;
  double t49334;
  double t49348;
  double t49355;
  double t49381;
  double t49401;
  double t49409;
  double t49414;
  double t49439;
  double t49477;
  double t49503;
  double t49505;
  double t49509;
  double t49510;
  double t50534;
  double t49517;
  double t49526;
  double t50548;
  double t49548;
  double t49550;
  double t49560;
  double t49566;
  double t49597;
  double t49600;
  double t49602;
  double t49632;
  double t49643;
  double t49657;
  double t49661;
  double t49721;
  double t49726;
  double t49731;
  double t49737;
  double t49760;
  double t49827;
  double t49927;
  double t49938;
  double t49942;
  double t49948;
  double t49949;
  double t49962;
  double t50639;
  double t50026;
  double t50029;
  double t50645;
  double t50044;
  double t50048;
  double t50062;
  double t50687;
  double t50691;
  double t50692;
  double t50739;
  double t50747;
  double t50748;
  double t50760;
  double t50761;
  double t50766;
  double t50779;
  double t50780;
  double t50781;
  double t50790;
  double t50791;
  double t50792;
  double t50793;
  double t50794;
  double t50795;
  double t50797;
  double t50799;
  double t50800;
  double t50801;
  double t50798;
  double t50806;
  double t50808;
  double t50810;
  double t50817;
  double t50818;
  double t50819;
  double t50821;
  double t50822;
  double t50824;
  double t50879;
  double t50912;
  double t50935;
  double t50937;
  double t50921;
  double t51076;
  double t51078;
  double t50736;
  double t50751;
  double t50752;
  double t51102;
  double t46662;
  double t46664;
  double t46665;
  double t51214;
  double t51227;
  double t51229;
  double t50695;
  double t50697;
  double t50707;
  double t50710;
  double t50714;
  double t50716;
  double t50721;
  double t46871;
  double t46878;
  double t46880;
  double t51296;
  double t51300;
  double t51301;
  double t51302;
  double t51304;
  double t51306;
  double t51307;
  double t51308;
  double t51312;
  double t51315;
  double t51316;
  double t51305;
  double t51319;
  double t51322;
  double t51323;
  double t51328;
  double t51329;
  double t51330;
  double t51325;
  double t51327;
  double t51338;
  double t51339;
  double t51340;
  double t51343;
  double t51344;
  double t51345;
  double t51354;
  double t51356;
  double t51357;
  double t50837;
  double t50855;
  double t50915;
  double t50916;
  double t50956;
  double t50959;
  double t50975;
  double t51568;
  double t51069;
  double t51070;
  double t51072;
  double t51596;
  double t51609;
  double t51652;
  double t51661;
  double t51663;
  double t51388;
  double t51391;
  double t51410;
  double t51176;
  double t51177;
  double t51180;
  double t51713;
  double t51724;
  t24497 = Cos(var1[10]);
  t27593 = Cos(var1[11]);
  t41318 = -1.*t24497*t27593;
  t45279 = Sin(var1[10]);
  t45527 = Sin(var1[11]);
  t45691 = -1.*t45279*t45527;
  t45747 = t41318 + t45691;
  t45807 = Cos(var1[9]);
  t6492 = Cos(var1[5]);
  t21756 = Sin(var1[9]);
  t45811 = Sin(var1[5]);
  t46423 = Cos(var1[3]);
  t45802 = t6492*t21756*t45747;
  t45825 = t45807*t45747*t45811;
  t46414 = t45802 + t45825;
  t3465 = Sin(var1[3]);
  t46428 = Cos(var1[4]);
  t46433 = -1.*t27593*t45279;
  t46436 = t24497*t45527;
  t46437 = t46433 + t46436;
  t46438 = t46428*t46437;
  t46440 = Sin(var1[4]);
  t46441 = t45807*t6492*t45747;
  t46442 = -1.*t21756*t45747*t45811;
  t46636 = t46441 + t46442;
  t46645 = -1.*t46440*t46636;
  t46646 = t46438 + t46645;
  t46670 = t6492*t21756;
  t46677 = t45807*t45811;
  t46681 = t46670 + t46677;
  t46684 = -1.*t45807*t6492;
  t46692 = t21756*t45811;
  t46693 = t46684 + t46692;
  t46774 = t6492*t21756*t46437;
  t46776 = t45807*t46437*t45811;
  t46780 = t46774 + t46776;
  t46791 = t24497*t27593;
  t46793 = t45279*t45527;
  t46794 = t46791 + t46793;
  t46796 = t46428*t46794;
  t46806 = t45807*t6492*t46437;
  t46818 = -1.*t21756*t46437*t45811;
  t46819 = t46806 + t46818;
  t46821 = -1.*t46440*t46819;
  t46848 = t46796 + t46821;
  t46889 = -1.*t46437*t46440;
  t46890 = -1.*t46428*t46636;
  t46891 = t46889 + t46890;
  t46966 = -1.*t27593;
  t46972 = 1. + t46966;
  t46973 = -0.50321*t46972;
  t46987 = -0.23321*t27593;
  t46989 = t46973 + t46987;
  t47032 = -1.*t45807;
  t47033 = 1. + t47032;
  t47036 = -1.*t24497;
  t47049 = 1. + t47036;
  t47050 = -0.28121*t47049;
  t47056 = t24497*t46989;
  t47057 = 0.27*t45279*t45527;
  t47064 = t47050 + t47056 + t47057;
  t46955 = 0.28121*t45279;
  t47012 = t46989*t45279;
  t47013 = -0.27*t24497*t45527;
  t47017 = t46955 + t47012 + t47013;
  t47035 = -0.15121*t47033;
  t47066 = t45807*t47064;
  t47125 = t47035 + t47066;
  t47173 = t6492*t47125;
  t47209 = 0.15121*t47033;
  t47225 = 0.15121*t45807;
  t47233 = 0.15121*t21756;
  t47253 = t21756*t47064;
  t47261 = t47209 + t47225 + t47233 + t47253;
  t47280 = -1.*t47261*t45811;
  t47291 = t47173 + t47280;
  t47363 = t47017*t46440;
  t47376 = t46428*t47291;
  t47399 = t47363 + t47376;
  t47018 = -1.*t47017*t46440;
  t47293 = -1.*t46428*t47291;
  t47317 = t47018 + t47293;
  t47530 = t46428*t47017;
  t47538 = -1.*t46440*t47291;
  t47549 = t47530 + t47538;
  t46916 = t46794*t46440;
  t46917 = t46428*t46819;
  t46920 = t46916 + t46917;
  t47422 = t6492*t47261;
  t47436 = t47125*t45811;
  t47444 = t47422 + t47436;
  t47667 = -1.*t46794*t46440;
  t47685 = -1.*t46428*t46819;
  t47688 = t47667 + t47685;
  t47885 = t46437*t46440;
  t47886 = t46428*t46636;
  t47887 = t47885 + t47886;
  t48789 = -1.*t6492*t21756*t45747;
  t48790 = -1.*t45807*t45747*t45811;
  t48797 = t48789 + t48790;
  t47467 = -1.*t46693*t47444;
  t48836 = -1.*t6492*t47261;
  t48843 = -1.*t47125*t45811;
  t48850 = t48836 + t48843;
  t47803 = t46780*t47444;
  t48930 = -1.*t6492*t21756*t46437;
  t48935 = -1.*t45807*t46437*t45811;
  t48945 = t48930 + t48935;
  t47485 = -1.*t46428*t46681*t47399;
  t47605 = t46440*t46681*t47549;
  t47614 = t47467 + t47485 + t47605;
  t48855 = -1.*t46681*t47444;
  t48916 = -1.*t46693*t47291;
  t48857 = t45807*t6492;
  t48875 = -1.*t21756*t45811;
  t48879 = t48857 + t48875;
  t48929 = t46819*t47444;
  t48957 = t46780*t47291;
  t47819 = t46920*t47399;
  t47821 = t46848*t47549;
  t47826 = t47803 + t47819 + t47821;
  t47901 = -1.*t46780*t47444;
  t47937 = t46414*t47444;
  t49379 = -1.*t46819*t47444;
  t49389 = -1.*t46780*t47291;
  t49459 = t46636*t47444;
  t49496 = t46414*t47291;
  t47902 = -1.*t46920*t47399;
  t47904 = -1.*t46848*t47549;
  t47907 = t47901 + t47902 + t47904;
  t47939 = t47887*t47399;
  t47940 = t46646*t47549;
  t47946 = t47937 + t47939 + t47940;
  t48199 = t46693*t47444;
  t48516 = -1.*t46414*t47444;
  t48248 = t46428*t46681*t47399;
  t48282 = -1.*t46440*t46681*t47549;
  t48291 = t48199 + t48248 + t48282;
  t49132 = Power(t46428,2);
  t49137 = Power(t46440,2);
  t49823 = t46681*t47444;
  t49830 = t46693*t47291;
  t49912 = -1.*t46636*t47444;
  t49930 = -1.*t46414*t47291;
  t48636 = -1.*t47887*t47399;
  t48669 = -1.*t46646*t47549;
  t48723 = t48516 + t48636 + t48669;
  t48804 = var2[0]*t46428*t48797;
  t48808 = t3465*t46440*t48797;
  t48810 = t46423*t46636;
  t48811 = t48808 + t48810;
  t48812 = var2[1]*t48811;
  t48814 = -1.*t46423*t46440*t48797;
  t48815 = t3465*t46636;
  t48816 = t48814 + t48815;
  t48821 = var2[2]*t48816;
  t48825 = -1.*t46681*t47291;
  t48827 = t47467 + t48825;
  t48830 = t46819*t48827;
  t50081 = -0.15121*t21756;
  t50082 = -1.*t21756*t47064;
  t50083 = t50081 + t50082;
  t50074 = t47225 + t47066;
  t48886 = -1.*t48879*t47291;
  t50091 = t6492*t50083;
  t50095 = -1.*t50074*t45811;
  t50102 = t50091 + t50095;
  t50106 = t6492*t50074;
  t50110 = t50083*t45811;
  t50111 = t50106 + t50110;
  t48954 = t48945*t47291;
  t49031 = t47017*t46794;
  t49038 = t46819*t47291;
  t49054 = t49031 + t47803 + t49038;
  t49098 = t46681*t49054;
  t49131 = t46428*t48945*t47614;
  t50114 = -1.*t46693*t50111;
  t49191 = -1.*t46428*t48879*t47399;
  t49198 = t46440*t48879*t47549;
  t50127 = t46780*t50111;
  t49209 = t46428*t48945*t47399;
  t49210 = -1.*t46440*t48945*t47549;
  t49235 = t46428*t48879*t47826;
  t49270 = var2[0]*t46428*t48879;
  t49274 = t3465*t46681;
  t49304 = -1.*t46423*t46440*t48879;
  t49311 = t49274 + t49304;
  t49317 = var2[2]*t49311;
  t49332 = t46423*t46681;
  t49334 = t3465*t46440*t48879;
  t49348 = t49332 + t49334;
  t49355 = var2[1]*t49348;
  t49381 = -1.*t48945*t47291;
  t49401 = -1.*t47017*t46794;
  t49409 = -1.*t46819*t47291;
  t49414 = t49401 + t47901 + t49409;
  t49439 = t46636*t49414;
  t49477 = t48797*t47291;
  t49503 = t47017*t46437;
  t49505 = t46636*t47291;
  t49509 = t49503 + t47937 + t49505;
  t49510 = t46819*t49509;
  t50534 = -1.*t46780*t50111;
  t49517 = -1.*t46428*t48945*t47399;
  t49526 = t46440*t48945*t47549;
  t50548 = t46414*t50111;
  t49548 = t46428*t48797*t47399;
  t49550 = -1.*t46440*t48797*t47549;
  t49560 = t46428*t48797*t47907;
  t49566 = t46428*t48945*t47946;
  t49597 = var2[0]*t46428*t48945;
  t49600 = t3465*t46440*t48945;
  t49602 = t46423*t46819;
  t49632 = t49600 + t49602;
  t49643 = var2[1]*t49632;
  t49657 = -1.*t46423*t46440*t48945;
  t49661 = t3465*t46819;
  t49721 = t49657 + t49661;
  t49726 = var2[2]*t49721;
  t49731 = t46681*t47291;
  t49737 = t48199 + t49731;
  t49760 = t46636*t49737;
  t49827 = t48879*t47291;
  t49927 = -1.*t48797*t47291;
  t49938 = -1.*t47017*t46437;
  t49942 = -1.*t46636*t47291;
  t49948 = t49938 + t48516 + t49942;
  t49949 = t46681*t49948;
  t49962 = t46428*t48797*t48291;
  t50639 = t46693*t50111;
  t50026 = t46428*t48879*t47399;
  t50029 = -1.*t46440*t48879*t47549;
  t50645 = -1.*t46414*t50111;
  t50044 = -1.*t46428*t48797*t47399;
  t50048 = t46440*t48797*t47549;
  t50062 = t46428*t48879*t48723;
  t50687 = t27593*t45279;
  t50691 = -1.*t24497*t45527;
  t50692 = t50687 + t50691;
  t50739 = t45807*t6492*t50692;
  t50747 = -1.*t21756*t50692*t45811;
  t50748 = t50739 + t50747;
  t50760 = t6492*t21756*t50692;
  t50761 = t45807*t50692*t45811;
  t50766 = t50760 + t50761;
  t50779 = t46428*t45747;
  t50780 = -1.*t46440*t50748;
  t50781 = t50779 + t50780;
  t50790 = -0.28121*t45279;
  t50791 = -1.*t46989*t45279;
  t50792 = 0.27*t24497*t45527;
  t50793 = t50790 + t50791 + t50792;
  t50794 = t6492*t21756*t50793;
  t50795 = t45807*t50793*t45811;
  t50797 = t50794 + t50795;
  t50799 = t45807*t6492*t50793;
  t50800 = -1.*t21756*t50793*t45811;
  t50801 = t50799 + t50800;
  t50798 = -1.*t46693*t50797;
  t50806 = 0.28121*t24497;
  t50808 = t50806 + t47056 + t47057;
  t50810 = t50797*t46780;
  t50817 = t50808*t46440;
  t50818 = t46428*t50801;
  t50819 = t50817 + t50818;
  t50821 = t46428*t50808;
  t50822 = -1.*t46440*t50801;
  t50824 = t50821 + t50822;
  t50879 = t47017*t45747;
  t50912 = t46437*t50808;
  t50935 = Power(t45807,2);
  t50937 = Power(t21756,2);
  t50921 = -1.*t50808*t46794;
  t51076 = t50797*t46414;
  t51078 = t50766*t47444;
  t50736 = t45747*t46440;
  t50751 = t46428*t50748;
  t50752 = t50736 + t50751;
  t51102 = -1.*t50797*t46780;
  t46662 = t46423*t46414;
  t46664 = -1.*t3465*t46646;
  t46665 = t46662 + t46664;
  t51214 = t46693*t50797;
  t51227 = -1.*t50797*t46414;
  t51229 = -1.*t50766*t47444;
  t50695 = 0.15121*t50692;
  t50697 = 0.15121*t46437;
  t50707 = t50695 + t50697;
  t50710 = var2[9]*t50707;
  t50714 = -1.*t21756*t47125;
  t50716 = t45807*t47261;
  t50721 = t50714 + t50716;
  t46871 = t46423*t46780;
  t46878 = -1.*t3465*t46848;
  t46880 = t46871 + t46878;
  t51296 = 0.27*t27593*t45279;
  t51300 = t51296 + t47013;
  t51301 = t6492*t21756*t51300;
  t51302 = t45807*t51300*t45811;
  t51304 = t51301 + t51302;
  t51306 = t45807*t6492*t51300;
  t51307 = -1.*t21756*t51300*t45811;
  t51308 = t51306 + t51307;
  t51312 = t6492*t21756*t46794;
  t51315 = t45807*t46794*t45811;
  t51316 = t51312 + t51315;
  t51305 = -1.*t46693*t51304;
  t51319 = -0.27*t24497*t27593;
  t51322 = -0.27*t45279*t45527;
  t51323 = t51319 + t51322;
  t51328 = t45807*t6492*t46794;
  t51329 = -1.*t21756*t46794*t45811;
  t51330 = t51328 + t51329;
  t51325 = t51304*t46780;
  t51327 = t51316*t47444;
  t51338 = t51323*t46440;
  t51339 = t46428*t51308;
  t51340 = t51338 + t51339;
  t51343 = t46428*t51323;
  t51344 = -1.*t46440*t51308;
  t51345 = t51343 + t51344;
  t51354 = t50692*t46440;
  t51356 = t46428*t51330;
  t51357 = t51354 + t51356;
  t50837 = t45747*t47064;
  t50855 = t49503 + t50837;
  t50915 = -1.*t46437*t47064;
  t50916 = t50915 + t49401;
  t50956 = -1.*t45807*t46437*t47125;
  t50959 = -1.*t21756*t46437*t47261;
  t50975 = t49401 + t50956 + t50959;
  t51568 = t46437*t51323;
  t51069 = t45807*t45747*t47125;
  t51070 = t21756*t45747*t47261;
  t51072 = t49503 + t51069 + t51070;
  t51596 = -1.*t50692*t47017;
  t51609 = -1.*t51323*t46794;
  t51652 = t51304*t46414;
  t51661 = -1.*t51304*t46780;
  t51663 = -1.*t51316*t47444;
  t51388 = t46428*t50692;
  t51391 = -1.*t46440*t51330;
  t51410 = t51388 + t51391;
  t51176 = t21756*t47125;
  t51177 = -1.*t45807*t47261;
  t51180 = t51176 + t51177;
  t51713 = t46693*t51304;
  t51724 = -1.*t51304*t46414;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t3465*t46414 - 1.*t46423*t46646)*var2[1] + t46665*var2[2];
  p_output1[10]=(t46423*t46440*t46681 - 1.*t3465*t46693)*var2[1] + (t3465*t46440*t46681 + t46423*t46693)*var2[2];
  p_output1[11]=(-1.*t3465*t46780 - 1.*t46423*t46848)*var2[1] + t46880*var2[2];
  p_output1[12]=t46646*var2[0] - 1.*t3465*t46891*var2[1] + t46423*t46891*var2[2] + (t46920*(t46440*t46681*t47317 + t46440*t46681*t47399) + t46848*t47614 + t46428*t46681*(t46848*t47317 + t46848*t47399 + t46920*t47549 + t47549*t47688) - 1.*t46440*t46681*t47826)*var2[3];
  p_output1[13]=-1.*t46440*t46681*var2[0] + t3465*t46428*t46681*var2[1] - 1.*t46423*t46428*t46681*var2[2] + ((-1.*t46848*t47317 - 1.*t46848*t47399 - 1.*t46920*t47549 - 1.*t47549*t47688)*t47887 + t46920*(t46646*t47317 + t46646*t47399 + t46891*t47549 + t47549*t47887) + t46646*t47907 + t46848*t47946)*var2[3];
  p_output1[14]=t46848*var2[0] - 1.*t3465*t47688*var2[1] + t46423*t47688*var2[2] + ((-1.*t46440*t46681*t47317 - 1.*t46440*t46681*t47399)*t47887 + t46428*t46681*(-1.*t46646*t47317 - 1.*t46646*t47399 - 1.*t46891*t47549 - 1.*t47549*t47887) + t46646*t48291 - 1.*t46440*t46681*t48723)*var2[3];
  p_output1[15]=t48804 + t48812 + t48821 + (t49131 + t46920*(t48855 + t48916 - 1.*t46681*t48850*t49132 - 1.*t46681*t48850*t49137 + t49191 + t49198) + t46428*t46681*(-1.*t46440*t46848*t48850 + t46428*t46920*t48850 + t48929 + t48957 + t49209 + t49210) + t49235)*var2[3] + (t48830 + t46780*(-1.*t46681*t48850 + t48855 + t48886 + t48916) + t46693*(t46819*t48850 + t48929 + t48954 + t48957) + t49098)*var2[4];
  p_output1[16]=t49270 + t49317 + t49355 + (t47887*(t46440*t46848*t48850 - 1.*t46428*t46920*t48850 + t49379 + t49389 + t49517 + t49526) + t46920*(-1.*t46440*t46646*t48850 + t46428*t47887*t48850 + t49459 + t49496 + t49548 + t49550) + t49560 + t49566)*var2[3] + (t46414*(-1.*t46819*t48850 + t49379 + t49381 + t49389) + t49439 + t46780*(t46636*t48850 + t49459 + t49477 + t49496) + t49510)*var2[4];
  p_output1[17]=t49597 + t49643 + t49726 + (t49962 + t47887*(t46681*t48850*t49132 + t46681*t48850*t49137 + t49823 + t49830 + t50026 + t50029) + t46428*t46681*(t46440*t46646*t48850 - 1.*t46428*t47887*t48850 + t49912 + t49930 + t50044 + t50048) + t50062)*var2[3] + (t49760 + t46414*(t46681*t48850 + t49823 + t49827 + t49830) + t46693*(-1.*t46636*t48850 + t49912 + t49927 + t49930) + t49949)*var2[4];
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=t48804 + t48812 + t48821 + (t49131 + t49235 + t46920*(t48855 + t49191 + t49198 - 1.*t46681*t49132*t50102 - 1.*t46681*t49137*t50102 + t50114) + t46428*t46681*(t48929 + t49209 + t49210 - 1.*t46440*t46848*t50102 + t46428*t46920*t50102 + t50127))*var2[3] + (t48830 + t49098 + t46780*(t48855 + t48886 - 1.*t46681*t50102 + t50114) + t46693*(t48929 + t48954 + t46819*t50102 + t50127))*var2[4] + t46794*(-1.*t45807*t47125 - 1.*t21756*t47261 + t45807*t50074 - 1.*t21756*t50083)*var2[5];
  p_output1[28]=t49270 + t49317 + t49355 + (t49560 + t49566 + t47887*(t49379 + t49517 + t49526 + t46440*t46848*t50102 - 1.*t46428*t46920*t50102 + t50534) + t46920*(t49459 + t49548 + t49550 - 1.*t46440*t46646*t50102 + t46428*t47887*t50102 + t50548))*var2[3] + (t49439 + t49510 + t46414*(t49379 + t49381 - 1.*t46819*t50102 + t50534) + t46780*(t49459 + t49477 + t46636*t50102 + t50548))*var2[4] + (t46794*(-1.*t21756*t45747*t47125 + t45747*t45807*t47261 + t21756*t45747*t50074 + t45747*t45807*t50083) + t46437*(t21756*t46437*t47125 - 1.*t45807*t46437*t47261 - 1.*t21756*t46437*t50074 - 1.*t45807*t46437*t50083))*var2[5];
  p_output1[29]=t49597 + t49643 + t49726 + (t49962 + t50062 + t47887*(t49823 + t50026 + t50029 + t46681*t49132*t50102 + t46681*t49137*t50102 + t50639) + t46428*t46681*(t49912 + t50044 + t50048 + t46440*t46646*t50102 - 1.*t46428*t47887*t50102 + t50645))*var2[3] + (t49760 + t49949 + t46414*(t49823 + t49827 + t46681*t50102 + t50639) + t46693*(t49912 + t49927 - 1.*t46636*t50102 + t50645))*var2[4] + t46437*(t45807*t47125 + t21756*t47261 - 1.*t45807*t50074 + t21756*t50083)*var2[5];
  p_output1[30]=t50710 + t50752*var2[0] + (t46423*t50766 - 1.*t3465*t50781)*var2[1] + (t3465*t50766 + t46423*t50781)*var2[2] + (t47614*t47887 + t46920*(t50798 - 1.*t46428*t46681*t50819 + t46440*t46681*t50824) + t46428*t46681*(t47937 + t47939 + t47940 + t50810 + t46920*t50819 + t46848*t50824))*var2[3] + (t46414*t48827 + t46780*(t50798 - 1.*t46681*t50801) + t46693*(t47937 + t49503 + t49505 + t46819*t50801 + t46794*t50808 + t50810))*var2[4] + t46437*t50721*var2[5];
  p_output1[31]=(t47887*t47946 + t47907*t50752 + t46920*(t47399*t50752 + t47549*t50781 + t47887*t50819 + t46646*t50824 + t51076 + t51078) + t47887*(t48516 + t48636 + t48669 - 1.*t46920*t50819 - 1.*t46848*t50824 + t51102))*var2[3] + (t46414*t49509 + t49414*t50766 + t46780*(t47291*t50748 + t46636*t50801 + t50879 + t50912 + t51076 + t51078) + t46414*(t48516 + t49938 + t49942 - 1.*t46819*t50801 + t50921 + t51102))*var2[4] + (t46794*(t45807*t47125*t50692 + t21756*t47261*t50692 + t50879 + t50912 + t45747*t50793*t50935 + t45747*t50793*t50937) + t46437*(-1.*t45747*t45807*t47125 - 1.*t21756*t45747*t47261 + t49938 + t50921 - 1.*t46437*t50793*t50935 - 1.*t46437*t50793*t50937) + t45747*t50975 + t46437*t51072)*var2[5] + (t46437*t50855 + t46794*(t47064*t50692 + t45747*t50793 + t50879 + t50912) + t45747*t50916 + t46437*(-1.*t45747*t47064 + t49938 - 1.*t46437*t50793 + t50921))*var2[9];
  p_output1[32]=t47887*var2[0] + t46665*var2[1] + (t3465*t46414 + t46423*t46646)*var2[2] + (t48291*t50752 + t47887*(t46428*t46681*t50819 - 1.*t46440*t46681*t50824 + t51214) + t46428*t46681*(-1.*t47399*t50752 - 1.*t47549*t50781 - 1.*t47887*t50819 - 1.*t46646*t50824 + t51227 + t51229))*var2[3] + (t49737*t50766 + t46414*(t46681*t50801 + t51214) + t46693*(-1.*t45747*t47017 - 1.*t47291*t50748 - 1.*t46636*t50801 - 1.*t46437*t50808 + t51227 + t51229))*var2[4] + t45747*t51180*var2[5];
  p_output1[33]=t50710 + t46920*var2[0] + t46880*var2[1] + (t3465*t46780 + t46423*t46848)*var2[2] + (t46920*(t51305 - 1.*t46428*t46681*t51340 + t46440*t46681*t51345) + t47614*t51357 + t46428*t46681*(t51325 + t51327 + t46920*t51340 + t46848*t51345 + t47399*t51357 + t47549*t51410))*var2[3] + (t46780*(t51305 - 1.*t46681*t51308) + t48827*t51316 + t46693*(t47017*t50692 + t46819*t51308 + t46794*t51323 + t51325 + t51327 + t47291*t51330))*var2[4] + t50692*t50721*var2[5] + (0.28121*t27593 - 0.27*Power(t27593,2) + t27593*t46989)*var2[10];
  p_output1[34]=(t46920*t47907 + t47946*t51357 + t46920*(t47803 + t47819 + t47821 + t47887*t51340 + t46646*t51345 + t51652) + t47887*(-1.*t46920*t51340 - 1.*t46848*t51345 - 1.*t47399*t51357 - 1.*t47549*t51410 + t51661 + t51663))*var2[3] + (t46780*t49414 + t49509*t51316 + t46780*(t47803 + t49031 + t49038 + t46636*t51308 + t51568 + t51652) + t46414*(-1.*t46819*t51308 - 1.*t47291*t51330 + t51596 + t51609 + t51661 + t51663))*var2[4] + (t46794*t50975 + t50692*t51072 + t46794*(t45807*t46437*t47125 + t21756*t46437*t47261 + t49031 + t45747*t50935*t51300 + t45747*t50937*t51300 + t51568) + t46437*(-1.*t45807*t46794*t47125 - 1.*t21756*t46794*t47261 - 1.*t46437*t50935*t51300 - 1.*t46437*t50937*t51300 + t51596 + t51609))*var2[5] + (t50692*t50855 + t46794*t50916 + t46794*(t46437*t47064 + t49031 + t45747*t51300 + t51568) + t46437*(-1.*t46794*t47064 - 1.*t46437*t51300 + t51596 + t51609))*var2[9];
  p_output1[35]=t51357*var2[0] + (t46423*t51316 - 1.*t3465*t51410)*var2[1] + (t3465*t51316 + t46423*t51410)*var2[2] + (t46920*t48291 + t47887*(t46428*t46681*t51340 - 1.*t46440*t46681*t51345 + t51713) + t46428*t46681*(t47901 + t47902 + t47904 - 1.*t47887*t51340 - 1.*t46646*t51345 + t51724))*var2[3] + (t46780*t49737 + t46414*(t46681*t51308 + t51713) + t46693*(t47901 + t49401 + t49409 - 1.*t46636*t51308 - 1.*t46437*t51323 + t51724))*var2[4] + t46794*t51180*var2[5] + (-0.28121*t45527 + 0.27*t27593*t45527 - 1.*t45527*t46989)*var2[10];
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
