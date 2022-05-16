/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:32:29 GMT+02:00
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
  double t6575;
  double t6787;
  double t6768;
  double t6781;
  double t6788;
  double t3814;
  double t6564;
  double t6840;
  double t6892;
  double t6896;
  double t6897;
  double t6909;
  double t6782;
  double t6789;
  double t6819;
  double t6588;
  double t6910;
  double t6911;
  double t6912;
  double t6924;
  double t6925;
  double t6940;
  double t6941;
  double t6943;
  double t6953;
  double t6954;
  double t6964;
  double t6724;
  double t6750;
  double t6846;
  double t6875;
  double t7171;
  double t7172;
  double t7176;
  double t6946;
  double t6947;
  double t7206;
  double t7208;
  double t7212;
  double t7214;
  double t7217;
  double t7219;
  double t7342;
  double t7344;
  double t7349;
  double t7370;
  double t7373;
  double t7375;
  double t7401;
  double t7402;
  double t7403;
  double t7409;
  double t7410;
  double t7412;
  double t7526;
  double t7539;
  double t7575;
  double t7601;
  double t7604;
  double t7616;
  double t7702;
  double t7728;
  double t7749;
  double t7782;
  double t7797;
  double t7800;
  double t7847;
  double t8311;
  double t8353;
  double t9182;
  double t9205;
  double t9435;
  t6575 = Sin(var1[3]);
  t6787 = Cos(var1[3]);
  t6768 = Cos(var1[5]);
  t6781 = Sin(var1[4]);
  t6788 = Sin(var1[5]);
  t3814 = Cos(var1[4]);
  t6564 = Sin(var1[9]);
  t6840 = Cos(var1[9]);
  t6892 = t6787*t6768;
  t6896 = -1.*t6575*t6781*t6788;
  t6897 = t6892 + t6896;
  t6909 = Sin(var1[10]);
  t6782 = t6768*t6575*t6781;
  t6789 = t6787*t6788;
  t6819 = t6782 + t6789;
  t6588 = Cos(var1[10]);
  t6910 = -1.*t6840*t3814*t6575;
  t6911 = -1.*t6564*t6897;
  t6912 = t6910 + t6911;
  t6924 = Sin(var1[11]);
  t6925 = -1.*t6909*t6819;
  t6940 = t6588*t6912;
  t6941 = t6925 + t6940;
  t6943 = Cos(var1[11]);
  t6953 = t6588*t6819;
  t6954 = t6909*t6912;
  t6964 = t6953 + t6954;
  t6724 = -1.*t6588;
  t6750 = 1. + t6724;
  t6846 = -1.*t6840;
  t6875 = 1. + t6846;
  t7171 = -1.*t6840*t6787*t6781;
  t7172 = -1.*t6787*t3814*t6564*t6788;
  t7176 = t7171 + t7172;
  t6946 = -1.*t6943;
  t6947 = 1. + t6946;
  t7206 = t6787*t3814*t6768*t6909;
  t7208 = t6588*t7176;
  t7212 = t7206 + t7208;
  t7214 = -1.*t6588*t6787*t3814*t6768;
  t7217 = t6909*t7176;
  t7219 = t7214 + t7217;
  t7342 = t6787*t6768*t6781;
  t7344 = -1.*t6575*t6788;
  t7349 = t7342 + t7344;
  t7370 = t6768*t6575;
  t7373 = t6787*t6781*t6788;
  t7375 = t7370 + t7373;
  t7401 = -1.*t6564*t6909*t7349;
  t7402 = t6588*t7375;
  t7403 = t7401 + t7402;
  t7409 = -1.*t6588*t6564*t7349;
  t7410 = -1.*t6909*t7375;
  t7412 = t7409 + t7410;
  t7526 = -1.*t6787*t3814*t6564;
  t7539 = -1.*t6840*t7375;
  t7575 = t7526 + t7539;
  t7601 = t6840*t6787*t3814;
  t7604 = -1.*t6564*t7375;
  t7616 = t7601 + t7604;
  t7702 = -1.*t6787*t6768*t6781;
  t7728 = t6575*t6788;
  t7749 = t7702 + t7728;
  t7782 = -1.*t6909*t7749;
  t7797 = t6588*t7616;
  t7800 = t7782 + t7797;
  t7847 = -1.*t6588*t7749;
  t8311 = -1.*t6909*t7616;
  t8353 = t7847 + t8311;
  t9182 = t6588*t7749;
  t9205 = t6909*t7616;
  t9435 = t9182 + t9205;
  p_output1[0]=1.;
  p_output1[1]=0.1575*t3814*t6564*t6575 - 0.325*t6750*t6819 + 0.1575*t6875*t6897 + 0.2255*(-1.*t3814*t6564*t6575 + t6840*t6897) + 0.325*t6909*t6912 - 0.575*t6924*t6941 - 0.575*t6947*t6964 - 0.0641*(t6941*t6943 + t6924*t6964) - 0.295*(-1.*t6924*t6941 + t6943*t6964);
  p_output1[2]=0.325*t3814*t6750*t6768*t6787 + 0.1575*t6564*t6781*t6787 + 0.2255*(-1.*t6564*t6781*t6787 + t3814*t6787*t6788*t6840) + 0.1575*t3814*t6787*t6788*t6875 + 0.325*t6909*t7176 - 0.575*t6924*t7212 - 0.575*t6947*t7219 - 0.0641*(t6943*t7212 + t6924*t7219) - 0.295*(-1.*t6924*t7212 + t6943*t7219);
  p_output1[3]=0.2255*t6840*t7349 + 0.1575*t6875*t7349 - 0.325*t6564*t6909*t7349 - 0.325*t6750*t7375 - 0.575*t6947*t7403 - 0.575*t6924*t7412 - 0.295*(t6943*t7403 - 1.*t6924*t7412) - 0.0641*(t6924*t7403 + t6943*t7412);
  p_output1[4]=-0.1575*t3814*t6787*t6840 + 0.1575*t6564*t7375 + 0.325*t6909*t7575 - 0.575*t6588*t6924*t7575 - 0.575*t6909*t6947*t7575 - 0.0641*(t6909*t6924*t7575 + t6588*t6943*t7575) - 0.295*(-1.*t6588*t6924*t7575 + t6909*t6943*t7575) + 0.2255*t7616;
  p_output1[5]=0.325*t6588*t7616 - 0.325*t6909*t7749 - 0.575*t6947*t7800 - 0.575*t6924*t8353 - 0.295*(t6943*t7800 - 1.*t6924*t8353) - 0.0641*(t6924*t7800 + t6943*t8353);
  p_output1[6]=-0.575*t6943*t7800 - 0.575*t6924*t9435 - 0.295*(-1.*t6943*t7800 - 1.*t6924*t9435) - 0.0641*(-1.*t6924*t7800 + t6943*t9435);
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
