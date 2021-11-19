/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:30:45 GMT+01:00
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
  double t71;
  double t112;
  double t118;
  double t141;
  double t37;
  double t399;
  double t431;
  double t492;
  double t520;
  double t522;
  double t562;
  double t599;
  double t578;
  double t605;
  double t134;
  double t591;
  double t612;
  double t613;
  double t623;
  double t630;
  double t632;
  double t317;
  double t679;
  double t1121;
  double t1124;
  double t1130;
  double t1140;
  double t57;
  double t952;
  double t986;
  double t833;
  double t885;
  double t896;
  double t1090;
  double t1093;
  double t1112;
  double t1158;
  double t645;
  double t1211;
  double t720;
  double t1268;
  double t1136;
  double t1298;
  double t1303;
  double t158;
  double t1176;
  double t1188;
  double t1204;
  double t1226;
  double t1227;
  double t1251;
  double t1252;
  double t1257;
  double t1258;
  double t1356;
  double t1305;
  double t1315;
  double t1322;
  double t1324;
  double t1332;
  double t1334;
  double t1339;
  double t1341;
  double t1395;
  double t1400;
  double t1406;
  double t1407;
  double t1410;
  double t1411;
  double t1412;
  double t1413;
  double t1160;
  double t1415;
  double t1143;
  double t1463;
  double t1276;
  double t1423;
  double t1426;
  double t1269;
  t71 = Cos(var1[13]);
  t112 = -1.*t71;
  t118 = 1. + t112;
  t141 = Sin(var1[13]);
  t37 = Cos(var1[3]);
  t399 = Cos(var1[12]);
  t431 = -1.*t399;
  t492 = 1. + t431;
  t520 = Sin(var1[12]);
  t522 = 0.15121*t520;
  t562 = Cos(var1[5]);
  t599 = Sin(var1[3]);
  t578 = Sin(var1[4]);
  t605 = Sin(var1[5]);
  t134 = 4.e-6*t118;
  t591 = -1.*t37*t562*t578;
  t612 = t599*t605;
  t613 = t591 + t612;
  t623 = t562*t599;
  t630 = t37*t578*t605;
  t632 = t623 + t630;
  t317 = -2.8e-11*t118;
  t679 = 7.e-6*t118;
  t1121 = Cos(var1[14]);
  t1124 = -1.*t1121;
  t1130 = 1. + t1124;
  t1140 = Sin(var1[14]);
  t57 = Cos(var1[4]);
  t952 = -1.*t141;
  t986 = -4.e-6*t141;
  t833 = -1.*t520*t613;
  t885 = t399*t632;
  t896 = t833 + t885;
  t1090 = t399*t613;
  t1093 = t520*t632;
  t1112 = t1090 + t1093;
  t1158 = 7.e-6*t1130;
  t645 = -7.e-6*t141;
  t1211 = -7.e-6*t118;
  t720 = 4.e-6*t141;
  t1268 = 4.e-6*t1130;
  t1136 = -2.8e-11*t1130;
  t1298 = -1. + t71;
  t1303 = 4.e-6*t1298;
  t158 = 7.e-6*t141;
  t1176 = 2.8e-11*t118;
  t1188 = t1176 + t952;
  t1204 = t37*t57*t1188;
  t1226 = t1211 + t986;
  t1227 = t1226*t896;
  t1251 = -1.000000000016*t118;
  t1252 = 1. + t1251;
  t1257 = t1252*t1112;
  t1258 = t1204 + t1227 + t1257;
  t1356 = 7.e-6*t1140;
  t1305 = t1303 + t645;
  t1315 = t37*t57*t1305;
  t1322 = -6.5e-11*t118;
  t1324 = 1. + t1322;
  t1332 = t1324*t896;
  t1334 = t1211 + t720;
  t1339 = t1334*t1112;
  t1341 = t1315 + t1332 + t1339;
  t1395 = -1.000000000049*t118;
  t1400 = 1. + t1395;
  t1406 = t1400*t37*t57;
  t1407 = t1303 + t158;
  t1410 = t1407*t896;
  t1411 = t1176 + t141;
  t1412 = t1411*t1112;
  t1413 = t1406 + t1410 + t1412;
  t1160 = -4.e-6*t1140;
  t1415 = 2.8e-11*t1130;
  t1143 = -1.*t1140;
  t1463 = -7.e-6*t1130;
  t1276 = 4.e-6*t1140;
  t1423 = -1. + t1121;
  t1426 = 4.e-6*t1423;
  t1269 = -7.e-6*t1140;
  p_output1[0]=-0.038924*((1. - 1.000000000049*t1130)*t1413 + t1258*(t1140 + t1415) + t1341*(t1356 + t1426)) - 0.80315*((1. - 1.000000000016*t1130)*t1258 + t1413*(t1143 + t1415) + t1341*(t1160 + t1463)) + 0.148705*((1. - 6.5e-11*t1130)*t1341 + t1413*(t1269 + t1426) + t1258*(t1276 + t1463)) + (-0.15121*t492 + t522)*t613 + (0.15121*t492 + t522)*t632 + var1[2] + t896*(-1.38024835e-16*t118 - 0.038748999993*(t134 + t645) - 0.281209000004*(t679 + t720) - 1.4640699999999997e-7*var1[13]) + t37*t57*(-0.0387489999948987*t118 - 2.123459e-6*(t134 + t158) - 0.281209000004*(t141 + t317) + 5.856279999999999e-13*var1[13]) + t1112*(-0.28120900000849935*t118 - 0.038748999993*(t317 + t952) - 2.123459e-6*(t679 + t986) + 1.0248489999999998e-12*var1[13]) + t1341*(-2.3905277499999995e-16*t1130 - 0.038922999986*(t1268 + t1269) - 0.503149000008*(t1158 + t1276) - 2.598649999999999e-7*var1[14]) + t1413*(-0.03892299998790722*t1130 - 0.503149000008*(t1136 + t1140) - 3.6777349999999994e-6*(t1268 + t1356) + 1.0394599999999997e-12*var1[14]) + t1258*(-0.5031490000160505*t1130 - 0.038922999986*(t1136 + t1143) - 3.6777349999999994e-6*(t1158 + t1160) + 1.8190549999999993e-12*var1[14]);
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

#include "foot_clearance_RlFootParallelStance.hh"

namespace ParallelStance
{

void foot_clearance_RlFootParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
