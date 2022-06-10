/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 13:03:17 GMT+02:00
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
  double t2404;
  double t5869;
  double t6101;
  double t6168;
  double t6396;
  double t6408;
  double t6436;
  double t6455;
  double t6440;
  double t6456;
  double t6443;
  double t6459;
  double t6568;
  double t6840;
  double t6994;
  double t6999;
  double t2707;
  double t4291;
  double t7178;
  double t7604;
  double t7605;
  double t7609;
  double t7625;
  double t7713;
  double t7720;
  double t7722;
  double t7727;
  double t7728;
  double t7731;
  double t7732;
  double t6202;
  double t6433;
  double t6584;
  double t6638;
  double t7758;
  double t7760;
  double t7762;
  double t7770;
  double t7771;
  double t7772;
  double t7180;
  double t7559;
  double t7626;
  double t7655;
  double t7789;
  double t7790;
  double t7793;
  double t7799;
  double t7800;
  double t7801;
  double t7803;
  double t7804;
  double t7805;
  double t7831;
  double t7832;
  double t7846;
  double t7849;
  double t7850;
  double t7855;
  double t7857;
  double t7859;
  double t7860;
  t2404 = Cos(var1[3]);
  t5869 = Cos(var1[9]);
  t6101 = -1.*t5869;
  t6168 = 1. + t6101;
  t6396 = Sin(var1[9]);
  t6408 = 0.15121*t6396;
  t6436 = Cos(var1[5]);
  t6455 = Sin(var1[3]);
  t6440 = Sin(var1[4]);
  t6456 = Sin(var1[5]);
  t6443 = -1.*t2404*t6436*t6440;
  t6459 = t6455*t6456;
  t6568 = t6443 + t6459;
  t6840 = t6436*t6455;
  t6994 = t2404*t6440*t6456;
  t6999 = t6840 + t6994;
  t2707 = Cos(var1[4]);
  t4291 = Sin(var1[10]);
  t7178 = Cos(var1[10]);
  t7604 = t5869*t6568;
  t7605 = t6396*t6999;
  t7609 = t7604 + t7605;
  t7625 = Cos(var1[11]);
  t7713 = t2404*t2707*t4291;
  t7720 = t7178*t7609;
  t7722 = t7713 + t7720;
  t7727 = Sin(var1[11]);
  t7728 = t7178*t2404*t2707;
  t7731 = -1.*t4291*t7609;
  t7732 = t7728 + t7731;
  t6202 = -0.15121*t6168;
  t6433 = t6202 + t6408;
  t6584 = 0.15121*t6168;
  t6638 = t6584 + t6408;
  t7758 = t6436*t6455*t6440;
  t7760 = t2404*t6456;
  t7762 = t7758 + t7760;
  t7770 = t2404*t6436;
  t7771 = -1.*t6455*t6440*t6456;
  t7772 = t7770 + t7771;
  t7180 = -1.*t7178;
  t7559 = 1. + t7180;
  t7626 = -1.*t7625;
  t7655 = 1. + t7626;
  t7789 = t5869*t7762;
  t7790 = t6396*t7772;
  t7793 = t7789 + t7790;
  t7799 = -1.*t2707*t4291*t6455;
  t7800 = t7178*t7793;
  t7801 = t7799 + t7800;
  t7803 = -1.*t7178*t2707*t6455;
  t7804 = -1.*t4291*t7793;
  t7805 = t7803 + t7804;
  t7831 = t5869*t2707*t6436;
  t7832 = -1.*t2707*t6396*t6456;
  t7846 = t7831 + t7832;
  t7849 = t4291*t6440;
  t7850 = t7178*t7846;
  t7855 = t7849 + t7850;
  t7857 = t7178*t6440;
  t7859 = -1.*t4291*t7846;
  t7860 = t7857 + t7859;
  p_output1[0]=0.28121*t2404*t2707*t4291 + t6433*t6568 + t6638*t6999 + 0.15121*(-1.*t6396*t6568 + t5869*t6999) - 0.28121*t7559*t7609 - 0.50321*t7655*t7722 - 0.50321*t7727*t7732 - 0.19821*(t7625*t7722 - 1.*t7727*t7732) + var1[2] - 0.5*(-0.28121*t2707*t4291*t6455 + t6433*t7762 + t6638*t7772 + 0.15121*(-1.*t6396*t7762 + t5869*t7772) - 0.28121*t7559*t7793 - 0.50321*t7655*t7801 - 0.50321*t7727*t7805 - 0.19821*(t7625*t7801 - 1.*t7727*t7805) + var1[1])*var3[0]*(1. + Tanh((t2707*t6433*t6436 + 0.28121*t4291*t6440 + 0.15121*(-1.*t2707*t6396*t6436 - 1.*t2707*t5869*t6456) - 1.*t2707*t6456*t6638 - 0.28121*t7559*t7846 - 0.50321*t7655*t7855 - 0.50321*t7727*t7860 - 0.19821*(t7625*t7855 - 1.*t7727*t7860) + var1[0] - 1.*var2[0])*var4[0]));
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

#include "u_rearSwingFootHeightskewed_DiagonalStance2.hh"

namespace SymFunction
{

void u_rearSwingFootHeightskewed_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
