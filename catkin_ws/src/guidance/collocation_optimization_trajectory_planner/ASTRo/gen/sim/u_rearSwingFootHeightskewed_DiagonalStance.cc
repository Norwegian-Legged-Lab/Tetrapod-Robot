/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 13:02:30 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t6061;
  double t7938;
  double t8389;
  double t8756;
  double t9759;
  double t11290;
  double t11309;
  double t11639;
  double t11447;
  double t11642;
  double t11624;
  double t11647;
  double t11709;
  double t11749;
  double t11750;
  double t11822;
  double t6645;
  double t7162;
  double t11847;
  double t11868;
  double t11883;
  double t11899;
  double t11904;
  double t11955;
  double t11957;
  double t11974;
  double t11978;
  double t11992;
  double t11993;
  double t11997;
  double t11292;
  double t11307;
  double t11723;
  double t11748;
  double t12022;
  double t12039;
  double t12043;
  double t12053;
  double t12057;
  double t12060;
  double t11848;
  double t11849;
  double t11905;
  double t11953;
  double t12308;
  double t12706;
  double t12792;
  double t13603;
  double t13769;
  double t13796;
  double t13856;
  double t13894;
  double t13896;
  double t14697;
  double t14705;
  double t14706;
  double t14713;
  double t14784;
  double t14788;
  double t14913;
  double t14924;
  double t14926;
  t6061 = Cos(var1[3]);
  t7938 = Cos(var1[15]);
  t8389 = -1.*t7938;
  t8756 = 1. + t8389;
  t9759 = -0.15121*t8756;
  t11290 = Sin(var1[15]);
  t11309 = Cos(var1[5]);
  t11639 = Sin(var1[3]);
  t11447 = Sin(var1[4]);
  t11642 = Sin(var1[5]);
  t11624 = -1.*t6061*t11309*t11447;
  t11647 = t11639*t11642;
  t11709 = t11624 + t11647;
  t11749 = t11309*t11639;
  t11750 = t6061*t11447*t11642;
  t11822 = t11749 + t11750;
  t6645 = Cos(var1[4]);
  t7162 = Sin(var1[16]);
  t11847 = Cos(var1[16]);
  t11868 = t7938*t11709;
  t11883 = t11290*t11822;
  t11899 = t11868 + t11883;
  t11904 = Cos(var1[17]);
  t11955 = t6061*t6645*t7162;
  t11957 = t11847*t11899;
  t11974 = t11955 + t11957;
  t11978 = Sin(var1[17]);
  t11992 = t11847*t6061*t6645;
  t11993 = -1.*t7162*t11899;
  t11997 = t11992 + t11993;
  t11292 = -0.15121*t11290;
  t11307 = t9759 + t11292;
  t11723 = 0.15121*t11290;
  t11748 = t9759 + t11723;
  t12022 = t11309*t11639*t11447;
  t12039 = t6061*t11642;
  t12043 = t12022 + t12039;
  t12053 = t6061*t11309;
  t12057 = -1.*t11639*t11447*t11642;
  t12060 = t12053 + t12057;
  t11848 = -1.*t11847;
  t11849 = 1. + t11848;
  t11905 = -1.*t11904;
  t11953 = 1. + t11905;
  t12308 = t7938*t12043;
  t12706 = t11290*t12060;
  t12792 = t12308 + t12706;
  t13603 = -1.*t6645*t7162*t11639;
  t13769 = t11847*t12792;
  t13796 = t13603 + t13769;
  t13856 = -1.*t11847*t6645*t11639;
  t13894 = -1.*t7162*t12792;
  t13896 = t13856 + t13894;
  t14697 = t7938*t6645*t11309;
  t14705 = -1.*t6645*t11290*t11642;
  t14706 = t14697 + t14705;
  t14713 = t7162*t11447;
  t14784 = t11847*t14706;
  t14788 = t14713 + t14784;
  t14913 = t11847*t11447;
  t14924 = -1.*t7162*t14706;
  t14926 = t14913 + t14924;
  p_output1[0]=t11307*t11709 + t11748*t11822 - 0.28121*t11849*t11899 - 0.50321*t11953*t11974 - 0.50321*t11978*t11997 - 0.19821*(t11904*t11974 - 1.*t11978*t11997) + 0.28121*t6061*t6645*t7162 - 0.15121*(-1.*t11290*t11709 + t11822*t7938) + var1[2] - 0.5*(t11307*t12043 + t11748*t12060 - 0.28121*t11849*t12792 - 0.50321*t11953*t13796 - 0.50321*t11978*t13896 - 0.19821*(t11904*t13796 - 1.*t11978*t13896) - 0.28121*t11639*t6645*t7162 - 0.15121*(-1.*t11290*t12043 + t12060*t7938) + var1[1])*var3[0]*(1. + Tanh((-0.28121*t11849*t14706 - 0.50321*t11953*t14788 - 0.50321*t11978*t14926 - 0.19821*(t11904*t14788 - 1.*t11978*t14926) + t11307*t11309*t6645 - 1.*t11642*t11748*t6645 + 0.28121*t11447*t7162 - 0.15121*(-1.*t11290*t11309*t6645 - 1.*t11642*t6645*t7938) + var1[0] - 1.*var2[0])*var4[0]));
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "u_rearSwingFootHeightskewed_DiagonalStance.hh"

namespace SymFunction
{

void u_rearSwingFootHeightskewed_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
