/*
 * Automatically Generated from Mathematica.
 * Sun 22 May 2022 16:55:30 GMT+02:00
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
  double t7532;
  double t7641;
  double t7683;
  double t7693;
  double t7744;
  double t7755;
  double t7607;
  double t7795;
  double t7769;
  double t7773;
  double t7910;
  double t7923;
  double t7930;
  double t7934;
  double t7939;
  double t7947;
  double t7948;
  double t7951;
  double t8057;
  double t8064;
  double t8069;
  double t8073;
  double t7736;
  double t7756;
  double t9804;
  double t7780;
  double t7781;
  double t9851;
  double t9846;
  double t12412;
  double t12867;
  double t13149;
  double t13151;
  double t13152;
  double t7914;
  double t7919;
  double t7941;
  double t7942;
  double t15880;
  double t15881;
  double t15885;
  double t15889;
  double t15890;
  double t15893;
  double t15911;
  double t15912;
  double t15913;
  double t15970;
  double t15981;
  double t15982;
  double t15987;
  double t15988;
  double t15989;
  double t15999;
  double t16000;
  double t16001;
  double t16006;
  double t16007;
  double t16008;
  double t16010;
  double t16015;
  double t16016;
  t7532 = Cos(var1[4]);
  t7641 = Cos(var1[9]);
  t7683 = -1.*t7641;
  t7693 = 1. + t7683;
  t7744 = Sin(var1[9]);
  t7755 = 0.15121*t7744;
  t7607 = Cos(var1[5]);
  t7795 = Sin(var1[5]);
  t7769 = Sin(var1[10]);
  t7773 = Sin(var1[4]);
  t7910 = Cos(var1[10]);
  t7923 = t7641*t7532*t7607;
  t7930 = -1.*t7532*t7744*t7795;
  t7934 = t7923 + t7930;
  t7939 = Cos(var1[11]);
  t7947 = t7769*t7773;
  t7948 = t7910*t7934;
  t7951 = t7947 + t7948;
  t8057 = Sin(var1[11]);
  t8064 = t7910*t7773;
  t8069 = -1.*t7769*t7934;
  t8073 = t8064 + t8069;
  t7736 = -0.15121*t7693;
  t7756 = t7736 + t7755;
  t9804 = Sin(var1[3]);
  t7780 = 0.15121*t7693;
  t7781 = t7780 + t7755;
  t9851 = Cos(var1[3]);
  t9846 = t7607*t9804*t7773;
  t12412 = t9851*t7795;
  t12867 = t9846 + t12412;
  t13149 = t9851*t7607;
  t13151 = -1.*t9804*t7773*t7795;
  t13152 = t13149 + t13151;
  t7914 = -1.*t7910;
  t7919 = 1. + t7914;
  t7941 = -1.*t7939;
  t7942 = 1. + t7941;
  t15880 = t7641*t12867;
  t15881 = t7744*t13152;
  t15885 = t15880 + t15881;
  t15889 = -1.*t7532*t7769*t9804;
  t15890 = t7910*t15885;
  t15893 = t15889 + t15890;
  t15911 = -1.*t7910*t7532*t9804;
  t15912 = -1.*t7769*t15885;
  t15913 = t15911 + t15912;
  t15970 = -1.*t9851*t7607*t7773;
  t15981 = t9804*t7795;
  t15982 = t15970 + t15981;
  t15987 = t7607*t9804;
  t15988 = t9851*t7773*t7795;
  t15989 = t15987 + t15988;
  t15999 = t7641*t15982;
  t16000 = t7744*t15989;
  t16001 = t15999 + t16000;
  t16006 = t9851*t7532*t7769;
  t16007 = t7910*t16001;
  t16008 = t16006 + t16007;
  t16010 = t7910*t9851*t7532;
  t16015 = -1.*t7769*t16001;
  t16016 = t16010 + t16015;
  p_output1[0]=t7532*t7607*t7756 + 0.28121*t7769*t7773 - 1.*t7532*t7781*t7795 + 0.15121*(-1.*t7532*t7607*t7744 - 1.*t7532*t7641*t7795) - 0.28121*t7919*t7934 - 0.50321*t7942*t7951 - 0.50321*t8057*t8073 - 0.23321*(t7939*t7951 - 1.*t8057*t8073) + var1[0] - 1.*var2[0];
  p_output1[1]=0.15121*(t13152*t7641 - 1.*t12867*t7744) + t12867*t7756 + t13152*t7781 - 0.28121*t15885*t7919 - 0.50321*t15893*t7942 - 0.50321*t15913*t8057 - 0.23321*(t15893*t7939 - 1.*t15913*t8057) - 0.28121*t7532*t7769*t9804 + var1[1] - 1.*var2[1];
  p_output1[2]=0.15121*(t15989*t7641 - 1.*t15982*t7744) + t15982*t7756 + t15989*t7781 - 0.28121*t16001*t7919 - 0.50321*t16008*t7942 - 0.50321*t16016*t8057 - 0.23321*(t16008*t7939 - 1.*t16016*t8057) + 0.28121*t7532*t7769*t9851 + var1[2] - 1.*var2[2];
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

#include "h_RlFoot_ParallelStance2.hh"

namespace SymFunction
{

void h_RlFoot_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
