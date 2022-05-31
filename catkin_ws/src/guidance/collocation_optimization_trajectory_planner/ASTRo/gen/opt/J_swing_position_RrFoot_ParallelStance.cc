/*
 * Automatically Generated from Mathematica.
 * Thu 26 May 2022 14:48:53 GMT+02:00
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
  double t16777;
  double t16868;
  double t16870;
  double t16871;
  double t16911;
  double t16920;
  double t17038;
  double t16932;
  double t16936;
  double t17042;
  double t16943;
  double t17043;
  double t17058;
  double t17081;
  double t17084;
  double t17086;
  double t8541;
  double t16682;
  double t17100;
  double t17138;
  double t17142;
  double t17167;
  double t17183;
  double t17198;
  double t17208;
  double t17238;
  double t17295;
  double t17585;
  double t17604;
  double t17622;
  double t16921;
  double t16924;
  double t17068;
  double t17077;
  double t17103;
  double t17104;
  double t17186;
  double t17195;
  double t17889;
  double t17909;
  double t17926;
  double t17945;
  double t17961;
  double t17981;
  double t18014;
  double t18034;
  double t18051;
  double t18106;
  double t18113;
  double t18141;
  double t18172;
  double t18189;
  double t18205;
  double t18240;
  double t18256;
  double t18274;
  double t18506;
  double t18523;
  double t18539;
  double t18735;
  double t18745;
  double t18358;
  double t18985;
  double t19000;
  double t19014;
  double t19057;
  double t19070;
  double t19092;
  double t19115;
  double t19153;
  double t19155;
  double t19209;
  double t19228;
  double t19245;
  t16777 = Sin(var1[3]);
  t16868 = Cos(var1[15]);
  t16870 = -1.*t16868;
  t16871 = 1. + t16870;
  t16911 = -0.15121*t16871;
  t16920 = Sin(var1[15]);
  t17038 = Cos(var1[3]);
  t16932 = Cos(var1[5]);
  t16936 = Sin(var1[4]);
  t17042 = Sin(var1[5]);
  t16943 = t16932*t16777*t16936;
  t17043 = t17038*t17042;
  t17058 = t16943 + t17043;
  t17081 = t17038*t16932;
  t17084 = -1.*t16777*t16936*t17042;
  t17086 = t17081 + t17084;
  t8541 = Cos(var1[4]);
  t16682 = Sin(var1[16]);
  t17100 = Cos(var1[16]);
  t17138 = t16868*t17058;
  t17142 = t16920*t17086;
  t17167 = t17138 + t17142;
  t17183 = Cos(var1[17]);
  t17198 = -1.*t8541*t16682*t16777;
  t17208 = t17100*t17167;
  t17238 = t17198 + t17208;
  t17295 = Sin(var1[17]);
  t17585 = -1.*t17100*t8541*t16777;
  t17604 = -1.*t16682*t17167;
  t17622 = t17585 + t17604;
  t16921 = -0.15121*t16920;
  t16924 = t16911 + t16921;
  t17068 = 0.15121*t16920;
  t17077 = t16911 + t17068;
  t17103 = -1.*t17100;
  t17104 = 1. + t17103;
  t17186 = -1.*t17183;
  t17195 = 1. + t17186;
  t17889 = -1.*t16868*t17038*t8541*t16932;
  t17909 = t17038*t8541*t16920*t17042;
  t17926 = t17889 + t17909;
  t17945 = -1.*t17038*t16682*t16936;
  t17961 = t17100*t17926;
  t17981 = t17945 + t17961;
  t18014 = -1.*t17100*t17038*t16936;
  t18034 = -1.*t16682*t17926;
  t18051 = t18014 + t18034;
  t18106 = t17038*t16932*t16936;
  t18113 = -1.*t16777*t17042;
  t18141 = t18106 + t18113;
  t18172 = t16932*t16777;
  t18189 = t17038*t16936*t17042;
  t18205 = t18172 + t18189;
  t18240 = t16920*t18141;
  t18256 = t16868*t18205;
  t18274 = t18240 + t18256;
  t18506 = -1.*t17038*t16932*t16936;
  t18523 = t16777*t17042;
  t18539 = t18506 + t18523;
  t18735 = -1.*t16920*t18539;
  t18745 = t18735 + t18256;
  t18358 = -1.*t16920*t18205;
  t18985 = t16868*t18539;
  t19000 = t16920*t18205;
  t19014 = t18985 + t19000;
  t19057 = -1.*t17038*t8541*t16682;
  t19070 = -1.*t17100*t19014;
  t19092 = t19057 + t19070;
  t19115 = t17100*t17038*t8541;
  t19153 = -1.*t16682*t19014;
  t19155 = t19115 + t19153;
  t19209 = t17038*t8541*t16682;
  t19228 = t17100*t19014;
  t19245 = t19209 + t19228;
  p_output1[0]=1.;
  p_output1[1]=t16924*t17058 + t17077*t17086 - 0.15121*(-1.*t16920*t17058 + t16868*t17086) - 0.28121*t17104*t17167 - 0.50321*t17195*t17238 - 0.50321*t17295*t17622 - 0.19821*(t17183*t17238 - 1.*t17295*t17622) - 0.28121*t16682*t16777*t8541;
  p_output1[2]=-0.28121*t16682*t16936*t17038 - 0.28121*t17104*t17926 - 0.50321*t17195*t17981 - 0.50321*t17295*t18051 - 0.19821*(t17183*t17981 - 1.*t17295*t18051) - 1.*t16924*t16932*t17038*t8541 + t17038*t17042*t17077*t8541 - 0.15121*(t16920*t16932*t17038*t8541 + t16868*t17038*t17042*t8541);
  p_output1[3]=t17077*t18141 + t16924*t18205 - 0.28121*t17104*t18274 - 0.50321*t17100*t17195*t18274 + 0.50321*t16682*t17295*t18274 - 0.19821*(t17100*t17183*t18274 + t16682*t17295*t18274) - 0.15121*(t16868*t18141 + t18358);
  p_output1[4]=(0.15121*t16868 + t16921)*t18205 + (-0.15121*t16868 + t16921)*t18539 - 0.15121*(t18358 - 1.*t16868*t18539) - 0.28121*t17104*t18745 - 0.50321*t17100*t17195*t18745 + 0.50321*t16682*t17295*t18745 - 0.19821*(t17100*t17183*t18745 + t16682*t17295*t18745);
  p_output1[5]=-0.28121*t16682*t19014 - 0.50321*t17295*t19092 - 0.50321*t17195*t19155 - 0.19821*(-1.*t17295*t19092 + t17183*t19155) + 0.28121*t17038*t17100*t8541;
  p_output1[6]=-0.50321*t17183*t19155 - 0.50321*t17295*t19245 - 0.19821*(-1.*t17183*t19155 - 1.*t17295*t19245);
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

#include "J_swing_position_RrFoot_ParallelStance.hh"

namespace ParallelStance
{

void J_swing_position_RrFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
