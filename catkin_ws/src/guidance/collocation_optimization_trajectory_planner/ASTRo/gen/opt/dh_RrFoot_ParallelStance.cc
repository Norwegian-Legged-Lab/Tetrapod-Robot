/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 17:00:53 GMT+02:00
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
  double t2173;
  double t854;
  double t25039;
  double t25092;
  double t25749;
  double t25758;
  double t25763;
  double t25777;
  double t4702;
  double t15338;
  double t18111;
  double t23024;
  double t23189;
  double t25955;
  double t25959;
  double t25966;
  double t25775;
  double t25967;
  double t25970;
  double t25974;
  double t25978;
  double t25982;
  double t25983;
  double t25070;
  double t25096;
  double t25405;
  double t26199;
  double t26205;
  double t26197;
  double t26041;
  double t26073;
  double t26162;
  double t26178;
  double t26200;
  double t26212;
  double t26217;
  double t26230;
  double t26226;
  double t26227;
  double t26228;
  double t26225;
  double t26231;
  double t26232;
  double t26233;
  double t25987;
  double t25991;
  double t25992;
  double t25993;
  double t25984;
  double t25985;
  double t26317;
  double t26334;
  double t26342;
  double t26293;
  double t26298;
  double t26313;
  double t26422;
  double t26433;
  double t26442;
  double t26454;
  double t26457;
  double t26461;
  double t26483;
  double t26484;
  double t26485;
  double t26443;
  double t26446;
  double t26450;
  double t26452;
  double t26475;
  double t26476;
  double t26477;
  double t26480;
  double t26482;
  double t26528;
  double t26530;
  double t26536;
  double t26538;
  double t26543;
  double t26564;
  double t26566;
  double t26569;
  double t26572;
  double t26601;
  double t26595;
  double t26196;
  double t26222;
  double t26223;
  double t26658;
  double t26577;
  double t26582;
  double t26588;
  double t26667;
  double t26969;
  double t26974;
  t2173 = Cos(var1[17]);
  t854 = Sin(var1[17]);
  t25039 = Cos(var1[16]);
  t25092 = Sin(var1[16]);
  t25749 = t25039*t2173;
  t25758 = t25092*t854;
  t25763 = t25749 + t25758;
  t25777 = Cos(var1[15]);
  t4702 = -1.*t2173;
  t15338 = 1. + t4702;
  t18111 = -0.50321*t15338;
  t23024 = -0.19821*t2173;
  t23189 = t18111 + t23024;
  t25955 = -1.*t25777;
  t25959 = 1. + t25955;
  t25966 = -0.15121*t25959;
  t25775 = Sin(var1[15]);
  t25967 = -1.*t25039;
  t25970 = 1. + t25967;
  t25974 = -0.28121*t25970;
  t25978 = t25039*t23189;
  t25982 = 0.305*t25092*t854;
  t25983 = t25974 + t25978 + t25982;
  t25070 = -1.*t25039*t2173;
  t25096 = -1.*t25092*t854;
  t25405 = t25070 + t25096;
  t26199 = Cos(var1[5]);
  t26205 = Sin(var1[5]);
  t26197 = Cos(var1[4]);
  t26041 = -1.*t2173*t25092;
  t26073 = t25039*t854;
  t26162 = t26041 + t26073;
  t26178 = Sin(var1[4]);
  t26200 = t25777*t26199*t25405;
  t26212 = -1.*t25775*t25405*t26205;
  t26217 = t26200 + t26212;
  t26230 = Cos(var1[3]);
  t26226 = t26199*t25775*t25405;
  t26227 = t25777*t25405*t26205;
  t26228 = t26226 + t26227;
  t26225 = Sin(var1[3]);
  t26231 = t26197*t26162;
  t26232 = -1.*t26178*t26217;
  t26233 = t26231 + t26232;
  t25987 = -0.15121*t25777;
  t25991 = 0.15121*t25775;
  t25992 = t25775*t25983;
  t25993 = t25966 + t25987 + t25991 + t25992;
  t25984 = t25777*t25983;
  t25985 = t25966 + t25984;
  t26317 = -1.*t25777*t26199;
  t26334 = t25775*t26205;
  t26342 = t26317 + t26334;
  t26293 = t26199*t25775*t26162;
  t26298 = t25777*t26162*t26205;
  t26313 = t26293 + t26298;
  t26422 = t26199*t25993;
  t26433 = t25985*t26205;
  t26442 = t26422 + t26433;
  t26454 = t26199*t25985;
  t26457 = -1.*t25993*t26205;
  t26461 = t26454 + t26457;
  t26483 = t25777*t26199*t26162;
  t26484 = -1.*t25775*t26162*t26205;
  t26485 = t26483 + t26484;
  t26443 = -1.*t26342*t26442;
  t26446 = t26199*t25775;
  t26450 = t25777*t26205;
  t26452 = t26446 + t26450;
  t26475 = 0.28121*t25092;
  t26476 = t23189*t25092;
  t26477 = -0.305*t25039*t854;
  t26480 = t26475 + t26476 + t26477;
  t26482 = t26313*t26442;
  t26528 = t25763*t26178;
  t26530 = t26197*t26485;
  t26536 = t26528 + t26530;
  t26538 = t26480*t26178;
  t26543 = t26197*t26461;
  t26564 = t26538 + t26543;
  t26566 = t26197*t26480;
  t26569 = -1.*t26178*t26461;
  t26572 = t26566 + t26569;
  t26601 = -1.*t26480*t25763;
  t26595 = t26480*t26162;
  t26196 = t26162*t26178;
  t26222 = t26197*t26217;
  t26223 = t26196 + t26222;
  t26658 = -1.*t26313*t26442;
  t26577 = t26197*t25763;
  t26582 = -1.*t26178*t26485;
  t26588 = t26577 + t26582;
  t26667 = t26228*t26442;
  t26969 = t26342*t26442;
  t26974 = -1.*t26228*t26442;
  p_output1[0]=t26223*var2[0] + (t26228*t26230 - 1.*t26225*t26233)*var2[1] + (t26225*t26228 + t26230*t26233)*var2[2] + (t26536*(t26443 - 1.*t26197*t26452*t26564 + t26178*t26452*t26572) + t26197*t26452*(t26482 + t26536*t26564 + t26572*t26588))*var2[3] + (t26313*(t26443 - 1.*t26452*t26461) + t26342*(t25763*t26480 + t26482 + t26461*t26485))*var2[4] + t25763*(-1.*t25775*t25985 + t25777*t25993)*var2[5] + (-0.15121*t25405 - 0.15121*t25763)*var2[15] + (0.28121*t854 - 0.305*t2173*t854 + t23189*t854)*var2[16];
  p_output1[1]=t26197*t26452*var2[0] + (t26230*t26342 + t26178*t26225*t26452)*var2[1] + (t26225*t26342 - 1.*t26178*t26230*t26452)*var2[2] + (t26223*(-1.*t26536*t26564 - 1.*t26572*t26588 + t26658) + t26536*(t26223*t26564 + t26233*t26572 + t26667))*var2[3] + (t26228*(-1.*t26461*t26485 + t26601 + t26658) + t26313*(t26217*t26461 + t26595 + t26667))*var2[4] + (t25763*(t25405*t25777*t25985 + t25405*t25775*t25993 + t26595) + t26162*(-1.*t25777*t25985*t26162 - 1.*t25775*t25993*t26162 + t26601))*var2[5] + (-0.15121 + t25763*(t25405*t25983 + t26595) + t26162*(-1.*t25983*t26162 + t26601))*var2[15];
  p_output1[2]=t26536*var2[0] + (t26230*t26313 - 1.*t26225*t26588)*var2[1] + (t26225*t26313 + t26230*t26588)*var2[2] + (t26223*(t26197*t26452*t26564 - 1.*t26178*t26452*t26572 + t26969) + t26197*t26452*(-1.*t26223*t26564 - 1.*t26233*t26572 + t26974))*var2[3] + (t26228*(t26452*t26461 + t26969) + t26342*(-1.*t26217*t26461 - 1.*t26162*t26480 + t26974))*var2[4] + (t25775*t25985 - 1.*t25777*t25993)*t26162*var2[5] + (0.28121*t2173 + t2173*t23189 + 0.305*Power(t854,2))*var2[16] - 0.305*var2[17];
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

#include "dh_RrFoot_ParallelStance.hh"

namespace ParallelStance
{

void dh_RrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
