/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:41:12 GMT+02:00
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
  double t1093;
  double t1545;
  double t2338;
  double t3163;
  double t3222;
  double t3270;
  double t1847;
  double t2413;
  double t2720;
  double t2892;
  double t3308;
  double t3352;
  double t3385;
  double t3390;
  double t3464;
  double t3481;
  double t3585;
  double t3858;
  t1093 = -1.*var3[0];
  t1545 = t1093 + var3[1];
  t2338 = t1093 + var1[0];
  t3163 = 1/t1545;
  t3222 = -1.*t3163*t2338;
  t3270 = 1. + t3222;
  t1847 = Power(t1545,-5);
  t2413 = Power(t2338,5);
  t2720 = Power(t1545,-4);
  t2892 = Power(t2338,4);
  t3308 = Power(t1545,-3);
  t3352 = Power(t2338,3);
  t3385 = Power(t3270,2);
  t3390 = Power(t1545,-2);
  t3464 = Power(t2338,2);
  t3481 = Power(t3270,3);
  t3585 = Power(t3270,4);
  t3858 = Power(t3270,5);
  p_output1[0]=t3858*var2[0] + 5.*t2338*t3163*t3585*var2[11] + 10.*t3390*t3464*t3481*var2[22] + 10.*t3308*t3352*t3385*var2[33] + 5.*t2720*t2892*t3270*var2[44] + t1847*t2413*var2[55];
  p_output1[1]=t3858*var2[1] + 5.*t2338*t3163*t3585*var2[12] + 10.*t3390*t3464*t3481*var2[23] + 10.*t3308*t3352*t3385*var2[34] + 5.*t2720*t2892*t3270*var2[45] + t1847*t2413*var2[56];
  p_output1[2]=t3858*var2[2] + 5.*t2338*t3163*t3585*var2[13] + 10.*t3390*t3464*t3481*var2[24] + 10.*t3308*t3352*t3385*var2[35] + 5.*t2720*t2892*t3270*var2[46] + t1847*t2413*var2[57];
  p_output1[3]=t3858*var2[3] + 5.*t2338*t3163*t3585*var2[14] + 10.*t3390*t3464*t3481*var2[25] + 10.*t3308*t3352*t3385*var2[36] + 5.*t2720*t2892*t3270*var2[47] + t1847*t2413*var2[58];
  p_output1[4]=t3858*var2[4] + 5.*t2338*t3163*t3585*var2[15] + 10.*t3390*t3464*t3481*var2[26] + 10.*t3308*t3352*t3385*var2[37] + 5.*t2720*t2892*t3270*var2[48] + t1847*t2413*var2[59];
  p_output1[5]=t3858*var2[5] + 5.*t2338*t3163*t3585*var2[16] + 10.*t3390*t3464*t3481*var2[27] + 10.*t3308*t3352*t3385*var2[38] + 5.*t2720*t2892*t3270*var2[49] + t1847*t2413*var2[60];
  p_output1[6]=t3858*var2[6] + 5.*t2338*t3163*t3585*var2[17] + 10.*t3390*t3464*t3481*var2[28] + 10.*t3308*t3352*t3385*var2[39] + 5.*t2720*t2892*t3270*var2[50] + t1847*t2413*var2[61];
  p_output1[7]=t3858*var2[7] + 5.*t2338*t3163*t3585*var2[18] + 10.*t3390*t3464*t3481*var2[29] + 10.*t3308*t3352*t3385*var2[40] + 5.*t2720*t2892*t3270*var2[51] + t1847*t2413*var2[62];
  p_output1[8]=t3858*var2[8] + 5.*t2338*t3163*t3585*var2[19] + 10.*t3390*t3464*t3481*var2[30] + 10.*t3308*t3352*t3385*var2[41] + 5.*t2720*t2892*t3270*var2[52] + t1847*t2413*var2[63];
  p_output1[9]=t3858*var2[9] + 5.*t2338*t3163*t3585*var2[20] + 10.*t3390*t3464*t3481*var2[31] + 10.*t3308*t3352*t3385*var2[42] + 5.*t2720*t2892*t3270*var2[53] + t1847*t2413*var2[64];
  p_output1[10]=t3858*var2[10] + 5.*t2338*t3163*t3585*var2[21] + 10.*t3390*t3464*t3481*var2[32] + 10.*t3308*t3352*t3385*var2[43] + 5.*t2720*t2892*t3270*var2[54] + t1847*t2413*var2[65];
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
    ( !(mrows == 66 && ncols == 1) && 
      !(mrows == 1 && ncols == 66))) 
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 11, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3);


}

#else // MATLAB_MEX_FILE

#include "yd_position_ParallelStance2.hh"

namespace SymFunction
{

void yd_position_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
