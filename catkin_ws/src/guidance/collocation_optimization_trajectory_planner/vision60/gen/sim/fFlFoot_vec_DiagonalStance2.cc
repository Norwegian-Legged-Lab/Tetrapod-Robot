/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:05:57 GMT+02:00
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
  double t559;
  double t6888;
  double t350;
  double t5664;
  double t7367;
  double t7378;
  double t7379;
  double t7571;
  double t7594;
  double t7604;
  double t7605;
  double t7610;
  double t7625;
  double t7628;
  double t7629;
  double t7621;
  double t7654;
  double t7656;
  double t7615;
  double t7630;
  double t7634;
  double t7642;
  double t7643;
  double t7644;
  double t7645;
  double t7646;
  double t7647;
  double t7658;
  double t7659;
  double t7661;
  double t7679;
  double t7685;
  double t7686;
  double t7691;
  double t7696;
  double t7698;
  double t7708;
  double t7709;
  double t7710;
  double t7715;
  double t7716;
  double t7718;
  double t7776;
  double t7777;
  double t7784;
  double t7787;
  double t7788;
  double t7789;
  double t7797;
  double t7798;
  double t7805;
  double t7775;
  double t7785;
  double t7808;
  double t7809;
  double t6275;
  double t7375;
  double t7376;
  double t7758;
  double t7761;
  double t7766;
  double t7774;
  double t7810;
  double t7811;
  double t7813;
  double t7814;
  double t7815;
  double t7816;
  double t7817;
  double t7824;
  double t7827;
  double t7831;
  double t7837;
  double t7843;
  double t7846;
  double t7847;
  double t7614;
  double t7635;
  double t7638;
  double t7866;
  double t7867;
  double t7872;
  double t7856;
  double t7860;
  double t7864;
  double t7838;
  double t7848;
  double t7849;
  double t7640;
  double t7648;
  double t7649;
  double t7873;
  double t7876;
  double t7888;
  double t7898;
  double t7912;
  double t7915;
  double t7962;
  double t7968;
  double t7930;
  double t7933;
  double t7947;
  double t7942;
  double t8022;
  double t8009;
  t559 = Cos(var1[6]);
  t6888 = Sin(var1[4]);
  t350 = Cos(var1[4]);
  t5664 = Sin(var1[5]);
  t7367 = Sin(var1[6]);
  t7378 = Cos(var1[8]);
  t7379 = Sin(var1[7]);
  t7571 = t7378*t7379;
  t7594 = Cos(var1[7]);
  t7604 = Sin(var1[8]);
  t7605 = -1.*t7594*t7604;
  t7610 = t7571 + t7605;
  t7625 = t7594*t7378;
  t7628 = t7379*t7604;
  t7629 = t7625 + t7628;
  t7621 = Cos(var1[5]);
  t7654 = Cos(var1[3]);
  t7656 = Sin(var1[3]);
  t7615 = t5664*t7367*t7610;
  t7630 = t7621*t7629;
  t7634 = t7615 + t7630;
  t7642 = -1.*t7378*t7379;
  t7643 = t7594*t7604;
  t7644 = t7642 + t7643;
  t7645 = t7621*t7644;
  t7646 = t5664*t7367*t7629;
  t7647 = t7645 + t7646;
  t7658 = t559*t6888*t5664;
  t7659 = t350*t7367;
  t7661 = t7658 + t7659;
  t7679 = -1.*t7621*t7367*t7610;
  t7685 = t5664*t7629;
  t7686 = t7679 + t7685;
  t7691 = t350*t559*t7610;
  t7696 = -1.*t6888*t7634;
  t7698 = t7691 + t7696;
  t7708 = t5664*t7644;
  t7709 = -1.*t7621*t7367*t7629;
  t7710 = t7708 + t7709;
  t7715 = t350*t559*t7629;
  t7716 = -1.*t6888*t7647;
  t7718 = t7715 + t7716;
  t7776 = -0.0641*t7378;
  t7777 = -0.28*t7604;
  t7784 = t7776 + t7777;
  t7787 = -1.*t7378;
  t7788 = 1. + t7787;
  t7789 = 0.075*t7788;
  t7797 = 0.355*t7378;
  t7798 = -0.0641*t7604;
  t7805 = t7789 + t7797 + t7798;
  t7775 = -0.325*t7379;
  t7785 = t7594*t7784;
  t7808 = t7379*t7805;
  t7809 = t7775 + t7785 + t7808;
  t6275 = -1.*t350*t559*t5664;
  t7375 = t6888*t7367;
  t7376 = t6275 + t7375;
  t7758 = -1.*t559;
  t7761 = 1. + t7758;
  t7766 = 0.1575*t7761;
  t7774 = 0.2255*t559;
  t7810 = -1.*t7367*t7809;
  t7811 = t7766 + t7774 + t7810;
  t7813 = -1.*t5664*t7811;
  t7814 = -1.*t7594;
  t7815 = 1. + t7814;
  t7816 = 0.325*t7815;
  t7817 = -1.*t7379*t7784;
  t7824 = t7594*t7805;
  t7827 = t7816 + t7817 + t7824;
  t7831 = t7621*t7827;
  t7837 = t7813 + t7831;
  t7843 = 0.068*t7367;
  t7846 = t559*t7809;
  t7847 = t7843 + t7846;
  t7614 = t559*t6888*t7610;
  t7635 = t350*t7634;
  t7638 = t7614 + t7635;
  t7866 = t7621*t7811;
  t7867 = t5664*t7827;
  t7872 = t7866 + t7867;
  t7856 = t350*t7837;
  t7860 = t6888*t7847;
  t7864 = t7856 + t7860;
  t7838 = -1.*t6888*t7837;
  t7848 = t350*t7847;
  t7849 = t7838 + t7848;
  t7640 = t559*t6888*t7629;
  t7648 = t350*t7647;
  t7649 = t7640 + t7648;
  t7873 = t7621*t559*t7872;
  t7876 = -1.*t7872*t7686;
  t7888 = t7872*t7686;
  t7898 = -1.*t7872*t7710;
  t7912 = -1.*t7621*t559*t7872;
  t7915 = t7872*t7710;
  t7962 = -1.*t7367*t7847;
  t7968 = t559*t7847*t7629;
  t7930 = t7367*t7847;
  t7933 = -1.*t559*t7847*t7610;
  t7947 = -1.*t559*t7847*t7629;
  t7942 = t559*t7847*t7610;
  t8022 = t7827*t7629;
  t8009 = -1.*t7827*t7644;
  p_output1[0]=t7638*var2[0] + t7376*var2[1] + t7649*var2[2];
  p_output1[1]=(t7654*t7686 - 1.*t7656*t7698)*var2[0] + (t559*t7621*t7654 - 1.*t7656*t7661)*var2[1] + (t7654*t7710 - 1.*t7656*t7718)*var2[2];
  p_output1[2]=(t7656*t7686 + t7654*t7698)*var2[0] + (t559*t7621*t7656 + t7654*t7661)*var2[1] + (t7656*t7710 + t7654*t7718)*var2[2];
  p_output1[3]=(t7649*(-1.*t7661*t7849 - 1.*t7376*t7864 + t7912) + t7376*(t7718*t7849 + t7649*t7864 + t7915))*var2[0] + (t7649*(t7698*t7849 + t7638*t7864 + t7888) + t7638*(-1.*t7718*t7849 - 1.*t7649*t7864 + t7898))*var2[1] + (t7638*(t7661*t7849 + t7376*t7864 + t7873) + t7376*(-1.*t7698*t7849 - 1.*t7638*t7864 + t7876))*var2[2];
  p_output1[4]=(t7710*(t559*t5664*t7837 + t7912 + t7962) + t559*t7621*(t7647*t7837 + t7915 + t7968))*var2[0] + (t7710*(t7634*t7837 + t7888 + t7942) + t7686*(-1.*t7647*t7837 + t7898 + t7947))*var2[1] + (t7686*(-1.*t559*t5664*t7837 + t7873 + t7930) + t559*t7621*(-1.*t7634*t7837 + t7876 + t7933))*var2[2];
  p_output1[5]=(t559*t7629*(-1.*t559*t7811 + t7962) + t7367*(-1.*t7367*t7629*t7811 + t7644*t7827 + t7968))*var2[0] + (t559*t7610*(t7367*t7629*t7811 + t7947 + t8009) + t559*t7629*(-1.*t7367*t7610*t7811 + t7942 + t8022))*var2[1] + (t559*t7610*(t559*t7811 + t7930) + t7367*(t7367*t7610*t7811 - 1.*t7629*t7827 + t7933))*var2[2];
  p_output1[6]=(-0.1575*t7610 - 0.2255*t7644)*var2[0] + (t7629*(-1.*t7629*t7809 + t8009) + t7644*(t7610*t7809 + t8022))*var2[1] + 0.068*t7629*var2[2];
  p_output1[7]=(0.325*t7604 - 1.*t7378*t7784 - 1.*t7604*t7805)*var2[0] + (-0.325*t7378 - 1.*t7604*t7784 + t7378*t7805)*var2[2];
  p_output1[8]=-0.0641*var2[0] - 0.28*var2[2];
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
