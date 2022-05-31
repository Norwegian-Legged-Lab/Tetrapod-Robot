/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 17:01:26 GMT+02:00
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
  double t3735;
  double t6479;
  double t7425;
  double t7564;
  double t7582;
  double t7724;
  double t8364;
  double t6466;
  double t8551;
  double t9463;
  double t9510;
  double t9765;
  double t9919;
  double t10202;
  double t10210;
  double t8490;
  double t8773;
  double t8788;
  double t9906;
  double t9930;
  double t9931;
  double t9939;
  double t10037;
  double t10069;
  double t10098;
  double t10101;
  double t10219;
  double t10238;
  double t10247;
  double t10256;
  double t10258;
  double t10330;
  double t10349;
  double t10361;
  double t10301;
  double t10314;
  double t10365;
  double t10370;
  double t10470;
  double t10472;
  double t10473;
  double t10593;
  double t10617;
  double t10618;
  double t7786;
  double t7790;
  double t8510;
  double t10802;
  double t10807;
  double t10809;
  double t10820;
  double t10821;
  double t10822;
  double t10830;
  double t10833;
  double t10839;
  double t10883;
  double t10867;
  double t10983;
  double t10987;
  double t10993;
  double t10869;
  double t10903;
  double t10958;
  double t10995;
  double t10996;
  double t10997;
  double t10265;
  double t10266;
  double t10268;
  double t10273;
  double t11075;
  double t11078;
  double t11080;
  double t11128;
  double t11202;
  double t11016;
  double t11332;
  double t11334;
  double t11335;
  double t11331;
  double t11336;
  double t11339;
  double t11350;
  double t11389;
  double t11395;
  double t12108;
  double t12231;
  double t12661;
  double t13684;
  double t13691;
  double t13695;
  double t13738;
  double t13744;
  double t13759;
  double t13791;
  double t13953;
  double t14032;
  double t15173;
  double t15183;
  double t15190;
  double t15241;
  double t15267;
  double t15271;
  double t15363;
  double t15365;
  double t15402;
  double t15446;
  double t15450;
  double t16320;
  double t16770;
  double t16791;
  double t16920;
  double t18066;
  double t18070;
  double t18076;
  double t18080;
  double t18082;
  double t18083;
  double t18394;
  double t18397;
  double t18398;
  double t18410;
  double t18412;
  double t18099;
  double t18640;
  double t18673;
  double t18714;
  double t18466;
  double t18731;
  double t18749;
  double t18820;
  double t18824;
  double t18832;
  double t18889;
  double t18904;
  double t22243;
  double t22264;
  double t22306;
  double t22444;
  double t22455;
  double t22478;
  double t22488;
  double t22492;
  double t22497;
  t3735 = Cos(var1[4]);
  t6479 = Cos(var1[6]);
  t7425 = -1.*t6479;
  t7564 = 1. + t7425;
  t7582 = 0.15121*t7564;
  t7724 = Sin(var1[6]);
  t8364 = Sin(var1[5]);
  t6466 = Cos(var1[5]);
  t8551 = Cos(var1[7]);
  t9463 = -1.*t3735*t6479*t8364;
  t9510 = -1.*t3735*t6466*t7724;
  t9765 = t9463 + t9510;
  t9919 = Cos(var1[8]);
  t10202 = Sin(var1[7]);
  t10210 = Sin(var1[8]);
  t8490 = 0.15121*t7724;
  t8773 = -1.*t8551;
  t8788 = 1. + t8773;
  t9906 = 0.28121*t8788*t9765;
  t9930 = -1.*t9919;
  t9931 = 1. + t9930;
  t9939 = 0.50321*t8551*t9931*t9765;
  t10037 = -1.*t3735*t6466*t6479;
  t10069 = t3735*t8364*t7724;
  t10098 = t10037 + t10069;
  t10101 = 0.15121*t10098;
  t10219 = -0.50321*t9765*t10202*t10210;
  t10238 = t8551*t9919*t9765;
  t10247 = t9765*t10202*t10210;
  t10256 = t10238 + t10247;
  t10258 = 0.19821*t10256;
  t10330 = t3735*t6466*t6479;
  t10349 = -1.*t3735*t8364*t7724;
  t10361 = t10330 + t10349;
  t10301 = Sin(var1[4]);
  t10314 = t8551*t10301;
  t10365 = t10361*t10202;
  t10370 = t10314 + t10365;
  t10470 = t8551*t10361;
  t10472 = -1.*t10301*t10202;
  t10473 = t10470 + t10472;
  t10593 = -1.*t8551*t10301;
  t10617 = -1.*t10361*t10202;
  t10618 = t10593 + t10617;
  t7786 = -0.15121*t7724;
  t7790 = t7582 + t7786;
  t8510 = t7582 + t8490;
  t10802 = -1.*t6466*t6479*t10301;
  t10807 = t10301*t8364*t7724;
  t10809 = t10802 + t10807;
  t10820 = t8551*t10809;
  t10821 = -1.*t3735*t10202;
  t10822 = t10820 + t10821;
  t10830 = t3735*t8551;
  t10833 = t10809*t10202;
  t10839 = t10830 + t10833;
  t10883 = Cos(var1[3]);
  t10867 = Sin(var1[3]);
  t10983 = t10883*t6466;
  t10987 = -1.*t10867*t10301*t8364;
  t10993 = t10983 + t10987;
  t10869 = -1.*t6466*t10867*t10301;
  t10903 = -1.*t10883*t8364;
  t10958 = t10869 + t10903;
  t10995 = t6479*t10993;
  t10996 = t10958*t7724;
  t10997 = t10995 + t10996;
  t10265 = -0.15121*t6479;
  t10266 = t10265 + t8490;
  t10268 = 0.15121*t6479;
  t10273 = t10268 + t8490;
  t11075 = t6466*t10867*t10301;
  t11078 = t10883*t8364;
  t11080 = t11075 + t11078;
  t11128 = -1.*t11080*t7724;
  t11202 = t10995 + t11128;
  t11016 = -1.*t10993*t7724;
  t11332 = t6479*t11080;
  t11334 = t10993*t7724;
  t11335 = t11332 + t11334;
  t11331 = -1.*t3735*t8551*t10867;
  t11336 = t11335*t10202;
  t11339 = t11331 + t11336;
  t11350 = t8551*t11335;
  t11389 = t3735*t10867*t10202;
  t11395 = t11350 + t11389;
  t12108 = t3735*t8551*t10867;
  t12231 = -1.*t11335*t10202;
  t12661 = t12108 + t12231;
  t13684 = t3735*t6466*t6479*t10867;
  t13691 = -1.*t3735*t10867*t8364*t7724;
  t13695 = t13684 + t13691;
  t13738 = t8551*t13695;
  t13744 = -1.*t10867*t10301*t10202;
  t13759 = t13738 + t13744;
  t13791 = t8551*t10867*t10301;
  t13953 = t13695*t10202;
  t14032 = t13791 + t13953;
  t15173 = -1.*t6466*t10867;
  t15183 = -1.*t10883*t10301*t8364;
  t15190 = t15173 + t15183;
  t15241 = t10883*t6466*t10301;
  t15267 = -1.*t10867*t8364;
  t15271 = t15241 + t15267;
  t15363 = t6479*t15271;
  t15365 = t15190*t7724;
  t15402 = t15363 + t15365;
  t15446 = t8551*t15402;
  t15450 = t10883*t3735*t10202;
  t16320 = t15446 + t15450;
  t16770 = -1.*t10883*t3735*t8551;
  t16791 = t15402*t10202;
  t16920 = t16770 + t16791;
  t18066 = t6466*t10867;
  t18070 = t10883*t10301*t8364;
  t18076 = t18066 + t18070;
  t18080 = t6479*t18076;
  t18082 = t15271*t7724;
  t18083 = t18080 + t18082;
  t18394 = -1.*t10883*t6466*t10301;
  t18397 = t10867*t8364;
  t18398 = t18394 + t18397;
  t18410 = -1.*t18398*t7724;
  t18412 = t18080 + t18410;
  t18099 = -1.*t18076*t7724;
  t18640 = t6479*t18398;
  t18673 = t18076*t7724;
  t18714 = t18640 + t18673;
  t18466 = t10883*t3735*t8551;
  t18731 = t18714*t10202;
  t18749 = t18466 + t18731;
  t18820 = t8551*t18714;
  t18824 = -1.*t10883*t3735*t10202;
  t18832 = t18820 + t18824;
  t18889 = -1.*t18714*t10202;
  t18904 = t16770 + t18889;
  t22243 = -1.*t10883*t3735*t6466*t6479;
  t22264 = t10883*t3735*t8364*t7724;
  t22306 = t22243 + t22264;
  t22444 = t8551*t22306;
  t22455 = t10883*t10301*t10202;
  t22478 = t22444 + t22455;
  t22488 = -1.*t10883*t8551*t10301;
  t22492 = t22306*t10202;
  t22497 = t22488 + t22492;
  p_output1[0]=var2[0] + (-0.50321*t10210*t10839 + 0.28121*t10202*t3735 + t10301*t7790*t8364 + 0.15121*(t10301*t6466*t7724 + t10301*t6479*t8364) - 1.*t10301*t6466*t8510 + 0.28121*t10809*t8788 + 0.19821*(t10210*t10839 + t10822*t9919) + 0.50321*t10822*t9931)*var2[4] + (t10101 + t10219 + t10258 - 1.*t3735*t6466*t7790 - 1.*t3735*t8364*t8510 + t9906 + t9939)*var2[5] + (t10101 + t10219 + t10258 + t10273*t3735*t6466 - 1.*t10266*t3735*t8364 + t9906 + t9939)*var2[6] + (0.28121*t10202*t10361 - 0.50321*t10210*t10473 + 0.28121*t10301*t8551 + 0.19821*(t10210*t10473 + t10618*t9919) + 0.50321*t10618*t9931)*var2[7] + (0.50321*t10210*t10473 - 0.50321*t10370*t9919 + 0.19821*(-1.*t10210*t10473 + t10370*t9919))*var2[8];
  p_output1[1]=var2[1] + (-0.50321*t10210*t16920 - 0.28121*t10202*t10883*t3735 + 0.15121*(t15190*t6479 - 1.*t15271*t7724) + t15190*t7790 + t15271*t8510 + 0.28121*t15402*t8788 + 0.19821*(t10210*t16920 + t16320*t9919) + 0.50321*t16320*t9931)*var2[3] + (0.28121*t10202*t10301*t10867 - 0.50321*t10210*t14032 - 1.*t10867*t3735*t7790*t8364 + 0.15121*(-1.*t10867*t3735*t6466*t7724 - 1.*t10867*t3735*t6479*t8364) + t10867*t3735*t6466*t8510 + 0.28121*t13695*t8788 + 0.19821*(t10210*t14032 + t13759*t9919) + 0.50321*t13759*t9931)*var2[4] + (-0.50321*t10202*t10210*t10997 + 0.15121*(t11016 + t10958*t6479) + t10958*t7790 + t10993*t8510 + 0.28121*t10997*t8788 + 0.19821*(t10202*t10210*t10997 + t10997*t8551*t9919) + 0.50321*t10997*t8551*t9931)*var2[5] + (t10266*t10993 + t10273*t11080 - 0.50321*t10202*t10210*t11202 + 0.15121*(t11016 - 1.*t11080*t6479) + 0.28121*t11202*t8788 + 0.19821*(t10202*t10210*t11202 + t11202*t8551*t9919) + 0.50321*t11202*t8551*t9931)*var2[6] + (0.28121*t10202*t11335 - 0.50321*t10210*t11395 - 0.28121*t10867*t3735*t8551 + 0.19821*(t10210*t11395 + t12661*t9919) + 0.50321*t12661*t9931)*var2[7] + (0.50321*t10210*t11395 - 0.50321*t11339*t9919 + 0.19821*(-1.*t10210*t11395 + t11339*t9919))*var2[8];
  p_output1[2]=var2[2] + (0.15121*t11202 - 0.50321*t10210*t11339 - 0.28121*t10202*t10867*t3735 + t10993*t7790 + t11080*t8510 + 0.28121*t11335*t8788 + 0.19821*(t10210*t11339 + t11395*t9919) + 0.50321*t11395*t9931)*var2[3] + (-0.28121*t10202*t10301*t10883 - 0.50321*t10210*t22497 + t10883*t3735*t7790*t8364 + 0.15121*(t10883*t3735*t6466*t7724 + t10883*t3735*t6479*t8364) - 1.*t10883*t3735*t6466*t8510 + 0.28121*t22306*t8788 + 0.19821*(t10210*t22497 + t22478*t9919) + 0.50321*t22478*t9931)*var2[4] + (-0.50321*t10202*t10210*t18083 + 0.15121*(t15363 + t18099) + t15271*t7790 + t18076*t8510 + 0.28121*t18083*t8788 + 0.19821*(t10202*t10210*t18083 + t18083*t8551*t9919) + 0.50321*t18083*t8551*t9931)*var2[5] + (t10266*t18076 + t10273*t18398 - 0.50321*t10202*t10210*t18412 + 0.15121*(t18099 - 1.*t18398*t6479) + 0.28121*t18412*t8788 + 0.19821*(t10202*t10210*t18412 + t18412*t8551*t9919) + 0.50321*t18412*t8551*t9931)*var2[6] + (0.28121*t10202*t18714 - 0.50321*t10210*t18832 + 0.28121*t10883*t3735*t8551 + 0.19821*(t10210*t18832 + t18904*t9919) + 0.50321*t18904*t9931)*var2[7] + (0.50321*t10210*t18832 - 0.50321*t18749*t9919 + 0.19821*(-1.*t10210*t18832 + t18749*t9919))*var2[8];
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
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "impact_velocity_FlFoot_ParallelStance.hh"

namespace ParallelStance
{

void impact_velocity_FlFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
