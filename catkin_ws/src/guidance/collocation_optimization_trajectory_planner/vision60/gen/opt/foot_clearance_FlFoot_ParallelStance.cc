/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:33:50 GMT+02:00
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
  double t3875;
  double t4073;
  double t3737;
  double t3958;
  double t4394;
  double t5087;
  double t5552;
  double t6045;
  double t6110;
  double t6208;
  double t6242;
  double t137;
  double t3961;
  double t4517;
  double t4518;
  double t6659;
  double t6697;
  double t6708;
  double t6778;
  double t6875;
  double t6947;
  double t6966;
  double t6969;
  double t7116;
  double t7137;
  double t7168;
  double t7244;
  t3875 = Cos(var1[5]);
  t4073 = Sin(var1[3]);
  t3737 = Cos(var1[3]);
  t3958 = Sin(var1[4]);
  t4394 = Sin(var1[5]);
  t5087 = Cos(var1[6]);
  t5552 = t3875*t4073;
  t6045 = t3737*t3958*t4394;
  t6110 = t5552 + t6045;
  t6208 = Cos(var1[4]);
  t6242 = Sin(var1[6]);
  t137 = Cos(var1[7]);
  t3961 = -1.*t3737*t3875*t3958;
  t4517 = t4073*t4394;
  t4518 = t3961 + t4517;
  t6659 = t3737*t6208*t5087;
  t6697 = -1.*t6110*t6242;
  t6708 = t6659 + t6697;
  t6778 = Sin(var1[7]);
  t6875 = Cos(var1[8]);
  t6947 = t137*t4518;
  t6966 = t6708*t6778;
  t6969 = t6947 + t6966;
  t7116 = t137*t6708;
  t7137 = -1.*t4518*t6778;
  t7168 = t7116 + t7137;
  t7244 = Sin(var1[8]);
  p_output1[0]=0.325*(1. - 1.*t137)*t4518 + 0.1575*(1. - 1.*t5087)*t6110 - 0.1575*t3737*t6208*t6242 + 0.2255*(t5087*t6110 + t3737*t6208*t6242) - 0.325*t6708*t6778 + 0.075*(1. - 1.*t6875)*t6969 + 0.075*t7168*t7244 - 0.0641*(t6875*t7168 + t6969*t7244) + 0.355*(t6875*t6969 - 1.*t7168*t7244) + var1[2];
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

#include "foot_clearance_FlFoot_ParallelStance.hh"

namespace ParallelStance
{

void foot_clearance_FlFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
