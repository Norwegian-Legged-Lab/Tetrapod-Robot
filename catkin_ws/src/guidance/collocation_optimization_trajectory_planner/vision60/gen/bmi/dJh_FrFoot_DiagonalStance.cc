/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:56:14 GMT+02:00
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
  double t5217;
  double t5184;
  double t5187;
  double t5222;
  double t5202;
  double t5223;
  double t5224;
  double t5106;
  double t5241;
  double t5264;
  double t5361;
  double t5160;
  double t5367;
  double t5451;
  double t5226;
  double t5402;
  double t5412;
  double t4846;
  double t5453;
  double t5460;
  double t5463;
  double t5467;
  double t5469;
  double t5471;
  double t5473;
  double t5544;
  double t5579;
  double t5918;
  double t5950;
  double t5951;
  double t6078;
  double t6103;
  double t6109;
  double t6029;
  double t6113;
  double t6115;
  double t6120;
  double t6149;
  double t6171;
  double t6191;
  double t6199;
  double t6208;
  double t6465;
  double t6487;
  double t6495;
  double t6606;
  double t6610;
  double t6611;
  double t6685;
  double t6719;
  double t6881;
  double t6935;
  double t7048;
  double t7251;
  double t6605;
  double t6622;
  double t7579;
  double t7663;
  double t6604;
  double t7705;
  double t9077;
  double t29159;
  double t29277;
  double t32627;
  double t33302;
  double t33873;
  double t33878;
  double t37249;
  double t37250;
  double t40272;
  double t40997;
  double t47467;
  double t47541;
  double t47664;
  double t47679;
  double t47715;
  double t51972;
  double t52082;
  double t52083;
  double t51549;
  double t51964;
  double t51968;
  double t48460;
  double t48466;
  double t48493;
  double t6552;
  double t6557;
  double t6603;
  double t18436;
  double t47986;
  double t48403;
  double t52153;
  double t52194;
  double t52204;
  double t52141;
  double t52143;
  double t52144;
  double t59651;
  double t59663;
  double t59664;
  double t59443;
  double t59492;
  double t59495;
  double t60257;
  double t60263;
  double t60264;
  double t52210;
  double t59591;
  double t60428;
  double t60430;
  double t60438;
  double t60448;
  double t60531;
  double t60534;
  double t60538;
  double t52214;
  double t59268;
  double t59310;
  double t60725;
  double t60731;
  double t59592;
  double t59606;
  double t59610;
  double t59694;
  double t59796;
  double t62100;
  double t62201;
  double t59713;
  double t59731;
  double t59732;
  double t62521;
  double t62541;
  double t59804;
  double t59808;
  double t59814;
  double t60030;
  double t60215;
  double t63392;
  double t60032;
  double t60037;
  double t60046;
  double t64858;
  double t64860;
  double t60226;
  double t60227;
  double t60228;
  double t60330;
  double t60468;
  double t64898;
  double t64901;
  double t64905;
  double t64909;
  double t65088;
  double t65116;
  double t65117;
  double t65118;
  double t60337;
  double t60342;
  double t64907;
  double t65089;
  double t65097;
  double t65103;
  double t60483;
  double t60487;
  double t65128;
  double t65129;
  double t65133;
  double t65137;
  double t65138;
  double t65292;
  double t65293;
  double t65294;
  double t65296;
  double t65297;
  double t65298;
  double t65300;
  double t65301;
  double t65302;
  double t65304;
  double t65305;
  double t65306;
  double t62425;
  double t62357;
  double t65308;
  double t65309;
  double t65310;
  double t65328;
  double t65330;
  double t62371;
  double t62399;
  double t65338;
  double t65340;
  double t62479;
  double t62483;
  double t65359;
  double t65361;
  double t65111;
  double t65112;
  double t65113;
  double t65366;
  double t65367;
  double t65315;
  double t65316;
  double t65317;
  double t63226;
  double t64863;
  double t63231;
  double t63234;
  double t65580;
  double t65582;
  double t65130;
  double t65586;
  double t65588;
  double t64864;
  double t64865;
  double t65607;
  double t65610;
  double t65614;
  double t65616;
  double t64895;
  double t64896;
  double t65639;
  double t65640;
  double t65641;
  double t65656;
  double t65657;
  double t6275;
  double t6298;
  double t6299;
  double t65649;
  double t65650;
  double t65651;
  double t65652;
  double t65647;
  double t65655;
  double t65658;
  double t65680;
  double t65681;
  double t65682;
  double t65671;
  double t65672;
  double t65673;
  double t65676;
  double t65677;
  double t65678;
  double t65805;
  double t65807;
  double t65808;
  double t65683;
  double t65686;
  double t65811;
  double t65819;
  double t65821;
  double t65822;
  double t65824;
  double t65825;
  double t65826;
  double t65828;
  double t65829;
  double t65831;
  double t65333;
  double t65334;
  double t65335;
  double t65343;
  double t65344;
  double t65345;
  double t65659;
  double t65092;
  double t65093;
  double t65853;
  double t65854;
  double t65861;
  double t65859;
  double t65850;
  double t65855;
  double t65888;
  double t65891;
  double t65894;
  double t65836;
  double t65837;
  double t65838;
  double t65576;
  double t65577;
  double t65976;
  double t65998;
  double t66002;
  double t66027;
  double t66028;
  double t66029;
  double t66041;
  double t66042;
  double t66043;
  double t66051;
  double t66052;
  double t66053;
  double t66057;
  double t66058;
  double t66059;
  double t66061;
  double t66062;
  double t66063;
  double t66038;
  double t66039;
  double t66044;
  double t66077;
  double t66078;
  double t66079;
  double t66073;
  double t66074;
  double t66075;
  double t66080;
  double t66083;
  double t66090;
  double t66091;
  double t66092;
  double t66094;
  double t66095;
  double t66096;
  double t65591;
  double t65592;
  double t65867;
  double t65868;
  double t65875;
  double t65876;
  double t66109;
  double t66114;
  double t66119;
  double t66115;
  double t66117;
  double t66110;
  double t66137;
  double t66140;
  double t66050;
  double t66054;
  double t66055;
  double t66144;
  double t5847;
  double t5867;
  double t5877;
  double t66173;
  double t66175;
  double t66191;
  double t66194;
  double t66197;
  t5217 = Cos(var1[13]);
  t5184 = Cos(var1[14]);
  t5187 = Sin(var1[13]);
  t5222 = Sin(var1[14]);
  t5202 = t5184*t5187;
  t5223 = -1.*t5217*t5222;
  t5224 = t5202 + t5223;
  t5106 = Cos(var1[5]);
  t5241 = t5217*t5184;
  t5264 = t5187*t5222;
  t5361 = t5241 + t5264;
  t5160 = Sin(var1[12]);
  t5367 = Sin(var1[5]);
  t5451 = Cos(var1[3]);
  t5226 = -1.*t5106*t5160*t5224;
  t5402 = t5361*t5367;
  t5412 = t5226 + t5402;
  t4846 = Sin(var1[3]);
  t5453 = Cos(var1[12]);
  t5460 = Cos(var1[4]);
  t5463 = t5453*t5460*t5224;
  t5467 = Sin(var1[4]);
  t5469 = t5106*t5361;
  t5471 = t5160*t5224*t5367;
  t5473 = t5469 + t5471;
  t5544 = -1.*t5467*t5473;
  t5579 = t5463 + t5544;
  t5918 = t5460*t5160;
  t5950 = t5453*t5467*t5367;
  t5951 = t5918 + t5950;
  t6078 = -1.*t5184*t5187;
  t6103 = t5217*t5222;
  t6109 = t6078 + t6103;
  t6029 = -1.*t5106*t5160*t5361;
  t6113 = t6109*t5367;
  t6115 = t6029 + t6113;
  t6120 = t5453*t5460*t5361;
  t6149 = t5106*t6109;
  t6171 = t5160*t5361*t5367;
  t6191 = t6149 + t6171;
  t6199 = -1.*t5467*t6191;
  t6208 = t6120 + t6199;
  t6465 = -1.*t5453*t5224*t5467;
  t6487 = -1.*t5460*t5473;
  t6495 = t6465 + t6487;
  t6606 = -0.0641*t5184;
  t6610 = -0.28*t5222;
  t6611 = t6606 + t6610;
  t6685 = -1.*t5184;
  t6719 = 1. + t6685;
  t6881 = 0.075*t6719;
  t6935 = 0.355*t5184;
  t7048 = -0.0641*t5222;
  t7251 = t6881 + t6935 + t7048;
  t6605 = -0.325*t5187;
  t6622 = t5217*t6611;
  t7579 = t5187*t7251;
  t7663 = t6605 + t6622 + t7579;
  t6604 = -0.068*t5160;
  t7705 = t5453*t7663;
  t9077 = t6604 + t7705;
  t29159 = -1.*t5217;
  t29277 = 1. + t29159;
  t32627 = 0.325*t29277;
  t33302 = -1.*t5187*t6611;
  t33873 = t5217*t7251;
  t33878 = t32627 + t33302 + t33873;
  t37249 = t5106*t33878;
  t37250 = -1.*t5453;
  t40272 = 1. + t37250;
  t40997 = -0.1575*t40272;
  t47467 = -0.2255*t5453;
  t47541 = -1.*t5160*t7663;
  t47664 = t40997 + t47467 + t47541;
  t47679 = -1.*t47664*t5367;
  t47715 = t37249 + t47679;
  t51972 = t5460*t9077;
  t52082 = -1.*t5467*t47715;
  t52083 = t51972 + t52082;
  t51549 = t5160*t5467;
  t51964 = -1.*t5453*t5460*t5367;
  t51968 = t51549 + t51964;
  t48460 = t9077*t5467;
  t48466 = t5460*t47715;
  t48493 = t48460 + t48466;
  t6552 = t5453*t5361*t5467;
  t6557 = t5460*t6191;
  t6603 = t6552 + t6557;
  t18436 = -1.*t9077*t5467;
  t47986 = -1.*t5460*t47715;
  t48403 = t18436 + t47986;
  t52153 = t5106*t47664;
  t52194 = t33878*t5367;
  t52204 = t52153 + t52194;
  t52141 = -1.*t5160*t5467;
  t52143 = t5453*t5460*t5367;
  t52144 = t52141 + t52143;
  t59651 = t5453*t5224*t5467;
  t59663 = t5460*t5473;
  t59664 = t59651 + t59663;
  t59443 = -1.*t5453*t5361*t5467;
  t59492 = -1.*t5460*t6191;
  t59495 = t59443 + t59492;
  t60257 = t5106*t5160*t5224;
  t60263 = -1.*t5361*t5367;
  t60264 = t60257 + t60263;
  t52210 = -1.*t5453*t5106*t52204;
  t59591 = t52204*t6115;
  t60428 = -1.*t5106*t47664;
  t60430 = -1.*t33878*t5367;
  t60438 = t60428 + t60430;
  t60448 = t5453*t5367*t52204;
  t60531 = t5106*t5160*t5361;
  t60534 = -1.*t6109*t5367;
  t60538 = t60531 + t60534;
  t52214 = -1.*t51968*t48493;
  t59268 = -1.*t5951*t52083;
  t59310 = t52210 + t52214 + t59268;
  t60725 = t47715*t6115;
  t60731 = t52204*t6191;
  t59592 = t48493*t6603;
  t59606 = t52083*t6208;
  t59610 = t59591 + t59592 + t59606;
  t59694 = t52204*t5412;
  t59796 = -1.*t52204*t6115;
  t62100 = t52204*t5473;
  t62201 = t47715*t5412;
  t59713 = t48493*t59664;
  t59731 = t52083*t5579;
  t59732 = t59694 + t59713 + t59731;
  t62521 = -1.*t47715*t6115;
  t62541 = -1.*t52204*t6191;
  t59804 = -1.*t48493*t6603;
  t59808 = -1.*t52083*t6208;
  t59814 = t59796 + t59804 + t59808;
  t60030 = t5453*t5106*t52204;
  t60215 = -1.*t52204*t5412;
  t63392 = -1.*t5453*t5367*t52204;
  t60032 = t51968*t48493;
  t60037 = t5951*t52083;
  t60046 = t60030 + t60032 + t60037;
  t64858 = -1.*t52204*t5473;
  t64860 = -1.*t47715*t5412;
  t60226 = -1.*t48493*t59664;
  t60227 = -1.*t52083*t5579;
  t60228 = t60215 + t60226 + t60227;
  t60330 = -1.*t5160*t9077;
  t60468 = t5453*t9077*t5361;
  t64898 = 0.068*t5160;
  t64901 = -1.*t5453*t7663;
  t64905 = t64898 + t64901;
  t64909 = -0.068*t5453;
  t65088 = t64909 + t47541;
  t65116 = -1.*t5460*t5160*t5224;
  t65117 = -1.*t5453*t5224*t5467*t5367;
  t65118 = t65116 + t65117;
  t60337 = t5453*t5367*t47715;
  t60342 = t60330 + t60337 + t52210;
  t64907 = -1.*t5453*t9077;
  t65089 = -1.*t5160*t65088;
  t65097 = -1.*t5160*t9077*t5361;
  t65103 = t5453*t65088*t5361;
  t60483 = t47715*t6191;
  t60487 = t60468 + t59591 + t60483;
  t65128 = Power(t5106,2);
  t65129 = -1.*t5453*t65128*t64905;
  t65133 = t5106*t5160*t52204;
  t65137 = -1.*t5453*t5106*t5361*t52204;
  t65138 = t5106*t64905*t6115;
  t65292 = -1.*t5160*t5361*t5467;
  t65293 = t5453*t5460*t5361*t5367;
  t65294 = t65292 + t65293;
  t65296 = t65088*t5467;
  t65297 = -1.*t5460*t64905*t5367;
  t65298 = t65296 + t65297;
  t65300 = t5460*t65088;
  t65301 = t64905*t5467*t5367;
  t65302 = t65300 + t65301;
  t65304 = t5453*t5467;
  t65305 = t5460*t5160*t5367;
  t65306 = t65304 + t65305;
  t62425 = -1.*t5453*t9077*t5361;
  t62357 = t5453*t9077*t5224;
  t65308 = t5453*t5460;
  t65309 = -1.*t5160*t5467*t5367;
  t65310 = t65308 + t65309;
  t65328 = -1.*t5160*t9077*t5224;
  t65330 = t5453*t65088*t5224;
  t62371 = t47715*t5473;
  t62399 = t62357 + t62371 + t59694;
  t65338 = t5160*t9077*t5361;
  t65340 = -1.*t5453*t65088*t5361;
  t62479 = -1.*t47715*t6191;
  t62483 = t62425 + t59796 + t62479;
  t65359 = -1.*t5453*t5106*t5224*t52204;
  t65361 = t5106*t64905*t5412;
  t65111 = -1.*t5160*t5224*t5467;
  t65112 = t5453*t5460*t5224*t5367;
  t65113 = t65111 + t65112;
  t65366 = t5453*t5106*t5361*t52204;
  t65367 = -1.*t5106*t64905*t6115;
  t65315 = -1.*t5460*t5160*t5361;
  t65316 = -1.*t5453*t5361*t5467*t5367;
  t65317 = t65315 + t65316;
  t63226 = t5160*t9077;
  t64863 = -1.*t5453*t9077*t5224;
  t63231 = -1.*t5453*t5367*t47715;
  t63234 = t63226 + t63231 + t60030;
  t65580 = t5453*t9077;
  t65582 = t5160*t65088;
  t65130 = Power(t5367,2);
  t65586 = t5160*t9077*t5224;
  t65588 = -1.*t5453*t65088*t5224;
  t64864 = -1.*t47715*t5473;
  t64865 = t64863 + t64864 + t60215;
  t65607 = t5453*t65128*t64905;
  t65610 = -1.*t5106*t5160*t52204;
  t65614 = t5453*t5106*t5224*t52204;
  t65616 = -1.*t5106*t64905*t5412;
  t64895 = -1.*t5453*t47664;
  t64896 = t60330 + t64895;
  t65639 = -1.*t5217*t5184;
  t65640 = -1.*t5187*t5222;
  t65641 = t65639 + t65640;
  t65656 = -0.325*t5217;
  t65657 = t65656 + t33302 + t33873;
  t6275 = t5451*t6115;
  t6298 = -1.*t4846*t6208;
  t6299 = t6275 + t6298;
  t65649 = 0.325*t5187;
  t65650 = -1.*t5217*t6611;
  t65651 = -1.*t5187*t7251;
  t65652 = t65649 + t65650 + t65651;
  t65647 = t5453*t9077*t6109;
  t65655 = Power(t5453,2);
  t65658 = t65655*t65657*t5361;
  t65680 = -1.*t5106*t5160*t65657;
  t65681 = t65652*t5367;
  t65682 = t65680 + t65681;
  t65671 = -1.*t5106*t5160*t6109;
  t65672 = t65641*t5367;
  t65673 = t65671 + t65672;
  t65676 = t5106*t65652;
  t65677 = t5160*t65657*t5367;
  t65678 = t65676 + t65677;
  t65805 = t5106*t65641;
  t65807 = t5160*t6109*t5367;
  t65808 = t65805 + t65807;
  t65683 = -1.*t5453*t5106*t65682;
  t65686 = t65682*t6115;
  t65811 = t52204*t65673;
  t65819 = t5453*t6109*t5467;
  t65821 = t5460*t65808;
  t65822 = t65819 + t65821;
  t65824 = t5453*t65657*t5467;
  t65825 = t5460*t65678;
  t65826 = t65824 + t65825;
  t65828 = t5453*t5460*t65657;
  t65829 = -1.*t5467*t65678;
  t65831 = t65828 + t65829;
  t65333 = -1.*t33878*t6109;
  t65334 = t5160*t47664*t5361;
  t65335 = t65333 + t62425 + t65334;
  t65343 = -1.*t5160*t47664*t5224;
  t65344 = t33878*t5361;
  t65345 = t62357 + t65343 + t65344;
  t65659 = Power(t5160,2);
  t65092 = t33878*t6109;
  t65093 = -1.*t5160*t47664*t5361;
  t65853 = -1.*t65652*t6109;
  t65854 = -1.*t33878*t65641;
  t65861 = t65652*t5361;
  t65859 = t65655*t65657*t5224;
  t65850 = -1.*t5453*t9077*t6109;
  t65855 = -1.*t65655*t65657*t5361;
  t65888 = t65682*t5412;
  t65891 = -1.*t65682*t6115;
  t65894 = -1.*t52204*t65673;
  t65836 = t5453*t5460*t6109;
  t65837 = -1.*t5467*t65808;
  t65838 = t65836 + t65837;
  t65576 = t5453*t47664;
  t65577 = t63226 + t65576;
  t65976 = -1.*t65655*t65657*t5224;
  t65998 = t5453*t5106*t65682;
  t66002 = -1.*t65682*t5412;
  t66027 = -0.28*t5184;
  t66028 = 0.0641*t5222;
  t66029 = t66027 + t66028;
  t66041 = t5187*t6611;
  t66042 = t5217*t66029;
  t66043 = t66041 + t66042;
  t66051 = t5106*t5224;
  t66052 = t5160*t65641*t5367;
  t66053 = t66051 + t66052;
  t66057 = -1.*t5106*t5160*t65641;
  t66058 = t5224*t5367;
  t66059 = t66057 + t66058;
  t66061 = t5453*t5460*t65641;
  t66062 = -1.*t5467*t66053;
  t66063 = t66061 + t66062;
  t66038 = -1.*t5187*t66029;
  t66039 = t6622 + t66038;
  t66044 = t65655*t66043*t5361;
  t66077 = -1.*t5106*t5160*t66043;
  t66078 = t66039*t5367;
  t66079 = t66077 + t66078;
  t66073 = t5106*t66039;
  t66074 = t5160*t66043*t5367;
  t66075 = t66073 + t66074;
  t66080 = -1.*t5453*t5106*t66079;
  t66083 = t66079*t6115;
  t66090 = t5453*t66043*t5467;
  t66091 = t5460*t66075;
  t66092 = t66090 + t66091;
  t66094 = t5453*t5460*t66043;
  t66095 = -1.*t5467*t66075;
  t66096 = t66094 + t66095;
  t65591 = t5160*t47664*t5224;
  t65592 = -1.*t33878*t5361;
  t65867 = t7663*t5224;
  t65868 = t65867 + t65344;
  t65875 = -1.*t7663*t5361;
  t65876 = t65333 + t65875;
  t66109 = -1.*t66039*t6109;
  t66114 = t33878*t5224;
  t66119 = t66039*t5361;
  t66115 = t65655*t66043*t5224;
  t66117 = t5453*t9077*t65641;
  t66110 = -1.*t65655*t66043*t5361;
  t66137 = t52204*t66059;
  t66140 = t66079*t5412;
  t66050 = t5453*t65641*t5467;
  t66054 = t5460*t66053;
  t66055 = t66050 + t66054;
  t66144 = -1.*t66079*t6115;
  t5847 = t5451*t5412;
  t5867 = -1.*t4846*t5579;
  t5877 = t5847 + t5867;
  t66173 = -1.*t65655*t66043*t5224;
  t66175 = -1.*t5453*t9077*t65641;
  t66191 = t5453*t5106*t66079;
  t66194 = -1.*t52204*t66059;
  t66197 = -1.*t66079*t5412;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t4846*t5412 - 1.*t5451*t5579)*var2[1] + t5877*var2[2];
  p_output1[10]=(-1.*t4846*t5106*t5453 - 1.*t5451*t5951)*var2[1] + (t5106*t5451*t5453 - 1.*t4846*t5951)*var2[2];
  p_output1[11]=(-1.*t4846*t6115 - 1.*t5451*t6208)*var2[1] + t6299*var2[2];
  p_output1[12]=t5579*var2[0] - 1.*t4846*t6495*var2[1] + t5451*t6495*var2[2] + (t5951*t59610 + t59310*t6208 + (-1.*t51968*t52083 - 1.*t52083*t52144 - 1.*t48403*t5951 - 1.*t48493*t5951)*t6603 + t51968*(t52083*t59495 + t48403*t6208 + t48493*t6208 + t52083*t6603))*var2[3];
  p_output1[13]=t5951*var2[0] - 1.*t4846*t52144*var2[1] + t52144*t5451*var2[2] + (t5579*t59814 + t59732*t6208 + (t48403*t5579 + t48493*t5579 + t52083*t59664 + t52083*t6495)*t6603 + t59664*(-1.*t52083*t59495 - 1.*t48403*t6208 - 1.*t48493*t6208 - 1.*t52083*t6603))*var2[3];
  p_output1[14]=t6208*var2[0] - 1.*t4846*t59495*var2[1] + t5451*t59495*var2[2] + ((t51968*t52083 + t52083*t52144 + t48403*t5951 + t48493*t5951)*t59664 + t5579*t60046 + t5951*t60228 + t51968*(-1.*t48403*t5579 - 1.*t48493*t5579 - 1.*t52083*t59664 - 1.*t52083*t6495))*var2[3];
  p_output1[15]=t5460*t60264*var2[0] + (t5451*t5473 + t4846*t5467*t60264)*var2[1] + (t4846*t5473 - 1.*t5451*t5467*t60264)*var2[2] + (-1.*t5106*t5453*t5460*t59610 + t5460*t59310*t60538 + (-1.*t47715*t5106*t5453 + t48493*t5106*t5453*t5460 - 1.*t5106*t52083*t5453*t5467 - 1.*t51968*t5460*t60438 + t5467*t5951*t60438 + t60448)*t6603 + t51968*(t48493*t5460*t60538 - 1.*t52083*t5467*t60538 + t60725 + t60731 - 1.*t5467*t60438*t6208 + t5460*t60438*t6603))*var2[3] + (-1.*t5367*t5453*t60487 + (t5367*t5453*t60438 + t60448)*t6115 + t60342*t6191 + t5106*t5453*(t47715*t60538 + t60725 + t60731 + t60438*t6191))*var2[4];
  p_output1[16]=-1.*t5106*t5453*t5460*var2[0] + (-1.*t5367*t5451*t5453 - 1.*t4846*t5106*t5453*t5467)*var2[1] + (-1.*t4846*t5367*t5453 + t5106*t5451*t5453*t5467)*var2[2] + (t5460*t59814*t60264 + t5460*t59732*t60538 + (t48493*t5460*t60264 - 1.*t52083*t5467*t60264 - 1.*t5467*t5579*t60438 + t5460*t59664*t60438 + t62100 + t62201)*t6603 + t59664*(-1.*t48493*t5460*t60538 + t52083*t5467*t60538 + t5467*t60438*t6208 + t62521 + t62541 - 1.*t5460*t60438*t6603))*var2[3] + (t6115*(t47715*t60264 + t5473*t60438 + t62100 + t62201) + t6191*t62399 + t5473*t62483 + t5412*(-1.*t47715*t60538 - 1.*t60438*t6191 + t62521 + t62541))*var2[4];
  p_output1[17]=t5460*t60538*var2[0] + (t4846*t5467*t60538 + t5451*t6191)*var2[1] + (-1.*t5451*t5467*t60538 + t4846*t6191)*var2[2] + (-1.*t5106*t5453*t5460*t60228 + t5460*t60046*t60264 + t59664*(t47715*t5106*t5453 - 1.*t48493*t5106*t5453*t5460 + t5106*t52083*t5453*t5467 + t51968*t5460*t60438 - 1.*t5467*t5951*t60438 + t63392) + t51968*(-1.*t48493*t5460*t60264 + t52083*t5467*t60264 + t5467*t5579*t60438 - 1.*t5460*t59664*t60438 + t64858 + t64860))*var2[3] + (t5473*t63234 + t5412*(-1.*t5367*t5453*t60438 + t63392) + t5106*t5453*(-1.*t47715*t60264 - 1.*t5473*t60438 + t64858 + t64860) - 1.*t5367*t5453*t64865)*var2[4];
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
  p_output1[36]=t65113*var2[0] + (-1.*t5106*t5224*t5451*t5453 - 1.*t4846*t65118)*var2[1] + (-1.*t4846*t5106*t5224*t5453 + t5451*t65118)*var2[2] + (t59310*t65294 + t59610*t65306 + (t65129 + t65133 - 1.*t51968*t65298 - 1.*t5951*t65302 - 1.*t48493*t65306 - 1.*t52083*t65310)*t6603 + t51968*(t65137 + t65138 + t48493*t65294 + t6208*t65302 + t52083*t65317 + t65298*t6603))*var2[3] + (-1.*t5106*t5361*t5453*t60342 - 1.*t5106*t5160*t60487 + t6115*(-1.*t47715*t5160*t5367 + t64907 + t65089 + t65129 - 1.*t5453*t64905*t65130 + t65133) + t5106*t5453*(t47715*t5361*t5367*t5453 - 1.*t5367*t6191*t64905 + t65097 + t65103 + t65137 + t65138))*var2[4] + (-1.*t5160*t5361*t64896 + t5361*t5453*(t47664*t5160 - 1.*t5453*t64905 + t64907 + t65089) + t5453*(t60468 + t65092 + t65093) + t5160*(-1.*t47664*t5361*t5453 - 1.*t5160*t5361*t64905 + t65097 + t65103))*var2[5];
  p_output1[37]=t65306*var2[0] + (-1.*t5106*t5160*t5451 - 1.*t4846*t65310)*var2[1] + (-1.*t4846*t5106*t5160 + t5451*t65310)*var2[2] + (t59814*t65113 + t59732*t65294 + (t48493*t65113 + t52083*t65118 + t59664*t65298 + t5579*t65302 + t65359 + t65361)*t6603 + t59664*(-1.*t48493*t65294 - 1.*t6208*t65302 - 1.*t52083*t65317 + t65366 + t65367 - 1.*t65298*t6603))*var2[3] + (-1.*t5106*t5361*t5453*t62399 - 1.*t5106*t5224*t5453*t62483 + t6115*(t47715*t5224*t5367*t5453 - 1.*t5367*t5473*t64905 + t65328 + t65330 + t65359 + t65361) + t5412*(-1.*t47715*t5361*t5367*t5453 + t5367*t6191*t64905 + t65338 + t65340 + t65366 + t65367))*var2[4] + (t5361*t5453*(-1.*t47664*t5224*t5453 - 1.*t5160*t5224*t64905 + t65328 + t65330) - 1.*t5160*t5224*t65335 + t5224*t5453*(t47664*t5361*t5453 + t5160*t5361*t64905 + t65338 + t65340) - 1.*t5160*t5361*t65345)*var2[5];
  p_output1[38]=t65294*var2[0] + (-1.*t5106*t5361*t5451*t5453 - 1.*t4846*t65317)*var2[1] + (-1.*t4846*t5106*t5361*t5453 + t5451*t65317)*var2[2] + (t60046*t65113 + t60228*t65306 + t59664*(t51968*t65298 + t5951*t65302 + t48493*t65306 + t52083*t65310 + t65607 + t65610) + t51968*(-1.*t48493*t65113 - 1.*t52083*t65118 - 1.*t59664*t65298 - 1.*t5579*t65302 + t65614 + t65616))*var2[3] + (-1.*t5106*t5224*t5453*t63234 - 1.*t5106*t5160*t64865 + t5412*(t47715*t5160*t5367 + t5453*t64905*t65130 + t65580 + t65582 + t65607 + t65610) + t5106*t5453*(-1.*t47715*t5224*t5367*t5453 + t5367*t5473*t64905 + t65586 + t65588 + t65614 + t65616))*var2[4] + (-1.*t5160*t5224*t65577 + t5224*t5453*(-1.*t47664*t5160 + t5453*t64905 + t65580 + t65582) + t5160*(t47664*t5224*t5453 + t5160*t5224*t64905 + t65586 + t65588) + t5453*(t64863 + t65591 + t65592))*var2[5];
  p_output1[39]=t6603*var2[0] + t6299*var2[1] + (t4846*t6115 + t5451*t6208)*var2[2] + (t59310*t65822 + (t65683 - 1.*t51968*t65826 - 1.*t5951*t65831)*t6603 + t51968*(t65686 + t65811 + t48493*t65822 + t6208*t65831 + t52083*t65838 + t65826*t6603))*var2[3] + (t60342*t65673 + t6115*(-1.*t5160*t5453*t65657 + t5367*t5453*t65678 + t65683) + t5106*t5453*(t65647 + t65658 + t6191*t65678 + t65686 + t47715*t65808 + t65811))*var2[4] + (t5453*t6109*t64896 + t5160*(-1.*t47664*t5160*t6109 + t33878*t65641 + t65647 + t6109*t65652 + t65658 + t5361*t65657*t65659))*var2[5] + (0.1575*t5361 + 0.2255*t65641)*var2[12];
  p_output1[40]=(t59732*t65822 + t59814*t6603 + (t59591 + t59592 + t59606 + t59664*t65826 + t5579*t65831 + t65888)*t6603 + t59664*(-1.*t48493*t65822 - 1.*t6208*t65831 - 1.*t52083*t65838 + t65891 + t65894 - 1.*t65826*t6603))*var2[3] + (t6115*t62483 + t62399*t65673 + t6115*(t59591 + t60468 + t60483 + t5473*t65678 + t65859 + t65888) + t5412*(-1.*t6191*t65678 - 1.*t47715*t65808 + t65850 + t65855 + t65891 + t65894))*var2[4] + (t5361*t5453*t65335 + t5453*t6109*t65345 + t5224*t5453*(t47664*t5160*t6109 - 1.*t5361*t65657*t65659 + t65850 + t65853 + t65854 + t65855) + t5361*t5453*(t60468 + t65092 + t65093 + t5224*t65657*t65659 + t65859 + t65861))*var2[5] + (t65641*t65868 + t6109*t65876 + t6109*(t65092 + t5224*t65657 + t65861 + t5361*t7663) + t5361*(-1.*t5361*t65657 + t65853 + t65854 - 1.*t6109*t7663))*var2[12];
  p_output1[41]=t65822*var2[0] + (t5451*t65673 - 1.*t4846*t65838)*var2[1] + (t4846*t65673 + t5451*t65838)*var2[2] + (t59664*(t51968*t65826 + t5951*t65831 + t65998) + t51968*(t59796 + t59804 + t59808 - 1.*t59664*t65826 - 1.*t5579*t65831 + t66002) + t60046*t6603)*var2[3] + (t6115*t63234 + t5412*(t5160*t5453*t65657 - 1.*t5367*t5453*t65678 + t65998) + t5106*t5453*(t59796 + t62425 + t62479 - 1.*t5473*t65678 + t65976 + t66002))*var2[4] + (t5361*t5453*t65577 + t5160*(t62425 + t65333 + t65334 - 1.*t5361*t65652 - 1.*t5224*t65657*t65659 + t65976))*var2[5] - 0.068*t6109*var2[12];
  p_output1[42]=t66055*var2[0] + (t5451*t66059 - 1.*t4846*t66063)*var2[1] + (t4846*t66059 + t5451*t66063)*var2[2] + (t59310*t59664 + t6603*(t66080 - 1.*t51968*t66092 - 1.*t5951*t66096) + t51968*(t59694 + t59713 + t59731 + t66083 + t6603*t66092 + t6208*t66096))*var2[3] + (t5412*t60342 + t6115*(-1.*t5160*t5453*t66043 + t5367*t5453*t66075 + t66080) + t5106*t5453*(t59694 + t62357 + t62371 + t66044 + t6191*t66075 + t66083))*var2[4] + (t5224*t5453*t64896 + t5160*(t62357 + t65343 + t65344 + t6109*t66039 + t5361*t65659*t66043 + t66044))*var2[5] + (0.2255*t5361 + 0.1575*t65641)*var2[12] + (0.325*t5184 - 1.*t5184*t66029 - 1.*t5184*t7251)*var2[13];
  p_output1[43]=(t59664*t59732 + t59814*t66055 + t6603*(t48493*t66055 + t52083*t66063 + t59664*t66092 + t5579*t66096 + t66137 + t66140) + t59664*(t60215 + t60226 + t60227 - 1.*t6603*t66092 - 1.*t6208*t66096 + t66144))*var2[3] + (t5412*t62399 + t62483*t66059 + t6115*(t47715*t66053 + t5473*t66075 + t66115 + t66117 + t66137 + t66140) + t5412*(t60215 + t64863 + t64864 - 1.*t6191*t66075 + t66110 + t66144))*var2[4] + (t5224*t5453*t65345 + t5453*t65335*t65641 + t5224*t5453*(t64863 + t65591 + t65592 - 1.*t5361*t65659*t66043 + t66109 + t66110) + t5361*t5453*(-1.*t47664*t5160*t65641 + t5224*t65659*t66043 + t66114 + t66115 + t66117 + t66119))*var2[5] + (t5361*t65868 + t5224*t65876 + t5361*(t65592 - 1.*t5361*t66043 + t66109 - 1.*t5224*t7663) + t6109*(t5224*t66043 + t66114 + t66119 + t65641*t7663))*var2[12];
  p_output1[44]=t59664*var2[0] + t5877*var2[1] + (t4846*t5412 + t5451*t5579)*var2[2] + (t60046*t66055 + t59664*(t51968*t66092 + t5951*t66096 + t66191) + t51968*(-1.*t48493*t66055 - 1.*t52083*t66063 - 1.*t59664*t66092 - 1.*t5579*t66096 + t66194 + t66197))*var2[3] + (t63234*t66059 + t5412*(t5160*t5453*t66043 - 1.*t5367*t5453*t66075 + t66191) + t5106*t5453*(-1.*t47715*t66053 - 1.*t5473*t66075 + t66173 + t66175 + t66194 + t66197))*var2[4] + (t5453*t65577*t65641 + t5160*(-1.*t33878*t5224 + t47664*t5160*t65641 - 1.*t5361*t66039 - 1.*t5224*t65659*t66043 + t66173 + t66175))*var2[5] - 0.068*t5224*var2[12] + (0.325*t5222 - 1.*t5222*t66029 - 1.*t5222*t7251)*var2[13];
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
