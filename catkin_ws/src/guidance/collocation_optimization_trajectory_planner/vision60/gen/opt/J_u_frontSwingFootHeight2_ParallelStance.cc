/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:48:40 GMT+02:00
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
  double t5608;
  double t5066;
  double t5081;
  double t5185;
  double t5614;
  double t5716;
  double t6025;
  double t6033;
  double t6036;
  double t6039;
  double t6048;
  double t2878;
  double t5519;
  double t5646;
  double t5647;
  double t6103;
  double t6104;
  double t6120;
  double t6124;
  double t6139;
  double t6155;
  double t6166;
  double t6168;
  double t6173;
  double t6174;
  double t6182;
  double t6188;
  double t3591;
  double t5013;
  double t5774;
  double t5995;
  double t6143;
  double t6146;
  double t6314;
  double t6363;
  double t6397;
  double t6531;
  double t6544;
  double t6548;
  double t6576;
  double t6580;
  double t6581;
  double t6906;
  double t6911;
  double t6923;
  double t6969;
  double t6972;
  double t6975;
  double t6990;
  double t7044;
  double t7045;
  double t7048;
  double t7049;
  double t7051;
  double t7092;
  double t7095;
  double t7102;
  double t7078;
  double t7079;
  double t7089;
  double t7181;
  double t7186;
  double t7197;
  double t7222;
  double t7236;
  double t7238;
  double t7203;
  double t7204;
  double t7217;
  double t7460;
  double t7461;
  double t7462;
  t5608 = Cos(var1[3]);
  t5066 = Cos(var1[5]);
  t5081 = Sin(var1[3]);
  t5185 = Sin(var1[4]);
  t5614 = Sin(var1[5]);
  t5716 = Cos(var1[6]);
  t6025 = t5608*t5066;
  t6033 = -1.*t5081*t5185*t5614;
  t6036 = t6025 + t6033;
  t6039 = Cos(var1[4]);
  t6048 = Sin(var1[6]);
  t2878 = Cos(var1[7]);
  t5519 = t5066*t5081*t5185;
  t5646 = t5608*t5614;
  t5647 = t5519 + t5646;
  t6103 = -1.*t6039*t5716*t5081;
  t6104 = -1.*t6036*t6048;
  t6120 = t6103 + t6104;
  t6124 = Sin(var1[7]);
  t6139 = Cos(var1[8]);
  t6155 = t2878*t5647;
  t6166 = t6120*t6124;
  t6168 = t6155 + t6166;
  t6173 = t2878*t6120;
  t6174 = -1.*t5647*t6124;
  t6182 = t6173 + t6174;
  t6188 = Sin(var1[8]);
  t3591 = -1.*t2878;
  t5013 = 1. + t3591;
  t5774 = -1.*t5716;
  t5995 = 1. + t5774;
  t6143 = -1.*t6139;
  t6146 = 1. + t6143;
  t6314 = -1.*t5608*t5716*t5185;
  t6363 = -1.*t5608*t6039*t5614*t6048;
  t6397 = t6314 + t6363;
  t6531 = -1.*t5608*t6039*t5066*t2878;
  t6544 = t6397*t6124;
  t6548 = t6531 + t6544;
  t6576 = t2878*t6397;
  t6580 = t5608*t6039*t5066*t6124;
  t6581 = t6576 + t6580;
  t6906 = t5608*t5066*t5185;
  t6911 = -1.*t5081*t5614;
  t6923 = t6906 + t6911;
  t6969 = t5066*t5081;
  t6972 = t5608*t5185*t5614;
  t6975 = t6969 + t6972;
  t6990 = t2878*t6975;
  t7044 = -1.*t6923*t6048*t6124;
  t7045 = t6990 + t7044;
  t7048 = -1.*t2878*t6923*t6048;
  t7049 = -1.*t6975*t6124;
  t7051 = t7048 + t7049;
  t7092 = -1.*t5716*t6975;
  t7095 = -1.*t5608*t6039*t6048;
  t7102 = t7092 + t7095;
  t7078 = t5608*t6039*t5716;
  t7079 = -1.*t6975*t6048;
  t7089 = t7078 + t7079;
  t7181 = -1.*t5608*t5066*t5185;
  t7186 = t5081*t5614;
  t7197 = t7181 + t7186;
  t7222 = -1.*t2878*t7197;
  t7236 = -1.*t7089*t6124;
  t7238 = t7222 + t7236;
  t7203 = t2878*t7089;
  t7204 = -1.*t7197*t6124;
  t7217 = t7203 + t7204;
  t7460 = t2878*t7197;
  t7461 = t7089*t6124;
  t7462 = t7460 + t7461;
  p_output1[0]=1.;
  p_output1[1]=0.325*t5013*t5647 + 0.1575*t5995*t6036 + 0.1575*t5081*t6039*t6048 + 0.2255*(t5716*t6036 - 1.*t5081*t6039*t6048) - 0.325*t6120*t6124 + 0.075*t6146*t6168 + 0.075*t6182*t6188 - 0.0641*(t6139*t6182 + t6168*t6188) + 0.355*(t6139*t6168 - 1.*t6182*t6188);
  p_output1[2]=-0.325*t5013*t5066*t5608*t6039 + 0.1575*t5608*t5614*t5995*t6039 + 0.1575*t5185*t5608*t6048 + 0.2255*(t5608*t5614*t5716*t6039 - 1.*t5185*t5608*t6048) - 0.325*t6124*t6397 + 0.075*t6146*t6548 + 0.075*t6188*t6581 - 0.0641*(t6188*t6548 + t6139*t6581) + 0.355*(t6139*t6548 - 1.*t6188*t6581);
  p_output1[3]=0.2255*t5716*t6923 + 0.1575*t5995*t6923 + 0.325*t6048*t6124*t6923 + 0.325*t5013*t6975 + 0.075*t6146*t7045 + 0.075*t6188*t7051 - 0.0641*(t6188*t7045 + t6139*t7051) + 0.355*(t6139*t7045 - 1.*t6188*t7051);
  p_output1[4]=-0.1575*t5608*t5716*t6039 + 0.1575*t6048*t6975 + 0.2255*t7089 - 0.325*t6124*t7102 + 0.075*t6124*t6146*t7102 + 0.075*t2878*t6188*t7102 + 0.355*(t6124*t6139*t7102 - 1.*t2878*t6188*t7102) - 0.0641*(t2878*t6139*t7102 + t6124*t6188*t7102);
  p_output1[5]=-0.325*t2878*t7089 + 0.325*t6124*t7197 + 0.075*t6146*t7217 + 0.075*t6188*t7238 - 0.0641*(t6188*t7217 + t6139*t7238) + 0.355*(t6139*t7217 - 1.*t6188*t7238);
  p_output1[6]=0.075*t6139*t7217 + 0.075*t6188*t7462 - 0.0641*(-1.*t6188*t7217 + t6139*t7462) + 0.355*(-1.*t6139*t7217 - 1.*t6188*t7462);
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

#include "J_u_frontSwingFootHeight2_ParallelStance.hh"

namespace ParallelStance
{

void J_u_frontSwingFootHeight2_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
