/*
 * Automatically Generated from Mathematica.
 * Fri 13 May 2022 14:24:48 GMT+02:00
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
  double t924;
  double t988;
  double t1066;
  double t1362;
  double t1417;
  double t1420;
  double t964;
  double t1567;
  double t1535;
  double t1559;
  double t1599;
  double t1652;
  double t1653;
  double t1658;
  double t1416;
  double t1469;
  double t1508;
  double t1563;
  double t1564;
  double t1566;
  double t1574;
  double t1579;
  double t1583;
  double t1587;
  double t1606;
  double t1632;
  double t1665;
  double t1685;
  double t1761;
  double t1767;
  double t1955;
  double t2023;
  double t2038;
  double t1595;
  double t1768;
  double t2136;
  double t2214;
  double t3536;
  double t3553;
  double t3552;
  double t3556;
  double t3564;
  double t3582;
  double t3586;
  double t3587;
  double t3608;
  double t3619;
  double t3622;
  double t3544;
  double t3574;
  double t3590;
  double t3593;
  double t3595;
  double t3596;
  double t3623;
  double t3624;
  double t3633;
  double t3658;
  double t3677;
  double t3680;
  double t3681;
  double t3597;
  double t3672;
  double t3682;
  double t3692;
  double t4472;
  double t4505;
  double t4609;
  double t4692;
  double t4824;
  double t4943;
  double t5227;
  double t5254;
  double t5264;
  double t4465;
  double t4661;
  double t5044;
  double t5130;
  double t5182;
  double t5191;
  double t5316;
  double t5335;
  double t5343;
  double t5344;
  double t5366;
  double t5371;
  double t5378;
  double t5200;
  double t5360;
  double t5381;
  double t5387;
  double t2235;
  double t2292;
  double t2328;
  double t2430;
  double t2479;
  double t2651;
  double t2764;
  double t2976;
  double t3046;
  double t3110;
  double t3158;
  double t3215;
  double t3293;
  double t3386;
  double t3411;
  double t3459;
  double t3481;
  double t3511;
  double t5611;
  double t5612;
  double t5613;
  double t3698;
  double t3709;
  double t3733;
  double t3742;
  double t3754;
  double t3760;
  double t3770;
  double t3788;
  double t3827;
  double t3834;
  double t3849;
  double t3875;
  double t3885;
  double t3911;
  double t3933;
  double t4201;
  double t4333;
  double t4408;
  double t5674;
  double t5675;
  double t5676;
  double t5439;
  double t5466;
  double t5487;
  double t5502;
  double t5513;
  double t5521;
  double t5530;
  double t5543;
  double t5555;
  double t5563;
  double t5577;
  double t5583;
  double t5587;
  double t5591;
  double t5596;
  double t5600;
  double t5605;
  double t5609;
  double t5737;
  double t5738;
  double t5739;
  t924 = Cos(var1[4]);
  t988 = Cos(var1[12]);
  t1066 = -1.*t988;
  t1362 = 1. + t1066;
  t1417 = Sin(var1[12]);
  t1420 = -0.15121*t1417;
  t964 = Cos(var1[5]);
  t1567 = Sin(var1[5]);
  t1535 = Sin(var1[13]);
  t1559 = Sin(var1[4]);
  t1599 = Cos(var1[13]);
  t1652 = t988*t924*t964;
  t1653 = -1.*t924*t1417*t1567;
  t1658 = t1652 + t1653;
  t1416 = 0.15121*t1362;
  t1469 = t1416 + t1420;
  t1508 = t924*t964*t1469;
  t1563 = 0.28121*t1535*t1559;
  t1564 = -0.15121*t1362;
  t1566 = t1564 + t1420;
  t1574 = -1.*t924*t1566*t1567;
  t1579 = -1.*t924*t964*t1417;
  t1583 = -1.*t988*t924*t1567;
  t1587 = t1579 + t1583;
  t1606 = -1.*t1599;
  t1632 = 1. + t1606;
  t1665 = 0.28121*t1632*t1658;
  t1685 = -1.*t1535*t1559;
  t1761 = t1599*t1658;
  t1767 = t1685 + t1761;
  t1955 = t1599*t1559;
  t2023 = t1535*t1658;
  t2038 = t1955 + t2023;
  t1595 = -0.193878*t1587;
  t1768 = 0.282922*t1767;
  t2136 = -0.007848*t2038;
  t2214 = var1[0] + t1508 + t1563 + t1574 + t1595 + t1665 + t1768 + t2136;
  t3536 = Sin(var1[3]);
  t3553 = Cos(var1[3]);
  t3552 = t964*t3536*t1559;
  t3556 = t3553*t1567;
  t3564 = t3552 + t3556;
  t3582 = t3553*t964;
  t3586 = -1.*t3536*t1559*t1567;
  t3587 = t3582 + t3586;
  t3608 = t988*t3564;
  t3619 = t1417*t3587;
  t3622 = t3608 + t3619;
  t3544 = -0.28121*t924*t1535*t3536;
  t3574 = t1469*t3564;
  t3590 = t1566*t3587;
  t3593 = -1.*t1417*t3564;
  t3595 = t988*t3587;
  t3596 = t3593 + t3595;
  t3623 = 0.28121*t1632*t3622;
  t3624 = t924*t1535*t3536;
  t3633 = t1599*t3622;
  t3658 = t3624 + t3633;
  t3677 = -1.*t1599*t924*t3536;
  t3680 = t1535*t3622;
  t3681 = t3677 + t3680;
  t3597 = -0.193878*t3596;
  t3672 = 0.282922*t3658;
  t3682 = -0.007848*t3681;
  t3692 = var1[1] + t3544 + t3574 + t3590 + t3597 + t3623 + t3672 + t3682;
  t4472 = -1.*t3553*t964*t1559;
  t4505 = t3536*t1567;
  t4609 = t4472 + t4505;
  t4692 = t964*t3536;
  t4824 = t3553*t1559*t1567;
  t4943 = t4692 + t4824;
  t5227 = t988*t4609;
  t5254 = t1417*t4943;
  t5264 = t5227 + t5254;
  t4465 = 0.28121*t3553*t924*t1535;
  t4661 = t1469*t4609;
  t5044 = t1566*t4943;
  t5130 = -1.*t1417*t4609;
  t5182 = t988*t4943;
  t5191 = t5130 + t5182;
  t5316 = 0.28121*t1632*t5264;
  t5335 = -1.*t3553*t924*t1535;
  t5343 = t1599*t5264;
  t5344 = t5335 + t5343;
  t5366 = t1599*t3553*t924;
  t5371 = t1535*t5264;
  t5378 = t5366 + t5371;
  t5200 = -0.193878*t5191;
  t5360 = 0.282922*t5344;
  t5381 = -0.007848*t5378;
  t5387 = var1[2] + t4465 + t4661 + t5044 + t5200 + t5316 + t5360 + t5381;
  t2235 = -0.011573*t2038;
  t2292 = -0.014045*t2038;
  t2328 = -0.014994*t2038;
  t2430 = -0.014319*t2038;
  t2479 = -0.012092*t2038;
  t2651 = -0.008554*t2038;
  t2764 = -0.00409*t2038;
  t2976 = 0.000818*t2038;
  t3046 = 0.005637*t2038;
  t3110 = 0.009845*t2038;
  t3158 = 0.012986*t2038;
  t3215 = 0.01472*t2038;
  t3293 = 0.014859*t2038;
  t3386 = 0.013388*t2038;
  t3411 = 0.010466*t2038;
  t3459 = 0.00641*t2038;
  t3481 = 0.001659*t2038;
  t3511 = -0.003272*t2038;
  t5611 = -0.163878*t1587;
  t5612 = 0.504922*t1767;
  t5613 = var1[0] + t1508 + t1563 + t1574 + t5611 + t1665 + t5612 + t2136;
  t3698 = -0.011573*t3681;
  t3709 = -0.014045*t3681;
  t3733 = -0.014994*t3681;
  t3742 = -0.014319*t3681;
  t3754 = -0.012092*t3681;
  t3760 = -0.008554*t3681;
  t3770 = -0.00409*t3681;
  t3788 = 0.000818*t3681;
  t3827 = 0.005637*t3681;
  t3834 = 0.009845*t3681;
  t3849 = 0.012986*t3681;
  t3875 = 0.01472*t3681;
  t3885 = 0.014859*t3681;
  t3911 = 0.013388*t3681;
  t3933 = 0.010466*t3681;
  t4201 = 0.00641*t3681;
  t4333 = 0.001659*t3681;
  t4408 = -0.003272*t3681;
  t5674 = -0.163878*t3596;
  t5675 = 0.504922*t3658;
  t5676 = var1[1] + t3544 + t3574 + t3590 + t5674 + t3623 + t5675 + t3682;
  t5439 = -0.011573*t5378;
  t5466 = -0.014045*t5378;
  t5487 = -0.014994*t5378;
  t5502 = -0.014319*t5378;
  t5513 = -0.012092*t5378;
  t5521 = -0.008554*t5378;
  t5530 = -0.00409*t5378;
  t5543 = 0.000818*t5378;
  t5555 = 0.005637*t5378;
  t5563 = 0.009845*t5378;
  t5577 = 0.012986*t5378;
  t5583 = 0.01472*t5378;
  t5587 = 0.014859*t5378;
  t5591 = 0.013388*t5378;
  t5596 = 0.010466*t5378;
  t5600 = 0.00641*t5378;
  t5605 = 0.001659*t5378;
  t5609 = -0.003272*t5378;
  t5737 = -0.163878*t5191;
  t5738 = 0.504922*t5344;
  t5739 = var1[2] + t4465 + t4661 + t5044 + t5737 + t5316 + t5738 + t5381;
  p_output1[0]=t2214;
  p_output1[1]=t1508 + t1563 + t1574 - 0.190667*t1587 + t1665 + 0.282488*t1767 + t2235 + var1[0];
  p_output1[2]=t1508 + t1563 + t1574 - 0.18643*t1587 + t1665 + 0.281915*t1767 + t2292 + var1[0];
  p_output1[3]=t1508 + t1563 + t1574 - 0.181628*t1587 + t1665 + 0.281267*t1767 + t2328 + var1[0];
  p_output1[4]=t1508 + t1563 + t1574 - 0.176781*t1587 + t1665 + 0.280611*t1767 + t2430 + var1[0];
  p_output1[5]=t1508 + t1563 + t1574 - 0.172413*t1587 + t1665 + 0.280021*t1767 + t2479 + var1[0];
  p_output1[6]=t1508 + t1563 + t1574 - 0.168999*t1587 + t1665 + 0.27956*t1767 + t2651 + var1[0];
  p_output1[7]=t1508 + t1563 + t1574 - 0.166908*t1587 + t1665 + 0.279277*t1767 + t2764 + var1[0];
  p_output1[8]=t1508 + t1563 + t1574 - 0.166367*t1587 + t1665 + 0.279204*t1767 + t2976 + var1[0];
  p_output1[9]=t1508 + t1563 + t1574 - 0.167435*t1587 + t1665 + 0.279348*t1767 + t3046 + var1[0];
  p_output1[10]=t1508 + t1563 + t1574 - 0.169995*t1587 + t1665 + 0.279694*t1767 + t3110 + var1[0];
  p_output1[11]=t1508 + t1563 + t1574 - 0.17377*t1587 + t1665 + 0.280205*t1767 + t3158 + var1[0];
  p_output1[12]=t1508 + t1563 + t1574 - 0.178352*t1587 + t1665 + 0.280824*t1767 + t3215 + var1[0];
  p_output1[13]=t1508 + t1563 + t1574 - 0.183243*t1587 + t1665 + 0.281485*t1767 + t3293 + var1[0];
  p_output1[14]=t1508 + t1563 + t1574 - 0.187914*t1587 + t1665 + 0.282116*t1767 + t3386 + var1[0];
  p_output1[15]=t1508 + t1563 + t1574 - 0.191859*t1587 + t1665 + 0.282649*t1767 + t3411 + var1[0];
  p_output1[16]=t1508 + t1563 + t1574 - 0.194649*t1587 + t1665 + 0.283026*t1767 + t3459 + var1[0];
  p_output1[17]=t1508 + t1563 + t1574 - 0.195984*t1587 + t1665 + 0.283206*t1767 + t3481 + var1[0];
  p_output1[18]=t1508 + t1563 + t1574 - 0.195717*t1587 + t1665 + 0.28317*t1767 + t3511 + var1[0];
  p_output1[19]=t2214;
  p_output1[20]=t3692;
  p_output1[21]=t3544 + t3574 + t3590 - 0.190667*t3596 + t3623 + 0.282488*t3658 + t3698 + var1[1];
  p_output1[22]=t3544 + t3574 + t3590 - 0.18643*t3596 + t3623 + 0.281915*t3658 + t3709 + var1[1];
  p_output1[23]=t3544 + t3574 + t3590 - 0.181628*t3596 + t3623 + 0.281267*t3658 + t3733 + var1[1];
  p_output1[24]=t3544 + t3574 + t3590 - 0.176781*t3596 + t3623 + 0.280611*t3658 + t3742 + var1[1];
  p_output1[25]=t3544 + t3574 + t3590 - 0.172413*t3596 + t3623 + 0.280021*t3658 + t3754 + var1[1];
  p_output1[26]=t3544 + t3574 + t3590 - 0.168999*t3596 + t3623 + 0.27956*t3658 + t3760 + var1[1];
  p_output1[27]=t3544 + t3574 + t3590 - 0.166908*t3596 + t3623 + 0.279277*t3658 + t3770 + var1[1];
  p_output1[28]=t3544 + t3574 + t3590 - 0.166367*t3596 + t3623 + 0.279204*t3658 + t3788 + var1[1];
  p_output1[29]=t3544 + t3574 + t3590 - 0.167435*t3596 + t3623 + 0.279348*t3658 + t3827 + var1[1];
  p_output1[30]=t3544 + t3574 + t3590 - 0.169995*t3596 + t3623 + 0.279694*t3658 + t3834 + var1[1];
  p_output1[31]=t3544 + t3574 + t3590 - 0.17377*t3596 + t3623 + 0.280205*t3658 + t3849 + var1[1];
  p_output1[32]=t3544 + t3574 + t3590 - 0.178352*t3596 + t3623 + 0.280824*t3658 + t3875 + var1[1];
  p_output1[33]=t3544 + t3574 + t3590 - 0.183243*t3596 + t3623 + 0.281485*t3658 + t3885 + var1[1];
  p_output1[34]=t3544 + t3574 + t3590 - 0.187914*t3596 + t3623 + 0.282116*t3658 + t3911 + var1[1];
  p_output1[35]=t3544 + t3574 + t3590 - 0.191859*t3596 + t3623 + 0.282649*t3658 + t3933 + var1[1];
  p_output1[36]=t3544 + t3574 + t3590 - 0.194649*t3596 + t3623 + 0.283026*t3658 + t4201 + var1[1];
  p_output1[37]=t3544 + t3574 + t3590 - 0.195984*t3596 + t3623 + 0.283206*t3658 + t4333 + var1[1];
  p_output1[38]=t3544 + t3574 + t3590 - 0.195717*t3596 + t3623 + 0.28317*t3658 + t4408 + var1[1];
  p_output1[39]=t3692;
  p_output1[40]=t5387;
  p_output1[41]=t4465 + t4661 + t5044 - 0.190667*t5191 + t5316 + 0.282488*t5344 + t5439 + var1[2];
  p_output1[42]=t4465 + t4661 + t5044 - 0.18643*t5191 + t5316 + 0.281915*t5344 + t5466 + var1[2];
  p_output1[43]=t4465 + t4661 + t5044 - 0.181628*t5191 + t5316 + 0.281267*t5344 + t5487 + var1[2];
  p_output1[44]=t4465 + t4661 + t5044 - 0.176781*t5191 + t5316 + 0.280611*t5344 + t5502 + var1[2];
  p_output1[45]=t4465 + t4661 + t5044 - 0.172413*t5191 + t5316 + 0.280021*t5344 + t5513 + var1[2];
  p_output1[46]=t4465 + t4661 + t5044 - 0.168999*t5191 + t5316 + 0.27956*t5344 + t5521 + var1[2];
  p_output1[47]=t4465 + t4661 + t5044 - 0.166908*t5191 + t5316 + 0.279277*t5344 + t5530 + var1[2];
  p_output1[48]=t4465 + t4661 + t5044 - 0.166367*t5191 + t5316 + 0.279204*t5344 + t5543 + var1[2];
  p_output1[49]=t4465 + t4661 + t5044 - 0.167435*t5191 + t5316 + 0.279348*t5344 + t5555 + var1[2];
  p_output1[50]=t4465 + t4661 + t5044 - 0.169995*t5191 + t5316 + 0.279694*t5344 + t5563 + var1[2];
  p_output1[51]=t4465 + t4661 + t5044 - 0.17377*t5191 + t5316 + 0.280205*t5344 + t5577 + var1[2];
  p_output1[52]=t4465 + t4661 + t5044 - 0.178352*t5191 + t5316 + 0.280824*t5344 + t5583 + var1[2];
  p_output1[53]=t4465 + t4661 + t5044 - 0.183243*t5191 + t5316 + 0.281485*t5344 + t5587 + var1[2];
  p_output1[54]=t4465 + t4661 + t5044 - 0.187914*t5191 + t5316 + 0.282116*t5344 + t5591 + var1[2];
  p_output1[55]=t4465 + t4661 + t5044 - 0.191859*t5191 + t5316 + 0.282649*t5344 + t5596 + var1[2];
  p_output1[56]=t4465 + t4661 + t5044 - 0.194649*t5191 + t5316 + 0.283026*t5344 + t5600 + var1[2];
  p_output1[57]=t4465 + t4661 + t5044 - 0.195984*t5191 + t5316 + 0.283206*t5344 + t5605 + var1[2];
  p_output1[58]=t4465 + t4661 + t5044 - 0.195717*t5191 + t5316 + 0.28317*t5344 + t5609 + var1[2];
  p_output1[59]=t5387;
  p_output1[60]=t5613;
  p_output1[61]=t1508 + t1563 + t1574 - 0.160667*t1587 + t1665 + 0.504488*t1767 + t2235 + var1[0];
  p_output1[62]=t1508 + t1563 + t1574 - 0.15643*t1587 + t1665 + 0.503915*t1767 + t2292 + var1[0];
  p_output1[63]=t1508 + t1563 + t1574 - 0.151628*t1587 + t1665 + 0.503267*t1767 + t2328 + var1[0];
  p_output1[64]=t1508 + t1563 + t1574 - 0.146781*t1587 + t1665 + 0.502611*t1767 + t2430 + var1[0];
  p_output1[65]=t1508 + t1563 + t1574 - 0.142413*t1587 + t1665 + 0.502021*t1767 + t2479 + var1[0];
  p_output1[66]=t1508 + t1563 + t1574 - 0.138999*t1587 + t1665 + 0.50156*t1767 + t2651 + var1[0];
  p_output1[67]=t1508 + t1563 + t1574 - 0.136908*t1587 + t1665 + 0.501277*t1767 + t2764 + var1[0];
  p_output1[68]=t1508 + t1563 + t1574 - 0.136367*t1587 + t1665 + 0.501204*t1767 + t2976 + var1[0];
  p_output1[69]=t1508 + t1563 + t1574 - 0.137435*t1587 + t1665 + 0.501348*t1767 + t3046 + var1[0];
  p_output1[70]=t1508 + t1563 + t1574 - 0.139995*t1587 + t1665 + 0.501694*t1767 + t3110 + var1[0];
  p_output1[71]=t1508 + t1563 + t1574 - 0.14377*t1587 + t1665 + 0.502205*t1767 + t3158 + var1[0];
  p_output1[72]=t1508 + t1563 + t1574 - 0.148352*t1587 + t1665 + 0.502824*t1767 + t3215 + var1[0];
  p_output1[73]=t1508 + t1563 + t1574 - 0.153243*t1587 + t1665 + 0.503485*t1767 + t3293 + var1[0];
  p_output1[74]=t1508 + t1563 + t1574 - 0.157914*t1587 + t1665 + 0.504116*t1767 + t3386 + var1[0];
  p_output1[75]=t1508 + t1563 + t1574 - 0.161859*t1587 + t1665 + 0.504649*t1767 + t3411 + var1[0];
  p_output1[76]=t1508 + t1563 + t1574 - 0.164649*t1587 + t1665 + 0.505026*t1767 + t3459 + var1[0];
  p_output1[77]=t1508 + t1563 + t1574 - 0.165984*t1587 + t1665 + 0.505206*t1767 + t3481 + var1[0];
  p_output1[78]=t1508 + t1563 + t1574 - 0.165717*t1587 + t1665 + 0.50517*t1767 + t3511 + var1[0];
  p_output1[79]=t5613;
  p_output1[80]=t5676;
  p_output1[81]=t3544 + t3574 + t3590 - 0.160667*t3596 + t3623 + 0.504488*t3658 + t3698 + var1[1];
  p_output1[82]=t3544 + t3574 + t3590 - 0.15643*t3596 + t3623 + 0.503915*t3658 + t3709 + var1[1];
  p_output1[83]=t3544 + t3574 + t3590 - 0.151628*t3596 + t3623 + 0.503267*t3658 + t3733 + var1[1];
  p_output1[84]=t3544 + t3574 + t3590 - 0.146781*t3596 + t3623 + 0.502611*t3658 + t3742 + var1[1];
  p_output1[85]=t3544 + t3574 + t3590 - 0.142413*t3596 + t3623 + 0.502021*t3658 + t3754 + var1[1];
  p_output1[86]=t3544 + t3574 + t3590 - 0.138999*t3596 + t3623 + 0.50156*t3658 + t3760 + var1[1];
  p_output1[87]=t3544 + t3574 + t3590 - 0.136908*t3596 + t3623 + 0.501277*t3658 + t3770 + var1[1];
  p_output1[88]=t3544 + t3574 + t3590 - 0.136367*t3596 + t3623 + 0.501204*t3658 + t3788 + var1[1];
  p_output1[89]=t3544 + t3574 + t3590 - 0.137435*t3596 + t3623 + 0.501348*t3658 + t3827 + var1[1];
  p_output1[90]=t3544 + t3574 + t3590 - 0.139995*t3596 + t3623 + 0.501694*t3658 + t3834 + var1[1];
  p_output1[91]=t3544 + t3574 + t3590 - 0.14377*t3596 + t3623 + 0.502205*t3658 + t3849 + var1[1];
  p_output1[92]=t3544 + t3574 + t3590 - 0.148352*t3596 + t3623 + 0.502824*t3658 + t3875 + var1[1];
  p_output1[93]=t3544 + t3574 + t3590 - 0.153243*t3596 + t3623 + 0.503485*t3658 + t3885 + var1[1];
  p_output1[94]=t3544 + t3574 + t3590 - 0.157914*t3596 + t3623 + 0.504116*t3658 + t3911 + var1[1];
  p_output1[95]=t3544 + t3574 + t3590 - 0.161859*t3596 + t3623 + 0.504649*t3658 + t3933 + var1[1];
  p_output1[96]=t3544 + t3574 + t3590 - 0.164649*t3596 + t3623 + 0.505026*t3658 + t4201 + var1[1];
  p_output1[97]=t3544 + t3574 + t3590 - 0.165984*t3596 + t3623 + 0.505206*t3658 + t4333 + var1[1];
  p_output1[98]=t3544 + t3574 + t3590 - 0.165717*t3596 + t3623 + 0.50517*t3658 + t4408 + var1[1];
  p_output1[99]=t5676;
  p_output1[100]=t5739;
  p_output1[101]=t4465 + t4661 + t5044 - 0.160667*t5191 + t5316 + 0.504488*t5344 + t5439 + var1[2];
  p_output1[102]=t4465 + t4661 + t5044 - 0.15643*t5191 + t5316 + 0.503915*t5344 + t5466 + var1[2];
  p_output1[103]=t4465 + t4661 + t5044 - 0.151628*t5191 + t5316 + 0.503267*t5344 + t5487 + var1[2];
  p_output1[104]=t4465 + t4661 + t5044 - 0.146781*t5191 + t5316 + 0.502611*t5344 + t5502 + var1[2];
  p_output1[105]=t4465 + t4661 + t5044 - 0.142413*t5191 + t5316 + 0.502021*t5344 + t5513 + var1[2];
  p_output1[106]=t4465 + t4661 + t5044 - 0.138999*t5191 + t5316 + 0.50156*t5344 + t5521 + var1[2];
  p_output1[107]=t4465 + t4661 + t5044 - 0.136908*t5191 + t5316 + 0.501277*t5344 + t5530 + var1[2];
  p_output1[108]=t4465 + t4661 + t5044 - 0.136367*t5191 + t5316 + 0.501204*t5344 + t5543 + var1[2];
  p_output1[109]=t4465 + t4661 + t5044 - 0.137435*t5191 + t5316 + 0.501348*t5344 + t5555 + var1[2];
  p_output1[110]=t4465 + t4661 + t5044 - 0.139995*t5191 + t5316 + 0.501694*t5344 + t5563 + var1[2];
  p_output1[111]=t4465 + t4661 + t5044 - 0.14377*t5191 + t5316 + 0.502205*t5344 + t5577 + var1[2];
  p_output1[112]=t4465 + t4661 + t5044 - 0.148352*t5191 + t5316 + 0.502824*t5344 + t5583 + var1[2];
  p_output1[113]=t4465 + t4661 + t5044 - 0.153243*t5191 + t5316 + 0.503485*t5344 + t5587 + var1[2];
  p_output1[114]=t4465 + t4661 + t5044 - 0.157914*t5191 + t5316 + 0.504116*t5344 + t5591 + var1[2];
  p_output1[115]=t4465 + t4661 + t5044 - 0.161859*t5191 + t5316 + 0.504649*t5344 + t5596 + var1[2];
  p_output1[116]=t4465 + t4661 + t5044 - 0.164649*t5191 + t5316 + 0.505026*t5344 + t5600 + var1[2];
  p_output1[117]=t4465 + t4661 + t5044 - 0.165984*t5191 + t5316 + 0.505206*t5344 + t5605 + var1[2];
  p_output1[118]=t4465 + t4661 + t5044 - 0.165717*t5191 + t5316 + 0.50517*t5344 + t5609 + var1[2];
  p_output1[119]=t5739;
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

#include "Link_upper2_to_5_bar.hh"

namespace SymFunction
{

void Link_upper2_to_5_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
