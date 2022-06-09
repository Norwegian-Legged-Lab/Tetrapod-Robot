/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 18:25:09 GMT+02:00
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
  double t8308;
  double t8416;
  double t8392;
  double t8394;
  double t8418;
  double t7047;
  double t8251;
  double t8493;
  double t8498;
  double t8517;
  double t8518;
  double t8563;
  double t8395;
  double t8425;
  double t8426;
  double t8312;
  double t8568;
  double t8576;
  double t8581;
  double t8592;
  double t8598;
  double t8605;
  double t8655;
  double t11580;
  double t12229;
  double t12240;
  double t12259;
  double t8313;
  double t8385;
  double t8495;
  double t8496;
  double t16134;
  double t16683;
  double t16964;
  double t11718;
  double t11907;
  double t17009;
  double t17025;
  double t17032;
  double t17041;
  double t17284;
  double t17364;
  double t18501;
  double t18741;
  double t18908;
  double t19476;
  double t19735;
  double t20069;
  double t20097;
  double t20099;
  double t20110;
  double t20127;
  double t20279;
  double t20293;
  double t21276;
  double t21310;
  double t21319;
  double t21334;
  double t21336;
  double t21342;
  double t21427;
  double t21432;
  double t21436;
  double t21477;
  double t21483;
  double t21523;
  double t21542;
  double t21595;
  double t21599;
  double t21716;
  double t21718;
  double t21743;
  t8308 = Sin(var1[3]);
  t8416 = Cos(var1[3]);
  t8392 = Cos(var1[5]);
  t8394 = Sin(var1[4]);
  t8418 = Sin(var1[5]);
  t7047 = Cos(var1[4]);
  t8251 = Sin(var1[15]);
  t8493 = Cos(var1[15]);
  t8498 = t8416*t8392;
  t8517 = -1.*t8308*t8394*t8418;
  t8518 = t8498 + t8517;
  t8563 = Sin(var1[16]);
  t8395 = t8392*t8308*t8394;
  t8425 = t8416*t8418;
  t8426 = t8395 + t8425;
  t8312 = Cos(var1[16]);
  t8568 = -1.*t8493*t7047*t8308;
  t8576 = -1.*t8251*t8518;
  t8581 = t8568 + t8576;
  t8592 = Sin(var1[17]);
  t8598 = -1.*t8563*t8426;
  t8605 = t8312*t8581;
  t8655 = t8598 + t8605;
  t11580 = Cos(var1[17]);
  t12229 = t8312*t8426;
  t12240 = t8563*t8581;
  t12259 = t12229 + t12240;
  t8313 = -1.*t8312;
  t8385 = 1. + t8313;
  t8495 = -1.*t8493;
  t8496 = 1. + t8495;
  t16134 = -1.*t8493*t8416*t8394;
  t16683 = -1.*t8416*t7047*t8251*t8418;
  t16964 = t16134 + t16683;
  t11718 = -1.*t11580;
  t11907 = 1. + t11718;
  t17009 = t8416*t7047*t8392*t8563;
  t17025 = t8312*t16964;
  t17032 = t17009 + t17025;
  t17041 = -1.*t8312*t8416*t7047*t8392;
  t17284 = t8563*t16964;
  t17364 = t17041 + t17284;
  t18501 = t8416*t8392*t8394;
  t18741 = -1.*t8308*t8418;
  t18908 = t18501 + t18741;
  t19476 = t8392*t8308;
  t19735 = t8416*t8394*t8418;
  t20069 = t19476 + t19735;
  t20097 = -1.*t8251*t8563*t18908;
  t20099 = t8312*t20069;
  t20110 = t20097 + t20099;
  t20127 = -1.*t8312*t8251*t18908;
  t20279 = -1.*t8563*t20069;
  t20293 = t20127 + t20279;
  t21276 = -1.*t8416*t7047*t8251;
  t21310 = -1.*t8493*t20069;
  t21319 = t21276 + t21310;
  t21334 = t8493*t8416*t7047;
  t21336 = -1.*t8251*t20069;
  t21342 = t21334 + t21336;
  t21427 = -1.*t8416*t8392*t8394;
  t21432 = t8308*t8418;
  t21436 = t21427 + t21432;
  t21477 = -1.*t8563*t21436;
  t21483 = t8312*t21342;
  t21523 = t21477 + t21483;
  t21542 = -1.*t8312*t21436;
  t21595 = -1.*t8563*t21342;
  t21599 = t21542 + t21595;
  t21716 = t8312*t21436;
  t21718 = t8563*t21342;
  t21743 = t21716 + t21718;
  p_output1[0]=1.;
  p_output1[1]=-0.575*t11907*t12259 - 0.1575*t7047*t8251*t8308 - 0.325*t8385*t8426 - 0.1575*t8496*t8518 - 0.2255*(-1.*t7047*t8251*t8308 + t8493*t8518) + 0.325*t8563*t8581 - 0.575*t8592*t8655 - 0.0641*(t12259*t8592 + t11580*t8655) - 0.295*(t11580*t12259 - 1.*t8592*t8655);
  p_output1[2]=-0.575*t11907*t17364 + 0.325*t7047*t8385*t8392*t8416 - 0.1575*t8251*t8394*t8416 - 0.2255*(-1.*t8251*t8394*t8416 + t7047*t8416*t8418*t8493) - 0.1575*t7047*t8416*t8418*t8496 + 0.325*t16964*t8563 - 0.575*t17032*t8592 - 0.295*(t11580*t17364 - 1.*t17032*t8592) - 0.0641*(t11580*t17032 + t17364*t8592);
  p_output1[3]=-0.575*t11907*t20110 - 0.325*t20069*t8385 - 0.2255*t18908*t8493 - 0.1575*t18908*t8496 - 0.325*t18908*t8251*t8563 - 0.575*t20293*t8592 - 0.0641*(t11580*t20293 + t20110*t8592) - 0.295*(t11580*t20110 - 1.*t20293*t8592);
  p_output1[4]=-0.2255*t21342 - 0.1575*t20069*t8251 + 0.1575*t7047*t8416*t8493 + 0.325*t21319*t8563 - 0.575*t11907*t21319*t8563 - 0.575*t21319*t8312*t8592 - 0.295*(t11580*t21319*t8563 - 1.*t21319*t8312*t8592) - 0.0641*(t11580*t21319*t8312 + t21319*t8563*t8592);
  p_output1[5]=-0.575*t11907*t21523 + 0.325*t21342*t8312 - 0.325*t21436*t8563 - 0.575*t21599*t8592 - 0.0641*(t11580*t21599 + t21523*t8592) - 0.295*(t11580*t21523 - 1.*t21599*t8592);
  p_output1[6]=-0.575*t11580*t21523 - 0.575*t21743*t8592 - 0.0641*(t11580*t21743 - 1.*t21523*t8592) - 0.295*(-1.*t11580*t21523 - 1.*t21743*t8592);
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

#include "J_u_rearSwingFootHeight1_DiagonalStance_DiagonalStance.hh"

namespace SymFunction
{

void J_u_rearSwingFootHeight1_DiagonalStance_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
