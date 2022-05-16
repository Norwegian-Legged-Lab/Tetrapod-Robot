/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:33:57 GMT+02:00
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
  double t10005;
  double t11461;
  double t11635;
  double t11523;
  double t11704;
  double t11102;
  double t11402;
  double t11756;
  double t11765;
  double t11776;
  double t11790;
  double t11958;
  double t11629;
  double t11735;
  double t11736;
  double t11412;
  double t11969;
  double t11988;
  double t11989;
  double t12006;
  double t12046;
  double t12047;
  double t12066;
  double t12091;
  double t12167;
  double t12190;
  double t12202;
  t10005 = Cos(var1[3]);
  t11461 = Cos(var1[5]);
  t11635 = Sin(var1[3]);
  t11523 = Sin(var1[4]);
  t11704 = Sin(var1[5]);
  t11102 = Cos(var1[4]);
  t11402 = Sin(var1[15]);
  t11756 = Cos(var1[15]);
  t11765 = t11461*t11635;
  t11776 = t10005*t11523*t11704;
  t11790 = t11765 + t11776;
  t11958 = Sin(var1[16]);
  t11629 = -1.*t10005*t11461*t11523;
  t11735 = t11635*t11704;
  t11736 = t11629 + t11735;
  t11412 = Cos(var1[16]);
  t11969 = t11756*t10005*t11102;
  t11988 = -1.*t11402*t11790;
  t11989 = t11969 + t11988;
  t12006 = Sin(var1[17]);
  t12046 = -1.*t11958*t11736;
  t12047 = t11412*t11989;
  t12066 = t12046 + t12047;
  t12091 = Cos(var1[17]);
  t12167 = t11412*t11736;
  t12190 = t11958*t11989;
  t12202 = t12167 + t12190;
  p_output1[0]=0.1575*t10005*t11102*t11402 - 0.325*(1. - 1.*t11412)*t11736 - 0.1575*(1. - 1.*t11756)*t11790 - 0.2255*(t10005*t11102*t11402 + t11756*t11790) + 0.325*t11958*t11989 - 0.575*t12006*t12066 - 0.575*(1. - 1.*t12091)*t12202 - 0.0641*(t12066*t12091 + t12006*t12202) - 0.295*(-1.*t12006*t12066 + t12091*t12202) + var1[2];
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

#include "swing_position_RrFoot_ParallelStance.hh"

namespace ParallelStance
{

void swing_position_RrFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
