/*
 * Automatically Generated from Mathematica.
 * Sun 22 May 2022 16:55:45 GMT+02:00
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
  double t6896;
  double t13849;
  double t7905;
  double t16560;
  double t16588;
  double t16559;
  double t16589;
  double t8240;
  double t16619;
  double t16628;
  double t16635;
  double t14047;
  double t16613;
  double t16650;
  double t16651;
  double t16652;
  double t12774;
  double t14424;
  double t16045;
  double t16704;
  double t16701;
  double t16564;
  double t16590;
  double t16606;
  double t16641;
  double t16642;
  double t16643;
  double t16653;
  double t16654;
  double t16655;
  double t16706;
  double t16708;
  double t16709;
  double t16714;
  double t16715;
  double t16716;
  double t16719;
  double t16720;
  double t16721;
  double t16748;
  double t16749;
  double t16750;
  double t16753;
  double t16754;
  double t16766;
  double t16616;
  double t16646;
  double t16647;
  double t16793;
  double t16794;
  double t16802;
  double t16804;
  double t16805;
  double t16809;
  double t16810;
  double t16812;
  double t16813;
  double t16814;
  double t16815;
  double t16817;
  double t16819;
  double t16823;
  double t16827;
  double t16828;
  double t16795;
  double t16796;
  double t16799;
  double t16820;
  double t16821;
  double t16832;
  double t16833;
  double t16837;
  double t16838;
  double t16841;
  double t16843;
  double t16844;
  double t16822;
  double t16829;
  double t16830;
  double t16839;
  double t16845;
  double t16846;
  double t16849;
  double t16850;
  double t16851;
  double t16649;
  double t16656;
  double t16657;
  double t16831;
  double t16855;
  double t16862;
  double t16867;
  double t16877;
  double t16883;
  double t16911;
  double t16915;
  t6896 = Cos(var1[4]);
  t13849 = Cos(var1[9]);
  t7905 = Cos(var1[5]);
  t16560 = Cos(var1[11]);
  t16588 = Sin(var1[10]);
  t16559 = Cos(var1[10]);
  t16589 = Sin(var1[11]);
  t8240 = Sin(var1[9]);
  t16619 = -1.*t16560*t16588;
  t16628 = t16559*t16589;
  t16635 = t16619 + t16628;
  t14047 = Sin(var1[5]);
  t16613 = Sin(var1[4]);
  t16650 = -1.*t16559*t16560;
  t16651 = -1.*t16588*t16589;
  t16652 = t16650 + t16651;
  t12774 = t7905*t8240;
  t14424 = t13849*t14047;
  t16045 = t12774 + t14424;
  t16704 = Cos(var1[3]);
  t16701 = Sin(var1[3]);
  t16564 = t16559*t16560;
  t16590 = t16588*t16589;
  t16606 = t16564 + t16590;
  t16641 = t13849*t7905*t16635;
  t16642 = -1.*t8240*t16635*t14047;
  t16643 = t16641 + t16642;
  t16653 = t13849*t7905*t16652;
  t16654 = -1.*t8240*t16652*t14047;
  t16655 = t16653 + t16654;
  t16706 = -1.*t13849*t7905;
  t16708 = t8240*t14047;
  t16709 = t16706 + t16708;
  t16714 = t7905*t8240*t16635;
  t16715 = t13849*t16635*t14047;
  t16716 = t16714 + t16715;
  t16719 = t6896*t16606;
  t16720 = -1.*t16613*t16643;
  t16721 = t16719 + t16720;
  t16748 = t7905*t8240*t16652;
  t16749 = t13849*t16652*t14047;
  t16750 = t16748 + t16749;
  t16753 = t6896*t16635;
  t16754 = -1.*t16613*t16655;
  t16766 = t16753 + t16754;
  t16616 = t16606*t16613;
  t16646 = t6896*t16643;
  t16647 = t16616 + t16646;
  t16793 = -1.*t13849;
  t16794 = 1. + t16793;
  t16802 = -1.*t16559;
  t16804 = 1. + t16802;
  t16805 = -0.28121*t16804;
  t16809 = -1.*t16560;
  t16810 = 1. + t16809;
  t16812 = -0.50321*t16810;
  t16813 = -0.23321*t16560;
  t16814 = t16812 + t16813;
  t16815 = t16559*t16814;
  t16817 = 0.27*t16588*t16589;
  t16819 = t16805 + t16815 + t16817;
  t16823 = -0.15121*t16794;
  t16827 = t13849*t16819;
  t16828 = t16823 + t16827;
  t16795 = 0.15121*t16794;
  t16796 = 0.15121*t13849;
  t16799 = 0.15121*t8240;
  t16820 = t8240*t16819;
  t16821 = t16795 + t16796 + t16799 + t16820;
  t16832 = 0.28121*t16588;
  t16833 = t16814*t16588;
  t16837 = -0.27*t16559*t16589;
  t16838 = t16832 + t16833 + t16837;
  t16841 = t7905*t16828;
  t16843 = -1.*t16821*t14047;
  t16844 = t16841 + t16843;
  t16822 = t7905*t16821;
  t16829 = t16828*t14047;
  t16830 = t16822 + t16829;
  t16839 = t16838*t16613;
  t16845 = t6896*t16844;
  t16846 = t16839 + t16845;
  t16849 = t6896*t16838;
  t16850 = -1.*t16613*t16844;
  t16851 = t16849 + t16850;
  t16649 = t16635*t16613;
  t16656 = t6896*t16655;
  t16657 = t16649 + t16656;
  t16831 = -1.*t16709*t16830;
  t16855 = t16716*t16830;
  t16862 = t16709*t16830;
  t16867 = -1.*t16750*t16830;
  t16877 = -1.*t16716*t16830;
  t16883 = t16750*t16830;
  t16911 = -1.*t16838*t16606;
  t16915 = t16838*t16635;
  p_output1[0]=t16657*var2[0] + t16045*t6896*var2[1] + t16647*var2[2];
  p_output1[1]=(t16704*t16750 - 1.*t16701*t16766)*var2[0] + (t16045*t16613*t16701 + t16704*t16709)*var2[1] + (t16704*t16716 - 1.*t16701*t16721)*var2[2];
  p_output1[2]=(t16701*t16750 + t16704*t16766)*var2[0] + (-1.*t16045*t16613*t16704 + t16701*t16709)*var2[1] + (t16701*t16716 + t16704*t16721)*var2[2];
  p_output1[3]=(t16045*(t16647*t16846 + t16721*t16851 + t16855)*t6896 + t16647*(t16831 + t16045*t16613*t16851 - 1.*t16045*t16846*t6896))*var2[0] + (t16657*(-1.*t16647*t16846 - 1.*t16721*t16851 + t16877) + t16647*(t16657*t16846 + t16766*t16851 + t16883))*var2[1] + (t16045*(-1.*t16657*t16846 - 1.*t16766*t16851 + t16867)*t6896 + t16657*(-1.*t16045*t16613*t16851 + t16862 + t16045*t16846*t6896))*var2[2];
  p_output1[4]=(t16716*(t16831 - 1.*t16045*t16844) + t16709*(t16606*t16838 + t16643*t16844 + t16855))*var2[0] + (t16750*(-1.*t16643*t16844 + t16877 + t16911) + t16716*(t16655*t16844 + t16883 + t16915))*var2[1] + (t16750*(t16045*t16844 + t16862) + t16709*(-1.*t16635*t16838 - 1.*t16655*t16844 + t16867))*var2[2];
  p_output1[5]=t16606*(t13849*t16821 - 1.*t16828*t8240)*var2[0] + (t16635*(-1.*t13849*t16635*t16828 + t16911 - 1.*t16635*t16821*t8240) + t16606*(t13849*t16652*t16828 + t16915 + t16652*t16821*t8240))*var2[1] + t16635*(-1.*t13849*t16821 + t16828*t8240)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(0.15121*t16606 + 0.15121*t16652)*var2[0] + (-0.15121 + t16635*(-1.*t16635*t16819 + t16911) + t16606*(t16652*t16819 + t16915))*var2[1];
  p_output1[10]=(0.28121*t16589 - 0.27*t16560*t16589 + t16589*t16814)*var2[0] + (0.28121*t16560 + 0.27*Power(t16589,2) + t16560*t16814)*var2[2];
  p_output1[11]=-0.27*var2[2];
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

#include "fRlFoot_vec_ParallelStance2.hh"

namespace SymFunction
{

void fRlFoot_vec_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
