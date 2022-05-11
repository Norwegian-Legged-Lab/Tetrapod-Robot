/*
 * Automatically Generated from Mathematica.
 * Fri 4 Feb 2022 15:51:57 GMT+01:00
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
  double t130;
  double t67;
  double t96;
  double t97;
  double t98;
  double t105;
  double t110;
  double t135;
  double t140;
  double t150;
  double t160;
  double t95;
  double t257;
  double t175;
  double t1649;
  double t1731;
  double t1787;
  double t3727;
  double t3775;
  double t3795;
  double t3827;
  double t3999;
  double t4046;
  double t4305;
  double t4899;
  double t4491;
  double t4538;
  double t4577;
  double t4607;
  double t4619;
  double t4651;
  double t4945;
  double t4947;
  double t4950;
  double t4951;
  double t5251;
  double t5296;
  double t5329;
  double t5332;
  double t5344;
  double t5354;
  double t125;
  double t145;
  double t155;
  double t165;
  double t170;
  double t100;
  double t115;
  double t5728;
  double t185;
  double t191;
  double t5904;
  double t315;
  double t317;
  double t595;
  double t795;
  double t1581;
  double t5894;
  double t5921;
  double t5923;
  double t5926;
  double t5934;
  double t5935;
  double t2463;
  double t3166;
  double t3656;
  double t4232;
  double t4359;
  double t4460;
  double t6076;
  double t6081;
  double t6085;
  double t6254;
  double t6270;
  double t6274;
  double t4793;
  double t4835;
  double t4904;
  double t4925;
  double t4935;
  double t5017;
  double t5025;
  double t5030;
  double t5191;
  double t5208;
  double t6357;
  double t6361;
  double t6369;
  double t6373;
  double t6410;
  double t6414;
  double t6418;
  double t6449;
  double t5427;
  double t5429;
  double t6600;
  double t6632;
  double t6673;
  double t6747;
  double t5678;
  double t5692;
  double t7278;
  double t7279;
  double t7280;
  double t7291;
  double t7304;
  double t7306;
  double t7320;
  double t7326;
  double t7327;
  double t7371;
  double t7406;
  double t7424;
  double t7454;
  double t7460;
  double t7481;
  double t7483;
  double t7502;
  double t7524;
  double t7534;
  double t7535;
  double t7540;
  double t7546;
  double t7552;
  double t7559;
  t130 = Cos(var1[10]);
  t67 = Cos(var1[4]);
  t96 = Cos(var1[9]);
  t97 = -1.*t96;
  t98 = 1. + t97;
  t105 = Sin(var1[9]);
  t110 = -0.15121*t105;
  t135 = -1.*t130;
  t140 = 1. + t135;
  t150 = -1. + t130;
  t160 = Sin(var1[10]);
  t95 = Cos(var1[5]);
  t257 = Sin(var1[5]);
  t175 = Sin(var1[4]);
  t1649 = -1.*t67*t95*t105;
  t1731 = -1.*t96*t67*t257;
  t1787 = t1649 + t1731;
  t3727 = t96*t67*t95;
  t3775 = -1.*t67*t105*t257;
  t3795 = t3727 + t3775;
  t3827 = Cos(var1[11]);
  t3999 = -1.*t3827;
  t4046 = 1. + t3999;
  t4305 = Sin(var1[11]);
  t4899 = -1. + t3827;
  t4491 = t160*t175;
  t4538 = -4.e-6*t160*t1787;
  t4577 = -1.000000000016*t140;
  t4607 = 1. + t4577;
  t4619 = t4607*t3795;
  t4651 = t4491 + t4538 + t4619;
  t4945 = t130*t175;
  t4947 = 4.e-6*t140*t1787;
  t4950 = -1.*t160*t3795;
  t4951 = t4945 + t4947 + t4950;
  t5251 = 4.e-6*t140*t175;
  t5296 = 1.6e-11*t150;
  t5329 = 1. + t5296;
  t5332 = t5329*t1787;
  t5344 = 4.e-6*t160*t3795;
  t5354 = t5251 + t5332 + t5344;
  t125 = -4.9936e-13*var1[10];
  t145 = -0.038749*t140;
  t155 = 6.19984e-13*t150;
  t165 = -0.281210000004*t160;
  t170 = t125 + t145 + t155 + t165;
  t100 = 0.15121*t98;
  t115 = t100 + t110;
  t5728 = Sin(var1[3]);
  t185 = -0.15121*t98;
  t191 = t185 + t110;
  t5904 = Cos(var1[3]);
  t315 = -1.2484e-7*var1[10];
  t317 = 2.479936e-18*t140;
  t595 = -1.54996e-7*t150;
  t795 = 1.124840000016e-6*t160;
  t1581 = t315 + t317 + t595 + t795;
  t5894 = t95*t5728*t175;
  t5921 = t5904*t257;
  t5923 = t5894 + t5921;
  t5926 = t5904*t95;
  t5934 = -1.*t5728*t175*t257;
  t5935 = t5926 + t5934;
  t2463 = 0.281210000008499*t140;
  t3166 = -0.03874900000062*t160;
  t3656 = t2463 + t3166;
  t4232 = 0.50315000001605*t4046;
  t4359 = -0.0398890000006382*t4305;
  t4460 = t4232 + t4359;
  t6076 = -1.*t105*t5923;
  t6081 = t96*t5935;
  t6085 = t6076 + t6081;
  t6254 = t96*t5923;
  t6270 = t105*t5935;
  t6274 = t6254 + t6270;
  t4793 = -5.04e-14*var1[11];
  t4835 = -0.039889*t4046;
  t4904 = 6.38224e-13*t4899;
  t4925 = -0.503150000008*t4305;
  t4935 = t4793 + t4835 + t4904 + t4925;
  t5017 = -1.26e-8*var1[11];
  t5025 = 2.552896e-18*t4046;
  t5030 = -1.59556e-7*t4899;
  t5191 = 2.012600000032e-6*t4305;
  t5208 = t5017 + t5025 + t5030 + t5191;
  t6357 = -1.*t67*t160*t5728;
  t6361 = -4.e-6*t160*t6085;
  t6369 = t4607*t6274;
  t6373 = t6357 + t6361 + t6369;
  t6410 = -1.*t130*t67*t5728;
  t6414 = 4.e-6*t140*t6085;
  t6418 = -1.*t160*t6274;
  t6449 = t6410 + t6414 + t6418;
  t5427 = 1.6e-11*t4899;
  t5429 = 1. + t5427;
  t6600 = -4.e-6*t140*t67*t5728;
  t6632 = t5329*t6085;
  t6673 = 4.e-6*t160*t6274;
  t6747 = t6600 + t6632 + t6673;
  t5678 = -1.000000000016*t4046;
  t5692 = 1. + t5678;
  t7278 = -1.*t5904*t95*t175;
  t7279 = t5728*t257;
  t7280 = t7278 + t7279;
  t7291 = t95*t5728;
  t7304 = t5904*t175*t257;
  t7306 = t7291 + t7304;
  t7320 = -1.*t105*t7280;
  t7326 = t96*t7306;
  t7327 = t7320 + t7326;
  t7371 = t96*t7280;
  t7406 = t105*t7306;
  t7424 = t7371 + t7406;
  t7454 = t5904*t67*t160;
  t7460 = -4.e-6*t160*t7327;
  t7481 = t4607*t7424;
  t7483 = t7454 + t7460 + t7481;
  t7502 = t130*t5904*t67;
  t7524 = 4.e-6*t140*t7327;
  t7534 = -1.*t160*t7424;
  t7535 = t7502 + t7524 + t7534;
  t7540 = 4.e-6*t140*t5904*t67;
  t7546 = t5329*t7327;
  t7552 = 4.e-6*t160*t7424;
  t7559 = t7540 + t7546 + t7552;
  p_output1[0]=t170*t175 + t1581*t1787 + t3656*t3795 + t4460*t4651 + t4935*t4951 + t5208*t5354 - 0.03989*(-1.*t4305*t4651 + t3827*t4951 + 4.e-6*t4046*t5354) - 0.16571*(4.e-6*t4305*t4651 + 4.e-6*t4046*t4951 + t5354*t5429) + 0.50315*(t4305*t4951 - 4.e-6*t4305*t5354 + t4651*t5692) - 1.*t191*t257*t67 + t115*t67*t95 + var1[0];
  p_output1[1]=t115*t5923 + t191*t5935 + t1581*t6085 + t3656*t6274 + t4460*t6373 + t4935*t6449 - 1.*t170*t5728*t67 + t5208*t6747 - 0.03989*(-1.*t4305*t6373 + t3827*t6449 + 4.e-6*t4046*t6747) + 0.50315*(t5692*t6373 + t4305*t6449 - 4.e-6*t4305*t6747) - 0.16571*(4.e-6*t4305*t6373 + 4.e-6*t4046*t6449 + t5429*t6747) + var1[1];
  p_output1[2]=t170*t5904*t67 + t115*t7280 + t191*t7306 + t1581*t7327 + t3656*t7424 + t4460*t7483 + t4935*t7535 + t5208*t7559 - 0.03989*(-1.*t4305*t7483 + t3827*t7535 + 4.e-6*t4046*t7559) + 0.50315*(t5692*t7483 + t4305*t7535 - 4.e-6*t4305*t7559) - 0.16571*(4.e-6*t4305*t7483 + 4.e-6*t4046*t7535 + t5429*t7559) + var1[2];
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
