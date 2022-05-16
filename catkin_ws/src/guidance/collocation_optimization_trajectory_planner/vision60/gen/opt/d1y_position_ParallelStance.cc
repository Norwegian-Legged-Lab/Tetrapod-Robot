/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:33:38 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  double t4157;
  double t5157;
  double t5160;
  double t5426;
  double t6000;
  double t6121;
  double t6224;
  double t6780;
  double t6970;
  double t6974;
  double t7049;
  double t7118;
  double t7125;
  double t7222;
  double t7235;
  double t7245;
  double t7306;
  double t7311;
  double t7312;
  double t7338;
  double t7342;
  double t7373;
  t4157 = -1.*var5[0];
  t5157 = t4157 + var5[1];
  t5160 = Power(t5157,-5);
  t5426 = -1. + var6[0];
  t6000 = -1. + var7[0];
  t6121 = 1/t6000;
  t6224 = -1.*var1[0];
  t6780 = t6224 + var1[1];
  t6970 = t5426*t6121*t6780;
  t6974 = t4157 + var1[0] + t6970;
  t7049 = Power(t6974,4);
  t7118 = Power(t5157,-4);
  t7125 = Power(t6974,3);
  t7222 = 1/t5157;
  t7235 = -1.*t7222*t6974;
  t7245 = 1. + t7235;
  t7306 = Power(t5157,-3);
  t7311 = Power(t6974,2);
  t7312 = Power(t7245,2);
  t7338 = Power(t5157,-2);
  t7342 = Power(t7245,3);
  t7373 = Power(t7245,4);
  p_output1[0]=var3[12] + 5.*t7222*t7373*var4[0] + 20.*t6974*t7338*t7342*var4[11] - 5.*t7222*t7373*var4[11] + 30.*t7306*t7311*t7312*var4[22] - 20.*t6974*t7338*t7342*var4[22] + 20.*t7118*t7125*t7245*var4[33] - 30.*t7306*t7311*t7312*var4[33] + 5.*t5160*t7049*var4[44] - 20.*t7118*t7125*t7245*var4[44] - 5.*t5160*t7049*var4[55];
  p_output1[1]=var3[13] + 5.*t7222*t7373*var4[1] + 20.*t6974*t7338*t7342*var4[12] - 5.*t7222*t7373*var4[12] + 30.*t7306*t7311*t7312*var4[23] - 20.*t6974*t7338*t7342*var4[23] + 20.*t7118*t7125*t7245*var4[34] - 30.*t7306*t7311*t7312*var4[34] + 5.*t5160*t7049*var4[45] - 20.*t7118*t7125*t7245*var4[45] - 5.*t5160*t7049*var4[56];
  p_output1[2]=var3[14] + 5.*t7222*t7373*var4[2] + 20.*t6974*t7338*t7342*var4[13] - 5.*t7222*t7373*var4[13] + 30.*t7306*t7311*t7312*var4[24] - 20.*t6974*t7338*t7342*var4[24] + 20.*t7118*t7125*t7245*var4[35] - 30.*t7306*t7311*t7312*var4[35] + 5.*t5160*t7049*var4[46] - 20.*t7118*t7125*t7245*var4[46] - 5.*t5160*t7049*var4[57];
  p_output1[3]=var3[15] + 5.*t7222*t7373*var4[3] + 20.*t6974*t7338*t7342*var4[14] - 5.*t7222*t7373*var4[14] + 30.*t7306*t7311*t7312*var4[25] - 20.*t6974*t7338*t7342*var4[25] + 20.*t7118*t7125*t7245*var4[36] - 30.*t7306*t7311*t7312*var4[36] + 5.*t5160*t7049*var4[47] - 20.*t7118*t7125*t7245*var4[47] - 5.*t5160*t7049*var4[58];
  p_output1[4]=var3[17] + 5.*t7222*t7373*var4[4] + 20.*t6974*t7338*t7342*var4[15] - 5.*t7222*t7373*var4[15] + 30.*t7306*t7311*t7312*var4[26] - 20.*t6974*t7338*t7342*var4[26] + 20.*t7118*t7125*t7245*var4[37] - 30.*t7306*t7311*t7312*var4[37] + 5.*t5160*t7049*var4[48] - 20.*t7118*t7125*t7245*var4[48] - 5.*t5160*t7049*var4[59];
  p_output1[5]=var3[6] + 5.*t7222*t7373*var4[5] + 20.*t6974*t7338*t7342*var4[16] - 5.*t7222*t7373*var4[16] + 30.*t7306*t7311*t7312*var4[27] - 20.*t6974*t7338*t7342*var4[27] + 20.*t7118*t7125*t7245*var4[38] - 30.*t7306*t7311*t7312*var4[38] + 5.*t5160*t7049*var4[49] - 20.*t7118*t7125*t7245*var4[49] - 5.*t5160*t7049*var4[60];
  p_output1[6]=var3[7] + 5.*t7222*t7373*var4[6] + 20.*t6974*t7338*t7342*var4[17] - 5.*t7222*t7373*var4[17] + 30.*t7306*t7311*t7312*var4[28] - 20.*t6974*t7338*t7342*var4[28] + 20.*t7118*t7125*t7245*var4[39] - 30.*t7306*t7311*t7312*var4[39] + 5.*t5160*t7049*var4[50] - 20.*t7118*t7125*t7245*var4[50] - 5.*t5160*t7049*var4[61];
  p_output1[7]=var3[8] + 5.*t7222*t7373*var4[7] + 20.*t6974*t7338*t7342*var4[18] - 5.*t7222*t7373*var4[18] + 30.*t7306*t7311*t7312*var4[29] - 20.*t6974*t7338*t7342*var4[29] + 20.*t7118*t7125*t7245*var4[40] - 30.*t7306*t7311*t7312*var4[40] + 5.*t5160*t7049*var4[51] - 20.*t7118*t7125*t7245*var4[51] - 5.*t5160*t7049*var4[62];
  p_output1[8]=var3[9] + 5.*t7222*t7373*var4[8] + 20.*t6974*t7338*t7342*var4[19] - 5.*t7222*t7373*var4[19] + 30.*t7306*t7311*t7312*var4[30] - 20.*t6974*t7338*t7342*var4[30] + 20.*t7118*t7125*t7245*var4[41] - 30.*t7306*t7311*t7312*var4[41] + 5.*t5160*t7049*var4[52] - 20.*t7118*t7125*t7245*var4[52] - 5.*t5160*t7049*var4[63];
  p_output1[9]=var3[10] + 5.*t7222*t7373*var4[9] + 20.*t6974*t7338*t7342*var4[20] - 5.*t7222*t7373*var4[20] + 30.*t7306*t7311*t7312*var4[31] - 20.*t6974*t7338*t7342*var4[31] + 20.*t7118*t7125*t7245*var4[42] - 30.*t7306*t7311*t7312*var4[42] + 5.*t5160*t7049*var4[53] - 20.*t7118*t7125*t7245*var4[53] - 5.*t5160*t7049*var4[64];
  p_output1[10]=var3[11] + 5.*t7222*t7373*var4[10] + 20.*t6974*t7338*t7342*var4[21] - 5.*t7222*t7373*var4[21] + 30.*t7306*t7311*t7312*var4[32] - 20.*t6974*t7338*t7342*var4[32] + 20.*t7118*t7125*t7245*var4[43] - 30.*t7306*t7311*t7312*var4[43] + 5.*t5160*t7049*var4[54] - 20.*t7118*t7125*t7245*var4[54] - 5.*t5160*t7049*var4[65];
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 7)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Seven input(s) required (var1,var2,var3,var4,var5,var6,var7).");
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
    ( !(mrows == 66 && ncols == 1) && 
      !(mrows == 1 && ncols == 66))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 11, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7);


}

#else // MATLAB_MEX_FILE

#include "d1y_position_ParallelStance.hh"

namespace ParallelStance
{

void d1y_position_ParallelStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7);

}

}

#endif // MATLAB_MEX_FILE
