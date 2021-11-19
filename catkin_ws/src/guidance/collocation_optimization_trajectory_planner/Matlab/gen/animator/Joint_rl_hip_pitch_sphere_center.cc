/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 18:01:35 GMT+01:00
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
  double t725;
  double t779;
  double t795;
  double t875;
  double t76;
  double t181;
  double t199;
  double t263;
  double t393;
  double t394;
  double t849;
  double t115;
  double t1102;
  double t947;
  double t1205;
  double t1318;
  double t1069;
  double t1325;
  double t1262;
  double t1267;
  double t1270;
  double t1344;
  double t1353;
  double t1358;
  double t1126;
  double t1420;
  double t1221;
  double t1560;
  double t1566;
  double t893;
  double t1374;
  double t655;
  double t829;
  double t911;
  double t933;
  double t999;
  double t1047;
  double t1066;
  double t355;
  double t434;
  double t1931;
  double t1082;
  double t1099;
  double t1943;
  double t1109;
  double t1122;
  double t1146;
  double t1201;
  double t1228;
  double t1232;
  double t1236;
  double t1939;
  double t1952;
  double t1963;
  double t1972;
  double t1981;
  double t1985;
  double t1296;
  double t1310;
  double t1319;
  double t1323;
  double t1329;
  double t1339;
  double t1340;
  double t1408;
  double t1442;
  double t2002;
  double t2022;
  double t2036;
  double t1495;
  double t1510;
  double t2052;
  double t2053;
  double t2063;
  double t1593;
  double t1605;
  double t1609;
  double t1641;
  double t1786;
  double t1800;
  double t1883;
  double t1905;
  double t2155;
  double t2168;
  double t2174;
  double t2179;
  double t2181;
  double t2188;
  double t2191;
  double t2192;
  double t2197;
  double t2204;
  double t2206;
  double t2213;
  t725 = Cos(var1[13]);
  t779 = -1.*t725;
  t795 = 1. + t779;
  t875 = Sin(var1[13]);
  t76 = Cos(var1[4]);
  t181 = Cos(var1[12]);
  t199 = -1.*t181;
  t263 = 1. + t199;
  t393 = Sin(var1[12]);
  t394 = 0.15121*t393;
  t849 = 4.e-6*t795;
  t115 = Cos(var1[5]);
  t1102 = Sin(var1[5]);
  t947 = -2.8e-11*t795;
  t1205 = 7.e-6*t795;
  t1318 = -1.*t875;
  t1069 = Sin(var1[4]);
  t1325 = -4.e-6*t875;
  t1262 = -1.*t76*t115*t393;
  t1267 = -1.*t181*t76*t1102;
  t1270 = t1262 + t1267;
  t1344 = t181*t76*t115;
  t1353 = -1.*t76*t393*t1102;
  t1358 = t1344 + t1353;
  t1126 = -7.e-6*t875;
  t1420 = -7.e-6*t795;
  t1221 = 4.e-6*t875;
  t1560 = -1. + t725;
  t1566 = 4.e-6*t1560;
  t893 = 7.e-6*t875;
  t1374 = 2.8e-11*t795;
  t655 = 5.856279999999999e-13*var1[13];
  t829 = -0.0387489999948987*t795;
  t911 = t849 + t893;
  t933 = -2.123459e-6*t911;
  t999 = t947 + t875;
  t1047 = -0.281209000004*t999;
  t1066 = t655 + t829 + t933 + t1047;
  t355 = -0.15121*t263;
  t434 = t355 + t394;
  t1931 = Sin(var1[3]);
  t1082 = 0.15121*t263;
  t1099 = t1082 + t394;
  t1943 = Cos(var1[3]);
  t1109 = -1.4640699999999997e-7*var1[13];
  t1122 = -1.38024835e-16*t795;
  t1146 = t849 + t1126;
  t1201 = -0.038748999993*t1146;
  t1228 = t1205 + t1221;
  t1232 = -0.281209000004*t1228;
  t1236 = t1109 + t1122 + t1201 + t1232;
  t1939 = t115*t1931*t1069;
  t1952 = t1943*t1102;
  t1963 = t1939 + t1952;
  t1972 = t1943*t115;
  t1981 = -1.*t1931*t1069*t1102;
  t1985 = t1972 + t1981;
  t1296 = 1.0248489999999998e-12*var1[13];
  t1310 = -0.28120900000849935*t795;
  t1319 = t947 + t1318;
  t1323 = -0.038748999993*t1319;
  t1329 = t1205 + t1325;
  t1339 = -2.123459e-6*t1329;
  t1340 = t1296 + t1310 + t1323 + t1339;
  t1408 = t1374 + t1318;
  t1442 = t1420 + t1325;
  t2002 = -1.*t393*t1963;
  t2022 = t181*t1985;
  t2036 = t2002 + t2022;
  t1495 = -1.000000000016*t795;
  t1510 = 1. + t1495;
  t2052 = t181*t1963;
  t2053 = t393*t1985;
  t2063 = t2052 + t2053;
  t1593 = t1566 + t1126;
  t1605 = -6.5e-11*t795;
  t1609 = 1. + t1605;
  t1641 = t1420 + t1221;
  t1786 = -1.000000000049*t795;
  t1800 = 1. + t1786;
  t1883 = t1566 + t893;
  t1905 = t1374 + t875;
  t2155 = -1.*t1943*t115*t1069;
  t2168 = t1931*t1102;
  t2174 = t2155 + t2168;
  t2179 = t115*t1931;
  t2181 = t1943*t1069*t1102;
  t2188 = t2179 + t2181;
  t2191 = -1.*t393*t2174;
  t2192 = t181*t2188;
  t2197 = t2191 + t2192;
  t2204 = t181*t2174;
  t2206 = t393*t2188;
  t2213 = t2204 + t2206;
  p_output1[0]=t1066*t1069 + t1236*t1270 + t1340*t1358 - 0.281211*(t1069*t1408 + t1270*t1442 + t1358*t1510) + 0.226709*(t1069*t1593 + t1270*t1609 + t1358*t1641) - 0.03875*(t1069*t1800 + t1270*t1883 + t1358*t1905) - 1.*t1099*t1102*t76 + t115*t434*t76 + var1[0];
  p_output1[1]=t1099*t1985 + t1236*t2036 + t1340*t2063 + t1963*t434 - 1.*t1066*t1931*t76 - 0.281211*(t1442*t2036 + t1510*t2063 - 1.*t1408*t1931*t76) + 0.226709*(t1609*t2036 + t1641*t2063 - 1.*t1593*t1931*t76) - 0.03875*(t1883*t2036 + t1905*t2063 - 1.*t1800*t1931*t76) + var1[1];
  p_output1[2]=t1099*t2188 + t1236*t2197 + t1340*t2213 + t2174*t434 + t1066*t1943*t76 - 0.281211*(t1442*t2197 + t1510*t2213 + t1408*t1943*t76) + 0.226709*(t1609*t2197 + t1641*t2213 + t1593*t1943*t76) - 0.03875*(t1883*t2197 + t1905*t2213 + t1800*t1943*t76) + var1[2];
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

#include "Joint_rl_hip_pitch_sphere_center.hh"

namespace SymFunction
{

void Joint_rl_hip_pitch_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
