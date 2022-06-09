/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 10:40:39 GMT+02:00
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
  double t24222;
  double t24136;
  double t24214;
  double t24232;
  double t24221;
  double t24243;
  double t24246;
  double t28976;
  double t29016;
  double t28983;
  double t28984;
  double t28992;
  double t29025;
  double t18022;
  double t24339;
  double t24247;
  double t29001;
  double t29027;
  double t29028;
  double t29139;
  double t29048;
  double t29051;
  double t29123;
  double t29047;
  double t29148;
  double t29149;
  double t29150;
  double t29191;
  double t29200;
  double t29201;
  double t29204;
  double t29206;
  double t29207;
  double t29210;
  double t29215;
  double t29216;
  double t29190;
  double t29202;
  double t29217;
  double t29218;
  double t29222;
  double t29223;
  double t29225;
  double t29226;
  double t29228;
  double t29229;
  double t29183;
  double t29187;
  double t29188;
  double t29189;
  double t29219;
  double t29220;
  double t29242;
  double t29247;
  double t29248;
  double t29250;
  double t29254;
  double t29255;
  double t29239;
  double t29240;
  double t29241;
  double t29221;
  double t29236;
  double t29237;
  double t29171;
  double t29176;
  double t29177;
  double t29249;
  double t29259;
  double t29260;
  double t29170;
  double t29178;
  double t29179;
  double t29180;
  double t29181;
  double t29182;
  double t29270;
  double t29279;
  double t29283;
  double t29309;
  double t29311;
  double t29313;
  double t29238;
  double t29317;
  double t29335;
  double t29339;
  double t29262;
  double t29263;
  double t29265;
  double t24286;
  double t29033;
  double t29034;
  double t29325;
  double t29326;
  double t29327;
  double t29388;
  double t29393;
  double t29403;
  double t29399;
  double t29414;
  double t29409;
  double t29442;
  double t29450;
  double t29456;
  double t29466;
  t24222 = Cos(var1[13]);
  t24136 = Cos(var1[14]);
  t24214 = Sin(var1[13]);
  t24232 = Sin(var1[14]);
  t24221 = t24136*t24214;
  t24243 = -1.*t24222*t24232;
  t24246 = t24221 + t24243;
  t28976 = Cos(var1[5]);
  t29016 = Sin(var1[12]);
  t28983 = t24222*t24136;
  t28984 = t24214*t24232;
  t28992 = t28983 + t28984;
  t29025 = Sin(var1[5]);
  t18022 = Cos(var1[12]);
  t24339 = Cos(var1[4]);
  t24247 = Sin(var1[4]);
  t29001 = t28976*t28992;
  t29027 = t29016*t24246*t29025;
  t29028 = t29001 + t29027;
  t29139 = Sin(var1[3]);
  t29048 = -1.*t28976*t29016*t24246;
  t29051 = t28992*t29025;
  t29123 = t29048 + t29051;
  t29047 = Cos(var1[3]);
  t29148 = t18022*t24339*t24246;
  t29149 = -1.*t24247*t29028;
  t29150 = t29148 + t29149;
  t29191 = -0.0641*t24136;
  t29200 = -0.28*t24232;
  t29201 = t29191 + t29200;
  t29204 = -1.*t24136;
  t29206 = 1. + t29204;
  t29207 = 0.075*t29206;
  t29210 = 0.355*t24136;
  t29215 = -0.0641*t24232;
  t29216 = t29207 + t29210 + t29215;
  t29190 = -0.325*t24214;
  t29202 = t24222*t29201;
  t29217 = t24214*t29216;
  t29218 = t29190 + t29202 + t29217;
  t29222 = -1.*t24222;
  t29223 = 1. + t29222;
  t29225 = 0.325*t29223;
  t29226 = -1.*t24214*t29201;
  t29228 = t24222*t29216;
  t29229 = t29225 + t29226 + t29228;
  t29183 = -1.*t18022;
  t29187 = 1. + t29183;
  t29188 = -0.1575*t29187;
  t29189 = -0.2255*t18022;
  t29219 = -1.*t29016*t29218;
  t29220 = t29188 + t29189 + t29219;
  t29242 = -0.068*t29016;
  t29247 = t18022*t29218;
  t29248 = t29242 + t29247;
  t29250 = t28976*t29229;
  t29254 = -1.*t29220*t29025;
  t29255 = t29250 + t29254;
  t29239 = t29016*t24247;
  t29240 = -1.*t18022*t24339*t29025;
  t29241 = t29239 + t29240;
  t29221 = t28976*t29220;
  t29236 = t29229*t29025;
  t29237 = t29221 + t29236;
  t29171 = -1.*t24136*t24214;
  t29176 = t24222*t24232;
  t29177 = t29171 + t29176;
  t29249 = t29248*t24247;
  t29259 = t24339*t29255;
  t29260 = t29249 + t29259;
  t29170 = t18022*t28992*t24247;
  t29178 = t28976*t29177;
  t29179 = t29016*t28992*t29025;
  t29180 = t29178 + t29179;
  t29181 = t24339*t29180;
  t29182 = t29170 + t29181;
  t29270 = t24339*t29248;
  t29279 = -1.*t24247*t29255;
  t29283 = t29270 + t29279;
  t29309 = -1.*t28976*t29016*t28992;
  t29311 = t29177*t29025;
  t29313 = t29309 + t29311;
  t29238 = -1.*t18022*t28976*t29237;
  t29317 = t29237*t29313;
  t29335 = -1.*t29016*t29248;
  t29339 = t18022*t29248*t28992;
  t29262 = t24339*t29016;
  t29263 = t18022*t24247*t29025;
  t29265 = t29262 + t29263;
  t24286 = t18022*t24246*t24247;
  t29033 = t24339*t29028;
  t29034 = t24286 + t29033;
  t29325 = t18022*t24339*t28992;
  t29326 = -1.*t24247*t29180;
  t29327 = t29325 + t29326;
  t29388 = t29237*t29123;
  t29393 = -1.*t29237*t29313;
  t29403 = -1.*t18022*t29248*t28992;
  t29399 = t18022*t29248*t24246;
  t29414 = t29229*t28992;
  t29409 = -1.*t29229*t29177;
  t29442 = t18022*t28976*t29237;
  t29450 = -1.*t29237*t29123;
  t29456 = t29016*t29248;
  t29466 = -1.*t18022*t29248*t24246;
  p_output1[0]=t29034;
  p_output1[1]=t29047*t29123 - 1.*t29139*t29150;
  p_output1[2]=t29123*t29139 + t29047*t29150;
  p_output1[3]=t29182*(t29238 - 1.*t29241*t29260 - 1.*t29265*t29283) + t29241*(t29182*t29260 + t29317 + t29283*t29327);
  p_output1[4]=t29313*(t29238 + t18022*t29025*t29255 + t29335) + t18022*t28976*(t29180*t29255 + t29317 + t29339);
  p_output1[5]=t18022*t28992*(-1.*t18022*t29220 + t29335) + t29016*(-1.*t28992*t29016*t29220 + t29177*t29229 + t29339);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0.1575*t24246 + 0.2255*t29177;
  p_output1[13]=0.325*t24232 - 1.*t24136*t29201 - 1.*t24232*t29216;
  p_output1[14]=-0.0641;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t29241;
  p_output1[19]=t18022*t28976*t29047 - 1.*t29139*t29265;
  p_output1[20]=t18022*t28976*t29139 + t29047*t29265;
  p_output1[21]=t29182*(t29034*t29260 + t29150*t29283 + t29388) + t29034*(-1.*t29182*t29260 - 1.*t29283*t29327 + t29393);
  p_output1[22]=t29313*(t29028*t29255 + t29388 + t29399) + t29123*(-1.*t29180*t29255 + t29393 + t29403);
  p_output1[23]=t18022*t24246*(t28992*t29016*t29220 + t29403 + t29409) + t18022*t28992*(-1.*t24246*t29016*t29220 + t29399 + t29414);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=t28992*(-1.*t28992*t29218 + t29409) + t29177*(t24246*t29218 + t29414);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t29182;
  p_output1[37]=t29047*t29313 - 1.*t29139*t29327;
  p_output1[38]=t29139*t29313 + t29047*t29327;
  p_output1[39]=t29034*(t29241*t29260 + t29265*t29283 + t29442) + t29241*(-1.*t29034*t29260 - 1.*t29150*t29283 + t29450);
  p_output1[40]=t29123*(-1.*t18022*t29025*t29255 + t29442 + t29456) + t18022*t28976*(-1.*t29028*t29255 + t29450 + t29466);
  p_output1[41]=t18022*t24246*(t18022*t29220 + t29456) + t29016*(t24246*t29016*t29220 - 1.*t28992*t29229 + t29466);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.068*t28992;
  p_output1[49]=-0.325*t24136 - 1.*t24232*t29201 + t24136*t29216;
  p_output1[50]=-0.28;
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

#include "fFrFoot_map_ParallelStance.hh"

namespace SymFunction
{

void fFrFoot_map_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
