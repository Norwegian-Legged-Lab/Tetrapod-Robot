/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 18:01:31 GMT+01:00
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
  double t113;
  double t203;
  double t222;
  double t210;
  double t211;
  double t227;
  double t286;
  double t299;
  double t306;
  double t121;
  double t212;
  double t238;
  double t246;
  double t325;
  double t342;
  double t343;
  double t362;
  double t368;
  double t373;
  double t17;
  double t117;
  double t128;
  double t185;
  double t200;
  double t261;
  double t318;
  double t323;
  double t346;
  double t350;
  double t380;
  double t402;
  double t420;
  double t434;
  double t437;
  double t454;
  double t480;
  double t492;
  double t546;
  double t550;
  double t554;
  double t588;
  double t599;
  double t607;
  double t610;
  double t639;
  double t65;
  double t106;
  double t786;
  double t821;
  double t817;
  double t829;
  double t862;
  double t997;
  double t1004;
  double t1047;
  double t934;
  double t1057;
  double t1075;
  double t1082;
  double t1084;
  double t1099;
  double t496;
  double t540;
  double t679;
  double t699;
  double t796;
  double t1078;
  double t1102;
  double t1106;
  double t715;
  double t716;
  double t1121;
  double t1135;
  double t1201;
  double t1205;
  double t1260;
  double t1262;
  double t1275;
  double t1295;
  double t1360;
  double t1364;
  double t1387;
  double t1404;
  double t1408;
  double t1420;
  double t1402;
  double t1442;
  double t1480;
  double t1510;
  double t1513;
  double t1542;
  double t1340;
  double t1495;
  double t1544;
  double t1548;
  double t1560;
  double t1564;
  double t1566;
  double t1593;
  double t1603;
  double t1609;
  double t1641;
  double t1642;
  t113 = Sin(var1[10]);
  t203 = Cos(var1[4]);
  t222 = Cos(var1[9]);
  t210 = Cos(var1[5]);
  t211 = Sin(var1[9]);
  t227 = Sin(var1[5]);
  t286 = Cos(var1[10]);
  t299 = -1.*t286;
  t306 = 1. + t299;
  t121 = Sin(var1[4]);
  t212 = -1.*t203*t210*t211;
  t238 = -1.*t222*t203*t227;
  t246 = t212 + t238;
  t325 = t222*t203*t210;
  t342 = -1.*t203*t211*t227;
  t343 = t325 + t342;
  t362 = Cos(var1[11]);
  t368 = -1.*t362;
  t373 = 1. + t368;
  t17 = Sin(var1[11]);
  t117 = 0. + t113;
  t128 = t117*t121;
  t185 = -4.e-6*t113;
  t200 = 0. + t185;
  t261 = t200*t246;
  t318 = -1.000000000016*t306;
  t323 = 1. + t318;
  t346 = t323*t343;
  t350 = t128 + t261 + t346;
  t380 = -1.*t306;
  t402 = 1. + t380;
  t420 = t402*t121;
  t434 = 4.e-6*t306*t246;
  t437 = -1.*t113;
  t454 = 0. + t437;
  t480 = t454*t343;
  t492 = t420 + t434 + t480;
  t546 = 4.e-6*t306*t121;
  t550 = -1.6e-11*t306;
  t554 = 1. + t550;
  t588 = t554*t246;
  t599 = 4.e-6*t113;
  t607 = 0. + t599;
  t610 = t607*t343;
  t639 = t546 + t588 + t610;
  t65 = 4.e-6*t17;
  t106 = 0. + t65;
  t786 = Sin(var1[3]);
  t821 = Cos(var1[3]);
  t817 = t210*t786*t121;
  t829 = t821*t227;
  t862 = t817 + t829;
  t997 = t821*t210;
  t1004 = -1.*t786*t121*t227;
  t1047 = t997 + t1004;
  t934 = -1.*t211*t862;
  t1057 = t222*t1047;
  t1075 = t934 + t1057;
  t1082 = t222*t862;
  t1084 = t211*t1047;
  t1099 = t1082 + t1084;
  t496 = -1.6e-11*t373;
  t540 = 1. + t496;
  t679 = -1.*t17;
  t699 = 0. + t679;
  t796 = -1.*t203*t117*t786;
  t1078 = t200*t1075;
  t1102 = t323*t1099;
  t1106 = t796 + t1078 + t1102;
  t715 = -1.*t373;
  t716 = 1. + t715;
  t1121 = -1.*t402*t203*t786;
  t1135 = 4.e-6*t306*t1075;
  t1201 = t454*t1099;
  t1205 = t1121 + t1135 + t1201;
  t1260 = -4.e-6*t306*t203*t786;
  t1262 = t554*t1075;
  t1275 = t607*t1099;
  t1295 = t1260 + t1262 + t1275;
  t1360 = -1.*t821*t210*t121;
  t1364 = t786*t227;
  t1387 = t1360 + t1364;
  t1404 = t210*t786;
  t1408 = t821*t121*t227;
  t1420 = t1404 + t1408;
  t1402 = -1.*t211*t1387;
  t1442 = t222*t1420;
  t1480 = t1402 + t1442;
  t1510 = t222*t1387;
  t1513 = t211*t1420;
  t1542 = t1510 + t1513;
  t1340 = t821*t203*t117;
  t1495 = t200*t1480;
  t1544 = t323*t1542;
  t1548 = t1340 + t1495 + t1544;
  t1560 = t402*t821*t203;
  t1564 = 4.e-6*t306*t1480;
  t1566 = t454*t1542;
  t1593 = t1560 + t1564 + t1566;
  t1603 = 4.e-6*t306*t821*t203;
  t1609 = t554*t1480;
  t1641 = t607*t1542;
  t1642 = t1603 + t1609 + t1641;
  p_output1[0]=-1.*t106*t350 - 4.e-6*t373*t492 - 1.*t540*t639 - 4.e-6*(4.e-6*t373*t639 + t350*t699 + t492*t716);
  p_output1[1]=-1.*t106*t1106 - 4.e-6*t1205*t373 - 1.*t1295*t540 - 4.e-6*(4.e-6*t1295*t373 + t1106*t699 + t1205*t716);
  p_output1[2]=-1.*t106*t1548 - 4.e-6*t1593*t373 - 1.*t1642*t540 - 4.e-6*(4.e-6*t1642*t373 + t1548*t699 + t1593*t716);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Joint_fr_knee_pitch_axis.hh"

namespace SymFunction
{

void Joint_fr_knee_pitch_axis_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
