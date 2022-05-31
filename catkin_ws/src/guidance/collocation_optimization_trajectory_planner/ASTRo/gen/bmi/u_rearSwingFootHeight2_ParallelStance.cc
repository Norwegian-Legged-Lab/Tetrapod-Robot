/*
 * Automatically Generated from Mathematica.
 * Fri 27 May 2022 16:03:33 GMT+02:00
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
  double t4955;
  double t4979;
  double t4980;
  double t4992;
  double t4994;
  double t4998;
  double t5036;
  double t5063;
  double t5050;
  double t5064;
  double t5059;
  double t5071;
  double t5088;
  double t5105;
  double t5106;
  double t5107;
  double t4956;
  double t4961;
  double t5117;
  double t5122;
  double t5123;
  double t5136;
  double t5141;
  double t5147;
  double t5152;
  double t5153;
  double t5156;
  double t5159;
  double t5160;
  double t5161;
  t4955 = Cos(var1[3]);
  t4979 = Cos(var1[9]);
  t4980 = -1.*t4979;
  t4992 = 1. + t4980;
  t4994 = Sin(var1[9]);
  t4998 = 0.15121*t4994;
  t5036 = Cos(var1[5]);
  t5063 = Sin(var1[3]);
  t5050 = Sin(var1[4]);
  t5064 = Sin(var1[5]);
  t5059 = -1.*t4955*t5036*t5050;
  t5071 = t5063*t5064;
  t5088 = t5059 + t5071;
  t5105 = t5036*t5063;
  t5106 = t4955*t5050*t5064;
  t5107 = t5105 + t5106;
  t4956 = Cos(var1[4]);
  t4961 = Sin(var1[10]);
  t5117 = Cos(var1[10]);
  t5122 = t4979*t5088;
  t5123 = t4994*t5107;
  t5136 = t5122 + t5123;
  t5141 = Cos(var1[11]);
  t5147 = t4955*t4956*t4961;
  t5152 = t5117*t5136;
  t5153 = t5147 + t5152;
  t5156 = Sin(var1[11]);
  t5159 = t5117*t4955*t4956;
  t5160 = -1.*t4961*t5136;
  t5161 = t5159 + t5160;
  p_output1[0]=0.28121*t4955*t4956*t4961 + (-0.15121*t4992 + t4998)*t5088 + (0.15121*t4992 + t4998)*t5107 + 0.15121*(-1.*t4994*t5088 + t4979*t5107) - 0.28121*(1. - 1.*t5117)*t5136 - 0.50321*(1. - 1.*t5141)*t5153 - 0.50321*t5156*t5161 - 0.19821*(t5141*t5153 - 1.*t5156*t5161) + var1[2];
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

#include "u_rearSwingFootHeight2_ParallelStance.hh"

namespace SymFunction
{

void u_rearSwingFootHeight2_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
