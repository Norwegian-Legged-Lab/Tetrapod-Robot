/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 23:17:09 GMT+01:00
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
  double t405;
  double t10;
  double t19;
  double t97;
  double t103;
  double t207;
  double t237;
  double t432;
  double t470;
  double t528;
  double t543;
  double t17;
  double t825;
  double t760;
  double t966;
  double t989;
  double t1001;
  double t1066;
  double t1073;
  double t1079;
  double t1094;
  double t1099;
  double t1101;
  double t1193;
  double t1671;
  double t1325;
  double t1346;
  double t1359;
  double t1417;
  double t1445;
  double t1466;
  double t1763;
  double t1774;
  double t1782;
  double t1883;
  double t2264;
  double t2363;
  double t2374;
  double t2413;
  double t2414;
  double t2439;
  double t404;
  double t519;
  double t535;
  double t592;
  double t715;
  double t135;
  double t344;
  double t2863;
  double t787;
  double t792;
  double t2998;
  double t842;
  double t871;
  double t902;
  double t913;
  double t936;
  double t2959;
  double t2999;
  double t3057;
  double t3072;
  double t3080;
  double t3084;
  double t1046;
  double t1057;
  double t1062;
  double t1185;
  double t1199;
  double t1279;
  double t3086;
  double t3089;
  double t3095;
  double t3099;
  double t3107;
  double t3111;
  double t1634;
  double t1637;
  double t1681;
  double t1693;
  double t1702;
  double t1980;
  double t1988;
  double t1990;
  double t2058;
  double t2145;
  double t3123;
  double t3139;
  double t3141;
  double t3161;
  double t3210;
  double t3213;
  double t3240;
  double t3273;
  double t2469;
  double t2475;
  double t3279;
  double t3299;
  double t3301;
  double t3307;
  double t2662;
  double t2667;
  double t3551;
  double t3552;
  double t3612;
  double t3619;
  double t3638;
  double t3669;
  double t3726;
  double t3737;
  double t3741;
  double t3752;
  double t3757;
  double t3762;
  double t3783;
  double t3784;
  double t3792;
  double t3793;
  double t3836;
  double t3858;
  double t3866;
  double t3890;
  double t3920;
  double t3921;
  double t3941;
  double t3947;
  t405 = Cos(var1[10]);
  t10 = Cos(var1[4]);
  t19 = Cos(var1[9]);
  t97 = -1.*t19;
  t103 = 1. + t97;
  t207 = Sin(var1[9]);
  t237 = -0.15121*t207;
  t432 = -1.*t405;
  t470 = 1. + t432;
  t528 = -1. + t405;
  t543 = Sin(var1[10]);
  t17 = Cos(var1[5]);
  t825 = Sin(var1[5]);
  t760 = Sin(var1[4]);
  t966 = -1.*t10*t17*t207;
  t989 = -1.*t19*t10*t825;
  t1001 = t966 + t989;
  t1066 = t19*t10*t17;
  t1073 = -1.*t10*t207*t825;
  t1079 = t1066 + t1073;
  t1094 = Cos(var1[11]);
  t1099 = -1.*t1094;
  t1101 = 1. + t1099;
  t1193 = Sin(var1[11]);
  t1671 = -1. + t1094;
  t1325 = t543*t760;
  t1346 = -4.e-6*t543*t1001;
  t1359 = -1.000000000016*t470;
  t1417 = 1. + t1359;
  t1445 = t1417*t1079;
  t1466 = t1325 + t1346 + t1445;
  t1763 = t405*t760;
  t1774 = 4.e-6*t470*t1001;
  t1782 = -1.*t543*t1079;
  t1883 = t1763 + t1774 + t1782;
  t2264 = 4.e-6*t470*t760;
  t2363 = 1.6e-11*t528;
  t2374 = 1. + t2363;
  t2413 = t2374*t1001;
  t2414 = 4.e-6*t543*t1079;
  t2439 = t2264 + t2413 + t2414;
  t404 = -4.9936e-13*var1[10];
  t519 = -0.038749*t470;
  t535 = 6.19984e-13*t528;
  t592 = -0.281210000004*t543;
  t715 = t404 + t519 + t535 + t592;
  t135 = 0.15121*t103;
  t344 = t135 + t237;
  t2863 = Sin(var1[3]);
  t787 = -0.15121*t103;
  t792 = t787 + t237;
  t2998 = Cos(var1[3]);
  t842 = -1.2484e-7*var1[10];
  t871 = 2.479936e-18*t470;
  t902 = -1.54996e-7*t528;
  t913 = 1.124840000016e-6*t543;
  t936 = t842 + t871 + t902 + t913;
  t2959 = t17*t2863*t760;
  t2999 = t2998*t825;
  t3057 = t2959 + t2999;
  t3072 = t2998*t17;
  t3080 = -1.*t2863*t760*t825;
  t3084 = t3072 + t3080;
  t1046 = 0.281210000008499*t470;
  t1057 = -0.03874900000062*t543;
  t1062 = t1046 + t1057;
  t1185 = 0.50315000001605*t1101;
  t1199 = -0.0398890000006382*t1193;
  t1279 = t1185 + t1199;
  t3086 = -1.*t207*t3057;
  t3089 = t19*t3084;
  t3095 = t3086 + t3089;
  t3099 = t19*t3057;
  t3107 = t207*t3084;
  t3111 = t3099 + t3107;
  t1634 = -5.04e-14*var1[11];
  t1637 = -0.039889*t1101;
  t1681 = 6.38224e-13*t1671;
  t1693 = -0.503150000008*t1193;
  t1702 = t1634 + t1637 + t1681 + t1693;
  t1980 = -1.26e-8*var1[11];
  t1988 = 2.552896e-18*t1101;
  t1990 = -1.59556e-7*t1671;
  t2058 = 2.012600000032e-6*t1193;
  t2145 = t1980 + t1988 + t1990 + t2058;
  t3123 = -1.*t10*t543*t2863;
  t3139 = -4.e-6*t543*t3095;
  t3141 = t1417*t3111;
  t3161 = t3123 + t3139 + t3141;
  t3210 = -1.*t405*t10*t2863;
  t3213 = 4.e-6*t470*t3095;
  t3240 = -1.*t543*t3111;
  t3273 = t3210 + t3213 + t3240;
  t2469 = 1.6e-11*t1671;
  t2475 = 1. + t2469;
  t3279 = -4.e-6*t470*t10*t2863;
  t3299 = t2374*t3095;
  t3301 = 4.e-6*t543*t3111;
  t3307 = t3279 + t3299 + t3301;
  t2662 = -1.000000000016*t1101;
  t2667 = 1. + t2662;
  t3551 = -1.*t2998*t17*t760;
  t3552 = t2863*t825;
  t3612 = t3551 + t3552;
  t3619 = t17*t2863;
  t3638 = t2998*t760*t825;
  t3669 = t3619 + t3638;
  t3726 = -1.*t207*t3612;
  t3737 = t19*t3669;
  t3741 = t3726 + t3737;
  t3752 = t19*t3612;
  t3757 = t207*t3669;
  t3762 = t3752 + t3757;
  t3783 = t2998*t10*t543;
  t3784 = -4.e-6*t543*t3741;
  t3792 = t1417*t3762;
  t3793 = t3783 + t3784 + t3792;
  t3836 = t405*t2998*t10;
  t3858 = 4.e-6*t470*t3741;
  t3866 = -1.*t543*t3762;
  t3890 = t3836 + t3858 + t3866;
  t3920 = 4.e-6*t470*t2998*t10;
  t3921 = t2374*t3741;
  t3941 = 4.e-6*t543*t3762;
  t3947 = t3920 + t3921 + t3941;
  p_output1[0]=t1062*t1079 + t1279*t1466 + t1702*t1883 + t2145*t2439 - 0.03989*(-1.*t1193*t1466 + t1094*t1883 + 4.e-6*t1101*t2439) - 0.16571*(4.e-6*t1193*t1466 + 4.e-6*t1101*t1883 + t2439*t2475) + 0.50315*(t1193*t1883 - 4.e-6*t1193*t2439 + t1466*t2667) + t10*t17*t344 + t715*t760 - 1.*t10*t792*t825 + t1001*t936 + var1[0];
  p_output1[1]=t1062*t3111 + t1279*t3161 + t1702*t3273 + t2145*t3307 - 0.03989*(-1.*t1193*t3161 + t1094*t3273 + 4.e-6*t1101*t3307) + 0.50315*(t2667*t3161 + t1193*t3273 - 4.e-6*t1193*t3307) - 0.16571*(4.e-6*t1193*t3161 + 4.e-6*t1101*t3273 + t2475*t3307) + t3057*t344 - 1.*t10*t2863*t715 + t3084*t792 + t3095*t936 + var1[1];
  p_output1[2]=t344*t3612 + t1062*t3762 + t1279*t3793 + t1702*t3890 + t2145*t3947 - 0.03989*(-1.*t1193*t3793 + t1094*t3890 + 4.e-6*t1101*t3947) + 0.50315*(t2667*t3793 + t1193*t3890 - 4.e-6*t1193*t3947) - 0.16571*(4.e-6*t1193*t3793 + 4.e-6*t1101*t3890 + t2475*t3947) + t10*t2998*t715 + t3669*t792 + t3741*t936 + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Joint_fr_knee_pitch_sphere_center.hh"

namespace SymFunction
{

void Joint_fr_knee_pitch_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
