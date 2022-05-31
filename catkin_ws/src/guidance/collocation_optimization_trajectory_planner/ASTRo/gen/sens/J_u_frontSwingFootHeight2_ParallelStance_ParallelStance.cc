/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 18:48:41 GMT+02:00
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
  double t1836;
  double t2490;
  double t2668;
  double t1826;
  double t3210;
  double t4225;
  double t4271;
  double t4335;
  double t4572;
  double t4638;
  double t2140;
  double t3941;
  double t4129;
  double t6516;
  double t6534;
  double t6550;
  double t9017;
  double t9334;
  double t9361;
  double t10395;
  double t10702;
  double t15773;
  double t15782;
  double t18117;
  double t18136;
  double t18145;
  double t18240;
  double t19716;
  double t19771;
  double t19825;
  double t4651;
  double t4686;
  double t6551;
  double t6835;
  double t9268;
  double t9330;
  double t15801;
  double t16391;
  double t22483;
  double t22626;
  double t22825;
  double t22881;
  double t22895;
  double t22910;
  double t22915;
  double t22916;
  double t22919;
  double t25035;
  double t25036;
  double t25250;
  double t23970;
  double t23979;
  double t24592;
  double t25638;
  double t25790;
  double t25856;
  double t26949;
  double t26951;
  double t26972;
  double t27562;
  double t27607;
  double t26129;
  double t28351;
  double t28372;
  double t28374;
  double t28383;
  double t28422;
  double t28430;
  double t28477;
  double t28483;
  double t28502;
  double t29075;
  double t29154;
  double t29219;
  t1836 = Cos(var1[5]);
  t2490 = Sin(var1[3]);
  t2668 = Sin(var1[4]);
  t1826 = Cos(var1[3]);
  t3210 = Sin(var1[5]);
  t4225 = Cos(var1[6]);
  t4271 = -1.*t4225;
  t4335 = 1. + t4271;
  t4572 = 0.15121*t4335;
  t4638 = Sin(var1[6]);
  t2140 = t1826*t1836;
  t3941 = -1.*t2490*t2668*t3210;
  t4129 = t2140 + t3941;
  t6516 = t1836*t2490*t2668;
  t6534 = t1826*t3210;
  t6550 = t6516 + t6534;
  t9017 = Cos(var1[7]);
  t9334 = t4225*t6550;
  t9361 = t4129*t4638;
  t10395 = t9334 + t9361;
  t10702 = Cos(var1[4]);
  t15773 = Sin(var1[7]);
  t15782 = Cos(var1[8]);
  t18117 = t9017*t10395;
  t18136 = t10702*t2490*t15773;
  t18145 = t18117 + t18136;
  t18240 = -1.*t10702*t9017*t2490;
  t19716 = t10395*t15773;
  t19771 = t18240 + t19716;
  t19825 = Sin(var1[8]);
  t4651 = -0.15121*t4638;
  t4686 = t4572 + t4651;
  t6551 = 0.15121*t4638;
  t6835 = t4572 + t6551;
  t9268 = -1.*t9017;
  t9330 = 1. + t9268;
  t15801 = -1.*t15782;
  t16391 = 1. + t15801;
  t22483 = -1.*t1826*t10702*t1836*t4225;
  t22626 = t1826*t10702*t3210*t4638;
  t22825 = t22483 + t22626;
  t22881 = t9017*t22825;
  t22895 = t1826*t2668*t15773;
  t22910 = t22881 + t22895;
  t22915 = -1.*t1826*t9017*t2668;
  t22916 = t22825*t15773;
  t22919 = t22915 + t22916;
  t25035 = t1836*t2490;
  t25036 = t1826*t2668*t3210;
  t25250 = t25035 + t25036;
  t23970 = t1826*t1836*t2668;
  t23979 = -1.*t2490*t3210;
  t24592 = t23970 + t23979;
  t25638 = t4225*t25250;
  t25790 = t24592*t4638;
  t25856 = t25638 + t25790;
  t26949 = -1.*t1826*t1836*t2668;
  t26951 = t2490*t3210;
  t26972 = t26949 + t26951;
  t27562 = -1.*t26972*t4638;
  t27607 = t25638 + t27562;
  t26129 = -1.*t25250*t4638;
  t28351 = t4225*t26972;
  t28372 = t25250*t4638;
  t28374 = t28351 + t28372;
  t28383 = -1.*t1826*t10702*t9017;
  t28422 = -1.*t28374*t15773;
  t28430 = t28383 + t28422;
  t28477 = t9017*t28374;
  t28483 = -1.*t1826*t10702*t15773;
  t28502 = t28477 + t28483;
  t29075 = t1826*t10702*t9017;
  t29154 = t28374*t15773;
  t29219 = t29075 + t29154;
  p_output1[0]=1.;
  p_output1[1]=0.50321*t16391*t18145 - 0.50321*t19771*t19825 + 0.19821*(t15782*t18145 + t19771*t19825) - 0.28121*t10702*t15773*t2490 + t4129*t4686 + 0.15121*(t4129*t4225 - 1.*t4638*t6550) + t6550*t6835 + 0.28121*t10395*t9330;
  p_output1[2]=0.50321*t16391*t22910 - 0.50321*t19825*t22919 + 0.19821*(t15782*t22910 + t19825*t22919) - 0.28121*t15773*t1826*t2668 + 0.15121*(t10702*t1826*t3210*t4225 + t10702*t1826*t1836*t4638) + t10702*t1826*t3210*t4686 - 1.*t10702*t1826*t1836*t6835 + 0.28121*t22825*t9330;
  p_output1[3]=-0.50321*t15773*t19825*t25856 + 0.15121*(t26129 + t24592*t4225) + t24592*t4686 + t25250*t6835 + 0.50321*t16391*t25856*t9017 + 0.19821*(t15773*t19825*t25856 + t15782*t25856*t9017) + 0.28121*t25856*t9330;
  p_output1[4]=-0.50321*t15773*t19825*t27607 + 0.15121*(t26129 - 1.*t26972*t4225) + t25250*(-0.15121*t4225 + t6551) + t26972*(0.15121*t4225 + t6551) + 0.50321*t16391*t27607*t9017 + 0.19821*(t15773*t19825*t27607 + t15782*t27607*t9017) + 0.28121*t27607*t9330;
  p_output1[5]=0.28121*t15773*t28374 + 0.50321*t16391*t28430 - 0.50321*t19825*t28502 + 0.19821*(t15782*t28430 + t19825*t28502) + 0.28121*t10702*t1826*t9017;
  p_output1[6]=0.50321*t19825*t28502 - 0.50321*t15782*t29219 + 0.19821*(-1.*t19825*t28502 + t15782*t29219);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_u_frontSwingFootHeight2_ParallelStance_ParallelStance.hh"

namespace SymFunction
{

void J_u_frontSwingFootHeight2_ParallelStance_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
