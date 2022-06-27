/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:20:17 GMT+02:00
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
  double t106;
  double t425;
  double t485;
  double t496;
  double t518;
  double t519;
  double t611;
  double t620;
  double t614;
  double t631;
  double t619;
  double t635;
  double t659;
  double t726;
  double t727;
  double t728;
  double t362;
  double t398;
  double t800;
  double t808;
  double t809;
  double t816;
  double t831;
  double t847;
  double t848;
  double t849;
  double t864;
  double t865;
  double t868;
  double t869;
  t106 = Cos(var1[3]);
  t425 = Cos(var1[15]);
  t485 = -1.*t425;
  t496 = 1. + t485;
  t518 = -0.15121*t496;
  t519 = Sin(var1[15]);
  t611 = Cos(var1[5]);
  t620 = Sin(var1[3]);
  t614 = Sin(var1[4]);
  t631 = Sin(var1[5]);
  t619 = -1.*t106*t611*t614;
  t635 = t620*t631;
  t659 = t619 + t635;
  t726 = t611*t620;
  t727 = t106*t614*t631;
  t728 = t726 + t727;
  t362 = Cos(var1[4]);
  t398 = Sin(var1[16]);
  t800 = Cos(var1[16]);
  t808 = t425*t659;
  t809 = t519*t728;
  t816 = t808 + t809;
  t831 = Cos(var1[17]);
  t847 = t106*t362*t398;
  t848 = t800*t816;
  t849 = t847 + t848;
  t864 = Sin(var1[17]);
  t865 = t800*t106*t362;
  t868 = -1.*t398*t816;
  t869 = t865 + t868;
  p_output1[0]=0.28121*t106*t362*t398 + (t518 - 0.15121*t519)*t659 + (t518 + 0.15121*t519)*t728 - 0.15121*(-1.*t519*t659 + t425*t728) - 0.28121*(1. - 1.*t800)*t816 - 0.50321*(1. - 1.*t831)*t849 - 0.50321*t864*t869 - 0.19821*(t831*t849 - 1.*t864*t869) + var1[2];
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

#include "u_rearSwingFootHeightflat_DiagonalStance.hh"

namespace SymFunction
{

void u_rearSwingFootHeightflat_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
