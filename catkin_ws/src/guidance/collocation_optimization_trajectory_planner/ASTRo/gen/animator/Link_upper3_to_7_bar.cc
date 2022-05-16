/*
 * Automatically Generated from Mathematica.
 * Fri 13 May 2022 14:24:55 GMT+02:00
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
  double t74;
  double t294;
  double t443;
  double t484;
  double t510;
  double t531;
  double t96;
  double t1365;
  double t1086;
  double t1156;
  double t1723;
  double t1730;
  double t1732;
  double t1744;
  double t788;
  double t948;
  double t970;
  double t1202;
  double t1279;
  double t1284;
  double t1469;
  double t1476;
  double t1490;
  double t1517;
  double t1724;
  double t1728;
  double t1754;
  double t1755;
  double t1756;
  double t1758;
  double t1791;
  double t1806;
  double t1808;
  double t1669;
  double t1763;
  double t1809;
  double t1810;
  double t2106;
  double t2112;
  double t2111;
  double t2115;
  double t2117;
  double t2127;
  double t2198;
  double t2207;
  double t2298;
  double t2303;
  double t2304;
  double t2107;
  double t2126;
  double t2214;
  double t2223;
  double t2258;
  double t2259;
  double t2318;
  double t2322;
  double t2335;
  double t2341;
  double t2380;
  double t2392;
  double t2394;
  double t2260;
  double t2375;
  double t2414;
  double t2431;
  double t2847;
  double t2850;
  double t2852;
  double t2855;
  double t2868;
  double t2870;
  double t2885;
  double t2891;
  double t2892;
  double t2844;
  double t2854;
  double t2873;
  double t2874;
  double t2877;
  double t2879;
  double t2895;
  double t2905;
  double t2907;
  double t2908;
  double t2913;
  double t2916;
  double t2919;
  double t2882;
  double t2912;
  double t2921;
  double t2925;
  double t1814;
  double t1828;
  double t1845;
  double t1852;
  double t1866;
  double t1873;
  double t1888;
  double t1900;
  double t1908;
  double t1924;
  double t1936;
  double t1944;
  double t1972;
  double t2022;
  double t2046;
  double t2064;
  double t2088;
  double t2100;
  double t3702;
  double t3704;
  double t3708;
  double t2451;
  double t2462;
  double t2537;
  double t2584;
  double t2628;
  double t2639;
  double t2660;
  double t2708;
  double t2725;
  double t2735;
  double t2753;
  double t2778;
  double t2787;
  double t2800;
  double t2812;
  double t2827;
  double t2834;
  double t2842;
  double t4023;
  double t4025;
  double t4027;
  double t2930;
  double t2963;
  double t2977;
  double t2984;
  double t2991;
  double t3040;
  double t3109;
  double t3149;
  double t3278;
  double t3352;
  double t3414;
  double t3473;
  double t3490;
  double t3508;
  double t3587;
  double t3621;
  double t3680;
  double t3696;
  double t4194;
  double t4205;
  double t4206;
  t74 = Cos(var1[4]);
  t294 = Cos(var1[15]);
  t443 = -1.*t294;
  t484 = 1. + t443;
  t510 = -0.15121*t484;
  t531 = Sin(var1[15]);
  t96 = Cos(var1[5]);
  t1365 = Sin(var1[5]);
  t1086 = Sin(var1[16]);
  t1156 = Sin(var1[4]);
  t1723 = Cos(var1[16]);
  t1730 = t294*t74*t96;
  t1732 = -1.*t74*t531*t1365;
  t1744 = t1730 + t1732;
  t788 = -0.15121*t531;
  t948 = t510 + t788;
  t970 = t74*t96*t948;
  t1202 = 0.28121*t1086*t1156;
  t1279 = 0.15121*t531;
  t1284 = t510 + t1279;
  t1469 = -1.*t74*t1284*t1365;
  t1476 = -1.*t74*t96*t531;
  t1490 = -1.*t294*t74*t1365;
  t1517 = t1476 + t1490;
  t1724 = -1.*t1723;
  t1728 = 1. + t1724;
  t1754 = -0.28121*t1728*t1744;
  t1755 = t1086*t1156;
  t1756 = t1723*t1744;
  t1758 = t1755 + t1756;
  t1791 = t1723*t1156;
  t1806 = -1.*t1086*t1744;
  t1808 = t1791 + t1806;
  t1669 = -0.171649*t1517;
  t1763 = -0.279918*t1758;
  t1809 = -0.011486*t1808;
  t1810 = var1[0] + t970 + t1202 + t1469 + t1669 + t1754 + t1763 + t1809;
  t2106 = Sin(var1[3]);
  t2112 = Cos(var1[3]);
  t2111 = t96*t2106*t1156;
  t2115 = t2112*t1365;
  t2117 = t2111 + t2115;
  t2127 = t2112*t96;
  t2198 = -1.*t2106*t1156*t1365;
  t2207 = t2127 + t2198;
  t2298 = t294*t2117;
  t2303 = t531*t2207;
  t2304 = t2298 + t2303;
  t2107 = -0.28121*t74*t1086*t2106;
  t2126 = t948*t2117;
  t2214 = t1284*t2207;
  t2223 = -1.*t531*t2117;
  t2258 = t294*t2207;
  t2259 = t2223 + t2258;
  t2318 = -0.28121*t1728*t2304;
  t2322 = -1.*t74*t1086*t2106;
  t2335 = t1723*t2304;
  t2341 = t2322 + t2335;
  t2380 = -1.*t1723*t74*t2106;
  t2392 = -1.*t1086*t2304;
  t2394 = t2380 + t2392;
  t2260 = -0.171649*t2259;
  t2375 = -0.279918*t2341;
  t2414 = -0.011486*t2394;
  t2431 = var1[1] + t2107 + t2126 + t2214 + t2260 + t2318 + t2375 + t2414;
  t2847 = -1.*t2112*t96*t1156;
  t2850 = t2106*t1365;
  t2852 = t2847 + t2850;
  t2855 = t96*t2106;
  t2868 = t2112*t1156*t1365;
  t2870 = t2855 + t2868;
  t2885 = t294*t2852;
  t2891 = t531*t2870;
  t2892 = t2885 + t2891;
  t2844 = 0.28121*t2112*t74*t1086;
  t2854 = t948*t2852;
  t2873 = t1284*t2870;
  t2874 = -1.*t531*t2852;
  t2877 = t294*t2870;
  t2879 = t2874 + t2877;
  t2895 = -0.28121*t1728*t2892;
  t2905 = t2112*t74*t1086;
  t2907 = t1723*t2892;
  t2908 = t2905 + t2907;
  t2913 = t1723*t2112*t74;
  t2916 = -1.*t1086*t2892;
  t2919 = t2913 + t2916;
  t2882 = -0.171649*t2879;
  t2912 = -0.279918*t2908;
  t2921 = -0.011486*t2919;
  t2925 = var1[2] + t2844 + t2854 + t2873 + t2882 + t2895 + t2912 + t2921;
  t1814 = -0.013996*t1808;
  t1828 = -0.01499*t1808;
  t1845 = -0.014359*t1808;
  t1852 = -0.012172*t1808;
  t1866 = -0.008666*t1808;
  t1873 = -0.004221*t1808;
  t1888 = 0.000681*t1808;
  t1900 = 0.00551*t1808;
  t1908 = 0.009741*t1808;
  t1924 = 0.012917*t1808;
  t1936 = 0.014693*t1808;
  t1944 = 0.014877*t1808;
  t1972 = 0.013449*t1808;
  t2022 = 0.010563*t1808;
  t2046 = 0.006533*t1808;
  t2064 = 0.001794*t1808;
  t2088 = -0.003138*t1808;
  t2100 = -0.007731*t1808;
  t3702 = -0.141649*t1517;
  t3704 = -0.501918*t1758;
  t3708 = var1[0] + t970 + t1202 + t1469 + t3702 + t1754 + t3704 + t1809;
  t2451 = -0.013996*t2394;
  t2462 = -0.01499*t2394;
  t2537 = -0.014359*t2394;
  t2584 = -0.012172*t2394;
  t2628 = -0.008666*t2394;
  t2639 = -0.004221*t2394;
  t2660 = 0.000681*t2394;
  t2708 = 0.00551*t2394;
  t2725 = 0.009741*t2394;
  t2735 = 0.012917*t2394;
  t2753 = 0.014693*t2394;
  t2778 = 0.014877*t2394;
  t2787 = 0.013449*t2394;
  t2800 = 0.010563*t2394;
  t2812 = 0.006533*t2394;
  t2827 = 0.001794*t2394;
  t2834 = -0.003138*t2394;
  t2842 = -0.007731*t2394;
  t4023 = -0.141649*t2259;
  t4025 = -0.501918*t2341;
  t4027 = var1[1] + t2107 + t2126 + t2214 + t4023 + t2318 + t4025 + t2414;
  t2930 = -0.013996*t2919;
  t2963 = -0.01499*t2919;
  t2977 = -0.014359*t2919;
  t2984 = -0.012172*t2919;
  t2991 = -0.008666*t2919;
  t3040 = -0.004221*t2919;
  t3109 = 0.000681*t2919;
  t3149 = 0.00551*t2919;
  t3278 = 0.009741*t2919;
  t3352 = 0.012917*t2919;
  t3414 = 0.014693*t2919;
  t3473 = 0.014877*t2919;
  t3490 = 0.013449*t2919;
  t3508 = 0.010563*t2919;
  t3587 = 0.006533*t2919;
  t3621 = 0.001794*t2919;
  t3680 = -0.003138*t2919;
  t3696 = -0.007731*t2919;
  t4194 = -0.141649*t2879;
  t4205 = -0.501918*t2908;
  t4206 = var1[2] + t2844 + t2854 + t2873 + t4194 + t2895 + t4205 + t2921;
  p_output1[0]=t1810;
  p_output1[1]=t1202 + t1469 - 0.175863*t1517 + t1754 - 0.280487*t1758 + t1814 + t970 + var1[0];
  p_output1[2]=t1202 + t1469 - 0.180657*t1517 + t1754 - 0.281135*t1758 + t1828 + t970 + var1[0];
  p_output1[3]=t1202 + t1469 - 0.18551*t1517 + t1754 - 0.281791*t1758 + t1845 + t970 + var1[0];
  p_output1[4]=t1202 + t1469 - 0.189897*t1517 + t1754 - 0.282384*t1758 + t1852 + t970 + var1[0];
  p_output1[5]=t1202 + t1469 - 0.193343*t1517 + t1754 - 0.28285*t1758 + t1866 + t970 + var1[0];
  p_output1[6]=t1202 + t1469 - 0.195474*t1517 + t1754 - 0.283138*t1758 + t1873 + t970 + var1[0];
  p_output1[7]=t1202 + t1469 - 0.19606*t1517 + t1754 - 0.283217*t1758 + t1888 + t970 + var1[0];
  p_output1[8]=t1202 + t1469 - 0.195036*t1517 + t1754 - 0.283078*t1758 + t1900 + t970 + var1[0];
  p_output1[9]=t1202 + t1469 - 0.192514*t1517 + t1754 - 0.282738*t1758 + t1908 + t970 + var1[0];
  p_output1[10]=t1202 + t1469 - 0.188767*t1517 + t1754 - 0.282231*t1758 + t1924 + t970 + var1[0];
  p_output1[11]=t1202 + t1469 - 0.184201*t1517 + t1754 - 0.281614*t1758 + t1936 + t970 + var1[0];
  p_output1[12]=t1202 + t1469 - 0.179311*t1517 + t1754 - 0.280953*t1758 + t1944 + t970 + var1[0];
  p_output1[13]=t1202 + t1469 - 0.174627*t1517 + t1754 - 0.28032*t1758 + t1972 + t970 + var1[0];
  p_output1[14]=t1202 + t1469 - 0.170656*t1517 + t1754 - 0.279784*t1758 + t2022 + t970 + var1[0];
  p_output1[15]=t1202 + t1469 - 0.167829*t1517 + t1754 - 0.279402*t1758 + t2046 + t970 + var1[0];
  p_output1[16]=t1202 + t1469 - 0.166452*t1517 + t1754 - 0.279216*t1758 + t2064 + t970 + var1[0];
  p_output1[17]=t1202 + t1469 - 0.166674*t1517 + t1754 - 0.279246*t1758 + t2088 + t970 + var1[0];
  p_output1[18]=t1202 + t1469 - 0.168472*t1517 + t1754 - 0.279489*t1758 + t2100 + t970 + var1[0];
  p_output1[19]=t1810;
  p_output1[20]=t2431;
  p_output1[21]=t2107 + t2126 + t2214 - 0.175863*t2259 + t2318 - 0.280487*t2341 + t2451 + var1[1];
  p_output1[22]=t2107 + t2126 + t2214 - 0.180657*t2259 + t2318 - 0.281135*t2341 + t2462 + var1[1];
  p_output1[23]=t2107 + t2126 + t2214 - 0.18551*t2259 + t2318 - 0.281791*t2341 + t2537 + var1[1];
  p_output1[24]=t2107 + t2126 + t2214 - 0.189897*t2259 + t2318 - 0.282384*t2341 + t2584 + var1[1];
  p_output1[25]=t2107 + t2126 + t2214 - 0.193343*t2259 + t2318 - 0.28285*t2341 + t2628 + var1[1];
  p_output1[26]=t2107 + t2126 + t2214 - 0.195474*t2259 + t2318 - 0.283138*t2341 + t2639 + var1[1];
  p_output1[27]=t2107 + t2126 + t2214 - 0.19606*t2259 + t2318 - 0.283217*t2341 + t2660 + var1[1];
  p_output1[28]=t2107 + t2126 + t2214 - 0.195036*t2259 + t2318 - 0.283078*t2341 + t2708 + var1[1];
  p_output1[29]=t2107 + t2126 + t2214 - 0.192514*t2259 + t2318 - 0.282738*t2341 + t2725 + var1[1];
  p_output1[30]=t2107 + t2126 + t2214 - 0.188767*t2259 + t2318 - 0.282231*t2341 + t2735 + var1[1];
  p_output1[31]=t2107 + t2126 + t2214 - 0.184201*t2259 + t2318 - 0.281614*t2341 + t2753 + var1[1];
  p_output1[32]=t2107 + t2126 + t2214 - 0.179311*t2259 + t2318 - 0.280953*t2341 + t2778 + var1[1];
  p_output1[33]=t2107 + t2126 + t2214 - 0.174627*t2259 + t2318 - 0.28032*t2341 + t2787 + var1[1];
  p_output1[34]=t2107 + t2126 + t2214 - 0.170656*t2259 + t2318 - 0.279784*t2341 + t2800 + var1[1];
  p_output1[35]=t2107 + t2126 + t2214 - 0.167829*t2259 + t2318 - 0.279402*t2341 + t2812 + var1[1];
  p_output1[36]=t2107 + t2126 + t2214 - 0.166452*t2259 + t2318 - 0.279216*t2341 + t2827 + var1[1];
  p_output1[37]=t2107 + t2126 + t2214 - 0.166674*t2259 + t2318 - 0.279246*t2341 + t2834 + var1[1];
  p_output1[38]=t2107 + t2126 + t2214 - 0.168472*t2259 + t2318 - 0.279489*t2341 + t2842 + var1[1];
  p_output1[39]=t2431;
  p_output1[40]=t2925;
  p_output1[41]=t2844 + t2854 + t2873 - 0.175863*t2879 + t2895 - 0.280487*t2908 + t2930 + var1[2];
  p_output1[42]=t2844 + t2854 + t2873 - 0.180657*t2879 + t2895 - 0.281135*t2908 + t2963 + var1[2];
  p_output1[43]=t2844 + t2854 + t2873 - 0.18551*t2879 + t2895 - 0.281791*t2908 + t2977 + var1[2];
  p_output1[44]=t2844 + t2854 + t2873 - 0.189897*t2879 + t2895 - 0.282384*t2908 + t2984 + var1[2];
  p_output1[45]=t2844 + t2854 + t2873 - 0.193343*t2879 + t2895 - 0.28285*t2908 + t2991 + var1[2];
  p_output1[46]=t2844 + t2854 + t2873 - 0.195474*t2879 + t2895 - 0.283138*t2908 + t3040 + var1[2];
  p_output1[47]=t2844 + t2854 + t2873 - 0.19606*t2879 + t2895 - 0.283217*t2908 + t3109 + var1[2];
  p_output1[48]=t2844 + t2854 + t2873 - 0.195036*t2879 + t2895 - 0.283078*t2908 + t3149 + var1[2];
  p_output1[49]=t2844 + t2854 + t2873 - 0.192514*t2879 + t2895 - 0.282738*t2908 + t3278 + var1[2];
  p_output1[50]=t2844 + t2854 + t2873 - 0.188767*t2879 + t2895 - 0.282231*t2908 + t3352 + var1[2];
  p_output1[51]=t2844 + t2854 + t2873 - 0.184201*t2879 + t2895 - 0.281614*t2908 + t3414 + var1[2];
  p_output1[52]=t2844 + t2854 + t2873 - 0.179311*t2879 + t2895 - 0.280953*t2908 + t3473 + var1[2];
  p_output1[53]=t2844 + t2854 + t2873 - 0.174627*t2879 + t2895 - 0.28032*t2908 + t3490 + var1[2];
  p_output1[54]=t2844 + t2854 + t2873 - 0.170656*t2879 + t2895 - 0.279784*t2908 + t3508 + var1[2];
  p_output1[55]=t2844 + t2854 + t2873 - 0.167829*t2879 + t2895 - 0.279402*t2908 + t3587 + var1[2];
  p_output1[56]=t2844 + t2854 + t2873 - 0.166452*t2879 + t2895 - 0.279216*t2908 + t3621 + var1[2];
  p_output1[57]=t2844 + t2854 + t2873 - 0.166674*t2879 + t2895 - 0.279246*t2908 + t3680 + var1[2];
  p_output1[58]=t2844 + t2854 + t2873 - 0.168472*t2879 + t2895 - 0.279489*t2908 + t3696 + var1[2];
  p_output1[59]=t2925;
  p_output1[60]=t3708;
  p_output1[61]=t1202 + t1469 - 0.145863*t1517 + t1754 - 0.502487*t1758 + t1814 + t970 + var1[0];
  p_output1[62]=t1202 + t1469 - 0.150657*t1517 + t1754 - 0.503135*t1758 + t1828 + t970 + var1[0];
  p_output1[63]=t1202 + t1469 - 0.15551*t1517 + t1754 - 0.503791*t1758 + t1845 + t970 + var1[0];
  p_output1[64]=t1202 + t1469 - 0.159897*t1517 + t1754 - 0.504384*t1758 + t1852 + t970 + var1[0];
  p_output1[65]=t1202 + t1469 - 0.163343*t1517 + t1754 - 0.50485*t1758 + t1866 + t970 + var1[0];
  p_output1[66]=t1202 + t1469 - 0.165474*t1517 + t1754 - 0.505138*t1758 + t1873 + t970 + var1[0];
  p_output1[67]=t1202 + t1469 - 0.16606*t1517 + t1754 - 0.505217*t1758 + t1888 + t970 + var1[0];
  p_output1[68]=t1202 + t1469 - 0.165036*t1517 + t1754 - 0.505078*t1758 + t1900 + t970 + var1[0];
  p_output1[69]=t1202 + t1469 - 0.162514*t1517 + t1754 - 0.504738*t1758 + t1908 + t970 + var1[0];
  p_output1[70]=t1202 + t1469 - 0.158767*t1517 + t1754 - 0.504231*t1758 + t1924 + t970 + var1[0];
  p_output1[71]=t1202 + t1469 - 0.154201*t1517 + t1754 - 0.503614*t1758 + t1936 + t970 + var1[0];
  p_output1[72]=t1202 + t1469 - 0.149311*t1517 + t1754 - 0.502953*t1758 + t1944 + t970 + var1[0];
  p_output1[73]=t1202 + t1469 - 0.144627*t1517 + t1754 - 0.50232*t1758 + t1972 + t970 + var1[0];
  p_output1[74]=t1202 + t1469 - 0.140656*t1517 + t1754 - 0.501784*t1758 + t2022 + t970 + var1[0];
  p_output1[75]=t1202 + t1469 - 0.137829*t1517 + t1754 - 0.501402*t1758 + t2046 + t970 + var1[0];
  p_output1[76]=t1202 + t1469 - 0.136452*t1517 + t1754 - 0.501216*t1758 + t2064 + t970 + var1[0];
  p_output1[77]=t1202 + t1469 - 0.136674*t1517 + t1754 - 0.501246*t1758 + t2088 + t970 + var1[0];
  p_output1[78]=t1202 + t1469 - 0.138472*t1517 + t1754 - 0.501489*t1758 + t2100 + t970 + var1[0];
  p_output1[79]=t3708;
  p_output1[80]=t4027;
  p_output1[81]=t2107 + t2126 + t2214 - 0.145863*t2259 + t2318 - 0.502487*t2341 + t2451 + var1[1];
  p_output1[82]=t2107 + t2126 + t2214 - 0.150657*t2259 + t2318 - 0.503135*t2341 + t2462 + var1[1];
  p_output1[83]=t2107 + t2126 + t2214 - 0.15551*t2259 + t2318 - 0.503791*t2341 + t2537 + var1[1];
  p_output1[84]=t2107 + t2126 + t2214 - 0.159897*t2259 + t2318 - 0.504384*t2341 + t2584 + var1[1];
  p_output1[85]=t2107 + t2126 + t2214 - 0.163343*t2259 + t2318 - 0.50485*t2341 + t2628 + var1[1];
  p_output1[86]=t2107 + t2126 + t2214 - 0.165474*t2259 + t2318 - 0.505138*t2341 + t2639 + var1[1];
  p_output1[87]=t2107 + t2126 + t2214 - 0.16606*t2259 + t2318 - 0.505217*t2341 + t2660 + var1[1];
  p_output1[88]=t2107 + t2126 + t2214 - 0.165036*t2259 + t2318 - 0.505078*t2341 + t2708 + var1[1];
  p_output1[89]=t2107 + t2126 + t2214 - 0.162514*t2259 + t2318 - 0.504738*t2341 + t2725 + var1[1];
  p_output1[90]=t2107 + t2126 + t2214 - 0.158767*t2259 + t2318 - 0.504231*t2341 + t2735 + var1[1];
  p_output1[91]=t2107 + t2126 + t2214 - 0.154201*t2259 + t2318 - 0.503614*t2341 + t2753 + var1[1];
  p_output1[92]=t2107 + t2126 + t2214 - 0.149311*t2259 + t2318 - 0.502953*t2341 + t2778 + var1[1];
  p_output1[93]=t2107 + t2126 + t2214 - 0.144627*t2259 + t2318 - 0.50232*t2341 + t2787 + var1[1];
  p_output1[94]=t2107 + t2126 + t2214 - 0.140656*t2259 + t2318 - 0.501784*t2341 + t2800 + var1[1];
  p_output1[95]=t2107 + t2126 + t2214 - 0.137829*t2259 + t2318 - 0.501402*t2341 + t2812 + var1[1];
  p_output1[96]=t2107 + t2126 + t2214 - 0.136452*t2259 + t2318 - 0.501216*t2341 + t2827 + var1[1];
  p_output1[97]=t2107 + t2126 + t2214 - 0.136674*t2259 + t2318 - 0.501246*t2341 + t2834 + var1[1];
  p_output1[98]=t2107 + t2126 + t2214 - 0.138472*t2259 + t2318 - 0.501489*t2341 + t2842 + var1[1];
  p_output1[99]=t4027;
  p_output1[100]=t4206;
  p_output1[101]=t2844 + t2854 + t2873 - 0.145863*t2879 + t2895 - 0.502487*t2908 + t2930 + var1[2];
  p_output1[102]=t2844 + t2854 + t2873 - 0.150657*t2879 + t2895 - 0.503135*t2908 + t2963 + var1[2];
  p_output1[103]=t2844 + t2854 + t2873 - 0.15551*t2879 + t2895 - 0.503791*t2908 + t2977 + var1[2];
  p_output1[104]=t2844 + t2854 + t2873 - 0.159897*t2879 + t2895 - 0.504384*t2908 + t2984 + var1[2];
  p_output1[105]=t2844 + t2854 + t2873 - 0.163343*t2879 + t2895 - 0.50485*t2908 + t2991 + var1[2];
  p_output1[106]=t2844 + t2854 + t2873 - 0.165474*t2879 + t2895 - 0.505138*t2908 + t3040 + var1[2];
  p_output1[107]=t2844 + t2854 + t2873 - 0.16606*t2879 + t2895 - 0.505217*t2908 + t3109 + var1[2];
  p_output1[108]=t2844 + t2854 + t2873 - 0.165036*t2879 + t2895 - 0.505078*t2908 + t3149 + var1[2];
  p_output1[109]=t2844 + t2854 + t2873 - 0.162514*t2879 + t2895 - 0.504738*t2908 + t3278 + var1[2];
  p_output1[110]=t2844 + t2854 + t2873 - 0.158767*t2879 + t2895 - 0.504231*t2908 + t3352 + var1[2];
  p_output1[111]=t2844 + t2854 + t2873 - 0.154201*t2879 + t2895 - 0.503614*t2908 + t3414 + var1[2];
  p_output1[112]=t2844 + t2854 + t2873 - 0.149311*t2879 + t2895 - 0.502953*t2908 + t3473 + var1[2];
  p_output1[113]=t2844 + t2854 + t2873 - 0.144627*t2879 + t2895 - 0.50232*t2908 + t3490 + var1[2];
  p_output1[114]=t2844 + t2854 + t2873 - 0.140656*t2879 + t2895 - 0.501784*t2908 + t3508 + var1[2];
  p_output1[115]=t2844 + t2854 + t2873 - 0.137829*t2879 + t2895 - 0.501402*t2908 + t3587 + var1[2];
  p_output1[116]=t2844 + t2854 + t2873 - 0.136452*t2879 + t2895 - 0.501216*t2908 + t3621 + var1[2];
  p_output1[117]=t2844 + t2854 + t2873 - 0.136674*t2879 + t2895 - 0.501246*t2908 + t3680 + var1[2];
  p_output1[118]=t2844 + t2854 + t2873 - 0.138472*t2879 + t2895 - 0.501489*t2908 + t3696 + var1[2];
  p_output1[119]=t4206;
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
