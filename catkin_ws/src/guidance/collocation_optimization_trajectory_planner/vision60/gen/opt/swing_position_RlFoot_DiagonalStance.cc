/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:47:03 GMT+02:00
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
  double t10146;
  double t10520;
  double t10628;
  double t10532;
  double t10742;
  double t10354;
  double t10486;
  double t10827;
  double t10845;
  double t10847;
  double t10848;
  double t10888;
  double t10546;
  double t10743;
  double t10783;
  double t10498;
  double t10909;
  double t10956;
  double t10970;
  double t11090;
  double t11091;
  double t11092;
  double t11093;
  double t11108;
  double t11139;
  double t11159;
  double t11163;
  t10146 = Cos(var1[3]);
  t10520 = Cos(var1[5]);
  t10628 = Sin(var1[3]);
  t10532 = Sin(var1[4]);
  t10742 = Sin(var1[5]);
  t10354 = Cos(var1[4]);
  t10486 = Sin(var1[9]);
  t10827 = Cos(var1[9]);
  t10845 = t10520*t10628;
  t10847 = t10146*t10532*t10742;
  t10848 = t10845 + t10847;
  t10888 = Sin(var1[10]);
  t10546 = -1.*t10146*t10520*t10532;
  t10743 = t10628*t10742;
  t10783 = t10546 + t10743;
  t10498 = Cos(var1[10]);
  t10909 = t10827*t10146*t10354;
  t10956 = -1.*t10486*t10848;
  t10970 = t10909 + t10956;
  t11090 = Sin(var1[11]);
  t11091 = -1.*t10888*t10783;
  t11092 = t10498*t10970;
  t11093 = t11091 + t11092;
  t11108 = Cos(var1[11]);
  t11139 = t10498*t10783;
  t11159 = t10888*t10970;
  t11163 = t11139 + t11159;
  p_output1[0]=-0.1575*t10146*t10354*t10486 - 0.325*(1. - 1.*t10498)*t10783 + 0.1575*(1. - 1.*t10827)*t10848 + 0.2255*(t10146*t10354*t10486 + t10827*t10848) + 0.325*t10888*t10970 - 0.575*t11090*t11093 - 0.575*(1. - 1.*t11108)*t11163 - 0.0641*(t11093*t11108 + t11090*t11163) - 0.295*(-1.*t11090*t11093 + t11108*t11163) + var1[2];
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
