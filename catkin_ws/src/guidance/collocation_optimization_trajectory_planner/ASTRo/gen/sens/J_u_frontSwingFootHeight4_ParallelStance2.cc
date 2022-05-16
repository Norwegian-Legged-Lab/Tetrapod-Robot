/*
 * Automatically Generated from Mathematica.
 * Wed 6 Apr 2022 13:11:35 GMT+02:00
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
  double t10618;
  double t11528;
  double t11523;
  double t11526;
  double t11529;
  double t2699;
  double t10617;
  double t11696;
  double t11724;
  double t11726;
  double t11731;
  double t12513;
  double t11527;
  double t11608;
  double t11610;
  double t10620;
  double t12716;
  double t12722;
  double t12726;
  double t12830;
  double t12904;
  double t12908;
  double t12909;
  double t12911;
  double t12966;
  double t13027;
  double t14687;
  double t10624;
  double t10635;
  double t11703;
  double t11710;
  double t15657;
  double t15658;
  double t15673;
  double t12912;
  double t12955;
  double t15676;
  double t15759;
  double t17161;
  double t17172;
  double t17174;
  double t17175;
  double t17216;
  double t17220;
  double t17223;
  double t17246;
  double t17249;
  double t17250;
  double t17253;
  double t17254;
  double t17259;
  double t17264;
  double t17265;
  double t17266;
  double t18237;
  double t18245;
  double t18247;
  double t18384;
  double t18391;
  double t18394;
  double t22190;
  double t22219;
  double t22234;
  double t22269;
  double t22279;
  double t22304;
  double t22351;
  double t23123;
  double t23344;
  double t24041;
  double t24045;
  double t24054;
  t10618 = Sin(var1[3]);
  t11528 = Cos(var1[3]);
  t11523 = Cos(var1[5]);
  t11526 = Sin(var1[4]);
  t11529 = Sin(var1[5]);
  t2699 = Cos(var1[4]);
  t10617 = Sin(var1[12]);
  t11696 = Cos(var1[12]);
  t11724 = t11528*t11523;
  t11726 = -1.*t10618*t11526*t11529;
  t11731 = t11724 + t11726;
  t12513 = Sin(var1[13]);
  t11527 = t11523*t10618*t11526;
  t11608 = t11528*t11529;
  t11610 = t11527 + t11608;
  t10620 = Cos(var1[13]);
  t12716 = -1.*t11696*t2699*t10618;
  t12722 = -1.*t10617*t11731;
  t12726 = t12716 + t12722;
  t12830 = Sin(var1[14]);
  t12904 = -1.*t12513*t11610;
  t12908 = t10620*t12726;
  t12909 = t12904 + t12908;
  t12911 = Cos(var1[14]);
  t12966 = t10620*t11610;
  t13027 = t12513*t12726;
  t14687 = t12966 + t13027;
  t10624 = -1.*t10620;
  t10635 = 1. + t10624;
  t11703 = -1.*t11696;
  t11710 = 1. + t11703;
  t15657 = -1.*t11696*t11528*t11526;
  t15658 = -1.*t11528*t2699*t10617*t11529;
  t15673 = t15657 + t15658;
  t12912 = -1.*t12911;
  t12955 = 1. + t12912;
  t15676 = t11528*t2699*t11523*t12513;
  t15759 = t10620*t15673;
  t17161 = t15676 + t15759;
  t17172 = -1.*t10620*t11528*t2699*t11523;
  t17174 = t12513*t15673;
  t17175 = t17172 + t17174;
  t17216 = t11528*t11523*t11526;
  t17220 = -1.*t10618*t11529;
  t17223 = t17216 + t17220;
  t17246 = t11523*t10618;
  t17249 = t11528*t11526*t11529;
  t17250 = t17246 + t17249;
  t17253 = -1.*t10617*t12513*t17223;
  t17254 = t10620*t17250;
  t17259 = t17253 + t17254;
  t17264 = -1.*t10620*t10617*t17223;
  t17265 = -1.*t12513*t17250;
  t17266 = t17264 + t17265;
  t18237 = -1.*t11528*t2699*t10617;
  t18245 = -1.*t11696*t17250;
  t18247 = t18237 + t18245;
  t18384 = t11696*t11528*t2699;
  t18391 = -1.*t10617*t17250;
  t18394 = t18384 + t18391;
  t22190 = -1.*t11528*t11523*t11526;
  t22219 = t10618*t11529;
  t22234 = t22190 + t22219;
  t22269 = -1.*t12513*t22234;
  t22279 = t10620*t18394;
  t22304 = t22269 + t22279;
  t22351 = -1.*t10620*t22234;
  t23123 = -1.*t12513*t18394;
  t23344 = t22351 + t23123;
  t24041 = t10620*t22234;
  t24045 = t12513*t18394;
  t24054 = t24041 + t24045;
  p_output1[0]=1.;
  p_output1[1]=0.325*t10635*t11610 - 0.1575*t11710*t11731 - 0.325*t12513*t12726 + 0.075*t12830*t12909 + 0.075*t12955*t14687 - 0.0641*(t12909*t12911 + t12830*t14687) + 0.355*(-1.*t12830*t12909 + t12911*t14687) - 0.1575*t10617*t10618*t2699 - 0.2255*(t11696*t11731 - 1.*t10617*t10618*t2699);
  p_output1[2]=-0.1575*t10617*t11526*t11528 - 0.325*t12513*t15673 + 0.075*t12830*t17161 + 0.075*t12955*t17175 - 0.0641*(t12911*t17161 + t12830*t17175) + 0.355*(-1.*t12830*t17161 + t12911*t17175) - 0.325*t10635*t11523*t11528*t2699 - 0.1575*t11528*t11529*t11710*t2699 - 0.2255*(-1.*t10617*t11526*t11528 + t11528*t11529*t11696*t2699);
  p_output1[3]=-0.2255*t11696*t17223 - 0.1575*t11710*t17223 + 0.325*t10617*t12513*t17223 + 0.325*t10635*t17250 + 0.075*t12955*t17259 + 0.075*t12830*t17266 + 0.355*(t12911*t17259 - 1.*t12830*t17266) - 0.0641*(t12830*t17259 + t12911*t17266);
  p_output1[4]=-0.1575*t10617*t17250 - 0.325*t12513*t18247 + 0.075*t10620*t12830*t18247 + 0.075*t12513*t12955*t18247 - 0.0641*(t12513*t12830*t18247 + t10620*t12911*t18247) + 0.355*(-1.*t10620*t12830*t18247 + t12513*t12911*t18247) - 0.2255*t18394 + 0.1575*t11528*t11696*t2699;
  p_output1[5]=-0.325*t10620*t18394 + 0.325*t12513*t22234 + 0.075*t12955*t22304 + 0.075*t12830*t23344 + 0.355*(t12911*t22304 - 1.*t12830*t23344) - 0.0641*(t12830*t22304 + t12911*t23344);
  p_output1[6]=0.075*t12911*t22304 + 0.075*t12830*t24054 + 0.355*(-1.*t12911*t22304 - 1.*t12830*t24054) - 0.0641*(-1.*t12830*t22304 + t12911*t24054);
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

#include "J_u_frontSwingFootHeight4_ParallelStance2.hh"

namespace SymFunction
{

void J_u_frontSwingFootHeight4_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
