/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 19:01:52 GMT+02:00
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
  double t3191;
  double t3268;
  double t3309;
  double t4080;
  double t4175;
  double t5317;
  double t8920;
  double t8180;
  double t8855;
  double t9062;
  double t8919;
  double t9427;
  double t9652;
  double t9731;
  double t9918;
  double t9997;
  double t3025;
  double t3136;
  double t10487;
  double t10866;
  double t10867;
  double t10888;
  double t11153;
  double t11294;
  double t11295;
  double t11380;
  double t12795;
  double t13137;
  double t13668;
  double t13673;
  double t4095;
  double t7061;
  double t9687;
  double t9693;
  double t10522;
  double t10718;
  double t11159;
  double t11266;
  double t15181;
  double t15351;
  double t15360;
  double t15392;
  double t15393;
  double t15703;
  double t16485;
  double t16569;
  double t16579;
  double t16655;
  double t16656;
  double t16659;
  double t16667;
  double t16669;
  double t16672;
  double t17044;
  double t17049;
  double t17050;
  double t17317;
  double t17347;
  double t17348;
  double t17355;
  double t17616;
  double t17617;
  double t17073;
  double t17841;
  double t17845;
  double t17846;
  double t17851;
  double t17863;
  double t17865;
  double t17868;
  double t17872;
  double t17873;
  double t18037;
  double t18041;
  double t18043;
  t3191 = Sin(var1[3]);
  t3268 = Cos(var1[12]);
  t3309 = -1.*t3268;
  t4080 = 1. + t3309;
  t4175 = Sin(var1[12]);
  t5317 = -0.15121*t4175;
  t8920 = Cos(var1[3]);
  t8180 = Cos(var1[5]);
  t8855 = Sin(var1[4]);
  t9062 = Sin(var1[5]);
  t8919 = t8180*t3191*t8855;
  t9427 = t8920*t9062;
  t9652 = t8919 + t9427;
  t9731 = t8920*t8180;
  t9918 = -1.*t3191*t8855*t9062;
  t9997 = t9731 + t9918;
  t3025 = Cos(var1[4]);
  t3136 = Sin(var1[13]);
  t10487 = Cos(var1[13]);
  t10866 = t3268*t9652;
  t10867 = t4175*t9997;
  t10888 = t10866 + t10867;
  t11153 = Cos(var1[14]);
  t11294 = t3025*t3136*t3191;
  t11295 = t10487*t10888;
  t11380 = t11294 + t11295;
  t12795 = Sin(var1[14]);
  t13137 = -1.*t10487*t3025*t3191;
  t13668 = t3136*t10888;
  t13673 = t13137 + t13668;
  t4095 = 0.15121*t4080;
  t7061 = t4095 + t5317;
  t9687 = -0.15121*t4080;
  t9693 = t9687 + t5317;
  t10522 = -1.*t10487;
  t10718 = 1. + t10522;
  t11159 = -1.*t11153;
  t11266 = 1. + t11159;
  t15181 = -1.*t3268*t8920*t3025*t8180;
  t15351 = t8920*t3025*t4175*t9062;
  t15360 = t15181 + t15351;
  t15392 = t8920*t3136*t8855;
  t15393 = t10487*t15360;
  t15703 = t15392 + t15393;
  t16485 = -1.*t10487*t8920*t8855;
  t16569 = t3136*t15360;
  t16579 = t16485 + t16569;
  t16655 = t8920*t8180*t8855;
  t16656 = -1.*t3191*t9062;
  t16659 = t16655 + t16656;
  t16667 = t8180*t3191;
  t16669 = t8920*t8855*t9062;
  t16672 = t16667 + t16669;
  t17044 = t4175*t16659;
  t17049 = t3268*t16672;
  t17050 = t17044 + t17049;
  t17317 = -0.15121*t3268;
  t17347 = -1.*t8920*t8180*t8855;
  t17348 = t3191*t9062;
  t17355 = t17347 + t17348;
  t17616 = -1.*t4175*t17355;
  t17617 = t17616 + t17049;
  t17073 = -1.*t4175*t16672;
  t17841 = t3268*t17355;
  t17845 = t4175*t16672;
  t17846 = t17841 + t17845;
  t17851 = -1.*t8920*t3025*t3136;
  t17863 = t10487*t17846;
  t17865 = t17851 + t17863;
  t17868 = -1.*t10487*t8920*t3025;
  t17872 = -1.*t3136*t17846;
  t17873 = t17868 + t17872;
  t18037 = t10487*t8920*t3025;
  t18041 = t3136*t17846;
  t18043 = t18037 + t18041;
  p_output1[0]=1.;
  p_output1[1]=0.28121*t10718*t10888 + 0.50321*t11266*t11380 - 0.50321*t12795*t13673 + 0.19821*(t11153*t11380 + t12795*t13673) - 0.28121*t3025*t3136*t3191 + t7061*t9652 + t9693*t9997 - 0.15121*(-1.*t4175*t9652 + t3268*t9997);
  p_output1[2]=0.28121*t10718*t15360 + 0.50321*t11266*t15703 - 0.50321*t12795*t16579 + 0.19821*(t11153*t15703 + t12795*t16579) - 1.*t3025*t7061*t8180*t8920 - 0.28121*t3136*t8855*t8920 - 0.15121*(t3025*t4175*t8180*t8920 + t3025*t3268*t8920*t9062) + t3025*t8920*t9062*t9693;
  p_output1[3]=0.28121*t10718*t17050 + 0.50321*t10487*t11266*t17050 - 0.50321*t12795*t17050*t3136 + 0.19821*(t10487*t11153*t17050 + t12795*t17050*t3136) - 0.15121*(t17073 + t16659*t3268) + t16672*t7061 + t16659*t9693;
  p_output1[4]=0.28121*t10718*t17617 + 0.50321*t10487*t11266*t17617 - 0.50321*t12795*t17617*t3136 + 0.19821*(t10487*t11153*t17617 + t12795*t17617*t3136) - 0.15121*(t17073 - 1.*t17355*t3268) + t17355*(t17317 + 0.15121*t4175) + t16672*(t17317 + t5317);
  p_output1[5]=-0.50321*t12795*t17865 + 0.50321*t11266*t17873 + 0.19821*(t12795*t17865 + t11153*t17873) + 0.28121*t17846*t3136 + 0.28121*t10487*t3025*t8920;
  p_output1[6]=0.50321*t12795*t17865 - 0.50321*t11153*t18043 + 0.19821*(-1.*t12795*t17865 + t11153*t18043);
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

#include "J_u_frontSwingFootHeight4_ParallelStance2_ParallelStance2.hh"

namespace SymFunction
{

void J_u_frontSwingFootHeight4_ParallelStance2_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
