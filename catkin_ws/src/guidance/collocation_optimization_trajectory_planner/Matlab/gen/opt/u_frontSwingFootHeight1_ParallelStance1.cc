/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:29:39 GMT+01:00
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
  double t530;
  double t393;
  double t539;
  double t503;
  double t545;
  double t643;
  double t660;
  double t682;
  double t687;
  double t690;
  double t525;
  double t553;
  double t637;
  double t920;
  double t933;
  double t983;
  double t1140;
  double t1168;
  double t1169;
  double t1193;
  double t1573;
  double t1660;
  double t1097;
  double t1098;
  double t1113;
  double t1330;
  double t1332;
  double t1423;
  double t1803;
  double t1825;
  double t1852;
  double t1912;
  double t1666;
  double t1729;
  double t1746;
  double t1755;
  double t1774;
  double t1784;
  double t2231;
  double t2105;
  double t2115;
  double t2118;
  double t2119;
  double t1959;
  double t1964;
  double t1966;
  double t1985;
  double t2003;
  double t2014;
  t530 = Cos(var1[3]);
  t393 = Cos(var1[5]);
  t539 = Sin(var1[4]);
  t503 = Sin(var1[3]);
  t545 = Sin(var1[5]);
  t643 = Cos(var1[6]);
  t660 = -1.*t643;
  t682 = 1. + t660;
  t687 = 0.15121*t682;
  t690 = Sin(var1[6]);
  t525 = t393*t503;
  t553 = t530*t539*t545;
  t637 = t525 + t553;
  t920 = -1.*t530*t393*t539;
  t933 = t503*t545;
  t983 = t920 + t933;
  t1140 = Cos(var1[7]);
  t1168 = -1.*t1140;
  t1169 = 1. + t1168;
  t1193 = Sin(var1[7]);
  t1573 = Cos(var1[4]);
  t1660 = -1. + t1140;
  t1097 = t643*t637;
  t1098 = -1.*t983*t690;
  t1113 = t1097 + t1098;
  t1330 = t643*t983;
  t1332 = t637*t690;
  t1423 = t1330 + t1332;
  t1803 = Cos(var1[8]);
  t1825 = -1.*t1803;
  t1852 = 1. + t1825;
  t1912 = Sin(var1[8]);
  t1666 = 4.e-6*t530*t1573*t1660;
  t1729 = 1.6e-11*t1660;
  t1746 = 1. + t1729;
  t1755 = t1746*t1113;
  t1774 = 4.e-6*t1423*t1193;
  t1784 = t1666 + t1755 + t1774;
  t2231 = -1. + t1803;
  t2105 = t530*t1573*t1140;
  t2115 = 4.e-6*t1660*t1113;
  t2118 = t1423*t1193;
  t2119 = t2105 + t2115 + t2118;
  t1959 = -1.000000000016*t1169;
  t1964 = 1. + t1959;
  t1966 = t1964*t1423;
  t1985 = -1.*t530*t1573*t1193;
  t2003 = -4.e-6*t1113*t1193;
  t2014 = t1966 + t1985 + t2003;
  p_output1[0]=(0.281210000008499*t1169 + 0.03874900000062*t1193)*t1423 + (0.503210000016051*t1852 + 0.03874900000062*t1912)*t2014 + 0.80321*(-4.e-6*t1784*t1912 + (1. - 1.000000000016*t1852)*t2014 - 1.*t1912*t2119) - 0.03875*(t1912*t2014 + t1803*t2119 + 4.e-6*t1784*t2231) + 0.14871*(4.e-6*t1912*t2014 + t1784*(1. + 1.6e-11*t2231) + 4.e-6*t2119*t2231) + t637*(t687 - 0.15121*t690) + (t687 + 0.15121*t690)*t983 + var1[2] + t1113*(-1.5499600000248e-7*t1169 + 1.124840000016e-6*t1193 - 1.2484e-7*var1[7]) + t1573*t530*(-0.03874900000062*t1169 + 0.281210000004*t1193 + 4.9936e-13*var1[7]) + t1784*(-1.5499600000248e-7*t1852 + 2.012840000032e-6*t1912 - 1.284e-8*var1[8]) + t2119*(-0.03874900000062*t1852 + 0.503210000008*t1912 + 5.136e-14*var1[8]);
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
