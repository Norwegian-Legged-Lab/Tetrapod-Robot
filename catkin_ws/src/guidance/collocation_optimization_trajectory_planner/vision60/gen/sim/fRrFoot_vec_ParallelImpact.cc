/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:25:41 GMT+02:00
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
  double t25776;
  double t2441;
  double t25789;
  double t25811;
  double t25800;
  double t25805;
  double t25812;
  double t551;
  double t25809;
  double t25819;
  double t25824;
  double t25790;
  double t25828;
  double t25829;
  double t25830;
  double t25827;
  double t25897;
  double t25899;
  double t25832;
  double t25833;
  double t25835;
  double t25841;
  double t25842;
  double t25843;
  double t25844;
  double t25887;
  double t25891;
  double t25900;
  double t25902;
  double t25903;
  double t25908;
  double t25909;
  double t25910;
  double t25912;
  double t25914;
  double t25915;
  double t25920;
  double t25921;
  double t25922;
  double t25924;
  double t25925;
  double t25927;
  double t25825;
  double t25836;
  double t25838;
  double t25955;
  double t25956;
  double t25957;
  double t25959;
  double t25960;
  double t25961;
  double t25962;
  double t25963;
  double t25964;
  double t25640;
  double t25792;
  double t25797;
  double t25954;
  double t25958;
  double t25965;
  double t25966;
  double t25970;
  double t25971;
  double t25972;
  double t25973;
  double t25974;
  double t25976;
  double t25949;
  double t25951;
  double t25952;
  double t25953;
  double t25967;
  double t25968;
  double t25981;
  double t25982;
  double t25983;
  double t25985;
  double t25986;
  double t25987;
  double t25969;
  double t25977;
  double t25978;
  double t25984;
  double t25988;
  double t25989;
  double t25991;
  double t25992;
  double t25993;
  double t25840;
  double t25892;
  double t25893;
  double t25979;
  double t25997;
  double t26004;
  double t26009;
  double t26016;
  double t26021;
  double t26049;
  double t26053;
  double t26029;
  double t26033;
  double t26043;
  double t26039;
  double t26083;
  double t26078;
  t25776 = Cos(var1[15]);
  t2441 = Sin(var1[4]);
  t25789 = Cos(var1[4]);
  t25811 = Cos(var1[16]);
  t25800 = Cos(var1[17]);
  t25805 = Sin(var1[16]);
  t25812 = Sin(var1[17]);
  t551 = Sin(var1[15]);
  t25809 = t25800*t25805;
  t25819 = -1.*t25811*t25812;
  t25824 = t25809 + t25819;
  t25790 = Sin(var1[5]);
  t25828 = t25811*t25800;
  t25829 = t25805*t25812;
  t25830 = t25828 + t25829;
  t25827 = Cos(var1[5]);
  t25897 = Cos(var1[3]);
  t25899 = Sin(var1[3]);
  t25832 = t25827*t25830;
  t25833 = t551*t25824*t25790;
  t25835 = t25832 + t25833;
  t25841 = -1.*t25800*t25805;
  t25842 = t25811*t25812;
  t25843 = t25841 + t25842;
  t25844 = t25827*t25843;
  t25887 = t551*t25830*t25790;
  t25891 = t25844 + t25887;
  t25900 = t25789*t551;
  t25902 = t25776*t2441*t25790;
  t25903 = t25900 + t25902;
  t25908 = -1.*t25827*t551*t25824;
  t25909 = t25830*t25790;
  t25910 = t25908 + t25909;
  t25912 = t25776*t25789*t25824;
  t25914 = -1.*t2441*t25835;
  t25915 = t25912 + t25914;
  t25920 = -1.*t25827*t551*t25830;
  t25921 = t25843*t25790;
  t25922 = t25920 + t25921;
  t25924 = t25776*t25789*t25830;
  t25925 = -1.*t2441*t25891;
  t25927 = t25924 + t25925;
  t25825 = t25776*t25824*t2441;
  t25836 = t25789*t25835;
  t25838 = t25825 + t25836;
  t25955 = -0.0641*t25800;
  t25956 = -0.28*t25812;
  t25957 = t25955 + t25956;
  t25959 = -1.*t25800;
  t25960 = 1. + t25959;
  t25961 = -0.575*t25960;
  t25962 = -0.295*t25800;
  t25963 = -0.0641*t25812;
  t25964 = t25961 + t25962 + t25963;
  t25640 = t551*t2441;
  t25792 = -1.*t25776*t25789*t25790;
  t25797 = t25640 + t25792;
  t25954 = 0.325*t25805;
  t25958 = t25811*t25957;
  t25965 = t25805*t25964;
  t25966 = t25954 + t25958 + t25965;
  t25970 = -1.*t25811;
  t25971 = 1. + t25970;
  t25972 = -0.325*t25971;
  t25973 = -1.*t25805*t25957;
  t25974 = t25811*t25964;
  t25976 = t25972 + t25973 + t25974;
  t25949 = -1.*t25776;
  t25951 = 1. + t25949;
  t25952 = -0.1575*t25951;
  t25953 = -0.2255*t25776;
  t25967 = -1.*t551*t25966;
  t25968 = t25952 + t25953 + t25967;
  t25981 = -0.068*t551;
  t25982 = t25776*t25966;
  t25983 = t25981 + t25982;
  t25985 = t25827*t25976;
  t25986 = -1.*t25968*t25790;
  t25987 = t25985 + t25986;
  t25969 = t25827*t25968;
  t25977 = t25976*t25790;
  t25978 = t25969 + t25977;
  t25984 = t25983*t2441;
  t25988 = t25789*t25987;
  t25989 = t25984 + t25988;
  t25991 = t25789*t25983;
  t25992 = -1.*t2441*t25987;
  t25993 = t25991 + t25992;
  t25840 = t25776*t25830*t2441;
  t25892 = t25789*t25891;
  t25893 = t25840 + t25892;
  t25979 = t25776*t25827*t25978;
  t25997 = -1.*t25978*t25910;
  t26004 = t25978*t25910;
  t26009 = -1.*t25978*t25922;
  t26016 = -1.*t25776*t25827*t25978;
  t26021 = t25978*t25922;
  t26049 = -1.*t551*t25983;
  t26053 = t25776*t25983*t25830;
  t26029 = t551*t25983;
  t26033 = -1.*t25776*t25983*t25824;
  t26043 = -1.*t25776*t25983*t25830;
  t26039 = t25776*t25983*t25824;
  t26083 = t25976*t25830;
  t26078 = -1.*t25976*t25843;
  p_output1[0]=t25838*var2[0] + t25797*var2[1] + t25893*var2[2];
  p_output1[1]=(t25897*t25910 - 1.*t25899*t25915)*var2[0] + (t25776*t25827*t25897 - 1.*t25899*t25903)*var2[1] + (t25897*t25922 - 1.*t25899*t25927)*var2[2];
  p_output1[2]=(t25899*t25910 + t25897*t25915)*var2[0] + (t25776*t25827*t25899 + t25897*t25903)*var2[1] + (t25899*t25922 + t25897*t25927)*var2[2];
  p_output1[3]=(t25893*(-1.*t25797*t25989 - 1.*t25903*t25993 + t26016) + t25797*(t25893*t25989 + t25927*t25993 + t26021))*var2[0] + (t25893*(t25838*t25989 + t25915*t25993 + t26004) + t25838*(-1.*t25893*t25989 - 1.*t25927*t25993 + t26009))*var2[1] + (t25838*(t25979 + t25797*t25989 + t25903*t25993) + t25797*(-1.*t25838*t25989 - 1.*t25915*t25993 + t25997))*var2[2];
  p_output1[4]=(t25922*(t25776*t25790*t25987 + t26016 + t26049) + t25776*t25827*(t25891*t25987 + t26021 + t26053))*var2[0] + (t25922*(t25835*t25987 + t26004 + t26039) + t25910*(-1.*t25891*t25987 + t26009 + t26043))*var2[1] + (t25910*(t25979 - 1.*t25776*t25790*t25987 + t26029) + t25776*t25827*(-1.*t25835*t25987 + t25997 + t26033))*var2[2];
  p_output1[5]=(t25776*t25830*(-1.*t25776*t25968 + t26049) + t551*(t25843*t25976 + t26053 - 1.*t25830*t25968*t551))*var2[0] + (t25776*t25830*(t26039 + t26083 - 1.*t25824*t25968*t551) + t25776*t25824*(t26043 + t26078 + t25830*t25968*t551))*var2[1] + (t25776*t25824*(t25776*t25968 + t26029) + t551*(-1.*t25830*t25976 + t26033 + t25824*t25968*t551))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(0.1575*t25824 + 0.2255*t25843)*var2[0] + (t25830*(-1.*t25830*t25966 + t26078) + t25843*(t25824*t25966 + t26083))*var2[1] - 0.068*t25830*var2[2];
  p_output1[16]=(-0.325*t25812 - 1.*t25800*t25957 - 1.*t25812*t25964)*var2[0] + (0.325*t25800 - 1.*t25812*t25957 + t25800*t25964)*var2[2];
  p_output1[17]=-0.0641*var2[0] - 0.28*var2[2];
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
