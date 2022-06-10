/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:57:18 GMT+02:00
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
  double t10914;
  double t38740;
  double t32731;
  double t37175;
  double t38741;
  double t78;
  double t5778;
  double t39495;
  double t40088;
  double t40094;
  double t40131;
  double t47410;
  double t38738;
  double t38782;
  double t39467;
  double t29977;
  double t48050;
  double t48472;
  double t50063;
  double t54066;
  double t54095;
  double t54102;
  double t54133;
  double t54249;
  double t54304;
  double t54305;
  double t54306;
  double t30824;
  double t31604;
  double t39512;
  double t39854;
  double t59662;
  double t59665;
  double t59667;
  double t54283;
  double t54293;
  double t59677;
  double t59680;
  double t59816;
  double t60095;
  double t60105;
  double t60119;
  double t60365;
  double t60384;
  double t60426;
  double t60586;
  double t60592;
  double t60595;
  double t60623;
  double t60626;
  double t60673;
  double t60688;
  double t60705;
  double t60709;
  double t62177;
  double t62346;
  double t62352;
  double t62392;
  double t62412;
  double t62419;
  double t62499;
  double t62571;
  double t62600;
  double t62720;
  double t62795;
  double t62809;
  double t62854;
  double t62867;
  double t62870;
  double t62954;
  double t62959;
  double t62966;
  t10914 = Sin(var1[3]);
  t38740 = Cos(var1[3]);
  t32731 = Cos(var1[5]);
  t37175 = Sin(var1[4]);
  t38741 = Sin(var1[5]);
  t78 = Cos(var1[4]);
  t5778 = Sin(var1[15]);
  t39495 = Cos(var1[15]);
  t40088 = t38740*t32731;
  t40094 = -1.*t10914*t37175*t38741;
  t40131 = t40088 + t40094;
  t47410 = Sin(var1[16]);
  t38738 = t32731*t10914*t37175;
  t38782 = t38740*t38741;
  t39467 = t38738 + t38782;
  t29977 = Cos(var1[16]);
  t48050 = -1.*t39495*t78*t10914;
  t48472 = -1.*t5778*t40131;
  t50063 = t48050 + t48472;
  t54066 = Sin(var1[17]);
  t54095 = -1.*t47410*t39467;
  t54102 = t29977*t50063;
  t54133 = t54095 + t54102;
  t54249 = Cos(var1[17]);
  t54304 = t29977*t39467;
  t54305 = t47410*t50063;
  t54306 = t54304 + t54305;
  t30824 = -1.*t29977;
  t31604 = 1. + t30824;
  t39512 = -1.*t39495;
  t39854 = 1. + t39512;
  t59662 = -1.*t39495*t38740*t37175;
  t59665 = -1.*t38740*t78*t5778*t38741;
  t59667 = t59662 + t59665;
  t54283 = -1.*t54249;
  t54293 = 1. + t54283;
  t59677 = t38740*t78*t32731*t47410;
  t59680 = t29977*t59667;
  t59816 = t59677 + t59680;
  t60095 = -1.*t29977*t38740*t78*t32731;
  t60105 = t47410*t59667;
  t60119 = t60095 + t60105;
  t60365 = t38740*t32731*t37175;
  t60384 = -1.*t10914*t38741;
  t60426 = t60365 + t60384;
  t60586 = t32731*t10914;
  t60592 = t38740*t37175*t38741;
  t60595 = t60586 + t60592;
  t60623 = -1.*t5778*t47410*t60426;
  t60626 = t29977*t60595;
  t60673 = t60623 + t60626;
  t60688 = -1.*t29977*t5778*t60426;
  t60705 = -1.*t47410*t60595;
  t60709 = t60688 + t60705;
  t62177 = -1.*t38740*t78*t5778;
  t62346 = -1.*t39495*t60595;
  t62352 = t62177 + t62346;
  t62392 = t39495*t38740*t78;
  t62412 = -1.*t5778*t60595;
  t62419 = t62392 + t62412;
  t62499 = -1.*t38740*t32731*t37175;
  t62571 = t10914*t38741;
  t62600 = t62499 + t62571;
  t62720 = -1.*t47410*t62600;
  t62795 = t29977*t62419;
  t62809 = t62720 + t62795;
  t62854 = -1.*t29977*t62600;
  t62867 = -1.*t47410*t62419;
  t62870 = t62854 + t62867;
  t62954 = t29977*t62600;
  t62959 = t47410*t62419;
  t62966 = t62954 + t62959;
  p_output1[0]=1.;
  p_output1[1]=-0.325*t31604*t39467 - 0.1575*t39854*t40131 + 0.325*t47410*t50063 - 0.575*t54066*t54133 - 0.575*t54293*t54306 - 0.0641*(t54133*t54249 + t54066*t54306) - 0.295*(-1.*t54066*t54133 + t54249*t54306) - 0.1575*t10914*t5778*t78 - 0.2255*(t39495*t40131 - 1.*t10914*t5778*t78);
  p_output1[2]=-0.1575*t37175*t38740*t5778 + 0.325*t47410*t59667 - 0.575*t54066*t59816 - 0.575*t54293*t60119 - 0.0641*(t54249*t59816 + t54066*t60119) - 0.295*(-1.*t54066*t59816 + t54249*t60119) + 0.325*t31604*t32731*t38740*t78 - 0.1575*t38740*t38741*t39854*t78 - 0.2255*(-1.*t37175*t38740*t5778 + t38740*t38741*t39495*t78);
  p_output1[3]=-0.2255*t39495*t60426 - 0.1575*t39854*t60426 - 0.325*t47410*t5778*t60426 - 0.325*t31604*t60595 - 0.575*t54293*t60673 - 0.575*t54066*t60709 - 0.295*(t54249*t60673 - 1.*t54066*t60709) - 0.0641*(t54066*t60673 + t54249*t60709);
  p_output1[4]=-0.1575*t5778*t60595 + 0.325*t47410*t62352 - 0.575*t29977*t54066*t62352 - 0.575*t47410*t54293*t62352 - 0.0641*(t47410*t54066*t62352 + t29977*t54249*t62352) - 0.295*(-1.*t29977*t54066*t62352 + t47410*t54249*t62352) - 0.2255*t62419 + 0.1575*t38740*t39495*t78;
  p_output1[5]=0.325*t29977*t62419 - 0.325*t47410*t62600 - 0.575*t54293*t62809 - 0.575*t54066*t62870 - 0.295*(t54249*t62809 - 1.*t54066*t62870) - 0.0641*(t54066*t62809 + t54249*t62870);
  p_output1[6]=-0.575*t54249*t62809 - 0.575*t54066*t62966 - 0.295*(-1.*t54249*t62809 - 1.*t54066*t62966) - 0.0641*(-1.*t54066*t62809 + t54249*t62966);
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

#include "J_u_rearSwingFootHeightflat_DiagonalStance_DiagonalStance.hh"

namespace SymFunction
{

void J_u_rearSwingFootHeightflat_DiagonalStance_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
