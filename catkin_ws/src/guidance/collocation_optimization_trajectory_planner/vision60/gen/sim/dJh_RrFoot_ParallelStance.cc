/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:05:04 GMT+02:00
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
  double t3573;
  double t2978;
  double t3110;
  double t3725;
  double t3112;
  double t3727;
  double t3747;
  double t2845;
  double t3932;
  double t3934;
  double t3951;
  double t2849;
  double t3973;
  double t4010;
  double t3914;
  double t3977;
  double t3983;
  double t2595;
  double t4012;
  double t4031;
  double t4375;
  double t4384;
  double t4385;
  double t4394;
  double t4398;
  double t4402;
  double t4405;
  double t4452;
  double t4453;
  double t4458;
  double t4514;
  double t4515;
  double t4524;
  double t4502;
  double t4531;
  double t4538;
  double t4549;
  double t4558;
  double t4566;
  double t4577;
  double t4579;
  double t4582;
  double t4598;
  double t4600;
  double t4605;
  double t4617;
  double t4618;
  double t4620;
  double t4627;
  double t4629;
  double t4630;
  double t4633;
  double t4638;
  double t4639;
  double t4615;
  double t4626;
  double t4646;
  double t4647;
  double t4614;
  double t4653;
  double t4654;
  double t4668;
  double t4670;
  double t4671;
  double t4673;
  double t4676;
  double t4679;
  double t4680;
  double t4681;
  double t4682;
  double t4683;
  double t4691;
  double t4693;
  double t4695;
  double t4700;
  double t4701;
  double t4721;
  double t4722;
  double t4728;
  double t4713;
  double t4718;
  double t4719;
  double t4706;
  double t4707;
  double t4709;
  double t4610;
  double t4611;
  double t4613;
  double t4657;
  double t4702;
  double t4704;
  double t4745;
  double t4751;
  double t4753;
  double t4731;
  double t4732;
  double t4736;
  double t4828;
  double t4829;
  double t4831;
  double t4770;
  double t4772;
  double t4773;
  double t4965;
  double t4966;
  double t4968;
  double t4754;
  double t4793;
  double t4995;
  double t4996;
  double t4998;
  double t5003;
  double t5013;
  double t5015;
  double t5016;
  double t4761;
  double t4765;
  double t4767;
  double t5020;
  double t5022;
  double t4795;
  double t4796;
  double t4797;
  double t4846;
  double t4868;
  double t5080;
  double t5083;
  double t4848;
  double t4849;
  double t4850;
  double t5101;
  double t5104;
  double t4871;
  double t4875;
  double t4876;
  double t4915;
  double t4954;
  double t5171;
  double t4918;
  double t4919;
  double t4927;
  double t5177;
  double t5179;
  double t4955;
  double t4958;
  double t4960;
  double t4991;
  double t5006;
  double t5264;
  double t5269;
  double t5274;
  double t5287;
  double t5289;
  double t5342;
  double t5348;
  double t5349;
  double t4992;
  double t4993;
  double t5277;
  double t5291;
  double t5318;
  double t5324;
  double t5007;
  double t5010;
  double t5365;
  double t5366;
  double t5373;
  double t5378;
  double t5379;
  double t5390;
  double t5391;
  double t5392;
  double t5395;
  double t5396;
  double t5397;
  double t5399;
  double t5400;
  double t5401;
  double t5404;
  double t5405;
  double t5406;
  double t5091;
  double t5087;
  double t5408;
  double t5409;
  double t5412;
  double t5444;
  double t5449;
  double t5088;
  double t5089;
  double t5470;
  double t5472;
  double t5093;
  double t5094;
  double t5558;
  double t5564;
  double t5332;
  double t5334;
  double t5335;
  double t5602;
  double t5603;
  double t5424;
  double t5427;
  double t5428;
  double t5159;
  double t5189;
  double t5160;
  double t5168;
  double t5684;
  double t5689;
  double t5369;
  double t5699;
  double t5701;
  double t5190;
  double t5201;
  double t5730;
  double t5739;
  double t5745;
  double t5748;
  double t5259;
  double t5261;
  double t5782;
  double t5783;
  double t5784;
  double t5809;
  double t5812;
  double t4590;
  double t4592;
  double t4593;
  double t5797;
  double t5799;
  double t5800;
  double t5805;
  double t5791;
  double t5808;
  double t5814;
  double t5838;
  double t5840;
  double t5841;
  double t5828;
  double t5829;
  double t5830;
  double t5833;
  double t5835;
  double t5836;
  double t5847;
  double t5848;
  double t5849;
  double t5842;
  double t5846;
  double t5852;
  double t5861;
  double t5862;
  double t5864;
  double t5866;
  double t5868;
  double t5869;
  double t5871;
  double t5872;
  double t5873;
  double t5458;
  double t5464;
  double t5465;
  double t5500;
  double t5501;
  double t5502;
  double t5815;
  double t5303;
  double t5304;
  double t5899;
  double t5906;
  double t5918;
  double t5913;
  double t5897;
  double t5907;
  double t5964;
  double t5968;
  double t5973;
  double t5878;
  double t5879;
  double t5880;
  double t5676;
  double t5679;
  double t6002;
  double t6041;
  double t6047;
  double t6088;
  double t6091;
  double t6093;
  double t6115;
  double t6117;
  double t6134;
  double t6151;
  double t6152;
  double t6153;
  double t6158;
  double t6162;
  double t6163;
  double t6166;
  double t6167;
  double t6170;
  double t6108;
  double t6109;
  double t6138;
  double t6204;
  double t6205;
  double t6209;
  double t6198;
  double t6199;
  double t6201;
  double t6210;
  double t6214;
  double t6224;
  double t6226;
  double t6227;
  double t6229;
  double t6233;
  double t6234;
  double t5704;
  double t5705;
  double t5926;
  double t5928;
  double t5942;
  double t5943;
  double t6256;
  double t6262;
  double t6272;
  double t6263;
  double t6266;
  double t6257;
  double t6307;
  double t6314;
  double t6150;
  double t6155;
  double t6156;
  double t6324;
  double t4418;
  double t4423;
  double t4426;
  double t6385;
  double t6387;
  double t6417;
  double t6420;
  double t6423;
  t3573 = Cos(var1[16]);
  t2978 = Cos(var1[17]);
  t3110 = Sin(var1[16]);
  t3725 = Sin(var1[17]);
  t3112 = t2978*t3110;
  t3727 = -1.*t3573*t3725;
  t3747 = t3112 + t3727;
  t2845 = Cos(var1[5]);
  t3932 = t3573*t2978;
  t3934 = t3110*t3725;
  t3951 = t3932 + t3934;
  t2849 = Sin(var1[15]);
  t3973 = Sin(var1[5]);
  t4010 = Cos(var1[3]);
  t3914 = -1.*t2845*t2849*t3747;
  t3977 = t3951*t3973;
  t3983 = t3914 + t3977;
  t2595 = Sin(var1[3]);
  t4012 = Cos(var1[15]);
  t4031 = Cos(var1[4]);
  t4375 = t4012*t4031*t3747;
  t4384 = Sin(var1[4]);
  t4385 = t2845*t3951;
  t4394 = t2849*t3747*t3973;
  t4398 = t4385 + t4394;
  t4402 = -1.*t4384*t4398;
  t4405 = t4375 + t4402;
  t4452 = t4031*t2849;
  t4453 = t4012*t4384*t3973;
  t4458 = t4452 + t4453;
  t4514 = -1.*t2978*t3110;
  t4515 = t3573*t3725;
  t4524 = t4514 + t4515;
  t4502 = -1.*t2845*t2849*t3951;
  t4531 = t4524*t3973;
  t4538 = t4502 + t4531;
  t4549 = t4012*t4031*t3951;
  t4558 = t2845*t4524;
  t4566 = t2849*t3951*t3973;
  t4577 = t4558 + t4566;
  t4579 = -1.*t4384*t4577;
  t4582 = t4549 + t4579;
  t4598 = -1.*t4012*t3747*t4384;
  t4600 = -1.*t4031*t4398;
  t4605 = t4598 + t4600;
  t4617 = -0.0641*t2978;
  t4618 = -0.28*t3725;
  t4620 = t4617 + t4618;
  t4627 = -1.*t2978;
  t4629 = 1. + t4627;
  t4630 = -0.575*t4629;
  t4633 = -0.295*t2978;
  t4638 = -0.0641*t3725;
  t4639 = t4630 + t4633 + t4638;
  t4615 = 0.325*t3110;
  t4626 = t3573*t4620;
  t4646 = t3110*t4639;
  t4647 = t4615 + t4626 + t4646;
  t4614 = -0.068*t2849;
  t4653 = t4012*t4647;
  t4654 = t4614 + t4653;
  t4668 = -1.*t3573;
  t4670 = 1. + t4668;
  t4671 = -0.325*t4670;
  t4673 = -1.*t3110*t4620;
  t4676 = t3573*t4639;
  t4679 = t4671 + t4673 + t4676;
  t4680 = t2845*t4679;
  t4681 = -1.*t4012;
  t4682 = 1. + t4681;
  t4683 = -0.1575*t4682;
  t4691 = -0.2255*t4012;
  t4693 = -1.*t2849*t4647;
  t4695 = t4683 + t4691 + t4693;
  t4700 = -1.*t4695*t3973;
  t4701 = t4680 + t4700;
  t4721 = t4031*t4654;
  t4722 = -1.*t4384*t4701;
  t4728 = t4721 + t4722;
  t4713 = t2849*t4384;
  t4718 = -1.*t4012*t4031*t3973;
  t4719 = t4713 + t4718;
  t4706 = t4654*t4384;
  t4707 = t4031*t4701;
  t4709 = t4706 + t4707;
  t4610 = t4012*t3951*t4384;
  t4611 = t4031*t4577;
  t4613 = t4610 + t4611;
  t4657 = -1.*t4654*t4384;
  t4702 = -1.*t4031*t4701;
  t4704 = t4657 + t4702;
  t4745 = t2845*t4695;
  t4751 = t4679*t3973;
  t4753 = t4745 + t4751;
  t4731 = -1.*t2849*t4384;
  t4732 = t4012*t4031*t3973;
  t4736 = t4731 + t4732;
  t4828 = t4012*t3747*t4384;
  t4829 = t4031*t4398;
  t4831 = t4828 + t4829;
  t4770 = -1.*t4012*t3951*t4384;
  t4772 = -1.*t4031*t4577;
  t4773 = t4770 + t4772;
  t4965 = t2845*t2849*t3747;
  t4966 = -1.*t3951*t3973;
  t4968 = t4965 + t4966;
  t4754 = -1.*t4012*t2845*t4753;
  t4793 = t4753*t4538;
  t4995 = -1.*t2845*t4695;
  t4996 = -1.*t4679*t3973;
  t4998 = t4995 + t4996;
  t5003 = t4012*t3973*t4753;
  t5013 = t2845*t2849*t3951;
  t5015 = -1.*t4524*t3973;
  t5016 = t5013 + t5015;
  t4761 = -1.*t4719*t4709;
  t4765 = -1.*t4458*t4728;
  t4767 = t4754 + t4761 + t4765;
  t5020 = t4701*t4538;
  t5022 = t4753*t4577;
  t4795 = t4709*t4613;
  t4796 = t4728*t4582;
  t4797 = t4793 + t4795 + t4796;
  t4846 = t4753*t3983;
  t4868 = -1.*t4753*t4538;
  t5080 = t4753*t4398;
  t5083 = t4701*t3983;
  t4848 = t4709*t4831;
  t4849 = t4728*t4405;
  t4850 = t4846 + t4848 + t4849;
  t5101 = -1.*t4701*t4538;
  t5104 = -1.*t4753*t4577;
  t4871 = -1.*t4709*t4613;
  t4875 = -1.*t4728*t4582;
  t4876 = t4868 + t4871 + t4875;
  t4915 = t4012*t2845*t4753;
  t4954 = -1.*t4753*t3983;
  t5171 = -1.*t4012*t3973*t4753;
  t4918 = t4719*t4709;
  t4919 = t4458*t4728;
  t4927 = t4915 + t4918 + t4919;
  t5177 = -1.*t4753*t4398;
  t5179 = -1.*t4701*t3983;
  t4955 = -1.*t4709*t4831;
  t4958 = -1.*t4728*t4405;
  t4960 = t4954 + t4955 + t4958;
  t4991 = -1.*t2849*t4654;
  t5006 = t4012*t4654*t3951;
  t5264 = 0.068*t2849;
  t5269 = -1.*t4012*t4647;
  t5274 = t5264 + t5269;
  t5287 = -0.068*t4012;
  t5289 = t5287 + t4693;
  t5342 = -1.*t4031*t2849*t3747;
  t5348 = -1.*t4012*t3747*t4384*t3973;
  t5349 = t5342 + t5348;
  t4992 = t4012*t3973*t4701;
  t4993 = t4991 + t4992 + t4754;
  t5277 = -1.*t4012*t4654;
  t5291 = -1.*t2849*t5289;
  t5318 = -1.*t2849*t4654*t3951;
  t5324 = t4012*t5289*t3951;
  t5007 = t4701*t4577;
  t5010 = t5006 + t4793 + t5007;
  t5365 = Power(t2845,2);
  t5366 = -1.*t4012*t5365*t5274;
  t5373 = t2845*t2849*t4753;
  t5378 = -1.*t4012*t2845*t3951*t4753;
  t5379 = t2845*t5274*t4538;
  t5390 = -1.*t2849*t3951*t4384;
  t5391 = t4012*t4031*t3951*t3973;
  t5392 = t5390 + t5391;
  t5395 = t5289*t4384;
  t5396 = -1.*t4031*t5274*t3973;
  t5397 = t5395 + t5396;
  t5399 = t4031*t5289;
  t5400 = t5274*t4384*t3973;
  t5401 = t5399 + t5400;
  t5404 = t4012*t4384;
  t5405 = t4031*t2849*t3973;
  t5406 = t5404 + t5405;
  t5091 = -1.*t4012*t4654*t3951;
  t5087 = t4012*t4654*t3747;
  t5408 = t4012*t4031;
  t5409 = -1.*t2849*t4384*t3973;
  t5412 = t5408 + t5409;
  t5444 = -1.*t2849*t4654*t3747;
  t5449 = t4012*t5289*t3747;
  t5088 = t4701*t4398;
  t5089 = t5087 + t5088 + t4846;
  t5470 = t2849*t4654*t3951;
  t5472 = -1.*t4012*t5289*t3951;
  t5093 = -1.*t4701*t4577;
  t5094 = t5091 + t4868 + t5093;
  t5558 = -1.*t4012*t2845*t3747*t4753;
  t5564 = t2845*t5274*t3983;
  t5332 = -1.*t2849*t3747*t4384;
  t5334 = t4012*t4031*t3747*t3973;
  t5335 = t5332 + t5334;
  t5602 = t4012*t2845*t3951*t4753;
  t5603 = -1.*t2845*t5274*t4538;
  t5424 = -1.*t4031*t2849*t3951;
  t5427 = -1.*t4012*t3951*t4384*t3973;
  t5428 = t5424 + t5427;
  t5159 = t2849*t4654;
  t5189 = -1.*t4012*t4654*t3747;
  t5160 = -1.*t4012*t3973*t4701;
  t5168 = t5159 + t5160 + t4915;
  t5684 = t4012*t4654;
  t5689 = t2849*t5289;
  t5369 = Power(t3973,2);
  t5699 = t2849*t4654*t3747;
  t5701 = -1.*t4012*t5289*t3747;
  t5190 = -1.*t4701*t4398;
  t5201 = t5189 + t5190 + t4954;
  t5730 = t4012*t5365*t5274;
  t5739 = -1.*t2845*t2849*t4753;
  t5745 = t4012*t2845*t3747*t4753;
  t5748 = -1.*t2845*t5274*t3983;
  t5259 = -1.*t4012*t4695;
  t5261 = t4991 + t5259;
  t5782 = -1.*t3573*t2978;
  t5783 = -1.*t3110*t3725;
  t5784 = t5782 + t5783;
  t5809 = 0.325*t3573;
  t5812 = t5809 + t4673 + t4676;
  t4590 = t4010*t4538;
  t4592 = -1.*t2595*t4582;
  t4593 = t4590 + t4592;
  t5797 = -0.325*t3110;
  t5799 = -1.*t3573*t4620;
  t5800 = -1.*t3110*t4639;
  t5805 = t5797 + t5799 + t5800;
  t5791 = t4012*t4654*t4524;
  t5808 = Power(t4012,2);
  t5814 = t5808*t5812*t3951;
  t5838 = -1.*t2845*t2849*t5812;
  t5840 = t5805*t3973;
  t5841 = t5838 + t5840;
  t5828 = -1.*t2845*t2849*t4524;
  t5829 = t5784*t3973;
  t5830 = t5828 + t5829;
  t5833 = t2845*t5805;
  t5835 = t2849*t5812*t3973;
  t5836 = t5833 + t5835;
  t5847 = t2845*t5784;
  t5848 = t2849*t4524*t3973;
  t5849 = t5847 + t5848;
  t5842 = -1.*t4012*t2845*t5841;
  t5846 = t5841*t4538;
  t5852 = t4753*t5830;
  t5861 = t4012*t4524*t4384;
  t5862 = t4031*t5849;
  t5864 = t5861 + t5862;
  t5866 = t4012*t5812*t4384;
  t5868 = t4031*t5836;
  t5869 = t5866 + t5868;
  t5871 = t4012*t4031*t5812;
  t5872 = -1.*t4384*t5836;
  t5873 = t5871 + t5872;
  t5458 = -1.*t4679*t4524;
  t5464 = t2849*t4695*t3951;
  t5465 = t5458 + t5091 + t5464;
  t5500 = -1.*t2849*t4695*t3747;
  t5501 = t4679*t3951;
  t5502 = t5087 + t5500 + t5501;
  t5815 = Power(t2849,2);
  t5303 = t4679*t4524;
  t5304 = -1.*t2849*t4695*t3951;
  t5899 = -1.*t5805*t4524;
  t5906 = -1.*t4679*t5784;
  t5918 = t5805*t3951;
  t5913 = t5808*t5812*t3747;
  t5897 = -1.*t4012*t4654*t4524;
  t5907 = -1.*t5808*t5812*t3951;
  t5964 = t5841*t3983;
  t5968 = -1.*t5841*t4538;
  t5973 = -1.*t4753*t5830;
  t5878 = t4012*t4031*t4524;
  t5879 = -1.*t4384*t5849;
  t5880 = t5878 + t5879;
  t5676 = t4012*t4695;
  t5679 = t5159 + t5676;
  t6002 = -1.*t5808*t5812*t3747;
  t6041 = t4012*t2845*t5841;
  t6047 = -1.*t5841*t3983;
  t6088 = -0.28*t2978;
  t6091 = 0.0641*t3725;
  t6093 = t6088 + t6091;
  t6115 = t3110*t4620;
  t6117 = t3573*t6093;
  t6134 = t6115 + t6117;
  t6151 = t2845*t3747;
  t6152 = t2849*t5784*t3973;
  t6153 = t6151 + t6152;
  t6158 = -1.*t2845*t2849*t5784;
  t6162 = t3747*t3973;
  t6163 = t6158 + t6162;
  t6166 = t4012*t4031*t5784;
  t6167 = -1.*t4384*t6153;
  t6170 = t6166 + t6167;
  t6108 = -1.*t3110*t6093;
  t6109 = t4626 + t6108;
  t6138 = t5808*t6134*t3951;
  t6204 = -1.*t2845*t2849*t6134;
  t6205 = t6109*t3973;
  t6209 = t6204 + t6205;
  t6198 = t2845*t6109;
  t6199 = t2849*t6134*t3973;
  t6201 = t6198 + t6199;
  t6210 = -1.*t4012*t2845*t6209;
  t6214 = t6209*t4538;
  t6224 = t4012*t6134*t4384;
  t6226 = t4031*t6201;
  t6227 = t6224 + t6226;
  t6229 = t4012*t4031*t6134;
  t6233 = -1.*t4384*t6201;
  t6234 = t6229 + t6233;
  t5704 = t2849*t4695*t3747;
  t5705 = -1.*t4679*t3951;
  t5926 = t4647*t3747;
  t5928 = t5926 + t5501;
  t5942 = -1.*t4647*t3951;
  t5943 = t5458 + t5942;
  t6256 = -1.*t6109*t4524;
  t6262 = t4679*t3747;
  t6272 = t6109*t3951;
  t6263 = t5808*t6134*t3747;
  t6266 = t4012*t4654*t5784;
  t6257 = -1.*t5808*t6134*t3951;
  t6307 = t4753*t6163;
  t6314 = t6209*t3983;
  t6150 = t4012*t5784*t4384;
  t6155 = t4031*t6153;
  t6156 = t6150 + t6155;
  t6324 = -1.*t6209*t4538;
  t4418 = t4010*t3983;
  t4423 = -1.*t2595*t4405;
  t4426 = t4418 + t4423;
  t6385 = -1.*t5808*t6134*t3747;
  t6387 = -1.*t4012*t4654*t5784;
  t6417 = t4012*t2845*t6209;
  t6420 = -1.*t4753*t6163;
  t6423 = -1.*t6209*t3983;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t2595*t3983 - 1.*t4010*t4405)*var2[1] + t4426*var2[2];
  p_output1[10]=(-1.*t2595*t2845*t4012 - 1.*t4010*t4458)*var2[1] + (t2845*t4010*t4012 - 1.*t2595*t4458)*var2[2];
  p_output1[11]=(-1.*t2595*t4538 - 1.*t4010*t4582)*var2[1] + t4593*var2[2];
  p_output1[12]=t4405*var2[0] - 1.*t2595*t4605*var2[1] + t4010*t4605*var2[2] + (t4613*(-1.*t4458*t4704 - 1.*t4458*t4709 - 1.*t4719*t4728 - 1.*t4728*t4736) + t4582*t4767 + t4719*(t4582*t4704 + t4582*t4709 + t4613*t4728 + t4728*t4773) + t4458*t4797)*var2[3];
  p_output1[13]=t4458*var2[0] - 1.*t2595*t4736*var2[1] + t4010*t4736*var2[2] + ((-1.*t4582*t4704 - 1.*t4582*t4709 - 1.*t4613*t4728 - 1.*t4728*t4773)*t4831 + t4613*(t4405*t4704 + t4405*t4709 + t4605*t4728 + t4728*t4831) + t4582*t4850 + t4405*t4876)*var2[3];
  p_output1[14]=t4582*var2[0] - 1.*t2595*t4773*var2[1] + t4010*t4773*var2[2] + ((t4458*t4704 + t4458*t4709 + t4719*t4728 + t4728*t4736)*t4831 + t4719*(-1.*t4405*t4704 - 1.*t4405*t4709 - 1.*t4605*t4728 - 1.*t4728*t4831) + t4405*t4927 + t4458*t4960)*var2[3];
  p_output1[15]=t4031*t4968*var2[0] + (t4010*t4398 + t2595*t4384*t4968)*var2[1] + (t2595*t4398 - 1.*t4010*t4384*t4968)*var2[2] + (-1.*t2845*t4012*t4031*t4797 + t4613*(-1.*t2845*t4012*t4701 + t2845*t4012*t4031*t4709 - 1.*t2845*t4012*t4384*t4728 + t4384*t4458*t4998 - 1.*t4031*t4719*t4998 + t5003) + t4031*t4767*t5016 + t4719*(-1.*t4384*t4582*t4998 + t4031*t4613*t4998 + t4031*t4709*t5016 - 1.*t4384*t4728*t5016 + t5020 + t5022))*var2[3] + (t4577*t4993 + t4538*(t3973*t4012*t4998 + t5003) - 1.*t3973*t4012*t5010 + t2845*t4012*(t4577*t4998 + t4701*t5016 + t5020 + t5022))*var2[4];
  p_output1[16]=-1.*t2845*t4012*t4031*var2[0] + (-1.*t3973*t4010*t4012 - 1.*t2595*t2845*t4012*t4384)*var2[1] + (-1.*t2595*t3973*t4012 + t2845*t4010*t4012*t4384)*var2[2] + (t4031*t4876*t4968 + t4031*t4850*t5016 + t4613*(t4031*t4709*t4968 - 1.*t4384*t4728*t4968 - 1.*t4384*t4405*t4998 + t4031*t4831*t4998 + t5080 + t5083) + t4831*(t4384*t4582*t4998 - 1.*t4031*t4613*t4998 - 1.*t4031*t4709*t5016 + t4384*t4728*t5016 + t5101 + t5104))*var2[3] + (t4538*(t4701*t4968 + t4398*t4998 + t5080 + t5083) + t4577*t5089 + t4398*t5094 + t3983*(-1.*t4577*t4998 - 1.*t4701*t5016 + t5101 + t5104))*var2[4];
  p_output1[17]=t4031*t5016*var2[0] + (t4010*t4577 + t2595*t4384*t5016)*var2[1] + (t2595*t4577 - 1.*t4010*t4384*t5016)*var2[2] + (-1.*t2845*t4012*t4031*t4960 + t4031*t4927*t4968 + t4831*(t2845*t4012*t4701 - 1.*t2845*t4012*t4031*t4709 + t2845*t4012*t4384*t4728 - 1.*t4384*t4458*t4998 + t4031*t4719*t4998 + t5171) + t4719*(-1.*t4031*t4709*t4968 + t4384*t4728*t4968 + t4384*t4405*t4998 - 1.*t4031*t4831*t4998 + t5177 + t5179))*var2[3] + (t4398*t5168 + t3983*(-1.*t3973*t4012*t4998 + t5171) + t2845*t4012*(-1.*t4701*t4968 - 1.*t4398*t4998 + t5177 + t5179) - 1.*t3973*t4012*t5201)*var2[4];
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
  p_output1[45]=t5335*var2[0] + (-1.*t2845*t3747*t4010*t4012 - 1.*t2595*t5349)*var2[1] + (-1.*t2595*t2845*t3747*t4012 + t4010*t5349)*var2[2] + (t4767*t5392 + t4797*t5406 + t4613*(t5366 + t5373 - 1.*t4719*t5397 - 1.*t4458*t5401 - 1.*t4709*t5406 - 1.*t4728*t5412) + t4719*(t5378 + t5379 + t4709*t5392 + t4613*t5397 + t4582*t5401 + t4728*t5428))*var2[3] + (-1.*t2845*t3951*t4012*t4993 - 1.*t2845*t2849*t5010 + t4538*(-1.*t2849*t3973*t4701 + t5277 + t5291 + t5366 - 1.*t4012*t5274*t5369 + t5373) + t2845*t4012*(t3951*t3973*t4012*t4701 - 1.*t3973*t4577*t5274 + t5318 + t5324 + t5378 + t5379))*var2[4] + (-1.*t2849*t3951*t5261 + t3951*t4012*(t2849*t4695 - 1.*t4012*t5274 + t5277 + t5291) + t4012*(t5006 + t5303 + t5304) + t2849*(-1.*t3951*t4012*t4695 - 1.*t2849*t3951*t5274 + t5318 + t5324))*var2[5];
  p_output1[46]=t5406*var2[0] + (-1.*t2845*t2849*t4010 - 1.*t2595*t5412)*var2[1] + (-1.*t2595*t2845*t2849 + t4010*t5412)*var2[2] + (t4876*t5335 + t4850*t5392 + t4613*(t4709*t5335 + t4728*t5349 + t4831*t5397 + t4405*t5401 + t5558 + t5564) + t4831*(-1.*t4709*t5392 - 1.*t4613*t5397 - 1.*t4582*t5401 - 1.*t4728*t5428 + t5602 + t5603))*var2[3] + (-1.*t2845*t3951*t4012*t5089 - 1.*t2845*t3747*t4012*t5094 + t4538*(t3747*t3973*t4012*t4701 - 1.*t3973*t4398*t5274 + t5444 + t5449 + t5558 + t5564) + t3983*(-1.*t3951*t3973*t4012*t4701 + t3973*t4577*t5274 + t5470 + t5472 + t5602 + t5603))*var2[4] + (t3951*t4012*(-1.*t3747*t4012*t4695 - 1.*t2849*t3747*t5274 + t5444 + t5449) - 1.*t2849*t3747*t5465 + t3747*t4012*(t3951*t4012*t4695 + t2849*t3951*t5274 + t5470 + t5472) - 1.*t2849*t3951*t5502)*var2[5];
  p_output1[47]=t5392*var2[0] + (-1.*t2845*t3951*t4010*t4012 - 1.*t2595*t5428)*var2[1] + (-1.*t2595*t2845*t3951*t4012 + t4010*t5428)*var2[2] + (t4927*t5335 + t4960*t5406 + t4831*(t4719*t5397 + t4458*t5401 + t4709*t5406 + t4728*t5412 + t5730 + t5739) + t4719*(-1.*t4709*t5335 - 1.*t4728*t5349 - 1.*t4831*t5397 - 1.*t4405*t5401 + t5745 + t5748))*var2[3] + (-1.*t2845*t3747*t4012*t5168 - 1.*t2845*t2849*t5201 + t3983*(t2849*t3973*t4701 + t4012*t5274*t5369 + t5684 + t5689 + t5730 + t5739) + t2845*t4012*(-1.*t3747*t3973*t4012*t4701 + t3973*t4398*t5274 + t5699 + t5701 + t5745 + t5748))*var2[4] + (-1.*t2849*t3747*t5679 + t3747*t4012*(-1.*t2849*t4695 + t4012*t5274 + t5684 + t5689) + t2849*(t3747*t4012*t4695 + t2849*t3747*t5274 + t5699 + t5701) + t4012*(t5189 + t5704 + t5705))*var2[5];
  p_output1[48]=t4613*var2[0] + t4593*var2[1] + (t2595*t4538 + t4010*t4582)*var2[2] + (t4767*t5864 + t4613*(t5842 - 1.*t4719*t5869 - 1.*t4458*t5873) + t4719*(t5846 + t5852 + t4709*t5864 + t4613*t5869 + t4582*t5873 + t4728*t5880))*var2[3] + (t4993*t5830 + t4538*(-1.*t2849*t4012*t5812 + t3973*t4012*t5836 + t5842) + t2845*t4012*(t5791 + t5814 + t4577*t5836 + t5846 + t4701*t5849 + t5852))*var2[4] + (t4012*t4524*t5261 + t2849*(-1.*t2849*t4524*t4695 + t4679*t5784 + t5791 + t4524*t5805 + t5814 + t3951*t5812*t5815))*var2[5] + (0.1575*t3951 + 0.2255*t5784)*var2[15];
  p_output1[49]=(t4613*t4876 + t4850*t5864 + t4613*(t4793 + t4795 + t4796 + t4831*t5869 + t4405*t5873 + t5964) + t4831*(-1.*t4709*t5864 - 1.*t4613*t5869 - 1.*t4582*t5873 - 1.*t4728*t5880 + t5968 + t5973))*var2[3] + (t4538*t5094 + t5089*t5830 + t4538*(t4793 + t5006 + t5007 + t4398*t5836 + t5913 + t5964) + t3983*(-1.*t4577*t5836 - 1.*t4701*t5849 + t5897 + t5907 + t5968 + t5973))*var2[4] + (t3951*t4012*t5465 + t4012*t4524*t5502 + t3747*t4012*(t2849*t4524*t4695 - 1.*t3951*t5812*t5815 + t5897 + t5899 + t5906 + t5907) + t3951*t4012*(t5006 + t5303 + t5304 + t3747*t5812*t5815 + t5913 + t5918))*var2[5] + (t3951*(-1.*t4524*t4647 - 1.*t3951*t5812 + t5899 + t5906) + t4524*(t3951*t4647 + t5303 + t3747*t5812 + t5918) + t5784*t5928 + t4524*t5943)*var2[15];
  p_output1[50]=t5864*var2[0] + (t4010*t5830 - 1.*t2595*t5880)*var2[1] + (t2595*t5830 + t4010*t5880)*var2[2] + (t4613*t4927 + t4831*(t4719*t5869 + t4458*t5873 + t6041) + t4719*(t4868 + t4871 + t4875 - 1.*t4831*t5869 - 1.*t4405*t5873 + t6047))*var2[3] + (t4538*t5168 + t3983*(t2849*t4012*t5812 - 1.*t3973*t4012*t5836 + t6041) + t2845*t4012*(t4868 + t5091 + t5093 - 1.*t4398*t5836 + t6002 + t6047))*var2[4] + (t3951*t4012*t5679 + t2849*(t5091 + t5458 + t5464 - 1.*t3951*t5805 - 1.*t3747*t5812*t5815 + t6002))*var2[5] - 0.068*t4524*var2[15];
  p_output1[51]=t6156*var2[0] + (t4010*t6163 - 1.*t2595*t6170)*var2[1] + (t2595*t6163 + t4010*t6170)*var2[2] + (t4767*t4831 + t4613*(t6210 - 1.*t4719*t6227 - 1.*t4458*t6234) + t4719*(t4846 + t4848 + t4849 + t6214 + t4613*t6227 + t4582*t6234))*var2[3] + (t3983*t4993 + t4538*(-1.*t2849*t4012*t6134 + t3973*t4012*t6201 + t6210) + t2845*t4012*(t4846 + t5087 + t5088 + t6138 + t4577*t6201 + t6214))*var2[4] + (t3747*t4012*t5261 + t2849*(t5087 + t5500 + t5501 + t4524*t6109 + t3951*t5815*t6134 + t6138))*var2[5] + (0.2255*t3951 + 0.1575*t5784)*var2[15] + (-0.325*t2978 - 1.*t2978*t4639 - 1.*t2978*t6093)*var2[16];
  p_output1[52]=(t4831*t4850 + t4876*t6156 + t4613*(t4709*t6156 + t4728*t6170 + t4831*t6227 + t4405*t6234 + t6307 + t6314) + t4831*(t4954 + t4955 + t4958 - 1.*t4613*t6227 - 1.*t4582*t6234 + t6324))*var2[3] + (t3983*t5089 + t5094*t6163 + t4538*(t4701*t6153 + t4398*t6201 + t6263 + t6266 + t6307 + t6314) + t3983*(t4954 + t5189 + t5190 - 1.*t4577*t6201 + t6257 + t6324))*var2[4] + (t3747*t4012*t5502 + t4012*t5465*t5784 + t3747*t4012*(t5189 + t5704 + t5705 - 1.*t3951*t5815*t6134 + t6256 + t6257) + t3951*t4012*(-1.*t2849*t4695*t5784 + t3747*t5815*t6134 + t6262 + t6263 + t6266 + t6272))*var2[5] + (t3951*t5928 + t3747*t5943 + t3951*(-1.*t3747*t4647 + t5705 - 1.*t3951*t6134 + t6256) + t4524*(t4647*t5784 + t3747*t6134 + t6262 + t6272))*var2[15];
  p_output1[53]=t4831*var2[0] + t4426*var2[1] + (t2595*t3983 + t4010*t4405)*var2[2] + (t4927*t6156 + t4831*(t4719*t6227 + t4458*t6234 + t6417) + t4719*(-1.*t4709*t6156 - 1.*t4728*t6170 - 1.*t4831*t6227 - 1.*t4405*t6234 + t6420 + t6423))*var2[3] + (t5168*t6163 + t3983*(t2849*t4012*t6134 - 1.*t3973*t4012*t6201 + t6417) + t2845*t4012*(-1.*t4701*t6153 - 1.*t4398*t6201 + t6385 + t6387 + t6420 + t6423))*var2[4] + (t4012*t5679*t5784 + t2849*(-1.*t3747*t4679 + t2849*t4695*t5784 - 1.*t3951*t6109 - 1.*t3747*t5815*t6134 + t6385 + t6387))*var2[5] - 0.068*t3747*var2[15] + (-0.325*t3725 - 1.*t3725*t4639 - 1.*t3725*t6093)*var2[16];
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
