/*
 * Automatically Generated from Mathematica.
 * Sun 22 May 2022 16:55:55 GMT+02:00
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
  double t6039;
  double t12901;
  double t6932;
  double t13060;
  double t13882;
  double t13048;
  double t14169;
  double t11720;
  double t17563;
  double t17565;
  double t17570;
  double t12902;
  double t17548;
  double t17592;
  double t17593;
  double t17595;
  double t12881;
  double t12992;
  double t13020;
  double t17606;
  double t17604;
  double t13064;
  double t14447;
  double t14494;
  double t17571;
  double t17572;
  double t17576;
  double t17596;
  double t17597;
  double t17599;
  double t17607;
  double t17608;
  double t17609;
  double t17652;
  double t17653;
  double t17655;
  double t17657;
  double t17658;
  double t17659;
  double t17664;
  double t17665;
  double t17667;
  double t17669;
  double t17670;
  double t17671;
  double t17562;
  double t17580;
  double t17581;
  double t17691;
  double t17692;
  double t17696;
  double t17697;
  double t17698;
  double t17699;
  double t17700;
  double t17701;
  double t17702;
  double t17703;
  double t17705;
  double t17706;
  double t17707;
  double t17712;
  double t17713;
  double t17714;
  double t17693;
  double t17694;
  double t17695;
  double t17709;
  double t17710;
  double t17718;
  double t17719;
  double t17720;
  double t17721;
  double t17723;
  double t17724;
  double t17725;
  double t17711;
  double t17715;
  double t17716;
  double t17722;
  double t17726;
  double t17727;
  double t17729;
  double t17730;
  double t17731;
  double t17587;
  double t17600;
  double t17601;
  double t17717;
  double t17735;
  double t17742;
  double t17747;
  double t17754;
  double t17759;
  double t17785;
  double t17789;
  t6039 = Cos(var1[4]);
  t12901 = Cos(var1[9]);
  t6932 = Cos(var1[5]);
  t13060 = Cos(var1[11]);
  t13882 = Sin(var1[10]);
  t13048 = Cos(var1[10]);
  t14169 = Sin(var1[11]);
  t11720 = Sin(var1[9]);
  t17563 = -1.*t13060*t13882;
  t17565 = t13048*t14169;
  t17570 = t17563 + t17565;
  t12902 = Sin(var1[5]);
  t17548 = Sin(var1[4]);
  t17592 = -1.*t13048*t13060;
  t17593 = -1.*t13882*t14169;
  t17595 = t17592 + t17593;
  t12881 = t6932*t11720;
  t12992 = t12901*t12902;
  t13020 = t12881 + t12992;
  t17606 = Cos(var1[3]);
  t17604 = Sin(var1[3]);
  t13064 = t13048*t13060;
  t14447 = t13882*t14169;
  t14494 = t13064 + t14447;
  t17571 = t12901*t6932*t17570;
  t17572 = -1.*t11720*t17570*t12902;
  t17576 = t17571 + t17572;
  t17596 = t12901*t6932*t17595;
  t17597 = -1.*t11720*t17595*t12902;
  t17599 = t17596 + t17597;
  t17607 = -1.*t12901*t6932;
  t17608 = t11720*t12902;
  t17609 = t17607 + t17608;
  t17652 = t6932*t11720*t17570;
  t17653 = t12901*t17570*t12902;
  t17655 = t17652 + t17653;
  t17657 = t6039*t14494;
  t17658 = -1.*t17548*t17576;
  t17659 = t17657 + t17658;
  t17664 = t6932*t11720*t17595;
  t17665 = t12901*t17595*t12902;
  t17667 = t17664 + t17665;
  t17669 = t6039*t17570;
  t17670 = -1.*t17548*t17599;
  t17671 = t17669 + t17670;
  t17562 = t14494*t17548;
  t17580 = t6039*t17576;
  t17581 = t17562 + t17580;
  t17691 = -1.*t12901;
  t17692 = 1. + t17691;
  t17696 = -1.*t13048;
  t17697 = 1. + t17696;
  t17698 = -0.28121*t17697;
  t17699 = -1.*t13060;
  t17700 = 1. + t17699;
  t17701 = -0.50321*t17700;
  t17702 = -0.23321*t13060;
  t17703 = t17701 + t17702;
  t17705 = t13048*t17703;
  t17706 = 0.27*t13882*t14169;
  t17707 = t17698 + t17705 + t17706;
  t17712 = -0.15121*t17692;
  t17713 = t12901*t17707;
  t17714 = t17712 + t17713;
  t17693 = 0.15121*t17692;
  t17694 = 0.15121*t12901;
  t17695 = 0.15121*t11720;
  t17709 = t11720*t17707;
  t17710 = t17693 + t17694 + t17695 + t17709;
  t17718 = 0.28121*t13882;
  t17719 = t17703*t13882;
  t17720 = -0.27*t13048*t14169;
  t17721 = t17718 + t17719 + t17720;
  t17723 = t6932*t17714;
  t17724 = -1.*t17710*t12902;
  t17725 = t17723 + t17724;
  t17711 = t6932*t17710;
  t17715 = t17714*t12902;
  t17716 = t17711 + t17715;
  t17722 = t17721*t17548;
  t17726 = t6039*t17725;
  t17727 = t17722 + t17726;
  t17729 = t6039*t17721;
  t17730 = -1.*t17548*t17725;
  t17731 = t17729 + t17730;
  t17587 = t17570*t17548;
  t17600 = t6039*t17599;
  t17601 = t17587 + t17600;
  t17717 = -1.*t17609*t17716;
  t17735 = t17655*t17716;
  t17742 = t17609*t17716;
  t17747 = -1.*t17667*t17716;
  t17754 = -1.*t17655*t17716;
  t17759 = t17667*t17716;
  t17785 = -1.*t17721*t14494;
  t17789 = t17721*t17570;
  p_output1[0]=t17601*var2[0] + t13020*t6039*var2[1] + t17581*var2[2];
  p_output1[1]=(t17606*t17667 - 1.*t17604*t17671)*var2[0] + (t13020*t17548*t17604 + t17606*t17609)*var2[1] + (t17606*t17655 - 1.*t17604*t17659)*var2[2];
  p_output1[2]=(t17604*t17667 + t17606*t17671)*var2[0] + (-1.*t13020*t17548*t17606 + t17604*t17609)*var2[1] + (t17604*t17655 + t17606*t17659)*var2[2];
  p_output1[3]=(t13020*(t17581*t17727 + t17659*t17731 + t17735)*t6039 + t17581*(t17717 + t13020*t17548*t17731 - 1.*t13020*t17727*t6039))*var2[0] + (t17601*(-1.*t17581*t17727 - 1.*t17659*t17731 + t17754) + t17581*(t17601*t17727 + t17671*t17731 + t17759))*var2[1] + (t13020*(-1.*t17601*t17727 - 1.*t17671*t17731 + t17747)*t6039 + t17601*(-1.*t13020*t17548*t17731 + t17742 + t13020*t17727*t6039))*var2[2];
  p_output1[4]=(t17655*(t17717 - 1.*t13020*t17725) + t17609*(t14494*t17721 + t17576*t17725 + t17735))*var2[0] + (t17667*(-1.*t17576*t17725 + t17754 + t17785) + t17655*(t17599*t17725 + t17759 + t17789))*var2[1] + (t17667*(t13020*t17725 + t17742) + t17609*(-1.*t17570*t17721 - 1.*t17599*t17725 + t17747))*var2[2];
  p_output1[5]=t14494*(t12901*t17710 - 1.*t11720*t17714)*var2[0] + (t17570*(-1.*t11720*t17570*t17710 - 1.*t12901*t17570*t17714 + t17785) + t14494*(t11720*t17595*t17710 + t12901*t17595*t17714 + t17789))*var2[1] + t17570*(-1.*t12901*t17710 + t11720*t17714)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(0.15121*t14494 + 0.15121*t17595)*var2[0] + (-0.15121 + t17570*(-1.*t17570*t17707 + t17785) + t14494*(t17595*t17707 + t17789))*var2[1];
  p_output1[10]=(0.28121*t14169 - 0.27*t13060*t14169 + t14169*t17703)*var2[0] + (0.28121*t13060 + 0.27*Power(t14169,2) + t13060*t17703)*var2[2];
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

#include "fRlFoot_vec_ParallelImpact2.hh"

namespace SymFunction
{

void fRlFoot_vec_ParallelImpact2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
