/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:03:37 GMT+02:00
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
  double t450;
  double t115;
  double t354;
  double t576;
  double t829;
  double t842;
  double t844;
  double t716;
  double t822;
  double t846;
  double t789;
  double t850;
  double t592;
  double t950;
  double t1086;
  double t1097;
  double t434;
  double t580;
  double t590;
  double t845;
  double t856;
  double t861;
  double t1308;
  double t886;
  double t892;
  double t897;
  double t1218;
  double t1118;
  double t1119;
  double t1120;
  double t1282;
  double t1303;
  double t1304;
  double t1313;
  double t1345;
  double t1425;
  double t1530;
  double t1535;
  double t1536;
  double t1630;
  double t1640;
  double t1651;
  double t1714;
  double t1719;
  double t1740;
  double t932;
  double t1124;
  double t1203;
  double t2050;
  double t2059;
  double t2129;
  double t2130;
  double t2150;
  double t2161;
  double t2175;
  double t2187;
  double t2188;
  double t2192;
  double t2235;
  double t2280;
  double t2287;
  double t2300;
  double t2310;
  double t2313;
  double t2066;
  double t2080;
  double t2111;
  double t2295;
  double t2296;
  double t2374;
  double t2382;
  double t2387;
  double t2392;
  double t2399;
  double t2431;
  double t2436;
  double t2299;
  double t2329;
  double t2355;
  double t2395;
  double t2451;
  double t2454;
  double t2456;
  double t2465;
  double t2515;
  double t601;
  double t881;
  double t882;
  double t2363;
  double t2603;
  double t2650;
  double t2688;
  double t2710;
  double t2747;
  double t2915;
  double t2952;
  t450 = Cos(var1[13]);
  t115 = Cos(var1[14]);
  t354 = Sin(var1[13]);
  t576 = Sin(var1[14]);
  t829 = t450*t115;
  t842 = t354*t576;
  t844 = t829 + t842;
  t716 = Cos(var1[4]);
  t822 = Cos(var1[5]);
  t846 = Sin(var1[12]);
  t789 = Cos(var1[12]);
  t850 = Sin(var1[5]);
  t592 = Sin(var1[4]);
  t950 = t115*t354;
  t1086 = -1.*t450*t576;
  t1097 = t950 + t1086;
  t434 = -1.*t115*t354;
  t580 = t450*t576;
  t590 = t434 + t580;
  t845 = t789*t822*t844;
  t856 = -1.*t846*t844*t850;
  t861 = t845 + t856;
  t1308 = Sin(var1[3]);
  t886 = -1.*t822*t846;
  t892 = -1.*t789*t850;
  t897 = t886 + t892;
  t1218 = Cos(var1[3]);
  t1118 = t789*t822*t1097;
  t1119 = -1.*t846*t1097*t850;
  t1120 = t1118 + t1119;
  t1282 = t822*t846*t844;
  t1303 = t789*t844*t850;
  t1304 = t1282 + t1303;
  t1313 = t716*t590;
  t1345 = -1.*t592*t861;
  t1425 = t1313 + t1345;
  t1530 = t789*t822;
  t1535 = -1.*t846*t850;
  t1536 = t1530 + t1535;
  t1630 = t822*t846*t1097;
  t1640 = t789*t1097*t850;
  t1651 = t1630 + t1640;
  t1714 = t716*t844;
  t1719 = -1.*t592*t1120;
  t1740 = t1714 + t1719;
  t932 = t844*t592;
  t1124 = t716*t1120;
  t1203 = t932 + t1124;
  t2050 = -1.*t789;
  t2059 = 1. + t2050;
  t2129 = -1.*t450;
  t2130 = 1. + t2129;
  t2150 = 0.28121*t2130;
  t2161 = -1.*t115;
  t2175 = 1. + t2161;
  t2187 = 0.50321*t2175;
  t2188 = 0.19821*t115;
  t2192 = t2187 + t2188;
  t2235 = t450*t2192;
  t2280 = -0.305*t354*t576;
  t2287 = t2150 + t2235 + t2280;
  t2300 = 0.15121*t2059;
  t2310 = t789*t2287;
  t2313 = t2300 + t2310;
  t2066 = -0.15121*t2059;
  t2080 = -0.15121*t789;
  t2111 = -0.15121*t846;
  t2295 = t846*t2287;
  t2296 = t2066 + t2080 + t2111 + t2295;
  t2374 = 0.28121*t354;
  t2382 = -1.*t2192*t354;
  t2387 = -0.305*t450*t576;
  t2392 = t2374 + t2382 + t2387;
  t2399 = t822*t2313;
  t2431 = -1.*t2296*t850;
  t2436 = t2399 + t2431;
  t2299 = t822*t2296;
  t2329 = t2313*t850;
  t2355 = t2299 + t2329;
  t2395 = t2392*t592;
  t2451 = t716*t2436;
  t2454 = t2395 + t2451;
  t2456 = t716*t2392;
  t2465 = -1.*t592*t2436;
  t2515 = t2456 + t2465;
  t601 = t590*t592;
  t881 = t716*t861;
  t882 = t601 + t881;
  t2363 = -1.*t1536*t2355;
  t2603 = t1651*t2355;
  t2650 = -1.*t1651*t2355;
  t2688 = t1304*t2355;
  t2710 = t1536*t2355;
  t2747 = -1.*t1304*t2355;
  t2915 = -1.*t2392*t844;
  t2952 = t2392*t590;
  p_output1[0]=t882;
  p_output1[1]=t716*t897;
  p_output1[2]=t1203;
  p_output1[3]=t1218*t1304 - 1.*t1308*t1425;
  p_output1[4]=t1218*t1536 + t1308*t592*t897;
  p_output1[5]=t1218*t1651 - 1.*t1308*t1740;
  p_output1[6]=t1304*t1308 + t1218*t1425;
  p_output1[7]=t1308*t1536 - 1.*t1218*t592*t897;
  p_output1[8]=t1308*t1651 + t1218*t1740;
  p_output1[9]=(t1203*t2454 + t1740*t2515 + t2603)*t716*t897 + t1203*(t2363 + t2515*t592*t897 - 1.*t2454*t716*t897);
  p_output1[10]=(-1.*t1203*t2454 - 1.*t1740*t2515 + t2650)*t882 + t1203*(t1425*t2515 + t2688 + t2454*t882);
  p_output1[11]=t716*(-1.*t1425*t2515 + t2747 - 1.*t2454*t882)*t897 + t882*(t2710 - 1.*t2515*t592*t897 + t2454*t716*t897);
  p_output1[12]=t1536*(t1120*t2436 + t2603 + t2392*t844) + t1651*(t2363 - 1.*t2436*t897);
  p_output1[13]=t1304*(-1.*t1120*t2436 + t2650 + t2915) + t1651*(t2688 + t2952 + t2436*t861);
  p_output1[14]=t1536*(t2747 - 1.*t2392*t590 - 1.*t2436*t861) + t1304*(t2710 + t2436*t897);
  p_output1[15]=t844*(-1.*t2296*t789 + t2313*t846);
  p_output1[16]=t590*(t2915 - 1.*t1097*t2313*t789 - 1.*t1097*t2296*t846) + t844*(t2952 + t2313*t789*t844 + t2296*t844*t846);
  p_output1[17]=t590*(t2296*t789 - 1.*t2313*t846);
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
  p_output1[37]=-0.15121 + (-1.*t1097*t2287 + t2915)*t590 + t844*(t2952 + t2287*t844);
  p_output1[38]=-0.15121*t1097 - 0.15121*t590;
  p_output1[39]=0.28121*t576 - 0.305*t115*t576 - 1.*t2192*t576;
  p_output1[40]=0;
  p_output1[41]=0.28121*t115 - 1.*t115*t2192 + 0.305*Power(t576,2);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=-0.305;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
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

#include "Jh_FrFoot_DiagonalStance.hh"

namespace SymFunction
{

void Jh_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
