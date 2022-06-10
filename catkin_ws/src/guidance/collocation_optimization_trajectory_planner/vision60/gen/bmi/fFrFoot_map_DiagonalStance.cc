/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:56:28 GMT+02:00
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
  double t76;
  double t77;
  double t92;
  double t89;
  double t97;
  double t98;
  double t108;
  double t123;
  double t113;
  double t115;
  double t116;
  double t124;
  double t72;
  double t102;
  double t99;
  double t122;
  double t125;
  double t126;
  double t136;
  double t131;
  double t133;
  double t134;
  double t130;
  double t137;
  double t138;
  double t140;
  double t163;
  double t165;
  double t166;
  double t168;
  double t171;
  double t172;
  double t174;
  double t175;
  double t176;
  double t162;
  double t167;
  double t177;
  double t178;
  double t186;
  double t192;
  double t193;
  double t194;
  double t198;
  double t199;
  double t157;
  double t159;
  double t160;
  double t161;
  double t180;
  double t183;
  double t207;
  double t209;
  double t210;
  double t220;
  double t221;
  double t222;
  double t203;
  double t204;
  double t205;
  double t185;
  double t200;
  double t201;
  double t148;
  double t150;
  double t151;
  double t211;
  double t231;
  double t232;
  double t146;
  double t152;
  double t153;
  double t154;
  double t155;
  double t156;
  double t253;
  double t254;
  double t255;
  double t269;
  double t271;
  double t274;
  double t202;
  double t277;
  double t299;
  double t312;
  double t240;
  double t244;
  double t245;
  double t100;
  double t127;
  double t129;
  double t282;
  double t283;
  double t284;
  double t419;
  double t439;
  double t619;
  double t609;
  double t638;
  double t630;
  double t681;
  double t687;
  double t705;
  double t722;
  t91 = Cos(var1[13]);
  t76 = Cos(var1[14]);
  t77 = Sin(var1[13]);
  t92 = Sin(var1[14]);
  t89 = t76*t77;
  t97 = -1.*t91*t92;
  t98 = t89 + t97;
  t108 = Cos(var1[5]);
  t123 = Sin(var1[12]);
  t113 = t91*t76;
  t115 = t77*t92;
  t116 = t113 + t115;
  t124 = Sin(var1[5]);
  t72 = Cos(var1[12]);
  t102 = Cos(var1[4]);
  t99 = Sin(var1[4]);
  t122 = t108*t116;
  t125 = t123*t98*t124;
  t126 = t122 + t125;
  t136 = Sin(var1[3]);
  t131 = -1.*t108*t123*t98;
  t133 = t116*t124;
  t134 = t131 + t133;
  t130 = Cos(var1[3]);
  t137 = t72*t102*t98;
  t138 = -1.*t99*t126;
  t140 = t137 + t138;
  t163 = -0.0641*t76;
  t165 = -0.28*t92;
  t166 = t163 + t165;
  t168 = -1.*t76;
  t171 = 1. + t168;
  t172 = 0.075*t171;
  t174 = 0.355*t76;
  t175 = -0.0641*t92;
  t176 = t172 + t174 + t175;
  t162 = -0.325*t77;
  t167 = t91*t166;
  t177 = t77*t176;
  t178 = t162 + t167 + t177;
  t186 = -1.*t91;
  t192 = 1. + t186;
  t193 = 0.325*t192;
  t194 = -1.*t77*t166;
  t198 = t91*t176;
  t199 = t193 + t194 + t198;
  t157 = -1.*t72;
  t159 = 1. + t157;
  t160 = -0.1575*t159;
  t161 = -0.2255*t72;
  t180 = -1.*t123*t178;
  t183 = t160 + t161 + t180;
  t207 = -0.068*t123;
  t209 = t72*t178;
  t210 = t207 + t209;
  t220 = t108*t199;
  t221 = -1.*t183*t124;
  t222 = t220 + t221;
  t203 = t123*t99;
  t204 = -1.*t72*t102*t124;
  t205 = t203 + t204;
  t185 = t108*t183;
  t200 = t199*t124;
  t201 = t185 + t200;
  t148 = -1.*t76*t77;
  t150 = t91*t92;
  t151 = t148 + t150;
  t211 = t210*t99;
  t231 = t102*t222;
  t232 = t211 + t231;
  t146 = t72*t116*t99;
  t152 = t108*t151;
  t153 = t123*t116*t124;
  t154 = t152 + t153;
  t155 = t102*t154;
  t156 = t146 + t155;
  t253 = t102*t210;
  t254 = -1.*t99*t222;
  t255 = t253 + t254;
  t269 = -1.*t108*t123*t116;
  t271 = t151*t124;
  t274 = t269 + t271;
  t202 = -1.*t72*t108*t201;
  t277 = t201*t274;
  t299 = -1.*t123*t210;
  t312 = t72*t210*t116;
  t240 = t102*t123;
  t244 = t72*t99*t124;
  t245 = t240 + t244;
  t100 = t72*t98*t99;
  t127 = t102*t126;
  t129 = t100 + t127;
  t282 = t72*t102*t116;
  t283 = -1.*t99*t154;
  t284 = t282 + t283;
  t419 = t201*t134;
  t439 = -1.*t201*t274;
  t619 = -1.*t72*t210*t116;
  t609 = t72*t210*t98;
  t638 = t199*t116;
  t630 = -1.*t199*t151;
  t681 = t72*t108*t201;
  t687 = -1.*t201*t134;
  t705 = t123*t210;
  t722 = -1.*t72*t210*t98;
  p_output1[0]=t129;
  p_output1[1]=t130*t134 - 1.*t136*t140;
  p_output1[2]=t134*t136 + t130*t140;
  p_output1[3]=t156*(t202 - 1.*t205*t232 - 1.*t245*t255) + t205*(t156*t232 + t277 + t255*t284);
  p_output1[4]=t108*(t154*t222 + t277 + t312)*t72 + t274*(t202 + t299 + t124*t222*t72);
  p_output1[5]=t123*(-1.*t116*t123*t183 + t151*t199 + t312) + t116*t72*(t299 - 1.*t183*t72);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0.2255*t151 + 0.1575*t98;
  p_output1[13]=-1.*t166*t76 + 0.325*t92 - 1.*t176*t92;
  p_output1[14]=-0.0641;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t205;
  p_output1[19]=-1.*t136*t245 + t108*t130*t72;
  p_output1[20]=t130*t245 + t108*t136*t72;
  p_output1[21]=t156*(t129*t232 + t140*t255 + t419) + t129*(-1.*t156*t232 - 1.*t255*t284 + t439);
  p_output1[22]=t274*(t126*t222 + t419 + t609) + t134*(-1.*t154*t222 + t439 + t619);
  p_output1[23]=(t116*t123*t183 + t619 + t630)*t72*t98 + t116*t72*(t609 + t638 - 1.*t123*t183*t98);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=t116*(-1.*t116*t178 + t630) + t151*(t638 + t178*t98);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t156;
  p_output1[37]=t130*t274 - 1.*t136*t284;
  p_output1[38]=t136*t274 + t130*t284;
  p_output1[39]=t129*(t205*t232 + t245*t255 + t681) + t205*(-1.*t129*t232 - 1.*t140*t255 + t687);
  p_output1[40]=t134*(t681 + t705 - 1.*t124*t222*t72) + t108*t72*(-1.*t126*t222 + t687 + t722);
  p_output1[41]=t72*(t705 + t183*t72)*t98 + t123*(-1.*t116*t199 + t722 + t123*t183*t98);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.068*t116;
  p_output1[49]=-0.325*t76 + t176*t76 - 1.*t166*t92;
  p_output1[50]=-0.28;
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

#include "fFrFoot_map_DiagonalStance.hh"

namespace SymFunction
{

void fFrFoot_map_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
