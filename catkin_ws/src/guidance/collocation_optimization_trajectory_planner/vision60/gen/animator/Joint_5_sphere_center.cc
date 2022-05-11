/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:11:14 GMT+02:00
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
  double t3998;
  double t4357;
  double t4398;
  double t4428;
  double t4812;
  double t3999;
  double t7510;
  double t3268;
  double t7801;
  double t7833;
  double t8156;
  double t8466;
  double t8468;
  double t8913;
  double t9139;
  double t9686;
  double t15481;
  double t17868;
  double t17911;
  double t3507;
  double t3627;
  double t19015;
  double t4436;
  double t4451;
  double t20240;
  double t24907;
  double t24957;
  double t25156;
  double t19100;
  double t22946;
  double t24842;
  double t26207;
  double t26230;
  double t26242;
  double t14319;
  double t15452;
  double t26669;
  double t26719;
  double t26904;
  double t27326;
  double t27334;
  double t27490;
  double t30351;
  double t30376;
  double t30385;
  double t27675;
  double t27711;
  double t27756;
  double t31069;
  double t31093;
  double t31101;
  double t31135;
  double t31144;
  double t31145;
  double t31166;
  double t31169;
  double t31191;
  t3998 = Cos(var1[4]);
  t4357 = Sin(var1[12]);
  t4398 = Sin(var1[4]);
  t4428 = Cos(var1[12]);
  t4812 = Sin(var1[5]);
  t3999 = Cos(var1[5]);
  t7510 = Sin(var1[13]);
  t3268 = Cos(var1[13]);
  t7801 = t4428*t4398;
  t7833 = t3998*t4357*t4812;
  t8156 = t7801 + t7833;
  t8466 = Sin(var1[14]);
  t8468 = -1.*t3998*t3999*t7510;
  t8913 = t3268*t8156;
  t9139 = t8468 + t8913;
  t9686 = Cos(var1[14]);
  t15481 = t3268*t3998*t3999;
  t17868 = t7510*t8156;
  t17911 = t15481 + t17868;
  t3507 = -1.*t3268;
  t3627 = 1. + t3507;
  t19015 = Sin(var1[3]);
  t4436 = -1.*t4428;
  t4451 = 1. + t4436;
  t20240 = Cos(var1[3]);
  t24907 = t20240*t3999;
  t24957 = -1.*t19015*t4398*t4812;
  t25156 = t24907 + t24957;
  t19100 = t3999*t19015*t4398;
  t22946 = t20240*t4812;
  t24842 = t19100 + t22946;
  t26207 = -1.*t4428*t3998*t19015;
  t26230 = -1.*t4357*t25156;
  t26242 = t26207 + t26230;
  t14319 = -1.*t9686;
  t15452 = 1. + t14319;
  t26669 = -1.*t7510*t24842;
  t26719 = t3268*t26242;
  t26904 = t26669 + t26719;
  t27326 = t3268*t24842;
  t27334 = t7510*t26242;
  t27490 = t27326 + t27334;
  t30351 = t3999*t19015;
  t30376 = t20240*t4398*t4812;
  t30385 = t30351 + t30376;
  t27675 = -1.*t20240*t3999*t4398;
  t27711 = t19015*t4812;
  t27756 = t27675 + t27711;
  t31069 = t4428*t20240*t3998;
  t31093 = -1.*t4357*t30385;
  t31101 = t31069 + t31093;
  t31135 = -1.*t7510*t27756;
  t31144 = t3268*t31101;
  t31145 = t31135 + t31144;
  t31166 = t3268*t27756;
  t31169 = t7510*t31101;
  t31191 = t31166 + t31169;
  p_output1[0]=0.075*t15452*t17911 + 0.325*t3627*t3998*t3999 + 0.1575*t4357*t4398 + 0.1575*t3998*t4451*t4812 - 0.2255*(t4357*t4398 - 1.*t3998*t4428*t4812) - 0.325*t7510*t8156 + 0.075*t8466*t9139 + 0.075*(-1.*t8466*t9139 + t17911*t9686) + var1[0];
  p_output1[1]=0.075*t15452*t27490 + 0.325*t24842*t3627 - 0.1575*t19015*t3998*t4357 - 0.2255*(-1.*t19015*t3998*t4357 + t25156*t4428) - 0.1575*t25156*t4451 - 0.325*t26242*t7510 + 0.075*t26904*t8466 + 0.075*(-1.*t26904*t8466 + t27490*t9686) + var1[1];
  p_output1[2]=0.075*t15452*t31191 + 0.325*t27756*t3627 + 0.1575*t20240*t3998*t4357 - 0.2255*(t20240*t3998*t4357 + t30385*t4428) - 0.1575*t30385*t4451 - 0.325*t31101*t7510 + 0.075*t31145*t8466 + 0.075*(-1.*t31145*t8466 + t31191*t9686) + var1[2];
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

#include "Joint_5_sphere_center.hh"

namespace SymFunction
{

void Joint_5_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
