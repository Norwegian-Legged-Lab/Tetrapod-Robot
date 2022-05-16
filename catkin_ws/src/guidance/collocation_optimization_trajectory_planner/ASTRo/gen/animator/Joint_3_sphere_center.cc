/*
 * Automatically Generated from Mathematica.
 * Fri 13 May 2022 14:24:42 GMT+02:00
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
  double t15;
  double t78;
  double t202;
  double t241;
  double t348;
  double t406;
  double t44;
  double t514;
  double t466;
  double t468;
  double t1129;
  double t1387;
  double t1597;
  double t1647;
  double t1762;
  double t1837;
  double t1842;
  double t2092;
  double t2167;
  double t2175;
  double t2188;
  double t2203;
  double t322;
  double t418;
  double t2217;
  double t494;
  double t512;
  double t2230;
  double t2227;
  double t2231;
  double t2232;
  double t2238;
  double t2240;
  double t2245;
  double t1167;
  double t1376;
  double t1781;
  double t1790;
  double t2263;
  double t2264;
  double t2267;
  double t2288;
  double t2289;
  double t2290;
  double t2306;
  double t2309;
  double t2312;
  double t2367;
  double t2457;
  double t2558;
  double t2570;
  double t2588;
  double t2652;
  double t2758;
  double t2820;
  double t2836;
  double t2859;
  double t2863;
  double t2871;
  double t2901;
  double t2902;
  double t2917;
  t15 = Cos(var1[4]);
  t78 = Cos(var1[9]);
  t202 = -1.*t78;
  t241 = 1. + t202;
  t348 = Sin(var1[9]);
  t406 = 0.15121*t348;
  t44 = Cos(var1[5]);
  t514 = Sin(var1[5]);
  t466 = Sin(var1[10]);
  t468 = Sin(var1[4]);
  t1129 = Cos(var1[10]);
  t1387 = t78*t15*t44;
  t1597 = -1.*t15*t348*t514;
  t1647 = t1387 + t1597;
  t1762 = Cos(var1[11]);
  t1837 = t466*t468;
  t1842 = t1129*t1647;
  t2092 = t1837 + t1842;
  t2167 = Sin(var1[11]);
  t2175 = t1129*t468;
  t2188 = -1.*t466*t1647;
  t2203 = t2175 + t2188;
  t322 = -0.15121*t241;
  t418 = t322 + t406;
  t2217 = Sin(var1[3]);
  t494 = 0.15121*t241;
  t512 = t494 + t406;
  t2230 = Cos(var1[3]);
  t2227 = t44*t2217*t468;
  t2231 = t2230*t514;
  t2232 = t2227 + t2231;
  t2238 = t2230*t44;
  t2240 = -1.*t2217*t468*t514;
  t2245 = t2238 + t2240;
  t1167 = -1.*t1129;
  t1376 = 1. + t1167;
  t1781 = -1.*t1762;
  t1790 = 1. + t1781;
  t2263 = t78*t2232;
  t2264 = t348*t2245;
  t2267 = t2263 + t2264;
  t2288 = -1.*t15*t466*t2217;
  t2289 = t1129*t2267;
  t2290 = t2288 + t2289;
  t2306 = -1.*t1129*t15*t2217;
  t2309 = -1.*t466*t2267;
  t2312 = t2306 + t2309;
  t2367 = -1.*t2230*t44*t468;
  t2457 = t2217*t514;
  t2558 = t2367 + t2457;
  t2570 = t44*t2217;
  t2588 = t2230*t468*t514;
  t2652 = t2570 + t2588;
  t2758 = t78*t2558;
  t2820 = t348*t2652;
  t2836 = t2758 + t2820;
  t2859 = t2230*t15*t466;
  t2863 = t1129*t2836;
  t2871 = t2859 + t2863;
  t2901 = t1129*t2230*t15;
  t2902 = -1.*t466*t2836;
  t2917 = t2901 + t2902;
  p_output1[0]=-0.28121*t1376*t1647 - 0.50321*t1790*t2092 - 0.50321*t2167*t2203 - 0.50321*(t1762*t2092 - 1.*t2167*t2203) + t15*t418*t44 + 0.28121*t466*t468 - 1.*t15*t512*t514 + 0.15121*(-1.*t15*t348*t44 - 1.*t15*t514*t78) + var1[0];
  p_output1[1]=-0.28121*t1376*t2267 - 0.50321*t1790*t2290 - 0.50321*t2167*t2312 - 0.50321*(t1762*t2290 - 1.*t2167*t2312) + t2232*t418 - 0.28121*t15*t2217*t466 + t2245*t512 + 0.15121*(-1.*t2232*t348 + t2245*t78) + var1[1];
  p_output1[2]=-0.28121*t1376*t2836 - 0.50321*t1790*t2871 - 0.50321*t2167*t2917 - 0.50321*(t1762*t2871 - 1.*t2167*t2917) + t2558*t418 + 0.28121*t15*t2230*t466 + t2652*t512 + 0.15121*(-1.*t2558*t348 + t2652*t78) + var1[2];
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

#include "Joint_3_sphere_center.hh"

namespace SymFunction
{

void Joint_3_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
