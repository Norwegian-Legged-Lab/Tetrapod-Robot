/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:56:56 GMT+02:00
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
  double t5104;
  double t383;
  double t6451;
  double t17029;
  double t13620;
  double t13685;
  double t17040;
  double t345;
  double t15317;
  double t17041;
  double t17085;
  double t6461;
  double t29959;
  double t29968;
  double t29977;
  double t24403;
  double t34554;
  double t34558;
  double t32692;
  double t32753;
  double t34428;
  double t34453;
  double t34471;
  double t34474;
  double t34482;
  double t34483;
  double t34487;
  double t34559;
  double t34565;
  double t34576;
  double t34588;
  double t34589;
  double t34597;
  double t34603;
  double t34607;
  double t34616;
  double t36914;
  double t36918;
  double t36923;
  double t36935;
  double t36944;
  double t36993;
  double t17099;
  double t34434;
  double t34435;
  double t39899;
  double t39974;
  double t39978;
  double t39989;
  double t39997;
  double t40010;
  double t40015;
  double t40017;
  double t40018;
  double t384;
  double t6549;
  double t12527;
  double t39898;
  double t39988;
  double t40022;
  double t40036;
  double t40088;
  double t40094;
  double t40124;
  double t40131;
  double t40145;
  double t40148;
  double t39885;
  double t39890;
  double t39891;
  double t39897;
  double t40050;
  double t40065;
  double t51135;
  double t51313;
  double t51322;
  double t51470;
  double t51504;
  double t51515;
  double t40075;
  double t40212;
  double t40222;
  double t51374;
  double t51560;
  double t51562;
  double t52309;
  double t52323;
  double t52363;
  double t34449;
  double t34504;
  double t34512;
  double t46326;
  double t53057;
  double t53190;
  double t53202;
  double t56327;
  double t56363;
  double t56518;
  double t56602;
  double t56416;
  double t56474;
  double t56503;
  double t56489;
  double t58116;
  double t57193;
  t5104 = Cos(var1[9]);
  t383 = Sin(var1[4]);
  t6451 = Cos(var1[4]);
  t17029 = Cos(var1[10]);
  t13620 = Cos(var1[11]);
  t13685 = Sin(var1[10]);
  t17040 = Sin(var1[11]);
  t345 = Sin(var1[9]);
  t15317 = t13620*t13685;
  t17041 = -1.*t17029*t17040;
  t17085 = t15317 + t17041;
  t6461 = Sin(var1[5]);
  t29959 = t17029*t13620;
  t29968 = t13685*t17040;
  t29977 = t29959 + t29968;
  t24403 = Cos(var1[5]);
  t34554 = Cos(var1[3]);
  t34558 = Sin(var1[3]);
  t32692 = t24403*t29977;
  t32753 = t345*t17085*t6461;
  t34428 = t32692 + t32753;
  t34453 = -1.*t13620*t13685;
  t34471 = t17029*t17040;
  t34474 = t34453 + t34471;
  t34482 = t24403*t34474;
  t34483 = t345*t29977*t6461;
  t34487 = t34482 + t34483;
  t34559 = t6451*t345;
  t34565 = t5104*t383*t6461;
  t34576 = t34559 + t34565;
  t34588 = -1.*t24403*t345*t17085;
  t34589 = t29977*t6461;
  t34597 = t34588 + t34589;
  t34603 = t5104*t6451*t17085;
  t34607 = -1.*t383*t34428;
  t34616 = t34603 + t34607;
  t36914 = -1.*t24403*t345*t29977;
  t36918 = t34474*t6461;
  t36923 = t36914 + t36918;
  t36935 = t5104*t6451*t29977;
  t36944 = -1.*t383*t34487;
  t36993 = t36935 + t36944;
  t17099 = t5104*t17085*t383;
  t34434 = t6451*t34428;
  t34435 = t17099 + t34434;
  t39899 = -0.0641*t13620;
  t39974 = -0.28*t17040;
  t39978 = t39899 + t39974;
  t39989 = -1.*t13620;
  t39997 = 1. + t39989;
  t40010 = -0.575*t39997;
  t40015 = -0.295*t13620;
  t40017 = -0.0641*t17040;
  t40018 = t40010 + t40015 + t40017;
  t384 = t345*t383;
  t6549 = -1.*t5104*t6451*t6461;
  t12527 = t384 + t6549;
  t39898 = 0.325*t13685;
  t39988 = t17029*t39978;
  t40022 = t13685*t40018;
  t40036 = t39898 + t39988 + t40022;
  t40088 = -1.*t17029;
  t40094 = 1. + t40088;
  t40124 = -0.325*t40094;
  t40131 = -1.*t13685*t39978;
  t40145 = t17029*t40018;
  t40148 = t40124 + t40131 + t40145;
  t39885 = -1.*t5104;
  t39890 = 1. + t39885;
  t39891 = 0.1575*t39890;
  t39897 = 0.2255*t5104;
  t40050 = -1.*t345*t40036;
  t40065 = t39891 + t39897 + t40050;
  t51135 = 0.068*t345;
  t51313 = t5104*t40036;
  t51322 = t51135 + t51313;
  t51470 = t24403*t40148;
  t51504 = -1.*t40065*t6461;
  t51515 = t51470 + t51504;
  t40075 = t24403*t40065;
  t40212 = t40148*t6461;
  t40222 = t40075 + t40212;
  t51374 = t51322*t383;
  t51560 = t6451*t51515;
  t51562 = t51374 + t51560;
  t52309 = t6451*t51322;
  t52323 = -1.*t383*t51515;
  t52363 = t52309 + t52323;
  t34449 = t5104*t29977*t383;
  t34504 = t6451*t34487;
  t34512 = t34449 + t34504;
  t46326 = t5104*t24403*t40222;
  t53057 = -1.*t40222*t34597;
  t53190 = t40222*t34597;
  t53202 = -1.*t40222*t36923;
  t56327 = -1.*t5104*t24403*t40222;
  t56363 = t40222*t36923;
  t56518 = -1.*t345*t51322;
  t56602 = t5104*t51322*t29977;
  t56416 = t345*t51322;
  t56474 = -1.*t5104*t51322*t17085;
  t56503 = -1.*t5104*t51322*t29977;
  t56489 = t5104*t51322*t17085;
  t58116 = t40148*t29977;
  t57193 = -1.*t40148*t34474;
  p_output1[0]=t34435*var2[0] + t12527*var2[1] + t34512*var2[2];
  p_output1[1]=(t34554*t34597 - 1.*t34558*t34616)*var2[0] + (-1.*t34558*t34576 + t24403*t34554*t5104)*var2[1] + (t34554*t36923 - 1.*t34558*t36993)*var2[2];
  p_output1[2]=(t34558*t34597 + t34554*t34616)*var2[0] + (t34554*t34576 + t24403*t34558*t5104)*var2[1] + (t34558*t36923 + t34554*t36993)*var2[2];
  p_output1[3]=(t34512*(-1.*t12527*t51562 - 1.*t34576*t52363 + t56327) + t12527*(t34512*t51562 + t36993*t52363 + t56363))*var2[0] + (t34512*(t34435*t51562 + t34616*t52363 + t53190) + t34435*(-1.*t34512*t51562 - 1.*t36993*t52363 + t53202))*var2[1] + (t34435*(t46326 + t12527*t51562 + t34576*t52363) + t12527*(-1.*t34435*t51562 - 1.*t34616*t52363 + t53057))*var2[2];
  p_output1[4]=(t24403*t5104*(t34487*t51515 + t56363 + t56602) + t36923*(t56327 + t56518 + t5104*t51515*t6461))*var2[0] + (t36923*(t34428*t51515 + t53190 + t56489) + t34597*(-1.*t34487*t51515 + t53202 + t56503))*var2[1] + (t24403*t5104*(-1.*t34428*t51515 + t53057 + t56474) + t34597*(t46326 + t56416 - 1.*t5104*t51515*t6461))*var2[2];
  p_output1[5]=(t29977*t5104*(-1.*t40065*t5104 + t56518) + t345*(-1.*t29977*t345*t40065 + t34474*t40148 + t56602))*var2[0] + (t17085*t5104*(t29977*t345*t40065 + t56503 + t57193) + t29977*t5104*(-1.*t17085*t345*t40065 + t56489 + t58116))*var2[1] + (t17085*t5104*(t40065*t5104 + t56416) + t345*(t17085*t345*t40065 - 1.*t29977*t40148 + t56474))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-0.1575*t17085 - 0.2255*t34474)*var2[0] + (t29977*(-1.*t29977*t40036 + t57193) + t34474*(t17085*t40036 + t58116))*var2[1] + 0.068*t29977*var2[2];
  p_output1[10]=(-0.325*t17040 - 1.*t13620*t39978 - 1.*t17040*t40018)*var2[0] + (0.325*t13620 - 1.*t17040*t39978 + t13620*t40018)*var2[2];
  p_output1[11]=-0.0641*var2[0] - 0.28*var2[2];
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

#include "fRlFoot_vec_DiagonalImpact.hh"

namespace SymFunction
{

void fRlFoot_vec_DiagonalImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
