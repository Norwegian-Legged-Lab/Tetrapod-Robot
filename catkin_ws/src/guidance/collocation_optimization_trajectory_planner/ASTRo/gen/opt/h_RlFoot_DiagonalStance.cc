/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 16:59:11 GMT+02:00
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
  double t88;
  double t292;
  double t710;
  double t712;
  double t734;
  double t866;
  double t150;
  double t1563;
  double t1308;
  double t1397;
  double t2018;
  double t2237;
  double t2245;
  double t2285;
  double t2292;
  double t2401;
  double t2414;
  double t2419;
  double t2476;
  double t2556;
  double t2557;
  double t2562;
  double t718;
  double t1049;
  double t2770;
  double t1553;
  double t1554;
  double t2842;
  double t2819;
  double t2909;
  double t2993;
  double t3063;
  double t3120;
  double t3131;
  double t2076;
  double t2229;
  double t2328;
  double t2387;
  double t3412;
  double t3418;
  double t3602;
  double t3636;
  double t3664;
  double t3722;
  double t3729;
  double t3738;
  double t3753;
  double t3915;
  double t3921;
  double t3923;
  double t3966;
  double t3984;
  double t4034;
  double t4106;
  double t4273;
  double t4274;
  double t4338;
  double t4350;
  double t4450;
  double t4504;
  double t4508;
  double t4577;
  t88 = Cos(var1[4]);
  t292 = Cos(var1[9]);
  t710 = -1.*t292;
  t712 = 1. + t710;
  t734 = Sin(var1[9]);
  t866 = 0.15121*t734;
  t150 = Cos(var1[5]);
  t1563 = Sin(var1[5]);
  t1308 = Sin(var1[10]);
  t1397 = Sin(var1[4]);
  t2018 = Cos(var1[10]);
  t2237 = t292*t88*t150;
  t2245 = -1.*t88*t734*t1563;
  t2285 = t2237 + t2245;
  t2292 = Cos(var1[11]);
  t2401 = t1308*t1397;
  t2414 = t2018*t2285;
  t2419 = t2401 + t2414;
  t2476 = Sin(var1[11]);
  t2556 = t2018*t1397;
  t2557 = -1.*t1308*t2285;
  t2562 = t2556 + t2557;
  t718 = -0.15121*t712;
  t1049 = t718 + t866;
  t2770 = Sin(var1[3]);
  t1553 = 0.15121*t712;
  t1554 = t1553 + t866;
  t2842 = Cos(var1[3]);
  t2819 = t150*t2770*t1397;
  t2909 = t2842*t1563;
  t2993 = t2819 + t2909;
  t3063 = t2842*t150;
  t3120 = -1.*t2770*t1397*t1563;
  t3131 = t3063 + t3120;
  t2076 = -1.*t2018;
  t2229 = 1. + t2076;
  t2328 = -1.*t2292;
  t2387 = 1. + t2328;
  t3412 = t292*t2993;
  t3418 = t734*t3131;
  t3602 = t3412 + t3418;
  t3636 = -1.*t88*t1308*t2770;
  t3664 = t2018*t3602;
  t3722 = t3636 + t3664;
  t3729 = -1.*t2018*t88*t2770;
  t3738 = -1.*t1308*t3602;
  t3753 = t3729 + t3738;
  t3915 = -1.*t2842*t150*t1397;
  t3921 = t2770*t1563;
  t3923 = t3915 + t3921;
  t3966 = t150*t2770;
  t3984 = t2842*t1397*t1563;
  t4034 = t3966 + t3984;
  t4106 = t292*t3923;
  t4273 = t734*t4034;
  t4274 = t4106 + t4273;
  t4338 = t2842*t88*t1308;
  t4350 = t2018*t4274;
  t4450 = t4338 + t4350;
  t4504 = t2018*t2842*t88;
  t4508 = -1.*t1308*t4274;
  t4577 = t4504 + t4508;
  p_output1[0]=0.28121*t1308*t1397 - 0.28121*t2229*t2285 - 0.50321*t2387*t2419 - 0.50321*t2476*t2562 - 0.19821*(t2292*t2419 - 1.*t2476*t2562) + t1049*t150*t88 - 1.*t1554*t1563*t88 + 0.15121*(-1.*t1563*t292*t88 - 1.*t150*t734*t88) + var1[0] - 1.*var2[0];
  p_output1[1]=t1049*t2993 + t1554*t3131 - 0.28121*t2229*t3602 - 0.50321*t2387*t3722 - 0.50321*t2476*t3753 - 0.19821*(t2292*t3722 - 1.*t2476*t3753) + 0.15121*(t292*t3131 - 1.*t2993*t734) - 0.28121*t1308*t2770*t88 + var1[1] - 1.*var2[1];
  p_output1[2]=t1049*t3923 + t1554*t4034 - 0.28121*t2229*t4274 - 0.50321*t2387*t4450 - 0.50321*t2476*t4577 - 0.19821*(t2292*t4450 - 1.*t2476*t4577) + 0.15121*(t292*t4034 - 1.*t3923*t734) + 0.28121*t1308*t2842*t88 + var1[2] - 1.*var2[2];
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

#include "h_RlFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void h_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
