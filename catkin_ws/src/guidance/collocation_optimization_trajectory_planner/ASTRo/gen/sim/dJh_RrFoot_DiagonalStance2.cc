/*
 * Automatically Generated from Mathematica.
 * Sun 22 May 2022 16:55:13 GMT+02:00
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
  double t3320;
  double t3336;
  double t3348;
  double t3349;
  double t3360;
  double t3375;
  double t3376;
  double t3405;
  double t3297;
  double t3319;
  double t3406;
  double t3423;
  double t3404;
  double t3407;
  double t3418;
  double t3256;
  double t3424;
  double t3425;
  double t3482;
  double t3491;
  double t3492;
  double t3493;
  double t3495;
  double t3496;
  double t3497;
  double t3498;
  double t3500;
  double t3518;
  double t3520;
  double t3525;
  double t3531;
  double t3535;
  double t3536;
  double t3548;
  double t3549;
  double t3550;
  double t3554;
  double t3555;
  double t3560;
  double t3561;
  double t3564;
  double t3565;
  double t3566;
  double t3567;
  double t3570;
  double t3592;
  double t3597;
  double t3598;
  double t3643;
  double t3666;
  double t3670;
  double t3686;
  double t3687;
  double t3692;
  double t3693;
  double t3694;
  double t3695;
  double t3697;
  double t3698;
  double t3699;
  double t3700;
  double t3701;
  double t3639;
  double t3688;
  double t3689;
  double t3690;
  double t3702;
  double t3704;
  double t3705;
  double t3706;
  double t3708;
  double t3709;
  double t3710;
  double t3718;
  double t3719;
  double t3723;
  double t3724;
  double t3725;
  double t3691;
  double t3720;
  double t3721;
  double t3744;
  double t3746;
  double t3747;
  double t3603;
  double t3604;
  double t3608;
  double t3733;
  double t3734;
  double t3736;
  double t3769;
  double t3770;
  double t3774;
  double t3849;
  double t3851;
  double t3884;
  double t6283;
  double t6291;
  double t6308;
  double t3742;
  double t6571;
  double t6693;
  double t6726;
  double t3789;
  double t6910;
  double t6912;
  double t6923;
  double t3743;
  double t3748;
  double t3760;
  double t6766;
  double t6784;
  double t6768;
  double t6771;
  double t6775;
  double t6890;
  double t6933;
  double t3797;
  double t3798;
  double t3799;
  double t3891;
  double t3909;
  double t9761;
  double t9764;
  double t9775;
  double t9779;
  double t3892;
  double t3896;
  double t3897;
  double t3910;
  double t3916;
  double t3917;
  double t3949;
  double t6073;
  double t3951;
  double t3974;
  double t3979;
  double t8044;
  double t8110;
  double t15162;
  double t15167;
  double t15207;
  double t15209;
  double t6078;
  double t6082;
  double t6137;
  double t6310;
  double t6368;
  double t6369;
  double t6466;
  double t6555;
  double t6557;
  double t6558;
  double t6559;
  double t6563;
  double t6564;
  double t6565;
  double t6568;
  double t15267;
  double t15268;
  double t15269;
  double t15260;
  double t15265;
  double t6779;
  double t15274;
  double t15275;
  double t15280;
  double t15282;
  double t15283;
  double t15284;
  double t6927;
  double t6954;
  double t6956;
  double t7901;
  double t7915;
  double t8026;
  double t15285;
  double t8114;
  double t8221;
  double t15293;
  double t9710;
  double t9721;
  double t9727;
  double t9737;
  double t9738;
  double t9745;
  double t9746;
  double t9749;
  double t9750;
  double t9751;
  double t9754;
  double t9757;
  double t9763;
  double t9769;
  double t9770;
  double t9771;
  double t9772;
  double t9777;
  double t9783;
  double t9786;
  double t9787;
  double t9790;
  double t15391;
  double t9797;
  double t9799;
  double t15397;
  double t9814;
  double t11737;
  double t15114;
  double t15115;
  double t15128;
  double t15133;
  double t15134;
  double t15135;
  double t15136;
  double t15137;
  double t15138;
  double t15139;
  double t15140;
  double t15148;
  double t15156;
  double t15157;
  double t15163;
  double t15208;
  double t15222;
  double t15226;
  double t15227;
  double t15228;
  double t15235;
  double t15450;
  double t15238;
  double t15239;
  double t15459;
  double t15247;
  double t15248;
  double t15255;
  double t15483;
  double t15484;
  double t15485;
  double t15495;
  double t15496;
  double t15497;
  double t15501;
  double t15502;
  double t15503;
  double t15506;
  double t15507;
  double t15509;
  double t15517;
  double t15518;
  double t15519;
  double t15520;
  double t15521;
  double t15522;
  double t15523;
  double t15525;
  double t15526;
  double t15527;
  double t15524;
  double t15533;
  double t15534;
  double t15537;
  double t15543;
  double t15544;
  double t15545;
  double t15547;
  double t15548;
  double t15549;
  double t15589;
  double t15597;
  double t15616;
  double t15618;
  double t15611;
  double t15653;
  double t15658;
  double t15494;
  double t15498;
  double t15499;
  double t15665;
  double t3507;
  double t3511;
  double t3512;
  double t15706;
  double t15715;
  double t15717;
  double t15486;
  double t15487;
  double t15488;
  double t15489;
  double t15490;
  double t15491;
  double t15492;
  double t3580;
  double t3583;
  double t3588;
  double t15763;
  double t15766;
  double t15768;
  double t15773;
  double t15774;
  double t15776;
  double t15777;
  double t15781;
  double t15791;
  double t15792;
  double t15793;
  double t15775;
  double t15799;
  double t15800;
  double t15801;
  double t15807;
  double t15808;
  double t15809;
  double t15803;
  double t15805;
  double t15816;
  double t15817;
  double t15818;
  double t15820;
  double t15821;
  double t15822;
  double t15826;
  double t15827;
  double t15828;
  double t15586;
  double t15587;
  double t15600;
  double t15604;
  double t15631;
  double t15633;
  double t15634;
  double t15848;
  double t15647;
  double t15648;
  double t15649;
  double t15852;
  double t15854;
  double t15877;
  double t15883;
  double t15886;
  double t15833;
  double t15834;
  double t15836;
  double t15688;
  double t15689;
  double t15697;
  double t15922;
  double t15928;
  t3320 = Cos(var1[16]);
  t3336 = Cos(var1[17]);
  t3348 = -1.*t3320*t3336;
  t3349 = Sin(var1[16]);
  t3360 = Sin(var1[17]);
  t3375 = -1.*t3349*t3360;
  t3376 = t3348 + t3375;
  t3405 = Cos(var1[15]);
  t3297 = Cos(var1[5]);
  t3319 = Sin(var1[15]);
  t3406 = Sin(var1[5]);
  t3423 = Cos(var1[3]);
  t3404 = t3297*t3319*t3376;
  t3407 = t3405*t3376*t3406;
  t3418 = t3404 + t3407;
  t3256 = Sin(var1[3]);
  t3424 = Cos(var1[4]);
  t3425 = -1.*t3336*t3349;
  t3482 = t3320*t3360;
  t3491 = t3425 + t3482;
  t3492 = t3424*t3491;
  t3493 = Sin(var1[4]);
  t3495 = t3405*t3297*t3376;
  t3496 = -1.*t3319*t3376*t3406;
  t3497 = t3495 + t3496;
  t3498 = -1.*t3493*t3497;
  t3500 = t3492 + t3498;
  t3518 = t3297*t3319;
  t3520 = t3405*t3406;
  t3525 = t3518 + t3520;
  t3531 = -1.*t3405*t3297;
  t3535 = t3319*t3406;
  t3536 = t3531 + t3535;
  t3548 = t3297*t3319*t3491;
  t3549 = t3405*t3491*t3406;
  t3550 = t3548 + t3549;
  t3554 = t3320*t3336;
  t3555 = t3349*t3360;
  t3560 = t3554 + t3555;
  t3561 = t3424*t3560;
  t3564 = t3405*t3297*t3491;
  t3565 = -1.*t3319*t3491*t3406;
  t3566 = t3564 + t3565;
  t3567 = -1.*t3493*t3566;
  t3570 = t3561 + t3567;
  t3592 = -1.*t3491*t3493;
  t3597 = -1.*t3424*t3497;
  t3598 = t3592 + t3597;
  t3643 = -1.*t3336;
  t3666 = 1. + t3643;
  t3670 = -0.50321*t3666;
  t3686 = -0.23321*t3336;
  t3687 = t3670 + t3686;
  t3692 = -1.*t3405;
  t3693 = 1. + t3692;
  t3694 = -0.15121*t3693;
  t3695 = -1.*t3320;
  t3697 = 1. + t3695;
  t3698 = -0.28121*t3697;
  t3699 = t3320*t3687;
  t3700 = 0.27*t3349*t3360;
  t3701 = t3698 + t3699 + t3700;
  t3639 = 0.28121*t3349;
  t3688 = t3687*t3349;
  t3689 = -0.27*t3320*t3360;
  t3690 = t3639 + t3688 + t3689;
  t3702 = t3405*t3701;
  t3704 = t3694 + t3702;
  t3705 = t3297*t3704;
  t3706 = -0.15121*t3405;
  t3708 = 0.15121*t3319;
  t3709 = t3319*t3701;
  t3710 = t3694 + t3706 + t3708 + t3709;
  t3718 = -1.*t3710*t3406;
  t3719 = t3705 + t3718;
  t3723 = t3690*t3493;
  t3724 = t3424*t3719;
  t3725 = t3723 + t3724;
  t3691 = -1.*t3690*t3493;
  t3720 = -1.*t3424*t3719;
  t3721 = t3691 + t3720;
  t3744 = t3424*t3690;
  t3746 = -1.*t3493*t3719;
  t3747 = t3744 + t3746;
  t3603 = t3560*t3493;
  t3604 = t3424*t3566;
  t3608 = t3603 + t3604;
  t3733 = t3297*t3710;
  t3734 = t3704*t3406;
  t3736 = t3733 + t3734;
  t3769 = -1.*t3560*t3493;
  t3770 = -1.*t3424*t3566;
  t3774 = t3769 + t3770;
  t3849 = t3491*t3493;
  t3851 = t3424*t3497;
  t3884 = t3849 + t3851;
  t6283 = -1.*t3297*t3319*t3376;
  t6291 = -1.*t3405*t3376*t3406;
  t6308 = t6283 + t6291;
  t3742 = -1.*t3536*t3736;
  t6571 = -1.*t3297*t3710;
  t6693 = -1.*t3704*t3406;
  t6726 = t6571 + t6693;
  t3789 = t3550*t3736;
  t6910 = -1.*t3297*t3319*t3491;
  t6912 = -1.*t3405*t3491*t3406;
  t6923 = t6910 + t6912;
  t3743 = -1.*t3424*t3525*t3725;
  t3748 = t3493*t3525*t3747;
  t3760 = t3742 + t3743 + t3748;
  t6766 = -1.*t3525*t3736;
  t6784 = -1.*t3536*t3719;
  t6768 = t3405*t3297;
  t6771 = -1.*t3319*t3406;
  t6775 = t6768 + t6771;
  t6890 = t3566*t3736;
  t6933 = t3550*t3719;
  t3797 = t3608*t3725;
  t3798 = t3570*t3747;
  t3799 = t3789 + t3797 + t3798;
  t3891 = -1.*t3550*t3736;
  t3909 = t3418*t3736;
  t9761 = -1.*t3566*t3736;
  t9764 = -1.*t3550*t3719;
  t9775 = t3497*t3736;
  t9779 = t3418*t3719;
  t3892 = -1.*t3608*t3725;
  t3896 = -1.*t3570*t3747;
  t3897 = t3891 + t3892 + t3896;
  t3910 = t3884*t3725;
  t3916 = t3500*t3747;
  t3917 = t3909 + t3910 + t3916;
  t3949 = t3536*t3736;
  t6073 = -1.*t3418*t3736;
  t3951 = t3424*t3525*t3725;
  t3974 = -1.*t3493*t3525*t3747;
  t3979 = t3949 + t3951 + t3974;
  t8044 = Power(t3424,2);
  t8110 = Power(t3493,2);
  t15162 = t3525*t3736;
  t15167 = t3536*t3719;
  t15207 = -1.*t3497*t3736;
  t15209 = -1.*t3418*t3719;
  t6078 = -1.*t3884*t3725;
  t6082 = -1.*t3500*t3747;
  t6137 = t6073 + t6078 + t6082;
  t6310 = var2[0]*t3424*t6308;
  t6368 = t3256*t3493*t6308;
  t6369 = t3423*t3497;
  t6466 = t6368 + t6369;
  t6555 = var2[1]*t6466;
  t6557 = -1.*t3423*t3493*t6308;
  t6558 = t3256*t3497;
  t6559 = t6557 + t6558;
  t6563 = var2[2]*t6559;
  t6564 = -1.*t3525*t3719;
  t6565 = t3742 + t6564;
  t6568 = t3566*t6565;
  t15267 = -0.15121*t3319;
  t15268 = -1.*t3319*t3701;
  t15269 = t15267 + t15268;
  t15260 = 0.15121*t3405;
  t15265 = t15260 + t3702;
  t6779 = -1.*t6775*t3719;
  t15274 = t3297*t15269;
  t15275 = -1.*t15265*t3406;
  t15280 = t15274 + t15275;
  t15282 = t3297*t15265;
  t15283 = t15269*t3406;
  t15284 = t15282 + t15283;
  t6927 = t6923*t3719;
  t6954 = t3690*t3560;
  t6956 = t3566*t3719;
  t7901 = t6954 + t3789 + t6956;
  t7915 = t3525*t7901;
  t8026 = t3424*t6923*t3760;
  t15285 = -1.*t3536*t15284;
  t8114 = -1.*t3424*t6775*t3725;
  t8221 = t3493*t6775*t3747;
  t15293 = t3550*t15284;
  t9710 = t3424*t6923*t3725;
  t9721 = -1.*t3493*t6923*t3747;
  t9727 = t3424*t6775*t3799;
  t9737 = var2[0]*t3424*t6775;
  t9738 = t3256*t3525;
  t9745 = -1.*t3423*t3493*t6775;
  t9746 = t9738 + t9745;
  t9749 = var2[2]*t9746;
  t9750 = t3423*t3525;
  t9751 = t3256*t3493*t6775;
  t9754 = t9750 + t9751;
  t9757 = var2[1]*t9754;
  t9763 = -1.*t6923*t3719;
  t9769 = -1.*t3690*t3560;
  t9770 = -1.*t3566*t3719;
  t9771 = t9769 + t3891 + t9770;
  t9772 = t3497*t9771;
  t9777 = t6308*t3719;
  t9783 = t3690*t3491;
  t9786 = t3497*t3719;
  t9787 = t9783 + t3909 + t9786;
  t9790 = t3566*t9787;
  t15391 = -1.*t3550*t15284;
  t9797 = -1.*t3424*t6923*t3725;
  t9799 = t3493*t6923*t3747;
  t15397 = t3418*t15284;
  t9814 = t3424*t6308*t3725;
  t11737 = -1.*t3493*t6308*t3747;
  t15114 = t3424*t6308*t3897;
  t15115 = t3424*t6923*t3917;
  t15128 = var2[0]*t3424*t6923;
  t15133 = t3256*t3493*t6923;
  t15134 = t3423*t3566;
  t15135 = t15133 + t15134;
  t15136 = var2[1]*t15135;
  t15137 = -1.*t3423*t3493*t6923;
  t15138 = t3256*t3566;
  t15139 = t15137 + t15138;
  t15140 = var2[2]*t15139;
  t15148 = t3525*t3719;
  t15156 = t3949 + t15148;
  t15157 = t3497*t15156;
  t15163 = t6775*t3719;
  t15208 = -1.*t6308*t3719;
  t15222 = -1.*t3690*t3491;
  t15226 = -1.*t3497*t3719;
  t15227 = t15222 + t6073 + t15226;
  t15228 = t3525*t15227;
  t15235 = t3424*t6308*t3979;
  t15450 = t3536*t15284;
  t15238 = t3424*t6775*t3725;
  t15239 = -1.*t3493*t6775*t3747;
  t15459 = -1.*t3418*t15284;
  t15247 = -1.*t3424*t6308*t3725;
  t15248 = t3493*t6308*t3747;
  t15255 = t3424*t6775*t6137;
  t15483 = t3336*t3349;
  t15484 = -1.*t3320*t3360;
  t15485 = t15483 + t15484;
  t15495 = t3405*t3297*t15485;
  t15496 = -1.*t3319*t15485*t3406;
  t15497 = t15495 + t15496;
  t15501 = t3297*t3319*t15485;
  t15502 = t3405*t15485*t3406;
  t15503 = t15501 + t15502;
  t15506 = t3424*t3376;
  t15507 = -1.*t3493*t15497;
  t15509 = t15506 + t15507;
  t15517 = -0.28121*t3349;
  t15518 = -1.*t3687*t3349;
  t15519 = 0.27*t3320*t3360;
  t15520 = t15517 + t15518 + t15519;
  t15521 = t3297*t3319*t15520;
  t15522 = t3405*t15520*t3406;
  t15523 = t15521 + t15522;
  t15525 = t3405*t3297*t15520;
  t15526 = -1.*t3319*t15520*t3406;
  t15527 = t15525 + t15526;
  t15524 = -1.*t3536*t15523;
  t15533 = 0.28121*t3320;
  t15534 = t15533 + t3699 + t3700;
  t15537 = t15523*t3550;
  t15543 = t15534*t3493;
  t15544 = t3424*t15527;
  t15545 = t15543 + t15544;
  t15547 = t3424*t15534;
  t15548 = -1.*t3493*t15527;
  t15549 = t15547 + t15548;
  t15589 = t3690*t3376;
  t15597 = t3491*t15534;
  t15616 = Power(t3405,2);
  t15618 = Power(t3319,2);
  t15611 = -1.*t15534*t3560;
  t15653 = t15523*t3418;
  t15658 = t15503*t3736;
  t15494 = t3376*t3493;
  t15498 = t3424*t15497;
  t15499 = t15494 + t15498;
  t15665 = -1.*t15523*t3550;
  t3507 = t3423*t3418;
  t3511 = -1.*t3256*t3500;
  t3512 = t3507 + t3511;
  t15706 = t3536*t15523;
  t15715 = -1.*t15523*t3418;
  t15717 = -1.*t15503*t3736;
  t15486 = -0.15121*t15485;
  t15487 = -0.15121*t3491;
  t15488 = t15486 + t15487;
  t15489 = var2[15]*t15488;
  t15490 = -1.*t3319*t3704;
  t15491 = t3405*t3710;
  t15492 = t15490 + t15491;
  t3580 = t3423*t3550;
  t3583 = -1.*t3256*t3570;
  t3588 = t3580 + t3583;
  t15763 = 0.27*t3336*t3349;
  t15766 = t15763 + t3689;
  t15768 = t3297*t3319*t15766;
  t15773 = t3405*t15766*t3406;
  t15774 = t15768 + t15773;
  t15776 = t3405*t3297*t15766;
  t15777 = -1.*t3319*t15766*t3406;
  t15781 = t15776 + t15777;
  t15791 = t3297*t3319*t3560;
  t15792 = t3405*t3560*t3406;
  t15793 = t15791 + t15792;
  t15775 = -1.*t3536*t15774;
  t15799 = -0.27*t3320*t3336;
  t15800 = -0.27*t3349*t3360;
  t15801 = t15799 + t15800;
  t15807 = t3405*t3297*t3560;
  t15808 = -1.*t3319*t3560*t3406;
  t15809 = t15807 + t15808;
  t15803 = t15774*t3550;
  t15805 = t15793*t3736;
  t15816 = t15801*t3493;
  t15817 = t3424*t15781;
  t15818 = t15816 + t15817;
  t15820 = t3424*t15801;
  t15821 = -1.*t3493*t15781;
  t15822 = t15820 + t15821;
  t15826 = t15485*t3493;
  t15827 = t3424*t15809;
  t15828 = t15826 + t15827;
  t15586 = t3376*t3701;
  t15587 = t9783 + t15586;
  t15600 = -1.*t3491*t3701;
  t15604 = t15600 + t9769;
  t15631 = -1.*t3405*t3491*t3704;
  t15633 = -1.*t3319*t3491*t3710;
  t15634 = t9769 + t15631 + t15633;
  t15848 = t3491*t15801;
  t15647 = t3405*t3376*t3704;
  t15648 = t3319*t3376*t3710;
  t15649 = t9783 + t15647 + t15648;
  t15852 = -1.*t15485*t3690;
  t15854 = -1.*t15801*t3560;
  t15877 = t15774*t3418;
  t15883 = -1.*t15774*t3550;
  t15886 = -1.*t15793*t3736;
  t15833 = t3424*t15485;
  t15834 = -1.*t3493*t15809;
  t15836 = t15833 + t15834;
  t15688 = t3319*t3704;
  t15689 = -1.*t3405*t3710;
  t15697 = t15688 + t15689;
  t15922 = t3536*t15774;
  t15928 = -1.*t15774*t3418;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t3256*t3418 - 1.*t3423*t3500)*var2[1] + t3512*var2[2];
  p_output1[10]=(t3423*t3493*t3525 - 1.*t3256*t3536)*var2[1] + (t3256*t3493*t3525 + t3423*t3536)*var2[2];
  p_output1[11]=(-1.*t3256*t3550 - 1.*t3423*t3570)*var2[1] + t3588*var2[2];
  p_output1[12]=t3500*var2[0] - 1.*t3256*t3598*var2[1] + t3423*t3598*var2[2] + (t3608*(t3493*t3525*t3721 + t3493*t3525*t3725) + t3570*t3760 + t3424*t3525*(t3570*t3721 + t3570*t3725 + t3608*t3747 + t3747*t3774) - 1.*t3493*t3525*t3799)*var2[3];
  p_output1[13]=-1.*t3493*t3525*var2[0] + t3256*t3424*t3525*var2[1] - 1.*t3423*t3424*t3525*var2[2] + ((-1.*t3570*t3721 - 1.*t3570*t3725 - 1.*t3608*t3747 - 1.*t3747*t3774)*t3884 + t3608*(t3500*t3721 + t3500*t3725 + t3598*t3747 + t3747*t3884) + t3500*t3897 + t3570*t3917)*var2[3];
  p_output1[14]=t3570*var2[0] - 1.*t3256*t3774*var2[1] + t3423*t3774*var2[2] + ((-1.*t3493*t3525*t3721 - 1.*t3493*t3525*t3725)*t3884 + t3424*t3525*(-1.*t3500*t3721 - 1.*t3500*t3725 - 1.*t3598*t3747 - 1.*t3747*t3884) + t3500*t3979 - 1.*t3493*t3525*t6137)*var2[3];
  p_output1[15]=t6310 + t6555 + t6563 + (t8026 + t3608*(t6766 + t6784 - 1.*t3525*t6726*t8044 - 1.*t3525*t6726*t8110 + t8114 + t8221) + t3424*t3525*(-1.*t3493*t3570*t6726 + t3424*t3608*t6726 + t6890 + t6933 + t9710 + t9721) + t9727)*var2[3] + (t6568 + t3550*(-1.*t3525*t6726 + t6766 + t6779 + t6784) + t3536*(t3566*t6726 + t6890 + t6927 + t6933) + t7915)*var2[4];
  p_output1[16]=t9737 + t9749 + t9757 + (t15114 + t15115 + t3884*(t3493*t3570*t6726 - 1.*t3424*t3608*t6726 + t9761 + t9764 + t9797 + t9799) + t3608*(t11737 - 1.*t3493*t3500*t6726 + t3424*t3884*t6726 + t9775 + t9779 + t9814))*var2[3] + (t3418*(-1.*t3566*t6726 + t9761 + t9763 + t9764) + t9772 + t3550*(t3497*t6726 + t9775 + t9777 + t9779) + t9790)*var2[4];
  p_output1[17]=t15128 + t15136 + t15140 + (t15235 + t15255 + t3424*t3525*(t15207 + t15209 + t15247 + t15248 + t3493*t3500*t6726 - 1.*t3424*t3884*t6726) + t3884*(t15162 + t15167 + t15238 + t15239 + t3525*t6726*t8044 + t3525*t6726*t8110))*var2[3] + (t15157 + t15228 + t3536*(t15207 + t15208 + t15209 - 1.*t3497*t6726) + t3418*(t15162 + t15163 + t15167 + t3525*t6726))*var2[4];
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
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=t6310 + t6555 + t6563 + (t8026 + t3608*(t15285 + t6766 - 1.*t15280*t3525*t8044 - 1.*t15280*t3525*t8110 + t8114 + t8221) + t3424*t3525*(t15293 - 1.*t15280*t3493*t3570 + t15280*t3424*t3608 + t6890 + t9710 + t9721) + t9727)*var2[3] + (t6568 + t3550*(t15285 - 1.*t15280*t3525 + t6766 + t6779) + t3536*(t15293 + t15280*t3566 + t6890 + t6927) + t7915)*var2[4] + t3560*(-1.*t15269*t3319 + t15265*t3405 - 1.*t3405*t3704 - 1.*t3319*t3710)*var2[5];
  p_output1[46]=t9737 + t9749 + t9757 + (t15114 + t15115 + t3884*(t15391 + t15280*t3493*t3570 - 1.*t15280*t3424*t3608 + t9761 + t9797 + t9799) + t3608*(t11737 + t15397 - 1.*t15280*t3493*t3500 + t15280*t3424*t3884 + t9775 + t9814))*var2[3] + (t3418*(t15391 - 1.*t15280*t3566 + t9761 + t9763) + t9772 + t3550*(t15397 + t15280*t3497 + t9775 + t9777) + t9790)*var2[4] + (t3560*(t15265*t3319*t3376 + t15269*t3376*t3405 - 1.*t3319*t3376*t3704 + t3376*t3405*t3710) + t3491*(-1.*t15265*t3319*t3491 - 1.*t15269*t3405*t3491 + t3319*t3491*t3704 - 1.*t3405*t3491*t3710))*var2[5];
  p_output1[47]=t15128 + t15136 + t15140 + (t15235 + t15255 + t3424*t3525*(t15207 + t15247 + t15248 + t15459 + t15280*t3493*t3500 - 1.*t15280*t3424*t3884) + t3884*(t15162 + t15238 + t15239 + t15450 + t15280*t3525*t8044 + t15280*t3525*t8110))*var2[3] + (t15157 + t15228 + t3418*(t15162 + t15163 + t15450 + t15280*t3525) + (t15207 + t15208 + t15459 - 1.*t15280*t3497)*t3536)*var2[4] + t3491*(t15269*t3319 - 1.*t15265*t3405 + t3405*t3704 + t3319*t3710)*var2[5];
  p_output1[48]=t15489 + t15499*var2[0] + (-1.*t15509*t3256 + t15503*t3423)*var2[1] + (t15503*t3256 + t15509*t3423)*var2[2] + ((t15524 - 1.*t15545*t3424*t3525 + t15549*t3493*t3525)*t3608 + t3760*t3884 + t3424*t3525*(t15537 + t15549*t3570 + t15545*t3608 + t3909 + t3910 + t3916))*var2[3] + ((t15524 - 1.*t15527*t3525)*t3550 + t3418*t6565 + t3536*(t15537 + t15534*t3560 + t15527*t3566 + t3909 + t9783 + t9786))*var2[4] + t15492*t3491*var2[5];
  p_output1[49]=(t3608*(t15653 + t15658 + t15549*t3500 + t15499*t3725 + t15509*t3747 + t15545*t3884) + t15499*t3897 + t3884*t3917 + t3884*(t15665 - 1.*t15549*t3570 - 1.*t15545*t3608 + t6073 + t6078 + t6082))*var2[3] + (t3550*(t15589 + t15597 + t15653 + t15658 + t15527*t3497 + t15497*t3719) + t3418*(t15222 + t15226 + t15611 + t15665 - 1.*t15527*t3566 + t6073) + t15503*t9771 + t3418*t9787)*var2[4] + (t15634*t3376 + t15649*t3491 + t3560*(t15589 + t15597 + t15520*t15616*t3376 + t15520*t15618*t3376 + t15485*t3405*t3704 + t15485*t3319*t3710) + t3491*(t15222 + t15611 - 1.*t15520*t15616*t3491 - 1.*t15520*t15618*t3491 - 1.*t3376*t3405*t3704 - 1.*t3319*t3376*t3710))*var2[5] + (t15604*t3376 + t15587*t3491 + t3560*(t15589 + t15597 + t15520*t3376 + t15485*t3701) + t3491*(t15222 + t15611 - 1.*t15520*t3491 - 1.*t3376*t3701))*var2[15];
  p_output1[50]=t3884*var2[0] + t3512*var2[1] + (t3256*t3418 + t3423*t3500)*var2[2] + ((t15706 + t15545*t3424*t3525 - 1.*t15549*t3493*t3525)*t3884 + t3424*t3525*(t15715 + t15717 - 1.*t15549*t3500 - 1.*t15499*t3725 - 1.*t15509*t3747 - 1.*t15545*t3884) + t15499*t3979)*var2[3] + (t15156*t15503 + t3418*(t15706 + t15527*t3525) + t3536*(t15715 + t15717 - 1.*t15534*t3491 - 1.*t15527*t3497 - 1.*t3376*t3690 - 1.*t15497*t3719))*var2[4] + t15697*t3376*var2[5];
  p_output1[51]=t15489 + t3608*var2[0] + t3588*var2[1] + (t3256*t3550 + t3423*t3570)*var2[2] + ((t15775 - 1.*t15818*t3424*t3525 + t15822*t3493*t3525)*t3608 + t3424*t3525*(t15803 + t15805 + t15822*t3570 + t15818*t3608 + t15828*t3725 + t15836*t3747) + t15828*t3760)*var2[3] + ((t15775 - 1.*t15781*t3525)*t3550 + t3536*(t15803 + t15805 + t15801*t3560 + t15781*t3566 + t15485*t3690 + t15809*t3719) + t15793*t6565)*var2[4] + t15485*t15492*var2[5] + (0.28121*t3336 - 0.27*Power(t3336,2) + t3336*t3687)*var2[16];
  p_output1[52]=((t15883 + t15886 - 1.*t15822*t3570 - 1.*t15818*t3608 - 1.*t15828*t3725 - 1.*t15836*t3747)*t3884 + t3608*(t15877 + t15822*t3500 + t3789 + t3797 + t3798 + t15818*t3884) + t3608*t3897 + t15828*t3917)*var2[3] + (t3418*(t15852 + t15854 + t15883 + t15886 - 1.*t15781*t3566 - 1.*t15809*t3719) + t3550*(t15848 + t15877 + t15781*t3497 + t3789 + t6954 + t6956) + t3550*t9771 + t15793*t9787)*var2[4] + (t15485*t15649 + t15634*t3560 + t3491*(t15852 + t15854 - 1.*t15616*t15766*t3491 - 1.*t15618*t15766*t3491 - 1.*t3405*t3560*t3704 - 1.*t3319*t3560*t3710) + t3560*(t15848 + t15616*t15766*t3376 + t15618*t15766*t3376 + t3405*t3491*t3704 + t3319*t3491*t3710 + t6954))*var2[5] + (t15485*t15587 + t15604*t3560 + t3491*(t15852 + t15854 - 1.*t15766*t3491 - 1.*t3560*t3701) + t3560*(t15848 + t15766*t3376 + t3491*t3701 + t6954))*var2[15];
  p_output1[53]=t15828*var2[0] + (-1.*t15836*t3256 + t15793*t3423)*var2[1] + (t15793*t3256 + t15836*t3423)*var2[2] + ((t15922 + t15818*t3424*t3525 - 1.*t15822*t3493*t3525)*t3884 + t3424*t3525*(t15928 - 1.*t15822*t3500 - 1.*t15818*t3884 + t3891 + t3892 + t3896) + t3608*t3979)*var2[3] + (t3418*(t15922 + t15781*t3525) + t15156*t3550 + t3536*(t15928 - 1.*t15801*t3491 - 1.*t15781*t3497 + t3891 + t9769 + t9770))*var2[4] + t15697*t3560*var2[5] + (-0.28121*t3360 + 0.27*t3336*t3360 - 1.*t3360*t3687)*var2[16];
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

#include "dJh_RrFoot_DiagonalStance2.hh"

namespace SymFunction
{

void dJh_RrFoot_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
