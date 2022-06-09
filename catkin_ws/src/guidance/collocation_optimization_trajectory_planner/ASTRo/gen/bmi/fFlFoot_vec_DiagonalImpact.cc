/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 19:00:23 GMT+02:00
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
  double t2595;
  double t2626;
  double t2604;
  double t2806;
  double t2832;
  double t2805;
  double t2834;
  double t2618;
  double t2675;
  double t2844;
  double t2859;
  double t2860;
  double t2798;
  double t2807;
  double t2835;
  double t2838;
  double t2619;
  double t2765;
  double t2795;
  double t8839;
  double t8834;
  double t2869;
  double t2940;
  double t2954;
  double t2971;
  double t2985;
  double t2986;
  double t3001;
  double t8769;
  double t8774;
  double t8840;
  double t8845;
  double t8849;
  double t8853;
  double t8854;
  double t8855;
  double t8857;
  double t8858;
  double t8859;
  double t8863;
  double t8864;
  double t8865;
  double t8867;
  double t8868;
  double t8869;
  double t2843;
  double t2956;
  double t2969;
  double t8889;
  double t8891;
  double t8892;
  double t8893;
  double t8895;
  double t8896;
  double t8897;
  double t8898;
  double t8899;
  double t8900;
  double t8901;
  double t8902;
  double t8903;
  double t8904;
  double t8905;
  double t8906;
  double t8908;
  double t8909;
  double t8910;
  double t8911;
  double t8915;
  double t8916;
  double t8917;
  double t8918;
  double t8920;
  double t8922;
  double t8923;
  double t8907;
  double t8912;
  double t8913;
  double t8919;
  double t8924;
  double t8925;
  double t8928;
  double t8929;
  double t8930;
  double t2996;
  double t8775;
  double t8776;
  double t8914;
  double t8934;
  double t8941;
  double t8946;
  double t8953;
  double t8958;
  double t8984;
  double t8988;
  t2595 = Cos(var1[4]);
  t2626 = Cos(var1[5]);
  t2604 = Cos(var1[6]);
  t2806 = Cos(var1[8]);
  t2832 = Sin(var1[7]);
  t2805 = Cos(var1[7]);
  t2834 = Sin(var1[8]);
  t2618 = Sin(var1[5]);
  t2675 = Sin(var1[6]);
  t2844 = t2806*t2832;
  t2859 = -1.*t2805*t2834;
  t2860 = t2844 + t2859;
  t2798 = Sin(var1[4]);
  t2807 = t2805*t2806;
  t2835 = t2832*t2834;
  t2838 = t2807 + t2835;
  t2619 = -1.*t2604*t2618;
  t2765 = -1.*t2626*t2675;
  t2795 = t2619 + t2765;
  t8839 = Cos(var1[3]);
  t8834 = Sin(var1[3]);
  t2869 = t2626*t2604*t2860;
  t2940 = -1.*t2618*t2675*t2860;
  t2954 = t2869 + t2940;
  t2971 = -1.*t2806*t2832;
  t2985 = t2805*t2834;
  t2986 = t2971 + t2985;
  t3001 = t2626*t2604*t2838;
  t8769 = -1.*t2618*t2675*t2838;
  t8774 = t3001 + t8769;
  t8840 = t2626*t2604;
  t8845 = -1.*t2618*t2675;
  t8849 = t8840 + t8845;
  t8853 = t2604*t2618*t2860;
  t8854 = t2626*t2675*t2860;
  t8855 = t8853 + t8854;
  t8857 = t2595*t2838;
  t8858 = -1.*t2798*t2954;
  t8859 = t8857 + t8858;
  t8863 = t2604*t2618*t2838;
  t8864 = t2626*t2675*t2838;
  t8865 = t8863 + t8864;
  t8867 = t2595*t2986;
  t8868 = -1.*t2798*t8774;
  t8869 = t8867 + t8868;
  t2843 = t2798*t2838;
  t2956 = t2595*t2954;
  t2969 = t2843 + t2956;
  t8889 = -1.*t2604;
  t8891 = 1. + t8889;
  t8892 = 0.15121*t8891;
  t8893 = -1.*t2805;
  t8895 = 1. + t8893;
  t8896 = 0.28121*t8895;
  t8897 = -1.*t2806;
  t8898 = 1. + t8897;
  t8899 = 0.50321*t8898;
  t8900 = 0.19821*t2806;
  t8901 = t8899 + t8900;
  t8902 = t2805*t8901;
  t8903 = -0.305*t2832*t2834;
  t8904 = t8896 + t8902 + t8903;
  t8905 = t2604*t8904;
  t8906 = t8892 + t8905;
  t8908 = 0.15121*t2604;
  t8909 = -0.15121*t2675;
  t8910 = t2675*t8904;
  t8911 = t8892 + t8908 + t8909 + t8910;
  t8915 = 0.28121*t2832;
  t8916 = -1.*t8901*t2832;
  t8917 = -0.305*t2805*t2834;
  t8918 = t8915 + t8916 + t8917;
  t8920 = t2626*t8906;
  t8922 = -1.*t2618*t8911;
  t8923 = t8920 + t8922;
  t8907 = t2618*t8906;
  t8912 = t2626*t8911;
  t8913 = t8907 + t8912;
  t8919 = t2798*t8918;
  t8924 = t2595*t8923;
  t8925 = t8919 + t8924;
  t8928 = t2595*t8918;
  t8929 = -1.*t2798*t8923;
  t8930 = t8928 + t8929;
  t2996 = t2798*t2986;
  t8775 = t2595*t8774;
  t8776 = t2996 + t8775;
  t8914 = -1.*t8849*t8913;
  t8934 = t8855*t8913;
  t8941 = t8849*t8913;
  t8946 = -1.*t8865*t8913;
  t8953 = -1.*t8855*t8913;
  t8958 = t8865*t8913;
  t8984 = -1.*t8918*t2838;
  t8988 = t8918*t2986;
  p_output1[0]=t8776*var2[0] + t2595*t2795*var2[1] + t2969*var2[2];
  p_output1[1]=(t8839*t8865 - 1.*t8834*t8869)*var2[0] + (t2795*t2798*t8834 + t8839*t8849)*var2[1] + (t8839*t8855 - 1.*t8834*t8859)*var2[2];
  p_output1[2]=(t8834*t8865 + t8839*t8869)*var2[0] + (-1.*t2795*t2798*t8839 + t8834*t8849)*var2[1] + (t8834*t8855 + t8839*t8859)*var2[2];
  p_output1[3]=(t2969*(t8914 - 1.*t2595*t2795*t8925 + t2795*t2798*t8930) + t2595*t2795*(t2969*t8925 + t8859*t8930 + t8934))*var2[0] + (t8776*(-1.*t2969*t8925 - 1.*t8859*t8930 + t8953) + t2969*(t8776*t8925 + t8869*t8930 + t8958))*var2[1] + (t8776*(t2595*t2795*t8925 - 1.*t2795*t2798*t8930 + t8941) + t2595*t2795*(-1.*t8776*t8925 - 1.*t8869*t8930 + t8946))*var2[2];
  p_output1[4]=(t8855*(t8914 - 1.*t2795*t8923) + t8849*(t2838*t8918 + t2954*t8923 + t8934))*var2[0] + (t8865*(-1.*t2954*t8923 + t8953 + t8984) + t8855*(t8774*t8923 + t8958 + t8988))*var2[1] + (t8865*(t2795*t8923 + t8941) + t8849*(-1.*t2986*t8918 - 1.*t8774*t8923 + t8946))*var2[2];
  p_output1[5]=t2838*(t2675*t8906 - 1.*t2604*t8911)*var2[0] + (t2986*(-1.*t2604*t2860*t8906 - 1.*t2675*t2860*t8911 + t8984) + t2838*(t2604*t2838*t8906 + t2675*t2838*t8911 + t8988))*var2[1] + t2986*(-1.*t2675*t8906 + t2604*t8911)*var2[2];
  p_output1[6]=(-0.15121 + t2986*(-1.*t2860*t8904 + t8984) + t2838*(t2838*t8904 + t8988))*var2[1] + (0.15121*t2860 + 0.15121*t2986)*var2[2];
  p_output1[7]=(0.28121*t2834 - 0.305*t2806*t2834 - 1.*t2834*t8901)*var2[0] + (0.28121*t2806 + 0.305*Power(t2834,2) - 1.*t2806*t8901)*var2[2];
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

#include "fFlFoot_vec_DiagonalImpact.hh"

namespace SymFunction
{

void fFlFoot_vec_DiagonalImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
