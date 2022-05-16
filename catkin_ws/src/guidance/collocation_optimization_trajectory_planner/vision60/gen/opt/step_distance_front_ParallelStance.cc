/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:33:59 GMT+02:00
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
  double t12315;
  double t12317;
  double t12540;
  double t12466;
  double t12487;
  double t12516;
  double t12730;
  double t10002;
  double t12824;
  double t12858;
  double t12959;
  double t13002;
  double t13012;
  double t13016;
  double t13032;
  double t13063;
  double t13312;
  double t13315;
  double t13333;
  double t12641;
  double t13450;
  double t12319;
  double t13550;
  double t13556;
  double t13596;
  double t13727;
  double t13734;
  double t13739;
  double t13742;
  double t13743;
  double t13763;
  double t13765;
  double t14132;
  double t14500;
  double t11738;
  double t12166;
  double t24212;
  double t12334;
  double t12360;
  double t24277;
  double t24314;
  double t24318;
  double t24337;
  double t12531;
  double t12539;
  double t12642;
  double t12643;
  double t27154;
  double t27572;
  double t27573;
  double t30419;
  double t30623;
  double t30649;
  double t13083;
  double t13128;
  double t30675;
  double t30676;
  double t30750;
  double t31003;
  double t31136;
  double t31231;
  double t13735;
  double t13736;
  double t34149;
  double t34303;
  double t34814;
  double t35231;
  double t35296;
  double t35885;
  double t47111;
  double t53622;
  double t53632;
  t12315 = Cos(var1[4]);
  t12317 = Cos(var1[5]);
  t12540 = Sin(var1[5]);
  t12466 = Sin(var1[12]);
  t12487 = Sin(var1[4]);
  t12516 = Cos(var1[12]);
  t12730 = Sin(var1[13]);
  t10002 = Cos(var1[13]);
  t12824 = t12516*t12487;
  t12858 = t12315*t12466*t12540;
  t12959 = t12824 + t12858;
  t13002 = Sin(var1[14]);
  t13012 = -1.*t12315*t12317*t12730;
  t13016 = t10002*t12959;
  t13032 = t13012 + t13016;
  t13063 = Cos(var1[14]);
  t13312 = t10002*t12315*t12317;
  t13315 = t12730*t12959;
  t13333 = t13312 + t13315;
  t12641 = Cos(var1[6]);
  t13450 = Sin(var1[6]);
  t12319 = Cos(var1[7]);
  t13550 = t12641*t12487;
  t13556 = t12315*t12540*t13450;
  t13596 = t13550 + t13556;
  t13727 = Sin(var1[7]);
  t13734 = Cos(var1[8]);
  t13739 = t12315*t12317*t12319;
  t13742 = t13596*t13727;
  t13743 = t13739 + t13742;
  t13763 = t12319*t13596;
  t13765 = -1.*t12315*t12317*t13727;
  t14132 = t13763 + t13765;
  t14500 = Sin(var1[8]);
  t11738 = -1.*t10002;
  t12166 = 1. + t11738;
  t24212 = Sin(var1[3]);
  t12334 = -1.*t12319;
  t12360 = 1. + t12334;
  t24277 = t12317*t24212*t12487;
  t24314 = Cos(var1[3]);
  t24318 = t24314*t12540;
  t24337 = t24277 + t24318;
  t12531 = -1.*t12516;
  t12539 = 1. + t12531;
  t12642 = -1.*t12641;
  t12643 = 1. + t12642;
  t27154 = t24314*t12317;
  t27572 = -1.*t24212*t12487*t12540;
  t27573 = t27154 + t27572;
  t30419 = -1.*t12516*t12315*t24212;
  t30623 = -1.*t12466*t27573;
  t30649 = t30419 + t30623;
  t13083 = -1.*t13063;
  t13128 = 1. + t13083;
  t30675 = -1.*t12730*t24337;
  t30676 = t10002*t30649;
  t30750 = t30675 + t30676;
  t31003 = t10002*t24337;
  t31136 = t12730*t30649;
  t31231 = t31003 + t31136;
  t13735 = -1.*t13734;
  t13736 = 1. + t13735;
  t34149 = -1.*t12315*t12641*t24212;
  t34303 = -1.*t27573*t13450;
  t34814 = t34149 + t34303;
  t35231 = t12319*t24337;
  t35296 = t34814*t13727;
  t35885 = t35231 + t35296;
  t47111 = t12319*t34814;
  t53622 = -1.*t24337*t13727;
  t53632 = t47111 + t53622;
  p_output1[0]=-0.325*t12166*t12315*t12317 + 0.325*t12315*t12317*t12360 - 0.1575*t12466*t12487 - 0.1575*t12315*t12539*t12540 + 0.2255*(t12466*t12487 - 1.*t12315*t12516*t12540) - 0.1575*t12315*t12540*t12643 + 0.325*t12730*t12959 - 0.075*t13002*t13032 - 0.075*t13128*t13333 + 0.0641*(t13032*t13063 + t13002*t13333) - 0.355*(-1.*t13002*t13032 + t13063*t13333) - 0.1575*t12487*t13450 + 0.2255*(-1.*t12315*t12540*t12641 + t12487*t13450) - 0.325*t13596*t13727 + 0.075*t13736*t13743 + 0.075*t14132*t14500 - 0.0641*(t13734*t14132 + t13743*t14500) + 0.355*(t13734*t13743 - 1.*t14132*t14500);
  p_output1[1]=0.1575*t12315*t12466*t24212 + 0.1575*t12315*t13450*t24212 - 0.325*t12166*t24337 + 0.325*t12360*t24337 + 0.1575*t12539*t27573 + 0.1575*t12643*t27573 + 0.2255*(-1.*t12315*t12466*t24212 + t12516*t27573) + 0.2255*(-1.*t12315*t13450*t24212 + t12641*t27573) + 0.325*t12730*t30649 - 0.075*t13002*t30750 - 0.075*t13128*t31231 + 0.0641*(t13063*t30750 + t13002*t31231) - 0.355*(-1.*t13002*t30750 + t13063*t31231) - 0.325*t13727*t34814 + 0.075*t13736*t35885 + 0.075*t14500*t53632 - 0.0641*(t14500*t35885 + t13734*t53632) + 0.355*(t13734*t35885 - 1.*t14500*t53632);
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

#include "step_distance_front_ParallelStance.hh"

namespace ParallelStance
{

void step_distance_front_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
