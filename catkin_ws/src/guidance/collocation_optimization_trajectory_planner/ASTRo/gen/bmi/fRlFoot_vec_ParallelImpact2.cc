/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 19:00:27 GMT+02:00
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
  double t9108;
  double t9209;
  double t9196;
  double t9227;
  double t9233;
  double t9226;
  double t9238;
  double t9206;
  double t9243;
  double t9244;
  double t9245;
  double t9214;
  double t9241;
  double t9253;
  double t9254;
  double t9291;
  double t9207;
  double t9215;
  double t9216;
  double t9306;
  double t9303;
  double t9228;
  double t9239;
  double t9240;
  double t9246;
  double t9247;
  double t9248;
  double t9295;
  double t9296;
  double t9297;
  double t9307;
  double t9308;
  double t9309;
  double t9314;
  double t9315;
  double t9316;
  double t9319;
  double t9320;
  double t9321;
  double t9326;
  double t9327;
  double t9328;
  double t9330;
  double t9331;
  double t9332;
  double t9242;
  double t9249;
  double t9250;
  double t9351;
  double t9353;
  double t9357;
  double t9358;
  double t9359;
  double t9360;
  double t9361;
  double t9362;
  double t9363;
  double t9364;
  double t9365;
  double t9366;
  double t9367;
  double t9371;
  double t9372;
  double t9373;
  double t9354;
  double t9355;
  double t9356;
  double t9368;
  double t9369;
  double t9377;
  double t9378;
  double t9379;
  double t9380;
  double t9382;
  double t9383;
  double t9384;
  double t9370;
  double t9374;
  double t9375;
  double t9381;
  double t9385;
  double t9386;
  double t9388;
  double t9389;
  double t9390;
  double t9252;
  double t9299;
  double t9300;
  double t9376;
  double t9394;
  double t9401;
  double t9406;
  double t9413;
  double t9418;
  double t9444;
  double t9448;
  t9108 = Cos(var1[4]);
  t9209 = Cos(var1[9]);
  t9196 = Cos(var1[5]);
  t9227 = Cos(var1[11]);
  t9233 = Sin(var1[10]);
  t9226 = Cos(var1[10]);
  t9238 = Sin(var1[11]);
  t9206 = Sin(var1[9]);
  t9243 = -1.*t9227*t9233;
  t9244 = t9226*t9238;
  t9245 = t9243 + t9244;
  t9214 = Sin(var1[5]);
  t9241 = Sin(var1[4]);
  t9253 = -1.*t9226*t9227;
  t9254 = -1.*t9233*t9238;
  t9291 = t9253 + t9254;
  t9207 = t9196*t9206;
  t9215 = t9209*t9214;
  t9216 = t9207 + t9215;
  t9306 = Cos(var1[3]);
  t9303 = Sin(var1[3]);
  t9228 = t9226*t9227;
  t9239 = t9233*t9238;
  t9240 = t9228 + t9239;
  t9246 = t9209*t9196*t9245;
  t9247 = -1.*t9206*t9245*t9214;
  t9248 = t9246 + t9247;
  t9295 = t9209*t9196*t9291;
  t9296 = -1.*t9206*t9291*t9214;
  t9297 = t9295 + t9296;
  t9307 = -1.*t9209*t9196;
  t9308 = t9206*t9214;
  t9309 = t9307 + t9308;
  t9314 = t9196*t9206*t9245;
  t9315 = t9209*t9245*t9214;
  t9316 = t9314 + t9315;
  t9319 = t9108*t9240;
  t9320 = -1.*t9241*t9248;
  t9321 = t9319 + t9320;
  t9326 = t9196*t9206*t9291;
  t9327 = t9209*t9291*t9214;
  t9328 = t9326 + t9327;
  t9330 = t9108*t9245;
  t9331 = -1.*t9241*t9297;
  t9332 = t9330 + t9331;
  t9242 = t9240*t9241;
  t9249 = t9108*t9248;
  t9250 = t9242 + t9249;
  t9351 = -1.*t9209;
  t9353 = 1. + t9351;
  t9357 = -1.*t9226;
  t9358 = 1. + t9357;
  t9359 = -0.28121*t9358;
  t9360 = -1.*t9227;
  t9361 = 1. + t9360;
  t9362 = -0.50321*t9361;
  t9363 = -0.19821*t9227;
  t9364 = t9362 + t9363;
  t9365 = t9226*t9364;
  t9366 = 0.305*t9233*t9238;
  t9367 = t9359 + t9365 + t9366;
  t9371 = -0.15121*t9353;
  t9372 = t9209*t9367;
  t9373 = t9371 + t9372;
  t9354 = 0.15121*t9353;
  t9355 = 0.15121*t9209;
  t9356 = 0.15121*t9206;
  t9368 = t9206*t9367;
  t9369 = t9354 + t9355 + t9356 + t9368;
  t9377 = 0.28121*t9233;
  t9378 = t9364*t9233;
  t9379 = -0.305*t9226*t9238;
  t9380 = t9377 + t9378 + t9379;
  t9382 = t9196*t9373;
  t9383 = -1.*t9369*t9214;
  t9384 = t9382 + t9383;
  t9370 = t9196*t9369;
  t9374 = t9373*t9214;
  t9375 = t9370 + t9374;
  t9381 = t9380*t9241;
  t9385 = t9108*t9384;
  t9386 = t9381 + t9385;
  t9388 = t9108*t9380;
  t9389 = -1.*t9241*t9384;
  t9390 = t9388 + t9389;
  t9252 = t9245*t9241;
  t9299 = t9108*t9297;
  t9300 = t9252 + t9299;
  t9376 = -1.*t9309*t9375;
  t9394 = t9316*t9375;
  t9401 = t9309*t9375;
  t9406 = -1.*t9328*t9375;
  t9413 = -1.*t9316*t9375;
  t9418 = t9328*t9375;
  t9444 = -1.*t9380*t9240;
  t9448 = t9380*t9245;
  p_output1[0]=t9300*var2[0] + t9108*t9216*var2[1] + t9250*var2[2];
  p_output1[1]=(t9306*t9328 - 1.*t9303*t9332)*var2[0] + (t9216*t9241*t9303 + t9306*t9309)*var2[1] + (t9306*t9316 - 1.*t9303*t9321)*var2[2];
  p_output1[2]=(t9303*t9328 + t9306*t9332)*var2[0] + (-1.*t9216*t9241*t9306 + t9303*t9309)*var2[1] + (t9303*t9316 + t9306*t9321)*var2[2];
  p_output1[3]=(t9250*(t9376 - 1.*t9108*t9216*t9386 + t9216*t9241*t9390) + t9108*t9216*(t9250*t9386 + t9321*t9390 + t9394))*var2[0] + (t9300*(-1.*t9250*t9386 - 1.*t9321*t9390 + t9413) + t9250*(t9300*t9386 + t9332*t9390 + t9418))*var2[1] + (t9300*(t9108*t9216*t9386 - 1.*t9216*t9241*t9390 + t9401) + t9108*t9216*(-1.*t9300*t9386 - 1.*t9332*t9390 + t9406))*var2[2];
  p_output1[4]=(t9316*(t9376 - 1.*t9216*t9384) + t9309*(t9240*t9380 + t9248*t9384 + t9394))*var2[0] + (t9328*(-1.*t9248*t9384 + t9413 + t9444) + t9316*(t9297*t9384 + t9418 + t9448))*var2[1] + (t9328*(t9216*t9384 + t9401) + t9309*(-1.*t9245*t9380 - 1.*t9297*t9384 + t9406))*var2[2];
  p_output1[5]=t9240*(t9209*t9369 - 1.*t9206*t9373)*var2[0] + (t9245*(-1.*t9206*t9245*t9369 - 1.*t9209*t9245*t9373 + t9444) + t9240*(t9206*t9291*t9369 + t9209*t9291*t9373 + t9448))*var2[1] + t9245*(-1.*t9209*t9369 + t9206*t9373)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(0.15121*t9240 + 0.15121*t9291)*var2[0] + (-0.15121 + t9245*(-1.*t9245*t9367 + t9444) + t9240*(t9291*t9367 + t9448))*var2[1];
  p_output1[10]=(0.28121*t9238 - 0.305*t9227*t9238 + t9238*t9364)*var2[0] + (0.28121*t9227 + 0.305*Power(t9238,2) + t9227*t9364)*var2[2];
  p_output1[11]=-0.305*var2[2];
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
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

#include "fRlFoot_vec_ParallelImpact2.hh"

namespace SymFunction
{

void fRlFoot_vec_ParallelImpact2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
