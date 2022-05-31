/*
 * Automatically Generated from Mathematica.
 * Sun 22 May 2022 17:22:54 GMT+02:00
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
  double t1730;
  double t10941;
  double t11380;
  double t11822;
  double t12220;
  double t12397;
  double t1964;
  double t13096;
  double t12771;
  double t12938;
  double t14023;
  double t14624;
  double t14629;
  double t15115;
  double t15123;
  double t15156;
  double t15207;
  double t15208;
  double t15226;
  double t15227;
  double t15228;
  double t15235;
  double t12398;
  double t12546;
  double t15451;
  double t13028;
  double t13087;
  double t15487;
  double t15486;
  double t15513;
  double t15546;
  double t15587;
  double t15589;
  double t15635;
  double t14256;
  double t14495;
  double t15136;
  double t15137;
  double t15676;
  double t15688;
  double t15717;
  double t15763;
  double t15766;
  double t15768;
  double t15774;
  double t15781;
  double t15791;
  double t15816;
  double t15817;
  double t15818;
  double t15828;
  double t15833;
  double t15834;
  double t15872;
  double t15874;
  double t15881;
  double t15885;
  double t15886;
  double t15888;
  double t15890;
  double t15897;
  double t15900;
  t1730 = Cos(var1[4]);
  t10941 = Cos(var1[15]);
  t11380 = -1.*t10941;
  t11822 = 1. + t11380;
  t12220 = -0.15121*t11822;
  t12397 = Sin(var1[15]);
  t1964 = Cos(var1[5]);
  t13096 = Sin(var1[5]);
  t12771 = Sin(var1[16]);
  t12938 = Sin(var1[4]);
  t14023 = Cos(var1[16]);
  t14624 = t10941*t1730*t1964;
  t14629 = -1.*t1730*t12397*t13096;
  t15115 = t14624 + t14629;
  t15123 = Cos(var1[17]);
  t15156 = t12771*t12938;
  t15207 = t14023*t15115;
  t15208 = t15156 + t15207;
  t15226 = Sin(var1[17]);
  t15227 = t14023*t12938;
  t15228 = -1.*t12771*t15115;
  t15235 = t15227 + t15228;
  t12398 = -0.15121*t12397;
  t12546 = t12220 + t12398;
  t15451 = Sin(var1[3]);
  t13028 = 0.15121*t12397;
  t13087 = t12220 + t13028;
  t15487 = Cos(var1[3]);
  t15486 = t1964*t15451*t12938;
  t15513 = t15487*t13096;
  t15546 = t15486 + t15513;
  t15587 = t15487*t1964;
  t15589 = -1.*t15451*t12938*t13096;
  t15635 = t15587 + t15589;
  t14256 = -1.*t14023;
  t14495 = 1. + t14256;
  t15136 = -1.*t15123;
  t15137 = 1. + t15136;
  t15676 = t10941*t15546;
  t15688 = t12397*t15635;
  t15717 = t15676 + t15688;
  t15763 = -1.*t1730*t12771*t15451;
  t15766 = t14023*t15717;
  t15768 = t15763 + t15766;
  t15774 = -1.*t14023*t1730*t15451;
  t15781 = -1.*t12771*t15717;
  t15791 = t15774 + t15781;
  t15816 = -1.*t15487*t1964*t12938;
  t15817 = t15451*t13096;
  t15818 = t15816 + t15817;
  t15828 = t1964*t15451;
  t15833 = t15487*t12938*t13096;
  t15834 = t15828 + t15833;
  t15872 = t10941*t15818;
  t15874 = t12397*t15834;
  t15881 = t15872 + t15874;
  t15885 = t15487*t1730*t12771;
  t15886 = t14023*t15881;
  t15888 = t15885 + t15886;
  t15890 = t14023*t15487*t1730;
  t15897 = -1.*t12771*t15881;
  t15900 = t15890 + t15897;
  p_output1[0]=0.28121*t12771*t12938 - 0.28121*t14495*t15115 - 0.50321*t15137*t15208 - 0.50321*t15226*t15235 - 0.23321*(t15123*t15208 - 1.*t15226*t15235) - 1.*t13087*t13096*t1730 + t12546*t1730*t1964 - 0.15121*(-1.*t10941*t13096*t1730 - 1.*t12397*t1730*t1964) + var1[0] - 1.*var2[0];
  p_output1[1]=t12546*t15546 + t13087*t15635 - 0.15121*(-1.*t12397*t15546 + t10941*t15635) - 0.28121*t14495*t15717 - 0.50321*t15137*t15768 - 0.50321*t15226*t15791 - 0.23321*(t15123*t15768 - 1.*t15226*t15791) - 0.28121*t12771*t15451*t1730 + var1[1] - 1.*var2[1];
  p_output1[2]=t12546*t15818 + t13087*t15834 - 0.15121*(-1.*t12397*t15818 + t10941*t15834) - 0.28121*t14495*t15881 - 0.50321*t15137*t15888 - 0.50321*t15226*t15900 - 0.23321*(t15123*t15888 - 1.*t15226*t15900) + 0.28121*t12771*t15487*t1730 + var1[2] - 1.*var2[2];
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

#include "h_RrFoot_ParallelStance.hh"

namespace SymFunction
{

void h_RrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
