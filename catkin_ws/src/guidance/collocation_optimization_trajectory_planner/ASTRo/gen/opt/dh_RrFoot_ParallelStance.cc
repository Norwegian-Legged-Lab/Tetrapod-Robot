/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 14:37:18 GMT+02:00
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
  double t17124;
  double t13600;
  double t18452;
  double t18506;
  double t18545;
  double t19673;
  double t19681;
  double t19697;
  double t17153;
  double t17154;
  double t17161;
  double t17176;
  double t17268;
  double t19701;
  double t19702;
  double t19704;
  double t19693;
  double t19734;
  double t19772;
  double t19773;
  double t19809;
  double t19811;
  double t20069;
  double t18502;
  double t18509;
  double t18528;
  double t20212;
  double t20214;
  double t20211;
  double t20193;
  double t20199;
  double t20204;
  double t20209;
  double t20213;
  double t20215;
  double t20216;
  double t20371;
  double t20223;
  double t20232;
  double t20352;
  double t20221;
  double t20373;
  double t20374;
  double t20375;
  double t20146;
  double t20149;
  double t20174;
  double t20181;
  double t20109;
  double t20112;
  double t20602;
  double t20605;
  double t20612;
  double t20594;
  double t20598;
  double t20601;
  double t20613;
  double t20622;
  double t20624;
  double t20631;
  double t20632;
  double t20633;
  double t20704;
  double t20706;
  double t20707;
  double t20627;
  double t20628;
  double t20629;
  double t20630;
  double t20641;
  double t20648;
  double t20692;
  double t20698;
  double t20703;
  double t20723;
  double t20724;
  double t20727;
  double t20728;
  double t20729;
  double t20730;
  double t20732;
  double t20733;
  double t20734;
  double t20805;
  double t20794;
  double t20210;
  double t20217;
  double t20219;
  double t20940;
  double t20746;
  double t20750;
  double t20751;
  double t20948;
  double t21035;
  double t21040;
  t17124 = Cos(var1[17]);
  t13600 = Sin(var1[17]);
  t18452 = Cos(var1[16]);
  t18506 = Sin(var1[16]);
  t18545 = t18452*t17124;
  t19673 = t18506*t13600;
  t19681 = t18545 + t19673;
  t19697 = Cos(var1[15]);
  t17153 = -1.*t17124;
  t17154 = 1. + t17153;
  t17161 = -0.50321*t17154;
  t17176 = -0.19821*t17124;
  t17268 = t17161 + t17176;
  t19701 = -1.*t19697;
  t19702 = 1. + t19701;
  t19704 = -0.15121*t19702;
  t19693 = Sin(var1[15]);
  t19734 = -1.*t18452;
  t19772 = 1. + t19734;
  t19773 = -0.28121*t19772;
  t19809 = t18452*t17268;
  t19811 = 0.305*t18506*t13600;
  t20069 = t19773 + t19809 + t19811;
  t18502 = -1.*t18452*t17124;
  t18509 = -1.*t18506*t13600;
  t18528 = t18502 + t18509;
  t20212 = Cos(var1[5]);
  t20214 = Sin(var1[5]);
  t20211 = Cos(var1[4]);
  t20193 = -1.*t17124*t18506;
  t20199 = t18452*t13600;
  t20204 = t20193 + t20199;
  t20209 = Sin(var1[4]);
  t20213 = t19697*t20212*t18528;
  t20215 = -1.*t19693*t18528*t20214;
  t20216 = t20213 + t20215;
  t20371 = Cos(var1[3]);
  t20223 = t20212*t19693*t18528;
  t20232 = t19697*t18528*t20214;
  t20352 = t20223 + t20232;
  t20221 = Sin(var1[3]);
  t20373 = t20211*t20204;
  t20374 = -1.*t20209*t20216;
  t20375 = t20373 + t20374;
  t20146 = -0.15121*t19697;
  t20149 = 0.15121*t19693;
  t20174 = t19693*t20069;
  t20181 = t19704 + t20146 + t20149 + t20174;
  t20109 = t19697*t20069;
  t20112 = t19704 + t20109;
  t20602 = -1.*t19697*t20212;
  t20605 = t19693*t20214;
  t20612 = t20602 + t20605;
  t20594 = t20212*t19693*t20204;
  t20598 = t19697*t20204*t20214;
  t20601 = t20594 + t20598;
  t20613 = t20212*t20181;
  t20622 = t20112*t20214;
  t20624 = t20613 + t20622;
  t20631 = t20212*t20112;
  t20632 = -1.*t20181*t20214;
  t20633 = t20631 + t20632;
  t20704 = t19697*t20212*t20204;
  t20706 = -1.*t19693*t20204*t20214;
  t20707 = t20704 + t20706;
  t20627 = -1.*t20612*t20624;
  t20628 = t20212*t19693;
  t20629 = t19697*t20214;
  t20630 = t20628 + t20629;
  t20641 = 0.28121*t18506;
  t20648 = t17268*t18506;
  t20692 = -0.305*t18452*t13600;
  t20698 = t20641 + t20648 + t20692;
  t20703 = t20601*t20624;
  t20723 = t19681*t20209;
  t20724 = t20211*t20707;
  t20727 = t20723 + t20724;
  t20728 = t20698*t20209;
  t20729 = t20211*t20633;
  t20730 = t20728 + t20729;
  t20732 = t20211*t20698;
  t20733 = -1.*t20209*t20633;
  t20734 = t20732 + t20733;
  t20805 = -1.*t20698*t19681;
  t20794 = t20698*t20204;
  t20210 = t20204*t20209;
  t20217 = t20211*t20216;
  t20219 = t20210 + t20217;
  t20940 = -1.*t20601*t20624;
  t20746 = t20211*t19681;
  t20750 = -1.*t20209*t20707;
  t20751 = t20746 + t20750;
  t20948 = t20352*t20624;
  t21035 = t20612*t20624;
  t21040 = -1.*t20352*t20624;
  p_output1[0]=t20219*var2[0] + (t20352*t20371 - 1.*t20221*t20375)*var2[1] + (t20221*t20352 + t20371*t20375)*var2[2] + (t20727*(t20627 - 1.*t20211*t20630*t20730 + t20209*t20630*t20734) + t20211*t20630*(t20703 + t20727*t20730 + t20734*t20751))*var2[3] + (t20601*(t20627 - 1.*t20630*t20633) + t20612*(t19681*t20698 + t20703 + t20633*t20707))*var2[4] + t19681*(-1.*t19693*t20112 + t19697*t20181)*var2[5] + (-0.15121*t18528 - 0.15121*t19681)*var2[15] + (0.28121*t13600 - 0.305*t13600*t17124 + t13600*t17268)*var2[16];
  p_output1[1]=t20211*t20630*var2[0] + (t20371*t20612 + t20209*t20221*t20630)*var2[1] + (t20221*t20612 - 1.*t20209*t20371*t20630)*var2[2] + (t20219*(-1.*t20727*t20730 - 1.*t20734*t20751 + t20940) + t20727*(t20219*t20730 + t20375*t20734 + t20948))*var2[3] + (t20352*(-1.*t20633*t20707 + t20805 + t20940) + t20601*(t20216*t20633 + t20794 + t20948))*var2[4] + (t19681*(t18528*t19697*t20112 + t18528*t19693*t20181 + t20794) + t20204*(-1.*t19697*t20112*t20204 - 1.*t19693*t20181*t20204 + t20805))*var2[5] + (-0.15121 + t19681*(t18528*t20069 + t20794) + t20204*(-1.*t20069*t20204 + t20805))*var2[15];
  p_output1[2]=t20727*var2[0] + (t20371*t20601 - 1.*t20221*t20751)*var2[1] + (t20221*t20601 + t20371*t20751)*var2[2] + (t20219*(t20211*t20630*t20730 - 1.*t20209*t20630*t20734 + t21035) + t20211*t20630*(-1.*t20219*t20730 - 1.*t20375*t20734 + t21040))*var2[3] + (t20352*(t20630*t20633 + t21035) + t20612*(-1.*t20216*t20633 - 1.*t20204*t20698 + t21040))*var2[4] + (t19693*t20112 - 1.*t19697*t20181)*t20204*var2[5] + (0.305*Power(t13600,2) + 0.28121*t17124 + t17124*t17268)*var2[16] - 0.305*var2[17];
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

#include "dh_RrFoot_ParallelStance.hh"

namespace ParallelStance
{

void dh_RrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
