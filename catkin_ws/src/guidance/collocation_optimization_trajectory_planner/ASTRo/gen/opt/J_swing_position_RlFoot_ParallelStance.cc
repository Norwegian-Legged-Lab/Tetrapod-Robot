/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:43:44 GMT+02:00
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
  double t32584;
  double t43719;
  double t43740;
  double t43792;
  double t44135;
  double t44190;
  double t44518;
  double t44343;
  double t44479;
  double t44614;
  double t44485;
  double t44626;
  double t44647;
  double t44667;
  double t44671;
  double t44680;
  double t3373;
  double t3539;
  double t44695;
  double t44700;
  double t44702;
  double t44703;
  double t44709;
  double t44728;
  double t44741;
  double t44742;
  double t44748;
  double t44749;
  double t44751;
  double t44755;
  double t44111;
  double t44332;
  double t44658;
  double t44666;
  double t44696;
  double t44697;
  double t44710;
  double t44724;
  double t44782;
  double t44795;
  double t44798;
  double t44803;
  double t44810;
  double t44811;
  double t44815;
  double t44816;
  double t44818;
  double t44828;
  double t44829;
  double t44830;
  double t44833;
  double t44834;
  double t44835;
  double t44838;
  double t44841;
  double t44842;
  double t44869;
  double t44875;
  double t44876;
  double t44879;
  double t44892;
  double t44893;
  double t44848;
  double t44933;
  double t44934;
  double t44936;
  double t44938;
  double t44939;
  double t44940;
  double t44943;
  double t44945;
  double t44946;
  double t44973;
  double t44974;
  double t44975;
  t32584 = Sin(var1[3]);
  t43719 = Cos(var1[9]);
  t43740 = -1.*t43719;
  t43792 = 1. + t43740;
  t44135 = Sin(var1[9]);
  t44190 = 0.15121*t44135;
  t44518 = Cos(var1[3]);
  t44343 = Cos(var1[5]);
  t44479 = Sin(var1[4]);
  t44614 = Sin(var1[5]);
  t44485 = t44343*t32584*t44479;
  t44626 = t44518*t44614;
  t44647 = t44485 + t44626;
  t44667 = t44518*t44343;
  t44671 = -1.*t32584*t44479*t44614;
  t44680 = t44667 + t44671;
  t3373 = Cos(var1[4]);
  t3539 = Sin(var1[10]);
  t44695 = Cos(var1[10]);
  t44700 = t43719*t44647;
  t44702 = t44135*t44680;
  t44703 = t44700 + t44702;
  t44709 = Cos(var1[11]);
  t44728 = -1.*t3373*t3539*t32584;
  t44741 = t44695*t44703;
  t44742 = t44728 + t44741;
  t44748 = Sin(var1[11]);
  t44749 = -1.*t44695*t3373*t32584;
  t44751 = -1.*t3539*t44703;
  t44755 = t44749 + t44751;
  t44111 = -0.15121*t43792;
  t44332 = t44111 + t44190;
  t44658 = 0.15121*t43792;
  t44666 = t44658 + t44190;
  t44696 = -1.*t44695;
  t44697 = 1. + t44696;
  t44710 = -1.*t44709;
  t44724 = 1. + t44710;
  t44782 = -1.*t43719*t44518*t3373*t44343;
  t44795 = t44518*t3373*t44135*t44614;
  t44798 = t44782 + t44795;
  t44803 = -1.*t44518*t3539*t44479;
  t44810 = t44695*t44798;
  t44811 = t44803 + t44810;
  t44815 = -1.*t44695*t44518*t44479;
  t44816 = -1.*t3539*t44798;
  t44818 = t44815 + t44816;
  t44828 = t44518*t44343*t44479;
  t44829 = -1.*t32584*t44614;
  t44830 = t44828 + t44829;
  t44833 = t44343*t32584;
  t44834 = t44518*t44479*t44614;
  t44835 = t44833 + t44834;
  t44838 = t44135*t44830;
  t44841 = t43719*t44835;
  t44842 = t44838 + t44841;
  t44869 = 0.15121*t43719;
  t44875 = -1.*t44518*t44343*t44479;
  t44876 = t32584*t44614;
  t44879 = t44875 + t44876;
  t44892 = -1.*t44135*t44879;
  t44893 = t44892 + t44841;
  t44848 = -1.*t44135*t44835;
  t44933 = t43719*t44879;
  t44934 = t44135*t44835;
  t44936 = t44933 + t44934;
  t44938 = -1.*t44518*t3373*t3539;
  t44939 = -1.*t44695*t44936;
  t44940 = t44938 + t44939;
  t44943 = t44695*t44518*t3373;
  t44945 = -1.*t3539*t44936;
  t44946 = t44943 + t44945;
  t44973 = t44518*t3373*t3539;
  t44974 = t44695*t44936;
  t44975 = t44973 + t44974;
  p_output1[0]=1.;
  p_output1[1]=-0.28121*t32584*t3373*t3539 + t44332*t44647 + t44666*t44680 + 0.15121*(-1.*t44135*t44647 + t43719*t44680) - 0.28121*t44697*t44703 - 0.50321*t44724*t44742 - 0.50321*t44748*t44755 - 0.23321*(t44709*t44742 - 1.*t44748*t44755);
  p_output1[2]=-1.*t3373*t44332*t44343*t44518 - 0.28121*t3539*t44479*t44518 + 0.15121*(t3373*t44135*t44343*t44518 + t3373*t43719*t44518*t44614) + t3373*t44518*t44614*t44666 - 0.28121*t44697*t44798 - 0.50321*t44724*t44811 - 0.50321*t44748*t44818 - 0.23321*(t44709*t44811 - 1.*t44748*t44818);
  p_output1[3]=t44666*t44830 + t44332*t44835 - 0.28121*t44697*t44842 - 0.50321*t44695*t44724*t44842 + 0.50321*t3539*t44748*t44842 - 0.23321*(t44695*t44709*t44842 + t3539*t44748*t44842) + 0.15121*(t43719*t44830 + t44848);
  p_output1[4]=t44835*(t44190 + t44869) + (-0.15121*t44135 + t44869)*t44879 + 0.15121*(t44848 - 1.*t43719*t44879) - 0.28121*t44697*t44893 - 0.50321*t44695*t44724*t44893 + 0.50321*t3539*t44748*t44893 - 0.23321*(t44695*t44709*t44893 + t3539*t44748*t44893);
  p_output1[5]=0.28121*t3373*t44518*t44695 - 0.28121*t3539*t44936 - 0.50321*t44748*t44940 - 0.50321*t44724*t44946 - 0.23321*(-1.*t44748*t44940 + t44709*t44946);
  p_output1[6]=-0.50321*t44709*t44946 - 0.50321*t44748*t44975 - 0.23321*(-1.*t44709*t44946 - 1.*t44748*t44975);
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

#include "J_swing_position_RlFoot_ParallelStance.hh"

namespace ParallelStance
{

void J_swing_position_RlFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
