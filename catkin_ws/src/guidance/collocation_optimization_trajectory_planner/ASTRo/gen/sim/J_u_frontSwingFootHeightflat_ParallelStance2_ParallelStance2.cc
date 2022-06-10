/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:32:07 GMT+02:00
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
  double t1247;
  double t1376;
  double t1381;
  double t1408;
  double t1684;
  double t1686;
  double t1926;
  double t1818;
  double t1836;
  double t2189;
  double t1895;
  double t2191;
  double t2197;
  double t2667;
  double t2720;
  double t2721;
  double t648;
  double t672;
  double t3501;
  double t3538;
  double t3541;
  double t3558;
  double t3563;
  double t4004;
  double t4221;
  double t4261;
  double t4265;
  double t4266;
  double t4278;
  double t4295;
  double t1462;
  double t1802;
  double t2482;
  double t2628;
  double t3505;
  double t3518;
  double t3565;
  double t3584;
  double t4465;
  double t4483;
  double t4833;
  double t5039;
  double t5083;
  double t5111;
  double t5120;
  double t5132;
  double t5457;
  double t5808;
  double t5813;
  double t5816;
  double t5821;
  double t5822;
  double t5824;
  double t5827;
  double t5843;
  double t5860;
  double t6402;
  double t6741;
  double t6784;
  double t6795;
  double t6887;
  double t6904;
  double t6287;
  double t7372;
  double t7374;
  double t7433;
  double t7460;
  double t7475;
  double t7476;
  double t7494;
  double t7496;
  double t7500;
  double t7941;
  double t7952;
  double t7993;
  t1247 = Sin(var1[3]);
  t1376 = Cos(var1[12]);
  t1381 = -1.*t1376;
  t1408 = 1. + t1381;
  t1684 = Sin(var1[12]);
  t1686 = -0.15121*t1684;
  t1926 = Cos(var1[3]);
  t1818 = Cos(var1[5]);
  t1836 = Sin(var1[4]);
  t2189 = Sin(var1[5]);
  t1895 = t1818*t1247*t1836;
  t2191 = t1926*t2189;
  t2197 = t1895 + t2191;
  t2667 = t1926*t1818;
  t2720 = -1.*t1247*t1836*t2189;
  t2721 = t2667 + t2720;
  t648 = Cos(var1[4]);
  t672 = Sin(var1[13]);
  t3501 = Cos(var1[13]);
  t3538 = t1376*t2197;
  t3541 = t1684*t2721;
  t3558 = t3538 + t3541;
  t3563 = Cos(var1[14]);
  t4004 = t648*t672*t1247;
  t4221 = t3501*t3558;
  t4261 = t4004 + t4221;
  t4265 = Sin(var1[14]);
  t4266 = -1.*t3501*t648*t1247;
  t4278 = t672*t3558;
  t4295 = t4266 + t4278;
  t1462 = 0.15121*t1408;
  t1802 = t1462 + t1686;
  t2482 = -0.15121*t1408;
  t2628 = t2482 + t1686;
  t3505 = -1.*t3501;
  t3518 = 1. + t3505;
  t3565 = -1.*t3563;
  t3584 = 1. + t3565;
  t4465 = -1.*t1376*t1926*t648*t1818;
  t4483 = t1926*t648*t1684*t2189;
  t4833 = t4465 + t4483;
  t5039 = t1926*t672*t1836;
  t5083 = t3501*t4833;
  t5111 = t5039 + t5083;
  t5120 = -1.*t3501*t1926*t1836;
  t5132 = t672*t4833;
  t5457 = t5120 + t5132;
  t5808 = t1926*t1818*t1836;
  t5813 = -1.*t1247*t2189;
  t5816 = t5808 + t5813;
  t5821 = t1818*t1247;
  t5822 = t1926*t1836*t2189;
  t5824 = t5821 + t5822;
  t5827 = t1684*t5816;
  t5843 = t1376*t5824;
  t5860 = t5827 + t5843;
  t6402 = -0.15121*t1376;
  t6741 = -1.*t1926*t1818*t1836;
  t6784 = t1247*t2189;
  t6795 = t6741 + t6784;
  t6887 = -1.*t1684*t6795;
  t6904 = t6887 + t5843;
  t6287 = -1.*t1684*t5824;
  t7372 = t1376*t6795;
  t7374 = t1684*t5824;
  t7433 = t7372 + t7374;
  t7460 = -1.*t1926*t648*t672;
  t7475 = t3501*t7433;
  t7476 = t7460 + t7475;
  t7494 = -1.*t3501*t1926*t648;
  t7496 = -1.*t672*t7433;
  t7500 = t7494 + t7496;
  t7941 = t3501*t1926*t648;
  t7952 = t672*t7433;
  t7993 = t7941 + t7952;
  p_output1[0]=1.;
  p_output1[1]=t1802*t2197 + t2628*t2721 - 0.15121*(-1.*t1684*t2197 + t1376*t2721) + 0.28121*t3518*t3558 + 0.50321*t3584*t4261 - 0.50321*t4265*t4295 + 0.19821*(t3563*t4261 + t4265*t4295) - 0.28121*t1247*t648*t672;
  p_output1[2]=0.28121*t3518*t4833 + 0.50321*t3584*t5111 - 0.50321*t4265*t5457 + 0.19821*(t3563*t5111 + t4265*t5457) - 1.*t1802*t1818*t1926*t648 + t1926*t2189*t2628*t648 - 0.15121*(t1684*t1818*t1926*t648 + t1376*t1926*t2189*t648) - 0.28121*t1836*t1926*t672;
  p_output1[3]=t2628*t5816 + t1802*t5824 + 0.28121*t3518*t5860 + 0.50321*t3501*t3584*t5860 - 0.15121*(t1376*t5816 + t6287) - 0.50321*t4265*t5860*t672 + 0.19821*(t3501*t3563*t5860 + t4265*t5860*t672);
  p_output1[4]=t5824*(t1686 + t6402) + (0.15121*t1684 + t6402)*t6795 - 0.15121*(t6287 - 1.*t1376*t6795) + 0.28121*t3518*t6904 + 0.50321*t3501*t3584*t6904 - 0.50321*t4265*t672*t6904 + 0.19821*(t3501*t3563*t6904 + t4265*t672*t6904);
  p_output1[5]=0.28121*t1926*t3501*t648 + 0.28121*t672*t7433 - 0.50321*t4265*t7476 + 0.50321*t3584*t7500 + 0.19821*(t4265*t7476 + t3563*t7500);
  p_output1[6]=0.50321*t4265*t7476 - 0.50321*t3563*t7993 + 0.19821*(-1.*t4265*t7476 + t3563*t7993);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_u_frontSwingFootHeightflat_ParallelStance2_ParallelStance2.hh"

namespace SymFunction
{

void J_u_frontSwingFootHeightflat_ParallelStance2_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
