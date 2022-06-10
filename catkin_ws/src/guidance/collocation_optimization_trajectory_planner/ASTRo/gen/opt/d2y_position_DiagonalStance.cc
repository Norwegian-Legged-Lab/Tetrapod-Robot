/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:53:09 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8,const double *var9)
{
  double t2851;
  double t3506;
  double t3527;
  double t3546;
  double t3594;
  double t3779;
  double t3780;
  double t3923;
  double t3950;
  double t4103;
  double t4131;
  double t4622;
  double t4701;
  double t4713;
  double t4731;
  double t4732;
  double t5043;
  double t5051;
  double t5715;
  double t5825;
  double t5937;
  double t9267;
  double t9294;
  double t9340;
  t2851 = -1.*var6[0];
  t3506 = t2851 + var6[1];
  t3527 = Power(t3506,-5);
  t3546 = -1. + var7[0];
  t3594 = -1. + var8[0];
  t3779 = 1/t3594;
  t3780 = -1.*var1[0];
  t3923 = t3780 + var1[1];
  t3950 = t3546*t3779*t3923;
  t4103 = t2851 + var1[0] + t3950;
  t4131 = Power(t4103,3);
  t4622 = Power(t3506,-4);
  t4701 = Power(t4103,2);
  t4713 = 1/t3506;
  t4731 = -1.*t4713*t4103;
  t4732 = 1. + t4731;
  t5043 = Power(t3506,-3);
  t5051 = Power(t4732,2);
  t5715 = Power(t3506,-2);
  t5825 = Power(t4732,3);
  t5937 = Power(t4103,4);
  t9267 = Power(t4732,4);
  t9294 = Power(t4103,5);
  t9340 = Power(t4732,5);
  p_output1[0]=var4[12] - 20.*t5715*t5825*var5[0] - 60.*t4103*t5043*t5051*var5[11] + 40.*t5715*t5825*var5[11] - 60.*t4622*t4701*t4732*var5[22] + 120.*t4103*t5043*t5051*var5[22] - 20.*t5715*t5825*var5[22] - 20.*t3527*t4131*var5[33] + 120.*t4622*t4701*t4732*var5[33] - 60.*t4103*t5043*t5051*var5[33] + 40.*t3527*t4131*var5[44] - 60.*t4622*t4701*t4732*var5[44] - 20.*t3527*t4131*var5[55] + (var2[12] - 1.*t9340*var5[0] - 5.*t4103*t4713*t9267*var5[11] - 10.*t4701*t5715*t5825*var5[22] - 10.*t4131*t5043*t5051*var5[33] - 5.*t4622*t4732*t5937*var5[44] - 1.*t3527*t9294*var5[55])*var9[0] + (var3[12] + 5.*t4713*t9267*var5[0] + 20.*t4103*t5715*t5825*var5[11] - 5.*t4713*t9267*var5[11] + 30.*t4701*t5043*t5051*var5[22] - 20.*t4103*t5715*t5825*var5[22] + 20.*t4131*t4622*t4732*var5[33] - 30.*t4701*t5043*t5051*var5[33] - 20.*t4131*t4622*t4732*var5[44] + 5.*t3527*t5937*var5[44] - 5.*t3527*t5937*var5[55])*var9[1];
  p_output1[1]=var4[13] - 20.*t5715*t5825*var5[1] - 60.*t4103*t5043*t5051*var5[12] + 40.*t5715*t5825*var5[12] - 60.*t4622*t4701*t4732*var5[23] + 120.*t4103*t5043*t5051*var5[23] - 20.*t5715*t5825*var5[23] - 20.*t3527*t4131*var5[34] + 120.*t4622*t4701*t4732*var5[34] - 60.*t4103*t5043*t5051*var5[34] + 40.*t3527*t4131*var5[45] - 60.*t4622*t4701*t4732*var5[45] - 20.*t3527*t4131*var5[56] + (var2[13] - 1.*t9340*var5[1] - 5.*t4103*t4713*t9267*var5[12] - 10.*t4701*t5715*t5825*var5[23] - 10.*t4131*t5043*t5051*var5[34] - 5.*t4622*t4732*t5937*var5[45] - 1.*t3527*t9294*var5[56])*var9[0] + (var3[13] + 5.*t4713*t9267*var5[1] + 20.*t4103*t5715*t5825*var5[12] - 5.*t4713*t9267*var5[12] + 30.*t4701*t5043*t5051*var5[23] - 20.*t4103*t5715*t5825*var5[23] + 20.*t4131*t4622*t4732*var5[34] - 30.*t4701*t5043*t5051*var5[34] - 20.*t4131*t4622*t4732*var5[45] + 5.*t3527*t5937*var5[45] - 5.*t3527*t5937*var5[56])*var9[1];
  p_output1[2]=var4[14] - 20.*t5715*t5825*var5[2] - 60.*t4103*t5043*t5051*var5[13] + 40.*t5715*t5825*var5[13] - 60.*t4622*t4701*t4732*var5[24] + 120.*t4103*t5043*t5051*var5[24] - 20.*t5715*t5825*var5[24] - 20.*t3527*t4131*var5[35] + 120.*t4622*t4701*t4732*var5[35] - 60.*t4103*t5043*t5051*var5[35] + 40.*t3527*t4131*var5[46] - 60.*t4622*t4701*t4732*var5[46] - 20.*t3527*t4131*var5[57] + (var2[14] - 1.*t9340*var5[2] - 5.*t4103*t4713*t9267*var5[13] - 10.*t4701*t5715*t5825*var5[24] - 10.*t4131*t5043*t5051*var5[35] - 5.*t4622*t4732*t5937*var5[46] - 1.*t3527*t9294*var5[57])*var9[0] + (var3[14] + 5.*t4713*t9267*var5[2] + 20.*t4103*t5715*t5825*var5[13] - 5.*t4713*t9267*var5[13] + 30.*t4701*t5043*t5051*var5[24] - 20.*t4103*t5715*t5825*var5[24] + 20.*t4131*t4622*t4732*var5[35] - 30.*t4701*t5043*t5051*var5[35] - 20.*t4131*t4622*t4732*var5[46] + 5.*t3527*t5937*var5[46] - 5.*t3527*t5937*var5[57])*var9[1];
  p_output1[3]=var4[9] - 20.*t5715*t5825*var5[3] - 60.*t4103*t5043*t5051*var5[14] + 40.*t5715*t5825*var5[14] - 60.*t4622*t4701*t4732*var5[25] + 120.*t4103*t5043*t5051*var5[25] - 20.*t5715*t5825*var5[25] - 20.*t3527*t4131*var5[36] + 120.*t4622*t4701*t4732*var5[36] - 60.*t4103*t5043*t5051*var5[36] + 40.*t3527*t4131*var5[47] - 60.*t4622*t4701*t4732*var5[47] - 20.*t3527*t4131*var5[58] + (var2[9] - 1.*t9340*var5[3] - 5.*t4103*t4713*t9267*var5[14] - 10.*t4701*t5715*t5825*var5[25] - 10.*t4131*t5043*t5051*var5[36] - 5.*t4622*t4732*t5937*var5[47] - 1.*t3527*t9294*var5[58])*var9[0] + (var3[9] + 5.*t4713*t9267*var5[3] + 20.*t4103*t5715*t5825*var5[14] - 5.*t4713*t9267*var5[14] + 30.*t4701*t5043*t5051*var5[25] - 20.*t4103*t5715*t5825*var5[25] + 20.*t4131*t4622*t4732*var5[36] - 30.*t4701*t5043*t5051*var5[36] - 20.*t4131*t4622*t4732*var5[47] + 5.*t3527*t5937*var5[47] - 5.*t3527*t5937*var5[58])*var9[1];
  p_output1[4]=var4[11] - 20.*t5715*t5825*var5[4] - 60.*t4103*t5043*t5051*var5[15] + 40.*t5715*t5825*var5[15] - 60.*t4622*t4701*t4732*var5[26] + 120.*t4103*t5043*t5051*var5[26] - 20.*t5715*t5825*var5[26] - 20.*t3527*t4131*var5[37] + 120.*t4622*t4701*t4732*var5[37] - 60.*t4103*t5043*t5051*var5[37] + 40.*t3527*t4131*var5[48] - 60.*t4622*t4701*t4732*var5[48] - 20.*t3527*t4131*var5[59] + (var2[11] - 1.*t9340*var5[4] - 5.*t4103*t4713*t9267*var5[15] - 10.*t4701*t5715*t5825*var5[26] - 10.*t4131*t5043*t5051*var5[37] - 5.*t4622*t4732*t5937*var5[48] - 1.*t3527*t9294*var5[59])*var9[0] + (var3[11] + 5.*t4713*t9267*var5[4] + 20.*t4103*t5715*t5825*var5[15] - 5.*t4713*t9267*var5[15] + 30.*t4701*t5043*t5051*var5[26] - 20.*t4103*t5715*t5825*var5[26] + 20.*t4131*t4622*t4732*var5[37] - 30.*t4701*t5043*t5051*var5[37] - 20.*t4131*t4622*t4732*var5[48] + 5.*t3527*t5937*var5[48] - 5.*t3527*t5937*var5[59])*var9[1];
  p_output1[5]=var4[6] - 20.*t5715*t5825*var5[5] - 60.*t4103*t5043*t5051*var5[16] + 40.*t5715*t5825*var5[16] - 60.*t4622*t4701*t4732*var5[27] + 120.*t4103*t5043*t5051*var5[27] - 20.*t5715*t5825*var5[27] - 20.*t3527*t4131*var5[38] + 120.*t4622*t4701*t4732*var5[38] - 60.*t4103*t5043*t5051*var5[38] + 40.*t3527*t4131*var5[49] - 60.*t4622*t4701*t4732*var5[49] - 20.*t3527*t4131*var5[60] + (var2[6] - 1.*t9340*var5[5] - 5.*t4103*t4713*t9267*var5[16] - 10.*t4701*t5715*t5825*var5[27] - 10.*t4131*t5043*t5051*var5[38] - 5.*t4622*t4732*t5937*var5[49] - 1.*t3527*t9294*var5[60])*var9[0] + (var3[6] + 5.*t4713*t9267*var5[5] + 20.*t4103*t5715*t5825*var5[16] - 5.*t4713*t9267*var5[16] + 30.*t4701*t5043*t5051*var5[27] - 20.*t4103*t5715*t5825*var5[27] + 20.*t4131*t4622*t4732*var5[38] - 30.*t4701*t5043*t5051*var5[38] - 20.*t4131*t4622*t4732*var5[49] + 5.*t3527*t5937*var5[49] - 5.*t3527*t5937*var5[60])*var9[1];
  p_output1[6]=var4[7] - 20.*t5715*t5825*var5[6] - 60.*t4103*t5043*t5051*var5[17] + 40.*t5715*t5825*var5[17] - 60.*t4622*t4701*t4732*var5[28] + 120.*t4103*t5043*t5051*var5[28] - 20.*t5715*t5825*var5[28] - 20.*t3527*t4131*var5[39] + 120.*t4622*t4701*t4732*var5[39] - 60.*t4103*t5043*t5051*var5[39] + 40.*t3527*t4131*var5[50] - 60.*t4622*t4701*t4732*var5[50] - 20.*t3527*t4131*var5[61] + (var2[7] - 1.*t9340*var5[6] - 5.*t4103*t4713*t9267*var5[17] - 10.*t4701*t5715*t5825*var5[28] - 10.*t4131*t5043*t5051*var5[39] - 5.*t4622*t4732*t5937*var5[50] - 1.*t3527*t9294*var5[61])*var9[0] + (var3[7] + 5.*t4713*t9267*var5[6] + 20.*t4103*t5715*t5825*var5[17] - 5.*t4713*t9267*var5[17] + 30.*t4701*t5043*t5051*var5[28] - 20.*t4103*t5715*t5825*var5[28] + 20.*t4131*t4622*t4732*var5[39] - 30.*t4701*t5043*t5051*var5[39] - 20.*t4131*t4622*t4732*var5[50] + 5.*t3527*t5937*var5[50] - 5.*t3527*t5937*var5[61])*var9[1];
  p_output1[7]=var4[8] - 20.*t5715*t5825*var5[7] - 60.*t4103*t5043*t5051*var5[18] + 40.*t5715*t5825*var5[18] - 60.*t4622*t4701*t4732*var5[29] + 120.*t4103*t5043*t5051*var5[29] - 20.*t5715*t5825*var5[29] - 20.*t3527*t4131*var5[40] + 120.*t4622*t4701*t4732*var5[40] - 60.*t4103*t5043*t5051*var5[40] + 40.*t3527*t4131*var5[51] - 60.*t4622*t4701*t4732*var5[51] - 20.*t3527*t4131*var5[62] + (var2[8] - 1.*t9340*var5[7] - 5.*t4103*t4713*t9267*var5[18] - 10.*t4701*t5715*t5825*var5[29] - 10.*t4131*t5043*t5051*var5[40] - 5.*t4622*t4732*t5937*var5[51] - 1.*t3527*t9294*var5[62])*var9[0] + (var3[8] + 5.*t4713*t9267*var5[7] + 20.*t4103*t5715*t5825*var5[18] - 5.*t4713*t9267*var5[18] + 30.*t4701*t5043*t5051*var5[29] - 20.*t4103*t5715*t5825*var5[29] + 20.*t4131*t4622*t4732*var5[40] - 30.*t4701*t5043*t5051*var5[40] - 20.*t4131*t4622*t4732*var5[51] + 5.*t3527*t5937*var5[51] - 5.*t3527*t5937*var5[62])*var9[1];
  p_output1[8]=var4[15] - 20.*t5715*t5825*var5[8] - 60.*t4103*t5043*t5051*var5[19] + 40.*t5715*t5825*var5[19] - 60.*t4622*t4701*t4732*var5[30] + 120.*t4103*t5043*t5051*var5[30] - 20.*t5715*t5825*var5[30] - 20.*t3527*t4131*var5[41] + 120.*t4622*t4701*t4732*var5[41] - 60.*t4103*t5043*t5051*var5[41] + 40.*t3527*t4131*var5[52] - 60.*t4622*t4701*t4732*var5[52] - 20.*t3527*t4131*var5[63] + (var2[15] - 1.*t9340*var5[8] - 5.*t4103*t4713*t9267*var5[19] - 10.*t4701*t5715*t5825*var5[30] - 10.*t4131*t5043*t5051*var5[41] - 5.*t4622*t4732*t5937*var5[52] - 1.*t3527*t9294*var5[63])*var9[0] + (var3[15] + 5.*t4713*t9267*var5[8] + 20.*t4103*t5715*t5825*var5[19] - 5.*t4713*t9267*var5[19] + 30.*t4701*t5043*t5051*var5[30] - 20.*t4103*t5715*t5825*var5[30] + 20.*t4131*t4622*t4732*var5[41] - 30.*t4701*t5043*t5051*var5[41] - 20.*t4131*t4622*t4732*var5[52] + 5.*t3527*t5937*var5[52] - 5.*t3527*t5937*var5[63])*var9[1];
  p_output1[9]=var4[16] - 20.*t5715*t5825*var5[9] - 60.*t4103*t5043*t5051*var5[20] + 40.*t5715*t5825*var5[20] - 60.*t4622*t4701*t4732*var5[31] + 120.*t4103*t5043*t5051*var5[31] - 20.*t5715*t5825*var5[31] - 20.*t3527*t4131*var5[42] + 120.*t4622*t4701*t4732*var5[42] - 60.*t4103*t5043*t5051*var5[42] + 40.*t3527*t4131*var5[53] - 60.*t4622*t4701*t4732*var5[53] - 20.*t3527*t4131*var5[64] + (var2[16] - 1.*t9340*var5[9] - 5.*t4103*t4713*t9267*var5[20] - 10.*t4701*t5715*t5825*var5[31] - 10.*t4131*t5043*t5051*var5[42] - 5.*t4622*t4732*t5937*var5[53] - 1.*t3527*t9294*var5[64])*var9[0] + (var3[16] + 5.*t4713*t9267*var5[9] + 20.*t4103*t5715*t5825*var5[20] - 5.*t4713*t9267*var5[20] + 30.*t4701*t5043*t5051*var5[31] - 20.*t4103*t5715*t5825*var5[31] + 20.*t4131*t4622*t4732*var5[42] - 30.*t4701*t5043*t5051*var5[42] - 20.*t4131*t4622*t4732*var5[53] + 5.*t3527*t5937*var5[53] - 5.*t3527*t5937*var5[64])*var9[1];
  p_output1[10]=var4[17] - 20.*t5715*t5825*var5[10] - 60.*t4103*t5043*t5051*var5[21] + 40.*t5715*t5825*var5[21] - 60.*t4622*t4701*t4732*var5[32] + 120.*t4103*t5043*t5051*var5[32] - 20.*t5715*t5825*var5[32] - 20.*t3527*t4131*var5[43] + 120.*t4622*t4701*t4732*var5[43] - 60.*t4103*t5043*t5051*var5[43] + 40.*t3527*t4131*var5[54] - 60.*t4622*t4701*t4732*var5[54] - 20.*t3527*t4131*var5[65] + (var2[17] - 1.*t9340*var5[10] - 5.*t4103*t4713*t9267*var5[21] - 10.*t4701*t5715*t5825*var5[32] - 10.*t4131*t5043*t5051*var5[43] - 5.*t4622*t4732*t5937*var5[54] - 1.*t3527*t9294*var5[65])*var9[0] + (var3[17] + 5.*t4713*t9267*var5[10] + 20.*t4103*t5715*t5825*var5[21] - 5.*t4713*t9267*var5[21] + 30.*t4701*t5043*t5051*var5[32] - 20.*t4103*t5715*t5825*var5[32] + 20.*t4131*t4622*t4732*var5[43] - 30.*t4701*t5043*t5051*var5[43] - 20.*t4131*t4622*t4732*var5[54] + 5.*t3527*t5937*var5[54] - 5.*t3527*t5937*var5[65])*var9[1];
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7,*var8,*var9;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 9)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Nine input(s) required (var1,var2,var3,var4,var5,var6,var7,var8,var9).");
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
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 66 && ncols == 1) && 
      !(mrows == 1 && ncols == 66))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }
  mrows = mxGetM(prhs[6]);
  ncols = mxGetN(prhs[6]);
  if( !mxIsDouble(prhs[6]) || mxIsComplex(prhs[6]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var7 is wrong.");
    }
  mrows = mxGetM(prhs[7]);
  ncols = mxGetN(prhs[7]);
  if( !mxIsDouble(prhs[7]) || mxIsComplex(prhs[7]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var8 is wrong.");
    }
  mrows = mxGetM(prhs[8]);
  ncols = mxGetN(prhs[8]);
  if( !mxIsDouble(prhs[8]) || mxIsComplex(prhs[8]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var9 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
  var8 = mxGetPr(prhs[7]);
  var9 = mxGetPr(prhs[8]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 11, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7,var8,var9);


}

#else // MATLAB_MEX_FILE

#include "d2y_position_DiagonalStance.hh"

namespace DiagonalStance
{

void d2y_position_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8,const double *var9)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8, var9);

}

}

#endif // MATLAB_MEX_FILE