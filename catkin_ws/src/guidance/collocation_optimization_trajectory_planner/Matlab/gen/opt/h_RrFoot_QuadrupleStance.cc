/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 17:52:10 GMT+01:00
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
  double t101;
  double t105;
  double t114;
  double t151;
  double t28;
  double t46;
  double t57;
  double t58;
  double t62;
  double t66;
  double t159;
  double t168;
  double t44;
  double t199;
  double t225;
  double t141;
  double t425;
  double t427;
  double t430;
  double t438;
  double t179;
  double t335;
  double t268;
  double t273;
  double t283;
  double t391;
  double t393;
  double t410;
  double t460;
  double t172;
  double t477;
  double t153;
  double t435;
  double t559;
  double t562;
  double t624;
  double t253;
  double t488;
  double t227;
  double t653;
  double t486;
  double t487;
  double t490;
  double t503;
  double t510;
  double t513;
  double t518;
  double t527;
  double t669;
  double t593;
  double t603;
  double t615;
  double t631;
  double t636;
  double t640;
  double t641;
  double t643;
  double t698;
  double t705;
  double t721;
  double t726;
  double t728;
  double t737;
  double t743;
  double t744;
  double t544;
  double t804;
  double t571;
  double t871;
  double t763;
  double t446;
  double t94;
  double t140;
  double t157;
  double t158;
  double t173;
  double t174;
  double t177;
  double t73;
  double t89;
  double t1005;
  double t184;
  double t186;
  double t1048;
  double t202;
  double t218;
  double t231;
  double t241;
  double t257;
  double t260;
  double t265;
  double t1039;
  double t1049;
  double t1056;
  double t1067;
  double t1073;
  double t1074;
  double t313;
  double t314;
  double t339;
  double t345;
  double t357;
  double t383;
  double t390;
  double t424;
  double t433;
  double t451;
  double t452;
  double t468;
  double t474;
  double t475;
  double t1086;
  double t1098;
  double t1101;
  double t1109;
  double t1117;
  double t1131;
  double t537;
  double t541;
  double t546;
  double t557;
  double t573;
  double t587;
  double t591;
  double t651;
  double t652;
  double t665;
  double t668;
  double t671;
  double t683;
  double t687;
  double t778;
  double t1141;
  double t1151;
  double t1154;
  double t1157;
  double t805;
  double t1161;
  double t1169;
  double t1173;
  double t1175;
  double t835;
  double t842;
  double t1184;
  double t1185;
  double t1191;
  double t1195;
  double t873;
  double t875;
  double t893;
  double t899;
  double t911;
  double t937;
  double t942;
  double t960;
  double t1270;
  double t1277;
  double t1278;
  double t1288;
  double t1289;
  double t1290;
  double t1299;
  double t1302;
  double t1305;
  double t1314;
  double t1315;
  double t1346;
  double t1378;
  double t1383;
  double t1384;
  double t1390;
  double t1397;
  double t1401;
  double t1413;
  double t1415;
  double t1424;
  double t1428;
  double t1432;
  double t1436;
  t101 = Cos(var1[16]);
  t105 = -1.*t101;
  t114 = 1. + t105;
  t151 = Sin(var1[16]);
  t28 = Cos(var1[4]);
  t46 = Cos(var1[15]);
  t57 = -1.*t46;
  t58 = 1. + t57;
  t62 = -0.15121*t58;
  t66 = Sin(var1[15]);
  t159 = -1. + t101;
  t168 = 4.e-6*t159;
  t44 = Cos(var1[5]);
  t199 = Sin(var1[5]);
  t225 = 7.e-6*t114;
  t141 = 2.8e-11*t114;
  t425 = Cos(var1[17]);
  t427 = -1.*t425;
  t430 = 1. + t427;
  t438 = Sin(var1[17]);
  t179 = Sin(var1[4]);
  t335 = -4.e-6*t151;
  t268 = -1.*t28*t44*t66;
  t273 = -1.*t46*t28*t199;
  t283 = t268 + t273;
  t391 = t46*t28*t44;
  t393 = -1.*t28*t66*t199;
  t410 = t391 + t393;
  t460 = 2.8e-11*t430;
  t172 = -7.e-6*t151;
  t477 = -2.8e-11*t114;
  t153 = -1.*t151;
  t435 = 7.e-6*t430;
  t559 = -1. + t425;
  t562 = 4.e-6*t559;
  t624 = 4.e-6*t114;
  t253 = 7.e-6*t151;
  t488 = -7.e-6*t114;
  t227 = 4.e-6*t151;
  t653 = 4.e-6*t438;
  t486 = t477 + t151;
  t487 = t486*t179;
  t490 = t488 + t335;
  t503 = t490*t283;
  t510 = -1.000000000016*t114;
  t513 = 1. + t510;
  t518 = t513*t410;
  t527 = t487 + t503 + t518;
  t669 = 7.e-6*t438;
  t593 = -1.000000000049*t114;
  t603 = 1. + t593;
  t615 = t603*t179;
  t631 = t624 + t172;
  t636 = t631*t283;
  t640 = t477 + t153;
  t641 = t640*t410;
  t643 = t615 + t636 + t641;
  t698 = t624 + t253;
  t705 = t698*t179;
  t721 = -6.5e-11*t114;
  t726 = 1. + t721;
  t728 = t726*t283;
  t737 = t488 + t227;
  t743 = t737*t410;
  t744 = t705 + t728 + t743;
  t544 = -1.*t438;
  t804 = 4.e-6*t430;
  t571 = -7.e-6*t438;
  t871 = -2.8e-11*t430;
  t763 = -7.e-6*t430;
  t446 = -4.e-6*t438;
  t94 = 1.5843479999999999e-12*var1[16];
  t140 = -0.03874900000889869*t114;
  t157 = t141 + t153;
  t158 = -0.281211000004*t157;
  t173 = t168 + t172;
  t174 = -1.8134809999999998e-6*t173;
  t177 = t94 + t140 + t158 + t174;
  t73 = -0.15121*t66;
  t89 = t62 + t73;
  t1005 = Sin(var1[3]);
  t184 = 0.15121*t66;
  t186 = t62 + t184;
  t1048 = Cos(var1[3]);
  t202 = 3.9608699999999997e-7*var1[16];
  t218 = -1.1787626499999999e-16*t114;
  t231 = t225 + t227;
  t241 = -0.281211000004*t231;
  t257 = t168 + t253;
  t260 = -0.038749000006999997*t257;
  t265 = t202 + t218 + t241 + t260;
  t1039 = t44*t1005*t179;
  t1049 = t1048*t199;
  t1056 = t1039 + t1049;
  t1067 = t1048*t44;
  t1073 = -1.*t1005*t179*t199;
  t1074 = t1067 + t1073;
  t313 = -2.7726089999999997e-12*var1[16];
  t314 = -0.2812110000084994*t114;
  t339 = t225 + t335;
  t345 = -1.8134809999999998e-6*t339;
  t357 = t141 + t151;
  t383 = -0.038749000006999997*t357;
  t390 = t313 + t314 + t345 + t383;
  t424 = -1.9784030000000015e-12*var1[17];
  t433 = -0.5031510000160505*t430;
  t451 = t435 + t446;
  t452 = -3.367757e-6*t451;
  t468 = t460 + t438;
  t474 = -0.038575000014*t468;
  t475 = t424 + t433 + t452 + t474;
  t1086 = -1.*t66*t1056;
  t1098 = t46*t1074;
  t1101 = t1086 + t1098;
  t1109 = t46*t1056;
  t1117 = t66*t1074;
  t1131 = t1109 + t1117;
  t537 = 1.1305160000000008e-12*var1[17];
  t541 = -0.03857500001589017*t430;
  t546 = t460 + t544;
  t557 = -0.5031510000080001*t546;
  t573 = t562 + t571;
  t587 = -3.367757e-6*t573;
  t591 = t537 + t541 + t557 + t587;
  t651 = 2.826290000000002e-7*var1[17];
  t652 = -2.18904205e-16*t430;
  t665 = t435 + t653;
  t668 = -0.5031510000080001*t665;
  t671 = t562 + t669;
  t683 = -0.038575000014*t671;
  t687 = t651 + t652 + t668 + t683;
  t778 = t763 + t653;
  t1141 = -1.*t28*t486*t1005;
  t1151 = t490*t1101;
  t1154 = t513*t1131;
  t1157 = t1141 + t1151 + t1154;
  t805 = t804 + t669;
  t1161 = -1.*t603*t28*t1005;
  t1169 = t631*t1101;
  t1173 = t640*t1131;
  t1175 = t1161 + t1169 + t1173;
  t835 = -6.5e-11*t430;
  t842 = 1. + t835;
  t1184 = -1.*t28*t698*t1005;
  t1185 = t726*t1101;
  t1191 = t737*t1131;
  t1195 = t1184 + t1185 + t1191;
  t873 = t871 + t544;
  t875 = -1.000000000049*t430;
  t893 = 1. + t875;
  t899 = t804 + t571;
  t911 = -1.000000000016*t430;
  t937 = 1. + t911;
  t942 = t871 + t438;
  t960 = t763 + t446;
  t1270 = -1.*t1048*t44*t179;
  t1277 = t1005*t199;
  t1278 = t1270 + t1277;
  t1288 = t44*t1005;
  t1289 = t1048*t179*t199;
  t1290 = t1288 + t1289;
  t1299 = -1.*t66*t1278;
  t1302 = t46*t1290;
  t1305 = t1299 + t1302;
  t1314 = t46*t1278;
  t1315 = t66*t1290;
  t1346 = t1314 + t1315;
  t1378 = t1048*t28*t486;
  t1383 = t490*t1305;
  t1384 = t513*t1346;
  t1390 = t1378 + t1383 + t1384;
  t1397 = t603*t1048*t28;
  t1401 = t631*t1305;
  t1413 = t640*t1346;
  t1415 = t1397 + t1401 + t1413;
  t1424 = t1048*t28*t698;
  t1428 = t726*t1305;
  t1432 = t737*t1346;
  t1436 = t1424 + t1428 + t1432;
  p_output1[0]=t177*t179 - 1.*t186*t199*t28 + t265*t283 + t390*t410 + t475*t527 + t591*t643 + t687*t744 - 0.148715*(t527*t778 + t643*t805 + t744*t842) + t28*t44*t89 - 0.038576*(t527*t873 + t643*t893 + t744*t899) - 0.80315*(t527*t937 + t643*t942 + t744*t960) + var1[0] - 1.*var2[0];
  p_output1[1]=t1074*t186 + t1101*t265 - 1.*t1005*t177*t28 + t1131*t390 + t1157*t475 + t1175*t591 + t1195*t687 - 0.148715*(t1157*t778 + t1175*t805 + t1195*t842) + t1056*t89 - 0.038576*(t1157*t873 + t1175*t893 + t1195*t899) - 0.80315*(t1157*t937 + t1175*t942 + t1195*t960) + var1[1] - 1.*var2[1];
  p_output1[2]=t1290*t186 + t1305*t265 + t1048*t177*t28 + t1346*t390 + t1390*t475 + t1415*t591 + t1436*t687 - 0.148715*(t1390*t778 + t1415*t805 + t1436*t842) + t1278*t89 - 0.038576*(t1390*t873 + t1415*t893 + t1436*t899) - 0.80315*(t1390*t937 + t1415*t942 + t1436*t960) + var1[2] - 1.*var2[2];
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

#include "h_RrFoot_QuadrupleStance.hh"

namespace QuadrupleStance
{

void h_RrFoot_QuadrupleStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
