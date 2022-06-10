/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:04:56 GMT+02:00
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
  double t2148;
  double t1352;
  double t1667;
  double t2204;
  double t2530;
  double t2533;
  double t2562;
  double t2528;
  double t2584;
  double t2522;
  double t2585;
  double t2512;
  double t1727;
  double t2212;
  double t2213;
  double t2226;
  double t2583;
  double t2589;
  double t2592;
  double t2646;
  double t2614;
  double t2617;
  double t2619;
  double t2604;
  double t2647;
  double t2648;
  double t2661;
  double t2803;
  double t2810;
  double t2812;
  double t2837;
  double t2841;
  double t2870;
  double t2871;
  double t2875;
  double t2884;
  double t2889;
  double t2896;
  double t2899;
  double t2911;
  double t2918;
  double t2936;
  double t2942;
  double t2823;
  double t2825;
  double t2921;
  double t2922;
  double t2973;
  double t2982;
  double t2985;
  double t2986;
  double t2991;
  double t2994;
  double t2995;
  double t3044;
  double t3105;
  double t3128;
  double t2933;
  double t2953;
  double t2962;
  double t2681;
  double t2698;
  double t2718;
  double t2731;
  double t2773;
  double t2775;
  double t2785;
  double t2792;
  double t2793;
  double t2999;
  double t3164;
  double t3199;
  double t3250;
  double t3314;
  double t3315;
  double t3329;
  double t3330;
  double t3336;
  double t2795;
  double t2801;
  double t2802;
  double t2972;
  double t3339;
  double t2228;
  double t2596;
  double t2601;
  double t3344;
  double t3345;
  double t3350;
  double t3652;
  double t3708;
  double t3763;
  double t3853;
  double t4331;
  double t4390;
  t2148 = Cos(var1[16]);
  t1352 = Cos(var1[17]);
  t1667 = Sin(var1[16]);
  t2204 = Sin(var1[17]);
  t2530 = -1.*t2148*t1352;
  t2533 = -1.*t1667*t2204;
  t2562 = t2530 + t2533;
  t2528 = Cos(var1[5]);
  t2584 = Sin(var1[15]);
  t2522 = Cos(var1[15]);
  t2585 = Sin(var1[5]);
  t2512 = Cos(var1[4]);
  t1727 = -1.*t1352*t1667;
  t2212 = t2148*t2204;
  t2213 = t1727 + t2212;
  t2226 = Sin(var1[4]);
  t2583 = t2522*t2528*t2562;
  t2589 = -1.*t2584*t2562*t2585;
  t2592 = t2583 + t2589;
  t2646 = Sin(var1[3]);
  t2614 = t2528*t2584*t2562;
  t2617 = t2522*t2562*t2585;
  t2619 = t2614 + t2617;
  t2604 = Cos(var1[3]);
  t2647 = t2512*t2213;
  t2648 = -1.*t2226*t2592;
  t2661 = t2647 + t2648;
  t2803 = -1.*t2522;
  t2810 = 1. + t2803;
  t2812 = -0.15121*t2810;
  t2837 = -1.*t2148;
  t2841 = 1. + t2837;
  t2870 = -0.28121*t2841;
  t2871 = -1.*t1352;
  t2875 = 1. + t2871;
  t2884 = -0.50321*t2875;
  t2889 = -0.19821*t1352;
  t2896 = t2884 + t2889;
  t2899 = t2148*t2896;
  t2911 = 0.305*t1667*t2204;
  t2918 = t2870 + t2899 + t2911;
  t2936 = t2522*t2918;
  t2942 = t2812 + t2936;
  t2823 = -0.15121*t2522;
  t2825 = 0.15121*t2584;
  t2921 = t2584*t2918;
  t2922 = t2812 + t2823 + t2825 + t2921;
  t2973 = t2528*t2584;
  t2982 = t2522*t2585;
  t2985 = t2973 + t2982;
  t2986 = 0.28121*t1667;
  t2991 = t2896*t1667;
  t2994 = -0.305*t2148*t2204;
  t2995 = t2986 + t2991 + t2994;
  t3044 = t2528*t2942;
  t3105 = -1.*t2922*t2585;
  t3128 = t3044 + t3105;
  t2933 = t2528*t2922;
  t2953 = t2942*t2585;
  t2962 = t2933 + t2953;
  t2681 = t2148*t1352;
  t2698 = t1667*t2204;
  t2718 = t2681 + t2698;
  t2731 = t2718*t2226;
  t2773 = t2522*t2528*t2213;
  t2775 = -1.*t2584*t2213*t2585;
  t2785 = t2773 + t2775;
  t2792 = t2512*t2785;
  t2793 = t2731 + t2792;
  t2999 = t2995*t2226;
  t3164 = t2512*t3128;
  t3199 = t2999 + t3164;
  t3250 = t2512*t2995;
  t3314 = -1.*t2226*t3128;
  t3315 = t3250 + t3314;
  t3329 = t2528*t2584*t2213;
  t3330 = t2522*t2213*t2585;
  t3336 = t3329 + t3330;
  t2795 = -1.*t2522*t2528;
  t2801 = t2584*t2585;
  t2802 = t2795 + t2801;
  t2972 = -1.*t2802*t2962;
  t3339 = t3336*t2962;
  t2228 = t2213*t2226;
  t2596 = t2512*t2592;
  t2601 = t2228 + t2596;
  t3344 = t2512*t2718;
  t3345 = -1.*t2226*t2785;
  t3350 = t3344 + t3345;
  t3652 = -1.*t3336*t2962;
  t3708 = t2619*t2962;
  t3763 = -1.*t2995*t2718;
  t3853 = t2995*t2213;
  t4331 = t2802*t2962;
  t4390 = -1.*t2619*t2962;
  p_output1[0]=t2601;
  p_output1[1]=t2604*t2619 - 1.*t2646*t2661;
  p_output1[2]=t2619*t2646 + t2604*t2661;
  p_output1[3]=t2793*(t2972 - 1.*t2512*t2985*t3199 + t2226*t2985*t3315) + t2512*t2985*(t2793*t3199 + t3339 + t3315*t3350);
  p_output1[4]=(t2972 - 1.*t2985*t3128)*t3336 + t2802*(t2718*t2995 + t2785*t3128 + t3339);
  p_output1[5]=t2718*(t2522*t2922 - 1.*t2584*t2942);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=-0.15121*t2562 - 0.15121*t2718;
  p_output1[16]=0.28121*t2204 - 0.305*t1352*t2204 + t2204*t2896;
  p_output1[17]=0;
  p_output1[18]=t2512*t2985;
  p_output1[19]=t2604*t2802 + t2226*t2646*t2985;
  p_output1[20]=t2646*t2802 - 1.*t2226*t2604*t2985;
  p_output1[21]=t2601*(-1.*t2793*t3199 - 1.*t3315*t3350 + t3652) + t2793*(t2601*t3199 + t2661*t3315 + t3708);
  p_output1[22]=t2619*(-1.*t2785*t3128 + t3652 + t3763) + t3336*(t2592*t3128 + t3708 + t3853);
  p_output1[23]=t2213*(-1.*t2213*t2584*t2922 - 1.*t2213*t2522*t2942 + t3763) + t2718*(t2562*t2584*t2922 + t2522*t2562*t2942 + t3853);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=-0.15121 + t2213*(-1.*t2213*t2918 + t3763) + t2718*(t2562*t2918 + t3853);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t2793;
  p_output1[37]=t2604*t3336 - 1.*t2646*t3350;
  p_output1[38]=t2646*t3336 + t2604*t3350;
  p_output1[39]=t2601*(t2512*t2985*t3199 - 1.*t2226*t2985*t3315 + t4331) + t2512*t2985*(-1.*t2601*t3199 - 1.*t2661*t3315 + t4390);
  p_output1[40]=t2619*(t2985*t3128 + t4331) + t2802*(-1.*t2213*t2995 - 1.*t2592*t3128 + t4390);
  p_output1[41]=t2213*(-1.*t2522*t2922 + t2584*t2942);
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
  p_output1[52]=0.28121*t1352 + 0.305*Power(t2204,2) + t1352*t2896;
  p_output1[53]=-0.305;
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

#include "fRrFoot_map_DiagonalStance2.hh"

namespace SymFunction
{

void fRrFoot_map_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
