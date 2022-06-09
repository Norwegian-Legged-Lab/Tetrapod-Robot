/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 10:40:13 GMT+02:00
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
  double t4025;
  double t7756;
  double t7766;
  double t8223;
  double t11943;
  double t7096;
  double t12078;
  double t1938;
  double t15981;
  double t18005;
  double t18449;
  double t26677;
  double t26901;
  double t26903;
  double t26904;
  double t26919;
  double t26933;
  double t26937;
  double t26938;
  double t3175;
  double t4008;
  double t27177;
  double t10075;
  double t10192;
  double t27244;
  double t27384;
  double t27396;
  double t27400;
  double t27236;
  double t27370;
  double t27381;
  double t27418;
  double t27419;
  double t27420;
  double t26921;
  double t26931;
  double t27426;
  double t27427;
  double t27428;
  double t27433;
  double t27434;
  double t27436;
  double t27535;
  double t27536;
  double t27537;
  double t27523;
  double t27524;
  double t27525;
  double t27553;
  double t27554;
  double t27555;
  double t27561;
  double t27572;
  double t27573;
  double t27575;
  double t27579;
  double t27580;
  t4025 = Cos(var1[4]);
  t7756 = Sin(var1[9]);
  t7766 = Sin(var1[4]);
  t8223 = Cos(var1[9]);
  t11943 = Sin(var1[5]);
  t7096 = Cos(var1[5]);
  t12078 = Sin(var1[10]);
  t1938 = Cos(var1[10]);
  t15981 = t8223*t7766;
  t18005 = t4025*t7756*t11943;
  t18449 = t15981 + t18005;
  t26677 = Sin(var1[11]);
  t26901 = -1.*t4025*t7096*t12078;
  t26903 = t1938*t18449;
  t26904 = t26901 + t26903;
  t26919 = Cos(var1[11]);
  t26933 = t1938*t4025*t7096;
  t26937 = t12078*t18449;
  t26938 = t26933 + t26937;
  t3175 = -1.*t1938;
  t4008 = 1. + t3175;
  t27177 = Sin(var1[3]);
  t10075 = -1.*t8223;
  t10192 = 1. + t10075;
  t27244 = Cos(var1[3]);
  t27384 = t27244*t7096;
  t27396 = -1.*t27177*t7766*t11943;
  t27400 = t27384 + t27396;
  t27236 = t7096*t27177*t7766;
  t27370 = t27244*t11943;
  t27381 = t27236 + t27370;
  t27418 = -1.*t8223*t4025*t27177;
  t27419 = -1.*t7756*t27400;
  t27420 = t27418 + t27419;
  t26921 = -1.*t26919;
  t26931 = 1. + t26921;
  t27426 = -1.*t12078*t27381;
  t27427 = t1938*t27420;
  t27428 = t27426 + t27427;
  t27433 = t1938*t27381;
  t27434 = t12078*t27420;
  t27436 = t27433 + t27434;
  t27535 = t7096*t27177;
  t27536 = t27244*t7766*t11943;
  t27537 = t27535 + t27536;
  t27523 = -1.*t27244*t7096*t7766;
  t27524 = t27177*t11943;
  t27525 = t27523 + t27524;
  t27553 = t8223*t27244*t4025;
  t27554 = -1.*t7756*t27537;
  t27555 = t27553 + t27554;
  t27561 = -1.*t12078*t27525;
  t27572 = t1938*t27555;
  t27573 = t27561 + t27572;
  t27575 = t1938*t27525;
  t27579 = t12078*t27555;
  t27580 = t27575 + t27579;
  p_output1[0]=0.325*t12078*t18449 - 0.575*t26677*t26904 - 0.575*t26931*t26938 - 0.0641*(t26904*t26919 + t26677*t26938) - 0.295*(-1.*t26677*t26904 + t26919*t26938) - 0.1575*t10192*t11943*t4025 - 0.325*t4008*t4025*t7096 - 0.1575*t7756*t7766 + 0.2255*(t7756*t7766 - 1.*t11943*t4025*t8223) + var1[0] - 1.*var2[0];
  p_output1[1]=0.1575*t10192*t27400 + 0.325*t12078*t27420 - 0.575*t26677*t27428 - 0.575*t26931*t27436 - 0.0641*(t26919*t27428 + t26677*t27436) - 0.295*(-1.*t26677*t27428 + t26919*t27436) - 0.325*t27381*t4008 + 0.1575*t27177*t4025*t7756 + 0.2255*(-1.*t27177*t4025*t7756 + t27400*t8223) + var1[1] - 1.*var2[1];
  p_output1[2]=0.1575*t10192*t27537 + 0.325*t12078*t27555 - 0.575*t26677*t27573 - 0.575*t26931*t27580 - 0.0641*(t26919*t27573 + t26677*t27580) - 0.295*(-1.*t26677*t27573 + t26919*t27580) - 0.325*t27525*t4008 - 0.1575*t27244*t4025*t7756 + 0.2255*(t27244*t4025*t7756 + t27537*t8223) + var1[2] - 1.*var2[2];
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

#include "h_RlFoot_DiagonalStance.hh"

namespace SymFunction
{

void h_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
