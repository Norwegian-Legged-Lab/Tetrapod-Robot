/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:11:05 GMT+02:00
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
  double t7954;
  double t8985;
  double t9036;
  double t9207;
  double t9471;
  double t3397;
  double t8069;
  double t9573;
  double t9656;
  double t9657;
  double t9689;
  double t3418;
  double t4118;
  double t9958;
  double t9263;
  double t9278;
  double t10201;
  double t10367;
  double t10506;
  double t10529;
  double t10131;
  double t10269;
  double t10285;
  double t10902;
  double t10904;
  double t10910;
  double t11206;
  double t11208;
  double t11213;
  double t11161;
  double t11171;
  double t11184;
  double t11433;
  double t11444;
  double t11460;
  t7954 = Cos(var1[4]);
  t8985 = Sin(var1[9]);
  t9036 = Sin(var1[4]);
  t9207 = Cos(var1[9]);
  t9471 = Sin(var1[5]);
  t3397 = Cos(var1[10]);
  t8069 = Cos(var1[5]);
  t9573 = Sin(var1[10]);
  t9656 = t9207*t9036;
  t9657 = t7954*t8985*t9471;
  t9689 = t9656 + t9657;
  t3418 = -1.*t3397;
  t4118 = 1. + t3418;
  t9958 = Sin(var1[3]);
  t9263 = -1.*t9207;
  t9278 = 1. + t9263;
  t10201 = Cos(var1[3]);
  t10367 = t10201*t8069;
  t10506 = -1.*t9958*t9036*t9471;
  t10529 = t10367 + t10506;
  t10131 = t8069*t9958*t9036;
  t10269 = t10201*t9471;
  t10285 = t10131 + t10269;
  t10902 = -1.*t9207*t7954*t9958;
  t10904 = -1.*t8985*t10529;
  t10910 = t10902 + t10904;
  t11206 = t8069*t9958;
  t11208 = t10201*t9036*t9471;
  t11213 = t11206 + t11208;
  t11161 = -1.*t10201*t8069*t9036;
  t11171 = t9958*t9471;
  t11184 = t11161 + t11171;
  t11433 = t9207*t10201*t7954;
  t11444 = -1.*t8985*t11213;
  t11460 = t11433 + t11444;
  p_output1[0]=-0.325*t4118*t7954*t8069 - 0.1575*t8985*t9036 - 0.1575*t7954*t9278*t9471 + 0.2255*(t8985*t9036 - 1.*t7954*t9207*t9471) + 0.325*t9573*t9689 - 0.325*(t3397*t7954*t8069 + t9573*t9689) + var1[0];
  p_output1[1]=-0.325*t10285*t4118 + 0.1575*t10529*t9278 + 0.325*t10910*t9573 - 0.325*(t10285*t3397 + t10910*t9573) + 0.1575*t7954*t8985*t9958 + 0.2255*(t10529*t9207 - 1.*t7954*t8985*t9958) + var1[1];
  p_output1[2]=-0.325*t11184*t4118 - 0.1575*t10201*t7954*t8985 + 0.2255*(t10201*t7954*t8985 + t11213*t9207) + 0.1575*t11213*t9278 + 0.325*t11460*t9573 - 0.325*(t11184*t3397 + t11460*t9573) + var1[2];
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

#include "Joint_2_sphere_center.hh"

namespace SymFunction
{

void Joint_2_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
