/*
 * Automatically Generated from Mathematica.
 * Thu 28 Apr 2022 15:23:38 GMT+02:00
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
  double t1960;
  double t214;
  double t1936;
  double t1961;
  double t1949;
  double t1963;
  double t1964;
  double t2196;
  double t1980;
  double t39;
  double t2184;
  double t2197;
  double t2186;
  double t2187;
  double t2190;
  double t2185;
  double t2192;
  double t2198;
  double t2199;
  double t2413;
  double t2424;
  double t2375;
  double t2376;
  double t2391;
  double t2401;
  double t2405;
  double t2406;
  double t2415;
  double t2416;
  double t2417;
  double t2425;
  double t2426;
  double t2434;
  double t2457;
  double t2458;
  double t2655;
  double t2665;
  double t2666;
  double t2667;
  double t2670;
  double t2671;
  double t2672;
  double t2374;
  double t2407;
  double t2408;
  double t2694;
  double t2695;
  double t2696;
  double t2706;
  double t2707;
  double t2708;
  double t2709;
  double t2710;
  double t2711;
  double t2360;
  double t2364;
  double t2371;
  double t2691;
  double t2704;
  double t2713;
  double t2714;
  double t2718;
  double t2719;
  double t2720;
  double t2721;
  double t2725;
  double t2726;
  double t2685;
  double t2686;
  double t2687;
  double t2688;
  double t2715;
  double t2716;
  double t2733;
  double t2734;
  double t2735;
  double t2739;
  double t2740;
  double t2742;
  double t2717;
  double t2727;
  double t2730;
  double t2737;
  double t2743;
  double t2744;
  double t2751;
  double t2752;
  double t2753;
  double t2171;
  double t2200;
  double t2202;
  double t2731;
  double t2881;
  double t2899;
  double t2905;
  double t2915;
  double t2923;
  double t2930;
  double t2940;
  double t2953;
  double t2949;
  double t2964;
  double t2972;
  double t3058;
  double t3050;
  t1960 = Cos(var1[13]);
  t214 = Cos(var1[14]);
  t1936 = Sin(var1[13]);
  t1961 = Sin(var1[14]);
  t1949 = t214*t1936;
  t1963 = -1.*t1960*t1961;
  t1964 = t1949 + t1963;
  t2196 = Sin(var1[12]);
  t1980 = Sin(var1[4]);
  t39 = Cos(var1[12]);
  t2184 = Cos(var1[4]);
  t2197 = Sin(var1[5]);
  t2186 = t1960*t214;
  t2187 = t1936*t1961;
  t2190 = t2186 + t2187;
  t2185 = Cos(var1[5]);
  t2192 = t2185*t2190;
  t2198 = t2196*t1964*t2197;
  t2199 = t2192 + t2198;
  t2413 = Cos(var1[3]);
  t2424 = Sin(var1[3]);
  t2375 = -1.*t214*t1936;
  t2376 = t1960*t1961;
  t2391 = t2375 + t2376;
  t2401 = t2185*t2391;
  t2405 = t2196*t2190*t2197;
  t2406 = t2401 + t2405;
  t2415 = -1.*t2185*t2196*t1964;
  t2416 = t2190*t2197;
  t2417 = t2415 + t2416;
  t2425 = t39*t2184*t1964;
  t2426 = -1.*t1980*t2199;
  t2434 = t2425 + t2426;
  t2457 = t2184*t2196;
  t2458 = t39*t1980*t2197;
  t2655 = t2457 + t2458;
  t2665 = -1.*t2185*t2196*t2190;
  t2666 = t2391*t2197;
  t2667 = t2665 + t2666;
  t2670 = t39*t2184*t2190;
  t2671 = -1.*t1980*t2406;
  t2672 = t2670 + t2671;
  t2374 = t39*t2190*t1980;
  t2407 = t2184*t2406;
  t2408 = t2374 + t2407;
  t2694 = -0.0641*t214;
  t2695 = -0.28*t1961;
  t2696 = t2694 + t2695;
  t2706 = -1.*t214;
  t2707 = 1. + t2706;
  t2708 = 0.075*t2707;
  t2709 = 0.355*t214;
  t2710 = -0.0641*t1961;
  t2711 = t2708 + t2709 + t2710;
  t2360 = t2196*t1980;
  t2364 = -1.*t39*t2184*t2197;
  t2371 = t2360 + t2364;
  t2691 = -0.325*t1936;
  t2704 = t1960*t2696;
  t2713 = t1936*t2711;
  t2714 = t2691 + t2704 + t2713;
  t2718 = -1.*t1960;
  t2719 = 1. + t2718;
  t2720 = 0.325*t2719;
  t2721 = -1.*t1936*t2696;
  t2725 = t1960*t2711;
  t2726 = t2720 + t2721 + t2725;
  t2685 = -1.*t39;
  t2686 = 1. + t2685;
  t2687 = -0.1575*t2686;
  t2688 = -0.2255*t39;
  t2715 = -1.*t2196*t2714;
  t2716 = t2687 + t2688 + t2715;
  t2733 = -0.068*t2196;
  t2734 = t39*t2714;
  t2735 = t2733 + t2734;
  t2739 = t2185*t2726;
  t2740 = -1.*t2716*t2197;
  t2742 = t2739 + t2740;
  t2717 = t2185*t2716;
  t2727 = t2726*t2197;
  t2730 = t2717 + t2727;
  t2737 = t2735*t1980;
  t2743 = t2184*t2742;
  t2744 = t2737 + t2743;
  t2751 = t2184*t2735;
  t2752 = -1.*t1980*t2742;
  t2753 = t2751 + t2752;
  t2171 = t39*t1964*t1980;
  t2200 = t2184*t2199;
  t2202 = t2171 + t2200;
  t2731 = -1.*t39*t2185*t2730;
  t2881 = t2730*t2667;
  t2899 = t2730*t2417;
  t2905 = -1.*t2730*t2667;
  t2915 = t39*t2185*t2730;
  t2923 = -1.*t2730*t2417;
  t2930 = -1.*t2196*t2735;
  t2940 = t39*t2735*t2190;
  t2953 = -1.*t39*t2735*t2190;
  t2949 = t39*t2735*t1964;
  t2964 = t2196*t2735;
  t2972 = -1.*t39*t2735*t1964;
  t3058 = t2726*t2190;
  t3050 = -1.*t2726*t2391;
  p_output1[0]=t2202;
  p_output1[1]=t2371;
  p_output1[2]=t2408;
  p_output1[3]=t2413*t2417 - 1.*t2424*t2434;
  p_output1[4]=-1.*t2424*t2655 + t2185*t2413*t39;
  p_output1[5]=t2413*t2667 - 1.*t2424*t2672;
  p_output1[6]=t2417*t2424 + t2413*t2434;
  p_output1[7]=t2413*t2655 + t2185*t2424*t39;
  p_output1[8]=t2424*t2667 + t2413*t2672;
  p_output1[9]=t2408*(t2731 - 1.*t2371*t2744 - 1.*t2655*t2753) + t2371*(t2408*t2744 + t2672*t2753 + t2881);
  p_output1[10]=t2408*(t2202*t2744 + t2434*t2753 + t2899) + t2202*(-1.*t2408*t2744 - 1.*t2672*t2753 + t2905);
  p_output1[11]=t2202*(t2371*t2744 + t2655*t2753 + t2915) + t2371*(-1.*t2202*t2744 - 1.*t2434*t2753 + t2923);
  p_output1[12]=t2185*(t2406*t2742 + t2881 + t2940)*t39 + t2667*(t2731 + t2930 + t2197*t2742*t39);
  p_output1[13]=t2667*(t2199*t2742 + t2899 + t2949) + t2417*(-1.*t2406*t2742 + t2905 + t2953);
  p_output1[14]=t2185*(-1.*t2199*t2742 + t2923 + t2972)*t39 + t2417*(t2915 + t2964 - 1.*t2197*t2742*t39);
  p_output1[15]=t2196*(-1.*t2190*t2196*t2716 + t2391*t2726 + t2940) + t2190*t39*(t2930 - 1.*t2716*t39);
  p_output1[16]=t1964*(t2190*t2196*t2716 + t2953 + t3050)*t39 + t2190*(-1.*t1964*t2196*t2716 + t2949 + t3058)*t39;
  p_output1[17]=t2196*(t1964*t2196*t2716 - 1.*t2190*t2726 + t2972) + t1964*t39*(t2964 + t2716*t39);
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0.1575*t1964 + 0.2255*t2391;
  p_output1[37]=t2190*(-1.*t2190*t2714 + t3050) + t2391*(t1964*t2714 + t3058);
  p_output1[38]=-0.068*t2190;
  p_output1[39]=0.325*t1961 - 1.*t214*t2696 - 1.*t1961*t2711;
  p_output1[40]=0;
  p_output1[41]=-0.325*t214 - 1.*t1961*t2696 + t214*t2711;
  p_output1[42]=-0.0641;
  p_output1[43]=0;
  p_output1[44]=-0.28;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jh_FrFoot_DiagonalStance.hh"

namespace SymFunction
{

void Jh_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
