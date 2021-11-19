/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:26:59 GMT+01:00
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
  double t47;
  double t843;
  double t852;
  double t858;
  double t964;
  double t981;
  double t1024;
  double t361;
  double t405;
  double t484;
  double t516;
  double t828;
  double t1155;
  double t35;
  double t1393;
  double t1394;
  double t1433;
  double t1598;
  double t1634;
  double t1641;
  double t1733;
  double t1740;
  double t1756;
  double t1817;
  double t2036;
  double t1892;
  double t1899;
  double t1900;
  double t1905;
  double t1921;
  double t1939;
  double t2074;
  double t2107;
  double t2129;
  double t2151;
  double t2312;
  double t2341;
  double t2363;
  double t2366;
  double t2399;
  double t2422;
  double t1051;
  double t1064;
  double t906;
  double t992;
  double t1468;
  double t1476;
  double t1574;
  double t1291;
  double t1328;
  double t1364;
  double t1375;
  double t1382;
  double t2210;
  double t2232;
  double t2278;
  double t2296;
  double t2309;
  double t2631;
  double t2643;
  double t2649;
  double t2659;
  double t2661;
  double t2670;
  double t1952;
  double t1988;
  double t2039;
  double t2055;
  double t2062;
  double t1757;
  double t1842;
  double t1891;
  double t2717;
  double t2767;
  double t2811;
  double t2845;
  double t2849;
  double t2873;
  double t2532;
  double t2536;
  double t2879;
  double t2884;
  double t2891;
  double t2466;
  double t2472;
  double t3030;
  double t2651;
  double t2711;
  double t2844;
  double t2878;
  double t2893;
  double t2894;
  double t2903;
  double t2905;
  double t2908;
  double t2925;
  double t2927;
  double t2940;
  double t2950;
  double t2965;
  double t2975;
  double t2977;
  double t2982;
  double t2984;
  double t2985;
  double t2996;
  double t3147;
  double t3154;
  double t3161;
  double t3189;
  double t3190;
  double t3191;
  double t3206;
  double t3207;
  double t3221;
  double t3241;
  double t3250;
  double t3254;
  double t3274;
  double t3296;
  double t3600;
  double t3601;
  double t3603;
  double t3637;
  double t3675;
  double t3683;
  double t3690;
  double t3730;
  double t3733;
  double t3735;
  double t3741;
  double t46;
  double t473;
  double t488;
  double t566;
  double t645;
  double t3815;
  double t3824;
  double t3823;
  double t3829;
  double t3837;
  double t3839;
  double t3851;
  double t3884;
  double t3901;
  double t3905;
  double t3906;
  double t3908;
  double t3911;
  double t3912;
  double t3916;
  double t3917;
  double t3918;
  double t3921;
  double t3927;
  double t3928;
  double t3930;
  double t3931;
  double t3937;
  double t3938;
  double t3940;
  double t3943;
  double t4052;
  double t4058;
  double t4061;
  double t4065;
  double t4071;
  double t4079;
  double t4089;
  double t4097;
  double t4098;
  double t4101;
  double t4112;
  double t4114;
  double t4123;
  double t4124;
  double t4130;
  double t4132;
  double t4133;
  double t4151;
  double t4218;
  double t4222;
  double t4223;
  double t4226;
  double t4254;
  double t4259;
  double t4268;
  double t4273;
  double t4276;
  double t4302;
  double t4303;
  double t4309;
  double t4311;
  double t4314;
  double t4316;
  double t4318;
  double t4325;
  double t4334;
  double t4349;
  double t4351;
  double t4357;
  double t3037;
  double t3057;
  double t3063;
  double t4425;
  double t4427;
  double t4430;
  double t4434;
  double t4436;
  double t4467;
  double t4468;
  double t4476;
  double t4493;
  double t4494;
  double t4502;
  double t4505;
  double t4506;
  double t4509;
  double t4534;
  double t4535;
  double t3077;
  double t3079;
  double t3087;
  double t3093;
  double t3099;
  double t3117;
  double t3123;
  double t3139;
  double t4608;
  double t4609;
  double t4610;
  double t4613;
  double t4616;
  double t4618;
  double t4620;
  double t4623;
  double t4629;
  double t4630;
  double t4640;
  double t4643;
  double t4644;
  double t4645;
  double t3569;
  double t3579;
  double t3597;
  double t3643;
  double t3653;
  double t3706;
  double t3713;
  double t3720;
  double t4742;
  double t4743;
  double t4755;
  double t4756;
  double t4760;
  double t4763;
  double t4778;
  double t4783;
  double t4784;
  double t4794;
  double t4798;
  double t4803;
  double t4952;
  double t4953;
  double t4954;
  double t4969;
  double t4972;
  double t4973;
  double t4976;
  double t4977;
  double t4981;
  double t4991;
  double t4993;
  double t5001;
  double t5002;
  double t5003;
  double t5005;
  double t5006;
  double t5007;
  double t5010;
  double t5067;
  double t5069;
  double t5070;
  double t5082;
  double t5083;
  double t5084;
  double t5105;
  double t5106;
  double t5116;
  double t5118;
  double t5128;
  double t5138;
  double t5140;
  double t5146;
  double t5155;
  double t5158;
  double t5163;
  double t5239;
  double t5246;
  double t5250;
  double t5262;
  double t5264;
  double t5274;
  double t5275;
  double t5285;
  double t5301;
  double t5312;
  double t5328;
  double t5329;
  double t5332;
  double t5335;
  double t5337;
  double t5339;
  double t5409;
  double t5410;
  double t5412;
  double t5418;
  double t5419;
  double t5431;
  double t5435;
  double t5436;
  double t5438;
  double t5440;
  double t5441;
  double t5442;
  double t5443;
  double t5497;
  double t5498;
  double t5499;
  double t5500;
  double t5505;
  double t5514;
  double t5515;
  double t5520;
  double t5524;
  double t5530;
  double t5533;
  t47 = Cos(var1[10]);
  t843 = Cos(var1[9]);
  t852 = -1.*t843;
  t858 = 1. + t852;
  t964 = Sin(var1[9]);
  t981 = -0.15121*t964;
  t1024 = Sin(var1[4]);
  t361 = -1.*t47;
  t405 = 1. + t361;
  t484 = -1. + t47;
  t516 = Sin(var1[10]);
  t828 = Cos(var1[5]);
  t1155 = Sin(var1[5]);
  t35 = Cos(var1[4]);
  t1393 = t828*t964*t1024;
  t1394 = t843*t1024*t1155;
  t1433 = t1393 + t1394;
  t1598 = -1.*t843*t828*t1024;
  t1634 = t964*t1024*t1155;
  t1641 = t1598 + t1634;
  t1733 = Cos(var1[11]);
  t1740 = -1.*t1733;
  t1756 = 1. + t1740;
  t1817 = Sin(var1[11]);
  t2036 = -1. + t1733;
  t1892 = t35*t516;
  t1899 = -4.e-6*t516*t1433;
  t1900 = -1.000000000016*t405;
  t1905 = 1. + t1900;
  t1921 = t1905*t1641;
  t1939 = t1892 + t1899 + t1921;
  t2074 = t47*t35;
  t2107 = 4.e-6*t405*t1433;
  t2129 = -1.*t516*t1641;
  t2151 = t2074 + t2107 + t2129;
  t2312 = 4.e-6*t405*t35;
  t2341 = 1.6e-11*t484;
  t2363 = 1. + t2341;
  t2366 = t2363*t1433;
  t2399 = 4.e-6*t516*t1641;
  t2422 = t2312 + t2366 + t2399;
  t1051 = -0.15121*t858;
  t1064 = t1051 + t981;
  t906 = 0.15121*t858;
  t992 = t906 + t981;
  t1468 = 0.281210000008499*t405;
  t1476 = -0.03874900000062*t516;
  t1574 = t1468 + t1476;
  t1291 = -1.2484e-7*var1[10];
  t1328 = 2.479936e-18*t405;
  t1364 = -1.54996e-7*t484;
  t1375 = 1.124840000016e-6*t516;
  t1382 = t1291 + t1328 + t1364 + t1375;
  t2210 = -1.26e-8*var1[11];
  t2232 = 2.552896e-18*t1756;
  t2278 = -1.59556e-7*t2036;
  t2296 = 2.012600000032e-6*t1817;
  t2309 = t2210 + t2232 + t2278 + t2296;
  t2631 = -1.*t35*t828*t964;
  t2643 = -1.*t843*t35*t1155;
  t2649 = t2631 + t2643;
  t2659 = -1.*t843*t35*t828;
  t2661 = t35*t964*t1155;
  t2670 = t2659 + t2661;
  t1952 = -5.04e-14*var1[11];
  t1988 = -0.039889*t1756;
  t2039 = 6.38224e-13*t2036;
  t2055 = -0.503150000008*t1817;
  t2062 = t1952 + t1988 + t2039 + t2055;
  t1757 = 0.50315000001605*t1756;
  t1842 = -0.0398890000006382*t1817;
  t1891 = t1757 + t1842;
  t2717 = 4.e-6*t516*t2649;
  t2767 = t2363*t2670;
  t2811 = t2717 + t2767;
  t2845 = -1.*t516*t2649;
  t2849 = 4.e-6*t405*t2670;
  t2873 = t2845 + t2849;
  t2532 = -1.000000000016*t1756;
  t2536 = 1. + t2532;
  t2879 = t1905*t2649;
  t2884 = -4.e-6*t516*t2670;
  t2891 = t2879 + t2884;
  t2466 = 1.6e-11*t2036;
  t2472 = 1. + t2466;
  t3030 = -0.15121*t843;
  t2651 = t1574*t2649;
  t2711 = t1382*t2670;
  t2844 = t2309*t2811;
  t2878 = t2062*t2873;
  t2893 = t1891*t2891;
  t2894 = -4.e-6*t1817*t2811;
  t2903 = t1817*t2873;
  t2905 = t2536*t2891;
  t2908 = t2894 + t2903 + t2905;
  t2925 = 0.803147*t2908;
  t2927 = 4.e-6*t1756*t2811;
  t2940 = t1733*t2873;
  t2950 = -1.*t1817*t2891;
  t2965 = t2927 + t2940 + t2950;
  t2975 = -0.041195*t2965;
  t2977 = t2472*t2811;
  t2982 = 4.e-6*t1756*t2873;
  t2984 = 4.e-6*t1817*t2891;
  t2985 = t2977 + t2982 + t2984;
  t2996 = -0.14871*t2985;
  t3147 = t843*t35*t828;
  t3154 = -1.*t35*t964*t1155;
  t3161 = t3147 + t3154;
  t3189 = -1.*t516*t1024;
  t3190 = -1.*t47*t3161;
  t3191 = t3189 + t2717 + t3190;
  t3206 = 4.e-6*t516*t1024;
  t3207 = -1.6e-11*t516*t2649;
  t3221 = 4.e-6*t47*t3161;
  t3241 = t3206 + t3207 + t3221;
  t3250 = t47*t1024;
  t3254 = -4.e-6*t47*t2649;
  t3274 = -1.000000000016*t516*t3161;
  t3296 = t3250 + t3254 + t3274;
  t3600 = t516*t1024;
  t3601 = -4.e-6*t516*t2649;
  t3603 = t1905*t3161;
  t3637 = t3600 + t3601 + t3603;
  t3675 = 4.e-6*t405*t2649;
  t3683 = -1.*t516*t3161;
  t3690 = t3250 + t3675 + t3683;
  t3730 = 4.e-6*t405*t1024;
  t3733 = t2363*t2649;
  t3735 = 4.e-6*t516*t3161;
  t3741 = t3730 + t3733 + t3735;
  t46 = -4.9936e-13*var1[10];
  t473 = -0.038749*t405;
  t488 = 6.19984e-13*t484;
  t566 = -0.281210000004*t516;
  t645 = t46 + t473 + t488 + t566;
  t3815 = Cos(var1[3]);
  t3824 = Sin(var1[3]);
  t3823 = t3815*t828*t1024;
  t3829 = -1.*t3824*t1155;
  t3837 = t3823 + t3829;
  t3839 = -1.*t828*t3824;
  t3851 = -1.*t3815*t1024*t1155;
  t3884 = t3839 + t3851;
  t3901 = -1.*t964*t3837;
  t3905 = t843*t3884;
  t3906 = t3901 + t3905;
  t3908 = t843*t3837;
  t3911 = t964*t3884;
  t3912 = t3908 + t3911;
  t3916 = -1.*t3815*t35*t516;
  t3917 = -4.e-6*t516*t3906;
  t3918 = t1905*t3912;
  t3921 = t3916 + t3917 + t3918;
  t3927 = -1.*t47*t3815*t35;
  t3928 = 4.e-6*t405*t3906;
  t3930 = -1.*t516*t3912;
  t3931 = t3927 + t3928 + t3930;
  t3937 = -4.e-6*t405*t3815*t35;
  t3938 = t2363*t3906;
  t3940 = 4.e-6*t516*t3912;
  t3943 = t3937 + t3938 + t3940;
  t4052 = -1.*t35*t828*t964*t3824;
  t4058 = -1.*t843*t35*t3824*t1155;
  t4061 = t4052 + t4058;
  t4065 = t843*t35*t828*t3824;
  t4071 = -1.*t35*t964*t3824*t1155;
  t4079 = t4065 + t4071;
  t4089 = t516*t3824*t1024;
  t4097 = -4.e-6*t516*t4061;
  t4098 = t1905*t4079;
  t4101 = t4089 + t4097 + t4098;
  t4112 = t47*t3824*t1024;
  t4114 = 4.e-6*t405*t4061;
  t4123 = -1.*t516*t4079;
  t4124 = t4112 + t4114 + t4123;
  t4130 = 4.e-6*t405*t3824*t1024;
  t4132 = t2363*t4061;
  t4133 = 4.e-6*t516*t4079;
  t4151 = t4130 + t4132 + t4133;
  t4218 = -1.*t828*t3824*t1024;
  t4222 = -1.*t3815*t1155;
  t4223 = t4218 + t4222;
  t4226 = t3815*t828;
  t4254 = -1.*t3824*t1024*t1155;
  t4259 = t4226 + t4254;
  t4268 = t964*t4223;
  t4273 = t843*t4259;
  t4276 = t4268 + t4273;
  t4302 = t843*t4223;
  t4303 = -1.*t964*t4259;
  t4309 = t4302 + t4303;
  t4311 = 4.e-6*t516*t4276;
  t4314 = t2363*t4309;
  t4316 = t4311 + t4314;
  t4318 = -1.*t516*t4276;
  t4325 = 4.e-6*t405*t4309;
  t4334 = t4318 + t4325;
  t4349 = t1905*t4276;
  t4351 = -4.e-6*t516*t4309;
  t4357 = t4349 + t4351;
  t3037 = 0.15121*t964;
  t3057 = t3030 + t3037;
  t3063 = t3030 + t981;
  t4425 = t828*t3824*t1024;
  t4427 = t3815*t1155;
  t4430 = t4425 + t4427;
  t4434 = -1.*t964*t4430;
  t4436 = t4434 + t4273;
  t4467 = -1.*t843*t4430;
  t4468 = t4467 + t4303;
  t4476 = 4.e-6*t516*t4436;
  t4493 = t2363*t4468;
  t4494 = t4476 + t4493;
  t4502 = -1.*t516*t4436;
  t4505 = 4.e-6*t405*t4468;
  t4506 = t4502 + t4505;
  t4509 = t1905*t4436;
  t4534 = -4.e-6*t516*t4468;
  t4535 = t4509 + t4534;
  t3077 = -0.281210000004*t47;
  t3079 = -4.9936e-13 + t3077 + t1476;
  t3087 = 1.124840000016e-6*t47;
  t3093 = 1.5499600000248e-7*t516;
  t3099 = -1.2484e-7 + t3087 + t3093;
  t3117 = -0.03874900000062*t47;
  t3123 = 0.281210000008499*t516;
  t3139 = t3117 + t3123;
  t4608 = t843*t4430;
  t4609 = t964*t4259;
  t4610 = t4608 + t4609;
  t4613 = t35*t516*t3824;
  t4616 = -1.*t47*t4610;
  t4618 = t4613 + t4476 + t4616;
  t4620 = -4.e-6*t35*t516*t3824;
  t4623 = -1.6e-11*t516*t4436;
  t4629 = 4.e-6*t47*t4610;
  t4630 = t4620 + t4623 + t4629;
  t4640 = -1.*t47*t35*t3824;
  t4643 = -4.e-6*t47*t4436;
  t4644 = -1.000000000016*t516*t4610;
  t4645 = t4640 + t4643 + t4644;
  t3569 = -0.0398890000006382*t1733;
  t3579 = 0.50315000001605*t1817;
  t3597 = t3569 + t3579;
  t3643 = -0.503150000008*t1733;
  t3653 = -5.04e-14 + t3643 + t1842;
  t3706 = 2.012600000032e-6*t1733;
  t3713 = 1.59556000002553e-7*t1817;
  t3720 = -1.26e-8 + t3706 + t3713;
  t4742 = -1.*t35*t516*t3824;
  t4743 = -4.e-6*t516*t4436;
  t4755 = t1905*t4610;
  t4756 = t4742 + t4743 + t4755;
  t4760 = 4.e-6*t405*t4436;
  t4763 = -1.*t516*t4610;
  t4778 = t4640 + t4760 + t4763;
  t4783 = -4.e-6*t405*t35*t3824;
  t4784 = t2363*t4436;
  t4794 = 4.e-6*t516*t4610;
  t4798 = t4783 + t4784 + t4794;
  t4803 = t1733*t4778;
  t4952 = t3815*t35*t828*t964;
  t4953 = t843*t3815*t35*t1155;
  t4954 = t4952 + t4953;
  t4969 = -1.*t843*t3815*t35*t828;
  t4972 = t3815*t35*t964*t1155;
  t4973 = t4969 + t4972;
  t4976 = -1.*t3815*t516*t1024;
  t4977 = -4.e-6*t516*t4954;
  t4981 = t1905*t4973;
  t4991 = t4976 + t4977 + t4981;
  t4993 = -1.*t47*t3815*t1024;
  t5001 = 4.e-6*t405*t4954;
  t5002 = -1.*t516*t4973;
  t5003 = t4993 + t5001 + t5002;
  t5005 = -4.e-6*t405*t3815*t1024;
  t5006 = t2363*t4954;
  t5007 = 4.e-6*t516*t4973;
  t5010 = t5005 + t5006 + t5007;
  t5067 = t828*t3824;
  t5069 = t3815*t1024*t1155;
  t5070 = t5067 + t5069;
  t5082 = t964*t3837;
  t5083 = t843*t5070;
  t5084 = t5082 + t5083;
  t5105 = -1.*t964*t5070;
  t5106 = t3908 + t5105;
  t5116 = 4.e-6*t516*t5084;
  t5118 = t2363*t5106;
  t5128 = t5116 + t5118;
  t5138 = -1.*t516*t5084;
  t5140 = 4.e-6*t405*t5106;
  t5146 = t5138 + t5140;
  t5155 = t1905*t5084;
  t5158 = -4.e-6*t516*t5106;
  t5163 = t5155 + t5158;
  t5239 = -1.*t3815*t828*t1024;
  t5246 = t3824*t1155;
  t5250 = t5239 + t5246;
  t5262 = -1.*t964*t5250;
  t5264 = t5262 + t5083;
  t5274 = -1.*t843*t5250;
  t5275 = t5274 + t5105;
  t5285 = 4.e-6*t516*t5264;
  t5301 = t2363*t5275;
  t5312 = t5285 + t5301;
  t5328 = -1.*t516*t5264;
  t5329 = 4.e-6*t405*t5275;
  t5332 = t5328 + t5329;
  t5335 = t1905*t5264;
  t5337 = -4.e-6*t516*t5275;
  t5339 = t5335 + t5337;
  t5409 = t843*t5250;
  t5410 = t964*t5070;
  t5412 = t5409 + t5410;
  t5418 = -1.*t47*t5412;
  t5419 = t3916 + t5285 + t5418;
  t5431 = 4.e-6*t3815*t35*t516;
  t5435 = -1.6e-11*t516*t5264;
  t5436 = 4.e-6*t47*t5412;
  t5438 = t5431 + t5435 + t5436;
  t5440 = t47*t3815*t35;
  t5441 = -4.e-6*t47*t5264;
  t5442 = -1.000000000016*t516*t5412;
  t5443 = t5440 + t5441 + t5442;
  t5497 = t3815*t35*t516;
  t5498 = -4.e-6*t516*t5264;
  t5499 = t1905*t5412;
  t5500 = t5497 + t5498 + t5499;
  t5505 = 4.e-6*t405*t5264;
  t5514 = -1.*t516*t5412;
  t5515 = t5440 + t5505 + t5514;
  t5520 = 4.e-6*t405*t3815*t35;
  t5524 = t2363*t5264;
  t5530 = 4.e-6*t516*t5412;
  t5533 = t5520 + t5524 + t5530;
  p_output1[0]=1.;
  p_output1[1]=t1024*t1064*t1155 + t1382*t1433 + t1574*t1641 + t1891*t1939 + t2062*t2151 + t2309*t2422 - 0.041195*(-1.*t1817*t1939 + t1733*t2151 + 4.e-6*t1756*t2422) - 0.14871*(4.e-6*t1817*t1939 + 4.e-6*t1756*t2151 + t2422*t2472) + 0.803147*(t1817*t2151 - 4.e-6*t1817*t2422 + t1939*t2536) + t35*t645 - 1.*t1024*t828*t992;
  p_output1[2]=t2651 + t2711 + t2844 + t2878 + t2893 + t2925 + t2975 + t2996 - 1.*t1064*t35*t828 - 1.*t1155*t35*t992;
  p_output1[3]=t2651 + t2711 + t2844 + t2878 + t2893 + t2925 + t2975 + t2996 - 1.*t1155*t3063*t35 + t3057*t35*t828;
  p_output1[4]=t1024*t3079 + t2649*t3099 + t3139*t3161 + t2062*t3191 + t2309*t3241 + t1891*t3296 - 0.041195*(t1733*t3191 + 4.e-6*t1756*t3241 - 1.*t1817*t3296) - 0.14871*(4.e-6*t1756*t3191 + t2472*t3241 + 4.e-6*t1817*t3296) + 0.803147*(t1817*t3191 - 4.e-6*t1817*t3241 + t2536*t3296);
  p_output1[5]=t3597*t3637 + t3653*t3690 + t3720*t3741 + 0.803147*(-1.000000000016*t1817*t3637 + t1733*t3690 - 4.e-6*t1733*t3741) - 0.14871*(4.e-6*t1733*t3637 + 4.e-6*t1817*t3690 - 1.6e-11*t1817*t3741) - 0.041195*(-1.*t1733*t3637 - 1.*t1817*t3690 + 4.e-6*t1817*t3741);
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=t1064*t3884 + t1382*t3906 + t1574*t3912 + t1891*t3921 + t2062*t3931 + t2309*t3943 - 0.041195*(-1.*t1817*t3921 + t1733*t3931 + 4.e-6*t1756*t3943) + 0.803147*(t2536*t3921 + t1817*t3931 - 4.e-6*t1817*t3943) - 0.14871*(4.e-6*t1817*t3921 + 4.e-6*t1756*t3931 + t2472*t3943) - 1.*t35*t3815*t645 + t3837*t992;
  p_output1[9]=-1.*t1064*t1155*t35*t3824 + t1382*t4061 + t1574*t4079 + t1891*t4101 + t2062*t4124 + t2309*t4151 - 0.041195*(-1.*t1817*t4101 + t1733*t4124 + 4.e-6*t1756*t4151) + 0.803147*(t2536*t4101 + t1817*t4124 - 4.e-6*t1817*t4151) - 0.14871*(4.e-6*t1817*t4101 + 4.e-6*t1756*t4124 + t2472*t4151) + t1024*t3824*t645 + t35*t3824*t828*t992;
  p_output1[10]=t1064*t4223 + t1574*t4276 + t1382*t4309 + t2309*t4316 + t2062*t4334 + t1891*t4357 - 0.041195*(4.e-6*t1756*t4316 + t1733*t4334 - 1.*t1817*t4357) - 0.14871*(t2472*t4316 + 4.e-6*t1756*t4334 + 4.e-6*t1817*t4357) + 0.803147*(-4.e-6*t1817*t4316 + t1817*t4334 + t2536*t4357) + t4259*t992;
  p_output1[11]=t3063*t4259 + t3057*t4430 + t1574*t4436 + t1382*t4468 + t2309*t4494 + t2062*t4506 + t1891*t4535 - 0.041195*(4.e-6*t1756*t4494 + t1733*t4506 - 1.*t1817*t4535) - 0.14871*(t2472*t4494 + 4.e-6*t1756*t4506 + 4.e-6*t1817*t4535) + 0.803147*(-4.e-6*t1817*t4494 + t1817*t4506 + t2536*t4535);
  p_output1[12]=-1.*t3079*t35*t3824 + t3099*t4436 + t3139*t4610 + t2062*t4618 + t2309*t4630 + t1891*t4645 - 0.041195*(t1733*t4618 + 4.e-6*t1756*t4630 - 1.*t1817*t4645) - 0.14871*(4.e-6*t1756*t4618 + t2472*t4630 + 4.e-6*t1817*t4645) + 0.803147*(t1817*t4618 - 4.e-6*t1817*t4630 + t2536*t4645);
  p_output1[13]=t3597*t4756 + t3653*t4778 + t3720*t4798 - 0.14871*(4.e-6*t1733*t4756 + 4.e-6*t1817*t4778 - 1.6e-11*t1817*t4798) - 0.041195*(-1.*t1733*t4756 - 1.*t1817*t4778 + 4.e-6*t1817*t4798) + 0.803147*(-1.000000000016*t1817*t4756 - 4.e-6*t1733*t4798 + t4803);
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=t1064*t4259 + t1382*t4436 + t1574*t4610 + t1891*t4756 + t2062*t4778 + t2309*t4798 + 0.803147*(t2536*t4756 + t1817*t4778 - 4.e-6*t1817*t4798) - 0.14871*(4.e-6*t1817*t4756 + 4.e-6*t1756*t4778 + t2472*t4798) - 0.041195*(-1.*t1817*t4756 + 4.e-6*t1756*t4798 + t4803) - 1.*t35*t3824*t645 + t4430*t992;
  p_output1[17]=t1064*t1155*t35*t3815 + t1382*t4954 + t1574*t4973 + t1891*t4991 + t2062*t5003 + t2309*t5010 - 0.041195*(-1.*t1817*t4991 + t1733*t5003 + 4.e-6*t1756*t5010) + 0.803147*(t2536*t4991 + t1817*t5003 - 4.e-6*t1817*t5010) - 0.14871*(4.e-6*t1817*t4991 + 4.e-6*t1756*t5003 + t2472*t5010) - 1.*t1024*t3815*t645 - 1.*t35*t3815*t828*t992;
  p_output1[18]=t1064*t3837 + t1574*t5084 + t1382*t5106 + t2309*t5128 + t2062*t5146 + t1891*t5163 - 0.041195*(4.e-6*t1756*t5128 + t1733*t5146 - 1.*t1817*t5163) - 0.14871*(t2472*t5128 + 4.e-6*t1756*t5146 + 4.e-6*t1817*t5163) + 0.803147*(-4.e-6*t1817*t5128 + t1817*t5146 + t2536*t5163) + t5070*t992;
  p_output1[19]=t3063*t5070 + t3057*t5250 + t1574*t5264 + t1382*t5275 + t2309*t5312 + t2062*t5332 + t1891*t5339 - 0.041195*(4.e-6*t1756*t5312 + t1733*t5332 - 1.*t1817*t5339) - 0.14871*(t2472*t5312 + 4.e-6*t1756*t5332 + 4.e-6*t1817*t5339) + 0.803147*(-4.e-6*t1817*t5312 + t1817*t5332 + t2536*t5339);
  p_output1[20]=t3079*t35*t3815 + t3099*t5264 + t3139*t5412 + t2062*t5419 + t2309*t5438 + t1891*t5443 - 0.041195*(t1733*t5419 + 4.e-6*t1756*t5438 - 1.*t1817*t5443) - 0.14871*(4.e-6*t1756*t5419 + t2472*t5438 + 4.e-6*t1817*t5443) + 0.803147*(t1817*t5419 - 4.e-6*t1817*t5438 + t2536*t5443);
  p_output1[21]=t3597*t5500 + t3653*t5515 + t3720*t5533 + 0.803147*(-1.000000000016*t1817*t5500 + t1733*t5515 - 4.e-6*t1733*t5533) - 0.14871*(4.e-6*t1733*t5500 + 4.e-6*t1817*t5515 - 1.6e-11*t1817*t5533) - 0.041195*(-1.*t1733*t5500 - 1.*t1817*t5515 + 4.e-6*t1817*t5533);
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

#include "J_h_FrFoot_DiagonalStance1.hh"

namespace DiagonalStance1
{

void J_h_FrFoot_DiagonalStance1_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
