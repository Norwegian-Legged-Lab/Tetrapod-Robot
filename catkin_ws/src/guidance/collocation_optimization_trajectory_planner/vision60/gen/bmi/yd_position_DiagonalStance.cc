/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:10:43 GMT+02:00
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
  double t598;
  double t827;
  double t887;
  double t963;
  double t995;
  double t1004;
  double t838;
  double t904;
  double t916;
  double t923;
  double t1037;
  double t1038;
  double t1052;
  double t1062;
  double t1063;
  double t1089;
  double t1096;
  double t1116;
  t598 = -1.*var3[0];
  t827 = t598 + var3[1];
  t887 = t598 + var1[0];
  t963 = 1/t827;
  t995 = -1.*t963*t887;
  t1004 = 1. + t995;
  t838 = Power(t827,-5);
  t904 = Power(t887,5);
  t916 = Power(t827,-4);
  t923 = Power(t887,4);
  t1037 = Power(t827,-3);
  t1038 = Power(t887,3);
  t1052 = Power(t1004,2);
  t1062 = Power(t827,-2);
  t1063 = Power(t887,2);
  t1089 = Power(t1004,3);
  t1096 = Power(t1004,4);
  t1116 = Power(t1004,5);
  p_output1[0]=t1116*var2[0] + 5.*t1096*t887*t963*var2[14] + 10.*t1062*t1063*t1089*var2[28] + 10.*t1037*t1038*t1052*var2[42] + 5.*t1004*t916*t923*var2[56] + t838*t904*var2[70];
  p_output1[1]=t1116*var2[1] + 5.*t1096*t887*t963*var2[15] + 10.*t1062*t1063*t1089*var2[29] + 10.*t1037*t1038*t1052*var2[43] + 5.*t1004*t916*t923*var2[57] + t838*t904*var2[71];
  p_output1[2]=t1116*var2[2] + 5.*t1096*t887*t963*var2[16] + 10.*t1062*t1063*t1089*var2[30] + 10.*t1037*t1038*t1052*var2[44] + 5.*t1004*t916*t923*var2[58] + t838*t904*var2[72];
  p_output1[3]=t1116*var2[3] + 5.*t1096*t887*t963*var2[17] + 10.*t1062*t1063*t1089*var2[31] + 10.*t1037*t1038*t1052*var2[45] + 5.*t1004*t916*t923*var2[59] + t838*t904*var2[73];
  p_output1[4]=t1116*var2[4] + 5.*t1096*t887*t963*var2[18] + 10.*t1062*t1063*t1089*var2[32] + 10.*t1037*t1038*t1052*var2[46] + 5.*t1004*t916*t923*var2[60] + t838*t904*var2[74];
  p_output1[5]=t1116*var2[5] + 5.*t1096*t887*t963*var2[19] + 10.*t1062*t1063*t1089*var2[33] + 10.*t1037*t1038*t1052*var2[47] + 5.*t1004*t916*t923*var2[61] + t838*t904*var2[75];
  p_output1[6]=t1116*var2[6] + 5.*t1096*t887*t963*var2[20] + 10.*t1062*t1063*t1089*var2[34] + 10.*t1037*t1038*t1052*var2[48] + 5.*t1004*t916*t923*var2[62] + t838*t904*var2[76];
  p_output1[7]=t1116*var2[7] + 5.*t1096*t887*t963*var2[21] + 10.*t1062*t1063*t1089*var2[35] + 10.*t1037*t1038*t1052*var2[49] + 5.*t1004*t916*t923*var2[63] + t838*t904*var2[77];
  p_output1[8]=t1116*var2[8] + 5.*t1096*t887*t963*var2[22] + 10.*t1062*t1063*t1089*var2[36] + 10.*t1037*t1038*t1052*var2[50] + 5.*t1004*t916*t923*var2[64] + t838*t904*var2[78];
  p_output1[9]=t1116*var2[9] + 5.*t1096*t887*t963*var2[23] + 10.*t1062*t1063*t1089*var2[37] + 10.*t1037*t1038*t1052*var2[51] + 5.*t1004*t916*t923*var2[65] + t838*t904*var2[79];
  p_output1[10]=t1116*var2[10] + 5.*t1096*t887*t963*var2[24] + 10.*t1062*t1063*t1089*var2[38] + 10.*t1037*t1038*t1052*var2[52] + 5.*t1004*t916*t923*var2[66] + t838*t904*var2[80];
  p_output1[11]=t1116*var2[11] + 5.*t1096*t887*t963*var2[25] + 10.*t1062*t1063*t1089*var2[39] + 10.*t1037*t1038*t1052*var2[53] + 5.*t1004*t916*t923*var2[67] + t838*t904*var2[81];
  p_output1[12]=t1116*var2[12] + 5.*t1096*t887*t963*var2[26] + 10.*t1062*t1063*t1089*var2[40] + 10.*t1037*t1038*t1052*var2[54] + 5.*t1004*t916*t923*var2[68] + t838*t904*var2[82];
  p_output1[13]=t1116*var2[13] + 5.*t1096*t887*t963*var2[27] + 10.*t1062*t1063*t1089*var2[41] + 10.*t1037*t1038*t1052*var2[55] + 5.*t1004*t916*t923*var2[69] + t838*t904*var2[83];
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

#include "yd_position_DiagonalStance.hh"

namespace SymFunction
{

void yd_position_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
