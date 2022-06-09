/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:08:18 GMT+02:00
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
  double t18682;
  double t19138;
  double t19715;
  double t19717;
  double t19720;
  double t20025;
  double t20039;
  double t20048;
  double t20049;
  double t20063;
  double t20095;
  double t20102;
  double t20265;
  double t20086;
  double t20087;
  double t20330;
  double t20345;
  double t20354;
  double t20364;
  double t20373;
  double t20378;
  double t19734;
  double t19813;
  double t19915;
  double t20486;
  double t20495;
  double t20505;
  double t20474;
  double t20482;
  double t20483;
  double t20801;
  double t20810;
  double t20891;
  double t20311;
  double t20317;
  double t20277;
  double t20289;
  double t21171;
  double t21232;
  double t21233;
  double t21239;
  double t21248;
  double t21254;
  double t21269;
  double t21278;
  double t21284;
  double t21411;
  double t21421;
  double t21427;
  double t21433;
  double t21437;
  double t21523;
  double t21529;
  double t21537;
  double t21752;
  double t21755;
  double t21760;
  double t21849;
  double t21877;
  double t21897;
  double t21926;
  double t21931;
  double t21935;
  double t22318;
  double t22323;
  double t22342;
  double t22381;
  double t22411;
  double t22413;
  double t22540;
  double t22611;
  double t22716;
  double t23318;
  double t23343;
  double t23357;
  double t23278;
  double t23279;
  double t23303;
  double t23633;
  double t23635;
  double t23637;
  double t23640;
  double t23810;
  double t23819;
  double t23821;
  double t23827;
  double t23831;
  double t21451;
  double t21459;
  double t21499;
  double t23856;
  double t23857;
  double t23858;
  double t23864;
  double t23865;
  double t23866;
  double t23860;
  double t23861;
  double t23862;
  double t23900;
  double t23904;
  double t23906;
  double t23933;
  double t23937;
  double t23938;
  double t23624;
  double t23945;
  double t23947;
  double t24038;
  double t24055;
  double t24060;
  double t24070;
  double t24275;
  double t24355;
  double t24882;
  double t24902;
  double t24921;
  double t24957;
  double t24975;
  double t24991;
  double t25025;
  double t25041;
  double t25045;
  double t23940;
  double t23941;
  double t23942;
  double t25402;
  double t25403;
  double t25409;
  double t25435;
  double t25440;
  double t25442;
  double t25413;
  double t25415;
  double t25417;
  double t25481;
  double t25489;
  double t25490;
  double t23908;
  double t23909;
  double t23911;
  double t23876;
  t18682 = Cos(var1[6]);
  t19138 = Sin(var1[4]);
  t19715 = Cos(var1[4]);
  t19717 = Sin(var1[5]);
  t19720 = Sin(var1[6]);
  t20025 = t19715*t18682*t19717;
  t20039 = -1.*t19138*t19720;
  t20048 = t20025 + t20039;
  t20049 = Sin(var1[7]);
  t20063 = Cos(var1[8]);
  t20095 = Cos(var1[7]);
  t20102 = Sin(var1[8]);
  t20265 = Cos(var1[5]);
  t20086 = -1.*t20063;
  t20087 = 1. + t20086;
  t20330 = -1.*t19715*t20095*t19717;
  t20345 = t19715*t20265*t19720*t20049;
  t20354 = t20330 + t20345;
  t20364 = t19715*t20265*t20095*t19720;
  t20373 = t19715*t19717*t20049;
  t20378 = t20364 + t20373;
  t19734 = t18682*t19138;
  t19813 = t19715*t19717*t19720;
  t19915 = t19734 + t19813;
  t20486 = -1.*t19715*t20265*t20095;
  t20495 = -1.*t19915*t20049;
  t20505 = t20486 + t20495;
  t20474 = t20095*t19915;
  t20482 = -1.*t19715*t20265*t20049;
  t20483 = t20474 + t20482;
  t20801 = t19715*t20265*t20095;
  t20810 = t19915*t20049;
  t20891 = t20801 + t20810;
  t20311 = -1.*t20095;
  t20317 = 1. + t20311;
  t20277 = -1.*t18682;
  t20289 = 1. + t20277;
  t21171 = t19715*t18682;
  t21232 = -1.*t19138*t19717*t19720;
  t21233 = t21171 + t21232;
  t21239 = -1.*t20265*t20095*t19138;
  t21248 = t21233*t20049;
  t21254 = t21239 + t21248;
  t21269 = t20095*t21233;
  t21278 = t20265*t19138*t20049;
  t21284 = t21269 + t21278;
  t21411 = Sin(var1[3]);
  t21421 = Cos(var1[3]);
  t21427 = t21421*t20265;
  t21433 = -1.*t21411*t19138*t19717;
  t21437 = t21427 + t21433;
  t21523 = -1.*t18682*t21437;
  t21529 = t19715*t21411*t19720;
  t21537 = t21523 + t21529;
  t21752 = -1.*t20265*t21411*t19138;
  t21755 = -1.*t21421*t19717;
  t21760 = t21752 + t21755;
  t21849 = t20095*t21437;
  t21877 = -1.*t21760*t19720*t20049;
  t21897 = t21849 + t21877;
  t21926 = -1.*t20095*t21760*t19720;
  t21931 = -1.*t21437*t20049;
  t21935 = t21926 + t21931;
  t22318 = t18682*t21411*t19138;
  t22323 = t19715*t21411*t19717*t19720;
  t22342 = t22318 + t22323;
  t22381 = t19715*t20265*t20095*t21411;
  t22411 = t22342*t20049;
  t22413 = t22381 + t22411;
  t22540 = t20095*t22342;
  t22611 = -1.*t19715*t20265*t21411*t20049;
  t22716 = t22540 + t22611;
  t23318 = -1.*t20265*t21411;
  t23343 = -1.*t21421*t19138*t19717;
  t23357 = t23318 + t23343;
  t23278 = t21421*t20265*t19138;
  t23279 = -1.*t21411*t19717;
  t23303 = t23278 + t23279;
  t23633 = -1.*t21421*t19715*t18682;
  t23635 = -1.*t23357*t19720;
  t23637 = t23633 + t23635;
  t23640 = t20095*t23303;
  t23810 = t23637*t20049;
  t23819 = t23640 + t23810;
  t23821 = t20095*t23637;
  t23827 = -1.*t23303*t20049;
  t23831 = t23821 + t23827;
  t21451 = -1.*t19715*t18682*t21411;
  t21459 = -1.*t21437*t19720;
  t21499 = t21451 + t21459;
  t23856 = t20265*t21411*t19138;
  t23857 = t21421*t19717;
  t23858 = t23856 + t23857;
  t23864 = -1.*t20095*t23858;
  t23865 = -1.*t21499*t20049;
  t23866 = t23864 + t23865;
  t23860 = t20095*t21499;
  t23861 = -1.*t23858*t20049;
  t23862 = t23860 + t23861;
  t23900 = t20095*t23858;
  t23904 = t21499*t20049;
  t23906 = t23900 + t23904;
  t23933 = t20265*t21411;
  t23937 = t21421*t19138*t19717;
  t23938 = t23933 + t23937;
  t23624 = -1.*t21421*t19715*t19720;
  t23945 = -1.*t18682*t23938;
  t23947 = t23945 + t23624;
  t24038 = t20095*t23938;
  t24055 = -1.*t23303*t19720*t20049;
  t24060 = t24038 + t24055;
  t24070 = -1.*t20095*t23303*t19720;
  t24275 = -1.*t23938*t20049;
  t24355 = t24070 + t24275;
  t24882 = -1.*t21421*t18682*t19138;
  t24902 = -1.*t21421*t19715*t19717*t19720;
  t24921 = t24882 + t24902;
  t24957 = -1.*t21421*t19715*t20265*t20095;
  t24975 = t24921*t20049;
  t24991 = t24957 + t24975;
  t25025 = t20095*t24921;
  t25041 = t21421*t19715*t20265*t20049;
  t25045 = t25025 + t25041;
  t23940 = t21421*t19715*t18682;
  t23941 = -1.*t23938*t19720;
  t23942 = t23940 + t23941;
  t25402 = -1.*t21421*t20265*t19138;
  t25403 = t21411*t19717;
  t25409 = t25402 + t25403;
  t25435 = -1.*t20095*t25409;
  t25440 = -1.*t23942*t20049;
  t25442 = t25435 + t25440;
  t25413 = t20095*t23942;
  t25415 = -1.*t25409*t20049;
  t25417 = t25413 + t25415;
  t25481 = t20095*t25409;
  t25489 = t23942*t20049;
  t25490 = t25481 + t25489;
  t23908 = t20063*t23906;
  t23909 = -1.*t23862*t20102;
  t23911 = t23908 + t23909;
  t23876 = t20063*t23862;
  p_output1[0]=var2[0] + (-0.1575*t19715*t19720 + 0.2255*(t18682*t19138*t19717 + t19715*t19720) + 0.1575*t19138*t19717*t20289 - 0.325*t19138*t20265*t20317 - 0.325*t20049*t21233 + 0.075*t20087*t21254 + 0.075*t20102*t21284 - 0.0641*(t20102*t21254 + t20063*t21284) + 0.355*(t20063*t21254 - 1.*t20102*t21284))*var2[4] + (-0.2255*t18682*t19715*t20265 - 0.325*t19715*t19720*t20049*t20265 - 0.1575*t19715*t20265*t20289 - 0.325*t19715*t19717*t20317 + 0.075*t20087*t20354 + 0.075*t20102*t20378 - 0.0641*(t20102*t20354 + t20063*t20378) + 0.355*(t20063*t20354 - 1.*t20102*t20378))*var2[5] + (-0.1575*t18682*t19138 - 0.1575*t19715*t19717*t19720 + 0.2255*t19915 - 0.325*t20048*t20049 + 0.075*t20048*t20049*t20087 + 0.075*t20048*t20095*t20102 - 0.0641*(t20048*t20063*t20095 + t20048*t20049*t20102) + 0.355*(t20048*t20049*t20063 - 1.*t20048*t20095*t20102))*var2[6] + (-0.325*t19915*t20095 + 0.325*t19715*t20049*t20265 + 0.075*t20087*t20483 + 0.075*t20102*t20505 - 0.0641*(t20102*t20483 + t20063*t20505) + 0.355*(t20063*t20483 - 1.*t20102*t20505))*var2[7] + (0.075*t20063*t20483 + 0.075*t20102*t20891 - 0.0641*(-1.*t20102*t20483 + t20063*t20891) + 0.355*(-1.*t20063*t20483 - 1.*t20102*t20891))*var2[8];
  p_output1[1]=var2[1] + (0.1575*t19715*t19720*t21421 + 0.325*t20317*t23303 + 0.1575*t20289*t23357 + 0.2255*(t18682*t23357 + t23624) - 0.325*t20049*t23637 + 0.075*t20087*t23819 + 0.075*t20102*t23831 - 0.0641*(t20102*t23819 + t20063*t23831) + 0.355*(t20063*t23819 - 1.*t20102*t23831))*var2[3] + (-0.1575*t19138*t19720*t21411 - 0.1575*t19715*t19717*t20289*t21411 + 0.325*t19715*t20265*t20317*t21411 + 0.2255*(-1.*t18682*t19715*t19717*t21411 + t19138*t19720*t21411) - 0.325*t20049*t22342 + 0.075*t20087*t22413 + 0.075*t20102*t22716 - 0.0641*(t20102*t22413 + t20063*t22716) + 0.355*(t20063*t22413 - 1.*t20102*t22716))*var2[4] + (0.325*t20317*t21437 + 0.2255*t18682*t21760 + 0.325*t19720*t20049*t21760 + 0.1575*t20289*t21760 + 0.075*t20087*t21897 + 0.075*t20102*t21935 - 0.0641*(t20102*t21897 + t20063*t21935) + 0.355*(t20063*t21897 - 1.*t20102*t21935))*var2[5] + (0.1575*t18682*t19715*t21411 + 0.1575*t19720*t21437 + 0.2255*t21499 - 0.325*t20049*t21537 + 0.075*t20049*t20087*t21537 + 0.075*t20095*t20102*t21537 - 0.0641*(t20063*t20095*t21537 + t20049*t20102*t21537) + 0.355*(t20049*t20063*t21537 - 1.*t20095*t20102*t21537))*var2[6] + (-0.325*t20095*t21499 + 0.325*t20049*t23858 + 0.075*t20087*t23862 + 0.075*t20102*t23866 - 0.0641*(t20102*t23862 + t20063*t23866) + 0.355*(-1.*t20102*t23866 + t23876))*var2[7] + (0.075*t20063*t23862 + 0.075*t20102*t23906 + 0.355*(-1.*t20063*t23862 - 1.*t20102*t23906) - 0.0641*t23911)*var2[8];
  p_output1[2]=var2[2] + (0.1575*t19715*t19720*t21411 + 0.1575*t20289*t21437 + 0.2255*(-1.*t19715*t19720*t21411 + t18682*t21437) - 0.325*t20049*t21499 + 0.325*t20317*t23858 + 0.075*t20102*t23862 + 0.075*t20087*t23906 - 0.0641*(t23876 + t20102*t23906) + 0.355*t23911)*var2[3] + (0.1575*t19138*t19720*t21421 + 0.1575*t19715*t19717*t20289*t21421 - 0.325*t19715*t20265*t20317*t21421 + 0.2255*(t18682*t19715*t19717*t21421 - 1.*t19138*t19720*t21421) - 0.325*t20049*t24921 + 0.075*t20087*t24991 + 0.075*t20102*t25045 - 0.0641*(t20102*t24991 + t20063*t25045) + 0.355*(t20063*t24991 - 1.*t20102*t25045))*var2[4] + (0.2255*t18682*t23303 + 0.325*t19720*t20049*t23303 + 0.1575*t20289*t23303 + 0.325*t20317*t23938 + 0.075*t20087*t24060 + 0.075*t20102*t24355 - 0.0641*(t20102*t24060 + t20063*t24355) + 0.355*(t20063*t24060 - 1.*t20102*t24355))*var2[5] + (-0.1575*t18682*t19715*t21421 + 0.1575*t19720*t23938 + 0.2255*t23942 - 0.325*t20049*t23947 + 0.075*t20049*t20087*t23947 + 0.075*t20095*t20102*t23947 - 0.0641*(t20063*t20095*t23947 + t20049*t20102*t23947) + 0.355*(t20049*t20063*t23947 - 1.*t20095*t20102*t23947))*var2[6] + (-0.325*t20095*t23942 + 0.325*t20049*t25409 + 0.075*t20087*t25417 + 0.075*t20102*t25442 - 0.0641*(t20102*t25417 + t20063*t25442) + 0.355*(t20063*t25417 - 1.*t20102*t25442))*var2[7] + (0.075*t20063*t25417 + 0.075*t20102*t25490 - 0.0641*(-1.*t20102*t25417 + t20063*t25490) + 0.355*(-1.*t20063*t25417 - 1.*t20102*t25490))*var2[8];
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

#include "impact_velocity_FlFoot_ParallelStance.hh"

namespace ParallelStance
{

void impact_velocity_FlFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
