/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:46:59 GMT+02:00
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
  double t5413;
  double t5465;
  double t5408;
  double t5417;
  double t5505;
  double t5581;
  double t5661;
  double t5672;
  double t5690;
  double t5704;
  double t5710;
  double t4573;
  double t5420;
  double t5558;
  double t5561;
  double t5758;
  double t5856;
  double t7506;
  double t7532;
  double t7785;
  double t7928;
  double t7961;
  double t7962;
  double t7966;
  double t8038;
  double t8049;
  double t8064;
  t5413 = Cos(var1[5]);
  t5465 = Sin(var1[3]);
  t5408 = Cos(var1[3]);
  t5417 = Sin(var1[4]);
  t5505 = Sin(var1[5]);
  t5581 = Cos(var1[6]);
  t5661 = t5413*t5465;
  t5672 = t5408*t5417*t5505;
  t5690 = t5661 + t5672;
  t5704 = Cos(var1[4]);
  t5710 = Sin(var1[6]);
  t4573 = Cos(var1[7]);
  t5420 = -1.*t5408*t5413*t5417;
  t5558 = t5465*t5505;
  t5561 = t5420 + t5558;
  t5758 = t5408*t5704*t5581;
  t5856 = -1.*t5690*t5710;
  t7506 = t5758 + t5856;
  t7532 = Sin(var1[7]);
  t7785 = Cos(var1[8]);
  t7928 = t4573*t5561;
  t7961 = t7506*t7532;
  t7962 = t7928 + t7961;
  t7966 = t4573*t7506;
  t8038 = -1.*t5561*t7532;
  t8049 = t7966 + t8038;
  t8064 = Sin(var1[8]);
  p_output1[0]=0.325*(1. - 1.*t4573)*t5561 + 0.1575*(1. - 1.*t5581)*t5690 - 0.1575*t5408*t5704*t5710 + 0.2255*(t5581*t5690 + t5408*t5704*t5710) - 0.325*t7506*t7532 + 0.075*(1. - 1.*t7785)*t7962 + 0.075*t8049*t8064 - 0.0641*(t7785*t8049 + t7962*t8064) + 0.355*(t7785*t7962 - 1.*t8049*t8064) + var1[2];
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
