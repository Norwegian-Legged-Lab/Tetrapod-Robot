/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:05:57 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t10828;
  double t10871;
  double t11915;
  double t11924;
  double t12328;
  double t12578;
  double t12594;
  double t12610;
  double t12627;
  double t13765;
  double t13775;
  double t13792;
  double t13793;
  double t13794;
  double t13796;
  double t13800;
  double t13977;
  double t13990;
  double t14226;
  t10828 = -1.*var3[0];
  t10871 = t10828 + var3[1];
  t11915 = 1/t10871;
  t11924 = Power(var2[9],2);
  t12328 = Power(var2[10],2);
  t12578 = Power(var2[11],2);
  t12594 = Power(var2[0],2);
  t12610 = Power(var2[1],2);
  t12627 = Power(var2[2],2);
  t13765 = Power(var2[3],2);
  t13775 = Power(var2[4],2);
  t13792 = Power(var2[5],2);
  t13793 = Power(var2[6],2);
  t13794 = Power(var2[7],2);
  t13796 = Power(var2[8],2);
  t13800 = t11924 + t12328 + t12578 + t12594 + t12610 + t12627 + t13765 + t13775 + t13792 + t13793 + t13794 + t13796;
  t13977 = -1.*var1[0];
  t13990 = t13977 + var1[1];
  t14226 = Power(t10871,-2);
  p_output1[0]=-1.*t11915*t13800*var4[0];
  p_output1[1]=t11915*t13800*var4[0];
  p_output1[2]=2.*t11915*t13990*var2[0]*var4[0];
  p_output1[3]=2.*t11915*t13990*var2[1]*var4[0];
  p_output1[4]=2.*t11915*t13990*var2[2]*var4[0];
  p_output1[5]=2.*t11915*t13990*var2[3]*var4[0];
  p_output1[6]=2.*t11915*t13990*var2[4]*var4[0];
  p_output1[7]=2.*t11915*t13990*var2[5]*var4[0];
  p_output1[8]=2.*t11915*t13990*var2[6]*var4[0];
  p_output1[9]=2.*t11915*t13990*var2[7]*var4[0];
  p_output1[10]=2.*t11915*t13990*var2[8]*var4[0];
  p_output1[11]=2.*t11915*t13990*var2[9]*var4[0];
  p_output1[12]=2.*t11915*t13990*var2[10]*var4[0];
  p_output1[13]=2.*t11915*t13990*var2[11]*var4[0];
  p_output1[14]=t13800*t13990*t14226*var4[0];
  p_output1[15]=-1.*t13800*t13990*t14226*var4[0];
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 12 && ncols == 1) && 
      !(mrows == 1 && ncols == 12))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 16, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "J_torqueOverTime_ParallelStance_integral.hh"

namespace ParallelStance
{

void J_torqueOverTime_ParallelStance_integral_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
