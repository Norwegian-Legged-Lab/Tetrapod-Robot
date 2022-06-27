/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:24:37 GMT+02:00
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
  double t3322;
  double t6474;
  double t6761;
  double t6568;
  double t6768;
  double t4851;
  double t4868;
  double t7125;
  double t7611;
  double t7614;
  double t7618;
  double t8134;
  double t6672;
  double t6928;
  double t6963;
  double t5761;
  double t8155;
  double t8163;
  double t8206;
  double t10876;
  double t10877;
  double t11557;
  double t13123;
  double t14770;
  double t14893;
  double t14947;
  double t17478;
  t3322 = Cos(var1[3]);
  t6474 = Cos(var1[5]);
  t6761 = Sin(var1[3]);
  t6568 = Sin(var1[4]);
  t6768 = Sin(var1[5]);
  t4851 = Cos(var1[4]);
  t4868 = Sin(var1[15]);
  t7125 = Cos(var1[15]);
  t7611 = t6474*t6761;
  t7614 = t3322*t6568*t6768;
  t7618 = t7611 + t7614;
  t8134 = Sin(var1[16]);
  t6672 = -1.*t3322*t6474*t6568;
  t6928 = t6761*t6768;
  t6963 = t6672 + t6928;
  t5761 = Cos(var1[16]);
  t8155 = t7125*t3322*t4851;
  t8163 = -1.*t4868*t7618;
  t8206 = t8155 + t8163;
  t10876 = Sin(var1[17]);
  t10877 = -1.*t8134*t6963;
  t11557 = t5761*t8206;
  t13123 = t10877 + t11557;
  t14770 = Cos(var1[17]);
  t14893 = t5761*t6963;
  t14947 = t8134*t8206;
  t17478 = t14893 + t14947;
  p_output1[0]=-0.575*t10876*t13123 - 0.575*(1. - 1.*t14770)*t17478 - 0.0641*(t13123*t14770 + t10876*t17478) - 0.295*(-1.*t10876*t13123 + t14770*t17478) + 0.1575*t3322*t4851*t4868 - 0.325*(1. - 1.*t5761)*t6963 - 0.1575*(1. - 1.*t7125)*t7618 - 0.2255*(t3322*t4851*t4868 + t7125*t7618) + 0.325*t8134*t8206 + var1[2];
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

#include "u_rearSwingFootHeightflat_DiagonalStance.hh"

namespace SymFunction
{

void u_rearSwingFootHeightflat_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
