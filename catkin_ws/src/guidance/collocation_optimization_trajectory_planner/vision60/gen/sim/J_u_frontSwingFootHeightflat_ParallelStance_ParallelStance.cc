/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 22:24:59 GMT+02:00
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
  double t2570;
  double t2436;
  double t2537;
  double t2546;
  double t2582;
  double t3316;
  double t3574;
  double t3946;
  double t4027;
  double t4650;
  double t4904;
  double t460;
  double t2553;
  double t2768;
  double t2968;
  double t6291;
  double t6338;
  double t6717;
  double t6756;
  double t6766;
  double t7832;
  double t8300;
  double t8511;
  double t8837;
  double t9614;
  double t9692;
  double t9798;
  double t1191;
  double t1950;
  double t3402;
  double t3472;
  double t6875;
  double t7623;
  double t10789;
  double t10852;
  double t11060;
  double t11186;
  double t11202;
  double t11223;
  double t11468;
  double t11497;
  double t11520;
  double t12082;
  double t12083;
  double t12085;
  double t12097;
  double t12121;
  double t12131;
  double t12151;
  double t12159;
  double t12163;
  double t12190;
  double t12250;
  double t12337;
  double t13290;
  double t13308;
  double t13340;
  double t13031;
  double t13054;
  double t13225;
  double t13897;
  double t13907;
  double t14916;
  double t15320;
  double t15329;
  double t15406;
  double t14942;
  double t14959;
  double t15254;
  double t15873;
  double t15892;
  double t15901;
  t2570 = Cos(var1[3]);
  t2436 = Cos(var1[5]);
  t2537 = Sin(var1[3]);
  t2546 = Sin(var1[4]);
  t2582 = Sin(var1[5]);
  t3316 = Cos(var1[6]);
  t3574 = t2570*t2436;
  t3946 = -1.*t2537*t2546*t2582;
  t4027 = t3574 + t3946;
  t4650 = Cos(var1[4]);
  t4904 = Sin(var1[6]);
  t460 = Cos(var1[7]);
  t2553 = t2436*t2537*t2546;
  t2768 = t2570*t2582;
  t2968 = t2553 + t2768;
  t6291 = -1.*t4650*t3316*t2537;
  t6338 = -1.*t4027*t4904;
  t6717 = t6291 + t6338;
  t6756 = Sin(var1[7]);
  t6766 = Cos(var1[8]);
  t7832 = t460*t2968;
  t8300 = t6717*t6756;
  t8511 = t7832 + t8300;
  t8837 = t460*t6717;
  t9614 = -1.*t2968*t6756;
  t9692 = t8837 + t9614;
  t9798 = Sin(var1[8]);
  t1191 = -1.*t460;
  t1950 = 1. + t1191;
  t3402 = -1.*t3316;
  t3472 = 1. + t3402;
  t6875 = -1.*t6766;
  t7623 = 1. + t6875;
  t10789 = -1.*t2570*t3316*t2546;
  t10852 = -1.*t2570*t4650*t2582*t4904;
  t11060 = t10789 + t10852;
  t11186 = -1.*t2570*t4650*t2436*t460;
  t11202 = t11060*t6756;
  t11223 = t11186 + t11202;
  t11468 = t460*t11060;
  t11497 = t2570*t4650*t2436*t6756;
  t11520 = t11468 + t11497;
  t12082 = t2570*t2436*t2546;
  t12083 = -1.*t2537*t2582;
  t12085 = t12082 + t12083;
  t12097 = t2436*t2537;
  t12121 = t2570*t2546*t2582;
  t12131 = t12097 + t12121;
  t12151 = t460*t12131;
  t12159 = -1.*t12085*t4904*t6756;
  t12163 = t12151 + t12159;
  t12190 = -1.*t460*t12085*t4904;
  t12250 = -1.*t12131*t6756;
  t12337 = t12190 + t12250;
  t13290 = -1.*t3316*t12131;
  t13308 = -1.*t2570*t4650*t4904;
  t13340 = t13290 + t13308;
  t13031 = t2570*t4650*t3316;
  t13054 = -1.*t12131*t4904;
  t13225 = t13031 + t13054;
  t13897 = -1.*t2570*t2436*t2546;
  t13907 = t2537*t2582;
  t14916 = t13897 + t13907;
  t15320 = -1.*t460*t14916;
  t15329 = -1.*t13225*t6756;
  t15406 = t15320 + t15329;
  t14942 = t460*t13225;
  t14959 = -1.*t14916*t6756;
  t15254 = t14942 + t14959;
  t15873 = t460*t14916;
  t15892 = t13225*t6756;
  t15901 = t15873 + t15892;
  p_output1[0]=1.;
  p_output1[1]=0.325*t1950*t2968 + 0.1575*t3472*t4027 + 0.1575*t2537*t4650*t4904 + 0.2255*(t3316*t4027 - 1.*t2537*t4650*t4904) - 0.325*t6717*t6756 + 0.075*t7623*t8511 + 0.075*t9692*t9798 - 0.0641*(t6766*t9692 + t8511*t9798) + 0.355*(t6766*t8511 - 1.*t9692*t9798);
  p_output1[2]=-0.325*t1950*t2436*t2570*t4650 + 0.1575*t2570*t2582*t3472*t4650 + 0.1575*t2546*t2570*t4904 + 0.2255*(t2570*t2582*t3316*t4650 - 1.*t2546*t2570*t4904) - 0.325*t11060*t6756 + 0.075*t11223*t7623 + 0.075*t11520*t9798 - 0.0641*(t11520*t6766 + t11223*t9798) + 0.355*(t11223*t6766 - 1.*t11520*t9798);
  p_output1[3]=0.325*t12131*t1950 + 0.2255*t12085*t3316 + 0.1575*t12085*t3472 + 0.325*t12085*t4904*t6756 + 0.075*t12163*t7623 + 0.075*t12337*t9798 - 0.0641*(t12337*t6766 + t12163*t9798) + 0.355*(t12163*t6766 - 1.*t12337*t9798);
  p_output1[4]=0.2255*t13225 - 0.1575*t2570*t3316*t4650 + 0.1575*t12131*t4904 - 0.325*t13340*t6756 + 0.075*t13340*t6756*t7623 + 0.075*t13340*t460*t9798 + 0.355*(t13340*t6756*t6766 - 1.*t13340*t460*t9798) - 0.0641*(t13340*t460*t6766 + t13340*t6756*t9798);
  p_output1[5]=-0.325*t13225*t460 + 0.325*t14916*t6756 + 0.075*t15254*t7623 + 0.075*t15406*t9798 - 0.0641*(t15406*t6766 + t15254*t9798) + 0.355*(t15254*t6766 - 1.*t15406*t9798);
  p_output1[6]=0.075*t15254*t6766 + 0.075*t15901*t9798 - 0.0641*(t15901*t6766 - 1.*t15254*t9798) + 0.355*(-1.*t15254*t6766 - 1.*t15901*t9798);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_u_frontSwingFootHeightflat_ParallelStance_ParallelStance.hh"

namespace SymFunction
{

void J_u_frontSwingFootHeightflat_ParallelStance_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
