/*
 * Automatically Generated from Mathematica.
 * Sun 22 May 2022 16:55:44 GMT+02:00
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
  double t6922;
  double t12420;
  double t6926;
  double t16200;
  double t16444;
  double t16196;
  double t16445;
  double t6931;
  double t13842;
  double t16481;
  double t16484;
  double t16485;
  double t16053;
  double t16409;
  double t16446;
  double t16471;
  double t11755;
  double t16032;
  double t16044;
  double t16568;
  double t16563;
  double t16487;
  double t16488;
  double t16489;
  double t16519;
  double t16529;
  double t16534;
  double t16546;
  double t16547;
  double t16548;
  double t16569;
  double t16570;
  double t16584;
  double t16595;
  double t16603;
  double t16604;
  double t16610;
  double t16611;
  double t16612;
  double t16620;
  double t16621;
  double t16624;
  double t16629;
  double t16630;
  double t16631;
  double t16480;
  double t16499;
  double t16503;
  double t16659;
  double t16660;
  double t16661;
  double t16662;
  double t16664;
  double t16665;
  double t16666;
  double t16667;
  double t16669;
  double t16670;
  double t16671;
  double t16672;
  double t16673;
  double t16674;
  double t16675;
  double t16677;
  double t16679;
  double t16681;
  double t16682;
  double t16683;
  double t16687;
  double t16688;
  double t16689;
  double t16690;
  double t16692;
  double t16693;
  double t16694;
  double t16678;
  double t16684;
  double t16685;
  double t16691;
  double t16695;
  double t16696;
  double t16698;
  double t16699;
  double t16700;
  double t16542;
  double t16554;
  double t16555;
  double t16686;
  double t16705;
  double t16713;
  double t16718;
  double t16744;
  double t16752;
  double t16801;
  double t16808;
  t6922 = Cos(var1[4]);
  t12420 = Cos(var1[5]);
  t6926 = Cos(var1[6]);
  t16200 = Cos(var1[8]);
  t16444 = Sin(var1[7]);
  t16196 = Cos(var1[7]);
  t16445 = Sin(var1[8]);
  t6931 = Sin(var1[5]);
  t13842 = Sin(var1[6]);
  t16481 = t16200*t16444;
  t16484 = -1.*t16196*t16445;
  t16485 = t16481 + t16484;
  t16053 = Sin(var1[4]);
  t16409 = t16196*t16200;
  t16446 = t16444*t16445;
  t16471 = t16409 + t16446;
  t11755 = -1.*t6926*t6931;
  t16032 = -1.*t12420*t13842;
  t16044 = t11755 + t16032;
  t16568 = Cos(var1[3]);
  t16563 = Sin(var1[3]);
  t16487 = t12420*t6926*t16485;
  t16488 = -1.*t6931*t13842*t16485;
  t16489 = t16487 + t16488;
  t16519 = -1.*t16200*t16444;
  t16529 = t16196*t16445;
  t16534 = t16519 + t16529;
  t16546 = t12420*t6926*t16471;
  t16547 = -1.*t6931*t13842*t16471;
  t16548 = t16546 + t16547;
  t16569 = t12420*t6926;
  t16570 = -1.*t6931*t13842;
  t16584 = t16569 + t16570;
  t16595 = t6926*t6931*t16485;
  t16603 = t12420*t13842*t16485;
  t16604 = t16595 + t16603;
  t16610 = t6922*t16471;
  t16611 = -1.*t16053*t16489;
  t16612 = t16610 + t16611;
  t16620 = t6926*t6931*t16471;
  t16621 = t12420*t13842*t16471;
  t16624 = t16620 + t16621;
  t16629 = t6922*t16534;
  t16630 = -1.*t16053*t16548;
  t16631 = t16629 + t16630;
  t16480 = t16053*t16471;
  t16499 = t6922*t16489;
  t16503 = t16480 + t16499;
  t16659 = -1.*t6926;
  t16660 = 1. + t16659;
  t16661 = 0.15121*t16660;
  t16662 = -1.*t16196;
  t16664 = 1. + t16662;
  t16665 = 0.28121*t16664;
  t16666 = -1.*t16200;
  t16667 = 1. + t16666;
  t16669 = 0.50321*t16667;
  t16670 = 0.23321*t16200;
  t16671 = t16669 + t16670;
  t16672 = t16196*t16671;
  t16673 = -0.27*t16444*t16445;
  t16674 = t16665 + t16672 + t16673;
  t16675 = t6926*t16674;
  t16677 = t16661 + t16675;
  t16679 = 0.15121*t6926;
  t16681 = -0.15121*t13842;
  t16682 = t13842*t16674;
  t16683 = t16661 + t16679 + t16681 + t16682;
  t16687 = 0.28121*t16444;
  t16688 = -1.*t16671*t16444;
  t16689 = -0.27*t16196*t16445;
  t16690 = t16687 + t16688 + t16689;
  t16692 = t12420*t16677;
  t16693 = -1.*t6931*t16683;
  t16694 = t16692 + t16693;
  t16678 = t6931*t16677;
  t16684 = t12420*t16683;
  t16685 = t16678 + t16684;
  t16691 = t16053*t16690;
  t16695 = t6922*t16694;
  t16696 = t16691 + t16695;
  t16698 = t6922*t16690;
  t16699 = -1.*t16053*t16694;
  t16700 = t16698 + t16699;
  t16542 = t16053*t16534;
  t16554 = t6922*t16548;
  t16555 = t16542 + t16554;
  t16686 = -1.*t16584*t16685;
  t16705 = t16604*t16685;
  t16713 = t16584*t16685;
  t16718 = -1.*t16624*t16685;
  t16744 = -1.*t16604*t16685;
  t16752 = t16624*t16685;
  t16801 = -1.*t16690*t16471;
  t16808 = t16690*t16534;
  p_output1[0]=t16555*var2[0] + t16044*t6922*var2[1] + t16503*var2[2];
  p_output1[1]=(t16568*t16624 - 1.*t16563*t16631)*var2[0] + (t16044*t16053*t16563 + t16568*t16584)*var2[1] + (t16568*t16604 - 1.*t16563*t16612)*var2[2];
  p_output1[2]=(t16563*t16624 + t16568*t16631)*var2[0] + (-1.*t16044*t16053*t16568 + t16563*t16584)*var2[1] + (t16563*t16604 + t16568*t16612)*var2[2];
  p_output1[3]=(t16044*(t16503*t16696 + t16612*t16700 + t16705)*t6922 + t16503*(t16686 + t16044*t16053*t16700 - 1.*t16044*t16696*t6922))*var2[0] + (t16555*(-1.*t16503*t16696 - 1.*t16612*t16700 + t16744) + t16503*(t16555*t16696 + t16631*t16700 + t16752))*var2[1] + (t16044*(-1.*t16555*t16696 - 1.*t16631*t16700 + t16718)*t6922 + t16555*(-1.*t16044*t16053*t16700 + t16713 + t16044*t16696*t6922))*var2[2];
  p_output1[4]=(t16604*(t16686 - 1.*t16044*t16694) + t16584*(t16471*t16690 + t16489*t16694 + t16705))*var2[0] + (t16624*(-1.*t16489*t16694 + t16744 + t16801) + t16604*(t16548*t16694 + t16752 + t16808))*var2[1] + (t16624*(t16044*t16694 + t16713) + t16584*(-1.*t16534*t16690 - 1.*t16548*t16694 + t16718))*var2[2];
  p_output1[5]=t16471*(t13842*t16677 - 1.*t16683*t6926)*var2[0] + (t16471*(t13842*t16471*t16683 + t16808 + t16471*t16677*t6926) + t16534*(-1.*t13842*t16485*t16683 + t16801 - 1.*t16485*t16677*t6926))*var2[1] + t16534*(-1.*t13842*t16677 + t16683*t6926)*var2[2];
  p_output1[6]=(-0.15121 + t16534*(-1.*t16485*t16674 + t16801) + t16471*(t16471*t16674 + t16808))*var2[1] + (0.15121*t16485 + 0.15121*t16534)*var2[2];
  p_output1[7]=(0.28121*t16445 - 0.27*t16200*t16445 - 1.*t16445*t16671)*var2[0] + (0.28121*t16200 + 0.27*Power(t16445,2) - 1.*t16200*t16671)*var2[2];
  p_output1[8]=-0.27*var2[2];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
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

#include "fFlFoot_vec_ParallelStance2.hh"

namespace SymFunction
{

void fFlFoot_vec_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
