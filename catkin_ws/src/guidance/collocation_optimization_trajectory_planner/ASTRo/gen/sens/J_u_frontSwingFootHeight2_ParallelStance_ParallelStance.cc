/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 19:01:21 GMT+02:00
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
  double t134;
  double t162;
  double t235;
  double t123;
  double t238;
  double t317;
  double t339;
  double t387;
  double t445;
  double t450;
  double t154;
  double t307;
  double t313;
  double t663;
  double t666;
  double t667;
  double t705;
  double t848;
  double t863;
  double t867;
  double t869;
  double t873;
  double t879;
  double t882;
  double t999;
  double t1000;
  double t1010;
  double t1048;
  double t1059;
  double t1068;
  double t457;
  double t458;
  double t670;
  double t671;
  double t846;
  double t847;
  double t880;
  double t881;
  double t1308;
  double t1311;
  double t1315;
  double t1320;
  double t1328;
  double t1329;
  double t1471;
  double t1472;
  double t1476;
  double t1503;
  double t1623;
  double t1624;
  double t1494;
  double t1495;
  double t1496;
  double t1652;
  double t1670;
  double t1671;
  double t2044;
  double t2048;
  double t2054;
  double t2065;
  double t2066;
  double t1693;
  double t2507;
  double t3021;
  double t3671;
  double t3677;
  double t3683;
  double t3894;
  double t3911;
  double t4145;
  double t4153;
  double t4295;
  double t4297;
  double t4310;
  t134 = Cos(var1[5]);
  t162 = Sin(var1[3]);
  t235 = Sin(var1[4]);
  t123 = Cos(var1[3]);
  t238 = Sin(var1[5]);
  t317 = Cos(var1[6]);
  t339 = -1.*t317;
  t387 = 1. + t339;
  t445 = 0.15121*t387;
  t450 = Sin(var1[6]);
  t154 = t123*t134;
  t307 = -1.*t162*t235*t238;
  t313 = t154 + t307;
  t663 = t134*t162*t235;
  t666 = t123*t238;
  t667 = t663 + t666;
  t705 = Cos(var1[7]);
  t848 = t317*t667;
  t863 = t313*t450;
  t867 = t848 + t863;
  t869 = Cos(var1[4]);
  t873 = Sin(var1[7]);
  t879 = Cos(var1[8]);
  t882 = t705*t867;
  t999 = t869*t162*t873;
  t1000 = t882 + t999;
  t1010 = -1.*t869*t705*t162;
  t1048 = t867*t873;
  t1059 = t1010 + t1048;
  t1068 = Sin(var1[8]);
  t457 = -0.15121*t450;
  t458 = t445 + t457;
  t670 = 0.15121*t450;
  t671 = t445 + t670;
  t846 = -1.*t705;
  t847 = 1. + t846;
  t880 = -1.*t879;
  t881 = 1. + t880;
  t1308 = -1.*t123*t869*t134*t317;
  t1311 = t123*t869*t238*t450;
  t1315 = t1308 + t1311;
  t1320 = t705*t1315;
  t1328 = t123*t235*t873;
  t1329 = t1320 + t1328;
  t1471 = -1.*t123*t705*t235;
  t1472 = t1315*t873;
  t1476 = t1471 + t1472;
  t1503 = t134*t162;
  t1623 = t123*t235*t238;
  t1624 = t1503 + t1623;
  t1494 = t123*t134*t235;
  t1495 = -1.*t162*t238;
  t1496 = t1494 + t1495;
  t1652 = t317*t1624;
  t1670 = t1496*t450;
  t1671 = t1652 + t1670;
  t2044 = -1.*t123*t134*t235;
  t2048 = t162*t238;
  t2054 = t2044 + t2048;
  t2065 = -1.*t2054*t450;
  t2066 = t1652 + t2065;
  t1693 = -1.*t1624*t450;
  t2507 = t317*t2054;
  t3021 = t1624*t450;
  t3671 = t2507 + t3021;
  t3677 = -1.*t123*t869*t705;
  t3683 = -1.*t3671*t873;
  t3894 = t3677 + t3683;
  t3911 = t705*t3671;
  t4145 = -1.*t123*t869*t873;
  t4153 = t3911 + t4145;
  t4295 = t123*t869*t705;
  t4297 = t3671*t873;
  t4310 = t4295 + t4297;
  p_output1[0]=1.;
  p_output1[1]=-0.50321*t1059*t1068 + t313*t458 + 0.15121*(t313*t317 - 1.*t450*t667) + t667*t671 + 0.28121*t847*t867 - 0.28121*t162*t869*t873 + 0.19821*(t1059*t1068 + t1000*t879) + 0.50321*t1000*t881;
  p_output1[2]=-0.50321*t1068*t1476 + 0.28121*t1315*t847 + t123*t238*t458*t869 - 1.*t123*t134*t671*t869 + 0.15121*(t123*t238*t317*t869 + t123*t134*t450*t869) - 0.28121*t123*t235*t873 + 0.19821*(t1068*t1476 + t1329*t879) + 0.50321*t1329*t881;
  p_output1[3]=0.15121*(t1693 + t1496*t317) + t1496*t458 + t1624*t671 + 0.28121*t1671*t847 - 0.50321*t1068*t1671*t873 + 0.19821*(t1068*t1671*t873 + t1671*t705*t879) + 0.50321*t1671*t705*t881;
  p_output1[4]=0.15121*(t1693 - 1.*t2054*t317) + t1624*(-0.15121*t317 + t670) + t2054*(0.15121*t317 + t670) + 0.28121*t2066*t847 - 0.50321*t1068*t2066*t873 + 0.19821*(t1068*t2066*t873 + t2066*t705*t879) + 0.50321*t2066*t705*t881;
  p_output1[5]=-0.50321*t1068*t4153 + 0.28121*t123*t705*t869 + 0.28121*t3671*t873 + 0.19821*(t1068*t4153 + t3894*t879) + 0.50321*t3894*t881;
  p_output1[6]=0.50321*t1068*t4153 - 0.50321*t4310*t879 + 0.19821*(-1.*t1068*t4153 + t4310*t879);
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

#include "J_u_frontSwingFootHeight2_ParallelStance_ParallelStance.hh"

namespace SymFunction
{

void J_u_frontSwingFootHeight2_ParallelStance_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
