/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 10:40:41 GMT+02:00
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
  double t4355;
  double t3195;
  double t17868;
  double t29547;
  double t29532;
  double t29544;
  double t29553;
  double t3166;
  double t29545;
  double t29558;
  double t29564;
  double t27183;
  double t29589;
  double t29590;
  double t29593;
  double t29581;
  double t29686;
  double t29689;
  double t29595;
  double t29596;
  double t29597;
  double t29611;
  double t29614;
  double t29615;
  double t29620;
  double t29622;
  double t29623;
  double t29690;
  double t29691;
  double t29692;
  double t29698;
  double t29700;
  double t29702;
  double t29706;
  double t29707;
  double t29708;
  double t29713;
  double t29714;
  double t29716;
  double t29718;
  double t29719;
  double t29720;
  double t29568;
  double t29598;
  double t29602;
  double t29768;
  double t29773;
  double t29774;
  double t29781;
  double t29782;
  double t29783;
  double t29784;
  double t29785;
  double t29789;
  double t3196;
  double t29455;
  double t29523;
  double t29764;
  double t29779;
  double t29793;
  double t29797;
  double t29804;
  double t29805;
  double t29806;
  double t29807;
  double t29808;
  double t29809;
  double t29755;
  double t29757;
  double t29758;
  double t29759;
  double t29798;
  double t29799;
  double t29815;
  double t29819;
  double t29820;
  double t29825;
  double t29826;
  double t29827;
  double t29800;
  double t29810;
  double t29811;
  double t29823;
  double t29828;
  double t29831;
  double t29833;
  double t29834;
  double t29835;
  double t29607;
  double t29624;
  double t29678;
  double t29813;
  double t29841;
  double t29849;
  double t29856;
  double t29863;
  double t29868;
  double t29898;
  double t29903;
  double t29877;
  double t29881;
  double t29891;
  double t29887;
  double t29951;
  double t29937;
  t4355 = Cos(var1[15]);
  t3195 = Sin(var1[4]);
  t17868 = Cos(var1[4]);
  t29547 = Cos(var1[16]);
  t29532 = Cos(var1[17]);
  t29544 = Sin(var1[16]);
  t29553 = Sin(var1[17]);
  t3166 = Sin(var1[15]);
  t29545 = t29532*t29544;
  t29558 = -1.*t29547*t29553;
  t29564 = t29545 + t29558;
  t27183 = Sin(var1[5]);
  t29589 = t29547*t29532;
  t29590 = t29544*t29553;
  t29593 = t29589 + t29590;
  t29581 = Cos(var1[5]);
  t29686 = Cos(var1[3]);
  t29689 = Sin(var1[3]);
  t29595 = t29581*t29593;
  t29596 = t3166*t29564*t27183;
  t29597 = t29595 + t29596;
  t29611 = -1.*t29532*t29544;
  t29614 = t29547*t29553;
  t29615 = t29611 + t29614;
  t29620 = t29581*t29615;
  t29622 = t3166*t29593*t27183;
  t29623 = t29620 + t29622;
  t29690 = t17868*t3166;
  t29691 = t4355*t3195*t27183;
  t29692 = t29690 + t29691;
  t29698 = -1.*t29581*t3166*t29564;
  t29700 = t29593*t27183;
  t29702 = t29698 + t29700;
  t29706 = t4355*t17868*t29564;
  t29707 = -1.*t3195*t29597;
  t29708 = t29706 + t29707;
  t29713 = -1.*t29581*t3166*t29593;
  t29714 = t29615*t27183;
  t29716 = t29713 + t29714;
  t29718 = t4355*t17868*t29593;
  t29719 = -1.*t3195*t29623;
  t29720 = t29718 + t29719;
  t29568 = t4355*t29564*t3195;
  t29598 = t17868*t29597;
  t29602 = t29568 + t29598;
  t29768 = -0.0641*t29532;
  t29773 = -0.28*t29553;
  t29774 = t29768 + t29773;
  t29781 = -1.*t29532;
  t29782 = 1. + t29781;
  t29783 = -0.575*t29782;
  t29784 = -0.295*t29532;
  t29785 = -0.0641*t29553;
  t29789 = t29783 + t29784 + t29785;
  t3196 = t3166*t3195;
  t29455 = -1.*t4355*t17868*t27183;
  t29523 = t3196 + t29455;
  t29764 = 0.325*t29544;
  t29779 = t29547*t29774;
  t29793 = t29544*t29789;
  t29797 = t29764 + t29779 + t29793;
  t29804 = -1.*t29547;
  t29805 = 1. + t29804;
  t29806 = -0.325*t29805;
  t29807 = -1.*t29544*t29774;
  t29808 = t29547*t29789;
  t29809 = t29806 + t29807 + t29808;
  t29755 = -1.*t4355;
  t29757 = 1. + t29755;
  t29758 = -0.1575*t29757;
  t29759 = -0.2255*t4355;
  t29798 = -1.*t3166*t29797;
  t29799 = t29758 + t29759 + t29798;
  t29815 = -0.068*t3166;
  t29819 = t4355*t29797;
  t29820 = t29815 + t29819;
  t29825 = t29581*t29809;
  t29826 = -1.*t29799*t27183;
  t29827 = t29825 + t29826;
  t29800 = t29581*t29799;
  t29810 = t29809*t27183;
  t29811 = t29800 + t29810;
  t29823 = t29820*t3195;
  t29828 = t17868*t29827;
  t29831 = t29823 + t29828;
  t29833 = t17868*t29820;
  t29834 = -1.*t3195*t29827;
  t29835 = t29833 + t29834;
  t29607 = t4355*t29593*t3195;
  t29624 = t17868*t29623;
  t29678 = t29607 + t29624;
  t29813 = t4355*t29581*t29811;
  t29841 = -1.*t29811*t29702;
  t29849 = t29811*t29702;
  t29856 = -1.*t29811*t29716;
  t29863 = -1.*t4355*t29581*t29811;
  t29868 = t29811*t29716;
  t29898 = -1.*t3166*t29820;
  t29903 = t4355*t29820*t29593;
  t29877 = t3166*t29820;
  t29881 = -1.*t4355*t29820*t29564;
  t29891 = -1.*t4355*t29820*t29593;
  t29887 = t4355*t29820*t29564;
  t29951 = t29809*t29593;
  t29937 = -1.*t29809*t29615;
  p_output1[0]=t29602*var2[0] + t29523*var2[1] + t29678*var2[2];
  p_output1[1]=(t29686*t29702 - 1.*t29689*t29708)*var2[0] + (-1.*t29689*t29692 + t29581*t29686*t4355)*var2[1] + (t29686*t29716 - 1.*t29689*t29720)*var2[2];
  p_output1[2]=(t29689*t29702 + t29686*t29708)*var2[0] + (t29686*t29692 + t29581*t29689*t4355)*var2[1] + (t29689*t29716 + t29686*t29720)*var2[2];
  p_output1[3]=(t29678*(-1.*t29523*t29831 - 1.*t29692*t29835 + t29863) + t29523*(t29678*t29831 + t29720*t29835 + t29868))*var2[0] + (t29678*(t29602*t29831 + t29708*t29835 + t29849) + t29602*(-1.*t29678*t29831 - 1.*t29720*t29835 + t29856))*var2[1] + (t29602*(t29813 + t29523*t29831 + t29692*t29835) + t29523*(-1.*t29602*t29831 - 1.*t29708*t29835 + t29841))*var2[2];
  p_output1[4]=(t29581*(t29623*t29827 + t29868 + t29903)*t4355 + t29716*(t29863 + t29898 + t27183*t29827*t4355))*var2[0] + (t29716*(t29597*t29827 + t29849 + t29887) + t29702*(-1.*t29623*t29827 + t29856 + t29891))*var2[1] + (t29581*(-1.*t29597*t29827 + t29841 + t29881)*t4355 + t29702*(t29813 + t29877 - 1.*t27183*t29827*t4355))*var2[2];
  p_output1[5]=(t3166*(t29615*t29809 + t29903 - 1.*t29593*t29799*t3166) + t29593*t4355*(t29898 - 1.*t29799*t4355))*var2[0] + (t29593*(t29887 + t29951 - 1.*t29564*t29799*t3166)*t4355 + t29564*(t29891 + t29937 + t29593*t29799*t3166)*t4355)*var2[1] + (t3166*(-1.*t29593*t29809 + t29881 + t29564*t29799*t3166) + t29564*t4355*(t29877 + t29799*t4355))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(0.1575*t29564 + 0.2255*t29615)*var2[0] + (t29593*(-1.*t29593*t29797 + t29937) + t29615*(t29564*t29797 + t29951))*var2[1] - 0.068*t29593*var2[2];
  p_output1[16]=(-0.325*t29553 - 1.*t29532*t29774 - 1.*t29553*t29789)*var2[0] + (0.325*t29532 - 1.*t29553*t29774 + t29532*t29789)*var2[2];
  p_output1[17]=-0.0641*var2[0] - 0.28*var2[2];
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

#include "fRrFoot_vec_ParallelStance.hh"

namespace SymFunction
{

void fRrFoot_vec_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
