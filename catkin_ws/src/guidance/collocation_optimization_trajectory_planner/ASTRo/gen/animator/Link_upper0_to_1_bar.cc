/*
 * Automatically Generated from Mathematica.
 * Fri 13 May 2022 14:43:00 GMT+02:00
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
  double t470;
  double t674;
  double t943;
  double t999;
  double t1025;
  double t1029;
  double t646;
  double t1554;
  double t1976;
  double t1991;
  double t1992;
  double t2004;
  double t2028;
  double t2029;
  double t1242;
  double t1364;
  double t1392;
  double t1580;
  double t1743;
  double t1750;
  double t1752;
  double t1778;
  double t1876;
  double t1982;
  double t1986;
  double t2026;
  double t2031;
  double t2033;
  double t2045;
  double t2048;
  double t2051;
  double t2053;
  double t2061;
  double t1956;
  double t2049;
  double t2062;
  double t2065;
  double t3526;
  double t3517;
  double t3519;
  double t3535;
  double t3557;
  double t3560;
  double t3565;
  double t3568;
  double t3581;
  double t3601;
  double t3602;
  double t3559;
  double t3571;
  double t3572;
  double t3576;
  double t3578;
  double t3604;
  double t3609;
  double t3614;
  double t3616;
  double t3618;
  double t3628;
  double t3631;
  double t3637;
  double t3580;
  double t3627;
  double t3640;
  double t3641;
  double t4251;
  double t4254;
  double t4264;
  double t4268;
  double t4273;
  double t4279;
  double t4303;
  double t4308;
  double t4314;
  double t4265;
  double t4280;
  double t4288;
  double t4291;
  double t4296;
  double t4320;
  double t4330;
  double t4343;
  double t4356;
  double t4360;
  double t4366;
  double t4369;
  double t4373;
  double t4301;
  double t4361;
  double t4376;
  double t4382;
  double t2074;
  double t2081;
  double t2193;
  double t2331;
  double t2376;
  double t2424;
  double t2577;
  double t2686;
  double t2766;
  double t2869;
  double t2922;
  double t2969;
  double t3103;
  double t3231;
  double t3361;
  double t3450;
  double t3496;
  double t3507;
  double t4631;
  double t4632;
  double t4633;
  double t3656;
  double t3684;
  double t3720;
  double t3758;
  double t3792;
  double t3833;
  double t3960;
  double t3978;
  double t3997;
  double t4015;
  double t4043;
  double t4081;
  double t4093;
  double t4113;
  double t4137;
  double t4154;
  double t4188;
  double t4237;
  double t5403;
  double t5421;
  double t5434;
  double t4393;
  double t4410;
  double t4419;
  double t4433;
  double t4440;
  double t4458;
  double t4475;
  double t4487;
  double t4505;
  double t4516;
  double t4527;
  double t4549;
  double t4560;
  double t4574;
  double t4583;
  double t4599;
  double t4615;
  double t4626;
  double t5613;
  double t5614;
  double t5615;
  t470 = Cos(var1[4]);
  t674 = Cos(var1[6]);
  t943 = -1.*t674;
  t999 = 1. + t943;
  t1025 = 0.15121*t999;
  t1029 = Sin(var1[6]);
  t646 = Sin(var1[5]);
  t1554 = Cos(var1[5]);
  t1976 = Cos(var1[7]);
  t1991 = t470*t1554*t674;
  t1992 = -1.*t470*t646*t1029;
  t2004 = t1991 + t1992;
  t2028 = Sin(var1[4]);
  t2029 = Sin(var1[7]);
  t1242 = -0.15121*t1029;
  t1364 = t1025 + t1242;
  t1392 = -1.*t470*t646*t1364;
  t1580 = 0.15121*t1029;
  t1743 = t1025 + t1580;
  t1750 = t470*t1554*t1743;
  t1752 = -1.*t470*t674*t646;
  t1778 = -1.*t470*t1554*t1029;
  t1876 = t1752 + t1778;
  t1982 = -1.*t1976;
  t1986 = 1. + t1982;
  t2026 = 0.28121*t1986*t2004;
  t2031 = 0.28121*t2028*t2029;
  t2033 = t1976*t2004;
  t2045 = -1.*t2028*t2029;
  t2048 = t2033 + t2045;
  t2051 = t1976*t2028;
  t2053 = t2004*t2029;
  t2061 = t2051 + t2053;
  t1956 = 0.179491*t1876;
  t2049 = 0.280978*t2048;
  t2062 = -0.014899*t2061;
  t2065 = var1[0] + t1392 + t1750 + t1956 + t2026 + t2031 + t2049 + t2062;
  t3526 = Sin(var1[3]);
  t3517 = Cos(var1[3]);
  t3519 = t3517*t1554;
  t3535 = -1.*t3526*t2028*t646;
  t3557 = t3519 + t3535;
  t3560 = t1554*t3526*t2028;
  t3565 = t3517*t646;
  t3568 = t3560 + t3565;
  t3581 = t674*t3568;
  t3601 = t3557*t1029;
  t3602 = t3581 + t3601;
  t3559 = t3557*t1364;
  t3571 = t3568*t1743;
  t3572 = t674*t3557;
  t3576 = -1.*t3568*t1029;
  t3578 = t3572 + t3576;
  t3604 = 0.28121*t1986*t3602;
  t3609 = -0.28121*t470*t3526*t2029;
  t3614 = t1976*t3602;
  t3616 = t470*t3526*t2029;
  t3618 = t3614 + t3616;
  t3628 = -1.*t470*t1976*t3526;
  t3631 = t3602*t2029;
  t3637 = t3628 + t3631;
  t3580 = 0.179491*t3578;
  t3627 = 0.280978*t3618;
  t3640 = -0.014899*t3637;
  t3641 = var1[1] + t3559 + t3571 + t3580 + t3604 + t3609 + t3627 + t3640;
  t4251 = t1554*t3526;
  t4254 = t3517*t2028*t646;
  t4264 = t4251 + t4254;
  t4268 = -1.*t3517*t1554*t2028;
  t4273 = t3526*t646;
  t4279 = t4268 + t4273;
  t4303 = t674*t4279;
  t4308 = t4264*t1029;
  t4314 = t4303 + t4308;
  t4265 = t4264*t1364;
  t4280 = t4279*t1743;
  t4288 = t674*t4264;
  t4291 = -1.*t4279*t1029;
  t4296 = t4288 + t4291;
  t4320 = 0.28121*t1986*t4314;
  t4330 = 0.28121*t3517*t470*t2029;
  t4343 = t1976*t4314;
  t4356 = -1.*t3517*t470*t2029;
  t4360 = t4343 + t4356;
  t4366 = t3517*t470*t1976;
  t4369 = t4314*t2029;
  t4373 = t4366 + t4369;
  t4301 = 0.179491*t4296;
  t4361 = 0.280978*t4360;
  t4376 = -0.014899*t4373;
  t4382 = var1[2] + t4265 + t4280 + t4301 + t4320 + t4330 + t4361 + t4376;
  t2074 = -0.014655*t2061;
  t2081 = -0.012823*t2061;
  t2193 = -0.009601*t2061;
  t2331 = -0.005339*t2061;
  t2376 = -0.000498*t2061;
  t2424 = 0.004397*t2061;
  t2577 = 0.008815*t2061;
  t2686 = 0.012278*t2061;
  t2766 = 0.014411*t2061;
  t2869 = 0.014982*t2061;
  t2922 = 0.013929*t2061;
  t2969 = 0.011367*t2061;
  t3103 = 0.007573*t2061;
  t3231 = 0.002959*t2061;
  t3361 = -0.001976*t2061;
  t3450 = -0.006697*t2061;
  t3496 = -0.010692*t2061;
  t3507 = -0.013529*t2061;
  t4631 = 0.149491*t1876;
  t4632 = 0.502978*t2048;
  t4633 = var1[0] + t1392 + t1750 + t4631 + t2026 + t2031 + t4632 + t2062;
  t3656 = -0.014655*t3637;
  t3684 = -0.012823*t3637;
  t3720 = -0.009601*t3637;
  t3758 = -0.005339*t3637;
  t3792 = -0.000498*t3637;
  t3833 = 0.004397*t3637;
  t3960 = 0.008815*t3637;
  t3978 = 0.012278*t3637;
  t3997 = 0.014411*t3637;
  t4015 = 0.014982*t3637;
  t4043 = 0.013929*t3637;
  t4081 = 0.011367*t3637;
  t4093 = 0.007573*t3637;
  t4113 = 0.002959*t3637;
  t4137 = -0.001976*t3637;
  t4154 = -0.006697*t3637;
  t4188 = -0.010692*t3637;
  t4237 = -0.013529*t3637;
  t5403 = 0.149491*t3578;
  t5421 = 0.502978*t3618;
  t5434 = var1[1] + t3559 + t3571 + t5403 + t3604 + t3609 + t5421 + t3640;
  t4393 = -0.014655*t4373;
  t4410 = -0.012823*t4373;
  t4419 = -0.009601*t4373;
  t4433 = -0.005339*t4373;
  t4440 = -0.000498*t4373;
  t4458 = 0.004397*t4373;
  t4475 = 0.008815*t4373;
  t4487 = 0.012278*t4373;
  t4505 = 0.014411*t4373;
  t4516 = 0.014982*t4373;
  t4527 = 0.013929*t4373;
  t4549 = 0.011367*t4373;
  t4560 = 0.007573*t4373;
  t4574 = 0.002959*t4373;
  t4583 = -0.001976*t4373;
  t4599 = -0.006697*t4373;
  t4615 = -0.010692*t4373;
  t4626 = -0.013529*t4373;
  t5613 = 0.149491*t4296;
  t5614 = 0.502978*t4360;
  t5615 = var1[2] + t4265 + t4280 + t5613 + t4320 + t4330 + t5614 + t4376;
  p_output1[0]=t2065;
  p_output1[1]=t1392 + t1750 + 0.184379*t1876 + t2026 + t2031 + 0.281638*t2048 + t2074 + var1[0];
  p_output1[2]=t1392 + t1750 + 0.188923*t1876 + t2026 + t2031 + 0.282252*t2048 + t2081 + var1[0];
  p_output1[3]=t1392 + t1750 + 0.192631*t1876 + t2026 + t2031 + 0.282753*t2048 + t2193 + var1[0];
  p_output1[4]=t1392 + t1750 + 0.195101*t1876 + t2026 + t2031 + 0.283087*t2048 + t2331 + var1[0];
  p_output1[5]=t1392 + t1750 + 0.196067*t1876 + t2026 + t2031 + 0.283218*t2048 + t2376 + var1[0];
  p_output1[6]=t1392 + t1750 + 0.195422*t1876 + t2026 + t2031 + 0.283131*t2048 + t2424 + var1[0];
  p_output1[7]=t1392 + t1750 + 0.193237*t1876 + t2026 + t2031 + 0.282835*t2048 + t2577 + var1[0];
  p_output1[8]=t1392 + t1750 + 0.189749*t1876 + t2026 + t2031 + 0.282364*t2048 + t2686 + var1[0];
  p_output1[9]=t1392 + t1750 + 0.185336*t1876 + t2026 + t2031 + 0.281768*t2048 + t2766 + var1[0];
  p_output1[10]=t1392 + t1750 + 0.180475*t1876 + t2026 + t2031 + 0.281111*t2048 + t2869 + var1[0];
  p_output1[11]=t1392 + t1750 + 0.175694*t1876 + t2026 + t2031 + 0.280465*t2048 + t2922 + var1[0];
  p_output1[12]=t1392 + t1750 + 0.171511*t1876 + t2026 + t2031 + 0.279899*t2048 + t2969 + var1[0];
  p_output1[13]=t1392 + t1750 + 0.168379*t1876 + t2026 + t2031 + 0.279476*t2048 + t3103 + var1[0];
  p_output1[14]=t1392 + t1750 + 0.166637*t1876 + t2026 + t2031 + 0.279241*t2048 + t3231 + var1[0];
  p_output1[15]=t1392 + t1750 + 0.166475*t1876 + t2026 + t2031 + 0.279219*t2048 + t3361 + var1[0];
  p_output1[16]=t1392 + t1750 + 0.167909*t1876 + t2026 + t2031 + 0.279413*t2048 + t3450 + var1[0];
  p_output1[17]=t1392 + t1750 + 0.170785*t1876 + t2026 + t2031 + 0.279801*t2048 + t3496 + var1[0];
  p_output1[18]=t1392 + t1750 + 0.17479*t1876 + t2026 + t2031 + 0.280342*t2048 + t3507 + var1[0];
  p_output1[19]=t2065;
  p_output1[20]=t3641;
  p_output1[21]=t3559 + t3571 + 0.184379*t3578 + t3604 + t3609 + 0.281638*t3618 + t3656 + var1[1];
  p_output1[22]=t3559 + t3571 + 0.188923*t3578 + t3604 + t3609 + 0.282252*t3618 + t3684 + var1[1];
  p_output1[23]=t3559 + t3571 + 0.192631*t3578 + t3604 + t3609 + 0.282753*t3618 + t3720 + var1[1];
  p_output1[24]=t3559 + t3571 + 0.195101*t3578 + t3604 + t3609 + 0.283087*t3618 + t3758 + var1[1];
  p_output1[25]=t3559 + t3571 + 0.196067*t3578 + t3604 + t3609 + 0.283218*t3618 + t3792 + var1[1];
  p_output1[26]=t3559 + t3571 + 0.195422*t3578 + t3604 + t3609 + 0.283131*t3618 + t3833 + var1[1];
  p_output1[27]=t3559 + t3571 + 0.193237*t3578 + t3604 + t3609 + 0.282835*t3618 + t3960 + var1[1];
  p_output1[28]=t3559 + t3571 + 0.189749*t3578 + t3604 + t3609 + 0.282364*t3618 + t3978 + var1[1];
  p_output1[29]=t3559 + t3571 + 0.185336*t3578 + t3604 + t3609 + 0.281768*t3618 + t3997 + var1[1];
  p_output1[30]=t3559 + t3571 + 0.180475*t3578 + t3604 + t3609 + 0.281111*t3618 + t4015 + var1[1];
  p_output1[31]=t3559 + t3571 + 0.175694*t3578 + t3604 + t3609 + 0.280465*t3618 + t4043 + var1[1];
  p_output1[32]=t3559 + t3571 + 0.171511*t3578 + t3604 + t3609 + 0.279899*t3618 + t4081 + var1[1];
  p_output1[33]=t3559 + t3571 + 0.168379*t3578 + t3604 + t3609 + 0.279476*t3618 + t4093 + var1[1];
  p_output1[34]=t3559 + t3571 + 0.166637*t3578 + t3604 + t3609 + 0.279241*t3618 + t4113 + var1[1];
  p_output1[35]=t3559 + t3571 + 0.166475*t3578 + t3604 + t3609 + 0.279219*t3618 + t4137 + var1[1];
  p_output1[36]=t3559 + t3571 + 0.167909*t3578 + t3604 + t3609 + 0.279413*t3618 + t4154 + var1[1];
  p_output1[37]=t3559 + t3571 + 0.170785*t3578 + t3604 + t3609 + 0.279801*t3618 + t4188 + var1[1];
  p_output1[38]=t3559 + t3571 + 0.17479*t3578 + t3604 + t3609 + 0.280342*t3618 + t4237 + var1[1];
  p_output1[39]=t3641;
  p_output1[40]=t4382;
  p_output1[41]=t4265 + t4280 + 0.184379*t4296 + t4320 + t4330 + 0.281638*t4360 + t4393 + var1[2];
  p_output1[42]=t4265 + t4280 + 0.188923*t4296 + t4320 + t4330 + 0.282252*t4360 + t4410 + var1[2];
  p_output1[43]=t4265 + t4280 + 0.192631*t4296 + t4320 + t4330 + 0.282753*t4360 + t4419 + var1[2];
  p_output1[44]=t4265 + t4280 + 0.195101*t4296 + t4320 + t4330 + 0.283087*t4360 + t4433 + var1[2];
  p_output1[45]=t4265 + t4280 + 0.196067*t4296 + t4320 + t4330 + 0.283218*t4360 + t4440 + var1[2];
  p_output1[46]=t4265 + t4280 + 0.195422*t4296 + t4320 + t4330 + 0.283131*t4360 + t4458 + var1[2];
  p_output1[47]=t4265 + t4280 + 0.193237*t4296 + t4320 + t4330 + 0.282835*t4360 + t4475 + var1[2];
  p_output1[48]=t4265 + t4280 + 0.189749*t4296 + t4320 + t4330 + 0.282364*t4360 + t4487 + var1[2];
  p_output1[49]=t4265 + t4280 + 0.185336*t4296 + t4320 + t4330 + 0.281768*t4360 + t4505 + var1[2];
  p_output1[50]=t4265 + t4280 + 0.180475*t4296 + t4320 + t4330 + 0.281111*t4360 + t4516 + var1[2];
  p_output1[51]=t4265 + t4280 + 0.175694*t4296 + t4320 + t4330 + 0.280465*t4360 + t4527 + var1[2];
  p_output1[52]=t4265 + t4280 + 0.171511*t4296 + t4320 + t4330 + 0.279899*t4360 + t4549 + var1[2];
  p_output1[53]=t4265 + t4280 + 0.168379*t4296 + t4320 + t4330 + 0.279476*t4360 + t4560 + var1[2];
  p_output1[54]=t4265 + t4280 + 0.166637*t4296 + t4320 + t4330 + 0.279241*t4360 + t4574 + var1[2];
  p_output1[55]=t4265 + t4280 + 0.166475*t4296 + t4320 + t4330 + 0.279219*t4360 + t4583 + var1[2];
  p_output1[56]=t4265 + t4280 + 0.167909*t4296 + t4320 + t4330 + 0.279413*t4360 + t4599 + var1[2];
  p_output1[57]=t4265 + t4280 + 0.170785*t4296 + t4320 + t4330 + 0.279801*t4360 + t4615 + var1[2];
  p_output1[58]=t4265 + t4280 + 0.17479*t4296 + t4320 + t4330 + 0.280342*t4360 + t4626 + var1[2];
  p_output1[59]=t4382;
  p_output1[60]=t4633;
  p_output1[61]=t1392 + t1750 + 0.154379*t1876 + t2026 + t2031 + 0.503638*t2048 + t2074 + var1[0];
  p_output1[62]=t1392 + t1750 + 0.158923*t1876 + t2026 + t2031 + 0.504252*t2048 + t2081 + var1[0];
  p_output1[63]=t1392 + t1750 + 0.162631*t1876 + t2026 + t2031 + 0.504753*t2048 + t2193 + var1[0];
  p_output1[64]=t1392 + t1750 + 0.165101*t1876 + t2026 + t2031 + 0.505087*t2048 + t2331 + var1[0];
  p_output1[65]=t1392 + t1750 + 0.166067*t1876 + t2026 + t2031 + 0.505218*t2048 + t2376 + var1[0];
  p_output1[66]=t1392 + t1750 + 0.165422*t1876 + t2026 + t2031 + 0.505131*t2048 + t2424 + var1[0];
  p_output1[67]=t1392 + t1750 + 0.163237*t1876 + t2026 + t2031 + 0.504835*t2048 + t2577 + var1[0];
  p_output1[68]=t1392 + t1750 + 0.159749*t1876 + t2026 + t2031 + 0.504364*t2048 + t2686 + var1[0];
  p_output1[69]=t1392 + t1750 + 0.155336*t1876 + t2026 + t2031 + 0.503768*t2048 + t2766 + var1[0];
  p_output1[70]=t1392 + t1750 + 0.150475*t1876 + t2026 + t2031 + 0.503111*t2048 + t2869 + var1[0];
  p_output1[71]=t1392 + t1750 + 0.145694*t1876 + t2026 + t2031 + 0.502465*t2048 + t2922 + var1[0];
  p_output1[72]=t1392 + t1750 + 0.141511*t1876 + t2026 + t2031 + 0.501899*t2048 + t2969 + var1[0];
  p_output1[73]=t1392 + t1750 + 0.138379*t1876 + t2026 + t2031 + 0.501476*t2048 + t3103 + var1[0];
  p_output1[74]=t1392 + t1750 + 0.136637*t1876 + t2026 + t2031 + 0.501241*t2048 + t3231 + var1[0];
  p_output1[75]=t1392 + t1750 + 0.136475*t1876 + t2026 + t2031 + 0.501219*t2048 + t3361 + var1[0];
  p_output1[76]=t1392 + t1750 + 0.137909*t1876 + t2026 + t2031 + 0.501413*t2048 + t3450 + var1[0];
  p_output1[77]=t1392 + t1750 + 0.140785*t1876 + t2026 + t2031 + 0.501801*t2048 + t3496 + var1[0];
  p_output1[78]=t1392 + t1750 + 0.14479*t1876 + t2026 + t2031 + 0.502342*t2048 + t3507 + var1[0];
  p_output1[79]=t4633;
  p_output1[80]=t5434;
  p_output1[81]=t3559 + t3571 + 0.154379*t3578 + t3604 + t3609 + 0.503638*t3618 + t3656 + var1[1];
  p_output1[82]=t3559 + t3571 + 0.158923*t3578 + t3604 + t3609 + 0.504252*t3618 + t3684 + var1[1];
  p_output1[83]=t3559 + t3571 + 0.162631*t3578 + t3604 + t3609 + 0.504753*t3618 + t3720 + var1[1];
  p_output1[84]=t3559 + t3571 + 0.165101*t3578 + t3604 + t3609 + 0.505087*t3618 + t3758 + var1[1];
  p_output1[85]=t3559 + t3571 + 0.166067*t3578 + t3604 + t3609 + 0.505218*t3618 + t3792 + var1[1];
  p_output1[86]=t3559 + t3571 + 0.165422*t3578 + t3604 + t3609 + 0.505131*t3618 + t3833 + var1[1];
  p_output1[87]=t3559 + t3571 + 0.163237*t3578 + t3604 + t3609 + 0.504835*t3618 + t3960 + var1[1];
  p_output1[88]=t3559 + t3571 + 0.159749*t3578 + t3604 + t3609 + 0.504364*t3618 + t3978 + var1[1];
  p_output1[89]=t3559 + t3571 + 0.155336*t3578 + t3604 + t3609 + 0.503768*t3618 + t3997 + var1[1];
  p_output1[90]=t3559 + t3571 + 0.150475*t3578 + t3604 + t3609 + 0.503111*t3618 + t4015 + var1[1];
  p_output1[91]=t3559 + t3571 + 0.145694*t3578 + t3604 + t3609 + 0.502465*t3618 + t4043 + var1[1];
  p_output1[92]=t3559 + t3571 + 0.141511*t3578 + t3604 + t3609 + 0.501899*t3618 + t4081 + var1[1];
  p_output1[93]=t3559 + t3571 + 0.138379*t3578 + t3604 + t3609 + 0.501476*t3618 + t4093 + var1[1];
  p_output1[94]=t3559 + t3571 + 0.136637*t3578 + t3604 + t3609 + 0.501241*t3618 + t4113 + var1[1];
  p_output1[95]=t3559 + t3571 + 0.136475*t3578 + t3604 + t3609 + 0.501219*t3618 + t4137 + var1[1];
  p_output1[96]=t3559 + t3571 + 0.137909*t3578 + t3604 + t3609 + 0.501413*t3618 + t4154 + var1[1];
  p_output1[97]=t3559 + t3571 + 0.140785*t3578 + t3604 + t3609 + 0.501801*t3618 + t4188 + var1[1];
  p_output1[98]=t3559 + t3571 + 0.14479*t3578 + t3604 + t3609 + 0.502342*t3618 + t4237 + var1[1];
  p_output1[99]=t5434;
  p_output1[100]=t5615;
  p_output1[101]=t4265 + t4280 + 0.154379*t4296 + t4320 + t4330 + 0.503638*t4360 + t4393 + var1[2];
  p_output1[102]=t4265 + t4280 + 0.158923*t4296 + t4320 + t4330 + 0.504252*t4360 + t4410 + var1[2];
  p_output1[103]=t4265 + t4280 + 0.162631*t4296 + t4320 + t4330 + 0.504753*t4360 + t4419 + var1[2];
  p_output1[104]=t4265 + t4280 + 0.165101*t4296 + t4320 + t4330 + 0.505087*t4360 + t4433 + var1[2];
  p_output1[105]=t4265 + t4280 + 0.166067*t4296 + t4320 + t4330 + 0.505218*t4360 + t4440 + var1[2];
  p_output1[106]=t4265 + t4280 + 0.165422*t4296 + t4320 + t4330 + 0.505131*t4360 + t4458 + var1[2];
  p_output1[107]=t4265 + t4280 + 0.163237*t4296 + t4320 + t4330 + 0.504835*t4360 + t4475 + var1[2];
  p_output1[108]=t4265 + t4280 + 0.159749*t4296 + t4320 + t4330 + 0.504364*t4360 + t4487 + var1[2];
  p_output1[109]=t4265 + t4280 + 0.155336*t4296 + t4320 + t4330 + 0.503768*t4360 + t4505 + var1[2];
  p_output1[110]=t4265 + t4280 + 0.150475*t4296 + t4320 + t4330 + 0.503111*t4360 + t4516 + var1[2];
  p_output1[111]=t4265 + t4280 + 0.145694*t4296 + t4320 + t4330 + 0.502465*t4360 + t4527 + var1[2];
  p_output1[112]=t4265 + t4280 + 0.141511*t4296 + t4320 + t4330 + 0.501899*t4360 + t4549 + var1[2];
  p_output1[113]=t4265 + t4280 + 0.138379*t4296 + t4320 + t4330 + 0.501476*t4360 + t4560 + var1[2];
  p_output1[114]=t4265 + t4280 + 0.136637*t4296 + t4320 + t4330 + 0.501241*t4360 + t4574 + var1[2];
  p_output1[115]=t4265 + t4280 + 0.136475*t4296 + t4320 + t4330 + 0.501219*t4360 + t4583 + var1[2];
  p_output1[116]=t4265 + t4280 + 0.137909*t4296 + t4320 + t4330 + 0.501413*t4360 + t4599 + var1[2];
  p_output1[117]=t4265 + t4280 + 0.140785*t4296 + t4320 + t4330 + 0.501801*t4360 + t4615 + var1[2];
  p_output1[118]=t4265 + t4280 + 0.14479*t4296 + t4320 + t4330 + 0.502342*t4360 + t4626 + var1[2];
  p_output1[119]=t5615;
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

#include "Link_upper0_to_1_bar.hh"

namespace SymFunction
{

void Link_upper0_to_1_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
