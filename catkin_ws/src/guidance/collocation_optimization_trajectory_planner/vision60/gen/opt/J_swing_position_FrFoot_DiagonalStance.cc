/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:47:02 GMT+02:00
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
  double t8355;
  double t10201;
  double t10174;
  double t10198;
  double t10262;
  double t8347;
  double t8354;
  double t10462;
  double t10477;
  double t10478;
  double t10482;
  double t10505;
  double t10199;
  double t10271;
  double t10278;
  double t10148;
  double t10506;
  double t10510;
  double t10519;
  double t10521;
  double t10522;
  double t10524;
  double t10529;
  double t10533;
  double t10536;
  double t10537;
  double t10538;
  double t10153;
  double t10173;
  double t10466;
  double t10471;
  double t10885;
  double t10886;
  double t10887;
  double t10534;
  double t10535;
  double t10895;
  double t10897;
  double t10902;
  double t10911;
  double t10924;
  double t10950;
  double t11111;
  double t11115;
  double t11133;
  double t11160;
  double t11161;
  double t11162;
  double t11168;
  double t11171;
  double t11180;
  double t11185;
  double t11187;
  double t11188;
  double t11228;
  double t11229;
  double t11233;
  double t11242;
  double t11243;
  double t11246;
  double t11433;
  double t11435;
  double t11772;
  double t12164;
  double t12166;
  double t12251;
  double t12260;
  double t12266;
  double t12275;
  double t12359;
  double t12426;
  double t12449;
  t8355 = Sin(var1[3]);
  t10201 = Cos(var1[3]);
  t10174 = Cos(var1[5]);
  t10198 = Sin(var1[4]);
  t10262 = Sin(var1[5]);
  t8347 = Cos(var1[4]);
  t8354 = Sin(var1[12]);
  t10462 = Cos(var1[12]);
  t10477 = t10201*t10174;
  t10478 = -1.*t8355*t10198*t10262;
  t10482 = t10477 + t10478;
  t10505 = Sin(var1[13]);
  t10199 = t10174*t8355*t10198;
  t10271 = t10201*t10262;
  t10278 = t10199 + t10271;
  t10148 = Cos(var1[13]);
  t10506 = -1.*t10462*t8347*t8355;
  t10510 = -1.*t8354*t10482;
  t10519 = t10506 + t10510;
  t10521 = Sin(var1[14]);
  t10522 = -1.*t10505*t10278;
  t10524 = t10148*t10519;
  t10529 = t10522 + t10524;
  t10533 = Cos(var1[14]);
  t10536 = t10148*t10278;
  t10537 = t10505*t10519;
  t10538 = t10536 + t10537;
  t10153 = -1.*t10148;
  t10173 = 1. + t10153;
  t10466 = -1.*t10462;
  t10471 = 1. + t10466;
  t10885 = -1.*t10462*t10201*t10198;
  t10886 = -1.*t10201*t8347*t8354*t10262;
  t10887 = t10885 + t10886;
  t10534 = -1.*t10533;
  t10535 = 1. + t10534;
  t10895 = t10201*t8347*t10174*t10505;
  t10897 = t10148*t10887;
  t10902 = t10895 + t10897;
  t10911 = -1.*t10148*t10201*t8347*t10174;
  t10924 = t10505*t10887;
  t10950 = t10911 + t10924;
  t11111 = t10201*t10174*t10198;
  t11115 = -1.*t8355*t10262;
  t11133 = t11111 + t11115;
  t11160 = t10174*t8355;
  t11161 = t10201*t10198*t10262;
  t11162 = t11160 + t11161;
  t11168 = -1.*t8354*t10505*t11133;
  t11171 = t10148*t11162;
  t11180 = t11168 + t11171;
  t11185 = -1.*t10148*t8354*t11133;
  t11187 = -1.*t10505*t11162;
  t11188 = t11185 + t11187;
  t11228 = -1.*t10201*t8347*t8354;
  t11229 = -1.*t10462*t11162;
  t11233 = t11228 + t11229;
  t11242 = t10462*t10201*t8347;
  t11243 = -1.*t8354*t11162;
  t11246 = t11242 + t11243;
  t11433 = -1.*t10201*t10174*t10198;
  t11435 = t8355*t10262;
  t11772 = t11433 + t11435;
  t12164 = -1.*t10505*t11772;
  t12166 = t10148*t11246;
  t12251 = t12164 + t12166;
  t12260 = -1.*t10148*t11772;
  t12266 = -1.*t10505*t11246;
  t12275 = t12260 + t12266;
  t12359 = t10148*t11772;
  t12426 = t10505*t11246;
  t12449 = t12359 + t12426;
  p_output1[0]=1.;
  p_output1[1]=0.325*t10173*t10278 - 0.1575*t10471*t10482 - 0.325*t10505*t10519 + 0.075*t10521*t10529 + 0.075*t10535*t10538 - 0.0641*(t10529*t10533 + t10521*t10538) + 0.355*(-1.*t10521*t10529 + t10533*t10538) - 0.1575*t8347*t8354*t8355 - 0.2255*(t10462*t10482 - 1.*t8347*t8354*t8355);
  p_output1[2]=-0.325*t10505*t10887 + 0.075*t10521*t10902 + 0.075*t10535*t10950 - 0.0641*(t10533*t10902 + t10521*t10950) + 0.355*(-1.*t10521*t10902 + t10533*t10950) - 0.325*t10173*t10174*t10201*t8347 - 0.1575*t10201*t10262*t10471*t8347 - 0.1575*t10198*t10201*t8354 - 0.2255*(t10201*t10262*t10462*t8347 - 1.*t10198*t10201*t8354);
  p_output1[3]=-0.2255*t10462*t11133 - 0.1575*t10471*t11133 + 0.325*t10173*t11162 + 0.075*t10535*t11180 + 0.075*t10521*t11188 + 0.355*(t10533*t11180 - 1.*t10521*t11188) - 0.0641*(t10521*t11180 + t10533*t11188) + 0.325*t10505*t11133*t8354;
  p_output1[4]=-0.325*t10505*t11233 + 0.075*t10148*t10521*t11233 + 0.075*t10505*t10535*t11233 - 0.0641*(t10505*t10521*t11233 + t10148*t10533*t11233) + 0.355*(-1.*t10148*t10521*t11233 + t10505*t10533*t11233) - 0.2255*t11246 + 0.1575*t10201*t10462*t8347 - 0.1575*t11162*t8354;
  p_output1[5]=-0.325*t10148*t11246 + 0.325*t10505*t11772 + 0.075*t10535*t12251 + 0.075*t10521*t12275 + 0.355*(t10533*t12251 - 1.*t10521*t12275) - 0.0641*(t10521*t12251 + t10533*t12275);
  p_output1[6]=0.075*t10533*t12251 + 0.075*t10521*t12449 + 0.355*(-1.*t10533*t12251 - 1.*t10521*t12449) - 0.0641*(-1.*t10521*t12251 + t10533*t12449);
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

#include "J_swing_position_FrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void J_swing_position_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
