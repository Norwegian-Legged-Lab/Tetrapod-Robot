/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 13:04:37 GMT+02:00
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
  double t29786;
  double t31880;
  double t32595;
  double t52258;
  double t52270;
  double t52318;
  double t32530;
  double t47040;
  double t51951;
  double t52002;
  double t52349;
  double t52357;
  double t52371;
  double t52451;
  double t52455;
  double t52457;
  double t53325;
  double t53327;
  t29786 = -1.*var3[0];
  t31880 = t29786 + var3[1];
  t32595 = t29786 + var1[0];
  t52258 = 1/t31880;
  t52270 = -1.*t52258*t32595;
  t52318 = 1. + t52270;
  t32530 = Power(t31880,-5);
  t47040 = Power(t32595,5);
  t51951 = Power(t31880,-4);
  t52002 = Power(t32595,4);
  t52349 = Power(t31880,-3);
  t52357 = Power(t32595,3);
  t52371 = Power(t52318,2);
  t52451 = Power(t31880,-2);
  t52455 = Power(t32595,2);
  t52457 = Power(t52318,3);
  t53325 = Power(t52318,4);
  t53327 = Power(t52318,5);
  p_output1[0]=t53327*var2[0] + 5.*t32595*t52258*t53325*var2[11] + 10.*t52451*t52455*t52457*var2[22] + 10.*t52349*t52357*t52371*var2[33] + 5.*t51951*t52002*t52318*var2[44] + t32530*t47040*var2[55];
  p_output1[1]=t53327*var2[1] + 5.*t32595*t52258*t53325*var2[12] + 10.*t52451*t52455*t52457*var2[23] + 10.*t52349*t52357*t52371*var2[34] + 5.*t51951*t52002*t52318*var2[45] + t32530*t47040*var2[56];
  p_output1[2]=t53327*var2[2] + 5.*t32595*t52258*t53325*var2[13] + 10.*t52451*t52455*t52457*var2[24] + 10.*t52349*t52357*t52371*var2[35] + 5.*t51951*t52002*t52318*var2[46] + t32530*t47040*var2[57];
  p_output1[3]=t53327*var2[3] + 5.*t32595*t52258*t53325*var2[14] + 10.*t52451*t52455*t52457*var2[25] + 10.*t52349*t52357*t52371*var2[36] + 5.*t51951*t52002*t52318*var2[47] + t32530*t47040*var2[58];
  p_output1[4]=t53327*var2[4] + 5.*t32595*t52258*t53325*var2[15] + 10.*t52451*t52455*t52457*var2[26] + 10.*t52349*t52357*t52371*var2[37] + 5.*t51951*t52002*t52318*var2[48] + t32530*t47040*var2[59];
  p_output1[5]=t53327*var2[5] + 5.*t32595*t52258*t53325*var2[16] + 10.*t52451*t52455*t52457*var2[27] + 10.*t52349*t52357*t52371*var2[38] + 5.*t51951*t52002*t52318*var2[49] + t32530*t47040*var2[60];
  p_output1[6]=t53327*var2[6] + 5.*t32595*t52258*t53325*var2[17] + 10.*t52451*t52455*t52457*var2[28] + 10.*t52349*t52357*t52371*var2[39] + 5.*t51951*t52002*t52318*var2[50] + t32530*t47040*var2[61];
  p_output1[7]=t53327*var2[7] + 5.*t32595*t52258*t53325*var2[18] + 10.*t52451*t52455*t52457*var2[29] + 10.*t52349*t52357*t52371*var2[40] + 5.*t51951*t52002*t52318*var2[51] + t32530*t47040*var2[62];
  p_output1[8]=t53327*var2[8] + 5.*t32595*t52258*t53325*var2[19] + 10.*t52451*t52455*t52457*var2[30] + 10.*t52349*t52357*t52371*var2[41] + 5.*t51951*t52002*t52318*var2[52] + t32530*t47040*var2[63];
  p_output1[9]=t53327*var2[9] + 5.*t32595*t52258*t53325*var2[20] + 10.*t52451*t52455*t52457*var2[31] + 10.*t52349*t52357*t52371*var2[42] + 5.*t51951*t52002*t52318*var2[53] + t32530*t47040*var2[64];
  p_output1[10]=t53327*var2[10] + 5.*t32595*t52258*t53325*var2[21] + 10.*t52451*t52455*t52457*var2[32] + 10.*t52349*t52357*t52371*var2[43] + 5.*t51951*t52002*t52318*var2[54] + t32530*t47040*var2[65];
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
