/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:27:50 GMT+01:00
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
  double t172;
  double t177;
  double t198;
  double t231;
  double t75;
  double t329;
  double t345;
  double t368;
  double t369;
  double t426;
  double t442;
  double t481;
  double t446;
  double t567;
  double t294;
  double t295;
  double t448;
  double t581;
  double t583;
  double t661;
  double t669;
  double t673;
  double t722;
  double t221;
  double t902;
  double t910;
  double t913;
  double t938;
  double t95;
  double t842;
  double t812;
  double t816;
  double t822;
  double t872;
  double t879;
  double t893;
  double t970;
  double t300;
  double t1034;
  double t245;
  double t937;
  double t1236;
  double t1243;
  double t1328;
  double t759;
  double t1050;
  double t725;
  double t1432;
  double t1036;
  double t1039;
  double t1065;
  double t1067;
  double t1084;
  double t1105;
  double t1137;
  double t1148;
  double t1473;
  double t1282;
  double t1291;
  double t1293;
  double t1352;
  double t1356;
  double t1359;
  double t1367;
  double t1369;
  double t1574;
  double t1580;
  double t1589;
  double t1596;
  double t1603;
  double t1652;
  double t1660;
  double t1708;
  double t1213;
  double t1781;
  double t1254;
  double t1924;
  double t1725;
  double t939;
  t172 = Cos(var1[16]);
  t177 = -1.*t172;
  t198 = 1. + t177;
  t231 = Sin(var1[16]);
  t75 = Cos(var1[3]);
  t329 = Cos(var1[15]);
  t345 = -1.*t329;
  t368 = 1. + t345;
  t369 = -0.15121*t368;
  t426 = Sin(var1[15]);
  t442 = Cos(var1[5]);
  t481 = Sin(var1[3]);
  t446 = Sin(var1[4]);
  t567 = Sin(var1[5]);
  t294 = -1. + t172;
  t295 = 4.e-6*t294;
  t448 = -1.*t75*t442*t446;
  t581 = t481*t567;
  t583 = t448 + t581;
  t661 = t442*t481;
  t669 = t75*t446*t567;
  t673 = t661 + t669;
  t722 = 7.e-6*t198;
  t221 = 2.8e-11*t198;
  t902 = Cos(var1[17]);
  t910 = -1.*t902;
  t913 = 1. + t910;
  t938 = Sin(var1[17]);
  t95 = Cos(var1[4]);
  t842 = -4.e-6*t231;
  t812 = -1.*t426*t583;
  t816 = t329*t673;
  t822 = t812 + t816;
  t872 = t329*t583;
  t879 = t426*t673;
  t893 = t872 + t879;
  t970 = 2.8e-11*t913;
  t300 = -7.e-6*t231;
  t1034 = -2.8e-11*t198;
  t245 = -1.*t231;
  t937 = 7.e-6*t913;
  t1236 = -1. + t902;
  t1243 = 4.e-6*t1236;
  t1328 = 4.e-6*t198;
  t759 = 7.e-6*t231;
  t1050 = -7.e-6*t198;
  t725 = 4.e-6*t231;
  t1432 = 4.e-6*t938;
  t1036 = t1034 + t231;
  t1039 = t75*t95*t1036;
  t1065 = t1050 + t842;
  t1067 = t1065*t822;
  t1084 = -1.000000000016*t198;
  t1105 = 1. + t1084;
  t1137 = t1105*t893;
  t1148 = t1039 + t1067 + t1137;
  t1473 = 7.e-6*t938;
  t1282 = -1.000000000049*t198;
  t1291 = 1. + t1282;
  t1293 = t1291*t75*t95;
  t1352 = t1328 + t300;
  t1356 = t1352*t822;
  t1359 = t1034 + t245;
  t1367 = t1359*t893;
  t1369 = t1293 + t1356 + t1367;
  t1574 = t1328 + t759;
  t1580 = t75*t95*t1574;
  t1589 = -6.5e-11*t198;
  t1596 = 1. + t1589;
  t1603 = t1596*t822;
  t1652 = t1050 + t725;
  t1660 = t1652*t893;
  t1708 = t1580 + t1603 + t1660;
  t1213 = -1.*t938;
  t1781 = 4.e-6*t913;
  t1254 = -7.e-6*t938;
  t1924 = -2.8e-11*t913;
  t1725 = -7.e-6*t913;
  t939 = -4.e-6*t938;
  p_output1[0]=(t369 - 0.15121*t426)*t583 + (t369 + 0.15121*t426)*t673 - 0.038576*(t1708*(t1254 + t1781) + t1148*(t1213 + t1924) + t1369*(1. - 1.000000000049*t913)) - 0.148715*(t1148*(t1432 + t1725) + t1369*(t1473 + t1781) + t1708*(1. - 6.5e-11*t913)) - 0.80315*(t1148*(1. - 1.000000000016*t913) + t1369*(t1924 + t938) + t1708*(t1725 + t939)) + var1[2] + t893*(-0.2812110000084994*t198 - 0.038749000006999997*(t221 + t231) - 1.8134809999999998e-6*(t722 + t842) - 2.7726089999999997e-12*var1[16]) + t75*t95*(-0.03874900000889869*t198 - 0.281211000004*(t221 + t245) - 1.8134809999999998e-6*(t295 + t300) + 1.5843479999999999e-12*var1[16]) + t822*(-1.1787626499999999e-16*t198 - 0.281211000004*(t722 + t725) - 0.038749000006999997*(t295 + t759) + 3.9608699999999997e-7*var1[16]) + t1148*(-0.5031510000160505*t913 - 3.367757e-6*(t937 + t939) - 0.038575000014*(t938 + t970) - 1.9784030000000015e-12*var1[17]) + t1369*(-3.367757e-6*(t1243 + t1254) - 0.03857500001589017*t913 - 0.5031510000080001*(t1213 + t970) + 1.1305160000000008e-12*var1[17]) + t1708*(-0.038575000014*(t1243 + t1473) - 2.18904205e-16*t913 - 0.5031510000080001*(t1432 + t937) + 2.826290000000002e-7*var1[17]);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "u_rearSwingFootHeight1_DiagonalStance1.hh"

namespace DiagonalStance1
{

void u_rearSwingFootHeight1_DiagonalStance1_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
