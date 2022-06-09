/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:52:26 GMT+02:00
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
  double t629;
  double t2195;
  double t2100;
  double t2293;
  double t2305;
  double t2292;
  double t2309;
  double t2120;
  double t2327;
  double t2329;
  double t2330;
  double t2276;
  double t2322;
  double t2461;
  double t2507;
  double t2624;
  double t2126;
  double t2277;
  double t2278;
  double t2646;
  double t2643;
  double t2294;
  double t2310;
  double t2317;
  double t2331;
  double t2361;
  double t2420;
  double t2632;
  double t2633;
  double t2634;
  double t2648;
  double t2650;
  double t2651;
  double t2656;
  double t2657;
  double t2661;
  double t2664;
  double t2665;
  double t2666;
  double t2723;
  double t2724;
  double t2735;
  double t2764;
  double t2765;
  double t2767;
  double t2326;
  double t2425;
  double t2441;
  double t2793;
  double t2798;
  double t2803;
  double t2804;
  double t2807;
  double t2808;
  double t2811;
  double t2812;
  double t2815;
  double t2816;
  double t2817;
  double t2818;
  double t2820;
  double t2828;
  double t2829;
  double t2832;
  double t2799;
  double t2801;
  double t2802;
  double t2821;
  double t2824;
  double t2837;
  double t2838;
  double t2839;
  double t2840;
  double t2842;
  double t2843;
  double t2844;
  double t2825;
  double t2833;
  double t2834;
  double t2841;
  double t2845;
  double t2846;
  double t2848;
  double t2849;
  double t2850;
  double t2453;
  double t2639;
  double t2640;
  double t2835;
  double t2854;
  double t2861;
  double t2884;
  double t2940;
  double t2945;
  double t2989;
  double t2995;
  t629 = Cos(var1[4]);
  t2195 = Cos(var1[9]);
  t2100 = Cos(var1[5]);
  t2293 = Cos(var1[11]);
  t2305 = Sin(var1[10]);
  t2292 = Cos(var1[10]);
  t2309 = Sin(var1[11]);
  t2120 = Sin(var1[9]);
  t2327 = -1.*t2293*t2305;
  t2329 = t2292*t2309;
  t2330 = t2327 + t2329;
  t2276 = Sin(var1[5]);
  t2322 = Sin(var1[4]);
  t2461 = -1.*t2292*t2293;
  t2507 = -1.*t2305*t2309;
  t2624 = t2461 + t2507;
  t2126 = t2100*t2120;
  t2277 = t2195*t2276;
  t2278 = t2126 + t2277;
  t2646 = Cos(var1[3]);
  t2643 = Sin(var1[3]);
  t2294 = t2292*t2293;
  t2310 = t2305*t2309;
  t2317 = t2294 + t2310;
  t2331 = t2195*t2100*t2330;
  t2361 = -1.*t2120*t2330*t2276;
  t2420 = t2331 + t2361;
  t2632 = t2195*t2100*t2624;
  t2633 = -1.*t2120*t2624*t2276;
  t2634 = t2632 + t2633;
  t2648 = -1.*t2195*t2100;
  t2650 = t2120*t2276;
  t2651 = t2648 + t2650;
  t2656 = t2100*t2120*t2330;
  t2657 = t2195*t2330*t2276;
  t2661 = t2656 + t2657;
  t2664 = t629*t2317;
  t2665 = -1.*t2322*t2420;
  t2666 = t2664 + t2665;
  t2723 = t2100*t2120*t2624;
  t2724 = t2195*t2624*t2276;
  t2735 = t2723 + t2724;
  t2764 = t629*t2330;
  t2765 = -1.*t2322*t2634;
  t2767 = t2764 + t2765;
  t2326 = t2317*t2322;
  t2425 = t629*t2420;
  t2441 = t2326 + t2425;
  t2793 = -1.*t2195;
  t2798 = 1. + t2793;
  t2803 = -1.*t2292;
  t2804 = 1. + t2803;
  t2807 = -0.28121*t2804;
  t2808 = -1.*t2293;
  t2811 = 1. + t2808;
  t2812 = -0.50321*t2811;
  t2815 = -0.19821*t2293;
  t2816 = t2812 + t2815;
  t2817 = t2292*t2816;
  t2818 = 0.305*t2305*t2309;
  t2820 = t2807 + t2817 + t2818;
  t2828 = -0.15121*t2798;
  t2829 = t2195*t2820;
  t2832 = t2828 + t2829;
  t2799 = 0.15121*t2798;
  t2801 = 0.15121*t2195;
  t2802 = 0.15121*t2120;
  t2821 = t2120*t2820;
  t2824 = t2799 + t2801 + t2802 + t2821;
  t2837 = 0.28121*t2305;
  t2838 = t2816*t2305;
  t2839 = -0.305*t2292*t2309;
  t2840 = t2837 + t2838 + t2839;
  t2842 = t2100*t2832;
  t2843 = -1.*t2824*t2276;
  t2844 = t2842 + t2843;
  t2825 = t2100*t2824;
  t2833 = t2832*t2276;
  t2834 = t2825 + t2833;
  t2841 = t2840*t2322;
  t2845 = t629*t2844;
  t2846 = t2841 + t2845;
  t2848 = t629*t2840;
  t2849 = -1.*t2322*t2844;
  t2850 = t2848 + t2849;
  t2453 = t2330*t2322;
  t2639 = t629*t2634;
  t2640 = t2453 + t2639;
  t2835 = -1.*t2651*t2834;
  t2854 = t2661*t2834;
  t2861 = t2651*t2834;
  t2884 = -1.*t2735*t2834;
  t2940 = -1.*t2661*t2834;
  t2945 = t2735*t2834;
  t2989 = -1.*t2840*t2317;
  t2995 = t2840*t2330;
  p_output1[0]=t2640*var2[0] + t2278*t629*var2[1] + t2441*var2[2];
  p_output1[1]=(t2646*t2735 - 1.*t2643*t2767)*var2[0] + (t2278*t2322*t2643 + t2646*t2651)*var2[1] + (t2646*t2661 - 1.*t2643*t2666)*var2[2];
  p_output1[2]=(t2643*t2735 + t2646*t2767)*var2[0] + (-1.*t2278*t2322*t2646 + t2643*t2651)*var2[1] + (t2643*t2661 + t2646*t2666)*var2[2];
  p_output1[3]=(t2278*(t2441*t2846 + t2666*t2850 + t2854)*t629 + t2441*(t2835 + t2278*t2322*t2850 - 1.*t2278*t2846*t629))*var2[0] + (t2640*(-1.*t2441*t2846 - 1.*t2666*t2850 + t2940) + t2441*(t2640*t2846 + t2767*t2850 + t2945))*var2[1] + (t2278*(-1.*t2640*t2846 - 1.*t2767*t2850 + t2884)*t629 + t2640*(-1.*t2278*t2322*t2850 + t2861 + t2278*t2846*t629))*var2[2];
  p_output1[4]=(t2661*(t2835 - 1.*t2278*t2844) + t2651*(t2317*t2840 + t2420*t2844 + t2854))*var2[0] + (t2735*(-1.*t2420*t2844 + t2940 + t2989) + t2661*(t2634*t2844 + t2945 + t2995))*var2[1] + (t2735*(t2278*t2844 + t2861) + t2651*(-1.*t2330*t2840 - 1.*t2634*t2844 + t2884))*var2[2];
  p_output1[5]=t2317*(t2195*t2824 - 1.*t2120*t2832)*var2[0] + (t2330*(-1.*t2120*t2330*t2824 - 1.*t2195*t2330*t2832 + t2989) + t2317*(t2120*t2624*t2824 + t2195*t2624*t2832 + t2995))*var2[1] + t2330*(-1.*t2195*t2824 + t2120*t2832)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(0.15121*t2317 + 0.15121*t2624)*var2[0] + (-0.15121 + t2330*(-1.*t2330*t2820 + t2989) + t2317*(t2624*t2820 + t2995))*var2[1];
  p_output1[10]=(0.28121*t2309 - 0.305*t2293*t2309 + t2309*t2816)*var2[0] + (0.28121*t2293 + 0.305*Power(t2309,2) + t2293*t2816)*var2[2];
  p_output1[11]=-0.305*var2[2];
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
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

#include "fRlFoot_vec_DiagonalStance.hh"

namespace DiagonalStance
{

void fRlFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
