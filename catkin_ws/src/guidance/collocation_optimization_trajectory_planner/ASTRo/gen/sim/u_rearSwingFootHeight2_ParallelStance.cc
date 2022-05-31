/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 13:04:55 GMT+02:00
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
  double t56221;
  double t56272;
  double t56273;
  double t56285;
  double t56289;
  double t56295;
  double t56306;
  double t56310;
  double t56307;
  double t56311;
  double t56308;
  double t56312;
  double t56313;
  double t56320;
  double t56328;
  double t56329;
  double t56225;
  double t56235;
  double t56340;
  double t56343;
  double t56373;
  double t56383;
  double t56385;
  double t56399;
  double t56400;
  double t56404;
  double t56409;
  double t56410;
  double t56411;
  double t56412;
  t56221 = Cos(var1[3]);
  t56272 = Cos(var1[9]);
  t56273 = -1.*t56272;
  t56285 = 1. + t56273;
  t56289 = Sin(var1[9]);
  t56295 = 0.15121*t56289;
  t56306 = Cos(var1[5]);
  t56310 = Sin(var1[3]);
  t56307 = Sin(var1[4]);
  t56311 = Sin(var1[5]);
  t56308 = -1.*t56221*t56306*t56307;
  t56312 = t56310*t56311;
  t56313 = t56308 + t56312;
  t56320 = t56306*t56310;
  t56328 = t56221*t56307*t56311;
  t56329 = t56320 + t56328;
  t56225 = Cos(var1[4]);
  t56235 = Sin(var1[10]);
  t56340 = Cos(var1[10]);
  t56343 = t56272*t56313;
  t56373 = t56289*t56329;
  t56383 = t56343 + t56373;
  t56385 = Cos(var1[11]);
  t56399 = t56221*t56225*t56235;
  t56400 = t56340*t56383;
  t56404 = t56399 + t56400;
  t56409 = Sin(var1[11]);
  t56410 = t56340*t56221*t56225;
  t56411 = -1.*t56235*t56383;
  t56412 = t56410 + t56411;
  p_output1[0]=0.28121*t56221*t56225*t56235 + (-0.15121*t56285 + t56295)*t56313 + (0.15121*t56285 + t56295)*t56329 + 0.15121*(-1.*t56289*t56313 + t56272*t56329) - 0.28121*(1. - 1.*t56340)*t56383 - 0.50321*(1. - 1.*t56385)*t56404 - 0.50321*t56409*t56412 - 0.19821*(t56385*t56404 - 1.*t56409*t56412) + var1[2];
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

#include "u_rearSwingFootHeight2_ParallelStance.hh"

namespace SymFunction
{

void u_rearSwingFootHeight2_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
