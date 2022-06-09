/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:38:26 GMT+02:00
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
  double t5136;
  double t18712;
  double t13031;
  double t18729;
  double t18735;
  double t18724;
  double t18736;
  double t13187;
  double t18750;
  double t18751;
  double t18753;
  double t18713;
  double t18748;
  double t18762;
  double t18763;
  double t18764;
  double t18690;
  double t18716;
  double t18722;
  double t18816;
  double t18813;
  double t18734;
  double t18741;
  double t18746;
  double t18754;
  double t18755;
  double t18756;
  double t18765;
  double t18803;
  double t18807;
  double t18817;
  double t18820;
  double t18821;
  double t18827;
  double t18828;
  double t18829;
  double t18833;
  double t18835;
  double t18836;
  double t18842;
  double t18843;
  double t18846;
  double t18848;
  double t18849;
  double t18851;
  double t18749;
  double t18758;
  double t18759;
  double t18879;
  double t18880;
  double t18886;
  double t18887;
  double t18888;
  double t18889;
  double t18890;
  double t18891;
  double t18892;
  double t18893;
  double t18894;
  double t18895;
  double t18896;
  double t18900;
  double t18901;
  double t18902;
  double t18881;
  double t18884;
  double t18885;
  double t18897;
  double t18898;
  double t18906;
  double t18907;
  double t18908;
  double t18909;
  double t18911;
  double t18912;
  double t18913;
  double t18899;
  double t18903;
  double t18904;
  double t18910;
  double t18914;
  double t18915;
  double t18918;
  double t18919;
  double t18920;
  double t18761;
  double t18808;
  double t18809;
  double t18905;
  double t18925;
  double t18936;
  double t18941;
  double t18951;
  double t18956;
  double t18988;
  double t18993;
  t5136 = Cos(var1[4]);
  t18712 = Cos(var1[9]);
  t13031 = Cos(var1[5]);
  t18729 = Cos(var1[11]);
  t18735 = Sin(var1[10]);
  t18724 = Cos(var1[10]);
  t18736 = Sin(var1[11]);
  t13187 = Sin(var1[9]);
  t18750 = -1.*t18729*t18735;
  t18751 = t18724*t18736;
  t18753 = t18750 + t18751;
  t18713 = Sin(var1[5]);
  t18748 = Sin(var1[4]);
  t18762 = -1.*t18724*t18729;
  t18763 = -1.*t18735*t18736;
  t18764 = t18762 + t18763;
  t18690 = t13031*t13187;
  t18716 = t18712*t18713;
  t18722 = t18690 + t18716;
  t18816 = Cos(var1[3]);
  t18813 = Sin(var1[3]);
  t18734 = t18724*t18729;
  t18741 = t18735*t18736;
  t18746 = t18734 + t18741;
  t18754 = t18712*t13031*t18753;
  t18755 = -1.*t13187*t18753*t18713;
  t18756 = t18754 + t18755;
  t18765 = t18712*t13031*t18764;
  t18803 = -1.*t13187*t18764*t18713;
  t18807 = t18765 + t18803;
  t18817 = -1.*t18712*t13031;
  t18820 = t13187*t18713;
  t18821 = t18817 + t18820;
  t18827 = t13031*t13187*t18753;
  t18828 = t18712*t18753*t18713;
  t18829 = t18827 + t18828;
  t18833 = t5136*t18746;
  t18835 = -1.*t18748*t18756;
  t18836 = t18833 + t18835;
  t18842 = t13031*t13187*t18764;
  t18843 = t18712*t18764*t18713;
  t18846 = t18842 + t18843;
  t18848 = t5136*t18753;
  t18849 = -1.*t18748*t18807;
  t18851 = t18848 + t18849;
  t18749 = t18746*t18748;
  t18758 = t5136*t18756;
  t18759 = t18749 + t18758;
  t18879 = -1.*t18712;
  t18880 = 1. + t18879;
  t18886 = -1.*t18724;
  t18887 = 1. + t18886;
  t18888 = -0.28121*t18887;
  t18889 = -1.*t18729;
  t18890 = 1. + t18889;
  t18891 = -0.50321*t18890;
  t18892 = -0.19821*t18729;
  t18893 = t18891 + t18892;
  t18894 = t18724*t18893;
  t18895 = 0.305*t18735*t18736;
  t18896 = t18888 + t18894 + t18895;
  t18900 = -0.15121*t18880;
  t18901 = t18712*t18896;
  t18902 = t18900 + t18901;
  t18881 = 0.15121*t18880;
  t18884 = 0.15121*t18712;
  t18885 = 0.15121*t13187;
  t18897 = t13187*t18896;
  t18898 = t18881 + t18884 + t18885 + t18897;
  t18906 = 0.28121*t18735;
  t18907 = t18893*t18735;
  t18908 = -0.305*t18724*t18736;
  t18909 = t18906 + t18907 + t18908;
  t18911 = t13031*t18902;
  t18912 = -1.*t18898*t18713;
  t18913 = t18911 + t18912;
  t18899 = t13031*t18898;
  t18903 = t18902*t18713;
  t18904 = t18899 + t18903;
  t18910 = t18909*t18748;
  t18914 = t5136*t18913;
  t18915 = t18910 + t18914;
  t18918 = t5136*t18909;
  t18919 = -1.*t18748*t18913;
  t18920 = t18918 + t18919;
  t18761 = t18753*t18748;
  t18808 = t5136*t18807;
  t18809 = t18761 + t18808;
  t18905 = -1.*t18821*t18904;
  t18925 = t18829*t18904;
  t18936 = t18821*t18904;
  t18941 = -1.*t18846*t18904;
  t18951 = -1.*t18829*t18904;
  t18956 = t18846*t18904;
  t18988 = -1.*t18909*t18746;
  t18993 = t18909*t18753;
  p_output1[0]=t18809*var2[0] + t18722*t5136*var2[1] + t18759*var2[2];
  p_output1[1]=(t18816*t18846 - 1.*t18813*t18851)*var2[0] + (t18722*t18748*t18813 + t18816*t18821)*var2[1] + (t18816*t18829 - 1.*t18813*t18836)*var2[2];
  p_output1[2]=(t18813*t18846 + t18816*t18851)*var2[0] + (-1.*t18722*t18748*t18816 + t18813*t18821)*var2[1] + (t18813*t18829 + t18816*t18836)*var2[2];
  p_output1[3]=(t18722*(t18759*t18915 + t18836*t18920 + t18925)*t5136 + t18759*(t18905 + t18722*t18748*t18920 - 1.*t18722*t18915*t5136))*var2[0] + (t18809*(-1.*t18759*t18915 - 1.*t18836*t18920 + t18951) + t18759*(t18809*t18915 + t18851*t18920 + t18956))*var2[1] + (t18722*(-1.*t18809*t18915 - 1.*t18851*t18920 + t18941)*t5136 + t18809*(-1.*t18722*t18748*t18920 + t18936 + t18722*t18915*t5136))*var2[2];
  p_output1[4]=(t18829*(t18905 - 1.*t18722*t18913) + t18821*(t18746*t18909 + t18756*t18913 + t18925))*var2[0] + (t18846*(-1.*t18756*t18913 + t18951 + t18988) + t18829*(t18807*t18913 + t18956 + t18993))*var2[1] + (t18846*(t18722*t18913 + t18936) + t18821*(-1.*t18753*t18909 - 1.*t18807*t18913 + t18941))*var2[2];
  p_output1[5]=t18746*(t18712*t18898 - 1.*t13187*t18902)*var2[0] + (t18753*(-1.*t13187*t18753*t18898 - 1.*t18712*t18753*t18902 + t18988) + t18746*(t13187*t18764*t18898 + t18712*t18764*t18902 + t18993))*var2[1] + t18753*(-1.*t18712*t18898 + t13187*t18902)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(0.15121*t18746 + 0.15121*t18764)*var2[0] + (-0.15121 + t18753*(-1.*t18753*t18896 + t18988) + t18746*(t18764*t18896 + t18993))*var2[1];
  p_output1[10]=(0.28121*t18736 - 0.305*t18729*t18736 + t18736*t18893)*var2[0] + (0.28121*t18729 + 0.305*Power(t18736,2) + t18729*t18893)*var2[2];
  p_output1[11]=-0.305*var2[2];
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fRlFoot_vec_ParallelImpact2.hh"

namespace SymFunction
{

void fRlFoot_vec_ParallelImpact2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
