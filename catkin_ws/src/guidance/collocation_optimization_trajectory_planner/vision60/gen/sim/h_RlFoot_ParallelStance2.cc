/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:06:03 GMT+02:00
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
  double t363;
  double t500;
  double t556;
  double t924;
  double t3014;
  double t395;
  double t6295;
  double t170;
  double t6308;
  double t6317;
  double t6661;
  double t8200;
  double t8210;
  double t8237;
  double t8238;
  double t8246;
  double t8249;
  double t8304;
  double t8309;
  double t247;
  double t312;
  double t8459;
  double t2381;
  double t2410;
  double t8499;
  double t8542;
  double t8552;
  double t8555;
  double t8486;
  double t8500;
  double t8510;
  double t8564;
  double t8568;
  double t8569;
  double t8247;
  double t8248;
  double t8571;
  double t8584;
  double t8589;
  double t8594;
  double t8595;
  double t8597;
  double t8646;
  double t8649;
  double t8650;
  double t8636;
  double t8637;
  double t8642;
  double t8717;
  double t8718;
  double t8719;
  double t8723;
  double t8724;
  double t8727;
  double t8733;
  double t8738;
  double t8746;
  t363 = Cos(var1[4]);
  t500 = Sin(var1[9]);
  t556 = Sin(var1[4]);
  t924 = Cos(var1[9]);
  t3014 = Sin(var1[5]);
  t395 = Cos(var1[5]);
  t6295 = Sin(var1[10]);
  t170 = Cos(var1[10]);
  t6308 = t924*t556;
  t6317 = t363*t500*t3014;
  t6661 = t6308 + t6317;
  t8200 = Sin(var1[11]);
  t8210 = -1.*t363*t395*t6295;
  t8237 = t170*t6661;
  t8238 = t8210 + t8237;
  t8246 = Cos(var1[11]);
  t8249 = t170*t363*t395;
  t8304 = t6295*t6661;
  t8309 = t8249 + t8304;
  t247 = -1.*t170;
  t312 = 1. + t247;
  t8459 = Sin(var1[3]);
  t2381 = -1.*t924;
  t2410 = 1. + t2381;
  t8499 = Cos(var1[3]);
  t8542 = t8499*t395;
  t8552 = -1.*t8459*t556*t3014;
  t8555 = t8542 + t8552;
  t8486 = t395*t8459*t556;
  t8500 = t8499*t3014;
  t8510 = t8486 + t8500;
  t8564 = -1.*t924*t363*t8459;
  t8568 = -1.*t500*t8555;
  t8569 = t8564 + t8568;
  t8247 = -1.*t8246;
  t8248 = 1. + t8247;
  t8571 = -1.*t6295*t8510;
  t8584 = t170*t8569;
  t8589 = t8571 + t8584;
  t8594 = t170*t8510;
  t8595 = t6295*t8569;
  t8597 = t8594 + t8595;
  t8646 = t395*t8459;
  t8649 = t8499*t556*t3014;
  t8650 = t8646 + t8649;
  t8636 = -1.*t8499*t395*t556;
  t8637 = t8459*t3014;
  t8642 = t8636 + t8637;
  t8717 = t924*t8499*t363;
  t8718 = -1.*t500*t8650;
  t8719 = t8717 + t8718;
  t8723 = -1.*t6295*t8642;
  t8724 = t170*t8719;
  t8727 = t8723 + t8724;
  t8733 = t170*t8642;
  t8738 = t6295*t8719;
  t8746 = t8733 + t8738;
  p_output1[0]=-0.1575*t2410*t3014*t363 - 0.325*t312*t363*t395 - 0.1575*t500*t556 + 0.325*t6295*t6661 - 0.575*t8200*t8238 - 0.575*t8248*t8309 - 0.0641*(t8238*t8246 + t8200*t8309) - 0.295*(-1.*t8200*t8238 + t8246*t8309) + 0.2255*(t500*t556 - 1.*t3014*t363*t924) + var1[0] - 1.*var2[0];
  p_output1[1]=0.1575*t363*t500*t8459 - 0.325*t312*t8510 + 0.1575*t2410*t8555 + 0.325*t6295*t8569 - 0.575*t8200*t8589 - 0.575*t8248*t8597 - 0.0641*(t8246*t8589 + t8200*t8597) - 0.295*(-1.*t8200*t8589 + t8246*t8597) + 0.2255*(-1.*t363*t500*t8459 + t8555*t924) + var1[1] - 1.*var2[1];
  p_output1[2]=-0.1575*t363*t500*t8499 - 0.325*t312*t8642 + 0.1575*t2410*t8650 + 0.325*t6295*t8719 - 0.575*t8200*t8727 - 0.575*t8248*t8746 - 0.0641*(t8246*t8727 + t8200*t8746) - 0.295*(-1.*t8200*t8727 + t8246*t8746) + 0.2255*(t363*t500*t8499 + t8650*t924) + var1[2] - 1.*var2[2];
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

#include "h_RlFoot_ParallelStance2.hh"

namespace SymFunction
{

void h_RlFoot_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
