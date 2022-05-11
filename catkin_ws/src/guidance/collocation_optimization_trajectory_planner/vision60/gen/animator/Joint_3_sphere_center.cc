/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:11:07 GMT+02:00
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
  double t60;
  double t84;
  double t95;
  double t120;
  double t155;
  double t64;
  double t211;
  double t44;
  double t216;
  double t221;
  double t226;
  double t3466;
  double t3594;
  double t3613;
  double t3727;
  double t3739;
  double t3869;
  double t3916;
  double t3917;
  double t55;
  double t59;
  double t4816;
  double t133;
  double t144;
  double t4992;
  double t11558;
  double t11672;
  double t11698;
  double t4988;
  double t5081;
  double t6050;
  double t11795;
  double t11810;
  double t11817;
  double t3780;
  double t3786;
  double t11873;
  double t11892;
  double t11899;
  double t12104;
  double t12112;
  double t12117;
  double t14324;
  double t14402;
  double t17062;
  double t12841;
  double t13690;
  double t13963;
  double t18133;
  double t18180;
  double t18186;
  double t18320;
  double t18403;
  double t18504;
  double t18696;
  double t18716;
  double t18784;
  t60 = Cos(var1[4]);
  t84 = Sin(var1[9]);
  t95 = Sin(var1[4]);
  t120 = Cos(var1[9]);
  t155 = Sin(var1[5]);
  t64 = Cos(var1[5]);
  t211 = Sin(var1[10]);
  t44 = Cos(var1[10]);
  t216 = t120*t95;
  t221 = t60*t84*t155;
  t226 = t216 + t221;
  t3466 = Sin(var1[11]);
  t3594 = -1.*t60*t64*t211;
  t3613 = t44*t226;
  t3727 = t3594 + t3613;
  t3739 = Cos(var1[11]);
  t3869 = t44*t60*t64;
  t3916 = t211*t226;
  t3917 = t3869 + t3916;
  t55 = -1.*t44;
  t59 = 1. + t55;
  t4816 = Sin(var1[3]);
  t133 = -1.*t120;
  t144 = 1. + t133;
  t4992 = Cos(var1[3]);
  t11558 = t4992*t64;
  t11672 = -1.*t4816*t95*t155;
  t11698 = t11558 + t11672;
  t4988 = t64*t4816*t95;
  t5081 = t4992*t155;
  t6050 = t4988 + t5081;
  t11795 = -1.*t120*t60*t4816;
  t11810 = -1.*t84*t11698;
  t11817 = t11795 + t11810;
  t3780 = -1.*t3739;
  t3786 = 1. + t3780;
  t11873 = -1.*t211*t6050;
  t11892 = t44*t11817;
  t11899 = t11873 + t11892;
  t12104 = t44*t6050;
  t12112 = t211*t11817;
  t12117 = t12104 + t12112;
  t14324 = t64*t4816;
  t14402 = t4992*t95*t155;
  t17062 = t14324 + t14402;
  t12841 = -1.*t4992*t64*t95;
  t13690 = t4816*t155;
  t13963 = t12841 + t13690;
  t18133 = t120*t4992*t60;
  t18180 = -1.*t84*t17062;
  t18186 = t18133 + t18180;
  t18320 = -1.*t211*t13963;
  t18403 = t44*t18186;
  t18504 = t18320 + t18403;
  t18696 = t44*t13963;
  t18716 = t211*t18186;
  t18784 = t18696 + t18716;
  p_output1[0]=0.325*t211*t226 - 0.575*t3466*t3727 - 0.575*t3786*t3917 - 0.575*(-1.*t3466*t3727 + t3739*t3917) - 0.1575*t144*t155*t60 - 0.325*t59*t60*t64 - 0.1575*t84*t95 + 0.2255*(-1.*t120*t155*t60 + t84*t95) + var1[0];
  p_output1[1]=0.1575*t11698*t144 + 0.325*t11817*t211 - 0.575*t11899*t3466 - 0.575*(-1.*t11899*t3466 + t12117*t3739) - 0.575*t12117*t3786 - 0.325*t59*t6050 + 0.1575*t4816*t60*t84 + 0.2255*(t11698*t120 - 1.*t4816*t60*t84) + var1[1];
  p_output1[2]=0.1575*t144*t17062 + 0.325*t18186*t211 - 0.575*t18504*t3466 - 0.575*(-1.*t18504*t3466 + t18784*t3739) - 0.575*t18784*t3786 - 0.325*t13963*t59 - 0.1575*t4992*t60*t84 + 0.2255*(t120*t17062 + t4992*t60*t84) + var1[2];
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

#include "Joint_3_sphere_center.hh"

namespace SymFunction
{

void Joint_3_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
