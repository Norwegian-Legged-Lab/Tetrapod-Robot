/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:43:05 GMT+02:00
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
  double t4535;
  double t21418;
  double t5832;
  double t24378;
  double t24418;
  double t24337;
  double t24502;
  double t15990;
  double t26588;
  double t26594;
  double t27167;
  double t22612;
  double t25388;
  double t27567;
  double t27573;
  double t27603;
  double t21274;
  double t22765;
  double t22767;
  double t30066;
  double t29957;
  double t24380;
  double t25119;
  double t25273;
  double t27219;
  double t27220;
  double t27378;
  double t29595;
  double t29822;
  double t29840;
  double t30071;
  double t30128;
  double t30137;
  double t30838;
  double t31337;
  double t31347;
  double t31385;
  double t31390;
  double t31410;
  double t32055;
  double t32579;
  double t32590;
  double t32609;
  double t32737;
  double t32747;
  double t25553;
  double t27383;
  double t27403;
  double t35470;
  double t35471;
  double t35496;
  double t35501;
  double t36036;
  double t36039;
  double t36067;
  double t36082;
  double t36108;
  double t36369;
  double t36373;
  double t36377;
  double t36381;
  double t36425;
  double t36818;
  double t36887;
  double t35497;
  double t35498;
  double t36653;
  double t36796;
  double t37050;
  double t37070;
  double t37722;
  double t37737;
  double t37775;
  double t37779;
  double t37789;
  double t36798;
  double t36914;
  double t36973;
  double t37751;
  double t37825;
  double t38024;
  double t38033;
  double t38040;
  double t38054;
  double t27410;
  double t29851;
  double t29867;
  double t37048;
  double t38174;
  double t38265;
  double t38312;
  double t38818;
  double t40943;
  double t42891;
  double t42896;
  t4535 = Cos(var1[4]);
  t21418 = Cos(var1[15]);
  t5832 = Cos(var1[5]);
  t24378 = Cos(var1[17]);
  t24418 = Sin(var1[16]);
  t24337 = Cos(var1[16]);
  t24502 = Sin(var1[17]);
  t15990 = Sin(var1[15]);
  t26588 = -1.*t24378*t24418;
  t26594 = t24337*t24502;
  t27167 = t26588 + t26594;
  t22612 = Sin(var1[5]);
  t25388 = Sin(var1[4]);
  t27567 = -1.*t24337*t24378;
  t27573 = -1.*t24418*t24502;
  t27603 = t27567 + t27573;
  t21274 = t5832*t15990;
  t22765 = t21418*t22612;
  t22767 = t21274 + t22765;
  t30066 = Cos(var1[3]);
  t29957 = Sin(var1[3]);
  t24380 = t24337*t24378;
  t25119 = t24418*t24502;
  t25273 = t24380 + t25119;
  t27219 = t21418*t5832*t27167;
  t27220 = -1.*t15990*t27167*t22612;
  t27378 = t27219 + t27220;
  t29595 = t21418*t5832*t27603;
  t29822 = -1.*t15990*t27603*t22612;
  t29840 = t29595 + t29822;
  t30071 = -1.*t21418*t5832;
  t30128 = t15990*t22612;
  t30137 = t30071 + t30128;
  t30838 = t5832*t15990*t27167;
  t31337 = t21418*t27167*t22612;
  t31347 = t30838 + t31337;
  t31385 = t4535*t25273;
  t31390 = -1.*t25388*t27378;
  t31410 = t31385 + t31390;
  t32055 = t5832*t15990*t27603;
  t32579 = t21418*t27603*t22612;
  t32590 = t32055 + t32579;
  t32609 = t4535*t27167;
  t32737 = -1.*t25388*t29840;
  t32747 = t32609 + t32737;
  t25553 = t25273*t25388;
  t27383 = t4535*t27378;
  t27403 = t25553 + t27383;
  t35470 = -1.*t21418;
  t35471 = 1. + t35470;
  t35496 = -0.15121*t35471;
  t35501 = -1.*t24337;
  t36036 = 1. + t35501;
  t36039 = -0.28121*t36036;
  t36067 = -1.*t24378;
  t36082 = 1. + t36067;
  t36108 = -0.50321*t36082;
  t36369 = -0.23321*t24378;
  t36373 = t36108 + t36369;
  t36377 = t24337*t36373;
  t36381 = 0.27*t24418*t24502;
  t36425 = t36039 + t36377 + t36381;
  t36818 = t21418*t36425;
  t36887 = t35496 + t36818;
  t35497 = -0.15121*t21418;
  t35498 = 0.15121*t15990;
  t36653 = t15990*t36425;
  t36796 = t35496 + t35497 + t35498 + t36653;
  t37050 = 0.28121*t24418;
  t37070 = t36373*t24418;
  t37722 = -0.27*t24337*t24502;
  t37737 = t37050 + t37070 + t37722;
  t37775 = t5832*t36887;
  t37779 = -1.*t36796*t22612;
  t37789 = t37775 + t37779;
  t36798 = t5832*t36796;
  t36914 = t36887*t22612;
  t36973 = t36798 + t36914;
  t37751 = t37737*t25388;
  t37825 = t4535*t37789;
  t38024 = t37751 + t37825;
  t38033 = t4535*t37737;
  t38040 = -1.*t25388*t37789;
  t38054 = t38033 + t38040;
  t27410 = t27167*t25388;
  t29851 = t4535*t29840;
  t29867 = t27410 + t29851;
  t37048 = -1.*t30137*t36973;
  t38174 = t31347*t36973;
  t38265 = t30137*t36973;
  t38312 = -1.*t32590*t36973;
  t38818 = -1.*t31347*t36973;
  t40943 = t32590*t36973;
  t42891 = -1.*t37737*t25273;
  t42896 = t37737*t27167;
  p_output1[0]=t29867*var2[0] + t22767*t4535*var2[1] + t27403*var2[2];
  p_output1[1]=(t30066*t32590 - 1.*t29957*t32747)*var2[0] + (t22767*t25388*t29957 + t30066*t30137)*var2[1] + (t30066*t31347 - 1.*t29957*t31410)*var2[2];
  p_output1[2]=(t29957*t32590 + t30066*t32747)*var2[0] + (-1.*t22767*t25388*t30066 + t29957*t30137)*var2[1] + (t29957*t31347 + t30066*t31410)*var2[2];
  p_output1[3]=(t22767*(t27403*t38024 + t31410*t38054 + t38174)*t4535 + t27403*(t37048 + t22767*t25388*t38054 - 1.*t22767*t38024*t4535))*var2[0] + (t29867*(-1.*t27403*t38024 - 1.*t31410*t38054 + t38818) + t27403*(t29867*t38024 + t32747*t38054 + t40943))*var2[1] + (t22767*(-1.*t29867*t38024 - 1.*t32747*t38054 + t38312)*t4535 + t29867*(-1.*t22767*t25388*t38054 + t38265 + t22767*t38024*t4535))*var2[2];
  p_output1[4]=(t31347*(t37048 - 1.*t22767*t37789) + t30137*(t25273*t37737 + t27378*t37789 + t38174))*var2[0] + (t32590*(-1.*t27378*t37789 + t38818 + t42891) + t31347*(t29840*t37789 + t40943 + t42896))*var2[1] + (t32590*(t22767*t37789 + t38265) + t30137*(-1.*t27167*t37737 - 1.*t29840*t37789 + t38312))*var2[2];
  p_output1[5]=t25273*(t21418*t36796 - 1.*t15990*t36887)*var2[0] + (t27167*(-1.*t15990*t27167*t36796 - 1.*t21418*t27167*t36887 + t42891) + t25273*(t15990*t27603*t36796 + t21418*t27603*t36887 + t42896))*var2[1] + t27167*(-1.*t21418*t36796 + t15990*t36887)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(-0.15121*t25273 - 0.15121*t27603)*var2[0] + (-0.15121 + t27167*(-1.*t27167*t36425 + t42891) + t25273*(t27603*t36425 + t42896))*var2[1];
  p_output1[16]=(0.28121*t24502 - 0.27*t24378*t24502 + t24502*t36373)*var2[0] + (0.28121*t24378 + 0.27*Power(t24502,2) + t24378*t36373)*var2[2];
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
