/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:43:51 GMT+02:00
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
  double t45154;
  double t45188;
  double t45194;
  double t45202;
  double t45205;
  double t45253;
  double t44996;
  double t45279;
  double t3686;
  double t21907;
  double t45324;
  double t45372;
  double t45377;
  double t45399;
  double t45408;
  double t45412;
  double t45413;
  double t45416;
  double t45435;
  double t45436;
  double t45437;
  double t45438;
  double t45520;
  double t45521;
  double t45528;
  double t45531;
  double t45537;
  double t45573;
  double t45578;
  double t45579;
  double t45580;
  double t45585;
  double t45588;
  double t45593;
  double t45598;
  double t45600;
  double t45609;
  double t45610;
  double t45612;
  double t45614;
  double t45276;
  double t45277;
  double t45200;
  double t45208;
  double t45325;
  double t45332;
  double t45410;
  double t45411;
  double t45639;
  double t45640;
  double t45641;
  double t45539;
  double t45540;
  double t45542;
  double t45559;
  double t45574;
  double t45575;
  double t45589;
  double t45592;
  double t45663;
  double t45664;
  double t45667;
  double t45677;
  double t45689;
  double t45690;
  double t45692;
  double t45697;
  double t45698;
  double t45699;
  double t45704;
  double t45705;
  double t45710;
  double t45711;
  double t45734;
  double t45742;
  double t45743;
  double t45760;
  double t45761;
  double t45763;
  double t45766;
  double t45776;
  double t45780;
  double t45796;
  double t45799;
  double t45802;
  double t45816;
  double t45642;
  double t45643;
  double t45646;
  double t45649;
  double t45650;
  double t45651;
  double t45652;
  double t45653;
  double t45656;
  double t45657;
  double t45658;
  double t45827;
  double t45830;
  double t45832;
  double t45834;
  double t45836;
  double t45837;
  double t45839;
  double t45840;
  double t45842;
  double t45850;
  double t45851;
  double t45854;
  double t45865;
  double t45868;
  double t45867;
  double t45872;
  double t45874;
  double t45877;
  double t45882;
  double t45883;
  double t45895;
  double t45898;
  double t45902;
  double t45907;
  double t45908;
  double t45910;
  double t45914;
  double t45915;
  double t45917;
  double t45941;
  double t45942;
  double t45945;
  double t45950;
  double t45953;
  double t45954;
  double t45956;
  double t45957;
  double t45958;
  double t46008;
  double t46009;
  double t46010;
  double t46012;
  double t46014;
  double t46015;
  double t46018;
  double t46019;
  double t46020;
  double t46044;
  double t46045;
  double t46046;
  double t46053;
  double t46054;
  double t46056;
  double t46058;
  double t46059;
  double t46060;
  double t46081;
  double t46085;
  double t46086;
  double t46088;
  double t46089;
  double t46090;
  double t46095;
  double t46096;
  double t46097;
  double t46174;
  double t46175;
  double t46177;
  double t45718;
  double t45720;
  double t45727;
  double t45728;
  double t46194;
  double t46195;
  double t46196;
  double t46198;
  double t46199;
  double t46181;
  double t46212;
  double t46213;
  double t46215;
  double t46217;
  double t46218;
  double t46219;
  double t46222;
  double t46223;
  double t46224;
  double t46250;
  double t46257;
  double t46258;
  double t45818;
  double t45819;
  double t45821;
  double t46278;
  double t46279;
  double t46121;
  double t46299;
  double t46300;
  double t46301;
  double t46304;
  double t46306;
  double t46307;
  double t46309;
  double t46312;
  double t46313;
  double t46321;
  double t46322;
  double t46323;
  t45154 = Cos(var1[12]);
  t45188 = -1.*t45154;
  t45194 = 1. + t45188;
  t45202 = Sin(var1[12]);
  t45205 = -0.15121*t45202;
  t45253 = Sin(var1[4]);
  t44996 = Cos(var1[5]);
  t45279 = Sin(var1[5]);
  t3686 = Cos(var1[4]);
  t21907 = Sin(var1[13]);
  t45324 = Cos(var1[13]);
  t45372 = -1.*t45154*t44996*t45253;
  t45377 = t45202*t45253*t45279;
  t45399 = t45372 + t45377;
  t45408 = Cos(var1[14]);
  t45412 = -1.*t3686*t21907;
  t45413 = t45324*t45399;
  t45416 = t45412 + t45413;
  t45435 = Sin(var1[14]);
  t45436 = t45324*t3686;
  t45437 = t21907*t45399;
  t45438 = t45436 + t45437;
  t45520 = Cos(var1[6]);
  t45521 = -1.*t45520;
  t45528 = 1. + t45521;
  t45531 = 0.15121*t45528;
  t45537 = Sin(var1[6]);
  t45573 = Cos(var1[7]);
  t45578 = -1.*t44996*t45520*t45253;
  t45579 = t45253*t45279*t45537;
  t45580 = t45578 + t45579;
  t45585 = Sin(var1[7]);
  t45588 = Cos(var1[8]);
  t45593 = t45573*t45580;
  t45598 = -1.*t3686*t45585;
  t45600 = t45593 + t45598;
  t45609 = t3686*t45573;
  t45610 = t45580*t45585;
  t45612 = t45609 + t45610;
  t45614 = Sin(var1[8]);
  t45276 = -0.15121*t45194;
  t45277 = t45276 + t45205;
  t45200 = 0.15121*t45194;
  t45208 = t45200 + t45205;
  t45325 = -1.*t45324;
  t45332 = 1. + t45325;
  t45410 = -1.*t45408;
  t45411 = 1. + t45410;
  t45639 = -1.*t3686*t44996*t45202;
  t45640 = -1.*t45154*t3686*t45279;
  t45641 = t45639 + t45640;
  t45539 = -0.15121*t45537;
  t45540 = t45531 + t45539;
  t45542 = 0.15121*t45537;
  t45559 = t45531 + t45542;
  t45574 = -1.*t45573;
  t45575 = 1. + t45574;
  t45589 = -1.*t45588;
  t45592 = 1. + t45589;
  t45663 = -1.*t3686*t45520*t45279;
  t45664 = -1.*t3686*t44996*t45537;
  t45667 = t45663 + t45664;
  t45677 = 0.28121*t45575*t45667;
  t45689 = 0.50321*t45573*t45592*t45667;
  t45690 = -1.*t3686*t44996*t45520;
  t45692 = t3686*t45279*t45537;
  t45697 = t45690 + t45692;
  t45698 = 0.15121*t45697;
  t45699 = -0.50321*t45667*t45585*t45614;
  t45704 = t45573*t45588*t45667;
  t45705 = t45667*t45585*t45614;
  t45710 = t45704 + t45705;
  t45711 = 0.23321*t45710;
  t45734 = t3686*t44996*t45520;
  t45742 = -1.*t3686*t45279*t45537;
  t45743 = t45734 + t45742;
  t45760 = -1.*t45573*t45253;
  t45761 = -1.*t45743*t45585;
  t45763 = t45760 + t45761;
  t45766 = t45573*t45743;
  t45776 = -1.*t45253*t45585;
  t45780 = t45766 + t45776;
  t45796 = t45573*t45253;
  t45799 = t45743*t45585;
  t45802 = t45796 + t45799;
  t45816 = -0.15121*t45154;
  t45642 = -0.28121*t45332*t45641;
  t45643 = -0.50321*t45324*t45411*t45641;
  t45646 = 0.50321*t21907*t45435*t45641;
  t45649 = -1.*t45154*t3686*t44996;
  t45650 = t3686*t45202*t45279;
  t45651 = t45649 + t45650;
  t45652 = 0.15121*t45651;
  t45653 = t45324*t45408*t45641;
  t45656 = t21907*t45435*t45641;
  t45657 = t45653 + t45656;
  t45658 = -0.23321*t45657;
  t45827 = t45154*t3686*t44996;
  t45830 = -1.*t3686*t45202*t45279;
  t45832 = t45827 + t45830;
  t45834 = -1.*t21907*t45253;
  t45836 = t45324*t45832;
  t45837 = t45834 + t45836;
  t45839 = -1.*t45324*t45253;
  t45840 = -1.*t21907*t45832;
  t45842 = t45839 + t45840;
  t45850 = t45324*t45253;
  t45851 = t21907*t45832;
  t45854 = t45850 + t45851;
  t45865 = Cos(var1[3]);
  t45868 = Sin(var1[3]);
  t45867 = t45865*t44996*t45253;
  t45872 = -1.*t45868*t45279;
  t45874 = t45867 + t45872;
  t45877 = -1.*t44996*t45868;
  t45882 = -1.*t45865*t45253*t45279;
  t45883 = t45877 + t45882;
  t45895 = t45154*t45874;
  t45898 = t45202*t45883;
  t45902 = t45895 + t45898;
  t45907 = t45865*t3686*t21907;
  t45908 = t45324*t45902;
  t45910 = t45907 + t45908;
  t45914 = -1.*t45324*t45865*t3686;
  t45915 = t21907*t45902;
  t45917 = t45914 + t45915;
  t45941 = t45520*t45874;
  t45942 = t45883*t45537;
  t45945 = t45941 + t45942;
  t45950 = t45573*t45945;
  t45953 = t45865*t3686*t45585;
  t45954 = t45950 + t45953;
  t45956 = -1.*t45865*t3686*t45573;
  t45957 = t45945*t45585;
  t45958 = t45956 + t45957;
  t46008 = t45154*t3686*t44996*t45868;
  t46009 = -1.*t3686*t45202*t45868*t45279;
  t46010 = t46008 + t46009;
  t46012 = -1.*t21907*t45868*t45253;
  t46014 = t45324*t46010;
  t46015 = t46012 + t46014;
  t46018 = t45324*t45868*t45253;
  t46019 = t21907*t46010;
  t46020 = t46018 + t46019;
  t46044 = t3686*t44996*t45520*t45868;
  t46045 = -1.*t3686*t45868*t45279*t45537;
  t46046 = t46044 + t46045;
  t46053 = t45573*t46046;
  t46054 = -1.*t45868*t45253*t45585;
  t46056 = t46053 + t46054;
  t46058 = t45573*t45868*t45253;
  t46059 = t46046*t45585;
  t46060 = t46058 + t46059;
  t46081 = -1.*t44996*t45868*t45253;
  t46085 = -1.*t45865*t45279;
  t46086 = t46081 + t46085;
  t46088 = t45865*t44996;
  t46089 = -1.*t45868*t45253*t45279;
  t46090 = t46088 + t46089;
  t46095 = t45202*t46086;
  t46096 = t45154*t46090;
  t46097 = t46095 + t46096;
  t46174 = t45520*t46090;
  t46175 = t46086*t45537;
  t46177 = t46174 + t46175;
  t45718 = -0.15121*t45520;
  t45720 = t45718 + t45542;
  t45727 = 0.15121*t45520;
  t45728 = t45727 + t45542;
  t46194 = t44996*t45868*t45253;
  t46195 = t45865*t45279;
  t46196 = t46194 + t46195;
  t46198 = -1.*t46196*t45537;
  t46199 = t46174 + t46198;
  t46181 = -1.*t46090*t45537;
  t46212 = t45520*t46196;
  t46213 = t46090*t45537;
  t46215 = t46212 + t46213;
  t46217 = t3686*t45573*t45868;
  t46218 = -1.*t46215*t45585;
  t46219 = t46217 + t46218;
  t46222 = t45573*t46215;
  t46223 = t3686*t45868*t45585;
  t46224 = t46222 + t46223;
  t46250 = -1.*t3686*t45573*t45868;
  t46257 = t46215*t45585;
  t46258 = t46250 + t46257;
  t45818 = 0.15121*t45202;
  t45819 = t45816 + t45818;
  t45821 = t45816 + t45205;
  t46278 = -1.*t45202*t46196;
  t46279 = t46278 + t46096;
  t46121 = -1.*t45202*t46090;
  t46299 = t45154*t46196;
  t46300 = t45202*t46090;
  t46301 = t46299 + t46300;
  t46304 = t3686*t21907*t45868;
  t46306 = t45324*t46301;
  t46307 = t46304 + t46306;
  t46309 = t45324*t3686*t45868;
  t46312 = -1.*t21907*t46301;
  t46313 = t46309 + t46312;
  t46321 = -1.*t45324*t3686*t45868;
  t46322 = t21907*t46301;
  t46323 = t46321 + t46322;
  p_output1[0]=-0.28121*t21907*t3686 + t44996*t45208*t45253 - 1.*t45253*t45277*t45279 + 0.15121*(t44996*t45202*t45253 + t45154*t45253*t45279) - 0.28121*t45332*t45399 - 0.50321*t45411*t45416 + 0.50321*t45435*t45438 - 0.23321*(t45408*t45416 + t45435*t45438) + 0.15121*(t45253*t45279*t45520 + t44996*t45253*t45537) + t45253*t45279*t45540 - 1.*t44996*t45253*t45559 + 0.28121*t45575*t45580 + 0.28121*t3686*t45585 + 0.50321*t45592*t45600 - 0.50321*t45612*t45614 + 0.23321*(t45588*t45600 + t45612*t45614);
  p_output1[1]=t3686*t44996*t45277 + t3686*t45208*t45279 - 1.*t3686*t44996*t45540 - 1.*t3686*t45279*t45559 + t45642 + t45643 + t45646 + t45652 + t45658 + t45677 + t45689 + t45698 + t45699 + t45711;
  p_output1[2]=t45677 + t45689 + t45698 + t45699 + t45711 - 1.*t3686*t45279*t45720 + t3686*t44996*t45728;
  p_output1[3]=0.28121*t45253*t45573 + 0.28121*t45585*t45743 + 0.50321*t45592*t45763 - 0.50321*t45614*t45780 + 0.23321*(t45588*t45763 + t45614*t45780);
  p_output1[4]=0.50321*t45614*t45780 - 0.50321*t45588*t45802 + 0.23321*(-1.*t45614*t45780 + t45588*t45802);
  p_output1[5]=t45642 + t45643 + t45646 + t45652 + t45658 - 1.*t3686*t44996*t45819 + t3686*t45279*t45821;
  p_output1[6]=-0.28121*t45253*t45324 - 0.28121*t21907*t45832 + 0.50321*t45435*t45837 - 0.50321*t45411*t45842 - 0.23321*(t45435*t45837 + t45408*t45842);
  p_output1[7]=-0.50321*t45435*t45837 + 0.50321*t45408*t45854 - 0.23321*(-1.*t45435*t45837 + t45408*t45854);
  p_output1[8]=0.28121*t21907*t3686*t45865 - 0.28121*t3686*t45585*t45865 - 1.*t45208*t45874 + t45559*t45874 - 1.*t45277*t45883 + t45540*t45883 + 0.15121*(-1.*t45202*t45874 + t45154*t45883) + 0.15121*(-1.*t45537*t45874 + t45520*t45883) - 0.28121*t45332*t45902 - 0.50321*t45411*t45910 + 0.50321*t45435*t45917 - 0.23321*(t45408*t45910 + t45435*t45917) + 0.28121*t45575*t45945 + 0.50321*t45592*t45954 - 0.50321*t45614*t45958 + 0.23321*(t45588*t45954 + t45614*t45958);
  p_output1[9]=-1.*t3686*t44996*t45208*t45868 - 0.28121*t21907*t45253*t45868 + t3686*t45277*t45279*t45868 - 1.*t3686*t45279*t45540*t45868 + t3686*t44996*t45559*t45868 + 0.28121*t45253*t45585*t45868 + 0.15121*(-1.*t3686*t44996*t45202*t45868 - 1.*t3686*t45154*t45279*t45868) + 0.15121*(-1.*t3686*t45279*t45520*t45868 - 1.*t3686*t44996*t45537*t45868) - 0.28121*t45332*t46010 - 0.50321*t45411*t46015 + 0.50321*t45435*t46020 - 0.23321*(t45408*t46015 + t45435*t46020) + 0.28121*t45575*t46046 + 0.50321*t45592*t46056 - 0.50321*t45614*t46060 + 0.23321*(t45588*t46056 + t45614*t46060);
  p_output1[10]=-1.*t45277*t46086 + t45540*t46086 - 1.*t45208*t46090 + t45559*t46090 - 0.28121*t45332*t46097 - 0.50321*t45324*t45411*t46097 + 0.50321*t21907*t45435*t46097 - 0.23321*(t45324*t45408*t46097 + t21907*t45435*t46097) + 0.15121*(t45154*t46086 + t46121) + 0.28121*t45575*t46177 + 0.50321*t45573*t45592*t46177 - 0.50321*t45585*t45614*t46177 + 0.23321*(t45573*t45588*t46177 + t45585*t45614*t46177) + 0.15121*(t45520*t46086 + t46181);
  p_output1[11]=t45720*t46090 + t45728*t46196 + 0.15121*(t46181 - 1.*t45520*t46196) + 0.28121*t45575*t46199 + 0.50321*t45573*t45592*t46199 - 0.50321*t45585*t45614*t46199 + 0.23321*(t45573*t45588*t46199 + t45585*t45614*t46199);
  p_output1[12]=-0.28121*t3686*t45573*t45868 + 0.28121*t45585*t46215 + 0.50321*t45592*t46219 - 0.50321*t45614*t46224 + 0.23321*(t45588*t46219 + t45614*t46224);
  p_output1[13]=0.50321*t45614*t46224 - 0.50321*t45588*t46258 + 0.23321*(-1.*t45614*t46224 + t45588*t46258);
  p_output1[14]=-1.*t45821*t46090 - 1.*t45819*t46196 + 0.15121*(t46121 - 1.*t45154*t46196) - 0.28121*t45332*t46279 - 0.50321*t45324*t45411*t46279 + 0.50321*t21907*t45435*t46279 - 0.23321*(t45324*t45408*t46279 + t21907*t45435*t46279);
  p_output1[15]=0.28121*t3686*t45324*t45868 - 0.28121*t21907*t46301 + 0.50321*t45435*t46307 - 0.50321*t45411*t46313 - 0.23321*(t45435*t46307 + t45408*t46313);
  p_output1[16]=-0.50321*t45435*t46307 + 0.50321*t45408*t46323 - 0.23321*(-1.*t45435*t46307 + t45408*t46323);
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
