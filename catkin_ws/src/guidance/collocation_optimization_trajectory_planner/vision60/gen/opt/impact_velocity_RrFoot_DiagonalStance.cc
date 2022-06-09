/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:06:59 GMT+02:00
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
  double t1185;
  double t360;
  double t339;
  double t962;
  double t1245;
  double t1339;
  double t1385;
  double t1387;
  double t1388;
  double t1393;
  double t1636;
  double t1640;
  double t3721;
  double t1444;
  double t1560;
  double t4127;
  double t4131;
  double t4149;
  double t4220;
  double t4287;
  double t4289;
  double t1658;
  double t1661;
  double t1777;
  double t4730;
  double t4748;
  double t4910;
  double t4963;
  double t4967;
  double t4973;
  double t5234;
  double t5246;
  double t5290;
  double t4042;
  double t4071;
  double t3530;
  double t3539;
  double t6569;
  double t6570;
  double t6614;
  double t6620;
  double t6622;
  double t6634;
  double t6636;
  double t6641;
  double t6667;
  double t6774;
  double t6859;
  double t6861;
  double t6867;
  double t6881;
  double t6889;
  double t6892;
  double t6914;
  double t6920;
  double t6923;
  double t7274;
  double t7276;
  double t7292;
  double t7293;
  double t7319;
  double t7326;
  double t7329;
  double t7444;
  double t7450;
  double t7480;
  double t7517;
  double t7518;
  double t7530;
  double t7533;
  double t7547;
  double t7550;
  double t7630;
  double t7632;
  double t7643;
  double t7613;
  double t7615;
  double t7621;
  double t7674;
  double t7679;
  double t7686;
  double t7840;
  double t7889;
  double t7907;
  double t7934;
  double t7944;
  double t7953;
  double t7382;
  double t7383;
  double t7389;
  double t8075;
  double t8106;
  double t8158;
  double t8206;
  double t8497;
  double t8507;
  double t8516;
  double t8542;
  double t8561;
  double t8664;
  double t8665;
  double t8672;
  double t9111;
  double t9113;
  double t9120;
  double t9203;
  double t9206;
  double t9210;
  double t9226;
  double t9229;
  double t9231;
  double t7657;
  double t9363;
  double t9421;
  double t9422;
  double t9534;
  double t9576;
  double t9973;
  double t10009;
  double t10040;
  double t10050;
  double t10055;
  double t10082;
  double t9798;
  double t9802;
  double t9803;
  double t10297;
  double t10306;
  double t10307;
  double t10446;
  double t10466;
  double t10490;
  double t10500;
  double t10501;
  double t10502;
  double t10544;
  double t10546;
  double t10555;
  double t8695;
  double t8699;
  double t8702;
  double t8610;
  t1185 = Sin(var1[15]);
  t360 = Sin(var1[4]);
  t339 = Cos(var1[15]);
  t962 = Cos(var1[4]);
  t1245 = Sin(var1[5]);
  t1339 = Sin(var1[16]);
  t1385 = -1.*t1185*t360;
  t1387 = t339*t962*t1245;
  t1388 = t1385 + t1387;
  t1393 = Cos(var1[17]);
  t1636 = Cos(var1[16]);
  t1640 = Sin(var1[17]);
  t3721 = Cos(var1[5]);
  t1444 = -1.*t1393;
  t1560 = 1. + t1444;
  t4127 = t962*t3721*t1185*t1339;
  t4131 = -1.*t1636*t962*t1245;
  t4149 = t4127 + t4131;
  t4220 = t1636*t962*t3721*t1185;
  t4287 = t962*t1339*t1245;
  t4289 = t4220 + t4287;
  t1658 = t339*t360;
  t1661 = t962*t1185*t1245;
  t1777 = t1658 + t1661;
  t4730 = -1.*t962*t3721*t1339;
  t4748 = t1636*t1777;
  t4910 = t4730 + t4748;
  t4963 = -1.*t1636*t962*t3721;
  t4967 = -1.*t1339*t1777;
  t4973 = t4963 + t4967;
  t5234 = t1636*t962*t3721;
  t5246 = t1339*t1777;
  t5290 = t5234 + t5246;
  t4042 = -1.*t1636;
  t4071 = 1. + t4042;
  t3530 = -1.*t339;
  t3539 = 1. + t3530;
  t6569 = t339*t962;
  t6570 = -1.*t1185*t360*t1245;
  t6614 = t6569 + t6570;
  t6620 = t3721*t1339*t360;
  t6622 = t1636*t6614;
  t6634 = t6620 + t6622;
  t6636 = -1.*t1636*t3721*t360;
  t6641 = t1339*t6614;
  t6667 = t6636 + t6641;
  t6774 = Sin(var1[3]);
  t6859 = t339*t6774*t360;
  t6861 = t962*t1185*t6774*t1245;
  t6867 = t6859 + t6861;
  t6881 = -1.*t962*t3721*t1339*t6774;
  t6889 = t1636*t6867;
  t6892 = t6881 + t6889;
  t6914 = t1636*t962*t3721*t6774;
  t6920 = t1339*t6867;
  t6923 = t6914 + t6920;
  t7274 = Cos(var1[3]);
  t7276 = t7274*t3721;
  t7292 = -1.*t6774*t360*t1245;
  t7293 = t7276 + t7292;
  t7319 = t962*t1185*t6774;
  t7326 = -1.*t339*t7293;
  t7329 = t7319 + t7326;
  t7444 = -1.*t3721*t6774*t360;
  t7450 = -1.*t7274*t1245;
  t7480 = t7444 + t7450;
  t7517 = -1.*t1185*t1339*t7480;
  t7518 = t1636*t7293;
  t7530 = t7517 + t7518;
  t7533 = -1.*t1636*t1185*t7480;
  t7547 = -1.*t1339*t7293;
  t7550 = t7533 + t7547;
  t7630 = -1.*t3721*t6774;
  t7632 = -1.*t7274*t360*t1245;
  t7643 = t7630 + t7632;
  t7613 = t7274*t3721*t360;
  t7615 = -1.*t6774*t1245;
  t7621 = t7613 + t7615;
  t7674 = -1.*t339*t7274*t962;
  t7679 = -1.*t1185*t7643;
  t7686 = t7674 + t7679;
  t7840 = -1.*t1339*t7621;
  t7889 = t1636*t7686;
  t7907 = t7840 + t7889;
  t7934 = t1636*t7621;
  t7944 = t1339*t7686;
  t7953 = t7934 + t7944;
  t7382 = -1.*t339*t962*t6774;
  t7383 = -1.*t1185*t7293;
  t7389 = t7382 + t7383;
  t8075 = t3721*t6774*t360;
  t8106 = t7274*t1245;
  t8158 = t8075 + t8106;
  t8206 = -1.*t1339*t8158;
  t8497 = t1636*t7389;
  t8507 = t8206 + t8497;
  t8516 = -1.*t1636*t8158;
  t8542 = -1.*t1339*t7389;
  t8561 = t8516 + t8542;
  t8664 = t1636*t8158;
  t8665 = t1339*t7389;
  t8672 = t8664 + t8665;
  t9111 = -1.*t339*t7274*t360;
  t9113 = -1.*t7274*t962*t1185*t1245;
  t9120 = t9111 + t9113;
  t9203 = t7274*t962*t3721*t1339;
  t9206 = t1636*t9120;
  t9210 = t9203 + t9206;
  t9226 = -1.*t1636*t7274*t962*t3721;
  t9229 = t1339*t9120;
  t9231 = t9226 + t9229;
  t7657 = -1.*t7274*t962*t1185;
  t9363 = t3721*t6774;
  t9421 = t7274*t360*t1245;
  t9422 = t9363 + t9421;
  t9534 = -1.*t339*t9422;
  t9576 = t7657 + t9534;
  t9973 = -1.*t1185*t1339*t7621;
  t10009 = t1636*t9422;
  t10040 = t9973 + t10009;
  t10050 = -1.*t1636*t1185*t7621;
  t10055 = -1.*t1339*t9422;
  t10082 = t10050 + t10055;
  t9798 = t339*t7274*t962;
  t9802 = -1.*t1185*t9422;
  t9803 = t9798 + t9802;
  t10297 = -1.*t7274*t3721*t360;
  t10306 = t6774*t1245;
  t10307 = t10297 + t10306;
  t10446 = -1.*t1339*t10307;
  t10466 = t1636*t9803;
  t10490 = t10446 + t10466;
  t10500 = -1.*t1636*t10307;
  t10501 = -1.*t1339*t9803;
  t10502 = t10500 + t10501;
  t10544 = t1636*t10307;
  t10546 = t1339*t9803;
  t10555 = t10544 + t10546;
  t8695 = -1.*t1640*t8507;
  t8699 = t1393*t8672;
  t8702 = t8695 + t8699;
  t8610 = t1393*t8507;
  p_output1[0]=var2[0] + (-0.1575*t1245*t3539*t360 + 0.325*t360*t3721*t4071 + 0.325*t1339*t6614 - 0.575*t1640*t6634 - 0.575*t1560*t6667 - 0.295*(-1.*t1640*t6634 + t1393*t6667) - 0.0641*(t1393*t6634 + t1640*t6667) + 0.1575*t1185*t962 - 0.2255*(t1245*t339*t360 + t1185*t962))*var2[4] + (-0.575*t1560*t4149 - 0.575*t1640*t4289 - 0.0641*(t1640*t4149 + t1393*t4289) - 0.295*(t1393*t4149 - 1.*t1640*t4289) + 0.325*t1185*t1339*t3721*t962 + 0.2255*t339*t3721*t962 + 0.1575*t3539*t3721*t962 + 0.325*t1245*t4071*t962)*var2[5] + (0.325*t1339*t1388 - 0.575*t1339*t1388*t1560 - 0.575*t1388*t1636*t1640 - 0.0641*(t1388*t1393*t1636 + t1339*t1388*t1640) - 0.295*(t1339*t1388*t1393 - 1.*t1388*t1636*t1640) - 0.2255*t1777 + 0.1575*t339*t360 + 0.1575*t1185*t1245*t962)*var2[15] + (0.325*t1636*t1777 - 0.575*t1560*t4910 - 0.575*t1640*t4973 - 0.0641*(t1640*t4910 + t1393*t4973) - 0.295*(t1393*t4910 - 1.*t1640*t4973) - 0.325*t1339*t3721*t962)*var2[16] + (-0.575*t1393*t4910 - 0.575*t1640*t5290 - 0.0641*(-1.*t1640*t4910 + t1393*t5290) - 0.295*(-1.*t1393*t4910 - 1.*t1640*t5290))*var2[17];
  p_output1[1]=var2[1] + (-0.325*t4071*t7621 - 0.1575*t3539*t7643 - 0.2255*(t339*t7643 + t7657) + 0.325*t1339*t7686 - 0.575*t1640*t7907 - 0.575*t1560*t7953 - 0.295*(-1.*t1640*t7907 + t1393*t7953) - 0.0641*(t1393*t7907 + t1640*t7953) - 0.1575*t1185*t7274*t962)*var2[3] + (0.1575*t1185*t360*t6774 + 0.325*t1339*t6867 - 0.575*t1640*t6892 - 0.575*t1560*t6923 - 0.295*(-1.*t1640*t6892 + t1393*t6923) - 0.0641*(t1393*t6892 + t1640*t6923) + 0.1575*t1245*t3539*t6774*t962 - 0.325*t3721*t4071*t6774*t962 - 0.2255*(t1185*t360*t6774 - 1.*t1245*t339*t6774*t962))*var2[4] + (-0.325*t4071*t7293 - 0.325*t1185*t1339*t7480 - 0.2255*t339*t7480 - 0.1575*t3539*t7480 - 0.575*t1560*t7530 - 0.575*t1640*t7550 - 0.0641*(t1640*t7530 + t1393*t7550) - 0.295*(t1393*t7530 - 1.*t1640*t7550))*var2[5] + (-0.1575*t1185*t7293 + 0.325*t1339*t7329 - 0.575*t1339*t1560*t7329 - 0.575*t1636*t1640*t7329 - 0.0641*(t1393*t1636*t7329 + t1339*t1640*t7329) - 0.295*(t1339*t1393*t7329 - 1.*t1636*t1640*t7329) - 0.2255*t7389 - 0.1575*t339*t6774*t962)*var2[15] + (0.325*t1636*t7389 - 0.325*t1339*t8158 - 0.575*t1560*t8507 - 0.575*t1640*t8561 - 0.0641*(t1640*t8507 + t1393*t8561) - 0.295*(-1.*t1640*t8561 + t8610))*var2[16] + (-0.575*t1393*t8507 - 0.575*t1640*t8672 - 0.295*(-1.*t1393*t8507 - 1.*t1640*t8672) - 0.0641*t8702)*var2[17];
  p_output1[2]=var2[2] + (-0.1575*t3539*t7293 + 0.325*t1339*t7389 - 0.325*t4071*t8158 - 0.575*t1640*t8507 - 0.575*t1560*t8672 - 0.0641*(t8610 + t1640*t8672) - 0.295*t8702 - 0.1575*t1185*t6774*t962 - 0.2255*(t339*t7293 - 1.*t1185*t6774*t962))*var2[3] + (-0.1575*t1185*t360*t7274 + 0.325*t1339*t9120 - 0.575*t1640*t9210 - 0.575*t1560*t9231 - 0.295*(-1.*t1640*t9210 + t1393*t9231) - 0.0641*(t1393*t9210 + t1640*t9231) - 0.1575*t1245*t3539*t7274*t962 + 0.325*t3721*t4071*t7274*t962 - 0.2255*(-1.*t1185*t360*t7274 + t1245*t339*t7274*t962))*var2[4] + (-0.575*t10040*t1560 - 0.575*t10082*t1640 - 0.0641*(t10082*t1393 + t10040*t1640) - 0.295*(t10040*t1393 - 1.*t10082*t1640) - 0.325*t1185*t1339*t7621 - 0.2255*t339*t7621 - 0.1575*t3539*t7621 - 0.325*t4071*t9422)*var2[5] + (-0.1575*t1185*t9422 + 0.325*t1339*t9576 - 0.575*t1339*t1560*t9576 - 0.575*t1636*t1640*t9576 - 0.0641*(t1393*t1636*t9576 + t1339*t1640*t9576) - 0.295*(t1339*t1393*t9576 - 1.*t1636*t1640*t9576) + 0.1575*t339*t7274*t962 - 0.2255*t9803)*var2[15] + (-0.325*t10307*t1339 - 0.575*t10490*t1560 - 0.575*t10502*t1640 - 0.0641*(t10502*t1393 + t10490*t1640) - 0.295*(t10490*t1393 - 1.*t10502*t1640) + 0.325*t1636*t9803)*var2[16] + (-0.575*t10490*t1393 - 0.575*t10555*t1640 - 0.0641*(t10555*t1393 - 1.*t10490*t1640) - 0.295*(-1.*t10490*t1393 - 1.*t10555*t1640))*var2[17];
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

#include "impact_velocity_RrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void impact_velocity_RrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
