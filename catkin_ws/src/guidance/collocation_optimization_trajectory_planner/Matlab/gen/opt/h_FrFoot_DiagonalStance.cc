/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:28:22 GMT+01:00
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
  double t309;
  double t27;
  double t43;
  double t144;
  double t171;
  double t215;
  double t229;
  double t312;
  double t345;
  double t366;
  double t428;
  double t28;
  double t641;
  double t459;
  double t793;
  double t807;
  double t835;
  double t964;
  double t970;
  double t974;
  double t981;
  double t983;
  double t988;
  double t1003;
  double t1148;
  double t1050;
  double t1063;
  double t1081;
  double t1087;
  double t1099;
  double t1124;
  double t1185;
  double t1186;
  double t1192;
  double t1194;
  double t1281;
  double t1301;
  double t1306;
  double t1314;
  double t1342;
  double t1365;
  double t293;
  double t359;
  double t372;
  double t432;
  double t457;
  double t175;
  double t271;
  double t1547;
  double t519;
  double t613;
  double t1570;
  double t701;
  double t728;
  double t732;
  double t746;
  double t778;
  double t1556;
  double t1571;
  double t1572;
  double t1598;
  double t1605;
  double t1621;
  double t900;
  double t906;
  double t915;
  double t993;
  double t1018;
  double t1031;
  double t1631;
  double t1636;
  double t1637;
  double t1645;
  double t1647;
  double t1662;
  double t1143;
  double t1144;
  double t1153;
  double t1154;
  double t1170;
  double t1217;
  double t1223;
  double t1229;
  double t1233;
  double t1274;
  double t1673;
  double t1682;
  double t1685;
  double t1691;
  double t1698;
  double t1703;
  double t1704;
  double t1729;
  double t1398;
  double t1402;
  double t1746;
  double t1759;
  double t1778;
  double t1790;
  double t1462;
  double t1473;
  double t1947;
  double t1948;
  double t1963;
  double t1977;
  double t1982;
  double t1983;
  double t2027;
  double t2032;
  double t2038;
  double t2053;
  double t2062;
  double t2063;
  double t2071;
  double t2126;
  double t2128;
  double t2130;
  double t2139;
  double t2154;
  double t2157;
  double t2171;
  double t2184;
  double t2185;
  double t2194;
  double t2195;
  t309 = Cos(var1[10]);
  t27 = Cos(var1[4]);
  t43 = Cos(var1[9]);
  t144 = -1.*t43;
  t171 = 1. + t144;
  t215 = Sin(var1[9]);
  t229 = -0.15121*t215;
  t312 = -1.*t309;
  t345 = 1. + t312;
  t366 = -1. + t309;
  t428 = Sin(var1[10]);
  t28 = Cos(var1[5]);
  t641 = Sin(var1[5]);
  t459 = Sin(var1[4]);
  t793 = -1.*t27*t28*t215;
  t807 = -1.*t43*t27*t641;
  t835 = t793 + t807;
  t964 = t43*t27*t28;
  t970 = -1.*t27*t215*t641;
  t974 = t964 + t970;
  t981 = Cos(var1[11]);
  t983 = -1.*t981;
  t988 = 1. + t983;
  t1003 = Sin(var1[11]);
  t1148 = -1. + t981;
  t1050 = t428*t459;
  t1063 = -4.e-6*t428*t835;
  t1081 = -1.000000000016*t345;
  t1087 = 1. + t1081;
  t1099 = t1087*t974;
  t1124 = t1050 + t1063 + t1099;
  t1185 = t309*t459;
  t1186 = 4.e-6*t345*t835;
  t1192 = -1.*t428*t974;
  t1194 = t1185 + t1186 + t1192;
  t1281 = 4.e-6*t345*t459;
  t1301 = 1.6e-11*t366;
  t1306 = 1. + t1301;
  t1314 = t1306*t835;
  t1342 = 4.e-6*t428*t974;
  t1365 = t1281 + t1314 + t1342;
  t293 = -4.9936e-13*var1[10];
  t359 = -0.038749*t345;
  t372 = 6.19984e-13*t366;
  t432 = -0.281210000004*t428;
  t457 = t293 + t359 + t372 + t432;
  t175 = 0.15121*t171;
  t271 = t175 + t229;
  t1547 = Sin(var1[3]);
  t519 = -0.15121*t171;
  t613 = t519 + t229;
  t1570 = Cos(var1[3]);
  t701 = -1.2484e-7*var1[10];
  t728 = 2.479936e-18*t345;
  t732 = -1.54996e-7*t366;
  t746 = 1.124840000016e-6*t428;
  t778 = t701 + t728 + t732 + t746;
  t1556 = t28*t1547*t459;
  t1571 = t1570*t641;
  t1572 = t1556 + t1571;
  t1598 = t1570*t28;
  t1605 = -1.*t1547*t459*t641;
  t1621 = t1598 + t1605;
  t900 = 0.281210000008499*t345;
  t906 = -0.03874900000062*t428;
  t915 = t900 + t906;
  t993 = 0.50315000001605*t988;
  t1018 = -0.0398890000006382*t1003;
  t1031 = t993 + t1018;
  t1631 = -1.*t215*t1572;
  t1636 = t43*t1621;
  t1637 = t1631 + t1636;
  t1645 = t43*t1572;
  t1647 = t215*t1621;
  t1662 = t1645 + t1647;
  t1143 = -5.04e-14*var1[11];
  t1144 = -0.039889*t988;
  t1153 = 6.38224e-13*t1148;
  t1154 = -0.503150000008*t1003;
  t1170 = t1143 + t1144 + t1153 + t1154;
  t1217 = -1.26e-8*var1[11];
  t1223 = 2.552896e-18*t988;
  t1229 = -1.59556e-7*t1148;
  t1233 = 2.012600000032e-6*t1003;
  t1274 = t1217 + t1223 + t1229 + t1233;
  t1673 = -1.*t27*t428*t1547;
  t1682 = -4.e-6*t428*t1637;
  t1685 = t1087*t1662;
  t1691 = t1673 + t1682 + t1685;
  t1698 = -1.*t309*t27*t1547;
  t1703 = 4.e-6*t345*t1637;
  t1704 = -1.*t428*t1662;
  t1729 = t1698 + t1703 + t1704;
  t1398 = 1.6e-11*t1148;
  t1402 = 1. + t1398;
  t1746 = -4.e-6*t345*t27*t1547;
  t1759 = t1306*t1637;
  t1778 = 4.e-6*t428*t1662;
  t1790 = t1746 + t1759 + t1778;
  t1462 = -1.000000000016*t988;
  t1473 = 1. + t1462;
  t1947 = -1.*t1570*t28*t459;
  t1948 = t1547*t641;
  t1963 = t1947 + t1948;
  t1977 = t28*t1547;
  t1982 = t1570*t459*t641;
  t1983 = t1977 + t1982;
  t2027 = -1.*t215*t1963;
  t2032 = t43*t1983;
  t2038 = t2027 + t2032;
  t2053 = t43*t1963;
  t2062 = t215*t1983;
  t2063 = t2053 + t2062;
  t2071 = t1570*t27*t428;
  t2126 = -4.e-6*t428*t2038;
  t2128 = t1087*t2063;
  t2130 = t2071 + t2126 + t2128;
  t2139 = t309*t1570*t27;
  t2154 = 4.e-6*t345*t2038;
  t2157 = -1.*t428*t2063;
  t2171 = t2139 + t2154 + t2157;
  t2184 = 4.e-6*t345*t1570*t27;
  t2185 = t1306*t2038;
  t2194 = 4.e-6*t428*t2063;
  t2195 = t2184 + t2185 + t2194;
  p_output1[0]=t1031*t1124 + t1170*t1194 + t1274*t1365 + 0.803147*(t1003*t1194 - 4.e-6*t1003*t1365 + t1124*t1473) + t27*t271*t28 + t457*t459 - 1.*t27*t613*t641 + t778*t835 + t915*t974 - 0.14871*(4.e-6*t1003*t1124 + t1365*t1402 + 4.e-6*t1194*t988) - 0.041195*(-1.*t1003*t1124 + t1194*t981 + 4.e-6*t1365*t988) + var1[0] - 1.*var2[0];
  p_output1[1]=t1031*t1691 + t1170*t1729 + t1274*t1790 + 0.803147*(t1473*t1691 + t1003*t1729 - 4.e-6*t1003*t1790) + t1572*t271 - 1.*t1547*t27*t457 + t1621*t613 + t1637*t778 + t1662*t915 - 0.14871*(4.e-6*t1003*t1691 + t1402*t1790 + 4.e-6*t1729*t988) - 0.041195*(-1.*t1003*t1691 + t1729*t981 + 4.e-6*t1790*t988) + var1[1] - 1.*var2[1];
  p_output1[2]=t1031*t2130 + t1170*t2171 + t1274*t2195 + 0.803147*(t1473*t2130 + t1003*t2171 - 4.e-6*t1003*t2195) + t1963*t271 + t1570*t27*t457 + t1983*t613 + t2038*t778 + t2063*t915 - 0.14871*(4.e-6*t1003*t2130 + t1402*t2195 + 4.e-6*t2171*t988) - 0.041195*(-1.*t1003*t2130 + t2171*t981 + 4.e-6*t2195*t988) + var1[2] - 1.*var2[2];
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
