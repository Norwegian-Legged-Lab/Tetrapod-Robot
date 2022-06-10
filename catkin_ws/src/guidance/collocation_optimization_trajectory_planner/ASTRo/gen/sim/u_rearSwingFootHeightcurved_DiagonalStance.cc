/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 13:04:23 GMT+02:00
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
  double t5701;
  double t11253;
  double t11928;
  double t11932;
  double t12603;
  double t12696;
  double t12958;
  double t13204;
  double t13129;
  double t13248;
  double t13193;
  double t13337;
  double t13338;
  double t13625;
  double t13680;
  double t13724;
  double t6596;
  double t10043;
  double t14511;
  double t14524;
  double t14564;
  double t14565;
  double t14622;
  double t15506;
  double t15837;
  double t15924;
  double t16062;
  double t16151;
  double t16211;
  double t16391;
  double t12752;
  double t12758;
  double t13606;
  double t13614;
  double t14517;
  double t14523;
  double t14739;
  double t15071;
  double t17005;
  double t17006;
  double t17012;
  double t17024;
  double t17164;
  double t17192;
  double t17292;
  double t17307;
  double t17396;
  double t16974;
  double t16986;
  double t16987;
  double t16992;
  double t16993;
  double t16994;
  double t16995;
  double t17004;
  double t17018;
  double t17268;
  double t17548;
  double t17568;
  double t17943;
  double t18310;
  double t18403;
  double t18408;
  t5701 = Cos(var1[3]);
  t11253 = Cos(var1[15]);
  t11928 = -1.*t11253;
  t11932 = 1. + t11928;
  t12603 = -0.15121*t11932;
  t12696 = Sin(var1[15]);
  t12958 = Cos(var1[5]);
  t13204 = Sin(var1[3]);
  t13129 = Sin(var1[4]);
  t13248 = Sin(var1[5]);
  t13193 = -1.*t5701*t12958*t13129;
  t13337 = t13204*t13248;
  t13338 = t13193 + t13337;
  t13625 = t12958*t13204;
  t13680 = t5701*t13129*t13248;
  t13724 = t13625 + t13680;
  t6596 = Cos(var1[4]);
  t10043 = Sin(var1[16]);
  t14511 = Cos(var1[16]);
  t14524 = t11253*t13338;
  t14564 = t12696*t13724;
  t14565 = t14524 + t14564;
  t14622 = Cos(var1[17]);
  t15506 = t5701*t6596*t10043;
  t15837 = t14511*t14565;
  t15924 = t15506 + t15837;
  t16062 = Sin(var1[17]);
  t16151 = t14511*t5701*t6596;
  t16211 = -1.*t10043*t14565;
  t16391 = t16151 + t16211;
  t12752 = -0.15121*t12696;
  t12758 = t12603 + t12752;
  t13606 = 0.15121*t12696;
  t13614 = t12603 + t13606;
  t14517 = -1.*t14511;
  t14523 = 1. + t14517;
  t14739 = -1.*t14622;
  t15071 = 1. + t14739;
  t17005 = t11253*t6596*t12958;
  t17006 = -1.*t6596*t12696*t13248;
  t17012 = t17005 + t17006;
  t17024 = t10043*t13129;
  t17164 = t14511*t17012;
  t17192 = t17024 + t17164;
  t17292 = t14511*t13129;
  t17307 = -1.*t10043*t17012;
  t17396 = t17292 + t17307;
  t16974 = -1.*var2[0];
  t16986 = t6596*t12958*t12758;
  t16987 = 0.28121*t10043*t13129;
  t16992 = -1.*t6596*t13614*t13248;
  t16993 = -1.*t6596*t12958*t12696;
  t16994 = -1.*t11253*t6596*t13248;
  t16995 = t16993 + t16994;
  t17004 = -0.15121*t16995;
  t17018 = -0.28121*t14523*t17012;
  t17268 = -0.50321*t15071*t17192;
  t17548 = -0.50321*t16062*t17396;
  t17568 = t14622*t17192;
  t17943 = -1.*t16062*t17396;
  t18310 = t17568 + t17943;
  t18403 = -0.19821*t18310;
  t18408 = t16974 + var1[0] + t16986 + t16987 + t16992 + t17004 + t17018 + t17268 + t17548 + t18403;
  p_output1[0]=t12758*t13338 + t13614*t13724 - 0.15121*(-1.*t12696*t13338 + t11253*t13724) - 0.28121*t14523*t14565 - 0.50321*t15071*t15924 - 0.50321*t16062*t16391 - 0.19821*(t14622*t15924 - 1.*t16062*t16391) + 0.28121*t10043*t5701*t6596 + var1[2] - 0.25*Power(t18408,2)*var3[0]*(1. + Tanh(t18408*var4[0]));
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

#include "u_rearSwingFootHeightcurved_DiagonalStance.hh"

namespace SymFunction
{

void u_rearSwingFootHeightcurved_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
