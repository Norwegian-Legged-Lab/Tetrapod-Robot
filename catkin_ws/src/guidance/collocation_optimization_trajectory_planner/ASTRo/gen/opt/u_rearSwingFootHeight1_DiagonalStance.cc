/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 17:00:02 GMT+02:00
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
  double t904;
  double t2539;
  double t2621;
  double t2864;
  double t2915;
  double t3065;
  double t3855;
  double t5415;
  double t4493;
  double t5590;
  double t4651;
  double t5645;
  double t7211;
  double t8119;
  double t8770;
  double t9649;
  double t966;
  double t2126;
  double t10135;
  double t10187;
  double t10194;
  double t10446;
  double t10744;
  double t10794;
  double t10817;
  double t10843;
  double t10863;
  double t10872;
  double t10885;
  double t10886;
  t904 = Cos(var1[3]);
  t2539 = Cos(var1[15]);
  t2621 = -1.*t2539;
  t2864 = 1. + t2621;
  t2915 = -0.15121*t2864;
  t3065 = Sin(var1[15]);
  t3855 = Cos(var1[5]);
  t5415 = Sin(var1[3]);
  t4493 = Sin(var1[4]);
  t5590 = Sin(var1[5]);
  t4651 = -1.*t904*t3855*t4493;
  t5645 = t5415*t5590;
  t7211 = t4651 + t5645;
  t8119 = t3855*t5415;
  t8770 = t904*t4493*t5590;
  t9649 = t8119 + t8770;
  t966 = Cos(var1[4]);
  t2126 = Sin(var1[16]);
  t10135 = Cos(var1[16]);
  t10187 = t2539*t7211;
  t10194 = t3065*t9649;
  t10446 = t10187 + t10194;
  t10744 = Cos(var1[17]);
  t10794 = t904*t966*t2126;
  t10817 = t10135*t10446;
  t10843 = t10794 + t10817;
  t10863 = Sin(var1[17]);
  t10872 = t10135*t904*t966;
  t10885 = -1.*t2126*t10446;
  t10886 = t10872 + t10885;
  p_output1[0]=-0.28121*(1. - 1.*t10135)*t10446 - 0.50321*(1. - 1.*t10744)*t10843 - 0.50321*t10863*t10886 - 0.19821*(t10744*t10843 - 1.*t10863*t10886) + (t2915 - 0.15121*t3065)*t7211 + (t2915 + 0.15121*t3065)*t9649 - 0.15121*(-1.*t3065*t7211 + t2539*t9649) + 0.28121*t2126*t904*t966 + var1[2];
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

#include "u_rearSwingFootHeight1_DiagonalStance.hh"

namespace DiagonalStance
{

void u_rearSwingFootHeight1_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
