/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:51:25 GMT+02:00
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
  double t273;
  double t673;
  double t832;
  double t230;
  double t836;
  double t1108;
  double t1263;
  double t1319;
  double t1590;
  double t1704;
  double t489;
  double t888;
  double t1016;
  double t2344;
  double t2393;
  double t2401;
  double t3684;
  double t4252;
  double t4253;
  double t4599;
  double t4672;
  double t4801;
  double t5397;
  double t5410;
  double t5778;
  double t5876;
  double t6787;
  double t6790;
  double t6806;
  double t6923;
  double t1987;
  double t2086;
  double t2472;
  double t2477;
  double t4079;
  double t4085;
  double t5403;
  double t5409;
  double t7191;
  double t7198;
  double t7204;
  double t8168;
  double t8171;
  double t8172;
  double t8183;
  double t8187;
  double t8199;
  double t8855;
  double t8902;
  double t8906;
  double t8341;
  double t8744;
  double t8785;
  double t8940;
  double t8950;
  double t8985;
  double t9893;
  double t10377;
  double t10535;
  double t10682;
  double t10688;
  double t9272;
  double t11837;
  double t11855;
  double t11989;
  double t12039;
  double t12048;
  double t12074;
  double t12144;
  double t12155;
  double t12163;
  double t12571;
  double t12672;
  double t12675;
  t273 = Cos(var1[5]);
  t673 = Sin(var1[3]);
  t832 = Sin(var1[4]);
  t230 = Cos(var1[3]);
  t836 = Sin(var1[5]);
  t1108 = Cos(var1[6]);
  t1263 = -1.*t1108;
  t1319 = 1. + t1263;
  t1590 = 0.15121*t1319;
  t1704 = Sin(var1[6]);
  t489 = t230*t273;
  t888 = -1.*t673*t832*t836;
  t1016 = t489 + t888;
  t2344 = t273*t673*t832;
  t2393 = t230*t836;
  t2401 = t2344 + t2393;
  t3684 = Cos(var1[7]);
  t4252 = t1108*t2401;
  t4253 = t1016*t1704;
  t4599 = t4252 + t4253;
  t4672 = Cos(var1[4]);
  t4801 = Sin(var1[7]);
  t5397 = Cos(var1[8]);
  t5410 = t3684*t4599;
  t5778 = t4672*t673*t4801;
  t5876 = t5410 + t5778;
  t6787 = -1.*t4672*t3684*t673;
  t6790 = t4599*t4801;
  t6806 = t6787 + t6790;
  t6923 = Sin(var1[8]);
  t1987 = -0.15121*t1704;
  t2086 = t1590 + t1987;
  t2472 = 0.15121*t1704;
  t2477 = t1590 + t2472;
  t4079 = -1.*t3684;
  t4085 = 1. + t4079;
  t5403 = -1.*t5397;
  t5409 = 1. + t5403;
  t7191 = -1.*t230*t4672*t273*t1108;
  t7198 = t230*t4672*t836*t1704;
  t7204 = t7191 + t7198;
  t8168 = t3684*t7204;
  t8171 = t230*t832*t4801;
  t8172 = t8168 + t8171;
  t8183 = -1.*t230*t3684*t832;
  t8187 = t7204*t4801;
  t8199 = t8183 + t8187;
  t8855 = t273*t673;
  t8902 = t230*t832*t836;
  t8906 = t8855 + t8902;
  t8341 = t230*t273*t832;
  t8744 = -1.*t673*t836;
  t8785 = t8341 + t8744;
  t8940 = t1108*t8906;
  t8950 = t8785*t1704;
  t8985 = t8940 + t8950;
  t9893 = -1.*t230*t273*t832;
  t10377 = t673*t836;
  t10535 = t9893 + t10377;
  t10682 = -1.*t10535*t1704;
  t10688 = t8940 + t10682;
  t9272 = -1.*t8906*t1704;
  t11837 = t1108*t10535;
  t11855 = t8906*t1704;
  t11989 = t11837 + t11855;
  t12039 = -1.*t230*t4672*t3684;
  t12048 = -1.*t11989*t4801;
  t12074 = t12039 + t12048;
  t12144 = t3684*t11989;
  t12155 = -1.*t230*t4672*t4801;
  t12163 = t12144 + t12155;
  t12571 = t230*t4672*t3684;
  t12672 = t11989*t4801;
  t12675 = t12571 + t12672;
  p_output1[0]=1.;
  p_output1[1]=t1016*t2086 + 0.15121*(t1016*t1108 - 1.*t1704*t2401) + t2401*t2477 + 0.28121*t4085*t4599 + 0.50321*t5409*t5876 - 0.28121*t4672*t4801*t673 - 0.50321*t6806*t6923 + 0.19821*(t5397*t5876 + t6806*t6923);
  p_output1[2]=-1.*t230*t2477*t273*t4672 + 0.28121*t4085*t7204 + 0.50321*t5409*t8172 - 0.50321*t6923*t8199 + 0.19821*(t5397*t8172 + t6923*t8199) - 0.28121*t230*t4801*t832 + t2086*t230*t4672*t836 + 0.15121*(t1704*t230*t273*t4672 + t1108*t230*t4672*t836);
  p_output1[3]=t2086*t8785 + t2477*t8906 + 0.28121*t4085*t8985 + 0.50321*t3684*t5409*t8985 - 0.50321*t4801*t6923*t8985 + 0.19821*(t3684*t5397*t8985 + t4801*t6923*t8985) + 0.15121*(t1108*t8785 + t9272);
  p_output1[4]=t10535*(0.15121*t1108 + t2472) + 0.28121*t10688*t4085 + 0.50321*t10688*t3684*t5409 - 0.50321*t10688*t4801*t6923 + 0.19821*(t10688*t3684*t5397 + t10688*t4801*t6923) + (-0.15121*t1108 + t2472)*t8906 + 0.15121*(-1.*t10535*t1108 + t9272);
  p_output1[5]=0.28121*t230*t3684*t4672 + 0.28121*t11989*t4801 + 0.50321*t12074*t5409 - 0.50321*t12163*t6923 + 0.19821*(t12074*t5397 + t12163*t6923);
  p_output1[6]=-0.50321*t12675*t5397 + 0.50321*t12163*t6923 + 0.19821*(t12675*t5397 - 1.*t12163*t6923);
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

#include "J_u_frontSwingFootHeightflat_ParallelStance_ParallelStance.hh"

namespace SymFunction
{

void J_u_frontSwingFootHeightflat_ParallelStance_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
