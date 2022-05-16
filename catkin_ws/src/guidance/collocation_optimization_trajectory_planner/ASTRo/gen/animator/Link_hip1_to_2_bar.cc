/*
 * Automatically Generated from Mathematica.
 * Fri 13 May 2022 14:43:05 GMT+02:00
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
  double t147;
  double t247;
  double t268;
  double t386;
  double t446;
  double t831;
  double t183;
  double t2297;
  double t407;
  double t835;
  double t847;
  double t855;
  double t1073;
  double t2237;
  double t2389;
  double t2417;
  double t2423;
  double t2430;
  double t2527;
  double t2565;
  double t2572;
  double t867;
  double t2492;
  double t2592;
  double t2600;
  double t4251;
  double t4273;
  double t4264;
  double t4288;
  double t4303;
  double t4340;
  double t4343;
  double t4351;
  double t4335;
  double t4365;
  double t4369;
  double t4376;
  double t4378;
  double t4384;
  double t4397;
  double t4399;
  double t4254;
  double t4382;
  double t4401;
  double t4407;
  double t4980;
  double t5003;
  double t5035;
  double t5065;
  double t5086;
  double t5092;
  double t5048;
  double t5145;
  double t5148;
  double t5181;
  double t5182;
  double t5234;
  double t5240;
  double t5252;
  double t4948;
  double t5216;
  double t5254;
  double t5272;
  double t2797;
  double t3026;
  double t3083;
  double t3333;
  double t3358;
  double t3502;
  double t3614;
  double t3647;
  double t3674;
  double t3731;
  double t3783;
  double t3831;
  double t3965;
  double t3999;
  double t4033;
  double t4080;
  double t4121;
  double t4181;
  double t5621;
  double t5622;
  double t5623;
  double t4412;
  double t4435;
  double t4449;
  double t4471;
  double t4488;
  double t4511;
  double t4540;
  double t4556;
  double t4572;
  double t4591;
  double t4643;
  double t4654;
  double t4694;
  double t4718;
  double t4760;
  double t4784;
  double t4838;
  double t4894;
  double t5696;
  double t5697;
  double t5698;
  double t5281;
  double t5366;
  double t5390;
  double t5437;
  double t5456;
  double t5498;
  double t5505;
  double t5515;
  double t5529;
  double t5546;
  double t5557;
  double t5568;
  double t5582;
  double t5592;
  double t5597;
  double t5602;
  double t5608;
  double t5617;
  double t5757;
  double t5758;
  double t5759;
  t147 = Cos(var1[4]);
  t247 = Cos(var1[9]);
  t268 = -1.*t247;
  t386 = 1. + t268;
  t446 = Sin(var1[9]);
  t831 = 0.15121*t446;
  t183 = Cos(var1[5]);
  t2297 = Sin(var1[5]);
  t407 = -0.15121*t386;
  t835 = t407 + t831;
  t847 = t147*t183*t835;
  t855 = Sin(var1[4]);
  t1073 = 0.15121*t386;
  t2237 = t1073 + t831;
  t2389 = -1.*t147*t2237*t2297;
  t2417 = -1.*t147*t183*t446;
  t2423 = -1.*t247*t147*t2297;
  t2430 = t2417 + t2423;
  t2527 = t247*t147*t183;
  t2565 = -1.*t147*t446*t2297;
  t2572 = t2527 + t2565;
  t867 = -0.00542*t855;
  t2492 = 0.164839*t2430;
  t2592 = -0.148065*t2572;
  t2600 = var1[0] + t847 + t867 + t2389 + t2492 + t2592;
  t4251 = Sin(var1[3]);
  t4273 = Cos(var1[3]);
  t4264 = t183*t4251*t855;
  t4288 = t4273*t2297;
  t4303 = t4264 + t4288;
  t4340 = t4273*t183;
  t4343 = -1.*t4251*t855*t2297;
  t4351 = t4340 + t4343;
  t4335 = t835*t4303;
  t4365 = t2237*t4351;
  t4369 = -1.*t446*t4303;
  t4376 = t247*t4351;
  t4378 = t4369 + t4376;
  t4384 = t247*t4303;
  t4397 = t446*t4351;
  t4399 = t4384 + t4397;
  t4254 = 0.00542*t147*t4251;
  t4382 = 0.164839*t4378;
  t4401 = -0.148065*t4399;
  t4407 = var1[1] + t4254 + t4335 + t4365 + t4382 + t4401;
  t4980 = -1.*t4273*t183*t855;
  t5003 = t4251*t2297;
  t5035 = t4980 + t5003;
  t5065 = t183*t4251;
  t5086 = t4273*t855*t2297;
  t5092 = t5065 + t5086;
  t5048 = t835*t5035;
  t5145 = t2237*t5092;
  t5148 = -1.*t446*t5035;
  t5181 = t247*t5092;
  t5182 = t5148 + t5181;
  t5234 = t247*t5035;
  t5240 = t446*t5092;
  t5252 = t5234 + t5240;
  t4948 = -0.00542*t4273*t147;
  t5216 = 0.164839*t5182;
  t5254 = -0.148065*t5252;
  t5272 = var1[2] + t4948 + t5048 + t5145 + t5216 + t5254;
  t2797 = -0.009667*t855;
  t3026 = -0.012868*t855;
  t3083 = -0.014673*t855;
  t3333 = -0.014889*t855;
  t3358 = -0.013491*t855;
  t3502 = -0.010632*t855;
  t3614 = -0.00662*t855;
  t3647 = -0.001891*t855;
  t3674 = 0.003044*t855;
  t3731 = 0.007648*t855;
  t3783 = 0.011423*t855;
  t3831 = 0.013961*t855;
  t3965 = 0.014986*t855;
  t3999 = 0.014386*t855;
  t4033 = 0.012228*t855;
  t4080 = 0.008745*t855;
  t4121 = 0.004314*t855;
  t4181 = -0.000584*t855;
  t5621 = 0.194839*t2430;
  t5622 = -0.278065*t2572;
  t5623 = var1[0] + t847 + t867 + t2389 + t5621 + t5622;
  t4412 = 0.009667*t147*t4251;
  t4435 = 0.012868*t147*t4251;
  t4449 = 0.014673*t147*t4251;
  t4471 = 0.014889*t147*t4251;
  t4488 = 0.013491*t147*t4251;
  t4511 = 0.010632*t147*t4251;
  t4540 = 0.00662*t147*t4251;
  t4556 = 0.001891*t147*t4251;
  t4572 = -0.003044*t147*t4251;
  t4591 = -0.007648*t147*t4251;
  t4643 = -0.011423*t147*t4251;
  t4654 = -0.013961*t147*t4251;
  t4694 = -0.014986*t147*t4251;
  t4718 = -0.014386*t147*t4251;
  t4760 = -0.012228*t147*t4251;
  t4784 = -0.008745*t147*t4251;
  t4838 = -0.004314*t147*t4251;
  t4894 = 0.000584*t147*t4251;
  t5696 = 0.194839*t4378;
  t5697 = -0.278065*t4399;
  t5698 = var1[1] + t4254 + t4335 + t4365 + t5696 + t5697;
  t5281 = -0.009667*t4273*t147;
  t5366 = -0.012868*t4273*t147;
  t5390 = -0.014673*t4273*t147;
  t5437 = -0.014889*t4273*t147;
  t5456 = -0.013491*t4273*t147;
  t5498 = -0.010632*t4273*t147;
  t5505 = -0.00662*t4273*t147;
  t5515 = -0.001891*t4273*t147;
  t5529 = 0.003044*t4273*t147;
  t5546 = 0.007648*t4273*t147;
  t5557 = 0.011423*t4273*t147;
  t5568 = 0.013961*t4273*t147;
  t5582 = 0.014986*t4273*t147;
  t5592 = 0.014386*t4273*t147;
  t5597 = 0.012228*t4273*t147;
  t5602 = 0.008745*t4273*t147;
  t5608 = 0.004314*t4273*t147;
  t5617 = -0.000584*t4273*t147;
  t5757 = 0.194839*t5182;
  t5758 = -0.278065*t5252;
  t5759 = var1[2] + t4948 + t5048 + t5145 + t5757 + t5758;
  p_output1[0]=t2600;
  p_output1[1]=t2389 + 0.162385*t2430 - 0.148631*t2572 + t2797 + t847 + var1[0];
  p_output1[2]=t2389 + 0.158721*t2430 - 0.149477*t2572 + t3026 + t847 + var1[0];
  p_output1[3]=t2389 + 0.154243*t2430 - 0.15051*t2572 + t3083 + t847 + var1[0];
  p_output1[4]=t2389 + 0.149436*t2430 - 0.151619*t2572 + t3333 + t847 + var1[0];
  p_output1[5]=t2389 + 0.144822*t2430 - 0.152684*t2572 + t3358 + t847 + var1[0];
  p_output1[6]=t2389 + 0.140899*t2430 - 0.153589*t2572 + t3502 + t847 + var1[0];
  p_output1[7]=t2389 + 0.138094*t2430 - 0.154237*t2572 + t3614 + t847 + var1[0];
  p_output1[8]=t2389 + 0.136711*t2430 - 0.154556*t2572 + t3647 + t847 + var1[0];
  p_output1[9]=t2389 + 0.136898*t2430 - 0.154513*t2572 + t3674 + t847 + var1[0];
  p_output1[10]=t2389 + 0.138637*t2430 - 0.154112*t2572 + t3731 + t847 + var1[0];
  p_output1[11]=t2389 + 0.141737*t2430 - 0.153396*t2572 + t3783 + t847 + var1[0];
  p_output1[12]=t2389 + 0.145865*t2430 - 0.152443*t2572 + t3831 + t847 + var1[0];
  p_output1[13]=t2389 + 0.150571*t2430 - 0.151357*t2572 + t3965 + t847 + var1[0];
  p_output1[14]=t2389 + 0.155347*t2430 - 0.150255*t2572 + t3999 + t847 + var1[0];
  p_output1[15]=t2389 + 0.159675*t2430 - 0.149257*t2572 + t4033 + t847 + var1[0];
  p_output1[16]=t2389 + 0.163085*t2430 - 0.14847*t2572 + t4080 + t847 + var1[0];
  p_output1[17]=t2389 + 0.165208*t2430 - 0.14798*t2572 + t4121 + t847 + var1[0];
  p_output1[18]=t2389 + 0.165815*t2430 - 0.14784*t2572 + t4181 + t847 + var1[0];
  p_output1[19]=t2600;
  p_output1[20]=t4407;
  p_output1[21]=t4335 + t4365 + 0.162385*t4378 - 0.148631*t4399 + t4412 + var1[1];
  p_output1[22]=t4335 + t4365 + 0.158721*t4378 - 0.149477*t4399 + t4435 + var1[1];
  p_output1[23]=t4335 + t4365 + 0.154243*t4378 - 0.15051*t4399 + t4449 + var1[1];
  p_output1[24]=t4335 + t4365 + 0.149436*t4378 - 0.151619*t4399 + t4471 + var1[1];
  p_output1[25]=t4335 + t4365 + 0.144822*t4378 - 0.152684*t4399 + t4488 + var1[1];
  p_output1[26]=t4335 + t4365 + 0.140899*t4378 - 0.153589*t4399 + t4511 + var1[1];
  p_output1[27]=t4335 + t4365 + 0.138094*t4378 - 0.154237*t4399 + t4540 + var1[1];
  p_output1[28]=t4335 + t4365 + 0.136711*t4378 - 0.154556*t4399 + t4556 + var1[1];
  p_output1[29]=t4335 + t4365 + 0.136898*t4378 - 0.154513*t4399 + t4572 + var1[1];
  p_output1[30]=t4335 + t4365 + 0.138637*t4378 - 0.154112*t4399 + t4591 + var1[1];
  p_output1[31]=t4335 + t4365 + 0.141737*t4378 - 0.153396*t4399 + t4643 + var1[1];
  p_output1[32]=t4335 + t4365 + 0.145865*t4378 - 0.152443*t4399 + t4654 + var1[1];
  p_output1[33]=t4335 + t4365 + 0.150571*t4378 - 0.151357*t4399 + t4694 + var1[1];
  p_output1[34]=t4335 + t4365 + 0.155347*t4378 - 0.150255*t4399 + t4718 + var1[1];
  p_output1[35]=t4335 + t4365 + 0.159675*t4378 - 0.149257*t4399 + t4760 + var1[1];
  p_output1[36]=t4335 + t4365 + 0.163085*t4378 - 0.14847*t4399 + t4784 + var1[1];
  p_output1[37]=t4335 + t4365 + 0.165208*t4378 - 0.14798*t4399 + t4838 + var1[1];
  p_output1[38]=t4335 + t4365 + 0.165815*t4378 - 0.14784*t4399 + t4894 + var1[1];
  p_output1[39]=t4407;
  p_output1[40]=t5272;
  p_output1[41]=t5048 + t5145 + 0.162385*t5182 - 0.148631*t5252 + t5281 + var1[2];
  p_output1[42]=t5048 + t5145 + 0.158721*t5182 - 0.149477*t5252 + t5366 + var1[2];
  p_output1[43]=t5048 + t5145 + 0.154243*t5182 - 0.15051*t5252 + t5390 + var1[2];
  p_output1[44]=t5048 + t5145 + 0.149436*t5182 - 0.151619*t5252 + t5437 + var1[2];
  p_output1[45]=t5048 + t5145 + 0.144822*t5182 - 0.152684*t5252 + t5456 + var1[2];
  p_output1[46]=t5048 + t5145 + 0.140899*t5182 - 0.153589*t5252 + t5498 + var1[2];
  p_output1[47]=t5048 + t5145 + 0.138094*t5182 - 0.154237*t5252 + t5505 + var1[2];
  p_output1[48]=t5048 + t5145 + 0.136711*t5182 - 0.154556*t5252 + t5515 + var1[2];
  p_output1[49]=t5048 + t5145 + 0.136898*t5182 - 0.154513*t5252 + t5529 + var1[2];
  p_output1[50]=t5048 + t5145 + 0.138637*t5182 - 0.154112*t5252 + t5546 + var1[2];
  p_output1[51]=t5048 + t5145 + 0.141737*t5182 - 0.153396*t5252 + t5557 + var1[2];
  p_output1[52]=t5048 + t5145 + 0.145865*t5182 - 0.152443*t5252 + t5568 + var1[2];
  p_output1[53]=t5048 + t5145 + 0.150571*t5182 - 0.151357*t5252 + t5582 + var1[2];
  p_output1[54]=t5048 + t5145 + 0.155347*t5182 - 0.150255*t5252 + t5592 + var1[2];
  p_output1[55]=t5048 + t5145 + 0.159675*t5182 - 0.149257*t5252 + t5597 + var1[2];
  p_output1[56]=t5048 + t5145 + 0.163085*t5182 - 0.14847*t5252 + t5602 + var1[2];
  p_output1[57]=t5048 + t5145 + 0.165208*t5182 - 0.14798*t5252 + t5608 + var1[2];
  p_output1[58]=t5048 + t5145 + 0.165815*t5182 - 0.14784*t5252 + t5617 + var1[2];
  p_output1[59]=t5272;
  p_output1[60]=t5623;
  p_output1[61]=t2389 + 0.192385*t2430 - 0.278631*t2572 + t2797 + t847 + var1[0];
  p_output1[62]=t2389 + 0.188721*t2430 - 0.279477*t2572 + t3026 + t847 + var1[0];
  p_output1[63]=t2389 + 0.184243*t2430 - 0.28051*t2572 + t3083 + t847 + var1[0];
  p_output1[64]=t2389 + 0.179436*t2430 - 0.281619*t2572 + t3333 + t847 + var1[0];
  p_output1[65]=t2389 + 0.174822*t2430 - 0.282684*t2572 + t3358 + t847 + var1[0];
  p_output1[66]=t2389 + 0.170899*t2430 - 0.283589*t2572 + t3502 + t847 + var1[0];
  p_output1[67]=t2389 + 0.168094*t2430 - 0.284237*t2572 + t3614 + t847 + var1[0];
  p_output1[68]=t2389 + 0.166711*t2430 - 0.284556*t2572 + t3647 + t847 + var1[0];
  p_output1[69]=t2389 + 0.166898*t2430 - 0.284513*t2572 + t3674 + t847 + var1[0];
  p_output1[70]=t2389 + 0.168637*t2430 - 0.284112*t2572 + t3731 + t847 + var1[0];
  p_output1[71]=t2389 + 0.171737*t2430 - 0.283396*t2572 + t3783 + t847 + var1[0];
  p_output1[72]=t2389 + 0.175865*t2430 - 0.282443*t2572 + t3831 + t847 + var1[0];
  p_output1[73]=t2389 + 0.180571*t2430 - 0.281357*t2572 + t3965 + t847 + var1[0];
  p_output1[74]=t2389 + 0.185347*t2430 - 0.280255*t2572 + t3999 + t847 + var1[0];
  p_output1[75]=t2389 + 0.189675*t2430 - 0.279257*t2572 + t4033 + t847 + var1[0];
  p_output1[76]=t2389 + 0.193085*t2430 - 0.27847*t2572 + t4080 + t847 + var1[0];
  p_output1[77]=t2389 + 0.195208*t2430 - 0.27798*t2572 + t4121 + t847 + var1[0];
  p_output1[78]=t2389 + 0.195815*t2430 - 0.27784*t2572 + t4181 + t847 + var1[0];
  p_output1[79]=t5623;
  p_output1[80]=t5698;
  p_output1[81]=t4335 + t4365 + 0.192385*t4378 - 0.278631*t4399 + t4412 + var1[1];
  p_output1[82]=t4335 + t4365 + 0.188721*t4378 - 0.279477*t4399 + t4435 + var1[1];
  p_output1[83]=t4335 + t4365 + 0.184243*t4378 - 0.28051*t4399 + t4449 + var1[1];
  p_output1[84]=t4335 + t4365 + 0.179436*t4378 - 0.281619*t4399 + t4471 + var1[1];
  p_output1[85]=t4335 + t4365 + 0.174822*t4378 - 0.282684*t4399 + t4488 + var1[1];
  p_output1[86]=t4335 + t4365 + 0.170899*t4378 - 0.283589*t4399 + t4511 + var1[1];
  p_output1[87]=t4335 + t4365 + 0.168094*t4378 - 0.284237*t4399 + t4540 + var1[1];
  p_output1[88]=t4335 + t4365 + 0.166711*t4378 - 0.284556*t4399 + t4556 + var1[1];
  p_output1[89]=t4335 + t4365 + 0.166898*t4378 - 0.284513*t4399 + t4572 + var1[1];
  p_output1[90]=t4335 + t4365 + 0.168637*t4378 - 0.284112*t4399 + t4591 + var1[1];
  p_output1[91]=t4335 + t4365 + 0.171737*t4378 - 0.283396*t4399 + t4643 + var1[1];
  p_output1[92]=t4335 + t4365 + 0.175865*t4378 - 0.282443*t4399 + t4654 + var1[1];
  p_output1[93]=t4335 + t4365 + 0.180571*t4378 - 0.281357*t4399 + t4694 + var1[1];
  p_output1[94]=t4335 + t4365 + 0.185347*t4378 - 0.280255*t4399 + t4718 + var1[1];
  p_output1[95]=t4335 + t4365 + 0.189675*t4378 - 0.279257*t4399 + t4760 + var1[1];
  p_output1[96]=t4335 + t4365 + 0.193085*t4378 - 0.27847*t4399 + t4784 + var1[1];
  p_output1[97]=t4335 + t4365 + 0.195208*t4378 - 0.27798*t4399 + t4838 + var1[1];
  p_output1[98]=t4335 + t4365 + 0.195815*t4378 - 0.27784*t4399 + t4894 + var1[1];
  p_output1[99]=t5698;
  p_output1[100]=t5759;
  p_output1[101]=t5048 + t5145 + 0.192385*t5182 - 0.278631*t5252 + t5281 + var1[2];
  p_output1[102]=t5048 + t5145 + 0.188721*t5182 - 0.279477*t5252 + t5366 + var1[2];
  p_output1[103]=t5048 + t5145 + 0.184243*t5182 - 0.28051*t5252 + t5390 + var1[2];
  p_output1[104]=t5048 + t5145 + 0.179436*t5182 - 0.281619*t5252 + t5437 + var1[2];
  p_output1[105]=t5048 + t5145 + 0.174822*t5182 - 0.282684*t5252 + t5456 + var1[2];
  p_output1[106]=t5048 + t5145 + 0.170899*t5182 - 0.283589*t5252 + t5498 + var1[2];
  p_output1[107]=t5048 + t5145 + 0.168094*t5182 - 0.284237*t5252 + t5505 + var1[2];
  p_output1[108]=t5048 + t5145 + 0.166711*t5182 - 0.284556*t5252 + t5515 + var1[2];
  p_output1[109]=t5048 + t5145 + 0.166898*t5182 - 0.284513*t5252 + t5529 + var1[2];
  p_output1[110]=t5048 + t5145 + 0.168637*t5182 - 0.284112*t5252 + t5546 + var1[2];
  p_output1[111]=t5048 + t5145 + 0.171737*t5182 - 0.283396*t5252 + t5557 + var1[2];
  p_output1[112]=t5048 + t5145 + 0.175865*t5182 - 0.282443*t5252 + t5568 + var1[2];
  p_output1[113]=t5048 + t5145 + 0.180571*t5182 - 0.281357*t5252 + t5582 + var1[2];
  p_output1[114]=t5048 + t5145 + 0.185347*t5182 - 0.280255*t5252 + t5592 + var1[2];
  p_output1[115]=t5048 + t5145 + 0.189675*t5182 - 0.279257*t5252 + t5597 + var1[2];
  p_output1[116]=t5048 + t5145 + 0.193085*t5182 - 0.27847*t5252 + t5602 + var1[2];
  p_output1[117]=t5048 + t5145 + 0.195208*t5182 - 0.27798*t5252 + t5608 + var1[2];
  p_output1[118]=t5048 + t5145 + 0.195815*t5182 - 0.27784*t5252 + t5617 + var1[2];
  p_output1[119]=t5759;
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

#include "Link_hip1_to_2_bar.hh"

namespace SymFunction
{

void Link_hip1_to_2_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
