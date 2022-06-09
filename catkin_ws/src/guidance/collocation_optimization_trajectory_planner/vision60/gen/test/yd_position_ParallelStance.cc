/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 10:40:34 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3)
{
  double t6432;
  double t12979;
  double t13101;
  double t17901;
  double t17945;
  double t17986;
  double t12999;
  double t17602;
  double t17662;
  double t17812;
  double t18416;
  double t18456;
  double t18968;
  double t23514;
  double t23669;
  double t23698;
  double t23816;
  double t24099;
  t6432 = -1.*var3[0];
  t12979 = t6432 + var3[1];
  t13101 = t6432 + var1[0];
  t17901 = 1/t12979;
  t17945 = -1.*t17901*t13101;
  t17986 = 1. + t17945;
  t12999 = Power(t12979,-5);
  t17602 = Power(t13101,5);
  t17662 = Power(t12979,-4);
  t17812 = Power(t13101,4);
  t18416 = Power(t12979,-3);
  t18456 = Power(t13101,3);
  t18968 = Power(t17986,2);
  t23514 = Power(t12979,-2);
  t23669 = Power(t13101,2);
  t23698 = Power(t17986,3);
  t23816 = Power(t17986,4);
  t24099 = Power(t17986,5);
  p_output1[0]=t24099*var2[0] + 5.*t13101*t17901*t23816*var2[14] + 10.*t23514*t23669*t23698*var2[28] + 10.*t18416*t18456*t18968*var2[42] + 5.*t17662*t17812*t17986*var2[56] + t12999*t17602*var2[70];
  p_output1[1]=t24099*var2[1] + 5.*t13101*t17901*t23816*var2[15] + 10.*t23514*t23669*t23698*var2[29] + 10.*t18416*t18456*t18968*var2[43] + 5.*t17662*t17812*t17986*var2[57] + t12999*t17602*var2[71];
  p_output1[2]=t24099*var2[2] + 5.*t13101*t17901*t23816*var2[16] + 10.*t23514*t23669*t23698*var2[30] + 10.*t18416*t18456*t18968*var2[44] + 5.*t17662*t17812*t17986*var2[58] + t12999*t17602*var2[72];
  p_output1[3]=t24099*var2[3] + 5.*t13101*t17901*t23816*var2[17] + 10.*t23514*t23669*t23698*var2[31] + 10.*t18416*t18456*t18968*var2[45] + 5.*t17662*t17812*t17986*var2[59] + t12999*t17602*var2[73];
  p_output1[4]=t24099*var2[4] + 5.*t13101*t17901*t23816*var2[18] + 10.*t23514*t23669*t23698*var2[32] + 10.*t18416*t18456*t18968*var2[46] + 5.*t17662*t17812*t17986*var2[60] + t12999*t17602*var2[74];
  p_output1[5]=t24099*var2[5] + 5.*t13101*t17901*t23816*var2[19] + 10.*t23514*t23669*t23698*var2[33] + 10.*t18416*t18456*t18968*var2[47] + 5.*t17662*t17812*t17986*var2[61] + t12999*t17602*var2[75];
  p_output1[6]=t24099*var2[6] + 5.*t13101*t17901*t23816*var2[20] + 10.*t23514*t23669*t23698*var2[34] + 10.*t18416*t18456*t18968*var2[48] + 5.*t17662*t17812*t17986*var2[62] + t12999*t17602*var2[76];
  p_output1[7]=t24099*var2[7] + 5.*t13101*t17901*t23816*var2[21] + 10.*t23514*t23669*t23698*var2[35] + 10.*t18416*t18456*t18968*var2[49] + 5.*t17662*t17812*t17986*var2[63] + t12999*t17602*var2[77];
  p_output1[8]=t24099*var2[8] + 5.*t13101*t17901*t23816*var2[22] + 10.*t23514*t23669*t23698*var2[36] + 10.*t18416*t18456*t18968*var2[50] + 5.*t17662*t17812*t17986*var2[64] + t12999*t17602*var2[78];
  p_output1[9]=t24099*var2[9] + 5.*t13101*t17901*t23816*var2[23] + 10.*t23514*t23669*t23698*var2[37] + 10.*t18416*t18456*t18968*var2[51] + 5.*t17662*t17812*t17986*var2[65] + t12999*t17602*var2[79];
  p_output1[10]=t24099*var2[10] + 5.*t13101*t17901*t23816*var2[24] + 10.*t23514*t23669*t23698*var2[38] + 10.*t18416*t18456*t18968*var2[52] + 5.*t17662*t17812*t17986*var2[66] + t12999*t17602*var2[80];
  p_output1[11]=t24099*var2[11] + 5.*t13101*t17901*t23816*var2[25] + 10.*t23514*t23669*t23698*var2[39] + 10.*t18416*t18456*t18968*var2[53] + 5.*t17662*t17812*t17986*var2[67] + t12999*t17602*var2[81];
  p_output1[12]=t24099*var2[12] + 5.*t13101*t17901*t23816*var2[26] + 10.*t23514*t23669*t23698*var2[40] + 10.*t18416*t18456*t18968*var2[54] + 5.*t17662*t17812*t17986*var2[68] + t12999*t17602*var2[82];
  p_output1[13]=t24099*var2[13] + 5.*t13101*t17901*t23816*var2[27] + 10.*t23514*t23669*t23698*var2[41] + 10.*t18416*t18456*t18968*var2[55] + 5.*t17662*t17812*t17986*var2[69] + t12999*t17602*var2[83];
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

  double *var1,*var2,*var3;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 3)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Three input(s) required (var1,var2,var3).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 84 && ncols == 1) && 
      !(mrows == 1 && ncols == 84))) 
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 14, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3);


}

#else // MATLAB_MEX_FILE

#include "yd_position_ParallelStance.hh"

namespace SymFunction
{

void yd_position_ParallelStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
