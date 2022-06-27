/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 14:37:51 GMT+02:00
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
  double t7235;
  double t8766;
  double t9113;
  double t7220;
  double t10347;
  double t11102;
  double t11174;
  double t11210;
  double t11373;
  double t11394;
  double t7631;
  double t10348;
  double t10383;
  double t11713;
  double t11978;
  double t12125;
  double t12468;
  double t12510;
  double t12581;
  double t12595;
  double t12619;
  double t12639;
  double t12701;
  double t12710;
  double t12717;
  double t12721;
  double t12723;
  double t12725;
  double t12726;
  double t12729;
  double t11466;
  double t11518;
  double t12144;
  double t12254;
  double t12477;
  double t12499;
  double t12704;
  double t12707;
  double t12918;
  double t12922;
  double t12932;
  double t12951;
  double t12977;
  double t12997;
  double t13005;
  double t13006;
  double t13010;
  double t13330;
  double t13335;
  double t13363;
  double t13215;
  double t13219;
  double t13222;
  double t13391;
  double t13410;
  double t13426;
  double t13812;
  double t13896;
  double t13897;
  double t14774;
  double t14785;
  double t13461;
  double t15359;
  double t15378;
  double t15380;
  double t15391;
  double t15399;
  double t15402;
  double t15418;
  double t15440;
  double t15444;
  double t15487;
  double t15496;
  double t15497;
  t7235 = Cos(var1[5]);
  t8766 = Sin(var1[3]);
  t9113 = Sin(var1[4]);
  t7220 = Cos(var1[3]);
  t10347 = Sin(var1[5]);
  t11102 = Cos(var1[6]);
  t11174 = -1.*t11102;
  t11210 = 1. + t11174;
  t11373 = 0.15121*t11210;
  t11394 = Sin(var1[6]);
  t7631 = t7220*t7235;
  t10348 = -1.*t8766*t9113*t10347;
  t10383 = t7631 + t10348;
  t11713 = t7235*t8766*t9113;
  t11978 = t7220*t10347;
  t12125 = t11713 + t11978;
  t12468 = Cos(var1[7]);
  t12510 = t11102*t12125;
  t12581 = t10383*t11394;
  t12595 = t12510 + t12581;
  t12619 = Cos(var1[4]);
  t12639 = Sin(var1[7]);
  t12701 = Cos(var1[8]);
  t12710 = t12468*t12595;
  t12717 = t12619*t8766*t12639;
  t12721 = t12710 + t12717;
  t12723 = -1.*t12619*t12468*t8766;
  t12725 = t12595*t12639;
  t12726 = t12723 + t12725;
  t12729 = Sin(var1[8]);
  t11466 = -0.15121*t11394;
  t11518 = t11373 + t11466;
  t12144 = 0.15121*t11394;
  t12254 = t11373 + t12144;
  t12477 = -1.*t12468;
  t12499 = 1. + t12477;
  t12704 = -1.*t12701;
  t12707 = 1. + t12704;
  t12918 = -1.*t7220*t12619*t7235*t11102;
  t12922 = t7220*t12619*t10347*t11394;
  t12932 = t12918 + t12922;
  t12951 = t12468*t12932;
  t12977 = t7220*t9113*t12639;
  t12997 = t12951 + t12977;
  t13005 = -1.*t7220*t12468*t9113;
  t13006 = t12932*t12639;
  t13010 = t13005 + t13006;
  t13330 = t7235*t8766;
  t13335 = t7220*t9113*t10347;
  t13363 = t13330 + t13335;
  t13215 = t7220*t7235*t9113;
  t13219 = -1.*t8766*t10347;
  t13222 = t13215 + t13219;
  t13391 = t11102*t13363;
  t13410 = t13222*t11394;
  t13426 = t13391 + t13410;
  t13812 = -1.*t7220*t7235*t9113;
  t13896 = t8766*t10347;
  t13897 = t13812 + t13896;
  t14774 = -1.*t13897*t11394;
  t14785 = t13391 + t14774;
  t13461 = -1.*t13363*t11394;
  t15359 = t11102*t13897;
  t15378 = t13363*t11394;
  t15380 = t15359 + t15378;
  t15391 = -1.*t7220*t12619*t12468;
  t15399 = -1.*t15380*t12639;
  t15402 = t15391 + t15399;
  t15418 = t12468*t15380;
  t15440 = -1.*t7220*t12619*t12639;
  t15444 = t15418 + t15440;
  t15487 = t7220*t12619*t12468;
  t15496 = t15380*t12639;
  t15497 = t15487 + t15496;
  p_output1[0]=1.;
  p_output1[1]=t10383*t11518 + 0.15121*(t10383*t11102 - 1.*t11394*t12125) + t12125*t12254 + 0.28121*t12499*t12595 + 0.50321*t12707*t12721 - 0.50321*t12726*t12729 + 0.19821*(t12701*t12721 + t12726*t12729) - 0.28121*t12619*t12639*t8766;
  p_output1[2]=0.28121*t12499*t12932 + 0.50321*t12707*t12997 - 0.50321*t12729*t13010 + 0.19821*(t12701*t12997 + t12729*t13010) + t10347*t11518*t12619*t7220 - 1.*t12254*t12619*t7220*t7235 + 0.15121*(t10347*t11102*t12619*t7220 + t11394*t12619*t7220*t7235) - 0.28121*t12639*t7220*t9113;
  p_output1[3]=t11518*t13222 + t12254*t13363 + 0.28121*t12499*t13426 + 0.50321*t12468*t12707*t13426 - 0.50321*t12639*t12729*t13426 + 0.19821*(t12468*t12701*t13426 + t12639*t12729*t13426) + 0.15121*(t11102*t13222 + t13461);
  p_output1[4]=(-0.15121*t11102 + t12144)*t13363 + (0.15121*t11102 + t12144)*t13897 + 0.15121*(t13461 - 1.*t11102*t13897) + 0.28121*t12499*t14785 + 0.50321*t12468*t12707*t14785 - 0.50321*t12639*t12729*t14785 + 0.19821*(t12468*t12701*t14785 + t12639*t12729*t14785);
  p_output1[5]=0.28121*t12639*t15380 + 0.50321*t12707*t15402 - 0.50321*t12729*t15444 + 0.19821*(t12701*t15402 + t12729*t15444) + 0.28121*t12468*t12619*t7220;
  p_output1[6]=0.50321*t12729*t15444 - 0.50321*t12701*t15497 + 0.19821*(-1.*t12729*t15444 + t12701*t15497);
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

#include "J_foot_clearance_FlFoot_ParallelStance.hh"

namespace ParallelStance
{

void J_foot_clearance_FlFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
