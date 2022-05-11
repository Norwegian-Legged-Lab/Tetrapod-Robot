/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:11:19 GMT+02:00
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
  double t3131;
  double t3535;
  double t3564;
  double t3673;
  double t3804;
  double t256;
  double t3336;
  double t3964;
  double t4010;
  double t4028;
  double t4092;
  double t2903;
  double t2935;
  double t4347;
  double t3689;
  double t3762;
  double t4470;
  double t4836;
  double t4847;
  double t4882;
  double t4416;
  double t4559;
  double t4611;
  double t5667;
  double t5669;
  double t5679;
  double t5875;
  double t5922;
  double t5927;
  double t5798;
  double t5853;
  double t5865;
  double t5986;
  double t5994;
  double t5999;
  t3131 = Cos(var1[4]);
  t3535 = Sin(var1[15]);
  t3564 = Sin(var1[4]);
  t3673 = Cos(var1[15]);
  t3804 = Sin(var1[5]);
  t256 = Cos(var1[16]);
  t3336 = Cos(var1[5]);
  t3964 = Sin(var1[16]);
  t4010 = t3673*t3564;
  t4028 = t3131*t3535*t3804;
  t4092 = t4010 + t4028;
  t2903 = -1.*t256;
  t2935 = 1. + t2903;
  t4347 = Sin(var1[3]);
  t3689 = -1.*t3673;
  t3762 = 1. + t3689;
  t4470 = Cos(var1[3]);
  t4836 = t4470*t3336;
  t4847 = -1.*t4347*t3564*t3804;
  t4882 = t4836 + t4847;
  t4416 = t3336*t4347*t3564;
  t4559 = t4470*t3804;
  t4611 = t4416 + t4559;
  t5667 = -1.*t3673*t3131*t4347;
  t5669 = -1.*t3535*t4882;
  t5679 = t5667 + t5669;
  t5875 = t3336*t4347;
  t5922 = t4470*t3564*t3804;
  t5927 = t5875 + t5922;
  t5798 = -1.*t4470*t3336*t3564;
  t5853 = t4347*t3804;
  t5865 = t5798 + t5853;
  t5986 = t3673*t4470*t3131;
  t5994 = -1.*t3535*t5927;
  t5999 = t5986 + t5994;
  p_output1[0]=-0.325*t2935*t3131*t3336 + 0.1575*t3535*t3564 + 0.1575*t3131*t3762*t3804 - 0.2255*(t3535*t3564 - 1.*t3131*t3673*t3804) + 0.325*t3964*t4092 - 0.325*(t256*t3131*t3336 + t3964*t4092) + var1[0];
  p_output1[1]=-0.1575*t3131*t3535*t4347 - 0.325*t2935*t4611 - 0.1575*t3762*t4882 - 0.2255*(-1.*t3131*t3535*t4347 + t3673*t4882) + 0.325*t3964*t5679 - 0.325*(t256*t4611 + t3964*t5679) + var1[1];
  p_output1[2]=0.1575*t3131*t3535*t4470 - 0.325*t2935*t5865 - 0.1575*t3762*t5927 - 0.2255*(t3131*t3535*t4470 + t3673*t5927) + 0.325*t3964*t5999 - 0.325*(t256*t5865 + t3964*t5999) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Joint_6_sphere_center.hh"

namespace SymFunction
{

void Joint_6_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
