/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 17:54:34 GMT+02:00
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
  double t2708;
  double t8333;
  double t10764;
  double t11133;
  double t12973;
  double t13011;
  double t20614;
  double t18547;
  double t19708;
  double t21881;
  double t20569;
  double t21907;
  double t28042;
  double t41195;
  double t41216;
  double t43413;
  double t2558;
  double t2608;
  double t46297;
  double t50865;
  double t51567;
  double t51569;
  double t51669;
  double t54666;
  double t54738;
  double t54740;
  double t54801;
  double t54811;
  double t54814;
  double t54815;
  double t13158;
  double t15238;
  double t28602;
  double t35029;
  double t46429;
  double t50474;
  double t51673;
  double t54242;
  double t54869;
  double t54873;
  double t55163;
  double t55165;
  double t55166;
  double t55167;
  double t55175;
  double t55189;
  double t55192;
  double t55269;
  double t55272;
  double t55361;
  double t55377;
  double t55382;
  double t55413;
  double t55420;
  double t55423;
  double t55424;
  double t55597;
  double t55621;
  double t55638;
  double t55690;
  double t55700;
  double t55570;
  double t55978;
  double t55979;
  double t55989;
  double t56000;
  double t56004;
  double t56005;
  double t56009;
  double t56011;
  double t56015;
  double t56055;
  double t56065;
  double t56089;
  t2708 = Sin(var1[3]);
  t8333 = Cos(var1[15]);
  t10764 = -1.*t8333;
  t11133 = 1. + t10764;
  t12973 = -0.15121*t11133;
  t13011 = Sin(var1[15]);
  t20614 = Cos(var1[3]);
  t18547 = Cos(var1[5]);
  t19708 = Sin(var1[4]);
  t21881 = Sin(var1[5]);
  t20569 = t18547*t2708*t19708;
  t21907 = t20614*t21881;
  t28042 = t20569 + t21907;
  t41195 = t20614*t18547;
  t41216 = -1.*t2708*t19708*t21881;
  t43413 = t41195 + t41216;
  t2558 = Cos(var1[4]);
  t2608 = Sin(var1[16]);
  t46297 = Cos(var1[16]);
  t50865 = t8333*t28042;
  t51567 = t13011*t43413;
  t51569 = t50865 + t51567;
  t51669 = Cos(var1[17]);
  t54666 = -1.*t2558*t2608*t2708;
  t54738 = t46297*t51569;
  t54740 = t54666 + t54738;
  t54801 = Sin(var1[17]);
  t54811 = -1.*t46297*t2558*t2708;
  t54814 = -1.*t2608*t51569;
  t54815 = t54811 + t54814;
  t13158 = -0.15121*t13011;
  t15238 = t12973 + t13158;
  t28602 = 0.15121*t13011;
  t35029 = t12973 + t28602;
  t46429 = -1.*t46297;
  t50474 = 1. + t46429;
  t51673 = -1.*t51669;
  t54242 = 1. + t51673;
  t54869 = -1.*t8333*t20614*t2558*t18547;
  t54873 = t20614*t2558*t13011*t21881;
  t55163 = t54869 + t54873;
  t55165 = -1.*t20614*t2608*t19708;
  t55166 = t46297*t55163;
  t55167 = t55165 + t55166;
  t55175 = -1.*t46297*t20614*t19708;
  t55189 = -1.*t2608*t55163;
  t55192 = t55175 + t55189;
  t55269 = t20614*t18547*t19708;
  t55272 = -1.*t2708*t21881;
  t55361 = t55269 + t55272;
  t55377 = t18547*t2708;
  t55382 = t20614*t19708*t21881;
  t55413 = t55377 + t55382;
  t55420 = t13011*t55361;
  t55423 = t8333*t55413;
  t55424 = t55420 + t55423;
  t55597 = -1.*t20614*t18547*t19708;
  t55621 = t2708*t21881;
  t55638 = t55597 + t55621;
  t55690 = -1.*t13011*t55638;
  t55700 = t55690 + t55423;
  t55570 = -1.*t13011*t55413;
  t55978 = t8333*t55638;
  t55979 = t13011*t55413;
  t55989 = t55978 + t55979;
  t56000 = -1.*t20614*t2558*t2608;
  t56004 = -1.*t46297*t55989;
  t56005 = t56000 + t56004;
  t56009 = t46297*t20614*t2558;
  t56011 = -1.*t2608*t55989;
  t56015 = t56009 + t56011;
  t56055 = t20614*t2558*t2608;
  t56065 = t46297*t55989;
  t56089 = t56055 + t56065;
  p_output1[0]=1.;
  p_output1[1]=-0.28121*t2558*t2608*t2708 + t15238*t28042 + t35029*t43413 - 0.28121*t50474*t51569 - 0.50321*t54242*t54740 - 0.50321*t54801*t54815 - 0.23321*(t51669*t54740 - 1.*t54801*t54815) - 0.15121*(-1.*t13011*t28042 + t43413*t8333);
  p_output1[2]=-1.*t15238*t18547*t20614*t2558 - 0.28121*t19708*t20614*t2608 + t20614*t21881*t2558*t35029 - 0.28121*t50474*t55163 - 0.50321*t54242*t55167 - 0.50321*t54801*t55192 - 0.23321*(t51669*t55167 - 1.*t54801*t55192) - 0.15121*(t13011*t18547*t20614*t2558 + t20614*t21881*t2558*t8333);
  p_output1[3]=t35029*t55361 + t15238*t55413 - 0.28121*t50474*t55424 - 0.50321*t46297*t54242*t55424 + 0.50321*t2608*t54801*t55424 - 0.23321*(t46297*t51669*t55424 + t2608*t54801*t55424) - 0.15121*(t55570 + t55361*t8333);
  p_output1[4]=-0.28121*t50474*t55700 - 0.50321*t46297*t54242*t55700 + 0.50321*t2608*t54801*t55700 - 0.23321*(t46297*t51669*t55700 + t2608*t54801*t55700) + t55638*(t13158 - 0.15121*t8333) + t55413*(t13158 + 0.15121*t8333) - 0.15121*(t55570 - 1.*t55638*t8333);
  p_output1[5]=0.28121*t20614*t2558*t46297 - 0.28121*t2608*t55989 - 0.50321*t54801*t56005 - 0.50321*t54242*t56015 - 0.23321*(-1.*t54801*t56005 + t51669*t56015);
  p_output1[6]=-0.50321*t51669*t56015 - 0.50321*t54801*t56089 - 0.23321*(-1.*t51669*t56015 - 1.*t54801*t56089);
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
