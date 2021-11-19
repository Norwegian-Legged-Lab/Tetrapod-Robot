/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 18:01:36 GMT+01:00
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
  double t434;
  double t511;
  double t655;
  double t999;
  double t780;
  double t1091;
  double t1047;
  double t1054;
  double t1108;
  double t915;
  double t1123;
  double t1078;
  double t1109;
  double t1118;
  double t1147;
  double t1163;
  double t1168;
  double t767;
  double t1190;
  double t829;
  double t911;
  double t938;
  double t955;
  double t1629;
  double t1754;
  double t1138;
  double t1146;
  double t1671;
  double t1869;
  double t1903;
  double t1917;
  double t1925;
  double t1928;
  double t1198;
  double t1201;
  double t1228;
  double t1232;
  double t1914;
  double t1938;
  double t1939;
  double t1275;
  double t1296;
  double t1964;
  double t1972;
  double t1985;
  double t1329;
  double t1339;
  double t1344;
  double t1364;
  double t1452;
  double t2110;
  double t2116;
  double t2126;
  double t2139;
  double t2145;
  double t2146;
  double t2135;
  double t2149;
  double t2150;
  double t2168;
  double t2177;
  double t2179;
  t434 = Cos(var1[13]);
  t511 = -1.*t434;
  t655 = 1. + t511;
  t999 = Cos(var1[4]);
  t780 = Sin(var1[13]);
  t1091 = Cos(var1[12]);
  t1047 = Cos(var1[5]);
  t1054 = Sin(var1[12]);
  t1108 = Sin(var1[5]);
  t915 = Sin(var1[4]);
  t1123 = -7.e-6*t655;
  t1078 = -1.*t999*t1047*t1054;
  t1109 = -1.*t1091*t999*t1108;
  t1118 = t1078 + t1109;
  t1147 = t1091*t999*t1047;
  t1163 = -1.*t999*t1054*t1108;
  t1168 = t1147 + t1163;
  t767 = -4.e-6*t655;
  t1190 = 2.7999999999999997e-11*t655;
  t829 = -7.e-6*t780;
  t911 = t767 + t829;
  t938 = -6.5e-11*t655;
  t955 = 1. + t938;
  t1629 = Sin(var1[3]);
  t1754 = Cos(var1[3]);
  t1138 = 4.e-6*t780;
  t1146 = t1123 + t1138;
  t1671 = t1047*t1629*t915;
  t1869 = t1754*t1108;
  t1903 = t1671 + t1869;
  t1917 = t1754*t1047;
  t1925 = -1.*t1629*t915*t1108;
  t1928 = t1917 + t1925;
  t1198 = -1.*t780;
  t1201 = t1190 + t1198;
  t1228 = -4.e-6*t780;
  t1232 = t1123 + t1228;
  t1914 = -1.*t1054*t1903;
  t1938 = t1091*t1928;
  t1939 = t1914 + t1938;
  t1275 = -1.000000000016*t655;
  t1296 = 1. + t1275;
  t1964 = t1091*t1903;
  t1972 = t1054*t1928;
  t1985 = t1964 + t1972;
  t1329 = -1.000000000049*t655;
  t1339 = 1. + t1329;
  t1344 = 7.e-6*t780;
  t1364 = t767 + t1344;
  t1452 = t1190 + t780;
  t2110 = -1.*t1754*t1047*t915;
  t2116 = t1629*t1108;
  t2126 = t2110 + t2116;
  t2139 = t1047*t1629;
  t2145 = t1754*t915*t1108;
  t2146 = t2139 + t2145;
  t2135 = -1.*t1054*t2126;
  t2149 = t1091*t2146;
  t2150 = t2135 + t2149;
  t2168 = t1091*t2126;
  t2177 = t1054*t2146;
  t2179 = t2168 + t2177;
  p_output1[0]=t1146*t1168 + t911*t915 - 7.e-6*(t1118*t1232 + t1168*t1296 + t1201*t915) - 4.e-6*(t1118*t1364 + t1168*t1452 + t1339*t915) + t1118*t955;
  p_output1[1]=t1146*t1985 + t1939*t955 - 1.*t1629*t911*t999 - 7.e-6*(t1232*t1939 + t1296*t1985 - 1.*t1201*t1629*t999) - 4.e-6*(t1364*t1939 + t1452*t1985 - 1.*t1339*t1629*t999);
  p_output1[2]=t1146*t2179 + t2150*t955 + t1754*t911*t999 - 7.e-6*(t1232*t2150 + t1296*t2179 + t1201*t1754*t999) - 4.e-6*(t1364*t2150 + t1452*t2179 + t1339*t1754*t999);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Joint_rl_hip_pitch_axis.hh"

namespace SymFunction
{

void Joint_rl_hip_pitch_axis_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
