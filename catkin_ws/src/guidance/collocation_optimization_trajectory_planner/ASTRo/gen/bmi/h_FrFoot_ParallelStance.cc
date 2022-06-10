/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:49:27 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t673;
  double t742;
  double t750;
  double t771;
  double t776;
  double t791;
  double t740;
  double t891;
  double t810;
  double t827;
  double t938;
  double t942;
  double t944;
  double t946;
  double t1040;
  double t1171;
  double t1177;
  double t1179;
  double t1185;
  double t1191;
  double t1195;
  double t1209;
  double t772;
  double t804;
  double t1232;
  double t887;
  double t889;
  double t1240;
  double t1239;
  double t1244;
  double t1246;
  double t1260;
  double t1266;
  double t1267;
  double t940;
  double t941;
  double t1134;
  double t1162;
  double t1286;
  double t1291;
  double t1300;
  double t1310;
  double t1312;
  double t1323;
  double t1327;
  double t1331;
  double t1333;
  double t1449;
  double t1453;
  double t1459;
  double t1466;
  double t1468;
  double t1469;
  double t1491;
  double t1492;
  double t1494;
  double t1497;
  double t1502;
  double t1503;
  double t1505;
  double t1509;
  double t1511;
  t673 = Cos(var1[4]);
  t742 = Cos(var1[12]);
  t750 = -1.*t742;
  t771 = 1. + t750;
  t776 = Sin(var1[12]);
  t791 = -0.15121*t776;
  t740 = Cos(var1[5]);
  t891 = Sin(var1[5]);
  t810 = Sin(var1[13]);
  t827 = Sin(var1[4]);
  t938 = Cos(var1[13]);
  t942 = t742*t673*t740;
  t944 = -1.*t673*t776*t891;
  t946 = t942 + t944;
  t1040 = Cos(var1[14]);
  t1171 = -1.*t810*t827;
  t1177 = t938*t946;
  t1179 = t1171 + t1177;
  t1185 = Sin(var1[14]);
  t1191 = t938*t827;
  t1195 = t810*t946;
  t1209 = t1191 + t1195;
  t772 = 0.15121*t771;
  t804 = t772 + t791;
  t1232 = Sin(var1[3]);
  t887 = -0.15121*t771;
  t889 = t887 + t791;
  t1240 = Cos(var1[3]);
  t1239 = t740*t1232*t827;
  t1244 = t1240*t891;
  t1246 = t1239 + t1244;
  t1260 = t1240*t740;
  t1266 = -1.*t1232*t827*t891;
  t1267 = t1260 + t1266;
  t940 = -1.*t938;
  t941 = 1. + t940;
  t1134 = -1.*t1040;
  t1162 = 1. + t1134;
  t1286 = t742*t1246;
  t1291 = t776*t1267;
  t1300 = t1286 + t1291;
  t1310 = t673*t810*t1232;
  t1312 = t938*t1300;
  t1323 = t1310 + t1312;
  t1327 = -1.*t938*t673*t1232;
  t1331 = t810*t1300;
  t1333 = t1327 + t1331;
  t1449 = -1.*t1240*t740*t827;
  t1453 = t1232*t891;
  t1459 = t1449 + t1453;
  t1466 = t740*t1232;
  t1468 = t1240*t827*t891;
  t1469 = t1466 + t1468;
  t1491 = t742*t1459;
  t1492 = t776*t1469;
  t1494 = t1491 + t1492;
  t1497 = -1.*t1240*t673*t810;
  t1502 = t938*t1494;
  t1503 = t1497 + t1502;
  t1505 = t938*t1240*t673;
  t1509 = t810*t1494;
  t1511 = t1505 + t1509;
  p_output1[0]=0.50321*t1162*t1179 - 0.50321*t1185*t1209 + 0.19821*(t1040*t1179 + t1185*t1209) + t673*t740*t804 + 0.28121*t810*t827 - 1.*t673*t889*t891 - 0.15121*(-1.*t673*t740*t776 - 1.*t673*t742*t891) + 0.28121*t941*t946 + var1[0] - 1.*var2[0];
  p_output1[1]=0.50321*t1162*t1323 - 0.50321*t1185*t1333 + 0.19821*(t1040*t1323 + t1185*t1333) - 0.15121*(t1267*t742 - 1.*t1246*t776) + t1246*t804 - 0.28121*t1232*t673*t810 + t1267*t889 + 0.28121*t1300*t941 + var1[1] - 1.*var2[1];
  p_output1[2]=0.50321*t1162*t1503 - 0.50321*t1185*t1511 + 0.19821*(t1040*t1503 + t1185*t1511) - 0.15121*(t1469*t742 - 1.*t1459*t776) + t1459*t804 + 0.28121*t1240*t673*t810 + t1469*t889 + 0.28121*t1494*t941 + var1[2] - 1.*var2[2];
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "h_FrFoot_ParallelStance.hh"

namespace SymFunction
{

void h_FrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
