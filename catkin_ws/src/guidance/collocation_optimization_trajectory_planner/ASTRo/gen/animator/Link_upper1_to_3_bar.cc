/*
 * Automatically Generated from Mathematica.
 * Fri 13 May 2022 14:24:42 GMT+02:00
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
  double t305;
  double t380;
  double t1007;
  double t1137;
  double t1158;
  double t1159;
  double t376;
  double t2466;
  double t2393;
  double t2407;
  double t2522;
  double t2652;
  double t2681;
  double t2685;
  double t1144;
  double t1387;
  double t1397;
  double t2420;
  double t2454;
  double t2460;
  double t2489;
  double t2495;
  double t2500;
  double t2510;
  double t2524;
  double t2545;
  double t2687;
  double t2696;
  double t2863;
  double t2866;
  double t2889;
  double t2897;
  double t2900;
  double t2520;
  double t2871;
  double t2911;
  double t2917;
  double t3929;
  double t4028;
  double t3986;
  double t4170;
  double t4188;
  double t4272;
  double t4442;
  double t4943;
  double t5102;
  double t5103;
  double t5108;
  double t3932;
  double t4209;
  double t5053;
  double t5055;
  double t5090;
  double t5091;
  double t5116;
  double t5124;
  double t5130;
  double t5140;
  double t5145;
  double t5152;
  double t5165;
  double t5095;
  double t5144;
  double t5170;
  double t5175;
  double t5460;
  double t5461;
  double t5462;
  double t5466;
  double t5468;
  double t5470;
  double t5482;
  double t5483;
  double t5484;
  double t5457;
  double t5465;
  double t5472;
  double t5473;
  double t5476;
  double t5477;
  double t5485;
  double t5486;
  double t5487;
  double t5488;
  double t5490;
  double t5491;
  double t5492;
  double t5478;
  double t5489;
  double t5493;
  double t5497;
  double t2961;
  double t2997;
  double t3086;
  double t3300;
  double t3379;
  double t3418;
  double t3485;
  double t3549;
  double t3589;
  double t3632;
  double t3694;
  double t3732;
  double t3777;
  double t3805;
  double t3822;
  double t3841;
  double t3856;
  double t3866;
  double t5575;
  double t5576;
  double t5577;
  double t5189;
  double t5204;
  double t5220;
  double t5242;
  double t5297;
  double t5308;
  double t5328;
  double t5349;
  double t5363;
  double t5372;
  double t5381;
  double t5403;
  double t5412;
  double t5424;
  double t5431;
  double t5438;
  double t5444;
  double t5452;
  double t5634;
  double t5635;
  double t5636;
  double t5500;
  double t5504;
  double t5508;
  double t5512;
  double t5516;
  double t5520;
  double t5524;
  double t5528;
  double t5532;
  double t5536;
  double t5541;
  double t5546;
  double t5550;
  double t5557;
  double t5561;
  double t5565;
  double t5569;
  double t5573;
  double t5691;
  double t5692;
  double t5693;
  t305 = Cos(var1[4]);
  t380 = Cos(var1[9]);
  t1007 = -1.*t380;
  t1137 = 1. + t1007;
  t1158 = Sin(var1[9]);
  t1159 = 0.15121*t1158;
  t376 = Cos(var1[5]);
  t2466 = Sin(var1[5]);
  t2393 = Sin(var1[10]);
  t2407 = Sin(var1[4]);
  t2522 = Cos(var1[10]);
  t2652 = t380*t305*t376;
  t2681 = -1.*t305*t1158*t2466;
  t2685 = t2652 + t2681;
  t1144 = -0.15121*t1137;
  t1387 = t1144 + t1159;
  t1397 = t305*t376*t1387;
  t2420 = 0.28121*t2393*t2407;
  t2454 = 0.15121*t1137;
  t2460 = t2454 + t1159;
  t2489 = -1.*t305*t2460*t2466;
  t2495 = -1.*t305*t376*t1158;
  t2500 = -1.*t380*t305*t2466;
  t2510 = t2495 + t2500;
  t2524 = -1.*t2522;
  t2545 = 1. + t2524;
  t2687 = -0.28121*t2545*t2685;
  t2696 = t2393*t2407;
  t2863 = t2522*t2685;
  t2866 = t2696 + t2863;
  t2889 = t2522*t2407;
  t2897 = -1.*t2393*t2685;
  t2900 = t2889 + t2897;
  t2520 = 0.190587*t2510;
  t2871 = -0.282477*t2866;
  t2911 = -0.011639*t2900;
  t2917 = var1[0] + t1397 + t2420 + t2489 + t2520 + t2687 + t2871 + t2911;
  t3929 = Sin(var1[3]);
  t4028 = Cos(var1[3]);
  t3986 = t376*t3929*t2407;
  t4170 = t4028*t2466;
  t4188 = t3986 + t4170;
  t4272 = t4028*t376;
  t4442 = -1.*t3929*t2407*t2466;
  t4943 = t4272 + t4442;
  t5102 = t380*t4188;
  t5103 = t1158*t4943;
  t5108 = t5102 + t5103;
  t3932 = -0.28121*t305*t2393*t3929;
  t4209 = t1387*t4188;
  t5053 = t2460*t4943;
  t5055 = -1.*t1158*t4188;
  t5090 = t380*t4943;
  t5091 = t5055 + t5090;
  t5116 = -0.28121*t2545*t5108;
  t5124 = -1.*t305*t2393*t3929;
  t5130 = t2522*t5108;
  t5140 = t5124 + t5130;
  t5145 = -1.*t2522*t305*t3929;
  t5152 = -1.*t2393*t5108;
  t5165 = t5145 + t5152;
  t5095 = 0.190587*t5091;
  t5144 = -0.282477*t5140;
  t5170 = -0.011639*t5165;
  t5175 = var1[1] + t3932 + t4209 + t5053 + t5095 + t5116 + t5144 + t5170;
  t5460 = -1.*t4028*t376*t2407;
  t5461 = t3929*t2466;
  t5462 = t5460 + t5461;
  t5466 = t376*t3929;
  t5468 = t4028*t2407*t2466;
  t5470 = t5466 + t5468;
  t5482 = t380*t5462;
  t5483 = t1158*t5470;
  t5484 = t5482 + t5483;
  t5457 = 0.28121*t4028*t305*t2393;
  t5465 = t1387*t5462;
  t5472 = t2460*t5470;
  t5473 = -1.*t1158*t5462;
  t5476 = t380*t5470;
  t5477 = t5473 + t5476;
  t5485 = -0.28121*t2545*t5484;
  t5486 = t4028*t305*t2393;
  t5487 = t2522*t5484;
  t5488 = t5486 + t5487;
  t5490 = t2522*t4028*t305;
  t5491 = -1.*t2393*t5484;
  t5492 = t5490 + t5491;
  t5478 = 0.190587*t5477;
  t5489 = -0.282477*t5488;
  t5493 = -0.011639*t5492;
  t5497 = var1[2] + t5457 + t5465 + t5472 + t5478 + t5485 + t5489 + t5493;
  t2961 = -0.014081*t2900;
  t2997 = -0.014997*t2900;
  t3086 = -0.014287*t2900;
  t3300 = -0.01203*t2900;
  t3379 = -0.008468*t2900;
  t3418 = -0.003989*t2900;
  t3485 = 0.000922*t2900;
  t3549 = 0.005733*t2900;
  t3589 = 0.009923*t2900;
  t3632 = 0.013038*t2900;
  t3694 = 0.01474*t2900;
  t3732 = 0.014844*t2900;
  t3777 = 0.01334*t2900;
  t3805 = 0.010391*t2900;
  t3822 = 0.006315*t2900;
  t3841 = 0.001555*t2900;
  t3856 = -0.003374*t2900;
  t3866 = -0.007937*t2900;
  t5575 = 0.160587*t2510;
  t5576 = -0.504477*t2866;
  t5577 = var1[0] + t1397 + t2420 + t2489 + t5575 + t2687 + t5576 + t2911;
  t5189 = -0.014081*t5165;
  t5204 = -0.014997*t5165;
  t5220 = -0.014287*t5165;
  t5242 = -0.01203*t5165;
  t5297 = -0.008468*t5165;
  t5308 = -0.003989*t5165;
  t5328 = 0.000922*t5165;
  t5349 = 0.005733*t5165;
  t5363 = 0.009923*t5165;
  t5372 = 0.013038*t5165;
  t5381 = 0.01474*t5165;
  t5403 = 0.014844*t5165;
  t5412 = 0.01334*t5165;
  t5424 = 0.010391*t5165;
  t5431 = 0.006315*t5165;
  t5438 = 0.001555*t5165;
  t5444 = -0.003374*t5165;
  t5452 = -0.007937*t5165;
  t5634 = 0.160587*t5091;
  t5635 = -0.504477*t5140;
  t5636 = var1[1] + t3932 + t4209 + t5053 + t5634 + t5116 + t5635 + t5170;
  t5500 = -0.014081*t5492;
  t5504 = -0.014997*t5492;
  t5508 = -0.014287*t5492;
  t5512 = -0.01203*t5492;
  t5516 = -0.008468*t5492;
  t5520 = -0.003989*t5492;
  t5524 = 0.000922*t5492;
  t5528 = 0.005733*t5492;
  t5532 = 0.009923*t5492;
  t5536 = 0.013038*t5492;
  t5541 = 0.01474*t5492;
  t5546 = 0.014844*t5492;
  t5550 = 0.01334*t5492;
  t5557 = 0.010391*t5492;
  t5561 = 0.006315*t5492;
  t5565 = 0.001555*t5492;
  t5569 = -0.003374*t5492;
  t5573 = -0.007937*t5492;
  t5691 = 0.160587*t5477;
  t5692 = -0.504477*t5488;
  t5693 = var1[2] + t5457 + t5465 + t5472 + t5691 + t5485 + t5692 + t5493;
  p_output1[0]=t2917;
  p_output1[1]=t1397 + t2420 + t2489 + 0.186333*t2510 + t2687 - 0.281902*t2866 + t2961 + var1[0];
  p_output1[2]=t1397 + t2420 + t2489 + 0.181525*t2510 + t2687 - 0.281253*t2866 + t2997 + var1[0];
  p_output1[3]=t1397 + t2420 + t2489 + 0.176682*t2510 + t2687 - 0.280598*t2866 + t3086 + var1[0];
  p_output1[4]=t1397 + t2420 + t2489 + 0.17233*t2510 + t2687 - 0.28001*t2866 + t3300 + var1[0];
  p_output1[5]=t1397 + t2420 + t2489 + 0.168941*t2510 + t2687 - 0.279552*t2866 + t3379 + var1[0];
  p_output1[6]=t1397 + t2420 + t2489 + 0.16688*t2510 + t2687 - 0.279274*t2866 + t3418 + var1[0];
  p_output1[7]=t1397 + t2420 + t2489 + 0.166373*t2510 + t2687 - 0.279205*t2866 + t3485 + var1[0];
  p_output1[8]=t1397 + t2420 + t2489 + 0.167474*t2510 + t2687 - 0.279354*t2866 + t3549 + var1[0];
  p_output1[9]=t1397 + t2420 + t2489 + 0.170063*t2510 + t2687 - 0.279704*t2866 + t3589 + var1[0];
  p_output1[10]=t1397 + t2420 + t2489 + 0.17386*t2510 + t2687 - 0.280217*t2866 + t3632 + var1[0];
  p_output1[11]=t1397 + t2420 + t2489 + 0.178453*t2510 + t2687 - 0.280837*t2866 + t3694 + var1[0];
  p_output1[12]=t1397 + t2420 + t2489 + 0.183346*t2510 + t2687 - 0.281499*t2866 + t3732 + var1[0];
  p_output1[13]=t1397 + t2420 + t2489 + 0.188007*t2510 + t2687 - 0.282128*t2866 + t3777 + var1[0];
  p_output1[14]=t1397 + t2420 + t2489 + 0.191931*t2510 + t2687 - 0.282659*t2866 + t3805 + var1[0];
  p_output1[15]=t1397 + t2420 + t2489 + 0.194693*t2510 + t2687 - 0.283032*t2866 + t3822 + var1[0];
  p_output1[16]=t1397 + t2420 + t2489 + 0.195995*t2510 + t2687 - 0.283208*t2866 + t3841 + var1[0];
  p_output1[17]=t1397 + t2420 + t2489 + 0.195694*t2510 + t2687 - 0.283167*t2866 + t3856 + var1[0];
  p_output1[18]=t1397 + t2420 + t2489 + 0.193824*t2510 + t2687 - 0.282915*t2866 + t3866 + var1[0];
  p_output1[19]=t2917;
  p_output1[20]=t5175;
  p_output1[21]=t3932 + t4209 + t5053 + 0.186333*t5091 + t5116 - 0.281902*t5140 + t5189 + var1[1];
  p_output1[22]=t3932 + t4209 + t5053 + 0.181525*t5091 + t5116 - 0.281253*t5140 + t5204 + var1[1];
  p_output1[23]=t3932 + t4209 + t5053 + 0.176682*t5091 + t5116 - 0.280598*t5140 + t5220 + var1[1];
  p_output1[24]=t3932 + t4209 + t5053 + 0.17233*t5091 + t5116 - 0.28001*t5140 + t5242 + var1[1];
  p_output1[25]=t3932 + t4209 + t5053 + 0.168941*t5091 + t5116 - 0.279552*t5140 + t5297 + var1[1];
  p_output1[26]=t3932 + t4209 + t5053 + 0.16688*t5091 + t5116 - 0.279274*t5140 + t5308 + var1[1];
  p_output1[27]=t3932 + t4209 + t5053 + 0.166373*t5091 + t5116 - 0.279205*t5140 + t5328 + var1[1];
  p_output1[28]=t3932 + t4209 + t5053 + 0.167474*t5091 + t5116 - 0.279354*t5140 + t5349 + var1[1];
  p_output1[29]=t3932 + t4209 + t5053 + 0.170063*t5091 + t5116 - 0.279704*t5140 + t5363 + var1[1];
  p_output1[30]=t3932 + t4209 + t5053 + 0.17386*t5091 + t5116 - 0.280217*t5140 + t5372 + var1[1];
  p_output1[31]=t3932 + t4209 + t5053 + 0.178453*t5091 + t5116 - 0.280837*t5140 + t5381 + var1[1];
  p_output1[32]=t3932 + t4209 + t5053 + 0.183346*t5091 + t5116 - 0.281499*t5140 + t5403 + var1[1];
  p_output1[33]=t3932 + t4209 + t5053 + 0.188007*t5091 + t5116 - 0.282128*t5140 + t5412 + var1[1];
  p_output1[34]=t3932 + t4209 + t5053 + 0.191931*t5091 + t5116 - 0.282659*t5140 + t5424 + var1[1];
  p_output1[35]=t3932 + t4209 + t5053 + 0.194693*t5091 + t5116 - 0.283032*t5140 + t5431 + var1[1];
  p_output1[36]=t3932 + t4209 + t5053 + 0.195995*t5091 + t5116 - 0.283208*t5140 + t5438 + var1[1];
  p_output1[37]=t3932 + t4209 + t5053 + 0.195694*t5091 + t5116 - 0.283167*t5140 + t5444 + var1[1];
  p_output1[38]=t3932 + t4209 + t5053 + 0.193824*t5091 + t5116 - 0.282915*t5140 + t5452 + var1[1];
  p_output1[39]=t5175;
  p_output1[40]=t5497;
  p_output1[41]=t5457 + t5465 + t5472 + 0.186333*t5477 + t5485 - 0.281902*t5488 + t5500 + var1[2];
  p_output1[42]=t5457 + t5465 + t5472 + 0.181525*t5477 + t5485 - 0.281253*t5488 + t5504 + var1[2];
  p_output1[43]=t5457 + t5465 + t5472 + 0.176682*t5477 + t5485 - 0.280598*t5488 + t5508 + var1[2];
  p_output1[44]=t5457 + t5465 + t5472 + 0.17233*t5477 + t5485 - 0.28001*t5488 + t5512 + var1[2];
  p_output1[45]=t5457 + t5465 + t5472 + 0.168941*t5477 + t5485 - 0.279552*t5488 + t5516 + var1[2];
  p_output1[46]=t5457 + t5465 + t5472 + 0.16688*t5477 + t5485 - 0.279274*t5488 + t5520 + var1[2];
  p_output1[47]=t5457 + t5465 + t5472 + 0.166373*t5477 + t5485 - 0.279205*t5488 + t5524 + var1[2];
  p_output1[48]=t5457 + t5465 + t5472 + 0.167474*t5477 + t5485 - 0.279354*t5488 + t5528 + var1[2];
  p_output1[49]=t5457 + t5465 + t5472 + 0.170063*t5477 + t5485 - 0.279704*t5488 + t5532 + var1[2];
  p_output1[50]=t5457 + t5465 + t5472 + 0.17386*t5477 + t5485 - 0.280217*t5488 + t5536 + var1[2];
  p_output1[51]=t5457 + t5465 + t5472 + 0.178453*t5477 + t5485 - 0.280837*t5488 + t5541 + var1[2];
  p_output1[52]=t5457 + t5465 + t5472 + 0.183346*t5477 + t5485 - 0.281499*t5488 + t5546 + var1[2];
  p_output1[53]=t5457 + t5465 + t5472 + 0.188007*t5477 + t5485 - 0.282128*t5488 + t5550 + var1[2];
  p_output1[54]=t5457 + t5465 + t5472 + 0.191931*t5477 + t5485 - 0.282659*t5488 + t5557 + var1[2];
  p_output1[55]=t5457 + t5465 + t5472 + 0.194693*t5477 + t5485 - 0.283032*t5488 + t5561 + var1[2];
  p_output1[56]=t5457 + t5465 + t5472 + 0.195995*t5477 + t5485 - 0.283208*t5488 + t5565 + var1[2];
  p_output1[57]=t5457 + t5465 + t5472 + 0.195694*t5477 + t5485 - 0.283167*t5488 + t5569 + var1[2];
  p_output1[58]=t5457 + t5465 + t5472 + 0.193824*t5477 + t5485 - 0.282915*t5488 + t5573 + var1[2];
  p_output1[59]=t5497;
  p_output1[60]=t5577;
  p_output1[61]=t1397 + t2420 + t2489 + 0.156333*t2510 + t2687 - 0.503902*t2866 + t2961 + var1[0];
  p_output1[62]=t1397 + t2420 + t2489 + 0.151525*t2510 + t2687 - 0.503253*t2866 + t2997 + var1[0];
  p_output1[63]=t1397 + t2420 + t2489 + 0.146682*t2510 + t2687 - 0.502598*t2866 + t3086 + var1[0];
  p_output1[64]=t1397 + t2420 + t2489 + 0.14233*t2510 + t2687 - 0.50201*t2866 + t3300 + var1[0];
  p_output1[65]=t1397 + t2420 + t2489 + 0.138941*t2510 + t2687 - 0.501552*t2866 + t3379 + var1[0];
  p_output1[66]=t1397 + t2420 + t2489 + 0.13688*t2510 + t2687 - 0.501274*t2866 + t3418 + var1[0];
  p_output1[67]=t1397 + t2420 + t2489 + 0.136373*t2510 + t2687 - 0.501205*t2866 + t3485 + var1[0];
  p_output1[68]=t1397 + t2420 + t2489 + 0.137474*t2510 + t2687 - 0.501354*t2866 + t3549 + var1[0];
  p_output1[69]=t1397 + t2420 + t2489 + 0.140063*t2510 + t2687 - 0.501704*t2866 + t3589 + var1[0];
  p_output1[70]=t1397 + t2420 + t2489 + 0.14386*t2510 + t2687 - 0.502217*t2866 + t3632 + var1[0];
  p_output1[71]=t1397 + t2420 + t2489 + 0.148453*t2510 + t2687 - 0.502837*t2866 + t3694 + var1[0];
  p_output1[72]=t1397 + t2420 + t2489 + 0.153346*t2510 + t2687 - 0.503499*t2866 + t3732 + var1[0];
  p_output1[73]=t1397 + t2420 + t2489 + 0.158007*t2510 + t2687 - 0.504128*t2866 + t3777 + var1[0];
  p_output1[74]=t1397 + t2420 + t2489 + 0.161931*t2510 + t2687 - 0.504659*t2866 + t3805 + var1[0];
  p_output1[75]=t1397 + t2420 + t2489 + 0.164693*t2510 + t2687 - 0.505032*t2866 + t3822 + var1[0];
  p_output1[76]=t1397 + t2420 + t2489 + 0.165995*t2510 + t2687 - 0.505208*t2866 + t3841 + var1[0];
  p_output1[77]=t1397 + t2420 + t2489 + 0.165694*t2510 + t2687 - 0.505167*t2866 + t3856 + var1[0];
  p_output1[78]=t1397 + t2420 + t2489 + 0.163824*t2510 + t2687 - 0.504915*t2866 + t3866 + var1[0];
  p_output1[79]=t5577;
  p_output1[80]=t5636;
  p_output1[81]=t3932 + t4209 + t5053 + 0.156333*t5091 + t5116 - 0.503902*t5140 + t5189 + var1[1];
  p_output1[82]=t3932 + t4209 + t5053 + 0.151525*t5091 + t5116 - 0.503253*t5140 + t5204 + var1[1];
  p_output1[83]=t3932 + t4209 + t5053 + 0.146682*t5091 + t5116 - 0.502598*t5140 + t5220 + var1[1];
  p_output1[84]=t3932 + t4209 + t5053 + 0.14233*t5091 + t5116 - 0.50201*t5140 + t5242 + var1[1];
  p_output1[85]=t3932 + t4209 + t5053 + 0.138941*t5091 + t5116 - 0.501552*t5140 + t5297 + var1[1];
  p_output1[86]=t3932 + t4209 + t5053 + 0.13688*t5091 + t5116 - 0.501274*t5140 + t5308 + var1[1];
  p_output1[87]=t3932 + t4209 + t5053 + 0.136373*t5091 + t5116 - 0.501205*t5140 + t5328 + var1[1];
  p_output1[88]=t3932 + t4209 + t5053 + 0.137474*t5091 + t5116 - 0.501354*t5140 + t5349 + var1[1];
  p_output1[89]=t3932 + t4209 + t5053 + 0.140063*t5091 + t5116 - 0.501704*t5140 + t5363 + var1[1];
  p_output1[90]=t3932 + t4209 + t5053 + 0.14386*t5091 + t5116 - 0.502217*t5140 + t5372 + var1[1];
  p_output1[91]=t3932 + t4209 + t5053 + 0.148453*t5091 + t5116 - 0.502837*t5140 + t5381 + var1[1];
  p_output1[92]=t3932 + t4209 + t5053 + 0.153346*t5091 + t5116 - 0.503499*t5140 + t5403 + var1[1];
  p_output1[93]=t3932 + t4209 + t5053 + 0.158007*t5091 + t5116 - 0.504128*t5140 + t5412 + var1[1];
  p_output1[94]=t3932 + t4209 + t5053 + 0.161931*t5091 + t5116 - 0.504659*t5140 + t5424 + var1[1];
  p_output1[95]=t3932 + t4209 + t5053 + 0.164693*t5091 + t5116 - 0.505032*t5140 + t5431 + var1[1];
  p_output1[96]=t3932 + t4209 + t5053 + 0.165995*t5091 + t5116 - 0.505208*t5140 + t5438 + var1[1];
  p_output1[97]=t3932 + t4209 + t5053 + 0.165694*t5091 + t5116 - 0.505167*t5140 + t5444 + var1[1];
  p_output1[98]=t3932 + t4209 + t5053 + 0.163824*t5091 + t5116 - 0.504915*t5140 + t5452 + var1[1];
  p_output1[99]=t5636;
  p_output1[100]=t5693;
  p_output1[101]=t5457 + t5465 + t5472 + 0.156333*t5477 + t5485 - 0.503902*t5488 + t5500 + var1[2];
  p_output1[102]=t5457 + t5465 + t5472 + 0.151525*t5477 + t5485 - 0.503253*t5488 + t5504 + var1[2];
  p_output1[103]=t5457 + t5465 + t5472 + 0.146682*t5477 + t5485 - 0.502598*t5488 + t5508 + var1[2];
  p_output1[104]=t5457 + t5465 + t5472 + 0.14233*t5477 + t5485 - 0.50201*t5488 + t5512 + var1[2];
  p_output1[105]=t5457 + t5465 + t5472 + 0.138941*t5477 + t5485 - 0.501552*t5488 + t5516 + var1[2];
  p_output1[106]=t5457 + t5465 + t5472 + 0.13688*t5477 + t5485 - 0.501274*t5488 + t5520 + var1[2];
  p_output1[107]=t5457 + t5465 + t5472 + 0.136373*t5477 + t5485 - 0.501205*t5488 + t5524 + var1[2];
  p_output1[108]=t5457 + t5465 + t5472 + 0.137474*t5477 + t5485 - 0.501354*t5488 + t5528 + var1[2];
  p_output1[109]=t5457 + t5465 + t5472 + 0.140063*t5477 + t5485 - 0.501704*t5488 + t5532 + var1[2];
  p_output1[110]=t5457 + t5465 + t5472 + 0.14386*t5477 + t5485 - 0.502217*t5488 + t5536 + var1[2];
  p_output1[111]=t5457 + t5465 + t5472 + 0.148453*t5477 + t5485 - 0.502837*t5488 + t5541 + var1[2];
  p_output1[112]=t5457 + t5465 + t5472 + 0.153346*t5477 + t5485 - 0.503499*t5488 + t5546 + var1[2];
  p_output1[113]=t5457 + t5465 + t5472 + 0.158007*t5477 + t5485 - 0.504128*t5488 + t5550 + var1[2];
  p_output1[114]=t5457 + t5465 + t5472 + 0.161931*t5477 + t5485 - 0.504659*t5488 + t5557 + var1[2];
  p_output1[115]=t5457 + t5465 + t5472 + 0.164693*t5477 + t5485 - 0.505032*t5488 + t5561 + var1[2];
  p_output1[116]=t5457 + t5465 + t5472 + 0.165995*t5477 + t5485 - 0.505208*t5488 + t5565 + var1[2];
  p_output1[117]=t5457 + t5465 + t5472 + 0.165694*t5477 + t5485 - 0.505167*t5488 + t5569 + var1[2];
  p_output1[118]=t5457 + t5465 + t5472 + 0.163824*t5477 + t5485 - 0.504915*t5488 + t5573 + var1[2];
  p_output1[119]=t5693;
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

#include "Link_upper1_to_3_bar.hh"

namespace SymFunction
{

void Link_upper1_to_3_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
