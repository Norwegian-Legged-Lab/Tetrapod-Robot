/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 14:35:35 GMT+02:00
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
  double t549;
  double t732;
  double t741;
  double t1154;
  double t1302;
  double t1499;
  double t638;
  double t1999;
  double t1734;
  double t1851;
  double t2400;
  double t2712;
  double t2853;
  double t2922;
  double t2996;
  double t3079;
  double t3146;
  double t3193;
  double t3233;
  double t3250;
  double t3338;
  double t3765;
  double t1281;
  double t1559;
  double t4569;
  double t1882;
  double t1898;
  double t5411;
  double t5295;
  double t5419;
  double t5474;
  double t5501;
  double t5527;
  double t5647;
  double t2488;
  double t2594;
  double t2997;
  double t3045;
  double t6039;
  double t6368;
  double t6655;
  double t6968;
  double t6999;
  double t7001;
  double t7288;
  double t7306;
  double t7338;
  double t7775;
  double t7792;
  double t7878;
  double t7887;
  double t7892;
  double t7894;
  double t8112;
  double t8113;
  double t8114;
  double t8123;
  double t8126;
  double t8127;
  double t8146;
  double t8147;
  double t8148;
  t549 = Cos(var1[4]);
  t732 = Cos(var1[9]);
  t741 = -1.*t732;
  t1154 = 1. + t741;
  t1302 = Sin(var1[9]);
  t1499 = 0.15121*t1302;
  t638 = Cos(var1[5]);
  t1999 = Sin(var1[5]);
  t1734 = Sin(var1[10]);
  t1851 = Sin(var1[4]);
  t2400 = Cos(var1[10]);
  t2712 = t732*t549*t638;
  t2853 = -1.*t549*t1302*t1999;
  t2922 = t2712 + t2853;
  t2996 = Cos(var1[11]);
  t3079 = t1734*t1851;
  t3146 = t2400*t2922;
  t3193 = t3079 + t3146;
  t3233 = Sin(var1[11]);
  t3250 = t2400*t1851;
  t3338 = -1.*t1734*t2922;
  t3765 = t3250 + t3338;
  t1281 = -0.15121*t1154;
  t1559 = t1281 + t1499;
  t4569 = Sin(var1[3]);
  t1882 = 0.15121*t1154;
  t1898 = t1882 + t1499;
  t5411 = Cos(var1[3]);
  t5295 = t638*t4569*t1851;
  t5419 = t5411*t1999;
  t5474 = t5295 + t5419;
  t5501 = t5411*t638;
  t5527 = -1.*t4569*t1851*t1999;
  t5647 = t5501 + t5527;
  t2488 = -1.*t2400;
  t2594 = 1. + t2488;
  t2997 = -1.*t2996;
  t3045 = 1. + t2997;
  t6039 = t732*t5474;
  t6368 = t1302*t5647;
  t6655 = t6039 + t6368;
  t6968 = -1.*t549*t1734*t4569;
  t6999 = t2400*t6655;
  t7001 = t6968 + t6999;
  t7288 = -1.*t2400*t549*t4569;
  t7306 = -1.*t1734*t6655;
  t7338 = t7288 + t7306;
  t7775 = -1.*t5411*t638*t1851;
  t7792 = t4569*t1999;
  t7878 = t7775 + t7792;
  t7887 = t638*t4569;
  t7892 = t5411*t1851*t1999;
  t7894 = t7887 + t7892;
  t8112 = t732*t7878;
  t8113 = t1302*t7894;
  t8114 = t8112 + t8113;
  t8123 = t5411*t549*t1734;
  t8126 = t2400*t8114;
  t8127 = t8123 + t8126;
  t8146 = t2400*t5411*t549;
  t8147 = -1.*t1734*t8114;
  t8148 = t8146 + t8147;
  p_output1[0]=0.28121*t1734*t1851 - 0.28121*t2594*t2922 - 0.50321*t3045*t3193 - 0.50321*t3233*t3765 - 0.19821*(t2996*t3193 - 1.*t3233*t3765) - 1.*t1898*t1999*t549 + t1559*t549*t638 + 0.15121*(-1.*t1302*t549*t638 - 1.*t1999*t549*t732) + var1[0] - 1.*var2[0];
  p_output1[1]=t1559*t5474 - 0.28121*t1734*t4569*t549 + t1898*t5647 - 0.28121*t2594*t6655 - 0.50321*t3045*t7001 + 0.15121*(-1.*t1302*t5474 + t5647*t732) - 0.50321*t3233*t7338 - 0.19821*(t2996*t7001 - 1.*t3233*t7338) + var1[1] - 1.*var2[1];
  p_output1[2]=0.28121*t1734*t5411*t549 + t1559*t7878 + t1898*t7894 + 0.15121*(-1.*t1302*t7878 + t732*t7894) - 0.28121*t2594*t8114 - 0.50321*t3045*t8127 - 0.50321*t3233*t8148 - 0.19821*(t2996*t8127 - 1.*t3233*t8148) + var1[2] - 1.*var2[2];
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

#include "h_RlFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void h_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
