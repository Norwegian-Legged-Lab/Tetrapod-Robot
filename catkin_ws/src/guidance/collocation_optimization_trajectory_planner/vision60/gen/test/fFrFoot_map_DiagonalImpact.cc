/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 10:40:45 GMT+02:00
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
  double t23672;
  double t3525;
  double t8258;
  double t26927;
  double t17978;
  double t30079;
  double t30140;
  double t30151;
  double t30168;
  double t30153;
  double t30159;
  double t30165;
  double t30173;
  double t3153;
  double t30150;
  double t30142;
  double t30166;
  double t30178;
  double t30179;
  double t30189;
  double t30184;
  double t30185;
  double t30186;
  double t30183;
  double t30190;
  double t30192;
  double t30193;
  double t30261;
  double t30262;
  double t30263;
  double t30265;
  double t30267;
  double t30268;
  double t30269;
  double t30270;
  double t30272;
  double t30260;
  double t30264;
  double t30273;
  double t30274;
  double t30278;
  double t30280;
  double t30281;
  double t30282;
  double t30284;
  double t30285;
  double t30255;
  double t30256;
  double t30257;
  double t30258;
  double t30275;
  double t30276;
  double t30294;
  double t30295;
  double t30296;
  double t30298;
  double t30300;
  double t30301;
  double t30290;
  double t30291;
  double t30292;
  double t30277;
  double t30286;
  double t30287;
  double t30245;
  double t30246;
  double t30248;
  double t30297;
  double t30302;
  double t30304;
  double t30244;
  double t30249;
  double t30250;
  double t30251;
  double t30252;
  double t30253;
  double t30309;
  double t30310;
  double t30311;
  double t30315;
  double t30316;
  double t30317;
  double t30288;
  double t30318;
  double t30327;
  double t30332;
  double t30306;
  double t30307;
  double t30308;
  double t30144;
  double t30180;
  double t30182;
  double t30320;
  double t30321;
  double t30322;
  double t30359;
  double t30364;
  double t30374;
  double t30370;
  double t30384;
  double t30379;
  double t30401;
  double t30406;
  double t30412;
  double t30416;
  t23672 = Cos(var1[13]);
  t3525 = Cos(var1[14]);
  t8258 = Sin(var1[13]);
  t26927 = Sin(var1[14]);
  t17978 = t3525*t8258;
  t30079 = -1.*t23672*t26927;
  t30140 = t17978 + t30079;
  t30151 = Cos(var1[5]);
  t30168 = Sin(var1[12]);
  t30153 = t23672*t3525;
  t30159 = t8258*t26927;
  t30165 = t30153 + t30159;
  t30173 = Sin(var1[5]);
  t3153 = Cos(var1[12]);
  t30150 = Cos(var1[4]);
  t30142 = Sin(var1[4]);
  t30166 = t30151*t30165;
  t30178 = t30168*t30140*t30173;
  t30179 = t30166 + t30178;
  t30189 = Sin(var1[3]);
  t30184 = -1.*t30151*t30168*t30140;
  t30185 = t30165*t30173;
  t30186 = t30184 + t30185;
  t30183 = Cos(var1[3]);
  t30190 = t3153*t30150*t30140;
  t30192 = -1.*t30142*t30179;
  t30193 = t30190 + t30192;
  t30261 = -0.0641*t3525;
  t30262 = -0.28*t26927;
  t30263 = t30261 + t30262;
  t30265 = -1.*t3525;
  t30267 = 1. + t30265;
  t30268 = 0.075*t30267;
  t30269 = 0.355*t3525;
  t30270 = -0.0641*t26927;
  t30272 = t30268 + t30269 + t30270;
  t30260 = -0.325*t8258;
  t30264 = t23672*t30263;
  t30273 = t8258*t30272;
  t30274 = t30260 + t30264 + t30273;
  t30278 = -1.*t23672;
  t30280 = 1. + t30278;
  t30281 = 0.325*t30280;
  t30282 = -1.*t8258*t30263;
  t30284 = t23672*t30272;
  t30285 = t30281 + t30282 + t30284;
  t30255 = -1.*t3153;
  t30256 = 1. + t30255;
  t30257 = -0.1575*t30256;
  t30258 = -0.2255*t3153;
  t30275 = -1.*t30168*t30274;
  t30276 = t30257 + t30258 + t30275;
  t30294 = -0.068*t30168;
  t30295 = t3153*t30274;
  t30296 = t30294 + t30295;
  t30298 = t30151*t30285;
  t30300 = -1.*t30276*t30173;
  t30301 = t30298 + t30300;
  t30290 = t30168*t30142;
  t30291 = -1.*t3153*t30150*t30173;
  t30292 = t30290 + t30291;
  t30277 = t30151*t30276;
  t30286 = t30285*t30173;
  t30287 = t30277 + t30286;
  t30245 = -1.*t3525*t8258;
  t30246 = t23672*t26927;
  t30248 = t30245 + t30246;
  t30297 = t30296*t30142;
  t30302 = t30150*t30301;
  t30304 = t30297 + t30302;
  t30244 = t3153*t30165*t30142;
  t30249 = t30151*t30248;
  t30250 = t30168*t30165*t30173;
  t30251 = t30249 + t30250;
  t30252 = t30150*t30251;
  t30253 = t30244 + t30252;
  t30309 = t30150*t30296;
  t30310 = -1.*t30142*t30301;
  t30311 = t30309 + t30310;
  t30315 = -1.*t30151*t30168*t30165;
  t30316 = t30248*t30173;
  t30317 = t30315 + t30316;
  t30288 = -1.*t3153*t30151*t30287;
  t30318 = t30287*t30317;
  t30327 = -1.*t30168*t30296;
  t30332 = t3153*t30296*t30165;
  t30306 = t30150*t30168;
  t30307 = t3153*t30142*t30173;
  t30308 = t30306 + t30307;
  t30144 = t3153*t30140*t30142;
  t30180 = t30150*t30179;
  t30182 = t30144 + t30180;
  t30320 = t3153*t30150*t30165;
  t30321 = -1.*t30142*t30251;
  t30322 = t30320 + t30321;
  t30359 = t30287*t30186;
  t30364 = -1.*t30287*t30317;
  t30374 = -1.*t3153*t30296*t30165;
  t30370 = t3153*t30296*t30140;
  t30384 = t30285*t30165;
  t30379 = -1.*t30285*t30248;
  t30401 = t3153*t30151*t30287;
  t30406 = -1.*t30287*t30186;
  t30412 = t30168*t30296;
  t30416 = -1.*t3153*t30296*t30140;
  p_output1[0]=t30182;
  p_output1[1]=t30183*t30186 - 1.*t30189*t30193;
  p_output1[2]=t30186*t30189 + t30183*t30193;
  p_output1[3]=t30253*(t30288 - 1.*t30292*t30304 - 1.*t30308*t30311) + t30292*(t30253*t30304 + t30318 + t30311*t30322);
  p_output1[4]=t30151*(t30251*t30301 + t30318 + t30332)*t3153 + t30317*(t30288 + t30327 + t30173*t30301*t3153);
  p_output1[5]=t30168*(-1.*t30165*t30168*t30276 + t30248*t30285 + t30332) + t30165*t3153*(t30327 - 1.*t30276*t3153);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0.1575*t30140 + 0.2255*t30248;
  p_output1[13]=0.325*t26927 - 1.*t26927*t30272 - 1.*t30263*t3525;
  p_output1[14]=-0.0641;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t30292;
  p_output1[19]=-1.*t30189*t30308 + t30151*t30183*t3153;
  p_output1[20]=t30183*t30308 + t30151*t30189*t3153;
  p_output1[21]=t30253*(t30182*t30304 + t30193*t30311 + t30359) + t30182*(-1.*t30253*t30304 - 1.*t30311*t30322 + t30364);
  p_output1[22]=t30317*(t30179*t30301 + t30359 + t30370) + t30186*(-1.*t30251*t30301 + t30364 + t30374);
  p_output1[23]=t30140*(t30165*t30168*t30276 + t30374 + t30379)*t3153 + t30165*(-1.*t30140*t30168*t30276 + t30370 + t30384)*t3153;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=t30165*(-1.*t30165*t30274 + t30379) + t30248*(t30140*t30274 + t30384);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t30253;
  p_output1[37]=t30183*t30317 - 1.*t30189*t30322;
  p_output1[38]=t30189*t30317 + t30183*t30322;
  p_output1[39]=t30182*(t30292*t30304 + t30308*t30311 + t30401) + t30292*(-1.*t30182*t30304 - 1.*t30193*t30311 + t30406);
  p_output1[40]=t30151*(-1.*t30179*t30301 + t30406 + t30416)*t3153 + t30186*(t30401 + t30412 - 1.*t30173*t30301*t3153);
  p_output1[41]=t30168*(t30140*t30168*t30276 - 1.*t30165*t30285 + t30416) + t30140*t3153*(t30412 + t30276*t3153);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.068*t30165;
  p_output1[49]=-1.*t26927*t30263 - 0.325*t3525 + t30272*t3525;
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

#include "fFrFoot_map_DiagonalImpact.hh"

namespace SymFunction
{

void fFrFoot_map_DiagonalImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
