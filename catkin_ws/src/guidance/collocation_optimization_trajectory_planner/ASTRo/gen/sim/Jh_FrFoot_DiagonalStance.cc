/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:40:15 GMT+02:00
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
  double t4118;
  double t1227;
  double t2240;
  double t4124;
  double t19520;
  double t19580;
  double t19786;
  double t18640;
  double t19517;
  double t19792;
  double t19516;
  double t20085;
  double t5251;
  double t20912;
  double t20913;
  double t20986;
  double t3780;
  double t4146;
  double t5056;
  double t19791;
  double t20734;
  double t20740;
  double t21222;
  double t20753;
  double t20780;
  double t20841;
  double t21135;
  double t20992;
  double t21018;
  double t21019;
  double t21136;
  double t21137;
  double t21141;
  double t21277;
  double t21291;
  double t21308;
  double t21332;
  double t21341;
  double t21350;
  double t21365;
  double t21372;
  double t21374;
  double t21381;
  double t21386;
  double t21388;
  double t20911;
  double t21041;
  double t21125;
  double t21465;
  double t21469;
  double t21516;
  double t21517;
  double t21518;
  double t21523;
  double t21525;
  double t21526;
  double t21552;
  double t21554;
  double t21560;
  double t21561;
  double t21581;
  double t21676;
  double t21680;
  double t21683;
  double t21474;
  double t21477;
  double t21490;
  double t21584;
  double t21592;
  double t21748;
  double t21749;
  double t21753;
  double t21754;
  double t21757;
  double t21764;
  double t21767;
  double t21672;
  double t21684;
  double t21731;
  double t21756;
  double t21769;
  double t21771;
  double t21774;
  double t21776;
  double t21777;
  double t7952;
  double t20744;
  double t20746;
  double t21732;
  double t21794;
  double t21857;
  double t21970;
  double t22654;
  double t22751;
  double t22836;
  double t22875;
  t4118 = Cos(var1[13]);
  t1227 = Cos(var1[14]);
  t2240 = Sin(var1[13]);
  t4124 = Sin(var1[14]);
  t19520 = t4118*t1227;
  t19580 = t2240*t4124;
  t19786 = t19520 + t19580;
  t18640 = Cos(var1[4]);
  t19517 = Cos(var1[5]);
  t19792 = Sin(var1[12]);
  t19516 = Cos(var1[12]);
  t20085 = Sin(var1[5]);
  t5251 = Sin(var1[4]);
  t20912 = t1227*t2240;
  t20913 = -1.*t4118*t4124;
  t20986 = t20912 + t20913;
  t3780 = -1.*t1227*t2240;
  t4146 = t4118*t4124;
  t5056 = t3780 + t4146;
  t19791 = t19516*t19517*t19786;
  t20734 = -1.*t19792*t19786*t20085;
  t20740 = t19791 + t20734;
  t21222 = Sin(var1[3]);
  t20753 = -1.*t19517*t19792;
  t20780 = -1.*t19516*t20085;
  t20841 = t20753 + t20780;
  t21135 = Cos(var1[3]);
  t20992 = t19516*t19517*t20986;
  t21018 = -1.*t19792*t20986*t20085;
  t21019 = t20992 + t21018;
  t21136 = t19517*t19792*t19786;
  t21137 = t19516*t19786*t20085;
  t21141 = t21136 + t21137;
  t21277 = t18640*t5056;
  t21291 = -1.*t5251*t20740;
  t21308 = t21277 + t21291;
  t21332 = t19516*t19517;
  t21341 = -1.*t19792*t20085;
  t21350 = t21332 + t21341;
  t21365 = t19517*t19792*t20986;
  t21372 = t19516*t20986*t20085;
  t21374 = t21365 + t21372;
  t21381 = t18640*t19786;
  t21386 = -1.*t5251*t21019;
  t21388 = t21381 + t21386;
  t20911 = t19786*t5251;
  t21041 = t18640*t21019;
  t21125 = t20911 + t21041;
  t21465 = -1.*t19516;
  t21469 = 1. + t21465;
  t21516 = -1.*t4118;
  t21517 = 1. + t21516;
  t21518 = 0.28121*t21517;
  t21523 = -1.*t1227;
  t21525 = 1. + t21523;
  t21526 = 0.50321*t21525;
  t21552 = 0.23321*t1227;
  t21554 = t21526 + t21552;
  t21560 = t4118*t21554;
  t21561 = -0.27*t2240*t4124;
  t21581 = t21518 + t21560 + t21561;
  t21676 = 0.15121*t21469;
  t21680 = t19516*t21581;
  t21683 = t21676 + t21680;
  t21474 = -0.15121*t21469;
  t21477 = -0.15121*t19516;
  t21490 = -0.15121*t19792;
  t21584 = t19792*t21581;
  t21592 = t21474 + t21477 + t21490 + t21584;
  t21748 = 0.28121*t2240;
  t21749 = -1.*t21554*t2240;
  t21753 = -0.27*t4118*t4124;
  t21754 = t21748 + t21749 + t21753;
  t21757 = t19517*t21683;
  t21764 = -1.*t21592*t20085;
  t21767 = t21757 + t21764;
  t21672 = t19517*t21592;
  t21684 = t21683*t20085;
  t21731 = t21672 + t21684;
  t21756 = t21754*t5251;
  t21769 = t18640*t21767;
  t21771 = t21756 + t21769;
  t21774 = t18640*t21754;
  t21776 = -1.*t5251*t21767;
  t21777 = t21774 + t21776;
  t7952 = t5056*t5251;
  t20744 = t18640*t20740;
  t20746 = t7952 + t20744;
  t21732 = -1.*t21350*t21731;
  t21794 = t21374*t21731;
  t21857 = -1.*t21374*t21731;
  t21970 = t21141*t21731;
  t22654 = t21350*t21731;
  t22751 = -1.*t21141*t21731;
  t22836 = -1.*t21754*t19786;
  t22875 = t21754*t5056;
  p_output1[0]=t20746;
  p_output1[1]=t18640*t20841;
  p_output1[2]=t21125;
  p_output1[3]=t21135*t21141 - 1.*t21222*t21308;
  p_output1[4]=t21135*t21350 + t20841*t21222*t5251;
  p_output1[5]=t21135*t21374 - 1.*t21222*t21388;
  p_output1[6]=t21141*t21222 + t21135*t21308;
  p_output1[7]=t21222*t21350 - 1.*t20841*t21135*t5251;
  p_output1[8]=t21222*t21374 + t21135*t21388;
  p_output1[9]=t18640*t20841*(t21125*t21771 + t21388*t21777 + t21794) + t21125*(t21732 - 1.*t18640*t20841*t21771 + t20841*t21777*t5251);
  p_output1[10]=t20746*(-1.*t21125*t21771 - 1.*t21388*t21777 + t21857) + t21125*(t20746*t21771 + t21308*t21777 + t21970);
  p_output1[11]=t18640*t20841*(-1.*t20746*t21771 - 1.*t21308*t21777 + t22751) + t20746*(t18640*t20841*t21771 + t22654 - 1.*t20841*t21777*t5251);
  p_output1[12]=t21374*(t21732 - 1.*t20841*t21767) + t21350*(t19786*t21754 + t21019*t21767 + t21794);
  p_output1[13]=t21141*(-1.*t21019*t21767 + t21857 + t22836) + t21374*(t20740*t21767 + t21970 + t22875);
  p_output1[14]=t21141*(t20841*t21767 + t22654) + t21350*(-1.*t20740*t21767 + t22751 - 1.*t21754*t5056);
  p_output1[15]=t19786*(-1.*t19516*t21592 + t19792*t21683);
  p_output1[16]=t19786*(t19786*t19792*t21592 + t19516*t19786*t21683 + t22875) + (-1.*t19792*t20986*t21592 - 1.*t19516*t20986*t21683 + t22836)*t5056;
  p_output1[17]=(t19516*t21592 - 1.*t19792*t21683)*t5056;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
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
  p_output1[36]=0;
  p_output1[37]=-0.15121 + t19786*(t19786*t21581 + t22875) + (-1.*t20986*t21581 + t22836)*t5056;
  p_output1[38]=-0.15121*t20986 - 0.15121*t5056;
  p_output1[39]=0.28121*t4124 - 0.27*t1227*t4124 - 1.*t21554*t4124;
  p_output1[40]=0;
  p_output1[41]=0.28121*t1227 - 1.*t1227*t21554 + 0.27*Power(t4124,2);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=-0.27;
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

#include "Jh_FrFoot_DiagonalStance.hh"

namespace SymFunction
{

void Jh_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
