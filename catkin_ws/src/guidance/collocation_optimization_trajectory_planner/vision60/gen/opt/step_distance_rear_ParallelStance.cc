/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:34:02 GMT+02:00
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
  double t3474;
  double t3799;
  double t7357;
  double t7561;
  double t7336;
  double t7525;
  double t7414;
  double t7595;
  double t8412;
  double t566;
  double t8467;
  double t8597;
  double t8638;
  double t8679;
  double t6857;
  double t8681;
  double t8688;
  double t8703;
  double t8990;
  double t9069;
  double t9094;
  double t9172;
  double t9249;
  double t9455;
  double t9478;
  double t9508;
  double t9562;
  double t9593;
  double t9624;
  double t9656;
  double t9932;
  double t10025;
  double t10053;
  double t10074;
  double t10441;
  double t2548;
  double t3466;
  double t7274;
  double t7287;
  double t10449;
  double t10466;
  double t10469;
  double t10495;
  double t7539;
  double t7547;
  double t7601;
  double t8098;
  double t10660;
  double t10694;
  double t10695;
  double t10996;
  double t10998;
  double t11007;
  double t9403;
  double t9414;
  double t11026;
  double t11031;
  double t11038;
  double t9994;
  double t10021;
  double t11063;
  double t11070;
  double t11074;
  double t11090;
  double t11099;
  double t11104;
  double t11127;
  double t11128;
  double t11143;
  double t11158;
  double t11216;
  double t11241;
  t3474 = Cos(var1[4]);
  t3799 = Cos(var1[5]);
  t7357 = Sin(var1[4]);
  t7561 = Sin(var1[5]);
  t7336 = Sin(var1[9]);
  t7525 = Cos(var1[9]);
  t7414 = Sin(var1[15]);
  t7595 = Cos(var1[15]);
  t8412 = Sin(var1[10]);
  t566 = Cos(var1[10]);
  t8467 = t7525*t7357;
  t8597 = t3474*t7336*t7561;
  t8638 = t8467 + t8597;
  t8679 = Sin(var1[16]);
  t6857 = Cos(var1[16]);
  t8681 = t7595*t7357;
  t8688 = t3474*t7414*t7561;
  t8703 = t8681 + t8688;
  t8990 = Sin(var1[11]);
  t9069 = -1.*t3474*t3799*t8412;
  t9094 = t566*t8638;
  t9172 = t9069 + t9094;
  t9249 = Cos(var1[11]);
  t9455 = t566*t3474*t3799;
  t9478 = t8412*t8638;
  t9508 = t9455 + t9478;
  t9562 = Sin(var1[17]);
  t9593 = -1.*t3474*t3799*t8679;
  t9624 = t6857*t8703;
  t9656 = t9593 + t9624;
  t9932 = Cos(var1[17]);
  t10025 = t6857*t3474*t3799;
  t10053 = t8679*t8703;
  t10074 = t10025 + t10053;
  t10441 = Sin(var1[3]);
  t2548 = -1.*t566;
  t3466 = 1. + t2548;
  t7274 = -1.*t6857;
  t7287 = 1. + t7274;
  t10449 = t3799*t10441*t7357;
  t10466 = Cos(var1[3]);
  t10469 = t10466*t7561;
  t10495 = t10449 + t10469;
  t7539 = -1.*t7525;
  t7547 = 1. + t7539;
  t7601 = -1.*t7595;
  t8098 = 1. + t7601;
  t10660 = t10466*t3799;
  t10694 = -1.*t10441*t7357*t7561;
  t10695 = t10660 + t10694;
  t10996 = -1.*t7525*t3474*t10441;
  t10998 = -1.*t7336*t10695;
  t11007 = t10996 + t10998;
  t9403 = -1.*t9249;
  t9414 = 1. + t9403;
  t11026 = -1.*t7595*t3474*t10441;
  t11031 = -1.*t7414*t10695;
  t11038 = t11026 + t11031;
  t9994 = -1.*t9932;
  t10021 = 1. + t9994;
  t11063 = -1.*t8412*t10495;
  t11070 = t566*t11007;
  t11074 = t11063 + t11070;
  t11090 = t566*t10495;
  t11099 = t8412*t11007;
  t11104 = t11090 + t11099;
  t11127 = -1.*t8679*t10495;
  t11128 = t6857*t11038;
  t11143 = t11127 + t11128;
  t11158 = t6857*t10495;
  t11216 = t8679*t11038;
  t11241 = t11158 + t11216;
  p_output1[0]=0.575*t10021*t10074 - 0.325*t3466*t3474*t3799 + 0.325*t3474*t3799*t7287 - 0.1575*t7336*t7357 - 0.1575*t7357*t7414 - 0.1575*t3474*t7547*t7561 + 0.2255*(t7336*t7357 - 1.*t3474*t7525*t7561) + 0.2255*(t7357*t7414 - 1.*t3474*t7561*t7595) - 0.1575*t3474*t7561*t8098 + 0.325*t8412*t8638 - 0.325*t8679*t8703 - 0.575*t8990*t9172 - 0.575*t9414*t9508 - 0.0641*(t9172*t9249 + t8990*t9508) - 0.295*(-1.*t8990*t9172 + t9249*t9508) + 0.575*t9562*t9656 + 0.295*(-1.*t9562*t9656 + t10074*t9932) + 0.0641*(t10074*t9562 + t9656*t9932);
  p_output1[1]=0.575*t10021*t11241 - 0.325*t10495*t3466 + 0.325*t10495*t7287 + 0.1575*t10441*t3474*t7336 + 0.1575*t10441*t3474*t7414 + 0.2255*(-1.*t10441*t3474*t7336 + t10695*t7525) + 0.1575*t10695*t7547 + 0.2255*(-1.*t10441*t3474*t7414 + t10695*t7595) + 0.1575*t10695*t8098 + 0.325*t11007*t8412 - 0.325*t11038*t8679 - 0.575*t11074*t8990 - 0.0641*(t11104*t8990 + t11074*t9249) - 0.295*(-1.*t11074*t8990 + t11104*t9249) - 0.575*t11104*t9414 + 0.575*t11143*t9562 + 0.0641*(t11241*t9562 + t11143*t9932) + 0.295*(-1.*t11143*t9562 + t11241*t9932);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 2, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "step_distance_rear_ParallelStance.hh"

namespace ParallelStance
{

void step_distance_rear_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
