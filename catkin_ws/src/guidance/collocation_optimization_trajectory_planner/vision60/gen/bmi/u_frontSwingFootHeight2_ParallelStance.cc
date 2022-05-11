/*
 * Automatically Generated from Mathematica.
 * Thu 28 Apr 2022 15:24:04 GMT+02:00
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
  double t5122;
  double t5127;
  double t5121;
  double t5125;
  double t5134;
  double t5141;
  double t5149;
  double t5150;
  double t5156;
  double t5162;
  double t5163;
  double t5101;
  double t5126;
  double t5138;
  double t5139;
  double t5188;
  double t5189;
  double t5190;
  double t5191;
  double t5205;
  double t5211;
  double t5212;
  double t5213;
  double t5215;
  double t5219;
  double t5227;
  double t5230;
  t5122 = Cos(var1[5]);
  t5127 = Sin(var1[3]);
  t5121 = Cos(var1[3]);
  t5125 = Sin(var1[4]);
  t5134 = Sin(var1[5]);
  t5141 = Cos(var1[6]);
  t5149 = t5122*t5127;
  t5150 = t5121*t5125*t5134;
  t5156 = t5149 + t5150;
  t5162 = Cos(var1[4]);
  t5163 = Sin(var1[6]);
  t5101 = Cos(var1[7]);
  t5126 = -1.*t5121*t5122*t5125;
  t5138 = t5127*t5134;
  t5139 = t5126 + t5138;
  t5188 = t5121*t5162*t5141;
  t5189 = -1.*t5156*t5163;
  t5190 = t5188 + t5189;
  t5191 = Sin(var1[7]);
  t5205 = Cos(var1[8]);
  t5211 = t5101*t5139;
  t5212 = t5190*t5191;
  t5213 = t5211 + t5212;
  t5215 = t5101*t5190;
  t5219 = -1.*t5139*t5191;
  t5227 = t5215 + t5219;
  t5230 = Sin(var1[8]);
  p_output1[0]=0.325*(1. - 1.*t5101)*t5139 + 0.1575*(1. - 1.*t5141)*t5156 - 0.1575*t5121*t5162*t5163 + 0.2255*(t5141*t5156 + t5121*t5162*t5163) - 0.325*t5190*t5191 + 0.075*(1. - 1.*t5205)*t5213 + 0.075*t5227*t5230 - 0.0641*(t5205*t5227 + t5213*t5230) + 0.355*(t5205*t5213 - 1.*t5227*t5230) + var1[2];
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
