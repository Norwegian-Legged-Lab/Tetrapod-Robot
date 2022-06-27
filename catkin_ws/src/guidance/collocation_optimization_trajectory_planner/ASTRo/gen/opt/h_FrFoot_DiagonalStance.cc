/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 14:35:26 GMT+02:00
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
  double t889;
  double t1210;
  double t1212;
  double t1306;
  double t1320;
  double t1328;
  double t1131;
  double t1391;
  double t1349;
  double t1355;
  double t1412;
  double t1452;
  double t1476;
  double t1502;
  double t1606;
  double t1642;
  double t1664;
  double t1667;
  double t1681;
  double t1754;
  double t1770;
  double t1772;
  double t1313;
  double t1341;
  double t1822;
  double t1375;
  double t1376;
  double t1876;
  double t1874;
  double t1877;
  double t1883;
  double t1907;
  double t1917;
  double t1939;
  double t1449;
  double t1451;
  double t1631;
  double t1638;
  double t1997;
  double t1998;
  double t2013;
  double t2161;
  double t2164;
  double t2169;
  double t2206;
  double t2224;
  double t2228;
  double t2349;
  double t2350;
  double t2423;
  double t2443;
  double t2450;
  double t2453;
  double t2507;
  double t2509;
  double t2512;
  double t2523;
  double t2525;
  double t2526;
  double t2541;
  double t2542;
  double t2543;
  t889 = Cos(var1[4]);
  t1210 = Cos(var1[12]);
  t1212 = -1.*t1210;
  t1306 = 1. + t1212;
  t1320 = Sin(var1[12]);
  t1328 = -0.15121*t1320;
  t1131 = Cos(var1[5]);
  t1391 = Sin(var1[5]);
  t1349 = Sin(var1[13]);
  t1355 = Sin(var1[4]);
  t1412 = Cos(var1[13]);
  t1452 = t1210*t889*t1131;
  t1476 = -1.*t889*t1320*t1391;
  t1502 = t1452 + t1476;
  t1606 = Cos(var1[14]);
  t1642 = -1.*t1349*t1355;
  t1664 = t1412*t1502;
  t1667 = t1642 + t1664;
  t1681 = Sin(var1[14]);
  t1754 = t1412*t1355;
  t1770 = t1349*t1502;
  t1772 = t1754 + t1770;
  t1313 = 0.15121*t1306;
  t1341 = t1313 + t1328;
  t1822 = Sin(var1[3]);
  t1375 = -0.15121*t1306;
  t1376 = t1375 + t1328;
  t1876 = Cos(var1[3]);
  t1874 = t1131*t1822*t1355;
  t1877 = t1876*t1391;
  t1883 = t1874 + t1877;
  t1907 = t1876*t1131;
  t1917 = -1.*t1822*t1355*t1391;
  t1939 = t1907 + t1917;
  t1449 = -1.*t1412;
  t1451 = 1. + t1449;
  t1631 = -1.*t1606;
  t1638 = 1. + t1631;
  t1997 = t1210*t1883;
  t1998 = t1320*t1939;
  t2013 = t1997 + t1998;
  t2161 = t889*t1349*t1822;
  t2164 = t1412*t2013;
  t2169 = t2161 + t2164;
  t2206 = -1.*t1412*t889*t1822;
  t2224 = t1349*t2013;
  t2228 = t2206 + t2224;
  t2349 = -1.*t1876*t1131*t1355;
  t2350 = t1822*t1391;
  t2423 = t2349 + t2350;
  t2443 = t1131*t1822;
  t2450 = t1876*t1355*t1391;
  t2453 = t2443 + t2450;
  t2507 = t1210*t2423;
  t2509 = t1320*t2453;
  t2512 = t2507 + t2509;
  t2523 = -1.*t1876*t889*t1349;
  t2525 = t1412*t2512;
  t2526 = t2523 + t2525;
  t2541 = t1412*t1876*t889;
  t2542 = t1349*t2512;
  t2543 = t2541 + t2542;
  p_output1[0]=0.28121*t1349*t1355 + 0.28121*t1451*t1502 + 0.50321*t1638*t1667 - 0.50321*t1681*t1772 + 0.19821*(t1606*t1667 + t1681*t1772) + t1131*t1341*t889 - 1.*t1376*t1391*t889 - 0.15121*(-1.*t1131*t1320*t889 - 1.*t1210*t1391*t889) + var1[0] - 1.*var2[0];
  p_output1[1]=t1341*t1883 + t1376*t1939 - 0.15121*(-1.*t1320*t1883 + t1210*t1939) + 0.28121*t1451*t2013 + 0.50321*t1638*t2169 - 0.50321*t1681*t2228 + 0.19821*(t1606*t2169 + t1681*t2228) - 0.28121*t1349*t1822*t889 + var1[1] - 1.*var2[1];
  p_output1[2]=t1341*t2423 + t1376*t2453 - 0.15121*(-1.*t1320*t2423 + t1210*t2453) + 0.28121*t1451*t2512 + 0.50321*t1638*t2526 - 0.50321*t1681*t2543 + 0.19821*(t1606*t2526 + t1681*t2543) + 0.28121*t1349*t1876*t889 + var1[2] - 1.*var2[2];
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

#include "h_FrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void h_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
