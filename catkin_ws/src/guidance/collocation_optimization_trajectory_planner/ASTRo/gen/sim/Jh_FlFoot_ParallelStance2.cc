/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:05:02 GMT+02:00
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
  double t10658;
  double t3722;
  double t10458;
  double t10659;
  double t16536;
  double t16538;
  double t16544;
  double t11116;
  double t16532;
  double t16902;
  double t16429;
  double t16904;
  double t853;
  double t17630;
  double t17680;
  double t17689;
  double t10616;
  double t10666;
  double t10689;
  double t16892;
  double t17109;
  double t17212;
  double t17848;
  double t17373;
  double t17404;
  double t17437;
  double t17818;
  double t17730;
  double t17733;
  double t17737;
  double t17819;
  double t17820;
  double t17821;
  double t17852;
  double t17861;
  double t17867;
  double t17896;
  double t17906;
  double t17907;
  double t17918;
  double t17919;
  double t17920;
  double t17967;
  double t17969;
  double t17971;
  double t17602;
  double t17738;
  double t17789;
  double t18096;
  double t18098;
  double t18104;
  double t18105;
  double t18348;
  double t18365;
  double t18375;
  double t18414;
  double t18427;
  double t18430;
  double t18453;
  double t18470;
  double t18471;
  double t18474;
  double t18480;
  double t18484;
  double t18489;
  double t18510;
  double t18513;
  double t18516;
  double t18563;
  double t18573;
  double t18601;
  double t18605;
  double t18622;
  double t18624;
  double t18638;
  double t18488;
  double t18520;
  double t18521;
  double t18607;
  double t18640;
  double t18644;
  double t18650;
  double t18652;
  double t18657;
  double t10871;
  double t17331;
  double t17367;
  double t18547;
  double t18674;
  double t18722;
  double t18749;
  double t18760;
  double t18781;
  double t18807;
  double t18811;
  t10658 = Cos(var1[7]);
  t3722 = Cos(var1[8]);
  t10458 = Sin(var1[7]);
  t10659 = Sin(var1[8]);
  t16536 = t10658*t3722;
  t16538 = t10458*t10659;
  t16544 = t16536 + t16538;
  t11116 = Cos(var1[4]);
  t16532 = Cos(var1[6]);
  t16902 = Sin(var1[5]);
  t16429 = Cos(var1[5]);
  t16904 = Sin(var1[6]);
  t853 = Sin(var1[4]);
  t17630 = t3722*t10458;
  t17680 = -1.*t10658*t10659;
  t17689 = t17630 + t17680;
  t10616 = -1.*t3722*t10458;
  t10666 = t10658*t10659;
  t10689 = t10616 + t10666;
  t16892 = t16429*t16532*t16544;
  t17109 = -1.*t16902*t16904*t16544;
  t17212 = t16892 + t17109;
  t17848 = Sin(var1[3]);
  t17373 = -1.*t16532*t16902;
  t17404 = -1.*t16429*t16904;
  t17437 = t17373 + t17404;
  t17818 = Cos(var1[3]);
  t17730 = t16429*t16532*t17689;
  t17733 = -1.*t16902*t16904*t17689;
  t17737 = t17730 + t17733;
  t17819 = t16532*t16902*t16544;
  t17820 = t16429*t16904*t16544;
  t17821 = t17819 + t17820;
  t17852 = t11116*t10689;
  t17861 = -1.*t853*t17212;
  t17867 = t17852 + t17861;
  t17896 = t16429*t16532;
  t17906 = -1.*t16902*t16904;
  t17907 = t17896 + t17906;
  t17918 = t16532*t16902*t17689;
  t17919 = t16429*t16904*t17689;
  t17920 = t17918 + t17919;
  t17967 = t11116*t16544;
  t17969 = -1.*t853*t17737;
  t17971 = t17967 + t17969;
  t17602 = t853*t16544;
  t17738 = t11116*t17737;
  t17789 = t17602 + t17738;
  t18096 = -1.*t16532;
  t18098 = 1. + t18096;
  t18104 = 0.15121*t18098;
  t18105 = -1.*t10658;
  t18348 = 1. + t18105;
  t18365 = 0.28121*t18348;
  t18375 = -1.*t3722;
  t18414 = 1. + t18375;
  t18427 = 0.50321*t18414;
  t18430 = 0.19821*t3722;
  t18453 = t18427 + t18430;
  t18470 = t10658*t18453;
  t18471 = -0.305*t10458*t10659;
  t18474 = t18365 + t18470 + t18471;
  t18480 = t16532*t18474;
  t18484 = t18104 + t18480;
  t18489 = 0.15121*t16532;
  t18510 = -0.15121*t16904;
  t18513 = t16904*t18474;
  t18516 = t18104 + t18489 + t18510 + t18513;
  t18563 = 0.28121*t10458;
  t18573 = -1.*t18453*t10458;
  t18601 = -0.305*t10658*t10659;
  t18605 = t18563 + t18573 + t18601;
  t18622 = t16429*t18484;
  t18624 = -1.*t16902*t18516;
  t18638 = t18622 + t18624;
  t18488 = t16902*t18484;
  t18520 = t16429*t18516;
  t18521 = t18488 + t18520;
  t18607 = t853*t18605;
  t18640 = t11116*t18638;
  t18644 = t18607 + t18640;
  t18650 = t11116*t18605;
  t18652 = -1.*t853*t18638;
  t18657 = t18650 + t18652;
  t10871 = t853*t10689;
  t17331 = t11116*t17212;
  t17367 = t10871 + t17331;
  t18547 = -1.*t17907*t18521;
  t18674 = t17920*t18521;
  t18722 = -1.*t17920*t18521;
  t18749 = t17821*t18521;
  t18760 = t17907*t18521;
  t18781 = -1.*t17821*t18521;
  t18807 = -1.*t18605*t16544;
  t18811 = t18605*t10689;
  p_output1[0]=t17367;
  p_output1[1]=t11116*t17437;
  p_output1[2]=t17789;
  p_output1[3]=t17818*t17821 - 1.*t17848*t17867;
  p_output1[4]=t17818*t17907 + t17437*t17848*t853;
  p_output1[5]=t17818*t17920 - 1.*t17848*t17971;
  p_output1[6]=t17821*t17848 + t17818*t17867;
  p_output1[7]=t17848*t17907 - 1.*t17437*t17818*t853;
  p_output1[8]=t17848*t17920 + t17818*t17971;
  p_output1[9]=t11116*t17437*(t17789*t18644 + t17971*t18657 + t18674) + t17789*(t18547 - 1.*t11116*t17437*t18644 + t17437*t18657*t853);
  p_output1[10]=t17367*(-1.*t17789*t18644 - 1.*t17971*t18657 + t18722) + t17789*(t17367*t18644 + t17867*t18657 + t18749);
  p_output1[11]=t11116*t17437*(-1.*t17367*t18644 - 1.*t17867*t18657 + t18781) + t17367*(t11116*t17437*t18644 + t18760 - 1.*t17437*t18657*t853);
  p_output1[12]=t17920*(t18547 - 1.*t17437*t18638) + t17907*(t16544*t18605 + t17737*t18638 + t18674);
  p_output1[13]=t17821*(-1.*t17737*t18638 + t18722 + t18807) + t17920*(t17212*t18638 + t18749 + t18811);
  p_output1[14]=t17821*(t17437*t18638 + t18760) + t17907*(-1.*t10689*t18605 - 1.*t17212*t18638 + t18781);
  p_output1[15]=t16544*(t16904*t18484 - 1.*t16532*t18516);
  p_output1[16]=t10689*(-1.*t16532*t17689*t18484 - 1.*t16904*t17689*t18516 + t18807) + t16544*(t16532*t16544*t18484 + t16544*t16904*t18516 + t18811);
  p_output1[17]=t10689*(-1.*t16904*t18484 + t16532*t18516);
  p_output1[18]=0;
  p_output1[19]=-0.15121 + t10689*(-1.*t17689*t18474 + t18807) + t16544*(t16544*t18474 + t18811);
  p_output1[20]=0.15121*t10689 + 0.15121*t17689;
  p_output1[21]=0.28121*t10659 - 1.*t10659*t18453 - 0.305*t10659*t3722;
  p_output1[22]=0;
  p_output1[23]=0.305*Power(t10659,2) + 0.28121*t3722 - 1.*t18453*t3722;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=-0.305;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jh_FlFoot_ParallelStance2.hh"

namespace SymFunction
{

void Jh_FlFoot_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
