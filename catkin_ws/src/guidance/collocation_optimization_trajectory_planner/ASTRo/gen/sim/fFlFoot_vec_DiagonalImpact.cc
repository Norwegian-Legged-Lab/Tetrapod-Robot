/*
 * Automatically Generated from Mathematica.
 * Sun 22 May 2022 16:55:51 GMT+02:00
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
  double t6270;
  double t13204;
  double t6553;
  double t17275;
  double t17277;
  double t17274;
  double t17331;
  double t11947;
  double t13636;
  double t17344;
  double t17348;
  double t17349;
  double t17273;
  double t17276;
  double t17336;
  double t17337;
  double t12925;
  double t13640;
  double t14312;
  double t17369;
  double t17367;
  double t17350;
  double t17351;
  double t17352;
  double t17356;
  double t17357;
  double t17358;
  double t17360;
  double t17361;
  double t17362;
  double t17370;
  double t17371;
  double t17372;
  double t17376;
  double t17377;
  double t17379;
  double t17381;
  double t17382;
  double t17384;
  double t17388;
  double t17390;
  double t17391;
  double t17394;
  double t17395;
  double t17396;
  double t17338;
  double t17353;
  double t17354;
  double t17414;
  double t17415;
  double t17416;
  double t17417;
  double t17418;
  double t17419;
  double t17421;
  double t17422;
  double t17423;
  double t17424;
  double t17426;
  double t17427;
  double t17428;
  double t17429;
  double t17430;
  double t17431;
  double t17433;
  double t17434;
  double t17435;
  double t17436;
  double t17440;
  double t17441;
  double t17442;
  double t17443;
  double t17445;
  double t17446;
  double t17447;
  double t17432;
  double t17437;
  double t17438;
  double t17444;
  double t17448;
  double t17449;
  double t17451;
  double t17452;
  double t17453;
  double t17359;
  double t17363;
  double t17364;
  double t17439;
  double t17457;
  double t17464;
  double t17469;
  double t17476;
  double t17481;
  double t17507;
  double t17511;
  t6270 = Cos(var1[4]);
  t13204 = Cos(var1[5]);
  t6553 = Cos(var1[6]);
  t17275 = Cos(var1[8]);
  t17277 = Sin(var1[7]);
  t17274 = Cos(var1[7]);
  t17331 = Sin(var1[8]);
  t11947 = Sin(var1[5]);
  t13636 = Sin(var1[6]);
  t17344 = t17275*t17277;
  t17348 = -1.*t17274*t17331;
  t17349 = t17344 + t17348;
  t17273 = Sin(var1[4]);
  t17276 = t17274*t17275;
  t17336 = t17277*t17331;
  t17337 = t17276 + t17336;
  t12925 = -1.*t6553*t11947;
  t13640 = -1.*t13204*t13636;
  t14312 = t12925 + t13640;
  t17369 = Cos(var1[3]);
  t17367 = Sin(var1[3]);
  t17350 = t13204*t6553*t17349;
  t17351 = -1.*t11947*t13636*t17349;
  t17352 = t17350 + t17351;
  t17356 = -1.*t17275*t17277;
  t17357 = t17274*t17331;
  t17358 = t17356 + t17357;
  t17360 = t13204*t6553*t17337;
  t17361 = -1.*t11947*t13636*t17337;
  t17362 = t17360 + t17361;
  t17370 = t13204*t6553;
  t17371 = -1.*t11947*t13636;
  t17372 = t17370 + t17371;
  t17376 = t6553*t11947*t17349;
  t17377 = t13204*t13636*t17349;
  t17379 = t17376 + t17377;
  t17381 = t6270*t17337;
  t17382 = -1.*t17273*t17352;
  t17384 = t17381 + t17382;
  t17388 = t6553*t11947*t17337;
  t17390 = t13204*t13636*t17337;
  t17391 = t17388 + t17390;
  t17394 = t6270*t17358;
  t17395 = -1.*t17273*t17362;
  t17396 = t17394 + t17395;
  t17338 = t17273*t17337;
  t17353 = t6270*t17352;
  t17354 = t17338 + t17353;
  t17414 = -1.*t6553;
  t17415 = 1. + t17414;
  t17416 = 0.15121*t17415;
  t17417 = -1.*t17274;
  t17418 = 1. + t17417;
  t17419 = 0.28121*t17418;
  t17421 = -1.*t17275;
  t17422 = 1. + t17421;
  t17423 = 0.50321*t17422;
  t17424 = 0.23321*t17275;
  t17426 = t17423 + t17424;
  t17427 = t17274*t17426;
  t17428 = -0.27*t17277*t17331;
  t17429 = t17419 + t17427 + t17428;
  t17430 = t6553*t17429;
  t17431 = t17416 + t17430;
  t17433 = 0.15121*t6553;
  t17434 = -0.15121*t13636;
  t17435 = t13636*t17429;
  t17436 = t17416 + t17433 + t17434 + t17435;
  t17440 = 0.28121*t17277;
  t17441 = -1.*t17426*t17277;
  t17442 = -0.27*t17274*t17331;
  t17443 = t17440 + t17441 + t17442;
  t17445 = t13204*t17431;
  t17446 = -1.*t11947*t17436;
  t17447 = t17445 + t17446;
  t17432 = t11947*t17431;
  t17437 = t13204*t17436;
  t17438 = t17432 + t17437;
  t17444 = t17273*t17443;
  t17448 = t6270*t17447;
  t17449 = t17444 + t17448;
  t17451 = t6270*t17443;
  t17452 = -1.*t17273*t17447;
  t17453 = t17451 + t17452;
  t17359 = t17273*t17358;
  t17363 = t6270*t17362;
  t17364 = t17359 + t17363;
  t17439 = -1.*t17372*t17438;
  t17457 = t17379*t17438;
  t17464 = t17372*t17438;
  t17469 = -1.*t17391*t17438;
  t17476 = -1.*t17379*t17438;
  t17481 = t17391*t17438;
  t17507 = -1.*t17443*t17337;
  t17511 = t17443*t17358;
  p_output1[0]=t17364*var2[0] + t14312*t6270*var2[1] + t17354*var2[2];
  p_output1[1]=(t17369*t17391 - 1.*t17367*t17396)*var2[0] + (t14312*t17273*t17367 + t17369*t17372)*var2[1] + (t17369*t17379 - 1.*t17367*t17384)*var2[2];
  p_output1[2]=(t17367*t17391 + t17369*t17396)*var2[0] + (-1.*t14312*t17273*t17369 + t17367*t17372)*var2[1] + (t17367*t17379 + t17369*t17384)*var2[2];
  p_output1[3]=(t14312*(t17354*t17449 + t17384*t17453 + t17457)*t6270 + t17354*(t17439 + t14312*t17273*t17453 - 1.*t14312*t17449*t6270))*var2[0] + (t17364*(-1.*t17354*t17449 - 1.*t17384*t17453 + t17476) + t17354*(t17364*t17449 + t17396*t17453 + t17481))*var2[1] + (t14312*(-1.*t17364*t17449 - 1.*t17396*t17453 + t17469)*t6270 + t17364*(-1.*t14312*t17273*t17453 + t17464 + t14312*t17449*t6270))*var2[2];
  p_output1[4]=(t17379*(t17439 - 1.*t14312*t17447) + t17372*(t17337*t17443 + t17352*t17447 + t17457))*var2[0] + (t17391*(-1.*t17352*t17447 + t17476 + t17507) + t17379*(t17362*t17447 + t17481 + t17511))*var2[1] + (t17391*(t14312*t17447 + t17464) + t17372*(-1.*t17358*t17443 - 1.*t17362*t17447 + t17469))*var2[2];
  p_output1[5]=t17337*(t13636*t17431 - 1.*t17436*t6553)*var2[0] + (t17337*(t13636*t17337*t17436 + t17511 + t17337*t17431*t6553) + t17358*(-1.*t13636*t17349*t17436 + t17507 - 1.*t17349*t17431*t6553))*var2[1] + t17358*(-1.*t13636*t17431 + t17436*t6553)*var2[2];
  p_output1[6]=(-0.15121 + t17358*(-1.*t17349*t17429 + t17507) + t17337*(t17337*t17429 + t17511))*var2[1] + (0.15121*t17349 + 0.15121*t17358)*var2[2];
  p_output1[7]=(0.28121*t17331 - 0.27*t17275*t17331 - 1.*t17331*t17426)*var2[0] + (0.28121*t17275 + 0.27*Power(t17331,2) - 1.*t17275*t17426)*var2[2];
  p_output1[8]=-0.27*var2[2];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
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

#include "fFlFoot_vec_DiagonalImpact.hh"

namespace SymFunction
{

void fFlFoot_vec_DiagonalImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
