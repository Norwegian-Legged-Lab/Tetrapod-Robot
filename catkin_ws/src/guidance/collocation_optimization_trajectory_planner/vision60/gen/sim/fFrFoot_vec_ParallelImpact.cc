/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:06:23 GMT+02:00
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
  double t7404;
  double t7366;
  double t7417;
  double t7990;
  double t7967;
  double t7981;
  double t7992;
  double t7247;
  double t7989;
  double t7995;
  double t8011;
  double t7420;
  double t8045;
  double t8047;
  double t8048;
  double t8013;
  double t8169;
  double t8173;
  double t8052;
  double t8078;
  double t8087;
  double t8128;
  double t8129;
  double t8135;
  double t8136;
  double t8138;
  double t8145;
  double t8174;
  double t8190;
  double t8204;
  double t8259;
  double t8262;
  double t8268;
  double t8281;
  double t8290;
  double t8295;
  double t8340;
  double t8345;
  double t8350;
  double t8353;
  double t8361;
  double t8378;
  double t8012;
  double t8099;
  double t8105;
  double t8469;
  double t8470;
  double t8489;
  double t8544;
  double t8585;
  double t8588;
  double t8590;
  double t8592;
  double t8598;
  double t7384;
  double t7854;
  double t7958;
  double t8468;
  double t8543;
  double t8599;
  double t8605;
  double t8656;
  double t8658;
  double t8661;
  double t8662;
  double t8665;
  double t8667;
  double t8453;
  double t8456;
  double t8463;
  double t8465;
  double t8606;
  double t8608;
  double t8674;
  double t8677;
  double t8682;
  double t8685;
  double t8688;
  double t8690;
  double t8655;
  double t8669;
  double t8671;
  double t8683;
  double t8695;
  double t8698;
  double t8701;
  double t8703;
  double t8707;
  double t8125;
  double t8148;
  double t8153;
  double t8673;
  double t8725;
  double t8743;
  double t8760;
  double t8831;
  double t8852;
  double t9012;
  double t9037;
  double t8907;
  double t8945;
  double t8986;
  double t8961;
  double t9180;
  double t9172;
  t7404 = Cos(var1[12]);
  t7366 = Sin(var1[4]);
  t7417 = Cos(var1[4]);
  t7990 = Cos(var1[13]);
  t7967 = Cos(var1[14]);
  t7981 = Sin(var1[13]);
  t7992 = Sin(var1[14]);
  t7247 = Sin(var1[12]);
  t7989 = t7967*t7981;
  t7995 = -1.*t7990*t7992;
  t8011 = t7989 + t7995;
  t7420 = Sin(var1[5]);
  t8045 = t7990*t7967;
  t8047 = t7981*t7992;
  t8048 = t8045 + t8047;
  t8013 = Cos(var1[5]);
  t8169 = Cos(var1[3]);
  t8173 = Sin(var1[3]);
  t8052 = t8013*t8048;
  t8078 = t7247*t8011*t7420;
  t8087 = t8052 + t8078;
  t8128 = -1.*t7967*t7981;
  t8129 = t7990*t7992;
  t8135 = t8128 + t8129;
  t8136 = t8013*t8135;
  t8138 = t7247*t8048*t7420;
  t8145 = t8136 + t8138;
  t8174 = t7417*t7247;
  t8190 = t7404*t7366*t7420;
  t8204 = t8174 + t8190;
  t8259 = -1.*t8013*t7247*t8011;
  t8262 = t8048*t7420;
  t8268 = t8259 + t8262;
  t8281 = t7404*t7417*t8011;
  t8290 = -1.*t7366*t8087;
  t8295 = t8281 + t8290;
  t8340 = -1.*t8013*t7247*t8048;
  t8345 = t8135*t7420;
  t8350 = t8340 + t8345;
  t8353 = t7404*t7417*t8048;
  t8361 = -1.*t7366*t8145;
  t8378 = t8353 + t8361;
  t8012 = t7404*t8011*t7366;
  t8099 = t7417*t8087;
  t8105 = t8012 + t8099;
  t8469 = -0.0641*t7967;
  t8470 = -0.28*t7992;
  t8489 = t8469 + t8470;
  t8544 = -1.*t7967;
  t8585 = 1. + t8544;
  t8588 = 0.075*t8585;
  t8590 = 0.355*t7967;
  t8592 = -0.0641*t7992;
  t8598 = t8588 + t8590 + t8592;
  t7384 = t7247*t7366;
  t7854 = -1.*t7404*t7417*t7420;
  t7958 = t7384 + t7854;
  t8468 = -0.325*t7981;
  t8543 = t7990*t8489;
  t8599 = t7981*t8598;
  t8605 = t8468 + t8543 + t8599;
  t8656 = -1.*t7990;
  t8658 = 1. + t8656;
  t8661 = 0.325*t8658;
  t8662 = -1.*t7981*t8489;
  t8665 = t7990*t8598;
  t8667 = t8661 + t8662 + t8665;
  t8453 = -1.*t7404;
  t8456 = 1. + t8453;
  t8463 = -0.1575*t8456;
  t8465 = -0.2255*t7404;
  t8606 = -1.*t7247*t8605;
  t8608 = t8463 + t8465 + t8606;
  t8674 = -0.068*t7247;
  t8677 = t7404*t8605;
  t8682 = t8674 + t8677;
  t8685 = t8013*t8667;
  t8688 = -1.*t8608*t7420;
  t8690 = t8685 + t8688;
  t8655 = t8013*t8608;
  t8669 = t8667*t7420;
  t8671 = t8655 + t8669;
  t8683 = t8682*t7366;
  t8695 = t7417*t8690;
  t8698 = t8683 + t8695;
  t8701 = t7417*t8682;
  t8703 = -1.*t7366*t8690;
  t8707 = t8701 + t8703;
  t8125 = t7404*t8048*t7366;
  t8148 = t7417*t8145;
  t8153 = t8125 + t8148;
  t8673 = t7404*t8013*t8671;
  t8725 = -1.*t8671*t8268;
  t8743 = t8671*t8268;
  t8760 = -1.*t8671*t8350;
  t8831 = -1.*t7404*t8013*t8671;
  t8852 = t8671*t8350;
  t9012 = -1.*t7247*t8682;
  t9037 = t7404*t8682*t8048;
  t8907 = t7247*t8682;
  t8945 = -1.*t7404*t8682*t8011;
  t8986 = -1.*t7404*t8682*t8048;
  t8961 = t7404*t8682*t8011;
  t9180 = t8667*t8048;
  t9172 = -1.*t8667*t8135;
  p_output1[0]=t8105*var2[0] + t7958*var2[1] + t8153*var2[2];
  p_output1[1]=(t8169*t8268 - 1.*t8173*t8295)*var2[0] + (t7404*t8013*t8169 - 1.*t8173*t8204)*var2[1] + (t8169*t8350 - 1.*t8173*t8378)*var2[2];
  p_output1[2]=(t8173*t8268 + t8169*t8295)*var2[0] + (t7404*t8013*t8173 + t8169*t8204)*var2[1] + (t8173*t8350 + t8169*t8378)*var2[2];
  p_output1[3]=(t8153*(-1.*t7958*t8698 - 1.*t8204*t8707 + t8831) + t7958*(t8153*t8698 + t8378*t8707 + t8852))*var2[0] + (t8153*(t8105*t8698 + t8295*t8707 + t8743) + t8105*(-1.*t8153*t8698 - 1.*t8378*t8707 + t8760))*var2[1] + (t8105*(t8673 + t7958*t8698 + t8204*t8707) + t7958*(-1.*t8105*t8698 - 1.*t8295*t8707 + t8725))*var2[2];
  p_output1[4]=(t8350*(t7404*t7420*t8690 + t8831 + t9012) + t7404*t8013*(t8145*t8690 + t8852 + t9037))*var2[0] + (t8350*(t8087*t8690 + t8743 + t8961) + t8268*(-1.*t8145*t8690 + t8760 + t8986))*var2[1] + (t8268*(t8673 - 1.*t7404*t7420*t8690 + t8907) + t7404*t8013*(-1.*t8087*t8690 + t8725 + t8945))*var2[2];
  p_output1[5]=(t7404*t8048*(-1.*t7404*t8608 + t9012) + t7247*(-1.*t7247*t8048*t8608 + t8135*t8667 + t9037))*var2[0] + (t7404*t8011*(t7247*t8048*t8608 + t8986 + t9172) + t7404*t8048*(-1.*t7247*t8011*t8608 + t8961 + t9180))*var2[1] + (t7404*t8011*(t7404*t8608 + t8907) + t7247*(t7247*t8011*t8608 - 1.*t8048*t8667 + t8945))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(0.1575*t8011 + 0.2255*t8135)*var2[0] + (t8048*(-1.*t8048*t8605 + t9172) + t8135*(t8011*t8605 + t9180))*var2[1] - 0.068*t8048*var2[2];
  p_output1[13]=(0.325*t7992 - 1.*t7967*t8489 - 1.*t7992*t8598)*var2[0] + (-0.325*t7967 - 1.*t7992*t8489 + t7967*t8598)*var2[2];
  p_output1[14]=-0.0641*var2[0] - 0.28*var2[2];
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fFrFoot_vec_ParallelImpact.hh"

namespace SymFunction
{

void fFrFoot_vec_ParallelImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
