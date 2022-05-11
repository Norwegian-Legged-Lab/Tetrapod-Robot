/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:10:56 GMT+02:00
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
  double t1001;
  double t3621;
  double t3735;
  double t3872;
  double t3875;
  double t3072;
  double t3642;
  double t3709;
  double t4161;
  double t4156;
  double t4295;
  double t4300;
  double t4367;
  double t4479;
  double t4523;
  double t4560;
  t1001 = Cos(var1[4]);
  t3621 = Cos(var1[6]);
  t3735 = Sin(var1[5]);
  t3872 = Sin(var1[4]);
  t3875 = Sin(var1[6]);
  t3072 = Cos(var1[5]);
  t3642 = -1.*t3621;
  t3709 = 1. + t3642;
  t4161 = Cos(var1[3]);
  t4156 = Sin(var1[3]);
  t4295 = t4161*t3072;
  t4300 = -1.*t4156*t3872*t3735;
  t4367 = t4295 + t4300;
  t4479 = t3072*t4156;
  t4523 = t4161*t3872*t3735;
  t4560 = t4479 + t4523;
  p_output1[0]=0.325*t1001*t3072 - 0.1575*t1001*t3709*t3735 - 0.1575*t3872*t3875 + 0.1575*(-1.*t1001*t3621*t3735 + t3872*t3875) + var1[0];
  p_output1[1]=0.1575*t1001*t3875*t4156 + 0.325*(t3072*t3872*t4156 + t3735*t4161) + 0.1575*t3709*t4367 + 0.1575*(-1.*t1001*t3875*t4156 + t3621*t4367) + var1[1];
  p_output1[2]=-0.1575*t1001*t3875*t4161 + 0.325*(t3735*t4156 - 1.*t3072*t3872*t4161) + 0.1575*t3709*t4560 + 0.1575*(t1001*t3875*t4161 + t3621*t4560) + var1[2];
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

#include "Joint_8_sphere_center.hh"

namespace SymFunction
{

void Joint_8_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
