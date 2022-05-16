/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:33:54 GMT+02:00
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
  double t7600;
  double t9764;
  double t9972;
  double t9805;
  double t9975;
  double t8436;
  double t9205;
  double t10080;
  double t10910;
  double t10911;
  double t10920;
  double t10991;
  double t9935;
  double t9980;
  double t9988;
  double t9745;
  double t11036;
  double t11053;
  double t11066;
  double t11071;
  double t11073;
  double t11081;
  double t11091;
  double t11100;
  double t11112;
  double t11167;
  double t11168;
  t7600 = Cos(var1[3]);
  t9764 = Cos(var1[5]);
  t9972 = Sin(var1[3]);
  t9805 = Sin(var1[4]);
  t9975 = Sin(var1[5]);
  t8436 = Cos(var1[4]);
  t9205 = Sin(var1[12]);
  t10080 = Cos(var1[12]);
  t10910 = t9764*t9972;
  t10911 = t7600*t9805*t9975;
  t10920 = t10910 + t10911;
  t10991 = Sin(var1[13]);
  t9935 = -1.*t7600*t9764*t9805;
  t9980 = t9972*t9975;
  t9988 = t9935 + t9980;
  t9745 = Cos(var1[13]);
  t11036 = t10080*t7600*t8436;
  t11053 = -1.*t9205*t10920;
  t11066 = t11036 + t11053;
  t11071 = Sin(var1[14]);
  t11073 = -1.*t10991*t9988;
  t11081 = t9745*t11066;
  t11091 = t11073 + t11081;
  t11100 = Cos(var1[14]);
  t11112 = t9745*t9988;
  t11167 = t10991*t11066;
  t11168 = t11112 + t11167;
  p_output1[0]=-0.1575*(1. - 1.*t10080)*t10920 - 0.325*t10991*t11066 + 0.075*t11071*t11091 + 0.075*(1. - 1.*t11100)*t11168 - 0.0641*(t11091*t11100 + t11071*t11168) + 0.355*(-1.*t11071*t11091 + t11100*t11168) + 0.1575*t7600*t8436*t9205 - 0.2255*(t10080*t10920 + t7600*t8436*t9205) + 0.325*(1. - 1.*t9745)*t9988 + var1[2];
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

#include "swing_position_FrFoot_ParallelStance.hh"

namespace ParallelStance
{

void swing_position_FrFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
