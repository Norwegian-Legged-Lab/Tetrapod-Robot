/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:49:25 GMT+02:00
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
  double t28;
  double t15;
  double t19;
  double t36;
  double t81;
  double t85;
  double t89;
  double t72;
  double t93;
  double t64;
  double t98;
  double t57;
  double t22;
  double t44;
  double t50;
  double t51;
  double t90;
  double t99;
  double t103;
  double t127;
  double t116;
  double t117;
  double t120;
  double t114;
  double t131;
  double t133;
  double t138;
  double t203;
  double t215;
  double t236;
  double t242;
  double t245;
  double t247;
  double t248;
  double t250;
  double t256;
  double t261;
  double t264;
  double t269;
  double t270;
  double t279;
  double t280;
  double t281;
  double t228;
  double t230;
  double t234;
  double t271;
  double t272;
  double t288;
  double t290;
  double t292;
  double t293;
  double t294;
  double t297;
  double t302;
  double t318;
  double t319;
  double t323;
  double t276;
  double t282;
  double t286;
  double t157;
  double t166;
  double t169;
  double t171;
  double t177;
  double t179;
  double t182;
  double t192;
  double t193;
  double t309;
  double t325;
  double t327;
  double t330;
  double t332;
  double t336;
  double t345;
  double t354;
  double t361;
  double t195;
  double t196;
  double t197;
  double t287;
  double t371;
  double t53;
  double t105;
  double t110;
  double t396;
  double t402;
  double t403;
  double t548;
  double t573;
  double t611;
  double t627;
  double t815;
  double t880;
  t28 = Cos(var1[10]);
  t15 = Cos(var1[11]);
  t19 = Sin(var1[10]);
  t36 = Sin(var1[11]);
  t81 = -1.*t28*t15;
  t85 = -1.*t19*t36;
  t89 = t81 + t85;
  t72 = Cos(var1[5]);
  t93 = Sin(var1[9]);
  t64 = Cos(var1[9]);
  t98 = Sin(var1[5]);
  t57 = Cos(var1[4]);
  t22 = -1.*t15*t19;
  t44 = t28*t36;
  t50 = t22 + t44;
  t51 = Sin(var1[4]);
  t90 = t64*t72*t89;
  t99 = -1.*t93*t89*t98;
  t103 = t90 + t99;
  t127 = Sin(var1[3]);
  t116 = t72*t93*t89;
  t117 = t64*t89*t98;
  t120 = t116 + t117;
  t114 = Cos(var1[3]);
  t131 = t57*t50;
  t133 = -1.*t51*t103;
  t138 = t131 + t133;
  t203 = -1.*t64;
  t215 = 1. + t203;
  t236 = -1.*t28;
  t242 = 1. + t236;
  t245 = -0.28121*t242;
  t247 = -1.*t15;
  t248 = 1. + t247;
  t250 = -0.50321*t248;
  t256 = -0.19821*t15;
  t261 = t250 + t256;
  t264 = t28*t261;
  t269 = 0.305*t19*t36;
  t270 = t245 + t264 + t269;
  t279 = -0.15121*t215;
  t280 = t64*t270;
  t281 = t279 + t280;
  t228 = 0.15121*t215;
  t230 = 0.15121*t64;
  t234 = 0.15121*t93;
  t271 = t93*t270;
  t272 = t228 + t230 + t234 + t271;
  t288 = t72*t93;
  t290 = t64*t98;
  t292 = t288 + t290;
  t293 = 0.28121*t19;
  t294 = t261*t19;
  t297 = -0.305*t28*t36;
  t302 = t293 + t294 + t297;
  t318 = t72*t281;
  t319 = -1.*t272*t98;
  t323 = t318 + t319;
  t276 = t72*t272;
  t282 = t281*t98;
  t286 = t276 + t282;
  t157 = t28*t15;
  t166 = t19*t36;
  t169 = t157 + t166;
  t171 = t169*t51;
  t177 = t64*t72*t50;
  t179 = -1.*t93*t50*t98;
  t182 = t177 + t179;
  t192 = t57*t182;
  t193 = t171 + t192;
  t309 = t302*t51;
  t325 = t57*t323;
  t327 = t309 + t325;
  t330 = t57*t302;
  t332 = -1.*t51*t323;
  t336 = t330 + t332;
  t345 = t72*t93*t50;
  t354 = t64*t50*t98;
  t361 = t345 + t354;
  t195 = -1.*t64*t72;
  t196 = t93*t98;
  t197 = t195 + t196;
  t287 = -1.*t197*t286;
  t371 = t361*t286;
  t53 = t50*t51;
  t105 = t57*t103;
  t110 = t53 + t105;
  t396 = t57*t169;
  t402 = -1.*t51*t182;
  t403 = t396 + t402;
  t548 = -1.*t361*t286;
  t573 = t120*t286;
  t611 = -1.*t302*t169;
  t627 = t302*t50;
  t815 = t197*t286;
  t880 = -1.*t120*t286;
  p_output1[0]=t110;
  p_output1[1]=t114*t120 - 1.*t127*t138;
  p_output1[2]=t120*t127 + t114*t138;
  p_output1[3]=t292*(t193*t327 + t371 + t336*t403)*t57 + t193*(t287 + t292*t336*t51 - 1.*t292*t327*t57);
  p_output1[4]=(t287 - 1.*t292*t323)*t361 + t197*(t169*t302 + t182*t323 + t371);
  p_output1[5]=t169*(t272*t64 - 1.*t281*t93);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.15121*t169 + 0.15121*t89;
  p_output1[10]=0.28121*t36 - 0.305*t15*t36 + t261*t36;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t292*t57;
  p_output1[19]=t114*t197 + t127*t292*t51;
  p_output1[20]=t127*t197 - 1.*t114*t292*t51;
  p_output1[21]=t110*(-1.*t193*t327 - 1.*t336*t403 + t548) + t193*(t110*t327 + t138*t336 + t573);
  p_output1[22]=t120*(-1.*t182*t323 + t548 + t611) + t361*(t103*t323 + t573 + t627);
  p_output1[23]=t50*(t611 - 1.*t281*t50*t64 - 1.*t272*t50*t93) + t169*(t627 + t281*t64*t89 + t272*t89*t93);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.15121 + t50*(-1.*t270*t50 + t611) + t169*(t627 + t270*t89);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t193;
  p_output1[37]=t114*t361 - 1.*t127*t403;
  p_output1[38]=t127*t361 + t114*t403;
  p_output1[39]=t110*(-1.*t292*t336*t51 + t292*t327*t57 + t815) + t292*t57*(-1.*t110*t327 - 1.*t138*t336 + t880);
  p_output1[40]=t120*(t292*t323 + t815) + t197*(-1.*t103*t323 - 1.*t302*t50 + t880);
  p_output1[41]=t50*(-1.*t272*t64 + t281*t93);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0.28121*t15 + t15*t261 + 0.305*Power(t36,2);
  p_output1[47]=-0.305;
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

#include "fRlFoot_map_DiagonalStance.hh"

namespace SymFunction
{

void fRlFoot_map_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
