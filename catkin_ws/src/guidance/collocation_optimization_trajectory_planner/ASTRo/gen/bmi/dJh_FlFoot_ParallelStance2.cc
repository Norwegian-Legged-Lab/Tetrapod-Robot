/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:52:35 GMT+02:00
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
  double t46170;
  double t46257;
  double t46280;
  double t46282;
  double t46283;
  double t46290;
  double t46291;
  double t46299;
  double t40404;
  double t41310;
  double t46300;
  double t46305;
  double t46295;
  double t46301;
  double t46302;
  double t19394;
  double t46306;
  double t46307;
  double t46309;
  double t46310;
  double t46311;
  double t46386;
  double t46395;
  double t46403;
  double t46406;
  double t46409;
  double t46410;
  double t46424;
  double t46426;
  double t46427;
  double t46430;
  double t46431;
  double t46432;
  double t46445;
  double t46446;
  double t46447;
  double t46449;
  double t46450;
  double t46451;
  double t46458;
  double t46459;
  double t46463;
  double t46464;
  double t46466;
  double t46468;
  double t46485;
  double t46487;
  double t46488;
  double t46498;
  double t46500;
  double t46501;
  double t46502;
  double t46505;
  double t46511;
  double t46514;
  double t46515;
  double t46516;
  double t46519;
  double t46520;
  double t46521;
  double t46522;
  double t46523;
  double t46497;
  double t46506;
  double t46507;
  double t46509;
  double t46524;
  double t46528;
  double t46529;
  double t46530;
  double t46532;
  double t46533;
  double t46536;
  double t46538;
  double t46539;
  double t46546;
  double t46547;
  double t46548;
  double t46510;
  double t46540;
  double t46542;
  double t46557;
  double t46559;
  double t46561;
  double t46493;
  double t46494;
  double t46496;
  double t46552;
  double t46553;
  double t46554;
  double t46572;
  double t46573;
  double t46574;
  double t46602;
  double t46608;
  double t46609;
  double t46703;
  double t46705;
  double t46706;
  double t46555;
  double t46727;
  double t46728;
  double t46729;
  double t46581;
  double t46759;
  double t46760;
  double t46761;
  double t46556;
  double t46562;
  double t46563;
  double t46741;
  double t46742;
  double t46744;
  double t46745;
  double t46746;
  double t46758;
  double t46765;
  double t46582;
  double t46583;
  double t46585;
  double t46622;
  double t46648;
  double t46842;
  double t46847;
  double t46860;
  double t46864;
  double t46631;
  double t46632;
  double t46633;
  double t46652;
  double t46656;
  double t46657;
  double t46671;
  double t46694;
  double t46673;
  double t46674;
  double t46675;
  double t46778;
  double t46782;
  double t46956;
  double t46959;
  double t46979;
  double t46984;
  double t46696;
  double t46697;
  double t46698;
  double t46708;
  double t46709;
  double t46710;
  double t46715;
  double t46716;
  double t46717;
  double t46718;
  double t46719;
  double t46720;
  double t46723;
  double t46724;
  double t46725;
  double t47121;
  double t47124;
  double t47131;
  double t47148;
  double t47168;
  double t46749;
  double t47234;
  double t47250;
  double t47251;
  double t47256;
  double t47257;
  double t47259;
  double t46762;
  double t46769;
  double t46770;
  double t46771;
  double t46773;
  double t46777;
  double t47260;
  double t46788;
  double t46789;
  double t47292;
  double t46799;
  double t46801;
  double t46817;
  double t46822;
  double t46823;
  double t46824;
  double t46826;
  double t46833;
  double t46835;
  double t46836;
  double t46838;
  double t46839;
  double t46843;
  double t46850;
  double t46854;
  double t46855;
  double t46856;
  double t46862;
  double t46873;
  double t46874;
  double t46876;
  double t46877;
  double t47809;
  double t46884;
  double t46887;
  double t47831;
  double t46896;
  double t46900;
  double t46912;
  double t46915;
  double t46921;
  double t46928;
  double t46935;
  double t46936;
  double t46937;
  double t46939;
  double t46940;
  double t46941;
  double t46944;
  double t46945;
  double t46946;
  double t46954;
  double t46963;
  double t46980;
  double t46990;
  double t46995;
  double t47008;
  double t47011;
  double t47015;
  double t47914;
  double t47029;
  double t47031;
  double t47930;
  double t47047;
  double t47048;
  double t47054;
  double t47996;
  double t48001;
  double t48005;
  double t48017;
  double t48091;
  double t48101;
  double t48191;
  double t48192;
  double t48196;
  double t48207;
  double t48219;
  double t48247;
  double t48318;
  double t48321;
  double t48335;
  double t48359;
  double t48368;
  double t48476;
  double t48348;
  double t48517;
  double t48540;
  double t48550;
  double t48578;
  double t48653;
  double t48775;
  double t48777;
  double t48778;
  double t48780;
  double t48782;
  double t48784;
  double t48823;
  double t48826;
  double t48877;
  double t48881;
  double t48845;
  double t48014;
  double t48144;
  double t48154;
  double t49046;
  double t49083;
  double t49126;
  double t46416;
  double t46417;
  double t46418;
  double t49369;
  double t49400;
  double t49402;
  double t48160;
  double t48161;
  double t48170;
  double t46479;
  double t46480;
  double t46481;
  double t49571;
  double t49573;
  double t49575;
  double t49577;
  double t49581;
  double t49582;
  double t49591;
  double t49593;
  double t49594;
  double t49612;
  double t49626;
  double t49627;
  double t49589;
  double t49648;
  double t49651;
  double t49670;
  double t49700;
  double t49708;
  double t49658;
  double t49784;
  double t49787;
  double t49809;
  double t49814;
  double t49816;
  double t49819;
  double t49668;
  double t49837;
  double t49853;
  double t49856;
  double t48817;
  double t48819;
  double t48832;
  double t48834;
  double t48838;
  double t48862;
  double t48864;
  double t48867;
  double t49952;
  double t50028;
  double t48971;
  double t49007;
  double t49019;
  double t50086;
  double t50094;
  double t50099;
  double t49916;
  double t49918;
  double t49922;
  double t49278;
  double t49281;
  double t49285;
  double t49294;
  double t49296;
  double t49300;
  double t49302;
  double t50476;
  double t50541;
  t46170 = Cos(var1[7]);
  t46257 = Cos(var1[8]);
  t46280 = t46170*t46257;
  t46282 = Sin(var1[7]);
  t46283 = Sin(var1[8]);
  t46290 = t46282*t46283;
  t46291 = t46280 + t46290;
  t46299 = Cos(var1[5]);
  t40404 = Cos(var1[6]);
  t41310 = Sin(var1[5]);
  t46300 = Sin(var1[6]);
  t46305 = Cos(var1[3]);
  t46295 = t40404*t41310*t46291;
  t46301 = t46299*t46300*t46291;
  t46302 = t46295 + t46301;
  t19394 = Sin(var1[3]);
  t46306 = Cos(var1[4]);
  t46307 = -1.*t46257*t46282;
  t46309 = t46170*t46283;
  t46310 = t46307 + t46309;
  t46311 = t46306*t46310;
  t46386 = Sin(var1[4]);
  t46395 = t46299*t40404*t46291;
  t46403 = -1.*t41310*t46300*t46291;
  t46406 = t46395 + t46403;
  t46409 = -1.*t46386*t46406;
  t46410 = t46311 + t46409;
  t46424 = -1.*t40404*t41310;
  t46426 = -1.*t46299*t46300;
  t46427 = t46424 + t46426;
  t46430 = t46299*t40404;
  t46431 = -1.*t41310*t46300;
  t46432 = t46430 + t46431;
  t46445 = t46257*t46282;
  t46446 = -1.*t46170*t46283;
  t46447 = t46445 + t46446;
  t46449 = t40404*t41310*t46447;
  t46450 = t46299*t46300*t46447;
  t46451 = t46449 + t46450;
  t46458 = t46306*t46291;
  t46459 = t46299*t40404*t46447;
  t46463 = -1.*t41310*t46300*t46447;
  t46464 = t46459 + t46463;
  t46466 = -1.*t46386*t46464;
  t46468 = t46458 + t46466;
  t46485 = -1.*t46386*t46310;
  t46487 = -1.*t46306*t46406;
  t46488 = t46485 + t46487;
  t46498 = -1.*t46257;
  t46500 = 1. + t46498;
  t46501 = 0.50321*t46500;
  t46502 = 0.23321*t46257;
  t46505 = t46501 + t46502;
  t46511 = -1.*t40404;
  t46514 = 1. + t46511;
  t46515 = 0.15121*t46514;
  t46516 = -1.*t46170;
  t46519 = 1. + t46516;
  t46520 = 0.28121*t46519;
  t46521 = t46170*t46505;
  t46522 = -0.27*t46282*t46283;
  t46523 = t46520 + t46521 + t46522;
  t46497 = 0.28121*t46282;
  t46506 = -1.*t46505*t46282;
  t46507 = -0.27*t46170*t46283;
  t46509 = t46497 + t46506 + t46507;
  t46524 = t40404*t46523;
  t46528 = t46515 + t46524;
  t46529 = t46299*t46528;
  t46530 = 0.15121*t40404;
  t46532 = -0.15121*t46300;
  t46533 = t46300*t46523;
  t46536 = t46515 + t46530 + t46532 + t46533;
  t46538 = -1.*t41310*t46536;
  t46539 = t46529 + t46538;
  t46546 = t46386*t46509;
  t46547 = t46306*t46539;
  t46548 = t46546 + t46547;
  t46510 = -1.*t46386*t46509;
  t46540 = -1.*t46306*t46539;
  t46542 = t46510 + t46540;
  t46557 = t46306*t46509;
  t46559 = -1.*t46386*t46539;
  t46561 = t46557 + t46559;
  t46493 = t46386*t46291;
  t46494 = t46306*t46464;
  t46496 = t46493 + t46494;
  t46552 = t41310*t46528;
  t46553 = t46299*t46536;
  t46554 = t46552 + t46553;
  t46572 = -1.*t46386*t46291;
  t46573 = -1.*t46306*t46464;
  t46574 = t46572 + t46573;
  t46602 = t46386*t46310;
  t46608 = t46306*t46406;
  t46609 = t46602 + t46608;
  t46703 = -1.*t40404*t41310*t46291;
  t46705 = -1.*t46299*t46300*t46291;
  t46706 = t46703 + t46705;
  t46555 = -1.*t46432*t46554;
  t46727 = -1.*t41310*t46528;
  t46728 = -1.*t46299*t46536;
  t46729 = t46727 + t46728;
  t46581 = t46451*t46554;
  t46759 = -1.*t40404*t41310*t46447;
  t46760 = -1.*t46299*t46300*t46447;
  t46761 = t46759 + t46760;
  t46556 = -1.*t46306*t46427*t46548;
  t46562 = t46386*t46427*t46561;
  t46563 = t46555 + t46556 + t46562;
  t46741 = -1.*t46427*t46554;
  t46742 = -1.*t46432*t46539;
  t46744 = -1.*t46299*t40404;
  t46745 = t41310*t46300;
  t46746 = t46744 + t46745;
  t46758 = t46464*t46554;
  t46765 = t46451*t46539;
  t46582 = t46496*t46548;
  t46583 = t46468*t46561;
  t46585 = t46581 + t46582 + t46583;
  t46622 = -1.*t46451*t46554;
  t46648 = t46302*t46554;
  t46842 = -1.*t46464*t46554;
  t46847 = -1.*t46451*t46539;
  t46860 = t46406*t46554;
  t46864 = t46302*t46539;
  t46631 = -1.*t46496*t46548;
  t46632 = -1.*t46468*t46561;
  t46633 = t46622 + t46631 + t46632;
  t46652 = t46609*t46548;
  t46656 = t46410*t46561;
  t46657 = t46648 + t46652 + t46656;
  t46671 = t46432*t46554;
  t46694 = -1.*t46302*t46554;
  t46673 = t46306*t46427*t46548;
  t46674 = -1.*t46386*t46427*t46561;
  t46675 = t46671 + t46673 + t46674;
  t46778 = Power(t46306,2);
  t46782 = Power(t46386,2);
  t46956 = t46427*t46554;
  t46959 = t46432*t46539;
  t46979 = -1.*t46406*t46554;
  t46984 = -1.*t46302*t46539;
  t46696 = -1.*t46609*t46548;
  t46697 = -1.*t46410*t46561;
  t46698 = t46694 + t46696 + t46697;
  t46708 = var2[0]*t46306*t46706;
  t46709 = t19394*t46386*t46706;
  t46710 = t46305*t46406;
  t46715 = t46709 + t46710;
  t46716 = var2[1]*t46715;
  t46717 = -1.*t46305*t46386*t46706;
  t46718 = t19394*t46406;
  t46719 = t46717 + t46718;
  t46720 = var2[2]*t46719;
  t46723 = -1.*t46427*t46539;
  t46724 = t46555 + t46723;
  t46725 = t46464*t46724;
  t47121 = -0.15121*t40404;
  t47124 = t47121 + t46524;
  t47131 = 0.15121*t46300;
  t47148 = -1.*t46300*t46523;
  t47168 = t47131 + t47148;
  t46749 = -1.*t46746*t46539;
  t47234 = -1.*t41310*t47124;
  t47250 = t46299*t47168;
  t47251 = t47234 + t47250;
  t47256 = t46299*t47124;
  t47257 = t41310*t47168;
  t47259 = t47256 + t47257;
  t46762 = t46761*t46539;
  t46769 = t46509*t46291;
  t46770 = t46464*t46539;
  t46771 = t46769 + t46581 + t46770;
  t46773 = t46427*t46771;
  t46777 = t46306*t46761*t46563;
  t47260 = -1.*t46432*t47259;
  t46788 = -1.*t46306*t46746*t46548;
  t46789 = t46386*t46746*t46561;
  t47292 = t46451*t47259;
  t46799 = t46306*t46761*t46548;
  t46801 = -1.*t46386*t46761*t46561;
  t46817 = t46306*t46746*t46585;
  t46822 = var2[0]*t46306*t46746;
  t46823 = t19394*t46427;
  t46824 = -1.*t46305*t46386*t46746;
  t46826 = t46823 + t46824;
  t46833 = var2[2]*t46826;
  t46835 = t46305*t46427;
  t46836 = t19394*t46386*t46746;
  t46838 = t46835 + t46836;
  t46839 = var2[1]*t46838;
  t46843 = -1.*t46761*t46539;
  t46850 = -1.*t46509*t46291;
  t46854 = -1.*t46464*t46539;
  t46855 = t46850 + t46622 + t46854;
  t46856 = t46406*t46855;
  t46862 = t46706*t46539;
  t46873 = t46509*t46310;
  t46874 = t46406*t46539;
  t46876 = t46873 + t46648 + t46874;
  t46877 = t46464*t46876;
  t47809 = -1.*t46451*t47259;
  t46884 = -1.*t46306*t46761*t46548;
  t46887 = t46386*t46761*t46561;
  t47831 = t46302*t47259;
  t46896 = t46306*t46706*t46548;
  t46900 = -1.*t46386*t46706*t46561;
  t46912 = t46306*t46706*t46633;
  t46915 = t46306*t46761*t46657;
  t46921 = var2[0]*t46306*t46761;
  t46928 = t19394*t46386*t46761;
  t46935 = t46305*t46464;
  t46936 = t46928 + t46935;
  t46937 = var2[1]*t46936;
  t46939 = -1.*t46305*t46386*t46761;
  t46940 = t19394*t46464;
  t46941 = t46939 + t46940;
  t46944 = var2[2]*t46941;
  t46945 = t46427*t46539;
  t46946 = t46671 + t46945;
  t46954 = t46406*t46946;
  t46963 = t46746*t46539;
  t46980 = -1.*t46706*t46539;
  t46990 = -1.*t46509*t46310;
  t46995 = -1.*t46406*t46539;
  t47008 = t46990 + t46694 + t46995;
  t47011 = t46427*t47008;
  t47015 = t46306*t46706*t46675;
  t47914 = t46432*t47259;
  t47029 = t46306*t46746*t46548;
  t47031 = -1.*t46386*t46746*t46561;
  t47930 = -1.*t46302*t47259;
  t47047 = -1.*t46306*t46706*t46548;
  t47048 = t46386*t46706*t46561;
  t47054 = t46306*t46746*t46698;
  t47996 = -1.*t46170*t46257;
  t48001 = -1.*t46282*t46283;
  t48005 = t47996 + t48001;
  t48017 = t46299*t40404*t46310;
  t48091 = -1.*t41310*t46300*t46310;
  t48101 = t48017 + t48091;
  t48191 = t40404*t41310*t46310;
  t48192 = t46299*t46300*t46310;
  t48196 = t48191 + t48192;
  t48207 = t46306*t48005;
  t48219 = -1.*t46386*t48101;
  t48247 = t48207 + t48219;
  t48318 = t40404*t41310*t46509;
  t48321 = t46299*t46300*t46509;
  t48335 = t48318 + t48321;
  t48359 = t46299*t40404*t46509;
  t48368 = -1.*t41310*t46300*t46509;
  t48476 = t48359 + t48368;
  t48348 = -1.*t46432*t48335;
  t48517 = 0.28121*t46170;
  t48540 = -1.*t46170*t46505;
  t48550 = 0.27*t46282*t46283;
  t48578 = t48517 + t48540 + t48550;
  t48653 = t46451*t48335;
  t48775 = t46386*t48578;
  t48777 = t46306*t48476;
  t48778 = t48775 + t48777;
  t48780 = t46306*t48578;
  t48782 = -1.*t46386*t48476;
  t48784 = t48780 + t48782;
  t48823 = t46509*t48005;
  t48826 = t46310*t48578;
  t48877 = Power(t40404,2);
  t48881 = Power(t46300,2);
  t48845 = -1.*t48578*t46291;
  t48014 = t46386*t48005;
  t48144 = t46306*t48101;
  t48154 = t48014 + t48144;
  t49046 = t48335*t46302;
  t49083 = t48196*t46554;
  t49126 = -1.*t46451*t48335;
  t46416 = t46305*t46302;
  t46417 = -1.*t19394*t46410;
  t46418 = t46416 + t46417;
  t49369 = t46432*t48335;
  t49400 = -1.*t48335*t46302;
  t49402 = -1.*t48196*t46554;
  t48160 = t46300*t46528;
  t48161 = -1.*t40404*t46536;
  t48170 = t48160 + t48161;
  t46479 = t46305*t46451;
  t46480 = -1.*t19394*t46468;
  t46481 = t46479 + t46480;
  t49571 = -0.27*t46257*t46282;
  t49573 = 0.27*t46170*t46283;
  t49575 = t49571 + t49573;
  t49577 = t40404*t41310*t49575;
  t49581 = t46299*t46300*t49575;
  t49582 = t49577 + t49581;
  t49591 = t46299*t40404*t49575;
  t49593 = -1.*t41310*t46300*t49575;
  t49594 = t49591 + t49593;
  t49612 = t40404*t41310*t48005;
  t49626 = t46299*t46300*t48005;
  t49627 = t49612 + t49626;
  t49589 = -1.*t46432*t49582;
  t49648 = -0.27*t46170*t46257;
  t49651 = t49648 + t46522;
  t49670 = t46299*t40404*t48005;
  t49700 = -1.*t41310*t46300*t48005;
  t49708 = t49670 + t49700;
  t49658 = t46451*t49582;
  t49784 = t46386*t49651;
  t49787 = t46306*t49594;
  t49809 = t49784 + t49787;
  t49814 = t46306*t49651;
  t49816 = -1.*t46386*t49594;
  t49819 = t49814 + t49816;
  t49668 = t49627*t46554;
  t49837 = t46386*t46447;
  t49853 = t46306*t49708;
  t49856 = t49837 + t49853;
  t48817 = -1.*t46447*t46523;
  t48819 = t48817 + t46850;
  t48832 = t46523*t46291;
  t48834 = t46873 + t48832;
  t48838 = -1.*t46447*t46509;
  t48862 = -1.*t40404*t46447*t46528;
  t48864 = -1.*t46300*t46447*t46536;
  t48867 = t46850 + t48862 + t48864;
  t49952 = t46310*t49651;
  t50028 = -1.*t49651*t46291;
  t48971 = t40404*t46291*t46528;
  t49007 = t46300*t46291*t46536;
  t49019 = t46873 + t48971 + t49007;
  t50086 = t49582*t46302;
  t50094 = -1.*t46451*t49582;
  t50099 = -1.*t49627*t46554;
  t49916 = t46306*t46447;
  t49918 = -1.*t46386*t49708;
  t49922 = t49916 + t49918;
  t49278 = 0.15121*t48005;
  t49281 = 0.15121*t46291;
  t49285 = t49278 + t49281;
  t49294 = var2[6]*t49285;
  t49296 = -1.*t46300*t46528;
  t49300 = t40404*t46536;
  t49302 = t49296 + t49300;
  t50476 = t46432*t49582;
  t50541 = -1.*t49582*t46302;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t19394*t46302 - 1.*t46305*t46410)*var2[1] + t46418*var2[2];
  p_output1[10]=(t46305*t46386*t46427 - 1.*t19394*t46432)*var2[1] + (t19394*t46386*t46427 + t46305*t46432)*var2[2];
  p_output1[11]=(-1.*t19394*t46451 - 1.*t46305*t46468)*var2[1] + t46481*var2[2];
  p_output1[12]=t46410*var2[0] - 1.*t19394*t46488*var2[1] + t46305*t46488*var2[2] + (t46496*(t46386*t46427*t46542 + t46386*t46427*t46548) + t46468*t46563 + t46306*t46427*(t46468*t46542 + t46468*t46548 + t46496*t46561 + t46561*t46574) - 1.*t46386*t46427*t46585)*var2[3];
  p_output1[13]=-1.*t46386*t46427*var2[0] + t19394*t46306*t46427*var2[1] - 1.*t46305*t46306*t46427*var2[2] + ((-1.*t46468*t46542 - 1.*t46468*t46548 - 1.*t46496*t46561 - 1.*t46561*t46574)*t46609 + t46496*(t46410*t46542 + t46410*t46548 + t46488*t46561 + t46561*t46609) + t46410*t46633 + t46468*t46657)*var2[3];
  p_output1[14]=t46468*var2[0] - 1.*t19394*t46574*var2[1] + t46305*t46574*var2[2] + ((-1.*t46386*t46427*t46542 - 1.*t46386*t46427*t46548)*t46609 + t46306*t46427*(-1.*t46410*t46542 - 1.*t46410*t46548 - 1.*t46488*t46561 - 1.*t46561*t46609) + t46410*t46675 - 1.*t46386*t46427*t46698)*var2[3];
  p_output1[15]=t46708 + t46716 + t46720 + (t46777 + t46496*(t46741 + t46742 - 1.*t46427*t46729*t46778 - 1.*t46427*t46729*t46782 + t46788 + t46789) + t46306*t46427*(-1.*t46386*t46468*t46729 + t46306*t46496*t46729 + t46758 + t46765 + t46799 + t46801) + t46817)*var2[3] + (t46725 + t46451*(-1.*t46427*t46729 + t46741 + t46742 + t46749) + t46432*(t46464*t46729 + t46758 + t46762 + t46765) + t46773)*var2[4];
  p_output1[16]=t46822 + t46833 + t46839 + (t46609*(t46386*t46468*t46729 - 1.*t46306*t46496*t46729 + t46842 + t46847 + t46884 + t46887) + t46496*(-1.*t46386*t46410*t46729 + t46306*t46609*t46729 + t46860 + t46864 + t46896 + t46900) + t46912 + t46915)*var2[3] + (t46302*(-1.*t46464*t46729 + t46842 + t46843 + t46847) + t46856 + t46451*(t46406*t46729 + t46860 + t46862 + t46864) + t46877)*var2[4];
  p_output1[17]=t46921 + t46937 + t46944 + (t47015 + t46609*(t46427*t46729*t46778 + t46427*t46729*t46782 + t46956 + t46959 + t47029 + t47031) + t46306*t46427*(t46386*t46410*t46729 - 1.*t46306*t46609*t46729 + t46979 + t46984 + t47047 + t47048) + t47054)*var2[3] + (t46954 + t46302*(t46427*t46729 + t46956 + t46959 + t46963) + t46432*(-1.*t46406*t46729 + t46979 + t46980 + t46984) + t47011)*var2[4];
  p_output1[18]=t46708 + t46716 + t46720 + (t46777 + t46817 + t46496*(t46741 + t46788 + t46789 - 1.*t46427*t46778*t47251 - 1.*t46427*t46782*t47251 + t47260) + t46306*t46427*(t46758 + t46799 + t46801 - 1.*t46386*t46468*t47251 + t46306*t46496*t47251 + t47292))*var2[3] + (t46725 + t46773 + t46451*(t46741 + t46749 - 1.*t46427*t47251 + t47260) + t46432*(t46758 + t46762 + t46464*t47251 + t47292))*var2[4] + t46291*(t40404*t46528 + t46300*t46536 - 1.*t40404*t47124 + t46300*t47168)*var2[5];
  p_output1[19]=t46822 + t46833 + t46839 + (t46912 + t46915 + t46609*(t46842 + t46884 + t46887 + t46386*t46468*t47251 - 1.*t46306*t46496*t47251 + t47809) + t46496*(t46860 + t46896 + t46900 - 1.*t46386*t46410*t47251 + t46306*t46609*t47251 + t47831))*var2[3] + (t46856 + t46877 + t46302*(t46842 + t46843 - 1.*t46464*t47251 + t47809) + t46451*(t46860 + t46862 + t46406*t47251 + t47831))*var2[4] + (t46291*(-1.*t46291*t46300*t46528 + t40404*t46291*t46536 + t46291*t46300*t47124 + t40404*t46291*t47168) + t46310*(t46300*t46447*t46528 - 1.*t40404*t46447*t46536 - 1.*t46300*t46447*t47124 - 1.*t40404*t46447*t47168))*var2[5];
  p_output1[20]=t46921 + t46937 + t46944 + (t47015 + t47054 + t46609*(t46956 + t47029 + t47031 + t46427*t46778*t47251 + t46427*t46782*t47251 + t47914) + t46306*t46427*(t46979 + t47047 + t47048 + t46386*t46410*t47251 - 1.*t46306*t46609*t47251 + t47930))*var2[3] + (t46954 + t47011 + t46302*(t46956 + t46963 + t46427*t47251 + t47914) + t46432*(t46979 + t46980 - 1.*t46406*t47251 + t47930))*var2[4] + t46310*(-1.*t40404*t46528 - 1.*t46300*t46536 + t40404*t47124 - 1.*t46300*t47168)*var2[5];
  p_output1[21]=t48154*var2[0] + (t46305*t48196 - 1.*t19394*t48247)*var2[1] + (t19394*t48196 + t46305*t48247)*var2[2] + (t46563*t46609 + t46496*(t48348 - 1.*t46306*t46427*t48778 + t46386*t46427*t48784) + t46306*t46427*(t46648 + t46652 + t46656 + t48653 + t46496*t48778 + t46468*t48784))*var2[3] + (t46302*t46724 + t46451*(t48348 - 1.*t46427*t48476) + t46432*(t46648 + t46873 + t46874 + t46464*t48476 + t46291*t48578 + t48653))*var2[4] + t46310*t48170*var2[5];
  p_output1[22]=(t46609*t46657 + t46633*t48154 + t46496*(t46548*t48154 + t46561*t48247 + t46609*t48778 + t46410*t48784 + t49046 + t49083) + t46609*(t46694 + t46696 + t46697 - 1.*t46496*t48778 - 1.*t46468*t48784 + t49126))*var2[3] + (t46302*t46876 + t46855*t48196 + t46451*(t46539*t48101 + t46406*t48476 + t48823 + t48826 + t49046 + t49083) + t46302*(t46694 + t46990 + t46995 - 1.*t46464*t48476 + t48845 + t49126))*var2[4] + (t48005*t48867 + t46291*(t40404*t46310*t46528 + t46300*t46310*t46536 + t48823 + t48826 + t46291*t46509*t48877 + t46291*t46509*t48881) + t46310*(-1.*t40404*t46291*t46528 - 1.*t46291*t46300*t46536 + t46990 + t48845 - 1.*t46447*t46509*t48877 - 1.*t46447*t46509*t48881) + t46310*t49019)*var2[5] + (t48005*t48819 + t46291*(t46310*t46523 + t46769 + t48823 + t48826) + t46310*t48834 + t46310*(-1.*t46291*t46523 + t46990 + t48838 + t48845))*var2[6];
  p_output1[23]=t49294 + t46609*var2[0] + t46418*var2[1] + (t19394*t46302 + t46305*t46410)*var2[2] + (t46675*t48154 + t46609*(t46306*t46427*t48778 - 1.*t46386*t46427*t48784 + t49369) + t46306*t46427*(-1.*t46548*t48154 - 1.*t46561*t48247 - 1.*t46609*t48778 - 1.*t46410*t48784 + t49400 + t49402))*var2[3] + (t46946*t48196 + t46302*(t46427*t48476 + t49369) + t46432*(-1.*t46509*t48005 - 1.*t46539*t48101 - 1.*t46406*t48476 - 1.*t46310*t48578 + t49400 + t49402))*var2[4] + t48005*t49302*var2[5];
  p_output1[24]=t46496*var2[0] + t46481*var2[1] + (t19394*t46451 + t46305*t46468)*var2[2] + (t46496*(t49589 - 1.*t46306*t46427*t49809 + t46386*t46427*t49819) + t46563*t49856 + t46306*t46427*(t49658 + t49668 + t46496*t49809 + t46468*t49819 + t46548*t49856 + t46561*t49922))*var2[3] + (t46451*(t49589 - 1.*t46427*t49594) + t46724*t49627 + t46432*(t46447*t46509 + t46464*t49594 + t46291*t49651 + t49658 + t49668 + t46539*t49708))*var2[4] + t46447*t48170*var2[5] + (0.28121*t46257 - 0.27*Power(t46257,2) - 1.*t46257*t46505)*var2[7];
  p_output1[25]=(t46496*t46633 + t46657*t49856 + t46496*(t46581 + t46582 + t46583 + t46609*t49809 + t46410*t49819 + t50086) + t46609*(-1.*t46496*t49809 - 1.*t46468*t49819 - 1.*t46548*t49856 - 1.*t46561*t49922 + t50094 + t50099))*var2[3] + (t46451*t46855 + t46876*t49627 + t46451*(t46581 + t46769 + t46770 + t46406*t49594 + t49952 + t50086) + t46302*(t48838 - 1.*t46464*t49594 - 1.*t46539*t49708 + t50028 + t50094 + t50099))*var2[4] + (t46291*t48867 + t46447*t49019 + t46291*(t40404*t46447*t46528 + t46300*t46447*t46536 + t46769 + t46291*t48877*t49575 + t46291*t48881*t49575 + t49952) + t46310*(-1.*t40404*t46528*t48005 - 1.*t46300*t46536*t48005 + t48838 - 1.*t46447*t48877*t49575 - 1.*t46447*t48881*t49575 + t50028))*var2[5] + (t46291*t48819 + t46447*t48834 + t46291*(t46447*t46523 + t46769 + t46291*t49575 + t49952) + t46310*(-1.*t46523*t48005 + t48838 - 1.*t46447*t49575 + t50028))*var2[6];
  p_output1[26]=t49294 + t49856*var2[0] + (t46305*t49627 - 1.*t19394*t49922)*var2[1] + (t19394*t49627 + t46305*t49922)*var2[2] + (t46496*t46675 + t46609*(t46306*t46427*t49809 - 1.*t46386*t46427*t49819 + t50476) + t46306*t46427*(t46622 + t46631 + t46632 - 1.*t46609*t49809 - 1.*t46410*t49819 + t50541))*var2[3] + (t46451*t46946 + t46302*(t46427*t49594 + t50476) + t46432*(t46622 + t46850 + t46854 - 1.*t46406*t49594 - 1.*t46310*t49651 + t50541))*var2[4] + t46291*t49302*var2[5] + (-0.28121*t46283 + 0.27*t46257*t46283 + t46283*t46505)*var2[7];
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

#include "dJh_FlFoot_ParallelStance2.hh"

namespace SymFunction
{

void dJh_FlFoot_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
