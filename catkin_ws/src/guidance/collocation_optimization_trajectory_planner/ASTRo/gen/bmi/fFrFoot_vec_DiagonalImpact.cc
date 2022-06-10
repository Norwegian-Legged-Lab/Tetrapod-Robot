/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:49:47 GMT+02:00
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
  double t365;
  double t3326;
  double t413;
  double t5006;
  double t6795;
  double t4987;
  double t6985;
  double t1538;
  double t7032;
  double t7159;
  double t7165;
  double t3362;
  double t7025;
  double t6402;
  double t7018;
  double t7019;
  double t1684;
  double t4717;
  double t4722;
  double t7230;
  double t7226;
  double t7167;
  double t7173;
  double t7184;
  double t7210;
  double t7212;
  double t7215;
  double t7218;
  double t7219;
  double t7220;
  double t7234;
  double t7235;
  double t7236;
  double t7242;
  double t7243;
  double t7244;
  double t7246;
  double t7247;
  double t7249;
  double t7257;
  double t7259;
  double t7260;
  double t7268;
  double t7271;
  double t7275;
  double t7030;
  double t7200;
  double t7206;
  double t7313;
  double t7314;
  double t7321;
  double t7323;
  double t7325;
  double t7326;
  double t7328;
  double t7329;
  double t7333;
  double t7335;
  double t7340;
  double t7342;
  double t7347;
  double t7373;
  double t7374;
  double t7378;
  double t7315;
  double t7317;
  double t7319;
  double t7354;
  double t7364;
  double t7392;
  double t7393;
  double t7395;
  double t7396;
  double t7399;
  double t7407;
  double t7410;
  double t7372;
  double t7379;
  double t7382;
  double t7397;
  double t7415;
  double t7416;
  double t7437;
  double t7460;
  double t7469;
  double t7216;
  double t7221;
  double t7222;
  double t7391;
  double t7479;
  double t7528;
  double t7534;
  double t7545;
  double t7552;
  double t7608;
  double t7619;
  t365 = Cos(var1[4]);
  t3326 = Cos(var1[12]);
  t413 = Cos(var1[5]);
  t5006 = Cos(var1[14]);
  t6795 = Sin(var1[13]);
  t4987 = Cos(var1[13]);
  t6985 = Sin(var1[14]);
  t1538 = Sin(var1[12]);
  t7032 = t5006*t6795;
  t7159 = -1.*t4987*t6985;
  t7165 = t7032 + t7159;
  t3362 = Sin(var1[5]);
  t7025 = Sin(var1[4]);
  t6402 = t4987*t5006;
  t7018 = t6795*t6985;
  t7019 = t6402 + t7018;
  t1684 = -1.*t413*t1538;
  t4717 = -1.*t3326*t3362;
  t4722 = t1684 + t4717;
  t7230 = Cos(var1[3]);
  t7226 = Sin(var1[3]);
  t7167 = t3326*t413*t7165;
  t7173 = -1.*t1538*t7165*t3362;
  t7184 = t7167 + t7173;
  t7210 = -1.*t5006*t6795;
  t7212 = t4987*t6985;
  t7215 = t7210 + t7212;
  t7218 = t3326*t413*t7019;
  t7219 = -1.*t1538*t7019*t3362;
  t7220 = t7218 + t7219;
  t7234 = t3326*t413;
  t7235 = -1.*t1538*t3362;
  t7236 = t7234 + t7235;
  t7242 = t413*t1538*t7165;
  t7243 = t3326*t7165*t3362;
  t7244 = t7242 + t7243;
  t7246 = t365*t7019;
  t7247 = -1.*t7025*t7184;
  t7249 = t7246 + t7247;
  t7257 = t413*t1538*t7019;
  t7259 = t3326*t7019*t3362;
  t7260 = t7257 + t7259;
  t7268 = t365*t7215;
  t7271 = -1.*t7025*t7220;
  t7275 = t7268 + t7271;
  t7030 = t7019*t7025;
  t7200 = t365*t7184;
  t7206 = t7030 + t7200;
  t7313 = -1.*t3326;
  t7314 = 1. + t7313;
  t7321 = -1.*t4987;
  t7323 = 1. + t7321;
  t7325 = 0.28121*t7323;
  t7326 = -1.*t5006;
  t7328 = 1. + t7326;
  t7329 = 0.50321*t7328;
  t7333 = 0.19821*t5006;
  t7335 = t7329 + t7333;
  t7340 = t4987*t7335;
  t7342 = -0.305*t6795*t6985;
  t7347 = t7325 + t7340 + t7342;
  t7373 = 0.15121*t7314;
  t7374 = t3326*t7347;
  t7378 = t7373 + t7374;
  t7315 = -0.15121*t7314;
  t7317 = -0.15121*t3326;
  t7319 = -0.15121*t1538;
  t7354 = t1538*t7347;
  t7364 = t7315 + t7317 + t7319 + t7354;
  t7392 = 0.28121*t6795;
  t7393 = -1.*t7335*t6795;
  t7395 = -0.305*t4987*t6985;
  t7396 = t7392 + t7393 + t7395;
  t7399 = t413*t7378;
  t7407 = -1.*t7364*t3362;
  t7410 = t7399 + t7407;
  t7372 = t413*t7364;
  t7379 = t7378*t3362;
  t7382 = t7372 + t7379;
  t7397 = t7396*t7025;
  t7415 = t365*t7410;
  t7416 = t7397 + t7415;
  t7437 = t365*t7396;
  t7460 = -1.*t7025*t7410;
  t7469 = t7437 + t7460;
  t7216 = t7215*t7025;
  t7221 = t365*t7220;
  t7222 = t7216 + t7221;
  t7391 = -1.*t7236*t7382;
  t7479 = t7244*t7382;
  t7528 = t7236*t7382;
  t7534 = -1.*t7260*t7382;
  t7545 = -1.*t7244*t7382;
  t7552 = t7260*t7382;
  t7608 = -1.*t7396*t7019;
  t7619 = t7396*t7215;
  p_output1[0]=t7222*var2[0] + t365*t4722*var2[1] + t7206*var2[2];
  p_output1[1]=(t7230*t7260 - 1.*t7226*t7275)*var2[0] + (t4722*t7025*t7226 + t7230*t7236)*var2[1] + (t7230*t7244 - 1.*t7226*t7249)*var2[2];
  p_output1[2]=(t7226*t7260 + t7230*t7275)*var2[0] + (-1.*t4722*t7025*t7230 + t7226*t7236)*var2[1] + (t7226*t7244 + t7230*t7249)*var2[2];
  p_output1[3]=(t7206*(t7391 - 1.*t365*t4722*t7416 + t4722*t7025*t7469) + t365*t4722*(t7206*t7416 + t7249*t7469 + t7479))*var2[0] + (t7222*(-1.*t7206*t7416 - 1.*t7249*t7469 + t7545) + t7206*(t7222*t7416 + t7275*t7469 + t7552))*var2[1] + (t7222*(t365*t4722*t7416 - 1.*t4722*t7025*t7469 + t7528) + t365*t4722*(-1.*t7222*t7416 - 1.*t7275*t7469 + t7534))*var2[2];
  p_output1[4]=(t7244*(t7391 - 1.*t4722*t7410) + t7236*(t7019*t7396 + t7184*t7410 + t7479))*var2[0] + (t7260*(-1.*t7184*t7410 + t7545 + t7608) + t7244*(t7220*t7410 + t7552 + t7619))*var2[1] + (t7260*(t4722*t7410 + t7528) + t7236*(-1.*t7215*t7396 - 1.*t7220*t7410 + t7534))*var2[2];
  p_output1[5]=t7019*(-1.*t3326*t7364 + t1538*t7378)*var2[0] + (t7215*(-1.*t1538*t7165*t7364 - 1.*t3326*t7165*t7378 + t7608) + t7019*(t1538*t7019*t7364 + t3326*t7019*t7378 + t7619))*var2[1] + t7215*(t3326*t7364 - 1.*t1538*t7378)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-0.15121 + t7215*(-1.*t7165*t7347 + t7608) + t7019*(t7019*t7347 + t7619))*var2[1] + (-0.15121*t7165 - 0.15121*t7215)*var2[2];
  p_output1[13]=(0.28121*t6985 - 0.305*t5006*t6985 - 1.*t6985*t7335)*var2[0] + (0.28121*t5006 + 0.305*Power(t6985,2) - 1.*t5006*t7335)*var2[2];
  p_output1[14]=-0.305*var2[2];
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fFrFoot_vec_DiagonalImpact.hh"

namespace SymFunction
{

void fFrFoot_vec_DiagonalImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
