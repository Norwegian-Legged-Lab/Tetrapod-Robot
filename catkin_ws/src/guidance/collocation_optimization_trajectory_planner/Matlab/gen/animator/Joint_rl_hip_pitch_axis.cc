/*
 * Automatically Generated from Mathematica.
 * Fri 4 Feb 2022 15:52:02 GMT+01:00
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
  double t429;
  double t471;
  double t474;
  double t1243;
  double t811;
  double t1741;
  double t1252;
  double t1508;
  double t1791;
  double t863;
  double t2210;
  double t1509;
  double t2017;
  double t2108;
  double t2247;
  double t2249;
  double t2250;
  double t723;
  double t2267;
  double t814;
  double t836;
  double t964;
  double t1232;
  double t2414;
  double t2426;
  double t2212;
  double t2219;
  double t2425;
  double t2449;
  double t2462;
  double t2472;
  double t2473;
  double t2478;
  double t2286;
  double t2291;
  double t2295;
  double t2299;
  double t2467;
  double t2484;
  double t2497;
  double t2309;
  double t2311;
  double t2500;
  double t2529;
  double t2537;
  double t2322;
  double t2327;
  double t2335;
  double t2336;
  double t2340;
  double t2833;
  double t3058;
  double t3059;
  double t3063;
  double t3066;
  double t3071;
  double t3061;
  double t3072;
  double t3073;
  double t3082;
  double t3086;
  double t3087;
  t429 = Cos(var1[13]);
  t471 = -1.*t429;
  t474 = 1. + t471;
  t1243 = Cos(var1[4]);
  t811 = Sin(var1[13]);
  t1741 = Cos(var1[12]);
  t1252 = Cos(var1[5]);
  t1508 = Sin(var1[12]);
  t1791 = Sin(var1[5]);
  t863 = Sin(var1[4]);
  t2210 = -7.e-6*t474;
  t1509 = -1.*t1243*t1252*t1508;
  t2017 = -1.*t1741*t1243*t1791;
  t2108 = t1509 + t2017;
  t2247 = t1741*t1243*t1252;
  t2249 = -1.*t1243*t1508*t1791;
  t2250 = t2247 + t2249;
  t723 = -4.e-6*t474;
  t2267 = 2.7999999999999997e-11*t474;
  t814 = -7.e-6*t811;
  t836 = t723 + t814;
  t964 = -6.5e-11*t474;
  t1232 = 1. + t964;
  t2414 = Sin(var1[3]);
  t2426 = Cos(var1[3]);
  t2212 = 4.e-6*t811;
  t2219 = t2210 + t2212;
  t2425 = t1252*t2414*t863;
  t2449 = t2426*t1791;
  t2462 = t2425 + t2449;
  t2472 = t2426*t1252;
  t2473 = -1.*t2414*t863*t1791;
  t2478 = t2472 + t2473;
  t2286 = -1.*t811;
  t2291 = t2267 + t2286;
  t2295 = -4.e-6*t811;
  t2299 = t2210 + t2295;
  t2467 = -1.*t1508*t2462;
  t2484 = t1741*t2478;
  t2497 = t2467 + t2484;
  t2309 = -1.000000000016*t474;
  t2311 = 1. + t2309;
  t2500 = t1741*t2462;
  t2529 = t1508*t2478;
  t2537 = t2500 + t2529;
  t2322 = -1.000000000049*t474;
  t2327 = 1. + t2322;
  t2335 = 7.e-6*t811;
  t2336 = t723 + t2335;
  t2340 = t2267 + t811;
  t2833 = -1.*t2426*t1252*t863;
  t3058 = t2414*t1791;
  t3059 = t2833 + t3058;
  t3063 = t1252*t2414;
  t3066 = t2426*t863*t1791;
  t3071 = t3063 + t3066;
  t3061 = -1.*t1508*t3059;
  t3072 = t1741*t3071;
  t3073 = t3061 + t3072;
  t3082 = t1741*t3059;
  t3086 = t1508*t3071;
  t3087 = t3082 + t3086;
  p_output1[0]=t1232*t2108 + t2219*t2250 + t836*t863 - 7.e-6*(t2108*t2299 + t2250*t2311 + t2291*t863) - 4.e-6*(t2108*t2336 + t2250*t2340 + t2327*t863);
  p_output1[1]=t1232*t2497 + t2219*t2537 - 7.e-6*(-1.*t1243*t2291*t2414 + t2299*t2497 + t2311*t2537) - 4.e-6*(-1.*t1243*t2327*t2414 + t2336*t2497 + t2340*t2537) - 1.*t1243*t2414*t836;
  p_output1[2]=t1232*t3073 + t2219*t3087 - 7.e-6*(t1243*t2291*t2426 + t2299*t3073 + t2311*t3087) - 4.e-6*(t1243*t2327*t2426 + t2336*t3073 + t2340*t3087) + t1243*t2426*t836;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Joint_rl_hip_pitch_axis.hh"

namespace SymFunction
{

void Joint_rl_hip_pitch_axis_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
