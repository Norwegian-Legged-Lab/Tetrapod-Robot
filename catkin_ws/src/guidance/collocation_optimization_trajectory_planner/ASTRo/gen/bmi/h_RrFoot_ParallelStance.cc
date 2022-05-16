/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:52:01 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t86;
  double t117;
  double t207;
  double t1226;
  double t1227;
  double t1256;
  double t91;
  double t3579;
  double t2940;
  double t2963;
  double t15354;
  double t16187;
  double t16276;
  double t17872;
  double t20498;
  double t21274;
  double t21418;
  double t21794;
  double t22612;
  double t22765;
  double t22767;
  double t22875;
  double t1316;
  double t1623;
  double t24437;
  double t3487;
  double t3561;
  double t24502;
  double t24457;
  double t24640;
  double t24676;
  double t24678;
  double t24685;
  double t24757;
  double t15990;
  double t16158;
  double t20709;
  double t20992;
  double t25037;
  double t25044;
  double t25052;
  double t25063;
  double t25064;
  double t25065;
  double t25119;
  double t25133;
  double t25168;
  double t25239;
  double t25250;
  double t25260;
  double t25265;
  double t25266;
  double t25271;
  double t25380;
  double t25388;
  double t25463;
  double t25485;
  double t25486;
  double t25487;
  double t25489;
  double t25494;
  double t25495;
  t86 = Cos(var1[4]);
  t117 = Cos(var1[15]);
  t207 = -1.*t117;
  t1226 = 1. + t207;
  t1227 = -0.15121*t1226;
  t1256 = Sin(var1[15]);
  t91 = Cos(var1[5]);
  t3579 = Sin(var1[5]);
  t2940 = Sin(var1[16]);
  t2963 = Sin(var1[4]);
  t15354 = Cos(var1[16]);
  t16187 = t117*t86*t91;
  t16276 = -1.*t86*t1256*t3579;
  t17872 = t16187 + t16276;
  t20498 = Cos(var1[17]);
  t21274 = t2940*t2963;
  t21418 = t15354*t17872;
  t21794 = t21274 + t21418;
  t22612 = Sin(var1[17]);
  t22765 = t15354*t2963;
  t22767 = -1.*t2940*t17872;
  t22875 = t22765 + t22767;
  t1316 = -0.15121*t1256;
  t1623 = t1227 + t1316;
  t24437 = Sin(var1[3]);
  t3487 = 0.15121*t1256;
  t3561 = t1227 + t3487;
  t24502 = Cos(var1[3]);
  t24457 = t91*t24437*t2963;
  t24640 = t24502*t3579;
  t24676 = t24457 + t24640;
  t24678 = t24502*t91;
  t24685 = -1.*t24437*t2963*t3579;
  t24757 = t24678 + t24685;
  t15990 = -1.*t15354;
  t16158 = 1. + t15990;
  t20709 = -1.*t20498;
  t20992 = 1. + t20709;
  t25037 = t117*t24676;
  t25044 = t1256*t24757;
  t25052 = t25037 + t25044;
  t25063 = -1.*t86*t2940*t24437;
  t25064 = t15354*t25052;
  t25065 = t25063 + t25064;
  t25119 = -1.*t15354*t86*t24437;
  t25133 = -1.*t2940*t25052;
  t25168 = t25119 + t25133;
  t25239 = -1.*t24502*t91*t2963;
  t25250 = t24437*t3579;
  t25260 = t25239 + t25250;
  t25265 = t91*t24437;
  t25266 = t24502*t2963*t3579;
  t25271 = t25265 + t25266;
  t25380 = t117*t25260;
  t25388 = t1256*t25271;
  t25463 = t25380 + t25388;
  t25485 = t24502*t86*t2940;
  t25486 = t15354*t25463;
  t25487 = t25485 + t25486;
  t25489 = t15354*t24502*t86;
  t25494 = -1.*t2940*t25463;
  t25495 = t25489 + t25494;
  p_output1[0]=-0.28121*t16158*t17872 - 0.50321*t20992*t21794 - 0.50321*t22612*t22875 - 0.23321*(t20498*t21794 - 1.*t22612*t22875) + 0.28121*t2940*t2963 - 1.*t3561*t3579*t86 + t1623*t86*t91 - 0.15121*(-1.*t117*t3579*t86 - 1.*t1256*t86*t91) + var1[0] - 1.*var2[0];
  p_output1[1]=t1623*t24676 - 0.15121*(-1.*t1256*t24676 + t117*t24757) - 0.28121*t16158*t25052 - 0.50321*t20992*t25065 - 0.50321*t22612*t25168 - 0.23321*(t20498*t25065 - 1.*t22612*t25168) + t24757*t3561 - 0.28121*t24437*t2940*t86 + var1[1] - 1.*var2[1];
  p_output1[2]=t1623*t25260 - 0.15121*(-1.*t1256*t25260 + t117*t25271) - 0.28121*t16158*t25463 - 0.50321*t20992*t25487 - 0.50321*t22612*t25495 - 0.23321*(t20498*t25487 - 1.*t22612*t25495) + t25271*t3561 + 0.28121*t24502*t2940*t86 + var1[2] - 1.*var2[2];
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "h_RrFoot_ParallelStance.hh"

namespace SymFunction
{

void h_RrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
