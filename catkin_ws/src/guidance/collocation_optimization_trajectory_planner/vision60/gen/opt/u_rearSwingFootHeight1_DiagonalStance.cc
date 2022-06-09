/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:07:08 GMT+02:00
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
  double t468;
  double t554;
  double t560;
  double t555;
  double t577;
  double t473;
  double t513;
  double t649;
  double t653;
  double t654;
  double t655;
  double t719;
  double t559;
  double t591;
  double t607;
  double t527;
  double t720;
  double t721;
  double t722;
  double t731;
  double t735;
  double t736;
  double t743;
  double t746;
  double t756;
  double t758;
  double t759;
  t468 = Cos(var1[3]);
  t554 = Cos(var1[5]);
  t560 = Sin(var1[3]);
  t555 = Sin(var1[4]);
  t577 = Sin(var1[5]);
  t473 = Cos(var1[4]);
  t513 = Sin(var1[15]);
  t649 = Cos(var1[15]);
  t653 = t554*t560;
  t654 = t468*t555*t577;
  t655 = t653 + t654;
  t719 = Sin(var1[16]);
  t559 = -1.*t468*t554*t555;
  t591 = t560*t577;
  t607 = t559 + t591;
  t527 = Cos(var1[16]);
  t720 = t649*t468*t473;
  t721 = -1.*t513*t655;
  t722 = t720 + t721;
  t731 = Sin(var1[17]);
  t735 = -1.*t719*t607;
  t736 = t527*t722;
  t743 = t735 + t736;
  t746 = Cos(var1[17]);
  t756 = t527*t607;
  t758 = t719*t722;
  t759 = t756 + t758;
  p_output1[0]=0.1575*t468*t473*t513 - 0.325*(1. - 1.*t527)*t607 - 0.1575*(1. - 1.*t649)*t655 - 0.2255*(t468*t473*t513 + t649*t655) + 0.325*t719*t722 - 0.575*t731*t743 - 0.575*(1. - 1.*t746)*t759 - 0.0641*(t743*t746 + t731*t759) - 0.295*(-1.*t731*t743 + t746*t759) + var1[2];
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

#include "u_rearSwingFootHeight1_DiagonalStance.hh"

namespace DiagonalStance
{

void u_rearSwingFootHeight1_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
