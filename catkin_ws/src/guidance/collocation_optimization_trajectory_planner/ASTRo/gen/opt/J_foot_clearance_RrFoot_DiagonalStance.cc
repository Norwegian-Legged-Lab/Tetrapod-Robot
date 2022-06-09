/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:53:21 GMT+02:00
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
  double t2967;
  double t3052;
  double t3059;
  double t3090;
  double t3103;
  double t3110;
  double t3212;
  double t3134;
  double t3162;
  double t3214;
  double t3196;
  double t3245;
  double t3267;
  double t3289;
  double t3292;
  double t3301;
  double t2688;
  double t2942;
  double t3326;
  double t3344;
  double t3363;
  double t3369;
  double t3384;
  double t3404;
  double t3412;
  double t3420;
  double t3460;
  double t3461;
  double t3464;
  double t3468;
  double t3116;
  double t3124;
  double t3280;
  double t3285;
  double t3336;
  double t3342;
  double t3388;
  double t3396;
  double t3590;
  double t3592;
  double t3595;
  double t3603;
  double t3608;
  double t3618;
  double t3639;
  double t3641;
  double t3644;
  double t3690;
  double t3692;
  double t3697;
  double t3726;
  double t3743;
  double t3809;
  double t3826;
  double t3840;
  double t3844;
  double t4144;
  double t4200;
  double t4232;
  double t4322;
  double t4332;
  double t3911;
  double t4583;
  double t4589;
  double t4595;
  double t4615;
  double t4624;
  double t4632;
  double t4638;
  double t4656;
  double t4686;
  double t4894;
  double t4920;
  double t4938;
  t2967 = Sin(var1[3]);
  t3052 = Cos(var1[15]);
  t3059 = -1.*t3052;
  t3090 = 1. + t3059;
  t3103 = -0.15121*t3090;
  t3110 = Sin(var1[15]);
  t3212 = Cos(var1[3]);
  t3134 = Cos(var1[5]);
  t3162 = Sin(var1[4]);
  t3214 = Sin(var1[5]);
  t3196 = t3134*t2967*t3162;
  t3245 = t3212*t3214;
  t3267 = t3196 + t3245;
  t3289 = t3212*t3134;
  t3292 = -1.*t2967*t3162*t3214;
  t3301 = t3289 + t3292;
  t2688 = Cos(var1[4]);
  t2942 = Sin(var1[16]);
  t3326 = Cos(var1[16]);
  t3344 = t3052*t3267;
  t3363 = t3110*t3301;
  t3369 = t3344 + t3363;
  t3384 = Cos(var1[17]);
  t3404 = -1.*t2688*t2942*t2967;
  t3412 = t3326*t3369;
  t3420 = t3404 + t3412;
  t3460 = Sin(var1[17]);
  t3461 = -1.*t3326*t2688*t2967;
  t3464 = -1.*t2942*t3369;
  t3468 = t3461 + t3464;
  t3116 = -0.15121*t3110;
  t3124 = t3103 + t3116;
  t3280 = 0.15121*t3110;
  t3285 = t3103 + t3280;
  t3336 = -1.*t3326;
  t3342 = 1. + t3336;
  t3388 = -1.*t3384;
  t3396 = 1. + t3388;
  t3590 = -1.*t3052*t3212*t2688*t3134;
  t3592 = t3212*t2688*t3110*t3214;
  t3595 = t3590 + t3592;
  t3603 = -1.*t3212*t2942*t3162;
  t3608 = t3326*t3595;
  t3618 = t3603 + t3608;
  t3639 = -1.*t3326*t3212*t3162;
  t3641 = -1.*t2942*t3595;
  t3644 = t3639 + t3641;
  t3690 = t3212*t3134*t3162;
  t3692 = -1.*t2967*t3214;
  t3697 = t3690 + t3692;
  t3726 = t3134*t2967;
  t3743 = t3212*t3162*t3214;
  t3809 = t3726 + t3743;
  t3826 = t3110*t3697;
  t3840 = t3052*t3809;
  t3844 = t3826 + t3840;
  t4144 = -1.*t3212*t3134*t3162;
  t4200 = t2967*t3214;
  t4232 = t4144 + t4200;
  t4322 = -1.*t3110*t4232;
  t4332 = t4322 + t3840;
  t3911 = -1.*t3110*t3809;
  t4583 = t3052*t4232;
  t4589 = t3110*t3809;
  t4595 = t4583 + t4589;
  t4615 = -1.*t3212*t2688*t2942;
  t4624 = -1.*t3326*t4595;
  t4632 = t4615 + t4624;
  t4638 = t3326*t3212*t2688;
  t4656 = -1.*t2942*t4595;
  t4686 = t4638 + t4656;
  t4894 = t3212*t2688*t2942;
  t4920 = t3326*t4595;
  t4938 = t4894 + t4920;
  p_output1[0]=1.;
  p_output1[1]=-0.28121*t2688*t2942*t2967 + t3124*t3267 + t3285*t3301 - 0.15121*(-1.*t3110*t3267 + t3052*t3301) - 0.28121*t3342*t3369 - 0.50321*t3396*t3420 - 0.50321*t3460*t3468 - 0.19821*(t3384*t3420 - 1.*t3460*t3468);
  p_output1[2]=-1.*t2688*t3124*t3134*t3212 - 0.28121*t2942*t3162*t3212 - 0.15121*(t2688*t3110*t3134*t3212 + t2688*t3052*t3212*t3214) + t2688*t3212*t3214*t3285 - 0.28121*t3342*t3595 - 0.50321*t3396*t3618 - 0.50321*t3460*t3644 - 0.19821*(t3384*t3618 - 1.*t3460*t3644);
  p_output1[3]=t3285*t3697 + t3124*t3809 - 0.28121*t3342*t3844 - 0.50321*t3326*t3396*t3844 + 0.50321*t2942*t3460*t3844 - 0.19821*(t3326*t3384*t3844 + t2942*t3460*t3844) - 0.15121*(t3052*t3697 + t3911);
  p_output1[4]=(0.15121*t3052 + t3116)*t3809 + (-0.15121*t3052 + t3116)*t4232 - 0.15121*(t3911 - 1.*t3052*t4232) - 0.28121*t3342*t4332 - 0.50321*t3326*t3396*t4332 + 0.50321*t2942*t3460*t4332 - 0.19821*(t3326*t3384*t4332 + t2942*t3460*t4332);
  p_output1[5]=0.28121*t2688*t3212*t3326 - 0.28121*t2942*t4595 - 0.50321*t3460*t4632 - 0.50321*t3396*t4686 - 0.19821*(-1.*t3460*t4632 + t3384*t4686);
  p_output1[6]=-0.50321*t3384*t4686 - 0.50321*t3460*t4938 - 0.19821*(-1.*t3384*t4686 - 1.*t3460*t4938);
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

#include "J_foot_clearance_RrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void J_foot_clearance_RrFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
