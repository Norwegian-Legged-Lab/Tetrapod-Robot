/*
 * Automatically Generated from Mathematica.
 * Fri 13 May 2022 14:24:59 GMT+02:00
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
  double t597;
  double t1285;
  double t1332;
  double t1338;
  double t1351;
  double t1353;
  double t1092;
  double t1891;
  double t1468;
  double t1701;
  double t1942;
  double t1949;
  double t2023;
  double t2027;
  double t2080;
  double t2097;
  double t2102;
  double t2111;
  double t2282;
  double t2298;
  double t2303;
  double t2335;
  double t1341;
  double t1403;
  double t2599;
  double t1879;
  double t1885;
  double t2622;
  double t2621;
  double t2624;
  double t2632;
  double t2636;
  double t2642;
  double t2643;
  double t1946;
  double t1948;
  double t2090;
  double t2096;
  double t2713;
  double t2719;
  double t2729;
  double t2734;
  double t2739;
  double t2741;
  double t2752;
  double t2761;
  double t2765;
  double t2805;
  double t2807;
  double t2811;
  double t2825;
  double t2826;
  double t2828;
  double t2843;
  double t2846;
  double t2850;
  double t2868;
  double t2870;
  double t2877;
  double t2886;
  double t2891;
  double t2905;
  t597 = Cos(var1[4]);
  t1285 = Cos(var1[12]);
  t1332 = -1.*t1285;
  t1338 = 1. + t1332;
  t1351 = Sin(var1[12]);
  t1353 = -0.15121*t1351;
  t1092 = Cos(var1[5]);
  t1891 = Sin(var1[5]);
  t1468 = Sin(var1[13]);
  t1701 = Sin(var1[4]);
  t1942 = Cos(var1[13]);
  t1949 = t1285*t597*t1092;
  t2023 = -1.*t597*t1351*t1891;
  t2027 = t1949 + t2023;
  t2080 = Cos(var1[14]);
  t2097 = -1.*t1468*t1701;
  t2102 = t1942*t2027;
  t2111 = t2097 + t2102;
  t2282 = Sin(var1[14]);
  t2298 = t1942*t1701;
  t2303 = t1468*t2027;
  t2335 = t2298 + t2303;
  t1341 = 0.15121*t1338;
  t1403 = t1341 + t1353;
  t2599 = Sin(var1[3]);
  t1879 = -0.15121*t1338;
  t1885 = t1879 + t1353;
  t2622 = Cos(var1[3]);
  t2621 = t1092*t2599*t1701;
  t2624 = t2622*t1891;
  t2632 = t2621 + t2624;
  t2636 = t2622*t1092;
  t2642 = -1.*t2599*t1701*t1891;
  t2643 = t2636 + t2642;
  t1946 = -1.*t1942;
  t1948 = 1. + t1946;
  t2090 = -1.*t2080;
  t2096 = 1. + t2090;
  t2713 = t1285*t2632;
  t2719 = t1351*t2643;
  t2729 = t2713 + t2719;
  t2734 = t597*t1468*t2599;
  t2739 = t1942*t2729;
  t2741 = t2734 + t2739;
  t2752 = -1.*t1942*t597*t2599;
  t2761 = t1468*t2729;
  t2765 = t2752 + t2761;
  t2805 = -1.*t2622*t1092*t1701;
  t2807 = t2599*t1891;
  t2811 = t2805 + t2807;
  t2825 = t1092*t2599;
  t2826 = t2622*t1701*t1891;
  t2828 = t2825 + t2826;
  t2843 = t1285*t2811;
  t2846 = t1351*t2828;
  t2850 = t2843 + t2846;
  t2868 = -1.*t2622*t597*t1468;
  t2870 = t1942*t2850;
  t2877 = t2868 + t2870;
  t2886 = t1942*t2622*t597;
  t2891 = t1468*t2850;
  t2905 = t2886 + t2891;
  p_output1[0]=0.28121*t1468*t1701 + 0.28121*t1948*t2027 + 0.50321*t2096*t2111 - 0.50321*t2282*t2335 + 0.23321*(t2080*t2111 + t2282*t2335) + t1092*t1403*t597 - 1.*t1885*t1891*t597 - 0.15121*(-1.*t1092*t1351*t597 - 1.*t1285*t1891*t597) + var1[0];
  p_output1[1]=t1403*t2632 + t1885*t2643 - 0.15121*(-1.*t1351*t2632 + t1285*t2643) + 0.28121*t1948*t2729 + 0.50321*t2096*t2741 - 0.50321*t2282*t2765 + 0.23321*(t2080*t2741 + t2282*t2765) - 0.28121*t1468*t2599*t597 + var1[1];
  p_output1[2]=t1403*t2811 + t1885*t2828 - 0.15121*(-1.*t1351*t2811 + t1285*t2828) + 0.28121*t1948*t2850 + 0.50321*t2096*t2877 - 0.50321*t2282*t2905 + 0.23321*(t2080*t2877 + t2282*t2905) + 0.28121*t1468*t2622*t597 + var1[2];
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

#include "FrFoot_sphere_center.hh"

namespace SymFunction
{

void FrFoot_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
