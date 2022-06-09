/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 18:49:24 GMT+02:00
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
  double t6010;
  double t5987;
  double t5998;
  double t6014;
  double t6005;
  double t6015;
  double t6016;
  double t6018;
  double t5986;
  double t5985;
  double t6019;
  double t6020;
  double t6021;
  double t6059;
  double t6017;
  double t6022;
  double t6023;
  double t5972;
  double t6063;
  double t6068;
  double t6069;
  double t6071;
  double t6072;
  double t6073;
  double t6074;
  double t6075;
  double t6077;
  double t6088;
  double t6090;
  double t6091;
  double t6103;
  double t6104;
  double t6105;
  double t6106;
  double t6108;
  double t6109;
  double t6112;
  double t6113;
  double t6114;
  double t6115;
  double t6116;
  double t6118;
  double t6128;
  double t6129;
  double t6130;
  double t6144;
  double t6145;
  double t6146;
  double t6148;
  double t6149;
  double t6150;
  double t6151;
  double t6152;
  double t6153;
  double t6143;
  double t6147;
  double t6154;
  double t6155;
  double t6139;
  double t6140;
  double t6141;
  double t6142;
  double t6156;
  double t6157;
  double t6158;
  double t6159;
  double t6160;
  double t6161;
  double t6162;
  double t6163;
  double t6164;
  double t6165;
  double t6166;
  double t6167;
  double t6168;
  double t6169;
  double t6170;
  double t6171;
  double t6172;
  double t6174;
  double t6175;
  double t6176;
  double t6182;
  double t6183;
  double t6184;
  double t6193;
  double t6194;
  double t6195;
  double t6187;
  double t6188;
  double t6189;
  double t6178;
  double t6179;
  double t6180;
  double t6135;
  double t6136;
  double t6137;
  double t6220;
  double t6221;
  double t6222;
  double t6204;
  double t6205;
  double t6206;
  double t6275;
  double t6276;
  double t6277;
  double t6196;
  double t6199;
  double t6287;
  double t6288;
  double t6289;
  double t6191;
  double t6192;
  double t6197;
  double t6303;
  double t6304;
  double t6305;
  double t6291;
  double t6200;
  double t6201;
  double t6202;
  double t6302;
  double t6308;
  double t6219;
  double t6233;
  double t6223;
  double t6224;
  double t6225;
  double t6341;
  double t6343;
  double t6234;
  double t6235;
  double t6236;
  double t6354;
  double t6357;
  double t6258;
  double t6261;
  double t6256;
  double t6257;
  double t6259;
  double t6393;
  double t6262;
  double t6263;
  double t6264;
  double t6397;
  double t6399;
  double t6431;
  double t6432;
  double t6433;
  double t6295;
  double t6444;
  double t6445;
  double t6446;
  double t6449;
  double t6450;
  double t6298;
  double t6294;
  double t6296;
  double t6448;
  double t6451;
  double t6299;
  double t6300;
  double t6456;
  double t6457;
  double t6469;
  double t6470;
  double t6471;
  double t6493;
  double t6494;
  double t6495;
  double t6478;
  double t6479;
  double t6485;
  double t6486;
  double t6487;
  double t6501;
  double t6502;
  double t6503;
  double t6497;
  double t6498;
  double t6499;
  double t6489;
  double t6490;
  double t6491;
  double t6350;
  double t6346;
  double t6347;
  double t6348;
  double t6530;
  double t6531;
  double t6351;
  double t6352;
  double t6536;
  double t6537;
  double t6553;
  double t6426;
  double t6427;
  double t6428;
  double t6555;
  double t6560;
  double t6508;
  double t6509;
  double t6510;
  double t6561;
  double t6389;
  double t6402;
  double t6388;
  double t6390;
  double t6472;
  double t6597;
  double t6598;
  double t6403;
  double t6404;
  double t6603;
  double t6604;
  double t6616;
  double t6617;
  double t6623;
  double t6625;
  double t6441;
  double t6442;
  double t6647;
  double t6648;
  double t6649;
  double t6665;
  double t6666;
  double t6123;
  double t6124;
  double t6125;
  double t6658;
  double t6659;
  double t6660;
  double t6661;
  double t6656;
  double t6664;
  double t6667;
  double t6679;
  double t6680;
  double t6681;
  double t6687;
  double t6688;
  double t6689;
  double t6683;
  double t6684;
  double t6685;
  double t6694;
  double t6695;
  double t6696;
  double t6690;
  double t6698;
  double t6699;
  double t6705;
  double t6706;
  double t6707;
  double t6713;
  double t6714;
  double t6715;
  double t6709;
  double t6710;
  double t6711;
  double t6541;
  double t6542;
  double t6543;
  double t6545;
  double t6546;
  double t6547;
  double t6668;
  double t6461;
  double t6462;
  double t6735;
  double t6736;
  double t6743;
  double t6741;
  double t6733;
  double t6737;
  double t6767;
  double t6771;
  double t6772;
  double t6720;
  double t6721;
  double t6722;
  double t6593;
  double t6594;
  double t6796;
  double t6812;
  double t6818;
  double t6837;
  double t6838;
  double t6839;
  double t6858;
  double t6859;
  double t6860;
  double t6848;
  double t6849;
  double t6850;
  double t6867;
  double t6868;
  double t6869;
  double t6871;
  double t6872;
  double t6873;
  double t6855;
  double t6856;
  double t6861;
  double t6886;
  double t6887;
  double t6888;
  double t6882;
  double t6883;
  double t6884;
  double t6889;
  double t6893;
  double t6904;
  double t6905;
  double t6906;
  double t6900;
  double t6901;
  double t6902;
  double t6608;
  double t6609;
  double t6748;
  double t6749;
  double t6755;
  double t6756;
  double t6919;
  double t6924;
  double t6929;
  double t6925;
  double t6927;
  double t6920;
  double t6947;
  double t6950;
  double t6847;
  double t6851;
  double t6852;
  double t6954;
  double t6082;
  double t6083;
  double t6084;
  double t6984;
  double t6986;
  double t7000;
  double t7004;
  double t7007;
  t6010 = Cos(var1[7]);
  t5987 = Cos(var1[8]);
  t5998 = Sin(var1[7]);
  t6014 = Sin(var1[8]);
  t6005 = t5987*t5998;
  t6015 = -1.*t6010*t6014;
  t6016 = t6005 + t6015;
  t6018 = Sin(var1[5]);
  t5986 = Sin(var1[6]);
  t5985 = Cos(var1[5]);
  t6019 = t6010*t5987;
  t6020 = t5998*t6014;
  t6021 = t6019 + t6020;
  t6059 = Cos(var1[3]);
  t6017 = -1.*t5985*t5986*t6016;
  t6022 = t6018*t6021;
  t6023 = t6017 + t6022;
  t5972 = Sin(var1[3]);
  t6063 = Cos(var1[4]);
  t6068 = Cos(var1[6]);
  t6069 = t6063*t6068*t6016;
  t6071 = Sin(var1[4]);
  t6072 = t6018*t5986*t6016;
  t6073 = t5985*t6021;
  t6074 = t6072 + t6073;
  t6075 = -1.*t6071*t6074;
  t6077 = t6069 + t6075;
  t6088 = t6068*t6071*t6018;
  t6090 = t6063*t5986;
  t6091 = t6088 + t6090;
  t6103 = -1.*t5987*t5998;
  t6104 = t6010*t6014;
  t6105 = t6103 + t6104;
  t6106 = t6018*t6105;
  t6108 = -1.*t5985*t5986*t6021;
  t6109 = t6106 + t6108;
  t6112 = t6063*t6068*t6021;
  t6113 = t5985*t6105;
  t6114 = t6018*t5986*t6021;
  t6115 = t6113 + t6114;
  t6116 = -1.*t6071*t6115;
  t6118 = t6112 + t6116;
  t6128 = -1.*t6068*t6071*t6016;
  t6129 = -1.*t6063*t6074;
  t6130 = t6128 + t6129;
  t6144 = -0.0641*t5987;
  t6145 = -0.28*t6014;
  t6146 = t6144 + t6145;
  t6148 = -1.*t5987;
  t6149 = 1. + t6148;
  t6150 = 0.075*t6149;
  t6151 = 0.355*t5987;
  t6152 = -0.0641*t6014;
  t6153 = t6150 + t6151 + t6152;
  t6143 = -0.325*t5998;
  t6147 = t6010*t6146;
  t6154 = t5998*t6153;
  t6155 = t6143 + t6147 + t6154;
  t6139 = -1.*t6068;
  t6140 = 1. + t6139;
  t6141 = 0.1575*t6140;
  t6142 = 0.2255*t6068;
  t6156 = -1.*t5986*t6155;
  t6157 = t6141 + t6142 + t6156;
  t6158 = -1.*t6018*t6157;
  t6159 = -1.*t6010;
  t6160 = 1. + t6159;
  t6161 = 0.325*t6160;
  t6162 = -1.*t5998*t6146;
  t6163 = t6010*t6153;
  t6164 = t6161 + t6162 + t6163;
  t6165 = t5985*t6164;
  t6166 = t6158 + t6165;
  t6167 = -1.*t6071*t6166;
  t6168 = 0.068*t5986;
  t6169 = t6068*t6155;
  t6170 = t6168 + t6169;
  t6171 = t6063*t6170;
  t6172 = t6167 + t6171;
  t6174 = -1.*t6063*t6068*t6018;
  t6175 = t6071*t5986;
  t6176 = t6174 + t6175;
  t6182 = t6063*t6166;
  t6183 = t6071*t6170;
  t6184 = t6182 + t6183;
  t6193 = t5985*t6157;
  t6194 = t6018*t6164;
  t6195 = t6193 + t6194;
  t6187 = t6068*t6071*t6021;
  t6188 = t6063*t6115;
  t6189 = t6187 + t6188;
  t6178 = -1.*t6063*t6166;
  t6179 = -1.*t6071*t6170;
  t6180 = t6178 + t6179;
  t6135 = t6063*t6068*t6018;
  t6136 = -1.*t6071*t5986;
  t6137 = t6135 + t6136;
  t6220 = t6068*t6071*t6016;
  t6221 = t6063*t6074;
  t6222 = t6220 + t6221;
  t6204 = -1.*t6068*t6071*t6021;
  t6205 = -1.*t6063*t6115;
  t6206 = t6204 + t6205;
  t6275 = t5985*t5986*t6016;
  t6276 = -1.*t6018*t6021;
  t6277 = t6275 + t6276;
  t6196 = -1.*t5985*t6068*t6195;
  t6199 = t6195*t6109;
  t6287 = -1.*t5985*t6157;
  t6288 = -1.*t6018*t6164;
  t6289 = t6287 + t6288;
  t6191 = -1.*t6091*t6172;
  t6192 = -1.*t6176*t6184;
  t6197 = t6191 + t6192 + t6196;
  t6303 = -1.*t6018*t6105;
  t6304 = t5985*t5986*t6021;
  t6305 = t6303 + t6304;
  t6291 = t6068*t6018*t6195;
  t6200 = t6184*t6189;
  t6201 = t6172*t6118;
  t6202 = t6199 + t6200 + t6201;
  t6302 = t6166*t6109;
  t6308 = t6195*t6115;
  t6219 = t6195*t6023;
  t6233 = -1.*t6195*t6109;
  t6223 = t6184*t6222;
  t6224 = t6172*t6077;
  t6225 = t6219 + t6223 + t6224;
  t6341 = t6195*t6074;
  t6343 = t6166*t6023;
  t6234 = -1.*t6184*t6189;
  t6235 = -1.*t6172*t6118;
  t6236 = t6233 + t6234 + t6235;
  t6354 = -1.*t6166*t6109;
  t6357 = -1.*t6195*t6115;
  t6258 = t5985*t6068*t6195;
  t6261 = -1.*t6195*t6023;
  t6256 = t6091*t6172;
  t6257 = t6176*t6184;
  t6259 = t6256 + t6257 + t6258;
  t6393 = -1.*t6068*t6018*t6195;
  t6262 = -1.*t6184*t6222;
  t6263 = -1.*t6172*t6077;
  t6264 = t6261 + t6262 + t6263;
  t6397 = -1.*t6195*t6074;
  t6399 = -1.*t6166*t6023;
  t6431 = -1.*t6068*t6071*t6018*t6016;
  t6432 = -1.*t6063*t5986*t6016;
  t6433 = t6431 + t6432;
  t6295 = -1.*t5986*t6170;
  t6444 = -0.068*t5986;
  t6445 = -1.*t6068*t6155;
  t6446 = t6444 + t6445;
  t6449 = 0.068*t6068;
  t6450 = t6449 + t6156;
  t6298 = t6068*t6170*t6021;
  t6294 = t6068*t6018*t6166;
  t6296 = t6294 + t6196 + t6295;
  t6448 = -1.*t6068*t6170;
  t6451 = -1.*t5986*t6450;
  t6299 = t6166*t6115;
  t6300 = t6298 + t6199 + t6299;
  t6456 = -1.*t5986*t6170*t6021;
  t6457 = t6068*t6450*t6021;
  t6469 = t5985*t5986*t6195;
  t6470 = Power(t5985,2);
  t6471 = -1.*t6470*t6068*t6446;
  t6493 = t6068*t6071;
  t6494 = t6063*t6018*t5986;
  t6495 = t6493 + t6494;
  t6478 = -1.*t5985*t6068*t6195*t6021;
  t6479 = t5985*t6446*t6109;
  t6485 = t6063*t6068*t6018*t6021;
  t6486 = -1.*t6071*t5986*t6021;
  t6487 = t6485 + t6486;
  t6501 = -1.*t6063*t6018*t6446;
  t6502 = t6071*t6450;
  t6503 = t6501 + t6502;
  t6497 = t6071*t6018*t6446;
  t6498 = t6063*t6450;
  t6499 = t6497 + t6498;
  t6489 = t6063*t6068;
  t6490 = -1.*t6071*t6018*t5986;
  t6491 = t6489 + t6490;
  t6350 = -1.*t6068*t6170*t6021;
  t6346 = t6068*t6170*t6016;
  t6347 = t6166*t6074;
  t6348 = t6346 + t6347 + t6219;
  t6530 = -1.*t5986*t6170*t6016;
  t6531 = t6068*t6450*t6016;
  t6351 = -1.*t6166*t6115;
  t6352 = t6350 + t6233 + t6351;
  t6536 = t5986*t6170*t6021;
  t6537 = -1.*t6068*t6450*t6021;
  t6553 = -1.*t5985*t6068*t6195*t6016;
  t6426 = t6063*t6068*t6018*t6016;
  t6427 = -1.*t6071*t5986*t6016;
  t6428 = t6426 + t6427;
  t6555 = t5985*t6446*t6023;
  t6560 = t5985*t6068*t6195*t6021;
  t6508 = -1.*t6068*t6071*t6018*t6021;
  t6509 = -1.*t6063*t5986*t6021;
  t6510 = t6508 + t6509;
  t6561 = -1.*t5985*t6446*t6109;
  t6389 = t5986*t6170;
  t6402 = -1.*t6068*t6170*t6016;
  t6388 = -1.*t6068*t6018*t6166;
  t6390 = t6388 + t6258 + t6389;
  t6472 = Power(t6018,2);
  t6597 = t6068*t6170;
  t6598 = t5986*t6450;
  t6403 = -1.*t6166*t6074;
  t6404 = t6402 + t6403 + t6261;
  t6603 = t5986*t6170*t6016;
  t6604 = -1.*t6068*t6450*t6016;
  t6616 = -1.*t5985*t5986*t6195;
  t6617 = t6470*t6068*t6446;
  t6623 = t5985*t6068*t6195*t6016;
  t6625 = -1.*t5985*t6446*t6023;
  t6441 = -1.*t6068*t6157;
  t6442 = t6295 + t6441;
  t6647 = -1.*t6010*t5987;
  t6648 = -1.*t5998*t6014;
  t6649 = t6647 + t6648;
  t6665 = -0.325*t6010;
  t6666 = t6665 + t6162 + t6163;
  t6123 = t6059*t6109;
  t6124 = -1.*t5972*t6118;
  t6125 = t6123 + t6124;
  t6658 = 0.325*t5998;
  t6659 = -1.*t6010*t6146;
  t6660 = -1.*t5998*t6153;
  t6661 = t6658 + t6659 + t6660;
  t6656 = t6068*t6170*t6105;
  t6664 = Power(t6068,2);
  t6667 = t6664*t6666*t6021;
  t6679 = -1.*t5985*t5986*t6105;
  t6680 = t6018*t6649;
  t6681 = t6679 + t6680;
  t6687 = -1.*t5985*t5986*t6666;
  t6688 = t6018*t6661;
  t6689 = t6687 + t6688;
  t6683 = t6018*t5986*t6666;
  t6684 = t5985*t6661;
  t6685 = t6683 + t6684;
  t6694 = t6018*t5986*t6105;
  t6695 = t5985*t6649;
  t6696 = t6694 + t6695;
  t6690 = -1.*t5985*t6068*t6689;
  t6698 = t6195*t6681;
  t6699 = t6689*t6109;
  t6705 = t6068*t6071*t6105;
  t6706 = t6063*t6696;
  t6707 = t6705 + t6706;
  t6713 = t6063*t6685;
  t6714 = t6068*t6071*t6666;
  t6715 = t6713 + t6714;
  t6709 = -1.*t6071*t6685;
  t6710 = t6063*t6068*t6666;
  t6711 = t6709 + t6710;
  t6541 = -1.*t6164*t6105;
  t6542 = t5986*t6157*t6021;
  t6543 = t6541 + t6350 + t6542;
  t6545 = -1.*t5986*t6157*t6016;
  t6546 = t6164*t6021;
  t6547 = t6346 + t6545 + t6546;
  t6668 = Power(t5986,2);
  t6461 = t6164*t6105;
  t6462 = -1.*t5986*t6157*t6021;
  t6735 = -1.*t6661*t6105;
  t6736 = -1.*t6164*t6649;
  t6743 = t6661*t6021;
  t6741 = t6664*t6666*t6016;
  t6733 = -1.*t6068*t6170*t6105;
  t6737 = -1.*t6664*t6666*t6021;
  t6767 = t6689*t6023;
  t6771 = -1.*t6195*t6681;
  t6772 = -1.*t6689*t6109;
  t6720 = t6063*t6068*t6105;
  t6721 = -1.*t6071*t6696;
  t6722 = t6720 + t6721;
  t6593 = t6068*t6157;
  t6594 = t6389 + t6593;
  t6796 = -1.*t6664*t6666*t6016;
  t6812 = t5985*t6068*t6689;
  t6818 = -1.*t6689*t6023;
  t6837 = -0.28*t5987;
  t6838 = 0.0641*t6014;
  t6839 = t6837 + t6838;
  t6858 = t5998*t6146;
  t6859 = t6010*t6839;
  t6860 = t6858 + t6859;
  t6848 = t5985*t6016;
  t6849 = t6018*t5986*t6649;
  t6850 = t6848 + t6849;
  t6867 = t6018*t6016;
  t6868 = -1.*t5985*t5986*t6649;
  t6869 = t6867 + t6868;
  t6871 = t6063*t6068*t6649;
  t6872 = -1.*t6071*t6850;
  t6873 = t6871 + t6872;
  t6855 = -1.*t5998*t6839;
  t6856 = t6147 + t6855;
  t6861 = t6664*t6860*t6021;
  t6886 = -1.*t5985*t5986*t6860;
  t6887 = t6018*t6856;
  t6888 = t6886 + t6887;
  t6882 = t6018*t5986*t6860;
  t6883 = t5985*t6856;
  t6884 = t6882 + t6883;
  t6889 = -1.*t5985*t6068*t6888;
  t6893 = t6888*t6109;
  t6904 = t6063*t6884;
  t6905 = t6068*t6071*t6860;
  t6906 = t6904 + t6905;
  t6900 = -1.*t6071*t6884;
  t6901 = t6063*t6068*t6860;
  t6902 = t6900 + t6901;
  t6608 = t5986*t6157*t6016;
  t6609 = -1.*t6164*t6021;
  t6748 = t6155*t6016;
  t6749 = t6748 + t6546;
  t6755 = -1.*t6155*t6021;
  t6756 = t6541 + t6755;
  t6919 = -1.*t6856*t6105;
  t6924 = t6164*t6016;
  t6929 = t6856*t6021;
  t6925 = t6664*t6860*t6016;
  t6927 = t6068*t6170*t6649;
  t6920 = -1.*t6664*t6860*t6021;
  t6947 = t6195*t6869;
  t6950 = t6888*t6023;
  t6847 = t6068*t6071*t6649;
  t6851 = t6063*t6850;
  t6852 = t6847 + t6851;
  t6954 = -1.*t6888*t6109;
  t6082 = t6059*t6023;
  t6083 = -1.*t5972*t6077;
  t6084 = t6082 + t6083;
  t6984 = -1.*t6664*t6860*t6016;
  t6986 = -1.*t6068*t6170*t6649;
  t7000 = t5985*t6068*t6888;
  t7004 = -1.*t6195*t6869;
  t7007 = -1.*t6888*t6023;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t5972*t6023 - 1.*t6059*t6077)*var2[1] + t6084*var2[2];
  p_output1[10]=(-1.*t5972*t5985*t6068 - 1.*t6059*t6091)*var2[1] + (t5985*t6059*t6068 - 1.*t5972*t6091)*var2[2];
  p_output1[11]=(-1.*t5972*t6109 - 1.*t6059*t6118)*var2[1] + t6125*var2[2];
  p_output1[12]=t6077*var2[0] - 1.*t5972*t6130*var2[1] + t6059*t6130*var2[2] + ((-1.*t6137*t6172 - 1.*t6172*t6176 - 1.*t6091*t6180 - 1.*t6091*t6184)*t6189 + t6118*t6197 + t6091*t6202 + t6176*(t6118*t6180 + t6118*t6184 + t6172*t6189 + t6172*t6206))*var2[3];
  p_output1[13]=t6091*var2[0] - 1.*t5972*t6137*var2[1] + t6059*t6137*var2[2] + ((-1.*t6118*t6180 - 1.*t6118*t6184 - 1.*t6172*t6189 - 1.*t6172*t6206)*t6222 + t6189*(t6130*t6172 + t6077*t6180 + t6077*t6184 + t6172*t6222) + t6118*t6225 + t6077*t6236)*var2[3];
  p_output1[14]=t6118*var2[0] - 1.*t5972*t6206*var2[1] + t6059*t6206*var2[2] + ((t6137*t6172 + t6172*t6176 + t6091*t6180 + t6091*t6184)*t6222 + t6176*(-1.*t6130*t6172 - 1.*t6077*t6180 - 1.*t6077*t6184 - 1.*t6172*t6222) + t6077*t6259 + t6091*t6264)*var2[3];
  p_output1[15]=t6063*t6277*var2[0] + (t6059*t6074 + t5972*t6071*t6277)*var2[1] + (t5972*t6074 - 1.*t6059*t6071*t6277)*var2[2] + (-1.*t5985*t6063*t6068*t6202 + t6189*(-1.*t5985*t6068*t6166 - 1.*t5985*t6068*t6071*t6172 + t5985*t6063*t6068*t6184 + t6071*t6091*t6289 - 1.*t6063*t6176*t6289 + t6291) + t6063*t6197*t6305 + t6176*(-1.*t6071*t6118*t6289 + t6063*t6189*t6289 + t6302 - 1.*t6071*t6172*t6305 + t6063*t6184*t6305 + t6308))*var2[3] + (t6109*(t6018*t6068*t6289 + t6291) + t6115*t6296 - 1.*t6018*t6068*t6300 + t5985*t6068*(t6115*t6289 + t6302 + t6166*t6305 + t6308))*var2[4];
  p_output1[16]=-1.*t5985*t6063*t6068*var2[0] + (-1.*t6018*t6059*t6068 - 1.*t5972*t5985*t6068*t6071)*var2[1] + (-1.*t5972*t6018*t6068 + t5985*t6059*t6068*t6071)*var2[2] + (t6063*t6236*t6277 + t6063*t6225*t6305 + t6189*(-1.*t6071*t6172*t6277 + t6063*t6184*t6277 - 1.*t6071*t6077*t6289 + t6063*t6222*t6289 + t6341 + t6343) + t6222*(t6071*t6118*t6289 - 1.*t6063*t6189*t6289 + t6071*t6172*t6305 - 1.*t6063*t6184*t6305 + t6354 + t6357))*var2[3] + (t6109*(t6166*t6277 + t6074*t6289 + t6341 + t6343) + t6115*t6348 + t6074*t6352 + t6023*(-1.*t6115*t6289 - 1.*t6166*t6305 + t6354 + t6357))*var2[4];
  p_output1[17]=t6063*t6305*var2[0] + (t6059*t6115 + t5972*t6071*t6305)*var2[1] + (t5972*t6115 - 1.*t6059*t6071*t6305)*var2[2] + (-1.*t5985*t6063*t6068*t6264 + t6063*t6259*t6277 + t6222*(t5985*t6068*t6166 + t5985*t6068*t6071*t6172 - 1.*t5985*t6063*t6068*t6184 - 1.*t6071*t6091*t6289 + t6063*t6176*t6289 + t6393) + t6176*(t6071*t6172*t6277 - 1.*t6063*t6184*t6277 + t6071*t6077*t6289 - 1.*t6063*t6222*t6289 + t6397 + t6399))*var2[3] + (t6074*t6390 + t6023*(-1.*t6018*t6068*t6289 + t6393) + t5985*t6068*(-1.*t6166*t6277 - 1.*t6074*t6289 + t6397 + t6399) - 1.*t6018*t6068*t6404)*var2[4];
  p_output1[18]=t6428*var2[0] + (-1.*t5985*t6016*t6059*t6068 - 1.*t5972*t6433)*var2[1] + (-1.*t5972*t5985*t6016*t6068 + t6059*t6433)*var2[2] + (t6197*t6487 + t6202*t6495 + t6189*(t6469 + t6471 - 1.*t6172*t6491 - 1.*t6184*t6495 - 1.*t6091*t6499 - 1.*t6176*t6503) + t6176*(t6478 + t6479 + t6184*t6487 + t6118*t6499 + t6189*t6503 + t6172*t6510))*var2[3] + (-1.*t5985*t6021*t6068*t6296 - 1.*t5985*t5986*t6300 + t6109*(-1.*t5986*t6018*t6166 + t6448 + t6451 + t6469 + t6471 - 1.*t6068*t6446*t6472) + t5985*t6068*(t6018*t6021*t6068*t6166 - 1.*t6018*t6115*t6446 + t6456 + t6457 + t6478 + t6479))*var2[4] + (-1.*t5986*t6021*t6442 + t6021*t6068*(t5986*t6157 - 1.*t6068*t6446 + t6448 + t6451) + t5986*(-1.*t6021*t6068*t6157 - 1.*t5986*t6021*t6446 + t6456 + t6457) + t6068*(t6298 + t6461 + t6462))*var2[5];
  p_output1[19]=t6495*var2[0] + (-1.*t5985*t5986*t6059 - 1.*t5972*t6491)*var2[1] + (-1.*t5972*t5985*t5986 + t6059*t6491)*var2[2] + (t6236*t6428 + t6225*t6487 + t6189*(t6184*t6428 + t6172*t6433 + t6077*t6499 + t6222*t6503 + t6553 + t6555) + t6222*(-1.*t6184*t6487 - 1.*t6118*t6499 - 1.*t6189*t6503 - 1.*t6172*t6510 + t6560 + t6561))*var2[3] + (-1.*t5985*t6021*t6068*t6348 - 1.*t5985*t6016*t6068*t6352 + t6109*(t6016*t6018*t6068*t6166 - 1.*t6018*t6074*t6446 + t6530 + t6531 + t6553 + t6555) + t6023*(-1.*t6018*t6021*t6068*t6166 + t6018*t6115*t6446 + t6536 + t6537 + t6560 + t6561))*var2[4] + (t6021*t6068*(-1.*t6016*t6068*t6157 - 1.*t5986*t6016*t6446 + t6530 + t6531) + t6016*t6068*(t6021*t6068*t6157 + t5986*t6021*t6446 + t6536 + t6537) - 1.*t5986*t6016*t6543 - 1.*t5986*t6021*t6547)*var2[5];
  p_output1[20]=t6487*var2[0] + (-1.*t5985*t6021*t6059*t6068 - 1.*t5972*t6510)*var2[1] + (-1.*t5972*t5985*t6021*t6068 + t6059*t6510)*var2[2] + (t6259*t6428 + t6264*t6495 + t6222*(t6172*t6491 + t6184*t6495 + t6091*t6499 + t6176*t6503 + t6616 + t6617) + t6176*(-1.*t6184*t6428 - 1.*t6172*t6433 - 1.*t6077*t6499 - 1.*t6222*t6503 + t6623 + t6625))*var2[3] + (-1.*t5985*t6016*t6068*t6390 - 1.*t5985*t5986*t6404 + t6023*(t5986*t6018*t6166 + t6068*t6446*t6472 + t6597 + t6598 + t6616 + t6617) + t5985*t6068*(-1.*t6016*t6018*t6068*t6166 + t6018*t6074*t6446 + t6603 + t6604 + t6623 + t6625))*var2[4] + (-1.*t5986*t6016*t6594 + t6016*t6068*(-1.*t5986*t6157 + t6068*t6446 + t6597 + t6598) + t5986*(t6016*t6068*t6157 + t5986*t6016*t6446 + t6603 + t6604) + t6068*(t6402 + t6608 + t6609))*var2[5];
  p_output1[21]=t6189*var2[0] + t6125*var2[1] + (t5972*t6109 + t6059*t6118)*var2[2] + (t6197*t6707 + t6189*(t6690 - 1.*t6091*t6711 - 1.*t6176*t6715) + t6176*(t6698 + t6699 + t6184*t6707 + t6118*t6711 + t6189*t6715 + t6172*t6722))*var2[3] + (t6296*t6681 + t6109*(-1.*t5986*t6068*t6666 + t6018*t6068*t6685 + t6690) + t5985*t6068*(t6656 + t6667 + t6115*t6685 + t6166*t6696 + t6698 + t6699))*var2[4] + (t6068*t6105*t6442 + t5986*(-1.*t5986*t6105*t6157 + t6164*t6649 + t6656 + t6105*t6661 + t6667 + t6021*t6666*t6668))*var2[5] + (-0.1575*t6021 - 0.2255*t6649)*var2[6];
  p_output1[22]=(t6189*t6236 + t6225*t6707 + t6189*(t6199 + t6200 + t6201 + t6077*t6711 + t6222*t6715 + t6767) + t6222*(-1.*t6184*t6707 - 1.*t6118*t6711 - 1.*t6189*t6715 - 1.*t6172*t6722 + t6771 + t6772))*var2[3] + (t6109*t6352 + t6348*t6681 + t6109*(t6199 + t6298 + t6299 + t6074*t6685 + t6741 + t6767) + t6023*(-1.*t6115*t6685 - 1.*t6166*t6696 + t6733 + t6737 + t6771 + t6772))*var2[4] + (t6021*t6068*t6543 + t6068*t6105*t6547 + t6016*t6068*(t5986*t6105*t6157 - 1.*t6021*t6666*t6668 + t6733 + t6735 + t6736 + t6737) + t6021*t6068*(t6298 + t6461 + t6462 + t6016*t6666*t6668 + t6741 + t6743))*var2[5] + (t6021*(-1.*t6105*t6155 - 1.*t6021*t6666 + t6735 + t6736) + t6105*(t6021*t6155 + t6461 + t6016*t6666 + t6743) + t6649*t6749 + t6105*t6756)*var2[6];
  p_output1[23]=t6707*var2[0] + (t6059*t6681 - 1.*t5972*t6722)*var2[1] + (t5972*t6681 + t6059*t6722)*var2[2] + (t6189*t6259 + t6222*(t6091*t6711 + t6176*t6715 + t6812) + t6176*(t6233 + t6234 + t6235 - 1.*t6077*t6711 - 1.*t6222*t6715 + t6818))*var2[3] + (t6109*t6390 + t6023*(t5986*t6068*t6666 - 1.*t6018*t6068*t6685 + t6812) + t5985*t6068*(t6233 + t6350 + t6351 - 1.*t6074*t6685 + t6796 + t6818))*var2[4] + (t6021*t6068*t6594 + t5986*(t6350 + t6541 + t6542 - 1.*t6021*t6661 - 1.*t6016*t6666*t6668 + t6796))*var2[5] + 0.068*t6105*var2[6];
  p_output1[24]=t6852*var2[0] + (t6059*t6869 - 1.*t5972*t6873)*var2[1] + (t5972*t6869 + t6059*t6873)*var2[2] + (t6197*t6222 + t6189*(t6889 - 1.*t6091*t6902 - 1.*t6176*t6906) + t6176*(t6219 + t6223 + t6224 + t6893 + t6118*t6902 + t6189*t6906))*var2[3] + (t6023*t6296 + t6109*(-1.*t5986*t6068*t6860 + t6018*t6068*t6884 + t6889) + t5985*t6068*(t6219 + t6346 + t6347 + t6861 + t6115*t6884 + t6893))*var2[4] + (t6016*t6068*t6442 + t5986*(t6346 + t6545 + t6546 + t6105*t6856 + t6021*t6668*t6860 + t6861))*var2[5] + (-0.2255*t6021 - 0.1575*t6649)*var2[6] + (0.325*t5987 - 1.*t5987*t6153 - 1.*t5987*t6839)*var2[7];
  p_output1[25]=(t6222*t6225 + t6236*t6852 + t6189*(t6184*t6852 + t6172*t6873 + t6077*t6902 + t6222*t6906 + t6947 + t6950) + t6222*(t6261 + t6262 + t6263 - 1.*t6118*t6902 - 1.*t6189*t6906 + t6954))*var2[3] + (t6023*t6348 + t6352*t6869 + t6109*(t6166*t6850 + t6074*t6884 + t6925 + t6927 + t6947 + t6950) + t6023*(t6261 + t6402 + t6403 - 1.*t6115*t6884 + t6920 + t6954))*var2[4] + (t6016*t6068*t6547 + t6068*t6543*t6649 + t6016*t6068*(t6402 + t6608 + t6609 - 1.*t6021*t6668*t6860 + t6919 + t6920) + t6021*t6068*(-1.*t5986*t6157*t6649 + t6016*t6668*t6860 + t6924 + t6925 + t6927 + t6929))*var2[5] + (t6021*t6749 + t6016*t6756 + t6021*(-1.*t6016*t6155 + t6609 - 1.*t6021*t6860 + t6919) + t6105*(t6155*t6649 + t6016*t6860 + t6924 + t6929))*var2[6];
  p_output1[26]=t6222*var2[0] + t6084*var2[1] + (t5972*t6023 + t6059*t6077)*var2[2] + (t6259*t6852 + t6222*(t6091*t6902 + t6176*t6906 + t7000) + t6176*(-1.*t6184*t6852 - 1.*t6172*t6873 - 1.*t6077*t6902 - 1.*t6222*t6906 + t7004 + t7007))*var2[3] + (t6390*t6869 + t6023*(t5986*t6068*t6860 - 1.*t6018*t6068*t6884 + t7000) + t5985*t6068*(-1.*t6166*t6850 - 1.*t6074*t6884 + t6984 + t6986 + t7004 + t7007))*var2[4] + (t6068*t6594*t6649 + t5986*(-1.*t6016*t6164 + t5986*t6157*t6649 - 1.*t6021*t6856 - 1.*t6016*t6668*t6860 + t6984 + t6986))*var2[5] + 0.068*t6016*var2[6] + (0.325*t6014 - 1.*t6014*t6153 - 1.*t6014*t6839)*var2[7];
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
