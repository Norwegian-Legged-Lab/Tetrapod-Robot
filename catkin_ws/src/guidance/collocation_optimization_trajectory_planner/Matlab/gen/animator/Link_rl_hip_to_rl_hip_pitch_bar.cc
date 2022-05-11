/*
 * Automatically Generated from Mathematica.
 * Fri 4 Feb 2022 15:52:01 GMT+01:00
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
  double t573;
  double t816;
  double t895;
  double t921;
  double t1112;
  double t1152;
  double t803;
  double t1712;
  double t944;
  double t1252;
  double t1284;
  double t1494;
  double t1680;
  double t1710;
  double t1720;
  double t1721;
  double t1730;
  double t1754;
  double t1791;
  double t1795;
  double t2027;
  double t1672;
  double t1773;
  double t2043;
  double t2096;
  double t2501;
  double t2533;
  double t2529;
  double t2537;
  double t2538;
  double t2540;
  double t2541;
  double t2614;
  double t2539;
  double t2736;
  double t2783;
  double t2785;
  double t2795;
  double t2797;
  double t2799;
  double t2800;
  double t2506;
  double t2796;
  double t2801;
  double t2803;
  double t4208;
  double t4224;
  double t4330;
  double t4597;
  double t4634;
  double t4699;
  double t4464;
  double t4714;
  double t4764;
  double t4873;
  double t4912;
  double t4930;
  double t4932;
  double t4978;
  double t4171;
  double t4929;
  double t4980;
  double t5141;
  double t6147;
  double t6148;
  double t6150;
  double t6152;
  double t6834;
  double t6836;
  double t6862;
  double t6863;
  double t7759;
  double t7760;
  double t7768;
  double t7770;
  t573 = Cos(var1[4]);
  t816 = Cos(var1[12]);
  t895 = -1.*t816;
  t921 = 1. + t895;
  t1112 = Sin(var1[12]);
  t1152 = 0.15121*t1112;
  t803 = Cos(var1[5]);
  t1712 = Sin(var1[5]);
  t944 = -0.15121*t921;
  t1252 = t944 + t1152;
  t1284 = t573*t803*t1252;
  t1494 = Sin(var1[4]);
  t1680 = 0.15121*t921;
  t1710 = t1680 + t1152;
  t1720 = -1.*t573*t1710*t1712;
  t1721 = -1.*t573*t803*t1112;
  t1730 = -1.*t816*t573*t1712;
  t1754 = t1721 + t1730;
  t1791 = t816*t573*t803;
  t1795 = -1.*t573*t1112*t1712;
  t2027 = t1791 + t1795;
  t1672 = -0.001576*t1494;
  t1773 = 0.163901*t1754;
  t2043 = -0.14337*t2027;
  t2096 = var1[0] + t1284 + t1672 + t1720 + t1773 + t2043;
  t2501 = Sin(var1[3]);
  t2533 = Cos(var1[3]);
  t2529 = t803*t2501*t1494;
  t2537 = t2533*t1712;
  t2538 = t2529 + t2537;
  t2540 = t2533*t803;
  t2541 = -1.*t2501*t1494*t1712;
  t2614 = t2540 + t2541;
  t2539 = t1252*t2538;
  t2736 = t1710*t2614;
  t2783 = -1.*t1112*t2538;
  t2785 = t816*t2614;
  t2795 = t2783 + t2785;
  t2797 = t816*t2538;
  t2799 = t1112*t2614;
  t2800 = t2797 + t2799;
  t2506 = 0.001576*t573*t2501;
  t2796 = 0.163901*t2795;
  t2801 = -0.14337*t2800;
  t2803 = var1[1] + t2506 + t2539 + t2736 + t2796 + t2801;
  t4208 = -1.*t2533*t803*t1494;
  t4224 = t2501*t1712;
  t4330 = t4208 + t4224;
  t4597 = t803*t2501;
  t4634 = t2533*t1494*t1712;
  t4699 = t4597 + t4634;
  t4464 = t1252*t4330;
  t4714 = t1710*t4699;
  t4764 = -1.*t1112*t4330;
  t4873 = t816*t4699;
  t4912 = t4764 + t4873;
  t4930 = t816*t4330;
  t4932 = t1112*t4699;
  t4978 = t4930 + t4932;
  t4171 = -0.001576*t2533*t573;
  t4929 = 0.163901*t4912;
  t4980 = -0.14337*t4978;
  t5141 = var1[2] + t4171 + t4464 + t4714 + t4929 + t4980;
  t6147 = -0.040326*t1494;
  t6148 = 0.2394*t1754;
  t6150 = -0.273371*t2027;
  t6152 = var1[0] + t1284 + t6147 + t1720 + t6148 + t6150;
  t6834 = 0.040326*t573*t2501;
  t6836 = 0.2394*t2795;
  t6862 = -0.273371*t2800;
  t6863 = var1[1] + t6834 + t2539 + t2736 + t6836 + t6862;
  t7759 = -0.040326*t2533*t573;
  t7760 = 0.2394*t4912;
  t7768 = -0.273371*t4978;
  t7770 = var1[2] + t7759 + t4464 + t4714 + t7760 + t7768;
  p_output1[0]=t2096;
  p_output1[1]=t1284 - 0.006179*t1494 + t1720 + 0.162149*t1754 - 0.143015*t2027 + var1[0];
  p_output1[2]=t1284 - 0.010112*t1494 + t1720 + 0.159212*t1754 - 0.143548*t2027 + var1[0];
  p_output1[3]=t1284 - 0.01295*t1494 + t1720 + 0.155408*t1754 - 0.144912*t2027 + var1[0];
  p_output1[4]=t1284 - 0.014384*t1494 + t1720 + 0.151149*t1754 - 0.146958*t2027 + var1[0];
  p_output1[5]=t1284 - 0.01426*t1494 + t1720 + 0.146897*t1754 - 0.149464*t2027 + var1[0];
  p_output1[6]=t1284 - 0.01259*t1494 + t1720 + 0.143112*t1754 - 0.15216*t2027 + var1[0];
  p_output1[7]=t1284 - 0.009556*t1494 + t1720 + 0.140204*t1754 - 0.154753*t2027 + var1[0];
  p_output1[8]=t1284 - 0.005487*t1494 + t1720 + 0.13849*t1754 - 0.156962*t2027 + var1[0];
  p_output1[9]=t1284 - 0.000823*t1494 + t1720 + 0.138153*t1754 - 0.158548*t2027 + var1[0];
  p_output1[10]=t1284 + 0.003931*t1494 + t1720 + 0.139232*t1754 - 0.159338*t2027 + var1[0];
  p_output1[11]=t1284 + 0.008258*t1494 + t1720 + 0.141608*t1754 - 0.159248*t2027 + var1[0];
  p_output1[12]=t1284 + 0.011691*t1494 + t1720 + 0.145025*t1754 - 0.158287*t2027 + var1[0];
  p_output1[13]=t1284 + 0.013856*t1494 + t1720 + 0.149112*t1754 - 0.156558*t2027 + var1[0];
  p_output1[14]=t1284 + 0.01452*t1494 + t1720 + 0.153427*t1754 - 0.154251*t2027 + var1[0];
  p_output1[15]=t1284 + 0.013611*t1494 + t1720 + 0.157501*t1754 - 0.151613*t2027 + var1[0];
  p_output1[16]=t1284 + 0.011227*t1494 + t1720 + 0.160894*t1754 - 0.148932*t2027 + var1[0];
  p_output1[17]=t1284 + 0.007626*t1494 + t1720 + 0.163237*t1754 - 0.146498*t2027 + var1[0];
  p_output1[18]=t1284 + 0.003198*t1494 + t1720 + 0.164277*t1754 - 0.144575*t2027 + var1[0];
  p_output1[19]=t2096;
  p_output1[20]=t2803;
  p_output1[21]=t2539 + t2736 + 0.162149*t2795 - 0.143015*t2800 + 0.006179*t2501*t573 + var1[1];
  p_output1[22]=t2539 + t2736 + 0.159212*t2795 - 0.143548*t2800 + 0.010112*t2501*t573 + var1[1];
  p_output1[23]=t2539 + t2736 + 0.155408*t2795 - 0.144912*t2800 + 0.01295*t2501*t573 + var1[1];
  p_output1[24]=t2539 + t2736 + 0.151149*t2795 - 0.146958*t2800 + 0.014384*t2501*t573 + var1[1];
  p_output1[25]=t2539 + t2736 + 0.146897*t2795 - 0.149464*t2800 + 0.01426*t2501*t573 + var1[1];
  p_output1[26]=t2539 + t2736 + 0.143112*t2795 - 0.15216*t2800 + 0.01259*t2501*t573 + var1[1];
  p_output1[27]=t2539 + t2736 + 0.140204*t2795 - 0.154753*t2800 + 0.009556*t2501*t573 + var1[1];
  p_output1[28]=t2539 + t2736 + 0.13849*t2795 - 0.156962*t2800 + 0.005487*t2501*t573 + var1[1];
  p_output1[29]=t2539 + t2736 + 0.138153*t2795 - 0.158548*t2800 + 0.000823*t2501*t573 + var1[1];
  p_output1[30]=t2539 + t2736 + 0.139232*t2795 - 0.159338*t2800 - 0.003931*t2501*t573 + var1[1];
  p_output1[31]=t2539 + t2736 + 0.141608*t2795 - 0.159248*t2800 - 0.008258*t2501*t573 + var1[1];
  p_output1[32]=t2539 + t2736 + 0.145025*t2795 - 0.158287*t2800 - 0.011691*t2501*t573 + var1[1];
  p_output1[33]=t2539 + t2736 + 0.149112*t2795 - 0.156558*t2800 - 0.013856*t2501*t573 + var1[1];
  p_output1[34]=t2539 + t2736 + 0.153427*t2795 - 0.154251*t2800 - 0.01452*t2501*t573 + var1[1];
  p_output1[35]=t2539 + t2736 + 0.157501*t2795 - 0.151613*t2800 - 0.013611*t2501*t573 + var1[1];
  p_output1[36]=t2539 + t2736 + 0.160894*t2795 - 0.148932*t2800 - 0.011227*t2501*t573 + var1[1];
  p_output1[37]=t2539 + t2736 + 0.163237*t2795 - 0.146498*t2800 - 0.007626*t2501*t573 + var1[1];
  p_output1[38]=t2539 + t2736 + 0.164277*t2795 - 0.144575*t2800 - 0.003198*t2501*t573 + var1[1];
  p_output1[39]=t2803;
  p_output1[40]=t5141;
  p_output1[41]=t4464 + t4714 + 0.162149*t4912 - 0.143015*t4978 - 0.006179*t2533*t573 + var1[2];
  p_output1[42]=t4464 + t4714 + 0.159212*t4912 - 0.143548*t4978 - 0.010112*t2533*t573 + var1[2];
  p_output1[43]=t4464 + t4714 + 0.155408*t4912 - 0.144912*t4978 - 0.01295*t2533*t573 + var1[2];
  p_output1[44]=t4464 + t4714 + 0.151149*t4912 - 0.146958*t4978 - 0.014384*t2533*t573 + var1[2];
  p_output1[45]=t4464 + t4714 + 0.146897*t4912 - 0.149464*t4978 - 0.01426*t2533*t573 + var1[2];
  p_output1[46]=t4464 + t4714 + 0.143112*t4912 - 0.15216*t4978 - 0.01259*t2533*t573 + var1[2];
  p_output1[47]=t4464 + t4714 + 0.140204*t4912 - 0.154753*t4978 - 0.009556*t2533*t573 + var1[2];
  p_output1[48]=t4464 + t4714 + 0.13849*t4912 - 0.156962*t4978 - 0.005487*t2533*t573 + var1[2];
  p_output1[49]=t4464 + t4714 + 0.138153*t4912 - 0.158548*t4978 - 0.000823*t2533*t573 + var1[2];
  p_output1[50]=t4464 + t4714 + 0.139232*t4912 - 0.159338*t4978 + 0.003931*t2533*t573 + var1[2];
  p_output1[51]=t4464 + t4714 + 0.141608*t4912 - 0.159248*t4978 + 0.008258*t2533*t573 + var1[2];
  p_output1[52]=t4464 + t4714 + 0.145025*t4912 - 0.158287*t4978 + 0.011691*t2533*t573 + var1[2];
  p_output1[53]=t4464 + t4714 + 0.149112*t4912 - 0.156558*t4978 + 0.013856*t2533*t573 + var1[2];
  p_output1[54]=t4464 + t4714 + 0.153427*t4912 - 0.154251*t4978 + 0.01452*t2533*t573 + var1[2];
  p_output1[55]=t4464 + t4714 + 0.157501*t4912 - 0.151613*t4978 + 0.013611*t2533*t573 + var1[2];
  p_output1[56]=t4464 + t4714 + 0.160894*t4912 - 0.148932*t4978 + 0.011227*t2533*t573 + var1[2];
  p_output1[57]=t4464 + t4714 + 0.163237*t4912 - 0.146498*t4978 + 0.007626*t2533*t573 + var1[2];
  p_output1[58]=t4464 + t4714 + 0.164277*t4912 - 0.144575*t4978 + 0.003198*t2533*t573 + var1[2];
  p_output1[59]=t5141;
  p_output1[60]=t6152;
  p_output1[61]=t1284 - 0.044929*t1494 + t1720 + 0.237648*t1754 - 0.273016*t2027 + var1[0];
  p_output1[62]=t1284 - 0.048862*t1494 + t1720 + 0.234712*t1754 - 0.273549*t2027 + var1[0];
  p_output1[63]=t1284 - 0.0517*t1494 + t1720 + 0.230908*t1754 - 0.274912*t2027 + var1[0];
  p_output1[64]=t1284 - 0.053134*t1494 + t1720 + 0.226649*t1754 - 0.276958*t2027 + var1[0];
  p_output1[65]=t1284 - 0.05301*t1494 + t1720 + 0.222396*t1754 - 0.279465*t2027 + var1[0];
  p_output1[66]=t1284 - 0.05134*t1494 + t1720 + 0.218611*t1754 - 0.282161*t2027 + var1[0];
  p_output1[67]=t1284 - 0.048306*t1494 + t1720 + 0.215704*t1754 - 0.284754*t2027 + var1[0];
  p_output1[68]=t1284 - 0.044237*t1494 + t1720 + 0.213989*t1754 - 0.286963*t2027 + var1[0];
  p_output1[69]=t1284 - 0.039573*t1494 + t1720 + 0.213652*t1754 - 0.288548*t2027 + var1[0];
  p_output1[70]=t1284 - 0.034819*t1494 + t1720 + 0.214731*t1754 - 0.289339*t2027 + var1[0];
  p_output1[71]=t1284 - 0.030492*t1494 + t1720 + 0.217107*t1754 - 0.289248*t2027 + var1[0];
  p_output1[72]=t1284 - 0.027059*t1494 + t1720 + 0.220524*t1754 - 0.288287*t2027 + var1[0];
  p_output1[73]=t1284 - 0.024894*t1494 + t1720 + 0.224612*t1754 - 0.286559*t2027 + var1[0];
  p_output1[74]=t1284 - 0.02423*t1494 + t1720 + 0.228926*t1754 - 0.284251*t2027 + var1[0];
  p_output1[75]=t1284 - 0.025139*t1494 + t1720 + 0.233*t1754 - 0.281614*t2027 + var1[0];
  p_output1[76]=t1284 - 0.027523*t1494 + t1720 + 0.236393*t1754 - 0.278933*t2027 + var1[0];
  p_output1[77]=t1284 - 0.031124*t1494 + t1720 + 0.238736*t1754 - 0.276499*t2027 + var1[0];
  p_output1[78]=t1284 - 0.035552*t1494 + t1720 + 0.239776*t1754 - 0.274575*t2027 + var1[0];
  p_output1[79]=t6152;
  p_output1[80]=t6863;
  p_output1[81]=t2539 + t2736 + 0.237648*t2795 - 0.273016*t2800 + 0.044929*t2501*t573 + var1[1];
  p_output1[82]=t2539 + t2736 + 0.234712*t2795 - 0.273549*t2800 + 0.048862*t2501*t573 + var1[1];
  p_output1[83]=t2539 + t2736 + 0.230908*t2795 - 0.274912*t2800 + 0.0517*t2501*t573 + var1[1];
  p_output1[84]=t2539 + t2736 + 0.226649*t2795 - 0.276958*t2800 + 0.053134*t2501*t573 + var1[1];
  p_output1[85]=t2539 + t2736 + 0.222396*t2795 - 0.279465*t2800 + 0.05301*t2501*t573 + var1[1];
  p_output1[86]=t2539 + t2736 + 0.218611*t2795 - 0.282161*t2800 + 0.05134*t2501*t573 + var1[1];
  p_output1[87]=t2539 + t2736 + 0.215704*t2795 - 0.284754*t2800 + 0.048306*t2501*t573 + var1[1];
  p_output1[88]=t2539 + t2736 + 0.213989*t2795 - 0.286963*t2800 + 0.044237*t2501*t573 + var1[1];
  p_output1[89]=t2539 + t2736 + 0.213652*t2795 - 0.288548*t2800 + 0.039573*t2501*t573 + var1[1];
  p_output1[90]=t2539 + t2736 + 0.214731*t2795 - 0.289339*t2800 + 0.034819*t2501*t573 + var1[1];
  p_output1[91]=t2539 + t2736 + 0.217107*t2795 - 0.289248*t2800 + 0.030492*t2501*t573 + var1[1];
  p_output1[92]=t2539 + t2736 + 0.220524*t2795 - 0.288287*t2800 + 0.027059*t2501*t573 + var1[1];
  p_output1[93]=t2539 + t2736 + 0.224612*t2795 - 0.286559*t2800 + 0.024894*t2501*t573 + var1[1];
  p_output1[94]=t2539 + t2736 + 0.228926*t2795 - 0.284251*t2800 + 0.02423*t2501*t573 + var1[1];
  p_output1[95]=t2539 + t2736 + 0.233*t2795 - 0.281614*t2800 + 0.025139*t2501*t573 + var1[1];
  p_output1[96]=t2539 + t2736 + 0.236393*t2795 - 0.278933*t2800 + 0.027523*t2501*t573 + var1[1];
  p_output1[97]=t2539 + t2736 + 0.238736*t2795 - 0.276499*t2800 + 0.031124*t2501*t573 + var1[1];
  p_output1[98]=t2539 + t2736 + 0.239776*t2795 - 0.274575*t2800 + 0.035552*t2501*t573 + var1[1];
  p_output1[99]=t6863;
  p_output1[100]=t7770;
  p_output1[101]=t4464 + t4714 + 0.237648*t4912 - 0.273016*t4978 - 0.044929*t2533*t573 + var1[2];
  p_output1[102]=t4464 + t4714 + 0.234712*t4912 - 0.273549*t4978 - 0.048862*t2533*t573 + var1[2];
  p_output1[103]=t4464 + t4714 + 0.230908*t4912 - 0.274912*t4978 - 0.0517*t2533*t573 + var1[2];
  p_output1[104]=t4464 + t4714 + 0.226649*t4912 - 0.276958*t4978 - 0.053134*t2533*t573 + var1[2];
  p_output1[105]=t4464 + t4714 + 0.222396*t4912 - 0.279465*t4978 - 0.05301*t2533*t573 + var1[2];
  p_output1[106]=t4464 + t4714 + 0.218611*t4912 - 0.282161*t4978 - 0.05134*t2533*t573 + var1[2];
  p_output1[107]=t4464 + t4714 + 0.215704*t4912 - 0.284754*t4978 - 0.048306*t2533*t573 + var1[2];
  p_output1[108]=t4464 + t4714 + 0.213989*t4912 - 0.286963*t4978 - 0.044237*t2533*t573 + var1[2];
  p_output1[109]=t4464 + t4714 + 0.213652*t4912 - 0.288548*t4978 - 0.039573*t2533*t573 + var1[2];
  p_output1[110]=t4464 + t4714 + 0.214731*t4912 - 0.289339*t4978 - 0.034819*t2533*t573 + var1[2];
  p_output1[111]=t4464 + t4714 + 0.217107*t4912 - 0.289248*t4978 - 0.030492*t2533*t573 + var1[2];
  p_output1[112]=t4464 + t4714 + 0.220524*t4912 - 0.288287*t4978 - 0.027059*t2533*t573 + var1[2];
  p_output1[113]=t4464 + t4714 + 0.224612*t4912 - 0.286559*t4978 - 0.024894*t2533*t573 + var1[2];
  p_output1[114]=t4464 + t4714 + 0.228926*t4912 - 0.284251*t4978 - 0.02423*t2533*t573 + var1[2];
  p_output1[115]=t4464 + t4714 + 0.233*t4912 - 0.281614*t4978 - 0.025139*t2533*t573 + var1[2];
  p_output1[116]=t4464 + t4714 + 0.236393*t4912 - 0.278933*t4978 - 0.027523*t2533*t573 + var1[2];
  p_output1[117]=t4464 + t4714 + 0.238736*t4912 - 0.276499*t4978 - 0.031124*t2533*t573 + var1[2];
  p_output1[118]=t4464 + t4714 + 0.239776*t4912 - 0.274575*t4978 - 0.035552*t2533*t573 + var1[2];
  p_output1[119]=t7770;
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

#include "Link_rl_hip_to_rl_hip_pitch_bar.hh"

namespace SymFunction
{

void Link_rl_hip_to_rl_hip_pitch_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
