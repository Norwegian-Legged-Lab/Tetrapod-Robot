/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:32:28 GMT+02:00
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
  double t5529;
  double t6607;
  double t6709;
  double t6672;
  double t6712;
  double t6355;
  double t6547;
  double t6738;
  double t6774;
  double t6778;
  double t6780;
  double t6804;
  double t6707;
  double t6714;
  double t6716;
  double t6574;
  double t6809;
  double t6817;
  double t6818;
  double t6820;
  double t6825;
  double t6826;
  double t6828;
  double t6834;
  double t6848;
  double t6850;
  double t6860;
  t5529 = Cos(var1[3]);
  t6607 = Cos(var1[5]);
  t6709 = Sin(var1[3]);
  t6672 = Sin(var1[4]);
  t6712 = Sin(var1[5]);
  t6355 = Cos(var1[4]);
  t6547 = Sin(var1[9]);
  t6738 = Cos(var1[9]);
  t6774 = t6607*t6709;
  t6778 = t5529*t6672*t6712;
  t6780 = t6774 + t6778;
  t6804 = Sin(var1[10]);
  t6707 = -1.*t5529*t6607*t6672;
  t6714 = t6709*t6712;
  t6716 = t6707 + t6714;
  t6574 = Cos(var1[10]);
  t6809 = t6738*t5529*t6355;
  t6817 = -1.*t6547*t6780;
  t6818 = t6809 + t6817;
  t6820 = Sin(var1[11]);
  t6825 = -1.*t6804*t6716;
  t6826 = t6574*t6818;
  t6828 = t6825 + t6826;
  t6834 = Cos(var1[11]);
  t6848 = t6574*t6716;
  t6850 = t6804*t6818;
  t6860 = t6848 + t6850;
  p_output1[0]=-0.1575*t5529*t6355*t6547 - 0.325*(1. - 1.*t6574)*t6716 + 0.1575*(1. - 1.*t6738)*t6780 + 0.2255*(t5529*t6355*t6547 + t6738*t6780) + 0.325*t6804*t6818 - 0.575*t6820*t6828 - 0.575*(1. - 1.*t6834)*t6860 - 0.0641*(t6828*t6834 + t6820*t6860) - 0.295*(-1.*t6820*t6828 + t6834*t6860) + var1[2];
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

#include "swing_position_RlFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void swing_position_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
