/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 22:24:36 GMT+02:00
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
  double t922;
  double t2470;
  double t2439;
  double t2466;
  double t2750;
  double t243;
  double t666;
  double t3268;
  double t3338;
  double t3959;
  double t4019;
  double t5439;
  double t2468;
  double t2895;
  double t2947;
  double t1793;
  double t5446;
  double t5447;
  double t5456;
  double t5462;
  double t5507;
  double t5521;
  double t5529;
  double t5536;
  double t6112;
  double t6161;
  double t6180;
  double t1910;
  double t1979;
  double t3302;
  double t3322;
  double t6550;
  double t6554;
  double t6559;
  double t5541;
  double t5560;
  double t6871;
  double t6927;
  double t6933;
  double t6937;
  double t6938;
  double t6943;
  double t8396;
  double t8409;
  double t8418;
  double t8505;
  double t8506;
  double t8509;
  double t8520;
  double t8526;
  double t8541;
  double t8596;
  double t8615;
  double t8616;
  double t9650;
  double t9665;
  double t10191;
  double t10367;
  double t10377;
  double t10381;
  double t10566;
  double t10578;
  double t10582;
  double t10612;
  double t10617;
  double t10618;
  double t11184;
  double t11185;
  double t11191;
  double t11279;
  double t11285;
  double t11292;
  t922 = Sin(var1[3]);
  t2470 = Cos(var1[3]);
  t2439 = Cos(var1[5]);
  t2466 = Sin(var1[4]);
  t2750 = Sin(var1[5]);
  t243 = Cos(var1[4]);
  t666 = Sin(var1[15]);
  t3268 = Cos(var1[15]);
  t3338 = t2470*t2439;
  t3959 = -1.*t922*t2466*t2750;
  t4019 = t3338 + t3959;
  t5439 = Sin(var1[16]);
  t2468 = t2439*t922*t2466;
  t2895 = t2470*t2750;
  t2947 = t2468 + t2895;
  t1793 = Cos(var1[16]);
  t5446 = -1.*t3268*t243*t922;
  t5447 = -1.*t666*t4019;
  t5456 = t5446 + t5447;
  t5462 = Sin(var1[17]);
  t5507 = -1.*t5439*t2947;
  t5521 = t1793*t5456;
  t5529 = t5507 + t5521;
  t5536 = Cos(var1[17]);
  t6112 = t1793*t2947;
  t6161 = t5439*t5456;
  t6180 = t6112 + t6161;
  t1910 = -1.*t1793;
  t1979 = 1. + t1910;
  t3302 = -1.*t3268;
  t3322 = 1. + t3302;
  t6550 = -1.*t3268*t2470*t2466;
  t6554 = -1.*t2470*t243*t666*t2750;
  t6559 = t6550 + t6554;
  t5541 = -1.*t5536;
  t5560 = 1. + t5541;
  t6871 = t2470*t243*t2439*t5439;
  t6927 = t1793*t6559;
  t6933 = t6871 + t6927;
  t6937 = -1.*t1793*t2470*t243*t2439;
  t6938 = t5439*t6559;
  t6943 = t6937 + t6938;
  t8396 = t2470*t2439*t2466;
  t8409 = -1.*t922*t2750;
  t8418 = t8396 + t8409;
  t8505 = t2439*t922;
  t8506 = t2470*t2466*t2750;
  t8509 = t8505 + t8506;
  t8520 = -1.*t666*t5439*t8418;
  t8526 = t1793*t8509;
  t8541 = t8520 + t8526;
  t8596 = -1.*t1793*t666*t8418;
  t8615 = -1.*t5439*t8509;
  t8616 = t8596 + t8615;
  t9650 = -1.*t2470*t243*t666;
  t9665 = -1.*t3268*t8509;
  t10191 = t9650 + t9665;
  t10367 = t3268*t2470*t243;
  t10377 = -1.*t666*t8509;
  t10381 = t10367 + t10377;
  t10566 = -1.*t2470*t2439*t2466;
  t10578 = t922*t2750;
  t10582 = t10566 + t10578;
  t10612 = -1.*t5439*t10582;
  t10617 = t1793*t10381;
  t10618 = t10612 + t10617;
  t11184 = -1.*t1793*t10582;
  t11185 = -1.*t5439*t10381;
  t11191 = t11184 + t11185;
  t11279 = t1793*t10582;
  t11285 = t5439*t10381;
  t11292 = t11279 + t11285;
  p_output1[0]=1.;
  p_output1[1]=-0.325*t1979*t2947 - 0.1575*t3322*t4019 + 0.325*t5439*t5456 - 0.575*t5462*t5529 - 0.575*t5560*t6180 - 0.0641*(t5529*t5536 + t5462*t6180) - 0.295*(-1.*t5462*t5529 + t5536*t6180) - 0.1575*t243*t666*t922 - 0.2255*(t3268*t4019 - 1.*t243*t666*t922);
  p_output1[2]=0.325*t1979*t243*t2439*t2470 - 0.1575*t243*t2470*t2750*t3322 + 0.325*t5439*t6559 - 0.1575*t2466*t2470*t666 - 0.2255*(t243*t2470*t2750*t3268 - 1.*t2466*t2470*t666) - 0.575*t5462*t6933 - 0.575*t5560*t6943 - 0.0641*(t5536*t6933 + t5462*t6943) - 0.295*(-1.*t5462*t6933 + t5536*t6943);
  p_output1[3]=-0.2255*t3268*t8418 - 0.1575*t3322*t8418 - 0.325*t5439*t666*t8418 - 0.325*t1979*t8509 - 0.575*t5560*t8541 - 0.575*t5462*t8616 - 0.295*(t5536*t8541 - 1.*t5462*t8616) - 0.0641*(t5462*t8541 + t5536*t8616);
  p_output1[4]=-0.2255*t10381 + 0.1575*t243*t2470*t3268 + 0.325*t10191*t5439 - 0.575*t10191*t1793*t5462 - 0.0641*(t10191*t5439*t5462 + t10191*t1793*t5536) - 0.295*(-1.*t10191*t1793*t5462 + t10191*t5439*t5536) - 0.575*t10191*t5439*t5560 - 0.1575*t666*t8509;
  p_output1[5]=0.325*t10381*t1793 - 0.325*t10582*t5439 - 0.575*t11191*t5462 - 0.295*(-1.*t11191*t5462 + t10618*t5536) - 0.0641*(t10618*t5462 + t11191*t5536) - 0.575*t10618*t5560;
  p_output1[6]=-0.575*t11292*t5462 - 0.575*t10618*t5536 - 0.295*(-1.*t11292*t5462 - 1.*t10618*t5536) - 0.0641*(-1.*t10618*t5462 + t11292*t5536);
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

#include "J_u_rearSwingFootHeightflat_DiagonalStance_DiagonalStance.hh"

namespace SymFunction
{

void J_u_rearSwingFootHeightflat_DiagonalStance_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
