/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 14:40:51 GMT+02:00
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
  double t4811;
  double t4785;
  double t4803;
  double t4815;
  double t4807;
  double t4816;
  double t4817;
  double t4782;
  double t4819;
  double t4820;
  double t4821;
  double t4784;
  double t4822;
  double t4874;
  double t4818;
  double t4823;
  double t4824;
  double t4762;
  double t4882;
  double t4883;
  double t4884;
  double t4888;
  double t4889;
  double t4893;
  double t4894;
  double t4895;
  double t4897;
  double t4909;
  double t4910;
  double t4911;
  double t4937;
  double t4938;
  double t4939;
  double t4936;
  double t4944;
  double t4948;
  double t4951;
  double t4952;
  double t4953;
  double t4954;
  double t4959;
  double t4960;
  double t4976;
  double t4980;
  double t4984;
  double t5004;
  double t5005;
  double t5006;
  double t5008;
  double t5010;
  double t5012;
  double t5013;
  double t5017;
  double t5018;
  double t5003;
  double t5007;
  double t5020;
  double t5022;
  double t5002;
  double t5023;
  double t5027;
  double t5029;
  double t5030;
  double t5031;
  double t5032;
  double t5033;
  double t5034;
  double t5035;
  double t5036;
  double t5037;
  double t5038;
  double t5039;
  double t5041;
  double t5043;
  double t5044;
  double t5045;
  double t5058;
  double t5059;
  double t5060;
  double t5055;
  double t5056;
  double t5057;
  double t5051;
  double t5052;
  double t5053;
  double t4995;
  double t4999;
  double t5000;
  double t5028;
  double t5046;
  double t5049;
  double t5068;
  double t5069;
  double t5070;
  double t5062;
  double t5063;
  double t5064;
  double t5107;
  double t5108;
  double t5109;
  double t5080;
  double t5081;
  double t5083;
  double t5192;
  double t5196;
  double t5200;
  double t5071;
  double t5093;
  double t5220;
  double t5222;
  double t5226;
  double t5228;
  double t5239;
  double t5240;
  double t5241;
  double t5074;
  double t5075;
  double t5077;
  double t5245;
  double t5247;
  double t5094;
  double t5095;
  double t5096;
  double t5117;
  double t5128;
  double t5284;
  double t5286;
  double t5118;
  double t5119;
  double t5120;
  double t5298;
  double t5300;
  double t5129;
  double t5130;
  double t5131;
  double t5158;
  double t5175;
  double t5347;
  double t5159;
  double t5160;
  double t5161;
  double t5363;
  double t5365;
  double t5180;
  double t5181;
  double t5186;
  double t5216;
  double t5233;
  double t5411;
  double t5414;
  double t5416;
  double t5421;
  double t5422;
  double t5446;
  double t5447;
  double t5448;
  double t5217;
  double t5218;
  double t5419;
  double t5423;
  double t5431;
  double t5433;
  double t5234;
  double t5235;
  double t5457;
  double t5458;
  double t5462;
  double t5466;
  double t5467;
  double t5476;
  double t5477;
  double t5478;
  double t5480;
  double t5481;
  double t5482;
  double t5484;
  double t5485;
  double t5486;
  double t5488;
  double t5490;
  double t5491;
  double t5293;
  double t5289;
  double t5494;
  double t5496;
  double t5497;
  double t5515;
  double t5517;
  double t5290;
  double t5291;
  double t5525;
  double t5527;
  double t5294;
  double t5295;
  double t5546;
  double t5548;
  double t5440;
  double t5441;
  double t5443;
  double t5553;
  double t5554;
  double t5502;
  double t5503;
  double t5504;
  double t5338;
  double t5368;
  double t5343;
  double t5344;
  double t5582;
  double t5584;
  double t5459;
  double t5588;
  double t5590;
  double t5369;
  double t5370;
  double t5609;
  double t5612;
  double t5616;
  double t5618;
  double t5406;
  double t5409;
  double t5641;
  double t5642;
  double t5643;
  double t5658;
  double t5659;
  double t4968;
  double t4969;
  double t4970;
  double t5651;
  double t5652;
  double t5653;
  double t5654;
  double t5649;
  double t5657;
  double t5660;
  double t5682;
  double t5683;
  double t5684;
  double t5673;
  double t5674;
  double t5675;
  double t5678;
  double t5679;
  double t5680;
  double t5689;
  double t5690;
  double t5691;
  double t5685;
  double t5688;
  double t5693;
  double t5699;
  double t5700;
  double t5701;
  double t5703;
  double t5704;
  double t5705;
  double t5707;
  double t5708;
  double t5709;
  double t5520;
  double t5521;
  double t5522;
  double t5530;
  double t5531;
  double t5532;
  double t5661;
  double t5426;
  double t5427;
  double t5729;
  double t5730;
  double t5737;
  double t5735;
  double t5727;
  double t5731;
  double t5761;
  double t5764;
  double t5766;
  double t5714;
  double t5715;
  double t5716;
  double t5578;
  double t5579;
  double t5789;
  double t5808;
  double t5812;
  double t5831;
  double t5832;
  double t5833;
  double t5845;
  double t5846;
  double t5847;
  double t5855;
  double t5856;
  double t5857;
  double t5861;
  double t5862;
  double t5863;
  double t5865;
  double t5866;
  double t5867;
  double t5842;
  double t5843;
  double t5848;
  double t5881;
  double t5882;
  double t5883;
  double t5877;
  double t5878;
  double t5879;
  double t5884;
  double t5887;
  double t5894;
  double t5895;
  double t5896;
  double t5898;
  double t5899;
  double t5900;
  double t5593;
  double t5594;
  double t5742;
  double t5743;
  double t5749;
  double t5750;
  double t5913;
  double t5918;
  double t5923;
  double t5919;
  double t5921;
  double t5914;
  double t5941;
  double t5944;
  double t5854;
  double t5858;
  double t5859;
  double t5948;
  double t4902;
  double t4903;
  double t4904;
  double t5977;
  double t5979;
  double t5995;
  double t5998;
  double t6001;
  t4811 = Cos(var1[16]);
  t4785 = Cos(var1[17]);
  t4803 = Sin(var1[16]);
  t4815 = Sin(var1[17]);
  t4807 = t4785*t4803;
  t4816 = -1.*t4811*t4815;
  t4817 = t4807 + t4816;
  t4782 = Cos(var1[5]);
  t4819 = t4811*t4785;
  t4820 = t4803*t4815;
  t4821 = t4819 + t4820;
  t4784 = Sin(var1[15]);
  t4822 = Sin(var1[5]);
  t4874 = Cos(var1[3]);
  t4818 = -1.*t4782*t4784*t4817;
  t4823 = t4821*t4822;
  t4824 = t4818 + t4823;
  t4762 = Sin(var1[3]);
  t4882 = Cos(var1[15]);
  t4883 = Cos(var1[4]);
  t4884 = t4882*t4883*t4817;
  t4888 = Sin(var1[4]);
  t4889 = t4782*t4821;
  t4893 = t4784*t4817*t4822;
  t4894 = t4889 + t4893;
  t4895 = -1.*t4888*t4894;
  t4897 = t4884 + t4895;
  t4909 = t4883*t4784;
  t4910 = t4882*t4888*t4822;
  t4911 = t4909 + t4910;
  t4937 = -1.*t4785*t4803;
  t4938 = t4811*t4815;
  t4939 = t4937 + t4938;
  t4936 = -1.*t4782*t4784*t4821;
  t4944 = t4939*t4822;
  t4948 = t4936 + t4944;
  t4951 = t4882*t4883*t4821;
  t4952 = t4782*t4939;
  t4953 = t4784*t4821*t4822;
  t4954 = t4952 + t4953;
  t4959 = -1.*t4888*t4954;
  t4960 = t4951 + t4959;
  t4976 = -1.*t4882*t4817*t4888;
  t4980 = -1.*t4883*t4894;
  t4984 = t4976 + t4980;
  t5004 = -0.0641*t4785;
  t5005 = -0.28*t4815;
  t5006 = t5004 + t5005;
  t5008 = -1.*t4785;
  t5010 = 1. + t5008;
  t5012 = -0.575*t5010;
  t5013 = -0.295*t4785;
  t5017 = -0.0641*t4815;
  t5018 = t5012 + t5013 + t5017;
  t5003 = 0.325*t4803;
  t5007 = t4811*t5006;
  t5020 = t4803*t5018;
  t5022 = t5003 + t5007 + t5020;
  t5002 = -0.068*t4784;
  t5023 = t4882*t5022;
  t5027 = t5002 + t5023;
  t5029 = -1.*t4811;
  t5030 = 1. + t5029;
  t5031 = -0.325*t5030;
  t5032 = -1.*t4803*t5006;
  t5033 = t4811*t5018;
  t5034 = t5031 + t5032 + t5033;
  t5035 = t4782*t5034;
  t5036 = -1.*t4882;
  t5037 = 1. + t5036;
  t5038 = -0.1575*t5037;
  t5039 = -0.2255*t4882;
  t5041 = -1.*t4784*t5022;
  t5043 = t5038 + t5039 + t5041;
  t5044 = -1.*t5043*t4822;
  t5045 = t5035 + t5044;
  t5058 = t4883*t5027;
  t5059 = -1.*t4888*t5045;
  t5060 = t5058 + t5059;
  t5055 = t4784*t4888;
  t5056 = -1.*t4882*t4883*t4822;
  t5057 = t5055 + t5056;
  t5051 = t5027*t4888;
  t5052 = t4883*t5045;
  t5053 = t5051 + t5052;
  t4995 = t4882*t4821*t4888;
  t4999 = t4883*t4954;
  t5000 = t4995 + t4999;
  t5028 = -1.*t5027*t4888;
  t5046 = -1.*t4883*t5045;
  t5049 = t5028 + t5046;
  t5068 = t4782*t5043;
  t5069 = t5034*t4822;
  t5070 = t5068 + t5069;
  t5062 = -1.*t4784*t4888;
  t5063 = t4882*t4883*t4822;
  t5064 = t5062 + t5063;
  t5107 = t4882*t4817*t4888;
  t5108 = t4883*t4894;
  t5109 = t5107 + t5108;
  t5080 = -1.*t4882*t4821*t4888;
  t5081 = -1.*t4883*t4954;
  t5083 = t5080 + t5081;
  t5192 = t4782*t4784*t4817;
  t5196 = -1.*t4821*t4822;
  t5200 = t5192 + t5196;
  t5071 = -1.*t4882*t4782*t5070;
  t5093 = t5070*t4948;
  t5220 = -1.*t4782*t5043;
  t5222 = -1.*t5034*t4822;
  t5226 = t5220 + t5222;
  t5228 = t4882*t4822*t5070;
  t5239 = t4782*t4784*t4821;
  t5240 = -1.*t4939*t4822;
  t5241 = t5239 + t5240;
  t5074 = -1.*t5057*t5053;
  t5075 = -1.*t4911*t5060;
  t5077 = t5071 + t5074 + t5075;
  t5245 = t5045*t4948;
  t5247 = t5070*t4954;
  t5094 = t5053*t5000;
  t5095 = t5060*t4960;
  t5096 = t5093 + t5094 + t5095;
  t5117 = t5070*t4824;
  t5128 = -1.*t5070*t4948;
  t5284 = t5070*t4894;
  t5286 = t5045*t4824;
  t5118 = t5053*t5109;
  t5119 = t5060*t4897;
  t5120 = t5117 + t5118 + t5119;
  t5298 = -1.*t5045*t4948;
  t5300 = -1.*t5070*t4954;
  t5129 = -1.*t5053*t5000;
  t5130 = -1.*t5060*t4960;
  t5131 = t5128 + t5129 + t5130;
  t5158 = t4882*t4782*t5070;
  t5175 = -1.*t5070*t4824;
  t5347 = -1.*t4882*t4822*t5070;
  t5159 = t5057*t5053;
  t5160 = t4911*t5060;
  t5161 = t5158 + t5159 + t5160;
  t5363 = -1.*t5070*t4894;
  t5365 = -1.*t5045*t4824;
  t5180 = -1.*t5053*t5109;
  t5181 = -1.*t5060*t4897;
  t5186 = t5175 + t5180 + t5181;
  t5216 = -1.*t4784*t5027;
  t5233 = t4882*t5027*t4821;
  t5411 = 0.068*t4784;
  t5414 = -1.*t4882*t5022;
  t5416 = t5411 + t5414;
  t5421 = -0.068*t4882;
  t5422 = t5421 + t5041;
  t5446 = -1.*t4883*t4784*t4817;
  t5447 = -1.*t4882*t4817*t4888*t4822;
  t5448 = t5446 + t5447;
  t5217 = t4882*t4822*t5045;
  t5218 = t5216 + t5217 + t5071;
  t5419 = -1.*t4882*t5027;
  t5423 = -1.*t4784*t5422;
  t5431 = -1.*t4784*t5027*t4821;
  t5433 = t4882*t5422*t4821;
  t5234 = t5045*t4954;
  t5235 = t5233 + t5093 + t5234;
  t5457 = Power(t4782,2);
  t5458 = -1.*t4882*t5457*t5416;
  t5462 = t4782*t4784*t5070;
  t5466 = -1.*t4882*t4782*t4821*t5070;
  t5467 = t4782*t5416*t4948;
  t5476 = -1.*t4784*t4821*t4888;
  t5477 = t4882*t4883*t4821*t4822;
  t5478 = t5476 + t5477;
  t5480 = t5422*t4888;
  t5481 = -1.*t4883*t5416*t4822;
  t5482 = t5480 + t5481;
  t5484 = t4883*t5422;
  t5485 = t5416*t4888*t4822;
  t5486 = t5484 + t5485;
  t5488 = t4882*t4888;
  t5490 = t4883*t4784*t4822;
  t5491 = t5488 + t5490;
  t5293 = -1.*t4882*t5027*t4821;
  t5289 = t4882*t5027*t4817;
  t5494 = t4882*t4883;
  t5496 = -1.*t4784*t4888*t4822;
  t5497 = t5494 + t5496;
  t5515 = -1.*t4784*t5027*t4817;
  t5517 = t4882*t5422*t4817;
  t5290 = t5045*t4894;
  t5291 = t5289 + t5290 + t5117;
  t5525 = t4784*t5027*t4821;
  t5527 = -1.*t4882*t5422*t4821;
  t5294 = -1.*t5045*t4954;
  t5295 = t5293 + t5128 + t5294;
  t5546 = -1.*t4882*t4782*t4817*t5070;
  t5548 = t4782*t5416*t4824;
  t5440 = -1.*t4784*t4817*t4888;
  t5441 = t4882*t4883*t4817*t4822;
  t5443 = t5440 + t5441;
  t5553 = t4882*t4782*t4821*t5070;
  t5554 = -1.*t4782*t5416*t4948;
  t5502 = -1.*t4883*t4784*t4821;
  t5503 = -1.*t4882*t4821*t4888*t4822;
  t5504 = t5502 + t5503;
  t5338 = t4784*t5027;
  t5368 = -1.*t4882*t5027*t4817;
  t5343 = -1.*t4882*t4822*t5045;
  t5344 = t5338 + t5343 + t5158;
  t5582 = t4882*t5027;
  t5584 = t4784*t5422;
  t5459 = Power(t4822,2);
  t5588 = t4784*t5027*t4817;
  t5590 = -1.*t4882*t5422*t4817;
  t5369 = -1.*t5045*t4894;
  t5370 = t5368 + t5369 + t5175;
  t5609 = t4882*t5457*t5416;
  t5612 = -1.*t4782*t4784*t5070;
  t5616 = t4882*t4782*t4817*t5070;
  t5618 = -1.*t4782*t5416*t4824;
  t5406 = -1.*t4882*t5043;
  t5409 = t5216 + t5406;
  t5641 = -1.*t4811*t4785;
  t5642 = -1.*t4803*t4815;
  t5643 = t5641 + t5642;
  t5658 = 0.325*t4811;
  t5659 = t5658 + t5032 + t5033;
  t4968 = t4874*t4948;
  t4969 = -1.*t4762*t4960;
  t4970 = t4968 + t4969;
  t5651 = -0.325*t4803;
  t5652 = -1.*t4811*t5006;
  t5653 = -1.*t4803*t5018;
  t5654 = t5651 + t5652 + t5653;
  t5649 = t4882*t5027*t4939;
  t5657 = Power(t4882,2);
  t5660 = t5657*t5659*t4821;
  t5682 = -1.*t4782*t4784*t5659;
  t5683 = t5654*t4822;
  t5684 = t5682 + t5683;
  t5673 = -1.*t4782*t4784*t4939;
  t5674 = t5643*t4822;
  t5675 = t5673 + t5674;
  t5678 = t4782*t5654;
  t5679 = t4784*t5659*t4822;
  t5680 = t5678 + t5679;
  t5689 = t4782*t5643;
  t5690 = t4784*t4939*t4822;
  t5691 = t5689 + t5690;
  t5685 = -1.*t4882*t4782*t5684;
  t5688 = t5684*t4948;
  t5693 = t5070*t5675;
  t5699 = t4882*t4939*t4888;
  t5700 = t4883*t5691;
  t5701 = t5699 + t5700;
  t5703 = t4882*t5659*t4888;
  t5704 = t4883*t5680;
  t5705 = t5703 + t5704;
  t5707 = t4882*t4883*t5659;
  t5708 = -1.*t4888*t5680;
  t5709 = t5707 + t5708;
  t5520 = -1.*t5034*t4939;
  t5521 = t4784*t5043*t4821;
  t5522 = t5520 + t5293 + t5521;
  t5530 = -1.*t4784*t5043*t4817;
  t5531 = t5034*t4821;
  t5532 = t5289 + t5530 + t5531;
  t5661 = Power(t4784,2);
  t5426 = t5034*t4939;
  t5427 = -1.*t4784*t5043*t4821;
  t5729 = -1.*t5654*t4939;
  t5730 = -1.*t5034*t5643;
  t5737 = t5654*t4821;
  t5735 = t5657*t5659*t4817;
  t5727 = -1.*t4882*t5027*t4939;
  t5731 = -1.*t5657*t5659*t4821;
  t5761 = t5684*t4824;
  t5764 = -1.*t5684*t4948;
  t5766 = -1.*t5070*t5675;
  t5714 = t4882*t4883*t4939;
  t5715 = -1.*t4888*t5691;
  t5716 = t5714 + t5715;
  t5578 = t4882*t5043;
  t5579 = t5338 + t5578;
  t5789 = -1.*t5657*t5659*t4817;
  t5808 = t4882*t4782*t5684;
  t5812 = -1.*t5684*t4824;
  t5831 = -0.28*t4785;
  t5832 = 0.0641*t4815;
  t5833 = t5831 + t5832;
  t5845 = t4803*t5006;
  t5846 = t4811*t5833;
  t5847 = t5845 + t5846;
  t5855 = t4782*t4817;
  t5856 = t4784*t5643*t4822;
  t5857 = t5855 + t5856;
  t5861 = -1.*t4782*t4784*t5643;
  t5862 = t4817*t4822;
  t5863 = t5861 + t5862;
  t5865 = t4882*t4883*t5643;
  t5866 = -1.*t4888*t5857;
  t5867 = t5865 + t5866;
  t5842 = -1.*t4803*t5833;
  t5843 = t5007 + t5842;
  t5848 = t5657*t5847*t4821;
  t5881 = -1.*t4782*t4784*t5847;
  t5882 = t5843*t4822;
  t5883 = t5881 + t5882;
  t5877 = t4782*t5843;
  t5878 = t4784*t5847*t4822;
  t5879 = t5877 + t5878;
  t5884 = -1.*t4882*t4782*t5883;
  t5887 = t5883*t4948;
  t5894 = t4882*t5847*t4888;
  t5895 = t4883*t5879;
  t5896 = t5894 + t5895;
  t5898 = t4882*t4883*t5847;
  t5899 = -1.*t4888*t5879;
  t5900 = t5898 + t5899;
  t5593 = t4784*t5043*t4817;
  t5594 = -1.*t5034*t4821;
  t5742 = t5022*t4817;
  t5743 = t5742 + t5531;
  t5749 = -1.*t5022*t4821;
  t5750 = t5520 + t5749;
  t5913 = -1.*t5843*t4939;
  t5918 = t5034*t4817;
  t5923 = t5843*t4821;
  t5919 = t5657*t5847*t4817;
  t5921 = t4882*t5027*t5643;
  t5914 = -1.*t5657*t5847*t4821;
  t5941 = t5070*t5863;
  t5944 = t5883*t4824;
  t5854 = t4882*t5643*t4888;
  t5858 = t4883*t5857;
  t5859 = t5854 + t5858;
  t5948 = -1.*t5883*t4948;
  t4902 = t4874*t4824;
  t4903 = -1.*t4762*t4897;
  t4904 = t4902 + t4903;
  t5977 = -1.*t5657*t5847*t4817;
  t5979 = -1.*t4882*t5027*t5643;
  t5995 = t4882*t4782*t5883;
  t5998 = -1.*t5070*t5863;
  t6001 = -1.*t5883*t4824;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t4762*t4824 - 1.*t4874*t4897)*var2[1] + t4904*var2[2];
  p_output1[10]=(-1.*t4762*t4782*t4882 - 1.*t4874*t4911)*var2[1] + (t4782*t4874*t4882 - 1.*t4762*t4911)*var2[2];
  p_output1[11]=(-1.*t4762*t4948 - 1.*t4874*t4960)*var2[1] + t4970*var2[2];
  p_output1[12]=t4897*var2[0] - 1.*t4762*t4984*var2[1] + t4874*t4984*var2[2] + (t5000*(-1.*t4911*t5049 - 1.*t4911*t5053 - 1.*t5057*t5060 - 1.*t5060*t5064) + t4960*t5077 + t5057*(t4960*t5049 + t4960*t5053 + t5000*t5060 + t5060*t5083) + t4911*t5096)*var2[3];
  p_output1[13]=t4911*var2[0] - 1.*t4762*t5064*var2[1] + t4874*t5064*var2[2] + ((-1.*t4960*t5049 - 1.*t4960*t5053 - 1.*t5000*t5060 - 1.*t5060*t5083)*t5109 + t5000*(t4897*t5049 + t4897*t5053 + t4984*t5060 + t5060*t5109) + t4960*t5120 + t4897*t5131)*var2[3];
  p_output1[14]=t4960*var2[0] - 1.*t4762*t5083*var2[1] + t4874*t5083*var2[2] + ((t4911*t5049 + t4911*t5053 + t5057*t5060 + t5060*t5064)*t5109 + t5057*(-1.*t4897*t5049 - 1.*t4897*t5053 - 1.*t4984*t5060 - 1.*t5060*t5109) + t4897*t5161 + t4911*t5186)*var2[3];
  p_output1[15]=t4883*t5200*var2[0] + (t4874*t4894 + t4762*t4888*t5200)*var2[1] + (t4762*t4894 - 1.*t4874*t4888*t5200)*var2[2] + (-1.*t4782*t4882*t4883*t5096 + t5000*(-1.*t4782*t4882*t5045 + t4782*t4882*t4883*t5053 - 1.*t4782*t4882*t4888*t5060 + t4888*t4911*t5226 - 1.*t4883*t5057*t5226 + t5228) + t4883*t5077*t5241 + t5057*(-1.*t4888*t4960*t5226 + t4883*t5000*t5226 + t4883*t5053*t5241 - 1.*t4888*t5060*t5241 + t5245 + t5247))*var2[3] + (t4954*t5218 + t4948*(t4822*t4882*t5226 + t5228) - 1.*t4822*t4882*t5235 + t4782*t4882*(t4954*t5226 + t5045*t5241 + t5245 + t5247))*var2[4];
  p_output1[16]=-1.*t4782*t4882*t4883*var2[0] + (-1.*t4822*t4874*t4882 - 1.*t4762*t4782*t4882*t4888)*var2[1] + (-1.*t4762*t4822*t4882 + t4782*t4874*t4882*t4888)*var2[2] + (t4883*t5131*t5200 + t4883*t5120*t5241 + t5000*(t4883*t5053*t5200 - 1.*t4888*t5060*t5200 - 1.*t4888*t4897*t5226 + t4883*t5109*t5226 + t5284 + t5286) + t5109*(t4888*t4960*t5226 - 1.*t4883*t5000*t5226 - 1.*t4883*t5053*t5241 + t4888*t5060*t5241 + t5298 + t5300))*var2[3] + (t4948*(t5045*t5200 + t4894*t5226 + t5284 + t5286) + t4954*t5291 + t4894*t5295 + t4824*(-1.*t4954*t5226 - 1.*t5045*t5241 + t5298 + t5300))*var2[4];
  p_output1[17]=t4883*t5241*var2[0] + (t4874*t4954 + t4762*t4888*t5241)*var2[1] + (t4762*t4954 - 1.*t4874*t4888*t5241)*var2[2] + (-1.*t4782*t4882*t4883*t5186 + t4883*t5161*t5200 + t5109*(t4782*t4882*t5045 - 1.*t4782*t4882*t4883*t5053 + t4782*t4882*t4888*t5060 - 1.*t4888*t4911*t5226 + t4883*t5057*t5226 + t5347) + t5057*(-1.*t4883*t5053*t5200 + t4888*t5060*t5200 + t4888*t4897*t5226 - 1.*t4883*t5109*t5226 + t5363 + t5365))*var2[3] + (t4894*t5344 + t4824*(-1.*t4822*t4882*t5226 + t5347) + t4782*t4882*(-1.*t5045*t5200 - 1.*t4894*t5226 + t5363 + t5365) - 1.*t4822*t4882*t5370)*var2[4];
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
  p_output1[45]=t5443*var2[0] + (-1.*t4782*t4817*t4874*t4882 - 1.*t4762*t5448)*var2[1] + (-1.*t4762*t4782*t4817*t4882 + t4874*t5448)*var2[2] + (t5077*t5478 + t5096*t5491 + t5000*(t5458 + t5462 - 1.*t5057*t5482 - 1.*t4911*t5486 - 1.*t5053*t5491 - 1.*t5060*t5497) + t5057*(t5466 + t5467 + t5053*t5478 + t5000*t5482 + t4960*t5486 + t5060*t5504))*var2[3] + (-1.*t4782*t4821*t4882*t5218 - 1.*t4782*t4784*t5235 + t4948*(-1.*t4784*t4822*t5045 + t5419 + t5423 + t5458 - 1.*t4882*t5416*t5459 + t5462) + t4782*t4882*(t4821*t4822*t4882*t5045 - 1.*t4822*t4954*t5416 + t5431 + t5433 + t5466 + t5467))*var2[4] + (-1.*t4784*t4821*t5409 + t4821*t4882*(t4784*t5043 - 1.*t4882*t5416 + t5419 + t5423) + t4882*(t5233 + t5426 + t5427) + t4784*(-1.*t4821*t4882*t5043 - 1.*t4784*t4821*t5416 + t5431 + t5433))*var2[5];
  p_output1[46]=t5491*var2[0] + (-1.*t4782*t4784*t4874 - 1.*t4762*t5497)*var2[1] + (-1.*t4762*t4782*t4784 + t4874*t5497)*var2[2] + (t5131*t5443 + t5120*t5478 + t5000*(t5053*t5443 + t5060*t5448 + t5109*t5482 + t4897*t5486 + t5546 + t5548) + t5109*(-1.*t5053*t5478 - 1.*t5000*t5482 - 1.*t4960*t5486 - 1.*t5060*t5504 + t5553 + t5554))*var2[3] + (-1.*t4782*t4821*t4882*t5291 - 1.*t4782*t4817*t4882*t5295 + t4948*(t4817*t4822*t4882*t5045 - 1.*t4822*t4894*t5416 + t5515 + t5517 + t5546 + t5548) + t4824*(-1.*t4821*t4822*t4882*t5045 + t4822*t4954*t5416 + t5525 + t5527 + t5553 + t5554))*var2[4] + (t4821*t4882*(-1.*t4817*t4882*t5043 - 1.*t4784*t4817*t5416 + t5515 + t5517) - 1.*t4784*t4817*t5522 + t4817*t4882*(t4821*t4882*t5043 + t4784*t4821*t5416 + t5525 + t5527) - 1.*t4784*t4821*t5532)*var2[5];
  p_output1[47]=t5478*var2[0] + (-1.*t4782*t4821*t4874*t4882 - 1.*t4762*t5504)*var2[1] + (-1.*t4762*t4782*t4821*t4882 + t4874*t5504)*var2[2] + (t5161*t5443 + t5186*t5491 + t5109*(t5057*t5482 + t4911*t5486 + t5053*t5491 + t5060*t5497 + t5609 + t5612) + t5057*(-1.*t5053*t5443 - 1.*t5060*t5448 - 1.*t5109*t5482 - 1.*t4897*t5486 + t5616 + t5618))*var2[3] + (-1.*t4782*t4817*t4882*t5344 - 1.*t4782*t4784*t5370 + t4824*(t4784*t4822*t5045 + t4882*t5416*t5459 + t5582 + t5584 + t5609 + t5612) + t4782*t4882*(-1.*t4817*t4822*t4882*t5045 + t4822*t4894*t5416 + t5588 + t5590 + t5616 + t5618))*var2[4] + (-1.*t4784*t4817*t5579 + t4817*t4882*(-1.*t4784*t5043 + t4882*t5416 + t5582 + t5584) + t4784*(t4817*t4882*t5043 + t4784*t4817*t5416 + t5588 + t5590) + t4882*(t5368 + t5593 + t5594))*var2[5];
  p_output1[48]=t5000*var2[0] + t4970*var2[1] + (t4762*t4948 + t4874*t4960)*var2[2] + (t5077*t5701 + t5000*(t5685 - 1.*t5057*t5705 - 1.*t4911*t5709) + t5057*(t5688 + t5693 + t5053*t5701 + t5000*t5705 + t4960*t5709 + t5060*t5716))*var2[3] + (t5218*t5675 + t4948*(-1.*t4784*t4882*t5659 + t4822*t4882*t5680 + t5685) + t4782*t4882*(t5649 + t5660 + t4954*t5680 + t5688 + t5045*t5691 + t5693))*var2[4] + (t4882*t4939*t5409 + t4784*(-1.*t4784*t4939*t5043 + t5034*t5643 + t5649 + t4939*t5654 + t5660 + t4821*t5659*t5661))*var2[5] + (0.1575*t4821 + 0.2255*t5643)*var2[15];
  p_output1[49]=(t5000*t5131 + t5120*t5701 + t5000*(t5093 + t5094 + t5095 + t5109*t5705 + t4897*t5709 + t5761) + t5109*(-1.*t5053*t5701 - 1.*t5000*t5705 - 1.*t4960*t5709 - 1.*t5060*t5716 + t5764 + t5766))*var2[3] + (t4948*t5295 + t5291*t5675 + t4948*(t5093 + t5233 + t5234 + t4894*t5680 + t5735 + t5761) + t4824*(-1.*t4954*t5680 - 1.*t5045*t5691 + t5727 + t5731 + t5764 + t5766))*var2[4] + (t4821*t4882*t5522 + t4882*t4939*t5532 + t4817*t4882*(t4784*t4939*t5043 - 1.*t4821*t5659*t5661 + t5727 + t5729 + t5730 + t5731) + t4821*t4882*(t5233 + t5426 + t5427 + t4817*t5659*t5661 + t5735 + t5737))*var2[5] + (t4821*(-1.*t4939*t5022 - 1.*t4821*t5659 + t5729 + t5730) + t4939*(t4821*t5022 + t5426 + t4817*t5659 + t5737) + t5643*t5743 + t4939*t5750)*var2[15];
  p_output1[50]=t5701*var2[0] + (t4874*t5675 - 1.*t4762*t5716)*var2[1] + (t4762*t5675 + t4874*t5716)*var2[2] + (t5000*t5161 + t5109*(t5057*t5705 + t4911*t5709 + t5808) + t5057*(t5128 + t5129 + t5130 - 1.*t5109*t5705 - 1.*t4897*t5709 + t5812))*var2[3] + (t4948*t5344 + t4824*(t4784*t4882*t5659 - 1.*t4822*t4882*t5680 + t5808) + t4782*t4882*(t5128 + t5293 + t5294 - 1.*t4894*t5680 + t5789 + t5812))*var2[4] + (t4821*t4882*t5579 + t4784*(t5293 + t5520 + t5521 - 1.*t4821*t5654 - 1.*t4817*t5659*t5661 + t5789))*var2[5] - 0.068*t4939*var2[15];
  p_output1[51]=t5859*var2[0] + (t4874*t5863 - 1.*t4762*t5867)*var2[1] + (t4762*t5863 + t4874*t5867)*var2[2] + (t5077*t5109 + t5000*(t5884 - 1.*t5057*t5896 - 1.*t4911*t5900) + t5057*(t5117 + t5118 + t5119 + t5887 + t5000*t5896 + t4960*t5900))*var2[3] + (t4824*t5218 + t4948*(-1.*t4784*t4882*t5847 + t4822*t4882*t5879 + t5884) + t4782*t4882*(t5117 + t5289 + t5290 + t5848 + t4954*t5879 + t5887))*var2[4] + (t4817*t4882*t5409 + t4784*(t5289 + t5530 + t5531 + t4939*t5843 + t4821*t5661*t5847 + t5848))*var2[5] + (0.2255*t4821 + 0.1575*t5643)*var2[15] + (-0.325*t4785 - 1.*t4785*t5018 - 1.*t4785*t5833)*var2[16];
  p_output1[52]=(t5109*t5120 + t5131*t5859 + t5000*(t5053*t5859 + t5060*t5867 + t5109*t5896 + t4897*t5900 + t5941 + t5944) + t5109*(t5175 + t5180 + t5181 - 1.*t5000*t5896 - 1.*t4960*t5900 + t5948))*var2[3] + (t4824*t5291 + t5295*t5863 + t4948*(t5045*t5857 + t4894*t5879 + t5919 + t5921 + t5941 + t5944) + t4824*(t5175 + t5368 + t5369 - 1.*t4954*t5879 + t5914 + t5948))*var2[4] + (t4817*t4882*t5532 + t4882*t5522*t5643 + t4817*t4882*(t5368 + t5593 + t5594 - 1.*t4821*t5661*t5847 + t5913 + t5914) + t4821*t4882*(-1.*t4784*t5043*t5643 + t4817*t5661*t5847 + t5918 + t5919 + t5921 + t5923))*var2[5] + (t4821*t5743 + t4817*t5750 + t4821*(-1.*t4817*t5022 + t5594 - 1.*t4821*t5847 + t5913) + t4939*(t5022*t5643 + t4817*t5847 + t5918 + t5923))*var2[15];
  p_output1[53]=t5109*var2[0] + t4904*var2[1] + (t4762*t4824 + t4874*t4897)*var2[2] + (t5161*t5859 + t5109*(t5057*t5896 + t4911*t5900 + t5995) + t5057*(-1.*t5053*t5859 - 1.*t5060*t5867 - 1.*t5109*t5896 - 1.*t4897*t5900 + t5998 + t6001))*var2[3] + (t5344*t5863 + t4824*(t4784*t4882*t5847 - 1.*t4822*t4882*t5879 + t5995) + t4782*t4882*(-1.*t5045*t5857 - 1.*t4894*t5879 + t5977 + t5979 + t5998 + t6001))*var2[4] + (t4882*t5579*t5643 + t4784*(-1.*t4817*t5034 + t4784*t5043*t5643 - 1.*t4821*t5843 - 1.*t4817*t5661*t5847 + t5977 + t5979))*var2[5] - 0.068*t4817*var2[15] + (-0.325*t4815 - 1.*t4815*t5018 - 1.*t4815*t5833)*var2[16];
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

#include "dJh_RrFoot_ParallelStance.hh"

namespace SymFunction
{

void dJh_RrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
