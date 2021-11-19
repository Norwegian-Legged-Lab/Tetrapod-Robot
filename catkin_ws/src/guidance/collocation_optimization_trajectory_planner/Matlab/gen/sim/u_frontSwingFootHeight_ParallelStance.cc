/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:11:01 GMT+01:00
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
  double t361;
  double t99;
  double t406;
  double t343;
  double t410;
  double t451;
  double t455;
  double t465;
  double t466;
  double t467;
  double t346;
  double t415;
  double t441;
  double t509;
  double t514;
  double t516;
  double t590;
  double t597;
  double t604;
  double t625;
  double t684;
  double t706;
  double t550;
  double t554;
  double t565;
  double t650;
  double t652;
  double t657;
  double t770;
  double t771;
  double t787;
  double t798;
  double t713;
  double t717;
  double t723;
  double t725;
  double t735;
  double t742;
  double t962;
  double t917;
  double t919;
  double t920;
  double t923;
  double t828;
  double t830;
  double t844;
  double t849;
  double t852;
  double t854;
  t361 = Cos(var1[3]);
  t99 = Cos(var1[5]);
  t406 = Sin(var1[4]);
  t343 = Sin(var1[3]);
  t410 = Sin(var1[5]);
  t451 = Cos(var1[6]);
  t455 = -1.*t451;
  t465 = 1. + t455;
  t466 = 0.15121*t465;
  t467 = Sin(var1[6]);
  t346 = t99*t343;
  t415 = t361*t406*t410;
  t441 = t346 + t415;
  t509 = -1.*t361*t99*t406;
  t514 = t343*t410;
  t516 = t509 + t514;
  t590 = Cos(var1[7]);
  t597 = -1.*t590;
  t604 = 1. + t597;
  t625 = Sin(var1[7]);
  t684 = Cos(var1[4]);
  t706 = -1. + t590;
  t550 = t451*t441;
  t554 = -1.*t516*t467;
  t565 = t550 + t554;
  t650 = t451*t516;
  t652 = t441*t467;
  t657 = t650 + t652;
  t770 = Cos(var1[8]);
  t771 = -1.*t770;
  t787 = 1. + t771;
  t798 = Sin(var1[8]);
  t713 = 4.e-6*t361*t684*t706;
  t717 = 1.6e-11*t706;
  t723 = 1. + t717;
  t725 = t723*t565;
  t735 = 4.e-6*t657*t625;
  t742 = t713 + t725 + t735;
  t962 = -1. + t770;
  t917 = t361*t684*t590;
  t919 = 4.e-6*t706*t565;
  t920 = t657*t625;
  t923 = t917 + t919 + t920;
  t828 = -1.000000000016*t604;
  t830 = 1. + t828;
  t844 = t830*t657;
  t849 = -1.*t361*t684*t625;
  t852 = -4.e-6*t565*t625;
  t854 = t844 + t849 + t852;
  p_output1[0]=t441*(t466 - 0.15121*t467) + (t466 + 0.15121*t467)*t516 + (0.281210000008499*t604 + 0.03874900000062*t625)*t657 + (0.503210000016051*t787 + 0.03874900000062*t798)*t854 + 0.80321*(-4.e-6*t742*t798 + (1. - 1.000000000016*t787)*t854 - 1.*t798*t923) - 0.03875*(t798*t854 + t770*t923 + 4.e-6*t742*t962) + 0.14871*(4.e-6*t798*t854 + t742*(1. + 1.6e-11*t962) + 4.e-6*t923*t962) + var1[2] + t565*(-1.5499600000248e-7*t604 + 1.124840000016e-6*t625 - 1.2484e-7*var1[7]) + t361*t684*(-0.03874900000062*t604 + 0.281210000004*t625 + 4.9936e-13*var1[7]) + t742*(-1.5499600000248e-7*t787 + 2.012840000032e-6*t798 - 1.284e-8*var1[8]) + t923*(-0.03874900000062*t787 + 0.503210000008*t798 + 5.136e-14*var1[8]);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "u_frontSwingFootHeight_ParallelStance.hh"

namespace SymFunction
{

void u_frontSwingFootHeight_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
