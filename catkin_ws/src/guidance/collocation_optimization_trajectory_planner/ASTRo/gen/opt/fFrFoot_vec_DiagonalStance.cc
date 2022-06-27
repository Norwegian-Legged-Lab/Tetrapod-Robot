/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 14:35:11 GMT+02:00
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
  double t495;
  double t2463;
  double t773;
  double t3148;
  double t3205;
  double t3123;
  double t3242;
  double t1713;
  double t5902;
  double t5905;
  double t5975;
  double t2465;
  double t5030;
  double t3192;
  double t3413;
  double t3719;
  double t1727;
  double t2807;
  double t2862;
  double t6061;
  double t6056;
  double t5984;
  double t6007;
  double t6011;
  double t6019;
  double t6020;
  double t6029;
  double t6038;
  double t6040;
  double t6041;
  double t6067;
  double t6069;
  double t6070;
  double t6083;
  double t6084;
  double t6086;
  double t6089;
  double t6090;
  double t6098;
  double t6113;
  double t6139;
  double t6144;
  double t6154;
  double t6186;
  double t6944;
  double t5901;
  double t6014;
  double t6015;
  double t7912;
  double t7913;
  double t7943;
  double t7945;
  double t7947;
  double t7948;
  double t7951;
  double t7952;
  double t7962;
  double t7968;
  double t7979;
  double t7981;
  double t8009;
  double t8083;
  double t8085;
  double t8090;
  double t7914;
  double t7923;
  double t7931;
  double t8018;
  double t8020;
  double t8217;
  double t8221;
  double t8265;
  double t8343;
  double t8369;
  double t8372;
  double t8379;
  double t8026;
  double t8099;
  double t8102;
  double t8368;
  double t8459;
  double t8583;
  double t8664;
  double t8744;
  double t8819;
  double t6036;
  double t6044;
  double t6051;
  double t8118;
  double t8998;
  double t9391;
  double t9530;
  double t9794;
  double t11390;
  double t22575;
  double t22596;
  t495 = Cos(var1[4]);
  t2463 = Cos(var1[12]);
  t773 = Cos(var1[5]);
  t3148 = Cos(var1[14]);
  t3205 = Sin(var1[13]);
  t3123 = Cos(var1[13]);
  t3242 = Sin(var1[14]);
  t1713 = Sin(var1[12]);
  t5902 = t3148*t3205;
  t5905 = -1.*t3123*t3242;
  t5975 = t5902 + t5905;
  t2465 = Sin(var1[5]);
  t5030 = Sin(var1[4]);
  t3192 = t3123*t3148;
  t3413 = t3205*t3242;
  t3719 = t3192 + t3413;
  t1727 = -1.*t773*t1713;
  t2807 = -1.*t2463*t2465;
  t2862 = t1727 + t2807;
  t6061 = Cos(var1[3]);
  t6056 = Sin(var1[3]);
  t5984 = t2463*t773*t5975;
  t6007 = -1.*t1713*t5975*t2465;
  t6011 = t5984 + t6007;
  t6019 = -1.*t3148*t3205;
  t6020 = t3123*t3242;
  t6029 = t6019 + t6020;
  t6038 = t2463*t773*t3719;
  t6040 = -1.*t1713*t3719*t2465;
  t6041 = t6038 + t6040;
  t6067 = t2463*t773;
  t6069 = -1.*t1713*t2465;
  t6070 = t6067 + t6069;
  t6083 = t773*t1713*t5975;
  t6084 = t2463*t5975*t2465;
  t6086 = t6083 + t6084;
  t6089 = t495*t3719;
  t6090 = -1.*t5030*t6011;
  t6098 = t6089 + t6090;
  t6113 = t773*t1713*t3719;
  t6139 = t2463*t3719*t2465;
  t6144 = t6113 + t6139;
  t6154 = t495*t6029;
  t6186 = -1.*t5030*t6041;
  t6944 = t6154 + t6186;
  t5901 = t3719*t5030;
  t6014 = t495*t6011;
  t6015 = t5901 + t6014;
  t7912 = -1.*t2463;
  t7913 = 1. + t7912;
  t7943 = -1.*t3123;
  t7945 = 1. + t7943;
  t7947 = 0.28121*t7945;
  t7948 = -1.*t3148;
  t7951 = 1. + t7948;
  t7952 = 0.50321*t7951;
  t7962 = 0.19821*t3148;
  t7968 = t7952 + t7962;
  t7979 = t3123*t7968;
  t7981 = -0.305*t3205*t3242;
  t8009 = t7947 + t7979 + t7981;
  t8083 = 0.15121*t7913;
  t8085 = t2463*t8009;
  t8090 = t8083 + t8085;
  t7914 = -0.15121*t7913;
  t7923 = -0.15121*t2463;
  t7931 = -0.15121*t1713;
  t8018 = t1713*t8009;
  t8020 = t7914 + t7923 + t7931 + t8018;
  t8217 = 0.28121*t3205;
  t8221 = -1.*t7968*t3205;
  t8265 = -0.305*t3123*t3242;
  t8343 = t8217 + t8221 + t8265;
  t8369 = t773*t8090;
  t8372 = -1.*t8020*t2465;
  t8379 = t8369 + t8372;
  t8026 = t773*t8020;
  t8099 = t8090*t2465;
  t8102 = t8026 + t8099;
  t8368 = t8343*t5030;
  t8459 = t495*t8379;
  t8583 = t8368 + t8459;
  t8664 = t495*t8343;
  t8744 = -1.*t5030*t8379;
  t8819 = t8664 + t8744;
  t6036 = t6029*t5030;
  t6044 = t495*t6041;
  t6051 = t6036 + t6044;
  t8118 = -1.*t6070*t8102;
  t8998 = t6086*t8102;
  t9391 = t6070*t8102;
  t9530 = -1.*t6144*t8102;
  t9794 = -1.*t6086*t8102;
  t11390 = t6144*t8102;
  t22575 = -1.*t8343*t3719;
  t22596 = t8343*t6029;
  p_output1[0]=t6051*var2[0] + t2862*t495*var2[1] + t6015*var2[2];
  p_output1[1]=(t6061*t6144 - 1.*t6056*t6944)*var2[0] + (t2862*t5030*t6056 + t6061*t6070)*var2[1] + (t6061*t6086 - 1.*t6056*t6098)*var2[2];
  p_output1[2]=(t6056*t6144 + t6061*t6944)*var2[0] + (-1.*t2862*t5030*t6061 + t6056*t6070)*var2[1] + (t6056*t6086 + t6061*t6098)*var2[2];
  p_output1[3]=(t6015*(t8118 - 1.*t2862*t495*t8583 + t2862*t5030*t8819) + t2862*t495*(t6015*t8583 + t6098*t8819 + t8998))*var2[0] + (t6015*(t11390 + t6051*t8583 + t6944*t8819) + t6051*(-1.*t6015*t8583 - 1.*t6098*t8819 + t9794))*var2[1] + (t6051*(t2862*t495*t8583 - 1.*t2862*t5030*t8819 + t9391) + t2862*t495*(-1.*t6051*t8583 - 1.*t6944*t8819 + t9530))*var2[2];
  p_output1[4]=(t6086*(t8118 - 1.*t2862*t8379) + t6070*(t3719*t8343 + t6011*t8379 + t8998))*var2[0] + (t6086*(t11390 + t22596 + t6041*t8379) + t6144*(t22575 - 1.*t6011*t8379 + t9794))*var2[1] + (t6144*(t2862*t8379 + t9391) + t6070*(-1.*t6029*t8343 - 1.*t6041*t8379 + t9530))*var2[2];
  p_output1[5]=t3719*(-1.*t2463*t8020 + t1713*t8090)*var2[0] + (t3719*(t22596 + t1713*t3719*t8020 + t2463*t3719*t8090) + t6029*(t22575 - 1.*t1713*t5975*t8020 - 1.*t2463*t5975*t8090))*var2[1] + t6029*(t2463*t8020 - 1.*t1713*t8090)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-0.15121 + t3719*(t22596 + t3719*t8009) + t6029*(t22575 - 1.*t5975*t8009))*var2[1] + (-0.15121*t5975 - 0.15121*t6029)*var2[2];
  p_output1[13]=(0.28121*t3242 - 0.305*t3148*t3242 - 1.*t3242*t7968)*var2[0] + (0.28121*t3148 + 0.305*Power(t3242,2) - 1.*t3148*t7968)*var2[2];
  p_output1[14]=-0.305*var2[2];
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

#include "fFrFoot_vec_DiagonalStance.hh"

namespace DiagonalStance
{

void fFrFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
