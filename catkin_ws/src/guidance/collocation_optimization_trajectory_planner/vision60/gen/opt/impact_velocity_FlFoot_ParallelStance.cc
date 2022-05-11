/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:48:33 GMT+02:00
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
  double t20435;
  double t24695;
  double t25981;
  double t26021;
  double t26061;
  double t26634;
  double t26638;
  double t26641;
  double t26643;
  double t26991;
  double t27177;
  double t27454;
  double t27909;
  double t27083;
  double t27167;
  double t29962;
  double t29963;
  double t29974;
  double t30031;
  double t30046;
  double t30047;
  double t26581;
  double t26589;
  double t26620;
  double t30287;
  double t30358;
  double t30454;
  double t30235;
  double t30268;
  double t30270;
  double t30502;
  double t30503;
  double t30505;
  double t29911;
  double t29956;
  double t27919;
  double t28824;
  double t30773;
  double t30783;
  double t30791;
  double t30806;
  double t30844;
  double t30846;
  double t30869;
  double t30894;
  double t30914;
  double t31097;
  double t31102;
  double t31109;
  double t31117;
  double t31129;
  double t31205;
  double t31206;
  double t31210;
  double t31432;
  double t31436;
  double t31453;
  double t31487;
  double t31510;
  double t31516;
  double t31528;
  double t31529;
  double t31531;
  double t31662;
  double t31677;
  double t31682;
  double t31687;
  double t31689;
  double t31695;
  double t31708;
  double t31710;
  double t31714;
  double t31836;
  double t31838;
  double t31839;
  double t31785;
  double t31789;
  double t31805;
  double t31858;
  double t31862;
  double t31905;
  double t31977;
  double t32003;
  double t32039;
  double t32044;
  double t32045;
  double t32048;
  double t31158;
  double t31170;
  double t31197;
  double t32211;
  double t32224;
  double t32228;
  double t32254;
  double t32255;
  double t32260;
  double t32235;
  double t32240;
  double t32241;
  double t32342;
  double t32348;
  double t32350;
  double t32480;
  double t32482;
  double t32489;
  double t31845;
  double t32513;
  double t32518;
  double t32749;
  double t32751;
  double t32752;
  double t32757;
  double t32758;
  double t32764;
  double t32850;
  double t32858;
  double t32859;
  double t32865;
  double t32871;
  double t32873;
  double t32881;
  double t32882;
  double t32889;
  double t32499;
  double t32500;
  double t32501;
  double t32908;
  double t32911;
  double t32914;
  double t32928;
  double t32929;
  double t32930;
  double t32919;
  double t32922;
  double t32923;
  double t32968;
  double t32971;
  double t32972;
  double t32363;
  double t32371;
  double t32382;
  double t32292;
  t20435 = Cos(var1[6]);
  t24695 = Sin(var1[4]);
  t25981 = Cos(var1[4]);
  t26021 = Sin(var1[5]);
  t26061 = Sin(var1[6]);
  t26634 = t25981*t20435*t26021;
  t26638 = -1.*t24695*t26061;
  t26641 = t26634 + t26638;
  t26643 = Sin(var1[7]);
  t26991 = Cos(var1[8]);
  t27177 = Cos(var1[7]);
  t27454 = Sin(var1[8]);
  t27909 = Cos(var1[5]);
  t27083 = -1.*t26991;
  t27167 = 1. + t27083;
  t29962 = -1.*t25981*t27177*t26021;
  t29963 = t25981*t27909*t26061*t26643;
  t29974 = t29962 + t29963;
  t30031 = t25981*t27909*t27177*t26061;
  t30046 = t25981*t26021*t26643;
  t30047 = t30031 + t30046;
  t26581 = t20435*t24695;
  t26589 = t25981*t26021*t26061;
  t26620 = t26581 + t26589;
  t30287 = -1.*t25981*t27909*t27177;
  t30358 = -1.*t26620*t26643;
  t30454 = t30287 + t30358;
  t30235 = t27177*t26620;
  t30268 = -1.*t25981*t27909*t26643;
  t30270 = t30235 + t30268;
  t30502 = t25981*t27909*t27177;
  t30503 = t26620*t26643;
  t30505 = t30502 + t30503;
  t29911 = -1.*t27177;
  t29956 = 1. + t29911;
  t27919 = -1.*t20435;
  t28824 = 1. + t27919;
  t30773 = t25981*t20435;
  t30783 = -1.*t24695*t26021*t26061;
  t30791 = t30773 + t30783;
  t30806 = -1.*t27909*t27177*t24695;
  t30844 = t30791*t26643;
  t30846 = t30806 + t30844;
  t30869 = t27177*t30791;
  t30894 = t27909*t24695*t26643;
  t30914 = t30869 + t30894;
  t31097 = Sin(var1[3]);
  t31102 = Cos(var1[3]);
  t31109 = t31102*t27909;
  t31117 = -1.*t31097*t24695*t26021;
  t31129 = t31109 + t31117;
  t31205 = -1.*t20435*t31129;
  t31206 = t25981*t31097*t26061;
  t31210 = t31205 + t31206;
  t31432 = -1.*t27909*t31097*t24695;
  t31436 = -1.*t31102*t26021;
  t31453 = t31432 + t31436;
  t31487 = t27177*t31129;
  t31510 = -1.*t31453*t26061*t26643;
  t31516 = t31487 + t31510;
  t31528 = -1.*t27177*t31453*t26061;
  t31529 = -1.*t31129*t26643;
  t31531 = t31528 + t31529;
  t31662 = t20435*t31097*t24695;
  t31677 = t25981*t31097*t26021*t26061;
  t31682 = t31662 + t31677;
  t31687 = t25981*t27909*t27177*t31097;
  t31689 = t31682*t26643;
  t31695 = t31687 + t31689;
  t31708 = t27177*t31682;
  t31710 = -1.*t25981*t27909*t31097*t26643;
  t31714 = t31708 + t31710;
  t31836 = -1.*t27909*t31097;
  t31838 = -1.*t31102*t24695*t26021;
  t31839 = t31836 + t31838;
  t31785 = t31102*t27909*t24695;
  t31789 = -1.*t31097*t26021;
  t31805 = t31785 + t31789;
  t31858 = -1.*t31102*t25981*t20435;
  t31862 = -1.*t31839*t26061;
  t31905 = t31858 + t31862;
  t31977 = t27177*t31805;
  t32003 = t31905*t26643;
  t32039 = t31977 + t32003;
  t32044 = t27177*t31905;
  t32045 = -1.*t31805*t26643;
  t32048 = t32044 + t32045;
  t31158 = -1.*t25981*t20435*t31097;
  t31170 = -1.*t31129*t26061;
  t31197 = t31158 + t31170;
  t32211 = t27909*t31097*t24695;
  t32224 = t31102*t26021;
  t32228 = t32211 + t32224;
  t32254 = -1.*t27177*t32228;
  t32255 = -1.*t31197*t26643;
  t32260 = t32254 + t32255;
  t32235 = t27177*t31197;
  t32240 = -1.*t32228*t26643;
  t32241 = t32235 + t32240;
  t32342 = t27177*t32228;
  t32348 = t31197*t26643;
  t32350 = t32342 + t32348;
  t32480 = t27909*t31097;
  t32482 = t31102*t24695*t26021;
  t32489 = t32480 + t32482;
  t31845 = -1.*t31102*t25981*t26061;
  t32513 = -1.*t20435*t32489;
  t32518 = t32513 + t31845;
  t32749 = t27177*t32489;
  t32751 = -1.*t31805*t26061*t26643;
  t32752 = t32749 + t32751;
  t32757 = -1.*t27177*t31805*t26061;
  t32758 = -1.*t32489*t26643;
  t32764 = t32757 + t32758;
  t32850 = -1.*t31102*t20435*t24695;
  t32858 = -1.*t31102*t25981*t26021*t26061;
  t32859 = t32850 + t32858;
  t32865 = -1.*t31102*t25981*t27909*t27177;
  t32871 = t32859*t26643;
  t32873 = t32865 + t32871;
  t32881 = t27177*t32859;
  t32882 = t31102*t25981*t27909*t26643;
  t32889 = t32881 + t32882;
  t32499 = t31102*t25981*t20435;
  t32500 = -1.*t32489*t26061;
  t32501 = t32499 + t32500;
  t32908 = -1.*t31102*t27909*t24695;
  t32911 = t31097*t26021;
  t32914 = t32908 + t32911;
  t32928 = -1.*t27177*t32914;
  t32929 = -1.*t32501*t26643;
  t32930 = t32928 + t32929;
  t32919 = t27177*t32501;
  t32922 = -1.*t32914*t26643;
  t32923 = t32919 + t32922;
  t32968 = t27177*t32914;
  t32971 = t32501*t26643;
  t32972 = t32968 + t32971;
  t32363 = t26991*t32350;
  t32371 = -1.*t32241*t27454;
  t32382 = t32363 + t32371;
  t32292 = t26991*t32241;
  p_output1[0]=var2[0] + (-0.1575*t25981*t26061 + 0.2255*(t20435*t24695*t26021 + t25981*t26061) + 0.1575*t24695*t26021*t28824 - 0.325*t24695*t27909*t29956 - 0.325*t26643*t30791 + 0.075*t27167*t30846 + 0.075*t27454*t30914 - 0.0641*(t27454*t30846 + t26991*t30914) + 0.355*(t26991*t30846 - 1.*t27454*t30914))*var2[4] + (-0.2255*t20435*t25981*t27909 - 0.325*t25981*t26061*t26643*t27909 - 0.1575*t25981*t27909*t28824 - 0.325*t25981*t26021*t29956 + 0.075*t27167*t29974 + 0.075*t27454*t30047 - 0.0641*(t27454*t29974 + t26991*t30047) + 0.355*(t26991*t29974 - 1.*t27454*t30047))*var2[5] + (-0.1575*t20435*t24695 - 0.1575*t25981*t26021*t26061 + 0.2255*t26620 - 0.325*t26641*t26643 + 0.075*t26641*t26643*t27167 + 0.075*t26641*t27177*t27454 - 0.0641*(t26641*t26991*t27177 + t26641*t26643*t27454) + 0.355*(t26641*t26643*t26991 - 1.*t26641*t27177*t27454))*var2[6] + (-0.325*t26620*t27177 + 0.325*t25981*t26643*t27909 + 0.075*t27167*t30270 + 0.075*t27454*t30454 - 0.0641*(t27454*t30270 + t26991*t30454) + 0.355*(t26991*t30270 - 1.*t27454*t30454))*var2[7] + (0.075*t26991*t30270 + 0.075*t27454*t30505 - 0.0641*(-1.*t27454*t30270 + t26991*t30505) + 0.355*(-1.*t26991*t30270 - 1.*t27454*t30505))*var2[8];
  p_output1[1]=var2[1] + (0.1575*t25981*t26061*t31102 + 0.325*t29956*t31805 + 0.1575*t28824*t31839 + 0.2255*(t20435*t31839 + t31845) - 0.325*t26643*t31905 + 0.075*t27167*t32039 + 0.075*t27454*t32048 - 0.0641*(t27454*t32039 + t26991*t32048) + 0.355*(t26991*t32039 - 1.*t27454*t32048))*var2[3] + (-0.1575*t24695*t26061*t31097 - 0.1575*t25981*t26021*t28824*t31097 + 0.325*t25981*t27909*t29956*t31097 + 0.2255*(-1.*t20435*t25981*t26021*t31097 + t24695*t26061*t31097) - 0.325*t26643*t31682 + 0.075*t27167*t31695 + 0.075*t27454*t31714 - 0.0641*(t27454*t31695 + t26991*t31714) + 0.355*(t26991*t31695 - 1.*t27454*t31714))*var2[4] + (0.325*t29956*t31129 + 0.2255*t20435*t31453 + 0.325*t26061*t26643*t31453 + 0.1575*t28824*t31453 + 0.075*t27167*t31516 + 0.075*t27454*t31531 - 0.0641*(t27454*t31516 + t26991*t31531) + 0.355*(t26991*t31516 - 1.*t27454*t31531))*var2[5] + (0.1575*t20435*t25981*t31097 + 0.1575*t26061*t31129 + 0.2255*t31197 - 0.325*t26643*t31210 + 0.075*t26643*t27167*t31210 + 0.075*t27177*t27454*t31210 - 0.0641*(t26991*t27177*t31210 + t26643*t27454*t31210) + 0.355*(t26643*t26991*t31210 - 1.*t27177*t27454*t31210))*var2[6] + (-0.325*t27177*t31197 + 0.325*t26643*t32228 + 0.075*t27167*t32241 + 0.075*t27454*t32260 - 0.0641*(t27454*t32241 + t26991*t32260) + 0.355*(-1.*t27454*t32260 + t32292))*var2[7] + (0.075*t26991*t32241 + 0.075*t27454*t32350 + 0.355*(-1.*t26991*t32241 - 1.*t27454*t32350) - 0.0641*t32382)*var2[8];
  p_output1[2]=var2[2] + (0.1575*t25981*t26061*t31097 + 0.1575*t28824*t31129 + 0.2255*(-1.*t25981*t26061*t31097 + t20435*t31129) - 0.325*t26643*t31197 + 0.325*t29956*t32228 + 0.075*t27454*t32241 + 0.075*t27167*t32350 - 0.0641*(t32292 + t27454*t32350) + 0.355*t32382)*var2[3] + (0.1575*t24695*t26061*t31102 + 0.1575*t25981*t26021*t28824*t31102 - 0.325*t25981*t27909*t29956*t31102 + 0.2255*(t20435*t25981*t26021*t31102 - 1.*t24695*t26061*t31102) - 0.325*t26643*t32859 + 0.075*t27167*t32873 + 0.075*t27454*t32889 - 0.0641*(t27454*t32873 + t26991*t32889) + 0.355*(t26991*t32873 - 1.*t27454*t32889))*var2[4] + (0.2255*t20435*t31805 + 0.325*t26061*t26643*t31805 + 0.1575*t28824*t31805 + 0.325*t29956*t32489 + 0.075*t27167*t32752 + 0.075*t27454*t32764 - 0.0641*(t27454*t32752 + t26991*t32764) + 0.355*(t26991*t32752 - 1.*t27454*t32764))*var2[5] + (-0.1575*t20435*t25981*t31102 + 0.1575*t26061*t32489 + 0.2255*t32501 - 0.325*t26643*t32518 + 0.075*t26643*t27167*t32518 + 0.075*t27177*t27454*t32518 - 0.0641*(t26991*t27177*t32518 + t26643*t27454*t32518) + 0.355*(t26643*t26991*t32518 - 1.*t27177*t27454*t32518))*var2[6] + (-0.325*t27177*t32501 + 0.325*t26643*t32914 + 0.075*t27167*t32923 + 0.075*t27454*t32930 - 0.0641*(t27454*t32923 + t26991*t32930) + 0.355*(t26991*t32923 - 1.*t27454*t32930))*var2[7] + (0.075*t26991*t32923 + 0.075*t27454*t32972 - 0.0641*(-1.*t27454*t32923 + t26991*t32972) + 0.355*(-1.*t26991*t32923 - 1.*t27454*t32972))*var2[8];
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

#include "impact_velocity_FlFoot_ParallelStance.hh"

namespace ParallelStance
{

void impact_velocity_FlFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
