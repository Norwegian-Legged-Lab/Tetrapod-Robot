/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 17:01:25 GMT+02:00
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
  double t3246;
  double t3782;
  double t4026;
  double t4735;
  double t4817;
  double t4844;
  double t5527;
  double t4881;
  double t5106;
  double t5562;
  double t5357;
  double t6825;
  double t7134;
  double t7462;
  double t7503;
  double t7515;
  double t2027;
  double t2639;
  double t7795;
  double t7843;
  double t7894;
  double t7906;
  double t7918;
  double t8288;
  double t8315;
  double t8326;
  double t8375;
  double t8419;
  double t8468;
  double t8488;
  double t4810;
  double t4855;
  double t7428;
  double t7449;
  double t7820;
  double t7826;
  double t7951;
  double t8219;
  double t9933;
  double t9934;
  double t9935;
  double t10018;
  double t10035;
  double t10036;
  double t10050;
  double t10056;
  double t10058;
  double t10222;
  double t10231;
  double t10232;
  double t10241;
  double t10245;
  double t10246;
  double t10250;
  double t10251;
  double t10253;
  double t10288;
  double t10307;
  double t10308;
  double t10312;
  double t10350;
  double t10359;
  double t10264;
  double t10496;
  double t10497;
  double t10498;
  double t10518;
  double t10521;
  double t10522;
  double t10537;
  double t10539;
  double t10555;
  double t10642;
  double t10643;
  double t10651;
  t3246 = Sin(var1[3]);
  t3782 = Cos(var1[9]);
  t4026 = -1.*t3782;
  t4735 = 1. + t4026;
  t4817 = Sin(var1[9]);
  t4844 = 0.15121*t4817;
  t5527 = Cos(var1[3]);
  t4881 = Cos(var1[5]);
  t5106 = Sin(var1[4]);
  t5562 = Sin(var1[5]);
  t5357 = t4881*t3246*t5106;
  t6825 = t5527*t5562;
  t7134 = t5357 + t6825;
  t7462 = t5527*t4881;
  t7503 = -1.*t3246*t5106*t5562;
  t7515 = t7462 + t7503;
  t2027 = Cos(var1[4]);
  t2639 = Sin(var1[10]);
  t7795 = Cos(var1[10]);
  t7843 = t3782*t7134;
  t7894 = t4817*t7515;
  t7906 = t7843 + t7894;
  t7918 = Cos(var1[11]);
  t8288 = -1.*t2027*t2639*t3246;
  t8315 = t7795*t7906;
  t8326 = t8288 + t8315;
  t8375 = Sin(var1[11]);
  t8419 = -1.*t7795*t2027*t3246;
  t8468 = -1.*t2639*t7906;
  t8488 = t8419 + t8468;
  t4810 = -0.15121*t4735;
  t4855 = t4810 + t4844;
  t7428 = 0.15121*t4735;
  t7449 = t7428 + t4844;
  t7820 = -1.*t7795;
  t7826 = 1. + t7820;
  t7951 = -1.*t7918;
  t8219 = 1. + t7951;
  t9933 = -1.*t3782*t5527*t2027*t4881;
  t9934 = t5527*t2027*t4817*t5562;
  t9935 = t9933 + t9934;
  t10018 = -1.*t5527*t2639*t5106;
  t10035 = t7795*t9935;
  t10036 = t10018 + t10035;
  t10050 = -1.*t7795*t5527*t5106;
  t10056 = -1.*t2639*t9935;
  t10058 = t10050 + t10056;
  t10222 = t5527*t4881*t5106;
  t10231 = -1.*t3246*t5562;
  t10232 = t10222 + t10231;
  t10241 = t4881*t3246;
  t10245 = t5527*t5106*t5562;
  t10246 = t10241 + t10245;
  t10250 = t4817*t10232;
  t10251 = t3782*t10246;
  t10253 = t10250 + t10251;
  t10288 = 0.15121*t3782;
  t10307 = -1.*t5527*t4881*t5106;
  t10308 = t3246*t5562;
  t10312 = t10307 + t10308;
  t10350 = -1.*t4817*t10312;
  t10359 = t10350 + t10251;
  t10264 = -1.*t4817*t10246;
  t10496 = t3782*t10312;
  t10497 = t4817*t10246;
  t10498 = t10496 + t10497;
  t10518 = -1.*t5527*t2027*t2639;
  t10521 = -1.*t7795*t10498;
  t10522 = t10518 + t10521;
  t10537 = t7795*t5527*t2027;
  t10539 = -1.*t2639*t10498;
  t10555 = t10537 + t10539;
  t10642 = t5527*t2027*t2639;
  t10643 = t7795*t10498;
  t10651 = t10642 + t10643;
  p_output1[0]=1.;
  p_output1[1]=-0.28121*t2027*t2639*t3246 + t4855*t7134 + t7449*t7515 + 0.15121*(-1.*t4817*t7134 + t3782*t7515) - 0.28121*t7826*t7906 - 0.50321*t8219*t8326 - 0.50321*t8375*t8488 - 0.19821*(t7918*t8326 - 1.*t8375*t8488);
  p_output1[2]=-1.*t2027*t4855*t4881*t5527 - 0.28121*t2639*t5106*t5527 + 0.15121*(t2027*t4817*t4881*t5527 + t2027*t3782*t5527*t5562) + t2027*t5527*t5562*t7449 - 0.50321*t10036*t8219 - 0.50321*t10058*t8375 - 0.19821*(t10036*t7918 - 1.*t10058*t8375) - 0.28121*t7826*t9935;
  p_output1[3]=0.15121*(t10264 + t10232*t3782) + t10246*t4855 + t10232*t7449 - 0.28121*t10253*t7826 - 0.50321*t10253*t7795*t8219 + 0.50321*t10253*t2639*t8375 - 0.19821*(t10253*t7795*t7918 + t10253*t2639*t8375);
  p_output1[4]=0.15121*(t10264 - 1.*t10312*t3782) + t10312*(t10288 - 0.15121*t4817) + t10246*(t10288 + t4844) - 0.28121*t10359*t7826 - 0.50321*t10359*t7795*t8219 + 0.50321*t10359*t2639*t8375 - 0.19821*(t10359*t7795*t7918 + t10359*t2639*t8375);
  p_output1[5]=-0.28121*t10498*t2639 + 0.28121*t2027*t5527*t7795 - 0.50321*t10555*t8219 - 0.50321*t10522*t8375 - 0.19821*(t10555*t7918 - 1.*t10522*t8375);
  p_output1[6]=-0.50321*t10555*t7918 - 0.50321*t10651*t8375 - 0.19821*(-1.*t10555*t7918 - 1.*t10651*t8375);
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

#include "J_swing_position_RlFoot_ParallelStance.hh"

namespace ParallelStance
{

void J_swing_position_RlFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
