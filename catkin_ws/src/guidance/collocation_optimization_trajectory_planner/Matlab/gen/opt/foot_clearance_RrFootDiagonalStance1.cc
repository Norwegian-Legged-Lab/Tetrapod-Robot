/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:27:39 GMT+01:00
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
  double t708;
  double t737;
  double t887;
  double t1008;
  double t232;
  double t1489;
  double t1492;
  double t1494;
  double t1497;
  double t1501;
  double t1521;
  double t1539;
  double t1532;
  double t1545;
  double t1411;
  double t1446;
  double t1535;
  double t1548;
  double t1553;
  double t1596;
  double t1597;
  double t1599;
  double t1671;
  double t917;
  double t1796;
  double t1799;
  double t1805;
  double t1809;
  double t432;
  double t1712;
  double t1698;
  double t1699;
  double t1702;
  double t1753;
  double t1767;
  double t1783;
  double t1821;
  double t1473;
  double t1830;
  double t1253;
  double t1807;
  double t1945;
  double t1946;
  double t1964;
  double t1679;
  double t1840;
  double t1672;
  double t1981;
  double t1834;
  double t1837;
  double t1850;
  double t1851;
  double t1870;
  double t1875;
  double t1876;
  double t1880;
  double t1988;
  double t1953;
  double t1962;
  double t1963;
  double t1966;
  double t1968;
  double t1969;
  double t1972;
  double t1973;
  double t2005;
  double t2021;
  double t2035;
  double t2053;
  double t2055;
  double t2057;
  double t2063;
  double t2065;
  double t1935;
  double t2091;
  double t1947;
  double t2111;
  double t2077;
  double t1818;
  t708 = Cos(var1[16]);
  t737 = -1.*t708;
  t887 = 1. + t737;
  t1008 = Sin(var1[16]);
  t232 = Cos(var1[3]);
  t1489 = Cos(var1[15]);
  t1492 = -1.*t1489;
  t1494 = 1. + t1492;
  t1497 = -0.15121*t1494;
  t1501 = Sin(var1[15]);
  t1521 = Cos(var1[5]);
  t1539 = Sin(var1[3]);
  t1532 = Sin(var1[4]);
  t1545 = Sin(var1[5]);
  t1411 = -1. + t708;
  t1446 = 4.e-6*t1411;
  t1535 = -1.*t232*t1521*t1532;
  t1548 = t1539*t1545;
  t1553 = t1535 + t1548;
  t1596 = t1521*t1539;
  t1597 = t232*t1532*t1545;
  t1599 = t1596 + t1597;
  t1671 = 7.e-6*t887;
  t917 = 2.8e-11*t887;
  t1796 = Cos(var1[17]);
  t1799 = -1.*t1796;
  t1805 = 1. + t1799;
  t1809 = Sin(var1[17]);
  t432 = Cos(var1[4]);
  t1712 = -4.e-6*t1008;
  t1698 = -1.*t1501*t1553;
  t1699 = t1489*t1599;
  t1702 = t1698 + t1699;
  t1753 = t1489*t1553;
  t1767 = t1501*t1599;
  t1783 = t1753 + t1767;
  t1821 = 2.8e-11*t1805;
  t1473 = -7.e-6*t1008;
  t1830 = -2.8e-11*t887;
  t1253 = -1.*t1008;
  t1807 = 7.e-6*t1805;
  t1945 = -1. + t1796;
  t1946 = 4.e-6*t1945;
  t1964 = 4.e-6*t887;
  t1679 = 7.e-6*t1008;
  t1840 = -7.e-6*t887;
  t1672 = 4.e-6*t1008;
  t1981 = 4.e-6*t1809;
  t1834 = t1830 + t1008;
  t1837 = t232*t432*t1834;
  t1850 = t1840 + t1712;
  t1851 = t1850*t1702;
  t1870 = -1.000000000016*t887;
  t1875 = 1. + t1870;
  t1876 = t1875*t1783;
  t1880 = t1837 + t1851 + t1876;
  t1988 = 7.e-6*t1809;
  t1953 = -1.000000000049*t887;
  t1962 = 1. + t1953;
  t1963 = t1962*t232*t432;
  t1966 = t1964 + t1473;
  t1968 = t1966*t1702;
  t1969 = t1830 + t1253;
  t1972 = t1969*t1783;
  t1973 = t1963 + t1968 + t1972;
  t2005 = t1964 + t1679;
  t2021 = t232*t432*t2005;
  t2035 = -6.5e-11*t887;
  t2053 = 1. + t2035;
  t2055 = t2053*t1702;
  t2057 = t1840 + t1672;
  t2063 = t2057*t1783;
  t2065 = t2021 + t2055 + t2063;
  t1935 = -1.*t1809;
  t2091 = 4.e-6*t1805;
  t1947 = -7.e-6*t1809;
  t2111 = -2.8e-11*t1805;
  t2077 = -7.e-6*t1805;
  t1818 = -4.e-6*t1809;
  p_output1[0]=(t1497 - 0.15121*t1501)*t1553 + (t1497 + 0.15121*t1501)*t1599 - 0.148715*((1. - 6.5e-11*t1805)*t2065 + t1880*(t1981 + t2077) + t1973*(t1988 + t2091)) - 0.80315*((1. - 1.000000000016*t1805)*t1880 + t2065*(t1818 + t2077) + t1973*(t1809 + t2111)) - 0.038576*((1. - 1.000000000049*t1805)*t1973 + t2065*(t1947 + t2091) + t1880*(t1935 + t2111)) + var1[2] + t1783*(-1.8134809999999998e-6*(t1671 + t1712) - 0.2812110000084994*t887 - 0.038749000006999997*(t1008 + t917) - 2.7726089999999997e-12*var1[16]) + t232*t432*(-1.8134809999999998e-6*(t1446 + t1473) - 0.03874900000889869*t887 - 0.281211000004*(t1253 + t917) + 1.5843479999999999e-12*var1[16]) + t1702*(-0.281211000004*(t1671 + t1672) - 0.038749000006999997*(t1446 + t1679) - 1.1787626499999999e-16*t887 + 3.9608699999999997e-7*var1[16]) + t1880*(-0.5031510000160505*t1805 - 3.367757e-6*(t1807 + t1818) - 0.038575000014*(t1809 + t1821) - 1.9784030000000015e-12*var1[17]) + t1973*(-0.03857500001589017*t1805 - 0.5031510000080001*(t1821 + t1935) - 3.367757e-6*(t1946 + t1947) + 1.1305160000000008e-12*var1[17]) + t2065*(-2.18904205e-16*t1805 - 0.5031510000080001*(t1807 + t1981) - 0.038575000014*(t1946 + t1988) + 2.826290000000002e-7*var1[17]);
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

#include "foot_clearance_RrFootDiagonalStance1.hh"

namespace DiagonalStance1
{

void foot_clearance_RrFootDiagonalStance1_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
