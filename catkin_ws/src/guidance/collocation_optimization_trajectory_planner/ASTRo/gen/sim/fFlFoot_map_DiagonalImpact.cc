/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:41:24 GMT+02:00
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
  double t30006;
  double t3712;
  double t23238;
  double t32824;
  double t38944;
  double t38994;
  double t39228;
  double t38940;
  double t39253;
  double t38909;
  double t39280;
  double t38617;
  double t28983;
  double t34378;
  double t34390;
  double t1715;
  double t39250;
  double t39332;
  double t39333;
  double t39381;
  double t39352;
  double t39373;
  double t39375;
  double t39347;
  double t39383;
  double t39400;
  double t39528;
  double t40463;
  double t40466;
  double t40469;
  double t41519;
  double t41588;
  double t41605;
  double t41607;
  double t41625;
  double t41632;
  double t41940;
  double t41967;
  double t41978;
  double t41995;
  double t42006;
  double t43262;
  double t44756;
  double t44799;
  double t44809;
  double t44857;
  double t44918;
  double t44932;
  double t44942;
  double t44972;
  double t45126;
  double t45134;
  double t45140;
  double t45396;
  double t45511;
  double t45529;
  double t45538;
  double t45599;
  double t45616;
  double t45717;
  double t44911;
  double t45014;
  double t45018;
  double t40462;
  double t40472;
  double t40475;
  double t40480;
  double t41042;
  double t41388;
  double t45554;
  double t45750;
  double t45926;
  double t45988;
  double t46133;
  double t46596;
  double t46637;
  double t46647;
  double t46649;
  double t41496;
  double t41497;
  double t41500;
  double t45118;
  double t46650;
  double t36164;
  double t39338;
  double t39339;
  double t46653;
  double t46655;
  double t46669;
  double t47037;
  double t47078;
  double t47221;
  double t47339;
  double t50212;
  double t50342;
  t30006 = Cos(var1[7]);
  t3712 = Cos(var1[8]);
  t23238 = Sin(var1[7]);
  t32824 = Sin(var1[8]);
  t38944 = t30006*t3712;
  t38994 = t23238*t32824;
  t39228 = t38944 + t38994;
  t38940 = Cos(var1[6]);
  t39253 = Sin(var1[5]);
  t38909 = Cos(var1[5]);
  t39280 = Sin(var1[6]);
  t38617 = Cos(var1[4]);
  t28983 = -1.*t3712*t23238;
  t34378 = t30006*t32824;
  t34390 = t28983 + t34378;
  t1715 = Sin(var1[4]);
  t39250 = t38909*t38940*t39228;
  t39332 = -1.*t39253*t39280*t39228;
  t39333 = t39250 + t39332;
  t39381 = Sin(var1[3]);
  t39352 = t38940*t39253*t39228;
  t39373 = t38909*t39280*t39228;
  t39375 = t39352 + t39373;
  t39347 = Cos(var1[3]);
  t39383 = t38617*t34390;
  t39400 = -1.*t1715*t39333;
  t39528 = t39383 + t39400;
  t40463 = t3712*t23238;
  t40466 = -1.*t30006*t32824;
  t40469 = t40463 + t40466;
  t41519 = -1.*t38940;
  t41588 = 1. + t41519;
  t41605 = 0.15121*t41588;
  t41607 = -1.*t30006;
  t41625 = 1. + t41607;
  t41632 = 0.28121*t41625;
  t41940 = -1.*t3712;
  t41967 = 1. + t41940;
  t41978 = 0.50321*t41967;
  t41995 = 0.23321*t3712;
  t42006 = t41978 + t41995;
  t43262 = t30006*t42006;
  t44756 = -0.27*t23238*t32824;
  t44799 = t41632 + t43262 + t44756;
  t44809 = t38940*t44799;
  t44857 = t41605 + t44809;
  t44918 = 0.15121*t38940;
  t44932 = -0.15121*t39280;
  t44942 = t39280*t44799;
  t44972 = t41605 + t44918 + t44932 + t44942;
  t45126 = -1.*t38940*t39253;
  t45134 = -1.*t38909*t39280;
  t45140 = t45126 + t45134;
  t45396 = 0.28121*t23238;
  t45511 = -1.*t42006*t23238;
  t45529 = -0.27*t30006*t32824;
  t45538 = t45396 + t45511 + t45529;
  t45599 = t38909*t44857;
  t45616 = -1.*t39253*t44972;
  t45717 = t45599 + t45616;
  t44911 = t39253*t44857;
  t45014 = t38909*t44972;
  t45018 = t44911 + t45014;
  t40462 = t1715*t39228;
  t40472 = t38909*t38940*t40469;
  t40475 = -1.*t39253*t39280*t40469;
  t40480 = t40472 + t40475;
  t41042 = t38617*t40480;
  t41388 = t40462 + t41042;
  t45554 = t1715*t45538;
  t45750 = t38617*t45717;
  t45926 = t45554 + t45750;
  t45988 = t38617*t45538;
  t46133 = -1.*t1715*t45717;
  t46596 = t45988 + t46133;
  t46637 = t38940*t39253*t40469;
  t46647 = t38909*t39280*t40469;
  t46649 = t46637 + t46647;
  t41496 = t38909*t38940;
  t41497 = -1.*t39253*t39280;
  t41500 = t41496 + t41497;
  t45118 = -1.*t41500*t45018;
  t46650 = t46649*t45018;
  t36164 = t1715*t34390;
  t39338 = t38617*t39333;
  t39339 = t36164 + t39338;
  t46653 = t38617*t39228;
  t46655 = -1.*t1715*t40480;
  t46669 = t46653 + t46655;
  t47037 = -1.*t46649*t45018;
  t47078 = t39375*t45018;
  t47221 = -1.*t45538*t39228;
  t47339 = t45538*t34390;
  t50212 = t41500*t45018;
  t50342 = -1.*t39375*t45018;
  p_output1[0]=t39339;
  p_output1[1]=t39347*t39375 - 1.*t39381*t39528;
  p_output1[2]=t39375*t39381 + t39347*t39528;
  p_output1[3]=t41388*(t45118 - 1.*t38617*t45140*t45926 + t1715*t45140*t46596) + t38617*t45140*(t41388*t45926 + t46650 + t46596*t46669);
  p_output1[4]=(t45118 - 1.*t45140*t45717)*t46649 + t41500*(t39228*t45538 + t40480*t45717 + t46650);
  p_output1[5]=t39228*(t39280*t44857 - 1.*t38940*t44972);
  p_output1[6]=0;
  p_output1[7]=0.28121*t32824 - 0.27*t32824*t3712 - 1.*t32824*t42006;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t38617*t45140;
  p_output1[19]=t39347*t41500 + t1715*t39381*t45140;
  p_output1[20]=t39381*t41500 - 1.*t1715*t39347*t45140;
  p_output1[21]=t39339*(-1.*t41388*t45926 - 1.*t46596*t46669 + t47037) + t41388*(t39339*t45926 + t39528*t46596 + t47078);
  p_output1[22]=t39375*(-1.*t40480*t45717 + t47037 + t47221) + t46649*(t39333*t45717 + t47078 + t47339);
  p_output1[23]=t34390*(-1.*t38940*t40469*t44857 - 1.*t39280*t40469*t44972 + t47221) + t39228*(t38940*t39228*t44857 + t39228*t39280*t44972 + t47339);
  p_output1[24]=-0.15121 + t34390*(-1.*t40469*t44799 + t47221) + t39228*(t39228*t44799 + t47339);
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t41388;
  p_output1[37]=t39347*t46649 - 1.*t39381*t46669;
  p_output1[38]=t39381*t46649 + t39347*t46669;
  p_output1[39]=t39339*(t38617*t45140*t45926 - 1.*t1715*t45140*t46596 + t50212) + t38617*t45140*(-1.*t39339*t45926 - 1.*t39528*t46596 + t50342);
  p_output1[40]=t39375*(t45140*t45717 + t50212) + t41500*(-1.*t34390*t45538 - 1.*t39333*t45717 + t50342);
  p_output1[41]=t34390*(-1.*t39280*t44857 + t38940*t44972);
  p_output1[42]=0.15121*t34390 + 0.15121*t40469;
  p_output1[43]=0.27*Power(t32824,2) + 0.28121*t3712 - 1.*t3712*t42006;
  p_output1[44]=-0.27;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fFlFoot_map_DiagonalImpact.hh"

namespace SymFunction
{

void fFlFoot_map_DiagonalImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
