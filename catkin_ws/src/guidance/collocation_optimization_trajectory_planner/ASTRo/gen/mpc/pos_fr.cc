/*
 * Automatically Generated from Mathematica.
 * Tue 16 Nov 2021 21:24:58 GMT+01:00
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
  double t91;
  double t18;
  double t34;
  double t41;
  double t49;
  double t75;
  double t84;
  double t102;
  double t105;
  double t103;
  double t109;
  double t92;
  double t93;
  double t95;
  double t97;
  double t22;
  double t132;
  double t137;
  double t138;
  double t104;
  double t110;
  double t114;
  double t145;
  double t146;
  double t147;
  double t152;
  double t153;
  double t154;
  double t159;
  double t163;
  double t164;
  double t174;
  double t190;
  double t181;
  double t182;
  double t183;
  double t184;
  double t185;
  double t186;
  double t194;
  double t195;
  double t196;
  double t197;
  double t204;
  double t205;
  double t206;
  double t207;
  double t208;
  double t209;
  double t65;
  double t88;
  double t90;
  double t94;
  double t96;
  double t100;
  double t101;
  double t122;
  double t127;
  double t140;
  double t141;
  double t142;
  double t143;
  double t144;
  double t236;
  double t237;
  double t238;
  double t149;
  double t150;
  double t151;
  double t169;
  double t179;
  double t180;
  double t232;
  double t233;
  double t234;
  double t240;
  double t241;
  double t242;
  double t244;
  double t245;
  double t246;
  double t188;
  double t189;
  double t191;
  double t192;
  double t193;
  double t199;
  double t200;
  double t201;
  double t202;
  double t203;
  double t248;
  double t249;
  double t250;
  double t251;
  double t253;
  double t254;
  double t255;
  double t256;
  double t213;
  double t214;
  double t258;
  double t259;
  double t260;
  double t261;
  double t223;
  double t224;
  double t282;
  double t283;
  double t284;
  double t286;
  double t287;
  double t288;
  double t290;
  double t291;
  double t292;
  double t293;
  double t295;
  double t296;
  double t297;
  double t298;
  double t300;
  double t301;
  double t302;
  double t303;
  t91 = Cos(var1[7]);
  t18 = Cos(var1[5]);
  t34 = Cos(var1[6]);
  t41 = -1.*t34;
  t49 = 1. + t41;
  t75 = Sin(var1[6]);
  t84 = -0.15121*t75;
  t102 = Cos(var1[3]);
  t105 = Sin(var1[5]);
  t103 = Sin(var1[4]);
  t109 = Sin(var1[3]);
  t92 = -1.*t91;
  t93 = 1. + t92;
  t95 = -1. + t91;
  t97 = Sin(var1[7]);
  t22 = Cos(var1[4]);
  t132 = -1.*t102*t105;
  t137 = t18*t103*t109;
  t138 = t132 + t137;
  t104 = t18*t102*t103;
  t110 = t105*t109;
  t114 = t104 + t110;
  t145 = -1.*t18*t22*t75;
  t146 = t34*t138;
  t147 = t145 + t146;
  t152 = t34*t18*t22;
  t153 = t75*t138;
  t154 = t152 + t153;
  t159 = Cos(var1[8]);
  t163 = -1.*t159;
  t164 = 1. + t163;
  t174 = Sin(var1[8]);
  t190 = -1. + t159;
  t181 = t97*t114;
  t182 = -4.e-6*t97*t147;
  t183 = -1.000000000016*t93;
  t184 = 1. + t183;
  t185 = t184*t154;
  t186 = t181 + t182 + t185;
  t194 = t91*t114;
  t195 = 4.e-6*t93*t147;
  t196 = -1.*t97*t154;
  t197 = t194 + t195 + t196;
  t204 = 4.e-6*t93*t114;
  t205 = 1.6e-11*t95;
  t206 = 1. + t205;
  t207 = t206*t147;
  t208 = 4.e-6*t97*t154;
  t209 = t204 + t207 + t208;
  t65 = 0.15121*t49;
  t88 = t65 + t84;
  t90 = -4.9936e-13*var1[7];
  t94 = -0.038749*t93;
  t96 = 6.19984e-13*t95;
  t100 = -0.281210000004*t97;
  t101 = t90 + t94 + t96 + t100;
  t122 = -0.15121*t49;
  t127 = t122 + t84;
  t140 = -1.2484e-7*var1[7];
  t141 = 2.479936e-18*t93;
  t142 = -1.54996e-7*t95;
  t143 = 1.124840000016e-6*t97;
  t144 = t140 + t141 + t142 + t143;
  t236 = t18*t102;
  t237 = t105*t103*t109;
  t238 = t236 + t237;
  t149 = 0.281210000008499*t93;
  t150 = -0.03874900000062*t97;
  t151 = t149 + t150;
  t169 = 0.50315000001605*t164;
  t179 = -0.0398890000006382*t174;
  t180 = t169 + t179;
  t232 = t102*t105*t103;
  t233 = -1.*t18*t109;
  t234 = t232 + t233;
  t240 = -1.*t22*t75*t105;
  t241 = t34*t238;
  t242 = t240 + t241;
  t244 = t34*t22*t105;
  t245 = t75*t238;
  t246 = t244 + t245;
  t188 = -5.04e-14*var1[8];
  t189 = -0.039889*t164;
  t191 = 6.38224e-13*t190;
  t192 = -0.503150000008*t174;
  t193 = t188 + t189 + t191 + t192;
  t199 = -1.26e-8*var1[8];
  t200 = 2.552896e-18*t164;
  t201 = -1.59556e-7*t190;
  t202 = 2.012600000032e-6*t174;
  t203 = t199 + t200 + t201 + t202;
  t248 = t97*t234;
  t249 = -4.e-6*t97*t242;
  t250 = t184*t246;
  t251 = t248 + t249 + t250;
  t253 = t91*t234;
  t254 = 4.e-6*t93*t242;
  t255 = -1.*t97*t246;
  t256 = t253 + t254 + t255;
  t213 = 1.6e-11*t190;
  t214 = 1. + t213;
  t258 = 4.e-6*t93*t234;
  t259 = t206*t242;
  t260 = 4.e-6*t97*t246;
  t261 = t258 + t259 + t260;
  t223 = -1.000000000016*t164;
  t224 = 1. + t223;
  t282 = t75*t103;
  t283 = t34*t22*t109;
  t284 = t282 + t283;
  t286 = -1.*t34*t103;
  t287 = t22*t75*t109;
  t288 = t286 + t287;
  t290 = t22*t102*t97;
  t291 = -4.e-6*t97*t284;
  t292 = t184*t288;
  t293 = t290 + t291 + t292;
  t295 = t91*t22*t102;
  t296 = 4.e-6*t93*t284;
  t297 = -1.*t97*t288;
  t298 = t295 + t296 + t297;
  t300 = 4.e-6*t93*t22*t102;
  t301 = t206*t284;
  t302 = 4.e-6*t97*t288;
  t303 = t300 + t301 + t302;
  p_output1[0]=t101*t114 + t127*t138 + t144*t147 + t151*t154 + t180*t186 + t193*t197 + t203*t209 - 0.041195*(-1.*t174*t186 + t159*t197 + 4.e-6*t164*t209) - 0.14871*(4.e-6*t174*t186 + 4.e-6*t164*t197 + t209*t214) + 0.803147*(t174*t197 - 4.e-6*t174*t209 + t186*t224) + t18*t22*t88 + var1[0];
  p_output1[1]=t101*t234 + t127*t238 + t144*t242 + t151*t246 + t180*t251 + t193*t256 + t203*t261 - 0.041195*(-1.*t174*t251 + t159*t256 + 4.e-6*t164*t261) + 0.803147*(t224*t251 + t174*t256 - 4.e-6*t174*t261) - 0.14871*(4.e-6*t174*t251 + 4.e-6*t164*t256 + t214*t261) + t105*t22*t88 + var1[1];
  p_output1[2]=t101*t102*t22 + t109*t127*t22 + t144*t284 + t151*t288 + t180*t293 + t193*t298 + t203*t303 - 0.041195*(-1.*t174*t293 + t159*t298 + 4.e-6*t164*t303) + 0.803147*(t224*t293 + t174*t298 - 4.e-6*t174*t303) - 0.14871*(4.e-6*t174*t293 + 4.e-6*t164*t298 + t214*t303) - 1.*t103*t88 + var1[2];
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
    ( !(mrows == 9 && ncols == 1) && 
      !(mrows == 1 && ncols == 9))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "pos_fr.hh"

namespace SymFunction
{

void pos_fr_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
