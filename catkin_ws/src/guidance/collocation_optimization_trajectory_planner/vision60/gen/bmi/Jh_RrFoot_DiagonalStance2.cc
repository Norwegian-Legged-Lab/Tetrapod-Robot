/*
 * Automatically Generated from Mathematica.
 * Thu 28 Apr 2022 15:24:10 GMT+02:00
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
  double t6097;
  double t3116;
  double t6083;
  double t6098;
  double t6091;
  double t6107;
  double t6116;
  double t6211;
  double t6118;
  double t2692;
  double t6182;
  double t6212;
  double t6207;
  double t6208;
  double t6209;
  double t6206;
  double t6210;
  double t6213;
  double t6214;
  double t6265;
  double t6270;
  double t6240;
  double t6241;
  double t6242;
  double t6246;
  double t6250;
  double t6262;
  double t6266;
  double t6267;
  double t6268;
  double t6271;
  double t6275;
  double t6276;
  double t6290;
  double t6294;
  double t6298;
  double t6315;
  double t6316;
  double t6317;
  double t6319;
  double t6320;
  double t6321;
  double t6239;
  double t6263;
  double t6264;
  double t6339;
  double t6341;
  double t6342;
  double t6350;
  double t6352;
  double t6353;
  double t6355;
  double t6356;
  double t6357;
  double t6225;
  double t6234;
  double t6238;
  double t6337;
  double t6346;
  double t6358;
  double t6359;
  double t6363;
  double t6364;
  double t6365;
  double t6366;
  double t6367;
  double t6368;
  double t6333;
  double t6334;
  double t6335;
  double t6336;
  double t6360;
  double t6361;
  double t6372;
  double t6373;
  double t6374;
  double t6376;
  double t6377;
  double t6378;
  double t6362;
  double t6369;
  double t6370;
  double t6375;
  double t6379;
  double t6380;
  double t6382;
  double t6383;
  double t6384;
  double t6129;
  double t6215;
  double t6223;
  double t6371;
  double t6392;
  double t6403;
  double t6408;
  double t6414;
  double t6419;
  double t6431;
  double t6435;
  double t6455;
  double t6449;
  double t6462;
  double t6470;
  double t6508;
  double t6497;
  t6097 = Cos(var1[16]);
  t3116 = Cos(var1[17]);
  t6083 = Sin(var1[16]);
  t6098 = Sin(var1[17]);
  t6091 = t3116*t6083;
  t6107 = -1.*t6097*t6098;
  t6116 = t6091 + t6107;
  t6211 = Sin(var1[15]);
  t6118 = Sin(var1[4]);
  t2692 = Cos(var1[15]);
  t6182 = Cos(var1[4]);
  t6212 = Sin(var1[5]);
  t6207 = t6097*t3116;
  t6208 = t6083*t6098;
  t6209 = t6207 + t6208;
  t6206 = Cos(var1[5]);
  t6210 = t6206*t6209;
  t6213 = t6211*t6116*t6212;
  t6214 = t6210 + t6213;
  t6265 = Cos(var1[3]);
  t6270 = Sin(var1[3]);
  t6240 = -1.*t3116*t6083;
  t6241 = t6097*t6098;
  t6242 = t6240 + t6241;
  t6246 = t6206*t6242;
  t6250 = t6211*t6209*t6212;
  t6262 = t6246 + t6250;
  t6266 = -1.*t6206*t6211*t6116;
  t6267 = t6209*t6212;
  t6268 = t6266 + t6267;
  t6271 = t2692*t6182*t6116;
  t6275 = -1.*t6118*t6214;
  t6276 = t6271 + t6275;
  t6290 = t6182*t6211;
  t6294 = t2692*t6118*t6212;
  t6298 = t6290 + t6294;
  t6315 = -1.*t6206*t6211*t6209;
  t6316 = t6242*t6212;
  t6317 = t6315 + t6316;
  t6319 = t2692*t6182*t6209;
  t6320 = -1.*t6118*t6262;
  t6321 = t6319 + t6320;
  t6239 = t2692*t6209*t6118;
  t6263 = t6182*t6262;
  t6264 = t6239 + t6263;
  t6339 = -0.0641*t3116;
  t6341 = -0.28*t6098;
  t6342 = t6339 + t6341;
  t6350 = -1.*t3116;
  t6352 = 1. + t6350;
  t6353 = -0.575*t6352;
  t6355 = -0.295*t3116;
  t6356 = -0.0641*t6098;
  t6357 = t6353 + t6355 + t6356;
  t6225 = t6211*t6118;
  t6234 = -1.*t2692*t6182*t6212;
  t6238 = t6225 + t6234;
  t6337 = 0.325*t6083;
  t6346 = t6097*t6342;
  t6358 = t6083*t6357;
  t6359 = t6337 + t6346 + t6358;
  t6363 = -1.*t6097;
  t6364 = 1. + t6363;
  t6365 = -0.325*t6364;
  t6366 = -1.*t6083*t6342;
  t6367 = t6097*t6357;
  t6368 = t6365 + t6366 + t6367;
  t6333 = -1.*t2692;
  t6334 = 1. + t6333;
  t6335 = -0.1575*t6334;
  t6336 = -0.2255*t2692;
  t6360 = -1.*t6211*t6359;
  t6361 = t6335 + t6336 + t6360;
  t6372 = -0.068*t6211;
  t6373 = t2692*t6359;
  t6374 = t6372 + t6373;
  t6376 = t6206*t6368;
  t6377 = -1.*t6361*t6212;
  t6378 = t6376 + t6377;
  t6362 = t6206*t6361;
  t6369 = t6368*t6212;
  t6370 = t6362 + t6369;
  t6375 = t6374*t6118;
  t6379 = t6182*t6378;
  t6380 = t6375 + t6379;
  t6382 = t6182*t6374;
  t6383 = -1.*t6118*t6378;
  t6384 = t6382 + t6383;
  t6129 = t2692*t6116*t6118;
  t6215 = t6182*t6214;
  t6223 = t6129 + t6215;
  t6371 = -1.*t2692*t6206*t6370;
  t6392 = t6370*t6317;
  t6403 = t6370*t6268;
  t6408 = -1.*t6370*t6317;
  t6414 = t2692*t6206*t6370;
  t6419 = -1.*t6370*t6268;
  t6431 = -1.*t6211*t6374;
  t6435 = t2692*t6374*t6209;
  t6455 = -1.*t2692*t6374*t6209;
  t6449 = t2692*t6374*t6116;
  t6462 = t6211*t6374;
  t6470 = -1.*t2692*t6374*t6116;
  t6508 = t6368*t6209;
  t6497 = -1.*t6368*t6242;
  p_output1[0]=t6223;
  p_output1[1]=t6238;
  p_output1[2]=t6264;
  p_output1[3]=t6265*t6268 - 1.*t6270*t6276;
  p_output1[4]=t2692*t6206*t6265 - 1.*t6270*t6298;
  p_output1[5]=t6265*t6317 - 1.*t6270*t6321;
  p_output1[6]=t6268*t6270 + t6265*t6276;
  p_output1[7]=t2692*t6206*t6270 + t6265*t6298;
  p_output1[8]=t6270*t6317 + t6265*t6321;
  p_output1[9]=t6264*(t6371 - 1.*t6238*t6380 - 1.*t6298*t6384) + t6238*(t6264*t6380 + t6321*t6384 + t6392);
  p_output1[10]=t6264*(t6223*t6380 + t6276*t6384 + t6403) + t6223*(-1.*t6264*t6380 - 1.*t6321*t6384 + t6408);
  p_output1[11]=t6223*(t6238*t6380 + t6298*t6384 + t6414) + t6238*(-1.*t6223*t6380 - 1.*t6276*t6384 + t6419);
  p_output1[12]=t6317*(t6371 + t2692*t6212*t6378 + t6431) + t2692*t6206*(t6262*t6378 + t6392 + t6435);
  p_output1[13]=t6317*(t6214*t6378 + t6403 + t6449) + t6268*(-1.*t6262*t6378 + t6408 + t6455);
  p_output1[14]=t6268*(-1.*t2692*t6212*t6378 + t6414 + t6462) + t2692*t6206*(-1.*t6214*t6378 + t6419 + t6470);
  p_output1[15]=t2692*t6209*(-1.*t2692*t6361 + t6431) + t6211*(-1.*t6209*t6211*t6361 + t6242*t6368 + t6435);
  p_output1[16]=t2692*t6116*(t6209*t6211*t6361 + t6455 + t6497) + t2692*t6209*(-1.*t6116*t6211*t6361 + t6449 + t6508);
  p_output1[17]=t2692*t6116*(t2692*t6361 + t6462) + t6211*(t6116*t6211*t6361 - 1.*t6209*t6368 + t6470);
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
  p_output1[45]=0.1575*t6116 + 0.2255*t6242;
  p_output1[46]=t6209*(-1.*t6209*t6359 + t6497) + t6242*(t6116*t6359 + t6508);
  p_output1[47]=-0.068*t6209;
  p_output1[48]=-0.325*t6098 - 1.*t3116*t6342 - 1.*t6098*t6357;
  p_output1[49]=0;
  p_output1[50]=0.325*t3116 - 1.*t6098*t6342 + t3116*t6357;
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
