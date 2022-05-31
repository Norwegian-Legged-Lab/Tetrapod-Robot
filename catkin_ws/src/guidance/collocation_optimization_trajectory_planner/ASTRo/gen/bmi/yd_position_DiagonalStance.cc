/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 18:51:11 GMT+02:00
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
  double t474;
  double t475;
  double t477;
  double t539;
  double t540;
  double t541;
  double t476;
  double t478;
  double t492;
  double t497;
  double t549;
  double t550;
  double t574;
  double t583;
  double t588;
  double t598;
  double t606;
  double t613;
  t474 = -1.*var3[0];
  t475 = t474 + var3[1];
  t477 = t474 + var1[0];
  t539 = 1/t475;
  t540 = -1.*t539*t477;
  t541 = 1. + t540;
  t476 = Power(t475,-5);
  t478 = Power(t477,5);
  t492 = Power(t475,-4);
  t497 = Power(t477,4);
  t549 = Power(t475,-3);
  t550 = Power(t477,3);
  t574 = Power(t541,2);
  t583 = Power(t475,-2);
  t588 = Power(t477,2);
  t598 = Power(t541,3);
  t606 = Power(t541,4);
  t613 = Power(t541,5);
  p_output1[0]=t613*var2[0] + 5.*t477*t539*t606*var2[14] + 10.*t583*t588*t598*var2[28] + 10.*t549*t550*t574*var2[42] + 5.*t492*t497*t541*var2[56] + t476*t478*var2[70];
  p_output1[1]=t613*var2[1] + 5.*t477*t539*t606*var2[15] + 10.*t583*t588*t598*var2[29] + 10.*t549*t550*t574*var2[43] + 5.*t492*t497*t541*var2[57] + t476*t478*var2[71];
  p_output1[2]=t613*var2[2] + 5.*t477*t539*t606*var2[16] + 10.*t583*t588*t598*var2[30] + 10.*t549*t550*t574*var2[44] + 5.*t492*t497*t541*var2[58] + t476*t478*var2[72];
  p_output1[3]=t613*var2[3] + 5.*t477*t539*t606*var2[17] + 10.*t583*t588*t598*var2[31] + 10.*t549*t550*t574*var2[45] + 5.*t492*t497*t541*var2[59] + t476*t478*var2[73];
  p_output1[4]=t613*var2[4] + 5.*t477*t539*t606*var2[18] + 10.*t583*t588*t598*var2[32] + 10.*t549*t550*t574*var2[46] + 5.*t492*t497*t541*var2[60] + t476*t478*var2[74];
  p_output1[5]=t613*var2[5] + 5.*t477*t539*t606*var2[19] + 10.*t583*t588*t598*var2[33] + 10.*t549*t550*t574*var2[47] + 5.*t492*t497*t541*var2[61] + t476*t478*var2[75];
  p_output1[6]=t613*var2[6] + 5.*t477*t539*t606*var2[20] + 10.*t583*t588*t598*var2[34] + 10.*t549*t550*t574*var2[48] + 5.*t492*t497*t541*var2[62] + t476*t478*var2[76];
  p_output1[7]=t613*var2[7] + 5.*t477*t539*t606*var2[21] + 10.*t583*t588*t598*var2[35] + 10.*t549*t550*t574*var2[49] + 5.*t492*t497*t541*var2[63] + t476*t478*var2[77];
  p_output1[8]=t613*var2[8] + 5.*t477*t539*t606*var2[22] + 10.*t583*t588*t598*var2[36] + 10.*t549*t550*t574*var2[50] + 5.*t492*t497*t541*var2[64] + t476*t478*var2[78];
  p_output1[9]=t613*var2[9] + 5.*t477*t539*t606*var2[23] + 10.*t583*t588*t598*var2[37] + 10.*t549*t550*t574*var2[51] + 5.*t492*t497*t541*var2[65] + t476*t478*var2[79];
  p_output1[10]=t613*var2[10] + 5.*t477*t539*t606*var2[24] + 10.*t583*t588*t598*var2[38] + 10.*t549*t550*t574*var2[52] + 5.*t492*t497*t541*var2[66] + t476*t478*var2[80];
  p_output1[11]=t613*var2[11] + 5.*t477*t539*t606*var2[25] + 10.*t583*t588*t598*var2[39] + 10.*t549*t550*t574*var2[53] + 5.*t492*t497*t541*var2[67] + t476*t478*var2[81];
  p_output1[12]=t613*var2[12] + 5.*t477*t539*t606*var2[26] + 10.*t583*t588*t598*var2[40] + 10.*t549*t550*t574*var2[54] + 5.*t492*t497*t541*var2[68] + t476*t478*var2[82];
  p_output1[13]=t613*var2[13] + 5.*t477*t539*t606*var2[27] + 10.*t583*t588*t598*var2[41] + 10.*t549*t550*t574*var2[55] + 5.*t492*t497*t541*var2[69] + t476*t478*var2[83];
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
