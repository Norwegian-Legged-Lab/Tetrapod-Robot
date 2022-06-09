/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 10:40:22 GMT+02:00
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
  double t10214;
  double t10237;
  double t10245;
  double t10238;
  double t10246;
  double t10218;
  double t10219;
  double t10256;
  double t10261;
  double t10263;
  double t10264;
  double t10290;
  double t10244;
  double t10249;
  double t10250;
  double t10229;
  double t10291;
  double t10292;
  double t10293;
  double t10296;
  double t10297;
  double t10298;
  double t10299;
  double t10302;
  double t10306;
  double t10307;
  double t10308;
  t10214 = Cos(var1[3]);
  t10237 = Cos(var1[5]);
  t10245 = Sin(var1[3]);
  t10238 = Sin(var1[4]);
  t10246 = Sin(var1[5]);
  t10218 = Cos(var1[4]);
  t10219 = Sin(var1[15]);
  t10256 = Cos(var1[15]);
  t10261 = t10237*t10245;
  t10263 = t10214*t10238*t10246;
  t10264 = t10261 + t10263;
  t10290 = Sin(var1[16]);
  t10244 = -1.*t10214*t10237*t10238;
  t10249 = t10245*t10246;
  t10250 = t10244 + t10249;
  t10229 = Cos(var1[16]);
  t10291 = t10256*t10214*t10218;
  t10292 = -1.*t10219*t10264;
  t10293 = t10291 + t10292;
  t10296 = Sin(var1[17]);
  t10297 = -1.*t10290*t10250;
  t10298 = t10229*t10293;
  t10299 = t10297 + t10298;
  t10302 = Cos(var1[17]);
  t10306 = t10229*t10250;
  t10307 = t10290*t10293;
  t10308 = t10306 + t10307;
  p_output1[0]=0.1575*t10214*t10218*t10219 - 0.325*(1. - 1.*t10229)*t10250 - 0.1575*(1. - 1.*t10256)*t10264 - 0.2255*(t10214*t10218*t10219 + t10256*t10264) + 0.325*t10290*t10293 - 0.575*t10296*t10299 - 0.575*(1. - 1.*t10302)*t10308 - 0.0641*(t10299*t10302 + t10296*t10308) - 0.295*(-1.*t10296*t10299 + t10302*t10308) + var1[2];
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

#include "u_rearSwingFootHeight1_DiagonalStance.hh"

namespace SymFunction
{

void u_rearSwingFootHeight1_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
