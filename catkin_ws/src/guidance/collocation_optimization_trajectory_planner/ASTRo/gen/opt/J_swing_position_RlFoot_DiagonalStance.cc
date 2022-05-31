/*
 * Automatically Generated from Mathematica.
 * Thu 26 May 2022 14:47:32 GMT+02:00
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
  double t781;
  double t790;
  double t791;
  double t804;
  double t806;
  double t807;
  double t827;
  double t813;
  double t817;
  double t828;
  double t824;
  double t832;
  double t841;
  double t847;
  double t848;
  double t849;
  double t746;
  double t765;
  double t855;
  double t867;
  double t868;
  double t869;
  double t871;
  double t877;
  double t878;
  double t879;
  double t881;
  double t882;
  double t883;
  double t884;
  double t805;
  double t808;
  double t845;
  double t846;
  double t859;
  double t863;
  double t872;
  double t873;
  double t898;
  double t899;
  double t900;
  double t902;
  double t903;
  double t904;
  double t906;
  double t907;
  double t908;
  double t915;
  double t916;
  double t917;
  double t919;
  double t920;
  double t921;
  double t923;
  double t924;
  double t925;
  double t938;
  double t941;
  double t942;
  double t943;
  double t947;
  double t948;
  double t930;
  double t961;
  double t962;
  double t963;
  double t965;
  double t966;
  double t967;
  double t969;
  double t970;
  double t971;
  double t978;
  double t979;
  double t980;
  t781 = Sin(var1[3]);
  t790 = Cos(var1[9]);
  t791 = -1.*t790;
  t804 = 1. + t791;
  t806 = Sin(var1[9]);
  t807 = 0.15121*t806;
  t827 = Cos(var1[3]);
  t813 = Cos(var1[5]);
  t817 = Sin(var1[4]);
  t828 = Sin(var1[5]);
  t824 = t813*t781*t817;
  t832 = t827*t828;
  t841 = t824 + t832;
  t847 = t827*t813;
  t848 = -1.*t781*t817*t828;
  t849 = t847 + t848;
  t746 = Cos(var1[4]);
  t765 = Sin(var1[10]);
  t855 = Cos(var1[10]);
  t867 = t790*t841;
  t868 = t806*t849;
  t869 = t867 + t868;
  t871 = Cos(var1[11]);
  t877 = -1.*t746*t765*t781;
  t878 = t855*t869;
  t879 = t877 + t878;
  t881 = Sin(var1[11]);
  t882 = -1.*t855*t746*t781;
  t883 = -1.*t765*t869;
  t884 = t882 + t883;
  t805 = -0.15121*t804;
  t808 = t805 + t807;
  t845 = 0.15121*t804;
  t846 = t845 + t807;
  t859 = -1.*t855;
  t863 = 1. + t859;
  t872 = -1.*t871;
  t873 = 1. + t872;
  t898 = -1.*t790*t827*t746*t813;
  t899 = t827*t746*t806*t828;
  t900 = t898 + t899;
  t902 = -1.*t827*t765*t817;
  t903 = t855*t900;
  t904 = t902 + t903;
  t906 = -1.*t855*t827*t817;
  t907 = -1.*t765*t900;
  t908 = t906 + t907;
  t915 = t827*t813*t817;
  t916 = -1.*t781*t828;
  t917 = t915 + t916;
  t919 = t813*t781;
  t920 = t827*t817*t828;
  t921 = t919 + t920;
  t923 = t806*t917;
  t924 = t790*t921;
  t925 = t923 + t924;
  t938 = 0.15121*t790;
  t941 = -1.*t827*t813*t817;
  t942 = t781*t828;
  t943 = t941 + t942;
  t947 = -1.*t806*t943;
  t948 = t947 + t924;
  t930 = -1.*t806*t921;
  t961 = t790*t943;
  t962 = t806*t921;
  t963 = t961 + t962;
  t965 = -1.*t827*t746*t765;
  t966 = -1.*t855*t963;
  t967 = t965 + t966;
  t969 = t855*t827*t746;
  t970 = -1.*t765*t963;
  t971 = t969 + t970;
  t978 = t827*t746*t765;
  t979 = t855*t963;
  t980 = t978 + t979;
  p_output1[0]=1.;
  p_output1[1]=-0.28121*t746*t765*t781 + t808*t841 + t846*t849 + 0.15121*(-1.*t806*t841 + t790*t849) - 0.28121*t863*t869 - 0.50321*t873*t879 - 0.50321*t881*t884 - 0.19821*(t871*t879 - 1.*t881*t884);
  p_output1[2]=-1.*t746*t808*t813*t827 - 0.28121*t765*t817*t827 + 0.15121*(t746*t806*t813*t827 + t746*t790*t827*t828) + t746*t827*t828*t846 - 0.28121*t863*t900 - 0.50321*t873*t904 - 0.50321*t881*t908 - 0.19821*(t871*t904 - 1.*t881*t908);
  p_output1[3]=t846*t917 + t808*t921 - 0.28121*t863*t925 - 0.50321*t855*t873*t925 + 0.50321*t765*t881*t925 - 0.19821*(t855*t871*t925 + t765*t881*t925) + 0.15121*(t790*t917 + t930);
  p_output1[4]=t921*(t807 + t938) + (-0.15121*t806 + t938)*t943 + 0.15121*(t930 - 1.*t790*t943) - 0.28121*t863*t948 - 0.50321*t855*t873*t948 + 0.50321*t765*t881*t948 - 0.19821*(t855*t871*t948 + t765*t881*t948);
  p_output1[5]=0.28121*t746*t827*t855 - 0.28121*t765*t963 - 0.50321*t881*t967 - 0.50321*t873*t971 - 0.19821*(-1.*t881*t967 + t871*t971);
  p_output1[6]=-0.50321*t871*t971 - 0.50321*t881*t980 - 0.19821*(-1.*t871*t971 - 1.*t881*t980);
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

#include "J_swing_position_RlFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void J_swing_position_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
