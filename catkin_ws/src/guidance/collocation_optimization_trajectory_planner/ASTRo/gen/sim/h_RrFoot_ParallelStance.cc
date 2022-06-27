/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:20:24 GMT+02:00
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
  double t88;
  double t101;
  double t156;
  double t218;
  double t285;
  double t355;
  double t98;
  double t778;
  double t540;
  double t623;
  double t1103;
  double t3820;
  double t3825;
  double t4634;
  double t4860;
  double t5172;
  double t5245;
  double t6543;
  double t7620;
  double t8551;
  double t8591;
  double t9135;
  double t382;
  double t405;
  double t10918;
  double t628;
  double t638;
  double t11504;
  double t11278;
  double t11532;
  double t11764;
  double t11884;
  double t13407;
  double t13609;
  double t1182;
  double t1730;
  double t4989;
  double t4995;
  double t13997;
  double t14058;
  double t14186;
  double t14200;
  double t14228;
  double t14258;
  double t14304;
  double t14349;
  double t14354;
  double t14626;
  double t14699;
  double t14719;
  double t14818;
  double t14836;
  double t14864;
  double t15296;
  double t15951;
  double t16066;
  double t16096;
  double t16185;
  double t16191;
  double t16194;
  double t16195;
  double t16208;
  t88 = Cos(var1[4]);
  t101 = Cos(var1[15]);
  t156 = -1.*t101;
  t218 = 1. + t156;
  t285 = -0.15121*t218;
  t355 = Sin(var1[15]);
  t98 = Cos(var1[5]);
  t778 = Sin(var1[5]);
  t540 = Sin(var1[16]);
  t623 = Sin(var1[4]);
  t1103 = Cos(var1[16]);
  t3820 = t101*t88*t98;
  t3825 = -1.*t88*t355*t778;
  t4634 = t3820 + t3825;
  t4860 = Cos(var1[17]);
  t5172 = t540*t623;
  t5245 = t1103*t4634;
  t6543 = t5172 + t5245;
  t7620 = Sin(var1[17]);
  t8551 = t1103*t623;
  t8591 = -1.*t540*t4634;
  t9135 = t8551 + t8591;
  t382 = -0.15121*t355;
  t405 = t285 + t382;
  t10918 = Sin(var1[3]);
  t628 = 0.15121*t355;
  t638 = t285 + t628;
  t11504 = Cos(var1[3]);
  t11278 = t98*t10918*t623;
  t11532 = t11504*t778;
  t11764 = t11278 + t11532;
  t11884 = t11504*t98;
  t13407 = -1.*t10918*t623*t778;
  t13609 = t11884 + t13407;
  t1182 = -1.*t1103;
  t1730 = 1. + t1182;
  t4989 = -1.*t4860;
  t4995 = 1. + t4989;
  t13997 = t101*t11764;
  t14058 = t355*t13609;
  t14186 = t13997 + t14058;
  t14200 = -1.*t88*t540*t10918;
  t14228 = t1103*t14186;
  t14258 = t14200 + t14228;
  t14304 = -1.*t1103*t88*t10918;
  t14349 = -1.*t540*t14186;
  t14354 = t14304 + t14349;
  t14626 = -1.*t11504*t98*t623;
  t14699 = t10918*t778;
  t14719 = t14626 + t14699;
  t14818 = t98*t10918;
  t14836 = t11504*t623*t778;
  t14864 = t14818 + t14836;
  t15296 = t101*t14719;
  t15951 = t355*t14864;
  t16066 = t15296 + t15951;
  t16096 = t11504*t88*t540;
  t16185 = t1103*t16066;
  t16191 = t16096 + t16185;
  t16194 = t1103*t11504*t88;
  t16195 = -1.*t540*t16066;
  t16208 = t16194 + t16195;
  p_output1[0]=-0.28121*t1730*t4634 + 0.28121*t540*t623 - 0.50321*t4995*t6543 - 1.*t638*t778*t88 - 0.50321*t7620*t9135 - 0.19821*(t4860*t6543 - 1.*t7620*t9135) + t405*t88*t98 - 0.15121*(-1.*t101*t778*t88 - 1.*t355*t88*t98) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.28121*t14186*t1730 - 0.15121*(t101*t13609 - 1.*t11764*t355) + t11764*t405 - 0.50321*t14258*t4995 + t13609*t638 - 0.50321*t14354*t7620 - 0.19821*(t14258*t4860 - 1.*t14354*t7620) - 0.28121*t10918*t540*t88 + var1[1] - 1.*var2[1];
  p_output1[2]=-0.28121*t16066*t1730 - 0.15121*(t101*t14864 - 1.*t14719*t355) + t14719*t405 - 0.50321*t16191*t4995 + t14864*t638 - 0.50321*t16208*t7620 - 0.19821*(t16191*t4860 - 1.*t16208*t7620) + 0.28121*t11504*t540*t88 + var1[2] - 1.*var2[2];
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
