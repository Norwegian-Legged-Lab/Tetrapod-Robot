/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:48:31 GMT+02:00
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
  double t13740;
  double t18480;
  double t24666;
  double t25710;
  double t24628;
  double t25069;
  double t25019;
  double t25997;
  double t26965;
  double t1328;
  double t26971;
  double t26989;
  double t26990;
  double t26999;
  double t24187;
  double t27021;
  double t27082;
  double t27100;
  double t27216;
  double t27230;
  double t27233;
  double t27260;
  double t27267;
  double t27318;
  double t27355;
  double t27358;
  double t27360;
  double t27361;
  double t27363;
  double t27375;
  double t27386;
  double t27442;
  double t27448;
  double t27452;
  double t27660;
  double t10870;
  double t11712;
  double t24440;
  double t24543;
  double t27684;
  double t27689;
  double t27692;
  double t27710;
  double t25659;
  double t25707;
  double t26068;
  double t26311;
  double t27730;
  double t28015;
  double t28703;
  double t29231;
  double t29262;
  double t29272;
  double t27268;
  double t27277;
  double t29288;
  double t29321;
  double t29326;
  double t27440;
  double t27441;
  double t29354;
  double t29356;
  double t29357;
  double t29455;
  double t29655;
  double t29681;
  double t29684;
  double t29693;
  double t29702;
  double t29780;
  double t29896;
  double t29901;
  t13740 = Cos(var1[4]);
  t18480 = Cos(var1[5]);
  t24666 = Sin(var1[4]);
  t25710 = Sin(var1[5]);
  t24628 = Sin(var1[9]);
  t25069 = Cos(var1[9]);
  t25019 = Sin(var1[15]);
  t25997 = Cos(var1[15]);
  t26965 = Sin(var1[10]);
  t1328 = Cos(var1[10]);
  t26971 = t25069*t24666;
  t26989 = t13740*t24628*t25710;
  t26990 = t26971 + t26989;
  t26999 = Sin(var1[16]);
  t24187 = Cos(var1[16]);
  t27021 = t25997*t24666;
  t27082 = t13740*t25019*t25710;
  t27100 = t27021 + t27082;
  t27216 = Sin(var1[11]);
  t27230 = -1.*t13740*t18480*t26965;
  t27233 = t1328*t26990;
  t27260 = t27230 + t27233;
  t27267 = Cos(var1[11]);
  t27318 = t1328*t13740*t18480;
  t27355 = t26965*t26990;
  t27358 = t27318 + t27355;
  t27360 = Sin(var1[17]);
  t27361 = -1.*t13740*t18480*t26999;
  t27363 = t24187*t27100;
  t27375 = t27361 + t27363;
  t27386 = Cos(var1[17]);
  t27442 = t24187*t13740*t18480;
  t27448 = t26999*t27100;
  t27452 = t27442 + t27448;
  t27660 = Sin(var1[3]);
  t10870 = -1.*t1328;
  t11712 = 1. + t10870;
  t24440 = -1.*t24187;
  t24543 = 1. + t24440;
  t27684 = t18480*t27660*t24666;
  t27689 = Cos(var1[3]);
  t27692 = t27689*t25710;
  t27710 = t27684 + t27692;
  t25659 = -1.*t25069;
  t25707 = 1. + t25659;
  t26068 = -1.*t25997;
  t26311 = 1. + t26068;
  t27730 = t27689*t18480;
  t28015 = -1.*t27660*t24666*t25710;
  t28703 = t27730 + t28015;
  t29231 = -1.*t25069*t13740*t27660;
  t29262 = -1.*t24628*t28703;
  t29272 = t29231 + t29262;
  t27268 = -1.*t27267;
  t27277 = 1. + t27268;
  t29288 = -1.*t25997*t13740*t27660;
  t29321 = -1.*t25019*t28703;
  t29326 = t29288 + t29321;
  t27440 = -1.*t27386;
  t27441 = 1. + t27440;
  t29354 = -1.*t26965*t27710;
  t29356 = t1328*t29272;
  t29357 = t29354 + t29356;
  t29455 = t1328*t27710;
  t29655 = t26965*t29272;
  t29681 = t29455 + t29655;
  t29684 = -1.*t26999*t27710;
  t29693 = t24187*t29326;
  t29702 = t29684 + t29693;
  t29780 = t24187*t27710;
  t29896 = t26999*t29326;
  t29901 = t29780 + t29896;
  p_output1[0]=-0.325*t11712*t13740*t18480 + 0.325*t13740*t18480*t24543 - 0.1575*t24628*t24666 - 0.1575*t24666*t25019 - 0.1575*t13740*t25707*t25710 + 0.2255*(t24628*t24666 - 1.*t13740*t25069*t25710) + 0.2255*(t24666*t25019 - 1.*t13740*t25710*t25997) - 0.1575*t13740*t25710*t26311 + 0.325*t26965*t26990 - 0.325*t26999*t27100 - 0.575*t27216*t27260 - 0.575*t27277*t27358 - 0.0641*(t27260*t27267 + t27216*t27358) - 0.295*(-1.*t27216*t27260 + t27267*t27358) + 0.575*t27360*t27375 + 0.575*t27441*t27452 + 0.0641*(t27375*t27386 + t27360*t27452) + 0.295*(-1.*t27360*t27375 + t27386*t27452);
  p_output1[1]=0.1575*t13740*t24628*t27660 + 0.1575*t13740*t25019*t27660 - 0.325*t11712*t27710 + 0.325*t24543*t27710 + 0.1575*t25707*t28703 + 0.1575*t26311*t28703 + 0.2255*(-1.*t13740*t24628*t27660 + t25069*t28703) + 0.2255*(-1.*t13740*t25019*t27660 + t25997*t28703) + 0.325*t26965*t29272 - 0.325*t26999*t29326 - 0.575*t27216*t29357 - 0.575*t27277*t29681 - 0.0641*(t27267*t29357 + t27216*t29681) - 0.295*(-1.*t27216*t29357 + t27267*t29681) + 0.575*t27360*t29702 + 0.575*t27441*t29901 + 0.0641*(t27386*t29702 + t27360*t29901) + 0.295*(-1.*t27360*t29702 + t27386*t29901);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 2, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "step_distance_rear_ParallelStance.hh"

namespace ParallelStance
{

void step_distance_rear_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
