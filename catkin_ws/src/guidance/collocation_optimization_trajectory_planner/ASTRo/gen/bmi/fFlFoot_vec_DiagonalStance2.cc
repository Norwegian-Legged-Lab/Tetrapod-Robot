/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 18:59:59 GMT+02:00
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
  double t6556;
  double t6564;
  double t6561;
  double t6682;
  double t6684;
  double t6678;
  double t6685;
  double t6562;
  double t6565;
  double t6691;
  double t6693;
  double t6694;
  double t6667;
  double t6683;
  double t6686;
  double t6687;
  double t6563;
  double t6658;
  double t6664;
  double t6723;
  double t6721;
  double t6696;
  double t6697;
  double t6700;
  double t6705;
  double t6706;
  double t6707;
  double t6711;
  double t6712;
  double t6713;
  double t6725;
  double t6729;
  double t6730;
  double t6737;
  double t6738;
  double t6740;
  double t6743;
  double t6744;
  double t6746;
  double t6750;
  double t6751;
  double t6752;
  double t6754;
  double t6755;
  double t6756;
  double t6688;
  double t6701;
  double t6702;
  double t6781;
  double t6782;
  double t6784;
  double t6785;
  double t6786;
  double t6787;
  double t6788;
  double t6789;
  double t6790;
  double t6791;
  double t6792;
  double t6793;
  double t6794;
  double t6795;
  double t6796;
  double t6797;
  double t6799;
  double t6800;
  double t6801;
  double t6802;
  double t6806;
  double t6807;
  double t6808;
  double t6809;
  double t6811;
  double t6812;
  double t6822;
  double t6798;
  double t6803;
  double t6804;
  double t6810;
  double t6823;
  double t6824;
  double t6829;
  double t6833;
  double t6835;
  double t6709;
  double t6714;
  double t6715;
  double t6805;
  double t6843;
  double t6859;
  double t6867;
  double t6875;
  double t6882;
  double t6911;
  double t6915;
  t6556 = Cos(var1[4]);
  t6564 = Cos(var1[5]);
  t6561 = Cos(var1[6]);
  t6682 = Cos(var1[8]);
  t6684 = Sin(var1[7]);
  t6678 = Cos(var1[7]);
  t6685 = Sin(var1[8]);
  t6562 = Sin(var1[5]);
  t6565 = Sin(var1[6]);
  t6691 = t6682*t6684;
  t6693 = -1.*t6678*t6685;
  t6694 = t6691 + t6693;
  t6667 = Sin(var1[4]);
  t6683 = t6678*t6682;
  t6686 = t6684*t6685;
  t6687 = t6683 + t6686;
  t6563 = -1.*t6561*t6562;
  t6658 = -1.*t6564*t6565;
  t6664 = t6563 + t6658;
  t6723 = Cos(var1[3]);
  t6721 = Sin(var1[3]);
  t6696 = t6564*t6561*t6694;
  t6697 = -1.*t6562*t6565*t6694;
  t6700 = t6696 + t6697;
  t6705 = -1.*t6682*t6684;
  t6706 = t6678*t6685;
  t6707 = t6705 + t6706;
  t6711 = t6564*t6561*t6687;
  t6712 = -1.*t6562*t6565*t6687;
  t6713 = t6711 + t6712;
  t6725 = t6564*t6561;
  t6729 = -1.*t6562*t6565;
  t6730 = t6725 + t6729;
  t6737 = t6561*t6562*t6694;
  t6738 = t6564*t6565*t6694;
  t6740 = t6737 + t6738;
  t6743 = t6556*t6687;
  t6744 = -1.*t6667*t6700;
  t6746 = t6743 + t6744;
  t6750 = t6561*t6562*t6687;
  t6751 = t6564*t6565*t6687;
  t6752 = t6750 + t6751;
  t6754 = t6556*t6707;
  t6755 = -1.*t6667*t6713;
  t6756 = t6754 + t6755;
  t6688 = t6667*t6687;
  t6701 = t6556*t6700;
  t6702 = t6688 + t6701;
  t6781 = -1.*t6561;
  t6782 = 1. + t6781;
  t6784 = 0.15121*t6782;
  t6785 = -1.*t6678;
  t6786 = 1. + t6785;
  t6787 = 0.28121*t6786;
  t6788 = -1.*t6682;
  t6789 = 1. + t6788;
  t6790 = 0.50321*t6789;
  t6791 = 0.19821*t6682;
  t6792 = t6790 + t6791;
  t6793 = t6678*t6792;
  t6794 = -0.305*t6684*t6685;
  t6795 = t6787 + t6793 + t6794;
  t6796 = t6561*t6795;
  t6797 = t6784 + t6796;
  t6799 = 0.15121*t6561;
  t6800 = -0.15121*t6565;
  t6801 = t6565*t6795;
  t6802 = t6784 + t6799 + t6800 + t6801;
  t6806 = 0.28121*t6684;
  t6807 = -1.*t6792*t6684;
  t6808 = -0.305*t6678*t6685;
  t6809 = t6806 + t6807 + t6808;
  t6811 = t6564*t6797;
  t6812 = -1.*t6562*t6802;
  t6822 = t6811 + t6812;
  t6798 = t6562*t6797;
  t6803 = t6564*t6802;
  t6804 = t6798 + t6803;
  t6810 = t6667*t6809;
  t6823 = t6556*t6822;
  t6824 = t6810 + t6823;
  t6829 = t6556*t6809;
  t6833 = -1.*t6667*t6822;
  t6835 = t6829 + t6833;
  t6709 = t6667*t6707;
  t6714 = t6556*t6713;
  t6715 = t6709 + t6714;
  t6805 = -1.*t6730*t6804;
  t6843 = t6740*t6804;
  t6859 = t6730*t6804;
  t6867 = -1.*t6752*t6804;
  t6875 = -1.*t6740*t6804;
  t6882 = t6752*t6804;
  t6911 = -1.*t6809*t6687;
  t6915 = t6809*t6707;
  p_output1[0]=t6715*var2[0] + t6556*t6664*var2[1] + t6702*var2[2];
  p_output1[1]=(t6723*t6752 - 1.*t6721*t6756)*var2[0] + (t6664*t6667*t6721 + t6723*t6730)*var2[1] + (t6723*t6740 - 1.*t6721*t6746)*var2[2];
  p_output1[2]=(t6721*t6752 + t6723*t6756)*var2[0] + (-1.*t6664*t6667*t6723 + t6721*t6730)*var2[1] + (t6721*t6740 + t6723*t6746)*var2[2];
  p_output1[3]=(t6702*(t6805 - 1.*t6556*t6664*t6824 + t6664*t6667*t6835) + t6556*t6664*(t6702*t6824 + t6746*t6835 + t6843))*var2[0] + (t6715*(-1.*t6702*t6824 - 1.*t6746*t6835 + t6875) + t6702*(t6715*t6824 + t6756*t6835 + t6882))*var2[1] + (t6715*(t6556*t6664*t6824 - 1.*t6664*t6667*t6835 + t6859) + t6556*t6664*(-1.*t6715*t6824 - 1.*t6756*t6835 + t6867))*var2[2];
  p_output1[4]=(t6740*(t6805 - 1.*t6664*t6822) + t6730*(t6687*t6809 + t6700*t6822 + t6843))*var2[0] + (t6752*(-1.*t6700*t6822 + t6875 + t6911) + t6740*(t6713*t6822 + t6882 + t6915))*var2[1] + (t6752*(t6664*t6822 + t6859) + t6730*(-1.*t6707*t6809 - 1.*t6713*t6822 + t6867))*var2[2];
  p_output1[5]=t6687*(t6565*t6797 - 1.*t6561*t6802)*var2[0] + (t6707*(-1.*t6561*t6694*t6797 - 1.*t6565*t6694*t6802 + t6911) + t6687*(t6561*t6687*t6797 + t6565*t6687*t6802 + t6915))*var2[1] + t6707*(-1.*t6565*t6797 + t6561*t6802)*var2[2];
  p_output1[6]=(-0.15121 + t6707*(-1.*t6694*t6795 + t6911) + t6687*(t6687*t6795 + t6915))*var2[1] + (0.15121*t6694 + 0.15121*t6707)*var2[2];
  p_output1[7]=(0.28121*t6685 - 0.305*t6682*t6685 - 1.*t6685*t6792)*var2[0] + (0.28121*t6682 + 0.305*Power(t6685,2) - 1.*t6682*t6792)*var2[2];
  p_output1[8]=-0.305*var2[2];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
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

#include "fFlFoot_vec_DiagonalStance2.hh"

namespace SymFunction
{

void fFlFoot_vec_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
