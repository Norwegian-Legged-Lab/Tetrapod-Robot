/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:43:02 GMT+02:00
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
  double t1740;
  double t2069;
  double t2120;
  double t2177;
  double t1293;
  double t2274;
  double t2616;
  double t2861;
  double t3672;
  double t4126;
  double t4529;
  double t4840;
  double t4994;
  double t5135;
  double t5312;
  double t8710;
  double t10513;
  double t13113;
  double t14776;
  double t15491;
  double t17603;
  double t18569;
  t1740 = -1. + var8[0];
  t2069 = 1/t1740;
  t2120 = -1.*var1[0];
  t2177 = t2120 + var1[1];
  t1293 = -1.*var2[0];
  t2274 = -1.*var2[1];
  t2616 = -1.*var2[2];
  t2861 = -1.*var2[3];
  t3672 = -1.*var2[4];
  t4126 = -1.*var2[5];
  t4529 = -1.*var2[6];
  t4840 = -1.*var2[7];
  t4994 = -1.*var2[8];
  t5135 = -1.*var2[9];
  t5312 = -1.*var2[10];
  t8710 = -1.*var2[11];
  t10513 = -1.*var2[12];
  t13113 = -1.*var2[13];
  t14776 = -1.*var2[14];
  t15491 = -1.*var2[15];
  t17603 = -1.*var2[16];
  t18569 = -1.*var2[17];
  p_output1[0]=t1293 + var6[0] - 0.333333333333333*t2069*t2177*(var3[0] + 4.*var5[0] + var7[0]);
  p_output1[1]=t2274 + var6[1] - 0.333333333333333*t2069*t2177*(var3[1] + 4.*var5[1] + var7[1]);
  p_output1[2]=t2616 + var6[2] - 0.333333333333333*t2069*t2177*(var3[2] + 4.*var5[2] + var7[2]);
  p_output1[3]=t2861 + var6[3] - 0.333333333333333*t2069*t2177*(var3[3] + 4.*var5[3] + var7[3]);
  p_output1[4]=t3672 + var6[4] - 0.333333333333333*t2069*t2177*(var3[4] + 4.*var5[4] + var7[4]);
  p_output1[5]=t4126 + var6[5] - 0.333333333333333*t2069*t2177*(var3[5] + 4.*var5[5] + var7[5]);
  p_output1[6]=t4529 + var6[6] - 0.333333333333333*t2069*t2177*(var3[6] + 4.*var5[6] + var7[6]);
  p_output1[7]=t4840 + var6[7] - 0.333333333333333*t2069*t2177*(var3[7] + 4.*var5[7] + var7[7]);
  p_output1[8]=t4994 + var6[8] - 0.333333333333333*t2069*t2177*(var3[8] + 4.*var5[8] + var7[8]);
  p_output1[9]=t5135 + var6[9] - 0.333333333333333*t2069*t2177*(var3[9] + 4.*var5[9] + var7[9]);
  p_output1[10]=t5312 + var6[10] - 0.333333333333333*t2069*t2177*(var3[10] + 4.*var5[10] + var7[10]);
  p_output1[11]=t8710 + var6[11] - 0.333333333333333*t2069*t2177*(var3[11] + 4.*var5[11] + var7[11]);
  p_output1[12]=t10513 + var6[12] - 0.333333333333333*t2069*t2177*(var3[12] + 4.*var5[12] + var7[12]);
  p_output1[13]=t13113 + var6[13] - 0.333333333333333*t2069*t2177*(var3[13] + 4.*var5[13] + var7[13]);
  p_output1[14]=t14776 + var6[14] - 0.333333333333333*t2069*t2177*(var3[14] + 4.*var5[14] + var7[14]);
  p_output1[15]=t15491 + var6[15] - 0.333333333333333*t2069*t2177*(var3[15] + 4.*var5[15] + var7[15]);
  p_output1[16]=t17603 + var6[16] - 0.333333333333333*t2069*t2177*(var3[16] + 4.*var5[16] + var7[16]);
  p_output1[17]=t18569 + var6[17] - 0.333333333333333*t2069*t2177*(var3[17] + 4.*var5[17] + var7[17]);
  p_output1[18]=var4[0] + 0.5*(t1293 - 1.*var6[0]) - 0.25*t2069*t2177*(var3[0] - 1.*var7[0]);
  p_output1[19]=var4[1] + 0.5*(t2274 - 1.*var6[1]) - 0.25*t2069*t2177*(var3[1] - 1.*var7[1]);
  p_output1[20]=var4[2] + 0.5*(t2616 - 1.*var6[2]) - 0.25*t2069*t2177*(var3[2] - 1.*var7[2]);
  p_output1[21]=var4[3] + 0.5*(t2861 - 1.*var6[3]) - 0.25*t2069*t2177*(var3[3] - 1.*var7[3]);
  p_output1[22]=var4[4] + 0.5*(t3672 - 1.*var6[4]) - 0.25*t2069*t2177*(var3[4] - 1.*var7[4]);
  p_output1[23]=var4[5] + 0.5*(t4126 - 1.*var6[5]) - 0.25*t2069*t2177*(var3[5] - 1.*var7[5]);
  p_output1[24]=var4[6] + 0.5*(t4529 - 1.*var6[6]) - 0.25*t2069*t2177*(var3[6] - 1.*var7[6]);
  p_output1[25]=var4[7] + 0.5*(t4840 - 1.*var6[7]) - 0.25*t2069*t2177*(var3[7] - 1.*var7[7]);
  p_output1[26]=var4[8] + 0.5*(t4994 - 1.*var6[8]) - 0.25*t2069*t2177*(var3[8] - 1.*var7[8]);
  p_output1[27]=var4[9] + 0.5*(t5135 - 1.*var6[9]) - 0.25*t2069*t2177*(var3[9] - 1.*var7[9]);
  p_output1[28]=var4[10] + 0.5*(t5312 - 1.*var6[10]) - 0.25*t2069*t2177*(var3[10] - 1.*var7[10]);
  p_output1[29]=var4[11] + 0.5*(t8710 - 1.*var6[11]) - 0.25*t2069*t2177*(var3[11] - 1.*var7[11]);
  p_output1[30]=var4[12] + 0.5*(t10513 - 1.*var6[12]) - 0.25*t2069*t2177*(var3[12] - 1.*var7[12]);
  p_output1[31]=var4[13] + 0.5*(t13113 - 1.*var6[13]) - 0.25*t2069*t2177*(var3[13] - 1.*var7[13]);
  p_output1[32]=var4[14] + 0.5*(t14776 - 1.*var6[14]) - 0.25*t2069*t2177*(var3[14] - 1.*var7[14]);
  p_output1[33]=var4[15] + 0.5*(t15491 - 1.*var6[15]) - 0.25*t2069*t2177*(var3[15] - 1.*var7[15]);
  p_output1[34]=var4[16] + 0.5*(t17603 - 1.*var6[16]) - 0.25*t2069*t2177*(var3[16] - 1.*var7[16]);
  p_output1[35]=var4[17] + 0.5*(t18569 - 1.*var6[17]) - 0.25*t2069*t2177*(var3[17] - 1.*var7[17]);
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

#include "hs_int_dx.hh"

namespace ParallelStance
{

void hs_int_dx_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8);

}

}

#endif // MATLAB_MEX_FILE
