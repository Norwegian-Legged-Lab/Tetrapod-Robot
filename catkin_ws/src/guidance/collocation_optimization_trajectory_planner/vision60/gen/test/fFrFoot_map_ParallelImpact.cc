/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 10:40:42 GMT+02:00
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
static void output1(double *p_output1,const double *var1)
{
  double t24211;
  double t6416;
  double t13629;
  double t29530;
  double t24131;
  double t29603;
  double t29684;
  double t29695;
  double t29712;
  double t29697;
  double t29704;
  double t29709;
  double t29717;
  double t6367;
  double t29693;
  double t29685;
  double t29711;
  double t29721;
  double t29722;
  double t29735;
  double t29731;
  double t29732;
  double t29733;
  double t29726;
  double t29742;
  double t29743;
  double t29749;
  double t29858;
  double t29859;
  double t29860;
  double t29862;
  double t29864;
  double t29865;
  double t29866;
  double t29867;
  double t29869;
  double t29857;
  double t29861;
  double t29870;
  double t29871;
  double t29875;
  double t29878;
  double t29879;
  double t29880;
  double t29882;
  double t29883;
  double t29850;
  double t29852;
  double t29854;
  double t29855;
  double t29872;
  double t29873;
  double t29892;
  double t29893;
  double t29894;
  double t29897;
  double t29900;
  double t29901;
  double t29888;
  double t29889;
  double t29890;
  double t29874;
  double t29884;
  double t29885;
  double t29839;
  double t29840;
  double t29842;
  double t29896;
  double t29902;
  double t29904;
  double t29838;
  double t29843;
  double t29844;
  double t29845;
  double t29846;
  double t29847;
  double t29909;
  double t29910;
  double t29911;
  double t29915;
  double t29916;
  double t29917;
  double t29886;
  double t29921;
  double t29936;
  double t29947;
  double t29906;
  double t29907;
  double t29908;
  double t29688;
  double t29724;
  double t29725;
  double t29923;
  double t29924;
  double t29925;
  double t29994;
  double t29999;
  double t30015;
  double t30011;
  double t30025;
  double t30020;
  double t30045;
  double t30050;
  double t30056;
  double t30060;
  t24211 = Cos(var1[13]);
  t6416 = Cos(var1[14]);
  t13629 = Sin(var1[13]);
  t29530 = Sin(var1[14]);
  t24131 = t6416*t13629;
  t29603 = -1.*t24211*t29530;
  t29684 = t24131 + t29603;
  t29695 = Cos(var1[5]);
  t29712 = Sin(var1[12]);
  t29697 = t24211*t6416;
  t29704 = t13629*t29530;
  t29709 = t29697 + t29704;
  t29717 = Sin(var1[5]);
  t6367 = Cos(var1[12]);
  t29693 = Cos(var1[4]);
  t29685 = Sin(var1[4]);
  t29711 = t29695*t29709;
  t29721 = t29712*t29684*t29717;
  t29722 = t29711 + t29721;
  t29735 = Sin(var1[3]);
  t29731 = -1.*t29695*t29712*t29684;
  t29732 = t29709*t29717;
  t29733 = t29731 + t29732;
  t29726 = Cos(var1[3]);
  t29742 = t6367*t29693*t29684;
  t29743 = -1.*t29685*t29722;
  t29749 = t29742 + t29743;
  t29858 = -0.0641*t6416;
  t29859 = -0.28*t29530;
  t29860 = t29858 + t29859;
  t29862 = -1.*t6416;
  t29864 = 1. + t29862;
  t29865 = 0.075*t29864;
  t29866 = 0.355*t6416;
  t29867 = -0.0641*t29530;
  t29869 = t29865 + t29866 + t29867;
  t29857 = -0.325*t13629;
  t29861 = t24211*t29860;
  t29870 = t13629*t29869;
  t29871 = t29857 + t29861 + t29870;
  t29875 = -1.*t24211;
  t29878 = 1. + t29875;
  t29879 = 0.325*t29878;
  t29880 = -1.*t13629*t29860;
  t29882 = t24211*t29869;
  t29883 = t29879 + t29880 + t29882;
  t29850 = -1.*t6367;
  t29852 = 1. + t29850;
  t29854 = -0.1575*t29852;
  t29855 = -0.2255*t6367;
  t29872 = -1.*t29712*t29871;
  t29873 = t29854 + t29855 + t29872;
  t29892 = -0.068*t29712;
  t29893 = t6367*t29871;
  t29894 = t29892 + t29893;
  t29897 = t29695*t29883;
  t29900 = -1.*t29873*t29717;
  t29901 = t29897 + t29900;
  t29888 = t29712*t29685;
  t29889 = -1.*t6367*t29693*t29717;
  t29890 = t29888 + t29889;
  t29874 = t29695*t29873;
  t29884 = t29883*t29717;
  t29885 = t29874 + t29884;
  t29839 = -1.*t6416*t13629;
  t29840 = t24211*t29530;
  t29842 = t29839 + t29840;
  t29896 = t29894*t29685;
  t29902 = t29693*t29901;
  t29904 = t29896 + t29902;
  t29838 = t6367*t29709*t29685;
  t29843 = t29695*t29842;
  t29844 = t29712*t29709*t29717;
  t29845 = t29843 + t29844;
  t29846 = t29693*t29845;
  t29847 = t29838 + t29846;
  t29909 = t29693*t29894;
  t29910 = -1.*t29685*t29901;
  t29911 = t29909 + t29910;
  t29915 = -1.*t29695*t29712*t29709;
  t29916 = t29842*t29717;
  t29917 = t29915 + t29916;
  t29886 = -1.*t6367*t29695*t29885;
  t29921 = t29885*t29917;
  t29936 = -1.*t29712*t29894;
  t29947 = t6367*t29894*t29709;
  t29906 = t29693*t29712;
  t29907 = t6367*t29685*t29717;
  t29908 = t29906 + t29907;
  t29688 = t6367*t29684*t29685;
  t29724 = t29693*t29722;
  t29725 = t29688 + t29724;
  t29923 = t6367*t29693*t29709;
  t29924 = -1.*t29685*t29845;
  t29925 = t29923 + t29924;
  t29994 = t29885*t29733;
  t29999 = -1.*t29885*t29917;
  t30015 = -1.*t6367*t29894*t29709;
  t30011 = t6367*t29894*t29684;
  t30025 = t29883*t29709;
  t30020 = -1.*t29883*t29842;
  t30045 = t6367*t29695*t29885;
  t30050 = -1.*t29885*t29733;
  t30056 = t29712*t29894;
  t30060 = -1.*t6367*t29894*t29684;
  p_output1[0]=t29725;
  p_output1[1]=t29726*t29733 - 1.*t29735*t29749;
  p_output1[2]=t29733*t29735 + t29726*t29749;
  p_output1[3]=t29847*(t29886 - 1.*t29890*t29904 - 1.*t29908*t29911) + t29890*(t29847*t29904 + t29921 + t29911*t29925);
  p_output1[4]=t29695*(t29845*t29901 + t29921 + t29947)*t6367 + t29917*(t29886 + t29936 + t29717*t29901*t6367);
  p_output1[5]=t29712*(-1.*t29709*t29712*t29873 + t29842*t29883 + t29947) + t29709*t6367*(t29936 - 1.*t29873*t6367);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0.1575*t29684 + 0.2255*t29842;
  p_output1[13]=0.325*t29530 - 1.*t29530*t29869 - 1.*t29860*t6416;
  p_output1[14]=-0.0641;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t29890;
  p_output1[19]=-1.*t29735*t29908 + t29695*t29726*t6367;
  p_output1[20]=t29726*t29908 + t29695*t29735*t6367;
  p_output1[21]=t29847*(t29725*t29904 + t29749*t29911 + t29994) + t29725*(-1.*t29847*t29904 - 1.*t29911*t29925 + t29999);
  p_output1[22]=t29917*(t29722*t29901 + t29994 + t30011) + t29733*(-1.*t29845*t29901 + t29999 + t30015);
  p_output1[23]=t29684*(t29709*t29712*t29873 + t30015 + t30020)*t6367 + t29709*(-1.*t29684*t29712*t29873 + t30011 + t30025)*t6367;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=t29709*(-1.*t29709*t29871 + t30020) + t29842*(t29684*t29871 + t30025);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t29847;
  p_output1[37]=t29726*t29917 - 1.*t29735*t29925;
  p_output1[38]=t29735*t29917 + t29726*t29925;
  p_output1[39]=t29725*(t29890*t29904 + t29908*t29911 + t30045) + t29890*(-1.*t29725*t29904 - 1.*t29749*t29911 + t30050);
  p_output1[40]=t29695*(-1.*t29722*t29901 + t30050 + t30060)*t6367 + t29733*(t30045 + t30056 - 1.*t29717*t29901*t6367);
  p_output1[41]=t29712*(t29684*t29712*t29873 - 1.*t29709*t29883 + t30060) + t29684*t6367*(t30056 + t29873*t6367);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.068*t29709;
  p_output1[49]=-1.*t29530*t29860 - 0.325*t6416 + t29869*t6416;
  p_output1[50]=-0.28;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fFrFoot_map_ParallelImpact.hh"

namespace SymFunction
{

void fFrFoot_map_ParallelImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
