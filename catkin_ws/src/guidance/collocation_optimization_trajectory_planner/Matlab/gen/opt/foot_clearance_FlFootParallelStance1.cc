/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:12:04 GMT+01:00
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
  double t634;
  double t118;
  double t652;
  double t347;
  double t654;
  double t771;
  double t995;
  double t1064;
  double t1091;
  double t1140;
  double t517;
  double t745;
  double t758;
  double t1258;
  double t1260;
  double t1282;
  double t1377;
  double t1402;
  double t1409;
  double t1429;
  double t1556;
  double t1621;
  double t1311;
  double t1324;
  double t1350;
  double t1471;
  double t1486;
  double t1502;
  double t1686;
  double t1689;
  double t1694;
  double t1699;
  double t1635;
  double t1638;
  double t1641;
  double t1678;
  double t1680;
  double t1681;
  double t1850;
  double t1808;
  double t1811;
  double t1812;
  double t1818;
  double t1730;
  double t1731;
  double t1737;
  double t1750;
  double t1770;
  double t1787;
  t634 = Cos(var1[3]);
  t118 = Cos(var1[5]);
  t652 = Sin(var1[4]);
  t347 = Sin(var1[3]);
  t654 = Sin(var1[5]);
  t771 = Cos(var1[6]);
  t995 = -1.*t771;
  t1064 = 1. + t995;
  t1091 = 0.15121*t1064;
  t1140 = Sin(var1[6]);
  t517 = t118*t347;
  t745 = t634*t652*t654;
  t758 = t517 + t745;
  t1258 = -1.*t634*t118*t652;
  t1260 = t347*t654;
  t1282 = t1258 + t1260;
  t1377 = Cos(var1[7]);
  t1402 = -1.*t1377;
  t1409 = 1. + t1402;
  t1429 = Sin(var1[7]);
  t1556 = Cos(var1[4]);
  t1621 = -1. + t1377;
  t1311 = t771*t758;
  t1324 = -1.*t1282*t1140;
  t1350 = t1311 + t1324;
  t1471 = t771*t1282;
  t1486 = t758*t1140;
  t1502 = t1471 + t1486;
  t1686 = Cos(var1[8]);
  t1689 = -1.*t1686;
  t1694 = 1. + t1689;
  t1699 = Sin(var1[8]);
  t1635 = 4.e-6*t634*t1556*t1621;
  t1638 = 1.6e-11*t1621;
  t1641 = 1. + t1638;
  t1678 = t1641*t1350;
  t1680 = 4.e-6*t1502*t1429;
  t1681 = t1635 + t1678 + t1680;
  t1850 = -1. + t1686;
  t1808 = t634*t1556*t1377;
  t1811 = 4.e-6*t1621*t1350;
  t1812 = t1502*t1429;
  t1818 = t1808 + t1811 + t1812;
  t1730 = -1.000000000016*t1409;
  t1731 = 1. + t1730;
  t1737 = t1731*t1502;
  t1750 = -1.*t634*t1556*t1429;
  t1770 = -4.e-6*t1350*t1429;
  t1787 = t1737 + t1750 + t1770;
  p_output1[0]=(t1091 + 0.15121*t1140)*t1282 + (0.281210000008499*t1409 + 0.03874900000062*t1429)*t1502 + (0.503210000016051*t1694 + 0.03874900000062*t1699)*t1787 + 0.80321*(-4.e-6*t1681*t1699 + (1. - 1.000000000016*t1694)*t1787 - 1.*t1699*t1818) - 0.03875*(t1699*t1787 + t1686*t1818 + 4.e-6*t1681*t1850) + 0.14871*(4.e-6*t1699*t1787 + t1681*(1. + 1.6e-11*t1850) + 4.e-6*t1818*t1850) + (t1091 - 0.15121*t1140)*t758 + var1[2] + t1350*(-1.5499600000248e-7*t1409 + 1.124840000016e-6*t1429 - 1.2484e-7*var1[7]) + t1556*t634*(-0.03874900000062*t1409 + 0.281210000004*t1429 + 4.9936e-13*var1[7]) + t1681*(-1.5499600000248e-7*t1694 + 2.012840000032e-6*t1699 - 1.284e-8*var1[8]) + t1818*(-0.03874900000062*t1694 + 0.503210000008*t1699 + 5.136e-14*var1[8]);
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

#include "foot_clearance_FlFootParallelStance1.hh"

namespace ParallelStance1
{

void foot_clearance_FlFootParallelStance1_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
