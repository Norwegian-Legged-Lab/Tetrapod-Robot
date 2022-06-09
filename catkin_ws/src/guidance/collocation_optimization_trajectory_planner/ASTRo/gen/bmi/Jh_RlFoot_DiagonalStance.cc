/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 17:58:26 GMT+02:00
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
  double t2680;
  double t2401;
  double t2618;
  double t2682;
  double t2813;
  double t2816;
  double t2817;
  double t2800;
  double t2806;
  double t2822;
  double t2805;
  double t2828;
  double t2698;
  double t2622;
  double t2688;
  double t2689;
  double t2818;
  double t2834;
  double t2844;
  double t2978;
  double t2854;
  double t2855;
  double t2860;
  double t2958;
  double t2884;
  double t2885;
  double t2886;
  double t2916;
  double t2924;
  double t2925;
  double t2959;
  double t2960;
  double t2963;
  double t2992;
  double t3000;
  double t3001;
  double t3007;
  double t3010;
  double t3011;
  double t3016;
  double t3029;
  double t3033;
  double t3035;
  double t3039;
  double t3040;
  double t2887;
  double t2926;
  double t2948;
  double t3062;
  double t3063;
  double t3071;
  double t3072;
  double t3073;
  double t3077;
  double t3082;
  double t3083;
  double t3084;
  double t3086;
  double t3087;
  double t3088;
  double t3089;
  double t3093;
  double t3094;
  double t3095;
  double t3064;
  double t3066;
  double t3070;
  double t3090;
  double t3091;
  double t3099;
  double t3100;
  double t3101;
  double t3102;
  double t3104;
  double t3105;
  double t3106;
  double t3092;
  double t3096;
  double t3097;
  double t3103;
  double t3107;
  double t3108;
  double t3110;
  double t3111;
  double t3112;
  double t2776;
  double t2846;
  double t2851;
  double t3098;
  double t3117;
  double t3124;
  double t3129;
  double t3135;
  double t3140;
  double t3156;
  double t3160;
  t2680 = Cos(var1[10]);
  t2401 = Cos(var1[11]);
  t2618 = Sin(var1[10]);
  t2682 = Sin(var1[11]);
  t2813 = -1.*t2680*t2401;
  t2816 = -1.*t2618*t2682;
  t2817 = t2813 + t2816;
  t2800 = Cos(var1[4]);
  t2806 = Cos(var1[5]);
  t2822 = Sin(var1[9]);
  t2805 = Cos(var1[9]);
  t2828 = Sin(var1[5]);
  t2698 = Sin(var1[4]);
  t2622 = -1.*t2401*t2618;
  t2688 = t2680*t2682;
  t2689 = t2622 + t2688;
  t2818 = t2805*t2806*t2817;
  t2834 = -1.*t2822*t2817*t2828;
  t2844 = t2818 + t2834;
  t2978 = Sin(var1[3]);
  t2854 = t2806*t2822;
  t2855 = t2805*t2828;
  t2860 = t2854 + t2855;
  t2958 = Cos(var1[3]);
  t2884 = t2680*t2401;
  t2885 = t2618*t2682;
  t2886 = t2884 + t2885;
  t2916 = t2805*t2806*t2689;
  t2924 = -1.*t2822*t2689*t2828;
  t2925 = t2916 + t2924;
  t2959 = t2806*t2822*t2817;
  t2960 = t2805*t2817*t2828;
  t2963 = t2959 + t2960;
  t2992 = t2800*t2689;
  t3000 = -1.*t2698*t2844;
  t3001 = t2992 + t3000;
  t3007 = -1.*t2805*t2806;
  t3010 = t2822*t2828;
  t3011 = t3007 + t3010;
  t3016 = t2806*t2822*t2689;
  t3029 = t2805*t2689*t2828;
  t3033 = t3016 + t3029;
  t3035 = t2800*t2886;
  t3039 = -1.*t2698*t2925;
  t3040 = t3035 + t3039;
  t2887 = t2886*t2698;
  t2926 = t2800*t2925;
  t2948 = t2887 + t2926;
  t3062 = -1.*t2805;
  t3063 = 1. + t3062;
  t3071 = -1.*t2680;
  t3072 = 1. + t3071;
  t3073 = -0.28121*t3072;
  t3077 = -1.*t2401;
  t3082 = 1. + t3077;
  t3083 = -0.50321*t3082;
  t3084 = -0.19821*t2401;
  t3086 = t3083 + t3084;
  t3087 = t2680*t3086;
  t3088 = 0.305*t2618*t2682;
  t3089 = t3073 + t3087 + t3088;
  t3093 = -0.15121*t3063;
  t3094 = t2805*t3089;
  t3095 = t3093 + t3094;
  t3064 = 0.15121*t3063;
  t3066 = 0.15121*t2805;
  t3070 = 0.15121*t2822;
  t3090 = t2822*t3089;
  t3091 = t3064 + t3066 + t3070 + t3090;
  t3099 = 0.28121*t2618;
  t3100 = t3086*t2618;
  t3101 = -0.305*t2680*t2682;
  t3102 = t3099 + t3100 + t3101;
  t3104 = t2806*t3095;
  t3105 = -1.*t3091*t2828;
  t3106 = t3104 + t3105;
  t3092 = t2806*t3091;
  t3096 = t3095*t2828;
  t3097 = t3092 + t3096;
  t3103 = t3102*t2698;
  t3107 = t2800*t3106;
  t3108 = t3103 + t3107;
  t3110 = t2800*t3102;
  t3111 = -1.*t2698*t3106;
  t3112 = t3110 + t3111;
  t2776 = t2689*t2698;
  t2846 = t2800*t2844;
  t2851 = t2776 + t2846;
  t3098 = -1.*t3011*t3097;
  t3117 = t3033*t3097;
  t3124 = -1.*t3033*t3097;
  t3129 = t2963*t3097;
  t3135 = t3011*t3097;
  t3140 = -1.*t2963*t3097;
  t3156 = -1.*t3102*t2886;
  t3160 = t3102*t2689;
  p_output1[0]=t2851;
  p_output1[1]=t2800*t2860;
  p_output1[2]=t2948;
  p_output1[3]=t2958*t2963 - 1.*t2978*t3001;
  p_output1[4]=t2698*t2860*t2978 + t2958*t3011;
  p_output1[5]=t2958*t3033 - 1.*t2978*t3040;
  p_output1[6]=t2963*t2978 + t2958*t3001;
  p_output1[7]=-1.*t2698*t2860*t2958 + t2978*t3011;
  p_output1[8]=t2978*t3033 + t2958*t3040;
  p_output1[9]=t2948*(t3098 - 1.*t2800*t2860*t3108 + t2698*t2860*t3112) + t2800*t2860*(t2948*t3108 + t3040*t3112 + t3117);
  p_output1[10]=t2851*(-1.*t2948*t3108 - 1.*t3040*t3112 + t3124) + t2948*(t2851*t3108 + t3001*t3112 + t3129);
  p_output1[11]=t2851*(t2800*t2860*t3108 - 1.*t2698*t2860*t3112 + t3135) + t2800*t2860*(-1.*t2851*t3108 - 1.*t3001*t3112 + t3140);
  p_output1[12]=t3033*(t3098 - 1.*t2860*t3106) + t3011*(t2886*t3102 + t2925*t3106 + t3117);
  p_output1[13]=t2963*(-1.*t2925*t3106 + t3124 + t3156) + t3033*(t2844*t3106 + t3129 + t3160);
  p_output1[14]=t2963*(t2860*t3106 + t3135) + t3011*(-1.*t2689*t3102 - 1.*t2844*t3106 + t3140);
  p_output1[15]=t2886*(t2805*t3091 - 1.*t2822*t3095);
  p_output1[16]=t2689*(-1.*t2689*t2822*t3091 - 1.*t2689*t2805*t3095 + t3156) + t2886*(t2817*t2822*t3091 + t2805*t2817*t3095 + t3160);
  p_output1[17]=t2689*(-1.*t2805*t3091 + t2822*t3095);
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0.15121*t2817 + 0.15121*t2886;
  p_output1[28]=-0.15121 + t2689*(-1.*t2689*t3089 + t3156) + t2886*(t2817*t3089 + t3160);
  p_output1[29]=0;
  p_output1[30]=0.28121*t2682 - 0.305*t2401*t2682 + t2682*t3086;
  p_output1[31]=0;
  p_output1[32]=0.28121*t2401 + 0.305*Power(t2682,2) + t2401*t3086;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=-0.305;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
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

#include "Jh_RlFoot_DiagonalStance.hh"

namespace SymFunction
{

void Jh_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
