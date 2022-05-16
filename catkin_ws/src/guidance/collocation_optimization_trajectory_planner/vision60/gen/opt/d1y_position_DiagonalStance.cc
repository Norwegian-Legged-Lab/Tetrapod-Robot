/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:46:46 GMT+02:00
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
  double t149;
  double t150;
  double t178;
  double t190;
  double t196;
  double t201;
  double t202;
  double t214;
  double t298;
  double t419;
  double t428;
  double t600;
  double t658;
  double t757;
  double t789;
  double t810;
  double t944;
  double t994;
  double t1010;
  double t1079;
  double t1088;
  double t1438;
  t149 = -1.*var5[0];
  t150 = t149 + var5[1];
  t178 = Power(t150,-5);
  t190 = -1. + var6[0];
  t196 = -1. + var7[0];
  t201 = 1/t196;
  t202 = -1.*var1[0];
  t214 = t202 + var1[1];
  t298 = t190*t201*t214;
  t419 = t149 + var1[0] + t298;
  t428 = Power(t419,4);
  t600 = Power(t150,-4);
  t658 = Power(t419,3);
  t757 = 1/t150;
  t789 = -1.*t757*t419;
  t810 = 1. + t789;
  t944 = Power(t150,-3);
  t994 = Power(t419,2);
  t1010 = Power(t810,2);
  t1079 = Power(t150,-2);
  t1088 = Power(t810,3);
  t1438 = Power(t810,4);
  p_output1[0]=var3[12] + 5.*t1438*t757*var4[0] + 20.*t1079*t1088*t419*var4[11] - 5.*t1438*t757*var4[11] - 20.*t1079*t1088*t419*var4[22] + 30.*t1010*t944*t994*var4[22] + 20.*t600*t658*t810*var4[33] - 30.*t1010*t944*t994*var4[33] + 5.*t178*t428*var4[44] - 20.*t600*t658*t810*var4[44] - 5.*t178*t428*var4[55];
  p_output1[1]=var3[13] + 5.*t1438*t757*var4[1] + 20.*t1079*t1088*t419*var4[12] - 5.*t1438*t757*var4[12] - 20.*t1079*t1088*t419*var4[23] + 30.*t1010*t944*t994*var4[23] + 20.*t600*t658*t810*var4[34] - 30.*t1010*t944*t994*var4[34] + 5.*t178*t428*var4[45] - 20.*t600*t658*t810*var4[45] - 5.*t178*t428*var4[56];
  p_output1[2]=var3[14] + 5.*t1438*t757*var4[2] + 20.*t1079*t1088*t419*var4[13] - 5.*t1438*t757*var4[13] - 20.*t1079*t1088*t419*var4[24] + 30.*t1010*t944*t994*var4[24] + 20.*t600*t658*t810*var4[35] - 30.*t1010*t944*t994*var4[35] + 5.*t178*t428*var4[46] - 20.*t600*t658*t810*var4[46] - 5.*t178*t428*var4[57];
  p_output1[3]=var3[9] + 5.*t1438*t757*var4[3] + 20.*t1079*t1088*t419*var4[14] - 5.*t1438*t757*var4[14] - 20.*t1079*t1088*t419*var4[25] + 30.*t1010*t944*t994*var4[25] + 20.*t600*t658*t810*var4[36] - 30.*t1010*t944*t994*var4[36] + 5.*t178*t428*var4[47] - 20.*t600*t658*t810*var4[47] - 5.*t178*t428*var4[58];
  p_output1[4]=var3[11] + 5.*t1438*t757*var4[4] + 20.*t1079*t1088*t419*var4[15] - 5.*t1438*t757*var4[15] - 20.*t1079*t1088*t419*var4[26] + 30.*t1010*t944*t994*var4[26] + 20.*t600*t658*t810*var4[37] - 30.*t1010*t944*t994*var4[37] + 5.*t178*t428*var4[48] - 20.*t600*t658*t810*var4[48] - 5.*t178*t428*var4[59];
  p_output1[5]=var3[6] + 5.*t1438*t757*var4[5] + 20.*t1079*t1088*t419*var4[16] - 5.*t1438*t757*var4[16] - 20.*t1079*t1088*t419*var4[27] + 30.*t1010*t944*t994*var4[27] + 20.*t600*t658*t810*var4[38] - 30.*t1010*t944*t994*var4[38] + 5.*t178*t428*var4[49] - 20.*t600*t658*t810*var4[49] - 5.*t178*t428*var4[60];
  p_output1[6]=var3[7] + 5.*t1438*t757*var4[6] + 20.*t1079*t1088*t419*var4[17] - 5.*t1438*t757*var4[17] - 20.*t1079*t1088*t419*var4[28] + 30.*t1010*t944*t994*var4[28] + 20.*t600*t658*t810*var4[39] - 30.*t1010*t944*t994*var4[39] + 5.*t178*t428*var4[50] - 20.*t600*t658*t810*var4[50] - 5.*t178*t428*var4[61];
  p_output1[7]=var3[8] + 5.*t1438*t757*var4[7] + 20.*t1079*t1088*t419*var4[18] - 5.*t1438*t757*var4[18] - 20.*t1079*t1088*t419*var4[29] + 30.*t1010*t944*t994*var4[29] + 20.*t600*t658*t810*var4[40] - 30.*t1010*t944*t994*var4[40] + 5.*t178*t428*var4[51] - 20.*t600*t658*t810*var4[51] - 5.*t178*t428*var4[62];
  p_output1[8]=var3[15] + 5.*t1438*t757*var4[8] + 20.*t1079*t1088*t419*var4[19] - 5.*t1438*t757*var4[19] - 20.*t1079*t1088*t419*var4[30] + 30.*t1010*t944*t994*var4[30] + 20.*t600*t658*t810*var4[41] - 30.*t1010*t944*t994*var4[41] + 5.*t178*t428*var4[52] - 20.*t600*t658*t810*var4[52] - 5.*t178*t428*var4[63];
  p_output1[9]=var3[16] + 5.*t1438*t757*var4[9] + 20.*t1079*t1088*t419*var4[20] - 5.*t1438*t757*var4[20] - 20.*t1079*t1088*t419*var4[31] + 30.*t1010*t944*t994*var4[31] + 20.*t600*t658*t810*var4[42] - 30.*t1010*t944*t994*var4[42] + 5.*t178*t428*var4[53] - 20.*t600*t658*t810*var4[53] - 5.*t178*t428*var4[64];
  p_output1[10]=var3[17] + 5.*t1438*t757*var4[10] + 20.*t1079*t1088*t419*var4[21] - 5.*t1438*t757*var4[21] - 20.*t1079*t1088*t419*var4[32] + 30.*t1010*t944*t994*var4[32] + 20.*t600*t658*t810*var4[43] - 30.*t1010*t944*t994*var4[43] + 5.*t178*t428*var4[54] - 20.*t600*t658*t810*var4[54] - 5.*t178*t428*var4[65];
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

#include "d1y_position_DiagonalStance.hh"

namespace DiagonalStance
{

void d1y_position_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7);

}

}

#endif // MATLAB_MEX_FILE