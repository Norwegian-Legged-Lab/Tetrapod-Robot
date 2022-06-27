/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 14:35:37 GMT+02:00
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
  double t1860;
  double t290;
  double t5089;
  double t5105;
  double t5115;
  double t5123;
  double t5124;
  double t5756;
  double t2867;
  double t3770;
  double t3812;
  double t4486;
  double t4565;
  double t6906;
  double t7380;
  double t5648;
  double t7793;
  double t7823;
  double t7879;
  double t8035;
  double t8121;
  double t8135;
  double t5097;
  double t5111;
  double t5113;
  double t8424;
  double t8427;
  double t8414;
  double t8382;
  double t8384;
  double t8388;
  double t8398;
  double t8425;
  double t8442;
  double t8443;
  double t8477;
  double t8464;
  double t8465;
  double t8467;
  double t8463;
  double t8492;
  double t8504;
  double t8505;
  double t8161;
  double t8195;
  double t8198;
  double t8235;
  double t8336;
  double t7558;
  double t8150;
  double t8151;
  double t8545;
  double t8548;
  double t8549;
  double t8538;
  double t8539;
  double t8544;
  double t8566;
  double t8576;
  double t8586;
  double t8805;
  double t8831;
  double t8837;
  double t9106;
  double t9240;
  double t9419;
  double t8597;
  double t8632;
  double t8655;
  double t8724;
  double t8879;
  double t8885;
  double t8901;
  double t8955;
  double t9046;
  double t9956;
  double t9965;
  double t9989;
  double t10001;
  double t10108;
  double t10109;
  double t10303;
  double t10307;
  double t10318;
  double t14147;
  double t13498;
  double t8408;
  double t8458;
  double t8461;
  double t15071;
  double t11778;
  double t12115;
  double t12152;
  double t15085;
  double t16051;
  double t16061;
  t1860 = Cos(var1[11]);
  t290 = Sin(var1[11]);
  t5089 = Cos(var1[10]);
  t5105 = Sin(var1[10]);
  t5115 = t5089*t1860;
  t5123 = t5105*t290;
  t5124 = t5115 + t5123;
  t5756 = Cos(var1[9]);
  t2867 = -1.*t1860;
  t3770 = 1. + t2867;
  t3812 = -0.50321*t3770;
  t4486 = -0.19821*t1860;
  t4565 = t3812 + t4486;
  t6906 = -1.*t5756;
  t7380 = 1. + t6906;
  t5648 = Sin(var1[9]);
  t7793 = -1.*t5089;
  t7823 = 1. + t7793;
  t7879 = -0.28121*t7823;
  t8035 = t5089*t4565;
  t8121 = 0.305*t5105*t290;
  t8135 = t7879 + t8035 + t8121;
  t5097 = -1.*t5089*t1860;
  t5111 = -1.*t5105*t290;
  t5113 = t5097 + t5111;
  t8424 = Cos(var1[5]);
  t8427 = Sin(var1[5]);
  t8414 = Cos(var1[4]);
  t8382 = -1.*t1860*t5105;
  t8384 = t5089*t290;
  t8388 = t8382 + t8384;
  t8398 = Sin(var1[4]);
  t8425 = t5756*t8424*t5113;
  t8442 = -1.*t5648*t5113*t8427;
  t8443 = t8425 + t8442;
  t8477 = Cos(var1[3]);
  t8464 = t8424*t5648*t5113;
  t8465 = t5756*t5113*t8427;
  t8467 = t8464 + t8465;
  t8463 = Sin(var1[3]);
  t8492 = t8414*t8388;
  t8504 = -1.*t8398*t8443;
  t8505 = t8492 + t8504;
  t8161 = 0.15121*t7380;
  t8195 = 0.15121*t5756;
  t8198 = 0.15121*t5648;
  t8235 = t5648*t8135;
  t8336 = t8161 + t8195 + t8198 + t8235;
  t7558 = -0.15121*t7380;
  t8150 = t5756*t8135;
  t8151 = t7558 + t8150;
  t8545 = -1.*t5756*t8424;
  t8548 = t5648*t8427;
  t8549 = t8545 + t8548;
  t8538 = t8424*t5648*t8388;
  t8539 = t5756*t8388*t8427;
  t8544 = t8538 + t8539;
  t8566 = t8424*t8336;
  t8576 = t8151*t8427;
  t8586 = t8566 + t8576;
  t8805 = t8424*t8151;
  t8831 = -1.*t8336*t8427;
  t8837 = t8805 + t8831;
  t9106 = t5756*t8424*t8388;
  t9240 = -1.*t5648*t8388*t8427;
  t9419 = t9106 + t9240;
  t8597 = -1.*t8549*t8586;
  t8632 = t8424*t5648;
  t8655 = t5756*t8427;
  t8724 = t8632 + t8655;
  t8879 = 0.28121*t5105;
  t8885 = t4565*t5105;
  t8901 = -0.305*t5089*t290;
  t8955 = t8879 + t8885 + t8901;
  t9046 = t8544*t8586;
  t9956 = t5124*t8398;
  t9965 = t8414*t9419;
  t9989 = t9956 + t9965;
  t10001 = t8955*t8398;
  t10108 = t8414*t8837;
  t10109 = t10001 + t10108;
  t10303 = t8414*t8955;
  t10307 = -1.*t8398*t8837;
  t10318 = t10303 + t10307;
  t14147 = -1.*t8955*t5124;
  t13498 = t8955*t8388;
  t8408 = t8388*t8398;
  t8458 = t8414*t8443;
  t8461 = t8408 + t8458;
  t15071 = -1.*t8544*t8586;
  t11778 = t8414*t5124;
  t12115 = -1.*t8398*t9419;
  t12152 = t11778 + t12115;
  t15085 = t8467*t8586;
  t16051 = t8549*t8586;
  t16061 = -1.*t8467*t8586;
  p_output1[0]=t8461*var2[0] + (t8467*t8477 - 1.*t8463*t8505)*var2[1] + (t8463*t8467 + t8477*t8505)*var2[2] + ((t8597 + t10318*t8398*t8724 - 1.*t10109*t8414*t8724)*t9989 + t8414*t8724*(t10318*t12152 + t9046 + t10109*t9989))*var2[3] + (t8544*(t8597 - 1.*t8724*t8837) + t8549*(t5124*t8955 + t9046 + t8837*t9419))*var2[4] + t5124*(-1.*t5648*t8151 + t5756*t8336)*var2[5] + (0.15121*t5113 + 0.15121*t5124)*var2[9] + (0.28121*t290 - 0.305*t1860*t290 + t290*t4565)*var2[10];
  p_output1[1]=t8414*t8724*var2[0] + (t8477*t8549 + t8398*t8463*t8724)*var2[1] + (t8463*t8549 - 1.*t8398*t8477*t8724)*var2[2] + ((t15085 + t10109*t8461 + t10318*t8505)*t9989 + t8461*(-1.*t10318*t12152 + t15071 - 1.*t10109*t9989))*var2[3] + (t8544*(t13498 + t15085 + t8443*t8837) + t8467*(t14147 + t15071 - 1.*t8837*t9419))*var2[4] + (t5124*(t13498 + t5113*t5756*t8151 + t5113*t5648*t8336) + t8388*(t14147 - 1.*t5756*t8151*t8388 - 1.*t5648*t8336*t8388))*var2[5] + (-0.15121 + t5124*(t13498 + t5113*t8135) + t8388*(t14147 - 1.*t8135*t8388))*var2[9];
  p_output1[2]=t9989*var2[0] + (-1.*t12152*t8463 + t8477*t8544)*var2[1] + (t12152*t8477 + t8463*t8544)*var2[2] + (t8414*(t16061 - 1.*t10109*t8461 - 1.*t10318*t8505)*t8724 + t8461*(t16051 - 1.*t10318*t8398*t8724 + t10109*t8414*t8724))*var2[3] + (t8467*(t16051 + t8724*t8837) + t8549*(t16061 - 1.*t8443*t8837 - 1.*t8388*t8955))*var2[4] + (t5648*t8151 - 1.*t5756*t8336)*t8388*var2[5] + (0.28121*t1860 + 0.305*Power(t290,2) + t1860*t4565)*var2[10] - 0.305*var2[11];
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
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
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

#include "dh_RlFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void dh_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
