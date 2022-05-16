/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 23:17:37 GMT+01:00
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
  double t231;
  double t234;
  double t240;
  double t312;
  double t18;
  double t27;
  double t99;
  double t106;
  double t118;
  double t129;
  double t347;
  double t357;
  double t22;
  double t457;
  double t493;
  double t309;
  double t406;
  double t996;
  double t670;
  double t756;
  double t763;
  double t1086;
  double t1097;
  double t1105;
  double t365;
  double t1120;
  double t324;
  double t1221;
  double t636;
  double t1156;
  double t522;
  double t226;
  double t307;
  double t329;
  double t345;
  double t375;
  double t381;
  double t397;
  double t187;
  double t203;
  double t1399;
  double t423;
  double t447;
  double t1430;
  double t466;
  double t492;
  double t545;
  double t548;
  double t658;
  double t660;
  double t664;
  double t1415;
  double t1434;
  double t1453;
  double t1487;
  double t1489;
  double t1493;
  double t788;
  double t953;
  double t1030;
  double t1038;
  double t1048;
  double t1060;
  double t1067;
  double t1140;
  double t1173;
  double t1503;
  double t1504;
  double t1511;
  double t1188;
  double t1191;
  double t1518;
  double t1520;
  double t1524;
  double t1215;
  double t1219;
  double t1224;
  double t1235;
  double t1248;
  double t1255;
  double t1263;
  double t1275;
  double t1598;
  double t1600;
  double t1601;
  double t1605;
  double t1608;
  double t1611;
  double t1619;
  double t1621;
  double t1626;
  double t1632;
  double t1638;
  double t1639;
  t231 = Cos(var1[16]);
  t234 = -1.*t231;
  t240 = 1. + t234;
  t312 = Sin(var1[16]);
  t18 = Cos(var1[4]);
  t27 = Cos(var1[15]);
  t99 = -1.*t27;
  t106 = 1. + t99;
  t118 = -0.15121*t106;
  t129 = Sin(var1[15]);
  t347 = -1. + t231;
  t357 = 4.e-6*t347;
  t22 = Cos(var1[5]);
  t457 = Sin(var1[5]);
  t493 = 7.e-6*t240;
  t309 = 2.8e-11*t240;
  t406 = Sin(var1[4]);
  t996 = -4.e-6*t312;
  t670 = -1.*t18*t22*t129;
  t756 = -1.*t27*t18*t457;
  t763 = t670 + t756;
  t1086 = t27*t18*t22;
  t1097 = -1.*t18*t129*t457;
  t1105 = t1086 + t1097;
  t365 = -7.e-6*t312;
  t1120 = -2.8e-11*t240;
  t324 = -1.*t312;
  t1221 = 4.e-6*t240;
  t636 = 7.e-6*t312;
  t1156 = -7.e-6*t240;
  t522 = 4.e-6*t312;
  t226 = 1.5843479999999999e-12*var1[16];
  t307 = -0.03874900000889869*t240;
  t329 = t309 + t324;
  t345 = -0.281211000004*t329;
  t375 = t357 + t365;
  t381 = -1.8134809999999998e-6*t375;
  t397 = t226 + t307 + t345 + t381;
  t187 = -0.15121*t129;
  t203 = t118 + t187;
  t1399 = Sin(var1[3]);
  t423 = 0.15121*t129;
  t447 = t118 + t423;
  t1430 = Cos(var1[3]);
  t466 = 3.9608699999999997e-7*var1[16];
  t492 = -1.1787626499999999e-16*t240;
  t545 = t493 + t522;
  t548 = -0.281211000004*t545;
  t658 = t357 + t636;
  t660 = -0.038749000006999997*t658;
  t664 = t466 + t492 + t548 + t660;
  t1415 = t22*t1399*t406;
  t1434 = t1430*t457;
  t1453 = t1415 + t1434;
  t1487 = t1430*t22;
  t1489 = -1.*t1399*t406*t457;
  t1493 = t1487 + t1489;
  t788 = -2.7726089999999997e-12*var1[16];
  t953 = -0.2812110000084994*t240;
  t1030 = t493 + t996;
  t1038 = -1.8134809999999998e-6*t1030;
  t1048 = t309 + t312;
  t1060 = -0.038749000006999997*t1048;
  t1067 = t788 + t953 + t1038 + t1060;
  t1140 = t1120 + t312;
  t1173 = t1156 + t996;
  t1503 = -1.*t129*t1453;
  t1504 = t27*t1493;
  t1511 = t1503 + t1504;
  t1188 = -1.000000000016*t240;
  t1191 = 1. + t1188;
  t1518 = t27*t1453;
  t1520 = t129*t1493;
  t1524 = t1518 + t1520;
  t1215 = -1.000000000049*t240;
  t1219 = 1. + t1215;
  t1224 = t1221 + t365;
  t1235 = t1120 + t324;
  t1248 = t1221 + t636;
  t1255 = -6.5e-11*t240;
  t1263 = 1. + t1255;
  t1275 = t1156 + t522;
  t1598 = -1.*t1430*t22*t406;
  t1600 = t1399*t457;
  t1601 = t1598 + t1600;
  t1605 = t22*t1399;
  t1608 = t1430*t406*t457;
  t1611 = t1605 + t1608;
  t1619 = -1.*t129*t1601;
  t1621 = t27*t1611;
  t1626 = t1619 + t1621;
  t1632 = t27*t1601;
  t1638 = t129*t1611;
  t1639 = t1632 + t1638;
  p_output1[0]=t1067*t1105 + t18*t203*t22 + t397*t406 - 1.*t18*t447*t457 + t664*t763 - 0.281209*(t1105*t1191 + t1140*t406 + t1173*t763) - 0.03875*(t1105*t1235 + t1219*t406 + t1224*t763) - 0.226711*(t1105*t1275 + t1248*t406 + t1263*t763) + var1[0];
  p_output1[1]=t1067*t1524 - 0.281209*(t1173*t1511 + t1191*t1524 - 1.*t1140*t1399*t18) - 0.03875*(t1224*t1511 + t1235*t1524 - 1.*t1219*t1399*t18) - 0.226711*(t1263*t1511 + t1275*t1524 - 1.*t1248*t1399*t18) + t1453*t203 - 1.*t1399*t18*t397 + t1493*t447 + t1511*t664 + var1[1];
  p_output1[2]=t1067*t1639 - 0.281209*(t1173*t1626 + t1191*t1639 + t1140*t1430*t18) - 0.03875*(t1224*t1626 + t1235*t1639 + t1219*t1430*t18) - 0.226711*(t1263*t1626 + t1275*t1639 + t1248*t1430*t18) + t1601*t203 + t1430*t18*t397 + t1611*t447 + t1626*t664 + var1[2];
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

#include "Joint_rr_hip_pitch_sphere_center.hh"

namespace SymFunction
{

void Joint_rr_hip_pitch_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
