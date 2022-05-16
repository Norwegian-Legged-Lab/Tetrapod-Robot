/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:31:55 GMT+02:00
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
  double t566;
  double t2338;
  double t2520;
  double t2875;
  double t3085;
  double t2297;
  double t3466;
  double t306;
  double t3591;
  double t3593;
  double t3604;
  double t3622;
  double t3656;
  double t3666;
  double t3696;
  double t3700;
  double t3729;
  double t3736;
  double t3737;
  double t538;
  double t545;
  double t3906;
  double t2884;
  double t3073;
  double t3949;
  double t3981;
  double t3990;
  double t3991;
  double t3935;
  double t3957;
  double t3958;
  double t4050;
  double t4056;
  double t4061;
  double t3713;
  double t3724;
  double t4087;
  double t4088;
  double t4090;
  double t4095;
  double t4111;
  double t4116;
  double t4322;
  double t4326;
  double t4354;
  double t4292;
  double t4293;
  double t4310;
  double t4415;
  double t4419;
  double t4420;
  double t4430;
  double t4439;
  double t4447;
  double t4465;
  double t4508;
  double t4524;
  t566 = Cos(var1[4]);
  t2338 = Sin(var1[9]);
  t2520 = Sin(var1[4]);
  t2875 = Cos(var1[9]);
  t3085 = Sin(var1[5]);
  t2297 = Cos(var1[5]);
  t3466 = Sin(var1[10]);
  t306 = Cos(var1[10]);
  t3591 = t2875*t2520;
  t3593 = t566*t2338*t3085;
  t3604 = t3591 + t3593;
  t3622 = Sin(var1[11]);
  t3656 = -1.*t566*t2297*t3466;
  t3666 = t306*t3604;
  t3696 = t3656 + t3666;
  t3700 = Cos(var1[11]);
  t3729 = t306*t566*t2297;
  t3736 = t3466*t3604;
  t3737 = t3729 + t3736;
  t538 = -1.*t306;
  t545 = 1. + t538;
  t3906 = Sin(var1[3]);
  t2884 = -1.*t2875;
  t3073 = 1. + t2884;
  t3949 = Cos(var1[3]);
  t3981 = t3949*t2297;
  t3990 = -1.*t3906*t2520*t3085;
  t3991 = t3981 + t3990;
  t3935 = t2297*t3906*t2520;
  t3957 = t3949*t3085;
  t3958 = t3935 + t3957;
  t4050 = -1.*t2875*t566*t3906;
  t4056 = -1.*t2338*t3991;
  t4061 = t4050 + t4056;
  t3713 = -1.*t3700;
  t3724 = 1. + t3713;
  t4087 = -1.*t3466*t3958;
  t4088 = t306*t4061;
  t4090 = t4087 + t4088;
  t4095 = t306*t3958;
  t4111 = t3466*t4061;
  t4116 = t4095 + t4111;
  t4322 = t2297*t3906;
  t4326 = t3949*t2520*t3085;
  t4354 = t4322 + t4326;
  t4292 = -1.*t3949*t2297*t2520;
  t4293 = t3906*t3085;
  t4310 = t4292 + t4293;
  t4415 = t2875*t3949*t566;
  t4419 = -1.*t2338*t4354;
  t4420 = t4415 + t4419;
  t4430 = -1.*t3466*t4310;
  t4439 = t306*t4420;
  t4447 = t4430 + t4439;
  t4465 = t306*t4310;
  t4508 = t3466*t4420;
  t4524 = t4465 + t4508;
  p_output1[0]=-0.1575*t2338*t2520 + 0.325*t3466*t3604 - 0.575*t3622*t3696 - 0.575*t3724*t3737 - 0.0641*(t3696*t3700 + t3622*t3737) - 0.295*(-1.*t3622*t3696 + t3700*t3737) - 0.1575*t3073*t3085*t566 - 0.325*t2297*t545*t566 + 0.2255*(t2338*t2520 - 1.*t2875*t3085*t566) + var1[0] - 1.*var2[0];
  p_output1[1]=0.1575*t3073*t3991 + 0.325*t3466*t4061 - 0.575*t3622*t4090 - 0.575*t3724*t4116 - 0.0641*(t3700*t4090 + t3622*t4116) - 0.295*(-1.*t3622*t4090 + t3700*t4116) - 0.325*t3958*t545 + 0.1575*t2338*t3906*t566 + 0.2255*(t2875*t3991 - 1.*t2338*t3906*t566) + var1[1] - 1.*var2[1];
  p_output1[2]=0.1575*t3073*t4354 + 0.325*t3466*t4420 - 0.575*t3622*t4447 - 0.575*t3724*t4524 - 0.0641*(t3700*t4447 + t3622*t4524) - 0.295*(-1.*t3622*t4447 + t3700*t4524) - 0.325*t4310*t545 - 0.1575*t2338*t3949*t566 + 0.2255*(t2875*t4354 + t2338*t3949*t566) + var1[2] - 1.*var2[2];
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

namespace DiagonalStance
{

void h_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
