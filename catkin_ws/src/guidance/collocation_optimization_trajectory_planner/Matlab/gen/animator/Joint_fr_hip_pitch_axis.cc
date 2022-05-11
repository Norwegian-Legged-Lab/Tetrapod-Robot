/*
 * Automatically Generated from Mathematica.
 * Fri 4 Feb 2022 15:51:55 GMT+01:00
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
  double t146;
  double t330;
  double t2361;
  double t4073;
  double t4548;
  double t4113;
  double t4508;
  double t4669;
  double t2362;
  double t4537;
  double t4670;
  double t4689;
  double t4737;
  double t4868;
  double t4881;
  double t4957;
  double t2912;
  double t3742;
  double t5542;
  double t5577;
  double t4752;
  double t4842;
  double t5563;
  double t5587;
  double t5596;
  double t5601;
  double t5603;
  double t5605;
  double t5065;
  double t5096;
  double t5600;
  double t5616;
  double t5629;
  double t5154;
  double t5191;
  double t5670;
  double t5713;
  double t5763;
  double t6466;
  double t6483;
  double t6484;
  double t6497;
  double t6504;
  double t6516;
  double t6489;
  double t6526;
  double t6530;
  double t6598;
  double t6600;
  double t6608;
  t146 = Cos(var1[10]);
  t330 = -1.*t146;
  t2361 = 1. + t330;
  t4073 = Cos(var1[4]);
  t4548 = Cos(var1[9]);
  t4113 = Cos(var1[5]);
  t4508 = Sin(var1[9]);
  t4669 = Sin(var1[5]);
  t2362 = Sin(var1[4]);
  t4537 = -1.*t4073*t4113*t4508;
  t4670 = -1.*t4548*t4073*t4669;
  t4689 = t4537 + t4670;
  t4737 = Sin(var1[10]);
  t4868 = t4548*t4073*t4113;
  t4881 = -1.*t4073*t4508*t4669;
  t4957 = t4868 + t4881;
  t2912 = -1.6e-11*t2361;
  t3742 = 1. + t2912;
  t5542 = Sin(var1[3]);
  t5577 = Cos(var1[3]);
  t4752 = 4.e-6*t4737;
  t4842 = 0. + t4752;
  t5563 = t4113*t5542*t2362;
  t5587 = t5577*t4669;
  t5596 = t5563 + t5587;
  t5601 = t5577*t4113;
  t5603 = -1.*t5542*t2362*t4669;
  t5605 = t5601 + t5603;
  t5065 = -1.*t2361;
  t5096 = 1. + t5065;
  t5600 = -1.*t4508*t5596;
  t5616 = t4548*t5605;
  t5629 = t5600 + t5616;
  t5154 = -1.*t4737;
  t5191 = 0. + t5154;
  t5670 = t4548*t5596;
  t5713 = t4508*t5605;
  t5763 = t5670 + t5713;
  t6466 = -1.*t5577*t4113*t2362;
  t6483 = t5542*t4669;
  t6484 = t6466 + t6483;
  t6497 = t4113*t5542;
  t6504 = t5577*t2362*t4669;
  t6516 = t6497 + t6504;
  t6489 = -1.*t4508*t6484;
  t6526 = t4548*t6516;
  t6530 = t6489 + t6526;
  t6598 = t4548*t6484;
  t6600 = t4508*t6516;
  t6608 = t6598 + t6600;
  p_output1[0]=-4.e-6*t2361*t2362 - 1.*t3742*t4689 - 1.*t4842*t4957 - 4.e-6*(4.e-6*t2361*t4689 + t2362*t5096 + t4957*t5191);
  p_output1[1]=4.e-6*t2361*t4073*t5542 - 1.*t3742*t5629 - 1.*t4842*t5763 - 4.e-6*(-1.*t4073*t5096*t5542 + 4.e-6*t2361*t5629 + t5191*t5763);
  p_output1[2]=-4.e-6*t2361*t4073*t5577 - 1.*t3742*t6530 - 1.*t4842*t6608 - 4.e-6*(t4073*t5096*t5577 + 4.e-6*t2361*t6530 + t5191*t6608);
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

#include "Joint_fr_hip_pitch_axis.hh"

namespace SymFunction
{

void Joint_fr_hip_pitch_axis_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
