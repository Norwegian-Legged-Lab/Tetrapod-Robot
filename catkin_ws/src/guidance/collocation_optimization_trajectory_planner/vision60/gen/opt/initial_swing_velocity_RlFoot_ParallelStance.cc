/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:48:35 GMT+02:00
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
  double t303;
  double t31;
  double t30;
  double t73;
  double t381;
  double t5346;
  double t5418;
  double t21537;
  double t21861;
  double t22285;
  double t24697;
  double t24732;
  double t26300;
  double t22294;
  double t23113;
  double t26565;
  double t26883;
  double t26933;
  double t27120;
  double t27195;
  double t27201;
  double t24986;
  double t25109;
  double t25140;
  double t30583;
  double t30587;
  double t30635;
  double t30710;
  double t30712;
  double t30803;
  double t32053;
  double t32057;
  double t32058;
  double t26427;
  double t26437;
  double t26283;
  double t26292;
  double t32511;
  double t32717;
  double t32718;
  double t32728;
  double t32742;
  double t32746;
  double t32755;
  double t32765;
  double t32766;
  double t32853;
  double t32915;
  double t32918;
  double t32927;
  double t32934;
  double t32935;
  double t32936;
  double t32943;
  double t32946;
  double t32949;
  double t32994;
  double t33000;
  double t33006;
  double t33007;
  double t33015;
  double t33016;
  double t33017;
  double t33043;
  double t33044;
  double t33045;
  double t33052;
  double t33053;
  double t33054;
  double t33056;
  double t33057;
  double t33058;
  double t33079;
  double t33080;
  double t33081;
  double t33074;
  double t33075;
  double t33077;
  double t33140;
  double t33142;
  double t33148;
  double t33244;
  double t33273;
  double t33287;
  double t33296;
  double t33303;
  double t33307;
  double t33022;
  double t33025;
  double t33028;
  double t33326;
  double t33355;
  double t33379;
  double t33420;
  double t33421;
  double t33422;
  double t33424;
  double t33425;
  double t33426;
  double t33447;
  double t33448;
  double t33449;
  double t33557;
  double t33558;
  double t33560;
  double t33590;
  double t33614;
  double t33615;
  double t33618;
  double t33621;
  double t33624;
  double t33083;
  double t33643;
  double t33644;
  double t33645;
  double t33679;
  double t33680;
  double t33720;
  double t33724;
  double t33725;
  double t33732;
  double t33733;
  double t33734;
  double t33689;
  double t33690;
  double t33692;
  double t33917;
  double t33923;
  double t33924;
  double t33927;
  double t33928;
  double t33929;
  double t33938;
  double t33942;
  double t33944;
  double t33975;
  double t34002;
  double t34023;
  double t33465;
  double t33489;
  double t33513;
  double t33440;
  t303 = Sin(var1[9]);
  t31 = Sin(var1[4]);
  t30 = Cos(var1[9]);
  t73 = Cos(var1[4]);
  t381 = Sin(var1[5]);
  t5346 = Sin(var1[10]);
  t5418 = -1.*t303*t31;
  t21537 = t30*t73*t381;
  t21861 = t5418 + t21537;
  t22285 = Cos(var1[11]);
  t24697 = Cos(var1[10]);
  t24732 = Sin(var1[11]);
  t26300 = Cos(var1[5]);
  t22294 = -1.*t22285;
  t23113 = 1. + t22294;
  t26565 = t73*t26300*t303*t5346;
  t26883 = -1.*t24697*t73*t381;
  t26933 = t26565 + t26883;
  t27120 = t24697*t73*t26300*t303;
  t27195 = t73*t5346*t381;
  t27201 = t27120 + t27195;
  t24986 = t30*t31;
  t25109 = t73*t303*t381;
  t25140 = t24986 + t25109;
  t30583 = -1.*t73*t26300*t5346;
  t30587 = t24697*t25140;
  t30635 = t30583 + t30587;
  t30710 = -1.*t24697*t73*t26300;
  t30712 = -1.*t5346*t25140;
  t30803 = t30710 + t30712;
  t32053 = t24697*t73*t26300;
  t32057 = t5346*t25140;
  t32058 = t32053 + t32057;
  t26427 = -1.*t24697;
  t26437 = 1. + t26427;
  t26283 = -1.*t30;
  t26292 = 1. + t26283;
  t32511 = t30*t73;
  t32717 = -1.*t303*t31*t381;
  t32718 = t32511 + t32717;
  t32728 = t26300*t5346*t31;
  t32742 = t24697*t32718;
  t32746 = t32728 + t32742;
  t32755 = -1.*t24697*t26300*t31;
  t32765 = t5346*t32718;
  t32766 = t32755 + t32765;
  t32853 = Sin(var1[3]);
  t32915 = t30*t32853*t31;
  t32918 = t73*t303*t32853*t381;
  t32927 = t32915 + t32918;
  t32934 = -1.*t73*t26300*t5346*t32853;
  t32935 = t24697*t32927;
  t32936 = t32934 + t32935;
  t32943 = t24697*t73*t26300*t32853;
  t32946 = t5346*t32927;
  t32949 = t32943 + t32946;
  t32994 = Cos(var1[3]);
  t33000 = t32994*t26300;
  t33006 = -1.*t32853*t31*t381;
  t33007 = t33000 + t33006;
  t33015 = t73*t303*t32853;
  t33016 = -1.*t30*t33007;
  t33017 = t33015 + t33016;
  t33043 = -1.*t26300*t32853*t31;
  t33044 = -1.*t32994*t381;
  t33045 = t33043 + t33044;
  t33052 = -1.*t303*t5346*t33045;
  t33053 = t24697*t33007;
  t33054 = t33052 + t33053;
  t33056 = -1.*t24697*t303*t33045;
  t33057 = -1.*t5346*t33007;
  t33058 = t33056 + t33057;
  t33079 = -1.*t26300*t32853;
  t33080 = -1.*t32994*t31*t381;
  t33081 = t33079 + t33080;
  t33074 = t32994*t26300*t31;
  t33075 = -1.*t32853*t381;
  t33077 = t33074 + t33075;
  t33140 = -1.*t30*t32994*t73;
  t33142 = -1.*t303*t33081;
  t33148 = t33140 + t33142;
  t33244 = -1.*t5346*t33077;
  t33273 = t24697*t33148;
  t33287 = t33244 + t33273;
  t33296 = t24697*t33077;
  t33303 = t5346*t33148;
  t33307 = t33296 + t33303;
  t33022 = -1.*t30*t73*t32853;
  t33025 = -1.*t303*t33007;
  t33028 = t33022 + t33025;
  t33326 = t26300*t32853*t31;
  t33355 = t32994*t381;
  t33379 = t33326 + t33355;
  t33420 = -1.*t5346*t33379;
  t33421 = t24697*t33028;
  t33422 = t33420 + t33421;
  t33424 = -1.*t24697*t33379;
  t33425 = -1.*t5346*t33028;
  t33426 = t33424 + t33425;
  t33447 = t24697*t33379;
  t33448 = t5346*t33028;
  t33449 = t33447 + t33448;
  t33557 = -1.*t30*t32994*t31;
  t33558 = -1.*t32994*t73*t303*t381;
  t33560 = t33557 + t33558;
  t33590 = t32994*t73*t26300*t5346;
  t33614 = t24697*t33560;
  t33615 = t33590 + t33614;
  t33618 = -1.*t24697*t32994*t73*t26300;
  t33621 = t5346*t33560;
  t33624 = t33618 + t33621;
  t33083 = -1.*t32994*t73*t303;
  t33643 = t26300*t32853;
  t33644 = t32994*t31*t381;
  t33645 = t33643 + t33644;
  t33679 = -1.*t30*t33645;
  t33680 = t33083 + t33679;
  t33720 = -1.*t303*t5346*t33077;
  t33724 = t24697*t33645;
  t33725 = t33720 + t33724;
  t33732 = -1.*t24697*t303*t33077;
  t33733 = -1.*t5346*t33645;
  t33734 = t33732 + t33733;
  t33689 = t30*t32994*t73;
  t33690 = -1.*t303*t33645;
  t33692 = t33689 + t33690;
  t33917 = -1.*t32994*t26300*t31;
  t33923 = t32853*t381;
  t33924 = t33917 + t33923;
  t33927 = -1.*t5346*t33924;
  t33928 = t24697*t33692;
  t33929 = t33927 + t33928;
  t33938 = -1.*t24697*t33924;
  t33942 = -1.*t5346*t33692;
  t33944 = t33938 + t33942;
  t33975 = t24697*t33924;
  t34002 = t5346*t33692;
  t34023 = t33975 + t34002;
  t33465 = -1.*t24732*t33422;
  t33489 = t22285*t33449;
  t33513 = t33465 + t33489;
  t33440 = t22285*t33422;
  p_output1[0]=var2[0] + (0.325*t26300*t26437*t31 - 0.575*t24732*t32746 - 0.575*t23113*t32766 - 0.295*(-1.*t24732*t32746 + t22285*t32766) - 0.0641*(t22285*t32746 + t24732*t32766) + 0.1575*t26292*t31*t381 + 0.325*t32718*t5346 - 0.1575*t303*t73 + 0.2255*(t30*t31*t381 + t303*t73))*var2[4] + (-0.575*t23113*t26933 - 0.575*t24732*t27201 - 0.0641*(t24732*t26933 + t22285*t27201) - 0.295*(t22285*t26933 - 1.*t24732*t27201) - 0.1575*t26292*t26300*t73 - 0.2255*t26300*t30*t73 + 0.325*t26437*t381*t73 + 0.325*t26300*t303*t5346*t73)*var2[5] + (-0.575*t21861*t24697*t24732 + 0.2255*t25140 - 0.1575*t30*t31 + 0.325*t21861*t5346 - 0.575*t21861*t23113*t5346 - 0.295*(-1.*t21861*t24697*t24732 + t21861*t22285*t5346) - 0.0641*(t21861*t22285*t24697 + t21861*t24732*t5346) - 0.1575*t303*t381*t73)*var2[9] + (0.325*t24697*t25140 - 0.575*t23113*t30635 - 0.575*t24732*t30803 - 0.0641*(t24732*t30635 + t22285*t30803) - 0.295*(t22285*t30635 - 1.*t24732*t30803) - 0.325*t26300*t5346*t73)*var2[10] + (-0.575*t22285*t30635 - 0.575*t24732*t32058 - 0.0641*(-1.*t24732*t30635 + t22285*t32058) - 0.295*(-1.*t22285*t30635 - 1.*t24732*t32058))*var2[11];
  p_output1[1]=var2[1] + (-0.325*t26437*t33077 + 0.1575*t26292*t33081 + 0.2255*(t30*t33081 + t33083) - 0.575*t24732*t33287 - 0.575*t23113*t33307 - 0.295*(-1.*t24732*t33287 + t22285*t33307) - 0.0641*(t22285*t33287 + t24732*t33307) + 0.325*t33148*t5346 + 0.1575*t303*t32994*t73)*var2[3] + (-0.1575*t303*t31*t32853 - 0.575*t24732*t32936 - 0.575*t23113*t32949 - 0.295*(-1.*t24732*t32936 + t22285*t32949) - 0.0641*(t22285*t32936 + t24732*t32949) + 0.325*t32927*t5346 - 0.325*t26300*t26437*t32853*t73 - 0.1575*t26292*t32853*t381*t73 + 0.2255*(t303*t31*t32853 - 1.*t30*t32853*t381*t73))*var2[4] + (-0.325*t26437*t33007 + 0.1575*t26292*t33045 + 0.2255*t30*t33045 - 0.575*t23113*t33054 - 0.575*t24732*t33058 - 0.0641*(t24732*t33054 + t22285*t33058) - 0.295*(t22285*t33054 - 1.*t24732*t33058) - 0.325*t303*t33045*t5346)*var2[5] + (0.1575*t303*t33007 - 0.575*t24697*t24732*t33017 + 0.2255*t33028 + 0.325*t33017*t5346 - 0.575*t23113*t33017*t5346 - 0.295*(-1.*t24697*t24732*t33017 + t22285*t33017*t5346) - 0.0641*(t22285*t24697*t33017 + t24732*t33017*t5346) + 0.1575*t30*t32853*t73)*var2[9] + (0.325*t24697*t33028 - 0.575*t23113*t33422 - 0.575*t24732*t33426 - 0.0641*(t24732*t33422 + t22285*t33426) - 0.295*(-1.*t24732*t33426 + t33440) - 0.325*t33379*t5346)*var2[10] + (-0.575*t22285*t33422 - 0.575*t24732*t33449 - 0.295*(-1.*t22285*t33422 - 1.*t24732*t33449) - 0.0641*t33513)*var2[11];
  p_output1[2]=var2[2] + (0.1575*t26292*t33007 - 0.325*t26437*t33379 - 0.575*t24732*t33422 - 0.575*t23113*t33449 - 0.0641*(t33440 + t24732*t33449) - 0.295*t33513 + 0.325*t33028*t5346 + 0.1575*t303*t32853*t73 + 0.2255*(t30*t33007 - 1.*t303*t32853*t73))*var2[3] + (0.1575*t303*t31*t32994 - 0.575*t24732*t33615 - 0.575*t23113*t33624 - 0.295*(-1.*t24732*t33615 + t22285*t33624) - 0.0641*(t22285*t33615 + t24732*t33624) + 0.325*t33560*t5346 + 0.325*t26300*t26437*t32994*t73 + 0.1575*t26292*t32994*t381*t73 + 0.2255*(-1.*t303*t31*t32994 + t30*t32994*t381*t73))*var2[4] + (0.1575*t26292*t33077 + 0.2255*t30*t33077 - 0.325*t26437*t33645 - 0.575*t23113*t33725 - 0.575*t24732*t33734 - 0.0641*(t24732*t33725 + t22285*t33734) - 0.295*(t22285*t33725 - 1.*t24732*t33734) - 0.325*t303*t33077*t5346)*var2[5] + (0.1575*t303*t33645 - 0.575*t24697*t24732*t33680 + 0.2255*t33692 + 0.325*t33680*t5346 - 0.575*t23113*t33680*t5346 - 0.295*(-1.*t24697*t24732*t33680 + t22285*t33680*t5346) - 0.0641*(t22285*t24697*t33680 + t24732*t33680*t5346) - 0.1575*t30*t32994*t73)*var2[9] + (0.325*t24697*t33692 - 0.575*t23113*t33929 - 0.575*t24732*t33944 - 0.0641*(t24732*t33929 + t22285*t33944) - 0.295*(t22285*t33929 - 1.*t24732*t33944) - 0.325*t33924*t5346)*var2[10] + (-0.575*t22285*t33929 - 0.575*t24732*t34023 - 0.0641*(-1.*t24732*t33929 + t22285*t34023) - 0.295*(-1.*t22285*t33929 - 1.*t24732*t34023))*var2[11];
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

#include "initial_swing_velocity_RlFoot_ParallelStance.hh"

namespace ParallelStance
{

void initial_swing_velocity_RlFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
