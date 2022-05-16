/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:40:22 GMT+02:00
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
  double t1319;
  double t1323;
  double t1334;
  double t2370;
  double t3522;
  double t3527;
  double t1330;
  double t1372;
  double t1619;
  double t1889;
  double t3547;
  double t3592;
  double t3610;
  double t4706;
  double t4860;
  double t5331;
  double t12718;
  double t13014;
  t1319 = -1.*var3[0];
  t1323 = t1319 + var3[1];
  t1334 = t1319 + var1[0];
  t2370 = 1/t1323;
  t3522 = -1.*t2370*t1334;
  t3527 = 1. + t3522;
  t1330 = Power(t1323,-5);
  t1372 = Power(t1334,5);
  t1619 = Power(t1323,-4);
  t1889 = Power(t1334,4);
  t3547 = Power(t1323,-3);
  t3592 = Power(t1334,3);
  t3610 = Power(t3527,2);
  t4706 = Power(t1323,-2);
  t4860 = Power(t1334,2);
  t5331 = Power(t3527,3);
  t12718 = Power(t3527,4);
  t13014 = Power(t3527,5);
  p_output1[0]=t13014*var2[0] + 5.*t12718*t1334*t2370*var2[11] + 10.*t4706*t4860*t5331*var2[22] + 10.*t3547*t3592*t3610*var2[33] + 5.*t1619*t1889*t3527*var2[44] + t1330*t1372*var2[55];
  p_output1[1]=t13014*var2[1] + 5.*t12718*t1334*t2370*var2[12] + 10.*t4706*t4860*t5331*var2[23] + 10.*t3547*t3592*t3610*var2[34] + 5.*t1619*t1889*t3527*var2[45] + t1330*t1372*var2[56];
  p_output1[2]=t13014*var2[2] + 5.*t12718*t1334*t2370*var2[13] + 10.*t4706*t4860*t5331*var2[24] + 10.*t3547*t3592*t3610*var2[35] + 5.*t1619*t1889*t3527*var2[46] + t1330*t1372*var2[57];
  p_output1[3]=t13014*var2[3] + 5.*t12718*t1334*t2370*var2[14] + 10.*t4706*t4860*t5331*var2[25] + 10.*t3547*t3592*t3610*var2[36] + 5.*t1619*t1889*t3527*var2[47] + t1330*t1372*var2[58];
  p_output1[4]=t13014*var2[4] + 5.*t12718*t1334*t2370*var2[15] + 10.*t4706*t4860*t5331*var2[26] + 10.*t3547*t3592*t3610*var2[37] + 5.*t1619*t1889*t3527*var2[48] + t1330*t1372*var2[59];
  p_output1[5]=t13014*var2[5] + 5.*t12718*t1334*t2370*var2[16] + 10.*t4706*t4860*t5331*var2[27] + 10.*t3547*t3592*t3610*var2[38] + 5.*t1619*t1889*t3527*var2[49] + t1330*t1372*var2[60];
  p_output1[6]=t13014*var2[6] + 5.*t12718*t1334*t2370*var2[17] + 10.*t4706*t4860*t5331*var2[28] + 10.*t3547*t3592*t3610*var2[39] + 5.*t1619*t1889*t3527*var2[50] + t1330*t1372*var2[61];
  p_output1[7]=t13014*var2[7] + 5.*t12718*t1334*t2370*var2[18] + 10.*t4706*t4860*t5331*var2[29] + 10.*t3547*t3592*t3610*var2[40] + 5.*t1619*t1889*t3527*var2[51] + t1330*t1372*var2[62];
  p_output1[8]=t13014*var2[8] + 5.*t12718*t1334*t2370*var2[19] + 10.*t4706*t4860*t5331*var2[30] + 10.*t3547*t3592*t3610*var2[41] + 5.*t1619*t1889*t3527*var2[52] + t1330*t1372*var2[63];
  p_output1[9]=t13014*var2[9] + 5.*t12718*t1334*t2370*var2[20] + 10.*t4706*t4860*t5331*var2[31] + 10.*t3547*t3592*t3610*var2[42] + 5.*t1619*t1889*t3527*var2[53] + t1330*t1372*var2[64];
  p_output1[10]=t13014*var2[10] + 5.*t12718*t1334*t2370*var2[21] + 10.*t4706*t4860*t5331*var2[32] + 10.*t3547*t3592*t3610*var2[43] + 5.*t1619*t1889*t3527*var2[54] + t1330*t1372*var2[65];
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
