/*
 * Automatically Generated from Mathematica.
 * Wed 6 Apr 2022 10:59:57 GMT+02:00
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
  double t8278;
  double t13811;
  double t13846;
  double t13821;
  double t13962;
  double t9012;
  double t13360;
  double t14305;
  double t14313;
  double t14317;
  double t14321;
  double t14342;
  double t13841;
  double t14182;
  double t14206;
  double t13632;
  double t14352;
  double t14353;
  double t14359;
  double t14364;
  double t14366;
  double t14373;
  double t14374;
  double t14376;
  double t14384;
  double t14386;
  double t14387;
  t8278 = Cos(var1[3]);
  t13811 = Cos(var1[5]);
  t13846 = Sin(var1[3]);
  t13821 = Sin(var1[4]);
  t13962 = Sin(var1[5]);
  t9012 = Cos(var1[4]);
  t13360 = Sin(var1[9]);
  t14305 = Cos(var1[9]);
  t14313 = t13811*t13846;
  t14317 = t8278*t13821*t13962;
  t14321 = t14313 + t14317;
  t14342 = Sin(var1[10]);
  t13841 = -1.*t8278*t13811*t13821;
  t14182 = t13846*t13962;
  t14206 = t13841 + t14182;
  t13632 = Cos(var1[10]);
  t14352 = t14305*t8278*t9012;
  t14353 = -1.*t13360*t14321;
  t14359 = t14352 + t14353;
  t14364 = Sin(var1[11]);
  t14366 = -1.*t14342*t14206;
  t14373 = t13632*t14359;
  t14374 = t14366 + t14373;
  t14376 = Cos(var1[11]);
  t14384 = t13632*t14206;
  t14386 = t14342*t14359;
  t14387 = t14384 + t14386;
  p_output1[0]=-0.325*(1. - 1.*t13632)*t14206 + 0.1575*(1. - 1.*t14305)*t14321 + 0.325*t14342*t14359 - 0.575*t14364*t14374 - 0.575*(1. - 1.*t14376)*t14387 - 0.0641*(t14374*t14376 + t14364*t14387) - 0.295*(-1.*t14364*t14374 + t14376*t14387) - 0.1575*t13360*t8278*t9012 + 0.2255*(t14305*t14321 + t13360*t8278*t9012) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "u_rearSwingFootHeight2_ParallelStance.hh"

namespace SymFunction
{

void u_rearSwingFootHeight2_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
