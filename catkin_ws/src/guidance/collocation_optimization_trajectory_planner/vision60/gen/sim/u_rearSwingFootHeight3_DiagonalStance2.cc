/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 14:41:17 GMT+02:00
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
  double t2891;
  double t3031;
  double t3062;
  double t3038;
  double t3063;
  double t2892;
  double t2907;
  double t3071;
  double t3075;
  double t3084;
  double t3086;
  double t3111;
  double t3044;
  double t3064;
  double t3065;
  double t2947;
  double t3113;
  double t3119;
  double t3120;
  double t3126;
  double t3132;
  double t3139;
  double t3143;
  double t3147;
  double t3181;
  double t3182;
  double t3233;
  t2891 = Cos(var1[3]);
  t3031 = Cos(var1[5]);
  t3062 = Sin(var1[3]);
  t3038 = Sin(var1[4]);
  t3063 = Sin(var1[5]);
  t2892 = Cos(var1[4]);
  t2907 = Sin(var1[9]);
  t3071 = Cos(var1[9]);
  t3075 = t3031*t3062;
  t3084 = t2891*t3038*t3063;
  t3086 = t3075 + t3084;
  t3111 = Sin(var1[10]);
  t3044 = -1.*t2891*t3031*t3038;
  t3064 = t3062*t3063;
  t3065 = t3044 + t3064;
  t2947 = Cos(var1[10]);
  t3113 = t3071*t2891*t2892;
  t3119 = -1.*t2907*t3086;
  t3120 = t3113 + t3119;
  t3126 = Sin(var1[11]);
  t3132 = -1.*t3111*t3065;
  t3139 = t2947*t3120;
  t3143 = t3132 + t3139;
  t3147 = Cos(var1[11]);
  t3181 = t2947*t3065;
  t3182 = t3111*t3120;
  t3233 = t3181 + t3182;
  p_output1[0]=-0.1575*t2891*t2892*t2907 - 0.325*(1. - 1.*t2947)*t3065 + 0.1575*(1. - 1.*t3071)*t3086 + 0.2255*(t2891*t2892*t2907 + t3071*t3086) + 0.325*t3111*t3120 - 0.575*t3126*t3143 - 0.575*(1. - 1.*t3147)*t3233 - 0.0641*(t3143*t3147 + t3126*t3233) - 0.295*(-1.*t3126*t3143 + t3147*t3233) + var1[2];
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
