/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:21:17 GMT+02:00
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
  double t3293;
  double t3015;
  double t3034;
  double t3871;
  double t16367;
  double t16446;
  double t16471;
  double t16202;
  double t20235;
  double t15982;
  double t20249;
  double t5094;
  double t3109;
  double t3872;
  double t3873;
  double t4905;
  double t20125;
  double t20250;
  double t20302;
  double t20350;
  double t20332;
  double t20340;
  double t20341;
  double t20321;
  double t20356;
  double t20357;
  double t20359;
  double t20367;
  double t20368;
  double t20369;
  double t20422;
  double t20425;
  double t20430;
  double t20431;
  double t20433;
  double t20435;
  double t20436;
  double t20437;
  double t20439;
  double t20440;
  double t20441;
  double t20442;
  double t20443;
  double t20449;
  double t20450;
  double t20452;
  double t20426;
  double t20427;
  double t20429;
  double t20444;
  double t20447;
  double t20456;
  double t20457;
  double t20458;
  double t20459;
  double t20460;
  double t20461;
  double t20462;
  double t20464;
  double t20465;
  double t20466;
  double t20448;
  double t20453;
  double t20454;
  double t20366;
  double t20370;
  double t20371;
  double t20372;
  double t20373;
  double t20374;
  double t20463;
  double t20467;
  double t20468;
  double t20470;
  double t20471;
  double t20472;
  double t20476;
  double t20478;
  double t20479;
  double t20415;
  double t20420;
  double t20421;
  double t20455;
  double t20480;
  double t5089;
  double t20315;
  double t20320;
  double t20484;
  double t20485;
  double t20486;
  double t20514;
  double t20519;
  double t20525;
  double t20529;
  double t20556;
  double t20561;
  t3293 = Cos(var1[13]);
  t3015 = Cos(var1[14]);
  t3034 = Sin(var1[13]);
  t3871 = Sin(var1[14]);
  t16367 = t3293*t3015;
  t16446 = t3034*t3871;
  t16471 = t16367 + t16446;
  t16202 = Cos(var1[5]);
  t20235 = Sin(var1[12]);
  t15982 = Cos(var1[12]);
  t20249 = Sin(var1[5]);
  t5094 = Cos(var1[4]);
  t3109 = -1.*t3015*t3034;
  t3872 = t3293*t3871;
  t3873 = t3109 + t3872;
  t4905 = Sin(var1[4]);
  t20125 = t15982*t16202*t16471;
  t20250 = -1.*t20235*t16471*t20249;
  t20302 = t20125 + t20250;
  t20350 = Sin(var1[3]);
  t20332 = t16202*t20235*t16471;
  t20340 = t15982*t16471*t20249;
  t20341 = t20332 + t20340;
  t20321 = Cos(var1[3]);
  t20356 = t5094*t3873;
  t20357 = -1.*t4905*t20302;
  t20359 = t20356 + t20357;
  t20367 = t3015*t3034;
  t20368 = -1.*t3293*t3871;
  t20369 = t20367 + t20368;
  t20422 = -1.*t15982;
  t20425 = 1. + t20422;
  t20430 = -1.*t3293;
  t20431 = 1. + t20430;
  t20433 = 0.28121*t20431;
  t20435 = -1.*t3015;
  t20436 = 1. + t20435;
  t20437 = 0.50321*t20436;
  t20439 = 0.19821*t3015;
  t20440 = t20437 + t20439;
  t20441 = t3293*t20440;
  t20442 = -0.305*t3034*t3871;
  t20443 = t20433 + t20441 + t20442;
  t20449 = 0.15121*t20425;
  t20450 = t15982*t20443;
  t20452 = t20449 + t20450;
  t20426 = -0.15121*t20425;
  t20427 = -0.15121*t15982;
  t20429 = -0.15121*t20235;
  t20444 = t20235*t20443;
  t20447 = t20426 + t20427 + t20429 + t20444;
  t20456 = -1.*t16202*t20235;
  t20457 = -1.*t15982*t20249;
  t20458 = t20456 + t20457;
  t20459 = 0.28121*t3034;
  t20460 = -1.*t20440*t3034;
  t20461 = -0.305*t3293*t3871;
  t20462 = t20459 + t20460 + t20461;
  t20464 = t16202*t20452;
  t20465 = -1.*t20447*t20249;
  t20466 = t20464 + t20465;
  t20448 = t16202*t20447;
  t20453 = t20452*t20249;
  t20454 = t20448 + t20453;
  t20366 = t16471*t4905;
  t20370 = t15982*t16202*t20369;
  t20371 = -1.*t20235*t20369*t20249;
  t20372 = t20370 + t20371;
  t20373 = t5094*t20372;
  t20374 = t20366 + t20373;
  t20463 = t20462*t4905;
  t20467 = t5094*t20466;
  t20468 = t20463 + t20467;
  t20470 = t5094*t20462;
  t20471 = -1.*t4905*t20466;
  t20472 = t20470 + t20471;
  t20476 = t16202*t20235*t20369;
  t20478 = t15982*t20369*t20249;
  t20479 = t20476 + t20478;
  t20415 = t15982*t16202;
  t20420 = -1.*t20235*t20249;
  t20421 = t20415 + t20420;
  t20455 = -1.*t20421*t20454;
  t20480 = t20479*t20454;
  t5089 = t3873*t4905;
  t20315 = t5094*t20302;
  t20320 = t5089 + t20315;
  t20484 = t5094*t16471;
  t20485 = -1.*t4905*t20372;
  t20486 = t20484 + t20485;
  t20514 = -1.*t20479*t20454;
  t20519 = t20341*t20454;
  t20525 = -1.*t20462*t16471;
  t20529 = t20462*t3873;
  t20556 = t20421*t20454;
  t20561 = -1.*t20341*t20454;
  p_output1[0]=t20320;
  p_output1[1]=t20321*t20341 - 1.*t20350*t20359;
  p_output1[2]=t20341*t20350 + t20321*t20359;
  p_output1[3]=t20458*(t20374*t20468 + t20480 + t20472*t20486)*t5094 + t20374*(t20455 + t20458*t20472*t4905 - 1.*t20458*t20468*t5094);
  p_output1[4]=(t20455 - 1.*t20458*t20466)*t20479 + t20421*(t16471*t20462 + t20372*t20466 + t20480);
  p_output1[5]=t16471*(-1.*t15982*t20447 + t20235*t20452);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0.28121*t3871 - 1.*t20440*t3871 - 0.305*t3015*t3871;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t20458*t5094;
  p_output1[19]=t20321*t20421 + t20350*t20458*t4905;
  p_output1[20]=t20350*t20421 - 1.*t20321*t20458*t4905;
  p_output1[21]=t20320*(-1.*t20374*t20468 - 1.*t20472*t20486 + t20514) + t20374*(t20320*t20468 + t20359*t20472 + t20519);
  p_output1[22]=t20341*(-1.*t20372*t20466 + t20514 + t20525) + t20479*(t20302*t20466 + t20519 + t20529);
  p_output1[23]=t16471*(t16471*t20235*t20447 + t15982*t16471*t20452 + t20529) + (-1.*t20235*t20369*t20447 - 1.*t15982*t20369*t20452 + t20525)*t3873;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=-0.15121 + t16471*(t16471*t20443 + t20529) + (-1.*t20369*t20443 + t20525)*t3873;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t20374;
  p_output1[37]=t20321*t20479 - 1.*t20350*t20486;
  p_output1[38]=t20350*t20479 + t20321*t20486;
  p_output1[39]=t20458*(-1.*t20320*t20468 - 1.*t20359*t20472 + t20561)*t5094 + t20320*(t20556 - 1.*t20458*t20472*t4905 + t20458*t20468*t5094);
  p_output1[40]=t20341*(t20458*t20466 + t20556) + t20421*(-1.*t20302*t20466 + t20561 - 1.*t20462*t3873);
  p_output1[41]=(t15982*t20447 - 1.*t20235*t20452)*t3873;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.15121*t20369 - 0.15121*t3873;
  p_output1[49]=0.28121*t3015 - 1.*t20440*t3015 + 0.305*Power(t3871,2);
  p_output1[50]=-0.305;
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

#include "fFrFoot_map_ParallelImpact.hh"

namespace SymFunction
{

void fFrFoot_map_ParallelImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
