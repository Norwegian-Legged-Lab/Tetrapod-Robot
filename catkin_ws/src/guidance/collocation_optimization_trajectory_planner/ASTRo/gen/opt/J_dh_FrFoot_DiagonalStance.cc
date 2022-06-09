/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:52:44 GMT+02:00
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
  double t3806;
  double t4108;
  double t4112;
  double t4174;
  double t4184;
  double t4759;
  double t4784;
  double t4806;
  double t3614;
  double t3767;
  double t4886;
  double t4968;
  double t4802;
  double t4909;
  double t4951;
  double t3328;
  double t4983;
  double t4984;
  double t4986;
  double t4992;
  double t4998;
  double t5121;
  double t5122;
  double t5126;
  double t5142;
  double t5155;
  double t5160;
  double t5221;
  double t5222;
  double t5226;
  double t5243;
  double t5244;
  double t5248;
  double t5286;
  double t5287;
  double t5292;
  double t5298;
  double t5299;
  double t5307;
  double t5308;
  double t5311;
  double t5316;
  double t5318;
  double t5345;
  double t5348;
  double t5354;
  double t5280;
  double t5282;
  double t5283;
  double t5285;
  double t5300;
  double t5303;
  double t5304;
  double t5309;
  double t5355;
  double t5357;
  double t5358;
  double t5359;
  double t5360;
  double t5361;
  double t5363;
  double t5364;
  double t5368;
  double t5372;
  double t5250;
  double t5256;
  double t5268;
  double t5378;
  double t5379;
  double t5380;
  double t5388;
  double t5389;
  double t5390;
  double t5305;
  double t5375;
  double t5376;
  double t5403;
  double t5404;
  double t5405;
  double t5234;
  double t5273;
  double t5279;
  double t5397;
  double t5398;
  double t5399;
  double t5436;
  double t5437;
  double t5438;
  double t5393;
  double t5394;
  double t5396;
  double t5400;
  double t5422;
  double t5423;
  double t5424;
  double t5455;
  double t5456;
  double t5457;
  double t5425;
  double t5481;
  double t5482;
  double t5483;
  double t5402;
  double t5406;
  double t5407;
  double t5463;
  double t5466;
  double t5468;
  double t5470;
  double t5472;
  double t5477;
  double t5486;
  double t5426;
  double t5428;
  double t5429;
  double t5440;
  double t5441;
  double t5442;
  double t5444;
  double t5445;
  double t5446;
  double t5448;
  double t5449;
  double t5450;
  double t5451;
  double t5452;
  double t5453;
  double t5523;
  double t5524;
  double t5532;
  double t5521;
  double t5473;
  double t5539;
  double t5540;
  double t5541;
  double t5544;
  double t5545;
  double t5547;
  double t5484;
  double t5492;
  double t5493;
  double t5494;
  double t5495;
  double t5498;
  double t5500;
  double t5502;
  double t5548;
  double t5504;
  double t5505;
  double t5552;
  double t5512;
  double t5513;
  double t5516;
  double t5577;
  double t5578;
  double t5579;
  double t5582;
  double t5583;
  double t5584;
  double t5588;
  double t5590;
  double t5591;
  double t5593;
  double t5594;
  double t5595;
  double t5604;
  double t5605;
  double t5606;
  double t5608;
  double t5609;
  double t5610;
  double t5607;
  double t5616;
  double t5617;
  double t5618;
  double t5619;
  double t5621;
  double t5624;
  double t5630;
  double t5631;
  double t5632;
  double t5634;
  double t5635;
  double t5636;
  double t5641;
  double t5642;
  double t5643;
  double t5571;
  double t5574;
  double t5575;
  double t5672;
  double t5673;
  double t5674;
  double t5675;
  double t5676;
  double t5678;
  double t5680;
  double t5681;
  double t5682;
  double t5686;
  double t5687;
  double t5688;
  double t5679;
  double t5691;
  double t5692;
  double t5698;
  double t5699;
  double t5700;
  double t5695;
  double t5697;
  double t5706;
  double t5707;
  double t5708;
  double t5710;
  double t5711;
  double t5712;
  double t5717;
  double t5718;
  double t5719;
  double t5200;
  double t5204;
  double t5208;
  double t5411;
  double t5413;
  double t5414;
  double t5647;
  double t5648;
  double t5769;
  double t5615;
  double t5625;
  double t5797;
  double t5799;
  double t5808;
  double t5810;
  double t5770;
  double t5771;
  double t5772;
  double t5780;
  double t5787;
  double t5788;
  double t5789;
  double t5790;
  double t5791;
  double t5792;
  double t5793;
  double t5794;
  double t5795;
  double t5798;
  double t5802;
  double t5804;
  double t5805;
  double t5806;
  double t5809;
  double t5813;
  double t5814;
  double t5852;
  double t5820;
  double t5821;
  double t5858;
  double t5827;
  double t5828;
  double t5831;
  double t5832;
  double t5879;
  double t5881;
  double t5900;
  double t5902;
  double t5888;
  double t5890;
  double t5580;
  double t5585;
  double t5586;
  double t5923;
  double t5925;
  double t5930;
  double t5932;
  double t5876;
  double t5877;
  double t5884;
  double t5885;
  double t5887;
  double t5896;
  double t5897;
  double t5898;
  double t5959;
  double t5967;
  double t5916;
  double t5917;
  double t5918;
  double t5990;
  double t5994;
  double t5996;
  double t5724;
  double t5725;
  double t5726;
  double t5750;
  double t5751;
  double t5752;
  double t5667;
  double t5668;
  double t5669;
  double t5949;
  double t5950;
  double t6052;
  double t5933;
  double t6054;
  double t6055;
  double t6056;
  double t6084;
  double t6085;
  double t6092;
  double t6094;
  double t6064;
  double t6070;
  double t6071;
  double t6072;
  double t6073;
  double t6075;
  double t6076;
  double t6077;
  double t6078;
  double t6079;
  double t6080;
  double t6081;
  double t6082;
  double t6086;
  double t6093;
  double t6097;
  double t6098;
  double t6101;
  double t6128;
  double t6104;
  double t6105;
  double t6133;
  double t6111;
  double t6112;
  double t6115;
  double t5734;
  double t5735;
  double t5736;
  double t6166;
  double t6174;
  double t6176;
  double t6151;
  double t6152;
  double t6153;
  double t6156;
  double t6157;
  double t6158;
  double t6159;
  double t6214;
  double t6220;
  double t5663;
  double t5664;
  double t5665;
  double t5654;
  double t5655;
  t3806 = Cos(var1[13]);
  t4108 = Cos(var1[14]);
  t4112 = t3806*t4108;
  t4174 = Sin(var1[13]);
  t4184 = Sin(var1[14]);
  t4759 = t4174*t4184;
  t4784 = t4112 + t4759;
  t4806 = Cos(var1[12]);
  t3614 = Cos(var1[5]);
  t3767 = Sin(var1[12]);
  t4886 = Sin(var1[5]);
  t4968 = Cos(var1[3]);
  t4802 = t3614*t3767*t4784;
  t4909 = t4806*t4784*t4886;
  t4951 = t4802 + t4909;
  t3328 = Sin(var1[3]);
  t4983 = Cos(var1[4]);
  t4984 = -1.*t4108*t4174;
  t4986 = t3806*t4184;
  t4992 = t4984 + t4986;
  t4998 = t4983*t4992;
  t5121 = Sin(var1[4]);
  t5122 = t4806*t3614*t4784;
  t5126 = -1.*t3767*t4784*t4886;
  t5142 = t5122 + t5126;
  t5155 = -1.*t5121*t5142;
  t5160 = t4998 + t5155;
  t5221 = -1.*t4992*t5121;
  t5222 = -1.*t4983*t5142;
  t5226 = t5221 + t5222;
  t5243 = t4108*t4174;
  t5244 = -1.*t3806*t4184;
  t5248 = t5243 + t5244;
  t5286 = -1.*t4108;
  t5287 = 1. + t5286;
  t5292 = 0.50321*t5287;
  t5298 = 0.19821*t4108;
  t5299 = t5292 + t5298;
  t5307 = -1.*t4806;
  t5308 = 1. + t5307;
  t5311 = -1.*t3806;
  t5316 = 1. + t5311;
  t5318 = 0.28121*t5316;
  t5345 = t3806*t5299;
  t5348 = -0.305*t4174*t4184;
  t5354 = t5318 + t5345 + t5348;
  t5280 = -1.*t3614*t3767;
  t5282 = -1.*t4806*t4886;
  t5283 = t5280 + t5282;
  t5285 = 0.28121*t4174;
  t5300 = -1.*t5299*t4174;
  t5303 = -0.305*t3806*t4184;
  t5304 = t5285 + t5300 + t5303;
  t5309 = 0.15121*t5308;
  t5355 = t4806*t5354;
  t5357 = t5309 + t5355;
  t5358 = t3614*t5357;
  t5359 = -0.15121*t5308;
  t5360 = -0.15121*t4806;
  t5361 = -0.15121*t3767;
  t5363 = t3767*t5354;
  t5364 = t5359 + t5360 + t5361 + t5363;
  t5368 = -1.*t5364*t4886;
  t5372 = t5358 + t5368;
  t5250 = t4806*t3614*t5248;
  t5256 = -1.*t3767*t5248*t4886;
  t5268 = t5250 + t5256;
  t5378 = t5304*t5121;
  t5379 = t4983*t5372;
  t5380 = t5378 + t5379;
  t5388 = t4983*t4784;
  t5389 = -1.*t5121*t5268;
  t5390 = t5388 + t5389;
  t5305 = -1.*t5304*t5121;
  t5375 = -1.*t4983*t5372;
  t5376 = t5305 + t5375;
  t5403 = t4983*t5304;
  t5404 = -1.*t5121*t5372;
  t5405 = t5403 + t5404;
  t5234 = t4784*t5121;
  t5273 = t4983*t5268;
  t5279 = t5234 + t5273;
  t5397 = t3614*t5364;
  t5398 = t5357*t4886;
  t5399 = t5397 + t5398;
  t5436 = -1.*t3614*t3767*t4784;
  t5437 = -1.*t4806*t4784*t4886;
  t5438 = t5436 + t5437;
  t5393 = t4806*t3614;
  t5394 = -1.*t3767*t4886;
  t5396 = t5393 + t5394;
  t5400 = -1.*t5396*t5399;
  t5422 = t3614*t3767*t5248;
  t5423 = t4806*t5248*t4886;
  t5424 = t5422 + t5423;
  t5455 = -1.*t3614*t5364;
  t5456 = -1.*t5357*t4886;
  t5457 = t5455 + t5456;
  t5425 = t5424*t5399;
  t5481 = -1.*t3614*t3767*t5248;
  t5482 = -1.*t4806*t5248*t4886;
  t5483 = t5481 + t5482;
  t5402 = -1.*t4983*t5283*t5380;
  t5406 = t5121*t5283*t5405;
  t5407 = t5400 + t5402 + t5406;
  t5463 = -1.*t5283*t5399;
  t5466 = -1.*t5396*t5372;
  t5468 = -1.*t4806*t3614;
  t5470 = t3767*t4886;
  t5472 = t5468 + t5470;
  t5477 = t5268*t5399;
  t5486 = t5424*t5372;
  t5426 = t5279*t5380;
  t5428 = t5390*t5405;
  t5429 = t5425 + t5426 + t5428;
  t5440 = var2[0]*t4983*t5438;
  t5441 = t3328*t5121*t5438;
  t5442 = t4968*t5142;
  t5444 = t5441 + t5442;
  t5445 = var2[1]*t5444;
  t5446 = -1.*t4968*t5121*t5438;
  t5448 = t3328*t5142;
  t5449 = t5446 + t5448;
  t5450 = var2[2]*t5449;
  t5451 = -1.*t5283*t5372;
  t5452 = t5400 + t5451;
  t5453 = t5268*t5452;
  t5523 = 0.15121*t3767;
  t5524 = -1.*t3767*t5354;
  t5532 = t5523 + t5524;
  t5521 = t5360 + t5355;
  t5473 = -1.*t5472*t5372;
  t5539 = t3614*t5532;
  t5540 = -1.*t5521*t4886;
  t5541 = t5539 + t5540;
  t5544 = t3614*t5521;
  t5545 = t5532*t4886;
  t5547 = t5544 + t5545;
  t5484 = t5483*t5372;
  t5492 = t5304*t4784;
  t5493 = t5268*t5372;
  t5494 = t5492 + t5425 + t5493;
  t5495 = t5283*t5494;
  t5498 = t4983*t5483*t5407;
  t5500 = Power(t4983,2);
  t5502 = Power(t5121,2);
  t5548 = -1.*t5396*t5547;
  t5504 = -1.*t4983*t5472*t5380;
  t5505 = t5121*t5472*t5405;
  t5552 = t5424*t5547;
  t5512 = t4983*t5483*t5380;
  t5513 = -1.*t5121*t5483*t5405;
  t5516 = t4983*t5472*t5429;
  t5577 = -1.*t3806*t4108;
  t5578 = -1.*t4174*t4184;
  t5579 = t5577 + t5578;
  t5582 = t4806*t3614*t4992;
  t5583 = -1.*t3767*t4992*t4886;
  t5584 = t5582 + t5583;
  t5588 = t3614*t3767*t4992;
  t5590 = t4806*t4992*t4886;
  t5591 = t5588 + t5590;
  t5593 = t4983*t5579;
  t5594 = -1.*t5121*t5584;
  t5595 = t5593 + t5594;
  t5604 = t3614*t3767*t5304;
  t5605 = t4806*t5304*t4886;
  t5606 = t5604 + t5605;
  t5608 = t4806*t3614*t5304;
  t5609 = -1.*t3767*t5304*t4886;
  t5610 = t5608 + t5609;
  t5607 = -1.*t5396*t5606;
  t5616 = 0.28121*t3806;
  t5617 = -1.*t3806*t5299;
  t5618 = 0.305*t4174*t4184;
  t5619 = t5616 + t5617 + t5618;
  t5621 = t5424*t5606;
  t5624 = t4951*t5399;
  t5630 = t5619*t5121;
  t5631 = t4983*t5610;
  t5632 = t5630 + t5631;
  t5634 = t4983*t5619;
  t5635 = -1.*t5121*t5610;
  t5636 = t5634 + t5635;
  t5641 = t4992*t5121;
  t5642 = t4983*t5142;
  t5643 = t5641 + t5642;
  t5571 = t3767*t5357;
  t5574 = -1.*t4806*t5364;
  t5575 = t5571 + t5574;
  t5672 = -0.305*t4108*t4174;
  t5673 = 0.305*t3806*t4184;
  t5674 = t5672 + t5673;
  t5675 = t3614*t3767*t5674;
  t5676 = t4806*t5674*t4886;
  t5678 = t5675 + t5676;
  t5680 = t4806*t3614*t5674;
  t5681 = -1.*t3767*t5674*t4886;
  t5682 = t5680 + t5681;
  t5686 = t3614*t3767*t5579;
  t5687 = t4806*t5579*t4886;
  t5688 = t5686 + t5687;
  t5679 = -1.*t5396*t5678;
  t5691 = -0.305*t3806*t4108;
  t5692 = t5691 + t5348;
  t5698 = t4806*t3614*t5579;
  t5699 = -1.*t3767*t5579*t4886;
  t5700 = t5698 + t5699;
  t5695 = t5424*t5678;
  t5697 = t5688*t5399;
  t5706 = t5692*t5121;
  t5707 = t4983*t5682;
  t5708 = t5706 + t5707;
  t5710 = t4983*t5692;
  t5711 = -1.*t5121*t5682;
  t5712 = t5710 + t5711;
  t5717 = t5248*t5121;
  t5718 = t4983*t5700;
  t5719 = t5717 + t5718;
  t5200 = t4968*t4951;
  t5204 = -1.*t3328*t5160;
  t5208 = t5200 + t5204;
  t5411 = -1.*t4784*t5121;
  t5413 = -1.*t4983*t5268;
  t5414 = t5411 + t5413;
  t5647 = t5643*t5380;
  t5648 = t5160*t5405;
  t5769 = -1.*t5424*t5399;
  t5615 = t5304*t4992;
  t5625 = t5142*t5372;
  t5797 = -1.*t5268*t5399;
  t5799 = -1.*t5424*t5372;
  t5808 = t5142*t5399;
  t5810 = t4951*t5372;
  t5770 = -1.*t5279*t5380;
  t5771 = -1.*t5390*t5405;
  t5772 = t5769 + t5770 + t5771;
  t5780 = t5624 + t5647 + t5648;
  t5787 = var2[0]*t4983*t5472;
  t5788 = t3328*t5283;
  t5789 = -1.*t4968*t5121*t5472;
  t5790 = t5788 + t5789;
  t5791 = var2[2]*t5790;
  t5792 = t4968*t5283;
  t5793 = t3328*t5121*t5472;
  t5794 = t5792 + t5793;
  t5795 = var2[1]*t5794;
  t5798 = -1.*t5483*t5372;
  t5802 = -1.*t5304*t4784;
  t5804 = -1.*t5268*t5372;
  t5805 = t5802 + t5769 + t5804;
  t5806 = t5142*t5805;
  t5809 = t5438*t5372;
  t5813 = t5615 + t5624 + t5625;
  t5814 = t5268*t5813;
  t5852 = -1.*t5424*t5547;
  t5820 = -1.*t4983*t5483*t5380;
  t5821 = t5121*t5483*t5405;
  t5858 = t4951*t5547;
  t5827 = t4983*t5438*t5380;
  t5828 = -1.*t5121*t5438*t5405;
  t5831 = t4983*t5438*t5772;
  t5832 = t4983*t5483*t5780;
  t5879 = t5304*t5579;
  t5881 = t4992*t5619;
  t5900 = Power(t4806,2);
  t5902 = Power(t3767,2);
  t5888 = -1.*t5304*t4992;
  t5890 = -1.*t5619*t4784;
  t5580 = t5579*t5121;
  t5585 = t4983*t5584;
  t5586 = t5580 + t5585;
  t5923 = t5606*t4951;
  t5925 = t5591*t5399;
  t5930 = -1.*t5424*t5606;
  t5932 = -1.*t4951*t5399;
  t5876 = -1.*t5248*t5354;
  t5877 = t5876 + t5802;
  t5884 = t5354*t4784;
  t5885 = t5615 + t5884;
  t5887 = -1.*t5248*t5304;
  t5896 = -1.*t4806*t5248*t5357;
  t5897 = -1.*t3767*t5248*t5364;
  t5898 = t5802 + t5896 + t5897;
  t5959 = t4992*t5692;
  t5967 = -1.*t5692*t4784;
  t5916 = t4806*t4784*t5357;
  t5917 = t3767*t4784*t5364;
  t5918 = t5615 + t5916 + t5917;
  t5990 = t5678*t4951;
  t5994 = -1.*t5424*t5678;
  t5996 = -1.*t5688*t5399;
  t5724 = t4983*t5248;
  t5725 = -1.*t5121*t5700;
  t5726 = t5724 + t5725;
  t5750 = t3328*t5121*t5283;
  t5751 = t4968*t5396;
  t5752 = t5750 + t5751;
  t5667 = t4968*t5424;
  t5668 = -1.*t3328*t5390;
  t5669 = t5667 + t5668;
  t5949 = -1.*t5643*t5380;
  t5950 = -1.*t5160*t5405;
  t6052 = t5396*t5399;
  t5933 = -1.*t5142*t5372;
  t6054 = t4983*t5283*t5380;
  t6055 = -1.*t5121*t5283*t5405;
  t6056 = t6052 + t6054 + t6055;
  t6084 = t5283*t5399;
  t6085 = t5396*t5372;
  t6092 = -1.*t5142*t5399;
  t6094 = -1.*t4951*t5372;
  t6064 = t5932 + t5949 + t5950;
  t6070 = var2[0]*t4983*t5483;
  t6071 = t3328*t5121*t5483;
  t6072 = t4968*t5268;
  t6073 = t6071 + t6072;
  t6075 = var2[1]*t6073;
  t6076 = -1.*t4968*t5121*t5483;
  t6077 = t3328*t5268;
  t6078 = t6076 + t6077;
  t6079 = var2[2]*t6078;
  t6080 = t5283*t5372;
  t6081 = t6052 + t6080;
  t6082 = t5142*t6081;
  t6086 = t5472*t5372;
  t6093 = -1.*t5438*t5372;
  t6097 = t5888 + t5932 + t5933;
  t6098 = t5283*t6097;
  t6101 = t4983*t5438*t6056;
  t6128 = t5396*t5547;
  t6104 = t4983*t5472*t5380;
  t6105 = -1.*t5121*t5472*t5405;
  t6133 = -1.*t4951*t5547;
  t6111 = -1.*t4983*t5438*t5380;
  t6112 = t5121*t5438*t5405;
  t6115 = t4983*t5472*t6064;
  t5734 = t3328*t4951;
  t5735 = t4968*t5160;
  t5736 = t5734 + t5735;
  t6166 = t5396*t5606;
  t6174 = -1.*t5606*t4951;
  t6176 = -1.*t5591*t5399;
  t6151 = -0.15121*t5579;
  t6152 = -0.15121*t4784;
  t6153 = t6151 + t6152;
  t6156 = var2[12]*t6153;
  t6157 = -1.*t3767*t5357;
  t6158 = t4806*t5364;
  t6159 = t6157 + t6158;
  t6214 = t5396*t5678;
  t6220 = -1.*t5678*t4951;
  t5663 = t3328*t5424;
  t5664 = t4968*t5390;
  t5665 = t5663 + t5664;
  t5654 = 0.28121*t4108;
  t5655 = -1.*t5299*t4108;
  p_output1[0]=(-1.*t3328*t4951 - 1.*t4968*t5160)*var2[1] + t5208*var2[2];
  p_output1[1]=t5160*var2[0] - 1.*t3328*t5226*var2[1] + t4968*t5226*var2[2] + (t5279*(t5121*t5283*t5376 + t5121*t5283*t5380) + t5390*t5407 + t4983*t5283*(t5376*t5390 + t5380*t5390 + t5279*t5405 + t5405*t5414) - 1.*t5121*t5283*t5429)*var2[3];
  p_output1[2]=t5440 + t5445 + t5450 + (t5498 + t5279*(t5463 + t5466 - 1.*t5283*t5457*t5500 - 1.*t5283*t5457*t5502 + t5504 + t5505) + t4983*t5283*(t4983*t5279*t5457 - 1.*t5121*t5390*t5457 + t5477 + t5486 + t5512 + t5513) + t5516)*var2[3] + (t5453 + t5424*(-1.*t5283*t5457 + t5463 + t5466 + t5473) + t5396*(t5268*t5457 + t5477 + t5484 + t5486) + t5495)*var2[4];
  p_output1[3]=t5440 + t5445 + t5450 + (t5498 + t5516 + t5279*(t5463 + t5504 + t5505 - 1.*t5283*t5500*t5541 - 1.*t5283*t5502*t5541 + t5548) + t4983*t5283*(t5477 + t5512 + t5513 + t4983*t5279*t5541 - 1.*t5121*t5390*t5541 + t5552))*var2[3] + (t5453 + t5495 + t5424*(t5463 + t5473 - 1.*t5283*t5541 + t5548) + t5396*(t5477 + t5484 + t5268*t5541 + t5552))*var2[4] + t4784*(t4806*t5357 + t3767*t5364 - 1.*t4806*t5521 + t3767*t5532)*var2[5];
  p_output1[4]=t5586*var2[0] + (t4968*t5591 - 1.*t3328*t5595)*var2[1] + (t3328*t5591 + t4968*t5595)*var2[2] + (t5279*(t5607 - 1.*t4983*t5283*t5632 + t5121*t5283*t5636) + t5407*t5643 + t4983*t5283*(t5621 + t5624 + t5279*t5632 + t5390*t5636 + t5647 + t5648))*var2[3] + (t4951*t5452 + t5424*(t5607 - 1.*t5283*t5610) + t5396*(t5268*t5610 + t5615 + t4784*t5619 + t5621 + t5624 + t5625))*var2[4] + t4992*t5575*var2[5];
  p_output1[5]=t5279*var2[0] + t5669*var2[1] + t5665*var2[2] + (t5279*(t5679 - 1.*t4983*t5283*t5708 + t5121*t5283*t5712) + t5407*t5719 + t4983*t5283*(t5695 + t5697 + t5279*t5708 + t5390*t5712 + t5380*t5719 + t5405*t5726))*var2[3] + (t5424*(t5679 - 1.*t5283*t5682) + t5452*t5688 + t5396*(t5248*t5304 + t5268*t5682 + t4784*t5692 + t5695 + t5697 + t5372*t5700))*var2[4] + t5248*t5575*var2[5] + (-0.305*Power(t4108,2) + t5654 + t5655)*var2[13];
  p_output1[6]=t5643;
  p_output1[7]=t5208;
  p_output1[8]=t5736;
  p_output1[9]=t5279*t5407 + t4983*t5283*t5429;
  p_output1[10]=t5424*t5452 + t5396*t5494;
  p_output1[11]=t4784*t5575;
  p_output1[12]=0.28121*t4184 - 0.305*t4108*t4184 - 1.*t4184*t5299;
  p_output1[13]=(t4968*t5121*t5283 - 1.*t3328*t5396)*var2[1] + t5752*var2[2];
  p_output1[14]=-1.*t5121*t5283*var2[0] + t3328*t4983*t5283*var2[1] - 1.*t4968*t4983*t5283*var2[2] + ((-1.*t5376*t5390 - 1.*t5380*t5390 - 1.*t5279*t5405 - 1.*t5405*t5414)*t5643 + t5279*(t5160*t5376 + t5160*t5380 + t5226*t5405 + t5405*t5643) + t5160*t5772 + t5390*t5780)*var2[3];
  p_output1[15]=t5787 + t5791 + t5795 + (t5643*(-1.*t4983*t5279*t5457 + t5121*t5390*t5457 + t5797 + t5799 + t5820 + t5821) + t5279*(-1.*t5121*t5160*t5457 + t4983*t5457*t5643 + t5808 + t5810 + t5827 + t5828) + t5831 + t5832)*var2[3] + (t4951*(-1.*t5268*t5457 + t5797 + t5798 + t5799) + t5806 + t5424*(t5142*t5457 + t5808 + t5809 + t5810) + t5814)*var2[4];
  p_output1[16]=t5787 + t5791 + t5795 + (t5831 + t5832 + t5643*(-1.*t4983*t5279*t5541 + t5121*t5390*t5541 + t5797 + t5820 + t5821 + t5852) + t5279*(-1.*t5121*t5160*t5541 + t4983*t5541*t5643 + t5808 + t5827 + t5828 + t5858))*var2[3] + (t5806 + t5814 + t4951*(-1.*t5268*t5541 + t5797 + t5798 + t5852) + t5424*(t5142*t5541 + t5808 + t5809 + t5858))*var2[4] + (t4784*(-1.*t3767*t4784*t5357 + t4784*t4806*t5364 + t3767*t4784*t5521 + t4784*t4806*t5532) + t4992*(t3767*t5248*t5357 - 1.*t4806*t5248*t5364 - 1.*t3767*t5248*t5521 - 1.*t4806*t5248*t5532))*var2[5];
  p_output1[17]=(t5586*t5772 + t5643*t5780 + t5279*(t5380*t5586 + t5405*t5595 + t5160*t5636 + t5632*t5643 + t5923 + t5925) + t5643*(-1.*t5279*t5632 - 1.*t5390*t5636 + t5930 + t5932 + t5949 + t5950))*var2[3] + (t5591*t5805 + t4951*t5813 + t5424*(t5372*t5584 + t5142*t5610 + t5879 + t5881 + t5923 + t5925) + t4951*(-1.*t5268*t5610 + t5888 + t5890 + t5930 + t5932 + t5933))*var2[4] + (t5579*t5898 + t4784*(t4806*t4992*t5357 + t3767*t4992*t5364 + t5879 + t5881 + t4784*t5304*t5900 + t4784*t5304*t5902) + t4992*(-1.*t4784*t4806*t5357 - 1.*t3767*t4784*t5364 + t5888 + t5890 - 1.*t5248*t5304*t5900 - 1.*t5248*t5304*t5902) + t4992*t5918)*var2[5] + (t5579*t5877 + t4784*(t4992*t5354 + t5492 + t5879 + t5881) + t4992*t5885 + t4992*(-1.*t4784*t5354 + t5887 + t5888 + t5890))*var2[12];
  p_output1[18]=(t5279*t5772 + t5719*t5780 + t5279*(t5425 + t5426 + t5428 + t5643*t5708 + t5160*t5712 + t5990) + t5643*(-1.*t5279*t5708 - 1.*t5390*t5712 - 1.*t5380*t5719 - 1.*t5405*t5726 + t5994 + t5996))*var2[3] + (t5424*t5805 + t5688*t5813 + t5424*(t5425 + t5492 + t5493 + t5142*t5682 + t5959 + t5990) + t4951*(-1.*t5268*t5682 - 1.*t5372*t5700 + t5887 + t5967 + t5994 + t5996))*var2[4] + (t4784*t5898 + t5248*t5918 + t4784*(t4806*t5248*t5357 + t3767*t5248*t5364 + t5492 + t4784*t5674*t5900 + t4784*t5674*t5902 + t5959) + t4992*(-1.*t4806*t5357*t5579 - 1.*t3767*t5364*t5579 + t5887 - 1.*t5248*t5674*t5900 - 1.*t5248*t5674*t5902 + t5967))*var2[5] + (t4784*t5877 + t5248*t5885 + t4784*(t5248*t5354 + t5492 + t4784*t5674 + t5959) + t4992*(-1.*t5354*t5579 - 1.*t5248*t5674 + t5887 + t5967))*var2[12];
  p_output1[19]=t4983*t5283;
  p_output1[20]=t5752;
  p_output1[21]=-1.*t4968*t5121*t5283 + t3328*t5396;
  p_output1[22]=t5643*t5772 + t5279*t5780;
  p_output1[23]=t4951*t5805 + t5424*t5813;
  p_output1[24]=t4992*t5898 + t4784*t5918;
  p_output1[25]=-0.15121 + t4992*t5877 + t4784*t5885;
  p_output1[26]=(-1.*t4968*t5390 - 1.*t3328*t5424)*var2[1] + t5669*var2[2];
  p_output1[27]=t5390*var2[0] - 1.*t3328*t5414*var2[1] + t4968*t5414*var2[2] + ((-1.*t5121*t5283*t5376 - 1.*t5121*t5283*t5380)*t5643 + t4983*t5283*(-1.*t5160*t5376 - 1.*t5160*t5380 - 1.*t5226*t5405 - 1.*t5405*t5643) + t5160*t6056 - 1.*t5121*t5283*t6064)*var2[3];
  p_output1[28]=t6070 + t6075 + t6079 + (t6101 + t5643*(t5283*t5457*t5500 + t5283*t5457*t5502 + t6084 + t6085 + t6104 + t6105) + t4983*t5283*(t5121*t5160*t5457 - 1.*t4983*t5457*t5643 + t6092 + t6094 + t6111 + t6112) + t6115)*var2[3] + (t6082 + t4951*(t5283*t5457 + t6084 + t6085 + t6086) + t5396*(-1.*t5142*t5457 + t6092 + t6093 + t6094) + t6098)*var2[4];
  p_output1[29]=t6070 + t6075 + t6079 + (t6101 + t6115 + t5643*(t5283*t5500*t5541 + t5283*t5502*t5541 + t6084 + t6104 + t6105 + t6128) + t4983*t5283*(t5121*t5160*t5541 - 1.*t4983*t5541*t5643 + t6092 + t6111 + t6112 + t6133))*var2[3] + (t6082 + t6098 + t4951*(t5283*t5541 + t6084 + t6086 + t6128) + t5396*(-1.*t5142*t5541 + t6092 + t6093 + t6133))*var2[4] + t4992*(-1.*t4806*t5357 - 1.*t3767*t5364 + t4806*t5521 - 1.*t3767*t5532)*var2[5];
  p_output1[30]=t6156 + t5643*var2[0] + t5208*var2[1] + t5736*var2[2] + (t5586*t6056 + t5643*(t4983*t5283*t5632 - 1.*t5121*t5283*t5636 + t6166) + t4983*t5283*(-1.*t5380*t5586 - 1.*t5405*t5595 - 1.*t5160*t5636 - 1.*t5632*t5643 + t6174 + t6176))*var2[3] + (t5591*t6081 + t4951*(t5283*t5610 + t6166) + t5396*(-1.*t5304*t5579 - 1.*t5372*t5584 - 1.*t5142*t5610 - 1.*t4992*t5619 + t6174 + t6176))*var2[4] + t5579*t6159*var2[5];
  p_output1[31]=t6156 + t5719*var2[0] + (t4968*t5688 - 1.*t3328*t5726)*var2[1] + (t3328*t5688 + t4968*t5726)*var2[2] + (t5279*t6056 + t5643*(t4983*t5283*t5708 - 1.*t5121*t5283*t5712 + t6214) + t4983*t5283*(-1.*t5643*t5708 - 1.*t5160*t5712 + t5769 + t5770 + t5771 + t6220))*var2[3] + (t5424*t6081 + t4951*(t5283*t5682 + t6214) + t5396*(-1.*t5142*t5682 - 1.*t4992*t5692 + t5769 + t5802 + t5804 + t6220))*var2[4] + t4784*t6159*var2[5] + (-0.28121*t4184 + 0.305*t4108*t4184 + t4184*t5299)*var2[13];
  p_output1[32]=t5279;
  p_output1[33]=t5669;
  p_output1[34]=t5665;
  p_output1[35]=t5643*t6056 + t4983*t5283*t6064;
  p_output1[36]=t4951*t6081 + t5396*t6097;
  p_output1[37]=t4992*t6159;
  p_output1[38]=-0.15121*t4992 - 0.15121*t5248;
  p_output1[39]=0.305*Power(t4184,2) + t5654 + t5655;
  p_output1[40]=-0.305;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 41, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_dh_FrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void J_dh_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
