/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 20:17:53 GMT+01:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  double t20;
  double t32;
  double t42;
  double t43;
  double t50;
  double t69;
  double t88;
  double t99;
  double t119;
  double t137;
  double t150;
  double t155;
  double t177;
  double t189;
  double t198;
  double t212;
  double t236;
  double t241;
  double t258;
  double t278;
  double t290;
  double t303;
  t20 = -1. + var8[0];
  t32 = 1/t20;
  t42 = -1.*var1[0];
  t43 = t42 + var1[1];
  t50 = -1.*var2[0];
  t69 = -1.*var2[1];
  t88 = -1.*var2[2];
  t99 = -1.*var2[3];
  t119 = -1.*var2[4];
  t137 = -1.*var2[5];
  t150 = -1.*var2[6];
  t155 = -1.*var2[7];
  t177 = -1.*var2[8];
  t189 = -1.*var2[9];
  t198 = -1.*var2[10];
  t212 = -1.*var2[11];
  t236 = -1.*var2[12];
  t241 = -1.*var2[13];
  t258 = -1.*var2[14];
  t278 = -1.*var2[15];
  t290 = -1.*var2[16];
  t303 = -1.*var2[17];
  p_output1[0]=t50 + var6[0] - 0.333333333333333*t32*t43*(var3[0] + 4.*var5[0] + var7[0]);
  p_output1[1]=t69 + var6[1] - 0.333333333333333*t32*t43*(var3[1] + 4.*var5[1] + var7[1]);
  p_output1[2]=t88 + var6[2] - 0.333333333333333*t32*t43*(var3[2] + 4.*var5[2] + var7[2]);
  p_output1[3]=t99 + var6[3] - 0.333333333333333*t32*t43*(var3[3] + 4.*var5[3] + var7[3]);
  p_output1[4]=t119 + var6[4] - 0.333333333333333*t32*t43*(var3[4] + 4.*var5[4] + var7[4]);
  p_output1[5]=t137 + var6[5] - 0.333333333333333*t32*t43*(var3[5] + 4.*var5[5] + var7[5]);
  p_output1[6]=t150 + var6[6] - 0.333333333333333*t32*t43*(var3[6] + 4.*var5[6] + var7[6]);
  p_output1[7]=t155 + var6[7] - 0.333333333333333*t32*t43*(var3[7] + 4.*var5[7] + var7[7]);
  p_output1[8]=t177 + var6[8] - 0.333333333333333*t32*t43*(var3[8] + 4.*var5[8] + var7[8]);
  p_output1[9]=t189 + var6[9] - 0.333333333333333*t32*t43*(var3[9] + 4.*var5[9] + var7[9]);
  p_output1[10]=t198 + var6[10] - 0.333333333333333*t32*t43*(var3[10] + 4.*var5[10] + var7[10]);
  p_output1[11]=t212 + var6[11] - 0.333333333333333*t32*t43*(var3[11] + 4.*var5[11] + var7[11]);
  p_output1[12]=t236 + var6[12] - 0.333333333333333*t32*t43*(var3[12] + 4.*var5[12] + var7[12]);
  p_output1[13]=t241 + var6[13] - 0.333333333333333*t32*t43*(var3[13] + 4.*var5[13] + var7[13]);
  p_output1[14]=t258 + var6[14] - 0.333333333333333*t32*t43*(var3[14] + 4.*var5[14] + var7[14]);
  p_output1[15]=t278 + var6[15] - 0.333333333333333*t32*t43*(var3[15] + 4.*var5[15] + var7[15]);
  p_output1[16]=t290 + var6[16] - 0.333333333333333*t32*t43*(var3[16] + 4.*var5[16] + var7[16]);
  p_output1[17]=t303 + var6[17] - 0.333333333333333*t32*t43*(var3[17] + 4.*var5[17] + var7[17]);
  p_output1[18]=var4[0] + 0.5*(t50 - 1.*var6[0]) - 0.25*t32*t43*(var3[0] - 1.*var7[0]);
  p_output1[19]=var4[1] + 0.5*(t69 - 1.*var6[1]) - 0.25*t32*t43*(var3[1] - 1.*var7[1]);
  p_output1[20]=var4[2] + 0.5*(t88 - 1.*var6[2]) - 0.25*t32*t43*(var3[2] - 1.*var7[2]);
  p_output1[21]=var4[3] + 0.5*(t99 - 1.*var6[3]) - 0.25*t32*t43*(var3[3] - 1.*var7[3]);
  p_output1[22]=var4[4] + 0.5*(t119 - 1.*var6[4]) - 0.25*t32*t43*(var3[4] - 1.*var7[4]);
  p_output1[23]=var4[5] + 0.5*(t137 - 1.*var6[5]) - 0.25*t32*t43*(var3[5] - 1.*var7[5]);
  p_output1[24]=var4[6] + 0.5*(t150 - 1.*var6[6]) - 0.25*t32*t43*(var3[6] - 1.*var7[6]);
  p_output1[25]=var4[7] + 0.5*(t155 - 1.*var6[7]) - 0.25*t32*t43*(var3[7] - 1.*var7[7]);
  p_output1[26]=var4[8] + 0.5*(t177 - 1.*var6[8]) - 0.25*t32*t43*(var3[8] - 1.*var7[8]);
  p_output1[27]=var4[9] + 0.5*(t189 - 1.*var6[9]) - 0.25*t32*t43*(var3[9] - 1.*var7[9]);
  p_output1[28]=var4[10] + 0.5*(t198 - 1.*var6[10]) - 0.25*t32*t43*(var3[10] - 1.*var7[10]);
  p_output1[29]=var4[11] + 0.5*(t212 - 1.*var6[11]) - 0.25*t32*t43*(var3[11] - 1.*var7[11]);
  p_output1[30]=var4[12] + 0.5*(t236 - 1.*var6[12]) - 0.25*t32*t43*(var3[12] - 1.*var7[12]);
  p_output1[31]=var4[13] + 0.5*(t241 - 1.*var6[13]) - 0.25*t32*t43*(var3[13] - 1.*var7[13]);
  p_output1[32]=var4[14] + 0.5*(t258 - 1.*var6[14]) - 0.25*t32*t43*(var3[14] - 1.*var7[14]);
  p_output1[33]=var4[15] + 0.5*(t278 - 1.*var6[15]) - 0.25*t32*t43*(var3[15] - 1.*var7[15]);
  p_output1[34]=var4[16] + 0.5*(t290 - 1.*var6[16]) - 0.25*t32*t43*(var3[16] - 1.*var7[16]);
  p_output1[35]=var4[17] + 0.5*(t303 - 1.*var6[17]) - 0.25*t32*t43*(var3[17] - 1.*var7[17]);
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7,*var8;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 8)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Eight input(s) required (var1,var2,var3,var4,var5,var6,var7,var8).");
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
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }
  mrows = mxGetM(prhs[6]);
  ncols = mxGetN(prhs[6]);
  if( !mxIsDouble(prhs[6]) || mxIsComplex(prhs[6]) ||
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
  var8 = mxGetPr(prhs[7]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 36, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7,var8);


}

#else // MATLAB_MEX_FILE

#include "hs_int_x.hh"

namespace TrotStance2
{

void hs_int_x_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8);

}

}

#endif // MATLAB_MEX_FILE
