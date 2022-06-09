/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:54:28 GMT+02:00
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
  double t17432;
  double t17433;
  double t17446;
  double t17455;
  double t17665;
  double t17726;
  double t17370;
  double t17750;
  double t4086;
  double t17100;
  double t18249;
  double t18342;
  double t18346;
  double t18354;
  double t18360;
  double t18363;
  double t18367;
  double t18368;
  double t18378;
  double t18379;
  double t18424;
  double t18431;
  double t17744;
  double t17746;
  double t17673;
  double t17724;
  double t18261;
  double t18328;
  double t18361;
  double t18362;
  double t18570;
  double t18571;
  double t18572;
  double t18573;
  double t18574;
  double t18575;
  double t18576;
  double t18577;
  double t18578;
  double t18579;
  double t18581;
  double t18582;
  double t18583;
  double t18584;
  double t18756;
  double t18758;
  double t18760;
  double t18763;
  double t18767;
  double t18770;
  double t18773;
  double t18774;
  double t18775;
  double t18785;
  double t18786;
  double t18787;
  double t18796;
  double t18799;
  double t18798;
  double t18800;
  double t18801;
  double t18803;
  double t18804;
  double t18805;
  double t18853;
  double t18857;
  double t18861;
  double t18868;
  double t18869;
  double t18870;
  double t18875;
  double t18877;
  double t18883;
  double t19000;
  double t19001;
  double t19002;
  double t19011;
  double t19012;
  double t19013;
  double t19016;
  double t19017;
  double t19018;
  double t19028;
  double t19029;
  double t19030;
  double t19037;
  double t19040;
  double t19042;
  double t19047;
  double t19049;
  double t19050;
  double t18657;
  double t18729;
  double t18732;
  double t18738;
  double t19095;
  double t19098;
  double t19100;
  double t19103;
  double t19104;
  double t19065;
  double t19125;
  double t19126;
  double t19127;
  double t19129;
  double t19130;
  double t19131;
  double t19133;
  double t19134;
  double t19135;
  double t19143;
  double t19144;
  double t19145;
  double t19180;
  double t19181;
  double t19182;
  double t19187;
  double t19191;
  double t19196;
  double t19205;
  double t19207;
  double t19209;
  double t19220;
  double t19221;
  double t19222;
  double t19234;
  double t19238;
  double t19242;
  double t19258;
  double t19260;
  double t19261;
  double t19267;
  double t19271;
  double t19247;
  double t19435;
  double t19436;
  double t19437;
  double t19439;
  double t19441;
  double t19444;
  double t19445;
  double t19446;
  double t19454;
  double t19455;
  double t19456;
  t17432 = Cos(var1[15]);
  t17433 = -1.*t17432;
  t17446 = 1. + t17433;
  t17455 = -0.15121*t17446;
  t17665 = Sin(var1[15]);
  t17726 = Sin(var1[4]);
  t17370 = Cos(var1[5]);
  t17750 = Sin(var1[5]);
  t4086 = Cos(var1[4]);
  t17100 = Sin(var1[16]);
  t18249 = Cos(var1[16]);
  t18342 = -1.*t17432*t17370*t17726;
  t18346 = t17665*t17726*t17750;
  t18354 = t18342 + t18346;
  t18360 = Cos(var1[17]);
  t18363 = t4086*t17100;
  t18367 = t18249*t18354;
  t18368 = t18363 + t18367;
  t18378 = Sin(var1[17]);
  t18379 = t18249*t4086;
  t18424 = -1.*t17100*t18354;
  t18431 = t18379 + t18424;
  t17744 = 0.15121*t17665;
  t17746 = t17455 + t17744;
  t17673 = -0.15121*t17665;
  t17724 = t17455 + t17673;
  t18261 = -1.*t18249;
  t18328 = 1. + t18261;
  t18361 = -1.*t18360;
  t18362 = 1. + t18361;
  t18570 = -1.*t4086*t17370*t17665;
  t18571 = -1.*t17432*t4086*t17750;
  t18572 = t18570 + t18571;
  t18573 = -0.28121*t18328*t18572;
  t18574 = -0.50321*t18249*t18362*t18572;
  t18575 = 0.50321*t17100*t18378*t18572;
  t18576 = -1.*t17432*t4086*t17370;
  t18577 = t4086*t17665*t17750;
  t18578 = t18576 + t18577;
  t18579 = -0.15121*t18578;
  t18581 = t18249*t18360*t18572;
  t18582 = t17100*t18378*t18572;
  t18583 = t18581 + t18582;
  t18584 = -0.19821*t18583;
  t18756 = t17432*t4086*t17370;
  t18758 = -1.*t4086*t17665*t17750;
  t18760 = t18756 + t18758;
  t18763 = -1.*t17100*t17726;
  t18767 = -1.*t18249*t18760;
  t18770 = t18763 + t18767;
  t18773 = t18249*t17726;
  t18774 = -1.*t17100*t18760;
  t18775 = t18773 + t18774;
  t18785 = t17100*t17726;
  t18786 = t18249*t18760;
  t18787 = t18785 + t18786;
  t18796 = Cos(var1[3]);
  t18799 = Sin(var1[3]);
  t18798 = t18796*t17370*t17726;
  t18800 = -1.*t18799*t17750;
  t18801 = t18798 + t18800;
  t18803 = -1.*t17370*t18799;
  t18804 = -1.*t18796*t17726*t17750;
  t18805 = t18803 + t18804;
  t18853 = t17432*t18801;
  t18857 = t17665*t18805;
  t18861 = t18853 + t18857;
  t18868 = -1.*t18796*t4086*t17100;
  t18869 = t18249*t18861;
  t18870 = t18868 + t18869;
  t18875 = -1.*t18249*t18796*t4086;
  t18877 = -1.*t17100*t18861;
  t18883 = t18875 + t18877;
  t19000 = t17432*t4086*t17370*t18799;
  t19001 = -1.*t4086*t17665*t18799*t17750;
  t19002 = t19000 + t19001;
  t19011 = t17100*t18799*t17726;
  t19012 = t18249*t19002;
  t19013 = t19011 + t19012;
  t19016 = t18249*t18799*t17726;
  t19017 = -1.*t17100*t19002;
  t19018 = t19016 + t19017;
  t19028 = -1.*t17370*t18799*t17726;
  t19029 = -1.*t18796*t17750;
  t19030 = t19028 + t19029;
  t19037 = t18796*t17370;
  t19040 = -1.*t18799*t17726*t17750;
  t19042 = t19037 + t19040;
  t19047 = t17665*t19030;
  t19049 = t17432*t19042;
  t19050 = t19047 + t19049;
  t18657 = -0.15121*t17432;
  t18729 = t18657 + t17673;
  t18732 = 0.15121*t17432;
  t18738 = t18732 + t17673;
  t19095 = t17370*t18799*t17726;
  t19098 = t18796*t17750;
  t19100 = t19095 + t19098;
  t19103 = -1.*t17665*t19100;
  t19104 = t19103 + t19049;
  t19065 = -1.*t17665*t19042;
  t19125 = t17432*t19100;
  t19126 = t17665*t19042;
  t19127 = t19125 + t19126;
  t19129 = t4086*t17100*t18799;
  t19130 = -1.*t18249*t19127;
  t19131 = t19129 + t19130;
  t19133 = -1.*t18249*t4086*t18799;
  t19134 = -1.*t17100*t19127;
  t19135 = t19133 + t19134;
  t19143 = -1.*t4086*t17100*t18799;
  t19144 = t18249*t19127;
  t19145 = t19143 + t19144;
  t19180 = -1.*t17432*t18796*t4086*t17370;
  t19181 = t18796*t4086*t17665*t17750;
  t19182 = t19180 + t19181;
  t19187 = -1.*t18796*t17100*t17726;
  t19191 = t18249*t19182;
  t19196 = t19187 + t19191;
  t19205 = -1.*t18249*t18796*t17726;
  t19207 = -1.*t17100*t19182;
  t19209 = t19205 + t19207;
  t19220 = t17370*t18799;
  t19221 = t18796*t17726*t17750;
  t19222 = t19220 + t19221;
  t19234 = t17665*t18801;
  t19238 = t17432*t19222;
  t19242 = t19234 + t19238;
  t19258 = -1.*t18796*t17370*t17726;
  t19260 = t18799*t17750;
  t19261 = t19258 + t19260;
  t19267 = -1.*t17665*t19261;
  t19271 = t19267 + t19238;
  t19247 = -1.*t17665*t19222;
  t19435 = t17432*t19261;
  t19436 = t17665*t19222;
  t19437 = t19435 + t19436;
  t19439 = -1.*t18249*t19437;
  t19441 = t18868 + t19439;
  t19444 = t18249*t18796*t4086;
  t19445 = -1.*t17100*t19437;
  t19446 = t19444 + t19445;
  t19454 = t18796*t4086*t17100;
  t19455 = t18249*t19437;
  t19456 = t19454 + t19455;
  p_output1[0]=1.;
  p_output1[1]=-1.*t17370*t17724*t17726 + t17726*t17746*t17750 - 0.15121*(t17370*t17665*t17726 + t17432*t17726*t17750) - 0.28121*t18328*t18354 - 0.50321*t18362*t18368 - 0.50321*t18378*t18431 - 0.19821*(t18360*t18368 - 1.*t18378*t18431) + 0.28121*t17100*t4086;
  p_output1[2]=t18573 + t18574 + t18575 + t18579 + t18584 - 1.*t17370*t17746*t4086 - 1.*t17724*t17750*t4086;
  p_output1[3]=t18573 + t18574 + t18575 + t18579 + t18584 + t17370*t18729*t4086 - 1.*t17750*t18738*t4086;
  p_output1[4]=0.28121*t17726*t18249 - 0.28121*t17100*t18760 - 0.50321*t18378*t18770 - 0.50321*t18362*t18775 - 0.19821*(-1.*t18378*t18770 + t18360*t18775);
  p_output1[5]=-0.50321*t18360*t18775 - 0.50321*t18378*t18787 - 0.19821*(-1.*t18360*t18775 - 1.*t18378*t18787);
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=t17724*t18801 + t17746*t18805 - 0.15121*(-1.*t17665*t18801 + t17432*t18805) - 0.28121*t18328*t18861 - 0.50321*t18362*t18870 - 0.50321*t18378*t18883 - 0.19821*(t18360*t18870 - 1.*t18378*t18883) - 0.28121*t17100*t18796*t4086;
  p_output1[9]=0.28121*t17100*t17726*t18799 - 0.28121*t18328*t19002 - 0.50321*t18362*t19013 - 0.50321*t18378*t19018 - 0.19821*(t18360*t19013 - 1.*t18378*t19018) + t17370*t17724*t18799*t4086 - 1.*t17746*t17750*t18799*t4086 - 0.15121*(-1.*t17370*t17665*t18799*t4086 - 1.*t17432*t17750*t18799*t4086);
  p_output1[10]=t17746*t19030 + t17724*t19042 - 0.28121*t18328*t19050 - 0.50321*t18249*t18362*t19050 + 0.50321*t17100*t18378*t19050 - 0.19821*(t18249*t18360*t19050 + t17100*t18378*t19050) - 0.15121*(t17432*t19030 + t19065);
  p_output1[11]=t18738*t19042 + t18729*t19100 - 0.15121*(t19065 - 1.*t17432*t19100) - 0.28121*t18328*t19104 - 0.50321*t18249*t18362*t19104 + 0.50321*t17100*t18378*t19104 - 0.19821*(t18249*t18360*t19104 + t17100*t18378*t19104);
  p_output1[12]=-0.28121*t17100*t19127 - 0.50321*t18378*t19131 - 0.50321*t18362*t19135 - 0.19821*(-1.*t18378*t19131 + t18360*t19135) - 0.28121*t18249*t18799*t4086;
  p_output1[13]=-0.50321*t18360*t19135 - 0.50321*t18378*t19145 - 0.19821*(-1.*t18360*t19135 - 1.*t18378*t19145);
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=t17746*t19042 + t17724*t19100 - 0.15121*t19104 - 0.28121*t18328*t19127 - 0.50321*t18378*t19135 - 0.50321*t18362*t19145 - 0.19821*(-1.*t18378*t19135 + t18360*t19145) - 0.28121*t17100*t18799*t4086;
  p_output1[17]=-0.28121*t17100*t17726*t18796 - 0.28121*t18328*t19182 - 0.50321*t18362*t19196 - 0.50321*t18378*t19209 - 0.19821*(t18360*t19196 - 1.*t18378*t19209) - 1.*t17370*t17724*t18796*t4086 + t17746*t17750*t18796*t4086 - 0.15121*(t17370*t17665*t18796*t4086 + t17432*t17750*t18796*t4086);
  p_output1[18]=t17746*t18801 + t17724*t19222 - 0.28121*t18328*t19242 - 0.50321*t18249*t18362*t19242 + 0.50321*t17100*t18378*t19242 - 0.19821*(t18249*t18360*t19242 + t17100*t18378*t19242) - 0.15121*(t18853 + t19247);
  p_output1[19]=t18738*t19222 + t18729*t19261 - 0.15121*(t19247 - 1.*t17432*t19261) - 0.28121*t18328*t19271 - 0.50321*t18249*t18362*t19271 + 0.50321*t17100*t18378*t19271 - 0.19821*(t18249*t18360*t19271 + t17100*t18378*t19271);
  p_output1[20]=-0.28121*t17100*t19437 - 0.50321*t18378*t19441 - 0.50321*t18362*t19446 - 0.19821*(-1.*t18378*t19441 + t18360*t19446) + 0.28121*t18249*t18796*t4086;
  p_output1[21]=-0.50321*t18360*t19446 - 0.50321*t18378*t19456 - 0.19821*(-1.*t18360*t19446 - 1.*t18378*t19456);
  p_output1[22]=-1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 23, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_h_RrFoot_ParallelStance.hh"

namespace ParallelStance
{

void J_h_RrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
