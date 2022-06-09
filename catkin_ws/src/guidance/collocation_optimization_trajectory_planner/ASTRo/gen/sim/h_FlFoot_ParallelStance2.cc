/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:38:01 GMT+02:00
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
  double t3845;
  double t3944;
  double t16401;
  double t16444;
  double t16523;
  double t16524;
  double t3926;
  double t16548;
  double t16585;
  double t16589;
  double t16591;
  double t16592;
  double t16594;
  double t16595;
  double t16600;
  double t16608;
  double t16613;
  double t16653;
  double t16659;
  double t16660;
  double t16663;
  double t16664;
  double t16533;
  double t16542;
  double t16678;
  double t16673;
  double t16552;
  double t16558;
  double t16676;
  double t16679;
  double t16680;
  double t16682;
  double t16685;
  double t16686;
  double t16586;
  double t16587;
  double t16603;
  double t16607;
  double t16695;
  double t16696;
  double t16697;
  double t16700;
  double t16701;
  double t16702;
  double t16704;
  double t16705;
  double t16706;
  double t16716;
  double t16717;
  double t16718;
  double t16721;
  double t16722;
  double t16724;
  double t16730;
  double t16731;
  double t16732;
  double t16735;
  double t16736;
  double t16737;
  double t16739;
  double t16740;
  double t16741;
  t3845 = Cos(var1[4]);
  t3944 = Cos(var1[6]);
  t16401 = -1.*t3944;
  t16444 = 1. + t16401;
  t16523 = 0.15121*t16444;
  t16524 = Sin(var1[6]);
  t3926 = Sin(var1[5]);
  t16548 = Cos(var1[5]);
  t16585 = Cos(var1[7]);
  t16589 = t3845*t16548*t3944;
  t16591 = -1.*t3845*t3926*t16524;
  t16592 = t16589 + t16591;
  t16594 = Sin(var1[4]);
  t16595 = Sin(var1[7]);
  t16600 = Cos(var1[8]);
  t16608 = t16585*t16592;
  t16613 = -1.*t16594*t16595;
  t16653 = t16608 + t16613;
  t16659 = t16585*t16594;
  t16660 = t16592*t16595;
  t16663 = t16659 + t16660;
  t16664 = Sin(var1[8]);
  t16533 = -0.15121*t16524;
  t16542 = t16523 + t16533;
  t16678 = Sin(var1[3]);
  t16673 = Cos(var1[3]);
  t16552 = 0.15121*t16524;
  t16558 = t16523 + t16552;
  t16676 = t16673*t16548;
  t16679 = -1.*t16678*t16594*t3926;
  t16680 = t16676 + t16679;
  t16682 = t16548*t16678*t16594;
  t16685 = t16673*t3926;
  t16686 = t16682 + t16685;
  t16586 = -1.*t16585;
  t16587 = 1. + t16586;
  t16603 = -1.*t16600;
  t16607 = 1. + t16603;
  t16695 = t3944*t16686;
  t16696 = t16680*t16524;
  t16697 = t16695 + t16696;
  t16700 = t16585*t16697;
  t16701 = t3845*t16678*t16595;
  t16702 = t16700 + t16701;
  t16704 = -1.*t3845*t16585*t16678;
  t16705 = t16697*t16595;
  t16706 = t16704 + t16705;
  t16716 = t16548*t16678;
  t16717 = t16673*t16594*t3926;
  t16718 = t16716 + t16717;
  t16721 = -1.*t16673*t16548*t16594;
  t16722 = t16678*t3926;
  t16724 = t16721 + t16722;
  t16730 = t3944*t16724;
  t16731 = t16718*t16524;
  t16732 = t16730 + t16731;
  t16735 = t16585*t16732;
  t16736 = -1.*t16673*t3845*t16595;
  t16737 = t16735 + t16736;
  t16739 = t16673*t3845*t16585;
  t16740 = t16732*t16595;
  t16741 = t16739 + t16740;
  p_output1[0]=0.28121*t16587*t16592 + 0.28121*t16594*t16595 + 0.50321*t16607*t16653 - 0.50321*t16663*t16664 + 0.19821*(t16600*t16653 + t16663*t16664) + t16548*t16558*t3845 - 1.*t16542*t3845*t3926 + 0.15121*(-1.*t16524*t16548*t3845 - 1.*t3845*t3926*t3944) + var1[0] - 1.*var2[0];
  p_output1[1]=t16542*t16680 + t16558*t16686 + 0.28121*t16587*t16697 + 0.50321*t16607*t16702 - 0.50321*t16664*t16706 + 0.19821*(t16600*t16702 + t16664*t16706) - 0.28121*t16595*t16678*t3845 + 0.15121*(-1.*t16524*t16686 + t16680*t3944) + var1[1] - 1.*var2[1];
  p_output1[2]=t16542*t16718 + t16558*t16724 + 0.28121*t16587*t16732 + 0.50321*t16607*t16737 - 0.50321*t16664*t16741 + 0.19821*(t16600*t16737 + t16664*t16741) + 0.28121*t16595*t16673*t3845 + 0.15121*(-1.*t16524*t16724 + t16718*t3944) + var1[2] - 1.*var2[2];
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
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

#include "h_FlFoot_ParallelStance2.hh"

namespace SymFunction
{

void h_FlFoot_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
