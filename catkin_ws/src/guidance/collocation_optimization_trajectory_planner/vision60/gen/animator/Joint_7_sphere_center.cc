/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:11:21 GMT+02:00
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
  double t24;
  double t27;
  double t28;
  double t30;
  double t33;
  double t25;
  double t46;
  double t19;
  double t48;
  double t49;
  double t50;
  double t53;
  double t56;
  double t58;
  double t61;
  double t66;
  double t73;
  double t76;
  double t78;
  double t20;
  double t23;
  double t96;
  double t31;
  double t32;
  double t103;
  double t113;
  double t116;
  double t118;
  double t101;
  double t106;
  double t108;
  double t132;
  double t135;
  double t136;
  double t68;
  double t71;
  double t140;
  double t141;
  double t142;
  double t146;
  double t149;
  double t150;
  double t174;
  double t177;
  double t178;
  double t166;
  double t169;
  double t170;
  double t190;
  double t193;
  double t194;
  double t198;
  double t201;
  double t202;
  double t206;
  double t2309;
  double t2319;
  t24 = Cos(var1[4]);
  t27 = Sin(var1[15]);
  t28 = Sin(var1[4]);
  t30 = Cos(var1[15]);
  t33 = Sin(var1[5]);
  t25 = Cos(var1[5]);
  t46 = Sin(var1[16]);
  t19 = Cos(var1[16]);
  t48 = t30*t28;
  t49 = t24*t27*t33;
  t50 = t48 + t49;
  t53 = Sin(var1[17]);
  t56 = -1.*t24*t25*t46;
  t58 = t19*t50;
  t61 = t56 + t58;
  t66 = Cos(var1[17]);
  t73 = t19*t24*t25;
  t76 = t46*t50;
  t78 = t73 + t76;
  t20 = -1.*t19;
  t23 = 1. + t20;
  t96 = Sin(var1[3]);
  t31 = -1.*t30;
  t32 = 1. + t31;
  t103 = Cos(var1[3]);
  t113 = t103*t25;
  t116 = -1.*t96*t28*t33;
  t118 = t113 + t116;
  t101 = t25*t96*t28;
  t106 = t103*t33;
  t108 = t101 + t106;
  t132 = -1.*t30*t24*t96;
  t135 = -1.*t27*t118;
  t136 = t132 + t135;
  t68 = -1.*t66;
  t71 = 1. + t68;
  t140 = -1.*t46*t108;
  t141 = t19*t136;
  t142 = t140 + t141;
  t146 = t19*t108;
  t149 = t46*t136;
  t150 = t146 + t149;
  t174 = t25*t96;
  t177 = t103*t28*t33;
  t178 = t174 + t177;
  t166 = -1.*t103*t25*t28;
  t169 = t96*t33;
  t170 = t166 + t169;
  t190 = t30*t103*t24;
  t193 = -1.*t27*t178;
  t194 = t190 + t193;
  t198 = -1.*t46*t170;
  t201 = t19*t194;
  t202 = t198 + t201;
  t206 = t19*t170;
  t2309 = t46*t194;
  t2319 = t206 + t2309;
  p_output1[0]=-0.325*t23*t24*t25 + 0.1575*t27*t28 + 0.1575*t24*t32*t33 - 0.2255*(t27*t28 - 1.*t24*t30*t33) + 0.325*t46*t50 - 0.575*t53*t61 - 0.575*t71*t78 - 0.575*(-1.*t53*t61 + t66*t78) + var1[0];
  p_output1[1]=-0.325*t108*t23 - 0.1575*t118*t32 + 0.325*t136*t46 - 0.575*t142*t53 - 0.575*(-1.*t142*t53 + t150*t66) - 0.575*t150*t71 - 0.1575*t24*t27*t96 - 0.2255*(t118*t30 - 1.*t24*t27*t96) + var1[1];
  p_output1[2]=-0.325*t170*t23 + 0.1575*t103*t24*t27 - 0.2255*(t103*t24*t27 + t178*t30) - 0.1575*t178*t32 + 0.325*t194*t46 - 0.575*t202*t53 - 0.575*(-1.*t202*t53 + t2319*t66) - 0.575*t2319*t71 + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Joint_7_sphere_center.hh"

namespace SymFunction
{

void Joint_7_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
