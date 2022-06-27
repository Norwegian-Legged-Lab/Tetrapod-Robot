/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:25:03 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t5333;
  double t6804;
  double t7003;
  double t7234;
  double t9068;
  double t5649;
  double t23125;
  double t2251;
  double t23129;
  double t23133;
  double t23137;
  double t23150;
  double t23153;
  double t23154;
  double t23155;
  double t23157;
  double t23216;
  double t23219;
  double t23224;
  double t3240;
  double t4125;
  double t23323;
  double t7658;
  double t8769;
  double t23329;
  double t23335;
  double t23336;
  double t23338;
  double t23328;
  double t23330;
  double t23332;
  double t23351;
  double t23352;
  double t23353;
  double t23196;
  double t23210;
  double t23355;
  double t23360;
  double t23361;
  double t23363;
  double t23364;
  double t23365;
  double t23390;
  double t23391;
  double t23392;
  double t23378;
  double t23383;
  double t23388;
  double t23401;
  double t23402;
  double t23403;
  double t23405;
  double t23406;
  double t23407;
  double t23409;
  double t23413;
  double t23415;
  t5333 = Cos(var1[4]);
  t6804 = Sin(var1[15]);
  t7003 = Sin(var1[4]);
  t7234 = Cos(var1[15]);
  t9068 = Sin(var1[5]);
  t5649 = Cos(var1[5]);
  t23125 = Sin(var1[16]);
  t2251 = Cos(var1[16]);
  t23129 = t7234*t7003;
  t23133 = t5333*t6804*t9068;
  t23137 = t23129 + t23133;
  t23150 = Sin(var1[17]);
  t23153 = -1.*t5333*t5649*t23125;
  t23154 = t2251*t23137;
  t23155 = t23153 + t23154;
  t23157 = Cos(var1[17]);
  t23216 = t2251*t5333*t5649;
  t23219 = t23125*t23137;
  t23224 = t23216 + t23219;
  t3240 = -1.*t2251;
  t4125 = 1. + t3240;
  t23323 = Sin(var1[3]);
  t7658 = -1.*t7234;
  t8769 = 1. + t7658;
  t23329 = Cos(var1[3]);
  t23335 = t23329*t5649;
  t23336 = -1.*t23323*t7003*t9068;
  t23338 = t23335 + t23336;
  t23328 = t5649*t23323*t7003;
  t23330 = t23329*t9068;
  t23332 = t23328 + t23330;
  t23351 = -1.*t7234*t5333*t23323;
  t23352 = -1.*t6804*t23338;
  t23353 = t23351 + t23352;
  t23196 = -1.*t23157;
  t23210 = 1. + t23196;
  t23355 = -1.*t23125*t23332;
  t23360 = t2251*t23353;
  t23361 = t23355 + t23360;
  t23363 = t2251*t23332;
  t23364 = t23125*t23353;
  t23365 = t23363 + t23364;
  t23390 = t5649*t23323;
  t23391 = t23329*t7003*t9068;
  t23392 = t23390 + t23391;
  t23378 = -1.*t23329*t5649*t7003;
  t23383 = t23323*t9068;
  t23388 = t23378 + t23383;
  t23401 = t7234*t23329*t5333;
  t23402 = -1.*t6804*t23392;
  t23403 = t23401 + t23402;
  t23405 = -1.*t23125*t23388;
  t23406 = t2251*t23403;
  t23407 = t23405 + t23406;
  t23409 = t2251*t23388;
  t23413 = t23125*t23403;
  t23415 = t23409 + t23413;
  p_output1[0]=0.325*t23125*t23137 - 0.575*t23150*t23155 - 0.575*t23210*t23224 - 0.0641*(t23155*t23157 + t23150*t23224) - 0.295*(-1.*t23150*t23155 + t23157*t23224) - 0.325*t4125*t5333*t5649 + 0.1575*t6804*t7003 + 0.1575*t5333*t8769*t9068 - 0.2255*(t6804*t7003 - 1.*t5333*t7234*t9068) + var1[0] - 1.*var2[0];
  p_output1[1]=0.325*t23125*t23353 - 0.575*t23150*t23361 - 0.575*t23210*t23365 - 0.0641*(t23157*t23361 + t23150*t23365) - 0.295*(-1.*t23150*t23361 + t23157*t23365) - 0.325*t23332*t4125 - 0.1575*t23323*t5333*t6804 - 0.2255*(-1.*t23323*t5333*t6804 + t23338*t7234) - 0.1575*t23338*t8769 + var1[1] - 1.*var2[1];
  p_output1[2]=0.325*t23125*t23403 - 0.575*t23150*t23407 - 0.575*t23210*t23415 - 0.0641*(t23157*t23407 + t23150*t23415) - 0.295*(-1.*t23150*t23407 + t23157*t23415) - 0.325*t23388*t4125 + 0.1575*t23329*t5333*t6804 - 0.2255*(t23329*t5333*t6804 + t23392*t7234) - 0.1575*t23392*t8769 + var1[2] - 1.*var2[2];
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "h_RrFoot_DiagonalStance2.hh"

namespace SymFunction
{

void h_RrFoot_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
