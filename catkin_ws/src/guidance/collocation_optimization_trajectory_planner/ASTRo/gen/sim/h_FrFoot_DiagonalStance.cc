/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:03:36 GMT+02:00
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
  double t125;
  double t221;
  double t293;
  double t308;
  double t419;
  double t424;
  double t174;
  double t571;
  double t443;
  double t449;
  double t643;
  double t693;
  double t705;
  double t714;
  double t726;
  double t773;
  double t774;
  double t775;
  double t806;
  double t811;
  double t820;
  double t821;
  double t352;
  double t427;
  double t855;
  double t487;
  double t559;
  double t858;
  double t857;
  double t859;
  double t860;
  double t865;
  double t869;
  double t878;
  double t662;
  double t683;
  double t764;
  double t765;
  double t909;
  double t922;
  double t931;
  double t934;
  double t935;
  double t939;
  double t953;
  double t971;
  double t995;
  double t1248;
  double t1254;
  double t1272;
  double t1289;
  double t1299;
  double t1302;
  double t1329;
  double t1337;
  double t1340;
  double t1382;
  double t1390;
  double t1417;
  double t1434;
  double t1451;
  double t1462;
  t125 = Cos(var1[4]);
  t221 = Cos(var1[12]);
  t293 = -1.*t221;
  t308 = 1. + t293;
  t419 = Sin(var1[12]);
  t424 = -0.15121*t419;
  t174 = Cos(var1[5]);
  t571 = Sin(var1[5]);
  t443 = Sin(var1[13]);
  t449 = Sin(var1[4]);
  t643 = Cos(var1[13]);
  t693 = t221*t125*t174;
  t705 = -1.*t125*t419*t571;
  t714 = t693 + t705;
  t726 = Cos(var1[14]);
  t773 = -1.*t443*t449;
  t774 = t643*t714;
  t775 = t773 + t774;
  t806 = Sin(var1[14]);
  t811 = t643*t449;
  t820 = t443*t714;
  t821 = t811 + t820;
  t352 = 0.15121*t308;
  t427 = t352 + t424;
  t855 = Sin(var1[3]);
  t487 = -0.15121*t308;
  t559 = t487 + t424;
  t858 = Cos(var1[3]);
  t857 = t174*t855*t449;
  t859 = t858*t571;
  t860 = t857 + t859;
  t865 = t858*t174;
  t869 = -1.*t855*t449*t571;
  t878 = t865 + t869;
  t662 = -1.*t643;
  t683 = 1. + t662;
  t764 = -1.*t726;
  t765 = 1. + t764;
  t909 = t221*t860;
  t922 = t419*t878;
  t931 = t909 + t922;
  t934 = t125*t443*t855;
  t935 = t643*t931;
  t939 = t934 + t935;
  t953 = -1.*t643*t125*t855;
  t971 = t443*t931;
  t995 = t953 + t971;
  t1248 = -1.*t858*t174*t449;
  t1254 = t855*t571;
  t1272 = t1248 + t1254;
  t1289 = t174*t855;
  t1299 = t858*t449*t571;
  t1302 = t1289 + t1299;
  t1329 = t221*t1272;
  t1337 = t419*t1302;
  t1340 = t1329 + t1337;
  t1382 = -1.*t858*t125*t443;
  t1390 = t643*t1340;
  t1417 = t1382 + t1390;
  t1434 = t643*t858*t125;
  t1451 = t443*t1340;
  t1462 = t1434 + t1451;
  p_output1[0]=t125*t174*t427 + 0.28121*t443*t449 - 1.*t125*t559*t571 - 0.15121*(-1.*t125*t174*t419 - 1.*t125*t221*t571) + 0.28121*t683*t714 + 0.50321*t765*t775 - 0.50321*t806*t821 + 0.19821*(t726*t775 + t806*t821) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.28121*t125*t443*t855 + t427*t860 + t559*t878 - 0.15121*(-1.*t419*t860 + t221*t878) + 0.28121*t683*t931 + 0.50321*t765*t939 - 0.50321*t806*t995 + 0.19821*(t726*t939 + t806*t995) + var1[1] - 1.*var2[1];
  p_output1[2]=-0.15121*(t1302*t221 - 1.*t1272*t419) + t1272*t427 + t1302*t559 + 0.28121*t1340*t683 + 0.50321*t1417*t765 - 0.50321*t1462*t806 + 0.19821*(t1417*t726 + t1462*t806) + 0.28121*t125*t443*t858 + var1[2] - 1.*var2[2];
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
