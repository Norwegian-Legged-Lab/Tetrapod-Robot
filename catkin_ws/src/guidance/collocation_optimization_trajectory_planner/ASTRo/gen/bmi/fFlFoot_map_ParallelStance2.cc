/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 19:00:15 GMT+02:00
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
  double t4142;
  double t4096;
  double t4100;
  double t4156;
  double t4178;
  double t4186;
  double t4192;
  double t4176;
  double t5816;
  double t4174;
  double t5931;
  double t4172;
  double t4139;
  double t4160;
  double t4169;
  double t4062;
  double t4193;
  double t5941;
  double t7652;
  double t7693;
  double t7681;
  double t7682;
  double t7691;
  double t7674;
  double t7697;
  double t7699;
  double t7700;
  double t7713;
  double t7714;
  double t7715;
  double t7728;
  double t7729;
  double t7730;
  double t7731;
  double t7736;
  double t7737;
  double t7738;
  double t7739;
  double t7750;
  double t7751;
  double t7752;
  double t7767;
  double t7768;
  double t7769;
  double t7770;
  double t7802;
  double t7811;
  double t7812;
  double t7819;
  double t7820;
  double t7832;
  double t7837;
  double t7838;
  double t7839;
  double t7840;
  double t7843;
  double t7844;
  double t7847;
  double t7848;
  double t7858;
  double t7810;
  double t7825;
  double t7826;
  double t7712;
  double t7716;
  double t7721;
  double t7722;
  double t7723;
  double t7724;
  double t7846;
  double t7862;
  double t7863;
  double t7873;
  double t7874;
  double t7880;
  double t7886;
  double t7887;
  double t7888;
  double t7725;
  double t7726;
  double t7727;
  double t7830;
  double t7889;
  double t4170;
  double t7666;
  double t7673;
  double t7893;
  double t7896;
  double t7897;
  double t7964;
  double t7970;
  double t7976;
  double t7980;
  double t8009;
  double t8014;
  t4142 = Cos(var1[7]);
  t4096 = Cos(var1[8]);
  t4100 = Sin(var1[7]);
  t4156 = Sin(var1[8]);
  t4178 = t4142*t4096;
  t4186 = t4100*t4156;
  t4192 = t4178 + t4186;
  t4176 = Cos(var1[6]);
  t5816 = Sin(var1[5]);
  t4174 = Cos(var1[5]);
  t5931 = Sin(var1[6]);
  t4172 = Cos(var1[4]);
  t4139 = -1.*t4096*t4100;
  t4160 = t4142*t4156;
  t4169 = t4139 + t4160;
  t4062 = Sin(var1[4]);
  t4193 = t4174*t4176*t4192;
  t5941 = -1.*t5816*t5931*t4192;
  t7652 = t4193 + t5941;
  t7693 = Sin(var1[3]);
  t7681 = t4176*t5816*t4192;
  t7682 = t4174*t5931*t4192;
  t7691 = t7681 + t7682;
  t7674 = Cos(var1[3]);
  t7697 = t4172*t4169;
  t7699 = -1.*t4062*t7652;
  t7700 = t7697 + t7699;
  t7713 = t4096*t4100;
  t7714 = -1.*t4142*t4156;
  t7715 = t7713 + t7714;
  t7728 = -1.*t4176;
  t7729 = 1. + t7728;
  t7730 = 0.15121*t7729;
  t7731 = -1.*t4142;
  t7736 = 1. + t7731;
  t7737 = 0.28121*t7736;
  t7738 = -1.*t4096;
  t7739 = 1. + t7738;
  t7750 = 0.50321*t7739;
  t7751 = 0.19821*t4096;
  t7752 = t7750 + t7751;
  t7767 = t4142*t7752;
  t7768 = -0.305*t4100*t4156;
  t7769 = t7737 + t7767 + t7768;
  t7770 = t4176*t7769;
  t7802 = t7730 + t7770;
  t7811 = 0.15121*t4176;
  t7812 = -0.15121*t5931;
  t7819 = t5931*t7769;
  t7820 = t7730 + t7811 + t7812 + t7819;
  t7832 = -1.*t4176*t5816;
  t7837 = -1.*t4174*t5931;
  t7838 = t7832 + t7837;
  t7839 = 0.28121*t4100;
  t7840 = -1.*t7752*t4100;
  t7843 = -0.305*t4142*t4156;
  t7844 = t7839 + t7840 + t7843;
  t7847 = t4174*t7802;
  t7848 = -1.*t5816*t7820;
  t7858 = t7847 + t7848;
  t7810 = t5816*t7802;
  t7825 = t4174*t7820;
  t7826 = t7810 + t7825;
  t7712 = t4062*t4192;
  t7716 = t4174*t4176*t7715;
  t7721 = -1.*t5816*t5931*t7715;
  t7722 = t7716 + t7721;
  t7723 = t4172*t7722;
  t7724 = t7712 + t7723;
  t7846 = t4062*t7844;
  t7862 = t4172*t7858;
  t7863 = t7846 + t7862;
  t7873 = t4172*t7844;
  t7874 = -1.*t4062*t7858;
  t7880 = t7873 + t7874;
  t7886 = t4176*t5816*t7715;
  t7887 = t4174*t5931*t7715;
  t7888 = t7886 + t7887;
  t7725 = t4174*t4176;
  t7726 = -1.*t5816*t5931;
  t7727 = t7725 + t7726;
  t7830 = -1.*t7727*t7826;
  t7889 = t7888*t7826;
  t4170 = t4062*t4169;
  t7666 = t4172*t7652;
  t7673 = t4170 + t7666;
  t7893 = t4172*t4192;
  t7896 = -1.*t4062*t7722;
  t7897 = t7893 + t7896;
  t7964 = -1.*t7888*t7826;
  t7970 = t7691*t7826;
  t7976 = -1.*t7844*t4192;
  t7980 = t7844*t4169;
  t8009 = t7727*t7826;
  t8014 = -1.*t7691*t7826;
  p_output1[0]=t7673;
  p_output1[1]=t7674*t7691 - 1.*t7693*t7700;
  p_output1[2]=t7691*t7693 + t7674*t7700;
  p_output1[3]=t7724*(t7830 - 1.*t4172*t7838*t7863 + t4062*t7838*t7880) + t4172*t7838*(t7724*t7863 + t7889 + t7880*t7897);
  p_output1[4]=(t7830 - 1.*t7838*t7858)*t7888 + t7727*(t4192*t7844 + t7722*t7858 + t7889);
  p_output1[5]=t4192*(t5931*t7802 - 1.*t4176*t7820);
  p_output1[6]=0;
  p_output1[7]=0.28121*t4156 - 0.305*t4096*t4156 - 1.*t4156*t7752;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t4172*t7838;
  p_output1[19]=t7674*t7727 + t4062*t7693*t7838;
  p_output1[20]=t7693*t7727 - 1.*t4062*t7674*t7838;
  p_output1[21]=t7673*(-1.*t7724*t7863 - 1.*t7880*t7897 + t7964) + t7724*(t7673*t7863 + t7700*t7880 + t7970);
  p_output1[22]=t7691*(-1.*t7722*t7858 + t7964 + t7976) + t7888*(t7652*t7858 + t7970 + t7980);
  p_output1[23]=t4169*(-1.*t4176*t7715*t7802 - 1.*t5931*t7715*t7820 + t7976) + t4192*(t4176*t4192*t7802 + t4192*t5931*t7820 + t7980);
  p_output1[24]=-0.15121 + t4169*(-1.*t7715*t7769 + t7976) + t4192*(t4192*t7769 + t7980);
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t7724;
  p_output1[37]=t7674*t7888 - 1.*t7693*t7897;
  p_output1[38]=t7693*t7888 + t7674*t7897;
  p_output1[39]=t7673*(t4172*t7838*t7863 - 1.*t4062*t7838*t7880 + t8009) + t4172*t7838*(-1.*t7673*t7863 - 1.*t7700*t7880 + t8014);
  p_output1[40]=t7691*(t7838*t7858 + t8009) + t7727*(-1.*t4169*t7844 - 1.*t7652*t7858 + t8014);
  p_output1[41]=t4169*(-1.*t5931*t7802 + t4176*t7820);
  p_output1[42]=0.15121*t4169 + 0.15121*t7715;
  p_output1[43]=0.28121*t4096 + 0.305*Power(t4156,2) - 1.*t4096*t7752;
  p_output1[44]=-0.305;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
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

#include "fFlFoot_map_ParallelStance2.hh"

namespace SymFunction
{

void fFlFoot_map_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
