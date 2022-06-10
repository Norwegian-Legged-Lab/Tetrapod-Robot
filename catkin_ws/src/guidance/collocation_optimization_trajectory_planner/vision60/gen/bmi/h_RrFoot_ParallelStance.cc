/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:56:34 GMT+02:00
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
  double t996;
  double t2119;
  double t2133;
  double t3082;
  double t4885;
  double t1513;
  double t8588;
  double t759;
  double t8772;
  double t8830;
  double t8845;
  double t8884;
  double t8913;
  double t8919;
  double t8920;
  double t9564;
  double t9944;
  double t10060;
  double t10100;
  double t941;
  double t987;
  double t13934;
  double t3673;
  double t3710;
  double t15037;
  double t15799;
  double t15805;
  double t15810;
  double t14890;
  double t15747;
  double t15768;
  double t16416;
  double t16477;
  double t16489;
  double t9639;
  double t9830;
  double t16607;
  double t16636;
  double t16642;
  double t16657;
  double t16666;
  double t16707;
  double t17783;
  double t17785;
  double t17872;
  double t17681;
  double t17685;
  double t17771;
  double t17887;
  double t17894;
  double t17898;
  double t18000;
  double t18004;
  double t18008;
  double t18026;
  double t18028;
  double t18043;
  t996 = Cos(var1[4]);
  t2119 = Sin(var1[15]);
  t2133 = Sin(var1[4]);
  t3082 = Cos(var1[15]);
  t4885 = Sin(var1[5]);
  t1513 = Cos(var1[5]);
  t8588 = Sin(var1[16]);
  t759 = Cos(var1[16]);
  t8772 = t3082*t2133;
  t8830 = t996*t2119*t4885;
  t8845 = t8772 + t8830;
  t8884 = Sin(var1[17]);
  t8913 = -1.*t996*t1513*t8588;
  t8919 = t759*t8845;
  t8920 = t8913 + t8919;
  t9564 = Cos(var1[17]);
  t9944 = t759*t996*t1513;
  t10060 = t8588*t8845;
  t10100 = t9944 + t10060;
  t941 = -1.*t759;
  t987 = 1. + t941;
  t13934 = Sin(var1[3]);
  t3673 = -1.*t3082;
  t3710 = 1. + t3673;
  t15037 = Cos(var1[3]);
  t15799 = t15037*t1513;
  t15805 = -1.*t13934*t2133*t4885;
  t15810 = t15799 + t15805;
  t14890 = t1513*t13934*t2133;
  t15747 = t15037*t4885;
  t15768 = t14890 + t15747;
  t16416 = -1.*t3082*t996*t13934;
  t16477 = -1.*t2119*t15810;
  t16489 = t16416 + t16477;
  t9639 = -1.*t9564;
  t9830 = 1. + t9639;
  t16607 = -1.*t8588*t15768;
  t16636 = t759*t16489;
  t16642 = t16607 + t16636;
  t16657 = t759*t15768;
  t16666 = t8588*t16489;
  t16707 = t16657 + t16666;
  t17783 = t1513*t13934;
  t17785 = t15037*t2133*t4885;
  t17872 = t17783 + t17785;
  t17681 = -1.*t15037*t1513*t2133;
  t17685 = t13934*t4885;
  t17771 = t17681 + t17685;
  t17887 = t3082*t15037*t996;
  t17894 = -1.*t2119*t17872;
  t17898 = t17887 + t17894;
  t18000 = -1.*t8588*t17771;
  t18004 = t759*t17898;
  t18008 = t18000 + t18004;
  t18026 = t759*t17771;
  t18028 = t8588*t17898;
  t18043 = t18026 + t18028;
  p_output1[0]=0.1575*t2119*t2133 + 0.325*t8588*t8845 - 0.575*t8884*t8920 - 0.295*(-1.*t8884*t8920 + t10100*t9564) - 0.0641*(t10100*t8884 + t8920*t9564) - 0.575*t10100*t9830 + 0.1575*t3710*t4885*t996 - 0.325*t1513*t987*t996 - 0.2255*(t2119*t2133 - 1.*t3082*t4885*t996) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.1575*t15810*t3710 + 0.325*t16489*t8588 - 0.575*t16642*t8884 - 0.0641*(t16707*t8884 + t16642*t9564) - 0.295*(-1.*t16642*t8884 + t16707*t9564) - 0.575*t16707*t9830 - 0.325*t15768*t987 - 0.1575*t13934*t2119*t996 - 0.2255*(t15810*t3082 - 1.*t13934*t2119*t996) + var1[1] - 1.*var2[1];
  p_output1[2]=-0.1575*t17872*t3710 + 0.325*t17898*t8588 - 0.575*t18008*t8884 - 0.0641*(t18043*t8884 + t18008*t9564) - 0.295*(-1.*t18008*t8884 + t18043*t9564) - 0.575*t18043*t9830 - 0.325*t17771*t987 + 0.1575*t15037*t2119*t996 - 0.2255*(t17872*t3082 + t15037*t2119*t996) + var1[2] - 1.*var2[2];
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

namespace SymFunction
{

void h_RrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
