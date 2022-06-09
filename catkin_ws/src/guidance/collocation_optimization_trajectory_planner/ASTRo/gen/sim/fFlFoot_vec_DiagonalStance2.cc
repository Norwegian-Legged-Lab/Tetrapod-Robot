/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:37:59 GMT+02:00
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
  double t3840;
  double t16189;
  double t13844;
  double t16304;
  double t16329;
  double t16303;
  double t16330;
  double t16181;
  double t16192;
  double t16335;
  double t16337;
  double t16342;
  double t16301;
  double t16315;
  double t16332;
  double t16333;
  double t16187;
  double t16193;
  double t16194;
  double t16390;
  double t16388;
  double t16345;
  double t16347;
  double t16349;
  double t16365;
  double t16367;
  double t16371;
  double t16373;
  double t16376;
  double t16378;
  double t16391;
  double t16392;
  double t16395;
  double t16406;
  double t16407;
  double t16408;
  double t16411;
  double t16413;
  double t16414;
  double t16420;
  double t16421;
  double t16422;
  double t16424;
  double t16425;
  double t16426;
  double t16334;
  double t16350;
  double t16358;
  double t16453;
  double t16455;
  double t16457;
  double t16458;
  double t16461;
  double t16462;
  double t16463;
  double t16464;
  double t16465;
  double t16466;
  double t16467;
  double t16468;
  double t16469;
  double t16470;
  double t16471;
  double t16472;
  double t16474;
  double t16475;
  double t16477;
  double t16478;
  double t16482;
  double t16484;
  double t16485;
  double t16486;
  double t16488;
  double t16489;
  double t16490;
  double t16473;
  double t16479;
  double t16480;
  double t16487;
  double t16491;
  double t16501;
  double t16503;
  double t16508;
  double t16509;
  double t16372;
  double t16379;
  double t16380;
  double t16481;
  double t16521;
  double t16535;
  double t16546;
  double t16553;
  double t16560;
  double t16611;
  double t16618;
  t3840 = Cos(var1[4]);
  t16189 = Cos(var1[5]);
  t13844 = Cos(var1[6]);
  t16304 = Cos(var1[8]);
  t16329 = Sin(var1[7]);
  t16303 = Cos(var1[7]);
  t16330 = Sin(var1[8]);
  t16181 = Sin(var1[5]);
  t16192 = Sin(var1[6]);
  t16335 = t16304*t16329;
  t16337 = -1.*t16303*t16330;
  t16342 = t16335 + t16337;
  t16301 = Sin(var1[4]);
  t16315 = t16303*t16304;
  t16332 = t16329*t16330;
  t16333 = t16315 + t16332;
  t16187 = -1.*t13844*t16181;
  t16193 = -1.*t16189*t16192;
  t16194 = t16187 + t16193;
  t16390 = Cos(var1[3]);
  t16388 = Sin(var1[3]);
  t16345 = t16189*t13844*t16342;
  t16347 = -1.*t16181*t16192*t16342;
  t16349 = t16345 + t16347;
  t16365 = -1.*t16304*t16329;
  t16367 = t16303*t16330;
  t16371 = t16365 + t16367;
  t16373 = t16189*t13844*t16333;
  t16376 = -1.*t16181*t16192*t16333;
  t16378 = t16373 + t16376;
  t16391 = t16189*t13844;
  t16392 = -1.*t16181*t16192;
  t16395 = t16391 + t16392;
  t16406 = t13844*t16181*t16342;
  t16407 = t16189*t16192*t16342;
  t16408 = t16406 + t16407;
  t16411 = t3840*t16333;
  t16413 = -1.*t16301*t16349;
  t16414 = t16411 + t16413;
  t16420 = t13844*t16181*t16333;
  t16421 = t16189*t16192*t16333;
  t16422 = t16420 + t16421;
  t16424 = t3840*t16371;
  t16425 = -1.*t16301*t16378;
  t16426 = t16424 + t16425;
  t16334 = t16301*t16333;
  t16350 = t3840*t16349;
  t16358 = t16334 + t16350;
  t16453 = -1.*t13844;
  t16455 = 1. + t16453;
  t16457 = 0.15121*t16455;
  t16458 = -1.*t16303;
  t16461 = 1. + t16458;
  t16462 = 0.28121*t16461;
  t16463 = -1.*t16304;
  t16464 = 1. + t16463;
  t16465 = 0.50321*t16464;
  t16466 = 0.19821*t16304;
  t16467 = t16465 + t16466;
  t16468 = t16303*t16467;
  t16469 = -0.305*t16329*t16330;
  t16470 = t16462 + t16468 + t16469;
  t16471 = t13844*t16470;
  t16472 = t16457 + t16471;
  t16474 = 0.15121*t13844;
  t16475 = -0.15121*t16192;
  t16477 = t16192*t16470;
  t16478 = t16457 + t16474 + t16475 + t16477;
  t16482 = 0.28121*t16329;
  t16484 = -1.*t16467*t16329;
  t16485 = -0.305*t16303*t16330;
  t16486 = t16482 + t16484 + t16485;
  t16488 = t16189*t16472;
  t16489 = -1.*t16181*t16478;
  t16490 = t16488 + t16489;
  t16473 = t16181*t16472;
  t16479 = t16189*t16478;
  t16480 = t16473 + t16479;
  t16487 = t16301*t16486;
  t16491 = t3840*t16490;
  t16501 = t16487 + t16491;
  t16503 = t3840*t16486;
  t16508 = -1.*t16301*t16490;
  t16509 = t16503 + t16508;
  t16372 = t16301*t16371;
  t16379 = t3840*t16378;
  t16380 = t16372 + t16379;
  t16481 = -1.*t16395*t16480;
  t16521 = t16408*t16480;
  t16535 = t16395*t16480;
  t16546 = -1.*t16422*t16480;
  t16553 = -1.*t16408*t16480;
  t16560 = t16422*t16480;
  t16611 = -1.*t16486*t16333;
  t16618 = t16486*t16371;
  p_output1[0]=t16380*var2[0] + t16194*t3840*var2[1] + t16358*var2[2];
  p_output1[1]=(t16390*t16422 - 1.*t16388*t16426)*var2[0] + (t16194*t16301*t16388 + t16390*t16395)*var2[1] + (t16390*t16408 - 1.*t16388*t16414)*var2[2];
  p_output1[2]=(t16388*t16422 + t16390*t16426)*var2[0] + (-1.*t16194*t16301*t16390 + t16388*t16395)*var2[1] + (t16388*t16408 + t16390*t16414)*var2[2];
  p_output1[3]=(t16194*(t16358*t16501 + t16414*t16509 + t16521)*t3840 + t16358*(t16481 + t16194*t16301*t16509 - 1.*t16194*t16501*t3840))*var2[0] + (t16380*(-1.*t16358*t16501 - 1.*t16414*t16509 + t16553) + t16358*(t16380*t16501 + t16426*t16509 + t16560))*var2[1] + (t16194*(-1.*t16380*t16501 - 1.*t16426*t16509 + t16546)*t3840 + t16380*(-1.*t16194*t16301*t16509 + t16535 + t16194*t16501*t3840))*var2[2];
  p_output1[4]=(t16408*(t16481 - 1.*t16194*t16490) + t16395*(t16333*t16486 + t16349*t16490 + t16521))*var2[0] + (t16422*(-1.*t16349*t16490 + t16553 + t16611) + t16408*(t16378*t16490 + t16560 + t16618))*var2[1] + (t16422*(t16194*t16490 + t16535) + t16395*(-1.*t16371*t16486 - 1.*t16378*t16490 + t16546))*var2[2];
  p_output1[5]=t16333*(t16192*t16472 - 1.*t13844*t16478)*var2[0] + (t16371*(-1.*t13844*t16342*t16472 - 1.*t16192*t16342*t16478 + t16611) + t16333*(t13844*t16333*t16472 + t16192*t16333*t16478 + t16618))*var2[1] + t16371*(-1.*t16192*t16472 + t13844*t16478)*var2[2];
  p_output1[6]=(-0.15121 + t16371*(-1.*t16342*t16470 + t16611) + t16333*(t16333*t16470 + t16618))*var2[1] + (0.15121*t16342 + 0.15121*t16371)*var2[2];
  p_output1[7]=(0.28121*t16330 - 0.305*t16304*t16330 - 1.*t16330*t16467)*var2[0] + (0.28121*t16304 + 0.305*Power(t16330,2) - 1.*t16304*t16467)*var2[2];
  p_output1[8]=-0.305*var2[2];
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

#include "fFlFoot_vec_DiagonalStance2.hh"

namespace SymFunction
{

void fFlFoot_vec_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
