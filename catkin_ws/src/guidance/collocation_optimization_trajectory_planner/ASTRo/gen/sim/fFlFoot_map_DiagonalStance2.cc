/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:04:55 GMT+02:00
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
  double t2010;
  double t1939;
  double t1989;
  double t2015;
  double t2069;
  double t2079;
  double t2091;
  double t2064;
  double t2100;
  double t2060;
  double t2122;
  double t2058;
  double t2009;
  double t2033;
  double t2043;
  double t1894;
  double t2095;
  double t2128;
  double t2135;
  double t2169;
  double t2143;
  double t2145;
  double t2146;
  double t2141;
  double t2172;
  double t2184;
  double t2202;
  double t2258;
  double t2262;
  double t2263;
  double t2348;
  double t2350;
  double t2369;
  double t2371;
  double t2372;
  double t2375;
  double t2394;
  double t2398;
  double t2400;
  double t2407;
  double t2411;
  double t2416;
  double t2425;
  double t2432;
  double t2433;
  double t2442;
  double t2448;
  double t2458;
  double t2460;
  double t2462;
  double t2469;
  double t2473;
  double t2474;
  double t2479;
  double t2480;
  double t2485;
  double t2487;
  double t2495;
  double t2496;
  double t2504;
  double t2443;
  double t2463;
  double t2467;
  double t2229;
  double t2270;
  double t2290;
  double t2291;
  double t2298;
  double t2303;
  double t2492;
  double t2509;
  double t2516;
  double t2523;
  double t2524;
  double t2525;
  double t2535;
  double t2536;
  double t2553;
  double t2324;
  double t2345;
  double t2346;
  double t2468;
  double t2561;
  double t2054;
  double t2137;
  double t2139;
  double t2563;
  double t2566;
  double t2579;
  double t2784;
  double t2798;
  double t2821;
  double t2838;
  double t3008;
  double t3234;
  t2010 = Cos(var1[7]);
  t1939 = Cos(var1[8]);
  t1989 = Sin(var1[7]);
  t2015 = Sin(var1[8]);
  t2069 = t2010*t1939;
  t2079 = t1989*t2015;
  t2091 = t2069 + t2079;
  t2064 = Cos(var1[6]);
  t2100 = Sin(var1[5]);
  t2060 = Cos(var1[5]);
  t2122 = Sin(var1[6]);
  t2058 = Cos(var1[4]);
  t2009 = -1.*t1939*t1989;
  t2033 = t2010*t2015;
  t2043 = t2009 + t2033;
  t1894 = Sin(var1[4]);
  t2095 = t2060*t2064*t2091;
  t2128 = -1.*t2100*t2122*t2091;
  t2135 = t2095 + t2128;
  t2169 = Sin(var1[3]);
  t2143 = t2064*t2100*t2091;
  t2145 = t2060*t2122*t2091;
  t2146 = t2143 + t2145;
  t2141 = Cos(var1[3]);
  t2172 = t2058*t2043;
  t2184 = -1.*t1894*t2135;
  t2202 = t2172 + t2184;
  t2258 = t1939*t1989;
  t2262 = -1.*t2010*t2015;
  t2263 = t2258 + t2262;
  t2348 = -1.*t2064;
  t2350 = 1. + t2348;
  t2369 = 0.15121*t2350;
  t2371 = -1.*t2010;
  t2372 = 1. + t2371;
  t2375 = 0.28121*t2372;
  t2394 = -1.*t1939;
  t2398 = 1. + t2394;
  t2400 = 0.50321*t2398;
  t2407 = 0.19821*t1939;
  t2411 = t2400 + t2407;
  t2416 = t2010*t2411;
  t2425 = -0.305*t1989*t2015;
  t2432 = t2375 + t2416 + t2425;
  t2433 = t2064*t2432;
  t2442 = t2369 + t2433;
  t2448 = 0.15121*t2064;
  t2458 = -0.15121*t2122;
  t2460 = t2122*t2432;
  t2462 = t2369 + t2448 + t2458 + t2460;
  t2469 = -1.*t2064*t2100;
  t2473 = -1.*t2060*t2122;
  t2474 = t2469 + t2473;
  t2479 = 0.28121*t1989;
  t2480 = -1.*t2411*t1989;
  t2485 = -0.305*t2010*t2015;
  t2487 = t2479 + t2480 + t2485;
  t2495 = t2060*t2442;
  t2496 = -1.*t2100*t2462;
  t2504 = t2495 + t2496;
  t2443 = t2100*t2442;
  t2463 = t2060*t2462;
  t2467 = t2443 + t2463;
  t2229 = t1894*t2091;
  t2270 = t2060*t2064*t2263;
  t2290 = -1.*t2100*t2122*t2263;
  t2291 = t2270 + t2290;
  t2298 = t2058*t2291;
  t2303 = t2229 + t2298;
  t2492 = t1894*t2487;
  t2509 = t2058*t2504;
  t2516 = t2492 + t2509;
  t2523 = t2058*t2487;
  t2524 = -1.*t1894*t2504;
  t2525 = t2523 + t2524;
  t2535 = t2064*t2100*t2263;
  t2536 = t2060*t2122*t2263;
  t2553 = t2535 + t2536;
  t2324 = t2060*t2064;
  t2345 = -1.*t2100*t2122;
  t2346 = t2324 + t2345;
  t2468 = -1.*t2346*t2467;
  t2561 = t2553*t2467;
  t2054 = t1894*t2043;
  t2137 = t2058*t2135;
  t2139 = t2054 + t2137;
  t2563 = t2058*t2091;
  t2566 = -1.*t1894*t2291;
  t2579 = t2563 + t2566;
  t2784 = -1.*t2553*t2467;
  t2798 = t2146*t2467;
  t2821 = -1.*t2487*t2091;
  t2838 = t2487*t2043;
  t3008 = t2346*t2467;
  t3234 = -1.*t2146*t2467;
  p_output1[0]=t2139;
  p_output1[1]=t2141*t2146 - 1.*t2169*t2202;
  p_output1[2]=t2146*t2169 + t2141*t2202;
  p_output1[3]=t2303*(t2468 - 1.*t2058*t2474*t2516 + t1894*t2474*t2525) + t2058*t2474*(t2303*t2516 + t2561 + t2525*t2579);
  p_output1[4]=(t2468 - 1.*t2474*t2504)*t2553 + t2346*(t2091*t2487 + t2291*t2504 + t2561);
  p_output1[5]=t2091*(t2122*t2442 - 1.*t2064*t2462);
  p_output1[6]=0;
  p_output1[7]=0.28121*t2015 - 0.305*t1939*t2015 - 1.*t2015*t2411;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t2058*t2474;
  p_output1[19]=t2141*t2346 + t1894*t2169*t2474;
  p_output1[20]=t2169*t2346 - 1.*t1894*t2141*t2474;
  p_output1[21]=t2139*(-1.*t2303*t2516 - 1.*t2525*t2579 + t2784) + t2303*(t2139*t2516 + t2202*t2525 + t2798);
  p_output1[22]=t2146*(-1.*t2291*t2504 + t2784 + t2821) + t2553*(t2135*t2504 + t2798 + t2838);
  p_output1[23]=t2043*(-1.*t2064*t2263*t2442 - 1.*t2122*t2263*t2462 + t2821) + t2091*(t2064*t2091*t2442 + t2091*t2122*t2462 + t2838);
  p_output1[24]=-0.15121 + t2043*(-1.*t2263*t2432 + t2821) + t2091*(t2091*t2432 + t2838);
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
  p_output1[36]=t2303;
  p_output1[37]=t2141*t2553 - 1.*t2169*t2579;
  p_output1[38]=t2169*t2553 + t2141*t2579;
  p_output1[39]=t2139*(t2058*t2474*t2516 - 1.*t1894*t2474*t2525 + t3008) + t2058*t2474*(-1.*t2139*t2516 - 1.*t2202*t2525 + t3234);
  p_output1[40]=t2146*(t2474*t2504 + t3008) + t2346*(-1.*t2043*t2487 - 1.*t2135*t2504 + t3234);
  p_output1[41]=t2043*(-1.*t2122*t2442 + t2064*t2462);
  p_output1[42]=0.15121*t2043 + 0.15121*t2263;
  p_output1[43]=0.28121*t1939 + 0.305*Power(t2015,2) - 1.*t1939*t2411;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fFlFoot_map_DiagonalStance2.hh"

namespace SymFunction
{

void fFlFoot_map_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
