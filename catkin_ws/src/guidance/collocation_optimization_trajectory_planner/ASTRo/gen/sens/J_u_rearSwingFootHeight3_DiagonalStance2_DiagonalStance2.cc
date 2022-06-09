/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 19:01:37 GMT+02:00
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
  double t2198;
  double t4392;
  double t4695;
  double t4844;
  double t5600;
  double t5983;
  double t8195;
  double t6479;
  double t8012;
  double t8233;
  double t8113;
  double t8769;
  double t8774;
  double t12560;
  double t12631;
  double t12843;
  double t1721;
  double t2153;
  double t14389;
  double t15235;
  double t15286;
  double t15296;
  double t15774;
  double t15827;
  double t15940;
  double t16000;
  double t16269;
  double t16298;
  double t16309;
  double t16320;
  double t5554;
  double t6053;
  double t10857;
  double t11301;
  double t14969;
  double t15077;
  double t15793;
  double t15817;
  double t16685;
  double t16687;
  double t16700;
  double t16728;
  double t16729;
  double t16796;
  double t16956;
  double t16957;
  double t16958;
  double t16985;
  double t16990;
  double t16991;
  double t16996;
  double t16997;
  double t17015;
  double t17022;
  double t17037;
  double t17041;
  double t17212;
  double t17276;
  double t17277;
  double t17278;
  double t17296;
  double t17388;
  double t17171;
  double t17563;
  double t17564;
  double t17566;
  double t17575;
  double t17576;
  double t17579;
  double t17599;
  double t17610;
  double t17628;
  double t17762;
  double t17763;
  double t17773;
  t2198 = Sin(var1[3]);
  t4392 = Cos(var1[9]);
  t4695 = -1.*t4392;
  t4844 = 1. + t4695;
  t5600 = Sin(var1[9]);
  t5983 = 0.15121*t5600;
  t8195 = Cos(var1[3]);
  t6479 = Cos(var1[5]);
  t8012 = Sin(var1[4]);
  t8233 = Sin(var1[5]);
  t8113 = t6479*t2198*t8012;
  t8769 = t8195*t8233;
  t8774 = t8113 + t8769;
  t12560 = t8195*t6479;
  t12631 = -1.*t2198*t8012*t8233;
  t12843 = t12560 + t12631;
  t1721 = Cos(var1[4]);
  t2153 = Sin(var1[10]);
  t14389 = Cos(var1[10]);
  t15235 = t4392*t8774;
  t15286 = t5600*t12843;
  t15296 = t15235 + t15286;
  t15774 = Cos(var1[11]);
  t15827 = -1.*t1721*t2153*t2198;
  t15940 = t14389*t15296;
  t16000 = t15827 + t15940;
  t16269 = Sin(var1[11]);
  t16298 = -1.*t14389*t1721*t2198;
  t16309 = -1.*t2153*t15296;
  t16320 = t16298 + t16309;
  t5554 = -0.15121*t4844;
  t6053 = t5554 + t5983;
  t10857 = 0.15121*t4844;
  t11301 = t10857 + t5983;
  t14969 = -1.*t14389;
  t15077 = 1. + t14969;
  t15793 = -1.*t15774;
  t15817 = 1. + t15793;
  t16685 = -1.*t4392*t8195*t1721*t6479;
  t16687 = t8195*t1721*t5600*t8233;
  t16700 = t16685 + t16687;
  t16728 = -1.*t8195*t2153*t8012;
  t16729 = t14389*t16700;
  t16796 = t16728 + t16729;
  t16956 = -1.*t14389*t8195*t8012;
  t16957 = -1.*t2153*t16700;
  t16958 = t16956 + t16957;
  t16985 = t8195*t6479*t8012;
  t16990 = -1.*t2198*t8233;
  t16991 = t16985 + t16990;
  t16996 = t6479*t2198;
  t16997 = t8195*t8012*t8233;
  t17015 = t16996 + t16997;
  t17022 = t5600*t16991;
  t17037 = t4392*t17015;
  t17041 = t17022 + t17037;
  t17212 = 0.15121*t4392;
  t17276 = -1.*t8195*t6479*t8012;
  t17277 = t2198*t8233;
  t17278 = t17276 + t17277;
  t17296 = -1.*t5600*t17278;
  t17388 = t17296 + t17037;
  t17171 = -1.*t5600*t17015;
  t17563 = t4392*t17278;
  t17564 = t5600*t17015;
  t17566 = t17563 + t17564;
  t17575 = -1.*t8195*t1721*t2153;
  t17576 = -1.*t14389*t17566;
  t17579 = t17575 + t17576;
  t17599 = t14389*t8195*t1721;
  t17610 = -1.*t2153*t17566;
  t17628 = t17599 + t17610;
  t17762 = t8195*t1721*t2153;
  t17763 = t14389*t17566;
  t17773 = t17762 + t17763;
  p_output1[0]=1.;
  p_output1[1]=t11301*t12843 - 0.28121*t15077*t15296 - 0.50321*t15817*t16000 - 0.50321*t16269*t16320 - 0.19821*(t15774*t16000 - 1.*t16269*t16320) - 0.28121*t1721*t2153*t2198 + t6053*t8774 + 0.15121*(t12843*t4392 - 1.*t5600*t8774);
  p_output1[2]=-0.28121*t15077*t16700 - 0.50321*t15817*t16796 - 0.50321*t16269*t16958 - 0.19821*(t15774*t16796 - 1.*t16269*t16958) - 1.*t1721*t6053*t6479*t8195 - 0.28121*t2153*t8012*t8195 + t11301*t1721*t8195*t8233 + 0.15121*(t1721*t5600*t6479*t8195 + t1721*t4392*t8195*t8233);
  p_output1[3]=t11301*t16991 - 0.28121*t15077*t17041 - 0.50321*t14389*t15817*t17041 + 0.50321*t16269*t17041*t2153 - 0.19821*(t14389*t15774*t17041 + t16269*t17041*t2153) + 0.15121*(t17171 + t16991*t4392) + t17015*t6053;
  p_output1[4]=-0.28121*t15077*t17388 - 0.50321*t14389*t15817*t17388 + 0.50321*t16269*t17388*t2153 - 0.19821*(t14389*t15774*t17388 + t16269*t17388*t2153) + 0.15121*(t17171 - 1.*t17278*t4392) + t17278*(t17212 - 0.15121*t5600) + t17015*(t17212 + t5983);
  p_output1[5]=-0.50321*t16269*t17579 - 0.50321*t15817*t17628 - 0.19821*(-1.*t16269*t17579 + t15774*t17628) - 0.28121*t17566*t2153 + 0.28121*t14389*t1721*t8195;
  p_output1[6]=-0.50321*t15774*t17628 - 0.50321*t16269*t17773 - 0.19821*(-1.*t15774*t17628 - 1.*t16269*t17773);
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

#include "J_u_rearSwingFootHeight3_DiagonalStance2_DiagonalStance2.hh"

namespace SymFunction
{

void J_u_rearSwingFootHeight3_DiagonalStance2_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
