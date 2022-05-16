/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:40:28 GMT+02:00
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
  double t3894;
  double t2304;
  double t3502;
  double t3944;
  double t18216;
  double t38415;
  double t38416;
  double t16038;
  double t38511;
  double t10080;
  double t38532;
  double t5527;
  double t3821;
  double t4751;
  double t5174;
  double t5296;
  double t38428;
  double t38533;
  double t38535;
  double t38680;
  double t38570;
  double t38617;
  double t38660;
  double t38562;
  double t38700;
  double t38803;
  double t38837;
  double t38886;
  double t38888;
  double t38896;
  double t38958;
  double t38973;
  double t38995;
  double t38998;
  double t39010;
  double t39015;
  double t39017;
  double t39032;
  double t39034;
  double t39123;
  double t39127;
  double t39132;
  double t39228;
  double t39260;
  double t39261;
  double t39280;
  double t38986;
  double t38988;
  double t38994;
  double t39250;
  double t39253;
  double t39325;
  double t39326;
  double t39327;
  double t39329;
  double t39332;
  double t39333;
  double t39336;
  double t39338;
  double t39339;
  double t39341;
  double t39255;
  double t39293;
  double t39298;
  double t38884;
  double t38897;
  double t38905;
  double t38908;
  double t38909;
  double t38940;
  double t39337;
  double t39347;
  double t39349;
  double t39352;
  double t39356;
  double t39363;
  double t39373;
  double t39375;
  double t39377;
  double t38944;
  double t38945;
  double t38952;
  double t39299;
  double t39378;
  double t5367;
  double t38536;
  double t38544;
  double t39381;
  double t39383;
  double t39384;
  double t39507;
  double t39528;
  double t39543;
  double t39549;
  double t39661;
  double t39686;
  t3894 = Cos(var1[13]);
  t2304 = Cos(var1[14]);
  t3502 = Sin(var1[13]);
  t3944 = Sin(var1[14]);
  t18216 = t3894*t2304;
  t38415 = t3502*t3944;
  t38416 = t18216 + t38415;
  t16038 = Cos(var1[5]);
  t38511 = Sin(var1[12]);
  t10080 = Cos(var1[12]);
  t38532 = Sin(var1[5]);
  t5527 = Cos(var1[4]);
  t3821 = -1.*t2304*t3502;
  t4751 = t3894*t3944;
  t5174 = t3821 + t4751;
  t5296 = Sin(var1[4]);
  t38428 = t10080*t16038*t38416;
  t38533 = -1.*t38511*t38416*t38532;
  t38535 = t38428 + t38533;
  t38680 = Sin(var1[3]);
  t38570 = t16038*t38511*t38416;
  t38617 = t10080*t38416*t38532;
  t38660 = t38570 + t38617;
  t38562 = Cos(var1[3]);
  t38700 = t5527*t5174;
  t38803 = -1.*t5296*t38535;
  t38837 = t38700 + t38803;
  t38886 = t2304*t3502;
  t38888 = -1.*t3894*t3944;
  t38896 = t38886 + t38888;
  t38958 = -1.*t10080;
  t38973 = 1. + t38958;
  t38995 = -1.*t3894;
  t38998 = 1. + t38995;
  t39010 = 0.28121*t38998;
  t39015 = -1.*t2304;
  t39017 = 1. + t39015;
  t39032 = 0.50321*t39017;
  t39034 = 0.23321*t2304;
  t39123 = t39032 + t39034;
  t39127 = t3894*t39123;
  t39132 = -0.27*t3502*t3944;
  t39228 = t39010 + t39127 + t39132;
  t39260 = 0.15121*t38973;
  t39261 = t10080*t39228;
  t39280 = t39260 + t39261;
  t38986 = -0.15121*t38973;
  t38988 = -0.15121*t10080;
  t38994 = -0.15121*t38511;
  t39250 = t38511*t39228;
  t39253 = t38986 + t38988 + t38994 + t39250;
  t39325 = -1.*t16038*t38511;
  t39326 = -1.*t10080*t38532;
  t39327 = t39325 + t39326;
  t39329 = 0.28121*t3502;
  t39332 = -1.*t39123*t3502;
  t39333 = -0.27*t3894*t3944;
  t39336 = t39329 + t39332 + t39333;
  t39338 = t16038*t39280;
  t39339 = -1.*t39253*t38532;
  t39341 = t39338 + t39339;
  t39255 = t16038*t39253;
  t39293 = t39280*t38532;
  t39298 = t39255 + t39293;
  t38884 = t38416*t5296;
  t38897 = t10080*t16038*t38896;
  t38905 = -1.*t38511*t38896*t38532;
  t38908 = t38897 + t38905;
  t38909 = t5527*t38908;
  t38940 = t38884 + t38909;
  t39337 = t39336*t5296;
  t39347 = t5527*t39341;
  t39349 = t39337 + t39347;
  t39352 = t5527*t39336;
  t39356 = -1.*t5296*t39341;
  t39363 = t39352 + t39356;
  t39373 = t16038*t38511*t38896;
  t39375 = t10080*t38896*t38532;
  t39377 = t39373 + t39375;
  t38944 = t10080*t16038;
  t38945 = -1.*t38511*t38532;
  t38952 = t38944 + t38945;
  t39299 = -1.*t38952*t39298;
  t39378 = t39377*t39298;
  t5367 = t5174*t5296;
  t38536 = t5527*t38535;
  t38544 = t5367 + t38536;
  t39381 = t5527*t38416;
  t39383 = -1.*t5296*t38908;
  t39384 = t39381 + t39383;
  t39507 = -1.*t39377*t39298;
  t39528 = t38660*t39298;
  t39543 = -1.*t39336*t38416;
  t39549 = t39336*t5174;
  t39661 = t38952*t39298;
  t39686 = -1.*t38660*t39298;
  p_output1[0]=t38544;
  p_output1[1]=t38562*t38660 - 1.*t38680*t38837;
  p_output1[2]=t38660*t38680 + t38562*t38837;
  p_output1[3]=t39327*(t38940*t39349 + t39378 + t39363*t39384)*t5527 + t38940*(t39299 + t39327*t39363*t5296 - 1.*t39327*t39349*t5527);
  p_output1[4]=(t39299 - 1.*t39327*t39341)*t39377 + t38952*(t38416*t39336 + t38908*t39341 + t39378);
  p_output1[5]=t38416*(-1.*t10080*t39253 + t38511*t39280);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0.28121*t3944 - 0.27*t2304*t3944 - 1.*t39123*t3944;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t39327*t5527;
  p_output1[19]=t38562*t38952 + t38680*t39327*t5296;
  p_output1[20]=t38680*t38952 - 1.*t38562*t39327*t5296;
  p_output1[21]=t38544*(-1.*t38940*t39349 - 1.*t39363*t39384 + t39507) + t38940*(t38544*t39349 + t38837*t39363 + t39528);
  p_output1[22]=t38660*(-1.*t38908*t39341 + t39507 + t39543) + t39377*(t38535*t39341 + t39528 + t39549);
  p_output1[23]=t38416*(t38416*t38511*t39253 + t10080*t38416*t39280 + t39549) + (-1.*t38511*t38896*t39253 - 1.*t10080*t38896*t39280 + t39543)*t5174;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=-0.15121 + t38416*(t38416*t39228 + t39549) + (-1.*t38896*t39228 + t39543)*t5174;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t38940;
  p_output1[37]=t38562*t39377 - 1.*t38680*t39384;
  p_output1[38]=t38680*t39377 + t38562*t39384;
  p_output1[39]=t39327*(-1.*t38544*t39349 - 1.*t38837*t39363 + t39686)*t5527 + t38544*(t39661 - 1.*t39327*t39363*t5296 + t39327*t39349*t5527);
  p_output1[40]=t38660*(t39327*t39341 + t39661) + t38952*(-1.*t38535*t39341 + t39686 - 1.*t39336*t5174);
  p_output1[41]=(t10080*t39253 - 1.*t38511*t39280)*t5174;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.15121*t38896 - 0.15121*t5174;
  p_output1[49]=0.28121*t2304 - 1.*t2304*t39123 + 0.27*Power(t3944,2);
  p_output1[50]=-0.27;
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
