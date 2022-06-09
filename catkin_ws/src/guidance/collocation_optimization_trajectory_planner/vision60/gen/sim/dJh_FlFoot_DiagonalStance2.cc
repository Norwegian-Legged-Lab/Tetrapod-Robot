/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 14:41:06 GMT+02:00
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
  double t6007;
  double t5984;
  double t5994;
  double t6011;
  double t6002;
  double t6012;
  double t6013;
  double t6015;
  double t5983;
  double t5982;
  double t6016;
  double t6017;
  double t6018;
  double t6056;
  double t6014;
  double t6019;
  double t6020;
  double t5969;
  double t6060;
  double t6065;
  double t6066;
  double t6068;
  double t6069;
  double t6070;
  double t6071;
  double t6072;
  double t6074;
  double t6085;
  double t6087;
  double t6088;
  double t6100;
  double t6101;
  double t6102;
  double t6103;
  double t6105;
  double t6106;
  double t6109;
  double t6110;
  double t6111;
  double t6112;
  double t6113;
  double t6115;
  double t6125;
  double t6126;
  double t6127;
  double t6141;
  double t6142;
  double t6143;
  double t6145;
  double t6146;
  double t6147;
  double t6148;
  double t6149;
  double t6150;
  double t6140;
  double t6144;
  double t6151;
  double t6152;
  double t6136;
  double t6137;
  double t6138;
  double t6139;
  double t6153;
  double t6154;
  double t6155;
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
  double t6171;
  double t6172;
  double t6173;
  double t6179;
  double t6180;
  double t6181;
  double t6190;
  double t6191;
  double t6192;
  double t6184;
  double t6185;
  double t6186;
  double t6175;
  double t6176;
  double t6177;
  double t6132;
  double t6133;
  double t6134;
  double t6217;
  double t6218;
  double t6219;
  double t6201;
  double t6202;
  double t6203;
  double t6272;
  double t6273;
  double t6274;
  double t6193;
  double t6196;
  double t6284;
  double t6285;
  double t6286;
  double t6188;
  double t6189;
  double t6194;
  double t6300;
  double t6301;
  double t6302;
  double t6288;
  double t6197;
  double t6198;
  double t6199;
  double t6299;
  double t6305;
  double t6216;
  double t6230;
  double t6220;
  double t6221;
  double t6222;
  double t6338;
  double t6340;
  double t6231;
  double t6232;
  double t6233;
  double t6351;
  double t6354;
  double t6255;
  double t6258;
  double t6253;
  double t6254;
  double t6256;
  double t6390;
  double t6259;
  double t6260;
  double t6261;
  double t6394;
  double t6396;
  double t6428;
  double t6429;
  double t6430;
  double t6292;
  double t6441;
  double t6442;
  double t6443;
  double t6446;
  double t6447;
  double t6295;
  double t6291;
  double t6293;
  double t6445;
  double t6448;
  double t6296;
  double t6297;
  double t6453;
  double t6454;
  double t6466;
  double t6467;
  double t6468;
  double t6490;
  double t6491;
  double t6492;
  double t6475;
  double t6476;
  double t6482;
  double t6483;
  double t6484;
  double t6498;
  double t6499;
  double t6500;
  double t6494;
  double t6495;
  double t6496;
  double t6486;
  double t6487;
  double t6488;
  double t6347;
  double t6343;
  double t6344;
  double t6345;
  double t6527;
  double t6528;
  double t6348;
  double t6349;
  double t6533;
  double t6534;
  double t6550;
  double t6423;
  double t6424;
  double t6425;
  double t6552;
  double t6557;
  double t6505;
  double t6506;
  double t6507;
  double t6558;
  double t6386;
  double t6399;
  double t6385;
  double t6387;
  double t6469;
  double t6594;
  double t6595;
  double t6400;
  double t6401;
  double t6600;
  double t6601;
  double t6613;
  double t6614;
  double t6620;
  double t6622;
  double t6438;
  double t6439;
  double t6644;
  double t6645;
  double t6646;
  double t6662;
  double t6663;
  double t6120;
  double t6121;
  double t6122;
  double t6655;
  double t6656;
  double t6657;
  double t6658;
  double t6653;
  double t6661;
  double t6664;
  double t6676;
  double t6677;
  double t6678;
  double t6684;
  double t6685;
  double t6686;
  double t6680;
  double t6681;
  double t6682;
  double t6691;
  double t6692;
  double t6693;
  double t6687;
  double t6695;
  double t6696;
  double t6702;
  double t6703;
  double t6704;
  double t6710;
  double t6711;
  double t6712;
  double t6706;
  double t6707;
  double t6708;
  double t6538;
  double t6539;
  double t6540;
  double t6542;
  double t6543;
  double t6544;
  double t6665;
  double t6458;
  double t6459;
  double t6732;
  double t6733;
  double t6740;
  double t6738;
  double t6730;
  double t6734;
  double t6764;
  double t6768;
  double t6769;
  double t6717;
  double t6718;
  double t6719;
  double t6590;
  double t6591;
  double t6793;
  double t6809;
  double t6815;
  double t6834;
  double t6835;
  double t6836;
  double t6855;
  double t6856;
  double t6857;
  double t6845;
  double t6846;
  double t6847;
  double t6864;
  double t6865;
  double t6866;
  double t6868;
  double t6869;
  double t6870;
  double t6852;
  double t6853;
  double t6858;
  double t6883;
  double t6884;
  double t6885;
  double t6879;
  double t6880;
  double t6881;
  double t6886;
  double t6890;
  double t6901;
  double t6902;
  double t6903;
  double t6897;
  double t6898;
  double t6899;
  double t6605;
  double t6606;
  double t6745;
  double t6746;
  double t6752;
  double t6753;
  double t6916;
  double t6921;
  double t6926;
  double t6922;
  double t6924;
  double t6917;
  double t6944;
  double t6947;
  double t6844;
  double t6848;
  double t6849;
  double t6951;
  double t6079;
  double t6080;
  double t6081;
  double t6981;
  double t6983;
  double t6997;
  double t7001;
  double t7004;
  t6007 = Cos(var1[7]);
  t5984 = Cos(var1[8]);
  t5994 = Sin(var1[7]);
  t6011 = Sin(var1[8]);
  t6002 = t5984*t5994;
  t6012 = -1.*t6007*t6011;
  t6013 = t6002 + t6012;
  t6015 = Sin(var1[5]);
  t5983 = Sin(var1[6]);
  t5982 = Cos(var1[5]);
  t6016 = t6007*t5984;
  t6017 = t5994*t6011;
  t6018 = t6016 + t6017;
  t6056 = Cos(var1[3]);
  t6014 = -1.*t5982*t5983*t6013;
  t6019 = t6015*t6018;
  t6020 = t6014 + t6019;
  t5969 = Sin(var1[3]);
  t6060 = Cos(var1[4]);
  t6065 = Cos(var1[6]);
  t6066 = t6060*t6065*t6013;
  t6068 = Sin(var1[4]);
  t6069 = t6015*t5983*t6013;
  t6070 = t5982*t6018;
  t6071 = t6069 + t6070;
  t6072 = -1.*t6068*t6071;
  t6074 = t6066 + t6072;
  t6085 = t6065*t6068*t6015;
  t6087 = t6060*t5983;
  t6088 = t6085 + t6087;
  t6100 = -1.*t5984*t5994;
  t6101 = t6007*t6011;
  t6102 = t6100 + t6101;
  t6103 = t6015*t6102;
  t6105 = -1.*t5982*t5983*t6018;
  t6106 = t6103 + t6105;
  t6109 = t6060*t6065*t6018;
  t6110 = t5982*t6102;
  t6111 = t6015*t5983*t6018;
  t6112 = t6110 + t6111;
  t6113 = -1.*t6068*t6112;
  t6115 = t6109 + t6113;
  t6125 = -1.*t6065*t6068*t6013;
  t6126 = -1.*t6060*t6071;
  t6127 = t6125 + t6126;
  t6141 = -0.0641*t5984;
  t6142 = -0.28*t6011;
  t6143 = t6141 + t6142;
  t6145 = -1.*t5984;
  t6146 = 1. + t6145;
  t6147 = 0.075*t6146;
  t6148 = 0.355*t5984;
  t6149 = -0.0641*t6011;
  t6150 = t6147 + t6148 + t6149;
  t6140 = -0.325*t5994;
  t6144 = t6007*t6143;
  t6151 = t5994*t6150;
  t6152 = t6140 + t6144 + t6151;
  t6136 = -1.*t6065;
  t6137 = 1. + t6136;
  t6138 = 0.1575*t6137;
  t6139 = 0.2255*t6065;
  t6153 = -1.*t5983*t6152;
  t6154 = t6138 + t6139 + t6153;
  t6155 = -1.*t6015*t6154;
  t6156 = -1.*t6007;
  t6157 = 1. + t6156;
  t6158 = 0.325*t6157;
  t6159 = -1.*t5994*t6143;
  t6160 = t6007*t6150;
  t6161 = t6158 + t6159 + t6160;
  t6162 = t5982*t6161;
  t6163 = t6155 + t6162;
  t6164 = -1.*t6068*t6163;
  t6165 = 0.068*t5983;
  t6166 = t6065*t6152;
  t6167 = t6165 + t6166;
  t6168 = t6060*t6167;
  t6169 = t6164 + t6168;
  t6171 = -1.*t6060*t6065*t6015;
  t6172 = t6068*t5983;
  t6173 = t6171 + t6172;
  t6179 = t6060*t6163;
  t6180 = t6068*t6167;
  t6181 = t6179 + t6180;
  t6190 = t5982*t6154;
  t6191 = t6015*t6161;
  t6192 = t6190 + t6191;
  t6184 = t6065*t6068*t6018;
  t6185 = t6060*t6112;
  t6186 = t6184 + t6185;
  t6175 = -1.*t6060*t6163;
  t6176 = -1.*t6068*t6167;
  t6177 = t6175 + t6176;
  t6132 = t6060*t6065*t6015;
  t6133 = -1.*t6068*t5983;
  t6134 = t6132 + t6133;
  t6217 = t6065*t6068*t6013;
  t6218 = t6060*t6071;
  t6219 = t6217 + t6218;
  t6201 = -1.*t6065*t6068*t6018;
  t6202 = -1.*t6060*t6112;
  t6203 = t6201 + t6202;
  t6272 = t5982*t5983*t6013;
  t6273 = -1.*t6015*t6018;
  t6274 = t6272 + t6273;
  t6193 = -1.*t5982*t6065*t6192;
  t6196 = t6192*t6106;
  t6284 = -1.*t5982*t6154;
  t6285 = -1.*t6015*t6161;
  t6286 = t6284 + t6285;
  t6188 = -1.*t6088*t6169;
  t6189 = -1.*t6173*t6181;
  t6194 = t6188 + t6189 + t6193;
  t6300 = -1.*t6015*t6102;
  t6301 = t5982*t5983*t6018;
  t6302 = t6300 + t6301;
  t6288 = t6065*t6015*t6192;
  t6197 = t6181*t6186;
  t6198 = t6169*t6115;
  t6199 = t6196 + t6197 + t6198;
  t6299 = t6163*t6106;
  t6305 = t6192*t6112;
  t6216 = t6192*t6020;
  t6230 = -1.*t6192*t6106;
  t6220 = t6181*t6219;
  t6221 = t6169*t6074;
  t6222 = t6216 + t6220 + t6221;
  t6338 = t6192*t6071;
  t6340 = t6163*t6020;
  t6231 = -1.*t6181*t6186;
  t6232 = -1.*t6169*t6115;
  t6233 = t6230 + t6231 + t6232;
  t6351 = -1.*t6163*t6106;
  t6354 = -1.*t6192*t6112;
  t6255 = t5982*t6065*t6192;
  t6258 = -1.*t6192*t6020;
  t6253 = t6088*t6169;
  t6254 = t6173*t6181;
  t6256 = t6253 + t6254 + t6255;
  t6390 = -1.*t6065*t6015*t6192;
  t6259 = -1.*t6181*t6219;
  t6260 = -1.*t6169*t6074;
  t6261 = t6258 + t6259 + t6260;
  t6394 = -1.*t6192*t6071;
  t6396 = -1.*t6163*t6020;
  t6428 = -1.*t6065*t6068*t6015*t6013;
  t6429 = -1.*t6060*t5983*t6013;
  t6430 = t6428 + t6429;
  t6292 = -1.*t5983*t6167;
  t6441 = -0.068*t5983;
  t6442 = -1.*t6065*t6152;
  t6443 = t6441 + t6442;
  t6446 = 0.068*t6065;
  t6447 = t6446 + t6153;
  t6295 = t6065*t6167*t6018;
  t6291 = t6065*t6015*t6163;
  t6293 = t6291 + t6193 + t6292;
  t6445 = -1.*t6065*t6167;
  t6448 = -1.*t5983*t6447;
  t6296 = t6163*t6112;
  t6297 = t6295 + t6196 + t6296;
  t6453 = -1.*t5983*t6167*t6018;
  t6454 = t6065*t6447*t6018;
  t6466 = t5982*t5983*t6192;
  t6467 = Power(t5982,2);
  t6468 = -1.*t6467*t6065*t6443;
  t6490 = t6065*t6068;
  t6491 = t6060*t6015*t5983;
  t6492 = t6490 + t6491;
  t6475 = -1.*t5982*t6065*t6192*t6018;
  t6476 = t5982*t6443*t6106;
  t6482 = t6060*t6065*t6015*t6018;
  t6483 = -1.*t6068*t5983*t6018;
  t6484 = t6482 + t6483;
  t6498 = -1.*t6060*t6015*t6443;
  t6499 = t6068*t6447;
  t6500 = t6498 + t6499;
  t6494 = t6068*t6015*t6443;
  t6495 = t6060*t6447;
  t6496 = t6494 + t6495;
  t6486 = t6060*t6065;
  t6487 = -1.*t6068*t6015*t5983;
  t6488 = t6486 + t6487;
  t6347 = -1.*t6065*t6167*t6018;
  t6343 = t6065*t6167*t6013;
  t6344 = t6163*t6071;
  t6345 = t6343 + t6344 + t6216;
  t6527 = -1.*t5983*t6167*t6013;
  t6528 = t6065*t6447*t6013;
  t6348 = -1.*t6163*t6112;
  t6349 = t6347 + t6230 + t6348;
  t6533 = t5983*t6167*t6018;
  t6534 = -1.*t6065*t6447*t6018;
  t6550 = -1.*t5982*t6065*t6192*t6013;
  t6423 = t6060*t6065*t6015*t6013;
  t6424 = -1.*t6068*t5983*t6013;
  t6425 = t6423 + t6424;
  t6552 = t5982*t6443*t6020;
  t6557 = t5982*t6065*t6192*t6018;
  t6505 = -1.*t6065*t6068*t6015*t6018;
  t6506 = -1.*t6060*t5983*t6018;
  t6507 = t6505 + t6506;
  t6558 = -1.*t5982*t6443*t6106;
  t6386 = t5983*t6167;
  t6399 = -1.*t6065*t6167*t6013;
  t6385 = -1.*t6065*t6015*t6163;
  t6387 = t6385 + t6255 + t6386;
  t6469 = Power(t6015,2);
  t6594 = t6065*t6167;
  t6595 = t5983*t6447;
  t6400 = -1.*t6163*t6071;
  t6401 = t6399 + t6400 + t6258;
  t6600 = t5983*t6167*t6013;
  t6601 = -1.*t6065*t6447*t6013;
  t6613 = -1.*t5982*t5983*t6192;
  t6614 = t6467*t6065*t6443;
  t6620 = t5982*t6065*t6192*t6013;
  t6622 = -1.*t5982*t6443*t6020;
  t6438 = -1.*t6065*t6154;
  t6439 = t6292 + t6438;
  t6644 = -1.*t6007*t5984;
  t6645 = -1.*t5994*t6011;
  t6646 = t6644 + t6645;
  t6662 = -0.325*t6007;
  t6663 = t6662 + t6159 + t6160;
  t6120 = t6056*t6106;
  t6121 = -1.*t5969*t6115;
  t6122 = t6120 + t6121;
  t6655 = 0.325*t5994;
  t6656 = -1.*t6007*t6143;
  t6657 = -1.*t5994*t6150;
  t6658 = t6655 + t6656 + t6657;
  t6653 = t6065*t6167*t6102;
  t6661 = Power(t6065,2);
  t6664 = t6661*t6663*t6018;
  t6676 = -1.*t5982*t5983*t6102;
  t6677 = t6015*t6646;
  t6678 = t6676 + t6677;
  t6684 = -1.*t5982*t5983*t6663;
  t6685 = t6015*t6658;
  t6686 = t6684 + t6685;
  t6680 = t6015*t5983*t6663;
  t6681 = t5982*t6658;
  t6682 = t6680 + t6681;
  t6691 = t6015*t5983*t6102;
  t6692 = t5982*t6646;
  t6693 = t6691 + t6692;
  t6687 = -1.*t5982*t6065*t6686;
  t6695 = t6192*t6678;
  t6696 = t6686*t6106;
  t6702 = t6065*t6068*t6102;
  t6703 = t6060*t6693;
  t6704 = t6702 + t6703;
  t6710 = t6060*t6682;
  t6711 = t6065*t6068*t6663;
  t6712 = t6710 + t6711;
  t6706 = -1.*t6068*t6682;
  t6707 = t6060*t6065*t6663;
  t6708 = t6706 + t6707;
  t6538 = -1.*t6161*t6102;
  t6539 = t5983*t6154*t6018;
  t6540 = t6538 + t6347 + t6539;
  t6542 = -1.*t5983*t6154*t6013;
  t6543 = t6161*t6018;
  t6544 = t6343 + t6542 + t6543;
  t6665 = Power(t5983,2);
  t6458 = t6161*t6102;
  t6459 = -1.*t5983*t6154*t6018;
  t6732 = -1.*t6658*t6102;
  t6733 = -1.*t6161*t6646;
  t6740 = t6658*t6018;
  t6738 = t6661*t6663*t6013;
  t6730 = -1.*t6065*t6167*t6102;
  t6734 = -1.*t6661*t6663*t6018;
  t6764 = t6686*t6020;
  t6768 = -1.*t6192*t6678;
  t6769 = -1.*t6686*t6106;
  t6717 = t6060*t6065*t6102;
  t6718 = -1.*t6068*t6693;
  t6719 = t6717 + t6718;
  t6590 = t6065*t6154;
  t6591 = t6386 + t6590;
  t6793 = -1.*t6661*t6663*t6013;
  t6809 = t5982*t6065*t6686;
  t6815 = -1.*t6686*t6020;
  t6834 = -0.28*t5984;
  t6835 = 0.0641*t6011;
  t6836 = t6834 + t6835;
  t6855 = t5994*t6143;
  t6856 = t6007*t6836;
  t6857 = t6855 + t6856;
  t6845 = t5982*t6013;
  t6846 = t6015*t5983*t6646;
  t6847 = t6845 + t6846;
  t6864 = t6015*t6013;
  t6865 = -1.*t5982*t5983*t6646;
  t6866 = t6864 + t6865;
  t6868 = t6060*t6065*t6646;
  t6869 = -1.*t6068*t6847;
  t6870 = t6868 + t6869;
  t6852 = -1.*t5994*t6836;
  t6853 = t6144 + t6852;
  t6858 = t6661*t6857*t6018;
  t6883 = -1.*t5982*t5983*t6857;
  t6884 = t6015*t6853;
  t6885 = t6883 + t6884;
  t6879 = t6015*t5983*t6857;
  t6880 = t5982*t6853;
  t6881 = t6879 + t6880;
  t6886 = -1.*t5982*t6065*t6885;
  t6890 = t6885*t6106;
  t6901 = t6060*t6881;
  t6902 = t6065*t6068*t6857;
  t6903 = t6901 + t6902;
  t6897 = -1.*t6068*t6881;
  t6898 = t6060*t6065*t6857;
  t6899 = t6897 + t6898;
  t6605 = t5983*t6154*t6013;
  t6606 = -1.*t6161*t6018;
  t6745 = t6152*t6013;
  t6746 = t6745 + t6543;
  t6752 = -1.*t6152*t6018;
  t6753 = t6538 + t6752;
  t6916 = -1.*t6853*t6102;
  t6921 = t6161*t6013;
  t6926 = t6853*t6018;
  t6922 = t6661*t6857*t6013;
  t6924 = t6065*t6167*t6646;
  t6917 = -1.*t6661*t6857*t6018;
  t6944 = t6192*t6866;
  t6947 = t6885*t6020;
  t6844 = t6065*t6068*t6646;
  t6848 = t6060*t6847;
  t6849 = t6844 + t6848;
  t6951 = -1.*t6885*t6106;
  t6079 = t6056*t6020;
  t6080 = -1.*t5969*t6074;
  t6081 = t6079 + t6080;
  t6981 = -1.*t6661*t6857*t6013;
  t6983 = -1.*t6065*t6167*t6646;
  t6997 = t5982*t6065*t6885;
  t7001 = -1.*t6192*t6866;
  t7004 = -1.*t6885*t6020;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t5969*t6020 - 1.*t6056*t6074)*var2[1] + t6081*var2[2];
  p_output1[10]=(-1.*t5969*t5982*t6065 - 1.*t6056*t6088)*var2[1] + (t5982*t6056*t6065 - 1.*t5969*t6088)*var2[2];
  p_output1[11]=(-1.*t5969*t6106 - 1.*t6056*t6115)*var2[1] + t6122*var2[2];
  p_output1[12]=t6074*var2[0] - 1.*t5969*t6127*var2[1] + t6056*t6127*var2[2] + ((-1.*t6134*t6169 - 1.*t6169*t6173 - 1.*t6088*t6177 - 1.*t6088*t6181)*t6186 + t6115*t6194 + t6088*t6199 + t6173*(t6115*t6177 + t6115*t6181 + t6169*t6186 + t6169*t6203))*var2[3];
  p_output1[13]=t6088*var2[0] - 1.*t5969*t6134*var2[1] + t6056*t6134*var2[2] + ((-1.*t6115*t6177 - 1.*t6115*t6181 - 1.*t6169*t6186 - 1.*t6169*t6203)*t6219 + t6186*(t6127*t6169 + t6074*t6177 + t6074*t6181 + t6169*t6219) + t6115*t6222 + t6074*t6233)*var2[3];
  p_output1[14]=t6115*var2[0] - 1.*t5969*t6203*var2[1] + t6056*t6203*var2[2] + ((t6134*t6169 + t6169*t6173 + t6088*t6177 + t6088*t6181)*t6219 + t6173*(-1.*t6127*t6169 - 1.*t6074*t6177 - 1.*t6074*t6181 - 1.*t6169*t6219) + t6074*t6256 + t6088*t6261)*var2[3];
  p_output1[15]=t6060*t6274*var2[0] + (t6056*t6071 + t5969*t6068*t6274)*var2[1] + (t5969*t6071 - 1.*t6056*t6068*t6274)*var2[2] + (-1.*t5982*t6060*t6065*t6199 + t6186*(-1.*t5982*t6065*t6163 - 1.*t5982*t6065*t6068*t6169 + t5982*t6060*t6065*t6181 + t6068*t6088*t6286 - 1.*t6060*t6173*t6286 + t6288) + t6060*t6194*t6302 + t6173*(-1.*t6068*t6115*t6286 + t6060*t6186*t6286 + t6299 - 1.*t6068*t6169*t6302 + t6060*t6181*t6302 + t6305))*var2[3] + (t6106*(t6015*t6065*t6286 + t6288) + t6112*t6293 - 1.*t6015*t6065*t6297 + t5982*t6065*(t6112*t6286 + t6299 + t6163*t6302 + t6305))*var2[4];
  p_output1[16]=-1.*t5982*t6060*t6065*var2[0] + (-1.*t6015*t6056*t6065 - 1.*t5969*t5982*t6065*t6068)*var2[1] + (-1.*t5969*t6015*t6065 + t5982*t6056*t6065*t6068)*var2[2] + (t6060*t6233*t6274 + t6060*t6222*t6302 + t6186*(-1.*t6068*t6169*t6274 + t6060*t6181*t6274 - 1.*t6068*t6074*t6286 + t6060*t6219*t6286 + t6338 + t6340) + t6219*(t6068*t6115*t6286 - 1.*t6060*t6186*t6286 + t6068*t6169*t6302 - 1.*t6060*t6181*t6302 + t6351 + t6354))*var2[3] + (t6106*(t6163*t6274 + t6071*t6286 + t6338 + t6340) + t6112*t6345 + t6071*t6349 + t6020*(-1.*t6112*t6286 - 1.*t6163*t6302 + t6351 + t6354))*var2[4];
  p_output1[17]=t6060*t6302*var2[0] + (t6056*t6112 + t5969*t6068*t6302)*var2[1] + (t5969*t6112 - 1.*t6056*t6068*t6302)*var2[2] + (-1.*t5982*t6060*t6065*t6261 + t6060*t6256*t6274 + t6219*(t5982*t6065*t6163 + t5982*t6065*t6068*t6169 - 1.*t5982*t6060*t6065*t6181 - 1.*t6068*t6088*t6286 + t6060*t6173*t6286 + t6390) + t6173*(t6068*t6169*t6274 - 1.*t6060*t6181*t6274 + t6068*t6074*t6286 - 1.*t6060*t6219*t6286 + t6394 + t6396))*var2[3] + (t6071*t6387 + t6020*(-1.*t6015*t6065*t6286 + t6390) + t5982*t6065*(-1.*t6163*t6274 - 1.*t6071*t6286 + t6394 + t6396) - 1.*t6015*t6065*t6401)*var2[4];
  p_output1[18]=t6425*var2[0] + (-1.*t5982*t6013*t6056*t6065 - 1.*t5969*t6430)*var2[1] + (-1.*t5969*t5982*t6013*t6065 + t6056*t6430)*var2[2] + (t6194*t6484 + t6199*t6492 + t6186*(t6466 + t6468 - 1.*t6169*t6488 - 1.*t6181*t6492 - 1.*t6088*t6496 - 1.*t6173*t6500) + t6173*(t6475 + t6476 + t6181*t6484 + t6115*t6496 + t6186*t6500 + t6169*t6507))*var2[3] + (-1.*t5982*t6018*t6065*t6293 - 1.*t5982*t5983*t6297 + t6106*(-1.*t5983*t6015*t6163 + t6445 + t6448 + t6466 + t6468 - 1.*t6065*t6443*t6469) + t5982*t6065*(t6015*t6018*t6065*t6163 - 1.*t6015*t6112*t6443 + t6453 + t6454 + t6475 + t6476))*var2[4] + (-1.*t5983*t6018*t6439 + t6018*t6065*(t5983*t6154 - 1.*t6065*t6443 + t6445 + t6448) + t5983*(-1.*t6018*t6065*t6154 - 1.*t5983*t6018*t6443 + t6453 + t6454) + t6065*(t6295 + t6458 + t6459))*var2[5];
  p_output1[19]=t6492*var2[0] + (-1.*t5982*t5983*t6056 - 1.*t5969*t6488)*var2[1] + (-1.*t5969*t5982*t5983 + t6056*t6488)*var2[2] + (t6233*t6425 + t6222*t6484 + t6186*(t6181*t6425 + t6169*t6430 + t6074*t6496 + t6219*t6500 + t6550 + t6552) + t6219*(-1.*t6181*t6484 - 1.*t6115*t6496 - 1.*t6186*t6500 - 1.*t6169*t6507 + t6557 + t6558))*var2[3] + (-1.*t5982*t6018*t6065*t6345 - 1.*t5982*t6013*t6065*t6349 + t6106*(t6013*t6015*t6065*t6163 - 1.*t6015*t6071*t6443 + t6527 + t6528 + t6550 + t6552) + t6020*(-1.*t6015*t6018*t6065*t6163 + t6015*t6112*t6443 + t6533 + t6534 + t6557 + t6558))*var2[4] + (t6018*t6065*(-1.*t6013*t6065*t6154 - 1.*t5983*t6013*t6443 + t6527 + t6528) + t6013*t6065*(t6018*t6065*t6154 + t5983*t6018*t6443 + t6533 + t6534) - 1.*t5983*t6013*t6540 - 1.*t5983*t6018*t6544)*var2[5];
  p_output1[20]=t6484*var2[0] + (-1.*t5982*t6018*t6056*t6065 - 1.*t5969*t6507)*var2[1] + (-1.*t5969*t5982*t6018*t6065 + t6056*t6507)*var2[2] + (t6256*t6425 + t6261*t6492 + t6219*(t6169*t6488 + t6181*t6492 + t6088*t6496 + t6173*t6500 + t6613 + t6614) + t6173*(-1.*t6181*t6425 - 1.*t6169*t6430 - 1.*t6074*t6496 - 1.*t6219*t6500 + t6620 + t6622))*var2[3] + (-1.*t5982*t6013*t6065*t6387 - 1.*t5982*t5983*t6401 + t6020*(t5983*t6015*t6163 + t6065*t6443*t6469 + t6594 + t6595 + t6613 + t6614) + t5982*t6065*(-1.*t6013*t6015*t6065*t6163 + t6015*t6071*t6443 + t6600 + t6601 + t6620 + t6622))*var2[4] + (-1.*t5983*t6013*t6591 + t6013*t6065*(-1.*t5983*t6154 + t6065*t6443 + t6594 + t6595) + t5983*(t6013*t6065*t6154 + t5983*t6013*t6443 + t6600 + t6601) + t6065*(t6399 + t6605 + t6606))*var2[5];
  p_output1[21]=t6186*var2[0] + t6122*var2[1] + (t5969*t6106 + t6056*t6115)*var2[2] + (t6194*t6704 + t6186*(t6687 - 1.*t6088*t6708 - 1.*t6173*t6712) + t6173*(t6695 + t6696 + t6181*t6704 + t6115*t6708 + t6186*t6712 + t6169*t6719))*var2[3] + (t6293*t6678 + t6106*(-1.*t5983*t6065*t6663 + t6015*t6065*t6682 + t6687) + t5982*t6065*(t6653 + t6664 + t6112*t6682 + t6163*t6693 + t6695 + t6696))*var2[4] + (t6065*t6102*t6439 + t5983*(-1.*t5983*t6102*t6154 + t6161*t6646 + t6653 + t6102*t6658 + t6664 + t6018*t6663*t6665))*var2[5] + (-0.1575*t6018 - 0.2255*t6646)*var2[6];
  p_output1[22]=(t6186*t6233 + t6222*t6704 + t6186*(t6196 + t6197 + t6198 + t6074*t6708 + t6219*t6712 + t6764) + t6219*(-1.*t6181*t6704 - 1.*t6115*t6708 - 1.*t6186*t6712 - 1.*t6169*t6719 + t6768 + t6769))*var2[3] + (t6106*t6349 + t6345*t6678 + t6106*(t6196 + t6295 + t6296 + t6071*t6682 + t6738 + t6764) + t6020*(-1.*t6112*t6682 - 1.*t6163*t6693 + t6730 + t6734 + t6768 + t6769))*var2[4] + (t6018*t6065*t6540 + t6065*t6102*t6544 + t6013*t6065*(t5983*t6102*t6154 - 1.*t6018*t6663*t6665 + t6730 + t6732 + t6733 + t6734) + t6018*t6065*(t6295 + t6458 + t6459 + t6013*t6663*t6665 + t6738 + t6740))*var2[5] + (t6018*(-1.*t6102*t6152 - 1.*t6018*t6663 + t6732 + t6733) + t6102*(t6018*t6152 + t6458 + t6013*t6663 + t6740) + t6646*t6746 + t6102*t6753)*var2[6];
  p_output1[23]=t6704*var2[0] + (t6056*t6678 - 1.*t5969*t6719)*var2[1] + (t5969*t6678 + t6056*t6719)*var2[2] + (t6186*t6256 + t6219*(t6088*t6708 + t6173*t6712 + t6809) + t6173*(t6230 + t6231 + t6232 - 1.*t6074*t6708 - 1.*t6219*t6712 + t6815))*var2[3] + (t6106*t6387 + t6020*(t5983*t6065*t6663 - 1.*t6015*t6065*t6682 + t6809) + t5982*t6065*(t6230 + t6347 + t6348 - 1.*t6071*t6682 + t6793 + t6815))*var2[4] + (t6018*t6065*t6591 + t5983*(t6347 + t6538 + t6539 - 1.*t6018*t6658 - 1.*t6013*t6663*t6665 + t6793))*var2[5] + 0.068*t6102*var2[6];
  p_output1[24]=t6849*var2[0] + (t6056*t6866 - 1.*t5969*t6870)*var2[1] + (t5969*t6866 + t6056*t6870)*var2[2] + (t6194*t6219 + t6186*(t6886 - 1.*t6088*t6899 - 1.*t6173*t6903) + t6173*(t6216 + t6220 + t6221 + t6890 + t6115*t6899 + t6186*t6903))*var2[3] + (t6020*t6293 + t6106*(-1.*t5983*t6065*t6857 + t6015*t6065*t6881 + t6886) + t5982*t6065*(t6216 + t6343 + t6344 + t6858 + t6112*t6881 + t6890))*var2[4] + (t6013*t6065*t6439 + t5983*(t6343 + t6542 + t6543 + t6102*t6853 + t6018*t6665*t6857 + t6858))*var2[5] + (-0.2255*t6018 - 0.1575*t6646)*var2[6] + (0.325*t5984 - 1.*t5984*t6150 - 1.*t5984*t6836)*var2[7];
  p_output1[25]=(t6219*t6222 + t6233*t6849 + t6186*(t6181*t6849 + t6169*t6870 + t6074*t6899 + t6219*t6903 + t6944 + t6947) + t6219*(t6258 + t6259 + t6260 - 1.*t6115*t6899 - 1.*t6186*t6903 + t6951))*var2[3] + (t6020*t6345 + t6349*t6866 + t6106*(t6163*t6847 + t6071*t6881 + t6922 + t6924 + t6944 + t6947) + t6020*(t6258 + t6399 + t6400 - 1.*t6112*t6881 + t6917 + t6951))*var2[4] + (t6013*t6065*t6544 + t6065*t6540*t6646 + t6013*t6065*(t6399 + t6605 + t6606 - 1.*t6018*t6665*t6857 + t6916 + t6917) + t6018*t6065*(-1.*t5983*t6154*t6646 + t6013*t6665*t6857 + t6921 + t6922 + t6924 + t6926))*var2[5] + (t6018*t6746 + t6013*t6753 + t6018*(-1.*t6013*t6152 + t6606 - 1.*t6018*t6857 + t6916) + t6102*(t6152*t6646 + t6013*t6857 + t6921 + t6926))*var2[6];
  p_output1[26]=t6219*var2[0] + t6081*var2[1] + (t5969*t6020 + t6056*t6074)*var2[2] + (t6256*t6849 + t6219*(t6088*t6899 + t6173*t6903 + t6997) + t6173*(-1.*t6181*t6849 - 1.*t6169*t6870 - 1.*t6074*t6899 - 1.*t6219*t6903 + t7001 + t7004))*var2[3] + (t6387*t6866 + t6020*(t5983*t6065*t6857 - 1.*t6015*t6065*t6881 + t6997) + t5982*t6065*(-1.*t6163*t6847 - 1.*t6071*t6881 + t6981 + t6983 + t7001 + t7004))*var2[4] + (t6065*t6591*t6646 + t5983*(-1.*t6013*t6161 + t5983*t6154*t6646 - 1.*t6018*t6853 - 1.*t6013*t6665*t6857 + t6981 + t6983))*var2[5] + 0.068*t6013*var2[6] + (0.325*t6011 - 1.*t6011*t6150 - 1.*t6011*t6836)*var2[7];
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
