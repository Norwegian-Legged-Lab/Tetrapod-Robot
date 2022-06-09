/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:06:22 GMT+02:00
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
  double t16;
  double t5;
  double t6;
  double t18;
  double t21;
  double t14;
  double t28;
  double t8;
  double t30;
  double t31;
  double t32;
  double t34;
  double t35;
  double t37;
  double t38;
  double t40;
  double t44;
  double t45;
  double t47;
  double t19;
  double t20;
  double t10;
  double t13;
  double t42;
  double t43;
  double t64;
  double t65;
  double t66;
  double t68;
  double t70;
  double t71;
  double t84;
  double t86;
  double t87;
  double t91;
  double t92;
  double t93;
  double t108;
  double t109;
  double t110;
  double t112;
  double t113;
  double t115;
  double t127;
  double t128;
  double t129;
  double t142;
  double t145;
  double t149;
  double t150;
  double t152;
  double t144;
  double t146;
  double t147;
  double t158;
  double t160;
  double t161;
  double t163;
  double t164;
  double t165;
  double t167;
  double t168;
  double t169;
  double t189;
  double t190;
  double t191;
  double t194;
  double t195;
  double t196;
  double t199;
  double t200;
  double t201;
  double t213;
  double t214;
  double t215;
  double t220;
  double t221;
  double t222;
  double t224;
  double t225;
  double t226;
  double t228;
  double t229;
  double t230;
  double t246;
  double t247;
  double t248;
  double t252;
  double t253;
  double t254;
  double t265;
  double t266;
  double t267;
  double t270;
  double t271;
  double t272;
  double t274;
  double t275;
  double t276;
  double t288;
  double t289;
  double t290;
  double t292;
  double t293;
  double t294;
  double t282;
  double t323;
  double t324;
  double t325;
  double t327;
  double t328;
  double t329;
  double t331;
  double t332;
  double t333;
  double t347;
  double t348;
  double t349;
  double t351;
  double t352;
  double t353;
  double t355;
  double t356;
  double t357;
  double t154;
  double t370;
  double t371;
  double t375;
  double t376;
  double t377;
  double t388;
  double t389;
  double t390;
  double t393;
  double t394;
  double t395;
  double t397;
  double t398;
  double t399;
  double t411;
  double t412;
  double t413;
  t16 = Sin(var1[4]);
  t5 = Cos(var1[4]);
  t6 = Sin(var1[12]);
  t18 = Cos(var1[12]);
  t21 = Sin(var1[5]);
  t14 = Cos(var1[5]);
  t28 = Sin(var1[13]);
  t8 = Cos(var1[13]);
  t30 = t18*t5;
  t31 = -1.*t6*t16*t21;
  t32 = t30 + t31;
  t34 = Sin(var1[14]);
  t35 = t14*t28*t16;
  t37 = t8*t32;
  t38 = t35 + t37;
  t40 = Cos(var1[14]);
  t44 = -1.*t8*t14*t16;
  t45 = t28*t32;
  t47 = t44 + t45;
  t19 = -1.*t18;
  t20 = 1. + t19;
  t10 = -1.*t8;
  t13 = 1. + t10;
  t42 = -1.*t40;
  t43 = 1. + t42;
  t64 = t5*t14*t6*t28;
  t65 = -1.*t8*t5*t21;
  t66 = t64 + t65;
  t68 = t8*t5*t14*t6;
  t70 = t5*t28*t21;
  t71 = t68 + t70;
  t84 = -1.*t6*t16;
  t86 = t18*t5*t21;
  t87 = t84 + t86;
  t91 = t18*t16;
  t92 = t5*t6*t21;
  t93 = t91 + t92;
  t108 = -1.*t5*t14*t28;
  t109 = t8*t93;
  t110 = t108 + t109;
  t112 = -1.*t8*t5*t14;
  t113 = -1.*t28*t93;
  t115 = t112 + t113;
  t127 = t8*t5*t14;
  t128 = t28*t93;
  t129 = t127 + t128;
  t142 = Cos(var1[3]);
  t145 = Sin(var1[3]);
  t149 = -1.*t14*t145;
  t150 = -1.*t142*t16*t21;
  t152 = t149 + t150;
  t144 = t142*t14*t16;
  t146 = -1.*t145*t21;
  t147 = t144 + t146;
  t158 = -1.*t18*t142*t5;
  t160 = -1.*t6*t152;
  t161 = t158 + t160;
  t163 = -1.*t28*t147;
  t164 = t8*t161;
  t165 = t163 + t164;
  t167 = t8*t147;
  t168 = t28*t161;
  t169 = t167 + t168;
  t189 = t18*t145*t16;
  t190 = t5*t6*t145*t21;
  t191 = t189 + t190;
  t194 = -1.*t5*t14*t28*t145;
  t195 = t8*t191;
  t196 = t194 + t195;
  t199 = t8*t5*t14*t145;
  t200 = t28*t191;
  t201 = t199 + t200;
  t213 = -1.*t14*t145*t16;
  t214 = -1.*t142*t21;
  t215 = t213 + t214;
  t220 = t142*t14;
  t221 = -1.*t145*t16*t21;
  t222 = t220 + t221;
  t224 = -1.*t6*t28*t215;
  t225 = t8*t222;
  t226 = t224 + t225;
  t228 = -1.*t8*t6*t215;
  t229 = -1.*t28*t222;
  t230 = t228 + t229;
  t246 = t5*t6*t145;
  t247 = -1.*t18*t222;
  t248 = t246 + t247;
  t252 = -1.*t18*t5*t145;
  t253 = -1.*t6*t222;
  t254 = t252 + t253;
  t265 = t14*t145*t16;
  t266 = t142*t21;
  t267 = t265 + t266;
  t270 = -1.*t28*t267;
  t271 = t8*t254;
  t272 = t270 + t271;
  t274 = -1.*t8*t267;
  t275 = -1.*t28*t254;
  t276 = t274 + t275;
  t288 = t8*t267;
  t289 = t28*t254;
  t290 = t288 + t289;
  t292 = -1.*t34*t272;
  t293 = t40*t290;
  t294 = t292 + t293;
  t282 = t40*t272;
  t323 = -1.*t18*t142*t16;
  t324 = -1.*t142*t5*t6*t21;
  t325 = t323 + t324;
  t327 = t142*t5*t14*t28;
  t328 = t8*t325;
  t329 = t327 + t328;
  t331 = -1.*t8*t142*t5*t14;
  t332 = t28*t325;
  t333 = t331 + t332;
  t347 = t14*t145;
  t348 = t142*t16*t21;
  t349 = t347 + t348;
  t351 = -1.*t6*t28*t147;
  t352 = t8*t349;
  t353 = t351 + t352;
  t355 = -1.*t8*t6*t147;
  t356 = -1.*t28*t349;
  t357 = t355 + t356;
  t154 = -1.*t142*t5*t6;
  t370 = -1.*t18*t349;
  t371 = t154 + t370;
  t375 = t18*t142*t5;
  t376 = -1.*t6*t349;
  t377 = t375 + t376;
  t388 = -1.*t142*t14*t16;
  t389 = t145*t21;
  t390 = t388 + t389;
  t393 = -1.*t28*t390;
  t394 = t8*t377;
  t395 = t393 + t394;
  t397 = -1.*t8*t390;
  t398 = -1.*t28*t377;
  t399 = t397 + t398;
  t411 = t8*t390;
  t412 = t28*t377;
  t413 = t411 + t412;
  p_output1[0]=1.;
  p_output1[1]=-0.325*t13*t14*t16 - 0.1575*t16*t20*t21 - 0.325*t28*t32 + 0.075*t34*t38 + 0.075*t43*t47 - 0.0641*(t38*t40 + t34*t47) + 0.355*(-1.*t34*t38 + t40*t47) + 0.1575*t5*t6 - 0.2255*(t16*t18*t21 + t5*t6);
  p_output1[2]=0.2255*t14*t18*t5 + 0.1575*t14*t20*t5 - 0.325*t13*t21*t5 - 0.325*t14*t28*t5*t6 + 0.075*t43*t66 + 0.075*t34*t71 + 0.355*(t40*t66 - 1.*t34*t71) - 0.0641*(t34*t66 + t40*t71);
  p_output1[3]=0.1575*t16*t18 + 0.1575*t21*t5*t6 - 0.325*t28*t87 + 0.075*t28*t43*t87 + 0.075*t34*t8*t87 + 0.355*(t28*t40*t87 - 1.*t34*t8*t87) - 0.0641*(t28*t34*t87 + t40*t8*t87) - 0.2255*t93;
  p_output1[4]=0.075*t115*t34 + 0.355*(-1.*t115*t34 + t110*t40) - 0.0641*(t110*t34 + t115*t40) + 0.075*t110*t43 + 0.325*t14*t28*t5 - 0.325*t8*t93;
  p_output1[5]=0.075*t129*t34 + 0.075*t110*t40 + 0.355*(-1.*t129*t34 - 1.*t110*t40) - 0.0641*(-1.*t110*t34 + t129*t40);
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=0.325*t13*t147 - 0.2255*(t154 + t152*t18) - 0.1575*t152*t20 - 0.325*t161*t28 + 0.075*t165*t34 - 0.0641*(t169*t34 + t165*t40) + 0.355*(-1.*t165*t34 + t169*t40) + 0.075*t169*t43 - 0.1575*t142*t5*t6;
  p_output1[9]=-0.325*t191*t28 + 0.075*t196*t34 - 0.0641*(t201*t34 + t196*t40) + 0.355*(-1.*t196*t34 + t201*t40) + 0.075*t201*t43 + 0.325*t13*t14*t145*t5 + 0.1575*t145*t20*t21*t5 + 0.1575*t145*t16*t6 - 0.2255*(-1.*t145*t18*t21*t5 + t145*t16*t6);
  p_output1[10]=-0.2255*t18*t215 - 0.1575*t20*t215 + 0.325*t13*t222 + 0.075*t230*t34 + 0.355*(-1.*t230*t34 + t226*t40) - 0.0641*(t226*t34 + t230*t40) + 0.075*t226*t43 + 0.325*t215*t28*t6;
  p_output1[11]=-0.2255*t254 - 0.325*t248*t28 + 0.075*t248*t28*t43 - 0.1575*t145*t18*t5 - 0.1575*t222*t6 + 0.075*t248*t34*t8 + 0.355*(t248*t28*t40 - 1.*t248*t34*t8) - 0.0641*(t248*t28*t34 + t248*t40*t8);
  p_output1[12]=0.325*t267*t28 + 0.075*t276*t34 + 0.355*(t282 - 1.*t276*t34) - 0.0641*(t272*t34 + t276*t40) + 0.075*t272*t43 - 0.325*t254*t8;
  p_output1[13]=-0.0641*t294 + 0.075*t290*t34 + 0.075*t272*t40 + 0.355*(-1.*t290*t34 - 1.*t272*t40);
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=-0.1575*t20*t222 + 0.325*t13*t267 - 0.325*t254*t28 + 0.355*t294 + 0.075*t272*t34 - 0.0641*(t282 + t290*t34) + 0.075*t290*t43 - 0.1575*t145*t5*t6 - 0.2255*(t18*t222 - 1.*t145*t5*t6);
  p_output1[17]=-0.325*t28*t325 + 0.075*t329*t34 - 0.0641*(t333*t34 + t329*t40) + 0.355*(-1.*t329*t34 + t333*t40) + 0.075*t333*t43 - 0.325*t13*t14*t142*t5 - 0.1575*t142*t20*t21*t5 - 0.1575*t142*t16*t6 - 0.2255*(t142*t18*t21*t5 - 1.*t142*t16*t6);
  p_output1[18]=-0.2255*t147*t18 - 0.1575*t147*t20 + 0.325*t13*t349 + 0.075*t34*t357 + 0.355*(-1.*t34*t357 + t353*t40) - 0.0641*(t34*t353 + t357*t40) + 0.075*t353*t43 + 0.325*t147*t28*t6;
  p_output1[19]=-0.325*t28*t371 - 0.2255*t377 + 0.075*t28*t371*t43 + 0.1575*t142*t18*t5 - 0.1575*t349*t6 + 0.075*t34*t371*t8 + 0.355*(t28*t371*t40 - 1.*t34*t371*t8) - 0.0641*(t28*t34*t371 + t371*t40*t8);
  p_output1[20]=0.325*t28*t390 + 0.075*t34*t399 + 0.355*(-1.*t34*t399 + t395*t40) - 0.0641*(t34*t395 + t399*t40) + 0.075*t395*t43 - 0.325*t377*t8;
  p_output1[21]=0.075*t395*t40 + 0.075*t34*t413 + 0.355*(-1.*t395*t40 - 1.*t34*t413) - 0.0641*(-1.*t34*t395 + t40*t413);
  p_output1[22]=-1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 23, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_h_FrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void J_h_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
