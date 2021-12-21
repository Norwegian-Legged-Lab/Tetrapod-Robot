/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:10:09 GMT+01:00
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
  double t300;
  double t8;
  double t335;
  double t177;
  double t358;
  double t470;
  double t477;
  double t481;
  double t501;
  double t529;
  double t264;
  double t389;
  double t421;
  double t618;
  double t621;
  double t627;
  double t727;
  double t728;
  double t733;
  double t735;
  double t865;
  double t970;
  double t699;
  double t701;
  double t710;
  double t756;
  double t758;
  double t759;
  double t1059;
  double t1087;
  double t1094;
  double t1131;
  double t971;
  double t972;
  double t1013;
  double t1028;
  double t1037;
  double t1044;
  double t1343;
  double t1259;
  double t1284;
  double t1295;
  double t1296;
  double t1169;
  double t1206;
  double t1225;
  double t1226;
  double t1249;
  double t1251;
  t300 = Cos(var1[3]);
  t8 = Cos(var1[5]);
  t335 = Sin(var1[4]);
  t177 = Sin(var1[3]);
  t358 = Sin(var1[5]);
  t470 = Cos(var1[6]);
  t477 = -1.*t470;
  t481 = 1. + t477;
  t501 = 0.15121*t481;
  t529 = Sin(var1[6]);
  t264 = t8*t177;
  t389 = t300*t335*t358;
  t421 = t264 + t389;
  t618 = -1.*t300*t8*t335;
  t621 = t177*t358;
  t627 = t618 + t621;
  t727 = Cos(var1[7]);
  t728 = -1.*t727;
  t733 = 1. + t728;
  t735 = Sin(var1[7]);
  t865 = Cos(var1[4]);
  t970 = -1. + t727;
  t699 = t470*t421;
  t701 = -1.*t627*t529;
  t710 = t699 + t701;
  t756 = t470*t627;
  t758 = t421*t529;
  t759 = t756 + t758;
  t1059 = Cos(var1[8]);
  t1087 = -1.*t1059;
  t1094 = 1. + t1087;
  t1131 = Sin(var1[8]);
  t971 = 4.e-6*t300*t865*t970;
  t972 = 1.6e-11*t970;
  t1013 = 1. + t972;
  t1028 = t1013*t710;
  t1037 = 4.e-6*t759*t735;
  t1044 = t971 + t1028 + t1037;
  t1343 = -1. + t1059;
  t1259 = t300*t865*t727;
  t1284 = 4.e-6*t970*t710;
  t1295 = t759*t735;
  t1296 = t1259 + t1284 + t1295;
  t1169 = -1.000000000016*t733;
  t1206 = 1. + t1169;
  t1225 = t1206*t759;
  t1226 = -1.*t300*t865*t735;
  t1249 = -4.e-6*t710*t735;
  t1251 = t1225 + t1226 + t1249;
  p_output1[0]=(0.503210000016051*t1094 + 0.03874900000062*t1131)*t1251 + 0.80321*(-4.e-6*t1044*t1131 + (1. - 1.000000000016*t1094)*t1251 - 1.*t1131*t1296) - 0.03875*(t1131*t1251 + t1059*t1296 + 4.e-6*t1044*t1343) + 0.14871*(4.e-6*t1131*t1251 + t1044*(1. + 1.6e-11*t1343) + 4.e-6*t1296*t1343) + t421*(t501 - 0.15121*t529) + (t501 + 0.15121*t529)*t627 + (0.281210000008499*t733 + 0.03874900000062*t735)*t759 + var1[2] + t710*(-1.5499600000248e-7*t733 + 1.124840000016e-6*t735 - 1.2484e-7*var1[7]) + t300*t865*(-0.03874900000062*t733 + 0.281210000004*t735 + 4.9936e-13*var1[7]) + t1044*(-1.5499600000248e-7*t1094 + 2.012840000032e-6*t1131 - 1.284e-8*var1[8]) + t1296*(-0.03874900000062*t1094 + 0.503210000008*t1131 + 5.136e-14*var1[8]);
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

#include "foot_clearance_FlFootDiagonalStance1.hh"

namespace DiagonalStance1
{

void foot_clearance_FlFootDiagonalStance1_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
