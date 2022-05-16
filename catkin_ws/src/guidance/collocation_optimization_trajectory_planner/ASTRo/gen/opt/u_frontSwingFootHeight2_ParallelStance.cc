/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:44:01 GMT+02:00
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
  double t4997;
  double t4765;
  double t5001;
  double t4850;
  double t5028;
  double t5351;
  double t5667;
  double t5726;
  double t5748;
  double t5776;
  double t4978;
  double t5064;
  double t5292;
  double t5813;
  double t5843;
  double t5845;
  double t25790;
  double t43721;
  double t44434;
  double t44469;
  double t44642;
  double t44692;
  double t44760;
  double t44931;
  double t44985;
  double t44997;
  double t45370;
  double t45486;
  double t45543;
  double t45666;
  t4997 = Cos(var1[3]);
  t4765 = Cos(var1[5]);
  t5001 = Sin(var1[4]);
  t4850 = Sin(var1[3]);
  t5028 = Sin(var1[5]);
  t5351 = Cos(var1[6]);
  t5667 = -1.*t5351;
  t5726 = 1. + t5667;
  t5748 = 0.15121*t5726;
  t5776 = Sin(var1[6]);
  t4978 = t4765*t4850;
  t5064 = t4997*t5001*t5028;
  t5292 = t4978 + t5064;
  t5813 = -1.*t4997*t4765*t5001;
  t5843 = t4850*t5028;
  t5845 = t5813 + t5843;
  t25790 = Cos(var1[7]);
  t43721 = t5351*t5845;
  t44434 = t5292*t5776;
  t44469 = t43721 + t44434;
  t44642 = Cos(var1[4]);
  t44692 = Sin(var1[7]);
  t44760 = Cos(var1[8]);
  t44931 = t25790*t44469;
  t44985 = -1.*t4997*t44642*t44692;
  t44997 = t44931 + t44985;
  t45370 = t4997*t44642*t25790;
  t45486 = t44469*t44692;
  t45543 = t45370 + t45486;
  t45666 = Sin(var1[8]);
  p_output1[0]=0.28121*(1. - 1.*t25790)*t44469 + 0.50321*(1. - 1.*t44760)*t44997 - 0.50321*t45543*t45666 + 0.23321*(t44760*t44997 + t45543*t45666) + 0.28121*t44642*t44692*t4997 + t5292*(t5748 - 0.15121*t5776) + (t5748 + 0.15121*t5776)*t5845 + 0.15121*(t5292*t5351 - 1.*t5776*t5845) + var1[2];
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

namespace ParallelStance
{

void u_frontSwingFootHeight2_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
