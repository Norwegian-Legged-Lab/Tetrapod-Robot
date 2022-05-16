/*
 * Automatically Generated from Mathematica.
 * Fri 13 May 2022 14:24:53 GMT+02:00
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
  double t583;
  double t823;
  double t846;
  double t848;
  double t850;
  double t876;
  double t817;
  double t1052;
  double t890;
  double t897;
  double t905;
  double t977;
  double t1009;
  double t1023;
  double t1063;
  double t1095;
  double t1109;
  double t1114;
  double t1156;
  double t1368;
  double t1436;
  double t1001;
  double t1134;
  double t1456;
  double t1469;
  double t2477;
  double t2514;
  double t2488;
  double t2516;
  double t2521;
  double t2537;
  double t2547;
  double t2550;
  double t2523;
  double t2561;
  double t2566;
  double t2567;
  double t2575;
  double t2579;
  double t2584;
  double t2585;
  double t2486;
  double t2576;
  double t2600;
  double t2601;
  double t3164;
  double t3195;
  double t3205;
  double t3260;
  double t3278;
  double t3280;
  double t3213;
  double t3287;
  double t3334;
  double t3336;
  double t3345;
  double t3389;
  double t3414;
  double t3422;
  double t3137;
  double t3380;
  double t3424;
  double t3450;
  double t1687;
  double t1953;
  double t1993;
  double t2024;
  double t2054;
  double t2060;
  double t2072;
  double t2095;
  double t2101;
  double t2109;
  double t2116;
  double t2164;
  double t2226;
  double t2284;
  double t2314;
  double t2368;
  double t2409;
  double t2449;
  double t3915;
  double t3923;
  double t3924;
  double t2612;
  double t2631;
  double t2638;
  double t2644;
  double t2664;
  double t2717;
  double t2730;
  double t2738;
  double t2751;
  double t2769;
  double t2784;
  double t2793;
  double t2815;
  double t2856;
  double t2915;
  double t2931;
  double t3038;
  double t3087;
  double t4117;
  double t4120;
  double t4124;
  double t3461;
  double t3486;
  double t3516;
  double t3582;
  double t3619;
  double t3648;
  double t3697;
  double t3705;
  double t3721;
  double t3737;
  double t3747;
  double t3759;
  double t3773;
  double t3801;
  double t3829;
  double t3858;
  double t3877;
  double t3893;
  double t4368;
  double t4370;
  double t4373;
  t583 = Cos(var1[4]);
  t823 = Cos(var1[15]);
  t846 = -1.*t823;
  t848 = 1. + t846;
  t850 = -0.15121*t848;
  t876 = Sin(var1[15]);
  t817 = Cos(var1[5]);
  t1052 = Sin(var1[5]);
  t890 = -0.15121*t876;
  t897 = t850 + t890;
  t905 = t583*t817*t897;
  t977 = Sin(var1[4]);
  t1009 = 0.15121*t876;
  t1023 = t850 + t1009;
  t1063 = -1.*t583*t1023*t1052;
  t1095 = -1.*t583*t817*t876;
  t1109 = -1.*t823*t583*t1052;
  t1114 = t1095 + t1109;
  t1156 = t823*t583*t817;
  t1368 = -1.*t583*t876*t1052;
  t1436 = t1156 + t1368;
  t1001 = -0.014997*t977;
  t1134 = -0.150908*t1114;
  t1456 = -0.15128*t1436;
  t1469 = var1[0] + t905 + t1001 + t1063 + t1134 + t1456;
  t2477 = Sin(var1[3]);
  t2514 = Cos(var1[3]);
  t2488 = t817*t2477*t977;
  t2516 = t2514*t1052;
  t2521 = t2488 + t2516;
  t2537 = t2514*t817;
  t2547 = -1.*t2477*t977*t1052;
  t2550 = t2537 + t2547;
  t2523 = t897*t2521;
  t2561 = t1023*t2550;
  t2566 = -1.*t876*t2521;
  t2567 = t823*t2550;
  t2575 = t2566 + t2567;
  t2579 = t823*t2521;
  t2584 = t876*t2550;
  t2585 = t2579 + t2584;
  t2486 = 0.014997*t583*t2477;
  t2576 = -0.150908*t2575;
  t2600 = -0.15128*t2585;
  t2601 = var1[1] + t2486 + t2523 + t2561 + t2576 + t2600;
  t3164 = -1.*t2514*t817*t977;
  t3195 = t2477*t1052;
  t3205 = t3164 + t3195;
  t3260 = t817*t2477;
  t3278 = t2514*t977*t1052;
  t3280 = t3260 + t3278;
  t3213 = t897*t3205;
  t3287 = t1023*t3280;
  t3334 = -1.*t876*t3205;
  t3336 = t823*t3280;
  t3345 = t3334 + t3336;
  t3389 = t823*t3205;
  t3414 = t876*t3280;
  t3422 = t3389 + t3414;
  t3137 = -0.014997*t2514*t583;
  t3380 = -0.150908*t3345;
  t3424 = -0.15128*t3422;
  t3450 = var1[2] + t3137 + t3213 + t3287 + t3380 + t3424;
  t1687 = -0.014285*t977;
  t1953 = -0.012025*t977;
  t1993 = -0.008462*t977;
  t2024 = -0.003981*t977;
  t2054 = 0.00093*t977;
  t2060 = 0.005741*t977;
  t2072 = 0.009929*t977;
  t2095 = 0.013042*t977;
  t2101 = 0.014741*t977;
  t2109 = 0.014843*t977;
  t2116 = 0.013337*t977;
  t2164 = 0.010385*t977;
  t2226 = 0.006308*t977;
  t2284 = 0.001547*t977;
  t2314 = -0.003382*t977;
  t2368 = -0.007943*t977;
  t2409 = -0.011645*t977;
  t2449 = -0.014084*t977;
  t3915 = -0.180908*t1114;
  t3923 = -0.28128*t1436;
  t3924 = var1[0] + t905 + t1001 + t1063 + t3915 + t3923;
  t2612 = 0.014285*t583*t2477;
  t2631 = 0.012025*t583*t2477;
  t2638 = 0.008462*t583*t2477;
  t2644 = 0.003981*t583*t2477;
  t2664 = -0.00093*t583*t2477;
  t2717 = -0.005741*t583*t2477;
  t2730 = -0.009929*t583*t2477;
  t2738 = -0.013042*t583*t2477;
  t2751 = -0.014741*t583*t2477;
  t2769 = -0.014843*t583*t2477;
  t2784 = -0.013337*t583*t2477;
  t2793 = -0.010385*t583*t2477;
  t2815 = -0.006308*t583*t2477;
  t2856 = -0.001547*t583*t2477;
  t2915 = 0.003382*t583*t2477;
  t2931 = 0.007943*t583*t2477;
  t3038 = 0.011645*t583*t2477;
  t3087 = 0.014084*t583*t2477;
  t4117 = -0.180908*t2575;
  t4120 = -0.28128*t2585;
  t4124 = var1[1] + t2486 + t2523 + t2561 + t4117 + t4120;
  t3461 = -0.014285*t2514*t583;
  t3486 = -0.012025*t2514*t583;
  t3516 = -0.008462*t2514*t583;
  t3582 = -0.003981*t2514*t583;
  t3619 = 0.00093*t2514*t583;
  t3648 = 0.005741*t2514*t583;
  t3697 = 0.009929*t2514*t583;
  t3705 = 0.013042*t2514*t583;
  t3721 = 0.014741*t2514*t583;
  t3737 = 0.014843*t2514*t583;
  t3747 = 0.013337*t2514*t583;
  t3759 = 0.010385*t2514*t583;
  t3773 = 0.006308*t2514*t583;
  t3801 = 0.001547*t2514*t583;
  t3829 = -0.003382*t2514*t583;
  t3858 = -0.007943*t2514*t583;
  t3877 = -0.011645*t2514*t583;
  t3893 = -0.014084*t2514*t583;
  t4368 = -0.180908*t3345;
  t4370 = -0.28128*t3422;
  t4373 = var1[2] + t3137 + t3213 + t3287 + t4368 + t4370;
  p_output1[0]=t1469;
  p_output1[1]=t1063 - 0.15567*t1114 - 0.150181*t1436 + t1687 + t905 + var1[0];
  p_output1[2]=t1063 - 0.159947*t1114 - 0.149194*t1436 + t1953 + t905 + var1[0];
  p_output1[3]=t1063 - 0.163278*t1114 - 0.148425*t1436 + t1993 + t905 + var1[0];
  p_output1[4]=t1063 - 0.165302*t1114 - 0.147958*t1436 + t2024 + t905 + var1[0];
  p_output1[5]=t1063 - 0.165798*t1114 - 0.147844*t1436 + t2054 + t905 + var1[0];
  p_output1[6]=t1063 - 0.164713*t1114 - 0.148094*t1436 + t2060 + t905 + var1[0];
  p_output1[7]=t1063 - 0.162165*t1114 - 0.148682*t1436 + t2072 + t905 + var1[0];
  p_output1[8]=t1063 - 0.15843*t1114 - 0.149544*t1436 + t2095 + t905 + var1[0];
  p_output1[9]=t1063 - 0.153913*t1114 - 0.150586*t1436 + t2101 + t905 + var1[0];
  p_output1[10]=t1063 - 0.149102*t1114 - 0.151696*t1436 + t2109 + t905 + var1[0];
  p_output1[11]=t1063 - 0.14452*t1114 - 0.152754*t1436 + t2116 + t905 + var1[0];
  p_output1[12]=t1063 - 0.140663*t1114 - 0.153644*t1436 + t2164 + t905 + var1[0];
  p_output1[13]=t1063 - 0.137949*t1114 - 0.15427*t1436 + t2226 + t905 + var1[0];
  p_output1[14]=t1063 - 0.136672*t1114 - 0.154565*t1436 + t2284 + t905 + var1[0];
  p_output1[15]=t1063 - 0.13697*t1114 - 0.154496*t1436 + t2314 + t905 + var1[0];
  p_output1[16]=t1063 - 0.138812*t1114 - 0.154071*t1436 + t2368 + t905 + var1[0];
  p_output1[17]=t1063 - 0.141997*t1114 - 0.153336*t1436 + t2409 + t905 + var1[0];
  p_output1[18]=t1063 - 0.14618*t1114 - 0.152371*t1436 + t2449 + t905 + var1[0];
  p_output1[19]=t1469;
  p_output1[20]=t2601;
  p_output1[21]=t2523 + t2561 - 0.15567*t2575 - 0.150181*t2585 + t2612 + var1[1];
  p_output1[22]=t2523 + t2561 - 0.159947*t2575 - 0.149194*t2585 + t2631 + var1[1];
  p_output1[23]=t2523 + t2561 - 0.163278*t2575 - 0.148425*t2585 + t2638 + var1[1];
  p_output1[24]=t2523 + t2561 - 0.165302*t2575 - 0.147958*t2585 + t2644 + var1[1];
  p_output1[25]=t2523 + t2561 - 0.165798*t2575 - 0.147844*t2585 + t2664 + var1[1];
  p_output1[26]=t2523 + t2561 - 0.164713*t2575 - 0.148094*t2585 + t2717 + var1[1];
  p_output1[27]=t2523 + t2561 - 0.162165*t2575 - 0.148682*t2585 + t2730 + var1[1];
  p_output1[28]=t2523 + t2561 - 0.15843*t2575 - 0.149544*t2585 + t2738 + var1[1];
  p_output1[29]=t2523 + t2561 - 0.153913*t2575 - 0.150586*t2585 + t2751 + var1[1];
  p_output1[30]=t2523 + t2561 - 0.149102*t2575 - 0.151696*t2585 + t2769 + var1[1];
  p_output1[31]=t2523 + t2561 - 0.14452*t2575 - 0.152754*t2585 + t2784 + var1[1];
  p_output1[32]=t2523 + t2561 - 0.140663*t2575 - 0.153644*t2585 + t2793 + var1[1];
  p_output1[33]=t2523 + t2561 - 0.137949*t2575 - 0.15427*t2585 + t2815 + var1[1];
  p_output1[34]=t2523 + t2561 - 0.136672*t2575 - 0.154565*t2585 + t2856 + var1[1];
  p_output1[35]=t2523 + t2561 - 0.13697*t2575 - 0.154496*t2585 + t2915 + var1[1];
  p_output1[36]=t2523 + t2561 - 0.138812*t2575 - 0.154071*t2585 + t2931 + var1[1];
  p_output1[37]=t2523 + t2561 - 0.141997*t2575 - 0.153336*t2585 + t3038 + var1[1];
  p_output1[38]=t2523 + t2561 - 0.14618*t2575 - 0.152371*t2585 + t3087 + var1[1];
  p_output1[39]=t2601;
  p_output1[40]=t3450;
  p_output1[41]=t3213 + t3287 - 0.15567*t3345 - 0.150181*t3422 + t3461 + var1[2];
  p_output1[42]=t3213 + t3287 - 0.159947*t3345 - 0.149194*t3422 + t3486 + var1[2];
  p_output1[43]=t3213 + t3287 - 0.163278*t3345 - 0.148425*t3422 + t3516 + var1[2];
  p_output1[44]=t3213 + t3287 - 0.165302*t3345 - 0.147958*t3422 + t3582 + var1[2];
  p_output1[45]=t3213 + t3287 - 0.165798*t3345 - 0.147844*t3422 + t3619 + var1[2];
  p_output1[46]=t3213 + t3287 - 0.164713*t3345 - 0.148094*t3422 + t3648 + var1[2];
  p_output1[47]=t3213 + t3287 - 0.162165*t3345 - 0.148682*t3422 + t3697 + var1[2];
  p_output1[48]=t3213 + t3287 - 0.15843*t3345 - 0.149544*t3422 + t3705 + var1[2];
  p_output1[49]=t3213 + t3287 - 0.153913*t3345 - 0.150586*t3422 + t3721 + var1[2];
  p_output1[50]=t3213 + t3287 - 0.149102*t3345 - 0.151696*t3422 + t3737 + var1[2];
  p_output1[51]=t3213 + t3287 - 0.14452*t3345 - 0.152754*t3422 + t3747 + var1[2];
  p_output1[52]=t3213 + t3287 - 0.140663*t3345 - 0.153644*t3422 + t3759 + var1[2];
  p_output1[53]=t3213 + t3287 - 0.137949*t3345 - 0.15427*t3422 + t3773 + var1[2];
  p_output1[54]=t3213 + t3287 - 0.136672*t3345 - 0.154565*t3422 + t3801 + var1[2];
  p_output1[55]=t3213 + t3287 - 0.13697*t3345 - 0.154496*t3422 + t3829 + var1[2];
  p_output1[56]=t3213 + t3287 - 0.138812*t3345 - 0.154071*t3422 + t3858 + var1[2];
  p_output1[57]=t3213 + t3287 - 0.141997*t3345 - 0.153336*t3422 + t3877 + var1[2];
  p_output1[58]=t3213 + t3287 - 0.14618*t3345 - 0.152371*t3422 + t3893 + var1[2];
  p_output1[59]=t3450;
  p_output1[60]=t3924;
  p_output1[61]=t1063 - 0.18567*t1114 - 0.280181*t1436 + t1687 + t905 + var1[0];
  p_output1[62]=t1063 - 0.189947*t1114 - 0.279194*t1436 + t1953 + t905 + var1[0];
  p_output1[63]=t1063 - 0.193278*t1114 - 0.278425*t1436 + t1993 + t905 + var1[0];
  p_output1[64]=t1063 - 0.195302*t1114 - 0.277958*t1436 + t2024 + t905 + var1[0];
  p_output1[65]=t1063 - 0.195798*t1114 - 0.277844*t1436 + t2054 + t905 + var1[0];
  p_output1[66]=t1063 - 0.194713*t1114 - 0.278094*t1436 + t2060 + t905 + var1[0];
  p_output1[67]=t1063 - 0.192165*t1114 - 0.278682*t1436 + t2072 + t905 + var1[0];
  p_output1[68]=t1063 - 0.18843*t1114 - 0.279544*t1436 + t2095 + t905 + var1[0];
  p_output1[69]=t1063 - 0.183913*t1114 - 0.280586*t1436 + t2101 + t905 + var1[0];
  p_output1[70]=t1063 - 0.179102*t1114 - 0.281696*t1436 + t2109 + t905 + var1[0];
  p_output1[71]=t1063 - 0.17452*t1114 - 0.282754*t1436 + t2116 + t905 + var1[0];
  p_output1[72]=t1063 - 0.170663*t1114 - 0.283644*t1436 + t2164 + t905 + var1[0];
  p_output1[73]=t1063 - 0.167949*t1114 - 0.28427*t1436 + t2226 + t905 + var1[0];
  p_output1[74]=t1063 - 0.166672*t1114 - 0.284565*t1436 + t2284 + t905 + var1[0];
  p_output1[75]=t1063 - 0.16697*t1114 - 0.284496*t1436 + t2314 + t905 + var1[0];
  p_output1[76]=t1063 - 0.168812*t1114 - 0.284071*t1436 + t2368 + t905 + var1[0];
  p_output1[77]=t1063 - 0.171997*t1114 - 0.283336*t1436 + t2409 + t905 + var1[0];
  p_output1[78]=t1063 - 0.17618*t1114 - 0.282371*t1436 + t2449 + t905 + var1[0];
  p_output1[79]=t3924;
  p_output1[80]=t4124;
  p_output1[81]=t2523 + t2561 - 0.18567*t2575 - 0.280181*t2585 + t2612 + var1[1];
  p_output1[82]=t2523 + t2561 - 0.189947*t2575 - 0.279194*t2585 + t2631 + var1[1];
  p_output1[83]=t2523 + t2561 - 0.193278*t2575 - 0.278425*t2585 + t2638 + var1[1];
  p_output1[84]=t2523 + t2561 - 0.195302*t2575 - 0.277958*t2585 + t2644 + var1[1];
  p_output1[85]=t2523 + t2561 - 0.195798*t2575 - 0.277844*t2585 + t2664 + var1[1];
  p_output1[86]=t2523 + t2561 - 0.194713*t2575 - 0.278094*t2585 + t2717 + var1[1];
  p_output1[87]=t2523 + t2561 - 0.192165*t2575 - 0.278682*t2585 + t2730 + var1[1];
  p_output1[88]=t2523 + t2561 - 0.18843*t2575 - 0.279544*t2585 + t2738 + var1[1];
  p_output1[89]=t2523 + t2561 - 0.183913*t2575 - 0.280586*t2585 + t2751 + var1[1];
  p_output1[90]=t2523 + t2561 - 0.179102*t2575 - 0.281696*t2585 + t2769 + var1[1];
  p_output1[91]=t2523 + t2561 - 0.17452*t2575 - 0.282754*t2585 + t2784 + var1[1];
  p_output1[92]=t2523 + t2561 - 0.170663*t2575 - 0.283644*t2585 + t2793 + var1[1];
  p_output1[93]=t2523 + t2561 - 0.167949*t2575 - 0.28427*t2585 + t2815 + var1[1];
  p_output1[94]=t2523 + t2561 - 0.166672*t2575 - 0.284565*t2585 + t2856 + var1[1];
  p_output1[95]=t2523 + t2561 - 0.16697*t2575 - 0.284496*t2585 + t2915 + var1[1];
  p_output1[96]=t2523 + t2561 - 0.168812*t2575 - 0.284071*t2585 + t2931 + var1[1];
  p_output1[97]=t2523 + t2561 - 0.171997*t2575 - 0.283336*t2585 + t3038 + var1[1];
  p_output1[98]=t2523 + t2561 - 0.17618*t2575 - 0.282371*t2585 + t3087 + var1[1];
  p_output1[99]=t4124;
  p_output1[100]=t4373;
  p_output1[101]=t3213 + t3287 - 0.18567*t3345 - 0.280181*t3422 + t3461 + var1[2];
  p_output1[102]=t3213 + t3287 - 0.189947*t3345 - 0.279194*t3422 + t3486 + var1[2];
  p_output1[103]=t3213 + t3287 - 0.193278*t3345 - 0.278425*t3422 + t3516 + var1[2];
  p_output1[104]=t3213 + t3287 - 0.195302*t3345 - 0.277958*t3422 + t3582 + var1[2];
  p_output1[105]=t3213 + t3287 - 0.195798*t3345 - 0.277844*t3422 + t3619 + var1[2];
  p_output1[106]=t3213 + t3287 - 0.194713*t3345 - 0.278094*t3422 + t3648 + var1[2];
  p_output1[107]=t3213 + t3287 - 0.192165*t3345 - 0.278682*t3422 + t3697 + var1[2];
  p_output1[108]=t3213 + t3287 - 0.18843*t3345 - 0.279544*t3422 + t3705 + var1[2];
  p_output1[109]=t3213 + t3287 - 0.183913*t3345 - 0.280586*t3422 + t3721 + var1[2];
  p_output1[110]=t3213 + t3287 - 0.179102*t3345 - 0.281696*t3422 + t3737 + var1[2];
  p_output1[111]=t3213 + t3287 - 0.17452*t3345 - 0.282754*t3422 + t3747 + var1[2];
  p_output1[112]=t3213 + t3287 - 0.170663*t3345 - 0.283644*t3422 + t3759 + var1[2];
  p_output1[113]=t3213 + t3287 - 0.167949*t3345 - 0.28427*t3422 + t3773 + var1[2];
  p_output1[114]=t3213 + t3287 - 0.166672*t3345 - 0.284565*t3422 + t3801 + var1[2];
  p_output1[115]=t3213 + t3287 - 0.16697*t3345 - 0.284496*t3422 + t3829 + var1[2];
  p_output1[116]=t3213 + t3287 - 0.168812*t3345 - 0.284071*t3422 + t3858 + var1[2];
  p_output1[117]=t3213 + t3287 - 0.171997*t3345 - 0.283336*t3422 + t3877 + var1[2];
  p_output1[118]=t3213 + t3287 - 0.17618*t3345 - 0.282371*t3422 + t3893 + var1[2];
  p_output1[119]=t4373;
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

#include "Link_hip3_to_6_bar.hh"

namespace SymFunction
{

void Link_hip3_to_6_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
