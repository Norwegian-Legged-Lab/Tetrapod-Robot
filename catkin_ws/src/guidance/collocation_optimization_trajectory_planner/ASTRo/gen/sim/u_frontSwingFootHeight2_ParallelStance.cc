/*
 * Automatically Generated from Mathematica.
 * Sun 22 May 2022 17:23:05 GMT+02:00
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
  double t14425;
  double t4401;
  double t14477;
  double t10917;
  double t14763;
  double t14848;
  double t14874;
  double t14876;
  double t14880;
  double t14881;
  double t13972;
  double t14779;
  double t14834;
  double t14887;
  double t14888;
  double t14889;
  double t14981;
  double t14985;
  double t14987;
  double t14988;
  double t14997;
  double t14998;
  double t15003;
  double t15009;
  double t15010;
  double t15011;
  double t15020;
  double t15021;
  double t15023;
  double t15025;
  t14425 = Cos(var1[3]);
  t4401 = Cos(var1[5]);
  t14477 = Sin(var1[4]);
  t10917 = Sin(var1[3]);
  t14763 = Sin(var1[5]);
  t14848 = Cos(var1[6]);
  t14874 = -1.*t14848;
  t14876 = 1. + t14874;
  t14880 = 0.15121*t14876;
  t14881 = Sin(var1[6]);
  t13972 = t4401*t10917;
  t14779 = t14425*t14477*t14763;
  t14834 = t13972 + t14779;
  t14887 = -1.*t14425*t4401*t14477;
  t14888 = t10917*t14763;
  t14889 = t14887 + t14888;
  t14981 = Cos(var1[7]);
  t14985 = t14848*t14889;
  t14987 = t14834*t14881;
  t14988 = t14985 + t14987;
  t14997 = Cos(var1[4]);
  t14998 = Sin(var1[7]);
  t15003 = Cos(var1[8]);
  t15009 = t14981*t14988;
  t15010 = -1.*t14425*t14997*t14998;
  t15011 = t15009 + t15010;
  t15020 = t14425*t14997*t14981;
  t15021 = t14988*t14998;
  t15023 = t15020 + t15021;
  t15025 = Sin(var1[8]);
  p_output1[0]=t14834*(t14880 - 0.15121*t14881) + (t14880 + 0.15121*t14881)*t14889 + 0.15121*(t14834*t14848 - 1.*t14881*t14889) + 0.28121*(1. - 1.*t14981)*t14988 + 0.28121*t14425*t14997*t14998 + 0.50321*(1. - 1.*t15003)*t15011 - 0.50321*t15023*t15025 + 0.23321*(t15003*t15011 + t15023*t15025) + var1[2];
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

#include "u_frontSwingFootHeight2_ParallelStance.hh"

namespace SymFunction
{

void u_frontSwingFootHeight2_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
