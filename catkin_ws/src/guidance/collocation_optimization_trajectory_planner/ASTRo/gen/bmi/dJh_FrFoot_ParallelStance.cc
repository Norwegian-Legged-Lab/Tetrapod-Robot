/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 18:51:22 GMT+02:00
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
  double t4625;
  double t4935;
  double t4936;
  double t8901;
  double t26426;
  double t26545;
  double t26952;
  double t30099;
  double t2115;
  double t4525;
  double t30444;
  double t31077;
  double t29903;
  double t30849;
  double t30930;
  double t1261;
  double t31118;
  double t31252;
  double t31322;
  double t31335;
  double t31346;
  double t32083;
  double t32196;
  double t32253;
  double t32310;
  double t32335;
  double t32366;
  double t34782;
  double t34783;
  double t34786;
  double t34788;
  double t34789;
  double t34792;
  double t34804;
  double t34806;
  double t34808;
  double t34810;
  double t34811;
  double t34813;
  double t34816;
  double t34817;
  double t34818;
  double t34819;
  double t34820;
  double t34821;
  double t34961;
  double t34964;
  double t34969;
  double t35050;
  double t35051;
  double t35052;
  double t35053;
  double t35054;
  double t35061;
  double t35062;
  double t35065;
  double t35066;
  double t35067;
  double t35068;
  double t35071;
  double t35072;
  double t35048;
  double t35055;
  double t35056;
  double t35059;
  double t35063;
  double t35074;
  double t35075;
  double t35076;
  double t35077;
  double t35078;
  double t35079;
  double t35080;
  double t35082;
  double t35083;
  double t35084;
  double t35089;
  double t35091;
  double t35093;
  double t35060;
  double t35086;
  double t35087;
  double t35107;
  double t35109;
  double t35111;
  double t35030;
  double t35044;
  double t35045;
  double t35101;
  double t35102;
  double t35103;
  double t35121;
  double t35122;
  double t35123;
  double t35262;
  double t35284;
  double t35290;
  double t35381;
  double t35384;
  double t35405;
  double t35104;
  double t35420;
  double t35421;
  double t35422;
  double t35132;
  double t35436;
  double t35438;
  double t35439;
  double t35106;
  double t35113;
  double t35115;
  double t35424;
  double t35425;
  double t35426;
  double t35428;
  double t35429;
  double t35435;
  double t35441;
  double t35133;
  double t35134;
  double t35135;
  double t35330;
  double t35341;
  double t35640;
  double t35642;
  double t35652;
  double t35654;
  double t35331;
  double t35332;
  double t35333;
  double t35342;
  double t35344;
  double t35345;
  double t35358;
  double t35370;
  double t35359;
  double t35360;
  double t35361;
  double t35452;
  double t35454;
  double t35705;
  double t35706;
  double t35714;
  double t35716;
  double t35371;
  double t35372;
  double t35373;
  double t35406;
  double t35407;
  double t35408;
  double t35410;
  double t35411;
  double t35412;
  double t35413;
  double t35414;
  double t35415;
  double t35416;
  double t35417;
  double t35418;
  double t35757;
  double t35790;
  double t35839;
  double t35746;
  double t35430;
  double t35850;
  double t35851;
  double t35853;
  double t35855;
  double t35856;
  double t35859;
  double t35440;
  double t35445;
  double t35446;
  double t35447;
  double t35448;
  double t35451;
  double t35860;
  double t35456;
  double t35457;
  double t35867;
  double t35620;
  double t35621;
  double t35624;
  double t35629;
  double t35630;
  double t35631;
  double t35633;
  double t35634;
  double t35635;
  double t35636;
  double t35637;
  double t35638;
  double t35641;
  double t35646;
  double t35647;
  double t35648;
  double t35649;
  double t35653;
  double t35660;
  double t35661;
  double t35662;
  double t35663;
  double t35910;
  double t35668;
  double t35669;
  double t35914;
  double t35678;
  double t35679;
  double t35682;
  double t35684;
  double t35690;
  double t35692;
  double t35693;
  double t35694;
  double t35695;
  double t35696;
  double t35697;
  double t35698;
  double t35699;
  double t35700;
  double t35701;
  double t35703;
  double t35709;
  double t35715;
  double t35720;
  double t35723;
  double t35724;
  double t35725;
  double t35728;
  double t35986;
  double t35731;
  double t35732;
  double t35992;
  double t35737;
  double t35738;
  double t35741;
  double t36016;
  double t36017;
  double t36018;
  double t36020;
  double t36021;
  double t36024;
  double t36029;
  double t36030;
  double t36031;
  double t36033;
  double t36035;
  double t36036;
  double t36047;
  double t36048;
  double t36051;
  double t36053;
  double t36054;
  double t36055;
  double t36052;
  double t36061;
  double t36063;
  double t36064;
  double t36065;
  double t36067;
  double t36074;
  double t36075;
  double t36076;
  double t36078;
  double t36079;
  double t36080;
  double t36097;
  double t36099;
  double t36116;
  double t36118;
  double t36107;
  double t36019;
  double t36026;
  double t36027;
  double t36138;
  double t36140;
  double t36144;
  double t34772;
  double t34773;
  double t34777;
  double t36181;
  double t36188;
  double t36190;
  double t36011;
  double t36012;
  double t36013;
  double t34852;
  double t34889;
  double t34896;
  double t36225;
  double t36226;
  double t36227;
  double t36228;
  double t36229;
  double t36230;
  double t36233;
  double t36234;
  double t36235;
  double t36241;
  double t36242;
  double t36243;
  double t36231;
  double t36246;
  double t36247;
  double t36253;
  double t36254;
  double t36256;
  double t36249;
  double t36252;
  double t36263;
  double t36264;
  double t36266;
  double t36268;
  double t36269;
  double t36270;
  double t36274;
  double t36275;
  double t36277;
  double t36094;
  double t36095;
  double t36102;
  double t36103;
  double t36105;
  double t36112;
  double t36113;
  double t36114;
  double t36295;
  double t36302;
  double t36131;
  double t36132;
  double t36133;
  double t36327;
  double t36333;
  double t36336;
  double t36283;
  double t36284;
  double t36285;
  double t36166;
  double t36167;
  double t36168;
  double t36169;
  double t36170;
  double t36171;
  double t36172;
  double t36376;
  double t36382;
  t4625 = Cos(var1[13]);
  t4935 = Cos(var1[14]);
  t4936 = t4625*t4935;
  t8901 = Sin(var1[13]);
  t26426 = Sin(var1[14]);
  t26545 = t8901*t26426;
  t26952 = t4936 + t26545;
  t30099 = Cos(var1[12]);
  t2115 = Cos(var1[5]);
  t4525 = Sin(var1[12]);
  t30444 = Sin(var1[5]);
  t31077 = Cos(var1[3]);
  t29903 = t2115*t4525*t26952;
  t30849 = t30099*t26952*t30444;
  t30930 = t29903 + t30849;
  t1261 = Sin(var1[3]);
  t31118 = Cos(var1[4]);
  t31252 = -1.*t4935*t8901;
  t31322 = t4625*t26426;
  t31335 = t31252 + t31322;
  t31346 = t31118*t31335;
  t32083 = Sin(var1[4]);
  t32196 = t30099*t2115*t26952;
  t32253 = -1.*t4525*t26952*t30444;
  t32310 = t32196 + t32253;
  t32335 = -1.*t32083*t32310;
  t32366 = t31346 + t32335;
  t34782 = -1.*t2115*t4525;
  t34783 = -1.*t30099*t30444;
  t34786 = t34782 + t34783;
  t34788 = t30099*t2115;
  t34789 = -1.*t4525*t30444;
  t34792 = t34788 + t34789;
  t34804 = t4935*t8901;
  t34806 = -1.*t4625*t26426;
  t34808 = t34804 + t34806;
  t34810 = t2115*t4525*t34808;
  t34811 = t30099*t34808*t30444;
  t34813 = t34810 + t34811;
  t34816 = t31118*t26952;
  t34817 = t30099*t2115*t34808;
  t34818 = -1.*t4525*t34808*t30444;
  t34819 = t34817 + t34818;
  t34820 = -1.*t32083*t34819;
  t34821 = t34816 + t34820;
  t34961 = -1.*t31335*t32083;
  t34964 = -1.*t31118*t32310;
  t34969 = t34961 + t34964;
  t35050 = -1.*t4935;
  t35051 = 1. + t35050;
  t35052 = 0.50321*t35051;
  t35053 = 0.19821*t4935;
  t35054 = t35052 + t35053;
  t35061 = -1.*t30099;
  t35062 = 1. + t35061;
  t35065 = -1.*t4625;
  t35066 = 1. + t35065;
  t35067 = 0.28121*t35066;
  t35068 = t4625*t35054;
  t35071 = -0.305*t8901*t26426;
  t35072 = t35067 + t35068 + t35071;
  t35048 = 0.28121*t8901;
  t35055 = -1.*t35054*t8901;
  t35056 = -0.305*t4625*t26426;
  t35059 = t35048 + t35055 + t35056;
  t35063 = 0.15121*t35062;
  t35074 = t30099*t35072;
  t35075 = t35063 + t35074;
  t35076 = t2115*t35075;
  t35077 = -0.15121*t35062;
  t35078 = -0.15121*t30099;
  t35079 = -0.15121*t4525;
  t35080 = t4525*t35072;
  t35082 = t35077 + t35078 + t35079 + t35080;
  t35083 = -1.*t35082*t30444;
  t35084 = t35076 + t35083;
  t35089 = t35059*t32083;
  t35091 = t31118*t35084;
  t35093 = t35089 + t35091;
  t35060 = -1.*t35059*t32083;
  t35086 = -1.*t31118*t35084;
  t35087 = t35060 + t35086;
  t35107 = t31118*t35059;
  t35109 = -1.*t32083*t35084;
  t35111 = t35107 + t35109;
  t35030 = t26952*t32083;
  t35044 = t31118*t34819;
  t35045 = t35030 + t35044;
  t35101 = t2115*t35082;
  t35102 = t35075*t30444;
  t35103 = t35101 + t35102;
  t35121 = -1.*t26952*t32083;
  t35122 = -1.*t31118*t34819;
  t35123 = t35121 + t35122;
  t35262 = t31335*t32083;
  t35284 = t31118*t32310;
  t35290 = t35262 + t35284;
  t35381 = -1.*t2115*t4525*t26952;
  t35384 = -1.*t30099*t26952*t30444;
  t35405 = t35381 + t35384;
  t35104 = -1.*t34792*t35103;
  t35420 = -1.*t2115*t35082;
  t35421 = -1.*t35075*t30444;
  t35422 = t35420 + t35421;
  t35132 = t34813*t35103;
  t35436 = -1.*t2115*t4525*t34808;
  t35438 = -1.*t30099*t34808*t30444;
  t35439 = t35436 + t35438;
  t35106 = -1.*t31118*t34786*t35093;
  t35113 = t32083*t34786*t35111;
  t35115 = t35104 + t35106 + t35113;
  t35424 = -1.*t34786*t35103;
  t35425 = -1.*t34792*t35084;
  t35426 = -1.*t30099*t2115;
  t35428 = t4525*t30444;
  t35429 = t35426 + t35428;
  t35435 = t34819*t35103;
  t35441 = t34813*t35084;
  t35133 = t35045*t35093;
  t35134 = t34821*t35111;
  t35135 = t35132 + t35133 + t35134;
  t35330 = -1.*t34813*t35103;
  t35341 = t30930*t35103;
  t35640 = -1.*t34819*t35103;
  t35642 = -1.*t34813*t35084;
  t35652 = t32310*t35103;
  t35654 = t30930*t35084;
  t35331 = -1.*t35045*t35093;
  t35332 = -1.*t34821*t35111;
  t35333 = t35330 + t35331 + t35332;
  t35342 = t35290*t35093;
  t35344 = t32366*t35111;
  t35345 = t35341 + t35342 + t35344;
  t35358 = t34792*t35103;
  t35370 = -1.*t30930*t35103;
  t35359 = t31118*t34786*t35093;
  t35360 = -1.*t32083*t34786*t35111;
  t35361 = t35358 + t35359 + t35360;
  t35452 = Power(t31118,2);
  t35454 = Power(t32083,2);
  t35705 = t34786*t35103;
  t35706 = t34792*t35084;
  t35714 = -1.*t32310*t35103;
  t35716 = -1.*t30930*t35084;
  t35371 = -1.*t35290*t35093;
  t35372 = -1.*t32366*t35111;
  t35373 = t35370 + t35371 + t35372;
  t35406 = var2[0]*t31118*t35405;
  t35407 = t1261*t32083*t35405;
  t35408 = t31077*t32310;
  t35410 = t35407 + t35408;
  t35411 = var2[1]*t35410;
  t35412 = -1.*t31077*t32083*t35405;
  t35413 = t1261*t32310;
  t35414 = t35412 + t35413;
  t35415 = var2[2]*t35414;
  t35416 = -1.*t34786*t35084;
  t35417 = t35104 + t35416;
  t35418 = t34819*t35417;
  t35757 = 0.15121*t4525;
  t35790 = -1.*t4525*t35072;
  t35839 = t35757 + t35790;
  t35746 = t35078 + t35074;
  t35430 = -1.*t35429*t35084;
  t35850 = t2115*t35839;
  t35851 = -1.*t35746*t30444;
  t35853 = t35850 + t35851;
  t35855 = t2115*t35746;
  t35856 = t35839*t30444;
  t35859 = t35855 + t35856;
  t35440 = t35439*t35084;
  t35445 = t35059*t26952;
  t35446 = t34819*t35084;
  t35447 = t35445 + t35132 + t35446;
  t35448 = t34786*t35447;
  t35451 = t31118*t35439*t35115;
  t35860 = -1.*t34792*t35859;
  t35456 = -1.*t31118*t35429*t35093;
  t35457 = t32083*t35429*t35111;
  t35867 = t34813*t35859;
  t35620 = t31118*t35439*t35093;
  t35621 = -1.*t32083*t35439*t35111;
  t35624 = t31118*t35429*t35135;
  t35629 = var2[0]*t31118*t35429;
  t35630 = t1261*t34786;
  t35631 = -1.*t31077*t32083*t35429;
  t35633 = t35630 + t35631;
  t35634 = var2[2]*t35633;
  t35635 = t31077*t34786;
  t35636 = t1261*t32083*t35429;
  t35637 = t35635 + t35636;
  t35638 = var2[1]*t35637;
  t35641 = -1.*t35439*t35084;
  t35646 = -1.*t35059*t26952;
  t35647 = -1.*t34819*t35084;
  t35648 = t35646 + t35330 + t35647;
  t35649 = t32310*t35648;
  t35653 = t35405*t35084;
  t35660 = t35059*t31335;
  t35661 = t32310*t35084;
  t35662 = t35660 + t35341 + t35661;
  t35663 = t34819*t35662;
  t35910 = -1.*t34813*t35859;
  t35668 = -1.*t31118*t35439*t35093;
  t35669 = t32083*t35439*t35111;
  t35914 = t30930*t35859;
  t35678 = t31118*t35405*t35093;
  t35679 = -1.*t32083*t35405*t35111;
  t35682 = t31118*t35405*t35333;
  t35684 = t31118*t35439*t35345;
  t35690 = var2[0]*t31118*t35439;
  t35692 = t1261*t32083*t35439;
  t35693 = t31077*t34819;
  t35694 = t35692 + t35693;
  t35695 = var2[1]*t35694;
  t35696 = -1.*t31077*t32083*t35439;
  t35697 = t1261*t34819;
  t35698 = t35696 + t35697;
  t35699 = var2[2]*t35698;
  t35700 = t34786*t35084;
  t35701 = t35358 + t35700;
  t35703 = t32310*t35701;
  t35709 = t35429*t35084;
  t35715 = -1.*t35405*t35084;
  t35720 = -1.*t35059*t31335;
  t35723 = -1.*t32310*t35084;
  t35724 = t35720 + t35370 + t35723;
  t35725 = t34786*t35724;
  t35728 = t31118*t35405*t35361;
  t35986 = t34792*t35859;
  t35731 = t31118*t35429*t35093;
  t35732 = -1.*t32083*t35429*t35111;
  t35992 = -1.*t30930*t35859;
  t35737 = -1.*t31118*t35405*t35093;
  t35738 = t32083*t35405*t35111;
  t35741 = t31118*t35429*t35373;
  t36016 = -1.*t4625*t4935;
  t36017 = -1.*t8901*t26426;
  t36018 = t36016 + t36017;
  t36020 = t30099*t2115*t31335;
  t36021 = -1.*t4525*t31335*t30444;
  t36024 = t36020 + t36021;
  t36029 = t2115*t4525*t31335;
  t36030 = t30099*t31335*t30444;
  t36031 = t36029 + t36030;
  t36033 = t31118*t36018;
  t36035 = -1.*t32083*t36024;
  t36036 = t36033 + t36035;
  t36047 = t2115*t4525*t35059;
  t36048 = t30099*t35059*t30444;
  t36051 = t36047 + t36048;
  t36053 = t30099*t2115*t35059;
  t36054 = -1.*t4525*t35059*t30444;
  t36055 = t36053 + t36054;
  t36052 = -1.*t34792*t36051;
  t36061 = 0.28121*t4625;
  t36063 = -1.*t4625*t35054;
  t36064 = 0.305*t8901*t26426;
  t36065 = t36061 + t36063 + t36064;
  t36067 = t34813*t36051;
  t36074 = t36065*t32083;
  t36075 = t31118*t36055;
  t36076 = t36074 + t36075;
  t36078 = t31118*t36065;
  t36079 = -1.*t32083*t36055;
  t36080 = t36078 + t36079;
  t36097 = t35059*t36018;
  t36099 = t31335*t36065;
  t36116 = Power(t30099,2);
  t36118 = Power(t4525,2);
  t36107 = -1.*t36065*t26952;
  t36019 = t36018*t32083;
  t36026 = t31118*t36024;
  t36027 = t36019 + t36026;
  t36138 = t36051*t30930;
  t36140 = t36031*t35103;
  t36144 = -1.*t34813*t36051;
  t34772 = t31077*t30930;
  t34773 = -1.*t1261*t32366;
  t34777 = t34772 + t34773;
  t36181 = t34792*t36051;
  t36188 = -1.*t36051*t30930;
  t36190 = -1.*t36031*t35103;
  t36011 = t4525*t35075;
  t36012 = -1.*t30099*t35082;
  t36013 = t36011 + t36012;
  t34852 = t31077*t34813;
  t34889 = -1.*t1261*t34821;
  t34896 = t34852 + t34889;
  t36225 = -0.305*t4935*t8901;
  t36226 = 0.305*t4625*t26426;
  t36227 = t36225 + t36226;
  t36228 = t2115*t4525*t36227;
  t36229 = t30099*t36227*t30444;
  t36230 = t36228 + t36229;
  t36233 = t30099*t2115*t36227;
  t36234 = -1.*t4525*t36227*t30444;
  t36235 = t36233 + t36234;
  t36241 = t2115*t4525*t36018;
  t36242 = t30099*t36018*t30444;
  t36243 = t36241 + t36242;
  t36231 = -1.*t34792*t36230;
  t36246 = -0.305*t4625*t4935;
  t36247 = t36246 + t35071;
  t36253 = t30099*t2115*t36018;
  t36254 = -1.*t4525*t36018*t30444;
  t36256 = t36253 + t36254;
  t36249 = t34813*t36230;
  t36252 = t36243*t35103;
  t36263 = t36247*t32083;
  t36264 = t31118*t36235;
  t36266 = t36263 + t36264;
  t36268 = t31118*t36247;
  t36269 = -1.*t32083*t36235;
  t36270 = t36268 + t36269;
  t36274 = t34808*t32083;
  t36275 = t31118*t36256;
  t36277 = t36274 + t36275;
  t36094 = -1.*t34808*t35072;
  t36095 = t36094 + t35646;
  t36102 = t35072*t26952;
  t36103 = t35660 + t36102;
  t36105 = -1.*t34808*t35059;
  t36112 = -1.*t30099*t34808*t35075;
  t36113 = -1.*t4525*t34808*t35082;
  t36114 = t35646 + t36112 + t36113;
  t36295 = t31335*t36247;
  t36302 = -1.*t36247*t26952;
  t36131 = t30099*t26952*t35075;
  t36132 = t4525*t26952*t35082;
  t36133 = t35660 + t36131 + t36132;
  t36327 = t36230*t30930;
  t36333 = -1.*t34813*t36230;
  t36336 = -1.*t36243*t35103;
  t36283 = t31118*t34808;
  t36284 = -1.*t32083*t36256;
  t36285 = t36283 + t36284;
  t36166 = -0.15121*t36018;
  t36167 = -0.15121*t26952;
  t36168 = t36166 + t36167;
  t36169 = var2[12]*t36168;
  t36170 = -1.*t4525*t35075;
  t36171 = t30099*t35082;
  t36172 = t36170 + t36171;
  t36376 = t34792*t36230;
  t36382 = -1.*t36230*t30930;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t1261*t30930 - 1.*t31077*t32366)*var2[1] + t34777*var2[2];
  p_output1[10]=(t31077*t32083*t34786 - 1.*t1261*t34792)*var2[1] + (t1261*t32083*t34786 + t31077*t34792)*var2[2];
  p_output1[11]=(-1.*t1261*t34813 - 1.*t31077*t34821)*var2[1] + t34896*var2[2];
  p_output1[12]=t32366*var2[0] - 1.*t1261*t34969*var2[1] + t31077*t34969*var2[2] + (t35045*(t32083*t34786*t35087 + t32083*t34786*t35093) + t34821*t35115 + t31118*t34786*(t34821*t35087 + t34821*t35093 + t35045*t35111 + t35111*t35123) - 1.*t32083*t34786*t35135)*var2[3];
  p_output1[13]=-1.*t32083*t34786*var2[0] + t1261*t31118*t34786*var2[1] - 1.*t31077*t31118*t34786*var2[2] + ((-1.*t34821*t35087 - 1.*t34821*t35093 - 1.*t35045*t35111 - 1.*t35111*t35123)*t35290 + t35045*(t32366*t35087 + t32366*t35093 + t34969*t35111 + t35111*t35290) + t32366*t35333 + t34821*t35345)*var2[3];
  p_output1[14]=t34821*var2[0] - 1.*t1261*t35123*var2[1] + t31077*t35123*var2[2] + ((-1.*t32083*t34786*t35087 - 1.*t32083*t34786*t35093)*t35290 + t31118*t34786*(-1.*t32366*t35087 - 1.*t32366*t35093 - 1.*t34969*t35111 - 1.*t35111*t35290) + t32366*t35361 - 1.*t32083*t34786*t35373)*var2[3];
  p_output1[15]=t35406 + t35411 + t35415 + (t35451 + t35045*(t35424 + t35425 - 1.*t34786*t35422*t35452 - 1.*t34786*t35422*t35454 + t35456 + t35457) + t31118*t34786*(-1.*t32083*t34821*t35422 + t31118*t35045*t35422 + t35435 + t35441 + t35620 + t35621) + t35624)*var2[3] + (t35418 + t34813*(-1.*t34786*t35422 + t35424 + t35425 + t35430) + t34792*(t34819*t35422 + t35435 + t35440 + t35441) + t35448)*var2[4];
  p_output1[16]=t35629 + t35634 + t35638 + (t35290*(t32083*t34821*t35422 - 1.*t31118*t35045*t35422 + t35640 + t35642 + t35668 + t35669) + t35045*(-1.*t32083*t32366*t35422 + t31118*t35290*t35422 + t35652 + t35654 + t35678 + t35679) + t35682 + t35684)*var2[3] + (t30930*(-1.*t34819*t35422 + t35640 + t35641 + t35642) + t35649 + t34813*(t32310*t35422 + t35652 + t35653 + t35654) + t35663)*var2[4];
  p_output1[17]=t35690 + t35695 + t35699 + (t35728 + t35290*(t34786*t35422*t35452 + t34786*t35422*t35454 + t35705 + t35706 + t35731 + t35732) + t31118*t34786*(t32083*t32366*t35422 - 1.*t31118*t35290*t35422 + t35714 + t35716 + t35737 + t35738) + t35741)*var2[3] + (t35703 + t30930*(t34786*t35422 + t35705 + t35706 + t35709) + t34792*(-1.*t32310*t35422 + t35714 + t35715 + t35716) + t35725)*var2[4];
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
  p_output1[36]=t35406 + t35411 + t35415 + (t35451 + t35624 + t35045*(t35424 + t35456 + t35457 - 1.*t34786*t35452*t35853 - 1.*t34786*t35454*t35853 + t35860) + t31118*t34786*(t35435 + t35620 + t35621 - 1.*t32083*t34821*t35853 + t31118*t35045*t35853 + t35867))*var2[3] + (t35418 + t35448 + t34813*(t35424 + t35430 - 1.*t34786*t35853 + t35860) + t34792*(t35435 + t35440 + t34819*t35853 + t35867))*var2[4] + t26952*(t30099*t35075 - 1.*t30099*t35746 + t35082*t4525 + t35839*t4525)*var2[5];
  p_output1[37]=t35629 + t35634 + t35638 + (t35682 + t35684 + t35290*(t35640 + t35668 + t35669 + t32083*t34821*t35853 - 1.*t31118*t35045*t35853 + t35910) + t35045*(t35652 + t35678 + t35679 - 1.*t32083*t32366*t35853 + t31118*t35290*t35853 + t35914))*var2[3] + (t35649 + t35663 + t30930*(t35640 + t35641 - 1.*t34819*t35853 + t35910) + t34813*(t35652 + t35653 + t32310*t35853 + t35914))*var2[4] + (t26952*(t26952*t30099*t35082 + t26952*t30099*t35839 - 1.*t26952*t35075*t4525 + t26952*t35746*t4525) + t31335*(-1.*t30099*t34808*t35082 - 1.*t30099*t34808*t35839 + t34808*t35075*t4525 - 1.*t34808*t35746*t4525))*var2[5];
  p_output1[38]=t35690 + t35695 + t35699 + (t35728 + t35741 + t35290*(t35705 + t35731 + t35732 + t34786*t35452*t35853 + t34786*t35454*t35853 + t35986) + t31118*t34786*(t35714 + t35737 + t35738 + t32083*t32366*t35853 - 1.*t31118*t35290*t35853 + t35992))*var2[3] + (t35703 + t35725 + t30930*(t35705 + t35709 + t34786*t35853 + t35986) + t34792*(t35714 + t35715 - 1.*t32310*t35853 + t35992))*var2[4] + t31335*(-1.*t30099*t35075 + t30099*t35746 - 1.*t35082*t4525 - 1.*t35839*t4525)*var2[5];
  p_output1[39]=t36027*var2[0] + (t31077*t36031 - 1.*t1261*t36036)*var2[1] + (t1261*t36031 + t31077*t36036)*var2[2] + (t35115*t35290 + t35045*(t36052 - 1.*t31118*t34786*t36076 + t32083*t34786*t36080) + t31118*t34786*(t35341 + t35342 + t35344 + t36067 + t35045*t36076 + t34821*t36080))*var2[3] + (t30930*t35417 + t34813*(t36052 - 1.*t34786*t36055) + t34792*(t35341 + t35660 + t35661 + t34819*t36055 + t26952*t36065 + t36067))*var2[4] + t31335*t36013*var2[5];
  p_output1[40]=(t35290*t35345 + t35333*t36027 + t35045*(t35093*t36027 + t35111*t36036 + t35290*t36076 + t32366*t36080 + t36138 + t36140) + t35290*(t35370 + t35371 + t35372 - 1.*t35045*t36076 - 1.*t34821*t36080 + t36144))*var2[3] + (t30930*t35662 + t35648*t36031 + t34813*(t35084*t36024 + t32310*t36055 + t36097 + t36099 + t36138 + t36140) + t30930*(t35370 + t35720 + t35723 - 1.*t34819*t36055 + t36107 + t36144))*var2[4] + (t36018*t36114 + t31335*t36133 + t31335*(-1.*t26952*t30099*t35075 + t35720 + t36107 - 1.*t34808*t35059*t36116 - 1.*t34808*t35059*t36118 - 1.*t26952*t35082*t4525) + t26952*(t30099*t31335*t35075 + t36097 + t36099 + t26952*t35059*t36116 + t26952*t35059*t36118 + t31335*t35082*t4525))*var2[5] + (t36018*t36095 + t26952*(t31335*t35072 + t35445 + t36097 + t36099) + t31335*t36103 + t31335*(-1.*t26952*t35072 + t35720 + t36105 + t36107))*var2[12];
  p_output1[41]=t36169 + t35290*var2[0] + t34777*var2[1] + (t1261*t30930 + t31077*t32366)*var2[2] + (t35361*t36027 + t35290*(t31118*t34786*t36076 - 1.*t32083*t34786*t36080 + t36181) + t31118*t34786*(-1.*t35093*t36027 - 1.*t35111*t36036 - 1.*t35290*t36076 - 1.*t32366*t36080 + t36188 + t36190))*var2[3] + (t35701*t36031 + t30930*(t34786*t36055 + t36181) + t34792*(-1.*t35059*t36018 - 1.*t35084*t36024 - 1.*t32310*t36055 - 1.*t31335*t36065 + t36188 + t36190))*var2[4] + t36018*t36172*var2[5];
  p_output1[42]=t35045*var2[0] + t34896*var2[1] + (t1261*t34813 + t31077*t34821)*var2[2] + (t35045*(t36231 - 1.*t31118*t34786*t36266 + t32083*t34786*t36270) + t35115*t36277 + t31118*t34786*(t36249 + t36252 + t35045*t36266 + t34821*t36270 + t35093*t36277 + t35111*t36285))*var2[3] + (t34813*(t36231 - 1.*t34786*t36235) + t35417*t36243 + t34792*(t34808*t35059 + t34819*t36235 + t26952*t36247 + t36249 + t36252 + t35084*t36256))*var2[4] + t34808*t36013*var2[5] + (0.28121*t4935 - 1.*t35054*t4935 - 0.305*Power(t4935,2))*var2[13];
  p_output1[43]=(t35045*t35333 + t35345*t36277 + t35045*(t35132 + t35133 + t35134 + t35290*t36266 + t32366*t36270 + t36327) + t35290*(-1.*t35045*t36266 - 1.*t34821*t36270 - 1.*t35093*t36277 - 1.*t35111*t36285 + t36333 + t36336))*var2[3] + (t34813*t35648 + t35662*t36243 + t34813*(t35132 + t35445 + t35446 + t32310*t36235 + t36295 + t36327) + t30930*(t36105 - 1.*t34819*t36235 - 1.*t35084*t36256 + t36302 + t36333 + t36336))*var2[4] + (t26952*t36114 + t34808*t36133 + t26952*(t30099*t34808*t35075 + t35445 + t26952*t36116*t36227 + t26952*t36118*t36227 + t36295 + t34808*t35082*t4525) + t31335*(-1.*t30099*t35075*t36018 + t36105 - 1.*t34808*t36116*t36227 - 1.*t34808*t36118*t36227 + t36302 - 1.*t35082*t36018*t4525))*var2[5] + (t26952*t36095 + t34808*t36103 + t26952*(t34808*t35072 + t35445 + t26952*t36227 + t36295) + t31335*(-1.*t35072*t36018 + t36105 - 1.*t34808*t36227 + t36302))*var2[12];
  p_output1[44]=t36169 + t36277*var2[0] + (t31077*t36243 - 1.*t1261*t36285)*var2[1] + (t1261*t36243 + t31077*t36285)*var2[2] + (t35045*t35361 + t35290*(t31118*t34786*t36266 - 1.*t32083*t34786*t36270 + t36376) + t31118*t34786*(t35330 + t35331 + t35332 - 1.*t35290*t36266 - 1.*t32366*t36270 + t36382))*var2[3] + (t34813*t35701 + t30930*(t34786*t36235 + t36376) + t34792*(t35330 + t35646 + t35647 - 1.*t32310*t36235 - 1.*t31335*t36247 + t36382))*var2[4] + t26952*t36172*var2[5] + (-0.28121*t26426 + t26426*t35054 + 0.305*t26426*t4935)*var2[13];
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

#include "dJh_FrFoot_ParallelStance.hh"

namespace SymFunction
{

void dJh_FrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
