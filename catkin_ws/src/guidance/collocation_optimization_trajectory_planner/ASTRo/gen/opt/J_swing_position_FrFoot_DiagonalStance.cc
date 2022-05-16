/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:42:21 GMT+02:00
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
  double t6044;
  double t6074;
  double t6075;
  double t6120;
  double t6126;
  double t6127;
  double t6235;
  double t6174;
  double t6191;
  double t6240;
  double t6233;
  double t6244;
  double t6265;
  double t6285;
  double t6286;
  double t6287;
  double t5828;
  double t5963;
  double t6301;
  double t6319;
  double t6328;
  double t6329;
  double t6348;
  double t6361;
  double t6362;
  double t6363;
  double t6366;
  double t6367;
  double t6375;
  double t6379;
  double t6124;
  double t6135;
  double t6281;
  double t6282;
  double t6302;
  double t6311;
  double t6350;
  double t6351;
  double t6406;
  double t6411;
  double t6412;
  double t6416;
  double t6417;
  double t6418;
  double t6427;
  double t6436;
  double t6437;
  double t6449;
  double t6450;
  double t6451;
  double t6453;
  double t6454;
  double t6455;
  double t6457;
  double t6463;
  double t6464;
  double t6487;
  double t6498;
  double t6499;
  double t6504;
  double t6510;
  double t6512;
  double t6471;
  double t6559;
  double t6560;
  double t6561;
  double t6563;
  double t6564;
  double t6565;
  double t6569;
  double t6570;
  double t6574;
  double t6601;
  double t6604;
  double t6605;
  t6044 = Sin(var1[3]);
  t6074 = Cos(var1[12]);
  t6075 = -1.*t6074;
  t6120 = 1. + t6075;
  t6126 = Sin(var1[12]);
  t6127 = -0.15121*t6126;
  t6235 = Cos(var1[3]);
  t6174 = Cos(var1[5]);
  t6191 = Sin(var1[4]);
  t6240 = Sin(var1[5]);
  t6233 = t6174*t6044*t6191;
  t6244 = t6235*t6240;
  t6265 = t6233 + t6244;
  t6285 = t6235*t6174;
  t6286 = -1.*t6044*t6191*t6240;
  t6287 = t6285 + t6286;
  t5828 = Cos(var1[4]);
  t5963 = Sin(var1[13]);
  t6301 = Cos(var1[13]);
  t6319 = t6074*t6265;
  t6328 = t6126*t6287;
  t6329 = t6319 + t6328;
  t6348 = Cos(var1[14]);
  t6361 = t5828*t5963*t6044;
  t6362 = t6301*t6329;
  t6363 = t6361 + t6362;
  t6366 = Sin(var1[14]);
  t6367 = -1.*t6301*t5828*t6044;
  t6375 = t5963*t6329;
  t6379 = t6367 + t6375;
  t6124 = 0.15121*t6120;
  t6135 = t6124 + t6127;
  t6281 = -0.15121*t6120;
  t6282 = t6281 + t6127;
  t6302 = -1.*t6301;
  t6311 = 1. + t6302;
  t6350 = -1.*t6348;
  t6351 = 1. + t6350;
  t6406 = -1.*t6074*t6235*t5828*t6174;
  t6411 = t6235*t5828*t6126*t6240;
  t6412 = t6406 + t6411;
  t6416 = t6235*t5963*t6191;
  t6417 = t6301*t6412;
  t6418 = t6416 + t6417;
  t6427 = -1.*t6301*t6235*t6191;
  t6436 = t5963*t6412;
  t6437 = t6427 + t6436;
  t6449 = t6235*t6174*t6191;
  t6450 = -1.*t6044*t6240;
  t6451 = t6449 + t6450;
  t6453 = t6174*t6044;
  t6454 = t6235*t6191*t6240;
  t6455 = t6453 + t6454;
  t6457 = t6126*t6451;
  t6463 = t6074*t6455;
  t6464 = t6457 + t6463;
  t6487 = -0.15121*t6074;
  t6498 = -1.*t6235*t6174*t6191;
  t6499 = t6044*t6240;
  t6504 = t6498 + t6499;
  t6510 = -1.*t6126*t6504;
  t6512 = t6510 + t6463;
  t6471 = -1.*t6126*t6455;
  t6559 = t6074*t6504;
  t6560 = t6126*t6455;
  t6561 = t6559 + t6560;
  t6563 = -1.*t6235*t5828*t5963;
  t6564 = t6301*t6561;
  t6565 = t6563 + t6564;
  t6569 = -1.*t6301*t6235*t5828;
  t6570 = -1.*t5963*t6561;
  t6574 = t6569 + t6570;
  t6601 = t6301*t6235*t5828;
  t6604 = t5963*t6561;
  t6605 = t6601 + t6604;
  p_output1[0]=1.;
  p_output1[1]=-0.28121*t5828*t5963*t6044 + t6135*t6265 + t6282*t6287 - 0.15121*(-1.*t6126*t6265 + t6074*t6287) + 0.28121*t6311*t6329 + 0.50321*t6351*t6363 - 0.50321*t6366*t6379 + 0.23321*(t6348*t6363 + t6366*t6379);
  p_output1[2]=-1.*t5828*t6135*t6174*t6235 - 0.28121*t5963*t6191*t6235 - 0.15121*(t5828*t6126*t6174*t6235 + t5828*t6074*t6235*t6240) + t5828*t6235*t6240*t6282 + 0.28121*t6311*t6412 + 0.50321*t6351*t6418 - 0.50321*t6366*t6437 + 0.23321*(t6348*t6418 + t6366*t6437);
  p_output1[3]=t6282*t6451 + t6135*t6455 + 0.28121*t6311*t6464 + 0.50321*t6301*t6351*t6464 - 0.50321*t5963*t6366*t6464 + 0.23321*(t6301*t6348*t6464 + t5963*t6366*t6464) - 0.15121*(t6074*t6451 + t6471);
  p_output1[4]=t6455*(t6127 + t6487) + (0.15121*t6126 + t6487)*t6504 - 0.15121*(t6471 - 1.*t6074*t6504) + 0.28121*t6311*t6512 + 0.50321*t6301*t6351*t6512 - 0.50321*t5963*t6366*t6512 + 0.23321*(t6301*t6348*t6512 + t5963*t6366*t6512);
  p_output1[5]=0.28121*t5828*t6235*t6301 + 0.28121*t5963*t6561 - 0.50321*t6366*t6565 + 0.50321*t6351*t6574 + 0.23321*(t6366*t6565 + t6348*t6574);
  p_output1[6]=0.50321*t6366*t6565 - 0.50321*t6348*t6605 + 0.23321*(-1.*t6366*t6565 + t6348*t6605);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_swing_position_FrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void J_swing_position_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
