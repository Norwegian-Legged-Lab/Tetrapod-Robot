/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:56:26 GMT+02:00
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
  double t60;
  double t78;
  double t85;
  double t82;
  double t86;
  double t61;
  double t71;
  double t90;
  double t93;
  double t95;
  double t96;
  double t103;
  double t84;
  double t87;
  double t88;
  double t73;
  double t105;
  double t106;
  double t107;
  double t109;
  double t110;
  double t111;
  double t112;
  double t114;
  double t118;
  double t120;
  double t121;
  t60 = Cos(var1[3]);
  t78 = Cos(var1[5]);
  t85 = Sin(var1[3]);
  t82 = Sin(var1[4]);
  t86 = Sin(var1[5]);
  t61 = Cos(var1[4]);
  t71 = Sin(var1[15]);
  t90 = Cos(var1[15]);
  t93 = t78*t85;
  t95 = t60*t82*t86;
  t96 = t93 + t95;
  t103 = Sin(var1[16]);
  t84 = -1.*t60*t78*t82;
  t87 = t85*t86;
  t88 = t84 + t87;
  t73 = Cos(var1[16]);
  t105 = t90*t60*t61;
  t106 = -1.*t71*t96;
  t107 = t105 + t106;
  t109 = Sin(var1[17]);
  t110 = -1.*t103*t88;
  t111 = t73*t107;
  t112 = t110 + t111;
  t114 = Cos(var1[17]);
  t118 = t73*t88;
  t120 = t103*t107;
  t121 = t118 + t120;
  p_output1[0]=0.325*t103*t107 - 0.575*t109*t112 - 0.575*(1. - 1.*t114)*t121 - 0.0641*(t112*t114 + t109*t121) - 0.295*(-1.*t109*t112 + t114*t121) + 0.1575*t60*t61*t71 - 0.325*(1. - 1.*t73)*t88 - 0.1575*(1. - 1.*t90)*t96 - 0.2255*(t60*t61*t71 + t90*t96) + var1[2];
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

#include "u_rearSwingFootHeightflat_DiagonalStance.hh"

namespace SymFunction
{

void u_rearSwingFootHeightflat_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
