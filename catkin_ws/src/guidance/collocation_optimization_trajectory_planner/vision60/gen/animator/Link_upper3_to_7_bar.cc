/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:11:20 GMT+02:00
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
  double t3447;
  double t3623;
  double t3688;
  double t3803;
  double t3886;
  double t3593;
  double t3974;
  double t2297;
  double t4038;
  double t4097;
  double t4133;
  double t2854;
  double t2949;
  double t3599;
  double t3795;
  double t3857;
  double t3874;
  double t3888;
  double t3910;
  double t3918;
  double t3921;
  double t4171;
  double t4184;
  double t4205;
  double t4245;
  double t4274;
  double t4282;
  double t4299;
  double t4305;
  double t3953;
  double t4265;
  double t4371;
  double t6129;
  double t6151;
  double t6181;
  double t6185;
  double t6197;
  double t6142;
  double t6166;
  double t6168;
  double t6249;
  double t6254;
  double t6256;
  double t6136;
  double t6178;
  double t6206;
  double t6231;
  double t6233;
  double t6237;
  double t6265;
  double t6275;
  double t6277;
  double t6279;
  double t6298;
  double t6300;
  double t6305;
  double t6318;
  double t6242;
  double t6281;
  double t6320;
  double t6484;
  double t6488;
  double t6489;
  double t6474;
  double t6478;
  double t6482;
  double t6499;
  double t6501;
  double t6503;
  double t6472;
  double t6483;
  double t6490;
  double t6493;
  double t6494;
  double t6496;
  double t6515;
  double t6516;
  double t6526;
  double t6528;
  double t6535;
  double t6536;
  double t6537;
  double t6542;
  double t6498;
  double t6529;
  double t6546;
  double t4397;
  double t4401;
  double t6649;
  double t4455;
  double t4541;
  double t4632;
  double t4672;
  double t4818;
  double t4899;
  double t4969;
  double t5267;
  double t5571;
  double t5572;
  double t5729;
  double t5732;
  double t5743;
  double t5745;
  double t5874;
  double t5937;
  double t5954;
  double t5958;
  double t5977;
  double t6021;
  double t6025;
  double t6030;
  double t6033;
  double t6034;
  double t6055;
  double t6057;
  double t6073;
  double t6079;
  double t6084;
  double t6095;
  double t6103;
  double t6104;
  double t6120;
  double t6124;
  double t6652;
  double t6328;
  double t6331;
  double t6672;
  double t6335;
  double t6337;
  double t6339;
  double t6345;
  double t6352;
  double t6358;
  double t6366;
  double t6371;
  double t6373;
  double t6374;
  double t6376;
  double t6377;
  double t6381;
  double t6382;
  double t6387;
  double t6388;
  double t6391;
  double t6392;
  double t6396;
  double t6402;
  double t6411;
  double t6412;
  double t6415;
  double t6423;
  double t6436;
  double t6438;
  double t6440;
  double t6441;
  double t6443;
  double t6444;
  double t6450;
  double t6461;
  double t6469;
  double t6470;
  double t6673;
  double t6547;
  double t6551;
  double t6698;
  double t6553;
  double t6554;
  double t6556;
  double t6562;
  double t6571;
  double t6572;
  double t6574;
  double t6576;
  double t6580;
  double t6585;
  double t6598;
  double t6599;
  double t6601;
  double t6602;
  double t6604;
  double t6605;
  double t6608;
  double t6611;
  double t6615;
  double t6616;
  double t6618;
  double t6620;
  double t6624;
  double t6626;
  double t6629;
  double t6631;
  double t6633;
  double t6634;
  double t6636;
  double t6637;
  double t6639;
  double t6640;
  double t6646;
  double t6647;
  double t6700;
  t3447 = Cos(var1[4]);
  t3623 = Sin(var1[15]);
  t3688 = Sin(var1[4]);
  t3803 = Cos(var1[15]);
  t3886 = Sin(var1[5]);
  t3593 = Cos(var1[5]);
  t3974 = Sin(var1[16]);
  t2297 = Cos(var1[16]);
  t4038 = t3803*t3688;
  t4097 = t3447*t3623*t3886;
  t4133 = t4038 + t4097;
  t2854 = -1.*t2297;
  t2949 = 1. + t2854;
  t3599 = -0.325*t2949*t3447*t3593;
  t3795 = 0.1575*t3623*t3688;
  t3857 = -1.*t3803;
  t3874 = 1. + t3857;
  t3888 = 0.1575*t3874*t3447*t3886;
  t3910 = t3623*t3688;
  t3918 = -1.*t3803*t3447*t3886;
  t3921 = t3910 + t3918;
  t4171 = 0.325*t3974*t4133;
  t4184 = -1.*t3447*t3593*t3974;
  t4205 = t2297*t4133;
  t4245 = t4184 + t4205;
  t4274 = t2297*t3447*t3593;
  t4282 = t3974*t4133;
  t4299 = t4274 + t4282;
  t4305 = -0.325*t4299;
  t3953 = -0.221697*t3921;
  t4265 = 0.01451*t4245;
  t4371 = var1[0] + t3599 + t3795 + t3888 + t3953 + t4171 + t4265 + t4305;
  t6129 = Sin(var1[3]);
  t6151 = Cos(var1[3]);
  t6181 = t6151*t3593;
  t6185 = -1.*t6129*t3688*t3886;
  t6197 = t6181 + t6185;
  t6142 = t3593*t6129*t3688;
  t6166 = t6151*t3886;
  t6168 = t6142 + t6166;
  t6249 = -1.*t3803*t3447*t6129;
  t6254 = -1.*t3623*t6197;
  t6256 = t6249 + t6254;
  t6136 = -0.1575*t3447*t3623*t6129;
  t6178 = -0.325*t2949*t6168;
  t6206 = -0.1575*t3874*t6197;
  t6231 = -1.*t3447*t3623*t6129;
  t6233 = t3803*t6197;
  t6237 = t6231 + t6233;
  t6265 = 0.325*t3974*t6256;
  t6275 = -1.*t3974*t6168;
  t6277 = t2297*t6256;
  t6279 = t6275 + t6277;
  t6298 = t2297*t6168;
  t6300 = t3974*t6256;
  t6305 = t6298 + t6300;
  t6318 = -0.325*t6305;
  t6242 = -0.221697*t6237;
  t6281 = 0.01451*t6279;
  t6320 = var1[1] + t6136 + t6178 + t6206 + t6242 + t6265 + t6281 + t6318;
  t6484 = t3593*t6129;
  t6488 = t6151*t3688*t3886;
  t6489 = t6484 + t6488;
  t6474 = -1.*t6151*t3593*t3688;
  t6478 = t6129*t3886;
  t6482 = t6474 + t6478;
  t6499 = t3803*t6151*t3447;
  t6501 = -1.*t3623*t6489;
  t6503 = t6499 + t6501;
  t6472 = 0.1575*t6151*t3447*t3623;
  t6483 = -0.325*t2949*t6482;
  t6490 = -0.1575*t3874*t6489;
  t6493 = t6151*t3447*t3623;
  t6494 = t3803*t6489;
  t6496 = t6493 + t6494;
  t6515 = 0.325*t3974*t6503;
  t6516 = -1.*t3974*t6482;
  t6526 = t2297*t6503;
  t6528 = t6516 + t6526;
  t6535 = t2297*t6482;
  t6536 = t3974*t6503;
  t6537 = t6535 + t6536;
  t6542 = -0.325*t6537;
  t6498 = -0.221697*t6496;
  t6529 = 0.01451*t6528;
  t6546 = var1[2] + t6472 + t6483 + t6490 + t6498 + t6515 + t6529 + t6542;
  t4397 = -0.217192*t3921;
  t4401 = 0.012489*t4245;
  t6649 = -0.575*t4299;
  t4455 = -0.213587*t3921;
  t4541 = 0.009115*t4245;
  t4632 = -0.211273*t3921;
  t4672 = 0.004753*t4245;
  t4818 = -0.210501*t3921;
  t4899 = -0.000124*t4245;
  t4969 = -0.211354*t3921;
  t5267 = -0.004988*t4245;
  t5571 = -0.21374*t3921;
  t5572 = -0.009311*t4245;
  t5729 = -0.2174*t3921;
  t5732 = -0.012625*t4245;
  t5743 = -0.221938*t3921;
  t5745 = -0.014571*t4245;
  t5874 = -0.226862*t3921;
  t5937 = -0.014938*t4245;
  t5954 = -0.231639*t3921;
  t5958 = -0.013686*t4245;
  t5977 = -0.23575*t3921;
  t6021 = -0.010951*t4245;
  t6025 = -0.238751*t3921;
  t6030 = -0.00703*t4245;
  t6033 = -0.240315*t3921;
  t6034 = -0.002346*t4245;
  t6055 = -0.240274*t3921;
  t6057 = 0.002591*t4245;
  t6073 = -0.238633*t3921;
  t6079 = 0.007248*t4245;
  t6084 = -0.235568*t3921;
  t6095 = 0.01112*t4245;
  t6103 = -0.231412*t3921;
  t6104 = 0.013786*t4245;
  t6120 = -0.226615*t3921;
  t6124 = 0.014959*t4245;
  t6652 = var1[0] + t3599 + t3795 + t3888 + t3953 + t4171 + t4265 + t6649;
  t6328 = -0.217192*t6237;
  t6331 = 0.012489*t6279;
  t6672 = -0.575*t6305;
  t6335 = -0.213587*t6237;
  t6337 = 0.009115*t6279;
  t6339 = -0.211273*t6237;
  t6345 = 0.004753*t6279;
  t6352 = -0.210501*t6237;
  t6358 = -0.000124*t6279;
  t6366 = -0.211354*t6237;
  t6371 = -0.004988*t6279;
  t6373 = -0.21374*t6237;
  t6374 = -0.009311*t6279;
  t6376 = -0.2174*t6237;
  t6377 = -0.012625*t6279;
  t6381 = -0.221938*t6237;
  t6382 = -0.014571*t6279;
  t6387 = -0.226862*t6237;
  t6388 = -0.014938*t6279;
  t6391 = -0.231639*t6237;
  t6392 = -0.013686*t6279;
  t6396 = -0.23575*t6237;
  t6402 = -0.010951*t6279;
  t6411 = -0.238751*t6237;
  t6412 = -0.00703*t6279;
  t6415 = -0.240315*t6237;
  t6423 = -0.002346*t6279;
  t6436 = -0.240274*t6237;
  t6438 = 0.002591*t6279;
  t6440 = -0.238633*t6237;
  t6441 = 0.007248*t6279;
  t6443 = -0.235568*t6237;
  t6444 = 0.01112*t6279;
  t6450 = -0.231412*t6237;
  t6461 = 0.013786*t6279;
  t6469 = -0.226615*t6237;
  t6470 = 0.014959*t6279;
  t6673 = var1[1] + t6136 + t6178 + t6206 + t6242 + t6265 + t6281 + t6672;
  t6547 = -0.217192*t6496;
  t6551 = 0.012489*t6528;
  t6698 = -0.575*t6537;
  t6553 = -0.213587*t6496;
  t6554 = 0.009115*t6528;
  t6556 = -0.211273*t6496;
  t6562 = 0.004753*t6528;
  t6571 = -0.210501*t6496;
  t6572 = -0.000124*t6528;
  t6574 = -0.211354*t6496;
  t6576 = -0.004988*t6528;
  t6580 = -0.21374*t6496;
  t6585 = -0.009311*t6528;
  t6598 = -0.2174*t6496;
  t6599 = -0.012625*t6528;
  t6601 = -0.221938*t6496;
  t6602 = -0.014571*t6528;
  t6604 = -0.226862*t6496;
  t6605 = -0.014938*t6528;
  t6608 = -0.231639*t6496;
  t6611 = -0.013686*t6528;
  t6615 = -0.23575*t6496;
  t6616 = -0.010951*t6528;
  t6618 = -0.238751*t6496;
  t6620 = -0.00703*t6528;
  t6624 = -0.240315*t6496;
  t6626 = -0.002346*t6528;
  t6629 = -0.240274*t6496;
  t6631 = 0.002591*t6528;
  t6633 = -0.238633*t6496;
  t6634 = 0.007248*t6528;
  t6636 = -0.235568*t6496;
  t6637 = 0.01112*t6528;
  t6639 = -0.231412*t6496;
  t6640 = 0.013786*t6528;
  t6646 = -0.226615*t6496;
  t6647 = 0.014959*t6528;
  t6700 = var1[2] + t6472 + t6483 + t6490 + t6498 + t6515 + t6529 + t6698;
  p_output1[0]=t4371;
  p_output1[1]=t3599 + t3795 + t3888 + t4171 + t4305 + t4397 + t4401 + var1[0];
  p_output1[2]=t3599 + t3795 + t3888 + t4171 + t4305 + t4455 + t4541 + var1[0];
  p_output1[3]=t3599 + t3795 + t3888 + t4171 + t4305 + t4632 + t4672 + var1[0];
  p_output1[4]=t3599 + t3795 + t3888 + t4171 + t4305 + t4818 + t4899 + var1[0];
  p_output1[5]=t3599 + t3795 + t3888 + t4171 + t4305 + t4969 + t5267 + var1[0];
  p_output1[6]=t3599 + t3795 + t3888 + t4171 + t4305 + t5571 + t5572 + var1[0];
  p_output1[7]=t3599 + t3795 + t3888 + t4171 + t4305 + t5729 + t5732 + var1[0];
  p_output1[8]=t3599 + t3795 + t3888 + t4171 + t4305 + t5743 + t5745 + var1[0];
  p_output1[9]=t3599 + t3795 + t3888 + t4171 + t4305 + t5874 + t5937 + var1[0];
  p_output1[10]=t3599 + t3795 + t3888 + t4171 + t4305 + t5954 + t5958 + var1[0];
  p_output1[11]=t3599 + t3795 + t3888 + t4171 + t4305 + t5977 + t6021 + var1[0];
  p_output1[12]=t3599 + t3795 + t3888 + t4171 + t4305 + t6025 + t6030 + var1[0];
  p_output1[13]=t3599 + t3795 + t3888 + t4171 + t4305 + t6033 + t6034 + var1[0];
  p_output1[14]=t3599 + t3795 + t3888 + t4171 + t4305 + t6055 + t6057 + var1[0];
  p_output1[15]=t3599 + t3795 + t3888 + t4171 + t4305 + t6073 + t6079 + var1[0];
  p_output1[16]=t3599 + t3795 + t3888 + t4171 + t4305 + t6084 + t6095 + var1[0];
  p_output1[17]=t3599 + t3795 + t3888 + t4171 + t4305 + t6103 + t6104 + var1[0];
  p_output1[18]=t3599 + t3795 + t3888 + t4171 + t4305 + t6120 + t6124 + var1[0];
  p_output1[19]=t4371;
  p_output1[20]=t6320;
  p_output1[21]=t6136 + t6178 + t6206 + t6265 + t6318 + t6328 + t6331 + var1[1];
  p_output1[22]=t6136 + t6178 + t6206 + t6265 + t6318 + t6335 + t6337 + var1[1];
  p_output1[23]=t6136 + t6178 + t6206 + t6265 + t6318 + t6339 + t6345 + var1[1];
  p_output1[24]=t6136 + t6178 + t6206 + t6265 + t6318 + t6352 + t6358 + var1[1];
  p_output1[25]=t6136 + t6178 + t6206 + t6265 + t6318 + t6366 + t6371 + var1[1];
  p_output1[26]=t6136 + t6178 + t6206 + t6265 + t6318 + t6373 + t6374 + var1[1];
  p_output1[27]=t6136 + t6178 + t6206 + t6265 + t6318 + t6376 + t6377 + var1[1];
  p_output1[28]=t6136 + t6178 + t6206 + t6265 + t6318 + t6381 + t6382 + var1[1];
  p_output1[29]=t6136 + t6178 + t6206 + t6265 + t6318 + t6387 + t6388 + var1[1];
  p_output1[30]=t6136 + t6178 + t6206 + t6265 + t6318 + t6391 + t6392 + var1[1];
  p_output1[31]=t6136 + t6178 + t6206 + t6265 + t6318 + t6396 + t6402 + var1[1];
  p_output1[32]=t6136 + t6178 + t6206 + t6265 + t6318 + t6411 + t6412 + var1[1];
  p_output1[33]=t6136 + t6178 + t6206 + t6265 + t6318 + t6415 + t6423 + var1[1];
  p_output1[34]=t6136 + t6178 + t6206 + t6265 + t6318 + t6436 + t6438 + var1[1];
  p_output1[35]=t6136 + t6178 + t6206 + t6265 + t6318 + t6440 + t6441 + var1[1];
  p_output1[36]=t6136 + t6178 + t6206 + t6265 + t6318 + t6443 + t6444 + var1[1];
  p_output1[37]=t6136 + t6178 + t6206 + t6265 + t6318 + t6450 + t6461 + var1[1];
  p_output1[38]=t6136 + t6178 + t6206 + t6265 + t6318 + t6469 + t6470 + var1[1];
  p_output1[39]=t6320;
  p_output1[40]=t6546;
  p_output1[41]=t6472 + t6483 + t6490 + t6515 + t6542 + t6547 + t6551 + var1[2];
  p_output1[42]=t6472 + t6483 + t6490 + t6515 + t6542 + t6553 + t6554 + var1[2];
  p_output1[43]=t6472 + t6483 + t6490 + t6515 + t6542 + t6556 + t6562 + var1[2];
  p_output1[44]=t6472 + t6483 + t6490 + t6515 + t6542 + t6571 + t6572 + var1[2];
  p_output1[45]=t6472 + t6483 + t6490 + t6515 + t6542 + t6574 + t6576 + var1[2];
  p_output1[46]=t6472 + t6483 + t6490 + t6515 + t6542 + t6580 + t6585 + var1[2];
  p_output1[47]=t6472 + t6483 + t6490 + t6515 + t6542 + t6598 + t6599 + var1[2];
  p_output1[48]=t6472 + t6483 + t6490 + t6515 + t6542 + t6601 + t6602 + var1[2];
  p_output1[49]=t6472 + t6483 + t6490 + t6515 + t6542 + t6604 + t6605 + var1[2];
  p_output1[50]=t6472 + t6483 + t6490 + t6515 + t6542 + t6608 + t6611 + var1[2];
  p_output1[51]=t6472 + t6483 + t6490 + t6515 + t6542 + t6615 + t6616 + var1[2];
  p_output1[52]=t6472 + t6483 + t6490 + t6515 + t6542 + t6618 + t6620 + var1[2];
  p_output1[53]=t6472 + t6483 + t6490 + t6515 + t6542 + t6624 + t6626 + var1[2];
  p_output1[54]=t6472 + t6483 + t6490 + t6515 + t6542 + t6629 + t6631 + var1[2];
  p_output1[55]=t6472 + t6483 + t6490 + t6515 + t6542 + t6633 + t6634 + var1[2];
  p_output1[56]=t6472 + t6483 + t6490 + t6515 + t6542 + t6636 + t6637 + var1[2];
  p_output1[57]=t6472 + t6483 + t6490 + t6515 + t6542 + t6639 + t6640 + var1[2];
  p_output1[58]=t6472 + t6483 + t6490 + t6515 + t6542 + t6646 + t6647 + var1[2];
  p_output1[59]=t6546;
  p_output1[60]=t6652;
  p_output1[61]=t3599 + t3795 + t3888 + t4171 + t4397 + t4401 + t6649 + var1[0];
  p_output1[62]=t3599 + t3795 + t3888 + t4171 + t4455 + t4541 + t6649 + var1[0];
  p_output1[63]=t3599 + t3795 + t3888 + t4171 + t4632 + t4672 + t6649 + var1[0];
  p_output1[64]=t3599 + t3795 + t3888 + t4171 + t4818 + t4899 + t6649 + var1[0];
  p_output1[65]=t3599 + t3795 + t3888 + t4171 + t4969 + t5267 + t6649 + var1[0];
  p_output1[66]=t3599 + t3795 + t3888 + t4171 + t5571 + t5572 + t6649 + var1[0];
  p_output1[67]=t3599 + t3795 + t3888 + t4171 + t5729 + t5732 + t6649 + var1[0];
  p_output1[68]=t3599 + t3795 + t3888 + t4171 + t5743 + t5745 + t6649 + var1[0];
  p_output1[69]=t3599 + t3795 + t3888 + t4171 + t5874 + t5937 + t6649 + var1[0];
  p_output1[70]=t3599 + t3795 + t3888 + t4171 + t5954 + t5958 + t6649 + var1[0];
  p_output1[71]=t3599 + t3795 + t3888 + t4171 + t5977 + t6021 + t6649 + var1[0];
  p_output1[72]=t3599 + t3795 + t3888 + t4171 + t6025 + t6030 + t6649 + var1[0];
  p_output1[73]=t3599 + t3795 + t3888 + t4171 + t6033 + t6034 + t6649 + var1[0];
  p_output1[74]=t3599 + t3795 + t3888 + t4171 + t6055 + t6057 + t6649 + var1[0];
  p_output1[75]=t3599 + t3795 + t3888 + t4171 + t6073 + t6079 + t6649 + var1[0];
  p_output1[76]=t3599 + t3795 + t3888 + t4171 + t6084 + t6095 + t6649 + var1[0];
  p_output1[77]=t3599 + t3795 + t3888 + t4171 + t6103 + t6104 + t6649 + var1[0];
  p_output1[78]=t3599 + t3795 + t3888 + t4171 + t6120 + t6124 + t6649 + var1[0];
  p_output1[79]=t6652;
  p_output1[80]=t6673;
  p_output1[81]=t6136 + t6178 + t6206 + t6265 + t6328 + t6331 + t6672 + var1[1];
  p_output1[82]=t6136 + t6178 + t6206 + t6265 + t6335 + t6337 + t6672 + var1[1];
  p_output1[83]=t6136 + t6178 + t6206 + t6265 + t6339 + t6345 + t6672 + var1[1];
  p_output1[84]=t6136 + t6178 + t6206 + t6265 + t6352 + t6358 + t6672 + var1[1];
  p_output1[85]=t6136 + t6178 + t6206 + t6265 + t6366 + t6371 + t6672 + var1[1];
  p_output1[86]=t6136 + t6178 + t6206 + t6265 + t6373 + t6374 + t6672 + var1[1];
  p_output1[87]=t6136 + t6178 + t6206 + t6265 + t6376 + t6377 + t6672 + var1[1];
  p_output1[88]=t6136 + t6178 + t6206 + t6265 + t6381 + t6382 + t6672 + var1[1];
  p_output1[89]=t6136 + t6178 + t6206 + t6265 + t6387 + t6388 + t6672 + var1[1];
  p_output1[90]=t6136 + t6178 + t6206 + t6265 + t6391 + t6392 + t6672 + var1[1];
  p_output1[91]=t6136 + t6178 + t6206 + t6265 + t6396 + t6402 + t6672 + var1[1];
  p_output1[92]=t6136 + t6178 + t6206 + t6265 + t6411 + t6412 + t6672 + var1[1];
  p_output1[93]=t6136 + t6178 + t6206 + t6265 + t6415 + t6423 + t6672 + var1[1];
  p_output1[94]=t6136 + t6178 + t6206 + t6265 + t6436 + t6438 + t6672 + var1[1];
  p_output1[95]=t6136 + t6178 + t6206 + t6265 + t6440 + t6441 + t6672 + var1[1];
  p_output1[96]=t6136 + t6178 + t6206 + t6265 + t6443 + t6444 + t6672 + var1[1];
  p_output1[97]=t6136 + t6178 + t6206 + t6265 + t6450 + t6461 + t6672 + var1[1];
  p_output1[98]=t6136 + t6178 + t6206 + t6265 + t6469 + t6470 + t6672 + var1[1];
  p_output1[99]=t6673;
  p_output1[100]=t6700;
  p_output1[101]=t6472 + t6483 + t6490 + t6515 + t6547 + t6551 + t6698 + var1[2];
  p_output1[102]=t6472 + t6483 + t6490 + t6515 + t6553 + t6554 + t6698 + var1[2];
  p_output1[103]=t6472 + t6483 + t6490 + t6515 + t6556 + t6562 + t6698 + var1[2];
  p_output1[104]=t6472 + t6483 + t6490 + t6515 + t6571 + t6572 + t6698 + var1[2];
  p_output1[105]=t6472 + t6483 + t6490 + t6515 + t6574 + t6576 + t6698 + var1[2];
  p_output1[106]=t6472 + t6483 + t6490 + t6515 + t6580 + t6585 + t6698 + var1[2];
  p_output1[107]=t6472 + t6483 + t6490 + t6515 + t6598 + t6599 + t6698 + var1[2];
  p_output1[108]=t6472 + t6483 + t6490 + t6515 + t6601 + t6602 + t6698 + var1[2];
  p_output1[109]=t6472 + t6483 + t6490 + t6515 + t6604 + t6605 + t6698 + var1[2];
  p_output1[110]=t6472 + t6483 + t6490 + t6515 + t6608 + t6611 + t6698 + var1[2];
  p_output1[111]=t6472 + t6483 + t6490 + t6515 + t6615 + t6616 + t6698 + var1[2];
  p_output1[112]=t6472 + t6483 + t6490 + t6515 + t6618 + t6620 + t6698 + var1[2];
  p_output1[113]=t6472 + t6483 + t6490 + t6515 + t6624 + t6626 + t6698 + var1[2];
  p_output1[114]=t6472 + t6483 + t6490 + t6515 + t6629 + t6631 + t6698 + var1[2];
  p_output1[115]=t6472 + t6483 + t6490 + t6515 + t6633 + t6634 + t6698 + var1[2];
  p_output1[116]=t6472 + t6483 + t6490 + t6515 + t6636 + t6637 + t6698 + var1[2];
  p_output1[117]=t6472 + t6483 + t6490 + t6515 + t6639 + t6640 + t6698 + var1[2];
  p_output1[118]=t6472 + t6483 + t6490 + t6515 + t6646 + t6647 + t6698 + var1[2];
  p_output1[119]=t6700;
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

#include "Link_upper3_to_7_bar.hh"

namespace SymFunction
{

void Link_upper3_to_7_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
