/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 18:59:46 GMT+02:00
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
  double t5953;
  double t5954;
  double t5962;
  double t5963;
  double t5982;
  double t5993;
  double t5994;
  double t5997;
  double t5912;
  double t5952;
  double t6000;
  double t6006;
  double t5996;
  double t6001;
  double t6002;
  double t5844;
  double t6007;
  double t6009;
  double t6057;
  double t6061;
  double t6062;
  double t6063;
  double t6066;
  double t6067;
  double t6068;
  double t6070;
  double t6071;
  double t6082;
  double t6084;
  double t6085;
  double t6087;
  double t6089;
  double t6090;
  double t6101;
  double t6102;
  double t6103;
  double t6106;
  double t6107;
  double t6109;
  double t6110;
  double t6111;
  double t6121;
  double t6125;
  double t6129;
  double t6133;
  double t6149;
  double t6150;
  double t6155;
  double t6170;
  double t6171;
  double t6172;
  double t6173;
  double t6174;
  double t6179;
  double t6182;
  double t6184;
  double t6186;
  double t6187;
  double t6190;
  double t6192;
  double t6194;
  double t6195;
  double t6169;
  double t6175;
  double t6176;
  double t6177;
  double t6196;
  double t6197;
  double t6201;
  double t6203;
  double t6205;
  double t6206;
  double t6207;
  double t6208;
  double t6209;
  double t6213;
  double t6214;
  double t6215;
  double t6178;
  double t6210;
  double t6211;
  double t6230;
  double t6231;
  double t6232;
  double t6160;
  double t6161;
  double t6165;
  double t6222;
  double t6224;
  double t6226;
  double t6238;
  double t6239;
  double t6240;
  double t6263;
  double t6264;
  double t6266;
  double t6346;
  double t6347;
  double t6348;
  double t6227;
  double t6368;
  double t6369;
  double t6370;
  double t6245;
  double t6383;
  double t6384;
  double t6385;
  double t6228;
  double t6233;
  double t6234;
  double t6372;
  double t6378;
  double t6373;
  double t6375;
  double t6376;
  double t6382;
  double t6387;
  double t6246;
  double t6247;
  double t6248;
  double t6275;
  double t6286;
  double t6428;
  double t6430;
  double t6438;
  double t6441;
  double t6276;
  double t6277;
  double t6278;
  double t6287;
  double t6288;
  double t6289;
  double t6301;
  double t6327;
  double t6302;
  double t6303;
  double t6304;
  double t6398;
  double t6401;
  double t6481;
  double t6483;
  double t6487;
  double t6489;
  double t6329;
  double t6334;
  double t6335;
  double t6352;
  double t6353;
  double t6354;
  double t6355;
  double t6359;
  double t6360;
  double t6361;
  double t6362;
  double t6363;
  double t6364;
  double t6365;
  double t6366;
  double t6519;
  double t6520;
  double t6521;
  double t6516;
  double t6517;
  double t6377;
  double t6526;
  double t6527;
  double t6528;
  double t6530;
  double t6531;
  double t6532;
  double t6386;
  double t6390;
  double t6391;
  double t6392;
  double t6393;
  double t6397;
  double t6533;
  double t6404;
  double t6405;
  double t6537;
  double t6410;
  double t6411;
  double t6414;
  double t6418;
  double t6419;
  double t6420;
  double t6421;
  double t6422;
  double t6423;
  double t6424;
  double t6425;
  double t6426;
  double t6429;
  double t6433;
  double t6434;
  double t6435;
  double t6436;
  double t6440;
  double t6444;
  double t6446;
  double t6447;
  double t6448;
  double t6568;
  double t6453;
  double t6454;
  double t6572;
  double t6459;
  double t6460;
  double t6463;
  double t6464;
  double t6468;
  double t6469;
  double t6470;
  double t6471;
  double t6472;
  double t6473;
  double t6474;
  double t6475;
  double t6476;
  double t6477;
  double t6478;
  double t6479;
  double t6482;
  double t6488;
  double t6492;
  double t6493;
  double t6494;
  double t6495;
  double t6498;
  double t6595;
  double t6501;
  double t6502;
  double t6599;
  double t6507;
  double t6508;
  double t6511;
  double t6615;
  double t6616;
  double t6617;
  double t6627;
  double t6628;
  double t6629;
  double t6633;
  double t6634;
  double t6635;
  double t6637;
  double t6638;
  double t6639;
  double t6647;
  double t6648;
  double t6649;
  double t6650;
  double t6651;
  double t6652;
  double t6653;
  double t6655;
  double t6656;
  double t6657;
  double t6654;
  double t6662;
  double t6663;
  double t6665;
  double t6671;
  double t6672;
  double t6673;
  double t6675;
  double t6676;
  double t6677;
  double t6692;
  double t6695;
  double t6708;
  double t6710;
  double t6703;
  double t6732;
  double t6734;
  double t6626;
  double t6630;
  double t6631;
  double t6739;
  double t6076;
  double t6078;
  double t6079;
  double t6771;
  double t6778;
  double t6780;
  double t6618;
  double t6619;
  double t6620;
  double t6621;
  double t6622;
  double t6623;
  double t6624;
  double t6137;
  double t6138;
  double t6139;
  double t6813;
  double t6814;
  double t6815;
  double t6816;
  double t6817;
  double t6819;
  double t6820;
  double t6821;
  double t6825;
  double t6826;
  double t6827;
  double t6818;
  double t6830;
  double t6831;
  double t6832;
  double t6837;
  double t6838;
  double t6839;
  double t6834;
  double t6836;
  double t6845;
  double t6846;
  double t6847;
  double t6849;
  double t6850;
  double t6851;
  double t6855;
  double t6856;
  double t6857;
  double t6689;
  double t6690;
  double t6698;
  double t6699;
  double t6716;
  double t6717;
  double t6718;
  double t6874;
  double t6726;
  double t6727;
  double t6728;
  double t6878;
  double t6880;
  double t6903;
  double t6908;
  double t6910;
  double t6862;
  double t6863;
  double t6864;
  double t6761;
  double t6762;
  double t6763;
  double t6946;
  double t6952;
  t5953 = Cos(var1[16]);
  t5954 = Cos(var1[17]);
  t5962 = -1.*t5953*t5954;
  t5963 = Sin(var1[16]);
  t5982 = Sin(var1[17]);
  t5993 = -1.*t5963*t5982;
  t5994 = t5962 + t5993;
  t5997 = Cos(var1[15]);
  t5912 = Cos(var1[5]);
  t5952 = Sin(var1[15]);
  t6000 = Sin(var1[5]);
  t6006 = Cos(var1[3]);
  t5996 = t5912*t5952*t5994;
  t6001 = t5997*t5994*t6000;
  t6002 = t5996 + t6001;
  t5844 = Sin(var1[3]);
  t6007 = Cos(var1[4]);
  t6009 = -1.*t5954*t5963;
  t6057 = t5953*t5982;
  t6061 = t6009 + t6057;
  t6062 = t6007*t6061;
  t6063 = Sin(var1[4]);
  t6066 = t5997*t5912*t5994;
  t6067 = -1.*t5952*t5994*t6000;
  t6068 = t6066 + t6067;
  t6070 = -1.*t6063*t6068;
  t6071 = t6062 + t6070;
  t6082 = t5912*t5952;
  t6084 = t5997*t6000;
  t6085 = t6082 + t6084;
  t6087 = -1.*t5997*t5912;
  t6089 = t5952*t6000;
  t6090 = t6087 + t6089;
  t6101 = t5912*t5952*t6061;
  t6102 = t5997*t6061*t6000;
  t6103 = t6101 + t6102;
  t6106 = t5953*t5954;
  t6107 = t5963*t5982;
  t6109 = t6106 + t6107;
  t6110 = t6007*t6109;
  t6111 = t5997*t5912*t6061;
  t6121 = -1.*t5952*t6061*t6000;
  t6125 = t6111 + t6121;
  t6129 = -1.*t6063*t6125;
  t6133 = t6110 + t6129;
  t6149 = -1.*t6061*t6063;
  t6150 = -1.*t6007*t6068;
  t6155 = t6149 + t6150;
  t6170 = -1.*t5954;
  t6171 = 1. + t6170;
  t6172 = -0.50321*t6171;
  t6173 = -0.19821*t5954;
  t6174 = t6172 + t6173;
  t6179 = -1.*t5997;
  t6182 = 1. + t6179;
  t6184 = -0.15121*t6182;
  t6186 = -1.*t5953;
  t6187 = 1. + t6186;
  t6190 = -0.28121*t6187;
  t6192 = t5953*t6174;
  t6194 = 0.305*t5963*t5982;
  t6195 = t6190 + t6192 + t6194;
  t6169 = 0.28121*t5963;
  t6175 = t6174*t5963;
  t6176 = -0.305*t5953*t5982;
  t6177 = t6169 + t6175 + t6176;
  t6196 = t5997*t6195;
  t6197 = t6184 + t6196;
  t6201 = t5912*t6197;
  t6203 = -0.15121*t5997;
  t6205 = 0.15121*t5952;
  t6206 = t5952*t6195;
  t6207 = t6184 + t6203 + t6205 + t6206;
  t6208 = -1.*t6207*t6000;
  t6209 = t6201 + t6208;
  t6213 = t6177*t6063;
  t6214 = t6007*t6209;
  t6215 = t6213 + t6214;
  t6178 = -1.*t6177*t6063;
  t6210 = -1.*t6007*t6209;
  t6211 = t6178 + t6210;
  t6230 = t6007*t6177;
  t6231 = -1.*t6063*t6209;
  t6232 = t6230 + t6231;
  t6160 = t6109*t6063;
  t6161 = t6007*t6125;
  t6165 = t6160 + t6161;
  t6222 = t5912*t6207;
  t6224 = t6197*t6000;
  t6226 = t6222 + t6224;
  t6238 = -1.*t6109*t6063;
  t6239 = -1.*t6007*t6125;
  t6240 = t6238 + t6239;
  t6263 = t6061*t6063;
  t6264 = t6007*t6068;
  t6266 = t6263 + t6264;
  t6346 = -1.*t5912*t5952*t5994;
  t6347 = -1.*t5997*t5994*t6000;
  t6348 = t6346 + t6347;
  t6227 = -1.*t6090*t6226;
  t6368 = -1.*t5912*t6207;
  t6369 = -1.*t6197*t6000;
  t6370 = t6368 + t6369;
  t6245 = t6103*t6226;
  t6383 = -1.*t5912*t5952*t6061;
  t6384 = -1.*t5997*t6061*t6000;
  t6385 = t6383 + t6384;
  t6228 = -1.*t6007*t6085*t6215;
  t6233 = t6063*t6085*t6232;
  t6234 = t6227 + t6228 + t6233;
  t6372 = -1.*t6085*t6226;
  t6378 = -1.*t6090*t6209;
  t6373 = t5997*t5912;
  t6375 = -1.*t5952*t6000;
  t6376 = t6373 + t6375;
  t6382 = t6125*t6226;
  t6387 = t6103*t6209;
  t6246 = t6165*t6215;
  t6247 = t6133*t6232;
  t6248 = t6245 + t6246 + t6247;
  t6275 = -1.*t6103*t6226;
  t6286 = t6002*t6226;
  t6428 = -1.*t6125*t6226;
  t6430 = -1.*t6103*t6209;
  t6438 = t6068*t6226;
  t6441 = t6002*t6209;
  t6276 = -1.*t6165*t6215;
  t6277 = -1.*t6133*t6232;
  t6278 = t6275 + t6276 + t6277;
  t6287 = t6266*t6215;
  t6288 = t6071*t6232;
  t6289 = t6286 + t6287 + t6288;
  t6301 = t6090*t6226;
  t6327 = -1.*t6002*t6226;
  t6302 = t6007*t6085*t6215;
  t6303 = -1.*t6063*t6085*t6232;
  t6304 = t6301 + t6302 + t6303;
  t6398 = Power(t6007,2);
  t6401 = Power(t6063,2);
  t6481 = t6085*t6226;
  t6483 = t6090*t6209;
  t6487 = -1.*t6068*t6226;
  t6489 = -1.*t6002*t6209;
  t6329 = -1.*t6266*t6215;
  t6334 = -1.*t6071*t6232;
  t6335 = t6327 + t6329 + t6334;
  t6352 = var2[0]*t6007*t6348;
  t6353 = t5844*t6063*t6348;
  t6354 = t6006*t6068;
  t6355 = t6353 + t6354;
  t6359 = var2[1]*t6355;
  t6360 = -1.*t6006*t6063*t6348;
  t6361 = t5844*t6068;
  t6362 = t6360 + t6361;
  t6363 = var2[2]*t6362;
  t6364 = -1.*t6085*t6209;
  t6365 = t6227 + t6364;
  t6366 = t6125*t6365;
  t6519 = -0.15121*t5952;
  t6520 = -1.*t5952*t6195;
  t6521 = t6519 + t6520;
  t6516 = 0.15121*t5997;
  t6517 = t6516 + t6196;
  t6377 = -1.*t6376*t6209;
  t6526 = t5912*t6521;
  t6527 = -1.*t6517*t6000;
  t6528 = t6526 + t6527;
  t6530 = t5912*t6517;
  t6531 = t6521*t6000;
  t6532 = t6530 + t6531;
  t6386 = t6385*t6209;
  t6390 = t6177*t6109;
  t6391 = t6125*t6209;
  t6392 = t6390 + t6245 + t6391;
  t6393 = t6085*t6392;
  t6397 = t6007*t6385*t6234;
  t6533 = -1.*t6090*t6532;
  t6404 = -1.*t6007*t6376*t6215;
  t6405 = t6063*t6376*t6232;
  t6537 = t6103*t6532;
  t6410 = t6007*t6385*t6215;
  t6411 = -1.*t6063*t6385*t6232;
  t6414 = t6007*t6376*t6248;
  t6418 = var2[0]*t6007*t6376;
  t6419 = t5844*t6085;
  t6420 = -1.*t6006*t6063*t6376;
  t6421 = t6419 + t6420;
  t6422 = var2[2]*t6421;
  t6423 = t6006*t6085;
  t6424 = t5844*t6063*t6376;
  t6425 = t6423 + t6424;
  t6426 = var2[1]*t6425;
  t6429 = -1.*t6385*t6209;
  t6433 = -1.*t6177*t6109;
  t6434 = -1.*t6125*t6209;
  t6435 = t6433 + t6275 + t6434;
  t6436 = t6068*t6435;
  t6440 = t6348*t6209;
  t6444 = t6177*t6061;
  t6446 = t6068*t6209;
  t6447 = t6444 + t6286 + t6446;
  t6448 = t6125*t6447;
  t6568 = -1.*t6103*t6532;
  t6453 = -1.*t6007*t6385*t6215;
  t6454 = t6063*t6385*t6232;
  t6572 = t6002*t6532;
  t6459 = t6007*t6348*t6215;
  t6460 = -1.*t6063*t6348*t6232;
  t6463 = t6007*t6348*t6278;
  t6464 = t6007*t6385*t6289;
  t6468 = var2[0]*t6007*t6385;
  t6469 = t5844*t6063*t6385;
  t6470 = t6006*t6125;
  t6471 = t6469 + t6470;
  t6472 = var2[1]*t6471;
  t6473 = -1.*t6006*t6063*t6385;
  t6474 = t5844*t6125;
  t6475 = t6473 + t6474;
  t6476 = var2[2]*t6475;
  t6477 = t6085*t6209;
  t6478 = t6301 + t6477;
  t6479 = t6068*t6478;
  t6482 = t6376*t6209;
  t6488 = -1.*t6348*t6209;
  t6492 = -1.*t6177*t6061;
  t6493 = -1.*t6068*t6209;
  t6494 = t6492 + t6327 + t6493;
  t6495 = t6085*t6494;
  t6498 = t6007*t6348*t6304;
  t6595 = t6090*t6532;
  t6501 = t6007*t6376*t6215;
  t6502 = -1.*t6063*t6376*t6232;
  t6599 = -1.*t6002*t6532;
  t6507 = -1.*t6007*t6348*t6215;
  t6508 = t6063*t6348*t6232;
  t6511 = t6007*t6376*t6335;
  t6615 = t5954*t5963;
  t6616 = -1.*t5953*t5982;
  t6617 = t6615 + t6616;
  t6627 = t5997*t5912*t6617;
  t6628 = -1.*t5952*t6617*t6000;
  t6629 = t6627 + t6628;
  t6633 = t5912*t5952*t6617;
  t6634 = t5997*t6617*t6000;
  t6635 = t6633 + t6634;
  t6637 = t6007*t5994;
  t6638 = -1.*t6063*t6629;
  t6639 = t6637 + t6638;
  t6647 = -0.28121*t5963;
  t6648 = -1.*t6174*t5963;
  t6649 = 0.305*t5953*t5982;
  t6650 = t6647 + t6648 + t6649;
  t6651 = t5912*t5952*t6650;
  t6652 = t5997*t6650*t6000;
  t6653 = t6651 + t6652;
  t6655 = t5997*t5912*t6650;
  t6656 = -1.*t5952*t6650*t6000;
  t6657 = t6655 + t6656;
  t6654 = -1.*t6090*t6653;
  t6662 = 0.28121*t5953;
  t6663 = t6662 + t6192 + t6194;
  t6665 = t6653*t6103;
  t6671 = t6663*t6063;
  t6672 = t6007*t6657;
  t6673 = t6671 + t6672;
  t6675 = t6007*t6663;
  t6676 = -1.*t6063*t6657;
  t6677 = t6675 + t6676;
  t6692 = t6177*t5994;
  t6695 = t6061*t6663;
  t6708 = Power(t5997,2);
  t6710 = Power(t5952,2);
  t6703 = -1.*t6663*t6109;
  t6732 = t6653*t6002;
  t6734 = t6635*t6226;
  t6626 = t5994*t6063;
  t6630 = t6007*t6629;
  t6631 = t6626 + t6630;
  t6739 = -1.*t6653*t6103;
  t6076 = t6006*t6002;
  t6078 = -1.*t5844*t6071;
  t6079 = t6076 + t6078;
  t6771 = t6090*t6653;
  t6778 = -1.*t6653*t6002;
  t6780 = -1.*t6635*t6226;
  t6618 = -0.15121*t6617;
  t6619 = -0.15121*t6061;
  t6620 = t6618 + t6619;
  t6621 = var2[15]*t6620;
  t6622 = -1.*t5952*t6197;
  t6623 = t5997*t6207;
  t6624 = t6622 + t6623;
  t6137 = t6006*t6103;
  t6138 = -1.*t5844*t6133;
  t6139 = t6137 + t6138;
  t6813 = 0.305*t5954*t5963;
  t6814 = t6813 + t6176;
  t6815 = t5912*t5952*t6814;
  t6816 = t5997*t6814*t6000;
  t6817 = t6815 + t6816;
  t6819 = t5997*t5912*t6814;
  t6820 = -1.*t5952*t6814*t6000;
  t6821 = t6819 + t6820;
  t6825 = t5912*t5952*t6109;
  t6826 = t5997*t6109*t6000;
  t6827 = t6825 + t6826;
  t6818 = -1.*t6090*t6817;
  t6830 = -0.305*t5953*t5954;
  t6831 = -0.305*t5963*t5982;
  t6832 = t6830 + t6831;
  t6837 = t5997*t5912*t6109;
  t6838 = -1.*t5952*t6109*t6000;
  t6839 = t6837 + t6838;
  t6834 = t6817*t6103;
  t6836 = t6827*t6226;
  t6845 = t6832*t6063;
  t6846 = t6007*t6821;
  t6847 = t6845 + t6846;
  t6849 = t6007*t6832;
  t6850 = -1.*t6063*t6821;
  t6851 = t6849 + t6850;
  t6855 = t6617*t6063;
  t6856 = t6007*t6839;
  t6857 = t6855 + t6856;
  t6689 = t5994*t6195;
  t6690 = t6444 + t6689;
  t6698 = -1.*t6061*t6195;
  t6699 = t6698 + t6433;
  t6716 = -1.*t5997*t6061*t6197;
  t6717 = -1.*t5952*t6061*t6207;
  t6718 = t6433 + t6716 + t6717;
  t6874 = t6061*t6832;
  t6726 = t5997*t5994*t6197;
  t6727 = t5952*t5994*t6207;
  t6728 = t6444 + t6726 + t6727;
  t6878 = -1.*t6617*t6177;
  t6880 = -1.*t6832*t6109;
  t6903 = t6817*t6002;
  t6908 = -1.*t6817*t6103;
  t6910 = -1.*t6827*t6226;
  t6862 = t6007*t6617;
  t6863 = -1.*t6063*t6839;
  t6864 = t6862 + t6863;
  t6761 = t5952*t6197;
  t6762 = -1.*t5997*t6207;
  t6763 = t6761 + t6762;
  t6946 = t6090*t6817;
  t6952 = -1.*t6817*t6002;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t5844*t6002 - 1.*t6006*t6071)*var2[1] + t6079*var2[2];
  p_output1[10]=(t6006*t6063*t6085 - 1.*t5844*t6090)*var2[1] + (t5844*t6063*t6085 + t6006*t6090)*var2[2];
  p_output1[11]=(-1.*t5844*t6103 - 1.*t6006*t6133)*var2[1] + t6139*var2[2];
  p_output1[12]=t6071*var2[0] - 1.*t5844*t6155*var2[1] + t6006*t6155*var2[2] + (t6165*(t6063*t6085*t6211 + t6063*t6085*t6215) + t6133*t6234 + t6007*t6085*(t6133*t6211 + t6133*t6215 + t6165*t6232 + t6232*t6240) - 1.*t6063*t6085*t6248)*var2[3];
  p_output1[13]=-1.*t6063*t6085*var2[0] + t5844*t6007*t6085*var2[1] - 1.*t6006*t6007*t6085*var2[2] + ((-1.*t6133*t6211 - 1.*t6133*t6215 - 1.*t6165*t6232 - 1.*t6232*t6240)*t6266 + t6165*(t6071*t6211 + t6071*t6215 + t6155*t6232 + t6232*t6266) + t6071*t6278 + t6133*t6289)*var2[3];
  p_output1[14]=t6133*var2[0] - 1.*t5844*t6240*var2[1] + t6006*t6240*var2[2] + ((-1.*t6063*t6085*t6211 - 1.*t6063*t6085*t6215)*t6266 + t6007*t6085*(-1.*t6071*t6211 - 1.*t6071*t6215 - 1.*t6155*t6232 - 1.*t6232*t6266) + t6071*t6304 - 1.*t6063*t6085*t6335)*var2[3];
  p_output1[15]=t6352 + t6359 + t6363 + (t6397 + t6165*(t6372 + t6378 - 1.*t6085*t6370*t6398 - 1.*t6085*t6370*t6401 + t6404 + t6405) + t6007*t6085*(-1.*t6063*t6133*t6370 + t6007*t6165*t6370 + t6382 + t6387 + t6410 + t6411) + t6414)*var2[3] + (t6366 + t6103*(-1.*t6085*t6370 + t6372 + t6377 + t6378) + t6090*(t6125*t6370 + t6382 + t6386 + t6387) + t6393)*var2[4];
  p_output1[16]=t6418 + t6422 + t6426 + (t6266*(t6063*t6133*t6370 - 1.*t6007*t6165*t6370 + t6428 + t6430 + t6453 + t6454) + t6165*(-1.*t6063*t6071*t6370 + t6007*t6266*t6370 + t6438 + t6441 + t6459 + t6460) + t6463 + t6464)*var2[3] + (t6002*(-1.*t6125*t6370 + t6428 + t6429 + t6430) + t6436 + t6103*(t6068*t6370 + t6438 + t6440 + t6441) + t6448)*var2[4];
  p_output1[17]=t6468 + t6472 + t6476 + (t6498 + t6266*(t6085*t6370*t6398 + t6085*t6370*t6401 + t6481 + t6483 + t6501 + t6502) + t6007*t6085*(t6063*t6071*t6370 - 1.*t6007*t6266*t6370 + t6487 + t6489 + t6507 + t6508) + t6511)*var2[3] + (t6479 + t6002*(t6085*t6370 + t6481 + t6482 + t6483) + t6090*(-1.*t6068*t6370 + t6487 + t6488 + t6489) + t6495)*var2[4];
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
  p_output1[45]=t6352 + t6359 + t6363 + (t6397 + t6414 + t6165*(t6372 + t6404 + t6405 - 1.*t6085*t6398*t6528 - 1.*t6085*t6401*t6528 + t6533) + t6007*t6085*(t6382 + t6410 + t6411 - 1.*t6063*t6133*t6528 + t6007*t6165*t6528 + t6537))*var2[3] + (t6366 + t6393 + t6103*(t6372 + t6377 - 1.*t6085*t6528 + t6533) + t6090*(t6382 + t6386 + t6125*t6528 + t6537))*var2[4] + t6109*(-1.*t5997*t6197 - 1.*t5952*t6207 + t5997*t6517 - 1.*t5952*t6521)*var2[5];
  p_output1[46]=t6418 + t6422 + t6426 + (t6463 + t6464 + t6266*(t6428 + t6453 + t6454 + t6063*t6133*t6528 - 1.*t6007*t6165*t6528 + t6568) + t6165*(t6438 + t6459 + t6460 - 1.*t6063*t6071*t6528 + t6007*t6266*t6528 + t6572))*var2[3] + (t6436 + t6448 + t6002*(t6428 + t6429 - 1.*t6125*t6528 + t6568) + t6103*(t6438 + t6440 + t6068*t6528 + t6572))*var2[4] + (t6109*(-1.*t5952*t5994*t6197 + t5994*t5997*t6207 + t5952*t5994*t6517 + t5994*t5997*t6521) + t6061*(t5952*t6061*t6197 - 1.*t5997*t6061*t6207 - 1.*t5952*t6061*t6517 - 1.*t5997*t6061*t6521))*var2[5];
  p_output1[47]=t6468 + t6472 + t6476 + (t6498 + t6511 + t6266*(t6481 + t6501 + t6502 + t6085*t6398*t6528 + t6085*t6401*t6528 + t6595) + t6007*t6085*(t6487 + t6507 + t6508 + t6063*t6071*t6528 - 1.*t6007*t6266*t6528 + t6599))*var2[3] + (t6479 + t6495 + t6002*(t6481 + t6482 + t6085*t6528 + t6595) + t6090*(t6487 + t6488 - 1.*t6068*t6528 + t6599))*var2[4] + t6061*(t5997*t6197 + t5952*t6207 - 1.*t5997*t6517 + t5952*t6521)*var2[5];
  p_output1[48]=t6621 + t6631*var2[0] + (t6006*t6635 - 1.*t5844*t6639)*var2[1] + (t5844*t6635 + t6006*t6639)*var2[2] + (t6234*t6266 + t6165*(t6654 - 1.*t6007*t6085*t6673 + t6063*t6085*t6677) + t6007*t6085*(t6286 + t6287 + t6288 + t6665 + t6165*t6673 + t6133*t6677))*var2[3] + (t6002*t6365 + t6103*(t6654 - 1.*t6085*t6657) + t6090*(t6286 + t6444 + t6446 + t6125*t6657 + t6109*t6663 + t6665))*var2[4] + t6061*t6624*var2[5];
  p_output1[49]=(t6266*t6289 + t6278*t6631 + t6165*(t6215*t6631 + t6232*t6639 + t6266*t6673 + t6071*t6677 + t6732 + t6734) + t6266*(t6327 + t6329 + t6334 - 1.*t6165*t6673 - 1.*t6133*t6677 + t6739))*var2[3] + (t6002*t6447 + t6435*t6635 + t6103*(t6209*t6629 + t6068*t6657 + t6692 + t6695 + t6732 + t6734) + t6002*(t6327 + t6492 + t6493 - 1.*t6125*t6657 + t6703 + t6739))*var2[4] + (t6109*(t5997*t6197*t6617 + t5952*t6207*t6617 + t6692 + t6695 + t5994*t6650*t6708 + t5994*t6650*t6710) + t6061*(-1.*t5994*t5997*t6197 - 1.*t5952*t5994*t6207 + t6492 + t6703 - 1.*t6061*t6650*t6708 - 1.*t6061*t6650*t6710) + t5994*t6718 + t6061*t6728)*var2[5] + (t6061*t6690 + t6109*(t6195*t6617 + t5994*t6650 + t6692 + t6695) + t5994*t6699 + t6061*(-1.*t5994*t6195 + t6492 - 1.*t6061*t6650 + t6703))*var2[15];
  p_output1[50]=t6266*var2[0] + t6079*var2[1] + (t5844*t6002 + t6006*t6071)*var2[2] + (t6304*t6631 + t6266*(t6007*t6085*t6673 - 1.*t6063*t6085*t6677 + t6771) + t6007*t6085*(-1.*t6215*t6631 - 1.*t6232*t6639 - 1.*t6266*t6673 - 1.*t6071*t6677 + t6778 + t6780))*var2[3] + (t6478*t6635 + t6002*(t6085*t6657 + t6771) + t6090*(-1.*t5994*t6177 - 1.*t6209*t6629 - 1.*t6068*t6657 - 1.*t6061*t6663 + t6778 + t6780))*var2[4] + t5994*t6763*var2[5];
  p_output1[51]=t6621 + t6165*var2[0] + t6139*var2[1] + (t5844*t6103 + t6006*t6133)*var2[2] + (t6165*(t6818 - 1.*t6007*t6085*t6847 + t6063*t6085*t6851) + t6234*t6857 + t6007*t6085*(t6834 + t6836 + t6165*t6847 + t6133*t6851 + t6215*t6857 + t6232*t6864))*var2[3] + (t6103*(t6818 - 1.*t6085*t6821) + t6365*t6827 + t6090*(t6177*t6617 + t6125*t6821 + t6109*t6832 + t6834 + t6836 + t6209*t6839))*var2[4] + t6617*t6624*var2[5] + (0.28121*t5954 - 0.305*Power(t5954,2) + t5954*t6174)*var2[16];
  p_output1[52]=(t6165*t6278 + t6289*t6857 + t6165*(t6245 + t6246 + t6247 + t6266*t6847 + t6071*t6851 + t6903) + t6266*(-1.*t6165*t6847 - 1.*t6133*t6851 - 1.*t6215*t6857 - 1.*t6232*t6864 + t6908 + t6910))*var2[3] + (t6103*t6435 + t6447*t6827 + t6103*(t6245 + t6390 + t6391 + t6068*t6821 + t6874 + t6903) + t6002*(-1.*t6125*t6821 - 1.*t6209*t6839 + t6878 + t6880 + t6908 + t6910))*var2[4] + (t6109*t6718 + t6617*t6728 + t6109*(t5997*t6061*t6197 + t5952*t6061*t6207 + t6390 + t5994*t6708*t6814 + t5994*t6710*t6814 + t6874) + t6061*(-1.*t5997*t6109*t6197 - 1.*t5952*t6109*t6207 - 1.*t6061*t6708*t6814 - 1.*t6061*t6710*t6814 + t6878 + t6880))*var2[5] + (t6617*t6690 + t6109*t6699 + t6109*(t6061*t6195 + t6390 + t5994*t6814 + t6874) + t6061*(-1.*t6109*t6195 - 1.*t6061*t6814 + t6878 + t6880))*var2[15];
  p_output1[53]=t6857*var2[0] + (t6006*t6827 - 1.*t5844*t6864)*var2[1] + (t5844*t6827 + t6006*t6864)*var2[2] + (t6165*t6304 + t6266*(t6007*t6085*t6847 - 1.*t6063*t6085*t6851 + t6946) + t6007*t6085*(t6275 + t6276 + t6277 - 1.*t6266*t6847 - 1.*t6071*t6851 + t6952))*var2[3] + (t6103*t6478 + t6002*(t6085*t6821 + t6946) + t6090*(t6275 + t6433 + t6434 - 1.*t6068*t6821 - 1.*t6061*t6832 + t6952))*var2[4] + t6109*t6763*var2[5] + (-0.28121*t5982 + 0.305*t5954*t5982 - 1.*t5982*t6174)*var2[16];
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
