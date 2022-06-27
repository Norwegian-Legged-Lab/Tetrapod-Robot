/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:25:40 GMT+02:00
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
  double t25629;
  double t22588;
  double t25636;
  double t25745;
  double t25728;
  double t25743;
  double t25756;
  double t22570;
  double t25744;
  double t25762;
  double t25763;
  double t25637;
  double t25767;
  double t25768;
  double t25769;
  double t25765;
  double t25791;
  double t25793;
  double t25771;
  double t25772;
  double t25773;
  double t25779;
  double t25781;
  double t25782;
  double t25783;
  double t25785;
  double t25786;
  double t25794;
  double t25795;
  double t25796;
  double t25801;
  double t25802;
  double t25803;
  double t25806;
  double t25807;
  double t25808;
  double t25814;
  double t25817;
  double t25818;
  double t25820;
  double t25822;
  double t25823;
  double t25764;
  double t25774;
  double t25775;
  double t25852;
  double t25853;
  double t25854;
  double t25856;
  double t25858;
  double t25859;
  double t25860;
  double t25862;
  double t25863;
  double t22604;
  double t25638;
  double t25639;
  double t25850;
  double t25855;
  double t25864;
  double t25865;
  double t25869;
  double t25870;
  double t25871;
  double t25872;
  double t25873;
  double t25874;
  double t25845;
  double t25847;
  double t25848;
  double t25849;
  double t25866;
  double t25867;
  double t25878;
  double t25879;
  double t25880;
  double t25882;
  double t25883;
  double t25884;
  double t25868;
  double t25875;
  double t25876;
  double t25881;
  double t25885;
  double t25886;
  double t25888;
  double t25889;
  double t25890;
  double t25778;
  double t25787;
  double t25788;
  double t25877;
  double t25894;
  double t25901;
  double t25906;
  double t25913;
  double t25918;
  double t25946;
  double t25950;
  double t25926;
  double t25930;
  double t25940;
  double t25936;
  double t25980;
  double t25975;
  t25629 = Cos(var1[12]);
  t22588 = Sin(var1[4]);
  t25636 = Cos(var1[4]);
  t25745 = Cos(var1[13]);
  t25728 = Cos(var1[14]);
  t25743 = Sin(var1[13]);
  t25756 = Sin(var1[14]);
  t22570 = Sin(var1[12]);
  t25744 = t25728*t25743;
  t25762 = -1.*t25745*t25756;
  t25763 = t25744 + t25762;
  t25637 = Sin(var1[5]);
  t25767 = t25745*t25728;
  t25768 = t25743*t25756;
  t25769 = t25767 + t25768;
  t25765 = Cos(var1[5]);
  t25791 = Cos(var1[3]);
  t25793 = Sin(var1[3]);
  t25771 = t25765*t25769;
  t25772 = t22570*t25763*t25637;
  t25773 = t25771 + t25772;
  t25779 = -1.*t25728*t25743;
  t25781 = t25745*t25756;
  t25782 = t25779 + t25781;
  t25783 = t25765*t25782;
  t25785 = t22570*t25769*t25637;
  t25786 = t25783 + t25785;
  t25794 = t25636*t22570;
  t25795 = t25629*t22588*t25637;
  t25796 = t25794 + t25795;
  t25801 = -1.*t25765*t22570*t25763;
  t25802 = t25769*t25637;
  t25803 = t25801 + t25802;
  t25806 = t25629*t25636*t25763;
  t25807 = -1.*t22588*t25773;
  t25808 = t25806 + t25807;
  t25814 = -1.*t25765*t22570*t25769;
  t25817 = t25782*t25637;
  t25818 = t25814 + t25817;
  t25820 = t25629*t25636*t25769;
  t25822 = -1.*t22588*t25786;
  t25823 = t25820 + t25822;
  t25764 = t25629*t25763*t22588;
  t25774 = t25636*t25773;
  t25775 = t25764 + t25774;
  t25852 = -0.0641*t25728;
  t25853 = -0.28*t25756;
  t25854 = t25852 + t25853;
  t25856 = -1.*t25728;
  t25858 = 1. + t25856;
  t25859 = 0.075*t25858;
  t25860 = 0.355*t25728;
  t25862 = -0.0641*t25756;
  t25863 = t25859 + t25860 + t25862;
  t22604 = t22570*t22588;
  t25638 = -1.*t25629*t25636*t25637;
  t25639 = t22604 + t25638;
  t25850 = -0.325*t25743;
  t25855 = t25745*t25854;
  t25864 = t25743*t25863;
  t25865 = t25850 + t25855 + t25864;
  t25869 = -1.*t25745;
  t25870 = 1. + t25869;
  t25871 = 0.325*t25870;
  t25872 = -1.*t25743*t25854;
  t25873 = t25745*t25863;
  t25874 = t25871 + t25872 + t25873;
  t25845 = -1.*t25629;
  t25847 = 1. + t25845;
  t25848 = -0.1575*t25847;
  t25849 = -0.2255*t25629;
  t25866 = -1.*t22570*t25865;
  t25867 = t25848 + t25849 + t25866;
  t25878 = -0.068*t22570;
  t25879 = t25629*t25865;
  t25880 = t25878 + t25879;
  t25882 = t25765*t25874;
  t25883 = -1.*t25867*t25637;
  t25884 = t25882 + t25883;
  t25868 = t25765*t25867;
  t25875 = t25874*t25637;
  t25876 = t25868 + t25875;
  t25881 = t25880*t22588;
  t25885 = t25636*t25884;
  t25886 = t25881 + t25885;
  t25888 = t25636*t25880;
  t25889 = -1.*t22588*t25884;
  t25890 = t25888 + t25889;
  t25778 = t25629*t25769*t22588;
  t25787 = t25636*t25786;
  t25788 = t25778 + t25787;
  t25877 = t25629*t25765*t25876;
  t25894 = -1.*t25876*t25803;
  t25901 = t25876*t25803;
  t25906 = -1.*t25876*t25818;
  t25913 = -1.*t25629*t25765*t25876;
  t25918 = t25876*t25818;
  t25946 = -1.*t22570*t25880;
  t25950 = t25629*t25880*t25769;
  t25926 = t22570*t25880;
  t25930 = -1.*t25629*t25880*t25763;
  t25940 = -1.*t25629*t25880*t25769;
  t25936 = t25629*t25880*t25763;
  t25980 = t25874*t25769;
  t25975 = -1.*t25874*t25782;
  p_output1[0]=t25775*var2[0] + t25639*var2[1] + t25788*var2[2];
  p_output1[1]=(t25791*t25803 - 1.*t25793*t25808)*var2[0] + (t25629*t25765*t25791 - 1.*t25793*t25796)*var2[1] + (t25791*t25818 - 1.*t25793*t25823)*var2[2];
  p_output1[2]=(t25793*t25803 + t25791*t25808)*var2[0] + (t25629*t25765*t25793 + t25791*t25796)*var2[1] + (t25793*t25818 + t25791*t25823)*var2[2];
  p_output1[3]=(t25788*(-1.*t25639*t25886 - 1.*t25796*t25890 + t25913) + t25639*(t25788*t25886 + t25823*t25890 + t25918))*var2[0] + (t25788*(t25775*t25886 + t25808*t25890 + t25901) + t25775*(-1.*t25788*t25886 - 1.*t25823*t25890 + t25906))*var2[1] + (t25775*(t25877 + t25639*t25886 + t25796*t25890) + t25639*(-1.*t25775*t25886 - 1.*t25808*t25890 + t25894))*var2[2];
  p_output1[4]=(t25818*(t25629*t25637*t25884 + t25913 + t25946) + t25629*t25765*(t25786*t25884 + t25918 + t25950))*var2[0] + (t25818*(t25773*t25884 + t25901 + t25936) + t25803*(-1.*t25786*t25884 + t25906 + t25940))*var2[1] + (t25803*(t25877 - 1.*t25629*t25637*t25884 + t25926) + t25629*t25765*(-1.*t25773*t25884 + t25894 + t25930))*var2[2];
  p_output1[5]=(t25629*t25769*(-1.*t25629*t25867 + t25946) + t22570*(-1.*t22570*t25769*t25867 + t25782*t25874 + t25950))*var2[0] + (t25629*t25763*(t22570*t25769*t25867 + t25940 + t25975) + t25629*t25769*(-1.*t22570*t25763*t25867 + t25936 + t25980))*var2[1] + (t25629*t25763*(t25629*t25867 + t25926) + t22570*(t22570*t25763*t25867 - 1.*t25769*t25874 + t25930))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(0.1575*t25763 + 0.2255*t25782)*var2[0] + (t25769*(-1.*t25769*t25865 + t25975) + t25782*(t25763*t25865 + t25980))*var2[1] - 0.068*t25769*var2[2];
  p_output1[13]=(0.325*t25756 - 1.*t25728*t25854 - 1.*t25756*t25863)*var2[0] + (-0.325*t25728 - 1.*t25756*t25854 + t25728*t25863)*var2[2];
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
