/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 15:18:32 GMT+01:00
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
static void output1(double *p_output1,const double *var1)
{
  double t480;
  double t497;
  double t519;
  double t534;
  double t549;
  double t569;
  double t485;
  double t622;
  double t988;
  double t1161;
  double t1241;
  double t1457;
  double t2383;
  double t2518;
  double t763;
  double t786;
  double t934;
  double t1747;
  double t1954;
  double t1955;
  double t2891;
  double t2896;
  double t2909;
  double t2997;
  double t2551;
  double t2592;
  double t2795;
  double t2844;
  double t2855;
  double t2856;
  double t3779;
  double t3633;
  double t3642;
  double t3659;
  double t3686;
  double t3462;
  double t3479;
  double t3484;
  double t3490;
  double t3497;
  double t3498;
  double t592;
  double t593;
  double t618;
  double t623;
  double t652;
  double t718;
  double t941;
  double t1318;
  double t1475;
  double t1713;
  double t1720;
  double t1994;
  double t1997;
  double t2157;
  double t2332;
  double t2400;
  double t2425;
  double t2488;
  double t2499;
  double t2513;
  double t2866;
  double t2950;
  double t3010;
  double t3214;
  double t3361;
  double t3501;
  double t3507;
  double t3511;
  double t3533;
  double t3699;
  double t3720;
  double t3737;
  double t3743;
  double t3758;
  double t3792;
  double t3796;
  double t3797;
  double t3844;
  double t3858;
  double t3866;
  double t3881;
  double t3897;
  double t3910;
  double t3915;
  double t3929;
  double t3952;
  double t3958;
  double t3966;
  double t4004;
  double t4017;
  double t3869;
  double t3928;
  double t4024;
  double t4059;
  double t4600;
  double t4593;
  double t4599;
  double t4603;
  double t4609;
  double t4615;
  double t4616;
  double t4620;
  double t4624;
  double t4626;
  double t4627;
  double t4632;
  double t4634;
  double t4636;
  double t4643;
  double t4644;
  double t4649;
  double t4652;
  double t4668;
  double t4675;
  double t4681;
  double t4682;
  double t4654;
  double t4661;
  double t4662;
  double t4664;
  double t4610;
  double t4622;
  double t4629;
  double t4638;
  double t4640;
  double t4653;
  double t4667;
  double t4685;
  double t4689;
  double t4695;
  double t4702;
  double t4707;
  double t4711;
  double t4717;
  double t4722;
  double t4737;
  double t4748;
  double t4749;
  double t4756;
  double t4785;
  double t4708;
  double t4746;
  double t4793;
  double t4797;
  double t5304;
  double t5308;
  double t5318;
  double t5320;
  double t5325;
  double t5359;
  double t5368;
  double t5370;
  double t5371;
  double t5380;
  double t5384;
  double t5385;
  double t5389;
  double t5390;
  double t5399;
  double t5407;
  double t5440;
  double t5448;
  double t5455;
  double t5456;
  double t5420;
  double t5421;
  double t5429;
  double t5430;
  double t5319;
  double t5362;
  double t5374;
  double t5387;
  double t5388;
  double t5410;
  double t5435;
  double t5458;
  double t5460;
  double t5466;
  double t5468;
  double t5470;
  double t5474;
  double t5475;
  double t5476;
  double t5477;
  double t5480;
  double t5481;
  double t5493;
  double t5494;
  double t5471;
  double t5479;
  double t5495;
  double t5497;
  double t4065;
  double t4125;
  double t4188;
  double t4221;
  double t4244;
  double t4295;
  double t4351;
  double t4385;
  double t4417;
  double t4464;
  double t4491;
  double t4515;
  double t4574;
  double t4585;
  double t5620;
  double t5624;
  double t5625;
  double t4889;
  double t4909;
  double t4948;
  double t4975;
  double t5074;
  double t5104;
  double t5128;
  double t5136;
  double t5147;
  double t5181;
  double t5188;
  double t5232;
  double t5289;
  double t5295;
  double t5697;
  double t5698;
  double t5699;
  double t5499;
  double t5511;
  double t5526;
  double t5531;
  double t5542;
  double t5555;
  double t5567;
  double t5576;
  double t5580;
  double t5591;
  double t5595;
  double t5599;
  double t5609;
  double t5617;
  double t5760;
  double t5761;
  double t5762;
  t480 = Cos(var1[4]);
  t497 = Cos(var1[6]);
  t519 = -1.*t497;
  t534 = 1. + t519;
  t549 = 0.15121*t534;
  t569 = Sin(var1[6]);
  t485 = Sin(var1[5]);
  t622 = Cos(var1[5]);
  t988 = Cos(var1[7]);
  t1161 = -1.*t988;
  t1241 = 1. + t1161;
  t1457 = Sin(var1[7]);
  t2383 = Sin(var1[4]);
  t2518 = -1. + t988;
  t763 = -1.*t480*t497*t485;
  t786 = -1.*t480*t622*t569;
  t934 = t763 + t786;
  t1747 = t480*t622*t497;
  t1954 = -1.*t480*t485*t569;
  t1955 = t1747 + t1954;
  t2891 = Cos(var1[8]);
  t2896 = -1.*t2891;
  t2909 = 1. + t2896;
  t2997 = Sin(var1[8]);
  t2551 = 4.e-6*t2518*t2383;
  t2592 = 1.6e-11*t2518;
  t2795 = 1. + t2592;
  t2844 = t2795*t934;
  t2855 = 4.e-6*t1955*t1457;
  t2856 = t2551 + t2844 + t2855;
  t3779 = -1. + t2891;
  t3633 = t988*t2383;
  t3642 = 4.e-6*t2518*t934;
  t3659 = t1955*t1457;
  t3686 = t3633 + t3642 + t3659;
  t3462 = -1.000000000016*t1241;
  t3479 = 1. + t3462;
  t3484 = t3479*t1955;
  t3490 = -1.*t2383*t1457;
  t3497 = -4.e-6*t934*t1457;
  t3498 = t3484 + t3490 + t3497;
  t592 = -0.15121*t569;
  t593 = t549 + t592;
  t618 = -1.*t480*t485*t593;
  t623 = 0.15121*t569;
  t652 = t549 + t623;
  t718 = t480*t622*t652;
  t941 = -1.2484e-7*var1[7];
  t1318 = -1.5499600000248e-7*t1241;
  t1475 = 1.124840000016e-6*t1457;
  t1713 = t941 + t1318 + t1475;
  t1720 = t934*t1713;
  t1994 = 0.281210000008499*t1241;
  t1997 = 0.03874900000062*t1457;
  t2157 = t1994 + t1997;
  t2332 = t1955*t2157;
  t2400 = 4.9936e-13*var1[7];
  t2425 = -0.03874900000062*t1241;
  t2488 = 0.281210000004*t1457;
  t2499 = t2400 + t2425 + t2488;
  t2513 = t2383*t2499;
  t2866 = -1.284e-8*var1[8];
  t2950 = -1.5499600000248e-7*t2909;
  t3010 = 2.012840000032e-6*t2997;
  t3214 = t2866 + t2950 + t3010;
  t3361 = t2856*t3214;
  t3501 = 0.503210000016051*t2909;
  t3507 = 0.03874900000062*t2997;
  t3511 = t3501 + t3507;
  t3533 = t3498*t3511;
  t3699 = 5.136e-14*var1[8];
  t3720 = -0.03874900000062*t2909;
  t3737 = 0.503210000008*t2997;
  t3743 = t3699 + t3720 + t3737;
  t3758 = t3686*t3743;
  t3792 = 1.6e-11*t3779;
  t3796 = 1. + t3792;
  t3797 = t3796*t2856;
  t3844 = 4.e-6*t3779*t3686;
  t3858 = 4.e-6*t3498*t2997;
  t3866 = t3797 + t3844 + t3858;
  t3881 = 4.e-6*t3779*t2856;
  t3897 = t2891*t3686;
  t3910 = t3498*t2997;
  t3915 = t3881 + t3897 + t3910;
  t3929 = -1.000000000016*t2909;
  t3952 = 1. + t3929;
  t3958 = t3952*t3498;
  t3966 = -4.e-6*t2856*t2997;
  t4004 = -1.*t3686*t2997;
  t4017 = t3958 + t3966 + t4004;
  t3869 = 0.159785*t3866;
  t3928 = -0.024974*t3915;
  t4024 = 0.502874*t4017;
  t4059 = var1[0] + t618 + t718 + t1720 + t2332 + t2513 + t3361 + t3533 + t3758 + t3869 + t3928 + t4024;
  t4600 = Sin(var1[3]);
  t4593 = Cos(var1[3]);
  t4599 = t4593*t622;
  t4603 = -1.*t4600*t2383*t485;
  t4609 = t4599 + t4603;
  t4615 = t622*t4600*t2383;
  t4616 = t4593*t485;
  t4620 = t4615 + t4616;
  t4624 = t497*t4609;
  t4626 = -1.*t4620*t569;
  t4627 = t4624 + t4626;
  t4632 = t497*t4620;
  t4634 = t4609*t569;
  t4636 = t4632 + t4634;
  t4643 = -4.e-6*t480*t2518*t4600;
  t4644 = t2795*t4627;
  t4649 = 4.e-6*t4636*t1457;
  t4652 = t4643 + t4644 + t4649;
  t4668 = -1.*t480*t988*t4600;
  t4675 = 4.e-6*t2518*t4627;
  t4681 = t4636*t1457;
  t4682 = t4668 + t4675 + t4681;
  t4654 = t3479*t4636;
  t4661 = t480*t4600*t1457;
  t4662 = -4.e-6*t4627*t1457;
  t4664 = t4654 + t4661 + t4662;
  t4610 = t4609*t593;
  t4622 = t4620*t652;
  t4629 = t4627*t1713;
  t4638 = t4636*t2157;
  t4640 = -1.*t480*t4600*t2499;
  t4653 = t4652*t3214;
  t4667 = t4664*t3511;
  t4685 = t4682*t3743;
  t4689 = t3796*t4652;
  t4695 = 4.e-6*t3779*t4682;
  t4702 = 4.e-6*t4664*t2997;
  t4707 = t4689 + t4695 + t4702;
  t4711 = 4.e-6*t3779*t4652;
  t4717 = t2891*t4682;
  t4722 = t4664*t2997;
  t4737 = t4711 + t4717 + t4722;
  t4748 = t3952*t4664;
  t4749 = -4.e-6*t4652*t2997;
  t4756 = -1.*t4682*t2997;
  t4785 = t4748 + t4749 + t4756;
  t4708 = 0.159785*t4707;
  t4746 = -0.024974*t4737;
  t4793 = 0.502874*t4785;
  t4797 = var1[1] + t4610 + t4622 + t4629 + t4638 + t4640 + t4653 + t4667 + t4685 + t4708 + t4746 + t4793;
  t5304 = t622*t4600;
  t5308 = t4593*t2383*t485;
  t5318 = t5304 + t5308;
  t5320 = -1.*t4593*t622*t2383;
  t5325 = t4600*t485;
  t5359 = t5320 + t5325;
  t5368 = t497*t5318;
  t5370 = -1.*t5359*t569;
  t5371 = t5368 + t5370;
  t5380 = t497*t5359;
  t5384 = t5318*t569;
  t5385 = t5380 + t5384;
  t5389 = 4.e-6*t4593*t480*t2518;
  t5390 = t2795*t5371;
  t5399 = 4.e-6*t5385*t1457;
  t5407 = t5389 + t5390 + t5399;
  t5440 = t4593*t480*t988;
  t5448 = 4.e-6*t2518*t5371;
  t5455 = t5385*t1457;
  t5456 = t5440 + t5448 + t5455;
  t5420 = t3479*t5385;
  t5421 = -1.*t4593*t480*t1457;
  t5429 = -4.e-6*t5371*t1457;
  t5430 = t5420 + t5421 + t5429;
  t5319 = t5318*t593;
  t5362 = t5359*t652;
  t5374 = t5371*t1713;
  t5387 = t5385*t2157;
  t5388 = t4593*t480*t2499;
  t5410 = t5407*t3214;
  t5435 = t5430*t3511;
  t5458 = t5456*t3743;
  t5460 = t3796*t5407;
  t5466 = 4.e-6*t3779*t5456;
  t5468 = 4.e-6*t5430*t2997;
  t5470 = t5460 + t5466 + t5468;
  t5474 = 4.e-6*t3779*t5407;
  t5475 = t2891*t5456;
  t5476 = t5430*t2997;
  t5477 = t5474 + t5475 + t5476;
  t5480 = t3952*t5430;
  t5481 = -4.e-6*t5407*t2997;
  t5493 = -1.*t5456*t2997;
  t5494 = t5480 + t5481 + t5493;
  t5471 = 0.159785*t5470;
  t5479 = -0.024974*t5477;
  t5495 = 0.502874*t5494;
  t5497 = var1[2] + t5319 + t5362 + t5374 + t5387 + t5388 + t5410 + t5435 + t5458 + t5471 + t5479 + t5495;
  t4065 = -0.027647*t3915;
  t4125 = -0.031524*t3915;
  t4188 = -0.041121*t3915;
  t4221 = -0.045802*t3915;
  t4244 = -0.052446*t3915;
  t4295 = -0.05369*t3915;
  t4351 = -0.053315*t3915;
  t4385 = -0.051361*t3915;
  t4417 = -0.048041*t3915;
  t4464 = -0.038848*t3915;
  t4491 = -0.033973*t3915;
  t4515 = -0.029615*t3915;
  t4574 = -0.024233*t3915;
  t4585 = -0.023793*t3915;
  t5620 = 0.142785*t3866;
  t5624 = 0.802874*t4017;
  t5625 = var1[0] + t618 + t718 + t1720 + t2332 + t2513 + t3361 + t3533 + t3758 + t5620 + t3928 + t5624;
  t4889 = -0.027647*t4737;
  t4909 = -0.031524*t4737;
  t4948 = -0.041121*t4737;
  t4975 = -0.045802*t4737;
  t5074 = -0.052446*t4737;
  t5104 = -0.05369*t4737;
  t5128 = -0.053315*t4737;
  t5136 = -0.051361*t4737;
  t5147 = -0.048041*t4737;
  t5181 = -0.038848*t4737;
  t5188 = -0.033973*t4737;
  t5232 = -0.029615*t4737;
  t5289 = -0.024233*t4737;
  t5295 = -0.023793*t4737;
  t5697 = 0.142785*t4707;
  t5698 = 0.802874*t4785;
  t5699 = var1[1] + t4610 + t4622 + t4629 + t4638 + t4640 + t4653 + t4667 + t4685 + t5697 + t4746 + t5698;
  t5499 = -0.027647*t5477;
  t5511 = -0.031524*t5477;
  t5526 = -0.041121*t5477;
  t5531 = -0.045802*t5477;
  t5542 = -0.052446*t5477;
  t5555 = -0.05369*t5477;
  t5567 = -0.053315*t5477;
  t5576 = -0.051361*t5477;
  t5580 = -0.048041*t5477;
  t5591 = -0.038848*t5477;
  t5595 = -0.033973*t5477;
  t5599 = -0.029615*t5477;
  t5609 = -0.024233*t5477;
  t5617 = -0.023793*t5477;
  t5760 = 0.142785*t5470;
  t5761 = 0.802874*t5494;
  t5762 = var1[2] + t5319 + t5362 + t5374 + t5387 + t5388 + t5410 + t5435 + t5458 + t5760 + t5479 + t5761;
  p_output1[0]=t4059;
  p_output1[1]=t1720 + t2332 + t2513 + t3361 + t3533 + t3758 + 0.15564*t3866 + 0.502639*t4017 + t4065 + t618 + t718 + var1[0];
  p_output1[2]=t1720 + t2332 + t2513 + t3361 + t3533 + t3758 + 0.152586*t3866 + 0.502466*t4017 + t4125 + t618 + t718 + var1[0];
  p_output1[3]=t1720 + t2332 + t2513 + t3361 + t3533 + t3758 + 0.150955*t3866 - 0.036184*t3915 + 0.502374*t4017 + t618 + t718 + var1[0];
  p_output1[4]=t1720 + t2332 + t2513 + t3361 + t3533 + t3758 + 0.150922*t3866 + 0.502372*t4017 + t4188 + t618 + t718 + var1[0];
  p_output1[5]=t1720 + t2332 + t2513 + t3361 + t3533 + t3758 + 0.152492*t3866 + 0.502461*t4017 + t4221 + t618 + t718 + var1[0];
  p_output1[6]=t1720 + t2332 + t2513 + t3361 + t3533 + t3758 + 0.155495*t3866 - 0.049719*t3915 + 0.502631*t4017 + t618 + t718 + var1[0];
  p_output1[7]=t1720 + t2332 + t2513 + t3361 + t3533 + t3758 + 0.159604*t3866 + 0.502864*t4017 + t4244 + t618 + t718 + var1[0];
  p_output1[8]=t1720 + t2332 + t2513 + t3361 + t3533 + t3758 + 0.164375*t3866 + 0.503134*t4017 + t4295 + t618 + t718 + var1[0];
  p_output1[9]=t1720 + t2332 + t2513 + t3361 + t3533 + t3758 + 0.169291*t3866 + 0.503413*t4017 + t4351 + t618 + t718 + var1[0];
  p_output1[10]=t1720 + t2332 + t2513 + t3361 + t3533 + t3758 + 0.173818*t3866 + 0.503669*t4017 + t4385 + t618 + t718 + var1[0];
  p_output1[11]=t1720 + t2332 + t2513 + t3361 + t3533 + t3758 + 0.177467*t3866 + 0.503876*t4017 + t4417 + t618 + t718 + var1[0];
  p_output1[12]=t1720 + t2332 + t2513 + t3361 + t3533 + t3758 + 0.179842*t3866 - 0.043714*t3915 + 0.504011*t4017 + t618 + t718 + var1[0];
  p_output1[13]=t1720 + t2332 + t2513 + t3361 + t3533 + t3758 + 0.180686*t3866 + 0.504059*t4017 + t4464 + t618 + t718 + var1[0];
  p_output1[14]=t1720 + t2332 + t2513 + t3361 + t3533 + t3758 + 0.179906*t3866 + 0.504014*t4017 + t4491 + t618 + t718 + var1[0];
  p_output1[15]=t1720 + t2332 + t2513 + t3361 + t3533 + t3758 + 0.177588*t3866 + 0.503883*t4017 + t4515 + t618 + t718 + var1[0];
  p_output1[16]=t1720 + t2332 + t2513 + t3361 + t3533 + t3758 + 0.173983*t3866 - 0.026247*t3915 + 0.503679*t4017 + t618 + t718 + var1[0];
  p_output1[17]=t1720 + t2332 + t2513 + t3361 + t3533 + t3758 + 0.169482*t3866 + 0.503424*t4017 + t4574 + t618 + t718 + var1[0];
  p_output1[18]=t1720 + t2332 + t2513 + t3361 + t3533 + t3758 + 0.164572*t3866 + 0.503145*t4017 + t4585 + t618 + t718 + var1[0];
  p_output1[19]=t4059;
  p_output1[20]=t4797;
  p_output1[21]=t4610 + t4622 + t4629 + t4638 + t4640 + t4653 + t4667 + t4685 + 0.15564*t4707 + 0.502639*t4785 + t4889 + var1[1];
  p_output1[22]=t4610 + t4622 + t4629 + t4638 + t4640 + t4653 + t4667 + t4685 + 0.152586*t4707 + 0.502466*t4785 + t4909 + var1[1];
  p_output1[23]=t4610 + t4622 + t4629 + t4638 + t4640 + t4653 + t4667 + t4685 + 0.150955*t4707 - 0.036184*t4737 + 0.502374*t4785 + var1[1];
  p_output1[24]=t4610 + t4622 + t4629 + t4638 + t4640 + t4653 + t4667 + t4685 + 0.150922*t4707 + 0.502372*t4785 + t4948 + var1[1];
  p_output1[25]=t4610 + t4622 + t4629 + t4638 + t4640 + t4653 + t4667 + t4685 + 0.152492*t4707 + 0.502461*t4785 + t4975 + var1[1];
  p_output1[26]=t4610 + t4622 + t4629 + t4638 + t4640 + t4653 + t4667 + t4685 + 0.155495*t4707 - 0.049719*t4737 + 0.502631*t4785 + var1[1];
  p_output1[27]=t4610 + t4622 + t4629 + t4638 + t4640 + t4653 + t4667 + t4685 + 0.159604*t4707 + 0.502864*t4785 + t5074 + var1[1];
  p_output1[28]=t4610 + t4622 + t4629 + t4638 + t4640 + t4653 + t4667 + t4685 + 0.164375*t4707 + 0.503134*t4785 + t5104 + var1[1];
  p_output1[29]=t4610 + t4622 + t4629 + t4638 + t4640 + t4653 + t4667 + t4685 + 0.169291*t4707 + 0.503413*t4785 + t5128 + var1[1];
  p_output1[30]=t4610 + t4622 + t4629 + t4638 + t4640 + t4653 + t4667 + t4685 + 0.173818*t4707 + 0.503669*t4785 + t5136 + var1[1];
  p_output1[31]=t4610 + t4622 + t4629 + t4638 + t4640 + t4653 + t4667 + t4685 + 0.177467*t4707 + 0.503876*t4785 + t5147 + var1[1];
  p_output1[32]=t4610 + t4622 + t4629 + t4638 + t4640 + t4653 + t4667 + t4685 + 0.179842*t4707 - 0.043714*t4737 + 0.504011*t4785 + var1[1];
  p_output1[33]=t4610 + t4622 + t4629 + t4638 + t4640 + t4653 + t4667 + t4685 + 0.180686*t4707 + 0.504059*t4785 + t5181 + var1[1];
  p_output1[34]=t4610 + t4622 + t4629 + t4638 + t4640 + t4653 + t4667 + t4685 + 0.179906*t4707 + 0.504014*t4785 + t5188 + var1[1];
  p_output1[35]=t4610 + t4622 + t4629 + t4638 + t4640 + t4653 + t4667 + t4685 + 0.177588*t4707 + 0.503883*t4785 + t5232 + var1[1];
  p_output1[36]=t4610 + t4622 + t4629 + t4638 + t4640 + t4653 + t4667 + t4685 + 0.173983*t4707 - 0.026247*t4737 + 0.503679*t4785 + var1[1];
  p_output1[37]=t4610 + t4622 + t4629 + t4638 + t4640 + t4653 + t4667 + t4685 + 0.169482*t4707 + 0.503424*t4785 + t5289 + var1[1];
  p_output1[38]=t4610 + t4622 + t4629 + t4638 + t4640 + t4653 + t4667 + t4685 + 0.164572*t4707 + 0.503145*t4785 + t5295 + var1[1];
  p_output1[39]=t4797;
  p_output1[40]=t5497;
  p_output1[41]=t5319 + t5362 + t5374 + t5387 + t5388 + t5410 + t5435 + t5458 + 0.15564*t5470 + 0.502639*t5494 + t5499 + var1[2];
  p_output1[42]=t5319 + t5362 + t5374 + t5387 + t5388 + t5410 + t5435 + t5458 + 0.152586*t5470 + 0.502466*t5494 + t5511 + var1[2];
  p_output1[43]=t5319 + t5362 + t5374 + t5387 + t5388 + t5410 + t5435 + t5458 + 0.150955*t5470 - 0.036184*t5477 + 0.502374*t5494 + var1[2];
  p_output1[44]=t5319 + t5362 + t5374 + t5387 + t5388 + t5410 + t5435 + t5458 + 0.150922*t5470 + 0.502372*t5494 + t5526 + var1[2];
  p_output1[45]=t5319 + t5362 + t5374 + t5387 + t5388 + t5410 + t5435 + t5458 + 0.152492*t5470 + 0.502461*t5494 + t5531 + var1[2];
  p_output1[46]=t5319 + t5362 + t5374 + t5387 + t5388 + t5410 + t5435 + t5458 + 0.155495*t5470 - 0.049719*t5477 + 0.502631*t5494 + var1[2];
  p_output1[47]=t5319 + t5362 + t5374 + t5387 + t5388 + t5410 + t5435 + t5458 + 0.159604*t5470 + 0.502864*t5494 + t5542 + var1[2];
  p_output1[48]=t5319 + t5362 + t5374 + t5387 + t5388 + t5410 + t5435 + t5458 + 0.164375*t5470 + 0.503134*t5494 + t5555 + var1[2];
  p_output1[49]=t5319 + t5362 + t5374 + t5387 + t5388 + t5410 + t5435 + t5458 + 0.169291*t5470 + 0.503413*t5494 + t5567 + var1[2];
  p_output1[50]=t5319 + t5362 + t5374 + t5387 + t5388 + t5410 + t5435 + t5458 + 0.173818*t5470 + 0.503669*t5494 + t5576 + var1[2];
  p_output1[51]=t5319 + t5362 + t5374 + t5387 + t5388 + t5410 + t5435 + t5458 + 0.177467*t5470 + 0.503876*t5494 + t5580 + var1[2];
  p_output1[52]=t5319 + t5362 + t5374 + t5387 + t5388 + t5410 + t5435 + t5458 + 0.179842*t5470 - 0.043714*t5477 + 0.504011*t5494 + var1[2];
  p_output1[53]=t5319 + t5362 + t5374 + t5387 + t5388 + t5410 + t5435 + t5458 + 0.180686*t5470 + 0.504059*t5494 + t5591 + var1[2];
  p_output1[54]=t5319 + t5362 + t5374 + t5387 + t5388 + t5410 + t5435 + t5458 + 0.179906*t5470 + 0.504014*t5494 + t5595 + var1[2];
  p_output1[55]=t5319 + t5362 + t5374 + t5387 + t5388 + t5410 + t5435 + t5458 + 0.177588*t5470 + 0.503883*t5494 + t5599 + var1[2];
  p_output1[56]=t5319 + t5362 + t5374 + t5387 + t5388 + t5410 + t5435 + t5458 + 0.173983*t5470 - 0.026247*t5477 + 0.503679*t5494 + var1[2];
  p_output1[57]=t5319 + t5362 + t5374 + t5387 + t5388 + t5410 + t5435 + t5458 + 0.169482*t5470 + 0.503424*t5494 + t5609 + var1[2];
  p_output1[58]=t5319 + t5362 + t5374 + t5387 + t5388 + t5410 + t5435 + t5458 + 0.164572*t5470 + 0.503145*t5494 + t5617 + var1[2];
  p_output1[59]=t5497;
  p_output1[60]=t5625;
  p_output1[61]=t1720 + t2332 + t2513 + t3361 + t3533 + t3758 + 0.13864*t3866 + 0.802639*t4017 + t4065 + t618 + t718 + var1[0];
  p_output1[62]=t1720 + t2332 + t2513 + t3361 + t3533 + t3758 + 0.135586*t3866 + 0.802466*t4017 + t4125 + t618 + t718 + var1[0];
  p_output1[63]=t1720 + t2332 + t2513 + t3361 + t3533 + t3758 + 0.133955*t3866 - 0.036183*t3915 + 0.802374*t4017 + t618 + t718 + var1[0];
  p_output1[64]=t1720 + t2332 + t2513 + t3361 + t3533 + t3758 + 0.133922*t3866 + 0.802372*t4017 + t4188 + t618 + t718 + var1[0];
  p_output1[65]=t1720 + t2332 + t2513 + t3361 + t3533 + t3758 + 0.135492*t3866 + 0.802461*t4017 + t4221 + t618 + t718 + var1[0];
  p_output1[66]=t1720 + t2332 + t2513 + t3361 + t3533 + t3758 + 0.138495*t3866 - 0.049718*t3915 + 0.802631*t4017 + t618 + t718 + var1[0];
  p_output1[67]=t1720 + t2332 + t2513 + t3361 + t3533 + t3758 + 0.142604*t3866 + 0.802864*t4017 + t4244 + t618 + t718 + var1[0];
  p_output1[68]=t1720 + t2332 + t2513 + t3361 + t3533 + t3758 + 0.147375*t3866 + 0.803134*t4017 + t4295 + t618 + t718 + var1[0];
  p_output1[69]=t1720 + t2332 + t2513 + t3361 + t3533 + t3758 + 0.152291*t3866 + 0.803413*t4017 + t4351 + t618 + t718 + var1[0];
  p_output1[70]=t1720 + t2332 + t2513 + t3361 + t3533 + t3758 + 0.156818*t3866 + 0.803669*t4017 + t4385 + t618 + t718 + var1[0];
  p_output1[71]=t1720 + t2332 + t2513 + t3361 + t3533 + t3758 + 0.160467*t3866 + 0.803876*t4017 + t4417 + t618 + t718 + var1[0];
  p_output1[72]=t1720 + t2332 + t2513 + t3361 + t3533 + t3758 + 0.162842*t3866 - 0.043713*t3915 + 0.804011*t4017 + t618 + t718 + var1[0];
  p_output1[73]=t1720 + t2332 + t2513 + t3361 + t3533 + t3758 + 0.163686*t3866 + 0.804059*t4017 + t4464 + t618 + t718 + var1[0];
  p_output1[74]=t1720 + t2332 + t2513 + t3361 + t3533 + t3758 + 0.162906*t3866 + 0.804014*t4017 + t4491 + t618 + t718 + var1[0];
  p_output1[75]=t1720 + t2332 + t2513 + t3361 + t3533 + t3758 + 0.160588*t3866 + 0.803883*t4017 + t4515 + t618 + t718 + var1[0];
  p_output1[76]=t1720 + t2332 + t2513 + t3361 + t3533 + t3758 + 0.156983*t3866 - 0.026246*t3915 + 0.803679*t4017 + t618 + t718 + var1[0];
  p_output1[77]=t1720 + t2332 + t2513 + t3361 + t3533 + t3758 + 0.152482*t3866 + 0.803424*t4017 + t4574 + t618 + t718 + var1[0];
  p_output1[78]=t1720 + t2332 + t2513 + t3361 + t3533 + t3758 + 0.147572*t3866 + 0.803145*t4017 + t4585 + t618 + t718 + var1[0];
  p_output1[79]=t5625;
  p_output1[80]=t5699;
  p_output1[81]=t4610 + t4622 + t4629 + t4638 + t4640 + t4653 + t4667 + t4685 + 0.13864*t4707 + 0.802639*t4785 + t4889 + var1[1];
  p_output1[82]=t4610 + t4622 + t4629 + t4638 + t4640 + t4653 + t4667 + t4685 + 0.135586*t4707 + 0.802466*t4785 + t4909 + var1[1];
  p_output1[83]=t4610 + t4622 + t4629 + t4638 + t4640 + t4653 + t4667 + t4685 + 0.133955*t4707 - 0.036183*t4737 + 0.802374*t4785 + var1[1];
  p_output1[84]=t4610 + t4622 + t4629 + t4638 + t4640 + t4653 + t4667 + t4685 + 0.133922*t4707 + 0.802372*t4785 + t4948 + var1[1];
  p_output1[85]=t4610 + t4622 + t4629 + t4638 + t4640 + t4653 + t4667 + t4685 + 0.135492*t4707 + 0.802461*t4785 + t4975 + var1[1];
  p_output1[86]=t4610 + t4622 + t4629 + t4638 + t4640 + t4653 + t4667 + t4685 + 0.138495*t4707 - 0.049718*t4737 + 0.802631*t4785 + var1[1];
  p_output1[87]=t4610 + t4622 + t4629 + t4638 + t4640 + t4653 + t4667 + t4685 + 0.142604*t4707 + 0.802864*t4785 + t5074 + var1[1];
  p_output1[88]=t4610 + t4622 + t4629 + t4638 + t4640 + t4653 + t4667 + t4685 + 0.147375*t4707 + 0.803134*t4785 + t5104 + var1[1];
  p_output1[89]=t4610 + t4622 + t4629 + t4638 + t4640 + t4653 + t4667 + t4685 + 0.152291*t4707 + 0.803413*t4785 + t5128 + var1[1];
  p_output1[90]=t4610 + t4622 + t4629 + t4638 + t4640 + t4653 + t4667 + t4685 + 0.156818*t4707 + 0.803669*t4785 + t5136 + var1[1];
  p_output1[91]=t4610 + t4622 + t4629 + t4638 + t4640 + t4653 + t4667 + t4685 + 0.160467*t4707 + 0.803876*t4785 + t5147 + var1[1];
  p_output1[92]=t4610 + t4622 + t4629 + t4638 + t4640 + t4653 + t4667 + t4685 + 0.162842*t4707 - 0.043713*t4737 + 0.804011*t4785 + var1[1];
  p_output1[93]=t4610 + t4622 + t4629 + t4638 + t4640 + t4653 + t4667 + t4685 + 0.163686*t4707 + 0.804059*t4785 + t5181 + var1[1];
  p_output1[94]=t4610 + t4622 + t4629 + t4638 + t4640 + t4653 + t4667 + t4685 + 0.162906*t4707 + 0.804014*t4785 + t5188 + var1[1];
  p_output1[95]=t4610 + t4622 + t4629 + t4638 + t4640 + t4653 + t4667 + t4685 + 0.160588*t4707 + 0.803883*t4785 + t5232 + var1[1];
  p_output1[96]=t4610 + t4622 + t4629 + t4638 + t4640 + t4653 + t4667 + t4685 + 0.156983*t4707 - 0.026246*t4737 + 0.803679*t4785 + var1[1];
  p_output1[97]=t4610 + t4622 + t4629 + t4638 + t4640 + t4653 + t4667 + t4685 + 0.152482*t4707 + 0.803424*t4785 + t5289 + var1[1];
  p_output1[98]=t4610 + t4622 + t4629 + t4638 + t4640 + t4653 + t4667 + t4685 + 0.147572*t4707 + 0.803145*t4785 + t5295 + var1[1];
  p_output1[99]=t5699;
  p_output1[100]=t5762;
  p_output1[101]=t5319 + t5362 + t5374 + t5387 + t5388 + t5410 + t5435 + t5458 + 0.13864*t5470 + 0.802639*t5494 + t5499 + var1[2];
  p_output1[102]=t5319 + t5362 + t5374 + t5387 + t5388 + t5410 + t5435 + t5458 + 0.135586*t5470 + 0.802466*t5494 + t5511 + var1[2];
  p_output1[103]=t5319 + t5362 + t5374 + t5387 + t5388 + t5410 + t5435 + t5458 + 0.133955*t5470 - 0.036183*t5477 + 0.802374*t5494 + var1[2];
  p_output1[104]=t5319 + t5362 + t5374 + t5387 + t5388 + t5410 + t5435 + t5458 + 0.133922*t5470 + 0.802372*t5494 + t5526 + var1[2];
  p_output1[105]=t5319 + t5362 + t5374 + t5387 + t5388 + t5410 + t5435 + t5458 + 0.135492*t5470 + 0.802461*t5494 + t5531 + var1[2];
  p_output1[106]=t5319 + t5362 + t5374 + t5387 + t5388 + t5410 + t5435 + t5458 + 0.138495*t5470 - 0.049718*t5477 + 0.802631*t5494 + var1[2];
  p_output1[107]=t5319 + t5362 + t5374 + t5387 + t5388 + t5410 + t5435 + t5458 + 0.142604*t5470 + 0.802864*t5494 + t5542 + var1[2];
  p_output1[108]=t5319 + t5362 + t5374 + t5387 + t5388 + t5410 + t5435 + t5458 + 0.147375*t5470 + 0.803134*t5494 + t5555 + var1[2];
  p_output1[109]=t5319 + t5362 + t5374 + t5387 + t5388 + t5410 + t5435 + t5458 + 0.152291*t5470 + 0.803413*t5494 + t5567 + var1[2];
  p_output1[110]=t5319 + t5362 + t5374 + t5387 + t5388 + t5410 + t5435 + t5458 + 0.156818*t5470 + 0.803669*t5494 + t5576 + var1[2];
  p_output1[111]=t5319 + t5362 + t5374 + t5387 + t5388 + t5410 + t5435 + t5458 + 0.160467*t5470 + 0.803876*t5494 + t5580 + var1[2];
  p_output1[112]=t5319 + t5362 + t5374 + t5387 + t5388 + t5410 + t5435 + t5458 + 0.162842*t5470 - 0.043713*t5477 + 0.804011*t5494 + var1[2];
  p_output1[113]=t5319 + t5362 + t5374 + t5387 + t5388 + t5410 + t5435 + t5458 + 0.163686*t5470 + 0.804059*t5494 + t5591 + var1[2];
  p_output1[114]=t5319 + t5362 + t5374 + t5387 + t5388 + t5410 + t5435 + t5458 + 0.162906*t5470 + 0.804014*t5494 + t5595 + var1[2];
  p_output1[115]=t5319 + t5362 + t5374 + t5387 + t5388 + t5410 + t5435 + t5458 + 0.160588*t5470 + 0.803883*t5494 + t5599 + var1[2];
  p_output1[116]=t5319 + t5362 + t5374 + t5387 + t5388 + t5410 + t5435 + t5458 + 0.156983*t5470 - 0.026246*t5477 + 0.803679*t5494 + var1[2];
  p_output1[117]=t5319 + t5362 + t5374 + t5387 + t5388 + t5410 + t5435 + t5458 + 0.152482*t5470 + 0.803424*t5494 + t5609 + var1[2];
  p_output1[118]=t5319 + t5362 + t5374 + t5387 + t5388 + t5410 + t5435 + t5458 + 0.147572*t5470 + 0.803145*t5494 + t5617 + var1[2];
  p_output1[119]=t5762;
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 20, (mwSize) 6, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Link_fl_calf_to_fl_foot_bar.hh"

namespace SymFunction
{

void Link_fl_calf_to_fl_foot_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE