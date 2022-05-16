/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:32:24 GMT+02:00
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
  double t4354;
  double t4460;
  double t4337;
  double t4419;
  double t4522;
  double t4780;
  double t4931;
  double t4980;
  double t4981;
  double t5051;
  double t5080;
  double t3631;
  double t4420;
  double t4768;
  double t4769;
  double t5202;
  double t5271;
  double t5328;
  double t5335;
  double t5337;
  double t5355;
  double t5362;
  double t5365;
  double t5425;
  double t5426;
  double t5440;
  double t5445;
  t4354 = Cos(var1[5]);
  t4460 = Sin(var1[3]);
  t4337 = Cos(var1[3]);
  t4419 = Sin(var1[4]);
  t4522 = Sin(var1[5]);
  t4780 = Cos(var1[6]);
  t4931 = t4354*t4460;
  t4980 = t4337*t4419*t4522;
  t4981 = t4931 + t4980;
  t5051 = Cos(var1[4]);
  t5080 = Sin(var1[6]);
  t3631 = Cos(var1[7]);
  t4420 = -1.*t4337*t4354*t4419;
  t4768 = t4460*t4522;
  t4769 = t4420 + t4768;
  t5202 = t4337*t5051*t4780;
  t5271 = -1.*t4981*t5080;
  t5328 = t5202 + t5271;
  t5335 = Sin(var1[7]);
  t5337 = Cos(var1[8]);
  t5355 = t3631*t4769;
  t5362 = t5328*t5335;
  t5365 = t5355 + t5362;
  t5425 = t3631*t5328;
  t5426 = -1.*t4769*t5335;
  t5440 = t5425 + t5426;
  t5445 = Sin(var1[8]);
  p_output1[0]=0.325*(1. - 1.*t3631)*t4769 + 0.1575*(1. - 1.*t4780)*t4981 - 0.1575*t4337*t5051*t5080 + 0.2255*(t4780*t4981 + t4337*t5051*t5080) - 0.325*t5328*t5335 + 0.075*(1. - 1.*t5337)*t5365 + 0.075*t5440*t5445 - 0.0641*(t5337*t5440 + t5365*t5445) + 0.355*(t5337*t5365 - 1.*t5440*t5445) + var1[2];
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

#include "swing_position_FlFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void swing_position_FlFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
