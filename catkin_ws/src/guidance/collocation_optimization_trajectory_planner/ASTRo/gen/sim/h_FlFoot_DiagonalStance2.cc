/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:20:39 GMT+02:00
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
  double t8;
  double t87;
  double t91;
  double t482;
  double t676;
  double t8413;
  double t39;
  double t13951;
  double t17632;
  double t17658;
  double t17663;
  double t17668;
  double t17670;
  double t17676;
  double t17683;
  double t17687;
  double t17688;
  double t17690;
  double t17693;
  double t17694;
  double t17696;
  double t17697;
  double t12260;
  double t12828;
  double t17779;
  double t17776;
  double t14344;
  double t14912;
  double t17777;
  double t17780;
  double t17793;
  double t17795;
  double t17797;
  double t17804;
  double t17656;
  double t17657;
  double t17684;
  double t17686;
  double t17817;
  double t17818;
  double t17819;
  double t17824;
  double t17825;
  double t17826;
  double t17834;
  double t17835;
  double t17837;
  double t17851;
  double t17853;
  double t17855;
  double t17857;
  double t17858;
  double t17859;
  double t17869;
  double t17870;
  double t17875;
  double t17881;
  double t17882;
  double t17883;
  double t17886;
  double t17887;
  double t17888;
  t8 = Cos(var1[4]);
  t87 = Cos(var1[6]);
  t91 = -1.*t87;
  t482 = 1. + t91;
  t676 = 0.15121*t482;
  t8413 = Sin(var1[6]);
  t39 = Sin(var1[5]);
  t13951 = Cos(var1[5]);
  t17632 = Cos(var1[7]);
  t17658 = t8*t13951*t87;
  t17663 = -1.*t8*t39*t8413;
  t17668 = t17658 + t17663;
  t17670 = Sin(var1[4]);
  t17676 = Sin(var1[7]);
  t17683 = Cos(var1[8]);
  t17687 = t17632*t17668;
  t17688 = -1.*t17670*t17676;
  t17690 = t17687 + t17688;
  t17693 = t17632*t17670;
  t17694 = t17668*t17676;
  t17696 = t17693 + t17694;
  t17697 = Sin(var1[8]);
  t12260 = -0.15121*t8413;
  t12828 = t676 + t12260;
  t17779 = Sin(var1[3]);
  t17776 = Cos(var1[3]);
  t14344 = 0.15121*t8413;
  t14912 = t676 + t14344;
  t17777 = t17776*t13951;
  t17780 = -1.*t17779*t17670*t39;
  t17793 = t17777 + t17780;
  t17795 = t13951*t17779*t17670;
  t17797 = t17776*t39;
  t17804 = t17795 + t17797;
  t17656 = -1.*t17632;
  t17657 = 1. + t17656;
  t17684 = -1.*t17683;
  t17686 = 1. + t17684;
  t17817 = t87*t17804;
  t17818 = t17793*t8413;
  t17819 = t17817 + t17818;
  t17824 = t17632*t17819;
  t17825 = t8*t17779*t17676;
  t17826 = t17824 + t17825;
  t17834 = -1.*t8*t17632*t17779;
  t17835 = t17819*t17676;
  t17837 = t17834 + t17835;
  t17851 = t13951*t17779;
  t17853 = t17776*t17670*t39;
  t17855 = t17851 + t17853;
  t17857 = -1.*t17776*t13951*t17670;
  t17858 = t17779*t39;
  t17859 = t17857 + t17858;
  t17869 = t87*t17859;
  t17870 = t17855*t8413;
  t17875 = t17869 + t17870;
  t17881 = t17632*t17875;
  t17882 = -1.*t17776*t8*t17676;
  t17883 = t17881 + t17882;
  t17886 = t17776*t8*t17632;
  t17887 = t17875*t17676;
  t17888 = t17886 + t17887;
  p_output1[0]=0.28121*t17657*t17668 + 0.28121*t17670*t17676 + 0.50321*t17686*t17690 - 0.50321*t17696*t17697 + 0.19821*(t17683*t17690 + t17696*t17697) + t13951*t14912*t8 - 1.*t12828*t39*t8 + 0.15121*(-1.*t13951*t8*t8413 - 1.*t39*t8*t87) + var1[0] - 1.*var2[0];
  p_output1[1]=t12828*t17793 + t14912*t17804 + 0.28121*t17657*t17819 + 0.50321*t17686*t17826 - 0.50321*t17697*t17837 + 0.19821*(t17683*t17826 + t17697*t17837) - 0.28121*t17676*t17779*t8 + 0.15121*(-1.*t17804*t8413 + t17793*t87) + var1[1] - 1.*var2[1];
  p_output1[2]=t12828*t17855 + t14912*t17859 + 0.28121*t17657*t17875 + 0.50321*t17686*t17883 - 0.50321*t17697*t17888 + 0.19821*(t17683*t17883 + t17697*t17888) + 0.28121*t17676*t17776*t8 + 0.15121*(-1.*t17859*t8413 + t17855*t87) + var1[2] - 1.*var2[2];
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

#include "h_FlFoot_DiagonalStance2.hh"

namespace SymFunction
{

void h_FlFoot_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
