/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:51:42 GMT+02:00
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
  double t706;
  double t941;
  double t954;
  double t1039;
  double t1323;
  double t1541;
  double t915;
  double t2704;
  double t1888;
  double t2240;
  double t3176;
  double t3304;
  double t3522;
  double t3545;
  double t3780;
  double t4146;
  double t4286;
  double t4640;
  double t4856;
  double t4869;
  double t4874;
  double t5325;
  double t1309;
  double t1652;
  double t8525;
  double t2453;
  double t2694;
  double t14311;
  double t14268;
  double t14455;
  double t14493;
  double t15553;
  double t15558;
  double t15577;
  double t3254;
  double t3271;
  double t3860;
  double t4117;
  double t19734;
  double t19791;
  double t20217;
  double t20744;
  double t20780;
  double t20911;
  double t20913;
  double t21136;
  double t21137;
  double t21684;
  double t21757;
  double t21769;
  double t21776;
  double t21850;
  double t22734;
  double t28204;
  double t28208;
  double t28211;
  double t29420;
  double t35551;
  double t38169;
  double t38535;
  double t38660;
  double t38908;
  t706 = Cos(var1[4]);
  t941 = Cos(var1[12]);
  t954 = -1.*t941;
  t1039 = 1. + t954;
  t1323 = Sin(var1[12]);
  t1541 = -0.15121*t1323;
  t915 = Cos(var1[5]);
  t2704 = Sin(var1[5]);
  t1888 = Sin(var1[13]);
  t2240 = Sin(var1[4]);
  t3176 = Cos(var1[13]);
  t3304 = t941*t706*t915;
  t3522 = -1.*t706*t1323*t2704;
  t3545 = t3304 + t3522;
  t3780 = Cos(var1[14]);
  t4146 = -1.*t1888*t2240;
  t4286 = t3176*t3545;
  t4640 = t4146 + t4286;
  t4856 = Sin(var1[14]);
  t4869 = t3176*t2240;
  t4874 = t1888*t3545;
  t5325 = t4869 + t4874;
  t1309 = 0.15121*t1039;
  t1652 = t1309 + t1541;
  t8525 = Sin(var1[3]);
  t2453 = -0.15121*t1039;
  t2694 = t2453 + t1541;
  t14311 = Cos(var1[3]);
  t14268 = t915*t8525*t2240;
  t14455 = t14311*t2704;
  t14493 = t14268 + t14455;
  t15553 = t14311*t915;
  t15558 = -1.*t8525*t2240*t2704;
  t15577 = t15553 + t15558;
  t3254 = -1.*t3176;
  t3271 = 1. + t3254;
  t3860 = -1.*t3780;
  t4117 = 1. + t3860;
  t19734 = t941*t14493;
  t19791 = t1323*t15577;
  t20217 = t19734 + t19791;
  t20744 = t706*t1888*t8525;
  t20780 = t3176*t20217;
  t20911 = t20744 + t20780;
  t20913 = -1.*t3176*t706*t8525;
  t21136 = t1888*t20217;
  t21137 = t20913 + t21136;
  t21684 = -1.*t14311*t915*t2240;
  t21757 = t8525*t2704;
  t21769 = t21684 + t21757;
  t21776 = t915*t8525;
  t21850 = t14311*t2240*t2704;
  t22734 = t21776 + t21850;
  t28204 = t941*t21769;
  t28208 = t1323*t22734;
  t28211 = t28204 + t28208;
  t29420 = -1.*t14311*t706*t1888;
  t35551 = t3176*t28211;
  t38169 = t29420 + t35551;
  t38535 = t3176*t14311*t706;
  t38660 = t1888*t28211;
  t38908 = t38535 + t38660;
  p_output1[0]=0.28121*t1888*t2240 + 0.28121*t3271*t3545 + 0.50321*t4117*t4640 - 0.50321*t4856*t5325 + 0.23321*(t3780*t4640 + t4856*t5325) - 1.*t2694*t2704*t706 + t1652*t706*t915 - 0.15121*(-1.*t1323*t706*t915 - 1.*t2704*t706*t941) + var1[0] - 1.*var2[0];
  p_output1[1]=t14493*t1652 + t15577*t2694 + 0.28121*t20217*t3271 + 0.50321*t20911*t4117 - 0.50321*t21137*t4856 + 0.23321*(t20911*t3780 + t21137*t4856) - 0.28121*t1888*t706*t8525 - 0.15121*(-1.*t1323*t14493 + t15577*t941) + var1[1] - 1.*var2[1];
  p_output1[2]=t1652*t21769 + t22734*t2694 + 0.28121*t28211*t3271 + 0.50321*t38169*t4117 - 0.50321*t38908*t4856 + 0.23321*(t3780*t38169 + t38908*t4856) + 0.28121*t14311*t1888*t706 - 0.15121*(-1.*t1323*t21769 + t22734*t941) + var1[2] - 1.*var2[2];
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

#include "h_FrFoot_DiagonalStance.hh"

namespace SymFunction
{

void h_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
