/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 18:49:34 GMT+02:00
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
  double t3341;
  double t6436;
  double t6475;
  double t6437;
  double t6476;
  double t3362;
  double t3363;
  double t6500;
  double t6565;
  double t6572;
  double t6576;
  double t6592;
  double t6438;
  double t6482;
  double t6483;
  double t6424;
  double t6595;
  double t6596;
  double t6599;
  double t6607;
  double t6610;
  double t6611;
  double t6612;
  double t6614;
  double t6622;
  double t6624;
  double t6626;
  t3341 = Cos(var1[3]);
  t6436 = Cos(var1[5]);
  t6475 = Sin(var1[3]);
  t6437 = Sin(var1[4]);
  t6476 = Sin(var1[5]);
  t3362 = Cos(var1[4]);
  t3363 = Sin(var1[9]);
  t6500 = Cos(var1[9]);
  t6565 = t6436*t6475;
  t6572 = t3341*t6437*t6476;
  t6576 = t6565 + t6572;
  t6592 = Sin(var1[10]);
  t6438 = -1.*t3341*t6436*t6437;
  t6482 = t6475*t6476;
  t6483 = t6438 + t6482;
  t6424 = Cos(var1[10]);
  t6595 = t6500*t3341*t3362;
  t6596 = -1.*t3363*t6576;
  t6599 = t6595 + t6596;
  t6607 = Sin(var1[11]);
  t6610 = -1.*t6592*t6483;
  t6611 = t6424*t6599;
  t6612 = t6610 + t6611;
  t6614 = Cos(var1[11]);
  t6622 = t6424*t6483;
  t6624 = t6592*t6599;
  t6626 = t6622 + t6624;
  p_output1[0]=-0.1575*t3341*t3362*t3363 - 0.325*(1. - 1.*t6424)*t6483 + 0.1575*(1. - 1.*t6500)*t6576 + 0.2255*(t3341*t3362*t3363 + t6500*t6576) + 0.325*t6592*t6599 - 0.575*t6607*t6612 - 0.575*(1. - 1.*t6614)*t6626 - 0.0641*(t6612*t6614 + t6607*t6626) - 0.295*(-1.*t6607*t6612 + t6614*t6626) + var1[2];
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

#include "u_rearSwingFootHeight3_DiagonalStance2.hh"

namespace SymFunction
{

void u_rearSwingFootHeight3_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
