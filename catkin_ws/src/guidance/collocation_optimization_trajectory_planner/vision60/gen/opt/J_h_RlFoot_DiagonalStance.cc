/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:06:29 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t908;
  double t647;
  double t780;
  double t959;
  double t1438;
  double t901;
  double t1556;
  double t891;
  double t1557;
  double t1561;
  double t1581;
  double t1594;
  double t1595;
  double t1596;
  double t1597;
  double t1603;
  double t1621;
  double t1622;
  double t1623;
  double t1265;
  double t1355;
  double t892;
  double t895;
  double t1612;
  double t1620;
  double t1768;
  double t1780;
  double t1785;
  double t1787;
  double t1788;
  double t1791;
  double t1805;
  double t1806;
  double t1807;
  double t1811;
  double t1812;
  double t1813;
  double t2033;
  double t2034;
  double t2035;
  double t2037;
  double t2038;
  double t2039;
  double t2075;
  double t2076;
  double t2077;
  double t2096;
  double t2099;
  double t2107;
  double t2108;
  double t2109;
  double t2098;
  double t2100;
  double t2104;
  double t2119;
  double t2120;
  double t2121;
  double t2126;
  double t2127;
  double t2131;
  double t2133;
  double t2136;
  double t2137;
  double t2445;
  double t2475;
  double t2476;
  double t2481;
  double t2486;
  double t2488;
  double t2496;
  double t2497;
  double t2499;
  double t2520;
  double t2525;
  double t2527;
  double t2541;
  double t2544;
  double t2546;
  double t2548;
  double t2549;
  double t2550;
  double t2562;
  double t2570;
  double t2571;
  double t2598;
  double t2599;
  double t2602;
  double t2606;
  double t2607;
  double t2608;
  double t2815;
  double t2817;
  double t2818;
  double t2821;
  double t2822;
  double t2823;
  double t2828;
  double t2830;
  double t2836;
  double t2858;
  double t2860;
  double t2863;
  double t2869;
  double t2870;
  double t2871;
  double t2848;
  double t2989;
  double t2990;
  double t2991;
  double t2993;
  double t2994;
  double t2995;
  double t2997;
  double t2998;
  double t2999;
  double t3013;
  double t3014;
  double t3015;
  double t3018;
  double t3019;
  double t3020;
  double t3022;
  double t3023;
  double t3025;
  double t2113;
  double t3052;
  double t3061;
  double t3085;
  double t3090;
  double t3094;
  double t3180;
  double t3189;
  double t3191;
  double t3203;
  double t3205;
  double t3218;
  double t3233;
  double t3235;
  double t3241;
  double t3715;
  double t3732;
  double t3739;
  t908 = Sin(var1[4]);
  t647 = Cos(var1[4]);
  t780 = Sin(var1[9]);
  t959 = Cos(var1[9]);
  t1438 = Sin(var1[5]);
  t901 = Cos(var1[5]);
  t1556 = Sin(var1[10]);
  t891 = Cos(var1[10]);
  t1557 = t959*t647;
  t1561 = -1.*t780*t908*t1438;
  t1581 = t1557 + t1561;
  t1594 = Sin(var1[11]);
  t1595 = t901*t1556*t908;
  t1596 = t891*t1581;
  t1597 = t1595 + t1596;
  t1603 = Cos(var1[11]);
  t1621 = -1.*t891*t901*t908;
  t1622 = t1556*t1581;
  t1623 = t1621 + t1622;
  t1265 = -1.*t959;
  t1355 = 1. + t1265;
  t892 = -1.*t891;
  t895 = 1. + t892;
  t1612 = -1.*t1603;
  t1620 = 1. + t1612;
  t1768 = t647*t901*t780*t1556;
  t1780 = -1.*t891*t647*t1438;
  t1785 = t1768 + t1780;
  t1787 = t891*t647*t901*t780;
  t1788 = t647*t1556*t1438;
  t1791 = t1787 + t1788;
  t1805 = -1.*t780*t908;
  t1806 = t959*t647*t1438;
  t1807 = t1805 + t1806;
  t1811 = t959*t908;
  t1812 = t647*t780*t1438;
  t1813 = t1811 + t1812;
  t2033 = -1.*t647*t901*t1556;
  t2034 = t891*t1813;
  t2035 = t2033 + t2034;
  t2037 = -1.*t891*t647*t901;
  t2038 = -1.*t1556*t1813;
  t2039 = t2037 + t2038;
  t2075 = t891*t647*t901;
  t2076 = t1556*t1813;
  t2077 = t2075 + t2076;
  t2096 = Cos(var1[3]);
  t2099 = Sin(var1[3]);
  t2107 = -1.*t901*t2099;
  t2108 = -1.*t2096*t908*t1438;
  t2109 = t2107 + t2108;
  t2098 = t2096*t901*t908;
  t2100 = -1.*t2099*t1438;
  t2104 = t2098 + t2100;
  t2119 = -1.*t959*t2096*t647;
  t2120 = -1.*t780*t2109;
  t2121 = t2119 + t2120;
  t2126 = -1.*t1556*t2104;
  t2127 = t891*t2121;
  t2131 = t2126 + t2127;
  t2133 = t891*t2104;
  t2136 = t1556*t2121;
  t2137 = t2133 + t2136;
  t2445 = t959*t2099*t908;
  t2475 = t647*t780*t2099*t1438;
  t2476 = t2445 + t2475;
  t2481 = -1.*t647*t901*t1556*t2099;
  t2486 = t891*t2476;
  t2488 = t2481 + t2486;
  t2496 = t891*t647*t901*t2099;
  t2497 = t1556*t2476;
  t2499 = t2496 + t2497;
  t2520 = -1.*t901*t2099*t908;
  t2525 = -1.*t2096*t1438;
  t2527 = t2520 + t2525;
  t2541 = t2096*t901;
  t2544 = -1.*t2099*t908*t1438;
  t2546 = t2541 + t2544;
  t2548 = -1.*t780*t1556*t2527;
  t2549 = t891*t2546;
  t2550 = t2548 + t2549;
  t2562 = -1.*t891*t780*t2527;
  t2570 = -1.*t1556*t2546;
  t2571 = t2562 + t2570;
  t2598 = t647*t780*t2099;
  t2599 = -1.*t959*t2546;
  t2602 = t2598 + t2599;
  t2606 = -1.*t959*t647*t2099;
  t2607 = -1.*t780*t2546;
  t2608 = t2606 + t2607;
  t2815 = t901*t2099*t908;
  t2817 = t2096*t1438;
  t2818 = t2815 + t2817;
  t2821 = -1.*t1556*t2818;
  t2822 = t891*t2608;
  t2823 = t2821 + t2822;
  t2828 = -1.*t891*t2818;
  t2830 = -1.*t1556*t2608;
  t2836 = t2828 + t2830;
  t2858 = t891*t2818;
  t2860 = t1556*t2608;
  t2863 = t2858 + t2860;
  t2869 = -1.*t1594*t2823;
  t2870 = t1603*t2863;
  t2871 = t2869 + t2870;
  t2848 = t1603*t2823;
  t2989 = -1.*t959*t2096*t908;
  t2990 = -1.*t2096*t647*t780*t1438;
  t2991 = t2989 + t2990;
  t2993 = t2096*t647*t901*t1556;
  t2994 = t891*t2991;
  t2995 = t2993 + t2994;
  t2997 = -1.*t891*t2096*t647*t901;
  t2998 = t1556*t2991;
  t2999 = t2997 + t2998;
  t3013 = t901*t2099;
  t3014 = t2096*t908*t1438;
  t3015 = t3013 + t3014;
  t3018 = -1.*t780*t1556*t2104;
  t3019 = t891*t3015;
  t3020 = t3018 + t3019;
  t3022 = -1.*t891*t780*t2104;
  t3023 = -1.*t1556*t3015;
  t3025 = t3022 + t3023;
  t2113 = -1.*t2096*t647*t780;
  t3052 = -1.*t959*t3015;
  t3061 = t2113 + t3052;
  t3085 = t959*t2096*t647;
  t3090 = -1.*t780*t3015;
  t3094 = t3085 + t3090;
  t3180 = -1.*t2096*t901*t908;
  t3189 = t2099*t1438;
  t3191 = t3180 + t3189;
  t3203 = -1.*t1556*t3191;
  t3205 = t891*t3094;
  t3218 = t3203 + t3205;
  t3233 = -1.*t891*t3191;
  t3235 = -1.*t1556*t3094;
  t3241 = t3233 + t3235;
  t3715 = t891*t3191;
  t3732 = t1556*t3094;
  t3739 = t3715 + t3732;
  p_output1[0]=1.;
  p_output1[1]=0.325*t1556*t1581 - 0.575*t1594*t1597 - 0.575*t1620*t1623 - 0.0641*(t1597*t1603 + t1594*t1623) - 0.295*(-1.*t1594*t1597 + t1603*t1623) - 0.1575*t647*t780 + 0.1575*t1355*t1438*t908 + 0.325*t895*t901*t908 + 0.2255*(t647*t780 + t1438*t908*t959);
  p_output1[2]=-0.575*t1620*t1785 - 0.575*t1594*t1791 - 0.295*(t1603*t1785 - 1.*t1594*t1791) - 0.0641*(t1594*t1785 + t1603*t1791) + 0.325*t1438*t647*t895 - 0.1575*t1355*t647*t901 + 0.325*t1556*t647*t780*t901 - 0.2255*t647*t901*t959;
  p_output1[3]=0.325*t1556*t1807 - 0.575*t1556*t1620*t1807 + 0.2255*t1813 - 0.1575*t1438*t647*t780 - 0.575*t1594*t1807*t891 - 0.295*(t1556*t1603*t1807 - 1.*t1594*t1807*t891) - 0.0641*(t1556*t1594*t1807 + t1603*t1807*t891) - 0.1575*t908*t959;
  p_output1[4]=-0.575*t1620*t2035 - 0.575*t1594*t2039 - 0.295*(t1603*t2035 - 1.*t1594*t2039) - 0.0641*(t1594*t2035 + t1603*t2039) + 0.325*t1813*t891 - 0.325*t1556*t647*t901;
  p_output1[5]=-0.575*t1603*t2035 - 0.575*t1594*t2077 - 0.295*(-1.*t1603*t2035 - 1.*t1594*t2077) - 0.0641*(-1.*t1594*t2035 + t1603*t2077);
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=0.1575*t1355*t2109 + 0.325*t1556*t2121 - 0.575*t1594*t2131 - 0.575*t1620*t2137 - 0.0641*(t1603*t2131 + t1594*t2137) - 0.295*(-1.*t1594*t2131 + t1603*t2137) + 0.1575*t2096*t647*t780 - 0.325*t2104*t895 + 0.2255*(t2113 + t2109*t959);
  p_output1[9]=0.325*t1556*t2476 - 0.575*t1594*t2488 - 0.575*t1620*t2499 - 0.0641*(t1603*t2488 + t1594*t2499) - 0.295*(-1.*t1594*t2488 + t1603*t2499) - 0.1575*t1355*t1438*t2099*t647 - 0.325*t2099*t647*t895*t901 - 0.1575*t2099*t780*t908 + 0.2255*(t2099*t780*t908 - 1.*t1438*t2099*t647*t959);
  p_output1[10]=0.1575*t1355*t2527 - 0.575*t1620*t2550 - 0.575*t1594*t2571 - 0.295*(t1603*t2550 - 1.*t1594*t2571) - 0.0641*(t1594*t2550 + t1603*t2571) - 0.325*t1556*t2527*t780 - 0.325*t2546*t895 + 0.2255*t2527*t959;
  p_output1[11]=0.325*t1556*t2602 - 0.575*t1556*t1620*t2602 + 0.2255*t2608 + 0.1575*t2546*t780 - 0.575*t1594*t2602*t891 - 0.295*(t1556*t1603*t2602 - 1.*t1594*t2602*t891) - 0.0641*(t1556*t1594*t2602 + t1603*t2602*t891) + 0.1575*t2099*t647*t959;
  p_output1[12]=-0.325*t1556*t2818 - 0.575*t1620*t2823 - 0.575*t1594*t2836 - 0.0641*(t1594*t2823 + t1603*t2836) - 0.295*(-1.*t1594*t2836 + t2848) + 0.325*t2608*t891;
  p_output1[13]=-0.575*t1603*t2823 - 0.575*t1594*t2863 - 0.295*(-1.*t1603*t2823 - 1.*t1594*t2863) - 0.0641*t2871;
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=0.1575*t1355*t2546 + 0.325*t1556*t2608 - 0.575*t1594*t2823 - 0.575*t1620*t2863 - 0.0641*(t2848 + t1594*t2863) - 0.295*t2871 + 0.1575*t2099*t647*t780 - 0.325*t2818*t895 + 0.2255*(-1.*t2099*t647*t780 + t2546*t959);
  p_output1[17]=0.325*t1556*t2991 - 0.575*t1594*t2995 - 0.575*t1620*t2999 - 0.0641*(t1603*t2995 + t1594*t2999) - 0.295*(-1.*t1594*t2995 + t1603*t2999) + 0.1575*t1355*t1438*t2096*t647 + 0.325*t2096*t647*t895*t901 + 0.1575*t2096*t780*t908 + 0.2255*(-1.*t2096*t780*t908 + t1438*t2096*t647*t959);
  p_output1[18]=0.1575*t1355*t2104 - 0.575*t1620*t3020 - 0.575*t1594*t3025 - 0.295*(t1603*t3020 - 1.*t1594*t3025) - 0.0641*(t1594*t3020 + t1603*t3025) - 0.325*t1556*t2104*t780 - 0.325*t3015*t895 + 0.2255*t2104*t959;
  p_output1[19]=0.325*t1556*t3061 - 0.575*t1556*t1620*t3061 + 0.2255*t3094 + 0.1575*t3015*t780 - 0.575*t1594*t3061*t891 - 0.295*(t1556*t1603*t3061 - 1.*t1594*t3061*t891) - 0.0641*(t1556*t1594*t3061 + t1603*t3061*t891) - 0.1575*t2096*t647*t959;
  p_output1[20]=-0.325*t1556*t3191 - 0.575*t1620*t3218 - 0.575*t1594*t3241 - 0.295*(t1603*t3218 - 1.*t1594*t3241) - 0.0641*(t1594*t3218 + t1603*t3241) + 0.325*t3094*t891;
  p_output1[21]=-0.575*t1603*t3218 - 0.575*t1594*t3739 - 0.295*(-1.*t1603*t3218 - 1.*t1594*t3739) - 0.0641*(-1.*t1594*t3218 + t1603*t3739);
  p_output1[22]=-1.;
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 23, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_h_RlFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void J_h_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
