/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:06:18 GMT+02:00
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
  double t2208;
  double t1942;
  double t2209;
  double t2970;
  double t2915;
  double t2959;
  double t2974;
  double t2184;
  double t2962;
  double t3240;
  double t3277;
  double t2391;
  double t3300;
  double t3302;
  double t3316;
  double t3296;
  double t3403;
  double t3404;
  double t3429;
  double t3437;
  double t3444;
  double t3453;
  double t3317;
  double t3345;
  double t3352;
  double t3562;
  double t3586;
  double t3587;
  double t3668;
  double t3673;
  double t3689;
  double t3651;
  double t3652;
  double t3653;
  double t2204;
  double t2654;
  double t2656;
  double t3894;
  double t3920;
  double t3278;
  double t3353;
  double t3387;
  double t3396;
  double t3461;
  double t3462;
  double t3501;
  double t3510;
  double t3511;
  double t3486;
  double t3492;
  double t3493;
  double t3593;
  double t3600;
  double t3601;
  double t4046;
  double t4063;
  double t4081;
  double t3984;
  double t3987;
  double t3995;
  double t3733;
  double t3768;
  double t3775;
  double t4837;
  double t4841;
  double t4881;
  double t4782;
  double t4793;
  double t4799;
  double t5156;
  double t5158;
  double t5169;
  double t4130;
  double t4134;
  double t4146;
  double t4150;
  double t4185;
  double t4215;
  double t4224;
  double t4235;
  double t4240;
  double t4458;
  double t4476;
  double t4491;
  double t4573;
  double t4604;
  double t4619;
  double t4648;
  double t4653;
  double t4654;
  double t4678;
  double t4682;
  double t4713;
  double t4731;
  double t4733;
  double t4766;
  double t4949;
  double t5041;
  double t5068;
  double t5075;
  double t5086;
  double t5088;
  double t6133;
  double t6163;
  double t6204;
  double t5975;
  double t5984;
  double t6006;
  double t6415;
  double t6431;
  double t6439;
  double t6447;
  double t6448;
  double t6449;
  double t6473;
  double t6491;
  double t6497;
  double t6411;
  double t6440;
  double t6501;
  double t6503;
  double t6410;
  double t6508;
  double t6517;
  double t6528;
  double t6530;
  double t6531;
  double t6533;
  double t6536;
  double t6539;
  double t6540;
  double t6542;
  double t6543;
  double t6544;
  double t6546;
  double t6548;
  double t6549;
  double t6550;
  double t6551;
  double t3837;
  double t3861;
  double t3862;
  double t6563;
  double t6564;
  double t6565;
  double t6555;
  double t6557;
  double t6560;
  double t6527;
  double t6552;
  double t6553;
  double t6575;
  double t6580;
  double t6581;
  double t6935;
  double t6941;
  double t6942;
  double t6583;
  double t6585;
  double t6586;
  double t6588;
  double t6625;
  double t6626;
  double t6627;
  double t6628;
  double t6643;
  double t6644;
  double t6647;
  double t6649;
  double t6706;
  double t6716;
  double t6723;
  double t6724;
  double t6804;
  double t6812;
  double t6813;
  double t6821;
  double t6884;
  double t6890;
  double t6901;
  double t6908;
  double t3536;
  double t3537;
  double t3538;
  double t7429;
  double t7440;
  double t7442;
  double t7460;
  double t7462;
  double t3521;
  double t3522;
  double t3528;
  double t7471;
  double t7476;
  double t7486;
  double t7489;
  double t7490;
  double t7491;
  double t3542;
  double t3544;
  double t3545;
  double t7426;
  double t7726;
  double t7727;
  double t7749;
  double t7766;
  double t7780;
  double t7799;
  double t7853;
  double t7865;
  double t7876;
  double t7745;
  double t7802;
  double t7805;
  double t7851;
  double t7887;
  double t7888;
  double t7903;
  double t7904;
  double t7905;
  double t3561;
  double t3613;
  double t3621;
  double t3713;
  double t3782;
  double t3788;
  double t8616;
  double t8617;
  double t8618;
  double t8615;
  double t8620;
  double t8622;
  double t8642;
  double t8652;
  double t8686;
  double t8691;
  double t8697;
  double t8624;
  double t8654;
  double t8660;
  double t8678;
  double t8759;
  double t8872;
  double t8884;
  double t8885;
  double t8896;
  double t6955;
  double t7003;
  double t7004;
  double t7082;
  double t7083;
  double t7203;
  double t7242;
  double t7295;
  double t7332;
  double t7355;
  double t9329;
  double t9330;
  double t9332;
  double t7452;
  double t7488;
  double t7503;
  double t7504;
  double t9380;
  double t9389;
  double t9395;
  double t7551;
  double t7562;
  double t9423;
  double t9424;
  double t9425;
  double t7593;
  double t7597;
  double t9432;
  double t9435;
  double t9436;
  double t9457;
  double t9466;
  double t9467;
  double t7640;
  double t9830;
  double t7644;
  double t7663;
  double t7667;
  double t9582;
  double t9595;
  double t9596;
  double t7818;
  double t7945;
  double t10212;
  double t8034;
  double t8080;
  double t8099;
  double t8373;
  double t8523;
  double t8541;
  double t8661;
  double t8916;
  double t8918;
  double t9121;
  double t9122;
  double t9201;
  double t9220;
  double t9236;
  double t10042;
  double t10054;
  double t10095;
  double t10096;
  double t9805;
  double t9807;
  double t9846;
  double t9848;
  double t9901;
  double t9903;
  double t9926;
  double t9933;
  double t10566;
  double t10567;
  double t10292;
  double t10293;
  double t10597;
  double t10599;
  double t10214;
  double t10676;
  double t10646;
  double t10648;
  double t10649;
  double t10658;
  double t10660;
  double t10662;
  double t10249;
  double t10250;
  double t10238;
  double t10577;
  double t10579;
  double t10529;
  double t10313;
  double t10314;
  double t10624;
  double t10625;
  double t10478;
  double t10333;
  double t10365;
  double t10581;
  double t10626;
  double t10705;
  double t10706;
  double t10719;
  double t10857;
  double t10859;
  double t10866;
  double t10867;
  double t10801;
  double t10812;
  double t10819;
  double t10949;
  double t10950;
  t2208 = Cos(var1[12]);
  t1942 = Cos(var1[4]);
  t2209 = Sin(var1[4]);
  t2970 = Cos(var1[13]);
  t2915 = Cos(var1[14]);
  t2959 = Sin(var1[13]);
  t2974 = Sin(var1[14]);
  t2184 = Sin(var1[12]);
  t2962 = t2915*t2959;
  t3240 = -1.*t2970*t2974;
  t3277 = t2962 + t3240;
  t2391 = Sin(var1[5]);
  t3300 = t2970*t2915;
  t3302 = t2959*t2974;
  t3316 = t3300 + t3302;
  t3296 = Cos(var1[5]);
  t3403 = -1.*t2915*t2959;
  t3404 = t2970*t2974;
  t3429 = t3403 + t3404;
  t3437 = t3296*t3429;
  t3444 = t2184*t3316*t2391;
  t3453 = t3437 + t3444;
  t3317 = t3296*t3316;
  t3345 = t2184*t3277*t2391;
  t3352 = t3317 + t3345;
  t3562 = -1.*t2970*t2915;
  t3586 = -1.*t2959*t2974;
  t3587 = t3562 + t3586;
  t3668 = t2208*t3277*t2209;
  t3673 = t1942*t3352;
  t3689 = t3668 + t3673;
  t3651 = t2208*t3316*t2209;
  t3652 = t1942*t3453;
  t3653 = t3651 + t3652;
  t2204 = t1942*t2184;
  t2654 = t2208*t2209*t2391;
  t2656 = t2204 + t2654;
  t3894 = Sin(var1[3]);
  t3920 = Cos(var1[3]);
  t3278 = t2208*t1942*t3277;
  t3353 = -1.*t2209*t3352;
  t3387 = t3278 + t3353;
  t3396 = t2208*t1942*t3316;
  t3461 = -1.*t2209*t3453;
  t3462 = t3396 + t3461;
  t3501 = t3296*t2184*t3277;
  t3510 = -1.*t3316*t2391;
  t3511 = t3501 + t3510;
  t3486 = t3296*t2184*t3316;
  t3492 = -1.*t3429*t2391;
  t3493 = t3486 + t3492;
  t3593 = t3296*t3587;
  t3600 = t2184*t3429*t2391;
  t3601 = t3593 + t3600;
  t4046 = -1.*t3296*t2184*t3316;
  t4063 = t3429*t2391;
  t4081 = t4046 + t4063;
  t3984 = -1.*t3296*t2184*t3277;
  t3987 = t3316*t2391;
  t3995 = t3984 + t3987;
  t3733 = t3296*t3277;
  t3768 = t2184*t3587*t2391;
  t3775 = t3733 + t3768;
  t4837 = t3920*t3995;
  t4841 = -1.*t3894*t3387;
  t4881 = t4837 + t4841;
  t4782 = t3920*t4081;
  t4793 = -1.*t3894*t3462;
  t4799 = t4782 + t4793;
  t5156 = t2208*t3920*t3296;
  t5158 = -1.*t3894*t2656;
  t5169 = t5156 + t5158;
  t4130 = -1.*t2184*t2209;
  t4134 = t2208*t1942*t2391;
  t4146 = t4130 + t4134;
  t4150 = -1.*t2208*t3277*t2209;
  t4185 = -1.*t1942*t3352;
  t4215 = t4150 + t4185;
  t4224 = -1.*t2208*t3316*t2209;
  t4235 = -1.*t1942*t3453;
  t4240 = t4224 + t4235;
  t4458 = t2208*t1942;
  t4476 = -1.*t2184*t2209*t2391;
  t4491 = t4458 + t4476;
  t4573 = -1.*t1942*t2184*t3277;
  t4604 = -1.*t2208*t3277*t2209*t2391;
  t4619 = t4573 + t4604;
  t4648 = -1.*t1942*t2184*t3316;
  t4653 = -1.*t2208*t3316*t2209*t2391;
  t4654 = t4648 + t4653;
  t4678 = -1.*t3296*t2184*t3429;
  t4682 = t3587*t2391;
  t4713 = t4678 + t4682;
  t4731 = t2208*t1942*t3429;
  t4733 = -1.*t2209*t3601;
  t4766 = t4731 + t4733;
  t4949 = -1.*t3296*t2184*t3587;
  t5041 = t3277*t2391;
  t5068 = t4949 + t5041;
  t5075 = t2208*t1942*t3587;
  t5086 = -1.*t2209*t3775;
  t5088 = t5075 + t5086;
  t6133 = t3894*t3995;
  t6163 = t3920*t3387;
  t6204 = t6133 + t6163;
  t5975 = t3894*t4081;
  t5984 = t3920*t3462;
  t6006 = t5975 + t5984;
  t6415 = -0.0641*t2915;
  t6431 = -0.28*t2974;
  t6439 = t6415 + t6431;
  t6447 = -1.*t2915;
  t6448 = 1. + t6447;
  t6449 = 0.075*t6448;
  t6473 = 0.355*t2915;
  t6491 = -0.0641*t2974;
  t6497 = t6449 + t6473 + t6491;
  t6411 = -0.325*t2959;
  t6440 = t2970*t6439;
  t6501 = t2959*t6497;
  t6503 = t6411 + t6440 + t6501;
  t6410 = -0.068*t2184;
  t6508 = t2208*t6503;
  t6517 = t6410 + t6508;
  t6528 = -1.*t2970;
  t6530 = 1. + t6528;
  t6531 = 0.325*t6530;
  t6533 = -1.*t2959*t6439;
  t6536 = t2970*t6497;
  t6539 = t6531 + t6533 + t6536;
  t6540 = t3296*t6539;
  t6542 = -1.*t2208;
  t6543 = 1. + t6542;
  t6544 = -0.1575*t6543;
  t6546 = -0.2255*t2208;
  t6548 = -1.*t2184*t6503;
  t6549 = t6544 + t6546 + t6548;
  t6550 = -1.*t6549*t2391;
  t6551 = t6540 + t6550;
  t3837 = t2184*t2209;
  t3861 = -1.*t2208*t1942*t2391;
  t3862 = t3837 + t3861;
  t6563 = t1942*t6517;
  t6564 = -1.*t2209*t6551;
  t6565 = t6563 + t6564;
  t6555 = t6517*t2209;
  t6557 = t1942*t6551;
  t6560 = t6555 + t6557;
  t6527 = -1.*t6517*t2209;
  t6552 = -1.*t1942*t6551;
  t6553 = t6527 + t6552;
  t6575 = t3296*t6549;
  t6580 = t6539*t2391;
  t6581 = t6575 + t6580;
  t6935 = -1.*t3296*t6549;
  t6941 = -1.*t6539*t2391;
  t6942 = t6935 + t6941;
  t6583 = t2208*t3296*t6581;
  t6585 = t3862*t6560;
  t6586 = t2656*t6565;
  t6588 = t6583 + t6585 + t6586;
  t6625 = -1.*t6581*t3995;
  t6626 = -1.*t6560*t3689;
  t6627 = -1.*t6565*t3387;
  t6628 = t6625 + t6626 + t6627;
  t6643 = t6581*t3995;
  t6644 = t6560*t3689;
  t6647 = t6565*t3387;
  t6649 = t6643 + t6644 + t6647;
  t6706 = -1.*t6581*t4081;
  t6716 = -1.*t6560*t3653;
  t6723 = -1.*t6565*t3462;
  t6724 = t6706 + t6716 + t6723;
  t6804 = -1.*t2208*t3296*t6581;
  t6812 = -1.*t3862*t6560;
  t6813 = -1.*t2656*t6565;
  t6821 = t6804 + t6812 + t6813;
  t6884 = t6581*t4081;
  t6890 = t6560*t3653;
  t6901 = t6565*t3462;
  t6908 = t6884 + t6890 + t6901;
  t3536 = -1.*t2184*t3277*t2209;
  t3537 = t2208*t1942*t3277*t2391;
  t3538 = t3536 + t3537;
  t7429 = 0.068*t2184;
  t7440 = -1.*t2208*t6503;
  t7442 = t7429 + t7440;
  t7460 = -0.068*t2208;
  t7462 = t7460 + t6548;
  t3521 = t2208*t2209;
  t3522 = t1942*t2184*t2391;
  t3528 = t3521 + t3522;
  t7471 = t7462*t2209;
  t7476 = -1.*t1942*t7442*t2391;
  t7486 = t7471 + t7476;
  t7489 = t1942*t7462;
  t7490 = t7442*t2209*t2391;
  t7491 = t7489 + t7490;
  t3542 = -1.*t2184*t3316*t2209;
  t3544 = t2208*t1942*t3316*t2391;
  t3545 = t3542 + t3544;
  t7426 = Power(t3296,2);
  t7726 = -0.325*t2970;
  t7727 = t7726 + t6533 + t6536;
  t7749 = 0.325*t2959;
  t7766 = -1.*t2970*t6439;
  t7780 = -1.*t2959*t6497;
  t7799 = t7749 + t7766 + t7780;
  t7853 = t3296*t7799;
  t7865 = t2184*t7727*t2391;
  t7876 = t7853 + t7865;
  t7745 = -1.*t3296*t2184*t7727;
  t7802 = t7799*t2391;
  t7805 = t7745 + t7802;
  t7851 = t2208*t7727*t2209;
  t7887 = t1942*t7876;
  t7888 = t7851 + t7887;
  t7903 = t2208*t1942*t7727;
  t7904 = -1.*t2209*t7876;
  t7905 = t7903 + t7904;
  t3561 = t2208*t3429*t2209;
  t3613 = t1942*t3601;
  t3621 = t3561 + t3613;
  t3713 = t2208*t3587*t2209;
  t3782 = t1942*t3775;
  t3788 = t3713 + t3782;
  t8616 = -0.28*t2915;
  t8617 = 0.0641*t2974;
  t8618 = t8616 + t8617;
  t8615 = t2959*t6439;
  t8620 = t2970*t8618;
  t8622 = t8615 + t8620;
  t8642 = -1.*t2959*t8618;
  t8652 = t6440 + t8642;
  t8686 = t3296*t8652;
  t8691 = t2184*t8622*t2391;
  t8697 = t8686 + t8691;
  t8624 = -1.*t3296*t2184*t8622;
  t8654 = t8652*t2391;
  t8660 = t8624 + t8654;
  t8678 = t2208*t8622*t2209;
  t8759 = t1942*t8697;
  t8872 = t8678 + t8759;
  t8884 = t2208*t1942*t8622;
  t8885 = -1.*t2209*t8697;
  t8896 = t8884 + t8885;
  t6955 = -1.*t2208*t2391*t6581;
  t7003 = -1.*t6581*t3352;
  t7004 = -1.*t6551*t3995;
  t7082 = t6581*t3352;
  t7083 = t6551*t3995;
  t7203 = -1.*t6551*t4081;
  t7242 = -1.*t6581*t3453;
  t7295 = t2208*t2391*t6581;
  t7332 = t6551*t4081;
  t7355 = t6581*t3453;
  t9329 = t2184*t6517;
  t9330 = -1.*t2208*t2391*t6551;
  t9332 = t9329 + t9330 + t6583;
  t7452 = t2208*t7426*t7442;
  t7488 = -1.*t3296*t2184*t6581;
  t7503 = t2208*t3296*t3277*t6581;
  t7504 = -1.*t3296*t7442*t3995;
  t9380 = -1.*t2208*t6517*t3277;
  t9389 = -1.*t6551*t3352;
  t9395 = t9380 + t9389 + t6625;
  t7551 = -1.*t2208*t3296*t3277*t6581;
  t7562 = t3296*t7442*t3995;
  t9423 = t2208*t6517*t3277;
  t9424 = t6551*t3352;
  t9425 = t9423 + t9424 + t6643;
  t7593 = t2208*t3296*t3316*t6581;
  t7597 = -1.*t3296*t7442*t4081;
  t9432 = -1.*t2208*t6517*t3316;
  t9435 = -1.*t6551*t3453;
  t9436 = t9432 + t6706 + t9435;
  t9457 = -1.*t2184*t6517;
  t9466 = t2208*t2391*t6551;
  t9467 = t9457 + t9466 + t6804;
  t7640 = -1.*t2208*t7426*t7442;
  t9830 = Power(t2391,2);
  t7644 = t3296*t2184*t6581;
  t7663 = -1.*t2208*t3296*t3316*t6581;
  t7667 = t3296*t7442*t4081;
  t9582 = t2208*t6517*t3316;
  t9595 = t6551*t3453;
  t9596 = t9582 + t6884 + t9595;
  t7818 = t2208*t3296*t7805;
  t7945 = -1.*t7805*t3995;
  t10212 = Power(t2208,2);
  t8034 = t7805*t3995;
  t8080 = -1.*t7805*t4081;
  t8099 = -1.*t6581*t4713;
  t8373 = -1.*t2208*t3296*t7805;
  t8523 = t7805*t4081;
  t8541 = t6581*t4713;
  t8661 = t2208*t3296*t8660;
  t8916 = -1.*t6581*t5068;
  t8918 = -1.*t8660*t3995;
  t9121 = t6581*t5068;
  t9122 = t8660*t3995;
  t9201 = -1.*t8660*t4081;
  t9220 = -1.*t2208*t3296*t8660;
  t9236 = t8660*t4081;
  t10042 = -1.*t2208*t6517;
  t10054 = -1.*t2184*t7462;
  t10095 = -1.*t2184*t6517*t3316;
  t10096 = t2208*t7462*t3316;
  t9805 = t2208*t6517;
  t9807 = t2184*t7462;
  t9846 = t2184*t6517*t3277;
  t9848 = -1.*t2208*t7462*t3277;
  t9901 = -1.*t2184*t6517*t3277;
  t9903 = t2208*t7462*t3277;
  t9926 = t2184*t6517*t3316;
  t9933 = -1.*t2208*t7462*t3316;
  t10566 = -1.*t2208*t6549;
  t10567 = t9457 + t10566;
  t10292 = t2208*t6517*t3429;
  t10293 = t10212*t7727*t3316;
  t10597 = t2208*t6549;
  t10599 = t9329 + t10597;
  t10214 = -1.*t10212*t7727*t3277;
  t10676 = Power(t2184,2);
  t10646 = -1.*t6539*t3429;
  t10648 = t2184*t6549*t3316;
  t10649 = t10646 + t9432 + t10648;
  t10658 = -1.*t2184*t6549*t3277;
  t10660 = t6539*t3316;
  t10662 = t9423 + t10658 + t10660;
  t10249 = -1.*t2208*t6517*t3429;
  t10250 = -1.*t10212*t7727*t3316;
  t10238 = t10212*t7727*t3277;
  t10577 = t6539*t3429;
  t10579 = -1.*t2184*t6549*t3316;
  t10529 = t10212*t8622*t3316;
  t10313 = -1.*t10212*t8622*t3277;
  t10314 = -1.*t2208*t6517*t3587;
  t10624 = t2184*t6549*t3277;
  t10625 = -1.*t6539*t3316;
  t10478 = -1.*t10212*t8622*t3316;
  t10333 = t10212*t8622*t3277;
  t10365 = t2208*t6517*t3587;
  t10581 = t10577 + t9582 + t10579;
  t10626 = t9380 + t10624 + t10625;
  t10705 = -1.*t7799*t3429;
  t10706 = -1.*t6539*t3587;
  t10719 = t7799*t3316;
  t10857 = t6503*t3277;
  t10859 = t10857 + t10660;
  t10866 = -1.*t6503*t3316;
  t10867 = t10646 + t10866;
  t10801 = -1.*t8652*t3429;
  t10812 = t6539*t3277;
  t10819 = t8652*t3316;
  t10949 = 0.325*t2974;
  t10950 = -1.*t6497*t2974;
  p_output1[0]=t3387*var2[0] + t2656*var2[1] + t3462*var2[2];
  p_output1[1]=t1942*t3511*var2[0] - 1.*t1942*t2208*t3296*var2[1] + t1942*t3493*var2[2];
  p_output1[2]=t3538*var2[0] + t3528*var2[1] + t3545*var2[2];
  p_output1[3]=t3653*var2[0] + t3621*var2[2];
  p_output1[4]=t3788*var2[0] + t3689*var2[2];
  p_output1[5]=t3689;
  p_output1[6]=t3862;
  p_output1[7]=t3653;
  p_output1[8]=(-1.*t3387*t3920 - 1.*t3894*t3995)*var2[0] + (-1.*t2208*t3296*t3894 - 1.*t2656*t3920)*var2[1] + (-1.*t3462*t3920 - 1.*t3894*t4081)*var2[2];
  p_output1[9]=-1.*t3894*t4215*var2[0] - 1.*t3894*t4146*var2[1] - 1.*t3894*t4240*var2[2];
  p_output1[10]=(t2209*t3511*t3894 + t3352*t3920)*var2[0] + (-1.*t2208*t2209*t3296*t3894 - 1.*t2208*t2391*t3920)*var2[1] + (t2209*t3493*t3894 + t3453*t3920)*var2[2];
  p_output1[11]=(-1.*t2208*t3277*t3296*t3920 - 1.*t3894*t4619)*var2[0] + (-1.*t2184*t3296*t3920 - 1.*t3894*t4491)*var2[1] + (-1.*t2208*t3296*t3316*t3920 - 1.*t3894*t4654)*var2[2];
  p_output1[12]=t4799*var2[0] + (t3920*t4713 - 1.*t3894*t4766)*var2[2];
  p_output1[13]=(t3920*t5068 - 1.*t3894*t5088)*var2[0] + t4881*var2[2];
  p_output1[14]=t4881;
  p_output1[15]=t5169;
  p_output1[16]=t4799;
  p_output1[17]=t4881*var2[0] + t5169*var2[1] + t4799*var2[2];
  p_output1[18]=t3920*t4215*var2[0] + t3920*t4146*var2[1] + t3920*t4240*var2[2];
  p_output1[19]=(t3352*t3894 - 1.*t2209*t3511*t3920)*var2[0] + (-1.*t2208*t2391*t3894 + t2208*t2209*t3296*t3920)*var2[1] + (t3453*t3894 - 1.*t2209*t3493*t3920)*var2[2];
  p_output1[20]=(-1.*t2208*t3277*t3296*t3894 + t3920*t4619)*var2[0] + (-1.*t2184*t3296*t3894 + t3920*t4491)*var2[1] + (-1.*t2208*t3296*t3316*t3894 + t3920*t4654)*var2[2];
  p_output1[21]=t6006*var2[0] + (t3894*t4713 + t3920*t4766)*var2[2];
  p_output1[22]=(t3894*t5068 + t3920*t5088)*var2[0] + t6204*var2[2];
  p_output1[23]=t6204;
  p_output1[24]=t2208*t3296*t3894 + t2656*t3920;
  p_output1[25]=t6006;
  p_output1[26]=(t3653*(-1.*t2656*t6553 - 1.*t2656*t6560 - 1.*t3862*t6565 - 1.*t4146*t6565) + t3862*(t3462*t6553 + t3462*t6560 + t3653*t6565 + t4240*t6565) + t3462*t6821 + t2656*t6908)*var2[0] + (t3653*(t3387*t6553 + t3387*t6560 + t3689*t6565 + t4215*t6565) + t3689*(-1.*t3462*t6553 - 1.*t3462*t6560 - 1.*t3653*t6565 - 1.*t4240*t6565) + t3462*t6649 + t3387*t6724)*var2[1] + (t3689*(t2656*t6553 + t2656*t6560 + t3862*t6565 + t4146*t6565) + t3862*(-1.*t3387*t6553 - 1.*t3387*t6560 - 1.*t3689*t6565 - 1.*t4215*t6565) + t3387*t6588 + t2656*t6628)*var2[2];
  p_output1[27]=(t1942*t3493*t6821 - 1.*t1942*t2208*t3296*t6908 + t3653*(-1.*t2208*t3296*t6551 + t1942*t2208*t3296*t6560 - 1.*t2208*t2209*t3296*t6565 + t2209*t2656*t6942 - 1.*t1942*t3862*t6942 + t7295) + t3862*(t1942*t3493*t6560 - 1.*t2209*t3493*t6565 - 1.*t2209*t3462*t6942 + t1942*t3653*t6942 + t7332 + t7355))*var2[0] + (t1942*t3493*t6649 + t1942*t3511*t6724 + t3653*(t1942*t3511*t6560 - 1.*t2209*t3511*t6565 - 1.*t2209*t3387*t6942 + t1942*t3689*t6942 + t7082 + t7083) + t3689*(-1.*t1942*t3493*t6560 + t2209*t3493*t6565 + t2209*t3462*t6942 - 1.*t1942*t3653*t6942 + t7203 + t7242))*var2[1] + (t1942*t3511*t6588 - 1.*t1942*t2208*t3296*t6628 + t3689*(t2208*t3296*t6551 - 1.*t1942*t2208*t3296*t6560 + t2208*t2209*t3296*t6565 - 1.*t2209*t2656*t6942 + t1942*t3862*t6942 + t6955) + t3862*(-1.*t1942*t3511*t6560 + t2209*t3511*t6565 + t2209*t3387*t6942 - 1.*t1942*t3689*t6942 + t7003 + t7004))*var2[2];
  p_output1[28]=(t3545*t6821 + t3528*t6908 + t3653*(-1.*t3528*t6560 - 1.*t4491*t6565 - 1.*t3862*t7486 - 1.*t2656*t7491 + t7640 + t7644) + t3862*(t3545*t6560 + t4654*t6565 + t3653*t7486 + t3462*t7491 + t7663 + t7667))*var2[0] + (t3545*t6649 + t3538*t6724 + t3653*(t3538*t6560 + t4619*t6565 + t3689*t7486 + t3387*t7491 + t7551 + t7562) + t3689*(-1.*t3545*t6560 - 1.*t4654*t6565 - 1.*t3653*t7486 - 1.*t3462*t7491 + t7593 + t7597))*var2[1] + (t3538*t6588 + t3528*t6628 + t3689*(t3528*t6560 + t4491*t6565 + t7452 + t3862*t7486 + t7488 + t2656*t7491) + t3862*(-1.*t3538*t6560 - 1.*t4619*t6565 - 1.*t3689*t7486 - 1.*t3387*t7491 + t7503 + t7504))*var2[2];
  p_output1[29]=(t3621*t6821 + t3653*(-1.*t3862*t7888 - 1.*t2656*t7905 + t8373) + t3862*(t3621*t6560 + t4766*t6565 + t3653*t7888 + t3462*t7905 + t8523 + t8541))*var2[0] + (t3621*t6649 + t3653*t6724 + t3653*(t6884 + t6890 + t6901 + t3689*t7888 + t3387*t7905 + t8034) + t3689*(-1.*t3621*t6560 - 1.*t4766*t6565 - 1.*t3653*t7888 - 1.*t3462*t7905 + t8080 + t8099))*var2[1] + (t3653*t6588 + t3689*(t7818 + t3862*t7888 + t2656*t7905) + t3862*(t6706 + t6716 + t6723 - 1.*t3689*t7888 - 1.*t3387*t7905 + t7945))*var2[2];
  p_output1[30]=(t3689*t6821 + t3653*(-1.*t3862*t8872 - 1.*t2656*t8896 + t9220) + t3862*(t6643 + t6644 + t6647 + t3653*t8872 + t3462*t8896 + t9236))*var2[0] + (t3689*t6649 + t3788*t6724 + t3653*(t3788*t6560 + t5088*t6565 + t3689*t8872 + t3387*t8896 + t9121 + t9122) + t3689*(t6625 + t6626 + t6627 - 1.*t3653*t8872 - 1.*t3462*t8896 + t9201))*var2[1] + (t3788*t6588 + t3689*(t8661 + t3862*t8872 + t2656*t8896) + t3862*(-1.*t3788*t6560 - 1.*t5088*t6565 - 1.*t3689*t8872 - 1.*t3387*t8896 + t8916 + t8918))*var2[2];
  p_output1[31]=t3653*t6821 + t3862*t6908;
  p_output1[32]=t3653*t6649 + t3689*t6724;
  p_output1[33]=t3689*t6588 + t3862*t6628;
  p_output1[34]=(t4081*(t2208*t2391*t6942 + t7295) + t2208*t3296*(t3493*t6551 + t3453*t6942 + t7332 + t7355) + t3453*t9467 - 1.*t2208*t2391*t9596)*var2[0] + (t4081*(t3511*t6551 + t3352*t6942 + t7082 + t7083) + t3995*(-1.*t3493*t6551 - 1.*t3453*t6942 + t7203 + t7242) + t3453*t9425 + t3352*t9436)*var2[1] + (t3995*(-1.*t2208*t2391*t6942 + t6955) + t2208*t3296*(-1.*t3511*t6551 - 1.*t3352*t6942 + t7003 + t7004) + t3352*t9332 - 1.*t2208*t2391*t9395)*var2[2];
  p_output1[35]=(t2208*t3296*(t10095 + t10096 + t2208*t2391*t3316*t6551 - 1.*t2391*t3453*t7442 + t7663 + t7667) - 1.*t2208*t3296*t3316*t9467 - 1.*t2184*t3296*t9596 + t4081*(t10042 + t10054 - 1.*t2184*t2391*t6551 + t7640 + t7644 - 1.*t2208*t7442*t9830))*var2[0] + (-1.*t2208*t3296*t3316*t9425 - 1.*t2208*t3277*t3296*t9436 + t4081*(t2208*t2391*t3277*t6551 - 1.*t2391*t3352*t7442 + t7551 + t7562 + t9901 + t9903) + t3995*(-1.*t2208*t2391*t3316*t6551 + t2391*t3453*t7442 + t7593 + t7597 + t9926 + t9933))*var2[1] + (-1.*t2208*t3277*t3296*t9332 - 1.*t2184*t3296*t9395 + t3995*(t2184*t2391*t6551 + t7452 + t7488 + t9805 + t9807 + t2208*t7442*t9830) + t2208*t3296*(-1.*t2208*t2391*t3277*t6551 + t2391*t3352*t7442 + t7503 + t7504 + t9846 + t9848))*var2[2];
  p_output1[36]=(t4081*(-1.*t2184*t2208*t7727 + t2208*t2391*t7876 + t8373) + t2208*t3296*(t10292 + t10293 + t3601*t6551 + t3453*t7876 + t8523 + t8541) + t4713*t9467)*var2[0] + (t3995*(t10249 + t10250 - 1.*t3601*t6551 - 1.*t3453*t7876 + t8080 + t8099) + t4713*t9425 + t4081*t9436 + t4081*(t10238 + t6884 + t3352*t7876 + t8034 + t9582 + t9595))*var2[1] + (t3995*(t2184*t2208*t7727 + t7818 - 1.*t2208*t2391*t7876) + t4081*t9332 + t2208*t3296*(t10214 + t6706 - 1.*t3352*t7876 + t7945 + t9432 + t9435))*var2[2];
  p_output1[37]=(t4081*(-1.*t2184*t2208*t8622 + t2208*t2391*t8697 + t9220) + t2208*t3296*(t10529 + t6643 + t3453*t8697 + t9236 + t9423 + t9424) + t3995*t9467)*var2[0] + (t4081*(t10333 + t10365 + t3775*t6551 + t3352*t8697 + t9121 + t9122) + t3995*(t10478 + t6625 - 1.*t3453*t8697 + t9201 + t9380 + t9389) + t3995*t9425 + t5068*t9436)*var2[1] + (t3995*(t2184*t2208*t8622 + t8661 - 1.*t2208*t2391*t8697) + t2208*t3296*(t10313 + t10314 - 1.*t3775*t6551 - 1.*t3352*t8697 + t8916 + t8918) + t5068*t9332)*var2[2];
  p_output1[38]=t4081*t9467 + t2208*t3296*t9596;
  p_output1[39]=t4081*t9425 + t3995*t9436;
  p_output1[40]=t3995*t9332 + t2208*t3296*t9395;
  p_output1[41]=(t10581*t2208 - 1.*t10567*t2184*t3316 + t2208*t3316*(t10042 + t10054 + t2184*t6549 - 1.*t2208*t7442) + t2184*(t10095 + t10096 - 1.*t2208*t3316*t6549 - 1.*t2184*t3316*t7442))*var2[0] + (-1.*t10649*t2184*t3277 - 1.*t10662*t2184*t3316 + t2208*t3316*(-1.*t2208*t3277*t6549 - 1.*t2184*t3277*t7442 + t9901 + t9903) + t2208*t3277*(t2208*t3316*t6549 + t2184*t3316*t7442 + t9926 + t9933))*var2[1] + (t10626*t2208 - 1.*t10599*t2184*t3277 + t2208*t3277*(-1.*t2184*t6549 + t2208*t7442 + t9805 + t9807) + t2184*(t2208*t3277*t6549 + t2184*t3277*t7442 + t9846 + t9848))*var2[2];
  p_output1[42]=(t10567*t2208*t3429 + t2184*(t10292 + t10293 + t3587*t6539 - 1.*t2184*t3429*t6549 + t10676*t3316*t7727 + t3429*t7799))*var2[0] + (t10649*t2208*t3316 + t10662*t2208*t3429 + t2208*t3277*(t10249 + t10250 + t10705 + t10706 + t2184*t3429*t6549 - 1.*t10676*t3316*t7727) + t2208*t3316*(t10238 + t10577 + t10579 + t10719 + t10676*t3277*t7727 + t9582))*var2[1] + (t10599*t2208*t3316 + t2184*(t10214 + t10646 + t10648 - 1.*t10676*t3277*t7727 - 1.*t3316*t7799 + t9432))*var2[2];
  p_output1[43]=(t10567*t2208*t3277 + t2184*(t10529 + t10658 + t10660 + t10676*t3316*t8622 + t3429*t8652 + t9423))*var2[0] + (t10662*t2208*t3277 + t10649*t2208*t3587 + t2208*t3316*(t10333 + t10365 + t10812 + t10819 - 1.*t2184*t3587*t6549 + t10676*t3277*t8622) + t2208*t3277*(t10478 + t10624 + t10625 + t10801 - 1.*t10676*t3316*t8622 + t9380))*var2[1] + (t10599*t2208*t3587 + t2184*(t10313 + t10314 - 1.*t3277*t6539 + t2184*t3587*t6549 - 1.*t10676*t3277*t8622 - 1.*t3316*t8652))*var2[2];
  p_output1[44]=t10581*t2184 + t10567*t2208*t3316;
  p_output1[45]=t10649*t2208*t3277 + t10662*t2208*t3316;
  p_output1[46]=t10626*t2184 + t10599*t2208*t3277;
  p_output1[47]=(0.1575*t3316 + 0.2255*t3587)*var2[0] + (t10867*t3429 + t10859*t3587 + t3429*(t10577 + t10719 + t3316*t6503 + t3277*t7727) + t3316*(t10705 + t10706 - 1.*t3429*t6503 - 1.*t3316*t7727))*var2[1] - 0.068*t3429*var2[2];
  p_output1[48]=(0.2255*t3316 + 0.1575*t3587)*var2[0] + (t10867*t3277 + t10859*t3316 + t3429*(t10812 + t10819 + t3587*t6503 + t3277*t8622) + t3316*(t10625 + t10801 - 1.*t3277*t6503 - 1.*t3316*t8622))*var2[1] - 0.068*t3277*var2[2];
  p_output1[49]=0.1575*t3277 + 0.2255*t3429;
  p_output1[50]=t10867*t3316 + t10859*t3429;
  p_output1[51]=-0.068*t3316;
  p_output1[52]=(0.325*t2915 - 1.*t2915*t6497 - 1.*t2915*t8618)*var2[0] + (t10949 + t10950 - 1.*t2974*t8618)*var2[2];
  p_output1[53]=t10949 + t10950 - 1.*t2915*t6439;
  p_output1[54]=-0.325*t2915 - 1.*t2974*t6439 + t2915*t6497;
  p_output1[55]=-0.0641;
  p_output1[56]=-0.28;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 57, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_fFrFoot_vec_DiagonalStance.hh"

namespace DiagonalStance
{

void J_fFrFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
