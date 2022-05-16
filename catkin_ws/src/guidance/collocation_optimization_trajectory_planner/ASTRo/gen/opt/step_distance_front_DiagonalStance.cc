/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:42:25 GMT+02:00
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
  double t5221;
  double t6514;
  double t6539;
  double t6542;
  double t6545;
  double t6556;
  double t6398;
  double t6743;
  double t6709;
  double t6711;
  double t6789;
  double t6814;
  double t6820;
  double t6822;
  double t6824;
  double t6839;
  double t6843;
  double t6850;
  double t6852;
  double t6861;
  double t6863;
  double t6864;
  double t6882;
  double t6893;
  double t6928;
  double t6968;
  double t6969;
  double t6986;
  double t7006;
  double t7260;
  double t7272;
  double t7389;
  double t7497;
  double t7782;
  double t7797;
  double t7863;
  double t7915;
  double t7921;
  double t7943;
  double t7981;
  double t6543;
  double t6581;
  double t8113;
  double t6737;
  double t6741;
  double t8178;
  double t8131;
  double t8179;
  double t8180;
  double t8280;
  double t8301;
  double t8322;
  double t6790;
  double t6808;
  double t6831;
  double t6832;
  double t8558;
  double t8565;
  double t8567;
  double t8578;
  double t8588;
  double t8600;
  double t8605;
  double t8607;
  double t8644;
  double t6972;
  double t6973;
  double t6975;
  double t6976;
  double t6987;
  double t6996;
  double t7733;
  double t7740;
  double t8850;
  double t8874;
  double t8880;
  double t8887;
  double t8911;
  double t8950;
  double t9369;
  double t9497;
  double t9673;
  t5221 = Cos(var1[4]);
  t6514 = Cos(var1[12]);
  t6539 = -1.*t6514;
  t6542 = 1. + t6539;
  t6545 = Sin(var1[12]);
  t6556 = -0.15121*t6545;
  t6398 = Cos(var1[5]);
  t6743 = Sin(var1[5]);
  t6709 = Sin(var1[13]);
  t6711 = Sin(var1[4]);
  t6789 = Cos(var1[13]);
  t6814 = t6514*t5221*t6398;
  t6820 = -1.*t5221*t6545*t6743;
  t6822 = t6814 + t6820;
  t6824 = Cos(var1[14]);
  t6839 = -1.*t6709*t6711;
  t6843 = t6789*t6822;
  t6850 = t6839 + t6843;
  t6852 = Sin(var1[14]);
  t6861 = t6789*t6711;
  t6863 = t6709*t6822;
  t6864 = t6861 + t6863;
  t6882 = Cos(var1[6]);
  t6893 = -1.*t6882;
  t6928 = 1. + t6893;
  t6968 = 0.15121*t6928;
  t6969 = Sin(var1[6]);
  t6986 = Cos(var1[7]);
  t7006 = t5221*t6398*t6882;
  t7260 = -1.*t5221*t6743*t6969;
  t7272 = t7006 + t7260;
  t7389 = Sin(var1[7]);
  t7497 = Cos(var1[8]);
  t7782 = t6986*t7272;
  t7797 = -1.*t6711*t7389;
  t7863 = t7782 + t7797;
  t7915 = t6986*t6711;
  t7921 = t7272*t7389;
  t7943 = t7915 + t7921;
  t7981 = Sin(var1[8]);
  t6543 = 0.15121*t6542;
  t6581 = t6543 + t6556;
  t8113 = Sin(var1[3]);
  t6737 = -0.15121*t6542;
  t6741 = t6737 + t6556;
  t8178 = Cos(var1[3]);
  t8131 = t6398*t8113*t6711;
  t8179 = t8178*t6743;
  t8180 = t8131 + t8179;
  t8280 = t8178*t6398;
  t8301 = -1.*t8113*t6711*t6743;
  t8322 = t8280 + t8301;
  t6790 = -1.*t6789;
  t6808 = 1. + t6790;
  t6831 = -1.*t6824;
  t6832 = 1. + t6831;
  t8558 = t6514*t8180;
  t8565 = t6545*t8322;
  t8567 = t8558 + t8565;
  t8578 = t5221*t6709*t8113;
  t8588 = t6789*t8567;
  t8600 = t8578 + t8588;
  t8605 = -1.*t6789*t5221*t8113;
  t8607 = t6709*t8567;
  t8644 = t8605 + t8607;
  t6972 = -0.15121*t6969;
  t6973 = t6968 + t6972;
  t6975 = 0.15121*t6969;
  t6976 = t6968 + t6975;
  t6987 = -1.*t6986;
  t6996 = 1. + t6987;
  t7733 = -1.*t7497;
  t7740 = 1. + t7733;
  t8850 = t6882*t8180;
  t8874 = t8322*t6969;
  t8880 = t8850 + t8874;
  t8887 = t6986*t8880;
  t8911 = t5221*t8113*t7389;
  t8950 = t8887 + t8911;
  t9369 = -1.*t5221*t6986*t8113;
  t9497 = t8880*t7389;
  t9673 = t9369 + t9497;
  p_output1[0]=-1.*t5221*t6398*t6581 - 0.28121*t6709*t6711 + t5221*t6741*t6743 + 0.15121*(-1.*t5221*t6398*t6545 - 1.*t5221*t6514*t6743) - 0.28121*t6808*t6822 - 0.50321*t6832*t6850 + 0.50321*t6852*t6864 - 0.23321*(t6824*t6850 + t6852*t6864) + 0.15121*(-1.*t5221*t6743*t6882 - 1.*t5221*t6398*t6969) - 1.*t5221*t6743*t6973 + t5221*t6398*t6976 + 0.28121*t6996*t7272 + 0.28121*t6711*t7389 + 0.50321*t7740*t7863 - 0.50321*t7943*t7981 + 0.23321*(t7497*t7863 + t7943*t7981);
  p_output1[1]=0.28121*t5221*t6709*t8113 - 0.28121*t5221*t7389*t8113 - 1.*t6581*t8180 + t6976*t8180 - 1.*t6741*t8322 + t6973*t8322 + 0.15121*(-1.*t6545*t8180 + t6514*t8322) + 0.15121*(-1.*t6969*t8180 + t6882*t8322) - 0.28121*t6808*t8567 - 0.50321*t6832*t8600 + 0.50321*t6852*t8644 - 0.23321*(t6824*t8600 + t6852*t8644) + 0.28121*t6996*t8880 + 0.50321*t7740*t8950 - 0.50321*t7981*t9673 + 0.23321*(t7497*t8950 + t7981*t9673);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 2, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "step_distance_front_DiagonalStance.hh"

namespace DiagonalStance
{

void step_distance_front_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
