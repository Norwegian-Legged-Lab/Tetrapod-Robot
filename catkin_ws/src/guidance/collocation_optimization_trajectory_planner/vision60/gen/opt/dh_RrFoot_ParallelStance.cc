/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:33:27 GMT+02:00
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
  double t2330;
  double t2347;
  double t13383;
  double t13462;
  double t13738;
  double t13732;
  double t2339;
  double t2425;
  double t2518;
  double t2853;
  double t6714;
  double t12007;
  double t12042;
  double t12054;
  double t13015;
  double t13751;
  double t13753;
  double t13754;
  double t13755;
  double t13703;
  double t13715;
  double t13716;
  double t13750;
  double t15112;
  double t15277;
  double t15320;
  double t15321;
  double t15328;
  double t15279;
  double t15280;
  double t15284;
  double t15304;
  double t15315;
  double t15316;
  double t13388;
  double t13516;
  double t13535;
  double t15396;
  double t15479;
  double t15389;
  double t15359;
  double t15478;
  double t15483;
  double t15484;
  double t15502;
  double t15492;
  double t15496;
  double t15500;
  double t15488;
  double t15504;
  double t15510;
  double t15512;
  double t15278;
  double t15330;
  double t15334;
  double t15335;
  double t15336;
  double t15337;
  double t15338;
  double t15345;
  double t15686;
  double t15703;
  double t15705;
  double t15534;
  double t15538;
  double t15542;
  double t15546;
  double t15547;
  double t15616;
  double t15710;
  double t15714;
  double t15716;
  double t15706;
  double t15758;
  double t15759;
  double t15760;
  double t15709;
  double t15765;
  double t15766;
  double t15767;
  double t15748;
  double t15756;
  double t15757;
  double t15782;
  double t15790;
  double t15796;
  double t15835;
  double t15823;
  double t15776;
  double t15777;
  double t15778;
  double t15833;
  double t15829;
  double t16105;
  double t15368;
  double t15485;
  double t15486;
  double t16112;
  double t15803;
  double t15804;
  double t15805;
  double t16248;
  double t16256;
  double t16296;
  double t16300;
  t2330 = Cos(var1[17]);
  t2347 = Sin(var1[17]);
  t13383 = Sin(var1[16]);
  t13462 = Cos(var1[16]);
  t13738 = Sin(var1[15]);
  t13732 = Cos(var1[15]);
  t2339 = -0.0641*t2330;
  t2425 = -0.28*t2347;
  t2518 = t2339 + t2425;
  t2853 = -1.*t2330;
  t6714 = 1. + t2853;
  t12007 = -0.575*t6714;
  t12042 = -0.295*t2330;
  t12054 = -0.0641*t2347;
  t13015 = t12007 + t12042 + t12054;
  t13751 = 0.325*t13383;
  t13753 = t13462*t2518;
  t13754 = t13383*t13015;
  t13755 = t13751 + t13753 + t13754;
  t13703 = -1.*t2330*t13383;
  t13715 = t13462*t2347;
  t13716 = t13703 + t13715;
  t13750 = -0.068*t13738;
  t15112 = t13732*t13755;
  t15277 = t13750 + t15112;
  t15320 = t13462*t2330;
  t15321 = t13383*t2347;
  t15328 = t15320 + t15321;
  t15279 = -1.*t13732;
  t15280 = 1. + t15279;
  t15284 = -0.1575*t15280;
  t15304 = -0.2255*t13732;
  t15315 = -1.*t13738*t13755;
  t15316 = t15284 + t15304 + t15315;
  t13388 = t2330*t13383;
  t13516 = -1.*t13462*t2347;
  t13535 = t13388 + t13516;
  t15396 = Cos(var1[5]);
  t15479 = Sin(var1[5]);
  t15389 = Cos(var1[4]);
  t15359 = Sin(var1[4]);
  t15478 = t15396*t15328;
  t15483 = t13738*t13535*t15479;
  t15484 = t15478 + t15483;
  t15502 = Cos(var1[3]);
  t15492 = -1.*t15396*t13738*t13535;
  t15496 = t15328*t15479;
  t15500 = t15492 + t15496;
  t15488 = Sin(var1[3]);
  t15504 = t13732*t15389*t13535;
  t15510 = -1.*t15359*t15484;
  t15512 = t15504 + t15510;
  t15278 = -1.*t13738*t15277;
  t15330 = -1.*t13462;
  t15334 = 1. + t15330;
  t15335 = -0.325*t15334;
  t15336 = -1.*t13383*t2518;
  t15337 = t13462*t13015;
  t15338 = t15335 + t15336 + t15337;
  t15345 = t13732*t15277*t15328;
  t15686 = t15396*t15316;
  t15703 = t15338*t15479;
  t15705 = t15686 + t15703;
  t15534 = -1.*t15396*t13738*t15328;
  t15538 = t13716*t15479;
  t15542 = t15534 + t15538;
  t15546 = t15396*t15338;
  t15547 = -1.*t15316*t15479;
  t15616 = t15546 + t15547;
  t15710 = t15396*t13716;
  t15714 = t13738*t15328*t15479;
  t15716 = t15710 + t15714;
  t15706 = -1.*t13732*t15396*t15705;
  t15758 = t13738*t15359;
  t15759 = -1.*t13732*t15389*t15479;
  t15760 = t15758 + t15759;
  t15709 = t15705*t15542;
  t15765 = t15277*t15359;
  t15766 = t15389*t15616;
  t15767 = t15765 + t15766;
  t15748 = t13732*t15328*t15359;
  t15756 = t15389*t15716;
  t15757 = t15748 + t15756;
  t15782 = t15389*t15277;
  t15790 = -1.*t15359*t15616;
  t15796 = t15782 + t15790;
  t15835 = t15338*t15328;
  t15823 = -1.*t15338*t13716;
  t15776 = t15389*t13738;
  t15777 = t13732*t15359*t15479;
  t15778 = t15776 + t15777;
  t15833 = t13732*t15277*t13535;
  t15829 = -1.*t13732*t15277*t15328;
  t16105 = t15705*t15500;
  t15368 = t13732*t13535*t15359;
  t15485 = t15389*t15484;
  t15486 = t15368 + t15485;
  t16112 = -1.*t15705*t15542;
  t15803 = t13732*t15389*t15328;
  t15804 = -1.*t15359*t15716;
  t15805 = t15803 + t15804;
  t16248 = t13738*t15277;
  t16256 = -1.*t13732*t15277*t13535;
  t16296 = t13732*t15396*t15705;
  t16300 = -1.*t15705*t15500;
  p_output1[0]=t15486*var2[0] + (t15500*t15502 - 1.*t15488*t15512)*var2[1] + (t15488*t15500 + t15502*t15512)*var2[2] + (t15757*(t15706 - 1.*t15760*t15767 - 1.*t15778*t15796) + t15760*(t15709 + t15757*t15767 + t15796*t15805))*var2[3] + (t15542*(t15278 + t13732*t15479*t15616 + t15706) + t13732*t15396*(t15345 + t15709 + t15616*t15716))*var2[4] + (t13732*(t15278 - 1.*t13732*t15316)*t15328 + t13738*(-1.*t13738*t15316*t15328 + t13716*t15338 + t15345))*var2[5] + (0.1575*t13535 + 0.2255*t13716)*var2[15] + (-0.325*t2347 - 1.*t13015*t2347 - 1.*t2330*t2518)*var2[16] - 0.0641*var2[17];
  p_output1[1]=t15760*var2[0] + (t13732*t15396*t15502 - 1.*t15488*t15778)*var2[1] + (t13732*t15396*t15488 + t15502*t15778)*var2[2] + (t15757*(t15486*t15767 + t15512*t15796 + t16105) + t15486*(-1.*t15757*t15767 - 1.*t15796*t15805 + t16112))*var2[3] + (t15542*(t15484*t15616 + t15833 + t16105) + t15500*(-1.*t15616*t15716 + t15829 + t16112))*var2[4] + (t13535*t13732*(t13738*t15316*t15328 + t15823 + t15829) + t13732*t15328*(-1.*t13535*t13738*t15316 + t15833 + t15835))*var2[5] + (t15328*(-1.*t13755*t15328 + t15823) + t13716*(t13535*t13755 + t15835))*var2[15];
  p_output1[2]=t15757*var2[0] + (t15502*t15542 - 1.*t15488*t15805)*var2[1] + (t15488*t15542 + t15502*t15805)*var2[2] + (t15486*(t15760*t15767 + t15778*t15796 + t16296) + t15760*(-1.*t15486*t15767 - 1.*t15512*t15796 + t16300))*var2[3] + (t15500*(-1.*t13732*t15479*t15616 + t16248 + t16296) + t13732*t15396*(-1.*t15484*t15616 + t16256 + t16300))*var2[4] + (t13535*t13732*(t13732*t15316 + t16248) + t13738*(t13535*t13738*t15316 - 1.*t15328*t15338 + t16256))*var2[5] - 0.068*t15328*var2[15] + (0.325*t2330 + t13015*t2330 - 1.*t2347*t2518)*var2[16] - 0.28*var2[17];
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
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
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

#include "dh_RrFoot_ParallelStance.hh"

namespace ParallelStance
{

void dh_RrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
