/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:05:35 GMT+02:00
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
  double t6495;
  double t6461;
  double t6463;
  double t6506;
  double t6486;
  double t6515;
  double t6517;
  double t6429;
  double t6532;
  double t6540;
  double t6549;
  double t6447;
  double t6553;
  double t6573;
  double t6521;
  double t6561;
  double t6565;
  double t3350;
  double t6655;
  double t6660;
  double t6662;
  double t6663;
  double t6666;
  double t6667;
  double t6668;
  double t6669;
  double t6670;
  double t6690;
  double t6691;
  double t6698;
  double t6724;
  double t6725;
  double t6726;
  double t6722;
  double t6728;
  double t6730;
  double t6733;
  double t6735;
  double t6737;
  double t6738;
  double t6739;
  double t6741;
  double t6759;
  double t6764;
  double t6770;
  double t6792;
  double t6793;
  double t6795;
  double t6802;
  double t6803;
  double t6804;
  double t6805;
  double t6808;
  double t6809;
  double t6791;
  double t6801;
  double t6813;
  double t6814;
  double t6787;
  double t6815;
  double t6816;
  double t6822;
  double t6829;
  double t6837;
  double t6842;
  double t6846;
  double t6847;
  double t6848;
  double t6849;
  double t6857;
  double t6859;
  double t6860;
  double t6861;
  double t6862;
  double t6864;
  double t6866;
  double t6883;
  double t6884;
  double t6887;
  double t6879;
  double t6880;
  double t6882;
  double t6874;
  double t6875;
  double t6876;
  double t6782;
  double t6783;
  double t6784;
  double t6818;
  double t6867;
  double t6870;
  double t6910;
  double t6911;
  double t6912;
  double t6891;
  double t6892;
  double t6897;
  double t6965;
  double t6966;
  double t6967;
  double t6921;
  double t6922;
  double t6923;
  double t7086;
  double t7089;
  double t7090;
  double t6913;
  double t6945;
  double t7134;
  double t7138;
  double t7140;
  double t7144;
  double t7174;
  double t7180;
  double t7184;
  double t6914;
  double t6917;
  double t6919;
  double t7187;
  double t7191;
  double t6947;
  double t6948;
  double t6951;
  double t6974;
  double t6995;
  double t7262;
  double t7265;
  double t6978;
  double t6979;
  double t6981;
  double t7283;
  double t7285;
  double t6998;
  double t6999;
  double t7000;
  double t7040;
  double t7074;
  double t7349;
  double t7042;
  double t7043;
  double t7044;
  double t7354;
  double t7357;
  double t7075;
  double t7076;
  double t7077;
  double t7119;
  double t7155;
  double t7428;
  double t7430;
  double t7431;
  double t7438;
  double t7439;
  double t7479;
  double t7480;
  double t7481;
  double t7128;
  double t7131;
  double t7433;
  double t7440;
  double t7457;
  double t7462;
  double t7165;
  double t7171;
  double t7503;
  double t7504;
  double t7508;
  double t7515;
  double t7516;
  double t7524;
  double t7526;
  double t7528;
  double t7530;
  double t7532;
  double t7533;
  double t7535;
  double t7536;
  double t7537;
  double t7540;
  double t7541;
  double t7542;
  double t7275;
  double t7268;
  double t7544;
  double t7545;
  double t7546;
  double t7574;
  double t7577;
  double t7270;
  double t7272;
  double t7587;
  double t7592;
  double t7276;
  double t7280;
  double t7623;
  double t7626;
  double t7474;
  double t7475;
  double t7476;
  double t7631;
  double t7632;
  double t7555;
  double t7556;
  double t7557;
  double t7343;
  double t7360;
  double t7344;
  double t7346;
  double t7678;
  double t7681;
  double t7505;
  double t7688;
  double t7690;
  double t7361;
  double t7362;
  double t7719;
  double t7725;
  double t7735;
  double t7737;
  double t7411;
  double t7413;
  double t7780;
  double t7781;
  double t7782;
  double t7800;
  double t7801;
  double t6754;
  double t6755;
  double t6756;
  double t7793;
  double t7794;
  double t7795;
  double t7796;
  double t7790;
  double t7799;
  double t7802;
  double t7832;
  double t7833;
  double t7834;
  double t7818;
  double t7820;
  double t7821;
  double t7828;
  double t7829;
  double t7830;
  double t7840;
  double t7841;
  double t7842;
  double t7836;
  double t7839;
  double t7844;
  double t7851;
  double t7853;
  double t7855;
  double t7857;
  double t7858;
  double t7859;
  double t7861;
  double t7862;
  double t7863;
  double t7580;
  double t7582;
  double t7583;
  double t7598;
  double t7599;
  double t7603;
  double t7804;
  double t7451;
  double t7452;
  double t7884;
  double t7886;
  double t7894;
  double t7892;
  double t7882;
  double t7887;
  double t7924;
  double t7927;
  double t7929;
  double t7868;
  double t7869;
  double t7871;
  double t7668;
  double t7670;
  double t7965;
  double t7998;
  double t8002;
  double t8032;
  double t8034;
  double t8035;
  double t8050;
  double t8051;
  double t8053;
  double t8064;
  double t8065;
  double t8066;
  double t8071;
  double t8072;
  double t8073;
  double t8075;
  double t8076;
  double t8077;
  double t8044;
  double t8046;
  double t8054;
  double t8094;
  double t8095;
  double t8096;
  double t8090;
  double t8091;
  double t8092;
  double t8097;
  double t8102;
  double t8112;
  double t8113;
  double t8116;
  double t8118;
  double t8119;
  double t8120;
  double t7694;
  double t7695;
  double t7902;
  double t7903;
  double t7909;
  double t7910;
  double t8142;
  double t8150;
  double t8160;
  double t8152;
  double t8156;
  double t8143;
  double t8191;
  double t8197;
  double t8063;
  double t8068;
  double t8069;
  double t8202;
  double t6678;
  double t6681;
  double t6682;
  double t8240;
  double t8242;
  double t8260;
  double t8265;
  double t8273;
  t6495 = Cos(var1[16]);
  t6461 = Cos(var1[17]);
  t6463 = Sin(var1[16]);
  t6506 = Sin(var1[17]);
  t6486 = t6461*t6463;
  t6515 = -1.*t6495*t6506;
  t6517 = t6486 + t6515;
  t6429 = Cos(var1[5]);
  t6532 = t6495*t6461;
  t6540 = t6463*t6506;
  t6549 = t6532 + t6540;
  t6447 = Sin(var1[15]);
  t6553 = Sin(var1[5]);
  t6573 = Cos(var1[3]);
  t6521 = -1.*t6429*t6447*t6517;
  t6561 = t6549*t6553;
  t6565 = t6521 + t6561;
  t3350 = Sin(var1[3]);
  t6655 = Cos(var1[15]);
  t6660 = Cos(var1[4]);
  t6662 = t6655*t6660*t6517;
  t6663 = Sin(var1[4]);
  t6666 = t6429*t6549;
  t6667 = t6447*t6517*t6553;
  t6668 = t6666 + t6667;
  t6669 = -1.*t6663*t6668;
  t6670 = t6662 + t6669;
  t6690 = t6660*t6447;
  t6691 = t6655*t6663*t6553;
  t6698 = t6690 + t6691;
  t6724 = -1.*t6461*t6463;
  t6725 = t6495*t6506;
  t6726 = t6724 + t6725;
  t6722 = -1.*t6429*t6447*t6549;
  t6728 = t6726*t6553;
  t6730 = t6722 + t6728;
  t6733 = t6655*t6660*t6549;
  t6735 = t6429*t6726;
  t6737 = t6447*t6549*t6553;
  t6738 = t6735 + t6737;
  t6739 = -1.*t6663*t6738;
  t6741 = t6733 + t6739;
  t6759 = -1.*t6655*t6517*t6663;
  t6764 = -1.*t6660*t6668;
  t6770 = t6759 + t6764;
  t6792 = -0.0641*t6461;
  t6793 = -0.28*t6506;
  t6795 = t6792 + t6793;
  t6802 = -1.*t6461;
  t6803 = 1. + t6802;
  t6804 = -0.575*t6803;
  t6805 = -0.295*t6461;
  t6808 = -0.0641*t6506;
  t6809 = t6804 + t6805 + t6808;
  t6791 = 0.325*t6463;
  t6801 = t6495*t6795;
  t6813 = t6463*t6809;
  t6814 = t6791 + t6801 + t6813;
  t6787 = -0.068*t6447;
  t6815 = t6655*t6814;
  t6816 = t6787 + t6815;
  t6822 = -1.*t6495;
  t6829 = 1. + t6822;
  t6837 = -0.325*t6829;
  t6842 = -1.*t6463*t6795;
  t6846 = t6495*t6809;
  t6847 = t6837 + t6842 + t6846;
  t6848 = t6429*t6847;
  t6849 = -1.*t6655;
  t6857 = 1. + t6849;
  t6859 = -0.1575*t6857;
  t6860 = -0.2255*t6655;
  t6861 = -1.*t6447*t6814;
  t6862 = t6859 + t6860 + t6861;
  t6864 = -1.*t6862*t6553;
  t6866 = t6848 + t6864;
  t6883 = t6660*t6816;
  t6884 = -1.*t6663*t6866;
  t6887 = t6883 + t6884;
  t6879 = t6447*t6663;
  t6880 = -1.*t6655*t6660*t6553;
  t6882 = t6879 + t6880;
  t6874 = t6816*t6663;
  t6875 = t6660*t6866;
  t6876 = t6874 + t6875;
  t6782 = t6655*t6549*t6663;
  t6783 = t6660*t6738;
  t6784 = t6782 + t6783;
  t6818 = -1.*t6816*t6663;
  t6867 = -1.*t6660*t6866;
  t6870 = t6818 + t6867;
  t6910 = t6429*t6862;
  t6911 = t6847*t6553;
  t6912 = t6910 + t6911;
  t6891 = -1.*t6447*t6663;
  t6892 = t6655*t6660*t6553;
  t6897 = t6891 + t6892;
  t6965 = t6655*t6517*t6663;
  t6966 = t6660*t6668;
  t6967 = t6965 + t6966;
  t6921 = -1.*t6655*t6549*t6663;
  t6922 = -1.*t6660*t6738;
  t6923 = t6921 + t6922;
  t7086 = t6429*t6447*t6517;
  t7089 = -1.*t6549*t6553;
  t7090 = t7086 + t7089;
  t6913 = -1.*t6655*t6429*t6912;
  t6945 = t6912*t6730;
  t7134 = -1.*t6429*t6862;
  t7138 = -1.*t6847*t6553;
  t7140 = t7134 + t7138;
  t7144 = t6655*t6553*t6912;
  t7174 = t6429*t6447*t6549;
  t7180 = -1.*t6726*t6553;
  t7184 = t7174 + t7180;
  t6914 = -1.*t6882*t6876;
  t6917 = -1.*t6698*t6887;
  t6919 = t6913 + t6914 + t6917;
  t7187 = t6866*t6730;
  t7191 = t6912*t6738;
  t6947 = t6876*t6784;
  t6948 = t6887*t6741;
  t6951 = t6945 + t6947 + t6948;
  t6974 = t6912*t6565;
  t6995 = -1.*t6912*t6730;
  t7262 = t6912*t6668;
  t7265 = t6866*t6565;
  t6978 = t6876*t6967;
  t6979 = t6887*t6670;
  t6981 = t6974 + t6978 + t6979;
  t7283 = -1.*t6866*t6730;
  t7285 = -1.*t6912*t6738;
  t6998 = -1.*t6876*t6784;
  t6999 = -1.*t6887*t6741;
  t7000 = t6995 + t6998 + t6999;
  t7040 = t6655*t6429*t6912;
  t7074 = -1.*t6912*t6565;
  t7349 = -1.*t6655*t6553*t6912;
  t7042 = t6882*t6876;
  t7043 = t6698*t6887;
  t7044 = t7040 + t7042 + t7043;
  t7354 = -1.*t6912*t6668;
  t7357 = -1.*t6866*t6565;
  t7075 = -1.*t6876*t6967;
  t7076 = -1.*t6887*t6670;
  t7077 = t7074 + t7075 + t7076;
  t7119 = -1.*t6447*t6816;
  t7155 = t6655*t6816*t6549;
  t7428 = 0.068*t6447;
  t7430 = -1.*t6655*t6814;
  t7431 = t7428 + t7430;
  t7438 = -0.068*t6655;
  t7439 = t7438 + t6861;
  t7479 = -1.*t6660*t6447*t6517;
  t7480 = -1.*t6655*t6517*t6663*t6553;
  t7481 = t7479 + t7480;
  t7128 = t6655*t6553*t6866;
  t7131 = t7119 + t7128 + t6913;
  t7433 = -1.*t6655*t6816;
  t7440 = -1.*t6447*t7439;
  t7457 = -1.*t6447*t6816*t6549;
  t7462 = t6655*t7439*t6549;
  t7165 = t6866*t6738;
  t7171 = t7155 + t6945 + t7165;
  t7503 = Power(t6429,2);
  t7504 = -1.*t6655*t7503*t7431;
  t7508 = t6429*t6447*t6912;
  t7515 = -1.*t6655*t6429*t6549*t6912;
  t7516 = t6429*t7431*t6730;
  t7524 = -1.*t6447*t6549*t6663;
  t7526 = t6655*t6660*t6549*t6553;
  t7528 = t7524 + t7526;
  t7530 = t7439*t6663;
  t7532 = -1.*t6660*t7431*t6553;
  t7533 = t7530 + t7532;
  t7535 = t6660*t7439;
  t7536 = t7431*t6663*t6553;
  t7537 = t7535 + t7536;
  t7540 = t6655*t6663;
  t7541 = t6660*t6447*t6553;
  t7542 = t7540 + t7541;
  t7275 = -1.*t6655*t6816*t6549;
  t7268 = t6655*t6816*t6517;
  t7544 = t6655*t6660;
  t7545 = -1.*t6447*t6663*t6553;
  t7546 = t7544 + t7545;
  t7574 = -1.*t6447*t6816*t6517;
  t7577 = t6655*t7439*t6517;
  t7270 = t6866*t6668;
  t7272 = t7268 + t7270 + t6974;
  t7587 = t6447*t6816*t6549;
  t7592 = -1.*t6655*t7439*t6549;
  t7276 = -1.*t6866*t6738;
  t7280 = t7275 + t6995 + t7276;
  t7623 = -1.*t6655*t6429*t6517*t6912;
  t7626 = t6429*t7431*t6565;
  t7474 = -1.*t6447*t6517*t6663;
  t7475 = t6655*t6660*t6517*t6553;
  t7476 = t7474 + t7475;
  t7631 = t6655*t6429*t6549*t6912;
  t7632 = -1.*t6429*t7431*t6730;
  t7555 = -1.*t6660*t6447*t6549;
  t7556 = -1.*t6655*t6549*t6663*t6553;
  t7557 = t7555 + t7556;
  t7343 = t6447*t6816;
  t7360 = -1.*t6655*t6816*t6517;
  t7344 = -1.*t6655*t6553*t6866;
  t7346 = t7343 + t7344 + t7040;
  t7678 = t6655*t6816;
  t7681 = t6447*t7439;
  t7505 = Power(t6553,2);
  t7688 = t6447*t6816*t6517;
  t7690 = -1.*t6655*t7439*t6517;
  t7361 = -1.*t6866*t6668;
  t7362 = t7360 + t7361 + t7074;
  t7719 = t6655*t7503*t7431;
  t7725 = -1.*t6429*t6447*t6912;
  t7735 = t6655*t6429*t6517*t6912;
  t7737 = -1.*t6429*t7431*t6565;
  t7411 = -1.*t6655*t6862;
  t7413 = t7119 + t7411;
  t7780 = -1.*t6495*t6461;
  t7781 = -1.*t6463*t6506;
  t7782 = t7780 + t7781;
  t7800 = 0.325*t6495;
  t7801 = t7800 + t6842 + t6846;
  t6754 = t6573*t6730;
  t6755 = -1.*t3350*t6741;
  t6756 = t6754 + t6755;
  t7793 = -0.325*t6463;
  t7794 = -1.*t6495*t6795;
  t7795 = -1.*t6463*t6809;
  t7796 = t7793 + t7794 + t7795;
  t7790 = t6655*t6816*t6726;
  t7799 = Power(t6655,2);
  t7802 = t7799*t7801*t6549;
  t7832 = -1.*t6429*t6447*t7801;
  t7833 = t7796*t6553;
  t7834 = t7832 + t7833;
  t7818 = -1.*t6429*t6447*t6726;
  t7820 = t7782*t6553;
  t7821 = t7818 + t7820;
  t7828 = t6429*t7796;
  t7829 = t6447*t7801*t6553;
  t7830 = t7828 + t7829;
  t7840 = t6429*t7782;
  t7841 = t6447*t6726*t6553;
  t7842 = t7840 + t7841;
  t7836 = -1.*t6655*t6429*t7834;
  t7839 = t7834*t6730;
  t7844 = t6912*t7821;
  t7851 = t6655*t6726*t6663;
  t7853 = t6660*t7842;
  t7855 = t7851 + t7853;
  t7857 = t6655*t7801*t6663;
  t7858 = t6660*t7830;
  t7859 = t7857 + t7858;
  t7861 = t6655*t6660*t7801;
  t7862 = -1.*t6663*t7830;
  t7863 = t7861 + t7862;
  t7580 = -1.*t6847*t6726;
  t7582 = t6447*t6862*t6549;
  t7583 = t7580 + t7275 + t7582;
  t7598 = -1.*t6447*t6862*t6517;
  t7599 = t6847*t6549;
  t7603 = t7268 + t7598 + t7599;
  t7804 = Power(t6447,2);
  t7451 = t6847*t6726;
  t7452 = -1.*t6447*t6862*t6549;
  t7884 = -1.*t7796*t6726;
  t7886 = -1.*t6847*t7782;
  t7894 = t7796*t6549;
  t7892 = t7799*t7801*t6517;
  t7882 = -1.*t6655*t6816*t6726;
  t7887 = -1.*t7799*t7801*t6549;
  t7924 = t7834*t6565;
  t7927 = -1.*t7834*t6730;
  t7929 = -1.*t6912*t7821;
  t7868 = t6655*t6660*t6726;
  t7869 = -1.*t6663*t7842;
  t7871 = t7868 + t7869;
  t7668 = t6655*t6862;
  t7670 = t7343 + t7668;
  t7965 = -1.*t7799*t7801*t6517;
  t7998 = t6655*t6429*t7834;
  t8002 = -1.*t7834*t6565;
  t8032 = -0.28*t6461;
  t8034 = 0.0641*t6506;
  t8035 = t8032 + t8034;
  t8050 = t6463*t6795;
  t8051 = t6495*t8035;
  t8053 = t8050 + t8051;
  t8064 = t6429*t6517;
  t8065 = t6447*t7782*t6553;
  t8066 = t8064 + t8065;
  t8071 = -1.*t6429*t6447*t7782;
  t8072 = t6517*t6553;
  t8073 = t8071 + t8072;
  t8075 = t6655*t6660*t7782;
  t8076 = -1.*t6663*t8066;
  t8077 = t8075 + t8076;
  t8044 = -1.*t6463*t8035;
  t8046 = t6801 + t8044;
  t8054 = t7799*t8053*t6549;
  t8094 = -1.*t6429*t6447*t8053;
  t8095 = t8046*t6553;
  t8096 = t8094 + t8095;
  t8090 = t6429*t8046;
  t8091 = t6447*t8053*t6553;
  t8092 = t8090 + t8091;
  t8097 = -1.*t6655*t6429*t8096;
  t8102 = t8096*t6730;
  t8112 = t6655*t8053*t6663;
  t8113 = t6660*t8092;
  t8116 = t8112 + t8113;
  t8118 = t6655*t6660*t8053;
  t8119 = -1.*t6663*t8092;
  t8120 = t8118 + t8119;
  t7694 = t6447*t6862*t6517;
  t7695 = -1.*t6847*t6549;
  t7902 = t6814*t6517;
  t7903 = t7902 + t7599;
  t7909 = -1.*t6814*t6549;
  t7910 = t7580 + t7909;
  t8142 = -1.*t8046*t6726;
  t8150 = t6847*t6517;
  t8160 = t8046*t6549;
  t8152 = t7799*t8053*t6517;
  t8156 = t6655*t6816*t7782;
  t8143 = -1.*t7799*t8053*t6549;
  t8191 = t6912*t8073;
  t8197 = t8096*t6565;
  t8063 = t6655*t7782*t6663;
  t8068 = t6660*t8066;
  t8069 = t8063 + t8068;
  t8202 = -1.*t8096*t6730;
  t6678 = t6573*t6565;
  t6681 = -1.*t3350*t6670;
  t6682 = t6678 + t6681;
  t8240 = -1.*t7799*t8053*t6517;
  t8242 = -1.*t6655*t6816*t7782;
  t8260 = t6655*t6429*t8096;
  t8265 = -1.*t6912*t8073;
  t8273 = -1.*t8096*t6565;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t3350*t6565 - 1.*t6573*t6670)*var2[1] + t6682*var2[2];
  p_output1[10]=(-1.*t3350*t6429*t6655 - 1.*t6573*t6698)*var2[1] + (t6429*t6573*t6655 - 1.*t3350*t6698)*var2[2];
  p_output1[11]=(-1.*t3350*t6730 - 1.*t6573*t6741)*var2[1] + t6756*var2[2];
  p_output1[12]=t6670*var2[0] - 1.*t3350*t6770*var2[1] + t6573*t6770*var2[2] + (t6784*(-1.*t6698*t6870 - 1.*t6698*t6876 - 1.*t6882*t6887 - 1.*t6887*t6897) + t6741*t6919 + t6882*(t6741*t6870 + t6741*t6876 + t6784*t6887 + t6887*t6923) + t6698*t6951)*var2[3];
  p_output1[13]=t6698*var2[0] - 1.*t3350*t6897*var2[1] + t6573*t6897*var2[2] + ((-1.*t6741*t6870 - 1.*t6741*t6876 - 1.*t6784*t6887 - 1.*t6887*t6923)*t6967 + t6784*(t6670*t6870 + t6670*t6876 + t6770*t6887 + t6887*t6967) + t6741*t6981 + t6670*t7000)*var2[3];
  p_output1[14]=t6741*var2[0] - 1.*t3350*t6923*var2[1] + t6573*t6923*var2[2] + ((t6698*t6870 + t6698*t6876 + t6882*t6887 + t6887*t6897)*t6967 + t6882*(-1.*t6670*t6870 - 1.*t6670*t6876 - 1.*t6770*t6887 - 1.*t6887*t6967) + t6670*t7044 + t6698*t7077)*var2[3];
  p_output1[15]=t6660*t7090*var2[0] + (t6573*t6668 + t3350*t6663*t7090)*var2[1] + (t3350*t6668 - 1.*t6573*t6663*t7090)*var2[2] + (-1.*t6429*t6655*t6660*t6951 + t6784*(-1.*t6429*t6655*t6866 + t6429*t6655*t6660*t6876 - 1.*t6429*t6655*t6663*t6887 + t6663*t6698*t7140 - 1.*t6660*t6882*t7140 + t7144) + t6660*t6919*t7184 + t6882*(-1.*t6663*t6741*t7140 + t6660*t6784*t7140 + t6660*t6876*t7184 - 1.*t6663*t6887*t7184 + t7187 + t7191))*var2[3] + (t6738*t7131 + t6730*(t6553*t6655*t7140 + t7144) - 1.*t6553*t6655*t7171 + t6429*t6655*(t6738*t7140 + t6866*t7184 + t7187 + t7191))*var2[4];
  p_output1[16]=-1.*t6429*t6655*t6660*var2[0] + (-1.*t6553*t6573*t6655 - 1.*t3350*t6429*t6655*t6663)*var2[1] + (-1.*t3350*t6553*t6655 + t6429*t6573*t6655*t6663)*var2[2] + (t6660*t7000*t7090 + t6660*t6981*t7184 + t6784*(t6660*t6876*t7090 - 1.*t6663*t6887*t7090 - 1.*t6663*t6670*t7140 + t6660*t6967*t7140 + t7262 + t7265) + t6967*(t6663*t6741*t7140 - 1.*t6660*t6784*t7140 - 1.*t6660*t6876*t7184 + t6663*t6887*t7184 + t7283 + t7285))*var2[3] + (t6730*(t6866*t7090 + t6668*t7140 + t7262 + t7265) + t6738*t7272 + t6668*t7280 + t6565*(-1.*t6738*t7140 - 1.*t6866*t7184 + t7283 + t7285))*var2[4];
  p_output1[17]=t6660*t7184*var2[0] + (t6573*t6738 + t3350*t6663*t7184)*var2[1] + (t3350*t6738 - 1.*t6573*t6663*t7184)*var2[2] + (-1.*t6429*t6655*t6660*t7077 + t6660*t7044*t7090 + t6967*(t6429*t6655*t6866 - 1.*t6429*t6655*t6660*t6876 + t6429*t6655*t6663*t6887 - 1.*t6663*t6698*t7140 + t6660*t6882*t7140 + t7349) + t6882*(-1.*t6660*t6876*t7090 + t6663*t6887*t7090 + t6663*t6670*t7140 - 1.*t6660*t6967*t7140 + t7354 + t7357))*var2[3] + (t6668*t7346 + t6565*(-1.*t6553*t6655*t7140 + t7349) + t6429*t6655*(-1.*t6866*t7090 - 1.*t6668*t7140 + t7354 + t7357) - 1.*t6553*t6655*t7362)*var2[4];
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
  p_output1[45]=t7476*var2[0] + (-1.*t6429*t6517*t6573*t6655 - 1.*t3350*t7481)*var2[1] + (-1.*t3350*t6429*t6517*t6655 + t6573*t7481)*var2[2] + (t6919*t7528 + t6951*t7542 + t6784*(t7504 + t7508 - 1.*t6882*t7533 - 1.*t6698*t7537 - 1.*t6876*t7542 - 1.*t6887*t7546) + t6882*(t7515 + t7516 + t6876*t7528 + t6784*t7533 + t6741*t7537 + t6887*t7557))*var2[3] + (-1.*t6429*t6549*t6655*t7131 - 1.*t6429*t6447*t7171 + t6730*(-1.*t6447*t6553*t6866 + t7433 + t7440 + t7504 - 1.*t6655*t7431*t7505 + t7508) + t6429*t6655*(t6549*t6553*t6655*t6866 - 1.*t6553*t6738*t7431 + t7457 + t7462 + t7515 + t7516))*var2[4] + (-1.*t6447*t6549*t7413 + t6549*t6655*(t6447*t6862 - 1.*t6655*t7431 + t7433 + t7440) + t6655*(t7155 + t7451 + t7452) + t6447*(-1.*t6549*t6655*t6862 - 1.*t6447*t6549*t7431 + t7457 + t7462))*var2[5];
  p_output1[46]=t7542*var2[0] + (-1.*t6429*t6447*t6573 - 1.*t3350*t7546)*var2[1] + (-1.*t3350*t6429*t6447 + t6573*t7546)*var2[2] + (t7000*t7476 + t6981*t7528 + t6784*(t6876*t7476 + t6887*t7481 + t6967*t7533 + t6670*t7537 + t7623 + t7626) + t6967*(-1.*t6876*t7528 - 1.*t6784*t7533 - 1.*t6741*t7537 - 1.*t6887*t7557 + t7631 + t7632))*var2[3] + (-1.*t6429*t6549*t6655*t7272 - 1.*t6429*t6517*t6655*t7280 + t6730*(t6517*t6553*t6655*t6866 - 1.*t6553*t6668*t7431 + t7574 + t7577 + t7623 + t7626) + t6565*(-1.*t6549*t6553*t6655*t6866 + t6553*t6738*t7431 + t7587 + t7592 + t7631 + t7632))*var2[4] + (t6549*t6655*(-1.*t6517*t6655*t6862 - 1.*t6447*t6517*t7431 + t7574 + t7577) - 1.*t6447*t6517*t7583 + t6517*t6655*(t6549*t6655*t6862 + t6447*t6549*t7431 + t7587 + t7592) - 1.*t6447*t6549*t7603)*var2[5];
  p_output1[47]=t7528*var2[0] + (-1.*t6429*t6549*t6573*t6655 - 1.*t3350*t7557)*var2[1] + (-1.*t3350*t6429*t6549*t6655 + t6573*t7557)*var2[2] + (t7044*t7476 + t7077*t7542 + t6967*(t6882*t7533 + t6698*t7537 + t6876*t7542 + t6887*t7546 + t7719 + t7725) + t6882*(-1.*t6876*t7476 - 1.*t6887*t7481 - 1.*t6967*t7533 - 1.*t6670*t7537 + t7735 + t7737))*var2[3] + (-1.*t6429*t6517*t6655*t7346 - 1.*t6429*t6447*t7362 + t6565*(t6447*t6553*t6866 + t6655*t7431*t7505 + t7678 + t7681 + t7719 + t7725) + t6429*t6655*(-1.*t6517*t6553*t6655*t6866 + t6553*t6668*t7431 + t7688 + t7690 + t7735 + t7737))*var2[4] + (-1.*t6447*t6517*t7670 + t6517*t6655*(-1.*t6447*t6862 + t6655*t7431 + t7678 + t7681) + t6447*(t6517*t6655*t6862 + t6447*t6517*t7431 + t7688 + t7690) + t6655*(t7360 + t7694 + t7695))*var2[5];
  p_output1[48]=t6784*var2[0] + t6756*var2[1] + (t3350*t6730 + t6573*t6741)*var2[2] + (t6919*t7855 + t6784*(t7836 - 1.*t6882*t7859 - 1.*t6698*t7863) + t6882*(t7839 + t7844 + t6876*t7855 + t6784*t7859 + t6741*t7863 + t6887*t7871))*var2[3] + (t7131*t7821 + t6730*(-1.*t6447*t6655*t7801 + t6553*t6655*t7830 + t7836) + t6429*t6655*(t7790 + t7802 + t6738*t7830 + t7839 + t6866*t7842 + t7844))*var2[4] + (t6655*t6726*t7413 + t6447*(-1.*t6447*t6726*t6862 + t6847*t7782 + t7790 + t6726*t7796 + t7802 + t6549*t7801*t7804))*var2[5] + (0.1575*t6549 + 0.2255*t7782)*var2[15];
  p_output1[49]=(t6784*t7000 + t6981*t7855 + t6784*(t6945 + t6947 + t6948 + t6967*t7859 + t6670*t7863 + t7924) + t6967*(-1.*t6876*t7855 - 1.*t6784*t7859 - 1.*t6741*t7863 - 1.*t6887*t7871 + t7927 + t7929))*var2[3] + (t6730*t7280 + t7272*t7821 + t6730*(t6945 + t7155 + t7165 + t6668*t7830 + t7892 + t7924) + t6565*(-1.*t6738*t7830 - 1.*t6866*t7842 + t7882 + t7887 + t7927 + t7929))*var2[4] + (t6549*t6655*t7583 + t6655*t6726*t7603 + t6517*t6655*(t6447*t6726*t6862 - 1.*t6549*t7801*t7804 + t7882 + t7884 + t7886 + t7887) + t6549*t6655*(t7155 + t7451 + t7452 + t6517*t7801*t7804 + t7892 + t7894))*var2[5] + (t6549*(-1.*t6726*t6814 - 1.*t6549*t7801 + t7884 + t7886) + t6726*(t6549*t6814 + t7451 + t6517*t7801 + t7894) + t7782*t7903 + t6726*t7910)*var2[15];
  p_output1[50]=t7855*var2[0] + (t6573*t7821 - 1.*t3350*t7871)*var2[1] + (t3350*t7821 + t6573*t7871)*var2[2] + (t6784*t7044 + t6967*(t6882*t7859 + t6698*t7863 + t7998) + t6882*(t6995 + t6998 + t6999 - 1.*t6967*t7859 - 1.*t6670*t7863 + t8002))*var2[3] + (t6730*t7346 + t6565*(t6447*t6655*t7801 - 1.*t6553*t6655*t7830 + t7998) + t6429*t6655*(t6995 + t7275 + t7276 - 1.*t6668*t7830 + t7965 + t8002))*var2[4] + (t6549*t6655*t7670 + t6447*(t7275 + t7580 + t7582 - 1.*t6549*t7796 - 1.*t6517*t7801*t7804 + t7965))*var2[5] - 0.068*t6726*var2[15];
  p_output1[51]=t8069*var2[0] + (t6573*t8073 - 1.*t3350*t8077)*var2[1] + (t3350*t8073 + t6573*t8077)*var2[2] + (t6919*t6967 + t6784*(t8097 - 1.*t6882*t8116 - 1.*t6698*t8120) + t6882*(t6974 + t6978 + t6979 + t8102 + t6784*t8116 + t6741*t8120))*var2[3] + (t6565*t7131 + t6730*(-1.*t6447*t6655*t8053 + t6553*t6655*t8092 + t8097) + t6429*t6655*(t6974 + t7268 + t7270 + t8054 + t6738*t8092 + t8102))*var2[4] + (t6517*t6655*t7413 + t6447*(t7268 + t7598 + t7599 + t6726*t8046 + t6549*t7804*t8053 + t8054))*var2[5] + (0.2255*t6549 + 0.1575*t7782)*var2[15] + (-0.325*t6461 - 1.*t6461*t6809 - 1.*t6461*t8035)*var2[16];
  p_output1[52]=(t6967*t6981 + t7000*t8069 + t6784*(t6876*t8069 + t6887*t8077 + t6967*t8116 + t6670*t8120 + t8191 + t8197) + t6967*(t7074 + t7075 + t7076 - 1.*t6784*t8116 - 1.*t6741*t8120 + t8202))*var2[3] + (t6565*t7272 + t7280*t8073 + t6730*(t6866*t8066 + t6668*t8092 + t8152 + t8156 + t8191 + t8197) + t6565*(t7074 + t7360 + t7361 - 1.*t6738*t8092 + t8143 + t8202))*var2[4] + (t6517*t6655*t7603 + t6655*t7583*t7782 + t6517*t6655*(t7360 + t7694 + t7695 - 1.*t6549*t7804*t8053 + t8142 + t8143) + t6549*t6655*(-1.*t6447*t6862*t7782 + t6517*t7804*t8053 + t8150 + t8152 + t8156 + t8160))*var2[5] + (t6549*t7903 + t6517*t7910 + t6549*(-1.*t6517*t6814 + t7695 - 1.*t6549*t8053 + t8142) + t6726*(t6814*t7782 + t6517*t8053 + t8150 + t8160))*var2[15];
  p_output1[53]=t6967*var2[0] + t6682*var2[1] + (t3350*t6565 + t6573*t6670)*var2[2] + (t7044*t8069 + t6967*(t6882*t8116 + t6698*t8120 + t8260) + t6882*(-1.*t6876*t8069 - 1.*t6887*t8077 - 1.*t6967*t8116 - 1.*t6670*t8120 + t8265 + t8273))*var2[3] + (t7346*t8073 + t6565*(t6447*t6655*t8053 - 1.*t6553*t6655*t8092 + t8260) + t6429*t6655*(-1.*t6866*t8066 - 1.*t6668*t8092 + t8240 + t8242 + t8265 + t8273))*var2[4] + (t6655*t7670*t7782 + t6447*(-1.*t6517*t6847 + t6447*t6862*t7782 - 1.*t6549*t8046 - 1.*t6517*t7804*t8053 + t8240 + t8242))*var2[5] - 0.068*t6517*var2[15] + (-0.325*t6506 - 1.*t6506*t6809 - 1.*t6506*t8035)*var2[16];
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

#include "dJh_RrFoot_DiagonalStance2.hh"

namespace SymFunction
{

void dJh_RrFoot_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
