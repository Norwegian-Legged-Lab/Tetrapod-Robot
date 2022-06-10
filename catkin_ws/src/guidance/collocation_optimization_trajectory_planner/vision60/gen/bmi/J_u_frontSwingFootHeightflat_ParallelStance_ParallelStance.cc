/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:57:40 GMT+02:00
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
  double t1712;
  double t1292;
  double t1444;
  double t1471;
  double t1854;
  double t2155;
  double t2219;
  double t2252;
  double t2259;
  double t2295;
  double t2296;
  double t980;
  double t1562;
  double t1973;
  double t1985;
  double t2611;
  double t2801;
  double t2817;
  double t2853;
  double t2860;
  double t3105;
  double t3183;
  double t3192;
  double t3238;
  double t3261;
  double t3264;
  double t3283;
  double t1046;
  double t1185;
  double t2182;
  double t2217;
  double t2981;
  double t3020;
  double t5229;
  double t5240;
  double t5266;
  double t5284;
  double t5288;
  double t5312;
  double t5345;
  double t5346;
  double t5360;
  double t6316;
  double t6320;
  double t6321;
  double t6339;
  double t6341;
  double t6377;
  double t6872;
  double t7145;
  double t7146;
  double t7161;
  double t7238;
  double t7426;
  double t9321;
  double t9619;
  double t9622;
  double t8067;
  double t8276;
  double t8567;
  double t10270;
  double t10373;
  double t10796;
  double t10935;
  double t10966;
  double t10971;
  double t10870;
  double t10871;
  double t10888;
  double t11388;
  double t11408;
  double t11419;
  t1712 = Cos(var1[3]);
  t1292 = Cos(var1[5]);
  t1444 = Sin(var1[3]);
  t1471 = Sin(var1[4]);
  t1854 = Sin(var1[5]);
  t2155 = Cos(var1[6]);
  t2219 = t1712*t1292;
  t2252 = -1.*t1444*t1471*t1854;
  t2259 = t2219 + t2252;
  t2295 = Cos(var1[4]);
  t2296 = Sin(var1[6]);
  t980 = Cos(var1[7]);
  t1562 = t1292*t1444*t1471;
  t1973 = t1712*t1854;
  t1985 = t1562 + t1973;
  t2611 = -1.*t2295*t2155*t1444;
  t2801 = -1.*t2259*t2296;
  t2817 = t2611 + t2801;
  t2853 = Sin(var1[7]);
  t2860 = Cos(var1[8]);
  t3105 = t980*t1985;
  t3183 = t2817*t2853;
  t3192 = t3105 + t3183;
  t3238 = t980*t2817;
  t3261 = -1.*t1985*t2853;
  t3264 = t3238 + t3261;
  t3283 = Sin(var1[8]);
  t1046 = -1.*t980;
  t1185 = 1. + t1046;
  t2182 = -1.*t2155;
  t2217 = 1. + t2182;
  t2981 = -1.*t2860;
  t3020 = 1. + t2981;
  t5229 = -1.*t1712*t2155*t1471;
  t5240 = -1.*t1712*t2295*t1854*t2296;
  t5266 = t5229 + t5240;
  t5284 = -1.*t1712*t2295*t1292*t980;
  t5288 = t5266*t2853;
  t5312 = t5284 + t5288;
  t5345 = t980*t5266;
  t5346 = t1712*t2295*t1292*t2853;
  t5360 = t5345 + t5346;
  t6316 = t1712*t1292*t1471;
  t6320 = -1.*t1444*t1854;
  t6321 = t6316 + t6320;
  t6339 = t1292*t1444;
  t6341 = t1712*t1471*t1854;
  t6377 = t6339 + t6341;
  t6872 = t980*t6377;
  t7145 = -1.*t6321*t2296*t2853;
  t7146 = t6872 + t7145;
  t7161 = -1.*t980*t6321*t2296;
  t7238 = -1.*t6377*t2853;
  t7426 = t7161 + t7238;
  t9321 = -1.*t2155*t6377;
  t9619 = -1.*t1712*t2295*t2296;
  t9622 = t9321 + t9619;
  t8067 = t1712*t2295*t2155;
  t8276 = -1.*t6377*t2296;
  t8567 = t8067 + t8276;
  t10270 = -1.*t1712*t1292*t1471;
  t10373 = t1444*t1854;
  t10796 = t10270 + t10373;
  t10935 = -1.*t980*t10796;
  t10966 = -1.*t8567*t2853;
  t10971 = t10935 + t10966;
  t10870 = t980*t8567;
  t10871 = -1.*t10796*t2853;
  t10888 = t10870 + t10871;
  t11388 = t980*t10796;
  t11408 = t8567*t2853;
  t11419 = t11388 + t11408;
  p_output1[0]=1.;
  p_output1[1]=0.325*t1185*t1985 + 0.1575*t2217*t2259 + 0.1575*t1444*t2295*t2296 + 0.2255*(t2155*t2259 - 1.*t1444*t2295*t2296) - 0.325*t2817*t2853 + 0.075*t3020*t3192 + 0.075*t3264*t3283 - 0.0641*(t2860*t3264 + t3192*t3283) + 0.355*(t2860*t3192 - 1.*t3264*t3283);
  p_output1[2]=-0.325*t1185*t1292*t1712*t2295 + 0.1575*t1712*t1854*t2217*t2295 + 0.1575*t1471*t1712*t2296 + 0.2255*(t1712*t1854*t2155*t2295 - 1.*t1471*t1712*t2296) - 0.325*t2853*t5266 + 0.075*t3020*t5312 + 0.075*t3283*t5360 - 0.0641*(t3283*t5312 + t2860*t5360) + 0.355*(t2860*t5312 - 1.*t3283*t5360);
  p_output1[3]=0.2255*t2155*t6321 + 0.1575*t2217*t6321 + 0.325*t2296*t2853*t6321 + 0.325*t1185*t6377 + 0.075*t3020*t7146 + 0.075*t3283*t7426 - 0.0641*(t3283*t7146 + t2860*t7426) + 0.355*(t2860*t7146 - 1.*t3283*t7426);
  p_output1[4]=-0.1575*t1712*t2155*t2295 + 0.1575*t2296*t6377 + 0.2255*t8567 - 0.325*t2853*t9622 + 0.075*t2853*t3020*t9622 + 0.075*t3283*t9622*t980 - 0.0641*(t2853*t3283*t9622 + t2860*t9622*t980) + 0.355*(t2853*t2860*t9622 - 1.*t3283*t9622*t980);
  p_output1[5]=0.325*t10796*t2853 + 0.075*t10888*t3020 + 0.075*t10971*t3283 - 0.0641*(t10971*t2860 + t10888*t3283) + 0.355*(t10888*t2860 - 1.*t10971*t3283) - 0.325*t8567*t980;
  p_output1[6]=0.075*t10888*t2860 + 0.075*t11419*t3283 - 0.0641*(t11419*t2860 - 1.*t10888*t3283) + 0.355*(-1.*t10888*t2860 - 1.*t11419*t3283);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_u_frontSwingFootHeightflat_ParallelStance_ParallelStance.hh"

namespace SymFunction
{

void J_u_frontSwingFootHeightflat_ParallelStance_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
