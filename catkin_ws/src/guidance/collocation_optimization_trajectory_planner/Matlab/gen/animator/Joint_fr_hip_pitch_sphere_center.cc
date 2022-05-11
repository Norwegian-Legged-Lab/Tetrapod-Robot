/*
 * Automatically Generated from Mathematica.
 * Fri 4 Feb 2022 15:51:55 GMT+01:00
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
  double t357;
  double t113;
  double t203;
  double t219;
  double t223;
  double t251;
  double t263;
  double t572;
  double t583;
  double t665;
  double t788;
  double t166;
  double t2906;
  double t2503;
  double t3579;
  double t3990;
  double t4004;
  double t4344;
  double t4467;
  double t4502;
  double t334;
  double t590;
  double t737;
  double t1035;
  double t1082;
  double t249;
  double t320;
  double t5158;
  double t2600;
  double t2718;
  double t5232;
  double t2963;
  double t3432;
  double t3447;
  double t3452;
  double t3557;
  double t5210;
  double t5235;
  double t5253;
  double t5278;
  double t5381;
  double t5390;
  double t4190;
  double t4253;
  double t4342;
  double t5411;
  double t5470;
  double t5491;
  double t4562;
  double t4576;
  double t5531;
  double t5540;
  double t5541;
  double t4967;
  double t4998;
  double t5822;
  double t5858;
  double t5965;
  double t6043;
  double t6046;
  double t6194;
  double t6279;
  double t6306;
  double t6388;
  double t6424;
  double t6429;
  double t6433;
  t357 = Cos(var1[10]);
  t113 = Cos(var1[4]);
  t203 = Cos(var1[9]);
  t219 = -1.*t203;
  t223 = 1. + t219;
  t251 = Sin(var1[9]);
  t263 = -0.15121*t251;
  t572 = -1.*t357;
  t583 = 1. + t572;
  t665 = -1. + t357;
  t788 = Sin(var1[10]);
  t166 = Cos(var1[5]);
  t2906 = Sin(var1[5]);
  t2503 = Sin(var1[4]);
  t3579 = -1.*t113*t166*t251;
  t3990 = -1.*t203*t113*t2906;
  t4004 = t3579 + t3990;
  t4344 = t203*t113*t166;
  t4467 = -1.*t113*t251*t2906;
  t4502 = t4344 + t4467;
  t334 = -4.9936e-13*var1[10];
  t590 = -0.038749*t583;
  t737 = 6.19984e-13*t665;
  t1035 = -0.281210000004*t788;
  t1082 = t334 + t590 + t737 + t1035;
  t249 = 0.15121*t223;
  t320 = t249 + t263;
  t5158 = Sin(var1[3]);
  t2600 = -0.15121*t223;
  t2718 = t2600 + t263;
  t5232 = Cos(var1[3]);
  t2963 = -1.2484e-7*var1[10];
  t3432 = 2.479936e-18*t583;
  t3447 = -1.54996e-7*t665;
  t3452 = 1.124840000016e-6*t788;
  t3557 = t2963 + t3432 + t3447 + t3452;
  t5210 = t166*t5158*t2503;
  t5235 = t5232*t2906;
  t5253 = t5210 + t5235;
  t5278 = t5232*t166;
  t5381 = -1.*t5158*t2503*t2906;
  t5390 = t5278 + t5381;
  t4190 = 0.281210000008499*t583;
  t4253 = -0.03874900000062*t788;
  t4342 = t4190 + t4253;
  t5411 = -1.*t251*t5253;
  t5470 = t203*t5390;
  t5491 = t5411 + t5470;
  t4562 = -1.000000000016*t583;
  t4576 = 1. + t4562;
  t5531 = t203*t5253;
  t5540 = t251*t5390;
  t5541 = t5531 + t5540;
  t4967 = 1.6e-11*t665;
  t4998 = 1. + t4967;
  t5822 = -1.*t5232*t166*t2503;
  t5858 = t5158*t2906;
  t5965 = t5822 + t5858;
  t6043 = t166*t5158;
  t6046 = t5232*t2503*t2906;
  t6194 = t6043 + t6046;
  t6279 = -1.*t251*t5965;
  t6306 = t203*t6194;
  t6388 = t6279 + t6306;
  t6424 = t203*t5965;
  t6429 = t251*t6194;
  t6433 = t6424 + t6429;
  p_output1[0]=t1082*t2503 - 1.*t113*t2718*t2906 + t113*t166*t320 + t3557*t4004 + t4342*t4502 + 0.28121*(t4502*t4576 + t2503*t788 - 4.e-6*t4004*t788) - 0.03875*(t2503*t357 + 4.e-6*t4004*t583 - 1.*t4502*t788) - 0.22671*(t4004*t4998 + 4.e-6*t2503*t583 + 4.e-6*t4502*t788) + var1[0];
  p_output1[1]=-1.*t1082*t113*t5158 + t320*t5253 + t2718*t5390 + t3557*t5491 + t4342*t5541 + 0.28121*(t4576*t5541 - 1.*t113*t5158*t788 - 4.e-6*t5491*t788) - 0.03875*(-1.*t113*t357*t5158 + 4.e-6*t5491*t583 - 1.*t5541*t788) - 0.22671*(t4998*t5491 - 4.e-6*t113*t5158*t583 + 4.e-6*t5541*t788) + var1[1];
  p_output1[2]=t1082*t113*t5232 + t320*t5965 + t2718*t6194 + t3557*t6388 + t4342*t6433 + 0.28121*(t4576*t6433 + t113*t5232*t788 - 4.e-6*t6388*t788) - 0.03875*(t113*t357*t5232 + 4.e-6*t583*t6388 - 1.*t6433*t788) - 0.22671*(4.e-6*t113*t5232*t583 + t4998*t6388 + 4.e-6*t6433*t788) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Joint_fr_hip_pitch_sphere_center.hh"

namespace SymFunction
{

void Joint_fr_hip_pitch_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
