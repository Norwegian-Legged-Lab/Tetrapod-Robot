/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:41:54 GMT+02:00
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
  double t1153;
  double t1172;
  double t2362;
  double t2423;
  double t2526;
  double t2766;
  double t2829;
  double t3760;
  double t612;
  double t935;
  double t3792;
  double t4719;
  double t3659;
  double t3876;
  double t4003;
  double t39;
  double t5467;
  double t5475;
  double t5639;
  double t5657;
  double t5725;
  double t5727;
  double t7220;
  double t7287;
  double t7373;
  double t7669;
  double t8217;
  double t13030;
  double t14690;
  double t14737;
  double t17648;
  double t18289;
  double t18349;
  double t18567;
  double t18604;
  double t19080;
  double t19103;
  double t19169;
  double t19170;
  double t19198;
  double t19419;
  double t19447;
  double t19475;
  double t15670;
  double t15697;
  double t15778;
  double t16962;
  double t18751;
  double t18781;
  double t18985;
  double t19146;
  double t19779;
  double t19800;
  double t19948;
  double t20310;
  double t20416;
  double t20502;
  double t20503;
  double t20509;
  double t20694;
  double t20784;
  double t14825;
  double t14826;
  double t14827;
  double t15261;
  double t15266;
  double t15268;
  double t21154;
  double t21356;
  double t21357;
  double t21377;
  double t21391;
  double t21421;
  double t19028;
  double t21055;
  double t21117;
  double t21842;
  double t21859;
  double t21860;
  double t14830;
  double t15603;
  double t15626;
  double t21614;
  double t21703;
  double t21746;
  double t22232;
  double t22240;
  double t22258;
  double t21428;
  double t21448;
  double t21491;
  double t21833;
  double t22009;
  double t22014;
  double t22015;
  double t22372;
  double t22374;
  double t22387;
  double t22019;
  double t22658;
  double t22660;
  double t22661;
  double t21841;
  double t21862;
  double t21875;
  double t22391;
  double t22579;
  double t22398;
  double t22404;
  double t22406;
  double t22642;
  double t22663;
  double t22040;
  double t22061;
  double t22098;
  double t22260;
  double t22261;
  double t22277;
  double t22280;
  double t22292;
  double t22307;
  double t22315;
  double t22339;
  double t22354;
  double t22358;
  double t22362;
  double t22366;
  double t22780;
  double t22781;
  double t22782;
  double t22778;
  double t22412;
  double t22799;
  double t22801;
  double t22802;
  double t22805;
  double t22816;
  double t22817;
  double t22662;
  double t22687;
  double t22707;
  double t22708;
  double t22711;
  double t22716;
  double t22717;
  double t22722;
  double t22821;
  double t22743;
  double t22746;
  double t22831;
  double t22754;
  double t22756;
  double t22761;
  double t22910;
  double t22911;
  double t22912;
  double t22987;
  double t22988;
  double t22992;
  double t23000;
  double t23002;
  double t23011;
  double t23013;
  double t23014;
  double t23025;
  double t23064;
  double t23129;
  double t23282;
  double t23363;
  double t23439;
  double t23448;
  double t23571;
  double t23659;
  double t23676;
  double t23685;
  double t23656;
  double t23860;
  double t23872;
  double t24063;
  double t24068;
  double t24099;
  double t24232;
  double t24234;
  double t24243;
  double t24245;
  double t24251;
  double t24305;
  double t24321;
  double t24327;
  double t22913;
  double t22914;
  double t22955;
  double t22959;
  double t22969;
  double t22973;
  double t22977;
  double t26150;
  double t26770;
  double t26843;
  double t26847;
  double t26871;
  double t26879;
  double t26884;
  double t26894;
  double t27214;
  double t27223;
  double t27361;
  double t26876;
  double t27420;
  double t27422;
  double t27493;
  double t27559;
  double t27560;
  double t27563;
  double t27504;
  double t27521;
  double t27622;
  double t27626;
  double t27627;
  double t27636;
  double t27655;
  double t27660;
  double t27698;
  double t27707;
  double t27708;
  double t9761;
  double t9851;
  double t12101;
  double t21929;
  double t21966;
  double t21968;
  double t24372;
  double t24373;
  double t28559;
  double t23858;
  double t24070;
  double t30218;
  double t30235;
  double t30313;
  double t30335;
  double t28563;
  double t28728;
  double t28747;
  double t29014;
  double t30045;
  double t30061;
  double t30076;
  double t30078;
  double t30178;
  double t30191;
  double t30195;
  double t30197;
  double t30212;
  double t30219;
  double t30255;
  double t30285;
  double t30303;
  double t30308;
  double t30320;
  double t30347;
  double t30437;
  double t33858;
  double t32188;
  double t32210;
  double t33879;
  double t33163;
  double t33320;
  double t33638;
  double t33650;
  double t34059;
  double t34175;
  double t34265;
  double t34458;
  double t34618;
  double t34328;
  double t34908;
  double t34914;
  double t22979;
  double t22996;
  double t22997;
  double t34925;
  double t34928;
  double t34051;
  double t34052;
  double t34182;
  double t34186;
  double t34681;
  double t34685;
  double t34688;
  double t35043;
  double t34820;
  double t34833;
  double t34849;
  double t35050;
  double t35053;
  double t35460;
  double t35465;
  double t35468;
  double t27811;
  double t27815;
  double t27856;
  double t28186;
  double t28197;
  double t28223;
  double t26007;
  double t26052;
  double t26059;
  double t34977;
  double t34978;
  double t35565;
  double t34929;
  double t35567;
  double t35569;
  double t35570;
  double t35628;
  double t35630;
  double t35635;
  double t35637;
  double t35605;
  double t35611;
  double t35612;
  double t35615;
  double t35616;
  double t35617;
  double t35618;
  double t35619;
  double t35620;
  double t35621;
  double t35622;
  double t35623;
  double t35626;
  double t35629;
  double t35636;
  double t35640;
  double t35641;
  double t35645;
  double t35699;
  double t35648;
  double t35649;
  double t35704;
  double t35668;
  double t35669;
  double t35673;
  double t27892;
  double t27893;
  double t27903;
  double t35834;
  double t36032;
  double t36041;
  double t35737;
  double t35738;
  double t35740;
  double t37137;
  double t37265;
  double t25686;
  double t25746;
  double t25805;
  double t24399;
  double t24782;
  t1153 = Cos(var1[10]);
  t1172 = Cos(var1[11]);
  t2362 = -1.*t1153*t1172;
  t2423 = Sin(var1[10]);
  t2526 = Sin(var1[11]);
  t2766 = -1.*t2423*t2526;
  t2829 = t2362 + t2766;
  t3760 = Cos(var1[9]);
  t612 = Cos(var1[5]);
  t935 = Sin(var1[9]);
  t3792 = Sin(var1[5]);
  t4719 = Cos(var1[3]);
  t3659 = t612*t935*t2829;
  t3876 = t3760*t2829*t3792;
  t4003 = t3659 + t3876;
  t39 = Sin(var1[3]);
  t5467 = Cos(var1[4]);
  t5475 = -1.*t1172*t2423;
  t5639 = t1153*t2526;
  t5657 = t5475 + t5639;
  t5725 = t5467*t5657;
  t5727 = Sin(var1[4]);
  t7220 = t3760*t612*t2829;
  t7287 = -1.*t935*t2829*t3792;
  t7373 = t7220 + t7287;
  t7669 = -1.*t5727*t7373;
  t8217 = t5725 + t7669;
  t13030 = -1.*t5657*t5727;
  t14690 = -1.*t5467*t7373;
  t14737 = t13030 + t14690;
  t17648 = -1.*t1172;
  t18289 = 1. + t17648;
  t18349 = -0.50321*t18289;
  t18567 = -0.23321*t1172;
  t18604 = t18349 + t18567;
  t19080 = -1.*t3760;
  t19103 = 1. + t19080;
  t19169 = -1.*t1153;
  t19170 = 1. + t19169;
  t19198 = -0.28121*t19170;
  t19419 = t1153*t18604;
  t19447 = 0.27*t2423*t2526;
  t19475 = t19198 + t19419 + t19447;
  t15670 = t612*t935;
  t15697 = t3760*t3792;
  t15778 = t15670 + t15697;
  t16962 = 0.28121*t2423;
  t18751 = t18604*t2423;
  t18781 = -0.27*t1153*t2526;
  t18985 = t16962 + t18751 + t18781;
  t19146 = -0.15121*t19103;
  t19779 = t3760*t19475;
  t19800 = t19146 + t19779;
  t19948 = t612*t19800;
  t20310 = 0.15121*t19103;
  t20416 = 0.15121*t3760;
  t20502 = 0.15121*t935;
  t20503 = t935*t19475;
  t20509 = t20310 + t20416 + t20502 + t20503;
  t20694 = -1.*t20509*t3792;
  t20784 = t19948 + t20694;
  t14825 = t1153*t1172;
  t14826 = t2423*t2526;
  t14827 = t14825 + t14826;
  t15261 = t3760*t612*t5657;
  t15266 = -1.*t935*t5657*t3792;
  t15268 = t15261 + t15266;
  t21154 = t18985*t5727;
  t21356 = t5467*t20784;
  t21357 = t21154 + t21356;
  t21377 = t5467*t14827;
  t21391 = -1.*t5727*t15268;
  t21421 = t21377 + t21391;
  t19028 = -1.*t18985*t5727;
  t21055 = -1.*t5467*t20784;
  t21117 = t19028 + t21055;
  t21842 = t5467*t18985;
  t21859 = -1.*t5727*t20784;
  t21860 = t21842 + t21859;
  t14830 = t14827*t5727;
  t15603 = t5467*t15268;
  t15626 = t14830 + t15603;
  t21614 = t612*t20509;
  t21703 = t19800*t3792;
  t21746 = t21614 + t21703;
  t22232 = -1.*t612*t935*t2829;
  t22240 = -1.*t3760*t2829*t3792;
  t22258 = t22232 + t22240;
  t21428 = -1.*t3760*t612;
  t21448 = t935*t3792;
  t21491 = t21428 + t21448;
  t21833 = -1.*t21491*t21746;
  t22009 = t612*t935*t5657;
  t22014 = t3760*t5657*t3792;
  t22015 = t22009 + t22014;
  t22372 = -1.*t612*t20509;
  t22374 = -1.*t19800*t3792;
  t22387 = t22372 + t22374;
  t22019 = t22015*t21746;
  t22658 = -1.*t612*t935*t5657;
  t22660 = -1.*t3760*t5657*t3792;
  t22661 = t22658 + t22660;
  t21841 = -1.*t5467*t15778*t21357;
  t21862 = t5727*t15778*t21860;
  t21875 = t21833 + t21841 + t21862;
  t22391 = -1.*t15778*t21746;
  t22579 = -1.*t21491*t20784;
  t22398 = t3760*t612;
  t22404 = -1.*t935*t3792;
  t22406 = t22398 + t22404;
  t22642 = t15268*t21746;
  t22663 = t22015*t20784;
  t22040 = t15626*t21357;
  t22061 = t21421*t21860;
  t22098 = t22019 + t22040 + t22061;
  t22260 = var2[0]*t5467*t22258;
  t22261 = t39*t5727*t22258;
  t22277 = t4719*t7373;
  t22280 = t22261 + t22277;
  t22292 = var2[1]*t22280;
  t22307 = -1.*t4719*t5727*t22258;
  t22315 = t39*t7373;
  t22339 = t22307 + t22315;
  t22354 = var2[2]*t22339;
  t22358 = -1.*t15778*t20784;
  t22362 = t21833 + t22358;
  t22366 = t15268*t22362;
  t22780 = -0.15121*t935;
  t22781 = -1.*t935*t19475;
  t22782 = t22780 + t22781;
  t22778 = t20416 + t19779;
  t22412 = -1.*t22406*t20784;
  t22799 = t612*t22782;
  t22801 = -1.*t22778*t3792;
  t22802 = t22799 + t22801;
  t22805 = t612*t22778;
  t22816 = t22782*t3792;
  t22817 = t22805 + t22816;
  t22662 = t22661*t20784;
  t22687 = t18985*t14827;
  t22707 = t15268*t20784;
  t22708 = t22687 + t22019 + t22707;
  t22711 = t15778*t22708;
  t22716 = t5467*t22661*t21875;
  t22717 = Power(t5467,2);
  t22722 = Power(t5727,2);
  t22821 = -1.*t21491*t22817;
  t22743 = -1.*t5467*t22406*t21357;
  t22746 = t5727*t22406*t21860;
  t22831 = t22015*t22817;
  t22754 = t5467*t22661*t21357;
  t22756 = -1.*t5727*t22661*t21860;
  t22761 = t5467*t22406*t22098;
  t22910 = t1172*t2423;
  t22911 = -1.*t1153*t2526;
  t22912 = t22910 + t22911;
  t22987 = t3760*t612*t22912;
  t22988 = -1.*t935*t22912*t3792;
  t22992 = t22987 + t22988;
  t23000 = t612*t935*t22912;
  t23002 = t3760*t22912*t3792;
  t23011 = t23000 + t23002;
  t23013 = t5467*t2829;
  t23014 = -1.*t5727*t22992;
  t23025 = t23013 + t23014;
  t23064 = -0.28121*t2423;
  t23129 = -1.*t18604*t2423;
  t23282 = 0.27*t1153*t2526;
  t23363 = t23064 + t23129 + t23282;
  t23439 = t612*t935*t23363;
  t23448 = t3760*t23363*t3792;
  t23571 = t23439 + t23448;
  t23659 = t3760*t612*t23363;
  t23676 = -1.*t935*t23363*t3792;
  t23685 = t23659 + t23676;
  t23656 = -1.*t21491*t23571;
  t23860 = 0.28121*t1153;
  t23872 = t23860 + t19419 + t19447;
  t24063 = t23571*t22015;
  t24068 = t4003*t21746;
  t24099 = t23872*t5727;
  t24232 = t5467*t23685;
  t24234 = t24099 + t24232;
  t24243 = t5467*t23872;
  t24245 = -1.*t5727*t23685;
  t24251 = t24243 + t24245;
  t24305 = t5657*t5727;
  t24321 = t5467*t7373;
  t24327 = t24305 + t24321;
  t22913 = 0.15121*t22912;
  t22914 = 0.15121*t5657;
  t22955 = t22913 + t22914;
  t22959 = var2[9]*t22955;
  t22969 = -1.*t935*t19800;
  t22973 = t3760*t20509;
  t22977 = t22969 + t22973;
  t26150 = 0.27*t1172*t2423;
  t26770 = t26150 + t18781;
  t26843 = t612*t935*t26770;
  t26847 = t3760*t26770*t3792;
  t26871 = t26843 + t26847;
  t26879 = t3760*t612*t26770;
  t26884 = -1.*t935*t26770*t3792;
  t26894 = t26879 + t26884;
  t27214 = t612*t935*t14827;
  t27223 = t3760*t14827*t3792;
  t27361 = t27214 + t27223;
  t26876 = -1.*t21491*t26871;
  t27420 = -0.27*t1153*t1172;
  t27422 = -0.27*t2423*t2526;
  t27493 = t27420 + t27422;
  t27559 = t3760*t612*t14827;
  t27560 = -1.*t935*t14827*t3792;
  t27563 = t27559 + t27560;
  t27504 = t26871*t22015;
  t27521 = t27361*t21746;
  t27622 = t27493*t5727;
  t27626 = t5467*t26894;
  t27627 = t27622 + t27626;
  t27636 = t5467*t27493;
  t27655 = -1.*t5727*t26894;
  t27660 = t27636 + t27655;
  t27698 = t22912*t5727;
  t27707 = t5467*t27563;
  t27708 = t27698 + t27707;
  t9761 = t4719*t4003;
  t9851 = -1.*t39*t8217;
  t12101 = t9761 + t9851;
  t21929 = -1.*t14827*t5727;
  t21966 = -1.*t5467*t15268;
  t21968 = t21929 + t21966;
  t24372 = t24327*t21357;
  t24373 = t8217*t21860;
  t28559 = -1.*t22015*t21746;
  t23858 = t18985*t5657;
  t24070 = t7373*t20784;
  t30218 = -1.*t15268*t21746;
  t30235 = -1.*t22015*t20784;
  t30313 = t7373*t21746;
  t30335 = t4003*t20784;
  t28563 = -1.*t15626*t21357;
  t28728 = -1.*t21421*t21860;
  t28747 = t28559 + t28563 + t28728;
  t29014 = t24068 + t24372 + t24373;
  t30045 = var2[0]*t5467*t22406;
  t30061 = t39*t15778;
  t30076 = -1.*t4719*t5727*t22406;
  t30078 = t30061 + t30076;
  t30178 = var2[2]*t30078;
  t30191 = t4719*t15778;
  t30195 = t39*t5727*t22406;
  t30197 = t30191 + t30195;
  t30212 = var2[1]*t30197;
  t30219 = -1.*t22661*t20784;
  t30255 = -1.*t18985*t14827;
  t30285 = -1.*t15268*t20784;
  t30303 = t30255 + t28559 + t30285;
  t30308 = t7373*t30303;
  t30320 = t22258*t20784;
  t30347 = t23858 + t24068 + t24070;
  t30437 = t15268*t30347;
  t33858 = -1.*t22015*t22817;
  t32188 = -1.*t5467*t22661*t21357;
  t32210 = t5727*t22661*t21860;
  t33879 = t4003*t22817;
  t33163 = t5467*t22258*t21357;
  t33320 = -1.*t5727*t22258*t21860;
  t33638 = t5467*t22258*t28747;
  t33650 = t5467*t22661*t29014;
  t34059 = t18985*t2829;
  t34175 = t5657*t23872;
  t34265 = -1.*t18985*t5657;
  t34458 = Power(t3760,2);
  t34618 = Power(t935,2);
  t34328 = -1.*t23872*t14827;
  t34908 = t23571*t4003;
  t34914 = t23011*t21746;
  t22979 = t2829*t5727;
  t22996 = t5467*t22992;
  t22997 = t22979 + t22996;
  t34925 = -1.*t23571*t22015;
  t34928 = -1.*t4003*t21746;
  t34051 = t2829*t19475;
  t34052 = t23858 + t34051;
  t34182 = -1.*t5657*t19475;
  t34186 = t34182 + t30255;
  t34681 = -1.*t3760*t5657*t19800;
  t34685 = -1.*t935*t5657*t20509;
  t34688 = t30255 + t34681 + t34685;
  t35043 = t5657*t27493;
  t34820 = t3760*t2829*t19800;
  t34833 = t935*t2829*t20509;
  t34849 = t23858 + t34820 + t34833;
  t35050 = -1.*t22912*t18985;
  t35053 = -1.*t27493*t14827;
  t35460 = t26871*t4003;
  t35465 = -1.*t26871*t22015;
  t35468 = -1.*t27361*t21746;
  t27811 = t5467*t22912;
  t27815 = -1.*t5727*t27563;
  t27856 = t27811 + t27815;
  t28186 = t39*t5727*t15778;
  t28197 = t4719*t21491;
  t28223 = t28186 + t28197;
  t26007 = t4719*t22015;
  t26052 = -1.*t39*t21421;
  t26059 = t26007 + t26052;
  t34977 = -1.*t24327*t21357;
  t34978 = -1.*t8217*t21860;
  t35565 = t21491*t21746;
  t34929 = -1.*t7373*t20784;
  t35567 = t5467*t15778*t21357;
  t35569 = -1.*t5727*t15778*t21860;
  t35570 = t35565 + t35567 + t35569;
  t35628 = t15778*t21746;
  t35630 = t21491*t20784;
  t35635 = -1.*t7373*t21746;
  t35637 = -1.*t4003*t20784;
  t35605 = t34928 + t34977 + t34978;
  t35611 = var2[0]*t5467*t22661;
  t35612 = t39*t5727*t22661;
  t35615 = t4719*t15268;
  t35616 = t35612 + t35615;
  t35617 = var2[1]*t35616;
  t35618 = -1.*t4719*t5727*t22661;
  t35619 = t39*t15268;
  t35620 = t35618 + t35619;
  t35621 = var2[2]*t35620;
  t35622 = t15778*t20784;
  t35623 = t35565 + t35622;
  t35626 = t7373*t35623;
  t35629 = t22406*t20784;
  t35636 = -1.*t22258*t20784;
  t35640 = t34265 + t34928 + t34929;
  t35641 = t15778*t35640;
  t35645 = t5467*t22258*t35570;
  t35699 = t21491*t22817;
  t35648 = t5467*t22406*t21357;
  t35649 = -1.*t5727*t22406*t21860;
  t35704 = -1.*t4003*t22817;
  t35668 = -1.*t5467*t22258*t21357;
  t35669 = t5727*t22258*t21860;
  t35673 = t5467*t22406*t35605;
  t27892 = t39*t4003;
  t27893 = t4719*t8217;
  t27903 = t27892 + t27893;
  t35834 = t21491*t23571;
  t36032 = -1.*t23571*t4003;
  t36041 = -1.*t23011*t21746;
  t35737 = t935*t19800;
  t35738 = -1.*t3760*t20509;
  t35740 = t35737 + t35738;
  t37137 = t21491*t26871;
  t37265 = -1.*t26871*t4003;
  t25686 = t39*t22015;
  t25746 = t4719*t21421;
  t25805 = t25686 + t25746;
  t24399 = 0.28121*t1172;
  t24782 = t18604*t1172;
  p_output1[0]=(-1.*t39*t4003 - 1.*t4719*t8217)*var2[1] + t12101*var2[2];
  p_output1[1]=t8217*var2[0] - 1.*t14737*t39*var2[1] + t14737*t4719*var2[2] + (t21421*t21875 + t15778*(t21117*t21421 + t21357*t21421 + t15626*t21860 + t21860*t21968)*t5467 - 1.*t15778*t22098*t5727 + t15626*(t15778*t21117*t5727 + t15778*t21357*t5727))*var2[3];
  p_output1[2]=t22260 + t22292 + t22354 + (t22716 + t15626*(t22391 + t22579 - 1.*t15778*t22387*t22717 - 1.*t15778*t22387*t22722 + t22743 + t22746) + t22761 + t15778*t5467*(t22642 + t22663 + t22754 + t22756 + t15626*t22387*t5467 - 1.*t21421*t22387*t5727))*var2[3] + (t22366 + t22015*(-1.*t15778*t22387 + t22391 + t22412 + t22579) + t21491*(t15268*t22387 + t22642 + t22662 + t22663) + t22711)*var2[4];
  p_output1[3]=t22260 + t22292 + t22354 + (t22716 + t22761 + t15626*(t22391 + t22743 + t22746 - 1.*t15778*t22717*t22802 - 1.*t15778*t22722*t22802 + t22821) + t15778*t5467*(t22642 + t22754 + t22756 + t22831 + t15626*t22802*t5467 - 1.*t21421*t22802*t5727))*var2[3] + (t22366 + t22711 + t22015*(t22391 + t22412 - 1.*t15778*t22802 + t22821) + t21491*(t22642 + t22662 + t15268*t22802 + t22831))*var2[4] + t14827*(-1.*t19800*t3760 + t22778*t3760 - 1.*t20509*t935 - 1.*t22782*t935)*var2[5];
  p_output1[4]=t22959 + t22997*var2[0] + (-1.*t23025*t39 + t23011*t4719)*var2[1] + (t23011*t39 + t23025*t4719)*var2[2] + (t21875*t24327 + t15778*(t24063 + t24068 + t15626*t24234 + t21421*t24251 + t24372 + t24373)*t5467 + t15626*(t23656 - 1.*t15778*t24234*t5467 + t15778*t24251*t5727))*var2[3] + (t22015*(t23656 - 1.*t15778*t23685) + t21491*(t15268*t23685 + t23858 + t14827*t23872 + t24063 + t24068 + t24070) + t22362*t4003)*var2[4] + t22977*t5657*var2[5];
  p_output1[5]=t22959 + t15626*var2[0] + t26059*var2[1] + t25805*var2[2] + (t21875*t27708 + t15778*(t27504 + t27521 + t15626*t27627 + t21421*t27660 + t21357*t27708 + t21860*t27856)*t5467 + t15626*(t26876 - 1.*t15778*t27627*t5467 + t15778*t27660*t5727))*var2[3] + (t22015*(t26876 - 1.*t15778*t26894) + t22362*t27361 + t21491*(t18985*t22912 + t15268*t26894 + t14827*t27493 + t27504 + t27521 + t20784*t27563))*var2[4] + t22912*t22977*var2[5] + (-0.27*Power(t1172,2) + t24399 + t24782)*var2[10];
  p_output1[6]=t24327;
  p_output1[7]=t12101;
  p_output1[8]=t27903;
  p_output1[9]=t15626*t21875 + t15778*t22098*t5467;
  p_output1[10]=t22015*t22362 + t21491*t22708;
  p_output1[11]=t14827*t22977;
  p_output1[12]=0.15121*t14827 + 0.15121*t2829;
  p_output1[13]=0.28121*t2526 - 0.27*t1172*t2526 + t18604*t2526;
  p_output1[14]=(-1.*t21491*t39 + t15778*t4719*t5727)*var2[1] + t28223*var2[2];
  p_output1[15]=-1.*t15778*t5727*var2[0] + t15778*t39*t5467*var2[1] - 1.*t15778*t4719*t5467*var2[2] + ((-1.*t21117*t21421 - 1.*t21357*t21421 - 1.*t15626*t21860 - 1.*t21860*t21968)*t24327 + t21421*t29014 + t28747*t8217 + t15626*(t14737*t21860 + t21860*t24327 + t21117*t8217 + t21357*t8217))*var2[3];
  p_output1[16]=t30045 + t30178 + t30212 + (t33638 + t33650 + t24327*(t30218 + t30235 + t32188 + t32210 - 1.*t15626*t22387*t5467 + t21421*t22387*t5727) + t15626*(t30313 + t30335 + t33163 + t33320 + t22387*t24327*t5467 - 1.*t22387*t5727*t8217))*var2[3] + (t30308 + t30437 + (-1.*t15268*t22387 + t30218 + t30219 + t30235)*t4003 + t22015*(t30313 + t30320 + t30335 + t22387*t7373))*var2[4];
  p_output1[17]=t30045 + t30178 + t30212 + (t33638 + t33650 + t24327*(t30218 + t32188 + t32210 + t33858 - 1.*t15626*t22802*t5467 + t21421*t22802*t5727) + t15626*(t30313 + t33163 + t33320 + t33879 + t22802*t24327*t5467 - 1.*t22802*t5727*t8217))*var2[3] + (t30308 + t30437 + (-1.*t15268*t22802 + t30218 + t30219 + t33858)*t4003 + t22015*(t30313 + t30320 + t33879 + t22802*t7373))*var2[4] + (t14827*(t20509*t2829*t3760 + t22782*t2829*t3760 - 1.*t19800*t2829*t935 + t22778*t2829*t935) + t5657*(-1.*t20509*t3760*t5657 - 1.*t22782*t3760*t5657 + t19800*t5657*t935 - 1.*t22778*t5657*t935))*var2[5];
  p_output1[18]=(t22997*t28747 + t24327*t29014 + t24327*(-1.*t15626*t24234 - 1.*t21421*t24251 + t34925 + t34928 + t34977 + t34978) + t15626*(t21357*t22997 + t21860*t23025 + t24234*t24327 + t34908 + t34914 + t24251*t8217))*var2[3] + (t23011*t30303 + t30347*t4003 + (-1.*t15268*t23685 + t34265 + t34328 + t34925 + t34928 + t34929)*t4003 + t22015*(t20784*t22992 + t34059 + t34175 + t34908 + t34914 + t23685*t7373))*var2[4] + (t2829*t34688 + t34849*t5657 + t14827*(t34059 + t34175 + t23363*t2829*t34458 + t23363*t2829*t34618 + t19800*t22912*t3760 + t20509*t22912*t935) + t5657*(t34265 + t34328 - 1.*t19800*t2829*t3760 - 1.*t23363*t34458*t5657 - 1.*t23363*t34618*t5657 - 1.*t20509*t2829*t935))*var2[5] + (t14827*(t19475*t22912 + t23363*t2829 + t34059 + t34175) + t2829*t34186 + t34052*t5657 + t5657*(-1.*t19475*t2829 + t34265 + t34328 - 1.*t23363*t5657))*var2[9];
  p_output1[19]=(t15626*t28747 + t27708*t29014 + t24327*(-1.*t15626*t27627 - 1.*t21421*t27660 - 1.*t21357*t27708 - 1.*t21860*t27856 + t35465 + t35468) + t15626*(t22019 + t22040 + t22061 + t24327*t27627 + t35460 + t27660*t8217))*var2[3] + (t22015*t30303 + t27361*t30347 + (-1.*t15268*t26894 - 1.*t20784*t27563 + t35050 + t35053 + t35465 + t35468)*t4003 + t22015*(t22019 + t22687 + t22707 + t35043 + t35460 + t26894*t7373))*var2[4] + (t14827*t34688 + t22912*t34849 + t5657*(t35050 + t35053 - 1.*t14827*t19800*t3760 - 1.*t26770*t34458*t5657 - 1.*t26770*t34618*t5657 - 1.*t14827*t20509*t935) + t14827*(t22687 + t26770*t2829*t34458 + t26770*t2829*t34618 + t35043 + t19800*t3760*t5657 + t20509*t5657*t935))*var2[5] + (t22912*t34052 + t14827*t34186 + t14827*(t22687 + t26770*t2829 + t35043 + t19475*t5657) + t5657*(-1.*t14827*t19475 + t35050 + t35053 - 1.*t26770*t5657))*var2[9];
  p_output1[20]=t15778*t5467;
  p_output1[21]=t28223;
  p_output1[22]=t21491*t39 - 1.*t15778*t4719*t5727;
  p_output1[23]=t24327*t28747 + t15626*t29014;
  p_output1[24]=t22015*t30347 + t30303*t4003;
  p_output1[25]=t14827*t34849 + t34688*t5657;
  p_output1[26]=-0.15121 + t14827*t34052 + t34186*t5657;
  p_output1[27]=(-1.*t22015*t39 - 1.*t21421*t4719)*var2[1] + t26059*var2[2];
  p_output1[28]=t21421*var2[0] - 1.*t21968*t39*var2[1] + t21968*t4719*var2[2] + (-1.*t15778*t35605*t5727 + t24327*(-1.*t15778*t21117*t5727 - 1.*t15778*t21357*t5727) + t35570*t8217 + t15778*t5467*(-1.*t14737*t21860 - 1.*t21860*t24327 - 1.*t21117*t8217 - 1.*t21357*t8217))*var2[3];
  p_output1[29]=t35611 + t35617 + t35621 + (t35645 + t24327*(t15778*t22387*t22717 + t15778*t22387*t22722 + t35628 + t35630 + t35648 + t35649) + t35673 + t15778*t5467*(t35635 + t35637 + t35668 + t35669 - 1.*t22387*t24327*t5467 + t22387*t5727*t8217))*var2[3] + (t35626 + t35641 + (t15778*t22387 + t35628 + t35629 + t35630)*t4003 + t21491*(t35635 + t35636 + t35637 - 1.*t22387*t7373))*var2[4];
  p_output1[30]=t35611 + t35617 + t35621 + (t35645 + t35673 + t24327*(t15778*t22717*t22802 + t15778*t22722*t22802 + t35628 + t35648 + t35649 + t35699) + t15778*t5467*(t35635 + t35668 + t35669 + t35704 - 1.*t22802*t24327*t5467 + t22802*t5727*t8217))*var2[3] + (t35626 + t35641 + (t15778*t22802 + t35628 + t35629 + t35699)*t4003 + t21491*(t35635 + t35636 + t35704 - 1.*t22802*t7373))*var2[4] + t5657*(t19800*t3760 - 1.*t22778*t3760 + t20509*t935 + t22782*t935)*var2[5];
  p_output1[31]=t24327*var2[0] + t12101*var2[1] + t27903*var2[2] + (t22997*t35570 + t24327*(t35834 + t15778*t24234*t5467 - 1.*t15778*t24251*t5727) + t15778*t5467*(-1.*t21357*t22997 - 1.*t21860*t23025 - 1.*t24234*t24327 + t36032 + t36041 - 1.*t24251*t8217))*var2[3] + (t23011*t35623 + (t15778*t23685 + t35834)*t4003 + t21491*(-1.*t20784*t22992 - 1.*t18985*t2829 + t36032 + t36041 - 1.*t23872*t5657 - 1.*t23685*t7373))*var2[4] + t2829*t35740*var2[5];
  p_output1[32]=t27708*var2[0] + (-1.*t27856*t39 + t27361*t4719)*var2[1] + (t27361*t39 + t27856*t4719)*var2[2] + (t15626*t35570 + t24327*(t37137 + t15778*t27627*t5467 - 1.*t15778*t27660*t5727) + t15778*t5467*(-1.*t24327*t27627 + t28559 + t28563 + t28728 + t37265 - 1.*t27660*t8217))*var2[3] + (t22015*t35623 + (t15778*t26894 + t37137)*t4003 + t21491*(t28559 + t30255 + t30285 + t37265 - 1.*t27493*t5657 - 1.*t26894*t7373))*var2[4] + t14827*t35740*var2[5] + (-0.28121*t2526 + 0.27*t1172*t2526 - 1.*t18604*t2526)*var2[10];
  p_output1[33]=t15626;
  p_output1[34]=t26059;
  p_output1[35]=t25805;
  p_output1[36]=t24327*t35570 + t15778*t35605*t5467;
  p_output1[37]=t21491*t35640 + t35623*t4003;
  p_output1[38]=t35740*t5657;
  p_output1[39]=t24399 + t24782 + 0.27*Power(t2526,2);
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

#include "J_dh_RlFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void J_dh_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
