/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:14:11 GMT+01:00
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
  double t169;
  double t192;
  double t194;
  double t230;
  double t117;
  double t373;
  double t398;
  double t415;
  double t454;
  double t457;
  double t495;
  double t525;
  double t505;
  double t535;
  double t226;
  double t506;
  double t558;
  double t569;
  double t605;
  double t638;
  double t640;
  double t265;
  double t677;
  double t1043;
  double t1063;
  double t1073;
  double t1114;
  double t128;
  double t888;
  double t940;
  double t758;
  double t763;
  double t774;
  double t976;
  double t980;
  double t984;
  double t1175;
  double t656;
  double t1296;
  double t681;
  double t1377;
  double t1097;
  double t1439;
  double t1475;
  double t234;
  double t1219;
  double t1277;
  double t1294;
  double t1312;
  double t1313;
  double t1315;
  double t1328;
  double t1335;
  double t1336;
  double t1724;
  double t1483;
  double t1496;
  double t1520;
  double t1531;
  double t1536;
  double t1542;
  double t1544;
  double t1595;
  double t1781;
  double t1833;
  double t1834;
  double t1837;
  double t1849;
  double t1869;
  double t1904;
  double t1935;
  double t1176;
  double t1942;
  double t1162;
  double t2100;
  double t1397;
  double t1977;
  double t1986;
  double t1382;
  t169 = Cos(var1[13]);
  t192 = -1.*t169;
  t194 = 1. + t192;
  t230 = Sin(var1[13]);
  t117 = Cos(var1[3]);
  t373 = Cos(var1[12]);
  t398 = -1.*t373;
  t415 = 1. + t398;
  t454 = Sin(var1[12]);
  t457 = 0.15121*t454;
  t495 = Cos(var1[5]);
  t525 = Sin(var1[3]);
  t505 = Sin(var1[4]);
  t535 = Sin(var1[5]);
  t226 = 4.e-6*t194;
  t506 = -1.*t117*t495*t505;
  t558 = t525*t535;
  t569 = t506 + t558;
  t605 = t495*t525;
  t638 = t117*t505*t535;
  t640 = t605 + t638;
  t265 = -2.8e-11*t194;
  t677 = 7.e-6*t194;
  t1043 = Cos(var1[14]);
  t1063 = -1.*t1043;
  t1073 = 1. + t1063;
  t1114 = Sin(var1[14]);
  t128 = Cos(var1[4]);
  t888 = -1.*t230;
  t940 = -4.e-6*t230;
  t758 = -1.*t454*t569;
  t763 = t373*t640;
  t774 = t758 + t763;
  t976 = t373*t569;
  t980 = t454*t640;
  t984 = t976 + t980;
  t1175 = 7.e-6*t1073;
  t656 = -7.e-6*t230;
  t1296 = -7.e-6*t194;
  t681 = 4.e-6*t230;
  t1377 = 4.e-6*t1073;
  t1097 = -2.8e-11*t1073;
  t1439 = -1. + t169;
  t1475 = 4.e-6*t1439;
  t234 = 7.e-6*t230;
  t1219 = 2.8e-11*t194;
  t1277 = t1219 + t888;
  t1294 = t117*t128*t1277;
  t1312 = t1296 + t940;
  t1313 = t1312*t774;
  t1315 = -1.000000000016*t194;
  t1328 = 1. + t1315;
  t1335 = t1328*t984;
  t1336 = t1294 + t1313 + t1335;
  t1724 = 7.e-6*t1114;
  t1483 = t1475 + t656;
  t1496 = t117*t128*t1483;
  t1520 = -6.5e-11*t194;
  t1531 = 1. + t1520;
  t1536 = t1531*t774;
  t1542 = t1296 + t681;
  t1544 = t1542*t984;
  t1595 = t1496 + t1536 + t1544;
  t1781 = -1.000000000049*t194;
  t1833 = 1. + t1781;
  t1834 = t1833*t117*t128;
  t1837 = t1475 + t234;
  t1849 = t1837*t774;
  t1869 = t1219 + t230;
  t1904 = t1869*t984;
  t1935 = t1834 + t1849 + t1904;
  t1176 = -4.e-6*t1114;
  t1942 = 2.8e-11*t1073;
  t1162 = -1.*t1114;
  t2100 = -7.e-6*t1073;
  t1397 = 4.e-6*t1114;
  t1977 = -1. + t1043;
  t1986 = 4.e-6*t1977;
  t1382 = -7.e-6*t1114;
  p_output1[0]=-0.038924*((1. - 1.000000000049*t1073)*t1935 + t1336*(t1114 + t1942) + t1595*(t1724 + t1986)) - 0.80315*((1. - 1.000000000016*t1073)*t1336 + t1935*(t1162 + t1942) + t1595*(t1176 + t2100)) + 0.148705*((1. - 6.5e-11*t1073)*t1595 + t1935*(t1382 + t1986) + t1336*(t1397 + t2100)) + (-0.15121*t415 + t457)*t569 + (0.15121*t415 + t457)*t640 + var1[2] + t774*(-1.38024835e-16*t194 - 0.038748999993*(t226 + t656) - 0.281209000004*(t677 + t681) - 1.4640699999999997e-7*var1[13]) + t117*t128*(-0.0387489999948987*t194 - 2.123459e-6*(t226 + t234) - 0.281209000004*(t230 + t265) + 5.856279999999999e-13*var1[13]) + t984*(-0.28120900000849935*t194 - 0.038748999993*(t265 + t888) - 2.123459e-6*(t677 + t940) + 1.0248489999999998e-12*var1[13]) + t1595*(-2.3905277499999995e-16*t1073 - 0.038922999986*(t1377 + t1382) - 0.503149000008*(t1175 + t1397) - 2.598649999999999e-7*var1[14]) + t1935*(-0.03892299998790722*t1073 - 0.503149000008*(t1097 + t1114) - 3.6777349999999994e-6*(t1377 + t1724) + 1.0394599999999997e-12*var1[14]) + t1336*(-0.5031490000160505*t1073 - 0.038922999986*(t1097 + t1162) - 3.6777349999999994e-6*(t1175 + t1176) + 1.8190549999999993e-12*var1[14]);
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

#include "u_rearSwingFootHeight2_DiagonalStance2.hh"

namespace DiagonalStance2
{

void u_rearSwingFootHeight2_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
