/*
 * Automatically Generated from Mathematica.
 * Thu 28 Apr 2022 15:24:00 GMT+02:00
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
  double t4899;
  double t4900;
  double t4906;
  double t4922;
  double t4926;
  double t4930;
  double t4905;
  double t4908;
  double t4916;
  double t4920;
  double t4932;
  double t4949;
  double t4962;
  double t4967;
  double t4971;
  double t4972;
  double t4992;
  double t5050;
  t4899 = -1.*var3[0];
  t4900 = t4899 + var3[1];
  t4906 = t4899 + var1[0];
  t4922 = 1/t4900;
  t4926 = -1.*t4922*t4906;
  t4930 = 1. + t4926;
  t4905 = Power(t4900,-5);
  t4908 = Power(t4906,5);
  t4916 = Power(t4900,-4);
  t4920 = Power(t4906,4);
  t4932 = Power(t4900,-3);
  t4949 = Power(t4906,3);
  t4962 = Power(t4930,2);
  t4967 = Power(t4900,-2);
  t4971 = Power(t4906,2);
  t4972 = Power(t4930,3);
  t4992 = Power(t4930,4);
  t5050 = Power(t4930,5);
  p_output1[0]=t5050*var2[0] + 5.*t4906*t4922*t4992*var2[14] + 10.*t4967*t4971*t4972*var2[28] + 10.*t4932*t4949*t4962*var2[42] + 5.*t4916*t4920*t4930*var2[56] + t4905*t4908*var2[70];
  p_output1[1]=t5050*var2[1] + 5.*t4906*t4922*t4992*var2[15] + 10.*t4967*t4971*t4972*var2[29] + 10.*t4932*t4949*t4962*var2[43] + 5.*t4916*t4920*t4930*var2[57] + t4905*t4908*var2[71];
  p_output1[2]=t5050*var2[2] + 5.*t4906*t4922*t4992*var2[16] + 10.*t4967*t4971*t4972*var2[30] + 10.*t4932*t4949*t4962*var2[44] + 5.*t4916*t4920*t4930*var2[58] + t4905*t4908*var2[72];
  p_output1[3]=t5050*var2[3] + 5.*t4906*t4922*t4992*var2[17] + 10.*t4967*t4971*t4972*var2[31] + 10.*t4932*t4949*t4962*var2[45] + 5.*t4916*t4920*t4930*var2[59] + t4905*t4908*var2[73];
  p_output1[4]=t5050*var2[4] + 5.*t4906*t4922*t4992*var2[18] + 10.*t4967*t4971*t4972*var2[32] + 10.*t4932*t4949*t4962*var2[46] + 5.*t4916*t4920*t4930*var2[60] + t4905*t4908*var2[74];
  p_output1[5]=t5050*var2[5] + 5.*t4906*t4922*t4992*var2[19] + 10.*t4967*t4971*t4972*var2[33] + 10.*t4932*t4949*t4962*var2[47] + 5.*t4916*t4920*t4930*var2[61] + t4905*t4908*var2[75];
  p_output1[6]=t5050*var2[6] + 5.*t4906*t4922*t4992*var2[20] + 10.*t4967*t4971*t4972*var2[34] + 10.*t4932*t4949*t4962*var2[48] + 5.*t4916*t4920*t4930*var2[62] + t4905*t4908*var2[76];
  p_output1[7]=t5050*var2[7] + 5.*t4906*t4922*t4992*var2[21] + 10.*t4967*t4971*t4972*var2[35] + 10.*t4932*t4949*t4962*var2[49] + 5.*t4916*t4920*t4930*var2[63] + t4905*t4908*var2[77];
  p_output1[8]=t5050*var2[8] + 5.*t4906*t4922*t4992*var2[22] + 10.*t4967*t4971*t4972*var2[36] + 10.*t4932*t4949*t4962*var2[50] + 5.*t4916*t4920*t4930*var2[64] + t4905*t4908*var2[78];
  p_output1[9]=t5050*var2[9] + 5.*t4906*t4922*t4992*var2[23] + 10.*t4967*t4971*t4972*var2[37] + 10.*t4932*t4949*t4962*var2[51] + 5.*t4916*t4920*t4930*var2[65] + t4905*t4908*var2[79];
  p_output1[10]=t5050*var2[10] + 5.*t4906*t4922*t4992*var2[24] + 10.*t4967*t4971*t4972*var2[38] + 10.*t4932*t4949*t4962*var2[52] + 5.*t4916*t4920*t4930*var2[66] + t4905*t4908*var2[80];
  p_output1[11]=t5050*var2[11] + 5.*t4906*t4922*t4992*var2[25] + 10.*t4967*t4971*t4972*var2[39] + 10.*t4932*t4949*t4962*var2[53] + 5.*t4916*t4920*t4930*var2[67] + t4905*t4908*var2[81];
  p_output1[12]=t5050*var2[12] + 5.*t4906*t4922*t4992*var2[26] + 10.*t4967*t4971*t4972*var2[40] + 10.*t4932*t4949*t4962*var2[54] + 5.*t4916*t4920*t4930*var2[68] + t4905*t4908*var2[82];
  p_output1[13]=t5050*var2[13] + 5.*t4906*t4922*t4992*var2[27] + 10.*t4967*t4971*t4972*var2[41] + 10.*t4932*t4949*t4962*var2[55] + 5.*t4916*t4920*t4930*var2[69] + t4905*t4908*var2[83];
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
