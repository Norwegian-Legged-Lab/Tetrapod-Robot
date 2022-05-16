/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:40:18 GMT+02:00
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
  double t21824;
  double t22849;
  double t22998;
  double t23026;
  double t23510;
  double t23511;
  double t25848;
  double t33636;
  double t798;
  double t20161;
  double t33830;
  double t33995;
  double t26103;
  double t33836;
  double t33839;
  double t268;
  double t34008;
  double t34029;
  double t34035;
  double t34062;
  double t34177;
  double t35575;
  double t35638;
  double t35639;
  double t35644;
  double t35743;
  double t35760;
  double t36258;
  double t36317;
  double t36596;
  double t37182;
  double t37316;
  double t37366;
  double t37654;
  double t37666;
  double t37718;
  double t37763;
  double t37773;
  double t37788;
  double t38009;
  double t38026;
  double t38032;
  double t38041;
  double t38043;
  double t38051;
  double t38149;
  double t38157;
  double t38158;
  double t38219;
  double t38232;
  double t38233;
  double t38234;
  double t38236;
  double t38247;
  double t38248;
  double t38256;
  double t38257;
  double t38259;
  double t38260;
  double t38261;
  double t38262;
  double t38213;
  double t38237;
  double t38238;
  double t38241;
  double t38251;
  double t38267;
  double t38269;
  double t38273;
  double t38277;
  double t38279;
  double t38284;
  double t38296;
  double t38297;
  double t38300;
  double t38303;
  double t38321;
  double t38322;
  double t38330;
  double t38246;
  double t38304;
  double t38305;
  double t38378;
  double t38379;
  double t38382;
  double t38196;
  double t38205;
  double t38209;
  double t38356;
  double t38360;
  double t38362;
  double t38392;
  double t38394;
  double t38395;
  double t38421;
  double t38422;
  double t38423;
  double t38723;
  double t38724;
  double t38728;
  double t38365;
  double t38799;
  double t38800;
  double t38801;
  double t38403;
  double t38827;
  double t38828;
  double t38829;
  double t38376;
  double t38383;
  double t38384;
  double t38804;
  double t38811;
  double t38805;
  double t38806;
  double t38808;
  double t38819;
  double t38834;
  double t38405;
  double t38407;
  double t38409;
  double t38440;
  double t38513;
  double t38941;
  double t38943;
  double t38954;
  double t38956;
  double t38458;
  double t38466;
  double t38475;
  double t38514;
  double t38515;
  double t38530;
  double t38647;
  double t38684;
  double t38648;
  double t38649;
  double t38658;
  double t38873;
  double t38875;
  double t39244;
  double t39249;
  double t39256;
  double t39259;
  double t38693;
  double t38694;
  double t38695;
  double t38731;
  double t38736;
  double t38748;
  double t38759;
  double t38761;
  double t38763;
  double t38770;
  double t38777;
  double t38779;
  double t38781;
  double t38783;
  double t38795;
  double t39342;
  double t39344;
  double t39346;
  double t39340;
  double t38809;
  double t39353;
  double t39354;
  double t39355;
  double t39357;
  double t39358;
  double t39360;
  double t38833;
  double t38838;
  double t38840;
  double t38844;
  double t38858;
  double t38870;
  double t39361;
  double t38878;
  double t38881;
  double t39366;
  double t38891;
  double t38894;
  double t38902;
  double t38910;
  double t38920;
  double t38926;
  double t38929;
  double t38930;
  double t38931;
  double t38936;
  double t38937;
  double t38938;
  double t38942;
  double t38948;
  double t38949;
  double t38950;
  double t38951;
  double t38955;
  double t38974;
  double t38977;
  double t38982;
  double t38983;
  double t39436;
  double t38996;
  double t38997;
  double t39500;
  double t39018;
  double t39025;
  double t39035;
  double t39044;
  double t39151;
  double t39153;
  double t39168;
  double t39170;
  double t39179;
  double t39183;
  double t39187;
  double t39194;
  double t39198;
  double t39204;
  double t39225;
  double t39227;
  double t39248;
  double t39258;
  double t39262;
  double t39263;
  double t39264;
  double t39266;
  double t39294;
  double t39557;
  double t39302;
  double t39307;
  double t39563;
  double t39330;
  double t39331;
  double t39335;
  double t39612;
  double t39614;
  double t39615;
  double t39631;
  double t39633;
  double t39634;
  double t39642;
  double t39650;
  double t39652;
  double t39655;
  double t39656;
  double t39657;
  double t39671;
  double t39672;
  double t39673;
  double t39675;
  double t39677;
  double t39678;
  double t39679;
  double t39683;
  double t39684;
  double t39685;
  double t39682;
  double t39690;
  double t39692;
  double t39696;
  double t39733;
  double t39734;
  double t39735;
  double t39739;
  double t39740;
  double t39742;
  double t39768;
  double t39773;
  double t39813;
  double t39839;
  double t39785;
  double t40141;
  double t40144;
  double t39628;
  double t39636;
  double t39638;
  double t40149;
  double t36143;
  double t36172;
  double t36205;
  double t40183;
  double t40190;
  double t40192;
  double t39616;
  double t39617;
  double t39618;
  double t39622;
  double t39623;
  double t39625;
  double t39626;
  double t38111;
  double t38113;
  double t38117;
  double t40239;
  double t40241;
  double t40242;
  double t40243;
  double t40246;
  double t40255;
  double t40256;
  double t40257;
  double t40267;
  double t40268;
  double t40270;
  double t40254;
  double t40278;
  double t40279;
  double t40281;
  double t40299;
  double t40300;
  double t40307;
  double t40292;
  double t40298;
  double t40325;
  double t40326;
  double t40328;
  double t40333;
  double t40334;
  double t40335;
  double t40343;
  double t40353;
  double t40370;
  double t39759;
  double t39764;
  double t39778;
  double t39780;
  double t39880;
  double t39883;
  double t39903;
  double t40445;
  double t40133;
  double t40134;
  double t40135;
  double t40449;
  double t40452;
  double t40514;
  double t40529;
  double t40535;
  double t40399;
  double t40400;
  double t40402;
  double t40171;
  double t40172;
  double t40173;
  double t40607;
  double t40613;
  t21824 = Cos(var1[10]);
  t22849 = Cos(var1[11]);
  t22998 = -1.*t21824*t22849;
  t23026 = Sin(var1[10]);
  t23510 = Sin(var1[11]);
  t23511 = -1.*t23026*t23510;
  t25848 = t22998 + t23511;
  t33636 = Cos(var1[9]);
  t798 = Cos(var1[5]);
  t20161 = Sin(var1[9]);
  t33830 = Sin(var1[5]);
  t33995 = Cos(var1[3]);
  t26103 = t798*t20161*t25848;
  t33836 = t33636*t25848*t33830;
  t33839 = t26103 + t33836;
  t268 = Sin(var1[3]);
  t34008 = Cos(var1[4]);
  t34029 = -1.*t22849*t23026;
  t34035 = t21824*t23510;
  t34062 = t34029 + t34035;
  t34177 = t34008*t34062;
  t35575 = Sin(var1[4]);
  t35638 = t33636*t798*t25848;
  t35639 = -1.*t20161*t25848*t33830;
  t35644 = t35638 + t35639;
  t35743 = -1.*t35575*t35644;
  t35760 = t34177 + t35743;
  t36258 = t798*t20161;
  t36317 = t33636*t33830;
  t36596 = t36258 + t36317;
  t37182 = -1.*t33636*t798;
  t37316 = t20161*t33830;
  t37366 = t37182 + t37316;
  t37654 = t798*t20161*t34062;
  t37666 = t33636*t34062*t33830;
  t37718 = t37654 + t37666;
  t37763 = t21824*t22849;
  t37773 = t23026*t23510;
  t37788 = t37763 + t37773;
  t38009 = t34008*t37788;
  t38026 = t33636*t798*t34062;
  t38032 = -1.*t20161*t34062*t33830;
  t38041 = t38026 + t38032;
  t38043 = -1.*t35575*t38041;
  t38051 = t38009 + t38043;
  t38149 = -1.*t34062*t35575;
  t38157 = -1.*t34008*t35644;
  t38158 = t38149 + t38157;
  t38219 = -1.*t22849;
  t38232 = 1. + t38219;
  t38233 = -0.50321*t38232;
  t38234 = -0.23321*t22849;
  t38236 = t38233 + t38234;
  t38247 = -1.*t33636;
  t38248 = 1. + t38247;
  t38256 = -1.*t21824;
  t38257 = 1. + t38256;
  t38259 = -0.28121*t38257;
  t38260 = t21824*t38236;
  t38261 = 0.27*t23026*t23510;
  t38262 = t38259 + t38260 + t38261;
  t38213 = 0.28121*t23026;
  t38237 = t38236*t23026;
  t38238 = -0.27*t21824*t23510;
  t38241 = t38213 + t38237 + t38238;
  t38251 = -0.15121*t38248;
  t38267 = t33636*t38262;
  t38269 = t38251 + t38267;
  t38273 = t798*t38269;
  t38277 = 0.15121*t38248;
  t38279 = 0.15121*t33636;
  t38284 = 0.15121*t20161;
  t38296 = t20161*t38262;
  t38297 = t38277 + t38279 + t38284 + t38296;
  t38300 = -1.*t38297*t33830;
  t38303 = t38273 + t38300;
  t38321 = t38241*t35575;
  t38322 = t34008*t38303;
  t38330 = t38321 + t38322;
  t38246 = -1.*t38241*t35575;
  t38304 = -1.*t34008*t38303;
  t38305 = t38246 + t38304;
  t38378 = t34008*t38241;
  t38379 = -1.*t35575*t38303;
  t38382 = t38378 + t38379;
  t38196 = t37788*t35575;
  t38205 = t34008*t38041;
  t38209 = t38196 + t38205;
  t38356 = t798*t38297;
  t38360 = t38269*t33830;
  t38362 = t38356 + t38360;
  t38392 = -1.*t37788*t35575;
  t38394 = -1.*t34008*t38041;
  t38395 = t38392 + t38394;
  t38421 = t34062*t35575;
  t38422 = t34008*t35644;
  t38423 = t38421 + t38422;
  t38723 = -1.*t798*t20161*t25848;
  t38724 = -1.*t33636*t25848*t33830;
  t38728 = t38723 + t38724;
  t38365 = -1.*t37366*t38362;
  t38799 = -1.*t798*t38297;
  t38800 = -1.*t38269*t33830;
  t38801 = t38799 + t38800;
  t38403 = t37718*t38362;
  t38827 = -1.*t798*t20161*t34062;
  t38828 = -1.*t33636*t34062*t33830;
  t38829 = t38827 + t38828;
  t38376 = -1.*t34008*t36596*t38330;
  t38383 = t35575*t36596*t38382;
  t38384 = t38365 + t38376 + t38383;
  t38804 = -1.*t36596*t38362;
  t38811 = -1.*t37366*t38303;
  t38805 = t33636*t798;
  t38806 = -1.*t20161*t33830;
  t38808 = t38805 + t38806;
  t38819 = t38041*t38362;
  t38834 = t37718*t38303;
  t38405 = t38209*t38330;
  t38407 = t38051*t38382;
  t38409 = t38403 + t38405 + t38407;
  t38440 = -1.*t37718*t38362;
  t38513 = t33839*t38362;
  t38941 = -1.*t38041*t38362;
  t38943 = -1.*t37718*t38303;
  t38954 = t35644*t38362;
  t38956 = t33839*t38303;
  t38458 = -1.*t38209*t38330;
  t38466 = -1.*t38051*t38382;
  t38475 = t38440 + t38458 + t38466;
  t38514 = t38423*t38330;
  t38515 = t35760*t38382;
  t38530 = t38513 + t38514 + t38515;
  t38647 = t37366*t38362;
  t38684 = -1.*t33839*t38362;
  t38648 = t34008*t36596*t38330;
  t38649 = -1.*t35575*t36596*t38382;
  t38658 = t38647 + t38648 + t38649;
  t38873 = Power(t34008,2);
  t38875 = Power(t35575,2);
  t39244 = t36596*t38362;
  t39249 = t37366*t38303;
  t39256 = -1.*t35644*t38362;
  t39259 = -1.*t33839*t38303;
  t38693 = -1.*t38423*t38330;
  t38694 = -1.*t35760*t38382;
  t38695 = t38684 + t38693 + t38694;
  t38731 = var2[0]*t34008*t38728;
  t38736 = t268*t35575*t38728;
  t38748 = t33995*t35644;
  t38759 = t38736 + t38748;
  t38761 = var2[1]*t38759;
  t38763 = -1.*t33995*t35575*t38728;
  t38770 = t268*t35644;
  t38777 = t38763 + t38770;
  t38779 = var2[2]*t38777;
  t38781 = -1.*t36596*t38303;
  t38783 = t38365 + t38781;
  t38795 = t38041*t38783;
  t39342 = -0.15121*t20161;
  t39344 = -1.*t20161*t38262;
  t39346 = t39342 + t39344;
  t39340 = t38279 + t38267;
  t38809 = -1.*t38808*t38303;
  t39353 = t798*t39346;
  t39354 = -1.*t39340*t33830;
  t39355 = t39353 + t39354;
  t39357 = t798*t39340;
  t39358 = t39346*t33830;
  t39360 = t39357 + t39358;
  t38833 = t38829*t38303;
  t38838 = t38241*t37788;
  t38840 = t38041*t38303;
  t38844 = t38838 + t38403 + t38840;
  t38858 = t36596*t38844;
  t38870 = t34008*t38829*t38384;
  t39361 = -1.*t37366*t39360;
  t38878 = -1.*t34008*t38808*t38330;
  t38881 = t35575*t38808*t38382;
  t39366 = t37718*t39360;
  t38891 = t34008*t38829*t38330;
  t38894 = -1.*t35575*t38829*t38382;
  t38902 = t34008*t38808*t38409;
  t38910 = var2[0]*t34008*t38808;
  t38920 = t268*t36596;
  t38926 = -1.*t33995*t35575*t38808;
  t38929 = t38920 + t38926;
  t38930 = var2[2]*t38929;
  t38931 = t33995*t36596;
  t38936 = t268*t35575*t38808;
  t38937 = t38931 + t38936;
  t38938 = var2[1]*t38937;
  t38942 = -1.*t38829*t38303;
  t38948 = -1.*t38241*t37788;
  t38949 = -1.*t38041*t38303;
  t38950 = t38948 + t38440 + t38949;
  t38951 = t35644*t38950;
  t38955 = t38728*t38303;
  t38974 = t38241*t34062;
  t38977 = t35644*t38303;
  t38982 = t38974 + t38513 + t38977;
  t38983 = t38041*t38982;
  t39436 = -1.*t37718*t39360;
  t38996 = -1.*t34008*t38829*t38330;
  t38997 = t35575*t38829*t38382;
  t39500 = t33839*t39360;
  t39018 = t34008*t38728*t38330;
  t39025 = -1.*t35575*t38728*t38382;
  t39035 = t34008*t38728*t38475;
  t39044 = t34008*t38829*t38530;
  t39151 = var2[0]*t34008*t38829;
  t39153 = t268*t35575*t38829;
  t39168 = t33995*t38041;
  t39170 = t39153 + t39168;
  t39179 = var2[1]*t39170;
  t39183 = -1.*t33995*t35575*t38829;
  t39187 = t268*t38041;
  t39194 = t39183 + t39187;
  t39198 = var2[2]*t39194;
  t39204 = t36596*t38303;
  t39225 = t38647 + t39204;
  t39227 = t35644*t39225;
  t39248 = t38808*t38303;
  t39258 = -1.*t38728*t38303;
  t39262 = -1.*t38241*t34062;
  t39263 = -1.*t35644*t38303;
  t39264 = t39262 + t38684 + t39263;
  t39266 = t36596*t39264;
  t39294 = t34008*t38728*t38658;
  t39557 = t37366*t39360;
  t39302 = t34008*t38808*t38330;
  t39307 = -1.*t35575*t38808*t38382;
  t39563 = -1.*t33839*t39360;
  t39330 = -1.*t34008*t38728*t38330;
  t39331 = t35575*t38728*t38382;
  t39335 = t34008*t38808*t38695;
  t39612 = t22849*t23026;
  t39614 = -1.*t21824*t23510;
  t39615 = t39612 + t39614;
  t39631 = t33636*t798*t39615;
  t39633 = -1.*t20161*t39615*t33830;
  t39634 = t39631 + t39633;
  t39642 = t798*t20161*t39615;
  t39650 = t33636*t39615*t33830;
  t39652 = t39642 + t39650;
  t39655 = t34008*t25848;
  t39656 = -1.*t35575*t39634;
  t39657 = t39655 + t39656;
  t39671 = -0.28121*t23026;
  t39672 = -1.*t38236*t23026;
  t39673 = 0.27*t21824*t23510;
  t39675 = t39671 + t39672 + t39673;
  t39677 = t798*t20161*t39675;
  t39678 = t33636*t39675*t33830;
  t39679 = t39677 + t39678;
  t39683 = t33636*t798*t39675;
  t39684 = -1.*t20161*t39675*t33830;
  t39685 = t39683 + t39684;
  t39682 = -1.*t37366*t39679;
  t39690 = 0.28121*t21824;
  t39692 = t39690 + t38260 + t38261;
  t39696 = t39679*t37718;
  t39733 = t39692*t35575;
  t39734 = t34008*t39685;
  t39735 = t39733 + t39734;
  t39739 = t34008*t39692;
  t39740 = -1.*t35575*t39685;
  t39742 = t39739 + t39740;
  t39768 = t38241*t25848;
  t39773 = t34062*t39692;
  t39813 = Power(t33636,2);
  t39839 = Power(t20161,2);
  t39785 = -1.*t39692*t37788;
  t40141 = t39679*t33839;
  t40144 = t39652*t38362;
  t39628 = t25848*t35575;
  t39636 = t34008*t39634;
  t39638 = t39628 + t39636;
  t40149 = -1.*t39679*t37718;
  t36143 = t33995*t33839;
  t36172 = -1.*t268*t35760;
  t36205 = t36143 + t36172;
  t40183 = t37366*t39679;
  t40190 = -1.*t39679*t33839;
  t40192 = -1.*t39652*t38362;
  t39616 = 0.15121*t39615;
  t39617 = 0.15121*t34062;
  t39618 = t39616 + t39617;
  t39622 = var2[9]*t39618;
  t39623 = -1.*t20161*t38269;
  t39625 = t33636*t38297;
  t39626 = t39623 + t39625;
  t38111 = t33995*t37718;
  t38113 = -1.*t268*t38051;
  t38117 = t38111 + t38113;
  t40239 = 0.27*t22849*t23026;
  t40241 = t40239 + t38238;
  t40242 = t798*t20161*t40241;
  t40243 = t33636*t40241*t33830;
  t40246 = t40242 + t40243;
  t40255 = t33636*t798*t40241;
  t40256 = -1.*t20161*t40241*t33830;
  t40257 = t40255 + t40256;
  t40267 = t798*t20161*t37788;
  t40268 = t33636*t37788*t33830;
  t40270 = t40267 + t40268;
  t40254 = -1.*t37366*t40246;
  t40278 = -0.27*t21824*t22849;
  t40279 = -0.27*t23026*t23510;
  t40281 = t40278 + t40279;
  t40299 = t33636*t798*t37788;
  t40300 = -1.*t20161*t37788*t33830;
  t40307 = t40299 + t40300;
  t40292 = t40246*t37718;
  t40298 = t40270*t38362;
  t40325 = t40281*t35575;
  t40326 = t34008*t40257;
  t40328 = t40325 + t40326;
  t40333 = t34008*t40281;
  t40334 = -1.*t35575*t40257;
  t40335 = t40333 + t40334;
  t40343 = t39615*t35575;
  t40353 = t34008*t40307;
  t40370 = t40343 + t40353;
  t39759 = t25848*t38262;
  t39764 = t38974 + t39759;
  t39778 = -1.*t34062*t38262;
  t39780 = t39778 + t38948;
  t39880 = -1.*t33636*t34062*t38269;
  t39883 = -1.*t20161*t34062*t38297;
  t39903 = t38948 + t39880 + t39883;
  t40445 = t34062*t40281;
  t40133 = t33636*t25848*t38269;
  t40134 = t20161*t25848*t38297;
  t40135 = t38974 + t40133 + t40134;
  t40449 = -1.*t39615*t38241;
  t40452 = -1.*t40281*t37788;
  t40514 = t40246*t33839;
  t40529 = -1.*t40246*t37718;
  t40535 = -1.*t40270*t38362;
  t40399 = t34008*t39615;
  t40400 = -1.*t35575*t40307;
  t40402 = t40399 + t40400;
  t40171 = t20161*t38269;
  t40172 = -1.*t33636*t38297;
  t40173 = t40171 + t40172;
  t40607 = t37366*t40246;
  t40613 = -1.*t40246*t33839;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t268*t33839 - 1.*t33995*t35760)*var2[1] + t36205*var2[2];
  p_output1[10]=(t33995*t35575*t36596 - 1.*t268*t37366)*var2[1] + (t268*t35575*t36596 + t33995*t37366)*var2[2];
  p_output1[11]=(-1.*t268*t37718 - 1.*t33995*t38051)*var2[1] + t38117*var2[2];
  p_output1[12]=t35760*var2[0] - 1.*t268*t38158*var2[1] + t33995*t38158*var2[2] + (t38209*(t35575*t36596*t38305 + t35575*t36596*t38330) + t38051*t38384 + t34008*t36596*(t38051*t38305 + t38051*t38330 + t38209*t38382 + t38382*t38395) - 1.*t35575*t36596*t38409)*var2[3];
  p_output1[13]=-1.*t35575*t36596*var2[0] + t268*t34008*t36596*var2[1] - 1.*t33995*t34008*t36596*var2[2] + ((-1.*t38051*t38305 - 1.*t38051*t38330 - 1.*t38209*t38382 - 1.*t38382*t38395)*t38423 + t38209*(t35760*t38305 + t35760*t38330 + t38158*t38382 + t38382*t38423) + t35760*t38475 + t38051*t38530)*var2[3];
  p_output1[14]=t38051*var2[0] - 1.*t268*t38395*var2[1] + t33995*t38395*var2[2] + ((-1.*t35575*t36596*t38305 - 1.*t35575*t36596*t38330)*t38423 + t34008*t36596*(-1.*t35760*t38305 - 1.*t35760*t38330 - 1.*t38158*t38382 - 1.*t38382*t38423) + t35760*t38658 - 1.*t35575*t36596*t38695)*var2[3];
  p_output1[15]=t38731 + t38761 + t38779 + (t38870 + t38209*(t38804 + t38811 - 1.*t36596*t38801*t38873 - 1.*t36596*t38801*t38875 + t38878 + t38881) + t34008*t36596*(-1.*t35575*t38051*t38801 + t34008*t38209*t38801 + t38819 + t38834 + t38891 + t38894) + t38902)*var2[3] + (t38795 + t37718*(-1.*t36596*t38801 + t38804 + t38809 + t38811) + t37366*(t38041*t38801 + t38819 + t38833 + t38834) + t38858)*var2[4];
  p_output1[16]=t38910 + t38930 + t38938 + (t38423*(t35575*t38051*t38801 - 1.*t34008*t38209*t38801 + t38941 + t38943 + t38996 + t38997) + t38209*(-1.*t35575*t35760*t38801 + t34008*t38423*t38801 + t38954 + t38956 + t39018 + t39025) + t39035 + t39044)*var2[3] + (t33839*(-1.*t38041*t38801 + t38941 + t38942 + t38943) + t38951 + t37718*(t35644*t38801 + t38954 + t38955 + t38956) + t38983)*var2[4];
  p_output1[17]=t39151 + t39179 + t39198 + (t39294 + t38423*(t36596*t38801*t38873 + t36596*t38801*t38875 + t39244 + t39249 + t39302 + t39307) + t34008*t36596*(t35575*t35760*t38801 - 1.*t34008*t38423*t38801 + t39256 + t39259 + t39330 + t39331) + t39335)*var2[3] + (t39227 + t33839*(t36596*t38801 + t39244 + t39248 + t39249) + t37366*(-1.*t35644*t38801 + t39256 + t39258 + t39259) + t39266)*var2[4];
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=t38731 + t38761 + t38779 + (t38870 + t38902 + t38209*(t38804 + t38878 + t38881 - 1.*t36596*t38873*t39355 - 1.*t36596*t38875*t39355 + t39361) + t34008*t36596*(t38819 + t38891 + t38894 - 1.*t35575*t38051*t39355 + t34008*t38209*t39355 + t39366))*var2[3] + (t38795 + t38858 + t37718*(t38804 + t38809 - 1.*t36596*t39355 + t39361) + t37366*(t38819 + t38833 + t38041*t39355 + t39366))*var2[4] + t37788*(-1.*t33636*t38269 - 1.*t20161*t38297 + t33636*t39340 - 1.*t20161*t39346)*var2[5];
  p_output1[28]=t38910 + t38930 + t38938 + (t39035 + t39044 + t38423*(t38941 + t38996 + t38997 + t35575*t38051*t39355 - 1.*t34008*t38209*t39355 + t39436) + t38209*(t38954 + t39018 + t39025 - 1.*t35575*t35760*t39355 + t34008*t38423*t39355 + t39500))*var2[3] + (t38951 + t38983 + t33839*(t38941 + t38942 - 1.*t38041*t39355 + t39436) + t37718*(t38954 + t38955 + t35644*t39355 + t39500))*var2[4] + (t37788*(-1.*t20161*t25848*t38269 + t25848*t33636*t38297 + t20161*t25848*t39340 + t25848*t33636*t39346) + t34062*(t20161*t34062*t38269 - 1.*t33636*t34062*t38297 - 1.*t20161*t34062*t39340 - 1.*t33636*t34062*t39346))*var2[5];
  p_output1[29]=t39151 + t39179 + t39198 + (t39294 + t39335 + t38423*(t39244 + t39302 + t39307 + t36596*t38873*t39355 + t36596*t38875*t39355 + t39557) + t34008*t36596*(t39256 + t39330 + t39331 + t35575*t35760*t39355 - 1.*t34008*t38423*t39355 + t39563))*var2[3] + (t39227 + t39266 + t33839*(t39244 + t39248 + t36596*t39355 + t39557) + t37366*(t39256 + t39258 - 1.*t35644*t39355 + t39563))*var2[4] + t34062*(t33636*t38269 + t20161*t38297 - 1.*t33636*t39340 + t20161*t39346)*var2[5];
  p_output1[30]=t39622 + t39638*var2[0] + (t33995*t39652 - 1.*t268*t39657)*var2[1] + (t268*t39652 + t33995*t39657)*var2[2] + (t38384*t38423 + t38209*(t39682 - 1.*t34008*t36596*t39735 + t35575*t36596*t39742) + t34008*t36596*(t38513 + t38514 + t38515 + t39696 + t38209*t39735 + t38051*t39742))*var2[3] + (t33839*t38783 + t37718*(t39682 - 1.*t36596*t39685) + t37366*(t38513 + t38974 + t38977 + t38041*t39685 + t37788*t39692 + t39696))*var2[4] + t34062*t39626*var2[5];
  p_output1[31]=(t38423*t38530 + t38475*t39638 + t38209*(t38330*t39638 + t38382*t39657 + t38423*t39735 + t35760*t39742 + t40141 + t40144) + t38423*(t38684 + t38693 + t38694 - 1.*t38209*t39735 - 1.*t38051*t39742 + t40149))*var2[3] + (t33839*t38982 + t38950*t39652 + t37718*(t38303*t39634 + t35644*t39685 + t39768 + t39773 + t40141 + t40144) + t33839*(t38684 + t39262 + t39263 - 1.*t38041*t39685 + t39785 + t40149))*var2[4] + (t37788*(t33636*t38269*t39615 + t20161*t38297*t39615 + t39768 + t39773 + t25848*t39675*t39813 + t25848*t39675*t39839) + t34062*(-1.*t25848*t33636*t38269 - 1.*t20161*t25848*t38297 + t39262 + t39785 - 1.*t34062*t39675*t39813 - 1.*t34062*t39675*t39839) + t25848*t39903 + t34062*t40135)*var2[5] + (t34062*t39764 + t37788*(t38262*t39615 + t25848*t39675 + t39768 + t39773) + t25848*t39780 + t34062*(-1.*t25848*t38262 + t39262 - 1.*t34062*t39675 + t39785))*var2[9];
  p_output1[32]=t38423*var2[0] + t36205*var2[1] + (t268*t33839 + t33995*t35760)*var2[2] + (t38658*t39638 + t38423*(t34008*t36596*t39735 - 1.*t35575*t36596*t39742 + t40183) + t34008*t36596*(-1.*t38330*t39638 - 1.*t38382*t39657 - 1.*t38423*t39735 - 1.*t35760*t39742 + t40190 + t40192))*var2[3] + (t39225*t39652 + t33839*(t36596*t39685 + t40183) + t37366*(-1.*t25848*t38241 - 1.*t38303*t39634 - 1.*t35644*t39685 - 1.*t34062*t39692 + t40190 + t40192))*var2[4] + t25848*t40173*var2[5];
  p_output1[33]=t39622 + t38209*var2[0] + t38117*var2[1] + (t268*t37718 + t33995*t38051)*var2[2] + (t38209*(t40254 - 1.*t34008*t36596*t40328 + t35575*t36596*t40335) + t38384*t40370 + t34008*t36596*(t40292 + t40298 + t38209*t40328 + t38051*t40335 + t38330*t40370 + t38382*t40402))*var2[3] + (t37718*(t40254 - 1.*t36596*t40257) + t38783*t40270 + t37366*(t38241*t39615 + t38041*t40257 + t37788*t40281 + t40292 + t40298 + t38303*t40307))*var2[4] + t39615*t39626*var2[5] + (0.28121*t22849 - 0.27*Power(t22849,2) + t22849*t38236)*var2[10];
  p_output1[34]=(t38209*t38475 + t38530*t40370 + t38209*(t38403 + t38405 + t38407 + t38423*t40328 + t35760*t40335 + t40514) + t38423*(-1.*t38209*t40328 - 1.*t38051*t40335 - 1.*t38330*t40370 - 1.*t38382*t40402 + t40529 + t40535))*var2[3] + (t37718*t38950 + t38982*t40270 + t37718*(t38403 + t38838 + t38840 + t35644*t40257 + t40445 + t40514) + t33839*(-1.*t38041*t40257 - 1.*t38303*t40307 + t40449 + t40452 + t40529 + t40535))*var2[4] + (t37788*t39903 + t39615*t40135 + t37788*(t33636*t34062*t38269 + t20161*t34062*t38297 + t38838 + t25848*t39813*t40241 + t25848*t39839*t40241 + t40445) + t34062*(-1.*t33636*t37788*t38269 - 1.*t20161*t37788*t38297 - 1.*t34062*t39813*t40241 - 1.*t34062*t39839*t40241 + t40449 + t40452))*var2[5] + (t39615*t39764 + t37788*t39780 + t37788*(t34062*t38262 + t38838 + t25848*t40241 + t40445) + t34062*(-1.*t37788*t38262 - 1.*t34062*t40241 + t40449 + t40452))*var2[9];
  p_output1[35]=t40370*var2[0] + (t33995*t40270 - 1.*t268*t40402)*var2[1] + (t268*t40270 + t33995*t40402)*var2[2] + (t38209*t38658 + t38423*(t34008*t36596*t40328 - 1.*t35575*t36596*t40335 + t40607) + t34008*t36596*(t38440 + t38458 + t38466 - 1.*t38423*t40328 - 1.*t35760*t40335 + t40613))*var2[3] + (t37718*t39225 + t33839*(t36596*t40257 + t40607) + t37366*(t38440 + t38948 + t38949 - 1.*t35644*t40257 - 1.*t34062*t40281 + t40613))*var2[4] + t37788*t40173*var2[5] + (-0.28121*t23510 + 0.27*t22849*t23510 - 1.*t23510*t38236)*var2[10];
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

#include "dJh_RlFoot_DiagonalStance.hh"

namespace SymFunction
{

void dJh_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
