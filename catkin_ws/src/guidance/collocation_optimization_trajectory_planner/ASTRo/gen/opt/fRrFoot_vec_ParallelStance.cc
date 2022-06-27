/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 14:36:56 GMT+02:00
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
  double t3054;
  double t6995;
  double t5640;
  double t7894;
  double t8068;
  double t7887;
  double t8148;
  double t6785;
  double t8312;
  double t8330;
  double t8341;
  double t7306;
  double t8267;
  double t8502;
  double t8526;
  double t9238;
  double t6790;
  double t7338;
  double t7357;
  double t9348;
  double t9295;
  double t7969;
  double t8245;
  double t8262;
  double t8388;
  double t8398;
  double t8427;
  double t9256;
  double t9260;
  double t9262;
  double t9426;
  double t9440;
  double t9501;
  double t9636;
  double t9641;
  double t9655;
  double t9697;
  double t9711;
  double t9719;
  double t9912;
  double t9916;
  double t9946;
  double t9998;
  double t10003;
  double t10128;
  double t8303;
  double t8463;
  double t8477;
  double t10421;
  double t10549;
  double t10604;
  double t10764;
  double t10781;
  double t10789;
  double t10819;
  double t10839;
  double t10854;
  double t10865;
  double t10932;
  double t10942;
  double t10957;
  double t10959;
  double t10971;
  double t10973;
  double t10681;
  double t10752;
  double t10963;
  double t10967;
  double t10986;
  double t10987;
  double t10993;
  double t11061;
  double t11071;
  double t11085;
  double t11087;
  double t10968;
  double t10978;
  double t10981;
  double t11062;
  double t11122;
  double t11123;
  double t11131;
  double t11133;
  double t11135;
  double t8496;
  double t9267;
  double t9268;
  double t10985;
  double t11152;
  double t11169;
  double t11179;
  double t11289;
  double t11304;
  double t11377;
  double t11404;
  t3054 = Cos(var1[4]);
  t6995 = Cos(var1[15]);
  t5640 = Cos(var1[5]);
  t7894 = Cos(var1[17]);
  t8068 = Sin(var1[16]);
  t7887 = Cos(var1[16]);
  t8148 = Sin(var1[17]);
  t6785 = Sin(var1[15]);
  t8312 = -1.*t7894*t8068;
  t8330 = t7887*t8148;
  t8341 = t8312 + t8330;
  t7306 = Sin(var1[5]);
  t8267 = Sin(var1[4]);
  t8502 = -1.*t7887*t7894;
  t8526 = -1.*t8068*t8148;
  t9238 = t8502 + t8526;
  t6790 = t5640*t6785;
  t7338 = t6995*t7306;
  t7357 = t6790 + t7338;
  t9348 = Cos(var1[3]);
  t9295 = Sin(var1[3]);
  t7969 = t7887*t7894;
  t8245 = t8068*t8148;
  t8262 = t7969 + t8245;
  t8388 = t6995*t5640*t8341;
  t8398 = -1.*t6785*t8341*t7306;
  t8427 = t8388 + t8398;
  t9256 = t6995*t5640*t9238;
  t9260 = -1.*t6785*t9238*t7306;
  t9262 = t9256 + t9260;
  t9426 = -1.*t6995*t5640;
  t9440 = t6785*t7306;
  t9501 = t9426 + t9440;
  t9636 = t5640*t6785*t8341;
  t9641 = t6995*t8341*t7306;
  t9655 = t9636 + t9641;
  t9697 = t3054*t8262;
  t9711 = -1.*t8267*t8427;
  t9719 = t9697 + t9711;
  t9912 = t5640*t6785*t9238;
  t9916 = t6995*t9238*t7306;
  t9946 = t9912 + t9916;
  t9998 = t3054*t8341;
  t10003 = -1.*t8267*t9262;
  t10128 = t9998 + t10003;
  t8303 = t8262*t8267;
  t8463 = t3054*t8427;
  t8477 = t8303 + t8463;
  t10421 = -1.*t6995;
  t10549 = 1. + t10421;
  t10604 = -0.15121*t10549;
  t10764 = -1.*t7887;
  t10781 = 1. + t10764;
  t10789 = -0.28121*t10781;
  t10819 = -1.*t7894;
  t10839 = 1. + t10819;
  t10854 = -0.50321*t10839;
  t10865 = -0.19821*t7894;
  t10932 = t10854 + t10865;
  t10942 = t7887*t10932;
  t10957 = 0.305*t8068*t8148;
  t10959 = t10789 + t10942 + t10957;
  t10971 = t6995*t10959;
  t10973 = t10604 + t10971;
  t10681 = -0.15121*t6995;
  t10752 = 0.15121*t6785;
  t10963 = t6785*t10959;
  t10967 = t10604 + t10681 + t10752 + t10963;
  t10986 = 0.28121*t8068;
  t10987 = t10932*t8068;
  t10993 = -0.305*t7887*t8148;
  t11061 = t10986 + t10987 + t10993;
  t11071 = t5640*t10973;
  t11085 = -1.*t10967*t7306;
  t11087 = t11071 + t11085;
  t10968 = t5640*t10967;
  t10978 = t10973*t7306;
  t10981 = t10968 + t10978;
  t11062 = t11061*t8267;
  t11122 = t3054*t11087;
  t11123 = t11062 + t11122;
  t11131 = t3054*t11061;
  t11133 = -1.*t8267*t11087;
  t11135 = t11131 + t11133;
  t8496 = t8341*t8267;
  t9267 = t3054*t9262;
  t9268 = t8496 + t9267;
  t10985 = -1.*t9501*t10981;
  t11152 = t9655*t10981;
  t11169 = t9501*t10981;
  t11179 = -1.*t9946*t10981;
  t11289 = -1.*t9655*t10981;
  t11304 = t9946*t10981;
  t11377 = -1.*t11061*t8262;
  t11404 = t11061*t8341;
  p_output1[0]=t9268*var2[0] + t3054*t7357*var2[1] + t8477*var2[2];
  p_output1[1]=(-1.*t10128*t9295 + t9348*t9946)*var2[0] + (t7357*t8267*t9295 + t9348*t9501)*var2[1] + (t9348*t9655 - 1.*t9295*t9719)*var2[2];
  p_output1[2]=(t10128*t9348 + t9295*t9946)*var2[0] + (-1.*t7357*t8267*t9348 + t9295*t9501)*var2[1] + (t9295*t9655 + t9348*t9719)*var2[2];
  p_output1[3]=((t10985 - 1.*t11123*t3054*t7357 + t11135*t7357*t8267)*t8477 + t3054*t7357*(t11152 + t11123*t8477 + t11135*t9719))*var2[0] + (t8477*(t10128*t11135 + t11304 + t11123*t9268) + t9268*(t11289 - 1.*t11123*t8477 - 1.*t11135*t9719))*var2[1] + ((t11169 + t11123*t3054*t7357 - 1.*t11135*t7357*t8267)*t9268 + t3054*t7357*(-1.*t10128*t11135 + t11179 - 1.*t11123*t9268))*var2[2];
  p_output1[4]=((t11152 + t11061*t8262 + t11087*t8427)*t9501 + (t10985 - 1.*t11087*t7357)*t9655)*var2[0] + ((t11304 + t11404 + t11087*t9262)*t9655 + (t11289 + t11377 - 1.*t11087*t8427)*t9946)*var2[1] + ((t11179 - 1.*t11061*t8341 - 1.*t11087*t9262)*t9501 + (t11169 + t11087*t7357)*t9946)*var2[2];
  p_output1[5]=(-1.*t10973*t6785 + t10967*t6995)*t8262*var2[0] + (t8341*(t11377 - 1.*t10967*t6785*t8341 - 1.*t10973*t6995*t8341) + t8262*(t11404 + t10967*t6785*t9238 + t10973*t6995*t9238))*var2[1] + (t10973*t6785 - 1.*t10967*t6995)*t8341*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(-0.15121*t8262 - 0.15121*t9238)*var2[0] + (-0.15121 + t8341*(t11377 - 1.*t10959*t8341) + t8262*(t11404 + t10959*t9238))*var2[1];
  p_output1[16]=(0.28121*t8148 + t10932*t8148 - 0.305*t7894*t8148)*var2[0] + (0.28121*t7894 + t10932*t7894 + 0.305*Power(t8148,2))*var2[2];
  p_output1[17]=-0.305*var2[2];
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

#include "fRrFoot_vec_ParallelStance.hh"

namespace ParallelStance
{

void fRrFoot_vec_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
