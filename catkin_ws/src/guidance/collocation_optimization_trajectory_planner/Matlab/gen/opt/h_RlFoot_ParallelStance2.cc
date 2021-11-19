/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:32:18 GMT+01:00
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
  double t45;
  double t52;
  double t58;
  double t68;
  double t6;
  double t16;
  double t17;
  double t21;
  double t24;
  double t25;
  double t66;
  double t7;
  double t130;
  double t89;
  double t169;
  double t255;
  double t262;
  double t275;
  double t302;
  double t205;
  double t112;
  double t220;
  double t187;
  double t189;
  double t191;
  double t237;
  double t239;
  double t244;
  double t331;
  double t160;
  double t365;
  double t170;
  double t422;
  double t301;
  double t452;
  double t463;
  double t69;
  double t345;
  double t357;
  double t359;
  double t367;
  double t369;
  double t375;
  double t385;
  double t387;
  double t392;
  double t508;
  double t465;
  double t472;
  double t476;
  double t477;
  double t482;
  double t483;
  double t489;
  double t490;
  double t531;
  double t574;
  double t580;
  double t706;
  double t721;
  double t729;
  double t731;
  double t845;
  double t336;
  double t848;
  double t303;
  double t1102;
  double t434;
  double t890;
  double t908;
  double t423;
  double t44;
  double t64;
  double t77;
  double t84;
  double t105;
  double t109;
  double t110;
  double t22;
  double t30;
  double t1227;
  double t124;
  double t125;
  double t1248;
  double t142;
  double t148;
  double t165;
  double t168;
  double t174;
  double t175;
  double t185;
  double t1236;
  double t1259;
  double t1290;
  double t1299;
  double t1301;
  double t1304;
  double t202;
  double t203;
  double t217;
  double t219;
  double t227;
  double t228;
  double t231;
  double t253;
  double t282;
  double t307;
  double t314;
  double t337;
  double t339;
  double t344;
  double t1308;
  double t1320;
  double t1333;
  double t1352;
  double t1376;
  double t1381;
  double t408;
  double t419;
  double t426;
  double t433;
  double t438;
  double t439;
  double t451;
  double t500;
  double t503;
  double t514;
  double t516;
  double t518;
  double t521;
  double t527;
  double t867;
  double t1395;
  double t1400;
  double t1422;
  double t1446;
  double t953;
  double t1491;
  double t1529;
  double t1538;
  double t1612;
  double t974;
  double t988;
  double t1659;
  double t1662;
  double t1664;
  double t1665;
  double t1052;
  double t1073;
  double t1107;
  double t1119;
  double t1130;
  double t1147;
  double t1175;
  double t1196;
  double t2071;
  double t2084;
  double t2092;
  double t2102;
  double t2117;
  double t2135;
  double t2155;
  double t2157;
  double t2163;
  double t2178;
  double t2181;
  double t2182;
  double t2209;
  double t2218;
  double t2220;
  double t2252;
  double t2277;
  double t2283;
  double t2285;
  double t2317;
  double t2339;
  double t2340;
  double t2353;
  double t2366;
  t45 = Cos(var1[13]);
  t52 = -1.*t45;
  t58 = 1. + t52;
  t68 = Sin(var1[13]);
  t6 = Cos(var1[4]);
  t16 = Cos(var1[12]);
  t17 = -1.*t16;
  t21 = 1. + t17;
  t24 = Sin(var1[12]);
  t25 = 0.15121*t24;
  t66 = 4.e-6*t58;
  t7 = Cos(var1[5]);
  t130 = Sin(var1[5]);
  t89 = -2.8e-11*t58;
  t169 = 7.e-6*t58;
  t255 = Cos(var1[14]);
  t262 = -1.*t255;
  t275 = 1. + t262;
  t302 = Sin(var1[14]);
  t205 = -1.*t68;
  t112 = Sin(var1[4]);
  t220 = -4.e-6*t68;
  t187 = -1.*t6*t7*t24;
  t189 = -1.*t16*t6*t130;
  t191 = t187 + t189;
  t237 = t16*t6*t7;
  t239 = -1.*t6*t24*t130;
  t244 = t237 + t239;
  t331 = 7.e-6*t275;
  t160 = -7.e-6*t68;
  t365 = -7.e-6*t58;
  t170 = 4.e-6*t68;
  t422 = 4.e-6*t275;
  t301 = -2.8e-11*t275;
  t452 = -1. + t45;
  t463 = 4.e-6*t452;
  t69 = 7.e-6*t68;
  t345 = 2.8e-11*t58;
  t357 = t345 + t205;
  t359 = t357*t112;
  t367 = t365 + t220;
  t369 = t367*t191;
  t375 = -1.000000000016*t58;
  t385 = 1. + t375;
  t387 = t385*t244;
  t392 = t359 + t369 + t387;
  t508 = 7.e-6*t302;
  t465 = t463 + t160;
  t472 = t465*t112;
  t476 = -6.5e-11*t58;
  t477 = 1. + t476;
  t482 = t477*t191;
  t483 = t365 + t170;
  t489 = t483*t244;
  t490 = t472 + t482 + t489;
  t531 = -1.000000000049*t58;
  t574 = 1. + t531;
  t580 = t574*t112;
  t706 = t463 + t69;
  t721 = t706*t191;
  t729 = t345 + t68;
  t731 = t729*t244;
  t845 = t580 + t721 + t731;
  t336 = -4.e-6*t302;
  t848 = 2.8e-11*t275;
  t303 = -1.*t302;
  t1102 = -7.e-6*t275;
  t434 = 4.e-6*t302;
  t890 = -1. + t255;
  t908 = 4.e-6*t890;
  t423 = -7.e-6*t302;
  t44 = 5.856279999999999e-13*var1[13];
  t64 = -0.0387489999948987*t58;
  t77 = t66 + t69;
  t84 = -2.123459e-6*t77;
  t105 = t89 + t68;
  t109 = -0.281209000004*t105;
  t110 = t44 + t64 + t84 + t109;
  t22 = -0.15121*t21;
  t30 = t22 + t25;
  t1227 = Sin(var1[3]);
  t124 = 0.15121*t21;
  t125 = t124 + t25;
  t1248 = Cos(var1[3]);
  t142 = -1.4640699999999997e-7*var1[13];
  t148 = -1.38024835e-16*t58;
  t165 = t66 + t160;
  t168 = -0.038748999993*t165;
  t174 = t169 + t170;
  t175 = -0.281209000004*t174;
  t185 = t142 + t148 + t168 + t175;
  t1236 = t7*t1227*t112;
  t1259 = t1248*t130;
  t1290 = t1236 + t1259;
  t1299 = t1248*t7;
  t1301 = -1.*t1227*t112*t130;
  t1304 = t1299 + t1301;
  t202 = 1.0248489999999998e-12*var1[13];
  t203 = -0.28120900000849935*t58;
  t217 = t89 + t205;
  t219 = -0.038748999993*t217;
  t227 = t169 + t220;
  t228 = -2.123459e-6*t227;
  t231 = t202 + t203 + t219 + t228;
  t253 = 1.8190549999999993e-12*var1[14];
  t282 = -0.5031490000160505*t275;
  t307 = t301 + t303;
  t314 = -0.038922999986*t307;
  t337 = t331 + t336;
  t339 = -3.6777349999999994e-6*t337;
  t344 = t253 + t282 + t314 + t339;
  t1308 = -1.*t24*t1290;
  t1320 = t16*t1304;
  t1333 = t1308 + t1320;
  t1352 = t16*t1290;
  t1376 = t24*t1304;
  t1381 = t1352 + t1376;
  t408 = -2.598649999999999e-7*var1[14];
  t419 = -2.3905277499999995e-16*t275;
  t426 = t422 + t423;
  t433 = -0.038922999986*t426;
  t438 = t331 + t434;
  t439 = -0.503149000008*t438;
  t451 = t408 + t419 + t433 + t439;
  t500 = 1.0394599999999997e-12*var1[14];
  t503 = -0.03892299998790722*t275;
  t514 = t422 + t508;
  t516 = -3.6777349999999994e-6*t514;
  t518 = t301 + t302;
  t521 = -0.503149000008*t518;
  t527 = t500 + t503 + t516 + t521;
  t867 = t848 + t302;
  t1395 = -1.*t6*t357*t1227;
  t1400 = t367*t1333;
  t1422 = t385*t1381;
  t1446 = t1395 + t1400 + t1422;
  t953 = t908 + t508;
  t1491 = -1.*t6*t465*t1227;
  t1529 = t477*t1333;
  t1538 = t483*t1381;
  t1612 = t1491 + t1529 + t1538;
  t974 = -1.000000000049*t275;
  t988 = 1. + t974;
  t1659 = -1.*t574*t6*t1227;
  t1662 = t706*t1333;
  t1664 = t729*t1381;
  t1665 = t1659 + t1662 + t1664;
  t1052 = -1.000000000016*t275;
  t1073 = 1. + t1052;
  t1107 = t1102 + t336;
  t1119 = t848 + t303;
  t1130 = t1102 + t434;
  t1147 = -6.5e-11*t275;
  t1175 = 1. + t1147;
  t1196 = t908 + t423;
  t2071 = -1.*t1248*t7*t112;
  t2084 = t1227*t130;
  t2092 = t2071 + t2084;
  t2102 = t7*t1227;
  t2117 = t1248*t112*t130;
  t2135 = t2102 + t2117;
  t2155 = -1.*t24*t2092;
  t2157 = t16*t2135;
  t2163 = t2155 + t2157;
  t2178 = t16*t2092;
  t2181 = t24*t2135;
  t2182 = t2178 + t2181;
  t2209 = t1248*t6*t357;
  t2218 = t367*t2163;
  t2220 = t385*t2182;
  t2252 = t2209 + t2218 + t2220;
  t2277 = t1248*t6*t465;
  t2283 = t477*t2163;
  t2285 = t483*t2182;
  t2317 = t2277 + t2283 + t2285;
  t2339 = t574*t1248*t6;
  t2340 = t706*t2163;
  t2353 = t729*t2182;
  t2366 = t2339 + t2340 + t2353;
  p_output1[0]=t110*t112 + t185*t191 + t231*t244 + t344*t392 + t451*t490 - 1.*t125*t130*t6 + t30*t6*t7 + t527*t845 - 0.80315*(t1073*t392 + t1107*t490 + t1119*t845) + 0.148705*(t1130*t392 + t1175*t490 + t1196*t845) - 0.038924*(t392*t867 + t490*t953 + t845*t988) + var1[0] - 1.*var2[0];
  p_output1[1]=t125*t1304 - 0.80315*(t1073*t1446 + t1107*t1612 + t1119*t1665) + 0.148705*(t1130*t1446 + t1175*t1612 + t1196*t1665) + t1333*t185 + t1381*t231 + t1290*t30 + t1446*t344 + t1612*t451 + t1665*t527 - 1.*t110*t1227*t6 - 0.038924*(t1446*t867 + t1612*t953 + t1665*t988) + var1[1] - 1.*var2[1];
  p_output1[2]=t125*t2135 + t185*t2163 + t2182*t231 - 0.80315*(t1073*t2252 + t1107*t2317 + t1119*t2366) + 0.148705*(t1130*t2252 + t1175*t2317 + t1196*t2366) + t2092*t30 + t2252*t344 + t2317*t451 + t2366*t527 + t110*t1248*t6 - 0.038924*(t2252*t867 + t2317*t953 + t2366*t988) + var1[2] - 1.*var2[2];
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
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

#include "h_RlFoot_ParallelStance2.hh"

namespace ParallelStance2
{

void h_RlFoot_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
