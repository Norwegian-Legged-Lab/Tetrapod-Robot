/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:52:11 GMT+02:00
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
  double t3093;
  double t1703;
  double t3384;
  double t1821;
  double t3418;
  double t3869;
  double t3920;
  double t4216;
  double t4698;
  double t4712;
  double t2472;
  double t3733;
  double t3835;
  double t4774;
  double t4797;
  double t4807;
  double t5093;
  double t5127;
  double t5132;
  double t5185;
  double t5203;
  double t5233;
  double t5243;
  double t5502;
  double t5510;
  double t5547;
  double t5550;
  double t5563;
  double t5575;
  double t5579;
  t3093 = Cos(var1[3]);
  t1703 = Cos(var1[5]);
  t3384 = Sin(var1[4]);
  t1821 = Sin(var1[3]);
  t3418 = Sin(var1[5]);
  t3869 = Cos(var1[6]);
  t3920 = -1.*t3869;
  t4216 = 1. + t3920;
  t4698 = 0.15121*t4216;
  t4712 = Sin(var1[6]);
  t2472 = t1703*t1821;
  t3733 = t3093*t3384*t3418;
  t3835 = t2472 + t3733;
  t4774 = -1.*t3093*t1703*t3384;
  t4797 = t1821*t3418;
  t4807 = t4774 + t4797;
  t5093 = Cos(var1[7]);
  t5127 = t3869*t4807;
  t5132 = t3835*t4712;
  t5185 = t5127 + t5132;
  t5203 = Cos(var1[4]);
  t5233 = Sin(var1[7]);
  t5243 = Cos(var1[8]);
  t5502 = t5093*t5185;
  t5510 = -1.*t3093*t5203*t5233;
  t5547 = t5502 + t5510;
  t5550 = t3093*t5203*t5093;
  t5563 = t5185*t5233;
  t5575 = t5550 + t5563;
  t5579 = Sin(var1[8]);
  p_output1[0]=t3835*(t4698 - 0.15121*t4712) + (t4698 + 0.15121*t4712)*t4807 + 0.15121*(t3835*t3869 - 1.*t4712*t4807) + 0.28121*(1. - 1.*t5093)*t5185 + 0.28121*t3093*t5203*t5233 + 0.50321*(1. - 1.*t5243)*t5547 - 0.50321*t5575*t5579 + 0.23321*(t5243*t5547 + t5575*t5579) + var1[2];
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

namespace SymFunction
{

void u_frontSwingFootHeight2_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
