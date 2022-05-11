/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:11:24 GMT+02:00
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
  double t139;
  double t154;
  double t165;
  double t2552;
  double t3102;
  double t145;
  double t3435;
  double t91;
  double t3539;
  double t3540;
  double t3595;
  double t3640;
  double t3674;
  double t4336;
  double t4551;
  double t4613;
  double t4730;
  double t4881;
  double t5153;
  double t123;
  double t131;
  double t6334;
  double t2861;
  double t2928;
  double t6378;
  double t6439;
  double t6442;
  double t6446;
  double t6350;
  double t6409;
  double t6413;
  double t6628;
  double t6632;
  double t6635;
  double t4714;
  double t4729;
  double t6644;
  double t6648;
  double t6653;
  double t6655;
  double t6656;
  double t6657;
  double t6677;
  double t6678;
  double t6679;
  double t6670;
  double t6671;
  double t6674;
  double t6685;
  double t6686;
  double t6687;
  double t6692;
  double t6693;
  double t6694;
  double t6701;
  double t6702;
  double t6703;
  t139 = Cos(var1[4]);
  t154 = Sin(var1[12]);
  t165 = Sin(var1[4]);
  t2552 = Cos(var1[12]);
  t3102 = Sin(var1[5]);
  t145 = Cos(var1[5]);
  t3435 = Sin(var1[13]);
  t91 = Cos(var1[13]);
  t3539 = t2552*t165;
  t3540 = t139*t154*t3102;
  t3595 = t3539 + t3540;
  t3640 = Sin(var1[14]);
  t3674 = -1.*t139*t145*t3435;
  t4336 = t91*t3595;
  t4551 = t3674 + t4336;
  t4613 = Cos(var1[14]);
  t4730 = t91*t139*t145;
  t4881 = t3435*t3595;
  t5153 = t4730 + t4881;
  t123 = -1.*t91;
  t131 = 1. + t123;
  t6334 = Sin(var1[3]);
  t2861 = -1.*t2552;
  t2928 = 1. + t2861;
  t6378 = Cos(var1[3]);
  t6439 = t6378*t145;
  t6442 = -1.*t6334*t165*t3102;
  t6446 = t6439 + t6442;
  t6350 = t145*t6334*t165;
  t6409 = t6378*t3102;
  t6413 = t6350 + t6409;
  t6628 = -1.*t2552*t139*t6334;
  t6632 = -1.*t154*t6446;
  t6635 = t6628 + t6632;
  t4714 = -1.*t4613;
  t4729 = 1. + t4714;
  t6644 = -1.*t3435*t6413;
  t6648 = t91*t6635;
  t6653 = t6644 + t6648;
  t6655 = t91*t6413;
  t6656 = t3435*t6635;
  t6657 = t6655 + t6656;
  t6677 = t145*t6334;
  t6678 = t6378*t165*t3102;
  t6679 = t6677 + t6678;
  t6670 = -1.*t6378*t145*t165;
  t6671 = t6334*t3102;
  t6674 = t6670 + t6671;
  t6685 = t2552*t6378*t139;
  t6686 = -1.*t154*t6679;
  t6687 = t6685 + t6686;
  t6692 = -1.*t3435*t6674;
  t6693 = t91*t6687;
  t6694 = t6692 + t6693;
  t6701 = t91*t6674;
  t6702 = t3435*t6687;
  t6703 = t6701 + t6702;
  p_output1[0]=0.325*t131*t139*t145 + 0.1575*t154*t165 + 0.1575*t139*t2928*t3102 - 0.2255*(t154*t165 - 1.*t139*t2552*t3102) - 0.325*t3435*t3595 + 0.075*t3640*t4551 + 0.075*t4729*t5153 - 0.0641*(t4551*t4613 + t3640*t5153) + 0.355*(-1.*t3640*t4551 + t4613*t5153) + var1[0];
  p_output1[1]=-0.1575*t139*t154*t6334 + 0.325*t131*t6413 - 0.1575*t2928*t6446 - 0.2255*(-1.*t139*t154*t6334 + t2552*t6446) - 0.325*t3435*t6635 + 0.075*t3640*t6653 + 0.075*t4729*t6657 - 0.0641*(t4613*t6653 + t3640*t6657) + 0.355*(-1.*t3640*t6653 + t4613*t6657) + var1[1];
  p_output1[2]=0.1575*t139*t154*t6378 + 0.325*t131*t6674 - 0.1575*t2928*t6679 - 0.2255*(t139*t154*t6378 + t2552*t6679) - 0.325*t3435*t6687 + 0.075*t3640*t6694 + 0.075*t4729*t6703 - 0.0641*(t4613*t6694 + t3640*t6703) + 0.355*(-1.*t3640*t6694 + t4613*t6703) + var1[2];
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

#include "FrFoot_sphere_center.hh"

namespace SymFunction
{

void FrFoot_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
