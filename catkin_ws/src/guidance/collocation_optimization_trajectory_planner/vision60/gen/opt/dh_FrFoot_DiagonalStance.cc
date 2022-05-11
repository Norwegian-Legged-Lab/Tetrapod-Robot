/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:46:28 GMT+02:00
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
  double t525;
  double t766;
  double t1180;
  double t1185;
  double t1294;
  double t1293;
  double t537;
  double t848;
  double t916;
  double t927;
  double t947;
  double t995;
  double t1149;
  double t1150;
  double t1152;
  double t1309;
  double t1317;
  double t1320;
  double t1323;
  double t1211;
  double t1215;
  double t1256;
  double t1308;
  double t1324;
  double t1325;
  double t1540;
  double t1541;
  double t1545;
  double t1456;
  double t1467;
  double t1497;
  double t1498;
  double t1525;
  double t1528;
  double t1184;
  double t1196;
  double t1204;
  double t1658;
  double t1666;
  double t1657;
  double t1642;
  double t1665;
  double t1667;
  double t1669;
  double t1730;
  double t1709;
  double t1717;
  double t1728;
  double t1685;
  double t1737;
  double t1766;
  double t1771;
  double t1331;
  double t1553;
  double t1554;
  double t1601;
  double t1619;
  double t1621;
  double t1624;
  double t1626;
  double t1809;
  double t1810;
  double t1818;
  double t1794;
  double t1795;
  double t1796;
  double t1797;
  double t1803;
  double t1806;
  double t1878;
  double t1879;
  double t1880;
  double t1835;
  double t1909;
  double t1915;
  double t1916;
  double t1877;
  double t1917;
  double t1918;
  double t1919;
  double t1894;
  double t1895;
  double t1903;
  double t1929;
  double t1930;
  double t1931;
  double t2009;
  double t1987;
  double t1924;
  double t1926;
  double t1927;
  double t2007;
  double t1989;
  double t2074;
  double t1647;
  double t1670;
  double t1676;
  double t2077;
  double t1945;
  double t1967;
  double t1971;
  double t2123;
  double t2144;
  double t2156;
  double t2168;
  t525 = Cos(var1[14]);
  t766 = Sin(var1[14]);
  t1180 = Sin(var1[13]);
  t1185 = Cos(var1[13]);
  t1294 = Sin(var1[12]);
  t1293 = Cos(var1[12]);
  t537 = -0.0641*t525;
  t848 = -0.28*t766;
  t916 = t537 + t848;
  t927 = -1.*t525;
  t947 = 1. + t927;
  t995 = 0.075*t947;
  t1149 = 0.355*t525;
  t1150 = -0.0641*t766;
  t1152 = t995 + t1149 + t1150;
  t1309 = -0.325*t1180;
  t1317 = t1185*t916;
  t1320 = t1180*t1152;
  t1323 = t1309 + t1317 + t1320;
  t1211 = -1.*t525*t1180;
  t1215 = t1185*t766;
  t1256 = t1211 + t1215;
  t1308 = -0.068*t1294;
  t1324 = t1293*t1323;
  t1325 = t1308 + t1324;
  t1540 = t1185*t525;
  t1541 = t1180*t766;
  t1545 = t1540 + t1541;
  t1456 = -1.*t1293;
  t1467 = 1. + t1456;
  t1497 = -0.1575*t1467;
  t1498 = -0.2255*t1293;
  t1525 = -1.*t1294*t1323;
  t1528 = t1497 + t1498 + t1525;
  t1184 = t525*t1180;
  t1196 = -1.*t1185*t766;
  t1204 = t1184 + t1196;
  t1658 = Cos(var1[5]);
  t1666 = Sin(var1[5]);
  t1657 = Cos(var1[4]);
  t1642 = Sin(var1[4]);
  t1665 = t1658*t1545;
  t1667 = t1294*t1204*t1666;
  t1669 = t1665 + t1667;
  t1730 = Cos(var1[3]);
  t1709 = -1.*t1658*t1294*t1204;
  t1717 = t1545*t1666;
  t1728 = t1709 + t1717;
  t1685 = Sin(var1[3]);
  t1737 = t1293*t1657*t1204;
  t1766 = -1.*t1642*t1669;
  t1771 = t1737 + t1766;
  t1331 = -1.*t1294*t1325;
  t1553 = -1.*t1185;
  t1554 = 1. + t1553;
  t1601 = 0.325*t1554;
  t1619 = -1.*t1180*t916;
  t1621 = t1185*t1152;
  t1624 = t1601 + t1619 + t1621;
  t1626 = t1293*t1325*t1545;
  t1809 = t1658*t1528;
  t1810 = t1624*t1666;
  t1818 = t1809 + t1810;
  t1794 = -1.*t1658*t1294*t1545;
  t1795 = t1256*t1666;
  t1796 = t1794 + t1795;
  t1797 = t1658*t1624;
  t1803 = -1.*t1528*t1666;
  t1806 = t1797 + t1803;
  t1878 = t1658*t1256;
  t1879 = t1294*t1545*t1666;
  t1880 = t1878 + t1879;
  t1835 = -1.*t1293*t1658*t1818;
  t1909 = t1294*t1642;
  t1915 = -1.*t1293*t1657*t1666;
  t1916 = t1909 + t1915;
  t1877 = t1818*t1796;
  t1917 = t1325*t1642;
  t1918 = t1657*t1806;
  t1919 = t1917 + t1918;
  t1894 = t1293*t1545*t1642;
  t1895 = t1657*t1880;
  t1903 = t1894 + t1895;
  t1929 = t1657*t1325;
  t1930 = -1.*t1642*t1806;
  t1931 = t1929 + t1930;
  t2009 = t1624*t1545;
  t1987 = -1.*t1624*t1256;
  t1924 = t1657*t1294;
  t1926 = t1293*t1642*t1666;
  t1927 = t1924 + t1926;
  t2007 = t1293*t1325*t1204;
  t1989 = -1.*t1293*t1325*t1545;
  t2074 = t1818*t1728;
  t1647 = t1293*t1204*t1642;
  t1670 = t1657*t1669;
  t1676 = t1647 + t1670;
  t2077 = -1.*t1818*t1796;
  t1945 = t1293*t1657*t1545;
  t1967 = -1.*t1642*t1880;
  t1971 = t1945 + t1967;
  t2123 = t1294*t1325;
  t2144 = -1.*t1293*t1325*t1204;
  t2156 = t1293*t1658*t1818;
  t2168 = -1.*t1818*t1728;
  p_output1[0]=t1676*var2[0] + (t1728*t1730 - 1.*t1685*t1771)*var2[1] + (t1685*t1728 + t1730*t1771)*var2[2] + (t1903*(t1835 - 1.*t1916*t1919 - 1.*t1927*t1931) + t1916*(t1877 + t1903*t1919 + t1931*t1971))*var2[3] + (t1796*(t1331 + t1293*t1666*t1806 + t1835) + t1293*t1658*(t1626 + t1877 + t1806*t1880))*var2[4] + (t1293*(t1331 - 1.*t1293*t1528)*t1545 + t1294*(-1.*t1294*t1528*t1545 + t1256*t1624 + t1626))*var2[5] + (0.1575*t1204 + 0.2255*t1256)*var2[12] + (0.325*t766 - 1.*t1152*t766 - 1.*t525*t916)*var2[13] - 0.0641*var2[14];
  p_output1[1]=t1916*var2[0] + (t1293*t1658*t1730 - 1.*t1685*t1927)*var2[1] + (t1293*t1658*t1685 + t1730*t1927)*var2[2] + (t1903*(t1676*t1919 + t1771*t1931 + t2074) + t1676*(-1.*t1903*t1919 - 1.*t1931*t1971 + t2077))*var2[3] + (t1796*(t1669*t1806 + t2007 + t2074) + t1728*(-1.*t1806*t1880 + t1989 + t2077))*var2[4] + (t1204*t1293*(t1294*t1528*t1545 + t1987 + t1989) + t1293*t1545*(-1.*t1204*t1294*t1528 + t2007 + t2009))*var2[5] + (t1545*(-1.*t1323*t1545 + t1987) + t1256*(t1204*t1323 + t2009))*var2[12];
  p_output1[2]=t1903*var2[0] + (t1730*t1796 - 1.*t1685*t1971)*var2[1] + (t1685*t1796 + t1730*t1971)*var2[2] + (t1676*(t1916*t1919 + t1927*t1931 + t2156) + t1916*(-1.*t1676*t1919 - 1.*t1771*t1931 + t2168))*var2[3] + (t1728*(-1.*t1293*t1666*t1806 + t2123 + t2156) + t1293*t1658*(-1.*t1669*t1806 + t2144 + t2168))*var2[4] + (t1204*t1293*(t1293*t1528 + t2123) + t1294*(t1204*t1294*t1528 - 1.*t1545*t1624 + t2144))*var2[5] - 0.068*t1545*var2[12] + (-0.325*t525 + t1152*t525 - 1.*t766*t916)*var2[13] - 0.28*var2[14];
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
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
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

#include "dh_FrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void dh_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
