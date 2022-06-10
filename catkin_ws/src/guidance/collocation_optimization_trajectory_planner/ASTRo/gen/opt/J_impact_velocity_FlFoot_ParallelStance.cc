/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:55:06 GMT+02:00
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
  double t15068;
  double t15148;
  double t15392;
  double t16970;
  double t17066;
  double t17212;
  double t17240;
  double t65;
  double t17280;
  double t17285;
  double t17286;
  double t17302;
  double t17335;
  double t17367;
  double t17369;
  double t17241;
  double t17283;
  double t17284;
  double t17312;
  double t17344;
  double t17348;
  double t17355;
  double t17361;
  double t17362;
  double t17363;
  double t17365;
  double t17379;
  double t17382;
  double t17383;
  double t17392;
  double t17394;
  double t17494;
  double t17498;
  double t17499;
  double t17451;
  double t17489;
  double t17500;
  double t17503;
  double t17507;
  double t17513;
  double t17517;
  double t17592;
  double t17595;
  double t17599;
  double t17220;
  double t17235;
  double t17270;
  double t17710;
  double t17712;
  double t17765;
  double t17770;
  double t17771;
  double t17774;
  double t17783;
  double t17787;
  double t17788;
  double t17817;
  double t17820;
  double t17821;
  double t17239;
  double t17276;
  double t17404;
  double t17663;
  double t17674;
  double t17679;
  double t17684;
  double t17702;
  double t17706;
  double t17768;
  double t17413;
  double t17422;
  double t17425;
  double t17434;
  double t18145;
  double t19124;
  double t19192;
  double t19497;
  double t19585;
  double t19595;
  double t17826;
  double t17827;
  double t17829;
  double t17855;
  double t17868;
  double t17869;
  double t17870;
  double t17871;
  double t17877;
  double t17910;
  double t17927;
  double t17966;
  double t18019;
  double t18024;
  double t18036;
  double t18044;
  double t18062;
  double t17424;
  double t17435;
  double t17436;
  double t19655;
  double t19645;
  double t19665;
  double t17563;
  double t17590;
  double t17601;
  double t17606;
  double t17607;
  double t17608;
  double t17610;
  double t17623;
  double t17641;
  double t19857;
  double t19864;
  double t19866;
  double t19871;
  double t19881;
  double t19888;
  double t19949;
  double t19950;
  double t17769;
  double t20030;
  double t20054;
  double t17506;
  double t17519;
  double t17521;
  double t17523;
  double t17525;
  double t17529;
  double t17541;
  double t19895;
  double t19951;
  double t19967;
  double t19998;
  double t20003;
  double t20005;
  double t20009;
  double t20170;
  double t20186;
  double t20196;
  double t20522;
  double t20535;
  double t20549;
  double t20563;
  double t20566;
  double t20570;
  double t20578;
  double t20592;
  double t20832;
  double t20812;
  double t20827;
  double t20842;
  double t20852;
  double t20872;
  double t20882;
  double t20892;
  double t20905;
  double t20917;
  double t20919;
  double t21079;
  double t21093;
  double t21099;
  double t21136;
  double t21149;
  double t20968;
  double t21273;
  double t21309;
  double t21326;
  double t21261;
  double t21333;
  double t21339;
  double t21355;
  double t21365;
  double t21381;
  double t21477;
  double t21497;
  double t21509;
  double t21631;
  double t21636;
  double t21646;
  double t21693;
  double t21694;
  double t21698;
  double t21700;
  double t21701;
  double t21702;
  double t21714;
  double t21715;
  double t21716;
  double t21718;
  double t21719;
  double t21725;
  double t21733;
  double t21734;
  double t21735;
  double t21740;
  double t21741;
  double t21755;
  double t21784;
  double t21791;
  double t21793;
  double t21847;
  double t21854;
  double t21856;
  double t21860;
  double t21871;
  double t21879;
  double t21885;
  double t21896;
  double t21903;
  double t21905;
  double t21943;
  double t21944;
  double t21945;
  double t21946;
  double t21964;
  double t21965;
  double t21966;
  double t21963;
  double t21967;
  double t21968;
  double t21970;
  double t21971;
  double t21972;
  double t21982;
  double t21983;
  double t21984;
  double t21592;
  double t21599;
  double t21609;
  double t21614;
  double t21618;
  double t21620;
  double t21653;
  double t21683;
  double t21699;
  double t21703;
  double t21704;
  double t21705;
  double t21710;
  double t21711;
  double t21712;
  double t21738;
  double t22167;
  double t22170;
  double t22174;
  double t22183;
  double t22185;
  double t22188;
  double t22189;
  double t22206;
  double t22207;
  double t22208;
  double t22209;
  double t22210;
  double t22211;
  double t21841;
  double t21845;
  double t21953;
  double t21110;
  double t21117;
  double t21174;
  double t21186;
  double t21192;
  double t21207;
  double t21213;
  double t21221;
  double t21225;
  double t21227;
  double t21234;
  double t21240;
  double t21249;
  double t21729;
  double t22281;
  double t22285;
  double t21717;
  double t21726;
  double t21727;
  double t21730;
  double t21732;
  double t21736;
  double t22350;
  double t22353;
  double t22354;
  double t22356;
  double t22358;
  double t21955;
  double t21957;
  double t21961;
  double t20862;
  double t20903;
  double t20921;
  double t20940;
  double t20949;
  double t20975;
  double t20996;
  double t21000;
  double t21013;
  double t21027;
  double t21035;
  double t21042;
  double t21044;
  double t22260;
  double t22265;
  double t22266;
  double t22275;
  double t22277;
  double t22289;
  double t22293;
  double t22294;
  double t22296;
  double t22297;
  double t22298;
  double t22299;
  double t22303;
  double t19715;
  double t22453;
  double t22454;
  double t22220;
  double t22221;
  double t22222;
  double t22223;
  double t22224;
  double t22225;
  double t22226;
  double t22227;
  double t22375;
  double t22376;
  double t22378;
  double t22379;
  double t22380;
  double t22381;
  double t22384;
  double t22385;
  double t21457;
  double t21467;
  double t21518;
  double t21520;
  double t21532;
  double t21540;
  double t21545;
  double t21558;
  double t21562;
  double t21980;
  double t21981;
  double t22004;
  double t22056;
  double t22060;
  double t22063;
  double t22072;
  double t22077;
  double t22085;
  double t22490;
  double t22495;
  double t22502;
  double t22510;
  double t22511;
  double t22512;
  double t22516;
  double t22518;
  double t22534;
  double t22535;
  double t22212;
  double t22213;
  double t22214;
  double t22215;
  double t22216;
  double t22217;
  double t22218;
  double t22361;
  double t22362;
  double t22363;
  double t22364;
  double t22365;
  double t22369;
  double t22373;
  double t21351;
  double t21391;
  double t21401;
  double t21417;
  double t21427;
  double t21437;
  double t21441;
  double t21969;
  double t21973;
  double t21974;
  double t21975;
  double t21976;
  double t21977;
  double t21978;
  double t22513;
  double t22520;
  double t22521;
  double t22522;
  double t22523;
  double t22524;
  double t22525;
  double t22551;
  double t22552;
  double t22553;
  double t22588;
  double t22589;
  double t22590;
  double t22591;
  double t22592;
  double t22594;
  double t22595;
  double t22596;
  double t22597;
  double t22598;
  double t22599;
  double t22600;
  double t22601;
  double t22602;
  double t22603;
  double t22604;
  double t22607;
  double t22609;
  double t22610;
  double t22611;
  double t22612;
  double t22613;
  double t22640;
  double t22641;
  double t22642;
  double t22646;
  double t22656;
  double t22657;
  double t22658;
  double t22614;
  double t22615;
  double t22619;
  double t22623;
  double t22627;
  double t22631;
  double t22636;
  double t22638;
  double t22639;
  double t22575;
  double t22576;
  double t22577;
  double t22578;
  double t22579;
  double t22581;
  double t22582;
  double t22583;
  double t22584;
  double t22585;
  double t22586;
  double t22587;
  double t22562;
  double t22563;
  double t22564;
  double t22565;
  double t22566;
  double t22567;
  double t22568;
  double t22569;
  double t22570;
  double t22571;
  double t22573;
  double t22574;
  double t22674;
  double t22675;
  double t22676;
  double t22677;
  double t22678;
  double t22679;
  double t22680;
  double t22681;
  double t22683;
  double t22685;
  double t22687;
  double t22704;
  double t22705;
  double t22706;
  double t22700;
  double t22707;
  double t22708;
  double t22756;
  double t22766;
  double t22798;
  double t22858;
  double t22859;
  double t22875;
  double t22876;
  double t22877;
  double t22879;
  double t22883;
  double t22900;
  double t22901;
  double t22926;
  double t22932;
  double t22934;
  double t23002;
  double t23003;
  double t23004;
  double t22672;
  double t22673;
  double t22688;
  double t23161;
  double t23162;
  double t23196;
  double t23197;
  double t22690;
  double t22694;
  double t22695;
  double t23036;
  double t23037;
  double t23103;
  double t23122;
  double t23133;
  double t23176;
  double t23181;
  double t23182;
  double t23185;
  double t23186;
  double t23187;
  double t23188;
  double t23189;
  double t23231;
  double t23232;
  double t23017;
  double t23018;
  double t23019;
  double t23020;
  double t23021;
  double t23022;
  double t23023;
  double t23024;
  double t23212;
  double t23213;
  double t23214;
  double t23216;
  double t23217;
  double t23219;
  double t23220;
  double t23221;
  double t22856;
  double t22857;
  double t22860;
  double t22861;
  double t22862;
  double t22863;
  double t22864;
  double t22865;
  double t22866;
  double t23250;
  double t23251;
  double t23252;
  double t23253;
  double t23254;
  double t23256;
  double t23257;
  double t23307;
  double t23309;
  double t23005;
  double t23006;
  double t23009;
  double t23010;
  double t23011;
  double t23012;
  double t23015;
  double t23198;
  double t23199;
  double t23200;
  double t23204;
  double t23206;
  double t23207;
  double t23209;
  double t22725;
  double t22830;
  double t22832;
  double t22851;
  double t22852;
  double t22853;
  double t22854;
  double t23255;
  double t23258;
  double t23259;
  double t23260;
  double t23261;
  double t23262;
  double t23263;
  double t23428;
  double t23429;
  t15068 = Sin(var1[4]);
  t15148 = Cos(var1[6]);
  t15392 = -1.*t15148;
  t16970 = 1. + t15392;
  t17066 = 0.15121*t16970;
  t17212 = Sin(var1[6]);
  t17240 = Sin(var1[5]);
  t65 = Cos(var1[5]);
  t17280 = Cos(var1[7]);
  t17285 = t15148*t15068*t17240;
  t17286 = t65*t15068*t17212;
  t17302 = t17285 + t17286;
  t17335 = Cos(var1[8]);
  t17367 = Sin(var1[7]);
  t17369 = Sin(var1[8]);
  t17241 = 0.15121*t17212;
  t17283 = -1.*t17280;
  t17284 = 1. + t17283;
  t17312 = 0.28121*t17284*t17302;
  t17344 = -1.*t17335;
  t17348 = 1. + t17344;
  t17355 = 0.50321*t17280*t17348*t17302;
  t17361 = t65*t15148*t15068;
  t17362 = -1.*t15068*t17240*t17212;
  t17363 = t17361 + t17362;
  t17365 = 0.15121*t17363;
  t17379 = -0.50321*t17302*t17367*t17369;
  t17382 = t17280*t17335*t17302;
  t17383 = t17302*t17367*t17369;
  t17392 = t17382 + t17383;
  t17394 = 0.19821*t17392;
  t17494 = -1.*t65*t15148*t15068;
  t17498 = t15068*t17240*t17212;
  t17499 = t17494 + t17498;
  t17451 = Cos(var1[4]);
  t17489 = t17451*t17280;
  t17500 = t17499*t17367;
  t17503 = t17489 + t17500;
  t17507 = t17280*t17499;
  t17513 = -1.*t17451*t17367;
  t17517 = t17507 + t17513;
  t17592 = -1.*t17451*t17280;
  t17595 = -1.*t17499*t17367;
  t17599 = t17592 + t17595;
  t17220 = -0.15121*t17212;
  t17235 = t17066 + t17220;
  t17270 = t17066 + t17241;
  t17710 = -1.*t17451*t65*t15148;
  t17712 = t17451*t17240*t17212;
  t17765 = t17710 + t17712;
  t17770 = t17280*t17765;
  t17771 = t15068*t17367;
  t17774 = t17770 + t17771;
  t17783 = -1.*t17280*t15068;
  t17787 = t17765*t17367;
  t17788 = t17783 + t17787;
  t17817 = -1.*t17451*t15148*t17240;
  t17820 = -1.*t17451*t65*t17212;
  t17821 = t17817 + t17820;
  t17239 = t65*t15068*t17235;
  t17276 = t15068*t17240*t17270;
  t17404 = t17239 + t17276 + t17312 + t17355 + t17365 + t17379 + t17394;
  t17663 = t17451*t17240*t17235;
  t17674 = -1.*t17451*t65*t17270;
  t17679 = t17451*t15148*t17240;
  t17684 = t17451*t65*t17212;
  t17702 = t17679 + t17684;
  t17706 = 0.15121*t17702;
  t17768 = 0.28121*t17284*t17765;
  t17413 = -0.15121*t15148;
  t17422 = t17413 + t17241;
  t17425 = 0.15121*t15148;
  t17434 = t17425 + t17241;
  t18145 = 0.50321*t17280*t17348*t17765;
  t19124 = -0.50321*t17765*t17367*t17369;
  t19192 = t17280*t17335*t17765;
  t19497 = t17765*t17367*t17369;
  t19585 = t19192 + t19497;
  t19595 = 0.19821*t19585;
  t17826 = -0.50321*t17335*t17821*t17367;
  t17827 = 0.50321*t17280*t17821*t17369;
  t17829 = t17335*t17821*t17367;
  t17855 = -1.*t17280*t17821*t17369;
  t17868 = t17829 + t17855;
  t17869 = 0.19821*t17868;
  t17870 = t17826 + t17827 + t17869;
  t17871 = var2[8]*t17870;
  t17877 = 0.28121*t17821*t17367;
  t17910 = -0.50321*t17348*t17821*t17367;
  t17927 = -0.50321*t17280*t17821*t17369;
  t17966 = -1.*t17335*t17821*t17367;
  t18019 = t17280*t17821*t17369;
  t18024 = t17966 + t18019;
  t18036 = 0.19821*t18024;
  t18044 = t17877 + t17910 + t17927 + t18036;
  t18062 = var2[7]*t18044;
  t17424 = t15068*t17240*t17422;
  t17435 = -1.*t65*t15068*t17434;
  t17436 = t17424 + t17435 + t17312 + t17355 + t17365 + t17379 + t17394;
  t19655 = -1.*t17451*t17240*t17434;
  t19645 = -1.*t17451*t65*t17422;
  t19665 = t19645 + t19655 + t17706 + t17768 + t18145 + t19124 + t19595;
  t17563 = 0.28121*t17451*t17280;
  t17590 = 0.28121*t17499*t17367;
  t17601 = 0.50321*t17348*t17599;
  t17606 = -0.50321*t17517*t17369;
  t17607 = t17335*t17599;
  t17608 = t17517*t17369;
  t17610 = t17607 + t17608;
  t17623 = 0.19821*t17610;
  t17641 = t17563 + t17590 + t17601 + t17606 + t17623;
  t19857 = t17451*t65*t15148;
  t19864 = -1.*t17451*t17240*t17212;
  t19866 = t19857 + t19864;
  t19871 = t17280*t19866;
  t19881 = -1.*t15068*t17367;
  t19888 = t19871 + t19881;
  t19949 = -1.*t19866*t17367;
  t19950 = t17783 + t19949;
  t17769 = -0.28121*t15068*t17367;
  t20030 = -1.*t17280*t19866;
  t20054 = t20030 + t17771;
  t17506 = -0.50321*t17335*t17503;
  t17519 = 0.50321*t17517*t17369;
  t17521 = t17335*t17503;
  t17523 = -1.*t17517*t17369;
  t17525 = t17521 + t17523;
  t17529 = 0.19821*t17525;
  t17541 = t17506 + t17519 + t17529;
  t19895 = -0.50321*t17335*t19888;
  t19951 = 0.50321*t19950*t17369;
  t19967 = t17335*t19888;
  t19998 = -1.*t19950*t17369;
  t20003 = t19967 + t19998;
  t20005 = 0.19821*t20003;
  t20009 = t19895 + t19951 + t20005;
  t20170 = t17280*t15068;
  t20186 = t19866*t17367;
  t20196 = t20170 + t20186;
  t20522 = 0.28121*t17284*t17821;
  t20535 = 0.50321*t17280*t17348*t17821;
  t20549 = 0.15121*t17765;
  t20563 = -0.50321*t17821*t17367*t17369;
  t20566 = t17280*t17335*t17821;
  t20570 = t17821*t17367*t17369;
  t20578 = t20566 + t20570;
  t20592 = 0.19821*t20578;
  t20832 = Cos(var1[3]);
  t20812 = Sin(var1[3]);
  t20827 = -1.*t65*t20812;
  t20842 = -1.*t20832*t15068*t17240;
  t20852 = t20827 + t20842;
  t20872 = t20832*t65*t15068;
  t20882 = -1.*t20812*t17240;
  t20892 = t20872 + t20882;
  t20905 = t15148*t20852;
  t20917 = -1.*t20892*t17212;
  t20919 = t20905 + t20917;
  t21079 = -1.*t20832*t65*t15068;
  t21093 = t20812*t17240;
  t21099 = t21079 + t21093;
  t21136 = t21099*t17212;
  t21149 = t20905 + t21136;
  t20968 = -1.*t20852*t17212;
  t21273 = t15148*t20892;
  t21309 = t20852*t17212;
  t21326 = t21273 + t21309;
  t21261 = -1.*t20832*t17451*t17280;
  t21333 = t21326*t17367;
  t21339 = t21261 + t21333;
  t21355 = t17280*t21326;
  t21365 = t20832*t17451*t17367;
  t21381 = t21355 + t21365;
  t21477 = t20832*t17451*t17280;
  t21497 = -1.*t21326*t17367;
  t21509 = t21477 + t21497;
  t21631 = t20832*t17451*t65*t15148;
  t21636 = -1.*t20832*t17451*t17240*t17212;
  t21646 = t21631 + t21636;
  t21693 = t17280*t21646;
  t21694 = -1.*t20832*t15068*t17367;
  t21698 = t21693 + t21694;
  t21700 = t20832*t17280*t15068;
  t21701 = t21646*t17367;
  t21702 = t21700 + t21701;
  t21714 = -1.*t20832*t65;
  t21715 = t20812*t15068*t17240;
  t21716 = t21714 + t21715;
  t21718 = -1.*t65*t20812*t15068;
  t21719 = -1.*t20832*t17240;
  t21725 = t21718 + t21719;
  t21733 = t15148*t21725;
  t21734 = t21716*t17212;
  t21735 = t21733 + t21734;
  t21740 = t17280*t21735;
  t21741 = -1.*t17451*t20812*t17367;
  t21755 = t21740 + t21741;
  t21784 = t17451*t17280*t20812;
  t21791 = t21735*t17367;
  t21793 = t21784 + t21791;
  t21847 = -1.*t17451*t15148*t20812*t17240;
  t21854 = -1.*t17451*t65*t20812*t17212;
  t21856 = t21847 + t21854;
  t21860 = 0.28121*t17284*t21856;
  t21871 = 0.50321*t17280*t17348*t21856;
  t21879 = -1.*t17451*t65*t15148*t20812;
  t21885 = t17451*t20812*t17240*t17212;
  t21896 = t21879 + t21885;
  t21903 = 0.15121*t21896;
  t21905 = -0.50321*t21856*t17367*t17369;
  t21943 = t17280*t17335*t21856;
  t21944 = t21856*t17367*t17369;
  t21945 = t21943 + t21944;
  t21946 = 0.19821*t21945;
  t21964 = t17451*t65*t15148*t20812;
  t21965 = -1.*t17451*t20812*t17240*t17212;
  t21966 = t21964 + t21965;
  t21963 = t17280*t20812*t15068;
  t21967 = t21966*t17367;
  t21968 = t21963 + t21967;
  t21970 = t17280*t21966;
  t21971 = -1.*t20812*t15068*t17367;
  t21972 = t21970 + t21971;
  t21982 = -1.*t17280*t20812*t15068;
  t21983 = -1.*t21966*t17367;
  t21984 = t21982 + t21983;
  t21592 = -1.*t20832*t17451*t17240*t17235;
  t21599 = t20832*t17451*t65*t17270;
  t21609 = -1.*t20832*t17451*t15148*t17240;
  t21614 = -1.*t20832*t17451*t65*t17212;
  t21618 = t21609 + t21614;
  t21620 = 0.15121*t21618;
  t21653 = 0.28121*t17284*t21646;
  t21683 = 0.28121*t20832*t15068*t17367;
  t21699 = 0.50321*t17348*t21698;
  t21703 = -0.50321*t21702*t17369;
  t21704 = t17335*t21698;
  t21705 = t21702*t17369;
  t21710 = t21704 + t21705;
  t21711 = 0.19821*t21710;
  t21712 = t21592 + t21599 + t21620 + t21653 + t21683 + t21699 + t21703 + t21711;
  t21738 = 0.28121*t17451*t20812*t17367;
  t22167 = -1.*t65*t15148*t20812*t15068;
  t22170 = t20812*t15068*t17240*t17212;
  t22174 = t22167 + t22170;
  t22183 = t17280*t22174;
  t22185 = t22183 + t21741;
  t22188 = t22174*t17367;
  t22189 = t21784 + t22188;
  t22206 = t20832*t65;
  t22207 = -1.*t20812*t15068*t17240;
  t22208 = t22206 + t22207;
  t22209 = t15148*t22208;
  t22210 = t21725*t17212;
  t22211 = t22209 + t22210;
  t21841 = -1.*t17451*t65*t20812*t17235;
  t21845 = -1.*t17451*t20812*t17240*t17270;
  t21953 = t21841 + t21845 + t21860 + t21871 + t21903 + t21905 + t21946;
  t21110 = t21099*t17235;
  t21117 = t20852*t17270;
  t21174 = 0.28121*t17284*t21149;
  t21186 = 0.50321*t17280*t17348*t21149;
  t21192 = t15148*t21099;
  t21207 = t21192 + t20968;
  t21213 = 0.15121*t21207;
  t21221 = -0.50321*t21149*t17367*t17369;
  t21225 = t17280*t17335*t21149;
  t21227 = t21149*t17367*t17369;
  t21234 = t21225 + t21227;
  t21240 = 0.19821*t21234;
  t21249 = t21110 + t21117 + t21174 + t21186 + t21213 + t21221 + t21240;
  t21729 = -1.*t21725*t17212;
  t22281 = -1.*t22208*t17212;
  t22285 = t21733 + t22281;
  t21717 = t21716*t17235;
  t21726 = t21725*t17270;
  t21727 = t15148*t21716;
  t21730 = t21727 + t21729;
  t21732 = 0.15121*t21730;
  t21736 = 0.28121*t17284*t21735;
  t22350 = t65*t20812*t15068;
  t22353 = t20832*t17240;
  t22354 = t22350 + t22353;
  t22356 = -1.*t22354*t17212;
  t22358 = t22209 + t22356;
  t21955 = -1.*t17451*t20812*t17240*t17422;
  t21957 = t17451*t65*t20812*t17434;
  t21961 = t21955 + t21957 + t21860 + t21871 + t21903 + t21905 + t21946;
  t20862 = t20852*t17422;
  t20903 = t20892*t17434;
  t20921 = 0.28121*t17284*t20919;
  t20940 = 0.50321*t17280*t17348*t20919;
  t20949 = -1.*t15148*t20892;
  t20975 = t20949 + t20968;
  t20996 = 0.15121*t20975;
  t21000 = -0.50321*t20919*t17367*t17369;
  t21013 = t17280*t17335*t20919;
  t21027 = t20919*t17367*t17369;
  t21035 = t21013 + t21027;
  t21042 = 0.19821*t21035;
  t21044 = t20862 + t20903 + t20921 + t20940 + t20996 + t21000 + t21042;
  t22260 = t21725*t17422;
  t22265 = t22208*t17434;
  t22266 = -1.*t15148*t22208;
  t22275 = t22266 + t21729;
  t22277 = 0.15121*t22275;
  t22289 = 0.28121*t17284*t22285;
  t22293 = 0.50321*t17280*t17348*t22285;
  t22294 = -0.50321*t22285*t17367*t17369;
  t22296 = t17280*t17335*t22285;
  t22297 = t22285*t17367*t17369;
  t22298 = t22296 + t22297;
  t22299 = 0.19821*t22298;
  t22303 = t22260 + t22265 + t22277 + t22289 + t22293 + t22294 + t22299;
  t19715 = t17425 + t17220;
  t22453 = -1.*t15148*t22354;
  t22454 = t22453 + t22281;
  t22220 = 0.28121*t22211*t17367;
  t22221 = -0.50321*t17348*t22211*t17367;
  t22222 = -0.50321*t17280*t22211*t17369;
  t22223 = -1.*t17335*t22211*t17367;
  t22224 = t17280*t22211*t17369;
  t22225 = t22223 + t22224;
  t22226 = 0.19821*t22225;
  t22227 = t22220 + t22221 + t22222 + t22226;
  t22375 = 0.28121*t22358*t17367;
  t22376 = -0.50321*t17348*t22358*t17367;
  t22378 = -0.50321*t17280*t22358*t17369;
  t22379 = -1.*t17335*t22358*t17367;
  t22380 = t17280*t22358*t17369;
  t22381 = t22379 + t22380;
  t22384 = 0.19821*t22381;
  t22385 = t22375 + t22376 + t22378 + t22384;
  t21457 = -0.28121*t20832*t17451*t17280;
  t21467 = 0.28121*t21326*t17367;
  t21518 = 0.50321*t17348*t21509;
  t21520 = -0.50321*t21381*t17369;
  t21532 = t17335*t21509;
  t21540 = t21381*t17369;
  t21545 = t21532 + t21540;
  t21558 = 0.19821*t21545;
  t21562 = t21457 + t21467 + t21518 + t21520 + t21558;
  t21980 = 0.28121*t17280*t20812*t15068;
  t21981 = 0.28121*t21966*t17367;
  t22004 = 0.50321*t17348*t21984;
  t22056 = -0.50321*t21972*t17369;
  t22060 = t17335*t21984;
  t22063 = t21972*t17369;
  t22072 = t22060 + t22063;
  t22077 = 0.19821*t22072;
  t22085 = t21980 + t21981 + t22004 + t22056 + t22077;
  t22490 = t15148*t22354;
  t22495 = t22208*t17212;
  t22502 = t22490 + t22495;
  t22510 = t17280*t22502;
  t22511 = t17451*t20812*t17367;
  t22512 = t22510 + t22511;
  t22516 = -1.*t22502*t17367;
  t22518 = t21784 + t22516;
  t22534 = -1.*t17280*t22502;
  t22535 = t22534 + t21741;
  t22212 = -0.50321*t17335*t22211*t17367;
  t22213 = 0.50321*t17280*t22211*t17369;
  t22214 = t17335*t22211*t17367;
  t22215 = -1.*t17280*t22211*t17369;
  t22216 = t22214 + t22215;
  t22217 = 0.19821*t22216;
  t22218 = t22212 + t22213 + t22217;
  t22361 = -0.50321*t17335*t22358*t17367;
  t22362 = 0.50321*t17280*t22358*t17369;
  t22363 = t17335*t22358*t17367;
  t22364 = -1.*t17280*t22358*t17369;
  t22365 = t22363 + t22364;
  t22369 = 0.19821*t22365;
  t22373 = t22361 + t22362 + t22369;
  t21351 = -0.50321*t17335*t21339;
  t21391 = 0.50321*t21381*t17369;
  t21401 = t17335*t21339;
  t21417 = -1.*t21381*t17369;
  t21427 = t21401 + t21417;
  t21437 = 0.19821*t21427;
  t21441 = t21351 + t21391 + t21437;
  t21969 = -0.50321*t17335*t21968;
  t21973 = 0.50321*t21972*t17369;
  t21974 = t17335*t21968;
  t21975 = -1.*t21972*t17369;
  t21976 = t21974 + t21975;
  t21977 = 0.19821*t21976;
  t21978 = t21969 + t21973 + t21977;
  t22513 = -0.50321*t17335*t22512;
  t22520 = 0.50321*t22518*t17369;
  t22521 = t17335*t22512;
  t22522 = -1.*t22518*t17369;
  t22523 = t22521 + t22522;
  t22524 = 0.19821*t22523;
  t22525 = t22513 + t22520 + t22524;
  t22551 = -1.*t17451*t17280*t20812;
  t22552 = t22502*t17367;
  t22553 = t22551 + t22552;
  t22588 = t21725*t17235;
  t22589 = t22208*t17270;
  t22590 = 0.28121*t17284*t22211;
  t22591 = 0.50321*t17280*t17348*t22211;
  t22592 = 0.15121*t22285;
  t22594 = -0.50321*t22211*t17367*t17369;
  t22595 = t17280*t17335*t22211;
  t22596 = t22211*t17367*t17369;
  t22597 = t22595 + t22596;
  t22598 = 0.19821*t22597;
  t22599 = t22588 + t22589 + t22590 + t22591 + t22592 + t22594 + t22598;
  t22600 = t22208*t17422;
  t22601 = t22354*t17434;
  t22602 = 0.28121*t17284*t22358;
  t22603 = 0.50321*t17280*t17348*t22358;
  t22604 = 0.15121*t22454;
  t22607 = -0.50321*t22358*t17367*t17369;
  t22609 = t17280*t17335*t22358;
  t22610 = t22358*t17367*t17369;
  t22611 = t22609 + t22610;
  t22612 = 0.19821*t22611;
  t22613 = t22600 + t22601 + t22602 + t22603 + t22604 + t22607 + t22612;
  t22640 = -0.50321*t17335*t22553;
  t22641 = 0.50321*t22512*t17369;
  t22642 = t17335*t22553;
  t22646 = -1.*t22512*t17369;
  t22656 = t22642 + t22646;
  t22657 = 0.19821*t22656;
  t22658 = t22640 + t22641 + t22657;
  t22614 = -0.28121*t17451*t17280*t20812;
  t22615 = 0.28121*t22502*t17367;
  t22619 = 0.50321*t17348*t22518;
  t22623 = -0.50321*t22512*t17369;
  t22627 = t17335*t22518;
  t22631 = t22512*t17369;
  t22636 = t22627 + t22631;
  t22638 = 0.19821*t22636;
  t22639 = t22614 + t22615 + t22619 + t22623 + t22638;
  t22575 = -1.*t17451*t20812*t17240*t17235;
  t22576 = t17451*t65*t20812*t17270;
  t22577 = 0.15121*t21856;
  t22578 = 0.28121*t17284*t21966;
  t22579 = 0.28121*t20812*t15068*t17367;
  t22581 = 0.50321*t17348*t21972;
  t22582 = -0.50321*t21968*t17369;
  t22583 = t17335*t21972;
  t22584 = t21968*t17369;
  t22585 = t22583 + t22584;
  t22586 = 0.19821*t22585;
  t22587 = t22575 + t22576 + t22577 + t22578 + t22579 + t22581 + t22582 + t22586;
  t22562 = t20852*t17235;
  t22563 = t20892*t17270;
  t22564 = 0.15121*t20919;
  t22565 = 0.28121*t17284*t21326;
  t22566 = -0.28121*t20832*t17451*t17367;
  t22567 = 0.50321*t17348*t21381;
  t22568 = -0.50321*t21339*t17369;
  t22569 = t17335*t21381;
  t22570 = t21339*t17369;
  t22571 = t22569 + t22570;
  t22573 = 0.19821*t22571;
  t22574 = t22562 + t22563 + t22564 + t22565 + t22566 + t22567 + t22568 + t22573;
  t22674 = t20832*t17451*t15148*t17240;
  t22675 = t20832*t17451*t65*t17212;
  t22676 = t22674 + t22675;
  t22677 = 0.28121*t17284*t22676;
  t22678 = 0.50321*t17280*t17348*t22676;
  t22679 = 0.15121*t21646;
  t22680 = -0.50321*t22676*t17367*t17369;
  t22681 = t17280*t17335*t22676;
  t22683 = t22676*t17367*t17369;
  t22685 = t22681 + t22683;
  t22687 = 0.19821*t22685;
  t22704 = -1.*t20832*t17451*t65*t15148;
  t22705 = t20832*t17451*t17240*t17212;
  t22706 = t22704 + t22705;
  t22700 = -1.*t20832*t17280*t15068;
  t22707 = t22706*t17367;
  t22708 = t22700 + t22707;
  t22756 = t17280*t22706;
  t22766 = t20832*t15068*t17367;
  t22798 = t22756 + t22766;
  t22858 = -1.*t22706*t17367;
  t22859 = t21700 + t22858;
  t22875 = t20832*t65*t15148*t15068;
  t22876 = -1.*t20832*t15068*t17240*t17212;
  t22877 = t22875 + t22876;
  t22879 = t17280*t22877;
  t22883 = t22879 + t21365;
  t22900 = t22877*t17367;
  t22901 = t21261 + t22900;
  t22926 = t65*t20812;
  t22932 = t20832*t15068*t17240;
  t22934 = t22926 + t22932;
  t23002 = t15148*t22934;
  t23003 = t20892*t17212;
  t23004 = t23002 + t23003;
  t22672 = t20832*t17451*t65*t17235;
  t22673 = t20832*t17451*t17240*t17270;
  t22688 = t22672 + t22673 + t22677 + t22678 + t22679 + t22680 + t22687;
  t23161 = -1.*t22934*t17212;
  t23162 = t21273 + t23161;
  t23196 = -1.*t21099*t17212;
  t23197 = t23002 + t23196;
  t22690 = t20832*t17451*t17240*t17422;
  t22694 = -1.*t20832*t17451*t65*t17434;
  t22695 = t22690 + t22694 + t22677 + t22678 + t22679 + t22680 + t22687;
  t23036 = t20892*t17422;
  t23037 = t22934*t17434;
  t23103 = -1.*t15148*t22934;
  t23122 = t23103 + t20917;
  t23133 = 0.15121*t23122;
  t23176 = 0.28121*t17284*t23162;
  t23181 = 0.50321*t17280*t17348*t23162;
  t23182 = -0.50321*t23162*t17367*t17369;
  t23185 = t17280*t17335*t23162;
  t23186 = t23162*t17367*t17369;
  t23187 = t23185 + t23186;
  t23188 = 0.19821*t23187;
  t23189 = t23036 + t23037 + t23133 + t23176 + t23181 + t23182 + t23188;
  t23231 = -1.*t15148*t21099;
  t23232 = t23231 + t23161;
  t23017 = 0.28121*t23004*t17367;
  t23018 = -0.50321*t17348*t23004*t17367;
  t23019 = -0.50321*t17280*t23004*t17369;
  t23020 = -1.*t17335*t23004*t17367;
  t23021 = t17280*t23004*t17369;
  t23022 = t23020 + t23021;
  t23023 = 0.19821*t23022;
  t23024 = t23017 + t23018 + t23019 + t23023;
  t23212 = 0.28121*t23197*t17367;
  t23213 = -0.50321*t17348*t23197*t17367;
  t23214 = -0.50321*t17280*t23197*t17369;
  t23216 = -1.*t17335*t23197*t17367;
  t23217 = t17280*t23197*t17369;
  t23219 = t23216 + t23217;
  t23220 = 0.19821*t23219;
  t23221 = t23212 + t23213 + t23214 + t23220;
  t22856 = -0.28121*t20832*t17280*t15068;
  t22857 = 0.28121*t22706*t17367;
  t22860 = 0.50321*t17348*t22859;
  t22861 = -0.50321*t22798*t17369;
  t22862 = t17335*t22859;
  t22863 = t22798*t17369;
  t22864 = t22862 + t22863;
  t22865 = 0.19821*t22864;
  t22866 = t22856 + t22857 + t22860 + t22861 + t22865;
  t23250 = t22934*t17212;
  t23251 = t21192 + t23250;
  t23252 = t17280*t23251;
  t23253 = -1.*t20832*t17451*t17367;
  t23254 = t23252 + t23253;
  t23256 = -1.*t23251*t17367;
  t23257 = t21261 + t23256;
  t23307 = -1.*t17280*t23251;
  t23309 = t23307 + t21365;
  t23005 = -0.50321*t17335*t23004*t17367;
  t23006 = 0.50321*t17280*t23004*t17369;
  t23009 = t17335*t23004*t17367;
  t23010 = -1.*t17280*t23004*t17369;
  t23011 = t23009 + t23010;
  t23012 = 0.19821*t23011;
  t23015 = t23005 + t23006 + t23012;
  t23198 = -0.50321*t17335*t23197*t17367;
  t23199 = 0.50321*t17280*t23197*t17369;
  t23200 = t17335*t23197*t17367;
  t23204 = -1.*t17280*t23197*t17369;
  t23206 = t23200 + t23204;
  t23207 = 0.19821*t23206;
  t23209 = t23198 + t23199 + t23207;
  t22725 = -0.50321*t17335*t22708;
  t22830 = 0.50321*t22798*t17369;
  t22832 = t17335*t22708;
  t22851 = -1.*t22798*t17369;
  t22852 = t22832 + t22851;
  t22853 = 0.19821*t22852;
  t22854 = t22725 + t22830 + t22853;
  t23255 = -0.50321*t17335*t23254;
  t23258 = 0.50321*t23257*t17369;
  t23259 = t17335*t23254;
  t23260 = -1.*t23257*t17369;
  t23261 = t23259 + t23260;
  t23262 = 0.19821*t23261;
  t23263 = t23255 + t23258 + t23262;
  t23428 = t23251*t17367;
  t23429 = t21477 + t23428;
  p_output1[0]=(t17663 + t17674 + t17706 + t17768 + t17769 + 0.50321*t17348*t17774 - 0.50321*t17369*t17788 + 0.19821*(t17335*t17774 + t17369*t17788))*var2[4] + t17404*var2[5] + t17436*var2[6] + t17641*var2[7] + t17541*var2[8];
  p_output1[1]=t17871 + t18062 + t17404*var2[4] + (t17663 + t17674 + t17706 + t17768 + t18145 + t19124 + t19595)*var2[5] + t19665*var2[6];
  p_output1[2]=t17871 + t18062 + t17436*var2[4] + t19665*var2[5] + (t17706 + t17768 + t18145 + t19124 + t19595 + t19655 + t17451*t19715*t65)*var2[6];
  p_output1[3]=t17641*var2[4] + t18044*var2[5] + t18044*var2[6] + (t17769 + 0.28121*t17280*t19866 - 0.50321*t17369*t19950 + 0.50321*t17348*t20054 + 0.19821*(t17369*t19950 + t17335*t20054))*var2[7] + t20009*var2[8];
  p_output1[4]=t17541*var2[4] + t17870*var2[5] + t17870*var2[6] + t20009*var2[7] + (0.50321*t17335*t19888 + 0.50321*t17369*t20196 + 0.19821*(-1.*t17335*t19888 - 1.*t17369*t20196))*var2[8];
  p_output1[5]=1.;
  p_output1[6]=t15068*t17235*t17240 + 0.15121*t17302 + 0.28121*t17367*t17451 + 0.28121*t17284*t17499 - 0.50321*t17369*t17503 + 0.50321*t17348*t17517 + 0.19821*(t17369*t17503 + t17335*t17517) - 1.*t15068*t17270*t65;
  p_output1[7]=-1.*t17240*t17270*t17451 + t20522 + t20535 + t20549 + t20563 + t20592 - 1.*t17235*t17451*t65;
  p_output1[8]=-1.*t17240*t17422*t17451 + t20522 + t20535 + t20549 + t20563 + t20592 + t17434*t17451*t65;
  p_output1[9]=0.28121*t15068*t17280 + 0.28121*t17367*t19866 - 0.50321*t17369*t19888 + 0.50321*t17348*t19950 + 0.19821*(t17369*t19888 + t17335*t19950);
  p_output1[10]=0.50321*t17369*t19888 - 0.50321*t17335*t20196 + 0.19821*(-1.*t17369*t19888 + t17335*t20196);
  p_output1[11]=(t21717 + t21726 + t21732 + t21736 + t21738 + 0.50321*t17348*t21755 - 0.50321*t17369*t21793 + 0.19821*(t17335*t21755 + t17369*t21793))*var2[3] + t21712*var2[4] + t21249*var2[5] + t21044*var2[6] + t21562*var2[7] + t21441*var2[8];
  p_output1[12]=t21712*var2[3] + (t15068*t17235*t17240*t20812 + t21738 + 0.28121*t17284*t22174 + 0.50321*t17348*t22185 - 0.50321*t17369*t22189 + 0.19821*(t17335*t22185 + t17369*t22189) - 1.*t15068*t17270*t20812*t65 + 0.15121*(t15068*t15148*t17240*t20812 + t15068*t17212*t20812*t65))*var2[4] + t21953*var2[5] + t21961*var2[6] + t22085*var2[7] + t21978*var2[8];
  p_output1[13]=t21249*var2[3] + t21953*var2[4] + (t21717 + t21726 + t21732 + 0.50321*t17280*t17348*t21735 - 0.50321*t17367*t17369*t21735 + 0.19821*(t17280*t17335*t21735 + t17367*t17369*t21735) + t21736)*var2[5] + t22303*var2[6] + t22227*var2[7] + t22218*var2[8];
  p_output1[14]=t21044*var2[3] + t21961*var2[4] + t22303*var2[5] + (t22265 + t19715*t22354 + 0.15121*(t22266 + t17212*t22354) + 0.28121*t17284*t22454 + 0.50321*t17280*t17348*t22454 - 0.50321*t17367*t17369*t22454 + 0.19821*(t17280*t17335*t22454 + t17367*t17369*t22454))*var2[6] + t22385*var2[7] + t22373*var2[8];
  p_output1[15]=t21562*var2[3] + t22085*var2[4] + t22227*var2[5] + t22385*var2[6] + (t21738 + 0.28121*t17280*t22502 - 0.50321*t17369*t22518 + 0.50321*t17348*t22535 + 0.19821*(t17369*t22518 + t17335*t22535))*var2[7] + t22525*var2[8];
  p_output1[16]=t21441*var2[3] + t21978*var2[4] + t22218*var2[5] + t22373*var2[6] + t22525*var2[7] + (0.50321*t17335*t22512 + 0.50321*t17369*t22553 + 0.19821*(-1.*t17335*t22512 - 1.*t17369*t22553))*var2[8];
  p_output1[17]=1.;
  p_output1[18]=t22574;
  p_output1[19]=t22587;
  p_output1[20]=t22599;
  p_output1[21]=t22613;
  p_output1[22]=t22639;
  p_output1[23]=t22658;
  p_output1[24]=t22574*var2[3] + t22587*var2[4] + t22599*var2[5] + t22613*var2[6] + t22639*var2[7] + t22658*var2[8];
  p_output1[25]=t22587*var2[3] + (-1.*t15068*t17235*t17240*t20832 + t22566 + 0.28121*t17284*t22877 + 0.50321*t17348*t22883 - 0.50321*t17369*t22901 + 0.19821*(t17335*t22883 + t17369*t22901) + t15068*t17270*t20832*t65 + 0.15121*(-1.*t15068*t15148*t17240*t20832 - 1.*t15068*t17212*t20832*t65))*var2[4] + t22688*var2[5] + t22695*var2[6] + t22866*var2[7] + t22854*var2[8];
  p_output1[26]=t22599*var2[3] + t22688*var2[4] + (0.50321*t17280*t17348*t21326 - 0.50321*t17367*t17369*t21326 + 0.19821*(t17280*t17335*t21326 + t17367*t17369*t21326) + t22562 + t22563 + t22564 + t22565)*var2[5] + t23189*var2[6] + t23024*var2[7] + t23015*var2[8];
  p_output1[27]=t22613*var2[3] + t22695*var2[4] + t23189*var2[5] + (t19715*t21099 + t23037 + 0.15121*(t21136 + t23103) + 0.28121*t17284*t23232 + 0.50321*t17280*t17348*t23232 - 0.50321*t17367*t17369*t23232 + 0.19821*(t17280*t17335*t23232 + t17367*t17369*t23232))*var2[6] + t23221*var2[7] + t23209*var2[8];
  p_output1[28]=t22639*var2[3] + t22866*var2[4] + t23024*var2[5] + t23221*var2[6] + (t22566 + 0.28121*t17280*t23251 - 0.50321*t17369*t23257 + 0.50321*t17348*t23309 + 0.19821*(t17369*t23257 + t17335*t23309))*var2[7] + t23263*var2[8];
  p_output1[29]=t22658*var2[3] + t22854*var2[4] + t23015*var2[5] + t23209*var2[6] + t23263*var2[7] + (0.50321*t17335*t23254 + 0.50321*t17369*t23429 + 0.19821*(-1.*t17335*t23254 - 1.*t17369*t23429))*var2[8];
  p_output1[30]=1.;
  p_output1[31]=-0.28121*t17367*t17451*t20812 + t17235*t22208 + t17270*t22354 + 0.15121*t22358 + 0.28121*t17284*t22502 + 0.50321*t17348*t22512 - 0.50321*t17369*t22553 + 0.19821*(t22521 + t17369*t22553);
  p_output1[32]=-0.28121*t15068*t17367*t20832 + t17235*t17240*t17451*t20832 + 0.15121*t22676 + 0.28121*t17284*t22706 - 0.50321*t17369*t22708 + 0.50321*t17348*t22798 + 0.19821*(t17369*t22708 + t17335*t22798) - 1.*t17270*t17451*t20832*t65;
  p_output1[33]=t17235*t20892 + t17270*t22934 + 0.28121*t17284*t23004 + 0.50321*t17280*t17348*t23004 - 0.50321*t17367*t17369*t23004 + 0.19821*(t17280*t17335*t23004 + t17367*t17369*t23004) + 0.15121*t23162;
  p_output1[34]=t17434*t21099 + t17422*t22934 + 0.28121*t17284*t23197 + 0.50321*t17280*t17348*t23197 - 0.50321*t17367*t17369*t23197 + 0.19821*(t17280*t17335*t23197 + t17367*t17369*t23197) + 0.15121*t23232;
  p_output1[35]=0.28121*t17280*t17451*t20832 + 0.28121*t17367*t23251 - 0.50321*t17369*t23254 + 0.50321*t17348*t23257 + 0.19821*(t17369*t23254 + t17335*t23257);
  p_output1[36]=0.50321*t17369*t23254 - 0.50321*t17335*t23429 + 0.19821*(-1.*t17369*t23254 + t17335*t23429);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 37, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_impact_velocity_FlFoot_ParallelStance.hh"

namespace ParallelStance
{

void J_impact_velocity_FlFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE