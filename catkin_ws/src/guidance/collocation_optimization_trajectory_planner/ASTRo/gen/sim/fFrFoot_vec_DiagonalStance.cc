/*
 * Automatically Generated from Mathematica.
 * Sun 22 May 2022 17:22:49 GMT+02:00
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
  double t7244;
  double t9800;
  double t9771;
  double t12733;
  double t12913;
  double t12732;
  double t12914;
  double t9797;
  double t13015;
  double t13016;
  double t13018;
  double t9804;
  double t13010;
  double t12865;
  double t12923;
  double t12961;
  double t9799;
  double t9810;
  double t12562;
  double t13390;
  double t13226;
  double t13019;
  double t13022;
  double t13023;
  double t13058;
  double t13084;
  double t13093;
  double t13148;
  double t13152;
  double t13206;
  double t13391;
  double t13394;
  double t13395;
  double t13478;
  double t13480;
  double t13481;
  double t13487;
  double t13489;
  double t13491;
  double t13524;
  double t13525;
  double t13538;
  double t13540;
  double t13541;
  double t13546;
  double t13014;
  double t13026;
  double t13027;
  double t13582;
  double t13584;
  double t13592;
  double t13593;
  double t13595;
  double t13601;
  double t13602;
  double t13603;
  double t13604;
  double t13609;
  double t13610;
  double t13611;
  double t13613;
  double t13618;
  double t13620;
  double t13621;
  double t13586;
  double t13589;
  double t13591;
  double t13615;
  double t13616;
  double t13628;
  double t13630;
  double t13631;
  double t13632;
  double t13674;
  double t13680;
  double t13684;
  double t13617;
  double t13625;
  double t13626;
  double t13669;
  double t13724;
  double t13740;
  double t13750;
  double t13773;
  double t13778;
  double t13113;
  double t13207;
  double t13216;
  double t13627;
  double t13950;
  double t14109;
  double t14154;
  double t14199;
  double t14224;
  double t14346;
  double t14361;
  t7244 = Cos(var1[4]);
  t9800 = Cos(var1[12]);
  t9771 = Cos(var1[5]);
  t12733 = Cos(var1[14]);
  t12913 = Sin(var1[13]);
  t12732 = Cos(var1[13]);
  t12914 = Sin(var1[14]);
  t9797 = Sin(var1[12]);
  t13015 = t12733*t12913;
  t13016 = -1.*t12732*t12914;
  t13018 = t13015 + t13016;
  t9804 = Sin(var1[5]);
  t13010 = Sin(var1[4]);
  t12865 = t12732*t12733;
  t12923 = t12913*t12914;
  t12961 = t12865 + t12923;
  t9799 = -1.*t9771*t9797;
  t9810 = -1.*t9800*t9804;
  t12562 = t9799 + t9810;
  t13390 = Cos(var1[3]);
  t13226 = Sin(var1[3]);
  t13019 = t9800*t9771*t13018;
  t13022 = -1.*t9797*t13018*t9804;
  t13023 = t13019 + t13022;
  t13058 = -1.*t12733*t12913;
  t13084 = t12732*t12914;
  t13093 = t13058 + t13084;
  t13148 = t9800*t9771*t12961;
  t13152 = -1.*t9797*t12961*t9804;
  t13206 = t13148 + t13152;
  t13391 = t9800*t9771;
  t13394 = -1.*t9797*t9804;
  t13395 = t13391 + t13394;
  t13478 = t9771*t9797*t13018;
  t13480 = t9800*t13018*t9804;
  t13481 = t13478 + t13480;
  t13487 = t7244*t12961;
  t13489 = -1.*t13010*t13023;
  t13491 = t13487 + t13489;
  t13524 = t9771*t9797*t12961;
  t13525 = t9800*t12961*t9804;
  t13538 = t13524 + t13525;
  t13540 = t7244*t13093;
  t13541 = -1.*t13010*t13206;
  t13546 = t13540 + t13541;
  t13014 = t12961*t13010;
  t13026 = t7244*t13023;
  t13027 = t13014 + t13026;
  t13582 = -1.*t9800;
  t13584 = 1. + t13582;
  t13592 = -1.*t12732;
  t13593 = 1. + t13592;
  t13595 = 0.28121*t13593;
  t13601 = -1.*t12733;
  t13602 = 1. + t13601;
  t13603 = 0.50321*t13602;
  t13604 = 0.23321*t12733;
  t13609 = t13603 + t13604;
  t13610 = t12732*t13609;
  t13611 = -0.27*t12913*t12914;
  t13613 = t13595 + t13610 + t13611;
  t13618 = 0.15121*t13584;
  t13620 = t9800*t13613;
  t13621 = t13618 + t13620;
  t13586 = -0.15121*t13584;
  t13589 = -0.15121*t9800;
  t13591 = -0.15121*t9797;
  t13615 = t9797*t13613;
  t13616 = t13586 + t13589 + t13591 + t13615;
  t13628 = 0.28121*t12913;
  t13630 = -1.*t13609*t12913;
  t13631 = -0.27*t12732*t12914;
  t13632 = t13628 + t13630 + t13631;
  t13674 = t9771*t13621;
  t13680 = -1.*t13616*t9804;
  t13684 = t13674 + t13680;
  t13617 = t9771*t13616;
  t13625 = t13621*t9804;
  t13626 = t13617 + t13625;
  t13669 = t13632*t13010;
  t13724 = t7244*t13684;
  t13740 = t13669 + t13724;
  t13750 = t7244*t13632;
  t13773 = -1.*t13010*t13684;
  t13778 = t13750 + t13773;
  t13113 = t13093*t13010;
  t13207 = t7244*t13206;
  t13216 = t13113 + t13207;
  t13627 = -1.*t13395*t13626;
  t13950 = t13481*t13626;
  t14109 = t13395*t13626;
  t14154 = -1.*t13538*t13626;
  t14199 = -1.*t13481*t13626;
  t14224 = t13538*t13626;
  t14346 = -1.*t13632*t12961;
  t14361 = t13632*t13093;
  p_output1[0]=t13216*var2[0] + t12562*t7244*var2[1] + t13027*var2[2];
  p_output1[1]=(t13390*t13538 - 1.*t13226*t13546)*var2[0] + (t12562*t13010*t13226 + t13390*t13395)*var2[1] + (t13390*t13481 - 1.*t13226*t13491)*var2[2];
  p_output1[2]=(t13226*t13538 + t13390*t13546)*var2[0] + (-1.*t12562*t13010*t13390 + t13226*t13395)*var2[1] + (t13226*t13481 + t13390*t13491)*var2[2];
  p_output1[3]=(t12562*(t13027*t13740 + t13491*t13778 + t13950)*t7244 + t13027*(t13627 + t12562*t13010*t13778 - 1.*t12562*t13740*t7244))*var2[0] + (t13216*(-1.*t13027*t13740 - 1.*t13491*t13778 + t14199) + t13027*(t13216*t13740 + t13546*t13778 + t14224))*var2[1] + (t12562*(-1.*t13216*t13740 - 1.*t13546*t13778 + t14154)*t7244 + t13216*(-1.*t12562*t13010*t13778 + t14109 + t12562*t13740*t7244))*var2[2];
  p_output1[4]=(t13481*(t13627 - 1.*t12562*t13684) + t13395*(t12961*t13632 + t13023*t13684 + t13950))*var2[0] + (t13538*(-1.*t13023*t13684 + t14199 + t14346) + t13481*(t13206*t13684 + t14224 + t14361))*var2[1] + (t13538*(t12562*t13684 + t14109) + t13395*(-1.*t13093*t13632 - 1.*t13206*t13684 + t14154))*var2[2];
  p_output1[5]=t12961*(t13621*t9797 - 1.*t13616*t9800)*var2[0] + (t12961*(t14361 + t12961*t13616*t9797 + t12961*t13621*t9800) + t13093*(t14346 - 1.*t13018*t13616*t9797 - 1.*t13018*t13621*t9800))*var2[1] + t13093*(-1.*t13621*t9797 + t13616*t9800)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-0.15121 + t13093*(-1.*t13018*t13613 + t14346) + t12961*(t12961*t13613 + t14361))*var2[1] + (-0.15121*t13018 - 0.15121*t13093)*var2[2];
  p_output1[13]=(0.28121*t12914 - 0.27*t12733*t12914 - 1.*t12914*t13609)*var2[0] + (0.28121*t12733 + 0.27*Power(t12914,2) - 1.*t12733*t13609)*var2[2];
  p_output1[14]=-0.27*var2[2];
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

#include "fFrFoot_vec_DiagonalStance.hh"

namespace SymFunction
{

void fFrFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
