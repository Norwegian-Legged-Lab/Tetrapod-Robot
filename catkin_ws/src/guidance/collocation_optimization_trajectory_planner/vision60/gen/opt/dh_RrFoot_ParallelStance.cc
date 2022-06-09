/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:07:50 GMT+02:00
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
  double t13554;
  double t14207;
  double t19264;
  double t19400;
  double t19445;
  double t19444;
  double t14072;
  double t14385;
  double t16291;
  double t18932;
  double t19113;
  double t19114;
  double t19116;
  double t19118;
  double t19121;
  double t19447;
  double t19448;
  double t19449;
  double t19450;
  double t19432;
  double t19436;
  double t19437;
  double t19446;
  double t19454;
  double t19455;
  double t19638;
  double t19639;
  double t19640;
  double t19460;
  double t19461;
  double t19462;
  double t19463;
  double t19545;
  double t19617;
  double t19399;
  double t19401;
  double t19402;
  double t19703;
  double t19705;
  double t19702;
  double t19695;
  double t19704;
  double t19706;
  double t19709;
  double t19747;
  double t19729;
  double t19730;
  double t19733;
  double t19727;
  double t19755;
  double t19758;
  double t19759;
  double t19456;
  double t19650;
  double t19654;
  double t19655;
  double t19656;
  double t19657;
  double t19662;
  double t19671;
  double t19959;
  double t19971;
  double t19983;
  double t19769;
  double t19770;
  double t19771;
  double t19772;
  double t19773;
  double t19774;
  double t19988;
  double t19989;
  double t19990;
  double t19984;
  double t20060;
  double t20064;
  double t20067;
  double t19987;
  double t20068;
  double t20069;
  double t20070;
  double t20032;
  double t20036;
  double t20059;
  double t20085;
  double t20091;
  double t20092;
  double t20245;
  double t20217;
  double t20076;
  double t20080;
  double t20084;
  double t20238;
  double t20233;
  double t20300;
  double t19696;
  double t19710;
  double t19714;
  double t20303;
  double t20180;
  double t20185;
  double t20190;
  double t20355;
  double t20361;
  double t20398;
  double t20417;
  t13554 = Cos(var1[17]);
  t14207 = Sin(var1[17]);
  t19264 = Sin(var1[16]);
  t19400 = Cos(var1[16]);
  t19445 = Sin(var1[15]);
  t19444 = Cos(var1[15]);
  t14072 = -0.0641*t13554;
  t14385 = -0.28*t14207;
  t16291 = t14072 + t14385;
  t18932 = -1.*t13554;
  t19113 = 1. + t18932;
  t19114 = -0.575*t19113;
  t19116 = -0.295*t13554;
  t19118 = -0.0641*t14207;
  t19121 = t19114 + t19116 + t19118;
  t19447 = 0.325*t19264;
  t19448 = t19400*t16291;
  t19449 = t19264*t19121;
  t19450 = t19447 + t19448 + t19449;
  t19432 = -1.*t13554*t19264;
  t19436 = t19400*t14207;
  t19437 = t19432 + t19436;
  t19446 = -0.068*t19445;
  t19454 = t19444*t19450;
  t19455 = t19446 + t19454;
  t19638 = t19400*t13554;
  t19639 = t19264*t14207;
  t19640 = t19638 + t19639;
  t19460 = -1.*t19444;
  t19461 = 1. + t19460;
  t19462 = -0.1575*t19461;
  t19463 = -0.2255*t19444;
  t19545 = -1.*t19445*t19450;
  t19617 = t19462 + t19463 + t19545;
  t19399 = t13554*t19264;
  t19401 = -1.*t19400*t14207;
  t19402 = t19399 + t19401;
  t19703 = Cos(var1[5]);
  t19705 = Sin(var1[5]);
  t19702 = Cos(var1[4]);
  t19695 = Sin(var1[4]);
  t19704 = t19703*t19640;
  t19706 = t19445*t19402*t19705;
  t19709 = t19704 + t19706;
  t19747 = Cos(var1[3]);
  t19729 = -1.*t19703*t19445*t19402;
  t19730 = t19640*t19705;
  t19733 = t19729 + t19730;
  t19727 = Sin(var1[3]);
  t19755 = t19444*t19702*t19402;
  t19758 = -1.*t19695*t19709;
  t19759 = t19755 + t19758;
  t19456 = -1.*t19445*t19455;
  t19650 = -1.*t19400;
  t19654 = 1. + t19650;
  t19655 = -0.325*t19654;
  t19656 = -1.*t19264*t16291;
  t19657 = t19400*t19121;
  t19662 = t19655 + t19656 + t19657;
  t19671 = t19444*t19455*t19640;
  t19959 = t19703*t19617;
  t19971 = t19662*t19705;
  t19983 = t19959 + t19971;
  t19769 = -1.*t19703*t19445*t19640;
  t19770 = t19437*t19705;
  t19771 = t19769 + t19770;
  t19772 = t19703*t19662;
  t19773 = -1.*t19617*t19705;
  t19774 = t19772 + t19773;
  t19988 = t19703*t19437;
  t19989 = t19445*t19640*t19705;
  t19990 = t19988 + t19989;
  t19984 = -1.*t19444*t19703*t19983;
  t20060 = t19445*t19695;
  t20064 = -1.*t19444*t19702*t19705;
  t20067 = t20060 + t20064;
  t19987 = t19983*t19771;
  t20068 = t19455*t19695;
  t20069 = t19702*t19774;
  t20070 = t20068 + t20069;
  t20032 = t19444*t19640*t19695;
  t20036 = t19702*t19990;
  t20059 = t20032 + t20036;
  t20085 = t19702*t19455;
  t20091 = -1.*t19695*t19774;
  t20092 = t20085 + t20091;
  t20245 = t19662*t19640;
  t20217 = -1.*t19662*t19437;
  t20076 = t19702*t19445;
  t20080 = t19444*t19695*t19705;
  t20084 = t20076 + t20080;
  t20238 = t19444*t19455*t19402;
  t20233 = -1.*t19444*t19455*t19640;
  t20300 = t19983*t19733;
  t19696 = t19444*t19402*t19695;
  t19710 = t19702*t19709;
  t19714 = t19696 + t19710;
  t20303 = -1.*t19983*t19771;
  t20180 = t19444*t19702*t19640;
  t20185 = -1.*t19695*t19990;
  t20190 = t20180 + t20185;
  t20355 = t19445*t19455;
  t20361 = -1.*t19444*t19455*t19402;
  t20398 = t19444*t19703*t19983;
  t20417 = -1.*t19983*t19733;
  p_output1[0]=t19714*var2[0] + (t19733*t19747 - 1.*t19727*t19759)*var2[1] + (t19727*t19733 + t19747*t19759)*var2[2] + (t20059*(t19984 - 1.*t20067*t20070 - 1.*t20084*t20092) + t20067*(t19987 + t20059*t20070 + t20092*t20190))*var2[3] + (t19771*(t19456 + t19444*t19705*t19774 + t19984) + t19444*t19703*(t19671 + t19987 + t19774*t19990))*var2[4] + (t19444*(t19456 - 1.*t19444*t19617)*t19640 + t19445*(-1.*t19445*t19617*t19640 + t19437*t19662 + t19671))*var2[5] + (0.1575*t19402 + 0.2255*t19437)*var2[15] + (-0.325*t14207 - 1.*t13554*t16291 - 1.*t14207*t19121)*var2[16] - 0.0641*var2[17];
  p_output1[1]=t20067*var2[0] + (t19444*t19703*t19747 - 1.*t19727*t20084)*var2[1] + (t19444*t19703*t19727 + t19747*t20084)*var2[2] + (t20059*(t19714*t20070 + t19759*t20092 + t20300) + t19714*(-1.*t20059*t20070 - 1.*t20092*t20190 + t20303))*var2[3] + (t19771*(t19709*t19774 + t20238 + t20300) + t19733*(-1.*t19774*t19990 + t20233 + t20303))*var2[4] + (t19402*t19444*(t19445*t19617*t19640 + t20217 + t20233) + t19444*t19640*(-1.*t19402*t19445*t19617 + t20238 + t20245))*var2[5] + (t19640*(-1.*t19450*t19640 + t20217) + t19437*(t19402*t19450 + t20245))*var2[15];
  p_output1[2]=t20059*var2[0] + (t19747*t19771 - 1.*t19727*t20190)*var2[1] + (t19727*t19771 + t19747*t20190)*var2[2] + (t19714*(t20067*t20070 + t20084*t20092 + t20398) + t20067*(-1.*t19714*t20070 - 1.*t19759*t20092 + t20417))*var2[3] + (t19733*(-1.*t19444*t19705*t19774 + t20355 + t20398) + t19444*t19703*(-1.*t19709*t19774 + t20361 + t20417))*var2[4] + (t19402*t19444*(t19444*t19617 + t20355) + t19445*(t19402*t19445*t19617 - 1.*t19640*t19662 + t20361))*var2[5] - 0.068*t19640*var2[15] + (0.325*t13554 - 1.*t14207*t16291 + t13554*t19121)*var2[16] - 0.28*var2[17];
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

#include "dh_RrFoot_ParallelStance.hh"

namespace ParallelStance
{

void dh_RrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
