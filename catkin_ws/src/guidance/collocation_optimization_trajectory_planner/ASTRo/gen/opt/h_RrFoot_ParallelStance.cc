/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 14:37:15 GMT+02:00
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
  double t2732;
  double t2890;
  double t3369;
  double t3402;
  double t5153;
  double t5474;
  double t2884;
  double t16586;
  double t14925;
  double t15548;
  double t16861;
  double t16868;
  double t16869;
  double t16870;
  double t16929;
  double t16973;
  double t17000;
  double t17021;
  double t17024;
  double t17045;
  double t17047;
  double t17049;
  double t7126;
  double t11658;
  double t17158;
  double t16451;
  double t16552;
  double t17163;
  double t17162;
  double t17169;
  double t17173;
  double t17185;
  double t17186;
  double t17259;
  double t16865;
  double t16866;
  double t16930;
  double t16965;
  double t17332;
  double t17361;
  double t17388;
  double t17443;
  double t17515;
  double t17529;
  double t17553;
  double t17561;
  double t17569;
  double t17831;
  double t17835;
  double t17841;
  double t17873;
  double t17881;
  double t17910;
  double t18444;
  double t18446;
  double t18448;
  double t18462;
  double t18463;
  double t18501;
  double t18503;
  double t18504;
  double t18505;
  t2732 = Cos(var1[4]);
  t2890 = Cos(var1[15]);
  t3369 = -1.*t2890;
  t3402 = 1. + t3369;
  t5153 = -0.15121*t3402;
  t5474 = Sin(var1[15]);
  t2884 = Cos(var1[5]);
  t16586 = Sin(var1[5]);
  t14925 = Sin(var1[16]);
  t15548 = Sin(var1[4]);
  t16861 = Cos(var1[16]);
  t16868 = t2890*t2732*t2884;
  t16869 = -1.*t2732*t5474*t16586;
  t16870 = t16868 + t16869;
  t16929 = Cos(var1[17]);
  t16973 = t14925*t15548;
  t17000 = t16861*t16870;
  t17021 = t16973 + t17000;
  t17024 = Sin(var1[17]);
  t17045 = t16861*t15548;
  t17047 = -1.*t14925*t16870;
  t17049 = t17045 + t17047;
  t7126 = -0.15121*t5474;
  t11658 = t5153 + t7126;
  t17158 = Sin(var1[3]);
  t16451 = 0.15121*t5474;
  t16552 = t5153 + t16451;
  t17163 = Cos(var1[3]);
  t17162 = t2884*t17158*t15548;
  t17169 = t17163*t16586;
  t17173 = t17162 + t17169;
  t17185 = t17163*t2884;
  t17186 = -1.*t17158*t15548*t16586;
  t17259 = t17185 + t17186;
  t16865 = -1.*t16861;
  t16866 = 1. + t16865;
  t16930 = -1.*t16929;
  t16965 = 1. + t16930;
  t17332 = t2890*t17173;
  t17361 = t5474*t17259;
  t17388 = t17332 + t17361;
  t17443 = -1.*t2732*t14925*t17158;
  t17515 = t16861*t17388;
  t17529 = t17443 + t17515;
  t17553 = -1.*t16861*t2732*t17158;
  t17561 = -1.*t14925*t17388;
  t17569 = t17553 + t17561;
  t17831 = -1.*t17163*t2884*t15548;
  t17835 = t17158*t16586;
  t17841 = t17831 + t17835;
  t17873 = t2884*t17158;
  t17881 = t17163*t15548*t16586;
  t17910 = t17873 + t17881;
  t18444 = t2890*t17841;
  t18446 = t5474*t17910;
  t18448 = t18444 + t18446;
  t18462 = t17163*t2732*t14925;
  t18463 = t16861*t18448;
  t18501 = t18462 + t18463;
  t18503 = t16861*t17163*t2732;
  t18504 = -1.*t14925*t18448;
  t18505 = t18503 + t18504;
  p_output1[0]=0.28121*t14925*t15548 - 0.28121*t16866*t16870 - 0.50321*t16965*t17021 - 0.50321*t17024*t17049 - 0.19821*(t16929*t17021 - 1.*t17024*t17049) - 1.*t16552*t16586*t2732 + t11658*t2732*t2884 - 0.15121*(-1.*t16586*t2732*t2890 - 1.*t2732*t2884*t5474) + var1[0] - 1.*var2[0];
  p_output1[1]=t11658*t17173 + t16552*t17259 - 0.28121*t16866*t17388 - 0.50321*t16965*t17529 - 0.50321*t17024*t17569 - 0.19821*(t16929*t17529 - 1.*t17024*t17569) - 0.28121*t14925*t17158*t2732 - 0.15121*(t17259*t2890 - 1.*t17173*t5474) + var1[1] - 1.*var2[1];
  p_output1[2]=t11658*t17841 + t16552*t17910 - 0.28121*t16866*t18448 - 0.50321*t16965*t18501 - 0.50321*t17024*t18505 - 0.19821*(t16929*t18501 - 1.*t17024*t18505) + 0.28121*t14925*t17163*t2732 - 0.15121*(t17910*t2890 - 1.*t17841*t5474) + var1[2] - 1.*var2[2];
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

#include "h_RrFoot_ParallelStance.hh"

namespace ParallelStance
{

void h_RrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
