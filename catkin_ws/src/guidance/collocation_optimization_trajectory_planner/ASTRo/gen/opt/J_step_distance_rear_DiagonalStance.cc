/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:42:28 GMT+02:00
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
  double t6985;
  double t10494;
  double t10984;
  double t10497;
  double t10503;
  double t10511;
  double t10585;
  double t10779;
  double t13094;
  double t14776;
  double t15130;
  double t15534;
  double t15990;
  double t17810;
  double t8710;
  double t20288;
  double t20516;
  double t20535;
  double t20682;
  double t10080;
  double t20808;
  double t22383;
  double t22393;
  double t22423;
  double t22535;
  double t22644;
  double t22676;
  double t22679;
  double t22704;
  double t22735;
  double t22739;
  double t22744;
  double t22764;
  double t22771;
  double t22785;
  double t22786;
  double t22855;
  double t22905;
  double t22945;
  double t23181;
  double t17448;
  double t17603;
  double t17914;
  double t17988;
  double t10513;
  double t10780;
  double t16005;
  double t17162;
  double t20382;
  double t20421;
  double t22612;
  double t22614;
  double t24051;
  double t24065;
  double t24071;
  double t21274;
  double t22021;
  double t22765;
  double t22767;
  double t24337;
  double t24342;
  double t24343;
  double t24502;
  double t24074;
  double t24187;
  double t24223;
  double t24357;
  double t24358;
  double t24375;
  double t24378;
  double t24396;
  double t24418;
  double t24428;
  double t24442;
  double t25017;
  double t25020;
  double t25074;
  double t25119;
  double t25167;
  double t25273;
  double t25318;
  double t25354;
  double t25355;
  double t25388;
  double t25524;
  double t25553;
  double t24346;
  double t24347;
  double t24349;
  double t24380;
  double t24381;
  double t24394;
  double t24395;
  double t24448;
  double t24453;
  double t24471;
  double t24487;
  double t27153;
  double t27154;
  double t27167;
  double t27169;
  double t27378;
  double t27383;
  double t27403;
  double t27405;
  double t27410;
  double t27567;
  double t27571;
  double t27573;
  double t27681;
  double t27799;
  double t27803;
  double t27843;
  double t27860;
  double t27879;
  double t27888;
  double t27899;
  double t27924;
  double t27925;
  double t27926;
  double t27928;
  double t27929;
  double t27930;
  double t27958;
  double t27960;
  double t27961;
  double t27968;
  double t28008;
  double t28032;
  double t28091;
  double t28142;
  double t28282;
  double t28299;
  double t28300;
  double t28306;
  double t29129;
  double t29134;
  double t29215;
  double t29231;
  double t29243;
  double t29268;
  double t29283;
  double t29339;
  double t29344;
  double t29360;
  double t29380;
  double t29388;
  double t29420;
  double t29426;
  double t29490;
  double t29605;
  double t29618;
  double t29620;
  double t29850;
  double t29851;
  double t29853;
  double t29867;
  double t29868;
  double t29870;
  double t29927;
  double t29957;
  double t29970;
  double t30066;
  double t30067;
  double t30071;
  double t24576;
  double t24586;
  double t24621;
  double t30569;
  double t30596;
  double t30724;
  double t30772;
  double t30838;
  double t30128;
  double t31325;
  double t31331;
  double t31337;
  double t31347;
  double t31348;
  double t31367;
  double t31385;
  double t31390;
  double t31410;
  double t31527;
  double t31544;
  double t31559;
  double t26148;
  double t26299;
  double t26588;
  double t26594;
  double t32035;
  double t32055;
  double t30145;
  double t32579;
  double t32584;
  double t32590;
  double t32601;
  double t32607;
  double t32609;
  double t32737;
  double t32747;
  double t32803;
  double t32858;
  double t32862;
  double t32866;
  t6985 = Cos(var1[4]);
  t10494 = Cos(var1[5]);
  t10984 = Sin(var1[4]);
  t10497 = Cos(var1[9]);
  t10503 = -1.*t10497;
  t10511 = 1. + t10503;
  t10585 = Sin(var1[9]);
  t10779 = 0.15121*t10585;
  t13094 = Cos(var1[15]);
  t14776 = -1.*t13094;
  t15130 = 1. + t14776;
  t15534 = -0.15121*t15130;
  t15990 = Sin(var1[15]);
  t17810 = Sin(var1[5]);
  t8710 = Sin(var1[10]);
  t20288 = Cos(var1[10]);
  t20516 = -1.*t10497*t10494*t10984;
  t20535 = t10585*t10984*t17810;
  t20682 = t20516 + t20535;
  t10080 = Sin(var1[16]);
  t20808 = Cos(var1[16]);
  t22383 = -1.*t13094*t10494*t10984;
  t22393 = t15990*t10984*t17810;
  t22423 = t22383 + t22393;
  t22535 = Cos(var1[11]);
  t22644 = t6985*t8710;
  t22676 = t20288*t20682;
  t22679 = t22644 + t22676;
  t22704 = Sin(var1[11]);
  t22735 = t20288*t6985;
  t22739 = -1.*t8710*t20682;
  t22744 = t22735 + t22739;
  t22764 = Cos(var1[17]);
  t22771 = t6985*t10080;
  t22785 = t20808*t22423;
  t22786 = t22771 + t22785;
  t22855 = Sin(var1[17]);
  t22905 = t20808*t6985;
  t22945 = -1.*t10080*t22423;
  t23181 = t22905 + t22945;
  t17448 = 0.15121*t10511;
  t17603 = t17448 + t10779;
  t17914 = 0.15121*t15990;
  t17988 = t15534 + t17914;
  t10513 = -0.15121*t10511;
  t10780 = t10513 + t10779;
  t16005 = -0.15121*t15990;
  t17162 = t15534 + t16005;
  t20382 = -1.*t20288;
  t20421 = 1. + t20382;
  t22612 = -1.*t22535;
  t22614 = 1. + t22612;
  t24051 = -1.*t6985*t10494*t10585;
  t24065 = -1.*t10497*t6985*t17810;
  t24071 = t24051 + t24065;
  t21274 = -1.*t20808;
  t22021 = 1. + t21274;
  t22765 = -1.*t22764;
  t22767 = 1. + t22765;
  t24337 = -1.*t6985*t10494*t15990;
  t24342 = -1.*t13094*t6985*t17810;
  t24343 = t24337 + t24342;
  t24502 = 0.15121*t10497;
  t24074 = -0.28121*t20421*t24071;
  t24187 = -0.50321*t20288*t22614*t24071;
  t24223 = 0.50321*t8710*t22704*t24071;
  t24357 = -1.*t10497*t6985*t10494;
  t24358 = t6985*t10585*t17810;
  t24375 = t24357 + t24358;
  t24378 = 0.15121*t24375;
  t24396 = t20288*t22535*t24071;
  t24418 = t8710*t22704*t24071;
  t24428 = t24396 + t24418;
  t24442 = -0.23321*t24428;
  t25017 = t10497*t6985*t10494;
  t25020 = -1.*t6985*t10585*t17810;
  t25074 = t25017 + t25020;
  t25119 = -1.*t8710*t10984;
  t25167 = -1.*t20288*t25074;
  t25273 = t25119 + t25167;
  t25318 = t20288*t10984;
  t25354 = -1.*t8710*t25074;
  t25355 = t25318 + t25354;
  t25388 = t8710*t10984;
  t25524 = t20288*t25074;
  t25553 = t25388 + t25524;
  t24346 = 0.28121*t22021*t24343;
  t24347 = 0.50321*t20808*t22767*t24343;
  t24349 = -0.50321*t10080*t22855*t24343;
  t24380 = -1.*t13094*t6985*t10494;
  t24381 = t6985*t15990*t17810;
  t24394 = t24380 + t24381;
  t24395 = 0.15121*t24394;
  t24448 = t20808*t22764*t24343;
  t24453 = t10080*t22855*t24343;
  t24471 = t24448 + t24453;
  t24487 = 0.23321*t24471;
  t27153 = t13094*t6985*t10494;
  t27154 = -1.*t6985*t15990*t17810;
  t27167 = t27153 + t27154;
  t27169 = -1.*t10080*t10984;
  t27378 = -1.*t20808*t27167;
  t27383 = t27169 + t27378;
  t27403 = t20808*t10984;
  t27405 = -1.*t10080*t27167;
  t27410 = t27403 + t27405;
  t27567 = t10080*t10984;
  t27571 = t20808*t27167;
  t27573 = t27567 + t27571;
  t27681 = Cos(var1[3]);
  t27799 = t27681*t10494*t10984;
  t27803 = Sin(var1[3]);
  t27843 = -1.*t27803*t17810;
  t27860 = t27799 + t27843;
  t27879 = -1.*t10494*t27803;
  t27888 = -1.*t27681*t10984*t17810;
  t27899 = t27879 + t27888;
  t27924 = t10497*t27860;
  t27925 = t10585*t27899;
  t27926 = t27924 + t27925;
  t27928 = t13094*t27860;
  t27929 = t15990*t27899;
  t27930 = t27928 + t27929;
  t27958 = -1.*t27681*t6985*t8710;
  t27960 = t20288*t27926;
  t27961 = t27958 + t27960;
  t27968 = -1.*t20288*t27681*t6985;
  t28008 = -1.*t8710*t27926;
  t28032 = t27968 + t28008;
  t28091 = -1.*t27681*t6985*t10080;
  t28142 = t20808*t27930;
  t28282 = t28091 + t28142;
  t28299 = -1.*t20808*t27681*t6985;
  t28300 = -1.*t10080*t27930;
  t28306 = t28299 + t28300;
  t29129 = t10497*t6985*t10494*t27803;
  t29134 = -1.*t6985*t10585*t27803*t17810;
  t29215 = t29129 + t29134;
  t29231 = t13094*t6985*t10494*t27803;
  t29243 = -1.*t6985*t15990*t27803*t17810;
  t29268 = t29231 + t29243;
  t29283 = t8710*t27803*t10984;
  t29339 = t20288*t29215;
  t29344 = t29283 + t29339;
  t29360 = t20288*t27803*t10984;
  t29380 = -1.*t8710*t29215;
  t29388 = t29360 + t29380;
  t29420 = t10080*t27803*t10984;
  t29426 = t20808*t29268;
  t29490 = t29420 + t29426;
  t29605 = t20808*t27803*t10984;
  t29618 = -1.*t10080*t29268;
  t29620 = t29605 + t29618;
  t29850 = -1.*t10494*t27803*t10984;
  t29851 = -1.*t27681*t17810;
  t29853 = t29850 + t29851;
  t29867 = t27681*t10494;
  t29868 = -1.*t27803*t10984*t17810;
  t29870 = t29867 + t29868;
  t29927 = t10585*t29853;
  t29957 = t10497*t29870;
  t29970 = t29927 + t29957;
  t30066 = t15990*t29853;
  t30067 = t13094*t29870;
  t30071 = t30066 + t30067;
  t24576 = -0.15121*t10585;
  t24586 = t24502 + t24576;
  t24621 = t24502 + t10779;
  t30569 = t10494*t27803*t10984;
  t30596 = t27681*t17810;
  t30724 = t30569 + t30596;
  t30772 = -1.*t10585*t30724;
  t30838 = t30772 + t29957;
  t30128 = -1.*t10585*t29870;
  t31325 = t10497*t30724;
  t31331 = t10585*t29870;
  t31337 = t31325 + t31331;
  t31347 = t6985*t8710*t27803;
  t31348 = -1.*t20288*t31337;
  t31367 = t31347 + t31348;
  t31385 = -1.*t20288*t6985*t27803;
  t31390 = -1.*t8710*t31337;
  t31410 = t31385 + t31390;
  t31527 = -1.*t6985*t8710*t27803;
  t31544 = t20288*t31337;
  t31559 = t31527 + t31544;
  t26148 = -0.15121*t13094;
  t26299 = t26148 + t16005;
  t26588 = 0.15121*t13094;
  t26594 = t26588 + t16005;
  t32035 = -1.*t15990*t30724;
  t32055 = t32035 + t30067;
  t30145 = -1.*t15990*t29870;
  t32579 = t13094*t30724;
  t32584 = t15990*t29870;
  t32590 = t32579 + t32584;
  t32601 = t6985*t10080*t27803;
  t32607 = -1.*t20808*t32590;
  t32609 = t32601 + t32607;
  t32737 = -1.*t20808*t6985*t27803;
  t32747 = -1.*t10080*t32590;
  t32803 = t32737 + t32747;
  t32858 = -1.*t6985*t10080*t27803;
  t32862 = t20808*t32590;
  t32866 = t32858 + t32862;
  p_output1[0]=-1.*t10494*t10780*t10984 + t10494*t10984*t17162 + t10984*t17603*t17810 + 0.15121*(t10494*t10585*t10984 + t10497*t10984*t17810) + 0.15121*(t10494*t10984*t15990 + t10984*t13094*t17810) - 1.*t10984*t17810*t17988 - 0.28121*t20421*t20682 + 0.28121*t22021*t22423 - 0.50321*t22614*t22679 - 0.50321*t22704*t22744 - 0.23321*(t22535*t22679 - 1.*t22704*t22744) + 0.50321*t22767*t22786 + 0.50321*t22855*t23181 + 0.23321*(t22764*t22786 - 1.*t22855*t23181) - 0.28121*t10080*t6985 + 0.28121*t6985*t8710;
  p_output1[1]=t24074 + t24187 + t24223 + t24346 + t24347 + t24349 + t24378 + t24395 + t24442 + t24487 - 1.*t10494*t17603*t6985 - 1.*t10780*t17810*t6985 + t17162*t17810*t6985 + t10494*t17988*t6985;
  p_output1[2]=t24074 + t24187 + t24223 + t24378 + t24442 + t10494*t24586*t6985 - 1.*t17810*t24621*t6985;
  p_output1[3]=0.28121*t10984*t20288 - 0.50321*t22704*t25273 - 0.50321*t22614*t25355 - 0.23321*(-1.*t22704*t25273 + t22535*t25355) - 0.28121*t25074*t8710;
  p_output1[4]=-0.50321*t22535*t25355 - 0.50321*t22704*t25553 - 0.23321*(-1.*t22535*t25355 - 1.*t22704*t25553);
  p_output1[5]=t24346 + t24347 + t24349 + t24395 + t24487 - 1.*t10494*t26299*t6985 + t17810*t26594*t6985;
  p_output1[6]=-0.28121*t10984*t20808 + 0.28121*t10080*t27167 + 0.50321*t22855*t27383 + 0.50321*t22767*t27410 + 0.23321*(-1.*t22855*t27383 + t22764*t27410);
  p_output1[7]=0.50321*t22764*t27410 + 0.50321*t22855*t27573 + 0.23321*(-1.*t22764*t27410 - 1.*t22855*t27573);
  p_output1[8]=t10780*t27860 - 1.*t17162*t27860 + t17603*t27899 - 1.*t17988*t27899 + 0.15121*(-1.*t10585*t27860 + t10497*t27899) + 0.15121*(-1.*t15990*t27860 + t13094*t27899) - 0.28121*t20421*t27926 + 0.28121*t22021*t27930 - 0.50321*t22614*t27961 - 0.50321*t22704*t28032 - 0.23321*(t22535*t27961 - 1.*t22704*t28032) + 0.50321*t22767*t28282 + 0.50321*t22855*t28306 + 0.23321*(t22764*t28282 - 1.*t22855*t28306) + 0.28121*t10080*t27681*t6985 - 0.28121*t27681*t6985*t8710;
  p_output1[9]=-0.28121*t10080*t10984*t27803 - 0.28121*t20421*t29215 + 0.28121*t22021*t29268 - 0.50321*t22614*t29344 - 0.50321*t22704*t29388 - 0.23321*(t22535*t29344 - 1.*t22704*t29388) + 0.50321*t22767*t29490 + 0.50321*t22855*t29620 + 0.23321*(t22764*t29490 - 1.*t22855*t29620) + t10494*t10780*t27803*t6985 - 1.*t10494*t17162*t27803*t6985 - 1.*t17603*t17810*t27803*t6985 + t17810*t17988*t27803*t6985 + 0.15121*(-1.*t10494*t10585*t27803*t6985 - 1.*t10497*t17810*t27803*t6985) + 0.15121*(-1.*t10494*t15990*t27803*t6985 - 1.*t13094*t17810*t27803*t6985) + 0.28121*t10984*t27803*t8710;
  p_output1[10]=t17603*t29853 - 1.*t17988*t29853 + t10780*t29870 - 1.*t17162*t29870 - 0.28121*t20421*t29970 - 0.50321*t20288*t22614*t29970 + 0.28121*t22021*t30071 + 0.50321*t20808*t22767*t30071 - 0.50321*t10080*t22855*t30071 + 0.23321*(t20808*t22764*t30071 + t10080*t22855*t30071) + 0.15121*(t10497*t29853 + t30128) + 0.15121*(t13094*t29853 + t30145) + 0.50321*t22704*t29970*t8710 - 0.23321*(t20288*t22535*t29970 + t22704*t29970*t8710);
  p_output1[11]=t24621*t29870 + t24586*t30724 + 0.15121*(t30128 - 1.*t10497*t30724) - 0.28121*t20421*t30838 - 0.50321*t20288*t22614*t30838 + 0.50321*t22704*t30838*t8710 - 0.23321*(t20288*t22535*t30838 + t22704*t30838*t8710);
  p_output1[12]=-0.50321*t22704*t31367 - 0.50321*t22614*t31410 - 0.23321*(-1.*t22704*t31367 + t22535*t31410) - 0.28121*t20288*t27803*t6985 - 0.28121*t31337*t8710;
  p_output1[13]=-0.50321*t22535*t31410 - 0.50321*t22704*t31559 - 0.23321*(-1.*t22535*t31410 - 1.*t22704*t31559);
  p_output1[14]=-1.*t26594*t29870 - 1.*t26299*t30724 + 0.15121*(t30145 - 1.*t13094*t30724) + 0.28121*t22021*t32055 + 0.50321*t20808*t22767*t32055 - 0.50321*t10080*t22855*t32055 + 0.23321*(t20808*t22764*t32055 + t10080*t22855*t32055);
  p_output1[15]=0.28121*t10080*t32590 + 0.50321*t22855*t32609 + 0.50321*t22767*t32803 + 0.23321*(-1.*t22855*t32609 + t22764*t32803) + 0.28121*t20808*t27803*t6985;
  p_output1[16]=0.50321*t22764*t32803 + 0.50321*t22855*t32866 + 0.23321*(-1.*t22764*t32803 - 1.*t22855*t32866);
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

#include "J_step_distance_rear_DiagonalStance.hh"

namespace DiagonalStance
{

void J_step_distance_rear_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
