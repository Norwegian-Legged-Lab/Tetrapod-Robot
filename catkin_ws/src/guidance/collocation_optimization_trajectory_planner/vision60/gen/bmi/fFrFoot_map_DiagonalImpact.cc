/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:11:12 GMT+02:00
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
  double t2459;
  double t2425;
  double t2449;
  double t2544;
  double t2457;
  double t2663;
  double t2667;
  double t2678;
  double t2684;
  double t2679;
  double t2680;
  double t2681;
  double t2685;
  double t2104;
  double t2677;
  double t2671;
  double t2682;
  double t2686;
  double t2752;
  double t2898;
  double t2892;
  double t2894;
  double t2896;
  double t2883;
  double t2903;
  double t2909;
  double t2910;
  double t3041;
  double t3047;
  double t3050;
  double t3059;
  double t3060;
  double t3065;
  double t3066;
  double t3067;
  double t3068;
  double t3036;
  double t3058;
  double t3069;
  double t3070;
  double t3075;
  double t3076;
  double t3077;
  double t3078;
  double t3084;
  double t3087;
  double t2969;
  double t2973;
  double t3034;
  double t3035;
  double t3072;
  double t3073;
  double t3100;
  double t3101;
  double t3102;
  double t3104;
  double t3105;
  double t3106;
  double t3092;
  double t3094;
  double t3096;
  double t3074;
  double t3088;
  double t3089;
  double t2950;
  double t2951;
  double t2953;
  double t3103;
  double t3107;
  double t3108;
  double t2949;
  double t2954;
  double t2960;
  double t2963;
  double t2964;
  double t2965;
  double t3117;
  double t3122;
  double t3123;
  double t3128;
  double t3129;
  double t3130;
  double t3091;
  double t3131;
  double t3150;
  double t3158;
  double t3114;
  double t3115;
  double t3116;
  double t2676;
  double t2761;
  double t2882;
  double t3135;
  double t3136;
  double t3142;
  double t3256;
  double t3270;
  double t3285;
  double t3280;
  double t3333;
  double t3327;
  double t3414;
  double t3422;
  double t3438;
  double t3450;
  t2459 = Cos(var1[13]);
  t2425 = Cos(var1[14]);
  t2449 = Sin(var1[13]);
  t2544 = Sin(var1[14]);
  t2457 = t2425*t2449;
  t2663 = -1.*t2459*t2544;
  t2667 = t2457 + t2663;
  t2678 = Cos(var1[5]);
  t2684 = Sin(var1[12]);
  t2679 = t2459*t2425;
  t2680 = t2449*t2544;
  t2681 = t2679 + t2680;
  t2685 = Sin(var1[5]);
  t2104 = Cos(var1[12]);
  t2677 = Cos(var1[4]);
  t2671 = Sin(var1[4]);
  t2682 = t2678*t2681;
  t2686 = t2684*t2667*t2685;
  t2752 = t2682 + t2686;
  t2898 = Sin(var1[3]);
  t2892 = -1.*t2678*t2684*t2667;
  t2894 = t2681*t2685;
  t2896 = t2892 + t2894;
  t2883 = Cos(var1[3]);
  t2903 = t2104*t2677*t2667;
  t2909 = -1.*t2671*t2752;
  t2910 = t2903 + t2909;
  t3041 = -0.0641*t2425;
  t3047 = -0.28*t2544;
  t3050 = t3041 + t3047;
  t3059 = -1.*t2425;
  t3060 = 1. + t3059;
  t3065 = 0.075*t3060;
  t3066 = 0.355*t2425;
  t3067 = -0.0641*t2544;
  t3068 = t3065 + t3066 + t3067;
  t3036 = -0.325*t2449;
  t3058 = t2459*t3050;
  t3069 = t2449*t3068;
  t3070 = t3036 + t3058 + t3069;
  t3075 = -1.*t2459;
  t3076 = 1. + t3075;
  t3077 = 0.325*t3076;
  t3078 = -1.*t2449*t3050;
  t3084 = t2459*t3068;
  t3087 = t3077 + t3078 + t3084;
  t2969 = -1.*t2104;
  t2973 = 1. + t2969;
  t3034 = -0.1575*t2973;
  t3035 = -0.2255*t2104;
  t3072 = -1.*t2684*t3070;
  t3073 = t3034 + t3035 + t3072;
  t3100 = -0.068*t2684;
  t3101 = t2104*t3070;
  t3102 = t3100 + t3101;
  t3104 = t2678*t3087;
  t3105 = -1.*t3073*t2685;
  t3106 = t3104 + t3105;
  t3092 = t2684*t2671;
  t3094 = -1.*t2104*t2677*t2685;
  t3096 = t3092 + t3094;
  t3074 = t2678*t3073;
  t3088 = t3087*t2685;
  t3089 = t3074 + t3088;
  t2950 = -1.*t2425*t2449;
  t2951 = t2459*t2544;
  t2953 = t2950 + t2951;
  t3103 = t3102*t2671;
  t3107 = t2677*t3106;
  t3108 = t3103 + t3107;
  t2949 = t2104*t2681*t2671;
  t2954 = t2678*t2953;
  t2960 = t2684*t2681*t2685;
  t2963 = t2954 + t2960;
  t2964 = t2677*t2963;
  t2965 = t2949 + t2964;
  t3117 = t2677*t3102;
  t3122 = -1.*t2671*t3106;
  t3123 = t3117 + t3122;
  t3128 = -1.*t2678*t2684*t2681;
  t3129 = t2953*t2685;
  t3130 = t3128 + t3129;
  t3091 = -1.*t2104*t2678*t3089;
  t3131 = t3089*t3130;
  t3150 = -1.*t2684*t3102;
  t3158 = t2104*t3102*t2681;
  t3114 = t2677*t2684;
  t3115 = t2104*t2671*t2685;
  t3116 = t3114 + t3115;
  t2676 = t2104*t2667*t2671;
  t2761 = t2677*t2752;
  t2882 = t2676 + t2761;
  t3135 = t2104*t2677*t2681;
  t3136 = -1.*t2671*t2963;
  t3142 = t3135 + t3136;
  t3256 = t3089*t2896;
  t3270 = -1.*t3089*t3130;
  t3285 = -1.*t2104*t3102*t2681;
  t3280 = t2104*t3102*t2667;
  t3333 = t3087*t2681;
  t3327 = -1.*t3087*t2953;
  t3414 = t2104*t2678*t3089;
  t3422 = -1.*t3089*t2896;
  t3438 = t2684*t3102;
  t3450 = -1.*t2104*t3102*t2667;
  p_output1[0]=t2882;
  p_output1[1]=t2883*t2896 - 1.*t2898*t2910;
  p_output1[2]=t2896*t2898 + t2883*t2910;
  p_output1[3]=t2965*(t3091 - 1.*t3096*t3108 - 1.*t3116*t3123) + t3096*(t2965*t3108 + t3131 + t3123*t3142);
  p_output1[4]=t3130*(t3091 + t2104*t2685*t3106 + t3150) + t2104*t2678*(t2963*t3106 + t3131 + t3158);
  p_output1[5]=t2104*t2681*(-1.*t2104*t3073 + t3150) + t2684*(-1.*t2681*t2684*t3073 + t2953*t3087 + t3158);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0.1575*t2667 + 0.2255*t2953;
  p_output1[13]=0.325*t2544 - 1.*t2425*t3050 - 1.*t2544*t3068;
  p_output1[14]=-0.0641;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t3096;
  p_output1[19]=t2104*t2678*t2883 - 1.*t2898*t3116;
  p_output1[20]=t2104*t2678*t2898 + t2883*t3116;
  p_output1[21]=t2965*(t2882*t3108 + t2910*t3123 + t3256) + t2882*(-1.*t2965*t3108 - 1.*t3123*t3142 + t3270);
  p_output1[22]=t3130*(t2752*t3106 + t3256 + t3280) + t2896*(-1.*t2963*t3106 + t3270 + t3285);
  p_output1[23]=t2104*t2667*(t2681*t2684*t3073 + t3285 + t3327) + t2104*t2681*(-1.*t2667*t2684*t3073 + t3280 + t3333);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=t2681*(-1.*t2681*t3070 + t3327) + t2953*(t2667*t3070 + t3333);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t2965;
  p_output1[37]=t2883*t3130 - 1.*t2898*t3142;
  p_output1[38]=t2898*t3130 + t2883*t3142;
  p_output1[39]=t2882*(t3096*t3108 + t3116*t3123 + t3414) + t3096*(-1.*t2882*t3108 - 1.*t2910*t3123 + t3422);
  p_output1[40]=t2896*(-1.*t2104*t2685*t3106 + t3414 + t3438) + t2104*t2678*(-1.*t2752*t3106 + t3422 + t3450);
  p_output1[41]=t2104*t2667*(t2104*t3073 + t3438) + t2684*(t2667*t2684*t3073 - 1.*t2681*t3087 + t3450);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.068*t2681;
  p_output1[49]=-0.325*t2425 - 1.*t2544*t3050 + t2425*t3068;
  p_output1[50]=-0.28;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fFrFoot_map_DiagonalImpact.hh"

namespace SymFunction
{

void fFrFoot_map_DiagonalImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
