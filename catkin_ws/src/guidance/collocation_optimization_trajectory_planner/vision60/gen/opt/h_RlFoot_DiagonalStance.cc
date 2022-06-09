/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:06:29 GMT+02:00
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
  double t778;
  double t781;
  double t782;
  double t785;
  double t890;
  double t779;
  double t921;
  double t705;
  double t922;
  double t929;
  double t931;
  double t950;
  double t951;
  double t953;
  double t958;
  double t965;
  double t968;
  double t969;
  double t1156;
  double t723;
  double t760;
  double t1577;
  double t786;
  double t835;
  double t1583;
  double t1588;
  double t1589;
  double t1590;
  double t1582;
  double t1584;
  double t1586;
  double t1599;
  double t1600;
  double t1602;
  double t966;
  double t967;
  double t1604;
  double t1606;
  double t1608;
  double t1616;
  double t1617;
  double t1619;
  double t1751;
  double t1752;
  double t1753;
  double t1744;
  double t1745;
  double t1749;
  double t1763;
  double t1766;
  double t1767;
  double t1770;
  double t1776;
  double t1779;
  double t1782;
  double t1783;
  double t1784;
  t778 = Cos(var1[4]);
  t781 = Sin(var1[9]);
  t782 = Sin(var1[4]);
  t785 = Cos(var1[9]);
  t890 = Sin(var1[5]);
  t779 = Cos(var1[5]);
  t921 = Sin(var1[10]);
  t705 = Cos(var1[10]);
  t922 = t785*t782;
  t929 = t778*t781*t890;
  t931 = t922 + t929;
  t950 = Sin(var1[11]);
  t951 = -1.*t778*t779*t921;
  t953 = t705*t931;
  t958 = t951 + t953;
  t965 = Cos(var1[11]);
  t968 = t705*t778*t779;
  t969 = t921*t931;
  t1156 = t968 + t969;
  t723 = -1.*t705;
  t760 = 1. + t723;
  t1577 = Sin(var1[3]);
  t786 = -1.*t785;
  t835 = 1. + t786;
  t1583 = Cos(var1[3]);
  t1588 = t1583*t779;
  t1589 = -1.*t1577*t782*t890;
  t1590 = t1588 + t1589;
  t1582 = t779*t1577*t782;
  t1584 = t1583*t890;
  t1586 = t1582 + t1584;
  t1599 = -1.*t785*t778*t1577;
  t1600 = -1.*t781*t1590;
  t1602 = t1599 + t1600;
  t966 = -1.*t965;
  t967 = 1. + t966;
  t1604 = -1.*t921*t1586;
  t1606 = t705*t1602;
  t1608 = t1604 + t1606;
  t1616 = t705*t1586;
  t1617 = t921*t1602;
  t1619 = t1616 + t1617;
  t1751 = t779*t1577;
  t1752 = t1583*t782*t890;
  t1753 = t1751 + t1752;
  t1744 = -1.*t1583*t779*t782;
  t1745 = t1577*t890;
  t1749 = t1744 + t1745;
  t1763 = t785*t1583*t778;
  t1766 = -1.*t781*t1753;
  t1767 = t1763 + t1766;
  t1770 = -1.*t921*t1749;
  t1776 = t705*t1767;
  t1779 = t1770 + t1776;
  t1782 = t705*t1749;
  t1783 = t921*t1767;
  t1784 = t1782 + t1783;
  p_output1[0]=-0.325*t760*t778*t779 - 0.1575*t781*t782 - 0.1575*t778*t835*t890 + 0.2255*(t781*t782 - 1.*t778*t785*t890) + 0.325*t921*t931 - 0.575*t950*t958 - 0.295*(-1.*t950*t958 + t1156*t965) - 0.0641*(t1156*t950 + t958*t965) - 0.575*t1156*t967 + var1[0] - 1.*var2[0];
  p_output1[1]=-0.325*t1586*t760 + 0.1575*t1577*t778*t781 + 0.2255*(-1.*t1577*t778*t781 + t1590*t785) + 0.1575*t1590*t835 + 0.325*t1602*t921 - 0.575*t1608*t950 - 0.0641*(t1619*t950 + t1608*t965) - 0.295*(-1.*t1608*t950 + t1619*t965) - 0.575*t1619*t967 + var1[1] - 1.*var2[1];
  p_output1[2]=-0.325*t1749*t760 - 0.1575*t1583*t778*t781 + 0.2255*(t1583*t778*t781 + t1753*t785) + 0.1575*t1753*t835 + 0.325*t1767*t921 - 0.575*t1779*t950 - 0.0641*(t1784*t950 + t1779*t965) - 0.295*(-1.*t1779*t950 + t1784*t965) - 0.575*t1784*t967 + var1[2] - 1.*var2[2];
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

#include "h_RlFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void h_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
