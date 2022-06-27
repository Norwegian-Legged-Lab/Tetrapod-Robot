/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:20:56 GMT+02:00
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
  double t3115;
  double t12042;
  double t3704;
  double t18364;
  double t18371;
  double t18363;
  double t18375;
  double t10165;
  double t14332;
  double t18616;
  double t18628;
  double t18634;
  double t18325;
  double t18370;
  double t18563;
  double t18600;
  double t11701;
  double t15083;
  double t16336;
  double t18718;
  double t18714;
  double t18636;
  double t18637;
  double t18638;
  double t18681;
  double t18691;
  double t18692;
  double t18701;
  double t18702;
  double t18703;
  double t18719;
  double t18721;
  double t18734;
  double t18750;
  double t18751;
  double t18756;
  double t18760;
  double t18763;
  double t18764;
  double t18772;
  double t18773;
  double t18775;
  double t18783;
  double t18785;
  double t18786;
  double t18608;
  double t18658;
  double t18668;
  double t18813;
  double t18814;
  double t18815;
  double t18816;
  double t18817;
  double t18818;
  double t18819;
  double t18821;
  double t18822;
  double t18823;
  double t18824;
  double t18826;
  double t18827;
  double t18828;
  double t18829;
  double t18831;
  double t18833;
  double t18835;
  double t18836;
  double t18837;
  double t18841;
  double t18842;
  double t18843;
  double t18844;
  double t18846;
  double t18847;
  double t18848;
  double t18832;
  double t18838;
  double t18839;
  double t18845;
  double t18849;
  double t18850;
  double t18852;
  double t18853;
  double t18854;
  double t18700;
  double t18707;
  double t18708;
  double t18840;
  double t18860;
  double t18868;
  double t18873;
  double t18900;
  double t18910;
  double t18959;
  double t18965;
  t3115 = Cos(var1[4]);
  t12042 = Cos(var1[5]);
  t3704 = Cos(var1[6]);
  t18364 = Cos(var1[8]);
  t18371 = Sin(var1[7]);
  t18363 = Cos(var1[7]);
  t18375 = Sin(var1[8]);
  t10165 = Sin(var1[5]);
  t14332 = Sin(var1[6]);
  t18616 = t18364*t18371;
  t18628 = -1.*t18363*t18375;
  t18634 = t18616 + t18628;
  t18325 = Sin(var1[4]);
  t18370 = t18363*t18364;
  t18563 = t18371*t18375;
  t18600 = t18370 + t18563;
  t11701 = -1.*t3704*t10165;
  t15083 = -1.*t12042*t14332;
  t16336 = t11701 + t15083;
  t18718 = Cos(var1[3]);
  t18714 = Sin(var1[3]);
  t18636 = t12042*t3704*t18634;
  t18637 = -1.*t10165*t14332*t18634;
  t18638 = t18636 + t18637;
  t18681 = -1.*t18364*t18371;
  t18691 = t18363*t18375;
  t18692 = t18681 + t18691;
  t18701 = t12042*t3704*t18600;
  t18702 = -1.*t10165*t14332*t18600;
  t18703 = t18701 + t18702;
  t18719 = t12042*t3704;
  t18721 = -1.*t10165*t14332;
  t18734 = t18719 + t18721;
  t18750 = t3704*t10165*t18634;
  t18751 = t12042*t14332*t18634;
  t18756 = t18750 + t18751;
  t18760 = t3115*t18600;
  t18763 = -1.*t18325*t18638;
  t18764 = t18760 + t18763;
  t18772 = t3704*t10165*t18600;
  t18773 = t12042*t14332*t18600;
  t18775 = t18772 + t18773;
  t18783 = t3115*t18692;
  t18785 = -1.*t18325*t18703;
  t18786 = t18783 + t18785;
  t18608 = t18325*t18600;
  t18658 = t3115*t18638;
  t18668 = t18608 + t18658;
  t18813 = -1.*t3704;
  t18814 = 1. + t18813;
  t18815 = 0.15121*t18814;
  t18816 = -1.*t18363;
  t18817 = 1. + t18816;
  t18818 = 0.28121*t18817;
  t18819 = -1.*t18364;
  t18821 = 1. + t18819;
  t18822 = 0.50321*t18821;
  t18823 = 0.19821*t18364;
  t18824 = t18822 + t18823;
  t18826 = t18363*t18824;
  t18827 = -0.305*t18371*t18375;
  t18828 = t18818 + t18826 + t18827;
  t18829 = t3704*t18828;
  t18831 = t18815 + t18829;
  t18833 = 0.15121*t3704;
  t18835 = -0.15121*t14332;
  t18836 = t14332*t18828;
  t18837 = t18815 + t18833 + t18835 + t18836;
  t18841 = 0.28121*t18371;
  t18842 = -1.*t18824*t18371;
  t18843 = -0.305*t18363*t18375;
  t18844 = t18841 + t18842 + t18843;
  t18846 = t12042*t18831;
  t18847 = -1.*t10165*t18837;
  t18848 = t18846 + t18847;
  t18832 = t10165*t18831;
  t18838 = t12042*t18837;
  t18839 = t18832 + t18838;
  t18845 = t18325*t18844;
  t18849 = t3115*t18848;
  t18850 = t18845 + t18849;
  t18852 = t3115*t18844;
  t18853 = -1.*t18325*t18848;
  t18854 = t18852 + t18853;
  t18700 = t18325*t18692;
  t18707 = t3115*t18703;
  t18708 = t18700 + t18707;
  t18840 = -1.*t18734*t18839;
  t18860 = t18756*t18839;
  t18868 = t18734*t18839;
  t18873 = -1.*t18775*t18839;
  t18900 = -1.*t18756*t18839;
  t18910 = t18775*t18839;
  t18959 = -1.*t18844*t18600;
  t18965 = t18844*t18692;
  p_output1[0]=t18708*var2[0] + t16336*t3115*var2[1] + t18668*var2[2];
  p_output1[1]=(t18718*t18775 - 1.*t18714*t18786)*var2[0] + (t16336*t18325*t18714 + t18718*t18734)*var2[1] + (t18718*t18756 - 1.*t18714*t18764)*var2[2];
  p_output1[2]=(t18714*t18775 + t18718*t18786)*var2[0] + (-1.*t16336*t18325*t18718 + t18714*t18734)*var2[1] + (t18714*t18756 + t18718*t18764)*var2[2];
  p_output1[3]=(t16336*(t18668*t18850 + t18764*t18854 + t18860)*t3115 + t18668*(t18840 + t16336*t18325*t18854 - 1.*t16336*t18850*t3115))*var2[0] + (t18708*(-1.*t18668*t18850 - 1.*t18764*t18854 + t18900) + t18668*(t18708*t18850 + t18786*t18854 + t18910))*var2[1] + (t16336*(-1.*t18708*t18850 - 1.*t18786*t18854 + t18873)*t3115 + t18708*(-1.*t16336*t18325*t18854 + t18868 + t16336*t18850*t3115))*var2[2];
  p_output1[4]=(t18756*(t18840 - 1.*t16336*t18848) + t18734*(t18600*t18844 + t18638*t18848 + t18860))*var2[0] + (t18775*(-1.*t18638*t18848 + t18900 + t18959) + t18756*(t18703*t18848 + t18910 + t18965))*var2[1] + (t18775*(t16336*t18848 + t18868) + t18734*(-1.*t18692*t18844 - 1.*t18703*t18848 + t18873))*var2[2];
  p_output1[5]=t18600*(t14332*t18831 - 1.*t18837*t3704)*var2[0] + (t18600*(t14332*t18600*t18837 + t18965 + t18600*t18831*t3704) + t18692*(-1.*t14332*t18634*t18837 + t18959 - 1.*t18634*t18831*t3704))*var2[1] + t18692*(-1.*t14332*t18831 + t18837*t3704)*var2[2];
  p_output1[6]=(-0.15121 + t18692*(-1.*t18634*t18828 + t18959) + t18600*(t18600*t18828 + t18965))*var2[1] + (0.15121*t18634 + 0.15121*t18692)*var2[2];
  p_output1[7]=(0.28121*t18375 - 0.305*t18364*t18375 - 1.*t18375*t18824)*var2[0] + (0.28121*t18364 + 0.305*Power(t18375,2) - 1.*t18364*t18824)*var2[2];
  p_output1[8]=-0.305*var2[2];
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

#include "fFlFoot_vec_DiagonalStance2.hh"

namespace SymFunction
{

void fFlFoot_vec_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
