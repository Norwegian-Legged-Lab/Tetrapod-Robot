/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:52:55 GMT+02:00
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
  double t52691;
  double t53433;
  double t53416;
  double t53791;
  double t53810;
  double t53779;
  double t53811;
  double t53422;
  double t53437;
  double t53816;
  double t53819;
  double t53823;
  double t53774;
  double t53804;
  double t53812;
  double t53814;
  double t53424;
  double t53450;
  double t53764;
  double t53851;
  double t53849;
  double t53828;
  double t53829;
  double t53830;
  double t53834;
  double t53835;
  double t53836;
  double t53840;
  double t53841;
  double t53843;
  double t53852;
  double t53853;
  double t53855;
  double t53860;
  double t53861;
  double t53862;
  double t53865;
  double t53871;
  double t53874;
  double t53886;
  double t53893;
  double t53898;
  double t53903;
  double t53905;
  double t53907;
  double t53815;
  double t53831;
  double t53832;
  double t53990;
  double t53998;
  double t53999;
  double t54000;
  double t54014;
  double t54024;
  double t54035;
  double t54036;
  double t54040;
  double t54044;
  double t54046;
  double t54048;
  double t54051;
  double t54053;
  double t54054;
  double t54058;
  double t54066;
  double t54069;
  double t54074;
  double t54077;
  double t54083;
  double t54087;
  double t54088;
  double t54089;
  double t54093;
  double t54094;
  double t54105;
  double t54062;
  double t54078;
  double t54080;
  double t54092;
  double t54106;
  double t54113;
  double t54116;
  double t54119;
  double t54123;
  double t53839;
  double t53845;
  double t53846;
  double t54082;
  double t54129;
  double t54158;
  double t54169;
  double t54193;
  double t54204;
  double t54250;
  double t54254;
  t52691 = Cos(var1[4]);
  t53433 = Cos(var1[5]);
  t53416 = Cos(var1[6]);
  t53791 = Cos(var1[8]);
  t53810 = Sin(var1[7]);
  t53779 = Cos(var1[7]);
  t53811 = Sin(var1[8]);
  t53422 = Sin(var1[5]);
  t53437 = Sin(var1[6]);
  t53816 = t53791*t53810;
  t53819 = -1.*t53779*t53811;
  t53823 = t53816 + t53819;
  t53774 = Sin(var1[4]);
  t53804 = t53779*t53791;
  t53812 = t53810*t53811;
  t53814 = t53804 + t53812;
  t53424 = -1.*t53416*t53422;
  t53450 = -1.*t53433*t53437;
  t53764 = t53424 + t53450;
  t53851 = Cos(var1[3]);
  t53849 = Sin(var1[3]);
  t53828 = t53433*t53416*t53823;
  t53829 = -1.*t53422*t53437*t53823;
  t53830 = t53828 + t53829;
  t53834 = -1.*t53791*t53810;
  t53835 = t53779*t53811;
  t53836 = t53834 + t53835;
  t53840 = t53433*t53416*t53814;
  t53841 = -1.*t53422*t53437*t53814;
  t53843 = t53840 + t53841;
  t53852 = t53433*t53416;
  t53853 = -1.*t53422*t53437;
  t53855 = t53852 + t53853;
  t53860 = t53416*t53422*t53823;
  t53861 = t53433*t53437*t53823;
  t53862 = t53860 + t53861;
  t53865 = t52691*t53814;
  t53871 = -1.*t53774*t53830;
  t53874 = t53865 + t53871;
  t53886 = t53416*t53422*t53814;
  t53893 = t53433*t53437*t53814;
  t53898 = t53886 + t53893;
  t53903 = t52691*t53836;
  t53905 = -1.*t53774*t53843;
  t53907 = t53903 + t53905;
  t53815 = t53774*t53814;
  t53831 = t52691*t53830;
  t53832 = t53815 + t53831;
  t53990 = -1.*t53416;
  t53998 = 1. + t53990;
  t53999 = 0.15121*t53998;
  t54000 = -1.*t53779;
  t54014 = 1. + t54000;
  t54024 = 0.28121*t54014;
  t54035 = -1.*t53791;
  t54036 = 1. + t54035;
  t54040 = 0.50321*t54036;
  t54044 = 0.23321*t53791;
  t54046 = t54040 + t54044;
  t54048 = t53779*t54046;
  t54051 = -0.27*t53810*t53811;
  t54053 = t54024 + t54048 + t54051;
  t54054 = t53416*t54053;
  t54058 = t53999 + t54054;
  t54066 = 0.15121*t53416;
  t54069 = -0.15121*t53437;
  t54074 = t53437*t54053;
  t54077 = t53999 + t54066 + t54069 + t54074;
  t54083 = 0.28121*t53810;
  t54087 = -1.*t54046*t53810;
  t54088 = -0.27*t53779*t53811;
  t54089 = t54083 + t54087 + t54088;
  t54093 = t53433*t54058;
  t54094 = -1.*t53422*t54077;
  t54105 = t54093 + t54094;
  t54062 = t53422*t54058;
  t54078 = t53433*t54077;
  t54080 = t54062 + t54078;
  t54092 = t53774*t54089;
  t54106 = t52691*t54105;
  t54113 = t54092 + t54106;
  t54116 = t52691*t54089;
  t54119 = -1.*t53774*t54105;
  t54123 = t54116 + t54119;
  t53839 = t53774*t53836;
  t53845 = t52691*t53843;
  t53846 = t53839 + t53845;
  t54082 = -1.*t53855*t54080;
  t54129 = t53862*t54080;
  t54158 = t53855*t54080;
  t54169 = -1.*t53898*t54080;
  t54193 = -1.*t53862*t54080;
  t54204 = t53898*t54080;
  t54250 = -1.*t54089*t53814;
  t54254 = t54089*t53836;
  p_output1[0]=t53846*var2[0] + t52691*t53764*var2[1] + t53832*var2[2];
  p_output1[1]=(t53851*t53898 - 1.*t53849*t53907)*var2[0] + (t53764*t53774*t53849 + t53851*t53855)*var2[1] + (t53851*t53862 - 1.*t53849*t53874)*var2[2];
  p_output1[2]=(t53849*t53898 + t53851*t53907)*var2[0] + (-1.*t53764*t53774*t53851 + t53849*t53855)*var2[1] + (t53849*t53862 + t53851*t53874)*var2[2];
  p_output1[3]=(t53832*(t54082 - 1.*t52691*t53764*t54113 + t53764*t53774*t54123) + t52691*t53764*(t53832*t54113 + t53874*t54123 + t54129))*var2[0] + (t53846*(-1.*t53832*t54113 - 1.*t53874*t54123 + t54193) + t53832*(t53846*t54113 + t53907*t54123 + t54204))*var2[1] + (t53846*(t52691*t53764*t54113 - 1.*t53764*t53774*t54123 + t54158) + t52691*t53764*(-1.*t53846*t54113 - 1.*t53907*t54123 + t54169))*var2[2];
  p_output1[4]=(t53862*(t54082 - 1.*t53764*t54105) + t53855*(t53814*t54089 + t53830*t54105 + t54129))*var2[0] + (t53898*(-1.*t53830*t54105 + t54193 + t54250) + t53862*(t53843*t54105 + t54204 + t54254))*var2[1] + (t53898*(t53764*t54105 + t54158) + t53855*(-1.*t53836*t54089 - 1.*t53843*t54105 + t54169))*var2[2];
  p_output1[5]=t53814*(t53437*t54058 - 1.*t53416*t54077)*var2[0] + (t53836*(-1.*t53416*t53823*t54058 - 1.*t53437*t53823*t54077 + t54250) + t53814*(t53416*t53814*t54058 + t53437*t53814*t54077 + t54254))*var2[1] + t53836*(-1.*t53437*t54058 + t53416*t54077)*var2[2];
  p_output1[6]=(-0.15121 + t53836*(-1.*t53823*t54053 + t54250) + t53814*(t53814*t54053 + t54254))*var2[1] + (0.15121*t53823 + 0.15121*t53836)*var2[2];
  p_output1[7]=(0.28121*t53811 - 0.27*t53791*t53811 - 1.*t53811*t54046)*var2[0] + (0.28121*t53791 + 0.27*Power(t53811,2) - 1.*t53791*t54046)*var2[2];
  p_output1[8]=-0.27*var2[2];
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
