/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:11:23 GMT+02:00
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
  double t34;
  double t93;
  double t121;
  double t126;
  double t128;
  double t43;
  double t51;
  double t157;
  double t158;
  double t161;
  double t162;
  double t173;
  double t185;
  double t186;
  double t189;
  double t205;
  double t2324;
  double t2843;
  double t3068;
  double t81;
  double t88;
  double t98;
  double t111;
  double t4016;
  double t3891;
  double t4337;
  double t4454;
  double t4550;
  double t181;
  double t182;
  double t4011;
  double t4230;
  double t4235;
  double t4793;
  double t4914;
  double t5124;
  double t5342;
  double t5721;
  double t5741;
  double t5949;
  double t5973;
  double t6022;
  double t6383;
  double t6389;
  double t6393;
  double t6365;
  double t6372;
  double t6375;
  double t6468;
  double t6471;
  double t6552;
  double t6570;
  double t6573;
  double t6578;
  double t6600;
  double t6603;
  double t6606;
  t34 = Cos(var1[4]);
  t93 = Cos(var1[6]);
  t121 = Sin(var1[5]);
  t126 = Sin(var1[4]);
  t128 = Sin(var1[6]);
  t43 = Cos(var1[5]);
  t51 = Cos(var1[7]);
  t157 = t93*t126;
  t158 = t34*t121*t128;
  t161 = t157 + t158;
  t162 = Sin(var1[7]);
  t173 = Cos(var1[8]);
  t185 = t34*t43*t51;
  t186 = t161*t162;
  t189 = t185 + t186;
  t205 = t51*t161;
  t2324 = -1.*t34*t43*t162;
  t2843 = t205 + t2324;
  t3068 = Sin(var1[8]);
  t81 = -1.*t51;
  t88 = 1. + t81;
  t98 = -1.*t93;
  t111 = 1. + t98;
  t4016 = Cos(var1[3]);
  t3891 = Sin(var1[3]);
  t4337 = t4016*t43;
  t4454 = -1.*t3891*t126*t121;
  t4550 = t4337 + t4454;
  t181 = -1.*t173;
  t182 = 1. + t181;
  t4011 = t43*t3891*t126;
  t4230 = t4016*t121;
  t4235 = t4011 + t4230;
  t4793 = -1.*t34*t93*t3891;
  t4914 = -1.*t4550*t128;
  t5124 = t4793 + t4914;
  t5342 = t51*t4235;
  t5721 = t5124*t162;
  t5741 = t5342 + t5721;
  t5949 = t51*t5124;
  t5973 = -1.*t4235*t162;
  t6022 = t5949 + t5973;
  t6383 = t43*t3891;
  t6389 = t4016*t126*t121;
  t6393 = t6383 + t6389;
  t6365 = -1.*t4016*t43*t126;
  t6372 = t3891*t121;
  t6375 = t6365 + t6372;
  t6468 = t4016*t34*t93;
  t6471 = -1.*t6393*t128;
  t6552 = t6468 + t6471;
  t6570 = t51*t6375;
  t6573 = t6552*t162;
  t6578 = t6570 + t6573;
  t6600 = t51*t6552;
  t6603 = -1.*t6375*t162;
  t6606 = t6600 + t6603;
  p_output1[0]=-0.1575*t126*t128 - 0.325*t161*t162 + 0.075*t182*t189 + 0.075*t2843*t3068 - 0.0641*(t173*t2843 + t189*t3068) + 0.355*(t173*t189 - 1.*t2843*t3068) - 0.1575*t111*t121*t34 + 0.325*t34*t43*t88 + 0.2255*(t126*t128 - 1.*t121*t34*t93) + var1[0];
  p_output1[1]=0.1575*t128*t34*t3891 + 0.1575*t111*t4550 - 0.325*t162*t5124 + 0.075*t182*t5741 + 0.075*t3068*t6022 - 0.0641*(t3068*t5741 + t173*t6022) + 0.355*(t173*t5741 - 1.*t3068*t6022) + 0.325*t4235*t88 + 0.2255*(-1.*t128*t34*t3891 + t4550*t93) + var1[1];
  p_output1[2]=-0.1575*t128*t34*t4016 + 0.1575*t111*t6393 - 0.325*t162*t6552 + 0.075*t182*t6578 + 0.075*t3068*t6606 - 0.0641*(t3068*t6578 + t173*t6606) + 0.355*(t173*t6578 - 1.*t3068*t6606) + 0.325*t6375*t88 + 0.2255*(t128*t34*t4016 + t6393*t93) + var1[2];
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

#include "FlFoot_sphere_center.hh"

namespace SymFunction
{

void FlFoot_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
