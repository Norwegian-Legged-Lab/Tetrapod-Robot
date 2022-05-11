/*
 * Automatically Generated from Mathematica.
 * Fri 4 Feb 2022 15:52:07 GMT+01:00
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
  double t1321;
  double t2379;
  double t2388;
  double t2442;
  double t2480;
  double t2496;
  double t2357;
  double t2699;
  double t2566;
  double t2567;
  double t2568;
  double t2612;
  double t2697;
  double t2698;
  double t2700;
  double t2701;
  double t2706;
  double t2750;
  double t2768;
  double t2973;
  double t2984;
  double t2659;
  double t2767;
  double t2994;
  double t2996;
  double t3353;
  double t3366;
  double t3365;
  double t3371;
  double t3376;
  double t3389;
  double t3396;
  double t3402;
  double t3382;
  double t3419;
  double t3425;
  double t3428;
  double t3442;
  double t3450;
  double t3509;
  double t3647;
  double t3363;
  double t3444;
  double t3665;
  double t3695;
  double t4784;
  double t4807;
  double t4809;
  double t4812;
  double t4813;
  double t4814;
  double t4810;
  double t4816;
  double t4819;
  double t4823;
  double t4825;
  double t4827;
  double t4833;
  double t4837;
  double t4758;
  double t4826;
  double t4838;
  double t4847;
  double t5392;
  double t5402;
  double t5431;
  double t5437;
  double t5902;
  double t5903;
  double t5908;
  double t5914;
  double t6443;
  double t6448;
  double t6452;
  double t6453;
  t1321 = Cos(var1[4]);
  t2379 = Cos(var1[15]);
  t2388 = -1.*t2379;
  t2442 = 1. + t2388;
  t2480 = -0.15121*t2442;
  t2496 = Sin(var1[15]);
  t2357 = Cos(var1[5]);
  t2699 = Sin(var1[5]);
  t2566 = -0.15121*t2496;
  t2567 = t2480 + t2566;
  t2568 = t1321*t2357*t2567;
  t2612 = Sin(var1[4]);
  t2697 = 0.15121*t2496;
  t2698 = t2480 + t2697;
  t2700 = -1.*t1321*t2698*t2699;
  t2701 = -1.*t1321*t2357*t2496;
  t2706 = -1.*t2379*t1321*t2699;
  t2750 = t2701 + t2706;
  t2768 = t2379*t1321*t2357;
  t2973 = -1.*t1321*t2496*t2699;
  t2984 = t2768 + t2973;
  t2659 = -0.014461*t2612;
  t2767 = -0.150553*t2750;
  t2994 = -0.147281*t2984;
  t2996 = var1[0] + t2568 + t2659 + t2700 + t2767 + t2994;
  t3353 = Sin(var1[3]);
  t3366 = Cos(var1[3]);
  t3365 = t2357*t3353*t2612;
  t3371 = t3366*t2699;
  t3376 = t3365 + t3371;
  t3389 = t3366*t2357;
  t3396 = -1.*t3353*t2612*t2699;
  t3402 = t3389 + t3396;
  t3382 = t2567*t3376;
  t3419 = t2698*t3402;
  t3425 = -1.*t2496*t3376;
  t3428 = t2379*t3402;
  t3442 = t3425 + t3428;
  t3450 = t2379*t3376;
  t3509 = t2496*t3402;
  t3647 = t3450 + t3509;
  t3363 = 0.014461*t1321*t3353;
  t3444 = -0.150553*t3442;
  t3665 = -0.147281*t3647;
  t3695 = var1[1] + t3363 + t3382 + t3419 + t3444 + t3665;
  t4784 = -1.*t3366*t2357*t2612;
  t4807 = t3353*t2699;
  t4809 = t4784 + t4807;
  t4812 = t2357*t3353;
  t4813 = t3366*t2612*t2699;
  t4814 = t4812 + t4813;
  t4810 = t2567*t4809;
  t4816 = t2698*t4814;
  t4819 = -1.*t2496*t4809;
  t4823 = t2379*t4814;
  t4825 = t4819 + t4823;
  t4827 = t2379*t4809;
  t4833 = t2496*t4814;
  t4837 = t4827 + t4833;
  t4758 = -0.014461*t3366*t1321;
  t4826 = -0.150553*t4825;
  t4838 = -0.147281*t4837;
  t4847 = var1[2] + t4758 + t4810 + t4816 + t4826 + t4838;
  t5392 = -0.053211*t2612;
  t5402 = -0.226054*t2750;
  t5431 = -0.27728*t2984;
  t5437 = var1[0] + t2568 + t5392 + t2700 + t5402 + t5431;
  t5902 = 0.053211*t1321*t3353;
  t5903 = -0.226054*t3442;
  t5908 = -0.27728*t3647;
  t5914 = var1[1] + t5902 + t3382 + t3419 + t5903 + t5908;
  t6443 = -0.053211*t3366*t1321;
  t6448 = -0.226054*t4825;
  t6452 = -0.27728*t4837;
  t6453 = var1[2] + t6443 + t4810 + t4816 + t6448 + t6452;
  p_output1[0]=t2996;
  p_output1[1]=t2568 - 0.013236*t2612 + t2700 - 0.154839*t2750 - 0.145157*t2984 + var1[0];
  p_output1[2]=t2568 - 0.010576*t2612 + t2700 - 0.158732*t2750 - 0.143689*t2984 + var1[0];
  p_output1[3]=t2568 - 0.00677*t2612 + t2700 - 0.161809*t2750 - 0.143036*t2984 + var1[0];
  p_output1[4]=t2568 - 0.002231*t2612 + t2700 - 0.163738*t2750 - 0.143269*t2984 + var1[0];
  p_output1[5]=t2568 + 0.00255*t2612 + t2700 - 0.16431*t2750 - 0.144362*t2984 + var1[0];
  p_output1[6]=t2568 + 0.007055*t2612 + t2700 - 0.163462*t2750 - 0.146198*t2984 + var1[0];
  p_output1[7]=t2568 + 0.010796*t2612 + t2700 - 0.161286*t2750 - 0.148576*t2984 + var1[0];
  p_output1[8]=t2568 + 0.013366*t2612 + t2700 - 0.158018*t2750 - 0.15124*t2984 + var1[0];
  p_output1[9]=t2568 + 0.014488*t2612 + t2700 - 0.154013*t2750 - 0.153901*t2984 + var1[0];
  p_output1[10]=t2568 + 0.01404*t2612 + t2700 - 0.149703*t2750 - 0.15627*t2984 + var1[0];
  p_output1[11]=t2568 + 0.012071*t2612 + t2700 - 0.145558*t2750 - 0.158091*t2984 + var1[0];
  p_output1[12]=t2568 + 0.008793*t2612 + t2700 - 0.142024*t2750 - 0.159166*t2984 + var1[0];
  p_output1[13]=t2568 + 0.004563*t2612 + t2700 - 0.139486*t2750 - 0.159379*t2984 + var1[0];
  p_output1[14]=t2568 - 0.000162*t2612 + t2700 - 0.138219*t2750 - 0.158707*t2984 + var1[0];
  p_output1[15]=t2568 - 0.004869*t2612 + t2700 - 0.138359*t2750 - 0.157222*t2984 + var1[0];
  p_output1[16]=t2568 - 0.009049*t2612 + t2700 - 0.139892*t2750 - 0.155086*t2984 + var1[0];
  p_output1[17]=t2568 - 0.012248*t2612 + t2700 - 0.142651*t2750 - 0.15253*t2984 + var1[0];
  p_output1[18]=t2568 - 0.01412*t2612 + t2700 - 0.146338*t2750 - 0.149831*t2984 + var1[0];
  p_output1[19]=t2996;
  p_output1[20]=t3695;
  p_output1[21]=0.013236*t1321*t3353 + t3382 + t3419 - 0.154839*t3442 - 0.145157*t3647 + var1[1];
  p_output1[22]=0.010576*t1321*t3353 + t3382 + t3419 - 0.158732*t3442 - 0.143689*t3647 + var1[1];
  p_output1[23]=0.00677*t1321*t3353 + t3382 + t3419 - 0.161809*t3442 - 0.143036*t3647 + var1[1];
  p_output1[24]=0.002231*t1321*t3353 + t3382 + t3419 - 0.163738*t3442 - 0.143269*t3647 + var1[1];
  p_output1[25]=-0.00255*t1321*t3353 + t3382 + t3419 - 0.16431*t3442 - 0.144362*t3647 + var1[1];
  p_output1[26]=-0.007055*t1321*t3353 + t3382 + t3419 - 0.163462*t3442 - 0.146198*t3647 + var1[1];
  p_output1[27]=-0.010796*t1321*t3353 + t3382 + t3419 - 0.161286*t3442 - 0.148576*t3647 + var1[1];
  p_output1[28]=-0.013366*t1321*t3353 + t3382 + t3419 - 0.158018*t3442 - 0.15124*t3647 + var1[1];
  p_output1[29]=-0.014488*t1321*t3353 + t3382 + t3419 - 0.154013*t3442 - 0.153901*t3647 + var1[1];
  p_output1[30]=-0.01404*t1321*t3353 + t3382 + t3419 - 0.149703*t3442 - 0.15627*t3647 + var1[1];
  p_output1[31]=-0.012071*t1321*t3353 + t3382 + t3419 - 0.145558*t3442 - 0.158091*t3647 + var1[1];
  p_output1[32]=-0.008793*t1321*t3353 + t3382 + t3419 - 0.142024*t3442 - 0.159166*t3647 + var1[1];
  p_output1[33]=-0.004563*t1321*t3353 + t3382 + t3419 - 0.139486*t3442 - 0.159379*t3647 + var1[1];
  p_output1[34]=0.000162*t1321*t3353 + t3382 + t3419 - 0.138219*t3442 - 0.158707*t3647 + var1[1];
  p_output1[35]=0.004869*t1321*t3353 + t3382 + t3419 - 0.138359*t3442 - 0.157222*t3647 + var1[1];
  p_output1[36]=0.009049*t1321*t3353 + t3382 + t3419 - 0.139892*t3442 - 0.155086*t3647 + var1[1];
  p_output1[37]=0.012248*t1321*t3353 + t3382 + t3419 - 0.142651*t3442 - 0.15253*t3647 + var1[1];
  p_output1[38]=0.01412*t1321*t3353 + t3382 + t3419 - 0.146338*t3442 - 0.149831*t3647 + var1[1];
  p_output1[39]=t3695;
  p_output1[40]=t4847;
  p_output1[41]=-0.013236*t1321*t3366 + t4810 + t4816 - 0.154839*t4825 - 0.145157*t4837 + var1[2];
  p_output1[42]=-0.010576*t1321*t3366 + t4810 + t4816 - 0.158732*t4825 - 0.143689*t4837 + var1[2];
  p_output1[43]=-0.00677*t1321*t3366 + t4810 + t4816 - 0.161809*t4825 - 0.143036*t4837 + var1[2];
  p_output1[44]=-0.002231*t1321*t3366 + t4810 + t4816 - 0.163738*t4825 - 0.143269*t4837 + var1[2];
  p_output1[45]=0.00255*t1321*t3366 + t4810 + t4816 - 0.16431*t4825 - 0.144362*t4837 + var1[2];
  p_output1[46]=0.007055*t1321*t3366 + t4810 + t4816 - 0.163462*t4825 - 0.146198*t4837 + var1[2];
  p_output1[47]=0.010796*t1321*t3366 + t4810 + t4816 - 0.161286*t4825 - 0.148576*t4837 + var1[2];
  p_output1[48]=0.013366*t1321*t3366 + t4810 + t4816 - 0.158018*t4825 - 0.15124*t4837 + var1[2];
  p_output1[49]=0.014488*t1321*t3366 + t4810 + t4816 - 0.154013*t4825 - 0.153901*t4837 + var1[2];
  p_output1[50]=0.01404*t1321*t3366 + t4810 + t4816 - 0.149703*t4825 - 0.15627*t4837 + var1[2];
  p_output1[51]=0.012071*t1321*t3366 + t4810 + t4816 - 0.145558*t4825 - 0.158091*t4837 + var1[2];
  p_output1[52]=0.008793*t1321*t3366 + t4810 + t4816 - 0.142024*t4825 - 0.159166*t4837 + var1[2];
  p_output1[53]=0.004563*t1321*t3366 + t4810 + t4816 - 0.139486*t4825 - 0.159379*t4837 + var1[2];
  p_output1[54]=-0.000162*t1321*t3366 + t4810 + t4816 - 0.138219*t4825 - 0.158707*t4837 + var1[2];
  p_output1[55]=-0.004869*t1321*t3366 + t4810 + t4816 - 0.138359*t4825 - 0.157222*t4837 + var1[2];
  p_output1[56]=-0.009049*t1321*t3366 + t4810 + t4816 - 0.139892*t4825 - 0.155086*t4837 + var1[2];
  p_output1[57]=-0.012248*t1321*t3366 + t4810 + t4816 - 0.142651*t4825 - 0.15253*t4837 + var1[2];
  p_output1[58]=-0.01412*t1321*t3366 + t4810 + t4816 - 0.146338*t4825 - 0.149831*t4837 + var1[2];
  p_output1[59]=t4847;
  p_output1[60]=t5437;
  p_output1[61]=t2568 - 0.051986*t2612 + t2700 - 0.23034*t2750 - 0.275156*t2984 + var1[0];
  p_output1[62]=t2568 - 0.049326*t2612 + t2700 - 0.234233*t2750 - 0.273688*t2984 + var1[0];
  p_output1[63]=t2568 - 0.04552*t2612 + t2700 - 0.23731*t2750 - 0.273035*t2984 + var1[0];
  p_output1[64]=t2568 - 0.040981*t2612 + t2700 - 0.239239*t2750 - 0.273268*t2984 + var1[0];
  p_output1[65]=t2568 - 0.0362*t2612 + t2700 - 0.239811*t2750 - 0.274362*t2984 + var1[0];
  p_output1[66]=t2568 - 0.031695*t2612 + t2700 - 0.238962*t2750 - 0.276197*t2984 + var1[0];
  p_output1[67]=t2568 - 0.027954*t2612 + t2700 - 0.236787*t2750 - 0.278576*t2984 + var1[0];
  p_output1[68]=t2568 - 0.025384*t2612 + t2700 - 0.233519*t2750 - 0.28124*t2984 + var1[0];
  p_output1[69]=t2568 - 0.024262*t2612 + t2700 - 0.229513*t2750 - 0.2839*t2984 + var1[0];
  p_output1[70]=t2568 - 0.02471*t2612 + t2700 - 0.225204*t2750 - 0.28627*t2984 + var1[0];
  p_output1[71]=t2568 - 0.026679*t2612 + t2700 - 0.221058*t2750 - 0.28809*t2984 + var1[0];
  p_output1[72]=t2568 - 0.029957*t2612 + t2700 - 0.217525*t2750 - 0.289165*t2984 + var1[0];
  p_output1[73]=t2568 - 0.034187*t2612 + t2700 - 0.214987*t2750 - 0.289378*t2984 + var1[0];
  p_output1[74]=t2568 - 0.038912*t2612 + t2700 - 0.21372*t2750 - 0.288706*t2984 + var1[0];
  p_output1[75]=t2568 - 0.043619*t2612 + t2700 - 0.21386*t2750 - 0.287222*t2984 + var1[0];
  p_output1[76]=t2568 - 0.047799*t2612 + t2700 - 0.215393*t2750 - 0.285085*t2984 + var1[0];
  p_output1[77]=t2568 - 0.050998*t2612 + t2700 - 0.218152*t2750 - 0.282529*t2984 + var1[0];
  p_output1[78]=t2568 - 0.05287*t2612 + t2700 - 0.221839*t2750 - 0.27983*t2984 + var1[0];
  p_output1[79]=t5437;
  p_output1[80]=t5914;
  p_output1[81]=0.051986*t1321*t3353 + t3382 + t3419 - 0.23034*t3442 - 0.275156*t3647 + var1[1];
  p_output1[82]=0.049326*t1321*t3353 + t3382 + t3419 - 0.234233*t3442 - 0.273688*t3647 + var1[1];
  p_output1[83]=0.04552*t1321*t3353 + t3382 + t3419 - 0.23731*t3442 - 0.273035*t3647 + var1[1];
  p_output1[84]=0.040981*t1321*t3353 + t3382 + t3419 - 0.239239*t3442 - 0.273268*t3647 + var1[1];
  p_output1[85]=0.0362*t1321*t3353 + t3382 + t3419 - 0.239811*t3442 - 0.274362*t3647 + var1[1];
  p_output1[86]=0.031695*t1321*t3353 + t3382 + t3419 - 0.238962*t3442 - 0.276197*t3647 + var1[1];
  p_output1[87]=0.027954*t1321*t3353 + t3382 + t3419 - 0.236787*t3442 - 0.278576*t3647 + var1[1];
  p_output1[88]=0.025384*t1321*t3353 + t3382 + t3419 - 0.233519*t3442 - 0.28124*t3647 + var1[1];
  p_output1[89]=0.024262*t1321*t3353 + t3382 + t3419 - 0.229513*t3442 - 0.2839*t3647 + var1[1];
  p_output1[90]=0.02471*t1321*t3353 + t3382 + t3419 - 0.225204*t3442 - 0.28627*t3647 + var1[1];
  p_output1[91]=0.026679*t1321*t3353 + t3382 + t3419 - 0.221058*t3442 - 0.28809*t3647 + var1[1];
  p_output1[92]=0.029957*t1321*t3353 + t3382 + t3419 - 0.217525*t3442 - 0.289165*t3647 + var1[1];
  p_output1[93]=0.034187*t1321*t3353 + t3382 + t3419 - 0.214987*t3442 - 0.289378*t3647 + var1[1];
  p_output1[94]=0.038912*t1321*t3353 + t3382 + t3419 - 0.21372*t3442 - 0.288706*t3647 + var1[1];
  p_output1[95]=0.043619*t1321*t3353 + t3382 + t3419 - 0.21386*t3442 - 0.287222*t3647 + var1[1];
  p_output1[96]=0.047799*t1321*t3353 + t3382 + t3419 - 0.215393*t3442 - 0.285085*t3647 + var1[1];
  p_output1[97]=0.050998*t1321*t3353 + t3382 + t3419 - 0.218152*t3442 - 0.282529*t3647 + var1[1];
  p_output1[98]=0.05287*t1321*t3353 + t3382 + t3419 - 0.221839*t3442 - 0.27983*t3647 + var1[1];
  p_output1[99]=t5914;
  p_output1[100]=t6453;
  p_output1[101]=-0.051986*t1321*t3366 + t4810 + t4816 - 0.23034*t4825 - 0.275156*t4837 + var1[2];
  p_output1[102]=-0.049326*t1321*t3366 + t4810 + t4816 - 0.234233*t4825 - 0.273688*t4837 + var1[2];
  p_output1[103]=-0.04552*t1321*t3366 + t4810 + t4816 - 0.23731*t4825 - 0.273035*t4837 + var1[2];
  p_output1[104]=-0.040981*t1321*t3366 + t4810 + t4816 - 0.239239*t4825 - 0.273268*t4837 + var1[2];
  p_output1[105]=-0.0362*t1321*t3366 + t4810 + t4816 - 0.239811*t4825 - 0.274362*t4837 + var1[2];
  p_output1[106]=-0.031695*t1321*t3366 + t4810 + t4816 - 0.238962*t4825 - 0.276197*t4837 + var1[2];
  p_output1[107]=-0.027954*t1321*t3366 + t4810 + t4816 - 0.236787*t4825 - 0.278576*t4837 + var1[2];
  p_output1[108]=-0.025384*t1321*t3366 + t4810 + t4816 - 0.233519*t4825 - 0.28124*t4837 + var1[2];
  p_output1[109]=-0.024262*t1321*t3366 + t4810 + t4816 - 0.229513*t4825 - 0.2839*t4837 + var1[2];
  p_output1[110]=-0.02471*t1321*t3366 + t4810 + t4816 - 0.225204*t4825 - 0.28627*t4837 + var1[2];
  p_output1[111]=-0.026679*t1321*t3366 + t4810 + t4816 - 0.221058*t4825 - 0.28809*t4837 + var1[2];
  p_output1[112]=-0.029957*t1321*t3366 + t4810 + t4816 - 0.217525*t4825 - 0.289165*t4837 + var1[2];
  p_output1[113]=-0.034187*t1321*t3366 + t4810 + t4816 - 0.214987*t4825 - 0.289378*t4837 + var1[2];
  p_output1[114]=-0.038912*t1321*t3366 + t4810 + t4816 - 0.21372*t4825 - 0.288706*t4837 + var1[2];
  p_output1[115]=-0.043619*t1321*t3366 + t4810 + t4816 - 0.21386*t4825 - 0.287222*t4837 + var1[2];
  p_output1[116]=-0.047799*t1321*t3366 + t4810 + t4816 - 0.215393*t4825 - 0.285085*t4837 + var1[2];
  p_output1[117]=-0.050998*t1321*t3366 + t4810 + t4816 - 0.218152*t4825 - 0.282529*t4837 + var1[2];
  p_output1[118]=-0.05287*t1321*t3366 + t4810 + t4816 - 0.221839*t4825 - 0.27983*t4837 + var1[2];
  p_output1[119]=t6453;
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

#include "Link_rr_hip_to_rr_hip_pitch_bar.hh"

namespace SymFunction
{

void Link_rr_hip_to_rr_hip_pitch_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
