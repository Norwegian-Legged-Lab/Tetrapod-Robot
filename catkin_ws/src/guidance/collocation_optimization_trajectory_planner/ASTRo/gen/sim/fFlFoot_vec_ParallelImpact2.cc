/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:38:25 GMT+02:00
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
  double t2144;
  double t10512;
  double t2161;
  double t13140;
  double t13889;
  double t13118;
  double t13929;
  double t10493;
  double t10515;
  double t18637;
  double t18651;
  double t18653;
  double t13101;
  double t13792;
  double t13934;
  double t14073;
  double t10507;
  double t10531;
  double t10533;
  double t18717;
  double t18714;
  double t18657;
  double t18674;
  double t18683;
  double t18693;
  double t18696;
  double t18697;
  double t18700;
  double t18703;
  double t18704;
  double t18718;
  double t18719;
  double t18720;
  double t18726;
  double t18727;
  double t18728;
  double t18730;
  double t18731;
  double t18733;
  double t18738;
  double t18739;
  double t18740;
  double t18742;
  double t18744;
  double t18745;
  double t14563;
  double t18686;
  double t18687;
  double t18766;
  double t18767;
  double t18768;
  double t18769;
  double t18770;
  double t18771;
  double t18772;
  double t18773;
  double t18774;
  double t18775;
  double t18777;
  double t18778;
  double t18779;
  double t18780;
  double t18782;
  double t18783;
  double t18785;
  double t18786;
  double t18788;
  double t18789;
  double t18793;
  double t18794;
  double t18795;
  double t18796;
  double t18798;
  double t18799;
  double t18800;
  double t18784;
  double t18790;
  double t18791;
  double t18797;
  double t18801;
  double t18802;
  double t18804;
  double t18805;
  double t18806;
  double t18698;
  double t18706;
  double t18711;
  double t18792;
  double t18810;
  double t18818;
  double t18825;
  double t18834;
  double t18839;
  double t18878;
  double t18882;
  t2144 = Cos(var1[4]);
  t10512 = Cos(var1[5]);
  t2161 = Cos(var1[6]);
  t13140 = Cos(var1[8]);
  t13889 = Sin(var1[7]);
  t13118 = Cos(var1[7]);
  t13929 = Sin(var1[8]);
  t10493 = Sin(var1[5]);
  t10515 = Sin(var1[6]);
  t18637 = t13140*t13889;
  t18651 = -1.*t13118*t13929;
  t18653 = t18637 + t18651;
  t13101 = Sin(var1[4]);
  t13792 = t13118*t13140;
  t13934 = t13889*t13929;
  t14073 = t13792 + t13934;
  t10507 = -1.*t2161*t10493;
  t10531 = -1.*t10512*t10515;
  t10533 = t10507 + t10531;
  t18717 = Cos(var1[3]);
  t18714 = Sin(var1[3]);
  t18657 = t10512*t2161*t18653;
  t18674 = -1.*t10493*t10515*t18653;
  t18683 = t18657 + t18674;
  t18693 = -1.*t13140*t13889;
  t18696 = t13118*t13929;
  t18697 = t18693 + t18696;
  t18700 = t10512*t2161*t14073;
  t18703 = -1.*t10493*t10515*t14073;
  t18704 = t18700 + t18703;
  t18718 = t10512*t2161;
  t18719 = -1.*t10493*t10515;
  t18720 = t18718 + t18719;
  t18726 = t2161*t10493*t18653;
  t18727 = t10512*t10515*t18653;
  t18728 = t18726 + t18727;
  t18730 = t2144*t14073;
  t18731 = -1.*t13101*t18683;
  t18733 = t18730 + t18731;
  t18738 = t2161*t10493*t14073;
  t18739 = t10512*t10515*t14073;
  t18740 = t18738 + t18739;
  t18742 = t2144*t18697;
  t18744 = -1.*t13101*t18704;
  t18745 = t18742 + t18744;
  t14563 = t13101*t14073;
  t18686 = t2144*t18683;
  t18687 = t14563 + t18686;
  t18766 = -1.*t2161;
  t18767 = 1. + t18766;
  t18768 = 0.15121*t18767;
  t18769 = -1.*t13118;
  t18770 = 1. + t18769;
  t18771 = 0.28121*t18770;
  t18772 = -1.*t13140;
  t18773 = 1. + t18772;
  t18774 = 0.50321*t18773;
  t18775 = 0.19821*t13140;
  t18777 = t18774 + t18775;
  t18778 = t13118*t18777;
  t18779 = -0.305*t13889*t13929;
  t18780 = t18771 + t18778 + t18779;
  t18782 = t2161*t18780;
  t18783 = t18768 + t18782;
  t18785 = 0.15121*t2161;
  t18786 = -0.15121*t10515;
  t18788 = t10515*t18780;
  t18789 = t18768 + t18785 + t18786 + t18788;
  t18793 = 0.28121*t13889;
  t18794 = -1.*t18777*t13889;
  t18795 = -0.305*t13118*t13929;
  t18796 = t18793 + t18794 + t18795;
  t18798 = t10512*t18783;
  t18799 = -1.*t10493*t18789;
  t18800 = t18798 + t18799;
  t18784 = t10493*t18783;
  t18790 = t10512*t18789;
  t18791 = t18784 + t18790;
  t18797 = t13101*t18796;
  t18801 = t2144*t18800;
  t18802 = t18797 + t18801;
  t18804 = t2144*t18796;
  t18805 = -1.*t13101*t18800;
  t18806 = t18804 + t18805;
  t18698 = t13101*t18697;
  t18706 = t2144*t18704;
  t18711 = t18698 + t18706;
  t18792 = -1.*t18720*t18791;
  t18810 = t18728*t18791;
  t18818 = t18720*t18791;
  t18825 = -1.*t18740*t18791;
  t18834 = -1.*t18728*t18791;
  t18839 = t18740*t18791;
  t18878 = -1.*t18796*t14073;
  t18882 = t18796*t18697;
  p_output1[0]=t18711*var2[0] + t10533*t2144*var2[1] + t18687*var2[2];
  p_output1[1]=(t18717*t18740 - 1.*t18714*t18745)*var2[0] + (t10533*t13101*t18714 + t18717*t18720)*var2[1] + (t18717*t18728 - 1.*t18714*t18733)*var2[2];
  p_output1[2]=(t18714*t18740 + t18717*t18745)*var2[0] + (-1.*t10533*t13101*t18717 + t18714*t18720)*var2[1] + (t18714*t18728 + t18717*t18733)*var2[2];
  p_output1[3]=(t10533*(t18687*t18802 + t18733*t18806 + t18810)*t2144 + t18687*(t18792 + t10533*t13101*t18806 - 1.*t10533*t18802*t2144))*var2[0] + (t18711*(-1.*t18687*t18802 - 1.*t18733*t18806 + t18834) + t18687*(t18711*t18802 + t18745*t18806 + t18839))*var2[1] + (t10533*(-1.*t18711*t18802 - 1.*t18745*t18806 + t18825)*t2144 + t18711*(-1.*t10533*t13101*t18806 + t18818 + t10533*t18802*t2144))*var2[2];
  p_output1[4]=(t18728*(t18792 - 1.*t10533*t18800) + t18720*(t14073*t18796 + t18683*t18800 + t18810))*var2[0] + (t18740*(-1.*t18683*t18800 + t18834 + t18878) + t18728*(t18704*t18800 + t18839 + t18882))*var2[1] + (t18740*(t10533*t18800 + t18818) + t18720*(-1.*t18697*t18796 - 1.*t18704*t18800 + t18825))*var2[2];
  p_output1[5]=t14073*(t10515*t18783 - 1.*t18789*t2161)*var2[0] + (t14073*(t10515*t14073*t18789 + t18882 + t14073*t18783*t2161) + t18697*(-1.*t10515*t18653*t18789 + t18878 - 1.*t18653*t18783*t2161))*var2[1] + t18697*(-1.*t10515*t18783 + t18789*t2161)*var2[2];
  p_output1[6]=(-0.15121 + t18697*(-1.*t18653*t18780 + t18878) + t14073*(t14073*t18780 + t18882))*var2[1] + (0.15121*t18653 + 0.15121*t18697)*var2[2];
  p_output1[7]=(0.28121*t13929 - 0.305*t13140*t13929 - 1.*t13929*t18777)*var2[0] + (0.28121*t13140 + 0.305*Power(t13929,2) - 1.*t13140*t18777)*var2[2];
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

#include "fFlFoot_vec_ParallelImpact2.hh"

namespace SymFunction
{

void fFlFoot_vec_ParallelImpact2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
