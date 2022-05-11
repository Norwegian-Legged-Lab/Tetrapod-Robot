/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:11:13 GMT+02:00
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
static void output1(double *p_output1,const double *var1)
{
  double t12546;
  double t18164;
  double t18574;
  double t18924;
  double t21133;
  double t17146;
  double t24074;
  double t2681;
  double t24175;
  double t24231;
  double t24535;
  double t4817;
  double t8071;
  double t17995;
  double t18643;
  double t18973;
  double t19527;
  double t21233;
  double t21803;
  double t23099;
  double t23582;
  double t24685;
  double t24698;
  double t24705;
  double t24728;
  double t24783;
  double t24790;
  double t24826;
  double t24831;
  double t23901;
  double t24733;
  double t24832;
  double t26911;
  double t26973;
  double t27024;
  double t27028;
  double t27161;
  double t26970;
  double t26992;
  double t27007;
  double t27176;
  double t27178;
  double t27179;
  double t26953;
  double t27019;
  double t27162;
  double t27163;
  double t27172;
  double t27173;
  double t27188;
  double t27244;
  double t27249;
  double t27265;
  double t27281;
  double t27288;
  double t27313;
  double t27315;
  double t27174;
  double t27279;
  double t27316;
  double t30711;
  double t30743;
  double t30751;
  double t30614;
  double t30622;
  double t30702;
  double t30824;
  double t30826;
  double t30829;
  double t30605;
  double t30708;
  double t30767;
  double t30768;
  double t30770;
  double t30814;
  double t30838;
  double t30839;
  double t30861;
  double t30907;
  double t31036;
  double t31039;
  double t31043;
  double t31045;
  double t30820;
  double t30973;
  double t31054;
  double t24838;
  double t24840;
  double t31963;
  double t24849;
  double t24855;
  double t24874;
  double t24888;
  double t24922;
  double t24947;
  double t25052;
  double t25094;
  double t25186;
  double t25202;
  double t25271;
  double t25289;
  double t25763;
  double t25807;
  double t25966;
  double t25968;
  double t26156;
  double t26163;
  double t26203;
  double t26204;
  double t26208;
  double t26212;
  double t26234;
  double t26240;
  double t26645;
  double t26647;
  double t26667;
  double t26668;
  double t26671;
  double t26697;
  double t26902;
  double t26903;
  double t26907;
  double t26908;
  double t31979;
  double t27321;
  double t27322;
  double t32076;
  double t27328;
  double t27329;
  double t27474;
  double t27489;
  double t27492;
  double t27493;
  double t27506;
  double t27507;
  double t27575;
  double t27578;
  double t27584;
  double t27585;
  double t27623;
  double t27624;
  double t27630;
  double t27631;
  double t27634;
  double t27635;
  double t27669;
  double t27673;
  double t27717;
  double t27739;
  double t28619;
  double t28621;
  double t30238;
  double t30346;
  double t30354;
  double t30372;
  double t30378;
  double t30381;
  double t30391;
  double t30511;
  double t30574;
  double t30594;
  double t32080;
  double t31060;
  double t31063;
  double t32153;
  double t31080;
  double t31089;
  double t31099;
  double t31100;
  double t31107;
  double t31112;
  double t31116;
  double t31124;
  double t31139;
  double t31141;
  double t31154;
  double t31159;
  double t31181;
  double t31184;
  double t31194;
  double t31199;
  double t31224;
  double t31240;
  double t31329;
  double t31344;
  double t31352;
  double t31372;
  double t31400;
  double t31514;
  double t31830;
  double t31877;
  double t31902;
  double t31913;
  double t31924;
  double t31930;
  double t31946;
  double t31948;
  double t31954;
  double t31957;
  double t32158;
  t12546 = Cos(var1[4]);
  t18164 = Sin(var1[12]);
  t18574 = Sin(var1[4]);
  t18924 = Cos(var1[12]);
  t21133 = Sin(var1[5]);
  t17146 = Cos(var1[5]);
  t24074 = Sin(var1[13]);
  t2681 = Cos(var1[13]);
  t24175 = t18924*t18574;
  t24231 = t12546*t18164*t21133;
  t24535 = t24175 + t24231;
  t4817 = -1.*t2681;
  t8071 = 1. + t4817;
  t17995 = 0.325*t8071*t12546*t17146;
  t18643 = 0.1575*t18164*t18574;
  t18973 = -1.*t18924;
  t19527 = 1. + t18973;
  t21233 = 0.1575*t19527*t12546*t21133;
  t21803 = t18164*t18574;
  t23099 = -1.*t18924*t12546*t21133;
  t23582 = t21803 + t23099;
  t24685 = -0.325*t24074*t24535;
  t24698 = -1.*t12546*t17146*t24074;
  t24705 = t2681*t24535;
  t24728 = t24698 + t24705;
  t24783 = t2681*t12546*t17146;
  t24790 = t24074*t24535;
  t24826 = t24783 + t24790;
  t24831 = 0.325*t24826;
  t23901 = -0.215292*t23582;
  t24733 = 0.010991*t24728;
  t24832 = var1[0] + t17995 + t18643 + t21233 + t23901 + t24685 + t24733 + t24831;
  t26911 = Sin(var1[3]);
  t26973 = Cos(var1[3]);
  t27024 = t26973*t17146;
  t27028 = -1.*t26911*t18574*t21133;
  t27161 = t27024 + t27028;
  t26970 = t17146*t26911*t18574;
  t26992 = t26973*t21133;
  t27007 = t26970 + t26992;
  t27176 = -1.*t18924*t12546*t26911;
  t27178 = -1.*t18164*t27161;
  t27179 = t27176 + t27178;
  t26953 = -0.1575*t12546*t18164*t26911;
  t27019 = 0.325*t8071*t27007;
  t27162 = -0.1575*t19527*t27161;
  t27163 = -1.*t12546*t18164*t26911;
  t27172 = t18924*t27161;
  t27173 = t27163 + t27172;
  t27188 = -0.325*t24074*t27179;
  t27244 = -1.*t24074*t27007;
  t27249 = t2681*t27179;
  t27265 = t27244 + t27249;
  t27281 = t2681*t27007;
  t27288 = t24074*t27179;
  t27313 = t27281 + t27288;
  t27315 = 0.325*t27313;
  t27174 = -0.215292*t27173;
  t27279 = 0.010991*t27265;
  t27316 = var1[1] + t26953 + t27019 + t27162 + t27174 + t27188 + t27279 + t27315;
  t30711 = t17146*t26911;
  t30743 = t26973*t18574*t21133;
  t30751 = t30711 + t30743;
  t30614 = -1.*t26973*t17146*t18574;
  t30622 = t26911*t21133;
  t30702 = t30614 + t30622;
  t30824 = t18924*t26973*t12546;
  t30826 = -1.*t18164*t30751;
  t30829 = t30824 + t30826;
  t30605 = 0.1575*t26973*t12546*t18164;
  t30708 = 0.325*t8071*t30702;
  t30767 = -0.1575*t19527*t30751;
  t30768 = t26973*t12546*t18164;
  t30770 = t18924*t30751;
  t30814 = t30768 + t30770;
  t30838 = -0.325*t24074*t30829;
  t30839 = -1.*t24074*t30702;
  t30861 = t2681*t30829;
  t30907 = t30839 + t30861;
  t31036 = t2681*t30702;
  t31039 = t24074*t30829;
  t31043 = t31036 + t31039;
  t31045 = 0.325*t31043;
  t30820 = -0.215292*t30814;
  t30973 = 0.010991*t30907;
  t31054 = var1[2] + t30605 + t30708 + t30767 + t30820 + t30838 + t30973 + t31045;
  t24838 = -0.212277*t23582;
  t24840 = 0.007081*t24728;
  t31963 = 0.075*t24826;
  t24849 = -0.210694*t23582;
  t24855 = 0.002404*t24728;
  t24874 = -0.210716*t23582;
  t24888 = -0.002534*t24728;
  t24922 = -0.212339*t23582;
  t24947 = -0.007197*t24728;
  t25052 = -0.215389*t23582;
  t25094 = -0.01108*t24728;
  t25186 = -0.219535*t23582;
  t25202 = -0.013763*t24728;
  t25271 = -0.224327*t23582;
  t25289 = -0.014954*t24728;
  t25763 = -0.229246*t23582;
  t25807 = -0.014525*t24728;
  t25966 = -0.233759*t23582;
  t25968 = -0.012521*t24728;
  t26156 = -0.237377*t23582;
  t26163 = -0.009161*t24728;
  t26203 = -0.239709*t23582;
  t26204 = -0.004808*t24728;
  t26208 = -0.2405*t23582;
  t26212 = 0.000066*t24728;
  t26234 = -0.239666*t23582;
  t26240 = 0.004933*t24728;
  t26645 = -0.237297*t23582;
  t26647 = 0.009265*t24728;
  t26667 = -0.233649*t23582;
  t26668 = 0.012593*t24728;
  t26671 = -0.229118*t23582;
  t26697 = 0.014557*t24728;
  t26902 = -0.224196*t23582;
  t26903 = 0.014943*t24728;
  t26907 = -0.219414*t23582;
  t26908 = 0.01371*t24728;
  t31979 = var1[0] + t17995 + t18643 + t21233 + t23901 + t24685 + t24733 + t31963;
  t27321 = -0.212277*t27173;
  t27322 = 0.007081*t27265;
  t32076 = 0.075*t27313;
  t27328 = -0.210694*t27173;
  t27329 = 0.002404*t27265;
  t27474 = -0.210716*t27173;
  t27489 = -0.002534*t27265;
  t27492 = -0.212339*t27173;
  t27493 = -0.007197*t27265;
  t27506 = -0.215389*t27173;
  t27507 = -0.01108*t27265;
  t27575 = -0.219535*t27173;
  t27578 = -0.013763*t27265;
  t27584 = -0.224327*t27173;
  t27585 = -0.014954*t27265;
  t27623 = -0.229246*t27173;
  t27624 = -0.014525*t27265;
  t27630 = -0.233759*t27173;
  t27631 = -0.012521*t27265;
  t27634 = -0.237377*t27173;
  t27635 = -0.009161*t27265;
  t27669 = -0.239709*t27173;
  t27673 = -0.004808*t27265;
  t27717 = -0.2405*t27173;
  t27739 = 0.000066*t27265;
  t28619 = -0.239666*t27173;
  t28621 = 0.004933*t27265;
  t30238 = -0.237297*t27173;
  t30346 = 0.009265*t27265;
  t30354 = -0.233649*t27173;
  t30372 = 0.012593*t27265;
  t30378 = -0.229118*t27173;
  t30381 = 0.014557*t27265;
  t30391 = -0.224196*t27173;
  t30511 = 0.014943*t27265;
  t30574 = -0.219414*t27173;
  t30594 = 0.01371*t27265;
  t32080 = var1[1] + t26953 + t27019 + t27162 + t27174 + t27188 + t27279 + t32076;
  t31060 = -0.212277*t30814;
  t31063 = 0.007081*t30907;
  t32153 = 0.075*t31043;
  t31080 = -0.210694*t30814;
  t31089 = 0.002404*t30907;
  t31099 = -0.210716*t30814;
  t31100 = -0.002534*t30907;
  t31107 = -0.212339*t30814;
  t31112 = -0.007197*t30907;
  t31116 = -0.215389*t30814;
  t31124 = -0.01108*t30907;
  t31139 = -0.219535*t30814;
  t31141 = -0.013763*t30907;
  t31154 = -0.224327*t30814;
  t31159 = -0.014954*t30907;
  t31181 = -0.229246*t30814;
  t31184 = -0.014525*t30907;
  t31194 = -0.233759*t30814;
  t31199 = -0.012521*t30907;
  t31224 = -0.237377*t30814;
  t31240 = -0.009161*t30907;
  t31329 = -0.239709*t30814;
  t31344 = -0.004808*t30907;
  t31352 = -0.2405*t30814;
  t31372 = 0.000066*t30907;
  t31400 = -0.239666*t30814;
  t31514 = 0.004933*t30907;
  t31830 = -0.237297*t30814;
  t31877 = 0.009265*t30907;
  t31902 = -0.233649*t30814;
  t31913 = 0.012593*t30907;
  t31924 = -0.229118*t30814;
  t31930 = 0.014557*t30907;
  t31946 = -0.224196*t30814;
  t31948 = 0.014943*t30907;
  t31954 = -0.219414*t30814;
  t31957 = 0.01371*t30907;
  t32158 = var1[2] + t30605 + t30708 + t30767 + t30820 + t30838 + t30973 + t32153;
  p_output1[0]=t24832;
  p_output1[1]=t17995 + t18643 + t21233 + t24685 + t24831 + t24838 + t24840 + var1[0];
  p_output1[2]=t17995 + t18643 + t21233 + t24685 + t24831 + t24849 + t24855 + var1[0];
  p_output1[3]=t17995 + t18643 + t21233 + t24685 + t24831 + t24874 + t24888 + var1[0];
  p_output1[4]=t17995 + t18643 + t21233 + t24685 + t24831 + t24922 + t24947 + var1[0];
  p_output1[5]=t17995 + t18643 + t21233 + t24685 + t24831 + t25052 + t25094 + var1[0];
  p_output1[6]=t17995 + t18643 + t21233 + t24685 + t24831 + t25186 + t25202 + var1[0];
  p_output1[7]=t17995 + t18643 + t21233 + t24685 + t24831 + t25271 + t25289 + var1[0];
  p_output1[8]=t17995 + t18643 + t21233 + t24685 + t24831 + t25763 + t25807 + var1[0];
  p_output1[9]=t17995 + t18643 + t21233 + t24685 + t24831 + t25966 + t25968 + var1[0];
  p_output1[10]=t17995 + t18643 + t21233 + t24685 + t24831 + t26156 + t26163 + var1[0];
  p_output1[11]=t17995 + t18643 + t21233 + t24685 + t24831 + t26203 + t26204 + var1[0];
  p_output1[12]=t17995 + t18643 + t21233 + t24685 + t24831 + t26208 + t26212 + var1[0];
  p_output1[13]=t17995 + t18643 + t21233 + t24685 + t24831 + t26234 + t26240 + var1[0];
  p_output1[14]=t17995 + t18643 + t21233 + t24685 + t24831 + t26645 + t26647 + var1[0];
  p_output1[15]=t17995 + t18643 + t21233 + t24685 + t24831 + t26667 + t26668 + var1[0];
  p_output1[16]=t17995 + t18643 + t21233 + t24685 + t24831 + t26671 + t26697 + var1[0];
  p_output1[17]=t17995 + t18643 + t21233 + t24685 + t24831 + t26902 + t26903 + var1[0];
  p_output1[18]=t17995 + t18643 + t21233 + t24685 + t24831 + t26907 + t26908 + var1[0];
  p_output1[19]=t24832;
  p_output1[20]=t27316;
  p_output1[21]=t26953 + t27019 + t27162 + t27188 + t27315 + t27321 + t27322 + var1[1];
  p_output1[22]=t26953 + t27019 + t27162 + t27188 + t27315 + t27328 + t27329 + var1[1];
  p_output1[23]=t26953 + t27019 + t27162 + t27188 + t27315 + t27474 + t27489 + var1[1];
  p_output1[24]=t26953 + t27019 + t27162 + t27188 + t27315 + t27492 + t27493 + var1[1];
  p_output1[25]=t26953 + t27019 + t27162 + t27188 + t27315 + t27506 + t27507 + var1[1];
  p_output1[26]=t26953 + t27019 + t27162 + t27188 + t27315 + t27575 + t27578 + var1[1];
  p_output1[27]=t26953 + t27019 + t27162 + t27188 + t27315 + t27584 + t27585 + var1[1];
  p_output1[28]=t26953 + t27019 + t27162 + t27188 + t27315 + t27623 + t27624 + var1[1];
  p_output1[29]=t26953 + t27019 + t27162 + t27188 + t27315 + t27630 + t27631 + var1[1];
  p_output1[30]=t26953 + t27019 + t27162 + t27188 + t27315 + t27634 + t27635 + var1[1];
  p_output1[31]=t26953 + t27019 + t27162 + t27188 + t27315 + t27669 + t27673 + var1[1];
  p_output1[32]=t26953 + t27019 + t27162 + t27188 + t27315 + t27717 + t27739 + var1[1];
  p_output1[33]=t26953 + t27019 + t27162 + t27188 + t27315 + t28619 + t28621 + var1[1];
  p_output1[34]=t26953 + t27019 + t27162 + t27188 + t27315 + t30238 + t30346 + var1[1];
  p_output1[35]=t26953 + t27019 + t27162 + t27188 + t27315 + t30354 + t30372 + var1[1];
  p_output1[36]=t26953 + t27019 + t27162 + t27188 + t27315 + t30378 + t30381 + var1[1];
  p_output1[37]=t26953 + t27019 + t27162 + t27188 + t27315 + t30391 + t30511 + var1[1];
  p_output1[38]=t26953 + t27019 + t27162 + t27188 + t27315 + t30574 + t30594 + var1[1];
  p_output1[39]=t27316;
  p_output1[40]=t31054;
  p_output1[41]=t30605 + t30708 + t30767 + t30838 + t31045 + t31060 + t31063 + var1[2];
  p_output1[42]=t30605 + t30708 + t30767 + t30838 + t31045 + t31080 + t31089 + var1[2];
  p_output1[43]=t30605 + t30708 + t30767 + t30838 + t31045 + t31099 + t31100 + var1[2];
  p_output1[44]=t30605 + t30708 + t30767 + t30838 + t31045 + t31107 + t31112 + var1[2];
  p_output1[45]=t30605 + t30708 + t30767 + t30838 + t31045 + t31116 + t31124 + var1[2];
  p_output1[46]=t30605 + t30708 + t30767 + t30838 + t31045 + t31139 + t31141 + var1[2];
  p_output1[47]=t30605 + t30708 + t30767 + t30838 + t31045 + t31154 + t31159 + var1[2];
  p_output1[48]=t30605 + t30708 + t30767 + t30838 + t31045 + t31181 + t31184 + var1[2];
  p_output1[49]=t30605 + t30708 + t30767 + t30838 + t31045 + t31194 + t31199 + var1[2];
  p_output1[50]=t30605 + t30708 + t30767 + t30838 + t31045 + t31224 + t31240 + var1[2];
  p_output1[51]=t30605 + t30708 + t30767 + t30838 + t31045 + t31329 + t31344 + var1[2];
  p_output1[52]=t30605 + t30708 + t30767 + t30838 + t31045 + t31352 + t31372 + var1[2];
  p_output1[53]=t30605 + t30708 + t30767 + t30838 + t31045 + t31400 + t31514 + var1[2];
  p_output1[54]=t30605 + t30708 + t30767 + t30838 + t31045 + t31830 + t31877 + var1[2];
  p_output1[55]=t30605 + t30708 + t30767 + t30838 + t31045 + t31902 + t31913 + var1[2];
  p_output1[56]=t30605 + t30708 + t30767 + t30838 + t31045 + t31924 + t31930 + var1[2];
  p_output1[57]=t30605 + t30708 + t30767 + t30838 + t31045 + t31946 + t31948 + var1[2];
  p_output1[58]=t30605 + t30708 + t30767 + t30838 + t31045 + t31954 + t31957 + var1[2];
  p_output1[59]=t31054;
  p_output1[60]=t31979;
  p_output1[61]=t17995 + t18643 + t21233 + t24685 + t24838 + t24840 + t31963 + var1[0];
  p_output1[62]=t17995 + t18643 + t21233 + t24685 + t24849 + t24855 + t31963 + var1[0];
  p_output1[63]=t17995 + t18643 + t21233 + t24685 + t24874 + t24888 + t31963 + var1[0];
  p_output1[64]=t17995 + t18643 + t21233 + t24685 + t24922 + t24947 + t31963 + var1[0];
  p_output1[65]=t17995 + t18643 + t21233 + t24685 + t25052 + t25094 + t31963 + var1[0];
  p_output1[66]=t17995 + t18643 + t21233 + t24685 + t25186 + t25202 + t31963 + var1[0];
  p_output1[67]=t17995 + t18643 + t21233 + t24685 + t25271 + t25289 + t31963 + var1[0];
  p_output1[68]=t17995 + t18643 + t21233 + t24685 + t25763 + t25807 + t31963 + var1[0];
  p_output1[69]=t17995 + t18643 + t21233 + t24685 + t25966 + t25968 + t31963 + var1[0];
  p_output1[70]=t17995 + t18643 + t21233 + t24685 + t26156 + t26163 + t31963 + var1[0];
  p_output1[71]=t17995 + t18643 + t21233 + t24685 + t26203 + t26204 + t31963 + var1[0];
  p_output1[72]=t17995 + t18643 + t21233 + t24685 + t26208 + t26212 + t31963 + var1[0];
  p_output1[73]=t17995 + t18643 + t21233 + t24685 + t26234 + t26240 + t31963 + var1[0];
  p_output1[74]=t17995 + t18643 + t21233 + t24685 + t26645 + t26647 + t31963 + var1[0];
  p_output1[75]=t17995 + t18643 + t21233 + t24685 + t26667 + t26668 + t31963 + var1[0];
  p_output1[76]=t17995 + t18643 + t21233 + t24685 + t26671 + t26697 + t31963 + var1[0];
  p_output1[77]=t17995 + t18643 + t21233 + t24685 + t26902 + t26903 + t31963 + var1[0];
  p_output1[78]=t17995 + t18643 + t21233 + t24685 + t26907 + t26908 + t31963 + var1[0];
  p_output1[79]=t31979;
  p_output1[80]=t32080;
  p_output1[81]=t26953 + t27019 + t27162 + t27188 + t27321 + t27322 + t32076 + var1[1];
  p_output1[82]=t26953 + t27019 + t27162 + t27188 + t27328 + t27329 + t32076 + var1[1];
  p_output1[83]=t26953 + t27019 + t27162 + t27188 + t27474 + t27489 + t32076 + var1[1];
  p_output1[84]=t26953 + t27019 + t27162 + t27188 + t27492 + t27493 + t32076 + var1[1];
  p_output1[85]=t26953 + t27019 + t27162 + t27188 + t27506 + t27507 + t32076 + var1[1];
  p_output1[86]=t26953 + t27019 + t27162 + t27188 + t27575 + t27578 + t32076 + var1[1];
  p_output1[87]=t26953 + t27019 + t27162 + t27188 + t27584 + t27585 + t32076 + var1[1];
  p_output1[88]=t26953 + t27019 + t27162 + t27188 + t27623 + t27624 + t32076 + var1[1];
  p_output1[89]=t26953 + t27019 + t27162 + t27188 + t27630 + t27631 + t32076 + var1[1];
  p_output1[90]=t26953 + t27019 + t27162 + t27188 + t27634 + t27635 + t32076 + var1[1];
  p_output1[91]=t26953 + t27019 + t27162 + t27188 + t27669 + t27673 + t32076 + var1[1];
  p_output1[92]=t26953 + t27019 + t27162 + t27188 + t27717 + t27739 + t32076 + var1[1];
  p_output1[93]=t26953 + t27019 + t27162 + t27188 + t28619 + t28621 + t32076 + var1[1];
  p_output1[94]=t26953 + t27019 + t27162 + t27188 + t30238 + t30346 + t32076 + var1[1];
  p_output1[95]=t26953 + t27019 + t27162 + t27188 + t30354 + t30372 + t32076 + var1[1];
  p_output1[96]=t26953 + t27019 + t27162 + t27188 + t30378 + t30381 + t32076 + var1[1];
  p_output1[97]=t26953 + t27019 + t27162 + t27188 + t30391 + t30511 + t32076 + var1[1];
  p_output1[98]=t26953 + t27019 + t27162 + t27188 + t30574 + t30594 + t32076 + var1[1];
  p_output1[99]=t32080;
  p_output1[100]=t32158;
  p_output1[101]=t30605 + t30708 + t30767 + t30838 + t31060 + t31063 + t32153 + var1[2];
  p_output1[102]=t30605 + t30708 + t30767 + t30838 + t31080 + t31089 + t32153 + var1[2];
  p_output1[103]=t30605 + t30708 + t30767 + t30838 + t31099 + t31100 + t32153 + var1[2];
  p_output1[104]=t30605 + t30708 + t30767 + t30838 + t31107 + t31112 + t32153 + var1[2];
  p_output1[105]=t30605 + t30708 + t30767 + t30838 + t31116 + t31124 + t32153 + var1[2];
  p_output1[106]=t30605 + t30708 + t30767 + t30838 + t31139 + t31141 + t32153 + var1[2];
  p_output1[107]=t30605 + t30708 + t30767 + t30838 + t31154 + t31159 + t32153 + var1[2];
  p_output1[108]=t30605 + t30708 + t30767 + t30838 + t31181 + t31184 + t32153 + var1[2];
  p_output1[109]=t30605 + t30708 + t30767 + t30838 + t31194 + t31199 + t32153 + var1[2];
  p_output1[110]=t30605 + t30708 + t30767 + t30838 + t31224 + t31240 + t32153 + var1[2];
  p_output1[111]=t30605 + t30708 + t30767 + t30838 + t31329 + t31344 + t32153 + var1[2];
  p_output1[112]=t30605 + t30708 + t30767 + t30838 + t31352 + t31372 + t32153 + var1[2];
  p_output1[113]=t30605 + t30708 + t30767 + t30838 + t31400 + t31514 + t32153 + var1[2];
  p_output1[114]=t30605 + t30708 + t30767 + t30838 + t31830 + t31877 + t32153 + var1[2];
  p_output1[115]=t30605 + t30708 + t30767 + t30838 + t31902 + t31913 + t32153 + var1[2];
  p_output1[116]=t30605 + t30708 + t30767 + t30838 + t31924 + t31930 + t32153 + var1[2];
  p_output1[117]=t30605 + t30708 + t30767 + t30838 + t31946 + t31948 + t32153 + var1[2];
  p_output1[118]=t30605 + t30708 + t30767 + t30838 + t31954 + t31957 + t32153 + var1[2];
  p_output1[119]=t32158;
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 20, (mwSize) 6, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Link_upper2_to_5_bar.hh"

namespace SymFunction
{

void Link_upper2_to_5_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
