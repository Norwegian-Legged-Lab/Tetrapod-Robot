/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 13:08:44 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t4685;
  double t37318;
  double t37875;
  double t37322;
  double t37878;
  double t5083;
  double t5816;
  double t38488;
  double t38514;
  double t38520;
  double t38583;
  double t40822;
  double t37571;
  double t37903;
  double t38464;
  double t31403;
  double t40832;
  double t40879;
  double t40979;
  double t41002;
  double t41022;
  double t41032;
  double t41050;
  double t41073;
  double t41560;
  double t42321;
  double t42375;
  double t31893;
  double t37256;
  double t38489;
  double t38513;
  double t46444;
  double t46469;
  double t46481;
  double t41168;
  double t41386;
  double t46593;
  double t46628;
  double t46727;
  double t46787;
  double t46804;
  double t46823;
  double t46174;
  double t46175;
  double t46180;
  double t46332;
  double t46367;
  double t46375;
  double t46396;
  double t46400;
  double t46542;
  double t46777;
  double t46856;
  double t46859;
  double t46861;
  double t46940;
  double t47006;
  double t47068;
  double t47117;
  double t47148;
  double t47152;
  double t47154;
  t4685 = Cos(var1[3]);
  t37318 = Cos(var1[5]);
  t37875 = Sin(var1[3]);
  t37322 = Sin(var1[4]);
  t37878 = Sin(var1[5]);
  t5083 = Cos(var1[4]);
  t5816 = Sin(var1[9]);
  t38488 = Cos(var1[9]);
  t38514 = t37318*t37875;
  t38520 = t4685*t37322*t37878;
  t38583 = t38514 + t38520;
  t40822 = Sin(var1[10]);
  t37571 = -1.*t4685*t37318*t37322;
  t37903 = t37875*t37878;
  t38464 = t37571 + t37903;
  t31403 = Cos(var1[10]);
  t40832 = t38488*t4685*t5083;
  t40879 = -1.*t5816*t38583;
  t40979 = t40832 + t40879;
  t41002 = Sin(var1[11]);
  t41022 = -1.*t40822*t38464;
  t41032 = t31403*t40979;
  t41050 = t41022 + t41032;
  t41073 = Cos(var1[11]);
  t41560 = t31403*t38464;
  t42321 = t40822*t40979;
  t42375 = t41560 + t42321;
  t31893 = -1.*t31403;
  t37256 = 1. + t31893;
  t38489 = -1.*t38488;
  t38513 = 1. + t38489;
  t46444 = t38488*t37322;
  t46469 = t5083*t5816*t37878;
  t46481 = t46444 + t46469;
  t41168 = -1.*t41073;
  t41386 = 1. + t41168;
  t46593 = -1.*t5083*t37318*t40822;
  t46628 = t31403*t46481;
  t46727 = t46593 + t46628;
  t46787 = t31403*t5083*t37318;
  t46804 = t40822*t46481;
  t46823 = t46787 + t46804;
  t46174 = -1.*var2[0];
  t46175 = -0.325*t37256*t5083*t37318;
  t46180 = -0.1575*t5816*t37322;
  t46332 = -0.1575*t38513*t5083*t37878;
  t46367 = t5816*t37322;
  t46375 = -1.*t38488*t5083*t37878;
  t46396 = t46367 + t46375;
  t46400 = 0.2255*t46396;
  t46542 = 0.325*t40822*t46481;
  t46777 = -0.575*t41002*t46727;
  t46856 = -0.575*t41386*t46823;
  t46859 = -1.*t41002*t46727;
  t46861 = t41073*t46823;
  t46940 = t46859 + t46861;
  t47006 = -0.295*t46940;
  t47068 = t41073*t46727;
  t47117 = t41002*t46823;
  t47148 = t47068 + t47117;
  t47152 = -0.0641*t47148;
  t47154 = t46174 + var1[0] + t46175 + t46180 + t46332 + t46400 + t46542 + t46777 + t46856 + t47006 + t47152;
  p_output1[0]=-0.325*t37256*t38464 + 0.1575*t38513*t38583 + 0.325*t40822*t40979 - 0.575*t41002*t41050 - 0.575*t41386*t42375 - 0.0641*(t41050*t41073 + t41002*t42375) - 0.295*(-1.*t41002*t41050 + t41073*t42375) - 0.1575*t4685*t5083*t5816 + 0.2255*(t38488*t38583 + t4685*t5083*t5816) + var1[2] - 0.25*Power(t47154,2)*var3[0]*(1. + Tanh(t47154*var4[0]));
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "u_rearSwingFootHeightcurved_DiagonalStance2.hh"

namespace SymFunction
{

void u_rearSwingFootHeightcurved_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
