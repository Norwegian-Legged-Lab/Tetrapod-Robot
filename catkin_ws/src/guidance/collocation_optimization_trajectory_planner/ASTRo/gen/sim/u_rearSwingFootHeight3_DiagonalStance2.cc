/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:41:00 GMT+02:00
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
  double t4808;
  double t23430;
  double t33893;
  double t44765;
  double t46226;
  double t51601;
  double t51691;
  double t52728;
  double t51856;
  double t52860;
  double t51958;
  double t52889;
  double t52890;
  double t52914;
  double t52917;
  double t52918;
  double t5428;
  double t13260;
  double t52951;
  double t52958;
  double t52962;
  double t52963;
  double t53001;
  double t53008;
  double t53019;
  double t53029;
  double t53043;
  double t53044;
  double t53045;
  double t53046;
  t4808 = Cos(var1[3]);
  t23430 = Cos(var1[9]);
  t33893 = -1.*t23430;
  t44765 = 1. + t33893;
  t46226 = Sin(var1[9]);
  t51601 = 0.15121*t46226;
  t51691 = Cos(var1[5]);
  t52728 = Sin(var1[3]);
  t51856 = Sin(var1[4]);
  t52860 = Sin(var1[5]);
  t51958 = -1.*t4808*t51691*t51856;
  t52889 = t52728*t52860;
  t52890 = t51958 + t52889;
  t52914 = t51691*t52728;
  t52917 = t4808*t51856*t52860;
  t52918 = t52914 + t52917;
  t5428 = Cos(var1[4]);
  t13260 = Sin(var1[10]);
  t52951 = Cos(var1[10]);
  t52958 = t23430*t52890;
  t52962 = t46226*t52918;
  t52963 = t52958 + t52962;
  t53001 = Cos(var1[11]);
  t53008 = t4808*t5428*t13260;
  t53019 = t52951*t52963;
  t53029 = t53008 + t53019;
  t53043 = Sin(var1[11]);
  t53044 = t52951*t4808*t5428;
  t53045 = -1.*t13260*t52963;
  t53046 = t53044 + t53045;
  p_output1[0]=(-0.15121*t44765 + t51601)*t52890 + (0.15121*t44765 + t51601)*t52918 + 0.15121*(-1.*t46226*t52890 + t23430*t52918) - 0.28121*(1. - 1.*t52951)*t52963 - 0.50321*(1. - 1.*t53001)*t53029 - 0.50321*t53043*t53046 - 0.23321*(t53001*t53029 - 1.*t53043*t53046) + 0.28121*t13260*t4808*t5428 + var1[2];
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

#include "u_rearSwingFootHeight3_DiagonalStance2.hh"

namespace SymFunction
{

void u_rearSwingFootHeight3_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
