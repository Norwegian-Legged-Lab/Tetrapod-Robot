/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:33:51 GMT+02:00
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
  double t6547;
  double t5529;
  double t5543;
  double t6152;
  double t6575;
  double t6886;
  double t7257;
  double t7285;
  double t7286;
  double t7299;
  double t7310;
  double t197;
  double t6399;
  double t6618;
  double t6632;
  double t7702;
  double t7804;
  double t7887;
  double t7902;
  double t7964;
  double t8045;
  double t8058;
  double t8114;
  double t8188;
  double t8190;
  double t8194;
  double t8348;
  double t3178;
  double t4931;
  double t6915;
  double t6975;
  double t7979;
  double t8029;
  double t8895;
  double t8928;
  double t8991;
  double t9084;
  double t9086;
  double t9097;
  double t9113;
  double t9118;
  double t9121;
  double t9419;
  double t9421;
  double t9503;
  double t9538;
  double t9569;
  double t9627;
  double t9655;
  double t9657;
  double t9678;
  double t9715;
  double t9728;
  double t9734;
  double t9915;
  double t9925;
  double t9928;
  double t9823;
  double t9824;
  double t9835;
  double t9991;
  double t10001;
  double t10004;
  double t10330;
  double t10779;
  double t10787;
  double t10006;
  double t10014;
  double t10024;
  double t10994;
  double t11003;
  double t11019;
  t6547 = Cos(var1[3]);
  t5529 = Cos(var1[5]);
  t5543 = Sin(var1[3]);
  t6152 = Sin(var1[4]);
  t6575 = Sin(var1[5]);
  t6886 = Cos(var1[6]);
  t7257 = t6547*t5529;
  t7285 = -1.*t5543*t6152*t6575;
  t7286 = t7257 + t7285;
  t7299 = Cos(var1[4]);
  t7310 = Sin(var1[6]);
  t197 = Cos(var1[7]);
  t6399 = t5529*t5543*t6152;
  t6618 = t6547*t6575;
  t6632 = t6399 + t6618;
  t7702 = -1.*t7299*t6886*t5543;
  t7804 = -1.*t7286*t7310;
  t7887 = t7702 + t7804;
  t7902 = Sin(var1[7]);
  t7964 = Cos(var1[8]);
  t8045 = t197*t6632;
  t8058 = t7887*t7902;
  t8114 = t8045 + t8058;
  t8188 = t197*t7887;
  t8190 = -1.*t6632*t7902;
  t8194 = t8188 + t8190;
  t8348 = Sin(var1[8]);
  t3178 = -1.*t197;
  t4931 = 1. + t3178;
  t6915 = -1.*t6886;
  t6975 = 1. + t6915;
  t7979 = -1.*t7964;
  t8029 = 1. + t7979;
  t8895 = -1.*t6547*t6886*t6152;
  t8928 = -1.*t6547*t7299*t6575*t7310;
  t8991 = t8895 + t8928;
  t9084 = -1.*t6547*t7299*t5529*t197;
  t9086 = t8991*t7902;
  t9097 = t9084 + t9086;
  t9113 = t197*t8991;
  t9118 = t6547*t7299*t5529*t7902;
  t9121 = t9113 + t9118;
  t9419 = t6547*t5529*t6152;
  t9421 = -1.*t5543*t6575;
  t9503 = t9419 + t9421;
  t9538 = t5529*t5543;
  t9569 = t6547*t6152*t6575;
  t9627 = t9538 + t9569;
  t9655 = t197*t9627;
  t9657 = -1.*t9503*t7310*t7902;
  t9678 = t9655 + t9657;
  t9715 = -1.*t197*t9503*t7310;
  t9728 = -1.*t9627*t7902;
  t9734 = t9715 + t9728;
  t9915 = -1.*t6886*t9627;
  t9925 = -1.*t6547*t7299*t7310;
  t9928 = t9915 + t9925;
  t9823 = t6547*t7299*t6886;
  t9824 = -1.*t9627*t7310;
  t9835 = t9823 + t9824;
  t9991 = -1.*t6547*t5529*t6152;
  t10001 = t5543*t6575;
  t10004 = t9991 + t10001;
  t10330 = -1.*t197*t10004;
  t10779 = -1.*t9835*t7902;
  t10787 = t10330 + t10779;
  t10006 = t197*t9835;
  t10014 = -1.*t10004*t7902;
  t10024 = t10006 + t10014;
  t10994 = t197*t10004;
  t11003 = t9835*t7902;
  t11019 = t10994 + t11003;
  p_output1[0]=1.;
  p_output1[1]=0.325*t4931*t6632 + 0.1575*t6975*t7286 + 0.1575*t5543*t7299*t7310 + 0.2255*(t6886*t7286 - 1.*t5543*t7299*t7310) - 0.325*t7887*t7902 + 0.075*t8029*t8114 + 0.075*t8194*t8348 - 0.0641*(t7964*t8194 + t8114*t8348) + 0.355*(t7964*t8114 - 1.*t8194*t8348);
  p_output1[2]=-0.325*t4931*t5529*t6547*t7299 + 0.1575*t6547*t6575*t6975*t7299 + 0.1575*t6152*t6547*t7310 + 0.2255*(t6547*t6575*t6886*t7299 - 1.*t6152*t6547*t7310) - 0.325*t7902*t8991 + 0.075*t8029*t9097 + 0.075*t8348*t9121 - 0.0641*(t8348*t9097 + t7964*t9121) + 0.355*(t7964*t9097 - 1.*t8348*t9121);
  p_output1[3]=0.2255*t6886*t9503 + 0.1575*t6975*t9503 + 0.325*t7310*t7902*t9503 + 0.325*t4931*t9627 + 0.075*t8029*t9678 + 0.075*t8348*t9734 - 0.0641*(t8348*t9678 + t7964*t9734) + 0.355*(t7964*t9678 - 1.*t8348*t9734);
  p_output1[4]=-0.1575*t6547*t6886*t7299 + 0.1575*t7310*t9627 + 0.2255*t9835 - 0.325*t7902*t9928 + 0.075*t7902*t8029*t9928 + 0.075*t197*t8348*t9928 + 0.355*(t7902*t7964*t9928 - 1.*t197*t8348*t9928) - 0.0641*(t197*t7964*t9928 + t7902*t8348*t9928);
  p_output1[5]=0.325*t10004*t7902 + 0.075*t10024*t8029 + 0.075*t10787*t8348 - 0.0641*(t10787*t7964 + t10024*t8348) + 0.355*(t10024*t7964 - 1.*t10787*t8348) - 0.325*t197*t9835;
  p_output1[6]=0.075*t10024*t7964 + 0.075*t11019*t8348 - 0.0641*(t11019*t7964 - 1.*t10024*t8348) + 0.355*(-1.*t10024*t7964 - 1.*t11019*t8348);
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

#include "J_foot_clearance_FlFoot_ParallelStance.hh"

namespace ParallelStance
{

void J_foot_clearance_FlFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
