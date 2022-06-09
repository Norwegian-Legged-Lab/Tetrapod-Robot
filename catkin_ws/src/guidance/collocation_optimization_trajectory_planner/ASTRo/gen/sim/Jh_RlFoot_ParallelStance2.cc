/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:38:04 GMT+02:00
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
  double t8213;
  double t3069;
  double t5246;
  double t8388;
  double t9952;
  double t9961;
  double t9966;
  double t9940;
  double t9947;
  double t9969;
  double t9945;
  double t9975;
  double t8673;
  double t5311;
  double t8636;
  double t8668;
  double t9968;
  double t9977;
  double t10005;
  double t10288;
  double t10024;
  double t10034;
  double t10036;
  double t10213;
  double t10121;
  double t10157;
  double t10169;
  double t10182;
  double t10184;
  double t10191;
  double t10240;
  double t10241;
  double t10252;
  double t10298;
  double t10322;
  double t10344;
  double t11069;
  double t11072;
  double t11076;
  double t11082;
  double t11274;
  double t11304;
  double t11314;
  double t11344;
  double t11359;
  double t10172;
  double t10194;
  double t10203;
  double t11635;
  double t11636;
  double t11762;
  double t11791;
  double t11896;
  double t11909;
  double t11912;
  double t11954;
  double t11983;
  double t12442;
  double t12447;
  double t12507;
  double t12520;
  double t13009;
  double t13020;
  double t13055;
  double t11638;
  double t11639;
  double t11737;
  double t12525;
  double t12540;
  double t13113;
  double t13114;
  double t13138;
  double t13148;
  double t13169;
  double t13185;
  double t13186;
  double t12864;
  double t13099;
  double t13100;
  double t13152;
  double t13205;
  double t13221;
  double t13257;
  double t13262;
  double t13271;
  double t9874;
  double t10010;
  double t10011;
  double t13112;
  double t13313;
  double t13328;
  double t13341;
  double t13357;
  double t13368;
  double t14014;
  double t14026;
  t8213 = Cos(var1[10]);
  t3069 = Cos(var1[11]);
  t5246 = Sin(var1[10]);
  t8388 = Sin(var1[11]);
  t9952 = -1.*t8213*t3069;
  t9961 = -1.*t5246*t8388;
  t9966 = t9952 + t9961;
  t9940 = Cos(var1[4]);
  t9947 = Cos(var1[5]);
  t9969 = Sin(var1[9]);
  t9945 = Cos(var1[9]);
  t9975 = Sin(var1[5]);
  t8673 = Sin(var1[4]);
  t5311 = -1.*t3069*t5246;
  t8636 = t8213*t8388;
  t8668 = t5311 + t8636;
  t9968 = t9945*t9947*t9966;
  t9977 = -1.*t9969*t9966*t9975;
  t10005 = t9968 + t9977;
  t10288 = Sin(var1[3]);
  t10024 = t9947*t9969;
  t10034 = t9945*t9975;
  t10036 = t10024 + t10034;
  t10213 = Cos(var1[3]);
  t10121 = t8213*t3069;
  t10157 = t5246*t8388;
  t10169 = t10121 + t10157;
  t10182 = t9945*t9947*t8668;
  t10184 = -1.*t9969*t8668*t9975;
  t10191 = t10182 + t10184;
  t10240 = t9947*t9969*t9966;
  t10241 = t9945*t9966*t9975;
  t10252 = t10240 + t10241;
  t10298 = t9940*t8668;
  t10322 = -1.*t8673*t10005;
  t10344 = t10298 + t10322;
  t11069 = -1.*t9945*t9947;
  t11072 = t9969*t9975;
  t11076 = t11069 + t11072;
  t11082 = t9947*t9969*t8668;
  t11274 = t9945*t8668*t9975;
  t11304 = t11082 + t11274;
  t11314 = t9940*t10169;
  t11344 = -1.*t8673*t10191;
  t11359 = t11314 + t11344;
  t10172 = t10169*t8673;
  t10194 = t9940*t10191;
  t10203 = t10172 + t10194;
  t11635 = -1.*t9945;
  t11636 = 1. + t11635;
  t11762 = -1.*t8213;
  t11791 = 1. + t11762;
  t11896 = -0.28121*t11791;
  t11909 = -1.*t3069;
  t11912 = 1. + t11909;
  t11954 = -0.50321*t11912;
  t11983 = -0.19821*t3069;
  t12442 = t11954 + t11983;
  t12447 = t8213*t12442;
  t12507 = 0.305*t5246*t8388;
  t12520 = t11896 + t12447 + t12507;
  t13009 = -0.15121*t11636;
  t13020 = t9945*t12520;
  t13055 = t13009 + t13020;
  t11638 = 0.15121*t11636;
  t11639 = 0.15121*t9945;
  t11737 = 0.15121*t9969;
  t12525 = t9969*t12520;
  t12540 = t11638 + t11639 + t11737 + t12525;
  t13113 = 0.28121*t5246;
  t13114 = t12442*t5246;
  t13138 = -0.305*t8213*t8388;
  t13148 = t13113 + t13114 + t13138;
  t13169 = t9947*t13055;
  t13185 = -1.*t12540*t9975;
  t13186 = t13169 + t13185;
  t12864 = t9947*t12540;
  t13099 = t13055*t9975;
  t13100 = t12864 + t13099;
  t13152 = t13148*t8673;
  t13205 = t9940*t13186;
  t13221 = t13152 + t13205;
  t13257 = t9940*t13148;
  t13262 = -1.*t8673*t13186;
  t13271 = t13257 + t13262;
  t9874 = t8668*t8673;
  t10010 = t9940*t10005;
  t10011 = t9874 + t10010;
  t13112 = -1.*t11076*t13100;
  t13313 = t11304*t13100;
  t13328 = -1.*t11304*t13100;
  t13341 = t10252*t13100;
  t13357 = t11076*t13100;
  t13368 = -1.*t10252*t13100;
  t14014 = -1.*t13148*t10169;
  t14026 = t13148*t8668;
  p_output1[0]=t10011;
  p_output1[1]=t10036*t9940;
  p_output1[2]=t10203;
  p_output1[3]=t10213*t10252 - 1.*t10288*t10344;
  p_output1[4]=t10213*t11076 + t10036*t10288*t8673;
  p_output1[5]=t10213*t11304 - 1.*t10288*t11359;
  p_output1[6]=t10252*t10288 + t10213*t10344;
  p_output1[7]=t10288*t11076 - 1.*t10036*t10213*t8673;
  p_output1[8]=t10288*t11304 + t10213*t11359;
  p_output1[9]=t10036*(t10203*t13221 + t11359*t13271 + t13313)*t9940 + t10203*(t13112 + t10036*t13271*t8673 - 1.*t10036*t13221*t9940);
  p_output1[10]=t10011*(-1.*t10203*t13221 - 1.*t11359*t13271 + t13328) + t10203*(t10011*t13221 + t10344*t13271 + t13341);
  p_output1[11]=t10036*(-1.*t10011*t13221 - 1.*t10344*t13271 + t13368)*t9940 + t10011*(t13357 - 1.*t10036*t13271*t8673 + t10036*t13221*t9940);
  p_output1[12]=t11304*(t13112 - 1.*t10036*t13186) + t11076*(t10169*t13148 + t10191*t13186 + t13313);
  p_output1[13]=t10252*(-1.*t10191*t13186 + t13328 + t14014) + t11304*(t10005*t13186 + t13341 + t14026);
  p_output1[14]=t10252*(t10036*t13186 + t13357) + t11076*(-1.*t10005*t13186 + t13368 - 1.*t13148*t8668);
  p_output1[15]=t10169*(t12540*t9945 - 1.*t13055*t9969);
  p_output1[16]=t8668*(t14014 - 1.*t13055*t8668*t9945 - 1.*t12540*t8668*t9969) + t10169*(t14026 + t13055*t9945*t9966 + t12540*t9966*t9969);
  p_output1[17]=t8668*(-1.*t12540*t9945 + t13055*t9969);
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0.15121*t10169 + 0.15121*t9966;
  p_output1[28]=-0.15121 + t8668*(t14014 - 1.*t12520*t8668) + t10169*(t14026 + t12520*t9966);
  p_output1[29]=0;
  p_output1[30]=0.28121*t8388 + t12442*t8388 - 0.305*t3069*t8388;
  p_output1[31]=0;
  p_output1[32]=0.28121*t3069 + t12442*t3069 + 0.305*Power(t8388,2);
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=-0.305;
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
