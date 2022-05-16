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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t1146;
  double t51950;
  double t45386;
  double t52174;
  double t52181;
  double t52165;
  double t52182;
  double t51710;
  double t52202;
  double t52203;
  double t52204;
  double t51951;
  double t52200;
  double t52212;
  double t52213;
  double t52214;
  double t51937;
  double t52009;
  double t52081;
  double t52271;
  double t52269;
  double t52179;
  double t52195;
  double t52199;
  double t52205;
  double t52206;
  double t52207;
  double t52215;
  double t52256;
  double t52261;
  double t52272;
  double t52274;
  double t52275;
  double t52280;
  double t52281;
  double t52289;
  double t52296;
  double t52302;
  double t52315;
  double t52331;
  double t52336;
  double t52341;
  double t52346;
  double t52347;
  double t52358;
  double t52201;
  double t52208;
  double t52209;
  double t52400;
  double t52401;
  double t52402;
  double t52406;
  double t52407;
  double t52409;
  double t52410;
  double t52412;
  double t52413;
  double t52414;
  double t52415;
  double t52417;
  double t52418;
  double t52419;
  double t52424;
  double t52425;
  double t52404;
  double t52405;
  double t52420;
  double t52422;
  double t52470;
  double t52472;
  double t52474;
  double t52475;
  double t52487;
  double t52503;
  double t52525;
  double t52423;
  double t52427;
  double t52436;
  double t52477;
  double t52530;
  double t52534;
  double t52544;
  double t52550;
  double t52552;
  double t52211;
  double t52262;
  double t52263;
  double t52455;
  double t52584;
  double t53095;
  double t53195;
  double t53311;
  double t53346;
  double t53397;
  double t53402;
  t1146 = Cos(var1[4]);
  t51950 = Cos(var1[15]);
  t45386 = Cos(var1[5]);
  t52174 = Cos(var1[17]);
  t52181 = Sin(var1[16]);
  t52165 = Cos(var1[16]);
  t52182 = Sin(var1[17]);
  t51710 = Sin(var1[15]);
  t52202 = -1.*t52174*t52181;
  t52203 = t52165*t52182;
  t52204 = t52202 + t52203;
  t51951 = Sin(var1[5]);
  t52200 = Sin(var1[4]);
  t52212 = -1.*t52165*t52174;
  t52213 = -1.*t52181*t52182;
  t52214 = t52212 + t52213;
  t51937 = t45386*t51710;
  t52009 = t51950*t51951;
  t52081 = t51937 + t52009;
  t52271 = Cos(var1[3]);
  t52269 = Sin(var1[3]);
  t52179 = t52165*t52174;
  t52195 = t52181*t52182;
  t52199 = t52179 + t52195;
  t52205 = t51950*t45386*t52204;
  t52206 = -1.*t51710*t52204*t51951;
  t52207 = t52205 + t52206;
  t52215 = t51950*t45386*t52214;
  t52256 = -1.*t51710*t52214*t51951;
  t52261 = t52215 + t52256;
  t52272 = -1.*t51950*t45386;
  t52274 = t51710*t51951;
  t52275 = t52272 + t52274;
  t52280 = t45386*t51710*t52204;
  t52281 = t51950*t52204*t51951;
  t52289 = t52280 + t52281;
  t52296 = t1146*t52199;
  t52302 = -1.*t52200*t52207;
  t52315 = t52296 + t52302;
  t52331 = t45386*t51710*t52214;
  t52336 = t51950*t52214*t51951;
  t52341 = t52331 + t52336;
  t52346 = t1146*t52204;
  t52347 = -1.*t52200*t52261;
  t52358 = t52346 + t52347;
  t52201 = t52199*t52200;
  t52208 = t1146*t52207;
  t52209 = t52201 + t52208;
  t52400 = -1.*t51950;
  t52401 = 1. + t52400;
  t52402 = -0.15121*t52401;
  t52406 = -1.*t52165;
  t52407 = 1. + t52406;
  t52409 = -0.28121*t52407;
  t52410 = -1.*t52174;
  t52412 = 1. + t52410;
  t52413 = -0.50321*t52412;
  t52414 = -0.23321*t52174;
  t52415 = t52413 + t52414;
  t52417 = t52165*t52415;
  t52418 = 0.27*t52181*t52182;
  t52419 = t52409 + t52417 + t52418;
  t52424 = t51950*t52419;
  t52425 = t52402 + t52424;
  t52404 = -0.15121*t51950;
  t52405 = 0.15121*t51710;
  t52420 = t51710*t52419;
  t52422 = t52402 + t52404 + t52405 + t52420;
  t52470 = 0.28121*t52181;
  t52472 = t52415*t52181;
  t52474 = -0.27*t52165*t52182;
  t52475 = t52470 + t52472 + t52474;
  t52487 = t45386*t52425;
  t52503 = -1.*t52422*t51951;
  t52525 = t52487 + t52503;
  t52423 = t45386*t52422;
  t52427 = t52425*t51951;
  t52436 = t52423 + t52427;
  t52477 = t52475*t52200;
  t52530 = t1146*t52525;
  t52534 = t52477 + t52530;
  t52544 = t1146*t52475;
  t52550 = -1.*t52200*t52525;
  t52552 = t52544 + t52550;
  t52211 = t52204*t52200;
  t52262 = t1146*t52261;
  t52263 = t52211 + t52262;
  t52455 = -1.*t52275*t52436;
  t52584 = t52289*t52436;
  t53095 = t52275*t52436;
  t53195 = -1.*t52341*t52436;
  t53311 = -1.*t52289*t52436;
  t53346 = t52341*t52436;
  t53397 = -1.*t52475*t52199;
  t53402 = t52475*t52204;
  p_output1[0]=t52263*var2[0] + t1146*t52081*var2[1] + t52209*var2[2];
  p_output1[1]=(t52271*t52341 - 1.*t52269*t52358)*var2[0] + (t52081*t52200*t52269 + t52271*t52275)*var2[1] + (t52271*t52289 - 1.*t52269*t52315)*var2[2];
  p_output1[2]=(t52269*t52341 + t52271*t52358)*var2[0] + (-1.*t52081*t52200*t52271 + t52269*t52275)*var2[1] + (t52269*t52289 + t52271*t52315)*var2[2];
  p_output1[3]=(t52209*(t52455 - 1.*t1146*t52081*t52534 + t52081*t52200*t52552) + t1146*t52081*(t52209*t52534 + t52315*t52552 + t52584))*var2[0] + (t52263*(-1.*t52209*t52534 - 1.*t52315*t52552 + t53311) + t52209*(t52263*t52534 + t52358*t52552 + t53346))*var2[1] + (t52263*(t1146*t52081*t52534 - 1.*t52081*t52200*t52552 + t53095) + t1146*t52081*(-1.*t52263*t52534 - 1.*t52358*t52552 + t53195))*var2[2];
  p_output1[4]=(t52289*(t52455 - 1.*t52081*t52525) + t52275*(t52199*t52475 + t52207*t52525 + t52584))*var2[0] + (t52341*(-1.*t52207*t52525 + t53311 + t53397) + t52289*(t52261*t52525 + t53346 + t53402))*var2[1] + (t52341*(t52081*t52525 + t53095) + t52275*(-1.*t52204*t52475 - 1.*t52261*t52525 + t53195))*var2[2];
  p_output1[5]=t52199*(t51950*t52422 - 1.*t51710*t52425)*var2[0] + (t52204*(-1.*t51710*t52204*t52422 - 1.*t51950*t52204*t52425 + t53397) + t52199*(t51710*t52214*t52422 + t51950*t52214*t52425 + t53402))*var2[1] + t52204*(-1.*t51950*t52422 + t51710*t52425)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(-0.15121*t52199 - 0.15121*t52214)*var2[0] + (-0.15121 + t52204*(-1.*t52204*t52419 + t53397) + t52199*(t52214*t52419 + t53402))*var2[1];
  p_output1[16]=(0.28121*t52182 - 0.27*t52174*t52182 + t52182*t52415)*var2[0] + (0.28121*t52174 + 0.27*Power(t52182,2) + t52174*t52415)*var2[2];
  p_output1[17]=-0.27*var2[2];
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fRrFoot_vec_ParallelImpact.hh"

namespace SymFunction
{

void fRrFoot_vec_ParallelImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
