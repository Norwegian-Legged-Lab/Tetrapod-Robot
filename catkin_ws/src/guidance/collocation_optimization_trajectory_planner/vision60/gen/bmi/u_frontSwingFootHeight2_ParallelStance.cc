/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:11:07 GMT+02:00
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
  double t4410;
  double t4447;
  double t4409;
  double t4430;
  double t4459;
  double t4488;
  double t4626;
  double t4659;
  double t4674;
  double t4786;
  double t4789;
  double t4242;
  double t4432;
  double t4460;
  double t4461;
  double t5607;
  double t5664;
  double t5670;
  double t5777;
  double t5930;
  double t6170;
  double t6174;
  double t6175;
  double t6178;
  double t6179;
  double t6183;
  double t6185;
  t4410 = Cos(var1[5]);
  t4447 = Sin(var1[3]);
  t4409 = Cos(var1[3]);
  t4430 = Sin(var1[4]);
  t4459 = Sin(var1[5]);
  t4488 = Cos(var1[6]);
  t4626 = t4410*t4447;
  t4659 = t4409*t4430*t4459;
  t4674 = t4626 + t4659;
  t4786 = Cos(var1[4]);
  t4789 = Sin(var1[6]);
  t4242 = Cos(var1[7]);
  t4432 = -1.*t4409*t4410*t4430;
  t4460 = t4447*t4459;
  t4461 = t4432 + t4460;
  t5607 = t4409*t4786*t4488;
  t5664 = -1.*t4674*t4789;
  t5670 = t5607 + t5664;
  t5777 = Sin(var1[7]);
  t5930 = Cos(var1[8]);
  t6170 = t4242*t4461;
  t6174 = t5670*t5777;
  t6175 = t6170 + t6174;
  t6178 = t4242*t5670;
  t6179 = -1.*t4461*t5777;
  t6183 = t6178 + t6179;
  t6185 = Sin(var1[8]);
  p_output1[0]=0.325*(1. - 1.*t4242)*t4461 + 0.1575*(1. - 1.*t4488)*t4674 - 0.1575*t4409*t4786*t4789 + 0.2255*(t4488*t4674 + t4409*t4786*t4789) - 0.325*t5670*t5777 + 0.075*(1. - 1.*t5930)*t6175 + 0.075*t6183*t6185 - 0.0641*(t5930*t6183 + t6175*t6185) + 0.355*(t5930*t6175 - 1.*t6183*t6185) + var1[2];
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

namespace SymFunction
{

void u_frontSwingFootHeight2_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
