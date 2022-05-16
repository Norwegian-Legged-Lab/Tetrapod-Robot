/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:43:48 GMT+02:00
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
  double t44562;
  double t44578;
  double t44587;
  double t44606;
  double t44783;
  double t44899;
  double t45003;
  double t44988;
  double t44990;
  double t45004;
  double t45001;
  double t45005;
  double t45007;
  double t45043;
  double t45051;
  double t45063;
  double t28081;
  double t44554;
  double t45114;
  double t45124;
  double t45131;
  double t45132;
  double t45137;
  double t45146;
  double t45147;
  double t45148;
  double t45155;
  double t45158;
  double t45172;
  double t45182;
  double t44900;
  double t44987;
  double t45025;
  double t45030;
  double t45120;
  double t45123;
  double t45139;
  double t45143;
  double t45214;
  double t45215;
  double t45216;
  double t45224;
  double t45227;
  double t45230;
  double t45239;
  double t45240;
  double t45241;
  double t45257;
  double t45258;
  double t45259;
  double t45261;
  double t45262;
  double t45263;
  double t45265;
  double t45266;
  double t45267;
  double t45285;
  double t45286;
  double t45289;
  double t45298;
  double t45299;
  double t45273;
  double t45349;
  double t45350;
  double t45352;
  double t45354;
  double t45356;
  double t45358;
  double t45363;
  double t45364;
  double t45366;
  double t45381;
  double t45382;
  double t45389;
  t44562 = Sin(var1[3]);
  t44578 = Cos(var1[15]);
  t44587 = -1.*t44578;
  t44606 = 1. + t44587;
  t44783 = -0.15121*t44606;
  t44899 = Sin(var1[15]);
  t45003 = Cos(var1[3]);
  t44988 = Cos(var1[5]);
  t44990 = Sin(var1[4]);
  t45004 = Sin(var1[5]);
  t45001 = t44988*t44562*t44990;
  t45005 = t45003*t45004;
  t45007 = t45001 + t45005;
  t45043 = t45003*t44988;
  t45051 = -1.*t44562*t44990*t45004;
  t45063 = t45043 + t45051;
  t28081 = Cos(var1[4]);
  t44554 = Sin(var1[16]);
  t45114 = Cos(var1[16]);
  t45124 = t44578*t45007;
  t45131 = t44899*t45063;
  t45132 = t45124 + t45131;
  t45137 = Cos(var1[17]);
  t45146 = -1.*t28081*t44554*t44562;
  t45147 = t45114*t45132;
  t45148 = t45146 + t45147;
  t45155 = Sin(var1[17]);
  t45158 = -1.*t45114*t28081*t44562;
  t45172 = -1.*t44554*t45132;
  t45182 = t45158 + t45172;
  t44900 = -0.15121*t44899;
  t44987 = t44783 + t44900;
  t45025 = 0.15121*t44899;
  t45030 = t44783 + t45025;
  t45120 = -1.*t45114;
  t45123 = 1. + t45120;
  t45139 = -1.*t45137;
  t45143 = 1. + t45139;
  t45214 = -1.*t44578*t45003*t28081*t44988;
  t45215 = t45003*t28081*t44899*t45004;
  t45216 = t45214 + t45215;
  t45224 = -1.*t45003*t44554*t44990;
  t45227 = t45114*t45216;
  t45230 = t45224 + t45227;
  t45239 = -1.*t45114*t45003*t44990;
  t45240 = -1.*t44554*t45216;
  t45241 = t45239 + t45240;
  t45257 = t45003*t44988*t44990;
  t45258 = -1.*t44562*t45004;
  t45259 = t45257 + t45258;
  t45261 = t44988*t44562;
  t45262 = t45003*t44990*t45004;
  t45263 = t45261 + t45262;
  t45265 = t44899*t45259;
  t45266 = t44578*t45263;
  t45267 = t45265 + t45266;
  t45285 = -1.*t45003*t44988*t44990;
  t45286 = t44562*t45004;
  t45289 = t45285 + t45286;
  t45298 = -1.*t44899*t45289;
  t45299 = t45298 + t45266;
  t45273 = -1.*t44899*t45263;
  t45349 = t44578*t45289;
  t45350 = t44899*t45263;
  t45352 = t45349 + t45350;
  t45354 = -1.*t45003*t28081*t44554;
  t45356 = -1.*t45114*t45352;
  t45358 = t45354 + t45356;
  t45363 = t45114*t45003*t28081;
  t45364 = -1.*t44554*t45352;
  t45366 = t45363 + t45364;
  t45381 = t45003*t28081*t44554;
  t45382 = t45114*t45352;
  t45389 = t45381 + t45382;
  p_output1[0]=1.;
  p_output1[1]=-0.28121*t28081*t44554*t44562 + t44987*t45007 + t45030*t45063 - 0.15121*(-1.*t44899*t45007 + t44578*t45063) - 0.28121*t45123*t45132 - 0.50321*t45143*t45148 - 0.50321*t45155*t45182 - 0.23321*(t45137*t45148 - 1.*t45155*t45182);
  p_output1[2]=-1.*t28081*t44987*t44988*t45003 - 0.28121*t44554*t44990*t45003 - 0.15121*(t28081*t44899*t44988*t45003 + t28081*t44578*t45003*t45004) + t28081*t45003*t45004*t45030 - 0.28121*t45123*t45216 - 0.50321*t45143*t45230 - 0.50321*t45155*t45241 - 0.23321*(t45137*t45230 - 1.*t45155*t45241);
  p_output1[3]=t45030*t45259 + t44987*t45263 - 0.28121*t45123*t45267 - 0.50321*t45114*t45143*t45267 + 0.50321*t44554*t45155*t45267 - 0.23321*(t45114*t45137*t45267 + t44554*t45155*t45267) - 0.15121*(t44578*t45259 + t45273);
  p_output1[4]=(0.15121*t44578 + t44900)*t45263 + (-0.15121*t44578 + t44900)*t45289 - 0.15121*(t45273 - 1.*t44578*t45289) - 0.28121*t45123*t45299 - 0.50321*t45114*t45143*t45299 + 0.50321*t44554*t45155*t45299 - 0.23321*(t45114*t45137*t45299 + t44554*t45155*t45299);
  p_output1[5]=0.28121*t28081*t45003*t45114 - 0.28121*t44554*t45352 - 0.50321*t45155*t45358 - 0.50321*t45143*t45366 - 0.23321*(-1.*t45155*t45358 + t45137*t45366);
  p_output1[6]=-0.50321*t45137*t45366 - 0.50321*t45155*t45389 - 0.23321*(-1.*t45137*t45366 - 1.*t45155*t45389);
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

#include "J_swing_position_RrFoot_ParallelStance.hh"

namespace ParallelStance
{

void J_swing_position_RrFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
