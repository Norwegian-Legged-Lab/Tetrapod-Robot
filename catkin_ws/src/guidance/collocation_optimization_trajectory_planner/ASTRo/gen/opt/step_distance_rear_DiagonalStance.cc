/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:42:27 GMT+02:00
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
  double t1609;
  double t1641;
  double t9781;
  double t3143;
  double t5175;
  double t6765;
  double t6979;
  double t6980;
  double t7359;
  double t8099;
  double t8555;
  double t8666;
  double t8684;
  double t10290;
  double t9031;
  double t11163;
  double t11550;
  double t11972;
  double t12086;
  double t10079;
  double t12625;
  double t12945;
  double t12947;
  double t13082;
  double t13175;
  double t13213;
  double t13217;
  double t14756;
  double t14778;
  double t14782;
  double t14834;
  double t14890;
  double t15181;
  double t15317;
  double t15332;
  double t15390;
  double t15538;
  double t15636;
  double t15842;
  double t15907;
  double t18414;
  double t6879;
  double t6981;
  double t8691;
  double t8706;
  double t18463;
  double t18470;
  double t18477;
  double t18542;
  double t10093;
  double t10266;
  double t10489;
  double t10492;
  double t18626;
  double t18631;
  double t18765;
  double t11354;
  double t11530;
  double t12713;
  double t12905;
  double t13190;
  double t13194;
  double t20564;
  double t20638;
  double t20681;
  double t15191;
  double t15247;
  double t20683;
  double t20715;
  double t20742;
  double t20801;
  double t20805;
  double t20807;
  double t20809;
  double t20928;
  double t21180;
  double t21390;
  double t21522;
  double t21958;
  double t22156;
  double t22329;
  double t22351;
  t1609 = Cos(var1[4]);
  t1641 = Cos(var1[5]);
  t9781 = Sin(var1[4]);
  t3143 = Cos(var1[9]);
  t5175 = -1.*t3143;
  t6765 = 1. + t5175;
  t6979 = Sin(var1[9]);
  t6980 = 0.15121*t6979;
  t7359 = Cos(var1[15]);
  t8099 = -1.*t7359;
  t8555 = 1. + t8099;
  t8666 = -0.15121*t8555;
  t8684 = Sin(var1[15]);
  t10290 = Sin(var1[5]);
  t9031 = Sin(var1[10]);
  t11163 = Cos(var1[10]);
  t11550 = t3143*t1609*t1641;
  t11972 = -1.*t1609*t6979*t10290;
  t12086 = t11550 + t11972;
  t10079 = Sin(var1[16]);
  t12625 = Cos(var1[16]);
  t12945 = t7359*t1609*t1641;
  t12947 = -1.*t1609*t8684*t10290;
  t13082 = t12945 + t12947;
  t13175 = Cos(var1[11]);
  t13213 = t9031*t9781;
  t13217 = t11163*t12086;
  t14756 = t13213 + t13217;
  t14778 = Sin(var1[11]);
  t14782 = t11163*t9781;
  t14834 = -1.*t9031*t12086;
  t14890 = t14782 + t14834;
  t15181 = Cos(var1[17]);
  t15317 = t10079*t9781;
  t15332 = t12625*t13082;
  t15390 = t15317 + t15332;
  t15538 = Sin(var1[17]);
  t15636 = t12625*t9781;
  t15842 = -1.*t10079*t13082;
  t15907 = t15636 + t15842;
  t18414 = Sin(var1[3]);
  t6879 = -0.15121*t6765;
  t6981 = t6879 + t6980;
  t8691 = -0.15121*t8684;
  t8706 = t8666 + t8691;
  t18463 = t1641*t18414*t9781;
  t18470 = Cos(var1[3]);
  t18477 = t18470*t10290;
  t18542 = t18463 + t18477;
  t10093 = 0.15121*t6765;
  t10266 = t10093 + t6980;
  t10489 = 0.15121*t8684;
  t10492 = t8666 + t10489;
  t18626 = t18470*t1641;
  t18631 = -1.*t18414*t9781*t10290;
  t18765 = t18626 + t18631;
  t11354 = -1.*t11163;
  t11530 = 1. + t11354;
  t12713 = -1.*t12625;
  t12905 = 1. + t12713;
  t13190 = -1.*t13175;
  t13194 = 1. + t13190;
  t20564 = t3143*t18542;
  t20638 = t6979*t18765;
  t20681 = t20564 + t20638;
  t15191 = -1.*t15181;
  t15247 = 1. + t15191;
  t20683 = t7359*t18542;
  t20715 = t8684*t18765;
  t20742 = t20683 + t20715;
  t20801 = -1.*t1609*t9031*t18414;
  t20805 = t11163*t20681;
  t20807 = t20801 + t20805;
  t20809 = -1.*t11163*t1609*t18414;
  t20928 = -1.*t9031*t20681;
  t21180 = t20809 + t20928;
  t21390 = -1.*t1609*t10079*t18414;
  t21522 = t12625*t20742;
  t21958 = t21390 + t21522;
  t22156 = -1.*t12625*t1609*t18414;
  t22329 = -1.*t10079*t20742;
  t22351 = t22156 + t22329;
  p_output1[0]=-0.28121*t11530*t12086 + 0.28121*t12905*t13082 - 0.50321*t13194*t14756 - 0.50321*t14778*t14890 - 0.23321*(t13175*t14756 - 1.*t14778*t14890) + 0.50321*t15247*t15390 + 0.50321*t15538*t15907 + 0.23321*(t15181*t15390 - 1.*t15538*t15907) - 1.*t10266*t10290*t1609 + t10290*t10492*t1609 + 0.15121*(-1.*t10290*t1609*t3143 - 1.*t1609*t1641*t6979) + t1609*t1641*t6981 + 0.15121*(-1.*t10290*t1609*t7359 - 1.*t1609*t1641*t8684) - 1.*t1609*t1641*t8706 - 0.28121*t10079*t9781 + 0.28121*t9031*t9781;
  p_output1[1]=0.28121*t10079*t1609*t18414 + t10266*t18765 - 1.*t10492*t18765 - 0.28121*t11530*t20681 + 0.28121*t12905*t20742 - 0.50321*t13194*t20807 - 0.50321*t14778*t21180 - 0.23321*(t13175*t20807 - 1.*t14778*t21180) + 0.50321*t15247*t21958 + 0.50321*t15538*t22351 + 0.23321*(t15181*t21958 - 1.*t15538*t22351) + 0.15121*(t18765*t3143 - 1.*t18542*t6979) + t18542*t6981 + 0.15121*(t18765*t7359 - 1.*t18542*t8684) - 1.*t18542*t8706 - 0.28121*t1609*t18414*t9031;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 2, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "step_distance_rear_DiagonalStance.hh"

namespace DiagonalStance
{

void step_distance_rear_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
