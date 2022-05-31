/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 16:59:48 GMT+02:00
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
  double t2273;
  double t569;
  double t2388;
  double t856;
  double t2403;
  double t2445;
  double t2505;
  double t2614;
  double t2825;
  double t2832;
  double t882;
  double t2440;
  double t2442;
  double t2926;
  double t2930;
  double t2931;
  double t3068;
  double t3082;
  double t3083;
  double t3088;
  double t3249;
  double t3301;
  double t3310;
  double t3430;
  double t3471;
  double t3476;
  double t3482;
  double t3496;
  double t3497;
  double t3505;
  t2273 = Cos(var1[3]);
  t569 = Cos(var1[5]);
  t2388 = Sin(var1[4]);
  t856 = Sin(var1[3]);
  t2403 = Sin(var1[5]);
  t2445 = Cos(var1[6]);
  t2505 = -1.*t2445;
  t2614 = 1. + t2505;
  t2825 = 0.15121*t2614;
  t2832 = Sin(var1[6]);
  t882 = t569*t856;
  t2440 = t2273*t2388*t2403;
  t2442 = t882 + t2440;
  t2926 = -1.*t2273*t569*t2388;
  t2930 = t856*t2403;
  t2931 = t2926 + t2930;
  t3068 = Cos(var1[7]);
  t3082 = t2445*t2931;
  t3083 = t2442*t2832;
  t3088 = t3082 + t3083;
  t3249 = Cos(var1[4]);
  t3301 = Sin(var1[7]);
  t3310 = Cos(var1[8]);
  t3430 = t3068*t3088;
  t3471 = -1.*t2273*t3249*t3301;
  t3476 = t3430 + t3471;
  t3482 = t2273*t3249*t3068;
  t3496 = t3088*t3301;
  t3497 = t3482 + t3496;
  t3505 = Sin(var1[8]);
  p_output1[0]=t2442*(t2825 - 0.15121*t2832) + (t2825 + 0.15121*t2832)*t2931 + 0.15121*(t2442*t2445 - 1.*t2832*t2931) + 0.28121*(1. - 1.*t3068)*t3088 + 0.28121*t2273*t3249*t3301 + 0.50321*(1. - 1.*t3310)*t3476 - 0.50321*t3497*t3505 + 0.19821*(t3310*t3476 + t3497*t3505) + var1[2];
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

#include "swing_position_FlFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void swing_position_FlFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
