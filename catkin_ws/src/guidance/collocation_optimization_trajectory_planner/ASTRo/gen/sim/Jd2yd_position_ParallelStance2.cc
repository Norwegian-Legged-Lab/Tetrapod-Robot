/*
 * Automatically Generated from Mathematica.
 * Sun 22 May 2022 16:55:38 GMT+02:00
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
  double t7028;
  double t7722;
  double t8288;
  double t8307;
  double t8403;
  double t12813;
  double t12821;
  double t12839;
  double t12840;
  double t12862;
  double t13150;
  double t13153;
  double t13633;
  double t13635;
  t7028 = -1.*var3[0];
  t7722 = t7028 + var3[1];
  t8288 = Power(t7722,-5);
  t8307 = t7028 + var1[0];
  t8403 = Power(t8307,3);
  t12813 = Power(t7722,-4);
  t12821 = Power(t8307,2);
  t12839 = 1/t7722;
  t12840 = -1.*t12839*t8307;
  t12862 = 1. + t12840;
  t13150 = Power(t7722,-3);
  t13153 = Power(t12862,2);
  t13633 = Power(t7722,-2);
  t13635 = Power(t12862,3);
  p_output1[0]=20.*t13633*t13635*var2[0] - 40.*t13633*t13635*var2[11] + 60.*t13150*t13153*t8307*var2[11] + 60.*t12813*t12821*t12862*var2[22] + 20.*t13633*t13635*var2[22] - 120.*t13150*t13153*t8307*var2[22] - 120.*t12813*t12821*t12862*var2[33] + 60.*t13150*t13153*t8307*var2[33] + 20.*t8288*t8403*var2[33] + 60.*t12813*t12821*t12862*var2[44] - 40.*t8288*t8403*var2[44] + 20.*t8288*t8403*var2[55];
  p_output1[1]=20.*t13633*t13635*var2[1] - 40.*t13633*t13635*var2[12] + 60.*t13150*t13153*t8307*var2[12] + 60.*t12813*t12821*t12862*var2[23] + 20.*t13633*t13635*var2[23] - 120.*t13150*t13153*t8307*var2[23] - 120.*t12813*t12821*t12862*var2[34] + 60.*t13150*t13153*t8307*var2[34] + 20.*t8288*t8403*var2[34] + 60.*t12813*t12821*t12862*var2[45] - 40.*t8288*t8403*var2[45] + 20.*t8288*t8403*var2[56];
  p_output1[2]=20.*t13633*t13635*var2[2] - 40.*t13633*t13635*var2[13] + 60.*t13150*t13153*t8307*var2[13] + 60.*t12813*t12821*t12862*var2[24] + 20.*t13633*t13635*var2[24] - 120.*t13150*t13153*t8307*var2[24] - 120.*t12813*t12821*t12862*var2[35] + 60.*t13150*t13153*t8307*var2[35] + 20.*t8288*t8403*var2[35] + 60.*t12813*t12821*t12862*var2[46] - 40.*t8288*t8403*var2[46] + 20.*t8288*t8403*var2[57];
  p_output1[3]=20.*t13633*t13635*var2[3] - 40.*t13633*t13635*var2[14] + 60.*t13150*t13153*t8307*var2[14] + 60.*t12813*t12821*t12862*var2[25] + 20.*t13633*t13635*var2[25] - 120.*t13150*t13153*t8307*var2[25] - 120.*t12813*t12821*t12862*var2[36] + 60.*t13150*t13153*t8307*var2[36] + 20.*t8288*t8403*var2[36] + 60.*t12813*t12821*t12862*var2[47] - 40.*t8288*t8403*var2[47] + 20.*t8288*t8403*var2[58];
  p_output1[4]=20.*t13633*t13635*var2[4] - 40.*t13633*t13635*var2[15] + 60.*t13150*t13153*t8307*var2[15] + 60.*t12813*t12821*t12862*var2[26] + 20.*t13633*t13635*var2[26] - 120.*t13150*t13153*t8307*var2[26] - 120.*t12813*t12821*t12862*var2[37] + 60.*t13150*t13153*t8307*var2[37] + 20.*t8288*t8403*var2[37] + 60.*t12813*t12821*t12862*var2[48] - 40.*t8288*t8403*var2[48] + 20.*t8288*t8403*var2[59];
  p_output1[5]=20.*t13633*t13635*var2[5] - 40.*t13633*t13635*var2[16] + 60.*t13150*t13153*t8307*var2[16] + 60.*t12813*t12821*t12862*var2[27] + 20.*t13633*t13635*var2[27] - 120.*t13150*t13153*t8307*var2[27] - 120.*t12813*t12821*t12862*var2[38] + 60.*t13150*t13153*t8307*var2[38] + 20.*t8288*t8403*var2[38] + 60.*t12813*t12821*t12862*var2[49] - 40.*t8288*t8403*var2[49] + 20.*t8288*t8403*var2[60];
  p_output1[6]=20.*t13633*t13635*var2[6] - 40.*t13633*t13635*var2[17] + 60.*t13150*t13153*t8307*var2[17] + 60.*t12813*t12821*t12862*var2[28] + 20.*t13633*t13635*var2[28] - 120.*t13150*t13153*t8307*var2[28] - 120.*t12813*t12821*t12862*var2[39] + 60.*t13150*t13153*t8307*var2[39] + 20.*t8288*t8403*var2[39] + 60.*t12813*t12821*t12862*var2[50] - 40.*t8288*t8403*var2[50] + 20.*t8288*t8403*var2[61];
  p_output1[7]=20.*t13633*t13635*var2[7] - 40.*t13633*t13635*var2[18] + 60.*t13150*t13153*t8307*var2[18] + 60.*t12813*t12821*t12862*var2[29] + 20.*t13633*t13635*var2[29] - 120.*t13150*t13153*t8307*var2[29] - 120.*t12813*t12821*t12862*var2[40] + 60.*t13150*t13153*t8307*var2[40] + 20.*t8288*t8403*var2[40] + 60.*t12813*t12821*t12862*var2[51] - 40.*t8288*t8403*var2[51] + 20.*t8288*t8403*var2[62];
  p_output1[8]=20.*t13633*t13635*var2[8] - 40.*t13633*t13635*var2[19] + 60.*t13150*t13153*t8307*var2[19] + 60.*t12813*t12821*t12862*var2[30] + 20.*t13633*t13635*var2[30] - 120.*t13150*t13153*t8307*var2[30] - 120.*t12813*t12821*t12862*var2[41] + 60.*t13150*t13153*t8307*var2[41] + 20.*t8288*t8403*var2[41] + 60.*t12813*t12821*t12862*var2[52] - 40.*t8288*t8403*var2[52] + 20.*t8288*t8403*var2[63];
  p_output1[9]=20.*t13633*t13635*var2[9] - 40.*t13633*t13635*var2[20] + 60.*t13150*t13153*t8307*var2[20] + 60.*t12813*t12821*t12862*var2[31] + 20.*t13633*t13635*var2[31] - 120.*t13150*t13153*t8307*var2[31] - 120.*t12813*t12821*t12862*var2[42] + 60.*t13150*t13153*t8307*var2[42] + 20.*t8288*t8403*var2[42] + 60.*t12813*t12821*t12862*var2[53] - 40.*t8288*t8403*var2[53] + 20.*t8288*t8403*var2[64];
  p_output1[10]=20.*t13633*t13635*var2[10] - 40.*t13633*t13635*var2[21] + 60.*t13150*t13153*t8307*var2[21] + 60.*t12813*t12821*t12862*var2[32] + 20.*t13633*t13635*var2[32] - 120.*t13150*t13153*t8307*var2[32] - 120.*t12813*t12821*t12862*var2[43] + 60.*t13150*t13153*t8307*var2[43] + 20.*t8288*t8403*var2[43] + 60.*t12813*t12821*t12862*var2[54] - 40.*t8288*t8403*var2[54] + 20.*t8288*t8403*var2[65];
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
