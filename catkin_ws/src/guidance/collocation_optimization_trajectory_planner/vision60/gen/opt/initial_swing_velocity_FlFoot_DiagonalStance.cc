/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:47:12 GMT+02:00
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
  double t159;
  double t498;
  double t696;
  double t851;
  double t924;
  double t1488;
  double t1575;
  double t1613;
  double t1743;
  double t2326;
  double t2580;
  double t2716;
  double t3058;
  double t2328;
  double t2403;
  double t3370;
  double t3397;
  double t3408;
  double t3418;
  double t3444;
  double t3446;
  double t1082;
  double t1339;
  double t1459;
  double t14213;
  double t14221;
  double t14232;
  double t14145;
  double t14169;
  double t14189;
  double t17862;
  double t17863;
  double t17864;
  double t3311;
  double t3342;
  double t3244;
  double t3292;
  double t18701;
  double t18705;
  double t18708;
  double t18711;
  double t18712;
  double t18713;
  double t18717;
  double t18794;
  double t18857;
  double t19219;
  double t19223;
  double t19232;
  double t19234;
  double t19241;
  double t19277;
  double t19280;
  double t19285;
  double t19325;
  double t19326;
  double t19327;
  double t19345;
  double t19346;
  double t19349;
  double t19453;
  double t19454;
  double t19460;
  double t19723;
  double t19727;
  double t19728;
  double t19730;
  double t19731;
  double t19732;
  double t19734;
  double t19735;
  double t19736;
  double t20098;
  double t20100;
  double t20101;
  double t20081;
  double t20085;
  double t20089;
  double t20108;
  double t20109;
  double t20123;
  double t20125;
  double t20273;
  double t20306;
  double t20308;
  double t20317;
  double t20320;
  double t19267;
  double t19274;
  double t19275;
  double t20343;
  double t20345;
  double t20363;
  double t20389;
  double t20390;
  double t20391;
  double t20383;
  double t20384;
  double t20387;
  double t20404;
  double t20566;
  double t20571;
  double t20606;
  double t20608;
  double t20609;
  double t20105;
  double t20622;
  double t20625;
  double t20900;
  double t20901;
  double t20902;
  double t20908;
  double t20913;
  double t20922;
  double t20978;
  double t20980;
  double t20982;
  double t20984;
  double t20985;
  double t20986;
  double t20989;
  double t21013;
  double t21030;
  double t20611;
  double t20612;
  double t20618;
  double t21071;
  double t21072;
  double t21073;
  double t21079;
  double t21080;
  double t21081;
  double t21075;
  double t21076;
  double t21077;
  double t21140;
  double t21142;
  double t21143;
  double t20590;
  double t20591;
  double t20592;
  double t20397;
  t159 = Cos(var1[6]);
  t498 = Sin(var1[4]);
  t696 = Cos(var1[4]);
  t851 = Sin(var1[5]);
  t924 = Sin(var1[6]);
  t1488 = t696*t159*t851;
  t1575 = -1.*t498*t924;
  t1613 = t1488 + t1575;
  t1743 = Sin(var1[7]);
  t2326 = Cos(var1[8]);
  t2580 = Cos(var1[7]);
  t2716 = Sin(var1[8]);
  t3058 = Cos(var1[5]);
  t2328 = -1.*t2326;
  t2403 = 1. + t2328;
  t3370 = -1.*t696*t2580*t851;
  t3397 = t696*t3058*t924*t1743;
  t3408 = t3370 + t3397;
  t3418 = t696*t3058*t2580*t924;
  t3444 = t696*t851*t1743;
  t3446 = t3418 + t3444;
  t1082 = t159*t498;
  t1339 = t696*t851*t924;
  t1459 = t1082 + t1339;
  t14213 = -1.*t696*t3058*t2580;
  t14221 = -1.*t1459*t1743;
  t14232 = t14213 + t14221;
  t14145 = t2580*t1459;
  t14169 = -1.*t696*t3058*t1743;
  t14189 = t14145 + t14169;
  t17862 = t696*t3058*t2580;
  t17863 = t1459*t1743;
  t17864 = t17862 + t17863;
  t3311 = -1.*t2580;
  t3342 = 1. + t3311;
  t3244 = -1.*t159;
  t3292 = 1. + t3244;
  t18701 = t696*t159;
  t18705 = -1.*t498*t851*t924;
  t18708 = t18701 + t18705;
  t18711 = -1.*t3058*t2580*t498;
  t18712 = t18708*t1743;
  t18713 = t18711 + t18712;
  t18717 = t2580*t18708;
  t18794 = t3058*t498*t1743;
  t18857 = t18717 + t18794;
  t19219 = Sin(var1[3]);
  t19223 = Cos(var1[3]);
  t19232 = t19223*t3058;
  t19234 = -1.*t19219*t498*t851;
  t19241 = t19232 + t19234;
  t19277 = -1.*t159*t19241;
  t19280 = t696*t19219*t924;
  t19285 = t19277 + t19280;
  t19325 = -1.*t3058*t19219*t498;
  t19326 = -1.*t19223*t851;
  t19327 = t19325 + t19326;
  t19345 = t2580*t19241;
  t19346 = -1.*t19327*t924*t1743;
  t19349 = t19345 + t19346;
  t19453 = -1.*t2580*t19327*t924;
  t19454 = -1.*t19241*t1743;
  t19460 = t19453 + t19454;
  t19723 = t159*t19219*t498;
  t19727 = t696*t19219*t851*t924;
  t19728 = t19723 + t19727;
  t19730 = t696*t3058*t2580*t19219;
  t19731 = t19728*t1743;
  t19732 = t19730 + t19731;
  t19734 = t2580*t19728;
  t19735 = -1.*t696*t3058*t19219*t1743;
  t19736 = t19734 + t19735;
  t20098 = -1.*t3058*t19219;
  t20100 = -1.*t19223*t498*t851;
  t20101 = t20098 + t20100;
  t20081 = t19223*t3058*t498;
  t20085 = -1.*t19219*t851;
  t20089 = t20081 + t20085;
  t20108 = -1.*t19223*t696*t159;
  t20109 = -1.*t20101*t924;
  t20123 = t20108 + t20109;
  t20125 = t2580*t20089;
  t20273 = t20123*t1743;
  t20306 = t20125 + t20273;
  t20308 = t2580*t20123;
  t20317 = -1.*t20089*t1743;
  t20320 = t20308 + t20317;
  t19267 = -1.*t696*t159*t19219;
  t19274 = -1.*t19241*t924;
  t19275 = t19267 + t19274;
  t20343 = t3058*t19219*t498;
  t20345 = t19223*t851;
  t20363 = t20343 + t20345;
  t20389 = -1.*t2580*t20363;
  t20390 = -1.*t19275*t1743;
  t20391 = t20389 + t20390;
  t20383 = t2580*t19275;
  t20384 = -1.*t20363*t1743;
  t20387 = t20383 + t20384;
  t20404 = t2580*t20363;
  t20566 = t19275*t1743;
  t20571 = t20404 + t20566;
  t20606 = t3058*t19219;
  t20608 = t19223*t498*t851;
  t20609 = t20606 + t20608;
  t20105 = -1.*t19223*t696*t924;
  t20622 = -1.*t159*t20609;
  t20625 = t20622 + t20105;
  t20900 = t2580*t20609;
  t20901 = -1.*t20089*t924*t1743;
  t20902 = t20900 + t20901;
  t20908 = -1.*t2580*t20089*t924;
  t20913 = -1.*t20609*t1743;
  t20922 = t20908 + t20913;
  t20978 = -1.*t19223*t159*t498;
  t20980 = -1.*t19223*t696*t851*t924;
  t20982 = t20978 + t20980;
  t20984 = -1.*t19223*t696*t3058*t2580;
  t20985 = t20982*t1743;
  t20986 = t20984 + t20985;
  t20989 = t2580*t20982;
  t21013 = t19223*t696*t3058*t1743;
  t21030 = t20989 + t21013;
  t20611 = t19223*t696*t159;
  t20612 = -1.*t20609*t924;
  t20618 = t20611 + t20612;
  t21071 = -1.*t19223*t3058*t498;
  t21072 = t19219*t851;
  t21073 = t21071 + t21072;
  t21079 = -1.*t2580*t21073;
  t21080 = -1.*t20618*t1743;
  t21081 = t21079 + t21080;
  t21075 = t2580*t20618;
  t21076 = -1.*t21073*t1743;
  t21077 = t21075 + t21076;
  t21140 = t2580*t21073;
  t21142 = t20618*t1743;
  t21143 = t21140 + t21142;
  t20590 = t2326*t20571;
  t20591 = -1.*t20387*t2716;
  t20592 = t20590 + t20591;
  t20397 = t2326*t20387;
  p_output1[0]=var2[0] + (-0.325*t1743*t18708 + 0.075*t18713*t2403 + 0.075*t18857*t2716 - 0.0641*(t18857*t2326 + t18713*t2716) + 0.355*(t18713*t2326 - 1.*t18857*t2716) - 0.325*t3058*t3342*t498 + 0.1575*t3292*t498*t851 - 0.1575*t696*t924 + 0.2255*(t159*t498*t851 + t696*t924))*var2[4] + (0.075*t2403*t3408 + 0.075*t2716*t3446 - 0.0641*(t2716*t3408 + t2326*t3446) + 0.355*(t2326*t3408 - 1.*t2716*t3446) - 0.2255*t159*t3058*t696 - 0.1575*t3058*t3292*t696 - 0.325*t3342*t696*t851 - 0.325*t1743*t3058*t696*t924)*var2[5] + (0.2255*t1459 - 0.325*t1613*t1743 + 0.075*t1613*t1743*t2403 + 0.075*t1613*t2580*t2716 - 0.0641*(t1613*t2326*t2580 + t1613*t1743*t2716) + 0.355*(t1613*t1743*t2326 - 1.*t1613*t2580*t2716) - 0.1575*t159*t498 - 0.1575*t696*t851*t924)*var2[6] + (0.075*t14189*t2403 - 0.325*t1459*t2580 + 0.075*t14232*t2716 - 0.0641*(t14232*t2326 + t14189*t2716) + 0.355*(t14189*t2326 - 1.*t14232*t2716) + 0.325*t1743*t3058*t696)*var2[7] + (0.075*t14189*t2326 + 0.075*t17864*t2716 - 0.0641*(t17864*t2326 - 1.*t14189*t2716) + 0.355*(-1.*t14189*t2326 - 1.*t17864*t2716))*var2[8];
  p_output1[1]=var2[1] + (0.2255*(t159*t20101 + t20105) - 0.325*t1743*t20123 + 0.075*t20306*t2403 + 0.075*t20320*t2716 - 0.0641*(t20320*t2326 + t20306*t2716) + 0.355*(t20306*t2326 - 1.*t20320*t2716) + 0.1575*t20101*t3292 + 0.325*t20089*t3342 + 0.1575*t19223*t696*t924)*var2[3] + (-0.325*t1743*t19728 + 0.075*t19732*t2403 + 0.075*t19736*t2716 - 0.0641*(t19736*t2326 + t19732*t2716) + 0.355*(t19732*t2326 - 1.*t19736*t2716) + 0.325*t19219*t3058*t3342*t696 - 0.1575*t19219*t3292*t696*t851 - 0.1575*t19219*t498*t924 + 0.2255*(-1.*t159*t19219*t696*t851 + t19219*t498*t924))*var2[4] + (0.2255*t159*t19327 + 0.075*t19349*t2403 + 0.075*t19460*t2716 - 0.0641*(t19460*t2326 + t19349*t2716) + 0.355*(t19349*t2326 - 1.*t19460*t2716) + 0.1575*t19327*t3292 + 0.325*t19241*t3342 + 0.325*t1743*t19327*t924)*var2[5] + (0.2255*t19275 - 0.325*t1743*t19285 + 0.075*t1743*t19285*t2403 + 0.075*t19285*t2580*t2716 - 0.0641*(t19285*t2326*t2580 + t1743*t19285*t2716) + 0.355*(t1743*t19285*t2326 - 1.*t19285*t2580*t2716) + 0.1575*t159*t19219*t696 + 0.1575*t19241*t924)*var2[6] + (0.325*t1743*t20363 + 0.075*t20387*t2403 - 0.325*t19275*t2580 + 0.075*t20391*t2716 - 0.0641*(t20391*t2326 + t20387*t2716) + 0.355*(t20397 - 1.*t20391*t2716))*var2[7] + (-0.0641*t20592 + 0.075*t20387*t2326 + 0.075*t20571*t2716 + 0.355*(-1.*t20387*t2326 - 1.*t20571*t2716))*var2[8];
  p_output1[2]=var2[2] + (-0.325*t1743*t19275 + 0.355*t20592 + 0.075*t20571*t2403 + 0.075*t20387*t2716 - 0.0641*(t20397 + t20571*t2716) + 0.1575*t19241*t3292 + 0.325*t20363*t3342 + 0.1575*t19219*t696*t924 + 0.2255*(t159*t19241 - 1.*t19219*t696*t924))*var2[3] + (-0.325*t1743*t20982 + 0.075*t20986*t2403 + 0.075*t21030*t2716 - 0.0641*(t21030*t2326 + t20986*t2716) + 0.355*(t20986*t2326 - 1.*t21030*t2716) - 0.325*t19223*t3058*t3342*t696 + 0.1575*t19223*t3292*t696*t851 + 0.1575*t19223*t498*t924 + 0.2255*(t159*t19223*t696*t851 - 1.*t19223*t498*t924))*var2[4] + (0.2255*t159*t20089 + 0.075*t20902*t2403 + 0.075*t20922*t2716 - 0.0641*(t20922*t2326 + t20902*t2716) + 0.355*(t20902*t2326 - 1.*t20922*t2716) + 0.1575*t20089*t3292 + 0.325*t20609*t3342 + 0.325*t1743*t20089*t924)*var2[5] + (0.2255*t20618 - 0.325*t1743*t20625 + 0.075*t1743*t20625*t2403 + 0.075*t20625*t2580*t2716 - 0.0641*(t20625*t2326*t2580 + t1743*t20625*t2716) + 0.355*(t1743*t20625*t2326 - 1.*t20625*t2580*t2716) - 0.1575*t159*t19223*t696 + 0.1575*t20609*t924)*var2[6] + (0.325*t1743*t21073 + 0.075*t21077*t2403 - 0.325*t20618*t2580 + 0.075*t21081*t2716 - 0.0641*(t21081*t2326 + t21077*t2716) + 0.355*(t21077*t2326 - 1.*t21081*t2716))*var2[7] + (0.075*t21077*t2326 + 0.075*t21143*t2716 - 0.0641*(t21143*t2326 - 1.*t21077*t2716) + 0.355*(-1.*t21077*t2326 - 1.*t21143*t2716))*var2[8];
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

#include "initial_swing_velocity_FlFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void initial_swing_velocity_FlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
