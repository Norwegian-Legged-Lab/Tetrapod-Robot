/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 20:19:07 GMT+01:00
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
  double t264;
  double t229;
  double t251;
  double t452;
  double t454;
  double t456;
  double t499;
  double t714;
  double t722;
  double t745;
  double t746;
  double t749;
  double t759;
  double t766;
  double t601;
  double t613;
  double t618;
  double t669;
  double t682;
  double t800;
  double t804;
  double t816;
  double t856;
  double t857;
  double t954;
  double t979;
  double t980;
  double t280;
  double t290;
  double t331;
  double t368;
  double t478;
  double t540;
  double t1254;
  double t1095;
  double t1122;
  double t1175;
  double t1359;
  double t1381;
  double t1386;
  double t1594;
  double t1600;
  double t1602;
  double t1614;
  double t1795;
  double t2228;
  double t2230;
  double t2248;
  double t2298;
  double t1406;
  double t1486;
  double t1285;
  double t1311;
  double t1314;
  double t1529;
  double t1565;
  double t1575;
  double t2323;
  double t1225;
  double t2443;
  double t1264;
  double t2511;
  double t2293;
  double t2626;
  double t2634;
  double t510;
  double t2351;
  double t1667;
  double t1692;
  double t1710;
  double t1725;
  double t1726;
  double t1736;
  double t1863;
  double t1877;
  double t1880;
  double t1938;
  double t2117;
  double t2136;
  double t2140;
  double t2164;
  double t2181;
  double t2183;
  double t2414;
  double t2438;
  double t2453;
  double t2454;
  double t2455;
  double t2472;
  double t2476;
  double t2493;
  double t2770;
  double t2635;
  double t2688;
  double t2695;
  double t2698;
  double t2699;
  double t2707;
  double t2713;
  double t2733;
  double t2816;
  double t2822;
  double t2836;
  double t2837;
  double t2847;
  double t2869;
  double t2881;
  double t2886;
  double t2324;
  double t3186;
  double t2312;
  double t3364;
  double t2578;
  double t3211;
  double t3212;
  double t2517;
  t264 = Cos(var1[10]);
  t229 = Cos(var1[3]);
  t251 = Cos(var1[4]);
  t452 = Cos(var1[13]);
  t454 = -1.*t452;
  t456 = 1. + t454;
  t499 = Sin(var1[13]);
  t714 = Cos(var1[5]);
  t722 = Sin(var1[4]);
  t745 = -1.*t229*t714*t722;
  t746 = Sin(var1[3]);
  t749 = Sin(var1[5]);
  t759 = t746*t749;
  t766 = t745 + t759;
  t601 = Cos(var1[9]);
  t613 = -1.*t601;
  t618 = 1. + t613;
  t669 = Sin(var1[9]);
  t682 = -0.15121*t669;
  t800 = Cos(var1[12]);
  t804 = -1.*t800;
  t816 = 1. + t804;
  t856 = Sin(var1[12]);
  t857 = 0.15121*t856;
  t954 = t714*t746;
  t979 = t229*t722*t749;
  t980 = t954 + t979;
  t280 = -1.*t264;
  t290 = 1. + t280;
  t331 = -1. + t264;
  t368 = Sin(var1[10]);
  t478 = 4.e-6*t456;
  t540 = -2.8e-11*t456;
  t1254 = 7.e-6*t456;
  t1095 = -1.*t669*t766;
  t1122 = t601*t980;
  t1175 = t1095 + t1122;
  t1359 = t601*t766;
  t1381 = t669*t980;
  t1386 = t1359 + t1381;
  t1594 = Cos(var1[11]);
  t1600 = -1.*t1594;
  t1602 = 1. + t1600;
  t1614 = Sin(var1[11]);
  t1795 = -1. + t1594;
  t2228 = Cos(var1[14]);
  t2230 = -1.*t2228;
  t2248 = 1. + t2230;
  t2298 = Sin(var1[14]);
  t1406 = -1.*t499;
  t1486 = -4.e-6*t499;
  t1285 = -1.*t856*t766;
  t1311 = t800*t980;
  t1314 = t1285 + t1311;
  t1529 = t800*t766;
  t1565 = t856*t980;
  t1575 = t1529 + t1565;
  t2323 = 7.e-6*t2248;
  t1225 = -7.e-6*t499;
  t2443 = -7.e-6*t456;
  t1264 = 4.e-6*t499;
  t2511 = 4.e-6*t2248;
  t2293 = -2.8e-11*t2248;
  t2626 = -1. + t452;
  t2634 = 4.e-6*t2626;
  t510 = 7.e-6*t499;
  t2351 = 2.8e-11*t456;
  t1667 = t229*t251*t368;
  t1692 = -4.e-6*t368*t1175;
  t1710 = -1.000000000016*t290;
  t1725 = 1. + t1710;
  t1726 = t1725*t1386;
  t1736 = t1667 + t1692 + t1726;
  t1863 = t264*t229*t251;
  t1877 = 4.e-6*t290*t1175;
  t1880 = -1.*t368*t1386;
  t1938 = t1863 + t1877 + t1880;
  t2117 = 4.e-6*t290*t229*t251;
  t2136 = 1.6e-11*t331;
  t2140 = 1. + t2136;
  t2164 = t2140*t1175;
  t2181 = 4.e-6*t368*t1386;
  t2183 = t2117 + t2164 + t2181;
  t2414 = t2351 + t1406;
  t2438 = t229*t251*t2414;
  t2453 = t2443 + t1486;
  t2454 = t2453*t1314;
  t2455 = -1.000000000016*t456;
  t2472 = 1. + t2455;
  t2476 = t2472*t1575;
  t2493 = t2438 + t2454 + t2476;
  t2770 = 7.e-6*t2298;
  t2635 = t2634 + t1225;
  t2688 = t229*t251*t2635;
  t2695 = -6.5e-11*t456;
  t2698 = 1. + t2695;
  t2699 = t2698*t1314;
  t2707 = t2443 + t1264;
  t2713 = t2707*t1575;
  t2733 = t2688 + t2699 + t2713;
  t2816 = -1.000000000049*t456;
  t2822 = 1. + t2816;
  t2836 = t2822*t229*t251;
  t2837 = t2634 + t510;
  t2847 = t2837*t1314;
  t2869 = t2351 + t499;
  t2881 = t2869*t1575;
  t2886 = t2836 + t2847 + t2881;
  t2324 = -4.e-6*t2298;
  t3186 = 2.8e-11*t2248;
  t2312 = -1.*t2298;
  t3364 = -7.e-6*t2248;
  t2578 = 4.e-6*t2298;
  t3211 = -1. + t2228;
  t3212 = 4.e-6*t3211;
  t2517 = -7.e-6*t2298;
  p_output1[0]=(0.50315000001605*t1602 - 0.0398890000006382*t1614)*t1736 - 0.041195*(-1.*t1614*t1736 + t1594*t1938 + 4.e-6*t1602*t2183) + 0.803147*((1. - 1.000000000016*t1602)*t1736 + t1614*t1938 - 4.e-6*t1614*t2183) - 0.14871*(4.e-6*t1614*t1736 + 4.e-6*t1602*t1938 + (1. + 1.6e-11*t1795)*t2183) - 0.038924*((1. - 1.000000000049*t2248)*t2886 + t2493*(t2298 + t3186) + t2733*(t2770 + t3212)) - 0.80315*((1. - 1.000000000016*t2248)*t2493 + t2886*(t2312 + t3186) + t2733*(t2324 + t3364)) + 0.148705*((1. - 6.5e-11*t2248)*t2733 + t2886*(t2517 + t3212) + t2493*(t2578 + t3364)) + t1386*(0.281210000008499*t290 - 0.03874900000062*t368) + (0.15121*t618 + t682)*t766 + t766*(-0.15121*t816 + t857) + (-0.15121*t618 + t682)*t980 + (0.15121*t816 + t857)*t980 + 2.*var1[2] + t1175*(2.479936e-18*t290 - 1.54996e-7*t331 + 1.124840000016e-6*t368 - 1.2484e-7*var1[10]) + t229*t251*(-0.038749*t290 + 6.19984e-13*t331 - 0.281210000004*t368 - 4.9936e-13*var1[10]) + t2183*(2.552896e-18*t1602 + 2.012600000032e-6*t1614 - 1.59556e-7*t1795 - 1.26e-8*var1[11]) + t1938*(-0.039889*t1602 - 0.503150000008*t1614 + 6.38224e-13*t1795 - 5.04e-14*var1[11]) + t1314*(-0.281209000004*(t1254 + t1264) - 1.38024835e-16*t456 - 0.038748999993*(t1225 + t478) - 1.4640699999999997e-7*var1[13]) + t229*t251*(-0.0387489999948987*t456 - 2.123459e-6*(t478 + t510) - 0.281209000004*(t499 + t540) + 5.856279999999999e-13*var1[13]) + t1575*(-2.123459e-6*(t1254 + t1486) - 0.28120900000849935*t456 - 0.038748999993*(t1406 + t540) + 1.0248489999999998e-12*var1[13]) + t2733*(-2.3905277499999995e-16*t2248 - 0.038922999986*(t2511 + t2517) - 0.503149000008*(t2323 + t2578) - 2.598649999999999e-7*var1[14]) + t2886*(-0.03892299998790722*t2248 - 0.503149000008*(t2293 + t2298) - 3.6777349999999994e-6*(t2511 + t2770) + 1.0394599999999997e-12*var1[14]) + t2493*(-0.5031490000160505*t2248 - 0.038922999986*(t2293 + t2312) - 3.6777349999999994e-6*(t2323 + t2324) + 1.8190549999999993e-12*var1[14]);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "u_swingFootHeight2_DiagonalStance2.hh"

namespace TrotStance2
{

void u_swingFootHeight2_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
