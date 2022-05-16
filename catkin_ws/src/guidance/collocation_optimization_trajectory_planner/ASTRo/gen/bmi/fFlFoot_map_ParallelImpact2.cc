/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:52:56 GMT+02:00
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
  double t51258;
  double t27060;
  double t27064;
  double t53833;
  double t54140;
  double t54155;
  double t54164;
  double t54139;
  double t54176;
  double t54127;
  double t54182;
  double t54115;
  double t27755;
  double t53928;
  double t53962;
  double t25499;
  double t54168;
  double t54191;
  double t54200;
  double t54223;
  double t54217;
  double t54218;
  double t54220;
  double t54214;
  double t54225;
  double t54229;
  double t54230;
  double t54308;
  double t54316;
  double t54317;
  double t54339;
  double t54341;
  double t54343;
  double t54346;
  double t54348;
  double t54349;
  double t54351;
  double t54354;
  double t54356;
  double t54358;
  double t54359;
  double t54361;
  double t54363;
  double t54370;
  double t54372;
  double t54374;
  double t54383;
  double t54385;
  double t54386;
  double t54393;
  double t54411;
  double t54455;
  double t54457;
  double t54458;
  double t54463;
  double t54480;
  double t54488;
  double t54505;
  double t54506;
  double t54519;
  double t54381;
  double t54404;
  double t54405;
  double t54243;
  double t54318;
  double t54323;
  double t54326;
  double t54327;
  double t54328;
  double t54495;
  double t54524;
  double t54528;
  double t54541;
  double t54553;
  double t54554;
  double t54583;
  double t54585;
  double t54617;
  double t54329;
  double t54334;
  double t54337;
  double t54406;
  double t54623;
  double t54071;
  double t54211;
  double t54213;
  double t54625;
  double t54651;
  double t54653;
  double t54751;
  double t54757;
  double t54764;
  double t54769;
  double t54805;
  double t54812;
  t51258 = Cos(var1[7]);
  t27060 = Cos(var1[8]);
  t27064 = Sin(var1[7]);
  t53833 = Sin(var1[8]);
  t54140 = t51258*t27060;
  t54155 = t27064*t53833;
  t54164 = t54140 + t54155;
  t54139 = Cos(var1[6]);
  t54176 = Sin(var1[5]);
  t54127 = Cos(var1[5]);
  t54182 = Sin(var1[6]);
  t54115 = Cos(var1[4]);
  t27755 = -1.*t27060*t27064;
  t53928 = t51258*t53833;
  t53962 = t27755 + t53928;
  t25499 = Sin(var1[4]);
  t54168 = t54127*t54139*t54164;
  t54191 = -1.*t54176*t54182*t54164;
  t54200 = t54168 + t54191;
  t54223 = Sin(var1[3]);
  t54217 = t54139*t54176*t54164;
  t54218 = t54127*t54182*t54164;
  t54220 = t54217 + t54218;
  t54214 = Cos(var1[3]);
  t54225 = t54115*t53962;
  t54229 = -1.*t25499*t54200;
  t54230 = t54225 + t54229;
  t54308 = t27060*t27064;
  t54316 = -1.*t51258*t53833;
  t54317 = t54308 + t54316;
  t54339 = -1.*t54139;
  t54341 = 1. + t54339;
  t54343 = 0.15121*t54341;
  t54346 = -1.*t51258;
  t54348 = 1. + t54346;
  t54349 = 0.28121*t54348;
  t54351 = -1.*t27060;
  t54354 = 1. + t54351;
  t54356 = 0.50321*t54354;
  t54358 = 0.23321*t27060;
  t54359 = t54356 + t54358;
  t54361 = t51258*t54359;
  t54363 = -0.27*t27064*t53833;
  t54370 = t54349 + t54361 + t54363;
  t54372 = t54139*t54370;
  t54374 = t54343 + t54372;
  t54383 = 0.15121*t54139;
  t54385 = -0.15121*t54182;
  t54386 = t54182*t54370;
  t54393 = t54343 + t54383 + t54385 + t54386;
  t54411 = -1.*t54139*t54176;
  t54455 = -1.*t54127*t54182;
  t54457 = t54411 + t54455;
  t54458 = 0.28121*t27064;
  t54463 = -1.*t54359*t27064;
  t54480 = -0.27*t51258*t53833;
  t54488 = t54458 + t54463 + t54480;
  t54505 = t54127*t54374;
  t54506 = -1.*t54176*t54393;
  t54519 = t54505 + t54506;
  t54381 = t54176*t54374;
  t54404 = t54127*t54393;
  t54405 = t54381 + t54404;
  t54243 = t25499*t54164;
  t54318 = t54127*t54139*t54317;
  t54323 = -1.*t54176*t54182*t54317;
  t54326 = t54318 + t54323;
  t54327 = t54115*t54326;
  t54328 = t54243 + t54327;
  t54495 = t25499*t54488;
  t54524 = t54115*t54519;
  t54528 = t54495 + t54524;
  t54541 = t54115*t54488;
  t54553 = -1.*t25499*t54519;
  t54554 = t54541 + t54553;
  t54583 = t54139*t54176*t54317;
  t54585 = t54127*t54182*t54317;
  t54617 = t54583 + t54585;
  t54329 = t54127*t54139;
  t54334 = -1.*t54176*t54182;
  t54337 = t54329 + t54334;
  t54406 = -1.*t54337*t54405;
  t54623 = t54617*t54405;
  t54071 = t25499*t53962;
  t54211 = t54115*t54200;
  t54213 = t54071 + t54211;
  t54625 = t54115*t54164;
  t54651 = -1.*t25499*t54326;
  t54653 = t54625 + t54651;
  t54751 = -1.*t54617*t54405;
  t54757 = t54220*t54405;
  t54764 = -1.*t54488*t54164;
  t54769 = t54488*t53962;
  t54805 = t54337*t54405;
  t54812 = -1.*t54220*t54405;
  p_output1[0]=t54213;
  p_output1[1]=t54214*t54220 - 1.*t54223*t54230;
  p_output1[2]=t54220*t54223 + t54214*t54230;
  p_output1[3]=t54328*(t54406 - 1.*t54115*t54457*t54528 + t25499*t54457*t54554) + t54115*t54457*(t54328*t54528 + t54623 + t54554*t54653);
  p_output1[4]=(t54406 - 1.*t54457*t54519)*t54617 + t54337*(t54164*t54488 + t54326*t54519 + t54623);
  p_output1[5]=t54164*(t54182*t54374 - 1.*t54139*t54393);
  p_output1[6]=0;
  p_output1[7]=0.28121*t53833 - 0.27*t27060*t53833 - 1.*t53833*t54359;
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
  p_output1[18]=t54115*t54457;
  p_output1[19]=t54214*t54337 + t25499*t54223*t54457;
  p_output1[20]=t54223*t54337 - 1.*t25499*t54214*t54457;
  p_output1[21]=t54213*(-1.*t54328*t54528 - 1.*t54554*t54653 + t54751) + t54328*(t54213*t54528 + t54230*t54554 + t54757);
  p_output1[22]=t54220*(-1.*t54326*t54519 + t54751 + t54764) + t54617*(t54200*t54519 + t54757 + t54769);
  p_output1[23]=t53962*(-1.*t54139*t54317*t54374 - 1.*t54182*t54317*t54393 + t54764) + t54164*(t54139*t54164*t54374 + t54164*t54182*t54393 + t54769);
  p_output1[24]=-0.15121 + t53962*(-1.*t54317*t54370 + t54764) + t54164*(t54164*t54370 + t54769);
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
  p_output1[36]=t54328;
  p_output1[37]=t54214*t54617 - 1.*t54223*t54653;
  p_output1[38]=t54223*t54617 + t54214*t54653;
  p_output1[39]=t54213*(t54115*t54457*t54528 - 1.*t25499*t54457*t54554 + t54805) + t54115*t54457*(-1.*t54213*t54528 - 1.*t54230*t54554 + t54812);
  p_output1[40]=t54220*(t54457*t54519 + t54805) + t54337*(-1.*t53962*t54488 - 1.*t54200*t54519 + t54812);
  p_output1[41]=t53962*(-1.*t54182*t54374 + t54139*t54393);
  p_output1[42]=0.15121*t53962 + 0.15121*t54317;
  p_output1[43]=0.28121*t27060 + 0.27*Power(t53833,2) - 1.*t27060*t54359;
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

#include "fFlFoot_map_ParallelImpact2.hh"

namespace SymFunction
{

void fFlFoot_map_ParallelImpact2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
