/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 16:58:45 GMT+02:00
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
  double t105;
  double t28253;
  double t18919;
  double t28567;
  double t28845;
  double t28563;
  double t28877;
  double t27586;
  double t40534;
  double t49701;
  double t50055;
  double t28262;
  double t40466;
  double t28569;
  double t31935;
  double t33717;
  double t28242;
  double t28501;
  double t28544;
  double t50871;
  double t50851;
  double t50628;
  double t50645;
  double t50657;
  double t50760;
  double t50825;
  double t50827;
  double t50829;
  double t50835;
  double t50842;
  double t50892;
  double t50898;
  double t50923;
  double t50951;
  double t50957;
  double t50958;
  double t50971;
  double t50977;
  double t51081;
  double t51151;
  double t51159;
  double t51160;
  double t51228;
  double t51342;
  double t51344;
  double t40499;
  double t50665;
  double t50671;
  double t51451;
  double t51457;
  double t51472;
  double t51473;
  double t51474;
  double t51476;
  double t51477;
  double t51478;
  double t51532;
  double t51578;
  double t51583;
  double t51681;
  double t51714;
  double t51789;
  double t53314;
  double t53518;
  double t51461;
  double t51468;
  double t51470;
  double t51730;
  double t51759;
  double t53697;
  double t54094;
  double t54116;
  double t54155;
  double t54555;
  double t54604;
  double t54615;
  double t51765;
  double t53566;
  double t53678;
  double t54226;
  double t54616;
  double t54617;
  double t54628;
  double t54634;
  double t54967;
  double t50828;
  double t50843;
  double t50845;
  double t53679;
  double t55232;
  double t55436;
  double t55739;
  double t55800;
  double t55896;
  double t56235;
  double t56404;
  t105 = Cos(var1[4]);
  t28253 = Cos(var1[12]);
  t18919 = Cos(var1[5]);
  t28567 = Cos(var1[14]);
  t28845 = Sin(var1[13]);
  t28563 = Cos(var1[13]);
  t28877 = Sin(var1[14]);
  t27586 = Sin(var1[12]);
  t40534 = t28567*t28845;
  t49701 = -1.*t28563*t28877;
  t50055 = t40534 + t49701;
  t28262 = Sin(var1[5]);
  t40466 = Sin(var1[4]);
  t28569 = t28563*t28567;
  t31935 = t28845*t28877;
  t33717 = t28569 + t31935;
  t28242 = -1.*t18919*t27586;
  t28501 = -1.*t28253*t28262;
  t28544 = t28242 + t28501;
  t50871 = Cos(var1[3]);
  t50851 = Sin(var1[3]);
  t50628 = t28253*t18919*t50055;
  t50645 = -1.*t27586*t50055*t28262;
  t50657 = t50628 + t50645;
  t50760 = -1.*t28567*t28845;
  t50825 = t28563*t28877;
  t50827 = t50760 + t50825;
  t50829 = t28253*t18919*t33717;
  t50835 = -1.*t27586*t33717*t28262;
  t50842 = t50829 + t50835;
  t50892 = t28253*t18919;
  t50898 = -1.*t27586*t28262;
  t50923 = t50892 + t50898;
  t50951 = t18919*t27586*t50055;
  t50957 = t28253*t50055*t28262;
  t50958 = t50951 + t50957;
  t50971 = t105*t33717;
  t50977 = -1.*t40466*t50657;
  t51081 = t50971 + t50977;
  t51151 = t18919*t27586*t33717;
  t51159 = t28253*t33717*t28262;
  t51160 = t51151 + t51159;
  t51228 = t105*t50827;
  t51342 = -1.*t40466*t50842;
  t51344 = t51228 + t51342;
  t40499 = t33717*t40466;
  t50665 = t105*t50657;
  t50671 = t40499 + t50665;
  t51451 = -1.*t28253;
  t51457 = 1. + t51451;
  t51472 = -1.*t28563;
  t51473 = 1. + t51472;
  t51474 = 0.28121*t51473;
  t51476 = -1.*t28567;
  t51477 = 1. + t51476;
  t51478 = 0.50321*t51477;
  t51532 = 0.19821*t28567;
  t51578 = t51478 + t51532;
  t51583 = t28563*t51578;
  t51681 = -0.305*t28845*t28877;
  t51714 = t51474 + t51583 + t51681;
  t51789 = 0.15121*t51457;
  t53314 = t28253*t51714;
  t53518 = t51789 + t53314;
  t51461 = -0.15121*t51457;
  t51468 = -0.15121*t28253;
  t51470 = -0.15121*t27586;
  t51730 = t27586*t51714;
  t51759 = t51461 + t51468 + t51470 + t51730;
  t53697 = 0.28121*t28845;
  t54094 = -1.*t51578*t28845;
  t54116 = -0.305*t28563*t28877;
  t54155 = t53697 + t54094 + t54116;
  t54555 = t18919*t53518;
  t54604 = -1.*t51759*t28262;
  t54615 = t54555 + t54604;
  t51765 = t18919*t51759;
  t53566 = t53518*t28262;
  t53678 = t51765 + t53566;
  t54226 = t54155*t40466;
  t54616 = t105*t54615;
  t54617 = t54226 + t54616;
  t54628 = t105*t54155;
  t54634 = -1.*t40466*t54615;
  t54967 = t54628 + t54634;
  t50828 = t50827*t40466;
  t50843 = t105*t50842;
  t50845 = t50828 + t50843;
  t53679 = -1.*t50923*t53678;
  t55232 = t50958*t53678;
  t55436 = t50923*t53678;
  t55739 = -1.*t51160*t53678;
  t55800 = -1.*t50958*t53678;
  t55896 = t51160*t53678;
  t56235 = -1.*t54155*t33717;
  t56404 = t54155*t50827;
  p_output1[0]=t50845*var2[0] + t105*t28544*var2[1] + t50671*var2[2];
  p_output1[1]=(t50871*t51160 - 1.*t50851*t51344)*var2[0] + (t28544*t40466*t50851 + t50871*t50923)*var2[1] + (t50871*t50958 - 1.*t50851*t51081)*var2[2];
  p_output1[2]=(t50851*t51160 + t50871*t51344)*var2[0] + (-1.*t28544*t40466*t50871 + t50851*t50923)*var2[1] + (t50851*t50958 + t50871*t51081)*var2[2];
  p_output1[3]=(t50671*(t53679 - 1.*t105*t28544*t54617 + t28544*t40466*t54967) + t105*t28544*(t50671*t54617 + t51081*t54967 + t55232))*var2[0] + (t50845*(-1.*t50671*t54617 - 1.*t51081*t54967 + t55800) + t50671*(t50845*t54617 + t51344*t54967 + t55896))*var2[1] + (t50845*(t105*t28544*t54617 - 1.*t28544*t40466*t54967 + t55436) + t105*t28544*(-1.*t50845*t54617 - 1.*t51344*t54967 + t55739))*var2[2];
  p_output1[4]=(t50958*(t53679 - 1.*t28544*t54615) + t50923*(t33717*t54155 + t50657*t54615 + t55232))*var2[0] + (t51160*(-1.*t50657*t54615 + t55800 + t56235) + t50958*(t50842*t54615 + t55896 + t56404))*var2[1] + (t51160*(t28544*t54615 + t55436) + t50923*(-1.*t50827*t54155 - 1.*t50842*t54615 + t55739))*var2[2];
  p_output1[5]=t33717*(-1.*t28253*t51759 + t27586*t53518)*var2[0] + (t50827*(-1.*t27586*t50055*t51759 - 1.*t28253*t50055*t53518 + t56235) + t33717*(t27586*t33717*t51759 + t28253*t33717*t53518 + t56404))*var2[1] + t50827*(t28253*t51759 - 1.*t27586*t53518)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-0.15121 + t50827*(-1.*t50055*t51714 + t56235) + t33717*(t33717*t51714 + t56404))*var2[1] + (-0.15121*t50055 - 0.15121*t50827)*var2[2];
  p_output1[13]=(0.28121*t28877 - 0.305*t28567*t28877 - 1.*t28877*t51578)*var2[0] + (0.28121*t28567 + 0.305*Power(t28877,2) - 1.*t28567*t51578)*var2[2];
  p_output1[14]=-0.305*var2[2];
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fFrFoot_vec_DiagonalStance.hh"

namespace DiagonalStance
{

void fFrFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
