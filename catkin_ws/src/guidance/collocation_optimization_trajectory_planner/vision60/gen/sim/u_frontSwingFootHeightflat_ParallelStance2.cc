/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:06:17 GMT+02:00
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
  double t143;
  double t497;
  double t597;
  double t502;
  double t606;
  double t308;
  double t310;
  double t646;
  double t701;
  double t707;
  double t729;
  double t759;
  double t503;
  double t611;
  double t616;
  double t401;
  double t765;
  double t766;
  double t770;
  double t816;
  double t826;
  double t833;
  double t836;
  double t851;
  double t860;
  double t880;
  double t889;
  t143 = Cos(var1[3]);
  t497 = Cos(var1[5]);
  t597 = Sin(var1[3]);
  t502 = Sin(var1[4]);
  t606 = Sin(var1[5]);
  t308 = Cos(var1[4]);
  t310 = Sin(var1[12]);
  t646 = Cos(var1[12]);
  t701 = t497*t597;
  t707 = t143*t502*t606;
  t729 = t701 + t707;
  t759 = Sin(var1[13]);
  t503 = -1.*t143*t497*t502;
  t611 = t597*t606;
  t616 = t503 + t611;
  t401 = Cos(var1[13]);
  t765 = t646*t143*t308;
  t766 = -1.*t310*t729;
  t770 = t765 + t766;
  t816 = Sin(var1[14]);
  t826 = -1.*t759*t616;
  t833 = t401*t770;
  t836 = t826 + t833;
  t851 = Cos(var1[14]);
  t860 = t401*t616;
  t880 = t759*t770;
  t889 = t860 + t880;
  p_output1[0]=0.1575*t143*t308*t310 + 0.325*(1. - 1.*t401)*t616 - 0.1575*(1. - 1.*t646)*t729 - 0.2255*(t143*t308*t310 + t646*t729) - 0.325*t759*t770 + 0.075*t816*t836 + 0.075*(1. - 1.*t851)*t889 - 0.0641*(t836*t851 + t816*t889) + 0.355*(-1.*t816*t836 + t851*t889) + var1[2];
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

#include "u_frontSwingFootHeightflat_ParallelStance2.hh"

namespace SymFunction
{

void u_frontSwingFootHeightflat_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
