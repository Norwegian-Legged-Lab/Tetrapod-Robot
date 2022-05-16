/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:40:16 GMT+02:00
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
  double t21312;
  double t21313;
  double t21314;
  double t21360;
  double t21361;
  double t21380;
  double t21394;
  double t21397;
  double t20896;
  double t21163;
  double t21399;
  double t21437;
  double t21396;
  double t21401;
  double t21425;
  double t3269;
  double t21447;
  double t21459;
  double t21460;
  double t21772;
  double t21778;
  double t21779;
  double t21781;
  double t21796;
  double t21816;
  double t21819;
  double t21823;
  double t22526;
  double t22615;
  double t22667;
  double t22714;
  double t22715;
  double t22752;
  double t22825;
  double t22832;
  double t22833;
  double t22834;
  double t22841;
  double t22845;
  double t22877;
  double t22879;
  double t22881;
  double t22885;
  double t22886;
  double t22909;
  double t23244;
  double t23297;
  double t23326;
  double t27416;
  double t27936;
  double t27966;
  double t27967;
  double t27971;
  double t28284;
  double t28368;
  double t28542;
  double t28756;
  double t28778;
  double t29972;
  double t29974;
  double t30214;
  double t27415;
  double t27988;
  double t28244;
  double t28245;
  double t28516;
  double t30250;
  double t30252;
  double t30309;
  double t30338;
  double t30346;
  double t31301;
  double t31474;
  double t31526;
  double t31754;
  double t32787;
  double t33655;
  double t33824;
  double t33829;
  double t28278;
  double t32872;
  double t32931;
  double t33880;
  double t33881;
  double t33884;
  double t24304;
  double t24376;
  double t27173;
  double t33850;
  double t33852;
  double t33871;
  double t34022;
  double t34026;
  double t34027;
  double t34930;
  double t34932;
  double t34941;
  double t35647;
  double t35650;
  double t35651;
  double t33875;
  double t35697;
  double t35700;
  double t35701;
  double t34297;
  double t36020;
  double t36021;
  double t36022;
  double t33876;
  double t33885;
  double t33889;
  double t35707;
  double t35712;
  double t35732;
  double t35735;
  double t35736;
  double t36000;
  double t36038;
  double t34428;
  double t34459;
  double t34635;
  double t35048;
  double t35309;
  double t37353;
  double t37362;
  double t37424;
  double t37445;
  double t35049;
  double t35056;
  double t35058;
  double t35348;
  double t35454;
  double t35455;
  double t35557;
  double t35594;
  double t35558;
  double t35560;
  double t35561;
  double t36169;
  double t36177;
  double t38011;
  double t38020;
  double t38034;
  double t38037;
  double t35599;
  double t35606;
  double t35607;
  double t35653;
  double t35659;
  double t35671;
  double t35672;
  double t35675;
  double t35677;
  double t35678;
  double t35680;
  double t35681;
  double t35684;
  double t35685;
  double t35695;
  double t38182;
  double t38184;
  double t38185;
  double t38180;
  double t35741;
  double t38214;
  double t38216;
  double t38218;
  double t38220;
  double t38223;
  double t38225;
  double t36029;
  double t36101;
  double t36132;
  double t36134;
  double t36138;
  double t36145;
  double t38230;
  double t36206;
  double t36208;
  double t38235;
  double t36265;
  double t36270;
  double t36879;
  double t37261;
  double t37262;
  double t37263;
  double t37286;
  double t37290;
  double t37291;
  double t37292;
  double t37296;
  double t37308;
  double t37361;
  double t37376;
  double t37379;
  double t37383;
  double t37388;
  double t37427;
  double t37467;
  double t37468;
  double t37469;
  double t37471;
  double t38332;
  double t37590;
  double t37592;
  double t38342;
  double t37721;
  double t37726;
  double t37765;
  double t37772;
  double t37815;
  double t37823;
  double t37827;
  double t37945;
  double t37954;
  double t37958;
  double t37968;
  double t37970;
  double t37974;
  double t37975;
  double t37998;
  double t38004;
  double t38021;
  double t38035;
  double t38044;
  double t38046;
  double t38047;
  double t38049;
  double t38055;
  double t38406;
  double t38108;
  double t38110;
  double t38413;
  double t38132;
  double t38137;
  double t38151;
  double t38441;
  double t38442;
  double t38443;
  double t38445;
  double t38446;
  double t38447;
  double t38461;
  double t38462;
  double t38464;
  double t38467;
  double t38468;
  double t38469;
  double t38494;
  double t38495;
  double t38496;
  double t38507;
  double t38508;
  double t38510;
  double t38505;
  double t38516;
  double t38517;
  double t38518;
  double t38528;
  double t38531;
  double t38550;
  double t38553;
  double t38555;
  double t38563;
  double t38564;
  double t38566;
  double t38668;
  double t38671;
  double t38706;
  double t38708;
  double t38687;
  double t38444;
  double t38455;
  double t38456;
  double t38786;
  double t38797;
  double t38802;
  double t21920;
  double t21969;
  double t22037;
  double t38876;
  double t38887;
  double t38890;
  double t38435;
  double t38436;
  double t38437;
  double t23039;
  double t23040;
  double t23042;
  double t38960;
  double t38962;
  double t38963;
  double t38965;
  double t38966;
  double t38967;
  double t38970;
  double t38971;
  double t38972;
  double t38978;
  double t38979;
  double t38980;
  double t38969;
  double t38984;
  double t38985;
  double t38990;
  double t38991;
  double t38992;
  double t38987;
  double t38989;
  double t39000;
  double t39002;
  double t39008;
  double t39011;
  double t39012;
  double t39014;
  double t39019;
  double t39020;
  double t39024;
  double t38664;
  double t38665;
  double t38677;
  double t38679;
  double t38681;
  double t38701;
  double t38702;
  double t38703;
  double t39174;
  double t39220;
  double t38771;
  double t38773;
  double t38776;
  double t39296;
  double t39306;
  double t39323;
  double t39037;
  double t39038;
  double t39042;
  double t38846;
  double t38847;
  double t38848;
  double t38850;
  double t38851;
  double t38852;
  double t38853;
  double t39374;
  double t39382;
  t21312 = Cos(var1[13]);
  t21313 = Cos(var1[14]);
  t21314 = t21312*t21313;
  t21360 = Sin(var1[13]);
  t21361 = Sin(var1[14]);
  t21380 = t21360*t21361;
  t21394 = t21314 + t21380;
  t21397 = Cos(var1[12]);
  t20896 = Cos(var1[5]);
  t21163 = Sin(var1[12]);
  t21399 = Sin(var1[5]);
  t21437 = Cos(var1[3]);
  t21396 = t20896*t21163*t21394;
  t21401 = t21397*t21394*t21399;
  t21425 = t21396 + t21401;
  t3269 = Sin(var1[3]);
  t21447 = Cos(var1[4]);
  t21459 = -1.*t21313*t21360;
  t21460 = t21312*t21361;
  t21772 = t21459 + t21460;
  t21778 = t21447*t21772;
  t21779 = Sin(var1[4]);
  t21781 = t21397*t20896*t21394;
  t21796 = -1.*t21163*t21394*t21399;
  t21816 = t21781 + t21796;
  t21819 = -1.*t21779*t21816;
  t21823 = t21778 + t21819;
  t22526 = -1.*t20896*t21163;
  t22615 = -1.*t21397*t21399;
  t22667 = t22526 + t22615;
  t22714 = t21397*t20896;
  t22715 = -1.*t21163*t21399;
  t22752 = t22714 + t22715;
  t22825 = t21313*t21360;
  t22832 = -1.*t21312*t21361;
  t22833 = t22825 + t22832;
  t22834 = t20896*t21163*t22833;
  t22841 = t21397*t22833*t21399;
  t22845 = t22834 + t22841;
  t22877 = t21447*t21394;
  t22879 = t21397*t20896*t22833;
  t22881 = -1.*t21163*t22833*t21399;
  t22885 = t22879 + t22881;
  t22886 = -1.*t21779*t22885;
  t22909 = t22877 + t22886;
  t23244 = -1.*t21772*t21779;
  t23297 = -1.*t21447*t21816;
  t23326 = t23244 + t23297;
  t27416 = -1.*t21313;
  t27936 = 1. + t27416;
  t27966 = 0.50321*t27936;
  t27967 = 0.23321*t21313;
  t27971 = t27966 + t27967;
  t28284 = -1.*t21397;
  t28368 = 1. + t28284;
  t28542 = -1.*t21312;
  t28756 = 1. + t28542;
  t28778 = 0.28121*t28756;
  t29972 = t21312*t27971;
  t29974 = -0.27*t21360*t21361;
  t30214 = t28778 + t29972 + t29974;
  t27415 = 0.28121*t21360;
  t27988 = -1.*t27971*t21360;
  t28244 = -0.27*t21312*t21361;
  t28245 = t27415 + t27988 + t28244;
  t28516 = 0.15121*t28368;
  t30250 = t21397*t30214;
  t30252 = t28516 + t30250;
  t30309 = t20896*t30252;
  t30338 = -0.15121*t28368;
  t30346 = -0.15121*t21397;
  t31301 = -0.15121*t21163;
  t31474 = t21163*t30214;
  t31526 = t30338 + t30346 + t31301 + t31474;
  t31754 = -1.*t31526*t21399;
  t32787 = t30309 + t31754;
  t33655 = t28245*t21779;
  t33824 = t21447*t32787;
  t33829 = t33655 + t33824;
  t28278 = -1.*t28245*t21779;
  t32872 = -1.*t21447*t32787;
  t32931 = t28278 + t32872;
  t33880 = t21447*t28245;
  t33881 = -1.*t21779*t32787;
  t33884 = t33880 + t33881;
  t24304 = t21394*t21779;
  t24376 = t21447*t22885;
  t27173 = t24304 + t24376;
  t33850 = t20896*t31526;
  t33852 = t30252*t21399;
  t33871 = t33850 + t33852;
  t34022 = -1.*t21394*t21779;
  t34026 = -1.*t21447*t22885;
  t34027 = t34022 + t34026;
  t34930 = t21772*t21779;
  t34932 = t21447*t21816;
  t34941 = t34930 + t34932;
  t35647 = -1.*t20896*t21163*t21394;
  t35650 = -1.*t21397*t21394*t21399;
  t35651 = t35647 + t35650;
  t33875 = -1.*t22752*t33871;
  t35697 = -1.*t20896*t31526;
  t35700 = -1.*t30252*t21399;
  t35701 = t35697 + t35700;
  t34297 = t22845*t33871;
  t36020 = -1.*t20896*t21163*t22833;
  t36021 = -1.*t21397*t22833*t21399;
  t36022 = t36020 + t36021;
  t33876 = -1.*t21447*t22667*t33829;
  t33885 = t21779*t22667*t33884;
  t33889 = t33875 + t33876 + t33885;
  t35707 = -1.*t22667*t33871;
  t35712 = -1.*t22752*t32787;
  t35732 = -1.*t21397*t20896;
  t35735 = t21163*t21399;
  t35736 = t35732 + t35735;
  t36000 = t22885*t33871;
  t36038 = t22845*t32787;
  t34428 = t27173*t33829;
  t34459 = t22909*t33884;
  t34635 = t34297 + t34428 + t34459;
  t35048 = -1.*t22845*t33871;
  t35309 = t21425*t33871;
  t37353 = -1.*t22885*t33871;
  t37362 = -1.*t22845*t32787;
  t37424 = t21816*t33871;
  t37445 = t21425*t32787;
  t35049 = -1.*t27173*t33829;
  t35056 = -1.*t22909*t33884;
  t35058 = t35048 + t35049 + t35056;
  t35348 = t34941*t33829;
  t35454 = t21823*t33884;
  t35455 = t35309 + t35348 + t35454;
  t35557 = t22752*t33871;
  t35594 = -1.*t21425*t33871;
  t35558 = t21447*t22667*t33829;
  t35560 = -1.*t21779*t22667*t33884;
  t35561 = t35557 + t35558 + t35560;
  t36169 = Power(t21447,2);
  t36177 = Power(t21779,2);
  t38011 = t22667*t33871;
  t38020 = t22752*t32787;
  t38034 = -1.*t21816*t33871;
  t38037 = -1.*t21425*t32787;
  t35599 = -1.*t34941*t33829;
  t35606 = -1.*t21823*t33884;
  t35607 = t35594 + t35599 + t35606;
  t35653 = var2[0]*t21447*t35651;
  t35659 = t3269*t21779*t35651;
  t35671 = t21437*t21816;
  t35672 = t35659 + t35671;
  t35675 = var2[1]*t35672;
  t35677 = -1.*t21437*t21779*t35651;
  t35678 = t3269*t21816;
  t35680 = t35677 + t35678;
  t35681 = var2[2]*t35680;
  t35684 = -1.*t22667*t32787;
  t35685 = t33875 + t35684;
  t35695 = t22885*t35685;
  t38182 = 0.15121*t21163;
  t38184 = -1.*t21163*t30214;
  t38185 = t38182 + t38184;
  t38180 = t30346 + t30250;
  t35741 = -1.*t35736*t32787;
  t38214 = t20896*t38185;
  t38216 = -1.*t38180*t21399;
  t38218 = t38214 + t38216;
  t38220 = t20896*t38180;
  t38223 = t38185*t21399;
  t38225 = t38220 + t38223;
  t36029 = t36022*t32787;
  t36101 = t28245*t21394;
  t36132 = t22885*t32787;
  t36134 = t36101 + t34297 + t36132;
  t36138 = t22667*t36134;
  t36145 = t21447*t36022*t33889;
  t38230 = -1.*t22752*t38225;
  t36206 = -1.*t21447*t35736*t33829;
  t36208 = t21779*t35736*t33884;
  t38235 = t22845*t38225;
  t36265 = t21447*t36022*t33829;
  t36270 = -1.*t21779*t36022*t33884;
  t36879 = t21447*t35736*t34635;
  t37261 = var2[0]*t21447*t35736;
  t37262 = t3269*t22667;
  t37263 = -1.*t21437*t21779*t35736;
  t37286 = t37262 + t37263;
  t37290 = var2[2]*t37286;
  t37291 = t21437*t22667;
  t37292 = t3269*t21779*t35736;
  t37296 = t37291 + t37292;
  t37308 = var2[1]*t37296;
  t37361 = -1.*t36022*t32787;
  t37376 = -1.*t28245*t21394;
  t37379 = -1.*t22885*t32787;
  t37383 = t37376 + t35048 + t37379;
  t37388 = t21816*t37383;
  t37427 = t35651*t32787;
  t37467 = t28245*t21772;
  t37468 = t21816*t32787;
  t37469 = t37467 + t35309 + t37468;
  t37471 = t22885*t37469;
  t38332 = -1.*t22845*t38225;
  t37590 = -1.*t21447*t36022*t33829;
  t37592 = t21779*t36022*t33884;
  t38342 = t21425*t38225;
  t37721 = t21447*t35651*t33829;
  t37726 = -1.*t21779*t35651*t33884;
  t37765 = t21447*t35651*t35058;
  t37772 = t21447*t36022*t35455;
  t37815 = var2[0]*t21447*t36022;
  t37823 = t3269*t21779*t36022;
  t37827 = t21437*t22885;
  t37945 = t37823 + t37827;
  t37954 = var2[1]*t37945;
  t37958 = -1.*t21437*t21779*t36022;
  t37968 = t3269*t22885;
  t37970 = t37958 + t37968;
  t37974 = var2[2]*t37970;
  t37975 = t22667*t32787;
  t37998 = t35557 + t37975;
  t38004 = t21816*t37998;
  t38021 = t35736*t32787;
  t38035 = -1.*t35651*t32787;
  t38044 = -1.*t28245*t21772;
  t38046 = -1.*t21816*t32787;
  t38047 = t38044 + t35594 + t38046;
  t38049 = t22667*t38047;
  t38055 = t21447*t35651*t35561;
  t38406 = t22752*t38225;
  t38108 = t21447*t35736*t33829;
  t38110 = -1.*t21779*t35736*t33884;
  t38413 = -1.*t21425*t38225;
  t38132 = -1.*t21447*t35651*t33829;
  t38137 = t21779*t35651*t33884;
  t38151 = t21447*t35736*t35607;
  t38441 = -1.*t21312*t21313;
  t38442 = -1.*t21360*t21361;
  t38443 = t38441 + t38442;
  t38445 = t21397*t20896*t21772;
  t38446 = -1.*t21163*t21772*t21399;
  t38447 = t38445 + t38446;
  t38461 = t20896*t21163*t21772;
  t38462 = t21397*t21772*t21399;
  t38464 = t38461 + t38462;
  t38467 = t21447*t38443;
  t38468 = -1.*t21779*t38447;
  t38469 = t38467 + t38468;
  t38494 = t20896*t21163*t28245;
  t38495 = t21397*t28245*t21399;
  t38496 = t38494 + t38495;
  t38507 = t21397*t20896*t28245;
  t38508 = -1.*t21163*t28245*t21399;
  t38510 = t38507 + t38508;
  t38505 = -1.*t22752*t38496;
  t38516 = 0.28121*t21312;
  t38517 = -1.*t21312*t27971;
  t38518 = 0.27*t21360*t21361;
  t38528 = t38516 + t38517 + t38518;
  t38531 = t22845*t38496;
  t38550 = t38528*t21779;
  t38553 = t21447*t38510;
  t38555 = t38550 + t38553;
  t38563 = t21447*t38528;
  t38564 = -1.*t21779*t38510;
  t38566 = t38563 + t38564;
  t38668 = t28245*t38443;
  t38671 = t21772*t38528;
  t38706 = Power(t21397,2);
  t38708 = Power(t21163,2);
  t38687 = -1.*t38528*t21394;
  t38444 = t38443*t21779;
  t38455 = t21447*t38447;
  t38456 = t38444 + t38455;
  t38786 = t38496*t21425;
  t38797 = t38464*t33871;
  t38802 = -1.*t22845*t38496;
  t21920 = t21437*t21425;
  t21969 = -1.*t3269*t21823;
  t22037 = t21920 + t21969;
  t38876 = t22752*t38496;
  t38887 = -1.*t38496*t21425;
  t38890 = -1.*t38464*t33871;
  t38435 = t21163*t30252;
  t38436 = -1.*t21397*t31526;
  t38437 = t38435 + t38436;
  t23039 = t21437*t22845;
  t23040 = -1.*t3269*t22909;
  t23042 = t23039 + t23040;
  t38960 = -0.27*t21313*t21360;
  t38962 = 0.27*t21312*t21361;
  t38963 = t38960 + t38962;
  t38965 = t20896*t21163*t38963;
  t38966 = t21397*t38963*t21399;
  t38967 = t38965 + t38966;
  t38970 = t21397*t20896*t38963;
  t38971 = -1.*t21163*t38963*t21399;
  t38972 = t38970 + t38971;
  t38978 = t20896*t21163*t38443;
  t38979 = t21397*t38443*t21399;
  t38980 = t38978 + t38979;
  t38969 = -1.*t22752*t38967;
  t38984 = -0.27*t21312*t21313;
  t38985 = t38984 + t29974;
  t38990 = t21397*t20896*t38443;
  t38991 = -1.*t21163*t38443*t21399;
  t38992 = t38990 + t38991;
  t38987 = t22845*t38967;
  t38989 = t38980*t33871;
  t39000 = t38985*t21779;
  t39002 = t21447*t38972;
  t39008 = t39000 + t39002;
  t39011 = t21447*t38985;
  t39012 = -1.*t21779*t38972;
  t39014 = t39011 + t39012;
  t39019 = t22833*t21779;
  t39020 = t21447*t38992;
  t39024 = t39019 + t39020;
  t38664 = -1.*t22833*t30214;
  t38665 = t38664 + t37376;
  t38677 = t30214*t21394;
  t38679 = t37467 + t38677;
  t38681 = -1.*t22833*t28245;
  t38701 = -1.*t21397*t22833*t30252;
  t38702 = -1.*t21163*t22833*t31526;
  t38703 = t37376 + t38701 + t38702;
  t39174 = t21772*t38985;
  t39220 = -1.*t38985*t21394;
  t38771 = t21397*t21394*t30252;
  t38773 = t21163*t21394*t31526;
  t38776 = t37467 + t38771 + t38773;
  t39296 = t38967*t21425;
  t39306 = -1.*t22845*t38967;
  t39323 = -1.*t38980*t33871;
  t39037 = t21447*t22833;
  t39038 = -1.*t21779*t38992;
  t39042 = t39037 + t39038;
  t38846 = -0.15121*t38443;
  t38847 = -0.15121*t21394;
  t38848 = t38846 + t38847;
  t38850 = var2[12]*t38848;
  t38851 = -1.*t21163*t30252;
  t38852 = t21397*t31526;
  t38853 = t38851 + t38852;
  t39374 = t22752*t38967;
  t39382 = -1.*t38967*t21425;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t21437*t21823 - 1.*t21425*t3269)*var2[1] + t22037*var2[2];
  p_output1[10]=(t21437*t21779*t22667 - 1.*t22752*t3269)*var2[1] + (t21437*t22752 + t21779*t22667*t3269)*var2[2];
  p_output1[11]=(-1.*t21437*t22909 - 1.*t22845*t3269)*var2[1] + t23042*var2[2];
  p_output1[12]=t21823*var2[0] - 1.*t23326*t3269*var2[1] + t21437*t23326*var2[2] + (t27173*(t21779*t22667*t32931 + t21779*t22667*t33829) + t22909*t33889 + t21447*t22667*(t22909*t32931 + t22909*t33829 + t27173*t33884 + t33884*t34027) - 1.*t21779*t22667*t34635)*var2[3];
  p_output1[13]=-1.*t21779*t22667*var2[0] + t21447*t22667*t3269*var2[1] - 1.*t21437*t21447*t22667*var2[2] + ((-1.*t22909*t32931 - 1.*t22909*t33829 - 1.*t27173*t33884 - 1.*t33884*t34027)*t34941 + t27173*(t21823*t32931 + t21823*t33829 + t23326*t33884 + t33884*t34941) + t21823*t35058 + t22909*t35455)*var2[3];
  p_output1[14]=t22909*var2[0] - 1.*t3269*t34027*var2[1] + t21437*t34027*var2[2] + ((-1.*t21779*t22667*t32931 - 1.*t21779*t22667*t33829)*t34941 + t21447*t22667*(-1.*t21823*t32931 - 1.*t21823*t33829 - 1.*t23326*t33884 - 1.*t33884*t34941) + t21823*t35561 - 1.*t21779*t22667*t35607)*var2[3];
  p_output1[15]=t35653 + t35675 + t35681 + (t36145 + t27173*(t35707 + t35712 - 1.*t22667*t35701*t36169 - 1.*t22667*t35701*t36177 + t36206 + t36208) + t21447*t22667*(-1.*t21779*t22909*t35701 + t21447*t27173*t35701 + t36000 + t36038 + t36265 + t36270) + t36879)*var2[3] + (t35695 + t22845*(-1.*t22667*t35701 + t35707 + t35712 + t35741) + t22752*(t22885*t35701 + t36000 + t36029 + t36038) + t36138)*var2[4];
  p_output1[16]=t37261 + t37290 + t37308 + (t34941*(t21779*t22909*t35701 - 1.*t21447*t27173*t35701 + t37353 + t37362 + t37590 + t37592) + t27173*(-1.*t21779*t21823*t35701 + t21447*t34941*t35701 + t37424 + t37445 + t37721 + t37726) + t37765 + t37772)*var2[3] + (t21425*(-1.*t22885*t35701 + t37353 + t37361 + t37362) + t37388 + t22845*(t21816*t35701 + t37424 + t37427 + t37445) + t37471)*var2[4];
  p_output1[17]=t37815 + t37954 + t37974 + (t38055 + t34941*(t22667*t35701*t36169 + t22667*t35701*t36177 + t38011 + t38020 + t38108 + t38110) + t21447*t22667*(t21779*t21823*t35701 - 1.*t21447*t34941*t35701 + t38034 + t38037 + t38132 + t38137) + t38151)*var2[3] + (t38004 + t21425*(t22667*t35701 + t38011 + t38020 + t38021) + t22752*(-1.*t21816*t35701 + t38034 + t38035 + t38037) + t38049)*var2[4];
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
  p_output1[36]=t35653 + t35675 + t35681 + (t36145 + t36879 + t27173*(t35707 + t36206 + t36208 - 1.*t22667*t36169*t38218 - 1.*t22667*t36177*t38218 + t38230) + t21447*t22667*(t36000 + t36265 + t36270 - 1.*t21779*t22909*t38218 + t21447*t27173*t38218 + t38235))*var2[3] + (t35695 + t36138 + t22845*(t35707 + t35741 - 1.*t22667*t38218 + t38230) + t22752*(t36000 + t36029 + t22885*t38218 + t38235))*var2[4] + t21394*(t21397*t30252 + t21163*t31526 - 1.*t21397*t38180 + t21163*t38185)*var2[5];
  p_output1[37]=t37261 + t37290 + t37308 + (t37765 + t37772 + t34941*(t37353 + t37590 + t37592 + t21779*t22909*t38218 - 1.*t21447*t27173*t38218 + t38332) + t27173*(t37424 + t37721 + t37726 - 1.*t21779*t21823*t38218 + t21447*t34941*t38218 + t38342))*var2[3] + (t37388 + t37471 + t21425*(t37353 + t37361 - 1.*t22885*t38218 + t38332) + t22845*(t37424 + t37427 + t21816*t38218 + t38342))*var2[4] + (t21394*(-1.*t21163*t21394*t30252 + t21394*t21397*t31526 + t21163*t21394*t38180 + t21394*t21397*t38185) + t21772*(t21163*t22833*t30252 - 1.*t21397*t22833*t31526 - 1.*t21163*t22833*t38180 - 1.*t21397*t22833*t38185))*var2[5];
  p_output1[38]=t37815 + t37954 + t37974 + (t38055 + t38151 + t34941*(t38011 + t38108 + t38110 + t22667*t36169*t38218 + t22667*t36177*t38218 + t38406) + t21447*t22667*(t38034 + t38132 + t38137 + t21779*t21823*t38218 - 1.*t21447*t34941*t38218 + t38413))*var2[3] + (t38004 + t38049 + t21425*(t38011 + t38021 + t22667*t38218 + t38406) + t22752*(t38034 + t38035 - 1.*t21816*t38218 + t38413))*var2[4] + t21772*(-1.*t21397*t30252 - 1.*t21163*t31526 + t21397*t38180 - 1.*t21163*t38185)*var2[5];
  p_output1[39]=t38456*var2[0] + (t21437*t38464 - 1.*t3269*t38469)*var2[1] + (t3269*t38464 + t21437*t38469)*var2[2] + (t33889*t34941 + t27173*(t38505 - 1.*t21447*t22667*t38555 + t21779*t22667*t38566) + t21447*t22667*(t35309 + t35348 + t35454 + t38531 + t27173*t38555 + t22909*t38566))*var2[3] + (t21425*t35685 + t22845*(t38505 - 1.*t22667*t38510) + t22752*(t35309 + t37467 + t37468 + t22885*t38510 + t21394*t38528 + t38531))*var2[4] + t21772*t38437*var2[5];
  p_output1[40]=(t34941*t35455 + t35058*t38456 + t27173*(t33829*t38456 + t33884*t38469 + t34941*t38555 + t21823*t38566 + t38786 + t38797) + t34941*(t35594 + t35599 + t35606 - 1.*t27173*t38555 - 1.*t22909*t38566 + t38802))*var2[3] + (t21425*t37469 + t37383*t38464 + t22845*(t32787*t38447 + t21816*t38510 + t38668 + t38671 + t38786 + t38797) + t21425*(t35594 + t38044 + t38046 - 1.*t22885*t38510 + t38687 + t38802))*var2[4] + (t38443*t38703 + t21394*(t21397*t21772*t30252 + t21163*t21772*t31526 + t38668 + t38671 + t21394*t28245*t38706 + t21394*t28245*t38708) + t21772*(-1.*t21394*t21397*t30252 - 1.*t21163*t21394*t31526 + t38044 + t38687 - 1.*t22833*t28245*t38706 - 1.*t22833*t28245*t38708) + t21772*t38776)*var2[5] + (t38443*t38665 + t21394*(t21772*t30214 + t36101 + t38668 + t38671) + t21772*t38679 + t21772*(-1.*t21394*t30214 + t38044 + t38681 + t38687))*var2[12];
  p_output1[41]=t38850 + t34941*var2[0] + t22037*var2[1] + (t21437*t21823 + t21425*t3269)*var2[2] + (t35561*t38456 + t34941*(t21447*t22667*t38555 - 1.*t21779*t22667*t38566 + t38876) + t21447*t22667*(-1.*t33829*t38456 - 1.*t33884*t38469 - 1.*t34941*t38555 - 1.*t21823*t38566 + t38887 + t38890))*var2[3] + (t37998*t38464 + t21425*(t22667*t38510 + t38876) + t22752*(-1.*t28245*t38443 - 1.*t32787*t38447 - 1.*t21816*t38510 - 1.*t21772*t38528 + t38887 + t38890))*var2[4] + t38443*t38853*var2[5];
  p_output1[42]=t27173*var2[0] + t23042*var2[1] + (t21437*t22909 + t22845*t3269)*var2[2] + (t27173*(t38969 - 1.*t21447*t22667*t39008 + t21779*t22667*t39014) + t33889*t39024 + t21447*t22667*(t38987 + t38989 + t27173*t39008 + t22909*t39014 + t33829*t39024 + t33884*t39042))*var2[3] + (t22845*(t38969 - 1.*t22667*t38972) + t35685*t38980 + t22752*(t22833*t28245 + t22885*t38972 + t21394*t38985 + t38987 + t38989 + t32787*t38992))*var2[4] + t22833*t38437*var2[5] + (0.28121*t21313 - 0.27*Power(t21313,2) - 1.*t21313*t27971)*var2[13];
  p_output1[43]=(t27173*t35058 + t35455*t39024 + t27173*(t34297 + t34428 + t34459 + t34941*t39008 + t21823*t39014 + t39296) + t34941*(-1.*t27173*t39008 - 1.*t22909*t39014 - 1.*t33829*t39024 - 1.*t33884*t39042 + t39306 + t39323))*var2[3] + (t22845*t37383 + t37469*t38980 + t22845*(t34297 + t36101 + t36132 + t21816*t38972 + t39174 + t39296) + t21425*(t38681 - 1.*t22885*t38972 - 1.*t32787*t38992 + t39220 + t39306 + t39323))*var2[4] + (t21394*t38703 + t22833*t38776 + t21394*(t21397*t22833*t30252 + t21163*t22833*t31526 + t36101 + t21394*t38706*t38963 + t21394*t38708*t38963 + t39174) + t21772*(-1.*t21397*t30252*t38443 - 1.*t21163*t31526*t38443 + t38681 - 1.*t22833*t38706*t38963 - 1.*t22833*t38708*t38963 + t39220))*var2[5] + (t21394*t38665 + t22833*t38679 + t21394*(t22833*t30214 + t36101 + t21394*t38963 + t39174) + t21772*(-1.*t30214*t38443 + t38681 - 1.*t22833*t38963 + t39220))*var2[12];
  p_output1[44]=t38850 + t39024*var2[0] + (t21437*t38980 - 1.*t3269*t39042)*var2[1] + (t3269*t38980 + t21437*t39042)*var2[2] + (t27173*t35561 + t34941*(t21447*t22667*t39008 - 1.*t21779*t22667*t39014 + t39374) + t21447*t22667*(t35048 + t35049 + t35056 - 1.*t34941*t39008 - 1.*t21823*t39014 + t39382))*var2[3] + (t22845*t37998 + t21425*(t22667*t38972 + t39374) + t22752*(t35048 + t37376 + t37379 - 1.*t21816*t38972 - 1.*t21772*t38985 + t39382))*var2[4] + t21394*t38853*var2[5] + (-0.28121*t21361 + 0.27*t21313*t21361 + t21361*t27971)*var2[13];
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
