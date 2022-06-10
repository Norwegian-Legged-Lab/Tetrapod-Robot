/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:31:27 GMT+02:00
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
  double t324;
  double t1218;
  double t1317;
  double t73;
  double t1345;
  double t1688;
  double t1719;
  double t2232;
  double t2280;
  double t2296;
  double t1039;
  double t1540;
  double t1596;
  double t2436;
  double t2454;
  double t2631;
  double t3173;
  double t3473;
  double t3842;
  double t4017;
  double t4071;
  double t4076;
  double t4503;
  double t4748;
  double t4806;
  double t4851;
  double t5003;
  double t5119;
  double t5159;
  double t5190;
  double t2324;
  double t2329;
  double t2788;
  double t2854;
  double t3266;
  double t3383;
  double t4724;
  double t4744;
  double t6765;
  double t6842;
  double t6909;
  double t6933;
  double t7065;
  double t7070;
  double t7229;
  double t7361;
  double t7438;
  double t8076;
  double t8081;
  double t8082;
  double t7665;
  double t7830;
  double t8068;
  double t8092;
  double t8105;
  double t8465;
  double t8962;
  double t8988;
  double t8992;
  double t9024;
  double t9036;
  double t8524;
  double t9331;
  double t9347;
  double t9403;
  double t9466;
  double t9820;
  double t9872;
  double t10176;
  double t10337;
  double t10425;
  double t10987;
  double t11004;
  double t11005;
  t324 = Cos(var1[5]);
  t1218 = Sin(var1[3]);
  t1317 = Sin(var1[4]);
  t73 = Cos(var1[3]);
  t1345 = Sin(var1[5]);
  t1688 = Cos(var1[6]);
  t1719 = -1.*t1688;
  t2232 = 1. + t1719;
  t2280 = 0.15121*t2232;
  t2296 = Sin(var1[6]);
  t1039 = t73*t324;
  t1540 = -1.*t1218*t1317*t1345;
  t1596 = t1039 + t1540;
  t2436 = t324*t1218*t1317;
  t2454 = t73*t1345;
  t2631 = t2436 + t2454;
  t3173 = Cos(var1[7]);
  t3473 = t1688*t2631;
  t3842 = t1596*t2296;
  t4017 = t3473 + t3842;
  t4071 = Cos(var1[4]);
  t4076 = Sin(var1[7]);
  t4503 = Cos(var1[8]);
  t4748 = t3173*t4017;
  t4806 = t4071*t1218*t4076;
  t4851 = t4748 + t4806;
  t5003 = -1.*t4071*t3173*t1218;
  t5119 = t4017*t4076;
  t5159 = t5003 + t5119;
  t5190 = Sin(var1[8]);
  t2324 = -0.15121*t2296;
  t2329 = t2280 + t2324;
  t2788 = 0.15121*t2296;
  t2854 = t2280 + t2788;
  t3266 = -1.*t3173;
  t3383 = 1. + t3266;
  t4724 = -1.*t4503;
  t4744 = 1. + t4724;
  t6765 = -1.*t73*t4071*t324*t1688;
  t6842 = t73*t4071*t1345*t2296;
  t6909 = t6765 + t6842;
  t6933 = t3173*t6909;
  t7065 = t73*t1317*t4076;
  t7070 = t6933 + t7065;
  t7229 = -1.*t73*t3173*t1317;
  t7361 = t6909*t4076;
  t7438 = t7229 + t7361;
  t8076 = t324*t1218;
  t8081 = t73*t1317*t1345;
  t8082 = t8076 + t8081;
  t7665 = t73*t324*t1317;
  t7830 = -1.*t1218*t1345;
  t8068 = t7665 + t7830;
  t8092 = t1688*t8082;
  t8105 = t8068*t2296;
  t8465 = t8092 + t8105;
  t8962 = -1.*t73*t324*t1317;
  t8988 = t1218*t1345;
  t8992 = t8962 + t8988;
  t9024 = -1.*t8992*t2296;
  t9036 = t8092 + t9024;
  t8524 = -1.*t8082*t2296;
  t9331 = t1688*t8992;
  t9347 = t8082*t2296;
  t9403 = t9331 + t9347;
  t9466 = -1.*t73*t4071*t3173;
  t9820 = -1.*t9403*t4076;
  t9872 = t9466 + t9820;
  t10176 = t3173*t9403;
  t10337 = -1.*t73*t4071*t4076;
  t10425 = t10176 + t10337;
  t10987 = t73*t4071*t3173;
  t11004 = t9403*t4076;
  t11005 = t10987 + t11004;
  p_output1[0]=1.;
  p_output1[1]=t1596*t2329 + 0.15121*(t1596*t1688 - 1.*t2296*t2631) + t2631*t2854 + 0.28121*t3383*t4017 - 0.28121*t1218*t4071*t4076 + 0.50321*t4744*t4851 - 0.50321*t5159*t5190 + 0.19821*(t4503*t4851 + t5159*t5190);
  p_output1[2]=0.28121*t3383*t6909 + 0.50321*t4744*t7070 + t1345*t2329*t4071*t73 - 1.*t2854*t324*t4071*t73 - 0.28121*t1317*t4076*t73 + 0.15121*(t1345*t1688*t4071*t73 + t2296*t324*t4071*t73) - 0.50321*t5190*t7438 + 0.19821*(t4503*t7070 + t5190*t7438);
  p_output1[3]=t2329*t8068 + t2854*t8082 + 0.28121*t3383*t8465 + 0.50321*t3173*t4744*t8465 - 0.50321*t4076*t5190*t8465 + 0.19821*(t3173*t4503*t8465 + t4076*t5190*t8465) + 0.15121*(t1688*t8068 + t8524);
  p_output1[4]=(-0.15121*t1688 + t2788)*t8082 + (0.15121*t1688 + t2788)*t8992 + 0.15121*(t8524 - 1.*t1688*t8992) + 0.28121*t3383*t9036 + 0.50321*t3173*t4744*t9036 - 0.50321*t4076*t5190*t9036 + 0.19821*(t3173*t4503*t9036 + t4076*t5190*t9036);
  p_output1[5]=-0.50321*t10425*t5190 + 0.28121*t3173*t4071*t73 + 0.28121*t4076*t9403 + 0.50321*t4744*t9872 + 0.19821*(t10425*t5190 + t4503*t9872);
  p_output1[6]=-0.50321*t11005*t4503 + 0.50321*t10425*t5190 + 0.19821*(t11005*t4503 - 1.*t10425*t5190);
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

#include "J_u_frontSwingFootHeightflat_ParallelStance_ParallelStance.hh"

namespace SymFunction
{

void J_u_frontSwingFootHeightflat_ParallelStance_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
