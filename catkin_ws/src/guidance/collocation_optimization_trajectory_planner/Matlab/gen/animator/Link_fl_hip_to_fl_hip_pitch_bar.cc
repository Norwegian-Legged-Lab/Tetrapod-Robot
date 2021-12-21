/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 23:16:41 GMT+01:00
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
  double t410;
  double t534;
  double t539;
  double t544;
  double t581;
  double t595;
  double t529;
  double t702;
  double t200;
  double t618;
  double t627;
  double t642;
  double t796;
  double t967;
  double t1063;
  double t1072;
  double t1078;
  double t1089;
  double t1168;
  double t1209;
  double t1301;
  double t257;
  double t1145;
  double t1318;
  double t1368;
  double t3438;
  double t3534;
  double t3542;
  double t3545;
  double t3557;
  double t3562;
  double t3563;
  double t3568;
  double t3561;
  double t3614;
  double t3638;
  double t3646;
  double t3647;
  double t3668;
  double t3676;
  double t3700;
  double t3510;
  double t3664;
  double t3702;
  double t3704;
  double t4110;
  double t4111;
  double t4116;
  double t4121;
  double t4123;
  double t4125;
  double t4118;
  double t4126;
  double t4128;
  double t4129;
  double t4130;
  double t4136;
  double t4139;
  double t4141;
  double t4109;
  double t4135;
  double t4143;
  double t4145;
  double t4290;
  double t4292;
  double t4293;
  double t4294;
  double t4420;
  double t4421;
  double t4424;
  double t4425;
  double t4553;
  double t4554;
  double t4555;
  double t4558;
  t410 = Cos(var1[4]);
  t534 = Cos(var1[6]);
  t539 = -1.*t534;
  t544 = 1. + t539;
  t581 = 0.15121*t544;
  t595 = Sin(var1[6]);
  t529 = Sin(var1[5]);
  t702 = Cos(var1[5]);
  t200 = Sin(var1[4]);
  t618 = -0.15121*t595;
  t627 = t581 + t618;
  t642 = -1.*t410*t529*t627;
  t796 = 0.15121*t595;
  t967 = t581 + t796;
  t1063 = t410*t702*t967;
  t1072 = -1.*t410*t534*t529;
  t1078 = -1.*t410*t702*t595;
  t1089 = t1072 + t1078;
  t1168 = t410*t702*t534;
  t1209 = -1.*t410*t529*t595;
  t1301 = t1168 + t1209;
  t257 = -0.012011*t200;
  t1145 = 0.142361*t1089;
  t1318 = 0.152769*t1301;
  t1368 = var1[0] + t257 + t642 + t1063 + t1145 + t1318;
  t3438 = Sin(var1[3]);
  t3534 = Cos(var1[3]);
  t3542 = t3534*t702;
  t3545 = -1.*t3438*t200*t529;
  t3557 = t3542 + t3545;
  t3562 = t702*t3438*t200;
  t3563 = t3534*t529;
  t3568 = t3562 + t3563;
  t3561 = t3557*t627;
  t3614 = t3568*t967;
  t3638 = t534*t3557;
  t3646 = -1.*t3568*t595;
  t3647 = t3638 + t3646;
  t3668 = t534*t3568;
  t3676 = t3557*t595;
  t3700 = t3668 + t3676;
  t3510 = 0.012011*t410*t3438;
  t3664 = 0.142361*t3647;
  t3702 = 0.152769*t3700;
  t3704 = var1[1] + t3510 + t3561 + t3614 + t3664 + t3702;
  t4110 = t702*t3438;
  t4111 = t3534*t200*t529;
  t4116 = t4110 + t4111;
  t4121 = -1.*t3534*t702*t200;
  t4123 = t3438*t529;
  t4125 = t4121 + t4123;
  t4118 = t4116*t627;
  t4126 = t4125*t967;
  t4128 = t534*t4116;
  t4129 = -1.*t4125*t595;
  t4130 = t4128 + t4129;
  t4136 = t534*t4125;
  t4139 = t4116*t595;
  t4141 = t4136 + t4139;
  t4109 = -0.012011*t3534*t410;
  t4135 = 0.142361*t4130;
  t4143 = 0.152769*t4141;
  t4145 = var1[2] + t4109 + t4118 + t4126 + t4135 + t4143;
  t4290 = -0.050761*t200;
  t4292 = 0.217861*t1089;
  t4293 = 0.282769*t1301;
  t4294 = var1[0] + t4290 + t642 + t1063 + t4292 + t4293;
  t4420 = 0.050761*t410*t3438;
  t4421 = 0.217861*t3647;
  t4424 = 0.282769*t3700;
  t4425 = var1[1] + t4420 + t3561 + t3614 + t4421 + t4424;
  t4553 = -0.050761*t3534*t410;
  t4554 = 0.217861*t4130;
  t4555 = 0.282769*t4141;
  t4558 = var1[2] + t4553 + t4118 + t4126 + t4554 + t4555;
  p_output1[0]=t1368;
  p_output1[1]=t1063 + 0.14598*t1089 + 0.15007*t1301 - 0.014013*t200 + t642 + var1[0];
  p_output1[2]=t1063 + 0.150166*t1089 + 0.147496*t1301 - 0.014495*t200 + t642 + var1[0];
  p_output1[3]=t1063 + 0.154465*t1089 + 0.145323*t1301 - 0.013407*t200 + t642 + var1[0];
  p_output1[4]=t1063 + 0.158411*t1089 + 0.143789*t1301 - 0.010866*t200 + t642 + var1[0];
  p_output1[5]=t1063 + 0.161577*t1089 + 0.143059*t1301 - 0.007148*t200 + t642 + var1[0];
  p_output1[6]=t1063 + 0.163619*t1089 + 0.143212*t1301 - 0.002655*t200 + t642 + var1[0];
  p_output1[7]=t1063 + 0.164317*t1089 + 0.144232*t1301 + 0.002126*t200 + t642 + var1[0];
  p_output1[8]=t1063 + 0.163594*t1089 + 0.146008*t1301 + 0.006676*t200 + t642 + var1[0];
  p_output1[9]=t1063 + 0.161529*t1089 + 0.148348*t1301 + 0.010503*t200 + t642 + var1[0];
  p_output1[10]=t1063 + 0.158347*t1089 + 0.150998*t1301 + 0.013192*t200 + t642 + var1[0];
  p_output1[11]=t1063 + 0.15439*t1089 + 0.153671*t1301 + 0.014451*t200 + t642 + var1[0];
  p_output1[12]=t1063 + 0.150089*t1089 + 0.156077*t1301 + 0.014144*t200 + t642 + var1[0];
  p_output1[13]=t1063 + 0.14591*t1089 + 0.157956*t1301 + 0.012305*t200 + t642 + var1[0];
  p_output1[14]=t1063 + 0.142305*t1089 + 0.159104*t1301 + 0.009132*t200 + t642 + var1[0];
  p_output1[15]=t1063 + 0.139665*t1089 + 0.159396*t1301 + 0.004969*t200 + t642 + var1[0];
  p_output1[16]=t1063 + 0.138276*t1089 + 0.158802*t1301 + 0.000268*t200 + t642 + var1[0];
  p_output1[17]=t1063 + 0.138288*t1089 + 0.157384*t1301 - 0.004462*t200 + t642 + var1[0];
  p_output1[18]=t1063 + 0.139701*t1089 + 0.155298*t1301 - 0.008708*t200 + t642 + var1[0];
  p_output1[19]=t1368;
  p_output1[20]=t3704;
  p_output1[21]=t3561 + t3614 + 0.14598*t3647 + 0.15007*t3700 + 0.014013*t3438*t410 + var1[1];
  p_output1[22]=t3561 + t3614 + 0.150166*t3647 + 0.147496*t3700 + 0.014495*t3438*t410 + var1[1];
  p_output1[23]=t3561 + t3614 + 0.154465*t3647 + 0.145323*t3700 + 0.013407*t3438*t410 + var1[1];
  p_output1[24]=t3561 + t3614 + 0.158411*t3647 + 0.143789*t3700 + 0.010866*t3438*t410 + var1[1];
  p_output1[25]=t3561 + t3614 + 0.161577*t3647 + 0.143059*t3700 + 0.007148*t3438*t410 + var1[1];
  p_output1[26]=t3561 + t3614 + 0.163619*t3647 + 0.143212*t3700 + 0.002655*t3438*t410 + var1[1];
  p_output1[27]=t3561 + t3614 + 0.164317*t3647 + 0.144232*t3700 - 0.002126*t3438*t410 + var1[1];
  p_output1[28]=t3561 + t3614 + 0.163594*t3647 + 0.146008*t3700 - 0.006676*t3438*t410 + var1[1];
  p_output1[29]=t3561 + t3614 + 0.161529*t3647 + 0.148348*t3700 - 0.010503*t3438*t410 + var1[1];
  p_output1[30]=t3561 + t3614 + 0.158347*t3647 + 0.150998*t3700 - 0.013192*t3438*t410 + var1[1];
  p_output1[31]=t3561 + t3614 + 0.15439*t3647 + 0.153671*t3700 - 0.014451*t3438*t410 + var1[1];
  p_output1[32]=t3561 + t3614 + 0.150089*t3647 + 0.156077*t3700 - 0.014144*t3438*t410 + var1[1];
  p_output1[33]=t3561 + t3614 + 0.14591*t3647 + 0.157956*t3700 - 0.012305*t3438*t410 + var1[1];
  p_output1[34]=t3561 + t3614 + 0.142305*t3647 + 0.159104*t3700 - 0.009132*t3438*t410 + var1[1];
  p_output1[35]=t3561 + t3614 + 0.139665*t3647 + 0.159396*t3700 - 0.004969*t3438*t410 + var1[1];
  p_output1[36]=t3561 + t3614 + 0.138276*t3647 + 0.158802*t3700 - 0.000268*t3438*t410 + var1[1];
  p_output1[37]=t3561 + t3614 + 0.138288*t3647 + 0.157384*t3700 + 0.004462*t3438*t410 + var1[1];
  p_output1[38]=t3561 + t3614 + 0.139701*t3647 + 0.155298*t3700 + 0.008708*t3438*t410 + var1[1];
  p_output1[39]=t3704;
  p_output1[40]=t4145;
  p_output1[41]=-0.014013*t3534*t410 + t4118 + t4126 + 0.14598*t4130 + 0.15007*t4141 + var1[2];
  p_output1[42]=-0.014495*t3534*t410 + t4118 + t4126 + 0.150166*t4130 + 0.147496*t4141 + var1[2];
  p_output1[43]=-0.013407*t3534*t410 + t4118 + t4126 + 0.154465*t4130 + 0.145323*t4141 + var1[2];
  p_output1[44]=-0.010866*t3534*t410 + t4118 + t4126 + 0.158411*t4130 + 0.143789*t4141 + var1[2];
  p_output1[45]=-0.007148*t3534*t410 + t4118 + t4126 + 0.161577*t4130 + 0.143059*t4141 + var1[2];
  p_output1[46]=-0.002655*t3534*t410 + t4118 + t4126 + 0.163619*t4130 + 0.143212*t4141 + var1[2];
  p_output1[47]=0.002126*t3534*t410 + t4118 + t4126 + 0.164317*t4130 + 0.144232*t4141 + var1[2];
  p_output1[48]=0.006676*t3534*t410 + t4118 + t4126 + 0.163594*t4130 + 0.146008*t4141 + var1[2];
  p_output1[49]=0.010503*t3534*t410 + t4118 + t4126 + 0.161529*t4130 + 0.148348*t4141 + var1[2];
  p_output1[50]=0.013192*t3534*t410 + t4118 + t4126 + 0.158347*t4130 + 0.150998*t4141 + var1[2];
  p_output1[51]=0.014451*t3534*t410 + t4118 + t4126 + 0.15439*t4130 + 0.153671*t4141 + var1[2];
  p_output1[52]=0.014144*t3534*t410 + t4118 + t4126 + 0.150089*t4130 + 0.156077*t4141 + var1[2];
  p_output1[53]=0.012305*t3534*t410 + t4118 + t4126 + 0.14591*t4130 + 0.157956*t4141 + var1[2];
  p_output1[54]=0.009132*t3534*t410 + t4118 + t4126 + 0.142305*t4130 + 0.159104*t4141 + var1[2];
  p_output1[55]=0.004969*t3534*t410 + t4118 + t4126 + 0.139665*t4130 + 0.159396*t4141 + var1[2];
  p_output1[56]=0.000268*t3534*t410 + t4118 + t4126 + 0.138276*t4130 + 0.158802*t4141 + var1[2];
  p_output1[57]=-0.004462*t3534*t410 + t4118 + t4126 + 0.138288*t4130 + 0.157384*t4141 + var1[2];
  p_output1[58]=-0.008708*t3534*t410 + t4118 + t4126 + 0.139701*t4130 + 0.155298*t4141 + var1[2];
  p_output1[59]=t4145;
  p_output1[60]=t4294;
  p_output1[61]=t1063 + 0.22148*t1089 + 0.28007*t1301 - 0.052763*t200 + t642 + var1[0];
  p_output1[62]=t1063 + 0.225666*t1089 + 0.277496*t1301 - 0.053245*t200 + t642 + var1[0];
  p_output1[63]=t1063 + 0.229965*t1089 + 0.275323*t1301 - 0.052157*t200 + t642 + var1[0];
  p_output1[64]=t1063 + 0.233911*t1089 + 0.273789*t1301 - 0.049616*t200 + t642 + var1[0];
  p_output1[65]=t1063 + 0.237077*t1089 + 0.273059*t1301 - 0.045898*t200 + t642 + var1[0];
  p_output1[66]=t1063 + 0.239119*t1089 + 0.273212*t1301 - 0.041405*t200 + t642 + var1[0];
  p_output1[67]=t1063 + 0.239817*t1089 + 0.274232*t1301 - 0.036624*t200 + t642 + var1[0];
  p_output1[68]=t1063 + 0.239094*t1089 + 0.276008*t1301 - 0.032074*t200 + t642 + var1[0];
  p_output1[69]=t1063 + 0.237029*t1089 + 0.278348*t1301 - 0.028247*t200 + t642 + var1[0];
  p_output1[70]=t1063 + 0.233847*t1089 + 0.280998*t1301 - 0.025558*t200 + t642 + var1[0];
  p_output1[71]=t1063 + 0.22989*t1089 + 0.283671*t1301 - 0.024299*t200 + t642 + var1[0];
  p_output1[72]=t1063 + 0.225589*t1089 + 0.286077*t1301 - 0.024606*t200 + t642 + var1[0];
  p_output1[73]=t1063 + 0.22141*t1089 + 0.287956*t1301 - 0.026445*t200 + t642 + var1[0];
  p_output1[74]=t1063 + 0.217805*t1089 + 0.289104*t1301 - 0.029618*t200 + t642 + var1[0];
  p_output1[75]=t1063 + 0.215165*t1089 + 0.289396*t1301 - 0.033781*t200 + t642 + var1[0];
  p_output1[76]=t1063 + 0.213776*t1089 + 0.288802*t1301 - 0.038482*t200 + t642 + var1[0];
  p_output1[77]=t1063 + 0.213788*t1089 + 0.287384*t1301 - 0.043212*t200 + t642 + var1[0];
  p_output1[78]=t1063 + 0.215201*t1089 + 0.285298*t1301 - 0.047458*t200 + t642 + var1[0];
  p_output1[79]=t4294;
  p_output1[80]=t4425;
  p_output1[81]=t3561 + t3614 + 0.22148*t3647 + 0.28007*t3700 + 0.052763*t3438*t410 + var1[1];
  p_output1[82]=t3561 + t3614 + 0.225666*t3647 + 0.277496*t3700 + 0.053245*t3438*t410 + var1[1];
  p_output1[83]=t3561 + t3614 + 0.229965*t3647 + 0.275323*t3700 + 0.052157*t3438*t410 + var1[1];
  p_output1[84]=t3561 + t3614 + 0.233911*t3647 + 0.273789*t3700 + 0.049616*t3438*t410 + var1[1];
  p_output1[85]=t3561 + t3614 + 0.237077*t3647 + 0.273059*t3700 + 0.045898*t3438*t410 + var1[1];
  p_output1[86]=t3561 + t3614 + 0.239119*t3647 + 0.273212*t3700 + 0.041405*t3438*t410 + var1[1];
  p_output1[87]=t3561 + t3614 + 0.239817*t3647 + 0.274232*t3700 + 0.036624*t3438*t410 + var1[1];
  p_output1[88]=t3561 + t3614 + 0.239094*t3647 + 0.276008*t3700 + 0.032074*t3438*t410 + var1[1];
  p_output1[89]=t3561 + t3614 + 0.237029*t3647 + 0.278348*t3700 + 0.028247*t3438*t410 + var1[1];
  p_output1[90]=t3561 + t3614 + 0.233847*t3647 + 0.280998*t3700 + 0.025558*t3438*t410 + var1[1];
  p_output1[91]=t3561 + t3614 + 0.22989*t3647 + 0.283671*t3700 + 0.024299*t3438*t410 + var1[1];
  p_output1[92]=t3561 + t3614 + 0.225589*t3647 + 0.286077*t3700 + 0.024606*t3438*t410 + var1[1];
  p_output1[93]=t3561 + t3614 + 0.22141*t3647 + 0.287956*t3700 + 0.026445*t3438*t410 + var1[1];
  p_output1[94]=t3561 + t3614 + 0.217805*t3647 + 0.289104*t3700 + 0.029618*t3438*t410 + var1[1];
  p_output1[95]=t3561 + t3614 + 0.215165*t3647 + 0.289396*t3700 + 0.033781*t3438*t410 + var1[1];
  p_output1[96]=t3561 + t3614 + 0.213776*t3647 + 0.288802*t3700 + 0.038482*t3438*t410 + var1[1];
  p_output1[97]=t3561 + t3614 + 0.213788*t3647 + 0.287384*t3700 + 0.043212*t3438*t410 + var1[1];
  p_output1[98]=t3561 + t3614 + 0.215201*t3647 + 0.285298*t3700 + 0.047458*t3438*t410 + var1[1];
  p_output1[99]=t4425;
  p_output1[100]=t4558;
  p_output1[101]=-0.052763*t3534*t410 + t4118 + t4126 + 0.22148*t4130 + 0.28007*t4141 + var1[2];
  p_output1[102]=-0.053245*t3534*t410 + t4118 + t4126 + 0.225666*t4130 + 0.277496*t4141 + var1[2];
  p_output1[103]=-0.052157*t3534*t410 + t4118 + t4126 + 0.229965*t4130 + 0.275323*t4141 + var1[2];
  p_output1[104]=-0.049616*t3534*t410 + t4118 + t4126 + 0.233911*t4130 + 0.273789*t4141 + var1[2];
  p_output1[105]=-0.045898*t3534*t410 + t4118 + t4126 + 0.237077*t4130 + 0.273059*t4141 + var1[2];
  p_output1[106]=-0.041405*t3534*t410 + t4118 + t4126 + 0.239119*t4130 + 0.273212*t4141 + var1[2];
  p_output1[107]=-0.036624*t3534*t410 + t4118 + t4126 + 0.239817*t4130 + 0.274232*t4141 + var1[2];
  p_output1[108]=-0.032074*t3534*t410 + t4118 + t4126 + 0.239094*t4130 + 0.276008*t4141 + var1[2];
  p_output1[109]=-0.028247*t3534*t410 + t4118 + t4126 + 0.237029*t4130 + 0.278348*t4141 + var1[2];
  p_output1[110]=-0.025558*t3534*t410 + t4118 + t4126 + 0.233847*t4130 + 0.280998*t4141 + var1[2];
  p_output1[111]=-0.024299*t3534*t410 + t4118 + t4126 + 0.22989*t4130 + 0.283671*t4141 + var1[2];
  p_output1[112]=-0.024606*t3534*t410 + t4118 + t4126 + 0.225589*t4130 + 0.286077*t4141 + var1[2];
  p_output1[113]=-0.026445*t3534*t410 + t4118 + t4126 + 0.22141*t4130 + 0.287956*t4141 + var1[2];
  p_output1[114]=-0.029618*t3534*t410 + t4118 + t4126 + 0.217805*t4130 + 0.289104*t4141 + var1[2];
  p_output1[115]=-0.033781*t3534*t410 + t4118 + t4126 + 0.215165*t4130 + 0.289396*t4141 + var1[2];
  p_output1[116]=-0.038482*t3534*t410 + t4118 + t4126 + 0.213776*t4130 + 0.288802*t4141 + var1[2];
  p_output1[117]=-0.043212*t3534*t410 + t4118 + t4126 + 0.213788*t4130 + 0.287384*t4141 + var1[2];
  p_output1[118]=-0.047458*t3534*t410 + t4118 + t4126 + 0.215201*t4130 + 0.285298*t4141 + var1[2];
  p_output1[119]=t4558;
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

#include "Link_fl_hip_to_fl_hip_pitch_bar.hh"

namespace SymFunction
{

void Link_fl_hip_to_fl_hip_pitch_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
