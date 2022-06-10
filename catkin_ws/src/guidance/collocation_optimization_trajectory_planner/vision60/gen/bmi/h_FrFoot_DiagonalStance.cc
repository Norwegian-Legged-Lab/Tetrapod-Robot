/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:56:13 GMT+02:00
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
  double t1852;
  double t2669;
  double t2683;
  double t2878;
  double t4693;
  double t1866;
  double t6595;
  double t998;
  double t6733;
  double t6740;
  double t6765;
  double t9571;
  double t10146;
  double t11311;
  double t11913;
  double t15306;
  double t17333;
  double t19645;
  double t25334;
  double t1051;
  double t1847;
  double t45562;
  double t2887;
  double t2919;
  double t46607;
  double t48313;
  double t48416;
  double t48422;
  double t46265;
  double t46853;
  double t48120;
  double t49330;
  double t49332;
  double t49348;
  double t15317;
  double t15422;
  double t49368;
  double t51151;
  double t51280;
  double t51322;
  double t51345;
  double t51356;
  double t51988;
  double t52040;
  double t52044;
  double t51973;
  double t51974;
  double t51975;
  double t52111;
  double t52113;
  double t52117;
  double t52119;
  double t52120;
  double t52121;
  double t52123;
  double t52124;
  double t52129;
  t1852 = Cos(var1[4]);
  t2669 = Sin(var1[12]);
  t2683 = Sin(var1[4]);
  t2878 = Cos(var1[12]);
  t4693 = Sin(var1[5]);
  t1866 = Cos(var1[5]);
  t6595 = Sin(var1[13]);
  t998 = Cos(var1[13]);
  t6733 = t2878*t2683;
  t6740 = t1852*t2669*t4693;
  t6765 = t6733 + t6740;
  t9571 = Sin(var1[14]);
  t10146 = -1.*t1852*t1866*t6595;
  t11311 = t998*t6765;
  t11913 = t10146 + t11311;
  t15306 = Cos(var1[14]);
  t17333 = t998*t1852*t1866;
  t19645 = t6595*t6765;
  t25334 = t17333 + t19645;
  t1051 = -1.*t998;
  t1847 = 1. + t1051;
  t45562 = Sin(var1[3]);
  t2887 = -1.*t2878;
  t2919 = 1. + t2887;
  t46607 = Cos(var1[3]);
  t48313 = t46607*t1866;
  t48416 = -1.*t45562*t2683*t4693;
  t48422 = t48313 + t48416;
  t46265 = t1866*t45562*t2683;
  t46853 = t46607*t4693;
  t48120 = t46265 + t46853;
  t49330 = -1.*t2878*t1852*t45562;
  t49332 = -1.*t2669*t48422;
  t49348 = t49330 + t49332;
  t15317 = -1.*t15306;
  t15422 = 1. + t15317;
  t49368 = -1.*t6595*t48120;
  t51151 = t998*t49348;
  t51280 = t49368 + t51151;
  t51322 = t998*t48120;
  t51345 = t6595*t49348;
  t51356 = t51322 + t51345;
  t51988 = t1866*t45562;
  t52040 = t46607*t2683*t4693;
  t52044 = t51988 + t52040;
  t51973 = -1.*t46607*t1866*t2683;
  t51974 = t45562*t4693;
  t51975 = t51973 + t51974;
  t52111 = t2878*t46607*t1852;
  t52113 = -1.*t2669*t52044;
  t52117 = t52111 + t52113;
  t52119 = -1.*t6595*t51975;
  t52120 = t998*t52117;
  t52121 = t52119 + t52120;
  t52123 = t998*t51975;
  t52124 = t6595*t52117;
  t52129 = t52123 + t52124;
  p_output1[0]=0.325*t1847*t1852*t1866 + 0.075*t15422*t25334 + 0.1575*t2669*t2683 + 0.1575*t1852*t2919*t4693 - 0.2255*(t2669*t2683 - 1.*t1852*t2878*t4693) - 0.325*t6595*t6765 + 0.075*t11913*t9571 + 0.355*(t15306*t25334 - 1.*t11913*t9571) - 0.0641*(t11913*t15306 + t25334*t9571) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.1575*t1852*t2669*t45562 + 0.325*t1847*t48120 - 0.1575*t2919*t48422 - 0.2255*(-1.*t1852*t2669*t45562 + t2878*t48422) + 0.075*t15422*t51356 - 0.325*t49348*t6595 + 0.075*t51280*t9571 + 0.355*(t15306*t51356 - 1.*t51280*t9571) - 0.0641*(t15306*t51280 + t51356*t9571) + var1[1] - 1.*var2[1];
  p_output1[2]=0.1575*t1852*t2669*t46607 + 0.325*t1847*t51975 - 0.1575*t2919*t52044 - 0.2255*(t1852*t2669*t46607 + t2878*t52044) + 0.075*t15422*t52129 - 0.325*t52117*t6595 + 0.075*t52121*t9571 + 0.355*(t15306*t52129 - 1.*t52121*t9571) - 0.0641*(t15306*t52121 + t52129*t9571) + var1[2] - 1.*var2[2];
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

namespace SymFunction
{

void h_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
