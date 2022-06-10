/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:31:47 GMT+02:00
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
  double t2470;
  double t2996;
  double t3019;
  double t3069;
  double t3268;
  double t3688;
  double t4780;
  double t4404;
  double t4769;
  double t4838;
  double t4778;
  double t5016;
  double t5192;
  double t5710;
  double t5797;
  double t5850;
  double t1683;
  double t2156;
  double t6163;
  double t6356;
  double t6572;
  double t6630;
  double t6654;
  double t6815;
  double t6835;
  double t6921;
  double t7023;
  double t7092;
  double t7098;
  double t7104;
  double t3259;
  double t3689;
  double t5660;
  double t5696;
  double t6173;
  double t6241;
  double t6655;
  double t6683;
  double t8157;
  double t8236;
  double t8297;
  double t8676;
  double t8732;
  double t8823;
  double t8837;
  double t8842;
  double t8845;
  double t9028;
  double t9038;
  double t9042;
  double t9054;
  double t9075;
  double t9078;
  double t9109;
  double t9114;
  double t9130;
  double t9559;
  double t9573;
  double t9952;
  double t9968;
  double t10038;
  double t10044;
  double t9424;
  double t11114;
  double t11198;
  double t11235;
  double t11277;
  double t11291;
  double t11296;
  double t11316;
  double t11857;
  double t11858;
  double t12382;
  double t12383;
  double t12397;
  t2470 = Sin(var1[3]);
  t2996 = Cos(var1[9]);
  t3019 = -1.*t2996;
  t3069 = 1. + t3019;
  t3268 = Sin(var1[9]);
  t3688 = 0.15121*t3268;
  t4780 = Cos(var1[3]);
  t4404 = Cos(var1[5]);
  t4769 = Sin(var1[4]);
  t4838 = Sin(var1[5]);
  t4778 = t4404*t2470*t4769;
  t5016 = t4780*t4838;
  t5192 = t4778 + t5016;
  t5710 = t4780*t4404;
  t5797 = -1.*t2470*t4769*t4838;
  t5850 = t5710 + t5797;
  t1683 = Cos(var1[4]);
  t2156 = Sin(var1[10]);
  t6163 = Cos(var1[10]);
  t6356 = t2996*t5192;
  t6572 = t3268*t5850;
  t6630 = t6356 + t6572;
  t6654 = Cos(var1[11]);
  t6815 = -1.*t1683*t2156*t2470;
  t6835 = t6163*t6630;
  t6921 = t6815 + t6835;
  t7023 = Sin(var1[11]);
  t7092 = -1.*t6163*t1683*t2470;
  t7098 = -1.*t2156*t6630;
  t7104 = t7092 + t7098;
  t3259 = -0.15121*t3069;
  t3689 = t3259 + t3688;
  t5660 = 0.15121*t3069;
  t5696 = t5660 + t3688;
  t6173 = -1.*t6163;
  t6241 = 1. + t6173;
  t6655 = -1.*t6654;
  t6683 = 1. + t6655;
  t8157 = -1.*t2996*t4780*t1683*t4404;
  t8236 = t4780*t1683*t3268*t4838;
  t8297 = t8157 + t8236;
  t8676 = -1.*t4780*t2156*t4769;
  t8732 = t6163*t8297;
  t8823 = t8676 + t8732;
  t8837 = -1.*t6163*t4780*t4769;
  t8842 = -1.*t2156*t8297;
  t8845 = t8837 + t8842;
  t9028 = t4780*t4404*t4769;
  t9038 = -1.*t2470*t4838;
  t9042 = t9028 + t9038;
  t9054 = t4404*t2470;
  t9075 = t4780*t4769*t4838;
  t9078 = t9054 + t9075;
  t9109 = t3268*t9042;
  t9114 = t2996*t9078;
  t9130 = t9109 + t9114;
  t9559 = 0.15121*t2996;
  t9573 = -1.*t4780*t4404*t4769;
  t9952 = t2470*t4838;
  t9968 = t9573 + t9952;
  t10038 = -1.*t3268*t9968;
  t10044 = t10038 + t9114;
  t9424 = -1.*t3268*t9078;
  t11114 = t2996*t9968;
  t11198 = t3268*t9078;
  t11235 = t11114 + t11198;
  t11277 = -1.*t4780*t1683*t2156;
  t11291 = -1.*t6163*t11235;
  t11296 = t11277 + t11291;
  t11316 = t6163*t4780*t1683;
  t11857 = -1.*t2156*t11235;
  t11858 = t11316 + t11857;
  t12382 = t4780*t1683*t2156;
  t12383 = t6163*t11235;
  t12397 = t12382 + t12383;
  p_output1[0]=1.;
  p_output1[1]=-0.28121*t1683*t2156*t2470 + t3689*t5192 + t5696*t5850 + 0.15121*(-1.*t3268*t5192 + t2996*t5850) - 0.28121*t6241*t6630 - 0.50321*t6683*t6921 - 0.50321*t7023*t7104 - 0.19821*(t6654*t6921 - 1.*t7023*t7104);
  p_output1[2]=-1.*t1683*t3689*t4404*t4780 - 0.28121*t2156*t4769*t4780 + 0.15121*(t1683*t3268*t4404*t4780 + t1683*t2996*t4780*t4838) + t1683*t4780*t4838*t5696 - 0.28121*t6241*t8297 - 0.50321*t6683*t8823 - 0.50321*t7023*t8845 - 0.19821*(t6654*t8823 - 1.*t7023*t8845);
  p_output1[3]=t5696*t9042 + t3689*t9078 - 0.28121*t6241*t9130 - 0.50321*t6163*t6683*t9130 + 0.50321*t2156*t7023*t9130 - 0.19821*(t6163*t6654*t9130 + t2156*t7023*t9130) + 0.15121*(t2996*t9042 + t9424);
  p_output1[4]=-0.28121*t10044*t6241 - 0.50321*t10044*t6163*t6683 + 0.50321*t10044*t2156*t7023 - 0.19821*(t10044*t6163*t6654 + t10044*t2156*t7023) + t9078*(t3688 + t9559) + (-0.15121*t3268 + t9559)*t9968 + 0.15121*(t9424 - 1.*t2996*t9968);
  p_output1[5]=-0.28121*t11235*t2156 + 0.28121*t1683*t4780*t6163 - 0.50321*t11858*t6683 - 0.50321*t11296*t7023 - 0.19821*(t11858*t6654 - 1.*t11296*t7023);
  p_output1[6]=-0.50321*t11858*t6654 - 0.50321*t12397*t7023 - 0.19821*(-1.*t11858*t6654 - 1.*t12397*t7023);
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

#include "J_u_rearSwingFootHeightflat_DiagonalStance2_DiagonalStance2.hh"

namespace SymFunction
{

void J_u_rearSwingFootHeightflat_DiagonalStance2_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
