/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:56:16 GMT+02:00
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
  double t5748;
  double t4029;
  double t4456;
  double t5846;
  double t5590;
  double t5879;
  double t5884;
  double t7335;
  double t5960;
  double t1167;
  double t6497;
  double t8966;
  double t6550;
  double t6568;
  double t7174;
  double t6540;
  double t7213;
  double t9040;
  double t9157;
  double t24244;
  double t26347;
  double t16194;
  double t16206;
  double t16229;
  double t16942;
  double t19093;
  double t19099;
  double t24444;
  double t24556;
  double t24906;
  double t26501;
  double t26502;
  double t27715;
  double t32484;
  double t32508;
  double t32635;
  double t33117;
  double t33123;
  double t33487;
  double t34569;
  double t34570;
  double t34585;
  double t16183;
  double t21530;
  double t24190;
  double t36995;
  double t39982;
  double t40005;
  double t40023;
  double t40024;
  double t40068;
  double t40080;
  double t40081;
  double t40082;
  double t14248;
  double t15282;
  double t15944;
  double t36755;
  double t40021;
  double t40083;
  double t40084;
  double t40089;
  double t40093;
  double t40095;
  double t40098;
  double t40105;
  double t40108;
  double t36684;
  double t36702;
  double t36740;
  double t36751;
  double t40085;
  double t40086;
  double t40129;
  double t40133;
  double t40134;
  double t40136;
  double t40140;
  double t40141;
  double t40087;
  double t40122;
  double t40127;
  double t40135;
  double t40146;
  double t40147;
  double t40150;
  double t40152;
  double t40153;
  double t6118;
  double t10412;
  double t12541;
  double t40128;
  double t40169;
  double t40180;
  double t40253;
  double t40324;
  double t50896;
  double t53033;
  double t53059;
  double t53072;
  double t53066;
  double t53086;
  double t53092;
  double t53137;
  double t53127;
  t5748 = Cos(var1[10]);
  t4029 = Cos(var1[11]);
  t4456 = Sin(var1[10]);
  t5846 = Sin(var1[11]);
  t5590 = t4029*t4456;
  t5879 = -1.*t5748*t5846;
  t5884 = t5590 + t5879;
  t7335 = Sin(var1[9]);
  t5960 = Sin(var1[4]);
  t1167 = Cos(var1[9]);
  t6497 = Cos(var1[4]);
  t8966 = Sin(var1[5]);
  t6550 = t5748*t4029;
  t6568 = t4456*t5846;
  t7174 = t6550 + t6568;
  t6540 = Cos(var1[5]);
  t7213 = t6540*t7174;
  t9040 = t7335*t5884*t8966;
  t9157 = t7213 + t9040;
  t24244 = Cos(var1[3]);
  t26347 = Sin(var1[3]);
  t16194 = -1.*t4029*t4456;
  t16206 = t5748*t5846;
  t16229 = t16194 + t16206;
  t16942 = t6540*t16229;
  t19093 = t7335*t7174*t8966;
  t19099 = t16942 + t19093;
  t24444 = -1.*t6540*t7335*t5884;
  t24556 = t7174*t8966;
  t24906 = t24444 + t24556;
  t26501 = t1167*t6497*t5884;
  t26502 = -1.*t5960*t9157;
  t27715 = t26501 + t26502;
  t32484 = t6497*t7335;
  t32508 = t1167*t5960*t8966;
  t32635 = t32484 + t32508;
  t33117 = -1.*t6540*t7335*t7174;
  t33123 = t16229*t8966;
  t33487 = t33117 + t33123;
  t34569 = t1167*t6497*t7174;
  t34570 = -1.*t5960*t19099;
  t34585 = t34569 + t34570;
  t16183 = t1167*t7174*t5960;
  t21530 = t6497*t19099;
  t24190 = t16183 + t21530;
  t36995 = -0.0641*t4029;
  t39982 = -0.28*t5846;
  t40005 = t36995 + t39982;
  t40023 = -1.*t4029;
  t40024 = 1. + t40023;
  t40068 = -0.575*t40024;
  t40080 = -0.295*t4029;
  t40081 = -0.0641*t5846;
  t40082 = t40068 + t40080 + t40081;
  t14248 = t7335*t5960;
  t15282 = -1.*t1167*t6497*t8966;
  t15944 = t14248 + t15282;
  t36755 = 0.325*t4456;
  t40021 = t5748*t40005;
  t40083 = t4456*t40082;
  t40084 = t36755 + t40021 + t40083;
  t40089 = -1.*t5748;
  t40093 = 1. + t40089;
  t40095 = -0.325*t40093;
  t40098 = -1.*t4456*t40005;
  t40105 = t5748*t40082;
  t40108 = t40095 + t40098 + t40105;
  t36684 = -1.*t1167;
  t36702 = 1. + t36684;
  t36740 = 0.1575*t36702;
  t36751 = 0.2255*t1167;
  t40085 = -1.*t7335*t40084;
  t40086 = t36740 + t36751 + t40085;
  t40129 = 0.068*t7335;
  t40133 = t1167*t40084;
  t40134 = t40129 + t40133;
  t40136 = t6540*t40108;
  t40140 = -1.*t40086*t8966;
  t40141 = t40136 + t40140;
  t40087 = t6540*t40086;
  t40122 = t40108*t8966;
  t40127 = t40087 + t40122;
  t40135 = t40134*t5960;
  t40146 = t6497*t40141;
  t40147 = t40135 + t40146;
  t40150 = t6497*t40134;
  t40152 = -1.*t5960*t40141;
  t40153 = t40150 + t40152;
  t6118 = t1167*t5884*t5960;
  t10412 = t6497*t9157;
  t12541 = t6118 + t10412;
  t40128 = -1.*t1167*t6540*t40127;
  t40169 = t40127*t33487;
  t40180 = t40127*t24906;
  t40253 = -1.*t40127*t33487;
  t40324 = t1167*t6540*t40127;
  t50896 = -1.*t40127*t24906;
  t53033 = -1.*t7335*t40134;
  t53059 = t1167*t40134*t7174;
  t53072 = -1.*t1167*t40134*t7174;
  t53066 = t1167*t40134*t5884;
  t53086 = t7335*t40134;
  t53092 = -1.*t1167*t40134*t5884;
  t53137 = t40108*t7174;
  t53127 = -1.*t40108*t16229;
  p_output1[0]=t12541;
  p_output1[1]=t15944;
  p_output1[2]=t24190;
  p_output1[3]=t24244*t24906 - 1.*t26347*t27715;
  p_output1[4]=-1.*t26347*t32635 + t1167*t24244*t6540;
  p_output1[5]=t24244*t33487 - 1.*t26347*t34585;
  p_output1[6]=t24906*t26347 + t24244*t27715;
  p_output1[7]=t24244*t32635 + t1167*t26347*t6540;
  p_output1[8]=t26347*t33487 + t24244*t34585;
  p_output1[9]=t24190*(t40128 - 1.*t15944*t40147 - 1.*t32635*t40153) + t15944*(t24190*t40147 + t34585*t40153 + t40169);
  p_output1[10]=t24190*(t12541*t40147 + t27715*t40153 + t40180) + t12541*(-1.*t24190*t40147 - 1.*t34585*t40153 + t40253);
  p_output1[11]=t12541*(t15944*t40147 + t32635*t40153 + t40324) + t15944*(-1.*t12541*t40147 - 1.*t27715*t40153 + t50896);
  p_output1[12]=t1167*(t19099*t40141 + t40169 + t53059)*t6540 + t33487*(t40128 + t53033 + t1167*t40141*t8966);
  p_output1[13]=t24906*(-1.*t19099*t40141 + t40253 + t53072) + t33487*(t40180 + t53066 + t40141*t9157);
  p_output1[14]=t24906*(t40324 + t53086 - 1.*t1167*t40141*t8966) + t1167*t6540*(t50896 + t53092 - 1.*t40141*t9157);
  p_output1[15]=t1167*(-1.*t1167*t40086 + t53033)*t7174 + t7335*(t16229*t40108 + t53059 - 1.*t40086*t7174*t7335);
  p_output1[16]=t1167*t7174*(t53066 + t53137 - 1.*t40086*t5884*t7335) + t1167*t5884*(t53072 + t53127 + t40086*t7174*t7335);
  p_output1[17]=t1167*(t1167*t40086 + t53086)*t5884 + t7335*(t53092 - 1.*t40108*t7174 + t40086*t5884*t7335);
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.2255*t16229 - 0.1575*t5884;
  p_output1[28]=t16229*(t53137 + t40084*t5884) + t7174*(t53127 - 1.*t40084*t7174);
  p_output1[29]=0.068*t7174;
  p_output1[30]=-1.*t40005*t4029 - 0.325*t5846 - 1.*t40082*t5846;
  p_output1[31]=0;
  p_output1[32]=0.325*t4029 + t40082*t4029 - 1.*t40005*t5846;
  p_output1[33]=-0.0641;
  p_output1[34]=0;
  p_output1[35]=-0.28;
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

#include "Jh_RlFoot_DiagonalStance.hh"

namespace SymFunction
{

void Jh_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
