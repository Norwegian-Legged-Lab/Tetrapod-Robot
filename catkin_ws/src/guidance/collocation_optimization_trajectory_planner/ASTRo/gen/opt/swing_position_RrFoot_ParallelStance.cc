/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:43:48 GMT+02:00
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
  double t4327;
  double t28087;
  double t44704;
  double t44758;
  double t44813;
  double t44874;
  double t44901;
  double t44929;
  double t44904;
  double t44966;
  double t44907;
  double t44982;
  double t44984;
  double t44994;
  double t44995;
  double t44999;
  double t28073;
  double t28078;
  double t45015;
  double t45033;
  double t45034;
  double t45035;
  double t45044;
  double t45069;
  double t45072;
  double t45075;
  double t45084;
  double t45085;
  double t45103;
  double t45104;
  t4327 = Cos(var1[3]);
  t28087 = Cos(var1[15]);
  t44704 = -1.*t28087;
  t44758 = 1. + t44704;
  t44813 = -0.15121*t44758;
  t44874 = Sin(var1[15]);
  t44901 = Cos(var1[5]);
  t44929 = Sin(var1[3]);
  t44904 = Sin(var1[4]);
  t44966 = Sin(var1[5]);
  t44907 = -1.*t4327*t44901*t44904;
  t44982 = t44929*t44966;
  t44984 = t44907 + t44982;
  t44994 = t44901*t44929;
  t44995 = t4327*t44904*t44966;
  t44999 = t44994 + t44995;
  t28073 = Cos(var1[4]);
  t28078 = Sin(var1[16]);
  t45015 = Cos(var1[16]);
  t45033 = t28087*t44984;
  t45034 = t44874*t44999;
  t45035 = t45033 + t45034;
  t45044 = Cos(var1[17]);
  t45069 = t4327*t28073*t28078;
  t45072 = t45015*t45035;
  t45075 = t45069 + t45072;
  t45084 = Sin(var1[17]);
  t45085 = t45015*t4327*t28073;
  t45103 = -1.*t28078*t45035;
  t45104 = t45085 + t45103;
  p_output1[0]=0.28121*t28073*t28078*t4327 + (t44813 - 0.15121*t44874)*t44984 + (t44813 + 0.15121*t44874)*t44999 - 0.15121*(-1.*t44874*t44984 + t28087*t44999) - 0.28121*(1. - 1.*t45015)*t45035 - 0.50321*(1. - 1.*t45044)*t45075 - 0.50321*t45084*t45104 - 0.23321*(t45044*t45075 - 1.*t45084*t45104) + var1[2];
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
