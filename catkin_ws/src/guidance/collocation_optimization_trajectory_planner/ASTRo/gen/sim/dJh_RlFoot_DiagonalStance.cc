/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:20:08 GMT+02:00
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
  double t3212;
  double t3260;
  double t3277;
  double t3282;
  double t3286;
  double t3293;
  double t3298;
  double t3329;
  double t776;
  double t1418;
  double t3330;
  double t3341;
  double t3317;
  double t3331;
  double t3339;
  double t145;
  double t3342;
  double t3354;
  double t3355;
  double t3356;
  double t3357;
  double t3444;
  double t3452;
  double t3455;
  double t3457;
  double t3463;
  double t3464;
  double t3481;
  double t3482;
  double t3483;
  double t3488;
  double t3489;
  double t3492;
  double t3513;
  double t3516;
  double t3517;
  double t3522;
  double t3523;
  double t3525;
  double t3526;
  double t3527;
  double t3529;
  double t3530;
  double t3531;
  double t3532;
  double t3547;
  double t3548;
  double t3551;
  double t3572;
  double t3573;
  double t3578;
  double t3579;
  double t3580;
  double t3589;
  double t3620;
  double t3647;
  double t3651;
  double t3667;
  double t3668;
  double t3669;
  double t3670;
  double t3571;
  double t3582;
  double t3583;
  double t3584;
  double t3624;
  double t3671;
  double t3672;
  double t3673;
  double t3674;
  double t3675;
  double t3676;
  double t3678;
  double t3679;
  double t3680;
  double t3681;
  double t3686;
  double t3687;
  double t3689;
  double t3585;
  double t3682;
  double t3683;
  double t3705;
  double t3706;
  double t3707;
  double t3561;
  double t3564;
  double t3569;
  double t3700;
  double t3701;
  double t3702;
  double t3723;
  double t3724;
  double t3725;
  double t3778;
  double t3779;
  double t3780;
  double t4586;
  double t4824;
  double t4825;
  double t3703;
  double t4928;
  double t4932;
  double t4933;
  double t3742;
  double t4983;
  double t4986;
  double t4987;
  double t3704;
  double t3708;
  double t3709;
  double t4957;
  double t4975;
  double t4962;
  double t4967;
  double t4968;
  double t4982;
  double t5011;
  double t3744;
  double t3747;
  double t3750;
  double t3815;
  double t3871;
  double t5073;
  double t5075;
  double t5083;
  double t5085;
  double t3823;
  double t3830;
  double t3832;
  double t3872;
  double t3873;
  double t3877;
  double t3898;
  double t3926;
  double t3899;
  double t3901;
  double t3902;
  double t5030;
  double t5034;
  double t8414;
  double t8426;
  double t8607;
  double t8812;
  double t3930;
  double t3932;
  double t3955;
  double t4830;
  double t4844;
  double t4848;
  double t4849;
  double t4861;
  double t4862;
  double t4863;
  double t4867;
  double t4873;
  double t4904;
  double t4905;
  double t4919;
  double t12260;
  double t12398;
  double t12446;
  double t11974;
  double t4974;
  double t12893;
  double t12938;
  double t12949;
  double t13005;
  double t13016;
  double t13107;
  double t5010;
  double t5021;
  double t5022;
  double t5023;
  double t5024;
  double t5029;
  double t13117;
  double t5037;
  double t5038;
  double t13357;
  double t5047;
  double t5048;
  double t5054;
  double t5063;
  double t5064;
  double t5065;
  double t5066;
  double t5067;
  double t5068;
  double t5069;
  double t5070;
  double t5071;
  double t5074;
  double t5078;
  double t5079;
  double t5080;
  double t5081;
  double t5084;
  double t5089;
  double t5094;
  double t5095;
  double t5096;
  double t14637;
  double t5132;
  double t5137;
  double t14745;
  double t5340;
  double t5380;
  double t6602;
  double t6651;
  double t7512;
  double t7518;
  double t7582;
  double t7586;
  double t7674;
  double t7979;
  double t7990;
  double t8322;
  double t8362;
  double t8368;
  double t8380;
  double t8392;
  double t8422;
  double t8764;
  double t9417;
  double t9507;
  double t9923;
  double t9969;
  double t10278;
  double t15904;
  double t10671;
  double t10813;
  double t15934;
  double t11209;
  double t11218;
  double t11431;
  double t16161;
  double t16163;
  double t16180;
  double t16372;
  double t16375;
  double t16376;
  double t16383;
  double t16390;
  double t16391;
  double t16406;
  double t16412;
  double t16417;
  double t16433;
  double t16437;
  double t16438;
  double t16439;
  double t16440;
  double t16443;
  double t16444;
  double t16447;
  double t16448;
  double t16449;
  double t16446;
  double t16460;
  double t16464;
  double t16471;
  double t16478;
  double t16479;
  double t16480;
  double t16482;
  double t16483;
  double t16491;
  double t16662;
  double t16665;
  double t16680;
  double t16682;
  double t16673;
  double t16706;
  double t16709;
  double t16370;
  double t16377;
  double t16378;
  double t16715;
  double t3474;
  double t3475;
  double t3476;
  double t16830;
  double t16893;
  double t16895;
  double t16184;
  double t16186;
  double t16197;
  double t16202;
  double t16205;
  double t16290;
  double t16367;
  double t3540;
  double t3541;
  double t3542;
  double t16971;
  double t16972;
  double t16974;
  double t16976;
  double t16978;
  double t16980;
  double t16981;
  double t16985;
  double t16993;
  double t16994;
  double t16995;
  double t16979;
  double t17029;
  double t17051;
  double t17052;
  double t17068;
  double t17069;
  double t17070;
  double t17054;
  double t17067;
  double t17078;
  double t17079;
  double t17081;
  double t17085;
  double t17086;
  double t17087;
  double t17091;
  double t17092;
  double t17093;
  double t16657;
  double t16660;
  double t16668;
  double t16669;
  double t16688;
  double t16689;
  double t16690;
  double t17111;
  double t16699;
  double t16700;
  double t16701;
  double t17117;
  double t17120;
  double t17179;
  double t17184;
  double t17186;
  double t17099;
  double t17100;
  double t17101;
  double t16768;
  double t16769;
  double t16774;
  double t17230;
  double t17236;
  t3212 = Cos(var1[10]);
  t3260 = Cos(var1[11]);
  t3277 = -1.*t3212*t3260;
  t3282 = Sin(var1[10]);
  t3286 = Sin(var1[11]);
  t3293 = -1.*t3282*t3286;
  t3298 = t3277 + t3293;
  t3329 = Cos(var1[9]);
  t776 = Cos(var1[5]);
  t1418 = Sin(var1[9]);
  t3330 = Sin(var1[5]);
  t3341 = Cos(var1[3]);
  t3317 = t776*t1418*t3298;
  t3331 = t3329*t3298*t3330;
  t3339 = t3317 + t3331;
  t145 = Sin(var1[3]);
  t3342 = Cos(var1[4]);
  t3354 = -1.*t3260*t3282;
  t3355 = t3212*t3286;
  t3356 = t3354 + t3355;
  t3357 = t3342*t3356;
  t3444 = Sin(var1[4]);
  t3452 = t3329*t776*t3298;
  t3455 = -1.*t1418*t3298*t3330;
  t3457 = t3452 + t3455;
  t3463 = -1.*t3444*t3457;
  t3464 = t3357 + t3463;
  t3481 = t776*t1418;
  t3482 = t3329*t3330;
  t3483 = t3481 + t3482;
  t3488 = -1.*t3329*t776;
  t3489 = t1418*t3330;
  t3492 = t3488 + t3489;
  t3513 = t776*t1418*t3356;
  t3516 = t3329*t3356*t3330;
  t3517 = t3513 + t3516;
  t3522 = t3212*t3260;
  t3523 = t3282*t3286;
  t3525 = t3522 + t3523;
  t3526 = t3342*t3525;
  t3527 = t3329*t776*t3356;
  t3529 = -1.*t1418*t3356*t3330;
  t3530 = t3527 + t3529;
  t3531 = -1.*t3444*t3530;
  t3532 = t3526 + t3531;
  t3547 = -1.*t3356*t3444;
  t3548 = -1.*t3342*t3457;
  t3551 = t3547 + t3548;
  t3572 = -1.*t3260;
  t3573 = 1. + t3572;
  t3578 = -0.50321*t3573;
  t3579 = -0.19821*t3260;
  t3580 = t3578 + t3579;
  t3589 = -1.*t3329;
  t3620 = 1. + t3589;
  t3647 = -1.*t3212;
  t3651 = 1. + t3647;
  t3667 = -0.28121*t3651;
  t3668 = t3212*t3580;
  t3669 = 0.305*t3282*t3286;
  t3670 = t3667 + t3668 + t3669;
  t3571 = 0.28121*t3282;
  t3582 = t3580*t3282;
  t3583 = -0.305*t3212*t3286;
  t3584 = t3571 + t3582 + t3583;
  t3624 = -0.15121*t3620;
  t3671 = t3329*t3670;
  t3672 = t3624 + t3671;
  t3673 = t776*t3672;
  t3674 = 0.15121*t3620;
  t3675 = 0.15121*t3329;
  t3676 = 0.15121*t1418;
  t3678 = t1418*t3670;
  t3679 = t3674 + t3675 + t3676 + t3678;
  t3680 = -1.*t3679*t3330;
  t3681 = t3673 + t3680;
  t3686 = t3584*t3444;
  t3687 = t3342*t3681;
  t3689 = t3686 + t3687;
  t3585 = -1.*t3584*t3444;
  t3682 = -1.*t3342*t3681;
  t3683 = t3585 + t3682;
  t3705 = t3342*t3584;
  t3706 = -1.*t3444*t3681;
  t3707 = t3705 + t3706;
  t3561 = t3525*t3444;
  t3564 = t3342*t3530;
  t3569 = t3561 + t3564;
  t3700 = t776*t3679;
  t3701 = t3672*t3330;
  t3702 = t3700 + t3701;
  t3723 = -1.*t3525*t3444;
  t3724 = -1.*t3342*t3530;
  t3725 = t3723 + t3724;
  t3778 = t3356*t3444;
  t3779 = t3342*t3457;
  t3780 = t3778 + t3779;
  t4586 = -1.*t776*t1418*t3298;
  t4824 = -1.*t3329*t3298*t3330;
  t4825 = t4586 + t4824;
  t3703 = -1.*t3492*t3702;
  t4928 = -1.*t776*t3679;
  t4932 = -1.*t3672*t3330;
  t4933 = t4928 + t4932;
  t3742 = t3517*t3702;
  t4983 = -1.*t776*t1418*t3356;
  t4986 = -1.*t3329*t3356*t3330;
  t4987 = t4983 + t4986;
  t3704 = -1.*t3342*t3483*t3689;
  t3708 = t3444*t3483*t3707;
  t3709 = t3703 + t3704 + t3708;
  t4957 = -1.*t3483*t3702;
  t4975 = -1.*t3492*t3681;
  t4962 = t3329*t776;
  t4967 = -1.*t1418*t3330;
  t4968 = t4962 + t4967;
  t4982 = t3530*t3702;
  t5011 = t3517*t3681;
  t3744 = t3569*t3689;
  t3747 = t3532*t3707;
  t3750 = t3742 + t3744 + t3747;
  t3815 = -1.*t3517*t3702;
  t3871 = t3339*t3702;
  t5073 = -1.*t3530*t3702;
  t5075 = -1.*t3517*t3681;
  t5083 = t3457*t3702;
  t5085 = t3339*t3681;
  t3823 = -1.*t3569*t3689;
  t3830 = -1.*t3532*t3707;
  t3832 = t3815 + t3823 + t3830;
  t3872 = t3780*t3689;
  t3873 = t3464*t3707;
  t3877 = t3871 + t3872 + t3873;
  t3898 = t3492*t3702;
  t3926 = -1.*t3339*t3702;
  t3899 = t3342*t3483*t3689;
  t3901 = -1.*t3444*t3483*t3707;
  t3902 = t3898 + t3899 + t3901;
  t5030 = Power(t3342,2);
  t5034 = Power(t3444,2);
  t8414 = t3483*t3702;
  t8426 = t3492*t3681;
  t8607 = -1.*t3457*t3702;
  t8812 = -1.*t3339*t3681;
  t3930 = -1.*t3780*t3689;
  t3932 = -1.*t3464*t3707;
  t3955 = t3926 + t3930 + t3932;
  t4830 = var2[0]*t3342*t4825;
  t4844 = t145*t3444*t4825;
  t4848 = t3341*t3457;
  t4849 = t4844 + t4848;
  t4861 = var2[1]*t4849;
  t4862 = -1.*t3341*t3444*t4825;
  t4863 = t145*t3457;
  t4867 = t4862 + t4863;
  t4873 = var2[2]*t4867;
  t4904 = -1.*t3483*t3681;
  t4905 = t3703 + t4904;
  t4919 = t3530*t4905;
  t12260 = -0.15121*t1418;
  t12398 = -1.*t1418*t3670;
  t12446 = t12260 + t12398;
  t11974 = t3675 + t3671;
  t4974 = -1.*t4968*t3681;
  t12893 = t776*t12446;
  t12938 = -1.*t11974*t3330;
  t12949 = t12893 + t12938;
  t13005 = t776*t11974;
  t13016 = t12446*t3330;
  t13107 = t13005 + t13016;
  t5010 = t4987*t3681;
  t5021 = t3584*t3525;
  t5022 = t3530*t3681;
  t5023 = t5021 + t3742 + t5022;
  t5024 = t3483*t5023;
  t5029 = t3342*t4987*t3709;
  t13117 = -1.*t3492*t13107;
  t5037 = -1.*t3342*t4968*t3689;
  t5038 = t3444*t4968*t3707;
  t13357 = t3517*t13107;
  t5047 = t3342*t4987*t3689;
  t5048 = -1.*t3444*t4987*t3707;
  t5054 = t3342*t4968*t3750;
  t5063 = var2[0]*t3342*t4968;
  t5064 = t145*t3483;
  t5065 = -1.*t3341*t3444*t4968;
  t5066 = t5064 + t5065;
  t5067 = var2[2]*t5066;
  t5068 = t3341*t3483;
  t5069 = t145*t3444*t4968;
  t5070 = t5068 + t5069;
  t5071 = var2[1]*t5070;
  t5074 = -1.*t4987*t3681;
  t5078 = -1.*t3584*t3525;
  t5079 = -1.*t3530*t3681;
  t5080 = t5078 + t3815 + t5079;
  t5081 = t3457*t5080;
  t5084 = t4825*t3681;
  t5089 = t3584*t3356;
  t5094 = t3457*t3681;
  t5095 = t5089 + t3871 + t5094;
  t5096 = t3530*t5095;
  t14637 = -1.*t3517*t13107;
  t5132 = -1.*t3342*t4987*t3689;
  t5137 = t3444*t4987*t3707;
  t14745 = t3339*t13107;
  t5340 = t3342*t4825*t3689;
  t5380 = -1.*t3444*t4825*t3707;
  t6602 = t3342*t4825*t3832;
  t6651 = t3342*t4987*t3877;
  t7512 = var2[0]*t3342*t4987;
  t7518 = t145*t3444*t4987;
  t7582 = t3341*t3530;
  t7586 = t7518 + t7582;
  t7674 = var2[1]*t7586;
  t7979 = -1.*t3341*t3444*t4987;
  t7990 = t145*t3530;
  t8322 = t7979 + t7990;
  t8362 = var2[2]*t8322;
  t8368 = t3483*t3681;
  t8380 = t3898 + t8368;
  t8392 = t3457*t8380;
  t8422 = t4968*t3681;
  t8764 = -1.*t4825*t3681;
  t9417 = -1.*t3584*t3356;
  t9507 = -1.*t3457*t3681;
  t9923 = t9417 + t3926 + t9507;
  t9969 = t3483*t9923;
  t10278 = t3342*t4825*t3902;
  t15904 = t3492*t13107;
  t10671 = t3342*t4968*t3689;
  t10813 = -1.*t3444*t4968*t3707;
  t15934 = -1.*t3339*t13107;
  t11209 = -1.*t3342*t4825*t3689;
  t11218 = t3444*t4825*t3707;
  t11431 = t3342*t4968*t3955;
  t16161 = t3260*t3282;
  t16163 = -1.*t3212*t3286;
  t16180 = t16161 + t16163;
  t16372 = t3329*t776*t16180;
  t16375 = -1.*t1418*t16180*t3330;
  t16376 = t16372 + t16375;
  t16383 = t776*t1418*t16180;
  t16390 = t3329*t16180*t3330;
  t16391 = t16383 + t16390;
  t16406 = t3342*t3298;
  t16412 = -1.*t3444*t16376;
  t16417 = t16406 + t16412;
  t16433 = -0.28121*t3282;
  t16437 = -1.*t3580*t3282;
  t16438 = 0.305*t3212*t3286;
  t16439 = t16433 + t16437 + t16438;
  t16440 = t776*t1418*t16439;
  t16443 = t3329*t16439*t3330;
  t16444 = t16440 + t16443;
  t16447 = t3329*t776*t16439;
  t16448 = -1.*t1418*t16439*t3330;
  t16449 = t16447 + t16448;
  t16446 = -1.*t3492*t16444;
  t16460 = 0.28121*t3212;
  t16464 = t16460 + t3668 + t3669;
  t16471 = t16444*t3517;
  t16478 = t16464*t3444;
  t16479 = t3342*t16449;
  t16480 = t16478 + t16479;
  t16482 = t3342*t16464;
  t16483 = -1.*t3444*t16449;
  t16491 = t16482 + t16483;
  t16662 = t3584*t3298;
  t16665 = t3356*t16464;
  t16680 = Power(t3329,2);
  t16682 = Power(t1418,2);
  t16673 = -1.*t16464*t3525;
  t16706 = t16444*t3339;
  t16709 = t16391*t3702;
  t16370 = t3298*t3444;
  t16377 = t3342*t16376;
  t16378 = t16370 + t16377;
  t16715 = -1.*t16444*t3517;
  t3474 = t3341*t3339;
  t3475 = -1.*t145*t3464;
  t3476 = t3474 + t3475;
  t16830 = t3492*t16444;
  t16893 = -1.*t16444*t3339;
  t16895 = -1.*t16391*t3702;
  t16184 = 0.15121*t16180;
  t16186 = 0.15121*t3356;
  t16197 = t16184 + t16186;
  t16202 = var2[9]*t16197;
  t16205 = -1.*t1418*t3672;
  t16290 = t3329*t3679;
  t16367 = t16205 + t16290;
  t3540 = t3341*t3517;
  t3541 = -1.*t145*t3532;
  t3542 = t3540 + t3541;
  t16971 = 0.305*t3260*t3282;
  t16972 = t16971 + t3583;
  t16974 = t776*t1418*t16972;
  t16976 = t3329*t16972*t3330;
  t16978 = t16974 + t16976;
  t16980 = t3329*t776*t16972;
  t16981 = -1.*t1418*t16972*t3330;
  t16985 = t16980 + t16981;
  t16993 = t776*t1418*t3525;
  t16994 = t3329*t3525*t3330;
  t16995 = t16993 + t16994;
  t16979 = -1.*t3492*t16978;
  t17029 = -0.305*t3212*t3260;
  t17051 = -0.305*t3282*t3286;
  t17052 = t17029 + t17051;
  t17068 = t3329*t776*t3525;
  t17069 = -1.*t1418*t3525*t3330;
  t17070 = t17068 + t17069;
  t17054 = t16978*t3517;
  t17067 = t16995*t3702;
  t17078 = t17052*t3444;
  t17079 = t3342*t16985;
  t17081 = t17078 + t17079;
  t17085 = t3342*t17052;
  t17086 = -1.*t3444*t16985;
  t17087 = t17085 + t17086;
  t17091 = t16180*t3444;
  t17092 = t3342*t17070;
  t17093 = t17091 + t17092;
  t16657 = t3298*t3670;
  t16660 = t5089 + t16657;
  t16668 = -1.*t3356*t3670;
  t16669 = t16668 + t5078;
  t16688 = -1.*t3329*t3356*t3672;
  t16689 = -1.*t1418*t3356*t3679;
  t16690 = t5078 + t16688 + t16689;
  t17111 = t3356*t17052;
  t16699 = t3329*t3298*t3672;
  t16700 = t1418*t3298*t3679;
  t16701 = t5089 + t16699 + t16700;
  t17117 = -1.*t16180*t3584;
  t17120 = -1.*t17052*t3525;
  t17179 = t16978*t3339;
  t17184 = -1.*t16978*t3517;
  t17186 = -1.*t16995*t3702;
  t17099 = t3342*t16180;
  t17100 = -1.*t3444*t17070;
  t17101 = t17099 + t17100;
  t16768 = t1418*t3672;
  t16769 = -1.*t3329*t3679;
  t16774 = t16768 + t16769;
  t17230 = t3492*t16978;
  t17236 = -1.*t16978*t3339;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t145*t3339 - 1.*t3341*t3464)*var2[1] + t3476*var2[2];
  p_output1[10]=(t3341*t3444*t3483 - 1.*t145*t3492)*var2[1] + (t145*t3444*t3483 + t3341*t3492)*var2[2];
  p_output1[11]=(-1.*t145*t3517 - 1.*t3341*t3532)*var2[1] + t3542*var2[2];
  p_output1[12]=t3464*var2[0] - 1.*t145*t3551*var2[1] + t3341*t3551*var2[2] + (t3569*(t3444*t3483*t3683 + t3444*t3483*t3689) + t3532*t3709 + t3342*t3483*(t3532*t3683 + t3532*t3689 + t3569*t3707 + t3707*t3725) - 1.*t3444*t3483*t3750)*var2[3];
  p_output1[13]=-1.*t3444*t3483*var2[0] + t145*t3342*t3483*var2[1] - 1.*t3341*t3342*t3483*var2[2] + ((-1.*t3532*t3683 - 1.*t3532*t3689 - 1.*t3569*t3707 - 1.*t3707*t3725)*t3780 + t3569*(t3464*t3683 + t3464*t3689 + t3551*t3707 + t3707*t3780) + t3464*t3832 + t3532*t3877)*var2[3];
  p_output1[14]=t3532*var2[0] - 1.*t145*t3725*var2[1] + t3341*t3725*var2[2] + ((-1.*t3444*t3483*t3683 - 1.*t3444*t3483*t3689)*t3780 + t3342*t3483*(-1.*t3464*t3683 - 1.*t3464*t3689 - 1.*t3551*t3707 - 1.*t3707*t3780) + t3464*t3902 - 1.*t3444*t3483*t3955)*var2[3];
  p_output1[15]=t4830 + t4861 + t4873 + (t5029 + t3569*(t4957 + t4975 - 1.*t3483*t4933*t5030 - 1.*t3483*t4933*t5034 + t5037 + t5038) + t3342*t3483*(-1.*t3444*t3532*t4933 + t3342*t3569*t4933 + t4982 + t5011 + t5047 + t5048) + t5054)*var2[3] + (t4919 + t3517*(-1.*t3483*t4933 + t4957 + t4974 + t4975) + t3492*(t3530*t4933 + t4982 + t5010 + t5011) + t5024)*var2[4];
  p_output1[16]=t5063 + t5067 + t5071 + (t3780*(t3444*t3532*t4933 - 1.*t3342*t3569*t4933 + t5073 + t5075 + t5132 + t5137) + t3569*(-1.*t3444*t3464*t4933 + t3342*t3780*t4933 + t5083 + t5085 + t5340 + t5380) + t6602 + t6651)*var2[3] + (t3339*(-1.*t3530*t4933 + t5073 + t5074 + t5075) + t5081 + t3517*(t3457*t4933 + t5083 + t5084 + t5085) + t5096)*var2[4];
  p_output1[17]=t7512 + t7674 + t8362 + (t10278 + t11431 + t3780*(t10671 + t10813 + t3483*t4933*t5030 + t3483*t4933*t5034 + t8414 + t8426) + t3342*t3483*(t11209 + t11218 + t3444*t3464*t4933 - 1.*t3342*t3780*t4933 + t8607 + t8812))*var2[3] + (t8392 + t3339*(t3483*t4933 + t8414 + t8422 + t8426) + t3492*(-1.*t3457*t4933 + t8607 + t8764 + t8812) + t9969)*var2[4];
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=t4830 + t4861 + t4873 + (t5029 + t3569*(t13117 + t4957 - 1.*t12949*t3483*t5030 - 1.*t12949*t3483*t5034 + t5037 + t5038) + t3342*t3483*(t13357 - 1.*t12949*t3444*t3532 + t12949*t3342*t3569 + t4982 + t5047 + t5048) + t5054)*var2[3] + (t4919 + t3517*(t13117 - 1.*t12949*t3483 + t4957 + t4974) + t3492*(t13357 + t12949*t3530 + t4982 + t5010) + t5024)*var2[4] + t3525*(-1.*t12446*t1418 + t11974*t3329 - 1.*t3329*t3672 - 1.*t1418*t3679)*var2[5];
  p_output1[28]=t5063 + t5067 + t5071 + (t3780*(t14637 + t12949*t3444*t3532 - 1.*t12949*t3342*t3569 + t5073 + t5132 + t5137) + t3569*(t14745 - 1.*t12949*t3444*t3464 + t12949*t3342*t3780 + t5083 + t5340 + t5380) + t6602 + t6651)*var2[3] + (t3339*(t14637 - 1.*t12949*t3530 + t5073 + t5074) + t5081 + t3517*(t14745 + t12949*t3457 + t5083 + t5084) + t5096)*var2[4] + (t3525*(t11974*t1418*t3298 + t12446*t3298*t3329 - 1.*t1418*t3298*t3672 + t3298*t3329*t3679) + t3356*(-1.*t11974*t1418*t3356 - 1.*t12446*t3329*t3356 + t1418*t3356*t3672 - 1.*t3329*t3356*t3679))*var2[5];
  p_output1[29]=t7512 + t7674 + t8362 + (t10278 + t11431 + t3780*(t10671 + t10813 + t15904 + t12949*t3483*t5030 + t12949*t3483*t5034 + t8414) + t3342*t3483*(t11209 + t11218 + t15934 + t12949*t3444*t3464 - 1.*t12949*t3342*t3780 + t8607))*var2[3] + (t8392 + t3339*(t15904 + t12949*t3483 + t8414 + t8422) + t3492*(t15934 - 1.*t12949*t3457 + t8607 + t8764) + t9969)*var2[4] + t3356*(t12446*t1418 - 1.*t11974*t3329 + t3329*t3672 + t1418*t3679)*var2[5];
  p_output1[30]=t16202 + t16378*var2[0] + (-1.*t145*t16417 + t16391*t3341)*var2[1] + (t145*t16391 + t16417*t3341)*var2[2] + ((t16446 - 1.*t16480*t3342*t3483 + t16491*t3444*t3483)*t3569 + t3709*t3780 + t3342*t3483*(t16471 + t16491*t3532 + t16480*t3569 + t3871 + t3872 + t3873))*var2[3] + ((t16446 - 1.*t16449*t3483)*t3517 + t3339*t4905 + t3492*(t16471 + t16464*t3525 + t16449*t3530 + t3871 + t5089 + t5094))*var2[4] + t16367*t3356*var2[5];
  p_output1[31]=(t3569*(t16706 + t16709 + t16491*t3464 + t16378*t3689 + t16417*t3707 + t16480*t3780) + t16378*t3832 + t3780*t3877 + t3780*(t16715 - 1.*t16491*t3532 - 1.*t16480*t3569 + t3926 + t3930 + t3932))*var2[3] + (t3517*(t16662 + t16665 + t16706 + t16709 + t16449*t3457 + t16376*t3681) + t16391*t5080 + t3339*t5095 + t3339*(t16673 + t16715 - 1.*t16449*t3530 + t3926 + t9417 + t9507))*var2[4] + (t16690*t3298 + t16701*t3356 + t3525*(t16662 + t16665 + t16439*t16680*t3298 + t16439*t16682*t3298 + t16180*t3329*t3672 + t1418*t16180*t3679) + t3356*(t16673 - 1.*t16439*t16680*t3356 - 1.*t16439*t16682*t3356 - 1.*t3298*t3329*t3672 - 1.*t1418*t3298*t3679 + t9417))*var2[5] + (t16669*t3298 + t16660*t3356 + t3525*(t16662 + t16665 + t16439*t3298 + t16180*t3670) + t3356*(t16673 - 1.*t16439*t3356 - 1.*t3298*t3670 + t9417))*var2[9];
  p_output1[32]=t3780*var2[0] + t3476*var2[1] + (t145*t3339 + t3341*t3464)*var2[2] + ((t16830 + t16480*t3342*t3483 - 1.*t16491*t3444*t3483)*t3780 + t3342*t3483*(t16893 + t16895 - 1.*t16491*t3464 - 1.*t16378*t3689 - 1.*t16417*t3707 - 1.*t16480*t3780) + t16378*t3902)*var2[3] + (t3339*(t16830 + t16449*t3483) + t3492*(t16893 + t16895 - 1.*t16464*t3356 - 1.*t16449*t3457 - 1.*t3298*t3584 - 1.*t16376*t3681) + t16391*t8380)*var2[4] + t16774*t3298*var2[5];
  p_output1[33]=t16202 + t3569*var2[0] + t3542*var2[1] + (t145*t3517 + t3341*t3532)*var2[2] + ((t16979 - 1.*t17081*t3342*t3483 + t17087*t3444*t3483)*t3569 + t3342*t3483*(t17054 + t17067 + t17087*t3532 + t17081*t3569 + t17093*t3689 + t17101*t3707) + t17093*t3709)*var2[3] + ((t16979 - 1.*t16985*t3483)*t3517 + t3492*(t17054 + t17067 + t17052*t3525 + t16985*t3530 + t16180*t3584 + t17070*t3681) + t16995*t4905)*var2[4] + t16180*t16367*var2[5] + (0.28121*t3260 - 0.305*Power(t3260,2) + t3260*t3580)*var2[10];
  p_output1[34]=((t17184 + t17186 - 1.*t17087*t3532 - 1.*t17081*t3569 - 1.*t17093*t3689 - 1.*t17101*t3707)*t3780 + t3569*(t17179 + t17087*t3464 + t3742 + t3744 + t3747 + t17081*t3780) + t3569*t3832 + t17093*t3877)*var2[3] + (t3339*(t17117 + t17120 + t17184 + t17186 - 1.*t16985*t3530 - 1.*t17070*t3681) + t3517*(t17111 + t17179 + t16985*t3457 + t3742 + t5021 + t5022) + t3517*t5080 + t16995*t5095)*var2[4] + (t16180*t16701 + t16690*t3525 + t3356*(t17117 + t17120 - 1.*t16680*t16972*t3356 - 1.*t16682*t16972*t3356 - 1.*t3329*t3525*t3672 - 1.*t1418*t3525*t3679) + t3525*(t17111 + t16680*t16972*t3298 + t16682*t16972*t3298 + t3329*t3356*t3672 + t1418*t3356*t3679 + t5021))*var2[5] + (t16180*t16660 + t16669*t3525 + t3356*(t17117 + t17120 - 1.*t16972*t3356 - 1.*t3525*t3670) + t3525*(t17111 + t16972*t3298 + t3356*t3670 + t5021))*var2[9];
  p_output1[35]=t17093*var2[0] + (-1.*t145*t17101 + t16995*t3341)*var2[1] + (t145*t16995 + t17101*t3341)*var2[2] + ((t17230 + t17081*t3342*t3483 - 1.*t17087*t3444*t3483)*t3780 + t3342*t3483*(t17236 - 1.*t17087*t3464 - 1.*t17081*t3780 + t3815 + t3823 + t3830) + t3569*t3902)*var2[3] + (t3339*(t17230 + t16985*t3483) + t3492*(t17236 - 1.*t17052*t3356 - 1.*t16985*t3457 + t3815 + t5078 + t5079) + t3517*t8380)*var2[4] + t16774*t3525*var2[5] + (-0.28121*t3286 + 0.305*t3260*t3286 - 1.*t3286*t3580)*var2[10];
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
