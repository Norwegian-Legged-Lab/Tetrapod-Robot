/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:41:26 GMT+02:00
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
  double t2534;
  double t3551;
  double t3251;
  double t4005;
  double t4700;
  double t3964;
  double t5251;
  double t3253;
  double t44218;
  double t44220;
  double t47110;
  double t3567;
  double t39015;
  double t49945;
  double t49946;
  double t50152;
  double t3401;
  double t3819;
  double t3836;
  double t51046;
  double t51043;
  double t4018;
  double t20740;
  double t29940;
  double t47384;
  double t47385;
  double t47400;
  double t50260;
  double t50700;
  double t50796;
  double t51047;
  double t51048;
  double t51055;
  double t51418;
  double t51444;
  double t51938;
  double t52439;
  double t52453;
  double t52469;
  double t52478;
  double t52491;
  double t52497;
  double t52506;
  double t52507;
  double t52518;
  double t39017;
  double t47468;
  double t47469;
  double t53321;
  double t53355;
  double t53375;
  double t53427;
  double t53446;
  double t53537;
  double t53554;
  double t53574;
  double t53591;
  double t53879;
  double t53901;
  double t53902;
  double t53940;
  double t53963;
  double t53982;
  double t53985;
  double t53392;
  double t53410;
  double t53964;
  double t53973;
  double t53996;
  double t54002;
  double t54003;
  double t54004;
  double t54022;
  double t54023;
  double t54029;
  double t53977;
  double t53991;
  double t53992;
  double t54018;
  double t54052;
  double t54068;
  double t54084;
  double t54085;
  double t54086;
  double t49924;
  double t51017;
  double t51023;
  double t53995;
  double t54095;
  double t54162;
  double t54185;
  double t54212;
  double t54221;
  double t54261;
  double t54265;
  t2534 = Cos(var1[4]);
  t3551 = Cos(var1[15]);
  t3251 = Cos(var1[5]);
  t4005 = Cos(var1[17]);
  t4700 = Sin(var1[16]);
  t3964 = Cos(var1[16]);
  t5251 = Sin(var1[17]);
  t3253 = Sin(var1[15]);
  t44218 = -1.*t4005*t4700;
  t44220 = t3964*t5251;
  t47110 = t44218 + t44220;
  t3567 = Sin(var1[5]);
  t39015 = Sin(var1[4]);
  t49945 = -1.*t3964*t4005;
  t49946 = -1.*t4700*t5251;
  t50152 = t49945 + t49946;
  t3401 = t3251*t3253;
  t3819 = t3551*t3567;
  t3836 = t3401 + t3819;
  t51046 = Cos(var1[3]);
  t51043 = Sin(var1[3]);
  t4018 = t3964*t4005;
  t20740 = t4700*t5251;
  t29940 = t4018 + t20740;
  t47384 = t3551*t3251*t47110;
  t47385 = -1.*t3253*t47110*t3567;
  t47400 = t47384 + t47385;
  t50260 = t3551*t3251*t50152;
  t50700 = -1.*t3253*t50152*t3567;
  t50796 = t50260 + t50700;
  t51047 = -1.*t3551*t3251;
  t51048 = t3253*t3567;
  t51055 = t51047 + t51048;
  t51418 = t3251*t3253*t47110;
  t51444 = t3551*t47110*t3567;
  t51938 = t51418 + t51444;
  t52439 = t2534*t29940;
  t52453 = -1.*t39015*t47400;
  t52469 = t52439 + t52453;
  t52478 = t3251*t3253*t50152;
  t52491 = t3551*t50152*t3567;
  t52497 = t52478 + t52491;
  t52506 = t2534*t47110;
  t52507 = -1.*t39015*t50796;
  t52518 = t52506 + t52507;
  t39017 = t29940*t39015;
  t47468 = t2534*t47400;
  t47469 = t39017 + t47468;
  t53321 = -1.*t3551;
  t53355 = 1. + t53321;
  t53375 = -0.15121*t53355;
  t53427 = -1.*t3964;
  t53446 = 1. + t53427;
  t53537 = -0.28121*t53446;
  t53554 = -1.*t4005;
  t53574 = 1. + t53554;
  t53591 = -0.50321*t53574;
  t53879 = -0.23321*t4005;
  t53901 = t53591 + t53879;
  t53902 = t3964*t53901;
  t53940 = 0.27*t4700*t5251;
  t53963 = t53537 + t53902 + t53940;
  t53982 = t3551*t53963;
  t53985 = t53375 + t53982;
  t53392 = -0.15121*t3551;
  t53410 = 0.15121*t3253;
  t53964 = t3253*t53963;
  t53973 = t53375 + t53392 + t53410 + t53964;
  t53996 = 0.28121*t4700;
  t54002 = t53901*t4700;
  t54003 = -0.27*t3964*t5251;
  t54004 = t53996 + t54002 + t54003;
  t54022 = t3251*t53985;
  t54023 = -1.*t53973*t3567;
  t54029 = t54022 + t54023;
  t53977 = t3251*t53973;
  t53991 = t53985*t3567;
  t53992 = t53977 + t53991;
  t54018 = t54004*t39015;
  t54052 = t2534*t54029;
  t54068 = t54018 + t54052;
  t54084 = t2534*t54004;
  t54085 = -1.*t39015*t54029;
  t54086 = t54084 + t54085;
  t49924 = t47110*t39015;
  t51017 = t2534*t50796;
  t51023 = t49924 + t51017;
  t53995 = -1.*t51055*t53992;
  t54095 = t51938*t53992;
  t54162 = t51055*t53992;
  t54185 = -1.*t52497*t53992;
  t54212 = -1.*t51938*t53992;
  t54221 = t52497*t53992;
  t54261 = -1.*t54004*t29940;
  t54265 = t54004*t47110;
  p_output1[0]=t51023*var2[0] + t2534*t3836*var2[1] + t47469*var2[2];
  p_output1[1]=(t51046*t52497 - 1.*t51043*t52518)*var2[0] + (t3836*t39015*t51043 + t51046*t51055)*var2[1] + (t51046*t51938 - 1.*t51043*t52469)*var2[2];
  p_output1[2]=(t51043*t52497 + t51046*t52518)*var2[0] + (-1.*t3836*t39015*t51046 + t51043*t51055)*var2[1] + (t51043*t51938 + t51046*t52469)*var2[2];
  p_output1[3]=(t47469*(t53995 - 1.*t2534*t3836*t54068 + t3836*t39015*t54086) + t2534*t3836*(t47469*t54068 + t52469*t54086 + t54095))*var2[0] + (t51023*(-1.*t47469*t54068 - 1.*t52469*t54086 + t54212) + t47469*(t51023*t54068 + t52518*t54086 + t54221))*var2[1] + (t51023*(t2534*t3836*t54068 - 1.*t3836*t39015*t54086 + t54162) + t2534*t3836*(-1.*t51023*t54068 - 1.*t52518*t54086 + t54185))*var2[2];
  p_output1[4]=(t51938*(t53995 - 1.*t3836*t54029) + t51055*(t29940*t54004 + t47400*t54029 + t54095))*var2[0] + (t52497*(-1.*t47400*t54029 + t54212 + t54261) + t51938*(t50796*t54029 + t54221 + t54265))*var2[1] + (t52497*(t3836*t54029 + t54162) + t51055*(-1.*t47110*t54004 - 1.*t50796*t54029 + t54185))*var2[2];
  p_output1[5]=t29940*(t3551*t53973 - 1.*t3253*t53985)*var2[0] + (t47110*(-1.*t3253*t47110*t53973 - 1.*t3551*t47110*t53985 + t54261) + t29940*(t3253*t50152*t53973 + t3551*t50152*t53985 + t54265))*var2[1] + t47110*(-1.*t3551*t53973 + t3253*t53985)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(-0.15121*t29940 - 0.15121*t50152)*var2[0] + (-0.15121 + t47110*(-1.*t47110*t53963 + t54261) + t29940*(t50152*t53963 + t54265))*var2[1];
  p_output1[16]=(0.28121*t5251 - 0.27*t4005*t5251 + t5251*t53901)*var2[0] + (0.28121*t4005 + 0.27*Power(t5251,2) + t4005*t53901)*var2[2];
  p_output1[17]=-0.27*var2[2];
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

#include "fRrFoot_vec_DiagonalImpact.hh"

namespace SymFunction
{

void fRrFoot_vec_DiagonalImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
