/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:30:57 GMT+01:00
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
  double t704;
  double t440;
  double t710;
  double t482;
  double t755;
  double t835;
  double t864;
  double t884;
  double t907;
  double t911;
  double t698;
  double t774;
  double t782;
  double t998;
  double t1006;
  double t1024;
  double t1154;
  double t1175;
  double t1177;
  double t1235;
  double t1450;
  double t1564;
  double t1081;
  double t1087;
  double t1119;
  double t1295;
  double t1301;
  double t1335;
  double t1835;
  double t1874;
  double t1880;
  double t1890;
  double t1572;
  double t1603;
  double t1629;
  double t1632;
  double t1689;
  double t1717;
  double t2218;
  double t2122;
  double t2139;
  double t2146;
  double t2158;
  double t1987;
  double t2059;
  double t2066;
  double t2078;
  double t2080;
  double t2083;
  t704 = Cos(var1[3]);
  t440 = Cos(var1[5]);
  t710 = Sin(var1[4]);
  t482 = Sin(var1[3]);
  t755 = Sin(var1[5]);
  t835 = Cos(var1[6]);
  t864 = -1.*t835;
  t884 = 1. + t864;
  t907 = 0.15121*t884;
  t911 = Sin(var1[6]);
  t698 = t440*t482;
  t774 = t704*t710*t755;
  t782 = t698 + t774;
  t998 = -1.*t704*t440*t710;
  t1006 = t482*t755;
  t1024 = t998 + t1006;
  t1154 = Cos(var1[7]);
  t1175 = -1.*t1154;
  t1177 = 1. + t1175;
  t1235 = Sin(var1[7]);
  t1450 = Cos(var1[4]);
  t1564 = -1. + t1154;
  t1081 = t835*t782;
  t1087 = -1.*t1024*t911;
  t1119 = t1081 + t1087;
  t1295 = t835*t1024;
  t1301 = t782*t911;
  t1335 = t1295 + t1301;
  t1835 = Cos(var1[8]);
  t1874 = -1.*t1835;
  t1880 = 1. + t1874;
  t1890 = Sin(var1[8]);
  t1572 = 4.e-6*t704*t1450*t1564;
  t1603 = 1.6e-11*t1564;
  t1629 = 1. + t1603;
  t1632 = t1629*t1119;
  t1689 = 4.e-6*t1335*t1235;
  t1717 = t1572 + t1632 + t1689;
  t2218 = -1. + t1835;
  t2122 = t704*t1450*t1154;
  t2139 = 4.e-6*t1564*t1119;
  t2146 = t1335*t1235;
  t2158 = t2122 + t2139 + t2146;
  t1987 = -1.000000000016*t1177;
  t2059 = 1. + t1987;
  t2066 = t2059*t1335;
  t2078 = -1.*t704*t1450*t1235;
  t2080 = -4.e-6*t1119*t1235;
  t2083 = t2066 + t2078 + t2080;
  p_output1[0]=(0.281210000008499*t1177 + 0.03874900000062*t1235)*t1335 + (0.503210000016051*t1880 + 0.03874900000062*t1890)*t2083 + 0.80321*(-4.e-6*t1717*t1890 + (1. - 1.000000000016*t1880)*t2083 - 1.*t1890*t2158) - 0.03875*(t1890*t2083 + t1835*t2158 + 4.e-6*t1717*t2218) + 0.14871*(4.e-6*t1890*t2083 + t1717*(1. + 1.6e-11*t2218) + 4.e-6*t2158*t2218) + t782*(t907 - 0.15121*t911) + t1024*(t907 + 0.15121*t911) + var1[2] + t1119*(-1.5499600000248e-7*t1177 + 1.124840000016e-6*t1235 - 1.2484e-7*var1[7]) + t1450*t704*(-0.03874900000062*t1177 + 0.281210000004*t1235 + 4.9936e-13*var1[7]) + t1717*(-1.5499600000248e-7*t1880 + 2.012840000032e-6*t1890 - 1.284e-8*var1[8]) + t2158*(-0.03874900000062*t1880 + 0.503210000008*t1890 + 5.136e-14*var1[8]);
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

#include "u_frontSwingFootHeight_ParallelStance.hh"

namespace ParallelStance
{

void u_frontSwingFootHeight_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
