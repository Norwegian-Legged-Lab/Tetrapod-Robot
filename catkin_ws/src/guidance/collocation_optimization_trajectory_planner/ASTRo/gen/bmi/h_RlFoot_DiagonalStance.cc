/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:49:13 GMT+02:00
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
  double t489;
  double t884;
  double t945;
  double t947;
  double t1014;
  double t1015;
  double t690;
  double t1193;
  double t1173;
  double t1174;
  double t1658;
  double t1951;
  double t1962;
  double t1980;
  double t1998;
  double t2261;
  double t2680;
  double t2714;
  double t2820;
  double t2857;
  double t2924;
  double t2944;
  double t1012;
  double t1016;
  double t3480;
  double t1186;
  double t1192;
  double t3524;
  double t3523;
  double t3640;
  double t3911;
  double t3934;
  double t4183;
  double t4312;
  double t1842;
  double t1878;
  double t2241;
  double t2243;
  double t4799;
  double t4949;
  double t4960;
  double t4970;
  double t4981;
  double t5004;
  double t5241;
  double t5268;
  double t5277;
  double t5395;
  double t5518;
  double t5524;
  double t5753;
  double t5774;
  double t5836;
  double t6188;
  double t6196;
  double t6394;
  double t6772;
  double t6804;
  double t6854;
  double t6896;
  double t6917;
  double t7022;
  t489 = Cos(var1[4]);
  t884 = Cos(var1[9]);
  t945 = -1.*t884;
  t947 = 1. + t945;
  t1014 = Sin(var1[9]);
  t1015 = 0.15121*t1014;
  t690 = Cos(var1[5]);
  t1193 = Sin(var1[5]);
  t1173 = Sin(var1[10]);
  t1174 = Sin(var1[4]);
  t1658 = Cos(var1[10]);
  t1951 = t884*t489*t690;
  t1962 = -1.*t489*t1014*t1193;
  t1980 = t1951 + t1962;
  t1998 = Cos(var1[11]);
  t2261 = t1173*t1174;
  t2680 = t1658*t1980;
  t2714 = t2261 + t2680;
  t2820 = Sin(var1[11]);
  t2857 = t1658*t1174;
  t2924 = -1.*t1173*t1980;
  t2944 = t2857 + t2924;
  t1012 = -0.15121*t947;
  t1016 = t1012 + t1015;
  t3480 = Sin(var1[3]);
  t1186 = 0.15121*t947;
  t1192 = t1186 + t1015;
  t3524 = Cos(var1[3]);
  t3523 = t690*t3480*t1174;
  t3640 = t3524*t1193;
  t3911 = t3523 + t3640;
  t3934 = t3524*t690;
  t4183 = -1.*t3480*t1174*t1193;
  t4312 = t3934 + t4183;
  t1842 = -1.*t1658;
  t1878 = 1. + t1842;
  t2241 = -1.*t1998;
  t2243 = 1. + t2241;
  t4799 = t884*t3911;
  t4949 = t1014*t4312;
  t4960 = t4799 + t4949;
  t4970 = -1.*t489*t1173*t3480;
  t4981 = t1658*t4960;
  t5004 = t4970 + t4981;
  t5241 = -1.*t1658*t489*t3480;
  t5268 = -1.*t1173*t4960;
  t5277 = t5241 + t5268;
  t5395 = -1.*t3524*t690*t1174;
  t5518 = t3480*t1193;
  t5524 = t5395 + t5518;
  t5753 = t690*t3480;
  t5774 = t3524*t1174*t1193;
  t5836 = t5753 + t5774;
  t6188 = t884*t5524;
  t6196 = t1014*t5836;
  t6394 = t6188 + t6196;
  t6772 = t3524*t489*t1173;
  t6804 = t1658*t6394;
  t6854 = t6772 + t6804;
  t6896 = t1658*t3524*t489;
  t6917 = -1.*t1173*t6394;
  t7022 = t6896 + t6917;
  p_output1[0]=0.28121*t1173*t1174 - 0.28121*t1878*t1980 - 0.50321*t2243*t2714 - 0.50321*t2820*t2944 - 0.19821*(t1998*t2714 - 1.*t2820*t2944) - 1.*t1192*t1193*t489 + t1016*t489*t690 + 0.15121*(-1.*t1014*t489*t690 - 1.*t1193*t489*t884) + var1[0] - 1.*var2[0];
  p_output1[1]=t1016*t3911 + t1192*t4312 - 0.28121*t1173*t3480*t489 - 0.28121*t1878*t4960 - 0.50321*t2243*t5004 - 0.50321*t2820*t5277 - 0.19821*(t1998*t5004 - 1.*t2820*t5277) + 0.15121*(-1.*t1014*t3911 + t4312*t884) + var1[1] - 1.*var2[1];
  p_output1[2]=0.28121*t1173*t3524*t489 + t1016*t5524 + t1192*t5836 - 0.28121*t1878*t6394 - 0.50321*t2243*t6854 - 0.50321*t2820*t7022 - 0.19821*(t1998*t6854 - 1.*t2820*t7022) + 0.15121*(-1.*t1014*t5524 + t5836*t884) + var1[2] - 1.*var2[2];
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
