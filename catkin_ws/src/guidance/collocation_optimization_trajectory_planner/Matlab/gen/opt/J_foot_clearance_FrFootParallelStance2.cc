/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:32:50 GMT+01:00
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
  double t518;
  double t1201;
  double t1210;
  double t1224;
  double t1235;
  double t1298;
  double t1299;
  double t1366;
  double t1333;
  double t1336;
  double t1376;
  double t712;
  double t806;
  double t892;
  double t976;
  double t1356;
  double t1420;
  double t1429;
  double t1442;
  double t1445;
  double t1465;
  double t240;
  double t1553;
  double t1567;
  double t1582;
  double t1617;
  double t1622;
  double t1625;
  double t1629;
  double t1646;
  double t1652;
  double t1663;
  double t1721;
  double t1684;
  double t1688;
  double t1691;
  double t1693;
  double t1694;
  double t1696;
  double t1726;
  double t1727;
  double t1729;
  double t1736;
  double t1763;
  double t1765;
  double t1768;
  double t1769;
  double t1775;
  double t1779;
  double t1248;
  double t1311;
  double t298;
  double t812;
  double t955;
  double t1071;
  double t1113;
  double t1438;
  double t1440;
  double t1518;
  double t1519;
  double t1522;
  double t1540;
  double t1551;
  double t1589;
  double t1592;
  double t1616;
  double t1657;
  double t1672;
  double t1683;
  double t1856;
  double t1857;
  double t1858;
  double t1864;
  double t1865;
  double t1866;
  double t1714;
  double t1717;
  double t1722;
  double t1724;
  double t1725;
  double t1745;
  double t1751;
  double t1758;
  double t1761;
  double t1762;
  double t1869;
  double t1870;
  double t1874;
  double t1876;
  double t1879;
  double t1880;
  double t1884;
  double t1887;
  double t1789;
  double t1797;
  double t1890;
  double t1893;
  double t1897;
  double t1901;
  double t1839;
  double t1840;
  double t1941;
  double t1942;
  double t1943;
  double t1949;
  double t1954;
  double t1958;
  double t1965;
  double t1972;
  double t1978;
  double t1981;
  double t1984;
  double t1986;
  double t1992;
  double t1993;
  double t1996;
  double t2000;
  double t2001;
  double t2003;
  double t2006;
  double t2007;
  double t2008;
  double t2064;
  double t2067;
  double t2068;
  double t2070;
  double t2091;
  double t2093;
  double t2101;
  double t2103;
  double t2107;
  double t2113;
  double t2117;
  double t2122;
  double t2124;
  double t2125;
  double t2129;
  double t2132;
  double t2142;
  double t2266;
  double t2270;
  double t2276;
  double t2282;
  double t2287;
  double t2290;
  double t2296;
  double t2297;
  double t2300;
  double t2302;
  double t2305;
  double t2307;
  double t2310;
  double t2311;
  double t2388;
  double t2393;
  double t2397;
  double t2405;
  double t2427;
  double t2428;
  double t2430;
  double t2445;
  double t2446;
  double t2451;
  double t2454;
  t518 = Cos(var1[10]);
  t1201 = Sin(var1[3]);
  t1210 = Cos(var1[9]);
  t1224 = -1.*t1210;
  t1235 = 1. + t1224;
  t1298 = Sin(var1[9]);
  t1299 = -0.15121*t1298;
  t1366 = Cos(var1[3]);
  t1333 = Cos(var1[5]);
  t1336 = Sin(var1[4]);
  t1376 = Sin(var1[5]);
  t712 = -1.*t518;
  t806 = 1. + t712;
  t892 = -1. + t518;
  t976 = Sin(var1[10]);
  t1356 = t1333*t1201*t1336;
  t1420 = t1366*t1376;
  t1429 = t1356 + t1420;
  t1442 = t1366*t1333;
  t1445 = -1.*t1201*t1336*t1376;
  t1465 = t1442 + t1445;
  t240 = Cos(var1[4]);
  t1553 = -1.*t1298*t1429;
  t1567 = t1210*t1465;
  t1582 = t1553 + t1567;
  t1617 = t1210*t1429;
  t1622 = t1298*t1465;
  t1625 = t1617 + t1622;
  t1629 = Cos(var1[11]);
  t1646 = -1.*t1629;
  t1652 = 1. + t1646;
  t1663 = Sin(var1[11]);
  t1721 = -1. + t1629;
  t1684 = -1.*t240*t976*t1201;
  t1688 = -4.e-6*t976*t1582;
  t1691 = -1.000000000016*t806;
  t1693 = 1. + t1691;
  t1694 = t1693*t1625;
  t1696 = t1684 + t1688 + t1694;
  t1726 = -1.*t518*t240*t1201;
  t1727 = 4.e-6*t806*t1582;
  t1729 = -1.*t976*t1625;
  t1736 = t1726 + t1727 + t1729;
  t1763 = -4.e-6*t806*t240*t1201;
  t1765 = 1.6e-11*t892;
  t1768 = 1. + t1765;
  t1769 = t1768*t1582;
  t1775 = 4.e-6*t976*t1625;
  t1779 = t1763 + t1769 + t1775;
  t1248 = 0.15121*t1235;
  t1311 = t1248 + t1299;
  t298 = -4.9936e-13*var1[10];
  t812 = -0.038749*t806;
  t955 = 6.19984e-13*t892;
  t1071 = -0.281210000004*t976;
  t1113 = t298 + t812 + t955 + t1071;
  t1438 = -0.15121*t1235;
  t1440 = t1438 + t1299;
  t1518 = -1.2484e-7*var1[10];
  t1519 = 2.479936e-18*t806;
  t1522 = -1.54996e-7*t892;
  t1540 = 1.124840000016e-6*t976;
  t1551 = t1518 + t1519 + t1522 + t1540;
  t1589 = 0.281210000008499*t806;
  t1592 = -0.03874900000062*t976;
  t1616 = t1589 + t1592;
  t1657 = 0.50315000001605*t1652;
  t1672 = -0.0398890000006382*t1663;
  t1683 = t1657 + t1672;
  t1856 = t1366*t240*t1333*t1298;
  t1857 = t1210*t1366*t240*t1376;
  t1858 = t1856 + t1857;
  t1864 = -1.*t1210*t1366*t240*t1333;
  t1865 = t1366*t240*t1298*t1376;
  t1866 = t1864 + t1865;
  t1714 = -5.04e-14*var1[11];
  t1717 = -0.039889*t1652;
  t1722 = 6.38224e-13*t1721;
  t1724 = -0.503150000008*t1663;
  t1725 = t1714 + t1717 + t1722 + t1724;
  t1745 = -1.26e-8*var1[11];
  t1751 = 2.552896e-18*t1652;
  t1758 = -1.59556e-7*t1721;
  t1761 = 2.012600000032e-6*t1663;
  t1762 = t1745 + t1751 + t1758 + t1761;
  t1869 = -1.*t1366*t976*t1336;
  t1870 = -4.e-6*t976*t1858;
  t1874 = t1693*t1866;
  t1876 = t1869 + t1870 + t1874;
  t1879 = -1.*t518*t1366*t1336;
  t1880 = 4.e-6*t806*t1858;
  t1884 = -1.*t976*t1866;
  t1887 = t1879 + t1880 + t1884;
  t1789 = 1.6e-11*t1721;
  t1797 = 1. + t1789;
  t1890 = -4.e-6*t806*t1366*t1336;
  t1893 = t1768*t1858;
  t1897 = 4.e-6*t976*t1866;
  t1901 = t1890 + t1893 + t1897;
  t1839 = -1.000000000016*t1652;
  t1840 = 1. + t1839;
  t1941 = t1366*t1333*t1336;
  t1942 = -1.*t1201*t1376;
  t1943 = t1941 + t1942;
  t1949 = t1333*t1201;
  t1954 = t1366*t1336*t1376;
  t1958 = t1949 + t1954;
  t1965 = t1298*t1943;
  t1972 = t1210*t1958;
  t1978 = t1965 + t1972;
  t1981 = t1210*t1943;
  t1984 = -1.*t1298*t1958;
  t1986 = t1981 + t1984;
  t1992 = 4.e-6*t976*t1978;
  t1993 = t1768*t1986;
  t1996 = t1992 + t1993;
  t2000 = -1.*t976*t1978;
  t2001 = 4.e-6*t806*t1986;
  t2003 = t2000 + t2001;
  t2006 = t1693*t1978;
  t2007 = -4.e-6*t976*t1986;
  t2008 = t2006 + t2007;
  t2064 = -0.15121*t1210;
  t2067 = -1.*t1366*t1333*t1336;
  t2068 = t1201*t1376;
  t2070 = t2067 + t2068;
  t2091 = -1.*t1298*t2070;
  t2093 = t2091 + t1972;
  t2101 = -1.*t1210*t2070;
  t2103 = t2101 + t1984;
  t2107 = 4.e-6*t976*t2093;
  t2113 = t1768*t2103;
  t2117 = t2107 + t2113;
  t2122 = -1.*t976*t2093;
  t2124 = 4.e-6*t806*t2103;
  t2125 = t2122 + t2124;
  t2129 = t1693*t2093;
  t2132 = -4.e-6*t976*t2103;
  t2142 = t2129 + t2132;
  t2266 = t1210*t2070;
  t2270 = t1298*t1958;
  t2276 = t2266 + t2270;
  t2282 = -1.*t1366*t240*t976;
  t2287 = -1.*t518*t2276;
  t2290 = t2282 + t2107 + t2287;
  t2296 = 4.e-6*t1366*t240*t976;
  t2297 = -1.6e-11*t976*t2093;
  t2300 = 4.e-6*t518*t2276;
  t2302 = t2296 + t2297 + t2300;
  t2305 = t518*t1366*t240;
  t2307 = -4.e-6*t518*t2093;
  t2310 = -1.000000000016*t976*t2276;
  t2311 = t2305 + t2307 + t2310;
  t2388 = t1366*t240*t976;
  t2393 = -4.e-6*t976*t2093;
  t2397 = t1693*t2276;
  t2405 = t2388 + t2393 + t2397;
  t2427 = 4.e-6*t806*t2093;
  t2428 = -1.*t976*t2276;
  t2430 = t2305 + t2427 + t2428;
  t2445 = 4.e-6*t806*t1366*t240;
  t2446 = t1768*t2093;
  t2451 = 4.e-6*t976*t2276;
  t2454 = t2445 + t2446 + t2451;
  p_output1[0]=1.;
  p_output1[1]=t1311*t1429 + t1440*t1465 + t1551*t1582 + t1616*t1625 + t1683*t1696 + t1725*t1736 + t1762*t1779 - 0.041195*(-1.*t1663*t1696 + t1629*t1736 + 4.e-6*t1652*t1779) - 0.14871*(4.e-6*t1663*t1696 + 4.e-6*t1652*t1736 + t1779*t1797) + 0.803147*(t1663*t1736 - 4.e-6*t1663*t1779 + t1696*t1840) - 1.*t1113*t1201*t240;
  p_output1[2]=-1.*t1113*t1336*t1366 + t1551*t1858 + t1616*t1866 + t1683*t1876 + t1725*t1887 + t1762*t1901 - 0.041195*(-1.*t1663*t1876 + t1629*t1887 + 4.e-6*t1652*t1901) + 0.803147*(t1840*t1876 + t1663*t1887 - 4.e-6*t1663*t1901) - 0.14871*(4.e-6*t1663*t1876 + 4.e-6*t1652*t1887 + t1797*t1901) - 1.*t1311*t1333*t1366*t240 + t1366*t1376*t1440*t240;
  p_output1[3]=t1440*t1943 + t1311*t1958 + t1616*t1978 + t1551*t1986 + t1762*t1996 + t1725*t2003 + t1683*t2008 - 0.041195*(4.e-6*t1652*t1996 + t1629*t2003 - 1.*t1663*t2008) - 0.14871*(t1797*t1996 + 4.e-6*t1652*t2003 + 4.e-6*t1663*t2008) + 0.803147*(-4.e-6*t1663*t1996 + t1663*t2003 + t1840*t2008);
  p_output1[4]=t1958*(t1299 + t2064) + (0.15121*t1298 + t2064)*t2070 + t1616*t2093 + t1551*t2103 + t1762*t2117 + t1725*t2125 + t1683*t2142 - 0.041195*(4.e-6*t1652*t2117 + t1629*t2125 - 1.*t1663*t2142) - 0.14871*(t1797*t2117 + 4.e-6*t1652*t2125 + 4.e-6*t1663*t2142) + 0.803147*(-4.e-6*t1663*t2117 + t1663*t2125 + t1840*t2142);
  p_output1[5]=t1725*t2290 + t1762*t2302 + t1683*t2311 - 0.041195*(t1629*t2290 + 4.e-6*t1652*t2302 - 1.*t1663*t2311) - 0.14871*(4.e-6*t1652*t2290 + t1797*t2302 + 4.e-6*t1663*t2311) + 0.803147*(t1663*t2290 - 4.e-6*t1663*t2302 + t1840*t2311) + t1366*t240*(-4.9936e-13 + t1592 - 0.281210000004*t518) + t2093*(-1.2484e-7 + 1.124840000016e-6*t518 + 1.5499600000248e-7*t976) + t2276*(-0.03874900000062*t518 + 0.281210000008499*t976);
  p_output1[6]=(-0.0398890000006382*t1629 + 0.50315000001605*t1663)*t2405 + (-5.04e-14 - 0.503150000008*t1629 + t1672)*t2430 + (-1.26e-8 + 2.012600000032e-6*t1629 + 1.59556000002553e-7*t1663)*t2454 + 0.803147*(-1.000000000016*t1663*t2405 + t1629*t2430 - 4.e-6*t1629*t2454) - 0.14871*(4.e-6*t1629*t2405 + 4.e-6*t1663*t2430 - 1.6e-11*t1663*t2454) - 0.041195*(-1.*t1629*t2405 - 1.*t1663*t2430 + 4.e-6*t1663*t2454);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_foot_clearance_FrFootParallelStance2.hh"

namespace ParallelStance2
{

void J_foot_clearance_FrFootParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
