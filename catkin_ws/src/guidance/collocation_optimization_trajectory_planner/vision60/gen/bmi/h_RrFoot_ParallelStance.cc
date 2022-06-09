/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:10:58 GMT+02:00
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
  double t1245;
  double t1387;
  double t1388;
  double t1444;
  double t1640;
  double t1339;
  double t3721;
  double t360;
  double t4042;
  double t4071;
  double t4127;
  double t4149;
  double t4220;
  double t4287;
  double t4289;
  double t4730;
  double t4963;
  double t4967;
  double t4973;
  double t962;
  double t1185;
  double t6641;
  double t1560;
  double t1636;
  double t6859;
  double t6889;
  double t6892;
  double t6914;
  double t6774;
  double t6861;
  double t6867;
  double t7293;
  double t7319;
  double t7326;
  double t4748;
  double t4910;
  double t7382;
  double t7383;
  double t7389;
  double t7450;
  double t7480;
  double t7517;
  double t7889;
  double t7907;
  double t7934;
  double t7674;
  double t7679;
  double t7686;
  double t8206;
  double t8497;
  double t8507;
  double t8542;
  double t8561;
  double t8610;
  double t8665;
  double t8672;
  double t8695;
  t1245 = Cos(var1[4]);
  t1387 = Sin(var1[15]);
  t1388 = Sin(var1[4]);
  t1444 = Cos(var1[15]);
  t1640 = Sin(var1[5]);
  t1339 = Cos(var1[5]);
  t3721 = Sin(var1[16]);
  t360 = Cos(var1[16]);
  t4042 = t1444*t1388;
  t4071 = t1245*t1387*t1640;
  t4127 = t4042 + t4071;
  t4149 = Sin(var1[17]);
  t4220 = -1.*t1245*t1339*t3721;
  t4287 = t360*t4127;
  t4289 = t4220 + t4287;
  t4730 = Cos(var1[17]);
  t4963 = t360*t1245*t1339;
  t4967 = t3721*t4127;
  t4973 = t4963 + t4967;
  t962 = -1.*t360;
  t1185 = 1. + t962;
  t6641 = Sin(var1[3]);
  t1560 = -1.*t1444;
  t1636 = 1. + t1560;
  t6859 = Cos(var1[3]);
  t6889 = t6859*t1339;
  t6892 = -1.*t6641*t1388*t1640;
  t6914 = t6889 + t6892;
  t6774 = t1339*t6641*t1388;
  t6861 = t6859*t1640;
  t6867 = t6774 + t6861;
  t7293 = -1.*t1444*t1245*t6641;
  t7319 = -1.*t1387*t6914;
  t7326 = t7293 + t7319;
  t4748 = -1.*t4730;
  t4910 = 1. + t4748;
  t7382 = -1.*t3721*t6867;
  t7383 = t360*t7326;
  t7389 = t7382 + t7383;
  t7450 = t360*t6867;
  t7480 = t3721*t7326;
  t7517 = t7450 + t7480;
  t7889 = t1339*t6641;
  t7907 = t6859*t1388*t1640;
  t7934 = t7889 + t7907;
  t7674 = -1.*t6859*t1339*t1388;
  t7679 = t6641*t1640;
  t7686 = t7674 + t7679;
  t8206 = t1444*t6859*t1245;
  t8497 = -1.*t1387*t7934;
  t8507 = t8206 + t8497;
  t8542 = -1.*t3721*t7686;
  t8561 = t360*t8507;
  t8610 = t8542 + t8561;
  t8665 = t360*t7686;
  t8672 = t3721*t8507;
  t8695 = t8665 + t8672;
  p_output1[0]=-0.325*t1185*t1245*t1339 + 0.1575*t1387*t1388 + 0.1575*t1245*t1636*t1640 - 0.2255*(t1387*t1388 - 1.*t1245*t1444*t1640) + 0.325*t3721*t4127 - 0.575*t4149*t4289 - 0.575*t4910*t4973 - 0.0641*(t4289*t4730 + t4149*t4973) - 0.295*(-1.*t4149*t4289 + t4730*t4973) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.1575*t1245*t1387*t6641 - 0.325*t1185*t6867 - 0.1575*t1636*t6914 - 0.2255*(-1.*t1245*t1387*t6641 + t1444*t6914) + 0.325*t3721*t7326 - 0.575*t4149*t7389 - 0.575*t4910*t7517 - 0.0641*(t4730*t7389 + t4149*t7517) - 0.295*(-1.*t4149*t7389 + t4730*t7517) + var1[1] - 1.*var2[1];
  p_output1[2]=0.1575*t1245*t1387*t6859 - 0.325*t1185*t7686 - 0.1575*t1636*t7934 - 0.2255*(t1245*t1387*t6859 + t1444*t7934) + 0.325*t3721*t8507 - 0.575*t4149*t8610 - 0.575*t4910*t8695 - 0.0641*(t4730*t8610 + t4149*t8695) - 0.295*(-1.*t4149*t8610 + t4730*t8695) + var1[2] - 1.*var2[2];
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

#include "h_RrFoot_ParallelStance.hh"

namespace SymFunction
{

void h_RrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
