/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:51:51 GMT+02:00
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
  double t1330;
  double t1334;
  double t1372;
  double t1619;
  double t1889;
  double t3527;
  double t3547;
  double t3592;
  double t3610;
  double t4253;
  double t5273;
  double t5331;
  double t12718;
  double t19573;
  double t22458;
  double t27619;
  t1330 = -1.*var3[0];
  t1334 = t1330 + var3[1];
  t1372 = Power(t1334,-5);
  t1619 = t1330 + var1[0];
  t1889 = Power(t1619,4);
  t3527 = Power(t1334,-4);
  t3547 = Power(t1619,3);
  t3592 = 1/t1334;
  t3610 = -1.*t3592*t1619;
  t4253 = 1. + t3610;
  t5273 = Power(t1334,-3);
  t5331 = Power(t1619,2);
  t12718 = Power(t4253,2);
  t19573 = Power(t1334,-2);
  t22458 = Power(t4253,3);
  t27619 = Power(t4253,4);
  p_output1[0]=-5.*t27619*t3592*var2[0] - 20.*t1619*t19573*t22458*var2[14] + 5.*t27619*t3592*var2[14] + 20.*t1619*t19573*t22458*var2[28] - 30.*t12718*t5273*t5331*var2[28] - 20.*t3527*t3547*t4253*var2[42] + 30.*t12718*t5273*t5331*var2[42] - 5.*t1372*t1889*var2[56] + 20.*t3527*t3547*t4253*var2[56] + 5.*t1372*t1889*var2[70];
  p_output1[1]=-5.*t27619*t3592*var2[1] - 20.*t1619*t19573*t22458*var2[15] + 5.*t27619*t3592*var2[15] + 20.*t1619*t19573*t22458*var2[29] - 30.*t12718*t5273*t5331*var2[29] - 20.*t3527*t3547*t4253*var2[43] + 30.*t12718*t5273*t5331*var2[43] - 5.*t1372*t1889*var2[57] + 20.*t3527*t3547*t4253*var2[57] + 5.*t1372*t1889*var2[71];
  p_output1[2]=-5.*t27619*t3592*var2[2] - 20.*t1619*t19573*t22458*var2[16] + 5.*t27619*t3592*var2[16] + 20.*t1619*t19573*t22458*var2[30] - 30.*t12718*t5273*t5331*var2[30] - 20.*t3527*t3547*t4253*var2[44] + 30.*t12718*t5273*t5331*var2[44] - 5.*t1372*t1889*var2[58] + 20.*t3527*t3547*t4253*var2[58] + 5.*t1372*t1889*var2[72];
  p_output1[3]=-5.*t27619*t3592*var2[3] - 20.*t1619*t19573*t22458*var2[17] + 5.*t27619*t3592*var2[17] + 20.*t1619*t19573*t22458*var2[31] - 30.*t12718*t5273*t5331*var2[31] - 20.*t3527*t3547*t4253*var2[45] + 30.*t12718*t5273*t5331*var2[45] - 5.*t1372*t1889*var2[59] + 20.*t3527*t3547*t4253*var2[59] + 5.*t1372*t1889*var2[73];
  p_output1[4]=-5.*t27619*t3592*var2[4] - 20.*t1619*t19573*t22458*var2[18] + 5.*t27619*t3592*var2[18] + 20.*t1619*t19573*t22458*var2[32] - 30.*t12718*t5273*t5331*var2[32] - 20.*t3527*t3547*t4253*var2[46] + 30.*t12718*t5273*t5331*var2[46] - 5.*t1372*t1889*var2[60] + 20.*t3527*t3547*t4253*var2[60] + 5.*t1372*t1889*var2[74];
  p_output1[5]=-5.*t27619*t3592*var2[5] - 20.*t1619*t19573*t22458*var2[19] + 5.*t27619*t3592*var2[19] + 20.*t1619*t19573*t22458*var2[33] - 30.*t12718*t5273*t5331*var2[33] - 20.*t3527*t3547*t4253*var2[47] + 30.*t12718*t5273*t5331*var2[47] - 5.*t1372*t1889*var2[61] + 20.*t3527*t3547*t4253*var2[61] + 5.*t1372*t1889*var2[75];
  p_output1[6]=-5.*t27619*t3592*var2[6] - 20.*t1619*t19573*t22458*var2[20] + 5.*t27619*t3592*var2[20] + 20.*t1619*t19573*t22458*var2[34] - 30.*t12718*t5273*t5331*var2[34] - 20.*t3527*t3547*t4253*var2[48] + 30.*t12718*t5273*t5331*var2[48] - 5.*t1372*t1889*var2[62] + 20.*t3527*t3547*t4253*var2[62] + 5.*t1372*t1889*var2[76];
  p_output1[7]=-5.*t27619*t3592*var2[7] - 20.*t1619*t19573*t22458*var2[21] + 5.*t27619*t3592*var2[21] + 20.*t1619*t19573*t22458*var2[35] - 30.*t12718*t5273*t5331*var2[35] - 20.*t3527*t3547*t4253*var2[49] + 30.*t12718*t5273*t5331*var2[49] - 5.*t1372*t1889*var2[63] + 20.*t3527*t3547*t4253*var2[63] + 5.*t1372*t1889*var2[77];
  p_output1[8]=-5.*t27619*t3592*var2[8] - 20.*t1619*t19573*t22458*var2[22] + 5.*t27619*t3592*var2[22] + 20.*t1619*t19573*t22458*var2[36] - 30.*t12718*t5273*t5331*var2[36] - 20.*t3527*t3547*t4253*var2[50] + 30.*t12718*t5273*t5331*var2[50] - 5.*t1372*t1889*var2[64] + 20.*t3527*t3547*t4253*var2[64] + 5.*t1372*t1889*var2[78];
  p_output1[9]=-5.*t27619*t3592*var2[9] - 20.*t1619*t19573*t22458*var2[23] + 5.*t27619*t3592*var2[23] + 20.*t1619*t19573*t22458*var2[37] - 30.*t12718*t5273*t5331*var2[37] - 20.*t3527*t3547*t4253*var2[51] + 30.*t12718*t5273*t5331*var2[51] - 5.*t1372*t1889*var2[65] + 20.*t3527*t3547*t4253*var2[65] + 5.*t1372*t1889*var2[79];
  p_output1[10]=-5.*t27619*t3592*var2[10] - 20.*t1619*t19573*t22458*var2[24] + 5.*t27619*t3592*var2[24] + 20.*t1619*t19573*t22458*var2[38] - 30.*t12718*t5273*t5331*var2[38] - 20.*t3527*t3547*t4253*var2[52] + 30.*t12718*t5273*t5331*var2[52] - 5.*t1372*t1889*var2[66] + 20.*t3527*t3547*t4253*var2[66] + 5.*t1372*t1889*var2[80];
  p_output1[11]=-5.*t27619*t3592*var2[11] - 20.*t1619*t19573*t22458*var2[25] + 5.*t27619*t3592*var2[25] + 20.*t1619*t19573*t22458*var2[39] - 30.*t12718*t5273*t5331*var2[39] - 20.*t3527*t3547*t4253*var2[53] + 30.*t12718*t5273*t5331*var2[53] - 5.*t1372*t1889*var2[67] + 20.*t3527*t3547*t4253*var2[67] + 5.*t1372*t1889*var2[81];
  p_output1[12]=-5.*t27619*t3592*var2[12] - 20.*t1619*t19573*t22458*var2[26] + 5.*t27619*t3592*var2[26] + 20.*t1619*t19573*t22458*var2[40] - 30.*t12718*t5273*t5331*var2[40] - 20.*t3527*t3547*t4253*var2[54] + 30.*t12718*t5273*t5331*var2[54] - 5.*t1372*t1889*var2[68] + 20.*t3527*t3547*t4253*var2[68] + 5.*t1372*t1889*var2[82];
  p_output1[13]=-5.*t27619*t3592*var2[13] - 20.*t1619*t19573*t22458*var2[27] + 5.*t27619*t3592*var2[27] + 20.*t1619*t19573*t22458*var2[41] - 30.*t12718*t5273*t5331*var2[41] - 20.*t3527*t3547*t4253*var2[55] + 30.*t12718*t5273*t5331*var2[55] - 5.*t1372*t1889*var2[69] + 20.*t3527*t3547*t4253*var2[69] + 5.*t1372*t1889*var2[83];
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
    ( !(mrows == 84 && ncols == 1) && 
      !(mrows == 1 && ncols == 84))) 
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 14, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3);


}

#else // MATLAB_MEX_FILE

#include "d1yd_position_DiagonalStance.hh"

namespace SymFunction
{

void d1yd_position_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
