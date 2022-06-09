/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:11:11 GMT+02:00
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
  double t892;
  double t780;
  double t895;
  double t1557;
  double t1355;
  double t1438;
  double t1561;
  double t647;
  double t1556;
  double t1581;
  double t1594;
  double t901;
  double t1597;
  double t1603;
  double t1612;
  double t1596;
  double t2034;
  double t2037;
  double t1620;
  double t1621;
  double t1622;
  double t1787;
  double t1788;
  double t1791;
  double t1805;
  double t1806;
  double t1807;
  double t2038;
  double t2039;
  double t2075;
  double t2098;
  double t2099;
  double t2100;
  double t2107;
  double t2108;
  double t2109;
  double t2121;
  double t2126;
  double t2127;
  double t2133;
  double t2136;
  double t2137;
  double t1595;
  double t1623;
  double t1768;
  double t2599;
  double t2602;
  double t2606;
  double t2608;
  double t2815;
  double t2817;
  double t2818;
  double t2821;
  double t2822;
  double t891;
  double t908;
  double t959;
  double t2598;
  double t2607;
  double t2823;
  double t2828;
  double t2858;
  double t2860;
  double t2863;
  double t2869;
  double t2870;
  double t2871;
  double t2550;
  double t2562;
  double t2570;
  double t2571;
  double t2830;
  double t2836;
  double t2993;
  double t2994;
  double t2995;
  double t2998;
  double t2999;
  double t3013;
  double t2848;
  double t2989;
  double t2990;
  double t2997;
  double t3014;
  double t3015;
  double t3019;
  double t3020;
  double t3022;
  double t1785;
  double t1811;
  double t1812;
  double t2991;
  double t3061;
  double t3203;
  double t3241;
  double t10168;
  double t10553;
  double t19772;
  double t19971;
  double t18789;
  double t19116;
  double t19733;
  double t19706;
  double t20361;
  double t20238;
  t892 = Cos(var1[12]);
  t780 = Sin(var1[4]);
  t895 = Cos(var1[4]);
  t1557 = Cos(var1[13]);
  t1355 = Cos(var1[14]);
  t1438 = Sin(var1[13]);
  t1561 = Sin(var1[14]);
  t647 = Sin(var1[12]);
  t1556 = t1355*t1438;
  t1581 = -1.*t1557*t1561;
  t1594 = t1556 + t1581;
  t901 = Sin(var1[5]);
  t1597 = t1557*t1355;
  t1603 = t1438*t1561;
  t1612 = t1597 + t1603;
  t1596 = Cos(var1[5]);
  t2034 = Cos(var1[3]);
  t2037 = Sin(var1[3]);
  t1620 = t1596*t1612;
  t1621 = t647*t1594*t901;
  t1622 = t1620 + t1621;
  t1787 = -1.*t1355*t1438;
  t1788 = t1557*t1561;
  t1791 = t1787 + t1788;
  t1805 = t1596*t1791;
  t1806 = t647*t1612*t901;
  t1807 = t1805 + t1806;
  t2038 = t895*t647;
  t2039 = t892*t780*t901;
  t2075 = t2038 + t2039;
  t2098 = -1.*t1596*t647*t1594;
  t2099 = t1612*t901;
  t2100 = t2098 + t2099;
  t2107 = t892*t895*t1594;
  t2108 = -1.*t780*t1622;
  t2109 = t2107 + t2108;
  t2121 = -1.*t1596*t647*t1612;
  t2126 = t1791*t901;
  t2127 = t2121 + t2126;
  t2133 = t892*t895*t1612;
  t2136 = -1.*t780*t1807;
  t2137 = t2133 + t2136;
  t1595 = t892*t1594*t780;
  t1623 = t895*t1622;
  t1768 = t1595 + t1623;
  t2599 = -0.0641*t1355;
  t2602 = -0.28*t1561;
  t2606 = t2599 + t2602;
  t2608 = -1.*t1355;
  t2815 = 1. + t2608;
  t2817 = 0.075*t2815;
  t2818 = 0.355*t1355;
  t2821 = -0.0641*t1561;
  t2822 = t2817 + t2818 + t2821;
  t891 = t647*t780;
  t908 = -1.*t892*t895*t901;
  t959 = t891 + t908;
  t2598 = -0.325*t1438;
  t2607 = t1557*t2606;
  t2823 = t1438*t2822;
  t2828 = t2598 + t2607 + t2823;
  t2858 = -1.*t1557;
  t2860 = 1. + t2858;
  t2863 = 0.325*t2860;
  t2869 = -1.*t1438*t2606;
  t2870 = t1557*t2822;
  t2871 = t2863 + t2869 + t2870;
  t2550 = -1.*t892;
  t2562 = 1. + t2550;
  t2570 = -0.1575*t2562;
  t2571 = -0.2255*t892;
  t2830 = -1.*t647*t2828;
  t2836 = t2570 + t2571 + t2830;
  t2993 = -0.068*t647;
  t2994 = t892*t2828;
  t2995 = t2993 + t2994;
  t2998 = t1596*t2871;
  t2999 = -1.*t2836*t901;
  t3013 = t2998 + t2999;
  t2848 = t1596*t2836;
  t2989 = t2871*t901;
  t2990 = t2848 + t2989;
  t2997 = t2995*t780;
  t3014 = t895*t3013;
  t3015 = t2997 + t3014;
  t3019 = t895*t2995;
  t3020 = -1.*t780*t3013;
  t3022 = t3019 + t3020;
  t1785 = t892*t1612*t780;
  t1811 = t895*t1807;
  t1812 = t1785 + t1811;
  t2991 = t892*t1596*t2990;
  t3061 = -1.*t2990*t2100;
  t3203 = t2990*t2100;
  t3241 = -1.*t2990*t2127;
  t10168 = -1.*t892*t1596*t2990;
  t10553 = t2990*t2127;
  t19772 = -1.*t647*t2995;
  t19971 = t892*t2995*t1612;
  t18789 = t647*t2995;
  t19116 = -1.*t892*t2995*t1594;
  t19733 = -1.*t892*t2995*t1612;
  t19706 = t892*t2995*t1594;
  t20361 = t2871*t1612;
  t20238 = -1.*t2871*t1791;
  p_output1[0]=t1768*var2[0] + t959*var2[1] + t1812*var2[2];
  p_output1[1]=(t2034*t2100 - 1.*t2037*t2109)*var2[0] + (-1.*t2037*t2075 + t1596*t2034*t892)*var2[1] + (t2034*t2127 - 1.*t2037*t2137)*var2[2];
  p_output1[2]=(t2037*t2100 + t2034*t2109)*var2[0] + (t2034*t2075 + t1596*t2037*t892)*var2[1] + (t2037*t2127 + t2034*t2137)*var2[2];
  p_output1[3]=((t10553 + t1812*t3015 + t2137*t3022)*t959 + t1812*(t10168 - 1.*t2075*t3022 - 1.*t3015*t959))*var2[0] + (t1812*(t1768*t3015 + t2109*t3022 + t3203) + t1768*(-1.*t1812*t3015 - 1.*t2137*t3022 + t3241))*var2[1] + ((-1.*t1768*t3015 - 1.*t2109*t3022 + t3061)*t959 + t1768*(t2991 + t2075*t3022 + t3015*t959))*var2[2];
  p_output1[4]=(t1596*(t10553 + t19971 + t1807*t3013)*t892 + t2127*(t10168 + t19772 + t3013*t892*t901))*var2[0] + (t2127*(t19706 + t1622*t3013 + t3203) + t2100*(t19733 - 1.*t1807*t3013 + t3241))*var2[1] + (t1596*(t19116 - 1.*t1622*t3013 + t3061)*t892 + t2100*(t18789 + t2991 - 1.*t3013*t892*t901))*var2[2];
  p_output1[5]=(t647*(t19971 + t1791*t2871 - 1.*t1612*t2836*t647) + t1612*t892*(t19772 - 1.*t2836*t892))*var2[0] + (t1612*(t19706 + t20361 - 1.*t1594*t2836*t647)*t892 + t1594*(t19733 + t20238 + t1612*t2836*t647)*t892)*var2[1] + (t647*(t19116 - 1.*t1612*t2871 + t1594*t2836*t647) + t1594*t892*(t18789 + t2836*t892))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(0.1575*t1594 + 0.2255*t1791)*var2[0] + (t1791*(t20361 + t1594*t2828) + t1612*(t20238 - 1.*t1612*t2828))*var2[1] - 0.068*t1612*var2[2];
  p_output1[13]=(0.325*t1561 - 1.*t1355*t2606 - 1.*t1561*t2822)*var2[0] + (-0.325*t1355 - 1.*t1561*t2606 + t1355*t2822)*var2[2];
  p_output1[14]=-0.0641*var2[0] - 0.28*var2[2];
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fFrFoot_vec_ParallelImpact.hh"

namespace SymFunction
{

void fFrFoot_vec_ParallelImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
