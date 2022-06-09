/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:55:00 GMT+02:00
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
  double t13110;
  double t5028;
  double t13346;
  double t11961;
  double t13426;
  double t13508;
  double t13524;
  double t13557;
  double t14983;
  double t15013;
  double t12509;
  double t13475;
  double t13495;
  double t15052;
  double t15057;
  double t15062;
  double t15405;
  double t15454;
  double t15458;
  double t15463;
  double t15476;
  double t15516;
  double t15664;
  double t15694;
  double t15698;
  double t15700;
  double t15710;
  double t15720;
  double t15728;
  double t15730;
  t13110 = Cos(var1[3]);
  t5028 = Cos(var1[5]);
  t13346 = Sin(var1[4]);
  t11961 = Sin(var1[3]);
  t13426 = Sin(var1[5]);
  t13508 = Cos(var1[6]);
  t13524 = -1.*t13508;
  t13557 = 1. + t13524;
  t14983 = 0.15121*t13557;
  t15013 = Sin(var1[6]);
  t12509 = t5028*t11961;
  t13475 = t13110*t13346*t13426;
  t13495 = t12509 + t13475;
  t15052 = -1.*t13110*t5028*t13346;
  t15057 = t11961*t13426;
  t15062 = t15052 + t15057;
  t15405 = Cos(var1[7]);
  t15454 = t13508*t15062;
  t15458 = t13495*t15013;
  t15463 = t15454 + t15458;
  t15476 = Cos(var1[4]);
  t15516 = Sin(var1[7]);
  t15664 = Cos(var1[8]);
  t15694 = t15405*t15463;
  t15698 = -1.*t13110*t15476*t15516;
  t15700 = t15694 + t15698;
  t15710 = t13110*t15476*t15405;
  t15720 = t15463*t15516;
  t15728 = t15710 + t15720;
  t15730 = Sin(var1[8]);
  p_output1[0]=t13495*(t14983 - 0.15121*t15013) + (t14983 + 0.15121*t15013)*t15062 + 0.15121*(t13495*t13508 - 1.*t15013*t15062) + 0.28121*(1. - 1.*t15405)*t15463 + 0.28121*t13110*t15476*t15516 + 0.50321*(1. - 1.*t15664)*t15700 - 0.50321*t15728*t15730 + 0.19821*(t15664*t15700 + t15728*t15730) + var1[2];
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

#include "foot_clearance_FlFoot_ParallelStance.hh"

namespace ParallelStance
{

void foot_clearance_FlFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
