/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 18:49:25 GMT+02:00
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
  double t6101;
  double t6086;
  double t6094;
  double t6110;
  double t6100;
  double t6119;
  double t6121;
  double t6215;
  double t6132;
  double t2650;
  double t6209;
  double t6216;
  double t6211;
  double t6212;
  double t6213;
  double t6210;
  double t6214;
  double t6217;
  double t6218;
  double t6269;
  double t6274;
  double t6244;
  double t6245;
  double t6249;
  double t6253;
  double t6265;
  double t6266;
  double t6270;
  double t6271;
  double t6272;
  double t6278;
  double t6279;
  double t6283;
  double t6297;
  double t6301;
  double t6310;
  double t6319;
  double t6320;
  double t6321;
  double t6323;
  double t6324;
  double t6325;
  double t6243;
  double t6267;
  double t6268;
  double t6344;
  double t6345;
  double t6349;
  double t6355;
  double t6356;
  double t6358;
  double t6359;
  double t6360;
  double t6361;
  double t6237;
  double t6241;
  double t6242;
  double t6342;
  double t6353;
  double t6362;
  double t6363;
  double t6367;
  double t6368;
  double t6369;
  double t6370;
  double t6371;
  double t6372;
  double t6337;
  double t6338;
  double t6339;
  double t6340;
  double t6364;
  double t6365;
  double t6376;
  double t6377;
  double t6378;
  double t6380;
  double t6381;
  double t6382;
  double t6366;
  double t6373;
  double t6374;
  double t6379;
  double t6383;
  double t6384;
  double t6386;
  double t6387;
  double t6391;
  double t6185;
  double t6226;
  double t6228;
  double t6375;
  double t6396;
  double t6407;
  double t6412;
  double t6418;
  double t6423;
  double t6435;
  double t6439;
  double t6459;
  double t6453;
  double t6466;
  double t6474;
  double t6512;
  double t6504;
  t6101 = Cos(var1[16]);
  t6086 = Cos(var1[17]);
  t6094 = Sin(var1[16]);
  t6110 = Sin(var1[17]);
  t6100 = t6086*t6094;
  t6119 = -1.*t6101*t6110;
  t6121 = t6100 + t6119;
  t6215 = Sin(var1[15]);
  t6132 = Sin(var1[4]);
  t2650 = Cos(var1[15]);
  t6209 = Cos(var1[4]);
  t6216 = Sin(var1[5]);
  t6211 = t6101*t6086;
  t6212 = t6094*t6110;
  t6213 = t6211 + t6212;
  t6210 = Cos(var1[5]);
  t6214 = t6210*t6213;
  t6217 = t6215*t6121*t6216;
  t6218 = t6214 + t6217;
  t6269 = Cos(var1[3]);
  t6274 = Sin(var1[3]);
  t6244 = -1.*t6086*t6094;
  t6245 = t6101*t6110;
  t6249 = t6244 + t6245;
  t6253 = t6210*t6249;
  t6265 = t6215*t6213*t6216;
  t6266 = t6253 + t6265;
  t6270 = -1.*t6210*t6215*t6121;
  t6271 = t6213*t6216;
  t6272 = t6270 + t6271;
  t6278 = t2650*t6209*t6121;
  t6279 = -1.*t6132*t6218;
  t6283 = t6278 + t6279;
  t6297 = t6209*t6215;
  t6301 = t2650*t6132*t6216;
  t6310 = t6297 + t6301;
  t6319 = -1.*t6210*t6215*t6213;
  t6320 = t6249*t6216;
  t6321 = t6319 + t6320;
  t6323 = t2650*t6209*t6213;
  t6324 = -1.*t6132*t6266;
  t6325 = t6323 + t6324;
  t6243 = t2650*t6213*t6132;
  t6267 = t6209*t6266;
  t6268 = t6243 + t6267;
  t6344 = -0.0641*t6086;
  t6345 = -0.28*t6110;
  t6349 = t6344 + t6345;
  t6355 = -1.*t6086;
  t6356 = 1. + t6355;
  t6358 = -0.575*t6356;
  t6359 = -0.295*t6086;
  t6360 = -0.0641*t6110;
  t6361 = t6358 + t6359 + t6360;
  t6237 = t6215*t6132;
  t6241 = -1.*t2650*t6209*t6216;
  t6242 = t6237 + t6241;
  t6342 = 0.325*t6094;
  t6353 = t6101*t6349;
  t6362 = t6094*t6361;
  t6363 = t6342 + t6353 + t6362;
  t6367 = -1.*t6101;
  t6368 = 1. + t6367;
  t6369 = -0.325*t6368;
  t6370 = -1.*t6094*t6349;
  t6371 = t6101*t6361;
  t6372 = t6369 + t6370 + t6371;
  t6337 = -1.*t2650;
  t6338 = 1. + t6337;
  t6339 = -0.1575*t6338;
  t6340 = -0.2255*t2650;
  t6364 = -1.*t6215*t6363;
  t6365 = t6339 + t6340 + t6364;
  t6376 = -0.068*t6215;
  t6377 = t2650*t6363;
  t6378 = t6376 + t6377;
  t6380 = t6210*t6372;
  t6381 = -1.*t6365*t6216;
  t6382 = t6380 + t6381;
  t6366 = t6210*t6365;
  t6373 = t6372*t6216;
  t6374 = t6366 + t6373;
  t6379 = t6378*t6132;
  t6383 = t6209*t6382;
  t6384 = t6379 + t6383;
  t6386 = t6209*t6378;
  t6387 = -1.*t6132*t6382;
  t6391 = t6386 + t6387;
  t6185 = t2650*t6121*t6132;
  t6226 = t6209*t6218;
  t6228 = t6185 + t6226;
  t6375 = -1.*t2650*t6210*t6374;
  t6396 = t6374*t6321;
  t6407 = t6374*t6272;
  t6412 = -1.*t6374*t6321;
  t6418 = t2650*t6210*t6374;
  t6423 = -1.*t6374*t6272;
  t6435 = -1.*t6215*t6378;
  t6439 = t2650*t6378*t6213;
  t6459 = -1.*t2650*t6378*t6213;
  t6453 = t2650*t6378*t6121;
  t6466 = t6215*t6378;
  t6474 = -1.*t2650*t6378*t6121;
  t6512 = t6372*t6213;
  t6504 = -1.*t6372*t6249;
  p_output1[0]=t6228;
  p_output1[1]=t6242;
  p_output1[2]=t6268;
  p_output1[3]=t6269*t6272 - 1.*t6274*t6283;
  p_output1[4]=t2650*t6210*t6269 - 1.*t6274*t6310;
  p_output1[5]=t6269*t6321 - 1.*t6274*t6325;
  p_output1[6]=t6272*t6274 + t6269*t6283;
  p_output1[7]=t2650*t6210*t6274 + t6269*t6310;
  p_output1[8]=t6274*t6321 + t6269*t6325;
  p_output1[9]=t6268*(t6375 - 1.*t6242*t6384 - 1.*t6310*t6391) + t6242*(t6268*t6384 + t6325*t6391 + t6396);
  p_output1[10]=t6268*(t6228*t6384 + t6283*t6391 + t6407) + t6228*(-1.*t6268*t6384 - 1.*t6325*t6391 + t6412);
  p_output1[11]=t6228*(t6242*t6384 + t6310*t6391 + t6418) + t6242*(-1.*t6228*t6384 - 1.*t6283*t6391 + t6423);
  p_output1[12]=t6321*(t6375 + t2650*t6216*t6382 + t6435) + t2650*t6210*(t6266*t6382 + t6396 + t6439);
  p_output1[13]=t6321*(t6218*t6382 + t6407 + t6453) + t6272*(-1.*t6266*t6382 + t6412 + t6459);
  p_output1[14]=t6272*(-1.*t2650*t6216*t6382 + t6418 + t6466) + t2650*t6210*(-1.*t6218*t6382 + t6423 + t6474);
  p_output1[15]=t2650*t6213*(-1.*t2650*t6365 + t6435) + t6215*(-1.*t6213*t6215*t6365 + t6249*t6372 + t6439);
  p_output1[16]=t2650*t6121*(t6213*t6215*t6365 + t6459 + t6504) + t2650*t6213*(-1.*t6121*t6215*t6365 + t6453 + t6512);
  p_output1[17]=t2650*t6121*(t2650*t6365 + t6466) + t6215*(t6121*t6215*t6365 - 1.*t6213*t6372 + t6474);
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
  p_output1[45]=0.1575*t6121 + 0.2255*t6249;
  p_output1[46]=t6213*(-1.*t6213*t6363 + t6504) + t6249*(t6121*t6363 + t6512);
  p_output1[47]=-0.068*t6213;
  p_output1[48]=-0.325*t6110 - 1.*t6086*t6349 - 1.*t6110*t6361;
  p_output1[49]=0;
  p_output1[50]=0.325*t6086 - 1.*t6110*t6349 + t6086*t6361;
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

#include "Jh_RrFoot_DiagonalStance2.hh"

namespace SymFunction
{

void Jh_RrFoot_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
