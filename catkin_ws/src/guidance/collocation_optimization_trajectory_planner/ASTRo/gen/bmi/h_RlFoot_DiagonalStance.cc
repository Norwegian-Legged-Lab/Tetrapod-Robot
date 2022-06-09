/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 17:58:25 GMT+02:00
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
  double t2573;
  double t2575;
  double t2591;
  double t2592;
  double t2614;
  double t2615;
  double t2574;
  double t2679;
  double t2619;
  double t2621;
  double t2700;
  double t2762;
  double t2763;
  double t2764;
  double t2777;
  double t2792;
  double t2793;
  double t2795;
  double t2801;
  double t2802;
  double t2803;
  double t2804;
  double t2601;
  double t2616;
  double t2823;
  double t2623;
  double t2672;
  double t2830;
  double t2829;
  double t2831;
  double t2832;
  double t2835;
  double t2840;
  double t2841;
  double t2701;
  double t2756;
  double t2778;
  double t2788;
  double t2856;
  double t2857;
  double t2859;
  double t2865;
  double t2866;
  double t2867;
  double t2869;
  double t2871;
  double t2872;
  double t2934;
  double t2937;
  double t2947;
  double t2951;
  double t2953;
  double t2956;
  double t2966;
  double t2967;
  double t2968;
  double t2982;
  double t2983;
  double t2988;
  double t2993;
  double t2998;
  double t2999;
  t2573 = Cos(var1[4]);
  t2575 = Cos(var1[9]);
  t2591 = -1.*t2575;
  t2592 = 1. + t2591;
  t2614 = Sin(var1[9]);
  t2615 = 0.15121*t2614;
  t2574 = Cos(var1[5]);
  t2679 = Sin(var1[5]);
  t2619 = Sin(var1[10]);
  t2621 = Sin(var1[4]);
  t2700 = Cos(var1[10]);
  t2762 = t2575*t2573*t2574;
  t2763 = -1.*t2573*t2614*t2679;
  t2764 = t2762 + t2763;
  t2777 = Cos(var1[11]);
  t2792 = t2619*t2621;
  t2793 = t2700*t2764;
  t2795 = t2792 + t2793;
  t2801 = Sin(var1[11]);
  t2802 = t2700*t2621;
  t2803 = -1.*t2619*t2764;
  t2804 = t2802 + t2803;
  t2601 = -0.15121*t2592;
  t2616 = t2601 + t2615;
  t2823 = Sin(var1[3]);
  t2623 = 0.15121*t2592;
  t2672 = t2623 + t2615;
  t2830 = Cos(var1[3]);
  t2829 = t2574*t2823*t2621;
  t2831 = t2830*t2679;
  t2832 = t2829 + t2831;
  t2835 = t2830*t2574;
  t2840 = -1.*t2823*t2621*t2679;
  t2841 = t2835 + t2840;
  t2701 = -1.*t2700;
  t2756 = 1. + t2701;
  t2778 = -1.*t2777;
  t2788 = 1. + t2778;
  t2856 = t2575*t2832;
  t2857 = t2614*t2841;
  t2859 = t2856 + t2857;
  t2865 = -1.*t2573*t2619*t2823;
  t2866 = t2700*t2859;
  t2867 = t2865 + t2866;
  t2869 = -1.*t2700*t2573*t2823;
  t2871 = -1.*t2619*t2859;
  t2872 = t2869 + t2871;
  t2934 = -1.*t2830*t2574*t2621;
  t2937 = t2823*t2679;
  t2947 = t2934 + t2937;
  t2951 = t2574*t2823;
  t2953 = t2830*t2621*t2679;
  t2956 = t2951 + t2953;
  t2966 = t2575*t2947;
  t2967 = t2614*t2956;
  t2968 = t2966 + t2967;
  t2982 = t2830*t2573*t2619;
  t2983 = t2700*t2968;
  t2988 = t2982 + t2983;
  t2993 = t2700*t2830*t2573;
  t2998 = -1.*t2619*t2968;
  t2999 = t2993 + t2998;
  p_output1[0]=t2573*t2574*t2616 + 0.28121*t2619*t2621 - 1.*t2573*t2672*t2679 + 0.15121*(-1.*t2573*t2574*t2614 - 1.*t2573*t2575*t2679) - 0.28121*t2756*t2764 - 0.50321*t2788*t2795 - 0.50321*t2801*t2804 - 0.19821*(t2777*t2795 - 1.*t2801*t2804) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.28121*t2573*t2619*t2823 + t2616*t2832 + t2672*t2841 + 0.15121*(-1.*t2614*t2832 + t2575*t2841) - 0.28121*t2756*t2859 - 0.50321*t2788*t2867 - 0.50321*t2801*t2872 - 0.19821*(t2777*t2867 - 1.*t2801*t2872) + var1[1] - 1.*var2[1];
  p_output1[2]=0.28121*t2573*t2619*t2830 + t2616*t2947 + t2672*t2956 + 0.15121*(-1.*t2614*t2947 + t2575*t2956) - 0.28121*t2756*t2968 - 0.50321*t2788*t2988 - 0.50321*t2801*t2999 - 0.19821*(t2777*t2988 - 1.*t2801*t2999) + var1[2] - 1.*var2[2];
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

namespace SymFunction
{

void h_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
