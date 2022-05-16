/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:33:52 GMT+02:00
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
  double t4429;
  double t7554;
  double t7962;
  double t7566;
  double t8118;
  double t4790;
  double t6825;
  double t8460;
  double t8619;
  double t8653;
  double t8667;
  double t8727;
  double t7628;
  double t8397;
  double t8409;
  double t7309;
  double t8787;
  double t8806;
  double t8816;
  double t9104;
  double t9122;
  double t9125;
  double t9135;
  double t9143;
  double t9283;
  double t9362;
  double t9418;
  t4429 = Cos(var1[3]);
  t7554 = Cos(var1[5]);
  t7962 = Sin(var1[3]);
  t7566 = Sin(var1[4]);
  t8118 = Sin(var1[5]);
  t4790 = Cos(var1[4]);
  t6825 = Sin(var1[9]);
  t8460 = Cos(var1[9]);
  t8619 = t7554*t7962;
  t8653 = t4429*t7566*t8118;
  t8667 = t8619 + t8653;
  t8727 = Sin(var1[10]);
  t7628 = -1.*t4429*t7554*t7566;
  t8397 = t7962*t8118;
  t8409 = t7628 + t8397;
  t7309 = Cos(var1[10]);
  t8787 = t8460*t4429*t4790;
  t8806 = -1.*t6825*t8667;
  t8816 = t8787 + t8806;
  t9104 = Sin(var1[11]);
  t9122 = -1.*t8727*t8409;
  t9125 = t7309*t8816;
  t9135 = t9122 + t9125;
  t9143 = Cos(var1[11]);
  t9283 = t7309*t8409;
  t9362 = t8727*t8816;
  t9418 = t9283 + t9362;
  p_output1[0]=-0.1575*t4429*t4790*t6825 - 0.325*(1. - 1.*t7309)*t8409 + 0.1575*(1. - 1.*t8460)*t8667 + 0.2255*(t4429*t4790*t6825 + t8460*t8667) + 0.325*t8727*t8816 - 0.575*t9104*t9135 - 0.575*(1. - 1.*t9143)*t9418 - 0.0641*(t9135*t9143 + t9104*t9418) - 0.295*(-1.*t9104*t9135 + t9143*t9418) + var1[2];
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
