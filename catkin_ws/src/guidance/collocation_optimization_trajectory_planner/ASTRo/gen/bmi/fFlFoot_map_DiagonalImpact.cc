/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:52:53 GMT+02:00
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
  double t19513;
  double t15493;
  double t17975;
  double t22930;
  double t51560;
  double t51616;
  double t51633;
  double t51541;
  double t52083;
  double t51313;
  double t52210;
  double t50490;
  double t19013;
  double t23344;
  double t25159;
  double t14770;
  double t51837;
  double t52267;
  double t52268;
  double t52325;
  double t52279;
  double t52295;
  double t52320;
  double t52277;
  double t52342;
  double t52365;
  double t52366;
  double t52387;
  double t52388;
  double t52390;
  double t52567;
  double t52580;
  double t52674;
  double t52774;
  double t52866;
  double t52867;
  double t53081;
  double t53094;
  double t53098;
  double t53100;
  double t53102;
  double t53176;
  double t53213;
  double t53229;
  double t53293;
  double t53299;
  double t53301;
  double t53334;
  double t53338;
  double t53340;
  double t53352;
  double t53353;
  double t53354;
  double t53356;
  double t53359;
  double t53361;
  double t53363;
  double t53365;
  double t53367;
  double t53370;
  double t53300;
  double t53345;
  double t53348;
  double t52385;
  double t52391;
  double t52392;
  double t52394;
  double t52396;
  double t52397;
  double t53364;
  double t53374;
  double t53376;
  double t53378;
  double t53382;
  double t53387;
  double t53394;
  double t53395;
  double t53396;
  double t52398;
  double t52542;
  double t52555;
  double t53349;
  double t53399;
  double t27520;
  double t52270;
  double t52276;
  double t53401;
  double t53403;
  double t53405;
  double t53588;
  double t53618;
  double t53663;
  double t53673;
  double t53766;
  double t53776;
  t19513 = Cos(var1[7]);
  t15493 = Cos(var1[8]);
  t17975 = Sin(var1[7]);
  t22930 = Sin(var1[8]);
  t51560 = t19513*t15493;
  t51616 = t17975*t22930;
  t51633 = t51560 + t51616;
  t51541 = Cos(var1[6]);
  t52083 = Sin(var1[5]);
  t51313 = Cos(var1[5]);
  t52210 = Sin(var1[6]);
  t50490 = Cos(var1[4]);
  t19013 = -1.*t15493*t17975;
  t23344 = t19513*t22930;
  t25159 = t19013 + t23344;
  t14770 = Sin(var1[4]);
  t51837 = t51313*t51541*t51633;
  t52267 = -1.*t52083*t52210*t51633;
  t52268 = t51837 + t52267;
  t52325 = Sin(var1[3]);
  t52279 = t51541*t52083*t51633;
  t52295 = t51313*t52210*t51633;
  t52320 = t52279 + t52295;
  t52277 = Cos(var1[3]);
  t52342 = t50490*t25159;
  t52365 = -1.*t14770*t52268;
  t52366 = t52342 + t52365;
  t52387 = t15493*t17975;
  t52388 = -1.*t19513*t22930;
  t52390 = t52387 + t52388;
  t52567 = -1.*t51541;
  t52580 = 1. + t52567;
  t52674 = 0.15121*t52580;
  t52774 = -1.*t19513;
  t52866 = 1. + t52774;
  t52867 = 0.28121*t52866;
  t53081 = -1.*t15493;
  t53094 = 1. + t53081;
  t53098 = 0.50321*t53094;
  t53100 = 0.23321*t15493;
  t53102 = t53098 + t53100;
  t53176 = t19513*t53102;
  t53213 = -0.27*t17975*t22930;
  t53229 = t52867 + t53176 + t53213;
  t53293 = t51541*t53229;
  t53299 = t52674 + t53293;
  t53301 = 0.15121*t51541;
  t53334 = -0.15121*t52210;
  t53338 = t52210*t53229;
  t53340 = t52674 + t53301 + t53334 + t53338;
  t53352 = -1.*t51541*t52083;
  t53353 = -1.*t51313*t52210;
  t53354 = t53352 + t53353;
  t53356 = 0.28121*t17975;
  t53359 = -1.*t53102*t17975;
  t53361 = -0.27*t19513*t22930;
  t53363 = t53356 + t53359 + t53361;
  t53365 = t51313*t53299;
  t53367 = -1.*t52083*t53340;
  t53370 = t53365 + t53367;
  t53300 = t52083*t53299;
  t53345 = t51313*t53340;
  t53348 = t53300 + t53345;
  t52385 = t14770*t51633;
  t52391 = t51313*t51541*t52390;
  t52392 = -1.*t52083*t52210*t52390;
  t52394 = t52391 + t52392;
  t52396 = t50490*t52394;
  t52397 = t52385 + t52396;
  t53364 = t14770*t53363;
  t53374 = t50490*t53370;
  t53376 = t53364 + t53374;
  t53378 = t50490*t53363;
  t53382 = -1.*t14770*t53370;
  t53387 = t53378 + t53382;
  t53394 = t51541*t52083*t52390;
  t53395 = t51313*t52210*t52390;
  t53396 = t53394 + t53395;
  t52398 = t51313*t51541;
  t52542 = -1.*t52083*t52210;
  t52555 = t52398 + t52542;
  t53349 = -1.*t52555*t53348;
  t53399 = t53396*t53348;
  t27520 = t14770*t25159;
  t52270 = t50490*t52268;
  t52276 = t27520 + t52270;
  t53401 = t50490*t51633;
  t53403 = -1.*t14770*t52394;
  t53405 = t53401 + t53403;
  t53588 = -1.*t53396*t53348;
  t53618 = t52320*t53348;
  t53663 = -1.*t53363*t51633;
  t53673 = t53363*t25159;
  t53766 = t52555*t53348;
  t53776 = -1.*t52320*t53348;
  p_output1[0]=t52276;
  p_output1[1]=t52277*t52320 - 1.*t52325*t52366;
  p_output1[2]=t52320*t52325 + t52277*t52366;
  p_output1[3]=t52397*(t53349 - 1.*t50490*t53354*t53376 + t14770*t53354*t53387) + t50490*t53354*(t52397*t53376 + t53399 + t53387*t53405);
  p_output1[4]=(t53349 - 1.*t53354*t53370)*t53396 + t52555*(t51633*t53363 + t52394*t53370 + t53399);
  p_output1[5]=t51633*(t52210*t53299 - 1.*t51541*t53340);
  p_output1[6]=0;
  p_output1[7]=0.28121*t22930 - 0.27*t15493*t22930 - 1.*t22930*t53102;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t50490*t53354;
  p_output1[19]=t52277*t52555 + t14770*t52325*t53354;
  p_output1[20]=t52325*t52555 - 1.*t14770*t52277*t53354;
  p_output1[21]=t52276*(-1.*t52397*t53376 - 1.*t53387*t53405 + t53588) + t52397*(t52276*t53376 + t52366*t53387 + t53618);
  p_output1[22]=t52320*(-1.*t52394*t53370 + t53588 + t53663) + t53396*(t52268*t53370 + t53618 + t53673);
  p_output1[23]=t25159*(-1.*t51541*t52390*t53299 - 1.*t52210*t52390*t53340 + t53663) + t51633*(t51541*t51633*t53299 + t51633*t52210*t53340 + t53673);
  p_output1[24]=-0.15121 + t25159*(-1.*t52390*t53229 + t53663) + t51633*(t51633*t53229 + t53673);
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
  p_output1[36]=t52397;
  p_output1[37]=t52277*t53396 - 1.*t52325*t53405;
  p_output1[38]=t52325*t53396 + t52277*t53405;
  p_output1[39]=t52276*(t50490*t53354*t53376 - 1.*t14770*t53354*t53387 + t53766) + t50490*t53354*(-1.*t52276*t53376 - 1.*t52366*t53387 + t53776);
  p_output1[40]=t52320*(t53354*t53370 + t53766) + t52555*(-1.*t25159*t53363 - 1.*t52268*t53370 + t53776);
  p_output1[41]=t25159*(-1.*t52210*t53299 + t51541*t53340);
  p_output1[42]=0.15121*t25159 + 0.15121*t52390;
  p_output1[43]=0.28121*t15493 + 0.27*Power(t22930,2) - 1.*t15493*t53102;
  p_output1[44]=-0.27;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fFlFoot_map_DiagonalImpact.hh"

namespace SymFunction
{

void fFlFoot_map_DiagonalImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
