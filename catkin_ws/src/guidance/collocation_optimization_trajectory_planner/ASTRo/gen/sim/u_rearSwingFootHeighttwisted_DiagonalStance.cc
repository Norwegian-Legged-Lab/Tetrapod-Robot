/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 13:06:16 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t38692;
  double t38786;
  double t41046;
  double t41055;
  double t41218;
  double t41239;
  double t48879;
  double t52052;
  double t49010;
  double t52055;
  double t51900;
  double t53033;
  double t53075;
  double t56080;
  double t56093;
  double t56207;
  double t38701;
  double t38727;
  double t56871;
  double t57070;
  double t57356;
  double t57362;
  double t57606;
  double t57857;
  double t57858;
  double t57864;
  double t58048;
  double t58144;
  double t58191;
  double t58223;
  double t41251;
  double t41275;
  double t54453;
  double t55920;
  double t56939;
  double t56941;
  double t57630;
  double t57657;
  double t60036;
  double t60038;
  double t60043;
  double t60068;
  double t60077;
  double t60079;
  double t60150;
  double t60368;
  double t60404;
  double t61702;
  double t61781;
  double t61798;
  double t61871;
  double t61917;
  double t61924;
  double t62859;
  double t62876;
  double t62948;
  double t62961;
  double t62962;
  double t62971;
  double t62991;
  double t63018;
  double t63050;
  double t58983;
  double t59002;
  double t59424;
  double t59553;
  double t59958;
  double t59960;
  double t59965;
  double t60030;
  double t60067;
  double t60092;
  double t61075;
  double t61334;
  double t61381;
  double t61385;
  double t61456;
  double t61466;
  t38692 = Cos(var1[3]);
  t38786 = Cos(var1[15]);
  t41046 = -1.*t38786;
  t41055 = 1. + t41046;
  t41218 = -0.15121*t41055;
  t41239 = Sin(var1[15]);
  t48879 = Cos(var1[5]);
  t52052 = Sin(var1[3]);
  t49010 = Sin(var1[4]);
  t52055 = Sin(var1[5]);
  t51900 = -1.*t38692*t48879*t49010;
  t53033 = t52052*t52055;
  t53075 = t51900 + t53033;
  t56080 = t48879*t52052;
  t56093 = t38692*t49010*t52055;
  t56207 = t56080 + t56093;
  t38701 = Cos(var1[4]);
  t38727 = Sin(var1[16]);
  t56871 = Cos(var1[16]);
  t57070 = t38786*t53075;
  t57356 = t41239*t56207;
  t57362 = t57070 + t57356;
  t57606 = Cos(var1[17]);
  t57857 = t38692*t38701*t38727;
  t57858 = t56871*t57362;
  t57864 = t57857 + t57858;
  t58048 = Sin(var1[17]);
  t58144 = t56871*t38692*t38701;
  t58191 = -1.*t38727*t57362;
  t58223 = t58144 + t58191;
  t41251 = -0.15121*t41239;
  t41275 = t41218 + t41251;
  t54453 = 0.15121*t41239;
  t55920 = t41218 + t54453;
  t56939 = -1.*t56871;
  t56941 = 1. + t56939;
  t57630 = -1.*t57606;
  t57657 = 1. + t57630;
  t60036 = t38786*t38701*t48879;
  t60038 = -1.*t38701*t41239*t52055;
  t60043 = t60036 + t60038;
  t60068 = t38727*t49010;
  t60077 = t56871*t60043;
  t60079 = t60068 + t60077;
  t60150 = t56871*t49010;
  t60368 = -1.*t38727*t60043;
  t60404 = t60150 + t60368;
  t61702 = t48879*t52052*t49010;
  t61781 = t38692*t52055;
  t61798 = t61702 + t61781;
  t61871 = t38692*t48879;
  t61917 = -1.*t52052*t49010*t52055;
  t61924 = t61871 + t61917;
  t62859 = t38786*t61798;
  t62876 = t41239*t61924;
  t62948 = t62859 + t62876;
  t62961 = -1.*t38701*t38727*t52052;
  t62962 = t56871*t62948;
  t62971 = t62961 + t62962;
  t62991 = -1.*t56871*t38701*t52052;
  t63018 = -1.*t38727*t62948;
  t63050 = t62991 + t63018;
  t58983 = -1.*var2[0];
  t59002 = t38701*t48879*t41275;
  t59424 = 0.28121*t38727*t49010;
  t59553 = -1.*t38701*t55920*t52055;
  t59958 = -1.*t38701*t48879*t41239;
  t59960 = -1.*t38786*t38701*t52055;
  t59965 = t59958 + t59960;
  t60030 = -0.15121*t59965;
  t60067 = -0.28121*t56941*t60043;
  t60092 = -0.50321*t57657*t60079;
  t61075 = -0.50321*t58048*t60404;
  t61334 = t57606*t60079;
  t61381 = -1.*t58048*t60404;
  t61385 = t61334 + t61381;
  t61456 = -0.19821*t61385;
  t61466 = t58983 + var1[0] + t59002 + t59424 + t59553 + t60030 + t60067 + t60092 + t61075 + t61456;
  p_output1[0]=0.28121*t38692*t38701*t38727 + t41275*t53075 + t55920*t56207 - 0.15121*(-1.*t41239*t53075 + t38786*t56207) - 0.28121*t56941*t57362 - 0.50321*t57657*t57864 - 0.50321*t58048*t58223 - 0.19821*(t57606*t57864 - 1.*t58048*t58223) + var1[2] - 0.5*t61466*(-0.28121*t38701*t38727*t52052 + t41275*t61798 + t55920*t61924 - 0.15121*(-1.*t41239*t61798 + t38786*t61924) - 0.28121*t56941*t62948 - 0.50321*t57657*t62971 - 0.50321*t58048*t63050 - 0.19821*(t57606*t62971 - 1.*t58048*t63050) + var1[1])*var3[0]*(1. + Tanh(t61466*var4[0]));
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "u_rearSwingFootHeighttwisted_DiagonalStance.hh"

namespace SymFunction
{

void u_rearSwingFootHeighttwisted_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
