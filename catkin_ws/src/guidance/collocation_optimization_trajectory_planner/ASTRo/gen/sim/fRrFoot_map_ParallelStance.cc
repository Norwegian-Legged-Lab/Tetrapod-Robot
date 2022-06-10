/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:04:22 GMT+02:00
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
  double t5164;
  double t1688;
  double t2232;
  double t9037;
  double t13992;
  double t13995;
  double t14003;
  double t13959;
  double t14055;
  double t13445;
  double t14121;
  double t13444;
  double t2315;
  double t13389;
  double t13425;
  double t13429;
  double t14035;
  double t14142;
  double t14146;
  double t14210;
  double t14186;
  double t14188;
  double t14192;
  double t14166;
  double t14211;
  double t14214;
  double t14221;
  double t14378;
  double t14379;
  double t14380;
  double t14387;
  double t14389;
  double t14392;
  double t14393;
  double t14395;
  double t14396;
  double t14397;
  double t14398;
  double t14401;
  double t14405;
  double t14407;
  double t14420;
  double t14421;
  double t14381;
  double t14386;
  double t14409;
  double t14418;
  double t14425;
  double t14428;
  double t14429;
  double t14430;
  double t14433;
  double t14434;
  double t14435;
  double t14438;
  double t14442;
  double t14443;
  double t14419;
  double t14422;
  double t14423;
  double t14286;
  double t14288;
  double t14291;
  double t14314;
  double t14319;
  double t14333;
  double t14335;
  double t14354;
  double t14355;
  double t14436;
  double t14444;
  double t14445;
  double t14452;
  double t14453;
  double t14457;
  double t14462;
  double t14464;
  double t14465;
  double t14365;
  double t14371;
  double t14377;
  double t14424;
  double t14466;
  double t13441;
  double t14148;
  double t14162;
  double t14473;
  double t14478;
  double t14484;
  double t14681;
  double t14705;
  double t14733;
  double t14755;
  double t14897;
  double t14925;
  t5164 = Cos(var1[16]);
  t1688 = Cos(var1[17]);
  t2232 = Sin(var1[16]);
  t9037 = Sin(var1[17]);
  t13992 = -1.*t5164*t1688;
  t13995 = -1.*t2232*t9037;
  t14003 = t13992 + t13995;
  t13959 = Cos(var1[5]);
  t14055 = Sin(var1[15]);
  t13445 = Cos(var1[15]);
  t14121 = Sin(var1[5]);
  t13444 = Cos(var1[4]);
  t2315 = -1.*t1688*t2232;
  t13389 = t5164*t9037;
  t13425 = t2315 + t13389;
  t13429 = Sin(var1[4]);
  t14035 = t13445*t13959*t14003;
  t14142 = -1.*t14055*t14003*t14121;
  t14146 = t14035 + t14142;
  t14210 = Sin(var1[3]);
  t14186 = t13959*t14055*t14003;
  t14188 = t13445*t14003*t14121;
  t14192 = t14186 + t14188;
  t14166 = Cos(var1[3]);
  t14211 = t13444*t13425;
  t14214 = -1.*t13429*t14146;
  t14221 = t14211 + t14214;
  t14378 = -1.*t13445;
  t14379 = 1. + t14378;
  t14380 = -0.15121*t14379;
  t14387 = -1.*t5164;
  t14389 = 1. + t14387;
  t14392 = -0.28121*t14389;
  t14393 = -1.*t1688;
  t14395 = 1. + t14393;
  t14396 = -0.50321*t14395;
  t14397 = -0.19821*t1688;
  t14398 = t14396 + t14397;
  t14401 = t5164*t14398;
  t14405 = 0.305*t2232*t9037;
  t14407 = t14392 + t14401 + t14405;
  t14420 = t13445*t14407;
  t14421 = t14380 + t14420;
  t14381 = -0.15121*t13445;
  t14386 = 0.15121*t14055;
  t14409 = t14055*t14407;
  t14418 = t14380 + t14381 + t14386 + t14409;
  t14425 = t13959*t14055;
  t14428 = t13445*t14121;
  t14429 = t14425 + t14428;
  t14430 = 0.28121*t2232;
  t14433 = t14398*t2232;
  t14434 = -0.305*t5164*t9037;
  t14435 = t14430 + t14433 + t14434;
  t14438 = t13959*t14421;
  t14442 = -1.*t14418*t14121;
  t14443 = t14438 + t14442;
  t14419 = t13959*t14418;
  t14422 = t14421*t14121;
  t14423 = t14419 + t14422;
  t14286 = t5164*t1688;
  t14288 = t2232*t9037;
  t14291 = t14286 + t14288;
  t14314 = t14291*t13429;
  t14319 = t13445*t13959*t13425;
  t14333 = -1.*t14055*t13425*t14121;
  t14335 = t14319 + t14333;
  t14354 = t13444*t14335;
  t14355 = t14314 + t14354;
  t14436 = t14435*t13429;
  t14444 = t13444*t14443;
  t14445 = t14436 + t14444;
  t14452 = t13444*t14435;
  t14453 = -1.*t13429*t14443;
  t14457 = t14452 + t14453;
  t14462 = t13959*t14055*t13425;
  t14464 = t13445*t13425*t14121;
  t14465 = t14462 + t14464;
  t14365 = -1.*t13445*t13959;
  t14371 = t14055*t14121;
  t14377 = t14365 + t14371;
  t14424 = -1.*t14377*t14423;
  t14466 = t14465*t14423;
  t13441 = t13425*t13429;
  t14148 = t13444*t14146;
  t14162 = t13441 + t14148;
  t14473 = t13444*t14291;
  t14478 = -1.*t13429*t14335;
  t14484 = t14473 + t14478;
  t14681 = -1.*t14465*t14423;
  t14705 = t14192*t14423;
  t14733 = -1.*t14435*t14291;
  t14755 = t14435*t13425;
  t14897 = t14377*t14423;
  t14925 = -1.*t14192*t14423;
  p_output1[0]=t14162;
  p_output1[1]=t14166*t14192 - 1.*t14210*t14221;
  p_output1[2]=t14192*t14210 + t14166*t14221;
  p_output1[3]=t14355*(t14424 - 1.*t13444*t14429*t14445 + t13429*t14429*t14457) + t13444*t14429*(t14355*t14445 + t14466 + t14457*t14484);
  p_output1[4]=(t14424 - 1.*t14429*t14443)*t14465 + t14377*(t14291*t14435 + t14335*t14443 + t14466);
  p_output1[5]=t14291*(t13445*t14418 - 1.*t14055*t14421);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=-0.15121*t14003 - 0.15121*t14291;
  p_output1[16]=0.28121*t9037 + t14398*t9037 - 0.305*t1688*t9037;
  p_output1[17]=0;
  p_output1[18]=t13444*t14429;
  p_output1[19]=t14166*t14377 + t13429*t14210*t14429;
  p_output1[20]=t14210*t14377 - 1.*t13429*t14166*t14429;
  p_output1[21]=t14162*(-1.*t14355*t14445 - 1.*t14457*t14484 + t14681) + t14355*(t14162*t14445 + t14221*t14457 + t14705);
  p_output1[22]=t14192*(-1.*t14335*t14443 + t14681 + t14733) + t14465*(t14146*t14443 + t14705 + t14755);
  p_output1[23]=t13425*(-1.*t13425*t14055*t14418 - 1.*t13425*t13445*t14421 + t14733) + t14291*(t14003*t14055*t14418 + t13445*t14003*t14421 + t14755);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=-0.15121 + t13425*(-1.*t13425*t14407 + t14733) + t14291*(t14003*t14407 + t14755);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t14355;
  p_output1[37]=t14166*t14465 - 1.*t14210*t14484;
  p_output1[38]=t14210*t14465 + t14166*t14484;
  p_output1[39]=t14162*(t13444*t14429*t14445 - 1.*t13429*t14429*t14457 + t14897) + t13444*t14429*(-1.*t14162*t14445 - 1.*t14221*t14457 + t14925);
  p_output1[40]=t14192*(t14429*t14443 + t14897) + t14377*(-1.*t13425*t14435 - 1.*t14146*t14443 + t14925);
  p_output1[41]=t13425*(-1.*t13445*t14418 + t14055*t14421);
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
  p_output1[52]=0.28121*t1688 + t14398*t1688 + 0.305*Power(t9037,2);
  p_output1[53]=-0.305;
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

#include "fRrFoot_map_ParallelStance.hh"

namespace SymFunction
{

void fRrFoot_map_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
