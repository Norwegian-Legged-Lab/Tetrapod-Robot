/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:08:25 GMT+02:00
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
  double t25710;
  double t25713;
  double t25708;
  double t25711;
  double t25714;
  double t26643;
  double t27455;
  double t27474;
  double t27475;
  double t27486;
  double t27987;
  double t23928;
  double t25712;
  double t25717;
  double t25916;
  double t28002;
  double t28874;
  double t28889;
  double t28926;
  double t28933;
  double t29706;
  double t29714;
  double t29723;
  double t29763;
  double t29812;
  double t29821;
  double t29957;
  t25710 = Cos(var1[5]);
  t25713 = Sin(var1[3]);
  t25708 = Cos(var1[3]);
  t25711 = Sin(var1[4]);
  t25714 = Sin(var1[5]);
  t26643 = Cos(var1[6]);
  t27455 = t25710*t25713;
  t27474 = t25708*t25711*t25714;
  t27475 = t27455 + t27474;
  t27486 = Cos(var1[4]);
  t27987 = Sin(var1[6]);
  t23928 = Cos(var1[7]);
  t25712 = -1.*t25708*t25710*t25711;
  t25717 = t25713*t25714;
  t25916 = t25712 + t25717;
  t28002 = t25708*t27486*t26643;
  t28874 = -1.*t27475*t27987;
  t28889 = t28002 + t28874;
  t28926 = Sin(var1[7]);
  t28933 = Cos(var1[8]);
  t29706 = t23928*t25916;
  t29714 = t28889*t28926;
  t29723 = t29706 + t29714;
  t29763 = t23928*t28889;
  t29812 = -1.*t25916*t28926;
  t29821 = t29763 + t29812;
  t29957 = Sin(var1[8]);
  p_output1[0]=0.325*(1. - 1.*t23928)*t25916 + 0.1575*(1. - 1.*t26643)*t27475 - 0.1575*t25708*t27486*t27987 + 0.2255*(t26643*t27475 + t25708*t27486*t27987) - 0.325*t28889*t28926 + 0.075*(1. - 1.*t28933)*t29723 + 0.075*t29821*t29957 - 0.0641*(t28933*t29821 + t29723*t29957) + 0.355*(t28933*t29723 - 1.*t29821*t29957) + var1[2];
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

namespace ParallelStance
{

void u_frontSwingFootHeight2_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
