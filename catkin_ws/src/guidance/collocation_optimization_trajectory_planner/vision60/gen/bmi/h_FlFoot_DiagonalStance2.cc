/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 18:49:22 GMT+02:00
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
  double t5670;
  double t5778;
  double t5789;
  double t5795;
  double t5801;
  double t5764;
  double t5765;
  double t5808;
  double t5809;
  double t5812;
  double t5813;
  double t5816;
  double t5820;
  double t5821;
  double t5823;
  double t5903;
  double t5904;
  double t5905;
  double t5907;
  double t5769;
  double t5776;
  double t5783;
  double t5788;
  double t5929;
  double t5927;
  double t5934;
  double t5935;
  double t5937;
  double t5817;
  double t5819;
  double t5928;
  double t5930;
  double t5932;
  double t5947;
  double t5948;
  double t5949;
  double t5953;
  double t5954;
  double t5955;
  double t5958;
  double t5959;
  double t5960;
  double t5980;
  double t5982;
  double t5983;
  double t5975;
  double t5976;
  double t5977;
  double t5990;
  double t5991;
  double t5992;
  double t5994;
  double t5995;
  double t5996;
  double t6001;
  double t6002;
  double t6004;
  t5670 = Cos(var1[4]);
  t5778 = Cos(var1[6]);
  t5789 = Sin(var1[5]);
  t5795 = Sin(var1[4]);
  t5801 = Sin(var1[6]);
  t5764 = Cos(var1[5]);
  t5765 = Cos(var1[7]);
  t5808 = t5778*t5795;
  t5809 = t5670*t5789*t5801;
  t5812 = t5808 + t5809;
  t5813 = Sin(var1[7]);
  t5816 = Cos(var1[8]);
  t5820 = t5670*t5764*t5765;
  t5821 = t5812*t5813;
  t5823 = t5820 + t5821;
  t5903 = t5765*t5812;
  t5904 = -1.*t5670*t5764*t5813;
  t5905 = t5903 + t5904;
  t5907 = Sin(var1[8]);
  t5769 = -1.*t5765;
  t5776 = 1. + t5769;
  t5783 = -1.*t5778;
  t5788 = 1. + t5783;
  t5929 = Cos(var1[3]);
  t5927 = Sin(var1[3]);
  t5934 = t5929*t5764;
  t5935 = -1.*t5927*t5795*t5789;
  t5937 = t5934 + t5935;
  t5817 = -1.*t5816;
  t5819 = 1. + t5817;
  t5928 = t5764*t5927*t5795;
  t5930 = t5929*t5789;
  t5932 = t5928 + t5930;
  t5947 = -1.*t5670*t5778*t5927;
  t5948 = -1.*t5937*t5801;
  t5949 = t5947 + t5948;
  t5953 = t5765*t5932;
  t5954 = t5949*t5813;
  t5955 = t5953 + t5954;
  t5958 = t5765*t5949;
  t5959 = -1.*t5932*t5813;
  t5960 = t5958 + t5959;
  t5980 = t5764*t5927;
  t5982 = t5929*t5795*t5789;
  t5983 = t5980 + t5982;
  t5975 = -1.*t5929*t5764*t5795;
  t5976 = t5927*t5789;
  t5977 = t5975 + t5976;
  t5990 = t5929*t5670*t5778;
  t5991 = -1.*t5983*t5801;
  t5992 = t5990 + t5991;
  t5994 = t5765*t5977;
  t5995 = t5992*t5813;
  t5996 = t5994 + t5995;
  t6001 = t5765*t5992;
  t6002 = -1.*t5977*t5813;
  t6004 = t6001 + t6002;
  p_output1[0]=0.325*t5670*t5764*t5776 - 0.1575*t5670*t5788*t5789 - 0.1575*t5795*t5801 + 0.2255*(-1.*t5670*t5778*t5789 + t5795*t5801) - 0.325*t5812*t5813 + 0.075*t5819*t5823 + 0.075*t5905*t5907 - 0.0641*(t5816*t5905 + t5823*t5907) + 0.355*(t5816*t5823 - 1.*t5905*t5907) + var1[0] - 1.*var2[0];
  p_output1[1]=0.1575*t5670*t5801*t5927 + 0.325*t5776*t5932 + 0.1575*t5788*t5937 + 0.2255*(-1.*t5670*t5801*t5927 + t5778*t5937) - 0.325*t5813*t5949 + 0.075*t5819*t5955 + 0.075*t5907*t5960 - 0.0641*(t5907*t5955 + t5816*t5960) + 0.355*(t5816*t5955 - 1.*t5907*t5960) + var1[1] - 1.*var2[1];
  p_output1[2]=-0.1575*t5670*t5801*t5929 + 0.325*t5776*t5977 + 0.1575*t5788*t5983 + 0.2255*(t5670*t5801*t5929 + t5778*t5983) - 0.325*t5813*t5992 + 0.075*t5819*t5996 + 0.075*t5907*t6004 - 0.0641*(t5907*t5996 + t5816*t6004) + 0.355*(t5816*t5996 - 1.*t5907*t6004) + var1[2] - 1.*var2[2];
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
