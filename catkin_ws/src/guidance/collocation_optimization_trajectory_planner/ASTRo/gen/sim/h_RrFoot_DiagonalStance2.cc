/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:40:50 GMT+02:00
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
  double t250;
  double t331;
  double t678;
  double t1496;
  double t1541;
  double t4078;
  double t306;
  double t4999;
  double t4843;
  double t4852;
  double t5450;
  double t15680;
  double t19397;
  double t19399;
  double t20753;
  double t24349;
  double t27537;
  double t28008;
  double t28204;
  double t28208;
  double t28211;
  double t28217;
  double t4079;
  double t4502;
  double t43042;
  double t4874;
  double t4923;
  double t43464;
  double t43274;
  double t43469;
  double t43484;
  double t43659;
  double t43671;
  double t44759;
  double t5497;
  double t14950;
  double t21386;
  double t21561;
  double t52556;
  double t52557;
  double t52562;
  double t52570;
  double t52577;
  double t52578;
  double t52581;
  double t52582;
  double t52583;
  double t52618;
  double t52619;
  double t52620;
  double t52661;
  double t52662;
  double t52663;
  double t52685;
  double t52686;
  double t52691;
  double t52694;
  double t52695;
  double t52696;
  double t52698;
  double t52702;
  double t52703;
  t250 = Cos(var1[4]);
  t331 = Cos(var1[15]);
  t678 = -1.*t331;
  t1496 = 1. + t678;
  t1541 = -0.15121*t1496;
  t4078 = Sin(var1[15]);
  t306 = Cos(var1[5]);
  t4999 = Sin(var1[5]);
  t4843 = Sin(var1[16]);
  t4852 = Sin(var1[4]);
  t5450 = Cos(var1[16]);
  t15680 = t331*t250*t306;
  t19397 = -1.*t250*t4078*t4999;
  t19399 = t15680 + t19397;
  t20753 = Cos(var1[17]);
  t24349 = t4843*t4852;
  t27537 = t5450*t19399;
  t28008 = t24349 + t27537;
  t28204 = Sin(var1[17]);
  t28208 = t5450*t4852;
  t28211 = -1.*t4843*t19399;
  t28217 = t28208 + t28211;
  t4079 = -0.15121*t4078;
  t4502 = t1541 + t4079;
  t43042 = Sin(var1[3]);
  t4874 = 0.15121*t4078;
  t4923 = t1541 + t4874;
  t43464 = Cos(var1[3]);
  t43274 = t306*t43042*t4852;
  t43469 = t43464*t4999;
  t43484 = t43274 + t43469;
  t43659 = t43464*t306;
  t43671 = -1.*t43042*t4852*t4999;
  t44759 = t43659 + t43671;
  t5497 = -1.*t5450;
  t14950 = 1. + t5497;
  t21386 = -1.*t20753;
  t21561 = 1. + t21386;
  t52556 = t331*t43484;
  t52557 = t4078*t44759;
  t52562 = t52556 + t52557;
  t52570 = -1.*t250*t4843*t43042;
  t52577 = t5450*t52562;
  t52578 = t52570 + t52577;
  t52581 = -1.*t5450*t250*t43042;
  t52582 = -1.*t4843*t52562;
  t52583 = t52581 + t52582;
  t52618 = -1.*t43464*t306*t4852;
  t52619 = t43042*t4999;
  t52620 = t52618 + t52619;
  t52661 = t306*t43042;
  t52662 = t43464*t4852*t4999;
  t52663 = t52661 + t52662;
  t52685 = t331*t52620;
  t52686 = t4078*t52663;
  t52691 = t52685 + t52686;
  t52694 = t43464*t250*t4843;
  t52695 = t5450*t52691;
  t52696 = t52694 + t52695;
  t52698 = t5450*t43464*t250;
  t52702 = -1.*t4843*t52691;
  t52703 = t52698 + t52702;
  p_output1[0]=-0.28121*t14950*t19399 - 0.50321*t21561*t28008 - 0.50321*t28204*t28217 - 0.23321*(t20753*t28008 - 1.*t28204*t28217) + t250*t306*t4502 + 0.28121*t4843*t4852 - 1.*t250*t4923*t4999 - 0.15121*(-1.*t250*t306*t4078 - 1.*t250*t331*t4999) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.15121*(-1.*t4078*t43484 + t331*t44759) + t43484*t4502 - 0.28121*t250*t43042*t4843 + t44759*t4923 - 0.28121*t14950*t52562 - 0.50321*t21561*t52578 - 0.50321*t28204*t52583 - 0.23321*(t20753*t52578 - 1.*t28204*t52583) + var1[1] - 1.*var2[1];
  p_output1[2]=0.28121*t250*t43464*t4843 + t4502*t52620 + t4923*t52663 - 0.15121*(-1.*t4078*t52620 + t331*t52663) - 0.28121*t14950*t52691 - 0.50321*t21561*t52696 - 0.50321*t28204*t52703 - 0.23321*(t20753*t52696 - 1.*t28204*t52703) + var1[2] - 1.*var2[2];
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

#include "h_RrFoot_DiagonalStance2.hh"

namespace SymFunction
{

void h_RrFoot_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
