/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 12:57:47 GMT+02:00
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
  double t1003;
  double t13302;
  double t14065;
  double t14641;
  double t14807;
  double t14808;
  double t15114;
  double t15170;
  double t15123;
  double t15176;
  double t15162;
  double t15183;
  double t15219;
  double t15563;
  double t15584;
  double t15657;
  double t9359;
  double t9362;
  double t15886;
  double t15902;
  double t15903;
  double t15905;
  double t15928;
  double t15983;
  double t16009;
  double t16014;
  double t16131;
  double t16161;
  double t16189;
  double t16266;
  double t14740;
  double t15112;
  double t15234;
  double t15478;
  double t15887;
  double t15895;
  double t15943;
  double t15974;
  double t16859;
  double t16905;
  double t16950;
  double t17045;
  double t17361;
  double t17390;
  double t17449;
  double t17452;
  double t17453;
  double t16598;
  double t16617;
  double t16628;
  double t16656;
  double t16667;
  double t16673;
  double t16690;
  double t16753;
  double t17035;
  double t17439;
  double t17474;
  double t17690;
  double t17693;
  double t17744;
  double t17875;
  double t17876;
  t1003 = Cos(var1[3]);
  t13302 = Cos(var1[9]);
  t14065 = -1.*t13302;
  t14641 = 1. + t14065;
  t14807 = Sin(var1[9]);
  t14808 = 0.15121*t14807;
  t15114 = Cos(var1[5]);
  t15170 = Sin(var1[3]);
  t15123 = Sin(var1[4]);
  t15176 = Sin(var1[5]);
  t15162 = -1.*t1003*t15114*t15123;
  t15183 = t15170*t15176;
  t15219 = t15162 + t15183;
  t15563 = t15114*t15170;
  t15584 = t1003*t15123*t15176;
  t15657 = t15563 + t15584;
  t9359 = Cos(var1[4]);
  t9362 = Sin(var1[10]);
  t15886 = Cos(var1[10]);
  t15902 = t13302*t15219;
  t15903 = t14807*t15657;
  t15905 = t15902 + t15903;
  t15928 = Cos(var1[11]);
  t15983 = t1003*t9359*t9362;
  t16009 = t15886*t15905;
  t16014 = t15983 + t16009;
  t16131 = Sin(var1[11]);
  t16161 = t15886*t1003*t9359;
  t16189 = -1.*t9362*t15905;
  t16266 = t16161 + t16189;
  t14740 = -0.15121*t14641;
  t15112 = t14740 + t14808;
  t15234 = 0.15121*t14641;
  t15478 = t15234 + t14808;
  t15887 = -1.*t15886;
  t15895 = 1. + t15887;
  t15943 = -1.*t15928;
  t15974 = 1. + t15943;
  t16859 = t13302*t9359*t15114;
  t16905 = -1.*t9359*t14807*t15176;
  t16950 = t16859 + t16905;
  t17045 = t9362*t15123;
  t17361 = t15886*t16950;
  t17390 = t17045 + t17361;
  t17449 = t15886*t15123;
  t17452 = -1.*t9362*t16950;
  t17453 = t17449 + t17452;
  t16598 = -1.*var2[0];
  t16617 = t9359*t15114*t15112;
  t16628 = 0.28121*t9362*t15123;
  t16656 = -1.*t9359*t15478*t15176;
  t16667 = -1.*t9359*t15114*t14807;
  t16673 = -1.*t13302*t9359*t15176;
  t16690 = t16667 + t16673;
  t16753 = 0.15121*t16690;
  t17035 = -0.28121*t15895*t16950;
  t17439 = -0.50321*t15974*t17390;
  t17474 = -0.50321*t16131*t17453;
  t17690 = t15928*t17390;
  t17693 = -1.*t16131*t17453;
  t17744 = t17690 + t17693;
  t17875 = -0.19821*t17744;
  t17876 = t16598 + var1[0] + t16617 + t16628 + t16656 + t16753 + t17035 + t17439 + t17474 + t17875;
  p_output1[0]=t15112*t15219 + t15478*t15657 + 0.15121*(-1.*t14807*t15219 + t13302*t15657) - 0.28121*t15895*t15905 - 0.50321*t15974*t16014 - 0.50321*t16131*t16266 - 0.19821*(t15928*t16014 - 1.*t16131*t16266) + 0.28121*t1003*t9359*t9362 + var1[2] - 0.5*t17876*var3[0]*(1. + Tanh(t17876*var4[0]));
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
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "u_rearSwingFootHeightsloped_DiagonalStance2.hh"

namespace SymFunction
{

void u_rearSwingFootHeightsloped_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
