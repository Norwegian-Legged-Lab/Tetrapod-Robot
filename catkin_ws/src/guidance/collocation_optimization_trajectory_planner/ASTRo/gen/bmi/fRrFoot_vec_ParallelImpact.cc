/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 17:58:59 GMT+02:00
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
  double t5678;
  double t5716;
  double t5703;
  double t5736;
  double t5741;
  double t5735;
  double t5745;
  double t5713;
  double t5750;
  double t5751;
  double t5752;
  double t5722;
  double t5748;
  double t5761;
  double t5762;
  double t5799;
  double t5714;
  double t5724;
  double t5725;
  double t5814;
  double t5811;
  double t5737;
  double t5746;
  double t5747;
  double t5753;
  double t5754;
  double t5755;
  double t5803;
  double t5804;
  double t5805;
  double t5815;
  double t5816;
  double t5817;
  double t5822;
  double t5823;
  double t5824;
  double t5827;
  double t5828;
  double t5829;
  double t5834;
  double t5835;
  double t5836;
  double t5838;
  double t5839;
  double t5840;
  double t5749;
  double t5756;
  double t5757;
  double t5859;
  double t5861;
  double t5862;
  double t5865;
  double t5866;
  double t5867;
  double t5868;
  double t5869;
  double t5870;
  double t5871;
  double t5872;
  double t5873;
  double t5874;
  double t5875;
  double t5879;
  double t5880;
  double t5863;
  double t5864;
  double t5876;
  double t5877;
  double t5884;
  double t5885;
  double t5886;
  double t5887;
  double t5889;
  double t5890;
  double t5891;
  double t5878;
  double t5881;
  double t5882;
  double t5888;
  double t5892;
  double t5893;
  double t5895;
  double t5896;
  double t5897;
  double t5759;
  double t5807;
  double t5808;
  double t5883;
  double t5901;
  double t5908;
  double t5913;
  double t5920;
  double t5925;
  double t5951;
  double t5955;
  t5678 = Cos(var1[4]);
  t5716 = Cos(var1[15]);
  t5703 = Cos(var1[5]);
  t5736 = Cos(var1[17]);
  t5741 = Sin(var1[16]);
  t5735 = Cos(var1[16]);
  t5745 = Sin(var1[17]);
  t5713 = Sin(var1[15]);
  t5750 = -1.*t5736*t5741;
  t5751 = t5735*t5745;
  t5752 = t5750 + t5751;
  t5722 = Sin(var1[5]);
  t5748 = Sin(var1[4]);
  t5761 = -1.*t5735*t5736;
  t5762 = -1.*t5741*t5745;
  t5799 = t5761 + t5762;
  t5714 = t5703*t5713;
  t5724 = t5716*t5722;
  t5725 = t5714 + t5724;
  t5814 = Cos(var1[3]);
  t5811 = Sin(var1[3]);
  t5737 = t5735*t5736;
  t5746 = t5741*t5745;
  t5747 = t5737 + t5746;
  t5753 = t5716*t5703*t5752;
  t5754 = -1.*t5713*t5752*t5722;
  t5755 = t5753 + t5754;
  t5803 = t5716*t5703*t5799;
  t5804 = -1.*t5713*t5799*t5722;
  t5805 = t5803 + t5804;
  t5815 = -1.*t5716*t5703;
  t5816 = t5713*t5722;
  t5817 = t5815 + t5816;
  t5822 = t5703*t5713*t5752;
  t5823 = t5716*t5752*t5722;
  t5824 = t5822 + t5823;
  t5827 = t5678*t5747;
  t5828 = -1.*t5748*t5755;
  t5829 = t5827 + t5828;
  t5834 = t5703*t5713*t5799;
  t5835 = t5716*t5799*t5722;
  t5836 = t5834 + t5835;
  t5838 = t5678*t5752;
  t5839 = -1.*t5748*t5805;
  t5840 = t5838 + t5839;
  t5749 = t5747*t5748;
  t5756 = t5678*t5755;
  t5757 = t5749 + t5756;
  t5859 = -1.*t5716;
  t5861 = 1. + t5859;
  t5862 = -0.15121*t5861;
  t5865 = -1.*t5735;
  t5866 = 1. + t5865;
  t5867 = -0.28121*t5866;
  t5868 = -1.*t5736;
  t5869 = 1. + t5868;
  t5870 = -0.50321*t5869;
  t5871 = -0.19821*t5736;
  t5872 = t5870 + t5871;
  t5873 = t5735*t5872;
  t5874 = 0.305*t5741*t5745;
  t5875 = t5867 + t5873 + t5874;
  t5879 = t5716*t5875;
  t5880 = t5862 + t5879;
  t5863 = -0.15121*t5716;
  t5864 = 0.15121*t5713;
  t5876 = t5713*t5875;
  t5877 = t5862 + t5863 + t5864 + t5876;
  t5884 = 0.28121*t5741;
  t5885 = t5872*t5741;
  t5886 = -0.305*t5735*t5745;
  t5887 = t5884 + t5885 + t5886;
  t5889 = t5703*t5880;
  t5890 = -1.*t5877*t5722;
  t5891 = t5889 + t5890;
  t5878 = t5703*t5877;
  t5881 = t5880*t5722;
  t5882 = t5878 + t5881;
  t5888 = t5887*t5748;
  t5892 = t5678*t5891;
  t5893 = t5888 + t5892;
  t5895 = t5678*t5887;
  t5896 = -1.*t5748*t5891;
  t5897 = t5895 + t5896;
  t5759 = t5752*t5748;
  t5807 = t5678*t5805;
  t5808 = t5759 + t5807;
  t5883 = -1.*t5817*t5882;
  t5901 = t5824*t5882;
  t5908 = t5817*t5882;
  t5913 = -1.*t5836*t5882;
  t5920 = -1.*t5824*t5882;
  t5925 = t5836*t5882;
  t5951 = -1.*t5887*t5747;
  t5955 = t5887*t5752;
  p_output1[0]=t5808*var2[0] + t5678*t5725*var2[1] + t5757*var2[2];
  p_output1[1]=(t5814*t5836 - 1.*t5811*t5840)*var2[0] + (t5725*t5748*t5811 + t5814*t5817)*var2[1] + (t5814*t5824 - 1.*t5811*t5829)*var2[2];
  p_output1[2]=(t5811*t5836 + t5814*t5840)*var2[0] + (-1.*t5725*t5748*t5814 + t5811*t5817)*var2[1] + (t5811*t5824 + t5814*t5829)*var2[2];
  p_output1[3]=(t5757*(t5883 - 1.*t5678*t5725*t5893 + t5725*t5748*t5897) + t5678*t5725*(t5757*t5893 + t5829*t5897 + t5901))*var2[0] + (t5808*(-1.*t5757*t5893 - 1.*t5829*t5897 + t5920) + t5757*(t5808*t5893 + t5840*t5897 + t5925))*var2[1] + (t5808*(t5678*t5725*t5893 - 1.*t5725*t5748*t5897 + t5908) + t5678*t5725*(-1.*t5808*t5893 - 1.*t5840*t5897 + t5913))*var2[2];
  p_output1[4]=(t5824*(t5883 - 1.*t5725*t5891) + t5817*(t5747*t5887 + t5755*t5891 + t5901))*var2[0] + (t5836*(-1.*t5755*t5891 + t5920 + t5951) + t5824*(t5805*t5891 + t5925 + t5955))*var2[1] + (t5836*(t5725*t5891 + t5908) + t5817*(-1.*t5752*t5887 - 1.*t5805*t5891 + t5913))*var2[2];
  p_output1[5]=t5747*(t5716*t5877 - 1.*t5713*t5880)*var2[0] + (t5752*(-1.*t5713*t5752*t5877 - 1.*t5716*t5752*t5880 + t5951) + t5747*(t5713*t5799*t5877 + t5716*t5799*t5880 + t5955))*var2[1] + t5752*(-1.*t5716*t5877 + t5713*t5880)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(-0.15121*t5747 - 0.15121*t5799)*var2[0] + (-0.15121 + t5752*(-1.*t5752*t5875 + t5951) + t5747*(t5799*t5875 + t5955))*var2[1];
  p_output1[16]=(0.28121*t5745 - 0.305*t5736*t5745 + t5745*t5872)*var2[0] + (0.28121*t5736 + 0.305*Power(t5745,2) + t5736*t5872)*var2[2];
  p_output1[17]=-0.305*var2[2];
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

#include "fRrFoot_vec_ParallelImpact.hh"

namespace SymFunction
{

void fRrFoot_vec_ParallelImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
