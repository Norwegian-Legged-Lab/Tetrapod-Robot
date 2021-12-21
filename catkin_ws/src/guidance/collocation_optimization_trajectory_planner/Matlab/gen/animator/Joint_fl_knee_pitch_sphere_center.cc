/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 23:16:51 GMT+01:00
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
  double t194;
  double t225;
  double t238;
  double t311;
  double t350;
  double t369;
  double t223;
  double t412;
  double t503;
  double t505;
  double t541;
  double t583;
  double t867;
  double t1082;
  double t443;
  double t455;
  double t475;
  double t647;
  double t650;
  double t662;
  double t1339;
  double t1351;
  double t1354;
  double t1444;
  double t1088;
  double t1115;
  double t1116;
  double t1133;
  double t1196;
  double t1253;
  double t1829;
  double t1610;
  double t1622;
  double t1642;
  double t1644;
  double t1484;
  double t1488;
  double t1495;
  double t1508;
  double t1514;
  double t1531;
  double t371;
  double t400;
  double t2143;
  double t2109;
  double t425;
  double t430;
  double t2112;
  double t2150;
  double t2157;
  double t2172;
  double t2179;
  double t2244;
  double t500;
  double t579;
  double t591;
  double t606;
  double t666;
  double t689;
  double t855;
  double t886;
  double t912;
  double t937;
  double t950;
  double t2256;
  double t2293;
  double t2307;
  double t2406;
  double t2433;
  double t2474;
  double t1267;
  double t1371;
  double t1465;
  double t1472;
  double t1541;
  double t1546;
  double t1564;
  double t1648;
  double t1694;
  double t1711;
  double t1792;
  double t1831;
  double t1838;
  double t2600;
  double t2669;
  double t2672;
  double t2710;
  double t2956;
  double t2963;
  double t2967;
  double t2972;
  double t2833;
  double t2862;
  double t2874;
  double t2928;
  double t1987;
  double t2002;
  double t3135;
  double t3138;
  double t3160;
  double t3189;
  double t3194;
  double t3212;
  double t3238;
  double t3246;
  double t3252;
  double t3268;
  double t3311;
  double t3326;
  double t3368;
  double t3377;
  double t3387;
  double t3425;
  double t3563;
  double t3609;
  double t3610;
  double t3613;
  double t3457;
  double t3504;
  double t3511;
  double t3542;
  t194 = Cos(var1[4]);
  t225 = Cos(var1[6]);
  t238 = -1.*t225;
  t311 = 1. + t238;
  t350 = 0.15121*t311;
  t369 = Sin(var1[6]);
  t223 = Sin(var1[5]);
  t412 = Cos(var1[5]);
  t503 = Cos(var1[7]);
  t505 = -1.*t503;
  t541 = 1. + t505;
  t583 = Sin(var1[7]);
  t867 = Sin(var1[4]);
  t1082 = -1. + t503;
  t443 = -1.*t194*t225*t223;
  t455 = -1.*t194*t412*t369;
  t475 = t443 + t455;
  t647 = t194*t412*t225;
  t650 = -1.*t194*t223*t369;
  t662 = t647 + t650;
  t1339 = Cos(var1[8]);
  t1351 = -1.*t1339;
  t1354 = 1. + t1351;
  t1444 = Sin(var1[8]);
  t1088 = 4.e-6*t1082*t867;
  t1115 = 1.6e-11*t1082;
  t1116 = 1. + t1115;
  t1133 = t1116*t475;
  t1196 = 4.e-6*t662*t583;
  t1253 = t1088 + t1133 + t1196;
  t1829 = -1. + t1339;
  t1610 = t503*t867;
  t1622 = 4.e-6*t1082*t475;
  t1642 = t662*t583;
  t1644 = t1610 + t1622 + t1642;
  t1484 = -1.000000000016*t541;
  t1488 = 1. + t1484;
  t1495 = t1488*t662;
  t1508 = -1.*t867*t583;
  t1514 = -4.e-6*t475*t583;
  t1531 = t1495 + t1508 + t1514;
  t371 = -0.15121*t369;
  t400 = t350 + t371;
  t2143 = Sin(var1[3]);
  t2109 = Cos(var1[3]);
  t425 = 0.15121*t369;
  t430 = t350 + t425;
  t2112 = t2109*t412;
  t2150 = -1.*t2143*t867*t223;
  t2157 = t2112 + t2150;
  t2172 = t412*t2143*t867;
  t2179 = t2109*t223;
  t2244 = t2172 + t2179;
  t500 = -1.2484e-7*var1[7];
  t579 = -1.5499600000248e-7*t541;
  t591 = 1.124840000016e-6*t583;
  t606 = t500 + t579 + t591;
  t666 = 0.281210000008499*t541;
  t689 = 0.03874900000062*t583;
  t855 = t666 + t689;
  t886 = 4.9936e-13*var1[7];
  t912 = -0.03874900000062*t541;
  t937 = 0.281210000004*t583;
  t950 = t886 + t912 + t937;
  t2256 = t225*t2157;
  t2293 = -1.*t2244*t369;
  t2307 = t2256 + t2293;
  t2406 = t225*t2244;
  t2433 = t2157*t369;
  t2474 = t2406 + t2433;
  t1267 = -1.284e-8*var1[8];
  t1371 = -1.5499600000248e-7*t1354;
  t1465 = 2.012840000032e-6*t1444;
  t1472 = t1267 + t1371 + t1465;
  t1541 = 0.503210000016051*t1354;
  t1546 = 0.03874900000062*t1444;
  t1564 = t1541 + t1546;
  t1648 = 5.136e-14*var1[8];
  t1694 = -0.03874900000062*t1354;
  t1711 = 0.503210000008*t1444;
  t1792 = t1648 + t1694 + t1711;
  t1831 = 1.6e-11*t1829;
  t1838 = 1. + t1831;
  t2600 = -4.e-6*t194*t1082*t2143;
  t2669 = t1116*t2307;
  t2672 = 4.e-6*t2474*t583;
  t2710 = t2600 + t2669 + t2672;
  t2956 = -1.*t194*t503*t2143;
  t2963 = 4.e-6*t1082*t2307;
  t2967 = t2474*t583;
  t2972 = t2956 + t2963 + t2967;
  t2833 = t1488*t2474;
  t2862 = t194*t2143*t583;
  t2874 = -4.e-6*t2307*t583;
  t2928 = t2833 + t2862 + t2874;
  t1987 = -1.000000000016*t1354;
  t2002 = 1. + t1987;
  t3135 = t412*t2143;
  t3138 = t2109*t867*t223;
  t3160 = t3135 + t3138;
  t3189 = -1.*t2109*t412*t867;
  t3194 = t2143*t223;
  t3212 = t3189 + t3194;
  t3238 = t225*t3160;
  t3246 = -1.*t3212*t369;
  t3252 = t3238 + t3246;
  t3268 = t225*t3212;
  t3311 = t3160*t369;
  t3326 = t3268 + t3311;
  t3368 = 4.e-6*t2109*t194*t1082;
  t3377 = t1116*t3252;
  t3387 = 4.e-6*t3326*t583;
  t3425 = t3368 + t3377 + t3387;
  t3563 = t2109*t194*t503;
  t3609 = 4.e-6*t1082*t3252;
  t3610 = t3326*t583;
  t3613 = t3563 + t3609 + t3610;
  t3457 = t1488*t3326;
  t3504 = -1.*t2109*t194*t583;
  t3511 = -4.e-6*t3252*t583;
  t3542 = t3457 + t3504 + t3511;
  p_output1[0]=t1253*t1472 + t1531*t1564 + t1644*t1792 - 0.03875*(t1444*t1531 + t1339*t1644 + 4.e-6*t1253*t1829) + 0.16571*(4.e-6*t1444*t1531 + 4.e-6*t1644*t1829 + t1253*t1838) + 0.50321*(-4.e-6*t1253*t1444 - 1.*t1444*t1644 + t1531*t2002) - 1.*t194*t223*t400 + t194*t412*t430 + t475*t606 + t662*t855 + t867*t950 + var1[0];
  p_output1[1]=t1472*t2710 + t1564*t2928 + t1792*t2972 - 0.03875*(4.e-6*t1829*t2710 + t1444*t2928 + t1339*t2972) + 0.50321*(-4.e-6*t1444*t2710 + t2002*t2928 - 1.*t1444*t2972) + 0.16571*(t1838*t2710 + 4.e-6*t1444*t2928 + 4.e-6*t1829*t2972) + t2157*t400 + t2244*t430 + t2307*t606 + t2474*t855 - 1.*t194*t2143*t950 + var1[1];
  p_output1[2]=t1472*t3425 + t1564*t3542 + t1792*t3613 - 0.03875*(4.e-6*t1829*t3425 + t1444*t3542 + t1339*t3613) + 0.50321*(-4.e-6*t1444*t3425 + t2002*t3542 - 1.*t1444*t3613) + 0.16571*(t1838*t3425 + 4.e-6*t1444*t3542 + 4.e-6*t1829*t3613) + t3160*t400 + t3212*t430 + t3252*t606 + t3326*t855 + t194*t2109*t950 + var1[2];
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

#include "Joint_fl_knee_pitch_sphere_center.hh"

namespace SymFunction
{

void Joint_fl_knee_pitch_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
