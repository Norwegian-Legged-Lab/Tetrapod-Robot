/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:05:02 GMT+02:00
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
  double t453;
  double t775;
  double t831;
  double t1058;
  double t1146;
  double t521;
  double t1374;
  double t106;
  double t1376;
  double t1381;
  double t1382;
  double t1392;
  double t1412;
  double t1422;
  double t1428;
  double t1475;
  double t1543;
  double t1574;
  double t1643;
  double t288;
  double t339;
  double t2062;
  double t1108;
  double t1137;
  double t2115;
  double t2235;
  double t2258;
  double t2269;
  double t2083;
  double t2175;
  double t2198;
  double t2371;
  double t2378;
  double t2384;
  double t1488;
  double t1494;
  double t2429;
  double t2434;
  double t2465;
  double t2497;
  double t2556;
  double t2641;
  double t3496;
  double t3521;
  double t3537;
  double t3318;
  double t3319;
  double t3407;
  double t3884;
  double t3887;
  double t3893;
  double t3897;
  double t3905;
  double t3910;
  double t3921;
  double t3922;
  double t3927;
  t453 = Cos(var1[4]);
  t775 = Sin(var1[15]);
  t831 = Sin(var1[4]);
  t1058 = Cos(var1[15]);
  t1146 = Sin(var1[5]);
  t521 = Cos(var1[5]);
  t1374 = Sin(var1[16]);
  t106 = Cos(var1[16]);
  t1376 = t1058*t831;
  t1381 = t453*t775*t1146;
  t1382 = t1376 + t1381;
  t1392 = Sin(var1[17]);
  t1412 = -1.*t453*t521*t1374;
  t1422 = t106*t1382;
  t1428 = t1412 + t1422;
  t1475 = Cos(var1[17]);
  t1543 = t106*t453*t521;
  t1574 = t1374*t1382;
  t1643 = t1543 + t1574;
  t288 = -1.*t106;
  t339 = 1. + t288;
  t2062 = Sin(var1[3]);
  t1108 = -1.*t1058;
  t1137 = 1. + t1108;
  t2115 = Cos(var1[3]);
  t2235 = t2115*t521;
  t2258 = -1.*t2062*t831*t1146;
  t2269 = t2235 + t2258;
  t2083 = t521*t2062*t831;
  t2175 = t2115*t1146;
  t2198 = t2083 + t2175;
  t2371 = -1.*t1058*t453*t2062;
  t2378 = -1.*t775*t2269;
  t2384 = t2371 + t2378;
  t1488 = -1.*t1475;
  t1494 = 1. + t1488;
  t2429 = -1.*t1374*t2198;
  t2434 = t106*t2384;
  t2465 = t2429 + t2434;
  t2497 = t106*t2198;
  t2556 = t1374*t2384;
  t2641 = t2497 + t2556;
  t3496 = t521*t2062;
  t3521 = t2115*t831*t1146;
  t3537 = t3496 + t3521;
  t3318 = -1.*t2115*t521*t831;
  t3319 = t2062*t1146;
  t3407 = t3318 + t3319;
  t3884 = t1058*t2115*t453;
  t3887 = -1.*t775*t3537;
  t3893 = t3884 + t3887;
  t3897 = -1.*t1374*t3407;
  t3905 = t106*t3893;
  t3910 = t3897 + t3905;
  t3921 = t106*t3407;
  t3922 = t1374*t3893;
  t3927 = t3921 + t3922;
  p_output1[0]=0.325*t1374*t1382 - 0.575*t1392*t1428 - 0.575*t1494*t1643 - 0.0641*(t1428*t1475 + t1392*t1643) - 0.295*(-1.*t1392*t1428 + t1475*t1643) + 0.1575*t1137*t1146*t453 - 0.325*t339*t453*t521 + 0.1575*t775*t831 - 0.2255*(-1.*t1058*t1146*t453 + t775*t831) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.1575*t1137*t2269 + 0.325*t1374*t2384 - 0.575*t1392*t2465 - 0.575*t1494*t2641 - 0.0641*(t1475*t2465 + t1392*t2641) - 0.295*(-1.*t1392*t2465 + t1475*t2641) - 0.325*t2198*t339 - 0.1575*t2062*t453*t775 - 0.2255*(t1058*t2269 - 1.*t2062*t453*t775) + var1[1] - 1.*var2[1];
  p_output1[2]=-0.325*t339*t3407 - 0.1575*t1137*t3537 + 0.325*t1374*t3893 - 0.575*t1392*t3910 - 0.575*t1494*t3927 - 0.0641*(t1475*t3910 + t1392*t3927) - 0.295*(-1.*t1392*t3910 + t1475*t3927) + 0.1575*t2115*t453*t775 - 0.2255*(t1058*t3537 + t2115*t453*t775) + var1[2] - 1.*var2[2];
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

#include "h_RrFoot_ParallelStance.hh"

namespace SymFunction
{

void h_RrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
