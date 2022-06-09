/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:39:10 GMT+02:00
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
  double t2712;
  double t3581;
  double t3635;
  double t2183;
  double t3848;
  double t4099;
  double t4386;
  double t4444;
  double t4470;
  double t4471;
  double t3346;
  double t4031;
  double t4081;
  double t4541;
  double t4542;
  double t4559;
  double t5795;
  double t6121;
  double t9249;
  double t9268;
  double t9462;
  double t9849;
  double t10061;
  double t10179;
  double t10199;
  double t10821;
  double t10831;
  double t10832;
  double t10876;
  double t10878;
  double t4497;
  double t4510;
  double t4590;
  double t4617;
  double t5802;
  double t6114;
  double t10132;
  double t10139;
  double t11223;
  double t11224;
  double t11231;
  double t11239;
  double t11242;
  double t11342;
  double t11452;
  double t11463;
  double t11466;
  double t11743;
  double t11746;
  double t11753;
  double t11557;
  double t11660;
  double t11725;
  double t11769;
  double t11774;
  double t11775;
  double t13562;
  double t13567;
  double t13570;
  double t13575;
  double t13578;
  double t12920;
  double t14045;
  double t14060;
  double t14066;
  double t14079;
  double t14101;
  double t14114;
  double t14464;
  double t14465;
  double t14466;
  double t14528;
  double t14537;
  double t14543;
  t2712 = Cos(var1[5]);
  t3581 = Sin(var1[3]);
  t3635 = Sin(var1[4]);
  t2183 = Cos(var1[3]);
  t3848 = Sin(var1[5]);
  t4099 = Cos(var1[6]);
  t4386 = -1.*t4099;
  t4444 = 1. + t4386;
  t4470 = 0.15121*t4444;
  t4471 = Sin(var1[6]);
  t3346 = t2183*t2712;
  t4031 = -1.*t3581*t3635*t3848;
  t4081 = t3346 + t4031;
  t4541 = t2712*t3581*t3635;
  t4542 = t2183*t3848;
  t4559 = t4541 + t4542;
  t5795 = Cos(var1[7]);
  t6121 = t4099*t4559;
  t9249 = t4081*t4471;
  t9268 = t6121 + t9249;
  t9462 = Cos(var1[4]);
  t9849 = Sin(var1[7]);
  t10061 = Cos(var1[8]);
  t10179 = t5795*t9268;
  t10199 = t9462*t3581*t9849;
  t10821 = t10179 + t10199;
  t10831 = -1.*t9462*t5795*t3581;
  t10832 = t9268*t9849;
  t10876 = t10831 + t10832;
  t10878 = Sin(var1[8]);
  t4497 = -0.15121*t4471;
  t4510 = t4470 + t4497;
  t4590 = 0.15121*t4471;
  t4617 = t4470 + t4590;
  t5802 = -1.*t5795;
  t6114 = 1. + t5802;
  t10132 = -1.*t10061;
  t10139 = 1. + t10132;
  t11223 = -1.*t2183*t9462*t2712*t4099;
  t11224 = t2183*t9462*t3848*t4471;
  t11231 = t11223 + t11224;
  t11239 = t5795*t11231;
  t11242 = t2183*t3635*t9849;
  t11342 = t11239 + t11242;
  t11452 = -1.*t2183*t5795*t3635;
  t11463 = t11231*t9849;
  t11466 = t11452 + t11463;
  t11743 = t2712*t3581;
  t11746 = t2183*t3635*t3848;
  t11753 = t11743 + t11746;
  t11557 = t2183*t2712*t3635;
  t11660 = -1.*t3581*t3848;
  t11725 = t11557 + t11660;
  t11769 = t4099*t11753;
  t11774 = t11725*t4471;
  t11775 = t11769 + t11774;
  t13562 = -1.*t2183*t2712*t3635;
  t13567 = t3581*t3848;
  t13570 = t13562 + t13567;
  t13575 = -1.*t13570*t4471;
  t13578 = t11769 + t13575;
  t12920 = -1.*t11753*t4471;
  t14045 = t4099*t13570;
  t14060 = t11753*t4471;
  t14066 = t14045 + t14060;
  t14079 = -1.*t2183*t9462*t5795;
  t14101 = -1.*t14066*t9849;
  t14114 = t14079 + t14101;
  t14464 = t5795*t14066;
  t14465 = -1.*t2183*t9462*t9849;
  t14466 = t14464 + t14465;
  t14528 = t2183*t9462*t5795;
  t14537 = t14066*t9849;
  t14543 = t14528 + t14537;
  p_output1[0]=1.;
  p_output1[1]=0.50321*t10139*t10821 - 0.50321*t10876*t10878 + 0.19821*(t10061*t10821 + t10876*t10878) + t4081*t4510 + 0.15121*(t4081*t4099 - 1.*t4471*t4559) + t4559*t4617 + 0.28121*t6114*t9268 - 0.28121*t3581*t9462*t9849;
  p_output1[2]=0.50321*t10139*t11342 - 0.50321*t10878*t11466 + 0.19821*(t10061*t11342 + t10878*t11466) + 0.28121*t11231*t6114 + t2183*t3848*t4510*t9462 - 1.*t2183*t2712*t4617*t9462 + 0.15121*(t2183*t3848*t4099*t9462 + t2183*t2712*t4471*t9462) - 0.28121*t2183*t3635*t9849;
  p_output1[3]=0.15121*(t12920 + t11725*t4099) + t11725*t4510 + t11753*t4617 + 0.50321*t10139*t11775*t5795 + 0.28121*t11775*t6114 - 0.50321*t10878*t11775*t9849 + 0.19821*(t10061*t11775*t5795 + t10878*t11775*t9849);
  p_output1[4]=0.15121*(t12920 - 1.*t13570*t4099) + t11753*(-0.15121*t4099 + t4590) + t13570*(0.15121*t4099 + t4590) + 0.50321*t10139*t13578*t5795 + 0.28121*t13578*t6114 - 0.50321*t10878*t13578*t9849 + 0.19821*(t10061*t13578*t5795 + t10878*t13578*t9849);
  p_output1[5]=0.50321*t10139*t14114 - 0.50321*t10878*t14466 + 0.19821*(t10061*t14114 + t10878*t14466) + 0.28121*t2183*t5795*t9462 + 0.28121*t14066*t9849;
  p_output1[6]=0.50321*t10878*t14466 - 0.50321*t10061*t14543 + 0.19821*(-1.*t10878*t14466 + t10061*t14543);
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
