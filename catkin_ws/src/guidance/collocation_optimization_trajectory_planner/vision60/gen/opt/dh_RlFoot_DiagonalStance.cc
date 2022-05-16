/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:31:57 GMT+02:00
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
  double t13;
  double t3101;
  double t3694;
  double t3722;
  double t3868;
  double t3858;
  double t2537;
  double t3336;
  double t3393;
  double t3430;
  double t3478;
  double t3521;
  double t3544;
  double t3574;
  double t3612;
  double t3966;
  double t3973;
  double t4018;
  double t4045;
  double t3813;
  double t3828;
  double t3841;
  double t3942;
  double t4099;
  double t4145;
  double t4287;
  double t4288;
  double t4291;
  double t4174;
  double t4176;
  double t4180;
  double t4207;
  double t4242;
  double t4261;
  double t3712;
  double t3741;
  double t3761;
  double t4540;
  double t4559;
  double t4537;
  double t4491;
  double t4543;
  double t4565;
  double t4566;
  double t4633;
  double t4603;
  double t4605;
  double t4615;
  double t4602;
  double t4635;
  double t4644;
  double t4653;
  double t4164;
  double t4311;
  double t4323;
  double t4365;
  double t4374;
  double t4406;
  double t4407;
  double t4413;
  double t4783;
  double t4784;
  double t4802;
  double t4735;
  double t4748;
  double t4750;
  double t4752;
  double t4766;
  double t4767;
  double t4836;
  double t4844;
  double t4892;
  double t4806;
  double t4982;
  double t4988;
  double t4993;
  double t4832;
  double t4995;
  double t4996;
  double t5009;
  double t4966;
  double t4967;
  double t4971;
  double t5067;
  double t5068;
  double t5070;
  double t5208;
  double t5166;
  double t5021;
  double t5036;
  double t5052;
  double t5191;
  double t5169;
  double t5556;
  double t4495;
  double t4586;
  double t4588;
  double t5591;
  double t5120;
  double t5122;
  double t5123;
  double t6305;
  double t6326;
  double t7071;
  double t7319;
  t13 = Cos(var1[11]);
  t3101 = Sin(var1[11]);
  t3694 = Sin(var1[10]);
  t3722 = Cos(var1[10]);
  t3868 = Sin(var1[9]);
  t3858 = Cos(var1[9]);
  t2537 = -0.0641*t13;
  t3336 = -0.28*t3101;
  t3393 = t2537 + t3336;
  t3430 = -1.*t13;
  t3478 = 1. + t3430;
  t3521 = -0.575*t3478;
  t3544 = -0.295*t13;
  t3574 = -0.0641*t3101;
  t3612 = t3521 + t3544 + t3574;
  t3966 = 0.325*t3694;
  t3973 = t3722*t3393;
  t4018 = t3694*t3612;
  t4045 = t3966 + t3973 + t4018;
  t3813 = -1.*t13*t3694;
  t3828 = t3722*t3101;
  t3841 = t3813 + t3828;
  t3942 = 0.068*t3868;
  t4099 = t3858*t4045;
  t4145 = t3942 + t4099;
  t4287 = t3722*t13;
  t4288 = t3694*t3101;
  t4291 = t4287 + t4288;
  t4174 = -1.*t3858;
  t4176 = 1. + t4174;
  t4180 = 0.1575*t4176;
  t4207 = 0.2255*t3858;
  t4242 = -1.*t3868*t4045;
  t4261 = t4180 + t4207 + t4242;
  t3712 = t13*t3694;
  t3741 = -1.*t3722*t3101;
  t3761 = t3712 + t3741;
  t4540 = Cos(var1[5]);
  t4559 = Sin(var1[5]);
  t4537 = Cos(var1[4]);
  t4491 = Sin(var1[4]);
  t4543 = t4540*t4291;
  t4565 = t3868*t3761*t4559;
  t4566 = t4543 + t4565;
  t4633 = Cos(var1[3]);
  t4603 = -1.*t4540*t3868*t3761;
  t4605 = t4291*t4559;
  t4615 = t4603 + t4605;
  t4602 = Sin(var1[3]);
  t4635 = t3858*t4537*t3761;
  t4644 = -1.*t4491*t4566;
  t4653 = t4635 + t4644;
  t4164 = -1.*t3868*t4145;
  t4311 = -1.*t3722;
  t4323 = 1. + t4311;
  t4365 = -0.325*t4323;
  t4374 = -1.*t3694*t3393;
  t4406 = t3722*t3612;
  t4407 = t4365 + t4374 + t4406;
  t4413 = t3858*t4145*t4291;
  t4783 = t4540*t4261;
  t4784 = t4407*t4559;
  t4802 = t4783 + t4784;
  t4735 = -1.*t4540*t3868*t4291;
  t4748 = t3841*t4559;
  t4750 = t4735 + t4748;
  t4752 = t4540*t4407;
  t4766 = -1.*t4261*t4559;
  t4767 = t4752 + t4766;
  t4836 = t4540*t3841;
  t4844 = t3868*t4291*t4559;
  t4892 = t4836 + t4844;
  t4806 = -1.*t3858*t4540*t4802;
  t4982 = t3868*t4491;
  t4988 = -1.*t3858*t4537*t4559;
  t4993 = t4982 + t4988;
  t4832 = t4802*t4750;
  t4995 = t4145*t4491;
  t4996 = t4537*t4767;
  t5009 = t4995 + t4996;
  t4966 = t3858*t4291*t4491;
  t4967 = t4537*t4892;
  t4971 = t4966 + t4967;
  t5067 = t4537*t4145;
  t5068 = -1.*t4491*t4767;
  t5070 = t5067 + t5068;
  t5208 = t4407*t4291;
  t5166 = -1.*t4407*t3841;
  t5021 = t4537*t3868;
  t5036 = t3858*t4491*t4559;
  t5052 = t5021 + t5036;
  t5191 = t3858*t4145*t3761;
  t5169 = -1.*t3858*t4145*t4291;
  t5556 = t4802*t4615;
  t4495 = t3858*t3761*t4491;
  t4586 = t4537*t4566;
  t4588 = t4495 + t4586;
  t5591 = -1.*t4802*t4750;
  t5120 = t3858*t4537*t4291;
  t5122 = -1.*t4491*t4892;
  t5123 = t5120 + t5122;
  t6305 = t3868*t4145;
  t6326 = -1.*t3858*t4145*t3761;
  t7071 = t3858*t4540*t4802;
  t7319 = -1.*t4802*t4615;
  p_output1[0]=t4588*var2[0] + (t4615*t4633 - 1.*t4602*t4653)*var2[1] + (t4602*t4615 + t4633*t4653)*var2[2] + (t4971*(t4806 - 1.*t4993*t5009 - 1.*t5052*t5070) + t4993*(t4832 + t4971*t5009 + t5070*t5123))*var2[3] + (t4750*(t4164 + t3858*t4559*t4767 + t4806) + t3858*t4540*(t4413 + t4832 + t4767*t4892))*var2[4] + (t3858*(t4164 - 1.*t3858*t4261)*t4291 + t3868*(-1.*t3868*t4261*t4291 + t3841*t4407 + t4413))*var2[5] + (-0.1575*t3761 - 0.2255*t3841)*var2[9] + (-0.325*t3101 - 1.*t13*t3393 - 1.*t3101*t3612)*var2[10] - 0.0641*var2[11];
  p_output1[1]=t4993*var2[0] + (t3858*t4540*t4633 - 1.*t4602*t5052)*var2[1] + (t3858*t4540*t4602 + t4633*t5052)*var2[2] + (t4971*(t4588*t5009 + t4653*t5070 + t5556) + t4588*(-1.*t4971*t5009 - 1.*t5070*t5123 + t5591))*var2[3] + (t4750*(t4566*t4767 + t5191 + t5556) + t4615*(-1.*t4767*t4892 + t5169 + t5591))*var2[4] + (t3761*t3858*(t3868*t4261*t4291 + t5166 + t5169) + t3858*t4291*(-1.*t3761*t3868*t4261 + t5191 + t5208))*var2[5] + (t4291*(-1.*t4045*t4291 + t5166) + t3841*(t3761*t4045 + t5208))*var2[9];
  p_output1[2]=t4971*var2[0] + (t4633*t4750 - 1.*t4602*t5123)*var2[1] + (t4602*t4750 + t4633*t5123)*var2[2] + (t4588*(t4993*t5009 + t5052*t5070 + t7071) + t4993*(-1.*t4588*t5009 - 1.*t4653*t5070 + t7319))*var2[3] + (t4615*(-1.*t3858*t4559*t4767 + t6305 + t7071) + t3858*t4540*(-1.*t4566*t4767 + t6326 + t7319))*var2[4] + (t3761*t3858*(t3858*t4261 + t6305) + t3868*(t3761*t3868*t4261 - 1.*t4291*t4407 + t6326))*var2[5] + 0.068*t4291*var2[9] + (0.325*t13 - 1.*t3101*t3393 + t13*t3612)*var2[10] - 0.28*var2[11];
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
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
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

#include "dh_RlFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void dh_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
