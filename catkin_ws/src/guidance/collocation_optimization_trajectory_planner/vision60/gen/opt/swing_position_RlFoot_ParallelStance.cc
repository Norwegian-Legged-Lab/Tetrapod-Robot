/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:08:15 GMT+02:00
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
  double t18594;
  double t18662;
  double t18678;
  double t18671;
  double t18679;
  double t18621;
  double t18631;
  double t18683;
  double t18686;
  double t18687;
  double t18688;
  double t18698;
  double t18677;
  double t18680;
  double t18681;
  double t18634;
  double t18715;
  double t18739;
  double t18745;
  double t18880;
  double t18887;
  double t18888;
  double t18933;
  double t18937;
  double t19155;
  double t19405;
  double t19412;
  t18594 = Cos(var1[3]);
  t18662 = Cos(var1[5]);
  t18678 = Sin(var1[3]);
  t18671 = Sin(var1[4]);
  t18679 = Sin(var1[5]);
  t18621 = Cos(var1[4]);
  t18631 = Sin(var1[9]);
  t18683 = Cos(var1[9]);
  t18686 = t18662*t18678;
  t18687 = t18594*t18671*t18679;
  t18688 = t18686 + t18687;
  t18698 = Sin(var1[10]);
  t18677 = -1.*t18594*t18662*t18671;
  t18680 = t18678*t18679;
  t18681 = t18677 + t18680;
  t18634 = Cos(var1[10]);
  t18715 = t18683*t18594*t18621;
  t18739 = -1.*t18631*t18688;
  t18745 = t18715 + t18739;
  t18880 = Sin(var1[11]);
  t18887 = -1.*t18698*t18681;
  t18888 = t18634*t18745;
  t18933 = t18887 + t18888;
  t18937 = Cos(var1[11]);
  t19155 = t18634*t18681;
  t19405 = t18698*t18745;
  t19412 = t19155 + t19405;
  p_output1[0]=-0.1575*t18594*t18621*t18631 - 0.325*(1. - 1.*t18634)*t18681 + 0.1575*(1. - 1.*t18683)*t18688 + 0.2255*(t18594*t18621*t18631 + t18683*t18688) + 0.325*t18698*t18745 - 0.575*t18880*t18933 - 0.575*(1. - 1.*t18937)*t19412 - 0.0641*(t18933*t18937 + t18880*t19412) - 0.295*(-1.*t18880*t18933 + t18937*t19412) + var1[2];
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
