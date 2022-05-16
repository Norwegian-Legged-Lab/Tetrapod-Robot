/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:33:17 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t9122;
  double t9164;
  double t9165;
  double t9283;
  double t9631;
  double t9125;
  double t9745;
  double t8230;
  double t9758;
  double t9761;
  double t9764;
  double t9794;
  double t9798;
  double t9800;
  double t9824;
  double t9835;
  double t9939;
  double t9969;
  double t10101;
  double t8872;
  double t9118;
  double t10234;
  double t9419;
  double t9421;
  double t10251;
  double t10312;
  double t10318;
  double t10319;
  double t10248;
  double t10264;
  double t10277;
  double t10348;
  double t10425;
  double t10450;
  double t9894;
  double t9925;
  double t10455;
  double t10471;
  double t10475;
  double t10633;
  double t10643;
  double t10657;
  double t10779;
  double t10787;
  double t10789;
  double t10752;
  double t10756;
  double t10770;
  double t10882;
  double t10900;
  double t10901;
  double t10910;
  double t10911;
  double t10912;
  double t10969;
  double t10977;
  double t10978;
  t9122 = Cos(var1[4]);
  t9164 = Sin(var1[12]);
  t9165 = Sin(var1[4]);
  t9283 = Cos(var1[12]);
  t9631 = Sin(var1[5]);
  t9125 = Cos(var1[5]);
  t9745 = Sin(var1[13]);
  t8230 = Cos(var1[13]);
  t9758 = t9283*t9165;
  t9761 = t9122*t9164*t9631;
  t9764 = t9758 + t9761;
  t9794 = Sin(var1[14]);
  t9798 = -1.*t9122*t9125*t9745;
  t9800 = t8230*t9764;
  t9824 = t9798 + t9800;
  t9835 = Cos(var1[14]);
  t9939 = t8230*t9122*t9125;
  t9969 = t9745*t9764;
  t10101 = t9939 + t9969;
  t8872 = -1.*t8230;
  t9118 = 1. + t8872;
  t10234 = Sin(var1[3]);
  t9419 = -1.*t9283;
  t9421 = 1. + t9419;
  t10251 = Cos(var1[3]);
  t10312 = t10251*t9125;
  t10318 = -1.*t10234*t9165*t9631;
  t10319 = t10312 + t10318;
  t10248 = t9125*t10234*t9165;
  t10264 = t10251*t9631;
  t10277 = t10248 + t10264;
  t10348 = -1.*t9283*t9122*t10234;
  t10425 = -1.*t9164*t10319;
  t10450 = t10348 + t10425;
  t9894 = -1.*t9835;
  t9925 = 1. + t9894;
  t10455 = -1.*t9745*t10277;
  t10471 = t8230*t10450;
  t10475 = t10455 + t10471;
  t10633 = t8230*t10277;
  t10643 = t9745*t10450;
  t10657 = t10633 + t10643;
  t10779 = t9125*t10234;
  t10787 = t10251*t9165*t9631;
  t10789 = t10779 + t10787;
  t10752 = -1.*t10251*t9125*t9165;
  t10756 = t10234*t9631;
  t10770 = t10752 + t10756;
  t10882 = t9283*t10251*t9122;
  t10900 = -1.*t9164*t10789;
  t10901 = t10882 + t10900;
  t10910 = -1.*t9745*t10770;
  t10911 = t8230*t10901;
  t10912 = t10910 + t10911;
  t10969 = t8230*t10770;
  t10977 = t9745*t10901;
  t10978 = t10969 + t10977;
  p_output1[0]=0.325*t9118*t9122*t9125 + 0.1575*t9164*t9165 + 0.1575*t9122*t9421*t9631 - 0.2255*(t9164*t9165 - 1.*t9122*t9283*t9631) - 0.325*t9745*t9764 + 0.075*t9794*t9824 + 0.355*(-1.*t9794*t9824 + t10101*t9835) - 0.0641*(t10101*t9794 + t9824*t9835) + 0.075*t10101*t9925 + var1[0] - 1.*var2[0];
  p_output1[1]=0.325*t10277*t9118 - 0.1575*t10234*t9122*t9164 - 0.2255*(-1.*t10234*t9122*t9164 + t10319*t9283) - 0.1575*t10319*t9421 - 0.325*t10450*t9745 + 0.075*t10475*t9794 - 0.0641*(t10657*t9794 + t10475*t9835) + 0.355*(-1.*t10475*t9794 + t10657*t9835) + 0.075*t10657*t9925 + var1[1] - 1.*var2[1];
  p_output1[2]=0.325*t10770*t9118 + 0.1575*t10251*t9122*t9164 - 0.2255*(t10251*t9122*t9164 + t10789*t9283) - 0.1575*t10789*t9421 - 0.325*t10901*t9745 + 0.075*t10912*t9794 - 0.0641*(t10978*t9794 + t10912*t9835) + 0.355*(-1.*t10912*t9794 + t10978*t9835) + 0.075*t10978*t9925 + var1[2] - 1.*var2[2];
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "h_FrFoot_ParallelStance.hh"

namespace ParallelStance
{

void h_FrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
