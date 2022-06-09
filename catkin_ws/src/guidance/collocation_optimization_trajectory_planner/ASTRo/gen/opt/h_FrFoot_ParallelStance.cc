/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:54:18 GMT+02:00
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
  double t15647;
  double t15764;
  double t15770;
  double t15922;
  double t15929;
  double t15979;
  double t15705;
  double t16063;
  double t16025;
  double t16027;
  double t16105;
  double t16108;
  double t16117;
  double t16128;
  double t16171;
  double t16183;
  double t16190;
  double t16193;
  double t16216;
  double t16220;
  double t16221;
  double t16222;
  double t15927;
  double t16004;
  double t16236;
  double t16039;
  double t16052;
  double t16275;
  double t16240;
  double t16276;
  double t16277;
  double t16282;
  double t16283;
  double t16289;
  double t16106;
  double t16107;
  double t16179;
  double t16180;
  double t16296;
  double t16297;
  double t16298;
  double t16361;
  double t16362;
  double t16363;
  double t16380;
  double t16381;
  double t16382;
  double t16400;
  double t16401;
  double t16412;
  double t16418;
  double t16420;
  double t16421;
  double t16444;
  double t16449;
  double t16450;
  double t16452;
  double t16453;
  double t16458;
  double t16460;
  double t16461;
  double t16462;
  t15647 = Cos(var1[4]);
  t15764 = Cos(var1[12]);
  t15770 = -1.*t15764;
  t15922 = 1. + t15770;
  t15929 = Sin(var1[12]);
  t15979 = -0.15121*t15929;
  t15705 = Cos(var1[5]);
  t16063 = Sin(var1[5]);
  t16025 = Sin(var1[13]);
  t16027 = Sin(var1[4]);
  t16105 = Cos(var1[13]);
  t16108 = t15764*t15647*t15705;
  t16117 = -1.*t15647*t15929*t16063;
  t16128 = t16108 + t16117;
  t16171 = Cos(var1[14]);
  t16183 = -1.*t16025*t16027;
  t16190 = t16105*t16128;
  t16193 = t16183 + t16190;
  t16216 = Sin(var1[14]);
  t16220 = t16105*t16027;
  t16221 = t16025*t16128;
  t16222 = t16220 + t16221;
  t15927 = 0.15121*t15922;
  t16004 = t15927 + t15979;
  t16236 = Sin(var1[3]);
  t16039 = -0.15121*t15922;
  t16052 = t16039 + t15979;
  t16275 = Cos(var1[3]);
  t16240 = t15705*t16236*t16027;
  t16276 = t16275*t16063;
  t16277 = t16240 + t16276;
  t16282 = t16275*t15705;
  t16283 = -1.*t16236*t16027*t16063;
  t16289 = t16282 + t16283;
  t16106 = -1.*t16105;
  t16107 = 1. + t16106;
  t16179 = -1.*t16171;
  t16180 = 1. + t16179;
  t16296 = t15764*t16277;
  t16297 = t15929*t16289;
  t16298 = t16296 + t16297;
  t16361 = t15647*t16025*t16236;
  t16362 = t16105*t16298;
  t16363 = t16361 + t16362;
  t16380 = -1.*t16105*t15647*t16236;
  t16381 = t16025*t16298;
  t16382 = t16380 + t16381;
  t16400 = -1.*t16275*t15705*t16027;
  t16401 = t16236*t16063;
  t16412 = t16400 + t16401;
  t16418 = t15705*t16236;
  t16420 = t16275*t16027*t16063;
  t16421 = t16418 + t16420;
  t16444 = t15764*t16412;
  t16449 = t15929*t16421;
  t16450 = t16444 + t16449;
  t16452 = -1.*t16275*t15647*t16025;
  t16453 = t16105*t16450;
  t16458 = t16452 + t16453;
  t16460 = t16105*t16275*t15647;
  t16461 = t16025*t16450;
  t16462 = t16460 + t16461;
  p_output1[0]=t15647*t15705*t16004 + 0.28121*t16025*t16027 - 1.*t15647*t16052*t16063 - 0.15121*(-1.*t15647*t15705*t15929 - 1.*t15647*t15764*t16063) + 0.28121*t16107*t16128 + 0.50321*t16180*t16193 - 0.50321*t16216*t16222 + 0.19821*(t16171*t16193 + t16216*t16222) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.28121*t15647*t16025*t16236 + t16004*t16277 + t16052*t16289 - 0.15121*(-1.*t15929*t16277 + t15764*t16289) + 0.28121*t16107*t16298 + 0.50321*t16180*t16363 - 0.50321*t16216*t16382 + 0.19821*(t16171*t16363 + t16216*t16382) + var1[1] - 1.*var2[1];
  p_output1[2]=0.28121*t15647*t16025*t16275 + t16004*t16412 + t16052*t16421 - 0.15121*(-1.*t15929*t16412 + t15764*t16421) + 0.28121*t16107*t16450 + 0.50321*t16180*t16458 - 0.50321*t16216*t16462 + 0.19821*(t16171*t16458 + t16216*t16462) + var1[2] - 1.*var2[2];
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

#include "h_FrFoot_ParallelStance.hh"

namespace ParallelStance
{

void h_FrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
