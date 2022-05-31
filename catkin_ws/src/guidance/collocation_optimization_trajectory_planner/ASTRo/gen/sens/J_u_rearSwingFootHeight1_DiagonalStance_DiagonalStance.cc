/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 18:48:27 GMT+02:00
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
  double t3542;
  double t3621;
  double t4926;
  double t7038;
  double t7113;
  double t21816;
  double t23242;
  double t22992;
  double t23073;
  double t23708;
  double t23075;
  double t23749;
  double t23759;
  double t24019;
  double t24047;
  double t24314;
  double t3183;
  double t3402;
  double t24592;
  double t24830;
  double t24832;
  double t24833;
  double t24858;
  double t24864;
  double t24869;
  double t24870;
  double t24872;
  double t25012;
  double t25013;
  double t25014;
  double t22934;
  double t22989;
  double t23860;
  double t23970;
  double t24827;
  double t24828;
  double t24859;
  double t24860;
  double t25049;
  double t25166;
  double t25167;
  double t25236;
  double t25242;
  double t25250;
  double t25257;
  double t25258;
  double t25455;
  double t25480;
  double t25481;
  double t25482;
  double t25484;
  double t25485;
  double t25486;
  double t25488;
  double t25494;
  double t25637;
  double t25839;
  double t25847;
  double t25851;
  double t25865;
  double t25872;
  double t25658;
  double t26118;
  double t26124;
  double t26127;
  double t26366;
  double t26368;
  double t26386;
  double t26396;
  double t26397;
  double t26404;
  double t26418;
  double t26419;
  double t26424;
  t3542 = Sin(var1[3]);
  t3621 = Cos(var1[15]);
  t4926 = -1.*t3621;
  t7038 = 1. + t4926;
  t7113 = -0.15121*t7038;
  t21816 = Sin(var1[15]);
  t23242 = Cos(var1[3]);
  t22992 = Cos(var1[5]);
  t23073 = Sin(var1[4]);
  t23708 = Sin(var1[5]);
  t23075 = t22992*t3542*t23073;
  t23749 = t23242*t23708;
  t23759 = t23075 + t23749;
  t24019 = t23242*t22992;
  t24047 = -1.*t3542*t23073*t23708;
  t24314 = t24019 + t24047;
  t3183 = Cos(var1[4]);
  t3402 = Sin(var1[16]);
  t24592 = Cos(var1[16]);
  t24830 = t3621*t23759;
  t24832 = t21816*t24314;
  t24833 = t24830 + t24832;
  t24858 = Cos(var1[17]);
  t24864 = -1.*t3183*t3402*t3542;
  t24869 = t24592*t24833;
  t24870 = t24864 + t24869;
  t24872 = Sin(var1[17]);
  t25012 = -1.*t24592*t3183*t3542;
  t25013 = -1.*t3402*t24833;
  t25014 = t25012 + t25013;
  t22934 = -0.15121*t21816;
  t22989 = t7113 + t22934;
  t23860 = 0.15121*t21816;
  t23970 = t7113 + t23860;
  t24827 = -1.*t24592;
  t24828 = 1. + t24827;
  t24859 = -1.*t24858;
  t24860 = 1. + t24859;
  t25049 = -1.*t3621*t23242*t3183*t22992;
  t25166 = t23242*t3183*t21816*t23708;
  t25167 = t25049 + t25166;
  t25236 = -1.*t23242*t3402*t23073;
  t25242 = t24592*t25167;
  t25250 = t25236 + t25242;
  t25257 = -1.*t24592*t23242*t23073;
  t25258 = -1.*t3402*t25167;
  t25455 = t25257 + t25258;
  t25480 = t23242*t22992*t23073;
  t25481 = -1.*t3542*t23708;
  t25482 = t25480 + t25481;
  t25484 = t22992*t3542;
  t25485 = t23242*t23073*t23708;
  t25486 = t25484 + t25485;
  t25488 = t21816*t25482;
  t25494 = t3621*t25486;
  t25637 = t25488 + t25494;
  t25839 = -1.*t23242*t22992*t23073;
  t25847 = t3542*t23708;
  t25851 = t25839 + t25847;
  t25865 = -1.*t21816*t25851;
  t25872 = t25865 + t25494;
  t25658 = -1.*t21816*t25486;
  t26118 = t3621*t25851;
  t26124 = t21816*t25486;
  t26127 = t26118 + t26124;
  t26366 = -1.*t23242*t3183*t3402;
  t26368 = -1.*t24592*t26127;
  t26386 = t26366 + t26368;
  t26396 = t24592*t23242*t3183;
  t26397 = -1.*t3402*t26127;
  t26404 = t26396 + t26397;
  t26418 = t23242*t3183*t3402;
  t26419 = t24592*t26127;
  t26424 = t26418 + t26419;
  p_output1[0]=1.;
  p_output1[1]=t22989*t23759 + t23970*t24314 - 0.28121*t24828*t24833 - 0.50321*t24860*t24870 - 0.50321*t24872*t25014 - 0.19821*(t24858*t24870 - 1.*t24872*t25014) - 0.28121*t3183*t3402*t3542 - 0.15121*(-1.*t21816*t23759 + t24314*t3621);
  p_output1[2]=-0.28121*t24828*t25167 - 0.50321*t24860*t25250 - 0.50321*t24872*t25455 - 0.19821*(t24858*t25250 - 1.*t24872*t25455) - 1.*t22989*t22992*t23242*t3183 + t23242*t23708*t23970*t3183 - 0.28121*t23073*t23242*t3402 - 0.15121*(t21816*t22992*t23242*t3183 + t23242*t23708*t3183*t3621);
  p_output1[3]=t23970*t25482 + t22989*t25486 - 0.28121*t24828*t25637 - 0.50321*t24592*t24860*t25637 + 0.50321*t24872*t25637*t3402 - 0.19821*(t24592*t24858*t25637 + t24872*t25637*t3402) - 0.15121*(t25658 + t25482*t3621);
  p_output1[4]=-0.28121*t24828*t25872 - 0.50321*t24592*t24860*t25872 + 0.50321*t24872*t25872*t3402 - 0.19821*(t24592*t24858*t25872 + t24872*t25872*t3402) + t25851*(t22934 - 0.15121*t3621) + t25486*(t22934 + 0.15121*t3621) - 0.15121*(t25658 - 1.*t25851*t3621);
  p_output1[5]=-0.50321*t24872*t26386 - 0.50321*t24860*t26404 - 0.19821*(-1.*t24872*t26386 + t24858*t26404) + 0.28121*t23242*t24592*t3183 - 0.28121*t26127*t3402;
  p_output1[6]=-0.50321*t24858*t26404 - 0.50321*t24872*t26424 - 0.19821*(-1.*t24858*t26404 - 1.*t24872*t26424);
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
