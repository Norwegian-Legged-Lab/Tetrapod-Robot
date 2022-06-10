/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:31:07 GMT+02:00
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
  double t1693;
  double t2118;
  double t2213;
  double t2233;
  double t2245;
  double t2247;
  double t2525;
  double t2331;
  double t2340;
  double t2528;
  double t2356;
  double t2536;
  double t3064;
  double t3448;
  double t3468;
  double t3567;
  double t1462;
  double t1624;
  double t9156;
  double t9194;
  double t10819;
  double t10932;
  double t11164;
  double t11334;
  double t11336;
  double t11374;
  double t11418;
  double t11427;
  double t11449;
  double t11462;
  double t2271;
  double t2272;
  double t3385;
  double t3397;
  double t9163;
  double t9191;
  double t11310;
  double t11313;
  double t12016;
  double t12122;
  double t12203;
  double t12392;
  double t12882;
  double t13015;
  double t13947;
  double t13948;
  double t13956;
  double t14909;
  double t15511;
  double t15610;
  double t15652;
  double t15653;
  double t15685;
  double t15738;
  double t15791;
  double t16020;
  double t19477;
  double t19483;
  double t19535;
  double t19695;
  double t19712;
  double t16873;
  double t19915;
  double t19928;
  double t19940;
  double t20159;
  double t20169;
  double t20228;
  double t20418;
  double t20425;
  double t20628;
  double t21080;
  double t21153;
  double t21321;
  t1693 = Sin(var1[3]);
  t2118 = Cos(var1[15]);
  t2213 = -1.*t2118;
  t2233 = 1. + t2213;
  t2245 = -0.15121*t2233;
  t2247 = Sin(var1[15]);
  t2525 = Cos(var1[3]);
  t2331 = Cos(var1[5]);
  t2340 = Sin(var1[4]);
  t2528 = Sin(var1[5]);
  t2356 = t2331*t1693*t2340;
  t2536 = t2525*t2528;
  t3064 = t2356 + t2536;
  t3448 = t2525*t2331;
  t3468 = -1.*t1693*t2340*t2528;
  t3567 = t3448 + t3468;
  t1462 = Cos(var1[4]);
  t1624 = Sin(var1[16]);
  t9156 = Cos(var1[16]);
  t9194 = t2118*t3064;
  t10819 = t2247*t3567;
  t10932 = t9194 + t10819;
  t11164 = Cos(var1[17]);
  t11334 = -1.*t1462*t1624*t1693;
  t11336 = t9156*t10932;
  t11374 = t11334 + t11336;
  t11418 = Sin(var1[17]);
  t11427 = -1.*t9156*t1462*t1693;
  t11449 = -1.*t1624*t10932;
  t11462 = t11427 + t11449;
  t2271 = -0.15121*t2247;
  t2272 = t2245 + t2271;
  t3385 = 0.15121*t2247;
  t3397 = t2245 + t3385;
  t9163 = -1.*t9156;
  t9191 = 1. + t9163;
  t11310 = -1.*t11164;
  t11313 = 1. + t11310;
  t12016 = -1.*t2118*t2525*t1462*t2331;
  t12122 = t2525*t1462*t2247*t2528;
  t12203 = t12016 + t12122;
  t12392 = -1.*t2525*t1624*t2340;
  t12882 = t9156*t12203;
  t13015 = t12392 + t12882;
  t13947 = -1.*t9156*t2525*t2340;
  t13948 = -1.*t1624*t12203;
  t13956 = t13947 + t13948;
  t14909 = t2525*t2331*t2340;
  t15511 = -1.*t1693*t2528;
  t15610 = t14909 + t15511;
  t15652 = t2331*t1693;
  t15653 = t2525*t2340*t2528;
  t15685 = t15652 + t15653;
  t15738 = t2247*t15610;
  t15791 = t2118*t15685;
  t16020 = t15738 + t15791;
  t19477 = -1.*t2525*t2331*t2340;
  t19483 = t1693*t2528;
  t19535 = t19477 + t19483;
  t19695 = -1.*t2247*t19535;
  t19712 = t19695 + t15791;
  t16873 = -1.*t2247*t15685;
  t19915 = t2118*t19535;
  t19928 = t2247*t15685;
  t19940 = t19915 + t19928;
  t20159 = -1.*t2525*t1462*t1624;
  t20169 = -1.*t9156*t19940;
  t20228 = t20159 + t20169;
  t20418 = t9156*t2525*t1462;
  t20425 = -1.*t1624*t19940;
  t20628 = t20418 + t20425;
  t21080 = t2525*t1462*t1624;
  t21153 = t9156*t19940;
  t21321 = t21080 + t21153;
  p_output1[0]=1.;
  p_output1[1]=-0.50321*t11313*t11374 - 0.50321*t11418*t11462 - 0.19821*(t11164*t11374 - 1.*t11418*t11462) - 0.28121*t1462*t1624*t1693 + t2272*t3064 + t3397*t3567 - 0.15121*(-1.*t2247*t3064 + t2118*t3567) - 0.28121*t10932*t9191;
  p_output1[2]=-0.50321*t11313*t13015 - 0.50321*t11418*t13956 - 0.19821*(t11164*t13015 - 1.*t11418*t13956) - 1.*t1462*t2272*t2331*t2525 - 0.28121*t1624*t2340*t2525 - 0.15121*(t1462*t2247*t2331*t2525 + t1462*t2118*t2525*t2528) + t1462*t2525*t2528*t3397 - 0.28121*t12203*t9191;
  p_output1[3]=0.50321*t11418*t16020*t1624 - 0.15121*(t16873 + t15610*t2118) + t15685*t2272 + t15610*t3397 - 0.50321*t11313*t16020*t9156 - 0.19821*(t11418*t16020*t1624 + t11164*t16020*t9156) - 0.28121*t16020*t9191;
  p_output1[4]=0.50321*t11418*t1624*t19712 - 0.15121*(t16873 - 1.*t19535*t2118) + t19535*(-0.15121*t2118 + t2271) + t15685*(0.15121*t2118 + t2271) - 0.50321*t11313*t19712*t9156 - 0.19821*(t11418*t1624*t19712 + t11164*t19712*t9156) - 0.28121*t19712*t9191;
  p_output1[5]=-0.28121*t1624*t19940 - 0.50321*t11418*t20228 - 0.50321*t11313*t20628 - 0.19821*(-1.*t11418*t20228 + t11164*t20628) + 0.28121*t1462*t2525*t9156;
  p_output1[6]=-0.50321*t11164*t20628 - 0.50321*t11418*t21321 - 0.19821*(-1.*t11164*t20628 - 1.*t11418*t21321);
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

#include "J_u_rearSwingFootHeightflat_DiagonalStance_DiagonalStance.hh"

namespace SymFunction
{

void J_u_rearSwingFootHeightflat_DiagonalStance_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
