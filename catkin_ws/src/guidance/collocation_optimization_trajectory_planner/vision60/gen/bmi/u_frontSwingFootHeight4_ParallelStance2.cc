/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 18:49:50 GMT+02:00
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
  double t3349;
  double t7889;
  double t7927;
  double t7894;
  double t7933;
  double t3350;
  double t3351;
  double t7960;
  double t8030;
  double t8034;
  double t8035;
  double t8051;
  double t7914;
  double t7941;
  double t7948;
  double t7794;
  double t8052;
  double t8055;
  double t8062;
  double t8066;
  double t8067;
  double t8070;
  double t8071;
  double t8073;
  double t8081;
  double t8082;
  double t8084;
  t3349 = Cos(var1[3]);
  t7889 = Cos(var1[5]);
  t7927 = Sin(var1[3]);
  t7894 = Sin(var1[4]);
  t7933 = Sin(var1[5]);
  t3350 = Cos(var1[4]);
  t3351 = Sin(var1[12]);
  t7960 = Cos(var1[12]);
  t8030 = t7889*t7927;
  t8034 = t3349*t7894*t7933;
  t8035 = t8030 + t8034;
  t8051 = Sin(var1[13]);
  t7914 = -1.*t3349*t7889*t7894;
  t7941 = t7927*t7933;
  t7948 = t7914 + t7941;
  t7794 = Cos(var1[13]);
  t8052 = t7960*t3349*t3350;
  t8055 = -1.*t3351*t8035;
  t8062 = t8052 + t8055;
  t8066 = Sin(var1[14]);
  t8067 = -1.*t8051*t7948;
  t8070 = t7794*t8062;
  t8071 = t8067 + t8070;
  t8073 = Cos(var1[14]);
  t8081 = t7794*t7948;
  t8082 = t8051*t8062;
  t8084 = t8081 + t8082;
  p_output1[0]=0.1575*t3349*t3350*t3351 + 0.325*(1. - 1.*t7794)*t7948 - 0.1575*(1. - 1.*t7960)*t8035 - 0.2255*(t3349*t3350*t3351 + t7960*t8035) - 0.325*t8051*t8062 + 0.075*t8066*t8071 + 0.075*(1. - 1.*t8073)*t8084 - 0.0641*(t8071*t8073 + t8066*t8084) + 0.355*(-1.*t8066*t8071 + t8073*t8084) + var1[2];
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

#include "u_frontSwingFootHeight4_ParallelStance2.hh"

namespace SymFunction
{

void u_frontSwingFootHeight4_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
