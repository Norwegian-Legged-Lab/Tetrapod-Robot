/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:43:45 GMT+02:00
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
static void output1(double *p_output1,const double *var1)
{
  double t4622;
  double t44657;
  double t44681;
  double t44682;
  double t44693;
  double t44694;
  double t44744;
  double t44759;
  double t44756;
  double t44761;
  double t44757;
  double t44762;
  double t44764;
  double t44773;
  double t44778;
  double t44780;
  double t5724;
  double t5732;
  double t44821;
  double t44827;
  double t44831;
  double t44837;
  double t44844;
  double t44853;
  double t44855;
  double t44856;
  double t44859;
  double t44860;
  double t44865;
  double t44872;
  t4622 = Cos(var1[3]);
  t44657 = Cos(var1[12]);
  t44681 = -1.*t44657;
  t44682 = 1. + t44681;
  t44693 = Sin(var1[12]);
  t44694 = -0.15121*t44693;
  t44744 = Cos(var1[5]);
  t44759 = Sin(var1[3]);
  t44756 = Sin(var1[4]);
  t44761 = Sin(var1[5]);
  t44757 = -1.*t4622*t44744*t44756;
  t44762 = t44759*t44761;
  t44764 = t44757 + t44762;
  t44773 = t44744*t44759;
  t44778 = t4622*t44756*t44761;
  t44780 = t44773 + t44778;
  t5724 = Cos(var1[4]);
  t5732 = Sin(var1[13]);
  t44821 = Cos(var1[13]);
  t44827 = t44657*t44764;
  t44831 = t44693*t44780;
  t44837 = t44827 + t44831;
  t44844 = Cos(var1[14]);
  t44853 = -1.*t4622*t5724*t5732;
  t44855 = t44821*t44837;
  t44856 = t44853 + t44855;
  t44859 = Sin(var1[14]);
  t44860 = t44821*t4622*t5724;
  t44865 = t5732*t44837;
  t44872 = t44860 + t44865;
  p_output1[0]=(0.15121*t44682 + t44694)*t44764 + (-0.15121*t44682 + t44694)*t44780 - 0.15121*(-1.*t44693*t44764 + t44657*t44780) + 0.28121*(1. - 1.*t44821)*t44837 + 0.50321*(1. - 1.*t44844)*t44856 - 0.50321*t44859*t44872 + 0.23321*(t44844*t44856 + t44859*t44872) + 0.28121*t4622*t5724*t5732 + var1[2];
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "swing_position_FrFoot_ParallelStance.hh"

namespace ParallelStance
{

void swing_position_FrFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
