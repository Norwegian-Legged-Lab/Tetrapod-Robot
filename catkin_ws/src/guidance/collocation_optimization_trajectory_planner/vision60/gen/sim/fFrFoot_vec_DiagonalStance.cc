/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:04:55 GMT+02:00
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
  double t2426;
  double t2424;
  double t2430;
  double t2715;
  double t2696;
  double t2698;
  double t2716;
  double t2413;
  double t2707;
  double t2720;
  double t2721;
  double t2431;
  double t2729;
  double t2731;
  double t2733;
  double t2726;
  double t2790;
  double t2793;
  double t2735;
  double t2738;
  double t2739;
  double t2746;
  double t2751;
  double t2755;
  double t2759;
  double t2761;
  double t2767;
  double t2803;
  double t2804;
  double t2808;
  double t2820;
  double t2822;
  double t2825;
  double t2827;
  double t2828;
  double t2830;
  double t2836;
  double t2838;
  double t2839;
  double t2863;
  double t2865;
  double t2868;
  double t2725;
  double t2740;
  double t2741;
  double t2931;
  double t2933;
  double t2934;
  double t2941;
  double t2944;
  double t2950;
  double t2952;
  double t2953;
  double t2955;
  double t2425;
  double t2432;
  double t2671;
  double t2930;
  double t2939;
  double t2960;
  double t2963;
  double t2972;
  double t2974;
  double t2976;
  double t2983;
  double t2986;
  double t2988;
  double t2913;
  double t2915;
  double t2923;
  double t2929;
  double t2967;
  double t2968;
  double t3005;
  double t3006;
  double t3007;
  double t3019;
  double t3023;
  double t3032;
  double t2971;
  double t2990;
  double t2993;
  double t3011;
  double t3033;
  double t3038;
  double t3047;
  double t3050;
  double t3051;
  double t2744;
  double t2773;
  double t2780;
  double t2995;
  double t3058;
  double t3101;
  double t3117;
  double t3144;
  double t3164;
  double t3284;
  double t3315;
  double t3195;
  double t3209;
  double t3242;
  double t3229;
  double t3399;
  double t3381;
  t2426 = Cos(var1[12]);
  t2424 = Sin(var1[4]);
  t2430 = Cos(var1[4]);
  t2715 = Cos(var1[13]);
  t2696 = Cos(var1[14]);
  t2698 = Sin(var1[13]);
  t2716 = Sin(var1[14]);
  t2413 = Sin(var1[12]);
  t2707 = t2696*t2698;
  t2720 = -1.*t2715*t2716;
  t2721 = t2707 + t2720;
  t2431 = Sin(var1[5]);
  t2729 = t2715*t2696;
  t2731 = t2698*t2716;
  t2733 = t2729 + t2731;
  t2726 = Cos(var1[5]);
  t2790 = Cos(var1[3]);
  t2793 = Sin(var1[3]);
  t2735 = t2726*t2733;
  t2738 = t2413*t2721*t2431;
  t2739 = t2735 + t2738;
  t2746 = -1.*t2696*t2698;
  t2751 = t2715*t2716;
  t2755 = t2746 + t2751;
  t2759 = t2726*t2755;
  t2761 = t2413*t2733*t2431;
  t2767 = t2759 + t2761;
  t2803 = t2430*t2413;
  t2804 = t2426*t2424*t2431;
  t2808 = t2803 + t2804;
  t2820 = -1.*t2726*t2413*t2721;
  t2822 = t2733*t2431;
  t2825 = t2820 + t2822;
  t2827 = t2426*t2430*t2721;
  t2828 = -1.*t2424*t2739;
  t2830 = t2827 + t2828;
  t2836 = -1.*t2726*t2413*t2733;
  t2838 = t2755*t2431;
  t2839 = t2836 + t2838;
  t2863 = t2426*t2430*t2733;
  t2865 = -1.*t2424*t2767;
  t2868 = t2863 + t2865;
  t2725 = t2426*t2721*t2424;
  t2740 = t2430*t2739;
  t2741 = t2725 + t2740;
  t2931 = -0.0641*t2696;
  t2933 = -0.28*t2716;
  t2934 = t2931 + t2933;
  t2941 = -1.*t2696;
  t2944 = 1. + t2941;
  t2950 = 0.075*t2944;
  t2952 = 0.355*t2696;
  t2953 = -0.0641*t2716;
  t2955 = t2950 + t2952 + t2953;
  t2425 = t2413*t2424;
  t2432 = -1.*t2426*t2430*t2431;
  t2671 = t2425 + t2432;
  t2930 = -0.325*t2698;
  t2939 = t2715*t2934;
  t2960 = t2698*t2955;
  t2963 = t2930 + t2939 + t2960;
  t2972 = -1.*t2715;
  t2974 = 1. + t2972;
  t2976 = 0.325*t2974;
  t2983 = -1.*t2698*t2934;
  t2986 = t2715*t2955;
  t2988 = t2976 + t2983 + t2986;
  t2913 = -1.*t2426;
  t2915 = 1. + t2913;
  t2923 = -0.1575*t2915;
  t2929 = -0.2255*t2426;
  t2967 = -1.*t2413*t2963;
  t2968 = t2923 + t2929 + t2967;
  t3005 = -0.068*t2413;
  t3006 = t2426*t2963;
  t3007 = t3005 + t3006;
  t3019 = t2726*t2988;
  t3023 = -1.*t2968*t2431;
  t3032 = t3019 + t3023;
  t2971 = t2726*t2968;
  t2990 = t2988*t2431;
  t2993 = t2971 + t2990;
  t3011 = t3007*t2424;
  t3033 = t2430*t3032;
  t3038 = t3011 + t3033;
  t3047 = t2430*t3007;
  t3050 = -1.*t2424*t3032;
  t3051 = t3047 + t3050;
  t2744 = t2426*t2733*t2424;
  t2773 = t2430*t2767;
  t2780 = t2744 + t2773;
  t2995 = t2426*t2726*t2993;
  t3058 = -1.*t2993*t2825;
  t3101 = t2993*t2825;
  t3117 = -1.*t2993*t2839;
  t3144 = -1.*t2426*t2726*t2993;
  t3164 = t2993*t2839;
  t3284 = -1.*t2413*t3007;
  t3315 = t2426*t3007*t2733;
  t3195 = t2413*t3007;
  t3209 = -1.*t2426*t3007*t2721;
  t3242 = -1.*t2426*t3007*t2733;
  t3229 = t2426*t3007*t2721;
  t3399 = t2988*t2733;
  t3381 = -1.*t2988*t2755;
  p_output1[0]=t2741*var2[0] + t2671*var2[1] + t2780*var2[2];
  p_output1[1]=(t2790*t2825 - 1.*t2793*t2830)*var2[0] + (t2426*t2726*t2790 - 1.*t2793*t2808)*var2[1] + (t2790*t2839 - 1.*t2793*t2868)*var2[2];
  p_output1[2]=(t2793*t2825 + t2790*t2830)*var2[0] + (t2426*t2726*t2793 + t2790*t2808)*var2[1] + (t2793*t2839 + t2790*t2868)*var2[2];
  p_output1[3]=(t2780*(-1.*t2671*t3038 - 1.*t2808*t3051 + t3144) + t2671*(t2780*t3038 + t2868*t3051 + t3164))*var2[0] + (t2780*(t2741*t3038 + t2830*t3051 + t3101) + t2741*(-1.*t2780*t3038 - 1.*t2868*t3051 + t3117))*var2[1] + (t2741*(t2995 + t2671*t3038 + t2808*t3051) + t2671*(-1.*t2741*t3038 - 1.*t2830*t3051 + t3058))*var2[2];
  p_output1[4]=(t2839*(t2426*t2431*t3032 + t3144 + t3284) + t2426*t2726*(t2767*t3032 + t3164 + t3315))*var2[0] + (t2839*(t2739*t3032 + t3101 + t3229) + t2825*(-1.*t2767*t3032 + t3117 + t3242))*var2[1] + (t2825*(t2995 - 1.*t2426*t2431*t3032 + t3195) + t2426*t2726*(-1.*t2739*t3032 + t3058 + t3209))*var2[2];
  p_output1[5]=(t2426*t2733*(-1.*t2426*t2968 + t3284) + t2413*(-1.*t2413*t2733*t2968 + t2755*t2988 + t3315))*var2[0] + (t2426*t2721*(t2413*t2733*t2968 + t3242 + t3381) + t2426*t2733*(-1.*t2413*t2721*t2968 + t3229 + t3399))*var2[1] + (t2426*t2721*(t2426*t2968 + t3195) + t2413*(t2413*t2721*t2968 - 1.*t2733*t2988 + t3209))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(0.1575*t2721 + 0.2255*t2755)*var2[0] + (t2733*(-1.*t2733*t2963 + t3381) + t2755*(t2721*t2963 + t3399))*var2[1] - 0.068*t2733*var2[2];
  p_output1[13]=(0.325*t2716 - 1.*t2696*t2934 - 1.*t2716*t2955)*var2[0] + (-0.325*t2696 - 1.*t2716*t2934 + t2696*t2955)*var2[2];
  p_output1[14]=-0.0641*var2[0] - 0.28*var2[2];
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

namespace SymFunction
{

void fFrFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
