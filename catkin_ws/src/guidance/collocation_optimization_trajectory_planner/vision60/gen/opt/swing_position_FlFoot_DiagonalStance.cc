/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:06:57 GMT+02:00
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
  double t1008;
  double t1083;
  double t807;
  double t1070;
  double t1085;
  double t1166;
  double t1169;
  double t1170;
  double t1173;
  double t1177;
  double t1178;
  double t562;
  double t1074;
  double t1088;
  double t1112;
  double t1191;
  double t1192;
  double t1194;
  double t1200;
  double t1214;
  double t1220;
  double t1230;
  double t1231;
  double t1234;
  double t1236;
  double t1238;
  double t1240;
  t1008 = Cos(var1[5]);
  t1083 = Sin(var1[3]);
  t807 = Cos(var1[3]);
  t1070 = Sin(var1[4]);
  t1085 = Sin(var1[5]);
  t1166 = Cos(var1[6]);
  t1169 = t1008*t1083;
  t1170 = t807*t1070*t1085;
  t1173 = t1169 + t1170;
  t1177 = Cos(var1[4]);
  t1178 = Sin(var1[6]);
  t562 = Cos(var1[7]);
  t1074 = -1.*t807*t1008*t1070;
  t1088 = t1083*t1085;
  t1112 = t1074 + t1088;
  t1191 = t807*t1177*t1166;
  t1192 = -1.*t1173*t1178;
  t1194 = t1191 + t1192;
  t1200 = Sin(var1[7]);
  t1214 = Cos(var1[8]);
  t1220 = t562*t1112;
  t1230 = t1194*t1200;
  t1231 = t1220 + t1230;
  t1234 = t562*t1194;
  t1236 = -1.*t1112*t1200;
  t1238 = t1234 + t1236;
  t1240 = Sin(var1[8]);
  p_output1[0]=0.1575*(1. - 1.*t1166)*t1173 - 0.325*t1194*t1200 + 0.075*(1. - 1.*t1214)*t1231 + 0.075*t1238*t1240 - 0.0641*(t1214*t1238 + t1231*t1240) + 0.355*(t1214*t1231 - 1.*t1238*t1240) + 0.325*t1112*(1. - 1.*t562) - 0.1575*t1177*t1178*t807 + 0.2255*(t1166*t1173 + t1177*t1178*t807) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "swing_position_FlFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void swing_position_FlFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
