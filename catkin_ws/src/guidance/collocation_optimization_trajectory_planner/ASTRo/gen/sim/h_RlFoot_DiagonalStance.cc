/*
 * Automatically Generated from Mathematica.
 * Sun 22 May 2022 17:22:32 GMT+02:00
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
  double t3440;
  double t3507;
  double t3511;
  double t3512;
  double t3535;
  double t3550;
  double t3447;
  double t3583;
  double t3565;
  double t3566;
  double t3695;
  double t3702;
  double t3817;
  double t3851;
  double t3878;
  double t3974;
  double t4177;
  double t4178;
  double t4192;
  double t4321;
  double t4322;
  double t4327;
  double t3531;
  double t3561;
  double t4368;
  double t3570;
  double t3580;
  double t4427;
  double t4388;
  double t4434;
  double t4440;
  double t4445;
  double t4446;
  double t4449;
  double t3700;
  double t3701;
  double t3949;
  double t3951;
  double t4479;
  double t4480;
  double t4485;
  double t4495;
  double t4496;
  double t4503;
  double t4505;
  double t4508;
  double t4509;
  double t4760;
  double t4763;
  double t4840;
  double t4888;
  double t4889;
  double t4901;
  double t4932;
  double t4969;
  double t5242;
  double t5417;
  double t5475;
  double t6030;
  double t6179;
  double t6213;
  double t6215;
  t3440 = Cos(var1[4]);
  t3507 = Cos(var1[9]);
  t3511 = -1.*t3507;
  t3512 = 1. + t3511;
  t3535 = Sin(var1[9]);
  t3550 = 0.15121*t3535;
  t3447 = Cos(var1[5]);
  t3583 = Sin(var1[5]);
  t3565 = Sin(var1[10]);
  t3566 = Sin(var1[4]);
  t3695 = Cos(var1[10]);
  t3702 = t3507*t3440*t3447;
  t3817 = -1.*t3440*t3535*t3583;
  t3851 = t3702 + t3817;
  t3878 = Cos(var1[11]);
  t3974 = t3565*t3566;
  t4177 = t3695*t3851;
  t4178 = t3974 + t4177;
  t4192 = Sin(var1[11]);
  t4321 = t3695*t3566;
  t4322 = -1.*t3565*t3851;
  t4327 = t4321 + t4322;
  t3531 = -0.15121*t3512;
  t3561 = t3531 + t3550;
  t4368 = Sin(var1[3]);
  t3570 = 0.15121*t3512;
  t3580 = t3570 + t3550;
  t4427 = Cos(var1[3]);
  t4388 = t3447*t4368*t3566;
  t4434 = t4427*t3583;
  t4440 = t4388 + t4434;
  t4445 = t4427*t3447;
  t4446 = -1.*t4368*t3566*t3583;
  t4449 = t4445 + t4446;
  t3700 = -1.*t3695;
  t3701 = 1. + t3700;
  t3949 = -1.*t3878;
  t3951 = 1. + t3949;
  t4479 = t3507*t4440;
  t4480 = t3535*t4449;
  t4485 = t4479 + t4480;
  t4495 = -1.*t3440*t3565*t4368;
  t4496 = t3695*t4485;
  t4503 = t4495 + t4496;
  t4505 = -1.*t3695*t3440*t4368;
  t4508 = -1.*t3565*t4485;
  t4509 = t4505 + t4508;
  t4760 = -1.*t4427*t3447*t3566;
  t4763 = t4368*t3583;
  t4840 = t4760 + t4763;
  t4888 = t3447*t4368;
  t4889 = t4427*t3566*t3583;
  t4901 = t4888 + t4889;
  t4932 = t3507*t4840;
  t4969 = t3535*t4901;
  t5242 = t4932 + t4969;
  t5417 = t4427*t3440*t3565;
  t5475 = t3695*t5242;
  t6030 = t5417 + t5475;
  t6179 = t3695*t4427*t3440;
  t6213 = -1.*t3565*t5242;
  t6215 = t6179 + t6213;
  p_output1[0]=t3440*t3447*t3561 + 0.28121*t3565*t3566 - 1.*t3440*t3580*t3583 + 0.15121*(-1.*t3440*t3447*t3535 - 1.*t3440*t3507*t3583) - 0.28121*t3701*t3851 - 0.50321*t3951*t4178 - 0.50321*t4192*t4327 - 0.23321*(t3878*t4178 - 1.*t4192*t4327) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.28121*t3440*t3565*t4368 + t3561*t4440 + t3580*t4449 + 0.15121*(-1.*t3535*t4440 + t3507*t4449) - 0.28121*t3701*t4485 - 0.50321*t3951*t4503 - 0.50321*t4192*t4509 - 0.23321*(t3878*t4503 - 1.*t4192*t4509) + var1[1] - 1.*var2[1];
  p_output1[2]=0.28121*t3440*t3565*t4427 + t3561*t4840 + t3580*t4901 + 0.15121*(-1.*t3535*t4840 + t3507*t4901) - 0.28121*t3701*t5242 - 0.50321*t3951*t6030 - 0.50321*t4192*t6215 - 0.23321*(t3878*t6030 - 1.*t4192*t6215) + var1[2] - 1.*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "h_RlFoot_DiagonalStance.hh"

namespace SymFunction
{

void h_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
