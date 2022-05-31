/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 16:59:05 GMT+02:00
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
  double t2730;
  double t2766;
  double t4731;
  double t5105;
  double t5118;
  double t5121;
  double t6442;
  double t6953;
  double t2604;
  double t2723;
  double t7108;
  double t7163;
  double t6838;
  double t7142;
  double t7146;
  double t1767;
  double t7168;
  double t7702;
  double t7739;
  double t7753;
  double t7852;
  double t7985;
  double t7990;
  double t8009;
  double t8017;
  double t8049;
  double t8073;
  double t8418;
  double t8438;
  double t8476;
  double t8591;
  double t8597;
  double t8612;
  double t9142;
  double t9147;
  double t9156;
  double t9170;
  double t9179;
  double t9214;
  double t9232;
  double t9254;
  double t9264;
  double t9274;
  double t9304;
  double t9306;
  double t9362;
  double t9016;
  double t9045;
  double t9055;
  double t9122;
  double t9184;
  double t9191;
  double t9196;
  double t9247;
  double t9406;
  double t9436;
  double t9446;
  double t9453;
  double t9471;
  double t9472;
  double t9476;
  double t9482;
  double t9483;
  double t9514;
  double t8614;
  double t8615;
  double t8617;
  double t9526;
  double t9528;
  double t9541;
  double t9609;
  double t9613;
  double t9624;
  double t9201;
  double t9518;
  double t9519;
  double t9639;
  double t9640;
  double t9641;
  double t8582;
  double t8618;
  double t8741;
  double t9631;
  double t9632;
  double t9636;
  double t9680;
  double t9681;
  double t9682;
  double t9626;
  double t9629;
  double t9630;
  double t9637;
  double t9664;
  double t9665;
  double t9667;
  double t9703;
  double t9717;
  double t9721;
  double t9668;
  double t9826;
  double t9834;
  double t9844;
  double t9638;
  double t9644;
  double t9645;
  double t9751;
  double t9762;
  double t9763;
  double t9764;
  double t9772;
  double t9821;
  double t9926;
  double t9670;
  double t9671;
  double t9672;
  double t9683;
  double t9684;
  double t9685;
  double t9687;
  double t9688;
  double t9691;
  double t9692;
  double t9697;
  double t9698;
  double t9700;
  double t9701;
  double t9702;
  double t10270;
  double t10271;
  double t10272;
  double t10171;
  double t9789;
  double t10287;
  double t10289;
  double t10290;
  double t10294;
  double t10296;
  double t10298;
  double t9877;
  double t10033;
  double t10034;
  double t10038;
  double t10044;
  double t10051;
  double t10054;
  double t10057;
  double t10299;
  double t10063;
  double t10065;
  double t10304;
  double t10100;
  double t10114;
  double t10148;
  double t10524;
  double t10525;
  double t10526;
  double t10529;
  double t10540;
  double t10542;
  double t10570;
  double t10577;
  double t10578;
  double t10582;
  double t10583;
  double t10585;
  double t10616;
  double t10619;
  double t10662;
  double t10714;
  double t10717;
  double t10718;
  double t10682;
  double t10784;
  double t10786;
  double t10787;
  double t10823;
  double t10826;
  double t10828;
  double t10846;
  double t10848;
  double t10854;
  double t10859;
  double t10864;
  double t10868;
  double t10873;
  double t10875;
  double t10878;
  double t10495;
  double t10517;
  double t10520;
  double t11130;
  double t11139;
  double t11142;
  double t11144;
  double t11145;
  double t11148;
  double t11150;
  double t11151;
  double t11153;
  double t11160;
  double t11162;
  double t11164;
  double t11149;
  double t11169;
  double t11170;
  double t11176;
  double t11178;
  double t11179;
  double t11172;
  double t11174;
  double t11219;
  double t11220;
  double t11222;
  double t11225;
  double t11226;
  double t11232;
  double t11238;
  double t11239;
  double t11241;
  double t8235;
  double t8236;
  double t8392;
  double t9654;
  double t9655;
  double t9656;
  double t10889;
  double t10890;
  double t11307;
  double t10778;
  double t10829;
  double t11390;
  double t11393;
  double t11403;
  double t11406;
  double t11308;
  double t11313;
  double t11326;
  double t11342;
  double t11351;
  double t11352;
  double t11354;
  double t11356;
  double t11357;
  double t11360;
  double t11372;
  double t11375;
  double t11377;
  double t11391;
  double t11397;
  double t11398;
  double t11399;
  double t11400;
  double t11405;
  double t11420;
  double t11421;
  double t11682;
  double t11428;
  double t11446;
  double t11697;
  double t11485;
  double t11489;
  double t11501;
  double t11503;
  double t11745;
  double t11747;
  double t11796;
  double t11800;
  double t11758;
  double t11761;
  double t10528;
  double t10549;
  double t10563;
  double t11975;
  double t11981;
  double t12053;
  double t12076;
  double t11739;
  double t11743;
  double t11753;
  double t11755;
  double t11757;
  double t11782;
  double t11790;
  double t11791;
  double t12267;
  double t12283;
  double t11875;
  double t11877;
  double t11886;
  double t12405;
  double t12410;
  double t12417;
  double t11248;
  double t11249;
  double t11252;
  double t11284;
  double t11286;
  double t11287;
  double t11111;
  double t11114;
  double t11122;
  double t12233;
  double t12234;
  double t12703;
  double t12088;
  double t12705;
  double t12706;
  double t12711;
  double t12806;
  double t12807;
  double t12858;
  double t12879;
  double t12739;
  double t12764;
  double t12765;
  double t12774;
  double t12776;
  double t12783;
  double t12784;
  double t12786;
  double t12793;
  double t12796;
  double t12797;
  double t12798;
  double t12799;
  double t12813;
  double t12872;
  double t12882;
  double t12883;
  double t12901;
  double t12986;
  double t12919;
  double t12923;
  double t12993;
  double t12938;
  double t12941;
  double t12969;
  double t11263;
  double t11268;
  double t11269;
  double t13022;
  double t13033;
  double t13039;
  double t13010;
  double t13012;
  double t13013;
  double t13014;
  double t13015;
  double t13016;
  double t13017;
  double t13167;
  double t13175;
  double t11091;
  double t11095;
  double t11100;
  double t11054;
  double t11063;
  t2730 = Cos(var1[13]);
  t2766 = Cos(var1[14]);
  t4731 = t2730*t2766;
  t5105 = Sin(var1[13]);
  t5118 = Sin(var1[14]);
  t5121 = t5105*t5118;
  t6442 = t4731 + t5121;
  t6953 = Cos(var1[12]);
  t2604 = Cos(var1[5]);
  t2723 = Sin(var1[12]);
  t7108 = Sin(var1[5]);
  t7163 = Cos(var1[3]);
  t6838 = t2604*t2723*t6442;
  t7142 = t6953*t6442*t7108;
  t7146 = t6838 + t7142;
  t1767 = Sin(var1[3]);
  t7168 = Cos(var1[4]);
  t7702 = -1.*t2766*t5105;
  t7739 = t2730*t5118;
  t7753 = t7702 + t7739;
  t7852 = t7168*t7753;
  t7985 = Sin(var1[4]);
  t7990 = t6953*t2604*t6442;
  t8009 = -1.*t2723*t6442*t7108;
  t8017 = t7990 + t8009;
  t8049 = -1.*t7985*t8017;
  t8073 = t7852 + t8049;
  t8418 = -1.*t7753*t7985;
  t8438 = -1.*t7168*t8017;
  t8476 = t8418 + t8438;
  t8591 = t2766*t5105;
  t8597 = -1.*t2730*t5118;
  t8612 = t8591 + t8597;
  t9142 = -1.*t2766;
  t9147 = 1. + t9142;
  t9156 = 0.50321*t9147;
  t9170 = 0.19821*t2766;
  t9179 = t9156 + t9170;
  t9214 = -1.*t6953;
  t9232 = 1. + t9214;
  t9254 = -1.*t2730;
  t9264 = 1. + t9254;
  t9274 = 0.28121*t9264;
  t9304 = t2730*t9179;
  t9306 = -0.305*t5105*t5118;
  t9362 = t9274 + t9304 + t9306;
  t9016 = -1.*t2604*t2723;
  t9045 = -1.*t6953*t7108;
  t9055 = t9016 + t9045;
  t9122 = 0.28121*t5105;
  t9184 = -1.*t9179*t5105;
  t9191 = -0.305*t2730*t5118;
  t9196 = t9122 + t9184 + t9191;
  t9247 = 0.15121*t9232;
  t9406 = t6953*t9362;
  t9436 = t9247 + t9406;
  t9446 = t2604*t9436;
  t9453 = -0.15121*t9232;
  t9471 = -0.15121*t6953;
  t9472 = -0.15121*t2723;
  t9476 = t2723*t9362;
  t9482 = t9453 + t9471 + t9472 + t9476;
  t9483 = -1.*t9482*t7108;
  t9514 = t9446 + t9483;
  t8614 = t6953*t2604*t8612;
  t8615 = -1.*t2723*t8612*t7108;
  t8617 = t8614 + t8615;
  t9526 = t9196*t7985;
  t9528 = t7168*t9514;
  t9541 = t9526 + t9528;
  t9609 = t7168*t6442;
  t9613 = -1.*t7985*t8617;
  t9624 = t9609 + t9613;
  t9201 = -1.*t9196*t7985;
  t9518 = -1.*t7168*t9514;
  t9519 = t9201 + t9518;
  t9639 = t7168*t9196;
  t9640 = -1.*t7985*t9514;
  t9641 = t9639 + t9640;
  t8582 = t6442*t7985;
  t8618 = t7168*t8617;
  t8741 = t8582 + t8618;
  t9631 = t2604*t9482;
  t9632 = t9436*t7108;
  t9636 = t9631 + t9632;
  t9680 = -1.*t2604*t2723*t6442;
  t9681 = -1.*t6953*t6442*t7108;
  t9682 = t9680 + t9681;
  t9626 = t6953*t2604;
  t9629 = -1.*t2723*t7108;
  t9630 = t9626 + t9629;
  t9637 = -1.*t9630*t9636;
  t9664 = t2604*t2723*t8612;
  t9665 = t6953*t8612*t7108;
  t9667 = t9664 + t9665;
  t9703 = -1.*t2604*t9482;
  t9717 = -1.*t9436*t7108;
  t9721 = t9703 + t9717;
  t9668 = t9667*t9636;
  t9826 = -1.*t2604*t2723*t8612;
  t9834 = -1.*t6953*t8612*t7108;
  t9844 = t9826 + t9834;
  t9638 = -1.*t7168*t9055*t9541;
  t9644 = t7985*t9055*t9641;
  t9645 = t9637 + t9638 + t9644;
  t9751 = -1.*t9055*t9636;
  t9762 = -1.*t9630*t9514;
  t9763 = -1.*t6953*t2604;
  t9764 = t2723*t7108;
  t9772 = t9763 + t9764;
  t9821 = t8617*t9636;
  t9926 = t9667*t9514;
  t9670 = t8741*t9541;
  t9671 = t9624*t9641;
  t9672 = t9668 + t9670 + t9671;
  t9683 = var2[0]*t7168*t9682;
  t9684 = t1767*t7985*t9682;
  t9685 = t7163*t8017;
  t9687 = t9684 + t9685;
  t9688 = var2[1]*t9687;
  t9691 = -1.*t7163*t7985*t9682;
  t9692 = t1767*t8017;
  t9697 = t9691 + t9692;
  t9698 = var2[2]*t9697;
  t9700 = -1.*t9055*t9514;
  t9701 = t9637 + t9700;
  t9702 = t8617*t9701;
  t10270 = 0.15121*t2723;
  t10271 = -1.*t2723*t9362;
  t10272 = t10270 + t10271;
  t10171 = t9471 + t9406;
  t9789 = -1.*t9772*t9514;
  t10287 = t2604*t10272;
  t10289 = -1.*t10171*t7108;
  t10290 = t10287 + t10289;
  t10294 = t2604*t10171;
  t10296 = t10272*t7108;
  t10298 = t10294 + t10296;
  t9877 = t9844*t9514;
  t10033 = t9196*t6442;
  t10034 = t8617*t9514;
  t10038 = t10033 + t9668 + t10034;
  t10044 = t9055*t10038;
  t10051 = t7168*t9844*t9645;
  t10054 = Power(t7168,2);
  t10057 = Power(t7985,2);
  t10299 = -1.*t9630*t10298;
  t10063 = -1.*t7168*t9772*t9541;
  t10065 = t7985*t9772*t9641;
  t10304 = t9667*t10298;
  t10100 = t7168*t9844*t9541;
  t10114 = -1.*t7985*t9844*t9641;
  t10148 = t7168*t9772*t9672;
  t10524 = -1.*t2730*t2766;
  t10525 = -1.*t5105*t5118;
  t10526 = t10524 + t10525;
  t10529 = t6953*t2604*t7753;
  t10540 = -1.*t2723*t7753*t7108;
  t10542 = t10529 + t10540;
  t10570 = t2604*t2723*t7753;
  t10577 = t6953*t7753*t7108;
  t10578 = t10570 + t10577;
  t10582 = t7168*t10526;
  t10583 = -1.*t7985*t10542;
  t10585 = t10582 + t10583;
  t10616 = t2604*t2723*t9196;
  t10619 = t6953*t9196*t7108;
  t10662 = t10616 + t10619;
  t10714 = t6953*t2604*t9196;
  t10717 = -1.*t2723*t9196*t7108;
  t10718 = t10714 + t10717;
  t10682 = -1.*t9630*t10662;
  t10784 = 0.28121*t2730;
  t10786 = -1.*t2730*t9179;
  t10787 = 0.305*t5105*t5118;
  t10823 = t10784 + t10786 + t10787;
  t10826 = t9667*t10662;
  t10828 = t7146*t9636;
  t10846 = t10823*t7985;
  t10848 = t7168*t10718;
  t10854 = t10846 + t10848;
  t10859 = t7168*t10823;
  t10864 = -1.*t7985*t10718;
  t10868 = t10859 + t10864;
  t10873 = t7753*t7985;
  t10875 = t7168*t8017;
  t10878 = t10873 + t10875;
  t10495 = t2723*t9436;
  t10517 = -1.*t6953*t9482;
  t10520 = t10495 + t10517;
  t11130 = -0.305*t2766*t5105;
  t11139 = 0.305*t2730*t5118;
  t11142 = t11130 + t11139;
  t11144 = t2604*t2723*t11142;
  t11145 = t6953*t11142*t7108;
  t11148 = t11144 + t11145;
  t11150 = t6953*t2604*t11142;
  t11151 = -1.*t2723*t11142*t7108;
  t11153 = t11150 + t11151;
  t11160 = t2604*t2723*t10526;
  t11162 = t6953*t10526*t7108;
  t11164 = t11160 + t11162;
  t11149 = -1.*t9630*t11148;
  t11169 = -0.305*t2730*t2766;
  t11170 = t11169 + t9306;
  t11176 = t6953*t2604*t10526;
  t11178 = -1.*t2723*t10526*t7108;
  t11179 = t11176 + t11178;
  t11172 = t9667*t11148;
  t11174 = t11164*t9636;
  t11219 = t11170*t7985;
  t11220 = t7168*t11153;
  t11222 = t11219 + t11220;
  t11225 = t7168*t11170;
  t11226 = -1.*t7985*t11153;
  t11232 = t11225 + t11226;
  t11238 = t8612*t7985;
  t11239 = t7168*t11179;
  t11241 = t11238 + t11239;
  t8235 = t7163*t7146;
  t8236 = -1.*t1767*t8073;
  t8392 = t8235 + t8236;
  t9654 = -1.*t6442*t7985;
  t9655 = -1.*t7168*t8617;
  t9656 = t9654 + t9655;
  t10889 = t10878*t9541;
  t10890 = t8073*t9641;
  t11307 = -1.*t9667*t9636;
  t10778 = t9196*t7753;
  t10829 = t8017*t9514;
  t11390 = -1.*t8617*t9636;
  t11393 = -1.*t9667*t9514;
  t11403 = t8017*t9636;
  t11406 = t7146*t9514;
  t11308 = -1.*t8741*t9541;
  t11313 = -1.*t9624*t9641;
  t11326 = t11307 + t11308 + t11313;
  t11342 = t10828 + t10889 + t10890;
  t11351 = var2[0]*t7168*t9772;
  t11352 = t1767*t9055;
  t11354 = -1.*t7163*t7985*t9772;
  t11356 = t11352 + t11354;
  t11357 = var2[2]*t11356;
  t11360 = t7163*t9055;
  t11372 = t1767*t7985*t9772;
  t11375 = t11360 + t11372;
  t11377 = var2[1]*t11375;
  t11391 = -1.*t9844*t9514;
  t11397 = -1.*t9196*t6442;
  t11398 = -1.*t8617*t9514;
  t11399 = t11397 + t11307 + t11398;
  t11400 = t8017*t11399;
  t11405 = t9682*t9514;
  t11420 = t10778 + t10828 + t10829;
  t11421 = t8617*t11420;
  t11682 = -1.*t9667*t10298;
  t11428 = -1.*t7168*t9844*t9541;
  t11446 = t7985*t9844*t9641;
  t11697 = t7146*t10298;
  t11485 = t7168*t9682*t9541;
  t11489 = -1.*t7985*t9682*t9641;
  t11501 = t7168*t9682*t11326;
  t11503 = t7168*t9844*t11342;
  t11745 = t9196*t10526;
  t11747 = t7753*t10823;
  t11796 = Power(t6953,2);
  t11800 = Power(t2723,2);
  t11758 = -1.*t9196*t7753;
  t11761 = -1.*t10823*t6442;
  t10528 = t10526*t7985;
  t10549 = t7168*t10542;
  t10563 = t10528 + t10549;
  t11975 = t10662*t7146;
  t11981 = t10578*t9636;
  t12053 = -1.*t9667*t10662;
  t12076 = -1.*t7146*t9636;
  t11739 = -1.*t8612*t9362;
  t11743 = t11739 + t11397;
  t11753 = t9362*t6442;
  t11755 = t10778 + t11753;
  t11757 = -1.*t8612*t9196;
  t11782 = -1.*t6953*t8612*t9436;
  t11790 = -1.*t2723*t8612*t9482;
  t11791 = t11397 + t11782 + t11790;
  t12267 = t7753*t11170;
  t12283 = -1.*t11170*t6442;
  t11875 = t6953*t6442*t9436;
  t11877 = t2723*t6442*t9482;
  t11886 = t10778 + t11875 + t11877;
  t12405 = t11148*t7146;
  t12410 = -1.*t9667*t11148;
  t12417 = -1.*t11164*t9636;
  t11248 = t7168*t8612;
  t11249 = -1.*t7985*t11179;
  t11252 = t11248 + t11249;
  t11284 = t1767*t7985*t9055;
  t11286 = t7163*t9630;
  t11287 = t11284 + t11286;
  t11111 = t7163*t9667;
  t11114 = -1.*t1767*t9624;
  t11122 = t11111 + t11114;
  t12233 = -1.*t10878*t9541;
  t12234 = -1.*t8073*t9641;
  t12703 = t9630*t9636;
  t12088 = -1.*t8017*t9514;
  t12705 = t7168*t9055*t9541;
  t12706 = -1.*t7985*t9055*t9641;
  t12711 = t12703 + t12705 + t12706;
  t12806 = t9055*t9636;
  t12807 = t9630*t9514;
  t12858 = -1.*t8017*t9636;
  t12879 = -1.*t7146*t9514;
  t12739 = t12076 + t12233 + t12234;
  t12764 = var2[0]*t7168*t9844;
  t12765 = t1767*t7985*t9844;
  t12774 = t7163*t8617;
  t12776 = t12765 + t12774;
  t12783 = var2[1]*t12776;
  t12784 = -1.*t7163*t7985*t9844;
  t12786 = t1767*t8617;
  t12793 = t12784 + t12786;
  t12796 = var2[2]*t12793;
  t12797 = t9055*t9514;
  t12798 = t12703 + t12797;
  t12799 = t8017*t12798;
  t12813 = t9772*t9514;
  t12872 = -1.*t9682*t9514;
  t12882 = t11758 + t12076 + t12088;
  t12883 = t9055*t12882;
  t12901 = t7168*t9682*t12711;
  t12986 = t9630*t10298;
  t12919 = t7168*t9772*t9541;
  t12923 = -1.*t7985*t9772*t9641;
  t12993 = -1.*t7146*t10298;
  t12938 = -1.*t7168*t9682*t9541;
  t12941 = t7985*t9682*t9641;
  t12969 = t7168*t9772*t12739;
  t11263 = t1767*t7146;
  t11268 = t7163*t8073;
  t11269 = t11263 + t11268;
  t13022 = t9630*t10662;
  t13033 = -1.*t10662*t7146;
  t13039 = -1.*t10578*t9636;
  t13010 = -0.15121*t10526;
  t13012 = -0.15121*t6442;
  t13013 = t13010 + t13012;
  t13014 = var2[12]*t13013;
  t13015 = -1.*t2723*t9436;
  t13016 = t6953*t9482;
  t13017 = t13015 + t13016;
  t13167 = t9630*t11148;
  t13175 = -1.*t11148*t7146;
  t11091 = t1767*t9667;
  t11095 = t7163*t9624;
  t11100 = t11091 + t11095;
  t11054 = 0.28121*t2766;
  t11063 = -1.*t9179*t2766;
  p_output1[0]=(-1.*t1767*t7146 - 1.*t7163*t8073)*var2[1] + t8392*var2[2];
  p_output1[1]=t8073*var2[0] - 1.*t1767*t8476*var2[1] + t7163*t8476*var2[2] + (t8741*(t7985*t9055*t9519 + t7985*t9055*t9541) + t9624*t9645 + t7168*t9055*(t9519*t9624 + t9541*t9624 + t8741*t9641 + t9641*t9656) - 1.*t7985*t9055*t9672)*var2[3];
  p_output1[2]=t9683 + t9688 + t9698 + (t10051 + t10148 + t8741*(t10063 + t10065 - 1.*t10054*t9055*t9721 - 1.*t10057*t9055*t9721 + t9751 + t9762) + t7168*t9055*(t10100 + t10114 + t7168*t8741*t9721 - 1.*t7985*t9624*t9721 + t9821 + t9926))*var2[3] + (t10044 + t9702 + t9667*(-1.*t9055*t9721 + t9751 + t9762 + t9789) + t9630*(t8617*t9721 + t9821 + t9877 + t9926))*var2[4];
  p_output1[3]=t9683 + t9688 + t9698 + (t10051 + t10148 + t8741*(t10063 + t10065 + t10299 - 1.*t10054*t10290*t9055 - 1.*t10057*t10290*t9055 + t9751) + t7168*t9055*(t10100 + t10114 + t10304 + t10290*t7168*t8741 - 1.*t10290*t7985*t9624 + t9821))*var2[3] + (t10044 + t9702 + t9667*(t10299 - 1.*t10290*t9055 + t9751 + t9789) + t9630*(t10304 + t10290*t8617 + t9821 + t9877))*var2[4] + t6442*(t10272*t2723 - 1.*t10171*t6953 + t6953*t9436 + t2723*t9482)*var2[5];
  p_output1[4]=t10563*var2[0] + (-1.*t10585*t1767 + t10578*t7163)*var2[1] + (t10578*t1767 + t10585*t7163)*var2[2] + (t8741*(t10682 - 1.*t10854*t7168*t9055 + t10868*t7985*t9055) + t7168*t9055*(t10826 + t10828 + t10889 + t10890 + t10854*t8741 + t10868*t9624) + t10878*t9645)*var2[3] + ((t10778 + t10826 + t10828 + t10829 + t10823*t6442 + t10718*t8617)*t9630 + (t10682 - 1.*t10718*t9055)*t9667 + t7146*t9701)*var2[4] + t10520*t7753*var2[5];
  p_output1[5]=t8741*var2[0] + t11122*var2[1] + t11100*var2[2] + (t8741*(t11149 - 1.*t11222*t7168*t9055 + t11232*t7985*t9055) + t7168*t9055*(t11172 + t11174 + t11222*t8741 + t11241*t9541 + t11232*t9624 + t11252*t9641) + t11241*t9645)*var2[3] + ((t11172 + t11174 + t11170*t6442 + t11153*t8617 + t8612*t9196 + t11179*t9514)*t9630 + (t11149 - 1.*t11153*t9055)*t9667 + t11164*t9701)*var2[4] + t10520*t8612*var2[5] + (t11054 + t11063 - 0.305*Power(t2766,2))*var2[13];
  p_output1[6]=t10878;
  p_output1[7]=t8392;
  p_output1[8]=t11269;
  p_output1[9]=t8741*t9645 + t7168*t9055*t9672;
  p_output1[10]=t10038*t9630 + t9667*t9701;
  p_output1[11]=t10520*t6442;
  p_output1[12]=0.28121*t5118 - 0.305*t2766*t5118 - 1.*t5118*t9179;
  p_output1[13]=(t7163*t7985*t9055 - 1.*t1767*t9630)*var2[1] + t11287*var2[2];
  p_output1[14]=-1.*t7985*t9055*var2[0] + t1767*t7168*t9055*var2[1] - 1.*t7163*t7168*t9055*var2[2] + (t11326*t8073 + t11342*t9624 + t8741*(t8073*t9519 + t8073*t9541 + t10878*t9641 + t8476*t9641) + t10878*(-1.*t9519*t9624 - 1.*t9541*t9624 - 1.*t8741*t9641 - 1.*t9641*t9656))*var2[3];
  p_output1[15]=t11351 + t11357 + t11377 + (t11501 + t11503 + t8741*(t11403 + t11406 + t11485 + t11489 + t10878*t7168*t9721 - 1.*t7985*t8073*t9721) + t10878*(t11390 + t11393 + t11428 + t11446 - 1.*t7168*t8741*t9721 + t7985*t9624*t9721))*var2[3] + (t11400 + t11421 + t9667*(t11403 + t11405 + t11406 + t8017*t9721) + t7146*(t11390 + t11391 + t11393 - 1.*t8617*t9721))*var2[4];
  p_output1[16]=t11351 + t11357 + t11377 + (t11501 + t11503 + (t11403 + t11485 + t11489 + t11697 + t10290*t10878*t7168 - 1.*t10290*t7985*t8073)*t8741 + t10878*(t11390 + t11428 + t11446 + t11682 - 1.*t10290*t7168*t8741 + t10290*t7985*t9624))*var2[3] + (t11400 + t11421 + t7146*(t11390 + t11391 + t11682 - 1.*t10290*t8617) + (t11403 + t11405 + t11697 + t10290*t8017)*t9667)*var2[4] + (t6442*(t10171*t2723*t6442 + t10272*t6442*t6953 - 1.*t2723*t6442*t9436 + t6442*t6953*t9482) + t7753*(-1.*t10171*t2723*t8612 - 1.*t10272*t6953*t8612 + t2723*t8612*t9436 - 1.*t6953*t8612*t9482))*var2[5];
  p_output1[17]=(t10563*t11326 + t10878*t11342 + t10878*(t12053 + t12076 + t12233 + t12234 - 1.*t10854*t8741 - 1.*t10868*t9624) + t8741*(t10854*t10878 + t11975 + t11981 + t10868*t8073 + t10563*t9541 + t10585*t9641))*var2[3] + (t10578*t11399 + t11420*t7146 + t7146*(t11758 + t11761 + t12053 + t12076 + t12088 - 1.*t10718*t8617) + (t11745 + t11747 + t11975 + t11981 + t10718*t8017 + t10542*t9514)*t9667)*var2[4] + (t10526*t11791 + t11886*t7753 + t7753*(t11758 + t11761 - 1.*t11796*t8612*t9196 - 1.*t11800*t8612*t9196 - 1.*t6442*t6953*t9436 - 1.*t2723*t6442*t9482) + t6442*(t11745 + t11747 + t11796*t6442*t9196 + t11800*t6442*t9196 + t6953*t7753*t9436 + t2723*t7753*t9482))*var2[5] + (t10526*t11743 + t11755*t7753 + t7753*(t11757 + t11758 + t11761 - 1.*t6442*t9362) + t6442*(t10033 + t11745 + t11747 + t7753*t9362))*var2[12];
  p_output1[18]=(t11241*t11342 + t11326*t8741 + t10878*(t12410 + t12417 - 1.*t11222*t8741 - 1.*t11241*t9541 - 1.*t11232*t9624 - 1.*t11252*t9641) + t8741*(t10878*t11222 + t12405 + t11232*t8073 + t9668 + t9670 + t9671))*var2[3] + (t11164*t11420 + t7146*(t11757 + t12283 + t12410 + t12417 - 1.*t11153*t8617 - 1.*t11179*t9514) + t11399*t9667 + t9667*(t10033 + t10034 + t12267 + t12405 + t11153*t8017 + t9668))*var2[4] + (t11791*t6442 + t11886*t8612 + t7753*(t11757 + t12283 - 1.*t11142*t11796*t8612 - 1.*t11142*t11800*t8612 - 1.*t10526*t6953*t9436 - 1.*t10526*t2723*t9482) + t6442*(t10033 + t12267 + t11142*t11796*t6442 + t11142*t11800*t6442 + t6953*t8612*t9436 + t2723*t8612*t9482))*var2[5] + (t11743*t6442 + t11755*t8612 + t7753*(t11757 + t12283 - 1.*t11142*t8612 - 1.*t10526*t9362) + t6442*(t10033 + t12267 + t11142*t6442 + t8612*t9362))*var2[12];
  p_output1[19]=t7168*t9055;
  p_output1[20]=t11287;
  p_output1[21]=-1.*t7163*t7985*t9055 + t1767*t9630;
  p_output1[22]=t10878*t11326 + t11342*t8741;
  p_output1[23]=t11399*t7146 + t11420*t9667;
  p_output1[24]=t11886*t6442 + t11791*t7753;
  p_output1[25]=-0.15121 + t11755*t6442 + t11743*t7753;
  p_output1[26]=(-1.*t7163*t9624 - 1.*t1767*t9667)*var2[1] + t11122*var2[2];
  p_output1[27]=t9624*var2[0] - 1.*t1767*t9656*var2[1] + t7163*t9656*var2[2] + (t12711*t8073 - 1.*t12739*t7985*t9055 + t10878*(-1.*t7985*t9055*t9519 - 1.*t7985*t9055*t9541) + t7168*t9055*(-1.*t8073*t9519 - 1.*t8073*t9541 - 1.*t10878*t9641 - 1.*t8476*t9641))*var2[3];
  p_output1[28]=t12764 + t12783 + t12796 + (t12901 + t12969 + t7168*t9055*(t12858 + t12879 + t12938 + t12941 - 1.*t10878*t7168*t9721 + t7985*t8073*t9721) + t10878*(t12806 + t12807 + t12919 + t12923 + t10054*t9055*t9721 + t10057*t9055*t9721))*var2[3] + (t12799 + t12883 + t9630*(t12858 + t12872 + t12879 - 1.*t8017*t9721) + t7146*(t12806 + t12807 + t12813 + t9055*t9721))*var2[4];
  p_output1[29]=t12764 + t12783 + t12796 + (t12901 + t12969 + t7168*(t12858 + t12938 + t12941 + t12993 - 1.*t10290*t10878*t7168 + t10290*t7985*t8073)*t9055 + t10878*(t12806 + t12919 + t12923 + t12986 + t10054*t10290*t9055 + t10057*t10290*t9055))*var2[3] + (t12799 + t12883 + t7146*(t12806 + t12813 + t12986 + t10290*t9055) + (t12858 + t12872 + t12993 - 1.*t10290*t8017)*t9630)*var2[4] + t7753*(-1.*t10272*t2723 + t10171*t6953 - 1.*t6953*t9436 - 1.*t2723*t9482)*var2[5];
  p_output1[30]=t13014 + t10878*var2[0] + t8392*var2[1] + t11269*var2[2] + (t10563*t12711 + t10878*(t13022 + t10854*t7168*t9055 - 1.*t10868*t7985*t9055) + t7168*t9055*(-1.*t10854*t10878 + t13033 + t13039 - 1.*t10868*t8073 - 1.*t10563*t9541 - 1.*t10585*t9641))*var2[3] + (t10578*t12798 + t7146*(t13022 + t10718*t9055) + (t13033 + t13039 - 1.*t10823*t7753 - 1.*t10718*t8017 - 1.*t10526*t9196 - 1.*t10542*t9514)*t9630)*var2[4] + t10526*t13017*var2[5];
  p_output1[31]=t13014 + t11241*var2[0] + (-1.*t11252*t1767 + t11164*t7163)*var2[1] + (t11164*t1767 + t11252*t7163)*var2[2] + (t12711*t8741 + t7168*(-1.*t10878*t11222 + t11307 + t11308 + t11313 + t13175 - 1.*t11232*t8073)*t9055 + t10878*(t13167 + t11222*t7168*t9055 - 1.*t11232*t7985*t9055))*var2[3] + (t7146*(t13167 + t11153*t9055) + (t11307 + t11397 + t11398 + t13175 - 1.*t11170*t7753 - 1.*t11153*t8017)*t9630 + t12798*t9667)*var2[4] + t13017*t6442*var2[5] + (-0.28121*t5118 + 0.305*t2766*t5118 + t5118*t9179)*var2[13];
  p_output1[32]=t8741;
  p_output1[33]=t11122;
  p_output1[34]=t11100;
  p_output1[35]=t10878*t12711 + t12739*t7168*t9055;
  p_output1[36]=t12798*t7146 + t12882*t9630;
  p_output1[37]=t13017*t7753;
  p_output1[38]=-0.15121*t7753 - 0.15121*t8612;
  p_output1[39]=t11054 + t11063 + 0.305*Power(t5118,2);
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

#include "J_dh_FrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void J_dh_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
