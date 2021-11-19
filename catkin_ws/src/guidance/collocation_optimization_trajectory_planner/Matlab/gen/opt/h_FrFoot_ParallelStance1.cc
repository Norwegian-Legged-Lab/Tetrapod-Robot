/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:28:48 GMT+01:00
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
  double t671;
  double t102;
  double t227;
  double t268;
  double t326;
  double t419;
  double t543;
  double t733;
  double t778;
  double t888;
  double t919;
  double t135;
  double t1085;
  double t1032;
  double t1232;
  double t1236;
  double t1241;
  double t1289;
  double t1304;
  double t1307;
  double t1328;
  double t1332;
  double t1334;
  double t1351;
  double t1509;
  double t1383;
  double t1384;
  double t1385;
  double t1392;
  double t1398;
  double t1400;
  double t1578;
  double t1604;
  double t1607;
  double t1611;
  double t1663;
  double t1669;
  double t1691;
  double t1693;
  double t1695;
  double t1737;
  double t663;
  double t884;
  double t893;
  double t922;
  double t923;
  double t347;
  double t578;
  double t1959;
  double t1049;
  double t1081;
  double t2032;
  double t1113;
  double t1132;
  double t1195;
  double t1221;
  double t1223;
  double t2001;
  double t2033;
  double t2039;
  double t2052;
  double t2061;
  double t2064;
  double t1244;
  double t1271;
  double t1280;
  double t1349;
  double t1366;
  double t1374;
  double t2079;
  double t2081;
  double t2085;
  double t2098;
  double t2106;
  double t2112;
  double t1436;
  double t1467;
  double t1519;
  double t1546;
  double t1567;
  double t1625;
  double t1627;
  double t1628;
  double t1638;
  double t1642;
  double t2115;
  double t2119;
  double t2121;
  double t2129;
  double t2137;
  double t2142;
  double t2149;
  double t2150;
  double t1810;
  double t1816;
  double t2170;
  double t2172;
  double t2179;
  double t2185;
  double t1889;
  double t1894;
  double t2286;
  double t2296;
  double t2300;
  double t2310;
  double t2320;
  double t2324;
  double t2328;
  double t2340;
  double t2344;
  double t2349;
  double t2366;
  double t2382;
  double t2397;
  double t2403;
  double t2406;
  double t2408;
  double t2415;
  double t2430;
  double t2431;
  double t2434;
  double t2446;
  double t2449;
  double t2459;
  double t2460;
  t671 = Cos(var1[10]);
  t102 = Cos(var1[4]);
  t227 = Cos(var1[9]);
  t268 = -1.*t227;
  t326 = 1. + t268;
  t419 = Sin(var1[9]);
  t543 = -0.15121*t419;
  t733 = -1.*t671;
  t778 = 1. + t733;
  t888 = -1. + t671;
  t919 = Sin(var1[10]);
  t135 = Cos(var1[5]);
  t1085 = Sin(var1[5]);
  t1032 = Sin(var1[4]);
  t1232 = -1.*t102*t135*t419;
  t1236 = -1.*t227*t102*t1085;
  t1241 = t1232 + t1236;
  t1289 = t227*t102*t135;
  t1304 = -1.*t102*t419*t1085;
  t1307 = t1289 + t1304;
  t1328 = Cos(var1[11]);
  t1332 = -1.*t1328;
  t1334 = 1. + t1332;
  t1351 = Sin(var1[11]);
  t1509 = -1. + t1328;
  t1383 = t919*t1032;
  t1384 = -4.e-6*t919*t1241;
  t1385 = -1.000000000016*t778;
  t1392 = 1. + t1385;
  t1398 = t1392*t1307;
  t1400 = t1383 + t1384 + t1398;
  t1578 = t671*t1032;
  t1604 = 4.e-6*t778*t1241;
  t1607 = -1.*t919*t1307;
  t1611 = t1578 + t1604 + t1607;
  t1663 = 4.e-6*t778*t1032;
  t1669 = 1.6e-11*t888;
  t1691 = 1. + t1669;
  t1693 = t1691*t1241;
  t1695 = 4.e-6*t919*t1307;
  t1737 = t1663 + t1693 + t1695;
  t663 = -4.9936e-13*var1[10];
  t884 = -0.038749*t778;
  t893 = 6.19984e-13*t888;
  t922 = -0.281210000004*t919;
  t923 = t663 + t884 + t893 + t922;
  t347 = 0.15121*t326;
  t578 = t347 + t543;
  t1959 = Sin(var1[3]);
  t1049 = -0.15121*t326;
  t1081 = t1049 + t543;
  t2032 = Cos(var1[3]);
  t1113 = -1.2484e-7*var1[10];
  t1132 = 2.479936e-18*t778;
  t1195 = -1.54996e-7*t888;
  t1221 = 1.124840000016e-6*t919;
  t1223 = t1113 + t1132 + t1195 + t1221;
  t2001 = t135*t1959*t1032;
  t2033 = t2032*t1085;
  t2039 = t2001 + t2033;
  t2052 = t2032*t135;
  t2061 = -1.*t1959*t1032*t1085;
  t2064 = t2052 + t2061;
  t1244 = 0.281210000008499*t778;
  t1271 = -0.03874900000062*t919;
  t1280 = t1244 + t1271;
  t1349 = 0.50315000001605*t1334;
  t1366 = -0.0398890000006382*t1351;
  t1374 = t1349 + t1366;
  t2079 = -1.*t419*t2039;
  t2081 = t227*t2064;
  t2085 = t2079 + t2081;
  t2098 = t227*t2039;
  t2106 = t419*t2064;
  t2112 = t2098 + t2106;
  t1436 = -5.04e-14*var1[11];
  t1467 = -0.039889*t1334;
  t1519 = 6.38224e-13*t1509;
  t1546 = -0.503150000008*t1351;
  t1567 = t1436 + t1467 + t1519 + t1546;
  t1625 = -1.26e-8*var1[11];
  t1627 = 2.552896e-18*t1334;
  t1628 = -1.59556e-7*t1509;
  t1638 = 2.012600000032e-6*t1351;
  t1642 = t1625 + t1627 + t1628 + t1638;
  t2115 = -1.*t102*t919*t1959;
  t2119 = -4.e-6*t919*t2085;
  t2121 = t1392*t2112;
  t2129 = t2115 + t2119 + t2121;
  t2137 = -1.*t671*t102*t1959;
  t2142 = 4.e-6*t778*t2085;
  t2149 = -1.*t919*t2112;
  t2150 = t2137 + t2142 + t2149;
  t1810 = 1.6e-11*t1509;
  t1816 = 1. + t1810;
  t2170 = -4.e-6*t778*t102*t1959;
  t2172 = t1691*t2085;
  t2179 = 4.e-6*t919*t2112;
  t2185 = t2170 + t2172 + t2179;
  t1889 = -1.000000000016*t1334;
  t1894 = 1. + t1889;
  t2286 = -1.*t2032*t135*t1032;
  t2296 = t1959*t1085;
  t2300 = t2286 + t2296;
  t2310 = t135*t1959;
  t2320 = t2032*t1032*t1085;
  t2324 = t2310 + t2320;
  t2328 = -1.*t419*t2300;
  t2340 = t227*t2324;
  t2344 = t2328 + t2340;
  t2349 = t227*t2300;
  t2366 = t419*t2324;
  t2382 = t2349 + t2366;
  t2397 = t2032*t102*t919;
  t2403 = -4.e-6*t919*t2344;
  t2406 = t1392*t2382;
  t2408 = t2397 + t2403 + t2406;
  t2415 = t671*t2032*t102;
  t2430 = 4.e-6*t778*t2344;
  t2431 = -1.*t919*t2382;
  t2434 = t2415 + t2430 + t2431;
  t2446 = 4.e-6*t778*t2032*t102;
  t2449 = t1691*t2344;
  t2459 = 4.e-6*t919*t2382;
  t2460 = t2446 + t2449 + t2459;
  p_output1[0]=-1.*t102*t1081*t1085 + t1223*t1241 + t1280*t1307 + t1374*t1400 + t1567*t1611 + t1642*t1737 - 0.041195*(-1.*t1351*t1400 + t1328*t1611 + 4.e-6*t1334*t1737) - 0.14871*(4.e-6*t1351*t1400 + 4.e-6*t1334*t1611 + t1737*t1816) + 0.803147*(t1351*t1611 - 4.e-6*t1351*t1737 + t1400*t1894) + t102*t135*t578 + t1032*t923 + var1[0] - 1.*var2[0];
  p_output1[1]=t1081*t2064 + t1223*t2085 + t1280*t2112 + t1374*t2129 + t1567*t2150 + t1642*t2185 - 0.041195*(-1.*t1351*t2129 + t1328*t2150 + 4.e-6*t1334*t2185) + 0.803147*(t1894*t2129 + t1351*t2150 - 4.e-6*t1351*t2185) - 0.14871*(4.e-6*t1351*t2129 + 4.e-6*t1334*t2150 + t1816*t2185) + t2039*t578 - 1.*t102*t1959*t923 + var1[1] - 1.*var2[1];
  p_output1[2]=t1081*t2324 + t1223*t2344 + t1280*t2382 + t1374*t2408 + t1567*t2434 + t1642*t2460 - 0.041195*(-1.*t1351*t2408 + t1328*t2434 + 4.e-6*t1334*t2460) + 0.803147*(t1894*t2408 + t1351*t2434 - 4.e-6*t1351*t2460) - 0.14871*(4.e-6*t1351*t2408 + 4.e-6*t1334*t2434 + t1816*t2460) + t2300*t578 + t102*t2032*t923 + var1[2] - 1.*var2[2];
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

#include "h_FrFoot_ParallelStance1.hh"

namespace ParallelStance1
{

void h_FrFoot_ParallelStance1_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
