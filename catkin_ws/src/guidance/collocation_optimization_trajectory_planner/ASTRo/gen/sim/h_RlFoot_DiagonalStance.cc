/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:40:16 GMT+02:00
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
  double t963;
  double t992;
  double t1010;
  double t1021;
  double t1703;
  double t1821;
  double t971;
  double t7480;
  double t3733;
  double t5243;
  double t15108;
  double t15112;
  double t15182;
  double t15198;
  double t15241;
  double t15817;
  double t15836;
  double t15838;
  double t15845;
  double t15853;
  double t15922;
  double t16050;
  double t1086;
  double t2112;
  double t16073;
  double t5510;
  double t5588;
  double t16077;
  double t16076;
  double t18576;
  double t18607;
  double t19029;
  double t19535;
  double t19536;
  double t15109;
  double t15111;
  double t15420;
  double t15802;
  double t19876;
  double t19913;
  double t20030;
  double t20040;
  double t20078;
  double t20083;
  double t20167;
  double t20168;
  double t20169;
  double t20569;
  double t20596;
  double t20598;
  double t20604;
  double t20612;
  double t20614;
  double t21858;
  double t21881;
  double t22099;
  double t22669;
  double t22766;
  double t22770;
  double t22788;
  double t22789;
  double t22797;
  t963 = Cos(var1[4]);
  t992 = Cos(var1[9]);
  t1010 = -1.*t992;
  t1021 = 1. + t1010;
  t1703 = Sin(var1[9]);
  t1821 = 0.15121*t1703;
  t971 = Cos(var1[5]);
  t7480 = Sin(var1[5]);
  t3733 = Sin(var1[10]);
  t5243 = Sin(var1[4]);
  t15108 = Cos(var1[10]);
  t15112 = t992*t963*t971;
  t15182 = -1.*t963*t1703*t7480;
  t15198 = t15112 + t15182;
  t15241 = Cos(var1[11]);
  t15817 = t3733*t5243;
  t15836 = t15108*t15198;
  t15838 = t15817 + t15836;
  t15845 = Sin(var1[11]);
  t15853 = t15108*t5243;
  t15922 = -1.*t3733*t15198;
  t16050 = t15853 + t15922;
  t1086 = -0.15121*t1021;
  t2112 = t1086 + t1821;
  t16073 = Sin(var1[3]);
  t5510 = 0.15121*t1021;
  t5588 = t5510 + t1821;
  t16077 = Cos(var1[3]);
  t16076 = t971*t16073*t5243;
  t18576 = t16077*t7480;
  t18607 = t16076 + t18576;
  t19029 = t16077*t971;
  t19535 = -1.*t16073*t5243*t7480;
  t19536 = t19029 + t19535;
  t15109 = -1.*t15108;
  t15111 = 1. + t15109;
  t15420 = -1.*t15241;
  t15802 = 1. + t15420;
  t19876 = t992*t18607;
  t19913 = t1703*t19536;
  t20030 = t19876 + t19913;
  t20040 = -1.*t963*t3733*t16073;
  t20078 = t15108*t20030;
  t20083 = t20040 + t20078;
  t20167 = -1.*t15108*t963*t16073;
  t20168 = -1.*t3733*t20030;
  t20169 = t20167 + t20168;
  t20569 = -1.*t16077*t971*t5243;
  t20596 = t16073*t7480;
  t20598 = t20569 + t20596;
  t20604 = t971*t16073;
  t20612 = t16077*t5243*t7480;
  t20614 = t20604 + t20612;
  t21858 = t992*t20598;
  t21881 = t1703*t20614;
  t22099 = t21858 + t21881;
  t22669 = t16077*t963*t3733;
  t22766 = t15108*t22099;
  t22770 = t22669 + t22766;
  t22788 = t15108*t16077*t963;
  t22789 = -1.*t3733*t22099;
  t22797 = t22788 + t22789;
  p_output1[0]=-0.28121*t15111*t15198 - 0.50321*t15802*t15838 - 0.50321*t15845*t16050 - 0.23321*(t15241*t15838 - 1.*t15845*t16050) + 0.28121*t3733*t5243 - 1.*t5588*t7480*t963 + t2112*t963*t971 + 0.15121*(-1.*t1703*t963*t971 - 1.*t7480*t963*t992) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.28121*t15111*t20030 - 0.50321*t15802*t20083 - 0.50321*t15845*t20169 - 0.23321*(t15241*t20083 - 1.*t15845*t20169) + t18607*t2112 + t19536*t5588 - 0.28121*t16073*t3733*t963 + 0.15121*(-1.*t1703*t18607 + t19536*t992) + var1[1] - 1.*var2[1];
  p_output1[2]=t20598*t2112 - 0.28121*t15111*t22099 - 0.50321*t15802*t22770 - 0.50321*t15845*t22797 - 0.23321*(t15241*t22770 - 1.*t15845*t22797) + t20614*t5588 + 0.28121*t16077*t3733*t963 + 0.15121*(-1.*t1703*t20598 + t20614*t992) + var1[2] - 1.*var2[2];
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

#include "h_RlFoot_DiagonalStance.hh"

namespace SymFunction
{

void h_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
