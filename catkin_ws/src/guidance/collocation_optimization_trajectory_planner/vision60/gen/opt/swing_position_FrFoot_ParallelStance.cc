/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:48:24 GMT+02:00
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
  double t25207;
  double t25927;
  double t26022;
  double t25983;
  double t26046;
  double t25721;
  double t25854;
  double t26076;
  double t26086;
  double t26087;
  double t26089;
  double t26158;
  double t26008;
  double t26047;
  double t26048;
  double t25858;
  double t26175;
  double t26189;
  double t26190;
  double t26202;
  double t26218;
  double t26236;
  double t26245;
  double t26248;
  double t26260;
  double t26263;
  double t26309;
  t25207 = Cos(var1[3]);
  t25927 = Cos(var1[5]);
  t26022 = Sin(var1[3]);
  t25983 = Sin(var1[4]);
  t26046 = Sin(var1[5]);
  t25721 = Cos(var1[4]);
  t25854 = Sin(var1[12]);
  t26076 = Cos(var1[12]);
  t26086 = t25927*t26022;
  t26087 = t25207*t25983*t26046;
  t26089 = t26086 + t26087;
  t26158 = Sin(var1[13]);
  t26008 = -1.*t25207*t25927*t25983;
  t26047 = t26022*t26046;
  t26048 = t26008 + t26047;
  t25858 = Cos(var1[13]);
  t26175 = t26076*t25207*t25721;
  t26189 = -1.*t25854*t26089;
  t26190 = t26175 + t26189;
  t26202 = Sin(var1[14]);
  t26218 = -1.*t26158*t26048;
  t26236 = t25858*t26190;
  t26245 = t26218 + t26236;
  t26248 = Cos(var1[14]);
  t26260 = t25858*t26048;
  t26263 = t26158*t26190;
  t26309 = t26260 + t26263;
  p_output1[0]=0.1575*t25207*t25721*t25854 + 0.325*(1. - 1.*t25858)*t26048 - 0.1575*(1. - 1.*t26076)*t26089 - 0.2255*(t25207*t25721*t25854 + t26076*t26089) - 0.325*t26158*t26190 + 0.075*t26202*t26245 + 0.075*(1. - 1.*t26248)*t26309 - 0.0641*(t26245*t26248 + t26202*t26309) + 0.355*(-1.*t26202*t26245 + t26248*t26309) + var1[2];
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

#include "swing_position_FrFoot_ParallelStance.hh"

namespace ParallelStance
{

void swing_position_FrFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
