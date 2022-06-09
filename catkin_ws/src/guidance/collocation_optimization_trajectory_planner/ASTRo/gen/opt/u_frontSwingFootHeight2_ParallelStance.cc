/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:55:14 GMT+02:00
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
  double t17326;
  double t16995;
  double t17375;
  double t17006;
  double t17531;
  double t20089;
  double t20403;
  double t20614;
  double t20625;
  double t20636;
  double t17174;
  double t18949;
  double t19815;
  double t20718;
  double t20899;
  double t21585;
  double t22557;
  double t22659;
  double t22660;
  double t22664;
  double t22870;
  double t22871;
  double t23034;
  double t23228;
  double t23230;
  double t23233;
  double t23236;
  double t23238;
  double t23239;
  double t23240;
  t17326 = Cos(var1[3]);
  t16995 = Cos(var1[5]);
  t17375 = Sin(var1[4]);
  t17006 = Sin(var1[3]);
  t17531 = Sin(var1[5]);
  t20089 = Cos(var1[6]);
  t20403 = -1.*t20089;
  t20614 = 1. + t20403;
  t20625 = 0.15121*t20614;
  t20636 = Sin(var1[6]);
  t17174 = t16995*t17006;
  t18949 = t17326*t17375*t17531;
  t19815 = t17174 + t18949;
  t20718 = -1.*t17326*t16995*t17375;
  t20899 = t17006*t17531;
  t21585 = t20718 + t20899;
  t22557 = Cos(var1[7]);
  t22659 = t20089*t21585;
  t22660 = t19815*t20636;
  t22664 = t22659 + t22660;
  t22870 = Cos(var1[4]);
  t22871 = Sin(var1[7]);
  t23034 = Cos(var1[8]);
  t23228 = t22557*t22664;
  t23230 = -1.*t17326*t22870*t22871;
  t23233 = t23228 + t23230;
  t23236 = t17326*t22870*t22557;
  t23238 = t22664*t22871;
  t23239 = t23236 + t23238;
  t23240 = Sin(var1[8]);
  p_output1[0]=t19815*(t20625 - 0.15121*t20636) + (t20625 + 0.15121*t20636)*t21585 + 0.15121*(t19815*t20089 - 1.*t20636*t21585) + 0.28121*(1. - 1.*t22557)*t22664 + 0.28121*t17326*t22870*t22871 + 0.50321*(1. - 1.*t23034)*t23233 - 0.50321*t23239*t23240 + 0.19821*(t23034*t23233 + t23239*t23240) + var1[2];
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

#include "u_frontSwingFootHeight2_ParallelStance.hh"

namespace ParallelStance
{

void u_frontSwingFootHeight2_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
