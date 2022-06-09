/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 18:59:43 GMT+02:00
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
  double t5603;
  double t5604;
  double t5608;
  double t5609;
  double t5613;
  double t5617;
  double t5618;
  double t5620;
  double t5591;
  double t5602;
  double t5621;
  double t5625;
  double t5619;
  double t5622;
  double t5623;
  double t5563;
  double t5626;
  double t5627;
  double t5662;
  double t5666;
  double t5667;
  double t5668;
  double t5670;
  double t5671;
  double t5672;
  double t5673;
  double t5674;
  double t5685;
  double t5687;
  double t5688;
  double t5690;
  double t5692;
  double t5693;
  double t5702;
  double t5703;
  double t5704;
  double t5706;
  double t5707;
  double t5708;
  double t5711;
  double t5712;
  double t5713;
  double t5714;
  double t5715;
  double t5716;
  double t5725;
  double t5726;
  double t5727;
  double t5735;
  double t5736;
  double t5737;
  double t5738;
  double t5739;
  double t5744;
  double t5745;
  double t5746;
  double t5747;
  double t5748;
  double t5749;
  double t5750;
  double t5751;
  double t5752;
  double t5734;
  double t5740;
  double t5741;
  double t5742;
  double t5753;
  double t5754;
  double t5755;
  double t5756;
  double t5757;
  double t5758;
  double t5759;
  double t5760;
  double t5761;
  double t5765;
  double t5766;
  double t5767;
  double t5743;
  double t5762;
  double t5763;
  double t5776;
  double t5777;
  double t5778;
  double t5731;
  double t5732;
  double t5733;
  double t5771;
  double t5772;
  double t5773;
  double t5784;
  double t5785;
  double t5786;
  double t5802;
  double t5803;
  double t5804;
  double t5856;
  double t5857;
  double t5858;
  double t5774;
  double t5871;
  double t5872;
  double t5873;
  double t5791;
  double t5885;
  double t5886;
  double t5887;
  double t5775;
  double t5779;
  double t5780;
  double t5875;
  double t5876;
  double t5877;
  double t5878;
  double t5879;
  double t5884;
  double t5889;
  double t5792;
  double t5793;
  double t5794;
  double t5811;
  double t5822;
  double t5927;
  double t5929;
  double t5937;
  double t5939;
  double t5812;
  double t5813;
  double t5814;
  double t5823;
  double t5824;
  double t5825;
  double t5837;
  double t5848;
  double t5838;
  double t5839;
  double t5840;
  double t5899;
  double t5901;
  double t5978;
  double t5979;
  double t5984;
  double t5986;
  double t5849;
  double t5850;
  double t5851;
  double t5859;
  double t5860;
  double t5861;
  double t5862;
  double t5863;
  double t5864;
  double t5865;
  double t5866;
  double t5867;
  double t5868;
  double t5869;
  double t5870;
  double t6013;
  double t6014;
  double t6016;
  double t6017;
  double t6018;
  double t5880;
  double t6023;
  double t6024;
  double t6025;
  double t6027;
  double t6028;
  double t6029;
  double t5888;
  double t5892;
  double t5893;
  double t5894;
  double t5895;
  double t5898;
  double t6030;
  double t5903;
  double t5904;
  double t6034;
  double t5909;
  double t5910;
  double t5913;
  double t5917;
  double t5918;
  double t5919;
  double t5920;
  double t5921;
  double t5922;
  double t5923;
  double t5924;
  double t5925;
  double t5928;
  double t5932;
  double t5933;
  double t5934;
  double t5935;
  double t5938;
  double t5942;
  double t5943;
  double t5944;
  double t5945;
  double t6065;
  double t5950;
  double t5951;
  double t6069;
  double t5956;
  double t5957;
  double t5960;
  double t5961;
  double t5965;
  double t5966;
  double t5967;
  double t5968;
  double t5969;
  double t5970;
  double t5971;
  double t5972;
  double t5973;
  double t5974;
  double t5975;
  double t5976;
  double t5980;
  double t5985;
  double t5989;
  double t5990;
  double t5991;
  double t5992;
  double t5995;
  double t6092;
  double t5998;
  double t5999;
  double t6096;
  double t6004;
  double t6005;
  double t6008;
  double t6112;
  double t6113;
  double t6114;
  double t6116;
  double t6117;
  double t6118;
  double t6126;
  double t6127;
  double t6128;
  double t6130;
  double t6131;
  double t6132;
  double t6140;
  double t6141;
  double t6142;
  double t6144;
  double t6145;
  double t6146;
  double t6143;
  double t6151;
  double t6152;
  double t6153;
  double t6154;
  double t6156;
  double t6162;
  double t6163;
  double t6164;
  double t6166;
  double t6167;
  double t6168;
  double t6183;
  double t6185;
  double t6202;
  double t6204;
  double t6193;
  double t6115;
  double t6119;
  double t6120;
  double t6223;
  double t6225;
  double t6229;
  double t5679;
  double t5681;
  double t5682;
  double t6265;
  double t6272;
  double t6274;
  double t6122;
  double t6123;
  double t6124;
  double t5720;
  double t5721;
  double t5722;
  double t6307;
  double t6308;
  double t6309;
  double t6310;
  double t6311;
  double t6312;
  double t6314;
  double t6315;
  double t6316;
  double t6320;
  double t6321;
  double t6322;
  double t6313;
  double t6325;
  double t6326;
  double t6331;
  double t6332;
  double t6333;
  double t6328;
  double t6339;
  double t6340;
  double t6341;
  double t6343;
  double t6344;
  double t6345;
  double t6330;
  double t6349;
  double t6350;
  double t6351;
  double t6180;
  double t6181;
  double t6188;
  double t6189;
  double t6191;
  double t6198;
  double t6199;
  double t6200;
  double t6367;
  double t6374;
  double t6216;
  double t6217;
  double t6218;
  double t6396;
  double t6400;
  double t6402;
  double t6356;
  double t6357;
  double t6358;
  double t6251;
  double t6252;
  double t6253;
  double t6254;
  double t6255;
  double t6256;
  double t6257;
  double t6439;
  double t6445;
  t5603 = Cos(var1[7]);
  t5604 = Cos(var1[8]);
  t5608 = t5603*t5604;
  t5609 = Sin(var1[7]);
  t5613 = Sin(var1[8]);
  t5617 = t5609*t5613;
  t5618 = t5608 + t5617;
  t5620 = Cos(var1[5]);
  t5591 = Cos(var1[6]);
  t5602 = Sin(var1[5]);
  t5621 = Sin(var1[6]);
  t5625 = Cos(var1[3]);
  t5619 = t5591*t5602*t5618;
  t5622 = t5620*t5621*t5618;
  t5623 = t5619 + t5622;
  t5563 = Sin(var1[3]);
  t5626 = Cos(var1[4]);
  t5627 = -1.*t5604*t5609;
  t5662 = t5603*t5613;
  t5666 = t5627 + t5662;
  t5667 = t5626*t5666;
  t5668 = Sin(var1[4]);
  t5670 = t5620*t5591*t5618;
  t5671 = -1.*t5602*t5621*t5618;
  t5672 = t5670 + t5671;
  t5673 = -1.*t5668*t5672;
  t5674 = t5667 + t5673;
  t5685 = -1.*t5591*t5602;
  t5687 = -1.*t5620*t5621;
  t5688 = t5685 + t5687;
  t5690 = t5620*t5591;
  t5692 = -1.*t5602*t5621;
  t5693 = t5690 + t5692;
  t5702 = t5604*t5609;
  t5703 = -1.*t5603*t5613;
  t5704 = t5702 + t5703;
  t5706 = t5591*t5602*t5704;
  t5707 = t5620*t5621*t5704;
  t5708 = t5706 + t5707;
  t5711 = t5626*t5618;
  t5712 = t5620*t5591*t5704;
  t5713 = -1.*t5602*t5621*t5704;
  t5714 = t5712 + t5713;
  t5715 = -1.*t5668*t5714;
  t5716 = t5711 + t5715;
  t5725 = -1.*t5668*t5666;
  t5726 = -1.*t5626*t5672;
  t5727 = t5725 + t5726;
  t5735 = -1.*t5604;
  t5736 = 1. + t5735;
  t5737 = 0.50321*t5736;
  t5738 = 0.19821*t5604;
  t5739 = t5737 + t5738;
  t5744 = -1.*t5591;
  t5745 = 1. + t5744;
  t5746 = 0.15121*t5745;
  t5747 = -1.*t5603;
  t5748 = 1. + t5747;
  t5749 = 0.28121*t5748;
  t5750 = t5603*t5739;
  t5751 = -0.305*t5609*t5613;
  t5752 = t5749 + t5750 + t5751;
  t5734 = 0.28121*t5609;
  t5740 = -1.*t5739*t5609;
  t5741 = -0.305*t5603*t5613;
  t5742 = t5734 + t5740 + t5741;
  t5753 = t5591*t5752;
  t5754 = t5746 + t5753;
  t5755 = t5620*t5754;
  t5756 = 0.15121*t5591;
  t5757 = -0.15121*t5621;
  t5758 = t5621*t5752;
  t5759 = t5746 + t5756 + t5757 + t5758;
  t5760 = -1.*t5602*t5759;
  t5761 = t5755 + t5760;
  t5765 = t5668*t5742;
  t5766 = t5626*t5761;
  t5767 = t5765 + t5766;
  t5743 = -1.*t5668*t5742;
  t5762 = -1.*t5626*t5761;
  t5763 = t5743 + t5762;
  t5776 = t5626*t5742;
  t5777 = -1.*t5668*t5761;
  t5778 = t5776 + t5777;
  t5731 = t5668*t5618;
  t5732 = t5626*t5714;
  t5733 = t5731 + t5732;
  t5771 = t5602*t5754;
  t5772 = t5620*t5759;
  t5773 = t5771 + t5772;
  t5784 = -1.*t5668*t5618;
  t5785 = -1.*t5626*t5714;
  t5786 = t5784 + t5785;
  t5802 = t5668*t5666;
  t5803 = t5626*t5672;
  t5804 = t5802 + t5803;
  t5856 = -1.*t5591*t5602*t5618;
  t5857 = -1.*t5620*t5621*t5618;
  t5858 = t5856 + t5857;
  t5774 = -1.*t5693*t5773;
  t5871 = -1.*t5602*t5754;
  t5872 = -1.*t5620*t5759;
  t5873 = t5871 + t5872;
  t5791 = t5708*t5773;
  t5885 = -1.*t5591*t5602*t5704;
  t5886 = -1.*t5620*t5621*t5704;
  t5887 = t5885 + t5886;
  t5775 = -1.*t5626*t5688*t5767;
  t5779 = t5668*t5688*t5778;
  t5780 = t5774 + t5775 + t5779;
  t5875 = -1.*t5688*t5773;
  t5876 = -1.*t5693*t5761;
  t5877 = -1.*t5620*t5591;
  t5878 = t5602*t5621;
  t5879 = t5877 + t5878;
  t5884 = t5714*t5773;
  t5889 = t5708*t5761;
  t5792 = t5733*t5767;
  t5793 = t5716*t5778;
  t5794 = t5791 + t5792 + t5793;
  t5811 = -1.*t5708*t5773;
  t5822 = t5623*t5773;
  t5927 = -1.*t5714*t5773;
  t5929 = -1.*t5708*t5761;
  t5937 = t5672*t5773;
  t5939 = t5623*t5761;
  t5812 = -1.*t5733*t5767;
  t5813 = -1.*t5716*t5778;
  t5814 = t5811 + t5812 + t5813;
  t5823 = t5804*t5767;
  t5824 = t5674*t5778;
  t5825 = t5822 + t5823 + t5824;
  t5837 = t5693*t5773;
  t5848 = -1.*t5623*t5773;
  t5838 = t5626*t5688*t5767;
  t5839 = -1.*t5668*t5688*t5778;
  t5840 = t5837 + t5838 + t5839;
  t5899 = Power(t5626,2);
  t5901 = Power(t5668,2);
  t5978 = t5688*t5773;
  t5979 = t5693*t5761;
  t5984 = -1.*t5672*t5773;
  t5986 = -1.*t5623*t5761;
  t5849 = -1.*t5804*t5767;
  t5850 = -1.*t5674*t5778;
  t5851 = t5848 + t5849 + t5850;
  t5859 = var2[0]*t5626*t5858;
  t5860 = t5563*t5668*t5858;
  t5861 = t5625*t5672;
  t5862 = t5860 + t5861;
  t5863 = var2[1]*t5862;
  t5864 = -1.*t5625*t5668*t5858;
  t5865 = t5563*t5672;
  t5866 = t5864 + t5865;
  t5867 = var2[2]*t5866;
  t5868 = -1.*t5688*t5761;
  t5869 = t5774 + t5868;
  t5870 = t5714*t5869;
  t6013 = -0.15121*t5591;
  t6014 = t6013 + t5753;
  t6016 = 0.15121*t5621;
  t6017 = -1.*t5621*t5752;
  t6018 = t6016 + t6017;
  t5880 = -1.*t5879*t5761;
  t6023 = -1.*t5602*t6014;
  t6024 = t5620*t6018;
  t6025 = t6023 + t6024;
  t6027 = t5620*t6014;
  t6028 = t5602*t6018;
  t6029 = t6027 + t6028;
  t5888 = t5887*t5761;
  t5892 = t5742*t5618;
  t5893 = t5714*t5761;
  t5894 = t5892 + t5791 + t5893;
  t5895 = t5688*t5894;
  t5898 = t5626*t5887*t5780;
  t6030 = -1.*t5693*t6029;
  t5903 = -1.*t5626*t5879*t5767;
  t5904 = t5668*t5879*t5778;
  t6034 = t5708*t6029;
  t5909 = t5626*t5887*t5767;
  t5910 = -1.*t5668*t5887*t5778;
  t5913 = t5626*t5879*t5794;
  t5917 = var2[0]*t5626*t5879;
  t5918 = t5563*t5688;
  t5919 = -1.*t5625*t5668*t5879;
  t5920 = t5918 + t5919;
  t5921 = var2[2]*t5920;
  t5922 = t5625*t5688;
  t5923 = t5563*t5668*t5879;
  t5924 = t5922 + t5923;
  t5925 = var2[1]*t5924;
  t5928 = -1.*t5887*t5761;
  t5932 = -1.*t5742*t5618;
  t5933 = -1.*t5714*t5761;
  t5934 = t5932 + t5811 + t5933;
  t5935 = t5672*t5934;
  t5938 = t5858*t5761;
  t5942 = t5742*t5666;
  t5943 = t5672*t5761;
  t5944 = t5942 + t5822 + t5943;
  t5945 = t5714*t5944;
  t6065 = -1.*t5708*t6029;
  t5950 = -1.*t5626*t5887*t5767;
  t5951 = t5668*t5887*t5778;
  t6069 = t5623*t6029;
  t5956 = t5626*t5858*t5767;
  t5957 = -1.*t5668*t5858*t5778;
  t5960 = t5626*t5858*t5814;
  t5961 = t5626*t5887*t5825;
  t5965 = var2[0]*t5626*t5887;
  t5966 = t5563*t5668*t5887;
  t5967 = t5625*t5714;
  t5968 = t5966 + t5967;
  t5969 = var2[1]*t5968;
  t5970 = -1.*t5625*t5668*t5887;
  t5971 = t5563*t5714;
  t5972 = t5970 + t5971;
  t5973 = var2[2]*t5972;
  t5974 = t5688*t5761;
  t5975 = t5837 + t5974;
  t5976 = t5672*t5975;
  t5980 = t5879*t5761;
  t5985 = -1.*t5858*t5761;
  t5989 = -1.*t5742*t5666;
  t5990 = -1.*t5672*t5761;
  t5991 = t5989 + t5848 + t5990;
  t5992 = t5688*t5991;
  t5995 = t5626*t5858*t5840;
  t6092 = t5693*t6029;
  t5998 = t5626*t5879*t5767;
  t5999 = -1.*t5668*t5879*t5778;
  t6096 = -1.*t5623*t6029;
  t6004 = -1.*t5626*t5858*t5767;
  t6005 = t5668*t5858*t5778;
  t6008 = t5626*t5879*t5851;
  t6112 = -1.*t5603*t5604;
  t6113 = -1.*t5609*t5613;
  t6114 = t6112 + t6113;
  t6116 = t5620*t5591*t5666;
  t6117 = -1.*t5602*t5621*t5666;
  t6118 = t6116 + t6117;
  t6126 = t5591*t5602*t5666;
  t6127 = t5620*t5621*t5666;
  t6128 = t6126 + t6127;
  t6130 = t5626*t6114;
  t6131 = -1.*t5668*t6118;
  t6132 = t6130 + t6131;
  t6140 = t5591*t5602*t5742;
  t6141 = t5620*t5621*t5742;
  t6142 = t6140 + t6141;
  t6144 = t5620*t5591*t5742;
  t6145 = -1.*t5602*t5621*t5742;
  t6146 = t6144 + t6145;
  t6143 = -1.*t5693*t6142;
  t6151 = 0.28121*t5603;
  t6152 = -1.*t5603*t5739;
  t6153 = 0.305*t5609*t5613;
  t6154 = t6151 + t6152 + t6153;
  t6156 = t5708*t6142;
  t6162 = t5668*t6154;
  t6163 = t5626*t6146;
  t6164 = t6162 + t6163;
  t6166 = t5626*t6154;
  t6167 = -1.*t5668*t6146;
  t6168 = t6166 + t6167;
  t6183 = t5742*t6114;
  t6185 = t5666*t6154;
  t6202 = Power(t5591,2);
  t6204 = Power(t5621,2);
  t6193 = -1.*t6154*t5618;
  t6115 = t5668*t6114;
  t6119 = t5626*t6118;
  t6120 = t6115 + t6119;
  t6223 = t6142*t5623;
  t6225 = t6128*t5773;
  t6229 = -1.*t5708*t6142;
  t5679 = t5625*t5623;
  t5681 = -1.*t5563*t5674;
  t5682 = t5679 + t5681;
  t6265 = t5693*t6142;
  t6272 = -1.*t6142*t5623;
  t6274 = -1.*t6128*t5773;
  t6122 = t5621*t5754;
  t6123 = -1.*t5591*t5759;
  t6124 = t6122 + t6123;
  t5720 = t5625*t5708;
  t5721 = -1.*t5563*t5716;
  t5722 = t5720 + t5721;
  t6307 = -0.305*t5604*t5609;
  t6308 = 0.305*t5603*t5613;
  t6309 = t6307 + t6308;
  t6310 = t5591*t5602*t6309;
  t6311 = t5620*t5621*t6309;
  t6312 = t6310 + t6311;
  t6314 = t5620*t5591*t6309;
  t6315 = -1.*t5602*t5621*t6309;
  t6316 = t6314 + t6315;
  t6320 = t5591*t5602*t6114;
  t6321 = t5620*t5621*t6114;
  t6322 = t6320 + t6321;
  t6313 = -1.*t5693*t6312;
  t6325 = -0.305*t5603*t5604;
  t6326 = t6325 + t5751;
  t6331 = t5620*t5591*t6114;
  t6332 = -1.*t5602*t5621*t6114;
  t6333 = t6331 + t6332;
  t6328 = t5708*t6312;
  t6339 = t5668*t6326;
  t6340 = t5626*t6316;
  t6341 = t6339 + t6340;
  t6343 = t5626*t6326;
  t6344 = -1.*t5668*t6316;
  t6345 = t6343 + t6344;
  t6330 = t6322*t5773;
  t6349 = t5668*t5704;
  t6350 = t5626*t6333;
  t6351 = t6349 + t6350;
  t6180 = -1.*t5704*t5752;
  t6181 = t6180 + t5932;
  t6188 = t5752*t5618;
  t6189 = t5942 + t6188;
  t6191 = -1.*t5704*t5742;
  t6198 = -1.*t5591*t5704*t5754;
  t6199 = -1.*t5621*t5704*t5759;
  t6200 = t5932 + t6198 + t6199;
  t6367 = t5666*t6326;
  t6374 = -1.*t6326*t5618;
  t6216 = t5591*t5618*t5754;
  t6217 = t5621*t5618*t5759;
  t6218 = t5942 + t6216 + t6217;
  t6396 = t6312*t5623;
  t6400 = -1.*t5708*t6312;
  t6402 = -1.*t6322*t5773;
  t6356 = t5626*t5704;
  t6357 = -1.*t5668*t6333;
  t6358 = t6356 + t6357;
  t6251 = 0.15121*t6114;
  t6252 = 0.15121*t5618;
  t6253 = t6251 + t6252;
  t6254 = var2[6]*t6253;
  t6255 = -1.*t5621*t5754;
  t6256 = t5591*t5759;
  t6257 = t6255 + t6256;
  t6439 = t5693*t6312;
  t6445 = -1.*t6312*t5623;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t5563*t5623 - 1.*t5625*t5674)*var2[1] + t5682*var2[2];
  p_output1[10]=(t5625*t5668*t5688 - 1.*t5563*t5693)*var2[1] + (t5563*t5668*t5688 + t5625*t5693)*var2[2];
  p_output1[11]=(-1.*t5563*t5708 - 1.*t5625*t5716)*var2[1] + t5722*var2[2];
  p_output1[12]=t5674*var2[0] - 1.*t5563*t5727*var2[1] + t5625*t5727*var2[2] + (t5733*(t5668*t5688*t5763 + t5668*t5688*t5767) + t5716*t5780 + t5626*t5688*(t5716*t5763 + t5716*t5767 + t5733*t5778 + t5778*t5786) - 1.*t5668*t5688*t5794)*var2[3];
  p_output1[13]=-1.*t5668*t5688*var2[0] + t5563*t5626*t5688*var2[1] - 1.*t5625*t5626*t5688*var2[2] + ((-1.*t5716*t5763 - 1.*t5716*t5767 - 1.*t5733*t5778 - 1.*t5778*t5786)*t5804 + t5733*(t5674*t5763 + t5674*t5767 + t5727*t5778 + t5778*t5804) + t5674*t5814 + t5716*t5825)*var2[3];
  p_output1[14]=t5716*var2[0] - 1.*t5563*t5786*var2[1] + t5625*t5786*var2[2] + ((-1.*t5668*t5688*t5763 - 1.*t5668*t5688*t5767)*t5804 + t5626*t5688*(-1.*t5674*t5763 - 1.*t5674*t5767 - 1.*t5727*t5778 - 1.*t5778*t5804) + t5674*t5840 - 1.*t5668*t5688*t5851)*var2[3];
  p_output1[15]=t5859 + t5863 + t5867 + (t5898 + t5733*(t5875 + t5876 - 1.*t5688*t5873*t5899 - 1.*t5688*t5873*t5901 + t5903 + t5904) + t5626*t5688*(-1.*t5668*t5716*t5873 + t5626*t5733*t5873 + t5884 + t5889 + t5909 + t5910) + t5913)*var2[3] + (t5870 + t5708*(-1.*t5688*t5873 + t5875 + t5876 + t5880) + t5693*(t5714*t5873 + t5884 + t5888 + t5889) + t5895)*var2[4];
  p_output1[16]=t5917 + t5921 + t5925 + (t5804*(t5668*t5716*t5873 - 1.*t5626*t5733*t5873 + t5927 + t5929 + t5950 + t5951) + t5733*(-1.*t5668*t5674*t5873 + t5626*t5804*t5873 + t5937 + t5939 + t5956 + t5957) + t5960 + t5961)*var2[3] + (t5623*(-1.*t5714*t5873 + t5927 + t5928 + t5929) + t5935 + t5708*(t5672*t5873 + t5937 + t5938 + t5939) + t5945)*var2[4];
  p_output1[17]=t5965 + t5969 + t5973 + (t5995 + t5804*(t5688*t5873*t5899 + t5688*t5873*t5901 + t5978 + t5979 + t5998 + t5999) + t5626*t5688*(t5668*t5674*t5873 - 1.*t5626*t5804*t5873 + t5984 + t5986 + t6004 + t6005) + t6008)*var2[3] + (t5976 + t5623*(t5688*t5873 + t5978 + t5979 + t5980) + t5693*(-1.*t5672*t5873 + t5984 + t5985 + t5986) + t5992)*var2[4];
  p_output1[18]=t5859 + t5863 + t5867 + (t5898 + t5913 + t5733*(t5875 + t5903 + t5904 - 1.*t5688*t5899*t6025 - 1.*t5688*t5901*t6025 + t6030) + t5626*t5688*(t5884 + t5909 + t5910 - 1.*t5668*t5716*t6025 + t5626*t5733*t6025 + t6034))*var2[3] + (t5870 + t5895 + t5708*(t5875 + t5880 - 1.*t5688*t6025 + t6030) + t5693*(t5884 + t5888 + t5714*t6025 + t6034))*var2[4] + t5618*(t5591*t5754 + t5621*t5759 - 1.*t5591*t6014 + t5621*t6018)*var2[5];
  p_output1[19]=t5917 + t5921 + t5925 + (t5960 + t5961 + t5804*(t5927 + t5950 + t5951 + t5668*t5716*t6025 - 1.*t5626*t5733*t6025 + t6065) + t5733*(t5937 + t5956 + t5957 - 1.*t5668*t5674*t6025 + t5626*t5804*t6025 + t6069))*var2[3] + (t5935 + t5945 + t5623*(t5927 + t5928 - 1.*t5714*t6025 + t6065) + t5708*(t5937 + t5938 + t5672*t6025 + t6069))*var2[4] + (t5618*(-1.*t5618*t5621*t5754 + t5591*t5618*t5759 + t5618*t5621*t6014 + t5591*t5618*t6018) + t5666*(t5621*t5704*t5754 - 1.*t5591*t5704*t5759 - 1.*t5621*t5704*t6014 - 1.*t5591*t5704*t6018))*var2[5];
  p_output1[20]=t5965 + t5969 + t5973 + (t5995 + t6008 + t5804*(t5978 + t5998 + t5999 + t5688*t5899*t6025 + t5688*t5901*t6025 + t6092) + t5626*t5688*(t5984 + t6004 + t6005 + t5668*t5674*t6025 - 1.*t5626*t5804*t6025 + t6096))*var2[3] + (t5976 + t5992 + t5623*(t5978 + t5980 + t5688*t6025 + t6092) + t5693*(t5984 + t5985 - 1.*t5672*t6025 + t6096))*var2[4] + t5666*(-1.*t5591*t5754 - 1.*t5621*t5759 + t5591*t6014 - 1.*t5621*t6018)*var2[5];
  p_output1[21]=t6120*var2[0] + (t5625*t6128 - 1.*t5563*t6132)*var2[1] + (t5563*t6128 + t5625*t6132)*var2[2] + (t5780*t5804 + t5733*(t6143 - 1.*t5626*t5688*t6164 + t5668*t5688*t6168) + t5626*t5688*(t5822 + t5823 + t5824 + t6156 + t5733*t6164 + t5716*t6168))*var2[3] + (t5623*t5869 + t5708*(t6143 - 1.*t5688*t6146) + t5693*(t5822 + t5942 + t5943 + t5714*t6146 + t5618*t6154 + t6156))*var2[4] + t5666*t6124*var2[5];
  p_output1[22]=(t5804*t5825 + t5814*t6120 + t5733*(t5767*t6120 + t5778*t6132 + t5804*t6164 + t5674*t6168 + t6223 + t6225) + t5804*(t5848 + t5849 + t5850 - 1.*t5733*t6164 - 1.*t5716*t6168 + t6229))*var2[3] + (t5623*t5944 + t5934*t6128 + t5708*(t5761*t6118 + t5672*t6146 + t6183 + t6185 + t6223 + t6225) + t5623*(t5848 + t5989 + t5990 - 1.*t5714*t6146 + t6193 + t6229))*var2[4] + (t6114*t6200 + t5618*(t5591*t5666*t5754 + t5621*t5666*t5759 + t6183 + t6185 + t5618*t5742*t6202 + t5618*t5742*t6204) + t5666*(-1.*t5591*t5618*t5754 - 1.*t5618*t5621*t5759 + t5989 + t6193 - 1.*t5704*t5742*t6202 - 1.*t5704*t5742*t6204) + t5666*t6218)*var2[5] + (t6114*t6181 + t5618*(t5666*t5752 + t5892 + t6183 + t6185) + t5666*t6189 + t5666*(-1.*t5618*t5752 + t5989 + t6191 + t6193))*var2[6];
  p_output1[23]=t6254 + t5804*var2[0] + t5682*var2[1] + (t5563*t5623 + t5625*t5674)*var2[2] + (t5840*t6120 + t5804*(t5626*t5688*t6164 - 1.*t5668*t5688*t6168 + t6265) + t5626*t5688*(-1.*t5767*t6120 - 1.*t5778*t6132 - 1.*t5804*t6164 - 1.*t5674*t6168 + t6272 + t6274))*var2[3] + (t5975*t6128 + t5623*(t5688*t6146 + t6265) + t5693*(-1.*t5742*t6114 - 1.*t5761*t6118 - 1.*t5672*t6146 - 1.*t5666*t6154 + t6272 + t6274))*var2[4] + t6114*t6257*var2[5];
  p_output1[24]=t5733*var2[0] + t5722*var2[1] + (t5563*t5708 + t5625*t5716)*var2[2] + (t5733*(t6313 - 1.*t5626*t5688*t6341 + t5668*t5688*t6345) + t5780*t6351 + t5626*t5688*(t6328 + t6330 + t5733*t6341 + t5716*t6345 + t5767*t6351 + t5778*t6358))*var2[3] + (t5708*(t6313 - 1.*t5688*t6316) + t5869*t6322 + t5693*(t5704*t5742 + t5714*t6316 + t5618*t6326 + t6328 + t6330 + t5761*t6333))*var2[4] + t5704*t6124*var2[5] + (0.28121*t5604 - 0.305*Power(t5604,2) - 1.*t5604*t5739)*var2[7];
  p_output1[25]=(t5733*t5814 + t5825*t6351 + t5733*(t5791 + t5792 + t5793 + t5804*t6341 + t5674*t6345 + t6396) + t5804*(-1.*t5733*t6341 - 1.*t5716*t6345 - 1.*t5767*t6351 - 1.*t5778*t6358 + t6400 + t6402))*var2[3] + (t5708*t5934 + t5944*t6322 + t5708*(t5791 + t5892 + t5893 + t5672*t6316 + t6367 + t6396) + t5623*(t6191 - 1.*t5714*t6316 - 1.*t5761*t6333 + t6374 + t6400 + t6402))*var2[4] + (t5618*t6200 + t5704*t6218 + t5618*(t5591*t5704*t5754 + t5621*t5704*t5759 + t5892 + t5618*t6202*t6309 + t5618*t6204*t6309 + t6367) + t5666*(-1.*t5591*t5754*t6114 - 1.*t5621*t5759*t6114 + t6191 - 1.*t5704*t6202*t6309 - 1.*t5704*t6204*t6309 + t6374))*var2[5] + (t5618*t6181 + t5704*t6189 + t5618*(t5704*t5752 + t5892 + t5618*t6309 + t6367) + t5666*(-1.*t5752*t6114 + t6191 - 1.*t5704*t6309 + t6374))*var2[6];
  p_output1[26]=t6254 + t6351*var2[0] + (t5625*t6322 - 1.*t5563*t6358)*var2[1] + (t5563*t6322 + t5625*t6358)*var2[2] + (t5733*t5840 + t5804*(t5626*t5688*t6341 - 1.*t5668*t5688*t6345 + t6439) + t5626*t5688*(t5811 + t5812 + t5813 - 1.*t5804*t6341 - 1.*t5674*t6345 + t6445))*var2[3] + (t5708*t5975 + t5623*(t5688*t6316 + t6439) + t5693*(t5811 + t5932 + t5933 - 1.*t5672*t6316 - 1.*t5666*t6326 + t6445))*var2[4] + t5618*t6257*var2[5] + (-0.28121*t5613 + 0.305*t5604*t5613 + t5613*t5739)*var2[7];
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

#include "dJh_FlFoot_DiagonalStance2.hh"

namespace SymFunction
{

void dJh_FlFoot_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
