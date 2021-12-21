/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 23:16:44 GMT+01:00
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
  double t101;
  double t159;
  double t182;
  double t201;
  double t288;
  double t338;
  double t132;
  double t576;
  double t648;
  double t691;
  double t697;
  double t809;
  double t942;
  double t967;
  double t974;
  double t1194;
  double t607;
  double t623;
  double t634;
  double t1458;
  double t349;
  double t542;
  double t1651;
  double t1616;
  double t577;
  double t589;
  double t1646;
  double t1676;
  double t1690;
  double t1710;
  double t1714;
  double t1717;
  double t638;
  double t703;
  double t837;
  double t878;
  double t988;
  double t1027;
  double t1168;
  double t1229;
  double t1266;
  double t1307;
  double t1329;
  double t1383;
  double t1386;
  double t1804;
  double t1806;
  double t1819;
  double t1745;
  double t1747;
  double t1770;
  double t1467;
  double t1470;
  double t2291;
  double t2302;
  double t2306;
  double t2381;
  double t2415;
  double t2426;
  double t2533;
  double t2543;
  double t2546;
  double t2489;
  double t2517;
  double t2520;
  t101 = Cos(var1[4]);
  t159 = Cos(var1[6]);
  t182 = -1.*t159;
  t201 = 1. + t182;
  t288 = 0.15121*t201;
  t338 = Sin(var1[6]);
  t132 = Sin(var1[5]);
  t576 = Cos(var1[5]);
  t648 = Cos(var1[7]);
  t691 = -1.*t648;
  t697 = 1. + t691;
  t809 = Sin(var1[7]);
  t942 = t101*t576*t159;
  t967 = -1.*t101*t132*t338;
  t974 = t942 + t967;
  t1194 = Sin(var1[4]);
  t607 = -1.*t101*t159*t132;
  t623 = -1.*t101*t576*t338;
  t634 = t607 + t623;
  t1458 = -1. + t648;
  t349 = -0.15121*t338;
  t542 = t288 + t349;
  t1651 = Sin(var1[3]);
  t1616 = Cos(var1[3]);
  t577 = 0.15121*t338;
  t589 = t288 + t577;
  t1646 = t1616*t576;
  t1676 = -1.*t1651*t1194*t132;
  t1690 = t1646 + t1676;
  t1710 = t576*t1651*t1194;
  t1714 = t1616*t132;
  t1717 = t1710 + t1714;
  t638 = -1.2484e-7*var1[7];
  t703 = -1.5499600000248e-7*t697;
  t837 = 1.124840000016e-6*t809;
  t878 = t638 + t703 + t837;
  t988 = 0.281210000008499*t697;
  t1027 = 0.03874900000062*t809;
  t1168 = t988 + t1027;
  t1229 = 4.9936e-13*var1[7];
  t1266 = -0.03874900000062*t697;
  t1307 = 0.281210000004*t809;
  t1329 = t1229 + t1266 + t1307;
  t1383 = -1.000000000016*t697;
  t1386 = 1. + t1383;
  t1804 = t159*t1717;
  t1806 = t1690*t338;
  t1819 = t1804 + t1806;
  t1745 = t159*t1690;
  t1747 = -1.*t1717*t338;
  t1770 = t1745 + t1747;
  t1467 = 1.6e-11*t1458;
  t1470 = 1. + t1467;
  t2291 = t576*t1651;
  t2302 = t1616*t1194*t132;
  t2306 = t2291 + t2302;
  t2381 = -1.*t1616*t576*t1194;
  t2415 = t1651*t132;
  t2426 = t2381 + t2415;
  t2533 = t159*t2426;
  t2543 = t2306*t338;
  t2546 = t2533 + t2543;
  t2489 = t159*t2306;
  t2517 = -1.*t2426*t338;
  t2520 = t2489 + t2517;
  p_output1[0]=t1194*t1329 - 1.*t101*t132*t542 + t101*t576*t589 + t634*t878 + t1168*t974 + 0.28121*(-1.*t1194*t809 - 4.e-6*t634*t809 + t1386*t974) + 0.22671*(4.e-6*t1194*t1458 + t1470*t634 + 4.e-6*t809*t974) - 0.03875*(4.e-6*t1458*t634 + t1194*t648 + t809*t974) + var1[0];
  p_output1[1]=-1.*t101*t1329*t1651 + t1168*t1819 + t1690*t542 + t1717*t589 + 0.28121*(t1386*t1819 + t101*t1651*t809 - 4.e-6*t1770*t809) + 0.22671*(-4.e-6*t101*t1458*t1651 + t1470*t1770 + 4.e-6*t1819*t809) - 0.03875*(4.e-6*t1458*t1770 - 1.*t101*t1651*t648 + t1819*t809) + t1770*t878 + var1[1];
  p_output1[2]=t101*t1329*t1616 + t1168*t2546 + t2306*t542 + t2426*t589 + 0.28121*(t1386*t2546 - 1.*t101*t1616*t809 - 4.e-6*t2520*t809) + 0.22671*(4.e-6*t101*t1458*t1616 + t1470*t2520 + 4.e-6*t2546*t809) - 0.03875*(4.e-6*t1458*t2520 + t101*t1616*t648 + t2546*t809) + t2520*t878 + var1[2];
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

#include "Joint_fl_hip_pitch_sphere_center.hh"

namespace SymFunction
{

void Joint_fl_hip_pitch_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
