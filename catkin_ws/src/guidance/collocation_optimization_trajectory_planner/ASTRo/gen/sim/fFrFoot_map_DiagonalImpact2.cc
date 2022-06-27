/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:21:27 GMT+02:00
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
  double t3452;
  double t98;
  double t1030;
  double t3513;
  double t3899;
  double t4849;
  double t4863;
  double t3898;
  double t5069;
  double t3708;
  double t5070;
  double t3701;
  double t3331;
  double t3526;
  double t3582;
  double t3647;
  double t4867;
  double t5078;
  double t5079;
  double t11728;
  double t7826;
  double t7990;
  double t8368;
  double t7806;
  double t11763;
  double t11833;
  double t11882;
  double t13564;
  double t13805;
  double t14346;
  double t17079;
  double t17230;
  double t20994;
  double t21092;
  double t21102;
  double t21142;
  double t21147;
  double t21154;
  double t21155;
  double t21156;
  double t21161;
  double t21166;
  double t21167;
  double t21179;
  double t21180;
  double t21181;
  double t17362;
  double t17388;
  double t17432;
  double t21168;
  double t21173;
  double t21185;
  double t21186;
  double t21187;
  double t21188;
  double t21189;
  double t21190;
  double t21191;
  double t21193;
  double t21194;
  double t21232;
  double t21178;
  double t21182;
  double t21183;
  double t13554;
  double t14449;
  double t14841;
  double t14979;
  double t16081;
  double t16161;
  double t21192;
  double t21236;
  double t21237;
  double t21240;
  double t21241;
  double t21242;
  double t21247;
  double t21248;
  double t21249;
  double t16934;
  double t16985;
  double t17052;
  double t21184;
  double t21250;
  double t3651;
  double t7582;
  double t7586;
  double t21253;
  double t21254;
  double t21255;
  double t21285;
  double t21291;
  double t21298;
  double t21302;
  double t21329;
  double t21335;
  t3452 = Cos(var1[13]);
  t98 = Cos(var1[14]);
  t1030 = Sin(var1[13]);
  t3513 = Sin(var1[14]);
  t3899 = t3452*t98;
  t4849 = t1030*t3513;
  t4863 = t3899 + t4849;
  t3898 = Cos(var1[5]);
  t5069 = Sin(var1[12]);
  t3708 = Cos(var1[12]);
  t5070 = Sin(var1[5]);
  t3701 = Cos(var1[4]);
  t3331 = -1.*t98*t1030;
  t3526 = t3452*t3513;
  t3582 = t3331 + t3526;
  t3647 = Sin(var1[4]);
  t4867 = t3708*t3898*t4863;
  t5078 = -1.*t5069*t4863*t5070;
  t5079 = t4867 + t5078;
  t11728 = Sin(var1[3]);
  t7826 = t3898*t5069*t4863;
  t7990 = t3708*t4863*t5070;
  t8368 = t7826 + t7990;
  t7806 = Cos(var1[3]);
  t11763 = t3701*t3582;
  t11833 = -1.*t3647*t5079;
  t11882 = t11763 + t11833;
  t13564 = t98*t1030;
  t13805 = -1.*t3452*t3513;
  t14346 = t13564 + t13805;
  t17079 = -1.*t3708;
  t17230 = 1. + t17079;
  t20994 = -1.*t3452;
  t21092 = 1. + t20994;
  t21102 = 0.28121*t21092;
  t21142 = -1.*t98;
  t21147 = 1. + t21142;
  t21154 = 0.50321*t21147;
  t21155 = 0.19821*t98;
  t21156 = t21154 + t21155;
  t21161 = t3452*t21156;
  t21166 = -0.305*t1030*t3513;
  t21167 = t21102 + t21161 + t21166;
  t21179 = 0.15121*t17230;
  t21180 = t3708*t21167;
  t21181 = t21179 + t21180;
  t17362 = -0.15121*t17230;
  t17388 = -0.15121*t3708;
  t17432 = -0.15121*t5069;
  t21168 = t5069*t21167;
  t21173 = t17362 + t17388 + t17432 + t21168;
  t21185 = -1.*t3898*t5069;
  t21186 = -1.*t3708*t5070;
  t21187 = t21185 + t21186;
  t21188 = 0.28121*t1030;
  t21189 = -1.*t21156*t1030;
  t21190 = -0.305*t3452*t3513;
  t21191 = t21188 + t21189 + t21190;
  t21193 = t3898*t21181;
  t21194 = -1.*t21173*t5070;
  t21232 = t21193 + t21194;
  t21178 = t3898*t21173;
  t21182 = t21181*t5070;
  t21183 = t21178 + t21182;
  t13554 = t4863*t3647;
  t14449 = t3708*t3898*t14346;
  t14841 = -1.*t5069*t14346*t5070;
  t14979 = t14449 + t14841;
  t16081 = t3701*t14979;
  t16161 = t13554 + t16081;
  t21192 = t21191*t3647;
  t21236 = t3701*t21232;
  t21237 = t21192 + t21236;
  t21240 = t3701*t21191;
  t21241 = -1.*t3647*t21232;
  t21242 = t21240 + t21241;
  t21247 = t3898*t5069*t14346;
  t21248 = t3708*t14346*t5070;
  t21249 = t21247 + t21248;
  t16934 = t3708*t3898;
  t16985 = -1.*t5069*t5070;
  t17052 = t16934 + t16985;
  t21184 = -1.*t17052*t21183;
  t21250 = t21249*t21183;
  t3651 = t3582*t3647;
  t7582 = t3701*t5079;
  t7586 = t3651 + t7582;
  t21253 = t3701*t4863;
  t21254 = -1.*t3647*t14979;
  t21255 = t21253 + t21254;
  t21285 = -1.*t21249*t21183;
  t21291 = t8368*t21183;
  t21298 = -1.*t21191*t4863;
  t21302 = t21191*t3582;
  t21329 = t17052*t21183;
  t21335 = -1.*t8368*t21183;
  p_output1[0]=t7586;
  p_output1[1]=-1.*t11728*t11882 + t7806*t8368;
  p_output1[2]=t11882*t7806 + t11728*t8368;
  p_output1[3]=t21187*(t16161*t21237 + t21250 + t21242*t21255)*t3701 + t16161*(t21184 + t21187*t21242*t3647 - 1.*t21187*t21237*t3701);
  p_output1[4]=(t21184 - 1.*t21187*t21232)*t21249 + t17052*(t14979*t21232 + t21250 + t21191*t4863);
  p_output1[5]=t4863*(-1.*t21173*t3708 + t21181*t5069);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0.28121*t3513 - 1.*t21156*t3513 - 0.305*t3513*t98;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t21187*t3701;
  p_output1[19]=t11728*t21187*t3647 + t17052*t7806;
  p_output1[20]=t11728*t17052 - 1.*t21187*t3647*t7806;
  p_output1[21]=(-1.*t16161*t21237 - 1.*t21242*t21255 + t21285)*t7586 + t16161*(t11882*t21242 + t21291 + t21237*t7586);
  p_output1[22]=t21249*(t21291 + t21302 + t21232*t5079) + (-1.*t14979*t21232 + t21285 + t21298)*t8368;
  p_output1[23]=t3582*(t21298 - 1.*t14346*t21181*t3708 - 1.*t14346*t21173*t5069) + t4863*(t21302 + t21181*t3708*t4863 + t21173*t4863*t5069);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=-0.15121 + (-1.*t14346*t21167 + t21298)*t3582 + t4863*(t21302 + t21167*t4863);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t16161;
  p_output1[37]=-1.*t11728*t21255 + t21249*t7806;
  p_output1[38]=t11728*t21249 + t21255*t7806;
  p_output1[39]=(t21329 - 1.*t21187*t21242*t3647 + t21187*t21237*t3701)*t7586 + t21187*t3701*(-1.*t11882*t21242 + t21335 - 1.*t21237*t7586);
  p_output1[40]=t17052*(t21335 - 1.*t21191*t3582 - 1.*t21232*t5079) + (t21187*t21232 + t21329)*t8368;
  p_output1[41]=t3582*(t21173*t3708 - 1.*t21181*t5069);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.15121*t14346 - 0.15121*t3582;
  p_output1[49]=0.305*Power(t3513,2) + 0.28121*t98 - 1.*t21156*t98;
  p_output1[50]=-0.305;
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
