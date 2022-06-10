/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:05:01 GMT+02:00
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
  double t3635;
  double t3090;
  double t3616;
  double t3655;
  double t3625;
  double t3665;
  double t3668;
  double t1052;
  double t3713;
  double t3724;
  double t3734;
  double t1646;
  double t3736;
  double t3755;
  double t3704;
  double t3742;
  double t3746;
  double t103;
  double t3757;
  double t3758;
  double t3759;
  double t3760;
  double t3863;
  double t3871;
  double t3873;
  double t3878;
  double t3881;
  double t3898;
  double t3900;
  double t3902;
  double t3940;
  double t3943;
  double t3944;
  double t3939;
  double t3945;
  double t3950;
  double t3958;
  double t3960;
  double t3962;
  double t3963;
  double t3964;
  double t3969;
  double t4025;
  double t4027;
  double t4029;
  double t4055;
  double t4057;
  double t4058;
  double t4064;
  double t4066;
  double t4070;
  double t4077;
  double t4079;
  double t4081;
  double t4054;
  double t4063;
  double t4082;
  double t4085;
  double t4048;
  double t4086;
  double t4088;
  double t4096;
  double t4098;
  double t4101;
  double t4105;
  double t4107;
  double t4109;
  double t4110;
  double t4111;
  double t4117;
  double t4120;
  double t4122;
  double t4125;
  double t4126;
  double t4127;
  double t4130;
  double t4208;
  double t4209;
  double t4213;
  double t4193;
  double t4199;
  double t4200;
  double t4175;
  double t4190;
  double t4191;
  double t4039;
  double t4040;
  double t4047;
  double t4095;
  double t4133;
  double t4138;
  double t4254;
  double t4256;
  double t4259;
  double t4216;
  double t4223;
  double t4236;
  double t4324;
  double t4325;
  double t4329;
  double t4265;
  double t4268;
  double t4272;
  double t4481;
  double t4482;
  double t4484;
  double t4260;
  double t4296;
  double t4526;
  double t4527;
  double t4528;
  double t4535;
  double t4550;
  double t4551;
  double t4554;
  double t4261;
  double t4262;
  double t4263;
  double t4564;
  double t4570;
  double t4299;
  double t4300;
  double t4302;
  double t4348;
  double t4386;
  double t4631;
  double t4637;
  double t4349;
  double t4350;
  double t4356;
  double t4656;
  double t4659;
  double t4389;
  double t4390;
  double t4392;
  double t4434;
  double t4459;
  double t4738;
  double t4435;
  double t4440;
  double t4445;
  double t4750;
  double t4752;
  double t4460;
  double t4462;
  double t4464;
  double t4518;
  double t4541;
  double t4810;
  double t4811;
  double t4812;
  double t4823;
  double t4825;
  double t4859;
  double t4860;
  double t4861;
  double t4521;
  double t4523;
  double t4815;
  double t4827;
  double t4845;
  double t4847;
  double t4544;
  double t4547;
  double t4877;
  double t4878;
  double t4883;
  double t4891;
  double t4894;
  double t4904;
  double t4907;
  double t4908;
  double t4911;
  double t4912;
  double t4914;
  double t4916;
  double t4917;
  double t4924;
  double t4929;
  double t4930;
  double t4931;
  double t4650;
  double t4640;
  double t4940;
  double t4941;
  double t4942;
  double t4967;
  double t4971;
  double t4641;
  double t4644;
  double t4981;
  double t4983;
  double t4651;
  double t4652;
  double t5009;
  double t5011;
  double t4852;
  double t4855;
  double t4856;
  double t5018;
  double t5019;
  double t4950;
  double t4952;
  double t4953;
  double t4733;
  double t4756;
  double t4734;
  double t4735;
  double t5061;
  double t5063;
  double t4880;
  double t5070;
  double t5072;
  double t4757;
  double t4759;
  double t5095;
  double t5100;
  double t5106;
  double t5108;
  double t4806;
  double t4808;
  double t5137;
  double t5140;
  double t5145;
  double t5163;
  double t5164;
  double t3988;
  double t3989;
  double t3991;
  double t5153;
  double t5154;
  double t5156;
  double t5157;
  double t5151;
  double t5162;
  double t5165;
  double t5204;
  double t5205;
  double t5207;
  double t5183;
  double t5184;
  double t5185;
  double t5191;
  double t5196;
  double t5200;
  double t5214;
  double t5215;
  double t5216;
  double t5208;
  double t5213;
  double t5219;
  double t5227;
  double t5231;
  double t5232;
  double t5234;
  double t5236;
  double t5237;
  double t5242;
  double t5243;
  double t5244;
  double t4974;
  double t4976;
  double t4977;
  double t4987;
  double t4988;
  double t4989;
  double t5167;
  double t4833;
  double t4835;
  double t5270;
  double t5272;
  double t5286;
  double t5281;
  double t5265;
  double t5273;
  double t5336;
  double t5339;
  double t5347;
  double t5249;
  double t5250;
  double t5251;
  double t5056;
  double t5058;
  double t5386;
  double t5410;
  double t5418;
  double t5459;
  double t5461;
  double t5463;
  double t5492;
  double t5494;
  double t5497;
  double t5510;
  double t5511;
  double t5512;
  double t5519;
  double t5523;
  double t5526;
  double t5528;
  double t5533;
  double t5535;
  double t5476;
  double t5490;
  double t5499;
  double t5578;
  double t5586;
  double t5587;
  double t5563;
  double t5569;
  double t5573;
  double t5590;
  double t5597;
  double t5612;
  double t5615;
  double t5616;
  double t5618;
  double t5621;
  double t5623;
  double t5075;
  double t5076;
  double t5296;
  double t5299;
  double t5315;
  double t5316;
  double t5663;
  double t5677;
  double t5682;
  double t5678;
  double t5680;
  double t5667;
  double t5710;
  double t5714;
  double t5509;
  double t5514;
  double t5516;
  double t5720;
  double t3889;
  double t3891;
  double t3892;
  double t5769;
  double t5771;
  double t5789;
  double t5794;
  double t5798;
  t3635 = Cos(var1[13]);
  t3090 = Cos(var1[14]);
  t3616 = Sin(var1[13]);
  t3655 = Sin(var1[14]);
  t3625 = t3090*t3616;
  t3665 = -1.*t3635*t3655;
  t3668 = t3625 + t3665;
  t1052 = Cos(var1[5]);
  t3713 = t3635*t3090;
  t3724 = t3616*t3655;
  t3734 = t3713 + t3724;
  t1646 = Sin(var1[12]);
  t3736 = Sin(var1[5]);
  t3755 = Cos(var1[3]);
  t3704 = -1.*t1052*t1646*t3668;
  t3742 = t3734*t3736;
  t3746 = t3704 + t3742;
  t103 = Sin(var1[3]);
  t3757 = Cos(var1[12]);
  t3758 = Cos(var1[4]);
  t3759 = t3757*t3758*t3668;
  t3760 = Sin(var1[4]);
  t3863 = t1052*t3734;
  t3871 = t1646*t3668*t3736;
  t3873 = t3863 + t3871;
  t3878 = -1.*t3760*t3873;
  t3881 = t3759 + t3878;
  t3898 = t3758*t1646;
  t3900 = t3757*t3760*t3736;
  t3902 = t3898 + t3900;
  t3940 = -1.*t3090*t3616;
  t3943 = t3635*t3655;
  t3944 = t3940 + t3943;
  t3939 = -1.*t1052*t1646*t3734;
  t3945 = t3944*t3736;
  t3950 = t3939 + t3945;
  t3958 = t3757*t3758*t3734;
  t3960 = t1052*t3944;
  t3962 = t1646*t3734*t3736;
  t3963 = t3960 + t3962;
  t3964 = -1.*t3760*t3963;
  t3969 = t3958 + t3964;
  t4025 = -1.*t3757*t3668*t3760;
  t4027 = -1.*t3758*t3873;
  t4029 = t4025 + t4027;
  t4055 = -0.0641*t3090;
  t4057 = -0.28*t3655;
  t4058 = t4055 + t4057;
  t4064 = -1.*t3090;
  t4066 = 1. + t4064;
  t4070 = 0.075*t4066;
  t4077 = 0.355*t3090;
  t4079 = -0.0641*t3655;
  t4081 = t4070 + t4077 + t4079;
  t4054 = -0.325*t3616;
  t4063 = t3635*t4058;
  t4082 = t3616*t4081;
  t4085 = t4054 + t4063 + t4082;
  t4048 = -0.068*t1646;
  t4086 = t3757*t4085;
  t4088 = t4048 + t4086;
  t4096 = -1.*t3635;
  t4098 = 1. + t4096;
  t4101 = 0.325*t4098;
  t4105 = -1.*t3616*t4058;
  t4107 = t3635*t4081;
  t4109 = t4101 + t4105 + t4107;
  t4110 = t1052*t4109;
  t4111 = -1.*t3757;
  t4117 = 1. + t4111;
  t4120 = -0.1575*t4117;
  t4122 = -0.2255*t3757;
  t4125 = -1.*t1646*t4085;
  t4126 = t4120 + t4122 + t4125;
  t4127 = -1.*t4126*t3736;
  t4130 = t4110 + t4127;
  t4208 = t3758*t4088;
  t4209 = -1.*t3760*t4130;
  t4213 = t4208 + t4209;
  t4193 = t1646*t3760;
  t4199 = -1.*t3757*t3758*t3736;
  t4200 = t4193 + t4199;
  t4175 = t4088*t3760;
  t4190 = t3758*t4130;
  t4191 = t4175 + t4190;
  t4039 = t3757*t3734*t3760;
  t4040 = t3758*t3963;
  t4047 = t4039 + t4040;
  t4095 = -1.*t4088*t3760;
  t4133 = -1.*t3758*t4130;
  t4138 = t4095 + t4133;
  t4254 = t1052*t4126;
  t4256 = t4109*t3736;
  t4259 = t4254 + t4256;
  t4216 = -1.*t1646*t3760;
  t4223 = t3757*t3758*t3736;
  t4236 = t4216 + t4223;
  t4324 = t3757*t3668*t3760;
  t4325 = t3758*t3873;
  t4329 = t4324 + t4325;
  t4265 = -1.*t3757*t3734*t3760;
  t4268 = -1.*t3758*t3963;
  t4272 = t4265 + t4268;
  t4481 = t1052*t1646*t3668;
  t4482 = -1.*t3734*t3736;
  t4484 = t4481 + t4482;
  t4260 = -1.*t3757*t1052*t4259;
  t4296 = t4259*t3950;
  t4526 = -1.*t1052*t4126;
  t4527 = -1.*t4109*t3736;
  t4528 = t4526 + t4527;
  t4535 = t3757*t3736*t4259;
  t4550 = t1052*t1646*t3734;
  t4551 = -1.*t3944*t3736;
  t4554 = t4550 + t4551;
  t4261 = -1.*t4200*t4191;
  t4262 = -1.*t3902*t4213;
  t4263 = t4260 + t4261 + t4262;
  t4564 = t4130*t3950;
  t4570 = t4259*t3963;
  t4299 = t4191*t4047;
  t4300 = t4213*t3969;
  t4302 = t4296 + t4299 + t4300;
  t4348 = t4259*t3746;
  t4386 = -1.*t4259*t3950;
  t4631 = t4259*t3873;
  t4637 = t4130*t3746;
  t4349 = t4191*t4329;
  t4350 = t4213*t3881;
  t4356 = t4348 + t4349 + t4350;
  t4656 = -1.*t4130*t3950;
  t4659 = -1.*t4259*t3963;
  t4389 = -1.*t4191*t4047;
  t4390 = -1.*t4213*t3969;
  t4392 = t4386 + t4389 + t4390;
  t4434 = t3757*t1052*t4259;
  t4459 = -1.*t4259*t3746;
  t4738 = -1.*t3757*t3736*t4259;
  t4435 = t4200*t4191;
  t4440 = t3902*t4213;
  t4445 = t4434 + t4435 + t4440;
  t4750 = -1.*t4259*t3873;
  t4752 = -1.*t4130*t3746;
  t4460 = -1.*t4191*t4329;
  t4462 = -1.*t4213*t3881;
  t4464 = t4459 + t4460 + t4462;
  t4518 = -1.*t1646*t4088;
  t4541 = t3757*t4088*t3734;
  t4810 = 0.068*t1646;
  t4811 = -1.*t3757*t4085;
  t4812 = t4810 + t4811;
  t4823 = -0.068*t3757;
  t4825 = t4823 + t4125;
  t4859 = -1.*t3758*t1646*t3668;
  t4860 = -1.*t3757*t3668*t3760*t3736;
  t4861 = t4859 + t4860;
  t4521 = t3757*t3736*t4130;
  t4523 = t4518 + t4521 + t4260;
  t4815 = -1.*t3757*t4088;
  t4827 = -1.*t1646*t4825;
  t4845 = -1.*t1646*t4088*t3734;
  t4847 = t3757*t4825*t3734;
  t4544 = t4130*t3963;
  t4547 = t4541 + t4296 + t4544;
  t4877 = Power(t1052,2);
  t4878 = -1.*t3757*t4877*t4812;
  t4883 = t1052*t1646*t4259;
  t4891 = -1.*t3757*t1052*t3734*t4259;
  t4894 = t1052*t4812*t3950;
  t4904 = -1.*t1646*t3734*t3760;
  t4907 = t3757*t3758*t3734*t3736;
  t4908 = t4904 + t4907;
  t4911 = t4825*t3760;
  t4912 = -1.*t3758*t4812*t3736;
  t4914 = t4911 + t4912;
  t4916 = t3758*t4825;
  t4917 = t4812*t3760*t3736;
  t4924 = t4916 + t4917;
  t4929 = t3757*t3760;
  t4930 = t3758*t1646*t3736;
  t4931 = t4929 + t4930;
  t4650 = -1.*t3757*t4088*t3734;
  t4640 = t3757*t4088*t3668;
  t4940 = t3757*t3758;
  t4941 = -1.*t1646*t3760*t3736;
  t4942 = t4940 + t4941;
  t4967 = -1.*t1646*t4088*t3668;
  t4971 = t3757*t4825*t3668;
  t4641 = t4130*t3873;
  t4644 = t4640 + t4641 + t4348;
  t4981 = t1646*t4088*t3734;
  t4983 = -1.*t3757*t4825*t3734;
  t4651 = -1.*t4130*t3963;
  t4652 = t4650 + t4386 + t4651;
  t5009 = -1.*t3757*t1052*t3668*t4259;
  t5011 = t1052*t4812*t3746;
  t4852 = -1.*t1646*t3668*t3760;
  t4855 = t3757*t3758*t3668*t3736;
  t4856 = t4852 + t4855;
  t5018 = t3757*t1052*t3734*t4259;
  t5019 = -1.*t1052*t4812*t3950;
  t4950 = -1.*t3758*t1646*t3734;
  t4952 = -1.*t3757*t3734*t3760*t3736;
  t4953 = t4950 + t4952;
  t4733 = t1646*t4088;
  t4756 = -1.*t3757*t4088*t3668;
  t4734 = -1.*t3757*t3736*t4130;
  t4735 = t4733 + t4734 + t4434;
  t5061 = t3757*t4088;
  t5063 = t1646*t4825;
  t4880 = Power(t3736,2);
  t5070 = t1646*t4088*t3668;
  t5072 = -1.*t3757*t4825*t3668;
  t4757 = -1.*t4130*t3873;
  t4759 = t4756 + t4757 + t4459;
  t5095 = t3757*t4877*t4812;
  t5100 = -1.*t1052*t1646*t4259;
  t5106 = t3757*t1052*t3668*t4259;
  t5108 = -1.*t1052*t4812*t3746;
  t4806 = -1.*t3757*t4126;
  t4808 = t4518 + t4806;
  t5137 = -1.*t3635*t3090;
  t5140 = -1.*t3616*t3655;
  t5145 = t5137 + t5140;
  t5163 = -0.325*t3635;
  t5164 = t5163 + t4105 + t4107;
  t3988 = t3755*t3950;
  t3989 = -1.*t103*t3969;
  t3991 = t3988 + t3989;
  t5153 = 0.325*t3616;
  t5154 = -1.*t3635*t4058;
  t5156 = -1.*t3616*t4081;
  t5157 = t5153 + t5154 + t5156;
  t5151 = t3757*t4088*t3944;
  t5162 = Power(t3757,2);
  t5165 = t5162*t5164*t3734;
  t5204 = -1.*t1052*t1646*t5164;
  t5205 = t5157*t3736;
  t5207 = t5204 + t5205;
  t5183 = -1.*t1052*t1646*t3944;
  t5184 = t5145*t3736;
  t5185 = t5183 + t5184;
  t5191 = t1052*t5157;
  t5196 = t1646*t5164*t3736;
  t5200 = t5191 + t5196;
  t5214 = t1052*t5145;
  t5215 = t1646*t3944*t3736;
  t5216 = t5214 + t5215;
  t5208 = -1.*t3757*t1052*t5207;
  t5213 = t5207*t3950;
  t5219 = t4259*t5185;
  t5227 = t3757*t3944*t3760;
  t5231 = t3758*t5216;
  t5232 = t5227 + t5231;
  t5234 = t3757*t5164*t3760;
  t5236 = t3758*t5200;
  t5237 = t5234 + t5236;
  t5242 = t3757*t3758*t5164;
  t5243 = -1.*t3760*t5200;
  t5244 = t5242 + t5243;
  t4974 = -1.*t4109*t3944;
  t4976 = t1646*t4126*t3734;
  t4977 = t4974 + t4650 + t4976;
  t4987 = -1.*t1646*t4126*t3668;
  t4988 = t4109*t3734;
  t4989 = t4640 + t4987 + t4988;
  t5167 = Power(t1646,2);
  t4833 = t4109*t3944;
  t4835 = -1.*t1646*t4126*t3734;
  t5270 = -1.*t5157*t3944;
  t5272 = -1.*t4109*t5145;
  t5286 = t5157*t3734;
  t5281 = t5162*t5164*t3668;
  t5265 = -1.*t3757*t4088*t3944;
  t5273 = -1.*t5162*t5164*t3734;
  t5336 = t5207*t3746;
  t5339 = -1.*t5207*t3950;
  t5347 = -1.*t4259*t5185;
  t5249 = t3757*t3758*t3944;
  t5250 = -1.*t3760*t5216;
  t5251 = t5249 + t5250;
  t5056 = t3757*t4126;
  t5058 = t4733 + t5056;
  t5386 = -1.*t5162*t5164*t3668;
  t5410 = t3757*t1052*t5207;
  t5418 = -1.*t5207*t3746;
  t5459 = -0.28*t3090;
  t5461 = 0.0641*t3655;
  t5463 = t5459 + t5461;
  t5492 = t3616*t4058;
  t5494 = t3635*t5463;
  t5497 = t5492 + t5494;
  t5510 = t1052*t3668;
  t5511 = t1646*t5145*t3736;
  t5512 = t5510 + t5511;
  t5519 = -1.*t1052*t1646*t5145;
  t5523 = t3668*t3736;
  t5526 = t5519 + t5523;
  t5528 = t3757*t3758*t5145;
  t5533 = -1.*t3760*t5512;
  t5535 = t5528 + t5533;
  t5476 = -1.*t3616*t5463;
  t5490 = t4063 + t5476;
  t5499 = t5162*t5497*t3734;
  t5578 = -1.*t1052*t1646*t5497;
  t5586 = t5490*t3736;
  t5587 = t5578 + t5586;
  t5563 = t1052*t5490;
  t5569 = t1646*t5497*t3736;
  t5573 = t5563 + t5569;
  t5590 = -1.*t3757*t1052*t5587;
  t5597 = t5587*t3950;
  t5612 = t3757*t5497*t3760;
  t5615 = t3758*t5573;
  t5616 = t5612 + t5615;
  t5618 = t3757*t3758*t5497;
  t5621 = -1.*t3760*t5573;
  t5623 = t5618 + t5621;
  t5075 = t1646*t4126*t3668;
  t5076 = -1.*t4109*t3734;
  t5296 = t4085*t3668;
  t5299 = t5296 + t4988;
  t5315 = -1.*t4085*t3734;
  t5316 = t4974 + t5315;
  t5663 = -1.*t5490*t3944;
  t5677 = t4109*t3668;
  t5682 = t5490*t3734;
  t5678 = t5162*t5497*t3668;
  t5680 = t3757*t4088*t5145;
  t5667 = -1.*t5162*t5497*t3734;
  t5710 = t4259*t5526;
  t5714 = t5587*t3746;
  t5509 = t3757*t5145*t3760;
  t5514 = t3758*t5512;
  t5516 = t5509 + t5514;
  t5720 = -1.*t5587*t3950;
  t3889 = t3755*t3746;
  t3891 = -1.*t103*t3881;
  t3892 = t3889 + t3891;
  t5769 = -1.*t5162*t5497*t3668;
  t5771 = -1.*t3757*t4088*t5145;
  t5789 = t3757*t1052*t5587;
  t5794 = -1.*t4259*t5526;
  t5798 = -1.*t5587*t3746;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t103*t3746 - 1.*t3755*t3881)*var2[1] + t3892*var2[2];
  p_output1[10]=(-1.*t103*t1052*t3757 - 1.*t3755*t3902)*var2[1] + (t1052*t3755*t3757 - 1.*t103*t3902)*var2[2];
  p_output1[11]=(-1.*t103*t3950 - 1.*t3755*t3969)*var2[1] + t3991*var2[2];
  p_output1[12]=t3881*var2[0] - 1.*t103*t4029*var2[1] + t3755*t4029*var2[2] + (t4047*(-1.*t3902*t4138 - 1.*t3902*t4191 - 1.*t4200*t4213 - 1.*t4213*t4236) + t3969*t4263 + t4200*(t3969*t4138 + t3969*t4191 + t4047*t4213 + t4213*t4272) + t3902*t4302)*var2[3];
  p_output1[13]=t3902*var2[0] - 1.*t103*t4236*var2[1] + t3755*t4236*var2[2] + ((-1.*t3969*t4138 - 1.*t3969*t4191 - 1.*t4047*t4213 - 1.*t4213*t4272)*t4329 + t4047*(t3881*t4138 + t3881*t4191 + t4029*t4213 + t4213*t4329) + t3969*t4356 + t3881*t4392)*var2[3];
  p_output1[14]=t3969*var2[0] - 1.*t103*t4272*var2[1] + t3755*t4272*var2[2] + ((t3902*t4138 + t3902*t4191 + t4200*t4213 + t4213*t4236)*t4329 + t4200*(-1.*t3881*t4138 - 1.*t3881*t4191 - 1.*t4029*t4213 - 1.*t4213*t4329) + t3881*t4445 + t3902*t4464)*var2[3];
  p_output1[15]=t3758*t4484*var2[0] + (t3755*t3873 + t103*t3760*t4484)*var2[1] + (t103*t3873 - 1.*t3755*t3760*t4484)*var2[2] + (-1.*t1052*t3757*t3758*t4302 + t4047*(-1.*t1052*t3757*t4130 + t1052*t3757*t3758*t4191 - 1.*t1052*t3757*t3760*t4213 + t3760*t3902*t4528 - 1.*t3758*t4200*t4528 + t4535) + t3758*t4263*t4554 + t4200*(-1.*t3760*t3969*t4528 + t3758*t4047*t4528 + t3758*t4191*t4554 - 1.*t3760*t4213*t4554 + t4564 + t4570))*var2[3] + (t3963*t4523 + t3950*(t3736*t3757*t4528 + t4535) - 1.*t3736*t3757*t4547 + t1052*t3757*(t3963*t4528 + t4130*t4554 + t4564 + t4570))*var2[4];
  p_output1[16]=-1.*t1052*t3757*t3758*var2[0] + (-1.*t3736*t3755*t3757 - 1.*t103*t1052*t3757*t3760)*var2[1] + (-1.*t103*t3736*t3757 + t1052*t3755*t3757*t3760)*var2[2] + (t3758*t4392*t4484 + t3758*t4356*t4554 + t4047*(t3758*t4191*t4484 - 1.*t3760*t4213*t4484 - 1.*t3760*t3881*t4528 + t3758*t4329*t4528 + t4631 + t4637) + t4329*(t3760*t3969*t4528 - 1.*t3758*t4047*t4528 - 1.*t3758*t4191*t4554 + t3760*t4213*t4554 + t4656 + t4659))*var2[3] + (t3950*(t4130*t4484 + t3873*t4528 + t4631 + t4637) + t3963*t4644 + t3873*t4652 + t3746*(-1.*t3963*t4528 - 1.*t4130*t4554 + t4656 + t4659))*var2[4];
  p_output1[17]=t3758*t4554*var2[0] + (t3755*t3963 + t103*t3760*t4554)*var2[1] + (t103*t3963 - 1.*t3755*t3760*t4554)*var2[2] + (-1.*t1052*t3757*t3758*t4464 + t3758*t4445*t4484 + t4329*(t1052*t3757*t4130 - 1.*t1052*t3757*t3758*t4191 + t1052*t3757*t3760*t4213 - 1.*t3760*t3902*t4528 + t3758*t4200*t4528 + t4738) + t4200*(-1.*t3758*t4191*t4484 + t3760*t4213*t4484 + t3760*t3881*t4528 - 1.*t3758*t4329*t4528 + t4750 + t4752))*var2[3] + (t3873*t4735 + t3746*(-1.*t3736*t3757*t4528 + t4738) + t1052*t3757*(-1.*t4130*t4484 - 1.*t3873*t4528 + t4750 + t4752) - 1.*t3736*t3757*t4759)*var2[4];
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
  p_output1[36]=t4856*var2[0] + (-1.*t1052*t3668*t3755*t3757 - 1.*t103*t4861)*var2[1] + (-1.*t103*t1052*t3668*t3757 + t3755*t4861)*var2[2] + (t4263*t4908 + t4302*t4931 + t4047*(t4878 + t4883 - 1.*t4200*t4914 - 1.*t3902*t4924 - 1.*t4191*t4931 - 1.*t4213*t4942) + t4200*(t4891 + t4894 + t4191*t4908 + t4047*t4914 + t3969*t4924 + t4213*t4953))*var2[3] + (-1.*t1052*t3734*t3757*t4523 - 1.*t1052*t1646*t4547 + t3950*(-1.*t1646*t3736*t4130 + t4815 + t4827 + t4878 - 1.*t3757*t4812*t4880 + t4883) + t1052*t3757*(t3734*t3736*t3757*t4130 - 1.*t3736*t3963*t4812 + t4845 + t4847 + t4891 + t4894))*var2[4] + (-1.*t1646*t3734*t4808 + t3734*t3757*(t1646*t4126 - 1.*t3757*t4812 + t4815 + t4827) + t3757*(t4541 + t4833 + t4835) + t1646*(-1.*t3734*t3757*t4126 - 1.*t1646*t3734*t4812 + t4845 + t4847))*var2[5];
  p_output1[37]=t4931*var2[0] + (-1.*t1052*t1646*t3755 - 1.*t103*t4942)*var2[1] + (-1.*t103*t1052*t1646 + t3755*t4942)*var2[2] + (t4392*t4856 + t4356*t4908 + t4047*(t4191*t4856 + t4213*t4861 + t4329*t4914 + t3881*t4924 + t5009 + t5011) + t4329*(-1.*t4191*t4908 - 1.*t4047*t4914 - 1.*t3969*t4924 - 1.*t4213*t4953 + t5018 + t5019))*var2[3] + (-1.*t1052*t3734*t3757*t4644 - 1.*t1052*t3668*t3757*t4652 + t3950*(t3668*t3736*t3757*t4130 - 1.*t3736*t3873*t4812 + t4967 + t4971 + t5009 + t5011) + t3746*(-1.*t3734*t3736*t3757*t4130 + t3736*t3963*t4812 + t4981 + t4983 + t5018 + t5019))*var2[4] + (t3734*t3757*(-1.*t3668*t3757*t4126 - 1.*t1646*t3668*t4812 + t4967 + t4971) - 1.*t1646*t3668*t4977 + t3668*t3757*(t3734*t3757*t4126 + t1646*t3734*t4812 + t4981 + t4983) - 1.*t1646*t3734*t4989)*var2[5];
  p_output1[38]=t4908*var2[0] + (-1.*t1052*t3734*t3755*t3757 - 1.*t103*t4953)*var2[1] + (-1.*t103*t1052*t3734*t3757 + t3755*t4953)*var2[2] + (t4445*t4856 + t4464*t4931 + t4329*(t4200*t4914 + t3902*t4924 + t4191*t4931 + t4213*t4942 + t5095 + t5100) + t4200*(-1.*t4191*t4856 - 1.*t4213*t4861 - 1.*t4329*t4914 - 1.*t3881*t4924 + t5106 + t5108))*var2[3] + (-1.*t1052*t3668*t3757*t4735 - 1.*t1052*t1646*t4759 + t3746*(t1646*t3736*t4130 + t3757*t4812*t4880 + t5061 + t5063 + t5095 + t5100) + t1052*t3757*(-1.*t3668*t3736*t3757*t4130 + t3736*t3873*t4812 + t5070 + t5072 + t5106 + t5108))*var2[4] + (-1.*t1646*t3668*t5058 + t3668*t3757*(-1.*t1646*t4126 + t3757*t4812 + t5061 + t5063) + t1646*(t3668*t3757*t4126 + t1646*t3668*t4812 + t5070 + t5072) + t3757*(t4756 + t5075 + t5076))*var2[5];
  p_output1[39]=t4047*var2[0] + t3991*var2[1] + (t103*t3950 + t3755*t3969)*var2[2] + (t4263*t5232 + t4047*(t5208 - 1.*t4200*t5237 - 1.*t3902*t5244) + t4200*(t5213 + t5219 + t4191*t5232 + t4047*t5237 + t3969*t5244 + t4213*t5251))*var2[3] + (t4523*t5185 + t3950*(-1.*t1646*t3757*t5164 + t3736*t3757*t5200 + t5208) + t1052*t3757*(t5151 + t5165 + t3963*t5200 + t5213 + t4130*t5216 + t5219))*var2[4] + (t3757*t3944*t4808 + t1646*(-1.*t1646*t3944*t4126 + t4109*t5145 + t5151 + t3944*t5157 + t5165 + t3734*t5164*t5167))*var2[5] + (0.1575*t3734 + 0.2255*t5145)*var2[12];
  p_output1[40]=(t4047*t4392 + t4356*t5232 + t4047*(t4296 + t4299 + t4300 + t4329*t5237 + t3881*t5244 + t5336) + t4329*(-1.*t4191*t5232 - 1.*t4047*t5237 - 1.*t3969*t5244 - 1.*t4213*t5251 + t5339 + t5347))*var2[3] + (t3950*t4652 + t4644*t5185 + t3950*(t4296 + t4541 + t4544 + t3873*t5200 + t5281 + t5336) + t3746*(-1.*t3963*t5200 - 1.*t4130*t5216 + t5265 + t5273 + t5339 + t5347))*var2[4] + (t3734*t3757*t4977 + t3757*t3944*t4989 + t3668*t3757*(t1646*t3944*t4126 - 1.*t3734*t5164*t5167 + t5265 + t5270 + t5272 + t5273) + t3734*t3757*(t4541 + t4833 + t4835 + t3668*t5164*t5167 + t5281 + t5286))*var2[5] + (t3734*(-1.*t3944*t4085 - 1.*t3734*t5164 + t5270 + t5272) + t3944*(t3734*t4085 + t4833 + t3668*t5164 + t5286) + t5145*t5299 + t3944*t5316)*var2[12];
  p_output1[41]=t5232*var2[0] + (t3755*t5185 - 1.*t103*t5251)*var2[1] + (t103*t5185 + t3755*t5251)*var2[2] + (t4047*t4445 + t4329*(t4200*t5237 + t3902*t5244 + t5410) + t4200*(t4386 + t4389 + t4390 - 1.*t4329*t5237 - 1.*t3881*t5244 + t5418))*var2[3] + (t3950*t4735 + t3746*(t1646*t3757*t5164 - 1.*t3736*t3757*t5200 + t5410) + t1052*t3757*(t4386 + t4650 + t4651 - 1.*t3873*t5200 + t5386 + t5418))*var2[4] + (t3734*t3757*t5058 + t1646*(t4650 + t4974 + t4976 - 1.*t3734*t5157 - 1.*t3668*t5164*t5167 + t5386))*var2[5] - 0.068*t3944*var2[12];
  p_output1[42]=t5516*var2[0] + (t3755*t5526 - 1.*t103*t5535)*var2[1] + (t103*t5526 + t3755*t5535)*var2[2] + (t4263*t4329 + t4047*(t5590 - 1.*t4200*t5616 - 1.*t3902*t5623) + t4200*(t4348 + t4349 + t4350 + t5597 + t4047*t5616 + t3969*t5623))*var2[3] + (t3746*t4523 + t3950*(-1.*t1646*t3757*t5497 + t3736*t3757*t5573 + t5590) + t1052*t3757*(t4348 + t4640 + t4641 + t5499 + t3963*t5573 + t5597))*var2[4] + (t3668*t3757*t4808 + t1646*(t4640 + t4987 + t4988 + t3944*t5490 + t3734*t5167*t5497 + t5499))*var2[5] + (0.2255*t3734 + 0.1575*t5145)*var2[12] + (0.325*t3090 - 1.*t3090*t4081 - 1.*t3090*t5463)*var2[13];
  p_output1[43]=(t4329*t4356 + t4392*t5516 + t4047*(t4191*t5516 + t4213*t5535 + t4329*t5616 + t3881*t5623 + t5710 + t5714) + t4329*(t4459 + t4460 + t4462 - 1.*t4047*t5616 - 1.*t3969*t5623 + t5720))*var2[3] + (t3746*t4644 + t4652*t5526 + t3950*(t4130*t5512 + t3873*t5573 + t5678 + t5680 + t5710 + t5714) + t3746*(t4459 + t4756 + t4757 - 1.*t3963*t5573 + t5667 + t5720))*var2[4] + (t3668*t3757*t4989 + t3757*t4977*t5145 + t3668*t3757*(t4756 + t5075 + t5076 - 1.*t3734*t5167*t5497 + t5663 + t5667) + t3734*t3757*(-1.*t1646*t4126*t5145 + t3668*t5167*t5497 + t5677 + t5678 + t5680 + t5682))*var2[5] + (t3734*t5299 + t3668*t5316 + t3734*(-1.*t3668*t4085 + t5076 - 1.*t3734*t5497 + t5663) + t3944*(t4085*t5145 + t3668*t5497 + t5677 + t5682))*var2[12];
  p_output1[44]=t4329*var2[0] + t3892*var2[1] + (t103*t3746 + t3755*t3881)*var2[2] + (t4445*t5516 + t4329*(t4200*t5616 + t3902*t5623 + t5789) + t4200*(-1.*t4191*t5516 - 1.*t4213*t5535 - 1.*t4329*t5616 - 1.*t3881*t5623 + t5794 + t5798))*var2[3] + (t4735*t5526 + t3746*(t1646*t3757*t5497 - 1.*t3736*t3757*t5573 + t5789) + t1052*t3757*(-1.*t4130*t5512 - 1.*t3873*t5573 + t5769 + t5771 + t5794 + t5798))*var2[4] + (t3757*t5058*t5145 + t1646*(-1.*t3668*t4109 + t1646*t4126*t5145 - 1.*t3734*t5490 - 1.*t3668*t5167*t5497 + t5769 + t5771))*var2[5] - 0.068*t3668*var2[12] + (0.325*t3655 - 1.*t3655*t4081 - 1.*t3655*t5463)*var2[13];
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

#include "dJh_FrFoot_ParallelStance.hh"

namespace SymFunction
{

void dJh_FrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
