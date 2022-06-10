/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:56:29 GMT+02:00
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
  double t144;
  double t141;
  double t142;
  double t145;
  double t143;
  double t233;
  double t261;
  double t285;
  double t306;
  double t289;
  double t291;
  double t292;
  double t310;
  double t135;
  double t279;
  double t262;
  double t302;
  double t315;
  double t319;
  double t340;
  double t328;
  double t329;
  double t338;
  double t327;
  double t350;
  double t351;
  double t353;
  double t607;
  double t608;
  double t611;
  double t617;
  double t620;
  double t621;
  double t623;
  double t624;
  double t633;
  double t605;
  double t616;
  double t635;
  double t636;
  double t645;
  double t647;
  double t648;
  double t649;
  double t651;
  double t652;
  double t433;
  double t438;
  double t440;
  double t515;
  double t637;
  double t639;
  double t678;
  double t679;
  double t682;
  double t685;
  double t686;
  double t690;
  double t665;
  double t672;
  double t677;
  double t644;
  double t658;
  double t662;
  double t394;
  double t396;
  double t398;
  double t683;
  double t692;
  double t693;
  double t387;
  double t409;
  double t410;
  double t411;
  double t421;
  double t428;
  double t721;
  double t723;
  double t726;
  double t743;
  double t745;
  double t747;
  double t663;
  double t754;
  double t793;
  double t803;
  double t703;
  double t706;
  double t707;
  double t263;
  double t320;
  double t321;
  double t772;
  double t784;
  double t785;
  double t958;
  double t1034;
  double t1055;
  double t1049;
  double t1070;
  double t1062;
  double t1237;
  double t1250;
  double t1349;
  double t1406;
  t144 = Cos(var1[10]);
  t141 = Cos(var1[11]);
  t142 = Sin(var1[10]);
  t145 = Sin(var1[11]);
  t143 = t141*t142;
  t233 = -1.*t144*t145;
  t261 = t143 + t233;
  t285 = Cos(var1[5]);
  t306 = Sin(var1[9]);
  t289 = t144*t141;
  t291 = t142*t145;
  t292 = t289 + t291;
  t310 = Sin(var1[5]);
  t135 = Cos(var1[9]);
  t279 = Cos(var1[4]);
  t262 = Sin(var1[4]);
  t302 = t285*t292;
  t315 = t306*t261*t310;
  t319 = t302 + t315;
  t340 = Sin(var1[3]);
  t328 = -1.*t285*t306*t261;
  t329 = t292*t310;
  t338 = t328 + t329;
  t327 = Cos(var1[3]);
  t350 = t135*t279*t261;
  t351 = -1.*t262*t319;
  t353 = t350 + t351;
  t607 = -0.0641*t141;
  t608 = -0.28*t145;
  t611 = t607 + t608;
  t617 = -1.*t141;
  t620 = 1. + t617;
  t621 = -0.575*t620;
  t623 = -0.295*t141;
  t624 = -0.0641*t145;
  t633 = t621 + t623 + t624;
  t605 = 0.325*t142;
  t616 = t144*t611;
  t635 = t142*t633;
  t636 = t605 + t616 + t635;
  t645 = -1.*t144;
  t647 = 1. + t645;
  t648 = -0.325*t647;
  t649 = -1.*t142*t611;
  t651 = t144*t633;
  t652 = t648 + t649 + t651;
  t433 = -1.*t135;
  t438 = 1. + t433;
  t440 = 0.1575*t438;
  t515 = 0.2255*t135;
  t637 = -1.*t306*t636;
  t639 = t440 + t515 + t637;
  t678 = 0.068*t306;
  t679 = t135*t636;
  t682 = t678 + t679;
  t685 = t285*t652;
  t686 = -1.*t639*t310;
  t690 = t685 + t686;
  t665 = t306*t262;
  t672 = -1.*t135*t279*t310;
  t677 = t665 + t672;
  t644 = t285*t639;
  t658 = t652*t310;
  t662 = t644 + t658;
  t394 = -1.*t141*t142;
  t396 = t144*t145;
  t398 = t394 + t396;
  t683 = t682*t262;
  t692 = t279*t690;
  t693 = t683 + t692;
  t387 = t135*t292*t262;
  t409 = t285*t398;
  t410 = t306*t292*t310;
  t411 = t409 + t410;
  t421 = t279*t411;
  t428 = t387 + t421;
  t721 = t279*t682;
  t723 = -1.*t262*t690;
  t726 = t721 + t723;
  t743 = -1.*t285*t306*t292;
  t745 = t398*t310;
  t747 = t743 + t745;
  t663 = -1.*t135*t285*t662;
  t754 = t662*t747;
  t793 = -1.*t306*t682;
  t803 = t135*t682*t292;
  t703 = t279*t306;
  t706 = t135*t262*t310;
  t707 = t703 + t706;
  t263 = t135*t261*t262;
  t320 = t279*t319;
  t321 = t263 + t320;
  t772 = t135*t279*t292;
  t784 = -1.*t262*t411;
  t785 = t772 + t784;
  t958 = t662*t338;
  t1034 = -1.*t662*t747;
  t1055 = -1.*t135*t682*t292;
  t1049 = t135*t682*t261;
  t1070 = t652*t292;
  t1062 = -1.*t652*t398;
  t1237 = t135*t285*t662;
  t1250 = -1.*t662*t338;
  t1349 = t306*t682;
  t1406 = -1.*t135*t682*t261;
  p_output1[0]=t321;
  p_output1[1]=t327*t338 - 1.*t340*t353;
  p_output1[2]=t338*t340 + t327*t353;
  p_output1[3]=t428*(t663 - 1.*t677*t693 - 1.*t707*t726) + t677*(t428*t693 + t754 + t726*t785);
  p_output1[4]=t747*(t663 + t135*t310*t690 + t793) + t135*t285*(t411*t690 + t754 + t803);
  p_output1[5]=t135*t292*(-1.*t135*t639 + t793) + t306*(-1.*t292*t306*t639 + t398*t652 + t803);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=-0.1575*t261 - 0.2255*t398;
  p_output1[10]=-0.325*t145 - 1.*t141*t611 - 1.*t145*t633;
  p_output1[11]=-0.0641;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t677;
  p_output1[19]=t135*t285*t327 - 1.*t340*t707;
  p_output1[20]=t135*t285*t340 + t327*t707;
  p_output1[21]=t321*(t1034 - 1.*t428*t693 - 1.*t726*t785) + t428*(t321*t693 + t353*t726 + t958);
  p_output1[22]=t338*(t1034 + t1055 - 1.*t411*t690) + t747*(t1049 + t319*t690 + t958);
  p_output1[23]=t135*t292*(t1049 + t1070 - 1.*t261*t306*t639) + t135*t261*(t1055 + t1062 + t292*t306*t639);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=t398*(t1070 + t261*t636) + t292*(t1062 - 1.*t292*t636);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t428;
  p_output1[37]=t327*t747 - 1.*t340*t785;
  p_output1[38]=t340*t747 + t327*t785;
  p_output1[39]=t677*(t1250 - 1.*t321*t693 - 1.*t353*t726) + t321*(t1237 + t677*t693 + t707*t726);
  p_output1[40]=t338*(t1237 + t1349 - 1.*t135*t310*t690) + t135*t285*(t1250 + t1406 - 1.*t319*t690);
  p_output1[41]=t135*t261*(t1349 + t135*t639) + t306*(t1406 + t261*t306*t639 - 1.*t292*t652);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0.068*t292;
  p_output1[46]=0.325*t141 - 1.*t145*t611 + t141*t633;
  p_output1[47]=-0.28;
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

#include "fRlFoot_map_DiagonalStance.hh"

namespace SymFunction
{

void fRlFoot_map_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
