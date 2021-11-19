/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:32:47 GMT+01:00
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
  double t466;
  double t469;
  double t470;
  double t496;
  double t297;
  double t619;
  double t630;
  double t645;
  double t657;
  double t670;
  double t720;
  double t746;
  double t739;
  double t750;
  double t540;
  double t558;
  double t745;
  double t762;
  double t772;
  double t812;
  double t813;
  double t814;
  double t821;
  double t494;
  double t1130;
  double t1141;
  double t1153;
  double t1167;
  double t408;
  double t1027;
  double t964;
  double t976;
  double t1000;
  double t1077;
  double t1088;
  double t1104;
  double t1180;
  double t562;
  double t1194;
  double t499;
  double t1158;
  double t1301;
  double t1303;
  double t1323;
  double t932;
  double t1207;
  double t856;
  double t1364;
  double t1201;
  double t1202;
  double t1208;
  double t1210;
  double t1214;
  double t1216;
  double t1224;
  double t1232;
  double t1373;
  double t1314;
  double t1316;
  double t1320;
  double t1328;
  double t1334;
  double t1336;
  double t1338;
  double t1342;
  double t1388;
  double t1392;
  double t1397;
  double t1402;
  double t1414;
  double t1416;
  double t1420;
  double t1422;
  double t1294;
  double t1427;
  double t1304;
  double t1443;
  double t1424;
  double t1170;
  t466 = Cos(var1[16]);
  t469 = -1.*t466;
  t470 = 1. + t469;
  t496 = Sin(var1[16]);
  t297 = Cos(var1[3]);
  t619 = Cos(var1[15]);
  t630 = -1.*t619;
  t645 = 1. + t630;
  t657 = -0.15121*t645;
  t670 = Sin(var1[15]);
  t720 = Cos(var1[5]);
  t746 = Sin(var1[3]);
  t739 = Sin(var1[4]);
  t750 = Sin(var1[5]);
  t540 = -1. + t466;
  t558 = 4.e-6*t540;
  t745 = -1.*t297*t720*t739;
  t762 = t746*t750;
  t772 = t745 + t762;
  t812 = t720*t746;
  t813 = t297*t739*t750;
  t814 = t812 + t813;
  t821 = 7.e-6*t470;
  t494 = 2.8e-11*t470;
  t1130 = Cos(var1[17]);
  t1141 = -1.*t1130;
  t1153 = 1. + t1141;
  t1167 = Sin(var1[17]);
  t408 = Cos(var1[4]);
  t1027 = -4.e-6*t496;
  t964 = -1.*t670*t772;
  t976 = t619*t814;
  t1000 = t964 + t976;
  t1077 = t619*t772;
  t1088 = t670*t814;
  t1104 = t1077 + t1088;
  t1180 = 2.8e-11*t1153;
  t562 = -7.e-6*t496;
  t1194 = -2.8e-11*t470;
  t499 = -1.*t496;
  t1158 = 7.e-6*t1153;
  t1301 = -1. + t1130;
  t1303 = 4.e-6*t1301;
  t1323 = 4.e-6*t470;
  t932 = 7.e-6*t496;
  t1207 = -7.e-6*t470;
  t856 = 4.e-6*t496;
  t1364 = 4.e-6*t1167;
  t1201 = t1194 + t496;
  t1202 = t297*t408*t1201;
  t1208 = t1207 + t1027;
  t1210 = t1208*t1000;
  t1214 = -1.000000000016*t470;
  t1216 = 1. + t1214;
  t1224 = t1216*t1104;
  t1232 = t1202 + t1210 + t1224;
  t1373 = 7.e-6*t1167;
  t1314 = -1.000000000049*t470;
  t1316 = 1. + t1314;
  t1320 = t1316*t297*t408;
  t1328 = t1323 + t562;
  t1334 = t1328*t1000;
  t1336 = t1194 + t499;
  t1338 = t1336*t1104;
  t1342 = t1320 + t1334 + t1338;
  t1388 = t1323 + t932;
  t1392 = t297*t408*t1388;
  t1397 = -6.5e-11*t470;
  t1402 = 1. + t1397;
  t1414 = t1402*t1000;
  t1416 = t1207 + t856;
  t1420 = t1416*t1104;
  t1422 = t1392 + t1414 + t1420;
  t1294 = -1.*t1167;
  t1427 = 4.e-6*t1153;
  t1304 = -7.e-6*t1167;
  t1443 = -2.8e-11*t1153;
  t1424 = -7.e-6*t1153;
  t1170 = -4.e-6*t1167;
  p_output1[0]=-0.148715*((1. - 6.5e-11*t1153)*t1422 + t1232*(t1364 + t1424) + t1342*(t1373 + t1427)) - 0.80315*((1. - 1.000000000016*t1153)*t1232 + t1422*(t1170 + t1424) + t1342*(t1167 + t1443)) - 0.038576*((1. - 1.000000000049*t1153)*t1342 + t1422*(t1304 + t1427) + t1232*(t1294 + t1443)) + (t657 - 0.15121*t670)*t772 + (t657 + 0.15121*t670)*t814 + var1[2] + t1104*(-0.2812110000084994*t470 - 0.038749000006999997*(t494 + t496) - 1.8134809999999998e-6*(t1027 + t821) - 2.7726089999999997e-12*var1[16]) + t297*t408*(-0.03874900000889869*t470 - 0.281211000004*(t494 + t499) - 1.8134809999999998e-6*(t558 + t562) + 1.5843479999999999e-12*var1[16]) + t1000*(-1.1787626499999999e-16*t470 - 0.281211000004*(t821 + t856) - 0.038749000006999997*(t558 + t932) + 3.9608699999999997e-7*var1[16]) + t1232*(-0.5031510000160505*t1153 - 3.367757e-6*(t1158 + t1170) - 0.038575000014*(t1167 + t1180) - 1.9784030000000015e-12*var1[17]) + t1342*(-0.03857500001589017*t1153 - 0.5031510000080001*(t1180 + t1294) - 3.367757e-6*(t1303 + t1304) + 1.1305160000000008e-12*var1[17]) + t1422*(-2.18904205e-16*t1153 - 0.5031510000080001*(t1158 + t1364) - 0.038575000014*(t1303 + t1373) + 2.826290000000002e-7*var1[17]);
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

#include "foot_clearance_RrFootParallelStance2.hh"

namespace ParallelStance2
{

void foot_clearance_RrFootParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
