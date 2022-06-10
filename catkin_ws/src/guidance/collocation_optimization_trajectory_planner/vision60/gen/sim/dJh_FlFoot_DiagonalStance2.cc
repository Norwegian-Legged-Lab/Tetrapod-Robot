/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:05:31 GMT+02:00
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
  double t4287;
  double t2388;
  double t2857;
  double t4553;
  double t2867;
  double t5588;
  double t5832;
  double t5875;
  double t2280;
  double t1697;
  double t5876;
  double t5884;
  double t5892;
  double t5949;
  double t5859;
  double t5925;
  double t5936;
  double t665;
  double t5955;
  double t5956;
  double t5957;
  double t5958;
  double t5959;
  double t5960;
  double t5961;
  double t5962;
  double t6027;
  double t6063;
  double t6069;
  double t6070;
  double t6096;
  double t6097;
  double t6101;
  double t6102;
  double t6105;
  double t6106;
  double t6110;
  double t6139;
  double t6140;
  double t6143;
  double t6146;
  double t6147;
  double t6181;
  double t6182;
  double t6185;
  double t6213;
  double t6215;
  double t6217;
  double t6221;
  double t6222;
  double t6236;
  double t6238;
  double t6241;
  double t6242;
  double t6212;
  double t6219;
  double t6243;
  double t6246;
  double t6195;
  double t6200;
  double t6203;
  double t6211;
  double t6247;
  double t6248;
  double t6251;
  double t6252;
  double t6253;
  double t6254;
  double t6258;
  double t6259;
  double t6260;
  double t6265;
  double t6269;
  double t6273;
  double t6274;
  double t6276;
  double t6277;
  double t6278;
  double t6279;
  double t6283;
  double t6284;
  double t6286;
  double t6300;
  double t6304;
  double t6305;
  double t6327;
  double t6328;
  double t6329;
  double t6313;
  double t6315;
  double t6318;
  double t6288;
  double t6289;
  double t6291;
  double t6192;
  double t6193;
  double t6194;
  double t6388;
  double t6389;
  double t6390;
  double t6345;
  double t6346;
  double t6348;
  double t6497;
  double t6498;
  double t6499;
  double t6332;
  double t6337;
  double t6512;
  double t6513;
  double t6514;
  double t6325;
  double t6326;
  double t6334;
  double t6544;
  double t6547;
  double t6548;
  double t6516;
  double t6338;
  double t6340;
  double t6342;
  double t6541;
  double t6558;
  double t6386;
  double t6414;
  double t6391;
  double t6392;
  double t6395;
  double t6622;
  double t6624;
  double t6415;
  double t6418;
  double t6419;
  double t6642;
  double t6650;
  double t6466;
  double t6470;
  double t6464;
  double t6465;
  double t6467;
  double t6701;
  double t6472;
  double t6474;
  double t6477;
  double t6706;
  double t6709;
  double t6749;
  double t6750;
  double t6751;
  double t6526;
  double t6766;
  double t6768;
  double t6769;
  double t6772;
  double t6773;
  double t6533;
  double t6524;
  double t6527;
  double t6771;
  double t6774;
  double t6535;
  double t6537;
  double t6780;
  double t6781;
  double t6796;
  double t6797;
  double t6799;
  double t6830;
  double t6833;
  double t6836;
  double t6810;
  double t6812;
  double t6819;
  double t6820;
  double t6821;
  double t6843;
  double t6844;
  double t6845;
  double t6838;
  double t6840;
  double t6841;
  double t6824;
  double t6825;
  double t6828;
  double t6637;
  double t6628;
  double t6629;
  double t6635;
  double t6885;
  double t6886;
  double t6638;
  double t6640;
  double t6893;
  double t6895;
  double t6916;
  double t6744;
  double t6745;
  double t6746;
  double t6918;
  double t6925;
  double t6850;
  double t6851;
  double t6852;
  double t6928;
  double t6696;
  double t6712;
  double t6695;
  double t6697;
  double t6800;
  double t6989;
  double t6991;
  double t6713;
  double t6715;
  double t6996;
  double t6997;
  double t7021;
  double t7025;
  double t7036;
  double t7039;
  double t6761;
  double t6762;
  double t7093;
  double t7094;
  double t7096;
  double t7123;
  double t7124;
  double t6160;
  double t6165;
  double t6175;
  double t7113;
  double t7115;
  double t7116;
  double t7117;
  double t7107;
  double t7122;
  double t7126;
  double t7150;
  double t7151;
  double t7154;
  double t7166;
  double t7168;
  double t7169;
  double t7156;
  double t7160;
  double t7164;
  double t7176;
  double t7178;
  double t7179;
  double t7170;
  double t7181;
  double t7182;
  double t7193;
  double t7194;
  double t7195;
  double t7201;
  double t7202;
  double t7203;
  double t7197;
  double t7198;
  double t7199;
  double t6900;
  double t6902;
  double t6904;
  double t6906;
  double t6908;
  double t6909;
  double t7127;
  double t6785;
  double t6786;
  double t7226;
  double t7228;
  double t7242;
  double t7237;
  double t7224;
  double t7230;
  double t7273;
  double t7278;
  double t7279;
  double t7209;
  double t7210;
  double t7211;
  double t6984;
  double t6985;
  double t7321;
  double t7345;
  double t7351;
  double t7372;
  double t7373;
  double t7374;
  double t7401;
  double t7402;
  double t7403;
  double t7387;
  double t7388;
  double t7389;
  double t7414;
  double t7415;
  double t7416;
  double t7422;
  double t7423;
  double t7427;
  double t7396;
  double t7397;
  double t7405;
  double t7446;
  double t7447;
  double t7448;
  double t7442;
  double t7443;
  double t7444;
  double t7449;
  double t7453;
  double t7469;
  double t7470;
  double t7471;
  double t7465;
  double t7466;
  double t7467;
  double t7001;
  double t7002;
  double t7250;
  double t7252;
  double t7258;
  double t7259;
  double t7486;
  double t7492;
  double t7499;
  double t7493;
  double t7495;
  double t7487;
  double t7523;
  double t7527;
  double t7385;
  double t7390;
  double t7391;
  double t7531;
  double t6052;
  double t6054;
  double t6055;
  double t7570;
  double t7572;
  double t7591;
  double t7596;
  double t7600;
  t4287 = Cos(var1[7]);
  t2388 = Cos(var1[8]);
  t2857 = Sin(var1[7]);
  t4553 = Sin(var1[8]);
  t2867 = t2388*t2857;
  t5588 = -1.*t4287*t4553;
  t5832 = t2867 + t5588;
  t5875 = Sin(var1[5]);
  t2280 = Sin(var1[6]);
  t1697 = Cos(var1[5]);
  t5876 = t4287*t2388;
  t5884 = t2857*t4553;
  t5892 = t5876 + t5884;
  t5949 = Cos(var1[3]);
  t5859 = -1.*t1697*t2280*t5832;
  t5925 = t5875*t5892;
  t5936 = t5859 + t5925;
  t665 = Sin(var1[3]);
  t5955 = Cos(var1[4]);
  t5956 = Cos(var1[6]);
  t5957 = t5955*t5956*t5832;
  t5958 = Sin(var1[4]);
  t5959 = t5875*t2280*t5832;
  t5960 = t1697*t5892;
  t5961 = t5959 + t5960;
  t5962 = -1.*t5958*t5961;
  t6027 = t5957 + t5962;
  t6063 = t5956*t5958*t5875;
  t6069 = t5955*t2280;
  t6070 = t6063 + t6069;
  t6096 = -1.*t2388*t2857;
  t6097 = t4287*t4553;
  t6101 = t6096 + t6097;
  t6102 = t5875*t6101;
  t6105 = -1.*t1697*t2280*t5892;
  t6106 = t6102 + t6105;
  t6110 = t5955*t5956*t5892;
  t6139 = t1697*t6101;
  t6140 = t5875*t2280*t5892;
  t6143 = t6139 + t6140;
  t6146 = -1.*t5958*t6143;
  t6147 = t6110 + t6146;
  t6181 = -1.*t5956*t5958*t5832;
  t6182 = -1.*t5955*t5961;
  t6185 = t6181 + t6182;
  t6213 = -0.0641*t2388;
  t6215 = -0.28*t4553;
  t6217 = t6213 + t6215;
  t6221 = -1.*t2388;
  t6222 = 1. + t6221;
  t6236 = 0.075*t6222;
  t6238 = 0.355*t2388;
  t6241 = -0.0641*t4553;
  t6242 = t6236 + t6238 + t6241;
  t6212 = -0.325*t2857;
  t6219 = t4287*t6217;
  t6243 = t2857*t6242;
  t6246 = t6212 + t6219 + t6243;
  t6195 = -1.*t5956;
  t6200 = 1. + t6195;
  t6203 = 0.1575*t6200;
  t6211 = 0.2255*t5956;
  t6247 = -1.*t2280*t6246;
  t6248 = t6203 + t6211 + t6247;
  t6251 = -1.*t5875*t6248;
  t6252 = -1.*t4287;
  t6253 = 1. + t6252;
  t6254 = 0.325*t6253;
  t6258 = -1.*t2857*t6217;
  t6259 = t4287*t6242;
  t6260 = t6254 + t6258 + t6259;
  t6265 = t1697*t6260;
  t6269 = t6251 + t6265;
  t6273 = -1.*t5958*t6269;
  t6274 = 0.068*t2280;
  t6276 = t5956*t6246;
  t6277 = t6274 + t6276;
  t6278 = t5955*t6277;
  t6279 = t6273 + t6278;
  t6283 = -1.*t5955*t5956*t5875;
  t6284 = t5958*t2280;
  t6286 = t6283 + t6284;
  t6300 = t5955*t6269;
  t6304 = t5958*t6277;
  t6305 = t6300 + t6304;
  t6327 = t1697*t6248;
  t6328 = t5875*t6260;
  t6329 = t6327 + t6328;
  t6313 = t5956*t5958*t5892;
  t6315 = t5955*t6143;
  t6318 = t6313 + t6315;
  t6288 = -1.*t5955*t6269;
  t6289 = -1.*t5958*t6277;
  t6291 = t6288 + t6289;
  t6192 = t5955*t5956*t5875;
  t6193 = -1.*t5958*t2280;
  t6194 = t6192 + t6193;
  t6388 = t5956*t5958*t5832;
  t6389 = t5955*t5961;
  t6390 = t6388 + t6389;
  t6345 = -1.*t5956*t5958*t5892;
  t6346 = -1.*t5955*t6143;
  t6348 = t6345 + t6346;
  t6497 = t1697*t2280*t5832;
  t6498 = -1.*t5875*t5892;
  t6499 = t6497 + t6498;
  t6332 = -1.*t1697*t5956*t6329;
  t6337 = t6329*t6106;
  t6512 = -1.*t1697*t6248;
  t6513 = -1.*t5875*t6260;
  t6514 = t6512 + t6513;
  t6325 = -1.*t6070*t6279;
  t6326 = -1.*t6286*t6305;
  t6334 = t6325 + t6326 + t6332;
  t6544 = -1.*t5875*t6101;
  t6547 = t1697*t2280*t5892;
  t6548 = t6544 + t6547;
  t6516 = t5956*t5875*t6329;
  t6338 = t6305*t6318;
  t6340 = t6279*t6147;
  t6342 = t6337 + t6338 + t6340;
  t6541 = t6269*t6106;
  t6558 = t6329*t6143;
  t6386 = t6329*t5936;
  t6414 = -1.*t6329*t6106;
  t6391 = t6305*t6390;
  t6392 = t6279*t6027;
  t6395 = t6386 + t6391 + t6392;
  t6622 = t6329*t5961;
  t6624 = t6269*t5936;
  t6415 = -1.*t6305*t6318;
  t6418 = -1.*t6279*t6147;
  t6419 = t6414 + t6415 + t6418;
  t6642 = -1.*t6269*t6106;
  t6650 = -1.*t6329*t6143;
  t6466 = t1697*t5956*t6329;
  t6470 = -1.*t6329*t5936;
  t6464 = t6070*t6279;
  t6465 = t6286*t6305;
  t6467 = t6464 + t6465 + t6466;
  t6701 = -1.*t5956*t5875*t6329;
  t6472 = -1.*t6305*t6390;
  t6474 = -1.*t6279*t6027;
  t6477 = t6470 + t6472 + t6474;
  t6706 = -1.*t6329*t5961;
  t6709 = -1.*t6269*t5936;
  t6749 = -1.*t5956*t5958*t5875*t5832;
  t6750 = -1.*t5955*t2280*t5832;
  t6751 = t6749 + t6750;
  t6526 = -1.*t2280*t6277;
  t6766 = -0.068*t2280;
  t6768 = -1.*t5956*t6246;
  t6769 = t6766 + t6768;
  t6772 = 0.068*t5956;
  t6773 = t6772 + t6247;
  t6533 = t5956*t6277*t5892;
  t6524 = t5956*t5875*t6269;
  t6527 = t6524 + t6332 + t6526;
  t6771 = -1.*t5956*t6277;
  t6774 = -1.*t2280*t6773;
  t6535 = t6269*t6143;
  t6537 = t6533 + t6337 + t6535;
  t6780 = -1.*t2280*t6277*t5892;
  t6781 = t5956*t6773*t5892;
  t6796 = t1697*t2280*t6329;
  t6797 = Power(t1697,2);
  t6799 = -1.*t6797*t5956*t6769;
  t6830 = t5956*t5958;
  t6833 = t5955*t5875*t2280;
  t6836 = t6830 + t6833;
  t6810 = -1.*t1697*t5956*t6329*t5892;
  t6812 = t1697*t6769*t6106;
  t6819 = t5955*t5956*t5875*t5892;
  t6820 = -1.*t5958*t2280*t5892;
  t6821 = t6819 + t6820;
  t6843 = -1.*t5955*t5875*t6769;
  t6844 = t5958*t6773;
  t6845 = t6843 + t6844;
  t6838 = t5958*t5875*t6769;
  t6840 = t5955*t6773;
  t6841 = t6838 + t6840;
  t6824 = t5955*t5956;
  t6825 = -1.*t5958*t5875*t2280;
  t6828 = t6824 + t6825;
  t6637 = -1.*t5956*t6277*t5892;
  t6628 = t5956*t6277*t5832;
  t6629 = t6269*t5961;
  t6635 = t6628 + t6629 + t6386;
  t6885 = -1.*t2280*t6277*t5832;
  t6886 = t5956*t6773*t5832;
  t6638 = -1.*t6269*t6143;
  t6640 = t6637 + t6414 + t6638;
  t6893 = t2280*t6277*t5892;
  t6895 = -1.*t5956*t6773*t5892;
  t6916 = -1.*t1697*t5956*t6329*t5832;
  t6744 = t5955*t5956*t5875*t5832;
  t6745 = -1.*t5958*t2280*t5832;
  t6746 = t6744 + t6745;
  t6918 = t1697*t6769*t5936;
  t6925 = t1697*t5956*t6329*t5892;
  t6850 = -1.*t5956*t5958*t5875*t5892;
  t6851 = -1.*t5955*t2280*t5892;
  t6852 = t6850 + t6851;
  t6928 = -1.*t1697*t6769*t6106;
  t6696 = t2280*t6277;
  t6712 = -1.*t5956*t6277*t5832;
  t6695 = -1.*t5956*t5875*t6269;
  t6697 = t6695 + t6466 + t6696;
  t6800 = Power(t5875,2);
  t6989 = t5956*t6277;
  t6991 = t2280*t6773;
  t6713 = -1.*t6269*t5961;
  t6715 = t6712 + t6713 + t6470;
  t6996 = t2280*t6277*t5832;
  t6997 = -1.*t5956*t6773*t5832;
  t7021 = -1.*t1697*t2280*t6329;
  t7025 = t6797*t5956*t6769;
  t7036 = t1697*t5956*t6329*t5832;
  t7039 = -1.*t1697*t6769*t5936;
  t6761 = -1.*t5956*t6248;
  t6762 = t6526 + t6761;
  t7093 = -1.*t4287*t2388;
  t7094 = -1.*t2857*t4553;
  t7096 = t7093 + t7094;
  t7123 = -0.325*t4287;
  t7124 = t7123 + t6258 + t6259;
  t6160 = t5949*t6106;
  t6165 = -1.*t665*t6147;
  t6175 = t6160 + t6165;
  t7113 = 0.325*t2857;
  t7115 = -1.*t4287*t6217;
  t7116 = -1.*t2857*t6242;
  t7117 = t7113 + t7115 + t7116;
  t7107 = t5956*t6277*t6101;
  t7122 = Power(t5956,2);
  t7126 = t7122*t7124*t5892;
  t7150 = -1.*t1697*t2280*t6101;
  t7151 = t5875*t7096;
  t7154 = t7150 + t7151;
  t7166 = -1.*t1697*t2280*t7124;
  t7168 = t5875*t7117;
  t7169 = t7166 + t7168;
  t7156 = t5875*t2280*t7124;
  t7160 = t1697*t7117;
  t7164 = t7156 + t7160;
  t7176 = t5875*t2280*t6101;
  t7178 = t1697*t7096;
  t7179 = t7176 + t7178;
  t7170 = -1.*t1697*t5956*t7169;
  t7181 = t6329*t7154;
  t7182 = t7169*t6106;
  t7193 = t5956*t5958*t6101;
  t7194 = t5955*t7179;
  t7195 = t7193 + t7194;
  t7201 = t5955*t7164;
  t7202 = t5956*t5958*t7124;
  t7203 = t7201 + t7202;
  t7197 = -1.*t5958*t7164;
  t7198 = t5955*t5956*t7124;
  t7199 = t7197 + t7198;
  t6900 = -1.*t6260*t6101;
  t6902 = t2280*t6248*t5892;
  t6904 = t6900 + t6637 + t6902;
  t6906 = -1.*t2280*t6248*t5832;
  t6908 = t6260*t5892;
  t6909 = t6628 + t6906 + t6908;
  t7127 = Power(t2280,2);
  t6785 = t6260*t6101;
  t6786 = -1.*t2280*t6248*t5892;
  t7226 = -1.*t7117*t6101;
  t7228 = -1.*t6260*t7096;
  t7242 = t7117*t5892;
  t7237 = t7122*t7124*t5832;
  t7224 = -1.*t5956*t6277*t6101;
  t7230 = -1.*t7122*t7124*t5892;
  t7273 = t7169*t5936;
  t7278 = -1.*t6329*t7154;
  t7279 = -1.*t7169*t6106;
  t7209 = t5955*t5956*t6101;
  t7210 = -1.*t5958*t7179;
  t7211 = t7209 + t7210;
  t6984 = t5956*t6248;
  t6985 = t6696 + t6984;
  t7321 = -1.*t7122*t7124*t5832;
  t7345 = t1697*t5956*t7169;
  t7351 = -1.*t7169*t5936;
  t7372 = -0.28*t2388;
  t7373 = 0.0641*t4553;
  t7374 = t7372 + t7373;
  t7401 = t2857*t6217;
  t7402 = t4287*t7374;
  t7403 = t7401 + t7402;
  t7387 = t1697*t5832;
  t7388 = t5875*t2280*t7096;
  t7389 = t7387 + t7388;
  t7414 = t5875*t5832;
  t7415 = -1.*t1697*t2280*t7096;
  t7416 = t7414 + t7415;
  t7422 = t5955*t5956*t7096;
  t7423 = -1.*t5958*t7389;
  t7427 = t7422 + t7423;
  t7396 = -1.*t2857*t7374;
  t7397 = t6219 + t7396;
  t7405 = t7122*t7403*t5892;
  t7446 = -1.*t1697*t2280*t7403;
  t7447 = t5875*t7397;
  t7448 = t7446 + t7447;
  t7442 = t5875*t2280*t7403;
  t7443 = t1697*t7397;
  t7444 = t7442 + t7443;
  t7449 = -1.*t1697*t5956*t7448;
  t7453 = t7448*t6106;
  t7469 = t5955*t7444;
  t7470 = t5956*t5958*t7403;
  t7471 = t7469 + t7470;
  t7465 = -1.*t5958*t7444;
  t7466 = t5955*t5956*t7403;
  t7467 = t7465 + t7466;
  t7001 = t2280*t6248*t5832;
  t7002 = -1.*t6260*t5892;
  t7250 = t6246*t5832;
  t7252 = t7250 + t6908;
  t7258 = -1.*t6246*t5892;
  t7259 = t6900 + t7258;
  t7486 = -1.*t7397*t6101;
  t7492 = t6260*t5832;
  t7499 = t7397*t5892;
  t7493 = t7122*t7403*t5832;
  t7495 = t5956*t6277*t7096;
  t7487 = -1.*t7122*t7403*t5892;
  t7523 = t6329*t7416;
  t7527 = t7448*t5936;
  t7385 = t5956*t5958*t7096;
  t7390 = t5955*t7389;
  t7391 = t7385 + t7390;
  t7531 = -1.*t7448*t6106;
  t6052 = t5949*t5936;
  t6054 = -1.*t665*t6027;
  t6055 = t6052 + t6054;
  t7570 = -1.*t7122*t7403*t5832;
  t7572 = -1.*t5956*t6277*t7096;
  t7591 = t1697*t5956*t7448;
  t7596 = -1.*t6329*t7416;
  t7600 = -1.*t7448*t5936;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t5949*t6027 - 1.*t5936*t665)*var2[1] + t6055*var2[2];
  p_output1[10]=(-1.*t5949*t6070 - 1.*t1697*t5956*t665)*var2[1] + (t1697*t5949*t5956 - 1.*t6070*t665)*var2[2];
  p_output1[11]=(-1.*t5949*t6147 - 1.*t6106*t665)*var2[1] + t6175*var2[2];
  p_output1[12]=t6027*var2[0] - 1.*t6185*t665*var2[1] + t5949*t6185*var2[2] + ((-1.*t6194*t6279 - 1.*t6279*t6286 - 1.*t6070*t6291 - 1.*t6070*t6305)*t6318 + t6147*t6334 + t6070*t6342 + t6286*(t6147*t6291 + t6147*t6305 + t6279*t6318 + t6279*t6348))*var2[3];
  p_output1[13]=t6070*var2[0] - 1.*t6194*t665*var2[1] + t5949*t6194*var2[2] + ((-1.*t6147*t6291 - 1.*t6147*t6305 - 1.*t6279*t6318 - 1.*t6279*t6348)*t6390 + t6318*(t6185*t6279 + t6027*t6291 + t6027*t6305 + t6279*t6390) + t6147*t6395 + t6027*t6419)*var2[3];
  p_output1[14]=t6147*var2[0] - 1.*t6348*t665*var2[1] + t5949*t6348*var2[2] + ((t6194*t6279 + t6279*t6286 + t6070*t6291 + t6070*t6305)*t6390 + t6286*(-1.*t6185*t6279 - 1.*t6027*t6291 - 1.*t6027*t6305 - 1.*t6279*t6390) + t6027*t6467 + t6070*t6477)*var2[3];
  p_output1[15]=t5955*t6499*var2[0] + (t5949*t5961 + t5958*t6499*t665)*var2[1] + (-1.*t5949*t5958*t6499 + t5961*t665)*var2[2] + (-1.*t1697*t5955*t5956*t6342 + t6318*(-1.*t1697*t5956*t6269 - 1.*t1697*t5956*t5958*t6279 + t1697*t5955*t5956*t6305 + t5958*t6070*t6514 - 1.*t5955*t6286*t6514 + t6516) + t5955*t6334*t6548 + t6286*(-1.*t5958*t6147*t6514 + t5955*t6318*t6514 + t6541 - 1.*t5958*t6279*t6548 + t5955*t6305*t6548 + t6558))*var2[3] + (t6106*(t5875*t5956*t6514 + t6516) + t6143*t6527 - 1.*t5875*t5956*t6537 + t1697*t5956*(t6143*t6514 + t6541 + t6269*t6548 + t6558))*var2[4];
  p_output1[16]=-1.*t1697*t5955*t5956*var2[0] + (-1.*t5875*t5949*t5956 - 1.*t1697*t5956*t5958*t665)*var2[1] + (t1697*t5949*t5956*t5958 - 1.*t5875*t5956*t665)*var2[2] + (t5955*t6419*t6499 + t5955*t6395*t6548 + t6318*(-1.*t5958*t6279*t6499 + t5955*t6305*t6499 - 1.*t5958*t6027*t6514 + t5955*t6390*t6514 + t6622 + t6624) + t6390*(t5958*t6147*t6514 - 1.*t5955*t6318*t6514 + t5958*t6279*t6548 - 1.*t5955*t6305*t6548 + t6642 + t6650))*var2[3] + (t6106*(t6269*t6499 + t5961*t6514 + t6622 + t6624) + t6143*t6635 + t5961*t6640 + t5936*(-1.*t6143*t6514 - 1.*t6269*t6548 + t6642 + t6650))*var2[4];
  p_output1[17]=t5955*t6548*var2[0] + (t5949*t6143 + t5958*t6548*t665)*var2[1] + (-1.*t5949*t5958*t6548 + t6143*t665)*var2[2] + (-1.*t1697*t5955*t5956*t6477 + t5955*t6467*t6499 + t6390*(t1697*t5956*t6269 + t1697*t5956*t5958*t6279 - 1.*t1697*t5955*t5956*t6305 - 1.*t5958*t6070*t6514 + t5955*t6286*t6514 + t6701) + t6286*(t5958*t6279*t6499 - 1.*t5955*t6305*t6499 + t5958*t6027*t6514 - 1.*t5955*t6390*t6514 + t6706 + t6709))*var2[3] + (t5961*t6697 + t5936*(-1.*t5875*t5956*t6514 + t6701) + t1697*t5956*(-1.*t6269*t6499 - 1.*t5961*t6514 + t6706 + t6709) - 1.*t5875*t5956*t6715)*var2[4];
  p_output1[18]=t6746*var2[0] + (-1.*t1697*t5832*t5949*t5956 - 1.*t665*t6751)*var2[1] + (-1.*t1697*t5832*t5956*t665 + t5949*t6751)*var2[2] + (t6334*t6821 + t6342*t6836 + t6318*(t6796 + t6799 - 1.*t6279*t6828 - 1.*t6305*t6836 - 1.*t6070*t6841 - 1.*t6286*t6845) + t6286*(t6810 + t6812 + t6305*t6821 + t6147*t6841 + t6318*t6845 + t6279*t6852))*var2[3] + (-1.*t1697*t5892*t5956*t6527 - 1.*t1697*t2280*t6537 + t6106*(-1.*t2280*t5875*t6269 + t6771 + t6774 + t6796 + t6799 - 1.*t5956*t6769*t6800) + t1697*t5956*(t5875*t5892*t5956*t6269 - 1.*t5875*t6143*t6769 + t6780 + t6781 + t6810 + t6812))*var2[4] + (-1.*t2280*t5892*t6762 + t5892*t5956*(t2280*t6248 - 1.*t5956*t6769 + t6771 + t6774) + t2280*(-1.*t5892*t5956*t6248 - 1.*t2280*t5892*t6769 + t6780 + t6781) + t5956*(t6533 + t6785 + t6786))*var2[5];
  p_output1[19]=t6836*var2[0] + (-1.*t1697*t2280*t5949 - 1.*t665*t6828)*var2[1] + (-1.*t1697*t2280*t665 + t5949*t6828)*var2[2] + (t6419*t6746 + t6395*t6821 + t6318*(t6305*t6746 + t6279*t6751 + t6027*t6841 + t6390*t6845 + t6916 + t6918) + t6390*(-1.*t6305*t6821 - 1.*t6147*t6841 - 1.*t6318*t6845 - 1.*t6279*t6852 + t6925 + t6928))*var2[3] + (-1.*t1697*t5892*t5956*t6635 - 1.*t1697*t5832*t5956*t6640 + t6106*(t5832*t5875*t5956*t6269 - 1.*t5875*t5961*t6769 + t6885 + t6886 + t6916 + t6918) + t5936*(-1.*t5875*t5892*t5956*t6269 + t5875*t6143*t6769 + t6893 + t6895 + t6925 + t6928))*var2[4] + (t5892*t5956*(-1.*t5832*t5956*t6248 - 1.*t2280*t5832*t6769 + t6885 + t6886) + t5832*t5956*(t5892*t5956*t6248 + t2280*t5892*t6769 + t6893 + t6895) - 1.*t2280*t5832*t6904 - 1.*t2280*t5892*t6909)*var2[5];
  p_output1[20]=t6821*var2[0] + (-1.*t1697*t5892*t5949*t5956 - 1.*t665*t6852)*var2[1] + (-1.*t1697*t5892*t5956*t665 + t5949*t6852)*var2[2] + (t6467*t6746 + t6477*t6836 + t6390*(t6279*t6828 + t6305*t6836 + t6070*t6841 + t6286*t6845 + t7021 + t7025) + t6286*(-1.*t6305*t6746 - 1.*t6279*t6751 - 1.*t6027*t6841 - 1.*t6390*t6845 + t7036 + t7039))*var2[3] + (-1.*t1697*t5832*t5956*t6697 - 1.*t1697*t2280*t6715 + t5936*(t2280*t5875*t6269 + t5956*t6769*t6800 + t6989 + t6991 + t7021 + t7025) + t1697*t5956*(-1.*t5832*t5875*t5956*t6269 + t5875*t5961*t6769 + t6996 + t6997 + t7036 + t7039))*var2[4] + (-1.*t2280*t5832*t6985 + t5832*t5956*(-1.*t2280*t6248 + t5956*t6769 + t6989 + t6991) + t2280*(t5832*t5956*t6248 + t2280*t5832*t6769 + t6996 + t6997) + t5956*(t6712 + t7001 + t7002))*var2[5];
  p_output1[21]=t6318*var2[0] + t6175*var2[1] + (t5949*t6147 + t6106*t665)*var2[2] + (t6334*t7195 + t6318*(t7170 - 1.*t6070*t7199 - 1.*t6286*t7203) + t6286*(t7181 + t7182 + t6305*t7195 + t6147*t7199 + t6318*t7203 + t6279*t7211))*var2[3] + (t6527*t7154 + t6106*(-1.*t2280*t5956*t7124 + t5875*t5956*t7164 + t7170) + t1697*t5956*(t7107 + t7126 + t6143*t7164 + t6269*t7179 + t7181 + t7182))*var2[4] + (t5956*t6101*t6762 + t2280*(-1.*t2280*t6101*t6248 + t6260*t7096 + t7107 + t6101*t7117 + t7126 + t5892*t7124*t7127))*var2[5] + (-0.1575*t5892 - 0.2255*t7096)*var2[6];
  p_output1[22]=(t6318*t6419 + t6395*t7195 + t6318*(t6337 + t6338 + t6340 + t6027*t7199 + t6390*t7203 + t7273) + t6390*(-1.*t6305*t7195 - 1.*t6147*t7199 - 1.*t6318*t7203 - 1.*t6279*t7211 + t7278 + t7279))*var2[3] + (t6106*t6640 + t6635*t7154 + t6106*(t6337 + t6533 + t6535 + t5961*t7164 + t7237 + t7273) + t5936*(-1.*t6143*t7164 - 1.*t6269*t7179 + t7224 + t7230 + t7278 + t7279))*var2[4] + (t5892*t5956*t6904 + t5956*t6101*t6909 + t5832*t5956*(t2280*t6101*t6248 - 1.*t5892*t7124*t7127 + t7224 + t7226 + t7228 + t7230) + t5892*t5956*(t6533 + t6785 + t6786 + t5832*t7124*t7127 + t7237 + t7242))*var2[5] + (t5892*(-1.*t6101*t6246 - 1.*t5892*t7124 + t7226 + t7228) + t6101*(t5892*t6246 + t6785 + t5832*t7124 + t7242) + t7096*t7252 + t6101*t7259)*var2[6];
  p_output1[23]=t7195*var2[0] + (t5949*t7154 - 1.*t665*t7211)*var2[1] + (t665*t7154 + t5949*t7211)*var2[2] + (t6318*t6467 + t6390*(t6070*t7199 + t6286*t7203 + t7345) + t6286*(t6414 + t6415 + t6418 - 1.*t6027*t7199 - 1.*t6390*t7203 + t7351))*var2[3] + (t6106*t6697 + t5936*(t2280*t5956*t7124 - 1.*t5875*t5956*t7164 + t7345) + t1697*t5956*(t6414 + t6637 + t6638 - 1.*t5961*t7164 + t7321 + t7351))*var2[4] + (t5892*t5956*t6985 + t2280*(t6637 + t6900 + t6902 - 1.*t5892*t7117 - 1.*t5832*t7124*t7127 + t7321))*var2[5] + 0.068*t6101*var2[6];
  p_output1[24]=t7391*var2[0] + (t5949*t7416 - 1.*t665*t7427)*var2[1] + (t665*t7416 + t5949*t7427)*var2[2] + (t6334*t6390 + t6318*(t7449 - 1.*t6070*t7467 - 1.*t6286*t7471) + t6286*(t6386 + t6391 + t6392 + t7453 + t6147*t7467 + t6318*t7471))*var2[3] + (t5936*t6527 + t6106*(-1.*t2280*t5956*t7403 + t5875*t5956*t7444 + t7449) + t1697*t5956*(t6386 + t6628 + t6629 + t7405 + t6143*t7444 + t7453))*var2[4] + (t5832*t5956*t6762 + t2280*(t6628 + t6906 + t6908 + t6101*t7397 + t5892*t7127*t7403 + t7405))*var2[5] + (-0.2255*t5892 - 0.1575*t7096)*var2[6] + (0.325*t2388 - 1.*t2388*t6242 - 1.*t2388*t7374)*var2[7];
  p_output1[25]=(t6390*t6395 + t6419*t7391 + t6318*(t6305*t7391 + t6279*t7427 + t6027*t7467 + t6390*t7471 + t7523 + t7527) + t6390*(t6470 + t6472 + t6474 - 1.*t6147*t7467 - 1.*t6318*t7471 + t7531))*var2[3] + (t5936*t6635 + t6640*t7416 + t6106*(t6269*t7389 + t5961*t7444 + t7493 + t7495 + t7523 + t7527) + t5936*(t6470 + t6712 + t6713 - 1.*t6143*t7444 + t7487 + t7531))*var2[4] + (t5832*t5956*t6909 + t5956*t6904*t7096 + t5832*t5956*(t6712 + t7001 + t7002 - 1.*t5892*t7127*t7403 + t7486 + t7487) + t5892*t5956*(-1.*t2280*t6248*t7096 + t5832*t7127*t7403 + t7492 + t7493 + t7495 + t7499))*var2[5] + (t5892*t7252 + t5832*t7259 + t5892*(-1.*t5832*t6246 + t7002 - 1.*t5892*t7403 + t7486) + t6101*(t6246*t7096 + t5832*t7403 + t7492 + t7499))*var2[6];
  p_output1[26]=t6390*var2[0] + t6055*var2[1] + (t5949*t6027 + t5936*t665)*var2[2] + (t6467*t7391 + t6390*(t6070*t7467 + t6286*t7471 + t7591) + t6286*(-1.*t6305*t7391 - 1.*t6279*t7427 - 1.*t6027*t7467 - 1.*t6390*t7471 + t7596 + t7600))*var2[3] + (t6697*t7416 + t5936*(t2280*t5956*t7403 - 1.*t5875*t5956*t7444 + t7591) + t1697*t5956*(-1.*t6269*t7389 - 1.*t5961*t7444 + t7570 + t7572 + t7596 + t7600))*var2[4] + (t5956*t6985*t7096 + t2280*(-1.*t5832*t6260 + t2280*t6248*t7096 - 1.*t5892*t7397 - 1.*t5832*t7127*t7403 + t7570 + t7572))*var2[5] + 0.068*t5832*var2[6] + (0.325*t4553 - 1.*t4553*t6242 - 1.*t4553*t7374)*var2[7];
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
