/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 23:17:39 GMT+01:00
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
  double t203;
  double t215;
  double t226;
  double t492;
  double t329;
  double t660;
  double t545;
  double t548;
  double t664;
  double t381;
  double t953;
  double t658;
  double t779;
  double t788;
  double t1038;
  double t1048;
  double t1060;
  double t307;
  double t1086;
  double t345;
  double t375;
  double t464;
  double t466;
  double t1493;
  double t1512;
  double t977;
  double t1030;
  double t1504;
  double t1518;
  double t1520;
  double t1529;
  double t1533;
  double t1544;
  double t1114;
  double t1181;
  double t1197;
  double t1525;
  double t1545;
  double t1549;
  double t1210;
  double t1220;
  double t1555;
  double t1556;
  double t1558;
  double t1247;
  double t1252;
  double t1276;
  double t1287;
  double t1378;
  double t1400;
  double t1615;
  double t1621;
  double t1631;
  double t1635;
  double t1638;
  double t1650;
  double t1632;
  double t1662;
  double t1666;
  double t1687;
  double t1688;
  double t1692;
  t203 = Cos(var1[16]);
  t215 = -1.*t203;
  t226 = 1. + t215;
  t492 = Cos(var1[4]);
  t329 = Sin(var1[16]);
  t660 = Cos(var1[15]);
  t545 = Cos(var1[5]);
  t548 = Sin(var1[15]);
  t664 = Sin(var1[5]);
  t381 = Sin(var1[4]);
  t953 = -7.e-6*t226;
  t658 = -1.*t492*t545*t548;
  t779 = -1.*t660*t492*t664;
  t788 = t658 + t779;
  t1038 = t660*t492*t545;
  t1048 = -1.*t492*t548*t664;
  t1060 = t1038 + t1048;
  t307 = 4.e-6*t226;
  t1086 = -2.7999999999999997e-11*t226;
  t345 = 7.e-6*t329;
  t375 = t307 + t345;
  t464 = -6.5e-11*t226;
  t466 = 1. + t464;
  t1493 = Sin(var1[3]);
  t1512 = Cos(var1[3]);
  t977 = 4.e-6*t329;
  t1030 = t953 + t977;
  t1504 = t545*t1493*t381;
  t1518 = t1512*t664;
  t1520 = t1504 + t1518;
  t1529 = t1512*t545;
  t1533 = -1.*t1493*t381*t664;
  t1544 = t1529 + t1533;
  t1114 = t1086 + t329;
  t1181 = -4.e-6*t329;
  t1197 = t953 + t1181;
  t1525 = -1.*t548*t1520;
  t1545 = t660*t1544;
  t1549 = t1525 + t1545;
  t1210 = -1.000000000016*t226;
  t1220 = 1. + t1210;
  t1555 = t660*t1520;
  t1556 = t548*t1544;
  t1558 = t1555 + t1556;
  t1247 = -1.000000000049*t226;
  t1252 = 1. + t1247;
  t1276 = -7.e-6*t329;
  t1287 = t307 + t1276;
  t1378 = -1.*t329;
  t1400 = t1086 + t1378;
  t1615 = -1.*t1512*t545*t381;
  t1621 = t1493*t664;
  t1631 = t1615 + t1621;
  t1635 = t545*t1493;
  t1638 = t1512*t381*t664;
  t1650 = t1635 + t1638;
  t1632 = -1.*t548*t1631;
  t1662 = t660*t1650;
  t1666 = t1632 + t1662;
  t1687 = t660*t1631;
  t1688 = t548*t1650;
  t1692 = t1687 + t1688;
  p_output1[0]=-1.*t1030*t1060 - 1.*t375*t381 - 1.*t466*t788 + 7.e-6*(t1060*t1220 + t1114*t381 + t1197*t788) - 4.e-6*(t1060*t1400 + t1252*t381 + t1287*t788);
  p_output1[1]=-1.*t1030*t1558 - 1.*t1549*t466 + t1493*t375*t492 + 7.e-6*(t1197*t1549 + t1220*t1558 - 1.*t1114*t1493*t492) - 4.e-6*(t1287*t1549 + t1400*t1558 - 1.*t1252*t1493*t492);
  p_output1[2]=-1.*t1030*t1692 - 1.*t1666*t466 - 1.*t1512*t375*t492 + 7.e-6*(t1197*t1666 + t1220*t1692 + t1114*t1512*t492) - 4.e-6*(t1287*t1666 + t1400*t1692 + t1252*t1512*t492);
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

#include "Joint_rr_hip_pitch_axis.hh"

namespace SymFunction
{

void Joint_rr_hip_pitch_axis_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
