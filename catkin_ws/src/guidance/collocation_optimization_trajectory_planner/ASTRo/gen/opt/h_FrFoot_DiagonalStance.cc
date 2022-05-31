/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 16:59:01 GMT+02:00
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
  double t390;
  double t478;
  double t977;
  double t1083;
  double t1354;
  double t1417;
  double t459;
  double t1832;
  double t1623;
  double t1765;
  double t1922;
  double t1984;
  double t1990;
  double t2010;
  double t2055;
  double t2113;
  double t2213;
  double t2264;
  double t2291;
  double t2294;
  double t2295;
  double t2347;
  double t1279;
  double t1424;
  double t2500;
  double t1770;
  double t1792;
  double t2542;
  double t2541;
  double t2595;
  double t2602;
  double t2606;
  double t2629;
  double t2690;
  double t1966;
  double t1983;
  double t2087;
  double t2111;
  double t3156;
  double t3158;
  double t3275;
  double t3305;
  double t3344;
  double t3366;
  double t3441;
  double t3448;
  double t3449;
  double t4398;
  double t4420;
  double t4438;
  double t4444;
  double t4452;
  double t4464;
  double t4481;
  double t4488;
  double t4489;
  double t4509;
  double t4510;
  double t4512;
  double t4540;
  double t4551;
  double t4552;
  t390 = Cos(var1[4]);
  t478 = Cos(var1[12]);
  t977 = -1.*t478;
  t1083 = 1. + t977;
  t1354 = Sin(var1[12]);
  t1417 = -0.15121*t1354;
  t459 = Cos(var1[5]);
  t1832 = Sin(var1[5]);
  t1623 = Sin(var1[13]);
  t1765 = Sin(var1[4]);
  t1922 = Cos(var1[13]);
  t1984 = t478*t390*t459;
  t1990 = -1.*t390*t1354*t1832;
  t2010 = t1984 + t1990;
  t2055 = Cos(var1[14]);
  t2113 = -1.*t1623*t1765;
  t2213 = t1922*t2010;
  t2264 = t2113 + t2213;
  t2291 = Sin(var1[14]);
  t2294 = t1922*t1765;
  t2295 = t1623*t2010;
  t2347 = t2294 + t2295;
  t1279 = 0.15121*t1083;
  t1424 = t1279 + t1417;
  t2500 = Sin(var1[3]);
  t1770 = -0.15121*t1083;
  t1792 = t1770 + t1417;
  t2542 = Cos(var1[3]);
  t2541 = t459*t2500*t1765;
  t2595 = t2542*t1832;
  t2602 = t2541 + t2595;
  t2606 = t2542*t459;
  t2629 = -1.*t2500*t1765*t1832;
  t2690 = t2606 + t2629;
  t1966 = -1.*t1922;
  t1983 = 1. + t1966;
  t2087 = -1.*t2055;
  t2111 = 1. + t2087;
  t3156 = t478*t2602;
  t3158 = t1354*t2690;
  t3275 = t3156 + t3158;
  t3305 = t390*t1623*t2500;
  t3344 = t1922*t3275;
  t3366 = t3305 + t3344;
  t3441 = -1.*t1922*t390*t2500;
  t3448 = t1623*t3275;
  t3449 = t3441 + t3448;
  t4398 = -1.*t2542*t459*t1765;
  t4420 = t2500*t1832;
  t4438 = t4398 + t4420;
  t4444 = t459*t2500;
  t4452 = t2542*t1765*t1832;
  t4464 = t4444 + t4452;
  t4481 = t478*t4438;
  t4488 = t1354*t4464;
  t4489 = t4481 + t4488;
  t4509 = -1.*t2542*t390*t1623;
  t4510 = t1922*t4489;
  t4512 = t4509 + t4510;
  t4540 = t1922*t2542*t390;
  t4551 = t1623*t4489;
  t4552 = t4540 + t4551;
  p_output1[0]=0.28121*t1623*t1765 + 0.28121*t1983*t2010 + 0.50321*t2111*t2264 - 0.50321*t2291*t2347 + 0.19821*(t2055*t2264 + t2291*t2347) - 1.*t1792*t1832*t390 + t1424*t390*t459 - 0.15121*(-1.*t1354*t390*t459 - 1.*t1832*t390*t478) + var1[0] - 1.*var2[0];
  p_output1[1]=t1424*t2602 + t1792*t2690 + 0.28121*t1983*t3275 + 0.50321*t2111*t3366 - 0.50321*t2291*t3449 + 0.19821*(t2055*t3366 + t2291*t3449) - 0.28121*t1623*t2500*t390 - 0.15121*(-1.*t1354*t2602 + t2690*t478) + var1[1] - 1.*var2[1];
  p_output1[2]=0.28121*t1623*t2542*t390 + t1424*t4438 + t1792*t4464 + 0.28121*t1983*t4489 + 0.50321*t2111*t4512 - 0.50321*t2291*t4552 + 0.19821*(t2055*t4512 + t2291*t4552) - 0.15121*(-1.*t1354*t4438 + t4464*t478) + var1[2] - 1.*var2[2];
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

#include "h_FrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void h_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
