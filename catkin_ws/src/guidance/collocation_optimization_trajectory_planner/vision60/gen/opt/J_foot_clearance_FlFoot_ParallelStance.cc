/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:48:21 GMT+02:00
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
  double t24319;
  double t24164;
  double t24166;
  double t24241;
  double t24391;
  double t24846;
  double t25039;
  double t25042;
  double t25048;
  double t25063;
  double t25065;
  double t507;
  double t24310;
  double t24400;
  double t24431;
  double t25089;
  double t25093;
  double t25104;
  double t25108;
  double t25115;
  double t25130;
  double t25133;
  double t25135;
  double t25142;
  double t25145;
  double t25150;
  double t25153;
  double t3116;
  double t24158;
  double t24990;
  double t25027;
  double t25120;
  double t25125;
  double t25355;
  double t25373;
  double t25374;
  double t25386;
  double t25390;
  double t25395;
  double t25400;
  double t25401;
  double t25406;
  double t25713;
  double t25715;
  double t25718;
  double t25724;
  double t25727;
  double t25743;
  double t25759;
  double t25764;
  double t25765;
  double t25767;
  double t25769;
  double t25772;
  double t25897;
  double t25898;
  double t25903;
  double t25886;
  double t25894;
  double t25895;
  double t26000;
  double t26005;
  double t26007;
  double t26032;
  double t26043;
  double t26044;
  double t26009;
  double t26014;
  double t26018;
  double t26094;
  double t26096;
  double t26097;
  t24319 = Cos(var1[3]);
  t24164 = Cos(var1[5]);
  t24166 = Sin(var1[3]);
  t24241 = Sin(var1[4]);
  t24391 = Sin(var1[5]);
  t24846 = Cos(var1[6]);
  t25039 = t24319*t24164;
  t25042 = -1.*t24166*t24241*t24391;
  t25048 = t25039 + t25042;
  t25063 = Cos(var1[4]);
  t25065 = Sin(var1[6]);
  t507 = Cos(var1[7]);
  t24310 = t24164*t24166*t24241;
  t24400 = t24319*t24391;
  t24431 = t24310 + t24400;
  t25089 = -1.*t25063*t24846*t24166;
  t25093 = -1.*t25048*t25065;
  t25104 = t25089 + t25093;
  t25108 = Sin(var1[7]);
  t25115 = Cos(var1[8]);
  t25130 = t507*t24431;
  t25133 = t25104*t25108;
  t25135 = t25130 + t25133;
  t25142 = t507*t25104;
  t25145 = -1.*t24431*t25108;
  t25150 = t25142 + t25145;
  t25153 = Sin(var1[8]);
  t3116 = -1.*t507;
  t24158 = 1. + t3116;
  t24990 = -1.*t24846;
  t25027 = 1. + t24990;
  t25120 = -1.*t25115;
  t25125 = 1. + t25120;
  t25355 = -1.*t24319*t24846*t24241;
  t25373 = -1.*t24319*t25063*t24391*t25065;
  t25374 = t25355 + t25373;
  t25386 = -1.*t24319*t25063*t24164*t507;
  t25390 = t25374*t25108;
  t25395 = t25386 + t25390;
  t25400 = t507*t25374;
  t25401 = t24319*t25063*t24164*t25108;
  t25406 = t25400 + t25401;
  t25713 = t24319*t24164*t24241;
  t25715 = -1.*t24166*t24391;
  t25718 = t25713 + t25715;
  t25724 = t24164*t24166;
  t25727 = t24319*t24241*t24391;
  t25743 = t25724 + t25727;
  t25759 = t507*t25743;
  t25764 = -1.*t25718*t25065*t25108;
  t25765 = t25759 + t25764;
  t25767 = -1.*t507*t25718*t25065;
  t25769 = -1.*t25743*t25108;
  t25772 = t25767 + t25769;
  t25897 = -1.*t24846*t25743;
  t25898 = -1.*t24319*t25063*t25065;
  t25903 = t25897 + t25898;
  t25886 = t24319*t25063*t24846;
  t25894 = -1.*t25743*t25065;
  t25895 = t25886 + t25894;
  t26000 = -1.*t24319*t24164*t24241;
  t26005 = t24166*t24391;
  t26007 = t26000 + t26005;
  t26032 = -1.*t507*t26007;
  t26043 = -1.*t25895*t25108;
  t26044 = t26032 + t26043;
  t26009 = t507*t25895;
  t26014 = -1.*t26007*t25108;
  t26018 = t26009 + t26014;
  t26094 = t507*t26007;
  t26096 = t25895*t25108;
  t26097 = t26094 + t26096;
  p_output1[0]=1.;
  p_output1[1]=0.325*t24158*t24431 + 0.1575*t25027*t25048 + 0.1575*t24166*t25063*t25065 + 0.2255*(t24846*t25048 - 1.*t24166*t25063*t25065) - 0.325*t25104*t25108 + 0.075*t25125*t25135 + 0.075*t25150*t25153 - 0.0641*(t25115*t25150 + t25135*t25153) + 0.355*(t25115*t25135 - 1.*t25150*t25153);
  p_output1[2]=-0.325*t24158*t24164*t24319*t25063 + 0.1575*t24319*t24391*t25027*t25063 + 0.1575*t24241*t24319*t25065 + 0.2255*(t24319*t24391*t24846*t25063 - 1.*t24241*t24319*t25065) - 0.325*t25108*t25374 + 0.075*t25125*t25395 + 0.075*t25153*t25406 - 0.0641*(t25153*t25395 + t25115*t25406) + 0.355*(t25115*t25395 - 1.*t25153*t25406);
  p_output1[3]=0.2255*t24846*t25718 + 0.1575*t25027*t25718 + 0.325*t25065*t25108*t25718 + 0.325*t24158*t25743 + 0.075*t25125*t25765 + 0.075*t25153*t25772 - 0.0641*(t25153*t25765 + t25115*t25772) + 0.355*(t25115*t25765 - 1.*t25153*t25772);
  p_output1[4]=-0.1575*t24319*t24846*t25063 + 0.1575*t25065*t25743 + 0.2255*t25895 - 0.325*t25108*t25903 + 0.075*t25108*t25125*t25903 + 0.075*t25153*t25903*t507 - 0.0641*(t25108*t25153*t25903 + t25115*t25903*t507) + 0.355*(t25108*t25115*t25903 - 1.*t25153*t25903*t507);
  p_output1[5]=0.325*t25108*t26007 + 0.075*t25125*t26018 + 0.075*t25153*t26044 - 0.0641*(t25153*t26018 + t25115*t26044) + 0.355*(t25115*t26018 - 1.*t25153*t26044) - 0.325*t25895*t507;
  p_output1[6]=0.075*t25115*t26018 + 0.075*t25153*t26097 - 0.0641*(-1.*t25153*t26018 + t25115*t26097) + 0.355*(-1.*t25115*t26018 - 1.*t25153*t26097);
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
