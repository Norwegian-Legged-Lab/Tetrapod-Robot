/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:07:01 GMT+02:00
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
  double t218;
  double t396;
  double t536;
  double t573;
  double t625;
  double t753;
  double t755;
  double t757;
  double t1086;
  double t1113;
  double t1730;
  double t1733;
  double t6772;
  double t1137;
  double t1143;
  double t6961;
  double t7396;
  double t7565;
  double t7654;
  double t7672;
  double t8562;
  double t699;
  double t701;
  double t742;
  double t9317;
  double t9898;
  double t9912;
  double t9271;
  double t9277;
  double t9285;
  double t10499;
  double t10510;
  double t10515;
  double t6825;
  double t6829;
  double t6775;
  double t6810;
  double t10682;
  double t10684;
  double t10685;
  double t10688;
  double t10689;
  double t10690;
  double t10702;
  double t10704;
  double t10707;
  double t10818;
  double t10862;
  double t10863;
  double t10864;
  double t10865;
  double t10900;
  double t10904;
  double t10909;
  double t10968;
  double t10978;
  double t10983;
  double t11007;
  double t11009;
  double t11011;
  double t11019;
  double t11031;
  double t11037;
  double t12429;
  double t12432;
  double t12451;
  double t12466;
  double t12468;
  double t12475;
  double t12490;
  double t12491;
  double t12492;
  double t13433;
  double t13434;
  double t13446;
  double t13403;
  double t13414;
  double t13427;
  double t13581;
  double t13609;
  double t13645;
  double t14300;
  double t14410;
  double t14430;
  double t14444;
  double t14452;
  double t14456;
  double t10883;
  double t10885;
  double t10898;
  double t14508;
  double t14620;
  double t14648;
  double t14661;
  double t14662;
  double t14663;
  double t14651;
  double t14658;
  double t14659;
  double t14733;
  double t14734;
  double t14735;
  double t14762;
  double t14763;
  double t14764;
  double t13565;
  double t14784;
  double t14788;
  double t15333;
  double t15334;
  double t15335;
  double t15462;
  double t15478;
  double t15480;
  double t15574;
  double t15575;
  double t15576;
  double t15584;
  double t15587;
  double t15589;
  double t15625;
  double t15748;
  double t15821;
  double t14772;
  double t14779;
  double t14781;
  double t15963;
  double t15964;
  double t15965;
  double t15986;
  double t15990;
  double t16005;
  double t15972;
  double t15974;
  double t15981;
  double t16189;
  double t16190;
  double t16191;
  double t14740;
  double t14741;
  double t14746;
  double t14676;
  t218 = Cos(var1[6]);
  t396 = Sin(var1[4]);
  t536 = Cos(var1[4]);
  t573 = Sin(var1[5]);
  t625 = Sin(var1[6]);
  t753 = t536*t218*t573;
  t755 = -1.*t396*t625;
  t757 = t753 + t755;
  t1086 = Sin(var1[7]);
  t1113 = Cos(var1[8]);
  t1730 = Cos(var1[7]);
  t1733 = Sin(var1[8]);
  t6772 = Cos(var1[5]);
  t1137 = -1.*t1113;
  t1143 = 1. + t1137;
  t6961 = -1.*t536*t1730*t573;
  t7396 = t536*t6772*t625*t1086;
  t7565 = t6961 + t7396;
  t7654 = t536*t6772*t1730*t625;
  t7672 = t536*t573*t1086;
  t8562 = t7654 + t7672;
  t699 = t218*t396;
  t701 = t536*t573*t625;
  t742 = t699 + t701;
  t9317 = -1.*t536*t6772*t1730;
  t9898 = -1.*t742*t1086;
  t9912 = t9317 + t9898;
  t9271 = t1730*t742;
  t9277 = -1.*t536*t6772*t1086;
  t9285 = t9271 + t9277;
  t10499 = t536*t6772*t1730;
  t10510 = t742*t1086;
  t10515 = t10499 + t10510;
  t6825 = -1.*t1730;
  t6829 = 1. + t6825;
  t6775 = -1.*t218;
  t6810 = 1. + t6775;
  t10682 = t536*t218;
  t10684 = -1.*t396*t573*t625;
  t10685 = t10682 + t10684;
  t10688 = -1.*t6772*t1730*t396;
  t10689 = t10685*t1086;
  t10690 = t10688 + t10689;
  t10702 = t1730*t10685;
  t10704 = t6772*t396*t1086;
  t10707 = t10702 + t10704;
  t10818 = Sin(var1[3]);
  t10862 = Cos(var1[3]);
  t10863 = t10862*t6772;
  t10864 = -1.*t10818*t396*t573;
  t10865 = t10863 + t10864;
  t10900 = -1.*t218*t10865;
  t10904 = t536*t10818*t625;
  t10909 = t10900 + t10904;
  t10968 = -1.*t6772*t10818*t396;
  t10978 = -1.*t10862*t573;
  t10983 = t10968 + t10978;
  t11007 = t1730*t10865;
  t11009 = -1.*t10983*t625*t1086;
  t11011 = t11007 + t11009;
  t11019 = -1.*t1730*t10983*t625;
  t11031 = -1.*t10865*t1086;
  t11037 = t11019 + t11031;
  t12429 = t218*t10818*t396;
  t12432 = t536*t10818*t573*t625;
  t12451 = t12429 + t12432;
  t12466 = t536*t6772*t1730*t10818;
  t12468 = t12451*t1086;
  t12475 = t12466 + t12468;
  t12490 = t1730*t12451;
  t12491 = -1.*t536*t6772*t10818*t1086;
  t12492 = t12490 + t12491;
  t13433 = -1.*t6772*t10818;
  t13434 = -1.*t10862*t396*t573;
  t13446 = t13433 + t13434;
  t13403 = t10862*t6772*t396;
  t13414 = -1.*t10818*t573;
  t13427 = t13403 + t13414;
  t13581 = -1.*t10862*t536*t218;
  t13609 = -1.*t13446*t625;
  t13645 = t13581 + t13609;
  t14300 = t1730*t13427;
  t14410 = t13645*t1086;
  t14430 = t14300 + t14410;
  t14444 = t1730*t13645;
  t14452 = -1.*t13427*t1086;
  t14456 = t14444 + t14452;
  t10883 = -1.*t536*t218*t10818;
  t10885 = -1.*t10865*t625;
  t10898 = t10883 + t10885;
  t14508 = t6772*t10818*t396;
  t14620 = t10862*t573;
  t14648 = t14508 + t14620;
  t14661 = -1.*t1730*t14648;
  t14662 = -1.*t10898*t1086;
  t14663 = t14661 + t14662;
  t14651 = t1730*t10898;
  t14658 = -1.*t14648*t1086;
  t14659 = t14651 + t14658;
  t14733 = t1730*t14648;
  t14734 = t10898*t1086;
  t14735 = t14733 + t14734;
  t14762 = t6772*t10818;
  t14763 = t10862*t396*t573;
  t14764 = t14762 + t14763;
  t13565 = -1.*t10862*t536*t625;
  t14784 = -1.*t218*t14764;
  t14788 = t14784 + t13565;
  t15333 = t1730*t14764;
  t15334 = -1.*t13427*t625*t1086;
  t15335 = t15333 + t15334;
  t15462 = -1.*t1730*t13427*t625;
  t15478 = -1.*t14764*t1086;
  t15480 = t15462 + t15478;
  t15574 = -1.*t10862*t218*t396;
  t15575 = -1.*t10862*t536*t573*t625;
  t15576 = t15574 + t15575;
  t15584 = -1.*t10862*t536*t6772*t1730;
  t15587 = t15576*t1086;
  t15589 = t15584 + t15587;
  t15625 = t1730*t15576;
  t15748 = t10862*t536*t6772*t1086;
  t15821 = t15625 + t15748;
  t14772 = t10862*t536*t218;
  t14779 = -1.*t14764*t625;
  t14781 = t14772 + t14779;
  t15963 = -1.*t10862*t6772*t396;
  t15964 = t10818*t573;
  t15965 = t15963 + t15964;
  t15986 = -1.*t1730*t15965;
  t15990 = -1.*t14781*t1086;
  t16005 = t15986 + t15990;
  t15972 = t1730*t14781;
  t15974 = -1.*t15965*t1086;
  t15981 = t15972 + t15974;
  t16189 = t1730*t15965;
  t16190 = t14781*t1086;
  t16191 = t16189 + t16190;
  t14740 = t1113*t14735;
  t14741 = -1.*t14659*t1733;
  t14746 = t14740 + t14741;
  t14676 = t1113*t14659;
  p_output1[0]=var2[0] + (-0.325*t10685*t1086 + 0.075*t10690*t1143 + 0.075*t10707*t1733 - 0.0641*(t10707*t1113 + t10690*t1733) + 0.355*(t10690*t1113 - 1.*t10707*t1733) - 0.1575*t536*t625 + 0.2255*(t218*t396*t573 + t536*t625) + 0.1575*t396*t573*t6810 - 0.325*t396*t6772*t6829)*var2[4] + (-0.2255*t218*t536*t6772 - 0.325*t1086*t536*t625*t6772 - 0.1575*t536*t6772*t6810 - 0.325*t536*t573*t6829 + 0.075*t1143*t7565 + 0.075*t1733*t8562 - 0.0641*(t1733*t7565 + t1113*t8562) + 0.355*(t1113*t7565 - 1.*t1733*t8562))*var2[5] + (-0.1575*t218*t396 - 0.1575*t536*t573*t625 + 0.2255*t742 - 0.325*t1086*t757 + 0.075*t1086*t1143*t757 + 0.075*t1730*t1733*t757 - 0.0641*(t1113*t1730*t757 + t1086*t1733*t757) + 0.355*(t1086*t1113*t757 - 1.*t1730*t1733*t757))*var2[6] + (0.325*t1086*t536*t6772 - 0.325*t1730*t742 + 0.075*t1143*t9285 + 0.075*t1733*t9912 - 0.0641*(t1733*t9285 + t1113*t9912) + 0.355*(t1113*t9285 - 1.*t1733*t9912))*var2[7] + (0.075*t10515*t1733 + 0.075*t1113*t9285 + 0.355*(-1.*t10515*t1733 - 1.*t1113*t9285) - 0.0641*(t10515*t1113 - 1.*t1733*t9285))*var2[8];
  p_output1[1]=var2[1] + (-0.325*t1086*t13645 + 0.075*t1143*t14430 + 0.075*t14456*t1733 - 0.0641*(t1113*t14456 + t14430*t1733) + 0.355*(t1113*t14430 - 1.*t14456*t1733) + 0.2255*(t13565 + t13446*t218) + 0.1575*t10862*t536*t625 + 0.1575*t13446*t6810 + 0.325*t13427*t6829)*var2[3] + (-0.325*t1086*t12451 + 0.075*t1143*t12475 + 0.075*t12492*t1733 - 0.0641*(t1113*t12492 + t12475*t1733) + 0.355*(t1113*t12475 - 1.*t12492*t1733) - 0.1575*t10818*t396*t625 + 0.2255*(-1.*t10818*t218*t536*t573 + t10818*t396*t625) - 0.1575*t10818*t536*t573*t6810 + 0.325*t10818*t536*t6772*t6829)*var2[4] + (0.075*t11011*t1143 + 0.075*t11037*t1733 - 0.0641*(t11037*t1113 + t11011*t1733) + 0.355*(t11011*t1113 - 1.*t11037*t1733) + 0.2255*t10983*t218 + 0.325*t1086*t10983*t625 + 0.1575*t10983*t6810 + 0.325*t10865*t6829)*var2[5] + (0.2255*t10898 - 0.325*t1086*t10909 + 0.075*t1086*t10909*t1143 + 0.075*t10909*t1730*t1733 - 0.0641*(t10909*t1113*t1730 + t1086*t10909*t1733) + 0.355*(t1086*t10909*t1113 - 1.*t10909*t1730*t1733) + 0.1575*t10818*t218*t536 + 0.1575*t10865*t625)*var2[6] + (0.325*t1086*t14648 + 0.075*t1143*t14659 - 0.325*t10898*t1730 + 0.075*t14663*t1733 - 0.0641*(t1113*t14663 + t14659*t1733) + 0.355*(t14676 - 1.*t14663*t1733))*var2[7] + (0.075*t1113*t14659 - 0.0641*t14746 + 0.075*t14735*t1733 + 0.355*(-1.*t1113*t14659 - 1.*t14735*t1733))*var2[8];
  p_output1[2]=var2[2] + (-0.325*t1086*t10898 + 0.075*t1143*t14735 + 0.355*t14746 + 0.075*t14659*t1733 - 0.0641*(t14676 + t14735*t1733) + 0.1575*t10818*t536*t625 + 0.2255*(t10865*t218 - 1.*t10818*t536*t625) + 0.1575*t10865*t6810 + 0.325*t14648*t6829)*var2[3] + (-0.325*t1086*t15576 + 0.075*t1143*t15589 + 0.075*t15821*t1733 - 0.0641*(t1113*t15821 + t15589*t1733) + 0.355*(t1113*t15589 - 1.*t15821*t1733) + 0.1575*t10862*t396*t625 + 0.2255*(t10862*t218*t536*t573 - 1.*t10862*t396*t625) + 0.1575*t10862*t536*t573*t6810 - 0.325*t10862*t536*t6772*t6829)*var2[4] + (0.075*t1143*t15335 + 0.075*t15480*t1733 - 0.0641*(t1113*t15480 + t15335*t1733) + 0.355*(t1113*t15335 - 1.*t15480*t1733) + 0.2255*t13427*t218 + 0.325*t1086*t13427*t625 + 0.1575*t13427*t6810 + 0.325*t14764*t6829)*var2[5] + (0.2255*t14781 - 0.325*t1086*t14788 + 0.075*t1086*t1143*t14788 + 0.075*t14788*t1730*t1733 - 0.0641*(t1113*t14788*t1730 + t1086*t14788*t1733) + 0.355*(t1086*t1113*t14788 - 1.*t14788*t1730*t1733) - 0.1575*t10862*t218*t536 + 0.1575*t14764*t625)*var2[6] + (0.325*t1086*t15965 + 0.075*t1143*t15981 - 0.325*t14781*t1730 + 0.075*t16005*t1733 - 0.0641*(t1113*t16005 + t15981*t1733) + 0.355*(t1113*t15981 - 1.*t16005*t1733))*var2[7] + (0.075*t1113*t15981 + 0.075*t16191*t1733 - 0.0641*(t1113*t16191 - 1.*t15981*t1733) + 0.355*(-1.*t1113*t15981 - 1.*t16191*t1733))*var2[8];
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

#include "initial_swing_velocity_FlFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void initial_swing_velocity_FlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
