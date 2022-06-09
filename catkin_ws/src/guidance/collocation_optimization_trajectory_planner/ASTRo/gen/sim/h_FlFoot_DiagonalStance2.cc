/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:37:44 GMT+02:00
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
  double t5744;
  double t14107;
  double t14162;
  double t14652;
  double t14653;
  double t14655;
  double t14009;
  double t14689;
  double t14716;
  double t14721;
  double t14723;
  double t14724;
  double t14726;
  double t14727;
  double t14730;
  double t14737;
  double t14886;
  double t14908;
  double t14911;
  double t14913;
  double t14914;
  double t14915;
  double t14677;
  double t14678;
  double t14939;
  double t14934;
  double t14698;
  double t14699;
  double t14935;
  double t14940;
  double t14948;
  double t15002;
  double t15032;
  double t15037;
  double t14718;
  double t14720;
  double t14731;
  double t14736;
  double t15120;
  double t15121;
  double t15122;
  double t15129;
  double t15130;
  double t15131;
  double t15133;
  double t15134;
  double t15135;
  double t15156;
  double t15157;
  double t15165;
  double t15168;
  double t15188;
  double t15189;
  double t15198;
  double t15199;
  double t15200;
  double t15204;
  double t15205;
  double t15206;
  double t15209;
  double t15211;
  double t15212;
  t5744 = Cos(var1[4]);
  t14107 = Cos(var1[6]);
  t14162 = -1.*t14107;
  t14652 = 1. + t14162;
  t14653 = 0.15121*t14652;
  t14655 = Sin(var1[6]);
  t14009 = Sin(var1[5]);
  t14689 = Cos(var1[5]);
  t14716 = Cos(var1[7]);
  t14721 = t5744*t14689*t14107;
  t14723 = -1.*t5744*t14009*t14655;
  t14724 = t14721 + t14723;
  t14726 = Sin(var1[4]);
  t14727 = Sin(var1[7]);
  t14730 = Cos(var1[8]);
  t14737 = t14716*t14724;
  t14886 = -1.*t14726*t14727;
  t14908 = t14737 + t14886;
  t14911 = t14716*t14726;
  t14913 = t14724*t14727;
  t14914 = t14911 + t14913;
  t14915 = Sin(var1[8]);
  t14677 = -0.15121*t14655;
  t14678 = t14653 + t14677;
  t14939 = Sin(var1[3]);
  t14934 = Cos(var1[3]);
  t14698 = 0.15121*t14655;
  t14699 = t14653 + t14698;
  t14935 = t14934*t14689;
  t14940 = -1.*t14939*t14726*t14009;
  t14948 = t14935 + t14940;
  t15002 = t14689*t14939*t14726;
  t15032 = t14934*t14009;
  t15037 = t15002 + t15032;
  t14718 = -1.*t14716;
  t14720 = 1. + t14718;
  t14731 = -1.*t14730;
  t14736 = 1. + t14731;
  t15120 = t14107*t15037;
  t15121 = t14948*t14655;
  t15122 = t15120 + t15121;
  t15129 = t14716*t15122;
  t15130 = t5744*t14939*t14727;
  t15131 = t15129 + t15130;
  t15133 = -1.*t5744*t14716*t14939;
  t15134 = t15122*t14727;
  t15135 = t15133 + t15134;
  t15156 = t14689*t14939;
  t15157 = t14934*t14726*t14009;
  t15165 = t15156 + t15157;
  t15168 = -1.*t14934*t14689*t14726;
  t15188 = t14939*t14009;
  t15189 = t15168 + t15188;
  t15198 = t14107*t15189;
  t15199 = t15165*t14655;
  t15200 = t15198 + t15199;
  t15204 = t14716*t15200;
  t15205 = -1.*t14934*t5744*t14727;
  t15206 = t15204 + t15205;
  t15209 = t14934*t5744*t14716;
  t15211 = t15200*t14727;
  t15212 = t15209 + t15211;
  p_output1[0]=0.28121*t14720*t14724 + 0.28121*t14726*t14727 + 0.50321*t14736*t14908 - 0.50321*t14914*t14915 + 0.19821*(t14730*t14908 + t14914*t14915) - 1.*t14009*t14678*t5744 + t14689*t14699*t5744 + 0.15121*(-1.*t14009*t14107*t5744 - 1.*t14655*t14689*t5744) + var1[0] - 1.*var2[0];
  p_output1[1]=t14678*t14948 + t14699*t15037 + 0.15121*(t14107*t14948 - 1.*t14655*t15037) + 0.28121*t14720*t15122 + 0.50321*t14736*t15131 - 0.50321*t14915*t15135 + 0.19821*(t14730*t15131 + t14915*t15135) - 0.28121*t14727*t14939*t5744 + var1[1] - 1.*var2[1];
  p_output1[2]=t14678*t15165 + t14699*t15189 + 0.15121*(t14107*t15165 - 1.*t14655*t15189) + 0.28121*t14720*t15200 + 0.50321*t14736*t15206 - 0.50321*t14915*t15212 + 0.19821*(t14730*t15206 + t14915*t15212) + 0.28121*t14727*t14934*t5744 + var1[2] - 1.*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "h_FlFoot_DiagonalStance2.hh"

namespace SymFunction
{

void h_FlFoot_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
