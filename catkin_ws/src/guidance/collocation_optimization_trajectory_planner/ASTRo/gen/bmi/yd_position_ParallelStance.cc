/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 18:51:29 GMT+02:00
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
  double t3552;
  double t4095;
  double t7961;
  double t15846;
  double t15985;
  double t15991;
  double t7553;
  double t8881;
  double t8989;
  double t15500;
  double t16127;
  double t16129;
  double t16138;
  double t16146;
  double t16158;
  double t16163;
  double t16250;
  double t16288;
  t3552 = -1.*var3[0];
  t4095 = t3552 + var3[1];
  t7961 = t3552 + var1[0];
  t15846 = 1/t4095;
  t15985 = -1.*t15846*t7961;
  t15991 = 1. + t15985;
  t7553 = Power(t4095,-5);
  t8881 = Power(t7961,5);
  t8989 = Power(t4095,-4);
  t15500 = Power(t7961,4);
  t16127 = Power(t4095,-3);
  t16129 = Power(t7961,3);
  t16138 = Power(t15991,2);
  t16146 = Power(t4095,-2);
  t16158 = Power(t7961,2);
  t16163 = Power(t15991,3);
  t16250 = Power(t15991,4);
  t16288 = Power(t15991,5);
  p_output1[0]=t16288*var2[0] + 5.*t15846*t16250*t7961*var2[14] + 10.*t16146*t16158*t16163*var2[28] + 10.*t16127*t16129*t16138*var2[42] + 5.*t15500*t15991*t8989*var2[56] + t7553*t8881*var2[70];
  p_output1[1]=t16288*var2[1] + 5.*t15846*t16250*t7961*var2[15] + 10.*t16146*t16158*t16163*var2[29] + 10.*t16127*t16129*t16138*var2[43] + 5.*t15500*t15991*t8989*var2[57] + t7553*t8881*var2[71];
  p_output1[2]=t16288*var2[2] + 5.*t15846*t16250*t7961*var2[16] + 10.*t16146*t16158*t16163*var2[30] + 10.*t16127*t16129*t16138*var2[44] + 5.*t15500*t15991*t8989*var2[58] + t7553*t8881*var2[72];
  p_output1[3]=t16288*var2[3] + 5.*t15846*t16250*t7961*var2[17] + 10.*t16146*t16158*t16163*var2[31] + 10.*t16127*t16129*t16138*var2[45] + 5.*t15500*t15991*t8989*var2[59] + t7553*t8881*var2[73];
  p_output1[4]=t16288*var2[4] + 5.*t15846*t16250*t7961*var2[18] + 10.*t16146*t16158*t16163*var2[32] + 10.*t16127*t16129*t16138*var2[46] + 5.*t15500*t15991*t8989*var2[60] + t7553*t8881*var2[74];
  p_output1[5]=t16288*var2[5] + 5.*t15846*t16250*t7961*var2[19] + 10.*t16146*t16158*t16163*var2[33] + 10.*t16127*t16129*t16138*var2[47] + 5.*t15500*t15991*t8989*var2[61] + t7553*t8881*var2[75];
  p_output1[6]=t16288*var2[6] + 5.*t15846*t16250*t7961*var2[20] + 10.*t16146*t16158*t16163*var2[34] + 10.*t16127*t16129*t16138*var2[48] + 5.*t15500*t15991*t8989*var2[62] + t7553*t8881*var2[76];
  p_output1[7]=t16288*var2[7] + 5.*t15846*t16250*t7961*var2[21] + 10.*t16146*t16158*t16163*var2[35] + 10.*t16127*t16129*t16138*var2[49] + 5.*t15500*t15991*t8989*var2[63] + t7553*t8881*var2[77];
  p_output1[8]=t16288*var2[8] + 5.*t15846*t16250*t7961*var2[22] + 10.*t16146*t16158*t16163*var2[36] + 10.*t16127*t16129*t16138*var2[50] + 5.*t15500*t15991*t8989*var2[64] + t7553*t8881*var2[78];
  p_output1[9]=t16288*var2[9] + 5.*t15846*t16250*t7961*var2[23] + 10.*t16146*t16158*t16163*var2[37] + 10.*t16127*t16129*t16138*var2[51] + 5.*t15500*t15991*t8989*var2[65] + t7553*t8881*var2[79];
  p_output1[10]=t16288*var2[10] + 5.*t15846*t16250*t7961*var2[24] + 10.*t16146*t16158*t16163*var2[38] + 10.*t16127*t16129*t16138*var2[52] + 5.*t15500*t15991*t8989*var2[66] + t7553*t8881*var2[80];
  p_output1[11]=t16288*var2[11] + 5.*t15846*t16250*t7961*var2[25] + 10.*t16146*t16158*t16163*var2[39] + 10.*t16127*t16129*t16138*var2[53] + 5.*t15500*t15991*t8989*var2[67] + t7553*t8881*var2[81];
  p_output1[12]=t16288*var2[12] + 5.*t15846*t16250*t7961*var2[26] + 10.*t16146*t16158*t16163*var2[40] + 10.*t16127*t16129*t16138*var2[54] + 5.*t15500*t15991*t8989*var2[68] + t7553*t8881*var2[82];
  p_output1[13]=t16288*var2[13] + 5.*t15846*t16250*t7961*var2[27] + 10.*t16146*t16158*t16163*var2[41] + 10.*t16127*t16129*t16138*var2[55] + 5.*t15500*t15991*t8989*var2[69] + t7553*t8881*var2[83];
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
