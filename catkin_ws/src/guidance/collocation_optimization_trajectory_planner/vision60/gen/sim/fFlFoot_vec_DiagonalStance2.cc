/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:25:18 GMT+02:00
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
  double t23505;
  double t23530;
  double t20646;
  double t23519;
  double t23531;
  double t23786;
  double t23792;
  double t23800;
  double t23814;
  double t23823;
  double t23827;
  double t23835;
  double t23855;
  double t23857;
  double t23861;
  double t23852;
  double t23884;
  double t23886;
  double t23850;
  double t23862;
  double t23863;
  double t23870;
  double t23873;
  double t23874;
  double t23875;
  double t23876;
  double t23877;
  double t23887;
  double t23888;
  double t23889;
  double t23897;
  double t23900;
  double t23902;
  double t23907;
  double t23911;
  double t23914;
  double t23921;
  double t23922;
  double t23923;
  double t23926;
  double t23927;
  double t23928;
  double t23965;
  double t23969;
  double t23977;
  double t23986;
  double t23987;
  double t23989;
  double t23990;
  double t23994;
  double t23998;
  double t23964;
  double t23981;
  double t23999;
  double t24000;
  double t23529;
  double t23532;
  double t23760;
  double t23953;
  double t23955;
  double t23956;
  double t23959;
  double t24001;
  double t24002;
  double t24003;
  double t24004;
  double t24005;
  double t24009;
  double t24014;
  double t24015;
  double t24019;
  double t24023;
  double t24031;
  double t24036;
  double t24039;
  double t24040;
  double t23846;
  double t23865;
  double t23867;
  double t24059;
  double t24063;
  double t24064;
  double t24050;
  double t24052;
  double t24054;
  double t24035;
  double t24041;
  double t24045;
  double t23869;
  double t23880;
  double t23881;
  double t24065;
  double t24068;
  double t24082;
  double t24089;
  double t24115;
  double t24121;
  double t24164;
  double t24168;
  double t24135;
  double t24141;
  double t24156;
  double t24152;
  double t24204;
  double t24197;
  t23505 = Cos(var1[6]);
  t23530 = Sin(var1[4]);
  t20646 = Cos(var1[4]);
  t23519 = Sin(var1[5]);
  t23531 = Sin(var1[6]);
  t23786 = Cos(var1[8]);
  t23792 = Sin(var1[7]);
  t23800 = t23786*t23792;
  t23814 = Cos(var1[7]);
  t23823 = Sin(var1[8]);
  t23827 = -1.*t23814*t23823;
  t23835 = t23800 + t23827;
  t23855 = t23814*t23786;
  t23857 = t23792*t23823;
  t23861 = t23855 + t23857;
  t23852 = Cos(var1[5]);
  t23884 = Cos(var1[3]);
  t23886 = Sin(var1[3]);
  t23850 = t23519*t23531*t23835;
  t23862 = t23852*t23861;
  t23863 = t23850 + t23862;
  t23870 = -1.*t23786*t23792;
  t23873 = t23814*t23823;
  t23874 = t23870 + t23873;
  t23875 = t23852*t23874;
  t23876 = t23519*t23531*t23861;
  t23877 = t23875 + t23876;
  t23887 = t23505*t23530*t23519;
  t23888 = t20646*t23531;
  t23889 = t23887 + t23888;
  t23897 = -1.*t23852*t23531*t23835;
  t23900 = t23519*t23861;
  t23902 = t23897 + t23900;
  t23907 = t20646*t23505*t23835;
  t23911 = -1.*t23530*t23863;
  t23914 = t23907 + t23911;
  t23921 = t23519*t23874;
  t23922 = -1.*t23852*t23531*t23861;
  t23923 = t23921 + t23922;
  t23926 = t20646*t23505*t23861;
  t23927 = -1.*t23530*t23877;
  t23928 = t23926 + t23927;
  t23965 = -0.0641*t23786;
  t23969 = -0.28*t23823;
  t23977 = t23965 + t23969;
  t23986 = -1.*t23786;
  t23987 = 1. + t23986;
  t23989 = 0.075*t23987;
  t23990 = 0.355*t23786;
  t23994 = -0.0641*t23823;
  t23998 = t23989 + t23990 + t23994;
  t23964 = -0.325*t23792;
  t23981 = t23814*t23977;
  t23999 = t23792*t23998;
  t24000 = t23964 + t23981 + t23999;
  t23529 = -1.*t20646*t23505*t23519;
  t23532 = t23530*t23531;
  t23760 = t23529 + t23532;
  t23953 = -1.*t23505;
  t23955 = 1. + t23953;
  t23956 = 0.1575*t23955;
  t23959 = 0.2255*t23505;
  t24001 = -1.*t23531*t24000;
  t24002 = t23956 + t23959 + t24001;
  t24003 = -1.*t23519*t24002;
  t24004 = -1.*t23814;
  t24005 = 1. + t24004;
  t24009 = 0.325*t24005;
  t24014 = -1.*t23792*t23977;
  t24015 = t23814*t23998;
  t24019 = t24009 + t24014 + t24015;
  t24023 = t23852*t24019;
  t24031 = t24003 + t24023;
  t24036 = 0.068*t23531;
  t24039 = t23505*t24000;
  t24040 = t24036 + t24039;
  t23846 = t23505*t23530*t23835;
  t23865 = t20646*t23863;
  t23867 = t23846 + t23865;
  t24059 = t23852*t24002;
  t24063 = t23519*t24019;
  t24064 = t24059 + t24063;
  t24050 = t20646*t24031;
  t24052 = t23530*t24040;
  t24054 = t24050 + t24052;
  t24035 = -1.*t23530*t24031;
  t24041 = t20646*t24040;
  t24045 = t24035 + t24041;
  t23869 = t23505*t23530*t23861;
  t23880 = t20646*t23877;
  t23881 = t23869 + t23880;
  t24065 = t23852*t23505*t24064;
  t24068 = -1.*t24064*t23902;
  t24082 = t24064*t23902;
  t24089 = -1.*t24064*t23923;
  t24115 = -1.*t23852*t23505*t24064;
  t24121 = t24064*t23923;
  t24164 = -1.*t23531*t24040;
  t24168 = t23505*t24040*t23861;
  t24135 = t23531*t24040;
  t24141 = -1.*t23505*t24040*t23835;
  t24156 = -1.*t23505*t24040*t23861;
  t24152 = t23505*t24040*t23835;
  t24204 = t24019*t23861;
  t24197 = -1.*t24019*t23874;
  p_output1[0]=t23867*var2[0] + t23760*var2[1] + t23881*var2[2];
  p_output1[1]=(t23884*t23902 - 1.*t23886*t23914)*var2[0] + (t23505*t23852*t23884 - 1.*t23886*t23889)*var2[1] + (t23884*t23923 - 1.*t23886*t23928)*var2[2];
  p_output1[2]=(t23886*t23902 + t23884*t23914)*var2[0] + (t23505*t23852*t23886 + t23884*t23889)*var2[1] + (t23886*t23923 + t23884*t23928)*var2[2];
  p_output1[3]=(t23881*(-1.*t23889*t24045 - 1.*t23760*t24054 + t24115) + t23760*(t23928*t24045 + t23881*t24054 + t24121))*var2[0] + (t23881*(t23914*t24045 + t23867*t24054 + t24082) + t23867*(-1.*t23928*t24045 - 1.*t23881*t24054 + t24089))*var2[1] + (t23867*(t23889*t24045 + t23760*t24054 + t24065) + t23760*(-1.*t23914*t24045 - 1.*t23867*t24054 + t24068))*var2[2];
  p_output1[4]=(t23923*(t23505*t23519*t24031 + t24115 + t24164) + t23505*t23852*(t23877*t24031 + t24121 + t24168))*var2[0] + (t23923*(t23863*t24031 + t24082 + t24152) + t23902*(-1.*t23877*t24031 + t24089 + t24156))*var2[1] + (t23902*(-1.*t23505*t23519*t24031 + t24065 + t24135) + t23505*t23852*(-1.*t23863*t24031 + t24068 + t24141))*var2[2];
  p_output1[5]=(t23505*t23861*(-1.*t23505*t24002 + t24164) + t23531*(-1.*t23531*t23861*t24002 + t23874*t24019 + t24168))*var2[0] + (t23505*t23835*(t23531*t23861*t24002 + t24156 + t24197) + t23505*t23861*(-1.*t23531*t23835*t24002 + t24152 + t24204))*var2[1] + (t23505*t23835*(t23505*t24002 + t24135) + t23531*(t23531*t23835*t24002 - 1.*t23861*t24019 + t24141))*var2[2];
  p_output1[6]=(-0.1575*t23835 - 0.2255*t23874)*var2[0] + (t23861*(-1.*t23861*t24000 + t24197) + t23874*(t23835*t24000 + t24204))*var2[1] + 0.068*t23861*var2[2];
  p_output1[7]=(0.325*t23823 - 1.*t23786*t23977 - 1.*t23823*t23998)*var2[0] + (-0.325*t23786 - 1.*t23823*t23977 + t23786*t23998)*var2[2];
  p_output1[8]=-0.0641*var2[0] - 0.28*var2[2];
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
