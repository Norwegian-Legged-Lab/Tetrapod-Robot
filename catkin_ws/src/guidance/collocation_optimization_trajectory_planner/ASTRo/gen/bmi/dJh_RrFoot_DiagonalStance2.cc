/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 18:51:44 GMT+02:00
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
  double t36200;
  double t36262;
  double t36293;
  double t36323;
  double t36332;
  double t36344;
  double t36346;
  double t36359;
  double t28449;
  double t35105;
  double t36360;
  double t36381;
  double t36352;
  double t36370;
  double t36374;
  double t26954;
  double t36387;
  double t36388;
  double t36393;
  double t36394;
  double t36395;
  double t36470;
  double t36481;
  double t36483;
  double t36484;
  double t36486;
  double t36487;
  double t36498;
  double t36499;
  double t36500;
  double t36503;
  double t36504;
  double t36505;
  double t36516;
  double t36518;
  double t36520;
  double t36522;
  double t36523;
  double t36525;
  double t36526;
  double t36527;
  double t36530;
  double t36531;
  double t36533;
  double t36534;
  double t36545;
  double t36546;
  double t36547;
  double t36556;
  double t36557;
  double t36558;
  double t36559;
  double t36560;
  double t36577;
  double t36581;
  double t36585;
  double t36586;
  double t36587;
  double t36588;
  double t36589;
  double t36590;
  double t36592;
  double t36555;
  double t36561;
  double t36562;
  double t36563;
  double t36600;
  double t36601;
  double t36603;
  double t36604;
  double t36609;
  double t36611;
  double t36612;
  double t36613;
  double t36614;
  double t36624;
  double t36625;
  double t36626;
  double t36573;
  double t36615;
  double t36619;
  double t36638;
  double t36640;
  double t36641;
  double t36552;
  double t36553;
  double t36554;
  double t36630;
  double t36631;
  double t36632;
  double t36651;
  double t36656;
  double t36658;
  double t36679;
  double t36681;
  double t36682;
  double t36747;
  double t36748;
  double t36749;
  double t36633;
  double t36762;
  double t36763;
  double t36774;
  double t36664;
  double t36799;
  double t36803;
  double t36804;
  double t36636;
  double t36644;
  double t36646;
  double t36776;
  double t36791;
  double t36780;
  double t36781;
  double t36784;
  double t36795;
  double t36809;
  double t36665;
  double t36666;
  double t36667;
  double t36690;
  double t36701;
  double t36854;
  double t36857;
  double t36868;
  double t36870;
  double t36691;
  double t36692;
  double t36693;
  double t36702;
  double t36703;
  double t36704;
  double t36725;
  double t36739;
  double t36726;
  double t36727;
  double t36729;
  double t36822;
  double t36825;
  double t36911;
  double t36913;
  double t36917;
  double t36920;
  double t36740;
  double t36741;
  double t36742;
  double t36750;
  double t36751;
  double t36752;
  double t36753;
  double t36754;
  double t36755;
  double t36756;
  double t36757;
  double t36758;
  double t36759;
  double t36760;
  double t36761;
  double t36951;
  double t36952;
  double t36953;
  double t36948;
  double t36949;
  double t36786;
  double t36958;
  double t36959;
  double t36960;
  double t36962;
  double t36963;
  double t36964;
  double t36805;
  double t36812;
  double t36816;
  double t36817;
  double t36818;
  double t36821;
  double t36965;
  double t36827;
  double t36828;
  double t36969;
  double t36834;
  double t36835;
  double t36838;
  double t36843;
  double t36844;
  double t36845;
  double t36846;
  double t36847;
  double t36848;
  double t36849;
  double t36850;
  double t36851;
  double t36856;
  double t36862;
  double t36863;
  double t36864;
  double t36866;
  double t36869;
  double t36873;
  double t36874;
  double t36875;
  double t36876;
  double t37000;
  double t36881;
  double t36882;
  double t37004;
  double t36887;
  double t36888;
  double t36891;
  double t36892;
  double t36896;
  double t36897;
  double t36898;
  double t36900;
  double t36901;
  double t36902;
  double t36903;
  double t36904;
  double t36906;
  double t36907;
  double t36908;
  double t36909;
  double t36912;
  double t36919;
  double t36923;
  double t36924;
  double t36925;
  double t36926;
  double t36930;
  double t37028;
  double t36933;
  double t36934;
  double t37032;
  double t36939;
  double t36940;
  double t36943;
  double t37051;
  double t37052;
  double t37053;
  double t37064;
  double t37065;
  double t37066;
  double t37070;
  double t37071;
  double t37072;
  double t37074;
  double t37075;
  double t37076;
  double t37084;
  double t37085;
  double t37086;
  double t37087;
  double t37088;
  double t37089;
  double t37090;
  double t37092;
  double t37093;
  double t37094;
  double t37091;
  double t37099;
  double t37100;
  double t37102;
  double t37108;
  double t37109;
  double t37110;
  double t37112;
  double t37113;
  double t37114;
  double t37130;
  double t37133;
  double t37146;
  double t37148;
  double t37141;
  double t37170;
  double t37172;
  double t37063;
  double t37067;
  double t37068;
  double t37177;
  double t36492;
  double t36493;
  double t36494;
  double t37209;
  double t37216;
  double t37218;
  double t37055;
  double t37056;
  double t37057;
  double t37058;
  double t37059;
  double t37060;
  double t37061;
  double t36538;
  double t36539;
  double t36540;
  double t37253;
  double t37254;
  double t37255;
  double t37256;
  double t37257;
  double t37259;
  double t37260;
  double t37261;
  double t37265;
  double t37266;
  double t37267;
  double t37258;
  double t37270;
  double t37271;
  double t37272;
  double t37277;
  double t37278;
  double t37279;
  double t37274;
  double t37276;
  double t37285;
  double t37286;
  double t37287;
  double t37289;
  double t37290;
  double t37291;
  double t37295;
  double t37296;
  double t37297;
  double t37127;
  double t37128;
  double t37136;
  double t37137;
  double t37154;
  double t37155;
  double t37156;
  double t37315;
  double t37164;
  double t37165;
  double t37166;
  double t37319;
  double t37321;
  double t37345;
  double t37350;
  double t37353;
  double t37303;
  double t37304;
  double t37305;
  double t37199;
  double t37200;
  double t37201;
  double t37391;
  double t37397;
  t36200 = Cos(var1[16]);
  t36262 = Cos(var1[17]);
  t36293 = -1.*t36200*t36262;
  t36323 = Sin(var1[16]);
  t36332 = Sin(var1[17]);
  t36344 = -1.*t36323*t36332;
  t36346 = t36293 + t36344;
  t36359 = Cos(var1[15]);
  t28449 = Cos(var1[5]);
  t35105 = Sin(var1[15]);
  t36360 = Sin(var1[5]);
  t36381 = Cos(var1[3]);
  t36352 = t28449*t35105*t36346;
  t36370 = t36359*t36346*t36360;
  t36374 = t36352 + t36370;
  t26954 = Sin(var1[3]);
  t36387 = Cos(var1[4]);
  t36388 = -1.*t36262*t36323;
  t36393 = t36200*t36332;
  t36394 = t36388 + t36393;
  t36395 = t36387*t36394;
  t36470 = Sin(var1[4]);
  t36481 = t36359*t28449*t36346;
  t36483 = -1.*t35105*t36346*t36360;
  t36484 = t36481 + t36483;
  t36486 = -1.*t36470*t36484;
  t36487 = t36395 + t36486;
  t36498 = t28449*t35105;
  t36499 = t36359*t36360;
  t36500 = t36498 + t36499;
  t36503 = -1.*t36359*t28449;
  t36504 = t35105*t36360;
  t36505 = t36503 + t36504;
  t36516 = t28449*t35105*t36394;
  t36518 = t36359*t36394*t36360;
  t36520 = t36516 + t36518;
  t36522 = t36200*t36262;
  t36523 = t36323*t36332;
  t36525 = t36522 + t36523;
  t36526 = t36387*t36525;
  t36527 = t36359*t28449*t36394;
  t36530 = -1.*t35105*t36394*t36360;
  t36531 = t36527 + t36530;
  t36533 = -1.*t36470*t36531;
  t36534 = t36526 + t36533;
  t36545 = -1.*t36394*t36470;
  t36546 = -1.*t36387*t36484;
  t36547 = t36545 + t36546;
  t36556 = -1.*t36262;
  t36557 = 1. + t36556;
  t36558 = -0.50321*t36557;
  t36559 = -0.19821*t36262;
  t36560 = t36558 + t36559;
  t36577 = -1.*t36359;
  t36581 = 1. + t36577;
  t36585 = -0.15121*t36581;
  t36586 = -1.*t36200;
  t36587 = 1. + t36586;
  t36588 = -0.28121*t36587;
  t36589 = t36200*t36560;
  t36590 = 0.305*t36323*t36332;
  t36592 = t36588 + t36589 + t36590;
  t36555 = 0.28121*t36323;
  t36561 = t36560*t36323;
  t36562 = -0.305*t36200*t36332;
  t36563 = t36555 + t36561 + t36562;
  t36600 = t36359*t36592;
  t36601 = t36585 + t36600;
  t36603 = t28449*t36601;
  t36604 = -0.15121*t36359;
  t36609 = 0.15121*t35105;
  t36611 = t35105*t36592;
  t36612 = t36585 + t36604 + t36609 + t36611;
  t36613 = -1.*t36612*t36360;
  t36614 = t36603 + t36613;
  t36624 = t36563*t36470;
  t36625 = t36387*t36614;
  t36626 = t36624 + t36625;
  t36573 = -1.*t36563*t36470;
  t36615 = -1.*t36387*t36614;
  t36619 = t36573 + t36615;
  t36638 = t36387*t36563;
  t36640 = -1.*t36470*t36614;
  t36641 = t36638 + t36640;
  t36552 = t36525*t36470;
  t36553 = t36387*t36531;
  t36554 = t36552 + t36553;
  t36630 = t28449*t36612;
  t36631 = t36601*t36360;
  t36632 = t36630 + t36631;
  t36651 = -1.*t36525*t36470;
  t36656 = -1.*t36387*t36531;
  t36658 = t36651 + t36656;
  t36679 = t36394*t36470;
  t36681 = t36387*t36484;
  t36682 = t36679 + t36681;
  t36747 = -1.*t28449*t35105*t36346;
  t36748 = -1.*t36359*t36346*t36360;
  t36749 = t36747 + t36748;
  t36633 = -1.*t36505*t36632;
  t36762 = -1.*t28449*t36612;
  t36763 = -1.*t36601*t36360;
  t36774 = t36762 + t36763;
  t36664 = t36520*t36632;
  t36799 = -1.*t28449*t35105*t36394;
  t36803 = -1.*t36359*t36394*t36360;
  t36804 = t36799 + t36803;
  t36636 = -1.*t36387*t36500*t36626;
  t36644 = t36470*t36500*t36641;
  t36646 = t36633 + t36636 + t36644;
  t36776 = -1.*t36500*t36632;
  t36791 = -1.*t36505*t36614;
  t36780 = t36359*t28449;
  t36781 = -1.*t35105*t36360;
  t36784 = t36780 + t36781;
  t36795 = t36531*t36632;
  t36809 = t36520*t36614;
  t36665 = t36554*t36626;
  t36666 = t36534*t36641;
  t36667 = t36664 + t36665 + t36666;
  t36690 = -1.*t36520*t36632;
  t36701 = t36374*t36632;
  t36854 = -1.*t36531*t36632;
  t36857 = -1.*t36520*t36614;
  t36868 = t36484*t36632;
  t36870 = t36374*t36614;
  t36691 = -1.*t36554*t36626;
  t36692 = -1.*t36534*t36641;
  t36693 = t36690 + t36691 + t36692;
  t36702 = t36682*t36626;
  t36703 = t36487*t36641;
  t36704 = t36701 + t36702 + t36703;
  t36725 = t36505*t36632;
  t36739 = -1.*t36374*t36632;
  t36726 = t36387*t36500*t36626;
  t36727 = -1.*t36470*t36500*t36641;
  t36729 = t36725 + t36726 + t36727;
  t36822 = Power(t36387,2);
  t36825 = Power(t36470,2);
  t36911 = t36500*t36632;
  t36913 = t36505*t36614;
  t36917 = -1.*t36484*t36632;
  t36920 = -1.*t36374*t36614;
  t36740 = -1.*t36682*t36626;
  t36741 = -1.*t36487*t36641;
  t36742 = t36739 + t36740 + t36741;
  t36750 = var2[0]*t36387*t36749;
  t36751 = t26954*t36470*t36749;
  t36752 = t36381*t36484;
  t36753 = t36751 + t36752;
  t36754 = var2[1]*t36753;
  t36755 = -1.*t36381*t36470*t36749;
  t36756 = t26954*t36484;
  t36757 = t36755 + t36756;
  t36758 = var2[2]*t36757;
  t36759 = -1.*t36500*t36614;
  t36760 = t36633 + t36759;
  t36761 = t36531*t36760;
  t36951 = -0.15121*t35105;
  t36952 = -1.*t35105*t36592;
  t36953 = t36951 + t36952;
  t36948 = 0.15121*t36359;
  t36949 = t36948 + t36600;
  t36786 = -1.*t36784*t36614;
  t36958 = t28449*t36953;
  t36959 = -1.*t36949*t36360;
  t36960 = t36958 + t36959;
  t36962 = t28449*t36949;
  t36963 = t36953*t36360;
  t36964 = t36962 + t36963;
  t36805 = t36804*t36614;
  t36812 = t36563*t36525;
  t36816 = t36531*t36614;
  t36817 = t36812 + t36664 + t36816;
  t36818 = t36500*t36817;
  t36821 = t36387*t36804*t36646;
  t36965 = -1.*t36505*t36964;
  t36827 = -1.*t36387*t36784*t36626;
  t36828 = t36470*t36784*t36641;
  t36969 = t36520*t36964;
  t36834 = t36387*t36804*t36626;
  t36835 = -1.*t36470*t36804*t36641;
  t36838 = t36387*t36784*t36667;
  t36843 = var2[0]*t36387*t36784;
  t36844 = t26954*t36500;
  t36845 = -1.*t36381*t36470*t36784;
  t36846 = t36844 + t36845;
  t36847 = var2[2]*t36846;
  t36848 = t36381*t36500;
  t36849 = t26954*t36470*t36784;
  t36850 = t36848 + t36849;
  t36851 = var2[1]*t36850;
  t36856 = -1.*t36804*t36614;
  t36862 = -1.*t36563*t36525;
  t36863 = -1.*t36531*t36614;
  t36864 = t36862 + t36690 + t36863;
  t36866 = t36484*t36864;
  t36869 = t36749*t36614;
  t36873 = t36563*t36394;
  t36874 = t36484*t36614;
  t36875 = t36873 + t36701 + t36874;
  t36876 = t36531*t36875;
  t37000 = -1.*t36520*t36964;
  t36881 = -1.*t36387*t36804*t36626;
  t36882 = t36470*t36804*t36641;
  t37004 = t36374*t36964;
  t36887 = t36387*t36749*t36626;
  t36888 = -1.*t36470*t36749*t36641;
  t36891 = t36387*t36749*t36693;
  t36892 = t36387*t36804*t36704;
  t36896 = var2[0]*t36387*t36804;
  t36897 = t26954*t36470*t36804;
  t36898 = t36381*t36531;
  t36900 = t36897 + t36898;
  t36901 = var2[1]*t36900;
  t36902 = -1.*t36381*t36470*t36804;
  t36903 = t26954*t36531;
  t36904 = t36902 + t36903;
  t36906 = var2[2]*t36904;
  t36907 = t36500*t36614;
  t36908 = t36725 + t36907;
  t36909 = t36484*t36908;
  t36912 = t36784*t36614;
  t36919 = -1.*t36749*t36614;
  t36923 = -1.*t36563*t36394;
  t36924 = -1.*t36484*t36614;
  t36925 = t36923 + t36739 + t36924;
  t36926 = t36500*t36925;
  t36930 = t36387*t36749*t36729;
  t37028 = t36505*t36964;
  t36933 = t36387*t36784*t36626;
  t36934 = -1.*t36470*t36784*t36641;
  t37032 = -1.*t36374*t36964;
  t36939 = -1.*t36387*t36749*t36626;
  t36940 = t36470*t36749*t36641;
  t36943 = t36387*t36784*t36742;
  t37051 = t36262*t36323;
  t37052 = -1.*t36200*t36332;
  t37053 = t37051 + t37052;
  t37064 = t36359*t28449*t37053;
  t37065 = -1.*t35105*t37053*t36360;
  t37066 = t37064 + t37065;
  t37070 = t28449*t35105*t37053;
  t37071 = t36359*t37053*t36360;
  t37072 = t37070 + t37071;
  t37074 = t36387*t36346;
  t37075 = -1.*t36470*t37066;
  t37076 = t37074 + t37075;
  t37084 = -0.28121*t36323;
  t37085 = -1.*t36560*t36323;
  t37086 = 0.305*t36200*t36332;
  t37087 = t37084 + t37085 + t37086;
  t37088 = t28449*t35105*t37087;
  t37089 = t36359*t37087*t36360;
  t37090 = t37088 + t37089;
  t37092 = t36359*t28449*t37087;
  t37093 = -1.*t35105*t37087*t36360;
  t37094 = t37092 + t37093;
  t37091 = -1.*t36505*t37090;
  t37099 = 0.28121*t36200;
  t37100 = t37099 + t36589 + t36590;
  t37102 = t37090*t36520;
  t37108 = t37100*t36470;
  t37109 = t36387*t37094;
  t37110 = t37108 + t37109;
  t37112 = t36387*t37100;
  t37113 = -1.*t36470*t37094;
  t37114 = t37112 + t37113;
  t37130 = t36563*t36346;
  t37133 = t36394*t37100;
  t37146 = Power(t36359,2);
  t37148 = Power(t35105,2);
  t37141 = -1.*t37100*t36525;
  t37170 = t37090*t36374;
  t37172 = t37072*t36632;
  t37063 = t36346*t36470;
  t37067 = t36387*t37066;
  t37068 = t37063 + t37067;
  t37177 = -1.*t37090*t36520;
  t36492 = t36381*t36374;
  t36493 = -1.*t26954*t36487;
  t36494 = t36492 + t36493;
  t37209 = t36505*t37090;
  t37216 = -1.*t37090*t36374;
  t37218 = -1.*t37072*t36632;
  t37055 = -0.15121*t37053;
  t37056 = -0.15121*t36394;
  t37057 = t37055 + t37056;
  t37058 = var2[15]*t37057;
  t37059 = -1.*t35105*t36601;
  t37060 = t36359*t36612;
  t37061 = t37059 + t37060;
  t36538 = t36381*t36520;
  t36539 = -1.*t26954*t36534;
  t36540 = t36538 + t36539;
  t37253 = 0.305*t36262*t36323;
  t37254 = t37253 + t36562;
  t37255 = t28449*t35105*t37254;
  t37256 = t36359*t37254*t36360;
  t37257 = t37255 + t37256;
  t37259 = t36359*t28449*t37254;
  t37260 = -1.*t35105*t37254*t36360;
  t37261 = t37259 + t37260;
  t37265 = t28449*t35105*t36525;
  t37266 = t36359*t36525*t36360;
  t37267 = t37265 + t37266;
  t37258 = -1.*t36505*t37257;
  t37270 = -0.305*t36200*t36262;
  t37271 = -0.305*t36323*t36332;
  t37272 = t37270 + t37271;
  t37277 = t36359*t28449*t36525;
  t37278 = -1.*t35105*t36525*t36360;
  t37279 = t37277 + t37278;
  t37274 = t37257*t36520;
  t37276 = t37267*t36632;
  t37285 = t37272*t36470;
  t37286 = t36387*t37261;
  t37287 = t37285 + t37286;
  t37289 = t36387*t37272;
  t37290 = -1.*t36470*t37261;
  t37291 = t37289 + t37290;
  t37295 = t37053*t36470;
  t37296 = t36387*t37279;
  t37297 = t37295 + t37296;
  t37127 = t36346*t36592;
  t37128 = t36873 + t37127;
  t37136 = -1.*t36394*t36592;
  t37137 = t37136 + t36862;
  t37154 = -1.*t36359*t36394*t36601;
  t37155 = -1.*t35105*t36394*t36612;
  t37156 = t36862 + t37154 + t37155;
  t37315 = t36394*t37272;
  t37164 = t36359*t36346*t36601;
  t37165 = t35105*t36346*t36612;
  t37166 = t36873 + t37164 + t37165;
  t37319 = -1.*t37053*t36563;
  t37321 = -1.*t37272*t36525;
  t37345 = t37257*t36374;
  t37350 = -1.*t37257*t36520;
  t37353 = -1.*t37267*t36632;
  t37303 = t36387*t37053;
  t37304 = -1.*t36470*t37279;
  t37305 = t37303 + t37304;
  t37199 = t35105*t36601;
  t37200 = -1.*t36359*t36612;
  t37201 = t37199 + t37200;
  t37391 = t36505*t37257;
  t37397 = -1.*t37257*t36374;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t26954*t36374 - 1.*t36381*t36487)*var2[1] + t36494*var2[2];
  p_output1[10]=(t36381*t36470*t36500 - 1.*t26954*t36505)*var2[1] + (t26954*t36470*t36500 + t36381*t36505)*var2[2];
  p_output1[11]=(-1.*t26954*t36520 - 1.*t36381*t36534)*var2[1] + t36540*var2[2];
  p_output1[12]=t36487*var2[0] - 1.*t26954*t36547*var2[1] + t36381*t36547*var2[2] + (t36554*(t36470*t36500*t36619 + t36470*t36500*t36626) + t36534*t36646 + t36387*t36500*(t36534*t36619 + t36534*t36626 + t36554*t36641 + t36641*t36658) - 1.*t36470*t36500*t36667)*var2[3];
  p_output1[13]=-1.*t36470*t36500*var2[0] + t26954*t36387*t36500*var2[1] - 1.*t36381*t36387*t36500*var2[2] + ((-1.*t36534*t36619 - 1.*t36534*t36626 - 1.*t36554*t36641 - 1.*t36641*t36658)*t36682 + t36554*(t36487*t36619 + t36487*t36626 + t36547*t36641 + t36641*t36682) + t36487*t36693 + t36534*t36704)*var2[3];
  p_output1[14]=t36534*var2[0] - 1.*t26954*t36658*var2[1] + t36381*t36658*var2[2] + ((-1.*t36470*t36500*t36619 - 1.*t36470*t36500*t36626)*t36682 + t36387*t36500*(-1.*t36487*t36619 - 1.*t36487*t36626 - 1.*t36547*t36641 - 1.*t36641*t36682) + t36487*t36729 - 1.*t36470*t36500*t36742)*var2[3];
  p_output1[15]=t36750 + t36754 + t36758 + (t36821 + t36554*(t36776 + t36791 - 1.*t36500*t36774*t36822 - 1.*t36500*t36774*t36825 + t36827 + t36828) + t36387*t36500*(-1.*t36470*t36534*t36774 + t36387*t36554*t36774 + t36795 + t36809 + t36834 + t36835) + t36838)*var2[3] + (t36761 + t36520*(-1.*t36500*t36774 + t36776 + t36786 + t36791) + t36505*(t36531*t36774 + t36795 + t36805 + t36809) + t36818)*var2[4];
  p_output1[16]=t36843 + t36847 + t36851 + (t36682*(t36470*t36534*t36774 - 1.*t36387*t36554*t36774 + t36854 + t36857 + t36881 + t36882) + t36554*(-1.*t36470*t36487*t36774 + t36387*t36682*t36774 + t36868 + t36870 + t36887 + t36888) + t36891 + t36892)*var2[3] + (t36374*(-1.*t36531*t36774 + t36854 + t36856 + t36857) + t36866 + t36520*(t36484*t36774 + t36868 + t36869 + t36870) + t36876)*var2[4];
  p_output1[17]=t36896 + t36901 + t36906 + (t36930 + t36682*(t36500*t36774*t36822 + t36500*t36774*t36825 + t36911 + t36913 + t36933 + t36934) + t36387*t36500*(t36470*t36487*t36774 - 1.*t36387*t36682*t36774 + t36917 + t36920 + t36939 + t36940) + t36943)*var2[3] + (t36909 + t36374*(t36500*t36774 + t36911 + t36912 + t36913) + t36505*(-1.*t36484*t36774 + t36917 + t36919 + t36920) + t36926)*var2[4];
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
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=t36750 + t36754 + t36758 + (t36821 + t36838 + t36554*(t36776 + t36827 + t36828 - 1.*t36500*t36822*t36960 - 1.*t36500*t36825*t36960 + t36965) + t36387*t36500*(t36795 + t36834 + t36835 - 1.*t36470*t36534*t36960 + t36387*t36554*t36960 + t36969))*var2[3] + (t36761 + t36818 + t36520*(t36776 + t36786 - 1.*t36500*t36960 + t36965) + t36505*(t36795 + t36805 + t36531*t36960 + t36969))*var2[4] + t36525*(-1.*t36359*t36601 - 1.*t35105*t36612 + t36359*t36949 - 1.*t35105*t36953)*var2[5];
  p_output1[46]=t36843 + t36847 + t36851 + (t36891 + t36892 + t36682*(t36854 + t36881 + t36882 + t36470*t36534*t36960 - 1.*t36387*t36554*t36960 + t37000) + t36554*(t36868 + t36887 + t36888 - 1.*t36470*t36487*t36960 + t36387*t36682*t36960 + t37004))*var2[3] + (t36866 + t36876 + t36374*(t36854 + t36856 - 1.*t36531*t36960 + t37000) + t36520*(t36868 + t36869 + t36484*t36960 + t37004))*var2[4] + (t36525*(-1.*t35105*t36346*t36601 + t36346*t36359*t36612 + t35105*t36346*t36949 + t36346*t36359*t36953) + t36394*(t35105*t36394*t36601 - 1.*t36359*t36394*t36612 - 1.*t35105*t36394*t36949 - 1.*t36359*t36394*t36953))*var2[5];
  p_output1[47]=t36896 + t36901 + t36906 + (t36930 + t36943 + t36682*(t36911 + t36933 + t36934 + t36500*t36822*t36960 + t36500*t36825*t36960 + t37028) + t36387*t36500*(t36917 + t36939 + t36940 + t36470*t36487*t36960 - 1.*t36387*t36682*t36960 + t37032))*var2[3] + (t36909 + t36926 + t36374*(t36911 + t36912 + t36500*t36960 + t37028) + t36505*(t36917 + t36919 - 1.*t36484*t36960 + t37032))*var2[4] + t36394*(t36359*t36601 + t35105*t36612 - 1.*t36359*t36949 + t35105*t36953)*var2[5];
  p_output1[48]=t37058 + t37068*var2[0] + (t36381*t37072 - 1.*t26954*t37076)*var2[1] + (t26954*t37072 + t36381*t37076)*var2[2] + (t36646*t36682 + t36554*(t37091 - 1.*t36387*t36500*t37110 + t36470*t36500*t37114) + t36387*t36500*(t36701 + t36702 + t36703 + t37102 + t36554*t37110 + t36534*t37114))*var2[3] + (t36374*t36760 + t36520*(t37091 - 1.*t36500*t37094) + t36505*(t36701 + t36873 + t36874 + t36531*t37094 + t36525*t37100 + t37102))*var2[4] + t36394*t37061*var2[5];
  p_output1[49]=(t36682*t36704 + t36693*t37068 + t36554*(t36626*t37068 + t36641*t37076 + t36682*t37110 + t36487*t37114 + t37170 + t37172) + t36682*(t36739 + t36740 + t36741 - 1.*t36554*t37110 - 1.*t36534*t37114 + t37177))*var2[3] + (t36374*t36875 + t36864*t37072 + t36520*(t36614*t37066 + t36484*t37094 + t37130 + t37133 + t37170 + t37172) + t36374*(t36739 + t36923 + t36924 - 1.*t36531*t37094 + t37141 + t37177))*var2[4] + (t36525*(t36359*t36601*t37053 + t35105*t36612*t37053 + t37130 + t37133 + t36346*t37087*t37146 + t36346*t37087*t37148) + t36394*(-1.*t36346*t36359*t36601 - 1.*t35105*t36346*t36612 + t36923 + t37141 - 1.*t36394*t37087*t37146 - 1.*t36394*t37087*t37148) + t36346*t37156 + t36394*t37166)*var2[5] + (t36394*t37128 + t36525*(t36592*t37053 + t36346*t37087 + t37130 + t37133) + t36346*t37137 + t36394*(-1.*t36346*t36592 + t36923 - 1.*t36394*t37087 + t37141))*var2[15];
  p_output1[50]=t36682*var2[0] + t36494*var2[1] + (t26954*t36374 + t36381*t36487)*var2[2] + (t36729*t37068 + t36682*(t36387*t36500*t37110 - 1.*t36470*t36500*t37114 + t37209) + t36387*t36500*(-1.*t36626*t37068 - 1.*t36641*t37076 - 1.*t36682*t37110 - 1.*t36487*t37114 + t37216 + t37218))*var2[3] + (t36908*t37072 + t36374*(t36500*t37094 + t37209) + t36505*(-1.*t36346*t36563 - 1.*t36614*t37066 - 1.*t36484*t37094 - 1.*t36394*t37100 + t37216 + t37218))*var2[4] + t36346*t37201*var2[5];
  p_output1[51]=t37058 + t36554*var2[0] + t36540*var2[1] + (t26954*t36520 + t36381*t36534)*var2[2] + (t36554*(t37258 - 1.*t36387*t36500*t37287 + t36470*t36500*t37291) + t36646*t37297 + t36387*t36500*(t37274 + t37276 + t36554*t37287 + t36534*t37291 + t36626*t37297 + t36641*t37305))*var2[3] + (t36520*(t37258 - 1.*t36500*t37261) + t36760*t37267 + t36505*(t36563*t37053 + t36531*t37261 + t36525*t37272 + t37274 + t37276 + t36614*t37279))*var2[4] + t37053*t37061*var2[5] + (0.28121*t36262 - 0.305*Power(t36262,2) + t36262*t36560)*var2[16];
  p_output1[52]=(t36554*t36693 + t36704*t37297 + t36554*(t36664 + t36665 + t36666 + t36682*t37287 + t36487*t37291 + t37345) + t36682*(-1.*t36554*t37287 - 1.*t36534*t37291 - 1.*t36626*t37297 - 1.*t36641*t37305 + t37350 + t37353))*var2[3] + (t36520*t36864 + t36875*t37267 + t36520*(t36664 + t36812 + t36816 + t36484*t37261 + t37315 + t37345) + t36374*(-1.*t36531*t37261 - 1.*t36614*t37279 + t37319 + t37321 + t37350 + t37353))*var2[4] + (t36525*t37156 + t37053*t37166 + t36525*(t36359*t36394*t36601 + t35105*t36394*t36612 + t36812 + t36346*t37146*t37254 + t36346*t37148*t37254 + t37315) + t36394*(-1.*t36359*t36525*t36601 - 1.*t35105*t36525*t36612 - 1.*t36394*t37146*t37254 - 1.*t36394*t37148*t37254 + t37319 + t37321))*var2[5] + (t37053*t37128 + t36525*t37137 + t36525*(t36394*t36592 + t36812 + t36346*t37254 + t37315) + t36394*(-1.*t36525*t36592 - 1.*t36394*t37254 + t37319 + t37321))*var2[15];
  p_output1[53]=t37297*var2[0] + (t36381*t37267 - 1.*t26954*t37305)*var2[1] + (t26954*t37267 + t36381*t37305)*var2[2] + (t36554*t36729 + t36682*(t36387*t36500*t37287 - 1.*t36470*t36500*t37291 + t37391) + t36387*t36500*(t36690 + t36691 + t36692 - 1.*t36682*t37287 - 1.*t36487*t37291 + t37397))*var2[3] + (t36520*t36908 + t36374*(t36500*t37261 + t37391) + t36505*(t36690 + t36862 + t36863 - 1.*t36484*t37261 - 1.*t36394*t37272 + t37397))*var2[4] + t36525*t37201*var2[5] + (-0.28121*t36332 + 0.305*t36262*t36332 - 1.*t36332*t36560)*var2[16];
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

#include "dJh_RrFoot_DiagonalStance2.hh"

namespace SymFunction
{

void dJh_RrFoot_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
