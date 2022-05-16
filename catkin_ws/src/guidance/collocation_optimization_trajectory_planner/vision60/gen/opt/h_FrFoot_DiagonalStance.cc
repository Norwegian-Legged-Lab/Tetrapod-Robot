/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:31:46 GMT+02:00
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
  double t121;
  double t138;
  double t148;
  double t162;
  double t196;
  double t131;
  double t236;
  double t88;
  double t239;
  double t240;
  double t246;
  double t250;
  double t253;
  double t261;
  double t262;
  double t266;
  double t285;
  double t293;
  double t294;
  double t107;
  double t117;
  double t2858;
  double t163;
  double t191;
  double t3074;
  double t3223;
  double t3289;
  double t3319;
  double t2893;
  double t3099;
  double t3100;
  double t3472;
  double t3476;
  double t3486;
  double t269;
  double t277;
  double t3498;
  double t3500;
  double t3504;
  double t3533;
  double t3551;
  double t3555;
  double t3685;
  double t3705;
  double t3706;
  double t3674;
  double t3675;
  double t3678;
  double t3725;
  double t3726;
  double t3727;
  double t3743;
  double t3752;
  double t3757;
  double t3763;
  double t3779;
  double t3780;
  t121 = Cos(var1[4]);
  t138 = Sin(var1[12]);
  t148 = Sin(var1[4]);
  t162 = Cos(var1[12]);
  t196 = Sin(var1[5]);
  t131 = Cos(var1[5]);
  t236 = Sin(var1[13]);
  t88 = Cos(var1[13]);
  t239 = t162*t148;
  t240 = t121*t138*t196;
  t246 = t239 + t240;
  t250 = Sin(var1[14]);
  t253 = -1.*t121*t131*t236;
  t261 = t88*t246;
  t262 = t253 + t261;
  t266 = Cos(var1[14]);
  t285 = t88*t121*t131;
  t293 = t236*t246;
  t294 = t285 + t293;
  t107 = -1.*t88;
  t117 = 1. + t107;
  t2858 = Sin(var1[3]);
  t163 = -1.*t162;
  t191 = 1. + t163;
  t3074 = Cos(var1[3]);
  t3223 = t3074*t131;
  t3289 = -1.*t2858*t148*t196;
  t3319 = t3223 + t3289;
  t2893 = t131*t2858*t148;
  t3099 = t3074*t196;
  t3100 = t2893 + t3099;
  t3472 = -1.*t162*t121*t2858;
  t3476 = -1.*t138*t3319;
  t3486 = t3472 + t3476;
  t269 = -1.*t266;
  t277 = 1. + t269;
  t3498 = -1.*t236*t3100;
  t3500 = t88*t3486;
  t3504 = t3498 + t3500;
  t3533 = t88*t3100;
  t3551 = t236*t3486;
  t3555 = t3533 + t3551;
  t3685 = t131*t2858;
  t3705 = t3074*t148*t196;
  t3706 = t3685 + t3705;
  t3674 = -1.*t3074*t131*t148;
  t3675 = t2858*t196;
  t3678 = t3674 + t3675;
  t3725 = t162*t3074*t121;
  t3726 = -1.*t138*t3706;
  t3727 = t3725 + t3726;
  t3743 = -1.*t236*t3678;
  t3752 = t88*t3727;
  t3757 = t3743 + t3752;
  t3763 = t88*t3678;
  t3779 = t236*t3727;
  t3780 = t3763 + t3779;
  p_output1[0]=0.325*t117*t121*t131 + 0.1575*t138*t148 + 0.1575*t121*t191*t196 - 0.2255*(t138*t148 - 1.*t121*t162*t196) - 0.325*t236*t246 + 0.075*t250*t262 + 0.075*t277*t294 - 0.0641*(t262*t266 + t250*t294) + 0.355*(-1.*t250*t262 + t266*t294) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.1575*t121*t138*t2858 + 0.325*t117*t3100 - 0.1575*t191*t3319 - 0.2255*(-1.*t121*t138*t2858 + t162*t3319) - 0.325*t236*t3486 + 0.075*t250*t3504 + 0.075*t277*t3555 - 0.0641*(t266*t3504 + t250*t3555) + 0.355*(-1.*t250*t3504 + t266*t3555) + var1[1] - 1.*var2[1];
  p_output1[2]=0.1575*t121*t138*t3074 + 0.325*t117*t3678 - 0.1575*t191*t3706 - 0.2255*(t121*t138*t3074 + t162*t3706) - 0.325*t236*t3727 + 0.075*t250*t3757 + 0.075*t277*t3780 - 0.0641*(t266*t3757 + t250*t3780) + 0.355*(-1.*t250*t3757 + t266*t3780) + var1[2] - 1.*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "h_FrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void h_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
