/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 17:51:42 GMT+01:00
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
  double t10;
  double t51;
  double t53;
  double t54;
  double t64;
  double t91;
  double t23;
  double t218;
  double t501;
  double t547;
  double t619;
  double t764;
  double t1480;
  double t1595;
  double t377;
  double t385;
  double t435;
  double t1127;
  double t1167;
  double t1227;
  double t1707;
  double t1735;
  double t1744;
  double t1754;
  double t1596;
  double t1599;
  double t1606;
  double t1635;
  double t1659;
  double t1688;
  double t2373;
  double t2149;
  double t2154;
  double t2156;
  double t2239;
  double t1839;
  double t1935;
  double t1961;
  double t1970;
  double t1988;
  double t2002;
  double t134;
  double t151;
  double t2664;
  double t2638;
  double t231;
  double t245;
  double t2661;
  double t2670;
  double t2716;
  double t2744;
  double t2793;
  double t2879;
  double t483;
  double t724;
  double t834;
  double t931;
  double t1234;
  double t1368;
  double t1388;
  double t1502;
  double t1559;
  double t1561;
  double t1572;
  double t2894;
  double t2897;
  double t3008;
  double t3021;
  double t3023;
  double t3075;
  double t1701;
  double t1750;
  double t1766;
  double t1803;
  double t2020;
  double t2023;
  double t2030;
  double t2240;
  double t2243;
  double t2253;
  double t2341;
  double t2388;
  double t2415;
  double t3115;
  double t3117;
  double t3126;
  double t3131;
  double t3192;
  double t3213;
  double t3221;
  double t3231;
  double t3148;
  double t3165;
  double t3176;
  double t3178;
  double t2531;
  double t2560;
  double t3631;
  double t3640;
  double t3662;
  double t3727;
  double t3790;
  double t3795;
  double t3861;
  double t3863;
  double t3866;
  double t3879;
  double t3888;
  double t3942;
  double t3962;
  double t3968;
  double t3980;
  double t3994;
  double t4046;
  double t4052;
  double t4065;
  double t4068;
  double t4000;
  double t4008;
  double t4020;
  double t4025;
  t10 = Cos(var1[4]);
  t51 = Cos(var1[6]);
  t53 = -1.*t51;
  t54 = 1. + t53;
  t64 = 0.15121*t54;
  t91 = Sin(var1[6]);
  t23 = Sin(var1[5]);
  t218 = Cos(var1[5]);
  t501 = Cos(var1[7]);
  t547 = -1.*t501;
  t619 = 1. + t547;
  t764 = Sin(var1[7]);
  t1480 = Sin(var1[4]);
  t1595 = -1. + t501;
  t377 = -1.*t10*t51*t23;
  t385 = -1.*t10*t218*t91;
  t435 = t377 + t385;
  t1127 = t10*t218*t51;
  t1167 = -1.*t10*t23*t91;
  t1227 = t1127 + t1167;
  t1707 = Cos(var1[8]);
  t1735 = -1.*t1707;
  t1744 = 1. + t1735;
  t1754 = Sin(var1[8]);
  t1596 = 4.e-6*t1595*t1480;
  t1599 = 1.6e-11*t1595;
  t1606 = 1. + t1599;
  t1635 = t1606*t435;
  t1659 = 4.e-6*t1227*t764;
  t1688 = t1596 + t1635 + t1659;
  t2373 = -1. + t1707;
  t2149 = t501*t1480;
  t2154 = 4.e-6*t1595*t435;
  t2156 = t1227*t764;
  t2239 = t2149 + t2154 + t2156;
  t1839 = -1.000000000016*t619;
  t1935 = 1. + t1839;
  t1961 = t1935*t1227;
  t1970 = -1.*t1480*t764;
  t1988 = -4.e-6*t435*t764;
  t2002 = t1961 + t1970 + t1988;
  t134 = -0.15121*t91;
  t151 = t64 + t134;
  t2664 = Sin(var1[3]);
  t2638 = Cos(var1[3]);
  t231 = 0.15121*t91;
  t245 = t64 + t231;
  t2661 = t2638*t218;
  t2670 = -1.*t2664*t1480*t23;
  t2716 = t2661 + t2670;
  t2744 = t218*t2664*t1480;
  t2793 = t2638*t23;
  t2879 = t2744 + t2793;
  t483 = -1.2484e-7*var1[7];
  t724 = -1.5499600000248e-7*t619;
  t834 = 1.124840000016e-6*t764;
  t931 = t483 + t724 + t834;
  t1234 = 0.281210000008499*t619;
  t1368 = 0.03874900000062*t764;
  t1388 = t1234 + t1368;
  t1502 = 4.9936e-13*var1[7];
  t1559 = -0.03874900000062*t619;
  t1561 = 0.281210000004*t764;
  t1572 = t1502 + t1559 + t1561;
  t2894 = t51*t2716;
  t2897 = -1.*t2879*t91;
  t3008 = t2894 + t2897;
  t3021 = t51*t2879;
  t3023 = t2716*t91;
  t3075 = t3021 + t3023;
  t1701 = -1.284e-8*var1[8];
  t1750 = -1.5499600000248e-7*t1744;
  t1766 = 2.012840000032e-6*t1754;
  t1803 = t1701 + t1750 + t1766;
  t2020 = 0.503210000016051*t1744;
  t2023 = 0.03874900000062*t1754;
  t2030 = t2020 + t2023;
  t2240 = 5.136e-14*var1[8];
  t2243 = -0.03874900000062*t1744;
  t2253 = 0.503210000008*t1754;
  t2341 = t2240 + t2243 + t2253;
  t2388 = 1.6e-11*t2373;
  t2415 = 1. + t2388;
  t3115 = -4.e-6*t10*t1595*t2664;
  t3117 = t1606*t3008;
  t3126 = 4.e-6*t3075*t764;
  t3131 = t3115 + t3117 + t3126;
  t3192 = -1.*t10*t501*t2664;
  t3213 = 4.e-6*t1595*t3008;
  t3221 = t3075*t764;
  t3231 = t3192 + t3213 + t3221;
  t3148 = t1935*t3075;
  t3165 = t10*t2664*t764;
  t3176 = -4.e-6*t3008*t764;
  t3178 = t3148 + t3165 + t3176;
  t2531 = -1.000000000016*t1744;
  t2560 = 1. + t2531;
  t3631 = t218*t2664;
  t3640 = t2638*t1480*t23;
  t3662 = t3631 + t3640;
  t3727 = -1.*t2638*t218*t1480;
  t3790 = t2664*t23;
  t3795 = t3727 + t3790;
  t3861 = t51*t3662;
  t3863 = -1.*t3795*t91;
  t3866 = t3861 + t3863;
  t3879 = t51*t3795;
  t3888 = t3662*t91;
  t3942 = t3879 + t3888;
  t3962 = 4.e-6*t2638*t10*t1595;
  t3968 = t1606*t3866;
  t3980 = 4.e-6*t3942*t764;
  t3994 = t3962 + t3968 + t3980;
  t4046 = t2638*t10*t501;
  t4052 = 4.e-6*t1595*t3866;
  t4065 = t3942*t764;
  t4068 = t4046 + t4052 + t4065;
  t4000 = t1935*t3942;
  t4008 = -1.*t2638*t10*t764;
  t4020 = -4.e-6*t3866*t764;
  t4025 = t4000 + t4008 + t4020;
  p_output1[0]=t1227*t1388 + t1480*t1572 + t1688*t1803 + t2002*t2030 - 1.*t10*t151*t23 + t2239*t2341 - 0.03875*(t1754*t2002 + t1707*t2239 + 4.e-6*t1688*t2373) + 0.14871*(4.e-6*t1754*t2002 + 4.e-6*t2239*t2373 + t1688*t2415) + t10*t218*t245 + 0.80321*(-4.e-6*t1688*t1754 - 1.*t1754*t2239 + t2002*t2560) + t435*t931 + var1[0] - 1.*var2[0];
  p_output1[1]=-1.*t10*t1572*t2664 + t151*t2716 + t245*t2879 + t1388*t3075 + t1803*t3131 + t2030*t3178 + t2341*t3231 - 0.03875*(4.e-6*t2373*t3131 + t1754*t3178 + t1707*t3231) + 0.80321*(-4.e-6*t1754*t3131 + t2560*t3178 - 1.*t1754*t3231) + 0.14871*(t2415*t3131 + 4.e-6*t1754*t3178 + 4.e-6*t2373*t3231) + t3008*t931 + var1[1] - 1.*var2[1];
  p_output1[2]=t10*t1572*t2638 + t151*t3662 + t245*t3795 + t1388*t3942 + t1803*t3994 + t2030*t4025 + t2341*t4068 - 0.03875*(4.e-6*t2373*t3994 + t1754*t4025 + t1707*t4068) + 0.80321*(-4.e-6*t1754*t3994 + t2560*t4025 - 1.*t1754*t4068) + 0.14871*(t2415*t3994 + 4.e-6*t1754*t4025 + 4.e-6*t2373*t4068) + t3866*t931 + var1[2] - 1.*var2[2];
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

#include "h_FlFoot_QuadrupleStance.hh"

namespace QuadrupleStance
{

void h_FlFoot_QuadrupleStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
