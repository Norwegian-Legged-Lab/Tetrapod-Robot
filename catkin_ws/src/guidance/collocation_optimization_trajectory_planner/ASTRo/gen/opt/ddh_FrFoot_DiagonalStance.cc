/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:52:46 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t4432;
  double t4381;
  double t4396;
  double t4521;
  double t4597;
  double t4790;
  double t4965;
  double t5166;
  double t5171;
  double t5186;
  double t5199;
  double t3818;
  double t3330;
  double t3633;
  double t3638;
  double t3713;
  double t5229;
  double t5232;
  double t3829;
  double t5385;
  double t5387;
  double t5408;
  double t5409;
  double t5410;
  double t5415;
  double t5231;
  double t5377;
  double t5381;
  double t5417;
  double t5419;
  double t5421;
  double t5430;
  double t5432;
  double t5433;
  double t5434;
  double t5459;
  double t5474;
  double t3070;
  double t3243;
  double t5497;
  double t5487;
  double t5510;
  double t5514;
  double t5515;
  double t5543;
  double t5546;
  double t5549;
  double t5550;
  double t5551;
  double t5553;
  double t5554;
  double t5555;
  double t5556;
  double t5518;
  double t5519;
  double t5520;
  double t5533;
  double t5534;
  double t5535;
  double t5565;
  double t5566;
  double t5567;
  double t5568;
  double t5570;
  double t5576;
  double t5587;
  double t5589;
  double t5592;
  double t5596;
  double t5597;
  double t5600;
  double t5601;
  double t5602;
  double t5612;
  double t5613;
  double t5614;
  double t5627;
  double t5628;
  double t5629;
  double t5620;
  double t5623;
  double t5626;
  double t5633;
  double t5637;
  double t5638;
  double t5649;
  double t5650;
  double t5651;
  double t5639;
  double t5644;
  double t5645;
  double t5646;
  double t5652;
  double t5653;
  double t5656;
  double t5657;
  double t5658;
  double t5660;
  double t5661;
  double t5662;
  double t5666;
  double t5670;
  double t5683;
  double t5684;
  double t5685;
  double t5689;
  double t5690;
  double t5694;
  double t5716;
  double t5720;
  double t5721;
  double t5722;
  double t5723;
  double t5727;
  double t5729;
  double t5731;
  double t5732;
  double t5728;
  double t5733;
  double t5737;
  double t5738;
  double t5739;
  double t5740;
  double t5741;
  double t5742;
  double t5743;
  double t5744;
  double t5745;
  double t5746;
  double t5754;
  double t5755;
  double t5756;
  double t5760;
  double t5761;
  double t5762;
  double t5807;
  double t5811;
  double t5812;
  double t5833;
  double t5834;
  double t5835;
  double t5848;
  double t5849;
  double t5850;
  double t5837;
  double t5838;
  double t5840;
  double t5841;
  double t5842;
  double t5847;
  double t5853;
  double t5815;
  double t5816;
  double t5817;
  double t5818;
  double t5822;
  double t5823;
  double t5824;
  double t5826;
  double t5829;
  double t5830;
  double t5901;
  double t5903;
  double t5904;
  double t5895;
  double t5843;
  double t5909;
  double t5911;
  double t5912;
  double t5914;
  double t5915;
  double t5919;
  double t5851;
  double t5859;
  double t5863;
  double t5864;
  double t5866;
  double t5920;
  double t5868;
  double t5869;
  double t5926;
  double t5875;
  double t5878;
  double t5883;
  double t5969;
  double t5970;
  double t5971;
  double t5983;
  double t5984;
  double t5985;
  double t5972;
  double t5973;
  double t5974;
  double t5976;
  double t5977;
  double t5978;
  double t5986;
  double t5987;
  double t5988;
  double t5975;
  double t5992;
  double t5993;
  double t6002;
  double t6003;
  double t6004;
  double t5997;
  double t6001;
  double t6010;
  double t6011;
  double t6012;
  double t6014;
  double t6015;
  double t6017;
  double t6021;
  double t6023;
  double t6024;
  double t6042;
  double t6043;
  double t6044;
  double t6048;
  double t6049;
  double t6050;
  double t6057;
  double t6058;
  double t6059;
  double t6068;
  double t6083;
  double t6087;
  double t6090;
  double t6091;
  double t6095;
  double t6088;
  double t6107;
  double t6108;
  double t6109;
  double t6110;
  double t6114;
  double t6117;
  double t6123;
  double t6125;
  double t6127;
  double t6130;
  double t6131;
  double t6134;
  double t6103;
  double t6163;
  double t6164;
  double t6165;
  double t6167;
  double t6169;
  double t6170;
  double t6171;
  double t6172;
  double t6177;
  double t6178;
  double t6179;
  double t6180;
  double t6181;
  double t6183;
  double t6184;
  double t6185;
  double t6186;
  double t3888;
  double t5496;
  double t6201;
  double t6202;
  double t6203;
  double t6206;
  double t6207;
  double t6208;
  double t6192;
  double t6193;
  double t6194;
  double t6197;
  double t6198;
  double t6199;
  double t6118;
  double t6230;
  double t6231;
  double t6232;
  double t6233;
  double t6234;
  double t6235;
  double t6236;
  double t6217;
  double t6218;
  double t6219;
  double t6142;
  double t6143;
  double t6248;
  double t6249;
  double t6250;
  double t6251;
  double t6252;
  double t6253;
  double t6255;
  double t6239;
  double t6240;
  double t6241;
  double t6243;
  double t6245;
  double t6246;
  double t6273;
  double t6275;
  double t6281;
  double t6283;
  double t6263;
  double t6264;
  double t6265;
  double t6266;
  double t6267;
  double t6268;
  double t6269;
  double t6270;
  double t6271;
  double t6274;
  double t6279;
  double t6282;
  double t6286;
  double t6324;
  double t6291;
  double t6292;
  double t6328;
  double t6298;
  double t6299;
  double t6302;
  double t6303;
  double t5775;
  double t5776;
  double t5777;
  double t6371;
  double t6376;
  double t6386;
  double t6388;
  double t6379;
  double t6405;
  double t6409;
  double t6411;
  double t6029;
  double t6030;
  double t6031;
  double t6437;
  double t6439;
  double t6443;
  double t6445;
  double t6041;
  double t6045;
  double t6046;
  double t6469;
  double t6471;
  double t6475;
  double t6477;
  double t5948;
  double t5951;
  double t6509;
  double t6510;
  double t6511;
  double t6514;
  double t6517;
  double t6518;
  double t6521;
  double t6522;
  double t6524;
  double t5957;
  double t6527;
  double t6528;
  double t6529;
  double t6532;
  double t6533;
  double t6534;
  double t5958;
  double t5960;
  double t5961;
  double t5962;
  double t5963;
  double t5965;
  double t5966;
  double t5968;
  double t6478;
  double t6548;
  double t6549;
  double t6550;
  double t6551;
  double t6552;
  double t6553;
  double t6554;
  double t6541;
  double t6542;
  double t6543;
  double t6494;
  double t6495;
  double t6573;
  double t6574;
  double t6575;
  double t6576;
  double t6577;
  double t6579;
  double t6580;
  double t6557;
  double t6558;
  double t6559;
  double t6562;
  double t6563;
  double t6564;
  double t6607;
  double t6614;
  double t6592;
  double t6593;
  double t6595;
  double t6596;
  double t5559;
  double t5599;
  double t5611;
  double t6636;
  double t6643;
  double t6646;
  double t6708;
  double t6709;
  double t6714;
  double t6719;
  double t6693;
  double t6694;
  double t6695;
  double t6698;
  double t6699;
  double t6700;
  double t6701;
  double t6704;
  double t6705;
  double t6706;
  double t6710;
  double t6715;
  double t6724;
  double t6727;
  double t6755;
  double t6731;
  double t6732;
  double t6759;
  double t6737;
  double t6738;
  double t6741;
  t4432 = Cos(var1[14]);
  t4381 = Sin(var1[14]);
  t4396 = 0.28121*t4381;
  t4521 = -1.*t4432;
  t4597 = 1. + t4521;
  t4790 = 0.50321*t4597;
  t4965 = 0.19821*t4432;
  t5166 = t4790 + t4965;
  t5171 = -1.*t5166*t4381;
  t5186 = -0.305*t4432*t4381;
  t5199 = t4396 + t5171 + t5186;
  t3818 = Sin(var1[12]);
  t3330 = Cos(var1[12]);
  t3633 = -1.*t3330;
  t3638 = 1. + t3633;
  t3713 = 0.15121*t3638;
  t5229 = Cos(var1[13]);
  t5232 = Sin(var1[13]);
  t3829 = -0.15121*t3818;
  t5385 = -1.*t5229;
  t5387 = 1. + t5385;
  t5408 = 0.28121*t5387;
  t5409 = t5229*t5166;
  t5410 = -0.305*t5232*t4381;
  t5415 = t5408 + t5409 + t5410;
  t5231 = t5229*t4432;
  t5377 = t5232*t4381;
  t5381 = t5231 + t5377;
  t5417 = t3330*t5415;
  t5419 = t3713 + t5417;
  t5421 = t3818*t5419;
  t5430 = -0.15121*t3638;
  t5432 = -0.15121*t3330;
  t5433 = t3818*t5415;
  t5434 = t5430 + t5432 + t3829 + t5433;
  t5459 = -1.*t3330*t5434;
  t5474 = t5421 + t5459;
  t3070 = Cos(var1[4]);
  t3243 = Cos(var1[5]);
  t5497 = Sin(var1[5]);
  t5487 = Sin(var1[4]);
  t5510 = t3330*t3070*t3243;
  t5514 = -1.*t3070*t3818*t5497;
  t5515 = t5510 + t5514;
  t5543 = -1.*t4432*t5232;
  t5546 = t5229*t4381;
  t5549 = t5543 + t5546;
  t5550 = t5549*t5487;
  t5551 = t3330*t3243*t5381;
  t5553 = -1.*t3818*t5381*t5497;
  t5554 = t5551 + t5553;
  t5555 = t3070*t5554;
  t5556 = t5550 + t5555;
  t5518 = -1.*t5232*t5487;
  t5519 = t5229*t5515;
  t5520 = t5518 + t5519;
  t5533 = t5229*t5487;
  t5534 = t5232*t5515;
  t5535 = t5533 + t5534;
  t5565 = Sin(var1[3]);
  t5566 = t3243*t3818*t5381;
  t5567 = t3330*t5381*t5497;
  t5568 = t5566 + t5567;
  t5570 = t5565*t5568;
  t5576 = Cos(var1[3]);
  t5587 = t3070*t5549;
  t5589 = -1.*t5487*t5554;
  t5592 = t5587 + t5589;
  t5596 = t5576*t5592;
  t5597 = t5570 + t5596;
  t5600 = t5576*t5568;
  t5601 = -1.*t5565*t5592;
  t5602 = t5600 + t5601;
  t5612 = t4432*t5232;
  t5613 = -1.*t5229*t4381;
  t5614 = t5612 + t5613;
  t5627 = t3330*t3243;
  t5628 = -1.*t3818*t5497;
  t5629 = t5627 + t5628;
  t5620 = t3243*t3818*t5614;
  t5623 = t3330*t5614*t5497;
  t5626 = t5620 + t5623;
  t5633 = t3243*t5434;
  t5637 = t5419*t5497;
  t5638 = t5633 + t5637;
  t5649 = t3243*t5419;
  t5650 = -1.*t5434*t5497;
  t5651 = t5649 + t5650;
  t5639 = -1.*t5629*t5638;
  t5644 = -1.*t3243*t3818;
  t5645 = -1.*t3330*t5497;
  t5646 = t5644 + t5645;
  t5652 = -1.*t5646*t5651;
  t5653 = t5639 + t5652;
  t5656 = t5626*t5653;
  t5657 = 0.28121*t5232;
  t5658 = -1.*t5166*t5232;
  t5660 = -0.305*t5229*t4381;
  t5661 = t5657 + t5658 + t5660;
  t5662 = t5661*t5381;
  t5666 = t5626*t5638;
  t5670 = t3330*t3243*t5614;
  t5683 = -1.*t3818*t5614*t5497;
  t5684 = t5670 + t5683;
  t5685 = t5684*t5651;
  t5689 = t5662 + t5666 + t5685;
  t5690 = t5629*t5689;
  t5694 = t5656 + t5690;
  t5716 = t5381*t5487;
  t5720 = t3070*t5684;
  t5721 = t5716 + t5720;
  t5722 = t5661*t5487;
  t5723 = t3070*t5651;
  t5727 = t5722 + t5723;
  t5729 = t3070*t5661;
  t5731 = -1.*t5487*t5651;
  t5732 = t5729 + t5731;
  t5728 = -1.*t3070*t5646*t5727;
  t5733 = t5487*t5646*t5732;
  t5737 = t5639 + t5728 + t5733;
  t5738 = t5721*t5737;
  t5739 = t5721*t5727;
  t5740 = t3070*t5381;
  t5741 = -1.*t5487*t5684;
  t5742 = t5740 + t5741;
  t5743 = t5742*t5732;
  t5744 = t5666 + t5739 + t5743;
  t5745 = t3070*t5646*t5744;
  t5746 = t5738 + t5745;
  t5754 = -1.*t5549*t5487;
  t5755 = -1.*t3070*t5554;
  t5756 = t5754 + t5755;
  t5760 = -1.*t5661*t5487;
  t5761 = -1.*t3070*t5651;
  t5762 = t5760 + t5761;
  t5807 = -1.*t3243*t3818*t5381;
  t5811 = -1.*t3330*t5381*t5497;
  t5812 = t5807 + t5811;
  t5833 = -1.*t3243*t5434;
  t5834 = -1.*t5419*t5497;
  t5835 = t5833 + t5834;
  t5848 = -1.*t3243*t3818*t5614;
  t5849 = -1.*t3330*t5614*t5497;
  t5850 = t5848 + t5849;
  t5837 = -1.*t5646*t5638;
  t5838 = -1.*t5629*t5651;
  t5840 = -1.*t3330*t3243;
  t5841 = t3818*t5497;
  t5842 = t5840 + t5841;
  t5847 = t5684*t5638;
  t5853 = t5626*t5651;
  t5815 = var2[0]*t3070*t5812;
  t5816 = t5565*t5487*t5812;
  t5817 = t5576*t5554;
  t5818 = t5816 + t5817;
  t5822 = var2[1]*t5818;
  t5823 = -1.*t5576*t5487*t5812;
  t5824 = t5565*t5554;
  t5826 = t5823 + t5824;
  t5829 = var2[2]*t5826;
  t5830 = t5684*t5653;
  t5901 = 0.15121*t3818;
  t5903 = -1.*t3818*t5415;
  t5904 = t5901 + t5903;
  t5895 = t5432 + t5417;
  t5843 = -1.*t5842*t5651;
  t5909 = t3243*t5904;
  t5911 = -1.*t5895*t5497;
  t5912 = t5909 + t5911;
  t5914 = t3243*t5895;
  t5915 = t5904*t5497;
  t5919 = t5914 + t5915;
  t5851 = t5850*t5651;
  t5859 = t5646*t5689;
  t5863 = t3070*t5850*t5737;
  t5864 = Power(t3070,2);
  t5866 = Power(t5487,2);
  t5920 = -1.*t5629*t5919;
  t5868 = -1.*t3070*t5842*t5727;
  t5869 = t5487*t5842*t5732;
  t5926 = t5626*t5919;
  t5875 = t3070*t5850*t5727;
  t5878 = -1.*t5487*t5850*t5732;
  t5883 = t3070*t5842*t5744;
  t5969 = -0.305*t4432*t5232;
  t5970 = 0.305*t5229*t4381;
  t5971 = t5969 + t5970;
  t5983 = -1.*t5229*t4432;
  t5984 = -1.*t5232*t4381;
  t5985 = t5983 + t5984;
  t5972 = t3243*t3818*t5971;
  t5973 = t3330*t5971*t5497;
  t5974 = t5972 + t5973;
  t5976 = t3330*t3243*t5971;
  t5977 = -1.*t3818*t5971*t5497;
  t5978 = t5976 + t5977;
  t5986 = t3243*t3818*t5985;
  t5987 = t3330*t5985*t5497;
  t5988 = t5986 + t5987;
  t5975 = -1.*t5629*t5974;
  t5992 = -0.305*t5229*t4432;
  t5993 = t5992 + t5410;
  t6002 = t3330*t3243*t5985;
  t6003 = -1.*t3818*t5985*t5497;
  t6004 = t6002 + t6003;
  t5997 = t5626*t5974;
  t6001 = t5988*t5638;
  t6010 = t5993*t5487;
  t6011 = t3070*t5978;
  t6012 = t6010 + t6011;
  t6014 = t3070*t5993;
  t6015 = -1.*t5487*t5978;
  t6017 = t6014 + t6015;
  t6021 = t5614*t5487;
  t6023 = t3070*t6004;
  t6024 = t6021 + t6023;
  t6042 = t3330*t3243*t5549;
  t6043 = -1.*t3818*t5549*t5497;
  t6044 = t6042 + t6043;
  t6048 = t3243*t3818*t5549;
  t6049 = t3330*t5549*t5497;
  t6050 = t6048 + t6049;
  t6057 = t3070*t5985;
  t6058 = -1.*t5487*t6044;
  t6059 = t6057 + t6058;
  t6068 = t3243*t3818*t5661;
  t6083 = t3330*t5661*t5497;
  t6087 = t6068 + t6083;
  t6090 = t3330*t3243*t5661;
  t6091 = -1.*t3818*t5661*t5497;
  t6095 = t6090 + t6091;
  t6088 = -1.*t5629*t6087;
  t6107 = 0.28121*t5229;
  t6108 = -1.*t5229*t5166;
  t6109 = 0.305*t5232*t4381;
  t6110 = t6107 + t6108 + t6109;
  t6114 = t5626*t6087;
  t6117 = t5568*t5638;
  t6123 = t6110*t5487;
  t6125 = t3070*t6095;
  t6127 = t6123 + t6125;
  t6130 = t3070*t6110;
  t6131 = -1.*t5487*t6095;
  t6134 = t6130 + t6131;
  t6103 = t5661*t5549;
  t6163 = -1.*t5614*t5415;
  t6164 = -1.*t5661*t5381;
  t6165 = t6163 + t6164;
  t6167 = t5549*t6165;
  t6169 = t5415*t5381;
  t6170 = t6103 + t6169;
  t6171 = t5381*t6170;
  t6172 = -0.15121 + t6167 + t6171;
  t6177 = -1.*t3330*t5614*t5419;
  t6178 = -1.*t3818*t5614*t5434;
  t6179 = t6164 + t6177 + t6178;
  t6180 = t5549*t6179;
  t6181 = t3330*t5381*t5419;
  t6183 = t3818*t5381*t5434;
  t6184 = t6103 + t6181 + t6183;
  t6185 = t5381*t6184;
  t6186 = t6180 + t6185;
  t3888 = t3713 + t3829;
  t5496 = t5430 + t3829;
  t6201 = t5565*t5487*t5646;
  t6202 = t5576*t5629;
  t6203 = t6201 + t6202;
  t6206 = -1.*t5576*t5487*t5646;
  t6207 = t5565*t5629;
  t6208 = t6206 + t6207;
  t6192 = t3243*t5565*t5487;
  t6193 = t5576*t5497;
  t6194 = t6192 + t6193;
  t6197 = t5576*t3243;
  t6198 = -1.*t5565*t5487*t5497;
  t6199 = t6197 + t6198;
  t6118 = t5554*t5651;
  t6230 = -1.*t5626*t5638;
  t6231 = -1.*t5684*t5651;
  t6232 = t6164 + t6230 + t6231;
  t6233 = t5568*t6232;
  t6234 = t6103 + t6117 + t6118;
  t6235 = t5626*t6234;
  t6236 = t6233 + t6235;
  t6217 = t3330*t6194;
  t6218 = t3818*t6199;
  t6219 = t6217 + t6218;
  t6142 = t5556*t5727;
  t6143 = t5592*t5732;
  t6248 = -1.*t5721*t5727;
  t6249 = -1.*t5742*t5732;
  t6250 = t6230 + t6248 + t6249;
  t6251 = t5556*t6250;
  t6252 = t6117 + t6142 + t6143;
  t6253 = t5721*t6252;
  t6255 = t6251 + t6253;
  t6239 = t3070*t5232*t5565;
  t6240 = t5229*t6219;
  t6241 = t6239 + t6240;
  t6243 = -1.*t5229*t3070*t5565;
  t6245 = t5232*t6219;
  t6246 = t6243 + t6245;
  t6273 = -1.*t5684*t5638;
  t6275 = -1.*t5626*t5651;
  t6281 = t5554*t5638;
  t6283 = t5568*t5651;
  t6263 = var2[0]*t3070*t5842;
  t6264 = t5565*t5646;
  t6265 = -1.*t5576*t5487*t5842;
  t6266 = t6264 + t6265;
  t6267 = var2[2]*t6266;
  t6268 = t5576*t5646;
  t6269 = t5565*t5487*t5842;
  t6270 = t6268 + t6269;
  t6271 = var2[1]*t6270;
  t6274 = -1.*t5850*t5651;
  t6279 = t5554*t6232;
  t6282 = t5812*t5651;
  t6286 = t5684*t6234;
  t6324 = -1.*t5626*t5919;
  t6291 = -1.*t3070*t5850*t5727;
  t6292 = t5487*t5850*t5732;
  t6328 = t5568*t5919;
  t6298 = t3070*t5812*t5727;
  t6299 = -1.*t5487*t5812*t5732;
  t6302 = t3070*t5812*t6250;
  t6303 = t3070*t5850*t6252;
  t5775 = -1.*t5381*t5487;
  t5776 = -1.*t3070*t5684;
  t5777 = t5775 + t5776;
  t6371 = t5549*t5993;
  t6376 = -1.*t5614*t5661;
  t6386 = Power(t3330,2);
  t6388 = Power(t3818,2);
  t6379 = -1.*t5993*t5381;
  t6405 = t5974*t5568;
  t6409 = -1.*t5626*t5974;
  t6411 = -1.*t5988*t5638;
  t6029 = t3070*t5614;
  t6030 = -1.*t5487*t6004;
  t6031 = t6029 + t6030;
  t6437 = t5661*t5985;
  t6439 = t5549*t6110;
  t6443 = -1.*t5661*t5549;
  t6445 = -1.*t6110*t5381;
  t6041 = t5985*t5487;
  t6045 = t3070*t6044;
  t6046 = t6041 + t6045;
  t6469 = t6087*t5568;
  t6471 = t6050*t5638;
  t6475 = -1.*t5626*t6087;
  t6477 = -1.*t5568*t5638;
  t5948 = 0.28121*t4432;
  t5951 = -1.*t5166*t4432;
  t6509 = Power(t4381,2);
  t6510 = 0.305*t6509;
  t6511 = t5948 + t5951 + t6510;
  t6514 = -0.15121*t5614;
  t6517 = -0.15121*t5549;
  t6518 = t6514 + t6517;
  t6521 = -1.*t3818*t5419;
  t6522 = t3330*t5434;
  t6524 = t6521 + t6522;
  t5957 = var2[0]*t5721;
  t6527 = -1.*t5576*t3243*t5487;
  t6528 = t5565*t5497;
  t6529 = t6527 + t6528;
  t6532 = t3243*t5565;
  t6533 = t5576*t5487*t5497;
  t6534 = t6532 + t6533;
  t5958 = t5565*t5626;
  t5960 = t5576*t5742;
  t5961 = t5958 + t5960;
  t5962 = var2[2]*t5961;
  t5963 = t5576*t5626;
  t5965 = -1.*t5565*t5742;
  t5966 = t5963 + t5965;
  t5968 = var2[1]*t5966;
  t6478 = -1.*t5554*t5651;
  t6548 = t5629*t5638;
  t6549 = t5646*t5651;
  t6550 = t6548 + t6549;
  t6551 = t5568*t6550;
  t6552 = t6443 + t6477 + t6478;
  t6553 = t5629*t6552;
  t6554 = t6551 + t6553;
  t6541 = t3330*t6529;
  t6542 = t3818*t6534;
  t6543 = t6541 + t6542;
  t6494 = -1.*t5556*t5727;
  t6495 = -1.*t5592*t5732;
  t6573 = t3070*t5646*t5727;
  t6574 = -1.*t5487*t5646*t5732;
  t6575 = t6548 + t6573 + t6574;
  t6576 = t5556*t6575;
  t6577 = t6477 + t6494 + t6495;
  t6579 = t3070*t5646*t6577;
  t6580 = t6576 + t6579;
  t6557 = -1.*t5576*t3070*t5232;
  t6558 = t5229*t6543;
  t6559 = t6557 + t6558;
  t6562 = t5229*t5576*t3070;
  t6563 = t5232*t6543;
  t6564 = t6562 + t6563;
  t6607 = t5629*t5974;
  t6614 = -1.*t5974*t5568;
  t6592 = -0.15121*t5985;
  t6593 = -0.15121*t5381;
  t6595 = t6592 + t6593;
  t6596 = var2[12]*t6595;
  t5559 = var2[0]*t5556;
  t5599 = var2[2]*t5597;
  t5611 = var2[1]*t5602;
  t6636 = t5629*t6087;
  t6643 = -1.*t6087*t5568;
  t6646 = -1.*t6050*t5638;
  t6708 = t5646*t5638;
  t6709 = t5629*t5651;
  t6714 = -1.*t5554*t5638;
  t6719 = -1.*t5568*t5651;
  t6693 = var2[0]*t3070*t5850;
  t6694 = t5565*t5487*t5850;
  t6695 = t5576*t5684;
  t6698 = t6694 + t6695;
  t6699 = var2[1]*t6698;
  t6700 = -1.*t5576*t5487*t5850;
  t6701 = t5565*t5684;
  t6704 = t6700 + t6701;
  t6705 = var2[2]*t6704;
  t6706 = t5554*t6550;
  t6710 = t5842*t5651;
  t6715 = -1.*t5812*t5651;
  t6724 = t5646*t6552;
  t6727 = t3070*t5812*t6575;
  t6755 = t5629*t5919;
  t6731 = t3070*t5842*t5727;
  t6732 = -1.*t5487*t5842*t5732;
  t6759 = -1.*t5568*t5919;
  t6737 = -1.*t3070*t5812*t5727;
  t6738 = t5487*t5812*t5732;
  t6741 = t3070*t5842*t6577;
  p_output1[0]=t3070*t3243*t3888 + 0.28121*t5232*t5487 - 1.*t3070*t5496*t5497 - 0.15121*(-1.*t3070*t3243*t3818 - 1.*t3070*t3330*t5497) + 0.28121*t5387*t5515 + 0.50321*t4597*t5520 - 0.50321*t4381*t5535 + 0.19821*(t4432*t5520 + t4381*t5535) + t5559 + t5599 + t5611 + var1[0] + t5746*var2[3] + ((-1.*t5565*t5568 - 1.*t5576*t5592)*var2[1] + t5602*var2[2])*var2[3] + t5694*var2[4] + (t5592*var2[0] - 1.*t5565*t5756*var2[1] + t5576*t5756*var2[2] + (t5737*t5742 - 1.*t5487*t5646*t5744 + t5721*(t5487*t5646*t5727 + t5487*t5646*t5762) + t3070*t5646*(t5721*t5732 + t5727*t5742 + t5742*t5762 + t5732*t5777))*var2[3])*var2[4] + t5381*t5474*var2[5] + (t5815 + t5822 + t5829 + (t5863 + t5721*(t5837 + t5838 - 1.*t5646*t5835*t5864 - 1.*t5646*t5835*t5866 + t5868 + t5869) + t3070*t5646*(t3070*t5721*t5835 - 1.*t5487*t5742*t5835 + t5847 + t5853 + t5875 + t5878) + t5883)*var2[3] + (t5830 + t5626*(-1.*t5646*t5835 + t5837 + t5838 + t5843) + t5629*(t5684*t5835 + t5847 + t5851 + t5853) + t5859)*var2[4])*var2[5] + (t5815 + t5822 + t5829 + (t5863 + t5883 + t5721*(t5837 + t5868 + t5869 - 1.*t5646*t5864*t5912 - 1.*t5646*t5866*t5912 + t5920) + t3070*t5646*(t5847 + t5875 + t5878 + t3070*t5721*t5912 - 1.*t5487*t5742*t5912 + t5926))*var2[3] + (t5830 + t5859 + t5626*(t5837 + t5843 - 1.*t5646*t5912 + t5920) + t5629*(t5847 + t5851 + t5684*t5912 + t5926))*var2[4] + t5381*(t3330*t5419 + t3818*t5434 - 1.*t3330*t5895 + t3818*t5904)*var2[5])*var2[12] + t5199*var2[13] + (t6046*var2[0] + (t5576*t6050 - 1.*t5565*t6059)*var2[1] + (t5565*t6050 + t5576*t6059)*var2[2] + (t5556*t5737 + t5721*(t6088 - 1.*t3070*t5646*t6127 + t5487*t5646*t6134) + t3070*t5646*(t6114 + t6117 + t5721*t6127 + t5742*t6134 + t6142 + t6143))*var2[3] + (t5568*t5653 + t5626*(t6088 - 1.*t5646*t6095) + t5629*(t5684*t6095 + t6103 + t5381*t6110 + t6114 + t6117 + t6118))*var2[4] + t5474*t5549*var2[5])*var2[13] + (t5957 + t5962 + t5968 + (t5721*(t5975 - 1.*t3070*t5646*t6012 + t5487*t5646*t6017) + t5737*t6024 + t3070*t5646*(t5997 + t6001 + t5721*t6012 + t5742*t6017 + t5727*t6024 + t5732*t6031))*var2[3] + (t5626*(t5975 - 1.*t5646*t5978) + t5653*t5988 + t5629*(t5614*t5661 + t5684*t5978 + t5381*t5993 + t5997 + t6001 + t5651*t6004))*var2[4] + t5474*t5614*var2[5] + (-0.305*Power(t4432,2) + t5948 + t5951)*var2[13])*var2[14] + t5556*var3[0] + t5602*var3[1] + t5597*var3[2] + t5746*var3[3] + t5694*var3[4] + t5381*t5474*var3[5] + t5199*var3[13] - 1.*var4[0];
  p_output1[1]=-0.28121*t3070*t5232*t5565 + t3888*t6194 + t5496*t6199 - 0.15121*(-1.*t3818*t6194 + t3330*t6199) + 0.28121*t5387*t6219 + 0.50321*t4597*t6241 - 0.50321*t4381*t6246 + 0.19821*(t4432*t6241 + t4381*t6246) + var1[1] + t3070*t5646*var2[0] + t6203*var2[1] + t6208*var2[2] + t6255*var2[3] + ((-1.*t5565*t5629 + t5487*t5576*t5646)*var2[1] + t6203*var2[2])*var2[3] + t6236*var2[4] + (-1.*t5487*t5646*var2[0] + t3070*t5565*t5646*var2[1] - 1.*t3070*t5576*t5646*var2[2] + (t5721*(t5592*t5727 + t5556*t5732 + t5732*t5756 + t5592*t5762) + t5556*(-1.*t5721*t5732 - 1.*t5727*t5742 - 1.*t5742*t5762 - 1.*t5732*t5777) + t5592*t6250 + t5742*t6252)*var2[3])*var2[4] + t6186*var2[5] + (t6263 + t6267 + t6271 + (t5556*(-1.*t3070*t5721*t5835 + t5487*t5742*t5835 + t6273 + t6275 + t6291 + t6292) + t5721*(t3070*t5556*t5835 - 1.*t5487*t5592*t5835 + t6281 + t6283 + t6298 + t6299) + t6302 + t6303)*var2[3] + (t5568*(-1.*t5684*t5835 + t6273 + t6274 + t6275) + t6279 + t5626*(t5554*t5835 + t6281 + t6282 + t6283) + t6286)*var2[4])*var2[5] + t6172*var2[12] + (t6263 + t6267 + t6271 + (t6302 + t6303 + t5556*(-1.*t3070*t5721*t5912 + t5487*t5742*t5912 + t6273 + t6291 + t6292 + t6324) + t5721*(t3070*t5556*t5912 - 1.*t5487*t5592*t5912 + t6281 + t6298 + t6299 + t6328))*var2[3] + (t6279 + t6286 + t5568*(-1.*t5684*t5912 + t6273 + t6274 + t6324) + t5626*(t5554*t5912 + t6281 + t6282 + t6328))*var2[4] + (t5381*(-1.*t3818*t5381*t5419 + t3330*t5381*t5434 + t3818*t5381*t5895 + t3330*t5381*t5904) + t5549*(t3818*t5419*t5614 - 1.*t3330*t5434*t5614 - 1.*t3818*t5614*t5895 - 1.*t3330*t5614*t5904))*var2[5])*var2[12] + ((t6046*t6250 + t5556*t6252 + t5721*(t5727*t6046 + t5732*t6059 + t5556*t6127 + t5592*t6134 + t6469 + t6471) + t5556*(-1.*t5721*t6127 - 1.*t5742*t6134 + t6475 + t6477 + t6494 + t6495))*var2[3] + (t6050*t6232 + t5568*t6234 + t5626*(t5651*t6044 + t5554*t6095 + t6437 + t6439 + t6469 + t6471) + t5568*(-1.*t5684*t6095 + t6443 + t6445 + t6475 + t6477 + t6478))*var2[4] + (t5985*t6179 + t5549*t6184 + t5381*(t3330*t5419*t5549 + t3818*t5434*t5549 + t5381*t5661*t6386 + t5381*t5661*t6388 + t6437 + t6439) + t5549*(-1.*t3330*t5381*t5419 - 1.*t3818*t5381*t5434 - 1.*t5614*t5661*t6386 - 1.*t5614*t5661*t6388 + t6443 + t6445))*var2[5] + (t5985*t6165 + t5549*t6170 + t5381*(t5415*t5549 + t5662 + t6437 + t6439) + t5549*(-1.*t5381*t5415 + t6376 + t6443 + t6445))*var2[12])*var2[13] + ((t5721*t6250 + t6024*t6252 + t5721*(t5666 + t5739 + t5743 + t5556*t6012 + t5592*t6017 + t6405) + t5556*(-1.*t5721*t6012 - 1.*t5742*t6017 - 1.*t5727*t6024 - 1.*t5732*t6031 + t6409 + t6411))*var2[3] + (t5626*t6232 + t5988*t6234 + t5626*(t5662 + t5666 + t5685 + t5554*t5978 + t6371 + t6405) + t5568*(-1.*t5684*t5978 - 1.*t5651*t6004 + t6376 + t6379 + t6409 + t6411))*var2[4] + (t5381*t6179 + t5614*t6184 + t5381*(t3330*t5419*t5614 + t3818*t5434*t5614 + t5662 + t6371 + t5381*t5971*t6386 + t5381*t5971*t6388) + t5549*(-1.*t3330*t5419*t5985 - 1.*t3818*t5434*t5985 + t6376 + t6379 - 1.*t5614*t5971*t6386 - 1.*t5614*t5971*t6388))*var2[5] + (t5381*t6165 + t5614*t6170 + t5381*(t5415*t5614 + t5662 + t5381*t5971 + t6371) + t5549*(-1.*t5614*t5971 - 1.*t5415*t5985 + t6376 + t6379))*var2[12])*var2[14] + t3070*t5646*var3[0] + t6203*var3[1] + t6208*var3[2] + t6255*var3[3] + t6236*var3[4] + t6186*var3[5] + t6172*var3[12] - 1.*var4[1];
  p_output1[2]=0.28121*t3070*t5232*t5576 + t5957 + t5962 + t5968 + t3888*t6529 + t5496*t6534 - 0.15121*(-1.*t3818*t6529 + t3330*t6534) + 0.28121*t5387*t6543 + 0.50321*t4597*t6559 - 0.50321*t4381*t6564 + 0.19821*(t4432*t6559 + t4381*t6564) + var1[2] + t6580*var2[3] + ((-1.*t5565*t5626 - 1.*t5576*t5742)*var2[1] + t5966*var2[2])*var2[3] + t6554*var2[4] + (t5742*var2[0] - 1.*t5565*t5777*var2[1] + t5576*t5777*var2[2] + (t3070*t5646*(-1.*t5592*t5727 - 1.*t5556*t5732 - 1.*t5732*t5756 - 1.*t5592*t5762) + t5556*(-1.*t5487*t5646*t5727 - 1.*t5487*t5646*t5762) + t5592*t6575 - 1.*t5487*t5646*t6577)*var2[3])*var2[4] + t5549*t6524*var2[5] + (t6693 + t6699 + t6705 + (t6727 + t5556*(t5646*t5835*t5864 + t5646*t5835*t5866 + t6708 + t6709 + t6731 + t6732) + t3070*t5646*(-1.*t3070*t5556*t5835 + t5487*t5592*t5835 + t6714 + t6719 + t6737 + t6738) + t6741)*var2[3] + (t6706 + t5568*(t5646*t5835 + t6708 + t6709 + t6710) + t5629*(-1.*t5554*t5835 + t6714 + t6715 + t6719) + t6724)*var2[4])*var2[5] + t6518*var2[12] + (t6693 + t6699 + t6705 + (t6727 + t6741 + t5556*(t5646*t5864*t5912 + t5646*t5866*t5912 + t6708 + t6731 + t6732 + t6755) + t3070*t5646*(-1.*t3070*t5556*t5912 + t5487*t5592*t5912 + t6714 + t6737 + t6738 + t6759))*var2[3] + (t6706 + t6724 + t5568*(t5646*t5912 + t6708 + t6710 + t6755) + t5629*(-1.*t5554*t5912 + t6714 + t6715 + t6759))*var2[4] + t5549*(-1.*t3330*t5419 - 1.*t3818*t5434 + t3330*t5895 - 1.*t3818*t5904)*var2[5])*var2[12] + t6511*var2[13] + (t5559 + t5599 + t5611 + t6596 + (t6046*t6575 + t5556*(t3070*t5646*t6127 - 1.*t5487*t5646*t6134 + t6636) + t3070*t5646*(-1.*t5727*t6046 - 1.*t5732*t6059 - 1.*t5556*t6127 - 1.*t5592*t6134 + t6643 + t6646))*var2[3] + (t6050*t6550 + t5568*(t5646*t6095 + t6636) + t5629*(-1.*t5661*t5985 - 1.*t5651*t6044 - 1.*t5554*t6095 - 1.*t5549*t6110 + t6643 + t6646))*var2[4] + t5985*t6524*var2[5])*var2[13] - 0.305*var2[14] + (t6596 + t6024*var2[0] + (t5576*t5988 - 1.*t5565*t6031)*var2[1] + (t5565*t5988 + t5576*t6031)*var2[2] + (t5721*t6575 + t5556*(t3070*t5646*t6012 - 1.*t5487*t5646*t6017 + t6607) + t3070*t5646*(-1.*t5556*t6012 - 1.*t5592*t6017 + t6230 + t6248 + t6249 + t6614))*var2[3] + (t5626*t6550 + t5568*(t5646*t5978 + t6607) + t5629*(-1.*t5554*t5978 - 1.*t5549*t5993 + t6164 + t6230 + t6231 + t6614))*var2[4] + t5381*t6524*var2[5] + (-0.28121*t4381 + 0.305*t4381*t4432 + t4381*t5166)*var2[13])*var2[14] + t5721*var3[0] + t5966*var3[1] + t5961*var3[2] + t6580*var3[3] + t6554*var3[4] + t5549*t6524*var3[5] + t6518*var3[12] + t6511*var3[13] - 0.305*var3[14] - 1.*var4[2];
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "ddh_FrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void ddh_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
