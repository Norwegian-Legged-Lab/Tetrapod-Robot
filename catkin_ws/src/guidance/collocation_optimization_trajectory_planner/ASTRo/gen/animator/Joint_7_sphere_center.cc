/*
 * Automatically Generated from Mathematica.
 * Fri 13 May 2022 14:24:56 GMT+02:00
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
  double t167;
  double t568;
  double t609;
  double t856;
  double t948;
  double t1096;
  double t308;
  double t1200;
  double t1186;
  double t1190;
  double t1212;
  double t1224;
  double t1227;
  double t1228;
  double t1232;
  double t1239;
  double t1240;
  double t1246;
  double t1257;
  double t1258;
  double t1261;
  double t1264;
  double t1165;
  double t1180;
  double t1288;
  double t1193;
  double t1198;
  double t1294;
  double t1292;
  double t1305;
  double t1308;
  double t1322;
  double t1326;
  double t1327;
  double t1214;
  double t1223;
  double t1235;
  double t1238;
  double t1354;
  double t1357;
  double t1358;
  double t1366;
  double t1367;
  double t1369;
  double t1373;
  double t1374;
  double t1375;
  double t1730;
  double t1739;
  double t1755;
  double t1791;
  double t1794;
  double t1810;
  double t1829;
  double t1834;
  double t1840;
  double t1849;
  double t1850;
  double t1853;
  double t1865;
  double t1867;
  double t1869;
  t167 = Cos(var1[4]);
  t568 = Cos(var1[15]);
  t609 = -1.*t568;
  t856 = 1. + t609;
  t948 = -0.15121*t856;
  t1096 = Sin(var1[15]);
  t308 = Cos(var1[5]);
  t1200 = Sin(var1[5]);
  t1186 = Sin(var1[16]);
  t1190 = Sin(var1[4]);
  t1212 = Cos(var1[16]);
  t1224 = t568*t167*t308;
  t1227 = -1.*t167*t1096*t1200;
  t1228 = t1224 + t1227;
  t1232 = Cos(var1[17]);
  t1239 = t1186*t1190;
  t1240 = t1212*t1228;
  t1246 = t1239 + t1240;
  t1257 = Sin(var1[17]);
  t1258 = t1212*t1190;
  t1261 = -1.*t1186*t1228;
  t1264 = t1258 + t1261;
  t1165 = -0.15121*t1096;
  t1180 = t948 + t1165;
  t1288 = Sin(var1[3]);
  t1193 = 0.15121*t1096;
  t1198 = t948 + t1193;
  t1294 = Cos(var1[3]);
  t1292 = t308*t1288*t1190;
  t1305 = t1294*t1200;
  t1308 = t1292 + t1305;
  t1322 = t1294*t308;
  t1326 = -1.*t1288*t1190*t1200;
  t1327 = t1322 + t1326;
  t1214 = -1.*t1212;
  t1223 = 1. + t1214;
  t1235 = -1.*t1232;
  t1238 = 1. + t1235;
  t1354 = t568*t1308;
  t1357 = t1096*t1327;
  t1358 = t1354 + t1357;
  t1366 = -1.*t167*t1186*t1288;
  t1367 = t1212*t1358;
  t1369 = t1366 + t1367;
  t1373 = -1.*t1212*t167*t1288;
  t1374 = -1.*t1186*t1358;
  t1375 = t1373 + t1374;
  t1730 = -1.*t1294*t308*t1190;
  t1739 = t1288*t1200;
  t1755 = t1730 + t1739;
  t1791 = t308*t1288;
  t1794 = t1294*t1190*t1200;
  t1810 = t1791 + t1794;
  t1829 = t568*t1755;
  t1834 = t1096*t1810;
  t1840 = t1829 + t1834;
  t1849 = t1294*t167*t1186;
  t1850 = t1212*t1840;
  t1853 = t1849 + t1850;
  t1865 = t1212*t1294*t167;
  t1867 = -1.*t1186*t1840;
  t1869 = t1865 + t1867;
  p_output1[0]=0.28121*t1186*t1190 - 0.28121*t1223*t1228 - 0.50321*t1238*t1246 - 0.50321*t1257*t1264 - 0.50321*(t1232*t1246 - 1.*t1257*t1264) - 1.*t1198*t1200*t167 + t1180*t167*t308 - 0.15121*(-1.*t1096*t167*t308 - 1.*t1200*t167*t568) + var1[0];
  p_output1[1]=t1180*t1308 + t1198*t1327 - 0.28121*t1223*t1358 - 0.50321*t1238*t1369 - 0.50321*t1257*t1375 - 0.50321*(t1232*t1369 - 1.*t1257*t1375) - 0.28121*t1186*t1288*t167 - 0.15121*(-1.*t1096*t1308 + t1327*t568) + var1[1];
  p_output1[2]=0.28121*t1186*t1294*t167 + t1180*t1755 + t1198*t1810 - 0.28121*t1223*t1840 - 0.50321*t1238*t1853 - 0.50321*t1257*t1869 - 0.50321*(t1232*t1853 - 1.*t1257*t1869) - 0.15121*(-1.*t1096*t1755 + t1810*t568) + var1[2];
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

#include "Joint_7_sphere_center.hh"

namespace SymFunction
{

void Joint_7_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
