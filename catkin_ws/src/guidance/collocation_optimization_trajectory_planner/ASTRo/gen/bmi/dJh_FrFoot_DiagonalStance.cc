/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:49:12 GMT+02:00
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
  double t1590;
  double t1760;
  double t1892;
  double t1902;
  double t2236;
  double t2240;
  double t2293;
  double t3165;
  double t1238;
  double t1566;
  double t3318;
  double t3564;
  double t2537;
  double t3488;
  double t3489;
  double t6;
  double t3566;
  double t3669;
  double t3778;
  double t3784;
  double t3788;
  double t3798;
  double t3802;
  double t3823;
  double t3849;
  double t3901;
  double t3921;
  double t5018;
  double t5071;
  double t5116;
  double t5170;
  double t5243;
  double t5257;
  double t5397;
  double t5399;
  double t5409;
  double t5418;
  double t5454;
  double t5505;
  double t5576;
  double t5693;
  double t5702;
  double t5723;
  double t5743;
  double t5751;
  double t6091;
  double t6103;
  double t6109;
  double t6295;
  double t6296;
  double t6321;
  double t6328;
  double t6329;
  double t6438;
  double t6449;
  double t6454;
  double t6469;
  double t6509;
  double t6516;
  double t6531;
  double t6542;
  double t6293;
  double t6389;
  double t6395;
  double t6425;
  double t6450;
  double t6544;
  double t6591;
  double t6595;
  double t6599;
  double t6608;
  double t6609;
  double t6624;
  double t6639;
  double t6663;
  double t6704;
  double t6779;
  double t6783;
  double t6816;
  double t6434;
  double t6748;
  double t6753;
  double t6960;
  double t6965;
  double t6972;
  double t6204;
  double t6275;
  double t6283;
  double t6905;
  double t6923;
  double t6928;
  double t7133;
  double t7141;
  double t7179;
  double t7446;
  double t7454;
  double t7478;
  double t8518;
  double t8528;
  double t8529;
  double t6939;
  double t8696;
  double t8699;
  double t8714;
  double t7296;
  double t8764;
  double t8784;
  double t8785;
  double t6947;
  double t6984;
  double t7013;
  double t8735;
  double t8742;
  double t8744;
  double t8745;
  double t8750;
  double t8763;
  double t8789;
  double t7324;
  double t7346;
  double t7352;
  double t7836;
  double t8121;
  double t9324;
  double t9354;
  double t9426;
  double t9447;
  double t7858;
  double t7885;
  double t7907;
  double t8122;
  double t8134;
  double t8143;
  double t8286;
  double t8484;
  double t8288;
  double t8315;
  double t8331;
  double t8895;
  double t8906;
  double t10129;
  double t10159;
  double t10170;
  double t10228;
  double t8493;
  double t8498;
  double t8499;
  double t8530;
  double t8533;
  double t8585;
  double t8633;
  double t8634;
  double t8638;
  double t8645;
  double t8648;
  double t8654;
  double t8660;
  double t8661;
  double t8669;
  double t10688;
  double t10691;
  double t10692;
  double t10676;
  double t8753;
  double t10802;
  double t10806;
  double t10812;
  double t10829;
  double t10846;
  double t10860;
  double t8788;
  double t8807;
  double t8811;
  double t8820;
  double t8825;
  double t8886;
  double t10875;
  double t8926;
  double t8950;
  double t10908;
  double t8973;
  double t8980;
  double t9049;
  double t9110;
  double t9111;
  double t9121;
  double t9154;
  double t9187;
  double t9272;
  double t9282;
  double t9287;
  double t9303;
  double t9337;
  double t9382;
  double t9383;
  double t9407;
  double t9419;
  double t9428;
  double t9507;
  double t9513;
  double t9520;
  double t9535;
  double t11150;
  double t9561;
  double t9574;
  double t11159;
  double t9588;
  double t9594;
  double t9638;
  double t9653;
  double t9696;
  double t9724;
  double t9729;
  double t9730;
  double t9740;
  double t9742;
  double t9838;
  double t9892;
  double t9899;
  double t10004;
  double t10031;
  double t10089;
  double t10160;
  double t10174;
  double t10276;
  double t10291;
  double t10294;
  double t10330;
  double t10421;
  double t11554;
  double t10510;
  double t10513;
  double t11730;
  double t10607;
  double t10608;
  double t10640;
  double t11973;
  double t11984;
  double t11988;
  double t12211;
  double t12220;
  double t12246;
  double t12267;
  double t12272;
  double t12296;
  double t12314;
  double t12331;
  double t12339;
  double t12435;
  double t12437;
  double t12457;
  double t12475;
  double t12493;
  double t12504;
  double t12459;
  double t12518;
  double t12527;
  double t12537;
  double t12566;
  double t12584;
  double t12661;
  double t12662;
  double t12668;
  double t12675;
  double t12676;
  double t12678;
  double t12746;
  double t12757;
  double t12977;
  double t13007;
  double t12834;
  double t12176;
  double t12259;
  double t12264;
  double t13175;
  double t13191;
  double t13219;
  double t4922;
  double t4957;
  double t4968;
  double t13780;
  double t13838;
  double t13882;
  double t11918;
  double t11943;
  double t11950;
  double t5846;
  double t5913;
  double t5969;
  double t14469;
  double t14475;
  double t14481;
  double t14483;
  double t14489;
  double t14491;
  double t14584;
  double t14596;
  double t14601;
  double t14703;
  double t14715;
  double t14717;
  double t14578;
  double t14745;
  double t14748;
  double t14812;
  double t14824;
  double t14825;
  double t14765;
  double t14798;
  double t14858;
  double t14875;
  double t14877;
  double t14924;
  double t14941;
  double t14953;
  double t14982;
  double t15009;
  double t15039;
  double t12736;
  double t12741;
  double t12794;
  double t12820;
  double t12829;
  double t12853;
  double t12866;
  double t12873;
  double t15101;
  double t15143;
  double t13098;
  double t13099;
  double t13102;
  double t15366;
  double t15384;
  double t15399;
  double t15049;
  double t15073;
  double t15074;
  double t13621;
  double t13649;
  double t13683;
  double t13687;
  double t13707;
  double t13718;
  double t13730;
  double t15870;
  double t15973;
  t1590 = Cos(var1[13]);
  t1760 = Cos(var1[14]);
  t1892 = t1590*t1760;
  t1902 = Sin(var1[13]);
  t2236 = Sin(var1[14]);
  t2240 = t1902*t2236;
  t2293 = t1892 + t2240;
  t3165 = Cos(var1[12]);
  t1238 = Cos(var1[5]);
  t1566 = Sin(var1[12]);
  t3318 = Sin(var1[5]);
  t3564 = Cos(var1[3]);
  t2537 = t1238*t1566*t2293;
  t3488 = t3165*t2293*t3318;
  t3489 = t2537 + t3488;
  t6 = Sin(var1[3]);
  t3566 = Cos(var1[4]);
  t3669 = -1.*t1760*t1902;
  t3778 = t1590*t2236;
  t3784 = t3669 + t3778;
  t3788 = t3566*t3784;
  t3798 = Sin(var1[4]);
  t3802 = t3165*t1238*t2293;
  t3823 = -1.*t1566*t2293*t3318;
  t3849 = t3802 + t3823;
  t3901 = -1.*t3798*t3849;
  t3921 = t3788 + t3901;
  t5018 = -1.*t1238*t1566;
  t5071 = -1.*t3165*t3318;
  t5116 = t5018 + t5071;
  t5170 = t3165*t1238;
  t5243 = -1.*t1566*t3318;
  t5257 = t5170 + t5243;
  t5397 = t1760*t1902;
  t5399 = -1.*t1590*t2236;
  t5409 = t5397 + t5399;
  t5418 = t1238*t1566*t5409;
  t5454 = t3165*t5409*t3318;
  t5505 = t5418 + t5454;
  t5576 = t3566*t2293;
  t5693 = t3165*t1238*t5409;
  t5702 = -1.*t1566*t5409*t3318;
  t5723 = t5693 + t5702;
  t5743 = -1.*t3798*t5723;
  t5751 = t5576 + t5743;
  t6091 = -1.*t3784*t3798;
  t6103 = -1.*t3566*t3849;
  t6109 = t6091 + t6103;
  t6295 = -1.*t1760;
  t6296 = 1. + t6295;
  t6321 = 0.50321*t6296;
  t6328 = 0.19821*t1760;
  t6329 = t6321 + t6328;
  t6438 = -1.*t3165;
  t6449 = 1. + t6438;
  t6454 = -1.*t1590;
  t6469 = 1. + t6454;
  t6509 = 0.28121*t6469;
  t6516 = t1590*t6329;
  t6531 = -0.305*t1902*t2236;
  t6542 = t6509 + t6516 + t6531;
  t6293 = 0.28121*t1902;
  t6389 = -1.*t6329*t1902;
  t6395 = -0.305*t1590*t2236;
  t6425 = t6293 + t6389 + t6395;
  t6450 = 0.15121*t6449;
  t6544 = t3165*t6542;
  t6591 = t6450 + t6544;
  t6595 = t1238*t6591;
  t6599 = -0.15121*t6449;
  t6608 = -0.15121*t3165;
  t6609 = -0.15121*t1566;
  t6624 = t1566*t6542;
  t6639 = t6599 + t6608 + t6609 + t6624;
  t6663 = -1.*t6639*t3318;
  t6704 = t6595 + t6663;
  t6779 = t6425*t3798;
  t6783 = t3566*t6704;
  t6816 = t6779 + t6783;
  t6434 = -1.*t6425*t3798;
  t6748 = -1.*t3566*t6704;
  t6753 = t6434 + t6748;
  t6960 = t3566*t6425;
  t6965 = -1.*t3798*t6704;
  t6972 = t6960 + t6965;
  t6204 = t2293*t3798;
  t6275 = t3566*t5723;
  t6283 = t6204 + t6275;
  t6905 = t1238*t6639;
  t6923 = t6591*t3318;
  t6928 = t6905 + t6923;
  t7133 = -1.*t2293*t3798;
  t7141 = -1.*t3566*t5723;
  t7179 = t7133 + t7141;
  t7446 = t3784*t3798;
  t7454 = t3566*t3849;
  t7478 = t7446 + t7454;
  t8518 = -1.*t1238*t1566*t2293;
  t8528 = -1.*t3165*t2293*t3318;
  t8529 = t8518 + t8528;
  t6939 = -1.*t5257*t6928;
  t8696 = -1.*t1238*t6639;
  t8699 = -1.*t6591*t3318;
  t8714 = t8696 + t8699;
  t7296 = t5505*t6928;
  t8764 = -1.*t1238*t1566*t5409;
  t8784 = -1.*t3165*t5409*t3318;
  t8785 = t8764 + t8784;
  t6947 = -1.*t3566*t5116*t6816;
  t6984 = t3798*t5116*t6972;
  t7013 = t6939 + t6947 + t6984;
  t8735 = -1.*t5116*t6928;
  t8742 = -1.*t5257*t6704;
  t8744 = -1.*t3165*t1238;
  t8745 = t1566*t3318;
  t8750 = t8744 + t8745;
  t8763 = t5723*t6928;
  t8789 = t5505*t6704;
  t7324 = t6283*t6816;
  t7346 = t5751*t6972;
  t7352 = t7296 + t7324 + t7346;
  t7836 = -1.*t5505*t6928;
  t8121 = t3489*t6928;
  t9324 = -1.*t5723*t6928;
  t9354 = -1.*t5505*t6704;
  t9426 = t3849*t6928;
  t9447 = t3489*t6704;
  t7858 = -1.*t6283*t6816;
  t7885 = -1.*t5751*t6972;
  t7907 = t7836 + t7858 + t7885;
  t8122 = t7478*t6816;
  t8134 = t3921*t6972;
  t8143 = t8121 + t8122 + t8134;
  t8286 = t5257*t6928;
  t8484 = -1.*t3489*t6928;
  t8288 = t3566*t5116*t6816;
  t8315 = -1.*t3798*t5116*t6972;
  t8331 = t8286 + t8288 + t8315;
  t8895 = Power(t3566,2);
  t8906 = Power(t3798,2);
  t10129 = t5116*t6928;
  t10159 = t5257*t6704;
  t10170 = -1.*t3849*t6928;
  t10228 = -1.*t3489*t6704;
  t8493 = -1.*t7478*t6816;
  t8498 = -1.*t3921*t6972;
  t8499 = t8484 + t8493 + t8498;
  t8530 = var2[0]*t3566*t8529;
  t8533 = t6*t3798*t8529;
  t8585 = t3564*t3849;
  t8633 = t8533 + t8585;
  t8634 = var2[1]*t8633;
  t8638 = -1.*t3564*t3798*t8529;
  t8645 = t6*t3849;
  t8648 = t8638 + t8645;
  t8654 = var2[2]*t8648;
  t8660 = -1.*t5116*t6704;
  t8661 = t6939 + t8660;
  t8669 = t5723*t8661;
  t10688 = 0.15121*t1566;
  t10691 = -1.*t1566*t6542;
  t10692 = t10688 + t10691;
  t10676 = t6608 + t6544;
  t8753 = -1.*t8750*t6704;
  t10802 = t1238*t10692;
  t10806 = -1.*t10676*t3318;
  t10812 = t10802 + t10806;
  t10829 = t1238*t10676;
  t10846 = t10692*t3318;
  t10860 = t10829 + t10846;
  t8788 = t8785*t6704;
  t8807 = t6425*t2293;
  t8811 = t5723*t6704;
  t8820 = t8807 + t7296 + t8811;
  t8825 = t5116*t8820;
  t8886 = t3566*t8785*t7013;
  t10875 = -1.*t5257*t10860;
  t8926 = -1.*t3566*t8750*t6816;
  t8950 = t3798*t8750*t6972;
  t10908 = t5505*t10860;
  t8973 = t3566*t8785*t6816;
  t8980 = -1.*t3798*t8785*t6972;
  t9049 = t3566*t8750*t7352;
  t9110 = var2[0]*t3566*t8750;
  t9111 = t6*t5116;
  t9121 = -1.*t3564*t3798*t8750;
  t9154 = t9111 + t9121;
  t9187 = var2[2]*t9154;
  t9272 = t3564*t5116;
  t9282 = t6*t3798*t8750;
  t9287 = t9272 + t9282;
  t9303 = var2[1]*t9287;
  t9337 = -1.*t8785*t6704;
  t9382 = -1.*t6425*t2293;
  t9383 = -1.*t5723*t6704;
  t9407 = t9382 + t7836 + t9383;
  t9419 = t3849*t9407;
  t9428 = t8529*t6704;
  t9507 = t6425*t3784;
  t9513 = t3849*t6704;
  t9520 = t9507 + t8121 + t9513;
  t9535 = t5723*t9520;
  t11150 = -1.*t5505*t10860;
  t9561 = -1.*t3566*t8785*t6816;
  t9574 = t3798*t8785*t6972;
  t11159 = t3489*t10860;
  t9588 = t3566*t8529*t6816;
  t9594 = -1.*t3798*t8529*t6972;
  t9638 = t3566*t8529*t7907;
  t9653 = t3566*t8785*t8143;
  t9696 = var2[0]*t3566*t8785;
  t9724 = t6*t3798*t8785;
  t9729 = t3564*t5723;
  t9730 = t9724 + t9729;
  t9740 = var2[1]*t9730;
  t9742 = -1.*t3564*t3798*t8785;
  t9838 = t6*t5723;
  t9892 = t9742 + t9838;
  t9899 = var2[2]*t9892;
  t10004 = t5116*t6704;
  t10031 = t8286 + t10004;
  t10089 = t3849*t10031;
  t10160 = t8750*t6704;
  t10174 = -1.*t8529*t6704;
  t10276 = -1.*t6425*t3784;
  t10291 = -1.*t3849*t6704;
  t10294 = t10276 + t8484 + t10291;
  t10330 = t5116*t10294;
  t10421 = t3566*t8529*t8331;
  t11554 = t5257*t10860;
  t10510 = t3566*t8750*t6816;
  t10513 = -1.*t3798*t8750*t6972;
  t11730 = -1.*t3489*t10860;
  t10607 = -1.*t3566*t8529*t6816;
  t10608 = t3798*t8529*t6972;
  t10640 = t3566*t8750*t8499;
  t11973 = -1.*t1590*t1760;
  t11984 = -1.*t1902*t2236;
  t11988 = t11973 + t11984;
  t12211 = t3165*t1238*t3784;
  t12220 = -1.*t1566*t3784*t3318;
  t12246 = t12211 + t12220;
  t12267 = t1238*t1566*t3784;
  t12272 = t3165*t3784*t3318;
  t12296 = t12267 + t12272;
  t12314 = t3566*t11988;
  t12331 = -1.*t3798*t12246;
  t12339 = t12314 + t12331;
  t12435 = t1238*t1566*t6425;
  t12437 = t3165*t6425*t3318;
  t12457 = t12435 + t12437;
  t12475 = t3165*t1238*t6425;
  t12493 = -1.*t1566*t6425*t3318;
  t12504 = t12475 + t12493;
  t12459 = -1.*t5257*t12457;
  t12518 = 0.28121*t1590;
  t12527 = -1.*t1590*t6329;
  t12537 = 0.305*t1902*t2236;
  t12566 = t12518 + t12527 + t12537;
  t12584 = t5505*t12457;
  t12661 = t12566*t3798;
  t12662 = t3566*t12504;
  t12668 = t12661 + t12662;
  t12675 = t3566*t12566;
  t12676 = -1.*t3798*t12504;
  t12678 = t12675 + t12676;
  t12746 = t6425*t11988;
  t12757 = t3784*t12566;
  t12977 = Power(t3165,2);
  t13007 = Power(t1566,2);
  t12834 = -1.*t12566*t2293;
  t12176 = t11988*t3798;
  t12259 = t3566*t12246;
  t12264 = t12176 + t12259;
  t13175 = t12457*t3489;
  t13191 = t12296*t6928;
  t13219 = -1.*t5505*t12457;
  t4922 = t3564*t3489;
  t4957 = -1.*t6*t3921;
  t4968 = t4922 + t4957;
  t13780 = t5257*t12457;
  t13838 = -1.*t12457*t3489;
  t13882 = -1.*t12296*t6928;
  t11918 = t1566*t6591;
  t11943 = -1.*t3165*t6639;
  t11950 = t11918 + t11943;
  t5846 = t3564*t5505;
  t5913 = -1.*t6*t5751;
  t5969 = t5846 + t5913;
  t14469 = -0.305*t1760*t1902;
  t14475 = 0.305*t1590*t2236;
  t14481 = t14469 + t14475;
  t14483 = t1238*t1566*t14481;
  t14489 = t3165*t14481*t3318;
  t14491 = t14483 + t14489;
  t14584 = t3165*t1238*t14481;
  t14596 = -1.*t1566*t14481*t3318;
  t14601 = t14584 + t14596;
  t14703 = t1238*t1566*t11988;
  t14715 = t3165*t11988*t3318;
  t14717 = t14703 + t14715;
  t14578 = -1.*t5257*t14491;
  t14745 = -0.305*t1590*t1760;
  t14748 = t14745 + t6531;
  t14812 = t3165*t1238*t11988;
  t14824 = -1.*t1566*t11988*t3318;
  t14825 = t14812 + t14824;
  t14765 = t5505*t14491;
  t14798 = t14717*t6928;
  t14858 = t14748*t3798;
  t14875 = t3566*t14601;
  t14877 = t14858 + t14875;
  t14924 = t3566*t14748;
  t14941 = -1.*t3798*t14601;
  t14953 = t14924 + t14941;
  t14982 = t5409*t3798;
  t15009 = t3566*t14825;
  t15039 = t14982 + t15009;
  t12736 = -1.*t5409*t6542;
  t12741 = t12736 + t9382;
  t12794 = t6542*t2293;
  t12820 = t9507 + t12794;
  t12829 = -1.*t5409*t6425;
  t12853 = -1.*t3165*t5409*t6591;
  t12866 = -1.*t1566*t5409*t6639;
  t12873 = t9382 + t12853 + t12866;
  t15101 = t3784*t14748;
  t15143 = -1.*t14748*t2293;
  t13098 = t3165*t2293*t6591;
  t13099 = t1566*t2293*t6639;
  t13102 = t9507 + t13098 + t13099;
  t15366 = t14491*t3489;
  t15384 = -1.*t5505*t14491;
  t15399 = -1.*t14717*t6928;
  t15049 = t3566*t5409;
  t15073 = -1.*t3798*t14825;
  t15074 = t15049 + t15073;
  t13621 = -0.15121*t11988;
  t13649 = -0.15121*t2293;
  t13683 = t13621 + t13649;
  t13687 = var2[12]*t13683;
  t13707 = -1.*t1566*t6591;
  t13718 = t3165*t6639;
  t13730 = t13707 + t13718;
  t15870 = t5257*t14491;
  t15973 = -1.*t14491*t3489;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t3564*t3921 - 1.*t3489*t6)*var2[1] + t4968*var2[2];
  p_output1[10]=(t3564*t3798*t5116 - 1.*t5257*t6)*var2[1] + (t3564*t5257 + t3798*t5116*t6)*var2[2];
  p_output1[11]=(-1.*t3564*t5751 - 1.*t5505*t6)*var2[1] + t5969*var2[2];
  p_output1[12]=t3921*var2[0] - 1.*t6*t6109*var2[1] + t3564*t6109*var2[2] + (t6283*(t3798*t5116*t6753 + t3798*t5116*t6816) + t5751*t7013 + t3566*t5116*(t5751*t6753 + t5751*t6816 + t6283*t6972 + t6972*t7179) - 1.*t3798*t5116*t7352)*var2[3];
  p_output1[13]=-1.*t3798*t5116*var2[0] + t3566*t5116*t6*var2[1] - 1.*t3564*t3566*t5116*var2[2] + ((-1.*t5751*t6753 - 1.*t5751*t6816 - 1.*t6283*t6972 - 1.*t6972*t7179)*t7478 + t6283*(t3921*t6753 + t3921*t6816 + t6109*t6972 + t6972*t7478) + t3921*t7907 + t5751*t8143)*var2[3];
  p_output1[14]=t5751*var2[0] - 1.*t6*t7179*var2[1] + t3564*t7179*var2[2] + ((-1.*t3798*t5116*t6753 - 1.*t3798*t5116*t6816)*t7478 + t3566*t5116*(-1.*t3921*t6753 - 1.*t3921*t6816 - 1.*t6109*t6972 - 1.*t6972*t7478) + t3921*t8331 - 1.*t3798*t5116*t8499)*var2[3];
  p_output1[15]=t8530 + t8634 + t8654 + (t8886 + t6283*(t8735 + t8742 - 1.*t5116*t8714*t8895 - 1.*t5116*t8714*t8906 + t8926 + t8950) + t3566*t5116*(-1.*t3798*t5751*t8714 + t3566*t6283*t8714 + t8763 + t8789 + t8973 + t8980) + t9049)*var2[3] + (t8669 + t5505*(-1.*t5116*t8714 + t8735 + t8742 + t8753) + t5257*(t5723*t8714 + t8763 + t8788 + t8789) + t8825)*var2[4];
  p_output1[16]=t9110 + t9187 + t9303 + (t7478*(t3798*t5751*t8714 - 1.*t3566*t6283*t8714 + t9324 + t9354 + t9561 + t9574) + t6283*(-1.*t3798*t3921*t8714 + t3566*t7478*t8714 + t9426 + t9447 + t9588 + t9594) + t9638 + t9653)*var2[3] + (t3489*(-1.*t5723*t8714 + t9324 + t9337 + t9354) + t9419 + t5505*(t3849*t8714 + t9426 + t9428 + t9447) + t9535)*var2[4];
  p_output1[17]=t9696 + t9740 + t9899 + (t10421 + t10640 + t3566*t5116*(t10170 + t10228 + t10607 + t10608 + t3798*t3921*t8714 - 1.*t3566*t7478*t8714) + t7478*(t10129 + t10159 + t10510 + t10513 + t5116*t8714*t8895 + t5116*t8714*t8906))*var2[3] + (t10089 + t10330 + t5257*(t10170 + t10174 + t10228 - 1.*t3849*t8714) + t3489*(t10129 + t10159 + t10160 + t5116*t8714))*var2[4];
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
  p_output1[36]=t8530 + t8634 + t8654 + (t8886 + t6283*(t10875 + t8735 - 1.*t10812*t5116*t8895 - 1.*t10812*t5116*t8906 + t8926 + t8950) + t3566*t5116*(t10908 - 1.*t10812*t3798*t5751 + t10812*t3566*t6283 + t8763 + t8973 + t8980) + t9049)*var2[3] + (t8669 + t5505*(t10875 - 1.*t10812*t5116 + t8735 + t8753) + t5257*(t10908 + t10812*t5723 + t8763 + t8788) + t8825)*var2[4] + t2293*(t10692*t1566 - 1.*t10676*t3165 + t3165*t6591 + t1566*t6639)*var2[5];
  p_output1[37]=t9110 + t9187 + t9303 + (t7478*(t11150 + t10812*t3798*t5751 - 1.*t10812*t3566*t6283 + t9324 + t9561 + t9574) + t6283*(t11159 - 1.*t10812*t3798*t3921 + t10812*t3566*t7478 + t9426 + t9588 + t9594) + t9638 + t9653)*var2[3] + (t3489*(t11150 - 1.*t10812*t5723 + t9324 + t9337) + t9419 + t5505*(t11159 + t10812*t3849 + t9426 + t9428) + t9535)*var2[4] + (t2293*(t10676*t1566*t2293 + t10692*t2293*t3165 - 1.*t1566*t2293*t6591 + t2293*t3165*t6639) + t3784*(-1.*t10676*t1566*t5409 - 1.*t10692*t3165*t5409 + t1566*t5409*t6591 - 1.*t3165*t5409*t6639))*var2[5];
  p_output1[38]=t9696 + t9740 + t9899 + (t10421 + t10640 + t3566*t5116*(t10170 + t10607 + t10608 + t11730 + t10812*t3798*t3921 - 1.*t10812*t3566*t7478) + t7478*(t10129 + t10510 + t10513 + t11554 + t10812*t5116*t8895 + t10812*t5116*t8906))*var2[3] + (t10089 + t10330 + t3489*(t10129 + t10160 + t11554 + t10812*t5116) + (t10170 + t10174 + t11730 - 1.*t10812*t3849)*t5257)*var2[4] + t3784*(-1.*t10692*t1566 + t10676*t3165 - 1.*t3165*t6591 - 1.*t1566*t6639)*var2[5];
  p_output1[39]=t12264*var2[0] + (t12296*t3564 - 1.*t12339*t6)*var2[1] + (t12339*t3564 + t12296*t6)*var2[2] + ((t12459 - 1.*t12668*t3566*t5116 + t12678*t3798*t5116)*t6283 + t7013*t7478 + t3566*t5116*(t12584 + t12678*t5751 + t12668*t6283 + t8121 + t8122 + t8134))*var2[3] + ((t12459 - 1.*t12504*t5116)*t5505 + t3489*t8661 + t5257*(t12584 + t12566*t2293 + t12504*t5723 + t8121 + t9507 + t9513))*var2[4] + t11950*t3784*var2[5];
  p_output1[40]=(t6283*(t13175 + t13191 + t12678*t3921 + t12264*t6816 + t12339*t6972 + t12668*t7478) + t12264*t7907 + t7478*t8143 + t7478*(t13219 - 1.*t12678*t5751 - 1.*t12668*t6283 + t8484 + t8493 + t8498))*var2[3] + (t5505*(t12746 + t12757 + t13175 + t13191 + t12504*t3849 + t12246*t6704) + t3489*(t10276 + t10291 + t12834 + t13219 - 1.*t12504*t5723 + t8484) + t12296*t9407 + t3489*t9520)*var2[4] + (t11988*t12873 + t13102*t3784 + t3784*(t10276 + t12834 - 1.*t12977*t5409*t6425 - 1.*t13007*t5409*t6425 - 1.*t2293*t3165*t6591 - 1.*t1566*t2293*t6639) + t2293*(t12746 + t12757 + t12977*t2293*t6425 + t13007*t2293*t6425 + t3165*t3784*t6591 + t1566*t3784*t6639))*var2[5] + (t11988*t12741 + t12820*t3784 + t3784*(t10276 + t12829 + t12834 - 1.*t2293*t6542) + t2293*(t12746 + t12757 + t3784*t6542 + t8807))*var2[12];
  p_output1[41]=t13687 + t7478*var2[0] + t4968*var2[1] + (t3564*t3921 + t3489*t6)*var2[2] + ((t13780 + t12668*t3566*t5116 - 1.*t12678*t3798*t5116)*t7478 + t3566*t5116*(t13838 + t13882 - 1.*t12678*t3921 - 1.*t12264*t6816 - 1.*t12339*t6972 - 1.*t12668*t7478) + t12264*t8331)*var2[3] + (t10031*t12296 + t3489*(t13780 + t12504*t5116) + t5257*(t13838 + t13882 - 1.*t12566*t3784 - 1.*t12504*t3849 - 1.*t11988*t6425 - 1.*t12246*t6704))*var2[4] + t11988*t13730*var2[5];
  p_output1[42]=t6283*var2[0] + t5969*var2[1] + (t3564*t5751 + t5505*t6)*var2[2] + ((t14578 - 1.*t14877*t3566*t5116 + t14953*t3798*t5116)*t6283 + t3566*t5116*(t14765 + t14798 + t14953*t5751 + t14877*t6283 + t15039*t6816 + t15074*t6972) + t15039*t7013)*var2[3] + ((t14578 - 1.*t14601*t5116)*t5505 + t5257*(t14765 + t14798 + t14748*t2293 + t14601*t5723 + t5409*t6425 + t14825*t6704) + t14717*t8661)*var2[4] + t11950*t5409*var2[5] + (0.28121*t1760 - 0.305*Power(t1760,2) - 1.*t1760*t6329)*var2[13];
  p_output1[43]=((t15384 + t15399 - 1.*t14953*t5751 - 1.*t14877*t6283 - 1.*t15039*t6816 - 1.*t15074*t6972)*t7478 + t6283*(t15366 + t14953*t3921 + t7296 + t7324 + t7346 + t14877*t7478) + t6283*t7907 + t15039*t8143)*var2[3] + (t3489*(t12829 + t15143 + t15384 + t15399 - 1.*t14601*t5723 - 1.*t14825*t6704) + t5505*(t15101 + t15366 + t14601*t3849 + t7296 + t8807 + t8811) + t5505*t9407 + t14717*t9520)*var2[4] + (t12873*t2293 + t13102*t5409 + t3784*(t12829 + t15143 - 1.*t12977*t14481*t5409 - 1.*t13007*t14481*t5409 - 1.*t11988*t3165*t6591 - 1.*t11988*t1566*t6639) + t2293*(t15101 + t12977*t14481*t2293 + t13007*t14481*t2293 + t3165*t5409*t6591 + t1566*t5409*t6639 + t8807))*var2[5] + (t12741*t2293 + t12820*t5409 + t3784*(t12829 + t15143 - 1.*t14481*t5409 - 1.*t11988*t6542) + t2293*(t15101 + t14481*t2293 + t5409*t6542 + t8807))*var2[12];
  p_output1[44]=t13687 + t15039*var2[0] + (t14717*t3564 - 1.*t15074*t6)*var2[1] + (t15074*t3564 + t14717*t6)*var2[2] + ((t15870 + t14877*t3566*t5116 - 1.*t14953*t3798*t5116)*t7478 + t3566*t5116*(t15973 - 1.*t14953*t3921 - 1.*t14877*t7478 + t7836 + t7858 + t7885) + t6283*t8331)*var2[3] + (t3489*(t15870 + t14601*t5116) + t10031*t5505 + t5257*(t15973 - 1.*t14748*t3784 - 1.*t14601*t3849 + t7836 + t9382 + t9383))*var2[4] + t13730*t2293*var2[5] + (-0.28121*t2236 + 0.305*t1760*t2236 + t2236*t6329)*var2[13];
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
