/*
 * Automatically Generated from Mathematica.
 * Sun 22 May 2022 16:55:30 GMT+02:00
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
  double t7796;
  double t7487;
  double t7757;
  double t7889;
  double t9644;
  double t9730;
  double t9739;
  double t8053;
  double t8316;
  double t9800;
  double t8314;
  double t9815;
  double t7904;
  double t7779;
  double t7896;
  double t7900;
  double t9755;
  double t12682;
  double t12726;
  double t15997;
  double t13217;
  double t13253;
  double t15868;
  double t15969;
  double t15888;
  double t15902;
  double t15917;
  double t15925;
  double t15926;
  double t15927;
  double t15983;
  double t15990;
  double t15995;
  double t15998;
  double t16005;
  double t16009;
  double t16020;
  double t16021;
  double t16026;
  double t16029;
  double t16030;
  double t16031;
  double t16033;
  double t16034;
  double t16035;
  double t15918;
  double t15964;
  double t15968;
  double t16055;
  double t16074;
  double t16090;
  double t16091;
  double t16096;
  double t16097;
  double t16100;
  double t16102;
  double t16105;
  double t16106;
  double t16107;
  double t16108;
  double t16111;
  double t16116;
  double t16126;
  double t16130;
  double t16081;
  double t16082;
  double t16083;
  double t16112;
  double t16114;
  double t16141;
  double t16146;
  double t16147;
  double t16148;
  double t16152;
  double t16153;
  double t16154;
  double t16115;
  double t16131;
  double t16136;
  double t16149;
  double t16155;
  double t16158;
  double t16162;
  double t16163;
  double t16164;
  double t7936;
  double t12912;
  double t13216;
  double t16140;
  double t16183;
  double t16197;
  double t16206;
  double t16215;
  double t16226;
  double t16245;
  double t16249;
  t7796 = Cos(var1[10]);
  t7487 = Cos(var1[11]);
  t7757 = Sin(var1[10]);
  t7889 = Sin(var1[11]);
  t9644 = -1.*t7796*t7487;
  t9730 = -1.*t7757*t7889;
  t9739 = t9644 + t9730;
  t8053 = Cos(var1[4]);
  t8316 = Cos(var1[5]);
  t9800 = Sin(var1[9]);
  t8314 = Cos(var1[9]);
  t9815 = Sin(var1[5]);
  t7904 = Sin(var1[4]);
  t7779 = -1.*t7487*t7757;
  t7896 = t7796*t7889;
  t7900 = t7779 + t7896;
  t9755 = t8314*t8316*t9739;
  t12682 = -1.*t9800*t9739*t9815;
  t12726 = t9755 + t12682;
  t15997 = Sin(var1[3]);
  t13217 = t8316*t9800;
  t13253 = t8314*t9815;
  t15868 = t13217 + t13253;
  t15969 = Cos(var1[3]);
  t15888 = t7796*t7487;
  t15902 = t7757*t7889;
  t15917 = t15888 + t15902;
  t15925 = t8314*t8316*t7900;
  t15926 = -1.*t9800*t7900*t9815;
  t15927 = t15925 + t15926;
  t15983 = t8316*t9800*t9739;
  t15990 = t8314*t9739*t9815;
  t15995 = t15983 + t15990;
  t15998 = t8053*t7900;
  t16005 = -1.*t7904*t12726;
  t16009 = t15998 + t16005;
  t16020 = -1.*t8314*t8316;
  t16021 = t9800*t9815;
  t16026 = t16020 + t16021;
  t16029 = t8316*t9800*t7900;
  t16030 = t8314*t7900*t9815;
  t16031 = t16029 + t16030;
  t16033 = t8053*t15917;
  t16034 = -1.*t7904*t15927;
  t16035 = t16033 + t16034;
  t15918 = t15917*t7904;
  t15964 = t8053*t15927;
  t15968 = t15918 + t15964;
  t16055 = -1.*t8314;
  t16074 = 1. + t16055;
  t16090 = -1.*t7796;
  t16091 = 1. + t16090;
  t16096 = -0.28121*t16091;
  t16097 = -1.*t7487;
  t16100 = 1. + t16097;
  t16102 = -0.50321*t16100;
  t16105 = -0.23321*t7487;
  t16106 = t16102 + t16105;
  t16107 = t7796*t16106;
  t16108 = 0.27*t7757*t7889;
  t16111 = t16096 + t16107 + t16108;
  t16116 = -0.15121*t16074;
  t16126 = t8314*t16111;
  t16130 = t16116 + t16126;
  t16081 = 0.15121*t16074;
  t16082 = 0.15121*t8314;
  t16083 = 0.15121*t9800;
  t16112 = t9800*t16111;
  t16114 = t16081 + t16082 + t16083 + t16112;
  t16141 = 0.28121*t7757;
  t16146 = t16106*t7757;
  t16147 = -0.27*t7796*t7889;
  t16148 = t16141 + t16146 + t16147;
  t16152 = t8316*t16130;
  t16153 = -1.*t16114*t9815;
  t16154 = t16152 + t16153;
  t16115 = t8316*t16114;
  t16131 = t16130*t9815;
  t16136 = t16115 + t16131;
  t16149 = t16148*t7904;
  t16155 = t8053*t16154;
  t16158 = t16149 + t16155;
  t16162 = t8053*t16148;
  t16163 = -1.*t7904*t16154;
  t16164 = t16162 + t16163;
  t7936 = t7900*t7904;
  t12912 = t8053*t12726;
  t13216 = t7936 + t12912;
  t16140 = -1.*t16026*t16136;
  t16183 = t16031*t16136;
  t16197 = -1.*t16031*t16136;
  t16206 = t15995*t16136;
  t16215 = t16026*t16136;
  t16226 = -1.*t15995*t16136;
  t16245 = -1.*t16148*t15917;
  t16249 = t16148*t7900;
  p_output1[0]=t13216;
  p_output1[1]=t15868*t8053;
  p_output1[2]=t15968;
  p_output1[3]=t15969*t15995 - 1.*t15997*t16009;
  p_output1[4]=t15969*t16026 + t15868*t15997*t7904;
  p_output1[5]=t15969*t16031 - 1.*t15997*t16035;
  p_output1[6]=t15995*t15997 + t15969*t16009;
  p_output1[7]=t15997*t16026 - 1.*t15868*t15969*t7904;
  p_output1[8]=t15997*t16031 + t15969*t16035;
  p_output1[9]=t15868*(t15968*t16158 + t16035*t16164 + t16183)*t8053 + t15968*(t16140 + t15868*t16164*t7904 - 1.*t15868*t16158*t8053);
  p_output1[10]=t13216*(-1.*t15968*t16158 - 1.*t16035*t16164 + t16197) + t15968*(t13216*t16158 + t16009*t16164 + t16206);
  p_output1[11]=t15868*(-1.*t13216*t16158 - 1.*t16009*t16164 + t16226)*t8053 + t13216*(t16215 - 1.*t15868*t16164*t7904 + t15868*t16158*t8053);
  p_output1[12]=t16031*(t16140 - 1.*t15868*t16154) + t16026*(t15917*t16148 + t15927*t16154 + t16183);
  p_output1[13]=t15995*(-1.*t15927*t16154 + t16197 + t16245) + t16031*(t12726*t16154 + t16206 + t16249);
  p_output1[14]=t15995*(t15868*t16154 + t16215) + t16026*(-1.*t12726*t16154 + t16226 - 1.*t16148*t7900);
  p_output1[15]=t15917*(t16114*t8314 - 1.*t16130*t9800);
  p_output1[16]=t7900*(t16245 - 1.*t16130*t7900*t8314 - 1.*t16114*t7900*t9800) + t15917*(t16249 + t16130*t8314*t9739 + t16114*t9739*t9800);
  p_output1[17]=t7900*(-1.*t16114*t8314 + t16130*t9800);
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0.15121*t15917 + 0.15121*t9739;
  p_output1[28]=-0.15121 + t7900*(t16245 - 1.*t16111*t7900) + t15917*(t16249 + t16111*t9739);
  p_output1[29]=0;
  p_output1[30]=0.28121*t7889 + t16106*t7889 - 0.27*t7487*t7889;
  p_output1[31]=0;
  p_output1[32]=0.28121*t7487 + t16106*t7487 + 0.27*Power(t7889,2);
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=-0.27;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
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
  p_output1[52]=0;
  p_output1[53]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jh_RlFoot_ParallelStance2.hh"

namespace SymFunction
{

void Jh_RlFoot_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
