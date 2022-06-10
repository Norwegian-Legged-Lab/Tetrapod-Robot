/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:56:35 GMT+02:00
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
  double t7674;
  double t2118;
  double t2710;
  double t8166;
  double t7624;
  double t8170;
  double t8416;
  double t10660;
  double t8675;
  double t300;
  double t8712;
  double t10954;
  double t8882;
  double t9019;
  double t9531;
  double t8720;
  double t10659;
  double t11238;
  double t11860;
  double t16656;
  double t17396;
  double t14582;
  double t15780;
  double t16008;
  double t16012;
  double t16112;
  double t16231;
  double t16775;
  double t17324;
  double t17333;
  double t17405;
  double t17435;
  double t17465;
  double t17669;
  double t17776;
  double t17875;
  double t17880;
  double t17882;
  double t17931;
  double t18044;
  double t18055;
  double t18062;
  double t13695;
  double t16263;
  double t16600;
  double t19472;
  double t19476;
  double t19488;
  double t19495;
  double t19509;
  double t19552;
  double t19645;
  double t19650;
  double t19782;
  double t13099;
  double t13106;
  double t13167;
  double t19445;
  double t19490;
  double t19847;
  double t19876;
  double t19883;
  double t19884;
  double t19889;
  double t19890;
  double t19916;
  double t19929;
  double t19088;
  double t19101;
  double t19105;
  double t19225;
  double t19877;
  double t19881;
  double t20020;
  double t20038;
  double t20043;
  double t20052;
  double t20053;
  double t20058;
  double t19882;
  double t19948;
  double t19968;
  double t20045;
  double t20059;
  double t20060;
  double t20066;
  double t20067;
  double t20072;
  double t8678;
  double t12363;
  double t12853;
  double t19977;
  double t20086;
  double t20107;
  double t20123;
  double t20145;
  double t20181;
  double t20222;
  double t20226;
  double t20270;
  double t20249;
  double t20285;
  double t20317;
  double t20559;
  double t20426;
  t7674 = Cos(var1[16]);
  t2118 = Cos(var1[17]);
  t2710 = Sin(var1[16]);
  t8166 = Sin(var1[17]);
  t7624 = t2118*t2710;
  t8170 = -1.*t7674*t8166;
  t8416 = t7624 + t8170;
  t10660 = Sin(var1[15]);
  t8675 = Sin(var1[4]);
  t300 = Cos(var1[15]);
  t8712 = Cos(var1[4]);
  t10954 = Sin(var1[5]);
  t8882 = t7674*t2118;
  t9019 = t2710*t8166;
  t9531 = t8882 + t9019;
  t8720 = Cos(var1[5]);
  t10659 = t8720*t9531;
  t11238 = t10660*t8416*t10954;
  t11860 = t10659 + t11238;
  t16656 = Cos(var1[3]);
  t17396 = Sin(var1[3]);
  t14582 = -1.*t2118*t2710;
  t15780 = t7674*t8166;
  t16008 = t14582 + t15780;
  t16012 = t8720*t16008;
  t16112 = t10660*t9531*t10954;
  t16231 = t16012 + t16112;
  t16775 = -1.*t8720*t10660*t8416;
  t17324 = t9531*t10954;
  t17333 = t16775 + t17324;
  t17405 = t300*t8712*t8416;
  t17435 = -1.*t8675*t11860;
  t17465 = t17405 + t17435;
  t17669 = t8712*t10660;
  t17776 = t300*t8675*t10954;
  t17875 = t17669 + t17776;
  t17880 = -1.*t8720*t10660*t9531;
  t17882 = t16008*t10954;
  t17931 = t17880 + t17882;
  t18044 = t300*t8712*t9531;
  t18055 = -1.*t8675*t16231;
  t18062 = t18044 + t18055;
  t13695 = t300*t9531*t8675;
  t16263 = t8712*t16231;
  t16600 = t13695 + t16263;
  t19472 = -0.0641*t2118;
  t19476 = -0.28*t8166;
  t19488 = t19472 + t19476;
  t19495 = -1.*t2118;
  t19509 = 1. + t19495;
  t19552 = -0.575*t19509;
  t19645 = -0.295*t2118;
  t19650 = -0.0641*t8166;
  t19782 = t19552 + t19645 + t19650;
  t13099 = t10660*t8675;
  t13106 = -1.*t300*t8712*t10954;
  t13167 = t13099 + t13106;
  t19445 = 0.325*t2710;
  t19490 = t7674*t19488;
  t19847 = t2710*t19782;
  t19876 = t19445 + t19490 + t19847;
  t19883 = -1.*t7674;
  t19884 = 1. + t19883;
  t19889 = -0.325*t19884;
  t19890 = -1.*t2710*t19488;
  t19916 = t7674*t19782;
  t19929 = t19889 + t19890 + t19916;
  t19088 = -1.*t300;
  t19101 = 1. + t19088;
  t19105 = -0.1575*t19101;
  t19225 = -0.2255*t300;
  t19877 = -1.*t10660*t19876;
  t19881 = t19105 + t19225 + t19877;
  t20020 = -0.068*t10660;
  t20038 = t300*t19876;
  t20043 = t20020 + t20038;
  t20052 = t8720*t19929;
  t20053 = -1.*t19881*t10954;
  t20058 = t20052 + t20053;
  t19882 = t8720*t19881;
  t19948 = t19929*t10954;
  t19968 = t19882 + t19948;
  t20045 = t20043*t8675;
  t20059 = t8712*t20058;
  t20060 = t20045 + t20059;
  t20066 = t8712*t20043;
  t20067 = -1.*t8675*t20058;
  t20072 = t20066 + t20067;
  t8678 = t300*t8416*t8675;
  t12363 = t8712*t11860;
  t12853 = t8678 + t12363;
  t19977 = -1.*t300*t8720*t19968;
  t20086 = t19968*t17931;
  t20107 = t19968*t17333;
  t20123 = -1.*t19968*t17931;
  t20145 = t300*t8720*t19968;
  t20181 = -1.*t19968*t17333;
  t20222 = -1.*t10660*t20043;
  t20226 = t300*t20043*t9531;
  t20270 = -1.*t300*t20043*t9531;
  t20249 = t300*t20043*t8416;
  t20285 = t10660*t20043;
  t20317 = -1.*t300*t20043*t8416;
  t20559 = t19929*t9531;
  t20426 = -1.*t19929*t16008;
  p_output1[0]=t12853;
  p_output1[1]=t13167;
  p_output1[2]=t16600;
  p_output1[3]=t16656*t17333 - 1.*t17396*t17465;
  p_output1[4]=-1.*t17396*t17875 + t16656*t300*t8720;
  p_output1[5]=t16656*t17931 - 1.*t17396*t18062;
  p_output1[6]=t17333*t17396 + t16656*t17465;
  p_output1[7]=t16656*t17875 + t17396*t300*t8720;
  p_output1[8]=t17396*t17931 + t16656*t18062;
  p_output1[9]=t16600*(t19977 - 1.*t13167*t20060 - 1.*t17875*t20072) + t13167*(t16600*t20060 + t18062*t20072 + t20086);
  p_output1[10]=t16600*(t12853*t20060 + t17465*t20072 + t20107) + t12853*(-1.*t16600*t20060 - 1.*t18062*t20072 + t20123);
  p_output1[11]=t12853*(t13167*t20060 + t17875*t20072 + t20145) + t13167*(-1.*t12853*t20060 - 1.*t17465*t20072 + t20181);
  p_output1[12]=t17931*(t19977 + t20222 + t10954*t20058*t300) + (t16231*t20058 + t20086 + t20226)*t300*t8720;
  p_output1[13]=t17931*(t11860*t20058 + t20107 + t20249) + t17333*(-1.*t16231*t20058 + t20123 + t20270);
  p_output1[14]=t17333*(t20145 + t20285 - 1.*t10954*t20058*t300) + (-1.*t11860*t20058 + t20181 + t20317)*t300*t8720;
  p_output1[15]=t300*(t20222 - 1.*t19881*t300)*t9531 + t10660*(t16008*t19929 + t20226 - 1.*t10660*t19881*t9531);
  p_output1[16]=t300*(t20249 + t20559 - 1.*t10660*t19881*t8416)*t9531 + t300*t8416*(t20270 + t20426 + t10660*t19881*t9531);
  p_output1[17]=t300*(t20285 + t19881*t300)*t8416 + t10660*(t20317 + t10660*t19881*t8416 - 1.*t19929*t9531);
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
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
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0.2255*t16008 + 0.1575*t8416;
  p_output1[46]=t16008*(t20559 + t19876*t8416) + t9531*(t20426 - 1.*t19876*t9531);
  p_output1[47]=-0.068*t9531;
  p_output1[48]=-1.*t19488*t2118 - 0.325*t8166 - 1.*t19782*t8166;
  p_output1[49]=0;
  p_output1[50]=0.325*t2118 + t19782*t2118 - 1.*t19488*t8166;
  p_output1[51]=-0.0641;
  p_output1[52]=0;
  p_output1[53]=-0.28;
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

#include "Jh_RrFoot_ParallelStance.hh"

namespace SymFunction
{

void Jh_RrFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
