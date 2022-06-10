/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:56:53 GMT+02:00
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
  double t39304;
  double t13507;
  double t32855;
  double t39334;
  double t39298;
  double t39371;
  double t39372;
  double t39422;
  double t39538;
  double t39431;
  double t39447;
  double t39529;
  double t39539;
  double t9888;
  double t39419;
  double t39374;
  double t39536;
  double t39541;
  double t39542;
  double t39572;
  double t39560;
  double t39565;
  double t39567;
  double t39555;
  double t39574;
  double t39575;
  double t39576;
  double t43190;
  double t43194;
  double t43196;
  double t43200;
  double t43204;
  double t43209;
  double t43211;
  double t43212;
  double t43213;
  double t43189;
  double t43199;
  double t43214;
  double t43216;
  double t43254;
  double t43264;
  double t43268;
  double t43278;
  double t43303;
  double t44515;
  double t43184;
  double t43185;
  double t43186;
  double t43188;
  double t43222;
  double t43229;
  double t45189;
  double t45192;
  double t45195;
  double t45199;
  double t45201;
  double t45281;
  double t45160;
  double t45168;
  double t45172;
  double t43234;
  double t44725;
  double t44975;
  double t41270;
  double t41281;
  double t41289;
  double t45197;
  double t45282;
  double t45288;
  double t41255;
  double t41323;
  double t41501;
  double t41503;
  double t41775;
  double t41915;
  double t45318;
  double t45320;
  double t45322;
  double t45337;
  double t45338;
  double t45360;
  double t45155;
  double t45364;
  double t45389;
  double t45569;
  double t45293;
  double t45294;
  double t45312;
  double t39384;
  double t39546;
  double t39550;
  double t45367;
  double t45370;
  double t45372;
  double t47185;
  double t47338;
  double t47702;
  double t47624;
  double t48254;
  double t48222;
  double t49330;
  double t49388;
  double t50670;
  double t50940;
  t39304 = Cos(var1[13]);
  t13507 = Cos(var1[14]);
  t32855 = Sin(var1[13]);
  t39334 = Sin(var1[14]);
  t39298 = t13507*t32855;
  t39371 = -1.*t39304*t39334;
  t39372 = t39298 + t39371;
  t39422 = Cos(var1[5]);
  t39538 = Sin(var1[12]);
  t39431 = t39304*t13507;
  t39447 = t32855*t39334;
  t39529 = t39431 + t39447;
  t39539 = Sin(var1[5]);
  t9888 = Cos(var1[12]);
  t39419 = Cos(var1[4]);
  t39374 = Sin(var1[4]);
  t39536 = t39422*t39529;
  t39541 = t39538*t39372*t39539;
  t39542 = t39536 + t39541;
  t39572 = Sin(var1[3]);
  t39560 = -1.*t39422*t39538*t39372;
  t39565 = t39529*t39539;
  t39567 = t39560 + t39565;
  t39555 = Cos(var1[3]);
  t39574 = t9888*t39419*t39372;
  t39575 = -1.*t39374*t39542;
  t39576 = t39574 + t39575;
  t43190 = -0.0641*t13507;
  t43194 = -0.28*t39334;
  t43196 = t43190 + t43194;
  t43200 = -1.*t13507;
  t43204 = 1. + t43200;
  t43209 = 0.075*t43204;
  t43211 = 0.355*t13507;
  t43212 = -0.0641*t39334;
  t43213 = t43209 + t43211 + t43212;
  t43189 = -0.325*t32855;
  t43199 = t39304*t43196;
  t43214 = t32855*t43213;
  t43216 = t43189 + t43199 + t43214;
  t43254 = -1.*t39304;
  t43264 = 1. + t43254;
  t43268 = 0.325*t43264;
  t43278 = -1.*t32855*t43196;
  t43303 = t39304*t43213;
  t44515 = t43268 + t43278 + t43303;
  t43184 = -1.*t9888;
  t43185 = 1. + t43184;
  t43186 = -0.1575*t43185;
  t43188 = -0.2255*t9888;
  t43222 = -1.*t39538*t43216;
  t43229 = t43186 + t43188 + t43222;
  t45189 = -0.068*t39538;
  t45192 = t9888*t43216;
  t45195 = t45189 + t45192;
  t45199 = t39422*t44515;
  t45201 = -1.*t43229*t39539;
  t45281 = t45199 + t45201;
  t45160 = t39538*t39374;
  t45168 = -1.*t9888*t39419*t39539;
  t45172 = t45160 + t45168;
  t43234 = t39422*t43229;
  t44725 = t44515*t39539;
  t44975 = t43234 + t44725;
  t41270 = -1.*t13507*t32855;
  t41281 = t39304*t39334;
  t41289 = t41270 + t41281;
  t45197 = t45195*t39374;
  t45282 = t39419*t45281;
  t45288 = t45197 + t45282;
  t41255 = t9888*t39529*t39374;
  t41323 = t39422*t41289;
  t41501 = t39538*t39529*t39539;
  t41503 = t41323 + t41501;
  t41775 = t39419*t41503;
  t41915 = t41255 + t41775;
  t45318 = t39419*t45195;
  t45320 = -1.*t39374*t45281;
  t45322 = t45318 + t45320;
  t45337 = -1.*t39422*t39538*t39529;
  t45338 = t41289*t39539;
  t45360 = t45337 + t45338;
  t45155 = -1.*t9888*t39422*t44975;
  t45364 = t44975*t45360;
  t45389 = -1.*t39538*t45195;
  t45569 = t9888*t45195*t39529;
  t45293 = t39419*t39538;
  t45294 = t9888*t39374*t39539;
  t45312 = t45293 + t45294;
  t39384 = t9888*t39372*t39374;
  t39546 = t39419*t39542;
  t39550 = t39384 + t39546;
  t45367 = t9888*t39419*t39529;
  t45370 = -1.*t39374*t41503;
  t45372 = t45367 + t45370;
  t47185 = t44975*t39567;
  t47338 = -1.*t44975*t45360;
  t47702 = -1.*t9888*t45195*t39529;
  t47624 = t9888*t45195*t39372;
  t48254 = t44515*t39529;
  t48222 = -1.*t44515*t41289;
  t49330 = t9888*t39422*t44975;
  t49388 = -1.*t44975*t39567;
  t50670 = t39538*t45195;
  t50940 = -1.*t9888*t45195*t39372;
  p_output1[0]=t39550;
  p_output1[1]=t39555*t39567 - 1.*t39572*t39576;
  p_output1[2]=t39567*t39572 + t39555*t39576;
  p_output1[3]=t41915*(t45155 - 1.*t45172*t45288 - 1.*t45312*t45322) + t45172*(t41915*t45288 + t45364 + t45322*t45372);
  p_output1[4]=t39422*(t41503*t45281 + t45364 + t45569)*t9888 + t45360*(t45155 + t45389 + t39539*t45281*t9888);
  p_output1[5]=t39538*(-1.*t39529*t39538*t43229 + t41289*t44515 + t45569) + t39529*t9888*(t45389 - 1.*t43229*t9888);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0.1575*t39372 + 0.2255*t41289;
  p_output1[13]=0.325*t39334 - 1.*t13507*t43196 - 1.*t39334*t43213;
  p_output1[14]=-0.0641;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t45172;
  p_output1[19]=-1.*t39572*t45312 + t39422*t39555*t9888;
  p_output1[20]=t39555*t45312 + t39422*t39572*t9888;
  p_output1[21]=t41915*(t39550*t45288 + t39576*t45322 + t47185) + t39550*(-1.*t41915*t45288 - 1.*t45322*t45372 + t47338);
  p_output1[22]=t45360*(t39542*t45281 + t47185 + t47624) + t39567*(-1.*t41503*t45281 + t47338 + t47702);
  p_output1[23]=t39372*(t39529*t39538*t43229 + t47702 + t48222)*t9888 + t39529*(-1.*t39372*t39538*t43229 + t47624 + t48254)*t9888;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=t39529*(-1.*t39529*t43216 + t48222) + t41289*(t39372*t43216 + t48254);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t41915;
  p_output1[37]=t39555*t45360 - 1.*t39572*t45372;
  p_output1[38]=t39572*t45360 + t39555*t45372;
  p_output1[39]=t39550*(t45172*t45288 + t45312*t45322 + t49330) + t45172*(-1.*t39550*t45288 - 1.*t39576*t45322 + t49388);
  p_output1[40]=t39422*(-1.*t39542*t45281 + t49388 + t50940)*t9888 + t39567*(t49330 + t50670 - 1.*t39539*t45281*t9888);
  p_output1[41]=t39538*(t39372*t39538*t43229 - 1.*t39529*t44515 + t50940) + t39372*t9888*(t50670 + t43229*t9888);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.068*t39529;
  p_output1[49]=-0.325*t13507 - 1.*t39334*t43196 + t13507*t43213;
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

#include "fFrFoot_map_DiagonalImpact.hh"

namespace SymFunction
{

void fFrFoot_map_DiagonalImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
