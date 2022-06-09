/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:37:58 GMT+02:00
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
  double t15765;
  double t4117;
  double t14125;
  double t15775;
  double t15810;
  double t15813;
  double t15826;
  double t15806;
  double t15830;
  double t15804;
  double t15834;
  double t15803;
  double t15704;
  double t15777;
  double t15795;
  double t3910;
  double t15829;
  double t15845;
  double t15847;
  double t15943;
  double t15858;
  double t15871;
  double t15916;
  double t15856;
  double t15945;
  double t15953;
  double t15954;
  double t15974;
  double t15975;
  double t15979;
  double t16016;
  double t16018;
  double t16024;
  double t16028;
  double t16031;
  double t16032;
  double t16045;
  double t16046;
  double t16048;
  double t16059;
  double t16062;
  double t16064;
  double t16067;
  double t16068;
  double t16069;
  double t16084;
  double t16089;
  double t16090;
  double t16095;
  double t16096;
  double t16106;
  double t16110;
  double t16111;
  double t16112;
  double t16113;
  double t16118;
  double t16119;
  double t16122;
  double t16123;
  double t16124;
  double t16088;
  double t16101;
  double t16102;
  double t15973;
  double t15980;
  double t15985;
  double t15986;
  double t15987;
  double t16000;
  double t16121;
  double t16128;
  double t16133;
  double t16135;
  double t16136;
  double t16144;
  double t16158;
  double t16159;
  double t16160;
  double t16004;
  double t16005;
  double t16012;
  double t16105;
  double t16161;
  double t15800;
  double t15848;
  double t15855;
  double t16164;
  double t16165;
  double t16166;
  double t16207;
  double t16212;
  double t16218;
  double t16222;
  double t16277;
  double t16282;
  t15765 = Cos(var1[7]);
  t4117 = Cos(var1[8]);
  t14125 = Sin(var1[7]);
  t15775 = Sin(var1[8]);
  t15810 = t15765*t4117;
  t15813 = t14125*t15775;
  t15826 = t15810 + t15813;
  t15806 = Cos(var1[6]);
  t15830 = Sin(var1[5]);
  t15804 = Cos(var1[5]);
  t15834 = Sin(var1[6]);
  t15803 = Cos(var1[4]);
  t15704 = -1.*t4117*t14125;
  t15777 = t15765*t15775;
  t15795 = t15704 + t15777;
  t3910 = Sin(var1[4]);
  t15829 = t15804*t15806*t15826;
  t15845 = -1.*t15830*t15834*t15826;
  t15847 = t15829 + t15845;
  t15943 = Sin(var1[3]);
  t15858 = t15806*t15830*t15826;
  t15871 = t15804*t15834*t15826;
  t15916 = t15858 + t15871;
  t15856 = Cos(var1[3]);
  t15945 = t15803*t15795;
  t15953 = -1.*t3910*t15847;
  t15954 = t15945 + t15953;
  t15974 = t4117*t14125;
  t15975 = -1.*t15765*t15775;
  t15979 = t15974 + t15975;
  t16016 = -1.*t15806;
  t16018 = 1. + t16016;
  t16024 = 0.15121*t16018;
  t16028 = -1.*t15765;
  t16031 = 1. + t16028;
  t16032 = 0.28121*t16031;
  t16045 = -1.*t4117;
  t16046 = 1. + t16045;
  t16048 = 0.50321*t16046;
  t16059 = 0.19821*t4117;
  t16062 = t16048 + t16059;
  t16064 = t15765*t16062;
  t16067 = -0.305*t14125*t15775;
  t16068 = t16032 + t16064 + t16067;
  t16069 = t15806*t16068;
  t16084 = t16024 + t16069;
  t16089 = 0.15121*t15806;
  t16090 = -0.15121*t15834;
  t16095 = t15834*t16068;
  t16096 = t16024 + t16089 + t16090 + t16095;
  t16106 = -1.*t15806*t15830;
  t16110 = -1.*t15804*t15834;
  t16111 = t16106 + t16110;
  t16112 = 0.28121*t14125;
  t16113 = -1.*t16062*t14125;
  t16118 = -0.305*t15765*t15775;
  t16119 = t16112 + t16113 + t16118;
  t16122 = t15804*t16084;
  t16123 = -1.*t15830*t16096;
  t16124 = t16122 + t16123;
  t16088 = t15830*t16084;
  t16101 = t15804*t16096;
  t16102 = t16088 + t16101;
  t15973 = t3910*t15826;
  t15980 = t15804*t15806*t15979;
  t15985 = -1.*t15830*t15834*t15979;
  t15986 = t15980 + t15985;
  t15987 = t15803*t15986;
  t16000 = t15973 + t15987;
  t16121 = t3910*t16119;
  t16128 = t15803*t16124;
  t16133 = t16121 + t16128;
  t16135 = t15803*t16119;
  t16136 = -1.*t3910*t16124;
  t16144 = t16135 + t16136;
  t16158 = t15806*t15830*t15979;
  t16159 = t15804*t15834*t15979;
  t16160 = t16158 + t16159;
  t16004 = t15804*t15806;
  t16005 = -1.*t15830*t15834;
  t16012 = t16004 + t16005;
  t16105 = -1.*t16012*t16102;
  t16161 = t16160*t16102;
  t15800 = t3910*t15795;
  t15848 = t15803*t15847;
  t15855 = t15800 + t15848;
  t16164 = t15803*t15826;
  t16165 = -1.*t3910*t15986;
  t16166 = t16164 + t16165;
  t16207 = -1.*t16160*t16102;
  t16212 = t15916*t16102;
  t16218 = -1.*t16119*t15826;
  t16222 = t16119*t15795;
  t16277 = t16012*t16102;
  t16282 = -1.*t15916*t16102;
  p_output1[0]=t15855;
  p_output1[1]=t15856*t15916 - 1.*t15943*t15954;
  p_output1[2]=t15916*t15943 + t15856*t15954;
  p_output1[3]=t15803*t16111*(t16000*t16133 + t16161 + t16144*t16166) + t16000*(t16105 - 1.*t15803*t16111*t16133 + t16111*t16144*t3910);
  p_output1[4]=(t16105 - 1.*t16111*t16124)*t16160 + t16012*(t15826*t16119 + t15986*t16124 + t16161);
  p_output1[5]=t15826*(t15834*t16084 - 1.*t15806*t16096);
  p_output1[6]=0;
  p_output1[7]=0.28121*t15775 - 1.*t15775*t16062 - 0.305*t15775*t4117;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t15803*t16111;
  p_output1[19]=t15856*t16012 + t15943*t16111*t3910;
  p_output1[20]=t15943*t16012 - 1.*t15856*t16111*t3910;
  p_output1[21]=t15855*(-1.*t16000*t16133 - 1.*t16144*t16166 + t16207) + t16000*(t15855*t16133 + t15954*t16144 + t16212);
  p_output1[22]=t15916*(-1.*t15986*t16124 + t16207 + t16218) + t16160*(t15847*t16124 + t16212 + t16222);
  p_output1[23]=t15795*(-1.*t15806*t15979*t16084 - 1.*t15834*t15979*t16096 + t16218) + t15826*(t15806*t15826*t16084 + t15826*t15834*t16096 + t16222);
  p_output1[24]=-0.15121 + t15795*(-1.*t15979*t16068 + t16218) + t15826*(t15826*t16068 + t16222);
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t16000;
  p_output1[37]=t15856*t16160 - 1.*t15943*t16166;
  p_output1[38]=t15943*t16160 + t15856*t16166;
  p_output1[39]=t15803*t16111*(-1.*t15855*t16133 - 1.*t15954*t16144 + t16282) + t15855*(t15803*t16111*t16133 + t16277 - 1.*t16111*t16144*t3910);
  p_output1[40]=t15916*(t16111*t16124 + t16277) + t16012*(-1.*t15795*t16119 - 1.*t15847*t16124 + t16282);
  p_output1[41]=t15795*(-1.*t15834*t16084 + t15806*t16096);
  p_output1[42]=0.15121*t15795 + 0.15121*t15979;
  p_output1[43]=0.305*Power(t15775,2) + 0.28121*t4117 - 1.*t16062*t4117;
  p_output1[44]=-0.305;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fFlFoot_map_DiagonalStance2.hh"

namespace SymFunction
{

void fFlFoot_map_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
