/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 14:41:49 GMT+02:00
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
  double t5014;
  double t4978;
  double t5237;
  double t9763;
  double t9703;
  double t9704;
  double t9772;
  double t4681;
  double t9705;
  double t9773;
  double t9775;
  double t5244;
  double t9785;
  double t9786;
  double t9787;
  double t9784;
  double t9807;
  double t9809;
  double t9789;
  double t9790;
  double t9791;
  double t9797;
  double t9798;
  double t9799;
  double t9800;
  double t9801;
  double t9802;
  double t9810;
  double t9811;
  double t9812;
  double t9816;
  double t9817;
  double t9819;
  double t9821;
  double t9822;
  double t9824;
  double t9828;
  double t9830;
  double t9831;
  double t9834;
  double t9835;
  double t9836;
  double t9780;
  double t9793;
  double t9794;
  double t9862;
  double t9863;
  double t9864;
  double t9867;
  double t9868;
  double t9869;
  double t9870;
  double t9872;
  double t9873;
  double t5013;
  double t9695;
  double t9701;
  double t9861;
  double t9866;
  double t9874;
  double t9876;
  double t9880;
  double t9881;
  double t9882;
  double t9883;
  double t9884;
  double t9885;
  double t9856;
  double t9857;
  double t9858;
  double t9859;
  double t9877;
  double t9878;
  double t9889;
  double t9890;
  double t9891;
  double t9893;
  double t9894;
  double t9895;
  double t9879;
  double t9886;
  double t9887;
  double t9892;
  double t9896;
  double t9897;
  double t9899;
  double t9900;
  double t9901;
  double t9796;
  double t9803;
  double t9804;
  double t9888;
  double t9905;
  double t9912;
  double t9917;
  double t9924;
  double t9929;
  double t9957;
  double t9961;
  double t9937;
  double t9941;
  double t9951;
  double t9947;
  double t9991;
  double t9986;
  t5014 = Cos(var1[12]);
  t4978 = Sin(var1[4]);
  t5237 = Cos(var1[4]);
  t9763 = Cos(var1[13]);
  t9703 = Cos(var1[14]);
  t9704 = Sin(var1[13]);
  t9772 = Sin(var1[14]);
  t4681 = Sin(var1[12]);
  t9705 = t9703*t9704;
  t9773 = -1.*t9763*t9772;
  t9775 = t9705 + t9773;
  t5244 = Sin(var1[5]);
  t9785 = t9763*t9703;
  t9786 = t9704*t9772;
  t9787 = t9785 + t9786;
  t9784 = Cos(var1[5]);
  t9807 = Cos(var1[3]);
  t9809 = Sin(var1[3]);
  t9789 = t9784*t9787;
  t9790 = t4681*t9775*t5244;
  t9791 = t9789 + t9790;
  t9797 = -1.*t9703*t9704;
  t9798 = t9763*t9772;
  t9799 = t9797 + t9798;
  t9800 = t9784*t9799;
  t9801 = t4681*t9787*t5244;
  t9802 = t9800 + t9801;
  t9810 = t5237*t4681;
  t9811 = t5014*t4978*t5244;
  t9812 = t9810 + t9811;
  t9816 = -1.*t9784*t4681*t9775;
  t9817 = t9787*t5244;
  t9819 = t9816 + t9817;
  t9821 = t5014*t5237*t9775;
  t9822 = -1.*t4978*t9791;
  t9824 = t9821 + t9822;
  t9828 = -1.*t9784*t4681*t9787;
  t9830 = t9799*t5244;
  t9831 = t9828 + t9830;
  t9834 = t5014*t5237*t9787;
  t9835 = -1.*t4978*t9802;
  t9836 = t9834 + t9835;
  t9780 = t5014*t9775*t4978;
  t9793 = t5237*t9791;
  t9794 = t9780 + t9793;
  t9862 = -0.0641*t9703;
  t9863 = -0.28*t9772;
  t9864 = t9862 + t9863;
  t9867 = -1.*t9703;
  t9868 = 1. + t9867;
  t9869 = 0.075*t9868;
  t9870 = 0.355*t9703;
  t9872 = -0.0641*t9772;
  t9873 = t9869 + t9870 + t9872;
  t5013 = t4681*t4978;
  t9695 = -1.*t5014*t5237*t5244;
  t9701 = t5013 + t9695;
  t9861 = -0.325*t9704;
  t9866 = t9763*t9864;
  t9874 = t9704*t9873;
  t9876 = t9861 + t9866 + t9874;
  t9880 = -1.*t9763;
  t9881 = 1. + t9880;
  t9882 = 0.325*t9881;
  t9883 = -1.*t9704*t9864;
  t9884 = t9763*t9873;
  t9885 = t9882 + t9883 + t9884;
  t9856 = -1.*t5014;
  t9857 = 1. + t9856;
  t9858 = -0.1575*t9857;
  t9859 = -0.2255*t5014;
  t9877 = -1.*t4681*t9876;
  t9878 = t9858 + t9859 + t9877;
  t9889 = -0.068*t4681;
  t9890 = t5014*t9876;
  t9891 = t9889 + t9890;
  t9893 = t9784*t9885;
  t9894 = -1.*t9878*t5244;
  t9895 = t9893 + t9894;
  t9879 = t9784*t9878;
  t9886 = t9885*t5244;
  t9887 = t9879 + t9886;
  t9892 = t9891*t4978;
  t9896 = t5237*t9895;
  t9897 = t9892 + t9896;
  t9899 = t5237*t9891;
  t9900 = -1.*t4978*t9895;
  t9901 = t9899 + t9900;
  t9796 = t5014*t9787*t4978;
  t9803 = t5237*t9802;
  t9804 = t9796 + t9803;
  t9888 = t5014*t9784*t9887;
  t9905 = -1.*t9887*t9819;
  t9912 = t9887*t9819;
  t9917 = -1.*t9887*t9831;
  t9924 = -1.*t5014*t9784*t9887;
  t9929 = t9887*t9831;
  t9957 = -1.*t4681*t9891;
  t9961 = t5014*t9891*t9787;
  t9937 = t4681*t9891;
  t9941 = -1.*t5014*t9891*t9775;
  t9951 = -1.*t5014*t9891*t9787;
  t9947 = t5014*t9891*t9775;
  t9991 = t9885*t9787;
  t9986 = -1.*t9885*t9799;
  p_output1[0]=t9794*var2[0] + t9701*var2[1] + t9804*var2[2];
  p_output1[1]=(t9807*t9819 - 1.*t9809*t9824)*var2[0] + (t5014*t9784*t9807 - 1.*t9809*t9812)*var2[1] + (t9807*t9831 - 1.*t9809*t9836)*var2[2];
  p_output1[2]=(t9809*t9819 + t9807*t9824)*var2[0] + (t5014*t9784*t9809 + t9807*t9812)*var2[1] + (t9809*t9831 + t9807*t9836)*var2[2];
  p_output1[3]=(t9804*(-1.*t9701*t9897 - 1.*t9812*t9901 + t9924) + t9701*(t9804*t9897 + t9836*t9901 + t9929))*var2[0] + (t9804*(t9794*t9897 + t9824*t9901 + t9912) + t9794*(-1.*t9804*t9897 - 1.*t9836*t9901 + t9917))*var2[1] + (t9794*(t9888 + t9701*t9897 + t9812*t9901) + t9701*(-1.*t9794*t9897 - 1.*t9824*t9901 + t9905))*var2[2];
  p_output1[4]=(t9831*(t5014*t5244*t9895 + t9924 + t9957) + t5014*t9784*(t9802*t9895 + t9929 + t9961))*var2[0] + (t9831*(t9791*t9895 + t9912 + t9947) + t9819*(-1.*t9802*t9895 + t9917 + t9951))*var2[1] + (t9819*(t9888 - 1.*t5014*t5244*t9895 + t9937) + t5014*t9784*(-1.*t9791*t9895 + t9905 + t9941))*var2[2];
  p_output1[5]=(t5014*t9787*(-1.*t5014*t9878 + t9957) + t4681*(-1.*t4681*t9787*t9878 + t9799*t9885 + t9961))*var2[0] + (t5014*t9775*(t4681*t9787*t9878 + t9951 + t9986) + t5014*t9787*(-1.*t4681*t9775*t9878 + t9947 + t9991))*var2[1] + (t5014*t9775*(t5014*t9878 + t9937) + t4681*(t4681*t9775*t9878 - 1.*t9787*t9885 + t9941))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(0.1575*t9775 + 0.2255*t9799)*var2[0] + (t9787*(-1.*t9787*t9876 + t9986) + t9799*(t9775*t9876 + t9991))*var2[1] - 0.068*t9787*var2[2];
  p_output1[13]=(0.325*t9772 - 1.*t9703*t9864 - 1.*t9772*t9873)*var2[0] + (-0.325*t9703 - 1.*t9772*t9864 + t9703*t9873)*var2[2];
  p_output1[14]=-0.0641*var2[0] - 0.28*var2[2];
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

#include "fFrFoot_vec_DiagonalImpact2.hh"

namespace SymFunction
{

void fFrFoot_vec_DiagonalImpact2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
