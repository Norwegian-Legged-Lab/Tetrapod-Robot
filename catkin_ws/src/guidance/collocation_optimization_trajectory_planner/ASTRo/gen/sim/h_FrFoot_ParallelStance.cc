/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:04:01 GMT+02:00
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
  double t25;
  double t274;
  double t285;
  double t4086;
  double t5230;
  double t6158;
  double t35;
  double t9542;
  double t9119;
  double t9268;
  double t9646;
  double t9774;
  double t9775;
  double t9780;
  double t9795;
  double t9808;
  double t9809;
  double t9811;
  double t9851;
  double t9865;
  double t9882;
  double t9922;
  double t4175;
  double t6379;
  double t10284;
  double t9365;
  double t9505;
  double t10298;
  double t10290;
  double t10305;
  double t10313;
  double t10331;
  double t10337;
  double t10345;
  double t9705;
  double t9773;
  double t9800;
  double t9805;
  double t10369;
  double t10373;
  double t10376;
  double t10381;
  double t10384;
  double t10385;
  double t10394;
  double t10398;
  double t10413;
  double t10437;
  double t10440;
  double t10454;
  double t10460;
  double t10472;
  double t10480;
  double t10536;
  double t10564;
  double t10572;
  double t10581;
  double t10582;
  double t10590;
  double t10601;
  double t10608;
  double t10613;
  t25 = Cos(var1[4]);
  t274 = Cos(var1[12]);
  t285 = -1.*t274;
  t4086 = 1. + t285;
  t5230 = Sin(var1[12]);
  t6158 = -0.15121*t5230;
  t35 = Cos(var1[5]);
  t9542 = Sin(var1[5]);
  t9119 = Sin(var1[13]);
  t9268 = Sin(var1[4]);
  t9646 = Cos(var1[13]);
  t9774 = t274*t25*t35;
  t9775 = -1.*t25*t5230*t9542;
  t9780 = t9774 + t9775;
  t9795 = Cos(var1[14]);
  t9808 = -1.*t9119*t9268;
  t9809 = t9646*t9780;
  t9811 = t9808 + t9809;
  t9851 = Sin(var1[14]);
  t9865 = t9646*t9268;
  t9882 = t9119*t9780;
  t9922 = t9865 + t9882;
  t4175 = 0.15121*t4086;
  t6379 = t4175 + t6158;
  t10284 = Sin(var1[3]);
  t9365 = -0.15121*t4086;
  t9505 = t9365 + t6158;
  t10298 = Cos(var1[3]);
  t10290 = t35*t10284*t9268;
  t10305 = t10298*t9542;
  t10313 = t10290 + t10305;
  t10331 = t10298*t35;
  t10337 = -1.*t10284*t9268*t9542;
  t10345 = t10331 + t10337;
  t9705 = -1.*t9646;
  t9773 = 1. + t9705;
  t9800 = -1.*t9795;
  t9805 = 1. + t9800;
  t10369 = t274*t10313;
  t10373 = t5230*t10345;
  t10376 = t10369 + t10373;
  t10381 = t25*t9119*t10284;
  t10384 = t9646*t10376;
  t10385 = t10381 + t10384;
  t10394 = -1.*t9646*t25*t10284;
  t10398 = t9119*t10376;
  t10413 = t10394 + t10398;
  t10437 = -1.*t10298*t35*t9268;
  t10440 = t10284*t9542;
  t10454 = t10437 + t10440;
  t10460 = t35*t10284;
  t10472 = t10298*t9268*t9542;
  t10480 = t10460 + t10472;
  t10536 = t274*t10454;
  t10564 = t5230*t10480;
  t10572 = t10536 + t10564;
  t10581 = -1.*t10298*t25*t9119;
  t10582 = t9646*t10572;
  t10590 = t10581 + t10582;
  t10601 = t9646*t10298*t25;
  t10608 = t9119*t10572;
  t10613 = t10601 + t10608;
  p_output1[0]=t25*t35*t6379 + 0.28121*t9119*t9268 - 1.*t25*t9505*t9542 - 0.15121*(-1.*t25*t35*t5230 - 1.*t25*t274*t9542) + 0.28121*t9773*t9780 + 0.50321*t9805*t9811 - 0.50321*t9851*t9922 + 0.19821*(t9795*t9811 + t9851*t9922) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.15121*(t10345*t274 - 1.*t10313*t5230) + t10313*t6379 - 0.28121*t10284*t25*t9119 + t10345*t9505 + 0.28121*t10376*t9773 + 0.50321*t10385*t9805 - 0.50321*t10413*t9851 + 0.19821*(t10385*t9795 + t10413*t9851) + var1[1] - 1.*var2[1];
  p_output1[2]=-0.15121*(t10480*t274 - 1.*t10454*t5230) + t10454*t6379 + 0.28121*t10298*t25*t9119 + t10480*t9505 + 0.28121*t10572*t9773 + 0.50321*t10590*t9805 - 0.50321*t10613*t9851 + 0.19821*(t10590*t9795 + t10613*t9851) + var1[2] - 1.*var2[2];
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

#include "h_FrFoot_ParallelStance.hh"

namespace SymFunction
{

void h_FrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
