/*
 * Automatically Generated from Mathematica.
 * Thu 28 Apr 2022 15:23:54 GMT+02:00
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
  double t4498;
  double t4475;
  double t4486;
  double t4502;
  double t4493;
  double t4503;
  double t4504;
  double t4473;
  double t4506;
  double t4507;
  double t4508;
  double t4474;
  double t4509;
  double t4551;
  double t4505;
  double t4510;
  double t4511;
  double t4460;
  double t4555;
  double t4556;
  double t4557;
  double t4559;
  double t4560;
  double t4561;
  double t4562;
  double t4563;
  double t4565;
  double t4577;
  double t4578;
  double t4579;
  double t4592;
  double t4593;
  double t4594;
  double t4591;
  double t4596;
  double t4597;
  double t4600;
  double t4601;
  double t4602;
  double t4603;
  double t4605;
  double t4606;
  double t4616;
  double t4617;
  double t4618;
  double t4629;
  double t4630;
  double t4631;
  double t4633;
  double t4634;
  double t4635;
  double t4636;
  double t4637;
  double t4638;
  double t4628;
  double t4632;
  double t4639;
  double t4640;
  double t4627;
  double t4641;
  double t4642;
  double t4644;
  double t4645;
  double t4646;
  double t4647;
  double t4648;
  double t4649;
  double t4650;
  double t4651;
  double t4652;
  double t4653;
  double t4654;
  double t4655;
  double t4656;
  double t4657;
  double t4658;
  double t4669;
  double t4670;
  double t4671;
  double t4666;
  double t4667;
  double t4668;
  double t4662;
  double t4663;
  double t4664;
  double t4623;
  double t4624;
  double t4625;
  double t4643;
  double t4659;
  double t4660;
  double t4679;
  double t4680;
  double t4681;
  double t4673;
  double t4674;
  double t4675;
  double t4708;
  double t4709;
  double t4710;
  double t4687;
  double t4688;
  double t4689;
  double t4763;
  double t4764;
  double t4765;
  double t4682;
  double t4696;
  double t4779;
  double t4780;
  double t4781;
  double t4783;
  double t4790;
  double t4791;
  double t4792;
  double t4683;
  double t4684;
  double t4685;
  double t4794;
  double t4796;
  double t4697;
  double t4698;
  double t4699;
  double t4716;
  double t4727;
  double t4829;
  double t4831;
  double t4717;
  double t4718;
  double t4719;
  double t4843;
  double t4845;
  double t4728;
  double t4729;
  double t4730;
  double t4744;
  double t4755;
  double t4881;
  double t4745;
  double t4746;
  double t4747;
  double t4885;
  double t4887;
  double t4756;
  double t4757;
  double t4758;
  double t4775;
  double t4786;
  double t4917;
  double t4918;
  double t4919;
  double t4923;
  double t4924;
  double t4945;
  double t4946;
  double t4947;
  double t4776;
  double t4777;
  double t4921;
  double t4925;
  double t4933;
  double t4935;
  double t4787;
  double t4788;
  double t4956;
  double t4957;
  double t4961;
  double t4965;
  double t4966;
  double t4973;
  double t4974;
  double t4975;
  double t4977;
  double t4978;
  double t4979;
  double t4981;
  double t4982;
  double t4983;
  double t4985;
  double t4986;
  double t4987;
  double t4838;
  double t4834;
  double t4989;
  double t4990;
  double t4991;
  double t5009;
  double t5011;
  double t4835;
  double t4836;
  double t5019;
  double t5021;
  double t4839;
  double t4840;
  double t5040;
  double t5042;
  double t4940;
  double t4941;
  double t4942;
  double t5047;
  double t5048;
  double t4996;
  double t4997;
  double t4998;
  double t4876;
  double t4890;
  double t4877;
  double t4878;
  double t5076;
  double t5078;
  double t4958;
  double t5082;
  double t5084;
  double t4891;
  double t4892;
  double t5103;
  double t5106;
  double t5110;
  double t5112;
  double t4914;
  double t4915;
  double t5135;
  double t5136;
  double t5137;
  double t5152;
  double t5153;
  double t4611;
  double t4612;
  double t4613;
  double t5145;
  double t5146;
  double t5147;
  double t5148;
  double t5143;
  double t5151;
  double t5154;
  double t5176;
  double t5177;
  double t5178;
  double t5167;
  double t5168;
  double t5169;
  double t5172;
  double t5173;
  double t5174;
  double t5183;
  double t5184;
  double t5185;
  double t5179;
  double t5182;
  double t5187;
  double t5193;
  double t5194;
  double t5195;
  double t5197;
  double t5198;
  double t5199;
  double t5201;
  double t5202;
  double t5203;
  double t5014;
  double t5015;
  double t5016;
  double t5024;
  double t5025;
  double t5026;
  double t5155;
  double t4928;
  double t4929;
  double t5223;
  double t5224;
  double t5231;
  double t5229;
  double t5221;
  double t5225;
  double t5255;
  double t5258;
  double t5260;
  double t5208;
  double t5209;
  double t5210;
  double t5072;
  double t5073;
  double t5283;
  double t5302;
  double t5306;
  double t5325;
  double t5326;
  double t5327;
  double t5339;
  double t5340;
  double t5341;
  double t5349;
  double t5350;
  double t5351;
  double t5355;
  double t5356;
  double t5357;
  double t5359;
  double t5360;
  double t5361;
  double t5336;
  double t5337;
  double t5342;
  double t5375;
  double t5376;
  double t5377;
  double t5371;
  double t5372;
  double t5373;
  double t5378;
  double t5381;
  double t5388;
  double t5389;
  double t5390;
  double t5392;
  double t5393;
  double t5394;
  double t5087;
  double t5088;
  double t5236;
  double t5237;
  double t5243;
  double t5244;
  double t5407;
  double t5412;
  double t5417;
  double t5413;
  double t5415;
  double t5408;
  double t5435;
  double t5438;
  double t5348;
  double t5352;
  double t5353;
  double t5442;
  double t4570;
  double t4571;
  double t4572;
  double t5471;
  double t5473;
  double t5489;
  double t5492;
  double t5495;
  t4498 = Cos(var1[13]);
  t4475 = Cos(var1[14]);
  t4486 = Sin(var1[13]);
  t4502 = Sin(var1[14]);
  t4493 = t4475*t4486;
  t4503 = -1.*t4498*t4502;
  t4504 = t4493 + t4503;
  t4473 = Cos(var1[5]);
  t4506 = t4498*t4475;
  t4507 = t4486*t4502;
  t4508 = t4506 + t4507;
  t4474 = Sin(var1[12]);
  t4509 = Sin(var1[5]);
  t4551 = Cos(var1[3]);
  t4505 = -1.*t4473*t4474*t4504;
  t4510 = t4508*t4509;
  t4511 = t4505 + t4510;
  t4460 = Sin(var1[3]);
  t4555 = Cos(var1[12]);
  t4556 = Cos(var1[4]);
  t4557 = t4555*t4556*t4504;
  t4559 = Sin(var1[4]);
  t4560 = t4473*t4508;
  t4561 = t4474*t4504*t4509;
  t4562 = t4560 + t4561;
  t4563 = -1.*t4559*t4562;
  t4565 = t4557 + t4563;
  t4577 = t4556*t4474;
  t4578 = t4555*t4559*t4509;
  t4579 = t4577 + t4578;
  t4592 = -1.*t4475*t4486;
  t4593 = t4498*t4502;
  t4594 = t4592 + t4593;
  t4591 = -1.*t4473*t4474*t4508;
  t4596 = t4594*t4509;
  t4597 = t4591 + t4596;
  t4600 = t4555*t4556*t4508;
  t4601 = t4473*t4594;
  t4602 = t4474*t4508*t4509;
  t4603 = t4601 + t4602;
  t4605 = -1.*t4559*t4603;
  t4606 = t4600 + t4605;
  t4616 = -1.*t4555*t4504*t4559;
  t4617 = -1.*t4556*t4562;
  t4618 = t4616 + t4617;
  t4629 = -0.0641*t4475;
  t4630 = -0.28*t4502;
  t4631 = t4629 + t4630;
  t4633 = -1.*t4475;
  t4634 = 1. + t4633;
  t4635 = 0.075*t4634;
  t4636 = 0.355*t4475;
  t4637 = -0.0641*t4502;
  t4638 = t4635 + t4636 + t4637;
  t4628 = -0.325*t4486;
  t4632 = t4498*t4631;
  t4639 = t4486*t4638;
  t4640 = t4628 + t4632 + t4639;
  t4627 = -0.068*t4474;
  t4641 = t4555*t4640;
  t4642 = t4627 + t4641;
  t4644 = -1.*t4498;
  t4645 = 1. + t4644;
  t4646 = 0.325*t4645;
  t4647 = -1.*t4486*t4631;
  t4648 = t4498*t4638;
  t4649 = t4646 + t4647 + t4648;
  t4650 = t4473*t4649;
  t4651 = -1.*t4555;
  t4652 = 1. + t4651;
  t4653 = -0.1575*t4652;
  t4654 = -0.2255*t4555;
  t4655 = -1.*t4474*t4640;
  t4656 = t4653 + t4654 + t4655;
  t4657 = -1.*t4656*t4509;
  t4658 = t4650 + t4657;
  t4669 = t4556*t4642;
  t4670 = -1.*t4559*t4658;
  t4671 = t4669 + t4670;
  t4666 = t4474*t4559;
  t4667 = -1.*t4555*t4556*t4509;
  t4668 = t4666 + t4667;
  t4662 = t4642*t4559;
  t4663 = t4556*t4658;
  t4664 = t4662 + t4663;
  t4623 = t4555*t4508*t4559;
  t4624 = t4556*t4603;
  t4625 = t4623 + t4624;
  t4643 = -1.*t4642*t4559;
  t4659 = -1.*t4556*t4658;
  t4660 = t4643 + t4659;
  t4679 = t4473*t4656;
  t4680 = t4649*t4509;
  t4681 = t4679 + t4680;
  t4673 = -1.*t4474*t4559;
  t4674 = t4555*t4556*t4509;
  t4675 = t4673 + t4674;
  t4708 = t4555*t4504*t4559;
  t4709 = t4556*t4562;
  t4710 = t4708 + t4709;
  t4687 = -1.*t4555*t4508*t4559;
  t4688 = -1.*t4556*t4603;
  t4689 = t4687 + t4688;
  t4763 = t4473*t4474*t4504;
  t4764 = -1.*t4508*t4509;
  t4765 = t4763 + t4764;
  t4682 = -1.*t4555*t4473*t4681;
  t4696 = t4681*t4597;
  t4779 = -1.*t4473*t4656;
  t4780 = -1.*t4649*t4509;
  t4781 = t4779 + t4780;
  t4783 = t4555*t4509*t4681;
  t4790 = t4473*t4474*t4508;
  t4791 = -1.*t4594*t4509;
  t4792 = t4790 + t4791;
  t4683 = -1.*t4668*t4664;
  t4684 = -1.*t4579*t4671;
  t4685 = t4682 + t4683 + t4684;
  t4794 = t4658*t4597;
  t4796 = t4681*t4603;
  t4697 = t4664*t4625;
  t4698 = t4671*t4606;
  t4699 = t4696 + t4697 + t4698;
  t4716 = t4681*t4511;
  t4727 = -1.*t4681*t4597;
  t4829 = t4681*t4562;
  t4831 = t4658*t4511;
  t4717 = t4664*t4710;
  t4718 = t4671*t4565;
  t4719 = t4716 + t4717 + t4718;
  t4843 = -1.*t4658*t4597;
  t4845 = -1.*t4681*t4603;
  t4728 = -1.*t4664*t4625;
  t4729 = -1.*t4671*t4606;
  t4730 = t4727 + t4728 + t4729;
  t4744 = t4555*t4473*t4681;
  t4755 = -1.*t4681*t4511;
  t4881 = -1.*t4555*t4509*t4681;
  t4745 = t4668*t4664;
  t4746 = t4579*t4671;
  t4747 = t4744 + t4745 + t4746;
  t4885 = -1.*t4681*t4562;
  t4887 = -1.*t4658*t4511;
  t4756 = -1.*t4664*t4710;
  t4757 = -1.*t4671*t4565;
  t4758 = t4755 + t4756 + t4757;
  t4775 = -1.*t4474*t4642;
  t4786 = t4555*t4642*t4508;
  t4917 = 0.068*t4474;
  t4918 = -1.*t4555*t4640;
  t4919 = t4917 + t4918;
  t4923 = -0.068*t4555;
  t4924 = t4923 + t4655;
  t4945 = -1.*t4556*t4474*t4504;
  t4946 = -1.*t4555*t4504*t4559*t4509;
  t4947 = t4945 + t4946;
  t4776 = t4555*t4509*t4658;
  t4777 = t4775 + t4776 + t4682;
  t4921 = -1.*t4555*t4642;
  t4925 = -1.*t4474*t4924;
  t4933 = -1.*t4474*t4642*t4508;
  t4935 = t4555*t4924*t4508;
  t4787 = t4658*t4603;
  t4788 = t4786 + t4696 + t4787;
  t4956 = Power(t4473,2);
  t4957 = -1.*t4555*t4956*t4919;
  t4961 = t4473*t4474*t4681;
  t4965 = -1.*t4555*t4473*t4508*t4681;
  t4966 = t4473*t4919*t4597;
  t4973 = -1.*t4474*t4508*t4559;
  t4974 = t4555*t4556*t4508*t4509;
  t4975 = t4973 + t4974;
  t4977 = t4924*t4559;
  t4978 = -1.*t4556*t4919*t4509;
  t4979 = t4977 + t4978;
  t4981 = t4556*t4924;
  t4982 = t4919*t4559*t4509;
  t4983 = t4981 + t4982;
  t4985 = t4555*t4559;
  t4986 = t4556*t4474*t4509;
  t4987 = t4985 + t4986;
  t4838 = -1.*t4555*t4642*t4508;
  t4834 = t4555*t4642*t4504;
  t4989 = t4555*t4556;
  t4990 = -1.*t4474*t4559*t4509;
  t4991 = t4989 + t4990;
  t5009 = -1.*t4474*t4642*t4504;
  t5011 = t4555*t4924*t4504;
  t4835 = t4658*t4562;
  t4836 = t4834 + t4835 + t4716;
  t5019 = t4474*t4642*t4508;
  t5021 = -1.*t4555*t4924*t4508;
  t4839 = -1.*t4658*t4603;
  t4840 = t4838 + t4727 + t4839;
  t5040 = -1.*t4555*t4473*t4504*t4681;
  t5042 = t4473*t4919*t4511;
  t4940 = -1.*t4474*t4504*t4559;
  t4941 = t4555*t4556*t4504*t4509;
  t4942 = t4940 + t4941;
  t5047 = t4555*t4473*t4508*t4681;
  t5048 = -1.*t4473*t4919*t4597;
  t4996 = -1.*t4556*t4474*t4508;
  t4997 = -1.*t4555*t4508*t4559*t4509;
  t4998 = t4996 + t4997;
  t4876 = t4474*t4642;
  t4890 = -1.*t4555*t4642*t4504;
  t4877 = -1.*t4555*t4509*t4658;
  t4878 = t4876 + t4877 + t4744;
  t5076 = t4555*t4642;
  t5078 = t4474*t4924;
  t4958 = Power(t4509,2);
  t5082 = t4474*t4642*t4504;
  t5084 = -1.*t4555*t4924*t4504;
  t4891 = -1.*t4658*t4562;
  t4892 = t4890 + t4891 + t4755;
  t5103 = t4555*t4956*t4919;
  t5106 = -1.*t4473*t4474*t4681;
  t5110 = t4555*t4473*t4504*t4681;
  t5112 = -1.*t4473*t4919*t4511;
  t4914 = -1.*t4555*t4656;
  t4915 = t4775 + t4914;
  t5135 = -1.*t4498*t4475;
  t5136 = -1.*t4486*t4502;
  t5137 = t5135 + t5136;
  t5152 = -0.325*t4498;
  t5153 = t5152 + t4647 + t4648;
  t4611 = t4551*t4597;
  t4612 = -1.*t4460*t4606;
  t4613 = t4611 + t4612;
  t5145 = 0.325*t4486;
  t5146 = -1.*t4498*t4631;
  t5147 = -1.*t4486*t4638;
  t5148 = t5145 + t5146 + t5147;
  t5143 = t4555*t4642*t4594;
  t5151 = Power(t4555,2);
  t5154 = t5151*t5153*t4508;
  t5176 = -1.*t4473*t4474*t5153;
  t5177 = t5148*t4509;
  t5178 = t5176 + t5177;
  t5167 = -1.*t4473*t4474*t4594;
  t5168 = t5137*t4509;
  t5169 = t5167 + t5168;
  t5172 = t4473*t5148;
  t5173 = t4474*t5153*t4509;
  t5174 = t5172 + t5173;
  t5183 = t4473*t5137;
  t5184 = t4474*t4594*t4509;
  t5185 = t5183 + t5184;
  t5179 = -1.*t4555*t4473*t5178;
  t5182 = t5178*t4597;
  t5187 = t4681*t5169;
  t5193 = t4555*t4594*t4559;
  t5194 = t4556*t5185;
  t5195 = t5193 + t5194;
  t5197 = t4555*t5153*t4559;
  t5198 = t4556*t5174;
  t5199 = t5197 + t5198;
  t5201 = t4555*t4556*t5153;
  t5202 = -1.*t4559*t5174;
  t5203 = t5201 + t5202;
  t5014 = -1.*t4649*t4594;
  t5015 = t4474*t4656*t4508;
  t5016 = t5014 + t4838 + t5015;
  t5024 = -1.*t4474*t4656*t4504;
  t5025 = t4649*t4508;
  t5026 = t4834 + t5024 + t5025;
  t5155 = Power(t4474,2);
  t4928 = t4649*t4594;
  t4929 = -1.*t4474*t4656*t4508;
  t5223 = -1.*t5148*t4594;
  t5224 = -1.*t4649*t5137;
  t5231 = t5148*t4508;
  t5229 = t5151*t5153*t4504;
  t5221 = -1.*t4555*t4642*t4594;
  t5225 = -1.*t5151*t5153*t4508;
  t5255 = t5178*t4511;
  t5258 = -1.*t5178*t4597;
  t5260 = -1.*t4681*t5169;
  t5208 = t4555*t4556*t4594;
  t5209 = -1.*t4559*t5185;
  t5210 = t5208 + t5209;
  t5072 = t4555*t4656;
  t5073 = t4876 + t5072;
  t5283 = -1.*t5151*t5153*t4504;
  t5302 = t4555*t4473*t5178;
  t5306 = -1.*t5178*t4511;
  t5325 = -0.28*t4475;
  t5326 = 0.0641*t4502;
  t5327 = t5325 + t5326;
  t5339 = t4486*t4631;
  t5340 = t4498*t5327;
  t5341 = t5339 + t5340;
  t5349 = t4473*t4504;
  t5350 = t4474*t5137*t4509;
  t5351 = t5349 + t5350;
  t5355 = -1.*t4473*t4474*t5137;
  t5356 = t4504*t4509;
  t5357 = t5355 + t5356;
  t5359 = t4555*t4556*t5137;
  t5360 = -1.*t4559*t5351;
  t5361 = t5359 + t5360;
  t5336 = -1.*t4486*t5327;
  t5337 = t4632 + t5336;
  t5342 = t5151*t5341*t4508;
  t5375 = -1.*t4473*t4474*t5341;
  t5376 = t5337*t4509;
  t5377 = t5375 + t5376;
  t5371 = t4473*t5337;
  t5372 = t4474*t5341*t4509;
  t5373 = t5371 + t5372;
  t5378 = -1.*t4555*t4473*t5377;
  t5381 = t5377*t4597;
  t5388 = t4555*t5341*t4559;
  t5389 = t4556*t5373;
  t5390 = t5388 + t5389;
  t5392 = t4555*t4556*t5341;
  t5393 = -1.*t4559*t5373;
  t5394 = t5392 + t5393;
  t5087 = t4474*t4656*t4504;
  t5088 = -1.*t4649*t4508;
  t5236 = t4640*t4504;
  t5237 = t5236 + t5025;
  t5243 = -1.*t4640*t4508;
  t5244 = t5014 + t5243;
  t5407 = -1.*t5337*t4594;
  t5412 = t4649*t4504;
  t5417 = t5337*t4508;
  t5413 = t5151*t5341*t4504;
  t5415 = t4555*t4642*t5137;
  t5408 = -1.*t5151*t5341*t4508;
  t5435 = t4681*t5357;
  t5438 = t5377*t4511;
  t5348 = t4555*t5137*t4559;
  t5352 = t4556*t5351;
  t5353 = t5348 + t5352;
  t5442 = -1.*t5377*t4597;
  t4570 = t4551*t4511;
  t4571 = -1.*t4460*t4565;
  t4572 = t4570 + t4571;
  t5471 = -1.*t5151*t5341*t4504;
  t5473 = -1.*t4555*t4642*t5137;
  t5489 = t4555*t4473*t5377;
  t5492 = -1.*t4681*t5357;
  t5495 = -1.*t5377*t4511;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t4460*t4511 - 1.*t4551*t4565)*var2[1] + t4572*var2[2];
  p_output1[10]=(-1.*t4460*t4473*t4555 - 1.*t4551*t4579)*var2[1] + (t4473*t4551*t4555 - 1.*t4460*t4579)*var2[2];
  p_output1[11]=(-1.*t4460*t4597 - 1.*t4551*t4606)*var2[1] + t4613*var2[2];
  p_output1[12]=t4565*var2[0] - 1.*t4460*t4618*var2[1] + t4551*t4618*var2[2] + (t4625*(-1.*t4579*t4660 - 1.*t4579*t4664 - 1.*t4668*t4671 - 1.*t4671*t4675) + t4606*t4685 + t4668*(t4606*t4660 + t4606*t4664 + t4625*t4671 + t4671*t4689) + t4579*t4699)*var2[3];
  p_output1[13]=t4579*var2[0] - 1.*t4460*t4675*var2[1] + t4551*t4675*var2[2] + ((-1.*t4606*t4660 - 1.*t4606*t4664 - 1.*t4625*t4671 - 1.*t4671*t4689)*t4710 + t4625*(t4565*t4660 + t4565*t4664 + t4618*t4671 + t4671*t4710) + t4606*t4719 + t4565*t4730)*var2[3];
  p_output1[14]=t4606*var2[0] - 1.*t4460*t4689*var2[1] + t4551*t4689*var2[2] + ((t4579*t4660 + t4579*t4664 + t4668*t4671 + t4671*t4675)*t4710 + t4668*(-1.*t4565*t4660 - 1.*t4565*t4664 - 1.*t4618*t4671 - 1.*t4671*t4710) + t4565*t4747 + t4579*t4758)*var2[3];
  p_output1[15]=t4556*t4765*var2[0] + (t4551*t4562 + t4460*t4559*t4765)*var2[1] + (t4460*t4562 - 1.*t4551*t4559*t4765)*var2[2] + (-1.*t4473*t4555*t4556*t4699 + t4625*(-1.*t4473*t4555*t4658 + t4473*t4555*t4556*t4664 - 1.*t4473*t4555*t4559*t4671 + t4559*t4579*t4781 - 1.*t4556*t4668*t4781 + t4783) + t4556*t4685*t4792 + t4668*(-1.*t4559*t4606*t4781 + t4556*t4625*t4781 + t4556*t4664*t4792 - 1.*t4559*t4671*t4792 + t4794 + t4796))*var2[3] + (t4603*t4777 + t4597*(t4509*t4555*t4781 + t4783) - 1.*t4509*t4555*t4788 + t4473*t4555*(t4603*t4781 + t4658*t4792 + t4794 + t4796))*var2[4];
  p_output1[16]=-1.*t4473*t4555*t4556*var2[0] + (-1.*t4509*t4551*t4555 - 1.*t4460*t4473*t4555*t4559)*var2[1] + (-1.*t4460*t4509*t4555 + t4473*t4551*t4555*t4559)*var2[2] + (t4556*t4730*t4765 + t4556*t4719*t4792 + t4625*(t4556*t4664*t4765 - 1.*t4559*t4671*t4765 - 1.*t4559*t4565*t4781 + t4556*t4710*t4781 + t4829 + t4831) + t4710*(t4559*t4606*t4781 - 1.*t4556*t4625*t4781 - 1.*t4556*t4664*t4792 + t4559*t4671*t4792 + t4843 + t4845))*var2[3] + (t4597*(t4658*t4765 + t4562*t4781 + t4829 + t4831) + t4603*t4836 + t4562*t4840 + t4511*(-1.*t4603*t4781 - 1.*t4658*t4792 + t4843 + t4845))*var2[4];
  p_output1[17]=t4556*t4792*var2[0] + (t4551*t4603 + t4460*t4559*t4792)*var2[1] + (t4460*t4603 - 1.*t4551*t4559*t4792)*var2[2] + (-1.*t4473*t4555*t4556*t4758 + t4556*t4747*t4765 + t4710*(t4473*t4555*t4658 - 1.*t4473*t4555*t4556*t4664 + t4473*t4555*t4559*t4671 - 1.*t4559*t4579*t4781 + t4556*t4668*t4781 + t4881) + t4668*(-1.*t4556*t4664*t4765 + t4559*t4671*t4765 + t4559*t4565*t4781 - 1.*t4556*t4710*t4781 + t4885 + t4887))*var2[3] + (t4562*t4878 + t4511*(-1.*t4509*t4555*t4781 + t4881) + t4473*t4555*(-1.*t4658*t4765 - 1.*t4562*t4781 + t4885 + t4887) - 1.*t4509*t4555*t4892)*var2[4];
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
  p_output1[36]=t4942*var2[0] + (-1.*t4473*t4504*t4551*t4555 - 1.*t4460*t4947)*var2[1] + (-1.*t4460*t4473*t4504*t4555 + t4551*t4947)*var2[2] + (t4685*t4975 + t4699*t4987 + t4625*(t4957 + t4961 - 1.*t4668*t4979 - 1.*t4579*t4983 - 1.*t4664*t4987 - 1.*t4671*t4991) + t4668*(t4965 + t4966 + t4664*t4975 + t4625*t4979 + t4606*t4983 + t4671*t4998))*var2[3] + (-1.*t4473*t4508*t4555*t4777 - 1.*t4473*t4474*t4788 + t4597*(-1.*t4474*t4509*t4658 + t4921 + t4925 + t4957 - 1.*t4555*t4919*t4958 + t4961) + t4473*t4555*(t4508*t4509*t4555*t4658 - 1.*t4509*t4603*t4919 + t4933 + t4935 + t4965 + t4966))*var2[4] + (-1.*t4474*t4508*t4915 + t4508*t4555*(t4474*t4656 - 1.*t4555*t4919 + t4921 + t4925) + t4555*(t4786 + t4928 + t4929) + t4474*(-1.*t4508*t4555*t4656 - 1.*t4474*t4508*t4919 + t4933 + t4935))*var2[5];
  p_output1[37]=t4987*var2[0] + (-1.*t4473*t4474*t4551 - 1.*t4460*t4991)*var2[1] + (-1.*t4460*t4473*t4474 + t4551*t4991)*var2[2] + (t4730*t4942 + t4719*t4975 + t4625*(t4664*t4942 + t4671*t4947 + t4710*t4979 + t4565*t4983 + t5040 + t5042) + t4710*(-1.*t4664*t4975 - 1.*t4625*t4979 - 1.*t4606*t4983 - 1.*t4671*t4998 + t5047 + t5048))*var2[3] + (-1.*t4473*t4508*t4555*t4836 - 1.*t4473*t4504*t4555*t4840 + t4597*(t4504*t4509*t4555*t4658 - 1.*t4509*t4562*t4919 + t5009 + t5011 + t5040 + t5042) + t4511*(-1.*t4508*t4509*t4555*t4658 + t4509*t4603*t4919 + t5019 + t5021 + t5047 + t5048))*var2[4] + (t4508*t4555*(-1.*t4504*t4555*t4656 - 1.*t4474*t4504*t4919 + t5009 + t5011) - 1.*t4474*t4504*t5016 + t4504*t4555*(t4508*t4555*t4656 + t4474*t4508*t4919 + t5019 + t5021) - 1.*t4474*t4508*t5026)*var2[5];
  p_output1[38]=t4975*var2[0] + (-1.*t4473*t4508*t4551*t4555 - 1.*t4460*t4998)*var2[1] + (-1.*t4460*t4473*t4508*t4555 + t4551*t4998)*var2[2] + (t4747*t4942 + t4758*t4987 + t4710*(t4668*t4979 + t4579*t4983 + t4664*t4987 + t4671*t4991 + t5103 + t5106) + t4668*(-1.*t4664*t4942 - 1.*t4671*t4947 - 1.*t4710*t4979 - 1.*t4565*t4983 + t5110 + t5112))*var2[3] + (-1.*t4473*t4504*t4555*t4878 - 1.*t4473*t4474*t4892 + t4511*(t4474*t4509*t4658 + t4555*t4919*t4958 + t5076 + t5078 + t5103 + t5106) + t4473*t4555*(-1.*t4504*t4509*t4555*t4658 + t4509*t4562*t4919 + t5082 + t5084 + t5110 + t5112))*var2[4] + (-1.*t4474*t4504*t5073 + t4504*t4555*(-1.*t4474*t4656 + t4555*t4919 + t5076 + t5078) + t4474*(t4504*t4555*t4656 + t4474*t4504*t4919 + t5082 + t5084) + t4555*(t4890 + t5087 + t5088))*var2[5];
  p_output1[39]=t4625*var2[0] + t4613*var2[1] + (t4460*t4597 + t4551*t4606)*var2[2] + (t4685*t5195 + t4625*(t5179 - 1.*t4668*t5199 - 1.*t4579*t5203) + t4668*(t5182 + t5187 + t4664*t5195 + t4625*t5199 + t4606*t5203 + t4671*t5210))*var2[3] + (t4777*t5169 + t4597*(-1.*t4474*t4555*t5153 + t4509*t4555*t5174 + t5179) + t4473*t4555*(t5143 + t5154 + t4603*t5174 + t5182 + t4658*t5185 + t5187))*var2[4] + (t4555*t4594*t4915 + t4474*(-1.*t4474*t4594*t4656 + t4649*t5137 + t5143 + t4594*t5148 + t5154 + t4508*t5153*t5155))*var2[5] + (0.1575*t4508 + 0.2255*t5137)*var2[12];
  p_output1[40]=(t4625*t4730 + t4719*t5195 + t4625*(t4696 + t4697 + t4698 + t4710*t5199 + t4565*t5203 + t5255) + t4710*(-1.*t4664*t5195 - 1.*t4625*t5199 - 1.*t4606*t5203 - 1.*t4671*t5210 + t5258 + t5260))*var2[3] + (t4597*t4840 + t4836*t5169 + t4597*(t4696 + t4786 + t4787 + t4562*t5174 + t5229 + t5255) + t4511*(-1.*t4603*t5174 - 1.*t4658*t5185 + t5221 + t5225 + t5258 + t5260))*var2[4] + (t4508*t4555*t5016 + t4555*t4594*t5026 + t4504*t4555*(t4474*t4594*t4656 - 1.*t4508*t5153*t5155 + t5221 + t5223 + t5224 + t5225) + t4508*t4555*(t4786 + t4928 + t4929 + t4504*t5153*t5155 + t5229 + t5231))*var2[5] + (t4508*(-1.*t4594*t4640 - 1.*t4508*t5153 + t5223 + t5224) + t4594*(t4508*t4640 + t4928 + t4504*t5153 + t5231) + t5137*t5237 + t4594*t5244)*var2[12];
  p_output1[41]=t5195*var2[0] + (t4551*t5169 - 1.*t4460*t5210)*var2[1] + (t4460*t5169 + t4551*t5210)*var2[2] + (t4625*t4747 + t4710*(t4668*t5199 + t4579*t5203 + t5302) + t4668*(t4727 + t4728 + t4729 - 1.*t4710*t5199 - 1.*t4565*t5203 + t5306))*var2[3] + (t4597*t4878 + t4511*(t4474*t4555*t5153 - 1.*t4509*t4555*t5174 + t5302) + t4473*t4555*(t4727 + t4838 + t4839 - 1.*t4562*t5174 + t5283 + t5306))*var2[4] + (t4508*t4555*t5073 + t4474*(t4838 + t5014 + t5015 - 1.*t4508*t5148 - 1.*t4504*t5153*t5155 + t5283))*var2[5] - 0.068*t4594*var2[12];
  p_output1[42]=t5353*var2[0] + (t4551*t5357 - 1.*t4460*t5361)*var2[1] + (t4460*t5357 + t4551*t5361)*var2[2] + (t4685*t4710 + t4625*(t5378 - 1.*t4668*t5390 - 1.*t4579*t5394) + t4668*(t4716 + t4717 + t4718 + t5381 + t4625*t5390 + t4606*t5394))*var2[3] + (t4511*t4777 + t4597*(-1.*t4474*t4555*t5341 + t4509*t4555*t5373 + t5378) + t4473*t4555*(t4716 + t4834 + t4835 + t5342 + t4603*t5373 + t5381))*var2[4] + (t4504*t4555*t4915 + t4474*(t4834 + t5024 + t5025 + t4594*t5337 + t4508*t5155*t5341 + t5342))*var2[5] + (0.2255*t4508 + 0.1575*t5137)*var2[12] + (0.325*t4475 - 1.*t4475*t4638 - 1.*t4475*t5327)*var2[13];
  p_output1[43]=(t4710*t4719 + t4730*t5353 + t4625*(t4664*t5353 + t4671*t5361 + t4710*t5390 + t4565*t5394 + t5435 + t5438) + t4710*(t4755 + t4756 + t4757 - 1.*t4625*t5390 - 1.*t4606*t5394 + t5442))*var2[3] + (t4511*t4836 + t4840*t5357 + t4597*(t4658*t5351 + t4562*t5373 + t5413 + t5415 + t5435 + t5438) + t4511*(t4755 + t4890 + t4891 - 1.*t4603*t5373 + t5408 + t5442))*var2[4] + (t4504*t4555*t5026 + t4555*t5016*t5137 + t4504*t4555*(t4890 + t5087 + t5088 - 1.*t4508*t5155*t5341 + t5407 + t5408) + t4508*t4555*(-1.*t4474*t4656*t5137 + t4504*t5155*t5341 + t5412 + t5413 + t5415 + t5417))*var2[5] + (t4508*t5237 + t4504*t5244 + t4508*(-1.*t4504*t4640 + t5088 - 1.*t4508*t5341 + t5407) + t4594*(t4640*t5137 + t4504*t5341 + t5412 + t5417))*var2[12];
  p_output1[44]=t4710*var2[0] + t4572*var2[1] + (t4460*t4511 + t4551*t4565)*var2[2] + (t4747*t5353 + t4710*(t4668*t5390 + t4579*t5394 + t5489) + t4668*(-1.*t4664*t5353 - 1.*t4671*t5361 - 1.*t4710*t5390 - 1.*t4565*t5394 + t5492 + t5495))*var2[3] + (t4878*t5357 + t4511*(t4474*t4555*t5341 - 1.*t4509*t4555*t5373 + t5489) + t4473*t4555*(-1.*t4658*t5351 - 1.*t4562*t5373 + t5471 + t5473 + t5492 + t5495))*var2[4] + (t4555*t5073*t5137 + t4474*(-1.*t4504*t4649 + t4474*t4656*t5137 - 1.*t4508*t5337 - 1.*t4504*t5155*t5341 + t5471 + t5473))*var2[5] - 0.068*t4504*var2[12] + (0.325*t4502 - 1.*t4502*t4638 - 1.*t4502*t5327)*var2[13];
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
