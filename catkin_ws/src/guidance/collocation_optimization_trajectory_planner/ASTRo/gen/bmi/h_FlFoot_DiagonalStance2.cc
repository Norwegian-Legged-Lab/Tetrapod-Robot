/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:52:16 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t974;
  double t1417;
  double t1470;
  double t1630;
  double t1660;
  double t1771;
  double t1229;
  double t7866;
  double t16071;
  double t19539;
  double t19757;
  double t19788;
  double t19936;
  double t19941;
  double t20036;
  double t20078;
  double t20169;
  double t20179;
  double t20453;
  double t20478;
  double t20479;
  double t20490;
  double t1795;
  double t1902;
  double t23034;
  double t22945;
  double t10764;
  double t11577;
  double t23017;
  double t23044;
  double t23070;
  double t23097;
  double t23155;
  double t23222;
  double t16072;
  double t16075;
  double t20073;
  double t20074;
  double t23345;
  double t23351;
  double t23352;
  double t23409;
  double t23451;
  double t23464;
  double t23536;
  double t23538;
  double t23728;
  double t24001;
  double t24065;
  double t24071;
  double t24115;
  double t24167;
  double t24303;
  double t24531;
  double t24567;
  double t24586;
  double t24711;
  double t24725;
  double t24785;
  double t24810;
  double t25020;
  double t25074;
  t974 = Cos(var1[4]);
  t1417 = Cos(var1[6]);
  t1470 = -1.*t1417;
  t1630 = 1. + t1470;
  t1660 = 0.15121*t1630;
  t1771 = Sin(var1[6]);
  t1229 = Sin(var1[5]);
  t7866 = Cos(var1[5]);
  t16071 = Cos(var1[7]);
  t19539 = t974*t7866*t1417;
  t19757 = -1.*t974*t1229*t1771;
  t19788 = t19539 + t19757;
  t19936 = Sin(var1[4]);
  t19941 = Sin(var1[7]);
  t20036 = Cos(var1[8]);
  t20078 = t16071*t19788;
  t20169 = -1.*t19936*t19941;
  t20179 = t20078 + t20169;
  t20453 = t16071*t19936;
  t20478 = t19788*t19941;
  t20479 = t20453 + t20478;
  t20490 = Sin(var1[8]);
  t1795 = -0.15121*t1771;
  t1902 = t1660 + t1795;
  t23034 = Sin(var1[3]);
  t22945 = Cos(var1[3]);
  t10764 = 0.15121*t1771;
  t11577 = t1660 + t10764;
  t23017 = t22945*t7866;
  t23044 = -1.*t23034*t19936*t1229;
  t23070 = t23017 + t23044;
  t23097 = t7866*t23034*t19936;
  t23155 = t22945*t1229;
  t23222 = t23097 + t23155;
  t16072 = -1.*t16071;
  t16075 = 1. + t16072;
  t20073 = -1.*t20036;
  t20074 = 1. + t20073;
  t23345 = t1417*t23222;
  t23351 = t23070*t1771;
  t23352 = t23345 + t23351;
  t23409 = t16071*t23352;
  t23451 = t974*t23034*t19941;
  t23464 = t23409 + t23451;
  t23536 = -1.*t974*t16071*t23034;
  t23538 = t23352*t19941;
  t23728 = t23536 + t23538;
  t24001 = t7866*t23034;
  t24065 = t22945*t19936*t1229;
  t24071 = t24001 + t24065;
  t24115 = -1.*t22945*t7866*t19936;
  t24167 = t23034*t1229;
  t24303 = t24115 + t24167;
  t24531 = t1417*t24303;
  t24567 = t24071*t1771;
  t24586 = t24531 + t24567;
  t24711 = t16071*t24586;
  t24725 = -1.*t22945*t974*t19941;
  t24785 = t24711 + t24725;
  t24810 = t22945*t974*t16071;
  t25020 = t24586*t19941;
  t25074 = t24810 + t25020;
  p_output1[0]=0.28121*t16075*t19788 + 0.28121*t19936*t19941 + 0.50321*t20074*t20179 - 0.50321*t20479*t20490 + 0.23321*(t20036*t20179 + t20479*t20490) - 1.*t1229*t1902*t974 + t11577*t7866*t974 + 0.15121*(-1.*t1229*t1417*t974 - 1.*t1771*t7866*t974) + var1[0] - 1.*var2[0];
  p_output1[1]=t1902*t23070 + t11577*t23222 + 0.15121*(t1417*t23070 - 1.*t1771*t23222) + 0.28121*t16075*t23352 + 0.50321*t20074*t23464 - 0.50321*t20490*t23728 + 0.23321*(t20036*t23464 + t20490*t23728) - 0.28121*t19941*t23034*t974 + var1[1] - 1.*var2[1];
  p_output1[2]=t1902*t24071 + t11577*t24303 + 0.15121*(t1417*t24071 - 1.*t1771*t24303) + 0.28121*t16075*t24586 + 0.50321*t20074*t24785 - 0.50321*t20490*t25074 + 0.23321*(t20036*t24785 + t20490*t25074) + 0.28121*t19941*t22945*t974 + var1[2] - 1.*var2[2];
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "h_FlFoot_DiagonalStance2.hh"

namespace SymFunction
{

void h_FlFoot_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
