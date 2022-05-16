/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:52:01 GMT+02:00
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
  double t53917;
  double t54564;
  double t56450;
  double t56641;
  double t56643;
  double t56644;
  double t56649;
  double t56666;
  double t45660;
  double t53660;
  double t56811;
  double t56815;
  double t56650;
  double t56812;
  double t56813;
  double t18948;
  double t56823;
  double t56824;
  double t56825;
  double t56826;
  double t56831;
  double t56833;
  double t56897;
  double t56903;
  double t56904;
  double t56906;
  double t56908;
  double t57098;
  double t57100;
  double t57102;
  double t57107;
  double t57112;
  double t57113;
  double t57129;
  double t57130;
  double t57131;
  double t57132;
  double t57144;
  double t57145;
  double t57156;
  double t57161;
  double t57162;
  double t57253;
  double t57254;
  double t57258;
  double t57282;
  double t57283;
  double t57284;
  double t57298;
  double t57302;
  double t57304;
  double t57305;
  double t57308;
  double t57315;
  double t57316;
  double t57318;
  double t57319;
  double t57320;
  double t57321;
  double t57323;
  double t57324;
  double t57297;
  double t57309;
  double t57312;
  double t57313;
  double t57317;
  double t57325;
  double t57326;
  double t57329;
  double t57333;
  double t57334;
  double t57335;
  double t57337;
  double t57375;
  double t57376;
  double t57377;
  double t57381;
  double t57382;
  double t57384;
  double t57314;
  double t57378;
  double t57379;
  double t57395;
  double t57396;
  double t57397;
  double t57292;
  double t57295;
  double t57296;
  double t57389;
  double t57390;
  double t57391;
  double t57404;
  double t57405;
  double t57406;
  double t57426;
  double t57427;
  double t57428;
  double t57481;
  double t57482;
  double t57483;
  double t57392;
  double t57496;
  double t57497;
  double t57498;
  double t57411;
  double t57510;
  double t57511;
  double t57512;
  double t57393;
  double t57399;
  double t57400;
  double t57500;
  double t57501;
  double t57502;
  double t57503;
  double t57504;
  double t57509;
  double t57514;
  double t57412;
  double t57415;
  double t57416;
  double t57436;
  double t57447;
  double t57552;
  double t57554;
  double t57562;
  double t57564;
  double t57437;
  double t57438;
  double t57439;
  double t57448;
  double t57449;
  double t57450;
  double t57462;
  double t57473;
  double t57463;
  double t57464;
  double t57465;
  double t57524;
  double t57526;
  double t57603;
  double t57604;
  double t57609;
  double t57611;
  double t57474;
  double t57475;
  double t57476;
  double t57484;
  double t57485;
  double t57486;
  double t57487;
  double t57488;
  double t57489;
  double t57490;
  double t57491;
  double t57492;
  double t57493;
  double t57494;
  double t57495;
  double t57640;
  double t57641;
  double t57642;
  double t57638;
  double t57505;
  double t57647;
  double t57648;
  double t57649;
  double t57651;
  double t57652;
  double t57653;
  double t57513;
  double t57517;
  double t57518;
  double t57519;
  double t57520;
  double t57523;
  double t57654;
  double t57528;
  double t57529;
  double t57658;
  double t57534;
  double t57535;
  double t57538;
  double t57542;
  double t57543;
  double t57544;
  double t57545;
  double t57546;
  double t57547;
  double t57548;
  double t57549;
  double t57550;
  double t57553;
  double t57557;
  double t57558;
  double t57559;
  double t57560;
  double t57563;
  double t57567;
  double t57568;
  double t57569;
  double t57570;
  double t57689;
  double t57575;
  double t57576;
  double t57693;
  double t57581;
  double t57582;
  double t57585;
  double t57586;
  double t57590;
  double t57591;
  double t57592;
  double t57593;
  double t57594;
  double t57595;
  double t57596;
  double t57597;
  double t57598;
  double t57599;
  double t57600;
  double t57601;
  double t57605;
  double t57610;
  double t57614;
  double t57615;
  double t57616;
  double t57617;
  double t57620;
  double t57716;
  double t57623;
  double t57624;
  double t57720;
  double t57629;
  double t57630;
  double t57633;
  double t57740;
  double t57741;
  double t57742;
  double t57744;
  double t57745;
  double t57746;
  double t57750;
  double t57751;
  double t57752;
  double t57754;
  double t57755;
  double t57756;
  double t57764;
  double t57765;
  double t57766;
  double t57768;
  double t57769;
  double t57770;
  double t57767;
  double t57775;
  double t57776;
  double t57777;
  double t57778;
  double t57780;
  double t57786;
  double t57787;
  double t57788;
  double t57790;
  double t57791;
  double t57792;
  double t57807;
  double t57809;
  double t57826;
  double t57828;
  double t57817;
  double t57743;
  double t57747;
  double t57748;
  double t57847;
  double t57849;
  double t57853;
  double t57071;
  double t57076;
  double t57084;
  double t57889;
  double t57896;
  double t57898;
  double t57736;
  double t57737;
  double t57738;
  double t57273;
  double t57274;
  double t57275;
  double t57931;
  double t57932;
  double t57933;
  double t57934;
  double t57935;
  double t57936;
  double t57938;
  double t57939;
  double t57940;
  double t57944;
  double t57945;
  double t57946;
  double t57937;
  double t57949;
  double t57950;
  double t57955;
  double t57956;
  double t57957;
  double t57952;
  double t57954;
  double t57963;
  double t57964;
  double t57965;
  double t57967;
  double t57968;
  double t57969;
  double t57973;
  double t57974;
  double t57975;
  double t57804;
  double t57805;
  double t57812;
  double t57813;
  double t57815;
  double t57822;
  double t57823;
  double t57824;
  double t57991;
  double t57998;
  double t57840;
  double t57841;
  double t57842;
  double t58020;
  double t58024;
  double t58026;
  double t57980;
  double t57981;
  double t57982;
  double t57875;
  double t57876;
  double t57877;
  double t57878;
  double t57879;
  double t57880;
  double t57881;
  double t58063;
  double t58069;
  t53917 = Cos(var1[13]);
  t54564 = Cos(var1[14]);
  t56450 = t53917*t54564;
  t56641 = Sin(var1[13]);
  t56643 = Sin(var1[14]);
  t56644 = t56641*t56643;
  t56649 = t56450 + t56644;
  t56666 = Cos(var1[12]);
  t45660 = Cos(var1[5]);
  t53660 = Sin(var1[12]);
  t56811 = Sin(var1[5]);
  t56815 = Cos(var1[3]);
  t56650 = t45660*t53660*t56649;
  t56812 = t56666*t56649*t56811;
  t56813 = t56650 + t56812;
  t18948 = Sin(var1[3]);
  t56823 = Cos(var1[4]);
  t56824 = -1.*t54564*t56641;
  t56825 = t53917*t56643;
  t56826 = t56824 + t56825;
  t56831 = t56823*t56826;
  t56833 = Sin(var1[4]);
  t56897 = t56666*t45660*t56649;
  t56903 = -1.*t53660*t56649*t56811;
  t56904 = t56897 + t56903;
  t56906 = -1.*t56833*t56904;
  t56908 = t56831 + t56906;
  t57098 = -1.*t45660*t53660;
  t57100 = -1.*t56666*t56811;
  t57102 = t57098 + t57100;
  t57107 = t56666*t45660;
  t57112 = -1.*t53660*t56811;
  t57113 = t57107 + t57112;
  t57129 = t54564*t56641;
  t57130 = -1.*t53917*t56643;
  t57131 = t57129 + t57130;
  t57132 = t45660*t53660*t57131;
  t57144 = t56666*t57131*t56811;
  t57145 = t57132 + t57144;
  t57156 = t56823*t56649;
  t57161 = t56666*t45660*t57131;
  t57162 = -1.*t53660*t57131*t56811;
  t57253 = t57161 + t57162;
  t57254 = -1.*t56833*t57253;
  t57258 = t57156 + t57254;
  t57282 = -1.*t56826*t56833;
  t57283 = -1.*t56823*t56904;
  t57284 = t57282 + t57283;
  t57298 = -1.*t54564;
  t57302 = 1. + t57298;
  t57304 = 0.50321*t57302;
  t57305 = 0.23321*t54564;
  t57308 = t57304 + t57305;
  t57315 = -1.*t56666;
  t57316 = 1. + t57315;
  t57318 = -1.*t53917;
  t57319 = 1. + t57318;
  t57320 = 0.28121*t57319;
  t57321 = t53917*t57308;
  t57323 = -0.27*t56641*t56643;
  t57324 = t57320 + t57321 + t57323;
  t57297 = 0.28121*t56641;
  t57309 = -1.*t57308*t56641;
  t57312 = -0.27*t53917*t56643;
  t57313 = t57297 + t57309 + t57312;
  t57317 = 0.15121*t57316;
  t57325 = t56666*t57324;
  t57326 = t57317 + t57325;
  t57329 = t45660*t57326;
  t57333 = -0.15121*t57316;
  t57334 = -0.15121*t56666;
  t57335 = -0.15121*t53660;
  t57337 = t53660*t57324;
  t57375 = t57333 + t57334 + t57335 + t57337;
  t57376 = -1.*t57375*t56811;
  t57377 = t57329 + t57376;
  t57381 = t57313*t56833;
  t57382 = t56823*t57377;
  t57384 = t57381 + t57382;
  t57314 = -1.*t57313*t56833;
  t57378 = -1.*t56823*t57377;
  t57379 = t57314 + t57378;
  t57395 = t56823*t57313;
  t57396 = -1.*t56833*t57377;
  t57397 = t57395 + t57396;
  t57292 = t56649*t56833;
  t57295 = t56823*t57253;
  t57296 = t57292 + t57295;
  t57389 = t45660*t57375;
  t57390 = t57326*t56811;
  t57391 = t57389 + t57390;
  t57404 = -1.*t56649*t56833;
  t57405 = -1.*t56823*t57253;
  t57406 = t57404 + t57405;
  t57426 = t56826*t56833;
  t57427 = t56823*t56904;
  t57428 = t57426 + t57427;
  t57481 = -1.*t45660*t53660*t56649;
  t57482 = -1.*t56666*t56649*t56811;
  t57483 = t57481 + t57482;
  t57392 = -1.*t57113*t57391;
  t57496 = -1.*t45660*t57375;
  t57497 = -1.*t57326*t56811;
  t57498 = t57496 + t57497;
  t57411 = t57145*t57391;
  t57510 = -1.*t45660*t53660*t57131;
  t57511 = -1.*t56666*t57131*t56811;
  t57512 = t57510 + t57511;
  t57393 = -1.*t56823*t57102*t57384;
  t57399 = t56833*t57102*t57397;
  t57400 = t57392 + t57393 + t57399;
  t57500 = -1.*t57102*t57391;
  t57501 = -1.*t57113*t57377;
  t57502 = -1.*t56666*t45660;
  t57503 = t53660*t56811;
  t57504 = t57502 + t57503;
  t57509 = t57253*t57391;
  t57514 = t57145*t57377;
  t57412 = t57296*t57384;
  t57415 = t57258*t57397;
  t57416 = t57411 + t57412 + t57415;
  t57436 = -1.*t57145*t57391;
  t57447 = t56813*t57391;
  t57552 = -1.*t57253*t57391;
  t57554 = -1.*t57145*t57377;
  t57562 = t56904*t57391;
  t57564 = t56813*t57377;
  t57437 = -1.*t57296*t57384;
  t57438 = -1.*t57258*t57397;
  t57439 = t57436 + t57437 + t57438;
  t57448 = t57428*t57384;
  t57449 = t56908*t57397;
  t57450 = t57447 + t57448 + t57449;
  t57462 = t57113*t57391;
  t57473 = -1.*t56813*t57391;
  t57463 = t56823*t57102*t57384;
  t57464 = -1.*t56833*t57102*t57397;
  t57465 = t57462 + t57463 + t57464;
  t57524 = Power(t56823,2);
  t57526 = Power(t56833,2);
  t57603 = t57102*t57391;
  t57604 = t57113*t57377;
  t57609 = -1.*t56904*t57391;
  t57611 = -1.*t56813*t57377;
  t57474 = -1.*t57428*t57384;
  t57475 = -1.*t56908*t57397;
  t57476 = t57473 + t57474 + t57475;
  t57484 = var2[0]*t56823*t57483;
  t57485 = t18948*t56833*t57483;
  t57486 = t56815*t56904;
  t57487 = t57485 + t57486;
  t57488 = var2[1]*t57487;
  t57489 = -1.*t56815*t56833*t57483;
  t57490 = t18948*t56904;
  t57491 = t57489 + t57490;
  t57492 = var2[2]*t57491;
  t57493 = -1.*t57102*t57377;
  t57494 = t57392 + t57493;
  t57495 = t57253*t57494;
  t57640 = 0.15121*t53660;
  t57641 = -1.*t53660*t57324;
  t57642 = t57640 + t57641;
  t57638 = t57334 + t57325;
  t57505 = -1.*t57504*t57377;
  t57647 = t45660*t57642;
  t57648 = -1.*t57638*t56811;
  t57649 = t57647 + t57648;
  t57651 = t45660*t57638;
  t57652 = t57642*t56811;
  t57653 = t57651 + t57652;
  t57513 = t57512*t57377;
  t57517 = t57313*t56649;
  t57518 = t57253*t57377;
  t57519 = t57517 + t57411 + t57518;
  t57520 = t57102*t57519;
  t57523 = t56823*t57512*t57400;
  t57654 = -1.*t57113*t57653;
  t57528 = -1.*t56823*t57504*t57384;
  t57529 = t56833*t57504*t57397;
  t57658 = t57145*t57653;
  t57534 = t56823*t57512*t57384;
  t57535 = -1.*t56833*t57512*t57397;
  t57538 = t56823*t57504*t57416;
  t57542 = var2[0]*t56823*t57504;
  t57543 = t18948*t57102;
  t57544 = -1.*t56815*t56833*t57504;
  t57545 = t57543 + t57544;
  t57546 = var2[2]*t57545;
  t57547 = t56815*t57102;
  t57548 = t18948*t56833*t57504;
  t57549 = t57547 + t57548;
  t57550 = var2[1]*t57549;
  t57553 = -1.*t57512*t57377;
  t57557 = -1.*t57313*t56649;
  t57558 = -1.*t57253*t57377;
  t57559 = t57557 + t57436 + t57558;
  t57560 = t56904*t57559;
  t57563 = t57483*t57377;
  t57567 = t57313*t56826;
  t57568 = t56904*t57377;
  t57569 = t57567 + t57447 + t57568;
  t57570 = t57253*t57569;
  t57689 = -1.*t57145*t57653;
  t57575 = -1.*t56823*t57512*t57384;
  t57576 = t56833*t57512*t57397;
  t57693 = t56813*t57653;
  t57581 = t56823*t57483*t57384;
  t57582 = -1.*t56833*t57483*t57397;
  t57585 = t56823*t57483*t57439;
  t57586 = t56823*t57512*t57450;
  t57590 = var2[0]*t56823*t57512;
  t57591 = t18948*t56833*t57512;
  t57592 = t56815*t57253;
  t57593 = t57591 + t57592;
  t57594 = var2[1]*t57593;
  t57595 = -1.*t56815*t56833*t57512;
  t57596 = t18948*t57253;
  t57597 = t57595 + t57596;
  t57598 = var2[2]*t57597;
  t57599 = t57102*t57377;
  t57600 = t57462 + t57599;
  t57601 = t56904*t57600;
  t57605 = t57504*t57377;
  t57610 = -1.*t57483*t57377;
  t57614 = -1.*t57313*t56826;
  t57615 = -1.*t56904*t57377;
  t57616 = t57614 + t57473 + t57615;
  t57617 = t57102*t57616;
  t57620 = t56823*t57483*t57465;
  t57716 = t57113*t57653;
  t57623 = t56823*t57504*t57384;
  t57624 = -1.*t56833*t57504*t57397;
  t57720 = -1.*t56813*t57653;
  t57629 = -1.*t56823*t57483*t57384;
  t57630 = t56833*t57483*t57397;
  t57633 = t56823*t57504*t57476;
  t57740 = -1.*t53917*t54564;
  t57741 = -1.*t56641*t56643;
  t57742 = t57740 + t57741;
  t57744 = t56666*t45660*t56826;
  t57745 = -1.*t53660*t56826*t56811;
  t57746 = t57744 + t57745;
  t57750 = t45660*t53660*t56826;
  t57751 = t56666*t56826*t56811;
  t57752 = t57750 + t57751;
  t57754 = t56823*t57742;
  t57755 = -1.*t56833*t57746;
  t57756 = t57754 + t57755;
  t57764 = t45660*t53660*t57313;
  t57765 = t56666*t57313*t56811;
  t57766 = t57764 + t57765;
  t57768 = t56666*t45660*t57313;
  t57769 = -1.*t53660*t57313*t56811;
  t57770 = t57768 + t57769;
  t57767 = -1.*t57113*t57766;
  t57775 = 0.28121*t53917;
  t57776 = -1.*t53917*t57308;
  t57777 = 0.27*t56641*t56643;
  t57778 = t57775 + t57776 + t57777;
  t57780 = t57145*t57766;
  t57786 = t57778*t56833;
  t57787 = t56823*t57770;
  t57788 = t57786 + t57787;
  t57790 = t56823*t57778;
  t57791 = -1.*t56833*t57770;
  t57792 = t57790 + t57791;
  t57807 = t57313*t57742;
  t57809 = t56826*t57778;
  t57826 = Power(t56666,2);
  t57828 = Power(t53660,2);
  t57817 = -1.*t57778*t56649;
  t57743 = t57742*t56833;
  t57747 = t56823*t57746;
  t57748 = t57743 + t57747;
  t57847 = t57766*t56813;
  t57849 = t57752*t57391;
  t57853 = -1.*t57145*t57766;
  t57071 = t56815*t56813;
  t57076 = -1.*t18948*t56908;
  t57084 = t57071 + t57076;
  t57889 = t57113*t57766;
  t57896 = -1.*t57766*t56813;
  t57898 = -1.*t57752*t57391;
  t57736 = t53660*t57326;
  t57737 = -1.*t56666*t57375;
  t57738 = t57736 + t57737;
  t57273 = t56815*t57145;
  t57274 = -1.*t18948*t57258;
  t57275 = t57273 + t57274;
  t57931 = -0.27*t54564*t56641;
  t57932 = 0.27*t53917*t56643;
  t57933 = t57931 + t57932;
  t57934 = t45660*t53660*t57933;
  t57935 = t56666*t57933*t56811;
  t57936 = t57934 + t57935;
  t57938 = t56666*t45660*t57933;
  t57939 = -1.*t53660*t57933*t56811;
  t57940 = t57938 + t57939;
  t57944 = t45660*t53660*t57742;
  t57945 = t56666*t57742*t56811;
  t57946 = t57944 + t57945;
  t57937 = -1.*t57113*t57936;
  t57949 = -0.27*t53917*t54564;
  t57950 = t57949 + t57323;
  t57955 = t56666*t45660*t57742;
  t57956 = -1.*t53660*t57742*t56811;
  t57957 = t57955 + t57956;
  t57952 = t57145*t57936;
  t57954 = t57946*t57391;
  t57963 = t57950*t56833;
  t57964 = t56823*t57940;
  t57965 = t57963 + t57964;
  t57967 = t56823*t57950;
  t57968 = -1.*t56833*t57940;
  t57969 = t57967 + t57968;
  t57973 = t57131*t56833;
  t57974 = t56823*t57957;
  t57975 = t57973 + t57974;
  t57804 = -1.*t57131*t57324;
  t57805 = t57804 + t57557;
  t57812 = t57324*t56649;
  t57813 = t57567 + t57812;
  t57815 = -1.*t57131*t57313;
  t57822 = -1.*t56666*t57131*t57326;
  t57823 = -1.*t53660*t57131*t57375;
  t57824 = t57557 + t57822 + t57823;
  t57991 = t56826*t57950;
  t57998 = -1.*t57950*t56649;
  t57840 = t56666*t56649*t57326;
  t57841 = t53660*t56649*t57375;
  t57842 = t57567 + t57840 + t57841;
  t58020 = t57936*t56813;
  t58024 = -1.*t57145*t57936;
  t58026 = -1.*t57946*t57391;
  t57980 = t56823*t57131;
  t57981 = -1.*t56833*t57957;
  t57982 = t57980 + t57981;
  t57875 = -0.15121*t57742;
  t57876 = -0.15121*t56649;
  t57877 = t57875 + t57876;
  t57878 = var2[12]*t57877;
  t57879 = -1.*t53660*t57326;
  t57880 = t56666*t57375;
  t57881 = t57879 + t57880;
  t58063 = t57113*t57936;
  t58069 = -1.*t57936*t56813;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t18948*t56813 - 1.*t56815*t56908)*var2[1] + t57084*var2[2];
  p_output1[10]=(t56815*t56833*t57102 - 1.*t18948*t57113)*var2[1] + (t18948*t56833*t57102 + t56815*t57113)*var2[2];
  p_output1[11]=(-1.*t18948*t57145 - 1.*t56815*t57258)*var2[1] + t57275*var2[2];
  p_output1[12]=t56908*var2[0] - 1.*t18948*t57284*var2[1] + t56815*t57284*var2[2] + (t57296*(t56833*t57102*t57379 + t56833*t57102*t57384) + t57258*t57400 + t56823*t57102*(t57258*t57379 + t57258*t57384 + t57296*t57397 + t57397*t57406) - 1.*t56833*t57102*t57416)*var2[3];
  p_output1[13]=-1.*t56833*t57102*var2[0] + t18948*t56823*t57102*var2[1] - 1.*t56815*t56823*t57102*var2[2] + ((-1.*t57258*t57379 - 1.*t57258*t57384 - 1.*t57296*t57397 - 1.*t57397*t57406)*t57428 + t57296*(t56908*t57379 + t56908*t57384 + t57284*t57397 + t57397*t57428) + t56908*t57439 + t57258*t57450)*var2[3];
  p_output1[14]=t57258*var2[0] - 1.*t18948*t57406*var2[1] + t56815*t57406*var2[2] + ((-1.*t56833*t57102*t57379 - 1.*t56833*t57102*t57384)*t57428 + t56823*t57102*(-1.*t56908*t57379 - 1.*t56908*t57384 - 1.*t57284*t57397 - 1.*t57397*t57428) + t56908*t57465 - 1.*t56833*t57102*t57476)*var2[3];
  p_output1[15]=t57484 + t57488 + t57492 + (t57523 + t57296*(t57500 + t57501 - 1.*t57102*t57498*t57524 - 1.*t57102*t57498*t57526 + t57528 + t57529) + t56823*t57102*(-1.*t56833*t57258*t57498 + t56823*t57296*t57498 + t57509 + t57514 + t57534 + t57535) + t57538)*var2[3] + (t57495 + t57145*(-1.*t57102*t57498 + t57500 + t57501 + t57505) + t57113*(t57253*t57498 + t57509 + t57513 + t57514) + t57520)*var2[4];
  p_output1[16]=t57542 + t57546 + t57550 + (t57428*(t56833*t57258*t57498 - 1.*t56823*t57296*t57498 + t57552 + t57554 + t57575 + t57576) + t57296*(-1.*t56833*t56908*t57498 + t56823*t57428*t57498 + t57562 + t57564 + t57581 + t57582) + t57585 + t57586)*var2[3] + (t56813*(-1.*t57253*t57498 + t57552 + t57553 + t57554) + t57560 + t57145*(t56904*t57498 + t57562 + t57563 + t57564) + t57570)*var2[4];
  p_output1[17]=t57590 + t57594 + t57598 + (t57620 + t57428*(t57102*t57498*t57524 + t57102*t57498*t57526 + t57603 + t57604 + t57623 + t57624) + t56823*t57102*(t56833*t56908*t57498 - 1.*t56823*t57428*t57498 + t57609 + t57611 + t57629 + t57630) + t57633)*var2[3] + (t57601 + t56813*(t57102*t57498 + t57603 + t57604 + t57605) + t57113*(-1.*t56904*t57498 + t57609 + t57610 + t57611) + t57617)*var2[4];
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
  p_output1[36]=t57484 + t57488 + t57492 + (t57523 + t57538 + t57296*(t57500 + t57528 + t57529 - 1.*t57102*t57524*t57649 - 1.*t57102*t57526*t57649 + t57654) + t56823*t57102*(t57509 + t57534 + t57535 - 1.*t56833*t57258*t57649 + t56823*t57296*t57649 + t57658))*var2[3] + (t57495 + t57520 + t57145*(t57500 + t57505 - 1.*t57102*t57649 + t57654) + t57113*(t57509 + t57513 + t57253*t57649 + t57658))*var2[4] + t56649*(t56666*t57326 + t53660*t57375 - 1.*t56666*t57638 + t53660*t57642)*var2[5];
  p_output1[37]=t57542 + t57546 + t57550 + (t57585 + t57586 + t57428*(t57552 + t57575 + t57576 + t56833*t57258*t57649 - 1.*t56823*t57296*t57649 + t57689) + t57296*(t57562 + t57581 + t57582 - 1.*t56833*t56908*t57649 + t56823*t57428*t57649 + t57693))*var2[3] + (t57560 + t57570 + t56813*(t57552 + t57553 - 1.*t57253*t57649 + t57689) + t57145*(t57562 + t57563 + t56904*t57649 + t57693))*var2[4] + (t56649*(-1.*t53660*t56649*t57326 + t56649*t56666*t57375 + t53660*t56649*t57638 + t56649*t56666*t57642) + t56826*(t53660*t57131*t57326 - 1.*t56666*t57131*t57375 - 1.*t53660*t57131*t57638 - 1.*t56666*t57131*t57642))*var2[5];
  p_output1[38]=t57590 + t57594 + t57598 + (t57620 + t57633 + t57428*(t57603 + t57623 + t57624 + t57102*t57524*t57649 + t57102*t57526*t57649 + t57716) + t56823*t57102*(t57609 + t57629 + t57630 + t56833*t56908*t57649 - 1.*t56823*t57428*t57649 + t57720))*var2[3] + (t57601 + t57617 + t56813*(t57603 + t57605 + t57102*t57649 + t57716) + t57113*(t57609 + t57610 - 1.*t56904*t57649 + t57720))*var2[4] + t56826*(-1.*t56666*t57326 - 1.*t53660*t57375 + t56666*t57638 - 1.*t53660*t57642)*var2[5];
  p_output1[39]=t57748*var2[0] + (t56815*t57752 - 1.*t18948*t57756)*var2[1] + (t18948*t57752 + t56815*t57756)*var2[2] + (t57400*t57428 + t57296*(t57767 - 1.*t56823*t57102*t57788 + t56833*t57102*t57792) + t56823*t57102*(t57447 + t57448 + t57449 + t57780 + t57296*t57788 + t57258*t57792))*var2[3] + (t56813*t57494 + t57145*(t57767 - 1.*t57102*t57770) + t57113*(t57447 + t57567 + t57568 + t57253*t57770 + t56649*t57778 + t57780))*var2[4] + t56826*t57738*var2[5];
  p_output1[40]=(t57428*t57450 + t57439*t57748 + t57296*(t57384*t57748 + t57397*t57756 + t57428*t57788 + t56908*t57792 + t57847 + t57849) + t57428*(t57473 + t57474 + t57475 - 1.*t57296*t57788 - 1.*t57258*t57792 + t57853))*var2[3] + (t56813*t57569 + t57559*t57752 + t57145*(t57377*t57746 + t56904*t57770 + t57807 + t57809 + t57847 + t57849) + t56813*(t57473 + t57614 + t57615 - 1.*t57253*t57770 + t57817 + t57853))*var2[4] + (t57742*t57824 + t56649*(t56666*t56826*t57326 + t53660*t56826*t57375 + t57807 + t57809 + t56649*t57313*t57826 + t56649*t57313*t57828) + t56826*(-1.*t56649*t56666*t57326 - 1.*t53660*t56649*t57375 + t57614 + t57817 - 1.*t57131*t57313*t57826 - 1.*t57131*t57313*t57828) + t56826*t57842)*var2[5] + (t57742*t57805 + t56649*(t56826*t57324 + t57517 + t57807 + t57809) + t56826*t57813 + t56826*(-1.*t56649*t57324 + t57614 + t57815 + t57817))*var2[12];
  p_output1[41]=t57878 + t57428*var2[0] + t57084*var2[1] + (t18948*t56813 + t56815*t56908)*var2[2] + (t57465*t57748 + t57428*(t56823*t57102*t57788 - 1.*t56833*t57102*t57792 + t57889) + t56823*t57102*(-1.*t57384*t57748 - 1.*t57397*t57756 - 1.*t57428*t57788 - 1.*t56908*t57792 + t57896 + t57898))*var2[3] + (t57600*t57752 + t56813*(t57102*t57770 + t57889) + t57113*(-1.*t57313*t57742 - 1.*t57377*t57746 - 1.*t56904*t57770 - 1.*t56826*t57778 + t57896 + t57898))*var2[4] + t57742*t57881*var2[5];
  p_output1[42]=t57296*var2[0] + t57275*var2[1] + (t18948*t57145 + t56815*t57258)*var2[2] + (t57296*(t57937 - 1.*t56823*t57102*t57965 + t56833*t57102*t57969) + t57400*t57975 + t56823*t57102*(t57952 + t57954 + t57296*t57965 + t57258*t57969 + t57384*t57975 + t57397*t57982))*var2[3] + (t57145*(t57937 - 1.*t57102*t57940) + t57494*t57946 + t57113*(t57131*t57313 + t57253*t57940 + t56649*t57950 + t57952 + t57954 + t57377*t57957))*var2[4] + t57131*t57738*var2[5] + (0.28121*t54564 - 0.27*Power(t54564,2) - 1.*t54564*t57308)*var2[13];
  p_output1[43]=(t57296*t57439 + t57450*t57975 + t57296*(t57411 + t57412 + t57415 + t57428*t57965 + t56908*t57969 + t58020) + t57428*(-1.*t57296*t57965 - 1.*t57258*t57969 - 1.*t57384*t57975 - 1.*t57397*t57982 + t58024 + t58026))*var2[3] + (t57145*t57559 + t57569*t57946 + t57145*(t57411 + t57517 + t57518 + t56904*t57940 + t57991 + t58020) + t56813*(t57815 - 1.*t57253*t57940 - 1.*t57377*t57957 + t57998 + t58024 + t58026))*var2[4] + (t56649*t57824 + t57131*t57842 + t56649*(t56666*t57131*t57326 + t53660*t57131*t57375 + t57517 + t56649*t57826*t57933 + t56649*t57828*t57933 + t57991) + t56826*(-1.*t56666*t57326*t57742 - 1.*t53660*t57375*t57742 + t57815 - 1.*t57131*t57826*t57933 - 1.*t57131*t57828*t57933 + t57998))*var2[5] + (t56649*t57805 + t57131*t57813 + t56649*(t57131*t57324 + t57517 + t56649*t57933 + t57991) + t56826*(-1.*t57324*t57742 + t57815 - 1.*t57131*t57933 + t57998))*var2[12];
  p_output1[44]=t57878 + t57975*var2[0] + (t56815*t57946 - 1.*t18948*t57982)*var2[1] + (t18948*t57946 + t56815*t57982)*var2[2] + (t57296*t57465 + t57428*(t56823*t57102*t57965 - 1.*t56833*t57102*t57969 + t58063) + t56823*t57102*(t57436 + t57437 + t57438 - 1.*t57428*t57965 - 1.*t56908*t57969 + t58069))*var2[3] + (t57145*t57600 + t56813*(t57102*t57940 + t58063) + t57113*(t57436 + t57557 + t57558 - 1.*t56904*t57940 - 1.*t56826*t57950 + t58069))*var2[4] + t56649*t57881*var2[5] + (-0.28121*t56643 + 0.27*t54564*t56643 + t56643*t57308)*var2[13];
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
