/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:49:29 GMT+02:00
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
  double t1434;
  double t16;
  double t963;
  double t1448;
  double t1877;
  double t1885;
  double t1928;
  double t1783;
  double t1858;
  double t1935;
  double t1840;
  double t1947;
  double t1499;
  double t1298;
  double t1450;
  double t1472;
  double t1930;
  double t1970;
  double t2107;
  double t2327;
  double t2151;
  double t2165;
  double t2166;
  double t2249;
  double t2174;
  double t2176;
  double t2201;
  double t2231;
  double t2242;
  double t2245;
  double t2271;
  double t2277;
  double t2287;
  double t2328;
  double t2331;
  double t2338;
  double t2378;
  double t2385;
  double t2386;
  double t2472;
  double t2489;
  double t2490;
  double t2518;
  double t2520;
  double t2526;
  double t2220;
  double t2247;
  double t2248;
  double t2571;
  double t2577;
  double t2587;
  double t2613;
  double t2629;
  double t2630;
  double t2654;
  double t2664;
  double t2668;
  double t2673;
  double t2700;
  double t2702;
  double t2703;
  double t2717;
  double t2762;
  double t2772;
  double t2597;
  double t2607;
  double t2739;
  double t2740;
  double t2789;
  double t2790;
  double t2832;
  double t2851;
  double t2863;
  double t2864;
  double t2865;
  double t2741;
  double t2777;
  double t2782;
  double t2861;
  double t2869;
  double t2877;
  double t2904;
  double t2906;
  double t2913;
  double t1508;
  double t2113;
  double t2140;
  double t2786;
  double t2927;
  double t2950;
  double t2975;
  double t2993;
  double t3011;
  double t3036;
  double t3046;
  t1434 = Cos(var1[16]);
  t16 = Cos(var1[17]);
  t963 = Sin(var1[16]);
  t1448 = Sin(var1[17]);
  t1877 = -1.*t1434*t16;
  t1885 = -1.*t963*t1448;
  t1928 = t1877 + t1885;
  t1783 = Cos(var1[4]);
  t1858 = Cos(var1[5]);
  t1935 = Sin(var1[15]);
  t1840 = Cos(var1[15]);
  t1947 = Sin(var1[5]);
  t1499 = Sin(var1[4]);
  t1298 = -1.*t16*t963;
  t1450 = t1434*t1448;
  t1472 = t1298 + t1450;
  t1930 = t1840*t1858*t1928;
  t1970 = -1.*t1935*t1928*t1947;
  t2107 = t1930 + t1970;
  t2327 = Sin(var1[3]);
  t2151 = t1858*t1935;
  t2165 = t1840*t1947;
  t2166 = t2151 + t2165;
  t2249 = Cos(var1[3]);
  t2174 = t1434*t16;
  t2176 = t963*t1448;
  t2201 = t2174 + t2176;
  t2231 = t1840*t1858*t1472;
  t2242 = -1.*t1935*t1472*t1947;
  t2245 = t2231 + t2242;
  t2271 = t1858*t1935*t1928;
  t2277 = t1840*t1928*t1947;
  t2287 = t2271 + t2277;
  t2328 = t1783*t1472;
  t2331 = -1.*t1499*t2107;
  t2338 = t2328 + t2331;
  t2378 = -1.*t1840*t1858;
  t2385 = t1935*t1947;
  t2386 = t2378 + t2385;
  t2472 = t1858*t1935*t1472;
  t2489 = t1840*t1472*t1947;
  t2490 = t2472 + t2489;
  t2518 = t1783*t2201;
  t2520 = -1.*t1499*t2245;
  t2526 = t2518 + t2520;
  t2220 = t2201*t1499;
  t2247 = t1783*t2245;
  t2248 = t2220 + t2247;
  t2571 = -1.*t1840;
  t2577 = 1. + t2571;
  t2587 = -0.15121*t2577;
  t2613 = -1.*t1434;
  t2629 = 1. + t2613;
  t2630 = -0.28121*t2629;
  t2654 = -1.*t16;
  t2664 = 1. + t2654;
  t2668 = -0.50321*t2664;
  t2673 = -0.19821*t16;
  t2700 = t2668 + t2673;
  t2702 = t1434*t2700;
  t2703 = 0.305*t963*t1448;
  t2717 = t2630 + t2702 + t2703;
  t2762 = t1840*t2717;
  t2772 = t2587 + t2762;
  t2597 = -0.15121*t1840;
  t2607 = 0.15121*t1935;
  t2739 = t1935*t2717;
  t2740 = t2587 + t2597 + t2607 + t2739;
  t2789 = 0.28121*t963;
  t2790 = t2700*t963;
  t2832 = -0.305*t1434*t1448;
  t2851 = t2789 + t2790 + t2832;
  t2863 = t1858*t2772;
  t2864 = -1.*t2740*t1947;
  t2865 = t2863 + t2864;
  t2741 = t1858*t2740;
  t2777 = t2772*t1947;
  t2782 = t2741 + t2777;
  t2861 = t2851*t1499;
  t2869 = t1783*t2865;
  t2877 = t2861 + t2869;
  t2904 = t1783*t2851;
  t2906 = -1.*t1499*t2865;
  t2913 = t2904 + t2906;
  t1508 = t1472*t1499;
  t2113 = t1783*t2107;
  t2140 = t1508 + t2113;
  t2786 = -1.*t2386*t2782;
  t2927 = t2490*t2782;
  t2950 = -1.*t2490*t2782;
  t2975 = t2287*t2782;
  t2993 = t2386*t2782;
  t3011 = -1.*t2287*t2782;
  t3036 = -1.*t2851*t2201;
  t3046 = t2851*t1472;
  p_output1[0]=t2140;
  p_output1[1]=t1783*t2166;
  p_output1[2]=t2248;
  p_output1[3]=t2249*t2287 - 1.*t2327*t2338;
  p_output1[4]=t1499*t2166*t2327 + t2249*t2386;
  p_output1[5]=t2249*t2490 - 1.*t2327*t2526;
  p_output1[6]=t2287*t2327 + t2249*t2338;
  p_output1[7]=-1.*t1499*t2166*t2249 + t2327*t2386;
  p_output1[8]=t2327*t2490 + t2249*t2526;
  p_output1[9]=t2248*(t2786 - 1.*t1783*t2166*t2877 + t1499*t2166*t2913) + t1783*t2166*(t2248*t2877 + t2526*t2913 + t2927);
  p_output1[10]=t2140*(-1.*t2248*t2877 - 1.*t2526*t2913 + t2950) + t2248*(t2140*t2877 + t2338*t2913 + t2975);
  p_output1[11]=t2140*(t1783*t2166*t2877 - 1.*t1499*t2166*t2913 + t2993) + t1783*t2166*(-1.*t2140*t2877 - 1.*t2338*t2913 + t3011);
  p_output1[12]=t2490*(t2786 - 1.*t2166*t2865) + t2386*(t2201*t2851 + t2245*t2865 + t2927);
  p_output1[13]=t2287*(-1.*t2245*t2865 + t2950 + t3036) + t2490*(t2107*t2865 + t2975 + t3046);
  p_output1[14]=t2287*(t2166*t2865 + t2993) + t2386*(-1.*t1472*t2851 - 1.*t2107*t2865 + t3011);
  p_output1[15]=t2201*(t1840*t2740 - 1.*t1935*t2772);
  p_output1[16]=t1472*(-1.*t1472*t1935*t2740 - 1.*t1472*t1840*t2772 + t3036) + t2201*(t1928*t1935*t2740 + t1840*t1928*t2772 + t3046);
  p_output1[17]=t1472*(-1.*t1840*t2740 + t1935*t2772);
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=-0.15121*t1928 - 0.15121*t2201;
  p_output1[46]=-0.15121 + t1472*(-1.*t1472*t2717 + t3036) + t2201*(t1928*t2717 + t3046);
  p_output1[47]=0;
  p_output1[48]=0.28121*t1448 - 0.305*t1448*t16 + t1448*t2700;
  p_output1[49]=0;
  p_output1[50]=0.305*Power(t1448,2) + 0.28121*t16 + t16*t2700;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=-0.305;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jh_RrFoot_ParallelStance.hh"

namespace SymFunction
{

void Jh_RrFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
