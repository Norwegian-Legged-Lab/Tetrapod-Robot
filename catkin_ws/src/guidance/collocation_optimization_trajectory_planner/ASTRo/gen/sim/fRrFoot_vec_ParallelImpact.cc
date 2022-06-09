/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:38:20 GMT+02:00
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
  double t3673;
  double t4768;
  double t3741;
  double t17906;
  double t17913;
  double t17905;
  double t17914;
  double t4745;
  double t17928;
  double t17933;
  double t17938;
  double t5119;
  double t17925;
  double t17947;
  double t17948;
  double t17949;
  double t4767;
  double t14004;
  double t14081;
  double t18007;
  double t18005;
  double t17908;
  double t17915;
  double t17920;
  double t17939;
  double t17941;
  double t17942;
  double t17950;
  double t17951;
  double t17952;
  double t18011;
  double t18012;
  double t18014;
  double t18022;
  double t18026;
  double t18028;
  double t18033;
  double t18034;
  double t18035;
  double t18043;
  double t18044;
  double t18045;
  double t18048;
  double t18049;
  double t18051;
  double t17927;
  double t17943;
  double t17944;
  double t18072;
  double t18073;
  double t18074;
  double t18078;
  double t18079;
  double t18080;
  double t18082;
  double t18083;
  double t18084;
  double t18085;
  double t18086;
  double t18087;
  double t18089;
  double t18090;
  double t18094;
  double t18095;
  double t18075;
  double t18076;
  double t18091;
  double t18092;
  double t18099;
  double t18100;
  double t18101;
  double t18103;
  double t18105;
  double t18106;
  double t18108;
  double t18093;
  double t18096;
  double t18097;
  double t18104;
  double t18109;
  double t18110;
  double t18112;
  double t18113;
  double t18114;
  double t17946;
  double t17953;
  double t17954;
  double t18098;
  double t18118;
  double t18125;
  double t18131;
  double t18138;
  double t18143;
  double t18169;
  double t18173;
  t3673 = Cos(var1[4]);
  t4768 = Cos(var1[15]);
  t3741 = Cos(var1[5]);
  t17906 = Cos(var1[17]);
  t17913 = Sin(var1[16]);
  t17905 = Cos(var1[16]);
  t17914 = Sin(var1[17]);
  t4745 = Sin(var1[15]);
  t17928 = -1.*t17906*t17913;
  t17933 = t17905*t17914;
  t17938 = t17928 + t17933;
  t5119 = Sin(var1[5]);
  t17925 = Sin(var1[4]);
  t17947 = -1.*t17905*t17906;
  t17948 = -1.*t17913*t17914;
  t17949 = t17947 + t17948;
  t4767 = t3741*t4745;
  t14004 = t4768*t5119;
  t14081 = t4767 + t14004;
  t18007 = Cos(var1[3]);
  t18005 = Sin(var1[3]);
  t17908 = t17905*t17906;
  t17915 = t17913*t17914;
  t17920 = t17908 + t17915;
  t17939 = t4768*t3741*t17938;
  t17941 = -1.*t4745*t17938*t5119;
  t17942 = t17939 + t17941;
  t17950 = t4768*t3741*t17949;
  t17951 = -1.*t4745*t17949*t5119;
  t17952 = t17950 + t17951;
  t18011 = -1.*t4768*t3741;
  t18012 = t4745*t5119;
  t18014 = t18011 + t18012;
  t18022 = t3741*t4745*t17938;
  t18026 = t4768*t17938*t5119;
  t18028 = t18022 + t18026;
  t18033 = t3673*t17920;
  t18034 = -1.*t17925*t17942;
  t18035 = t18033 + t18034;
  t18043 = t3741*t4745*t17949;
  t18044 = t4768*t17949*t5119;
  t18045 = t18043 + t18044;
  t18048 = t3673*t17938;
  t18049 = -1.*t17925*t17952;
  t18051 = t18048 + t18049;
  t17927 = t17920*t17925;
  t17943 = t3673*t17942;
  t17944 = t17927 + t17943;
  t18072 = -1.*t4768;
  t18073 = 1. + t18072;
  t18074 = -0.15121*t18073;
  t18078 = -1.*t17905;
  t18079 = 1. + t18078;
  t18080 = -0.28121*t18079;
  t18082 = -1.*t17906;
  t18083 = 1. + t18082;
  t18084 = -0.50321*t18083;
  t18085 = -0.19821*t17906;
  t18086 = t18084 + t18085;
  t18087 = t17905*t18086;
  t18089 = 0.305*t17913*t17914;
  t18090 = t18080 + t18087 + t18089;
  t18094 = t4768*t18090;
  t18095 = t18074 + t18094;
  t18075 = -0.15121*t4768;
  t18076 = 0.15121*t4745;
  t18091 = t4745*t18090;
  t18092 = t18074 + t18075 + t18076 + t18091;
  t18099 = 0.28121*t17913;
  t18100 = t18086*t17913;
  t18101 = -0.305*t17905*t17914;
  t18103 = t18099 + t18100 + t18101;
  t18105 = t3741*t18095;
  t18106 = -1.*t18092*t5119;
  t18108 = t18105 + t18106;
  t18093 = t3741*t18092;
  t18096 = t18095*t5119;
  t18097 = t18093 + t18096;
  t18104 = t18103*t17925;
  t18109 = t3673*t18108;
  t18110 = t18104 + t18109;
  t18112 = t3673*t18103;
  t18113 = -1.*t17925*t18108;
  t18114 = t18112 + t18113;
  t17946 = t17938*t17925;
  t17953 = t3673*t17952;
  t17954 = t17946 + t17953;
  t18098 = -1.*t18014*t18097;
  t18118 = t18028*t18097;
  t18125 = t18014*t18097;
  t18131 = -1.*t18045*t18097;
  t18138 = -1.*t18028*t18097;
  t18143 = t18045*t18097;
  t18169 = -1.*t18103*t17920;
  t18173 = t18103*t17938;
  p_output1[0]=t17954*var2[0] + t14081*t3673*var2[1] + t17944*var2[2];
  p_output1[1]=(t18007*t18045 - 1.*t18005*t18051)*var2[0] + (t14081*t17925*t18005 + t18007*t18014)*var2[1] + (t18007*t18028 - 1.*t18005*t18035)*var2[2];
  p_output1[2]=(t18005*t18045 + t18007*t18051)*var2[0] + (-1.*t14081*t17925*t18007 + t18005*t18014)*var2[1] + (t18005*t18028 + t18007*t18035)*var2[2];
  p_output1[3]=(t14081*(t17944*t18110 + t18035*t18114 + t18118)*t3673 + t17944*(t18098 + t14081*t17925*t18114 - 1.*t14081*t18110*t3673))*var2[0] + (t17954*(-1.*t17944*t18110 - 1.*t18035*t18114 + t18138) + t17944*(t17954*t18110 + t18051*t18114 + t18143))*var2[1] + (t14081*(-1.*t17954*t18110 - 1.*t18051*t18114 + t18131)*t3673 + t17954*(-1.*t14081*t17925*t18114 + t18125 + t14081*t18110*t3673))*var2[2];
  p_output1[4]=(t18028*(t18098 - 1.*t14081*t18108) + t18014*(t17920*t18103 + t17942*t18108 + t18118))*var2[0] + (t18045*(-1.*t17942*t18108 + t18138 + t18169) + t18028*(t17952*t18108 + t18143 + t18173))*var2[1] + (t18045*(t14081*t18108 + t18125) + t18014*(-1.*t17938*t18103 - 1.*t17952*t18108 + t18131))*var2[2];
  p_output1[5]=t17920*(-1.*t18095*t4745 + t18092*t4768)*var2[0] + (t17938*(t18169 - 1.*t17938*t18092*t4745 - 1.*t17938*t18095*t4768) + t17920*(t18173 + t17949*t18092*t4745 + t17949*t18095*t4768))*var2[1] + t17938*(t18095*t4745 - 1.*t18092*t4768)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(-0.15121*t17920 - 0.15121*t17949)*var2[0] + (-0.15121 + t17938*(-1.*t17938*t18090 + t18169) + t17920*(t17949*t18090 + t18173))*var2[1];
  p_output1[16]=(0.28121*t17914 - 0.305*t17906*t17914 + t17914*t18086)*var2[0] + (0.28121*t17906 + 0.305*Power(t17914,2) + t17906*t18086)*var2[2];
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
