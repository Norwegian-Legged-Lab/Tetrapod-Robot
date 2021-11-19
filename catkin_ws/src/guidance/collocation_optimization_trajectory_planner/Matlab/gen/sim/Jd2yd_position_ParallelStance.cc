/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:10:58 GMT+01:00
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
  double t68;
  double t195;
  double t211;
  double t268;
  double t294;
  double t366;
  double t376;
  double t378;
  double t387;
  double t394;
  double t435;
  double t438;
  double t461;
  double t462;
  t68 = -1.*var3[0];
  t195 = t68 + var3[1];
  t211 = Power(t195,-5);
  t268 = t68 + var1[0];
  t294 = Power(t268,3);
  t366 = Power(t195,-4);
  t376 = Power(t268,2);
  t378 = 1/t195;
  t387 = -1.*t378*t268;
  t394 = 1. + t387;
  t435 = Power(t195,-3);
  t438 = Power(t394,2);
  t461 = Power(t195,-2);
  t462 = Power(t394,3);
  p_output1[0]=20.*t461*t462*var2[0] + 60.*t268*t435*t438*var2[10] - 40.*t461*t462*var2[10] + 60.*t366*t376*t394*var2[20] - 120.*t268*t435*t438*var2[20] + 20.*t461*t462*var2[20] + 20.*t211*t294*var2[30] - 120.*t366*t376*t394*var2[30] + 60.*t268*t435*t438*var2[30] - 40.*t211*t294*var2[40] + 60.*t366*t376*t394*var2[40] + 20.*t211*t294*var2[50];
  p_output1[1]=20.*t461*t462*var2[1] + 60.*t268*t435*t438*var2[11] - 40.*t461*t462*var2[11] + 60.*t366*t376*t394*var2[21] - 120.*t268*t435*t438*var2[21] + 20.*t461*t462*var2[21] + 20.*t211*t294*var2[31] - 120.*t366*t376*t394*var2[31] + 60.*t268*t435*t438*var2[31] - 40.*t211*t294*var2[41] + 60.*t366*t376*t394*var2[41] + 20.*t211*t294*var2[51];
  p_output1[2]=20.*t461*t462*var2[2] + 60.*t268*t435*t438*var2[12] - 40.*t461*t462*var2[12] + 60.*t366*t376*t394*var2[22] - 120.*t268*t435*t438*var2[22] + 20.*t461*t462*var2[22] + 20.*t211*t294*var2[32] - 120.*t366*t376*t394*var2[32] + 60.*t268*t435*t438*var2[32] - 40.*t211*t294*var2[42] + 60.*t366*t376*t394*var2[42] + 20.*t211*t294*var2[52];
  p_output1[3]=20.*t461*t462*var2[3] + 60.*t268*t435*t438*var2[13] - 40.*t461*t462*var2[13] + 60.*t366*t376*t394*var2[23] - 120.*t268*t435*t438*var2[23] + 20.*t461*t462*var2[23] + 20.*t211*t294*var2[33] - 120.*t366*t376*t394*var2[33] + 60.*t268*t435*t438*var2[33] - 40.*t211*t294*var2[43] + 60.*t366*t376*t394*var2[43] + 20.*t211*t294*var2[53];
  p_output1[4]=20.*t461*t462*var2[4] + 60.*t268*t435*t438*var2[14] - 40.*t461*t462*var2[14] + 60.*t366*t376*t394*var2[24] - 120.*t268*t435*t438*var2[24] + 20.*t461*t462*var2[24] + 20.*t211*t294*var2[34] - 120.*t366*t376*t394*var2[34] + 60.*t268*t435*t438*var2[34] - 40.*t211*t294*var2[44] + 60.*t366*t376*t394*var2[44] + 20.*t211*t294*var2[54];
  p_output1[5]=20.*t461*t462*var2[5] + 60.*t268*t435*t438*var2[15] - 40.*t461*t462*var2[15] + 60.*t366*t376*t394*var2[25] - 120.*t268*t435*t438*var2[25] + 20.*t461*t462*var2[25] + 20.*t211*t294*var2[35] - 120.*t366*t376*t394*var2[35] + 60.*t268*t435*t438*var2[35] - 40.*t211*t294*var2[45] + 60.*t366*t376*t394*var2[45] + 20.*t211*t294*var2[55];
  p_output1[6]=20.*t461*t462*var2[6] + 60.*t268*t435*t438*var2[16] - 40.*t461*t462*var2[16] + 60.*t366*t376*t394*var2[26] - 120.*t268*t435*t438*var2[26] + 20.*t461*t462*var2[26] + 20.*t211*t294*var2[36] - 120.*t366*t376*t394*var2[36] + 60.*t268*t435*t438*var2[36] - 40.*t211*t294*var2[46] + 60.*t366*t376*t394*var2[46] + 20.*t211*t294*var2[56];
  p_output1[7]=20.*t461*t462*var2[7] + 60.*t268*t435*t438*var2[17] - 40.*t461*t462*var2[17] + 60.*t366*t376*t394*var2[27] - 120.*t268*t435*t438*var2[27] + 20.*t461*t462*var2[27] + 20.*t211*t294*var2[37] - 120.*t366*t376*t394*var2[37] + 60.*t268*t435*t438*var2[37] - 40.*t211*t294*var2[47] + 60.*t366*t376*t394*var2[47] + 20.*t211*t294*var2[57];
  p_output1[8]=20.*t461*t462*var2[8] + 60.*t268*t435*t438*var2[18] - 40.*t461*t462*var2[18] + 60.*t366*t376*t394*var2[28] - 120.*t268*t435*t438*var2[28] + 20.*t461*t462*var2[28] + 20.*t211*t294*var2[38] - 120.*t366*t376*t394*var2[38] + 60.*t268*t435*t438*var2[38] - 40.*t211*t294*var2[48] + 60.*t366*t376*t394*var2[48] + 20.*t211*t294*var2[58];
  p_output1[9]=20.*t461*t462*var2[9] + 60.*t268*t435*t438*var2[19] - 40.*t461*t462*var2[19] + 60.*t366*t376*t394*var2[29] - 120.*t268*t435*t438*var2[29] + 20.*t461*t462*var2[29] + 20.*t211*t294*var2[39] - 120.*t366*t376*t394*var2[39] + 60.*t268*t435*t438*var2[39] - 40.*t211*t294*var2[49] + 60.*t366*t376*t394*var2[49] + 20.*t211*t294*var2[59];
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
    ( !(mrows == 60 && ncols == 1) && 
      !(mrows == 1 && ncols == 60))) 
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 10, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3);


}

#else // MATLAB_MEX_FILE

#include "Jd2yd_position_ParallelStance.hh"

namespace SymFunction
{

void Jd2yd_position_ParallelStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
