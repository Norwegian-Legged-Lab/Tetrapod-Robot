/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:05:43 GMT+02:00
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
  double t2072;
  double t1437;
  double t1572;
  double t3364;
  double t7024;
  double t8162;
  double t25036;
  double t4626;
  double t25379;
  double t4342;
  double t25381;
  double t4324;
  double t1764;
  double t3561;
  double t3596;
  double t1420;
  double t25176;
  double t25388;
  double t25396;
  double t25483;
  double t25440;
  double t25445;
  double t25446;
  double t25434;
  double t25484;
  double t25492;
  double t25494;
  double t25522;
  double t25523;
  double t25528;
  double t25706;
  double t25707;
  double t25709;
  double t25717;
  double t25722;
  double t25731;
  double t25754;
  double t25758;
  double t25764;
  double t25765;
  double t25767;
  double t25768;
  double t25769;
  double t25774;
  double t25775;
  double t25778;
  double t25783;
  double t25784;
  double t25785;
  double t25788;
  double t25793;
  double t25798;
  double t25799;
  double t25800;
  double t25803;
  double t25804;
  double t25805;
  double t25809;
  double t25810;
  double t25811;
  double t25781;
  double t25789;
  double t25790;
  double t25516;
  double t25535;
  double t25538;
  double t25543;
  double t25549;
  double t25686;
  double t25808;
  double t25812;
  double t25813;
  double t25815;
  double t25816;
  double t25818;
  double t25823;
  double t25826;
  double t25827;
  double t25700;
  double t25701;
  double t25702;
  double t25791;
  double t25831;
  double t4323;
  double t25407;
  double t25410;
  double t25834;
  double t25835;
  double t25836;
  double t25872;
  double t25878;
  double t25886;
  double t25894;
  double t26010;
  double t26022;
  t2072 = Cos(var1[7]);
  t1437 = Cos(var1[8]);
  t1572 = Sin(var1[7]);
  t3364 = Sin(var1[8]);
  t7024 = t2072*t1437;
  t8162 = t1572*t3364;
  t25036 = t7024 + t8162;
  t4626 = Cos(var1[6]);
  t25379 = Sin(var1[5]);
  t4342 = Cos(var1[5]);
  t25381 = Sin(var1[6]);
  t4324 = Cos(var1[4]);
  t1764 = -1.*t1437*t1572;
  t3561 = t2072*t3364;
  t3596 = t1764 + t3561;
  t1420 = Sin(var1[4]);
  t25176 = t4342*t4626*t25036;
  t25388 = -1.*t25379*t25381*t25036;
  t25396 = t25176 + t25388;
  t25483 = Sin(var1[3]);
  t25440 = t4626*t25379*t25036;
  t25445 = t4342*t25381*t25036;
  t25446 = t25440 + t25445;
  t25434 = Cos(var1[3]);
  t25484 = t4324*t3596;
  t25492 = -1.*t1420*t25396;
  t25494 = t25484 + t25492;
  t25522 = t1437*t1572;
  t25523 = -1.*t2072*t3364;
  t25528 = t25522 + t25523;
  t25706 = -1.*t4626;
  t25707 = 1. + t25706;
  t25709 = 0.15121*t25707;
  t25717 = -1.*t2072;
  t25722 = 1. + t25717;
  t25731 = 0.28121*t25722;
  t25754 = -1.*t1437;
  t25758 = 1. + t25754;
  t25764 = 0.50321*t25758;
  t25765 = 0.19821*t1437;
  t25767 = t25764 + t25765;
  t25768 = t2072*t25767;
  t25769 = -0.305*t1572*t3364;
  t25774 = t25731 + t25768 + t25769;
  t25775 = t4626*t25774;
  t25778 = t25709 + t25775;
  t25783 = 0.15121*t4626;
  t25784 = -0.15121*t25381;
  t25785 = t25381*t25774;
  t25788 = t25709 + t25783 + t25784 + t25785;
  t25793 = -1.*t4626*t25379;
  t25798 = -1.*t4342*t25381;
  t25799 = t25793 + t25798;
  t25800 = 0.28121*t1572;
  t25803 = -1.*t25767*t1572;
  t25804 = -0.305*t2072*t3364;
  t25805 = t25800 + t25803 + t25804;
  t25809 = t4342*t25778;
  t25810 = -1.*t25379*t25788;
  t25811 = t25809 + t25810;
  t25781 = t25379*t25778;
  t25789 = t4342*t25788;
  t25790 = t25781 + t25789;
  t25516 = t1420*t25036;
  t25535 = t4342*t4626*t25528;
  t25538 = -1.*t25379*t25381*t25528;
  t25543 = t25535 + t25538;
  t25549 = t4324*t25543;
  t25686 = t25516 + t25549;
  t25808 = t1420*t25805;
  t25812 = t4324*t25811;
  t25813 = t25808 + t25812;
  t25815 = t4324*t25805;
  t25816 = -1.*t1420*t25811;
  t25818 = t25815 + t25816;
  t25823 = t4626*t25379*t25528;
  t25826 = t4342*t25381*t25528;
  t25827 = t25823 + t25826;
  t25700 = t4342*t4626;
  t25701 = -1.*t25379*t25381;
  t25702 = t25700 + t25701;
  t25791 = -1.*t25702*t25790;
  t25831 = t25827*t25790;
  t4323 = t1420*t3596;
  t25407 = t4324*t25396;
  t25410 = t4323 + t25407;
  t25834 = t4324*t25036;
  t25835 = -1.*t1420*t25543;
  t25836 = t25834 + t25835;
  t25872 = -1.*t25827*t25790;
  t25878 = t25446*t25790;
  t25886 = -1.*t25805*t25036;
  t25894 = t25805*t3596;
  t26010 = t25702*t25790;
  t26022 = -1.*t25446*t25790;
  p_output1[0]=t25410;
  p_output1[1]=t25434*t25446 - 1.*t25483*t25494;
  p_output1[2]=t25446*t25483 + t25434*t25494;
  p_output1[3]=t25799*(t25686*t25813 + t25831 + t25818*t25836)*t4324 + t25686*(t25791 + t1420*t25799*t25818 - 1.*t25799*t25813*t4324);
  p_output1[4]=(t25791 - 1.*t25799*t25811)*t25827 + t25702*(t25036*t25805 + t25543*t25811 + t25831);
  p_output1[5]=t25036*(t25381*t25778 - 1.*t25788*t4626);
  p_output1[6]=0;
  p_output1[7]=0.28121*t3364 - 0.305*t1437*t3364 - 1.*t25767*t3364;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t25799*t4324;
  p_output1[19]=t25434*t25702 + t1420*t25483*t25799;
  p_output1[20]=t25483*t25702 - 1.*t1420*t25434*t25799;
  p_output1[21]=t25410*(-1.*t25686*t25813 - 1.*t25818*t25836 + t25872) + t25686*(t25410*t25813 + t25494*t25818 + t25878);
  p_output1[22]=t25446*(-1.*t25543*t25811 + t25872 + t25886) + t25827*(t25396*t25811 + t25878 + t25894);
  p_output1[23]=t25036*(t25036*t25381*t25788 + t25894 + t25036*t25778*t4626) + t3596*(-1.*t25381*t25528*t25788 + t25886 - 1.*t25528*t25778*t4626);
  p_output1[24]=-0.15121 + t25036*(t25036*t25774 + t25894) + (-1.*t25528*t25774 + t25886)*t3596;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t25686;
  p_output1[37]=t25434*t25827 - 1.*t25483*t25836;
  p_output1[38]=t25483*t25827 + t25434*t25836;
  p_output1[39]=t25799*(-1.*t25410*t25813 - 1.*t25494*t25818 + t26022)*t4324 + t25410*(-1.*t1420*t25799*t25818 + t26010 + t25799*t25813*t4324);
  p_output1[40]=t25446*(t25799*t25811 + t26010) + t25702*(-1.*t25396*t25811 + t26022 - 1.*t25805*t3596);
  p_output1[41]=t3596*(-1.*t25381*t25778 + t25788*t4626);
  p_output1[42]=0.15121*t25528 + 0.15121*t3596;
  p_output1[43]=0.28121*t1437 - 1.*t1437*t25767 + 0.305*Power(t3364,2);
  p_output1[44]=-0.305;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fFlFoot_map_ParallelImpact2.hh"

namespace SymFunction
{

void fFlFoot_map_ParallelImpact2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
