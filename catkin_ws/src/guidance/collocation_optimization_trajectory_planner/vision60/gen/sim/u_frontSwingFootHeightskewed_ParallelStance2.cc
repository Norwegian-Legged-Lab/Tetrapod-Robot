/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 13:07:42 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t4714;
  double t27091;
  double t27260;
  double t27096;
  double t27265;
  double t4715;
  double t4723;
  double t27345;
  double t27376;
  double t27378;
  double t27380;
  double t27388;
  double t27098;
  double t27288;
  double t27338;
  double t24460;
  double t27389;
  double t27390;
  double t27391;
  double t27393;
  double t27394;
  double t27395;
  double t27396;
  double t27398;
  double t27405;
  double t27406;
  double t27407;
  double t24463;
  double t26890;
  double t27371;
  double t27374;
  double t27472;
  double t27489;
  double t27503;
  double t27439;
  double t27447;
  double t27448;
  double t27577;
  double t27583;
  double t27591;
  double t27399;
  double t27404;
  double t27611;
  double t27617;
  double t28006;
  double t35000;
  double t35035;
  double t36100;
  double t42007;
  double t42020;
  double t42072;
  double t42209;
  double t42303;
  double t42309;
  double t42420;
  double t42423;
  double t42456;
  t4714 = Cos(var1[3]);
  t27091 = Cos(var1[5]);
  t27260 = Sin(var1[3]);
  t27096 = Sin(var1[4]);
  t27265 = Sin(var1[5]);
  t4715 = Cos(var1[4]);
  t4723 = Sin(var1[12]);
  t27345 = Cos(var1[12]);
  t27376 = t27091*t27260;
  t27378 = t4714*t27096*t27265;
  t27380 = t27376 + t27378;
  t27388 = Sin(var1[13]);
  t27098 = -1.*t4714*t27091*t27096;
  t27288 = t27260*t27265;
  t27338 = t27098 + t27288;
  t24460 = Cos(var1[13]);
  t27389 = t27345*t4714*t4715;
  t27390 = -1.*t4723*t27380;
  t27391 = t27389 + t27390;
  t27393 = Sin(var1[14]);
  t27394 = -1.*t27388*t27338;
  t27395 = t24460*t27391;
  t27396 = t27394 + t27395;
  t27398 = Cos(var1[14]);
  t27405 = t24460*t27338;
  t27406 = t27388*t27391;
  t27407 = t27405 + t27406;
  t24463 = -1.*t24460;
  t26890 = 1. + t24463;
  t27371 = -1.*t27345;
  t27374 = 1. + t27371;
  t27472 = t4714*t27091;
  t27489 = -1.*t27260*t27096*t27265;
  t27503 = t27472 + t27489;
  t27439 = t27091*t27260*t27096;
  t27447 = t4714*t27265;
  t27448 = t27439 + t27447;
  t27577 = -1.*t27345*t4715*t27260;
  t27583 = -1.*t4723*t27503;
  t27591 = t27577 + t27583;
  t27399 = -1.*t27398;
  t27404 = 1. + t27399;
  t27611 = -1.*t27388*t27448;
  t27617 = t24460*t27591;
  t28006 = t27611 + t27617;
  t35000 = t24460*t27448;
  t35035 = t27388*t27591;
  t36100 = t35000 + t35035;
  t42007 = t27345*t27096;
  t42020 = t4715*t4723*t27265;
  t42072 = t42007 + t42020;
  t42209 = -1.*t4715*t27091*t27388;
  t42303 = t24460*t42072;
  t42309 = t42209 + t42303;
  t42420 = t24460*t4715*t27091;
  t42423 = t27388*t42072;
  t42456 = t42420 + t42423;
  p_output1[0]=0.325*t26890*t27338 - 0.1575*t27374*t27380 - 0.325*t27388*t27391 + 0.075*t27393*t27396 + 0.075*t27404*t27407 - 0.0641*(t27396*t27398 + t27393*t27407) + 0.355*(-1.*t27393*t27396 + t27398*t27407) + 0.1575*t4714*t4715*t4723 - 0.2255*(t27345*t27380 + t4714*t4715*t4723) + var1[2] - 0.5*(0.325*t26890*t27448 - 0.1575*t27374*t27503 - 0.325*t27388*t27591 + 0.075*t27393*t28006 + 0.075*t27404*t36100 - 0.0641*(t27398*t28006 + t27393*t36100) + 0.355*(-1.*t27393*t28006 + t27398*t36100) - 0.1575*t27260*t4715*t4723 - 0.2255*(t27345*t27503 - 1.*t27260*t4715*t4723) + var1[1])*var3[0]*(1. + Tanh((-0.325*t27388*t42072 + 0.075*t27393*t42309 + 0.075*t27404*t42456 - 0.0641*(t27398*t42309 + t27393*t42456) + 0.355*(-1.*t27393*t42309 + t27398*t42456) + 0.325*t26890*t27091*t4715 + 0.1575*t27265*t27374*t4715 + 0.1575*t27096*t4723 - 0.2255*(-1.*t27265*t27345*t4715 + t27096*t4723) + var1[0] - 1.*var2[0])*var4[0]));
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "u_frontSwingFootHeightskewed_ParallelStance2.hh"

namespace SymFunction
{

void u_frontSwingFootHeightskewed_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
