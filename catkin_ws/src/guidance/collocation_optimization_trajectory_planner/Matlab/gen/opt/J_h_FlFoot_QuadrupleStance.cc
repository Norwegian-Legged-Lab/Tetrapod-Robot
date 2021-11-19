/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 17:51:43 GMT+01:00
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
  double t7;
  double t319;
  double t1095;
  double t1410;
  double t1448;
  double t1466;
  double t172;
  double t2138;
  double t2502;
  double t2509;
  double t2511;
  double t2529;
  double t2939;
  double t3144;
  double t2433;
  double t2448;
  double t2462;
  double t2573;
  double t2622;
  double t2624;
  double t3300;
  double t3318;
  double t3333;
  double t3367;
  double t3180;
  double t3233;
  double t3235;
  double t3256;
  double t3261;
  double t3263;
  double t4097;
  double t3816;
  double t3870;
  double t3951;
  double t3959;
  double t3471;
  double t3474;
  double t3507;
  double t3553;
  double t3609;
  double t3628;
  double t1532;
  double t1579;
  double t2290;
  double t2351;
  double t2486;
  double t2521;
  double t2566;
  double t2570;
  double t2637;
  double t2734;
  double t2755;
  double t4389;
  double t4418;
  double t4454;
  double t4468;
  double t4481;
  double t4482;
  double t3272;
  double t3364;
  double t3393;
  double t3469;
  double t3656;
  double t3717;
  double t3813;
  double t3991;
  double t3999;
  double t4038;
  double t4082;
  double t4325;
  double t4334;
  double t4625;
  double t4632;
  double t4634;
  double t4495;
  double t4505;
  double t4538;
  double t4648;
  double t4652;
  double t4683;
  double t4130;
  double t4148;
  double t4461;
  double t4489;
  double t4588;
  double t4643;
  double t4712;
  double t4732;
  double t4733;
  double t4748;
  double t4750;
  double t4776;
  double t4794;
  double t4796;
  double t4811;
  double t4866;
  double t4871;
  double t4872;
  double t4873;
  double t4933;
  double t5019;
  double t5031;
  double t5217;
  double t5230;
  double t5242;
  double t5326;
  double t5346;
  double t5367;
  double t5385;
  double t5416;
  double t5455;
  double t5490;
  double t5498;
  double t5270;
  double t5272;
  double t5295;
  double t5307;
  double t5712;
  double t5715;
  double t5721;
  double t5724;
  double t5643;
  double t5660;
  double t5665;
  double t5666;
  double t5747;
  double t5763;
  double t5972;
  double t5958;
  double t5968;
  double t5978;
  double t5980;
  double t5983;
  double t5990;
  double t6001;
  double t2970;
  double t3017;
  double t3026;
  double t3083;
  double t6016;
  double t6019;
  double t6028;
  double t6032;
  double t6034;
  double t6042;
  double t6069;
  double t6070;
  double t6080;
  double t6090;
  double t6183;
  double t6186;
  double t6188;
  double t6193;
  double t6112;
  double t6152;
  double t6153;
  double t6161;
  double t6347;
  double t6348;
  double t6351;
  double t6358;
  double t6364;
  double t6366;
  double t6392;
  double t6403;
  double t6405;
  double t6408;
  double t6446;
  double t6449;
  double t6458;
  double t6460;
  double t6426;
  double t6427;
  double t6430;
  double t6435;
  double t6610;
  double t6629;
  double t6633;
  double t6641;
  double t6648;
  double t6655;
  double t6669;
  double t6670;
  double t6676;
  double t6681;
  double t6690;
  double t6691;
  double t6731;
  double t6734;
  double t6738;
  double t6707;
  double t6713;
  double t6714;
  double t6744;
  double t6746;
  double t6749;
  double t5074;
  double t5090;
  double t5126;
  double t5141;
  double t6859;
  double t6860;
  double t6862;
  double t6866;
  double t6870;
  double t6899;
  double t6902;
  double t6948;
  double t6957;
  double t6958;
  double t6910;
  double t6912;
  double t6917;
  double t6981;
  double t6988;
  double t7000;
  double t5160;
  double t5164;
  double t5171;
  double t5183;
  double t5207;
  double t5208;
  double t5248;
  double t5249;
  double t5251;
  double t7109;
  double t7113;
  double t7115;
  double t7134;
  double t7142;
  double t7150;
  double t7151;
  double t7166;
  double t7170;
  double t7171;
  double t7172;
  double t7122;
  double t7123;
  double t7130;
  double t7131;
  double t5668;
  double t5682;
  double t5694;
  double t5725;
  double t5734;
  double t5745;
  double t5768;
  double t5771;
  double t5803;
  double t7240;
  double t7246;
  double t7263;
  double t7267;
  double t7224;
  double t7228;
  double t7230;
  double t7231;
  double t7270;
  double t7292;
  double t7366;
  double t7418;
  double t7721;
  double t7722;
  double t7724;
  double t7747;
  double t7756;
  double t7761;
  double t7782;
  double t7789;
  double t7790;
  double t7793;
  double t7872;
  double t7878;
  double t7879;
  double t7907;
  double t7832;
  double t7848;
  double t7867;
  double t7869;
  double t7982;
  double t7988;
  double t7995;
  double t7998;
  double t8000;
  double t8004;
  double t8005;
  double t8010;
  double t8031;
  double t8033;
  double t8035;
  double t8012;
  double t8016;
  double t8017;
  double t8042;
  double t8045;
  double t8047;
  double t8105;
  double t8121;
  double t8123;
  double t8125;
  double t8128;
  double t8131;
  double t8139;
  double t8155;
  double t8157;
  double t8159;
  double t8146;
  double t8148;
  double t8150;
  double t8163;
  double t8164;
  double t8173;
  double t8261;
  double t8262;
  double t8268;
  double t8316;
  double t8318;
  double t8327;
  double t8338;
  double t8349;
  double t8350;
  double t8355;
  double t8281;
  double t8293;
  double t8298;
  double t8312;
  double t8510;
  double t8511;
  double t8515;
  double t8519;
  double t8475;
  double t8491;
  double t8492;
  double t8498;
  double t8527;
  double t8528;
  t7 = Sin(var1[4]);
  t319 = Cos(var1[6]);
  t1095 = -1.*t319;
  t1410 = 1. + t1095;
  t1448 = 0.15121*t1410;
  t1466 = Sin(var1[6]);
  t172 = Sin(var1[5]);
  t2138 = Cos(var1[5]);
  t2502 = Cos(var1[7]);
  t2509 = -1.*t2502;
  t2511 = 1. + t2509;
  t2529 = Sin(var1[7]);
  t2939 = Cos(var1[4]);
  t3144 = -1. + t2502;
  t2433 = t319*t7*t172;
  t2448 = t2138*t7*t1466;
  t2462 = t2433 + t2448;
  t2573 = -1.*t2138*t319*t7;
  t2622 = t7*t172*t1466;
  t2624 = t2573 + t2622;
  t3300 = Cos(var1[8]);
  t3318 = -1.*t3300;
  t3333 = 1. + t3318;
  t3367 = Sin(var1[8]);
  t3180 = 4.e-6*t2939*t3144;
  t3233 = 1.6e-11*t3144;
  t3235 = 1. + t3233;
  t3256 = t3235*t2462;
  t3261 = 4.e-6*t2624*t2529;
  t3263 = t3180 + t3256 + t3261;
  t4097 = -1. + t3300;
  t3816 = t2939*t2502;
  t3870 = 4.e-6*t3144*t2462;
  t3951 = t2624*t2529;
  t3959 = t3816 + t3870 + t3951;
  t3471 = -1.000000000016*t2511;
  t3474 = 1. + t3471;
  t3507 = t3474*t2624;
  t3553 = -1.*t2939*t2529;
  t3609 = -4.e-6*t2462*t2529;
  t3628 = t3507 + t3553 + t3609;
  t1532 = -0.15121*t1466;
  t1579 = t1448 + t1532;
  t2290 = 0.15121*t1466;
  t2351 = t1448 + t2290;
  t2486 = -1.2484e-7*var1[7];
  t2521 = -1.5499600000248e-7*t2511;
  t2566 = 1.124840000016e-6*t2529;
  t2570 = t2486 + t2521 + t2566;
  t2637 = 0.281210000008499*t2511;
  t2734 = 0.03874900000062*t2529;
  t2755 = t2637 + t2734;
  t4389 = -1.*t2939*t2138*t319;
  t4418 = t2939*t172*t1466;
  t4454 = t4389 + t4418;
  t4468 = -1.*t2939*t319*t172;
  t4481 = -1.*t2939*t2138*t1466;
  t4482 = t4468 + t4481;
  t3272 = -1.284e-8*var1[8];
  t3364 = -1.5499600000248e-7*t3333;
  t3393 = 2.012840000032e-6*t3367;
  t3469 = t3272 + t3364 + t3393;
  t3656 = 0.503210000016051*t3333;
  t3717 = 0.03874900000062*t3367;
  t3813 = t3656 + t3717;
  t3991 = 5.136e-14*var1[8];
  t3999 = -0.03874900000062*t3333;
  t4038 = 0.503210000008*t3367;
  t4082 = t3991 + t3999 + t4038;
  t4325 = -1.000000000016*t3333;
  t4334 = 1. + t4325;
  t4625 = t3474*t4482;
  t4632 = -4.e-6*t4454*t2529;
  t4634 = t4625 + t4632;
  t4495 = t3235*t4454;
  t4505 = 4.e-6*t4482*t2529;
  t4538 = t4495 + t4505;
  t4648 = 4.e-6*t3144*t4454;
  t4652 = t4482*t2529;
  t4683 = t4648 + t4652;
  t4130 = 1.6e-11*t4097;
  t4148 = 1. + t4130;
  t4461 = t4454*t2570;
  t4489 = t4482*t2755;
  t4588 = t4538*t3469;
  t4643 = t4634*t3813;
  t4712 = t4683*t4082;
  t4732 = t4334*t4634;
  t4733 = -4.e-6*t4538*t3367;
  t4748 = -1.*t4683*t3367;
  t4750 = t4732 + t4733 + t4748;
  t4776 = 0.80321*t4750;
  t4794 = t4148*t4538;
  t4796 = 4.e-6*t4097*t4683;
  t4811 = 4.e-6*t4634*t3367;
  t4866 = t4794 + t4796 + t4811;
  t4871 = 0.14871*t4866;
  t4872 = 4.e-6*t4097*t4538;
  t4873 = t3300*t4683;
  t4933 = t4634*t3367;
  t5019 = t4872 + t4873 + t4933;
  t5031 = -0.03875*t5019;
  t5217 = t2939*t2138*t319;
  t5230 = -1.*t2939*t172*t1466;
  t5242 = t5217 + t5230;
  t5326 = -1.*t2502*t7;
  t5346 = -4.e-6*t2502*t4482;
  t5367 = -1.000000000016*t5242*t2529;
  t5385 = t5326 + t5346 + t5367;
  t5416 = t2502*t5242;
  t5455 = -1.*t7*t2529;
  t5490 = -4.e-6*t4482*t2529;
  t5498 = t5416 + t5455 + t5490;
  t5270 = 4.e-6*t2502*t5242;
  t5272 = -4.e-6*t7*t2529;
  t5295 = -1.6e-11*t4482*t2529;
  t5307 = t5270 + t5272 + t5295;
  t5712 = 4.e-6*t3144*t7;
  t5715 = t3235*t4482;
  t5721 = 4.e-6*t5242*t2529;
  t5724 = t5712 + t5715 + t5721;
  t5643 = t2502*t7;
  t5660 = 4.e-6*t3144*t4482;
  t5665 = t5242*t2529;
  t5666 = t5643 + t5660 + t5665;
  t5747 = t3474*t5242;
  t5763 = t5747 + t5455 + t5490;
  t5972 = Cos(var1[3]);
  t5958 = Sin(var1[3]);
  t5968 = -1.*t2138*t5958;
  t5978 = -1.*t5972*t7*t172;
  t5980 = t5968 + t5978;
  t5983 = t5972*t2138*t7;
  t5990 = -1.*t5958*t172;
  t6001 = t5983 + t5990;
  t2970 = 4.9936e-13*var1[7];
  t3017 = -0.03874900000062*t2511;
  t3026 = 0.281210000004*t2529;
  t3083 = t2970 + t3017 + t3026;
  t6016 = t319*t5980;
  t6019 = -1.*t6001*t1466;
  t6028 = t6016 + t6019;
  t6032 = t319*t6001;
  t6034 = t5980*t1466;
  t6042 = t6032 + t6034;
  t6069 = -4.e-6*t5972*t2939*t3144;
  t6070 = t3235*t6028;
  t6080 = 4.e-6*t6042*t2529;
  t6090 = t6069 + t6070 + t6080;
  t6183 = -1.*t5972*t2939*t2502;
  t6186 = 4.e-6*t3144*t6028;
  t6188 = t6042*t2529;
  t6193 = t6183 + t6186 + t6188;
  t6112 = t3474*t6042;
  t6152 = t5972*t2939*t2529;
  t6153 = -4.e-6*t6028*t2529;
  t6161 = t6112 + t6152 + t6153;
  t6347 = -1.*t2939*t319*t5958*t172;
  t6348 = -1.*t2939*t2138*t5958*t1466;
  t6351 = t6347 + t6348;
  t6358 = t2939*t2138*t319*t5958;
  t6364 = -1.*t2939*t5958*t172*t1466;
  t6366 = t6358 + t6364;
  t6392 = 4.e-6*t3144*t5958*t7;
  t6403 = t3235*t6351;
  t6405 = 4.e-6*t6366*t2529;
  t6408 = t6392 + t6403 + t6405;
  t6446 = t2502*t5958*t7;
  t6449 = 4.e-6*t3144*t6351;
  t6458 = t6366*t2529;
  t6460 = t6446 + t6449 + t6458;
  t6426 = t3474*t6366;
  t6427 = -1.*t5958*t7*t2529;
  t6430 = -4.e-6*t6351*t2529;
  t6435 = t6426 + t6427 + t6430;
  t6610 = -1.*t2138*t5958*t7;
  t6629 = -1.*t5972*t172;
  t6633 = t6610 + t6629;
  t6641 = t5972*t2138;
  t6648 = -1.*t5958*t7*t172;
  t6655 = t6641 + t6648;
  t6669 = t319*t6633;
  t6670 = -1.*t6655*t1466;
  t6676 = t6669 + t6670;
  t6681 = t319*t6655;
  t6690 = t6633*t1466;
  t6691 = t6681 + t6690;
  t6731 = t3474*t6691;
  t6734 = -4.e-6*t6676*t2529;
  t6738 = t6731 + t6734;
  t6707 = t3235*t6676;
  t6713 = 4.e-6*t6691*t2529;
  t6714 = t6707 + t6713;
  t6744 = 4.e-6*t3144*t6676;
  t6746 = t6691*t2529;
  t6749 = t6744 + t6746;
  t5074 = -0.15121*t319;
  t5090 = t5074 + t2290;
  t5126 = 0.15121*t319;
  t5141 = t5126 + t2290;
  t6859 = t2138*t5958*t7;
  t6860 = t5972*t172;
  t6862 = t6859 + t6860;
  t6866 = -1.*t319*t6862;
  t6870 = t6866 + t6670;
  t6899 = -1.*t6862*t1466;
  t6902 = t6681 + t6899;
  t6948 = t3474*t6902;
  t6957 = -4.e-6*t6870*t2529;
  t6958 = t6948 + t6957;
  t6910 = t3235*t6870;
  t6912 = 4.e-6*t6902*t2529;
  t6917 = t6910 + t6912;
  t6981 = 4.e-6*t3144*t6870;
  t6988 = t6902*t2529;
  t7000 = t6981 + t6988;
  t5160 = 0.281210000004*t2502;
  t5164 = -0.03874900000062*t2529;
  t5171 = 4.9936e-13 + t5160 + t5164;
  t5183 = 1.124840000016e-6*t2502;
  t5207 = -1.5499600000248e-7*t2529;
  t5208 = -1.2484e-7 + t5183 + t5207;
  t5248 = 0.03874900000062*t2502;
  t5249 = 0.281210000008499*t2529;
  t5251 = t5248 + t5249;
  t7109 = t319*t6862;
  t7113 = t6655*t1466;
  t7115 = t7109 + t7113;
  t7134 = t2939*t2502*t5958;
  t7142 = -4.e-6*t2502*t6902;
  t7150 = -1.000000000016*t7115*t2529;
  t7151 = t7134 + t7142 + t7150;
  t7166 = t2502*t7115;
  t7170 = t2939*t5958*t2529;
  t7171 = -4.e-6*t6902*t2529;
  t7172 = t7166 + t7170 + t7171;
  t7122 = 4.e-6*t2502*t7115;
  t7123 = 4.e-6*t2939*t5958*t2529;
  t7130 = -1.6e-11*t6902*t2529;
  t7131 = t7122 + t7123 + t7130;
  t5668 = 0.503210000008*t3300;
  t5682 = -0.03874900000062*t3367;
  t5694 = 5.136e-14 + t5668 + t5682;
  t5725 = 2.012840000032e-6*t3300;
  t5734 = -1.5499600000248e-7*t3367;
  t5745 = -1.284e-8 + t5725 + t5734;
  t5768 = 0.03874900000062*t3300;
  t5771 = 0.503210000016051*t3367;
  t5803 = t5768 + t5771;
  t7240 = -4.e-6*t2939*t3144*t5958;
  t7246 = t3235*t6902;
  t7263 = 4.e-6*t7115*t2529;
  t7267 = t7240 + t7246 + t7263;
  t7224 = -1.*t2939*t2502*t5958;
  t7228 = 4.e-6*t3144*t6902;
  t7230 = t7115*t2529;
  t7231 = t7224 + t7228 + t7230;
  t7270 = t3474*t7115;
  t7292 = t7270 + t7170 + t7171;
  t7366 = -4.e-6*t7267*t3367;
  t7418 = -1.*t7231*t3367;
  t7721 = t5972*t2939*t319*t172;
  t7722 = t5972*t2939*t2138*t1466;
  t7724 = t7721 + t7722;
  t7747 = -1.*t5972*t2939*t2138*t319;
  t7756 = t5972*t2939*t172*t1466;
  t7761 = t7747 + t7756;
  t7782 = -4.e-6*t5972*t3144*t7;
  t7789 = t3235*t7724;
  t7790 = 4.e-6*t7761*t2529;
  t7793 = t7782 + t7789 + t7790;
  t7872 = -1.*t5972*t2502*t7;
  t7878 = 4.e-6*t3144*t7724;
  t7879 = t7761*t2529;
  t7907 = t7872 + t7878 + t7879;
  t7832 = t3474*t7761;
  t7848 = t5972*t7*t2529;
  t7867 = -4.e-6*t7724*t2529;
  t7869 = t7832 + t7848 + t7867;
  t7982 = t2138*t5958;
  t7988 = t5972*t7*t172;
  t7995 = t7982 + t7988;
  t7998 = -1.*t7995*t1466;
  t8000 = t6032 + t7998;
  t8004 = t319*t7995;
  t8005 = t6001*t1466;
  t8010 = t8004 + t8005;
  t8031 = t3474*t8010;
  t8033 = -4.e-6*t8000*t2529;
  t8035 = t8031 + t8033;
  t8012 = t3235*t8000;
  t8016 = 4.e-6*t8010*t2529;
  t8017 = t8012 + t8016;
  t8042 = 4.e-6*t3144*t8000;
  t8045 = t8010*t2529;
  t8047 = t8042 + t8045;
  t8105 = -1.*t5972*t2138*t7;
  t8121 = t5958*t172;
  t8123 = t8105 + t8121;
  t8125 = -1.*t319*t8123;
  t8128 = t8125 + t7998;
  t8131 = -1.*t8123*t1466;
  t8139 = t8004 + t8131;
  t8155 = t3474*t8139;
  t8157 = -4.e-6*t8128*t2529;
  t8159 = t8155 + t8157;
  t8146 = t3235*t8128;
  t8148 = 4.e-6*t8139*t2529;
  t8150 = t8146 + t8148;
  t8163 = 4.e-6*t3144*t8128;
  t8164 = t8139*t2529;
  t8173 = t8163 + t8164;
  t8261 = t319*t8123;
  t8262 = t7995*t1466;
  t8268 = t8261 + t8262;
  t8316 = -4.e-6*t2502*t8139;
  t8318 = -1.000000000016*t8268*t2529;
  t8327 = t6183 + t8316 + t8318;
  t8338 = t2502*t8268;
  t8349 = -1.*t5972*t2939*t2529;
  t8350 = -4.e-6*t8139*t2529;
  t8355 = t8338 + t8349 + t8350;
  t8281 = 4.e-6*t2502*t8268;
  t8293 = -4.e-6*t5972*t2939*t2529;
  t8298 = -1.6e-11*t8139*t2529;
  t8312 = t8281 + t8293 + t8298;
  t8510 = 4.e-6*t5972*t2939*t3144;
  t8511 = t3235*t8139;
  t8515 = 4.e-6*t8268*t2529;
  t8519 = t8510 + t8511 + t8515;
  t8475 = t5972*t2939*t2502;
  t8491 = 4.e-6*t3144*t8139;
  t8492 = t8268*t2529;
  t8498 = t8475 + t8491 + t8492;
  t8527 = t3474*t8268;
  t8528 = t8527 + t8349 + t8350;
  p_output1[0]=1.;
  p_output1[1]=t2462*t2570 + t2624*t2755 + t2939*t3083 + t3263*t3469 + t3628*t3813 + t3959*t4082 - 0.03875*(t3367*t3628 + t3300*t3959 + 4.e-6*t3263*t4097) + 0.14871*(4.e-6*t3367*t3628 + 4.e-6*t3959*t4097 + t3263*t4148) + 0.80321*(-4.e-6*t3263*t3367 - 1.*t3367*t3959 + t3628*t4334) + t1579*t172*t7 - 1.*t2138*t2351*t7;
  p_output1[2]=-1.*t1579*t2138*t2939 - 1.*t172*t2351*t2939 + t4461 + t4489 + t4588 + t4643 + t4712 + t4776 + t4871 + t5031;
  p_output1[3]=t4461 + t4489 + t4588 + t4643 + t4712 + t4776 + t4871 + t5031 - 1.*t172*t2939*t5090 + t2138*t2939*t5141;
  p_output1[4]=t4482*t5208 + t5242*t5251 + t3469*t5307 + t3813*t5385 + t4082*t5498 - 0.03875*(4.e-6*t4097*t5307 + t3367*t5385 + t3300*t5498) + 0.80321*(-4.e-6*t3367*t5307 + t4334*t5385 - 1.*t3367*t5498) + 0.14871*(t4148*t5307 + 4.e-6*t3367*t5385 + 4.e-6*t4097*t5498) + t5171*t7;
  p_output1[5]=t5666*t5694 + t5724*t5745 + 0.14871*(-4.e-6*t3367*t5666 - 1.6e-11*t3367*t5724 + 4.e-6*t3300*t5763) - 0.03875*(-1.*t3367*t5666 - 4.e-6*t3367*t5724 + t3300*t5763) + 0.80321*(-1.*t3300*t5666 - 4.e-6*t3300*t5724 - 1.000000000016*t3367*t5763) + t5763*t5803;
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=-1.*t2939*t3083*t5972 + t1579*t5980 + t2351*t6001 + t2570*t6028 + t2755*t6042 + t3469*t6090 + t3813*t6161 + t4082*t6193 - 0.03875*(4.e-6*t4097*t6090 + t3367*t6161 + t3300*t6193) + 0.80321*(-4.e-6*t3367*t6090 + t4334*t6161 - 1.*t3367*t6193) + 0.14871*(t4148*t6090 + 4.e-6*t3367*t6161 + 4.e-6*t4097*t6193);
  p_output1[9]=-1.*t1579*t172*t2939*t5958 + t2138*t2351*t2939*t5958 + t2570*t6351 + t2755*t6366 + t3469*t6408 + t3813*t6435 + t4082*t6460 - 0.03875*(4.e-6*t4097*t6408 + t3367*t6435 + t3300*t6460) + 0.80321*(-4.e-6*t3367*t6408 + t4334*t6435 - 1.*t3367*t6460) + 0.14871*(t4148*t6408 + 4.e-6*t3367*t6435 + 4.e-6*t4097*t6460) + t3083*t5958*t7;
  p_output1[10]=t1579*t6633 + t2351*t6655 + t2570*t6676 + t2755*t6691 + t3469*t6714 + t3813*t6738 + t4082*t6749 - 0.03875*(4.e-6*t4097*t6714 + t3367*t6738 + t3300*t6749) + 0.80321*(-4.e-6*t3367*t6714 + t4334*t6738 - 1.*t3367*t6749) + 0.14871*(t4148*t6714 + 4.e-6*t3367*t6738 + 4.e-6*t4097*t6749);
  p_output1[11]=t5090*t6655 + t5141*t6862 + t2570*t6870 + t2755*t6902 + t3469*t6917 + t3813*t6958 + t4082*t7000 - 0.03875*(4.e-6*t4097*t6917 + t3367*t6958 + t3300*t7000) + 0.80321*(-4.e-6*t3367*t6917 + t4334*t6958 - 1.*t3367*t7000) + 0.14871*(t4148*t6917 + 4.e-6*t3367*t6958 + 4.e-6*t4097*t7000);
  p_output1[12]=-1.*t2939*t5171*t5958 + t5208*t6902 + t5251*t7115 + t3469*t7131 + t3813*t7151 + t4082*t7172 - 0.03875*(4.e-6*t4097*t7131 + t3367*t7151 + t3300*t7172) + 0.80321*(-4.e-6*t3367*t7131 + t4334*t7151 - 1.*t3367*t7172) + 0.14871*(t4148*t7131 + 4.e-6*t3367*t7151 + 4.e-6*t4097*t7172);
  p_output1[13]=t5694*t7231 + t5745*t7267 + t5803*t7292 + 0.14871*(-4.e-6*t3367*t7231 - 1.6e-11*t3367*t7267 + 4.e-6*t3300*t7292) + 0.80321*(-1.*t3300*t7231 - 4.e-6*t3300*t7267 - 1.000000000016*t3367*t7292) - 0.03875*(t3300*t7292 + t7366 + t7418);
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=-1.*t2939*t3083*t5958 + t1579*t6655 + t2351*t6862 + t2570*t6902 + t2755*t7115 + t4082*t7231 + t3469*t7267 + t3813*t7292 + 0.14871*(4.e-6*t4097*t7231 + t4148*t7267 + 4.e-6*t3367*t7292) - 0.03875*(t3300*t7231 + 4.e-6*t4097*t7267 + t3367*t7292) + 0.80321*(t4334*t7292 + t7366 + t7418);
  p_output1[17]=t1579*t172*t2939*t5972 - 1.*t2138*t2351*t2939*t5972 - 1.*t3083*t5972*t7 + t2570*t7724 + t2755*t7761 + t3469*t7793 + t3813*t7869 + t4082*t7907 - 0.03875*(4.e-6*t4097*t7793 + t3367*t7869 + t3300*t7907) + 0.80321*(-4.e-6*t3367*t7793 + t4334*t7869 - 1.*t3367*t7907) + 0.14871*(t4148*t7793 + 4.e-6*t3367*t7869 + 4.e-6*t4097*t7907);
  p_output1[18]=t1579*t6001 + t2351*t7995 + t2570*t8000 + t2755*t8010 + t3469*t8017 + t3813*t8035 + t4082*t8047 - 0.03875*(4.e-6*t4097*t8017 + t3367*t8035 + t3300*t8047) + 0.80321*(-4.e-6*t3367*t8017 + t4334*t8035 - 1.*t3367*t8047) + 0.14871*(t4148*t8017 + 4.e-6*t3367*t8035 + 4.e-6*t4097*t8047);
  p_output1[19]=t5090*t7995 + t5141*t8123 + t2570*t8128 + t2755*t8139 + t3469*t8150 + t3813*t8159 + t4082*t8173 - 0.03875*(4.e-6*t4097*t8150 + t3367*t8159 + t3300*t8173) + 0.80321*(-4.e-6*t3367*t8150 + t4334*t8159 - 1.*t3367*t8173) + 0.14871*(t4148*t8150 + 4.e-6*t3367*t8159 + 4.e-6*t4097*t8173);
  p_output1[20]=t2939*t5171*t5972 + t5208*t8139 + t5251*t8268 + t3469*t8312 + t3813*t8327 + t4082*t8355 - 0.03875*(4.e-6*t4097*t8312 + t3367*t8327 + t3300*t8355) + 0.80321*(-4.e-6*t3367*t8312 + t4334*t8327 - 1.*t3367*t8355) + 0.14871*(t4148*t8312 + 4.e-6*t3367*t8327 + 4.e-6*t4097*t8355);
  p_output1[21]=t5694*t8498 + t5745*t8519 + t5803*t8528 + 0.14871*(-4.e-6*t3367*t8498 - 1.6e-11*t3367*t8519 + 4.e-6*t3300*t8528) - 0.03875*(-1.*t3367*t8498 - 4.e-6*t3367*t8519 + t3300*t8528) + 0.80321*(-1.*t3300*t8498 - 4.e-6*t3300*t8519 - 1.000000000016*t3367*t8528);
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

#include "J_h_FlFoot_QuadrupleStance.hh"

namespace QuadrupleStance
{

void J_h_FlFoot_QuadrupleStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
