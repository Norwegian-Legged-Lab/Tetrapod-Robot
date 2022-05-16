/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:41:02 GMT+02:00
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
  double t5785;
  double t1138;
  double t1718;
  double t21749;
  double t45338;
  double t45355;
  double t45443;
  double t45261;
  double t45591;
  double t45198;
  double t45611;
  double t45160;
  double t2162;
  double t33174;
  double t45023;
  double t45058;
  double t45448;
  double t45817;
  double t45871;
  double t52242;
  double t52218;
  double t52223;
  double t52227;
  double t52212;
  double t52246;
  double t52252;
  double t52256;
  double t53338;
  double t53340;
  double t53345;
  double t53349;
  double t53352;
  double t53353;
  double t53354;
  double t53356;
  double t53359;
  double t53361;
  double t53363;
  double t53364;
  double t53365;
  double t53367;
  double t53377;
  double t53378;
  double t53346;
  double t53348;
  double t53370;
  double t53374;
  double t53389;
  double t53391;
  double t53394;
  double t53395;
  double t53396;
  double t53397;
  double t53399;
  double t53401;
  double t53402;
  double t53403;
  double t53376;
  double t53382;
  double t53387;
  double t53081;
  double t53094;
  double t53095;
  double t53098;
  double t53100;
  double t53102;
  double t53293;
  double t53299;
  double t53300;
  double t53400;
  double t53405;
  double t53406;
  double t53409;
  double t53411;
  double t53412;
  double t53416;
  double t53417;
  double t53418;
  double t53301;
  double t53311;
  double t53334;
  double t53388;
  double t53419;
  double t45146;
  double t45901;
  double t51564;
  double t53421;
  double t53422;
  double t53424;
  double t53462;
  double t53468;
  double t53492;
  double t53504;
  double t53556;
  double t53565;
  t5785 = Cos(var1[16]);
  t1138 = Cos(var1[17]);
  t1718 = Sin(var1[16]);
  t21749 = Sin(var1[17]);
  t45338 = -1.*t5785*t1138;
  t45355 = -1.*t1718*t21749;
  t45443 = t45338 + t45355;
  t45261 = Cos(var1[5]);
  t45591 = Sin(var1[15]);
  t45198 = Cos(var1[15]);
  t45611 = Sin(var1[5]);
  t45160 = Cos(var1[4]);
  t2162 = -1.*t1138*t1718;
  t33174 = t5785*t21749;
  t45023 = t2162 + t33174;
  t45058 = Sin(var1[4]);
  t45448 = t45198*t45261*t45443;
  t45817 = -1.*t45591*t45443*t45611;
  t45871 = t45448 + t45817;
  t52242 = Sin(var1[3]);
  t52218 = t45261*t45591*t45443;
  t52223 = t45198*t45443*t45611;
  t52227 = t52218 + t52223;
  t52212 = Cos(var1[3]);
  t52246 = t45160*t45023;
  t52252 = -1.*t45058*t45871;
  t52256 = t52246 + t52252;
  t53338 = -1.*t45198;
  t53340 = 1. + t53338;
  t53345 = -0.15121*t53340;
  t53349 = -1.*t5785;
  t53352 = 1. + t53349;
  t53353 = -0.28121*t53352;
  t53354 = -1.*t1138;
  t53356 = 1. + t53354;
  t53359 = -0.50321*t53356;
  t53361 = -0.23321*t1138;
  t53363 = t53359 + t53361;
  t53364 = t5785*t53363;
  t53365 = 0.27*t1718*t21749;
  t53367 = t53353 + t53364 + t53365;
  t53377 = t45198*t53367;
  t53378 = t53345 + t53377;
  t53346 = -0.15121*t45198;
  t53348 = 0.15121*t45591;
  t53370 = t45591*t53367;
  t53374 = t53345 + t53346 + t53348 + t53370;
  t53389 = t45261*t45591;
  t53391 = t45198*t45611;
  t53394 = t53389 + t53391;
  t53395 = 0.28121*t1718;
  t53396 = t53363*t1718;
  t53397 = -0.27*t5785*t21749;
  t53399 = t53395 + t53396 + t53397;
  t53401 = t45261*t53378;
  t53402 = -1.*t53374*t45611;
  t53403 = t53401 + t53402;
  t53376 = t45261*t53374;
  t53382 = t53378*t45611;
  t53387 = t53376 + t53382;
  t53081 = t5785*t1138;
  t53094 = t1718*t21749;
  t53095 = t53081 + t53094;
  t53098 = t53095*t45058;
  t53100 = t45198*t45261*t45023;
  t53102 = -1.*t45591*t45023*t45611;
  t53293 = t53100 + t53102;
  t53299 = t45160*t53293;
  t53300 = t53098 + t53299;
  t53400 = t53399*t45058;
  t53405 = t45160*t53403;
  t53406 = t53400 + t53405;
  t53409 = t45160*t53399;
  t53411 = -1.*t45058*t53403;
  t53412 = t53409 + t53411;
  t53416 = t45261*t45591*t45023;
  t53417 = t45198*t45023*t45611;
  t53418 = t53416 + t53417;
  t53301 = -1.*t45198*t45261;
  t53311 = t45591*t45611;
  t53334 = t53301 + t53311;
  t53388 = -1.*t53334*t53387;
  t53419 = t53418*t53387;
  t45146 = t45023*t45058;
  t45901 = t45160*t45871;
  t51564 = t45146 + t45901;
  t53421 = t45160*t53095;
  t53422 = -1.*t45058*t53293;
  t53424 = t53421 + t53422;
  t53462 = -1.*t53418*t53387;
  t53468 = t52227*t53387;
  t53492 = -1.*t53399*t53095;
  t53504 = t53399*t45023;
  t53556 = t53334*t53387;
  t53565 = -1.*t52227*t53387;
  p_output1[0]=t51564;
  p_output1[1]=t52212*t52227 - 1.*t52242*t52256;
  p_output1[2]=t52227*t52242 + t52212*t52256;
  p_output1[3]=t53300*(t53388 - 1.*t45160*t53394*t53406 + t45058*t53394*t53412) + t45160*t53394*(t53300*t53406 + t53419 + t53412*t53424);
  p_output1[4]=(t53388 - 1.*t53394*t53403)*t53418 + t53334*(t53095*t53399 + t53293*t53403 + t53419);
  p_output1[5]=t53095*(t45198*t53374 - 1.*t45591*t53378);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=-0.15121*t45443 - 0.15121*t53095;
  p_output1[16]=0.28121*t21749 - 0.27*t1138*t21749 + t21749*t53363;
  p_output1[17]=0;
  p_output1[18]=t45160*t53394;
  p_output1[19]=t52212*t53334 + t45058*t52242*t53394;
  p_output1[20]=t52242*t53334 - 1.*t45058*t52212*t53394;
  p_output1[21]=t51564*(-1.*t53300*t53406 - 1.*t53412*t53424 + t53462) + t53300*(t51564*t53406 + t52256*t53412 + t53468);
  p_output1[22]=t52227*(-1.*t53293*t53403 + t53462 + t53492) + t53418*(t45871*t53403 + t53468 + t53504);
  p_output1[23]=t45023*(-1.*t45023*t45591*t53374 - 1.*t45023*t45198*t53378 + t53492) + t53095*(t45443*t45591*t53374 + t45198*t45443*t53378 + t53504);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=-0.15121 + t45023*(-1.*t45023*t53367 + t53492) + t53095*(t45443*t53367 + t53504);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t53300;
  p_output1[37]=t52212*t53418 - 1.*t52242*t53424;
  p_output1[38]=t52242*t53418 + t52212*t53424;
  p_output1[39]=t51564*(t45160*t53394*t53406 - 1.*t45058*t53394*t53412 + t53556) + t45160*t53394*(-1.*t51564*t53406 - 1.*t52256*t53412 + t53565);
  p_output1[40]=t52227*(t53394*t53403 + t53556) + t53334*(-1.*t45023*t53399 - 1.*t45871*t53403 + t53565);
  p_output1[41]=t45023*(-1.*t45198*t53374 + t45591*t53378);
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
  p_output1[52]=0.28121*t1138 + 0.27*Power(t21749,2) + t1138*t53363;
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
