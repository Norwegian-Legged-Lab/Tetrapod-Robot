/*
 * Automatically Generated from Mathematica.
 * Fri 4 Feb 2022 15:51:48 GMT+01:00
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
  double t668;
  double t932;
  double t1506;
  double t2862;
  double t2937;
  double t2863;
  double t2870;
  double t2970;
  double t1510;
  double t2928;
  double t3075;
  double t3084;
  double t3101;
  double t3145;
  double t3168;
  double t3209;
  double t2577;
  double t2817;
  double t3774;
  double t3832;
  double t3886;
  double t3952;
  double t3955;
  double t3844;
  double t3860;
  double t3862;
  double t3210;
  double t3211;
  double t3351;
  double t3407;
  double t3878;
  double t4060;
  double t4064;
  double t4348;
  double t4430;
  double t4431;
  double t3660;
  double t4720;
  double t4744;
  double t4762;
  double t4611;
  double t4624;
  double t4631;
  double t4644;
  double t4821;
  double t4862;
  double t4873;
  double t4889;
  double t4900;
  t668 = Cos(var1[7]);
  t932 = -1.*t668;
  t1506 = 1. + t932;
  t2862 = Cos(var1[4]);
  t2937 = Cos(var1[5]);
  t2863 = Cos(var1[6]);
  t2870 = Sin(var1[5]);
  t2970 = Sin(var1[6]);
  t1510 = Sin(var1[4]);
  t2928 = -1.*t2862*t2863*t2870;
  t3075 = -1.*t2862*t2937*t2970;
  t3084 = t2928 + t3075;
  t3101 = t2862*t2937*t2863;
  t3145 = -1.*t2862*t2870*t2970;
  t3168 = t3101 + t3145;
  t3209 = Sin(var1[7]);
  t2577 = -1.6e-11*t1506;
  t2817 = 1. + t2577;
  t3774 = Sin(var1[3]);
  t3832 = Cos(var1[3]);
  t3886 = t2937*t3774*t1510;
  t3952 = t3832*t2870;
  t3955 = t3886 + t3952;
  t3844 = t3832*t2937;
  t3860 = -1.*t3774*t1510*t2870;
  t3862 = t3844 + t3860;
  t3210 = 4.e-6*t3209;
  t3211 = 0. + t3210;
  t3351 = -1.*t1506;
  t3407 = 1. + t3351;
  t3878 = t2863*t3862;
  t4060 = -1.*t3955*t2970;
  t4064 = t3878 + t4060;
  t4348 = t2863*t3955;
  t4430 = t3862*t2970;
  t4431 = t4348 + t4430;
  t3660 = 0. + t3209;
  t4720 = -1.*t3832*t2937*t1510;
  t4744 = t3774*t2870;
  t4762 = t4720 + t4744;
  t4611 = t2937*t3774;
  t4624 = t3832*t1510*t2870;
  t4631 = t4611 + t4624;
  t4644 = t2863*t4631;
  t4821 = -1.*t4762*t2970;
  t4862 = t4644 + t4821;
  t4873 = t2863*t4762;
  t4889 = t4631*t2970;
  t4900 = t4873 + t4889;
  p_output1[0]=-4.e-6*t1506*t1510 + t2817*t3084 + t3168*t3211 - 4.e-6*(-4.e-6*t1506*t3084 + t1510*t3407 + t3168*t3660);
  p_output1[1]=4.e-6*t1506*t2862*t3774 + t2817*t4064 + t3211*t4431 - 4.e-6*(-1.*t2862*t3407*t3774 - 4.e-6*t1506*t4064 + t3660*t4431);
  p_output1[2]=-4.e-6*t1506*t2862*t3832 + t2817*t4862 + t3211*t4900 - 4.e-6*(t2862*t3407*t3832 - 4.e-6*t1506*t4862 + t3660*t4900);
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
