/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 12:57:29 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t1249;
  double t742;
  double t1269;
  double t1243;
  double t1270;
  double t1280;
  double t1281;
  double t1284;
  double t1285;
  double t1286;
  double t1244;
  double t1273;
  double t1279;
  double t1291;
  double t1292;
  double t1293;
  double t1311;
  double t1321;
  double t1326;
  double t1328;
  double t1335;
  double t1336;
  double t1342;
  double t1381;
  double t1408;
  double t1424;
  double t1466;
  double t1481;
  double t1499;
  double t1508;
  double t1287;
  double t1288;
  double t1297;
  double t1298;
  double t1317;
  double t1318;
  double t1346;
  double t1377;
  double t5413;
  double t5446;
  double t5460;
  double t6942;
  double t7064;
  double t7070;
  double t8999;
  double t9523;
  double t9526;
  double t3509;
  double t3894;
  double t3904;
  double t4302;
  double t4596;
  double t4744;
  double t5301;
  double t5965;
  double t6406;
  double t7302;
  double t9528;
  double t9532;
  double t9576;
  double t9593;
  double t9646;
  double t9668;
  t1249 = Cos(var1[3]);
  t742 = Cos(var1[5]);
  t1269 = Sin(var1[4]);
  t1243 = Sin(var1[3]);
  t1270 = Sin(var1[5]);
  t1280 = Cos(var1[6]);
  t1281 = -1.*t1280;
  t1284 = 1. + t1281;
  t1285 = 0.15121*t1284;
  t1286 = Sin(var1[6]);
  t1244 = t742*t1243;
  t1273 = t1249*t1269*t1270;
  t1279 = t1244 + t1273;
  t1291 = -1.*t1249*t742*t1269;
  t1292 = t1243*t1270;
  t1293 = t1291 + t1292;
  t1311 = Cos(var1[7]);
  t1321 = t1280*t1293;
  t1326 = t1279*t1286;
  t1328 = t1321 + t1326;
  t1335 = Cos(var1[4]);
  t1336 = Sin(var1[7]);
  t1342 = Cos(var1[8]);
  t1381 = t1311*t1328;
  t1408 = -1.*t1249*t1335*t1336;
  t1424 = t1381 + t1408;
  t1466 = t1249*t1335*t1311;
  t1481 = t1328*t1336;
  t1499 = t1466 + t1481;
  t1508 = Sin(var1[8]);
  t1287 = -0.15121*t1286;
  t1288 = t1285 + t1287;
  t1297 = 0.15121*t1286;
  t1298 = t1285 + t1297;
  t1317 = -1.*t1311;
  t1318 = 1. + t1317;
  t1346 = -1.*t1342;
  t1377 = 1. + t1346;
  t5413 = t1335*t742*t1280;
  t5446 = -1.*t1335*t1270*t1286;
  t5460 = t5413 + t5446;
  t6942 = t1311*t5460;
  t7064 = -1.*t1269*t1336;
  t7070 = t6942 + t7064;
  t8999 = t1311*t1269;
  t9523 = t5460*t1336;
  t9526 = t8999 + t9523;
  t3509 = -1.*var2[0];
  t3894 = -1.*t1335*t1270*t1288;
  t3904 = t1335*t742*t1298;
  t4302 = -1.*t1335*t1280*t1270;
  t4596 = -1.*t1335*t742*t1286;
  t4744 = t4302 + t4596;
  t5301 = 0.15121*t4744;
  t5965 = 0.28121*t1318*t5460;
  t6406 = 0.28121*t1269*t1336;
  t7302 = 0.50321*t1377*t7070;
  t9528 = -0.50321*t9526*t1508;
  t9532 = t1342*t7070;
  t9576 = t9526*t1508;
  t9593 = t9532 + t9576;
  t9646 = 0.19821*t9593;
  t9668 = t3509 + var1[0] + t3894 + t3904 + t5301 + t5965 + t6406 + t7302 + t9528 + t9646;
  p_output1[0]=t1279*t1288 + 0.15121*(t1279*t1280 - 1.*t1286*t1293) + t1293*t1298 + 0.28121*t1318*t1328 + 0.28121*t1249*t1335*t1336 + 0.50321*t1377*t1424 - 0.50321*t1499*t1508 + 0.19821*(t1342*t1424 + t1499*t1508) + var1[2] - 0.5*t9668*var3[0]*(1. + Tanh(t9668*var4[0]));
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "u_frontSwingFootHeightsloped_ParallelStance.hh"

namespace SymFunction
{

void u_frontSwingFootHeightsloped_ParallelStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
