/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:47:55 GMT+02:00
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
  double t12520;
  double t14389;
  double t18582;
  double t20403;
  double t20976;
  double t13732;
  double t22239;
  double t4444;
  double t22242;
  double t22244;
  double t24003;
  double t24154;
  double t24156;
  double t24163;
  double t24165;
  double t24182;
  double t24285;
  double t24295;
  double t24385;
  double t5274;
  double t11217;
  double t24548;
  double t20629;
  double t20776;
  double t24604;
  double t24613;
  double t24614;
  double t24619;
  double t24600;
  double t24608;
  double t24609;
  double t24673;
  double t24678;
  double t24679;
  double t24183;
  double t24282;
  double t24704;
  double t25007;
  double t25051;
  double t25095;
  double t25099;
  double t25357;
  double t26893;
  double t26914;
  double t26930;
  double t26607;
  double t26618;
  double t26805;
  double t26958;
  double t26967;
  double t26980;
  double t26986;
  double t26996;
  double t27001;
  double t27014;
  double t27020;
  double t27025;
  t12520 = Cos(var1[4]);
  t14389 = Sin(var1[15]);
  t18582 = Sin(var1[4]);
  t20403 = Cos(var1[15]);
  t20976 = Sin(var1[5]);
  t13732 = Cos(var1[5]);
  t22239 = Sin(var1[16]);
  t4444 = Cos(var1[16]);
  t22242 = t20403*t18582;
  t22244 = t12520*t14389*t20976;
  t24003 = t22242 + t22244;
  t24154 = Sin(var1[17]);
  t24156 = -1.*t12520*t13732*t22239;
  t24163 = t4444*t24003;
  t24165 = t24156 + t24163;
  t24182 = Cos(var1[17]);
  t24285 = t4444*t12520*t13732;
  t24295 = t22239*t24003;
  t24385 = t24285 + t24295;
  t5274 = -1.*t4444;
  t11217 = 1. + t5274;
  t24548 = Sin(var1[3]);
  t20629 = -1.*t20403;
  t20776 = 1. + t20629;
  t24604 = Cos(var1[3]);
  t24613 = t24604*t13732;
  t24614 = -1.*t24548*t18582*t20976;
  t24619 = t24613 + t24614;
  t24600 = t13732*t24548*t18582;
  t24608 = t24604*t20976;
  t24609 = t24600 + t24608;
  t24673 = -1.*t20403*t12520*t24548;
  t24678 = -1.*t14389*t24619;
  t24679 = t24673 + t24678;
  t24183 = -1.*t24182;
  t24282 = 1. + t24183;
  t24704 = -1.*t22239*t24609;
  t25007 = t4444*t24679;
  t25051 = t24704 + t25007;
  t25095 = t4444*t24609;
  t25099 = t22239*t24679;
  t25357 = t25095 + t25099;
  t26893 = t13732*t24548;
  t26914 = t24604*t18582*t20976;
  t26930 = t26893 + t26914;
  t26607 = -1.*t24604*t13732*t18582;
  t26618 = t24548*t20976;
  t26805 = t26607 + t26618;
  t26958 = t20403*t24604*t12520;
  t26967 = -1.*t14389*t26930;
  t26980 = t26958 + t26967;
  t26986 = -1.*t22239*t26805;
  t26996 = t4444*t26980;
  t27001 = t26986 + t26996;
  t27014 = t4444*t26805;
  t27020 = t22239*t26980;
  t27025 = t27014 + t27020;
  p_output1[0]=-0.325*t11217*t12520*t13732 + 0.1575*t14389*t18582 + 0.1575*t12520*t20776*t20976 - 0.2255*(t14389*t18582 - 1.*t12520*t20403*t20976) + 0.325*t22239*t24003 - 0.575*t24154*t24165 - 0.575*t24282*t24385 - 0.0641*(t24165*t24182 + t24154*t24385) - 0.295*(-1.*t24154*t24165 + t24182*t24385) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.1575*t12520*t14389*t24548 - 0.325*t11217*t24609 - 0.1575*t20776*t24619 - 0.2255*(-1.*t12520*t14389*t24548 + t20403*t24619) + 0.325*t22239*t24679 - 0.575*t24154*t25051 - 0.575*t24282*t25357 - 0.0641*(t24182*t25051 + t24154*t25357) - 0.295*(-1.*t24154*t25051 + t24182*t25357) + var1[1] - 1.*var2[1];
  p_output1[2]=0.1575*t12520*t14389*t24604 - 0.325*t11217*t26805 - 0.1575*t20776*t26930 - 0.2255*(t12520*t14389*t24604 + t20403*t26930) + 0.325*t22239*t26980 - 0.575*t24154*t27001 - 0.575*t24282*t27025 - 0.0641*(t24182*t27001 + t24154*t27025) - 0.295*(-1.*t24154*t27001 + t24182*t27025) + var1[2] - 1.*var2[2];
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

#include "h_RrFoot_ParallelStance.hh"

namespace ParallelStance
{

void h_RrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
