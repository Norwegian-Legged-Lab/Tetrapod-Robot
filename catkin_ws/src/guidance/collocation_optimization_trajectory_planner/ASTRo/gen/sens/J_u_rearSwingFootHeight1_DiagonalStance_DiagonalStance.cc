/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 19:01:06 GMT+02:00
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
  double t2897;
  double t3024;
  double t3025;
  double t3220;
  double t3221;
  double t3309;
  double t6973;
  double t5317;
  double t5941;
  double t7040;
  double t6097;
  double t7061;
  double t7062;
  double t9408;
  double t9409;
  double t9427;
  double t2600;
  double t2800;
  double t9687;
  double t9708;
  double t9709;
  double t9765;
  double t9839;
  double t9918;
  double t9957;
  double t9997;
  double t10041;
  double t10086;
  double t10087;
  double t10097;
  double t3843;
  double t5295;
  double t7083;
  double t9403;
  double t9693;
  double t9704;
  double t9866;
  double t9904;
  double t10151;
  double t10152;
  double t10153;
  double t10382;
  double t10386;
  double t10400;
  double t10477;
  double t10479;
  double t10487;
  double t10522;
  double t10523;
  double t10533;
  double t10543;
  double t10547;
  double t10551;
  double t10563;
  double t10587;
  double t10608;
  double t10858;
  double t10866;
  double t10867;
  double t10888;
  double t10889;
  double t10718;
  double t11107;
  double t11112;
  double t11116;
  double t11127;
  double t11129;
  double t11130;
  double t11136;
  double t11153;
  double t11159;
  double t11266;
  double t11294;
  double t11295;
  t2897 = Sin(var1[3]);
  t3024 = Cos(var1[15]);
  t3025 = -1.*t3024;
  t3220 = 1. + t3025;
  t3221 = -0.15121*t3220;
  t3309 = Sin(var1[15]);
  t6973 = Cos(var1[3]);
  t5317 = Cos(var1[5]);
  t5941 = Sin(var1[4]);
  t7040 = Sin(var1[5]);
  t6097 = t5317*t2897*t5941;
  t7061 = t6973*t7040;
  t7062 = t6097 + t7061;
  t9408 = t6973*t5317;
  t9409 = -1.*t2897*t5941*t7040;
  t9427 = t9408 + t9409;
  t2600 = Cos(var1[4]);
  t2800 = Sin(var1[16]);
  t9687 = Cos(var1[16]);
  t9708 = t3024*t7062;
  t9709 = t3309*t9427;
  t9765 = t9708 + t9709;
  t9839 = Cos(var1[17]);
  t9918 = -1.*t2600*t2800*t2897;
  t9957 = t9687*t9765;
  t9997 = t9918 + t9957;
  t10041 = Sin(var1[17]);
  t10086 = -1.*t9687*t2600*t2897;
  t10087 = -1.*t2800*t9765;
  t10097 = t10086 + t10087;
  t3843 = -0.15121*t3309;
  t5295 = t3221 + t3843;
  t7083 = 0.15121*t3309;
  t9403 = t3221 + t7083;
  t9693 = -1.*t9687;
  t9704 = 1. + t9693;
  t9866 = -1.*t9839;
  t9904 = 1. + t9866;
  t10151 = -1.*t3024*t6973*t2600*t5317;
  t10152 = t6973*t2600*t3309*t7040;
  t10153 = t10151 + t10152;
  t10382 = -1.*t6973*t2800*t5941;
  t10386 = t9687*t10153;
  t10400 = t10382 + t10386;
  t10477 = -1.*t9687*t6973*t5941;
  t10479 = -1.*t2800*t10153;
  t10487 = t10477 + t10479;
  t10522 = t6973*t5317*t5941;
  t10523 = -1.*t2897*t7040;
  t10533 = t10522 + t10523;
  t10543 = t5317*t2897;
  t10547 = t6973*t5941*t7040;
  t10551 = t10543 + t10547;
  t10563 = t3309*t10533;
  t10587 = t3024*t10551;
  t10608 = t10563 + t10587;
  t10858 = -1.*t6973*t5317*t5941;
  t10866 = t2897*t7040;
  t10867 = t10858 + t10866;
  t10888 = -1.*t3309*t10867;
  t10889 = t10888 + t10587;
  t10718 = -1.*t3309*t10551;
  t11107 = t3024*t10867;
  t11112 = t3309*t10551;
  t11116 = t11107 + t11112;
  t11127 = -1.*t6973*t2600*t2800;
  t11129 = -1.*t9687*t11116;
  t11130 = t11127 + t11129;
  t11136 = t9687*t6973*t2600;
  t11153 = -1.*t2800*t11116;
  t11159 = t11136 + t11153;
  t11266 = t6973*t2600*t2800;
  t11294 = t9687*t11116;
  t11295 = t11266 + t11294;
  p_output1[0]=1.;
  p_output1[1]=-0.50321*t10041*t10097 - 0.28121*t2600*t2800*t2897 + t5295*t7062 + t9403*t9427 - 0.15121*(-1.*t3309*t7062 + t3024*t9427) - 0.28121*t9704*t9765 - 0.50321*t9904*t9997 - 0.19821*(-1.*t10041*t10097 + t9839*t9997);
  p_output1[2]=-0.50321*t10041*t10487 - 1.*t2600*t5295*t5317*t6973 - 0.28121*t2800*t5941*t6973 - 0.15121*(t2600*t3309*t5317*t6973 + t2600*t3024*t6973*t7040) + t2600*t6973*t7040*t9403 - 0.28121*t10153*t9704 - 0.19821*(-1.*t10041*t10487 + t10400*t9839) - 0.50321*t10400*t9904;
  p_output1[3]=0.50321*t10041*t10608*t2800 - 0.15121*(t10718 + t10533*t3024) + t10551*t5295 + t10533*t9403 - 0.28121*t10608*t9704 - 0.19821*(t10041*t10608*t2800 + t10608*t9687*t9839) - 0.50321*t10608*t9687*t9904;
  p_output1[4]=0.50321*t10041*t10889*t2800 - 0.15121*(t10718 - 1.*t10867*t3024) + t10867*(-0.15121*t3024 + t3843) + t10551*(0.15121*t3024 + t3843) - 0.28121*t10889*t9704 - 0.19821*(t10041*t10889*t2800 + t10889*t9687*t9839) - 0.50321*t10889*t9687*t9904;
  p_output1[5]=-0.50321*t10041*t11130 - 0.28121*t11116*t2800 + 0.28121*t2600*t6973*t9687 - 0.19821*(-1.*t10041*t11130 + t11159*t9839) - 0.50321*t11159*t9904;
  p_output1[6]=-0.50321*t10041*t11295 - 0.50321*t11159*t9839 - 0.19821*(-1.*t10041*t11295 - 1.*t11159*t9839);
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
