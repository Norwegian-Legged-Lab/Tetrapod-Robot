/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:48:09 GMT+02:00
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
  double t450;
  double t1029;
  double t1030;
  double t1095;
  double t1106;
  double t1197;
  double t1200;
  double t1220;
  double t1227;
  double t1240;
  double t1241;
  double t1253;
  double t1277;
  double t1281;
  double t1282;
  double t3036;
  double t3623;
  double t3860;
  double t3906;
  double t18547;
  double t19113;
  double t20401;
  t450 = -1.*var5[0];
  t1029 = t450 + var5[1];
  t1030 = Power(t1029,-5);
  t1095 = -1. + var6[0];
  t1106 = -1. + var7[0];
  t1197 = 1/t1106;
  t1200 = -1.*var1[0];
  t1220 = t1200 + var1[1];
  t1227 = t1095*t1197*t1220;
  t1240 = t450 + var1[0] + t1227;
  t1241 = Power(t1240,4);
  t1253 = Power(t1029,-4);
  t1277 = Power(t1240,3);
  t1281 = 1/t1029;
  t1282 = -1.*t1281*t1240;
  t3036 = 1. + t1282;
  t3623 = Power(t1029,-3);
  t3860 = Power(t1240,2);
  t3906 = Power(t3036,2);
  t18547 = Power(t1029,-2);
  t19113 = Power(t3036,3);
  t20401 = Power(t3036,4);
  p_output1[0]=var3[12] + 5.*t1281*t20401*var4[0] + 20.*t1240*t18547*t19113*var4[11] - 5.*t1281*t20401*var4[11] - 20.*t1240*t18547*t19113*var4[22] + 30.*t3623*t3860*t3906*var4[22] + 20.*t1253*t1277*t3036*var4[33] - 30.*t3623*t3860*t3906*var4[33] + 5.*t1030*t1241*var4[44] - 20.*t1253*t1277*t3036*var4[44] - 5.*t1030*t1241*var4[55];
  p_output1[1]=var3[13] + 5.*t1281*t20401*var4[1] + 20.*t1240*t18547*t19113*var4[12] - 5.*t1281*t20401*var4[12] - 20.*t1240*t18547*t19113*var4[23] + 30.*t3623*t3860*t3906*var4[23] + 20.*t1253*t1277*t3036*var4[34] - 30.*t3623*t3860*t3906*var4[34] + 5.*t1030*t1241*var4[45] - 20.*t1253*t1277*t3036*var4[45] - 5.*t1030*t1241*var4[56];
  p_output1[2]=var3[14] + 5.*t1281*t20401*var4[2] + 20.*t1240*t18547*t19113*var4[13] - 5.*t1281*t20401*var4[13] - 20.*t1240*t18547*t19113*var4[24] + 30.*t3623*t3860*t3906*var4[24] + 20.*t1253*t1277*t3036*var4[35] - 30.*t3623*t3860*t3906*var4[35] + 5.*t1030*t1241*var4[46] - 20.*t1253*t1277*t3036*var4[46] - 5.*t1030*t1241*var4[57];
  p_output1[3]=var3[15] + 5.*t1281*t20401*var4[3] + 20.*t1240*t18547*t19113*var4[14] - 5.*t1281*t20401*var4[14] - 20.*t1240*t18547*t19113*var4[25] + 30.*t3623*t3860*t3906*var4[25] + 20.*t1253*t1277*t3036*var4[36] - 30.*t3623*t3860*t3906*var4[36] + 5.*t1030*t1241*var4[47] - 20.*t1253*t1277*t3036*var4[47] - 5.*t1030*t1241*var4[58];
  p_output1[4]=var3[17] + 5.*t1281*t20401*var4[4] + 20.*t1240*t18547*t19113*var4[15] - 5.*t1281*t20401*var4[15] - 20.*t1240*t18547*t19113*var4[26] + 30.*t3623*t3860*t3906*var4[26] + 20.*t1253*t1277*t3036*var4[37] - 30.*t3623*t3860*t3906*var4[37] + 5.*t1030*t1241*var4[48] - 20.*t1253*t1277*t3036*var4[48] - 5.*t1030*t1241*var4[59];
  p_output1[5]=var3[6] + 5.*t1281*t20401*var4[5] + 20.*t1240*t18547*t19113*var4[16] - 5.*t1281*t20401*var4[16] - 20.*t1240*t18547*t19113*var4[27] + 30.*t3623*t3860*t3906*var4[27] + 20.*t1253*t1277*t3036*var4[38] - 30.*t3623*t3860*t3906*var4[38] + 5.*t1030*t1241*var4[49] - 20.*t1253*t1277*t3036*var4[49] - 5.*t1030*t1241*var4[60];
  p_output1[6]=var3[7] + 5.*t1281*t20401*var4[6] + 20.*t1240*t18547*t19113*var4[17] - 5.*t1281*t20401*var4[17] - 20.*t1240*t18547*t19113*var4[28] + 30.*t3623*t3860*t3906*var4[28] + 20.*t1253*t1277*t3036*var4[39] - 30.*t3623*t3860*t3906*var4[39] + 5.*t1030*t1241*var4[50] - 20.*t1253*t1277*t3036*var4[50] - 5.*t1030*t1241*var4[61];
  p_output1[7]=var3[8] + 5.*t1281*t20401*var4[7] + 20.*t1240*t18547*t19113*var4[18] - 5.*t1281*t20401*var4[18] - 20.*t1240*t18547*t19113*var4[29] + 30.*t3623*t3860*t3906*var4[29] + 20.*t1253*t1277*t3036*var4[40] - 30.*t3623*t3860*t3906*var4[40] + 5.*t1030*t1241*var4[51] - 20.*t1253*t1277*t3036*var4[51] - 5.*t1030*t1241*var4[62];
  p_output1[8]=var3[9] + 5.*t1281*t20401*var4[8] + 20.*t1240*t18547*t19113*var4[19] - 5.*t1281*t20401*var4[19] - 20.*t1240*t18547*t19113*var4[30] + 30.*t3623*t3860*t3906*var4[30] + 20.*t1253*t1277*t3036*var4[41] - 30.*t3623*t3860*t3906*var4[41] + 5.*t1030*t1241*var4[52] - 20.*t1253*t1277*t3036*var4[52] - 5.*t1030*t1241*var4[63];
  p_output1[9]=var3[10] + 5.*t1281*t20401*var4[9] + 20.*t1240*t18547*t19113*var4[20] - 5.*t1281*t20401*var4[20] - 20.*t1240*t18547*t19113*var4[31] + 30.*t3623*t3860*t3906*var4[31] + 20.*t1253*t1277*t3036*var4[42] - 30.*t3623*t3860*t3906*var4[42] + 5.*t1030*t1241*var4[53] - 20.*t1253*t1277*t3036*var4[53] - 5.*t1030*t1241*var4[64];
  p_output1[10]=var3[11] + 5.*t1281*t20401*var4[10] + 20.*t1240*t18547*t19113*var4[21] - 5.*t1281*t20401*var4[21] - 20.*t1240*t18547*t19113*var4[32] + 30.*t3623*t3860*t3906*var4[32] + 20.*t1253*t1277*t3036*var4[43] - 30.*t3623*t3860*t3906*var4[43] + 5.*t1030*t1241*var4[54] - 20.*t1253*t1277*t3036*var4[54] - 5.*t1030*t1241*var4[65];
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
