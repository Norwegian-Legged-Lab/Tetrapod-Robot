/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:40:47 GMT+02:00
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
  double t2820;
  double t20038;
  double t4219;
  double t44686;
  double t51570;
  double t30652;
  double t51598;
  double t19363;
  double t51624;
  double t51686;
  double t51798;
  double t20758;
  double t51615;
  double t51953;
  double t51955;
  double t51956;
  double t19784;
  double t24768;
  double t25595;
  double t51968;
  double t51966;
  double t44860;
  double t51599;
  double t51605;
  double t51810;
  double t51872;
  double t51898;
  double t51957;
  double t51959;
  double t51960;
  double t52020;
  double t52034;
  double t52038;
  double t52066;
  double t52080;
  double t52102;
  double t52121;
  double t52122;
  double t52123;
  double t52139;
  double t52140;
  double t52143;
  double t52147;
  double t52148;
  double t52149;
  double t51619;
  double t51922;
  double t51930;
  double t52265;
  double t52282;
  double t52286;
  double t52291;
  double t52293;
  double t52294;
  double t52298;
  double t52305;
  double t52306;
  double t52307;
  double t52309;
  double t52313;
  double t52314;
  double t52316;
  double t52322;
  double t52328;
  double t52287;
  double t52288;
  double t52317;
  double t52318;
  double t52334;
  double t52335;
  double t52337;
  double t52338;
  double t52343;
  double t52344;
  double t52345;
  double t52319;
  double t52329;
  double t52330;
  double t52340;
  double t52348;
  double t52349;
  double t52351;
  double t52352;
  double t52353;
  double t51946;
  double t51962;
  double t51963;
  double t52332;
  double t52357;
  double t52368;
  double t52378;
  double t52426;
  double t52434;
  double t52465;
  double t52480;
  t2820 = Cos(var1[4]);
  t20038 = Cos(var1[15]);
  t4219 = Cos(var1[5]);
  t44686 = Cos(var1[17]);
  t51570 = Sin(var1[16]);
  t30652 = Cos(var1[16]);
  t51598 = Sin(var1[17]);
  t19363 = Sin(var1[15]);
  t51624 = -1.*t44686*t51570;
  t51686 = t30652*t51598;
  t51798 = t51624 + t51686;
  t20758 = Sin(var1[5]);
  t51615 = Sin(var1[4]);
  t51953 = -1.*t30652*t44686;
  t51955 = -1.*t51570*t51598;
  t51956 = t51953 + t51955;
  t19784 = t4219*t19363;
  t24768 = t20038*t20758;
  t25595 = t19784 + t24768;
  t51968 = Cos(var1[3]);
  t51966 = Sin(var1[3]);
  t44860 = t30652*t44686;
  t51599 = t51570*t51598;
  t51605 = t44860 + t51599;
  t51810 = t20038*t4219*t51798;
  t51872 = -1.*t19363*t51798*t20758;
  t51898 = t51810 + t51872;
  t51957 = t20038*t4219*t51956;
  t51959 = -1.*t19363*t51956*t20758;
  t51960 = t51957 + t51959;
  t52020 = -1.*t20038*t4219;
  t52034 = t19363*t20758;
  t52038 = t52020 + t52034;
  t52066 = t4219*t19363*t51798;
  t52080 = t20038*t51798*t20758;
  t52102 = t52066 + t52080;
  t52121 = t2820*t51605;
  t52122 = -1.*t51615*t51898;
  t52123 = t52121 + t52122;
  t52139 = t4219*t19363*t51956;
  t52140 = t20038*t51956*t20758;
  t52143 = t52139 + t52140;
  t52147 = t2820*t51798;
  t52148 = -1.*t51615*t51960;
  t52149 = t52147 + t52148;
  t51619 = t51605*t51615;
  t51922 = t2820*t51898;
  t51930 = t51619 + t51922;
  t52265 = -1.*t20038;
  t52282 = 1. + t52265;
  t52286 = -0.15121*t52282;
  t52291 = -1.*t30652;
  t52293 = 1. + t52291;
  t52294 = -0.28121*t52293;
  t52298 = -1.*t44686;
  t52305 = 1. + t52298;
  t52306 = -0.50321*t52305;
  t52307 = -0.23321*t44686;
  t52309 = t52306 + t52307;
  t52313 = t30652*t52309;
  t52314 = 0.27*t51570*t51598;
  t52316 = t52294 + t52313 + t52314;
  t52322 = t20038*t52316;
  t52328 = t52286 + t52322;
  t52287 = -0.15121*t20038;
  t52288 = 0.15121*t19363;
  t52317 = t19363*t52316;
  t52318 = t52286 + t52287 + t52288 + t52317;
  t52334 = 0.28121*t51570;
  t52335 = t52309*t51570;
  t52337 = -0.27*t30652*t51598;
  t52338 = t52334 + t52335 + t52337;
  t52343 = t4219*t52328;
  t52344 = -1.*t52318*t20758;
  t52345 = t52343 + t52344;
  t52319 = t4219*t52318;
  t52329 = t52328*t20758;
  t52330 = t52319 + t52329;
  t52340 = t52338*t51615;
  t52348 = t2820*t52345;
  t52349 = t52340 + t52348;
  t52351 = t2820*t52338;
  t52352 = -1.*t51615*t52345;
  t52353 = t52351 + t52352;
  t51946 = t51798*t51615;
  t51962 = t2820*t51960;
  t51963 = t51946 + t51962;
  t52332 = -1.*t52038*t52330;
  t52357 = t52102*t52330;
  t52368 = t52038*t52330;
  t52378 = -1.*t52143*t52330;
  t52426 = -1.*t52102*t52330;
  t52434 = t52143*t52330;
  t52465 = -1.*t52338*t51605;
  t52480 = t52338*t51798;
  p_output1[0]=t51963*var2[0] + t25595*t2820*var2[1] + t51930*var2[2];
  p_output1[1]=(t51968*t52143 - 1.*t51966*t52149)*var2[0] + (t25595*t51615*t51966 + t51968*t52038)*var2[1] + (t51968*t52102 - 1.*t51966*t52123)*var2[2];
  p_output1[2]=(t51966*t52143 + t51968*t52149)*var2[0] + (-1.*t25595*t51615*t51968 + t51966*t52038)*var2[1] + (t51966*t52102 + t51968*t52123)*var2[2];
  p_output1[3]=(t51930*(t52332 - 1.*t25595*t2820*t52349 + t25595*t51615*t52353) + t25595*t2820*(t51930*t52349 + t52123*t52353 + t52357))*var2[0] + (t51963*(-1.*t51930*t52349 - 1.*t52123*t52353 + t52426) + t51930*(t51963*t52349 + t52149*t52353 + t52434))*var2[1] + (t51963*(t25595*t2820*t52349 - 1.*t25595*t51615*t52353 + t52368) + t25595*t2820*(-1.*t51963*t52349 - 1.*t52149*t52353 + t52378))*var2[2];
  p_output1[4]=(t52102*(t52332 - 1.*t25595*t52345) + t52038*(t51605*t52338 + t51898*t52345 + t52357))*var2[0] + (t52143*(-1.*t51898*t52345 + t52426 + t52465) + t52102*(t51960*t52345 + t52434 + t52480))*var2[1] + (t52143*(t25595*t52345 + t52368) + t52038*(-1.*t51798*t52338 - 1.*t51960*t52345 + t52378))*var2[2];
  p_output1[5]=t51605*(t20038*t52318 - 1.*t19363*t52328)*var2[0] + (t51798*(-1.*t19363*t51798*t52318 - 1.*t20038*t51798*t52328 + t52465) + t51605*(t19363*t51956*t52318 + t20038*t51956*t52328 + t52480))*var2[1] + t51798*(-1.*t20038*t52318 + t19363*t52328)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(-0.15121*t51605 - 0.15121*t51956)*var2[0] + (-0.15121 + t51798*(-1.*t51798*t52316 + t52465) + t51605*(t51956*t52316 + t52480))*var2[1];
  p_output1[16]=(0.28121*t51598 - 0.27*t44686*t51598 + t51598*t52309)*var2[0] + (0.28121*t44686 + 0.27*Power(t51598,2) + t44686*t52309)*var2[2];
  p_output1[17]=-0.27*var2[2];
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

#include "fRrFoot_vec_ParallelStance.hh"

namespace SymFunction
{

void fRrFoot_vec_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
