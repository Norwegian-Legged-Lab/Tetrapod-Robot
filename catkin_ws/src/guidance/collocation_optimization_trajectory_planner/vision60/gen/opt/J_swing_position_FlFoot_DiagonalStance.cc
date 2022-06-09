/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:06:58 GMT+02:00
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
  double t1175;
  double t1097;
  double t1134;
  double t1167;
  double t1179;
  double t1190;
  double t1219;
  double t1232;
  double t1244;
  double t1246;
  double t1270;
  double t567;
  double t1168;
  double t1183;
  double t1184;
  double t1395;
  double t1415;
  double t1418;
  double t1420;
  double t1445;
  double t1525;
  double t1549;
  double t1551;
  double t1601;
  double t1605;
  double t1607;
  double t1634;
  double t790;
  double t1084;
  double t1201;
  double t1218;
  double t1446;
  double t1447;
  double t3553;
  double t3557;
  double t3719;
  double t3791;
  double t3831;
  double t3921;
  double t3969;
  double t3970;
  double t3996;
  double t4246;
  double t4250;
  double t4252;
  double t4297;
  double t4330;
  double t4365;
  double t4416;
  double t4427;
  double t4434;
  double t4558;
  double t4560;
  double t4563;
  double t5085;
  double t5099;
  double t5105;
  double t4809;
  double t4824;
  double t5066;
  double t5353;
  double t5375;
  double t5376;
  double t5778;
  double t5812;
  double t5846;
  double t5416;
  double t5538;
  double t5556;
  double t6384;
  double t6390;
  double t6420;
  t1175 = Cos(var1[3]);
  t1097 = Cos(var1[5]);
  t1134 = Sin(var1[3]);
  t1167 = Sin(var1[4]);
  t1179 = Sin(var1[5]);
  t1190 = Cos(var1[6]);
  t1219 = t1175*t1097;
  t1232 = -1.*t1134*t1167*t1179;
  t1244 = t1219 + t1232;
  t1246 = Cos(var1[4]);
  t1270 = Sin(var1[6]);
  t567 = Cos(var1[7]);
  t1168 = t1097*t1134*t1167;
  t1183 = t1175*t1179;
  t1184 = t1168 + t1183;
  t1395 = -1.*t1246*t1190*t1134;
  t1415 = -1.*t1244*t1270;
  t1418 = t1395 + t1415;
  t1420 = Sin(var1[7]);
  t1445 = Cos(var1[8]);
  t1525 = t567*t1184;
  t1549 = t1418*t1420;
  t1551 = t1525 + t1549;
  t1601 = t567*t1418;
  t1605 = -1.*t1184*t1420;
  t1607 = t1601 + t1605;
  t1634 = Sin(var1[8]);
  t790 = -1.*t567;
  t1084 = 1. + t790;
  t1201 = -1.*t1190;
  t1218 = 1. + t1201;
  t1446 = -1.*t1445;
  t1447 = 1. + t1446;
  t3553 = -1.*t1175*t1190*t1167;
  t3557 = -1.*t1175*t1246*t1179*t1270;
  t3719 = t3553 + t3557;
  t3791 = -1.*t1175*t1246*t1097*t567;
  t3831 = t3719*t1420;
  t3921 = t3791 + t3831;
  t3969 = t567*t3719;
  t3970 = t1175*t1246*t1097*t1420;
  t3996 = t3969 + t3970;
  t4246 = t1175*t1097*t1167;
  t4250 = -1.*t1134*t1179;
  t4252 = t4246 + t4250;
  t4297 = t1097*t1134;
  t4330 = t1175*t1167*t1179;
  t4365 = t4297 + t4330;
  t4416 = t567*t4365;
  t4427 = -1.*t4252*t1270*t1420;
  t4434 = t4416 + t4427;
  t4558 = -1.*t567*t4252*t1270;
  t4560 = -1.*t4365*t1420;
  t4563 = t4558 + t4560;
  t5085 = -1.*t1190*t4365;
  t5099 = -1.*t1175*t1246*t1270;
  t5105 = t5085 + t5099;
  t4809 = t1175*t1246*t1190;
  t4824 = -1.*t4365*t1270;
  t5066 = t4809 + t4824;
  t5353 = -1.*t1175*t1097*t1167;
  t5375 = t1134*t1179;
  t5376 = t5353 + t5375;
  t5778 = -1.*t567*t5376;
  t5812 = -1.*t5066*t1420;
  t5846 = t5778 + t5812;
  t5416 = t567*t5066;
  t5538 = -1.*t5376*t1420;
  t5556 = t5416 + t5538;
  t6384 = t567*t5376;
  t6390 = t5066*t1420;
  t6420 = t6384 + t6390;
  p_output1[0]=1.;
  p_output1[1]=0.325*t1084*t1184 + 0.1575*t1218*t1244 + 0.1575*t1134*t1246*t1270 + 0.2255*(t1190*t1244 - 1.*t1134*t1246*t1270) - 0.325*t1418*t1420 + 0.075*t1447*t1551 + 0.075*t1607*t1634 - 0.0641*(t1445*t1607 + t1551*t1634) + 0.355*(t1445*t1551 - 1.*t1607*t1634);
  p_output1[2]=-0.325*t1084*t1097*t1175*t1246 + 0.1575*t1175*t1179*t1218*t1246 + 0.1575*t1167*t1175*t1270 + 0.2255*(t1175*t1179*t1190*t1246 - 1.*t1167*t1175*t1270) - 0.325*t1420*t3719 + 0.075*t1447*t3921 + 0.075*t1634*t3996 - 0.0641*(t1634*t3921 + t1445*t3996) + 0.355*(t1445*t3921 - 1.*t1634*t3996);
  p_output1[3]=0.2255*t1190*t4252 + 0.1575*t1218*t4252 + 0.325*t1270*t1420*t4252 + 0.325*t1084*t4365 + 0.075*t1447*t4434 + 0.075*t1634*t4563 - 0.0641*(t1634*t4434 + t1445*t4563) + 0.355*(t1445*t4434 - 1.*t1634*t4563);
  p_output1[4]=-0.1575*t1175*t1190*t1246 + 0.1575*t1270*t4365 + 0.2255*t5066 - 0.325*t1420*t5105 + 0.075*t1420*t1447*t5105 + 0.075*t1634*t5105*t567 - 0.0641*(t1420*t1634*t5105 + t1445*t5105*t567) + 0.355*(t1420*t1445*t5105 - 1.*t1634*t5105*t567);
  p_output1[5]=0.325*t1420*t5376 + 0.075*t1447*t5556 - 0.325*t5066*t567 + 0.075*t1634*t5846 - 0.0641*(t1634*t5556 + t1445*t5846) + 0.355*(t1445*t5556 - 1.*t1634*t5846);
  p_output1[6]=0.075*t1445*t5556 + 0.075*t1634*t6420 - 0.0641*(-1.*t1634*t5556 + t1445*t6420) + 0.355*(-1.*t1445*t5556 - 1.*t1634*t6420);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_swing_position_FlFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void J_swing_position_FlFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
