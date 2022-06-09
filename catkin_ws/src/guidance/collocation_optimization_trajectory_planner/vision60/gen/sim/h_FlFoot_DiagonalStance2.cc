/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 14:41:04 GMT+02:00
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
  double t5667;
  double t5775;
  double t5786;
  double t5792;
  double t5798;
  double t5760;
  double t5762;
  double t5805;
  double t5806;
  double t5809;
  double t5810;
  double t5813;
  double t5817;
  double t5818;
  double t5820;
  double t5897;
  double t5901;
  double t5902;
  double t5904;
  double t5765;
  double t5773;
  double t5780;
  double t5785;
  double t5926;
  double t5924;
  double t5931;
  double t5932;
  double t5934;
  double t5814;
  double t5816;
  double t5925;
  double t5927;
  double t5929;
  double t5943;
  double t5945;
  double t5946;
  double t5950;
  double t5951;
  double t5952;
  double t5955;
  double t5956;
  double t5957;
  double t5976;
  double t5978;
  double t5980;
  double t5972;
  double t5973;
  double t5974;
  double t5987;
  double t5988;
  double t5989;
  double t5991;
  double t5992;
  double t5993;
  double t5997;
  double t5999;
  double t6000;
  t5667 = Cos(var1[4]);
  t5775 = Cos(var1[6]);
  t5786 = Sin(var1[5]);
  t5792 = Sin(var1[4]);
  t5798 = Sin(var1[6]);
  t5760 = Cos(var1[5]);
  t5762 = Cos(var1[7]);
  t5805 = t5775*t5792;
  t5806 = t5667*t5786*t5798;
  t5809 = t5805 + t5806;
  t5810 = Sin(var1[7]);
  t5813 = Cos(var1[8]);
  t5817 = t5667*t5760*t5762;
  t5818 = t5809*t5810;
  t5820 = t5817 + t5818;
  t5897 = t5762*t5809;
  t5901 = -1.*t5667*t5760*t5810;
  t5902 = t5897 + t5901;
  t5904 = Sin(var1[8]);
  t5765 = -1.*t5762;
  t5773 = 1. + t5765;
  t5780 = -1.*t5775;
  t5785 = 1. + t5780;
  t5926 = Cos(var1[3]);
  t5924 = Sin(var1[3]);
  t5931 = t5926*t5760;
  t5932 = -1.*t5924*t5792*t5786;
  t5934 = t5931 + t5932;
  t5814 = -1.*t5813;
  t5816 = 1. + t5814;
  t5925 = t5760*t5924*t5792;
  t5927 = t5926*t5786;
  t5929 = t5925 + t5927;
  t5943 = -1.*t5667*t5775*t5924;
  t5945 = -1.*t5934*t5798;
  t5946 = t5943 + t5945;
  t5950 = t5762*t5929;
  t5951 = t5946*t5810;
  t5952 = t5950 + t5951;
  t5955 = t5762*t5946;
  t5956 = -1.*t5929*t5810;
  t5957 = t5955 + t5956;
  t5976 = t5760*t5924;
  t5978 = t5926*t5792*t5786;
  t5980 = t5976 + t5978;
  t5972 = -1.*t5926*t5760*t5792;
  t5973 = t5924*t5786;
  t5974 = t5972 + t5973;
  t5987 = t5926*t5667*t5775;
  t5988 = -1.*t5980*t5798;
  t5989 = t5987 + t5988;
  t5991 = t5762*t5974;
  t5992 = t5989*t5810;
  t5993 = t5991 + t5992;
  t5997 = t5762*t5989;
  t5999 = -1.*t5974*t5810;
  t6000 = t5997 + t5999;
  p_output1[0]=0.325*t5667*t5760*t5773 - 0.1575*t5667*t5785*t5786 - 0.1575*t5792*t5798 + 0.2255*(-1.*t5667*t5775*t5786 + t5792*t5798) - 0.325*t5809*t5810 + 0.075*t5816*t5820 + 0.075*t5902*t5904 - 0.0641*(t5813*t5902 + t5820*t5904) + 0.355*(t5813*t5820 - 1.*t5902*t5904) + var1[0] - 1.*var2[0];
  p_output1[1]=0.1575*t5667*t5798*t5924 + 0.325*t5773*t5929 + 0.1575*t5785*t5934 + 0.2255*(-1.*t5667*t5798*t5924 + t5775*t5934) - 0.325*t5810*t5946 + 0.075*t5816*t5952 + 0.075*t5904*t5957 - 0.0641*(t5904*t5952 + t5813*t5957) + 0.355*(t5813*t5952 - 1.*t5904*t5957) + var1[1] - 1.*var2[1];
  p_output1[2]=-0.1575*t5667*t5798*t5926 + 0.325*t5773*t5974 + 0.1575*t5785*t5980 + 0.2255*(t5667*t5798*t5926 + t5775*t5980) - 0.325*t5810*t5989 + 0.075*t5816*t5993 + 0.075*t5904*t6000 - 0.0641*(t5904*t5993 + t5813*t6000) + 0.355*(t5813*t5993 - 1.*t5904*t6000) + var1[2] - 1.*var2[2];
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

#include "h_FlFoot_DiagonalStance2.hh"

namespace SymFunction
{

void h_FlFoot_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
