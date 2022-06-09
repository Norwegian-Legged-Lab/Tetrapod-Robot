/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 10:40:11 GMT+02:00
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
  double t4020;
  double t6489;
  double t6896;
  double t7010;
  double t7365;
  double t4181;
  double t8685;
  double t3950;
  double t8702;
  double t11066;
  double t11136;
  double t11212;
  double t11269;
  double t11350;
  double t12115;
  double t12124;
  double t17478;
  double t17684;
  double t17709;
  double t3960;
  double t3981;
  double t18002;
  double t7012;
  double t7161;
  double t18020;
  double t18325;
  double t18326;
  double t18404;
  double t18017;
  double t18109;
  double t18121;
  double t18479;
  double t20738;
  double t20976;
  double t12128;
  double t12130;
  double t21181;
  double t21212;
  double t21225;
  double t24410;
  double t24524;
  double t24538;
  double t26437;
  double t26439;
  double t26440;
  double t26429;
  double t26430;
  double t26431;
  double t26454;
  double t26456;
  double t26457;
  double t26466;
  double t26468;
  double t26469;
  double t26653;
  double t26655;
  double t26656;
  t4020 = Cos(var1[4]);
  t6489 = Sin(var1[12]);
  t6896 = Sin(var1[4]);
  t7010 = Cos(var1[12]);
  t7365 = Sin(var1[5]);
  t4181 = Cos(var1[5]);
  t8685 = Sin(var1[13]);
  t3950 = Cos(var1[13]);
  t8702 = t7010*t6896;
  t11066 = t4020*t6489*t7365;
  t11136 = t8702 + t11066;
  t11212 = Sin(var1[14]);
  t11269 = -1.*t4020*t4181*t8685;
  t11350 = t3950*t11136;
  t12115 = t11269 + t11350;
  t12124 = Cos(var1[14]);
  t17478 = t3950*t4020*t4181;
  t17684 = t8685*t11136;
  t17709 = t17478 + t17684;
  t3960 = -1.*t3950;
  t3981 = 1. + t3960;
  t18002 = Sin(var1[3]);
  t7012 = -1.*t7010;
  t7161 = 1. + t7012;
  t18020 = Cos(var1[3]);
  t18325 = t18020*t4181;
  t18326 = -1.*t18002*t6896*t7365;
  t18404 = t18325 + t18326;
  t18017 = t4181*t18002*t6896;
  t18109 = t18020*t7365;
  t18121 = t18017 + t18109;
  t18479 = -1.*t7010*t4020*t18002;
  t20738 = -1.*t6489*t18404;
  t20976 = t18479 + t20738;
  t12128 = -1.*t12124;
  t12130 = 1. + t12128;
  t21181 = -1.*t8685*t18121;
  t21212 = t3950*t20976;
  t21225 = t21181 + t21212;
  t24410 = t3950*t18121;
  t24524 = t8685*t20976;
  t24538 = t24410 + t24524;
  t26437 = t4181*t18002;
  t26439 = t18020*t6896*t7365;
  t26440 = t26437 + t26439;
  t26429 = -1.*t18020*t4181*t6896;
  t26430 = t18002*t7365;
  t26431 = t26429 + t26430;
  t26454 = t7010*t18020*t4020;
  t26456 = -1.*t6489*t26440;
  t26457 = t26454 + t26456;
  t26466 = -1.*t8685*t26431;
  t26468 = t3950*t26457;
  t26469 = t26466 + t26468;
  t26653 = t3950*t26431;
  t26655 = t8685*t26457;
  t26656 = t26653 + t26655;
  p_output1[0]=0.075*t11212*t12115 + 0.075*t12130*t17709 - 0.0641*(t12115*t12124 + t11212*t17709) + 0.355*(-1.*t11212*t12115 + t12124*t17709) + 0.325*t3981*t4020*t4181 + 0.1575*t6489*t6896 + 0.1575*t4020*t7161*t7365 - 0.2255*(t6489*t6896 - 1.*t4020*t7010*t7365) - 0.325*t11136*t8685 + var1[0] - 1.*var2[0];
  p_output1[1]=0.075*t11212*t21225 + 0.075*t12130*t24538 - 0.0641*(t12124*t21225 + t11212*t24538) + 0.355*(-1.*t11212*t21225 + t12124*t24538) + 0.325*t18121*t3981 - 0.1575*t18002*t4020*t6489 - 0.2255*(-1.*t18002*t4020*t6489 + t18404*t7010) - 0.1575*t18404*t7161 - 0.325*t20976*t8685 + var1[1] - 1.*var2[1];
  p_output1[2]=0.075*t11212*t26469 + 0.075*t12130*t26656 - 0.0641*(t12124*t26469 + t11212*t26656) + 0.355*(-1.*t11212*t26469 + t12124*t26656) + 0.325*t26431*t3981 + 0.1575*t18020*t4020*t6489 - 0.2255*(t18020*t4020*t6489 + t26440*t7010) - 0.1575*t26440*t7161 - 0.325*t26457*t8685 + var1[2] - 1.*var2[2];
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

#include "h_FrFoot_DiagonalStance.hh"

namespace SymFunction
{

void h_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
