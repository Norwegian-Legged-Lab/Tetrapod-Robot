/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 10:40:38 GMT+02:00
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
  double t24143;
  double t24203;
  double t24137;
  double t24197;
  double t24204;
  double t24220;
  double t24224;
  double t24228;
  double t24230;
  double t24233;
  double t24241;
  double t17943;
  double t24202;
  double t24209;
  double t24213;
  double t26934;
  double t27386;
  double t28903;
  double t28975;
  double t28978;
  double t28985;
  double t28990;
  double t28991;
  double t28994;
  double t28995;
  double t28996;
  double t29000;
  t24143 = Cos(var1[5]);
  t24203 = Sin(var1[3]);
  t24137 = Cos(var1[3]);
  t24197 = Sin(var1[4]);
  t24204 = Sin(var1[5]);
  t24220 = Cos(var1[6]);
  t24224 = t24143*t24203;
  t24228 = t24137*t24197*t24204;
  t24230 = t24224 + t24228;
  t24233 = Cos(var1[4]);
  t24241 = Sin(var1[6]);
  t17943 = Cos(var1[7]);
  t24202 = -1.*t24137*t24143*t24197;
  t24209 = t24203*t24204;
  t24213 = t24202 + t24209;
  t26934 = t24137*t24233*t24220;
  t27386 = -1.*t24230*t24241;
  t28903 = t26934 + t27386;
  t28975 = Sin(var1[7]);
  t28978 = Cos(var1[8]);
  t28985 = t17943*t24213;
  t28990 = t28903*t28975;
  t28991 = t28985 + t28990;
  t28994 = t17943*t28903;
  t28995 = -1.*t24213*t28975;
  t28996 = t28994 + t28995;
  t29000 = Sin(var1[8]);
  p_output1[0]=0.325*(1. - 1.*t17943)*t24213 + 0.1575*(1. - 1.*t24220)*t24230 - 0.1575*t24137*t24233*t24241 + 0.2255*(t24220*t24230 + t24137*t24233*t24241) - 0.325*t28903*t28975 + 0.075*(1. - 1.*t28978)*t28991 + 0.075*t28996*t29000 - 0.0641*(t28978*t28996 + t28991*t29000) + 0.355*(t28978*t28991 - 1.*t28996*t29000) + var1[2];
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

#include "u_frontSwingFootHeight2_ParallelStance.hh"

namespace SymFunction
{

void u_frontSwingFootHeight2_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
