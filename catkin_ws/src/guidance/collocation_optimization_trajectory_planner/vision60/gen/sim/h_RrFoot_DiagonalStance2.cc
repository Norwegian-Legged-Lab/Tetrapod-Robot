/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:05:32 GMT+02:00
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
  double t642;
  double t1338;
  double t1356;
  double t2294;
  double t2769;
  double t656;
  double t4575;
  double t382;
  double t5477;
  double t5941;
  double t6036;
  double t6046;
  double t6057;
  double t6058;
  double t6061;
  double t6077;
  double t6082;
  double t6083;
  double t6084;
  double t549;
  double t585;
  double t6280;
  double t2332;
  double t2387;
  double t6296;
  double t6336;
  double t6344;
  double t6349;
  double t6292;
  double t6306;
  double t6312;
  double t6372;
  double t6374;
  double t6378;
  double t6078;
  double t6080;
  double t6383;
  double t6384;
  double t6396;
  double t6398;
  double t6403;
  double t6404;
  double t6449;
  double t6451;
  double t6453;
  double t6438;
  double t6442;
  double t6445;
  double t6480;
  double t6481;
  double t6484;
  double t6487;
  double t6490;
  double t6493;
  double t6496;
  double t6500;
  double t6502;
  t642 = Cos(var1[4]);
  t1338 = Sin(var1[15]);
  t1356 = Sin(var1[4]);
  t2294 = Cos(var1[15]);
  t2769 = Sin(var1[5]);
  t656 = Cos(var1[5]);
  t4575 = Sin(var1[16]);
  t382 = Cos(var1[16]);
  t5477 = t2294*t1356;
  t5941 = t642*t1338*t2769;
  t6036 = t5477 + t5941;
  t6046 = Sin(var1[17]);
  t6057 = -1.*t642*t656*t4575;
  t6058 = t382*t6036;
  t6061 = t6057 + t6058;
  t6077 = Cos(var1[17]);
  t6082 = t382*t642*t656;
  t6083 = t4575*t6036;
  t6084 = t6082 + t6083;
  t549 = -1.*t382;
  t585 = 1. + t549;
  t6280 = Sin(var1[3]);
  t2332 = -1.*t2294;
  t2387 = 1. + t2332;
  t6296 = Cos(var1[3]);
  t6336 = t6296*t656;
  t6344 = -1.*t6280*t1356*t2769;
  t6349 = t6336 + t6344;
  t6292 = t656*t6280*t1356;
  t6306 = t6296*t2769;
  t6312 = t6292 + t6306;
  t6372 = -1.*t2294*t642*t6280;
  t6374 = -1.*t1338*t6349;
  t6378 = t6372 + t6374;
  t6078 = -1.*t6077;
  t6080 = 1. + t6078;
  t6383 = -1.*t4575*t6312;
  t6384 = t382*t6378;
  t6396 = t6383 + t6384;
  t6398 = t382*t6312;
  t6403 = t4575*t6378;
  t6404 = t6398 + t6403;
  t6449 = t656*t6280;
  t6451 = t6296*t1356*t2769;
  t6453 = t6449 + t6451;
  t6438 = -1.*t6296*t656*t1356;
  t6442 = t6280*t2769;
  t6445 = t6438 + t6442;
  t6480 = t2294*t6296*t642;
  t6481 = -1.*t1338*t6453;
  t6484 = t6480 + t6481;
  t6487 = -1.*t4575*t6445;
  t6490 = t382*t6484;
  t6493 = t6487 + t6490;
  t6496 = t382*t6445;
  t6500 = t4575*t6484;
  t6502 = t6496 + t6500;
  p_output1[0]=0.1575*t1338*t1356 + 0.325*t4575*t6036 - 0.575*t6046*t6061 - 0.575*t6080*t6084 - 0.0641*(t6061*t6077 + t6046*t6084) - 0.295*(-1.*t6046*t6061 + t6077*t6084) + 0.1575*t2387*t2769*t642 - 0.2255*(t1338*t1356 - 1.*t2294*t2769*t642) - 0.325*t585*t642*t656 + var1[0] - 1.*var2[0];
  p_output1[1]=-0.325*t585*t6312 - 0.1575*t2387*t6349 + 0.325*t4575*t6378 - 0.575*t6046*t6396 - 0.575*t6080*t6404 - 0.0641*(t6077*t6396 + t6046*t6404) - 0.295*(-1.*t6046*t6396 + t6077*t6404) - 0.1575*t1338*t6280*t642 - 0.2255*(t2294*t6349 - 1.*t1338*t6280*t642) + var1[1] - 1.*var2[1];
  p_output1[2]=0.1575*t1338*t6296*t642 - 0.325*t585*t6445 - 0.1575*t2387*t6453 - 0.2255*(t1338*t6296*t642 + t2294*t6453) + 0.325*t4575*t6484 - 0.575*t6046*t6493 - 0.575*t6080*t6502 - 0.0641*(t6077*t6493 + t6046*t6502) - 0.295*(-1.*t6046*t6493 + t6077*t6502) + var1[2] - 1.*var2[2];
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
