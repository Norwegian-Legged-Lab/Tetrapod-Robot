/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:04:02 GMT+02:00
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
  double t1861;
  double t2888;
  double t2893;
  double t4367;
  double t4864;
  double t5539;
  double t6353;
  double t7706;
  double t1405;
  double t1406;
  double t8331;
  double t9567;
  double t7277;
  double t8401;
  double t9452;
  double t1375;
  double t9786;
  double t10019;
  double t10261;
  double t10262;
  double t10270;
  double t10277;
  double t10279;
  double t10288;
  double t10329;
  double t10351;
  double t10352;
  double t10737;
  double t10749;
  double t10754;
  double t10796;
  double t10800;
  double t10805;
  double t10879;
  double t10895;
  double t10896;
  double t10906;
  double t10915;
  double t10916;
  double t10940;
  double t10948;
  double t10949;
  double t10955;
  double t10956;
  double t10965;
  double t11066;
  double t11067;
  double t11071;
  double t11131;
  double t11135;
  double t11138;
  double t11139;
  double t11140;
  double t11176;
  double t11179;
  double t11192;
  double t11202;
  double t11203;
  double t11206;
  double t11210;
  double t11215;
  double t11099;
  double t11141;
  double t11160;
  double t11166;
  double t11186;
  double t11217;
  double t11219;
  double t11222;
  double t11223;
  double t11224;
  double t11228;
  double t11231;
  double t11232;
  double t11236;
  double t11237;
  double t11242;
  double t11267;
  double t11268;
  double t11171;
  double t11238;
  double t11239;
  double t11288;
  double t11289;
  double t11290;
  double t11078;
  double t11090;
  double t11095;
  double t11276;
  double t11282;
  double t11283;
  double t11317;
  double t11342;
  double t11364;
  double t11442;
  double t11445;
  double t11446;
  double t11649;
  double t11656;
  double t11660;
  double t11284;
  double t11725;
  double t11729;
  double t11731;
  double t11393;
  double t11773;
  double t11774;
  double t11775;
  double t11286;
  double t11292;
  double t11297;
  double t11739;
  double t11743;
  double t11746;
  double t11753;
  double t11757;
  double t11772;
  double t11778;
  double t11399;
  double t11400;
  double t11406;
  double t11463;
  double t11520;
  double t11914;
  double t11926;
  double t11961;
  double t11992;
  double t11464;
  double t11465;
  double t11466;
  double t11524;
  double t11532;
  double t11538;
  double t11598;
  double t11630;
  double t11601;
  double t11602;
  double t11604;
  double t11802;
  double t11807;
  double t12198;
  double t12200;
  double t12227;
  double t12240;
  double t11632;
  double t11634;
  double t11636;
  double t11661;
  double t11662;
  double t11665;
  double t11682;
  double t11687;
  double t11694;
  double t11696;
  double t11697;
  double t11700;
  double t11709;
  double t11716;
  double t11720;
  double t12363;
  double t12364;
  double t12366;
  double t12357;
  double t11758;
  double t12433;
  double t12438;
  double t12444;
  double t12448;
  double t12454;
  double t12464;
  double t11777;
  double t11785;
  double t11788;
  double t11790;
  double t11791;
  double t11800;
  double t12481;
  double t11812;
  double t11813;
  double t12495;
  double t11825;
  double t11826;
  double t11832;
  double t11884;
  double t11885;
  double t11896;
  double t11900;
  double t11904;
  double t11905;
  double t11908;
  double t11910;
  double t11911;
  double t11921;
  double t11943;
  double t11945;
  double t11947;
  double t11948;
  double t11975;
  double t11997;
  double t12005;
  double t12011;
  double t12012;
  double t12717;
  double t12022;
  double t12028;
  double t12753;
  double t12097;
  double t12100;
  double t12114;
  double t12115;
  double t12136;
  double t12137;
  double t12138;
  double t12149;
  double t12150;
  double t12152;
  double t12153;
  double t12166;
  double t12170;
  double t12174;
  double t12176;
  double t12178;
  double t12208;
  double t12236;
  double t12253;
  double t12254;
  double t12283;
  double t12284;
  double t12287;
  double t12983;
  double t12296;
  double t12297;
  double t13000;
  double t12316;
  double t12318;
  double t12327;
  double t13180;
  double t13182;
  double t13184;
  double t13186;
  double t13188;
  double t13192;
  double t13214;
  double t13219;
  double t13221;
  double t13225;
  double t13228;
  double t13229;
  double t13261;
  double t13263;
  double t13264;
  double t13273;
  double t13274;
  double t13275;
  double t13268;
  double t13291;
  double t13294;
  double t13296;
  double t13298;
  double t13303;
  double t13314;
  double t13317;
  double t13321;
  double t13328;
  double t13329;
  double t13331;
  double t13375;
  double t13383;
  double t13436;
  double t13440;
  double t13423;
  double t13185;
  double t13194;
  double t13196;
  double t13472;
  double t13476;
  double t13487;
  double t10720;
  double t10721;
  double t10722;
  double t13566;
  double t13584;
  double t13589;
  double t13148;
  double t13153;
  double t13160;
  double t11004;
  double t11012;
  double t11049;
  double t13733;
  double t13750;
  double t13753;
  double t13756;
  double t13757;
  double t13758;
  double t13763;
  double t13766;
  double t13771;
  double t13784;
  double t13785;
  double t13788;
  double t13761;
  double t13794;
  double t13795;
  double t13828;
  double t13830;
  double t13840;
  double t13807;
  double t13825;
  double t13850;
  double t13870;
  double t13871;
  double t13892;
  double t13895;
  double t13899;
  double t13908;
  double t13910;
  double t13911;
  double t13365;
  double t13366;
  double t13397;
  double t13399;
  double t13413;
  double t13428;
  double t13430;
  double t13433;
  double t13979;
  double t14000;
  double t13464;
  double t13465;
  double t13466;
  double t14079;
  double t14101;
  double t14103;
  double t13935;
  double t13939;
  double t13953;
  double t13534;
  double t13538;
  double t13542;
  double t13543;
  double t13546;
  double t13548;
  double t13549;
  double t14274;
  double t14302;
  t1861 = Cos(var1[13]);
  t2888 = Cos(var1[14]);
  t2893 = t1861*t2888;
  t4367 = Sin(var1[13]);
  t4864 = Sin(var1[14]);
  t5539 = t4367*t4864;
  t6353 = t2893 + t5539;
  t7706 = Cos(var1[12]);
  t1405 = Cos(var1[5]);
  t1406 = Sin(var1[12]);
  t8331 = Sin(var1[5]);
  t9567 = Cos(var1[3]);
  t7277 = t1405*t1406*t6353;
  t8401 = t7706*t6353*t8331;
  t9452 = t7277 + t8401;
  t1375 = Sin(var1[3]);
  t9786 = Cos(var1[4]);
  t10019 = -1.*t2888*t4367;
  t10261 = t1861*t4864;
  t10262 = t10019 + t10261;
  t10270 = t9786*t10262;
  t10277 = Sin(var1[4]);
  t10279 = t7706*t1405*t6353;
  t10288 = -1.*t1406*t6353*t8331;
  t10329 = t10279 + t10288;
  t10351 = -1.*t10277*t10329;
  t10352 = t10270 + t10351;
  t10737 = -1.*t1405*t1406;
  t10749 = -1.*t7706*t8331;
  t10754 = t10737 + t10749;
  t10796 = t7706*t1405;
  t10800 = -1.*t1406*t8331;
  t10805 = t10796 + t10800;
  t10879 = t2888*t4367;
  t10895 = -1.*t1861*t4864;
  t10896 = t10879 + t10895;
  t10906 = t1405*t1406*t10896;
  t10915 = t7706*t10896*t8331;
  t10916 = t10906 + t10915;
  t10940 = t9786*t6353;
  t10948 = t7706*t1405*t10896;
  t10949 = -1.*t1406*t10896*t8331;
  t10955 = t10948 + t10949;
  t10956 = -1.*t10277*t10955;
  t10965 = t10940 + t10956;
  t11066 = -1.*t10262*t10277;
  t11067 = -1.*t9786*t10329;
  t11071 = t11066 + t11067;
  t11131 = -1.*t2888;
  t11135 = 1. + t11131;
  t11138 = 0.50321*t11135;
  t11139 = 0.19821*t2888;
  t11140 = t11138 + t11139;
  t11176 = -1.*t7706;
  t11179 = 1. + t11176;
  t11192 = -1.*t1861;
  t11202 = 1. + t11192;
  t11203 = 0.28121*t11202;
  t11206 = t1861*t11140;
  t11210 = -0.305*t4367*t4864;
  t11215 = t11203 + t11206 + t11210;
  t11099 = 0.28121*t4367;
  t11141 = -1.*t11140*t4367;
  t11160 = -0.305*t1861*t4864;
  t11166 = t11099 + t11141 + t11160;
  t11186 = 0.15121*t11179;
  t11217 = t7706*t11215;
  t11219 = t11186 + t11217;
  t11222 = t1405*t11219;
  t11223 = -0.15121*t11179;
  t11224 = -0.15121*t7706;
  t11228 = -0.15121*t1406;
  t11231 = t1406*t11215;
  t11232 = t11223 + t11224 + t11228 + t11231;
  t11236 = -1.*t11232*t8331;
  t11237 = t11222 + t11236;
  t11242 = t11166*t10277;
  t11267 = t9786*t11237;
  t11268 = t11242 + t11267;
  t11171 = -1.*t11166*t10277;
  t11238 = -1.*t9786*t11237;
  t11239 = t11171 + t11238;
  t11288 = t9786*t11166;
  t11289 = -1.*t10277*t11237;
  t11290 = t11288 + t11289;
  t11078 = t6353*t10277;
  t11090 = t9786*t10955;
  t11095 = t11078 + t11090;
  t11276 = t1405*t11232;
  t11282 = t11219*t8331;
  t11283 = t11276 + t11282;
  t11317 = -1.*t6353*t10277;
  t11342 = -1.*t9786*t10955;
  t11364 = t11317 + t11342;
  t11442 = t10262*t10277;
  t11445 = t9786*t10329;
  t11446 = t11442 + t11445;
  t11649 = -1.*t1405*t1406*t6353;
  t11656 = -1.*t7706*t6353*t8331;
  t11660 = t11649 + t11656;
  t11284 = -1.*t10805*t11283;
  t11725 = -1.*t1405*t11232;
  t11729 = -1.*t11219*t8331;
  t11731 = t11725 + t11729;
  t11393 = t10916*t11283;
  t11773 = -1.*t1405*t1406*t10896;
  t11774 = -1.*t7706*t10896*t8331;
  t11775 = t11773 + t11774;
  t11286 = -1.*t9786*t10754*t11268;
  t11292 = t10277*t10754*t11290;
  t11297 = t11284 + t11286 + t11292;
  t11739 = -1.*t10754*t11283;
  t11743 = -1.*t10805*t11237;
  t11746 = -1.*t7706*t1405;
  t11753 = t1406*t8331;
  t11757 = t11746 + t11753;
  t11772 = t10955*t11283;
  t11778 = t10916*t11237;
  t11399 = t11095*t11268;
  t11400 = t10965*t11290;
  t11406 = t11393 + t11399 + t11400;
  t11463 = -1.*t10916*t11283;
  t11520 = t9452*t11283;
  t11914 = -1.*t10955*t11283;
  t11926 = -1.*t10916*t11237;
  t11961 = t10329*t11283;
  t11992 = t9452*t11237;
  t11464 = -1.*t11095*t11268;
  t11465 = -1.*t10965*t11290;
  t11466 = t11463 + t11464 + t11465;
  t11524 = t11446*t11268;
  t11532 = t10352*t11290;
  t11538 = t11520 + t11524 + t11532;
  t11598 = t10805*t11283;
  t11630 = -1.*t9452*t11283;
  t11601 = t9786*t10754*t11268;
  t11602 = -1.*t10277*t10754*t11290;
  t11604 = t11598 + t11601 + t11602;
  t11802 = Power(t9786,2);
  t11807 = Power(t10277,2);
  t12198 = t10754*t11283;
  t12200 = t10805*t11237;
  t12227 = -1.*t10329*t11283;
  t12240 = -1.*t9452*t11237;
  t11632 = -1.*t11446*t11268;
  t11634 = -1.*t10352*t11290;
  t11636 = t11630 + t11632 + t11634;
  t11661 = var2[0]*t9786*t11660;
  t11662 = t1375*t10277*t11660;
  t11665 = t9567*t10329;
  t11682 = t11662 + t11665;
  t11687 = var2[1]*t11682;
  t11694 = -1.*t9567*t10277*t11660;
  t11696 = t1375*t10329;
  t11697 = t11694 + t11696;
  t11700 = var2[2]*t11697;
  t11709 = -1.*t10754*t11237;
  t11716 = t11284 + t11709;
  t11720 = t10955*t11716;
  t12363 = 0.15121*t1406;
  t12364 = -1.*t1406*t11215;
  t12366 = t12363 + t12364;
  t12357 = t11224 + t11217;
  t11758 = -1.*t11757*t11237;
  t12433 = t1405*t12366;
  t12438 = -1.*t12357*t8331;
  t12444 = t12433 + t12438;
  t12448 = t1405*t12357;
  t12454 = t12366*t8331;
  t12464 = t12448 + t12454;
  t11777 = t11775*t11237;
  t11785 = t11166*t6353;
  t11788 = t10955*t11237;
  t11790 = t11785 + t11393 + t11788;
  t11791 = t10754*t11790;
  t11800 = t9786*t11775*t11297;
  t12481 = -1.*t10805*t12464;
  t11812 = -1.*t9786*t11757*t11268;
  t11813 = t10277*t11757*t11290;
  t12495 = t10916*t12464;
  t11825 = t9786*t11775*t11268;
  t11826 = -1.*t10277*t11775*t11290;
  t11832 = t9786*t11757*t11406;
  t11884 = var2[0]*t9786*t11757;
  t11885 = t1375*t10754;
  t11896 = -1.*t9567*t10277*t11757;
  t11900 = t11885 + t11896;
  t11904 = var2[2]*t11900;
  t11905 = t9567*t10754;
  t11908 = t1375*t10277*t11757;
  t11910 = t11905 + t11908;
  t11911 = var2[1]*t11910;
  t11921 = -1.*t11775*t11237;
  t11943 = -1.*t11166*t6353;
  t11945 = -1.*t10955*t11237;
  t11947 = t11943 + t11463 + t11945;
  t11948 = t10329*t11947;
  t11975 = t11660*t11237;
  t11997 = t11166*t10262;
  t12005 = t10329*t11237;
  t12011 = t11997 + t11520 + t12005;
  t12012 = t10955*t12011;
  t12717 = -1.*t10916*t12464;
  t12022 = -1.*t9786*t11775*t11268;
  t12028 = t10277*t11775*t11290;
  t12753 = t9452*t12464;
  t12097 = t9786*t11660*t11268;
  t12100 = -1.*t10277*t11660*t11290;
  t12114 = t9786*t11660*t11466;
  t12115 = t9786*t11775*t11538;
  t12136 = var2[0]*t9786*t11775;
  t12137 = t1375*t10277*t11775;
  t12138 = t9567*t10955;
  t12149 = t12137 + t12138;
  t12150 = var2[1]*t12149;
  t12152 = -1.*t9567*t10277*t11775;
  t12153 = t1375*t10955;
  t12166 = t12152 + t12153;
  t12170 = var2[2]*t12166;
  t12174 = t10754*t11237;
  t12176 = t11598 + t12174;
  t12178 = t10329*t12176;
  t12208 = t11757*t11237;
  t12236 = -1.*t11660*t11237;
  t12253 = -1.*t11166*t10262;
  t12254 = -1.*t10329*t11237;
  t12283 = t12253 + t11630 + t12254;
  t12284 = t10754*t12283;
  t12287 = t9786*t11660*t11604;
  t12983 = t10805*t12464;
  t12296 = t9786*t11757*t11268;
  t12297 = -1.*t10277*t11757*t11290;
  t13000 = -1.*t9452*t12464;
  t12316 = -1.*t9786*t11660*t11268;
  t12318 = t10277*t11660*t11290;
  t12327 = t9786*t11757*t11636;
  t13180 = -1.*t1861*t2888;
  t13182 = -1.*t4367*t4864;
  t13184 = t13180 + t13182;
  t13186 = t7706*t1405*t10262;
  t13188 = -1.*t1406*t10262*t8331;
  t13192 = t13186 + t13188;
  t13214 = t1405*t1406*t10262;
  t13219 = t7706*t10262*t8331;
  t13221 = t13214 + t13219;
  t13225 = t9786*t13184;
  t13228 = -1.*t10277*t13192;
  t13229 = t13225 + t13228;
  t13261 = t1405*t1406*t11166;
  t13263 = t7706*t11166*t8331;
  t13264 = t13261 + t13263;
  t13273 = t7706*t1405*t11166;
  t13274 = -1.*t1406*t11166*t8331;
  t13275 = t13273 + t13274;
  t13268 = -1.*t10805*t13264;
  t13291 = 0.28121*t1861;
  t13294 = -1.*t1861*t11140;
  t13296 = 0.305*t4367*t4864;
  t13298 = t13291 + t13294 + t13296;
  t13303 = t10916*t13264;
  t13314 = t13298*t10277;
  t13317 = t9786*t13275;
  t13321 = t13314 + t13317;
  t13328 = t9786*t13298;
  t13329 = -1.*t10277*t13275;
  t13331 = t13328 + t13329;
  t13375 = t11166*t13184;
  t13383 = t10262*t13298;
  t13436 = Power(t7706,2);
  t13440 = Power(t1406,2);
  t13423 = -1.*t13298*t6353;
  t13185 = t13184*t10277;
  t13194 = t9786*t13192;
  t13196 = t13185 + t13194;
  t13472 = t13264*t9452;
  t13476 = t13221*t11283;
  t13487 = -1.*t10916*t13264;
  t10720 = t9567*t9452;
  t10721 = -1.*t1375*t10352;
  t10722 = t10720 + t10721;
  t13566 = t10805*t13264;
  t13584 = -1.*t13264*t9452;
  t13589 = -1.*t13221*t11283;
  t13148 = t1406*t11219;
  t13153 = -1.*t7706*t11232;
  t13160 = t13148 + t13153;
  t11004 = t9567*t10916;
  t11012 = -1.*t1375*t10965;
  t11049 = t11004 + t11012;
  t13733 = -0.305*t2888*t4367;
  t13750 = 0.305*t1861*t4864;
  t13753 = t13733 + t13750;
  t13756 = t1405*t1406*t13753;
  t13757 = t7706*t13753*t8331;
  t13758 = t13756 + t13757;
  t13763 = t7706*t1405*t13753;
  t13766 = -1.*t1406*t13753*t8331;
  t13771 = t13763 + t13766;
  t13784 = t1405*t1406*t13184;
  t13785 = t7706*t13184*t8331;
  t13788 = t13784 + t13785;
  t13761 = -1.*t10805*t13758;
  t13794 = -0.305*t1861*t2888;
  t13795 = t13794 + t11210;
  t13828 = t7706*t1405*t13184;
  t13830 = -1.*t1406*t13184*t8331;
  t13840 = t13828 + t13830;
  t13807 = t10916*t13758;
  t13825 = t13788*t11283;
  t13850 = t13795*t10277;
  t13870 = t9786*t13771;
  t13871 = t13850 + t13870;
  t13892 = t9786*t13795;
  t13895 = -1.*t10277*t13771;
  t13899 = t13892 + t13895;
  t13908 = t10896*t10277;
  t13910 = t9786*t13840;
  t13911 = t13908 + t13910;
  t13365 = -1.*t10896*t11215;
  t13366 = t13365 + t11943;
  t13397 = t11215*t6353;
  t13399 = t11997 + t13397;
  t13413 = -1.*t10896*t11166;
  t13428 = -1.*t7706*t10896*t11219;
  t13430 = -1.*t1406*t10896*t11232;
  t13433 = t11943 + t13428 + t13430;
  t13979 = t10262*t13795;
  t14000 = -1.*t13795*t6353;
  t13464 = t7706*t6353*t11219;
  t13465 = t1406*t6353*t11232;
  t13466 = t11997 + t13464 + t13465;
  t14079 = t13758*t9452;
  t14101 = -1.*t10916*t13758;
  t14103 = -1.*t13788*t11283;
  t13935 = t9786*t10896;
  t13939 = -1.*t10277*t13840;
  t13953 = t13935 + t13939;
  t13534 = -0.15121*t13184;
  t13538 = -0.15121*t6353;
  t13542 = t13534 + t13538;
  t13543 = var2[12]*t13542;
  t13546 = -1.*t1406*t11219;
  t13548 = t7706*t11232;
  t13549 = t13546 + t13548;
  t14274 = t10805*t13758;
  t14302 = -1.*t13758*t9452;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t1375*t9452 - 1.*t10352*t9567)*var2[1] + t10722*var2[2];
  p_output1[10]=(-1.*t10805*t1375 + t10277*t10754*t9567)*var2[1] + (t10277*t10754*t1375 + t10805*t9567)*var2[2];
  p_output1[11]=(-1.*t10916*t1375 - 1.*t10965*t9567)*var2[1] + t11049*var2[2];
  p_output1[12]=t10352*var2[0] - 1.*t11071*t1375*var2[1] + t11071*t9567*var2[2] + (t11095*(t10277*t10754*t11239 + t10277*t10754*t11268) + t10965*t11297 - 1.*t10277*t10754*t11406 + t10754*(t10965*t11239 + t10965*t11268 + t11095*t11290 + t11290*t11364)*t9786)*var2[3];
  p_output1[13]=-1.*t10277*t10754*var2[0] + t10754*t1375*t9786*var2[1] - 1.*t10754*t9567*t9786*var2[2] + ((-1.*t10965*t11239 - 1.*t10965*t11268 - 1.*t11095*t11290 - 1.*t11290*t11364)*t11446 + t11095*(t10352*t11239 + t10352*t11268 + t11071*t11290 + t11290*t11446) + t10352*t11466 + t10965*t11538)*var2[3];
  p_output1[14]=t10965*var2[0] - 1.*t11364*t1375*var2[1] + t11364*t9567*var2[2] + ((-1.*t10277*t10754*t11239 - 1.*t10277*t10754*t11268)*t11446 + t10352*t11604 - 1.*t10277*t10754*t11636 + t10754*(-1.*t10352*t11239 - 1.*t10352*t11268 - 1.*t11071*t11290 - 1.*t11290*t11446)*t9786)*var2[3];
  p_output1[15]=t11661 + t11687 + t11700 + (t11800 + t11095*(t11739 + t11743 - 1.*t10754*t11731*t11802 - 1.*t10754*t11731*t11807 + t11812 + t11813) + t11832 + t10754*t9786*(-1.*t10277*t10965*t11731 + t11772 + t11778 + t11825 + t11826 + t11095*t11731*t9786))*var2[3] + (t11720 + t10916*(-1.*t10754*t11731 + t11739 + t11743 + t11758) + t10805*(t10955*t11731 + t11772 + t11777 + t11778) + t11791)*var2[4];
  p_output1[16]=t11884 + t11904 + t11911 + (t12114 + t12115 + t11446*(t10277*t10965*t11731 + t11914 + t11926 + t12022 + t12028 - 1.*t11095*t11731*t9786) + t11095*(-1.*t10277*t10352*t11731 + t11961 + t11992 + t12097 + t12100 + t11446*t11731*t9786))*var2[3] + (t11948 + t10916*(t10329*t11731 + t11961 + t11975 + t11992) + t12012 + (-1.*t10955*t11731 + t11914 + t11921 + t11926)*t9452)*var2[4];
  p_output1[17]=t12136 + t12150 + t12170 + (t12287 + t11446*(t10754*t11731*t11802 + t10754*t11731*t11807 + t12198 + t12200 + t12296 + t12297) + t12327 + t10754*t9786*(t10277*t10352*t11731 + t12227 + t12240 + t12316 + t12318 - 1.*t11446*t11731*t9786))*var2[3] + (t12178 + t10805*(-1.*t10329*t11731 + t12227 + t12236 + t12240) + t12284 + (t10754*t11731 + t12198 + t12200 + t12208)*t9452)*var2[4];
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
  p_output1[36]=t11661 + t11687 + t11700 + (t11800 + t11832 + t11095*(t11739 + t11812 + t11813 - 1.*t10754*t11802*t12444 - 1.*t10754*t11807*t12444 + t12481) + t10754*t9786*(t11772 + t11825 + t11826 - 1.*t10277*t10965*t12444 + t12495 + t11095*t12444*t9786))*var2[3] + (t11720 + t11791 + t10916*(t11739 + t11758 - 1.*t10754*t12444 + t12481) + t10805*(t11772 + t11777 + t10955*t12444 + t12495))*var2[4] + t6353*(t11232*t1406 + t12366*t1406 + t11219*t7706 - 1.*t12357*t7706)*var2[5];
  p_output1[37]=t11884 + t11904 + t11911 + (t12114 + t12115 + t11446*(t11914 + t12022 + t12028 + t10277*t10965*t12444 + t12717 - 1.*t11095*t12444*t9786) + t11095*(t11961 + t12097 + t12100 - 1.*t10277*t10352*t12444 + t12753 + t11446*t12444*t9786))*var2[3] + (t11948 + t12012 + t10916*(t11961 + t11975 + t10329*t12444 + t12753) + (t11914 + t11921 - 1.*t10955*t12444 + t12717)*t9452)*var2[4] + (t10262*(t10896*t11219*t1406 - 1.*t10896*t12357*t1406 - 1.*t10896*t11232*t7706 - 1.*t10896*t12366*t7706) + t6353*(-1.*t11219*t1406*t6353 + t12357*t1406*t6353 + t11232*t6353*t7706 + t12366*t6353*t7706))*var2[5];
  p_output1[38]=t12136 + t12150 + t12170 + (t12287 + t12327 + t11446*(t12198 + t12296 + t12297 + t10754*t11802*t12444 + t10754*t11807*t12444 + t12983) + t10754*t9786*(t12227 + t12316 + t12318 + t10277*t10352*t12444 + t13000 - 1.*t11446*t12444*t9786))*var2[3] + (t12178 + t12284 + t10805*(t12227 + t12236 - 1.*t10329*t12444 + t13000) + (t12198 + t12208 + t10754*t12444 + t12983)*t9452)*var2[4] + t10262*(-1.*t11232*t1406 - 1.*t12366*t1406 - 1.*t11219*t7706 + t12357*t7706)*var2[5];
  p_output1[39]=t13196*var2[0] + (-1.*t13229*t1375 + t13221*t9567)*var2[1] + (t13221*t1375 + t13229*t9567)*var2[2] + (t11297*t11446 + t10754*(t11520 + t11524 + t11532 + t13303 + t11095*t13321 + t10965*t13331)*t9786 + t11095*(t13268 + t10277*t10754*t13331 - 1.*t10754*t13321*t9786))*var2[3] + (t10916*(t13268 - 1.*t10754*t13275) + t10805*(t11520 + t11997 + t12005 + t10955*t13275 + t13303 + t13298*t6353) + t11716*t9452)*var2[4] + t10262*t13160*var2[5];
  p_output1[40]=(t11446*t11538 + t11466*t13196 + t11095*(t11268*t13196 + t11290*t13229 + t11446*t13321 + t10352*t13331 + t13472 + t13476) + t11446*(t11630 + t11632 + t11634 - 1.*t11095*t13321 - 1.*t10965*t13331 + t13487))*var2[3] + (t11947*t13221 + t10916*(t11237*t13192 + t10329*t13275 + t13375 + t13383 + t13472 + t13476) + t12011*t9452 + (t11630 + t12253 + t12254 - 1.*t10955*t13275 + t13423 + t13487)*t9452)*var2[4] + (t13184*t13433 + t10262*t13466 + t6353*(t13375 + t13383 + t10262*t11232*t1406 + t11166*t13436*t6353 + t11166*t13440*t6353 + t10262*t11219*t7706) + t10262*(t12253 + t13423 - 1.*t10896*t11166*t13436 - 1.*t10896*t11166*t13440 - 1.*t11232*t1406*t6353 - 1.*t11219*t6353*t7706))*var2[5] + (t13184*t13366 + t10262*t13399 + (t10262*t11215 + t11785 + t13375 + t13383)*t6353 + t10262*(t12253 + t13413 + t13423 - 1.*t11215*t6353))*var2[12];
  p_output1[41]=t13543 + t11446*var2[0] + t10722*var2[1] + (t1375*t9452 + t10352*t9567)*var2[2] + (t11604*t13196 + t10754*(-1.*t11268*t13196 - 1.*t11290*t13229 - 1.*t11446*t13321 - 1.*t10352*t13331 + t13584 + t13589)*t9786 + t11446*(-1.*t10277*t10754*t13331 + t13566 + t10754*t13321*t9786))*var2[3] + (t12176*t13221 + t10805*(-1.*t11166*t13184 - 1.*t11237*t13192 - 1.*t10329*t13275 - 1.*t10262*t13298 + t13584 + t13589) + (t10754*t13275 + t13566)*t9452)*var2[4] + t13184*t13549*var2[5];
  p_output1[42]=t11095*var2[0] + t11049*var2[1] + (t10916*t1375 + t10965*t9567)*var2[2] + (t11297*t13911 + t10754*(t13807 + t13825 + t11095*t13871 + t10965*t13899 + t11268*t13911 + t11290*t13953)*t9786 + t11095*(t13761 + t10277*t10754*t13899 - 1.*t10754*t13871*t9786))*var2[3] + (t10916*(t13761 - 1.*t10754*t13771) + t11716*t13788 + t10805*(t10896*t11166 + t10955*t13771 + t13807 + t13825 + t11237*t13840 + t13795*t6353))*var2[4] + t10896*t13160*var2[5] + (0.28121*t2888 - 1.*t11140*t2888 - 0.305*Power(t2888,2))*var2[13];
  p_output1[43]=(t11095*t11466 + t11538*t13911 + t11095*(t11393 + t11399 + t11400 + t11446*t13871 + t10352*t13899 + t14079) + t11446*(-1.*t11095*t13871 - 1.*t10965*t13899 - 1.*t11268*t13911 - 1.*t11290*t13953 + t14101 + t14103))*var2[3] + (t10916*t11947 + t12011*t13788 + t10916*(t11393 + t11785 + t11788 + t10329*t13771 + t13979 + t14079) + (t13413 - 1.*t10955*t13771 - 1.*t11237*t13840 + t14000 + t14101 + t14103)*t9452)*var2[4] + (t10896*t13466 + t13433*t6353 + t6353*(t11785 + t13979 + t10896*t11232*t1406 + t13436*t13753*t6353 + t13440*t13753*t6353 + t10896*t11219*t7706) + t10262*(t13413 - 1.*t10896*t13436*t13753 - 1.*t10896*t13440*t13753 + t14000 - 1.*t11232*t13184*t1406 - 1.*t11219*t13184*t7706))*var2[5] + (t10896*t13399 + t10262*(-1.*t11215*t13184 + t13413 - 1.*t10896*t13753 + t14000) + t13366*t6353 + t6353*(t10896*t11215 + t11785 + t13979 + t13753*t6353))*var2[12];
  p_output1[44]=t13543 + t13911*var2[0] + (-1.*t1375*t13953 + t13788*t9567)*var2[1] + (t1375*t13788 + t13953*t9567)*var2[2] + (t11095*t11604 + t10754*(t11463 + t11464 + t11465 - 1.*t11446*t13871 - 1.*t10352*t13899 + t14302)*t9786 + t11446*(-1.*t10277*t10754*t13899 + t14274 + t10754*t13871*t9786))*var2[3] + (t10916*t12176 + t10805*(t11463 + t11943 + t11945 - 1.*t10329*t13771 - 1.*t10262*t13795 + t14302) + (t10754*t13771 + t14274)*t9452)*var2[4] + t13549*t6353*var2[5] + (-0.28121*t4864 + t11140*t4864 + 0.305*t2888*t4864)*var2[13];
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
