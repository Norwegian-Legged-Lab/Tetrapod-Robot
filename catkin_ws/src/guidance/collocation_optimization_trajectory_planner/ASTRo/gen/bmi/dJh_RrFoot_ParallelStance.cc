/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 17:41:16 GMT+02:00
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
  double t4479;
  double t4480;
  double t4488;
  double t4489;
  double t4508;
  double t4519;
  double t4520;
  double t4523;
  double t4438;
  double t4478;
  double t4526;
  double t4532;
  double t4522;
  double t4527;
  double t4528;
  double t4370;
  double t4533;
  double t4535;
  double t4582;
  double t4586;
  double t4587;
  double t4588;
  double t4591;
  double t4592;
  double t4593;
  double t4595;
  double t4596;
  double t4607;
  double t4609;
  double t4610;
  double t4612;
  double t4614;
  double t4615;
  double t4626;
  double t4627;
  double t4628;
  double t4631;
  double t4632;
  double t4634;
  double t4635;
  double t4636;
  double t4640;
  double t4650;
  double t4654;
  double t4658;
  double t4674;
  double t4675;
  double t4680;
  double t4695;
  double t4696;
  double t4697;
  double t4698;
  double t4699;
  double t4704;
  double t4707;
  double t4709;
  double t4711;
  double t4712;
  double t4715;
  double t4717;
  double t4719;
  double t4720;
  double t4694;
  double t4700;
  double t4701;
  double t4702;
  double t4721;
  double t4722;
  double t4726;
  double t4728;
  double t4730;
  double t4731;
  double t4732;
  double t4733;
  double t4734;
  double t4738;
  double t4739;
  double t4740;
  double t4703;
  double t4735;
  double t4736;
  double t4755;
  double t4756;
  double t4757;
  double t4685;
  double t4686;
  double t4690;
  double t4747;
  double t4749;
  double t4751;
  double t4763;
  double t4764;
  double t4765;
  double t4788;
  double t4789;
  double t4791;
  double t4871;
  double t4872;
  double t4873;
  double t4752;
  double t4893;
  double t4894;
  double t4895;
  double t4770;
  double t4908;
  double t4909;
  double t4910;
  double t4753;
  double t4758;
  double t4759;
  double t4897;
  double t4903;
  double t4898;
  double t4900;
  double t4901;
  double t4907;
  double t4912;
  double t4771;
  double t4772;
  double t4773;
  double t4800;
  double t4811;
  double t4953;
  double t4955;
  double t4963;
  double t4966;
  double t4801;
  double t4802;
  double t4803;
  double t4812;
  double t4813;
  double t4814;
  double t4826;
  double t4852;
  double t4827;
  double t4828;
  double t4829;
  double t4923;
  double t4926;
  double t5006;
  double t5008;
  double t5012;
  double t5014;
  double t4854;
  double t4859;
  double t4860;
  double t4877;
  double t4878;
  double t4879;
  double t4880;
  double t4884;
  double t4885;
  double t4886;
  double t4887;
  double t4888;
  double t4889;
  double t4890;
  double t4891;
  double t5044;
  double t5045;
  double t5046;
  double t5041;
  double t5042;
  double t4902;
  double t5051;
  double t5052;
  double t5053;
  double t5055;
  double t5056;
  double t5057;
  double t4911;
  double t4915;
  double t4916;
  double t4917;
  double t4918;
  double t4922;
  double t5058;
  double t4929;
  double t4930;
  double t5062;
  double t4935;
  double t4936;
  double t4939;
  double t4943;
  double t4944;
  double t4945;
  double t4946;
  double t4947;
  double t4948;
  double t4949;
  double t4950;
  double t4951;
  double t4954;
  double t4958;
  double t4959;
  double t4960;
  double t4961;
  double t4965;
  double t4969;
  double t4971;
  double t4972;
  double t4973;
  double t5093;
  double t4978;
  double t4979;
  double t5097;
  double t4984;
  double t4985;
  double t4988;
  double t4989;
  double t4993;
  double t4994;
  double t4995;
  double t4996;
  double t4997;
  double t4998;
  double t4999;
  double t5000;
  double t5001;
  double t5002;
  double t5003;
  double t5004;
  double t5007;
  double t5013;
  double t5017;
  double t5018;
  double t5019;
  double t5020;
  double t5023;
  double t5120;
  double t5026;
  double t5027;
  double t5124;
  double t5032;
  double t5033;
  double t5036;
  double t5140;
  double t5141;
  double t5142;
  double t5152;
  double t5153;
  double t5154;
  double t5158;
  double t5159;
  double t5160;
  double t5162;
  double t5163;
  double t5164;
  double t5172;
  double t5173;
  double t5174;
  double t5175;
  double t5176;
  double t5177;
  double t5178;
  double t5180;
  double t5181;
  double t5182;
  double t5179;
  double t5187;
  double t5188;
  double t5190;
  double t5196;
  double t5197;
  double t5198;
  double t5200;
  double t5201;
  double t5202;
  double t5217;
  double t5220;
  double t5233;
  double t5235;
  double t5228;
  double t5257;
  double t5259;
  double t5151;
  double t5155;
  double t5156;
  double t5264;
  double t4601;
  double t4603;
  double t4604;
  double t5296;
  double t5303;
  double t5305;
  double t5143;
  double t5144;
  double t5145;
  double t5146;
  double t5147;
  double t5148;
  double t5149;
  double t4662;
  double t4663;
  double t4664;
  double t5338;
  double t5339;
  double t5340;
  double t5341;
  double t5342;
  double t5344;
  double t5345;
  double t5346;
  double t5350;
  double t5351;
  double t5352;
  double t5343;
  double t5355;
  double t5356;
  double t5357;
  double t5362;
  double t5363;
  double t5364;
  double t5359;
  double t5361;
  double t5370;
  double t5371;
  double t5372;
  double t5374;
  double t5375;
  double t5376;
  double t5380;
  double t5381;
  double t5382;
  double t5214;
  double t5215;
  double t5223;
  double t5224;
  double t5241;
  double t5242;
  double t5243;
  double t5399;
  double t5251;
  double t5252;
  double t5253;
  double t5403;
  double t5405;
  double t5428;
  double t5433;
  double t5435;
  double t5387;
  double t5388;
  double t5389;
  double t5286;
  double t5287;
  double t5288;
  double t5471;
  double t5477;
  t4479 = Cos(var1[16]);
  t4480 = Cos(var1[17]);
  t4488 = -1.*t4479*t4480;
  t4489 = Sin(var1[16]);
  t4508 = Sin(var1[17]);
  t4519 = -1.*t4489*t4508;
  t4520 = t4488 + t4519;
  t4523 = Cos(var1[15]);
  t4438 = Cos(var1[5]);
  t4478 = Sin(var1[15]);
  t4526 = Sin(var1[5]);
  t4532 = Cos(var1[3]);
  t4522 = t4438*t4478*t4520;
  t4527 = t4523*t4520*t4526;
  t4528 = t4522 + t4527;
  t4370 = Sin(var1[3]);
  t4533 = Cos(var1[4]);
  t4535 = -1.*t4480*t4489;
  t4582 = t4479*t4508;
  t4586 = t4535 + t4582;
  t4587 = t4533*t4586;
  t4588 = Sin(var1[4]);
  t4591 = t4523*t4438*t4520;
  t4592 = -1.*t4478*t4520*t4526;
  t4593 = t4591 + t4592;
  t4595 = -1.*t4588*t4593;
  t4596 = t4587 + t4595;
  t4607 = t4438*t4478;
  t4609 = t4523*t4526;
  t4610 = t4607 + t4609;
  t4612 = -1.*t4523*t4438;
  t4614 = t4478*t4526;
  t4615 = t4612 + t4614;
  t4626 = t4438*t4478*t4586;
  t4627 = t4523*t4586*t4526;
  t4628 = t4626 + t4627;
  t4631 = t4479*t4480;
  t4632 = t4489*t4508;
  t4634 = t4631 + t4632;
  t4635 = t4533*t4634;
  t4636 = t4523*t4438*t4586;
  t4640 = -1.*t4478*t4586*t4526;
  t4650 = t4636 + t4640;
  t4654 = -1.*t4588*t4650;
  t4658 = t4635 + t4654;
  t4674 = -1.*t4586*t4588;
  t4675 = -1.*t4533*t4593;
  t4680 = t4674 + t4675;
  t4695 = -1.*t4480;
  t4696 = 1. + t4695;
  t4697 = -0.50321*t4696;
  t4698 = -0.19821*t4480;
  t4699 = t4697 + t4698;
  t4704 = -1.*t4523;
  t4707 = 1. + t4704;
  t4709 = -0.15121*t4707;
  t4711 = -1.*t4479;
  t4712 = 1. + t4711;
  t4715 = -0.28121*t4712;
  t4717 = t4479*t4699;
  t4719 = 0.305*t4489*t4508;
  t4720 = t4715 + t4717 + t4719;
  t4694 = 0.28121*t4489;
  t4700 = t4699*t4489;
  t4701 = -0.305*t4479*t4508;
  t4702 = t4694 + t4700 + t4701;
  t4721 = t4523*t4720;
  t4722 = t4709 + t4721;
  t4726 = t4438*t4722;
  t4728 = -0.15121*t4523;
  t4730 = 0.15121*t4478;
  t4731 = t4478*t4720;
  t4732 = t4709 + t4728 + t4730 + t4731;
  t4733 = -1.*t4732*t4526;
  t4734 = t4726 + t4733;
  t4738 = t4702*t4588;
  t4739 = t4533*t4734;
  t4740 = t4738 + t4739;
  t4703 = -1.*t4702*t4588;
  t4735 = -1.*t4533*t4734;
  t4736 = t4703 + t4735;
  t4755 = t4533*t4702;
  t4756 = -1.*t4588*t4734;
  t4757 = t4755 + t4756;
  t4685 = t4634*t4588;
  t4686 = t4533*t4650;
  t4690 = t4685 + t4686;
  t4747 = t4438*t4732;
  t4749 = t4722*t4526;
  t4751 = t4747 + t4749;
  t4763 = -1.*t4634*t4588;
  t4764 = -1.*t4533*t4650;
  t4765 = t4763 + t4764;
  t4788 = t4586*t4588;
  t4789 = t4533*t4593;
  t4791 = t4788 + t4789;
  t4871 = -1.*t4438*t4478*t4520;
  t4872 = -1.*t4523*t4520*t4526;
  t4873 = t4871 + t4872;
  t4752 = -1.*t4615*t4751;
  t4893 = -1.*t4438*t4732;
  t4894 = -1.*t4722*t4526;
  t4895 = t4893 + t4894;
  t4770 = t4628*t4751;
  t4908 = -1.*t4438*t4478*t4586;
  t4909 = -1.*t4523*t4586*t4526;
  t4910 = t4908 + t4909;
  t4753 = -1.*t4533*t4610*t4740;
  t4758 = t4588*t4610*t4757;
  t4759 = t4752 + t4753 + t4758;
  t4897 = -1.*t4610*t4751;
  t4903 = -1.*t4615*t4734;
  t4898 = t4523*t4438;
  t4900 = -1.*t4478*t4526;
  t4901 = t4898 + t4900;
  t4907 = t4650*t4751;
  t4912 = t4628*t4734;
  t4771 = t4690*t4740;
  t4772 = t4658*t4757;
  t4773 = t4770 + t4771 + t4772;
  t4800 = -1.*t4628*t4751;
  t4811 = t4528*t4751;
  t4953 = -1.*t4650*t4751;
  t4955 = -1.*t4628*t4734;
  t4963 = t4593*t4751;
  t4966 = t4528*t4734;
  t4801 = -1.*t4690*t4740;
  t4802 = -1.*t4658*t4757;
  t4803 = t4800 + t4801 + t4802;
  t4812 = t4791*t4740;
  t4813 = t4596*t4757;
  t4814 = t4811 + t4812 + t4813;
  t4826 = t4615*t4751;
  t4852 = -1.*t4528*t4751;
  t4827 = t4533*t4610*t4740;
  t4828 = -1.*t4588*t4610*t4757;
  t4829 = t4826 + t4827 + t4828;
  t4923 = Power(t4533,2);
  t4926 = Power(t4588,2);
  t5006 = t4610*t4751;
  t5008 = t4615*t4734;
  t5012 = -1.*t4593*t4751;
  t5014 = -1.*t4528*t4734;
  t4854 = -1.*t4791*t4740;
  t4859 = -1.*t4596*t4757;
  t4860 = t4852 + t4854 + t4859;
  t4877 = var2[0]*t4533*t4873;
  t4878 = t4370*t4588*t4873;
  t4879 = t4532*t4593;
  t4880 = t4878 + t4879;
  t4884 = var2[1]*t4880;
  t4885 = -1.*t4532*t4588*t4873;
  t4886 = t4370*t4593;
  t4887 = t4885 + t4886;
  t4888 = var2[2]*t4887;
  t4889 = -1.*t4610*t4734;
  t4890 = t4752 + t4889;
  t4891 = t4650*t4890;
  t5044 = -0.15121*t4478;
  t5045 = -1.*t4478*t4720;
  t5046 = t5044 + t5045;
  t5041 = 0.15121*t4523;
  t5042 = t5041 + t4721;
  t4902 = -1.*t4901*t4734;
  t5051 = t4438*t5046;
  t5052 = -1.*t5042*t4526;
  t5053 = t5051 + t5052;
  t5055 = t4438*t5042;
  t5056 = t5046*t4526;
  t5057 = t5055 + t5056;
  t4911 = t4910*t4734;
  t4915 = t4702*t4634;
  t4916 = t4650*t4734;
  t4917 = t4915 + t4770 + t4916;
  t4918 = t4610*t4917;
  t4922 = t4533*t4910*t4759;
  t5058 = -1.*t4615*t5057;
  t4929 = -1.*t4533*t4901*t4740;
  t4930 = t4588*t4901*t4757;
  t5062 = t4628*t5057;
  t4935 = t4533*t4910*t4740;
  t4936 = -1.*t4588*t4910*t4757;
  t4939 = t4533*t4901*t4773;
  t4943 = var2[0]*t4533*t4901;
  t4944 = t4370*t4610;
  t4945 = -1.*t4532*t4588*t4901;
  t4946 = t4944 + t4945;
  t4947 = var2[2]*t4946;
  t4948 = t4532*t4610;
  t4949 = t4370*t4588*t4901;
  t4950 = t4948 + t4949;
  t4951 = var2[1]*t4950;
  t4954 = -1.*t4910*t4734;
  t4958 = -1.*t4702*t4634;
  t4959 = -1.*t4650*t4734;
  t4960 = t4958 + t4800 + t4959;
  t4961 = t4593*t4960;
  t4965 = t4873*t4734;
  t4969 = t4702*t4586;
  t4971 = t4593*t4734;
  t4972 = t4969 + t4811 + t4971;
  t4973 = t4650*t4972;
  t5093 = -1.*t4628*t5057;
  t4978 = -1.*t4533*t4910*t4740;
  t4979 = t4588*t4910*t4757;
  t5097 = t4528*t5057;
  t4984 = t4533*t4873*t4740;
  t4985 = -1.*t4588*t4873*t4757;
  t4988 = t4533*t4873*t4803;
  t4989 = t4533*t4910*t4814;
  t4993 = var2[0]*t4533*t4910;
  t4994 = t4370*t4588*t4910;
  t4995 = t4532*t4650;
  t4996 = t4994 + t4995;
  t4997 = var2[1]*t4996;
  t4998 = -1.*t4532*t4588*t4910;
  t4999 = t4370*t4650;
  t5000 = t4998 + t4999;
  t5001 = var2[2]*t5000;
  t5002 = t4610*t4734;
  t5003 = t4826 + t5002;
  t5004 = t4593*t5003;
  t5007 = t4901*t4734;
  t5013 = -1.*t4873*t4734;
  t5017 = -1.*t4702*t4586;
  t5018 = -1.*t4593*t4734;
  t5019 = t5017 + t4852 + t5018;
  t5020 = t4610*t5019;
  t5023 = t4533*t4873*t4829;
  t5120 = t4615*t5057;
  t5026 = t4533*t4901*t4740;
  t5027 = -1.*t4588*t4901*t4757;
  t5124 = -1.*t4528*t5057;
  t5032 = -1.*t4533*t4873*t4740;
  t5033 = t4588*t4873*t4757;
  t5036 = t4533*t4901*t4860;
  t5140 = t4480*t4489;
  t5141 = -1.*t4479*t4508;
  t5142 = t5140 + t5141;
  t5152 = t4523*t4438*t5142;
  t5153 = -1.*t4478*t5142*t4526;
  t5154 = t5152 + t5153;
  t5158 = t4438*t4478*t5142;
  t5159 = t4523*t5142*t4526;
  t5160 = t5158 + t5159;
  t5162 = t4533*t4520;
  t5163 = -1.*t4588*t5154;
  t5164 = t5162 + t5163;
  t5172 = -0.28121*t4489;
  t5173 = -1.*t4699*t4489;
  t5174 = 0.305*t4479*t4508;
  t5175 = t5172 + t5173 + t5174;
  t5176 = t4438*t4478*t5175;
  t5177 = t4523*t5175*t4526;
  t5178 = t5176 + t5177;
  t5180 = t4523*t4438*t5175;
  t5181 = -1.*t4478*t5175*t4526;
  t5182 = t5180 + t5181;
  t5179 = -1.*t4615*t5178;
  t5187 = 0.28121*t4479;
  t5188 = t5187 + t4717 + t4719;
  t5190 = t5178*t4628;
  t5196 = t5188*t4588;
  t5197 = t4533*t5182;
  t5198 = t5196 + t5197;
  t5200 = t4533*t5188;
  t5201 = -1.*t4588*t5182;
  t5202 = t5200 + t5201;
  t5217 = t4702*t4520;
  t5220 = t4586*t5188;
  t5233 = Power(t4523,2);
  t5235 = Power(t4478,2);
  t5228 = -1.*t5188*t4634;
  t5257 = t5178*t4528;
  t5259 = t5160*t4751;
  t5151 = t4520*t4588;
  t5155 = t4533*t5154;
  t5156 = t5151 + t5155;
  t5264 = -1.*t5178*t4628;
  t4601 = t4532*t4528;
  t4603 = -1.*t4370*t4596;
  t4604 = t4601 + t4603;
  t5296 = t4615*t5178;
  t5303 = -1.*t5178*t4528;
  t5305 = -1.*t5160*t4751;
  t5143 = -0.15121*t5142;
  t5144 = -0.15121*t4586;
  t5145 = t5143 + t5144;
  t5146 = var2[15]*t5145;
  t5147 = -1.*t4478*t4722;
  t5148 = t4523*t4732;
  t5149 = t5147 + t5148;
  t4662 = t4532*t4628;
  t4663 = -1.*t4370*t4658;
  t4664 = t4662 + t4663;
  t5338 = 0.305*t4480*t4489;
  t5339 = t5338 + t4701;
  t5340 = t4438*t4478*t5339;
  t5341 = t4523*t5339*t4526;
  t5342 = t5340 + t5341;
  t5344 = t4523*t4438*t5339;
  t5345 = -1.*t4478*t5339*t4526;
  t5346 = t5344 + t5345;
  t5350 = t4438*t4478*t4634;
  t5351 = t4523*t4634*t4526;
  t5352 = t5350 + t5351;
  t5343 = -1.*t4615*t5342;
  t5355 = -0.305*t4479*t4480;
  t5356 = -0.305*t4489*t4508;
  t5357 = t5355 + t5356;
  t5362 = t4523*t4438*t4634;
  t5363 = -1.*t4478*t4634*t4526;
  t5364 = t5362 + t5363;
  t5359 = t5342*t4628;
  t5361 = t5352*t4751;
  t5370 = t5357*t4588;
  t5371 = t4533*t5346;
  t5372 = t5370 + t5371;
  t5374 = t4533*t5357;
  t5375 = -1.*t4588*t5346;
  t5376 = t5374 + t5375;
  t5380 = t5142*t4588;
  t5381 = t4533*t5364;
  t5382 = t5380 + t5381;
  t5214 = t4520*t4720;
  t5215 = t4969 + t5214;
  t5223 = -1.*t4586*t4720;
  t5224 = t5223 + t4958;
  t5241 = -1.*t4523*t4586*t4722;
  t5242 = -1.*t4478*t4586*t4732;
  t5243 = t4958 + t5241 + t5242;
  t5399 = t4586*t5357;
  t5251 = t4523*t4520*t4722;
  t5252 = t4478*t4520*t4732;
  t5253 = t4969 + t5251 + t5252;
  t5403 = -1.*t5142*t4702;
  t5405 = -1.*t5357*t4634;
  t5428 = t5342*t4528;
  t5433 = -1.*t5342*t4628;
  t5435 = -1.*t5352*t4751;
  t5387 = t4533*t5142;
  t5388 = -1.*t4588*t5364;
  t5389 = t5387 + t5388;
  t5286 = t4478*t4722;
  t5287 = -1.*t4523*t4732;
  t5288 = t5286 + t5287;
  t5471 = t4615*t5342;
  t5477 = -1.*t5342*t4528;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t4370*t4528 - 1.*t4532*t4596)*var2[1] + t4604*var2[2];
  p_output1[10]=(t4532*t4588*t4610 - 1.*t4370*t4615)*var2[1] + (t4370*t4588*t4610 + t4532*t4615)*var2[2];
  p_output1[11]=(-1.*t4370*t4628 - 1.*t4532*t4658)*var2[1] + t4664*var2[2];
  p_output1[12]=t4596*var2[0] - 1.*t4370*t4680*var2[1] + t4532*t4680*var2[2] + (t4690*(t4588*t4610*t4736 + t4588*t4610*t4740) + t4658*t4759 + t4533*t4610*(t4658*t4736 + t4658*t4740 + t4690*t4757 + t4757*t4765) - 1.*t4588*t4610*t4773)*var2[3];
  p_output1[13]=-1.*t4588*t4610*var2[0] + t4370*t4533*t4610*var2[1] - 1.*t4532*t4533*t4610*var2[2] + ((-1.*t4658*t4736 - 1.*t4658*t4740 - 1.*t4690*t4757 - 1.*t4757*t4765)*t4791 + t4690*(t4596*t4736 + t4596*t4740 + t4680*t4757 + t4757*t4791) + t4596*t4803 + t4658*t4814)*var2[3];
  p_output1[14]=t4658*var2[0] - 1.*t4370*t4765*var2[1] + t4532*t4765*var2[2] + ((-1.*t4588*t4610*t4736 - 1.*t4588*t4610*t4740)*t4791 + t4533*t4610*(-1.*t4596*t4736 - 1.*t4596*t4740 - 1.*t4680*t4757 - 1.*t4757*t4791) + t4596*t4829 - 1.*t4588*t4610*t4860)*var2[3];
  p_output1[15]=t4877 + t4884 + t4888 + (t4922 + t4690*(t4897 + t4903 - 1.*t4610*t4895*t4923 - 1.*t4610*t4895*t4926 + t4929 + t4930) + t4533*t4610*(-1.*t4588*t4658*t4895 + t4533*t4690*t4895 + t4907 + t4912 + t4935 + t4936) + t4939)*var2[3] + (t4891 + t4628*(-1.*t4610*t4895 + t4897 + t4902 + t4903) + t4615*(t4650*t4895 + t4907 + t4911 + t4912) + t4918)*var2[4];
  p_output1[16]=t4943 + t4947 + t4951 + (t4791*(t4588*t4658*t4895 - 1.*t4533*t4690*t4895 + t4953 + t4955 + t4978 + t4979) + t4690*(-1.*t4588*t4596*t4895 + t4533*t4791*t4895 + t4963 + t4966 + t4984 + t4985) + t4988 + t4989)*var2[3] + (t4528*(-1.*t4650*t4895 + t4953 + t4954 + t4955) + t4961 + t4628*(t4593*t4895 + t4963 + t4965 + t4966) + t4973)*var2[4];
  p_output1[17]=t4993 + t4997 + t5001 + (t5023 + t4791*(t4610*t4895*t4923 + t4610*t4895*t4926 + t5006 + t5008 + t5026 + t5027) + t4533*t4610*(t4588*t4596*t4895 - 1.*t4533*t4791*t4895 + t5012 + t5014 + t5032 + t5033) + t5036)*var2[3] + (t5004 + t4528*(t4610*t4895 + t5006 + t5007 + t5008) + t4615*(-1.*t4593*t4895 + t5012 + t5013 + t5014) + t5020)*var2[4];
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
  p_output1[45]=t4877 + t4884 + t4888 + (t4922 + t4939 + t4690*(t4897 + t4929 + t4930 - 1.*t4610*t4923*t5053 - 1.*t4610*t4926*t5053 + t5058) + t4533*t4610*(t4907 + t4935 + t4936 - 1.*t4588*t4658*t5053 + t4533*t4690*t5053 + t5062))*var2[3] + (t4891 + t4918 + t4628*(t4897 + t4902 - 1.*t4610*t5053 + t5058) + t4615*(t4907 + t4911 + t4650*t5053 + t5062))*var2[4] + t4634*(-1.*t4523*t4722 - 1.*t4478*t4732 + t4523*t5042 - 1.*t4478*t5046)*var2[5];
  p_output1[46]=t4943 + t4947 + t4951 + (t4988 + t4989 + t4791*(t4953 + t4978 + t4979 + t4588*t4658*t5053 - 1.*t4533*t4690*t5053 + t5093) + t4690*(t4963 + t4984 + t4985 - 1.*t4588*t4596*t5053 + t4533*t4791*t5053 + t5097))*var2[3] + (t4961 + t4973 + t4528*(t4953 + t4954 - 1.*t4650*t5053 + t5093) + t4628*(t4963 + t4965 + t4593*t5053 + t5097))*var2[4] + (t4634*(-1.*t4478*t4520*t4722 + t4520*t4523*t4732 + t4478*t4520*t5042 + t4520*t4523*t5046) + t4586*(t4478*t4586*t4722 - 1.*t4523*t4586*t4732 - 1.*t4478*t4586*t5042 - 1.*t4523*t4586*t5046))*var2[5];
  p_output1[47]=t4993 + t4997 + t5001 + (t5023 + t5036 + t4791*(t5006 + t5026 + t5027 + t4610*t4923*t5053 + t4610*t4926*t5053 + t5120) + t4533*t4610*(t5012 + t5032 + t5033 + t4588*t4596*t5053 - 1.*t4533*t4791*t5053 + t5124))*var2[3] + (t5004 + t5020 + t4528*(t5006 + t5007 + t4610*t5053 + t5120) + t4615*(t5012 + t5013 - 1.*t4593*t5053 + t5124))*var2[4] + t4586*(t4523*t4722 + t4478*t4732 - 1.*t4523*t5042 + t4478*t5046)*var2[5];
  p_output1[48]=t5146 + t5156*var2[0] + (t4532*t5160 - 1.*t4370*t5164)*var2[1] + (t4370*t5160 + t4532*t5164)*var2[2] + (t4759*t4791 + t4690*(t5179 - 1.*t4533*t4610*t5198 + t4588*t4610*t5202) + t4533*t4610*(t4811 + t4812 + t4813 + t5190 + t4690*t5198 + t4658*t5202))*var2[3] + (t4528*t4890 + t4628*(t5179 - 1.*t4610*t5182) + t4615*(t4811 + t4969 + t4971 + t4650*t5182 + t4634*t5188 + t5190))*var2[4] + t4586*t5149*var2[5];
  p_output1[49]=(t4791*t4814 + t4803*t5156 + t4690*(t4740*t5156 + t4757*t5164 + t4791*t5198 + t4596*t5202 + t5257 + t5259) + t4791*(t4852 + t4854 + t4859 - 1.*t4690*t5198 - 1.*t4658*t5202 + t5264))*var2[3] + (t4528*t4972 + t4960*t5160 + t4628*(t4734*t5154 + t4593*t5182 + t5217 + t5220 + t5257 + t5259) + t4528*(t4852 + t5017 + t5018 - 1.*t4650*t5182 + t5228 + t5264))*var2[4] + (t4634*(t4523*t4722*t5142 + t4478*t4732*t5142 + t5217 + t5220 + t4520*t5175*t5233 + t4520*t5175*t5235) + t4586*(-1.*t4520*t4523*t4722 - 1.*t4478*t4520*t4732 + t5017 + t5228 - 1.*t4586*t5175*t5233 - 1.*t4586*t5175*t5235) + t4520*t5243 + t4586*t5253)*var2[5] + (t4586*t5215 + t4634*(t4720*t5142 + t4520*t5175 + t5217 + t5220) + t4520*t5224 + t4586*(-1.*t4520*t4720 + t5017 - 1.*t4586*t5175 + t5228))*var2[15];
  p_output1[50]=t4791*var2[0] + t4604*var2[1] + (t4370*t4528 + t4532*t4596)*var2[2] + (t4829*t5156 + t4791*(t4533*t4610*t5198 - 1.*t4588*t4610*t5202 + t5296) + t4533*t4610*(-1.*t4740*t5156 - 1.*t4757*t5164 - 1.*t4791*t5198 - 1.*t4596*t5202 + t5303 + t5305))*var2[3] + (t5003*t5160 + t4528*(t4610*t5182 + t5296) + t4615*(-1.*t4520*t4702 - 1.*t4734*t5154 - 1.*t4593*t5182 - 1.*t4586*t5188 + t5303 + t5305))*var2[4] + t4520*t5288*var2[5];
  p_output1[51]=t5146 + t4690*var2[0] + t4664*var2[1] + (t4370*t4628 + t4532*t4658)*var2[2] + (t4690*(t5343 - 1.*t4533*t4610*t5372 + t4588*t4610*t5376) + t4759*t5382 + t4533*t4610*(t5359 + t5361 + t4690*t5372 + t4658*t5376 + t4740*t5382 + t4757*t5389))*var2[3] + (t4628*(t5343 - 1.*t4610*t5346) + t4890*t5352 + t4615*(t4702*t5142 + t4650*t5346 + t4634*t5357 + t5359 + t5361 + t4734*t5364))*var2[4] + t5142*t5149*var2[5] + (0.28121*t4480 - 0.305*Power(t4480,2) + t4480*t4699)*var2[16];
  p_output1[52]=(t4690*t4803 + t4814*t5382 + t4690*(t4770 + t4771 + t4772 + t4791*t5372 + t4596*t5376 + t5428) + t4791*(-1.*t4690*t5372 - 1.*t4658*t5376 - 1.*t4740*t5382 - 1.*t4757*t5389 + t5433 + t5435))*var2[3] + (t4628*t4960 + t4972*t5352 + t4628*(t4770 + t4915 + t4916 + t4593*t5346 + t5399 + t5428) + t4528*(-1.*t4650*t5346 - 1.*t4734*t5364 + t5403 + t5405 + t5433 + t5435))*var2[4] + (t4634*t5243 + t5142*t5253 + t4634*(t4523*t4586*t4722 + t4478*t4586*t4732 + t4915 + t4520*t5233*t5339 + t4520*t5235*t5339 + t5399) + t4586*(-1.*t4523*t4634*t4722 - 1.*t4478*t4634*t4732 - 1.*t4586*t5233*t5339 - 1.*t4586*t5235*t5339 + t5403 + t5405))*var2[5] + (t5142*t5215 + t4634*t5224 + t4634*(t4586*t4720 + t4915 + t4520*t5339 + t5399) + t4586*(-1.*t4634*t4720 - 1.*t4586*t5339 + t5403 + t5405))*var2[15];
  p_output1[53]=t5382*var2[0] + (t4532*t5352 - 1.*t4370*t5389)*var2[1] + (t4370*t5352 + t4532*t5389)*var2[2] + (t4690*t4829 + t4791*(t4533*t4610*t5372 - 1.*t4588*t4610*t5376 + t5471) + t4533*t4610*(t4800 + t4801 + t4802 - 1.*t4791*t5372 - 1.*t4596*t5376 + t5477))*var2[3] + (t4628*t5003 + t4528*(t4610*t5346 + t5471) + t4615*(t4800 + t4958 + t4959 - 1.*t4593*t5346 - 1.*t4586*t5357 + t5477))*var2[4] + t4634*t5288*var2[5] + (-0.28121*t4508 + 0.305*t4480*t4508 - 1.*t4508*t4699)*var2[16];
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
