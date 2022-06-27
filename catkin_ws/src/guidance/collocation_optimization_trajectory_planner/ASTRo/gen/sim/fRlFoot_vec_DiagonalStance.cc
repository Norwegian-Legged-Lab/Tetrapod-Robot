/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:20:21 GMT+02:00
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
  double t54;
  double t769;
  double t665;
  double t2682;
  double t2689;
  double t2680;
  double t2698;
  double t731;
  double t2813;
  double t2816;
  double t2817;
  double t988;
  double t2805;
  double t2854;
  double t2855;
  double t2860;
  double t751;
  double t2401;
  double t2618;
  double t2958;
  double t2926;
  double t2688;
  double t2776;
  double t2800;
  double t2818;
  double t2822;
  double t2828;
  double t2884;
  double t2885;
  double t2886;
  double t2959;
  double t2960;
  double t2963;
  double t3001;
  double t3007;
  double t3010;
  double t3016;
  double t3029;
  double t3033;
  double t3062;
  double t3063;
  double t3064;
  double t3070;
  double t3071;
  double t3072;
  double t2806;
  double t2834;
  double t2844;
  double t3098;
  double t3099;
  double t3103;
  double t3104;
  double t3105;
  double t3106;
  double t3107;
  double t3108;
  double t3110;
  double t3111;
  double t3112;
  double t3117;
  double t3124;
  double t3156;
  double t3160;
  double t4242;
  double t3100;
  double t3101;
  double t3102;
  double t3129;
  double t3135;
  double t4342;
  double t4343;
  double t4344;
  double t4353;
  double t4369;
  double t4371;
  double t4422;
  double t3140;
  double t4314;
  double t4315;
  double t4368;
  double t4441;
  double t4442;
  double t4462;
  double t4467;
  double t4472;
  double t2851;
  double t2887;
  double t2916;
  double t4322;
  double t4747;
  double t4977;
  double t7189;
  double t8567;
  double t8841;
  double t11245;
  double t11600;
  t54 = Cos(var1[4]);
  t769 = Cos(var1[9]);
  t665 = Cos(var1[5]);
  t2682 = Cos(var1[11]);
  t2689 = Sin(var1[10]);
  t2680 = Cos(var1[10]);
  t2698 = Sin(var1[11]);
  t731 = Sin(var1[9]);
  t2813 = -1.*t2682*t2689;
  t2816 = t2680*t2698;
  t2817 = t2813 + t2816;
  t988 = Sin(var1[5]);
  t2805 = Sin(var1[4]);
  t2854 = -1.*t2680*t2682;
  t2855 = -1.*t2689*t2698;
  t2860 = t2854 + t2855;
  t751 = t665*t731;
  t2401 = t769*t988;
  t2618 = t751 + t2401;
  t2958 = Cos(var1[3]);
  t2926 = Sin(var1[3]);
  t2688 = t2680*t2682;
  t2776 = t2689*t2698;
  t2800 = t2688 + t2776;
  t2818 = t769*t665*t2817;
  t2822 = -1.*t731*t2817*t988;
  t2828 = t2818 + t2822;
  t2884 = t769*t665*t2860;
  t2885 = -1.*t731*t2860*t988;
  t2886 = t2884 + t2885;
  t2959 = -1.*t769*t665;
  t2960 = t731*t988;
  t2963 = t2959 + t2960;
  t3001 = t665*t731*t2817;
  t3007 = t769*t2817*t988;
  t3010 = t3001 + t3007;
  t3016 = t54*t2800;
  t3029 = -1.*t2805*t2828;
  t3033 = t3016 + t3029;
  t3062 = t665*t731*t2860;
  t3063 = t769*t2860*t988;
  t3064 = t3062 + t3063;
  t3070 = t54*t2817;
  t3071 = -1.*t2805*t2886;
  t3072 = t3070 + t3071;
  t2806 = t2800*t2805;
  t2834 = t54*t2828;
  t2844 = t2806 + t2834;
  t3098 = -1.*t769;
  t3099 = 1. + t3098;
  t3103 = -1.*t2680;
  t3104 = 1. + t3103;
  t3105 = -0.28121*t3104;
  t3106 = -1.*t2682;
  t3107 = 1. + t3106;
  t3108 = -0.50321*t3107;
  t3110 = -0.19821*t2682;
  t3111 = t3108 + t3110;
  t3112 = t2680*t3111;
  t3117 = 0.305*t2689*t2698;
  t3124 = t3105 + t3112 + t3117;
  t3156 = -0.15121*t3099;
  t3160 = t769*t3124;
  t4242 = t3156 + t3160;
  t3100 = 0.15121*t3099;
  t3101 = 0.15121*t769;
  t3102 = 0.15121*t731;
  t3129 = t731*t3124;
  t3135 = t3100 + t3101 + t3102 + t3129;
  t4342 = 0.28121*t2689;
  t4343 = t3111*t2689;
  t4344 = -0.305*t2680*t2698;
  t4353 = t4342 + t4343 + t4344;
  t4369 = t665*t4242;
  t4371 = -1.*t3135*t988;
  t4422 = t4369 + t4371;
  t3140 = t665*t3135;
  t4314 = t4242*t988;
  t4315 = t3140 + t4314;
  t4368 = t4353*t2805;
  t4441 = t54*t4422;
  t4442 = t4368 + t4441;
  t4462 = t54*t4353;
  t4467 = -1.*t2805*t4422;
  t4472 = t4462 + t4467;
  t2851 = t2817*t2805;
  t2887 = t54*t2886;
  t2916 = t2851 + t2887;
  t4322 = -1.*t2963*t4315;
  t4747 = t3010*t4315;
  t4977 = t2963*t4315;
  t7189 = -1.*t3064*t4315;
  t8567 = -1.*t3010*t4315;
  t8841 = t3064*t4315;
  t11245 = -1.*t4353*t2800;
  t11600 = t4353*t2817;
  p_output1[0]=t2916*var2[0] + t2618*t54*var2[1] + t2844*var2[2];
  p_output1[1]=(t2958*t3064 - 1.*t2926*t3072)*var2[0] + (t2618*t2805*t2926 + t2958*t2963)*var2[1] + (t2958*t3010 - 1.*t2926*t3033)*var2[2];
  p_output1[2]=(t2926*t3064 + t2958*t3072)*var2[0] + (-1.*t2618*t2805*t2958 + t2926*t2963)*var2[1] + (t2926*t3010 + t2958*t3033)*var2[2];
  p_output1[3]=(t2618*(t2844*t4442 + t3033*t4472 + t4747)*t54 + t2844*(t4322 + t2618*t2805*t4472 - 1.*t2618*t4442*t54))*var2[0] + (t2916*(-1.*t2844*t4442 - 1.*t3033*t4472 + t8567) + t2844*(t2916*t4442 + t3072*t4472 + t8841))*var2[1] + (t2916*(-1.*t2618*t2805*t4472 + t4977 + t2618*t4442*t54) + t2618*t54*(-1.*t2916*t4442 - 1.*t3072*t4472 + t7189))*var2[2];
  p_output1[4]=(t3010*(t4322 - 1.*t2618*t4422) + t2963*(t2800*t4353 + t2828*t4422 + t4747))*var2[0] + (t3064*(t11245 - 1.*t2828*t4422 + t8567) + t3010*(t11600 + t2886*t4422 + t8841))*var2[1] + (t3064*(t2618*t4422 + t4977) + t2963*(-1.*t2817*t4353 - 1.*t2886*t4422 + t7189))*var2[2];
  p_output1[5]=t2800*(-1.*t4242*t731 + t3135*t769)*var2[0] + (t2817*(t11245 - 1.*t2817*t3135*t731 - 1.*t2817*t4242*t769) + t2800*(t11600 + t2860*t3135*t731 + t2860*t4242*t769))*var2[1] + t2817*(t4242*t731 - 1.*t3135*t769)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(0.15121*t2800 + 0.15121*t2860)*var2[0] + (-0.15121 + t2817*(t11245 - 1.*t2817*t3124) + t2800*(t11600 + t2860*t3124))*var2[1];
  p_output1[10]=(0.28121*t2698 - 0.305*t2682*t2698 + t2698*t3111)*var2[0] + (0.28121*t2682 + 0.305*Power(t2698,2) + t2682*t3111)*var2[2];
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

namespace SymFunction
{

void fRlFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
