/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:40:30 GMT+02:00
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
  double t995;
  double t2704;
  double t1426;
  double t3123;
  double t3175;
  double t3007;
  double t3176;
  double t2443;
  double t3556;
  double t3588;
  double t3595;
  double t2712;
  double t3304;
  double t3128;
  double t3252;
  double t3254;
  double t2667;
  double t2791;
  double t2832;
  double t4957;
  double t4869;
  double t3608;
  double t3631;
  double t3633;
  double t3725;
  double t3754;
  double t3860;
  double t4056;
  double t4096;
  double t4117;
  double t5179;
  double t39389;
  double t39399;
  double t39406;
  double t39659;
  double t39669;
  double t39687;
  double t39699;
  double t39738;
  double t39747;
  double t39749;
  double t39750;
  double t39754;
  double t39755;
  double t39756;
  double t3413;
  double t3642;
  double t3649;
  double t39874;
  double t39875;
  double t39958;
  double t40132;
  double t40136;
  double t40138;
  double t40140;
  double t40142;
  double t40146;
  double t40147;
  double t40148;
  double t40151;
  double t40152;
  double t40156;
  double t40157;
  double t40158;
  double t39914;
  double t39935;
  double t39948;
  double t40153;
  double t40154;
  double t40162;
  double t40163;
  double t40164;
  double t40165;
  double t40167;
  double t40168;
  double t40169;
  double t40155;
  double t40159;
  double t40160;
  double t40166;
  double t40170;
  double t40174;
  double t40177;
  double t40179;
  double t40180;
  double t4001;
  double t4185;
  double t4304;
  double t40161;
  double t40186;
  double t40196;
  double t40201;
  double t40208;
  double t40215;
  double t40341;
  double t40385;
  t995 = Cos(var1[4]);
  t2704 = Cos(var1[12]);
  t1426 = Cos(var1[5]);
  t3123 = Cos(var1[14]);
  t3175 = Sin(var1[13]);
  t3007 = Cos(var1[13]);
  t3176 = Sin(var1[14]);
  t2443 = Sin(var1[12]);
  t3556 = t3123*t3175;
  t3588 = -1.*t3007*t3176;
  t3595 = t3556 + t3588;
  t2712 = Sin(var1[5]);
  t3304 = Sin(var1[4]);
  t3128 = t3007*t3123;
  t3252 = t3175*t3176;
  t3254 = t3128 + t3252;
  t2667 = -1.*t1426*t2443;
  t2791 = -1.*t2704*t2712;
  t2832 = t2667 + t2791;
  t4957 = Cos(var1[3]);
  t4869 = Sin(var1[3]);
  t3608 = t2704*t1426*t3595;
  t3631 = -1.*t2443*t3595*t2712;
  t3633 = t3608 + t3631;
  t3725 = -1.*t3123*t3175;
  t3754 = t3007*t3176;
  t3860 = t3725 + t3754;
  t4056 = t2704*t1426*t3254;
  t4096 = -1.*t2443*t3254*t2712;
  t4117 = t4056 + t4096;
  t5179 = t2704*t1426;
  t39389 = -1.*t2443*t2712;
  t39399 = t5179 + t39389;
  t39406 = t1426*t2443*t3595;
  t39659 = t2704*t3595*t2712;
  t39669 = t39406 + t39659;
  t39687 = t995*t3254;
  t39699 = -1.*t3304*t3633;
  t39738 = t39687 + t39699;
  t39747 = t1426*t2443*t3254;
  t39749 = t2704*t3254*t2712;
  t39750 = t39747 + t39749;
  t39754 = t995*t3860;
  t39755 = -1.*t3304*t4117;
  t39756 = t39754 + t39755;
  t3413 = t3254*t3304;
  t3642 = t995*t3633;
  t3649 = t3413 + t3642;
  t39874 = -1.*t2704;
  t39875 = 1. + t39874;
  t39958 = -1.*t3007;
  t40132 = 1. + t39958;
  t40136 = 0.28121*t40132;
  t40138 = -1.*t3123;
  t40140 = 1. + t40138;
  t40142 = 0.50321*t40140;
  t40146 = 0.23321*t3123;
  t40147 = t40142 + t40146;
  t40148 = t3007*t40147;
  t40151 = -0.27*t3175*t3176;
  t40152 = t40136 + t40148 + t40151;
  t40156 = 0.15121*t39875;
  t40157 = t2704*t40152;
  t40158 = t40156 + t40157;
  t39914 = -0.15121*t39875;
  t39935 = -0.15121*t2704;
  t39948 = -0.15121*t2443;
  t40153 = t2443*t40152;
  t40154 = t39914 + t39935 + t39948 + t40153;
  t40162 = 0.28121*t3175;
  t40163 = -1.*t40147*t3175;
  t40164 = -0.27*t3007*t3176;
  t40165 = t40162 + t40163 + t40164;
  t40167 = t1426*t40158;
  t40168 = -1.*t40154*t2712;
  t40169 = t40167 + t40168;
  t40155 = t1426*t40154;
  t40159 = t40158*t2712;
  t40160 = t40155 + t40159;
  t40166 = t40165*t3304;
  t40170 = t995*t40169;
  t40174 = t40166 + t40170;
  t40177 = t995*t40165;
  t40179 = -1.*t3304*t40169;
  t40180 = t40177 + t40179;
  t4001 = t3860*t3304;
  t4185 = t995*t4117;
  t4304 = t4001 + t4185;
  t40161 = -1.*t39399*t40160;
  t40186 = t39669*t40160;
  t40196 = t39399*t40160;
  t40201 = -1.*t39750*t40160;
  t40208 = -1.*t39669*t40160;
  t40215 = t39750*t40160;
  t40341 = -1.*t40165*t3254;
  t40385 = t40165*t3860;
  p_output1[0]=t4304*var2[0] + t2832*t995*var2[1] + t3649*var2[2];
  p_output1[1]=(-1.*t39756*t4869 + t39750*t4957)*var2[0] + (t2832*t3304*t4869 + t39399*t4957)*var2[1] + (-1.*t39738*t4869 + t39669*t4957)*var2[2];
  p_output1[2]=(t39750*t4869 + t39756*t4957)*var2[0] + (t39399*t4869 - 1.*t2832*t3304*t4957)*var2[1] + (t39669*t4869 + t39738*t4957)*var2[2];
  p_output1[3]=(t2832*(t3649*t40174 + t39738*t40180 + t40186)*t995 + t3649*(t40161 + t2832*t3304*t40180 - 1.*t2832*t40174*t995))*var2[0] + ((-1.*t3649*t40174 - 1.*t39738*t40180 + t40208)*t4304 + t3649*(t39756*t40180 + t40215 + t40174*t4304))*var2[1] + (t2832*(-1.*t39756*t40180 + t40201 - 1.*t40174*t4304)*t995 + t4304*(-1.*t2832*t3304*t40180 + t40196 + t2832*t40174*t995))*var2[2];
  p_output1[4]=(t39669*(t40161 - 1.*t2832*t40169) + t39399*(t3254*t40165 + t3633*t40169 + t40186))*var2[0] + (t39750*(-1.*t3633*t40169 + t40208 + t40341) + t39669*(t40215 + t40385 + t40169*t4117))*var2[1] + (t39750*(t2832*t40169 + t40196) + t39399*(-1.*t3860*t40165 + t40201 - 1.*t40169*t4117))*var2[2];
  p_output1[5]=t3254*(-1.*t2704*t40154 + t2443*t40158)*var2[0] + (t3860*(-1.*t2443*t3595*t40154 - 1.*t2704*t3595*t40158 + t40341) + t3254*(t2443*t3254*t40154 + t2704*t3254*t40158 + t40385))*var2[1] + t3860*(t2704*t40154 - 1.*t2443*t40158)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-0.15121 + t3860*(-1.*t3595*t40152 + t40341) + t3254*(t3254*t40152 + t40385))*var2[1] + (-0.15121*t3595 - 0.15121*t3860)*var2[2];
  p_output1[13]=(0.28121*t3176 - 0.27*t3123*t3176 - 1.*t3176*t40147)*var2[0] + (0.28121*t3123 + 0.27*Power(t3176,2) - 1.*t3123*t40147)*var2[2];
  p_output1[14]=-0.27*var2[2];
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
