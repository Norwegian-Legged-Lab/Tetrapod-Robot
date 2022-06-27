/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 14:35:38 GMT+02:00
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
  double t5054;
  double t5061;
  double t5086;
  double t5114;
  double t5132;
  double t5133;
  double t5486;
  double t8351;
  double t2618;
  double t4942;
  double t8367;
  double t8507;
  double t8160;
  double t8377;
  double t8462;
  double t1809;
  double t8508;
  double t8514;
  double t8531;
  double t8535;
  double t8536;
  double t8537;
  double t8839;
  double t8840;
  double t8858;
  double t8968;
  double t9423;
  double t11261;
  double t11589;
  double t12674;
  double t14182;
  double t14213;
  double t14216;
  double t14221;
  double t14229;
  double t14237;
  double t14242;
  double t14246;
  double t14247;
  double t15012;
  double t15013;
  double t15019;
  double t15078;
  double t14164;
  double t14169;
  double t14175;
  double t14181;
  double t14231;
  double t14233;
  double t14235;
  double t14243;
  double t15083;
  double t15084;
  double t15097;
  double t15099;
  double t15100;
  double t15102;
  double t15103;
  double t15112;
  double t15115;
  double t15117;
  double t13294;
  double t13315;
  double t13418;
  double t14039;
  double t14051;
  double t14134;
  double t15293;
  double t15294;
  double t15295;
  double t15832;
  double t15852;
  double t15853;
  double t14236;
  double t15200;
  double t15227;
  double t15884;
  double t15885;
  double t15888;
  double t13834;
  double t14151;
  double t14163;
  double t15869;
  double t15870;
  double t15871;
  double t16090;
  double t16159;
  double t16227;
  double t15854;
  double t15867;
  double t15868;
  double t15872;
  double t16076;
  double t16077;
  double t16078;
  double t16266;
  double t16268;
  double t16269;
  double t16079;
  double t16283;
  double t16284;
  double t16285;
  double t15873;
  double t15889;
  double t15890;
  double t16271;
  double t16278;
  double t16273;
  double t16274;
  double t16276;
  double t16282;
  double t16287;
  double t16080;
  double t16084;
  double t16085;
  double t16228;
  double t16230;
  double t16236;
  double t16239;
  double t16243;
  double t16248;
  double t16253;
  double t16255;
  double t16256;
  double t16258;
  double t16259;
  double t16263;
  double t16442;
  double t16453;
  double t16461;
  double t16375;
  double t16277;
  double t16472;
  double t16474;
  double t16477;
  double t16479;
  double t16480;
  double t16481;
  double t16286;
  double t16290;
  double t16291;
  double t16292;
  double t16293;
  double t16296;
  double t16297;
  double t16299;
  double t16485;
  double t16333;
  double t16334;
  double t16493;
  double t16352;
  double t16356;
  double t16360;
  double t16518;
  double t16522;
  double t16523;
  double t16549;
  double t16555;
  double t16566;
  double t16572;
  double t16574;
  double t16575;
  double t16577;
  double t16578;
  double t16579;
  double t16593;
  double t16594;
  double t16595;
  double t16596;
  double t16597;
  double t16598;
  double t16599;
  double t16601;
  double t16602;
  double t16603;
  double t16600;
  double t16609;
  double t16610;
  double t16612;
  double t16614;
  double t16620;
  double t16621;
  double t16622;
  double t16625;
  double t16626;
  double t16627;
  double t16632;
  double t16633;
  double t16634;
  double t16525;
  double t16526;
  double t16527;
  double t16528;
  double t16532;
  double t16534;
  double t16540;
  double t16685;
  double t16686;
  double t16687;
  double t16688;
  double t16689;
  double t16700;
  double t16704;
  double t16708;
  double t16712;
  double t16713;
  double t16714;
  double t16699;
  double t16717;
  double t16719;
  double t16721;
  double t16730;
  double t16731;
  double t16735;
  double t16724;
  double t16726;
  double t16761;
  double t16794;
  double t16833;
  double t16886;
  double t16887;
  double t16888;
  double t16892;
  double t16893;
  double t16894;
  double t9729;
  double t10276;
  double t10522;
  double t16052;
  double t16053;
  double t16055;
  double t16638;
  double t16640;
  double t17093;
  double t16608;
  double t16615;
  double t17209;
  double t17215;
  double t17244;
  double t17246;
  double t17094;
  double t17095;
  double t17096;
  double t17104;
  double t17109;
  double t17110;
  double t17111;
  double t17112;
  double t17113;
  double t17114;
  double t17170;
  double t17199;
  double t17205;
  double t17210;
  double t17226;
  double t17227;
  double t17228;
  double t17235;
  double t17245;
  double t17304;
  double t17309;
  double t17362;
  double t17316;
  double t17317;
  double t17366;
  double t17326;
  double t17327;
  double t17334;
  double t17336;
  double t17400;
  double t17411;
  double t17424;
  double t17435;
  double t17438;
  double t17427;
  double t17481;
  double t17484;
  double t16547;
  double t16567;
  double t16568;
  double t17489;
  double t17493;
  double t17382;
  double t17383;
  double t17415;
  double t17416;
  double t17454;
  double t17455;
  double t17456;
  double t17655;
  double t17466;
  double t17470;
  double t17473;
  double t17660;
  double t17662;
  double t17702;
  double t17717;
  double t17729;
  double t16899;
  double t16900;
  double t16901;
  double t16959;
  double t16960;
  double t16961;
  double t16678;
  double t16682;
  double t16683;
  double t17633;
  double t17634;
  double t17833;
  double t17494;
  double t17834;
  double t17924;
  double t17926;
  double t17977;
  double t17990;
  double t18003;
  double t18014;
  double t17942;
  double t17954;
  double t17956;
  double t17958;
  double t17959;
  double t17961;
  double t17964;
  double t17965;
  double t17966;
  double t17970;
  double t17971;
  double t17972;
  double t17974;
  double t17987;
  double t18005;
  double t18023;
  double t18029;
  double t18045;
  double t18081;
  double t18057;
  double t18058;
  double t18087;
  double t18063;
  double t18064;
  double t18068;
  double t16908;
  double t16909;
  double t16910;
  double t18148;
  double t18166;
  double t18168;
  double t18138;
  double t18139;
  double t18140;
  double t18216;
  double t18222;
  double t16673;
  double t16675;
  double t16676;
  double t16649;
  double t16650;
  t5054 = Cos(var1[10]);
  t5061 = Cos(var1[11]);
  t5086 = -1.*t5054*t5061;
  t5114 = Sin(var1[10]);
  t5132 = Sin(var1[11]);
  t5133 = -1.*t5114*t5132;
  t5486 = t5086 + t5133;
  t8351 = Cos(var1[9]);
  t2618 = Cos(var1[5]);
  t4942 = Sin(var1[9]);
  t8367 = Sin(var1[5]);
  t8507 = Cos(var1[3]);
  t8160 = t2618*t4942*t5486;
  t8377 = t8351*t5486*t8367;
  t8462 = t8160 + t8377;
  t1809 = Sin(var1[3]);
  t8508 = Cos(var1[4]);
  t8514 = -1.*t5061*t5114;
  t8531 = t5054*t5132;
  t8535 = t8514 + t8531;
  t8536 = t8508*t8535;
  t8537 = Sin(var1[4]);
  t8839 = t8351*t2618*t5486;
  t8840 = -1.*t4942*t5486*t8367;
  t8858 = t8839 + t8840;
  t8968 = -1.*t8537*t8858;
  t9423 = t8536 + t8968;
  t11261 = -1.*t8535*t8537;
  t11589 = -1.*t8508*t8858;
  t12674 = t11261 + t11589;
  t14182 = -1.*t5061;
  t14213 = 1. + t14182;
  t14216 = -0.50321*t14213;
  t14221 = -0.19821*t5061;
  t14229 = t14216 + t14221;
  t14237 = -1.*t8351;
  t14242 = 1. + t14237;
  t14246 = -1.*t5054;
  t14247 = 1. + t14246;
  t15012 = -0.28121*t14247;
  t15013 = t5054*t14229;
  t15019 = 0.305*t5114*t5132;
  t15078 = t15012 + t15013 + t15019;
  t14164 = t2618*t4942;
  t14169 = t8351*t8367;
  t14175 = t14164 + t14169;
  t14181 = 0.28121*t5114;
  t14231 = t14229*t5114;
  t14233 = -0.305*t5054*t5132;
  t14235 = t14181 + t14231 + t14233;
  t14243 = -0.15121*t14242;
  t15083 = t8351*t15078;
  t15084 = t14243 + t15083;
  t15097 = t2618*t15084;
  t15099 = 0.15121*t14242;
  t15100 = 0.15121*t8351;
  t15102 = 0.15121*t4942;
  t15103 = t4942*t15078;
  t15112 = t15099 + t15100 + t15102 + t15103;
  t15115 = -1.*t15112*t8367;
  t15117 = t15097 + t15115;
  t13294 = t5054*t5061;
  t13315 = t5114*t5132;
  t13418 = t13294 + t13315;
  t14039 = t8351*t2618*t8535;
  t14051 = -1.*t4942*t8535*t8367;
  t14134 = t14039 + t14051;
  t15293 = t14235*t8537;
  t15294 = t8508*t15117;
  t15295 = t15293 + t15294;
  t15832 = t8508*t13418;
  t15852 = -1.*t8537*t14134;
  t15853 = t15832 + t15852;
  t14236 = -1.*t14235*t8537;
  t15200 = -1.*t8508*t15117;
  t15227 = t14236 + t15200;
  t15884 = t8508*t14235;
  t15885 = -1.*t8537*t15117;
  t15888 = t15884 + t15885;
  t13834 = t13418*t8537;
  t14151 = t8508*t14134;
  t14163 = t13834 + t14151;
  t15869 = t2618*t15112;
  t15870 = t15084*t8367;
  t15871 = t15869 + t15870;
  t16090 = -1.*t2618*t4942*t5486;
  t16159 = -1.*t8351*t5486*t8367;
  t16227 = t16090 + t16159;
  t15854 = -1.*t8351*t2618;
  t15867 = t4942*t8367;
  t15868 = t15854 + t15867;
  t15872 = -1.*t15868*t15871;
  t16076 = t2618*t4942*t8535;
  t16077 = t8351*t8535*t8367;
  t16078 = t16076 + t16077;
  t16266 = -1.*t2618*t15112;
  t16268 = -1.*t15084*t8367;
  t16269 = t16266 + t16268;
  t16079 = t16078*t15871;
  t16283 = -1.*t2618*t4942*t8535;
  t16284 = -1.*t8351*t8535*t8367;
  t16285 = t16283 + t16284;
  t15873 = -1.*t8508*t14175*t15295;
  t15889 = t8537*t14175*t15888;
  t15890 = t15872 + t15873 + t15889;
  t16271 = -1.*t14175*t15871;
  t16278 = -1.*t15868*t15117;
  t16273 = t8351*t2618;
  t16274 = -1.*t4942*t8367;
  t16276 = t16273 + t16274;
  t16282 = t14134*t15871;
  t16287 = t16078*t15117;
  t16080 = t14163*t15295;
  t16084 = t15853*t15888;
  t16085 = t16079 + t16080 + t16084;
  t16228 = var2[0]*t8508*t16227;
  t16230 = t1809*t8537*t16227;
  t16236 = t8507*t8858;
  t16239 = t16230 + t16236;
  t16243 = var2[1]*t16239;
  t16248 = -1.*t8507*t8537*t16227;
  t16253 = t1809*t8858;
  t16255 = t16248 + t16253;
  t16256 = var2[2]*t16255;
  t16258 = -1.*t14175*t15117;
  t16259 = t15872 + t16258;
  t16263 = t14134*t16259;
  t16442 = -0.15121*t4942;
  t16453 = -1.*t4942*t15078;
  t16461 = t16442 + t16453;
  t16375 = t15100 + t15083;
  t16277 = -1.*t16276*t15117;
  t16472 = t2618*t16461;
  t16474 = -1.*t16375*t8367;
  t16477 = t16472 + t16474;
  t16479 = t2618*t16375;
  t16480 = t16461*t8367;
  t16481 = t16479 + t16480;
  t16286 = t16285*t15117;
  t16290 = t14235*t13418;
  t16291 = t14134*t15117;
  t16292 = t16290 + t16079 + t16291;
  t16293 = t14175*t16292;
  t16296 = t8508*t16285*t15890;
  t16297 = Power(t8508,2);
  t16299 = Power(t8537,2);
  t16485 = -1.*t15868*t16481;
  t16333 = -1.*t8508*t16276*t15295;
  t16334 = t8537*t16276*t15888;
  t16493 = t16078*t16481;
  t16352 = t8508*t16285*t15295;
  t16356 = -1.*t8537*t16285*t15888;
  t16360 = t8508*t16276*t16085;
  t16518 = t5061*t5114;
  t16522 = -1.*t5054*t5132;
  t16523 = t16518 + t16522;
  t16549 = t8351*t2618*t16523;
  t16555 = -1.*t4942*t16523*t8367;
  t16566 = t16549 + t16555;
  t16572 = t2618*t4942*t16523;
  t16574 = t8351*t16523*t8367;
  t16575 = t16572 + t16574;
  t16577 = t8508*t5486;
  t16578 = -1.*t8537*t16566;
  t16579 = t16577 + t16578;
  t16593 = -0.28121*t5114;
  t16594 = -1.*t14229*t5114;
  t16595 = 0.305*t5054*t5132;
  t16596 = t16593 + t16594 + t16595;
  t16597 = t2618*t4942*t16596;
  t16598 = t8351*t16596*t8367;
  t16599 = t16597 + t16598;
  t16601 = t8351*t2618*t16596;
  t16602 = -1.*t4942*t16596*t8367;
  t16603 = t16601 + t16602;
  t16600 = -1.*t15868*t16599;
  t16609 = 0.28121*t5054;
  t16610 = t16609 + t15013 + t15019;
  t16612 = t16599*t16078;
  t16614 = t8462*t15871;
  t16620 = t16610*t8537;
  t16621 = t8508*t16603;
  t16622 = t16620 + t16621;
  t16625 = t8508*t16610;
  t16626 = -1.*t8537*t16603;
  t16627 = t16625 + t16626;
  t16632 = t8535*t8537;
  t16633 = t8508*t8858;
  t16634 = t16632 + t16633;
  t16525 = 0.15121*t16523;
  t16526 = 0.15121*t8535;
  t16527 = t16525 + t16526;
  t16528 = var2[9]*t16527;
  t16532 = -1.*t4942*t15084;
  t16534 = t8351*t15112;
  t16540 = t16532 + t16534;
  t16685 = 0.305*t5061*t5114;
  t16686 = t16685 + t14233;
  t16687 = t2618*t4942*t16686;
  t16688 = t8351*t16686*t8367;
  t16689 = t16687 + t16688;
  t16700 = t8351*t2618*t16686;
  t16704 = -1.*t4942*t16686*t8367;
  t16708 = t16700 + t16704;
  t16712 = t2618*t4942*t13418;
  t16713 = t8351*t13418*t8367;
  t16714 = t16712 + t16713;
  t16699 = -1.*t15868*t16689;
  t16717 = -0.305*t5054*t5061;
  t16719 = -0.305*t5114*t5132;
  t16721 = t16717 + t16719;
  t16730 = t8351*t2618*t13418;
  t16731 = -1.*t4942*t13418*t8367;
  t16735 = t16730 + t16731;
  t16724 = t16689*t16078;
  t16726 = t16714*t15871;
  t16761 = t16721*t8537;
  t16794 = t8508*t16708;
  t16833 = t16761 + t16794;
  t16886 = t8508*t16721;
  t16887 = -1.*t8537*t16708;
  t16888 = t16886 + t16887;
  t16892 = t16523*t8537;
  t16893 = t8508*t16735;
  t16894 = t16892 + t16893;
  t9729 = t8507*t8462;
  t10276 = -1.*t1809*t9423;
  t10522 = t9729 + t10276;
  t16052 = -1.*t13418*t8537;
  t16053 = -1.*t8508*t14134;
  t16055 = t16052 + t16053;
  t16638 = t16634*t15295;
  t16640 = t9423*t15888;
  t17093 = -1.*t16078*t15871;
  t16608 = t14235*t8535;
  t16615 = t8858*t15117;
  t17209 = -1.*t14134*t15871;
  t17215 = -1.*t16078*t15117;
  t17244 = t8858*t15871;
  t17246 = t8462*t15117;
  t17094 = -1.*t14163*t15295;
  t17095 = -1.*t15853*t15888;
  t17096 = t17093 + t17094 + t17095;
  t17104 = t16614 + t16638 + t16640;
  t17109 = var2[0]*t8508*t16276;
  t17110 = t1809*t14175;
  t17111 = -1.*t8507*t8537*t16276;
  t17112 = t17110 + t17111;
  t17113 = var2[2]*t17112;
  t17114 = t8507*t14175;
  t17170 = t1809*t8537*t16276;
  t17199 = t17114 + t17170;
  t17205 = var2[1]*t17199;
  t17210 = -1.*t16285*t15117;
  t17226 = -1.*t14235*t13418;
  t17227 = -1.*t14134*t15117;
  t17228 = t17226 + t17093 + t17227;
  t17235 = t8858*t17228;
  t17245 = t16227*t15117;
  t17304 = t16608 + t16614 + t16615;
  t17309 = t14134*t17304;
  t17362 = -1.*t16078*t16481;
  t17316 = -1.*t8508*t16285*t15295;
  t17317 = t8537*t16285*t15888;
  t17366 = t8462*t16481;
  t17326 = t8508*t16227*t15295;
  t17327 = -1.*t8537*t16227*t15888;
  t17334 = t8508*t16227*t17096;
  t17336 = t8508*t16285*t17104;
  t17400 = t14235*t5486;
  t17411 = t8535*t16610;
  t17424 = -1.*t14235*t8535;
  t17435 = Power(t8351,2);
  t17438 = Power(t4942,2);
  t17427 = -1.*t16610*t13418;
  t17481 = t16599*t8462;
  t17484 = t16575*t15871;
  t16547 = t5486*t8537;
  t16567 = t8508*t16566;
  t16568 = t16547 + t16567;
  t17489 = -1.*t16599*t16078;
  t17493 = -1.*t8462*t15871;
  t17382 = t5486*t15078;
  t17383 = t16608 + t17382;
  t17415 = -1.*t8535*t15078;
  t17416 = t17415 + t17226;
  t17454 = -1.*t8351*t8535*t15084;
  t17455 = -1.*t4942*t8535*t15112;
  t17456 = t17226 + t17454 + t17455;
  t17655 = t8535*t16721;
  t17466 = t8351*t5486*t15084;
  t17470 = t4942*t5486*t15112;
  t17473 = t16608 + t17466 + t17470;
  t17660 = -1.*t16523*t14235;
  t17662 = -1.*t16721*t13418;
  t17702 = t16689*t8462;
  t17717 = -1.*t16689*t16078;
  t17729 = -1.*t16714*t15871;
  t16899 = t8508*t16523;
  t16900 = -1.*t8537*t16735;
  t16901 = t16899 + t16900;
  t16959 = t1809*t8537*t14175;
  t16960 = t8507*t15868;
  t16961 = t16959 + t16960;
  t16678 = t8507*t16078;
  t16682 = -1.*t1809*t15853;
  t16683 = t16678 + t16682;
  t17633 = -1.*t16634*t15295;
  t17634 = -1.*t9423*t15888;
  t17833 = t15868*t15871;
  t17494 = -1.*t8858*t15117;
  t17834 = t8508*t14175*t15295;
  t17924 = -1.*t8537*t14175*t15888;
  t17926 = t17833 + t17834 + t17924;
  t17977 = t14175*t15871;
  t17990 = t15868*t15117;
  t18003 = -1.*t8858*t15871;
  t18014 = -1.*t8462*t15117;
  t17942 = t17493 + t17633 + t17634;
  t17954 = var2[0]*t8508*t16285;
  t17956 = t1809*t8537*t16285;
  t17958 = t8507*t14134;
  t17959 = t17956 + t17958;
  t17961 = var2[1]*t17959;
  t17964 = -1.*t8507*t8537*t16285;
  t17965 = t1809*t14134;
  t17966 = t17964 + t17965;
  t17970 = var2[2]*t17966;
  t17971 = t14175*t15117;
  t17972 = t17833 + t17971;
  t17974 = t8858*t17972;
  t17987 = t16276*t15117;
  t18005 = -1.*t16227*t15117;
  t18023 = t17424 + t17493 + t17494;
  t18029 = t14175*t18023;
  t18045 = t8508*t16227*t17926;
  t18081 = t15868*t16481;
  t18057 = t8508*t16276*t15295;
  t18058 = -1.*t8537*t16276*t15888;
  t18087 = -1.*t8462*t16481;
  t18063 = -1.*t8508*t16227*t15295;
  t18064 = t8537*t16227*t15888;
  t18068 = t8508*t16276*t17942;
  t16908 = t1809*t8462;
  t16909 = t8507*t9423;
  t16910 = t16908 + t16909;
  t18148 = t15868*t16599;
  t18166 = -1.*t16599*t8462;
  t18168 = -1.*t16575*t15871;
  t18138 = t4942*t15084;
  t18139 = -1.*t8351*t15112;
  t18140 = t18138 + t18139;
  t18216 = t15868*t16689;
  t18222 = -1.*t16689*t8462;
  t16673 = t1809*t16078;
  t16675 = t8507*t15853;
  t16676 = t16673 + t16675;
  t16649 = 0.28121*t5061;
  t16650 = t14229*t5061;
  p_output1[0]=(-1.*t1809*t8462 - 1.*t8507*t9423)*var2[1] + t10522*var2[2];
  p_output1[1]=t9423*var2[0] - 1.*t12674*t1809*var2[1] + t12674*t8507*var2[2] + (t15853*t15890 + t14175*(t15227*t15853 + t15295*t15853 + t14163*t15888 + t15888*t16055)*t8508 - 1.*t14175*t16085*t8537 + t14163*(t14175*t15227*t8537 + t14175*t15295*t8537))*var2[3];
  p_output1[2]=t16228 + t16243 + t16256 + (t16296 + t14163*(t16271 + t16278 - 1.*t14175*t16269*t16297 - 1.*t14175*t16269*t16299 + t16333 + t16334) + t16360 + t14175*t8508*(t16282 + t16287 + t16352 + t16356 + t14163*t16269*t8508 - 1.*t15853*t16269*t8537))*var2[3] + (t16263 + t16078*(-1.*t14175*t16269 + t16271 + t16277 + t16278) + t15868*(t14134*t16269 + t16282 + t16286 + t16287) + t16293)*var2[4];
  p_output1[3]=t16228 + t16243 + t16256 + (t16296 + t16360 + t14163*(t16271 + t16333 + t16334 - 1.*t14175*t16297*t16477 - 1.*t14175*t16299*t16477 + t16485) + t14175*t8508*(t16282 + t16352 + t16356 + t16493 + t14163*t16477*t8508 - 1.*t15853*t16477*t8537))*var2[3] + (t16263 + t16293 + t16078*(t16271 + t16277 - 1.*t14175*t16477 + t16485) + t15868*(t16282 + t16286 + t14134*t16477 + t16493))*var2[4] + t13418*(-1.*t15112*t4942 - 1.*t16461*t4942 - 1.*t15084*t8351 + t16375*t8351)*var2[5];
  p_output1[4]=t16528 + t16568*var2[0] + (-1.*t16579*t1809 + t16575*t8507)*var2[1] + (t16575*t1809 + t16579*t8507)*var2[2] + (t15890*t16634 + t14175*(t16612 + t16614 + t14163*t16622 + t15853*t16627 + t16638 + t16640)*t8508 + t14163*(t16600 - 1.*t14175*t16622*t8508 + t14175*t16627*t8537))*var2[3] + (t16078*(t16600 - 1.*t14175*t16603) + t15868*(t14134*t16603 + t16608 + t13418*t16610 + t16612 + t16614 + t16615) + t16259*t8462)*var2[4] + t16540*t8535*var2[5];
  p_output1[5]=t16528 + t14163*var2[0] + t16683*var2[1] + t16676*var2[2] + (t15890*t16894 + t14175*(t16724 + t16726 + t14163*t16833 + t15853*t16888 + t15295*t16894 + t15888*t16901)*t8508 + t14163*(t16699 - 1.*t14175*t16833*t8508 + t14175*t16888*t8537))*var2[3] + (t16078*(t16699 - 1.*t14175*t16708) + t16259*t16714 + t15868*(t14235*t16523 + t14134*t16708 + t13418*t16721 + t16724 + t16726 + t15117*t16735))*var2[4] + t16523*t16540*var2[5] + (t16649 + t16650 - 0.305*Power(t5061,2))*var2[10];
  p_output1[6]=t16634;
  p_output1[7]=t10522;
  p_output1[8]=t16910;
  p_output1[9]=t14163*t15890 + t14175*t16085*t8508;
  p_output1[10]=t16078*t16259 + t15868*t16292;
  p_output1[11]=t13418*t16540;
  p_output1[12]=0.15121*t13418 + 0.15121*t5486;
  p_output1[13]=0.28121*t5132 + t14229*t5132 - 0.305*t5061*t5132;
  p_output1[14]=(-1.*t15868*t1809 + t14175*t8507*t8537)*var2[1] + t16961*var2[2];
  p_output1[15]=-1.*t14175*t8537*var2[0] + t14175*t1809*t8508*var2[1] - 1.*t14175*t8507*t8508*var2[2] + ((-1.*t15227*t15853 - 1.*t15295*t15853 - 1.*t14163*t15888 - 1.*t15888*t16055)*t16634 + t15853*t17104 + t17096*t9423 + t14163*(t12674*t15888 + t15888*t16634 + t15227*t9423 + t15295*t9423))*var2[3];
  p_output1[16]=t17109 + t17113 + t17205 + (t17334 + t17336 + t16634*(t17209 + t17215 + t17316 + t17317 - 1.*t14163*t16269*t8508 + t15853*t16269*t8537) + t14163*(t17244 + t17246 + t17326 + t17327 + t16269*t16634*t8508 - 1.*t16269*t8537*t9423))*var2[3] + (t17235 + t17309 + (-1.*t14134*t16269 + t17209 + t17210 + t17215)*t8462 + t16078*(t17244 + t17245 + t17246 + t16269*t8858))*var2[4];
  p_output1[17]=t17109 + t17113 + t17205 + (t17334 + t17336 + t16634*(t17209 + t17316 + t17317 + t17362 - 1.*t14163*t16477*t8508 + t15853*t16477*t8537) + t14163*(t17244 + t17326 + t17327 + t17366 + t16477*t16634*t8508 - 1.*t16477*t8537*t9423))*var2[3] + (t17235 + t17309 + (-1.*t14134*t16477 + t17209 + t17210 + t17362)*t8462 + t16078*(t17244 + t17245 + t17366 + t16477*t8858))*var2[4] + (t13418*(-1.*t15084*t4942*t5486 + t16375*t4942*t5486 + t15112*t5486*t8351 + t16461*t5486*t8351) + t8535*(t15084*t4942*t8535 - 1.*t16375*t4942*t8535 - 1.*t15112*t8351*t8535 - 1.*t16461*t8351*t8535))*var2[5];
  p_output1[18]=(t16568*t17096 + t16634*t17104 + t16634*(-1.*t14163*t16622 - 1.*t15853*t16627 + t17489 + t17493 + t17633 + t17634) + t14163*(t15295*t16568 + t15888*t16579 + t16622*t16634 + t17481 + t17484 + t16627*t9423))*var2[3] + (t16575*t17228 + t17304*t8462 + (-1.*t14134*t16603 + t17424 + t17427 + t17489 + t17493 + t17494)*t8462 + t16078*(t15117*t16566 + t17400 + t17411 + t17481 + t17484 + t16603*t8858))*var2[4] + (t17456*t5486 + t13418*(t17400 + t17411 + t15112*t16523*t4942 + t16596*t17435*t5486 + t16596*t17438*t5486 + t15084*t16523*t8351) + t17473*t8535 + t8535*(t17424 + t17427 - 1.*t15112*t4942*t5486 - 1.*t15084*t5486*t8351 - 1.*t16596*t17435*t8535 - 1.*t16596*t17438*t8535))*var2[5] + (t17416*t5486 + t13418*(t15078*t16523 + t17400 + t17411 + t16596*t5486) + t17383*t8535 + t8535*(t17424 + t17427 - 1.*t15078*t5486 - 1.*t16596*t8535))*var2[9];
  p_output1[19]=(t14163*t17096 + t16894*t17104 + t16634*(-1.*t14163*t16833 - 1.*t15853*t16888 - 1.*t15295*t16894 - 1.*t15888*t16901 + t17717 + t17729) + t14163*(t16079 + t16080 + t16084 + t16634*t16833 + t17702 + t16888*t9423))*var2[3] + (t16078*t17228 + t16714*t17304 + (-1.*t14134*t16708 - 1.*t15117*t16735 + t17660 + t17662 + t17717 + t17729)*t8462 + t16078*(t16079 + t16290 + t16291 + t17655 + t17702 + t16708*t8858))*var2[4] + (t13418*t17456 + t16523*t17473 + t8535*(t17660 + t17662 - 1.*t13418*t15112*t4942 - 1.*t13418*t15084*t8351 - 1.*t16686*t17435*t8535 - 1.*t16686*t17438*t8535) + t13418*(t16290 + t17655 + t16686*t17435*t5486 + t16686*t17438*t5486 + t15112*t4942*t8535 + t15084*t8351*t8535))*var2[5] + (t16523*t17383 + t13418*t17416 + t13418*(t16290 + t17655 + t16686*t5486 + t15078*t8535) + t8535*(-1.*t13418*t15078 + t17660 + t17662 - 1.*t16686*t8535))*var2[9];
  p_output1[20]=t14175*t8508;
  p_output1[21]=t16961;
  p_output1[22]=t15868*t1809 - 1.*t14175*t8507*t8537;
  p_output1[23]=t16634*t17096 + t14163*t17104;
  p_output1[24]=t16078*t17304 + t17228*t8462;
  p_output1[25]=t13418*t17473 + t17456*t8535;
  p_output1[26]=-0.15121 + t13418*t17383 + t17416*t8535;
  p_output1[27]=(-1.*t16078*t1809 - 1.*t15853*t8507)*var2[1] + t16683*var2[2];
  p_output1[28]=t15853*var2[0] - 1.*t16055*t1809*var2[1] + t16055*t8507*var2[2] + (-1.*t14175*t17942*t8537 + t16634*(-1.*t14175*t15227*t8537 - 1.*t14175*t15295*t8537) + t17926*t9423 + t14175*t8508*(-1.*t12674*t15888 - 1.*t15888*t16634 - 1.*t15227*t9423 - 1.*t15295*t9423))*var2[3];
  p_output1[29]=t17954 + t17961 + t17970 + (t18045 + t16634*(t14175*t16269*t16297 + t14175*t16269*t16299 + t17977 + t17990 + t18057 + t18058) + t18068 + t14175*t8508*(t18003 + t18014 + t18063 + t18064 - 1.*t16269*t16634*t8508 + t16269*t8537*t9423))*var2[3] + (t17974 + t18029 + (t14175*t16269 + t17977 + t17987 + t17990)*t8462 + t15868*(t18003 + t18005 + t18014 - 1.*t16269*t8858))*var2[4];
  p_output1[30]=t17954 + t17961 + t17970 + (t18045 + t18068 + t16634*(t14175*t16297*t16477 + t14175*t16299*t16477 + t17977 + t18057 + t18058 + t18081) + t14175*t8508*(t18003 + t18063 + t18064 + t18087 - 1.*t16477*t16634*t8508 + t16477*t8537*t9423))*var2[3] + (t17974 + t18029 + (t14175*t16477 + t17977 + t17987 + t18081)*t8462 + t15868*(t18003 + t18005 + t18087 - 1.*t16477*t8858))*var2[4] + (t15112*t4942 + t16461*t4942 + t15084*t8351 - 1.*t16375*t8351)*t8535*var2[5];
  p_output1[31]=t16634*var2[0] + t10522*var2[1] + t16910*var2[2] + (t16568*t17926 + t16634*(t18148 + t14175*t16622*t8508 - 1.*t14175*t16627*t8537) + t14175*t8508*(-1.*t15295*t16568 - 1.*t15888*t16579 - 1.*t16622*t16634 + t18166 + t18168 - 1.*t16627*t9423))*var2[3] + (t16575*t17972 + (t14175*t16603 + t18148)*t8462 + t15868*(-1.*t15117*t16566 + t18166 + t18168 - 1.*t14235*t5486 - 1.*t16610*t8535 - 1.*t16603*t8858))*var2[4] + t18140*t5486*var2[5];
  p_output1[32]=t16894*var2[0] + (-1.*t16901*t1809 + t16714*t8507)*var2[1] + (t16714*t1809 + t16901*t8507)*var2[2] + (t14163*t17926 + t16634*(t18216 + t14175*t16833*t8508 - 1.*t14175*t16888*t8537) + t14175*t8508*(-1.*t16634*t16833 + t17093 + t17094 + t17095 + t18222 - 1.*t16888*t9423))*var2[3] + (t16078*t17972 + (t14175*t16708 + t18216)*t8462 + t15868*(t17093 + t17226 + t17227 + t18222 - 1.*t16721*t8535 - 1.*t16708*t8858))*var2[4] + t13418*t18140*var2[5] + (-0.28121*t5132 - 1.*t14229*t5132 + 0.305*t5061*t5132)*var2[10];
  p_output1[33]=t14163;
  p_output1[34]=t16683;
  p_output1[35]=t16676;
  p_output1[36]=t16634*t17926 + t14175*t17942*t8508;
  p_output1[37]=t15868*t18023 + t17972*t8462;
  p_output1[38]=t18140*t8535;
  p_output1[39]=t16649 + t16650 + 0.305*Power(t5132,2);
  p_output1[40]=-0.305;
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
