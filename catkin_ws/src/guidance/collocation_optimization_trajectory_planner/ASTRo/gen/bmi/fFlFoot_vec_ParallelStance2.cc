/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:52:49 GMT+02:00
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
  double t22030;
  double t50467;
  double t27363;
  double t50811;
  double t50825;
  double t50809;
  double t50829;
  double t28649;
  double t50469;
  double t50834;
  double t50835;
  double t50836;
  double t50802;
  double t50812;
  double t50830;
  double t50832;
  double t50436;
  double t50472;
  double t50474;
  double t51033;
  double t50955;
  double t50865;
  double t50883;
  double t50884;
  double t50918;
  double t50919;
  double t50925;
  double t50929;
  double t50932;
  double t50936;
  double t51044;
  double t51051;
  double t51056;
  double t51074;
  double t51077;
  double t51080;
  double t51088;
  double t51097;
  double t51107;
  double t51120;
  double t51124;
  double t51130;
  double t51136;
  double t51142;
  double t51144;
  double t50833;
  double t50913;
  double t50914;
  double t51220;
  double t51224;
  double t51226;
  double t51228;
  double t51231;
  double t51234;
  double t51235;
  double t51236;
  double t51237;
  double t51238;
  double t51239;
  double t51241;
  double t51242;
  double t51244;
  double t51245;
  double t51246;
  double t51251;
  double t51252;
  double t51255;
  double t51256;
  double t51261;
  double t51262;
  double t51263;
  double t51268;
  double t51279;
  double t51281;
  double t51283;
  double t51248;
  double t51257;
  double t51259;
  double t51277;
  double t51284;
  double t51287;
  double t51294;
  double t51309;
  double t51310;
  double t50927;
  double t50945;
  double t50947;
  double t51260;
  double t51324;
  double t51342;
  double t51372;
  double t51540;
  double t51576;
  double t51650;
  double t51660;
  t22030 = Cos(var1[4]);
  t50467 = Cos(var1[5]);
  t27363 = Cos(var1[6]);
  t50811 = Cos(var1[8]);
  t50825 = Sin(var1[7]);
  t50809 = Cos(var1[7]);
  t50829 = Sin(var1[8]);
  t28649 = Sin(var1[5]);
  t50469 = Sin(var1[6]);
  t50834 = t50811*t50825;
  t50835 = -1.*t50809*t50829;
  t50836 = t50834 + t50835;
  t50802 = Sin(var1[4]);
  t50812 = t50809*t50811;
  t50830 = t50825*t50829;
  t50832 = t50812 + t50830;
  t50436 = -1.*t27363*t28649;
  t50472 = -1.*t50467*t50469;
  t50474 = t50436 + t50472;
  t51033 = Cos(var1[3]);
  t50955 = Sin(var1[3]);
  t50865 = t50467*t27363*t50836;
  t50883 = -1.*t28649*t50469*t50836;
  t50884 = t50865 + t50883;
  t50918 = -1.*t50811*t50825;
  t50919 = t50809*t50829;
  t50925 = t50918 + t50919;
  t50929 = t50467*t27363*t50832;
  t50932 = -1.*t28649*t50469*t50832;
  t50936 = t50929 + t50932;
  t51044 = t50467*t27363;
  t51051 = -1.*t28649*t50469;
  t51056 = t51044 + t51051;
  t51074 = t27363*t28649*t50836;
  t51077 = t50467*t50469*t50836;
  t51080 = t51074 + t51077;
  t51088 = t22030*t50832;
  t51097 = -1.*t50802*t50884;
  t51107 = t51088 + t51097;
  t51120 = t27363*t28649*t50832;
  t51124 = t50467*t50469*t50832;
  t51130 = t51120 + t51124;
  t51136 = t22030*t50925;
  t51142 = -1.*t50802*t50936;
  t51144 = t51136 + t51142;
  t50833 = t50802*t50832;
  t50913 = t22030*t50884;
  t50914 = t50833 + t50913;
  t51220 = -1.*t27363;
  t51224 = 1. + t51220;
  t51226 = 0.15121*t51224;
  t51228 = -1.*t50809;
  t51231 = 1. + t51228;
  t51234 = 0.28121*t51231;
  t51235 = -1.*t50811;
  t51236 = 1. + t51235;
  t51237 = 0.50321*t51236;
  t51238 = 0.23321*t50811;
  t51239 = t51237 + t51238;
  t51241 = t50809*t51239;
  t51242 = -0.27*t50825*t50829;
  t51244 = t51234 + t51241 + t51242;
  t51245 = t27363*t51244;
  t51246 = t51226 + t51245;
  t51251 = 0.15121*t27363;
  t51252 = -0.15121*t50469;
  t51255 = t50469*t51244;
  t51256 = t51226 + t51251 + t51252 + t51255;
  t51261 = 0.28121*t50825;
  t51262 = -1.*t51239*t50825;
  t51263 = -0.27*t50809*t50829;
  t51268 = t51261 + t51262 + t51263;
  t51279 = t50467*t51246;
  t51281 = -1.*t28649*t51256;
  t51283 = t51279 + t51281;
  t51248 = t28649*t51246;
  t51257 = t50467*t51256;
  t51259 = t51248 + t51257;
  t51277 = t50802*t51268;
  t51284 = t22030*t51283;
  t51287 = t51277 + t51284;
  t51294 = t22030*t51268;
  t51309 = -1.*t50802*t51283;
  t51310 = t51294 + t51309;
  t50927 = t50802*t50925;
  t50945 = t22030*t50936;
  t50947 = t50927 + t50945;
  t51260 = -1.*t51056*t51259;
  t51324 = t51080*t51259;
  t51342 = t51056*t51259;
  t51372 = -1.*t51130*t51259;
  t51540 = -1.*t51080*t51259;
  t51576 = t51130*t51259;
  t51650 = -1.*t51268*t50832;
  t51660 = t51268*t50925;
  p_output1[0]=t50947*var2[0] + t22030*t50474*var2[1] + t50914*var2[2];
  p_output1[1]=(t51033*t51130 - 1.*t50955*t51144)*var2[0] + (t50474*t50802*t50955 + t51033*t51056)*var2[1] + (t51033*t51080 - 1.*t50955*t51107)*var2[2];
  p_output1[2]=(t50955*t51130 + t51033*t51144)*var2[0] + (-1.*t50474*t50802*t51033 + t50955*t51056)*var2[1] + (t50955*t51080 + t51033*t51107)*var2[2];
  p_output1[3]=(t50914*(t51260 - 1.*t22030*t50474*t51287 + t50474*t50802*t51310) + t22030*t50474*(t50914*t51287 + t51107*t51310 + t51324))*var2[0] + (t50947*(-1.*t50914*t51287 - 1.*t51107*t51310 + t51540) + t50914*(t50947*t51287 + t51144*t51310 + t51576))*var2[1] + (t50947*(t22030*t50474*t51287 - 1.*t50474*t50802*t51310 + t51342) + t22030*t50474*(-1.*t50947*t51287 - 1.*t51144*t51310 + t51372))*var2[2];
  p_output1[4]=(t51080*(t51260 - 1.*t50474*t51283) + t51056*(t50832*t51268 + t50884*t51283 + t51324))*var2[0] + (t51130*(-1.*t50884*t51283 + t51540 + t51650) + t51080*(t50936*t51283 + t51576 + t51660))*var2[1] + (t51130*(t50474*t51283 + t51342) + t51056*(-1.*t50925*t51268 - 1.*t50936*t51283 + t51372))*var2[2];
  p_output1[5]=t50832*(t50469*t51246 - 1.*t27363*t51256)*var2[0] + (t50925*(-1.*t27363*t50836*t51246 - 1.*t50469*t50836*t51256 + t51650) + t50832*(t27363*t50832*t51246 + t50469*t50832*t51256 + t51660))*var2[1] + t50925*(-1.*t50469*t51246 + t27363*t51256)*var2[2];
  p_output1[6]=(-0.15121 + t50925*(-1.*t50836*t51244 + t51650) + t50832*(t50832*t51244 + t51660))*var2[1] + (0.15121*t50836 + 0.15121*t50925)*var2[2];
  p_output1[7]=(0.28121*t50829 - 0.27*t50811*t50829 - 1.*t50829*t51239)*var2[0] + (0.28121*t50811 + 0.27*Power(t50829,2) - 1.*t50811*t51239)*var2[2];
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

#include "fFlFoot_vec_ParallelStance2.hh"

namespace SymFunction
{

void fFlFoot_vec_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
