/*
 * Automatically Generated from Mathematica.
 * Thu 26 May 2022 14:48:55 GMT+02:00
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
  double t16196;
  double t16320;
  double t16399;
  double t16630;
  double t16632;
  double t16648;
  double t16131;
  double t17182;
  double t7922;
  double t14999;
  double t17819;
  double t18393;
  double t18409;
  double t18427;
  double t18460;
  double t18865;
  double t18876;
  double t18900;
  double t19159;
  double t19184;
  double t19264;
  double t19336;
  double t19396;
  double t19434;
  double t19475;
  double t19483;
  double t19490;
  double t19728;
  double t19755;
  double t19756;
  double t19765;
  double t19781;
  double t19796;
  double t19818;
  double t19820;
  double t19834;
  double t19844;
  double t19861;
  double t19862;
  double t19868;
  double t16678;
  double t16681;
  double t16542;
  double t16644;
  double t18071;
  double t18291;
  double t18785;
  double t18822;
  double t19952;
  double t19953;
  double t19962;
  double t19502;
  double t19509;
  double t19635;
  double t19672;
  double t19730;
  double t19748;
  double t19800;
  double t19811;
  double t20047;
  double t20055;
  double t20067;
  double t20069;
  double t20071;
  double t20090;
  double t20092;
  double t20099;
  double t20105;
  double t20116;
  double t20117;
  double t20119;
  double t20122;
  double t20129;
  double t20286;
  double t20299;
  double t20313;
  double t20324;
  double t20342;
  double t20343;
  double t20377;
  double t20384;
  double t20390;
  double t20483;
  double t20489;
  double t20495;
  double t20577;
  double t19972;
  double t19974;
  double t19977;
  double t19979;
  double t19982;
  double t19992;
  double t20002;
  double t20012;
  double t20022;
  double t20025;
  double t20042;
  double t20637;
  double t20647;
  double t20657;
  double t20665;
  double t20670;
  double t20675;
  double t20690;
  double t20695;
  double t20708;
  double t20754;
  double t20759;
  double t20768;
  double t20803;
  double t20864;
  double t20848;
  double t20868;
  double t20869;
  double t20886;
  double t20905;
  double t20918;
  double t20960;
  double t20961;
  double t20962;
  double t20965;
  double t20968;
  double t20969;
  double t20971;
  double t20972;
  double t20973;
  double t21002;
  double t21003;
  double t21004;
  double t21020;
  double t21021;
  double t21022;
  double t21029;
  double t21031;
  double t21032;
  double t21216;
  double t21221;
  double t21222;
  double t21224;
  double t21225;
  double t21228;
  double t21230;
  double t21231;
  double t21232;
  double t21244;
  double t21245;
  double t21246;
  double t21249;
  double t21250;
  double t21251;
  double t21253;
  double t21255;
  double t21263;
  double t21402;
  double t21405;
  double t21409;
  double t21418;
  double t21420;
  double t21421;
  double t21424;
  double t21428;
  double t21431;
  double t21448;
  double t21449;
  double t21450;
  double t20152;
  double t20163;
  double t20187;
  double t20249;
  double t21464;
  double t21481;
  double t21482;
  double t21500;
  double t21501;
  double t21454;
  double t21540;
  double t21546;
  double t21548;
  double t21569;
  double t21580;
  double t21581;
  double t21583;
  double t21584;
  double t21587;
  double t21598;
  double t21599;
  double t21603;
  double t20587;
  double t20591;
  double t20607;
  double t21619;
  double t21620;
  double t21438;
  double t21702;
  double t21704;
  double t21705;
  double t21707;
  double t21711;
  double t21713;
  double t21720;
  double t21721;
  double t21723;
  double t21750;
  double t21752;
  double t21754;
  t16196 = Cos(var1[12]);
  t16320 = -1.*t16196;
  t16399 = 1. + t16320;
  t16630 = Sin(var1[12]);
  t16632 = -0.15121*t16630;
  t16648 = Sin(var1[4]);
  t16131 = Cos(var1[5]);
  t17182 = Sin(var1[5]);
  t7922 = Cos(var1[4]);
  t14999 = Sin(var1[13]);
  t17819 = Cos(var1[13]);
  t18393 = -1.*t16196*t16131*t16648;
  t18409 = t16630*t16648*t17182;
  t18427 = t18393 + t18409;
  t18460 = Cos(var1[14]);
  t18865 = -1.*t7922*t14999;
  t18876 = t17819*t18427;
  t18900 = t18865 + t18876;
  t19159 = Sin(var1[14]);
  t19184 = t17819*t7922;
  t19264 = t14999*t18427;
  t19336 = t19184 + t19264;
  t19396 = Cos(var1[6]);
  t19434 = -1.*t19396;
  t19475 = 1. + t19434;
  t19483 = 0.15121*t19475;
  t19490 = Sin(var1[6]);
  t19728 = Cos(var1[7]);
  t19755 = -1.*t16131*t19396*t16648;
  t19756 = t16648*t17182*t19490;
  t19765 = t19755 + t19756;
  t19781 = Sin(var1[7]);
  t19796 = Cos(var1[8]);
  t19818 = t19728*t19765;
  t19820 = -1.*t7922*t19781;
  t19834 = t19818 + t19820;
  t19844 = t7922*t19728;
  t19861 = t19765*t19781;
  t19862 = t19844 + t19861;
  t19868 = Sin(var1[8]);
  t16678 = -0.15121*t16399;
  t16681 = t16678 + t16632;
  t16542 = 0.15121*t16399;
  t16644 = t16542 + t16632;
  t18071 = -1.*t17819;
  t18291 = 1. + t18071;
  t18785 = -1.*t18460;
  t18822 = 1. + t18785;
  t19952 = -1.*t7922*t16131*t16630;
  t19953 = -1.*t16196*t7922*t17182;
  t19962 = t19952 + t19953;
  t19502 = -0.15121*t19490;
  t19509 = t19483 + t19502;
  t19635 = 0.15121*t19490;
  t19672 = t19483 + t19635;
  t19730 = -1.*t19728;
  t19748 = 1. + t19730;
  t19800 = -1.*t19796;
  t19811 = 1. + t19800;
  t20047 = -1.*t7922*t19396*t17182;
  t20055 = -1.*t7922*t16131*t19490;
  t20067 = t20047 + t20055;
  t20069 = 0.28121*t19748*t20067;
  t20071 = 0.50321*t19728*t19811*t20067;
  t20090 = -1.*t7922*t16131*t19396;
  t20092 = t7922*t17182*t19490;
  t20099 = t20090 + t20092;
  t20105 = 0.15121*t20099;
  t20116 = -0.50321*t20067*t19781*t19868;
  t20117 = t19728*t19796*t20067;
  t20119 = t20067*t19781*t19868;
  t20122 = t20117 + t20119;
  t20129 = 0.19821*t20122;
  t20286 = t7922*t16131*t19396;
  t20299 = -1.*t7922*t17182*t19490;
  t20313 = t20286 + t20299;
  t20324 = -1.*t19728*t16648;
  t20342 = -1.*t20313*t19781;
  t20343 = t20324 + t20342;
  t20377 = t19728*t20313;
  t20384 = -1.*t16648*t19781;
  t20390 = t20377 + t20384;
  t20483 = t19728*t16648;
  t20489 = t20313*t19781;
  t20495 = t20483 + t20489;
  t20577 = -0.15121*t16196;
  t19972 = -0.28121*t18291*t19962;
  t19974 = -0.50321*t17819*t18822*t19962;
  t19977 = 0.50321*t14999*t19159*t19962;
  t19979 = -1.*t16196*t7922*t16131;
  t19982 = t7922*t16630*t17182;
  t19992 = t19979 + t19982;
  t20002 = 0.15121*t19992;
  t20012 = t17819*t18460*t19962;
  t20022 = t14999*t19159*t19962;
  t20025 = t20012 + t20022;
  t20042 = -0.19821*t20025;
  t20637 = t16196*t7922*t16131;
  t20647 = -1.*t7922*t16630*t17182;
  t20657 = t20637 + t20647;
  t20665 = -1.*t14999*t16648;
  t20670 = t17819*t20657;
  t20675 = t20665 + t20670;
  t20690 = -1.*t17819*t16648;
  t20695 = -1.*t14999*t20657;
  t20708 = t20690 + t20695;
  t20754 = t17819*t16648;
  t20759 = t14999*t20657;
  t20768 = t20754 + t20759;
  t20803 = Cos(var1[3]);
  t20864 = Sin(var1[3]);
  t20848 = t20803*t16131*t16648;
  t20868 = -1.*t20864*t17182;
  t20869 = t20848 + t20868;
  t20886 = -1.*t16131*t20864;
  t20905 = -1.*t20803*t16648*t17182;
  t20918 = t20886 + t20905;
  t20960 = t16196*t20869;
  t20961 = t16630*t20918;
  t20962 = t20960 + t20961;
  t20965 = t20803*t7922*t14999;
  t20968 = t17819*t20962;
  t20969 = t20965 + t20968;
  t20971 = -1.*t17819*t20803*t7922;
  t20972 = t14999*t20962;
  t20973 = t20971 + t20972;
  t21002 = t19396*t20869;
  t21003 = t20918*t19490;
  t21004 = t21002 + t21003;
  t21020 = t19728*t21004;
  t21021 = t20803*t7922*t19781;
  t21022 = t21020 + t21021;
  t21029 = -1.*t20803*t7922*t19728;
  t21031 = t21004*t19781;
  t21032 = t21029 + t21031;
  t21216 = t16196*t7922*t16131*t20864;
  t21221 = -1.*t7922*t16630*t20864*t17182;
  t21222 = t21216 + t21221;
  t21224 = -1.*t14999*t20864*t16648;
  t21225 = t17819*t21222;
  t21228 = t21224 + t21225;
  t21230 = t17819*t20864*t16648;
  t21231 = t14999*t21222;
  t21232 = t21230 + t21231;
  t21244 = t7922*t16131*t19396*t20864;
  t21245 = -1.*t7922*t20864*t17182*t19490;
  t21246 = t21244 + t21245;
  t21249 = t19728*t21246;
  t21250 = -1.*t20864*t16648*t19781;
  t21251 = t21249 + t21250;
  t21253 = t19728*t20864*t16648;
  t21255 = t21246*t19781;
  t21263 = t21253 + t21255;
  t21402 = -1.*t16131*t20864*t16648;
  t21405 = -1.*t20803*t17182;
  t21409 = t21402 + t21405;
  t21418 = t20803*t16131;
  t21420 = -1.*t20864*t16648*t17182;
  t21421 = t21418 + t21420;
  t21424 = t16630*t21409;
  t21428 = t16196*t21421;
  t21431 = t21424 + t21428;
  t21448 = t19396*t21421;
  t21449 = t21409*t19490;
  t21450 = t21448 + t21449;
  t20152 = -0.15121*t19396;
  t20163 = t20152 + t19635;
  t20187 = 0.15121*t19396;
  t20249 = t20187 + t19635;
  t21464 = t16131*t20864*t16648;
  t21481 = t20803*t17182;
  t21482 = t21464 + t21481;
  t21500 = -1.*t21482*t19490;
  t21501 = t21448 + t21500;
  t21454 = -1.*t21421*t19490;
  t21540 = t19396*t21482;
  t21546 = t21421*t19490;
  t21548 = t21540 + t21546;
  t21569 = t7922*t19728*t20864;
  t21580 = -1.*t21548*t19781;
  t21581 = t21569 + t21580;
  t21583 = t19728*t21548;
  t21584 = t7922*t20864*t19781;
  t21587 = t21583 + t21584;
  t21598 = -1.*t7922*t19728*t20864;
  t21599 = t21548*t19781;
  t21603 = t21598 + t21599;
  t20587 = 0.15121*t16630;
  t20591 = t20577 + t20587;
  t20607 = t20577 + t16632;
  t21619 = -1.*t16630*t21482;
  t21620 = t21619 + t21428;
  t21438 = -1.*t16630*t21421;
  t21702 = t16196*t21482;
  t21704 = t16630*t21421;
  t21705 = t21702 + t21704;
  t21707 = t7922*t14999*t20864;
  t21711 = t17819*t21705;
  t21713 = t21707 + t21711;
  t21720 = t17819*t7922*t20864;
  t21721 = -1.*t14999*t21705;
  t21723 = t21720 + t21721;
  t21750 = -1.*t17819*t7922*t20864;
  t21752 = t14999*t21705;
  t21754 = t21750 + t21752;
  p_output1[0]=t16131*t16644*t16648 - 1.*t16648*t16681*t17182 + 0.15121*(t16131*t16630*t16648 + t16196*t16648*t17182) - 0.28121*t18291*t18427 - 0.50321*t18822*t18900 + 0.50321*t19159*t19336 - 0.19821*(t18460*t18900 + t19159*t19336) + 0.15121*(t16648*t17182*t19396 + t16131*t16648*t19490) + t16648*t17182*t19509 - 1.*t16131*t16648*t19672 + 0.28121*t19748*t19765 + 0.50321*t19811*t19834 - 0.50321*t19862*t19868 + 0.19821*(t19796*t19834 + t19862*t19868) - 0.28121*t14999*t7922 + 0.28121*t19781*t7922;
  p_output1[1]=t19972 + t19974 + t19977 + t20002 + t20042 + t20069 + t20071 + t20105 + t20116 + t20129 + t16131*t16681*t7922 + t16644*t17182*t7922 - 1.*t16131*t19509*t7922 - 1.*t17182*t19672*t7922;
  p_output1[2]=t20069 + t20071 + t20105 + t20116 + t20129 - 1.*t17182*t20163*t7922 + t16131*t20249*t7922;
  p_output1[3]=0.28121*t16648*t19728 + 0.28121*t19781*t20313 + 0.50321*t19811*t20343 - 0.50321*t19868*t20390 + 0.19821*(t19796*t20343 + t19868*t20390);
  p_output1[4]=0.50321*t19868*t20390 - 0.50321*t19796*t20495 + 0.19821*(-1.*t19868*t20390 + t19796*t20495);
  p_output1[5]=t19972 + t19974 + t19977 + t20002 + t20042 - 1.*t16131*t20591*t7922 + t17182*t20607*t7922;
  p_output1[6]=-0.28121*t16648*t17819 - 0.28121*t14999*t20657 + 0.50321*t19159*t20675 - 0.50321*t18822*t20708 - 0.19821*(t19159*t20675 + t18460*t20708);
  p_output1[7]=-0.50321*t19159*t20675 + 0.50321*t18460*t20768 - 0.19821*(-1.*t19159*t20675 + t18460*t20768);
  p_output1[8]=-1.*t16644*t20869 + t19672*t20869 - 1.*t16681*t20918 + t19509*t20918 + 0.15121*(-1.*t16630*t20869 + t16196*t20918) + 0.15121*(-1.*t19490*t20869 + t19396*t20918) - 0.28121*t18291*t20962 - 0.50321*t18822*t20969 + 0.50321*t19159*t20973 - 0.19821*(t18460*t20969 + t19159*t20973) + 0.28121*t19748*t21004 + 0.50321*t19811*t21022 - 0.50321*t19868*t21032 + 0.19821*(t19796*t21022 + t19868*t21032) + 0.28121*t14999*t20803*t7922 - 0.28121*t19781*t20803*t7922;
  p_output1[9]=-0.28121*t14999*t16648*t20864 + 0.28121*t16648*t19781*t20864 - 0.28121*t18291*t21222 - 0.50321*t18822*t21228 + 0.50321*t19159*t21232 - 0.19821*(t18460*t21228 + t19159*t21232) + 0.28121*t19748*t21246 + 0.50321*t19811*t21251 - 0.50321*t19868*t21263 + 0.19821*(t19796*t21251 + t19868*t21263) - 1.*t16131*t16644*t20864*t7922 + t16681*t17182*t20864*t7922 - 1.*t17182*t19509*t20864*t7922 + t16131*t19672*t20864*t7922 + 0.15121*(-1.*t16131*t16630*t20864*t7922 - 1.*t16196*t17182*t20864*t7922) + 0.15121*(-1.*t17182*t19396*t20864*t7922 - 1.*t16131*t19490*t20864*t7922);
  p_output1[10]=-1.*t16681*t21409 + t19509*t21409 - 1.*t16644*t21421 + t19672*t21421 - 0.28121*t18291*t21431 - 0.50321*t17819*t18822*t21431 + 0.50321*t14999*t19159*t21431 - 0.19821*(t17819*t18460*t21431 + t14999*t19159*t21431) + 0.15121*(t16196*t21409 + t21438) + 0.28121*t19748*t21450 + 0.50321*t19728*t19811*t21450 - 0.50321*t19781*t19868*t21450 + 0.19821*(t19728*t19796*t21450 + t19781*t19868*t21450) + 0.15121*(t19396*t21409 + t21454);
  p_output1[11]=t20163*t21421 + t20249*t21482 + 0.15121*(t21454 - 1.*t19396*t21482) + 0.28121*t19748*t21501 + 0.50321*t19728*t19811*t21501 - 0.50321*t19781*t19868*t21501 + 0.19821*(t19728*t19796*t21501 + t19781*t19868*t21501);
  p_output1[12]=0.28121*t19781*t21548 + 0.50321*t19811*t21581 - 0.50321*t19868*t21587 + 0.19821*(t19796*t21581 + t19868*t21587) - 0.28121*t19728*t20864*t7922;
  p_output1[13]=0.50321*t19868*t21587 - 0.50321*t19796*t21603 + 0.19821*(-1.*t19868*t21587 + t19796*t21603);
  p_output1[14]=-1.*t20607*t21421 - 1.*t20591*t21482 + 0.15121*(t21438 - 1.*t16196*t21482) - 0.28121*t18291*t21620 - 0.50321*t17819*t18822*t21620 + 0.50321*t14999*t19159*t21620 - 0.19821*(t17819*t18460*t21620 + t14999*t19159*t21620);
  p_output1[15]=-0.28121*t14999*t21705 + 0.50321*t19159*t21713 - 0.50321*t18822*t21723 - 0.19821*(t19159*t21713 + t18460*t21723) + 0.28121*t17819*t20864*t7922;
  p_output1[16]=-0.50321*t19159*t21713 + 0.50321*t18460*t21754 - 0.19821*(-1.*t19159*t21713 + t18460*t21754);
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

#include "J_step_distance_front_ParallelStance.hh"

namespace ParallelStance
{

void J_step_distance_front_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
