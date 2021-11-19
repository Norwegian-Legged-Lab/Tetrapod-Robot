/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:32:11 GMT+01:00
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
  double t29;
  double t362;
  double t610;
  double t793;
  double t898;
  double t918;
  double t118;
  double t2014;
  double t2420;
  double t2459;
  double t2502;
  double t2653;
  double t2727;
  double t2784;
  double t2193;
  double t2289;
  double t2297;
  double t2668;
  double t2674;
  double t2685;
  double t2930;
  double t2965;
  double t2966;
  double t3004;
  double t2803;
  double t2835;
  double t2838;
  double t2862;
  double t2889;
  double t2913;
  double t3454;
  double t3262;
  double t3267;
  double t3282;
  double t3283;
  double t3031;
  double t3035;
  double t3040;
  double t3043;
  double t3045;
  double t3057;
  double t1009;
  double t1567;
  double t2029;
  double t2094;
  double t2390;
  double t2639;
  double t2657;
  double t2662;
  double t2698;
  double t2702;
  double t2713;
  double t3560;
  double t3561;
  double t3565;
  double t3572;
  double t3576;
  double t3582;
  double t2926;
  double t2988;
  double t3019;
  double t3024;
  double t3071;
  double t3073;
  double t3195;
  double t3309;
  double t3332;
  double t3439;
  double t3440;
  double t3518;
  double t3528;
  double t3626;
  double t3627;
  double t3629;
  double t3597;
  double t3611;
  double t3613;
  double t3631;
  double t3632;
  double t3635;
  double t3455;
  double t3469;
  double t3567;
  double t3589;
  double t3621;
  double t3630;
  double t3649;
  double t3650;
  double t3651;
  double t3652;
  double t3653;
  double t3655;
  double t3657;
  double t3658;
  double t3668;
  double t3669;
  double t3670;
  double t3673;
  double t3682;
  double t3684;
  double t3687;
  double t3690;
  double t3727;
  double t3729;
  double t3734;
  double t3759;
  double t3760;
  double t3763;
  double t3764;
  double t3770;
  double t3777;
  double t3782;
  double t3784;
  double t3747;
  double t3749;
  double t3753;
  double t3754;
  double t3874;
  double t3877;
  double t3885;
  double t3889;
  double t3848;
  double t3849;
  double t3856;
  double t3860;
  double t3905;
  double t3906;
  double t3994;
  double t3981;
  double t3984;
  double t3999;
  double t4003;
  double t4017;
  double t4019;
  double t4021;
  double t2728;
  double t2731;
  double t2734;
  double t2738;
  double t4026;
  double t4027;
  double t4028;
  double t4039;
  double t4042;
  double t4043;
  double t4053;
  double t4055;
  double t4057;
  double t4064;
  double t4079;
  double t4082;
  double t4085;
  double t4086;
  double t4068;
  double t4069;
  double t4070;
  double t4072;
  double t4139;
  double t4144;
  double t4145;
  double t4161;
  double t4167;
  double t4180;
  double t4184;
  double t4189;
  double t4191;
  double t4212;
  double t4256;
  double t4258;
  double t4262;
  double t4267;
  double t4215;
  double t4217;
  double t4227;
  double t4245;
  double t4333;
  double t4335;
  double t4341;
  double t4348;
  double t4357;
  double t4360;
  double t4368;
  double t4374;
  double t4380;
  double t4395;
  double t4396;
  double t4400;
  double t4415;
  double t4420;
  double t4421;
  double t4405;
  double t4409;
  double t4411;
  double t4429;
  double t4430;
  double t4431;
  double t3694;
  double t3697;
  double t3702;
  double t3705;
  double t4496;
  double t4498;
  double t4499;
  double t4518;
  double t4519;
  double t4522;
  double t4524;
  double t4549;
  double t4551;
  double t4556;
  double t4530;
  double t4531;
  double t4545;
  double t4574;
  double t4576;
  double t4577;
  double t3711;
  double t3714;
  double t3717;
  double t3720;
  double t3723;
  double t3724;
  double t3736;
  double t3740;
  double t3741;
  double t4632;
  double t4636;
  double t4638;
  double t4652;
  double t4653;
  double t4654;
  double t4656;
  double t4663;
  double t4664;
  double t4665;
  double t4671;
  double t4642;
  double t4644;
  double t4645;
  double t4646;
  double t3863;
  double t3867;
  double t3871;
  double t3895;
  double t3897;
  double t3900;
  double t3909;
  double t3914;
  double t3918;
  double t4763;
  double t4788;
  double t4804;
  double t4805;
  double t4749;
  double t4750;
  double t4757;
  double t4759;
  double t4808;
  double t4809;
  double t4854;
  double t4855;
  double t4986;
  double t4987;
  double t4988;
  double t4992;
  double t4999;
  double t5004;
  double t5009;
  double t5012;
  double t5013;
  double t5016;
  double t5047;
  double t5048;
  double t5049;
  double t5050;
  double t5028;
  double t5036;
  double t5041;
  double t5044;
  double t5098;
  double t5099;
  double t5103;
  double t5108;
  double t5113;
  double t5116;
  double t5118;
  double t5120;
  double t5138;
  double t5140;
  double t5141;
  double t5126;
  double t5135;
  double t5136;
  double t5146;
  double t5149;
  double t5150;
  double t5195;
  double t5199;
  double t5201;
  double t5205;
  double t5207;
  double t5211;
  double t5213;
  double t5227;
  double t5230;
  double t5231;
  double t5219;
  double t5220;
  double t5223;
  double t5241;
  double t5243;
  double t5253;
  double t5308;
  double t5315;
  double t5319;
  double t5345;
  double t5346;
  double t5347;
  double t5365;
  double t5366;
  double t5367;
  double t5371;
  double t5333;
  double t5336;
  double t5338;
  double t5341;
  double t5429;
  double t5431;
  double t5432;
  double t5434;
  double t5422;
  double t5423;
  double t5425;
  double t5427;
  double t5438;
  double t5440;
  t29 = Sin(var1[4]);
  t362 = Cos(var1[6]);
  t610 = -1.*t362;
  t793 = 1. + t610;
  t898 = 0.15121*t793;
  t918 = Sin(var1[6]);
  t118 = Sin(var1[5]);
  t2014 = Cos(var1[5]);
  t2420 = Cos(var1[7]);
  t2459 = -1.*t2420;
  t2502 = 1. + t2459;
  t2653 = Sin(var1[7]);
  t2727 = Cos(var1[4]);
  t2784 = -1. + t2420;
  t2193 = t362*t29*t118;
  t2289 = t2014*t29*t918;
  t2297 = t2193 + t2289;
  t2668 = -1.*t2014*t362*t29;
  t2674 = t29*t118*t918;
  t2685 = t2668 + t2674;
  t2930 = Cos(var1[8]);
  t2965 = -1.*t2930;
  t2966 = 1. + t2965;
  t3004 = Sin(var1[8]);
  t2803 = 4.e-6*t2727*t2784;
  t2835 = 1.6e-11*t2784;
  t2838 = 1. + t2835;
  t2862 = t2838*t2297;
  t2889 = 4.e-6*t2685*t2653;
  t2913 = t2803 + t2862 + t2889;
  t3454 = -1. + t2930;
  t3262 = t2727*t2420;
  t3267 = 4.e-6*t2784*t2297;
  t3282 = t2685*t2653;
  t3283 = t3262 + t3267 + t3282;
  t3031 = -1.000000000016*t2502;
  t3035 = 1. + t3031;
  t3040 = t3035*t2685;
  t3043 = -1.*t2727*t2653;
  t3045 = -4.e-6*t2297*t2653;
  t3057 = t3040 + t3043 + t3045;
  t1009 = -0.15121*t918;
  t1567 = t898 + t1009;
  t2029 = 0.15121*t918;
  t2094 = t898 + t2029;
  t2390 = -1.2484e-7*var1[7];
  t2639 = -1.5499600000248e-7*t2502;
  t2657 = 1.124840000016e-6*t2653;
  t2662 = t2390 + t2639 + t2657;
  t2698 = 0.281210000008499*t2502;
  t2702 = 0.03874900000062*t2653;
  t2713 = t2698 + t2702;
  t3560 = -1.*t2727*t2014*t362;
  t3561 = t2727*t118*t918;
  t3565 = t3560 + t3561;
  t3572 = -1.*t2727*t362*t118;
  t3576 = -1.*t2727*t2014*t918;
  t3582 = t3572 + t3576;
  t2926 = -1.284e-8*var1[8];
  t2988 = -1.5499600000248e-7*t2966;
  t3019 = 2.012840000032e-6*t3004;
  t3024 = t2926 + t2988 + t3019;
  t3071 = 0.503210000016051*t2966;
  t3073 = 0.03874900000062*t3004;
  t3195 = t3071 + t3073;
  t3309 = 5.136e-14*var1[8];
  t3332 = -0.03874900000062*t2966;
  t3439 = 0.503210000008*t3004;
  t3440 = t3309 + t3332 + t3439;
  t3518 = -1.000000000016*t2966;
  t3528 = 1. + t3518;
  t3626 = t3035*t3582;
  t3627 = -4.e-6*t3565*t2653;
  t3629 = t3626 + t3627;
  t3597 = t2838*t3565;
  t3611 = 4.e-6*t3582*t2653;
  t3613 = t3597 + t3611;
  t3631 = 4.e-6*t2784*t3565;
  t3632 = t3582*t2653;
  t3635 = t3631 + t3632;
  t3455 = 1.6e-11*t3454;
  t3469 = 1. + t3455;
  t3567 = t3565*t2662;
  t3589 = t3582*t2713;
  t3621 = t3613*t3024;
  t3630 = t3629*t3195;
  t3649 = t3635*t3440;
  t3650 = t3528*t3629;
  t3651 = -4.e-6*t3613*t3004;
  t3652 = -1.*t3635*t3004;
  t3653 = t3650 + t3651 + t3652;
  t3655 = 0.80321*t3653;
  t3657 = t3469*t3613;
  t3658 = 4.e-6*t3454*t3635;
  t3668 = 4.e-6*t3629*t3004;
  t3669 = t3657 + t3658 + t3668;
  t3670 = 0.14871*t3669;
  t3673 = 4.e-6*t3454*t3613;
  t3682 = t2930*t3635;
  t3684 = t3629*t3004;
  t3687 = t3673 + t3682 + t3684;
  t3690 = -0.03875*t3687;
  t3727 = t2727*t2014*t362;
  t3729 = -1.*t2727*t118*t918;
  t3734 = t3727 + t3729;
  t3759 = -1.*t2420*t29;
  t3760 = -4.e-6*t2420*t3582;
  t3763 = -1.000000000016*t3734*t2653;
  t3764 = t3759 + t3760 + t3763;
  t3770 = t2420*t3734;
  t3777 = -1.*t29*t2653;
  t3782 = -4.e-6*t3582*t2653;
  t3784 = t3770 + t3777 + t3782;
  t3747 = 4.e-6*t2420*t3734;
  t3749 = -4.e-6*t29*t2653;
  t3753 = -1.6e-11*t3582*t2653;
  t3754 = t3747 + t3749 + t3753;
  t3874 = 4.e-6*t2784*t29;
  t3877 = t2838*t3582;
  t3885 = 4.e-6*t3734*t2653;
  t3889 = t3874 + t3877 + t3885;
  t3848 = t2420*t29;
  t3849 = 4.e-6*t2784*t3582;
  t3856 = t3734*t2653;
  t3860 = t3848 + t3849 + t3856;
  t3905 = t3035*t3734;
  t3906 = t3905 + t3777 + t3782;
  t3994 = Cos(var1[3]);
  t3981 = Sin(var1[3]);
  t3984 = -1.*t2014*t3981;
  t3999 = -1.*t3994*t29*t118;
  t4003 = t3984 + t3999;
  t4017 = t3994*t2014*t29;
  t4019 = -1.*t3981*t118;
  t4021 = t4017 + t4019;
  t2728 = 4.9936e-13*var1[7];
  t2731 = -0.03874900000062*t2502;
  t2734 = 0.281210000004*t2653;
  t2738 = t2728 + t2731 + t2734;
  t4026 = t362*t4003;
  t4027 = -1.*t4021*t918;
  t4028 = t4026 + t4027;
  t4039 = t362*t4021;
  t4042 = t4003*t918;
  t4043 = t4039 + t4042;
  t4053 = -4.e-6*t3994*t2727*t2784;
  t4055 = t2838*t4028;
  t4057 = 4.e-6*t4043*t2653;
  t4064 = t4053 + t4055 + t4057;
  t4079 = -1.*t3994*t2727*t2420;
  t4082 = 4.e-6*t2784*t4028;
  t4085 = t4043*t2653;
  t4086 = t4079 + t4082 + t4085;
  t4068 = t3035*t4043;
  t4069 = t3994*t2727*t2653;
  t4070 = -4.e-6*t4028*t2653;
  t4072 = t4068 + t4069 + t4070;
  t4139 = -1.*t2727*t362*t3981*t118;
  t4144 = -1.*t2727*t2014*t3981*t918;
  t4145 = t4139 + t4144;
  t4161 = t2727*t2014*t362*t3981;
  t4167 = -1.*t2727*t3981*t118*t918;
  t4180 = t4161 + t4167;
  t4184 = 4.e-6*t2784*t3981*t29;
  t4189 = t2838*t4145;
  t4191 = 4.e-6*t4180*t2653;
  t4212 = t4184 + t4189 + t4191;
  t4256 = t2420*t3981*t29;
  t4258 = 4.e-6*t2784*t4145;
  t4262 = t4180*t2653;
  t4267 = t4256 + t4258 + t4262;
  t4215 = t3035*t4180;
  t4217 = -1.*t3981*t29*t2653;
  t4227 = -4.e-6*t4145*t2653;
  t4245 = t4215 + t4217 + t4227;
  t4333 = -1.*t2014*t3981*t29;
  t4335 = -1.*t3994*t118;
  t4341 = t4333 + t4335;
  t4348 = t3994*t2014;
  t4357 = -1.*t3981*t29*t118;
  t4360 = t4348 + t4357;
  t4368 = t362*t4341;
  t4374 = -1.*t4360*t918;
  t4380 = t4368 + t4374;
  t4395 = t362*t4360;
  t4396 = t4341*t918;
  t4400 = t4395 + t4396;
  t4415 = t3035*t4400;
  t4420 = -4.e-6*t4380*t2653;
  t4421 = t4415 + t4420;
  t4405 = t2838*t4380;
  t4409 = 4.e-6*t4400*t2653;
  t4411 = t4405 + t4409;
  t4429 = 4.e-6*t2784*t4380;
  t4430 = t4400*t2653;
  t4431 = t4429 + t4430;
  t3694 = -0.15121*t362;
  t3697 = t3694 + t2029;
  t3702 = 0.15121*t362;
  t3705 = t3702 + t2029;
  t4496 = t2014*t3981*t29;
  t4498 = t3994*t118;
  t4499 = t4496 + t4498;
  t4518 = -1.*t362*t4499;
  t4519 = t4518 + t4374;
  t4522 = -1.*t4499*t918;
  t4524 = t4395 + t4522;
  t4549 = t3035*t4524;
  t4551 = -4.e-6*t4519*t2653;
  t4556 = t4549 + t4551;
  t4530 = t2838*t4519;
  t4531 = 4.e-6*t4524*t2653;
  t4545 = t4530 + t4531;
  t4574 = 4.e-6*t2784*t4519;
  t4576 = t4524*t2653;
  t4577 = t4574 + t4576;
  t3711 = 0.281210000004*t2420;
  t3714 = -0.03874900000062*t2653;
  t3717 = 4.9936e-13 + t3711 + t3714;
  t3720 = 1.124840000016e-6*t2420;
  t3723 = -1.5499600000248e-7*t2653;
  t3724 = -1.2484e-7 + t3720 + t3723;
  t3736 = 0.03874900000062*t2420;
  t3740 = 0.281210000008499*t2653;
  t3741 = t3736 + t3740;
  t4632 = t362*t4499;
  t4636 = t4360*t918;
  t4638 = t4632 + t4636;
  t4652 = t2727*t2420*t3981;
  t4653 = -4.e-6*t2420*t4524;
  t4654 = -1.000000000016*t4638*t2653;
  t4656 = t4652 + t4653 + t4654;
  t4663 = t2420*t4638;
  t4664 = t2727*t3981*t2653;
  t4665 = -4.e-6*t4524*t2653;
  t4671 = t4663 + t4664 + t4665;
  t4642 = 4.e-6*t2420*t4638;
  t4644 = 4.e-6*t2727*t3981*t2653;
  t4645 = -1.6e-11*t4524*t2653;
  t4646 = t4642 + t4644 + t4645;
  t3863 = 0.503210000008*t2930;
  t3867 = -0.03874900000062*t3004;
  t3871 = 5.136e-14 + t3863 + t3867;
  t3895 = 2.012840000032e-6*t2930;
  t3897 = -1.5499600000248e-7*t3004;
  t3900 = -1.284e-8 + t3895 + t3897;
  t3909 = 0.03874900000062*t2930;
  t3914 = 0.503210000016051*t3004;
  t3918 = t3909 + t3914;
  t4763 = -4.e-6*t2727*t2784*t3981;
  t4788 = t2838*t4524;
  t4804 = 4.e-6*t4638*t2653;
  t4805 = t4763 + t4788 + t4804;
  t4749 = -1.*t2727*t2420*t3981;
  t4750 = 4.e-6*t2784*t4524;
  t4757 = t4638*t2653;
  t4759 = t4749 + t4750 + t4757;
  t4808 = t3035*t4638;
  t4809 = t4808 + t4664 + t4665;
  t4854 = -4.e-6*t4805*t3004;
  t4855 = -1.*t4759*t3004;
  t4986 = t3994*t2727*t362*t118;
  t4987 = t3994*t2727*t2014*t918;
  t4988 = t4986 + t4987;
  t4992 = -1.*t3994*t2727*t2014*t362;
  t4999 = t3994*t2727*t118*t918;
  t5004 = t4992 + t4999;
  t5009 = -4.e-6*t3994*t2784*t29;
  t5012 = t2838*t4988;
  t5013 = 4.e-6*t5004*t2653;
  t5016 = t5009 + t5012 + t5013;
  t5047 = -1.*t3994*t2420*t29;
  t5048 = 4.e-6*t2784*t4988;
  t5049 = t5004*t2653;
  t5050 = t5047 + t5048 + t5049;
  t5028 = t3035*t5004;
  t5036 = t3994*t29*t2653;
  t5041 = -4.e-6*t4988*t2653;
  t5044 = t5028 + t5036 + t5041;
  t5098 = t2014*t3981;
  t5099 = t3994*t29*t118;
  t5103 = t5098 + t5099;
  t5108 = -1.*t5103*t918;
  t5113 = t4039 + t5108;
  t5116 = t362*t5103;
  t5118 = t4021*t918;
  t5120 = t5116 + t5118;
  t5138 = t3035*t5120;
  t5140 = -4.e-6*t5113*t2653;
  t5141 = t5138 + t5140;
  t5126 = t2838*t5113;
  t5135 = 4.e-6*t5120*t2653;
  t5136 = t5126 + t5135;
  t5146 = 4.e-6*t2784*t5113;
  t5149 = t5120*t2653;
  t5150 = t5146 + t5149;
  t5195 = -1.*t3994*t2014*t29;
  t5199 = t3981*t118;
  t5201 = t5195 + t5199;
  t5205 = -1.*t362*t5201;
  t5207 = t5205 + t5108;
  t5211 = -1.*t5201*t918;
  t5213 = t5116 + t5211;
  t5227 = t3035*t5213;
  t5230 = -4.e-6*t5207*t2653;
  t5231 = t5227 + t5230;
  t5219 = t2838*t5207;
  t5220 = 4.e-6*t5213*t2653;
  t5223 = t5219 + t5220;
  t5241 = 4.e-6*t2784*t5207;
  t5243 = t5213*t2653;
  t5253 = t5241 + t5243;
  t5308 = t362*t5201;
  t5315 = t5103*t918;
  t5319 = t5308 + t5315;
  t5345 = -4.e-6*t2420*t5213;
  t5346 = -1.000000000016*t5319*t2653;
  t5347 = t4079 + t5345 + t5346;
  t5365 = t2420*t5319;
  t5366 = -1.*t3994*t2727*t2653;
  t5367 = -4.e-6*t5213*t2653;
  t5371 = t5365 + t5366 + t5367;
  t5333 = 4.e-6*t2420*t5319;
  t5336 = -4.e-6*t3994*t2727*t2653;
  t5338 = -1.6e-11*t5213*t2653;
  t5341 = t5333 + t5336 + t5338;
  t5429 = 4.e-6*t3994*t2727*t2784;
  t5431 = t2838*t5213;
  t5432 = 4.e-6*t5319*t2653;
  t5434 = t5429 + t5431 + t5432;
  t5422 = t3994*t2727*t2420;
  t5423 = 4.e-6*t2784*t5213;
  t5425 = t5319*t2653;
  t5427 = t5422 + t5423 + t5425;
  t5438 = t3035*t5319;
  t5440 = t5438 + t5366 + t5367;
  p_output1[0]=1.;
  p_output1[1]=t2297*t2662 + t2685*t2713 + t2727*t2738 + t118*t1567*t29 - 1.*t2014*t2094*t29 + t2913*t3024 + t3057*t3195 + t3283*t3440 - 0.03875*(t3004*t3057 + t2930*t3283 + 4.e-6*t2913*t3454) + 0.14871*(4.e-6*t3004*t3057 + 4.e-6*t3283*t3454 + t2913*t3469) + 0.80321*(-4.e-6*t2913*t3004 - 1.*t3004*t3283 + t3057*t3528);
  p_output1[2]=-1.*t1567*t2014*t2727 - 1.*t118*t2094*t2727 + t3567 + t3589 + t3621 + t3630 + t3649 + t3655 + t3670 + t3690;
  p_output1[3]=t3567 + t3589 + t3621 + t3630 + t3649 + t3655 + t3670 + t3690 - 1.*t118*t2727*t3697 + t2014*t2727*t3705;
  p_output1[4]=t29*t3717 + t3582*t3724 + t3734*t3741 + t3024*t3754 + t3195*t3764 + t3440*t3784 - 0.03875*(4.e-6*t3454*t3754 + t3004*t3764 + t2930*t3784) + 0.80321*(-4.e-6*t3004*t3754 + t3528*t3764 - 1.*t3004*t3784) + 0.14871*(t3469*t3754 + 4.e-6*t3004*t3764 + 4.e-6*t3454*t3784);
  p_output1[5]=t3860*t3871 + t3889*t3900 + 0.14871*(-4.e-6*t3004*t3860 - 1.6e-11*t3004*t3889 + 4.e-6*t2930*t3906) - 0.03875*(-1.*t3004*t3860 - 4.e-6*t3004*t3889 + t2930*t3906) + 0.80321*(-1.*t2930*t3860 - 4.e-6*t2930*t3889 - 1.000000000016*t3004*t3906) + t3906*t3918;
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=-1.*t2727*t2738*t3994 + t1567*t4003 + t2094*t4021 + t2662*t4028 + t2713*t4043 + t3024*t4064 + t3195*t4072 + t3440*t4086 - 0.03875*(4.e-6*t3454*t4064 + t3004*t4072 + t2930*t4086) + 0.80321*(-4.e-6*t3004*t4064 + t3528*t4072 - 1.*t3004*t4086) + 0.14871*(t3469*t4064 + 4.e-6*t3004*t4072 + 4.e-6*t3454*t4086);
  p_output1[9]=-1.*t118*t1567*t2727*t3981 + t2014*t2094*t2727*t3981 + t2738*t29*t3981 + t2662*t4145 + t2713*t4180 + t3024*t4212 + t3195*t4245 + t3440*t4267 - 0.03875*(4.e-6*t3454*t4212 + t3004*t4245 + t2930*t4267) + 0.80321*(-4.e-6*t3004*t4212 + t3528*t4245 - 1.*t3004*t4267) + 0.14871*(t3469*t4212 + 4.e-6*t3004*t4245 + 4.e-6*t3454*t4267);
  p_output1[10]=t1567*t4341 + t2094*t4360 + t2662*t4380 + t2713*t4400 + t3024*t4411 + t3195*t4421 + t3440*t4431 - 0.03875*(4.e-6*t3454*t4411 + t3004*t4421 + t2930*t4431) + 0.80321*(-4.e-6*t3004*t4411 + t3528*t4421 - 1.*t3004*t4431) + 0.14871*(t3469*t4411 + 4.e-6*t3004*t4421 + 4.e-6*t3454*t4431);
  p_output1[11]=t3697*t4360 + t3705*t4499 + t2662*t4519 + t2713*t4524 + t3024*t4545 + t3195*t4556 + t3440*t4577 - 0.03875*(4.e-6*t3454*t4545 + t3004*t4556 + t2930*t4577) + 0.80321*(-4.e-6*t3004*t4545 + t3528*t4556 - 1.*t3004*t4577) + 0.14871*(t3469*t4545 + 4.e-6*t3004*t4556 + 4.e-6*t3454*t4577);
  p_output1[12]=-1.*t2727*t3717*t3981 + t3724*t4524 + t3741*t4638 + t3024*t4646 + t3195*t4656 + t3440*t4671 - 0.03875*(4.e-6*t3454*t4646 + t3004*t4656 + t2930*t4671) + 0.80321*(-4.e-6*t3004*t4646 + t3528*t4656 - 1.*t3004*t4671) + 0.14871*(t3469*t4646 + 4.e-6*t3004*t4656 + 4.e-6*t3454*t4671);
  p_output1[13]=t3871*t4759 + t3900*t4805 + t3918*t4809 + 0.14871*(-4.e-6*t3004*t4759 - 1.6e-11*t3004*t4805 + 4.e-6*t2930*t4809) + 0.80321*(-1.*t2930*t4759 - 4.e-6*t2930*t4805 - 1.000000000016*t3004*t4809) - 0.03875*(t2930*t4809 + t4854 + t4855);
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=-1.*t2727*t2738*t3981 + t1567*t4360 + t2094*t4499 + t2662*t4524 + t2713*t4638 + t3440*t4759 + t3024*t4805 + t3195*t4809 + 0.14871*(4.e-6*t3454*t4759 + t3469*t4805 + 4.e-6*t3004*t4809) - 0.03875*(t2930*t4759 + 4.e-6*t3454*t4805 + t3004*t4809) + 0.80321*(t3528*t4809 + t4854 + t4855);
  p_output1[17]=t118*t1567*t2727*t3994 - 1.*t2014*t2094*t2727*t3994 - 1.*t2738*t29*t3994 + t2662*t4988 + t2713*t5004 + t3024*t5016 + t3195*t5044 + t3440*t5050 - 0.03875*(4.e-6*t3454*t5016 + t3004*t5044 + t2930*t5050) + 0.80321*(-4.e-6*t3004*t5016 + t3528*t5044 - 1.*t3004*t5050) + 0.14871*(t3469*t5016 + 4.e-6*t3004*t5044 + 4.e-6*t3454*t5050);
  p_output1[18]=t1567*t4021 + t2094*t5103 + t2662*t5113 + t2713*t5120 + t3024*t5136 + t3195*t5141 + t3440*t5150 - 0.03875*(4.e-6*t3454*t5136 + t3004*t5141 + t2930*t5150) + 0.80321*(-4.e-6*t3004*t5136 + t3528*t5141 - 1.*t3004*t5150) + 0.14871*(t3469*t5136 + 4.e-6*t3004*t5141 + 4.e-6*t3454*t5150);
  p_output1[19]=t3697*t5103 + t3705*t5201 + t2662*t5207 + t2713*t5213 + t3024*t5223 + t3195*t5231 + t3440*t5253 - 0.03875*(4.e-6*t3454*t5223 + t3004*t5231 + t2930*t5253) + 0.80321*(-4.e-6*t3004*t5223 + t3528*t5231 - 1.*t3004*t5253) + 0.14871*(t3469*t5223 + 4.e-6*t3004*t5231 + 4.e-6*t3454*t5253);
  p_output1[20]=t2727*t3717*t3994 + t3724*t5213 + t3741*t5319 + t3024*t5341 + t3195*t5347 + t3440*t5371 - 0.03875*(4.e-6*t3454*t5341 + t3004*t5347 + t2930*t5371) + 0.80321*(-4.e-6*t3004*t5341 + t3528*t5347 - 1.*t3004*t5371) + 0.14871*(t3469*t5341 + 4.e-6*t3004*t5347 + 4.e-6*t3454*t5371);
  p_output1[21]=t3871*t5427 + t3900*t5434 + t3918*t5440 + 0.14871*(-4.e-6*t3004*t5427 - 1.6e-11*t3004*t5434 + 4.e-6*t2930*t5440) - 0.03875*(-1.*t3004*t5427 - 4.e-6*t3004*t5434 + t2930*t5440) + 0.80321*(-1.*t2930*t5427 - 4.e-6*t2930*t5434 - 1.000000000016*t3004*t5440);
  p_output1[22]=-1.;
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 23, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_h_FlFoot_ParallelStance2.hh"

namespace ParallelStance2
{

void J_h_FlFoot_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
