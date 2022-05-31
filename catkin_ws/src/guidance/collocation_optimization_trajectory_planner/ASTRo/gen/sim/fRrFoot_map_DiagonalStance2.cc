/*
 * Automatically Generated from Mathematica.
 * Sun 22 May 2022 16:55:25 GMT+02:00
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
  double t7965;
  double t7812;
  double t7883;
  double t7966;
  double t9780;
  double t9791;
  double t9792;
  double t9645;
  double t9813;
  double t8488;
  double t9893;
  double t8368;
  double t7928;
  double t7967;
  double t7971;
  double t7972;
  double t9795;
  double t12190;
  double t12441;
  double t15203;
  double t15123;
  double t15158;
  double t15168;
  double t15122;
  double t15220;
  double t15221;
  double t15229;
  double t15286;
  double t15291;
  double t15292;
  double t15321;
  double t15322;
  double t15329;
  double t15335;
  double t15336;
  double t15339;
  double t15341;
  double t15344;
  double t15345;
  double t15346;
  double t15347;
  double t15354;
  double t15355;
  double t15294;
  double t15313;
  double t15350;
  double t15351;
  double t15375;
  double t15379;
  double t15380;
  double t15385;
  double t15386;
  double t15387;
  double t15388;
  double t15393;
  double t15394;
  double t15401;
  double t15353;
  double t15365;
  double t15369;
  double t15245;
  double t15246;
  double t15249;
  double t15254;
  double t15256;
  double t15257;
  double t15258;
  double t15259;
  double t15270;
  double t15392;
  double t15402;
  double t15403;
  double t15421;
  double t15422;
  double t15426;
  double t15435;
  double t15436;
  double t15439;
  double t15271;
  double t15272;
  double t15273;
  double t15370;
  double t15440;
  double t8357;
  double t15063;
  double t15117;
  double t15442;
  double t15445;
  double t15446;
  double t15528;
  double t15538;
  double t15550;
  double t15572;
  double t15640;
  double t15650;
  t7965 = Cos(var1[16]);
  t7812 = Cos(var1[17]);
  t7883 = Sin(var1[16]);
  t7966 = Sin(var1[17]);
  t9780 = -1.*t7965*t7812;
  t9791 = -1.*t7883*t7966;
  t9792 = t9780 + t9791;
  t9645 = Cos(var1[5]);
  t9813 = Sin(var1[15]);
  t8488 = Cos(var1[15]);
  t9893 = Sin(var1[5]);
  t8368 = Cos(var1[4]);
  t7928 = -1.*t7812*t7883;
  t7967 = t7965*t7966;
  t7971 = t7928 + t7967;
  t7972 = Sin(var1[4]);
  t9795 = t8488*t9645*t9792;
  t12190 = -1.*t9813*t9792*t9893;
  t12441 = t9795 + t12190;
  t15203 = Sin(var1[3]);
  t15123 = t9645*t9813*t9792;
  t15158 = t8488*t9792*t9893;
  t15168 = t15123 + t15158;
  t15122 = Cos(var1[3]);
  t15220 = t8368*t7971;
  t15221 = -1.*t7972*t12441;
  t15229 = t15220 + t15221;
  t15286 = -1.*t8488;
  t15291 = 1. + t15286;
  t15292 = -0.15121*t15291;
  t15321 = -1.*t7965;
  t15322 = 1. + t15321;
  t15329 = -0.28121*t15322;
  t15335 = -1.*t7812;
  t15336 = 1. + t15335;
  t15339 = -0.50321*t15336;
  t15341 = -0.23321*t7812;
  t15344 = t15339 + t15341;
  t15345 = t7965*t15344;
  t15346 = 0.27*t7883*t7966;
  t15347 = t15329 + t15345 + t15346;
  t15354 = t8488*t15347;
  t15355 = t15292 + t15354;
  t15294 = -0.15121*t8488;
  t15313 = 0.15121*t9813;
  t15350 = t9813*t15347;
  t15351 = t15292 + t15294 + t15313 + t15350;
  t15375 = t9645*t9813;
  t15379 = t8488*t9893;
  t15380 = t15375 + t15379;
  t15385 = 0.28121*t7883;
  t15386 = t15344*t7883;
  t15387 = -0.27*t7965*t7966;
  t15388 = t15385 + t15386 + t15387;
  t15393 = t9645*t15355;
  t15394 = -1.*t15351*t9893;
  t15401 = t15393 + t15394;
  t15353 = t9645*t15351;
  t15365 = t15355*t9893;
  t15369 = t15353 + t15365;
  t15245 = t7965*t7812;
  t15246 = t7883*t7966;
  t15249 = t15245 + t15246;
  t15254 = t15249*t7972;
  t15256 = t8488*t9645*t7971;
  t15257 = -1.*t9813*t7971*t9893;
  t15258 = t15256 + t15257;
  t15259 = t8368*t15258;
  t15270 = t15254 + t15259;
  t15392 = t15388*t7972;
  t15402 = t8368*t15401;
  t15403 = t15392 + t15402;
  t15421 = t8368*t15388;
  t15422 = -1.*t7972*t15401;
  t15426 = t15421 + t15422;
  t15435 = t9645*t9813*t7971;
  t15436 = t8488*t7971*t9893;
  t15439 = t15435 + t15436;
  t15271 = -1.*t8488*t9645;
  t15272 = t9813*t9893;
  t15273 = t15271 + t15272;
  t15370 = -1.*t15273*t15369;
  t15440 = t15439*t15369;
  t8357 = t7971*t7972;
  t15063 = t8368*t12441;
  t15117 = t8357 + t15063;
  t15442 = t8368*t15249;
  t15445 = -1.*t7972*t15258;
  t15446 = t15442 + t15445;
  t15528 = -1.*t15439*t15369;
  t15538 = t15168*t15369;
  t15550 = -1.*t15388*t15249;
  t15572 = t15388*t7971;
  t15640 = t15273*t15369;
  t15650 = -1.*t15168*t15369;
  p_output1[0]=t15117;
  p_output1[1]=t15122*t15168 - 1.*t15203*t15229;
  p_output1[2]=t15168*t15203 + t15122*t15229;
  p_output1[3]=t15380*(t15270*t15403 + t15440 + t15426*t15446)*t8368 + t15270*(t15370 + t15380*t15426*t7972 - 1.*t15380*t15403*t8368);
  p_output1[4]=(t15370 - 1.*t15380*t15401)*t15439 + t15273*(t15249*t15388 + t15258*t15401 + t15440);
  p_output1[5]=t15249*(t15351*t8488 - 1.*t15355*t9813);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=-0.15121*t15249 - 0.15121*t9792;
  p_output1[16]=0.28121*t7966 + t15344*t7966 - 0.27*t7812*t7966;
  p_output1[17]=0;
  p_output1[18]=t15380*t8368;
  p_output1[19]=t15122*t15273 + t15203*t15380*t7972;
  p_output1[20]=t15203*t15273 - 1.*t15122*t15380*t7972;
  p_output1[21]=t15117*(-1.*t15270*t15403 - 1.*t15426*t15446 + t15528) + t15270*(t15117*t15403 + t15229*t15426 + t15538);
  p_output1[22]=t15168*(-1.*t15258*t15401 + t15528 + t15550) + t15439*(t12441*t15401 + t15538 + t15572);
  p_output1[23]=t7971*(t15550 - 1.*t15355*t7971*t8488 - 1.*t15351*t7971*t9813) + t15249*(t15572 + t15355*t8488*t9792 + t15351*t9792*t9813);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=-0.15121 + t7971*(t15550 - 1.*t15347*t7971) + t15249*(t15572 + t15347*t9792);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t15270;
  p_output1[37]=t15122*t15439 - 1.*t15203*t15446;
  p_output1[38]=t15203*t15439 + t15122*t15446;
  p_output1[39]=t15380*(-1.*t15117*t15403 - 1.*t15229*t15426 + t15650)*t8368 + t15117*(t15640 - 1.*t15380*t15426*t7972 + t15380*t15403*t8368);
  p_output1[40]=t15168*(t15380*t15401 + t15640) + t15273*(-1.*t12441*t15401 + t15650 - 1.*t15388*t7971);
  p_output1[41]=t7971*(-1.*t15351*t8488 + t15355*t9813);
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
  p_output1[52]=0.28121*t7812 + t15344*t7812 + 0.27*Power(t7966,2);
  p_output1[53]=-0.27;
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

#include "fRrFoot_map_DiagonalStance2.hh"

namespace SymFunction
{

void fRrFoot_map_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
