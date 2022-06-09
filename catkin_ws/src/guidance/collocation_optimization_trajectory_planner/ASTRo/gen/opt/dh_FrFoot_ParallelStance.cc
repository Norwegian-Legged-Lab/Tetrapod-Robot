/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:54:20 GMT+02:00
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
  double t16230;
  double t15468;
  double t16512;
  double t16459;
  double t16235;
  double t16237;
  double t16278;
  double t16290;
  double t16291;
  double t16464;
  double t16521;
  double t16524;
  double t16471;
  double t16529;
  double t16539;
  double t16550;
  double t16562;
  double t16568;
  double t16569;
  double t16463;
  double t16469;
  double t16470;
  double t16643;
  double t16654;
  double t16635;
  double t16595;
  double t16609;
  double t16611;
  double t16613;
  double t16649;
  double t16658;
  double t16666;
  double t16680;
  double t16674;
  double t16676;
  double t16677;
  double t16673;
  double t16681;
  double t16688;
  double t16693;
  double t16737;
  double t16744;
  double t16745;
  double t16574;
  double t16578;
  double t16581;
  double t16582;
  double t16584;
  double t16528;
  double t16571;
  double t16572;
  double t16753;
  double t16754;
  double t16756;
  double t16747;
  double t16750;
  double t16752;
  double t16757;
  double t16758;
  double t16760;
  double t16773;
  double t16775;
  double t16776;
  double t16812;
  double t16814;
  double t16816;
  double t16765;
  double t16768;
  double t16771;
  double t16772;
  double t16780;
  double t16781;
  double t16783;
  double t16784;
  double t16800;
  double t16837;
  double t16839;
  double t16840;
  double t16846;
  double t16847;
  double t16848;
  double t16851;
  double t16852;
  double t16853;
  double t16873;
  double t16883;
  double t16614;
  double t16667;
  double t16668;
  double t16934;
  double t16859;
  double t16860;
  double t16861;
  double t16939;
  double t17009;
  double t17017;
  t16230 = Cos(var1[14]);
  t15468 = Sin(var1[14]);
  t16512 = Cos(var1[12]);
  t16459 = Cos(var1[13]);
  t16235 = -1.*t16230;
  t16237 = 1. + t16235;
  t16278 = 0.50321*t16237;
  t16290 = 0.19821*t16230;
  t16291 = t16278 + t16290;
  t16464 = Sin(var1[13]);
  t16521 = -1.*t16512;
  t16524 = 1. + t16521;
  t16471 = Sin(var1[12]);
  t16529 = -1.*t16459;
  t16539 = 1. + t16529;
  t16550 = 0.28121*t16539;
  t16562 = t16459*t16291;
  t16568 = -0.305*t16464*t15468;
  t16569 = t16550 + t16562 + t16568;
  t16463 = t16459*t16230;
  t16469 = t16464*t15468;
  t16470 = t16463 + t16469;
  t16643 = Cos(var1[5]);
  t16654 = Sin(var1[5]);
  t16635 = Cos(var1[4]);
  t16595 = -1.*t16230*t16464;
  t16609 = t16459*t15468;
  t16611 = t16595 + t16609;
  t16613 = Sin(var1[4]);
  t16649 = t16512*t16643*t16470;
  t16658 = -1.*t16471*t16470*t16654;
  t16666 = t16649 + t16658;
  t16680 = Cos(var1[3]);
  t16674 = t16643*t16471*t16470;
  t16676 = t16512*t16470*t16654;
  t16677 = t16674 + t16676;
  t16673 = Sin(var1[3]);
  t16681 = t16635*t16611;
  t16688 = -1.*t16613*t16666;
  t16693 = t16681 + t16688;
  t16737 = t16230*t16464;
  t16744 = -1.*t16459*t15468;
  t16745 = t16737 + t16744;
  t16574 = -0.15121*t16524;
  t16578 = -0.15121*t16512;
  t16581 = -0.15121*t16471;
  t16582 = t16471*t16569;
  t16584 = t16574 + t16578 + t16581 + t16582;
  t16528 = 0.15121*t16524;
  t16571 = t16512*t16569;
  t16572 = t16528 + t16571;
  t16753 = t16512*t16643;
  t16754 = -1.*t16471*t16654;
  t16756 = t16753 + t16754;
  t16747 = t16643*t16471*t16745;
  t16750 = t16512*t16745*t16654;
  t16752 = t16747 + t16750;
  t16757 = t16643*t16584;
  t16758 = t16572*t16654;
  t16760 = t16757 + t16758;
  t16773 = t16643*t16572;
  t16775 = -1.*t16584*t16654;
  t16776 = t16773 + t16775;
  t16812 = t16512*t16643*t16745;
  t16814 = -1.*t16471*t16745*t16654;
  t16816 = t16812 + t16814;
  t16765 = -1.*t16756*t16760;
  t16768 = -1.*t16643*t16471;
  t16771 = -1.*t16512*t16654;
  t16772 = t16768 + t16771;
  t16780 = 0.28121*t16464;
  t16781 = -1.*t16291*t16464;
  t16783 = -0.305*t16459*t15468;
  t16784 = t16780 + t16781 + t16783;
  t16800 = t16752*t16760;
  t16837 = t16470*t16613;
  t16839 = t16635*t16816;
  t16840 = t16837 + t16839;
  t16846 = t16784*t16613;
  t16847 = t16635*t16776;
  t16848 = t16846 + t16847;
  t16851 = t16635*t16784;
  t16852 = -1.*t16613*t16776;
  t16853 = t16851 + t16852;
  t16873 = -1.*t16784*t16470;
  t16883 = t16784*t16611;
  t16614 = t16611*t16613;
  t16667 = t16635*t16666;
  t16668 = t16614 + t16667;
  t16934 = -1.*t16752*t16760;
  t16859 = t16635*t16470;
  t16860 = -1.*t16613*t16816;
  t16861 = t16859 + t16860;
  t16939 = t16677*t16760;
  t17009 = t16756*t16760;
  t17017 = -1.*t16677*t16760;
  p_output1[0]=t16668*var2[0] + (t16677*t16680 - 1.*t16673*t16693)*var2[1] + (t16673*t16677 + t16680*t16693)*var2[2] + (t16840*(t16765 - 1.*t16635*t16772*t16848 + t16613*t16772*t16853) + t16635*t16772*(t16800 + t16840*t16848 + t16853*t16861))*var2[3] + (t16752*(t16765 - 1.*t16772*t16776) + t16756*(t16470*t16784 + t16800 + t16776*t16816))*var2[4] + t16470*(t16471*t16572 - 1.*t16512*t16584)*var2[5] + (0.28121*t15468 - 0.305*t15468*t16230 - 1.*t15468*t16291)*var2[13];
  p_output1[1]=t16635*t16772*var2[0] + (t16680*t16756 + t16613*t16673*t16772)*var2[1] + (t16673*t16756 - 1.*t16613*t16680*t16772)*var2[2] + (t16668*(-1.*t16840*t16848 - 1.*t16853*t16861 + t16934) + t16840*(t16668*t16848 + t16693*t16853 + t16939))*var2[3] + (t16677*(-1.*t16776*t16816 + t16873 + t16934) + t16752*(t16666*t16776 + t16883 + t16939))*var2[4] + (t16611*(-1.*t16512*t16572*t16745 - 1.*t16471*t16584*t16745 + t16873) + t16470*(t16470*t16512*t16572 + t16470*t16471*t16584 + t16883))*var2[5] + (-0.15121 + t16611*(-1.*t16569*t16745 + t16873) + t16470*(t16470*t16569 + t16883))*var2[12];
  p_output1[2]=t16840*var2[0] + (t16680*t16752 - 1.*t16673*t16861)*var2[1] + (t16673*t16752 + t16680*t16861)*var2[2] + (t16668*(t16635*t16772*t16848 - 1.*t16613*t16772*t16853 + t17009) + t16635*t16772*(-1.*t16668*t16848 - 1.*t16693*t16853 + t17017))*var2[3] + (t16677*(t16772*t16776 + t17009) + t16756*(-1.*t16666*t16776 - 1.*t16611*t16784 + t17017))*var2[4] + (-1.*t16471*t16572 + t16512*t16584)*t16611*var2[5] + (-0.15121*t16611 - 0.15121*t16745)*var2[12] + (0.305*Power(t15468,2) + 0.28121*t16230 - 1.*t16230*t16291)*var2[13] - 0.305*var2[14];
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

#include "dh_FrFoot_ParallelStance.hh"

namespace ParallelStance
{

void dh_FrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
