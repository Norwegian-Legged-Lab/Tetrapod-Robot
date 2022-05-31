/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 18:51:35 GMT+02:00
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
static void output1(double *p_output1,const double *var1)
{
  double t16640;
  double t11500;
  double t15836;
  double t16666;
  double t16839;
  double t16850;
  double t16855;
  double t16838;
  double t16859;
  double t16836;
  double t16862;
  double t16831;
  double t16631;
  double t16672;
  double t16673;
  double t16677;
  double t16856;
  double t16863;
  double t16869;
  double t16903;
  double t16888;
  double t16893;
  double t16900;
  double t16884;
  double t16907;
  double t16914;
  double t16916;
  double t16972;
  double t16973;
  double t16975;
  double t16981;
  double t16987;
  double t16988;
  double t16989;
  double t16990;
  double t16991;
  double t16992;
  double t16995;
  double t16997;
  double t16999;
  double t17001;
  double t17011;
  double t17012;
  double t16976;
  double t16977;
  double t17002;
  double t17003;
  double t17018;
  double t17022;
  double t17023;
  double t17024;
  double t17030;
  double t17031;
  double t17032;
  double t17048;
  double t17049;
  double t17050;
  double t17004;
  double t17013;
  double t17016;
  double t16930;
  double t16952;
  double t16953;
  double t16960;
  double t16961;
  double t16963;
  double t16965;
  double t16966;
  double t16967;
  double t17047;
  double t17054;
  double t17055;
  double t17071;
  double t17075;
  double t17076;
  double t17098;
  double t17101;
  double t17102;
  double t16969;
  double t16970;
  double t16971;
  double t17017;
  double t17105;
  double t16680;
  double t16872;
  double t16875;
  double t17111;
  double t17112;
  double t17113;
  double t17200;
  double t17210;
  double t17227;
  double t17243;
  double t17309;
  double t17318;
  t16640 = Cos(var1[16]);
  t11500 = Cos(var1[17]);
  t15836 = Sin(var1[16]);
  t16666 = Sin(var1[17]);
  t16839 = -1.*t16640*t11500;
  t16850 = -1.*t15836*t16666;
  t16855 = t16839 + t16850;
  t16838 = Cos(var1[5]);
  t16859 = Sin(var1[15]);
  t16836 = Cos(var1[15]);
  t16862 = Sin(var1[5]);
  t16831 = Cos(var1[4]);
  t16631 = -1.*t11500*t15836;
  t16672 = t16640*t16666;
  t16673 = t16631 + t16672;
  t16677 = Sin(var1[4]);
  t16856 = t16836*t16838*t16855;
  t16863 = -1.*t16859*t16855*t16862;
  t16869 = t16856 + t16863;
  t16903 = Sin(var1[3]);
  t16888 = t16838*t16859*t16855;
  t16893 = t16836*t16855*t16862;
  t16900 = t16888 + t16893;
  t16884 = Cos(var1[3]);
  t16907 = t16831*t16673;
  t16914 = -1.*t16677*t16869;
  t16916 = t16907 + t16914;
  t16972 = -1.*t16836;
  t16973 = 1. + t16972;
  t16975 = -0.15121*t16973;
  t16981 = -1.*t16640;
  t16987 = 1. + t16981;
  t16988 = -0.28121*t16987;
  t16989 = -1.*t11500;
  t16990 = 1. + t16989;
  t16991 = -0.50321*t16990;
  t16992 = -0.19821*t11500;
  t16995 = t16991 + t16992;
  t16997 = t16640*t16995;
  t16999 = 0.305*t15836*t16666;
  t17001 = t16988 + t16997 + t16999;
  t17011 = t16836*t17001;
  t17012 = t16975 + t17011;
  t16976 = -0.15121*t16836;
  t16977 = 0.15121*t16859;
  t17002 = t16859*t17001;
  t17003 = t16975 + t16976 + t16977 + t17002;
  t17018 = t16838*t16859;
  t17022 = t16836*t16862;
  t17023 = t17018 + t17022;
  t17024 = 0.28121*t15836;
  t17030 = t16995*t15836;
  t17031 = -0.305*t16640*t16666;
  t17032 = t17024 + t17030 + t17031;
  t17048 = t16838*t17012;
  t17049 = -1.*t17003*t16862;
  t17050 = t17048 + t17049;
  t17004 = t16838*t17003;
  t17013 = t17012*t16862;
  t17016 = t17004 + t17013;
  t16930 = t16640*t11500;
  t16952 = t15836*t16666;
  t16953 = t16930 + t16952;
  t16960 = t16953*t16677;
  t16961 = t16836*t16838*t16673;
  t16963 = -1.*t16859*t16673*t16862;
  t16965 = t16961 + t16963;
  t16966 = t16831*t16965;
  t16967 = t16960 + t16966;
  t17047 = t17032*t16677;
  t17054 = t16831*t17050;
  t17055 = t17047 + t17054;
  t17071 = t16831*t17032;
  t17075 = -1.*t16677*t17050;
  t17076 = t17071 + t17075;
  t17098 = t16838*t16859*t16673;
  t17101 = t16836*t16673*t16862;
  t17102 = t17098 + t17101;
  t16969 = -1.*t16836*t16838;
  t16970 = t16859*t16862;
  t16971 = t16969 + t16970;
  t17017 = -1.*t16971*t17016;
  t17105 = t17102*t17016;
  t16680 = t16673*t16677;
  t16872 = t16831*t16869;
  t16875 = t16680 + t16872;
  t17111 = t16831*t16953;
  t17112 = -1.*t16677*t16965;
  t17113 = t17111 + t17112;
  t17200 = -1.*t17102*t17016;
  t17210 = t16900*t17016;
  t17227 = -1.*t17032*t16953;
  t17243 = t17032*t16673;
  t17309 = t16971*t17016;
  t17318 = -1.*t16900*t17016;
  p_output1[0]=t16875;
  p_output1[1]=t16884*t16900 - 1.*t16903*t16916;
  p_output1[2]=t16900*t16903 + t16884*t16916;
  p_output1[3]=t16967*(t17017 - 1.*t16831*t17023*t17055 + t16677*t17023*t17076) + t16831*t17023*(t16967*t17055 + t17105 + t17076*t17113);
  p_output1[4]=(t17017 - 1.*t17023*t17050)*t17102 + t16971*(t16953*t17032 + t16965*t17050 + t17105);
  p_output1[5]=t16953*(t16836*t17003 - 1.*t16859*t17012);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=-0.15121*t16855 - 0.15121*t16953;
  p_output1[16]=0.28121*t16666 - 0.305*t11500*t16666 + t16666*t16995;
  p_output1[17]=0;
  p_output1[18]=t16831*t17023;
  p_output1[19]=t16884*t16971 + t16677*t16903*t17023;
  p_output1[20]=t16903*t16971 - 1.*t16677*t16884*t17023;
  p_output1[21]=t16875*(-1.*t16967*t17055 - 1.*t17076*t17113 + t17200) + t16967*(t16875*t17055 + t16916*t17076 + t17210);
  p_output1[22]=t16900*(-1.*t16965*t17050 + t17200 + t17227) + t17102*(t16869*t17050 + t17210 + t17243);
  p_output1[23]=t16673*(-1.*t16673*t16859*t17003 - 1.*t16673*t16836*t17012 + t17227) + t16953*(t16855*t16859*t17003 + t16836*t16855*t17012 + t17243);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=-0.15121 + t16673*(-1.*t16673*t17001 + t17227) + t16953*(t16855*t17001 + t17243);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t16967;
  p_output1[37]=t16884*t17102 - 1.*t16903*t17113;
  p_output1[38]=t16903*t17102 + t16884*t17113;
  p_output1[39]=t16875*(t16831*t17023*t17055 - 1.*t16677*t17023*t17076 + t17309) + t16831*t17023*(-1.*t16875*t17055 - 1.*t16916*t17076 + t17318);
  p_output1[40]=t16900*(t17023*t17050 + t17309) + t16971*(-1.*t16673*t17032 - 1.*t16869*t17050 + t17318);
  p_output1[41]=t16673*(-1.*t16836*t17003 + t16859*t17012);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0.28121*t11500 + 0.305*Power(t16666,2) + t11500*t16995;
  p_output1[53]=-0.305;
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fRrFoot_map_ParallelStance.hh"

namespace SymFunction
{

void fRrFoot_map_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
