/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:37:27 GMT+02:00
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
  double t2759;
  double t2874;
  double t2877;
  double t3363;
  double t4056;
  double t5335;
  double t2870;
  double t9632;
  double t8647;
  double t8679;
  double t10576;
  double t10596;
  double t10650;
  double t10719;
  double t10729;
  double t10746;
  double t11407;
  double t11539;
  double t11652;
  double t11657;
  double t11679;
  double t11680;
  double t3382;
  double t5416;
  double t11777;
  double t9300;
  double t9622;
  double t11785;
  double t11779;
  double t11787;
  double t11789;
  double t11793;
  double t11795;
  double t11796;
  double t10577;
  double t10592;
  double t10740;
  double t10744;
  double t11806;
  double t11942;
  double t11956;
  double t11960;
  double t11962;
  double t11963;
  double t11966;
  double t11970;
  double t11971;
  double t11994;
  double t11995;
  double t11999;
  double t12007;
  double t12009;
  double t12013;
  double t12024;
  double t12029;
  double t12030;
  double t12032;
  double t12033;
  double t12034;
  double t12038;
  double t12040;
  double t12041;
  t2759 = Cos(var1[4]);
  t2874 = Cos(var1[12]);
  t2877 = -1.*t2874;
  t3363 = 1. + t2877;
  t4056 = Sin(var1[12]);
  t5335 = -0.15121*t4056;
  t2870 = Cos(var1[5]);
  t9632 = Sin(var1[5]);
  t8647 = Sin(var1[13]);
  t8679 = Sin(var1[4]);
  t10576 = Cos(var1[13]);
  t10596 = t2874*t2759*t2870;
  t10650 = -1.*t2759*t4056*t9632;
  t10719 = t10596 + t10650;
  t10729 = Cos(var1[14]);
  t10746 = -1.*t8647*t8679;
  t11407 = t10576*t10719;
  t11539 = t10746 + t11407;
  t11652 = Sin(var1[14]);
  t11657 = t10576*t8679;
  t11679 = t8647*t10719;
  t11680 = t11657 + t11679;
  t3382 = 0.15121*t3363;
  t5416 = t3382 + t5335;
  t11777 = Sin(var1[3]);
  t9300 = -0.15121*t3363;
  t9622 = t9300 + t5335;
  t11785 = Cos(var1[3]);
  t11779 = t2870*t11777*t8679;
  t11787 = t11785*t9632;
  t11789 = t11779 + t11787;
  t11793 = t11785*t2870;
  t11795 = -1.*t11777*t8679*t9632;
  t11796 = t11793 + t11795;
  t10577 = -1.*t10576;
  t10592 = 1. + t10577;
  t10740 = -1.*t10729;
  t10744 = 1. + t10740;
  t11806 = t2874*t11789;
  t11942 = t4056*t11796;
  t11956 = t11806 + t11942;
  t11960 = t2759*t8647*t11777;
  t11962 = t10576*t11956;
  t11963 = t11960 + t11962;
  t11966 = -1.*t10576*t2759*t11777;
  t11970 = t8647*t11956;
  t11971 = t11966 + t11970;
  t11994 = -1.*t11785*t2870*t8679;
  t11995 = t11777*t9632;
  t11999 = t11994 + t11995;
  t12007 = t2870*t11777;
  t12009 = t11785*t8679*t9632;
  t12013 = t12007 + t12009;
  t12024 = t2874*t11999;
  t12029 = t4056*t12013;
  t12030 = t12024 + t12029;
  t12032 = -1.*t11785*t2759*t8647;
  t12033 = t10576*t12030;
  t12034 = t12032 + t12033;
  t12038 = t10576*t11785*t2759;
  t12040 = t8647*t12030;
  t12041 = t12038 + t12040;
  p_output1[0]=0.28121*t10592*t10719 + 0.50321*t10744*t11539 - 0.50321*t11652*t11680 + 0.19821*(t10729*t11539 + t11652*t11680) + t2759*t2870*t5416 + 0.28121*t8647*t8679 - 1.*t2759*t9622*t9632 - 0.15121*(-1.*t2759*t2870*t4056 - 1.*t2759*t2874*t9632) + var1[0] - 1.*var2[0];
  p_output1[1]=0.28121*t10592*t11956 + 0.50321*t10744*t11963 - 0.50321*t11652*t11971 + 0.19821*(t10729*t11963 + t11652*t11971) - 0.15121*(t11796*t2874 - 1.*t11789*t4056) + t11789*t5416 - 0.28121*t11777*t2759*t8647 + t11796*t9622 + var1[1] - 1.*var2[1];
  p_output1[2]=0.28121*t10592*t12030 + 0.50321*t10744*t12034 - 0.50321*t11652*t12041 + 0.19821*(t10729*t12034 + t11652*t12041) - 0.15121*(t12013*t2874 - 1.*t11999*t4056) + t11999*t5416 + 0.28121*t11785*t2759*t8647 + t12013*t9622 + var1[2] - 1.*var2[2];
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

namespace SymFunction
{

void h_FrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
