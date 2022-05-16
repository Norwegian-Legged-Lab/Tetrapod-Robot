/*
 * Automatically Generated from Mathematica.
 * Fri 13 May 2022 14:43:01 GMT+02:00
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
  double t42;
  double t83;
  double t150;
  double t572;
  double t766;
  double t875;
  double t79;
  double t1268;
  double t1500;
  double t1743;
  double t1753;
  double t1832;
  double t1939;
  double t1991;
  double t2051;
  double t2066;
  double t2067;
  double t2075;
  double t2079;
  double t2082;
  double t2148;
  double t2157;
  double t903;
  double t991;
  double t2372;
  double t2339;
  double t1396;
  double t1407;
  double t2365;
  double t2397;
  double t2412;
  double t2443;
  double t2448;
  double t2474;
  double t1667;
  double t1690;
  double t2053;
  double t2065;
  double t2681;
  double t2715;
  double t2732;
  double t2824;
  double t2839;
  double t2875;
  double t2890;
  double t2951;
  double t2952;
  double t3093;
  double t3186;
  double t3200;
  double t3237;
  double t3279;
  double t3324;
  double t3463;
  double t3487;
  double t3491;
  double t3506;
  double t3514;
  double t3519;
  double t3560;
  double t3565;
  double t3572;
  t42 = Cos(var1[4]);
  t83 = Cos(var1[6]);
  t150 = -1.*t83;
  t572 = 1. + t150;
  t766 = 0.15121*t572;
  t875 = Sin(var1[6]);
  t79 = Sin(var1[5]);
  t1268 = Cos(var1[5]);
  t1500 = Cos(var1[7]);
  t1743 = t42*t1268*t83;
  t1753 = -1.*t42*t79*t875;
  t1832 = t1743 + t1753;
  t1939 = Sin(var1[4]);
  t1991 = Sin(var1[7]);
  t2051 = Cos(var1[8]);
  t2066 = t1500*t1832;
  t2067 = -1.*t1939*t1991;
  t2075 = t2066 + t2067;
  t2079 = t1500*t1939;
  t2082 = t1832*t1991;
  t2148 = t2079 + t2082;
  t2157 = Sin(var1[8]);
  t903 = -0.15121*t875;
  t991 = t766 + t903;
  t2372 = Sin(var1[3]);
  t2339 = Cos(var1[3]);
  t1396 = 0.15121*t875;
  t1407 = t766 + t1396;
  t2365 = t2339*t1268;
  t2397 = -1.*t2372*t1939*t79;
  t2412 = t2365 + t2397;
  t2443 = t1268*t2372*t1939;
  t2448 = t2339*t79;
  t2474 = t2443 + t2448;
  t1667 = -1.*t1500;
  t1690 = 1. + t1667;
  t2053 = -1.*t2051;
  t2065 = 1. + t2053;
  t2681 = t83*t2474;
  t2715 = t2412*t875;
  t2732 = t2681 + t2715;
  t2824 = t1500*t2732;
  t2839 = t42*t2372*t1991;
  t2875 = t2824 + t2839;
  t2890 = -1.*t42*t1500*t2372;
  t2951 = t2732*t1991;
  t2952 = t2890 + t2951;
  t3093 = t1268*t2372;
  t3186 = t2339*t1939*t79;
  t3200 = t3093 + t3186;
  t3237 = -1.*t2339*t1268*t1939;
  t3279 = t2372*t79;
  t3324 = t3237 + t3279;
  t3463 = t83*t3324;
  t3487 = t3200*t875;
  t3491 = t3463 + t3487;
  t3506 = t1500*t3491;
  t3514 = -1.*t2339*t42*t1991;
  t3519 = t3506 + t3514;
  t3560 = t2339*t42*t1500;
  t3565 = t3491*t1991;
  t3572 = t3560 + t3565;
  p_output1[0]=0.28121*t1690*t1832 + 0.28121*t1939*t1991 + 0.50321*t2065*t2075 - 0.50321*t2148*t2157 + 0.50321*(t2051*t2075 + t2148*t2157) + t1268*t1407*t42 + 0.15121*(-1.*t42*t79*t83 - 1.*t1268*t42*t875) - 1.*t42*t79*t991 + var1[0];
  p_output1[1]=t1407*t2474 + 0.28121*t1690*t2732 + 0.50321*t2065*t2875 - 0.50321*t2157*t2952 + 0.50321*(t2051*t2875 + t2157*t2952) - 0.28121*t1991*t2372*t42 + 0.15121*(t2412*t83 - 1.*t2474*t875) + t2412*t991 + var1[1];
  p_output1[2]=t1407*t3324 + 0.28121*t1690*t3491 + 0.50321*t2065*t3519 - 0.50321*t2157*t3572 + 0.50321*(t2051*t3519 + t2157*t3572) + 0.28121*t1991*t2339*t42 + 0.15121*(t3200*t83 - 1.*t3324*t875) + t3200*t991 + var1[2];
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

#include "Joint_1_sphere_center.hh"

namespace SymFunction
{

void Joint_1_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
