/*
 * Automatically Generated from Mathematica.
 * Thu 26 May 2022 14:48:51 GMT+02:00
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
  double t16284;
  double t16521;
  double t16539;
  double t16547;
  double t16549;
  double t16551;
  double t16607;
  double t16574;
  double t16586;
  double t16623;
  double t16594;
  double t16647;
  double t16656;
  double t16668;
  double t16675;
  double t16679;
  double t9117;
  double t16117;
  double t16701;
  double t16705;
  double t16709;
  double t16711;
  double t16713;
  double t16772;
  double t16774;
  double t16775;
  double t16778;
  double t16779;
  double t16791;
  double t16796;
  double t16548;
  double t16554;
  double t16661;
  double t16667;
  double t16702;
  double t16704;
  double t16724;
  double t16755;
  double t16879;
  double t16883;
  double t16885;
  double t16898;
  double t16904;
  double t16905;
  double t16913;
  double t16915;
  double t16918;
  double t16937;
  double t16938;
  double t16939;
  double t16946;
  double t16964;
  double t16979;
  double t17005;
  double t17010;
  double t17014;
  double t17060;
  double t17063;
  double t17064;
  double t17065;
  double t17069;
  double t17073;
  double t17041;
  double t17116;
  double t17135;
  double t17137;
  double t17139;
  double t17140;
  double t17141;
  double t17143;
  double t17148;
  double t17151;
  double t17214;
  double t17217;
  double t17234;
  t16284 = Sin(var1[3]);
  t16521 = Cos(var1[12]);
  t16539 = -1.*t16521;
  t16547 = 1. + t16539;
  t16549 = Sin(var1[12]);
  t16551 = -0.15121*t16549;
  t16607 = Cos(var1[3]);
  t16574 = Cos(var1[5]);
  t16586 = Sin(var1[4]);
  t16623 = Sin(var1[5]);
  t16594 = t16574*t16284*t16586;
  t16647 = t16607*t16623;
  t16656 = t16594 + t16647;
  t16668 = t16607*t16574;
  t16675 = -1.*t16284*t16586*t16623;
  t16679 = t16668 + t16675;
  t9117 = Cos(var1[4]);
  t16117 = Sin(var1[13]);
  t16701 = Cos(var1[13]);
  t16705 = t16521*t16656;
  t16709 = t16549*t16679;
  t16711 = t16705 + t16709;
  t16713 = Cos(var1[14]);
  t16772 = t9117*t16117*t16284;
  t16774 = t16701*t16711;
  t16775 = t16772 + t16774;
  t16778 = Sin(var1[14]);
  t16779 = -1.*t16701*t9117*t16284;
  t16791 = t16117*t16711;
  t16796 = t16779 + t16791;
  t16548 = 0.15121*t16547;
  t16554 = t16548 + t16551;
  t16661 = -0.15121*t16547;
  t16667 = t16661 + t16551;
  t16702 = -1.*t16701;
  t16704 = 1. + t16702;
  t16724 = -1.*t16713;
  t16755 = 1. + t16724;
  t16879 = -1.*t16521*t16607*t9117*t16574;
  t16883 = t16607*t9117*t16549*t16623;
  t16885 = t16879 + t16883;
  t16898 = t16607*t16117*t16586;
  t16904 = t16701*t16885;
  t16905 = t16898 + t16904;
  t16913 = -1.*t16701*t16607*t16586;
  t16915 = t16117*t16885;
  t16918 = t16913 + t16915;
  t16937 = t16607*t16574*t16586;
  t16938 = -1.*t16284*t16623;
  t16939 = t16937 + t16938;
  t16946 = t16574*t16284;
  t16964 = t16607*t16586*t16623;
  t16979 = t16946 + t16964;
  t17005 = t16549*t16939;
  t17010 = t16521*t16979;
  t17014 = t17005 + t17010;
  t17060 = -0.15121*t16521;
  t17063 = -1.*t16607*t16574*t16586;
  t17064 = t16284*t16623;
  t17065 = t17063 + t17064;
  t17069 = -1.*t16549*t17065;
  t17073 = t17069 + t17010;
  t17041 = -1.*t16549*t16979;
  t17116 = t16521*t17065;
  t17135 = t16549*t16979;
  t17137 = t17116 + t17135;
  t17139 = -1.*t16607*t9117*t16117;
  t17140 = t16701*t17137;
  t17141 = t17139 + t17140;
  t17143 = -1.*t16701*t16607*t9117;
  t17148 = -1.*t16117*t17137;
  t17151 = t17143 + t17148;
  t17214 = t16701*t16607*t9117;
  t17217 = t16117*t17137;
  t17234 = t17214 + t17217;
  p_output1[0]=1.;
  p_output1[1]=t16554*t16656 + t16667*t16679 - 0.15121*(-1.*t16549*t16656 + t16521*t16679) + 0.28121*t16704*t16711 + 0.50321*t16755*t16775 - 0.50321*t16778*t16796 + 0.19821*(t16713*t16775 + t16778*t16796) - 0.28121*t16117*t16284*t9117;
  p_output1[2]=-0.28121*t16117*t16586*t16607 + 0.28121*t16704*t16885 + 0.50321*t16755*t16905 - 0.50321*t16778*t16918 + 0.19821*(t16713*t16905 + t16778*t16918) - 1.*t16554*t16574*t16607*t9117 + t16607*t16623*t16667*t9117 - 0.15121*(t16549*t16574*t16607*t9117 + t16521*t16607*t16623*t9117);
  p_output1[3]=t16667*t16939 + t16554*t16979 + 0.28121*t16704*t17014 + 0.50321*t16701*t16755*t17014 - 0.50321*t16117*t16778*t17014 + 0.19821*(t16701*t16713*t17014 + t16117*t16778*t17014) - 0.15121*(t16521*t16939 + t17041);
  p_output1[4]=t16979*(t16551 + t17060) + (0.15121*t16549 + t17060)*t17065 - 0.15121*(t17041 - 1.*t16521*t17065) + 0.28121*t16704*t17073 + 0.50321*t16701*t16755*t17073 - 0.50321*t16117*t16778*t17073 + 0.19821*(t16701*t16713*t17073 + t16117*t16778*t17073);
  p_output1[5]=0.28121*t16117*t17137 - 0.50321*t16778*t17141 + 0.50321*t16755*t17151 + 0.19821*(t16778*t17141 + t16713*t17151) + 0.28121*t16607*t16701*t9117;
  p_output1[6]=0.50321*t16778*t17141 - 0.50321*t16713*t17234 + 0.19821*(-1.*t16778*t17141 + t16713*t17234);
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

#include "J_swing_position_FrFoot_ParallelStance.hh"

namespace ParallelStance
{

void J_swing_position_FrFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
