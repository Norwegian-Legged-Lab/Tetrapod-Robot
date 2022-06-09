/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:52:49 GMT+02:00
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
  double t65;
  double t70;
  double t74;
  double t80;
  double t105;
  double t119;
  double t69;
  double t205;
  double t154;
  double t165;
  double t2239;
  double t2851;
  double t2857;
  double t3001;
  double t3203;
  double t3527;
  double t3546;
  double t3561;
  double t3576;
  double t3594;
  double t3600;
  double t3602;
  double t94;
  double t130;
  double t3881;
  double t185;
  double t194;
  double t3932;
  double t3923;
  double t3950;
  double t3955;
  double t4103;
  double t4131;
  double t4260;
  double t2273;
  double t2774;
  double t3277;
  double t3511;
  double t4701;
  double t4713;
  double t4715;
  double t4824;
  double t5062;
  double t5149;
  double t5291;
  double t5416;
  double t5439;
  double t5715;
  double t5825;
  double t5836;
  double t5905;
  double t5906;
  double t5907;
  double t5927;
  double t5937;
  double t5940;
  double t5942;
  double t5943;
  double t5945;
  double t5956;
  double t5980;
  double t5989;
  t65 = Cos(var1[4]);
  t70 = Cos(var1[9]);
  t74 = -1.*t70;
  t80 = 1. + t74;
  t105 = Sin(var1[9]);
  t119 = 0.15121*t105;
  t69 = Cos(var1[5]);
  t205 = Sin(var1[5]);
  t154 = Sin(var1[10]);
  t165 = Sin(var1[4]);
  t2239 = Cos(var1[10]);
  t2851 = t70*t65*t69;
  t2857 = -1.*t65*t105*t205;
  t3001 = t2851 + t2857;
  t3203 = Cos(var1[11]);
  t3527 = t154*t165;
  t3546 = t2239*t3001;
  t3561 = t3527 + t3546;
  t3576 = Sin(var1[11]);
  t3594 = t2239*t165;
  t3600 = -1.*t154*t3001;
  t3602 = t3594 + t3600;
  t94 = -0.15121*t80;
  t130 = t94 + t119;
  t3881 = Sin(var1[3]);
  t185 = 0.15121*t80;
  t194 = t185 + t119;
  t3932 = Cos(var1[3]);
  t3923 = t69*t3881*t165;
  t3950 = t3932*t205;
  t3955 = t3923 + t3950;
  t4103 = t3932*t69;
  t4131 = -1.*t3881*t165*t205;
  t4260 = t4103 + t4131;
  t2273 = -1.*t2239;
  t2774 = 1. + t2273;
  t3277 = -1.*t3203;
  t3511 = 1. + t3277;
  t4701 = t70*t3955;
  t4713 = t105*t4260;
  t4715 = t4701 + t4713;
  t4824 = -1.*t65*t154*t3881;
  t5062 = t2239*t4715;
  t5149 = t4824 + t5062;
  t5291 = -1.*t2239*t65*t3881;
  t5416 = -1.*t154*t4715;
  t5439 = t5291 + t5416;
  t5715 = -1.*t3932*t69*t165;
  t5825 = t3881*t205;
  t5836 = t5715 + t5825;
  t5905 = t69*t3881;
  t5906 = t3932*t165*t205;
  t5907 = t5905 + t5906;
  t5927 = t70*t5836;
  t5937 = t105*t5907;
  t5940 = t5927 + t5937;
  t5942 = t3932*t65*t154;
  t5943 = t2239*t5940;
  t5945 = t5942 + t5943;
  t5956 = t2239*t3932*t65;
  t5980 = -1.*t154*t5940;
  t5989 = t5956 + t5980;
  p_output1[0]=0.28121*t154*t165 - 0.28121*t2774*t3001 - 0.50321*t3511*t3561 - 0.50321*t3576*t3602 - 0.19821*(t3203*t3561 - 1.*t3576*t3602) - 1.*t194*t205*t65 + t130*t65*t69 + 0.15121*(-1.*t105*t65*t69 - 1.*t205*t65*t70) + var1[0] - 1.*var2[0];
  p_output1[1]=t130*t3955 + t194*t4260 - 0.28121*t2774*t4715 - 0.50321*t3511*t5149 - 0.50321*t3576*t5439 - 0.19821*(t3203*t5149 - 1.*t3576*t5439) - 0.28121*t154*t3881*t65 + 0.15121*(-1.*t105*t3955 + t4260*t70) + var1[1] - 1.*var2[1];
  p_output1[2]=t130*t5836 + t194*t5907 - 0.28121*t2774*t5940 - 0.50321*t3511*t5945 - 0.50321*t3576*t5989 - 0.19821*(t3203*t5945 - 1.*t3576*t5989) + 0.28121*t154*t3932*t65 + 0.15121*(-1.*t105*t5836 + t5907*t70) + var1[2] - 1.*var2[2];
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

#include "h_RlFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void h_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
