/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:12:16 GMT+01:00
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
  double t267;
  double t112;
  double t295;
  double t129;
  double t302;
  double t339;
  double t403;
  double t413;
  double t418;
  double t559;
  double t260;
  double t330;
  double t334;
  double t583;
  double t603;
  double t676;
  double t839;
  double t863;
  double t882;
  double t1040;
  double t1179;
  double t1277;
  double t730;
  double t736;
  double t766;
  double t1075;
  double t1076;
  double t1078;
  double t1419;
  double t1487;
  double t1524;
  double t1537;
  double t1299;
  double t1366;
  double t1383;
  double t1389;
  double t1390;
  double t1391;
  double t1867;
  double t1760;
  double t1771;
  double t1779;
  double t1781;
  double t1599;
  double t1618;
  double t1648;
  double t1659;
  double t1663;
  double t1673;
  t267 = Cos(var1[3]);
  t112 = Cos(var1[5]);
  t295 = Sin(var1[4]);
  t129 = Sin(var1[3]);
  t302 = Sin(var1[5]);
  t339 = Cos(var1[6]);
  t403 = -1.*t339;
  t413 = 1. + t403;
  t418 = 0.15121*t413;
  t559 = Sin(var1[6]);
  t260 = t112*t129;
  t330 = t267*t295*t302;
  t334 = t260 + t330;
  t583 = -1.*t267*t112*t295;
  t603 = t129*t302;
  t676 = t583 + t603;
  t839 = Cos(var1[7]);
  t863 = -1.*t839;
  t882 = 1. + t863;
  t1040 = Sin(var1[7]);
  t1179 = Cos(var1[4]);
  t1277 = -1. + t839;
  t730 = t339*t334;
  t736 = -1.*t676*t559;
  t766 = t730 + t736;
  t1075 = t339*t676;
  t1076 = t334*t559;
  t1078 = t1075 + t1076;
  t1419 = Cos(var1[8]);
  t1487 = -1.*t1419;
  t1524 = 1. + t1487;
  t1537 = Sin(var1[8]);
  t1299 = 4.e-6*t267*t1179*t1277;
  t1366 = 1.6e-11*t1277;
  t1383 = 1. + t1366;
  t1389 = t1383*t766;
  t1390 = 4.e-6*t1078*t1040;
  t1391 = t1299 + t1389 + t1390;
  t1867 = -1. + t1419;
  t1760 = t267*t1179*t839;
  t1771 = 4.e-6*t1277*t766;
  t1779 = t1078*t1040;
  t1781 = t1760 + t1771 + t1779;
  t1599 = -1.000000000016*t882;
  t1618 = 1. + t1599;
  t1648 = t1618*t1078;
  t1659 = -1.*t267*t1179*t1040;
  t1663 = -4.e-6*t766*t1040;
  t1673 = t1648 + t1659 + t1663;
  p_output1[0]=(0.503210000016051*t1524 + 0.03874900000062*t1537)*t1673 + 0.80321*(-4.e-6*t1391*t1537 + (1. - 1.000000000016*t1524)*t1673 - 1.*t1537*t1781) - 0.03875*(t1537*t1673 + t1419*t1781 + 4.e-6*t1391*t1867) + 0.14871*(4.e-6*t1537*t1673 + t1391*(1. + 1.6e-11*t1867) + 4.e-6*t1781*t1867) + t334*(t418 - 0.15121*t559) + (t418 + 0.15121*t559)*t676 + t1078*(0.03874900000062*t1040 + 0.281210000008499*t882) + var1[2] + t766*(1.124840000016e-6*t1040 - 1.5499600000248e-7*t882 - 1.2484e-7*var1[7]) + t1179*t267*(0.281210000004*t1040 - 0.03874900000062*t882 + 4.9936e-13*var1[7]) + t1391*(-1.5499600000248e-7*t1524 + 2.012840000032e-6*t1537 - 1.284e-8*var1[8]) + t1781*(-0.03874900000062*t1524 + 0.503210000008*t1537 + 5.136e-14*var1[8]);
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

#include "u_frontSwingFootHeight1_ParallelStance1.hh"

namespace ParallelStance1
{

void u_frontSwingFootHeight1_ParallelStance1_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
