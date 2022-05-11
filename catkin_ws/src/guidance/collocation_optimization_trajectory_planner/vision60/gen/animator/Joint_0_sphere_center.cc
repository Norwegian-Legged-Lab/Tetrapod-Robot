/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:10:58 GMT+02:00
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
  double t3768;
  double t4466;
  double t4566;
  double t4606;
  double t4615;
  double t3856;
  double t3938;
  double t4855;
  double t4862;
  double t4903;
  double t4910;
  double t4400;
  double t4422;
  double t4494;
  double t4540;
  double t4998;
  double t4991;
  double t5076;
  double t5092;
  double t5143;
  double t4995;
  double t5022;
  double t5047;
  double t5276;
  double t5288;
  double t5289;
  double t5457;
  double t5461;
  double t5477;
  double t5360;
  double t5369;
  double t5386;
  double t5609;
  double t5610;
  double t6150;
  t3768 = Cos(var1[4]);
  t4466 = Cos(var1[6]);
  t4566 = Sin(var1[5]);
  t4606 = Sin(var1[4]);
  t4615 = Sin(var1[6]);
  t3856 = Cos(var1[5]);
  t3938 = Cos(var1[7]);
  t4855 = t4466*t4606;
  t4862 = t3768*t4566*t4615;
  t4903 = t4855 + t4862;
  t4910 = Sin(var1[7]);
  t4400 = -1.*t3938;
  t4422 = 1. + t4400;
  t4494 = -1.*t4466;
  t4540 = 1. + t4494;
  t4998 = Cos(var1[3]);
  t4991 = Sin(var1[3]);
  t5076 = t4998*t3856;
  t5092 = -1.*t4991*t4606*t4566;
  t5143 = t5076 + t5092;
  t4995 = t3856*t4991*t4606;
  t5022 = t4998*t4566;
  t5047 = t4995 + t5022;
  t5276 = -1.*t3768*t4466*t4991;
  t5288 = -1.*t5143*t4615;
  t5289 = t5276 + t5288;
  t5457 = t3856*t4991;
  t5461 = t4998*t4606*t4566;
  t5477 = t5457 + t5461;
  t5360 = -1.*t4998*t3856*t4606;
  t5369 = t4991*t4566;
  t5386 = t5360 + t5369;
  t5609 = t4998*t3768*t4466;
  t5610 = -1.*t5477*t4615;
  t6150 = t5609 + t5610;
  p_output1[0]=0.325*t3768*t3856*t4422 - 0.1575*t3768*t4540*t4566 - 0.1575*t4606*t4615 + 0.2255*(-1.*t3768*t4466*t4566 + t4606*t4615) - 0.325*t4903*t4910 + 0.325*(t3768*t3856*t3938 + t4903*t4910) + var1[0];
  p_output1[1]=0.1575*t3768*t4615*t4991 + 0.325*t4422*t5047 + 0.1575*t4540*t5143 + 0.2255*(-1.*t3768*t4615*t4991 + t4466*t5143) - 0.325*t4910*t5289 + 0.325*(t3938*t5047 + t4910*t5289) + var1[1];
  p_output1[2]=-0.1575*t3768*t4615*t4998 + 0.325*t4422*t5386 + 0.1575*t4540*t5477 + 0.2255*(t3768*t4615*t4998 + t4466*t5477) - 0.325*t4910*t6150 + 0.325*(t3938*t5386 + t4910*t6150) + var1[2];
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

#include "Joint_0_sphere_center.hh"

namespace SymFunction
{

void Joint_0_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
