/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 14:27:13 GMT+02:00
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
  double t2501;
  double t1744;
  double t2091;
  double t2595;
  double t2359;
  double t2596;
  double t2684;
  double t6273;
  double t3340;
  double t584;
  double t5935;
  double t6380;
  double t5943;
  double t5945;
  double t5946;
  double t5939;
  double t5995;
  double t6381;
  double t6396;
  double t7516;
  double t7560;
  double t6849;
  double t6854;
  double t7107;
  double t7137;
  double t7249;
  double t7301;
  double t7519;
  double t7522;
  double t7524;
  double t7603;
  double t7606;
  double t7620;
  double t7828;
  double t7861;
  double t8132;
  double t8356;
  double t8358;
  double t8374;
  double t8381;
  double t8900;
  double t8937;
  double t6844;
  double t7334;
  double t7493;
  double t15204;
  double t15215;
  double t15227;
  double t15245;
  double t15261;
  double t15272;
  double t15273;
  double t16966;
  double t16967;
  double t6750;
  double t6811;
  double t6836;
  double t15188;
  double t15237;
  double t16968;
  double t16969;
  double t16974;
  double t16975;
  double t16976;
  double t16977;
  double t16978;
  double t16981;
  double t15141;
  double t15158;
  double t15170;
  double t15180;
  double t16971;
  double t16972;
  double t16994;
  double t16996;
  double t16997;
  double t16999;
  double t17000;
  double t17001;
  double t16973;
  double t16984;
  double t16985;
  double t16998;
  double t17003;
  double t17004;
  double t17006;
  double t17007;
  double t17008;
  double t5044;
  double t6397;
  double t6417;
  double t16986;
  double t17015;
  double t17200;
  double t17208;
  double t17219;
  double t17233;
  double t17243;
  double t17247;
  double t17406;
  double t17402;
  double t17414;
  double t17421;
  double t17450;
  double t17442;
  t2501 = Cos(var1[13]);
  t1744 = Cos(var1[14]);
  t2091 = Sin(var1[13]);
  t2595 = Sin(var1[14]);
  t2359 = t1744*t2091;
  t2596 = -1.*t2501*t2595;
  t2684 = t2359 + t2596;
  t6273 = Sin(var1[12]);
  t3340 = Sin(var1[4]);
  t584 = Cos(var1[12]);
  t5935 = Cos(var1[4]);
  t6380 = Sin(var1[5]);
  t5943 = t2501*t1744;
  t5945 = t2091*t2595;
  t5946 = t5943 + t5945;
  t5939 = Cos(var1[5]);
  t5995 = t5939*t5946;
  t6381 = t6273*t2684*t6380;
  t6396 = t5995 + t6381;
  t7516 = Cos(var1[3]);
  t7560 = Sin(var1[3]);
  t6849 = -1.*t1744*t2091;
  t6854 = t2501*t2595;
  t7107 = t6849 + t6854;
  t7137 = t5939*t7107;
  t7249 = t6273*t5946*t6380;
  t7301 = t7137 + t7249;
  t7519 = -1.*t5939*t6273*t2684;
  t7522 = t5946*t6380;
  t7524 = t7519 + t7522;
  t7603 = t584*t5935*t2684;
  t7606 = -1.*t3340*t6396;
  t7620 = t7603 + t7606;
  t7828 = t5935*t6273;
  t7861 = t584*t3340*t6380;
  t8132 = t7828 + t7861;
  t8356 = -1.*t5939*t6273*t5946;
  t8358 = t7107*t6380;
  t8374 = t8356 + t8358;
  t8381 = t584*t5935*t5946;
  t8900 = -1.*t3340*t7301;
  t8937 = t8381 + t8900;
  t6844 = t584*t5946*t3340;
  t7334 = t5935*t7301;
  t7493 = t6844 + t7334;
  t15204 = -0.0641*t1744;
  t15215 = -0.28*t2595;
  t15227 = t15204 + t15215;
  t15245 = -1.*t1744;
  t15261 = 1. + t15245;
  t15272 = 0.075*t15261;
  t15273 = 0.355*t1744;
  t16966 = -0.0641*t2595;
  t16967 = t15272 + t15273 + t16966;
  t6750 = t6273*t3340;
  t6811 = -1.*t584*t5935*t6380;
  t6836 = t6750 + t6811;
  t15188 = -0.325*t2091;
  t15237 = t2501*t15227;
  t16968 = t2091*t16967;
  t16969 = t15188 + t15237 + t16968;
  t16974 = -1.*t2501;
  t16975 = 1. + t16974;
  t16976 = 0.325*t16975;
  t16977 = -1.*t2091*t15227;
  t16978 = t2501*t16967;
  t16981 = t16976 + t16977 + t16978;
  t15141 = -1.*t584;
  t15158 = 1. + t15141;
  t15170 = -0.1575*t15158;
  t15180 = -0.2255*t584;
  t16971 = -1.*t6273*t16969;
  t16972 = t15170 + t15180 + t16971;
  t16994 = -0.068*t6273;
  t16996 = t584*t16969;
  t16997 = t16994 + t16996;
  t16999 = t5939*t16981;
  t17000 = -1.*t16972*t6380;
  t17001 = t16999 + t17000;
  t16973 = t5939*t16972;
  t16984 = t16981*t6380;
  t16985 = t16973 + t16984;
  t16998 = t16997*t3340;
  t17003 = t5935*t17001;
  t17004 = t16998 + t17003;
  t17006 = t5935*t16997;
  t17007 = -1.*t3340*t17001;
  t17008 = t17006 + t17007;
  t5044 = t584*t2684*t3340;
  t6397 = t5935*t6396;
  t6417 = t5044 + t6397;
  t16986 = -1.*t584*t5939*t16985;
  t17015 = t16985*t8374;
  t17200 = t16985*t7524;
  t17208 = -1.*t16985*t8374;
  t17219 = t584*t5939*t16985;
  t17233 = -1.*t16985*t7524;
  t17243 = -1.*t6273*t16997;
  t17247 = t584*t16997*t5946;
  t17406 = -1.*t584*t16997*t5946;
  t17402 = t584*t16997*t2684;
  t17414 = t6273*t16997;
  t17421 = -1.*t584*t16997*t2684;
  t17450 = t16981*t5946;
  t17442 = -1.*t16981*t7107;
  p_output1[0]=t6417;
  p_output1[1]=t6836;
  p_output1[2]=t7493;
  p_output1[3]=t7516*t7524 - 1.*t7560*t7620;
  p_output1[4]=t584*t5939*t7516 - 1.*t7560*t8132;
  p_output1[5]=t7516*t8374 - 1.*t7560*t8937;
  p_output1[6]=t7524*t7560 + t7516*t7620;
  p_output1[7]=t584*t5939*t7560 + t7516*t8132;
  p_output1[8]=t7560*t8374 + t7516*t8937;
  p_output1[9]=t7493*(t16986 - 1.*t17004*t6836 - 1.*t17008*t8132) + t6836*(t17015 + t17004*t7493 + t17008*t8937);
  p_output1[10]=t7493*(t17200 + t17004*t6417 + t17008*t7620) + t6417*(t17208 - 1.*t17004*t7493 - 1.*t17008*t8937);
  p_output1[11]=t6836*(t17233 - 1.*t17004*t6417 - 1.*t17008*t7620) + t6417*(t17219 + t17004*t6836 + t17008*t8132);
  p_output1[12]=t584*t5939*(t17015 + t17247 + t17001*t7301) + (t16986 + t17243 + t17001*t584*t6380)*t8374;
  p_output1[13]=(t17208 + t17406 - 1.*t17001*t7301)*t7524 + (t17200 + t17402 + t17001*t6396)*t8374;
  p_output1[14]=t584*t5939*(t17233 + t17421 - 1.*t17001*t6396) + (t17219 + t17414 - 1.*t17001*t584*t6380)*t7524;
  p_output1[15]=t584*(t17243 - 1.*t16972*t584)*t5946 + t6273*(t17247 - 1.*t16972*t5946*t6273 + t16981*t7107);
  p_output1[16]=t584*t5946*(t17402 + t17450 - 1.*t16972*t2684*t6273) + t2684*t584*(t17406 + t17442 + t16972*t5946*t6273);
  p_output1[17]=t2684*t584*(t17414 + t16972*t584) + t6273*(t17421 - 1.*t16981*t5946 + t16972*t2684*t6273);
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
  p_output1[36]=0.1575*t2684 + 0.2255*t7107;
  p_output1[37]=t5946*(t17442 - 1.*t16969*t5946) + (t17450 + t16969*t2684)*t7107;
  p_output1[38]=-0.068*t5946;
  p_output1[39]=-1.*t15227*t1744 + 0.325*t2595 - 1.*t16967*t2595;
  p_output1[40]=0;
  p_output1[41]=-0.325*t1744 + t16967*t1744 - 1.*t15227*t2595;
  p_output1[42]=-0.0641;
  p_output1[43]=0;
  p_output1[44]=-0.28;
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
