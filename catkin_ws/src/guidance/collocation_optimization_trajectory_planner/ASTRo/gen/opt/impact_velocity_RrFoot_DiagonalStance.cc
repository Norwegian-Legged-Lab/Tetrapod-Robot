/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 14:36:12 GMT+02:00
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
  double t205;
  double t1765;
  double t1823;
  double t9235;
  double t9638;
  double t9731;
  double t994;
  double t10982;
  double t10994;
  double t10997;
  double t10998;
  double t10999;
  double t11001;
  double t11053;
  double t11054;
  double t10293;
  double t10995;
  double t10996;
  double t11000;
  double t11002;
  double t11003;
  double t11004;
  double t11073;
  double t11090;
  double t11091;
  double t11095;
  double t11096;
  double t11101;
  double t11103;
  double t11134;
  double t11150;
  double t11176;
  double t11181;
  double t11182;
  double t11194;
  double t11177;
  double t11254;
  double t11274;
  double t11287;
  double t11288;
  double t11294;
  double t11345;
  double t11352;
  double t11354;
  double t10342;
  double t9758;
  double t9953;
  double t11379;
  double t11380;
  double t11381;
  double t11385;
  double t11386;
  double t11387;
  double t11397;
  double t11398;
  double t11399;
  double t11416;
  double t11427;
  double t11428;
  double t11431;
  double t11433;
  double t11434;
  double t11440;
  double t11443;
  double t11444;
  double t11445;
  double t11460;
  double t11459;
  double t11461;
  double t11465;
  double t11467;
  double t11469;
  double t11470;
  double t11475;
  double t11479;
  double t11483;
  double t11160;
  double t11162;
  double t11170;
  double t11171;
  double t11525;
  double t11526;
  double t11527;
  double t11543;
  double t11544;
  double t11497;
  double t11567;
  double t11576;
  double t11577;
  double t11596;
  double t11599;
  double t11600;
  double t11761;
  double t11800;
  double t11805;
  double t11827;
  double t11828;
  double t11829;
  double t11831;
  double t11832;
  double t11833;
  double t11852;
  double t11853;
  double t11855;
  double t11851;
  double t11856;
  double t11857;
  double t11861;
  double t11862;
  double t11863;
  double t11902;
  double t11903;
  double t11905;
  double t12018;
  double t12019;
  double t12020;
  double t12022;
  double t12023;
  double t12024;
  double t12026;
  double t12028;
  double t12029;
  double t12038;
  double t12039;
  double t12040;
  double t12124;
  double t12164;
  double t12205;
  double t12241;
  double t12242;
  double t12243;
  double t12250;
  double t12252;
  double t12226;
  double t12271;
  double t12272;
  double t12273;
  double t12269;
  double t12275;
  double t12276;
  double t12279;
  double t12280;
  double t12281;
  double t12291;
  double t12292;
  t205 = Cos(var1[4]);
  t1765 = Cos(var1[15]);
  t1823 = -1.*t1765;
  t9235 = 1. + t1823;
  t9638 = -0.15121*t9235;
  t9731 = Sin(var1[15]);
  t994 = Cos(var1[5]);
  t10982 = Sin(var1[5]);
  t10994 = Cos(var1[16]);
  t10997 = -1.*t205*t994*t9731;
  t10998 = -1.*t1765*t205*t10982;
  t10999 = t10997 + t10998;
  t11001 = Cos(var1[17]);
  t11053 = Sin(var1[16]);
  t11054 = Sin(var1[17]);
  t10293 = -0.15121*t9731;
  t10995 = -1.*t10994;
  t10996 = 1. + t10995;
  t11000 = -0.28121*t10996*t10999;
  t11002 = -1.*t11001;
  t11003 = 1. + t11002;
  t11004 = -0.50321*t10994*t11003*t10999;
  t11073 = 0.50321*t11053*t11054*t10999;
  t11090 = -1.*t1765*t205*t994;
  t11091 = t205*t9731*t10982;
  t11095 = t11090 + t11091;
  t11096 = -0.15121*t11095;
  t11101 = t10994*t11001*t10999;
  t11103 = t11053*t11054*t10999;
  t11134 = t11101 + t11103;
  t11150 = -0.19821*t11134;
  t11176 = Sin(var1[4]);
  t11181 = t1765*t205*t994;
  t11182 = -1.*t205*t9731*t10982;
  t11194 = t11181 + t11182;
  t11177 = t11053*t11176;
  t11254 = t10994*t11194;
  t11274 = t11177 + t11254;
  t11287 = t10994*t11176;
  t11288 = -1.*t11053*t11194;
  t11294 = t11287 + t11288;
  t11345 = -1.*t11053*t11176;
  t11352 = -1.*t10994*t11194;
  t11354 = t11345 + t11352;
  t10342 = t9638 + t10293;
  t9758 = 0.15121*t9731;
  t9953 = t9638 + t9758;
  t11379 = -1.*t1765*t994*t11176;
  t11380 = t9731*t11176*t10982;
  t11381 = t11379 + t11380;
  t11385 = t205*t11053;
  t11386 = t10994*t11381;
  t11387 = t11385 + t11386;
  t11397 = t10994*t205;
  t11398 = -1.*t11053*t11381;
  t11399 = t11397 + t11398;
  t11416 = Sin(var1[3]);
  t11427 = t1765*t205*t994*t11416;
  t11428 = -1.*t205*t9731*t11416*t10982;
  t11431 = t11427 + t11428;
  t11433 = t11053*t11416*t11176;
  t11434 = t10994*t11431;
  t11440 = t11433 + t11434;
  t11443 = t10994*t11416*t11176;
  t11444 = -1.*t11053*t11431;
  t11445 = t11443 + t11444;
  t11460 = Cos(var1[3]);
  t11459 = -1.*t994*t11416*t11176;
  t11461 = -1.*t11460*t10982;
  t11465 = t11459 + t11461;
  t11467 = t11460*t994;
  t11469 = -1.*t11416*t11176*t10982;
  t11470 = t11467 + t11469;
  t11475 = t9731*t11465;
  t11479 = t1765*t11470;
  t11483 = t11475 + t11479;
  t11160 = -0.15121*t1765;
  t11162 = t11160 + t10293;
  t11170 = 0.15121*t1765;
  t11171 = t11170 + t10293;
  t11525 = t994*t11416*t11176;
  t11526 = t11460*t10982;
  t11527 = t11525 + t11526;
  t11543 = -1.*t9731*t11527;
  t11544 = t11543 + t11479;
  t11497 = -1.*t9731*t11470;
  t11567 = t11460*t994*t11176;
  t11576 = -1.*t11416*t10982;
  t11577 = t11567 + t11576;
  t11596 = -1.*t994*t11416;
  t11599 = -1.*t11460*t11176*t10982;
  t11600 = t11596 + t11599;
  t11761 = t1765*t11577;
  t11800 = t9731*t11600;
  t11805 = t11761 + t11800;
  t11827 = -1.*t11460*t205*t11053;
  t11828 = t10994*t11805;
  t11829 = t11827 + t11828;
  t11831 = -1.*t10994*t11460*t205;
  t11832 = -1.*t11053*t11805;
  t11833 = t11831 + t11832;
  t11852 = t1765*t11527;
  t11853 = t9731*t11470;
  t11855 = t11852 + t11853;
  t11851 = -1.*t205*t11053*t11416;
  t11856 = t10994*t11855;
  t11857 = t11851 + t11856;
  t11861 = -1.*t10994*t205*t11416;
  t11862 = -1.*t11053*t11855;
  t11863 = t11861 + t11862;
  t11902 = t205*t11053*t11416;
  t11903 = -1.*t10994*t11855;
  t11905 = t11902 + t11903;
  t12018 = -1.*t1765*t11460*t205*t994;
  t12019 = t11460*t205*t9731*t10982;
  t12020 = t12018 + t12019;
  t12022 = -1.*t11460*t11053*t11176;
  t12023 = t10994*t12020;
  t12024 = t12022 + t12023;
  t12026 = -1.*t10994*t11460*t11176;
  t12028 = -1.*t11053*t12020;
  t12029 = t12026 + t12028;
  t12038 = t994*t11416;
  t12039 = t11460*t11176*t10982;
  t12040 = t12038 + t12039;
  t12124 = t9731*t11577;
  t12164 = t1765*t12040;
  t12205 = t12124 + t12164;
  t12241 = -1.*t11460*t994*t11176;
  t12242 = t11416*t10982;
  t12243 = t12241 + t12242;
  t12250 = -1.*t9731*t12243;
  t12252 = t12250 + t12164;
  t12226 = -1.*t9731*t12040;
  t12271 = t1765*t12243;
  t12272 = t9731*t12040;
  t12273 = t12271 + t12272;
  t12269 = t11460*t205*t11053;
  t12275 = t10994*t12273;
  t12276 = t12269 + t12275;
  t12279 = t10994*t11460*t205;
  t12280 = -1.*t11053*t12273;
  t12281 = t12279 + t12280;
  t12291 = -1.*t10994*t12273;
  t12292 = t11827 + t12291;
  p_output1[0]=var2[0] + (-0.28121*t10996*t11381 - 0.50321*t11003*t11387 - 0.50321*t11054*t11399 - 0.19821*(t11001*t11387 - 1.*t11054*t11399) + 0.28121*t11053*t205 - 1.*t10342*t11176*t994 - 0.15121*(t10982*t11176*t1765 + t11176*t9731*t994) + t10982*t11176*t9953)*var2[4] + (t11000 + t11004 + t11073 + t11096 + t11150 - 1.*t10342*t10982*t205 - 1.*t205*t994*t9953)*var2[5] + (t11000 + t11004 + t11073 + t11096 + t11150 - 1.*t10982*t11171*t205 + t11162*t205*t994)*var2[15] + (0.28121*t10994*t11176 - 0.28121*t11053*t11194 - 0.50321*t11003*t11294 - 0.50321*t11054*t11354 - 0.19821*(t11001*t11294 - 1.*t11054*t11354))*var2[16] + (-0.50321*t11054*t11274 - 0.50321*t11001*t11294 - 0.19821*(-1.*t11054*t11274 - 1.*t11001*t11294))*var2[17];
  p_output1[1]=var2[1] + (t10342*t11577 - 0.28121*t10996*t11805 - 0.50321*t11003*t11829 - 0.50321*t11054*t11833 - 0.19821*(t11001*t11829 - 1.*t11054*t11833) - 0.28121*t11053*t11460*t205 - 0.15121*(t11600*t1765 - 1.*t11577*t9731) + t11600*t9953)*var2[3] + (0.28121*t11053*t11176*t11416 - 0.28121*t10996*t11431 - 0.50321*t11003*t11440 - 0.50321*t11054*t11445 - 0.19821*(t11001*t11440 - 1.*t11054*t11445) + t10342*t11416*t205*t994 - 0.15121*(-1.*t10982*t11416*t1765*t205 - 1.*t11416*t205*t9731*t994) - 1.*t10982*t11416*t205*t9953)*var2[4] + (t10342*t11470 - 0.28121*t10996*t11483 - 0.50321*t10994*t11003*t11483 + 0.50321*t11053*t11054*t11483 - 0.19821*(t10994*t11001*t11483 + t11053*t11054*t11483) - 0.15121*(t11497 + t11465*t1765) + t11465*t9953)*var2[5] + (t11171*t11470 + t11162*t11527 - 0.28121*t10996*t11544 - 0.50321*t10994*t11003*t11544 + 0.50321*t11053*t11054*t11544 - 0.19821*(t10994*t11001*t11544 + t11053*t11054*t11544) - 0.15121*(t11497 - 1.*t11527*t1765))*var2[15] + (-0.28121*t11053*t11855 - 0.50321*t11003*t11863 - 0.50321*t11054*t11905 - 0.19821*(t11001*t11863 - 1.*t11054*t11905) - 0.28121*t10994*t11416*t205)*var2[16] + (-0.50321*t11054*t11857 - 0.50321*t11001*t11863 - 0.19821*(-1.*t11054*t11857 - 1.*t11001*t11863))*var2[17];
  p_output1[2]=var2[2] + (t10342*t11527 - 0.15121*t11544 - 0.28121*t10996*t11855 - 0.50321*t11003*t11857 - 0.50321*t11054*t11863 - 0.19821*(t11001*t11857 - 1.*t11054*t11863) - 0.28121*t11053*t11416*t205 + t11470*t9953)*var2[3] + (-0.28121*t11053*t11176*t11460 - 0.28121*t10996*t12020 - 0.50321*t11003*t12024 - 0.50321*t11054*t12029 - 0.19821*(t11001*t12024 - 1.*t11054*t12029) - 1.*t10342*t11460*t205*t994 - 0.15121*(t10982*t11460*t1765*t205 + t11460*t205*t9731*t994) + t10982*t11460*t205*t9953)*var2[4] + (t10342*t12040 - 0.28121*t10996*t12205 - 0.50321*t10994*t11003*t12205 + 0.50321*t11053*t11054*t12205 - 0.19821*(t10994*t11001*t12205 + t11053*t11054*t12205) - 0.15121*(t11761 + t12226) + t11577*t9953)*var2[5] + (t11171*t12040 + t11162*t12243 - 0.28121*t10996*t12252 - 0.50321*t10994*t11003*t12252 + 0.50321*t11053*t11054*t12252 - 0.19821*(t10994*t11001*t12252 + t11053*t11054*t12252) - 0.15121*(t12226 - 1.*t12243*t1765))*var2[15] + (-0.28121*t11053*t12273 - 0.50321*t11003*t12281 - 0.50321*t11054*t12292 - 0.19821*(t11001*t12281 - 1.*t11054*t12292) + 0.28121*t10994*t11460*t205)*var2[16] + (-0.50321*t11054*t12276 - 0.50321*t11001*t12281 - 0.19821*(-1.*t11054*t12276 - 1.*t11001*t12281))*var2[17];
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

#include "impact_velocity_RrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void impact_velocity_RrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
