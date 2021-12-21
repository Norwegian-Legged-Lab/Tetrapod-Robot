/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 23:16:46 GMT+01:00
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
  double t147;
  double t269;
  double t569;
  double t1313;
  double t1423;
  double t1316;
  double t1368;
  double t1450;
  double t594;
  double t1398;
  double t1451;
  double t1457;
  double t1471;
  double t1496;
  double t1507;
  double t1536;
  double t1169;
  double t1295;
  double t1863;
  double t1923;
  double t2059;
  double t2071;
  double t2106;
  double t1975;
  double t1994;
  double t2008;
  double t1537;
  double t1540;
  double t1551;
  double t1560;
  double t2014;
  double t2137;
  double t2157;
  double t2179;
  double t2215;
  double t2220;
  double t1617;
  double t2675;
  double t2716;
  double t2722;
  double t2561;
  double t2566;
  double t2567;
  double t2614;
  double t2758;
  double t2760;
  double t2834;
  double t2837;
  double t2843;
  t147 = Cos(var1[7]);
  t269 = -1.*t147;
  t569 = 1. + t269;
  t1313 = Cos(var1[4]);
  t1423 = Cos(var1[5]);
  t1316 = Cos(var1[6]);
  t1368 = Sin(var1[5]);
  t1450 = Sin(var1[6]);
  t594 = Sin(var1[4]);
  t1398 = -1.*t1313*t1316*t1368;
  t1451 = -1.*t1313*t1423*t1450;
  t1457 = t1398 + t1451;
  t1471 = t1313*t1423*t1316;
  t1496 = -1.*t1313*t1368*t1450;
  t1507 = t1471 + t1496;
  t1536 = Sin(var1[7]);
  t1169 = -1.6e-11*t569;
  t1295 = 1. + t1169;
  t1863 = Sin(var1[3]);
  t1923 = Cos(var1[3]);
  t2059 = t1423*t1863*t594;
  t2071 = t1923*t1368;
  t2106 = t2059 + t2071;
  t1975 = t1923*t1423;
  t1994 = -1.*t1863*t594*t1368;
  t2008 = t1975 + t1994;
  t1537 = 4.e-6*t1536;
  t1540 = 0. + t1537;
  t1551 = -1.*t569;
  t1560 = 1. + t1551;
  t2014 = t1316*t2008;
  t2137 = -1.*t2106*t1450;
  t2157 = t2014 + t2137;
  t2179 = t1316*t2106;
  t2215 = t2008*t1450;
  t2220 = t2179 + t2215;
  t1617 = 0. + t1536;
  t2675 = -1.*t1923*t1423*t594;
  t2716 = t1863*t1368;
  t2722 = t2675 + t2716;
  t2561 = t1423*t1863;
  t2566 = t1923*t594*t1368;
  t2567 = t2561 + t2566;
  t2614 = t1316*t2567;
  t2758 = -1.*t2722*t1450;
  t2760 = t2614 + t2758;
  t2834 = t1316*t2722;
  t2837 = t2567*t1450;
  t2843 = t2834 + t2837;
  p_output1[0]=t1295*t1457 + t1507*t1540 - 4.e-6*t569*t594 - 4.e-6*(t1507*t1617 - 4.e-6*t1457*t569 + t1560*t594);
  p_output1[1]=t1295*t2157 + t1540*t2220 + 4.e-6*t1313*t1863*t569 - 4.e-6*(-1.*t1313*t1560*t1863 + t1617*t2220 - 4.e-6*t2157*t569);
  p_output1[2]=t1295*t2760 + t1540*t2843 - 4.e-6*t1313*t1923*t569 - 4.e-6*(t1313*t1560*t1923 + t1617*t2843 - 4.e-6*t2760*t569);
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

#include "Joint_fl_hip_pitch_axis.hh"

namespace SymFunction
{

void Joint_fl_hip_pitch_axis_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
