/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 18:01:41 GMT+01:00
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
  double t523;
  double t720;
  double t729;
  double t793;
  double t852;
  double t1154;
  double t645;
  double t1899;
  double t1243;
  double t1247;
  double t1293;
  double t1380;
  double t1822;
  double t1823;
  double t1919;
  double t1941;
  double t1942;
  double t1952;
  double t1990;
  double t2017;
  double t2022;
  double t1527;
  double t1960;
  double t2045;
  double t2219;
  double t3373;
  double t3390;
  double t3388;
  double t3391;
  double t3394;
  double t3402;
  double t3404;
  double t3411;
  double t3397;
  double t3417;
  double t3419;
  double t3425;
  double t3428;
  double t3434;
  double t3437;
  double t3438;
  double t3386;
  double t3429;
  double t3442;
  double t3444;
  double t3708;
  double t3714;
  double t3716;
  double t3720;
  double t3721;
  double t3729;
  double t3718;
  double t3732;
  double t3734;
  double t3736;
  double t3739;
  double t3756;
  double t3759;
  double t3764;
  double t3705;
  double t3755;
  double t3769;
  double t3771;
  double t3957;
  double t3958;
  double t3960;
  double t3963;
  double t4121;
  double t4123;
  double t4127;
  double t4129;
  double t4266;
  double t4267;
  double t4268;
  double t4269;
  t523 = Cos(var1[4]);
  t720 = Cos(var1[15]);
  t729 = -1.*t720;
  t793 = 1. + t729;
  t852 = -0.15121*t793;
  t1154 = Sin(var1[15]);
  t645 = Cos(var1[5]);
  t1899 = Sin(var1[5]);
  t1243 = -0.15121*t1154;
  t1247 = t852 + t1243;
  t1293 = t523*t645*t1247;
  t1380 = Sin(var1[4]);
  t1822 = 0.15121*t1154;
  t1823 = t852 + t1822;
  t1919 = -1.*t523*t1823*t1899;
  t1941 = -1.*t523*t645*t1154;
  t1942 = -1.*t720*t523*t1899;
  t1952 = t1941 + t1942;
  t1990 = t720*t523*t645;
  t2017 = -1.*t523*t1154*t1899;
  t2022 = t1990 + t2017;
  t1527 = -0.011723*t1380;
  t1960 = -0.142034*t1952;
  t2045 = -0.153045*t2022;
  t2219 = var1[0] + t1293 + t1527 + t1919 + t1960 + t2045;
  t3373 = Sin(var1[3]);
  t3390 = Cos(var1[3]);
  t3388 = t645*t3373*t1380;
  t3391 = t3390*t1899;
  t3394 = t3388 + t3391;
  t3402 = t3390*t645;
  t3404 = -1.*t3373*t1380*t1899;
  t3411 = t3402 + t3404;
  t3397 = t1247*t3394;
  t3417 = t1823*t3411;
  t3419 = -1.*t1154*t3394;
  t3425 = t720*t3411;
  t3428 = t3419 + t3425;
  t3434 = t720*t3394;
  t3437 = t1154*t3411;
  t3438 = t3434 + t3437;
  t3386 = 0.011723*t523*t3373;
  t3429 = -0.142034*t3428;
  t3442 = -0.153045*t3438;
  t3444 = var1[1] + t3386 + t3397 + t3417 + t3429 + t3442;
  t3708 = -1.*t3390*t645*t1380;
  t3714 = t3373*t1899;
  t3716 = t3708 + t3714;
  t3720 = t645*t3373;
  t3721 = t3390*t1380*t1899;
  t3729 = t3720 + t3721;
  t3718 = t1247*t3716;
  t3732 = t1823*t3729;
  t3734 = -1.*t1154*t3716;
  t3736 = t720*t3729;
  t3739 = t3734 + t3736;
  t3756 = t720*t3716;
  t3759 = t1154*t3729;
  t3764 = t3756 + t3759;
  t3705 = -0.011723*t3390*t523;
  t3755 = -0.142034*t3739;
  t3769 = -0.153045*t3764;
  t3771 = var1[2] + t3705 + t3718 + t3732 + t3755 + t3769;
  t3957 = -0.050473*t1380;
  t3958 = -0.217535*t1952;
  t3960 = -0.283044*t2022;
  t3963 = var1[0] + t1293 + t3957 + t1919 + t3958 + t3960;
  t4121 = 0.050473*t523*t3373;
  t4123 = -0.217535*t3428;
  t4127 = -0.283044*t3438;
  t4129 = var1[1] + t4121 + t3397 + t3417 + t4123 + t4127;
  t4266 = -0.050473*t3390*t523;
  t4267 = -0.217535*t3739;
  t4268 = -0.283044*t3764;
  t4269 = var1[2] + t4266 + t3718 + t3732 + t4267 + t4268;
  p_output1[0]=t2219;
  p_output1[1]=t1293 - 0.013873*t1380 + t1919 - 0.14557*t1952 - 0.150351*t2022 + var1[0];
  p_output1[2]=t1293 - 0.014519*t1380 + t1919 - 0.149717*t1952 - 0.147749*t2022 + var1[0];
  p_output1[3]=t1293 - 0.013592*t1380 + t1919 - 0.154026*t1952 - 0.145523*t2022 + var1[0];
  p_output1[4]=t1293 - 0.011192*t1380 + t1919 - 0.15803*t1952 - 0.143913*t2022 + var1[0];
  p_output1[5]=t1293 - 0.007579*t1380 + t1919 - 0.161294*t1952 - 0.143094*t2022 + var1[0];
  p_output1[6]=t1293 - 0.003145*t1380 + t1919 - 0.163466*t1952 - 0.143154*t2022 + var1[0];
  p_output1[7]=t1293 + 0.00163*t1380 + t1919 - 0.16431*t1952 - 0.144088*t2022 + var1[0];
  p_output1[8]=t1293 + 0.006228*t1380 + t1919 - 0.163734*t1952 - 0.145793*t2022 + var1[0];
  p_output1[9]=t1293 + 0.010152*t1380 + t1919 - 0.161801*t1952 - 0.148085*t2022 + var1[0];
  p_output1[10]=t1293 + 0.012975*t1380 + t1919 - 0.158721*t1952 - 0.150716*t2022 + var1[0];
  p_output1[11]=t1293 + 0.014392*t1380 + t1919 - 0.154826*t1952 - 0.1534*t2022 + var1[0];
  p_output1[12]=t1293 + 0.01425*t1380 + t1919 - 0.150539*t1952 - 0.155847*t2022 + var1[0];
  p_output1[13]=t1293 + 0.012563*t1380 + t1919 - 0.146326*t1952 - 0.157791*t2022 + var1[0];
  p_output1[14]=t1293 + 0.009515*t1380 + t1919 - 0.142641*t1952 - 0.159023*t2022 + var1[0];
  p_output1[15]=t1293 + 0.005436*t1380 + t1919 - 0.139885*t1952 - 0.159408*t2022 + var1[0];
  p_output1[16]=t1293 + 0.000768*t1380 + t1919 - 0.138356*t1952 - 0.158904*t2022 + var1[0];
  p_output1[17]=t1293 - 0.003984*t1380 + t1919 - 0.138221*t1952 - 0.157567*t2022 + var1[0];
  p_output1[18]=t1293 - 0.008303*t1380 + t1919 - 0.139492*t1952 - 0.15554*t2022 + var1[0];
  p_output1[19]=t2219;
  p_output1[20]=t3444;
  p_output1[21]=t3397 + t3417 - 0.14557*t3428 - 0.150351*t3438 + 0.013873*t3373*t523 + var1[1];
  p_output1[22]=t3397 + t3417 - 0.149717*t3428 - 0.147749*t3438 + 0.014519*t3373*t523 + var1[1];
  p_output1[23]=t3397 + t3417 - 0.154026*t3428 - 0.145523*t3438 + 0.013592*t3373*t523 + var1[1];
  p_output1[24]=t3397 + t3417 - 0.15803*t3428 - 0.143913*t3438 + 0.011192*t3373*t523 + var1[1];
  p_output1[25]=t3397 + t3417 - 0.161294*t3428 - 0.143094*t3438 + 0.007579*t3373*t523 + var1[1];
  p_output1[26]=t3397 + t3417 - 0.163466*t3428 - 0.143154*t3438 + 0.003145*t3373*t523 + var1[1];
  p_output1[27]=t3397 + t3417 - 0.16431*t3428 - 0.144088*t3438 - 0.00163*t3373*t523 + var1[1];
  p_output1[28]=t3397 + t3417 - 0.163734*t3428 - 0.145793*t3438 - 0.006228*t3373*t523 + var1[1];
  p_output1[29]=t3397 + t3417 - 0.161801*t3428 - 0.148085*t3438 - 0.010152*t3373*t523 + var1[1];
  p_output1[30]=t3397 + t3417 - 0.158721*t3428 - 0.150716*t3438 - 0.012975*t3373*t523 + var1[1];
  p_output1[31]=t3397 + t3417 - 0.154826*t3428 - 0.1534*t3438 - 0.014392*t3373*t523 + var1[1];
  p_output1[32]=t3397 + t3417 - 0.150539*t3428 - 0.155847*t3438 - 0.01425*t3373*t523 + var1[1];
  p_output1[33]=t3397 + t3417 - 0.146326*t3428 - 0.157791*t3438 - 0.012563*t3373*t523 + var1[1];
  p_output1[34]=t3397 + t3417 - 0.142641*t3428 - 0.159023*t3438 - 0.009515*t3373*t523 + var1[1];
  p_output1[35]=t3397 + t3417 - 0.139885*t3428 - 0.159408*t3438 - 0.005436*t3373*t523 + var1[1];
  p_output1[36]=t3397 + t3417 - 0.138356*t3428 - 0.158904*t3438 - 0.000768*t3373*t523 + var1[1];
  p_output1[37]=t3397 + t3417 - 0.138221*t3428 - 0.157567*t3438 + 0.003984*t3373*t523 + var1[1];
  p_output1[38]=t3397 + t3417 - 0.139492*t3428 - 0.15554*t3438 + 0.008303*t3373*t523 + var1[1];
  p_output1[39]=t3444;
  p_output1[40]=t3771;
  p_output1[41]=t3718 + t3732 - 0.14557*t3739 - 0.150351*t3764 - 0.013873*t3390*t523 + var1[2];
  p_output1[42]=t3718 + t3732 - 0.149717*t3739 - 0.147749*t3764 - 0.014519*t3390*t523 + var1[2];
  p_output1[43]=t3718 + t3732 - 0.154026*t3739 - 0.145523*t3764 - 0.013592*t3390*t523 + var1[2];
  p_output1[44]=t3718 + t3732 - 0.15803*t3739 - 0.143913*t3764 - 0.011192*t3390*t523 + var1[2];
  p_output1[45]=t3718 + t3732 - 0.161294*t3739 - 0.143094*t3764 - 0.007579*t3390*t523 + var1[2];
  p_output1[46]=t3718 + t3732 - 0.163466*t3739 - 0.143154*t3764 - 0.003145*t3390*t523 + var1[2];
  p_output1[47]=t3718 + t3732 - 0.16431*t3739 - 0.144088*t3764 + 0.00163*t3390*t523 + var1[2];
  p_output1[48]=t3718 + t3732 - 0.163734*t3739 - 0.145793*t3764 + 0.006228*t3390*t523 + var1[2];
  p_output1[49]=t3718 + t3732 - 0.161801*t3739 - 0.148085*t3764 + 0.010152*t3390*t523 + var1[2];
  p_output1[50]=t3718 + t3732 - 0.158721*t3739 - 0.150716*t3764 + 0.012975*t3390*t523 + var1[2];
  p_output1[51]=t3718 + t3732 - 0.154826*t3739 - 0.1534*t3764 + 0.014392*t3390*t523 + var1[2];
  p_output1[52]=t3718 + t3732 - 0.150539*t3739 - 0.155847*t3764 + 0.01425*t3390*t523 + var1[2];
  p_output1[53]=t3718 + t3732 - 0.146326*t3739 - 0.157791*t3764 + 0.012563*t3390*t523 + var1[2];
  p_output1[54]=t3718 + t3732 - 0.142641*t3739 - 0.159023*t3764 + 0.009515*t3390*t523 + var1[2];
  p_output1[55]=t3718 + t3732 - 0.139885*t3739 - 0.159408*t3764 + 0.005436*t3390*t523 + var1[2];
  p_output1[56]=t3718 + t3732 - 0.138356*t3739 - 0.158904*t3764 + 0.000768*t3390*t523 + var1[2];
  p_output1[57]=t3718 + t3732 - 0.138221*t3739 - 0.157567*t3764 - 0.003984*t3390*t523 + var1[2];
  p_output1[58]=t3718 + t3732 - 0.139492*t3739 - 0.15554*t3764 - 0.008303*t3390*t523 + var1[2];
  p_output1[59]=t3771;
  p_output1[60]=t3963;
  p_output1[61]=t1293 - 0.052623*t1380 + t1919 - 0.221071*t1952 - 0.28035*t2022 + var1[0];
  p_output1[62]=t1293 - 0.053269*t1380 + t1919 - 0.225218*t1952 - 0.277749*t2022 + var1[0];
  p_output1[63]=t1293 - 0.052342*t1380 + t1919 - 0.229527*t1952 - 0.275523*t2022 + var1[0];
  p_output1[64]=t1293 - 0.049942*t1380 + t1919 - 0.233531*t1952 - 0.273913*t2022 + var1[0];
  p_output1[65]=t1293 - 0.046329*t1380 + t1919 - 0.236795*t1952 - 0.273094*t2022 + var1[0];
  p_output1[66]=t1293 - 0.041895*t1380 + t1919 - 0.238967*t1952 - 0.273154*t2022 + var1[0];
  p_output1[67]=t1293 - 0.03712*t1380 + t1919 - 0.239811*t1952 - 0.274087*t2022 + var1[0];
  p_output1[68]=t1293 - 0.032522*t1380 + t1919 - 0.239235*t1952 - 0.275792*t2022 + var1[0];
  p_output1[69]=t1293 - 0.028598*t1380 + t1919 - 0.237302*t1952 - 0.278084*t2022 + var1[0];
  p_output1[70]=t1293 - 0.025775*t1380 + t1919 - 0.234222*t1952 - 0.280715*t2022 + var1[0];
  p_output1[71]=t1293 - 0.024358*t1380 + t1919 - 0.230327*t1952 - 0.283399*t2022 + var1[0];
  p_output1[72]=t1293 - 0.0245*t1380 + t1919 - 0.22604*t1952 - 0.285846*t2022 + var1[0];
  p_output1[73]=t1293 - 0.026187*t1380 + t1919 - 0.221827*t1952 - 0.287791*t2022 + var1[0];
  p_output1[74]=t1293 - 0.029235*t1380 + t1919 - 0.218142*t1952 - 0.289022*t2022 + var1[0];
  p_output1[75]=t1293 - 0.033314*t1380 + t1919 - 0.215386*t1952 - 0.289407*t2022 + var1[0];
  p_output1[76]=t1293 - 0.037982*t1380 + t1919 - 0.213857*t1952 - 0.288903*t2022 + var1[0];
  p_output1[77]=t1293 - 0.042734*t1380 + t1919 - 0.213721*t1952 - 0.287566*t2022 + var1[0];
  p_output1[78]=t1293 - 0.047053*t1380 + t1919 - 0.214993*t1952 - 0.28554*t2022 + var1[0];
  p_output1[79]=t3963;
  p_output1[80]=t4129;
  p_output1[81]=t3397 + t3417 - 0.221071*t3428 - 0.28035*t3438 + 0.052623*t3373*t523 + var1[1];
  p_output1[82]=t3397 + t3417 - 0.225218*t3428 - 0.277749*t3438 + 0.053269*t3373*t523 + var1[1];
  p_output1[83]=t3397 + t3417 - 0.229527*t3428 - 0.275523*t3438 + 0.052342*t3373*t523 + var1[1];
  p_output1[84]=t3397 + t3417 - 0.233531*t3428 - 0.273913*t3438 + 0.049942*t3373*t523 + var1[1];
  p_output1[85]=t3397 + t3417 - 0.236795*t3428 - 0.273094*t3438 + 0.046329*t3373*t523 + var1[1];
  p_output1[86]=t3397 + t3417 - 0.238967*t3428 - 0.273154*t3438 + 0.041895*t3373*t523 + var1[1];
  p_output1[87]=t3397 + t3417 - 0.239811*t3428 - 0.274087*t3438 + 0.03712*t3373*t523 + var1[1];
  p_output1[88]=t3397 + t3417 - 0.239235*t3428 - 0.275792*t3438 + 0.032522*t3373*t523 + var1[1];
  p_output1[89]=t3397 + t3417 - 0.237302*t3428 - 0.278084*t3438 + 0.028598*t3373*t523 + var1[1];
  p_output1[90]=t3397 + t3417 - 0.234222*t3428 - 0.280715*t3438 + 0.025775*t3373*t523 + var1[1];
  p_output1[91]=t3397 + t3417 - 0.230327*t3428 - 0.283399*t3438 + 0.024358*t3373*t523 + var1[1];
  p_output1[92]=t3397 + t3417 - 0.22604*t3428 - 0.285846*t3438 + 0.0245*t3373*t523 + var1[1];
  p_output1[93]=t3397 + t3417 - 0.221827*t3428 - 0.287791*t3438 + 0.026187*t3373*t523 + var1[1];
  p_output1[94]=t3397 + t3417 - 0.218142*t3428 - 0.289022*t3438 + 0.029235*t3373*t523 + var1[1];
  p_output1[95]=t3397 + t3417 - 0.215386*t3428 - 0.289407*t3438 + 0.033314*t3373*t523 + var1[1];
  p_output1[96]=t3397 + t3417 - 0.213857*t3428 - 0.288903*t3438 + 0.037982*t3373*t523 + var1[1];
  p_output1[97]=t3397 + t3417 - 0.213721*t3428 - 0.287566*t3438 + 0.042734*t3373*t523 + var1[1];
  p_output1[98]=t3397 + t3417 - 0.214993*t3428 - 0.28554*t3438 + 0.047053*t3373*t523 + var1[1];
  p_output1[99]=t4129;
  p_output1[100]=t4269;
  p_output1[101]=t3718 + t3732 - 0.221071*t3739 - 0.28035*t3764 - 0.052623*t3390*t523 + var1[2];
  p_output1[102]=t3718 + t3732 - 0.225218*t3739 - 0.277749*t3764 - 0.053269*t3390*t523 + var1[2];
  p_output1[103]=t3718 + t3732 - 0.229527*t3739 - 0.275523*t3764 - 0.052342*t3390*t523 + var1[2];
  p_output1[104]=t3718 + t3732 - 0.233531*t3739 - 0.273913*t3764 - 0.049942*t3390*t523 + var1[2];
  p_output1[105]=t3718 + t3732 - 0.236795*t3739 - 0.273094*t3764 - 0.046329*t3390*t523 + var1[2];
  p_output1[106]=t3718 + t3732 - 0.238967*t3739 - 0.273154*t3764 - 0.041895*t3390*t523 + var1[2];
  p_output1[107]=t3718 + t3732 - 0.239811*t3739 - 0.274087*t3764 - 0.03712*t3390*t523 + var1[2];
  p_output1[108]=t3718 + t3732 - 0.239235*t3739 - 0.275792*t3764 - 0.032522*t3390*t523 + var1[2];
  p_output1[109]=t3718 + t3732 - 0.237302*t3739 - 0.278084*t3764 - 0.028598*t3390*t523 + var1[2];
  p_output1[110]=t3718 + t3732 - 0.234222*t3739 - 0.280715*t3764 - 0.025775*t3390*t523 + var1[2];
  p_output1[111]=t3718 + t3732 - 0.230327*t3739 - 0.283399*t3764 - 0.024358*t3390*t523 + var1[2];
  p_output1[112]=t3718 + t3732 - 0.22604*t3739 - 0.285846*t3764 - 0.0245*t3390*t523 + var1[2];
  p_output1[113]=t3718 + t3732 - 0.221827*t3739 - 0.287791*t3764 - 0.026187*t3390*t523 + var1[2];
  p_output1[114]=t3718 + t3732 - 0.218142*t3739 - 0.289022*t3764 - 0.029235*t3390*t523 + var1[2];
  p_output1[115]=t3718 + t3732 - 0.215386*t3739 - 0.289407*t3764 - 0.033314*t3390*t523 + var1[2];
  p_output1[116]=t3718 + t3732 - 0.213857*t3739 - 0.288903*t3764 - 0.037982*t3390*t523 + var1[2];
  p_output1[117]=t3718 + t3732 - 0.213721*t3739 - 0.287566*t3764 - 0.042734*t3390*t523 + var1[2];
  p_output1[118]=t3718 + t3732 - 0.214993*t3739 - 0.28554*t3764 - 0.047053*t3390*t523 + var1[2];
  p_output1[119]=t4269;
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
