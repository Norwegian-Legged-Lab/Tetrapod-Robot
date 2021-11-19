/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:10:51 GMT+01:00
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
  double t88;
  double t91;
  double t104;
  double t118;
  double t13;
  double t24;
  double t35;
  double t36;
  double t49;
  double t62;
  double t139;
  double t141;
  double t19;
  double t236;
  double t299;
  double t110;
  double t639;
  double t643;
  double t656;
  double t697;
  double t166;
  double t454;
  double t380;
  double t391;
  double t403;
  double t569;
  double t577;
  double t594;
  double t733;
  double t142;
  double t826;
  double t119;
  double t690;
  double t1005;
  double t1047;
  double t1152;
  double t321;
  double t835;
  double t309;
  double t1274;
  double t827;
  double t829;
  double t836;
  double t839;
  double t841;
  double t848;
  double t862;
  double t877;
  double t1345;
  double t1083;
  double t1144;
  double t1146;
  double t1156;
  double t1188;
  double t1194;
  double t1214;
  double t1224;
  double t1390;
  double t1395;
  double t1396;
  double t1426;
  double t1447;
  double t1448;
  double t1450;
  double t1474;
  double t899;
  double t1523;
  double t1062;
  double t1686;
  double t1487;
  double t701;
  double t85;
  double t107;
  double t124;
  double t137;
  double t145;
  double t147;
  double t151;
  double t66;
  double t71;
  double t1907;
  double t208;
  double t229;
  double t1924;
  double t291;
  double t296;
  double t311;
  double t313;
  double t327;
  double t329;
  double t342;
  double t1917;
  double t1941;
  double t1965;
  double t1981;
  double t1986;
  double t1987;
  double t442;
  double t447;
  double t481;
  double t490;
  double t494;
  double t521;
  double t542;
  double t634;
  double t671;
  double t704;
  double t711;
  double t750;
  double t767;
  double t806;
  double t2042;
  double t2054;
  double t2086;
  double t2100;
  double t2111;
  double t2122;
  double t886;
  double t893;
  double t922;
  double t953;
  double t1066;
  double t1073;
  double t1075;
  double t1259;
  double t1273;
  double t1307;
  double t1309;
  double t1346;
  double t1349;
  double t1352;
  double t1497;
  double t2125;
  double t2130;
  double t2134;
  double t2143;
  double t1565;
  double t2230;
  double t2263;
  double t2268;
  double t2309;
  double t1587;
  double t1593;
  double t2367;
  double t2372;
  double t2374;
  double t2375;
  double t1689;
  double t1715;
  double t1716;
  double t1723;
  double t1790;
  double t1810;
  double t1824;
  double t1841;
  double t2684;
  double t2686;
  double t2698;
  double t2711;
  double t2736;
  double t2765;
  double t2792;
  double t2802;
  double t2805;
  double t2813;
  double t2821;
  double t2838;
  double t2870;
  double t2874;
  double t2884;
  double t2894;
  double t2930;
  double t2974;
  double t2999;
  double t3007;
  double t3036;
  double t3054;
  double t3071;
  double t3084;
  t88 = Cos(var1[16]);
  t91 = -1.*t88;
  t104 = 1. + t91;
  t118 = Sin(var1[16]);
  t13 = Cos(var1[4]);
  t24 = Cos(var1[15]);
  t35 = -1.*t24;
  t36 = 1. + t35;
  t49 = -0.15121*t36;
  t62 = Sin(var1[15]);
  t139 = -1. + t88;
  t141 = 4.e-6*t139;
  t19 = Cos(var1[5]);
  t236 = Sin(var1[5]);
  t299 = 7.e-6*t104;
  t110 = 2.8e-11*t104;
  t639 = Cos(var1[17]);
  t643 = -1.*t639;
  t656 = 1. + t643;
  t697 = Sin(var1[17]);
  t166 = Sin(var1[4]);
  t454 = -4.e-6*t118;
  t380 = -1.*t13*t19*t62;
  t391 = -1.*t24*t13*t236;
  t403 = t380 + t391;
  t569 = t24*t13*t19;
  t577 = -1.*t13*t62*t236;
  t594 = t569 + t577;
  t733 = 2.8e-11*t656;
  t142 = -7.e-6*t118;
  t826 = -2.8e-11*t104;
  t119 = -1.*t118;
  t690 = 7.e-6*t656;
  t1005 = -1. + t639;
  t1047 = 4.e-6*t1005;
  t1152 = 4.e-6*t104;
  t321 = 7.e-6*t118;
  t835 = -7.e-6*t104;
  t309 = 4.e-6*t118;
  t1274 = 4.e-6*t697;
  t827 = t826 + t118;
  t829 = t827*t166;
  t836 = t835 + t454;
  t839 = t836*t403;
  t841 = -1.000000000016*t104;
  t848 = 1. + t841;
  t862 = t848*t594;
  t877 = t829 + t839 + t862;
  t1345 = 7.e-6*t697;
  t1083 = -1.000000000049*t104;
  t1144 = 1. + t1083;
  t1146 = t1144*t166;
  t1156 = t1152 + t142;
  t1188 = t1156*t403;
  t1194 = t826 + t119;
  t1214 = t1194*t594;
  t1224 = t1146 + t1188 + t1214;
  t1390 = t1152 + t321;
  t1395 = t1390*t166;
  t1396 = -6.5e-11*t104;
  t1426 = 1. + t1396;
  t1447 = t1426*t403;
  t1448 = t835 + t309;
  t1450 = t1448*t594;
  t1474 = t1395 + t1447 + t1450;
  t899 = -1.*t697;
  t1523 = 4.e-6*t656;
  t1062 = -7.e-6*t697;
  t1686 = -2.8e-11*t656;
  t1487 = -7.e-6*t656;
  t701 = -4.e-6*t697;
  t85 = 1.5843479999999999e-12*var1[16];
  t107 = -0.03874900000889869*t104;
  t124 = t110 + t119;
  t137 = -0.281211000004*t124;
  t145 = t141 + t142;
  t147 = -1.8134809999999998e-6*t145;
  t151 = t85 + t107 + t137 + t147;
  t66 = -0.15121*t62;
  t71 = t49 + t66;
  t1907 = Sin(var1[3]);
  t208 = 0.15121*t62;
  t229 = t49 + t208;
  t1924 = Cos(var1[3]);
  t291 = 3.9608699999999997e-7*var1[16];
  t296 = -1.1787626499999999e-16*t104;
  t311 = t299 + t309;
  t313 = -0.281211000004*t311;
  t327 = t141 + t321;
  t329 = -0.038749000006999997*t327;
  t342 = t291 + t296 + t313 + t329;
  t1917 = t19*t1907*t166;
  t1941 = t1924*t236;
  t1965 = t1917 + t1941;
  t1981 = t1924*t19;
  t1986 = -1.*t1907*t166*t236;
  t1987 = t1981 + t1986;
  t442 = -2.7726089999999997e-12*var1[16];
  t447 = -0.2812110000084994*t104;
  t481 = t299 + t454;
  t490 = -1.8134809999999998e-6*t481;
  t494 = t110 + t118;
  t521 = -0.038749000006999997*t494;
  t542 = t442 + t447 + t490 + t521;
  t634 = -1.9784030000000015e-12*var1[17];
  t671 = -0.5031510000160505*t656;
  t704 = t690 + t701;
  t711 = -3.367757e-6*t704;
  t750 = t733 + t697;
  t767 = -0.038575000014*t750;
  t806 = t634 + t671 + t711 + t767;
  t2042 = -1.*t62*t1965;
  t2054 = t24*t1987;
  t2086 = t2042 + t2054;
  t2100 = t24*t1965;
  t2111 = t62*t1987;
  t2122 = t2100 + t2111;
  t886 = 1.1305160000000008e-12*var1[17];
  t893 = -0.03857500001589017*t656;
  t922 = t733 + t899;
  t953 = -0.5031510000080001*t922;
  t1066 = t1047 + t1062;
  t1073 = -3.367757e-6*t1066;
  t1075 = t886 + t893 + t953 + t1073;
  t1259 = 2.826290000000002e-7*var1[17];
  t1273 = -2.18904205e-16*t656;
  t1307 = t690 + t1274;
  t1309 = -0.5031510000080001*t1307;
  t1346 = t1047 + t1345;
  t1349 = -0.038575000014*t1346;
  t1352 = t1259 + t1273 + t1309 + t1349;
  t1497 = t1487 + t1274;
  t2125 = -1.*t13*t827*t1907;
  t2130 = t836*t2086;
  t2134 = t848*t2122;
  t2143 = t2125 + t2130 + t2134;
  t1565 = t1523 + t1345;
  t2230 = -1.*t1144*t13*t1907;
  t2263 = t1156*t2086;
  t2268 = t1194*t2122;
  t2309 = t2230 + t2263 + t2268;
  t1587 = -6.5e-11*t656;
  t1593 = 1. + t1587;
  t2367 = -1.*t13*t1390*t1907;
  t2372 = t1426*t2086;
  t2374 = t1448*t2122;
  t2375 = t2367 + t2372 + t2374;
  t1689 = t1686 + t899;
  t1715 = -1.000000000049*t656;
  t1716 = 1. + t1715;
  t1723 = t1523 + t1062;
  t1790 = -1.000000000016*t656;
  t1810 = 1. + t1790;
  t1824 = t1686 + t697;
  t1841 = t1487 + t701;
  t2684 = -1.*t1924*t19*t166;
  t2686 = t1907*t236;
  t2698 = t2684 + t2686;
  t2711 = t19*t1907;
  t2736 = t1924*t166*t236;
  t2765 = t2711 + t2736;
  t2792 = -1.*t62*t2698;
  t2802 = t24*t2765;
  t2805 = t2792 + t2802;
  t2813 = t24*t2698;
  t2821 = t62*t2765;
  t2838 = t2813 + t2821;
  t2870 = t1924*t13*t827;
  t2874 = t836*t2805;
  t2884 = t848*t2838;
  t2894 = t2870 + t2874 + t2884;
  t2930 = t1144*t1924*t13;
  t2974 = t1156*t2805;
  t2999 = t1194*t2838;
  t3007 = t2930 + t2974 + t2999;
  t3036 = t1924*t13*t1390;
  t3054 = t1426*t2805;
  t3071 = t1448*t2838;
  t3084 = t3036 + t3054 + t3071;
  p_output1[0]=t1075*t1224 + t1352*t1474 + t151*t166 - 1.*t13*t229*t236 + t342*t403 + t542*t594 + t13*t19*t71 + t806*t877 - 0.148715*(t1224*t1565 + t1474*t1593 + t1497*t877) - 0.038576*(t1224*t1716 + t1474*t1723 + t1689*t877) - 0.80315*(t1224*t1824 + t1474*t1841 + t1810*t877) + var1[0] - 1.*var2[0];
  p_output1[1]=-1.*t13*t151*t1907 + t1987*t229 + t1075*t2309 + t1352*t2375 - 0.148715*(t1497*t2143 + t1565*t2309 + t1593*t2375) - 0.038576*(t1689*t2143 + t1716*t2309 + t1723*t2375) - 0.80315*(t1810*t2143 + t1824*t2309 + t1841*t2375) + t2086*t342 + t2122*t542 + t1965*t71 + t2143*t806 + var1[1] - 1.*var2[1];
  p_output1[2]=t13*t151*t1924 + t229*t2765 + t1075*t3007 + t1352*t3084 - 0.148715*(t1497*t2894 + t1565*t3007 + t1593*t3084) - 0.038576*(t1689*t2894 + t1716*t3007 + t1723*t3084) - 0.80315*(t1810*t2894 + t1824*t3007 + t1841*t3084) + t2805*t342 + t2838*t542 + t2698*t71 + t2894*t806 + var1[2] - 1.*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "h_RrFoot_ParallelStance.hh"

namespace SymFunction
{

void h_RrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
