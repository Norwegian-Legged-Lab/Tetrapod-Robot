/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 10:40:27 GMT+02:00
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
  double t28296;
  double t28311;
  double t28315;
  double t28333;
  double t28342;
  double t28298;
  double t28355;
  double t23707;
  double t28356;
  double t28357;
  double t28359;
  double t28361;
  double t28363;
  double t28364;
  double t28365;
  double t28367;
  double t28427;
  double t28428;
  double t28429;
  double t28151;
  double t28294;
  double t28457;
  double t28334;
  double t28335;
  double t28460;
  double t28468;
  double t28469;
  double t28478;
  double t28459;
  double t28461;
  double t28463;
  double t28489;
  double t28494;
  double t28498;
  double t28369;
  double t28423;
  double t28504;
  double t28505;
  double t28509;
  double t28511;
  double t28513;
  double t28514;
  double t28544;
  double t28545;
  double t28546;
  double t28538;
  double t28539;
  double t28540;
  double t28552;
  double t28554;
  double t28555;
  double t28559;
  double t28560;
  double t28561;
  double t28563;
  double t28565;
  double t28566;
  t28296 = Cos(var1[4]);
  t28311 = Sin(var1[12]);
  t28315 = Sin(var1[4]);
  t28333 = Cos(var1[12]);
  t28342 = Sin(var1[5]);
  t28298 = Cos(var1[5]);
  t28355 = Sin(var1[13]);
  t23707 = Cos(var1[13]);
  t28356 = t28333*t28315;
  t28357 = t28296*t28311*t28342;
  t28359 = t28356 + t28357;
  t28361 = Sin(var1[14]);
  t28363 = -1.*t28296*t28298*t28355;
  t28364 = t23707*t28359;
  t28365 = t28363 + t28364;
  t28367 = Cos(var1[14]);
  t28427 = t23707*t28296*t28298;
  t28428 = t28355*t28359;
  t28429 = t28427 + t28428;
  t28151 = -1.*t23707;
  t28294 = 1. + t28151;
  t28457 = Sin(var1[3]);
  t28334 = -1.*t28333;
  t28335 = 1. + t28334;
  t28460 = Cos(var1[3]);
  t28468 = t28460*t28298;
  t28469 = -1.*t28457*t28315*t28342;
  t28478 = t28468 + t28469;
  t28459 = t28298*t28457*t28315;
  t28461 = t28460*t28342;
  t28463 = t28459 + t28461;
  t28489 = -1.*t28333*t28296*t28457;
  t28494 = -1.*t28311*t28478;
  t28498 = t28489 + t28494;
  t28369 = -1.*t28367;
  t28423 = 1. + t28369;
  t28504 = -1.*t28355*t28463;
  t28505 = t23707*t28498;
  t28509 = t28504 + t28505;
  t28511 = t23707*t28463;
  t28513 = t28355*t28498;
  t28514 = t28511 + t28513;
  t28544 = t28298*t28457;
  t28545 = t28460*t28315*t28342;
  t28546 = t28544 + t28545;
  t28538 = -1.*t28460*t28298*t28315;
  t28539 = t28457*t28342;
  t28540 = t28538 + t28539;
  t28552 = t28333*t28460*t28296;
  t28554 = -1.*t28311*t28546;
  t28555 = t28552 + t28554;
  t28559 = -1.*t28355*t28540;
  t28560 = t23707*t28555;
  t28561 = t28559 + t28560;
  t28563 = t23707*t28540;
  t28565 = t28355*t28555;
  t28566 = t28563 + t28565;
  p_output1[0]=0.325*t28294*t28296*t28298 + 0.1575*t28311*t28315 + 0.1575*t28296*t28335*t28342 - 0.2255*(t28311*t28315 - 1.*t28296*t28333*t28342) - 0.325*t28355*t28359 + 0.075*t28361*t28365 + 0.075*t28423*t28429 - 0.0641*(t28365*t28367 + t28361*t28429) + 0.355*(-1.*t28361*t28365 + t28367*t28429) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.1575*t28296*t28311*t28457 + 0.325*t28294*t28463 - 0.1575*t28335*t28478 - 0.2255*(-1.*t28296*t28311*t28457 + t28333*t28478) - 0.325*t28355*t28498 + 0.075*t28361*t28509 + 0.075*t28423*t28514 - 0.0641*(t28367*t28509 + t28361*t28514) + 0.355*(-1.*t28361*t28509 + t28367*t28514) + var1[1] - 1.*var2[1];
  p_output1[2]=0.1575*t28296*t28311*t28460 + 0.325*t28294*t28540 - 0.1575*t28335*t28546 - 0.2255*(t28296*t28311*t28460 + t28333*t28546) - 0.325*t28355*t28555 + 0.075*t28361*t28561 + 0.075*t28423*t28566 - 0.0641*(t28367*t28561 + t28361*t28566) + 0.355*(-1.*t28361*t28561 + t28367*t28566) + var1[2] - 1.*var2[2];
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

#include "h_FrFoot_ParallelStance.hh"

namespace SymFunction
{

void h_FrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
