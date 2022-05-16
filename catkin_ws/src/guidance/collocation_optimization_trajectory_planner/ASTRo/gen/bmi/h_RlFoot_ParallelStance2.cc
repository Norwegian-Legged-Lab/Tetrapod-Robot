/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:52:36 GMT+02:00
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
  double t2931;
  double t8100;
  double t9079;
  double t12444;
  double t18483;
  double t24074;
  double t3410;
  double t27200;
  double t25695;
  double t26123;
  double t27541;
  double t27587;
  double t27592;
  double t27631;
  double t27928;
  double t28032;
  double t28081;
  double t28091;
  double t28577;
  double t28588;
  double t28606;
  double t29380;
  double t15151;
  double t24653;
  double t35458;
  double t26138;
  double t27182;
  double t37138;
  double t36818;
  double t38680;
  double t38952;
  double t41001;
  double t41005;
  double t41054;
  double t27567;
  double t27574;
  double t27968;
  double t28000;
  double t43409;
  double t43418;
  double t43425;
  double t43459;
  double t44327;
  double t44340;
  double t44359;
  double t44407;
  double t44470;
  double t45208;
  double t45216;
  double t45239;
  double t45250;
  double t45258;
  double t45277;
  double t45363;
  double t45412;
  double t45524;
  double t45597;
  double t45600;
  double t45610;
  double t45727;
  double t45728;
  double t45731;
  t2931 = Cos(var1[4]);
  t8100 = Cos(var1[9]);
  t9079 = -1.*t8100;
  t12444 = 1. + t9079;
  t18483 = Sin(var1[9]);
  t24074 = 0.15121*t18483;
  t3410 = Cos(var1[5]);
  t27200 = Sin(var1[5]);
  t25695 = Sin(var1[10]);
  t26123 = Sin(var1[4]);
  t27541 = Cos(var1[10]);
  t27587 = t8100*t2931*t3410;
  t27592 = -1.*t2931*t18483*t27200;
  t27631 = t27587 + t27592;
  t27928 = Cos(var1[11]);
  t28032 = t25695*t26123;
  t28081 = t27541*t27631;
  t28091 = t28032 + t28081;
  t28577 = Sin(var1[11]);
  t28588 = t27541*t26123;
  t28606 = -1.*t25695*t27631;
  t29380 = t28588 + t28606;
  t15151 = -0.15121*t12444;
  t24653 = t15151 + t24074;
  t35458 = Sin(var1[3]);
  t26138 = 0.15121*t12444;
  t27182 = t26138 + t24074;
  t37138 = Cos(var1[3]);
  t36818 = t3410*t35458*t26123;
  t38680 = t37138*t27200;
  t38952 = t36818 + t38680;
  t41001 = t37138*t3410;
  t41005 = -1.*t35458*t26123*t27200;
  t41054 = t41001 + t41005;
  t27567 = -1.*t27541;
  t27574 = 1. + t27567;
  t27968 = -1.*t27928;
  t28000 = 1. + t27968;
  t43409 = t8100*t38952;
  t43418 = t18483*t41054;
  t43425 = t43409 + t43418;
  t43459 = -1.*t2931*t25695*t35458;
  t44327 = t27541*t43425;
  t44340 = t43459 + t44327;
  t44359 = -1.*t27541*t2931*t35458;
  t44407 = -1.*t25695*t43425;
  t44470 = t44359 + t44407;
  t45208 = -1.*t37138*t3410*t26123;
  t45216 = t35458*t27200;
  t45239 = t45208 + t45216;
  t45250 = t3410*t35458;
  t45258 = t37138*t26123*t27200;
  t45277 = t45250 + t45258;
  t45363 = t8100*t45239;
  t45412 = t18483*t45277;
  t45524 = t45363 + t45412;
  t45597 = t37138*t2931*t25695;
  t45600 = t27541*t45524;
  t45610 = t45597 + t45600;
  t45727 = t27541*t37138*t2931;
  t45728 = -1.*t25695*t45524;
  t45731 = t45727 + t45728;
  p_output1[0]=0.28121*t25695*t26123 - 0.28121*t27574*t27631 - 0.50321*t28000*t28091 - 1.*t27182*t27200*t2931 - 0.50321*t28577*t29380 - 0.23321*(t27928*t28091 - 1.*t28577*t29380) + t24653*t2931*t3410 + 0.15121*(-1.*t18483*t2931*t3410 - 1.*t27200*t2931*t8100) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.28121*t25695*t2931*t35458 + t24653*t38952 + t27182*t41054 - 0.28121*t27574*t43425 - 0.50321*t28000*t44340 - 0.50321*t28577*t44470 - 0.23321*(t27928*t44340 - 1.*t28577*t44470) + 0.15121*(-1.*t18483*t38952 + t41054*t8100) + var1[1] - 1.*var2[1];
  p_output1[2]=0.28121*t25695*t2931*t37138 + t24653*t45239 + t27182*t45277 - 0.28121*t27574*t45524 - 0.50321*t28000*t45610 - 0.50321*t28577*t45731 - 0.23321*(t27928*t45610 - 1.*t28577*t45731) + 0.15121*(-1.*t18483*t45239 + t45277*t8100) + var1[2] - 1.*var2[2];
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

#include "h_RlFoot_ParallelStance2.hh"

namespace SymFunction
{

void h_RlFoot_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
