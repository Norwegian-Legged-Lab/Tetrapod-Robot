/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:10:23 GMT+01:00
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
  double t387;
  double t409;
  double t411;
  double t505;
  double t217;
  double t680;
  double t708;
  double t719;
  double t772;
  double t775;
  double t809;
  double t828;
  double t816;
  double t848;
  double t576;
  double t603;
  double t827;
  double t866;
  double t875;
  double t954;
  double t956;
  double t967;
  double t1061;
  double t497;
  double t1543;
  double t1564;
  double t1611;
  double t1635;
  double t242;
  double t1327;
  double t1231;
  double t1233;
  double t1252;
  double t1368;
  double t1420;
  double t1445;
  double t1689;
  double t608;
  double t1728;
  double t506;
  double t1629;
  double t1848;
  double t1858;
  double t2006;
  double t1183;
  double t1749;
  double t1072;
  double t2211;
  double t1732;
  double t1743;
  double t1757;
  double t1764;
  double t1768;
  double t1777;
  double t1778;
  double t1788;
  double t2278;
  double t1982;
  double t1987;
  double t2004;
  double t2021;
  double t2038;
  double t2039;
  double t2041;
  double t2088;
  double t2382;
  double t2386;
  double t2401;
  double t2406;
  double t2410;
  double t2416;
  double t2455;
  double t2479;
  double t1816;
  double t2536;
  double t1902;
  double t2631;
  double t2495;
  double t1642;
  t387 = Cos(var1[16]);
  t409 = -1.*t387;
  t411 = 1. + t409;
  t505 = Sin(var1[16]);
  t217 = Cos(var1[3]);
  t680 = Cos(var1[15]);
  t708 = -1.*t680;
  t719 = 1. + t708;
  t772 = -0.15121*t719;
  t775 = Sin(var1[15]);
  t809 = Cos(var1[5]);
  t828 = Sin(var1[3]);
  t816 = Sin(var1[4]);
  t848 = Sin(var1[5]);
  t576 = -1. + t387;
  t603 = 4.e-6*t576;
  t827 = -1.*t217*t809*t816;
  t866 = t828*t848;
  t875 = t827 + t866;
  t954 = t809*t828;
  t956 = t217*t816*t848;
  t967 = t954 + t956;
  t1061 = 7.e-6*t411;
  t497 = 2.8e-11*t411;
  t1543 = Cos(var1[17]);
  t1564 = -1.*t1543;
  t1611 = 1. + t1564;
  t1635 = Sin(var1[17]);
  t242 = Cos(var1[4]);
  t1327 = -4.e-6*t505;
  t1231 = -1.*t775*t875;
  t1233 = t680*t967;
  t1252 = t1231 + t1233;
  t1368 = t680*t875;
  t1420 = t775*t967;
  t1445 = t1368 + t1420;
  t1689 = 2.8e-11*t1611;
  t608 = -7.e-6*t505;
  t1728 = -2.8e-11*t411;
  t506 = -1.*t505;
  t1629 = 7.e-6*t1611;
  t1848 = -1. + t1543;
  t1858 = 4.e-6*t1848;
  t2006 = 4.e-6*t411;
  t1183 = 7.e-6*t505;
  t1749 = -7.e-6*t411;
  t1072 = 4.e-6*t505;
  t2211 = 4.e-6*t1635;
  t1732 = t1728 + t505;
  t1743 = t217*t242*t1732;
  t1757 = t1749 + t1327;
  t1764 = t1757*t1252;
  t1768 = -1.000000000016*t411;
  t1777 = 1. + t1768;
  t1778 = t1777*t1445;
  t1788 = t1743 + t1764 + t1778;
  t2278 = 7.e-6*t1635;
  t1982 = -1.000000000049*t411;
  t1987 = 1. + t1982;
  t2004 = t1987*t217*t242;
  t2021 = t2006 + t608;
  t2038 = t2021*t1252;
  t2039 = t1728 + t506;
  t2041 = t2039*t1445;
  t2088 = t2004 + t2038 + t2041;
  t2382 = t2006 + t1183;
  t2386 = t217*t242*t2382;
  t2401 = -6.5e-11*t411;
  t2406 = 1. + t2401;
  t2410 = t2406*t1252;
  t2416 = t1749 + t1072;
  t2455 = t2416*t1445;
  t2479 = t2386 + t2410 + t2455;
  t1816 = -1.*t1635;
  t2536 = 4.e-6*t1611;
  t1902 = -7.e-6*t1635;
  t2631 = -2.8e-11*t1611;
  t2495 = -7.e-6*t1611;
  t1642 = -4.e-6*t1635;
  p_output1[0]=-0.148715*((1. - 6.5e-11*t1611)*t2479 + t1788*(t2211 + t2495) + t2088*(t2278 + t2536)) - 0.80315*((1. - 1.000000000016*t1611)*t1788 + t2479*(t1642 + t2495) + t2088*(t1635 + t2631)) - 0.038576*((1. - 1.000000000049*t1611)*t2088 + t2479*(t1902 + t2536) + t1788*(t1816 + t2631)) + (t772 - 0.15121*t775)*t875 + (t772 + 0.15121*t775)*t967 + var1[2] + t1445*(-1.8134809999999998e-6*(t1061 + t1327) - 0.2812110000084994*t411 - 0.038749000006999997*(t497 + t505) - 2.7726089999999997e-12*var1[16]) + t217*t242*(-0.03874900000889869*t411 - 0.281211000004*(t497 + t506) - 1.8134809999999998e-6*(t603 + t608) + 1.5843479999999999e-12*var1[16]) + t1252*(-0.281211000004*(t1061 + t1072) - 1.1787626499999999e-16*t411 - 0.038749000006999997*(t1183 + t603) + 3.9608699999999997e-7*var1[16]) + t1788*(-0.5031510000160505*t1611 - 3.367757e-6*(t1629 + t1642) - 0.038575000014*(t1635 + t1689) - 1.9784030000000015e-12*var1[17]) + t2088*(-0.03857500001589017*t1611 - 0.5031510000080001*(t1689 + t1816) - 3.367757e-6*(t1858 + t1902) + 1.1305160000000008e-12*var1[17]) + t2479*(-2.18904205e-16*t1611 - 0.5031510000080001*(t1629 + t2211) - 0.038575000014*(t1858 + t2278) + 2.826290000000002e-7*var1[17]);
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

#include "u_rearSwingFootHeight1_DiagonalStance1.hh"

namespace DiagonalStance1
{

void u_rearSwingFootHeight1_DiagonalStance1_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
