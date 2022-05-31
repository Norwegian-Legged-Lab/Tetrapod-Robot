/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 18:51:02 GMT+02:00
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
  double t35;
  double t36;
  double t43;
  double t48;
  double t50;
  double t60;
  double t52;
  double t53;
  double t55;
  double t63;
  double t58;
  double t65;
  double t68;
  double t78;
  double t80;
  double t83;
  double t113;
  double t115;
  double t118;
  double t123;
  double t125;
  double t156;
  double t159;
  double t160;
  double t163;
  double t164;
  double t45;
  double t51;
  double t70;
  double t73;
  double t75;
  double t85;
  double t88;
  double t90;
  double t93;
  double t98;
  double t100;
  double t103;
  double t199;
  double t200;
  double t207;
  double t120;
  double t128;
  double t130;
  double t133;
  double t134;
  double t137;
  double t138;
  double t141;
  double t142;
  double t144;
  double t147;
  double t148;
  double t2936;
  double t3136;
  double t167;
  double t168;
  double t171;
  double t172;
  double t175;
  double t176;
  double t179;
  double t180;
  double t183;
  double t187;
  double t188;
  double t191;
  double t3500;
  double t3576;
  double t203;
  double t95;
  double t208;
  double t643;
  double t1831;
  double t1849;
  double t1851;
  double t2332;
  double t3993;
  double t4152;
  double t4292;
  double t4382;
  double t4520;
  double t2958;
  double t143;
  double t3150;
  double t3227;
  double t3248;
  double t3289;
  double t3391;
  double t3445;
  double t4730;
  double t4822;
  double t4887;
  double t4895;
  double t4934;
  double t3533;
  double t184;
  double t3643;
  double t3683;
  double t3784;
  double t3866;
  double t3869;
  double t3904;
  double t5134;
  double t5273;
  double t5277;
  double t5278;
  double t5284;
  double t5355;
  double t5365;
  double t5366;
  double t5368;
  double t5369;
  double t5391;
  double t5399;
  double t5410;
  double t5417;
  double t5422;
  double t5444;
  double t5445;
  double t5449;
  double t5457;
  double t5460;
  double t5463;
  double t5467;
  double t5481;
  double t5487;
  double t5459;
  double t5482;
  double t5484;
  double t5485;
  double t5496;
  double t5498;
  double t5507;
  double t5508;
  double t5516;
  double t5539;
  double t5540;
  double t5542;
  double t5543;
  double t5571;
  double t5572;
  double t5574;
  double t5575;
  double t5579;
  double t5584;
  double t5585;
  double t5589;
  double t5595;
  double t5596;
  double t5597;
  double t5598;
  double t5599;
  double t5603;
  double t5604;
  double t5605;
  double t5617;
  double t5630;
  double t5631;
  double t5633;
  double t5638;
  double t5664;
  double t5665;
  double t5670;
  double t5677;
  double t5583;
  double t5679;
  double t4053;
  double t4128;
  double t5680;
  double t5681;
  double t5682;
  double t5766;
  double t5767;
  double t5768;
  double t5691;
  double t5602;
  double t5693;
  double t4732;
  double t4780;
  double t5694;
  double t5695;
  double t5696;
  double t5784;
  double t5786;
  double t5787;
  double t5709;
  double t5639;
  double t5711;
  double t5150;
  double t5193;
  double t5725;
  double t5726;
  double t5727;
  double t5801;
  double t5802;
  double t5806;
  double t5830;
  double t5843;
  double t5845;
  double t5851;
  double t5853;
  double t5860;
  double t5861;
  double t5863;
  double t5859;
  double t5899;
  double t5900;
  double t5527;
  double t5531;
  double t5909;
  double t5910;
  double t5911;
  double t5917;
  double t5918;
  double t5921;
  double t5931;
  double t5935;
  double t5937;
  double t5939;
  double t5940;
  double t5941;
  double t5938;
  double t5944;
  double t5946;
  double t5948;
  double t5952;
  double t5954;
  double t5955;
  double t5963;
  double t5983;
  double t5993;
  double t5994;
  double t5981;
  double t5982;
  double t5998;
  double t5999;
  double t6001;
  double t6043;
  double t6044;
  double t6046;
  double t6025;
  double t6039;
  double t6063;
  double t6064;
  double t6065;
  double t5968;
  double t5964;
  double t5995;
  double t6013;
  double t6057;
  double t6079;
  double t6150;
  double t6151;
  double t6152;
  double t6155;
  double t6156;
  double t6161;
  double t6162;
  double t6163;
  double t6184;
  double t6171;
  double t6209;
  double t6210;
  double t6211;
  double t6206;
  double t6207;
  double t6208;
  double t6218;
  double t6220;
  double t6221;
  double t6222;
  double t6223;
  double t6225;
  double t6226;
  double t6231;
  double t6227;
  double t6333;
  double t6336;
  double t6343;
  double t6328;
  double t6345;
  double t6364;
  double t6368;
  double t6370;
  double t6430;
  double t6432;
  double t6436;
  double t6478;
  double t6479;
  double t6482;
  double t6501;
  double t6502;
  double t6503;
  double t6508;
  double t6509;
  double t6510;
  double t6511;
  double t6512;
  double t6514;
  double t6519;
  double t6525;
  double t6520;
  double t6598;
  double t6606;
  double t6608;
  double t6577;
  double t6654;
  double t6655;
  double t6656;
  double t6657;
  double t6662;
  double t6663;
  double t6664;
  double t6690;
  double t6696;
  double t6697;
  double t7465;
  double t9354;
  double t9649;
  double t7553;
  double t7994;
  double t8205;
  double t8953;
  double t9149;
  double t16025;
  double t18205;
  double t11054;
  double t25646;
  double t26980;
  double t26981;
  double t26982;
  double t26917;
  double t27473;
  double t27555;
  double t27650;
  double t27903;
  double t28269;
  double t28326;
  double t28341;
  double t28650;
  double t28761;
  double t28816;
  double t29353;
  double t29355;
  double t29194;
  double t29202;
  double t29213;
  double t29214;
  double t29256;
  double t29260;
  double t29611;
  double t29635;
  double t29365;
  double t29910;
  double t30160;
  double t30161;
  double t30195;
  double t30119;
  double t30210;
  double t30310;
  double t30351;
  double t30411;
  double t30658;
  double t30756;
  double t30770;
  double t30940;
  double t30944;
  double t30956;
  t35 = Cos(var1[9]);
  t36 = -1.*t35;
  t43 = 1. + t36;
  t48 = Sin(var1[9]);
  t50 = 0.15121*t48;
  t60 = Cos(var1[3]);
  t52 = Cos(var1[5]);
  t53 = Sin(var1[3]);
  t55 = Sin(var1[4]);
  t63 = Sin(var1[5]);
  t58 = t52*t53*t55;
  t65 = t60*t63;
  t68 = t58 + t65;
  t78 = t60*t52;
  t80 = -1.*t53*t55*t63;
  t83 = t78 + t80;
  t113 = Cos(var1[12]);
  t115 = -1.*t113;
  t118 = 1. + t115;
  t123 = Sin(var1[12]);
  t125 = -0.15121*t123;
  t156 = Cos(var1[15]);
  t159 = -1.*t156;
  t160 = 1. + t159;
  t163 = -0.15121*t160;
  t164 = Sin(var1[15]);
  t45 = -0.15121*t43;
  t51 = t45 + t50;
  t70 = t51*t68;
  t73 = 0.15121*t43;
  t75 = t73 + t50;
  t85 = t75*t83;
  t88 = -1.*t48*t68;
  t90 = t35*t83;
  t93 = t88 + t90;
  t98 = t35*t68;
  t100 = t48*t83;
  t103 = t98 + t100;
  t199 = Cos(var1[4]);
  t200 = Sin(var1[10]);
  t207 = Cos(var1[10]);
  t120 = 0.15121*t118;
  t128 = t120 + t125;
  t130 = t128*t68;
  t133 = -0.15121*t118;
  t134 = t133 + t125;
  t137 = t134*t83;
  t138 = -1.*t123*t68;
  t141 = t113*t83;
  t142 = t138 + t141;
  t144 = t113*t68;
  t147 = t123*t83;
  t148 = t144 + t147;
  t2936 = Sin(var1[13]);
  t3136 = Cos(var1[13]);
  t167 = -0.15121*t164;
  t168 = t163 + t167;
  t171 = t168*t68;
  t172 = 0.15121*t164;
  t175 = t163 + t172;
  t176 = t175*t83;
  t179 = -1.*t164*t68;
  t180 = t156*t83;
  t183 = t179 + t180;
  t187 = t156*t68;
  t188 = t164*t83;
  t191 = t187 + t188;
  t3500 = Sin(var1[16]);
  t3576 = Cos(var1[16]);
  t203 = -0.28121*t199*t200*t53;
  t95 = 0.15121*t93;
  t208 = -1.*t207;
  t643 = 1. + t208;
  t1831 = -0.28121*t643*t103;
  t1849 = -1.*t199*t200*t53;
  t1851 = t207*t103;
  t2332 = t1849 + t1851;
  t3993 = Cos(var1[11]);
  t4152 = Sin(var1[11]);
  t4292 = -1.*t207*t199*t53;
  t4382 = -1.*t200*t103;
  t4520 = t4292 + t4382;
  t2958 = -0.28121*t199*t2936*t53;
  t143 = -0.15121*t142;
  t3150 = -1.*t3136;
  t3227 = 1. + t3150;
  t3248 = 0.28121*t3227*t148;
  t3289 = t199*t2936*t53;
  t3391 = t3136*t148;
  t3445 = t3289 + t3391;
  t4730 = Cos(var1[14]);
  t4822 = Sin(var1[14]);
  t4887 = -1.*t3136*t199*t53;
  t4895 = t2936*t148;
  t4934 = t4887 + t4895;
  t3533 = -0.28121*t199*t3500*t53;
  t184 = -0.15121*t183;
  t3643 = -1.*t3576;
  t3683 = 1. + t3643;
  t3784 = -0.28121*t3683*t191;
  t3866 = -1.*t199*t3500*t53;
  t3869 = t3576*t191;
  t3904 = t3866 + t3869;
  t5134 = Cos(var1[17]);
  t5273 = Sin(var1[17]);
  t5277 = -1.*t3576*t199*t53;
  t5278 = -1.*t3500*t191;
  t5284 = t5277 + t5278;
  t5355 = Cos(var1[6]);
  t5365 = -1.*t5355;
  t5366 = 1. + t5365;
  t5368 = 0.15121*t5366;
  t5369 = Sin(var1[6]);
  t5391 = -0.15121*t5369;
  t5399 = t5368 + t5391;
  t5410 = t83*t5399;
  t5417 = 0.15121*t5369;
  t5422 = t5368 + t5417;
  t5444 = t68*t5422;
  t5445 = t5355*t83;
  t5449 = -1.*t68*t5369;
  t5457 = t5445 + t5449;
  t5460 = t5355*t68;
  t5463 = t83*t5369;
  t5467 = t5460 + t5463;
  t5481 = Cos(var1[7]);
  t5487 = Sin(var1[7]);
  t5459 = 0.15121*t5457;
  t5482 = -1.*t5481;
  t5484 = 1. + t5482;
  t5485 = 0.28121*t5484*t5467;
  t5496 = -0.28121*t199*t53*t5487;
  t5498 = t5481*t5467;
  t5507 = t199*t53*t5487;
  t5508 = t5498 + t5507;
  t5516 = Cos(var1[8]);
  t5539 = -1.*t199*t5481*t53;
  t5540 = t5467*t5487;
  t5542 = t5539 + t5540;
  t5543 = Sin(var1[8]);
  t5571 = -1.*t60*t199*t52*t51;
  t5572 = t60*t199*t75*t63;
  t5574 = t60*t199*t52*t48;
  t5575 = t35*t60*t199*t63;
  t5579 = t5574 + t5575;
  t5584 = -1.*t35*t60*t199*t52;
  t5585 = t60*t199*t48*t63;
  t5589 = t5584 + t5585;
  t5595 = -1.*t60*t199*t52*t128;
  t5596 = t60*t199*t134*t63;
  t5597 = t60*t199*t52*t123;
  t5598 = t113*t60*t199*t63;
  t5599 = t5597 + t5598;
  t5603 = -1.*t113*t60*t199*t52;
  t5604 = t60*t199*t123*t63;
  t5605 = t5603 + t5604;
  t5617 = -1.*t60*t199*t52*t168;
  t5630 = t60*t199*t175*t63;
  t5631 = t60*t199*t52*t164;
  t5633 = t156*t60*t199*t63;
  t5638 = t5631 + t5633;
  t5664 = -1.*t156*t60*t199*t52;
  t5665 = t60*t199*t164*t63;
  t5670 = t5664 + t5665;
  t5677 = -0.28121*t60*t200*t55;
  t5583 = 0.15121*t5579;
  t5679 = -0.28121*t643*t5589;
  t4053 = -1.*t3993;
  t4128 = 1. + t4053;
  t5680 = -1.*t60*t200*t55;
  t5681 = t207*t5589;
  t5682 = t5680 + t5681;
  t5766 = -1.*t207*t60*t55;
  t5767 = -1.*t200*t5589;
  t5768 = t5766 + t5767;
  t5691 = -0.28121*t60*t2936*t55;
  t5602 = -0.15121*t5599;
  t5693 = 0.28121*t3227*t5605;
  t4732 = -1.*t4730;
  t4780 = 1. + t4732;
  t5694 = t60*t2936*t55;
  t5695 = t3136*t5605;
  t5696 = t5694 + t5695;
  t5784 = -1.*t3136*t60*t55;
  t5786 = t2936*t5605;
  t5787 = t5784 + t5786;
  t5709 = -0.28121*t60*t3500*t55;
  t5639 = -0.15121*t5638;
  t5711 = -0.28121*t3683*t5670;
  t5150 = -1.*t5134;
  t5193 = 1. + t5150;
  t5725 = -1.*t60*t3500*t55;
  t5726 = t3576*t5670;
  t5727 = t5725 + t5726;
  t5801 = -1.*t3576*t60*t55;
  t5802 = -1.*t3500*t5670;
  t5806 = t5801 + t5802;
  t5830 = t60*t199*t63*t5399;
  t5843 = -1.*t60*t199*t52*t5422;
  t5845 = t60*t199*t5355*t63;
  t5851 = t60*t199*t52*t5369;
  t5853 = t5845 + t5851;
  t5860 = -1.*t60*t199*t52*t5355;
  t5861 = t60*t199*t63*t5369;
  t5863 = t5860 + t5861;
  t5859 = 0.15121*t5853;
  t5899 = 0.28121*t5484*t5863;
  t5900 = -0.28121*t60*t55*t5487;
  t5527 = -1.*t5516;
  t5531 = 1. + t5527;
  t5909 = t5481*t5863;
  t5910 = t60*t55*t5487;
  t5911 = t5909 + t5910;
  t5917 = -1.*t60*t5481*t55;
  t5918 = t5863*t5487;
  t5921 = t5917 + t5918;
  t5931 = t60*t52*t55;
  t5935 = -1.*t53*t63;
  t5937 = t5931 + t5935;
  t5939 = t52*t53;
  t5940 = t60*t55*t63;
  t5941 = t5939 + t5940;
  t5938 = t75*t5937;
  t5944 = t51*t5941;
  t5946 = t48*t5937;
  t5948 = t35*t5941;
  t5952 = t5946 + t5948;
  t5954 = t35*t5937;
  t5955 = -1.*t48*t5941;
  t5963 = t5954 + t5955;
  t5983 = t123*t5937;
  t5993 = t113*t5941;
  t5994 = t5983 + t5993;
  t5981 = t134*t5937;
  t5982 = t128*t5941;
  t5998 = t113*t5937;
  t5999 = -1.*t123*t5941;
  t6001 = t5998 + t5999;
  t6043 = t164*t5937;
  t6044 = t156*t5941;
  t6046 = t6043 + t6044;
  t6025 = t175*t5937;
  t6039 = t168*t5941;
  t6063 = t156*t5937;
  t6064 = -1.*t164*t5941;
  t6065 = t6063 + t6064;
  t5968 = -0.28121*t643*t5952;
  t5964 = 0.15121*t5963;
  t5995 = 0.28121*t3227*t5994;
  t6013 = -0.15121*t6001;
  t6057 = -0.28121*t3683*t6046;
  t6079 = -0.15121*t6065;
  t6150 = t5937*t5399;
  t6151 = t5941*t5422;
  t6152 = t5355*t5941;
  t6155 = t5937*t5369;
  t6156 = t6152 + t6155;
  t6161 = t5355*t5937;
  t6162 = -1.*t5941*t5369;
  t6163 = t6161 + t6162;
  t6184 = 0.28121*t5484*t6156;
  t6171 = 0.15121*t6163;
  t6209 = -1.*t60*t52*t55;
  t6210 = t53*t63;
  t6211 = t6209 + t6210;
  t6206 = -0.15121*t5355;
  t6207 = t6206 + t5417;
  t6208 = t5941*t6207;
  t6218 = 0.15121*t5355;
  t6220 = t6218 + t5417;
  t6221 = t6211*t6220;
  t6222 = -1.*t6211*t5369;
  t6223 = t6152 + t6222;
  t6225 = -1.*t5355*t6211;
  t6226 = t6225 + t6162;
  t6231 = 0.28121*t5484*t6223;
  t6227 = 0.15121*t6226;
  t6333 = t5355*t6211;
  t6336 = t5941*t5369;
  t6343 = t6333 + t6336;
  t6328 = 0.28121*t60*t199*t5481;
  t6345 = 0.28121*t6343*t5487;
  t6364 = -1.*t60*t199*t5481;
  t6368 = -1.*t6343*t5487;
  t6370 = t6364 + t6368;
  t6430 = t5481*t6343;
  t6432 = -1.*t60*t199*t5487;
  t6436 = t6430 + t6432;
  t6478 = t60*t199*t5481;
  t6479 = t6343*t5487;
  t6482 = t6478 + t6479;
  t6501 = 0.15121*t35;
  t6502 = -0.15121*t48;
  t6503 = t6501 + t6502;
  t6508 = t6503*t6211;
  t6509 = t6501 + t50;
  t6510 = t6509*t5941;
  t6511 = -1.*t48*t6211;
  t6512 = t6511 + t5948;
  t6514 = -1.*t35*t6211;
  t6519 = t6514 + t5955;
  t6525 = -0.28121*t643*t6512;
  t6520 = 0.15121*t6519;
  t6598 = t35*t6211;
  t6606 = t48*t5941;
  t6608 = t6598 + t6606;
  t6577 = 0.28121*t207*t60*t199;
  t6654 = -0.28121*t200*t6608;
  t6655 = t207*t60*t199;
  t6656 = -1.*t200*t6608;
  t6657 = t6655 + t6656;
  t6662 = -1.*t60*t199*t200;
  t6663 = -1.*t207*t6608;
  t6664 = t6662 + t6663;
  t6690 = t60*t199*t200;
  t6696 = t207*t6608;
  t6697 = t6690 + t6696;
  t7465 = -0.15121*t113;
  t9354 = -1.*t123*t6211;
  t9649 = t9354 + t5993;
  t7553 = 0.15121*t123;
  t7994 = t7465 + t7553;
  t8205 = t7994*t6211;
  t8953 = t7465 + t125;
  t9149 = t8953*t5941;
  t16025 = -1.*t113*t6211;
  t18205 = t16025 + t5999;
  t11054 = 0.28121*t3227*t9649;
  t25646 = -0.15121*t18205;
  t26980 = t113*t6211;
  t26981 = t123*t5941;
  t26982 = t26980 + t26981;
  t26917 = 0.28121*t3136*t60*t199;
  t27473 = 0.28121*t2936*t26982;
  t27555 = -1.*t3136*t60*t199;
  t27650 = -1.*t2936*t26982;
  t27903 = t27555 + t27650;
  t28269 = -1.*t60*t199*t2936;
  t28326 = t3136*t26982;
  t28341 = t28269 + t28326;
  t28650 = t3136*t60*t199;
  t28761 = t2936*t26982;
  t28816 = t28650 + t28761;
  t29353 = -1.*t164*t6211;
  t29355 = t29353 + t6044;
  t29194 = -0.15121*t156;
  t29202 = t29194 + t167;
  t29213 = t29202*t6211;
  t29214 = 0.15121*t156;
  t29256 = t29214 + t167;
  t29260 = t29256*t5941;
  t29611 = -1.*t156*t6211;
  t29635 = t29611 + t6064;
  t29365 = -0.28121*t3683*t29355;
  t29910 = -0.15121*t29635;
  t30160 = t156*t6211;
  t30161 = t164*t5941;
  t30195 = t30160 + t30161;
  t30119 = 0.28121*t3576*t60*t199;
  t30210 = -0.28121*t3500*t30195;
  t30310 = t3576*t60*t199;
  t30351 = -1.*t3500*t30195;
  t30411 = t30310 + t30351;
  t30658 = -1.*t60*t199*t3500;
  t30756 = -1.*t3576*t30195;
  t30770 = t30658 + t30756;
  t30940 = t60*t199*t3500;
  t30944 = t3576*t30195;
  t30956 = t30940 + t30944;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=-210.915;
  p_output1[3]=-11.5758*(t130 + t137 + t143 + 0.15121*t148) - 11.5758*(t171 + t176 + t184 - 0.15121*t191) - 13.6359*(t130 + t137 - 0.18121*t142 + t2958 + t3248 + 0.28121*t3445) - 13.6359*(t171 + t176 - 0.18121*t183 + t3533 + t3784 - 0.28121*t3904) - 2.7468000000000004*(t130 + t137 + t143 + t2958 + t3248 + 0.50321*t3445*t4780 - 0.50321*t4822*t4934 + 0.50321*(t3445*t4730 + t4822*t4934)) - 2.7468000000000004*(t171 + t176 + t184 + t3533 + t3784 - 0.50321*t3904*t5193 - 0.50321*t5273*t5284 - 0.50321*(t3904*t5134 - 1.*t5273*t5284)) - 11.5758*(t5410 + t5444 + t5459 + 0.15121*t5467) - 13.6359*(t5410 + t5444 + 0.18121*t5457 + t5485 + t5496 + 0.28121*t5508) - 2.7468000000000004*(t5410 + t5444 + t5459 + t5485 + t5496 + 0.50321*t5508*t5531 - 0.50321*t5542*t5543 + 0.50321*(t5508*t5516 + t5542*t5543)) - 13.6359*(t1831 + t203 - 0.28121*t2332 + t70 + t85 + 0.18121*t93) - 11.5758*(-0.15121*t103 + t70 + t85 + t95) - 2.7468000000000004*(t1831 + t203 - 0.50321*t2332*t4128 - 0.50321*t4152*t4520 - 0.50321*(t2332*t3993 - 1.*t4152*t4520) + t70 + t85 + t95);
  p_output1[4]=-11.5758*(t5571 + t5572 + t5583 - 0.15121*t5589) - 11.5758*(t5595 + t5596 + t5602 + 0.15121*t5605) - 11.5758*(t5617 + t5630 + t5639 - 0.15121*t5670) - 13.6359*(t5571 + t5572 + 0.18121*t5579 + t5677 + t5679 - 0.28121*t5682) - 13.6359*(t5595 + t5596 - 0.18121*t5599 + t5691 + t5693 + 0.28121*t5696) - 13.6359*(t5617 + t5630 - 0.18121*t5638 + t5709 + t5711 - 0.28121*t5727) - 2.7468000000000004*(t5571 + t5572 + t5583 + t5677 + t5679 - 0.50321*t4128*t5682 - 0.50321*t4152*t5768 - 0.50321*(t3993*t5682 - 1.*t4152*t5768)) - 2.7468000000000004*(t5595 + t5596 + t5602 + t5691 + t5693 + 0.50321*t4780*t5696 - 0.50321*t4822*t5787 + 0.50321*(t4730*t5696 + t4822*t5787)) - 2.7468000000000004*(t5617 + t5630 + t5639 + t5709 + t5711 - 0.50321*t5193*t5727 - 0.50321*t5273*t5806 - 0.50321*(t5134*t5727 - 1.*t5273*t5806)) - 11.5758*(t5830 + t5843 + t5859 + 0.15121*t5863) - 13.6359*(t5830 + t5843 + 0.18121*t5853 + t5899 + t5900 + 0.28121*t5911) - 2.7468000000000004*(t5830 + t5843 + t5859 + t5899 + t5900 + 0.50321*t5531*t5911 - 0.50321*t5543*t5921 + 0.50321*(t5516*t5911 + t5543*t5921));
  p_output1[5]=-11.5758*(t5938 + t5944 - 0.15121*t5952 + t5964) - 13.6359*(t5938 + t5944 - 0.28121*t207*t5952 + 0.18121*t5963 + t5968) - 2.7468000000000004*(t5938 + t5944 - 0.50321*t207*t4128*t5952 + 0.50321*t200*t4152*t5952 - 0.50321*(t207*t3993*t5952 + t200*t4152*t5952) + t5964 + t5968) - 13.6359*(t5981 + t5982 + 0.28121*t3136*t5994 + t5995 - 0.18121*t6001) - 11.5758*(t5981 + t5982 + 0.15121*t5994 + t6013) - 2.7468000000000004*(t5981 + t5982 + 0.50321*t3136*t4780*t5994 - 0.50321*t2936*t4822*t5994 + 0.50321*(t3136*t4730*t5994 + t2936*t4822*t5994) + t5995 + t6013) - 13.6359*(t6025 + t6039 - 0.28121*t3576*t6046 + t6057 - 0.18121*t6065) - 11.5758*(t6025 + t6039 - 0.15121*t6046 + t6079) - 2.7468000000000004*(t6025 + t6039 - 0.50321*t3576*t5193*t6046 + 0.50321*t3500*t5273*t6046 - 0.50321*(t3576*t5134*t6046 + t3500*t5273*t6046) + t6057 + t6079) - 11.5758*(t6150 + t6151 + 0.15121*t6156 + t6171) - 13.6359*(t6150 + t6151 + 0.28121*t5481*t6156 + 0.18121*t6163 + t6184) - 2.7468000000000004*(t6150 + t6151 + 0.50321*t5481*t5531*t6156 - 0.50321*t5487*t5543*t6156 + 0.50321*(t5481*t5516*t6156 + t5487*t5543*t6156) + t6171 + t6184);
  p_output1[6]=-11.5758*(t6208 + t6221 + 0.15121*t6223 + t6227) - 13.6359*(t6208 + t6221 + 0.28121*t5481*t6223 + 0.18121*t6226 + t6231) - 2.7468000000000004*(t6208 + t6221 + 0.50321*t5481*t5531*t6223 - 0.50321*t5487*t5543*t6223 + 0.50321*(t5481*t5516*t6223 + t5487*t5543*t6223) + t6227 + t6231);
  p_output1[7]=-13.6359*(t6328 + t6345 + 0.28121*t6370) - 2.7468000000000004*(t6328 + t6345 + 0.50321*t5531*t6370 - 0.50321*t5543*t6436 + 0.50321*(t5516*t6370 + t5543*t6436));
  p_output1[8]=-2.7468000000000004*(0.50321*t5543*t6436 - 0.50321*t5516*t6482 + 0.50321*(-1.*t5543*t6436 + t5516*t6482));
  p_output1[9]=-11.5758*(t6508 + t6510 - 0.15121*t6512 + t6520) - 13.6359*(t6508 + t6510 - 0.28121*t207*t6512 + 0.18121*t6519 + t6525) - 2.7468000000000004*(t6508 + t6510 - 0.50321*t207*t4128*t6512 + 0.50321*t200*t4152*t6512 - 0.50321*(t207*t3993*t6512 + t200*t4152*t6512) + t6520 + t6525);
  p_output1[10]=-13.6359*(t6577 + t6654 - 0.28121*t6657) - 2.7468000000000004*(t6577 + t6654 - 0.50321*t4128*t6657 - 0.50321*t4152*t6664 - 0.50321*(t3993*t6657 - 1.*t4152*t6664));
  p_output1[11]=-2.7468000000000004*(-0.50321*t3993*t6657 - 0.50321*t4152*t6697 - 0.50321*(-1.*t3993*t6657 - 1.*t4152*t6697));
  p_output1[12]=-11.5758*(t25646 + t8205 + t9149 + 0.15121*t9649) - 13.6359*(t11054 - 0.18121*t18205 + t8205 + t9149 + 0.28121*t3136*t9649) - 2.7468000000000004*(t11054 + t25646 + t8205 + t9149 + 0.50321*t3136*t4780*t9649 - 0.50321*t2936*t4822*t9649 + 0.50321*(t3136*t4730*t9649 + t2936*t4822*t9649));
  p_output1[13]=-13.6359*(t26917 + t27473 + 0.28121*t27903) - 2.7468000000000004*(t26917 + t27473 + 0.50321*t27903*t4780 - 0.50321*t28341*t4822 + 0.50321*(t27903*t4730 + t28341*t4822));
  p_output1[14]=-2.7468000000000004*(-0.50321*t28816*t4730 + 0.50321*t28341*t4822 + 0.50321*(t28816*t4730 - 1.*t28341*t4822));
  p_output1[15]=-11.5758*(t29213 + t29260 - 0.15121*t29355 + t29910) - 13.6359*(t29213 + t29260 + t29365 - 0.18121*t29635 - 0.28121*t29355*t3576) - 2.7468000000000004*(t29213 + t29260 + t29365 + t29910 - 0.50321*t29355*t3576*t5193 + 0.50321*t29355*t3500*t5273 - 0.50321*(t29355*t3576*t5134 + t29355*t3500*t5273));
  p_output1[16]=-13.6359*(t30119 + t30210 - 0.28121*t30411) - 2.7468000000000004*(t30119 + t30210 - 0.50321*t30411*t5193 - 0.50321*t30770*t5273 - 0.50321*(t30411*t5134 - 1.*t30770*t5273));
  p_output1[17]=-2.7468000000000004*(-0.50321*t30411*t5134 - 0.50321*t30956*t5273 - 0.50321*(-1.*t30411*t5134 - 1.*t30956*t5273));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ge_vec_ASTRo.hh"

namespace SymFunction
{

void Ge_vec_ASTRo_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
