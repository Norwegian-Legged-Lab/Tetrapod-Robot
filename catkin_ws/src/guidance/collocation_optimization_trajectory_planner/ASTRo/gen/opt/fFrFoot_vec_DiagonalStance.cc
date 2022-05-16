/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:41:31 GMT+02:00
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
  double t4403;
  double t6489;
  double t6279;
  double t23368;
  double t23427;
  double t23168;
  double t23481;
  double t6307;
  double t23719;
  double t23947;
  double t24430;
  double t22016;
  double t23586;
  double t23420;
  double t23502;
  double t23510;
  double t6320;
  double t22415;
  double t22891;
  double t27555;
  double t27548;
  double t24622;
  double t24839;
  double t24890;
  double t27387;
  double t27476;
  double t27514;
  double t27520;
  double t27522;
  double t27527;
  double t27557;
  double t27559;
  double t27560;
  double t27574;
  double t27598;
  double t27605;
  double t27614;
  double t27622;
  double t27630;
  double t27774;
  double t27799;
  double t27815;
  double t27902;
  double t27903;
  double t27904;
  double t23609;
  double t25207;
  double t27349;
  double t27972;
  double t28051;
  double t28059;
  double t28069;
  double t28233;
  double t28239;
  double t28244;
  double t28263;
  double t28346;
  double t28367;
  double t28405;
  double t28413;
  double t28452;
  double t29580;
  double t29581;
  double t29582;
  double t28052;
  double t28055;
  double t28057;
  double t28459;
  double t28460;
  double t29602;
  double t29603;
  double t29606;
  double t29610;
  double t29615;
  double t29664;
  double t29678;
  double t29578;
  double t29588;
  double t29589;
  double t29611;
  double t29700;
  double t29767;
  double t29790;
  double t29795;
  double t29801;
  double t27517;
  double t27537;
  double t27541;
  double t29600;
  double t29819;
  double t29835;
  double t29846;
  double t29869;
  double t29900;
  double t30784;
  double t31276;
  t4403 = Cos(var1[4]);
  t6489 = Cos(var1[12]);
  t6279 = Cos(var1[5]);
  t23368 = Cos(var1[14]);
  t23427 = Sin(var1[13]);
  t23168 = Cos(var1[13]);
  t23481 = Sin(var1[14]);
  t6307 = Sin(var1[12]);
  t23719 = t23368*t23427;
  t23947 = -1.*t23168*t23481;
  t24430 = t23719 + t23947;
  t22016 = Sin(var1[5]);
  t23586 = Sin(var1[4]);
  t23420 = t23168*t23368;
  t23502 = t23427*t23481;
  t23510 = t23420 + t23502;
  t6320 = -1.*t6279*t6307;
  t22415 = -1.*t6489*t22016;
  t22891 = t6320 + t22415;
  t27555 = Cos(var1[3]);
  t27548 = Sin(var1[3]);
  t24622 = t6489*t6279*t24430;
  t24839 = -1.*t6307*t24430*t22016;
  t24890 = t24622 + t24839;
  t27387 = -1.*t23368*t23427;
  t27476 = t23168*t23481;
  t27514 = t27387 + t27476;
  t27520 = t6489*t6279*t23510;
  t27522 = -1.*t6307*t23510*t22016;
  t27527 = t27520 + t27522;
  t27557 = t6489*t6279;
  t27559 = -1.*t6307*t22016;
  t27560 = t27557 + t27559;
  t27574 = t6279*t6307*t24430;
  t27598 = t6489*t24430*t22016;
  t27605 = t27574 + t27598;
  t27614 = t4403*t23510;
  t27622 = -1.*t23586*t24890;
  t27630 = t27614 + t27622;
  t27774 = t6279*t6307*t23510;
  t27799 = t6489*t23510*t22016;
  t27815 = t27774 + t27799;
  t27902 = t4403*t27514;
  t27903 = -1.*t23586*t27527;
  t27904 = t27902 + t27903;
  t23609 = t23510*t23586;
  t25207 = t4403*t24890;
  t27349 = t23609 + t25207;
  t27972 = -1.*t6489;
  t28051 = 1. + t27972;
  t28059 = -1.*t23168;
  t28069 = 1. + t28059;
  t28233 = 0.28121*t28069;
  t28239 = -1.*t23368;
  t28244 = 1. + t28239;
  t28263 = 0.50321*t28244;
  t28346 = 0.23321*t23368;
  t28367 = t28263 + t28346;
  t28405 = t23168*t28367;
  t28413 = -0.27*t23427*t23481;
  t28452 = t28233 + t28405 + t28413;
  t29580 = 0.15121*t28051;
  t29581 = t6489*t28452;
  t29582 = t29580 + t29581;
  t28052 = -0.15121*t28051;
  t28055 = -0.15121*t6489;
  t28057 = -0.15121*t6307;
  t28459 = t6307*t28452;
  t28460 = t28052 + t28055 + t28057 + t28459;
  t29602 = 0.28121*t23427;
  t29603 = -1.*t28367*t23427;
  t29606 = -0.27*t23168*t23481;
  t29610 = t29602 + t29603 + t29606;
  t29615 = t6279*t29582;
  t29664 = -1.*t28460*t22016;
  t29678 = t29615 + t29664;
  t29578 = t6279*t28460;
  t29588 = t29582*t22016;
  t29589 = t29578 + t29588;
  t29611 = t29610*t23586;
  t29700 = t4403*t29678;
  t29767 = t29611 + t29700;
  t29790 = t4403*t29610;
  t29795 = -1.*t23586*t29678;
  t29801 = t29790 + t29795;
  t27517 = t27514*t23586;
  t27537 = t4403*t27527;
  t27541 = t27517 + t27537;
  t29600 = -1.*t27560*t29589;
  t29819 = t27605*t29589;
  t29835 = t27560*t29589;
  t29846 = -1.*t27815*t29589;
  t29869 = -1.*t27605*t29589;
  t29900 = t27815*t29589;
  t30784 = -1.*t29610*t23510;
  t31276 = t29610*t27514;
  p_output1[0]=t27541*var2[0] + t22891*t4403*var2[1] + t27349*var2[2];
  p_output1[1]=(t27555*t27815 - 1.*t27548*t27904)*var2[0] + (t22891*t23586*t27548 + t27555*t27560)*var2[1] + (t27555*t27605 - 1.*t27548*t27630)*var2[2];
  p_output1[2]=(t27548*t27815 + t27555*t27904)*var2[0] + (-1.*t22891*t23586*t27555 + t27548*t27560)*var2[1] + (t27548*t27605 + t27555*t27630)*var2[2];
  p_output1[3]=(t22891*(t27349*t29767 + t27630*t29801 + t29819)*t4403 + t27349*(t29600 + t22891*t23586*t29801 - 1.*t22891*t29767*t4403))*var2[0] + (t27541*(-1.*t27349*t29767 - 1.*t27630*t29801 + t29869) + t27349*(t27541*t29767 + t27904*t29801 + t29900))*var2[1] + (t22891*(-1.*t27541*t29767 - 1.*t27904*t29801 + t29846)*t4403 + t27541*(-1.*t22891*t23586*t29801 + t29835 + t22891*t29767*t4403))*var2[2];
  p_output1[4]=(t27605*(t29600 - 1.*t22891*t29678) + t27560*(t23510*t29610 + t24890*t29678 + t29819))*var2[0] + (t27815*(-1.*t24890*t29678 + t29869 + t30784) + t27605*(t27527*t29678 + t29900 + t31276))*var2[1] + (t27815*(t22891*t29678 + t29835) + t27560*(-1.*t27514*t29610 - 1.*t27527*t29678 + t29846))*var2[2];
  p_output1[5]=t23510*(t29582*t6307 - 1.*t28460*t6489)*var2[0] + (t23510*(t31276 + t23510*t28460*t6307 + t23510*t29582*t6489) + t27514*(t30784 - 1.*t24430*t28460*t6307 - 1.*t24430*t29582*t6489))*var2[1] + t27514*(-1.*t29582*t6307 + t28460*t6489)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-0.15121 + t27514*(-1.*t24430*t28452 + t30784) + t23510*(t23510*t28452 + t31276))*var2[1] + (-0.15121*t24430 - 0.15121*t27514)*var2[2];
  p_output1[13]=(0.28121*t23481 - 0.27*t23368*t23481 - 1.*t23481*t28367)*var2[0] + (0.28121*t23368 + 0.27*Power(t23481,2) - 1.*t23368*t28367)*var2[2];
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

namespace DiagonalStance
{

void fFrFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
