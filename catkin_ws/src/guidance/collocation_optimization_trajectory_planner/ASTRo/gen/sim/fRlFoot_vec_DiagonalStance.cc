/*
 * Automatically Generated from Mathematica.
 * Sun 22 May 2022 17:22:50 GMT+02:00
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
  double t6262;
  double t6752;
  double t6714;
  double t12614;
  double t13036;
  double t11815;
  double t13217;
  double t6730;
  double t13477;
  double t13485;
  double t13494;
  double t6765;
  double t13466;
  double t13558;
  double t13559;
  double t13560;
  double t6751;
  double t6774;
  double t6792;
  double t13581;
  double t13576;
  double t12731;
  double t13221;
  double t13253;
  double t13505;
  double t13516;
  double t13539;
  double t13562;
  double t13563;
  double t13564;
  double t13645;
  double t13652;
  double t13653;
  double t13659;
  double t13661;
  double t13664;
  double t13677;
  double t13678;
  double t13679;
  double t13704;
  double t13708;
  double t13709;
  double t13715;
  double t13720;
  double t13721;
  double t13471;
  double t13547;
  double t13548;
  double t13779;
  double t13780;
  double t13797;
  double t13798;
  double t13799;
  double t13800;
  double t13801;
  double t13802;
  double t13803;
  double t13804;
  double t13805;
  double t13806;
  double t13807;
  double t13811;
  double t13812;
  double t13813;
  double t13781;
  double t13785;
  double t13796;
  double t13808;
  double t13809;
  double t13817;
  double t13818;
  double t13819;
  double t13820;
  double t13822;
  double t13823;
  double t13824;
  double t13810;
  double t13814;
  double t13815;
  double t13821;
  double t13825;
  double t13827;
  double t13829;
  double t13830;
  double t13831;
  double t13550;
  double t13565;
  double t13566;
  double t13816;
  double t13840;
  double t13921;
  double t14095;
  double t14155;
  double t14198;
  double t14321;
  double t14352;
  t6262 = Cos(var1[4]);
  t6752 = Cos(var1[9]);
  t6714 = Cos(var1[5]);
  t12614 = Cos(var1[11]);
  t13036 = Sin(var1[10]);
  t11815 = Cos(var1[10]);
  t13217 = Sin(var1[11]);
  t6730 = Sin(var1[9]);
  t13477 = -1.*t12614*t13036;
  t13485 = t11815*t13217;
  t13494 = t13477 + t13485;
  t6765 = Sin(var1[5]);
  t13466 = Sin(var1[4]);
  t13558 = -1.*t11815*t12614;
  t13559 = -1.*t13036*t13217;
  t13560 = t13558 + t13559;
  t6751 = t6714*t6730;
  t6774 = t6752*t6765;
  t6792 = t6751 + t6774;
  t13581 = Cos(var1[3]);
  t13576 = Sin(var1[3]);
  t12731 = t11815*t12614;
  t13221 = t13036*t13217;
  t13253 = t12731 + t13221;
  t13505 = t6752*t6714*t13494;
  t13516 = -1.*t6730*t13494*t6765;
  t13539 = t13505 + t13516;
  t13562 = t6752*t6714*t13560;
  t13563 = -1.*t6730*t13560*t6765;
  t13564 = t13562 + t13563;
  t13645 = -1.*t6752*t6714;
  t13652 = t6730*t6765;
  t13653 = t13645 + t13652;
  t13659 = t6714*t6730*t13494;
  t13661 = t6752*t13494*t6765;
  t13664 = t13659 + t13661;
  t13677 = t6262*t13253;
  t13678 = -1.*t13466*t13539;
  t13679 = t13677 + t13678;
  t13704 = t6714*t6730*t13560;
  t13708 = t6752*t13560*t6765;
  t13709 = t13704 + t13708;
  t13715 = t6262*t13494;
  t13720 = -1.*t13466*t13564;
  t13721 = t13715 + t13720;
  t13471 = t13253*t13466;
  t13547 = t6262*t13539;
  t13548 = t13471 + t13547;
  t13779 = -1.*t6752;
  t13780 = 1. + t13779;
  t13797 = -1.*t11815;
  t13798 = 1. + t13797;
  t13799 = -0.28121*t13798;
  t13800 = -1.*t12614;
  t13801 = 1. + t13800;
  t13802 = -0.50321*t13801;
  t13803 = -0.23321*t12614;
  t13804 = t13802 + t13803;
  t13805 = t11815*t13804;
  t13806 = 0.27*t13036*t13217;
  t13807 = t13799 + t13805 + t13806;
  t13811 = -0.15121*t13780;
  t13812 = t6752*t13807;
  t13813 = t13811 + t13812;
  t13781 = 0.15121*t13780;
  t13785 = 0.15121*t6752;
  t13796 = 0.15121*t6730;
  t13808 = t6730*t13807;
  t13809 = t13781 + t13785 + t13796 + t13808;
  t13817 = 0.28121*t13036;
  t13818 = t13804*t13036;
  t13819 = -0.27*t11815*t13217;
  t13820 = t13817 + t13818 + t13819;
  t13822 = t6714*t13813;
  t13823 = -1.*t13809*t6765;
  t13824 = t13822 + t13823;
  t13810 = t6714*t13809;
  t13814 = t13813*t6765;
  t13815 = t13810 + t13814;
  t13821 = t13820*t13466;
  t13825 = t6262*t13824;
  t13827 = t13821 + t13825;
  t13829 = t6262*t13820;
  t13830 = -1.*t13466*t13824;
  t13831 = t13829 + t13830;
  t13550 = t13494*t13466;
  t13565 = t6262*t13564;
  t13566 = t13550 + t13565;
  t13816 = -1.*t13653*t13815;
  t13840 = t13664*t13815;
  t13921 = t13653*t13815;
  t14095 = -1.*t13709*t13815;
  t14155 = -1.*t13664*t13815;
  t14198 = t13709*t13815;
  t14321 = -1.*t13820*t13253;
  t14352 = t13820*t13494;
  p_output1[0]=t13566*var2[0] + t6262*t6792*var2[1] + t13548*var2[2];
  p_output1[1]=(t13581*t13709 - 1.*t13576*t13721)*var2[0] + (t13581*t13653 + t13466*t13576*t6792)*var2[1] + (t13581*t13664 - 1.*t13576*t13679)*var2[2];
  p_output1[2]=(t13576*t13709 + t13581*t13721)*var2[0] + (t13576*t13653 - 1.*t13466*t13581*t6792)*var2[1] + (t13576*t13664 + t13581*t13679)*var2[2];
  p_output1[3]=((t13548*t13827 + t13679*t13831 + t13840)*t6262*t6792 + t13548*(t13816 + t13466*t13831*t6792 - 1.*t13827*t6262*t6792))*var2[0] + (t13566*(-1.*t13548*t13827 - 1.*t13679*t13831 + t14155) + t13548*(t13566*t13827 + t13721*t13831 + t14198))*var2[1] + ((-1.*t13566*t13827 - 1.*t13721*t13831 + t14095)*t6262*t6792 + t13566*(t13921 - 1.*t13466*t13831*t6792 + t13827*t6262*t6792))*var2[2];
  p_output1[4]=(t13653*(t13253*t13820 + t13539*t13824 + t13840) + t13664*(t13816 - 1.*t13824*t6792))*var2[0] + (t13709*(-1.*t13539*t13824 + t14155 + t14321) + t13664*(t13564*t13824 + t14198 + t14352))*var2[1] + (t13653*(-1.*t13494*t13820 - 1.*t13564*t13824 + t14095) + t13709*(t13921 + t13824*t6792))*var2[2];
  p_output1[5]=t13253*(-1.*t13813*t6730 + t13809*t6752)*var2[0] + (t13494*(t14321 - 1.*t13494*t13809*t6730 - 1.*t13494*t13813*t6752) + t13253*(t14352 + t13560*t13809*t6730 + t13560*t13813*t6752))*var2[1] + t13494*(t13813*t6730 - 1.*t13809*t6752)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(0.15121*t13253 + 0.15121*t13560)*var2[0] + (-0.15121 + t13494*(-1.*t13494*t13807 + t14321) + t13253*(t13560*t13807 + t14352))*var2[1];
  p_output1[10]=(0.28121*t13217 - 0.27*t12614*t13217 + t13217*t13804)*var2[0] + (0.28121*t12614 + 0.27*Power(t13217,2) + t12614*t13804)*var2[2];
  p_output1[11]=-0.27*var2[2];
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

#include "fRlFoot_vec_DiagonalStance.hh"

namespace SymFunction
{

void fRlFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
