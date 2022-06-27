/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 14:36:10 GMT+02:00
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
  double t3540;
  double t5946;
  double t8543;
  double t3398;
  double t8557;
  double t8687;
  double t8725;
  double t8923;
  double t9003;
  double t9216;
  double t5577;
  double t8603;
  double t8686;
  double t9265;
  double t9280;
  double t9336;
  double t10182;
  double t10214;
  double t10217;
  double t10226;
  double t10317;
  double t10340;
  double t10349;
  double t10386;
  double t10388;
  double t10980;
  double t10983;
  double t10990;
  double t10991;
  double t10992;
  double t9224;
  double t9227;
  double t9362;
  double t9431;
  double t10208;
  double t10212;
  double t10372;
  double t10385;
  double t11005;
  double t11031;
  double t11046;
  double t11056;
  double t11064;
  double t11066;
  double t11077;
  double t11082;
  double t11086;
  double t11145;
  double t11146;
  double t11147;
  double t11110;
  double t11112;
  double t11117;
  double t11151;
  double t11153;
  double t11155;
  double t11185;
  double t11188;
  double t11193;
  double t11279;
  double t11285;
  double t11161;
  double t11313;
  double t11315;
  double t11322;
  double t11329;
  double t11336;
  double t11344;
  double t11346;
  double t11347;
  double t11350;
  double t11359;
  double t11363;
  double t11367;
  t3540 = Cos(var1[5]);
  t5946 = Sin(var1[3]);
  t8543 = Sin(var1[4]);
  t3398 = Cos(var1[3]);
  t8557 = Sin(var1[5]);
  t8687 = Cos(var1[6]);
  t8725 = -1.*t8687;
  t8923 = 1. + t8725;
  t9003 = 0.15121*t8923;
  t9216 = Sin(var1[6]);
  t5577 = t3398*t3540;
  t8603 = -1.*t5946*t8543*t8557;
  t8686 = t5577 + t8603;
  t9265 = t3540*t5946*t8543;
  t9280 = t3398*t8557;
  t9336 = t9265 + t9280;
  t10182 = Cos(var1[7]);
  t10214 = t8687*t9336;
  t10217 = t8686*t9216;
  t10226 = t10214 + t10217;
  t10317 = Cos(var1[4]);
  t10340 = Sin(var1[7]);
  t10349 = Cos(var1[8]);
  t10386 = t10182*t10226;
  t10388 = t10317*t5946*t10340;
  t10980 = t10386 + t10388;
  t10983 = -1.*t10317*t10182*t5946;
  t10990 = t10226*t10340;
  t10991 = t10983 + t10990;
  t10992 = Sin(var1[8]);
  t9224 = -0.15121*t9216;
  t9227 = t9003 + t9224;
  t9362 = 0.15121*t9216;
  t9431 = t9003 + t9362;
  t10208 = -1.*t10182;
  t10212 = 1. + t10208;
  t10372 = -1.*t10349;
  t10385 = 1. + t10372;
  t11005 = -1.*t3398*t10317*t3540*t8687;
  t11031 = t3398*t10317*t8557*t9216;
  t11046 = t11005 + t11031;
  t11056 = t10182*t11046;
  t11064 = t3398*t8543*t10340;
  t11066 = t11056 + t11064;
  t11077 = -1.*t3398*t10182*t8543;
  t11082 = t11046*t10340;
  t11086 = t11077 + t11082;
  t11145 = t3540*t5946;
  t11146 = t3398*t8543*t8557;
  t11147 = t11145 + t11146;
  t11110 = t3398*t3540*t8543;
  t11112 = -1.*t5946*t8557;
  t11117 = t11110 + t11112;
  t11151 = t8687*t11147;
  t11153 = t11117*t9216;
  t11155 = t11151 + t11153;
  t11185 = -1.*t3398*t3540*t8543;
  t11188 = t5946*t8557;
  t11193 = t11185 + t11188;
  t11279 = -1.*t11193*t9216;
  t11285 = t11151 + t11279;
  t11161 = -1.*t11147*t9216;
  t11313 = t8687*t11193;
  t11315 = t11147*t9216;
  t11322 = t11313 + t11315;
  t11329 = -1.*t3398*t10317*t10182;
  t11336 = -1.*t11322*t10340;
  t11344 = t11329 + t11336;
  t11346 = t10182*t11322;
  t11347 = -1.*t3398*t10317*t10340;
  t11350 = t11346 + t11347;
  t11359 = t3398*t10317*t10182;
  t11363 = t11322*t10340;
  t11367 = t11359 + t11363;
  p_output1[0]=1.;
  p_output1[1]=0.28121*t10212*t10226 + 0.50321*t10385*t10980 - 0.50321*t10991*t10992 + 0.19821*(t10349*t10980 + t10991*t10992) - 0.28121*t10317*t10340*t5946 + t8686*t9227 + 0.15121*(t8686*t8687 - 1.*t9216*t9336) + t9336*t9431;
  p_output1[2]=0.28121*t10212*t11046 + 0.50321*t10385*t11066 - 0.50321*t10992*t11086 + 0.19821*(t10349*t11066 + t10992*t11086) - 0.28121*t10340*t3398*t8543 + 0.15121*(t10317*t3398*t8557*t8687 + t10317*t3398*t3540*t9216) + t10317*t3398*t8557*t9227 - 1.*t10317*t3398*t3540*t9431;
  p_output1[3]=0.28121*t10212*t11155 + 0.50321*t10182*t10385*t11155 - 0.50321*t10340*t10992*t11155 + 0.19821*(t10182*t10349*t11155 + t10340*t10992*t11155) + 0.15121*(t11161 + t11117*t8687) + t11117*t9227 + t11147*t9431;
  p_output1[4]=0.28121*t10212*t11285 + 0.50321*t10182*t10385*t11285 - 0.50321*t10340*t10992*t11285 + 0.19821*(t10182*t10349*t11285 + t10340*t10992*t11285) + 0.15121*(t11161 - 1.*t11193*t8687) + t11147*(-0.15121*t8687 + t9362) + t11193*(0.15121*t8687 + t9362);
  p_output1[5]=0.28121*t10340*t11322 + 0.50321*t10385*t11344 - 0.50321*t10992*t11350 + 0.19821*(t10349*t11344 + t10992*t11350) + 0.28121*t10182*t10317*t3398;
  p_output1[6]=0.50321*t10992*t11350 - 0.50321*t10349*t11367 + 0.19821*(-1.*t10992*t11350 + t10349*t11367);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_swing_position_FlFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void J_swing_position_FlFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
