/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 17:40:52 GMT+02:00
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
  double t1726;
  double t67;
  double t1705;
  double t1736;
  double t1959;
  double t1960;
  double t1961;
  double t1937;
  double t1954;
  double t1963;
  double t1950;
  double t1965;
  double t1743;
  double t2159;
  double t2160;
  double t2162;
  double t1721;
  double t1739;
  double t1742;
  double t1962;
  double t2111;
  double t2115;
  double t2196;
  double t2125;
  double t2126;
  double t2130;
  double t2180;
  double t2163;
  double t2164;
  double t2168;
  double t2183;
  double t2184;
  double t2188;
  double t2204;
  double t2363;
  double t2364;
  double t2372;
  double t2373;
  double t2374;
  double t2379;
  double t2381;
  double t2382;
  double t2385;
  double t2388;
  double t2390;
  double t2152;
  double t2170;
  double t2176;
  double t2406;
  double t2408;
  double t2412;
  double t2413;
  double t2414;
  double t2415;
  double t2419;
  double t2420;
  double t2421;
  double t2422;
  double t2423;
  double t2424;
  double t2425;
  double t2435;
  double t2436;
  double t2437;
  double t2409;
  double t2410;
  double t2411;
  double t2428;
  double t2429;
  double t2444;
  double t2445;
  double t2446;
  double t2447;
  double t2451;
  double t2452;
  double t2453;
  double t2433;
  double t2438;
  double t2441;
  double t2449;
  double t2454;
  double t2455;
  double t2457;
  double t2458;
  double t2459;
  double t1923;
  double t2119;
  double t2124;
  double t2442;
  double t2556;
  double t2572;
  double t2580;
  double t2594;
  double t2607;
  double t2631;
  double t2635;
  t1726 = Cos(var1[13]);
  t67 = Cos(var1[14]);
  t1705 = Sin(var1[13]);
  t1736 = Sin(var1[14]);
  t1959 = t1726*t67;
  t1960 = t1705*t1736;
  t1961 = t1959 + t1960;
  t1937 = Cos(var1[4]);
  t1954 = Cos(var1[5]);
  t1963 = Sin(var1[12]);
  t1950 = Cos(var1[12]);
  t1965 = Sin(var1[5]);
  t1743 = Sin(var1[4]);
  t2159 = t67*t1705;
  t2160 = -1.*t1726*t1736;
  t2162 = t2159 + t2160;
  t1721 = -1.*t67*t1705;
  t1739 = t1726*t1736;
  t1742 = t1721 + t1739;
  t1962 = t1950*t1954*t1961;
  t2111 = -1.*t1963*t1961*t1965;
  t2115 = t1962 + t2111;
  t2196 = Sin(var1[3]);
  t2125 = -1.*t1954*t1963;
  t2126 = -1.*t1950*t1965;
  t2130 = t2125 + t2126;
  t2180 = Cos(var1[3]);
  t2163 = t1950*t1954*t2162;
  t2164 = -1.*t1963*t2162*t1965;
  t2168 = t2163 + t2164;
  t2183 = t1954*t1963*t1961;
  t2184 = t1950*t1961*t1965;
  t2188 = t2183 + t2184;
  t2204 = t1937*t1742;
  t2363 = -1.*t1743*t2115;
  t2364 = t2204 + t2363;
  t2372 = t1950*t1954;
  t2373 = -1.*t1963*t1965;
  t2374 = t2372 + t2373;
  t2379 = t1954*t1963*t2162;
  t2381 = t1950*t2162*t1965;
  t2382 = t2379 + t2381;
  t2385 = t1937*t1961;
  t2388 = -1.*t1743*t2168;
  t2390 = t2385 + t2388;
  t2152 = t1961*t1743;
  t2170 = t1937*t2168;
  t2176 = t2152 + t2170;
  t2406 = -1.*t1950;
  t2408 = 1. + t2406;
  t2412 = -1.*t1726;
  t2413 = 1. + t2412;
  t2414 = 0.28121*t2413;
  t2415 = -1.*t67;
  t2419 = 1. + t2415;
  t2420 = 0.50321*t2419;
  t2421 = 0.19821*t67;
  t2422 = t2420 + t2421;
  t2423 = t1726*t2422;
  t2424 = -0.305*t1705*t1736;
  t2425 = t2414 + t2423 + t2424;
  t2435 = 0.15121*t2408;
  t2436 = t1950*t2425;
  t2437 = t2435 + t2436;
  t2409 = -0.15121*t2408;
  t2410 = -0.15121*t1950;
  t2411 = -0.15121*t1963;
  t2428 = t1963*t2425;
  t2429 = t2409 + t2410 + t2411 + t2428;
  t2444 = 0.28121*t1705;
  t2445 = -1.*t2422*t1705;
  t2446 = -0.305*t1726*t1736;
  t2447 = t2444 + t2445 + t2446;
  t2451 = t1954*t2437;
  t2452 = -1.*t2429*t1965;
  t2453 = t2451 + t2452;
  t2433 = t1954*t2429;
  t2438 = t2437*t1965;
  t2441 = t2433 + t2438;
  t2449 = t2447*t1743;
  t2454 = t1937*t2453;
  t2455 = t2449 + t2454;
  t2457 = t1937*t2447;
  t2458 = -1.*t1743*t2453;
  t2459 = t2457 + t2458;
  t1923 = t1742*t1743;
  t2119 = t1937*t2115;
  t2124 = t1923 + t2119;
  t2442 = -1.*t2374*t2441;
  t2556 = t2382*t2441;
  t2572 = -1.*t2382*t2441;
  t2580 = t2188*t2441;
  t2594 = t2374*t2441;
  t2607 = -1.*t2188*t2441;
  t2631 = -1.*t2447*t1961;
  t2635 = t2447*t1742;
  p_output1[0]=t2124;
  p_output1[1]=t1937*t2130;
  p_output1[2]=t2176;
  p_output1[3]=t2180*t2188 - 1.*t2196*t2364;
  p_output1[4]=t1743*t2130*t2196 + t2180*t2374;
  p_output1[5]=t2180*t2382 - 1.*t2196*t2390;
  p_output1[6]=t2188*t2196 + t2180*t2364;
  p_output1[7]=-1.*t1743*t2130*t2180 + t2196*t2374;
  p_output1[8]=t2196*t2382 + t2180*t2390;
  p_output1[9]=t2176*(t2442 - 1.*t1937*t2130*t2455 + t1743*t2130*t2459) + t1937*t2130*(t2176*t2455 + t2390*t2459 + t2556);
  p_output1[10]=t2124*(-1.*t2176*t2455 - 1.*t2390*t2459 + t2572) + t2176*(t2124*t2455 + t2364*t2459 + t2580);
  p_output1[11]=t2124*(t1937*t2130*t2455 - 1.*t1743*t2130*t2459 + t2594) + t1937*t2130*(-1.*t2124*t2455 - 1.*t2364*t2459 + t2607);
  p_output1[12]=t2382*(t2442 - 1.*t2130*t2453) + t2374*(t1961*t2447 + t2168*t2453 + t2556);
  p_output1[13]=t2188*(-1.*t2168*t2453 + t2572 + t2631) + t2382*(t2115*t2453 + t2580 + t2635);
  p_output1[14]=t2188*(t2130*t2453 + t2594) + t2374*(-1.*t1742*t2447 - 1.*t2115*t2453 + t2607);
  p_output1[15]=t1961*(-1.*t1950*t2429 + t1963*t2437);
  p_output1[16]=t1742*(-1.*t1963*t2162*t2429 - 1.*t1950*t2162*t2437 + t2631) + t1961*(t1961*t1963*t2429 + t1950*t1961*t2437 + t2635);
  p_output1[17]=t1742*(t1950*t2429 - 1.*t1963*t2437);
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
  p_output1[37]=-0.15121 + t1742*(-1.*t2162*t2425 + t2631) + t1961*(t1961*t2425 + t2635);
  p_output1[38]=-0.15121*t1742 - 0.15121*t2162;
  p_output1[39]=0.28121*t1736 - 1.*t1736*t2422 - 0.305*t1736*t67;
  p_output1[40]=0;
  p_output1[41]=0.305*Power(t1736,2) + 0.28121*t67 - 1.*t2422*t67;
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
