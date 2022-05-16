/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:32:31 GMT+02:00
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
  double t5450;
  double t5543;
  double t6973;
  double t6907;
  double t6908;
  double t6942;
  double t7136;
  double t305;
  double t7138;
  double t7140;
  double t7168;
  double t7179;
  double t7213;
  double t7222;
  double t7237;
  double t7249;
  double t7334;
  double t7336;
  double t7337;
  double t7016;
  double t7436;
  double t6829;
  double t7520;
  double t7523;
  double t7525;
  double t7578;
  double t7589;
  double t7660;
  double t7663;
  double t7670;
  double t7677;
  double t7692;
  double t7695;
  double t7699;
  double t4871;
  double t5180;
  double t9117;
  double t6898;
  double t6899;
  double t9176;
  double t9181;
  double t9504;
  double t9562;
  double t6965;
  double t6971;
  double t7028;
  double t7049;
  double t9725;
  double t10049;
  double t10070;
  double t10770;
  double t10773;
  double t10801;
  double t7250;
  double t7312;
  double t10882;
  double t11176;
  double t11237;
  double t11365;
  double t11399;
  double t11425;
  double t7655;
  double t7656;
  double t11812;
  double t11816;
  double t12021;
  double t12108;
  double t12120;
  double t12125;
  double t12135;
  double t12140;
  double t12148;
  t5450 = Cos(var1[4]);
  t5543 = Cos(var1[5]);
  t6973 = Sin(var1[5]);
  t6907 = Sin(var1[12]);
  t6908 = Sin(var1[4]);
  t6942 = Cos(var1[12]);
  t7136 = Sin(var1[13]);
  t305 = Cos(var1[13]);
  t7138 = t6942*t6908;
  t7140 = t5450*t6907*t6973;
  t7168 = t7138 + t7140;
  t7179 = Sin(var1[14]);
  t7213 = -1.*t5450*t5543*t7136;
  t7222 = t305*t7168;
  t7237 = t7213 + t7222;
  t7249 = Cos(var1[14]);
  t7334 = t305*t5450*t5543;
  t7336 = t7136*t7168;
  t7337 = t7334 + t7336;
  t7016 = Cos(var1[6]);
  t7436 = Sin(var1[6]);
  t6829 = Cos(var1[7]);
  t7520 = t7016*t6908;
  t7523 = t5450*t6973*t7436;
  t7525 = t7520 + t7523;
  t7578 = Sin(var1[7]);
  t7589 = Cos(var1[8]);
  t7660 = t5450*t5543*t6829;
  t7663 = t7525*t7578;
  t7670 = t7660 + t7663;
  t7677 = t6829*t7525;
  t7692 = -1.*t5450*t5543*t7578;
  t7695 = t7677 + t7692;
  t7699 = Sin(var1[8]);
  t4871 = -1.*t305;
  t5180 = 1. + t4871;
  t9117 = Sin(var1[3]);
  t6898 = -1.*t6829;
  t6899 = 1. + t6898;
  t9176 = t5543*t9117*t6908;
  t9181 = Cos(var1[3]);
  t9504 = t9181*t6973;
  t9562 = t9176 + t9504;
  t6965 = -1.*t6942;
  t6971 = 1. + t6965;
  t7028 = -1.*t7016;
  t7049 = 1. + t7028;
  t9725 = t9181*t5543;
  t10049 = -1.*t9117*t6908*t6973;
  t10070 = t9725 + t10049;
  t10770 = -1.*t6942*t5450*t9117;
  t10773 = -1.*t6907*t10070;
  t10801 = t10770 + t10773;
  t7250 = -1.*t7249;
  t7312 = 1. + t7250;
  t10882 = -1.*t7136*t9562;
  t11176 = t305*t10801;
  t11237 = t10882 + t11176;
  t11365 = t305*t9562;
  t11399 = t7136*t10801;
  t11425 = t11365 + t11399;
  t7655 = -1.*t7589;
  t7656 = 1. + t7655;
  t11812 = -1.*t5450*t7016*t9117;
  t11816 = -1.*t10070*t7436;
  t12021 = t11812 + t11816;
  t12108 = t6829*t9562;
  t12120 = t12021*t7578;
  t12125 = t12108 + t12120;
  t12135 = t6829*t12021;
  t12140 = -1.*t9562*t7578;
  t12148 = t12135 + t12140;
  p_output1[0]=-0.325*t5180*t5450*t5543 + 0.325*t5450*t5543*t6899 - 0.1575*t6907*t6908 - 0.1575*t5450*t6971*t6973 + 0.2255*(t6907*t6908 - 1.*t5450*t6942*t6973) - 0.1575*t5450*t6973*t7049 + 0.325*t7136*t7168 - 0.075*t7179*t7237 - 0.075*t7312*t7337 + 0.0641*(t7237*t7249 + t7179*t7337) - 0.355*(-1.*t7179*t7237 + t7249*t7337) - 0.1575*t6908*t7436 + 0.2255*(-1.*t5450*t6973*t7016 + t6908*t7436) - 0.325*t7525*t7578 + 0.075*t7656*t7670 + 0.075*t7695*t7699 - 0.0641*(t7589*t7695 + t7670*t7699) + 0.355*(t7589*t7670 - 1.*t7695*t7699);
  p_output1[1]=0.1575*t10070*t6971 + 0.1575*t10070*t7049 + 0.325*t10801*t7136 - 0.075*t11237*t7179 + 0.0641*(t11425*t7179 + t11237*t7249) - 0.355*(-1.*t11237*t7179 + t11425*t7249) - 0.075*t11425*t7312 - 0.325*t12021*t7578 + 0.075*t12125*t7656 + 0.075*t12148*t7699 - 0.0641*(t12148*t7589 + t12125*t7699) + 0.355*(t12125*t7589 - 1.*t12148*t7699) + 0.1575*t5450*t6907*t9117 + 0.1575*t5450*t7436*t9117 + 0.2255*(t10070*t6942 - 1.*t5450*t6907*t9117) + 0.2255*(t10070*t7016 - 1.*t5450*t7436*t9117) - 0.325*t5180*t9562 + 0.325*t6899*t9562;
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
