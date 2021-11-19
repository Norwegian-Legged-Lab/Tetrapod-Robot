/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:30:47 GMT+01:00
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
  double t444;
  double t63;
  double t503;
  double t70;
  double t599;
  double t800;
  double t896;
  double t929;
  double t979;
  double t1061;
  double t318;
  double t605;
  double t617;
  double t1117;
  double t1120;
  double t1147;
  double t1271;
  double t1272;
  double t1289;
  double t1315;
  double t1443;
  double t1501;
  double t1227;
  double t1229;
  double t1261;
  double t1368;
  double t1373;
  double t1406;
  double t1557;
  double t1561;
  double t1567;
  double t1588;
  double t1534;
  double t1536;
  double t1538;
  double t1548;
  double t1551;
  double t1554;
  double t1710;
  double t1668;
  double t1675;
  double t1688;
  double t1695;
  double t1610;
  double t1624;
  double t1628;
  double t1639;
  double t1645;
  double t1650;
  t444 = Cos(var1[3]);
  t63 = Cos(var1[5]);
  t503 = Sin(var1[4]);
  t70 = Sin(var1[3]);
  t599 = Sin(var1[5]);
  t800 = Cos(var1[6]);
  t896 = -1.*t800;
  t929 = 1. + t896;
  t979 = 0.15121*t929;
  t1061 = Sin(var1[6]);
  t318 = t63*t70;
  t605 = t444*t503*t599;
  t617 = t318 + t605;
  t1117 = -1.*t444*t63*t503;
  t1120 = t70*t599;
  t1147 = t1117 + t1120;
  t1271 = Cos(var1[7]);
  t1272 = -1.*t1271;
  t1289 = 1. + t1272;
  t1315 = Sin(var1[7]);
  t1443 = Cos(var1[4]);
  t1501 = -1. + t1271;
  t1227 = t800*t617;
  t1229 = -1.*t1147*t1061;
  t1261 = t1227 + t1229;
  t1368 = t800*t1147;
  t1373 = t617*t1061;
  t1406 = t1368 + t1373;
  t1557 = Cos(var1[8]);
  t1561 = -1.*t1557;
  t1567 = 1. + t1561;
  t1588 = Sin(var1[8]);
  t1534 = 4.e-6*t444*t1443*t1501;
  t1536 = 1.6e-11*t1501;
  t1538 = 1. + t1536;
  t1548 = t1538*t1261;
  t1551 = 4.e-6*t1406*t1315;
  t1554 = t1534 + t1548 + t1551;
  t1710 = -1. + t1557;
  t1668 = t444*t1443*t1271;
  t1675 = 4.e-6*t1501*t1261;
  t1688 = t1406*t1315;
  t1695 = t1668 + t1675 + t1688;
  t1610 = -1.000000000016*t1289;
  t1624 = 1. + t1610;
  t1628 = t1624*t1406;
  t1639 = -1.*t444*t1443*t1315;
  t1645 = -4.e-6*t1261*t1315;
  t1650 = t1628 + t1639 + t1645;
  p_output1[0]=(0.281210000008499*t1289 + 0.03874900000062*t1315)*t1406 + (0.503210000016051*t1567 + 0.03874900000062*t1588)*t1650 + 0.80321*(-4.e-6*t1554*t1588 + (1. - 1.000000000016*t1567)*t1650 - 1.*t1588*t1695) - 0.03875*(t1588*t1650 + t1557*t1695 + 4.e-6*t1554*t1710) + 0.14871*(4.e-6*t1588*t1650 + t1554*(1. + 1.6e-11*t1710) + 4.e-6*t1695*t1710) + t617*(-0.15121*t1061 + t979) + t1147*(0.15121*t1061 + t979) + var1[2] + t1261*(-1.5499600000248e-7*t1289 + 1.124840000016e-6*t1315 - 1.2484e-7*var1[7]) + t1443*t444*(-0.03874900000062*t1289 + 0.281210000004*t1315 + 4.9936e-13*var1[7]) + t1554*(-1.5499600000248e-7*t1567 + 2.012840000032e-6*t1588 - 1.284e-8*var1[8]) + t1695*(-0.03874900000062*t1567 + 0.503210000008*t1588 + 5.136e-14*var1[8]);
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

#include "foot_clearance_FlFootParallelStance.hh"

namespace ParallelStance
{

void foot_clearance_FlFootParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
