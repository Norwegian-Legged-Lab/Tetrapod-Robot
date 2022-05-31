/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 18:51:07 GMT+02:00
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
  double t3812;
  double t3856;
  double t3899;
  double t3935;
  double t3961;
  double t3965;
  double t4005;
  double t4023;
  double t3446;
  double t3487;
  double t4031;
  double t4079;
  double t4019;
  double t4033;
  double t4039;
  double t3390;
  double t4081;
  double t4096;
  double t4100;
  double t4105;
  double t4268;
  double t4284;
  double t4285;
  double t4286;
  double t4290;
  double t4337;
  double t4341;
  double t4374;
  double t4377;
  double t4388;
  double t4410;
  double t4411;
  double t4412;
  double t4464;
  double t4489;
  double t4490;
  double t4494;
  double t4546;
  double t4547;
  double t4548;
  double t4570;
  double t4577;
  double t4578;
  double t4583;
  double t4585;
  double t4622;
  double t4629;
  double t4636;
  double t4681;
  double t4690;
  double t4691;
  double t4703;
  double t4708;
  double t4726;
  double t4734;
  double t4736;
  double t4746;
  double t4748;
  double t4750;
  double t4757;
  double t4758;
  double t4669;
  double t4713;
  double t4716;
  double t4719;
  double t4735;
  double t4759;
  double t4760;
  double t4764;
  double t4765;
  double t4766;
  double t4767;
  double t4770;
  double t4800;
  double t4808;
  double t4818;
  double t4844;
  double t4846;
  double t4847;
  double t4720;
  double t4823;
  double t4841;
  double t4863;
  double t4865;
  double t4866;
  double t4659;
  double t4660;
  double t4668;
  double t4852;
  double t4854;
  double t4859;
  double t4925;
  double t4927;
  double t4946;
  double t5025;
  double t5026;
  double t5029;
  double t5440;
  double t5441;
  double t5442;
  double t4860;
  double t5537;
  double t5704;
  double t5923;
  double t5002;
  double t6024;
  double t6043;
  double t6044;
  double t4861;
  double t4873;
  double t4877;
  double t5931;
  double t6002;
  double t5939;
  double t5954;
  double t5965;
  double t6023;
  double t6119;
  double t5004;
  double t5008;
  double t5009;
  double t5084;
  double t5168;
  double t6668;
  double t6684;
  double t7017;
  double t7780;
  double t5094;
  double t5102;
  double t5139;
  double t5172;
  double t5173;
  double t5174;
  double t5202;
  double t5418;
  double t5206;
  double t5207;
  double t5208;
  double t6281;
  double t6457;
  double t18408;
  double t18414;
  double t18435;
  double t18443;
  double t5420;
  double t5421;
  double t5424;
  double t5452;
  double t5453;
  double t5455;
  double t5488;
  double t5489;
  double t5490;
  double t5492;
  double t5493;
  double t5494;
  double t5502;
  double t5504;
  double t5536;
  double t18799;
  double t18800;
  double t18831;
  double t18743;
  double t5976;
  double t18915;
  double t18916;
  double t18918;
  double t18920;
  double t18921;
  double t18922;
  double t6085;
  double t6130;
  double t6132;
  double t6136;
  double t6137;
  double t6260;
  double t18923;
  double t6471;
  double t6479;
  double t18928;
  double t6503;
  double t6509;
  double t6524;
  double t6541;
  double t6542;
  double t6556;
  double t6557;
  double t6606;
  double t6655;
  double t6658;
  double t6660;
  double t6661;
  double t6681;
  double t6696;
  double t6700;
  double t6716;
  double t6721;
  double t7087;
  double t8264;
  double t8763;
  double t8953;
  double t9537;
  double t19158;
  double t16251;
  double t16425;
  double t19170;
  double t17283;
  double t17616;
  double t18020;
  double t18039;
  double t18286;
  double t18288;
  double t18289;
  double t18296;
  double t18346;
  double t18365;
  double t18366;
  double t18387;
  double t18392;
  double t18394;
  double t18404;
  double t18405;
  double t18413;
  double t18442;
  double t18509;
  double t18513;
  double t18521;
  double t18526;
  double t18536;
  double t19415;
  double t18552;
  double t18554;
  double t19503;
  double t18694;
  double t18699;
  double t18720;
  double t19729;
  double t19747;
  double t19749;
  double t19814;
  double t19828;
  double t19833;
  double t20003;
  double t20124;
  double t20263;
  double t20394;
  double t20403;
  double t20405;
  double t20414;
  double t20416;
  double t20425;
  double t20426;
  double t20427;
  double t20430;
  double t20435;
  double t20464;
  double t20467;
  double t20497;
  double t20450;
  double t20568;
  double t20585;
  double t20636;
  double t21055;
  double t21396;
  double t21511;
  double t21525;
  double t21529;
  double t21531;
  double t21917;
  double t22082;
  double t25866;
  double t26104;
  double t24015;
  double t28607;
  double t28853;
  double t19804;
  double t19855;
  double t19985;
  double t29608;
  double t4360;
  double t4363;
  double t4364;
  double t31057;
  double t31216;
  double t31281;
  double t19751;
  double t19754;
  double t19758;
  double t19759;
  double t19761;
  double t19770;
  double t19783;
  double t4597;
  double t4601;
  double t4604;
  double t32038;
  double t32043;
  double t32048;
  double t32062;
  double t32070;
  double t32123;
  double t32125;
  double t32148;
  double t32248;
  double t32249;
  double t32292;
  double t32080;
  double t32365;
  double t32372;
  double t32386;
  double t32583;
  double t32686;
  double t32702;
  double t32481;
  double t32578;
  double t33204;
  double t33218;
  double t33411;
  double t33540;
  double t33733;
  double t34074;
  double t34277;
  double t34302;
  double t34322;
  double t21890;
  double t21894;
  double t22095;
  double t22098;
  double t26520;
  double t26683;
  double t26687;
  double t34770;
  double t28194;
  double t28438;
  double t28503;
  double t34774;
  double t34776;
  double t34801;
  double t34807;
  double t34809;
  double t34484;
  double t34510;
  double t34511;
  double t30879;
  double t30900;
  double t30908;
  double t35058;
  double t35064;
  t3812 = Cos(var1[10]);
  t3856 = Cos(var1[11]);
  t3899 = -1.*t3812*t3856;
  t3935 = Sin(var1[10]);
  t3961 = Sin(var1[11]);
  t3965 = -1.*t3935*t3961;
  t4005 = t3899 + t3965;
  t4023 = Cos(var1[9]);
  t3446 = Cos(var1[5]);
  t3487 = Sin(var1[9]);
  t4031 = Sin(var1[5]);
  t4079 = Cos(var1[3]);
  t4019 = t3446*t3487*t4005;
  t4033 = t4023*t4005*t4031;
  t4039 = t4019 + t4033;
  t3390 = Sin(var1[3]);
  t4081 = Cos(var1[4]);
  t4096 = -1.*t3856*t3935;
  t4100 = t3812*t3961;
  t4105 = t4096 + t4100;
  t4268 = t4081*t4105;
  t4284 = Sin(var1[4]);
  t4285 = t4023*t3446*t4005;
  t4286 = -1.*t3487*t4005*t4031;
  t4290 = t4285 + t4286;
  t4337 = -1.*t4284*t4290;
  t4341 = t4268 + t4337;
  t4374 = t3446*t3487;
  t4377 = t4023*t4031;
  t4388 = t4374 + t4377;
  t4410 = -1.*t4023*t3446;
  t4411 = t3487*t4031;
  t4412 = t4410 + t4411;
  t4464 = t3446*t3487*t4105;
  t4489 = t4023*t4105*t4031;
  t4490 = t4464 + t4489;
  t4494 = t3812*t3856;
  t4546 = t3935*t3961;
  t4547 = t4494 + t4546;
  t4548 = t4081*t4547;
  t4570 = t4023*t3446*t4105;
  t4577 = -1.*t3487*t4105*t4031;
  t4578 = t4570 + t4577;
  t4583 = -1.*t4284*t4578;
  t4585 = t4548 + t4583;
  t4622 = -1.*t4105*t4284;
  t4629 = -1.*t4081*t4290;
  t4636 = t4622 + t4629;
  t4681 = -1.*t3856;
  t4690 = 1. + t4681;
  t4691 = -0.50321*t4690;
  t4703 = -0.19821*t3856;
  t4708 = t4691 + t4703;
  t4726 = -1.*t4023;
  t4734 = 1. + t4726;
  t4736 = -1.*t3812;
  t4746 = 1. + t4736;
  t4748 = -0.28121*t4746;
  t4750 = t3812*t4708;
  t4757 = 0.305*t3935*t3961;
  t4758 = t4748 + t4750 + t4757;
  t4669 = 0.28121*t3935;
  t4713 = t4708*t3935;
  t4716 = -0.305*t3812*t3961;
  t4719 = t4669 + t4713 + t4716;
  t4735 = -0.15121*t4734;
  t4759 = t4023*t4758;
  t4760 = t4735 + t4759;
  t4764 = t3446*t4760;
  t4765 = 0.15121*t4734;
  t4766 = 0.15121*t4023;
  t4767 = 0.15121*t3487;
  t4770 = t3487*t4758;
  t4800 = t4765 + t4766 + t4767 + t4770;
  t4808 = -1.*t4800*t4031;
  t4818 = t4764 + t4808;
  t4844 = t4719*t4284;
  t4846 = t4081*t4818;
  t4847 = t4844 + t4846;
  t4720 = -1.*t4719*t4284;
  t4823 = -1.*t4081*t4818;
  t4841 = t4720 + t4823;
  t4863 = t4081*t4719;
  t4865 = -1.*t4284*t4818;
  t4866 = t4863 + t4865;
  t4659 = t4547*t4284;
  t4660 = t4081*t4578;
  t4668 = t4659 + t4660;
  t4852 = t3446*t4800;
  t4854 = t4760*t4031;
  t4859 = t4852 + t4854;
  t4925 = -1.*t4547*t4284;
  t4927 = -1.*t4081*t4578;
  t4946 = t4925 + t4927;
  t5025 = t4105*t4284;
  t5026 = t4081*t4290;
  t5029 = t5025 + t5026;
  t5440 = -1.*t3446*t3487*t4005;
  t5441 = -1.*t4023*t4005*t4031;
  t5442 = t5440 + t5441;
  t4860 = -1.*t4412*t4859;
  t5537 = -1.*t3446*t4800;
  t5704 = -1.*t4760*t4031;
  t5923 = t5537 + t5704;
  t5002 = t4490*t4859;
  t6024 = -1.*t3446*t3487*t4105;
  t6043 = -1.*t4023*t4105*t4031;
  t6044 = t6024 + t6043;
  t4861 = -1.*t4081*t4388*t4847;
  t4873 = t4284*t4388*t4866;
  t4877 = t4860 + t4861 + t4873;
  t5931 = -1.*t4388*t4859;
  t6002 = -1.*t4412*t4818;
  t5939 = t4023*t3446;
  t5954 = -1.*t3487*t4031;
  t5965 = t5939 + t5954;
  t6023 = t4578*t4859;
  t6119 = t4490*t4818;
  t5004 = t4668*t4847;
  t5008 = t4585*t4866;
  t5009 = t5002 + t5004 + t5008;
  t5084 = -1.*t4490*t4859;
  t5168 = t4039*t4859;
  t6668 = -1.*t4578*t4859;
  t6684 = -1.*t4490*t4818;
  t7017 = t4290*t4859;
  t7780 = t4039*t4818;
  t5094 = -1.*t4668*t4847;
  t5102 = -1.*t4585*t4866;
  t5139 = t5084 + t5094 + t5102;
  t5172 = t5029*t4847;
  t5173 = t4341*t4866;
  t5174 = t5168 + t5172 + t5173;
  t5202 = t4412*t4859;
  t5418 = -1.*t4039*t4859;
  t5206 = t4081*t4388*t4847;
  t5207 = -1.*t4284*t4388*t4866;
  t5208 = t5202 + t5206 + t5207;
  t6281 = Power(t4081,2);
  t6457 = Power(t4284,2);
  t18408 = t4388*t4859;
  t18414 = t4412*t4818;
  t18435 = -1.*t4290*t4859;
  t18443 = -1.*t4039*t4818;
  t5420 = -1.*t5029*t4847;
  t5421 = -1.*t4341*t4866;
  t5424 = t5418 + t5420 + t5421;
  t5452 = var2[0]*t4081*t5442;
  t5453 = t3390*t4284*t5442;
  t5455 = t4079*t4290;
  t5488 = t5453 + t5455;
  t5489 = var2[1]*t5488;
  t5490 = -1.*t4079*t4284*t5442;
  t5492 = t3390*t4290;
  t5493 = t5490 + t5492;
  t5494 = var2[2]*t5493;
  t5502 = -1.*t4388*t4818;
  t5504 = t4860 + t5502;
  t5536 = t4578*t5504;
  t18799 = -0.15121*t3487;
  t18800 = -1.*t3487*t4758;
  t18831 = t18799 + t18800;
  t18743 = t4766 + t4759;
  t5976 = -1.*t5965*t4818;
  t18915 = t3446*t18831;
  t18916 = -1.*t18743*t4031;
  t18918 = t18915 + t18916;
  t18920 = t3446*t18743;
  t18921 = t18831*t4031;
  t18922 = t18920 + t18921;
  t6085 = t6044*t4818;
  t6130 = t4719*t4547;
  t6132 = t4578*t4818;
  t6136 = t6130 + t5002 + t6132;
  t6137 = t4388*t6136;
  t6260 = t4081*t6044*t4877;
  t18923 = -1.*t4412*t18922;
  t6471 = -1.*t4081*t5965*t4847;
  t6479 = t4284*t5965*t4866;
  t18928 = t4490*t18922;
  t6503 = t4081*t6044*t4847;
  t6509 = -1.*t4284*t6044*t4866;
  t6524 = t4081*t5965*t5009;
  t6541 = var2[0]*t4081*t5965;
  t6542 = t3390*t4388;
  t6556 = -1.*t4079*t4284*t5965;
  t6557 = t6542 + t6556;
  t6606 = var2[2]*t6557;
  t6655 = t4079*t4388;
  t6658 = t3390*t4284*t5965;
  t6660 = t6655 + t6658;
  t6661 = var2[1]*t6660;
  t6681 = -1.*t6044*t4818;
  t6696 = -1.*t4719*t4547;
  t6700 = -1.*t4578*t4818;
  t6716 = t6696 + t5084 + t6700;
  t6721 = t4290*t6716;
  t7087 = t5442*t4818;
  t8264 = t4719*t4105;
  t8763 = t4290*t4818;
  t8953 = t8264 + t5168 + t8763;
  t9537 = t4578*t8953;
  t19158 = -1.*t4490*t18922;
  t16251 = -1.*t4081*t6044*t4847;
  t16425 = t4284*t6044*t4866;
  t19170 = t4039*t18922;
  t17283 = t4081*t5442*t4847;
  t17616 = -1.*t4284*t5442*t4866;
  t18020 = t4081*t5442*t5139;
  t18039 = t4081*t6044*t5174;
  t18286 = var2[0]*t4081*t6044;
  t18288 = t3390*t4284*t6044;
  t18289 = t4079*t4578;
  t18296 = t18288 + t18289;
  t18346 = var2[1]*t18296;
  t18365 = -1.*t4079*t4284*t6044;
  t18366 = t3390*t4578;
  t18387 = t18365 + t18366;
  t18392 = var2[2]*t18387;
  t18394 = t4388*t4818;
  t18404 = t5202 + t18394;
  t18405 = t4290*t18404;
  t18413 = t5965*t4818;
  t18442 = -1.*t5442*t4818;
  t18509 = -1.*t4719*t4105;
  t18513 = -1.*t4290*t4818;
  t18521 = t18509 + t5418 + t18513;
  t18526 = t4388*t18521;
  t18536 = t4081*t5442*t5208;
  t19415 = t4412*t18922;
  t18552 = t4081*t5965*t4847;
  t18554 = -1.*t4284*t5965*t4866;
  t19503 = -1.*t4039*t18922;
  t18694 = -1.*t4081*t5442*t4847;
  t18699 = t4284*t5442*t4866;
  t18720 = t4081*t5965*t5424;
  t19729 = t3856*t3935;
  t19747 = -1.*t3812*t3961;
  t19749 = t19729 + t19747;
  t19814 = t4023*t3446*t19749;
  t19828 = -1.*t3487*t19749*t4031;
  t19833 = t19814 + t19828;
  t20003 = t3446*t3487*t19749;
  t20124 = t4023*t19749*t4031;
  t20263 = t20003 + t20124;
  t20394 = t4081*t4005;
  t20403 = -1.*t4284*t19833;
  t20405 = t20394 + t20403;
  t20414 = -0.28121*t3935;
  t20416 = -1.*t4708*t3935;
  t20425 = 0.305*t3812*t3961;
  t20426 = t20414 + t20416 + t20425;
  t20427 = t3446*t3487*t20426;
  t20430 = t4023*t20426*t4031;
  t20435 = t20427 + t20430;
  t20464 = t4023*t3446*t20426;
  t20467 = -1.*t3487*t20426*t4031;
  t20497 = t20464 + t20467;
  t20450 = -1.*t4412*t20435;
  t20568 = 0.28121*t3812;
  t20585 = t20568 + t4750 + t4757;
  t20636 = t20435*t4490;
  t21055 = t20585*t4284;
  t21396 = t4081*t20497;
  t21511 = t21055 + t21396;
  t21525 = t4081*t20585;
  t21529 = -1.*t4284*t20497;
  t21531 = t21525 + t21529;
  t21917 = t4719*t4005;
  t22082 = t4105*t20585;
  t25866 = Power(t4023,2);
  t26104 = Power(t3487,2);
  t24015 = -1.*t20585*t4547;
  t28607 = t20435*t4039;
  t28853 = t20263*t4859;
  t19804 = t4005*t4284;
  t19855 = t4081*t19833;
  t19985 = t19804 + t19855;
  t29608 = -1.*t20435*t4490;
  t4360 = t4079*t4039;
  t4363 = -1.*t3390*t4341;
  t4364 = t4360 + t4363;
  t31057 = t4412*t20435;
  t31216 = -1.*t20435*t4039;
  t31281 = -1.*t20263*t4859;
  t19751 = 0.15121*t19749;
  t19754 = 0.15121*t4105;
  t19758 = t19751 + t19754;
  t19759 = var2[9]*t19758;
  t19761 = -1.*t3487*t4760;
  t19770 = t4023*t4800;
  t19783 = t19761 + t19770;
  t4597 = t4079*t4490;
  t4601 = -1.*t3390*t4585;
  t4604 = t4597 + t4601;
  t32038 = 0.305*t3856*t3935;
  t32043 = t32038 + t4716;
  t32048 = t3446*t3487*t32043;
  t32062 = t4023*t32043*t4031;
  t32070 = t32048 + t32062;
  t32123 = t4023*t3446*t32043;
  t32125 = -1.*t3487*t32043*t4031;
  t32148 = t32123 + t32125;
  t32248 = t3446*t3487*t4547;
  t32249 = t4023*t4547*t4031;
  t32292 = t32248 + t32249;
  t32080 = -1.*t4412*t32070;
  t32365 = -0.305*t3812*t3856;
  t32372 = -0.305*t3935*t3961;
  t32386 = t32365 + t32372;
  t32583 = t4023*t3446*t4547;
  t32686 = -1.*t3487*t4547*t4031;
  t32702 = t32583 + t32686;
  t32481 = t32070*t4490;
  t32578 = t32292*t4859;
  t33204 = t32386*t4284;
  t33218 = t4081*t32148;
  t33411 = t33204 + t33218;
  t33540 = t4081*t32386;
  t33733 = -1.*t4284*t32148;
  t34074 = t33540 + t33733;
  t34277 = t19749*t4284;
  t34302 = t4081*t32702;
  t34322 = t34277 + t34302;
  t21890 = t4005*t4758;
  t21894 = t8264 + t21890;
  t22095 = -1.*t4105*t4758;
  t22098 = t22095 + t6696;
  t26520 = -1.*t4023*t4105*t4760;
  t26683 = -1.*t3487*t4105*t4800;
  t26687 = t6696 + t26520 + t26683;
  t34770 = t4105*t32386;
  t28194 = t4023*t4005*t4760;
  t28438 = t3487*t4005*t4800;
  t28503 = t8264 + t28194 + t28438;
  t34774 = -1.*t19749*t4719;
  t34776 = -1.*t32386*t4547;
  t34801 = t32070*t4039;
  t34807 = -1.*t32070*t4490;
  t34809 = -1.*t32292*t4859;
  t34484 = t4081*t19749;
  t34510 = -1.*t4284*t32702;
  t34511 = t34484 + t34510;
  t30879 = t3487*t4760;
  t30900 = -1.*t4023*t4800;
  t30908 = t30879 + t30900;
  t35058 = t4412*t32070;
  t35064 = -1.*t32070*t4039;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t3390*t4039 - 1.*t4079*t4341)*var2[1] + t4364*var2[2];
  p_output1[10]=(t4079*t4284*t4388 - 1.*t3390*t4412)*var2[1] + (t3390*t4284*t4388 + t4079*t4412)*var2[2];
  p_output1[11]=(-1.*t3390*t4490 - 1.*t4079*t4585)*var2[1] + t4604*var2[2];
  p_output1[12]=t4341*var2[0] - 1.*t3390*t4636*var2[1] + t4079*t4636*var2[2] + (t4668*(t4284*t4388*t4841 + t4284*t4388*t4847) + t4585*t4877 + t4081*t4388*(t4585*t4841 + t4585*t4847 + t4668*t4866 + t4866*t4946) - 1.*t4284*t4388*t5009)*var2[3];
  p_output1[13]=-1.*t4284*t4388*var2[0] + t3390*t4081*t4388*var2[1] - 1.*t4079*t4081*t4388*var2[2] + ((-1.*t4585*t4841 - 1.*t4585*t4847 - 1.*t4668*t4866 - 1.*t4866*t4946)*t5029 + t4668*(t4341*t4841 + t4341*t4847 + t4636*t4866 + t4866*t5029) + t4341*t5139 + t4585*t5174)*var2[3];
  p_output1[14]=t4585*var2[0] - 1.*t3390*t4946*var2[1] + t4079*t4946*var2[2] + ((-1.*t4284*t4388*t4841 - 1.*t4284*t4388*t4847)*t5029 + t4081*t4388*(-1.*t4341*t4841 - 1.*t4341*t4847 - 1.*t4636*t4866 - 1.*t4866*t5029) + t4341*t5208 - 1.*t4284*t4388*t5424)*var2[3];
  p_output1[15]=t5452 + t5489 + t5494 + (t6260 + t4668*(t5931 + t6002 - 1.*t4388*t5923*t6281 - 1.*t4388*t5923*t6457 + t6471 + t6479) + t4081*t4388*(-1.*t4284*t4585*t5923 + t4081*t4668*t5923 + t6023 + t6119 + t6503 + t6509) + t6524)*var2[3] + (t5536 + t4490*(-1.*t4388*t5923 + t5931 + t5976 + t6002) + t4412*(t4578*t5923 + t6023 + t6085 + t6119) + t6137)*var2[4];
  p_output1[16]=t6541 + t6606 + t6661 + (t18020 + t18039 + t5029*(t16251 + t16425 + t4284*t4585*t5923 - 1.*t4081*t4668*t5923 + t6668 + t6684) + t4668*(t17283 + t17616 - 1.*t4284*t4341*t5923 + t4081*t5029*t5923 + t7017 + t7780))*var2[3] + (t4039*(-1.*t4578*t5923 + t6668 + t6681 + t6684) + t6721 + t4490*(t4290*t5923 + t7017 + t7087 + t7780) + t9537)*var2[4];
  p_output1[17]=t18286 + t18346 + t18392 + (t18536 + t18720 + t4081*t4388*(t18435 + t18443 + t18694 + t18699 + t4284*t4341*t5923 - 1.*t4081*t5029*t5923) + t5029*(t18408 + t18414 + t18552 + t18554 + t4388*t5923*t6281 + t4388*t5923*t6457))*var2[3] + (t18405 + t18526 + t4412*(t18435 + t18442 + t18443 - 1.*t4290*t5923) + t4039*(t18408 + t18413 + t18414 + t4388*t5923))*var2[4];
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=t5452 + t5489 + t5494 + (t6260 + t4668*(t18923 + t5931 - 1.*t18918*t4388*t6281 - 1.*t18918*t4388*t6457 + t6471 + t6479) + t4081*t4388*(t18928 - 1.*t18918*t4284*t4585 + t18918*t4081*t4668 + t6023 + t6503 + t6509) + t6524)*var2[3] + (t5536 + t4490*(t18923 - 1.*t18918*t4388 + t5931 + t5976) + t4412*(t18928 + t18918*t4578 + t6023 + t6085) + t6137)*var2[4] + t4547*(-1.*t18831*t3487 + t18743*t4023 - 1.*t4023*t4760 - 1.*t3487*t4800)*var2[5];
  p_output1[28]=t6541 + t6606 + t6661 + (t18020 + t18039 + t5029*(t16251 + t16425 + t19158 + t18918*t4284*t4585 - 1.*t18918*t4081*t4668 + t6668) + t4668*(t17283 + t17616 + t19170 - 1.*t18918*t4284*t4341 + t18918*t4081*t5029 + t7017))*var2[3] + (t4039*(t19158 - 1.*t18918*t4578 + t6668 + t6681) + t6721 + t4490*(t19170 + t18918*t4290 + t7017 + t7087) + t9537)*var2[4] + (t4547*(t18743*t3487*t4005 + t18831*t4005*t4023 - 1.*t3487*t4005*t4760 + t4005*t4023*t4800) + t4105*(-1.*t18743*t3487*t4105 - 1.*t18831*t4023*t4105 + t3487*t4105*t4760 - 1.*t4023*t4105*t4800))*var2[5];
  p_output1[29]=t18286 + t18346 + t18392 + (t18536 + t18720 + t4081*t4388*(t18435 + t18694 + t18699 + t19503 + t18918*t4284*t4341 - 1.*t18918*t4081*t5029) + t5029*(t18408 + t18552 + t18554 + t19415 + t18918*t4388*t6281 + t18918*t4388*t6457))*var2[3] + (t18405 + t18526 + t4039*(t18408 + t18413 + t19415 + t18918*t4388) + (t18435 + t18442 + t19503 - 1.*t18918*t4290)*t4412)*var2[4] + t4105*(t18831*t3487 - 1.*t18743*t4023 + t4023*t4760 + t3487*t4800)*var2[5];
  p_output1[30]=t19759 + t19985*var2[0] + (-1.*t20405*t3390 + t20263*t4079)*var2[1] + (t20263*t3390 + t20405*t4079)*var2[2] + ((t20450 - 1.*t21511*t4081*t4388 + t21531*t4284*t4388)*t4668 + t4877*t5029 + t4081*t4388*(t20636 + t21531*t4585 + t21511*t4668 + t5168 + t5172 + t5173))*var2[3] + ((t20450 - 1.*t20497*t4388)*t4490 + t4039*t5504 + t4412*(t20636 + t20585*t4547 + t20497*t4578 + t5168 + t8264 + t8763))*var2[4] + t19783*t4105*var2[5];
  p_output1[31]=(t4668*(t28607 + t28853 + t21531*t4341 + t19985*t4847 + t20405*t4866 + t21511*t5029) + t19985*t5139 + t5029*t5174 + t5029*(t29608 - 1.*t21531*t4585 - 1.*t21511*t4668 + t5418 + t5420 + t5421))*var2[3] + (t4490*(t21917 + t22082 + t28607 + t28853 + t20497*t4290 + t19833*t4818) + t4039*(t18509 + t18513 + t24015 + t29608 - 1.*t20497*t4578 + t5418) + t20263*t6716 + t4039*t8953)*var2[4] + (t26687*t4005 + t28503*t4105 + t4547*(t21917 + t22082 + t20426*t25866*t4005 + t20426*t26104*t4005 + t19749*t4023*t4760 + t19749*t3487*t4800) + t4105*(t18509 + t24015 - 1.*t20426*t25866*t4105 - 1.*t20426*t26104*t4105 - 1.*t4005*t4023*t4760 - 1.*t3487*t4005*t4800))*var2[5] + (t22098*t4005 + t21894*t4105 + t4547*(t21917 + t22082 + t20426*t4005 + t19749*t4758) + t4105*(t18509 + t24015 - 1.*t20426*t4105 - 1.*t4005*t4758))*var2[9];
  p_output1[32]=t5029*var2[0] + t4364*var2[1] + (t3390*t4039 + t4079*t4341)*var2[2] + ((t31057 + t21511*t4081*t4388 - 1.*t21531*t4284*t4388)*t5029 + t4081*t4388*(t31216 + t31281 - 1.*t21531*t4341 - 1.*t19985*t4847 - 1.*t20405*t4866 - 1.*t21511*t5029) + t19985*t5208)*var2[3] + (t18404*t20263 + t4039*(t31057 + t20497*t4388) + t4412*(t31216 + t31281 - 1.*t20585*t4105 - 1.*t20497*t4290 - 1.*t4005*t4719 - 1.*t19833*t4818))*var2[4] + t30908*t4005*var2[5];
  p_output1[33]=t19759 + t4668*var2[0] + t4604*var2[1] + (t3390*t4490 + t4079*t4585)*var2[2] + ((t32080 - 1.*t33411*t4081*t4388 + t34074*t4284*t4388)*t4668 + t4081*t4388*(t32481 + t32578 + t34074*t4585 + t33411*t4668 + t34322*t4847 + t34511*t4866) + t34322*t4877)*var2[3] + ((t32080 - 1.*t32148*t4388)*t4490 + t4412*(t32481 + t32578 + t32386*t4547 + t32148*t4578 + t19749*t4719 + t32702*t4818) + t32292*t5504)*var2[4] + t19749*t19783*var2[5] + (0.28121*t3856 - 0.305*Power(t3856,2) + t3856*t4708)*var2[10];
  p_output1[34]=((t34807 + t34809 - 1.*t34074*t4585 - 1.*t33411*t4668 - 1.*t34322*t4847 - 1.*t34511*t4866)*t5029 + t4668*(t34801 + t34074*t4341 + t5002 + t5004 + t5008 + t33411*t5029) + t4668*t5139 + t34322*t5174)*var2[3] + (t4039*(t34774 + t34776 + t34807 + t34809 - 1.*t32148*t4578 - 1.*t32702*t4818) + t4490*(t34770 + t34801 + t32148*t4290 + t5002 + t6130 + t6132) + t4490*t6716 + t32292*t8953)*var2[4] + (t19749*t28503 + t26687*t4547 + t4105*(t34774 + t34776 - 1.*t25866*t32043*t4105 - 1.*t26104*t32043*t4105 - 1.*t4023*t4547*t4760 - 1.*t3487*t4547*t4800) + t4547*(t34770 + t25866*t32043*t4005 + t26104*t32043*t4005 + t4023*t4105*t4760 + t3487*t4105*t4800 + t6130))*var2[5] + (t19749*t21894 + t22098*t4547 + t4105*(t34774 + t34776 - 1.*t32043*t4105 - 1.*t4547*t4758) + t4547*(t34770 + t32043*t4005 + t4105*t4758 + t6130))*var2[9];
  p_output1[35]=t34322*var2[0] + (-1.*t3390*t34511 + t32292*t4079)*var2[1] + (t32292*t3390 + t34511*t4079)*var2[2] + ((t35058 + t33411*t4081*t4388 - 1.*t34074*t4284*t4388)*t5029 + t4081*t4388*(t35064 - 1.*t34074*t4341 - 1.*t33411*t5029 + t5084 + t5094 + t5102) + t4668*t5208)*var2[3] + (t4039*(t35058 + t32148*t4388) + t18404*t4490 + t4412*(t35064 - 1.*t32386*t4105 - 1.*t32148*t4290 + t5084 + t6696 + t6700))*var2[4] + t30908*t4547*var2[5] + (-0.28121*t3961 + 0.305*t3856*t3961 - 1.*t3961*t4708)*var2[10];
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
