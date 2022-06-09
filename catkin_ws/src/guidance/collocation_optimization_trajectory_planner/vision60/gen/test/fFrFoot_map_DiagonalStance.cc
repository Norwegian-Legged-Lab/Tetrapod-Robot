/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 10:40:24 GMT+02:00
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
  double t10257;
  double t10230;
  double t10235;
  double t10259;
  double t10251;
  double t10284;
  double t10285;
  double t10295;
  double t10310;
  double t10301;
  double t10303;
  double t10305;
  double t10311;
  double t10228;
  double t10288;
  double t10286;
  double t10309;
  double t10312;
  double t10313;
  double t10321;
  double t10317;
  double t10318;
  double t10319;
  double t10316;
  double t10322;
  double t10323;
  double t10324;
  double t18004;
  double t27683;
  double t27699;
  double t27706;
  double t27710;
  double t27712;
  double t27713;
  double t27722;
  double t27733;
  double t13504;
  double t27703;
  double t27737;
  double t27743;
  double t27760;
  double t27761;
  double t27830;
  double t27839;
  double t27849;
  double t27853;
  double t10389;
  double t10414;
  double t10419;
  double t11443;
  double t27749;
  double t27751;
  double t27874;
  double t27875;
  double t27876;
  double t27882;
  double t27883;
  double t27884;
  double t27871;
  double t27872;
  double t27873;
  double t27756;
  double t27854;
  double t27855;
  double t10345;
  double t10352;
  double t10357;
  double t27881;
  double t27885;
  double t27886;
  double t10340;
  double t10365;
  double t10369;
  double t10375;
  double t10379;
  double t10385;
  double t27898;
  double t27900;
  double t27902;
  double t27912;
  double t27913;
  double t27914;
  double t27867;
  double t27915;
  double t27932;
  double t27936;
  double t27888;
  double t27896;
  double t27897;
  double t10287;
  double t10314;
  double t10315;
  double t27922;
  double t27924;
  double t27925;
  double t28023;
  double t28033;
  double t28049;
  double t28043;
  double t28063;
  double t28056;
  double t28093;
  double t28098;
  double t28105;
  double t28109;
  t10257 = Cos(var1[13]);
  t10230 = Cos(var1[14]);
  t10235 = Sin(var1[13]);
  t10259 = Sin(var1[14]);
  t10251 = t10230*t10235;
  t10284 = -1.*t10257*t10259;
  t10285 = t10251 + t10284;
  t10295 = Cos(var1[5]);
  t10310 = Sin(var1[12]);
  t10301 = t10257*t10230;
  t10303 = t10235*t10259;
  t10305 = t10301 + t10303;
  t10311 = Sin(var1[5]);
  t10228 = Cos(var1[12]);
  t10288 = Cos(var1[4]);
  t10286 = Sin(var1[4]);
  t10309 = t10295*t10305;
  t10312 = t10310*t10285*t10311;
  t10313 = t10309 + t10312;
  t10321 = Sin(var1[3]);
  t10317 = -1.*t10295*t10310*t10285;
  t10318 = t10305*t10311;
  t10319 = t10317 + t10318;
  t10316 = Cos(var1[3]);
  t10322 = t10228*t10288*t10285;
  t10323 = -1.*t10286*t10313;
  t10324 = t10322 + t10323;
  t18004 = -0.0641*t10230;
  t27683 = -0.28*t10259;
  t27699 = t18004 + t27683;
  t27706 = -1.*t10230;
  t27710 = 1. + t27706;
  t27712 = 0.075*t27710;
  t27713 = 0.355*t10230;
  t27722 = -0.0641*t10259;
  t27733 = t27712 + t27713 + t27722;
  t13504 = -0.325*t10235;
  t27703 = t10257*t27699;
  t27737 = t10235*t27733;
  t27743 = t13504 + t27703 + t27737;
  t27760 = -1.*t10257;
  t27761 = 1. + t27760;
  t27830 = 0.325*t27761;
  t27839 = -1.*t10235*t27699;
  t27849 = t10257*t27733;
  t27853 = t27830 + t27839 + t27849;
  t10389 = -1.*t10228;
  t10414 = 1. + t10389;
  t10419 = -0.1575*t10414;
  t11443 = -0.2255*t10228;
  t27749 = -1.*t10310*t27743;
  t27751 = t10419 + t11443 + t27749;
  t27874 = -0.068*t10310;
  t27875 = t10228*t27743;
  t27876 = t27874 + t27875;
  t27882 = t10295*t27853;
  t27883 = -1.*t27751*t10311;
  t27884 = t27882 + t27883;
  t27871 = t10310*t10286;
  t27872 = -1.*t10228*t10288*t10311;
  t27873 = t27871 + t27872;
  t27756 = t10295*t27751;
  t27854 = t27853*t10311;
  t27855 = t27756 + t27854;
  t10345 = -1.*t10230*t10235;
  t10352 = t10257*t10259;
  t10357 = t10345 + t10352;
  t27881 = t27876*t10286;
  t27885 = t10288*t27884;
  t27886 = t27881 + t27885;
  t10340 = t10228*t10305*t10286;
  t10365 = t10295*t10357;
  t10369 = t10310*t10305*t10311;
  t10375 = t10365 + t10369;
  t10379 = t10288*t10375;
  t10385 = t10340 + t10379;
  t27898 = t10288*t27876;
  t27900 = -1.*t10286*t27884;
  t27902 = t27898 + t27900;
  t27912 = -1.*t10295*t10310*t10305;
  t27913 = t10357*t10311;
  t27914 = t27912 + t27913;
  t27867 = -1.*t10228*t10295*t27855;
  t27915 = t27855*t27914;
  t27932 = -1.*t10310*t27876;
  t27936 = t10228*t27876*t10305;
  t27888 = t10288*t10310;
  t27896 = t10228*t10286*t10311;
  t27897 = t27888 + t27896;
  t10287 = t10228*t10285*t10286;
  t10314 = t10288*t10313;
  t10315 = t10287 + t10314;
  t27922 = t10228*t10288*t10305;
  t27924 = -1.*t10286*t10375;
  t27925 = t27922 + t27924;
  t28023 = t27855*t10319;
  t28033 = -1.*t27855*t27914;
  t28049 = -1.*t10228*t27876*t10305;
  t28043 = t10228*t27876*t10285;
  t28063 = t27853*t10305;
  t28056 = -1.*t27853*t10357;
  t28093 = t10228*t10295*t27855;
  t28098 = -1.*t27855*t10319;
  t28105 = t10310*t27876;
  t28109 = -1.*t10228*t27876*t10285;
  p_output1[0]=t10315;
  p_output1[1]=t10316*t10319 - 1.*t10321*t10324;
  p_output1[2]=t10319*t10321 + t10316*t10324;
  p_output1[3]=t10385*(t27867 - 1.*t27873*t27886 - 1.*t27897*t27902) + t27873*(t10385*t27886 + t27915 + t27902*t27925);
  p_output1[4]=t27914*(t27867 + t10228*t10311*t27884 + t27932) + t10228*t10295*(t10375*t27884 + t27915 + t27936);
  p_output1[5]=t10228*t10305*(-1.*t10228*t27751 + t27932) + t10310*(-1.*t10305*t10310*t27751 + t10357*t27853 + t27936);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0.1575*t10285 + 0.2255*t10357;
  p_output1[13]=0.325*t10259 - 1.*t10230*t27699 - 1.*t10259*t27733;
  p_output1[14]=-0.0641;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t27873;
  p_output1[19]=t10228*t10295*t10316 - 1.*t10321*t27897;
  p_output1[20]=t10228*t10295*t10321 + t10316*t27897;
  p_output1[21]=t10385*(t10315*t27886 + t10324*t27902 + t28023) + t10315*(-1.*t10385*t27886 - 1.*t27902*t27925 + t28033);
  p_output1[22]=t27914*(t10313*t27884 + t28023 + t28043) + t10319*(-1.*t10375*t27884 + t28033 + t28049);
  p_output1[23]=t10228*t10285*(t10305*t10310*t27751 + t28049 + t28056) + t10228*t10305*(-1.*t10285*t10310*t27751 + t28043 + t28063);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=t10305*(-1.*t10305*t27743 + t28056) + t10357*(t10285*t27743 + t28063);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t10385;
  p_output1[37]=t10316*t27914 - 1.*t10321*t27925;
  p_output1[38]=t10321*t27914 + t10316*t27925;
  p_output1[39]=t10315*(t27873*t27886 + t27897*t27902 + t28093) + t27873*(-1.*t10315*t27886 - 1.*t10324*t27902 + t28098);
  p_output1[40]=t10319*(-1.*t10228*t10311*t27884 + t28093 + t28105) + t10228*t10295*(-1.*t10313*t27884 + t28098 + t28109);
  p_output1[41]=t10228*t10285*(t10228*t27751 + t28105) + t10310*(t10285*t10310*t27751 - 1.*t10305*t27853 + t28109);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.068*t10305;
  p_output1[49]=-0.325*t10230 - 1.*t10259*t27699 + t10230*t27733;
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

#include "fFrFoot_map_DiagonalStance.hh"

namespace SymFunction
{

void fFrFoot_map_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
