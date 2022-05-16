/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:43:43 GMT+02:00
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
  double t2724;
  double t3651;
  double t4606;
  double t28032;
  double t42893;
  double t42897;
  double t43030;
  double t43406;
  double t43226;
  double t43703;
  double t43250;
  double t43707;
  double t43711;
  double t43804;
  double t43911;
  double t44007;
  double t2906;
  double t3156;
  double t44407;
  double t44494;
  double t44502;
  double t44510;
  double t44546;
  double t44630;
  double t44633;
  double t44638;
  double t44651;
  double t44652;
  double t44654;
  double t44656;
  t2724 = Cos(var1[3]);
  t3651 = Cos(var1[9]);
  t4606 = -1.*t3651;
  t28032 = 1. + t4606;
  t42893 = Sin(var1[9]);
  t42897 = 0.15121*t42893;
  t43030 = Cos(var1[5]);
  t43406 = Sin(var1[3]);
  t43226 = Sin(var1[4]);
  t43703 = Sin(var1[5]);
  t43250 = -1.*t2724*t43030*t43226;
  t43707 = t43406*t43703;
  t43711 = t43250 + t43707;
  t43804 = t43030*t43406;
  t43911 = t2724*t43226*t43703;
  t44007 = t43804 + t43911;
  t2906 = Cos(var1[4]);
  t3156 = Sin(var1[10]);
  t44407 = Cos(var1[10]);
  t44494 = t3651*t43711;
  t44502 = t42893*t44007;
  t44510 = t44494 + t44502;
  t44546 = Cos(var1[11]);
  t44630 = t2724*t2906*t3156;
  t44633 = t44407*t44510;
  t44638 = t44630 + t44633;
  t44651 = Sin(var1[11]);
  t44652 = t44407*t2724*t2906;
  t44654 = -1.*t3156*t44510;
  t44656 = t44652 + t44654;
  p_output1[0]=0.28121*t2724*t2906*t3156 + (-0.15121*t28032 + t42897)*t43711 + (0.15121*t28032 + t42897)*t44007 + 0.15121*(-1.*t42893*t43711 + t3651*t44007) - 0.28121*(1. - 1.*t44407)*t44510 - 0.50321*(1. - 1.*t44546)*t44638 - 0.50321*t44651*t44656 - 0.23321*(t44546*t44638 - 1.*t44651*t44656) + var1[2];
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

#include "swing_position_RlFoot_ParallelStance.hh"

namespace ParallelStance
{

void swing_position_RlFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
