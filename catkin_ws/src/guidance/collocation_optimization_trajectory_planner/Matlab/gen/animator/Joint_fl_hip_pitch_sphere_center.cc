/*
 * Automatically Generated from Mathematica.
 * Fri 4 Feb 2022 15:51:48 GMT+01:00
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
  double t202;
  double t248;
  double t476;
  double t484;
  double t485;
  double t605;
  double t235;
  double t791;
  double t1245;
  double t1257;
  double t1288;
  double t1310;
  double t1766;
  double t1799;
  double t1975;
  double t2609;
  double t937;
  double t1090;
  double t1222;
  double t2938;
  double t645;
  double t647;
  double t3296;
  double t3221;
  double t837;
  double t931;
  double t3241;
  double t3332;
  double t3346;
  double t3355;
  double t3359;
  double t3405;
  double t1242;
  double t1299;
  double t1395;
  double t1500;
  double t2024;
  double t2045;
  double t2258;
  double t2613;
  double t2615;
  double t2620;
  double t2809;
  double t2834;
  double t2861;
  double t3582;
  double t3608;
  double t3618;
  double t3435;
  double t3438;
  double t3477;
  double t3055;
  double t3074;
  double t4081;
  double t4082;
  double t4091;
  double t4149;
  double t4254;
  double t4282;
  double t4436;
  double t4437;
  double t4453;
  double t4349;
  double t4354;
  double t4411;
  t202 = Cos(var1[4]);
  t248 = Cos(var1[6]);
  t476 = -1.*t248;
  t484 = 1. + t476;
  t485 = 0.15121*t484;
  t605 = Sin(var1[6]);
  t235 = Sin(var1[5]);
  t791 = Cos(var1[5]);
  t1245 = Cos(var1[7]);
  t1257 = -1.*t1245;
  t1288 = 1. + t1257;
  t1310 = Sin(var1[7]);
  t1766 = t202*t791*t248;
  t1799 = -1.*t202*t235*t605;
  t1975 = t1766 + t1799;
  t2609 = Sin(var1[4]);
  t937 = -1.*t202*t248*t235;
  t1090 = -1.*t202*t791*t605;
  t1222 = t937 + t1090;
  t2938 = -1. + t1245;
  t645 = -0.15121*t605;
  t647 = t485 + t645;
  t3296 = Sin(var1[3]);
  t3221 = Cos(var1[3]);
  t837 = 0.15121*t605;
  t931 = t485 + t837;
  t3241 = t3221*t791;
  t3332 = -1.*t3296*t2609*t235;
  t3346 = t3241 + t3332;
  t3355 = t791*t3296*t2609;
  t3359 = t3221*t235;
  t3405 = t3355 + t3359;
  t1242 = -1.2484e-7*var1[7];
  t1299 = -1.5499600000248e-7*t1288;
  t1395 = 1.124840000016e-6*t1310;
  t1500 = t1242 + t1299 + t1395;
  t2024 = 0.281210000008499*t1288;
  t2045 = 0.03874900000062*t1310;
  t2258 = t2024 + t2045;
  t2613 = 4.9936e-13*var1[7];
  t2615 = -0.03874900000062*t1288;
  t2620 = 0.281210000004*t1310;
  t2809 = t2613 + t2615 + t2620;
  t2834 = -1.000000000016*t1288;
  t2861 = 1. + t2834;
  t3582 = t248*t3405;
  t3608 = t3346*t605;
  t3618 = t3582 + t3608;
  t3435 = t248*t3346;
  t3438 = -1.*t3405*t605;
  t3477 = t3435 + t3438;
  t3055 = 1.6e-11*t2938;
  t3074 = 1. + t3055;
  t4081 = t791*t3296;
  t4082 = t3221*t2609*t235;
  t4091 = t4081 + t4082;
  t4149 = -1.*t3221*t791*t2609;
  t4254 = t3296*t235;
  t4282 = t4149 + t4254;
  t4436 = t248*t4282;
  t4437 = t4091*t605;
  t4453 = t4436 + t4437;
  t4349 = t248*t4091;
  t4354 = -1.*t4282*t605;
  t4411 = t4349 + t4354;
  p_output1[0]=t1222*t1500 + t1975*t2258 + t2609*t2809 + 0.28121*(-4.e-6*t1222*t1310 - 1.*t1310*t2609 + t1975*t2861) - 0.03875*(t1310*t1975 + t1245*t2609 + 4.e-6*t1222*t2938) + 0.22671*(4.e-6*t1310*t1975 + 4.e-6*t2609*t2938 + t1222*t3074) - 1.*t202*t235*t647 + t202*t791*t931 + var1[0];
  p_output1[1]=-1.*t202*t2809*t3296 + t1500*t3477 + t2258*t3618 + 0.22671*(-4.e-6*t202*t2938*t3296 + t3074*t3477 + 4.e-6*t1310*t3618) - 0.03875*(-1.*t1245*t202*t3296 + 4.e-6*t2938*t3477 + t1310*t3618) + 0.28121*(t1310*t202*t3296 - 4.e-6*t1310*t3477 + t2861*t3618) + t3346*t647 + t3405*t931 + var1[1];
  p_output1[2]=t202*t2809*t3221 + t1500*t4411 + t2258*t4453 + 0.22671*(4.e-6*t202*t2938*t3221 + t3074*t4411 + 4.e-6*t1310*t4453) - 0.03875*(t1245*t202*t3221 + 4.e-6*t2938*t4411 + t1310*t4453) + 0.28121*(-1.*t1310*t202*t3221 - 4.e-6*t1310*t4411 + t2861*t4453) + t4091*t647 + t4282*t931 + var1[2];
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

#include "Joint_fl_hip_pitch_sphere_center.hh"

namespace SymFunction
{

void Joint_fl_hip_pitch_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
