/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 19:00:02 GMT+02:00
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
  double t3827;
  double t3931;
  double t7057;
  double t7109;
  double t7111;
  double t7116;
  double t3896;
  double t7132;
  double t7127;
  double t7128;
  double t7152;
  double t7161;
  double t7162;
  double t7163;
  double t7201;
  double t7214;
  double t7215;
  double t7216;
  double t7221;
  double t7222;
  double t7223;
  double t7228;
  double t7110;
  double t7117;
  double t7239;
  double t7130;
  double t7131;
  double t7242;
  double t7241;
  double t7243;
  double t7248;
  double t7250;
  double t7251;
  double t7252;
  double t7156;
  double t7157;
  double t7202;
  double t7203;
  double t7262;
  double t7263;
  double t7264;
  double t7266;
  double t7267;
  double t7268;
  double t7274;
  double t7275;
  double t7276;
  double t7307;
  double t7314;
  double t7315;
  double t7323;
  double t7324;
  double t7329;
  double t7340;
  double t7341;
  double t7344;
  double t7347;
  double t7348;
  double t7349;
  double t7363;
  double t7364;
  double t7369;
  t3827 = Cos(var1[4]);
  t3931 = Cos(var1[9]);
  t7057 = -1.*t3931;
  t7109 = 1. + t7057;
  t7111 = Sin(var1[9]);
  t7116 = 0.15121*t7111;
  t3896 = Cos(var1[5]);
  t7132 = Sin(var1[5]);
  t7127 = Sin(var1[10]);
  t7128 = Sin(var1[4]);
  t7152 = Cos(var1[10]);
  t7161 = t3931*t3827*t3896;
  t7162 = -1.*t3827*t7111*t7132;
  t7163 = t7161 + t7162;
  t7201 = Cos(var1[11]);
  t7214 = t7127*t7128;
  t7215 = t7152*t7163;
  t7216 = t7214 + t7215;
  t7221 = Sin(var1[11]);
  t7222 = t7152*t7128;
  t7223 = -1.*t7127*t7163;
  t7228 = t7222 + t7223;
  t7110 = -0.15121*t7109;
  t7117 = t7110 + t7116;
  t7239 = Sin(var1[3]);
  t7130 = 0.15121*t7109;
  t7131 = t7130 + t7116;
  t7242 = Cos(var1[3]);
  t7241 = t3896*t7239*t7128;
  t7243 = t7242*t7132;
  t7248 = t7241 + t7243;
  t7250 = t7242*t3896;
  t7251 = -1.*t7239*t7128*t7132;
  t7252 = t7250 + t7251;
  t7156 = -1.*t7152;
  t7157 = 1. + t7156;
  t7202 = -1.*t7201;
  t7203 = 1. + t7202;
  t7262 = t3931*t7248;
  t7263 = t7111*t7252;
  t7264 = t7262 + t7263;
  t7266 = -1.*t3827*t7127*t7239;
  t7267 = t7152*t7264;
  t7268 = t7266 + t7267;
  t7274 = -1.*t7152*t3827*t7239;
  t7275 = -1.*t7127*t7264;
  t7276 = t7274 + t7275;
  t7307 = -1.*t7242*t3896*t7128;
  t7314 = t7239*t7132;
  t7315 = t7307 + t7314;
  t7323 = t3896*t7239;
  t7324 = t7242*t7128*t7132;
  t7329 = t7323 + t7324;
  t7340 = t3931*t7315;
  t7341 = t7111*t7329;
  t7344 = t7340 + t7341;
  t7347 = t7242*t3827*t7127;
  t7348 = t7152*t7344;
  t7349 = t7347 + t7348;
  t7363 = t7152*t7242*t3827;
  t7364 = -1.*t7127*t7344;
  t7369 = t7363 + t7364;
  p_output1[0]=t3827*t3896*t7117 + 0.28121*t7127*t7128 - 1.*t3827*t7131*t7132 + 0.15121*(-1.*t3827*t3896*t7111 - 1.*t3827*t3931*t7132) - 0.28121*t7157*t7163 - 0.50321*t7203*t7216 - 0.50321*t7221*t7228 - 0.19821*(t7201*t7216 - 1.*t7221*t7228) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.28121*t3827*t7127*t7239 + t7117*t7248 + t7131*t7252 + 0.15121*(-1.*t7111*t7248 + t3931*t7252) - 0.28121*t7157*t7264 - 0.50321*t7203*t7268 - 0.50321*t7221*t7276 - 0.19821*(t7201*t7268 - 1.*t7221*t7276) + var1[1] - 1.*var2[1];
  p_output1[2]=0.28121*t3827*t7127*t7242 + t7117*t7315 + t7131*t7329 + 0.15121*(-1.*t7111*t7315 + t3931*t7329) - 0.28121*t7157*t7344 - 0.50321*t7203*t7349 - 0.50321*t7221*t7369 - 0.19821*(t7201*t7349 - 1.*t7221*t7369) + var1[2] - 1.*var2[2];
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

#include "h_RlFoot_ParallelStance2.hh"

namespace SymFunction
{

void h_RlFoot_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
