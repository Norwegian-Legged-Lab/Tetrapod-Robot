/*
 * Automatically Generated from Mathematica.
 * Fri 4 Feb 2022 15:52:11 GMT+01:00
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
  double t14;
  double t15;
  double t16;
  double t18;
  double t25;
  double t29;
  double t26;
  double t27;
  double t30;
  double t5;
  double t6;
  double t7;
  double t9;
  double t20;
  double t28;
  double t31;
  double t32;
  double t17;
  double t36;
  double t37;
  double t38;
  double t50;
  double t22;
  double t19;
  double t21;
  double t23;
  double t24;
  double t33;
  double t34;
  double t35;
  double t39;
  double t40;
  double t45;
  double t46;
  double t49;
  double t51;
  double t278;
  double t392;
  double t507;
  double t514;
  double t525;
  double t530;
  double t42;
  double t577;
  double t580;
  double t589;
  double t633;
  double t639;
  double t641;
  double t644;
  double t663;
  double t671;
  double t679;
  double t691;
  double t8;
  double t10;
  double t13;
  double t798;
  double t809;
  double t805;
  double t819;
  double t821;
  double t823;
  double t824;
  double t829;
  double t43;
  double t44;
  double t822;
  double t834;
  double t835;
  double t841;
  double t843;
  double t844;
  double t566;
  double t567;
  double t693;
  double t698;
  double t799;
  double t840;
  double t857;
  double t865;
  double t726;
  double t730;
  double t882;
  double t884;
  double t891;
  double t898;
  double t741;
  double t745;
  double t915;
  double t923;
  double t924;
  double t929;
  double t767;
  double t769;
  double t772;
  double t776;
  double t780;
  double t970;
  double t971;
  double t974;
  double t978;
  double t979;
  double t980;
  double t976;
  double t983;
  double t986;
  double t991;
  double t993;
  double t994;
  double t968;
  double t987;
  double t996;
  double t998;
  double t1001;
  double t1002;
  double t1003;
  double t1004;
  double t1006;
  double t1007;
  double t1008;
  double t1009;
  t14 = Cos(var1[16]);
  t15 = -1.*t14;
  t16 = 1. + t15;
  t18 = Sin(var1[16]);
  t25 = Cos(var1[4]);
  t29 = Cos(var1[15]);
  t26 = Cos(var1[5]);
  t27 = Sin(var1[15]);
  t30 = Sin(var1[5]);
  t5 = Cos(var1[17]);
  t6 = -1.*t5;
  t7 = 1. + t6;
  t9 = Sin(var1[17]);
  t20 = Sin(var1[4]);
  t28 = -1.*t25*t26*t27;
  t31 = -1.*t29*t25*t30;
  t32 = t28 + t31;
  t17 = -2.7999999999999997e-11*t16;
  t36 = t29*t25*t26;
  t37 = -1.*t25*t27*t30;
  t38 = t36 + t37;
  t50 = 4.e-6*t16;
  t22 = -7.e-6*t16;
  t19 = t17 + t18;
  t21 = t19*t20;
  t23 = -4.e-6*t18;
  t24 = t22 + t23;
  t33 = t24*t32;
  t34 = -1.000000000016*t16;
  t35 = 1. + t34;
  t39 = t35*t38;
  t40 = t21 + t33 + t39;
  t45 = -1.000000000049*t16;
  t46 = 1. + t45;
  t49 = t46*t20;
  t51 = -7.e-6*t18;
  t278 = t50 + t51;
  t392 = t278*t32;
  t507 = -1.*t18;
  t514 = t17 + t507;
  t525 = t514*t38;
  t530 = t49 + t392 + t525;
  t42 = 4.e-6*t7;
  t577 = 7.e-6*t18;
  t580 = t50 + t577;
  t589 = t580*t20;
  t633 = -6.5e-11*t16;
  t639 = 1. + t633;
  t641 = t639*t32;
  t644 = 4.e-6*t18;
  t663 = t22 + t644;
  t671 = t663*t38;
  t679 = t589 + t641 + t671;
  t691 = -2.7999999999999997e-11*t7;
  t8 = -7.e-6*t7;
  t10 = 4.e-6*t9;
  t13 = t8 + t10;
  t798 = Sin(var1[3]);
  t809 = Cos(var1[3]);
  t805 = t26*t798*t20;
  t819 = t809*t30;
  t821 = t805 + t819;
  t823 = t809*t26;
  t824 = -1.*t798*t20*t30;
  t829 = t823 + t824;
  t43 = 7.e-6*t9;
  t44 = t42 + t43;
  t822 = -1.*t27*t821;
  t834 = t29*t829;
  t835 = t822 + t834;
  t841 = t29*t821;
  t843 = t27*t829;
  t844 = t841 + t843;
  t566 = -6.5e-11*t7;
  t567 = 1. + t566;
  t693 = -1.*t9;
  t698 = t691 + t693;
  t799 = -1.*t25*t19*t798;
  t840 = t24*t835;
  t857 = t35*t844;
  t865 = t799 + t840 + t857;
  t726 = -1.000000000049*t7;
  t730 = 1. + t726;
  t882 = -1.*t46*t25*t798;
  t884 = t278*t835;
  t891 = t514*t844;
  t898 = t882 + t884 + t891;
  t741 = -7.e-6*t9;
  t745 = t42 + t741;
  t915 = -1.*t25*t580*t798;
  t923 = t639*t835;
  t924 = t663*t844;
  t929 = t915 + t923 + t924;
  t767 = -1.000000000016*t7;
  t769 = 1. + t767;
  t772 = t691 + t9;
  t776 = -4.e-6*t9;
  t780 = t8 + t776;
  t970 = -1.*t809*t26*t20;
  t971 = t798*t30;
  t974 = t970 + t971;
  t978 = t26*t798;
  t979 = t809*t20*t30;
  t980 = t978 + t979;
  t976 = -1.*t27*t974;
  t983 = t29*t980;
  t986 = t976 + t983;
  t991 = t29*t974;
  t993 = t27*t980;
  t994 = t991 + t993;
  t968 = t809*t25*t19;
  t987 = t24*t986;
  t996 = t35*t994;
  t998 = t968 + t987 + t996;
  t1001 = t46*t809*t25;
  t1002 = t278*t986;
  t1003 = t514*t994;
  t1004 = t1001 + t1002 + t1003;
  t1006 = t809*t25*t580;
  t1007 = t639*t986;
  t1008 = t663*t994;
  t1009 = t1006 + t1007 + t1008;
  p_output1[0]=-1.*t13*t40 - 1.*t44*t530 - 1.*t567*t679 - 4.e-6*(t40*t698 + t530*t730 + t679*t745) + 7.e-6*(t40*t769 + t530*t772 + t679*t780);
  p_output1[1]=-1.*t13*t865 - 1.*t44*t898 - 1.*t567*t929 - 4.e-6*(t698*t865 + t730*t898 + t745*t929) + 7.e-6*(t769*t865 + t772*t898 + t780*t929);
  p_output1[2]=-1.*t1004*t44 - 1.*t1009*t567 - 1.*t13*t998 - 4.e-6*(t1004*t730 + t1009*t745 + t698*t998) + 7.e-6*(t1004*t772 + t1009*t780 + t769*t998);
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

#include "Joint_rr_knee_pitch_axis.hh"

namespace SymFunction
{

void Joint_rr_knee_pitch_axis_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
