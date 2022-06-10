/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:04:32 GMT+02:00
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
  double t868;
  double t989;
  double t2497;
  double t2766;
  double t3121;
  double t3455;
  double t949;
  double t6837;
  double t5588;
  double t5672;
  double t7334;
  double t10249;
  double t10306;
  double t10591;
  double t10820;
  double t11767;
  double t12237;
  double t12420;
  double t12811;
  double t12812;
  double t12838;
  double t12839;
  double t3490;
  double t4384;
  double t13166;
  double t6347;
  double t6802;
  double t13891;
  double t13348;
  double t14080;
  double t14325;
  double t15181;
  double t15204;
  double t15463;
  double t9609;
  double t9610;
  double t11254;
  double t11766;
  double t15752;
  double t15778;
  double t15790;
  double t15811;
  double t15828;
  double t15830;
  double t15836;
  double t15871;
  double t15915;
  double t16115;
  double t16139;
  double t16199;
  double t16220;
  double t16221;
  double t16255;
  double t16271;
  double t16281;
  double t16282;
  double t16286;
  double t16287;
  double t16293;
  double t16313;
  double t16314;
  double t16317;
  t868 = Cos(var1[4]);
  t989 = Cos(var1[15]);
  t2497 = -1.*t989;
  t2766 = 1. + t2497;
  t3121 = -0.15121*t2766;
  t3455 = Sin(var1[15]);
  t949 = Cos(var1[5]);
  t6837 = Sin(var1[5]);
  t5588 = Sin(var1[16]);
  t5672 = Sin(var1[4]);
  t7334 = Cos(var1[16]);
  t10249 = t989*t868*t949;
  t10306 = -1.*t868*t3455*t6837;
  t10591 = t10249 + t10306;
  t10820 = Cos(var1[17]);
  t11767 = t5588*t5672;
  t12237 = t7334*t10591;
  t12420 = t11767 + t12237;
  t12811 = Sin(var1[17]);
  t12812 = t7334*t5672;
  t12838 = -1.*t5588*t10591;
  t12839 = t12812 + t12838;
  t3490 = -0.15121*t3455;
  t4384 = t3121 + t3490;
  t13166 = Sin(var1[3]);
  t6347 = 0.15121*t3455;
  t6802 = t3121 + t6347;
  t13891 = Cos(var1[3]);
  t13348 = t949*t13166*t5672;
  t14080 = t13891*t6837;
  t14325 = t13348 + t14080;
  t15181 = t13891*t949;
  t15204 = -1.*t13166*t5672*t6837;
  t15463 = t15181 + t15204;
  t9609 = -1.*t7334;
  t9610 = 1. + t9609;
  t11254 = -1.*t10820;
  t11766 = 1. + t11254;
  t15752 = t989*t14325;
  t15778 = t3455*t15463;
  t15790 = t15752 + t15778;
  t15811 = -1.*t868*t5588*t13166;
  t15828 = t7334*t15790;
  t15830 = t15811 + t15828;
  t15836 = -1.*t7334*t868*t13166;
  t15871 = -1.*t5588*t15790;
  t15915 = t15836 + t15871;
  t16115 = -1.*t13891*t949*t5672;
  t16139 = t13166*t6837;
  t16199 = t16115 + t16139;
  t16220 = t949*t13166;
  t16221 = t13891*t5672*t6837;
  t16255 = t16220 + t16221;
  t16271 = t989*t16199;
  t16281 = t3455*t16255;
  t16282 = t16271 + t16281;
  t16286 = t13891*t868*t5588;
  t16287 = t7334*t16282;
  t16293 = t16286 + t16287;
  t16313 = t7334*t13891*t868;
  t16314 = -1.*t5588*t16282;
  t16317 = t16313 + t16314;
  p_output1[0]=-0.50321*t11766*t12420 - 0.50321*t12811*t12839 - 0.19821*(t10820*t12420 - 1.*t12811*t12839) + 0.28121*t5588*t5672 - 1.*t6802*t6837*t868 + t4384*t868*t949 - 0.28121*t10591*t9610 - 0.15121*(-1.*t3455*t868*t949 - 1.*t6837*t868*t989) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.50321*t11766*t15830 - 0.50321*t12811*t15915 - 0.19821*(t10820*t15830 - 1.*t12811*t15915) + t14325*t4384 + t15463*t6802 - 0.28121*t13166*t5588*t868 - 0.28121*t15790*t9610 - 0.15121*(-1.*t14325*t3455 + t15463*t989) + var1[1] - 1.*var2[1];
  p_output1[2]=-0.50321*t11766*t16293 - 0.50321*t12811*t16317 - 0.19821*(t10820*t16293 - 1.*t12811*t16317) + t16199*t4384 + t16255*t6802 + 0.28121*t13891*t5588*t868 - 0.28121*t16282*t9610 - 0.15121*(-1.*t16199*t3455 + t16255*t989) + var1[2] - 1.*var2[2];
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

#include "h_RrFoot_DiagonalStance2.hh"

namespace SymFunction
{

void h_RrFoot_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
