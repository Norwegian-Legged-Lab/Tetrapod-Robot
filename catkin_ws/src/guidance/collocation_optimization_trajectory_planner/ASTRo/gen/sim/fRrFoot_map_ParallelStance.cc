/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:37:42 GMT+02:00
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
  double t3833;
  double t2554;
  double t2564;
  double t3905;
  double t13320;
  double t13336;
  double t13383;
  double t13317;
  double t13391;
  double t13316;
  double t13392;
  double t13304;
  double t3443;
  double t3906;
  double t3919;
  double t3920;
  double t13386;
  double t13396;
  double t13400;
  double t13435;
  double t13427;
  double t13429;
  double t13430;
  double t13423;
  double t13436;
  double t13440;
  double t13441;
  double t13693;
  double t13705;
  double t13719;
  double t13731;
  double t13745;
  double t13751;
  double t13755;
  double t13771;
  double t13779;
  double t13780;
  double t13798;
  double t13804;
  double t13805;
  double t13817;
  double t13827;
  double t13828;
  double t13720;
  double t13723;
  double t13818;
  double t13819;
  double t13842;
  double t13849;
  double t13850;
  double t13851;
  double t13865;
  double t13869;
  double t13870;
  double t13876;
  double t13883;
  double t13884;
  double t13820;
  double t13829;
  double t13831;
  double t13471;
  double t13472;
  double t13477;
  double t13482;
  double t13483;
  double t13605;
  double t13638;
  double t13639;
  double t13640;
  double t13875;
  double t13893;
  double t13897;
  double t13901;
  double t13902;
  double t13906;
  double t13913;
  double t13914;
  double t13917;
  double t13674;
  double t13682;
  double t13687;
  double t13838;
  double t13923;
  double t3923;
  double t13411;
  double t13415;
  double t13925;
  double t13926;
  double t13940;
  double t14057;
  double t14070;
  double t14085;
  double t14089;
  double t14211;
  double t14260;
  t3833 = Cos(var1[16]);
  t2554 = Cos(var1[17]);
  t2564 = Sin(var1[16]);
  t3905 = Sin(var1[17]);
  t13320 = -1.*t3833*t2554;
  t13336 = -1.*t2564*t3905;
  t13383 = t13320 + t13336;
  t13317 = Cos(var1[5]);
  t13391 = Sin(var1[15]);
  t13316 = Cos(var1[15]);
  t13392 = Sin(var1[5]);
  t13304 = Cos(var1[4]);
  t3443 = -1.*t2554*t2564;
  t3906 = t3833*t3905;
  t3919 = t3443 + t3906;
  t3920 = Sin(var1[4]);
  t13386 = t13316*t13317*t13383;
  t13396 = -1.*t13391*t13383*t13392;
  t13400 = t13386 + t13396;
  t13435 = Sin(var1[3]);
  t13427 = t13317*t13391*t13383;
  t13429 = t13316*t13383*t13392;
  t13430 = t13427 + t13429;
  t13423 = Cos(var1[3]);
  t13436 = t13304*t3919;
  t13440 = -1.*t3920*t13400;
  t13441 = t13436 + t13440;
  t13693 = -1.*t13316;
  t13705 = 1. + t13693;
  t13719 = -0.15121*t13705;
  t13731 = -1.*t3833;
  t13745 = 1. + t13731;
  t13751 = -0.28121*t13745;
  t13755 = -1.*t2554;
  t13771 = 1. + t13755;
  t13779 = -0.50321*t13771;
  t13780 = -0.19821*t2554;
  t13798 = t13779 + t13780;
  t13804 = t3833*t13798;
  t13805 = 0.305*t2564*t3905;
  t13817 = t13751 + t13804 + t13805;
  t13827 = t13316*t13817;
  t13828 = t13719 + t13827;
  t13720 = -0.15121*t13316;
  t13723 = 0.15121*t13391;
  t13818 = t13391*t13817;
  t13819 = t13719 + t13720 + t13723 + t13818;
  t13842 = t13317*t13391;
  t13849 = t13316*t13392;
  t13850 = t13842 + t13849;
  t13851 = 0.28121*t2564;
  t13865 = t13798*t2564;
  t13869 = -0.305*t3833*t3905;
  t13870 = t13851 + t13865 + t13869;
  t13876 = t13317*t13828;
  t13883 = -1.*t13819*t13392;
  t13884 = t13876 + t13883;
  t13820 = t13317*t13819;
  t13829 = t13828*t13392;
  t13831 = t13820 + t13829;
  t13471 = t3833*t2554;
  t13472 = t2564*t3905;
  t13477 = t13471 + t13472;
  t13482 = t13477*t3920;
  t13483 = t13316*t13317*t3919;
  t13605 = -1.*t13391*t3919*t13392;
  t13638 = t13483 + t13605;
  t13639 = t13304*t13638;
  t13640 = t13482 + t13639;
  t13875 = t13870*t3920;
  t13893 = t13304*t13884;
  t13897 = t13875 + t13893;
  t13901 = t13304*t13870;
  t13902 = -1.*t3920*t13884;
  t13906 = t13901 + t13902;
  t13913 = t13317*t13391*t3919;
  t13914 = t13316*t3919*t13392;
  t13917 = t13913 + t13914;
  t13674 = -1.*t13316*t13317;
  t13682 = t13391*t13392;
  t13687 = t13674 + t13682;
  t13838 = -1.*t13687*t13831;
  t13923 = t13917*t13831;
  t3923 = t3919*t3920;
  t13411 = t13304*t13400;
  t13415 = t3923 + t13411;
  t13925 = t13304*t13477;
  t13926 = -1.*t3920*t13638;
  t13940 = t13925 + t13926;
  t14057 = -1.*t13917*t13831;
  t14070 = t13430*t13831;
  t14085 = -1.*t13870*t13477;
  t14089 = t13870*t3919;
  t14211 = t13687*t13831;
  t14260 = -1.*t13430*t13831;
  p_output1[0]=t13415;
  p_output1[1]=t13423*t13430 - 1.*t13435*t13441;
  p_output1[2]=t13430*t13435 + t13423*t13441;
  p_output1[3]=t13304*t13850*(t13640*t13897 + t13923 + t13906*t13940) + t13640*(t13838 - 1.*t13304*t13850*t13897 + t13850*t13906*t3920);
  p_output1[4]=(t13838 - 1.*t13850*t13884)*t13917 + t13687*(t13477*t13870 + t13638*t13884 + t13923);
  p_output1[5]=t13477*(t13316*t13819 - 1.*t13391*t13828);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=-0.15121*t13383 - 0.15121*t13477;
  p_output1[16]=0.28121*t3905 + t13798*t3905 - 0.305*t2554*t3905;
  p_output1[17]=0;
  p_output1[18]=t13304*t13850;
  p_output1[19]=t13423*t13687 + t13435*t13850*t3920;
  p_output1[20]=t13435*t13687 - 1.*t13423*t13850*t3920;
  p_output1[21]=t13415*(-1.*t13640*t13897 - 1.*t13906*t13940 + t14057) + t13640*(t13415*t13897 + t13441*t13906 + t14070);
  p_output1[22]=t13430*(-1.*t13638*t13884 + t14057 + t14085) + t13917*(t13400*t13884 + t14070 + t14089);
  p_output1[23]=t13477*(t13383*t13391*t13819 + t13316*t13383*t13828 + t14089) + t3919*(t14085 - 1.*t13391*t13819*t3919 - 1.*t13316*t13828*t3919);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=-0.15121 + t13477*(t13383*t13817 + t14089) + t3919*(t14085 - 1.*t13817*t3919);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t13640;
  p_output1[37]=t13423*t13917 - 1.*t13435*t13940;
  p_output1[38]=t13435*t13917 + t13423*t13940;
  p_output1[39]=t13304*t13850*(-1.*t13415*t13897 - 1.*t13441*t13906 + t14260) + t13415*(t13304*t13850*t13897 + t14211 - 1.*t13850*t13906*t3920);
  p_output1[40]=t13430*(t13850*t13884 + t14211) + t13687*(-1.*t13400*t13884 + t14260 - 1.*t13870*t3919);
  p_output1[41]=(-1.*t13316*t13819 + t13391*t13828)*t3919;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0.28121*t2554 + t13798*t2554 + 0.305*Power(t3905,2);
  p_output1[53]=-0.305;
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

#include "fRrFoot_map_ParallelStance.hh"

namespace SymFunction
{

void fRrFoot_map_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
