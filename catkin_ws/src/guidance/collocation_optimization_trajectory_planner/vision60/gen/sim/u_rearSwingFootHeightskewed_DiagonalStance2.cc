/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 13:07:18 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t40525;
  double t40640;
  double t40724;
  double t40654;
  double t40867;
  double t40529;
  double t40551;
  double t40971;
  double t41435;
  double t41446;
  double t41463;
  double t41984;
  double t40695;
  double t40920;
  double t40921;
  double t40571;
  double t41989;
  double t42106;
  double t42297;
  double t42326;
  double t42386;
  double t42387;
  double t42398;
  double t42419;
  double t42753;
  double t42755;
  double t42879;
  double t40574;
  double t40590;
  double t41164;
  double t41424;
  double t42913;
  double t42914;
  double t42920;
  double t42908;
  double t42909;
  double t42911;
  double t42927;
  double t42931;
  double t42932;
  double t42746;
  double t42751;
  double t42935;
  double t42936;
  double t42937;
  double t42940;
  double t42945;
  double t42946;
  double t42973;
  double t42976;
  double t42979;
  double t42982;
  double t42983;
  double t42984;
  double t42991;
  double t42992;
  double t42993;
  t40525 = Cos(var1[3]);
  t40640 = Cos(var1[5]);
  t40724 = Sin(var1[3]);
  t40654 = Sin(var1[4]);
  t40867 = Sin(var1[5]);
  t40529 = Cos(var1[4]);
  t40551 = Sin(var1[9]);
  t40971 = Cos(var1[9]);
  t41435 = t40640*t40724;
  t41446 = t40525*t40654*t40867;
  t41463 = t41435 + t41446;
  t41984 = Sin(var1[10]);
  t40695 = -1.*t40525*t40640*t40654;
  t40920 = t40724*t40867;
  t40921 = t40695 + t40920;
  t40571 = Cos(var1[10]);
  t41989 = t40971*t40525*t40529;
  t42106 = -1.*t40551*t41463;
  t42297 = t41989 + t42106;
  t42326 = Sin(var1[11]);
  t42386 = -1.*t41984*t40921;
  t42387 = t40571*t42297;
  t42398 = t42386 + t42387;
  t42419 = Cos(var1[11]);
  t42753 = t40571*t40921;
  t42755 = t41984*t42297;
  t42879 = t42753 + t42755;
  t40574 = -1.*t40571;
  t40590 = 1. + t40574;
  t41164 = -1.*t40971;
  t41424 = 1. + t41164;
  t42913 = t40525*t40640;
  t42914 = -1.*t40724*t40654*t40867;
  t42920 = t42913 + t42914;
  t42908 = t40640*t40724*t40654;
  t42909 = t40525*t40867;
  t42911 = t42908 + t42909;
  t42927 = -1.*t40971*t40529*t40724;
  t42931 = -1.*t40551*t42920;
  t42932 = t42927 + t42931;
  t42746 = -1.*t42419;
  t42751 = 1. + t42746;
  t42935 = -1.*t41984*t42911;
  t42936 = t40571*t42932;
  t42937 = t42935 + t42936;
  t42940 = t40571*t42911;
  t42945 = t41984*t42932;
  t42946 = t42940 + t42945;
  t42973 = t40971*t40654;
  t42976 = t40529*t40551*t40867;
  t42979 = t42973 + t42976;
  t42982 = -1.*t40529*t40640*t41984;
  t42983 = t40571*t42979;
  t42984 = t42982 + t42983;
  t42991 = t40571*t40529*t40640;
  t42992 = t41984*t42979;
  t42993 = t42991 + t42992;
  p_output1[0]=-0.1575*t40525*t40529*t40551 - 0.325*t40590*t40921 + 0.1575*t41424*t41463 + 0.2255*(t40525*t40529*t40551 + t40971*t41463) + 0.325*t41984*t42297 - 0.575*t42326*t42398 - 0.575*t42751*t42879 - 0.0641*(t42398*t42419 + t42326*t42879) - 0.295*(-1.*t42326*t42398 + t42419*t42879) + var1[2] - 0.5*(0.1575*t40529*t40551*t40724 - 0.325*t40590*t42911 + 0.1575*t41424*t42920 + 0.2255*(-1.*t40529*t40551*t40724 + t40971*t42920) + 0.325*t41984*t42932 - 0.575*t42326*t42937 - 0.575*t42751*t42946 - 0.0641*(t42419*t42937 + t42326*t42946) - 0.295*(-1.*t42326*t42937 + t42419*t42946) + var1[1])*var3[0]*(1. + Tanh((-0.325*t40529*t40590*t40640 - 0.1575*t40551*t40654 + 0.2255*(t40551*t40654 - 1.*t40529*t40867*t40971) - 0.1575*t40529*t40867*t41424 + 0.325*t41984*t42979 - 0.575*t42326*t42984 - 0.575*t42751*t42993 - 0.0641*(t42419*t42984 + t42326*t42993) - 0.295*(-1.*t42326*t42984 + t42419*t42993) + var1[0] - 1.*var2[0])*var4[0]));
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "u_rearSwingFootHeightskewed_DiagonalStance2.hh"

namespace SymFunction
{

void u_rearSwingFootHeightskewed_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
