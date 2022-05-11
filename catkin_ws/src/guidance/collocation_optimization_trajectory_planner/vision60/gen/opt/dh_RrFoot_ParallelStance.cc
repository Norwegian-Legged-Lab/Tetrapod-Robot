/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:47:58 GMT+02:00
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
  double t1523;
  double t2627;
  double t11387;
  double t12550;
  double t13731;
  double t13571;
  double t2386;
  double t2800;
  double t2814;
  double t3617;
  double t3825;
  double t4899;
  double t5050;
  double t5318;
  double t5326;
  double t14123;
  double t14385;
  double t14386;
  double t14390;
  double t13053;
  double t13306;
  double t13313;
  double t13736;
  double t17066;
  double t17391;
  double t18946;
  double t19114;
  double t19984;
  double t17607;
  double t17867;
  double t18192;
  double t18319;
  double t18478;
  double t18564;
  double t12549;
  double t12842;
  double t12847;
  double t24443;
  double t24612;
  double t24442;
  double t24414;
  double t24553;
  double t24671;
  double t25488;
  double t26275;
  double t25780;
  double t25918;
  double t26252;
  double t25768;
  double t26308;
  double t26316;
  double t26325;
  double t17415;
  double t20973;
  double t21180;
  double t22129;
  double t22248;
  double t22265;
  double t22315;
  double t24033;
  double t27069;
  double t27073;
  double t27077;
  double t26940;
  double t26941;
  double t26954;
  double t27036;
  double t27056;
  double t27061;
  double t27103;
  double t27106;
  double t27107;
  double t27086;
  double t27207;
  double t27213;
  double t27218;
  double t27099;
  double t27222;
  double t27229;
  double t27236;
  double t27165;
  double t27192;
  double t27198;
  double t27350;
  double t27362;
  double t27378;
  double t28424;
  double t27663;
  double t27323;
  double t27343;
  double t27344;
  double t28113;
  double t27686;
  double t28776;
  double t24439;
  double t25514;
  double t25528;
  double t28791;
  double t27398;
  double t27399;
  double t27415;
  double t28899;
  double t28970;
  double t28987;
  double t29000;
  t1523 = Cos(var1[17]);
  t2627 = Sin(var1[17]);
  t11387 = Sin(var1[16]);
  t12550 = Cos(var1[16]);
  t13731 = Sin(var1[15]);
  t13571 = Cos(var1[15]);
  t2386 = -0.0641*t1523;
  t2800 = -0.28*t2627;
  t2814 = t2386 + t2800;
  t3617 = -1.*t1523;
  t3825 = 1. + t3617;
  t4899 = -0.575*t3825;
  t5050 = -0.295*t1523;
  t5318 = -0.0641*t2627;
  t5326 = t4899 + t5050 + t5318;
  t14123 = 0.325*t11387;
  t14385 = t12550*t2814;
  t14386 = t11387*t5326;
  t14390 = t14123 + t14385 + t14386;
  t13053 = -1.*t1523*t11387;
  t13306 = t12550*t2627;
  t13313 = t13053 + t13306;
  t13736 = -0.068*t13731;
  t17066 = t13571*t14390;
  t17391 = t13736 + t17066;
  t18946 = t12550*t1523;
  t19114 = t11387*t2627;
  t19984 = t18946 + t19114;
  t17607 = -1.*t13571;
  t17867 = 1. + t17607;
  t18192 = -0.1575*t17867;
  t18319 = -0.2255*t13571;
  t18478 = -1.*t13731*t14390;
  t18564 = t18192 + t18319 + t18478;
  t12549 = t1523*t11387;
  t12842 = -1.*t12550*t2627;
  t12847 = t12549 + t12842;
  t24443 = Cos(var1[5]);
  t24612 = Sin(var1[5]);
  t24442 = Cos(var1[4]);
  t24414 = Sin(var1[4]);
  t24553 = t24443*t19984;
  t24671 = t13731*t12847*t24612;
  t25488 = t24553 + t24671;
  t26275 = Cos(var1[3]);
  t25780 = -1.*t24443*t13731*t12847;
  t25918 = t19984*t24612;
  t26252 = t25780 + t25918;
  t25768 = Sin(var1[3]);
  t26308 = t13571*t24442*t12847;
  t26316 = -1.*t24414*t25488;
  t26325 = t26308 + t26316;
  t17415 = -1.*t13731*t17391;
  t20973 = -1.*t12550;
  t21180 = 1. + t20973;
  t22129 = -0.325*t21180;
  t22248 = -1.*t11387*t2814;
  t22265 = t12550*t5326;
  t22315 = t22129 + t22248 + t22265;
  t24033 = t13571*t17391*t19984;
  t27069 = t24443*t18564;
  t27073 = t22315*t24612;
  t27077 = t27069 + t27073;
  t26940 = -1.*t24443*t13731*t19984;
  t26941 = t13313*t24612;
  t26954 = t26940 + t26941;
  t27036 = t24443*t22315;
  t27056 = -1.*t18564*t24612;
  t27061 = t27036 + t27056;
  t27103 = t24443*t13313;
  t27106 = t13731*t19984*t24612;
  t27107 = t27103 + t27106;
  t27086 = -1.*t13571*t24443*t27077;
  t27207 = t13731*t24414;
  t27213 = -1.*t13571*t24442*t24612;
  t27218 = t27207 + t27213;
  t27099 = t27077*t26954;
  t27222 = t17391*t24414;
  t27229 = t24442*t27061;
  t27236 = t27222 + t27229;
  t27165 = t13571*t19984*t24414;
  t27192 = t24442*t27107;
  t27198 = t27165 + t27192;
  t27350 = t24442*t17391;
  t27362 = -1.*t24414*t27061;
  t27378 = t27350 + t27362;
  t28424 = t22315*t19984;
  t27663 = -1.*t22315*t13313;
  t27323 = t24442*t13731;
  t27343 = t13571*t24414*t24612;
  t27344 = t27323 + t27343;
  t28113 = t13571*t17391*t12847;
  t27686 = -1.*t13571*t17391*t19984;
  t28776 = t27077*t26252;
  t24439 = t13571*t12847*t24414;
  t25514 = t24442*t25488;
  t25528 = t24439 + t25514;
  t28791 = -1.*t27077*t26954;
  t27398 = t13571*t24442*t19984;
  t27399 = -1.*t24414*t27107;
  t27415 = t27398 + t27399;
  t28899 = t13731*t17391;
  t28970 = -1.*t13571*t17391*t12847;
  t28987 = t13571*t24443*t27077;
  t29000 = -1.*t27077*t26252;
  p_output1[0]=t25528*var2[0] + (t26252*t26275 - 1.*t25768*t26325)*var2[1] + (t25768*t26252 + t26275*t26325)*var2[2] + (t27198*(t27086 - 1.*t27218*t27236 - 1.*t27344*t27378) + t27218*(t27099 + t27198*t27236 + t27378*t27415))*var2[3] + (t26954*(t17415 + t13571*t24612*t27061 + t27086) + t13571*t24443*(t24033 + t27099 + t27061*t27107))*var2[4] + (t13571*(t17415 - 1.*t13571*t18564)*t19984 + t13731*(-1.*t13731*t18564*t19984 + t13313*t22315 + t24033))*var2[5] + (0.1575*t12847 + 0.2255*t13313)*var2[15] + (-0.325*t2627 - 1.*t1523*t2814 - 1.*t2627*t5326)*var2[16] - 0.0641*var2[17];
  p_output1[1]=t27218*var2[0] + (t13571*t24443*t26275 - 1.*t25768*t27344)*var2[1] + (t13571*t24443*t25768 + t26275*t27344)*var2[2] + (t27198*(t25528*t27236 + t26325*t27378 + t28776) + t25528*(-1.*t27198*t27236 - 1.*t27378*t27415 + t28791))*var2[3] + (t26954*(t25488*t27061 + t28113 + t28776) + t26252*(-1.*t27061*t27107 + t27686 + t28791))*var2[4] + (t12847*t13571*(t13731*t18564*t19984 + t27663 + t27686) + t13571*t19984*(-1.*t12847*t13731*t18564 + t28113 + t28424))*var2[5] + (t19984*(-1.*t14390*t19984 + t27663) + t13313*(t12847*t14390 + t28424))*var2[15];
  p_output1[2]=t27198*var2[0] + (t26275*t26954 - 1.*t25768*t27415)*var2[1] + (t25768*t26954 + t26275*t27415)*var2[2] + (t25528*(t27218*t27236 + t27344*t27378 + t28987) + t27218*(-1.*t25528*t27236 - 1.*t26325*t27378 + t29000))*var2[3] + (t26252*(-1.*t13571*t24612*t27061 + t28899 + t28987) + t13571*t24443*(-1.*t25488*t27061 + t28970 + t29000))*var2[4] + (t12847*t13571*(t13571*t18564 + t28899) + t13731*(t12847*t13731*t18564 - 1.*t19984*t22315 + t28970))*var2[5] - 0.068*t19984*var2[15] + (0.325*t1523 - 1.*t2627*t2814 + t1523*t5326)*var2[16] - 0.28*var2[17];
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

#include "dh_RrFoot_ParallelStance.hh"

namespace ParallelStance
{

void dh_RrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
