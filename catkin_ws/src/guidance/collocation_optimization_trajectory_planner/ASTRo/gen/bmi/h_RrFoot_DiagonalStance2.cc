/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 18:59:44 GMT+02:00
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
  double t5676;
  double t5678;
  double t5683;
  double t5684;
  double t5689;
  double t5694;
  double t5677;
  double t5717;
  double t5698;
  double t5699;
  double t5729;
  double t5768;
  double t5769;
  double t5770;
  double t5782;
  double t5788;
  double t5789;
  double t5790;
  double t5796;
  double t5797;
  double t5798;
  double t5799;
  double t5695;
  double t5696;
  double t5810;
  double t5701;
  double t5710;
  double t5817;
  double t5816;
  double t5818;
  double t5819;
  double t5821;
  double t5826;
  double t5827;
  double t5730;
  double t5764;
  double t5783;
  double t5787;
  double t5833;
  double t5834;
  double t5835;
  double t5841;
  double t5842;
  double t5843;
  double t5845;
  double t5846;
  double t5847;
  double t5890;
  double t5891;
  double t5896;
  double t5900;
  double t5902;
  double t5905;
  double t5914;
  double t5915;
  double t5916;
  double t5930;
  double t5931;
  double t5936;
  double t5941;
  double t5946;
  double t5947;
  t5676 = Cos(var1[4]);
  t5678 = Cos(var1[15]);
  t5683 = -1.*t5678;
  t5684 = 1. + t5683;
  t5689 = -0.15121*t5684;
  t5694 = Sin(var1[15]);
  t5677 = Cos(var1[5]);
  t5717 = Sin(var1[5]);
  t5698 = Sin(var1[16]);
  t5699 = Sin(var1[4]);
  t5729 = Cos(var1[16]);
  t5768 = t5678*t5676*t5677;
  t5769 = -1.*t5676*t5694*t5717;
  t5770 = t5768 + t5769;
  t5782 = Cos(var1[17]);
  t5788 = t5698*t5699;
  t5789 = t5729*t5770;
  t5790 = t5788 + t5789;
  t5796 = Sin(var1[17]);
  t5797 = t5729*t5699;
  t5798 = -1.*t5698*t5770;
  t5799 = t5797 + t5798;
  t5695 = -0.15121*t5694;
  t5696 = t5689 + t5695;
  t5810 = Sin(var1[3]);
  t5701 = 0.15121*t5694;
  t5710 = t5689 + t5701;
  t5817 = Cos(var1[3]);
  t5816 = t5677*t5810*t5699;
  t5818 = t5817*t5717;
  t5819 = t5816 + t5818;
  t5821 = t5817*t5677;
  t5826 = -1.*t5810*t5699*t5717;
  t5827 = t5821 + t5826;
  t5730 = -1.*t5729;
  t5764 = 1. + t5730;
  t5783 = -1.*t5782;
  t5787 = 1. + t5783;
  t5833 = t5678*t5819;
  t5834 = t5694*t5827;
  t5835 = t5833 + t5834;
  t5841 = -1.*t5676*t5698*t5810;
  t5842 = t5729*t5835;
  t5843 = t5841 + t5842;
  t5845 = -1.*t5729*t5676*t5810;
  t5846 = -1.*t5698*t5835;
  t5847 = t5845 + t5846;
  t5890 = -1.*t5817*t5677*t5699;
  t5891 = t5810*t5717;
  t5896 = t5890 + t5891;
  t5900 = t5677*t5810;
  t5902 = t5817*t5699*t5717;
  t5905 = t5900 + t5902;
  t5914 = t5678*t5896;
  t5915 = t5694*t5905;
  t5916 = t5914 + t5915;
  t5930 = t5817*t5676*t5698;
  t5931 = t5729*t5916;
  t5936 = t5930 + t5931;
  t5941 = t5729*t5817*t5676;
  t5946 = -1.*t5698*t5916;
  t5947 = t5941 + t5946;
  p_output1[0]=t5676*t5677*t5696 + 0.28121*t5698*t5699 - 1.*t5676*t5710*t5717 - 0.15121*(-1.*t5676*t5677*t5694 - 1.*t5676*t5678*t5717) - 0.28121*t5764*t5770 - 0.50321*t5787*t5790 - 0.50321*t5796*t5799 - 0.19821*(t5782*t5790 - 1.*t5796*t5799) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.28121*t5676*t5698*t5810 + t5696*t5819 + t5710*t5827 - 0.15121*(-1.*t5694*t5819 + t5678*t5827) - 0.28121*t5764*t5835 - 0.50321*t5787*t5843 - 0.50321*t5796*t5847 - 0.19821*(t5782*t5843 - 1.*t5796*t5847) + var1[1] - 1.*var2[1];
  p_output1[2]=0.28121*t5676*t5698*t5817 + t5696*t5896 + t5710*t5905 - 0.15121*(-1.*t5694*t5896 + t5678*t5905) - 0.28121*t5764*t5916 - 0.50321*t5787*t5936 - 0.50321*t5796*t5947 - 0.19821*(t5782*t5936 - 1.*t5796*t5947) + var1[2] - 1.*var2[2];
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

#include "h_RrFoot_DiagonalStance2.hh"

namespace SymFunction
{

void h_RrFoot_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
