/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 18:01:28 GMT+01:00
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
  double t801;
  double t129;
  double t426;
  double t541;
  double t547;
  double t605;
  double t651;
  double t810;
  double t814;
  double t839;
  double t1129;
  double t334;
  double t1457;
  double t1347;
  double t1573;
  double t1579;
  double t1590;
  double t1714;
  double t1720;
  double t1775;
  double t750;
  double t837;
  double t1049;
  double t1206;
  double t1218;
  double t585;
  double t673;
  double t1935;
  double t1454;
  double t1455;
  double t1957;
  double t1507;
  double t1525;
  double t1529;
  double t1540;
  double t1556;
  double t1955;
  double t1988;
  double t2019;
  double t2049;
  double t2055;
  double t2057;
  double t1634;
  double t1689;
  double t1694;
  double t2073;
  double t2077;
  double t2086;
  double t1827;
  double t1829;
  double t2089;
  double t2099;
  double t2103;
  double t1880;
  double t1889;
  double t2333;
  double t2337;
  double t2342;
  double t2352;
  double t2360;
  double t2362;
  double t2391;
  double t2394;
  double t2398;
  double t2403;
  double t2406;
  double t2410;
  t801 = Cos(var1[10]);
  t129 = Cos(var1[4]);
  t426 = Cos(var1[9]);
  t541 = -1.*t426;
  t547 = 1. + t541;
  t605 = Sin(var1[9]);
  t651 = -0.15121*t605;
  t810 = -1.*t801;
  t814 = 1. + t810;
  t839 = -1. + t801;
  t1129 = Sin(var1[10]);
  t334 = Cos(var1[5]);
  t1457 = Sin(var1[5]);
  t1347 = Sin(var1[4]);
  t1573 = -1.*t129*t334*t605;
  t1579 = -1.*t426*t129*t1457;
  t1590 = t1573 + t1579;
  t1714 = t426*t129*t334;
  t1720 = -1.*t129*t605*t1457;
  t1775 = t1714 + t1720;
  t750 = -4.9936e-13*var1[10];
  t837 = -0.038749*t814;
  t1049 = 6.19984e-13*t839;
  t1206 = -0.281210000004*t1129;
  t1218 = t750 + t837 + t1049 + t1206;
  t585 = 0.15121*t547;
  t673 = t585 + t651;
  t1935 = Sin(var1[3]);
  t1454 = -0.15121*t547;
  t1455 = t1454 + t651;
  t1957 = Cos(var1[3]);
  t1507 = -1.2484e-7*var1[10];
  t1525 = 2.479936e-18*t814;
  t1529 = -1.54996e-7*t839;
  t1540 = 1.124840000016e-6*t1129;
  t1556 = t1507 + t1525 + t1529 + t1540;
  t1955 = t334*t1935*t1347;
  t1988 = t1957*t1457;
  t2019 = t1955 + t1988;
  t2049 = t1957*t334;
  t2055 = -1.*t1935*t1347*t1457;
  t2057 = t2049 + t2055;
  t1634 = 0.281210000008499*t814;
  t1689 = -0.03874900000062*t1129;
  t1694 = t1634 + t1689;
  t2073 = -1.*t605*t2019;
  t2077 = t426*t2057;
  t2086 = t2073 + t2077;
  t1827 = -1.000000000016*t814;
  t1829 = 1. + t1827;
  t2089 = t426*t2019;
  t2099 = t605*t2057;
  t2103 = t2089 + t2099;
  t1880 = 1.6e-11*t839;
  t1889 = 1. + t1880;
  t2333 = -1.*t1957*t334*t1347;
  t2337 = t1935*t1457;
  t2342 = t2333 + t2337;
  t2352 = t334*t1935;
  t2360 = t1957*t1347*t1457;
  t2362 = t2352 + t2360;
  t2391 = -1.*t605*t2342;
  t2394 = t426*t2362;
  t2398 = t2391 + t2394;
  t2403 = t426*t2342;
  t2406 = t605*t2362;
  t2410 = t2403 + t2406;
  p_output1[0]=t1218*t1347 - 1.*t129*t1455*t1457 + t1556*t1590 + t1694*t1775 + 0.28121*(t1129*t1347 - 4.e-6*t1129*t1590 + t1775*t1829) + t129*t334*t673 - 0.22671*(4.e-6*t1129*t1775 + t1590*t1889 + 4.e-6*t1347*t814) - 0.03875*(-1.*t1129*t1775 + t1347*t801 + 4.e-6*t1590*t814) + var1[0];
  p_output1[1]=-1.*t1218*t129*t1935 + t1455*t2057 + t1556*t2086 + t1694*t2103 + 0.28121*(-1.*t1129*t129*t1935 - 4.e-6*t1129*t2086 + t1829*t2103) + t2019*t673 - 0.22671*(t1889*t2086 + 4.e-6*t1129*t2103 - 4.e-6*t129*t1935*t814) - 0.03875*(-1.*t1129*t2103 - 1.*t129*t1935*t801 + 4.e-6*t2086*t814) + var1[1];
  p_output1[2]=t1218*t129*t1957 + t1455*t2362 + t1556*t2398 + t1694*t2410 + 0.28121*(t1129*t129*t1957 - 4.e-6*t1129*t2398 + t1829*t2410) + t2342*t673 - 0.22671*(t1889*t2398 + 4.e-6*t1129*t2410 + 4.e-6*t129*t1957*t814) - 0.03875*(-1.*t1129*t2410 + t129*t1957*t801 + 4.e-6*t2398*t814) + var1[2];
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

#include "Joint_fr_hip_pitch_sphere_center.hh"

namespace SymFunction
{

void Joint_fr_hip_pitch_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
