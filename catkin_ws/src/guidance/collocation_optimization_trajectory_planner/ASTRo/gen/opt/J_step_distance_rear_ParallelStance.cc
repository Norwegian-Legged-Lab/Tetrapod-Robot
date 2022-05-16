/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:43:53 GMT+02:00
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
  double t44735;
  double t45444;
  double t45541;
  double t45451;
  double t45474;
  double t45479;
  double t45484;
  double t45507;
  double t45635;
  double t45665;
  double t45730;
  double t45781;
  double t45806;
  double t45833;
  double t45270;
  double t45894;
  double t45913;
  double t45918;
  double t45920;
  double t45308;
  double t45932;
  double t45967;
  double t45973;
  double t46000;
  double t46017;
  double t46029;
  double t46032;
  double t46033;
  double t46037;
  double t46038;
  double t46039;
  double t46040;
  double t46043;
  double t46057;
  double t46065;
  double t46066;
  double t46071;
  double t46076;
  double t46077;
  double t46087;
  double t45824;
  double t45825;
  double t45843;
  double t45844;
  double t45482;
  double t45516;
  double t45815;
  double t45820;
  double t45904;
  double t45911;
  double t46022;
  double t46025;
  double t46179;
  double t46180;
  double t46182;
  double t45940;
  double t45959;
  double t46050;
  double t46052;
  double t46187;
  double t46188;
  double t46189;
  double t46231;
  double t46183;
  double t46185;
  double t46186;
  double t46200;
  double t46201;
  double t46202;
  double t46203;
  double t46208;
  double t46209;
  double t46210;
  double t46211;
  double t46273;
  double t46274;
  double t46275;
  double t46281;
  double t46283;
  double t46286;
  double t46290;
  double t46291;
  double t46292;
  double t46308;
  double t46314;
  double t46315;
  double t46190;
  double t46192;
  double t46197;
  double t46204;
  double t46205;
  double t46206;
  double t46207;
  double t46216;
  double t46220;
  double t46227;
  double t46228;
  double t46374;
  double t46375;
  double t46376;
  double t46379;
  double t46380;
  double t46381;
  double t46383;
  double t46384;
  double t46385;
  double t46393;
  double t46394;
  double t46395;
  double t46403;
  double t46406;
  double t46408;
  double t46409;
  double t46410;
  double t46414;
  double t46415;
  double t46417;
  double t46428;
  double t46429;
  double t46430;
  double t46432;
  double t46433;
  double t46434;
  double t46436;
  double t46437;
  double t46438;
  double t46440;
  double t46441;
  double t46442;
  double t46444;
  double t46446;
  double t46447;
  double t46449;
  double t46450;
  double t46451;
  double t46479;
  double t46480;
  double t46481;
  double t46483;
  double t46484;
  double t46485;
  double t46488;
  double t46489;
  double t46490;
  double t46492;
  double t46493;
  double t46494;
  double t46496;
  double t46497;
  double t46498;
  double t46500;
  double t46501;
  double t46502;
  double t46514;
  double t46515;
  double t46516;
  double t46519;
  double t46522;
  double t46524;
  double t46528;
  double t46530;
  double t46533;
  double t46538;
  double t46539;
  double t46540;
  double t46232;
  double t46244;
  double t46265;
  double t46608;
  double t46609;
  double t46610;
  double t46614;
  double t46615;
  double t46554;
  double t46631;
  double t46632;
  double t46633;
  double t46635;
  double t46640;
  double t46642;
  double t46645;
  double t46646;
  double t46648;
  double t46658;
  double t46666;
  double t46667;
  double t46328;
  double t46330;
  double t46332;
  double t46338;
  double t46683;
  double t46684;
  double t46573;
  double t46698;
  double t46699;
  double t46700;
  double t46703;
  double t46705;
  double t46706;
  double t46708;
  double t46709;
  double t46710;
  double t46717;
  double t46718;
  double t46719;
  t44735 = Cos(var1[4]);
  t45444 = Cos(var1[5]);
  t45541 = Sin(var1[4]);
  t45451 = Cos(var1[9]);
  t45474 = -1.*t45451;
  t45479 = 1. + t45474;
  t45484 = Sin(var1[9]);
  t45507 = 0.15121*t45484;
  t45635 = Cos(var1[15]);
  t45665 = -1.*t45635;
  t45730 = 1. + t45665;
  t45781 = -0.15121*t45730;
  t45806 = Sin(var1[15]);
  t45833 = Sin(var1[5]);
  t45270 = Sin(var1[10]);
  t45894 = Cos(var1[10]);
  t45913 = -1.*t45451*t45444*t45541;
  t45918 = t45484*t45541*t45833;
  t45920 = t45913 + t45918;
  t45308 = Sin(var1[16]);
  t45932 = Cos(var1[16]);
  t45967 = -1.*t45635*t45444*t45541;
  t45973 = t45806*t45541*t45833;
  t46000 = t45967 + t45973;
  t46017 = Cos(var1[11]);
  t46029 = t44735*t45270;
  t46032 = t45894*t45920;
  t46033 = t46029 + t46032;
  t46037 = Sin(var1[11]);
  t46038 = t45894*t44735;
  t46039 = -1.*t45270*t45920;
  t46040 = t46038 + t46039;
  t46043 = Cos(var1[17]);
  t46057 = t44735*t45308;
  t46065 = t45932*t46000;
  t46066 = t46057 + t46065;
  t46071 = Sin(var1[17]);
  t46076 = t45932*t44735;
  t46077 = -1.*t45308*t46000;
  t46087 = t46076 + t46077;
  t45824 = 0.15121*t45479;
  t45825 = t45824 + t45507;
  t45843 = 0.15121*t45806;
  t45844 = t45781 + t45843;
  t45482 = -0.15121*t45479;
  t45516 = t45482 + t45507;
  t45815 = -0.15121*t45806;
  t45820 = t45781 + t45815;
  t45904 = -1.*t45894;
  t45911 = 1. + t45904;
  t46022 = -1.*t46017;
  t46025 = 1. + t46022;
  t46179 = -1.*t44735*t45444*t45484;
  t46180 = -1.*t45451*t44735*t45833;
  t46182 = t46179 + t46180;
  t45940 = -1.*t45932;
  t45959 = 1. + t45940;
  t46050 = -1.*t46043;
  t46052 = 1. + t46050;
  t46187 = -1.*t44735*t45444*t45806;
  t46188 = -1.*t45635*t44735*t45833;
  t46189 = t46187 + t46188;
  t46231 = 0.15121*t45451;
  t46183 = -0.28121*t45911*t46182;
  t46185 = -0.50321*t45894*t46025*t46182;
  t46186 = 0.50321*t45270*t46037*t46182;
  t46200 = -1.*t45451*t44735*t45444;
  t46201 = t44735*t45484*t45833;
  t46202 = t46200 + t46201;
  t46203 = 0.15121*t46202;
  t46208 = t45894*t46017*t46182;
  t46209 = t45270*t46037*t46182;
  t46210 = t46208 + t46209;
  t46211 = -0.23321*t46210;
  t46273 = t45451*t44735*t45444;
  t46274 = -1.*t44735*t45484*t45833;
  t46275 = t46273 + t46274;
  t46281 = -1.*t45270*t45541;
  t46283 = -1.*t45894*t46275;
  t46286 = t46281 + t46283;
  t46290 = t45894*t45541;
  t46291 = -1.*t45270*t46275;
  t46292 = t46290 + t46291;
  t46308 = t45270*t45541;
  t46314 = t45894*t46275;
  t46315 = t46308 + t46314;
  t46190 = 0.28121*t45959*t46189;
  t46192 = 0.50321*t45932*t46052*t46189;
  t46197 = -0.50321*t45308*t46071*t46189;
  t46204 = -1.*t45635*t44735*t45444;
  t46205 = t44735*t45806*t45833;
  t46206 = t46204 + t46205;
  t46207 = 0.15121*t46206;
  t46216 = t45932*t46043*t46189;
  t46220 = t45308*t46071*t46189;
  t46227 = t46216 + t46220;
  t46228 = 0.23321*t46227;
  t46374 = t45635*t44735*t45444;
  t46375 = -1.*t44735*t45806*t45833;
  t46376 = t46374 + t46375;
  t46379 = -1.*t45308*t45541;
  t46380 = -1.*t45932*t46376;
  t46381 = t46379 + t46380;
  t46383 = t45932*t45541;
  t46384 = -1.*t45308*t46376;
  t46385 = t46383 + t46384;
  t46393 = t45308*t45541;
  t46394 = t45932*t46376;
  t46395 = t46393 + t46394;
  t46403 = Cos(var1[3]);
  t46406 = t46403*t45444*t45541;
  t46408 = Sin(var1[3]);
  t46409 = -1.*t46408*t45833;
  t46410 = t46406 + t46409;
  t46414 = -1.*t45444*t46408;
  t46415 = -1.*t46403*t45541*t45833;
  t46417 = t46414 + t46415;
  t46428 = t45451*t46410;
  t46429 = t45484*t46417;
  t46430 = t46428 + t46429;
  t46432 = t45635*t46410;
  t46433 = t45806*t46417;
  t46434 = t46432 + t46433;
  t46436 = -1.*t46403*t44735*t45270;
  t46437 = t45894*t46430;
  t46438 = t46436 + t46437;
  t46440 = -1.*t45894*t46403*t44735;
  t46441 = -1.*t45270*t46430;
  t46442 = t46440 + t46441;
  t46444 = -1.*t46403*t44735*t45308;
  t46446 = t45932*t46434;
  t46447 = t46444 + t46446;
  t46449 = -1.*t45932*t46403*t44735;
  t46450 = -1.*t45308*t46434;
  t46451 = t46449 + t46450;
  t46479 = t45451*t44735*t45444*t46408;
  t46480 = -1.*t44735*t45484*t46408*t45833;
  t46481 = t46479 + t46480;
  t46483 = t45635*t44735*t45444*t46408;
  t46484 = -1.*t44735*t45806*t46408*t45833;
  t46485 = t46483 + t46484;
  t46488 = t45270*t46408*t45541;
  t46489 = t45894*t46481;
  t46490 = t46488 + t46489;
  t46492 = t45894*t46408*t45541;
  t46493 = -1.*t45270*t46481;
  t46494 = t46492 + t46493;
  t46496 = t45308*t46408*t45541;
  t46497 = t45932*t46485;
  t46498 = t46496 + t46497;
  t46500 = t45932*t46408*t45541;
  t46501 = -1.*t45308*t46485;
  t46502 = t46500 + t46501;
  t46514 = -1.*t45444*t46408*t45541;
  t46515 = -1.*t46403*t45833;
  t46516 = t46514 + t46515;
  t46519 = t46403*t45444;
  t46522 = -1.*t46408*t45541*t45833;
  t46524 = t46519 + t46522;
  t46528 = t45484*t46516;
  t46530 = t45451*t46524;
  t46533 = t46528 + t46530;
  t46538 = t45806*t46516;
  t46539 = t45635*t46524;
  t46540 = t46538 + t46539;
  t46232 = -0.15121*t45484;
  t46244 = t46231 + t46232;
  t46265 = t46231 + t45507;
  t46608 = t45444*t46408*t45541;
  t46609 = t46403*t45833;
  t46610 = t46608 + t46609;
  t46614 = -1.*t45484*t46610;
  t46615 = t46614 + t46530;
  t46554 = -1.*t45484*t46524;
  t46631 = t45451*t46610;
  t46632 = t45484*t46524;
  t46633 = t46631 + t46632;
  t46635 = t44735*t45270*t46408;
  t46640 = -1.*t45894*t46633;
  t46642 = t46635 + t46640;
  t46645 = -1.*t45894*t44735*t46408;
  t46646 = -1.*t45270*t46633;
  t46648 = t46645 + t46646;
  t46658 = -1.*t44735*t45270*t46408;
  t46666 = t45894*t46633;
  t46667 = t46658 + t46666;
  t46328 = -0.15121*t45635;
  t46330 = t46328 + t45815;
  t46332 = 0.15121*t45635;
  t46338 = t46332 + t45815;
  t46683 = -1.*t45806*t46610;
  t46684 = t46683 + t46539;
  t46573 = -1.*t45806*t46524;
  t46698 = t45635*t46610;
  t46699 = t45806*t46524;
  t46700 = t46698 + t46699;
  t46703 = t44735*t45308*t46408;
  t46705 = -1.*t45932*t46700;
  t46706 = t46703 + t46705;
  t46708 = -1.*t45932*t44735*t46408;
  t46709 = -1.*t45308*t46700;
  t46710 = t46708 + t46709;
  t46717 = -1.*t44735*t45308*t46408;
  t46718 = t45932*t46700;
  t46719 = t46717 + t46718;
  p_output1[0]=0.28121*t44735*t45270 - 0.28121*t44735*t45308 - 1.*t45444*t45516*t45541 + t45444*t45541*t45820 + t45541*t45825*t45833 + 0.15121*(t45444*t45484*t45541 + t45451*t45541*t45833) + 0.15121*(t45444*t45541*t45806 + t45541*t45635*t45833) - 1.*t45541*t45833*t45844 - 0.28121*t45911*t45920 + 0.28121*t45959*t46000 - 0.50321*t46025*t46033 - 0.50321*t46037*t46040 - 0.23321*(t46017*t46033 - 1.*t46037*t46040) + 0.50321*t46052*t46066 + 0.50321*t46071*t46087 + 0.23321*(t46043*t46066 - 1.*t46071*t46087);
  p_output1[1]=-1.*t44735*t45444*t45825 - 1.*t44735*t45516*t45833 + t44735*t45820*t45833 + t44735*t45444*t45844 + t46183 + t46185 + t46186 + t46190 + t46192 + t46197 + t46203 + t46207 + t46211 + t46228;
  p_output1[2]=t46183 + t46185 + t46186 + t46203 + t46211 + t44735*t45444*t46244 - 1.*t44735*t45833*t46265;
  p_output1[3]=0.28121*t45541*t45894 - 0.28121*t45270*t46275 - 0.50321*t46037*t46286 - 0.50321*t46025*t46292 - 0.23321*(-1.*t46037*t46286 + t46017*t46292);
  p_output1[4]=-0.50321*t46017*t46292 - 0.50321*t46037*t46315 - 0.23321*(-1.*t46017*t46292 - 1.*t46037*t46315);
  p_output1[5]=t46190 + t46192 + t46197 + t46207 + t46228 - 1.*t44735*t45444*t46330 + t44735*t45833*t46338;
  p_output1[6]=-0.28121*t45541*t45932 + 0.28121*t45308*t46376 + 0.50321*t46071*t46381 + 0.50321*t46052*t46385 + 0.23321*(-1.*t46071*t46381 + t46043*t46385);
  p_output1[7]=0.50321*t46043*t46385 + 0.50321*t46071*t46395 + 0.23321*(-1.*t46043*t46385 - 1.*t46071*t46395);
  p_output1[8]=-0.28121*t44735*t45270*t46403 + 0.28121*t44735*t45308*t46403 + t45516*t46410 - 1.*t45820*t46410 + t45825*t46417 - 1.*t45844*t46417 + 0.15121*(-1.*t45484*t46410 + t45451*t46417) + 0.15121*(-1.*t45806*t46410 + t45635*t46417) - 0.28121*t45911*t46430 + 0.28121*t45959*t46434 - 0.50321*t46025*t46438 - 0.50321*t46037*t46442 - 0.23321*(t46017*t46438 - 1.*t46037*t46442) + 0.50321*t46052*t46447 + 0.50321*t46071*t46451 + 0.23321*(t46043*t46447 - 1.*t46071*t46451);
  p_output1[9]=t44735*t45444*t45516*t46408 + 0.28121*t45270*t45541*t46408 - 0.28121*t45308*t45541*t46408 - 1.*t44735*t45444*t45820*t46408 - 1.*t44735*t45825*t45833*t46408 + t44735*t45833*t45844*t46408 + 0.15121*(-1.*t44735*t45444*t45484*t46408 - 1.*t44735*t45451*t45833*t46408) + 0.15121*(-1.*t44735*t45444*t45806*t46408 - 1.*t44735*t45635*t45833*t46408) - 0.28121*t45911*t46481 + 0.28121*t45959*t46485 - 0.50321*t46025*t46490 - 0.50321*t46037*t46494 - 0.23321*(t46017*t46490 - 1.*t46037*t46494) + 0.50321*t46052*t46498 + 0.50321*t46071*t46502 + 0.23321*(t46043*t46498 - 1.*t46071*t46502);
  p_output1[10]=t45825*t46516 - 1.*t45844*t46516 + t45516*t46524 - 1.*t45820*t46524 - 0.28121*t45911*t46533 - 0.50321*t45894*t46025*t46533 + 0.50321*t45270*t46037*t46533 - 0.23321*(t45894*t46017*t46533 + t45270*t46037*t46533) + 0.28121*t45959*t46540 + 0.50321*t45932*t46052*t46540 - 0.50321*t45308*t46071*t46540 + 0.23321*(t45932*t46043*t46540 + t45308*t46071*t46540) + 0.15121*(t45451*t46516 + t46554) + 0.15121*(t45635*t46516 + t46573);
  p_output1[11]=t46265*t46524 + t46244*t46610 + 0.15121*(t46554 - 1.*t45451*t46610) - 0.28121*t45911*t46615 - 0.50321*t45894*t46025*t46615 + 0.50321*t45270*t46037*t46615 - 0.23321*(t45894*t46017*t46615 + t45270*t46037*t46615);
  p_output1[12]=-0.28121*t44735*t45894*t46408 - 0.28121*t45270*t46633 - 0.50321*t46037*t46642 - 0.50321*t46025*t46648 - 0.23321*(-1.*t46037*t46642 + t46017*t46648);
  p_output1[13]=-0.50321*t46017*t46648 - 0.50321*t46037*t46667 - 0.23321*(-1.*t46017*t46648 - 1.*t46037*t46667);
  p_output1[14]=-1.*t46338*t46524 - 1.*t46330*t46610 + 0.15121*(t46573 - 1.*t45635*t46610) + 0.28121*t45959*t46684 + 0.50321*t45932*t46052*t46684 - 0.50321*t45308*t46071*t46684 + 0.23321*(t45932*t46043*t46684 + t45308*t46071*t46684);
  p_output1[15]=0.28121*t44735*t45932*t46408 + 0.28121*t45308*t46700 + 0.50321*t46071*t46706 + 0.50321*t46052*t46710 + 0.23321*(-1.*t46071*t46706 + t46043*t46710);
  p_output1[16]=0.50321*t46043*t46710 + 0.50321*t46071*t46719 + 0.23321*(-1.*t46043*t46710 - 1.*t46071*t46719);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 17, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_step_distance_rear_ParallelStance.hh"

namespace ParallelStance
{

void J_step_distance_rear_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
