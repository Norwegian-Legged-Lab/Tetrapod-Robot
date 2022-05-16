/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:41:13 GMT+02:00
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
  double t78;
  double t390;
  double t427;
  double t549;
  double t641;
  double t949;
  double t1723;
  double t1753;
  double t1768;
  double t2073;
  double t2771;
  double t2788;
  double t3293;
  double t3486;
  t78 = -1.*var3[0];
  t390 = t78 + var3[1];
  t427 = Power(t390,-5);
  t549 = t78 + var1[0];
  t641 = Power(t549,3);
  t949 = Power(t390,-4);
  t1723 = Power(t549,2);
  t1753 = 1/t390;
  t1768 = -1.*t1753*t549;
  t2073 = 1. + t1768;
  t2771 = Power(t390,-3);
  t2788 = Power(t2073,2);
  t3293 = Power(t390,-2);
  t3486 = Power(t2073,3);
  p_output1[0]=20.*t3293*t3486*var2[0] - 40.*t3293*t3486*var2[11] + 60.*t2771*t2788*t549*var2[11] + 20.*t3293*t3486*var2[22] - 120.*t2771*t2788*t549*var2[22] + 60.*t1723*t2073*t949*var2[22] + 60.*t2771*t2788*t549*var2[33] + 20.*t427*t641*var2[33] - 120.*t1723*t2073*t949*var2[33] - 40.*t427*t641*var2[44] + 60.*t1723*t2073*t949*var2[44] + 20.*t427*t641*var2[55];
  p_output1[1]=20.*t3293*t3486*var2[1] - 40.*t3293*t3486*var2[12] + 60.*t2771*t2788*t549*var2[12] + 20.*t3293*t3486*var2[23] - 120.*t2771*t2788*t549*var2[23] + 60.*t1723*t2073*t949*var2[23] + 60.*t2771*t2788*t549*var2[34] + 20.*t427*t641*var2[34] - 120.*t1723*t2073*t949*var2[34] - 40.*t427*t641*var2[45] + 60.*t1723*t2073*t949*var2[45] + 20.*t427*t641*var2[56];
  p_output1[2]=20.*t3293*t3486*var2[2] - 40.*t3293*t3486*var2[13] + 60.*t2771*t2788*t549*var2[13] + 20.*t3293*t3486*var2[24] - 120.*t2771*t2788*t549*var2[24] + 60.*t1723*t2073*t949*var2[24] + 60.*t2771*t2788*t549*var2[35] + 20.*t427*t641*var2[35] - 120.*t1723*t2073*t949*var2[35] - 40.*t427*t641*var2[46] + 60.*t1723*t2073*t949*var2[46] + 20.*t427*t641*var2[57];
  p_output1[3]=20.*t3293*t3486*var2[3] - 40.*t3293*t3486*var2[14] + 60.*t2771*t2788*t549*var2[14] + 20.*t3293*t3486*var2[25] - 120.*t2771*t2788*t549*var2[25] + 60.*t1723*t2073*t949*var2[25] + 60.*t2771*t2788*t549*var2[36] + 20.*t427*t641*var2[36] - 120.*t1723*t2073*t949*var2[36] - 40.*t427*t641*var2[47] + 60.*t1723*t2073*t949*var2[47] + 20.*t427*t641*var2[58];
  p_output1[4]=20.*t3293*t3486*var2[4] - 40.*t3293*t3486*var2[15] + 60.*t2771*t2788*t549*var2[15] + 20.*t3293*t3486*var2[26] - 120.*t2771*t2788*t549*var2[26] + 60.*t1723*t2073*t949*var2[26] + 60.*t2771*t2788*t549*var2[37] + 20.*t427*t641*var2[37] - 120.*t1723*t2073*t949*var2[37] - 40.*t427*t641*var2[48] + 60.*t1723*t2073*t949*var2[48] + 20.*t427*t641*var2[59];
  p_output1[5]=20.*t3293*t3486*var2[5] - 40.*t3293*t3486*var2[16] + 60.*t2771*t2788*t549*var2[16] + 20.*t3293*t3486*var2[27] - 120.*t2771*t2788*t549*var2[27] + 60.*t1723*t2073*t949*var2[27] + 60.*t2771*t2788*t549*var2[38] + 20.*t427*t641*var2[38] - 120.*t1723*t2073*t949*var2[38] - 40.*t427*t641*var2[49] + 60.*t1723*t2073*t949*var2[49] + 20.*t427*t641*var2[60];
  p_output1[6]=20.*t3293*t3486*var2[6] - 40.*t3293*t3486*var2[17] + 60.*t2771*t2788*t549*var2[17] + 20.*t3293*t3486*var2[28] - 120.*t2771*t2788*t549*var2[28] + 60.*t1723*t2073*t949*var2[28] + 60.*t2771*t2788*t549*var2[39] + 20.*t427*t641*var2[39] - 120.*t1723*t2073*t949*var2[39] - 40.*t427*t641*var2[50] + 60.*t1723*t2073*t949*var2[50] + 20.*t427*t641*var2[61];
  p_output1[7]=20.*t3293*t3486*var2[7] - 40.*t3293*t3486*var2[18] + 60.*t2771*t2788*t549*var2[18] + 20.*t3293*t3486*var2[29] - 120.*t2771*t2788*t549*var2[29] + 60.*t1723*t2073*t949*var2[29] + 60.*t2771*t2788*t549*var2[40] + 20.*t427*t641*var2[40] - 120.*t1723*t2073*t949*var2[40] - 40.*t427*t641*var2[51] + 60.*t1723*t2073*t949*var2[51] + 20.*t427*t641*var2[62];
  p_output1[8]=20.*t3293*t3486*var2[8] - 40.*t3293*t3486*var2[19] + 60.*t2771*t2788*t549*var2[19] + 20.*t3293*t3486*var2[30] - 120.*t2771*t2788*t549*var2[30] + 60.*t1723*t2073*t949*var2[30] + 60.*t2771*t2788*t549*var2[41] + 20.*t427*t641*var2[41] - 120.*t1723*t2073*t949*var2[41] - 40.*t427*t641*var2[52] + 60.*t1723*t2073*t949*var2[52] + 20.*t427*t641*var2[63];
  p_output1[9]=20.*t3293*t3486*var2[9] - 40.*t3293*t3486*var2[20] + 60.*t2771*t2788*t549*var2[20] + 20.*t3293*t3486*var2[31] - 120.*t2771*t2788*t549*var2[31] + 60.*t1723*t2073*t949*var2[31] + 60.*t2771*t2788*t549*var2[42] + 20.*t427*t641*var2[42] - 120.*t1723*t2073*t949*var2[42] - 40.*t427*t641*var2[53] + 60.*t1723*t2073*t949*var2[53] + 20.*t427*t641*var2[64];
  p_output1[10]=20.*t3293*t3486*var2[10] - 40.*t3293*t3486*var2[21] + 60.*t2771*t2788*t549*var2[21] + 20.*t3293*t3486*var2[32] - 120.*t2771*t2788*t549*var2[32] + 60.*t1723*t2073*t949*var2[32] + 60.*t2771*t2788*t549*var2[43] + 20.*t427*t641*var2[43] - 120.*t1723*t2073*t949*var2[43] - 40.*t427*t641*var2[54] + 60.*t1723*t2073*t949*var2[54] + 20.*t427*t641*var2[65];
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

#include "Jd2yd_position_ParallelStance2.hh"

namespace SymFunction
{

void Jd2yd_position_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
