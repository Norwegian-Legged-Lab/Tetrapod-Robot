/*
 * Automatically Generated from Mathematica.
 * Mon 30 May 2022 12:13:42 GMT+02:00
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
  double t4677;
  double t6222;
  double t6753;
  double t16122;
  double t16326;
  double t16858;
  double t17386;
  double t16929;
  double t16955;
  double t17387;
  double t17232;
  double t17393;
  double t17412;
  double t17574;
  double t17590;
  double t17605;
  double t3482;
  double t4433;
  double t17939;
  double t17946;
  double t17947;
  double t17957;
  double t17960;
  double t18191;
  double t18192;
  double t18193;
  double t18195;
  double t18199;
  double t18203;
  double t18210;
  double t16860;
  double t16882;
  double t17536;
  double t17565;
  double t17941;
  double t17943;
  double t17962;
  double t18185;
  double t18581;
  double t18594;
  double t18604;
  double t18631;
  double t18633;
  double t18636;
  double t18952;
  double t18953;
  double t18973;
  double t18989;
  double t18990;
  double t18991;
  double t18993;
  double t18994;
  double t18995;
  double t19220;
  double t19221;
  double t19227;
  double t19543;
  double t19544;
  double t19550;
  double t19564;
  double t19569;
  double t19256;
  double t20079;
  double t20083;
  double t20084;
  double t20362;
  double t20372;
  double t20440;
  double t20470;
  double t20471;
  double t20474;
  double t20536;
  double t20537;
  double t20539;
  t4677 = Sin(var1[3]);
  t6222 = Cos(var1[15]);
  t6753 = -1.*t6222;
  t16122 = 1. + t6753;
  t16326 = -0.15121*t16122;
  t16858 = Sin(var1[15]);
  t17386 = Cos(var1[3]);
  t16929 = Cos(var1[5]);
  t16955 = Sin(var1[4]);
  t17387 = Sin(var1[5]);
  t17232 = t16929*t4677*t16955;
  t17393 = t17386*t17387;
  t17412 = t17232 + t17393;
  t17574 = t17386*t16929;
  t17590 = -1.*t4677*t16955*t17387;
  t17605 = t17574 + t17590;
  t3482 = Cos(var1[4]);
  t4433 = Sin(var1[16]);
  t17939 = Cos(var1[16]);
  t17946 = t6222*t17412;
  t17947 = t16858*t17605;
  t17957 = t17946 + t17947;
  t17960 = Cos(var1[17]);
  t18191 = -1.*t3482*t4433*t4677;
  t18192 = t17939*t17957;
  t18193 = t18191 + t18192;
  t18195 = Sin(var1[17]);
  t18199 = -1.*t17939*t3482*t4677;
  t18203 = -1.*t4433*t17957;
  t18210 = t18199 + t18203;
  t16860 = -0.15121*t16858;
  t16882 = t16326 + t16860;
  t17536 = 0.15121*t16858;
  t17565 = t16326 + t17536;
  t17941 = -1.*t17939;
  t17943 = 1. + t17941;
  t17962 = -1.*t17960;
  t18185 = 1. + t17962;
  t18581 = -1.*t6222*t17386*t3482*t16929;
  t18594 = t17386*t3482*t16858*t17387;
  t18604 = t18581 + t18594;
  t18631 = -1.*t17386*t4433*t16955;
  t18633 = t17939*t18604;
  t18636 = t18631 + t18633;
  t18952 = -1.*t17939*t17386*t16955;
  t18953 = -1.*t4433*t18604;
  t18973 = t18952 + t18953;
  t18989 = t17386*t16929*t16955;
  t18990 = -1.*t4677*t17387;
  t18991 = t18989 + t18990;
  t18993 = t16929*t4677;
  t18994 = t17386*t16955*t17387;
  t18995 = t18993 + t18994;
  t19220 = t16858*t18991;
  t19221 = t6222*t18995;
  t19227 = t19220 + t19221;
  t19543 = -1.*t17386*t16929*t16955;
  t19544 = t4677*t17387;
  t19550 = t19543 + t19544;
  t19564 = -1.*t16858*t19550;
  t19569 = t19564 + t19221;
  t19256 = -1.*t16858*t18995;
  t20079 = t6222*t19550;
  t20083 = t16858*t18995;
  t20084 = t20079 + t20083;
  t20362 = -1.*t17386*t3482*t4433;
  t20372 = -1.*t17939*t20084;
  t20440 = t20362 + t20372;
  t20470 = t17939*t17386*t3482;
  t20471 = -1.*t4433*t20084;
  t20474 = t20470 + t20471;
  t20536 = t17386*t3482*t4433;
  t20537 = t17939*t20084;
  t20539 = t20536 + t20537;
  p_output1[0]=1.;
  p_output1[1]=t16882*t17412 + t17565*t17605 - 0.28121*t17943*t17957 - 0.50321*t18185*t18193 - 0.50321*t18195*t18210 - 0.19821*(t17960*t18193 - 1.*t18195*t18210) - 0.28121*t3482*t4433*t4677 - 0.15121*(-1.*t16858*t17412 + t17605*t6222);
  p_output1[2]=-0.28121*t17943*t18604 - 0.50321*t18185*t18636 - 0.50321*t18195*t18973 - 0.19821*(t17960*t18636 - 1.*t18195*t18973) - 1.*t16882*t16929*t17386*t3482 + t17386*t17387*t17565*t3482 - 0.28121*t16955*t17386*t4433 - 0.15121*(t16858*t16929*t17386*t3482 + t17386*t17387*t3482*t6222);
  p_output1[3]=t17565*t18991 + t16882*t18995 - 0.28121*t17943*t19227 - 0.50321*t17939*t18185*t19227 + 0.50321*t18195*t19227*t4433 - 0.19821*(t17939*t17960*t19227 + t18195*t19227*t4433) - 0.15121*(t19256 + t18991*t6222);
  p_output1[4]=-0.28121*t17943*t19569 - 0.50321*t17939*t18185*t19569 + 0.50321*t18195*t19569*t4433 - 0.19821*(t17939*t17960*t19569 + t18195*t19569*t4433) + t19550*(t16860 - 0.15121*t6222) + t18995*(t16860 + 0.15121*t6222) - 0.15121*(t19256 - 1.*t19550*t6222);
  p_output1[5]=-0.50321*t18195*t20440 - 0.50321*t18185*t20474 - 0.19821*(-1.*t18195*t20440 + t17960*t20474) + 0.28121*t17386*t17939*t3482 - 0.28121*t20084*t4433;
  p_output1[6]=-0.50321*t17960*t20474 - 0.50321*t18195*t20539 - 0.19821*(-1.*t17960*t20474 - 1.*t18195*t20539);
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

#include "J_u_rearSwingFootHeight1_DiagonalStance_DiagonalStance.hh"

namespace SymFunction
{

void J_u_rearSwingFootHeight1_DiagonalStance_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
