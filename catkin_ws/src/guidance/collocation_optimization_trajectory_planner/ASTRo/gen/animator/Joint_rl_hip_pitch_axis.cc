/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 23:17:22 GMT+01:00
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
  double t236;
  double t244;
  double t273;
  double t751;
  double t508;
  double t1015;
  double t916;
  double t920;
  double t1023;
  double t625;
  double t1075;
  double t1014;
  double t1041;
  double t1042;
  double t1107;
  double t1118;
  double t1124;
  double t367;
  double t1162;
  double t614;
  double t616;
  double t713;
  double t738;
  double t1419;
  double t1501;
  double t1087;
  double t1106;
  double t1468;
  double t1510;
  double t1554;
  double t1618;
  double t1643;
  double t1647;
  double t1172;
  double t1174;
  double t1200;
  double t1222;
  double t1563;
  double t1653;
  double t1661;
  double t1257;
  double t1268;
  double t1678;
  double t1691;
  double t1695;
  double t1363;
  double t1366;
  double t1377;
  double t1390;
  double t1402;
  double t2025;
  double t2030;
  double t2070;
  double t2092;
  double t2103;
  double t2114;
  double t2082;
  double t2124;
  double t2131;
  double t2167;
  double t2180;
  double t2199;
  t236 = Cos(var1[13]);
  t244 = -1.*t236;
  t273 = 1. + t244;
  t751 = Cos(var1[4]);
  t508 = Sin(var1[13]);
  t1015 = Cos(var1[12]);
  t916 = Cos(var1[5]);
  t920 = Sin(var1[12]);
  t1023 = Sin(var1[5]);
  t625 = Sin(var1[4]);
  t1075 = -7.e-6*t273;
  t1014 = -1.*t751*t916*t920;
  t1041 = -1.*t1015*t751*t1023;
  t1042 = t1014 + t1041;
  t1107 = t1015*t751*t916;
  t1118 = -1.*t751*t920*t1023;
  t1124 = t1107 + t1118;
  t367 = -4.e-6*t273;
  t1162 = 2.7999999999999997e-11*t273;
  t614 = -7.e-6*t508;
  t616 = t367 + t614;
  t713 = -6.5e-11*t273;
  t738 = 1. + t713;
  t1419 = Sin(var1[3]);
  t1501 = Cos(var1[3]);
  t1087 = 4.e-6*t508;
  t1106 = t1075 + t1087;
  t1468 = t916*t1419*t625;
  t1510 = t1501*t1023;
  t1554 = t1468 + t1510;
  t1618 = t1501*t916;
  t1643 = -1.*t1419*t625*t1023;
  t1647 = t1618 + t1643;
  t1172 = -1.*t508;
  t1174 = t1162 + t1172;
  t1200 = -4.e-6*t508;
  t1222 = t1075 + t1200;
  t1563 = -1.*t920*t1554;
  t1653 = t1015*t1647;
  t1661 = t1563 + t1653;
  t1257 = -1.000000000016*t273;
  t1268 = 1. + t1257;
  t1678 = t1015*t1554;
  t1691 = t920*t1647;
  t1695 = t1678 + t1691;
  t1363 = -1.000000000049*t273;
  t1366 = 1. + t1363;
  t1377 = 7.e-6*t508;
  t1390 = t367 + t1377;
  t1402 = t1162 + t508;
  t2025 = -1.*t1501*t916*t625;
  t2030 = t1419*t1023;
  t2070 = t2025 + t2030;
  t2092 = t916*t1419;
  t2103 = t1501*t625*t1023;
  t2114 = t2092 + t2103;
  t2082 = -1.*t920*t2070;
  t2124 = t1015*t2114;
  t2131 = t2082 + t2124;
  t2167 = t1015*t2070;
  t2180 = t920*t2114;
  t2199 = t2167 + t2180;
  p_output1[0]=t1106*t1124 + t616*t625 - 7.e-6*(t1042*t1222 + t1124*t1268 + t1174*t625) - 4.e-6*(t1042*t1390 + t1124*t1402 + t1366*t625) + t1042*t738;
  p_output1[1]=t1106*t1695 + t1661*t738 - 1.*t1419*t616*t751 - 7.e-6*(t1222*t1661 + t1268*t1695 - 1.*t1174*t1419*t751) - 4.e-6*(t1390*t1661 + t1402*t1695 - 1.*t1366*t1419*t751);
  p_output1[2]=t1106*t2199 + t2131*t738 + t1501*t616*t751 - 7.e-6*(t1222*t2131 + t1268*t2199 + t1174*t1501*t751) - 4.e-6*(t1390*t2131 + t1402*t2199 + t1366*t1501*t751);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Joint_rl_hip_pitch_axis.hh"

namespace SymFunction
{

void Joint_rl_hip_pitch_axis_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
