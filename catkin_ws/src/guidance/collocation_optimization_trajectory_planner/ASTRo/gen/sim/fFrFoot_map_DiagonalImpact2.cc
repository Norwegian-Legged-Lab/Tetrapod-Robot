/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:41:29 GMT+02:00
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
  double t4002;
  double t3007;
  double t3502;
  double t4020;
  double t12826;
  double t12917;
  double t15457;
  double t12792;
  double t15925;
  double t10896;
  double t15965;
  double t10525;
  double t3970;
  double t4202;
  double t7882;
  double t9081;
  double t15917;
  double t16091;
  double t16126;
  double t16159;
  double t16141;
  double t16149;
  double t16154;
  double t16137;
  double t16165;
  double t16172;
  double t16176;
  double t39781;
  double t40247;
  double t40443;
  double t41146;
  double t41147;
  double t41338;
  double t41343;
  double t41347;
  double t41350;
  double t41370;
  double t41371;
  double t41395;
  double t41397;
  double t41399;
  double t41402;
  double t41421;
  double t41509;
  double t41514;
  double t41515;
  double t41155;
  double t41263;
  double t41334;
  double t41426;
  double t41501;
  double t41609;
  double t41652;
  double t41707;
  double t41708;
  double t41709;
  double t41716;
  double t41717;
  double t41738;
  double t41744;
  double t41792;
  double t41508;
  double t41516;
  double t41521;
  double t39377;
  double t40460;
  double t40510;
  double t41121;
  double t41132;
  double t41134;
  double t41721;
  double t41813;
  double t41814;
  double t43491;
  double t43724;
  double t43725;
  double t44004;
  double t44005;
  double t44011;
  double t41135;
  double t41138;
  double t41140;
  double t41529;
  double t44221;
  double t10517;
  double t16131;
  double t16133;
  double t45414;
  double t46560;
  double t50161;
  double t51422;
  double t51535;
  double t51711;
  double t52373;
  double t54330;
  double t54350;
  t4002 = Cos(var1[13]);
  t3007 = Cos(var1[14]);
  t3502 = Sin(var1[13]);
  t4020 = Sin(var1[14]);
  t12826 = t4002*t3007;
  t12917 = t3502*t4020;
  t15457 = t12826 + t12917;
  t12792 = Cos(var1[5]);
  t15925 = Sin(var1[12]);
  t10896 = Cos(var1[12]);
  t15965 = Sin(var1[5]);
  t10525 = Cos(var1[4]);
  t3970 = -1.*t3007*t3502;
  t4202 = t4002*t4020;
  t7882 = t3970 + t4202;
  t9081 = Sin(var1[4]);
  t15917 = t10896*t12792*t15457;
  t16091 = -1.*t15925*t15457*t15965;
  t16126 = t15917 + t16091;
  t16159 = Sin(var1[3]);
  t16141 = t12792*t15925*t15457;
  t16149 = t10896*t15457*t15965;
  t16154 = t16141 + t16149;
  t16137 = Cos(var1[3]);
  t16165 = t10525*t7882;
  t16172 = -1.*t9081*t16126;
  t16176 = t16165 + t16172;
  t39781 = t3007*t3502;
  t40247 = -1.*t4002*t4020;
  t40443 = t39781 + t40247;
  t41146 = -1.*t10896;
  t41147 = 1. + t41146;
  t41338 = -1.*t4002;
  t41343 = 1. + t41338;
  t41347 = 0.28121*t41343;
  t41350 = -1.*t3007;
  t41370 = 1. + t41350;
  t41371 = 0.50321*t41370;
  t41395 = 0.23321*t3007;
  t41397 = t41371 + t41395;
  t41399 = t4002*t41397;
  t41402 = -0.27*t3502*t4020;
  t41421 = t41347 + t41399 + t41402;
  t41509 = 0.15121*t41147;
  t41514 = t10896*t41421;
  t41515 = t41509 + t41514;
  t41155 = -0.15121*t41147;
  t41263 = -0.15121*t10896;
  t41334 = -0.15121*t15925;
  t41426 = t15925*t41421;
  t41501 = t41155 + t41263 + t41334 + t41426;
  t41609 = -1.*t12792*t15925;
  t41652 = -1.*t10896*t15965;
  t41707 = t41609 + t41652;
  t41708 = 0.28121*t3502;
  t41709 = -1.*t41397*t3502;
  t41716 = -0.27*t4002*t4020;
  t41717 = t41708 + t41709 + t41716;
  t41738 = t12792*t41515;
  t41744 = -1.*t41501*t15965;
  t41792 = t41738 + t41744;
  t41508 = t12792*t41501;
  t41516 = t41515*t15965;
  t41521 = t41508 + t41516;
  t39377 = t15457*t9081;
  t40460 = t10896*t12792*t40443;
  t40510 = -1.*t15925*t40443*t15965;
  t41121 = t40460 + t40510;
  t41132 = t10525*t41121;
  t41134 = t39377 + t41132;
  t41721 = t41717*t9081;
  t41813 = t10525*t41792;
  t41814 = t41721 + t41813;
  t43491 = t10525*t41717;
  t43724 = -1.*t9081*t41792;
  t43725 = t43491 + t43724;
  t44004 = t12792*t15925*t40443;
  t44005 = t10896*t40443*t15965;
  t44011 = t44004 + t44005;
  t41135 = t10896*t12792;
  t41138 = -1.*t15925*t15965;
  t41140 = t41135 + t41138;
  t41529 = -1.*t41140*t41521;
  t44221 = t44011*t41521;
  t10517 = t7882*t9081;
  t16131 = t10525*t16126;
  t16133 = t10517 + t16131;
  t45414 = t10525*t15457;
  t46560 = -1.*t9081*t41121;
  t50161 = t45414 + t46560;
  t51422 = -1.*t44011*t41521;
  t51535 = t16154*t41521;
  t51711 = -1.*t41717*t15457;
  t52373 = t41717*t7882;
  t54330 = t41140*t41521;
  t54350 = -1.*t16154*t41521;
  p_output1[0]=t16133;
  p_output1[1]=t16137*t16154 - 1.*t16159*t16176;
  p_output1[2]=t16154*t16159 + t16137*t16176;
  p_output1[3]=t10525*t41707*(t41134*t41814 + t44221 + t43725*t50161) + t41134*(t41529 - 1.*t10525*t41707*t41814 + t41707*t43725*t9081);
  p_output1[4]=(t41529 - 1.*t41707*t41792)*t44011 + t41140*(t15457*t41717 + t41121*t41792 + t44221);
  p_output1[5]=t15457*(-1.*t10896*t41501 + t15925*t41515);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0.28121*t4020 - 0.27*t3007*t4020 - 1.*t4020*t41397;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t10525*t41707;
  p_output1[19]=t16137*t41140 + t16159*t41707*t9081;
  p_output1[20]=t16159*t41140 - 1.*t16137*t41707*t9081;
  p_output1[21]=t16133*(-1.*t41134*t41814 - 1.*t43725*t50161 + t51422) + t41134*(t16133*t41814 + t16176*t43725 + t51535);
  p_output1[22]=t16154*(-1.*t41121*t41792 + t51422 + t51711) + t44011*(t16126*t41792 + t51535 + t52373);
  p_output1[23]=t15457*(t15457*t15925*t41501 + t10896*t15457*t41515 + t52373) + (-1.*t15925*t40443*t41501 - 1.*t10896*t40443*t41515 + t51711)*t7882;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=-0.15121 + t15457*(t15457*t41421 + t52373) + (-1.*t40443*t41421 + t51711)*t7882;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t41134;
  p_output1[37]=t16137*t44011 - 1.*t16159*t50161;
  p_output1[38]=t16159*t44011 + t16137*t50161;
  p_output1[39]=t10525*t41707*(-1.*t16133*t41814 - 1.*t16176*t43725 + t54350) + t16133*(t10525*t41707*t41814 + t54330 - 1.*t41707*t43725*t9081);
  p_output1[40]=t16154*(t41707*t41792 + t54330) + t41140*(-1.*t16126*t41792 + t54350 - 1.*t41717*t7882);
  p_output1[41]=(t10896*t41501 - 1.*t15925*t41515)*t7882;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.15121*t40443 - 0.15121*t7882;
  p_output1[49]=0.28121*t3007 + 0.27*Power(t4020,2) - 1.*t3007*t41397;
  p_output1[50]=-0.27;
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

#include "fFrFoot_map_DiagonalImpact2.hh"

namespace SymFunction
{

void fFrFoot_map_DiagonalImpact2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
