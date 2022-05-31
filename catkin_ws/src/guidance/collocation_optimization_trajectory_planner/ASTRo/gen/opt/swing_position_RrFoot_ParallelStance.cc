/*
 * Automatically Generated from Mathematica.
 * Thu 26 May 2022 14:48:52 GMT+02:00
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
  double t16309;
  double t16691;
  double t16694;
  double t16695;
  double t16699;
  double t16712;
  double t16824;
  double t16843;
  double t16829;
  double t16852;
  double t16834;
  double t16864;
  double t16865;
  double t16873;
  double t16877;
  double t16886;
  double t16507;
  double t16660;
  double t16933;
  double t16996;
  double t17019;
  double t17027;
  double t17039;
  double t17044;
  double t17045;
  double t17053;
  double t17059;
  double t17061;
  double t17062;
  double t17066;
  t16309 = Cos(var1[3]);
  t16691 = Cos(var1[15]);
  t16694 = -1.*t16691;
  t16695 = 1. + t16694;
  t16699 = -0.15121*t16695;
  t16712 = Sin(var1[15]);
  t16824 = Cos(var1[5]);
  t16843 = Sin(var1[3]);
  t16829 = Sin(var1[4]);
  t16852 = Sin(var1[5]);
  t16834 = -1.*t16309*t16824*t16829;
  t16864 = t16843*t16852;
  t16865 = t16834 + t16864;
  t16873 = t16824*t16843;
  t16877 = t16309*t16829*t16852;
  t16886 = t16873 + t16877;
  t16507 = Cos(var1[4]);
  t16660 = Sin(var1[16]);
  t16933 = Cos(var1[16]);
  t16996 = t16691*t16865;
  t17019 = t16712*t16886;
  t17027 = t16996 + t17019;
  t17039 = Cos(var1[17]);
  t17044 = t16309*t16507*t16660;
  t17045 = t16933*t17027;
  t17053 = t17044 + t17045;
  t17059 = Sin(var1[17]);
  t17061 = t16933*t16309*t16507;
  t17062 = -1.*t16660*t17027;
  t17066 = t17061 + t17062;
  p_output1[0]=0.28121*t16309*t16507*t16660 + (t16699 - 0.15121*t16712)*t16865 + (t16699 + 0.15121*t16712)*t16886 - 0.15121*(-1.*t16712*t16865 + t16691*t16886) - 0.28121*(1. - 1.*t16933)*t17027 - 0.50321*(1. - 1.*t17039)*t17053 - 0.50321*t17059*t17066 - 0.19821*(t17039*t17053 - 1.*t17059*t17066) + var1[2];
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

#include "swing_position_RrFoot_ParallelStance.hh"

namespace ParallelStance
{

void swing_position_RrFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
