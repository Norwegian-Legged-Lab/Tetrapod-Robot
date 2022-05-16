/*
 * Automatically Generated from Mathematica.
 * Fri 13 May 2022 14:43:05 GMT+02:00
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
  double t187;
  double t235;
  double t556;
  double t755;
  double t864;
  double t929;
  double t231;
  double t1465;
  double t983;
  double t1005;
  double t1910;
  double t2547;
  double t2600;
  double t2623;
  double t835;
  double t939;
  double t3023;
  double t1311;
  double t1336;
  double t3077;
  double t3065;
  double t3216;
  double t3239;
  double t3313;
  double t3330;
  double t3340;
  double t2280;
  double t2527;
  double t3557;
  double t3581;
  double t3600;
  double t3688;
  double t3694;
  double t3701;
  double t3706;
  double t3734;
  double t3735;
  double t3824;
  double t3851;
  double t3897;
  t187 = Cos(var1[4]);
  t235 = Cos(var1[9]);
  t556 = -1.*t235;
  t755 = 1. + t556;
  t864 = Sin(var1[9]);
  t929 = 0.15121*t864;
  t231 = Cos(var1[5]);
  t1465 = Sin(var1[5]);
  t983 = Sin(var1[10]);
  t1005 = Sin(var1[4]);
  t1910 = Cos(var1[10]);
  t2547 = t235*t187*t231;
  t2600 = -1.*t187*t864*t1465;
  t2623 = t2547 + t2600;
  t835 = -0.15121*t755;
  t939 = t835 + t929;
  t3023 = Sin(var1[3]);
  t1311 = 0.15121*t755;
  t1336 = t1311 + t929;
  t3077 = Cos(var1[3]);
  t3065 = t231*t3023*t1005;
  t3216 = t3077*t1465;
  t3239 = t3065 + t3216;
  t3313 = t3077*t231;
  t3330 = -1.*t3023*t1005*t1465;
  t3340 = t3313 + t3330;
  t2280 = -1.*t1910;
  t2527 = 1. + t2280;
  t3557 = t235*t3239;
  t3581 = t864*t3340;
  t3600 = t3557 + t3581;
  t3688 = -1.*t3077*t231*t1005;
  t3694 = t3023*t1465;
  t3701 = t3688 + t3694;
  t3706 = t231*t3023;
  t3734 = t3077*t1005*t1465;
  t3735 = t3706 + t3734;
  t3824 = t235*t3701;
  t3851 = t864*t3735;
  t3897 = t3824 + t3851;
  p_output1[0]=-1.*t1336*t1465*t187 - 0.28121*t2527*t2623 + 0.18121*(-1.*t1465*t187*t235 - 1.*t187*t231*t864) + t187*t231*t939 + 0.28121*t1005*t983 - 0.28121*(t1910*t2623 + t1005*t983) + var1[0];
  p_output1[1]=t1336*t3340 - 0.28121*t2527*t3600 + 0.18121*(t235*t3340 - 1.*t3239*t864) + t3239*t939 - 0.28121*t187*t3023*t983 - 0.28121*(t1910*t3600 - 1.*t187*t3023*t983) + var1[1];
  p_output1[2]=t1336*t3735 - 0.28121*t2527*t3897 + 0.18121*(t235*t3735 - 1.*t3701*t864) + t3701*t939 + 0.28121*t187*t3077*t983 - 0.28121*(t1910*t3897 + t187*t3077*t983) + var1[2];
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

#include "Joint_2_sphere_center.hh"

namespace SymFunction
{

void Joint_2_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
