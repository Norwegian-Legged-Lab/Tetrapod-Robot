/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 19:00:13 GMT+02:00
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
  double t3994;
  double t4065;
  double t4080;
  double t4095;
  double t4097;
  double t4099;
  double t4103;
  double t4124;
  double t4113;
  double t4133;
  double t4114;
  double t4134;
  double t4138;
  double t4157;
  double t4158;
  double t4159;
  double t4005;
  double t4061;
  double t4175;
  double t4181;
  double t4182;
  double t4185;
  double t4189;
  double t4215;
  double t5789;
  double t5797;
  double t5891;
  double t5900;
  double t5902;
  double t5930;
  t3994 = Cos(var1[3]);
  t4065 = Cos(var1[12]);
  t4080 = -1.*t4065;
  t4095 = 1. + t4080;
  t4097 = Sin(var1[12]);
  t4099 = -0.15121*t4097;
  t4103 = Cos(var1[5]);
  t4124 = Sin(var1[3]);
  t4113 = Sin(var1[4]);
  t4133 = Sin(var1[5]);
  t4114 = -1.*t3994*t4103*t4113;
  t4134 = t4124*t4133;
  t4138 = t4114 + t4134;
  t4157 = t4103*t4124;
  t4158 = t3994*t4113*t4133;
  t4159 = t4157 + t4158;
  t4005 = Cos(var1[4]);
  t4061 = Sin(var1[13]);
  t4175 = Cos(var1[13]);
  t4181 = t4065*t4138;
  t4182 = t4097*t4159;
  t4185 = t4181 + t4182;
  t4189 = Cos(var1[14]);
  t4215 = -1.*t3994*t4005*t4061;
  t5789 = t4175*t4185;
  t5797 = t4215 + t5789;
  t5891 = Sin(var1[14]);
  t5900 = t4175*t3994*t4005;
  t5902 = t4061*t4185;
  t5930 = t5900 + t5902;
  p_output1[0]=0.28121*t3994*t4005*t4061 + (0.15121*t4095 + t4099)*t4138 + (-0.15121*t4095 + t4099)*t4159 - 0.15121*(-1.*t4097*t4138 + t4065*t4159) + 0.28121*(1. - 1.*t4175)*t4185 + 0.50321*(1. - 1.*t4189)*t5797 - 0.50321*t5891*t5930 + 0.19821*(t4189*t5797 + t5891*t5930) + var1[2];
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
