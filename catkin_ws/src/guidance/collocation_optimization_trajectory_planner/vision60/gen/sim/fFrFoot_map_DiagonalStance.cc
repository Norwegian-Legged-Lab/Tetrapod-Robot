/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:04:52 GMT+02:00
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
  double t1260;
  double t953;
  double t976;
  double t1261;
  double t1258;
  double t1274;
  double t1415;
  double t1625;
  double t1729;
  double t1662;
  double t1667;
  double t1668;
  double t1733;
  double t716;
  double t1510;
  double t1454;
  double t1727;
  double t1737;
  double t1751;
  double t1980;
  double t1929;
  double t1963;
  double t1972;
  double t1904;
  double t1990;
  double t1992;
  double t1995;
  double t2159;
  double t2160;
  double t2174;
  double t2179;
  double t2185;
  double t2186;
  double t2189;
  double t2190;
  double t2192;
  double t2157;
  double t2176;
  double t2202;
  double t2205;
  double t2215;
  double t2220;
  double t2221;
  double t2222;
  double t2233;
  double t2234;
  double t2148;
  double t2149;
  double t2150;
  double t2156;
  double t2208;
  double t2209;
  double t2253;
  double t2254;
  double t2255;
  double t2257;
  double t2276;
  double t2281;
  double t2247;
  double t2248;
  double t2250;
  double t2210;
  double t2236;
  double t2237;
  double t2088;
  double t2098;
  double t2099;
  double t2256;
  double t2286;
  double t2287;
  double t2085;
  double t2102;
  double t2104;
  double t2106;
  double t2145;
  double t2147;
  double t2321;
  double t2322;
  double t2324;
  double t2337;
  double t2339;
  double t2340;
  double t2238;
  double t2342;
  double t2391;
  double t2405;
  double t2291;
  double t2293;
  double t2301;
  double t1509;
  double t1884;
  double t1897;
  double t2347;
  double t2348;
  double t2358;
  double t2478;
  double t2488;
  double t2530;
  double t2503;
  double t2589;
  double t2561;
  double t2664;
  double t2673;
  double t2693;
  double t2699;
  t1260 = Cos(var1[13]);
  t953 = Cos(var1[14]);
  t976 = Sin(var1[13]);
  t1261 = Sin(var1[14]);
  t1258 = t953*t976;
  t1274 = -1.*t1260*t1261;
  t1415 = t1258 + t1274;
  t1625 = Cos(var1[5]);
  t1729 = Sin(var1[12]);
  t1662 = t1260*t953;
  t1667 = t976*t1261;
  t1668 = t1662 + t1667;
  t1733 = Sin(var1[5]);
  t716 = Cos(var1[12]);
  t1510 = Cos(var1[4]);
  t1454 = Sin(var1[4]);
  t1727 = t1625*t1668;
  t1737 = t1729*t1415*t1733;
  t1751 = t1727 + t1737;
  t1980 = Sin(var1[3]);
  t1929 = -1.*t1625*t1729*t1415;
  t1963 = t1668*t1733;
  t1972 = t1929 + t1963;
  t1904 = Cos(var1[3]);
  t1990 = t716*t1510*t1415;
  t1992 = -1.*t1454*t1751;
  t1995 = t1990 + t1992;
  t2159 = -0.0641*t953;
  t2160 = -0.28*t1261;
  t2174 = t2159 + t2160;
  t2179 = -1.*t953;
  t2185 = 1. + t2179;
  t2186 = 0.075*t2185;
  t2189 = 0.355*t953;
  t2190 = -0.0641*t1261;
  t2192 = t2186 + t2189 + t2190;
  t2157 = -0.325*t976;
  t2176 = t1260*t2174;
  t2202 = t976*t2192;
  t2205 = t2157 + t2176 + t2202;
  t2215 = -1.*t1260;
  t2220 = 1. + t2215;
  t2221 = 0.325*t2220;
  t2222 = -1.*t976*t2174;
  t2233 = t1260*t2192;
  t2234 = t2221 + t2222 + t2233;
  t2148 = -1.*t716;
  t2149 = 1. + t2148;
  t2150 = -0.1575*t2149;
  t2156 = -0.2255*t716;
  t2208 = -1.*t1729*t2205;
  t2209 = t2150 + t2156 + t2208;
  t2253 = -0.068*t1729;
  t2254 = t716*t2205;
  t2255 = t2253 + t2254;
  t2257 = t1625*t2234;
  t2276 = -1.*t2209*t1733;
  t2281 = t2257 + t2276;
  t2247 = t1729*t1454;
  t2248 = -1.*t716*t1510*t1733;
  t2250 = t2247 + t2248;
  t2210 = t1625*t2209;
  t2236 = t2234*t1733;
  t2237 = t2210 + t2236;
  t2088 = -1.*t953*t976;
  t2098 = t1260*t1261;
  t2099 = t2088 + t2098;
  t2256 = t2255*t1454;
  t2286 = t1510*t2281;
  t2287 = t2256 + t2286;
  t2085 = t716*t1668*t1454;
  t2102 = t1625*t2099;
  t2104 = t1729*t1668*t1733;
  t2106 = t2102 + t2104;
  t2145 = t1510*t2106;
  t2147 = t2085 + t2145;
  t2321 = t1510*t2255;
  t2322 = -1.*t1454*t2281;
  t2324 = t2321 + t2322;
  t2337 = -1.*t1625*t1729*t1668;
  t2339 = t2099*t1733;
  t2340 = t2337 + t2339;
  t2238 = -1.*t716*t1625*t2237;
  t2342 = t2237*t2340;
  t2391 = -1.*t1729*t2255;
  t2405 = t716*t2255*t1668;
  t2291 = t1510*t1729;
  t2293 = t716*t1454*t1733;
  t2301 = t2291 + t2293;
  t1509 = t716*t1415*t1454;
  t1884 = t1510*t1751;
  t1897 = t1509 + t1884;
  t2347 = t716*t1510*t1668;
  t2348 = -1.*t1454*t2106;
  t2358 = t2347 + t2348;
  t2478 = t2237*t1972;
  t2488 = -1.*t2237*t2340;
  t2530 = -1.*t716*t2255*t1668;
  t2503 = t716*t2255*t1415;
  t2589 = t2234*t1668;
  t2561 = -1.*t2234*t2099;
  t2664 = t716*t1625*t2237;
  t2673 = -1.*t2237*t1972;
  t2693 = t1729*t2255;
  t2699 = -1.*t716*t2255*t1415;
  p_output1[0]=t1897;
  p_output1[1]=t1904*t1972 - 1.*t1980*t1995;
  p_output1[2]=t1972*t1980 + t1904*t1995;
  p_output1[3]=t2147*(t2238 - 1.*t2250*t2287 - 1.*t2301*t2324) + t2250*(t2147*t2287 + t2342 + t2324*t2358);
  p_output1[4]=t1625*(t2106*t2281 + t2342 + t2405)*t716 + t2340*(t2238 + t2391 + t1733*t2281*t716);
  p_output1[5]=t1729*(-1.*t1668*t1729*t2209 + t2099*t2234 + t2405) + t1668*t716*(t2391 - 1.*t2209*t716);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0.1575*t1415 + 0.2255*t2099;
  p_output1[13]=0.325*t1261 - 1.*t1261*t2192 - 1.*t2174*t953;
  p_output1[14]=-0.0641;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t2250;
  p_output1[19]=-1.*t1980*t2301 + t1625*t1904*t716;
  p_output1[20]=t1904*t2301 + t1625*t1980*t716;
  p_output1[21]=t2147*(t1897*t2287 + t1995*t2324 + t2478) + t1897*(-1.*t2147*t2287 - 1.*t2324*t2358 + t2488);
  p_output1[22]=t2340*(t1751*t2281 + t2478 + t2503) + t1972*(-1.*t2106*t2281 + t2488 + t2530);
  p_output1[23]=t1415*(t1668*t1729*t2209 + t2530 + t2561)*t716 + t1668*(-1.*t1415*t1729*t2209 + t2503 + t2589)*t716;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=t1668*(-1.*t1668*t2205 + t2561) + t2099*(t1415*t2205 + t2589);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t2147;
  p_output1[37]=t1904*t2340 - 1.*t1980*t2358;
  p_output1[38]=t1980*t2340 + t1904*t2358;
  p_output1[39]=t1897*(t2250*t2287 + t2301*t2324 + t2664) + t2250*(-1.*t1897*t2287 - 1.*t1995*t2324 + t2673);
  p_output1[40]=t1625*(-1.*t1751*t2281 + t2673 + t2699)*t716 + t1972*(t2664 + t2693 - 1.*t1733*t2281*t716);
  p_output1[41]=t1729*(t1415*t1729*t2209 - 1.*t1668*t2234 + t2699) + t1415*t716*(t2693 + t2209*t716);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.068*t1668;
  p_output1[49]=-1.*t1261*t2174 - 0.325*t953 + t2192*t953;
  p_output1[50]=-0.28;
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

#include "fFrFoot_map_DiagonalStance.hh"

namespace SymFunction
{

void fFrFoot_map_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
