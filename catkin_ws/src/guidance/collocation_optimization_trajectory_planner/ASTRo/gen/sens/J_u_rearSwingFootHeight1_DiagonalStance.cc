/*
 * Automatically Generated from Mathematica.
 * Wed 6 Apr 2022 13:10:54 GMT+02:00
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
  double t10249;
  double t10378;
  double t10348;
  double t10361;
  double t10383;
  double t7921;
  double t10222;
  double t10435;
  double t10457;
  double t10470;
  double t10475;
  double t10513;
  double t10373;
  double t10386;
  double t10401;
  double t10276;
  double t10525;
  double t10533;
  double t10541;
  double t10563;
  double t10594;
  double t10613;
  double t10623;
  double t10631;
  double t10643;
  double t10646;
  double t10661;
  double t10305;
  double t10310;
  double t10447;
  double t10452;
  double t10869;
  double t10883;
  double t10887;
  double t10633;
  double t10636;
  double t10898;
  double t10905;
  double t10920;
  double t10948;
  double t11017;
  double t11062;
  double t11144;
  double t11148;
  double t11156;
  double t11176;
  double t11184;
  double t11210;
  double t11220;
  double t11224;
  double t11234;
  double t11244;
  double t11254;
  double t11261;
  double t11354;
  double t11360;
  double t11374;
  double t11402;
  double t11410;
  double t11433;
  double t11481;
  double t11489;
  double t11498;
  double t11552;
  double t11554;
  double t11582;
  double t11839;
  double t11841;
  double t11848;
  double t11911;
  double t11913;
  double t11914;
  t10249 = Sin(var1[3]);
  t10378 = Cos(var1[3]);
  t10348 = Cos(var1[5]);
  t10361 = Sin(var1[4]);
  t10383 = Sin(var1[5]);
  t7921 = Cos(var1[4]);
  t10222 = Sin(var1[15]);
  t10435 = Cos(var1[15]);
  t10457 = t10378*t10348;
  t10470 = -1.*t10249*t10361*t10383;
  t10475 = t10457 + t10470;
  t10513 = Sin(var1[16]);
  t10373 = t10348*t10249*t10361;
  t10386 = t10378*t10383;
  t10401 = t10373 + t10386;
  t10276 = Cos(var1[16]);
  t10525 = -1.*t10435*t7921*t10249;
  t10533 = -1.*t10222*t10475;
  t10541 = t10525 + t10533;
  t10563 = Sin(var1[17]);
  t10594 = -1.*t10513*t10401;
  t10613 = t10276*t10541;
  t10623 = t10594 + t10613;
  t10631 = Cos(var1[17]);
  t10643 = t10276*t10401;
  t10646 = t10513*t10541;
  t10661 = t10643 + t10646;
  t10305 = -1.*t10276;
  t10310 = 1. + t10305;
  t10447 = -1.*t10435;
  t10452 = 1. + t10447;
  t10869 = -1.*t10435*t10378*t10361;
  t10883 = -1.*t10378*t7921*t10222*t10383;
  t10887 = t10869 + t10883;
  t10633 = -1.*t10631;
  t10636 = 1. + t10633;
  t10898 = t10378*t7921*t10348*t10513;
  t10905 = t10276*t10887;
  t10920 = t10898 + t10905;
  t10948 = -1.*t10276*t10378*t7921*t10348;
  t11017 = t10513*t10887;
  t11062 = t10948 + t11017;
  t11144 = t10378*t10348*t10361;
  t11148 = -1.*t10249*t10383;
  t11156 = t11144 + t11148;
  t11176 = t10348*t10249;
  t11184 = t10378*t10361*t10383;
  t11210 = t11176 + t11184;
  t11220 = -1.*t10222*t10513*t11156;
  t11224 = t10276*t11210;
  t11234 = t11220 + t11224;
  t11244 = -1.*t10276*t10222*t11156;
  t11254 = -1.*t10513*t11210;
  t11261 = t11244 + t11254;
  t11354 = -1.*t10378*t7921*t10222;
  t11360 = -1.*t10435*t11210;
  t11374 = t11354 + t11360;
  t11402 = t10435*t10378*t7921;
  t11410 = -1.*t10222*t11210;
  t11433 = t11402 + t11410;
  t11481 = -1.*t10378*t10348*t10361;
  t11489 = t10249*t10383;
  t11498 = t11481 + t11489;
  t11552 = -1.*t10513*t11498;
  t11554 = t10276*t11433;
  t11582 = t11552 + t11554;
  t11839 = -1.*t10276*t11498;
  t11841 = -1.*t10513*t11433;
  t11848 = t11839 + t11841;
  t11911 = t10276*t11498;
  t11913 = t10513*t11433;
  t11914 = t11911 + t11913;
  p_output1[0]=1.;
  p_output1[1]=-0.325*t10310*t10401 - 0.1575*t10452*t10475 + 0.325*t10513*t10541 - 0.575*t10563*t10623 - 0.575*t10636*t10661 - 0.0641*(t10623*t10631 + t10563*t10661) - 0.295*(-1.*t10563*t10623 + t10631*t10661) - 0.1575*t10222*t10249*t7921 - 0.2255*(t10435*t10475 - 1.*t10222*t10249*t7921);
  p_output1[2]=-0.1575*t10222*t10361*t10378 + 0.325*t10513*t10887 - 0.575*t10563*t10920 - 0.575*t10636*t11062 - 0.0641*(t10631*t10920 + t10563*t11062) - 0.295*(-1.*t10563*t10920 + t10631*t11062) + 0.325*t10310*t10348*t10378*t7921 - 0.1575*t10378*t10383*t10452*t7921 - 0.2255*(-1.*t10222*t10361*t10378 + t10378*t10383*t10435*t7921);
  p_output1[3]=-0.2255*t10435*t11156 - 0.1575*t10452*t11156 - 0.325*t10222*t10513*t11156 - 0.325*t10310*t11210 - 0.575*t10636*t11234 - 0.575*t10563*t11261 - 0.295*(t10631*t11234 - 1.*t10563*t11261) - 0.0641*(t10563*t11234 + t10631*t11261);
  p_output1[4]=-0.1575*t10222*t11210 + 0.325*t10513*t11374 - 0.575*t10276*t10563*t11374 - 0.575*t10513*t10636*t11374 - 0.0641*(t10513*t10563*t11374 + t10276*t10631*t11374) - 0.295*(-1.*t10276*t10563*t11374 + t10513*t10631*t11374) - 0.2255*t11433 + 0.1575*t10378*t10435*t7921;
  p_output1[5]=0.325*t10276*t11433 - 0.325*t10513*t11498 - 0.575*t10636*t11582 - 0.575*t10563*t11848 - 0.295*(t10631*t11582 - 1.*t10563*t11848) - 0.0641*(t10563*t11582 + t10631*t11848);
  p_output1[6]=-0.575*t10631*t11582 - 0.575*t10563*t11914 - 0.295*(-1.*t10631*t11582 - 1.*t10563*t11914) - 0.0641*(-1.*t10563*t11582 + t10631*t11914);
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

#include "J_u_rearSwingFootHeight1_DiagonalStance.hh"

namespace SymFunction
{

void J_u_rearSwingFootHeight1_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
