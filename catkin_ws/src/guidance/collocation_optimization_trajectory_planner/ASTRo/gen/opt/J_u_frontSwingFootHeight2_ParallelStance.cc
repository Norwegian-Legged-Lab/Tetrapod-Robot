/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 14:38:07 GMT+02:00
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
  double t5680;
  double t5940;
  double t6368;
  double t5642;
  double t6388;
  double t7046;
  double t7236;
  double t7363;
  double t7400;
  double t7856;
  double t5689;
  double t6961;
  double t7033;
  double t8752;
  double t8876;
  double t8889;
  double t9018;
  double t9040;
  double t9087;
  double t9130;
  double t9139;
  double t9148;
  double t9172;
  double t9215;
  double t9217;
  double t9220;
  double t9231;
  double t9251;
  double t9252;
  double t9253;
  double t8054;
  double t8126;
  double t8892;
  double t8893;
  double t9024;
  double t9027;
  double t9196;
  double t9199;
  double t15274;
  double t15286;
  double t15478;
  double t15630;
  double t15684;
  double t15703;
  double t15725;
  double t15743;
  double t15749;
  double t16044;
  double t16143;
  double t16154;
  double t15910;
  double t15918;
  double t15919;
  double t16180;
  double t16190;
  double t16226;
  double t16929;
  double t16930;
  double t17024;
  double t17319;
  double t17320;
  double t16397;
  double t17556;
  double t17562;
  double t17569;
  double t17573;
  double t17578;
  double t17581;
  double t17586;
  double t17591;
  double t17592;
  double t19361;
  double t19406;
  double t19407;
  t5680 = Cos(var1[5]);
  t5940 = Sin(var1[3]);
  t6368 = Sin(var1[4]);
  t5642 = Cos(var1[3]);
  t6388 = Sin(var1[5]);
  t7046 = Cos(var1[6]);
  t7236 = -1.*t7046;
  t7363 = 1. + t7236;
  t7400 = 0.15121*t7363;
  t7856 = Sin(var1[6]);
  t5689 = t5642*t5680;
  t6961 = -1.*t5940*t6368*t6388;
  t7033 = t5689 + t6961;
  t8752 = t5680*t5940*t6368;
  t8876 = t5642*t6388;
  t8889 = t8752 + t8876;
  t9018 = Cos(var1[7]);
  t9040 = t7046*t8889;
  t9087 = t7033*t7856;
  t9130 = t9040 + t9087;
  t9139 = Cos(var1[4]);
  t9148 = Sin(var1[7]);
  t9172 = Cos(var1[8]);
  t9215 = t9018*t9130;
  t9217 = t9139*t5940*t9148;
  t9220 = t9215 + t9217;
  t9231 = -1.*t9139*t9018*t5940;
  t9251 = t9130*t9148;
  t9252 = t9231 + t9251;
  t9253 = Sin(var1[8]);
  t8054 = -0.15121*t7856;
  t8126 = t7400 + t8054;
  t8892 = 0.15121*t7856;
  t8893 = t7400 + t8892;
  t9024 = -1.*t9018;
  t9027 = 1. + t9024;
  t9196 = -1.*t9172;
  t9199 = 1. + t9196;
  t15274 = -1.*t5642*t9139*t5680*t7046;
  t15286 = t5642*t9139*t6388*t7856;
  t15478 = t15274 + t15286;
  t15630 = t9018*t15478;
  t15684 = t5642*t6368*t9148;
  t15703 = t15630 + t15684;
  t15725 = -1.*t5642*t9018*t6368;
  t15743 = t15478*t9148;
  t15749 = t15725 + t15743;
  t16044 = t5680*t5940;
  t16143 = t5642*t6368*t6388;
  t16154 = t16044 + t16143;
  t15910 = t5642*t5680*t6368;
  t15918 = -1.*t5940*t6388;
  t15919 = t15910 + t15918;
  t16180 = t7046*t16154;
  t16190 = t15919*t7856;
  t16226 = t16180 + t16190;
  t16929 = -1.*t5642*t5680*t6368;
  t16930 = t5940*t6388;
  t17024 = t16929 + t16930;
  t17319 = -1.*t17024*t7856;
  t17320 = t16180 + t17319;
  t16397 = -1.*t16154*t7856;
  t17556 = t7046*t17024;
  t17562 = t16154*t7856;
  t17569 = t17556 + t17562;
  t17573 = -1.*t5642*t9139*t9018;
  t17578 = -1.*t17569*t9148;
  t17581 = t17573 + t17578;
  t17586 = t9018*t17569;
  t17591 = -1.*t5642*t9139*t9148;
  t17592 = t17586 + t17591;
  t19361 = t5642*t9139*t9018;
  t19406 = t17569*t9148;
  t19407 = t19361 + t19406;
  p_output1[0]=1.;
  p_output1[1]=t7033*t8126 + 0.15121*(t7033*t7046 - 1.*t7856*t8889) + t8889*t8893 + 0.28121*t9027*t9130 - 0.28121*t5940*t9139*t9148 + 0.50321*t9199*t9220 - 0.50321*t9252*t9253 + 0.19821*(t9172*t9220 + t9252*t9253);
  p_output1[2]=0.28121*t15478*t9027 + t5642*t6388*t8126*t9139 - 1.*t5642*t5680*t8893*t9139 + 0.15121*(t5642*t6388*t7046*t9139 + t5642*t5680*t7856*t9139) - 0.28121*t5642*t6368*t9148 + 0.50321*t15703*t9199 - 0.50321*t15749*t9253 + 0.19821*(t15703*t9172 + t15749*t9253);
  p_output1[3]=0.15121*(t16397 + t15919*t7046) + t15919*t8126 + t16154*t8893 + 0.28121*t16226*t9027 + 0.50321*t16226*t9018*t9199 - 0.50321*t16226*t9148*t9253 + 0.19821*(t16226*t9018*t9172 + t16226*t9148*t9253);
  p_output1[4]=0.15121*(t16397 - 1.*t17024*t7046) + t16154*(-0.15121*t7046 + t8892) + t17024*(0.15121*t7046 + t8892) + 0.28121*t17320*t9027 + 0.50321*t17320*t9018*t9199 - 0.50321*t17320*t9148*t9253 + 0.19821*(t17320*t9018*t9172 + t17320*t9148*t9253);
  p_output1[5]=0.28121*t5642*t9018*t9139 + 0.28121*t17569*t9148 + 0.50321*t17581*t9199 - 0.50321*t17592*t9253 + 0.19821*(t17581*t9172 + t17592*t9253);
  p_output1[6]=-0.50321*t19407*t9172 + 0.50321*t17592*t9253 + 0.19821*(t19407*t9172 - 1.*t17592*t9253);
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

#include "J_u_frontSwingFootHeight2_ParallelStance.hh"

namespace ParallelStance
{

void J_u_frontSwingFootHeight2_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
