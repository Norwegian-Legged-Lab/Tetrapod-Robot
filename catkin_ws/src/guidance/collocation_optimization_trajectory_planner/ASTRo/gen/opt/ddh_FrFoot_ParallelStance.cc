/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:54:23 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t16868;
  double t16862;
  double t16867;
  double t16869;
  double t16973;
  double t16976;
  double t16980;
  double t16981;
  double t16983;
  double t17005;
  double t17007;
  double t16826;
  double t15913;
  double t16200;
  double t16700;
  double t16731;
  double t17019;
  double t17025;
  double t16831;
  double t17050;
  double t17052;
  double t17053;
  double t17085;
  double t17096;
  double t17097;
  double t17020;
  double t17042;
  double t17046;
  double t17098;
  double t17119;
  double t17121;
  double t17130;
  double t17135;
  double t17137;
  double t17140;
  double t17142;
  double t17147;
  double t15031;
  double t15039;
  double t17165;
  double t17151;
  double t17187;
  double t17188;
  double t17192;
  double t17217;
  double t17218;
  double t17219;
  double t17221;
  double t17222;
  double t17223;
  double t17225;
  double t17226;
  double t17227;
  double t17205;
  double t17206;
  double t17207;
  double t17211;
  double t17213;
  double t17214;
  double t17261;
  double t17262;
  double t17263;
  double t17265;
  double t17266;
  double t17277;
  double t17278;
  double t17279;
  double t17281;
  double t17289;
  double t17291;
  double t17299;
  double t17300;
  double t17305;
  double t17311;
  double t17315;
  double t17316;
  double t17322;
  double t17323;
  double t17324;
  double t17317;
  double t17320;
  double t17321;
  double t17327;
  double t17328;
  double t17330;
  double t17346;
  double t17373;
  double t17374;
  double t17331;
  double t17332;
  double t17333;
  double t17337;
  double t17377;
  double t17385;
  double t17386;
  double t17391;
  double t17393;
  double t17398;
  double t17399;
  double t17400;
  double t17401;
  double t17402;
  double t17406;
  double t17410;
  double t17411;
  double t17412;
  double t17416;
  double t17417;
  double t17438;
  double t17439;
  double t17440;
  double t17441;
  double t17442;
  double t17443;
  double t17445;
  double t17447;
  double t17448;
  double t17444;
  double t17453;
  double t17454;
  double t17456;
  double t17457;
  double t17458;
  double t17460;
  double t17461;
  double t17462;
  double t17464;
  double t17465;
  double t17466;
  double t17469;
  double t17470;
  double t17471;
  double t17479;
  double t17480;
  double t17482;
  double t17539;
  double t17540;
  double t17543;
  double t17557;
  double t17558;
  double t17560;
  double t17576;
  double t17577;
  double t17578;
  double t17562;
  double t17564;
  double t17565;
  double t17568;
  double t17569;
  double t17575;
  double t17580;
  double t17544;
  double t17545;
  double t17546;
  double t17547;
  double t17548;
  double t17550;
  double t17551;
  double t17552;
  double t17555;
  double t17556;
  double t17624;
  double t17629;
  double t17630;
  double t17621;
  double t17570;
  double t17637;
  double t17638;
  double t17639;
  double t17646;
  double t17647;
  double t17648;
  double t17579;
  double t17583;
  double t17586;
  double t17589;
  double t17593;
  double t17649;
  double t17597;
  double t17600;
  double t17653;
  double t17609;
  double t17611;
  double t17615;
  double t17696;
  double t17697;
  double t17698;
  double t17713;
  double t17714;
  double t17716;
  double t17699;
  double t17700;
  double t17701;
  double t17704;
  double t17705;
  double t17707;
  double t17717;
  double t17718;
  double t17719;
  double t17703;
  double t17722;
  double t17723;
  double t17728;
  double t17729;
  double t17730;
  double t17725;
  double t17727;
  double t17737;
  double t17738;
  double t17739;
  double t17741;
  double t17742;
  double t17743;
  double t17747;
  double t17749;
  double t17751;
  double t17773;
  double t17775;
  double t17776;
  double t17780;
  double t17782;
  double t17784;
  double t17786;
  double t17800;
  double t17804;
  double t17819;
  double t17822;
  double t17823;
  double t17825;
  double t17828;
  double t17830;
  double t17824;
  double t17837;
  double t17838;
  double t17839;
  double t17840;
  double t17843;
  double t17845;
  double t17853;
  double t17854;
  double t17856;
  double t17858;
  double t17859;
  double t17860;
  double t17836;
  double t17889;
  double t17890;
  double t17891;
  double t17892;
  double t17893;
  double t17894;
  double t17896;
  double t17897;
  double t17900;
  double t17901;
  double t17902;
  double t17903;
  double t17904;
  double t17905;
  double t17906;
  double t17907;
  double t17908;
  double t16849;
  double t17158;
  double t17924;
  double t17925;
  double t17926;
  double t17931;
  double t17932;
  double t17933;
  double t17915;
  double t17916;
  double t17917;
  double t17919;
  double t17920;
  double t17921;
  double t17848;
  double t17953;
  double t17955;
  double t17956;
  double t17957;
  double t17958;
  double t17959;
  double t17960;
  double t17941;
  double t17942;
  double t17943;
  double t17875;
  double t17878;
  double t17972;
  double t17973;
  double t17974;
  double t17975;
  double t17976;
  double t17977;
  double t17978;
  double t17963;
  double t17964;
  double t17965;
  double t17968;
  double t17969;
  double t17970;
  double t17996;
  double t17998;
  double t18004;
  double t18006;
  double t17986;
  double t17987;
  double t17988;
  double t17989;
  double t17990;
  double t17991;
  double t17992;
  double t17993;
  double t17994;
  double t17997;
  double t18002;
  double t18005;
  double t18009;
  double t18058;
  double t18014;
  double t18015;
  double t18063;
  double t18022;
  double t18023;
  double t18028;
  double t18030;
  double t17509;
  double t17515;
  double t17520;
  double t18111;
  double t18136;
  double t18152;
  double t18154;
  double t18141;
  double t18171;
  double t18175;
  double t18177;
  double t17756;
  double t17757;
  double t17758;
  double t18203;
  double t18205;
  double t18209;
  double t18211;
  double t17772;
  double t17777;
  double t17778;
  double t18233;
  double t18235;
  double t18239;
  double t18241;
  double t17676;
  double t17677;
  double t18273;
  double t18274;
  double t18275;
  double t18278;
  double t18279;
  double t18280;
  double t18283;
  double t18284;
  double t18285;
  double t17686;
  double t18288;
  double t18290;
  double t18291;
  double t18293;
  double t18294;
  double t18295;
  double t17687;
  double t17688;
  double t17689;
  double t17690;
  double t17691;
  double t17692;
  double t17694;
  double t17695;
  double t18242;
  double t18310;
  double t18311;
  double t18312;
  double t18313;
  double t18314;
  double t18315;
  double t18316;
  double t18303;
  double t18304;
  double t18305;
  double t18258;
  double t18259;
  double t18334;
  double t18335;
  double t18336;
  double t18337;
  double t18338;
  double t18339;
  double t18340;
  double t18319;
  double t18320;
  double t18321;
  double t18323;
  double t18324;
  double t18325;
  double t18369;
  double t18375;
  double t18355;
  double t18356;
  double t18357;
  double t18358;
  double t17234;
  double t17297;
  double t17310;
  double t18395;
  double t18402;
  double t18404;
  double t18458;
  double t18459;
  double t18464;
  double t18466;
  double t18446;
  double t18447;
  double t18448;
  double t18449;
  double t18450;
  double t18451;
  double t18452;
  double t18453;
  double t18455;
  double t18456;
  double t18460;
  double t18465;
  double t18469;
  double t18473;
  double t18499;
  double t18476;
  double t18477;
  double t18503;
  double t18482;
  double t18483;
  double t18486;
  t16868 = Cos(var1[14]);
  t16862 = Sin(var1[14]);
  t16867 = 0.28121*t16862;
  t16869 = -1.*t16868;
  t16973 = 1. + t16869;
  t16976 = 0.50321*t16973;
  t16980 = 0.19821*t16868;
  t16981 = t16976 + t16980;
  t16983 = -1.*t16981*t16862;
  t17005 = -0.305*t16868*t16862;
  t17007 = t16867 + t16983 + t17005;
  t16826 = Sin(var1[12]);
  t15913 = Cos(var1[12]);
  t16200 = -1.*t15913;
  t16700 = 1. + t16200;
  t16731 = 0.15121*t16700;
  t17019 = Cos(var1[13]);
  t17025 = Sin(var1[13]);
  t16831 = -0.15121*t16826;
  t17050 = -1.*t17019;
  t17052 = 1. + t17050;
  t17053 = 0.28121*t17052;
  t17085 = t17019*t16981;
  t17096 = -0.305*t17025*t16862;
  t17097 = t17053 + t17085 + t17096;
  t17020 = t17019*t16868;
  t17042 = t17025*t16862;
  t17046 = t17020 + t17042;
  t17098 = t15913*t17097;
  t17119 = t16731 + t17098;
  t17121 = t16826*t17119;
  t17130 = -0.15121*t16700;
  t17135 = -0.15121*t15913;
  t17137 = t16826*t17097;
  t17140 = t17130 + t17135 + t16831 + t17137;
  t17142 = -1.*t15913*t17140;
  t17147 = t17121 + t17142;
  t15031 = Cos(var1[4]);
  t15039 = Cos(var1[5]);
  t17165 = Sin(var1[5]);
  t17151 = Sin(var1[4]);
  t17187 = t15913*t15031*t15039;
  t17188 = -1.*t15031*t16826*t17165;
  t17192 = t17187 + t17188;
  t17217 = -1.*t16868*t17025;
  t17218 = t17019*t16862;
  t17219 = t17217 + t17218;
  t17221 = t17219*t17151;
  t17222 = t15913*t15039*t17046;
  t17223 = -1.*t16826*t17046*t17165;
  t17225 = t17222 + t17223;
  t17226 = t15031*t17225;
  t17227 = t17221 + t17226;
  t17205 = -1.*t17025*t17151;
  t17206 = t17019*t17192;
  t17207 = t17205 + t17206;
  t17211 = t17019*t17151;
  t17213 = t17025*t17192;
  t17214 = t17211 + t17213;
  t17261 = Sin(var1[3]);
  t17262 = t15039*t16826*t17046;
  t17263 = t15913*t17046*t17165;
  t17265 = t17262 + t17263;
  t17266 = t17261*t17265;
  t17277 = Cos(var1[3]);
  t17278 = t15031*t17219;
  t17279 = -1.*t17151*t17225;
  t17281 = t17278 + t17279;
  t17289 = t17277*t17281;
  t17291 = t17266 + t17289;
  t17299 = t17277*t17265;
  t17300 = -1.*t17261*t17281;
  t17305 = t17299 + t17300;
  t17311 = t16868*t17025;
  t17315 = -1.*t17019*t16862;
  t17316 = t17311 + t17315;
  t17322 = t15913*t15039;
  t17323 = -1.*t16826*t17165;
  t17324 = t17322 + t17323;
  t17317 = t15039*t16826*t17316;
  t17320 = t15913*t17316*t17165;
  t17321 = t17317 + t17320;
  t17327 = t15039*t17140;
  t17328 = t17119*t17165;
  t17330 = t17327 + t17328;
  t17346 = t15039*t17119;
  t17373 = -1.*t17140*t17165;
  t17374 = t17346 + t17373;
  t17331 = -1.*t17324*t17330;
  t17332 = -1.*t15039*t16826;
  t17333 = -1.*t15913*t17165;
  t17337 = t17332 + t17333;
  t17377 = -1.*t17337*t17374;
  t17385 = t17331 + t17377;
  t17386 = t17321*t17385;
  t17391 = 0.28121*t17025;
  t17393 = -1.*t16981*t17025;
  t17398 = -0.305*t17019*t16862;
  t17399 = t17391 + t17393 + t17398;
  t17400 = t17399*t17046;
  t17401 = t17321*t17330;
  t17402 = t15913*t15039*t17316;
  t17406 = -1.*t16826*t17316*t17165;
  t17410 = t17402 + t17406;
  t17411 = t17410*t17374;
  t17412 = t17400 + t17401 + t17411;
  t17416 = t17324*t17412;
  t17417 = t17386 + t17416;
  t17438 = t17046*t17151;
  t17439 = t15031*t17410;
  t17440 = t17438 + t17439;
  t17441 = t17399*t17151;
  t17442 = t15031*t17374;
  t17443 = t17441 + t17442;
  t17445 = t15031*t17399;
  t17447 = -1.*t17151*t17374;
  t17448 = t17445 + t17447;
  t17444 = -1.*t15031*t17337*t17443;
  t17453 = t17151*t17337*t17448;
  t17454 = t17331 + t17444 + t17453;
  t17456 = t17440*t17454;
  t17457 = t17440*t17443;
  t17458 = t15031*t17046;
  t17460 = -1.*t17151*t17410;
  t17461 = t17458 + t17460;
  t17462 = t17461*t17448;
  t17464 = t17401 + t17457 + t17462;
  t17465 = t15031*t17337*t17464;
  t17466 = t17456 + t17465;
  t17469 = -1.*t17219*t17151;
  t17470 = -1.*t15031*t17225;
  t17471 = t17469 + t17470;
  t17479 = -1.*t17399*t17151;
  t17480 = -1.*t15031*t17374;
  t17482 = t17479 + t17480;
  t17539 = -1.*t15039*t16826*t17046;
  t17540 = -1.*t15913*t17046*t17165;
  t17543 = t17539 + t17540;
  t17557 = -1.*t15039*t17140;
  t17558 = -1.*t17119*t17165;
  t17560 = t17557 + t17558;
  t17576 = -1.*t15039*t16826*t17316;
  t17577 = -1.*t15913*t17316*t17165;
  t17578 = t17576 + t17577;
  t17562 = -1.*t17337*t17330;
  t17564 = -1.*t17324*t17374;
  t17565 = -1.*t15913*t15039;
  t17568 = t16826*t17165;
  t17569 = t17565 + t17568;
  t17575 = t17410*t17330;
  t17580 = t17321*t17374;
  t17544 = var2[0]*t15031*t17543;
  t17545 = t17261*t17151*t17543;
  t17546 = t17277*t17225;
  t17547 = t17545 + t17546;
  t17548 = var2[1]*t17547;
  t17550 = -1.*t17277*t17151*t17543;
  t17551 = t17261*t17225;
  t17552 = t17550 + t17551;
  t17555 = var2[2]*t17552;
  t17556 = t17410*t17385;
  t17624 = 0.15121*t16826;
  t17629 = -1.*t16826*t17097;
  t17630 = t17624 + t17629;
  t17621 = t17135 + t17098;
  t17570 = -1.*t17569*t17374;
  t17637 = t15039*t17630;
  t17638 = -1.*t17621*t17165;
  t17639 = t17637 + t17638;
  t17646 = t15039*t17621;
  t17647 = t17630*t17165;
  t17648 = t17646 + t17647;
  t17579 = t17578*t17374;
  t17583 = t17337*t17412;
  t17586 = t15031*t17578*t17454;
  t17589 = Power(t15031,2);
  t17593 = Power(t17151,2);
  t17649 = -1.*t17324*t17648;
  t17597 = -1.*t15031*t17569*t17443;
  t17600 = t17151*t17569*t17448;
  t17653 = t17321*t17648;
  t17609 = t15031*t17578*t17443;
  t17611 = -1.*t17151*t17578*t17448;
  t17615 = t15031*t17569*t17464;
  t17696 = -0.305*t16868*t17025;
  t17697 = 0.305*t17019*t16862;
  t17698 = t17696 + t17697;
  t17713 = -1.*t17019*t16868;
  t17714 = -1.*t17025*t16862;
  t17716 = t17713 + t17714;
  t17699 = t15039*t16826*t17698;
  t17700 = t15913*t17698*t17165;
  t17701 = t17699 + t17700;
  t17704 = t15913*t15039*t17698;
  t17705 = -1.*t16826*t17698*t17165;
  t17707 = t17704 + t17705;
  t17717 = t15039*t16826*t17716;
  t17718 = t15913*t17716*t17165;
  t17719 = t17717 + t17718;
  t17703 = -1.*t17324*t17701;
  t17722 = -0.305*t17019*t16868;
  t17723 = t17722 + t17096;
  t17728 = t15913*t15039*t17716;
  t17729 = -1.*t16826*t17716*t17165;
  t17730 = t17728 + t17729;
  t17725 = t17321*t17701;
  t17727 = t17719*t17330;
  t17737 = t17723*t17151;
  t17738 = t15031*t17707;
  t17739 = t17737 + t17738;
  t17741 = t15031*t17723;
  t17742 = -1.*t17151*t17707;
  t17743 = t17741 + t17742;
  t17747 = t17316*t17151;
  t17749 = t15031*t17730;
  t17751 = t17747 + t17749;
  t17773 = t15913*t15039*t17219;
  t17775 = -1.*t16826*t17219*t17165;
  t17776 = t17773 + t17775;
  t17780 = t15039*t16826*t17219;
  t17782 = t15913*t17219*t17165;
  t17784 = t17780 + t17782;
  t17786 = t15031*t17716;
  t17800 = -1.*t17151*t17776;
  t17804 = t17786 + t17800;
  t17819 = t15039*t16826*t17399;
  t17822 = t15913*t17399*t17165;
  t17823 = t17819 + t17822;
  t17825 = t15913*t15039*t17399;
  t17828 = -1.*t16826*t17399*t17165;
  t17830 = t17825 + t17828;
  t17824 = -1.*t17324*t17823;
  t17837 = 0.28121*t17019;
  t17838 = -1.*t17019*t16981;
  t17839 = 0.305*t17025*t16862;
  t17840 = t17837 + t17838 + t17839;
  t17843 = t17321*t17823;
  t17845 = t17265*t17330;
  t17853 = t17840*t17151;
  t17854 = t15031*t17830;
  t17856 = t17853 + t17854;
  t17858 = t15031*t17840;
  t17859 = -1.*t17151*t17830;
  t17860 = t17858 + t17859;
  t17836 = t17399*t17219;
  t17889 = -1.*t17316*t17097;
  t17890 = -1.*t17399*t17046;
  t17891 = t17889 + t17890;
  t17892 = t17219*t17891;
  t17893 = t17097*t17046;
  t17894 = t17836 + t17893;
  t17896 = t17046*t17894;
  t17897 = -0.15121 + t17892 + t17896;
  t17900 = -1.*t15913*t17316*t17119;
  t17901 = -1.*t16826*t17316*t17140;
  t17902 = t17890 + t17900 + t17901;
  t17903 = t17219*t17902;
  t17904 = t15913*t17046*t17119;
  t17905 = t16826*t17046*t17140;
  t17906 = t17836 + t17904 + t17905;
  t17907 = t17046*t17906;
  t17908 = t17903 + t17907;
  t16849 = t16731 + t16831;
  t17158 = t17130 + t16831;
  t17924 = t17261*t17151*t17337;
  t17925 = t17277*t17324;
  t17926 = t17924 + t17925;
  t17931 = -1.*t17277*t17151*t17337;
  t17932 = t17261*t17324;
  t17933 = t17931 + t17932;
  t17915 = t15039*t17261*t17151;
  t17916 = t17277*t17165;
  t17917 = t17915 + t17916;
  t17919 = t17277*t15039;
  t17920 = -1.*t17261*t17151*t17165;
  t17921 = t17919 + t17920;
  t17848 = t17225*t17374;
  t17953 = -1.*t17321*t17330;
  t17955 = -1.*t17410*t17374;
  t17956 = t17890 + t17953 + t17955;
  t17957 = t17265*t17956;
  t17958 = t17836 + t17845 + t17848;
  t17959 = t17321*t17958;
  t17960 = t17957 + t17959;
  t17941 = t15913*t17917;
  t17942 = t16826*t17921;
  t17943 = t17941 + t17942;
  t17875 = t17227*t17443;
  t17878 = t17281*t17448;
  t17972 = -1.*t17440*t17443;
  t17973 = -1.*t17461*t17448;
  t17974 = t17953 + t17972 + t17973;
  t17975 = t17227*t17974;
  t17976 = t17845 + t17875 + t17878;
  t17977 = t17440*t17976;
  t17978 = t17975 + t17977;
  t17963 = t15031*t17025*t17261;
  t17964 = t17019*t17943;
  t17965 = t17963 + t17964;
  t17968 = -1.*t17019*t15031*t17261;
  t17969 = t17025*t17943;
  t17970 = t17968 + t17969;
  t17996 = -1.*t17410*t17330;
  t17998 = -1.*t17321*t17374;
  t18004 = t17225*t17330;
  t18006 = t17265*t17374;
  t17986 = var2[0]*t15031*t17569;
  t17987 = t17261*t17337;
  t17988 = -1.*t17277*t17151*t17569;
  t17989 = t17987 + t17988;
  t17990 = var2[2]*t17989;
  t17991 = t17277*t17337;
  t17992 = t17261*t17151*t17569;
  t17993 = t17991 + t17992;
  t17994 = var2[1]*t17993;
  t17997 = -1.*t17578*t17374;
  t18002 = t17225*t17956;
  t18005 = t17543*t17374;
  t18009 = t17410*t17958;
  t18058 = -1.*t17321*t17648;
  t18014 = -1.*t15031*t17578*t17443;
  t18015 = t17151*t17578*t17448;
  t18063 = t17265*t17648;
  t18022 = t15031*t17543*t17443;
  t18023 = -1.*t17151*t17543*t17448;
  t18028 = t15031*t17543*t17974;
  t18030 = t15031*t17578*t17976;
  t17509 = -1.*t17046*t17151;
  t17515 = -1.*t15031*t17410;
  t17520 = t17509 + t17515;
  t18111 = t17219*t17723;
  t18136 = -1.*t17316*t17399;
  t18152 = Power(t15913,2);
  t18154 = Power(t16826,2);
  t18141 = -1.*t17723*t17046;
  t18171 = t17701*t17265;
  t18175 = -1.*t17321*t17701;
  t18177 = -1.*t17719*t17330;
  t17756 = t15031*t17316;
  t17757 = -1.*t17151*t17730;
  t17758 = t17756 + t17757;
  t18203 = t17399*t17716;
  t18205 = t17219*t17840;
  t18209 = -1.*t17399*t17219;
  t18211 = -1.*t17840*t17046;
  t17772 = t17716*t17151;
  t17777 = t15031*t17776;
  t17778 = t17772 + t17777;
  t18233 = t17823*t17265;
  t18235 = t17784*t17330;
  t18239 = -1.*t17321*t17823;
  t18241 = -1.*t17265*t17330;
  t17676 = 0.28121*t16868;
  t17677 = -1.*t16981*t16868;
  t18273 = Power(t16862,2);
  t18274 = 0.305*t18273;
  t18275 = t17676 + t17677 + t18274;
  t18278 = -0.15121*t17316;
  t18279 = -0.15121*t17219;
  t18280 = t18278 + t18279;
  t18283 = -1.*t16826*t17119;
  t18284 = t15913*t17140;
  t18285 = t18283 + t18284;
  t17686 = var2[0]*t17440;
  t18288 = -1.*t17277*t15039*t17151;
  t18290 = t17261*t17165;
  t18291 = t18288 + t18290;
  t18293 = t15039*t17261;
  t18294 = t17277*t17151*t17165;
  t18295 = t18293 + t18294;
  t17687 = t17261*t17321;
  t17688 = t17277*t17461;
  t17689 = t17687 + t17688;
  t17690 = var2[2]*t17689;
  t17691 = t17277*t17321;
  t17692 = -1.*t17261*t17461;
  t17694 = t17691 + t17692;
  t17695 = var2[1]*t17694;
  t18242 = -1.*t17225*t17374;
  t18310 = t17324*t17330;
  t18311 = t17337*t17374;
  t18312 = t18310 + t18311;
  t18313 = t17265*t18312;
  t18314 = t18209 + t18241 + t18242;
  t18315 = t17324*t18314;
  t18316 = t18313 + t18315;
  t18303 = t15913*t18291;
  t18304 = t16826*t18295;
  t18305 = t18303 + t18304;
  t18258 = -1.*t17227*t17443;
  t18259 = -1.*t17281*t17448;
  t18334 = t15031*t17337*t17443;
  t18335 = -1.*t17151*t17337*t17448;
  t18336 = t18310 + t18334 + t18335;
  t18337 = t17227*t18336;
  t18338 = t18241 + t18258 + t18259;
  t18339 = t15031*t17337*t18338;
  t18340 = t18337 + t18339;
  t18319 = -1.*t17277*t15031*t17025;
  t18320 = t17019*t18305;
  t18321 = t18319 + t18320;
  t18323 = t17019*t17277*t15031;
  t18324 = t17025*t18305;
  t18325 = t18323 + t18324;
  t18369 = t17324*t17701;
  t18375 = -1.*t17701*t17265;
  t18355 = -0.15121*t17716;
  t18356 = -0.15121*t17046;
  t18357 = t18355 + t18356;
  t18358 = var2[12]*t18357;
  t17234 = var2[0]*t17227;
  t17297 = var2[2]*t17291;
  t17310 = var2[1]*t17305;
  t18395 = t17324*t17823;
  t18402 = -1.*t17823*t17265;
  t18404 = -1.*t17784*t17330;
  t18458 = t17337*t17330;
  t18459 = t17324*t17374;
  t18464 = -1.*t17225*t17330;
  t18466 = -1.*t17265*t17374;
  t18446 = var2[0]*t15031*t17578;
  t18447 = t17261*t17151*t17578;
  t18448 = t17277*t17410;
  t18449 = t18447 + t18448;
  t18450 = var2[1]*t18449;
  t18451 = -1.*t17277*t17151*t17578;
  t18452 = t17261*t17410;
  t18453 = t18451 + t18452;
  t18455 = var2[2]*t18453;
  t18456 = t17225*t18312;
  t18460 = t17569*t17374;
  t18465 = -1.*t17543*t17374;
  t18469 = t17337*t18314;
  t18473 = t15031*t17543*t18336;
  t18499 = t17324*t17648;
  t18476 = t15031*t17569*t17443;
  t18477 = -1.*t17151*t17569*t17448;
  t18503 = -1.*t17265*t17648;
  t18482 = -1.*t15031*t17543*t17443;
  t18483 = t17151*t17543*t17448;
  t18486 = t15031*t17569*t18338;
  p_output1[0]=t15031*t15039*t16849 + 0.28121*t17025*t17151 - 1.*t15031*t17158*t17165 - 0.15121*(-1.*t15031*t15039*t16826 - 1.*t15031*t15913*t17165) + 0.28121*t17052*t17192 + 0.50321*t16973*t17207 - 0.50321*t16862*t17214 + 0.19821*(t16868*t17207 + t16862*t17214) + t17234 + t17297 + t17310 + var1[0] + t17466*var2[3] + ((-1.*t17261*t17265 - 1.*t17277*t17281)*var2[1] + t17305*var2[2])*var2[3] + t17417*var2[4] + (t17281*var2[0] - 1.*t17261*t17471*var2[1] + t17277*t17471*var2[2] + (t17454*t17461 - 1.*t17151*t17337*t17464 + t17440*(t17151*t17337*t17443 + t17151*t17337*t17482) + t15031*t17337*(t17440*t17448 + t17443*t17461 + t17461*t17482 + t17448*t17520))*var2[3])*var2[4] + t17046*t17147*var2[5] + (t17544 + t17548 + t17555 + (t17586 + t17440*(t17562 + t17564 - 1.*t17337*t17560*t17589 - 1.*t17337*t17560*t17593 + t17597 + t17600) + t15031*t17337*(t15031*t17440*t17560 - 1.*t17151*t17461*t17560 + t17575 + t17580 + t17609 + t17611) + t17615)*var2[3] + (t17556 + t17321*(-1.*t17337*t17560 + t17562 + t17564 + t17570) + t17324*(t17410*t17560 + t17575 + t17579 + t17580) + t17583)*var2[4])*var2[5] + (t17544 + t17548 + t17555 + (t17586 + t17615 + t17440*(t17562 + t17597 + t17600 - 1.*t17337*t17589*t17639 - 1.*t17337*t17593*t17639 + t17649) + t15031*t17337*(t17575 + t17609 + t17611 + t15031*t17440*t17639 - 1.*t17151*t17461*t17639 + t17653))*var2[3] + (t17556 + t17583 + t17321*(t17562 + t17570 - 1.*t17337*t17639 + t17649) + t17324*(t17575 + t17579 + t17410*t17639 + t17653))*var2[4] + t17046*(t15913*t17119 + t16826*t17140 - 1.*t15913*t17621 + t16826*t17630)*var2[5])*var2[12] + t17007*var2[13] + (t17778*var2[0] + (t17277*t17784 - 1.*t17261*t17804)*var2[1] + (t17261*t17784 + t17277*t17804)*var2[2] + (t17227*t17454 + t17440*(t17824 - 1.*t15031*t17337*t17856 + t17151*t17337*t17860) + t15031*t17337*(t17843 + t17845 + t17440*t17856 + t17461*t17860 + t17875 + t17878))*var2[3] + (t17265*t17385 + t17321*(t17824 - 1.*t17337*t17830) + t17324*(t17410*t17830 + t17836 + t17046*t17840 + t17843 + t17845 + t17848))*var2[4] + t17147*t17219*var2[5])*var2[13] + (t17686 + t17690 + t17695 + (t17440*(t17703 - 1.*t15031*t17337*t17739 + t17151*t17337*t17743) + t17454*t17751 + t15031*t17337*(t17725 + t17727 + t17440*t17739 + t17461*t17743 + t17443*t17751 + t17448*t17758))*var2[3] + (t17321*(t17703 - 1.*t17337*t17707) + t17385*t17719 + t17324*(t17316*t17399 + t17410*t17707 + t17046*t17723 + t17725 + t17727 + t17374*t17730))*var2[4] + t17147*t17316*var2[5] + (-0.305*Power(t16868,2) + t17676 + t17677)*var2[13])*var2[14] + t17227*var3[0] + t17305*var3[1] + t17291*var3[2] + t17466*var3[3] + t17417*var3[4] + t17046*t17147*var3[5] + t17007*var3[13] - 1.*var4[0];
  p_output1[1]=-0.28121*t15031*t17025*t17261 + t16849*t17917 + t17158*t17921 - 0.15121*(-1.*t16826*t17917 + t15913*t17921) + 0.28121*t17052*t17943 + 0.50321*t16973*t17965 - 0.50321*t16862*t17970 + 0.19821*(t16868*t17965 + t16862*t17970) + var1[1] + t15031*t17337*var2[0] + t17926*var2[1] + t17933*var2[2] + t17978*var2[3] + ((-1.*t17261*t17324 + t17151*t17277*t17337)*var2[1] + t17926*var2[2])*var2[3] + t17960*var2[4] + (-1.*t17151*t17337*var2[0] + t15031*t17261*t17337*var2[1] - 1.*t15031*t17277*t17337*var2[2] + (t17440*(t17281*t17443 + t17227*t17448 + t17448*t17471 + t17281*t17482) + t17227*(-1.*t17440*t17448 - 1.*t17443*t17461 - 1.*t17461*t17482 - 1.*t17448*t17520) + t17281*t17974 + t17461*t17976)*var2[3])*var2[4] + t17908*var2[5] + (t17986 + t17990 + t17994 + (t17227*(-1.*t15031*t17440*t17560 + t17151*t17461*t17560 + t17996 + t17998 + t18014 + t18015) + t17440*(t15031*t17227*t17560 - 1.*t17151*t17281*t17560 + t18004 + t18006 + t18022 + t18023) + t18028 + t18030)*var2[3] + (t17265*(-1.*t17410*t17560 + t17996 + t17997 + t17998) + t18002 + t17321*(t17225*t17560 + t18004 + t18005 + t18006) + t18009)*var2[4])*var2[5] + t17897*var2[12] + (t17986 + t17990 + t17994 + (t18028 + t18030 + t17227*(-1.*t15031*t17440*t17639 + t17151*t17461*t17639 + t17996 + t18014 + t18015 + t18058) + t17440*(t15031*t17227*t17639 - 1.*t17151*t17281*t17639 + t18004 + t18022 + t18023 + t18063))*var2[3] + (t18002 + t18009 + t17265*(-1.*t17410*t17639 + t17996 + t17997 + t18058) + t17321*(t17225*t17639 + t18004 + t18005 + t18063))*var2[4] + (t17046*(-1.*t16826*t17046*t17119 + t15913*t17046*t17140 + t16826*t17046*t17621 + t15913*t17046*t17630) + t17219*(t16826*t17119*t17316 - 1.*t15913*t17140*t17316 - 1.*t16826*t17316*t17621 - 1.*t15913*t17316*t17630))*var2[5])*var2[12] + ((t17778*t17974 + t17227*t17976 + t17440*(t17443*t17778 + t17448*t17804 + t17227*t17856 + t17281*t17860 + t18233 + t18235) + t17227*(-1.*t17440*t17856 - 1.*t17461*t17860 + t18239 + t18241 + t18258 + t18259))*var2[3] + (t17784*t17956 + t17265*t17958 + t17321*(t17374*t17776 + t17225*t17830 + t18203 + t18205 + t18233 + t18235) + t17265*(-1.*t17410*t17830 + t18209 + t18211 + t18239 + t18241 + t18242))*var2[4] + (t17716*t17902 + t17219*t17906 + t17046*(t15913*t17119*t17219 + t16826*t17140*t17219 + t17046*t17399*t18152 + t17046*t17399*t18154 + t18203 + t18205) + t17219*(-1.*t15913*t17046*t17119 - 1.*t16826*t17046*t17140 - 1.*t17316*t17399*t18152 - 1.*t17316*t17399*t18154 + t18209 + t18211))*var2[5] + (t17716*t17891 + t17219*t17894 + t17046*(t17097*t17219 + t17400 + t18203 + t18205) + t17219*(-1.*t17046*t17097 + t18136 + t18209 + t18211))*var2[12])*var2[13] + ((t17440*t17974 + t17751*t17976 + t17440*(t17401 + t17457 + t17462 + t17227*t17739 + t17281*t17743 + t18171) + t17227*(-1.*t17440*t17739 - 1.*t17461*t17743 - 1.*t17443*t17751 - 1.*t17448*t17758 + t18175 + t18177))*var2[3] + (t17321*t17956 + t17719*t17958 + t17321*(t17400 + t17401 + t17411 + t17225*t17707 + t18111 + t18171) + t17265*(-1.*t17410*t17707 - 1.*t17374*t17730 + t18136 + t18141 + t18175 + t18177))*var2[4] + (t17046*t17902 + t17316*t17906 + t17046*(t15913*t17119*t17316 + t16826*t17140*t17316 + t17400 + t18111 + t17046*t17698*t18152 + t17046*t17698*t18154) + t17219*(-1.*t15913*t17119*t17716 - 1.*t16826*t17140*t17716 + t18136 + t18141 - 1.*t17316*t17698*t18152 - 1.*t17316*t17698*t18154))*var2[5] + (t17046*t17891 + t17316*t17894 + t17046*(t17097*t17316 + t17400 + t17046*t17698 + t18111) + t17219*(-1.*t17316*t17698 - 1.*t17097*t17716 + t18136 + t18141))*var2[12])*var2[14] + t15031*t17337*var3[0] + t17926*var3[1] + t17933*var3[2] + t17978*var3[3] + t17960*var3[4] + t17908*var3[5] + t17897*var3[12] - 1.*var4[1];
  p_output1[2]=0.28121*t15031*t17025*t17277 + t17686 + t17690 + t17695 + t16849*t18291 + t17158*t18295 - 0.15121*(-1.*t16826*t18291 + t15913*t18295) + 0.28121*t17052*t18305 + 0.50321*t16973*t18321 - 0.50321*t16862*t18325 + 0.19821*(t16868*t18321 + t16862*t18325) + var1[2] + t18340*var2[3] + ((-1.*t17261*t17321 - 1.*t17277*t17461)*var2[1] + t17694*var2[2])*var2[3] + t18316*var2[4] + (t17461*var2[0] - 1.*t17261*t17520*var2[1] + t17277*t17520*var2[2] + (t15031*t17337*(-1.*t17281*t17443 - 1.*t17227*t17448 - 1.*t17448*t17471 - 1.*t17281*t17482) + t17227*(-1.*t17151*t17337*t17443 - 1.*t17151*t17337*t17482) + t17281*t18336 - 1.*t17151*t17337*t18338)*var2[3])*var2[4] + t17219*t18285*var2[5] + (t18446 + t18450 + t18455 + (t18473 + t17227*(t17337*t17560*t17589 + t17337*t17560*t17593 + t18458 + t18459 + t18476 + t18477) + t15031*t17337*(-1.*t15031*t17227*t17560 + t17151*t17281*t17560 + t18464 + t18466 + t18482 + t18483) + t18486)*var2[3] + (t18456 + t17265*(t17337*t17560 + t18458 + t18459 + t18460) + t17324*(-1.*t17225*t17560 + t18464 + t18465 + t18466) + t18469)*var2[4])*var2[5] + t18280*var2[12] + (t18446 + t18450 + t18455 + (t18473 + t18486 + t17227*(t17337*t17589*t17639 + t17337*t17593*t17639 + t18458 + t18476 + t18477 + t18499) + t15031*t17337*(-1.*t15031*t17227*t17639 + t17151*t17281*t17639 + t18464 + t18482 + t18483 + t18503))*var2[3] + (t18456 + t18469 + t17265*(t17337*t17639 + t18458 + t18460 + t18499) + t17324*(-1.*t17225*t17639 + t18464 + t18465 + t18503))*var2[4] + t17219*(-1.*t15913*t17119 - 1.*t16826*t17140 + t15913*t17621 - 1.*t16826*t17630)*var2[5])*var2[12] + t18275*var2[13] + (t17234 + t17297 + t17310 + t18358 + (t17778*t18336 + t17227*(t15031*t17337*t17856 - 1.*t17151*t17337*t17860 + t18395) + t15031*t17337*(-1.*t17443*t17778 - 1.*t17448*t17804 - 1.*t17227*t17856 - 1.*t17281*t17860 + t18402 + t18404))*var2[3] + (t17784*t18312 + t17265*(t17337*t17830 + t18395) + t17324*(-1.*t17399*t17716 - 1.*t17374*t17776 - 1.*t17225*t17830 - 1.*t17219*t17840 + t18402 + t18404))*var2[4] + t17716*t18285*var2[5])*var2[13] - 0.305*var2[14] + (t18358 + t17751*var2[0] + (t17277*t17719 - 1.*t17261*t17758)*var2[1] + (t17261*t17719 + t17277*t17758)*var2[2] + (t17440*t18336 + t17227*(t15031*t17337*t17739 - 1.*t17151*t17337*t17743 + t18369) + t15031*t17337*(-1.*t17227*t17739 - 1.*t17281*t17743 + t17953 + t17972 + t17973 + t18375))*var2[3] + (t17321*t18312 + t17265*(t17337*t17707 + t18369) + t17324*(-1.*t17225*t17707 - 1.*t17219*t17723 + t17890 + t17953 + t17955 + t18375))*var2[4] + t17046*t18285*var2[5] + (-0.28121*t16862 + 0.305*t16862*t16868 + t16862*t16981)*var2[13])*var2[14] + t17440*var3[0] + t17694*var3[1] + t17689*var3[2] + t18340*var3[3] + t18316*var3[4] + t17219*t18285*var3[5] + t18280*var3[12] + t18275*var3[13] - 0.305*var3[14] - 1.*var4[2];
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "ddh_FrFoot_ParallelStance.hh"

namespace ParallelStance
{

void ddh_FrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
