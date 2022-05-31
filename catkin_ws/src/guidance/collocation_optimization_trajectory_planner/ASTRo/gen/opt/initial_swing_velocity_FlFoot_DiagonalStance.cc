/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 16:59:54 GMT+02:00
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
  double t98;
  double t384;
  double t426;
  double t438;
  double t498;
  double t563;
  double t894;
  double t275;
  double t1285;
  double t1802;
  double t2054;
  double t2081;
  double t2173;
  double t4597;
  double t4665;
  double t897;
  double t1592;
  double t1619;
  double t2164;
  double t2413;
  double t2462;
  double t3707;
  double t3735;
  double t3757;
  double t3852;
  double t4380;
  double t4759;
  double t4795;
  double t4797;
  double t4844;
  double t5010;
  double t5442;
  double t5520;
  double t5529;
  double t5418;
  double t5441;
  double t5687;
  double t5758;
  double t5858;
  double t5886;
  double t5893;
  double t6797;
  double t6805;
  double t6828;
  double t824;
  double t879;
  double t898;
  double t7127;
  double t7133;
  double t7134;
  double t7165;
  double t7170;
  double t7181;
  double t7251;
  double t7253;
  double t7262;
  double t7485;
  double t7415;
  double t7564;
  double t7568;
  double t7573;
  double t7425;
  double t7503;
  double t7515;
  double t7592;
  double t7594;
  double t7595;
  double t5092;
  double t5103;
  double t5106;
  double t5109;
  double t8213;
  double t8349;
  double t8421;
  double t8563;
  double t8590;
  double t7604;
  double t9477;
  double t9479;
  double t9486;
  double t9444;
  double t9522;
  double t9539;
  double t9570;
  double t9646;
  double t9647;
  double t9836;
  double t9883;
  double t9885;
  double t10060;
  double t10102;
  double t10112;
  double t10151;
  double t10154;
  double t10155;
  double t10173;
  double t10183;
  double t10184;
  double t10264;
  double t10265;
  double t10266;
  double t10273;
  double t10274;
  double t10275;
  double t10288;
  double t10291;
  double t10295;
  double t10377;
  double t10380;
  double t10386;
  double t10394;
  double t10396;
  double t10397;
  double t10474;
  double t10475;
  double t10477;
  double t10480;
  double t10483;
  double t10485;
  double t10840;
  double t10841;
  double t10842;
  double t10844;
  double t10851;
  double t10732;
  double t10907;
  double t10923;
  double t10942;
  double t10903;
  double t10943;
  double t10947;
  double t10955;
  double t10987;
  double t11002;
  double t11209;
  double t11223;
  double t11295;
  double t11296;
  double t11297;
  double t11306;
  double t11331;
  double t11332;
  double t11335;
  double t11336;
  double t11339;
  t98 = Cos(var1[4]);
  t384 = Cos(var1[6]);
  t426 = -1.*t384;
  t438 = 1. + t426;
  t498 = 0.15121*t438;
  t563 = Sin(var1[6]);
  t894 = Sin(var1[5]);
  t275 = Cos(var1[5]);
  t1285 = Cos(var1[7]);
  t1802 = -1.*t98*t384*t894;
  t2054 = -1.*t98*t275*t563;
  t2081 = t1802 + t2054;
  t2173 = Cos(var1[8]);
  t4597 = Sin(var1[7]);
  t4665 = Sin(var1[8]);
  t897 = 0.15121*t563;
  t1592 = -1.*t1285;
  t1619 = 1. + t1592;
  t2164 = 0.28121*t1619*t2081;
  t2413 = -1.*t2173;
  t2462 = 1. + t2413;
  t3707 = 0.50321*t1285*t2462*t2081;
  t3735 = -1.*t98*t275*t384;
  t3757 = t98*t894*t563;
  t3852 = t3735 + t3757;
  t4380 = 0.15121*t3852;
  t4759 = -0.50321*t2081*t4597*t4665;
  t4795 = t1285*t2173*t2081;
  t4797 = t2081*t4597*t4665;
  t4844 = t4795 + t4797;
  t5010 = 0.19821*t4844;
  t5442 = t98*t275*t384;
  t5520 = -1.*t98*t894*t563;
  t5529 = t5442 + t5520;
  t5418 = Sin(var1[4]);
  t5441 = t1285*t5418;
  t5687 = t5529*t4597;
  t5758 = t5441 + t5687;
  t5858 = t1285*t5529;
  t5886 = -1.*t5418*t4597;
  t5893 = t5858 + t5886;
  t6797 = -1.*t1285*t5418;
  t6805 = -1.*t5529*t4597;
  t6828 = t6797 + t6805;
  t824 = -0.15121*t563;
  t879 = t498 + t824;
  t898 = t498 + t897;
  t7127 = -1.*t275*t384*t5418;
  t7133 = t5418*t894*t563;
  t7134 = t7127 + t7133;
  t7165 = t1285*t7134;
  t7170 = -1.*t98*t4597;
  t7181 = t7165 + t7170;
  t7251 = t98*t1285;
  t7253 = t7134*t4597;
  t7262 = t7251 + t7253;
  t7485 = Cos(var1[3]);
  t7415 = Sin(var1[3]);
  t7564 = t7485*t275;
  t7568 = -1.*t7415*t5418*t894;
  t7573 = t7564 + t7568;
  t7425 = -1.*t275*t7415*t5418;
  t7503 = -1.*t7485*t894;
  t7515 = t7425 + t7503;
  t7592 = t384*t7573;
  t7594 = t7515*t563;
  t7595 = t7592 + t7594;
  t5092 = -0.15121*t384;
  t5103 = t5092 + t897;
  t5106 = 0.15121*t384;
  t5109 = t5106 + t897;
  t8213 = t275*t7415*t5418;
  t8349 = t7485*t894;
  t8421 = t8213 + t8349;
  t8563 = -1.*t8421*t563;
  t8590 = t7592 + t8563;
  t7604 = -1.*t7573*t563;
  t9477 = t384*t8421;
  t9479 = t7573*t563;
  t9486 = t9477 + t9479;
  t9444 = -1.*t98*t1285*t7415;
  t9522 = t9486*t4597;
  t9539 = t9444 + t9522;
  t9570 = t1285*t9486;
  t9646 = t98*t7415*t4597;
  t9647 = t9570 + t9646;
  t9836 = t98*t1285*t7415;
  t9883 = -1.*t9486*t4597;
  t9885 = t9836 + t9883;
  t10060 = t98*t275*t384*t7415;
  t10102 = -1.*t98*t7415*t894*t563;
  t10112 = t10060 + t10102;
  t10151 = t1285*t10112;
  t10154 = -1.*t7415*t5418*t4597;
  t10155 = t10151 + t10154;
  t10173 = t1285*t7415*t5418;
  t10183 = t10112*t4597;
  t10184 = t10173 + t10183;
  t10264 = -1.*t275*t7415;
  t10265 = -1.*t7485*t5418*t894;
  t10266 = t10264 + t10265;
  t10273 = t7485*t275*t5418;
  t10274 = -1.*t7415*t894;
  t10275 = t10273 + t10274;
  t10288 = t384*t10275;
  t10291 = t10266*t563;
  t10295 = t10288 + t10291;
  t10377 = t1285*t10295;
  t10380 = t7485*t98*t4597;
  t10386 = t10377 + t10380;
  t10394 = -1.*t7485*t98*t1285;
  t10396 = t10295*t4597;
  t10397 = t10394 + t10396;
  t10474 = t275*t7415;
  t10475 = t7485*t5418*t894;
  t10477 = t10474 + t10475;
  t10480 = t384*t10477;
  t10483 = t10275*t563;
  t10485 = t10480 + t10483;
  t10840 = -1.*t7485*t275*t5418;
  t10841 = t7415*t894;
  t10842 = t10840 + t10841;
  t10844 = -1.*t10842*t563;
  t10851 = t10480 + t10844;
  t10732 = -1.*t10477*t563;
  t10907 = t384*t10842;
  t10923 = t10477*t563;
  t10942 = t10907 + t10923;
  t10903 = t7485*t98*t1285;
  t10943 = t10942*t4597;
  t10947 = t10903 + t10943;
  t10955 = t1285*t10942;
  t10987 = -1.*t7485*t98*t4597;
  t11002 = t10955 + t10987;
  t11209 = -1.*t10942*t4597;
  t11223 = t10394 + t11209;
  t11295 = -1.*t7485*t98*t275*t384;
  t11296 = t7485*t98*t894*t563;
  t11297 = t11295 + t11296;
  t11306 = t1285*t11297;
  t11331 = t7485*t5418*t4597;
  t11332 = t11306 + t11331;
  t11335 = -1.*t7485*t1285*t5418;
  t11336 = t11297*t4597;
  t11339 = t11335 + t11336;
  p_output1[0]=var2[0] + (0.28121*t1619*t7134 + 0.50321*t2462*t7181 - 0.50321*t4665*t7262 + 0.19821*(t2173*t7181 + t4665*t7262) + t5418*t879*t894 + 0.15121*(t275*t5418*t563 + t384*t5418*t894) - 1.*t275*t5418*t898 + 0.28121*t4597*t98)*var2[4] + (t2164 + t3707 + t4380 + t4759 + t5010 - 1.*t275*t879*t98 - 1.*t894*t898*t98)*var2[5] + (t2164 + t3707 + t4380 + t4759 + t5010 + t275*t5109*t98 - 1.*t5103*t894*t98)*var2[6] + (0.28121*t1285*t5418 + 0.28121*t4597*t5529 - 0.50321*t4665*t5893 + 0.50321*t2462*t6828 + 0.19821*(t4665*t5893 + t2173*t6828))*var2[7] + (-0.50321*t2173*t5758 + 0.50321*t4665*t5893 + 0.19821*(t2173*t5758 - 1.*t4665*t5893))*var2[8];
  p_output1[1]=var2[1] + (0.28121*t10295*t1619 + 0.50321*t10386*t2462 - 0.50321*t10397*t4665 + 0.19821*(t10386*t2173 + t10397*t4665) + 0.15121*(t10266*t384 - 1.*t10275*t563) + t10266*t879 + t10275*t898 - 0.28121*t4597*t7485*t98)*var2[3] + (0.28121*t10112*t1619 + 0.50321*t10155*t2462 - 0.50321*t10184*t4665 + 0.19821*(t10155*t2173 + t10184*t4665) + 0.28121*t4597*t5418*t7415 - 1.*t7415*t879*t894*t98 + t275*t7415*t898*t98 + 0.15121*(-1.*t275*t563*t7415*t98 - 1.*t384*t7415*t894*t98))*var2[4] + (0.28121*t1619*t7595 + 0.50321*t1285*t2462*t7595 - 0.50321*t4597*t4665*t7595 + 0.19821*(t1285*t2173*t7595 + t4597*t4665*t7595) + 0.15121*(t384*t7515 + t7604) + t7515*t879 + t7573*t898)*var2[5] + (t5103*t7573 + t5109*t8421 + 0.15121*(t7604 - 1.*t384*t8421) + 0.28121*t1619*t8590 + 0.50321*t1285*t2462*t8590 - 0.50321*t4597*t4665*t8590 + 0.19821*(t1285*t2173*t8590 + t4597*t4665*t8590))*var2[6] + (0.28121*t4597*t9486 - 0.50321*t4665*t9647 - 0.28121*t1285*t7415*t98 + 0.50321*t2462*t9885 + 0.19821*(t4665*t9647 + t2173*t9885))*var2[7] + (-0.50321*t2173*t9539 + 0.50321*t4665*t9647 + 0.19821*(t2173*t9539 - 1.*t4665*t9647))*var2[8];
  p_output1[2]=var2[2] + (0.15121*t8590 + t7573*t879 + t8421*t898 + 0.28121*t1619*t9486 - 0.50321*t4665*t9539 + 0.50321*t2462*t9647 + 0.19821*(t4665*t9539 + t2173*t9647) - 0.28121*t4597*t7415*t98)*var2[3] + (0.28121*t11297*t1619 + 0.50321*t11332*t2462 - 0.50321*t11339*t4665 + 0.19821*(t11332*t2173 + t11339*t4665) - 0.28121*t4597*t5418*t7485 + t7485*t879*t894*t98 - 1.*t275*t7485*t898*t98 + 0.15121*(t275*t563*t7485*t98 + t384*t7485*t894*t98))*var2[4] + (0.15121*(t10288 + t10732) + 0.28121*t10485*t1619 + 0.50321*t10485*t1285*t2462 - 0.50321*t10485*t4597*t4665 + 0.19821*(t10485*t1285*t2173 + t10485*t4597*t4665) + t10275*t879 + t10477*t898)*var2[5] + (0.28121*t10851*t1619 + 0.50321*t10851*t1285*t2462 + 0.15121*(t10732 - 1.*t10842*t384) - 0.50321*t10851*t4597*t4665 + 0.19821*(t10851*t1285*t2173 + t10851*t4597*t4665) + t10477*t5103 + t10842*t5109)*var2[6] + (0.50321*t11223*t2462 + 0.28121*t10942*t4597 - 0.50321*t11002*t4665 + 0.19821*(t11223*t2173 + t11002*t4665) + 0.28121*t1285*t7485*t98)*var2[7] + (-0.50321*t10947*t2173 + 0.50321*t11002*t4665 + 0.19821*(t10947*t2173 - 1.*t11002*t4665))*var2[8];
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
