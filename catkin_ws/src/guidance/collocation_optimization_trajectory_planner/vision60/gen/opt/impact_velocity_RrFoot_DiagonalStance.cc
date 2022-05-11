/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:47:10 GMT+02:00
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
  double t2139;
  double t1379;
  double t24;
  double t1940;
  double t2185;
  double t2236;
  double t2243;
  double t2264;
  double t2272;
  double t2339;
  double t2402;
  double t2439;
  double t2770;
  double t2355;
  double t2386;
  double t2800;
  double t2804;
  double t2805;
  double t2813;
  double t2814;
  double t2816;
  double t2450;
  double t2457;
  double t2458;
  double t2953;
  double t2965;
  double t2989;
  double t3012;
  double t3014;
  double t3015;
  double t3035;
  double t3036;
  double t3039;
  double t2793;
  double t2794;
  double t2627;
  double t2749;
  double t3233;
  double t3234;
  double t3241;
  double t3250;
  double t3251;
  double t3252;
  double t3255;
  double t3269;
  double t3279;
  double t3445;
  double t3543;
  double t3545;
  double t3568;
  double t3573;
  double t3587;
  double t3593;
  double t3599;
  double t3617;
  double t3623;
  double t3758;
  double t3761;
  double t3794;
  double t3795;
  double t3800;
  double t3852;
  double t3857;
  double t4632;
  double t4634;
  double t4638;
  double t4876;
  double t4899;
  double t4902;
  double t4935;
  double t4936;
  double t4957;
  double t5050;
  double t5053;
  double t5057;
  double t5036;
  double t5037;
  double t5042;
  double t5161;
  double t5242;
  double t5248;
  double t5264;
  double t5318;
  double t5326;
  double t5506;
  double t5525;
  double t5534;
  double t3869;
  double t3906;
  double t3910;
  double t13569;
  double t13570;
  double t13571;
  double t13731;
  double t13732;
  double t13733;
  double t13736;
  double t13739;
  double t13740;
  double t14117;
  double t14122;
  double t14123;
  double t14373;
  double t14377;
  double t14378;
  double t14384;
  double t14385;
  double t14386;
  double t14388;
  double t14389;
  double t14390;
  double t5062;
  double t17066;
  double t17148;
  double t17366;
  double t17391;
  double t17415;
  double t17867;
  double t17869;
  double t17874;
  double t18192;
  double t18319;
  double t18330;
  double t17604;
  double t17606;
  double t17607;
  double t18474;
  double t18478;
  double t18480;
  double t18547;
  double t18560;
  double t18564;
  double t18575;
  double t18582;
  double t18583;
  double t18628;
  double t18630;
  double t18640;
  double t14137;
  double t14141;
  double t14142;
  double t13781;
  t2139 = Sin(var1[15]);
  t1379 = Sin(var1[4]);
  t24 = Cos(var1[15]);
  t1940 = Cos(var1[4]);
  t2185 = Sin(var1[5]);
  t2236 = Sin(var1[16]);
  t2243 = -1.*t2139*t1379;
  t2264 = t24*t1940*t2185;
  t2272 = t2243 + t2264;
  t2339 = Cos(var1[17]);
  t2402 = Cos(var1[16]);
  t2439 = Sin(var1[17]);
  t2770 = Cos(var1[5]);
  t2355 = -1.*t2339;
  t2386 = 1. + t2355;
  t2800 = t1940*t2770*t2139*t2236;
  t2804 = -1.*t2402*t1940*t2185;
  t2805 = t2800 + t2804;
  t2813 = t2402*t1940*t2770*t2139;
  t2814 = t1940*t2236*t2185;
  t2816 = t2813 + t2814;
  t2450 = t24*t1379;
  t2457 = t1940*t2139*t2185;
  t2458 = t2450 + t2457;
  t2953 = -1.*t1940*t2770*t2236;
  t2965 = t2402*t2458;
  t2989 = t2953 + t2965;
  t3012 = -1.*t2402*t1940*t2770;
  t3014 = -1.*t2236*t2458;
  t3015 = t3012 + t3014;
  t3035 = t2402*t1940*t2770;
  t3036 = t2236*t2458;
  t3039 = t3035 + t3036;
  t2793 = -1.*t2402;
  t2794 = 1. + t2793;
  t2627 = -1.*t24;
  t2749 = 1. + t2627;
  t3233 = t24*t1940;
  t3234 = -1.*t2139*t1379*t2185;
  t3241 = t3233 + t3234;
  t3250 = t2770*t2236*t1379;
  t3251 = t2402*t3241;
  t3252 = t3250 + t3251;
  t3255 = -1.*t2402*t2770*t1379;
  t3269 = t2236*t3241;
  t3279 = t3255 + t3269;
  t3445 = Sin(var1[3]);
  t3543 = t24*t3445*t1379;
  t3545 = t1940*t2139*t3445*t2185;
  t3568 = t3543 + t3545;
  t3573 = -1.*t1940*t2770*t2236*t3445;
  t3587 = t2402*t3568;
  t3593 = t3573 + t3587;
  t3599 = t2402*t1940*t2770*t3445;
  t3617 = t2236*t3568;
  t3623 = t3599 + t3617;
  t3758 = Cos(var1[3]);
  t3761 = t3758*t2770;
  t3794 = -1.*t3445*t1379*t2185;
  t3795 = t3761 + t3794;
  t3800 = t1940*t2139*t3445;
  t3852 = -1.*t24*t3795;
  t3857 = t3800 + t3852;
  t4632 = -1.*t2770*t3445*t1379;
  t4634 = -1.*t3758*t2185;
  t4638 = t4632 + t4634;
  t4876 = -1.*t2139*t2236*t4638;
  t4899 = t2402*t3795;
  t4902 = t4876 + t4899;
  t4935 = -1.*t2402*t2139*t4638;
  t4936 = -1.*t2236*t3795;
  t4957 = t4935 + t4936;
  t5050 = -1.*t2770*t3445;
  t5053 = -1.*t3758*t1379*t2185;
  t5057 = t5050 + t5053;
  t5036 = t3758*t2770*t1379;
  t5037 = -1.*t3445*t2185;
  t5042 = t5036 + t5037;
  t5161 = -1.*t24*t3758*t1940;
  t5242 = -1.*t2139*t5057;
  t5248 = t5161 + t5242;
  t5264 = -1.*t2236*t5042;
  t5318 = t2402*t5248;
  t5326 = t5264 + t5318;
  t5506 = t2402*t5042;
  t5525 = t2236*t5248;
  t5534 = t5506 + t5525;
  t3869 = -1.*t24*t1940*t3445;
  t3906 = -1.*t2139*t3795;
  t3910 = t3869 + t3906;
  t13569 = t2770*t3445*t1379;
  t13570 = t3758*t2185;
  t13571 = t13569 + t13570;
  t13731 = -1.*t2236*t13571;
  t13732 = t2402*t3910;
  t13733 = t13731 + t13732;
  t13736 = -1.*t2402*t13571;
  t13739 = -1.*t2236*t3910;
  t13740 = t13736 + t13739;
  t14117 = t2402*t13571;
  t14122 = t2236*t3910;
  t14123 = t14117 + t14122;
  t14373 = -1.*t24*t3758*t1379;
  t14377 = -1.*t3758*t1940*t2139*t2185;
  t14378 = t14373 + t14377;
  t14384 = t3758*t1940*t2770*t2236;
  t14385 = t2402*t14378;
  t14386 = t14384 + t14385;
  t14388 = -1.*t2402*t3758*t1940*t2770;
  t14389 = t2236*t14378;
  t14390 = t14388 + t14389;
  t5062 = -1.*t3758*t1940*t2139;
  t17066 = t2770*t3445;
  t17148 = t3758*t1379*t2185;
  t17366 = t17066 + t17148;
  t17391 = -1.*t24*t17366;
  t17415 = t5062 + t17391;
  t17867 = -1.*t2139*t2236*t5042;
  t17869 = t2402*t17366;
  t17874 = t17867 + t17869;
  t18192 = -1.*t2402*t2139*t5042;
  t18319 = -1.*t2236*t17366;
  t18330 = t18192 + t18319;
  t17604 = t24*t3758*t1940;
  t17606 = -1.*t2139*t17366;
  t17607 = t17604 + t17606;
  t18474 = -1.*t3758*t2770*t1379;
  t18478 = t3445*t2185;
  t18480 = t18474 + t18478;
  t18547 = -1.*t2236*t18480;
  t18560 = t2402*t17607;
  t18564 = t18547 + t18560;
  t18575 = -1.*t2402*t18480;
  t18582 = -1.*t2236*t17607;
  t18583 = t18575 + t18582;
  t18628 = t2402*t18480;
  t18630 = t2236*t17607;
  t18640 = t18628 + t18630;
  t14137 = -1.*t2439*t13733;
  t14141 = t2339*t14123;
  t14142 = t14137 + t14141;
  t13781 = t2339*t13733;
  p_output1[0]=var2[0] + (0.1575*t1940*t2139 - 0.2255*(t1940*t2139 + t1379*t2185*t24) - 0.1575*t1379*t2185*t2749 + 0.325*t1379*t2770*t2794 + 0.325*t2236*t3241 - 0.575*t2439*t3252 - 0.575*t2386*t3279 - 0.295*(-1.*t2439*t3252 + t2339*t3279) - 0.0641*(t2339*t3252 + t2439*t3279))*var2[4] + (0.325*t1940*t2139*t2236*t2770 + 0.2255*t1940*t24*t2770 + 0.1575*t1940*t2749*t2770 + 0.325*t1940*t2185*t2794 - 0.575*t2386*t2805 - 0.575*t2439*t2816 - 0.0641*(t2439*t2805 + t2339*t2816) - 0.295*(t2339*t2805 - 1.*t2439*t2816))*var2[5] + (0.1575*t1940*t2139*t2185 + 0.325*t2236*t2272 - 0.575*t2236*t2272*t2386 + 0.1575*t1379*t24 - 0.575*t2272*t2402*t2439 - 0.0641*(t2272*t2339*t2402 + t2236*t2272*t2439) - 0.295*(t2236*t2272*t2339 - 1.*t2272*t2402*t2439) - 0.2255*t2458)*var2[15] + (0.325*t2402*t2458 - 0.325*t1940*t2236*t2770 - 0.575*t2386*t2989 - 0.575*t2439*t3015 - 0.0641*(t2439*t2989 + t2339*t3015) - 0.295*(t2339*t2989 - 1.*t2439*t3015))*var2[16] + (-0.575*t2339*t2989 - 0.575*t2439*t3039 - 0.0641*(-1.*t2439*t2989 + t2339*t3039) - 0.295*(-1.*t2339*t2989 - 1.*t2439*t3039))*var2[17];
  p_output1[1]=var2[1] + (-0.1575*t1940*t2139*t3758 - 0.325*t2794*t5042 - 0.1575*t2749*t5057 - 0.2255*(t24*t5057 + t5062) + 0.325*t2236*t5248 - 0.575*t2439*t5326 - 0.575*t2386*t5534 - 0.295*(-1.*t2439*t5326 + t2339*t5534) - 0.0641*(t2339*t5326 + t2439*t5534))*var2[3] + (0.1575*t1379*t2139*t3445 + 0.1575*t1940*t2185*t2749*t3445 - 0.325*t1940*t2770*t2794*t3445 - 0.2255*(t1379*t2139*t3445 - 1.*t1940*t2185*t24*t3445) + 0.325*t2236*t3568 - 0.575*t2439*t3593 - 0.575*t2386*t3623 - 0.295*(-1.*t2439*t3593 + t2339*t3623) - 0.0641*(t2339*t3593 + t2439*t3623))*var2[4] + (-0.325*t2794*t3795 - 0.325*t2139*t2236*t4638 - 0.2255*t24*t4638 - 0.1575*t2749*t4638 - 0.575*t2386*t4902 - 0.575*t2439*t4957 - 0.0641*(t2439*t4902 + t2339*t4957) - 0.295*(t2339*t4902 - 1.*t2439*t4957))*var2[5] + (-0.1575*t1940*t24*t3445 - 0.1575*t2139*t3795 + 0.325*t2236*t3857 - 0.575*t2236*t2386*t3857 - 0.575*t2402*t2439*t3857 - 0.0641*(t2339*t2402*t3857 + t2236*t2439*t3857) - 0.295*(t2236*t2339*t3857 - 1.*t2402*t2439*t3857) - 0.2255*t3910)*var2[15] + (-0.325*t13571*t2236 - 0.575*t13733*t2386 - 0.575*t13740*t2439 - 0.0641*(t13740*t2339 + t13733*t2439) - 0.295*(t13781 - 1.*t13740*t2439) + 0.325*t2402*t3910)*var2[16] + (-0.0641*t14142 - 0.575*t13733*t2339 - 0.575*t14123*t2439 - 0.295*(-1.*t13733*t2339 - 1.*t14123*t2439))*var2[17];
  p_output1[2]=var2[2] + (-0.295*t14142 - 0.575*t14123*t2386 - 0.575*t13733*t2439 - 0.0641*(t13781 + t14123*t2439) - 0.325*t13571*t2794 - 0.1575*t1940*t2139*t3445 - 0.1575*t2749*t3795 - 0.2255*(-1.*t1940*t2139*t3445 + t24*t3795) + 0.325*t2236*t3910)*var2[3] + (0.325*t14378*t2236 - 0.575*t14390*t2386 - 0.575*t14386*t2439 - 0.295*(t14390*t2339 - 1.*t14386*t2439) - 0.0641*(t14386*t2339 + t14390*t2439) - 0.1575*t1379*t2139*t3758 - 0.1575*t1940*t2185*t2749*t3758 + 0.325*t1940*t2770*t2794*t3758 - 0.2255*(-1.*t1379*t2139*t3758 + t1940*t2185*t24*t3758))*var2[4] + (-0.575*t17874*t2386 - 0.575*t18330*t2439 - 0.0641*(t18330*t2339 + t17874*t2439) - 0.295*(t17874*t2339 - 1.*t18330*t2439) - 0.325*t17366*t2794 - 0.325*t2139*t2236*t5042 - 0.2255*t24*t5042 - 0.1575*t2749*t5042)*var2[5] + (-0.2255*t17607 - 0.1575*t17366*t2139 + 0.325*t17415*t2236 - 0.575*t17415*t2236*t2386 - 0.575*t17415*t2402*t2439 - 0.0641*(t17415*t2339*t2402 + t17415*t2236*t2439) - 0.295*(t17415*t2236*t2339 - 1.*t17415*t2402*t2439) + 0.1575*t1940*t24*t3758)*var2[15] + (-0.325*t18480*t2236 - 0.575*t18564*t2386 + 0.325*t17607*t2402 - 0.575*t18583*t2439 - 0.0641*(t18583*t2339 + t18564*t2439) - 0.295*(t18564*t2339 - 1.*t18583*t2439))*var2[16] + (-0.575*t18564*t2339 - 0.575*t18640*t2439 - 0.0641*(t18640*t2339 - 1.*t18564*t2439) - 0.295*(-1.*t18564*t2339 - 1.*t18640*t2439))*var2[17];
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

#include "impact_velocity_RrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void impact_velocity_RrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
