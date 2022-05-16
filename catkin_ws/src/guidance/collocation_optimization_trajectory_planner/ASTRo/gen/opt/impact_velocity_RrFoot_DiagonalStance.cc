/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:42:29 GMT+02:00
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
  double t1562;
  double t10075;
  double t10359;
  double t10375;
  double t10431;
  double t12478;
  double t4541;
  double t18434;
  double t18584;
  double t20164;
  double t20283;
  double t20287;
  double t22426;
  double t23223;
  double t23248;
  double t18007;
  double t18790;
  double t19323;
  double t20787;
  double t22694;
  double t22763;
  double t22808;
  double t23255;
  double t23364;
  double t23438;
  double t23612;
  double t23695;
  double t23698;
  double t23699;
  double t23706;
  double t23791;
  double t25356;
  double t25364;
  double t25365;
  double t25386;
  double t25363;
  double t25387;
  double t25631;
  double t25647;
  double t25648;
  double t25859;
  double t27515;
  double t27543;
  double t27544;
  double t18416;
  double t15152;
  double t17394;
  double t27906;
  double t27908;
  double t27912;
  double t27916;
  double t27919;
  double t27922;
  double t27927;
  double t27956;
  double t27964;
  double t28377;
  double t28968;
  double t28971;
  double t28995;
  double t29016;
  double t29033;
  double t29049;
  double t29088;
  double t29113;
  double t29222;
  double t29832;
  double t29824;
  double t29833;
  double t29836;
  double t29841;
  double t29843;
  double t29857;
  double t29872;
  double t29897;
  double t30015;
  double t24039;
  double t24489;
  double t24635;
  double t24994;
  double t30158;
  double t30205;
  double t30242;
  double t30365;
  double t30498;
  double t30115;
  double t31324;
  double t31341;
  double t31371;
  double t31449;
  double t31455;
  double t31457;
  double t31598;
  double t31602;
  double t31609;
  double t31684;
  double t31749;
  double t32063;
  double t32270;
  double t32303;
  double t32340;
  double t32719;
  double t32820;
  double t32824;
  double t32596;
  double t32838;
  double t32842;
  double t32857;
  double t32899;
  double t32935;
  double t33872;
  double t33878;
  double t33964;
  double t34352;
  double t34360;
  double t34378;
  double t34390;
  double t34400;
  double t34406;
  double t34422;
  double t34425;
  double t34427;
  double t34639;
  double t34645;
  double t34647;
  double t34656;
  double t34665;
  double t34678;
  double t34931;
  double t34935;
  double t34939;
  double t34966;
  double t34968;
  double t34761;
  double t35140;
  double t35144;
  double t35148;
  double t35103;
  double t35152;
  double t35158;
  double t35170;
  double t35180;
  double t35203;
  double t35308;
  double t35318;
  t1562 = Cos(var1[4]);
  t10075 = Cos(var1[15]);
  t10359 = -1.*t10075;
  t10375 = 1. + t10359;
  t10431 = -0.15121*t10375;
  t12478 = Sin(var1[15]);
  t4541 = Cos(var1[5]);
  t18434 = Sin(var1[5]);
  t18584 = Cos(var1[16]);
  t20164 = -1.*t1562*t4541*t12478;
  t20283 = -1.*t10075*t1562*t18434;
  t20287 = t20164 + t20283;
  t22426 = Cos(var1[17]);
  t23223 = Sin(var1[16]);
  t23248 = Sin(var1[17]);
  t18007 = -0.15121*t12478;
  t18790 = -1.*t18584;
  t19323 = 1. + t18790;
  t20787 = -0.28121*t19323*t20287;
  t22694 = -1.*t22426;
  t22763 = 1. + t22694;
  t22808 = -0.50321*t18584*t22763*t20287;
  t23255 = 0.50321*t23223*t23248*t20287;
  t23364 = -1.*t10075*t1562*t4541;
  t23438 = t1562*t12478*t18434;
  t23612 = t23364 + t23438;
  t23695 = -0.15121*t23612;
  t23698 = t18584*t22426*t20287;
  t23699 = t23223*t23248*t20287;
  t23706 = t23698 + t23699;
  t23791 = -0.23321*t23706;
  t25356 = Sin(var1[4]);
  t25364 = t10075*t1562*t4541;
  t25365 = -1.*t1562*t12478*t18434;
  t25386 = t25364 + t25365;
  t25363 = t23223*t25356;
  t25387 = t18584*t25386;
  t25631 = t25363 + t25387;
  t25647 = t18584*t25356;
  t25648 = -1.*t23223*t25386;
  t25859 = t25647 + t25648;
  t27515 = -1.*t23223*t25356;
  t27543 = -1.*t18584*t25386;
  t27544 = t27515 + t27543;
  t18416 = t10431 + t18007;
  t15152 = 0.15121*t12478;
  t17394 = t10431 + t15152;
  t27906 = -1.*t10075*t4541*t25356;
  t27908 = t12478*t25356*t18434;
  t27912 = t27906 + t27908;
  t27916 = t1562*t23223;
  t27919 = t18584*t27912;
  t27922 = t27916 + t27919;
  t27927 = t18584*t1562;
  t27956 = -1.*t23223*t27912;
  t27964 = t27927 + t27956;
  t28377 = Sin(var1[3]);
  t28968 = t10075*t1562*t4541*t28377;
  t28971 = -1.*t1562*t12478*t28377*t18434;
  t28995 = t28968 + t28971;
  t29016 = t23223*t28377*t25356;
  t29033 = t18584*t28995;
  t29049 = t29016 + t29033;
  t29088 = t18584*t28377*t25356;
  t29113 = -1.*t23223*t28995;
  t29222 = t29088 + t29113;
  t29832 = Cos(var1[3]);
  t29824 = -1.*t4541*t28377*t25356;
  t29833 = -1.*t29832*t18434;
  t29836 = t29824 + t29833;
  t29841 = t29832*t4541;
  t29843 = -1.*t28377*t25356*t18434;
  t29857 = t29841 + t29843;
  t29872 = t12478*t29836;
  t29897 = t10075*t29857;
  t30015 = t29872 + t29897;
  t24039 = -0.15121*t10075;
  t24489 = t24039 + t18007;
  t24635 = 0.15121*t10075;
  t24994 = t24635 + t18007;
  t30158 = t4541*t28377*t25356;
  t30205 = t29832*t18434;
  t30242 = t30158 + t30205;
  t30365 = -1.*t12478*t30242;
  t30498 = t30365 + t29897;
  t30115 = -1.*t12478*t29857;
  t31324 = t29832*t4541*t25356;
  t31341 = -1.*t28377*t18434;
  t31371 = t31324 + t31341;
  t31449 = -1.*t4541*t28377;
  t31455 = -1.*t29832*t25356*t18434;
  t31457 = t31449 + t31455;
  t31598 = t10075*t31371;
  t31602 = t12478*t31457;
  t31609 = t31598 + t31602;
  t31684 = -1.*t29832*t1562*t23223;
  t31749 = t18584*t31609;
  t32063 = t31684 + t31749;
  t32270 = -1.*t18584*t29832*t1562;
  t32303 = -1.*t23223*t31609;
  t32340 = t32270 + t32303;
  t32719 = t10075*t30242;
  t32820 = t12478*t29857;
  t32824 = t32719 + t32820;
  t32596 = -1.*t1562*t23223*t28377;
  t32838 = t18584*t32824;
  t32842 = t32596 + t32838;
  t32857 = -1.*t18584*t1562*t28377;
  t32899 = -1.*t23223*t32824;
  t32935 = t32857 + t32899;
  t33872 = t1562*t23223*t28377;
  t33878 = -1.*t18584*t32824;
  t33964 = t33872 + t33878;
  t34352 = -1.*t10075*t29832*t1562*t4541;
  t34360 = t29832*t1562*t12478*t18434;
  t34378 = t34352 + t34360;
  t34390 = -1.*t29832*t23223*t25356;
  t34400 = t18584*t34378;
  t34406 = t34390 + t34400;
  t34422 = -1.*t18584*t29832*t25356;
  t34425 = -1.*t23223*t34378;
  t34427 = t34422 + t34425;
  t34639 = t4541*t28377;
  t34645 = t29832*t25356*t18434;
  t34647 = t34639 + t34645;
  t34656 = t12478*t31371;
  t34665 = t10075*t34647;
  t34678 = t34656 + t34665;
  t34931 = -1.*t29832*t4541*t25356;
  t34935 = t28377*t18434;
  t34939 = t34931 + t34935;
  t34966 = -1.*t12478*t34939;
  t34968 = t34966 + t34665;
  t34761 = -1.*t12478*t34647;
  t35140 = t10075*t34939;
  t35144 = t12478*t34647;
  t35148 = t35140 + t35144;
  t35103 = t29832*t1562*t23223;
  t35152 = t18584*t35148;
  t35158 = t35103 + t35152;
  t35170 = t18584*t29832*t1562;
  t35180 = -1.*t23223*t35148;
  t35203 = t35170 + t35180;
  t35308 = -1.*t18584*t35148;
  t35318 = t31684 + t35308;
  p_output1[0]=var2[0] + (0.28121*t1562*t23223 + t17394*t18434*t25356 - 0.28121*t19323*t27912 - 0.50321*t22763*t27922 - 0.50321*t23248*t27964 - 0.23321*(t22426*t27922 - 1.*t23248*t27964) - 1.*t18416*t25356*t4541 - 0.15121*(t10075*t18434*t25356 + t12478*t25356*t4541))*var2[4] + (-1.*t1562*t18416*t18434 + t20787 + t22808 + t23255 + t23695 + t23791 - 1.*t1562*t17394*t4541)*var2[5] + (t20787 + t22808 + t23255 + t23695 + t23791 - 1.*t1562*t18434*t24994 + t1562*t24489*t4541)*var2[15] + (0.28121*t18584*t25356 - 0.28121*t23223*t25386 - 0.50321*t22763*t25859 - 0.50321*t23248*t27544 - 0.23321*(t22426*t25859 - 1.*t23248*t27544))*var2[16] + (-0.50321*t23248*t25631 - 0.50321*t22426*t25859 - 0.23321*(-1.*t23248*t25631 - 1.*t22426*t25859))*var2[17];
  p_output1[1]=var2[1] + (-0.28121*t1562*t23223*t29832 + t18416*t31371 + t17394*t31457 - 0.15121*(-1.*t12478*t31371 + t10075*t31457) - 0.28121*t19323*t31609 - 0.50321*t22763*t32063 - 0.50321*t23248*t32340 - 0.23321*(t22426*t32063 - 1.*t23248*t32340))*var2[3] + (-1.*t1562*t17394*t18434*t28377 + 0.28121*t23223*t25356*t28377 - 0.28121*t19323*t28995 - 0.50321*t22763*t29049 - 0.50321*t23248*t29222 - 0.23321*(t22426*t29049 - 1.*t23248*t29222) + t1562*t18416*t28377*t4541 - 0.15121*(-1.*t10075*t1562*t18434*t28377 - 1.*t12478*t1562*t28377*t4541))*var2[4] + (t17394*t29836 + t18416*t29857 - 0.28121*t19323*t30015 - 0.50321*t18584*t22763*t30015 + 0.50321*t23223*t23248*t30015 - 0.23321*(t18584*t22426*t30015 + t23223*t23248*t30015) - 0.15121*(t10075*t29836 + t30115))*var2[5] + (t24994*t29857 + t24489*t30242 - 0.15121*(t30115 - 1.*t10075*t30242) - 0.28121*t19323*t30498 - 0.50321*t18584*t22763*t30498 + 0.50321*t23223*t23248*t30498 - 0.23321*(t18584*t22426*t30498 + t23223*t23248*t30498))*var2[15] + (-0.28121*t1562*t18584*t28377 - 0.28121*t23223*t32824 - 0.50321*t22763*t32935 - 0.50321*t23248*t33964 - 0.23321*(t22426*t32935 - 1.*t23248*t33964))*var2[16] + (-0.50321*t23248*t32842 - 0.50321*t22426*t32935 - 0.23321*(-1.*t23248*t32842 - 1.*t22426*t32935))*var2[17];
  p_output1[2]=var2[2] + (-0.28121*t1562*t23223*t28377 + t17394*t29857 + t18416*t30242 - 0.15121*t30498 - 0.28121*t19323*t32824 - 0.50321*t22763*t32842 - 0.50321*t23248*t32935 - 0.23321*(t22426*t32842 - 1.*t23248*t32935))*var2[3] + (t1562*t17394*t18434*t29832 - 0.28121*t23223*t25356*t29832 - 0.28121*t19323*t34378 - 0.50321*t22763*t34406 - 0.50321*t23248*t34427 - 0.23321*(t22426*t34406 - 1.*t23248*t34427) - 1.*t1562*t18416*t29832*t4541 - 0.15121*(t10075*t1562*t18434*t29832 + t12478*t1562*t29832*t4541))*var2[4] + (t17394*t31371 + t18416*t34647 - 0.28121*t19323*t34678 - 0.50321*t18584*t22763*t34678 + 0.50321*t23223*t23248*t34678 - 0.23321*(t18584*t22426*t34678 + t23223*t23248*t34678) - 0.15121*(t31598 + t34761))*var2[5] + (t24994*t34647 + t24489*t34939 - 0.15121*(t34761 - 1.*t10075*t34939) - 0.28121*t19323*t34968 - 0.50321*t18584*t22763*t34968 + 0.50321*t23223*t23248*t34968 - 0.23321*(t18584*t22426*t34968 + t23223*t23248*t34968))*var2[15] + (0.28121*t1562*t18584*t29832 - 0.28121*t23223*t35148 - 0.50321*t22763*t35203 - 0.50321*t23248*t35318 - 0.23321*(t22426*t35203 - 1.*t23248*t35318))*var2[16] + (-0.50321*t23248*t35158 - 0.50321*t22426*t35203 - 0.23321*(-1.*t23248*t35158 - 1.*t22426*t35203))*var2[17];
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

#include "impact_velocity_RrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void impact_velocity_RrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
