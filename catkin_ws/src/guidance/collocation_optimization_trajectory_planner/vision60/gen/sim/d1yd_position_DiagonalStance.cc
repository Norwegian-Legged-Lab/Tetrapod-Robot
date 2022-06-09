/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 14:40:39 GMT+02:00
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
  double t3403;
  double t3421;
  double t3454;
  double t3478;
  double t3484;
  double t3555;
  double t3556;
  double t3557;
  double t3569;
  double t3575;
  double t3580;
  double t3581;
  double t3582;
  double t3589;
  double t3590;
  double t3594;
  t3403 = -1.*var3[0];
  t3421 = t3403 + var3[1];
  t3454 = Power(t3421,-5);
  t3478 = t3403 + var1[0];
  t3484 = Power(t3478,4);
  t3555 = Power(t3421,-4);
  t3556 = Power(t3478,3);
  t3557 = 1/t3421;
  t3569 = -1.*t3557*t3478;
  t3575 = 1. + t3569;
  t3580 = Power(t3421,-3);
  t3581 = Power(t3478,2);
  t3582 = Power(t3575,2);
  t3589 = Power(t3421,-2);
  t3590 = Power(t3575,3);
  t3594 = Power(t3575,4);
  p_output1[0]=-5.*t3557*t3594*var2[0] - 20.*t3478*t3589*t3590*var2[14] + 5.*t3557*t3594*var2[14] - 30.*t3580*t3581*t3582*var2[28] + 20.*t3478*t3589*t3590*var2[28] - 20.*t3555*t3556*t3575*var2[42] + 30.*t3580*t3581*t3582*var2[42] - 5.*t3454*t3484*var2[56] + 20.*t3555*t3556*t3575*var2[56] + 5.*t3454*t3484*var2[70];
  p_output1[1]=-5.*t3557*t3594*var2[1] - 20.*t3478*t3589*t3590*var2[15] + 5.*t3557*t3594*var2[15] - 30.*t3580*t3581*t3582*var2[29] + 20.*t3478*t3589*t3590*var2[29] - 20.*t3555*t3556*t3575*var2[43] + 30.*t3580*t3581*t3582*var2[43] - 5.*t3454*t3484*var2[57] + 20.*t3555*t3556*t3575*var2[57] + 5.*t3454*t3484*var2[71];
  p_output1[2]=-5.*t3557*t3594*var2[2] - 20.*t3478*t3589*t3590*var2[16] + 5.*t3557*t3594*var2[16] - 30.*t3580*t3581*t3582*var2[30] + 20.*t3478*t3589*t3590*var2[30] - 20.*t3555*t3556*t3575*var2[44] + 30.*t3580*t3581*t3582*var2[44] - 5.*t3454*t3484*var2[58] + 20.*t3555*t3556*t3575*var2[58] + 5.*t3454*t3484*var2[72];
  p_output1[3]=-5.*t3557*t3594*var2[3] - 20.*t3478*t3589*t3590*var2[17] + 5.*t3557*t3594*var2[17] - 30.*t3580*t3581*t3582*var2[31] + 20.*t3478*t3589*t3590*var2[31] - 20.*t3555*t3556*t3575*var2[45] + 30.*t3580*t3581*t3582*var2[45] - 5.*t3454*t3484*var2[59] + 20.*t3555*t3556*t3575*var2[59] + 5.*t3454*t3484*var2[73];
  p_output1[4]=-5.*t3557*t3594*var2[4] - 20.*t3478*t3589*t3590*var2[18] + 5.*t3557*t3594*var2[18] - 30.*t3580*t3581*t3582*var2[32] + 20.*t3478*t3589*t3590*var2[32] - 20.*t3555*t3556*t3575*var2[46] + 30.*t3580*t3581*t3582*var2[46] - 5.*t3454*t3484*var2[60] + 20.*t3555*t3556*t3575*var2[60] + 5.*t3454*t3484*var2[74];
  p_output1[5]=-5.*t3557*t3594*var2[5] - 20.*t3478*t3589*t3590*var2[19] + 5.*t3557*t3594*var2[19] - 30.*t3580*t3581*t3582*var2[33] + 20.*t3478*t3589*t3590*var2[33] - 20.*t3555*t3556*t3575*var2[47] + 30.*t3580*t3581*t3582*var2[47] - 5.*t3454*t3484*var2[61] + 20.*t3555*t3556*t3575*var2[61] + 5.*t3454*t3484*var2[75];
  p_output1[6]=-5.*t3557*t3594*var2[6] - 20.*t3478*t3589*t3590*var2[20] + 5.*t3557*t3594*var2[20] - 30.*t3580*t3581*t3582*var2[34] + 20.*t3478*t3589*t3590*var2[34] - 20.*t3555*t3556*t3575*var2[48] + 30.*t3580*t3581*t3582*var2[48] - 5.*t3454*t3484*var2[62] + 20.*t3555*t3556*t3575*var2[62] + 5.*t3454*t3484*var2[76];
  p_output1[7]=-5.*t3557*t3594*var2[7] - 20.*t3478*t3589*t3590*var2[21] + 5.*t3557*t3594*var2[21] - 30.*t3580*t3581*t3582*var2[35] + 20.*t3478*t3589*t3590*var2[35] - 20.*t3555*t3556*t3575*var2[49] + 30.*t3580*t3581*t3582*var2[49] - 5.*t3454*t3484*var2[63] + 20.*t3555*t3556*t3575*var2[63] + 5.*t3454*t3484*var2[77];
  p_output1[8]=-5.*t3557*t3594*var2[8] - 20.*t3478*t3589*t3590*var2[22] + 5.*t3557*t3594*var2[22] - 30.*t3580*t3581*t3582*var2[36] + 20.*t3478*t3589*t3590*var2[36] - 20.*t3555*t3556*t3575*var2[50] + 30.*t3580*t3581*t3582*var2[50] - 5.*t3454*t3484*var2[64] + 20.*t3555*t3556*t3575*var2[64] + 5.*t3454*t3484*var2[78];
  p_output1[9]=-5.*t3557*t3594*var2[9] - 20.*t3478*t3589*t3590*var2[23] + 5.*t3557*t3594*var2[23] - 30.*t3580*t3581*t3582*var2[37] + 20.*t3478*t3589*t3590*var2[37] - 20.*t3555*t3556*t3575*var2[51] + 30.*t3580*t3581*t3582*var2[51] - 5.*t3454*t3484*var2[65] + 20.*t3555*t3556*t3575*var2[65] + 5.*t3454*t3484*var2[79];
  p_output1[10]=-5.*t3557*t3594*var2[10] - 20.*t3478*t3589*t3590*var2[24] + 5.*t3557*t3594*var2[24] - 30.*t3580*t3581*t3582*var2[38] + 20.*t3478*t3589*t3590*var2[38] - 20.*t3555*t3556*t3575*var2[52] + 30.*t3580*t3581*t3582*var2[52] - 5.*t3454*t3484*var2[66] + 20.*t3555*t3556*t3575*var2[66] + 5.*t3454*t3484*var2[80];
  p_output1[11]=-5.*t3557*t3594*var2[11] - 20.*t3478*t3589*t3590*var2[25] + 5.*t3557*t3594*var2[25] - 30.*t3580*t3581*t3582*var2[39] + 20.*t3478*t3589*t3590*var2[39] - 20.*t3555*t3556*t3575*var2[53] + 30.*t3580*t3581*t3582*var2[53] - 5.*t3454*t3484*var2[67] + 20.*t3555*t3556*t3575*var2[67] + 5.*t3454*t3484*var2[81];
  p_output1[12]=-5.*t3557*t3594*var2[12] - 20.*t3478*t3589*t3590*var2[26] + 5.*t3557*t3594*var2[26] - 30.*t3580*t3581*t3582*var2[40] + 20.*t3478*t3589*t3590*var2[40] - 20.*t3555*t3556*t3575*var2[54] + 30.*t3580*t3581*t3582*var2[54] - 5.*t3454*t3484*var2[68] + 20.*t3555*t3556*t3575*var2[68] + 5.*t3454*t3484*var2[82];
  p_output1[13]=-5.*t3557*t3594*var2[13] - 20.*t3478*t3589*t3590*var2[27] + 5.*t3557*t3594*var2[27] - 30.*t3580*t3581*t3582*var2[41] + 20.*t3478*t3589*t3590*var2[41] - 20.*t3555*t3556*t3575*var2[55] + 30.*t3580*t3581*t3582*var2[55] - 5.*t3454*t3484*var2[69] + 20.*t3555*t3556*t3575*var2[69] + 5.*t3454*t3484*var2[83];
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
