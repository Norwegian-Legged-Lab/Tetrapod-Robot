/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:15:49 GMT+01:00
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
  double t271;
  double t346;
  double t358;
  double t390;
  double t35;
  double t511;
  double t514;
  double t527;
  double t532;
  double t543;
  double t567;
  double t601;
  double t574;
  double t611;
  double t410;
  double t413;
  double t596;
  double t614;
  double t615;
  double t628;
  double t629;
  double t631;
  double t654;
  double t388;
  double t953;
  double t958;
  double t979;
  double t1008;
  double t257;
  double t840;
  double t793;
  double t796;
  double t806;
  double t895;
  double t914;
  double t928;
  double t1035;
  double t422;
  double t1050;
  double t392;
  double t1007;
  double t1127;
  double t1135;
  double t1172;
  double t715;
  double t1054;
  double t662;
  double t1217;
  double t1051;
  double t1052;
  double t1058;
  double t1061;
  double t1062;
  double t1063;
  double t1071;
  double t1074;
  double t1232;
  double t1166;
  double t1168;
  double t1169;
  double t1174;
  double t1184;
  double t1193;
  double t1194;
  double t1195;
  double t1247;
  double t1253;
  double t1259;
  double t1262;
  double t1268;
  double t1269;
  double t1271;
  double t1274;
  double t1107;
  double t1305;
  double t1137;
  double t1333;
  double t1291;
  double t1019;
  t271 = Cos(var1[16]);
  t346 = -1.*t271;
  t358 = 1. + t346;
  t390 = Sin(var1[16]);
  t35 = Cos(var1[3]);
  t511 = Cos(var1[15]);
  t514 = -1.*t511;
  t527 = 1. + t514;
  t532 = -0.15121*t527;
  t543 = Sin(var1[15]);
  t567 = Cos(var1[5]);
  t601 = Sin(var1[3]);
  t574 = Sin(var1[4]);
  t611 = Sin(var1[5]);
  t410 = -1. + t271;
  t413 = 4.e-6*t410;
  t596 = -1.*t35*t567*t574;
  t614 = t601*t611;
  t615 = t596 + t614;
  t628 = t567*t601;
  t629 = t35*t574*t611;
  t631 = t628 + t629;
  t654 = 7.e-6*t358;
  t388 = 2.8e-11*t358;
  t953 = Cos(var1[17]);
  t958 = -1.*t953;
  t979 = 1. + t958;
  t1008 = Sin(var1[17]);
  t257 = Cos(var1[4]);
  t840 = -4.e-6*t390;
  t793 = -1.*t543*t615;
  t796 = t511*t631;
  t806 = t793 + t796;
  t895 = t511*t615;
  t914 = t543*t631;
  t928 = t895 + t914;
  t1035 = 2.8e-11*t979;
  t422 = -7.e-6*t390;
  t1050 = -2.8e-11*t358;
  t392 = -1.*t390;
  t1007 = 7.e-6*t979;
  t1127 = -1. + t953;
  t1135 = 4.e-6*t1127;
  t1172 = 4.e-6*t358;
  t715 = 7.e-6*t390;
  t1054 = -7.e-6*t358;
  t662 = 4.e-6*t390;
  t1217 = 4.e-6*t1008;
  t1051 = t1050 + t390;
  t1052 = t35*t257*t1051;
  t1058 = t1054 + t840;
  t1061 = t1058*t806;
  t1062 = -1.000000000016*t358;
  t1063 = 1. + t1062;
  t1071 = t1063*t928;
  t1074 = t1052 + t1061 + t1071;
  t1232 = 7.e-6*t1008;
  t1166 = -1.000000000049*t358;
  t1168 = 1. + t1166;
  t1169 = t1168*t35*t257;
  t1174 = t1172 + t422;
  t1184 = t1174*t806;
  t1193 = t1050 + t392;
  t1194 = t1193*t928;
  t1195 = t1169 + t1184 + t1194;
  t1247 = t1172 + t715;
  t1253 = t35*t257*t1247;
  t1259 = -6.5e-11*t358;
  t1262 = 1. + t1259;
  t1268 = t1262*t806;
  t1269 = t1054 + t662;
  t1271 = t1269*t928;
  t1274 = t1253 + t1268 + t1271;
  t1107 = -1.*t1008;
  t1305 = 4.e-6*t979;
  t1137 = -7.e-6*t1008;
  t1333 = -2.8e-11*t979;
  t1291 = -7.e-6*t979;
  t1019 = -4.e-6*t1008;
  p_output1[0]=(t532 - 0.15121*t543)*t615 + (t532 + 0.15121*t543)*t631 - 0.038576*(t1274*(t1137 + t1305) + t1074*(t1107 + t1333) + t1195*(1. - 1.000000000049*t979)) - 0.80315*(t1274*(t1019 + t1291) + t1195*(t1008 + t1333) + t1074*(1. - 1.000000000016*t979)) - 0.148715*(t1074*(t1217 + t1291) + t1195*(t1232 + t1305) + t1274*(1. - 6.5e-11*t979)) + var1[2] + t928*(-0.2812110000084994*t358 - 0.038749000006999997*(t388 + t390) - 1.8134809999999998e-6*(t654 + t840) - 2.7726089999999997e-12*var1[16]) + t257*t35*(-0.03874900000889869*t358 - 0.281211000004*(t388 + t392) - 1.8134809999999998e-6*(t413 + t422) + 1.5843479999999999e-12*var1[16]) + t806*(-1.1787626499999999e-16*t358 - 0.281211000004*(t654 + t662) - 0.038749000006999997*(t413 + t715) + 3.9608699999999997e-7*var1[16]) + t1074*(-3.367757e-6*(t1007 + t1019) - 0.038575000014*(t1008 + t1035) - 0.5031510000160505*t979 - 1.9784030000000015e-12*var1[17]) + t1195*(-0.5031510000080001*(t1035 + t1107) - 3.367757e-6*(t1135 + t1137) - 0.03857500001589017*t979 + 1.1305160000000008e-12*var1[17]) + t1274*(-0.5031510000080001*(t1007 + t1217) - 0.038575000014*(t1135 + t1232) - 2.18904205e-16*t979 + 2.826290000000002e-7*var1[17]);
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
