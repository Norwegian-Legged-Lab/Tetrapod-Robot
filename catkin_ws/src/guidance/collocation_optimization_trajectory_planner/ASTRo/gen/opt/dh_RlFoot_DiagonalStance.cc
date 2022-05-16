/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:41:53 GMT+02:00
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
  double t2683;
  double t1169;
  double t4214;
  double t4350;
  double t4942;
  double t4980;
  double t5402;
  double t10306;
  double t2785;
  double t2795;
  double t2818;
  double t2883;
  double t2926;
  double t10463;
  double t10537;
  double t5832;
  double t10599;
  double t10666;
  double t10777;
  double t10890;
  double t11203;
  double t11376;
  double t4298;
  double t4545;
  double t4547;
  double t13158;
  double t13216;
  double t13134;
  double t13048;
  double t13065;
  double t13112;
  double t13113;
  double t13209;
  double t13228;
  double t13230;
  double t14743;
  double t14699;
  double t14720;
  double t14733;
  double t14697;
  double t14751;
  double t14753;
  double t14767;
  double t12297;
  double t12948;
  double t12963;
  double t12973;
  double t12974;
  double t10578;
  double t11588;
  double t12003;
  double t14947;
  double t14948;
  double t14950;
  double t14839;
  double t14874;
  double t14946;
  double t14957;
  double t14961;
  double t14962;
  double t15207;
  double t15224;
  double t15260;
  double t15656;
  double t15784;
  double t16142;
  double t14963;
  double t14964;
  double t15135;
  double t15180;
  double t15303;
  double t15307;
  double t15355;
  double t15491;
  double t15654;
  double t19690;
  double t19872;
  double t19895;
  double t20123;
  double t20194;
  double t20257;
  double t21413;
  double t21414;
  double t21418;
  double t22395;
  double t22314;
  double t13133;
  double t13231;
  double t14277;
  double t22742;
  double t21851;
  double t21854;
  double t21907;
  double t22750;
  double t22835;
  double t22867;
  t2683 = Cos(var1[11]);
  t1169 = Sin(var1[11]);
  t4214 = Cos(var1[10]);
  t4350 = Sin(var1[10]);
  t4942 = t4214*t2683;
  t4980 = t4350*t1169;
  t5402 = t4942 + t4980;
  t10306 = Cos(var1[9]);
  t2785 = -1.*t2683;
  t2795 = 1. + t2785;
  t2818 = -0.50321*t2795;
  t2883 = -0.23321*t2683;
  t2926 = t2818 + t2883;
  t10463 = -1.*t10306;
  t10537 = 1. + t10463;
  t5832 = Sin(var1[9]);
  t10599 = -1.*t4214;
  t10666 = 1. + t10599;
  t10777 = -0.28121*t10666;
  t10890 = t4214*t2926;
  t11203 = 0.27*t4350*t1169;
  t11376 = t10777 + t10890 + t11203;
  t4298 = -1.*t4214*t2683;
  t4545 = -1.*t4350*t1169;
  t4547 = t4298 + t4545;
  t13158 = Cos(var1[5]);
  t13216 = Sin(var1[5]);
  t13134 = Cos(var1[4]);
  t13048 = -1.*t2683*t4350;
  t13065 = t4214*t1169;
  t13112 = t13048 + t13065;
  t13113 = Sin(var1[4]);
  t13209 = t10306*t13158*t4547;
  t13228 = -1.*t5832*t4547*t13216;
  t13230 = t13209 + t13228;
  t14743 = Cos(var1[3]);
  t14699 = t13158*t5832*t4547;
  t14720 = t10306*t4547*t13216;
  t14733 = t14699 + t14720;
  t14697 = Sin(var1[3]);
  t14751 = t13134*t13112;
  t14753 = -1.*t13113*t13230;
  t14767 = t14751 + t14753;
  t12297 = 0.15121*t10537;
  t12948 = 0.15121*t10306;
  t12963 = 0.15121*t5832;
  t12973 = t5832*t11376;
  t12974 = t12297 + t12948 + t12963 + t12973;
  t10578 = -0.15121*t10537;
  t11588 = t10306*t11376;
  t12003 = t10578 + t11588;
  t14947 = -1.*t10306*t13158;
  t14948 = t5832*t13216;
  t14950 = t14947 + t14948;
  t14839 = t13158*t5832*t13112;
  t14874 = t10306*t13112*t13216;
  t14946 = t14839 + t14874;
  t14957 = t13158*t12974;
  t14961 = t12003*t13216;
  t14962 = t14957 + t14961;
  t15207 = t13158*t12003;
  t15224 = -1.*t12974*t13216;
  t15260 = t15207 + t15224;
  t15656 = t10306*t13158*t13112;
  t15784 = -1.*t5832*t13112*t13216;
  t16142 = t15656 + t15784;
  t14963 = -1.*t14950*t14962;
  t14964 = t13158*t5832;
  t15135 = t10306*t13216;
  t15180 = t14964 + t15135;
  t15303 = 0.28121*t4350;
  t15307 = t2926*t4350;
  t15355 = -0.27*t4214*t1169;
  t15491 = t15303 + t15307 + t15355;
  t15654 = t14946*t14962;
  t19690 = t5402*t13113;
  t19872 = t13134*t16142;
  t19895 = t19690 + t19872;
  t20123 = t15491*t13113;
  t20194 = t13134*t15260;
  t20257 = t20123 + t20194;
  t21413 = t13134*t15491;
  t21414 = -1.*t13113*t15260;
  t21418 = t21413 + t21414;
  t22395 = -1.*t15491*t5402;
  t22314 = t15491*t13112;
  t13133 = t13112*t13113;
  t13231 = t13134*t13230;
  t14277 = t13133 + t13231;
  t22742 = -1.*t14946*t14962;
  t21851 = t13134*t5402;
  t21854 = -1.*t13113*t16142;
  t21907 = t21851 + t21854;
  t22750 = t14733*t14962;
  t22835 = t14950*t14962;
  t22867 = -1.*t14733*t14962;
  p_output1[0]=t14277*var2[0] + (t14733*t14743 - 1.*t14697*t14767)*var2[1] + (t14697*t14733 + t14743*t14767)*var2[2] + (t19895*(t14963 - 1.*t13134*t15180*t20257 + t13113*t15180*t21418) + t13134*t15180*(t15654 + t19895*t20257 + t21418*t21907))*var2[3] + (t14946*(t14963 - 1.*t15180*t15260) + t14950*(t15654 + t15260*t16142 + t15491*t5402))*var2[4] + t5402*(t10306*t12974 - 1.*t12003*t5832)*var2[5] + (0.15121*t4547 + 0.15121*t5402)*var2[9] + (0.28121*t1169 - 0.27*t1169*t2683 + t1169*t2926)*var2[10];
  p_output1[1]=t13134*t15180*var2[0] + (t14743*t14950 + t13113*t14697*t15180)*var2[1] + (t14697*t14950 - 1.*t13113*t14743*t15180)*var2[2] + (t14277*(-1.*t19895*t20257 - 1.*t21418*t21907 + t22742) + t19895*(t14277*t20257 + t14767*t21418 + t22750))*var2[3] + (t14733*(-1.*t15260*t16142 + t22395 + t22742) + t14946*(t13230*t15260 + t22314 + t22750))*var2[4] + (t13112*(-1.*t10306*t12003*t13112 + t22395 - 1.*t12974*t13112*t5832) + t5402*(t22314 + t10306*t12003*t4547 + t12974*t4547*t5832))*var2[5] + (-0.15121 + t13112*(-1.*t11376*t13112 + t22395) + (t22314 + t11376*t4547)*t5402)*var2[9];
  p_output1[2]=t19895*var2[0] + (t14743*t14946 - 1.*t14697*t21907)*var2[1] + (t14697*t14946 + t14743*t21907)*var2[2] + (t14277*(t13134*t15180*t20257 - 1.*t13113*t15180*t21418 + t22835) + t13134*t15180*(-1.*t14277*t20257 - 1.*t14767*t21418 + t22867))*var2[3] + (t14733*(t15180*t15260 + t22835) + t14950*(-1.*t13230*t15260 - 1.*t13112*t15491 + t22867))*var2[4] + t13112*(-1.*t10306*t12974 + t12003*t5832)*var2[5] + (0.27*Power(t1169,2) + 0.28121*t2683 + t2683*t2926)*var2[10] - 0.27*var2[11];
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

#include "dh_RlFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void dh_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
